/*===========================================================================*/
/*   (SawC/code.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawC/code.scm)*/
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

	typedef struct BgL_atomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}              *BgL_atomz00_bglt;

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

	typedef struct BgL_rtl_returnz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                    *BgL_rtl_returnz00_bglt;

	typedef struct BgL_rtl_selectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_patternsz00;
	}                    *BgL_rtl_selectz00_bglt;

	typedef struct BgL_rtl_switchz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_patternsz00;
		obj_t BgL_labelsz00;
	}                    *BgL_rtl_switchz00_bglt;

	typedef struct BgL_rtl_ifeqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_thenz00;
	}                  *BgL_rtl_ifeqz00_bglt;

	typedef struct BgL_rtl_ifnez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_thenz00;
	}                  *BgL_rtl_ifnez00_bglt;

	typedef struct BgL_rtl_goz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_toz00;
	}                *BgL_rtl_goz00_bglt;

	typedef struct BgL_rtl_movz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_movz00_bglt;

	typedef struct BgL_rtl_loadiz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_atomz00_bgl *BgL_constantz00;
	}                   *BgL_rtl_loadiz00_bglt;

	typedef struct BgL_rtl_loadgz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                   *BgL_rtl_loadgz00_bglt;

	typedef struct BgL_rtl_loadfunz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                     *BgL_rtl_loadfunz00_bglt;

	typedef struct BgL_rtl_globalrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                       *BgL_rtl_globalrefz00_bglt;

	typedef struct BgL_rtl_vallocz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                    *BgL_rtl_vallocz00_bglt;

	typedef struct BgL_rtl_vrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                  *BgL_rtl_vrefz00_bglt;

	typedef struct BgL_rtl_vlengthz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                     *BgL_rtl_vlengthz00_bglt;

	typedef struct BgL_rtl_storegz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                    *BgL_rtl_storegz00_bglt;

	typedef struct BgL_rtl_vsetz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                  *BgL_rtl_vsetz00_bglt;

	typedef struct BgL_rtl_callz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                  *BgL_rtl_callz00_bglt;

	typedef struct BgL_rtl_lightfuncallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                          *BgL_rtl_lightfuncallz00_bglt;

	typedef struct BgL_rtl_funcallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                     *BgL_rtl_funcallz00_bglt;

	typedef struct BgL_rtl_pragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_formatz00;
	}                    *BgL_rtl_pragmaz00_bglt;

	typedef struct BgL_rtl_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                  *BgL_rtl_castz00_bglt;

	typedef struct BgL_rtl_cast_nullz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                       *BgL_rtl_cast_nullz00_bglt;

	typedef struct BgL_rtl_protectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                     *BgL_rtl_protectz00_bglt;

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
	}              *BgL_iregz00_bglt;


	static bool_t BGl_genbodyz00zzsaw_c_codez00(obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_genzd2prefixzd2zzsaw_c_codez00(BgL_rtl_funz00_bglt);
	static obj_t BGl_backendzd2subtypezf3zd2cvm4771zf3zzsaw_c_codez00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	extern obj_t BGl_rtl_vlengthz00zzsaw_defsz00;
	static obj_t BGl_genzd2typezd2regsz00zzsaw_c_codez00(obj_t);
	BGL_IMPORT obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_rtl_storegz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl_genfunz00zzsaw_c_codez00(BgL_cvmz00_bglt, BgL_globalz00_bglt,
		obj_t);
	extern obj_t BGl_emitzd2atomzd2valuez00zzbackend_c_emitz00(obj_t);
	extern obj_t BGl_za2stdcza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_protectz00zzsaw_defsz00;
	extern obj_t BGl_rtl_globalrefz00zzsaw_defsz00;
	static obj_t BGl__genzd2funzd2namezd2default4719zd2zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_za2badzd2macrosza2zd2zzsaw_c_codez00 = BUNSPEC;
	extern obj_t BGl_rtl_cast_nullz00zzsaw_defsz00;
	static obj_t BGl_findzd2locationzd2zzsaw_c_codez00(BgL_rtl_insz00_bglt);
	extern obj_t BGl_rtl_returnz00zzsaw_defsz00;
	static obj_t BGl_headerz00zzsaw_c_codez00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static bool_t BGl_za2haspushexitza2z00zzsaw_c_codez00;
	extern obj_t BGl_rtl_funz00zzsaw_defsz00;
	static obj_t BGl_cnstzd2initzd2zzsaw_c_codez00();
	static obj_t BGl_vfunzd2namezd2zzsaw_c_codez00(obj_t, BgL_typez00_bglt);
	static obj_t BGl__genzd2exprzd2default4705z00zzsaw_c_codez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_loadfunz00zzsaw_defsz00;
	BGL_EXPORTED_DECL obj_t BGl_sawzd2cheaderzd2zzsaw_c_codez00();
	static obj_t BGl_genzd2funzd2namezd2rtl_loa4735zd2zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_genzd2exprzd2rtl_funcall4710z00zzsaw_c_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genzd2funzd2namezd2rtl_loa4737zd2zzsaw_c_codez00(obj_t,
		obj_t);
	static bool_t BGl_multiplezd2evaluationzd2zzsaw_c_codez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t
		BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00;
	extern obj_t
		BGl_registerzd2allocationzd2zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt, BgL_globalz00_bglt, obj_t, obj_t);
	extern obj_t BGl_rtl_goz00zzsaw_defsz00;
	extern obj_t BGl_rtl_insz00zzsaw_defsz00;
	static bool_t BGl_za2countza2z00zzsaw_c_codez00;
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_genzd2regzd2zzsaw_c_codez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_c_codez00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzsaw_registerzd2allocationzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_exprz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_woodcutterz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_genzd2prefixzd2rtl_store4749z00zzsaw_c_codez00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_c_codez00();
	static obj_t BGl_genzd2prefixzd2rtl_ifeq4755z00zzsaw_c_codez00(obj_t, obj_t);
	static obj_t BGl_genzd2funzd2namezd2rtl_vse4729zd2zzsaw_c_codez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t make_string(long, unsigned char);
	extern obj_t BGl_rtl_funcallz00zzsaw_defsz00;
	static obj_t BGl_exprzd2ze3iregz31zzsaw_c_codez00(obj_t, obj_t, obj_t);
	static obj_t BGl_acceptzd2foldingzf3zd2cvm4773zf3zzsaw_c_codez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_check_funz00zzsaw_c_codez00(BgL_rtl_funz00_bglt);
	static obj_t BGl_genzd2prefixzd2rtl_vallo4759z00zzsaw_c_codez00(obj_t, obj_t);
	static obj_t BGl_genzd2prefixzd2rtl_ifne4757z00zzsaw_c_codez00(obj_t, obj_t);
	extern obj_t BGl_buildzd2treezd2zzsaw_exprz00(BgL_backendz00_bglt, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_cepiloguez00zzsaw_c_codez00();
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl__sawzd2cheaderzd2zzsaw_c_codez00(obj_t);
	static obj_t BGl_za2counterza2z00zzsaw_c_codez00 = BUNSPEC;
	static obj_t BGl__genzd2prefixzd2zzsaw_c_codez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__sawzd2cepiloguezd2zzsaw_c_codez00(obj_t);
	static obj_t BGl__genzd2funzd2namez00zzsaw_c_codez00(obj_t, obj_t);
	static obj_t BGl_iregz00zzsaw_c_codez00 = BUNSPEC;
	static bool_t BGl_za2traceza2z00zzsaw_c_codez00;
	static obj_t BGl_genzd2prefixzd2rtl_loadf4747z00zzsaw_c_codez00(obj_t, obj_t);
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	static obj_t BGl_patchz00zzsaw_c_codez00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34789ze3z83zzsaw_c_codez00(obj_t);
	static bool_t BGl_za2haspushbeforeza2z00zzsaw_c_codez00;
	extern obj_t
		BGl_makezd2typedzd2declarationz00zztype_toolsz00(BgL_typez00_bglt, obj_t);
	static long BGl_za2pushtraceemmitedza2z00zzsaw_c_codez00;
	extern obj_t BGl_rtl_vallocz00zzsaw_defsz00;
	static bool_t BGl_deepzd2movzf3z21zzsaw_c_codez00(obj_t);
	static obj_t BGl_genzd2funzd2namezd2rtl_vre4727zd2zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_genzd2funzd2namezd2rtl_vle4731zd2zzsaw_c_codez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sawzd2cepiloguezd2zzsaw_c_codez00();
	extern bool_t BGl_globalzd2argszd2safezf3zf3zzast_varz00(BgL_globalz00_bglt);
	static obj_t BGl_zc3anonymousza34799ze3z83zzsaw_c_codez00(obj_t);
	static obj_t BGl_genzd2exprzd2zzsaw_c_codez00(BgL_rtl_funz00_bglt, obj_t);
	static obj_t BGl_genzd2prefixzd2rtl_cast4767z00zzsaw_c_codez00(obj_t, obj_t);
	static obj_t BGl_genzd2regzf2destz20zzsaw_c_codez00(obj_t);
	static obj_t BGl__genzd2prefixzd2default4740z00zzsaw_c_codez00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4777z83zzsaw_c_codez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_cvmz00zzbackend_cvmz00;
	static obj_t BGl_methodzd2initzd2zzsaw_c_codez00();
	extern obj_t BGl_rtl_callz00zzsaw_defsz00;
	static bool_t BGl_za2commentza2z00zzsaw_c_codez00;
	BGL_IMPORT obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
	static obj_t BGl_zc3anonymousza34828ze3z83zzsaw_c_codez00(obj_t);
	static obj_t BGl__iregzf3zf3zzsaw_c_codez00(obj_t, obj_t);
	BGL_IMPORT bool_t bigloo_strcmp(obj_t, obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_rtl_castz00zzsaw_defsz00;
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_c_codez00 = BUNSPEC;
	static obj_t BGl_genzd2typezd2regz00zzsaw_c_codez00(obj_t);
	extern obj_t BGl_za2czd2debugzd2lineszd2infoza2zd2zzengine_paramz00;
	static obj_t BGl_z52thezd2iregzd2nilz52zzsaw_c_codez00 = BUNSPEC;
	static obj_t BGl_genzd2exprzd2rtl_protect4712z00zzsaw_c_codez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bigloo_mangle(obj_t);
	static obj_t BGl_thezd2stringzd2zzsaw_c_codez00(obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_c_codez00();
	static obj_t BGl_genzd2prefixzd2rtl_vref4761z00zzsaw_c_codez00(obj_t, obj_t);
	static obj_t BGl_genzd2exprzd2rtl_switch4716z00zzsaw_c_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2iregz80zzsaw_c_codez00(obj_t);
	static obj_t BGl_genzd2exprzd2rtl_pragma4714z00zzsaw_c_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genzd2prefixzd2rtl_loadg4745z00zzsaw_c_codez00(obj_t, obj_t);
	static obj_t BGl__genzd2exprzd2zzsaw_c_codez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_switchz00zzsaw_defsz00;
	static obj_t BGl_genzd2Xfuncallzd2zzsaw_c_codez00(obj_t, obj_t, bool_t);
	static obj_t BGl_genzd2exprzd2rtl_call4718z00zzsaw_c_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_vextraz00zzsaw_c_codez00(BgL_typez00_bglt);
	static obj_t
		BGl_genzd2exprzd2default4705z00zzsaw_c_codez00(BgL_rtl_funz00_bglt, obj_t);
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	static obj_t BGl_genzd2prefixzd2rtl_vleng4765z00zzsaw_c_codez00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static bool_t BGl_declarezd2regszd2zzsaw_c_codez00(obj_t);
	static BgL_iregz00_bglt BGl_iregzd2nilzd2zzsaw_c_codez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_c_codez00();
	static bool_t BGl_za2inlinezd2simplezd2macrosza2z00zzsaw_c_codez00;
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl_genzd2prefixzd2rtl_go4753z00zzsaw_c_codez00(obj_t, obj_t);
	static obj_t BGl_genzd2funzd2namezd2rtl_ret4739zd2zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_genzd2funzd2namezd2rtl_val4725zd2zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_walkz00zzsaw_c_codez00(obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	BGL_EXPORTED_DECL obj_t BGl_sawzd2cgenzd2zzsaw_c_codez00(BgL_cvmz00_bglt,
		BgL_globalz00_bglt);
	static bool_t BGl_genzd2argszd2zzsaw_c_codez00(obj_t);
	static bool_t BGl_printzd2locationzf3z21zzsaw_c_codez00(obj_t);
	extern obj_t BGl_rtl_pragmaz00zzsaw_defsz00;
	static obj_t BGl_genzd2prefixzd2rtl_globa4751z00zzsaw_c_codez00(obj_t, obj_t);
	static obj_t BGl_getzd2localszd2zzsaw_c_codez00(obj_t, obj_t);
	extern obj_t BGl_rtl_lightfuncallz00zzsaw_defsz00;
	BGL_IMPORT obj_t rgc_buffer_substring(obj_t, long, long);
	extern obj_t BGl_rtl_ifeqz00zzsaw_defsz00;
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl__iregzd2nilzd2zzsaw_c_codez00(obj_t);
	extern obj_t BGl_za2czd2portza2zd2zzbackend_c_emitz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_ifnez00zzsaw_defsz00;
	extern obj_t BGl_rtl_loadgz00zzsaw_defsz00;
	extern obj_t BGl_rtl_loadiz00zzsaw_defsz00;
	static obj_t BGl_emitzd2pragmazd2zzsaw_c_codez00(obj_t, obj_t);
	static obj_t BGl_reg_namez00zzsaw_c_codez00(obj_t);
	extern obj_t BGl_za2sawzd2registerzd2allocationzf3za2zf3zzengine_paramz00;
	extern obj_t BGl_globalzd2ze3blocksz31zzsaw_woodcutterz00(BgL_backendz00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl_genzd2upcasezd2zzsaw_c_codez00(BgL_rtl_funz00_bglt);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl__sawzd2cgenzd2zzsaw_c_codez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_vrefz00zzsaw_defsz00;
	BGL_IMPORT bool_t rgc_fill_buffer(obj_t);
	extern BgL_rtl_regz00_bglt
		BGl_localzd2ze3regz31zzsaw_node2rtlz00(BgL_localz00_bglt);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_genzd2prefixzd2rtl_vset4763z00zzsaw_c_codez00(obj_t, obj_t);
	static obj_t BGl_genzd2prefixzd2rtl_cast_4769z00zzsaw_c_codez00(obj_t, obj_t);
	static obj_t BGl_genzd2funzd2namez00zzsaw_c_codez00(BgL_rtl_funz00_bglt);
	static obj_t BGl_objectzd2initzd2zzsaw_c_codez00();
	static obj_t BGl_genzd2inszd2zzsaw_c_codez00(BgL_rtl_insz00_bglt);
	static obj_t BGl_outzd2labelzd2zzsaw_c_codez00(int);
	static bool_t BGl_za2hasprotectza2z00zzsaw_c_codez00;
	extern obj_t BGl_rtl_vsetz00zzsaw_defsz00;
	static obj_t BGl_objectzd2ze3structzd2ireg4775ze3zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_genzd2funzd2namezd2rtl_mov4733zd2zzsaw_c_codez00(obj_t,
		obj_t);
	static obj_t BGl_genzd2exprzd2rtl_lightfu4708z00zzsaw_c_codez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_c_codez00();
	static obj_t BGl_genzd2prefixzd2rtl_loadi4743z00zzsaw_c_codez00(obj_t, obj_t);
	static obj_t __cnst[7];


	extern obj_t BGl_backendzd2subtypezf3zd2envzf3zzbackend_backendz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawzd2cepiloguezd2envz00zzsaw_c_codez00,
		BgL_bgl__sawza7d2cepilogue5726za7, BGl__sawzd2cepiloguezd2zzsaw_c_codez00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_GENERIC(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
		BgL_bgl__genza7d2funza7d2nam5727z00,
		BGl__genzd2funzd2namez00zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
		BgL_bgl__genza7d2prefixza7d25728z00, BGl__genzd2prefixzd2zzsaw_c_codez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_genzd2exprzd2default4705zd2envzd2zzsaw_c_codez00,
		BgL_bgl__genza7d2exprza7d2de5729z00,
		BGl__genzd2exprzd2default4705z00zzsaw_c_codez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawzd2cgenzd2envz00zzsaw_c_codez00,
		BgL_bgl__sawza7d2cgenza7d2za7za75730z00, BGl__sawzd2cgenzd2zzsaw_c_codez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_z52allocatezd2iregzd2envz52zzsaw_c_codez00,
		BgL_bgl__za752allocateza7d2i5731z00,
		BGl__z52allocatezd2iregz80zzsaw_c_codez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_iregzd2nilzd2envz00zzsaw_c_codez00,
		BgL_bgl__iregza7d2nilza7d2za7za75732z00, BGl__iregzd2nilzd2zzsaw_c_codez00,
		0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawzd2cheaderzd2envz00zzsaw_c_codez00,
		BgL_bgl__sawza7d2cheaderza7d5733z00, BGl__sawzd2cheaderzd2zzsaw_c_codez00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5561z00zzsaw_c_codez00,
		BgL_bgl_za7c3anonymousza7a345734z00,
		BGl_zc3anonymousza34789ze3z83zzsaw_c_codez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5566z00zzsaw_c_codez00,
		BgL_bgl_za7c3anonymousza7a345735z00,
		BGl_zc3anonymousza34799ze3z83zzsaw_c_codez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_iregzf3zd2envz21zzsaw_c_codez00,
		BgL_bgl__iregza7f3za7f3za7za7saw5736z00, BGl__iregzf3zf3zzsaw_c_codez00, 0L,
		BUNSPEC, 1);
	extern obj_t BGl_acceptzd2foldingzf3zd2envzf3zzsaw_exprz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5661z00zzsaw_c_codez00,
		BgL_bgl_genza7d2exprza7d2rtl5737z00,
		BGl_genzd2exprzd2rtl_lightfu4708z00zzsaw_c_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5662z00zzsaw_c_codez00,
		BgL_bgl_genza7d2exprza7d2rtl5738z00,
		BGl_genzd2exprzd2rtl_funcall4710z00zzsaw_c_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5663z00zzsaw_c_codez00,
		BgL_bgl_genza7d2exprza7d2rtl5739z00,
		BGl_genzd2exprzd2rtl_protect4712z00zzsaw_c_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5664z00zzsaw_c_codez00,
		BgL_bgl_genza7d2exprza7d2rtl5740z00,
		BGl_genzd2exprzd2rtl_pragma4714z00zzsaw_c_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5665z00zzsaw_c_codez00,
		BgL_bgl_genza7d2exprza7d2rtl5741z00,
		BGl_genzd2exprzd2rtl_switch4716z00zzsaw_c_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5666z00zzsaw_c_codez00,
		BgL_bgl_genza7d2exprza7d2rtl5742z00,
		BGl_genzd2exprzd2rtl_call4718z00zzsaw_c_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5667z00zzsaw_c_codez00,
		BgL_bgl_genza7d2funza7d2name5743z00,
		BGl_genzd2funzd2namezd2rtl_val4725zd2zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5668z00zzsaw_c_codez00,
		BgL_bgl_genza7d2funza7d2name5744z00,
		BGl_genzd2funzd2namezd2rtl_vre4727zd2zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5670z00zzsaw_c_codez00,
		BgL_bgl_genza7d2funza7d2name5745z00,
		BGl_genzd2funzd2namezd2rtl_vle4731zd2zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5669z00zzsaw_c_codez00,
		BgL_bgl_genza7d2funza7d2name5746z00,
		BGl_genzd2funzd2namezd2rtl_vse4729zd2zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5671z00zzsaw_c_codez00,
		BgL_bgl_genza7d2funza7d2name5747z00,
		BGl_genzd2funzd2namezd2rtl_mov4733zd2zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5672z00zzsaw_c_codez00,
		BgL_bgl_genza7d2funza7d2name5748z00,
		BGl_genzd2funzd2namezd2rtl_loa4735zd2zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5673z00zzsaw_c_codez00,
		BgL_bgl_genza7d2funza7d2name5749z00,
		BGl_genzd2funzd2namezd2rtl_loa4737zd2zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5674z00zzsaw_c_codez00,
		BgL_bgl_genza7d2funza7d2name5750z00,
		BGl_genzd2funzd2namezd2rtl_ret4739zd2zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5675z00zzsaw_c_codez00,
		BgL_bgl_genza7d2prefixza7d2r5751z00,
		BGl_genzd2prefixzd2rtl_loadi4743z00zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5676z00zzsaw_c_codez00,
		BgL_bgl_genza7d2prefixza7d2r5752z00,
		BGl_genzd2prefixzd2rtl_loadg4745z00zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5677z00zzsaw_c_codez00,
		BgL_bgl_genza7d2prefixza7d2r5753z00,
		BGl_genzd2prefixzd2rtl_loadf4747z00zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5678z00zzsaw_c_codez00,
		BgL_bgl_genza7d2prefixza7d2r5754z00,
		BGl_genzd2prefixzd2rtl_store4749z00zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5680z00zzsaw_c_codez00,
		BgL_bgl_genza7d2prefixza7d2r5755z00,
		BGl_genzd2prefixzd2rtl_go4753z00zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5679z00zzsaw_c_codez00,
		BgL_bgl_genza7d2prefixza7d2r5756z00,
		BGl_genzd2prefixzd2rtl_globa4751z00zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5681z00zzsaw_c_codez00,
		BgL_bgl_genza7d2prefixza7d2r5757z00,
		BGl_genzd2prefixzd2rtl_ifeq4755z00zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5682z00zzsaw_c_codez00,
		BgL_bgl_genza7d2prefixza7d2r5758z00,
		BGl_genzd2prefixzd2rtl_ifne4757z00zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5683z00zzsaw_c_codez00,
		BgL_bgl_genza7d2prefixza7d2r5759z00,
		BGl_genzd2prefixzd2rtl_vallo4759z00zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5684z00zzsaw_c_codez00,
		BgL_bgl_genza7d2prefixza7d2r5760z00,
		BGl_genzd2prefixzd2rtl_vref4761z00zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5685z00zzsaw_c_codez00,
		BgL_bgl_genza7d2prefixza7d2r5761z00,
		BGl_genzd2prefixzd2rtl_vset4763z00zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5686z00zzsaw_c_codez00,
		BgL_bgl_genza7d2prefixza7d2r5762z00,
		BGl_genzd2prefixzd2rtl_vleng4765z00zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5687z00zzsaw_c_codez00,
		BgL_bgl_genza7d2prefixza7d2r5763z00,
		BGl_genzd2prefixzd2rtl_cast4767z00zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5688z00zzsaw_c_codez00,
		BgL_bgl_genza7d2prefixza7d2r5764z00,
		BGl_genzd2prefixzd2rtl_cast_4769z00zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5689z00zzsaw_c_codez00,
		BgL_bgl_backendza7d2subtyp5765za7,
		BGl_backendzd2subtypezf3zd2cvm4771zf3zzsaw_c_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5691z00zzsaw_c_codez00,
		BgL_bgl_acceptza7d2folding5766za7,
		BGl_acceptzd2foldingzf3zd2cvm4773zf3zzsaw_c_codez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5693z00zzsaw_c_codez00,
		BgL_bgl_objectza7d2za7e3stru5767z00,
		BGl_objectzd2ze3structzd2ireg4775ze3zzsaw_c_codez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5695z00zzsaw_c_codez00,
		BgL_bgl_structza7b2objectza75768z00,
		BGl_structzb2objectzd2ze3objec4777z83zzsaw_c_codez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string5562z00zzsaw_c_codez00,
		BgL_bgl_string5562za700za7za7s5769za7, "extern int bbcount[];\n", 22);
	      DEFINE_STRING(BGl_string5563z00zzsaw_c_codez00,
		BgL_bgl_string5563za700za7za7s5770za7, "extern char *bbname[];\n", 23);
	      DEFINE_STRING(BGl_string5564z00zzsaw_c_codez00,
		BgL_bgl_string5564za700za7za7s5771za7,
		"extern obj_t PRINT_TRACE(obj_t);\n\n", 34);
	      DEFINE_STRING(BGl_string5565z00zzsaw_c_codez00,
		BgL_bgl_string5565za700za7za7s5772za7, "\n", 1);
	      DEFINE_STRING(BGl_string5567z00zzsaw_c_codez00,
		BgL_bgl_string5567za700za7za7s5773za7, "];\n", 3);
	      DEFINE_STRING(BGl_string5568z00zzsaw_c_codez00,
		BgL_bgl_string5568za700za7za7s5774za7, "int bbcount[", 12);
	      DEFINE_STRING(BGl_string5570z00zzsaw_c_codez00,
		BgL_bgl_string5570za700za7za7s5775za7, "obj_t PRINT_TRACE(obj_t r) {\n",
		29);
	      DEFINE_STRING(BGl_string5569z00zzsaw_c_codez00,
		BgL_bgl_string5569za700za7za7s5776za7, "char *bbname[", 13);
	      DEFINE_STRING(BGl_string5571z00zzsaw_c_codez00,
		BgL_bgl_string5571za700za7za7s5777za7, "\tint i;\n", 8);
	      DEFINE_STRING(BGl_string5572z00zzsaw_c_codez00,
		BgL_bgl_string5572za700za7za7s5778za7, ";i++)\n", 6);
	      DEFINE_STRING(BGl_string5573z00zzsaw_c_codez00,
		BgL_bgl_string5573za700za7za7s5779za7, "\tfor(i=0;i<", 11);
	      DEFINE_STRING(BGl_string5574z00zzsaw_c_codez00,
		BgL_bgl_string5574za700za7za7s5780za7,
		"\t\tprintf(\"%d\t%d\\n\",bbcount[i],i);\n", 34);
	      DEFINE_STRING(BGl_string5575z00zzsaw_c_codez00,
		BgL_bgl_string5575za700za7za7s5781za7, "\treturn(BIGLOO_EXIT(r));\n", 25);
	      DEFINE_STRING(BGl_string5576z00zzsaw_c_codez00,
		BgL_bgl_string5576za700za7za7s5782za7, "}\n", 2);
	      DEFINE_STRING(BGl_string5577z00zzsaw_c_codez00,
		BgL_bgl_string5577za700za7za7s5783za7, " */\n", 4);
	      DEFINE_STRING(BGl_string5578z00zzsaw_c_codez00,
		BgL_bgl_string5578za700za7za7s5784za7, "/* ", 3);
	      DEFINE_STRING(BGl_string5580z00zzsaw_c_codez00,
		BgL_bgl_string5580za700za7za7s5785za7, " {AN_OBJECT\n", 12);
	      DEFINE_STRING(BGl_string5579z00zzsaw_c_codez00,
		BgL_bgl_string5579za700za7za7s5786za7, " ", 1);
	      DEFINE_STRING(BGl_string5581z00zzsaw_c_codez00,
		BgL_bgl_string5581za700za7za7s5787za7, " jmp_buf_t jmpbuf;\n", 19);
	      DEFINE_STRING(BGl_string5582z00zzsaw_c_codez00,
		BgL_bgl_string5582za700za7za7s5788za7, " struct exitd exitd;\n", 21);
	      DEFINE_STRING(BGl_string5583z00zzsaw_c_codez00,
		BgL_bgl_string5583za700za7za7s5789za7, " struct befored befored;\n", 25);
	      DEFINE_STRING(BGl_string5584z00zzsaw_c_codez00,
		BgL_bgl_string5584za700za7za7s5790za7, "\\n\");\n", 6);
	      DEFINE_STRING(BGl_string5585z00zzsaw_c_codez00,
		BgL_bgl_string5585za700za7za7s5791za7, "=", 1);
	      DEFINE_STRING(BGl_string5586z00zzsaw_c_codez00,
		BgL_bgl_string5586za700za7za7s5792za7, "printf(\"", 8);
	      DEFINE_STRING(BGl_string5587z00zzsaw_c_codez00,
		BgL_bgl_string5587za700za7za7s5793za7, "(", 1);
	      DEFINE_STRING(BGl_string5588z00zzsaw_c_codez00,
		BgL_bgl_string5588za700za7za7s5794za7, ", ", 2);
	      DEFINE_STRING(BGl_string5600z00zzsaw_c_codez00,
		BgL_bgl_string5600za700za7za7s5795za7, "\tprintf(\"", 9);
	      DEFINE_STRING(BGl_string5590z00zzsaw_c_codez00,
		BgL_bgl_string5590za700za7za7s5796za7, "V", 1);
	      DEFINE_STRING(BGl_string5589z00zzsaw_c_codez00,
		BgL_bgl_string5589za700za7za7s5797za7, ")", 1);
	      DEFINE_STRING(BGl_string5601z00zzsaw_c_codez00,
		BgL_bgl_string5601za700za7za7s5798za7, "#line ", 6);
	      DEFINE_STRING(BGl_string5591z00zzsaw_c_codez00,
		BgL_bgl_string5591za700za7za7s5799za7, "R", 1);
	      DEFINE_STRING(BGl_string5602z00zzsaw_c_codez00,
		BgL_bgl_string5602za700za7za7s5800za7, " \"", 2);
	      DEFINE_STRING(BGl_string5592z00zzsaw_c_codez00,
		BgL_bgl_string5592za700za7za7s5801za7, "; /* ", 5);
	      DEFINE_STRING(BGl_string5603z00zzsaw_c_codez00,
		BgL_bgl_string5603za700za7za7s5802za7, "\"", 1);
	      DEFINE_STRING(BGl_string5593z00zzsaw_c_codez00,
		BgL_bgl_string5593za700za7za7s5803za7, ";\n", 2);
	      DEFINE_STRING(BGl_string5604z00zzsaw_c_codez00,
		BgL_bgl_string5604za700za7za7s5804za7, "\t", 1);
	      DEFINE_STRING(BGl_string5594z00zzsaw_c_codez00,
		BgL_bgl_string5594za700za7za7s5805za7, "", 0);
	      DEFINE_STRING(BGl_string5605z00zzsaw_c_codez00,
		BgL_bgl_string5605za700za7za7s5806za7, " = ", 3);
	      DEFINE_STRING(BGl_string5595z00zzsaw_c_codez00,
		BgL_bgl_string5595za700za7za7s5807za7, ":", 1);
	      DEFINE_STRING(BGl_string5606z00zzsaw_c_codez00,
		BgL_bgl_string5606za700za7za7s5808za7, "ENTRY(", 6);
	      DEFINE_STRING(BGl_string5596z00zzsaw_c_codez00,
		BgL_bgl_string5596za700za7za7s5809za7, "L", 1);
	      DEFINE_STRING(BGl_string5607z00zzsaw_c_codez00,
		BgL_bgl_string5607za700za7za7s5810za7, "PROCEDURE_", 10);
	      DEFINE_STRING(BGl_string5597z00zzsaw_c_codez00,
		BgL_bgl_string5597za700za7za7s5811za7, "]++;", 4);
	      DEFINE_STRING(BGl_string5608z00zzsaw_c_codez00,
		BgL_bgl_string5608za700za7za7s5812za7, ")(", 2);
	      DEFINE_STRING(BGl_string5598z00zzsaw_c_codez00,
		BgL_bgl_string5598za700za7za7s5813za7, "\tbbcount[", 9);
	      DEFINE_STRING(BGl_string5610z00zzsaw_c_codez00,
		BgL_bgl_string5610za700za7za7s5814za7, "BGL_", 4);
	      DEFINE_STRING(BGl_string5609z00zzsaw_c_codez00,
		BgL_bgl_string5609za700za7za7s5815za7, ", BEOA", 6);
	      DEFINE_STRING(BGl_string5599z00zzsaw_c_codez00,
		BgL_bgl_string5599za700za7za7s5816za7, "\\n\"); ", 6);
	      DEFINE_STRING(BGl_string5611z00zzsaw_c_codez00,
		BgL_bgl_string5611za700za7za7s5817za7, "T", 1);
	      DEFINE_STRING(BGl_string5612z00zzsaw_c_codez00,
		BgL_bgl_string5612za700za7za7s5818za7, "BGL_RTL_", 8);
	      DEFINE_STRING(BGl_string5613z00zzsaw_c_codez00,
		BgL_bgl_string5613za700za7za7s5819za7, "==", 2);
	      DEFINE_STRING(BGl_string5614z00zzsaw_c_codez00,
		BgL_bgl_string5614za700za7za7s5820za7, "BGL_RTL_EQ", 10);
	      DEFINE_STRING(BGl_string5615z00zzsaw_c_codez00,
		BgL_bgl_string5615za700za7za7s5821za7, ">=", 2);
	      DEFINE_STRING(BGl_string5616z00zzsaw_c_codez00,
		BgL_bgl_string5616za700za7za7s5822za7, "BGL_RTL_GE", 10);
	      DEFINE_STRING(BGl_string5617z00zzsaw_c_codez00,
		BgL_bgl_string5617za700za7za7s5823za7, "<=", 2);
	      DEFINE_STRING(BGl_string5618z00zzsaw_c_codez00,
		BgL_bgl_string5618za700za7za7s5824za7, "BGL_RTL_LE", 10);
	      DEFINE_STRING(BGl_string5620z00zzsaw_c_codez00,
		BgL_bgl_string5620za700za7za7s5825za7, "BGL_RTL_GT", 10);
	      DEFINE_STRING(BGl_string5619z00zzsaw_c_codez00,
		BgL_bgl_string5619za700za7za7s5826za7, ">", 1);
	      DEFINE_STRING(BGl_string5621z00zzsaw_c_codez00,
		BgL_bgl_string5621za700za7za7s5827za7, "<", 1);
	      DEFINE_STRING(BGl_string5622z00zzsaw_c_codez00,
		BgL_bgl_string5622za700za7za7s5828za7, "BGL_RTL_LT", 10);
	      DEFINE_STRING(BGl_string5623z00zzsaw_c_codez00,
		BgL_bgl_string5623za700za7za7s5829za7, "|", 1);
	      DEFINE_STRING(BGl_string5624z00zzsaw_c_codez00,
		BgL_bgl_string5624za700za7za7s5830za7, "BGL_RTL_OR", 10);
	      DEFINE_STRING(BGl_string5625z00zzsaw_c_codez00,
		BgL_bgl_string5625za700za7za7s5831za7, "&", 1);
	      DEFINE_STRING(BGl_string5626z00zzsaw_c_codez00,
		BgL_bgl_string5626za700za7za7s5832za7, "BGL_RTL_AND", 11);
	      DEFINE_STRING(BGl_string5627z00zzsaw_c_codez00,
		BgL_bgl_string5627za700za7za7s5833za7, "+", 1);
	      DEFINE_STRING(BGl_string5628z00zzsaw_c_codez00,
		BgL_bgl_string5628za700za7za7s5834za7, "BGL_RTL_ADD", 11);
	      DEFINE_STRING(BGl_string5630z00zzsaw_c_codez00,
		BgL_bgl_string5630za700za7za7s5835za7, "BGL_RTL_SUB", 11);
	      DEFINE_STRING(BGl_string5629z00zzsaw_c_codez00,
		BgL_bgl_string5629za700za7za7s5836za7, "-", 1);
	      DEFINE_STRING(BGl_string5631z00zzsaw_c_codez00,
		BgL_bgl_string5631za700za7za7s5837za7, "*", 1);
	      DEFINE_STRING(BGl_string5632z00zzsaw_c_codez00,
		BgL_bgl_string5632za700za7za7s5838za7, "BGL_RTL_MUL", 11);
	      DEFINE_STRING(BGl_string5633z00zzsaw_c_codez00,
		BgL_bgl_string5633za700za7za7s5839za7, "/", 1);
	      DEFINE_STRING(BGl_string5634z00zzsaw_c_codez00,
		BgL_bgl_string5634za700za7za7s5840za7, "BGL_RTL_DIV", 11);
	      DEFINE_STRING(BGl_string5635z00zzsaw_c_codez00,
		BgL_bgl_string5635za700za7za7s5841za7, "%", 1);
	      DEFINE_STRING(BGl_string5636z00zzsaw_c_codez00,
		BgL_bgl_string5636za700za7za7s5842za7, "BGL_RTL_REM", 11);
	      DEFINE_STRING(BGl_string5637z00zzsaw_c_codez00,
		BgL_bgl_string5637za700za7za7s5843za7, " | ", 3);
	      DEFINE_STRING(BGl_string5638z00zzsaw_c_codez00,
		BgL_bgl_string5638za700za7za7s5844za7, " & ", 3);
	      DEFINE_STRING(BGl_string5640z00zzsaw_c_codez00,
		BgL_bgl_string5640za700za7za7s5845za7, "BGL_RTL_XOR", 11);
	      DEFINE_STRING(BGl_string5639z00zzsaw_c_codez00,
		BgL_bgl_string5639za700za7za7s5846za7, " ^ ", 3);
	      DEFINE_STRING(BGl_string5641z00zzsaw_c_codez00,
		BgL_bgl_string5641za700za7za7s5847za7, " >> ", 4);
	      DEFINE_STRING(BGl_string5642z00zzsaw_c_codez00,
		BgL_bgl_string5642za700za7za7s5848za7, "BGL_RTL_RSH", 11);
	      DEFINE_STRING(BGl_string5643z00zzsaw_c_codez00,
		BgL_bgl_string5643za700za7za7s5849za7, " << ", 4);
	      DEFINE_STRING(BGl_string5644z00zzsaw_c_codez00,
		BgL_bgl_string5644za700za7za7s5850za7, "BGL_RTL_LSH", 11);
	      DEFINE_STRING(BGl_string5645z00zzsaw_c_codez00,
		BgL_bgl_string5645za700za7za7s5851za7, "PUSH_EXIT", 9);
	      DEFINE_STRING(BGl_string5646z00zzsaw_c_codez00,
		BgL_bgl_string5646za700za7za7s5852za7, "BGL_RTL_PUSH_EXIT", 17);
	      DEFINE_STRING(BGl_string5647z00zzsaw_c_codez00,
		BgL_bgl_string5647za700za7za7s5853za7, "PUSH_BEFORE", 11);
	      DEFINE_STRING(BGl_string5648z00zzsaw_c_codez00,
		BgL_bgl_string5648za700za7za7s5854za7, "BGL_RTL_PUSH_BEFORE", 19);
	      DEFINE_STRING(BGl_string5650z00zzsaw_c_codez00,
		BgL_bgl_string5650za700za7za7s5855za7, "{PUSH_TRACE", 11);
	      DEFINE_STRING(BGl_string5649z00zzsaw_c_codez00,
		BgL_bgl_string5649za700za7za7s5856za7, "PUSH_TRACE", 10);
	      DEFINE_STRING(BGl_string5651z00zzsaw_c_codez00,
		BgL_bgl_string5651za700za7za7s5857za7, "BIGLOO_EXIT", 11);
	      DEFINE_STRING(BGl_string5652z00zzsaw_c_codez00,
		BgL_bgl_string5652za700za7za7s5858za7, "PRINT_TRACE", 11);
	      DEFINE_STRING(BGl_string5653z00zzsaw_c_codez00,
		BgL_bgl_string5653za700za7za7s5859za7, "STRING_REF", 10);
	      DEFINE_STRING(BGl_string5654z00zzsaw_c_codez00,
		BgL_bgl_string5654za700za7za7s5860za7, "BGL_RTL_STRING_REF", 18);
	      DEFINE_STRING(BGl_string5655z00zzsaw_c_codez00,
		BgL_bgl_string5655za700za7za7s5861za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string5656z00zzsaw_c_codez00,
		BgL_bgl_string5656za700za7za7s5862za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string5657z00zzsaw_c_codez00,
		BgL_bgl_string5657za700za7za7s5863za7, "$", 1);
	      DEFINE_STRING(BGl_string5658z00zzsaw_c_codez00,
		BgL_bgl_string5658za700za7za7s5864za7, "gen-expr", 8);
	      DEFINE_STRING(BGl_string5660z00zzsaw_c_codez00,
		BgL_bgl_string5660za700za7za7s5865za7, "gen-prefix", 10);
	      DEFINE_STRING(BGl_string5659z00zzsaw_c_codez00,
		BgL_bgl_string5659za700za7za7s5866za7, "gen-fun-name", 12);
	      DEFINE_STRING(BGl_string5700z00zzsaw_c_codez00,
		BgL_bgl_string5700za700za7za7s5867za7, "VSET", 4);
	      DEFINE_STRING(BGl_string5690z00zzsaw_c_codez00,
		BgL_bgl_string5690za700za7za7s5868za7, "backend-subtype?", 16);
	      DEFINE_STRING(BGl_string5701z00zzsaw_c_codez00,
		BgL_bgl_string5701za700za7za7s5869za7, "VREF", 4);
	      DEFINE_STRING(BGl_string5702z00zzsaw_c_codez00,
		BgL_bgl_string5702za700za7za7s5870za7, "VALLOC", 6);
	      DEFINE_STRING(BGl_string5692z00zzsaw_c_codez00,
		BgL_bgl_string5692za700za7za7s5871za7, "accept-folding?", 15);
	      DEFINE_STRING(BGl_string5703z00zzsaw_c_codez00,
		BgL_bgl_string5703za700za7za7s5872za7, "make_fx_procedure", 17);
	      DEFINE_STRING(BGl_string5704z00zzsaw_c_codez00,
		BgL_bgl_string5704za700za7za7s5873za7, "make_va_procedure", 17);
	      DEFINE_STRING(BGl_string5694z00zzsaw_c_codez00,
		BgL_bgl_string5694za700za7za7s5874za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string5705z00zzsaw_c_codez00,
		BgL_bgl_string5705za700za7za7s5875za7, "MAKE_L_PROCEDURE", 16);
	      DEFINE_STRING(BGl_string5706z00zzsaw_c_codez00,
		BgL_bgl_string5706za700za7za7s5876za7, "(function_t) ", 13);
	      DEFINE_STRING(BGl_string5696z00zzsaw_c_codez00,
		BgL_bgl_string5696za700za7za7s5877za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string5707z00zzsaw_c_codez00,
		BgL_bgl_string5707za700za7za7s5878za7, "switch(", 7);
	      DEFINE_STRING(BGl_string5697z00zzsaw_c_codez00,
		BgL_bgl_string5697za700za7za7s5879za7, "(obj_t) ", 8);
	      DEFINE_STRING(BGl_string5708z00zzsaw_c_codez00,
		BgL_bgl_string5708za700za7za7s5880za7, ") {", 3);
	      DEFINE_STRING(BGl_string5698z00zzsaw_c_codez00,
		BgL_bgl_string5698za700za7za7s5881za7, "return", 6);
	      DEFINE_STRING(BGl_string5710z00zzsaw_c_codez00,
		BgL_bgl_string5710za700za7za7s5882za7, "\n\t case ", 8);
	      DEFINE_STRING(BGl_string5709z00zzsaw_c_codez00,
		BgL_bgl_string5709za700za7za7s5883za7, "\n\t default: ", 12);
	      DEFINE_STRING(BGl_string5699z00zzsaw_c_codez00,
		BgL_bgl_string5699za700za7za7s5884za7, "VLENGTH", 7);
	      DEFINE_STRING(BGl_string5711z00zzsaw_c_codez00,
		BgL_bgl_string5711za700za7za7s5885za7, ";", 1);
	      DEFINE_STRING(BGl_string5712z00zzsaw_c_codez00,
		BgL_bgl_string5712za700za7za7s5886za7, " goto L", 7);
	      DEFINE_STRING(BGl_string5713z00zzsaw_c_codez00,
		BgL_bgl_string5713za700za7za7s5887za7, "\n\t}", 3);
	      DEFINE_STRING(BGl_string5714z00zzsaw_c_codez00,
		BgL_bgl_string5714za700za7za7s5888za7, "(obj_t) jmpbuf;\n\t", 17);
	      DEFINE_STRING(BGl_string5715z00zzsaw_c_codez00,
		BgL_bgl_string5715za700za7za7s5889za7, "{BGL_STORE_TRACE();", 19);
	      DEFINE_STRING(BGl_string5716z00zzsaw_c_codez00,
		BgL_bgl_string5716za700za7za7s5890za7,
		"if(SETJMP(jmpbuf)) {BGL_RESTORE_TRACE(); return(BGL_EXIT_VALUE());}}", 68);
	      DEFINE_STRING(BGl_string5717z00zzsaw_c_codez00,
		BgL_bgl_string5717za700za7za7s5891za7, "(VA_PROCEDUREP(", 15);
	      DEFINE_STRING(BGl_string5718z00zzsaw_c_codez00,
		BgL_bgl_string5718za700za7za7s5892za7, ") ? ", 4);
	      DEFINE_STRING(BGl_string5720z00zzsaw_c_codez00,
		BgL_bgl_string5720za700za7za7s5893za7, "L_", 2);
	      DEFINE_STRING(BGl_string5719z00zzsaw_c_codez00,
		BgL_bgl_string5719za700za7za7s5894za7, " : ", 3);
	      DEFINE_STRING(BGl_string5721z00zzsaw_c_codez00,
		BgL_bgl_string5721za700za7za7s5895za7, "saw_c_code", 10);
	      DEFINE_STRING(BGl_string5722z00zzsaw_c_codez00,
		BgL_bgl_string5722za700za7za7s5896za7,
		"else ireg (double llong ullong elong uelong long ulong int uint char uchar byte ubyte bool string) location push-before! push-exit! (\"WRITE_CHAR\" \"BOOLEANP\" \"INTEGERP\" \"NULLP\" \"PAIRP\" \"SYMBOLP\" \"VECTORP\") ",
		205);
	      DEFINE_STATIC_BGL_GENERIC(BGl_genzd2exprzd2envz00zzsaw_c_codez00,
		BgL_bgl__genza7d2exprza7d2za7za75897z00, BGl__genzd2exprzd2zzsaw_c_codez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_genzd2prefixzd2default4740zd2envzd2zzsaw_c_codez00,
		BgL_bgl__genza7d2prefixza7d25898z00,
		BGl__genzd2prefixzd2default4740z00zzsaw_c_codez00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_genzd2funzd2namezd2default4719zd2envz00zzsaw_c_codez00,
		BgL_bgl__genza7d2funza7d2nam5899z00,
		BGl__genzd2funzd2namezd2default4719zd2zzsaw_c_codez00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_c_codez00(long
		BgL_checksumz00_4058, char *BgL_fromz00_4059)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_c_codez00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_c_codez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_c_codez00();
					BGl_cnstzd2initzd2zzsaw_c_codez00();
					BGl_importedzd2moduleszd2initz00zzsaw_c_codez00();
					BGl_objectzd2initzd2zzsaw_c_codez00();
					BGl_genericzd2initzd2zzsaw_c_codez00();
					BGl_methodzd2initzd2zzsaw_c_codez00();
					BGl_toplevelzd2initzd2zzsaw_c_codez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_c_codez00()
	{
		AN_OBJECT;
		{	/* SawC/code.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_c_code");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_c_code");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_c_code");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_c_code");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "saw_c_code");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"saw_c_code");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_c_code");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_c_code");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_c_code");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"saw_c_code");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "saw_c_code");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_c_codez00()
	{
		AN_OBJECT;
		{	/* SawC/code.scm 1 */
			{	/* SawC/code.scm 1 */
				obj_t BgL_cportz00_4042;

				BgL_cportz00_4042 =
					bgl_open_input_string(BGl_string5722z00zzsaw_c_codez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_4043;

					BgL_iz00_4043 = ((long) 6);
				BgL_loopz00_4044:
					if ((BgL_iz00_4043 == ((long) -1)))
						{	/* SawC/code.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawC/code.scm 1 */
							{	/* SawC/code.scm 1 */
								obj_t BgL_arg5724z00_4046;

								{	/* SawC/code.scm 1 */

									{	/* SawC/code.scm 1 */
										obj_t BgL_locationz00_4048;

										BgL_locationz00_4048 = BBOOL(((bool_t) 0));
										{	/* SawC/code.scm 1 */

											BgL_arg5724z00_4046 =
												BGl_readz00zz__readerz00(BgL_cportz00_4042,
												BgL_locationz00_4048);
										}
									}
								}
								{	/* SawC/code.scm 1 */
									int BgL_auxz00_4087;

									BgL_auxz00_4087 = (int) (BgL_iz00_4043);
									CNST_TABLE_SET(BgL_auxz00_4087, BgL_arg5724z00_4046);
							}}
							{	/* SawC/code.scm 1 */
								int BgL_auxz00_4049;

								BgL_auxz00_4049 = (int) ((BgL_iz00_4043 - ((long) 1)));
								{
									long BgL_iz00_4092;

									BgL_iz00_4092 = (long) (BgL_auxz00_4049);
									BgL_iz00_4043 = BgL_iz00_4092;
									goto BgL_loopz00_4044;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_c_codez00()
	{
		AN_OBJECT;
		{	/* SawC/code.scm 1 */
			BGl_za2commentza2z00zzsaw_c_codez00 = ((bool_t) 0);
			BGl_za2traceza2z00zzsaw_c_codez00 = ((bool_t) 0);
			BGl_za2countza2z00zzsaw_c_codez00 = ((bool_t) 0);
			BGl_za2inlinezd2simplezd2macrosza2z00zzsaw_c_codez00 = ((bool_t) 1);
			BGl_za2counterza2z00zzsaw_c_codez00 = BINT(((long) 0));
			BGl_za2hasprotectza2z00zzsaw_c_codez00 = ((bool_t) 0);
			BGl_za2haspushexitza2z00zzsaw_c_codez00 = ((bool_t) 0);
			BGl_za2haspushbeforeza2z00zzsaw_c_codez00 = ((bool_t) 0);
			BGl_za2pushtraceemmitedza2z00zzsaw_c_codez00 = ((long) 0);
			return (BGl_za2badzd2macrosza2zd2zzsaw_c_codez00 =
				CNST_TABLE_REF(((long) 0)), BUNSPEC);
		}
	}



/* saw-cheader */
	BGL_EXPORTED_DEF obj_t BGl_sawzd2cheaderzd2zzsaw_c_codez00()
	{
		AN_OBJECT;
		{	/* SawC/code.scm 38 */
			return
				BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00
				(BGl_za2czd2portza2zd2zzbackend_c_emitz00,
				BGl_proc5561z00zzsaw_c_codez00);
		}
	}



/* _saw-cheader */
	obj_t BGl__sawzd2cheaderzd2zzsaw_c_codez00(obj_t BgL_envz00_3884)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 38 */
			return BGl_sawzd2cheaderzd2zzsaw_c_codez00();
		}
	}



/* <anonymous:4789> */
	obj_t BGl_zc3anonymousza34789ze3z83zzsaw_c_codez00(obj_t BgL_envz00_3885)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 40 */
			return BGl_headerz00zzsaw_c_codez00();
		}
	}



/* header */
	obj_t BGl_headerz00zzsaw_c_codez00()
	{
		AN_OBJECT;
		{	/* SawC/code.scm 42 */
			if (BGl_za2countza2z00zzsaw_c_codez00)
				{	/* SawC/code.scm 43 */
					{	/* SawC/code.scm 44 */
						obj_t BgL_arg4791z00_1399;

						{	/* SawC/code.scm 44 */
							obj_t BgL_res5464z00_2991;

							{	/* SawC/code.scm 44 */
								obj_t BgL_auxz00_4100;

								BgL_auxz00_4100 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res5464z00_2991 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4100);
							}
							BgL_arg4791z00_1399 = BgL_res5464z00_2991;
						}
						bgl_display_string(BGl_string5562z00zzsaw_c_codez00,
							BgL_arg4791z00_1399);
					}
					{	/* SawC/code.scm 45 */
						obj_t BgL_arg4793z00_1401;

						{	/* SawC/code.scm 45 */
							obj_t BgL_res5465z00_2995;

							{	/* SawC/code.scm 45 */
								obj_t BgL_auxz00_4104;

								BgL_auxz00_4104 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res5465z00_2995 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4104);
							}
							BgL_arg4793z00_1401 = BgL_res5465z00_2995;
						}
						bgl_display_string(BGl_string5563z00zzsaw_c_codez00,
							BgL_arg4793z00_1401);
					}
					{	/* SawC/code.scm 46 */
						obj_t BgL_arg4795z00_1403;

						{	/* SawC/code.scm 46 */
							obj_t BgL_res5466z00_2999;

							{	/* SawC/code.scm 46 */
								obj_t BgL_auxz00_4108;

								BgL_auxz00_4108 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res5466z00_2999 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4108);
							}
							BgL_arg4795z00_1403 = BgL_res5466z00_2999;
						}
						bgl_display_string(BGl_string5564z00zzsaw_c_codez00,
							BgL_arg4795z00_1403);
					}
				}
			else
				{	/* SawC/code.scm 43 */
					BFALSE;
				}
			{	/* SawC/code.scm 48 */
				obj_t BgL_arg4797z00_1405;

				{	/* SawC/code.scm 48 */
					obj_t BgL_res5467z00_3003;

					{	/* SawC/code.scm 48 */
						obj_t BgL_auxz00_4112;

						BgL_auxz00_4112 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res5467z00_3003 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4112);
					}
					BgL_arg4797z00_1405 = BgL_res5467z00_3003;
				}
				return
					bgl_display_string(BGl_string5565z00zzsaw_c_codez00,
					BgL_arg4797z00_1405);
			}
		}
	}



/* saw-cepilogue */
	BGL_EXPORTED_DEF obj_t BGl_sawzd2cepiloguezd2zzsaw_c_codez00()
	{
		AN_OBJECT;
		{	/* SawC/code.scm 50 */
			return
				BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00
				(BGl_za2czd2portza2zd2zzbackend_c_emitz00,
				BGl_proc5566z00zzsaw_c_codez00);
		}
	}



/* _saw-cepilogue */
	obj_t BGl__sawzd2cepiloguezd2zzsaw_c_codez00(obj_t BgL_envz00_3887)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 50 */
			return BGl_sawzd2cepiloguezd2zzsaw_c_codez00();
		}
	}



/* <anonymous:4799> */
	obj_t BGl_zc3anonymousza34799ze3z83zzsaw_c_codez00(obj_t BgL_envz00_3888)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 52 */
			return BGl_cepiloguez00zzsaw_c_codez00();
		}
	}



/* cepilogue */
	obj_t BGl_cepiloguez00zzsaw_c_codez00()
	{
		AN_OBJECT;
		{	/* SawC/code.scm 54 */
			{	/* SawC/code.scm 55 */
				obj_t BgL_arg4801z00_1410;

				{	/* SawC/code.scm 55 */
					obj_t BgL_res5468z00_3007;

					{	/* SawC/code.scm 55 */
						obj_t BgL_auxz00_4119;

						BgL_auxz00_4119 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res5468z00_3007 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4119);
					}
					BgL_arg4801z00_1410 = BgL_res5468z00_3007;
				}
				bgl_display_string(BGl_string5565z00zzsaw_c_codez00,
					BgL_arg4801z00_1410);
			}
			if (BGl_za2countza2z00zzsaw_c_codez00)
				{	/* SawC/code.scm 56 */
					{	/* SawC/code.scm 57 */
						obj_t BgL_list4802z00_1411;

						{	/* SawC/code.scm 57 */
							obj_t BgL_arg4805z00_1413;

							{	/* SawC/code.scm 57 */
								obj_t BgL_arg4806z00_1414;

								BgL_arg4806z00_1414 =
									MAKE_PAIR(BGl_string5567z00zzsaw_c_codez00, BNIL);
								BgL_arg4805z00_1413 =
									MAKE_PAIR(BGl_za2counterza2z00zzsaw_c_codez00,
									BgL_arg4806z00_1414);
							}
							BgL_list4802z00_1411 =
								MAKE_PAIR(BGl_string5568z00zzsaw_c_codez00,
								BgL_arg4805z00_1413);
						}
						BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list4802z00_1411);
					}
					{	/* SawC/code.scm 58 */
						obj_t BgL_list4807z00_1415;

						{	/* SawC/code.scm 58 */
							obj_t BgL_arg4810z00_1417;

							{	/* SawC/code.scm 58 */
								obj_t BgL_arg4811z00_1418;

								BgL_arg4811z00_1418 =
									MAKE_PAIR(BGl_string5567z00zzsaw_c_codez00, BNIL);
								BgL_arg4810z00_1417 =
									MAKE_PAIR(BGl_za2counterza2z00zzsaw_c_codez00,
									BgL_arg4811z00_1418);
							}
							BgL_list4807z00_1415 =
								MAKE_PAIR(BGl_string5569z00zzsaw_c_codez00,
								BgL_arg4810z00_1417);
						}
						BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list4807z00_1415);
					}
					{	/* SawC/code.scm 59 */
						obj_t BgL_arg4813z00_1420;

						{	/* SawC/code.scm 59 */
							obj_t BgL_res5469z00_3011;

							{	/* SawC/code.scm 59 */
								obj_t BgL_auxz00_4132;

								BgL_auxz00_4132 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res5469z00_3011 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4132);
							}
							BgL_arg4813z00_1420 = BgL_res5469z00_3011;
						}
						bgl_display_string(BGl_string5570z00zzsaw_c_codez00,
							BgL_arg4813z00_1420);
					}
					{	/* SawC/code.scm 60 */
						obj_t BgL_arg4815z00_1422;

						{	/* SawC/code.scm 60 */
							obj_t BgL_res5470z00_3015;

							{	/* SawC/code.scm 60 */
								obj_t BgL_auxz00_4136;

								BgL_auxz00_4136 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res5470z00_3015 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4136);
							}
							BgL_arg4815z00_1422 = BgL_res5470z00_3015;
						}
						bgl_display_string(BGl_string5571z00zzsaw_c_codez00,
							BgL_arg4815z00_1422);
					}
					{	/* SawC/code.scm 61 */
						obj_t BgL_list4816z00_1423;

						{	/* SawC/code.scm 61 */
							obj_t BgL_arg4819z00_1425;

							{	/* SawC/code.scm 61 */
								obj_t BgL_arg4820z00_1426;

								BgL_arg4820z00_1426 =
									MAKE_PAIR(BGl_string5572z00zzsaw_c_codez00, BNIL);
								BgL_arg4819z00_1425 =
									MAKE_PAIR(BGl_za2counterza2z00zzsaw_c_codez00,
									BgL_arg4820z00_1426);
							}
							BgL_list4816z00_1423 =
								MAKE_PAIR(BGl_string5573z00zzsaw_c_codez00,
								BgL_arg4819z00_1425);
						}
						BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list4816z00_1423);
					}
					{	/* SawC/code.scm 62 */
						obj_t BgL_arg4822z00_1428;

						{	/* SawC/code.scm 62 */
							obj_t BgL_res5471z00_3019;

							{	/* SawC/code.scm 62 */
								obj_t BgL_auxz00_4144;

								BgL_auxz00_4144 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res5471z00_3019 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4144);
							}
							BgL_arg4822z00_1428 = BgL_res5471z00_3019;
						}
						bgl_display_string(BGl_string5574z00zzsaw_c_codez00,
							BgL_arg4822z00_1428);
					}
					{	/* SawC/code.scm 63 */
						obj_t BgL_arg4824z00_1430;

						{	/* SawC/code.scm 63 */
							obj_t BgL_res5472z00_3023;

							{	/* SawC/code.scm 63 */
								obj_t BgL_auxz00_4148;

								BgL_auxz00_4148 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res5472z00_3023 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4148);
							}
							BgL_arg4824z00_1430 = BgL_res5472z00_3023;
						}
						bgl_display_string(BGl_string5575z00zzsaw_c_codez00,
							BgL_arg4824z00_1430);
					}
					{	/* SawC/code.scm 64 */
						obj_t BgL_arg4826z00_1432;

						{	/* SawC/code.scm 64 */
							obj_t BgL_res5473z00_3027;

							{	/* SawC/code.scm 64 */
								obj_t BgL_auxz00_4152;

								BgL_auxz00_4152 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res5473z00_3027 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4152);
							}
							BgL_arg4826z00_1432 = BgL_res5473z00_3027;
						}
						return
							bgl_display_string(BGl_string5576z00zzsaw_c_codez00,
							BgL_arg4826z00_1432);
					}
				}
			else
				{	/* SawC/code.scm 56 */
					return BFALSE;
				}
		}
	}



/* saw-cgen */
	BGL_EXPORTED_DEF obj_t BGl_sawzd2cgenzd2zzsaw_c_codez00(BgL_cvmz00_bglt
		BgL_bz00_15, BgL_globalz00_bglt BgL_vz00_16)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 66 */
			{	/* SawC/code.scm 67 */
				obj_t BgL_lz00_1433;

				BgL_lz00_1433 =
					BGl_globalzd2ze3blocksz31zzsaw_woodcutterz00(
					(BgL_backendz00_bglt) (BgL_bz00_15), BgL_vz00_16);
				BGl_za2hasprotectza2z00zzsaw_c_codez00 = ((bool_t) 0);
				BGl_za2haspushexitza2z00zzsaw_c_codez00 = ((bool_t) 0);
				BGl_za2haspushbeforeza2z00zzsaw_c_codez00 = ((bool_t) 0);
				BGl_za2pushtraceemmitedza2z00zzsaw_c_codez00 = ((long) 0);
				{	/* SawC/code.scm 73 */
					obj_t BgL_zc3anonymousza34828ze3z83_3889;

					BgL_zc3anonymousza34828ze3z83_3889 =
						make_fx_procedure(BGl_zc3anonymousza34828ze3z83zzsaw_c_codez00,
						(int) (((long) 0)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3anonymousza34828ze3z83_3889,
						(int) (((long) 0)), (obj_t) (BgL_bz00_15));
					PROCEDURE_SET(BgL_zc3anonymousza34828ze3z83_3889,
						(int) (((long) 1)), (obj_t) (BgL_vz00_16));
					PROCEDURE_SET(BgL_zc3anonymousza34828ze3z83_3889,
						(int) (((long) 2)), BgL_lz00_1433);
					return
						BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00
						(BGl_za2czd2portza2zd2zzbackend_c_emitz00,
						BgL_zc3anonymousza34828ze3z83_3889);
				}
			}
		}
	}



/* _saw-cgen */
	obj_t BGl__sawzd2cgenzd2zzsaw_c_codez00(obj_t BgL_envz00_3890,
		obj_t BgL_bz00_3891, obj_t BgL_vz00_3892)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 66 */
			return
				BGl_sawzd2cgenzd2zzsaw_c_codez00(
				(BgL_cvmz00_bglt) (BgL_bz00_3891),
				(BgL_globalz00_bglt) (BgL_vz00_3892));
		}
	}



/* <anonymous:4828> */
	obj_t BGl_zc3anonymousza34828ze3z83zzsaw_c_codez00(obj_t BgL_envz00_3893)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 73 */
			{	/* SawC/code.scm 73 */
				obj_t BgL_bz00_3894;

				obj_t BgL_vz00_3895;

				obj_t BgL_lz00_3896;

				BgL_bz00_3894 = PROCEDURE_REF(BgL_envz00_3893, (int) (((long) 0)));
				BgL_vz00_3895 = PROCEDURE_REF(BgL_envz00_3893, (int) (((long) 1)));
				BgL_lz00_3896 = PROCEDURE_REF(BgL_envz00_3893, (int) (((long) 2)));
				{

					return
						BGl_genfunz00zzsaw_c_codez00(
						(BgL_cvmz00_bglt) (BgL_bz00_3894),
						(BgL_globalz00_bglt) (BgL_vz00_3895), BgL_lz00_3896);
				}
			}
		}
	}



/* genfun */
	obj_t BGl_genfunz00zzsaw_c_codez00(BgL_cvmz00_bglt BgL_bz00_17,
		BgL_globalz00_bglt BgL_vz00_18, obj_t BgL_lz00_19)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 75 */
			{	/* SawC/code.scm 77 */
				BgL_valuez00_bglt BgL_instance4626z00_1438;

				{
					BgL_variablez00_bglt BgL_auxz00_4182;

					BgL_auxz00_4182 = (BgL_variablez00_bglt) (BgL_vz00_18);
					BgL_instance4626z00_1438 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_4182))->BgL_valuez00);
				}
				{	/* SawC/code.scm 78 */
					obj_t BgL_paramsz00_1439;

					{	/* SawC/code.scm 78 */
						obj_t BgL_l4662z00_1477;

						{
							BgL_sfunz00_bglt BgL_auxz00_4185;

							BgL_auxz00_4185 = (BgL_sfunz00_bglt) (BgL_instance4626z00_1438);
							BgL_l4662z00_1477 =
								(((BgL_sfunz00_bglt) CREF(BgL_auxz00_4185))->BgL_argsz00);
						}
						if (NULLP(BgL_l4662z00_1477))
							{	/* SawC/code.scm 78 */
								BgL_paramsz00_1439 = BNIL;
							}
						else
							{	/* SawC/code.scm 78 */
								obj_t BgL_head4664z00_1479;

								{	/* SawC/code.scm 78 */
									BgL_rtl_regz00_bglt BgL_arg4870z00_1492;

									{	/* SawC/code.scm 78 */
										obj_t BgL_arg4872z00_1494;

										BgL_arg4872z00_1494 = CAR(BgL_l4662z00_1477);
										BgL_arg4870z00_1492 =
											BGl_localzd2ze3regz31zzsaw_node2rtlz00(
											(BgL_localz00_bglt) (BgL_arg4872z00_1494));
									}
									BgL_head4664z00_1479 =
										MAKE_PAIR((obj_t) (BgL_arg4870z00_1492), BNIL);
								}
								{	/* SawC/code.scm 78 */
									obj_t BgL_g4667z00_1480;

									BgL_g4667z00_1480 = CDR(BgL_l4662z00_1477);
									{
										obj_t BgL_l4662z00_1482;

										obj_t BgL_tail4665z00_1483;

										BgL_l4662z00_1482 = BgL_g4667z00_1480;
										BgL_tail4665z00_1483 = BgL_head4664z00_1479;
									BgL_zc3anonymousza34864ze3z83_1484:
										if (NULLP(BgL_l4662z00_1482))
											{	/* SawC/code.scm 78 */
												BgL_paramsz00_1439 = BgL_head4664z00_1479;
											}
										else
											{	/* SawC/code.scm 78 */
												obj_t BgL_newtail4666z00_1486;

												{	/* SawC/code.scm 78 */
													BgL_rtl_regz00_bglt BgL_arg4867z00_1488;

													{	/* SawC/code.scm 78 */
														obj_t BgL_arg4869z00_1490;

														BgL_arg4869z00_1490 = CAR(BgL_l4662z00_1482);
														BgL_arg4867z00_1488 =
															BGl_localzd2ze3regz31zzsaw_node2rtlz00(
															(BgL_localz00_bglt) (BgL_arg4869z00_1490));
													}
													BgL_newtail4666z00_1486 =
														MAKE_PAIR((obj_t) (BgL_arg4867z00_1488), BNIL);
												}
												SET_CDR(BgL_tail4665z00_1483, BgL_newtail4666z00_1486);
												{
													obj_t BgL_tail4665z00_4206;

													obj_t BgL_l4662z00_4204;

													BgL_l4662z00_4204 = CDR(BgL_l4662z00_1482);
													BgL_tail4665z00_4206 = BgL_newtail4666z00_1486;
													BgL_tail4665z00_1483 = BgL_tail4665z00_4206;
													BgL_l4662z00_1482 = BgL_l4662z00_4204;
													goto BgL_zc3anonymousza34864ze3z83_1484;
												}
											}
									}
								}
							}
					}
					BGl_buildzd2treezd2zzsaw_exprz00(
						(BgL_backendz00_bglt) (BgL_bz00_17), BgL_paramsz00_1439,
						BgL_lz00_19);
					if (CBOOL
						(BGl_za2sawzd2registerzd2allocationzf3za2zf3zzengine_paramz00))
						{	/* SawC/code.scm 80 */
							BgL_lz00_19 =
								BGl_registerzd2allocationzd2zzsaw_registerzd2allocationzd2(
								(BgL_backendz00_bglt) (BgL_bz00_17), BgL_vz00_18,
								BgL_paramsz00_1439, BgL_lz00_19);
						}
					else
						{	/* SawC/code.scm 80 */
							BFALSE;
						}
					{	/* SawC/code.scm 83 */
						obj_t BgL_localsz00_1440;

						BgL_localsz00_1440 =
							BGl_getzd2localszd2zzsaw_c_codez00(BgL_paramsz00_1439,
							BgL_lz00_19);
						if (BGl_za2commentza2z00zzsaw_c_codez00)
							{	/* SawC/code.scm 84 */
								obj_t BgL_arg4830z00_1442;

								{
									BgL_variablez00_bglt BgL_auxz00_4215;

									BgL_auxz00_4215 = (BgL_variablez00_bglt) (BgL_vz00_18);
									BgL_arg4830z00_1442 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_4215))->BgL_idz00);
								}
								{	/* SawC/code.scm 84 */
									obj_t BgL_list4832z00_1444;

									{	/* SawC/code.scm 84 */
										obj_t BgL_arg4833z00_1445;

										{	/* SawC/code.scm 84 */
											obj_t BgL_arg4834z00_1446;

											BgL_arg4834z00_1446 =
												MAKE_PAIR(BGl_string5577z00zzsaw_c_codez00, BNIL);
											BgL_arg4833z00_1445 =
												MAKE_PAIR(BgL_arg4830z00_1442, BgL_arg4834z00_1446);
										}
										BgL_list4832z00_1444 =
											MAKE_PAIR(BGl_string5578z00zzsaw_c_codez00,
											BgL_arg4833z00_1445);
									}
									BGl_displayza2za2zz__r4_output_6_10_3z00
										(BgL_list4832z00_1444);
								}
							}
						else
							{	/* SawC/code.scm 84 */
								BFALSE;
							}
						{	/* SawC/code.scm 85 */
							obj_t BgL_insz00_1447;

							{	/* SawC/code.scm 85 */
								obj_t BgL_arg4838z00_1452;

								{	/* SawC/code.scm 85 */
									BgL_blockz00_bglt BgL_obj4505z00_3046;

									{	/* SawC/code.scm 85 */
										obj_t BgL_pairz00_3045;

										BgL_pairz00_3045 = BgL_lz00_19;
										BgL_obj4505z00_3046 =
											(BgL_blockz00_bglt) (CAR(BgL_pairz00_3045));
									}
									BgL_arg4838z00_1452 =
										(((BgL_blockz00_bglt) CREF(BgL_obj4505z00_3046))->
										BgL_firstz00);
								}
								BgL_insz00_1447 = CAR(BgL_arg4838z00_1452);
							}
							{	/* SawC/code.scm 86 */
								bool_t BgL_testz00_4226;

								if (CBOOL
									(BGl_za2czd2debugzd2lineszd2infoza2zd2zzengine_paramz00))
									{	/* SawC/code.scm 86 */
										if (CBOOL
											(BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00))
											{	/* SawC/code.scm 87 */
												BgL_testz00_4226 = ((bool_t) 0);
											}
										else
											{	/* SawC/code.scm 87 */
												BgL_testz00_4226 = ((bool_t) 1);
											}
									}
								else
									{	/* SawC/code.scm 86 */
										BgL_testz00_4226 = ((bool_t) 0);
									}
								if (BgL_testz00_4226)
									{	/* SawC/code.scm 88 */
										bool_t BgL__ortest_4628z00_1449;

										{	/* SawC/code.scm 88 */
											obj_t BgL_arg4837z00_1451;

											{
												BgL_sfunz00_bglt BgL_auxz00_4231;

												BgL_auxz00_4231 =
													(BgL_sfunz00_bglt) (BgL_instance4626z00_1438);
												BgL_arg4837z00_1451 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_4231))->
													BgL_locz00);
											}
											BgL__ortest_4628z00_1449 =
												BGl_printzd2locationzf3z21zzsaw_c_codez00
												(BgL_arg4837z00_1451);
										}
										if (BgL__ortest_4628z00_1449)
											{	/* SawC/code.scm 88 */
												BgL__ortest_4628z00_1449;
											}
										else
											{	/* SawC/code.scm 88 */
												BGl_printzd2locationzf3z21zzsaw_c_codez00
													(BGl_findzd2locationzd2zzsaw_c_codez00(
														(BgL_rtl_insz00_bglt) (BgL_insz00_1447)));
											}
									}
								else
									{	/* SawC/code.scm 86 */
										((bool_t) 0);
									}
							}
						}
						{	/* SawC/code.scm 90 */
							BgL_typez00_bglt BgL_arg4840z00_1454;

							{
								BgL_variablez00_bglt BgL_auxz00_4239;

								BgL_auxz00_4239 = (BgL_variablez00_bglt) (BgL_vz00_18);
								BgL_arg4840z00_1454 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_4239))->BgL_typez00);
							}
							{	/* SawC/code.scm 90 */
								obj_t BgL_arg5051z00_3051;

								BgL_arg5051z00_3051 =
									(((BgL_typez00_bglt) CREF(BgL_arg4840z00_1454))->BgL_namez00);
								{	/* SawC/code.scm 90 */
									obj_t BgL_list5052z00_3052;

									BgL_list5052z00_3052 = MAKE_PAIR(BgL_arg5051z00_3051, BNIL);
									BGl_displayza2za2zz__r4_output_6_10_3z00
										(BgL_list5052z00_3052);
								}
							}
						}
						{	/* SawC/code.scm 91 */
							obj_t BgL_arg4842z00_1456;

							{	/* SawC/code.scm 91 */
								obj_t BgL_arg5055z00_3055;

								{
									BgL_variablez00_bglt BgL_auxz00_4245;

									BgL_auxz00_4245 = (BgL_variablez00_bglt) (BgL_vz00_18);
									BgL_arg5055z00_3055 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_4245))->
										BgL_namez00);
								}
								BgL_arg4842z00_1456 =
									BGl_patchz00zzsaw_c_codez00(BgL_arg5055z00_3055);
							}
							{	/* SawC/code.scm 91 */
								obj_t BgL_list4843z00_1457;

								{	/* SawC/code.scm 91 */
									obj_t BgL_arg4844z00_1458;

									BgL_arg4844z00_1458 = MAKE_PAIR(BgL_arg4842z00_1456, BNIL);
									BgL_list4843z00_1457 =
										MAKE_PAIR(BGl_string5579z00zzsaw_c_codez00,
										BgL_arg4844z00_1458);
								}
								BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list4843z00_1457);
							}
						}
						BGl_genzd2typezd2regsz00zzsaw_c_codez00(BgL_paramsz00_1439);
						{	/* SawC/code.scm 93 */
							obj_t BgL_arg4846z00_1460;

							{	/* SawC/code.scm 93 */
								obj_t BgL_res5474z00_3058;

								{	/* SawC/code.scm 93 */
									obj_t BgL_auxz00_4253;

									BgL_auxz00_4253 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res5474z00_3058 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4253);
								}
								BgL_arg4846z00_1460 = BgL_res5474z00_3058;
							}
							bgl_display_string(BGl_string5580z00zzsaw_c_codez00,
								BgL_arg4846z00_1460);
						}
						if (BGl_za2hasprotectza2z00zzsaw_c_codez00)
							{	/* SawC/code.scm 94 */
								obj_t BgL_arg4848z00_1462;

								{	/* SawC/code.scm 94 */
									obj_t BgL_res5475z00_3062;

									{	/* SawC/code.scm 94 */
										obj_t BgL_auxz00_4258;

										BgL_auxz00_4258 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res5475z00_3062 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4258);
									}
									BgL_arg4848z00_1462 = BgL_res5475z00_3062;
								}
								bgl_display_string(BGl_string5581z00zzsaw_c_codez00,
									BgL_arg4848z00_1462);
							}
						else
							{	/* SawC/code.scm 94 */
								BFALSE;
							}
						if (BGl_za2haspushexitza2z00zzsaw_c_codez00)
							{	/* SawC/code.scm 95 */
								obj_t BgL_arg4850z00_1464;

								{	/* SawC/code.scm 95 */
									obj_t BgL_res5476z00_3066;

									{	/* SawC/code.scm 95 */
										obj_t BgL_auxz00_4263;

										BgL_auxz00_4263 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res5476z00_3066 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4263);
									}
									BgL_arg4850z00_1464 = BgL_res5476z00_3066;
								}
								bgl_display_string(BGl_string5582z00zzsaw_c_codez00,
									BgL_arg4850z00_1464);
							}
						else
							{	/* SawC/code.scm 95 */
								BFALSE;
							}
						if (BGl_za2haspushbeforeza2z00zzsaw_c_codez00)
							{	/* SawC/code.scm 96 */
								obj_t BgL_arg4852z00_1466;

								{	/* SawC/code.scm 96 */
									obj_t BgL_res5477z00_3070;

									{	/* SawC/code.scm 96 */
										obj_t BgL_auxz00_4268;

										BgL_auxz00_4268 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res5477z00_3070 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4268);
									}
									BgL_arg4852z00_1466 = BgL_res5477z00_3070;
								}
								bgl_display_string(BGl_string5583z00zzsaw_c_codez00,
									BgL_arg4852z00_1466);
							}
						else
							{	/* SawC/code.scm 96 */
								BFALSE;
							}
						BGl_declarezd2regszd2zzsaw_c_codez00(BgL_localsz00_1440);
						if (BGl_za2traceza2z00zzsaw_c_codez00)
							{	/* SawC/code.scm 98 */
								obj_t BgL_arg4854z00_1468;

								obj_t BgL_arg4856z00_1470;

								{
									BgL_variablez00_bglt BgL_auxz00_4274;

									BgL_auxz00_4274 = (BgL_variablez00_bglt) (BgL_vz00_18);
									BgL_arg4854z00_1468 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_4274))->BgL_idz00);
								}
								{
									BgL_variablez00_bglt BgL_auxz00_4277;

									BgL_auxz00_4277 = (BgL_variablez00_bglt) (BgL_vz00_18);
									BgL_arg4856z00_1470 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_4277))->
										BgL_namez00);
								}
								{	/* SawC/code.scm 98 */
									obj_t BgL_list4858z00_1472;

									{	/* SawC/code.scm 98 */
										obj_t BgL_arg4859z00_1473;

										{	/* SawC/code.scm 98 */
											obj_t BgL_arg4860z00_1474;

											{	/* SawC/code.scm 98 */
												obj_t BgL_arg4861z00_1475;

												{	/* SawC/code.scm 98 */
													obj_t BgL_arg4862z00_1476;

													BgL_arg4862z00_1476 =
														MAKE_PAIR(BGl_string5584z00zzsaw_c_codez00, BNIL);
													BgL_arg4861z00_1475 =
														MAKE_PAIR(BgL_arg4856z00_1470, BgL_arg4862z00_1476);
												}
												BgL_arg4860z00_1474 =
													MAKE_PAIR(BGl_string5585z00zzsaw_c_codez00,
													BgL_arg4861z00_1475);
											}
											BgL_arg4859z00_1473 =
												MAKE_PAIR(BgL_arg4854z00_1468, BgL_arg4860z00_1474);
										}
										BgL_list4858z00_1472 =
											MAKE_PAIR(BGl_string5586z00zzsaw_c_codez00,
											BgL_arg4859z00_1473);
									}
									BGl_displayza2za2zz__r4_output_6_10_3z00
										(BgL_list4858z00_1472);
								}
							}
						else
							{	/* SawC/code.scm 98 */
								BFALSE;
							}
					}
				}
			}
			BGl_genbodyz00zzsaw_c_codez00(BgL_lz00_19);
			{	/* SawC/code.scm 100 */
				obj_t BgL_arg4873z00_1495;

				obj_t BgL_arg4874z00_1496;

				{	/* SawC/code.scm 100 */
					obj_t BgL_list4875z00_1497;

					BgL_list4875z00_1497 = MAKE_PAIR(BCHAR(((unsigned char) '}')), BNIL);
					{	/* SawC/code.scm 100 */
						obj_t BgL_res5478z00_3081;

						{	/* SawC/code.scm 100 */
							long BgL_kz00_3075;

							BgL_kz00_3075 = BGl_za2pushtraceemmitedza2z00zzsaw_c_codez00;
							{	/* SawC/code.scm 100 */
								obj_t BgL_arg2006z00_3078;

								BgL_arg2006z00_3078 = CAR(BgL_list4875z00_1497);
								BgL_res5478z00_3081 =
									make_string(BgL_kz00_3075, CCHAR(BgL_arg2006z00_3078));
						}}
						BgL_arg4873z00_1495 = BgL_res5478z00_3081;
				}}
				{	/* SawC/code.scm 100 */
					obj_t BgL_res5479z00_3083;

					{	/* SawC/code.scm 100 */
						obj_t BgL_auxz00_4292;

						BgL_auxz00_4292 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res5479z00_3083 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4292);
					}
					BgL_arg4874z00_1496 = BgL_res5479z00_3083;
				}
				bgl_display_obj(BgL_arg4873z00_1495, BgL_arg4874z00_1496);
			}
			{	/* SawC/code.scm 101 */
				obj_t BgL_arg4877z00_1499;

				{	/* SawC/code.scm 101 */
					obj_t BgL_res5480z00_3085;

					{	/* SawC/code.scm 101 */
						obj_t BgL_auxz00_4296;

						BgL_auxz00_4296 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res5480z00_3085 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4296);
					}
					BgL_arg4877z00_1499 = BgL_res5480z00_3085;
				}
				return
					bgl_display_string(BGl_string5576z00zzsaw_c_codez00,
					BgL_arg4877z00_1499);
			}
		}
	}



/* get-locals */
	obj_t BGl_getzd2localszd2zzsaw_c_codez00(obj_t BgL_paramsz00_20,
		obj_t BgL_lz00_21)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 103 */
			{	/* SawC/code.scm 105 */
				obj_t BgL_nz00_1500;

				obj_t BgL_regsz00_1501;

				{	/* SawC/code.scm 105 */
					obj_t BgL_cellvalz00_4300;

					BgL_cellvalz00_4300 = BINT(((long) 0));
					BgL_nz00_1500 = MAKE_CELL(BgL_cellvalz00_4300);
				}
				BgL_regsz00_1501 = MAKE_CELL(BNIL);
				{
					BgL_blockz00_bglt BgL_bz00_1553;

					{
						obj_t BgL_l4680z00_1506;

						BgL_l4680z00_1506 = BgL_paramsz00_20;
					BgL_zc3anonymousza34878ze3z83_1507:
						if (PAIRP(BgL_l4680z00_1506))
							{	/* SawC/code.scm 128 */
								BGl_exprzd2ze3iregz31zzsaw_c_codez00(BgL_regsz00_1501,
									BgL_nz00_1500, CAR(BgL_l4680z00_1506));
								{
									obj_t BgL_l4680z00_4306;

									BgL_l4680z00_4306 = CDR(BgL_l4680z00_1506);
									BgL_l4680z00_1506 = BgL_l4680z00_4306;
									goto BgL_zc3anonymousza34878ze3z83_1507;
								}
							}
						else
							{	/* SawC/code.scm 128 */
								((bool_t) 1);
							}
					}
					CELL_SET(BgL_regsz00_1501, BNIL);
					{
						obj_t BgL_l4682z00_1513;

						BgL_l4682z00_1513 = BgL_lz00_21;
					BgL_zc3anonymousza34882ze3z83_1514:
						if (PAIRP(BgL_l4682z00_1513))
							{	/* SawC/code.scm 130 */
								{	/* SawC/code.scm 130 */
									obj_t BgL_arg4884z00_1516;

									BgL_arg4884z00_1516 = CAR(BgL_l4682z00_1513);
									BgL_bz00_1553 = (BgL_blockz00_bglt) (BgL_arg4884z00_1516);
									{	/* SawC/code.scm 121 */
										obj_t BgL_g4679z00_1555;

										BgL_g4679z00_1555 =
											(((BgL_blockz00_bglt) CREF(BgL_bz00_1553))->BgL_firstz00);
										{
											obj_t BgL_l4677z00_1557;

											BgL_l4677z00_1557 = BgL_g4679z00_1555;
										BgL_zc3anonymousza34908ze3z83_1558:
											if (PAIRP(BgL_l4677z00_1557))
												{	/* SawC/code.scm 127 */
													{	/* SawC/code.scm 123 */
														obj_t BgL_insz00_1560;

														BgL_insz00_1560 = CAR(BgL_l4677z00_1557);
														{	/* SawC/code.scm 124 */
															BgL_rtl_funz00_bglt BgL_arg4910z00_1562;

															{
																BgL_rtl_insz00_bglt BgL_auxz00_4315;

																BgL_auxz00_4315 =
																	(BgL_rtl_insz00_bglt) (BgL_insz00_1560);
																BgL_arg4910z00_1562 =
																	(((BgL_rtl_insz00_bglt)
																		CREF(BgL_auxz00_4315))->BgL_funz00);
															}
															BGl_check_funz00zzsaw_c_codez00
																(BgL_arg4910z00_1562);
														}
														{	/* SawC/code.scm 125 */
															bool_t BgL_testz00_4319;

															{	/* SawC/code.scm 125 */
																BgL_rtl_insz00_bglt BgL_obj4468z00_3129;

																BgL_obj4468z00_3129 =
																	(BgL_rtl_insz00_bglt) (BgL_insz00_1560);
																BgL_testz00_4319 =
																	CBOOL(
																	(((BgL_rtl_insz00_bglt)
																			CREF(BgL_obj4468z00_3129))->BgL_destz00));
															}
															if (BgL_testz00_4319)
																{	/* SawC/code.scm 125 */
																	obj_t BgL_arg4912z00_1564;

																	{
																		BgL_rtl_insz00_bglt BgL_auxz00_4323;

																		BgL_auxz00_4323 =
																			(BgL_rtl_insz00_bglt) (BgL_insz00_1560);
																		BgL_arg4912z00_1564 =
																			(((BgL_rtl_insz00_bglt)
																				CREF(BgL_auxz00_4323))->BgL_destz00);
																	}
																	BGl_exprzd2ze3iregz31zzsaw_c_codez00
																		(BgL_regsz00_1501, BgL_nz00_1500,
																		BgL_arg4912z00_1564);
																}
															else
																{	/* SawC/code.scm 125 */
																	BFALSE;
																}
														}
														{	/* SawC/code.scm 126 */
															obj_t BgL_g4676z00_1565;

															{
																BgL_rtl_insz00_bglt BgL_auxz00_4327;

																BgL_auxz00_4327 =
																	(BgL_rtl_insz00_bglt) (BgL_insz00_1560);
																BgL_g4676z00_1565 =
																	(((BgL_rtl_insz00_bglt)
																		CREF(BgL_auxz00_4327))->BgL_argsz00);
															}
															{
																obj_t BgL_l4674z00_1567;

																BgL_l4674z00_1567 = BgL_g4676z00_1565;
															BgL_zc3anonymousza34913ze3z83_1568:
																if (PAIRP(BgL_l4674z00_1567))
																	{	/* SawC/code.scm 126 */
																		BGl_exprzd2ze3iregz31zzsaw_c_codez00
																			(BgL_regsz00_1501, BgL_nz00_1500,
																			CAR(BgL_l4674z00_1567));
																		{
																			obj_t BgL_l4674z00_4334;

																			BgL_l4674z00_4334 =
																				CDR(BgL_l4674z00_1567);
																			BgL_l4674z00_1567 = BgL_l4674z00_4334;
																			goto BgL_zc3anonymousza34913ze3z83_1568;
																		}
																	}
																else
																	{	/* SawC/code.scm 126 */
																		((bool_t) 1);
																	}
															}
														}
													}
													{
														obj_t BgL_l4677z00_4336;

														BgL_l4677z00_4336 = CDR(BgL_l4677z00_1557);
														BgL_l4677z00_1557 = BgL_l4677z00_4336;
														goto BgL_zc3anonymousza34908ze3z83_1558;
													}
												}
											else
												{	/* SawC/code.scm 127 */
													((bool_t) 1);
												}
										}
									}
								}
								{
									obj_t BgL_l4682z00_4339;

									BgL_l4682z00_4339 = CDR(BgL_l4682z00_1513);
									BgL_l4682z00_1513 = BgL_l4682z00_4339;
									goto BgL_zc3anonymousza34882ze3z83_1514;
								}
							}
						else
							{	/* SawC/code.scm 130 */
								((bool_t) 1);
							}
					}
					return CELL_REF(BgL_regsz00_1501);
				}
			}
		}
	}



/* check_fun */
	obj_t BGl_check_funz00zzsaw_c_codez00(BgL_rtl_funz00_bglt BgL_funz00_1519)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 107 */
			{	/* SawC/code.scm 107 */
				bool_t BgL_testz00_4341;

				{	/* SawC/code.scm 107 */
					obj_t BgL_obj4451z00_3094;

					BgL_obj4451z00_3094 = (obj_t) (BgL_funz00_1519);
					BgL_testz00_4341 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj4451z00_3094,
						BGl_rtl_protectz00zzsaw_defsz00);
				}
				if (BgL_testz00_4341)
					{	/* SawC/code.scm 107 */
						BGl_za2hasprotectza2z00zzsaw_c_codez00 = ((bool_t) 1);
					}
				else
					{	/* SawC/code.scm 107 */
						BFALSE;
					}
			}
			{	/* SawC/code.scm 108 */
				bool_t BgL_testz00_4344;

				{	/* SawC/code.scm 108 */
					obj_t BgL_obj4359z00_3095;

					BgL_obj4359z00_3095 = (obj_t) (BgL_funz00_1519);
					BgL_testz00_4344 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj4359z00_3095,
						BGl_rtl_callz00zzsaw_defsz00);
				}
				if (BgL_testz00_4344)
					{	/* SawC/code.scm 109 */
						obj_t BgL_idz00_1523;

						{	/* SawC/code.scm 109 */
							BgL_variablez00_bglt BgL_obj1604z00_3097;

							{	/* SawC/code.scm 109 */
								BgL_rtl_callz00_bglt BgL_obj4347z00_3096;

								BgL_obj4347z00_3096 = (BgL_rtl_callz00_bglt) (BgL_funz00_1519);
								BgL_obj1604z00_3097 =
									(BgL_variablez00_bglt) (
									(((BgL_rtl_callz00_bglt) CREF(BgL_obj4347z00_3096))->
										BgL_varz00));
							}
							BgL_idz00_1523 =
								(((BgL_variablez00_bglt) CREF(BgL_obj1604z00_3097))->BgL_idz00);
						}
						if ((BgL_idz00_1523 == CNST_TABLE_REF(((long) 1))))
							{	/* SawC/code.scm 110 */
								BGl_za2haspushexitza2z00zzsaw_c_codez00 = ((bool_t) 1);
							}
						else
							{	/* SawC/code.scm 110 */
								BFALSE;
							}
						if ((BgL_idz00_1523 == CNST_TABLE_REF(((long) 2))))
							{	/* SawC/code.scm 111 */
								return (BGl_za2haspushbeforeza2z00zzsaw_c_codez00 =
									((bool_t) 1), BUNSPEC);
							}
						else
							{	/* SawC/code.scm 111 */
								return BFALSE;
							}
					}
				else
					{	/* SawC/code.scm 108 */
						return BFALSE;
					}
			}
		}
	}



/* expr->ireg */
	obj_t BGl_exprzd2ze3iregz31zzsaw_c_codez00(obj_t BgL_regsz00_4037,
		obj_t BgL_nz00_4036, obj_t BgL_ez00_1527)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 119 */
			{	/* SawC/code.scm 114 */
				bool_t BgL__ortest_4629z00_1529;

				BgL__ortest_4629z00_1529 =
					BGl_iszd2azf3z21zz__objectz00(BgL_ez00_1527,
					BGl_iregz00zzsaw_c_codez00);
				if (BgL__ortest_4629z00_1529)
					{	/* SawC/code.scm 114 */
						return BBOOL(BgL__ortest_4629z00_1529);
					}
				else
					{	/* SawC/code.scm 114 */
						if (BGl_iszd2azf3z21zz__objectz00(BgL_ez00_1527,
								BGl_rtl_regz00zzsaw_defsz00))
							{	/* SawC/code.scm 115 */
								{	/* SawC/code.scm 115 */
									BgL_rtl_regz00_bglt BgL_obj4630z00_1531;

									BgL_obj4630z00_1531 =
										((BgL_rtl_regz00_bglt)
										(BgL_rtl_regz00_bglt) (BgL_ez00_1527));
									{	/* SawC/code.scm 115 */
										BgL_iregz00_bglt BgL_arg4894z00_1532;

										{	/* SawC/code.scm 115 */
											BgL_iregz00_bglt BgL_res5482z00_3106;

											{	/* SawC/code.scm 115 */
												obj_t BgL_index4580z00_3100;

												BgL_index4580z00_3100 = CELL_REF(BgL_nz00_4036);
												{	/* SawC/code.scm 115 */
													BgL_iregz00_bglt BgL_new4581z00_3101;

													BgL_new4581z00_3101 =
														((BgL_iregz00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_iregz00_bgl))));
													{	/* SawC/code.scm 115 */
														BgL_iregz00_bglt BgL_res5481z00_3105;

														{	/* SawC/code.scm 115 */
															BgL_iregz00_bglt BgL_new4593z00_3102;

															BgL_new4593z00_3102 = BgL_new4581z00_3101;
															{	/* SawC/code.scm 115 */
																obj_t BgL_index4592z00_3104;

																BgL_index4592z00_3104 = BgL_index4580z00_3100;
																((((BgL_iregz00_bglt)
																			CREF(BgL_new4593z00_3102))->
																		BgL_indexz00) =
																	((obj_t) BgL_index4592z00_3104), BUNSPEC);
																BgL_res5481z00_3105 = BgL_new4593z00_3102;
														}} BgL_res5481z00_3105;
													}
													BgL_res5482z00_3106 = BgL_new4581z00_3101;
											}}
											BgL_arg4894z00_1532 = BgL_res5482z00_3106;
										}
										{	/* SawC/code.scm 115 */
											obj_t BgL_auxz00_4368;

											BgL_objectz00_bglt BgL_auxz00_4366;

											BgL_auxz00_4368 = (obj_t) (BgL_arg4894z00_1532);
											BgL_auxz00_4366 =
												(BgL_objectz00_bglt) (BgL_obj4630z00_1531);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_4366, BgL_auxz00_4368);
									}}
									BGL_OBJECT_CLASS_NUM_SET(
										(BgL_objectz00_bglt) (BgL_obj4630z00_1531),
										BGl_classzd2numzd2zz__objectz00
										(BGl_iregz00zzsaw_c_codez00));
									BgL_obj4630z00_1531;
								}
								{	/* SawC/code.scm 116 */
									obj_t BgL_auxz00_4038;

									{	/* SawC/code.scm 116 */
										long BgL_za71za7_3109;

										BgL_za71za7_3109 = (long) CINT(CELL_REF(BgL_nz00_4036));
										BgL_auxz00_4038 = BINT((BgL_za71za7_3109 + ((long) 1)));
									}
									CELL_SET(BgL_nz00_4036, BgL_auxz00_4038);
								}
								{	/* SawC/code.scm 117 */
									obj_t BgL_auxz00_4039;

									BgL_auxz00_4039 =
										MAKE_PAIR(BgL_ez00_1527, CELL_REF(BgL_regsz00_4037));
									return CELL_SET(BgL_regsz00_4037, BgL_auxz00_4039);
								}
							}
						else
							{	/* SawC/code.scm 115 */
								{	/* SawC/code.scm 118 */
									BgL_rtl_funz00_bglt BgL_arg4896z00_1534;

									{
										BgL_rtl_insz00_bglt BgL_auxz00_4378;

										BgL_auxz00_4378 = (BgL_rtl_insz00_bglt) (BgL_ez00_1527);
										BgL_arg4896z00_1534 =
											(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4378))->
											BgL_funz00);
									}
									BGl_check_funz00zzsaw_c_codez00(BgL_arg4896z00_1534);
								}
								{	/* SawC/code.scm 119 */
									obj_t BgL_l4668z00_1535;

									{
										BgL_rtl_insz00_bglt BgL_auxz00_4382;

										BgL_auxz00_4382 = (BgL_rtl_insz00_bglt) (BgL_ez00_1527);
										BgL_l4668z00_1535 =
											(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4382))->
											BgL_argsz00);
									}
									if (NULLP(BgL_l4668z00_1535))
										{	/* SawC/code.scm 119 */
											return BNIL;
										}
									else
										{	/* SawC/code.scm 119 */
											obj_t BgL_head4670z00_1537;

											{	/* SawC/code.scm 119 */
												obj_t BgL_arg4904z00_1550;

												{	/* SawC/code.scm 119 */
													obj_t BgL_arg4906z00_1552;

													BgL_arg4906z00_1552 = CAR(BgL_l4668z00_1535);
													BgL_arg4904z00_1550 =
														BGl_exprzd2ze3iregz31zzsaw_c_codez00
														(BgL_regsz00_4037, BgL_nz00_4036,
														BgL_arg4906z00_1552);
												}
												BgL_head4670z00_1537 =
													MAKE_PAIR(BgL_arg4904z00_1550, BNIL);
											}
											{	/* SawC/code.scm 119 */
												obj_t BgL_g4673z00_1538;

												BgL_g4673z00_1538 = CDR(BgL_l4668z00_1535);
												{
													obj_t BgL_l4668z00_1540;

													obj_t BgL_tail4671z00_1541;

													BgL_l4668z00_1540 = BgL_g4673z00_1538;
													BgL_tail4671z00_1541 = BgL_head4670z00_1537;
												BgL_zc3anonymousza34898ze3z83_1542:
													if (NULLP(BgL_l4668z00_1540))
														{	/* SawC/code.scm 119 */
															return BgL_head4670z00_1537;
														}
													else
														{	/* SawC/code.scm 119 */
															obj_t BgL_newtail4672z00_1544;

															{	/* SawC/code.scm 119 */
																obj_t BgL_arg4901z00_1546;

																{	/* SawC/code.scm 119 */
																	obj_t BgL_arg4903z00_1548;

																	BgL_arg4903z00_1548 = CAR(BgL_l4668z00_1540);
																	BgL_arg4901z00_1546 =
																		BGl_exprzd2ze3iregz31zzsaw_c_codez00
																		(BgL_regsz00_4037, BgL_nz00_4036,
																		BgL_arg4903z00_1548);
																}
																BgL_newtail4672z00_1544 =
																	MAKE_PAIR(BgL_arg4901z00_1546, BNIL);
															}
															SET_CDR(BgL_tail4671z00_1541,
																BgL_newtail4672z00_1544);
															{
																obj_t BgL_tail4671z00_4399;

																obj_t BgL_l4668z00_4397;

																BgL_l4668z00_4397 = CDR(BgL_l4668z00_1540);
																BgL_tail4671z00_4399 = BgL_newtail4672z00_1544;
																BgL_tail4671z00_1541 = BgL_tail4671z00_4399;
																BgL_l4668z00_1540 = BgL_l4668z00_4397;
																goto BgL_zc3anonymousza34898ze3z83_1542;
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



/* gen-type-regs */
	obj_t BGl_genzd2typezd2regsz00zzsaw_c_codez00(obj_t BgL_lz00_22)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 133 */
			{	/* SawC/code.scm 134 */
				obj_t BgL_arg4919z00_1579;

				{	/* SawC/code.scm 134 */
					obj_t BgL_res5483z00_3137;

					{	/* SawC/code.scm 134 */
						obj_t BgL_auxz00_4400;

						BgL_auxz00_4400 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res5483z00_3137 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4400);
					}
					BgL_arg4919z00_1579 = BgL_res5483z00_3137;
				}
				bgl_display_string(BGl_string5587z00zzsaw_c_codez00,
					BgL_arg4919z00_1579);
			}
			if (NULLP(BgL_lz00_22))
				{	/* SawC/code.scm 135 */
					((bool_t) 0);
				}
			else
				{	/* SawC/code.scm 135 */
					BGl_genzd2typezd2regz00zzsaw_c_codez00(CAR(BgL_lz00_22));
					{	/* SawC/code.scm 138 */
						obj_t BgL_g4686z00_1582;

						BgL_g4686z00_1582 = CDR(BgL_lz00_22);
						{
							obj_t BgL_l4684z00_1584;

							BgL_l4684z00_1584 = BgL_g4686z00_1582;
						BgL_zc3anonymousza34922ze3z83_1585:
							if (PAIRP(BgL_l4684z00_1584))
								{	/* SawC/code.scm 139 */
									{	/* SawC/code.scm 138 */
										obj_t BgL_argz00_1587;

										BgL_argz00_1587 = CAR(BgL_l4684z00_1584);
										{	/* SawC/code.scm 138 */
											obj_t BgL_arg4925z00_1589;

											{	/* SawC/code.scm 138 */
												obj_t BgL_res5484z00_3146;

												{	/* SawC/code.scm 138 */
													obj_t BgL_auxz00_4412;

													BgL_auxz00_4412 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res5484z00_3146 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4412);
												}
												BgL_arg4925z00_1589 = BgL_res5484z00_3146;
											}
											bgl_display_string(BGl_string5588z00zzsaw_c_codez00,
												BgL_arg4925z00_1589);
										}
										BGl_genzd2typezd2regz00zzsaw_c_codez00(BgL_argz00_1587);
									}
									{
										obj_t BgL_l4684z00_4417;

										BgL_l4684z00_4417 = CDR(BgL_l4684z00_1584);
										BgL_l4684z00_1584 = BgL_l4684z00_4417;
										goto BgL_zc3anonymousza34922ze3z83_1585;
									}
								}
							else
								{	/* SawC/code.scm 139 */
									((bool_t) 1);
								}
						}
					}
				}
			{	/* SawC/code.scm 140 */
				obj_t BgL_arg4928z00_1593;

				{	/* SawC/code.scm 140 */
					obj_t BgL_res5485z00_3151;

					{	/* SawC/code.scm 140 */
						obj_t BgL_auxz00_4419;

						BgL_auxz00_4419 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res5485z00_3151 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4419);
					}
					BgL_arg4928z00_1593 = BgL_res5485z00_3151;
				}
				return
					bgl_display_string(BGl_string5589z00zzsaw_c_codez00,
					BgL_arg4928z00_1593);
			}
		}
	}



/* gen-type-reg */
	obj_t BGl_genzd2typezd2regz00zzsaw_c_codez00(obj_t BgL_regz00_23)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 142 */
			{	/* SawC/code.scm 143 */
				obj_t BgL_arg4929z00_1594;

				obj_t BgL_arg4930z00_1595;

				{	/* SawC/code.scm 143 */
					BgL_typez00_bglt BgL_arg4931z00_1596;

					obj_t BgL_arg4932z00_1597;

					{
						BgL_rtl_regz00_bglt BgL_auxz00_4423;

						BgL_auxz00_4423 = (BgL_rtl_regz00_bglt) (BgL_regz00_23);
						BgL_arg4931z00_1596 =
							(((BgL_rtl_regz00_bglt) CREF(BgL_auxz00_4423))->BgL_typez00);
					}
					BgL_arg4932z00_1597 = BGl_reg_namez00zzsaw_c_codez00(BgL_regz00_23);
					BgL_arg4929z00_1594 =
						BGl_makezd2typedzd2declarationz00zztype_toolsz00
						(BgL_arg4931z00_1596, BgL_arg4932z00_1597);
				}
				{	/* SawC/code.scm 143 */
					obj_t BgL_res5486z00_3156;

					{	/* SawC/code.scm 143 */
						obj_t BgL_auxz00_4428;

						BgL_auxz00_4428 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res5486z00_3156 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4428);
					}
					BgL_arg4930z00_1595 = BgL_res5486z00_3156;
				}
				return bgl_display_obj(BgL_arg4929z00_1594, BgL_arg4930z00_1595);
			}
		}
	}



/* reg_name */
	obj_t BGl_reg_namez00zzsaw_c_codez00(obj_t BgL_regz00_24)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 145 */
			{	/* SawC/code.scm 146 */
				obj_t BgL_arg4933z00_1598;

				obj_t BgL_arg4934z00_1599;

				{	/* SawC/code.scm 146 */
					bool_t BgL_testz00_4432;

					{	/* SawC/code.scm 146 */
						BgL_rtl_regz00_bglt BgL_obj3797z00_3157;

						BgL_obj3797z00_3157 = (BgL_rtl_regz00_bglt) (BgL_regz00_24);
						BgL_testz00_4432 =
							CBOOL(
							(((BgL_rtl_regz00_bglt) CREF(BgL_obj3797z00_3157))->BgL_varz00));
					}
					if (BgL_testz00_4432)
						{	/* SawC/code.scm 146 */
							BgL_arg4933z00_1598 = BGl_string5590z00zzsaw_c_codez00;
						}
					else
						{	/* SawC/code.scm 146 */
							BgL_arg4933z00_1598 = BGl_string5591z00zzsaw_c_codez00;
						}
				}
				{	/* SawC/code.scm 147 */

					{	/* SawC/code.scm 147 */
						long BgL_auxz00_4436;

						{	/* SawC/code.scm 147 */
							obj_t BgL_auxz00_4437;

							{	/* SawC/code.scm 147 */
								BgL_iregz00_bglt BgL_obj4605z00_3158;

								BgL_obj4605z00_3158 = (BgL_iregz00_bglt) (BgL_regz00_24);
								{
									obj_t BgL_auxz00_4439;

									{	/* SawC/code.scm 147 */
										BgL_objectz00_bglt BgL_auxz00_4440;

										BgL_auxz00_4440 =
											(BgL_objectz00_bglt) (BgL_obj4605z00_3158);
										BgL_auxz00_4439 = BGL_OBJECT_WIDENING(BgL_auxz00_4440);
									}
									BgL_auxz00_4437 =
										(((BgL_iregz00_bglt) CREF(BgL_auxz00_4439))->BgL_indexz00);
							}}
							BgL_auxz00_4436 = (long) CINT(BgL_auxz00_4437);
						}
						BgL_arg4934z00_1599 =
							BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
							(BgL_auxz00_4436, ((long) 10));
				}}
				return string_append(BgL_arg4933z00_1598, BgL_arg4934z00_1599);
			}
		}
	}



/* declare-regs */
	bool_t BGl_declarezd2regszd2zzsaw_c_codez00(obj_t BgL_lz00_25)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 149 */
			{
				obj_t BgL_l4687z00_1605;

				BgL_l4687z00_1605 = BgL_lz00_25;
			BgL_zc3anonymousza34938ze3z83_1606:
				if (PAIRP(BgL_l4687z00_1605))
					{	/* SawC/code.scm 150 */
						{	/* SawC/code.scm 157 */
							obj_t BgL_rz00_1608;

							BgL_rz00_1608 = CAR(BgL_l4687z00_1605);
							{	/* SawC/code.scm 151 */
								obj_t BgL_arg4941z00_1610;

								{	/* SawC/code.scm 151 */
									obj_t BgL_res5487z00_3162;

									{	/* SawC/code.scm 151 */
										obj_t BgL_auxz00_4450;

										BgL_auxz00_4450 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res5487z00_3162 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4450);
									}
									BgL_arg4941z00_1610 = BgL_res5487z00_3162;
								}
								bgl_display_string(BGl_string5579z00zzsaw_c_codez00,
									BgL_arg4941z00_1610);
							}
							BGl_genzd2typezd2regz00zzsaw_c_codez00(BgL_rz00_1608);
							if (BGl_za2commentza2z00zzsaw_c_codez00)
								{	/* SawC/code.scm 154 */
									BgL_typez00_bglt BgL_typez00_1611;

									{
										BgL_rtl_regz00_bglt BgL_auxz00_4456;

										BgL_auxz00_4456 = (BgL_rtl_regz00_bglt) (BgL_rz00_1608);
										BgL_typez00_1611 =
											(((BgL_rtl_regz00_bglt) CREF(BgL_auxz00_4456))->
											BgL_typez00);
									}
									{	/* SawC/code.scm 156 */
										obj_t BgL_arg4943z00_1614;

										obj_t BgL_arg4945z00_1616;

										BgL_arg4943z00_1614 =
											(((BgL_typez00_bglt) CREF(BgL_typez00_1611))->BgL_idz00);
										BgL_arg4945z00_1616 =
											(((BgL_typez00_bglt) CREF(BgL_typez00_1611))->
											BgL_namez00);
										{	/* SawC/code.scm 156 */
											obj_t BgL_list4947z00_1618;

											{	/* SawC/code.scm 156 */
												obj_t BgL_arg4948z00_1619;

												{	/* SawC/code.scm 156 */
													obj_t BgL_arg4949z00_1620;

													{	/* SawC/code.scm 156 */
														obj_t BgL_arg4950z00_1621;

														{	/* SawC/code.scm 156 */
															obj_t BgL_arg4951z00_1622;

															BgL_arg4951z00_1622 =
																MAKE_PAIR(BGl_string5577z00zzsaw_c_codez00,
																BNIL);
															BgL_arg4950z00_1621 =
																MAKE_PAIR(BgL_arg4945z00_1616,
																BgL_arg4951z00_1622);
														}
														BgL_arg4949z00_1620 =
															MAKE_PAIR(BGl_string5585z00zzsaw_c_codez00,
															BgL_arg4950z00_1621);
													}
													BgL_arg4948z00_1619 =
														MAKE_PAIR(BgL_arg4943z00_1614, BgL_arg4949z00_1620);
												}
												BgL_list4947z00_1618 =
													MAKE_PAIR(BGl_string5592z00zzsaw_c_codez00,
													BgL_arg4948z00_1619);
											}
											BGl_displayza2za2zz__r4_output_6_10_3z00
												(BgL_list4947z00_1618);
										}
									}
								}
							else
								{	/* SawC/code.scm 157 */
									obj_t BgL_arg4953z00_1624;

									{	/* SawC/code.scm 157 */
										obj_t BgL_res5488z00_3169;

										{	/* SawC/code.scm 157 */
											obj_t BgL_auxz00_4467;

											BgL_auxz00_4467 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res5488z00_3169 =
												BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4467);
										}
										BgL_arg4953z00_1624 = BgL_res5488z00_3169;
									}
									bgl_display_string(BGl_string5593z00zzsaw_c_codez00,
										BgL_arg4953z00_1624);
								}
						}
						{
							obj_t BgL_l4687z00_4471;

							BgL_l4687z00_4471 = CDR(BgL_l4687z00_1605);
							BgL_l4687z00_1605 = BgL_l4687z00_4471;
							goto BgL_zc3anonymousza34938ze3z83_1606;
						}
					}
				else
					{	/* SawC/code.scm 150 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* genbody */
	bool_t BGl_genbodyz00zzsaw_c_codez00(obj_t BgL_lz00_26)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 160 */
			{
				obj_t BgL_l4692z00_1628;

				BgL_l4692z00_1628 = BgL_lz00_26;
			BgL_zc3anonymousza34955ze3z83_1629:
				if (PAIRP(BgL_l4692z00_1628))
					{	/* SawC/code.scm 161 */
						{	/* SawC/code.scm 165 */
							obj_t BgL_bz00_1631;

							BgL_bz00_1631 = CAR(BgL_l4692z00_1628);
							{	/* SawC/code.scm 162 */
								int BgL_arg4957z00_1632;

								{
									BgL_blockz00_bglt BgL_auxz00_4476;

									BgL_auxz00_4476 = (BgL_blockz00_bglt) (BgL_bz00_1631);
									BgL_arg4957z00_1632 =
										(((BgL_blockz00_bglt) CREF(BgL_auxz00_4476))->BgL_labelz00);
								}
								BGl_outzd2labelzd2zzsaw_c_codez00(BgL_arg4957z00_1632);
							}
							{	/* SawC/code.scm 163 */
								obj_t BgL_lz00_1633;

								{
									BgL_blockz00_bglt BgL_auxz00_4480;

									BgL_auxz00_4480 = (BgL_blockz00_bglt) (BgL_bz00_1631);
									BgL_lz00_1633 =
										(((BgL_blockz00_bglt) CREF(BgL_auxz00_4480))->BgL_firstz00);
								}
								{	/* SawC/code.scm 164 */
									bool_t BgL_testz00_4483;

									{	/* SawC/code.scm 164 */
										obj_t BgL_arg4959z00_1636;

										BgL_arg4959z00_1636 =
											BGl_findzd2locationzd2zzsaw_c_codez00(
											(BgL_rtl_insz00_bglt) (CAR(BgL_lz00_1633)));
										if (STRUCTP(BgL_arg4959z00_1636))
											{	/* SawC/code.scm 164 */
												BgL_testz00_4483 =
													(STRUCT_KEY(BgL_arg4959z00_1636) ==
													CNST_TABLE_REF(((long) 3)));
											}
										else
											{	/* SawC/code.scm 164 */
												BgL_testz00_4483 = ((bool_t) 0);
											}
									}
									if (BgL_testz00_4483)
										{	/* SawC/code.scm 164 */
											obj_t BgL_port4689z00_1635;

											{	/* SawC/code.scm 164 */
												obj_t BgL_res5490z00_3186;

												{	/* SawC/code.scm 164 */
													obj_t BgL_auxz00_4492;

													BgL_auxz00_4492 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res5490z00_3186 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4492);
												}
												BgL_port4689z00_1635 = BgL_res5490z00_3186;
											}
											bgl_display_string(BGl_string5594z00zzsaw_c_codez00,
												BgL_port4689z00_1635);
											bgl_display_char(((unsigned char) '\n'),
												BgL_port4689z00_1635);
										}
									else
										{	/* SawC/code.scm 164 */
											BFALSE;
										}
								}
								{
									obj_t BgL_l4690z00_1639;

									BgL_l4690z00_1639 = BgL_lz00_1633;
								BgL_zc3anonymousza34961ze3z83_1640:
									if (PAIRP(BgL_l4690z00_1639))
										{	/* SawC/code.scm 165 */
											{	/* SawC/code.scm 165 */
												obj_t BgL_arg4963z00_1642;

												BgL_arg4963z00_1642 = CAR(BgL_l4690z00_1639);
												BGl_genzd2inszd2zzsaw_c_codez00(
													(BgL_rtl_insz00_bglt) (BgL_arg4963z00_1642));
											}
											{
												obj_t BgL_l4690z00_4502;

												BgL_l4690z00_4502 = CDR(BgL_l4690z00_1639);
												BgL_l4690z00_1639 = BgL_l4690z00_4502;
												goto BgL_zc3anonymousza34961ze3z83_1640;
											}
										}
									else
										{	/* SawC/code.scm 165 */
											((bool_t) 1);
										}
								}
							}
						}
						{
							obj_t BgL_l4692z00_4504;

							BgL_l4692z00_4504 = CDR(BgL_l4692z00_1628);
							BgL_l4692z00_1628 = BgL_l4692z00_4504;
							goto BgL_zc3anonymousza34955ze3z83_1629;
						}
					}
				else
					{	/* SawC/code.scm 161 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* out-label */
	obj_t BGl_outzd2labelzd2zzsaw_c_codez00(int BgL_labelz00_27)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 168 */
			{	/* SawC/code.scm 169 */
				obj_t BgL_list4966z00_1647;

				{	/* SawC/code.scm 169 */
					obj_t BgL_arg4968z00_1649;

					{	/* SawC/code.scm 169 */
						obj_t BgL_arg4969z00_1650;

						BgL_arg4969z00_1650 =
							MAKE_PAIR(BGl_string5595z00zzsaw_c_codez00, BNIL);
						BgL_arg4968z00_1649 =
							MAKE_PAIR(BINT(BgL_labelz00_27), BgL_arg4969z00_1650);
					}
					BgL_list4966z00_1647 =
						MAKE_PAIR(BGl_string5596z00zzsaw_c_codez00, BgL_arg4968z00_1649);
				}
				BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list4966z00_1647);
			}
			if (BGl_za2countza2z00zzsaw_c_codez00)
				{	/* SawC/code.scm 170 */
					{	/* SawC/code.scm 171 */
						obj_t BgL_list4970z00_1651;

						{	/* SawC/code.scm 171 */
							obj_t BgL_arg4972z00_1653;

							{	/* SawC/code.scm 171 */
								obj_t BgL_arg4973z00_1654;

								BgL_arg4973z00_1654 =
									MAKE_PAIR(BGl_string5597z00zzsaw_c_codez00, BNIL);
								BgL_arg4972z00_1653 =
									MAKE_PAIR(BGl_za2counterza2z00zzsaw_c_codez00,
									BgL_arg4973z00_1654);
							}
							BgL_list4970z00_1651 =
								MAKE_PAIR(BGl_string5598z00zzsaw_c_codez00,
								BgL_arg4972z00_1653);
						}
						BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list4970z00_1651);
					}
					BGl_za2counterza2z00zzsaw_c_codez00 =
						BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 1)),
						BGl_za2counterza2z00zzsaw_c_codez00);
				}
			else
				{	/* SawC/code.scm 170 */
					BFALSE;
				}
			if (BGl_za2traceza2z00zzsaw_c_codez00)
				{	/* SawC/code.scm 173 */
					obj_t BgL_list4974z00_1655;

					{	/* SawC/code.scm 173 */
						obj_t BgL_arg4977z00_1657;

						{	/* SawC/code.scm 173 */
							obj_t BgL_arg4978z00_1658;

							BgL_arg4978z00_1658 =
								MAKE_PAIR(BGl_string5599z00zzsaw_c_codez00, BNIL);
							BgL_arg4977z00_1657 =
								MAKE_PAIR(BINT(BgL_labelz00_27), BgL_arg4978z00_1658);
						}
						BgL_list4974z00_1655 =
							MAKE_PAIR(BGl_string5600z00zzsaw_c_codez00, BgL_arg4977z00_1657);
					}
					return BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list4974z00_1655);
				}
			else
				{	/* SawC/code.scm 173 */
					return BFALSE;
				}
		}
	}



/* print-location? */
	bool_t BGl_printzd2locationzf3z21zzsaw_c_codez00(obj_t BgL_locz00_28)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 175 */
			{	/* SawC/code.scm 176 */
				bool_t BgL_testz00_4524;

				if (STRUCTP(BgL_locz00_28))
					{	/* SawC/code.scm 176 */
						BgL_testz00_4524 =
							(STRUCT_KEY(BgL_locz00_28) == CNST_TABLE_REF(((long) 3)));
					}
				else
					{	/* SawC/code.scm 176 */
						BgL_testz00_4524 = ((bool_t) 0);
					}
				if (BgL_testz00_4524)
					{	/* SawC/code.scm 176 */
						{	/* SawC/code.scm 178 */
							obj_t BgL_port4694z00_1660;

							{	/* SawC/code.scm 178 */
								obj_t BgL_res5492z00_3202;

								{	/* SawC/code.scm 178 */
									obj_t BgL_auxz00_4530;

									BgL_auxz00_4530 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res5492z00_3202 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4530);
								}
								BgL_port4694z00_1660 = BgL_res5492z00_3202;
							}
							bgl_display_string(BGl_string5601z00zzsaw_c_codez00,
								BgL_port4694z00_1660);
							bgl_display_obj(STRUCT_REF(BgL_locz00_28, (int) (((long) 2))),
								BgL_port4694z00_1660);
							bgl_display_string(BGl_string5602z00zzsaw_c_codez00,
								BgL_port4694z00_1660);
							bgl_display_obj(STRUCT_REF(BgL_locz00_28, (int) (((long) 0))),
								BgL_port4694z00_1660);
							bgl_display_string(BGl_string5603z00zzsaw_c_codez00,
								BgL_port4694z00_1660);
							bgl_display_char(((unsigned char) '\n'), BgL_port4694z00_1660);
						}
						return ((bool_t) 1);
					}
				else
					{	/* SawC/code.scm 176 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* find-location */
	obj_t BGl_findzd2locationzd2zzsaw_c_codez00(BgL_rtl_insz00_bglt BgL_insz00_29)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 182 */
			{	/* SawC/code.scm 194 */
				obj_t BgL__andtest_4637z00_1665;

				BgL__andtest_4637z00_1665 =
					BGl_za2czd2debugzd2lineszd2infoza2zd2zzengine_paramz00;
				if (CBOOL(BgL__andtest_4637z00_1665))
					{	/* SawC/code.scm 195 */
						bool_t BgL_testz00_4545;

						if (CBOOL
							(BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00))
							{	/* SawC/code.scm 195 */
								BgL_testz00_4545 = ((bool_t) 0);
							}
						else
							{	/* SawC/code.scm 195 */
								BgL_testz00_4545 = ((bool_t) 1);
							}
						if (BgL_testz00_4545)
							{	/* SawC/code.scm 195 */
								return BGl_walkz00zzsaw_c_codez00((obj_t) (BgL_insz00_29));
							}
						else
							{	/* SawC/code.scm 195 */
								return BFALSE;
							}
					}
				else
					{	/* SawC/code.scm 194 */
						return BFALSE;
					}
			}
		}
	}



/* walk */
	obj_t BGl_walkz00zzsaw_c_codez00(obj_t BgL_insz00_1674)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 193 */
			{
				obj_t BgL_lz00_1667;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_insz00_1674,
						BGl_rtl_insz00zzsaw_defsz00))
					{	/* SawC/code.scm 190 */
						obj_t BgL_locz00_1677;

						{
							BgL_rtl_insz00_bglt BgL_auxz00_4552;

							BgL_auxz00_4552 = (BgL_rtl_insz00_bglt) (BgL_insz00_1674);
							BgL_locz00_1677 =
								(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4552))->BgL_locz00);
						}
						{	/* SawC/code.scm 191 */
							bool_t BgL_testz00_4555;

							if (STRUCTP(BgL_locz00_1677))
								{	/* SawC/code.scm 191 */
									BgL_testz00_4555 =
										(STRUCT_KEY(BgL_locz00_1677) == CNST_TABLE_REF(((long) 3)));
								}
							else
								{	/* SawC/code.scm 191 */
									BgL_testz00_4555 = ((bool_t) 0);
								}
							if (BgL_testz00_4555)
								{	/* SawC/code.scm 191 */
									return BgL_locz00_1677;
								}
							else
								{	/* SawC/code.scm 191 */
									{
										BgL_rtl_insz00_bglt BgL_auxz00_4570;

										BgL_auxz00_4570 = (BgL_rtl_insz00_bglt) (BgL_insz00_1674);
										BgL_lz00_1667 =
											(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4570))->
											BgL_argsz00);
									}
								BgL_zc3anonymousza34982ze3z83_1668:
									{	/* SawC/code.scm 184 */
										bool_t BgL_testz00_4561;

										if (NULLP(BgL_lz00_1667))
											{	/* SawC/code.scm 184 */
												BgL_testz00_4561 = ((bool_t) 0);
											}
										else
											{	/* SawC/code.scm 184 */
												BgL_testz00_4561 = ((bool_t) 1);
											}
										if (BgL_testz00_4561)
											{	/* SawC/code.scm 185 */
												obj_t BgL__ortest_4636z00_1670;

												BgL__ortest_4636z00_1670 =
													BGl_walkz00zzsaw_c_codez00(CAR(BgL_lz00_1667));
												if (CBOOL(BgL__ortest_4636z00_1670))
													{	/* SawC/code.scm 185 */
														return BgL__ortest_4636z00_1670;
													}
												else
													{
														obj_t BgL_lz00_4568;

														BgL_lz00_4568 = CDR(BgL_lz00_1667);
														BgL_lz00_1667 = BgL_lz00_4568;
														goto BgL_zc3anonymousza34982ze3z83_1668;
													}
											}
										else
											{	/* SawC/code.scm 184 */
												return BFALSE;
											}
									}
								}
						}
					}
				else
					{	/* SawC/code.scm 188 */
						return BFALSE;
					}
			}
		}
	}



/* gen-ins */
	obj_t BGl_genzd2inszd2zzsaw_c_codez00(BgL_rtl_insz00_bglt BgL_insz00_30)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 201 */
			BGl_printzd2locationzf3z21zzsaw_c_codez00
				(BGl_findzd2locationzd2zzsaw_c_codez00(BgL_insz00_30));
			{	/* SawC/code.scm 204 */
				obj_t BgL_arg4995z00_1685;

				{	/* SawC/code.scm 204 */
					obj_t BgL_res5494z00_3230;

					{	/* SawC/code.scm 204 */
						obj_t BgL_auxz00_4575;

						BgL_auxz00_4575 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res5494z00_3230 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4575);
					}
					BgL_arg4995z00_1685 = BgL_res5494z00_3230;
				}
				bgl_display_string(BGl_string5604z00zzsaw_c_codez00,
					BgL_arg4995z00_1685);
			}
			if (CBOOL((((BgL_rtl_insz00_bglt) CREF(BgL_insz00_30))->BgL_destz00)))
				{	/* SawC/code.scm 205 */
					{	/* SawC/code.scm 206 */
						obj_t BgL_arg4997z00_1687;

						BgL_arg4997z00_1687 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_insz00_30))->BgL_destz00);
						BGl_genzd2regzf2destz20zzsaw_c_codez00(BgL_arg4997z00_1687);
					}
					{	/* SawC/code.scm 207 */
						obj_t BgL_arg4999z00_1689;

						{	/* SawC/code.scm 207 */
							obj_t BgL_res5495z00_3236;

							{	/* SawC/code.scm 207 */
								obj_t BgL_auxz00_4584;

								BgL_auxz00_4584 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res5495z00_3236 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4584);
							}
							BgL_arg4999z00_1689 = BgL_res5495z00_3236;
						}
						bgl_display_string(BGl_string5605z00zzsaw_c_codez00,
							BgL_arg4999z00_1689);
					}
				}
			else
				{	/* SawC/code.scm 205 */
					BFALSE;
				}
			{	/* SawC/code.scm 208 */
				BgL_rtl_funz00_bglt BgL_arg5000z00_1690;

				obj_t BgL_arg5001z00_1691;

				BgL_arg5000z00_1690 =
					(((BgL_rtl_insz00_bglt) CREF(BgL_insz00_30))->BgL_funz00);
				BgL_arg5001z00_1691 =
					(((BgL_rtl_insz00_bglt) CREF(BgL_insz00_30))->BgL_argsz00);
				{	/* SawC/code.scm 208 */
					obj_t BgL_method4706z00_3243;

					{	/* SawC/code.scm 208 */
						BgL_objectz00_bglt BgL_objz00_3244;

						BgL_objz00_3244 = (BgL_objectz00_bglt) (BgL_arg5000z00_1690);
						{	/* SawC/code.scm 208 */
							long BgL_objzd2classzd2numz00_3245;

							BgL_objzd2classzd2numz00_3245 =
								BGL_OBJECT_CLASS_NUM(BgL_objz00_3244);
							{	/* SawC/code.scm 208 */
								obj_t BgL_arg2643z00_3246;

								BgL_arg2643z00_3246 =
									PROCEDURE_REF(BGl_genzd2exprzd2envz00zzsaw_c_codez00,
									(int) (((long) 1)));
								{	/* SawC/code.scm 208 */
									obj_t BgL_arrayz00_3248;

									int BgL_offsetz00_3249;

									BgL_arrayz00_3248 = BgL_arg2643z00_3246;
									BgL_offsetz00_3249 = (int) (BgL_objzd2classzd2numz00_3245);
									{	/* SawC/code.scm 208 */
										long BgL_offsetz00_3250;

										BgL_offsetz00_3250 =
											((long) (BgL_offsetz00_3249) - OBJECT_TYPE);
										{	/* SawC/code.scm 208 */
											long BgL_modz00_3251;

											{	/* SawC/code.scm 208 */
												int BgL_arg2645z00_3252;

												BgL_arg2645z00_3252 = (int) (((long) 16));
												{	/* SawC/code.scm 208 */
													long BgL_auxz00_4598;

													BgL_auxz00_4598 = (long) (BgL_arg2645z00_3252);
													BgL_modz00_3251 =
														(BgL_offsetz00_3250 / BgL_auxz00_4598);
											}}
											{	/* SawC/code.scm 208 */
												long BgL_restz00_3253;

												{	/* SawC/code.scm 208 */
													int BgL_arg2644z00_3254;

													BgL_arg2644z00_3254 = (int) (((long) 16));
													{	/* SawC/code.scm 208 */
														long BgL_auxz00_4602;

														BgL_auxz00_4602 = (long) (BgL_arg2644z00_3254);
														BgL_restz00_3253 =
															(BgL_offsetz00_3250 % BgL_auxz00_4602);
												}}
												{	/* SawC/code.scm 208 */

													BgL_method4706z00_3243 =
														VECTOR_REF(VECTOR_REF(BgL_arrayz00_3248,
															(int) (BgL_modz00_3251)),
														(int) (BgL_restz00_3253));
					}}}}}}}}
					PROCEDURE_ENTRY(BgL_method4706z00_3243) (BgL_method4706z00_3243,
						(obj_t) (BgL_arg5000z00_1690), BgL_arg5001z00_1691, BEOA);
			}}
			{	/* SawC/code.scm 209 */
				obj_t BgL_arg5003z00_1693;

				{	/* SawC/code.scm 209 */
					obj_t BgL_res5498z00_3269;

					{	/* SawC/code.scm 209 */
						obj_t BgL_auxz00_4612;

						BgL_auxz00_4612 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res5498z00_3269 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4612);
					}
					BgL_arg5003z00_1693 = BgL_res5498z00_3269;
				}
				return
					bgl_display_string(BGl_string5593z00zzsaw_c_codez00,
					BgL_arg5003z00_1693);
			}
		}
	}



/* gen-args */
	bool_t BGl_genzd2argszd2zzsaw_c_codez00(obj_t BgL_argsz00_35)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 219 */
			if (NULLP(BgL_argsz00_35))
				{	/* SawC/code.scm 220 */
					return ((bool_t) 0);
				}
			else
				{	/* SawC/code.scm 220 */
					BGl_genzd2regzd2zzsaw_c_codez00(CAR(BgL_argsz00_35));
					{	/* SawC/code.scm 222 */
						obj_t BgL_g4697z00_1696;

						BgL_g4697z00_1696 = CDR(BgL_argsz00_35);
						{
							obj_t BgL_l4695z00_1698;

							BgL_l4695z00_1698 = BgL_g4697z00_1696;
						BgL_zc3anonymousza35006ze3z83_1699:
							if (PAIRP(BgL_l4695z00_1698))
								{	/* SawC/code.scm 223 */
									{	/* SawC/code.scm 222 */
										obj_t BgL_rz00_1701;

										BgL_rz00_1701 = CAR(BgL_l4695z00_1698);
										{	/* SawC/code.scm 222 */
											obj_t BgL_arg5009z00_1703;

											{	/* SawC/code.scm 222 */
												obj_t BgL_res5499z00_3278;

												{	/* SawC/code.scm 222 */
													obj_t BgL_auxz00_4624;

													BgL_auxz00_4624 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res5499z00_3278 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4624);
												}
												BgL_arg5009z00_1703 = BgL_res5499z00_3278;
											}
											bgl_display_string(BGl_string5588z00zzsaw_c_codez00,
												BgL_arg5009z00_1703);
										}
										BGl_genzd2regzd2zzsaw_c_codez00(BgL_rz00_1701);
									}
									{
										obj_t BgL_l4695z00_4629;

										BgL_l4695z00_4629 = CDR(BgL_l4695z00_1698);
										BgL_l4695z00_1698 = BgL_l4695z00_4629;
										goto BgL_zc3anonymousza35006ze3z83_1699;
									}
								}
							else
								{	/* SawC/code.scm 223 */
									return ((bool_t) 1);
								}
						}
					}
				}
		}
	}



/* gen-reg */
	obj_t BGl_genzd2regzd2zzsaw_c_codez00(obj_t BgL_regz00_36)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 225 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_regz00_36,
					BGl_iregz00zzsaw_c_codez00))
				{	/* SawC/code.scm 226 */
					return BGl_genzd2regzf2destz20zzsaw_c_codez00(BgL_regz00_36);
				}
			else
				{	/* SawC/code.scm 228 */
					BgL_rtl_funz00_bglt BgL_arg5012z00_1707;

					obj_t BgL_arg5013z00_1708;

					{
						BgL_rtl_insz00_bglt BgL_auxz00_4634;

						BgL_auxz00_4634 = (BgL_rtl_insz00_bglt) (BgL_regz00_36);
						BgL_arg5012z00_1707 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4634))->BgL_funz00);
					}
					{
						BgL_rtl_insz00_bglt BgL_auxz00_4637;

						BgL_auxz00_4637 = (BgL_rtl_insz00_bglt) (BgL_regz00_36);
						BgL_arg5013z00_1708 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4637))->BgL_argsz00);
					}
					{	/* SawC/code.scm 228 */
						obj_t BgL_method4706z00_3287;

						{	/* SawC/code.scm 228 */
							BgL_objectz00_bglt BgL_objz00_3288;

							BgL_objz00_3288 = (BgL_objectz00_bglt) (BgL_arg5012z00_1707);
							{	/* SawC/code.scm 228 */
								long BgL_objzd2classzd2numz00_3289;

								BgL_objzd2classzd2numz00_3289 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_3288);
								{	/* SawC/code.scm 228 */
									obj_t BgL_arg2643z00_3290;

									BgL_arg2643z00_3290 =
										PROCEDURE_REF(BGl_genzd2exprzd2envz00zzsaw_c_codez00,
										(int) (((long) 1)));
									{	/* SawC/code.scm 228 */
										obj_t BgL_arrayz00_3292;

										int BgL_offsetz00_3293;

										BgL_arrayz00_3292 = BgL_arg2643z00_3290;
										BgL_offsetz00_3293 = (int) (BgL_objzd2classzd2numz00_3289);
										{	/* SawC/code.scm 228 */
											long BgL_offsetz00_3294;

											BgL_offsetz00_3294 =
												((long) (BgL_offsetz00_3293) - OBJECT_TYPE);
											{	/* SawC/code.scm 228 */
												long BgL_modz00_3295;

												{	/* SawC/code.scm 228 */
													int BgL_arg2645z00_3296;

													BgL_arg2645z00_3296 = (int) (((long) 16));
													{	/* SawC/code.scm 228 */
														long BgL_auxz00_4648;

														BgL_auxz00_4648 = (long) (BgL_arg2645z00_3296);
														BgL_modz00_3295 =
															(BgL_offsetz00_3294 / BgL_auxz00_4648);
												}}
												{	/* SawC/code.scm 228 */
													long BgL_restz00_3297;

													{	/* SawC/code.scm 228 */
														int BgL_arg2644z00_3298;

														BgL_arg2644z00_3298 = (int) (((long) 16));
														{	/* SawC/code.scm 228 */
															long BgL_auxz00_4652;

															BgL_auxz00_4652 = (long) (BgL_arg2644z00_3298);
															BgL_restz00_3297 =
																(BgL_offsetz00_3294 % BgL_auxz00_4652);
													}}
													{	/* SawC/code.scm 228 */

														BgL_method4706z00_3287 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_3292,
																(int) (BgL_modz00_3295)),
															(int) (BgL_restz00_3297));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method4706z00_3287) (BgL_method4706z00_3287,
							(obj_t) (BgL_arg5012z00_1707), BgL_arg5013z00_1708, BEOA);
					}
				}
		}
	}



/* gen-reg/dest */
	obj_t BGl_genzd2regzf2destz20zzsaw_c_codez00(obj_t BgL_regz00_37)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 230 */
			{	/* SawC/code.scm 231 */
				obj_t BgL_arg5014z00_1709;

				obj_t BgL_arg5015z00_1710;

				{	/* SawC/code.scm 231 */
					bool_t BgL_testz00_4662;

					{	/* SawC/code.scm 231 */
						BgL_rtl_regz00_bglt BgL_obj3797z00_3312;

						BgL_obj3797z00_3312 = (BgL_rtl_regz00_bglt) (BgL_regz00_37);
						BgL_testz00_4662 =
							CBOOL(
							(((BgL_rtl_regz00_bglt) CREF(BgL_obj3797z00_3312))->BgL_varz00));
					}
					if (BgL_testz00_4662)
						{	/* SawC/code.scm 231 */
							BgL_arg5014z00_1709 = BGl_string5590z00zzsaw_c_codez00;
						}
					else
						{	/* SawC/code.scm 231 */
							BgL_arg5014z00_1709 = BGl_string5591z00zzsaw_c_codez00;
						}
				}
				{	/* SawC/code.scm 231 */
					obj_t BgL_res5502z00_3314;

					{	/* SawC/code.scm 231 */
						obj_t BgL_auxz00_4666;

						BgL_auxz00_4666 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res5502z00_3314 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4666);
					}
					BgL_arg5015z00_1710 = BgL_res5502z00_3314;
				}
				bgl_display_obj(BgL_arg5014z00_1709, BgL_arg5015z00_1710);
			}
			{	/* SawC/code.scm 232 */
				obj_t BgL_arg5017z00_1712;

				obj_t BgL_arg5018z00_1713;

				{	/* SawC/code.scm 232 */
					BgL_iregz00_bglt BgL_obj4605z00_3315;

					BgL_obj4605z00_3315 = (BgL_iregz00_bglt) (BgL_regz00_37);
					{
						obj_t BgL_auxz00_4671;

						{	/* SawC/code.scm 232 */
							BgL_objectz00_bglt BgL_auxz00_4672;

							BgL_auxz00_4672 = (BgL_objectz00_bglt) (BgL_obj4605z00_3315);
							BgL_auxz00_4671 = BGL_OBJECT_WIDENING(BgL_auxz00_4672);
						}
						BgL_arg5017z00_1712 =
							(((BgL_iregz00_bglt) CREF(BgL_auxz00_4671))->BgL_indexz00);
					}
				}
				{	/* SawC/code.scm 232 */
					obj_t BgL_res5503z00_3317;

					{	/* SawC/code.scm 232 */
						obj_t BgL_auxz00_4676;

						BgL_auxz00_4676 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res5503z00_3317 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4676);
					}
					BgL_arg5018z00_1713 = BgL_res5503z00_3317;
				}
				return bgl_display_obj(BgL_arg5017z00_1712, BgL_arg5018z00_1713);
			}
		}
	}



/* gen-Xfuncall */
	obj_t BGl_genzd2Xfuncallzd2zzsaw_c_codez00(obj_t BgL_typez00_42,
		obj_t BgL_argsz00_43, bool_t BgL_eoazf3zf3_44)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 251 */
			{	/* SawC/code.scm 252 */
				obj_t BgL_list5019z00_1714;

				{	/* SawC/code.scm 252 */
					obj_t BgL_arg5021z00_1716;

					{	/* SawC/code.scm 252 */
						obj_t BgL_arg5022z00_1717;

						BgL_arg5022z00_1717 =
							MAKE_PAIR(BGl_string5606z00zzsaw_c_codez00, BNIL);
						BgL_arg5021z00_1716 =
							MAKE_PAIR(BgL_typez00_42, BgL_arg5022z00_1717);
					}
					BgL_list5019z00_1714 =
						MAKE_PAIR(BGl_string5607z00zzsaw_c_codez00, BgL_arg5021z00_1716);
				}
				BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list5019z00_1714);
			}
			BGl_genzd2regzd2zzsaw_c_codez00(CAR(BgL_argsz00_43));
			{	/* SawC/code.scm 254 */
				obj_t BgL_arg5025z00_1720;

				{	/* SawC/code.scm 254 */
					obj_t BgL_res5504z00_3320;

					{	/* SawC/code.scm 254 */
						obj_t BgL_auxz00_4686;

						BgL_auxz00_4686 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res5504z00_3320 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4686);
					}
					BgL_arg5025z00_1720 = BgL_res5504z00_3320;
				}
				bgl_display_string(BGl_string5608z00zzsaw_c_codez00,
					BgL_arg5025z00_1720);
			}
			BGl_genzd2argszd2zzsaw_c_codez00(BgL_argsz00_43);
			if (BgL_eoazf3zf3_44)
				{	/* SawC/code.scm 256 */
					obj_t BgL_arg5027z00_1722;

					{	/* SawC/code.scm 256 */
						obj_t BgL_res5505z00_3324;

						{	/* SawC/code.scm 256 */
							obj_t BgL_auxz00_4692;

							BgL_auxz00_4692 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res5505z00_3324 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4692);
						}
						BgL_arg5027z00_1722 = BgL_res5505z00_3324;
					}
					bgl_display_string(BGl_string5609z00zzsaw_c_codez00,
						BgL_arg5027z00_1722);
				}
			else
				{	/* SawC/code.scm 256 */
					BFALSE;
				}
			{	/* SawC/code.scm 257 */
				obj_t BgL_arg5029z00_1724;

				{	/* SawC/code.scm 257 */
					obj_t BgL_res5506z00_3328;

					{	/* SawC/code.scm 257 */
						obj_t BgL_auxz00_4696;

						BgL_auxz00_4696 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res5506z00_3328 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4696);
					}
					BgL_arg5029z00_1724 = BgL_res5506z00_3328;
				}
				return
					bgl_display_string(BGl_string5589z00zzsaw_c_codez00,
					BgL_arg5029z00_1724);
			}
		}
	}



/* gen-upcase */
	obj_t BGl_genzd2upcasezd2zzsaw_c_codez00(BgL_rtl_funz00_bglt BgL_funz00_55)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 308 */
			{	/* SawC/code.scm 309 */
				obj_t BgL_arg5031z00_1726;

				{	/* SawC/code.scm 310 */
					obj_t BgL_arg5034z00_1729;

					{	/* SawC/code.scm 310 */
						obj_t BgL_arg5035z00_1730;

						{	/* SawC/code.scm 310 */
							obj_t BgL_arg5036z00_1731;

							{	/* SawC/code.scm 310 */
								BgL_objectz00_bglt BgL_objectz00_3331;

								BgL_objectz00_3331 = (BgL_objectz00_bglt) (BgL_funz00_55);
								{	/* SawC/code.scm 310 */
									long BgL_arg2646z00_3332;

									{	/* SawC/code.scm 310 */
										long BgL_arg2647z00_3333;

										BgL_arg2647z00_3333 =
											BGL_OBJECT_CLASS_NUM(BgL_objectz00_3331);
										BgL_arg2646z00_3332 = (BgL_arg2647z00_3333 - OBJECT_TYPE);
									}
									BgL_arg5036z00_1731 =
										VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
										(int) (BgL_arg2646z00_3332));
							}}
							BgL_arg5035z00_1730 =
								BGl_classzd2namezd2zz__objectz00(BgL_arg5036z00_1731);
						}
						{	/* SawC/code.scm 310 */
							obj_t BgL_res5507z00_3341;

							{	/* SawC/code.scm 310 */
								obj_t BgL_arg2063z00_3340;

								BgL_arg2063z00_3340 = SYMBOL_TO_STRING(BgL_arg5035z00_1730);
								BgL_res5507z00_3341 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_3340);
							}
							BgL_arg5034z00_1729 = BgL_res5507z00_3341;
					}}
					BgL_arg5031z00_1726 =
						BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(BgL_arg5034z00_1729);
				}
				{	/* SawC/code.scm 309 */
					obj_t BgL_list5032z00_1727;

					{	/* SawC/code.scm 309 */
						obj_t BgL_arg5033z00_1728;

						BgL_arg5033z00_1728 = MAKE_PAIR(BgL_arg5031z00_1726, BNIL);
						BgL_list5032z00_1727 =
							MAKE_PAIR(BGl_string5610z00zzsaw_c_codez00, BgL_arg5033z00_1728);
					}
					return BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list5032z00_1727);
				}
			}
		}
	}



/* vfun-name */
	obj_t BGl_vfunzd2namezd2zzsaw_c_codez00(obj_t BgL_fz00_56,
		BgL_typez00_bglt BgL_typez00_57)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 312 */
			{	/* SawC/code.scm 313 */
				obj_t BgL_arg5038z00_1733;

				if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
							(((BgL_typez00_bglt) CREF(BgL_typez00_57))->BgL_idz00),
							CNST_TABLE_REF(((long) 4)))))
					{	/* SawC/code.scm 313 */
						BgL_arg5038z00_1733 = BGl_string5611z00zzsaw_c_codez00;
					}
				else
					{	/* SawC/code.scm 313 */
						BgL_arg5038z00_1733 = BGl_string5594z00zzsaw_c_codez00;
					}
				{	/* SawC/code.scm 313 */
					obj_t BgL_list5039z00_1734;

					{	/* SawC/code.scm 313 */
						obj_t BgL_arg5040z00_1735;

						{	/* SawC/code.scm 313 */
							obj_t BgL_arg5041z00_1736;

							BgL_arg5041z00_1736 = MAKE_PAIR(BgL_fz00_56, BNIL);
							BgL_arg5040z00_1735 =
								MAKE_PAIR(BgL_arg5038z00_1733, BgL_arg5041z00_1736);
						}
						BgL_list5039z00_1734 =
							MAKE_PAIR(BGl_string5612z00zzsaw_c_codez00, BgL_arg5040z00_1735);
					}
					return BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list5039z00_1734);
				}
			}
		}
	}



/* vextra */
	obj_t BGl_vextraz00zzsaw_c_codez00(BgL_typez00_bglt BgL_typez00_77)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 368 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
						(((BgL_typez00_bglt) CREF(BgL_typez00_77))->BgL_idz00),
						CNST_TABLE_REF(((long) 4)))))
				{	/* SawC/code.scm 370 */
					obj_t BgL_tnz00_1739;

					BgL_tnz00_1739 =
						(((BgL_typez00_bglt) CREF(BgL_typez00_77))->BgL_namez00);
					{	/* SawC/code.scm 371 */
						obj_t BgL_arg5044z00_1740;

						BgL_arg5044z00_1740 = bigloo_mangle(BgL_tnz00_1739);
						{	/* SawC/code.scm 371 */
							obj_t BgL_list5047z00_1743;

							{	/* SawC/code.scm 371 */
								obj_t BgL_arg5048z00_1744;

								{	/* SawC/code.scm 371 */
									obj_t BgL_arg5049z00_1745;

									{	/* SawC/code.scm 371 */
										obj_t BgL_arg5050z00_1746;

										BgL_arg5050z00_1746 =
											MAKE_PAIR(BGl_string5588z00zzsaw_c_codez00, BNIL);
										BgL_arg5049z00_1745 =
											MAKE_PAIR(BgL_tnz00_1739, BgL_arg5050z00_1746);
									}
									BgL_arg5048z00_1744 =
										MAKE_PAIR(BGl_string5588z00zzsaw_c_codez00,
										BgL_arg5049z00_1745);
								}
								BgL_list5047z00_1743 =
									MAKE_PAIR(BgL_arg5044z00_1740, BgL_arg5048z00_1744);
							}
							return
								BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list5047z00_1743);
						}
					}
				}
			else
				{	/* SawC/code.scm 369 */
					return BFALSE;
				}
		}
	}



/* patch */
	obj_t BGl_patchz00zzsaw_c_codez00(obj_t BgL_sz00_87)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 412 */
			if (bigloo_strcmp(BgL_sz00_87, BGl_string5613z00zzsaw_c_codez00))
				{	/* SawC/code.scm 414 */
					return BGl_string5614z00zzsaw_c_codez00;
				}
			else
				{	/* SawC/code.scm 414 */
					if (bigloo_strcmp(BgL_sz00_87, BGl_string5615z00zzsaw_c_codez00))
						{	/* SawC/code.scm 415 */
							return BGl_string5616z00zzsaw_c_codez00;
						}
					else
						{	/* SawC/code.scm 415 */
							if (bigloo_strcmp(BgL_sz00_87, BGl_string5617z00zzsaw_c_codez00))
								{	/* SawC/code.scm 416 */
									return BGl_string5618z00zzsaw_c_codez00;
								}
							else
								{	/* SawC/code.scm 416 */
									if (bigloo_strcmp(BgL_sz00_87,
											BGl_string5619z00zzsaw_c_codez00))
										{	/* SawC/code.scm 417 */
											return BGl_string5620z00zzsaw_c_codez00;
										}
									else
										{	/* SawC/code.scm 417 */
											if (bigloo_strcmp(BgL_sz00_87,
													BGl_string5621z00zzsaw_c_codez00))
												{	/* SawC/code.scm 418 */
													return BGl_string5622z00zzsaw_c_codez00;
												}
											else
												{	/* SawC/code.scm 418 */
													if (bigloo_strcmp(BgL_sz00_87,
															BGl_string5623z00zzsaw_c_codez00))
														{	/* SawC/code.scm 419 */
															return BGl_string5624z00zzsaw_c_codez00;
														}
													else
														{	/* SawC/code.scm 419 */
															if (bigloo_strcmp(BgL_sz00_87,
																	BGl_string5625z00zzsaw_c_codez00))
																{	/* SawC/code.scm 420 */
																	return BGl_string5626z00zzsaw_c_codez00;
																}
															else
																{	/* SawC/code.scm 420 */
																	if (bigloo_strcmp(BgL_sz00_87,
																			BGl_string5627z00zzsaw_c_codez00))
																		{	/* SawC/code.scm 421 */
																			return BGl_string5628z00zzsaw_c_codez00;
																		}
																	else
																		{	/* SawC/code.scm 421 */
																			if (bigloo_strcmp(BgL_sz00_87,
																					BGl_string5629z00zzsaw_c_codez00))
																				{	/* SawC/code.scm 422 */
																					return
																						BGl_string5630z00zzsaw_c_codez00;
																				}
																			else
																				{	/* SawC/code.scm 422 */
																					if (bigloo_strcmp(BgL_sz00_87,
																							BGl_string5631z00zzsaw_c_codez00))
																						{	/* SawC/code.scm 423 */
																							return
																								BGl_string5632z00zzsaw_c_codez00;
																						}
																					else
																						{	/* SawC/code.scm 423 */
																							if (bigloo_strcmp(BgL_sz00_87,
																									BGl_string5633z00zzsaw_c_codez00))
																								{	/* SawC/code.scm 424 */
																									return
																										BGl_string5634z00zzsaw_c_codez00;
																								}
																							else
																								{	/* SawC/code.scm 424 */
																									if (bigloo_strcmp(BgL_sz00_87,
																											BGl_string5635z00zzsaw_c_codez00))
																										{	/* SawC/code.scm 425 */
																											return
																												BGl_string5636z00zzsaw_c_codez00;
																										}
																									else
																										{	/* SawC/code.scm 425 */
																											if (bigloo_strcmp
																												(BgL_sz00_87,
																													BGl_string5637z00zzsaw_c_codez00))
																												{	/* SawC/code.scm 426 */
																													return
																														BGl_string5624z00zzsaw_c_codez00;
																												}
																											else
																												{	/* SawC/code.scm 426 */
																													if (bigloo_strcmp
																														(BgL_sz00_87,
																															BGl_string5638z00zzsaw_c_codez00))
																														{	/* SawC/code.scm 427 */
																															return
																																BGl_string5626z00zzsaw_c_codez00;
																														}
																													else
																														{	/* SawC/code.scm 427 */
																															if (bigloo_strcmp
																																(BgL_sz00_87,
																																	BGl_string5639z00zzsaw_c_codez00))
																																{	/* SawC/code.scm 428 */
																																	return
																																		BGl_string5640z00zzsaw_c_codez00;
																																}
																															else
																																{	/* SawC/code.scm 428 */
																																	if (bigloo_strcmp(BgL_sz00_87, BGl_string5641z00zzsaw_c_codez00))
																																		{	/* SawC/code.scm 429 */
																																			return
																																				BGl_string5642z00zzsaw_c_codez00;
																																		}
																																	else
																																		{	/* SawC/code.scm 429 */
																																			if (bigloo_strcmp(BgL_sz00_87, BGl_string5643z00zzsaw_c_codez00))
																																				{	/* SawC/code.scm 430 */
																																					return
																																						BGl_string5644z00zzsaw_c_codez00;
																																				}
																																			else
																																				{	/* SawC/code.scm 430 */
																																					if (bigloo_strcmp(BgL_sz00_87, BGl_string5645z00zzsaw_c_codez00))
																																						{	/* SawC/code.scm 431 */
																																							return
																																								BGl_string5646z00zzsaw_c_codez00;
																																						}
																																					else
																																						{	/* SawC/code.scm 431 */
																																							if (bigloo_strcmp(BgL_sz00_87, BGl_string5647z00zzsaw_c_codez00))
																																								{	/* SawC/code.scm 432 */
																																									return
																																										BGl_string5648z00zzsaw_c_codez00;
																																								}
																																							else
																																								{	/* SawC/code.scm 432 */
																																									if (bigloo_strcmp(BgL_sz00_87, BGl_string5649z00zzsaw_c_codez00))
																																										{	/* SawC/code.scm 433 */
																																											BGl_za2pushtraceemmitedza2z00zzsaw_c_codez00
																																												=
																																												(
																																												((long) 1) + BGl_za2pushtraceemmitedza2z00zzsaw_c_codez00);
																																											return
																																												BGl_string5650z00zzsaw_c_codez00;
																																										}
																																									else
																																										{	/* SawC/code.scm 433 */
																																											if (bigloo_strcmp(BgL_sz00_87, BGl_string5651z00zzsaw_c_codez00))
																																												{	/* SawC/code.scm 436 */
																																													if (BGl_za2countza2z00zzsaw_c_codez00)
																																														{	/* SawC/code.scm 437 */
																																															return
																																																BGl_string5652z00zzsaw_c_codez00;
																																														}
																																													else
																																														{	/* SawC/code.scm 437 */
																																															return
																																																BgL_sz00_87;
																																														}
																																												}
																																											else
																																												{	/* SawC/code.scm 436 */
																																													if (bigloo_strcmp(BgL_sz00_87, BGl_string5653z00zzsaw_c_codez00))
																																														{	/* SawC/code.scm 439 */
																																															return
																																																BGl_string5654z00zzsaw_c_codez00;
																																														}
																																													else
																																														{	/* SawC/code.scm 439 */
																																															return
																																																BgL_sz00_87;
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



/* deep-mov? */
	bool_t BGl_deepzd2movzf3z21zzsaw_c_codez00(obj_t BgL_insz00_94)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 458 */
		BGl_deepzd2movzf3z21zzsaw_c_codez00:
			{	/* SawC/code.scm 459 */
				bool_t BgL__ortest_4645z00_1775;

				BgL__ortest_4645z00_1775 =
					BGl_iszd2azf3z21zz__objectz00(BgL_insz00_94,
					BGl_rtl_regz00zzsaw_defsz00);
				if (BgL__ortest_4645z00_1775)
					{	/* SawC/code.scm 459 */
						return BgL__ortest_4645z00_1775;
					}
				else
					{	/* SawC/code.scm 460 */
						bool_t BgL_testz00_4781;

						{	/* SawC/code.scm 460 */
							BgL_rtl_funz00_bglt BgL_arg5080z00_1779;

							{
								BgL_rtl_insz00_bglt BgL_auxz00_4782;

								BgL_auxz00_4782 = (BgL_rtl_insz00_bglt) (BgL_insz00_94);
								BgL_arg5080z00_1779 =
									(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4782))->BgL_funz00);
							}
							{	/* SawC/code.scm 460 */
								obj_t BgL_obj4035z00_3410;

								BgL_obj4035z00_3410 = (obj_t) (BgL_arg5080z00_1779);
								BgL_testz00_4781 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj4035z00_3410,
									BGl_rtl_movz00zzsaw_defsz00);
							}
						}
						if (BgL_testz00_4781)
							{
								obj_t BgL_insz00_4787;

								{	/* SawC/code.scm 461 */
									obj_t BgL_pairz00_3412;

									{
										BgL_rtl_insz00_bglt BgL_auxz00_4788;

										BgL_auxz00_4788 = (BgL_rtl_insz00_bglt) (BgL_insz00_94);
										BgL_pairz00_3412 =
											(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4788))->
											BgL_argsz00);
									}
									BgL_insz00_4787 = CAR(BgL_pairz00_3412);
								}
								BgL_insz00_94 = BgL_insz00_4787;
								goto BGl_deepzd2movzf3z21zzsaw_c_codez00;
							}
						else
							{	/* SawC/code.scm 460 */
								return ((bool_t) 0);
							}
					}
			}
		}
	}



/* multiple-evaluation */
	bool_t BGl_multiplezd2evaluationzd2zzsaw_c_codez00(obj_t BgL_insz00_95,
		obj_t BgL_treez00_96)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 463 */
			{	/* SawC/code.scm 464 */
				BgL_rtl_funz00_bglt BgL_funz00_1780;

				{
					BgL_rtl_insz00_bglt BgL_auxz00_4792;

					BgL_auxz00_4792 = (BgL_rtl_insz00_bglt) (BgL_insz00_95);
					BgL_funz00_1780 =
						(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4792))->BgL_funz00);
				}
				{	/* SawC/code.scm 466 */
					bool_t BgL__ortest_4647z00_1781;

					{	/* SawC/code.scm 466 */
						obj_t BgL_obj4155z00_3414;

						BgL_obj4155z00_3414 = (obj_t) (BgL_funz00_1780);
						BgL__ortest_4647z00_1781 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj4155z00_3414,
							BGl_rtl_vallocz00zzsaw_defsz00);
					}
					if (BgL__ortest_4647z00_1781)
						{	/* SawC/code.scm 466 */
							return BgL__ortest_4647z00_1781;
						}
					else
						{	/* SawC/code.scm 467 */
							bool_t BgL__ortest_4648z00_1782;

							{	/* SawC/code.scm 467 */
								bool_t BgL_testz00_4798;

								{	/* SawC/code.scm 467 */
									obj_t BgL_obj4380z00_3415;

									BgL_obj4380z00_3415 = (obj_t) (BgL_funz00_1780);
									BgL_testz00_4798 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj4380z00_3415,
										BGl_rtl_lightfuncallz00zzsaw_defsz00);
								}
								if (BgL_testz00_4798)
									{	/* SawC/code.scm 468 */
										obj_t BgL_auxz00_4806;

										obj_t BgL_auxz00_4801;

										{
											BgL_rtl_insz00_bglt BgL_auxz00_4807;

											BgL_auxz00_4807 = (BgL_rtl_insz00_bglt) (BgL_treez00_96);
											BgL_auxz00_4806 =
												(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4807))->
												BgL_destz00);
										}
										{	/* SawC/code.scm 468 */
											obj_t BgL_pairz00_3417;

											{
												BgL_rtl_insz00_bglt BgL_auxz00_4802;

												BgL_auxz00_4802 = (BgL_rtl_insz00_bglt) (BgL_insz00_95);
												BgL_pairz00_3417 =
													(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4802))->
													BgL_argsz00);
											}
											BgL_auxz00_4801 = CAR(BgL_pairz00_3417);
										}
										BgL__ortest_4648z00_1782 =
											(BgL_auxz00_4801 == BgL_auxz00_4806);
									}
								else
									{	/* SawC/code.scm 467 */
										BgL__ortest_4648z00_1782 = ((bool_t) 0);
									}
							}
							if (BgL__ortest_4648z00_1782)
								{	/* SawC/code.scm 467 */
									return BgL__ortest_4648z00_1782;
								}
							else
								{	/* SawC/code.scm 470 */
									bool_t BgL__ortest_4649z00_1783;

									{	/* SawC/code.scm 470 */
										bool_t BgL_testz00_4812;

										{	/* SawC/code.scm 470 */
											obj_t BgL_obj4390z00_3419;

											BgL_obj4390z00_3419 = (obj_t) (BgL_funz00_1780);
											BgL_testz00_4812 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj4390z00_3419,
												BGl_rtl_funcallz00zzsaw_defsz00);
										}
										if (BgL_testz00_4812)
											{	/* SawC/code.scm 471 */
												obj_t BgL_auxz00_4820;

												obj_t BgL_auxz00_4815;

												{
													BgL_rtl_insz00_bglt BgL_auxz00_4821;

													BgL_auxz00_4821 =
														(BgL_rtl_insz00_bglt) (BgL_treez00_96);
													BgL_auxz00_4820 =
														(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4821))->
														BgL_destz00);
												}
												{	/* SawC/code.scm 471 */
													obj_t BgL_pairz00_3421;

													{
														BgL_rtl_insz00_bglt BgL_auxz00_4816;

														BgL_auxz00_4816 =
															(BgL_rtl_insz00_bglt) (BgL_insz00_95);
														BgL_pairz00_3421 =
															(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4816))->
															BgL_argsz00);
													}
													BgL_auxz00_4815 = CAR(BgL_pairz00_3421);
												}
												BgL__ortest_4649z00_1783 =
													(BgL_auxz00_4815 == BgL_auxz00_4820);
											}
										else
											{	/* SawC/code.scm 470 */
												BgL__ortest_4649z00_1783 = ((bool_t) 0);
											}
									}
									if (BgL__ortest_4649z00_1783)
										{	/* SawC/code.scm 470 */
											return BgL__ortest_4649z00_1783;
										}
									else
										{	/* SawC/code.scm 473 */
											bool_t BgL_testz00_4826;

											{	/* SawC/code.scm 473 */
												obj_t BgL_obj4359z00_3423;

												BgL_obj4359z00_3423 = (obj_t) (BgL_funz00_1780);
												BgL_testz00_4826 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj4359z00_3423,
													BGl_rtl_callz00zzsaw_defsz00);
											}
											if (BgL_testz00_4826)
												{	/* SawC/code.scm 474 */
													BgL_globalz00_bglt BgL_arg5081z00_1785;

													{
														BgL_rtl_callz00_bglt BgL_auxz00_4829;

														BgL_auxz00_4829 =
															(BgL_rtl_callz00_bglt) (BgL_funz00_1780);
														BgL_arg5081z00_1785 =
															(((BgL_rtl_callz00_bglt) CREF(BgL_auxz00_4829))->
															BgL_varz00);
													}
													if (BGl_globalzd2argszd2safezf3zf3zzast_varz00
														(BgL_arg5081z00_1785))
														{	/* SawC/code.scm 474 */
															return ((bool_t) 0);
														}
													else
														{	/* SawC/code.scm 474 */
															return ((bool_t) 1);
														}
												}
											else
												{	/* SawC/code.scm 473 */
													return ((bool_t) 0);
												}
										}
								}
						}
				}
			}
		}
	}



/* emit-pragma */
	obj_t BGl_emitzd2pragmazd2zzsaw_c_codez00(obj_t BgL_formatz00_98,
		obj_t BgL_argsz00_99)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 490 */
			if (NULLP(BgL_argsz00_99))
				{	/* SawC/code.scm 491 */
					return
						bgl_display_obj(BgL_formatz00_98,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				}
			else
				{	/* SawC/code.scm 493 */
					obj_t BgL_sportz00_1796;

					{	/* SawC/code.scm 493 */

						BgL_sportz00_1796 =
							BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
							(BgL_formatz00_98, BINT(((long) 0)));
					}
					{	/* SawC/code.scm 493 */
						obj_t BgL_argsz00_1797;

						BgL_argsz00_1797 =
							BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BgL_argsz00_99);
						{
							obj_t BgL_inputzd2portzd2_1800;

							{	/* SawC/code.scm 495 */

								BgL_inputzd2portzd2_1800 = BgL_sportz00_1796;
								{
									obj_t BgL_inputzd2portzd2_1833;

									long BgL_lastzd2matchzd2_1834;

									obj_t BgL_inputzd2portzd2_1842;

									long BgL_lastzd2matchzd2_1843;

									obj_t BgL_inputzd2portzd2_1854;

									long BgL_lastzd2matchzd2_1855;

									obj_t BgL_inputzd2portzd2_1863;

									long BgL_lastzd2matchzd2_1864;

									obj_t BgL_inputzd2portzd2_1873;

									long BgL_lastzd2matchzd2_1874;

								BgL_zc3anonymousza35185ze3z83_1963:
									RGC_START_MATCH(BgL_inputzd2portzd2_1800);
									{	/* SawC/code.scm 495 */
										long BgL_matchz00_1964;

										BgL_inputzd2portzd2_1842 = BgL_inputzd2portzd2_1800;
										BgL_lastzd2matchzd2_1843 = ((long) 3);
									BgL_zc3anonymousza35096ze3z83_1844:
										{	/* SawC/code.scm 495 */
											int BgL_currentzd2charzd2_1845;

											BgL_currentzd2charzd2_1845 =
												RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1842);
											if (((long) (BgL_currentzd2charzd2_1845) == ((long) 0)))
												{	/* SawC/code.scm 495 */
													if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1842))
														{	/* SawC/code.scm 495 */
															if (rgc_fill_buffer(BgL_inputzd2portzd2_1842))
																{

																	goto BgL_zc3anonymousza35096ze3z83_1844;
																}
															else
																{	/* SawC/code.scm 495 */
																	BgL_matchz00_1964 = BgL_lastzd2matchzd2_1843;
																}
														}
													else
														{	/* SawC/code.scm 495 */
															BgL_inputzd2portzd2_1854 =
																BgL_inputzd2portzd2_1842;
															BgL_lastzd2matchzd2_1855 =
																BgL_lastzd2matchzd2_1843;
														BgL_zc3anonymousza35102ze3z83_1856:
															{	/* SawC/code.scm 495 */
																long BgL_newzd2matchzd2_1857;

																RGC_STOP_MATCH(BgL_inputzd2portzd2_1854);
																BgL_newzd2matchzd2_1857 = ((long) 1);
																{	/* SawC/code.scm 495 */
																	int BgL_currentzd2charzd2_1858;

																	BgL_currentzd2charzd2_1858 =
																		RGC_BUFFER_GET_CHAR
																		(BgL_inputzd2portzd2_1854);
																	if (((long) (BgL_currentzd2charzd2_1858) ==
																			((long) 0)))
																		{	/* SawC/code.scm 495 */
																			if (RGC_BUFFER_EMPTY
																				(BgL_inputzd2portzd2_1854))
																				{	/* SawC/code.scm 495 */
																					if (rgc_fill_buffer
																						(BgL_inputzd2portzd2_1854))
																						{

																							goto
																								BgL_zc3anonymousza35102ze3z83_1856;
																						}
																					else
																						{	/* SawC/code.scm 495 */
																							BgL_matchz00_1964 =
																								BgL_newzd2matchzd2_1857;
																						}
																				}
																			else
																				{	/* SawC/code.scm 495 */
																					BgL_inputzd2portzd2_1833 =
																						BgL_inputzd2portzd2_1854;
																					BgL_lastzd2matchzd2_1834 =
																						BgL_newzd2matchzd2_1857;
																				BgL_zc3anonymousza35091ze3z83_1835:
																					{	/* SawC/code.scm 495 */
																						long BgL_newzd2matchzd2_1836;

																						RGC_STOP_MATCH
																							(BgL_inputzd2portzd2_1833);
																						BgL_newzd2matchzd2_1836 =
																							((long) 1);
																						{	/* SawC/code.scm 495 */
																							int BgL_currentzd2charzd2_1837;

																							BgL_currentzd2charzd2_1837 =
																								RGC_BUFFER_GET_CHAR
																								(BgL_inputzd2portzd2_1833);
																							if (((long)
																									(BgL_currentzd2charzd2_1837)
																									== ((long) 0)))
																								{	/* SawC/code.scm 495 */
																									if (RGC_BUFFER_EMPTY
																										(BgL_inputzd2portzd2_1833))
																										{	/* SawC/code.scm 495 */
																											if (rgc_fill_buffer
																												(BgL_inputzd2portzd2_1833))
																												{

																													goto
																														BgL_zc3anonymousza35091ze3z83_1835;
																												}
																											else
																												{	/* SawC/code.scm 495 */
																													BgL_matchz00_1964 =
																														BgL_newzd2matchzd2_1836;
																												}
																										}
																									else
																										{
																											long
																												BgL_lastzd2matchzd2_4867;
																											BgL_lastzd2matchzd2_4867 =
																												BgL_newzd2matchzd2_1836;
																											BgL_lastzd2matchzd2_1834 =
																												BgL_lastzd2matchzd2_4867;
																											goto
																												BgL_zc3anonymousza35091ze3z83_1835;
																										}
																								}
																							else
																								{	/* SawC/code.scm 495 */
																									if (
																										((long)
																											(BgL_currentzd2charzd2_1837)
																											== ((long) 36)))
																										{	/* SawC/code.scm 495 */
																											BgL_matchz00_1964 =
																												BgL_newzd2matchzd2_1836;
																										}
																									else
																										{
																											long
																												BgL_lastzd2matchzd2_4871;
																											BgL_lastzd2matchzd2_4871 =
																												BgL_newzd2matchzd2_1836;
																											BgL_lastzd2matchzd2_1834 =
																												BgL_lastzd2matchzd2_4871;
																											goto
																												BgL_zc3anonymousza35091ze3z83_1835;
																										}
																								}
																						}
																					}
																				}
																		}
																	else
																		{	/* SawC/code.scm 495 */
																			if (
																				((long) (BgL_currentzd2charzd2_1858) ==
																					((long) 36)))
																				{	/* SawC/code.scm 495 */
																					BgL_matchz00_1964 =
																						BgL_newzd2matchzd2_1857;
																				}
																			else
																				{
																					long BgL_lastzd2matchzd2_4876;

																					obj_t BgL_inputzd2portzd2_4875;

																					BgL_inputzd2portzd2_4875 =
																						BgL_inputzd2portzd2_1854;
																					BgL_lastzd2matchzd2_4876 =
																						BgL_newzd2matchzd2_1857;
																					BgL_lastzd2matchzd2_1834 =
																						BgL_lastzd2matchzd2_4876;
																					BgL_inputzd2portzd2_1833 =
																						BgL_inputzd2portzd2_4875;
																					goto
																						BgL_zc3anonymousza35091ze3z83_1835;
																				}
																		}
																}
															}
														}
												}
											else
												{	/* SawC/code.scm 495 */
													if (
														((long) (BgL_currentzd2charzd2_1845) ==
															((long) 36)))
														{	/* SawC/code.scm 495 */
															BgL_inputzd2portzd2_1863 =
																BgL_inputzd2portzd2_1842;
															BgL_lastzd2matchzd2_1864 =
																BgL_lastzd2matchzd2_1843;
														BgL_zc3anonymousza35107ze3z83_1865:
															{	/* SawC/code.scm 495 */
																long BgL_newzd2matchzd2_1866;

																RGC_STOP_MATCH(BgL_inputzd2portzd2_1863);
																BgL_newzd2matchzd2_1866 = ((long) 3);
																{	/* SawC/code.scm 495 */
																	int BgL_currentzd2charzd2_1867;

																	BgL_currentzd2charzd2_1867 =
																		RGC_BUFFER_GET_CHAR
																		(BgL_inputzd2portzd2_1863);
																	if (((long) (BgL_currentzd2charzd2_1867) ==
																			((long) 0)))
																		{	/* SawC/code.scm 495 */
																			bool_t BgL_testz00_4885;

																			{	/* SawC/code.scm 495 */
																				bool_t BgL_res5508z00_3462;

																				{	/* SawC/code.scm 495 */
																					obj_t BgL_inputzd2portzd2_3458;

																					BgL_inputzd2portzd2_3458 =
																						BgL_inputzd2portzd2_1863;
																					if (RGC_BUFFER_EMPTY
																						(BgL_inputzd2portzd2_3458))
																						{	/* SawC/code.scm 495 */
																							BgL_res5508z00_3462 =
																								rgc_fill_buffer
																								(BgL_inputzd2portzd2_3458);
																						}
																					else
																						{	/* SawC/code.scm 495 */
																							BgL_res5508z00_3462 =
																								((bool_t) 0);
																						}
																				}
																				BgL_testz00_4885 = BgL_res5508z00_3462;
																			}
																			if (BgL_testz00_4885)
																				{

																					goto
																						BgL_zc3anonymousza35107ze3z83_1865;
																				}
																			else
																				{	/* SawC/code.scm 495 */
																					BgL_matchz00_1964 =
																						BgL_newzd2matchzd2_1866;
																				}
																		}
																	else
																		{	/* SawC/code.scm 495 */
																			bool_t BgL_testz00_4889;

																			if (
																				((long) (BgL_currentzd2charzd2_1867) >=
																					((long) 48)))
																				{	/* SawC/code.scm 495 */
																					BgL_testz00_4889 =
																						(
																						(long) (BgL_currentzd2charzd2_1867)
																						< ((long) 58));
																				}
																			else
																				{	/* SawC/code.scm 495 */
																					BgL_testz00_4889 = ((bool_t) 0);
																				}
																			if (BgL_testz00_4889)
																				{	/* SawC/code.scm 495 */
																					BgL_inputzd2portzd2_1873 =
																						BgL_inputzd2portzd2_1863;
																					BgL_lastzd2matchzd2_1874 =
																						BgL_newzd2matchzd2_1866;
																				BgL_zc3anonymousza35113ze3z83_1875:
																					{	/* SawC/code.scm 495 */
																						long BgL_newzd2matchzd2_1876;

																						RGC_STOP_MATCH
																							(BgL_inputzd2portzd2_1873);
																						BgL_newzd2matchzd2_1876 =
																							((long) 0);
																						{	/* SawC/code.scm 495 */
																							int BgL_currentzd2charzd2_1877;

																							BgL_currentzd2charzd2_1877 =
																								RGC_BUFFER_GET_CHAR
																								(BgL_inputzd2portzd2_1873);
																							if (((long)
																									(BgL_currentzd2charzd2_1877)
																									== ((long) 0)))
																								{	/* SawC/code.scm 495 */
																									bool_t BgL_testz00_4900;

																									{	/* SawC/code.scm 495 */
																										bool_t BgL_res5509z00_3481;

																										{	/* SawC/code.scm 495 */
																											obj_t
																												BgL_inputzd2portzd2_3477;
																											BgL_inputzd2portzd2_3477 =
																												BgL_inputzd2portzd2_1873;
																											if (RGC_BUFFER_EMPTY
																												(BgL_inputzd2portzd2_3477))
																												{	/* SawC/code.scm 495 */
																													BgL_res5509z00_3481 =
																														rgc_fill_buffer
																														(BgL_inputzd2portzd2_3477);
																												}
																											else
																												{	/* SawC/code.scm 495 */
																													BgL_res5509z00_3481 =
																														((bool_t) 0);
																												}
																										}
																										BgL_testz00_4900 =
																											BgL_res5509z00_3481;
																									}
																									if (BgL_testz00_4900)
																										{

																											goto
																												BgL_zc3anonymousza35113ze3z83_1875;
																										}
																									else
																										{	/* SawC/code.scm 495 */
																											BgL_matchz00_1964 =
																												BgL_newzd2matchzd2_1876;
																										}
																								}
																							else
																								{	/* SawC/code.scm 495 */
																									bool_t BgL_testz00_4904;

																									if (
																										((long)
																											(BgL_currentzd2charzd2_1877)
																											>= ((long) 48)))
																										{	/* SawC/code.scm 495 */
																											BgL_testz00_4904 =
																												(
																												(long)
																												(BgL_currentzd2charzd2_1877)
																												< ((long) 58));
																										}
																									else
																										{	/* SawC/code.scm 495 */
																											BgL_testz00_4904 =
																												((bool_t) 0);
																										}
																									if (BgL_testz00_4904)
																										{
																											long
																												BgL_lastzd2matchzd2_4910;
																											BgL_lastzd2matchzd2_4910 =
																												BgL_newzd2matchzd2_1876;
																											BgL_lastzd2matchzd2_1874 =
																												BgL_lastzd2matchzd2_4910;
																											goto
																												BgL_zc3anonymousza35113ze3z83_1875;
																										}
																									else
																										{	/* SawC/code.scm 495 */
																											BgL_matchz00_1964 =
																												BgL_newzd2matchzd2_1876;
																										}
																								}
																						}
																					}
																				}
																			else
																				{	/* SawC/code.scm 495 */
																					if (
																						((long) (BgL_currentzd2charzd2_1867)
																							== ((long) 36)))
																						{	/* SawC/code.scm 495 */
																							long BgL_newzd2matchzd2_3471;

																							RGC_STOP_MATCH
																								(BgL_inputzd2portzd2_1863);
																							BgL_newzd2matchzd2_3471 =
																								((long) 2);
																							BgL_matchz00_1964 =
																								BgL_newzd2matchzd2_3471;
																						}
																					else
																						{	/* SawC/code.scm 495 */
																							BgL_matchz00_1964 =
																								BgL_newzd2matchzd2_1866;
																						}
																				}
																		}
																}
															}
														}
													else
														{
															long BgL_lastzd2matchzd2_4916;

															obj_t BgL_inputzd2portzd2_4915;

															BgL_inputzd2portzd2_4915 =
																BgL_inputzd2portzd2_1842;
															BgL_lastzd2matchzd2_4916 =
																BgL_lastzd2matchzd2_1843;
															BgL_lastzd2matchzd2_1855 =
																BgL_lastzd2matchzd2_4916;
															BgL_inputzd2portzd2_1854 =
																BgL_inputzd2portzd2_4915;
															goto BgL_zc3anonymousza35102ze3z83_1856;
														}
												}
										}
										RGC_SET_FILEPOS(BgL_inputzd2portzd2_1800);
										{

											switch (BgL_matchz00_1964)
												{
												case ((long) 3):

													{	/* SawC/code.scm 495 */
														bool_t BgL_testz00_4918;

														{	/* SawC/code.scm 495 */
															long BgL_arg5178z00_1953;

															BgL_arg5178z00_1953 =
																RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_1800);
															BgL_testz00_4918 =
																(BgL_arg5178z00_1953 == ((long) 0));
														}
														if (BgL_testz00_4918)
															{	/* SawC/code.scm 495 */
																BCNST(256);
															}
														else
															{	/* SawC/code.scm 495 */
																obj_t BgL_inputzd2portzd2_3495;

																BgL_inputzd2portzd2_3495 =
																	BgL_inputzd2portzd2_1800;
																BCHAR(RGC_BUFFER_CHARACTER
																	(BgL_inputzd2portzd2_3495));
															}
													}
													break;
												case ((long) 2):

													bgl_display_string(BGl_string5657z00zzsaw_c_codez00,
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													goto BgL_zc3anonymousza35185ze3z83_1963;
													break;
												case ((long) 1):

													{	/* SawC/code.scm 504 */
														obj_t BgL_arg5187z00_1968;

														BgL_arg5187z00_1968 =
															BGl_thezd2stringzd2zzsaw_c_codez00
															(BgL_inputzd2portzd2_1800);
														bgl_display_obj(BgL_arg5187z00_1968,
															BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													}
													goto BgL_zc3anonymousza35185ze3z83_1963;
													break;
												case ((long) 0):

													{	/* SawC/code.scm 497 */
														obj_t BgL_strz00_1969;

														BgL_strz00_1969 =
															BGl_thezd2stringzd2zzsaw_c_codez00
															(BgL_inputzd2portzd2_1800);
														{	/* SawC/code.scm 497 */
															int BgL_lenz00_1970;

															{	/* SawC/code.scm 498 */
																int BgL_res5511z00_3501;

																{	/* SawC/code.scm 498 */
																	obj_t BgL_inputzd2portzd2_3500;

																	BgL_inputzd2portzd2_3500 =
																		BgL_inputzd2portzd2_1800;
																	BgL_res5511z00_3501 =
																		(int) (RGC_BUFFER_LENGTH
																		(BgL_inputzd2portzd2_3500));
																}
																BgL_lenz00_1970 = BgL_res5511z00_3501;
															}
															{	/* SawC/code.scm 498 */
																obj_t BgL_indexz00_1971;

																{	/* SawC/code.scm 500 */
																	obj_t BgL_arg5190z00_1974;

																	BgL_arg5190z00_1974 =
																		c_substring(BgL_strz00_1969, ((long) 1),
																		(long) (BgL_lenz00_1970));
																	{	/* SawC/code.scm 499 */

																		BgL_indexz00_1971 =
																			BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
																			(BgL_arg5190z00_1974, BINT(((long) 10)));
																}}
																{	/* SawC/code.scm 499 */

																	{	/* SawC/code.scm 501 */
																		obj_t BgL_arg5188z00_1972;

																		{	/* SawC/code.scm 501 */
																			long BgL_arg5189z00_1973;

																			BgL_arg5189z00_1973 =
																				(
																				(long) CINT(BgL_indexz00_1971) -
																				((long) 1));
																			BgL_arg5188z00_1972 =
																				VECTOR_REF(BgL_argsz00_1797,
																				(int) (BgL_arg5189z00_1973));
																		}
																		BGl_genzd2regzd2zzsaw_c_codez00
																			(BgL_arg5188z00_1972);
																	}
																	goto BgL_zc3anonymousza35185ze3z83_1963;
																}
															}
														}
													}
													break;
												default:
													BGl_errorz00zz__errorz00
														(BGl_string5655z00zzsaw_c_codez00,
														BGl_string5656z00zzsaw_c_codez00,
														BINT(BgL_matchz00_1964));
												}
										}
									}
								}
								return BTRUE;
							}
						}
					}
				}
		}
	}



/* the-string */
	obj_t BGl_thezd2stringzd2zzsaw_c_codez00(obj_t BgL_inputzd2portzd2_4035)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 495 */
			{	/* SawC/code.scm 495 */
				int BgL_arg5125z00_1892;

				{	/* SawC/code.scm 495 */
					int BgL_res5510z00_3487;

					{	/* SawC/code.scm 495 */
						obj_t BgL_inputzd2portzd2_3486;

						BgL_inputzd2portzd2_3486 = BgL_inputzd2portzd2_4035;
						BgL_res5510z00_3487 =
							(int) (RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_3486));
					}
					BgL_arg5125z00_1892 = BgL_res5510z00_3487;
				}
				return
					rgc_buffer_substring(BgL_inputzd2portzd2_4035, ((long) 0),
					(long) (BgL_arg5125z00_1892));
		}}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_c_codez00()
	{
		AN_OBJECT;
		{	/* SawC/code.scm 1 */
			{	/* SawC/code.scm 25 */
				obj_t BgL_arg5191z00_2011;

				obj_t BgL_arg5192z00_2012;

				obj_t BgL_arg5195z00_2015;

				BgL_arg5191z00_2011 = CNST_TABLE_REF(((long) 5));
				BgL_arg5192z00_2012 = BGl_rtl_regz00zzsaw_defsz00;
				{	/* SawC/code.scm 25 */
					obj_t BgL_v4704z00_2016;

					BgL_v4704z00_2016 = create_vector((int) (((long) 0)));
					BgL_arg5195z00_2015 = BgL_v4704z00_2016;
				}
				BGl_iregz00zzsaw_c_codez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg5191z00_2011,
					BgL_arg5192z00_2012, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2iregzd2envz52zzsaw_c_codez00,
					BGl_iregzd2nilzd2envz00zzsaw_c_codez00,
					BGl_iregzf3zd2envz21zzsaw_c_codez00, ((long) 691449), BFALSE, BFALSE,
					BgL_arg5195z00_2015);
			}
			return (BGl_z52thezd2iregzd2nilz52zzsaw_c_codez00 = BUNSPEC, BUNSPEC);
		}
	}



/* _ireg? */
	obj_t BGl__iregzf3zf3zzsaw_c_codez00(obj_t BgL_envz00_3902,
		obj_t BgL_obj4603z00_3903)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 25 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4603z00_3903,
					BGl_iregz00zzsaw_c_codez00));
		}
	}



/* _%allocate-ireg */
	obj_t BGl__z52allocatezd2iregz80zzsaw_c_codez00(obj_t BgL_envz00_3900)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 25 */
			{	/* SawC/code.scm 25 */
				BgL_rtl_regz00_bglt BgL_auxz00_4951;

				{	/* SawC/code.scm 25 */
					BgL_rtl_regz00_bglt BgL_res5725z00_4055;

					{	/* SawC/code.scm 25 */
						BgL_rtl_regz00_bglt BgL_new4596z00_4053;

						BgL_new4596z00_4053 =
							((BgL_rtl_regz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_rtl_regz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4596z00_4053),
							BGl_classzd2numzd2zz__objectz00(BGl_iregz00zzsaw_c_codez00));
						{	/* SawC/code.scm 25 */
							BgL_objectz00_bglt BgL_auxz00_4956;

							BgL_auxz00_4956 = (BgL_objectz00_bglt) (BgL_new4596z00_4053);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4956, BFALSE);
						}
						BgL_res5725z00_4055 = BgL_new4596z00_4053;
					}
					BgL_auxz00_4951 = BgL_res5725z00_4055;
				}
				return (obj_t) (BgL_auxz00_4951);
			}
		}
	}



/* ireg-nil */
	BgL_iregz00_bglt BGl_iregzd2nilzd2zzsaw_c_codez00()
	{
		AN_OBJECT;
		{	/* SawC/code.scm 25 */
			if ((BGl_z52thezd2iregzd2nilz52zzsaw_c_codez00 == BUNSPEC))
				{	/* SawC/code.scm 25 */
					{	/* SawC/code.scm 25 */
						BgL_rtl_regz00_bglt BgL_res5513z00_3523;

						{	/* SawC/code.scm 25 */
							BgL_rtl_regz00_bglt BgL_new3827z00_3519;

							BgL_new3827z00_3519 =
								((BgL_rtl_regz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_rtl_regz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3827z00_3519),
								BGl_classzd2numzd2zz__objectz00(BGl_rtl_regz00zzsaw_defsz00));
							{	/* SawC/code.scm 25 */
								BgL_objectz00_bglt BgL_auxz00_4966;

								BgL_auxz00_4966 = (BgL_objectz00_bglt) (BgL_new3827z00_3519);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4966, BFALSE);
							}
							BgL_res5513z00_3523 = BgL_new3827z00_3519;
						}
						BGl_z52thezd2iregzd2nilz52zzsaw_c_codez00 =
							(obj_t) (BgL_res5513z00_3523);
					}
					{	/* SawC/code.scm 25 */
						BgL_typez00_bglt BgL_arg5200z00_2026;

						BgL_arg5200z00_2026 = BGl_typezd2nilzd2zztype_typez00();
						{	/* SawC/code.scm 25 */
							BgL_rtl_regz00_bglt BgL_res5514z00_3537;

							{	/* SawC/code.scm 25 */
								BgL_rtl_regz00_bglt BgL_new3819z00_3524;

								BgL_new3819z00_3524 =
									(BgL_rtl_regz00_bglt)
									(BGl_z52thezd2iregzd2nilz52zzsaw_c_codez00);
								{	/* SawC/code.scm 25 */
									BgL_typez00_bglt BgL_type3813z00_3531;

									obj_t BgL_var3814z00_3532;

									obj_t BgL_onexprzf33815zf3_3533;

									obj_t BgL_name3816z00_3534;

									obj_t BgL_key3817z00_3535;

									obj_t BgL_hardware3818z00_3536;

									BgL_type3813z00_3531 = BgL_arg5200z00_2026;
									BgL_var3814z00_3532 = BUNSPEC;
									BgL_onexprzf33815zf3_3533 = BUNSPEC;
									BgL_name3816z00_3534 = BUNSPEC;
									BgL_key3817z00_3535 = BUNSPEC;
									BgL_hardware3818z00_3536 = BUNSPEC;
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3819z00_3524))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3813z00_3531), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3819z00_3524))->
											BgL_varz00) = ((obj_t) BgL_var3814z00_3532), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3819z00_3524))->
											BgL_onexprzf3zf3) =
										((obj_t) BgL_onexprzf33815zf3_3533), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3819z00_3524))->
											BgL_namez00) = ((obj_t) BgL_name3816z00_3534), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3819z00_3524))->
											BgL_keyz00) = ((obj_t) BgL_key3817z00_3535), BUNSPEC);
									((((BgL_rtl_regz00_bglt) CREF(BgL_new3819z00_3524))->
											BgL_hardwarez00) =
										((obj_t) BgL_hardware3818z00_3536), BUNSPEC);
									BgL_res5514z00_3537 = BgL_new3819z00_3524;
							}} BgL_res5514z00_3537;
					}}
					{	/* SawC/code.scm 25 */
						long BgL_arg5201z00_2027;

						BgL_arg5201z00_2027 =
							BGl_classzd2numzd2zz__objectz00(BGl_iregz00zzsaw_c_codez00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BGl_z52thezd2iregzd2nilz52zzsaw_c_codez00),
							BgL_arg5201z00_2027);
					}
					{	/* SawC/code.scm 25 */
						BgL_iregz00_bglt BgL_arg5202z00_2028;

						{	/* SawC/code.scm 25 */
							BgL_iregz00_bglt BgL_res5516z00_3546;

							{	/* SawC/code.scm 25 */
								BgL_iregz00_bglt BgL_new4581z00_3541;

								BgL_new4581z00_3541 =
									((BgL_iregz00_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_iregz00_bgl))));
								{	/* SawC/code.scm 25 */
									BgL_iregz00_bglt BgL_res5515z00_3545;

									{	/* SawC/code.scm 25 */
										BgL_iregz00_bglt BgL_new4593z00_3542;

										BgL_new4593z00_3542 = BgL_new4581z00_3541;
										{	/* SawC/code.scm 25 */
											obj_t BgL_index4592z00_3544;

											BgL_index4592z00_3544 = BUNSPEC;
											((((BgL_iregz00_bglt) CREF(BgL_new4593z00_3542))->
													BgL_indexz00) =
												((obj_t) BgL_index4592z00_3544), BUNSPEC);
											BgL_res5515z00_3545 = BgL_new4593z00_3542;
									}} BgL_res5515z00_3545;
								}
								BgL_res5516z00_3546 = BgL_new4581z00_3541;
							}
							BgL_arg5202z00_2028 = BgL_res5516z00_3546;
						}
						{	/* SawC/code.scm 25 */
							obj_t BgL_auxz00_4985;

							BgL_objectz00_bglt BgL_auxz00_4983;

							BgL_auxz00_4985 = (obj_t) (BgL_arg5202z00_2028);
							BgL_auxz00_4983 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2iregzd2nilz52zzsaw_c_codez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_4983, BgL_auxz00_4985);
				}}}
			else
				{	/* SawC/code.scm 25 */
					BFALSE;
				}
			return (BgL_iregz00_bglt) (BGl_z52thezd2iregzd2nilz52zzsaw_c_codez00);
		}
	}



/* _ireg-nil */
	obj_t BGl__iregzd2nilzd2zzsaw_c_codez00(obj_t BgL_envz00_3901)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 25 */
			return (obj_t) (BGl_iregzd2nilzd2zzsaw_c_codez00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_c_codez00()
	{
		AN_OBJECT;
		{	/* SawC/code.scm 1 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_genzd2exprzd2envz00zzsaw_c_codez00,
				BGl_genzd2exprzd2default4705zd2envzd2zzsaw_c_codez00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string5658z00zzsaw_c_codez00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
				BGl_genzd2funzd2namezd2default4719zd2envz00zzsaw_c_codez00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string5659z00zzsaw_c_codez00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
				BGl_genzd2prefixzd2default4740zd2envzd2zzsaw_c_codez00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string5660z00zzsaw_c_codez00);
		}
	}



/* gen-expr */
	obj_t BGl_genzd2exprzd2zzsaw_c_codez00(BgL_rtl_funz00_bglt BgL_funz00_31,
		obj_t BgL_argsz00_32)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 211 */
			{	/* SawC/code.scm 211 */
				obj_t BgL_method4706z00_3557;

				{	/* SawC/code.scm 211 */
					BgL_objectz00_bglt BgL_objz00_3558;

					BgL_objz00_3558 = (BgL_objectz00_bglt) (BgL_funz00_31);
					{	/* SawC/code.scm 211 */
						long BgL_objzd2classzd2numz00_3559;

						BgL_objzd2classzd2numz00_3559 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3558);
						{	/* SawC/code.scm 211 */
							obj_t BgL_arg2643z00_3560;

							BgL_arg2643z00_3560 =
								PROCEDURE_REF(BGl_genzd2exprzd2envz00zzsaw_c_codez00,
								(int) (((long) 1)));
							{	/* SawC/code.scm 211 */
								obj_t BgL_arrayz00_3562;

								int BgL_offsetz00_3563;

								BgL_arrayz00_3562 = BgL_arg2643z00_3560;
								BgL_offsetz00_3563 = (int) (BgL_objzd2classzd2numz00_3559);
								{	/* SawC/code.scm 211 */
									long BgL_offsetz00_3564;

									BgL_offsetz00_3564 =
										((long) (BgL_offsetz00_3563) - OBJECT_TYPE);
									{	/* SawC/code.scm 211 */
										long BgL_modz00_3565;

										{	/* SawC/code.scm 211 */
											int BgL_arg2645z00_3566;

											BgL_arg2645z00_3566 = (int) (((long) 16));
											{	/* SawC/code.scm 211 */
												long BgL_auxz00_5002;

												BgL_auxz00_5002 = (long) (BgL_arg2645z00_3566);
												BgL_modz00_3565 =
													(BgL_offsetz00_3564 / BgL_auxz00_5002);
										}}
										{	/* SawC/code.scm 211 */
											long BgL_restz00_3567;

											{	/* SawC/code.scm 211 */
												int BgL_arg2644z00_3568;

												BgL_arg2644z00_3568 = (int) (((long) 16));
												{	/* SawC/code.scm 211 */
													long BgL_auxz00_5006;

													BgL_auxz00_5006 = (long) (BgL_arg2644z00_3568);
													BgL_restz00_3567 =
														(BgL_offsetz00_3564 % BgL_auxz00_5006);
											}}
											{	/* SawC/code.scm 211 */

												BgL_method4706z00_3557 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3562,
														(int) (BgL_modz00_3565)), (int) (BgL_restz00_3567));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method4706z00_3557) (BgL_method4706z00_3557,
					(obj_t) (BgL_funz00_31), BgL_argsz00_32, BEOA);
			}
		}
	}



/* _gen-expr */
	obj_t BGl__genzd2exprzd2zzsaw_c_codez00(obj_t BgL_envz00_3897,
		obj_t BgL_funz00_3898, obj_t BgL_argsz00_3899)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 211 */
			return
				BGl_genzd2exprzd2zzsaw_c_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_3898), BgL_argsz00_3899);
		}
	}



/* gen-expr-default4705 */
	obj_t BGl_genzd2exprzd2default4705z00zzsaw_c_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_33, obj_t BgL_argsz00_34)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 1 */
			{	/* SawC/code.scm 213 */
				obj_t BgL_method4722z00_3583;

				{	/* SawC/code.scm 213 */
					BgL_objectz00_bglt BgL_objz00_3584;

					BgL_objz00_3584 = (BgL_objectz00_bglt) (BgL_funz00_33);
					{	/* SawC/code.scm 213 */
						long BgL_objzd2classzd2numz00_3585;

						BgL_objzd2classzd2numz00_3585 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3584);
						{	/* SawC/code.scm 213 */
							obj_t BgL_arg2643z00_3586;

							BgL_arg2643z00_3586 =
								PROCEDURE_REF(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
								(int) (((long) 1)));
							{	/* SawC/code.scm 213 */
								obj_t BgL_arrayz00_3588;

								int BgL_offsetz00_3589;

								BgL_arrayz00_3588 = BgL_arg2643z00_3586;
								BgL_offsetz00_3589 = (int) (BgL_objzd2classzd2numz00_3585);
								{	/* SawC/code.scm 213 */
									long BgL_offsetz00_3590;

									BgL_offsetz00_3590 =
										((long) (BgL_offsetz00_3589) - OBJECT_TYPE);
									{	/* SawC/code.scm 213 */
										long BgL_modz00_3591;

										{	/* SawC/code.scm 213 */
											int BgL_arg2645z00_3592;

											BgL_arg2645z00_3592 = (int) (((long) 16));
											{	/* SawC/code.scm 213 */
												long BgL_auxz00_5026;

												BgL_auxz00_5026 = (long) (BgL_arg2645z00_3592);
												BgL_modz00_3591 =
													(BgL_offsetz00_3590 / BgL_auxz00_5026);
										}}
										{	/* SawC/code.scm 213 */
											long BgL_restz00_3593;

											{	/* SawC/code.scm 213 */
												int BgL_arg2644z00_3594;

												BgL_arg2644z00_3594 = (int) (((long) 16));
												{	/* SawC/code.scm 213 */
													long BgL_auxz00_5030;

													BgL_auxz00_5030 = (long) (BgL_arg2644z00_3594);
													BgL_restz00_3593 =
														(BgL_offsetz00_3590 % BgL_auxz00_5030);
											}}
											{	/* SawC/code.scm 213 */

												BgL_method4722z00_3583 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3588,
														(int) (BgL_modz00_3591)), (int) (BgL_restz00_3593));
				}}}}}}}}
				PROCEDURE_ENTRY(BgL_method4722z00_3583) (BgL_method4722z00_3583,
					(obj_t) (BgL_funz00_33), BEOA);
			}
			{	/* SawC/code.scm 214 */
				obj_t BgL_arg5298z00_2657;

				{	/* SawC/code.scm 214 */
					obj_t BgL_res5521z00_3609;

					{	/* SawC/code.scm 214 */
						obj_t BgL_auxz00_5040;

						BgL_auxz00_5040 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res5521z00_3609 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5040);
					}
					BgL_arg5298z00_2657 = BgL_res5521z00_3609;
				}
				bgl_display_string(BGl_string5587z00zzsaw_c_codez00,
					BgL_arg5298z00_2657);
			}
			{	/* SawC/code.scm 215 */
				obj_t BgL_method4741z00_3613;

				{	/* SawC/code.scm 215 */
					BgL_objectz00_bglt BgL_objz00_3614;

					BgL_objz00_3614 = (BgL_objectz00_bglt) (BgL_funz00_33);
					{	/* SawC/code.scm 215 */
						long BgL_objzd2classzd2numz00_3615;

						BgL_objzd2classzd2numz00_3615 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3614);
						{	/* SawC/code.scm 215 */
							obj_t BgL_arg2643z00_3616;

							BgL_arg2643z00_3616 =
								PROCEDURE_REF(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
								(int) (((long) 1)));
							{	/* SawC/code.scm 215 */
								obj_t BgL_arrayz00_3618;

								int BgL_offsetz00_3619;

								BgL_arrayz00_3618 = BgL_arg2643z00_3616;
								BgL_offsetz00_3619 = (int) (BgL_objzd2classzd2numz00_3615);
								{	/* SawC/code.scm 215 */
									long BgL_offsetz00_3620;

									BgL_offsetz00_3620 =
										((long) (BgL_offsetz00_3619) - OBJECT_TYPE);
									{	/* SawC/code.scm 215 */
										long BgL_modz00_3621;

										{	/* SawC/code.scm 215 */
											int BgL_arg2645z00_3622;

											BgL_arg2645z00_3622 = (int) (((long) 16));
											{	/* SawC/code.scm 215 */
												long BgL_auxz00_5052;

												BgL_auxz00_5052 = (long) (BgL_arg2645z00_3622);
												BgL_modz00_3621 =
													(BgL_offsetz00_3620 / BgL_auxz00_5052);
										}}
										{	/* SawC/code.scm 215 */
											long BgL_restz00_3623;

											{	/* SawC/code.scm 215 */
												int BgL_arg2644z00_3624;

												BgL_arg2644z00_3624 = (int) (((long) 16));
												{	/* SawC/code.scm 215 */
													long BgL_auxz00_5056;

													BgL_auxz00_5056 = (long) (BgL_arg2644z00_3624);
													BgL_restz00_3623 =
														(BgL_offsetz00_3620 % BgL_auxz00_5056);
											}}
											{	/* SawC/code.scm 215 */

												BgL_method4741z00_3613 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3618,
														(int) (BgL_modz00_3621)), (int) (BgL_restz00_3623));
				}}}}}}}}
				PROCEDURE_ENTRY(BgL_method4741z00_3613) (BgL_method4741z00_3613,
					(obj_t) (BgL_funz00_33), BEOA);
			}
			BGl_genzd2argszd2zzsaw_c_codez00(BgL_argsz00_34);
			{	/* SawC/code.scm 217 */
				obj_t BgL_arg5300z00_2659;

				{	/* SawC/code.scm 217 */
					obj_t BgL_res5524z00_3639;

					{	/* SawC/code.scm 217 */
						obj_t BgL_auxz00_5067;

						BgL_auxz00_5067 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res5524z00_3639 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5067);
					}
					BgL_arg5300z00_2659 = BgL_res5524z00_3639;
				}
				return
					bgl_display_string(BGl_string5589z00zzsaw_c_codez00,
					BgL_arg5300z00_2659);
			}
		}
	}



/* _gen-expr-default4705 */
	obj_t BGl__genzd2exprzd2default4705z00zzsaw_c_codez00(obj_t BgL_envz00_3904,
		obj_t BgL_funz00_3905, obj_t BgL_argsz00_3906)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 1 */
			return
				BGl_genzd2exprzd2default4705z00zzsaw_c_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_3905), BgL_argsz00_3906);
		}
	}



/* gen-fun-name */
	obj_t BGl_genzd2funzd2namez00zzsaw_c_codez00(BgL_rtl_funz00_bglt
		BgL_funz00_53)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 304 */
			{	/* SawC/code.scm 304 */
				obj_t BgL_method4722z00_3642;

				{	/* SawC/code.scm 304 */
					BgL_objectz00_bglt BgL_objz00_3643;

					BgL_objz00_3643 = (BgL_objectz00_bglt) (BgL_funz00_53);
					{	/* SawC/code.scm 304 */
						long BgL_objzd2classzd2numz00_3644;

						BgL_objzd2classzd2numz00_3644 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3643);
						{	/* SawC/code.scm 304 */
							obj_t BgL_arg2643z00_3645;

							BgL_arg2643z00_3645 =
								PROCEDURE_REF(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
								(int) (((long) 1)));
							{	/* SawC/code.scm 304 */
								obj_t BgL_arrayz00_3647;

								int BgL_offsetz00_3648;

								BgL_arrayz00_3647 = BgL_arg2643z00_3645;
								BgL_offsetz00_3648 = (int) (BgL_objzd2classzd2numz00_3644);
								{	/* SawC/code.scm 304 */
									long BgL_offsetz00_3649;

									BgL_offsetz00_3649 =
										((long) (BgL_offsetz00_3648) - OBJECT_TYPE);
									{	/* SawC/code.scm 304 */
										long BgL_modz00_3650;

										{	/* SawC/code.scm 304 */
											int BgL_arg2645z00_3651;

											BgL_arg2645z00_3651 = (int) (((long) 16));
											{	/* SawC/code.scm 304 */
												long BgL_auxz00_5081;

												BgL_auxz00_5081 = (long) (BgL_arg2645z00_3651);
												BgL_modz00_3650 =
													(BgL_offsetz00_3649 / BgL_auxz00_5081);
										}}
										{	/* SawC/code.scm 304 */
											long BgL_restz00_3652;

											{	/* SawC/code.scm 304 */
												int BgL_arg2644z00_3653;

												BgL_arg2644z00_3653 = (int) (((long) 16));
												{	/* SawC/code.scm 304 */
													long BgL_auxz00_5085;

													BgL_auxz00_5085 = (long) (BgL_arg2644z00_3653);
													BgL_restz00_3652 =
														(BgL_offsetz00_3649 % BgL_auxz00_5085);
											}}
											{	/* SawC/code.scm 304 */

												BgL_method4722z00_3642 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3647,
														(int) (BgL_modz00_3650)), (int) (BgL_restz00_3652));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method4722z00_3642) (BgL_method4722z00_3642,
					(obj_t) (BgL_funz00_53), BEOA);
			}
		}
	}



/* _gen-fun-name */
	obj_t BGl__genzd2funzd2namez00zzsaw_c_codez00(obj_t BgL_envz00_3907,
		obj_t BgL_funz00_3908)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 304 */
			return
				BGl_genzd2funzd2namez00zzsaw_c_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_3908));
		}
	}



/* _gen-fun-name-default4719 */
	obj_t BGl__genzd2funzd2namezd2default4719zd2zzsaw_c_codez00(obj_t
		BgL_envz00_3909, obj_t BgL_funz00_3910)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 1 */
			return
				BGl_genzd2upcasezd2zzsaw_c_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_3910));
		}
	}



/* gen-prefix */
	obj_t BGl_genzd2prefixzd2zzsaw_c_codez00(BgL_rtl_funz00_bglt BgL_funz00_67)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 341 */
			{	/* SawC/code.scm 341 */
				obj_t BgL_method4741z00_3667;

				{	/* SawC/code.scm 341 */
					BgL_objectz00_bglt BgL_objz00_3668;

					BgL_objz00_3668 = (BgL_objectz00_bglt) (BgL_funz00_67);
					{	/* SawC/code.scm 341 */
						long BgL_objzd2classzd2numz00_3669;

						BgL_objzd2classzd2numz00_3669 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_3668);
						{	/* SawC/code.scm 341 */
							obj_t BgL_arg2643z00_3670;

							BgL_arg2643z00_3670 =
								PROCEDURE_REF(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
								(int) (((long) 1)));
							{	/* SawC/code.scm 341 */
								obj_t BgL_arrayz00_3672;

								int BgL_offsetz00_3673;

								BgL_arrayz00_3672 = BgL_arg2643z00_3670;
								BgL_offsetz00_3673 = (int) (BgL_objzd2classzd2numz00_3669);
								{	/* SawC/code.scm 341 */
									long BgL_offsetz00_3674;

									BgL_offsetz00_3674 =
										((long) (BgL_offsetz00_3673) - OBJECT_TYPE);
									{	/* SawC/code.scm 341 */
										long BgL_modz00_3675;

										{	/* SawC/code.scm 341 */
											int BgL_arg2645z00_3676;

											BgL_arg2645z00_3676 = (int) (((long) 16));
											{	/* SawC/code.scm 341 */
												long BgL_auxz00_5107;

												BgL_auxz00_5107 = (long) (BgL_arg2645z00_3676);
												BgL_modz00_3675 =
													(BgL_offsetz00_3674 / BgL_auxz00_5107);
										}}
										{	/* SawC/code.scm 341 */
											long BgL_restz00_3677;

											{	/* SawC/code.scm 341 */
												int BgL_arg2644z00_3678;

												BgL_arg2644z00_3678 = (int) (((long) 16));
												{	/* SawC/code.scm 341 */
													long BgL_auxz00_5111;

													BgL_auxz00_5111 = (long) (BgL_arg2644z00_3678);
													BgL_restz00_3677 =
														(BgL_offsetz00_3674 % BgL_auxz00_5111);
											}}
											{	/* SawC/code.scm 341 */

												BgL_method4741z00_3667 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_3672,
														(int) (BgL_modz00_3675)), (int) (BgL_restz00_3677));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method4741z00_3667) (BgL_method4741z00_3667,
					(obj_t) (BgL_funz00_67), BEOA);
			}
		}
	}



/* _gen-prefix */
	obj_t BGl__genzd2prefixzd2zzsaw_c_codez00(obj_t BgL_envz00_3911,
		obj_t BgL_funz00_3912)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 341 */
			return
				BGl_genzd2prefixzd2zzsaw_c_codez00(
				(BgL_rtl_funz00_bglt) (BgL_funz00_3912));
		}
	}



/* _gen-prefix-default4740 */
	obj_t BGl__genzd2prefixzd2default4740z00zzsaw_c_codez00(obj_t BgL_envz00_3913,
		obj_t BgL_funz00_3914)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 1 */
			return BGl_string5594z00zzsaw_c_codez00;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_c_codez00()
	{
		AN_OBJECT;
		{	/* SawC/code.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2exprzd2envz00zzsaw_c_codez00,
				BGl_rtl_lightfuncallz00zzsaw_defsz00, BGl_proc5661z00zzsaw_c_codez00,
				BGl_string5658z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2exprzd2envz00zzsaw_c_codez00,
				BGl_rtl_funcallz00zzsaw_defsz00, BGl_proc5662z00zzsaw_c_codez00,
				BGl_string5658z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2exprzd2envz00zzsaw_c_codez00,
				BGl_rtl_protectz00zzsaw_defsz00, BGl_proc5663z00zzsaw_c_codez00,
				BGl_string5658z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2exprzd2envz00zzsaw_c_codez00, BGl_rtl_pragmaz00zzsaw_defsz00,
				BGl_proc5664z00zzsaw_c_codez00, BGl_string5658z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2exprzd2envz00zzsaw_c_codez00, BGl_rtl_switchz00zzsaw_defsz00,
				BGl_proc5665z00zzsaw_c_codez00, BGl_string5658z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2exprzd2envz00zzsaw_c_codez00, BGl_rtl_callz00zzsaw_defsz00,
				BGl_proc5666z00zzsaw_c_codez00, BGl_string5658z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
				BGl_rtl_vallocz00zzsaw_defsz00, BGl_proc5667z00zzsaw_c_codez00,
				BGl_string5659z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
				BGl_rtl_vrefz00zzsaw_defsz00, BGl_proc5668z00zzsaw_c_codez00,
				BGl_string5659z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
				BGl_rtl_vsetz00zzsaw_defsz00, BGl_proc5669z00zzsaw_c_codez00,
				BGl_string5659z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
				BGl_rtl_vlengthz00zzsaw_defsz00, BGl_proc5670z00zzsaw_c_codez00,
				BGl_string5659z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
				BGl_rtl_movz00zzsaw_defsz00, BGl_proc5671z00zzsaw_c_codez00,
				BGl_string5659z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
				BGl_rtl_loadiz00zzsaw_defsz00, BGl_proc5672z00zzsaw_c_codez00,
				BGl_string5659z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
				BGl_rtl_loadgz00zzsaw_defsz00, BGl_proc5673z00zzsaw_c_codez00,
				BGl_string5659z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2funzd2namezd2envzd2zzsaw_c_codez00,
				BGl_rtl_returnz00zzsaw_defsz00, BGl_proc5674z00zzsaw_c_codez00,
				BGl_string5659z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
				BGl_rtl_loadiz00zzsaw_defsz00, BGl_proc5675z00zzsaw_c_codez00,
				BGl_string5660z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
				BGl_rtl_loadgz00zzsaw_defsz00, BGl_proc5676z00zzsaw_c_codez00,
				BGl_string5660z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
				BGl_rtl_loadfunz00zzsaw_defsz00, BGl_proc5677z00zzsaw_c_codez00,
				BGl_string5660z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
				BGl_rtl_storegz00zzsaw_defsz00, BGl_proc5678z00zzsaw_c_codez00,
				BGl_string5660z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
				BGl_rtl_globalrefz00zzsaw_defsz00, BGl_proc5679z00zzsaw_c_codez00,
				BGl_string5660z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00, BGl_rtl_goz00zzsaw_defsz00,
				BGl_proc5680z00zzsaw_c_codez00, BGl_string5660z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00, BGl_rtl_ifeqz00zzsaw_defsz00,
				BGl_proc5681z00zzsaw_c_codez00, BGl_string5660z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00, BGl_rtl_ifnez00zzsaw_defsz00,
				BGl_proc5682z00zzsaw_c_codez00, BGl_string5660z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
				BGl_rtl_vallocz00zzsaw_defsz00, BGl_proc5683z00zzsaw_c_codez00,
				BGl_string5660z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00, BGl_rtl_vrefz00zzsaw_defsz00,
				BGl_proc5684z00zzsaw_c_codez00, BGl_string5660z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00, BGl_rtl_vsetz00zzsaw_defsz00,
				BGl_proc5685z00zzsaw_c_codez00, BGl_string5660z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
				BGl_rtl_vlengthz00zzsaw_defsz00, BGl_proc5686z00zzsaw_c_codez00,
				BGl_string5660z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00, BGl_rtl_castz00zzsaw_defsz00,
				BGl_proc5687z00zzsaw_c_codez00, BGl_string5660z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_genzd2prefixzd2envz00zzsaw_c_codez00,
				BGl_rtl_cast_nullz00zzsaw_defsz00, BGl_proc5688z00zzsaw_c_codez00,
				BGl_string5660z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2subtypezf3zd2envzf3zzbackend_backendz00,
				BGl_cvmz00zzbackend_cvmz00, BGl_proc5689z00zzsaw_c_codez00,
				BGl_string5690z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_acceptzd2foldingzf3zd2envzf3zzsaw_exprz00,
				BGl_cvmz00zzbackend_cvmz00, BGl_proc5691z00zzsaw_c_codez00,
				BGl_string5692z00zzsaw_c_codez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_iregz00zzsaw_c_codez00, BGl_proc5693z00zzsaw_c_codez00,
				BGl_string5694z00zzsaw_c_codez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_iregz00zzsaw_c_codez00, BGl_proc5695z00zzsaw_c_codez00,
				BGl_string5696z00zzsaw_c_codez00);
		}
	}



/* struct+object->objec4777 */
	obj_t BGl_structzb2objectzd2ze3objec4777z83zzsaw_c_codez00(obj_t
		BgL_envz00_3952, obj_t BgL_oz00_3953, obj_t BgL_sz00_3954)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 25 */
			{
				BgL_iregz00_bglt BgL_oz00_2967;

				obj_t BgL_sz00_2968;

				{	/* SawC/code.scm 25 */
					BgL_iregz00_bglt BgL_auxz00_5155;

					BgL_oz00_2967 = (BgL_iregz00_bglt) (BgL_oz00_3953);
					BgL_sz00_2968 = BgL_sz00_3954;
					{

						{	/* SawC/code.scm 25 */
							obj_t BgL_old4600z00_2971;

							obj_t BgL_aux4601z00_2972;

							{	/* SawC/code.scm 25 */
								obj_t BgL_nextzd2method4776zd2_2977;

								BgL_nextzd2method4776zd2_2977 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_2967),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_iregz00zzsaw_c_codez00);
								if (PROCEDUREP(BgL_nextzd2method4776zd2_2977))
									{	/* SawC/code.scm 25 */
										BgL_old4600z00_2971 =
											PROCEDURE_ENTRY(BgL_nextzd2method4776zd2_2977)
											(BgL_nextzd2method4776zd2_2977, (obj_t) (BgL_oz00_2967),
											BgL_sz00_2968, BEOA);
									}
								else
									{	/* SawC/code.scm 25 */
										BgL_old4600z00_2971 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_2967), BgL_sz00_2968));
									}
							}
							BgL_aux4601z00_2972 =
								STRUCT_REF(BgL_sz00_2968, (int) (((long) 0)));
							{	/* SawC/code.scm 25 */
								BgL_iregz00_bglt BgL_new4602z00_2973;

								BgL_new4602z00_2973 =
									((BgL_iregz00_bglt) (BgL_old4600z00_2971));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4602z00_2973),
									BGl_classzd2numzd2zz__objectz00(BGl_iregz00zzsaw_c_codez00));
								{	/* SawC/code.scm 25 */
									BgL_iregz00_bglt BgL_arg5459z00_2975;

									{	/* SawC/code.scm 25 */
										obj_t BgL_arg5460z00_2976;

										BgL_arg5460z00_2976 =
											STRUCT_REF(BgL_aux4601z00_2972, (int) (((long) 0)));
										{	/* SawC/code.scm 25 */
											BgL_iregz00_bglt BgL_res5551z00_3881;

											{	/* SawC/code.scm 25 */
												BgL_iregz00_bglt BgL_new4581z00_3876;

												BgL_new4581z00_3876 =
													((BgL_iregz00_bglt) BREF(GC_MALLOC(sizeof(struct
																BgL_iregz00_bgl))));
												{	/* SawC/code.scm 25 */
													BgL_iregz00_bglt BgL_res5550z00_3880;

													{	/* SawC/code.scm 25 */
														BgL_iregz00_bglt BgL_new4593z00_3877;

														BgL_new4593z00_3877 = BgL_new4581z00_3876;
														{	/* SawC/code.scm 25 */
															obj_t BgL_index4592z00_3879;

															BgL_index4592z00_3879 = BgL_arg5460z00_2976;
															((((BgL_iregz00_bglt) CREF(BgL_new4593z00_3877))->
																	BgL_indexz00) =
																((obj_t) BgL_index4592z00_3879), BUNSPEC);
															BgL_res5550z00_3880 = BgL_new4593z00_3877;
													}} BgL_res5550z00_3880;
												}
												BgL_res5551z00_3881 = BgL_new4581z00_3876;
											}
											BgL_arg5459z00_2975 = BgL_res5551z00_3881;
									}}
									{	/* SawC/code.scm 25 */
										obj_t BgL_auxz00_5178;

										BgL_objectz00_bglt BgL_auxz00_5176;

										BgL_auxz00_5178 = (obj_t) (BgL_arg5459z00_2975);
										BgL_auxz00_5176 =
											(BgL_objectz00_bglt) (BgL_new4602z00_2973);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_5176, BgL_auxz00_5178);
								}}
								BgL_auxz00_5155 = BgL_new4602z00_2973;
					}}}
					return (obj_t) (BgL_auxz00_5155);
				}
			}
		}
	}



/* object->struct-ireg4775 */
	obj_t BGl_objectzd2ze3structzd2ireg4775ze3zzsaw_c_codez00(obj_t
		BgL_envz00_3955, obj_t BgL_obj4597z00_3956)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 25 */
			{
				BgL_iregz00_bglt BgL_obj4597z00_2957;

				BgL_obj4597z00_2957 = (BgL_iregz00_bglt) (BgL_obj4597z00_3956);
				{

					{	/* SawC/code.scm 25 */
						obj_t BgL_res4598z00_2960;

						{	/* SawC/code.scm 25 */
							obj_t BgL_nextzd2method4774zd2_2965;

							BgL_nextzd2method4774zd2_2965 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4597z00_2957),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_iregz00zzsaw_c_codez00);
							if (PROCEDUREP(BgL_nextzd2method4774zd2_2965))
								{	/* SawC/code.scm 25 */
									BgL_res4598z00_2960 =
										PROCEDURE_ENTRY(BgL_nextzd2method4774zd2_2965)
										(BgL_nextzd2method4774zd2_2965,
										(obj_t) (BgL_obj4597z00_2957), BEOA);
								}
							else
								{	/* SawC/code.scm 25 */
									BgL_res4598z00_2960 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4597z00_2957));
								}
						}
						{	/* SawC/code.scm 25 */
							obj_t BgL_aux4599z00_2961;

							{	/* SawC/code.scm 25 */
								obj_t BgL_keyz00_3852;

								BgL_keyz00_3852 = CNST_TABLE_REF(((long) 5));
								BgL_aux4599z00_2961 =
									make_struct(BgL_keyz00_3852, (int) (((long) 1)), BUNSPEC);
							}
							{	/* SawC/code.scm 25 */
								obj_t BgL_arg5455z00_2963;

								{
									obj_t BgL_auxz00_5195;

									{	/* SawC/code.scm 25 */
										BgL_objectz00_bglt BgL_auxz00_5196;

										BgL_auxz00_5196 =
											(BgL_objectz00_bglt) (BgL_obj4597z00_2957);
										BgL_auxz00_5195 = BGL_OBJECT_WIDENING(BgL_auxz00_5196);
									}
									BgL_arg5455z00_2963 =
										(((BgL_iregz00_bglt) CREF(BgL_auxz00_5195))->BgL_indexz00);
								}
								{	/* SawC/code.scm 25 */
									int BgL_auxz00_5200;

									BgL_auxz00_5200 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4599z00_2961, BgL_auxz00_5200,
										BgL_arg5455z00_2963);
							}}
							{	/* SawC/code.scm 25 */
								int BgL_auxz00_5203;

								BgL_auxz00_5203 = (int) (((long) 0));
								STRUCT_SET(BgL_res4598z00_2960, BgL_auxz00_5203,
									BgL_aux4599z00_2961);
							}
							{	/* SawC/code.scm 25 */
								obj_t BgL_auxz00_5206;

								BgL_auxz00_5206 = STRUCT_KEY(BgL_res4598z00_2960);
								STRUCT_KEY_SET(BgL_aux4599z00_2961, BgL_auxz00_5206);
							}
							{	/* SawC/code.scm 25 */
								obj_t BgL_kz00_3867;

								BgL_kz00_3867 = CNST_TABLE_REF(((long) 5));
								STRUCT_KEY_SET(BgL_res4598z00_2960, BgL_kz00_3867);
							}
							return BgL_res4598z00_2960;
						}
					}
				}
			}
		}
	}



/* accept-folding?-cvm4773 */
	obj_t BGl_acceptzd2foldingzf3zd2cvm4773zf3zzsaw_c_codez00(obj_t
		BgL_envz00_3957, obj_t BgL_bz00_3958, obj_t BgL_insz00_3959,
		obj_t BgL_treez00_3960)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 454 */
			{
				BgL_cvmz00_bglt BgL_bz00_2948;

				obj_t BgL_insz00_2949;

				obj_t BgL_treez00_2950;

				{	/* SawC/code.scm 455 */
					bool_t BgL_auxz00_5212;

					BgL_bz00_2948 = (BgL_cvmz00_bglt) (BgL_bz00_3958);
					BgL_insz00_2949 = BgL_insz00_3959;
					BgL_treez00_2950 = BgL_treez00_3960;
					{	/* SawC/code.scm 455 */
						bool_t BgL__ortest_4644z00_3850;

						BgL__ortest_4644z00_3850 =
							BGl_deepzd2movzf3z21zzsaw_c_codez00(BgL_treez00_2950);
						if (BgL__ortest_4644z00_3850)
							{	/* SawC/code.scm 455 */
								BgL_auxz00_5212 = BgL__ortest_4644z00_3850;
							}
						else
							{	/* SawC/code.scm 455 */
								if (BGl_multiplezd2evaluationzd2zzsaw_c_codez00(BgL_insz00_2949,
										BgL_treez00_2950))
									{	/* SawC/code.scm 455 */
										BgL_auxz00_5212 = ((bool_t) 0);
									}
								else
									{	/* SawC/code.scm 455 */
										BgL_auxz00_5212 = ((bool_t) 1);
									}
							}
					}
					return BBOOL(BgL_auxz00_5212);
				}
			}
		}
	}



/* backend-subtype?-cvm4771 */
	obj_t BGl_backendzd2subtypezf3zd2cvm4771zf3zzsaw_c_codez00(obj_t
		BgL_envz00_3961, obj_t BgL_bz00_3962, obj_t BgL_t1z00_3963,
		obj_t BgL_t2z00_3964)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 446 */
			{
				BgL_cvmz00_bglt BgL_bz00_2936;

				obj_t BgL_t1z00_2937;

				obj_t BgL_t2z00_2938;

				{	/* SawC/code.scm 448 */
					bool_t BgL_auxz00_5219;

					BgL_bz00_2936 = (BgL_cvmz00_bglt) (BgL_bz00_3962);
					BgL_t1z00_2937 = BgL_t1z00_3963;
					BgL_t2z00_2938 = BgL_t2z00_3964;
					{	/* SawC/code.scm 448 */
						bool_t BgL__ortest_4643z00_2941;

						{	/* SawC/code.scm 448 */
							obj_t BgL_auxz00_5224;

							obj_t BgL_auxz00_5220;

							{
								BgL_typez00_bglt BgL_auxz00_5225;

								BgL_auxz00_5225 = (BgL_typez00_bglt) (BgL_t2z00_2938);
								BgL_auxz00_5224 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_5225))->BgL_idz00);
							}
							{
								BgL_typez00_bglt BgL_auxz00_5221;

								BgL_auxz00_5221 = (BgL_typez00_bglt) (BgL_t1z00_2937);
								BgL_auxz00_5220 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_5221))->BgL_idz00);
							}
							BgL__ortest_4643z00_2941 = (BgL_auxz00_5220 == BgL_auxz00_5224);
						}
						if (BgL__ortest_4643z00_2941)
							{	/* SawC/code.scm 448 */
								BgL_auxz00_5219 = BgL__ortest_4643z00_2941;
							}
						else
							{	/* SawC/code.scm 449 */
								obj_t BgL_arg5447z00_2942;

								obj_t BgL_arg5448z00_2943;

								{
									BgL_typez00_bglt BgL_auxz00_5230;

									BgL_auxz00_5230 = (BgL_typez00_bglt) (BgL_t1z00_2937);
									BgL_arg5447z00_2942 =
										(((BgL_typez00_bglt) CREF(BgL_auxz00_5230))->BgL_namez00);
								}
								{
									BgL_typez00_bglt BgL_auxz00_5233;

									BgL_auxz00_5233 = (BgL_typez00_bglt) (BgL_t2z00_2938);
									BgL_arg5448z00_2943 =
										(((BgL_typez00_bglt) CREF(BgL_auxz00_5233))->BgL_namez00);
								}
								BgL_auxz00_5219 =
									bigloo_strcmp(BgL_arg5447z00_2942, BgL_arg5448z00_2943);
							}
					}
					return BBOOL(BgL_auxz00_5219);
				}
			}
		}
	}



/* gen-prefix-rtl_cast_4769 */
	obj_t BGl_genzd2prefixzd2rtl_cast_4769z00zzsaw_c_codez00(obj_t
		BgL_envz00_3965, obj_t BgL_funz00_3966)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 389 */
			{
				BgL_rtl_cast_nullz00_bglt BgL_funz00_2927;

				BgL_funz00_2927 = (BgL_rtl_cast_nullz00_bglt) (BgL_funz00_3966);
				{	/* SawC/code.scm 390 */
					obj_t BgL_arg5442z00_2930;

					obj_t BgL_arg5443z00_2931;

					{	/* SawC/code.scm 390 */
						BgL_typez00_bglt BgL_arg5444z00_2932;

						BgL_arg5444z00_2932 =
							(((BgL_rtl_cast_nullz00_bglt) CREF(BgL_funz00_2927))->
							BgL_typez00);
						BgL_arg5442z00_2930 =
							BGl_makezd2typedzd2declarationz00zztype_toolsz00
							(BgL_arg5444z00_2932, BGl_string5594z00zzsaw_c_codez00);
					}
					{	/* SawC/code.scm 390 */
						obj_t BgL_res5548z00_3843;

						{	/* SawC/code.scm 390 */
							obj_t BgL_auxz00_5241;

							BgL_auxz00_5241 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res5548z00_3843 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5241);
						}
						BgL_arg5443z00_2931 = BgL_res5548z00_3843;
					}
					return bgl_display_obj(BgL_arg5442z00_2930, BgL_arg5443z00_2931);
				}
			}
		}
	}



/* gen-prefix-rtl_cast4767 */
	obj_t BGl_genzd2prefixzd2rtl_cast4767z00zzsaw_c_codez00(obj_t BgL_envz00_3967,
		obj_t BgL_funz00_3968)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 385 */
			{
				BgL_rtl_castz00_bglt BgL_funz00_2916;

				BgL_funz00_2916 = (BgL_rtl_castz00_bglt) (BgL_funz00_3968);
				{	/* SawC/code.scm 386 */
					obj_t BgL_arg5434z00_2919;

					obj_t BgL_arg5435z00_2920;

					{	/* SawC/code.scm 386 */
						BgL_typez00_bglt BgL_arg5436z00_2921;

						BgL_arg5436z00_2921 =
							(((BgL_rtl_castz00_bglt) CREF(BgL_funz00_2916))->BgL_typez00);
						BgL_arg5434z00_2919 =
							BGl_makezd2typedzd2declarationz00zztype_toolsz00
							(BgL_arg5436z00_2921, BGl_string5594z00zzsaw_c_codez00);
					}
					{	/* SawC/code.scm 386 */
						obj_t BgL_res5546z00_3836;

						{	/* SawC/code.scm 386 */
							obj_t BgL_auxz00_5248;

							BgL_auxz00_5248 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res5546z00_3836 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5248);
						}
						BgL_arg5435z00_2920 = BgL_res5546z00_3836;
					}
					bgl_display_obj(BgL_arg5434z00_2919, BgL_arg5435z00_2920);
				}
				{	/* SawC/code.scm 387 */
					obj_t BgL_arg5440z00_2924;

					{	/* SawC/code.scm 387 */
						obj_t BgL_res5547z00_3838;

						{	/* SawC/code.scm 387 */
							obj_t BgL_auxz00_5252;

							BgL_auxz00_5252 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res5547z00_3838 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5252);
						}
						BgL_arg5440z00_2924 = BgL_res5547z00_3838;
					}
					return
						bgl_display_string(BGl_string5588z00zzsaw_c_codez00,
						BgL_arg5440z00_2924);
				}
			}
		}
	}



/* gen-prefix-rtl_vleng4765 */
	obj_t BGl_genzd2prefixzd2rtl_vleng4765z00zzsaw_c_codez00(obj_t
		BgL_envz00_3969, obj_t BgL_funz00_3970)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 382 */
			{
				BgL_rtl_vlengthz00_bglt BgL_funz00_2910;

				BgL_funz00_2910 = (BgL_rtl_vlengthz00_bglt) (BgL_funz00_3970);
				{	/* SawC/code.scm 383 */
					BgL_typez00_bglt BgL_arg5432z00_3832;

					BgL_arg5432z00_3832 =
						(((BgL_rtl_vlengthz00_bglt) CREF(BgL_funz00_2910))->BgL_typez00);
					return BGl_vextraz00zzsaw_c_codez00(BgL_arg5432z00_3832);
				}
			}
		}
	}



/* gen-prefix-rtl_vset4763 */
	obj_t BGl_genzd2prefixzd2rtl_vset4763z00zzsaw_c_codez00(obj_t BgL_envz00_3971,
		obj_t BgL_funz00_3972)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 379 */
			{
				BgL_rtl_vsetz00_bglt BgL_funz00_2904;

				BgL_funz00_2904 = (BgL_rtl_vsetz00_bglt) (BgL_funz00_3972);
				{	/* SawC/code.scm 380 */
					BgL_typez00_bglt BgL_arg5430z00_3830;

					BgL_arg5430z00_3830 =
						(((BgL_rtl_vsetz00_bglt) CREF(BgL_funz00_2904))->BgL_typez00);
					return BGl_vextraz00zzsaw_c_codez00(BgL_arg5430z00_3830);
				}
			}
		}
	}



/* gen-prefix-rtl_vref4761 */
	obj_t BGl_genzd2prefixzd2rtl_vref4761z00zzsaw_c_codez00(obj_t BgL_envz00_3973,
		obj_t BgL_funz00_3974)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 376 */
			{
				BgL_rtl_vrefz00_bglt BgL_funz00_2898;

				BgL_funz00_2898 = (BgL_rtl_vrefz00_bglt) (BgL_funz00_3974);
				{	/* SawC/code.scm 377 */
					BgL_typez00_bglt BgL_arg5428z00_3828;

					BgL_arg5428z00_3828 =
						(((BgL_rtl_vrefz00_bglt) CREF(BgL_funz00_2898))->BgL_typez00);
					return BGl_vextraz00zzsaw_c_codez00(BgL_arg5428z00_3828);
				}
			}
		}
	}



/* gen-prefix-rtl_vallo4759 */
	obj_t BGl_genzd2prefixzd2rtl_vallo4759z00zzsaw_c_codez00(obj_t
		BgL_envz00_3975, obj_t BgL_funz00_3976)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 373 */
			{
				BgL_rtl_vallocz00_bglt BgL_funz00_2892;

				BgL_funz00_2892 = (BgL_rtl_vallocz00_bglt) (BgL_funz00_3976);
				{	/* SawC/code.scm 374 */
					BgL_typez00_bglt BgL_arg5426z00_3826;

					BgL_arg5426z00_3826 =
						(((BgL_rtl_vallocz00_bglt) CREF(BgL_funz00_2892))->BgL_typez00);
					return BGl_vextraz00zzsaw_c_codez00(BgL_arg5426z00_3826);
				}
			}
		}
	}



/* gen-prefix-rtl_ifne4757 */
	obj_t BGl_genzd2prefixzd2rtl_ifne4757z00zzsaw_c_codez00(obj_t BgL_envz00_3977,
		obj_t BgL_funz00_3978)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 365 */
			{
				BgL_rtl_ifnez00_bglt BgL_funz00_2880;

				BgL_funz00_2880 = (BgL_rtl_ifnez00_bglt) (BgL_funz00_3978);
				{	/* SawC/code.scm 366 */
					int BgL_arg5419z00_2884;

					{	/* SawC/code.scm 366 */
						BgL_blockz00_bglt BgL_obj4496z00_3825;

						BgL_obj4496z00_3825 =
							(((BgL_rtl_ifnez00_bglt) CREF(BgL_funz00_2880))->BgL_thenz00);
						BgL_arg5419z00_2884 =
							(((BgL_blockz00_bglt) CREF(BgL_obj4496z00_3825))->BgL_labelz00);
					}
					{	/* SawC/code.scm 366 */
						obj_t BgL_list5421z00_2886;

						{	/* SawC/code.scm 366 */
							obj_t BgL_arg5422z00_2887;

							{	/* SawC/code.scm 366 */
								obj_t BgL_arg5423z00_2888;

								BgL_arg5423z00_2888 =
									MAKE_PAIR(BGl_string5588z00zzsaw_c_codez00, BNIL);
								BgL_arg5422z00_2887 =
									MAKE_PAIR(BINT(BgL_arg5419z00_2884), BgL_arg5423z00_2888);
							}
							BgL_list5421z00_2886 =
								MAKE_PAIR(BGl_string5596z00zzsaw_c_codez00,
								BgL_arg5422z00_2887);
						}
						return
							BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list5421z00_2886);
					}
				}
			}
		}
	}



/* gen-prefix-rtl_ifeq4755 */
	obj_t BGl_genzd2prefixzd2rtl_ifeq4755z00zzsaw_c_codez00(obj_t BgL_envz00_3979,
		obj_t BgL_funz00_3980)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 362 */
			{
				BgL_rtl_ifeqz00_bglt BgL_funz00_2868;

				BgL_funz00_2868 = (BgL_rtl_ifeqz00_bglt) (BgL_funz00_3980);
				{	/* SawC/code.scm 363 */
					int BgL_arg5410z00_2872;

					{	/* SawC/code.scm 363 */
						BgL_blockz00_bglt BgL_obj4496z00_3823;

						BgL_obj4496z00_3823 =
							(((BgL_rtl_ifeqz00_bglt) CREF(BgL_funz00_2868))->BgL_thenz00);
						BgL_arg5410z00_2872 =
							(((BgL_blockz00_bglt) CREF(BgL_obj4496z00_3823))->BgL_labelz00);
					}
					{	/* SawC/code.scm 363 */
						obj_t BgL_list5412z00_2874;

						{	/* SawC/code.scm 363 */
							obj_t BgL_arg5413z00_2875;

							{	/* SawC/code.scm 363 */
								obj_t BgL_arg5414z00_2876;

								BgL_arg5414z00_2876 =
									MAKE_PAIR(BGl_string5588z00zzsaw_c_codez00, BNIL);
								BgL_arg5413z00_2875 =
									MAKE_PAIR(BINT(BgL_arg5410z00_2872), BgL_arg5414z00_2876);
							}
							BgL_list5412z00_2874 =
								MAKE_PAIR(BGl_string5596z00zzsaw_c_codez00,
								BgL_arg5413z00_2875);
						}
						return
							BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list5412z00_2874);
					}
				}
			}
		}
	}



/* gen-prefix-rtl_go4753 */
	obj_t BGl_genzd2prefixzd2rtl_go4753z00zzsaw_c_codez00(obj_t BgL_envz00_3981,
		obj_t BgL_funz00_3982)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 359 */
			{
				BgL_rtl_goz00_bglt BgL_funz00_2858;

				BgL_funz00_2858 = (BgL_rtl_goz00_bglt) (BgL_funz00_3982);
				{	/* SawC/code.scm 360 */
					int BgL_arg5404z00_2862;

					{	/* SawC/code.scm 360 */
						BgL_blockz00_bglt BgL_obj4496z00_3821;

						BgL_obj4496z00_3821 =
							(((BgL_rtl_goz00_bglt) CREF(BgL_funz00_2858))->BgL_toz00);
						BgL_arg5404z00_2862 =
							(((BgL_blockz00_bglt) CREF(BgL_obj4496z00_3821))->BgL_labelz00);
					}
					{	/* SawC/code.scm 360 */
						obj_t BgL_list5405z00_2863;

						{	/* SawC/code.scm 360 */
							obj_t BgL_arg5406z00_2864;

							BgL_arg5406z00_2864 = MAKE_PAIR(BINT(BgL_arg5404z00_2862), BNIL);
							BgL_list5405z00_2863 =
								MAKE_PAIR(BGl_string5596z00zzsaw_c_codez00,
								BgL_arg5406z00_2864);
						}
						return
							BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list5405z00_2863);
					}
				}
			}
		}
	}



/* gen-prefix-rtl_globa4751 */
	obj_t BGl_genzd2prefixzd2rtl_globa4751z00zzsaw_c_codez00(obj_t
		BgL_envz00_3983, obj_t BgL_funz00_3984)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 356 */
			{
				BgL_rtl_globalrefz00_bglt BgL_funz00_2850;

				BgL_funz00_2850 = (BgL_rtl_globalrefz00_bglt) (BgL_funz00_3984);
				{	/* SawC/code.scm 357 */
					obj_t BgL_arg5399z00_2853;

					{	/* SawC/code.scm 357 */
						BgL_globalz00_bglt BgL_arg5401z00_2855;

						BgL_arg5401z00_2855 =
							(((BgL_rtl_globalrefz00_bglt) CREF(BgL_funz00_2850))->BgL_varz00);
						{	/* SawC/code.scm 357 */
							obj_t BgL_arg5055z00_3818;

							{
								BgL_variablez00_bglt BgL_auxz00_5293;

								BgL_auxz00_5293 = (BgL_variablez00_bglt) (BgL_arg5401z00_2855);
								BgL_arg5055z00_3818 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_5293))->BgL_namez00);
							}
							BgL_arg5399z00_2853 =
								BGl_patchz00zzsaw_c_codez00(BgL_arg5055z00_3818);
						}
					}
					{	/* SawC/code.scm 357 */
						obj_t BgL_list5400z00_2854;

						BgL_list5400z00_2854 = MAKE_PAIR(BgL_arg5399z00_2853, BNIL);
						return
							BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list5400z00_2854);
					}
				}
			}
		}
	}



/* gen-prefix-rtl_store4749 */
	obj_t BGl_genzd2prefixzd2rtl_store4749z00zzsaw_c_codez00(obj_t
		BgL_envz00_3985, obj_t BgL_funz00_3986)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 353 */
			{
				BgL_rtl_storegz00_bglt BgL_funz00_2840;

				BgL_funz00_2840 = (BgL_rtl_storegz00_bglt) (BgL_funz00_3986);
				{	/* SawC/code.scm 354 */
					obj_t BgL_arg5393z00_2843;

					{	/* SawC/code.scm 354 */
						BgL_globalz00_bglt BgL_arg5397z00_2847;

						BgL_arg5397z00_2847 =
							(((BgL_rtl_storegz00_bglt) CREF(BgL_funz00_2840))->BgL_varz00);
						{	/* SawC/code.scm 354 */
							obj_t BgL_arg5055z00_3814;

							{
								BgL_variablez00_bglt BgL_auxz00_5301;

								BgL_auxz00_5301 = (BgL_variablez00_bglt) (BgL_arg5397z00_2847);
								BgL_arg5055z00_3814 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_5301))->BgL_namez00);
							}
							BgL_arg5393z00_2843 =
								BGl_patchz00zzsaw_c_codez00(BgL_arg5055z00_3814);
						}
					}
					{	/* SawC/code.scm 354 */
						obj_t BgL_list5395z00_2845;

						{	/* SawC/code.scm 354 */
							obj_t BgL_arg5396z00_2846;

							BgL_arg5396z00_2846 =
								MAKE_PAIR(BGl_string5588z00zzsaw_c_codez00, BNIL);
							BgL_list5395z00_2845 =
								MAKE_PAIR(BgL_arg5393z00_2843, BgL_arg5396z00_2846);
						}
						return
							BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list5395z00_2845);
					}
				}
			}
		}
	}



/* gen-prefix-rtl_loadf4747 */
	obj_t BGl_genzd2prefixzd2rtl_loadf4747z00zzsaw_c_codez00(obj_t
		BgL_envz00_3987, obj_t BgL_funz00_3988)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 350 */
			{
				BgL_rtl_loadfunz00_bglt BgL_funz00_2830;

				BgL_funz00_2830 = (BgL_rtl_loadfunz00_bglt) (BgL_funz00_3988);
				{	/* SawC/code.scm 351 */
					obj_t BgL_arg5388z00_2834;

					{	/* SawC/code.scm 351 */
						BgL_globalz00_bglt BgL_arg5391z00_2837;

						BgL_arg5391z00_2837 =
							(((BgL_rtl_loadfunz00_bglt) CREF(BgL_funz00_2830))->BgL_varz00);
						{	/* SawC/code.scm 351 */
							obj_t BgL_arg5055z00_3810;

							{
								BgL_variablez00_bglt BgL_auxz00_5310;

								BgL_auxz00_5310 = (BgL_variablez00_bglt) (BgL_arg5391z00_2837);
								BgL_arg5055z00_3810 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_5310))->BgL_namez00);
							}
							BgL_arg5388z00_2834 =
								BGl_patchz00zzsaw_c_codez00(BgL_arg5055z00_3810);
						}
					}
					{	/* SawC/code.scm 351 */
						obj_t BgL_list5389z00_2835;

						{	/* SawC/code.scm 351 */
							obj_t BgL_arg5390z00_2836;

							BgL_arg5390z00_2836 = MAKE_PAIR(BgL_arg5388z00_2834, BNIL);
							BgL_list5389z00_2835 =
								MAKE_PAIR(BGl_string5697z00zzsaw_c_codez00,
								BgL_arg5390z00_2836);
						}
						return
							BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list5389z00_2835);
					}
				}
			}
		}
	}



/* gen-prefix-rtl_loadg4745 */
	obj_t BGl_genzd2prefixzd2rtl_loadg4745z00zzsaw_c_codez00(obj_t
		BgL_envz00_3989, obj_t BgL_funz00_3990)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 347 */
			{
				BgL_rtl_loadgz00_bglt BgL_funz00_2822;

				BgL_funz00_2822 = (BgL_rtl_loadgz00_bglt) (BgL_funz00_3990);
				{	/* SawC/code.scm 348 */
					obj_t BgL_arg5383z00_2825;

					obj_t BgL_arg5384z00_2826;

					{	/* SawC/code.scm 348 */
						BgL_globalz00_bglt BgL_arg5385z00_2827;

						BgL_arg5385z00_2827 =
							(((BgL_rtl_loadgz00_bglt) CREF(BgL_funz00_2822))->BgL_varz00);
						{	/* SawC/code.scm 348 */
							obj_t BgL_arg5055z00_3804;

							{
								BgL_variablez00_bglt BgL_auxz00_5319;

								BgL_auxz00_5319 = (BgL_variablez00_bglt) (BgL_arg5385z00_2827);
								BgL_arg5055z00_3804 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_5319))->BgL_namez00);
							}
							BgL_arg5383z00_2825 =
								BGl_patchz00zzsaw_c_codez00(BgL_arg5055z00_3804);
						}
					}
					{	/* SawC/code.scm 348 */
						obj_t BgL_res5545z00_3807;

						{	/* SawC/code.scm 348 */
							obj_t BgL_auxz00_5323;

							BgL_auxz00_5323 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res5545z00_3807 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5323);
						}
						BgL_arg5384z00_2826 = BgL_res5545z00_3807;
					}
					return bgl_display_obj(BgL_arg5383z00_2825, BgL_arg5384z00_2826);
				}
			}
		}
	}



/* gen-prefix-rtl_loadi4743 */
	obj_t BGl_genzd2prefixzd2rtl_loadi4743z00zzsaw_c_codez00(obj_t
		BgL_envz00_3991, obj_t BgL_funz00_3992)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 344 */
			{
				BgL_rtl_loadiz00_bglt BgL_funz00_2815;

				BgL_funz00_2815 = (BgL_rtl_loadiz00_bglt) (BgL_funz00_3992);
				{	/* SawC/code.scm 345 */
					obj_t BgL_arg5379z00_3798;

					{	/* SawC/code.scm 345 */
						BgL_atomz00_bglt BgL_obj2135z00_3801;

						BgL_obj2135z00_3801 =
							(((BgL_rtl_loadiz00_bglt) CREF(BgL_funz00_2815))->
							BgL_constantz00);
						BgL_arg5379z00_3798 =
							(((BgL_atomz00_bglt) CREF(BgL_obj2135z00_3801))->BgL_valuez00);
					}
					return
						BGl_emitzd2atomzd2valuez00zzbackend_c_emitz00(BgL_arg5379z00_3798);
				}
			}
		}
	}



/* gen-fun-name-rtl_ret4739 */
	obj_t BGl_genzd2funzd2namezd2rtl_ret4739zd2zzsaw_c_codez00(obj_t
		BgL_envz00_3993, obj_t BgL_funz00_3994)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 335 */
			{
				BgL_rtl_returnz00_bglt BgL_funz00_2808;

				BgL_funz00_2808 = (BgL_rtl_returnz00_bglt) (BgL_funz00_3994);
				if (BGl_za2inlinezd2simplezd2macrosza2z00zzsaw_c_codez00)
					{	/* SawC/code.scm 336 */
						obj_t BgL_arg5377z00_2812;

						{	/* SawC/code.scm 336 */
							obj_t BgL_res5544z00_3795;

							{	/* SawC/code.scm 336 */
								obj_t BgL_auxz00_5333;

								BgL_auxz00_5333 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res5544z00_3795 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5333);
							}
							BgL_arg5377z00_2812 = BgL_res5544z00_3795;
						}
						return
							bgl_display_string(BGl_string5698z00zzsaw_c_codez00,
							BgL_arg5377z00_2812);
					}
				else
					{	/* SawC/code.scm 336 */
						return
							BGl_genzd2upcasezd2zzsaw_c_codez00(
							(BgL_rtl_funz00_bglt) (BgL_funz00_2808));
					}
			}
		}
	}



/* gen-fun-name-rtl_loa4737 */
	obj_t BGl_genzd2funzd2namezd2rtl_loa4737zd2zzsaw_c_codez00(obj_t
		BgL_envz00_3995, obj_t BgL_funz00_3996)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 333 */
			{
				BgL_rtl_loadgz00_bglt BgL_funz00_2803;

				BgL_funz00_2803 = (BgL_rtl_loadgz00_bglt) (BgL_funz00_3996);
				{	/* SawC/code.scm 333 */
					BgL_rtl_funz00_bglt BgL_funz00_3793;

					BgL_funz00_3793 = (BgL_rtl_funz00_bglt) (BgL_funz00_2803);
					if (BGl_za2inlinezd2simplezd2macrosza2z00zzsaw_c_codez00)
						{	/* SawC/code.scm 333 */
							return BFALSE;
						}
					else
						{	/* SawC/code.scm 333 */
							return BGl_genzd2upcasezd2zzsaw_c_codez00(BgL_funz00_3793);
						}
				}
			}
		}
	}



/* gen-fun-name-rtl_loa4735 */
	obj_t BGl_genzd2funzd2namezd2rtl_loa4735zd2zzsaw_c_codez00(obj_t
		BgL_envz00_3997, obj_t BgL_funz00_3998)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 332 */
			{
				BgL_rtl_loadiz00_bglt BgL_funz00_2798;

				BgL_funz00_2798 = (BgL_rtl_loadiz00_bglt) (BgL_funz00_3998);
				{	/* SawC/code.scm 332 */
					BgL_rtl_funz00_bglt BgL_funz00_3792;

					BgL_funz00_3792 = (BgL_rtl_funz00_bglt) (BgL_funz00_2798);
					if (BGl_za2inlinezd2simplezd2macrosza2z00zzsaw_c_codez00)
						{	/* SawC/code.scm 332 */
							return BFALSE;
						}
					else
						{	/* SawC/code.scm 332 */
							return BGl_genzd2upcasezd2zzsaw_c_codez00(BgL_funz00_3792);
						}
				}
			}
		}
	}



/* gen-fun-name-rtl_mov4733 */
	obj_t BGl_genzd2funzd2namezd2rtl_mov4733zd2zzsaw_c_codez00(obj_t
		BgL_envz00_3999, obj_t BgL_funz00_4000)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 331 */
			{
				BgL_rtl_movz00_bglt BgL_funz00_2793;

				BgL_funz00_2793 = (BgL_rtl_movz00_bglt) (BgL_funz00_4000);
				{	/* SawC/code.scm 331 */
					BgL_rtl_funz00_bglt BgL_funz00_3791;

					BgL_funz00_3791 = (BgL_rtl_funz00_bglt) (BgL_funz00_2793);
					if (BGl_za2inlinezd2simplezd2macrosza2z00zzsaw_c_codez00)
						{	/* SawC/code.scm 331 */
							return BFALSE;
						}
					else
						{	/* SawC/code.scm 331 */
							return BGl_genzd2upcasezd2zzsaw_c_codez00(BgL_funz00_3791);
						}
				}
			}
		}
	}



/* gen-fun-name-rtl_vle4731 */
	obj_t BGl_genzd2funzd2namezd2rtl_vle4731zd2zzsaw_c_codez00(obj_t
		BgL_envz00_4001, obj_t BgL_funz00_4002)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 324 */
			{
				BgL_rtl_vlengthz00_bglt BgL_funz00_2786;

				BgL_funz00_2786 = (BgL_rtl_vlengthz00_bglt) (BgL_funz00_4002);
				{	/* SawC/code.scm 325 */
					BgL_typez00_bglt BgL_arg5371z00_3789;

					BgL_arg5371z00_3789 =
						(((BgL_rtl_vlengthz00_bglt) CREF(BgL_funz00_2786))->BgL_typez00);
					return
						BGl_vfunzd2namezd2zzsaw_c_codez00(BGl_string5699z00zzsaw_c_codez00,
						BgL_arg5371z00_3789);
				}
			}
		}
	}



/* gen-fun-name-rtl_vse4729 */
	obj_t BGl_genzd2funzd2namezd2rtl_vse4729zd2zzsaw_c_codez00(obj_t
		BgL_envz00_4003, obj_t BgL_funz00_4004)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 321 */
			{
				BgL_rtl_vsetz00_bglt BgL_funz00_2779;

				BgL_funz00_2779 = (BgL_rtl_vsetz00_bglt) (BgL_funz00_4004);
				{	/* SawC/code.scm 322 */
					BgL_typez00_bglt BgL_arg5368z00_3786;

					BgL_arg5368z00_3786 =
						(((BgL_rtl_vsetz00_bglt) CREF(BgL_funz00_2779))->BgL_typez00);
					return
						BGl_vfunzd2namezd2zzsaw_c_codez00(BGl_string5700z00zzsaw_c_codez00,
						BgL_arg5368z00_3786);
				}
			}
		}
	}



/* gen-fun-name-rtl_vre4727 */
	obj_t BGl_genzd2funzd2namezd2rtl_vre4727zd2zzsaw_c_codez00(obj_t
		BgL_envz00_4005, obj_t BgL_funz00_4006)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 318 */
			{
				BgL_rtl_vrefz00_bglt BgL_funz00_2772;

				BgL_funz00_2772 = (BgL_rtl_vrefz00_bglt) (BgL_funz00_4006);
				{	/* SawC/code.scm 319 */
					BgL_typez00_bglt BgL_arg5365z00_3783;

					BgL_arg5365z00_3783 =
						(((BgL_rtl_vrefz00_bglt) CREF(BgL_funz00_2772))->BgL_typez00);
					return
						BGl_vfunzd2namezd2zzsaw_c_codez00(BGl_string5701z00zzsaw_c_codez00,
						BgL_arg5365z00_3783);
				}
			}
		}
	}



/* gen-fun-name-rtl_val4725 */
	obj_t BGl_genzd2funzd2namezd2rtl_val4725zd2zzsaw_c_codez00(obj_t
		BgL_envz00_4007, obj_t BgL_funz00_4008)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 315 */
			{
				BgL_rtl_vallocz00_bglt BgL_funz00_2765;

				BgL_funz00_2765 = (BgL_rtl_vallocz00_bglt) (BgL_funz00_4008);
				{	/* SawC/code.scm 316 */
					BgL_typez00_bglt BgL_arg5362z00_3780;

					BgL_arg5362z00_3780 =
						(((BgL_rtl_vallocz00_bglt) CREF(BgL_funz00_2765))->BgL_typez00);
					return
						BGl_vfunzd2namezd2zzsaw_c_codez00(BGl_string5702z00zzsaw_c_codez00,
						BgL_arg5362z00_3780);
				}
			}
		}
	}



/* gen-expr-rtl_call4718 */
	obj_t BGl_genzd2exprzd2rtl_call4718z00zzsaw_c_codez00(obj_t BgL_envz00_4009,
		obj_t BgL_funz00_4010, obj_t BgL_argsz00_4011)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 291 */
			{
				BgL_rtl_callz00_bglt BgL_funz00_2748;

				obj_t BgL_argsz00_2749;

				BgL_funz00_2748 = (BgL_rtl_callz00_bglt) (BgL_funz00_4010);
				BgL_argsz00_2749 = BgL_argsz00_4011;
				{	/* SawC/code.scm 292 */
					obj_t BgL_namez00_2752;

					{	/* SawC/code.scm 292 */
						BgL_globalz00_bglt BgL_arg5359z00_2762;

						BgL_arg5359z00_2762 =
							(((BgL_rtl_callz00_bglt) CREF(BgL_funz00_2748))->BgL_varz00);
						{	/* SawC/code.scm 292 */
							obj_t BgL_arg5055z00_3763;

							{
								BgL_variablez00_bglt BgL_auxz00_5365;

								BgL_auxz00_5365 = (BgL_variablez00_bglt) (BgL_arg5359z00_2762);
								BgL_arg5055z00_3763 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_5365))->BgL_namez00);
							}
							BgL_namez00_2752 =
								BGl_patchz00zzsaw_c_codez00(BgL_arg5055z00_3763);
						}
					}
					{	/* SawC/code.scm 293 */
						obj_t BgL_list5350z00_2753;

						{	/* SawC/code.scm 293 */
							obj_t BgL_arg5351z00_2754;

							BgL_arg5351z00_2754 =
								MAKE_PAIR(BGl_string5587z00zzsaw_c_codez00, BNIL);
							BgL_list5350z00_2753 =
								MAKE_PAIR(BgL_namez00_2752, BgL_arg5351z00_2754);
						}
						BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list5350z00_2753);
					}
					{	/* SawC/code.scm 294 */
						bool_t BgL_testz00_5372;

						if (bigloo_strcmp(BgL_namez00_2752,
								BGl_string5703z00zzsaw_c_codez00))
							{	/* SawC/code.scm 294 */
								BgL_testz00_5372 = ((bool_t) 1);
							}
						else
							{	/* SawC/code.scm 294 */
								if (bigloo_strcmp(BgL_namez00_2752,
										BGl_string5704z00zzsaw_c_codez00))
									{	/* SawC/code.scm 295 */
										BgL_testz00_5372 = ((bool_t) 1);
									}
								else
									{	/* SawC/code.scm 295 */
										BgL_testz00_5372 =
											bigloo_strcmp(BgL_namez00_2752,
											BGl_string5705z00zzsaw_c_codez00);
									}
							}
						if (BgL_testz00_5372)
							{	/* SawC/code.scm 297 */
								obj_t BgL_arg5354z00_2757;

								{	/* SawC/code.scm 297 */
									obj_t BgL_res5542z00_3772;

									{	/* SawC/code.scm 297 */
										obj_t BgL_auxz00_5378;

										BgL_auxz00_5378 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res5542z00_3772 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5378);
									}
									BgL_arg5354z00_2757 = BgL_res5542z00_3772;
								}
								bgl_display_string(BGl_string5706z00zzsaw_c_codez00,
									BgL_arg5354z00_2757);
							}
						else
							{	/* SawC/code.scm 294 */
								BFALSE;
							}
					}
					BGl_genzd2argszd2zzsaw_c_codez00(BgL_argsz00_2749);
					{	/* SawC/code.scm 299 */
						obj_t BgL_arg5358z00_2761;

						{	/* SawC/code.scm 299 */
							obj_t BgL_res5543z00_3776;

							{	/* SawC/code.scm 299 */
								obj_t BgL_auxz00_5383;

								BgL_auxz00_5383 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res5543z00_3776 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5383);
							}
							BgL_arg5358z00_2761 = BgL_res5543z00_3776;
						}
						return
							bgl_display_string(BGl_string5589z00zzsaw_c_codez00,
							BgL_arg5358z00_2761);
					}
				}
			}
		}
	}



/* gen-expr-rtl_switch4716 */
	obj_t BGl_genzd2exprzd2rtl_switch4716z00zzsaw_c_codez00(obj_t BgL_envz00_4012,
		obj_t BgL_funz00_4013, obj_t BgL_argsz00_4014)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 272 */
			{
				BgL_rtl_switchz00_bglt BgL_funz00_2704;

				obj_t BgL_argsz00_2705;

				BgL_funz00_2704 = (BgL_rtl_switchz00_bglt) (BgL_funz00_4013);
				BgL_argsz00_2705 = BgL_argsz00_4014;
				{	/* SawC/code.scm 273 */
					obj_t BgL_patsz00_2708;

					{
						BgL_rtl_selectz00_bglt BgL_auxz00_5388;

						BgL_auxz00_5388 = (BgL_rtl_selectz00_bglt) (BgL_funz00_2704);
						BgL_patsz00_2708 =
							(((BgL_rtl_selectz00_bglt) CREF(BgL_auxz00_5388))->
							BgL_patternsz00);
					}
					{	/* SawC/code.scm 274 */
						obj_t BgL_arg5324z00_2710;

						{	/* SawC/code.scm 274 */
							obj_t BgL_res5537z00_3731;

							{	/* SawC/code.scm 274 */
								obj_t BgL_auxz00_5391;

								BgL_auxz00_5391 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res5537z00_3731 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5391);
							}
							BgL_arg5324z00_2710 = BgL_res5537z00_3731;
						}
						bgl_display_string(BGl_string5707z00zzsaw_c_codez00,
							BgL_arg5324z00_2710);
					}
					BGl_genzd2regzd2zzsaw_c_codez00(CAR(BgL_argsz00_2705));
					{	/* SawC/code.scm 276 */
						obj_t BgL_arg5327z00_2713;

						{	/* SawC/code.scm 276 */
							obj_t BgL_res5538z00_3736;

							{	/* SawC/code.scm 276 */
								obj_t BgL_auxz00_5397;

								BgL_auxz00_5397 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res5538z00_3736 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5397);
							}
							BgL_arg5327z00_2713 = BgL_res5538z00_3736;
						}
						bgl_display_string(BGl_string5708z00zzsaw_c_codez00,
							BgL_arg5327z00_2713);
					}
					{	/* SawC/code.scm 277 */
						obj_t BgL_g4703z00_2714;

						BgL_g4703z00_2714 =
							(((BgL_rtl_switchz00_bglt) CREF(BgL_funz00_2704))->BgL_labelsz00);
						{
							obj_t BgL_ll4700z00_2716;

							obj_t BgL_ll4701z00_2717;

							BgL_ll4700z00_2716 = BgL_patsz00_2708;
							BgL_ll4701z00_2717 = BgL_g4703z00_2714;
						BgL_zc3anonymousza35328ze3z83_2718:
							if (NULLP(BgL_ll4700z00_2716))
								{	/* SawC/code.scm 277 */
									((bool_t) 1);
								}
							else
								{	/* SawC/code.scm 277 */
									{	/* SawC/code.scm 285 */
										obj_t BgL_patz00_2720;

										obj_t BgL_labz00_2721;

										BgL_patz00_2720 = CAR(BgL_ll4700z00_2716);
										BgL_labz00_2721 = CAR(BgL_ll4701z00_2717);
										if ((BgL_patz00_2720 == CNST_TABLE_REF(((long) 6))))
											{	/* SawC/code.scm 279 */
												obj_t BgL_list5331z00_2723;

												BgL_list5331z00_2723 =
													MAKE_PAIR(BGl_string5709z00zzsaw_c_codez00, BNIL);
												BGl_displayza2za2zz__r4_output_6_10_3z00
													(BgL_list5331z00_2723);
											}
										else
											{
												obj_t BgL_l4698z00_2725;

												{	/* SawC/code.scm 280 */
													bool_t BgL_auxz00_5411;

													BgL_l4698z00_2725 = BgL_patz00_2720;
												BgL_zc3anonymousza35332ze3z83_2726:
													if (PAIRP(BgL_l4698z00_2725))
														{	/* SawC/code.scm 280 */
															{	/* SawC/code.scm 283 */
																obj_t BgL_nz00_2728;

																BgL_nz00_2728 = CAR(BgL_l4698z00_2725);
																{	/* SawC/code.scm 281 */
																	obj_t BgL_arg5335z00_2730;

																	{	/* SawC/code.scm 281 */
																		obj_t BgL_res5539z00_3746;

																		{	/* SawC/code.scm 281 */
																			obj_t BgL_auxz00_5415;

																			BgL_auxz00_5415 =
																				BGL_CURRENT_DYNAMIC_ENV();
																			BgL_res5539z00_3746 =
																				BGL_ENV_CURRENT_OUTPUT_PORT
																				(BgL_auxz00_5415);
																		}
																		BgL_arg5335z00_2730 = BgL_res5539z00_3746;
																	}
																	bgl_display_string
																		(BGl_string5710z00zzsaw_c_codez00,
																		BgL_arg5335z00_2730);
																}
																BGl_emitzd2atomzd2valuez00zzbackend_c_emitz00
																	(BgL_nz00_2728);
																{	/* SawC/code.scm 283 */
																	obj_t BgL_arg5337z00_2732;

																	{	/* SawC/code.scm 283 */
																		obj_t BgL_res5540z00_3750;

																		{	/* SawC/code.scm 283 */
																			obj_t BgL_auxz00_5420;

																			BgL_auxz00_5420 =
																				BGL_CURRENT_DYNAMIC_ENV();
																			BgL_res5540z00_3750 =
																				BGL_ENV_CURRENT_OUTPUT_PORT
																				(BgL_auxz00_5420);
																		}
																		BgL_arg5337z00_2732 = BgL_res5540z00_3750;
																	}
																	bgl_display_string
																		(BGl_string5595z00zzsaw_c_codez00,
																		BgL_arg5337z00_2732);
																}
															}
															{
																obj_t BgL_l4698z00_5424;

																BgL_l4698z00_5424 = CDR(BgL_l4698z00_2725);
																BgL_l4698z00_2725 = BgL_l4698z00_5424;
																goto BgL_zc3anonymousza35332ze3z83_2726;
															}
														}
													else
														{	/* SawC/code.scm 280 */
															BgL_auxz00_5411 = ((bool_t) 1);
														}
													BBOOL(BgL_auxz00_5411);
												}
											}
										{	/* SawC/code.scm 285 */
											int BgL_arg5340z00_2736;

											{
												BgL_blockz00_bglt BgL_auxz00_5427;

												BgL_auxz00_5427 = (BgL_blockz00_bglt) (BgL_labz00_2721);
												BgL_arg5340z00_2736 =
													(((BgL_blockz00_bglt) CREF(BgL_auxz00_5427))->
													BgL_labelz00);
											}
											{	/* SawC/code.scm 285 */
												obj_t BgL_list5342z00_2738;

												{	/* SawC/code.scm 285 */
													obj_t BgL_arg5343z00_2739;

													{	/* SawC/code.scm 285 */
														obj_t BgL_arg5344z00_2740;

														BgL_arg5344z00_2740 =
															MAKE_PAIR(BGl_string5711z00zzsaw_c_codez00, BNIL);
														BgL_arg5343z00_2739 =
															MAKE_PAIR(BINT(BgL_arg5340z00_2736),
															BgL_arg5344z00_2740);
													}
													BgL_list5342z00_2738 =
														MAKE_PAIR(BGl_string5712z00zzsaw_c_codez00,
														BgL_arg5343z00_2739);
												}
												BGl_displayza2za2zz__r4_output_6_10_3z00
													(BgL_list5342z00_2738);
									}}}
									{
										obj_t BgL_ll4701z00_5437;

										obj_t BgL_ll4700z00_5435;

										BgL_ll4700z00_5435 = CDR(BgL_ll4700z00_2716);
										BgL_ll4701z00_5437 = CDR(BgL_ll4701z00_2717);
										BgL_ll4701z00_2717 = BgL_ll4701z00_5437;
										BgL_ll4700z00_2716 = BgL_ll4700z00_5435;
										goto BgL_zc3anonymousza35328ze3z83_2718;
									}
								}
						}
					}
					{	/* SawC/code.scm 288 */
						obj_t BgL_arg5348z00_2745;

						{	/* SawC/code.scm 288 */
							obj_t BgL_res5541z00_3758;

							{	/* SawC/code.scm 288 */
								obj_t BgL_auxz00_5439;

								BgL_auxz00_5439 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res5541z00_3758 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5439);
							}
							BgL_arg5348z00_2745 = BgL_res5541z00_3758;
						}
						return
							bgl_display_string(BGl_string5713z00zzsaw_c_codez00,
							BgL_arg5348z00_2745);
					}
				}
			}
		}
	}



/* gen-expr-rtl_pragma4714 */
	obj_t BGl_genzd2exprzd2rtl_pragma4714z00zzsaw_c_codez00(obj_t BgL_envz00_4015,
		obj_t BgL_funz00_4016, obj_t BgL_argsz00_4017)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 267 */
			{
				BgL_rtl_pragmaz00_bglt BgL_funz00_2695;

				obj_t BgL_argsz00_2696;

				BgL_funz00_2695 = (BgL_rtl_pragmaz00_bglt) (BgL_funz00_4016);
				BgL_argsz00_2696 = BgL_argsz00_4017;
				{	/* SawC/code.scm 268 */
					obj_t BgL_arg5319z00_3721;

					BgL_arg5319z00_3721 =
						(((BgL_rtl_pragmaz00_bglt) CREF(BgL_funz00_2695))->BgL_formatz00);
					BGl_emitzd2pragmazd2zzsaw_c_codez00(BgL_arg5319z00_3721,
						BgL_argsz00_2696);
				}
				{	/* SawC/code.scm 268 */
					obj_t BgL_arg5321z00_3723;

					{	/* SawC/code.scm 268 */
						obj_t BgL_res5536z00_3726;

						{	/* SawC/code.scm 268 */
							obj_t BgL_auxz00_5446;

							BgL_auxz00_5446 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res5536z00_3726 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5446);
						}
						BgL_arg5321z00_3723 = BgL_res5536z00_3726;
					}
					return
						bgl_display_string(BGl_string5594z00zzsaw_c_codez00,
						BgL_arg5321z00_3723);
				}
			}
		}
	}



/* gen-expr-rtl_protect4712 */
	obj_t BGl_genzd2exprzd2rtl_protect4712z00zzsaw_c_codez00(obj_t
		BgL_envz00_4018, obj_t BgL_funz00_4019, obj_t BgL_argsz00_4020)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 260 */
			{
				BgL_rtl_protectz00_bglt BgL_funz00_2683;

				obj_t BgL_argsz00_2684;

				BgL_funz00_2683 = (BgL_rtl_protectz00_bglt) (BgL_funz00_4019);
				BgL_argsz00_2684 = BgL_argsz00_4020;
				{	/* SawC/code.scm 262 */
					obj_t BgL_arg5313z00_2688;

					{	/* SawC/code.scm 262 */
						obj_t BgL_res5533z00_3710;

						{	/* SawC/code.scm 262 */
							obj_t BgL_auxz00_5451;

							BgL_auxz00_5451 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res5533z00_3710 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5451);
						}
						BgL_arg5313z00_2688 = BgL_res5533z00_3710;
					}
					bgl_display_string(BGl_string5714z00zzsaw_c_codez00,
						BgL_arg5313z00_2688);
				}
				{	/* SawC/code.scm 263 */
					obj_t BgL_arg5315z00_2690;

					{	/* SawC/code.scm 263 */
						obj_t BgL_res5534z00_3714;

						{	/* SawC/code.scm 263 */
							obj_t BgL_auxz00_5455;

							BgL_auxz00_5455 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res5534z00_3714 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5455);
						}
						BgL_arg5315z00_2690 = BgL_res5534z00_3714;
					}
					bgl_display_string(BGl_string5715z00zzsaw_c_codez00,
						BgL_arg5315z00_2690);
				}
				{	/* SawC/code.scm 264 */
					obj_t BgL_arg5317z00_2692;

					{	/* SawC/code.scm 264 */
						obj_t BgL_res5535z00_3718;

						{	/* SawC/code.scm 264 */
							obj_t BgL_auxz00_5459;

							BgL_auxz00_5459 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res5535z00_3718 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5459);
						}
						BgL_arg5317z00_2692 = BgL_res5535z00_3718;
					}
					return
						bgl_display_string(BGl_string5716z00zzsaw_c_codez00,
						BgL_arg5317z00_2692);
				}
			}
		}
	}



/* gen-expr-rtl_funcall4710 */
	obj_t BGl_genzd2exprzd2rtl_funcall4710z00zzsaw_c_codez00(obj_t
		BgL_envz00_4021, obj_t BgL_funz00_4022, obj_t BgL_argsz00_4023)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 240 */
			{
				BgL_rtl_funcallz00_bglt BgL_funz00_2668;

				obj_t BgL_argsz00_2669;

				BgL_funz00_2668 = (BgL_rtl_funcallz00_bglt) (BgL_funz00_4022);
				BgL_argsz00_2669 = BgL_argsz00_4023;
				if (CBOOL(BGl_za2stdcza2z00zzengine_paramz00))
					{	/* SawC/code.scm 241 */
						{	/* SawC/code.scm 242 */
							obj_t BgL_arg5303z00_2673;

							{	/* SawC/code.scm 242 */
								obj_t BgL_res5529z00_3693;

								{	/* SawC/code.scm 242 */
									obj_t BgL_auxz00_5466;

									BgL_auxz00_5466 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res5529z00_3693 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5466);
								}
								BgL_arg5303z00_2673 = BgL_res5529z00_3693;
							}
							bgl_display_string(BGl_string5717z00zzsaw_c_codez00,
								BgL_arg5303z00_2673);
						}
						BGl_genzd2regzd2zzsaw_c_codez00(CAR(BgL_argsz00_2669));
						{	/* SawC/code.scm 244 */
							obj_t BgL_arg5306z00_2676;

							{	/* SawC/code.scm 244 */
								obj_t BgL_res5530z00_3698;

								{	/* SawC/code.scm 244 */
									obj_t BgL_auxz00_5472;

									BgL_auxz00_5472 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res5530z00_3698 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5472);
								}
								BgL_arg5306z00_2676 = BgL_res5530z00_3698;
							}
							bgl_display_string(BGl_string5718z00zzsaw_c_codez00,
								BgL_arg5306z00_2676);
						}
						BGl_genzd2Xfuncallzd2zzsaw_c_codez00
							(BGl_string5594z00zzsaw_c_codez00, BgL_argsz00_2669,
							((bool_t) 1));
						{	/* SawC/code.scm 246 */
							obj_t BgL_arg5308z00_2678;

							{	/* SawC/code.scm 246 */
								obj_t BgL_res5531z00_3702;

								{	/* SawC/code.scm 246 */
									obj_t BgL_auxz00_5477;

									BgL_auxz00_5477 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res5531z00_3702 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5477);
								}
								BgL_arg5308z00_2678 = BgL_res5531z00_3702;
							}
							bgl_display_string(BGl_string5719z00zzsaw_c_codez00,
								BgL_arg5308z00_2678);
						}
						BGl_genzd2Xfuncallzd2zzsaw_c_codez00
							(BGl_string5594z00zzsaw_c_codez00, BgL_argsz00_2669,
							((bool_t) 0));
						{	/* SawC/code.scm 248 */
							obj_t BgL_arg5310z00_2680;

							{	/* SawC/code.scm 248 */
								obj_t BgL_res5532z00_3706;

								{	/* SawC/code.scm 248 */
									obj_t BgL_auxz00_5482;

									BgL_auxz00_5482 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res5532z00_3706 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5482);
								}
								BgL_arg5310z00_2680 = BgL_res5532z00_3706;
							}
							return
								bgl_display_string(BGl_string5589z00zzsaw_c_codez00,
								BgL_arg5310z00_2680);
						}
					}
				else
					{	/* SawC/code.scm 241 */
						return
							BGl_genzd2Xfuncallzd2zzsaw_c_codez00
							(BGl_string5594z00zzsaw_c_codez00, BgL_argsz00_2669,
							((bool_t) 1));
					}
			}
		}
	}



/* gen-expr-rtl_lightfu4708 */
	obj_t BGl_genzd2exprzd2rtl_lightfu4708z00zzsaw_c_codez00(obj_t
		BgL_envz00_4024, obj_t BgL_funz00_4025, obj_t BgL_argsz00_4026)
	{
		AN_OBJECT;
		{	/* SawC/code.scm 237 */
			{
				BgL_rtl_lightfuncallz00_bglt BgL_funz00_2662;

				obj_t BgL_argsz00_2663;

				BgL_funz00_2662 = (BgL_rtl_lightfuncallz00_bglt) (BgL_funz00_4025);
				BgL_argsz00_2663 = BgL_argsz00_4026;
				return
					BGl_genzd2Xfuncallzd2zzsaw_c_codez00(BGl_string5720z00zzsaw_c_codez00,
					BgL_argsz00_2663, ((bool_t) 0));
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_c_codez00()
	{
		AN_OBJECT;
		{	/* SawC/code.scm 1 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string5721z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5721z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5721z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5721z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string5721z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string5721z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string5721z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string5721z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzcnst_allocz00(((long) 355177025),
				BSTRING_TO_STRING(BGl_string5721z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string5721z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string5721z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_cvmz00(((long) 52967726),
				BSTRING_TO_STRING(BGl_string5721z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(((long) 185927088),
				BSTRING_TO_STRING(BGl_string5721z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string5721z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_woodcutterz00(((long) 191999361),
				BSTRING_TO_STRING(BGl_string5721z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(((long) 345795750),
				BSTRING_TO_STRING(BGl_string5721z00zzsaw_c_codez00));
			BGl_modulezd2initializa7ationz75zzsaw_exprz00(((long) 159754019),
				BSTRING_TO_STRING(BGl_string5721z00zzsaw_c_codez00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_registerzd2allocationzd2(((long)
					167519689), BSTRING_TO_STRING(BGl_string5721z00zzsaw_c_codez00));
		}
	}

#ifdef __cplusplus
}
#endif
