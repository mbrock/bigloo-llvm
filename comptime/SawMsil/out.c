/*===========================================================================*/
/*   (SawMsil/out.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMsil/out.scm)*/
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


	BGL_EXPORTED_DECL obj_t BGl_remz00zzmsil_outz00(BgL_dotnetz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_openzd2tryzd2zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl__pushzd2intzd2zzmsil_outz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_declarezd2fieldzd2zzmsil_outz00(BgL_dotnetz00_bglt, BgL_slotz00_bglt);
	static obj_t BGl__newarrayz00zzmsil_outz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		long);
	static obj_t BGl__closezd2tryzd2zzmsil_outz00(obj_t, obj_t, obj_t);
	static obj_t BGl__getzd2typezd2namez00zzmsil_outz00(obj_t, obj_t);
	static obj_t BGl__storezd2fieldzd2zzmsil_outz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_getzd2fieldzd2typez00zzbackend_cplibz00(BgL_slotz00_bglt);
	static obj_t BGl__loadzd2vectorzd2lengthz00zzmsil_outz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_printzd2infozd2zzmsil_outz00(BgL_dotnetz00_bglt,
		obj_t);
	static obj_t BGl__pushzd2stringzd2zzmsil_outz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_castclassz00zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_subz00zzmsil_outz00(BgL_dotnetz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_pushzd2numzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_loadzd2globalzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_isinstz00zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl__addz00zzmsil_outz00(obj_t, obj_t);
	static obj_t BGl_getzd2typezd2namez00zzmsil_outz00(obj_t);
	static obj_t BGl__openzd2tryzd2zzmsil_outz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_loadzd2vectorzd2lengthz00zzmsil_outz00(BgL_dotnetz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_bitnotz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_cnstzd2initzd2zzmsil_outz00();
	static obj_t BGl__closezd2methodzd2zzmsil_outz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_brtruez00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t);
	static obj_t BGl__newobjz00zzmsil_outz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__rethrowz00zzmsil_outz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_libcallz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__beqz00zzmsil_outz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__openzd2namespacezd2zzmsil_outz00(obj_t, obj_t);
	static obj_t BGl__bgez00zzmsil_outz00(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__bgtz00zzmsil_outz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__blez00zzmsil_outz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__storezd2varzd2zzmsil_outz00(obj_t, obj_t, obj_t);
	static obj_t BGl__switchz00zzmsil_outz00(obj_t, obj_t, obj_t);
	static obj_t BGl__bltz00zzmsil_outz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__bnez00zzmsil_outz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_openzd2methodzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__ceqz00zzmsil_outz00(obj_t, obj_t);
	static obj_t BGl__openzd2classzd2zzmsil_outz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_declarezd2tailzd2zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl__cgtz00zzmsil_outz00(obj_t, obj_t);
	static obj_t BGl__brz00zzmsil_outz00(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t bigloo_strncmp(obj_t, obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzmsil_outz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmsil_namesz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_dotnet_classz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__pushzd2numzd2zzmsil_outz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__cltz00zzmsil_outz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_closezd2classzd2zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl__loadzd2globalzd2zzmsil_outz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_stdzd2typenamezd2zzmsil_namesz00(obj_t);
	static obj_t BGl__divz00zzmsil_outz00(obj_t, obj_t);
	static obj_t BGl__declarezd2globalzd2zzmsil_outz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_callzd2globalzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_brfalsez00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_addz00zzmsil_outz00(BgL_dotnetz00_bglt);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__openzd2methodzd2constructorz00zzmsil_outz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__dupz00zzmsil_outz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_leavez00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	static obj_t BGl__bitxorz00zzmsil_outz00(obj_t, obj_t);
	static obj_t BGl__castclassz00zzmsil_outz00(obj_t, obj_t, obj_t);
	static obj_t BGl__storezd2globalzd2zzmsil_outz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_newobjz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_beqz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bgez00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_callvirtz00zzmsil_outz00(BgL_dotnetz00_bglt,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_globalzd2simplenamezd2zzmsil_namesz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_bgtz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t);
	static obj_t BGl__openzd2methodzd2zzmsil_outz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__ldnullz00zzmsil_outz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_blez00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_callzd2superzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2methodzd2constructorz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bltz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bnez00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_declarezd2localszd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ceqz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl__libcallz00zzmsil_outz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_switchz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2methodzd2virtualz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_suffixz00zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cgtz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl__bitandz00zzmsil_outz00(obj_t, obj_t);
	static obj_t BGl__closezd2classzd2zzmsil_outz00(obj_t, obj_t);
	static obj_t BGl__leavez00zzmsil_outz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, obj_t);
	static obj_t BGl__openzd2methodzd2classzd2constructorzd2zzmsil_outz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cltz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl__printzd2infozd2zzmsil_outz00(obj_t, obj_t, obj_t);
	static obj_t BGl__closezd2namespacezd2zzmsil_outz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bitorz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl__callzd2globalzd2zzmsil_outz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_divz00zzmsil_outz00(BgL_dotnetz00_bglt);
	BGL_IMPORT obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_brz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzmsil_outz00();
	BGL_EXPORTED_DECL obj_t BGl_loadzd2fieldzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_storezd2vectorzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		obj_t);
	static obj_t BGl_zc3anonymousza34824ze3z83zzmsil_outz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_pushzd2constant2zd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	static obj_t BGl__callvirtz00zzmsil_outz00(obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dupz00zzmsil_outz00(BgL_dotnetz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_bitxorz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl__brfalsez00zzmsil_outz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__bitorz00zzmsil_outz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmsil_outz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzmsil_outz00();
	BGL_EXPORTED_DECL obj_t BGl_ldnullz00zzmsil_outz00(BgL_dotnetz00_bglt);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_callz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_loadzd2parzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		int);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_EXPORTED_DECL obj_t BGl_bitandz00zzmsil_outz00(BgL_dotnetz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_openzd2catchzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_declarezd2maxstackzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	static obj_t BGl__negz00zzmsil_outz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		obj_t);
	static obj_t BGl__declarezd2tailzd2zzmsil_outz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_loadzd2vectorzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzmsil_outz00();
	BGL_EXPORTED_DECL obj_t BGl_throwz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl__mulz00zzmsil_outz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_commentz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_storezd2parzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		int);
	BGL_EXPORTED_DECL obj_t
		BGl_closezd2methodzd2zzmsil_outz00(BgL_dotnetz00_bglt);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	static obj_t BGl__declarezd2entrypointzd2zzmsil_outz00(obj_t, obj_t);
	static obj_t BGl__returnz00zzmsil_outz00(obj_t, obj_t);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	static obj_t BGl__callzd2superzd2zzmsil_outz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__loadzd2parzd2zzmsil_outz00(obj_t, obj_t, obj_t);
	static obj_t BGl_declarezd2listzd2zzmsil_outz00(obj_t, obj_t, obj_t);
	static obj_t BGl__pushzd2constantzd2zzmsil_outz00(obj_t, obj_t, obj_t);
	static obj_t BGl__throwz00zzmsil_outz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_declarezd2entrypointzd2zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl__popz00zzmsil_outz00(obj_t, obj_t);
	static obj_t BGl__openzd2globalzd2methodz00zzmsil_outz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2namespacezd2zzmsil_outz00(BgL_dotnetz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_closezd2tryzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		obj_t);
	static obj_t BGl__declarezd2localszd2zzmsil_outz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2methodzd2classzd2constructorzd2zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl__remz00zzmsil_outz00(obj_t, obj_t);
	static obj_t BGl__call5040z00zzmsil_outz00(obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_pushzd2constantzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	static obj_t BGl__loadzd2vectorzd2zzmsil_outz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_negz00zzmsil_outz00(BgL_dotnetz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2globalzd2methodz00zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl__loadzd2fieldzd2zzmsil_outz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_loadzd2varzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		int);
	BGL_EXPORTED_DECL obj_t
		BGl_closezd2namespacezd2zzmsil_outz00(BgL_dotnetz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_mulz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl__declarezd2maxstackzd2zzmsil_outz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_openzd2classzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pushzd2intzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_labelz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	BGL_EXPORTED_DECL obj_t
		BGl_declarezd2globalzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt);
	static bool_t BGl_stroutz00zzmsil_outz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_newarrayz00zzmsil_outz00(BgL_dotnetz00_bglt,
		obj_t);
	static obj_t BGl__pushzd2constant2zd2zzmsil_outz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34936ze3z83zzmsil_outz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34938ze3z83zzmsil_outz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_storezd2fieldzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		obj_t, obj_t, obj_t);
	static obj_t BGl__isinstz00zzmsil_outz00(obj_t, obj_t, obj_t);
	static obj_t BGl__openzd2methodzd2virtualz00zzmsil_outz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__subz00zzmsil_outz00(obj_t, obj_t);
	static obj_t BGl_extensionz00zzmsil_outz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_storezd2globalzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl__storezd2vectorzd2zzmsil_outz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pushzd2stringzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rethrowz00zzmsil_outz00(BgL_dotnetz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_returnz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl__callzd2superzd2constructorz00zzmsil_outz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__callz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__commentz00zzmsil_outz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_storezd2varzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		int);
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2superzd2constructorz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t);
	static obj_t BGl__bitnotz00zzmsil_outz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl__declarezd2fieldzd2zzmsil_outz00(obj_t, obj_t, obj_t);
	static obj_t BGl__brtruez00zzmsil_outz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_popz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmsil_outz00();
	static obj_t BGl__storezd2parzd2zzmsil_outz00(obj_t, obj_t, obj_t);
	extern obj_t
		BGl_za2dotnetzd2pnetzd2workaroundzd2switchza2zd2zzengine_paramz00;
	static obj_t BGl__labelz00zzmsil_outz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2purifyza2z00zzengine_paramz00;
	static obj_t BGl__loadzd2varzd2zzmsil_outz00(obj_t, obj_t, obj_t);
	static obj_t BGl__openzd2catchzd2zzmsil_outz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t __cnst[29];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_loadzd2globalzd2envz00zzmsil_outz00,
		BgL_bgl__loadza7d2globalza7d5167z00, BGl__loadzd2globalzd2zzmsil_outz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_openzd2methodzd2envz00zzmsil_outz00,
		BgL_bgl__openza7d2methodza7d5168z00, BGl__openzd2methodzd2zzmsil_outz00, 0L,
		BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_dupzd2envzd2zzmsil_outz00,
		BgL_bgl__dupza700za7za7msil_ou5169za7, BGl__dupz00zzmsil_outz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_openzd2tryzd2envz00zzmsil_outz00,
		BgL_bgl__openza7d2tryza7d2za7za75170z00, BGl__openzd2tryzd2zzmsil_outz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_newarrayzd2envzd2zzmsil_outz00,
		BgL_bgl__newarrayza700za7za7ms5171za7, BGl__newarrayz00zzmsil_outz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_openzd2namespacezd2envz00zzmsil_outz00,
		BgL_bgl__openza7d2namespac5172za7, BGl__openzd2namespacezd2zzmsil_outz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_storezd2vectorzd2envz00zzmsil_outz00,
		BgL_bgl__storeza7d2vectorza75173z00, BGl__storezd2vectorzd2zzmsil_outz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitnotzd2envzd2zzmsil_outz00,
		BgL_bgl__bitnotza700za7za7msil5174za7, BGl__bitnotz00zzmsil_outz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_libcallzd2envzd2zzmsil_outz00,
		BgL_bgl__libcallza700za7za7msi5175za7, BGl__libcallz00zzmsil_outz00, 0L,
		BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_castclasszd2envzd2zzmsil_outz00,
		BgL_bgl__castclassza700za7za7m5176za7, BGl__castclassz00zzmsil_outz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bgezd2envzd2zzmsil_outz00,
		BgL_bgl__bgeza700za7za7msil_ou5177za7, BGl__bgez00zzmsil_outz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_brtruezd2envzd2zzmsil_outz00,
		BgL_bgl__brtrueza700za7za7msil5178za7, BGl__brtruez00zzmsil_outz00, 0L,
		BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_declarezd2maxstackzd2envz00zzmsil_outz00,
		BgL_bgl__declareza7d2maxst5179za7, BGl__declarezd2maxstackzd2zzmsil_outz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_declarezd2fieldzd2envz00zzmsil_outz00,
		BgL_bgl__declareza7d2field5180za7, BGl__declarezd2fieldzd2zzmsil_outz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_declarezd2entrypointzd2envz00zzmsil_outz00,
		BgL_bgl__declareza7d2entry5181za7,
		BGl__declarezd2entrypointzd2zzmsil_outz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pushzd2numzd2envz00zzmsil_outz00,
		BgL_bgl__pushza7d2numza7d2za7za75182z00, BGl__pushzd2numzd2zzmsil_outz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_declarezd2localszd2envz00zzmsil_outz00,
		BgL_bgl__declareza7d2local5183za7, BGl__declarezd2localszd2zzmsil_outz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bgtzd2envzd2zzmsil_outz00,
		BgL_bgl__bgtza700za7za7msil_ou5184za7, BGl__bgtz00zzmsil_outz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_getzd2typezd2namezd2envzd2zzmsil_outz00,
		BgL_bgl__getza7d2typeza7d2na5185z00, BGl__getzd2typezd2namez00zzmsil_outz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2methodzd2classzd2constructorzd2envz00zzmsil_outz00,
		BgL_bgl__openza7d2methodza7d5186z00,
		BGl__openzd2methodzd2classzd2constructorzd2zzmsil_outz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_callzd2envzd2zzmsil_outz00,
		BgL_bgl__call5040za700za7za7ms5187za7, BGl__call5040z00zzmsil_outz00, 0L,
		BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_loadzd2varzd2envz00zzmsil_outz00,
		BgL_bgl__loadza7d2varza7d2za7za75188z00, BGl__loadzd2varzd2zzmsil_outz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_switchzd2envzd2zzmsil_outz00,
		BgL_bgl__switchza700za7za7msil5189za7, BGl__switchz00zzmsil_outz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_divzd2envzd2zzmsil_outz00,
		BgL_bgl__divza700za7za7msil_ou5190za7, BGl__divz00zzmsil_outz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_loadzd2parzd2envz00zzmsil_outz00,
		BgL_bgl__loadza7d2parza7d2za7za75191z00, BGl__loadzd2parzd2zzmsil_outz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pushzd2stringzd2envz00zzmsil_outz00,
		BgL_bgl__pushza7d2stringza7d5192z00, BGl__pushzd2stringzd2zzmsil_outz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pushzd2constantzd2envz00zzmsil_outz00,
		BgL_bgl__pushza7d2constant5193za7, BGl__pushzd2constantzd2zzmsil_outz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_blezd2envzd2zzmsil_outz00,
		BgL_bgl__bleza700za7za7msil_ou5194za7, BGl__blez00zzmsil_outz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pushzd2intzd2envz00zzmsil_outz00,
		BgL_bgl__pushza7d2intza7d2za7za75195z00, BGl__pushzd2intzd2zzmsil_outz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_newobjzd2envzd2zzmsil_outz00,
		BgL_bgl__newobjza700za7za7msil5196za7, BGl__newobjz00zzmsil_outz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_callzd2superzd2envz00zzmsil_outz00,
		BgL_bgl__callza7d2superza7d25197z00, BGl__callzd2superzd2zzmsil_outz00, 0L,
		BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_brzd2envzd2zzmsil_outz00,
		BgL_bgl__brza700za7za7msil_out5198za7, BGl__brz00zzmsil_outz00, 0L, BUNSPEC,
		3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bltzd2envzd2zzmsil_outz00,
		BgL_bgl__bltza700za7za7msil_ou5199za7, BGl__bltz00zzmsil_outz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5068z00zzmsil_outz00,
		BgL_bgl_za7c3anonymousza7a345200z00,
		BGl_zc3anonymousza34824ze3z83zzmsil_outz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_callzd2globalzd2envz00zzmsil_outz00,
		BgL_bgl__callza7d2globalza7d5201z00, BGl__callzd2globalzd2zzmsil_outz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5141z00zzmsil_outz00,
		BgL_bgl_za7c3anonymousza7a345202z00,
		BGl_zc3anonymousza34936ze3z83zzmsil_outz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5142z00zzmsil_outz00,
		BgL_bgl_za7c3anonymousza7a345203z00,
		BGl_zc3anonymousza34938ze3z83zzmsil_outz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ceqzd2envzd2zzmsil_outz00,
		BgL_bgl__ceqza700za7za7msil_ou5204za7, BGl__ceqz00zzmsil_outz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string5041z00zzmsil_outz00,
		BgL_bgl_string5041za700za7za7m5205za7, "cannot get the typename", 23);
	      DEFINE_STRING(BGl_string5042z00zzmsil_outz00,
		BgL_bgl_string5042za700za7za7m5206za7, "(", 1);
	      DEFINE_STRING(BGl_string5043z00zzmsil_outz00,
		BgL_bgl_string5043za700za7za7m5207za7, ")", 1);
	      DEFINE_STRING(BGl_string5044z00zzmsil_outz00,
		BgL_bgl_string5044za700za7za7m5208za7, ",", 1);
	      DEFINE_STRING(BGl_string5045z00zzmsil_outz00,
		BgL_bgl_string5045za700za7za7m5209za7, "", 0);
	      DEFINE_STRING(BGl_string5046z00zzmsil_outz00,
		BgL_bgl_string5046za700za7za7m5210za7, "// ", 3);
	      DEFINE_STRING(BGl_string5047z00zzmsil_outz00,
		BgL_bgl_string5047za700za7za7m5211za7, " ", 1);
	      DEFINE_STRING(BGl_string5048z00zzmsil_outz00,
		BgL_bgl_string5048za700za7za7m5212za7, ".namespace '", 12);
	      DEFINE_STRING(BGl_string5050z00zzmsil_outz00,
		BgL_bgl_string5050za700za7za7m5213za7, "}", 1);
	      DEFINE_STRING(BGl_string5049z00zzmsil_outz00,
		BgL_bgl_string5049za700za7za7m5214za7, "' {", 3);
	      DEFINE_STRING(BGl_string5051z00zzmsil_outz00,
		BgL_bgl_string5051za700za7za7m5215za7, ".class ", 7);
	      DEFINE_STRING(BGl_string5052z00zzmsil_outz00,
		BgL_bgl_string5052za700za7za7m5216za7, "public", 6);
	      DEFINE_STRING(BGl_string5053z00zzmsil_outz00,
		BgL_bgl_string5053za700za7za7m5217za7, "private", 7);
	      DEFINE_STRING(BGl_string5054z00zzmsil_outz00,
		BgL_bgl_string5054za700za7za7m5218za7, " auto ansi '", 12);
	      DEFINE_STRING(BGl_string5055z00zzmsil_outz00,
		BgL_bgl_string5055za700za7za7m5219za7, "' extends ", 10);
	      DEFINE_STRING(BGl_string5056z00zzmsil_outz00,
		BgL_bgl_string5056za700za7za7m5220za7, " {", 2);
	      DEFINE_STRING(BGl_string5057z00zzmsil_outz00,
		BgL_bgl_string5057za700za7za7m5221za7, ".field public ", 14);
	      DEFINE_STRING(BGl_string5058z00zzmsil_outz00,
		BgL_bgl_string5058za700za7za7m5222za7, ".field ", 7);
	      DEFINE_STRING(BGl_string5060z00zzmsil_outz00,
		BgL_bgl_string5060za700za7za7m5223za7, ".method ", 8);
	      DEFINE_STRING(BGl_string5059z00zzmsil_outz00,
		BgL_bgl_string5059za700za7za7m5224za7, " static ", 8);
	      DEFINE_STRING(BGl_string5061z00zzmsil_outz00,
		BgL_bgl_string5061za700za7za7m5225za7, " cil managed {", 14);
	      DEFINE_STRING(BGl_string5062z00zzmsil_outz00,
		BgL_bgl_string5062za700za7za7m5226za7, " cil unmanaged {", 16);
	      DEFINE_STRING(BGl_string5063z00zzmsil_outz00,
		BgL_bgl_string5063za700za7za7m5227za7, ".ctor", 5);
	      DEFINE_STRING(BGl_string5064z00zzmsil_outz00,
		BgL_bgl_string5064za700za7za7m5228za7, ".cctor", 6);
	      DEFINE_STRING(BGl_string5065z00zzmsil_outz00,
		BgL_bgl_string5065za700za7za7m5229za7, "\t.entrypoint", 12);
	      DEFINE_STRING(BGl_string5066z00zzmsil_outz00,
		BgL_bgl_string5066za700za7za7m5230za7, "\t.maxstack\t", 11);
	      DEFINE_STRING(BGl_string5067z00zzmsil_outz00,
		BgL_bgl_string5067za700za7za7m5231za7, "\t.locals\t", 9);
	      DEFINE_STRING(BGl_string5070z00zzmsil_outz00,
		BgL_bgl_string5070za700za7za7m5232za7, "\tldstr\t\"", 8);
	      DEFINE_STRING(BGl_string5069z00zzmsil_outz00,
		BgL_bgl_string5069za700za7za7m5233za7, "\ttail.", 6);
	      DEFINE_STRING(BGl_string5071z00zzmsil_outz00,
		BgL_bgl_string5071za700za7za7m5234za7, "\"", 1);
	      DEFINE_STRING(BGl_string5072z00zzmsil_outz00,
		BgL_bgl_string5072za700za7za7m5235za7,
		"\tcall \tclass 'bigloo.bignum' 'bigloo.foreign'::'bgl_string_to_bignum'(class System.String)",
		90);
	      DEFINE_STRING(BGl_string5073z00zzmsil_outz00,
		BgL_bgl_string5073za700za7za7m5236za7, "\tldc.r4\t", 8);
	      DEFINE_STRING(BGl_string5074z00zzmsil_outz00,
		BgL_bgl_string5074za700za7za7m5237za7,
		"\tldc.r8  float64(0xFFF8000000000000)", 36);
	      DEFINE_STRING(BGl_string5075z00zzmsil_outz00,
		BgL_bgl_string5075za700za7za7m5238za7,
		"\tldc.r8  float64(0xFFF0000000000000)", 36);
	      DEFINE_STRING(BGl_string5076z00zzmsil_outz00,
		BgL_bgl_string5076za700za7za7m5239za7,
		"\tldc.r8  float64(0x7FF0000000000000)", 36);
	      DEFINE_STRING(BGl_string5077z00zzmsil_outz00,
		BgL_bgl_string5077za700za7za7m5240za7, "\tldc.r8\t", 8);
	      DEFINE_STRING(BGl_string5078z00zzmsil_outz00,
		BgL_bgl_string5078za700za7za7m5241za7, "\tldc.i8\t", 8);
	      DEFINE_STRING(BGl_string5080z00zzmsil_outz00,
		BgL_bgl_string5080za700za7za7m5242za7, ".s", 2);
	      DEFINE_STRING(BGl_string5079z00zzmsil_outz00,
		BgL_bgl_string5079za700za7za7m5243za7, "\tldc.i4", 7);
	      DEFINE_STRING(BGl_string5081z00zzmsil_outz00,
		BgL_bgl_string5081za700za7za7m5244za7, "\t", 1);
	      DEFINE_STRING(BGl_string5082z00zzmsil_outz00,
		BgL_bgl_string5082za700za7za7m5245za7, ".m1", 3);
	      DEFINE_STRING(BGl_string5083z00zzmsil_outz00,
		BgL_bgl_string5083za700za7za7m5246za7, ".", 1);
	      DEFINE_STRING(BGl_string5084z00zzmsil_outz00,
		BgL_bgl_string5084za700za7za7m5247za7, "\\\"", 2);
	      DEFINE_STRING(BGl_string5085z00zzmsil_outz00,
		BgL_bgl_string5085za700za7za7m5248za7, "\\\\", 2);
	      DEFINE_STRING(BGl_string5086z00zzmsil_outz00,
		BgL_bgl_string5086za700za7za7m5249za7, "\tldsfld\tclass 'bigloo.", 22);
	      DEFINE_STRING(BGl_string5087z00zzmsil_outz00,
		BgL_bgl_string5087za700za7za7m5250za7, "' 'bigloo.", 10);
	      DEFINE_STRING(BGl_string5088z00zzmsil_outz00,
		BgL_bgl_string5088za700za7za7m5251za7, "'::'_", 5);
	      DEFINE_STRING(BGl_string5100z00zzmsil_outz00,
		BgL_bgl_string5100za700za7za7m5252za7, "\tcall instance\t", 15);
	      DEFINE_STRING(BGl_string5090z00zzmsil_outz00,
		BgL_bgl_string5090za700za7za7m5253za7, "'::'", 4);
	      DEFINE_STRING(BGl_string5089z00zzmsil_outz00,
		BgL_bgl_string5089za700za7za7m5254za7, "'\n", 2);
	      DEFINE_STRING(BGl_string5101z00zzmsil_outz00,
		BgL_bgl_string5101za700za7za7m5255za7, "::.ctor", 7);
	      DEFINE_STRING(BGl_string5091z00zzmsil_outz00,
		BgL_bgl_string5091za700za7za7m5256za7, "\tldsfld\t", 8);
	      DEFINE_STRING(BGl_string5102z00zzmsil_outz00,
		BgL_bgl_string5102za700za7za7m5257za7, "\tcall\t", 6);
	      DEFINE_STRING(BGl_string5092z00zzmsil_outz00,
		BgL_bgl_string5092za700za7za7m5258za7, "\tstsfld\t", 8);
	      DEFINE_STRING(BGl_string5103z00zzmsil_outz00,
		BgL_bgl_string5103za700za7za7m5259za7, " '", 2);
	      DEFINE_STRING(BGl_string5093z00zzmsil_outz00,
		BgL_bgl_string5093za700za7za7m5260za7, ".s\t", 3);
	      DEFINE_STRING(BGl_string5104z00zzmsil_outz00,
		BgL_bgl_string5104za700za7za7m5261za7, "\tcallvirt instance\t", 19);
	      DEFINE_STRING(BGl_string5094z00zzmsil_outz00,
		BgL_bgl_string5094za700za7za7m5262za7, "\tldarg", 6);
	      DEFINE_STRING(BGl_string5105z00zzmsil_outz00,
		BgL_bgl_string5105za700za7za7m5263za7, "\tret", 4);
	      DEFINE_STRING(BGl_string5095z00zzmsil_outz00,
		BgL_bgl_string5095za700za7za7m5264za7, "\tstarg", 6);
	      DEFINE_STRING(BGl_string5106z00zzmsil_outz00,
		BgL_bgl_string5106za700za7za7m5265za7, "\tthrow", 6);
	      DEFINE_STRING(BGl_string5096z00zzmsil_outz00,
		BgL_bgl_string5096za700za7za7m5266za7, "\tldloc", 6);
	      DEFINE_STRING(BGl_string5107z00zzmsil_outz00,
		BgL_bgl_string5107za700za7za7m5267za7, "\trethrow", 8);
	      DEFINE_STRING(BGl_string5097z00zzmsil_outz00,
		BgL_bgl_string5097za700za7za7m5268za7, "\tstloc", 6);
	      DEFINE_STRING(BGl_string5108z00zzmsil_outz00,
		BgL_bgl_string5108za700za7za7m5269za7, ".try {", 6);
	      DEFINE_STRING(BGl_string5098z00zzmsil_outz00,
		BgL_bgl_string5098za700za7za7m5270za7, "'", 1);
	      DEFINE_STRING(BGl_string5110z00zzmsil_outz00,
		BgL_bgl_string5110za700za7za7m5271za7, " } catch ", 9);
	      DEFINE_STRING(BGl_string5109z00zzmsil_outz00,
		BgL_bgl_string5109za700za7za7m5272za7, "\tleave\t", 7);
	      DEFINE_STRING(BGl_string5099z00zzmsil_outz00,
		BgL_bgl_string5099za700za7za7m5273za7, "::'", 3);
	      DEFINE_STRING(BGl_string5111z00zzmsil_outz00,
		BgL_bgl_string5111za700za7za7m5274za7, " }", 2);
	      DEFINE_STRING(BGl_string5112z00zzmsil_outz00,
		BgL_bgl_string5112za700za7za7m5275za7, ":", 1);
	      DEFINE_STRING(BGl_string5113z00zzmsil_outz00,
		BgL_bgl_string5113za700za7za7m5276za7, "\tnewarr\t", 8);
	      DEFINE_STRING(BGl_string5114z00zzmsil_outz00,
		BgL_bgl_string5114za700za7za7m5277za7, "i1", 2);
	      DEFINE_STRING(BGl_string5115z00zzmsil_outz00,
		BgL_bgl_string5115za700za7za7m5278za7, "i2", 2);
	      DEFINE_STRING(BGl_string5116z00zzmsil_outz00,
		BgL_bgl_string5116za700za7za7m5279za7, "i4", 2);
	      DEFINE_STRING(BGl_string5117z00zzmsil_outz00,
		BgL_bgl_string5117za700za7za7m5280za7, "r4", 2);
	      DEFINE_STRING(BGl_string5118z00zzmsil_outz00,
		BgL_bgl_string5118za700za7za7m5281za7, "r8", 2);
	      DEFINE_STRING(BGl_string5120z00zzmsil_outz00,
		BgL_bgl_string5120za700za7za7m5282za7, "\tldelem.", 8);
	      DEFINE_STRING(BGl_string5119z00zzmsil_outz00,
		BgL_bgl_string5119za700za7za7m5283za7, "ref", 3);
	      DEFINE_STRING(BGl_string5121z00zzmsil_outz00,
		BgL_bgl_string5121za700za7za7m5284za7, "\tstelem.", 8);
	      DEFINE_STRING(BGl_string5122z00zzmsil_outz00,
		BgL_bgl_string5122za700za7za7m5285za7, "\tldlen", 6);
	      DEFINE_STRING(BGl_string5123z00zzmsil_outz00,
		BgL_bgl_string5123za700za7za7m5286za7, "\tconv.i4", 8);
	      DEFINE_STRING(BGl_string5124z00zzmsil_outz00,
		BgL_bgl_string5124za700za7za7m5287za7, "class ", 6);
	      DEFINE_STRING(BGl_string5125z00zzmsil_outz00,
		BgL_bgl_string5125za700za7za7m5288za7, "\tnewobj\tinstance void '", 23);
	      DEFINE_STRING(BGl_string5126z00zzmsil_outz00,
		BgL_bgl_string5126za700za7za7m5289za7, "'::.ctor", 8);
	      DEFINE_STRING(BGl_string5127z00zzmsil_outz00,
		BgL_bgl_string5127za700za7za7m5290za7, "\tldfld\t", 7);
	      DEFINE_STRING(BGl_string5128z00zzmsil_outz00,
		BgL_bgl_string5128za700za7za7m5291za7, "\tstfld\t", 7);
	      DEFINE_STRING(BGl_string5130z00zzmsil_outz00,
		BgL_bgl_string5130za700za7za7m5292za7, "\tisinst\t", 8);
	      DEFINE_STRING(BGl_string5129z00zzmsil_outz00,
		BgL_bgl_string5129za700za7za7m5293za7, "\tcastclass\t", 11);
	      DEFINE_STRING(BGl_string5131z00zzmsil_outz00,
		BgL_bgl_string5131za700za7za7m5294za7, "\tbr\t", 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_storezd2globalzd2envz00zzmsil_outz00,
		BgL_bgl__storeza7d2globalza75295z00, BGl__storezd2globalzd2zzmsil_outz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string5132z00zzmsil_outz00,
		BgL_bgl_string5132za700za7za7m5296za7, "\tbrfalse\t", 9);
	      DEFINE_STRING(BGl_string5133z00zzmsil_outz00,
		BgL_bgl_string5133za700za7za7m5297za7, "\tbrtrue\t", 8);
	      DEFINE_STRING(BGl_string5134z00zzmsil_outz00,
		BgL_bgl_string5134za700za7za7m5298za7, "\tbeq\t", 5);
	      DEFINE_STRING(BGl_string5135z00zzmsil_outz00,
		BgL_bgl_string5135za700za7za7m5299za7, "\tbne.un\t", 8);
	      DEFINE_STRING(BGl_string5136z00zzmsil_outz00,
		BgL_bgl_string5136za700za7za7m5300za7, "\tblt\t", 5);
	      DEFINE_STRING(BGl_string5137z00zzmsil_outz00,
		BgL_bgl_string5137za700za7za7m5301za7, "\tbgt\t", 5);
	      DEFINE_STRING(BGl_string5138z00zzmsil_outz00,
		BgL_bgl_string5138za700za7za7m5302za7, "\tbge\t", 5);
	      DEFINE_STRING(BGl_string5140z00zzmsil_outz00,
		BgL_bgl_string5140za700za7za7m5303za7, "\tswitch\t", 8);
	      DEFINE_STRING(BGl_string5139z00zzmsil_outz00,
		BgL_bgl_string5139za700za7za7m5304za7, "\tble\t", 5);
	      DEFINE_STRING(BGl_string5143z00zzmsil_outz00,
		BgL_bgl_string5143za700za7za7m5305za7, "BUGPNET", 7);
	      DEFINE_STRING(BGl_string5144z00zzmsil_outz00,
		BgL_bgl_string5144za700za7za7m5306za7, ":\tbr\t", 5);
	      DEFINE_STRING(BGl_string5145z00zzmsil_outz00,
		BgL_bgl_string5145za700za7za7m5307za7, "_def", 4);
	      DEFINE_STRING(BGl_string5146z00zzmsil_outz00,
		BgL_bgl_string5146za700za7za7m5308za7, "_def:", 5);
	      DEFINE_STRING(BGl_string5147z00zzmsil_outz00,
		BgL_bgl_string5147za700za7za7m5309za7, "\tadd", 4);
	      DEFINE_STRING(BGl_string5148z00zzmsil_outz00,
		BgL_bgl_string5148za700za7za7m5310za7, "\tsub", 4);
	      DEFINE_STRING(BGl_string5150z00zzmsil_outz00,
		BgL_bgl_string5150za700za7za7m5311za7, "\tdiv", 4);
	      DEFINE_STRING(BGl_string5149z00zzmsil_outz00,
		BgL_bgl_string5149za700za7za7m5312za7, "\tmul", 4);
	      DEFINE_STRING(BGl_string5151z00zzmsil_outz00,
		BgL_bgl_string5151za700za7za7m5313za7, "\tneg", 4);
	      DEFINE_STRING(BGl_string5152z00zzmsil_outz00,
		BgL_bgl_string5152za700za7za7m5314za7, "\trem", 4);
	      DEFINE_STRING(BGl_string5153z00zzmsil_outz00,
		BgL_bgl_string5153za700za7za7m5315za7, "\tand", 4);
	      DEFINE_STRING(BGl_string5154z00zzmsil_outz00,
		BgL_bgl_string5154za700za7za7m5316za7, "\tor", 3);
	      DEFINE_STRING(BGl_string5155z00zzmsil_outz00,
		BgL_bgl_string5155za700za7za7m5317za7, "\txor", 4);
	      DEFINE_STRING(BGl_string5156z00zzmsil_outz00,
		BgL_bgl_string5156za700za7za7m5318za7, "\tnot", 4);
	      DEFINE_STRING(BGl_string5157z00zzmsil_outz00,
		BgL_bgl_string5157za700za7za7m5319za7, "\tldnull", 7);
	      DEFINE_STRING(BGl_string5158z00zzmsil_outz00,
		BgL_bgl_string5158za700za7za7m5320za7, "\tpop", 4);
	      DEFINE_STRING(BGl_string5160z00zzmsil_outz00,
		BgL_bgl_string5160za700za7za7m5321za7, "\tceq", 4);
	      DEFINE_STRING(BGl_string5159z00zzmsil_outz00,
		BgL_bgl_string5159za700za7za7m5322za7, "\tdup", 4);
	      DEFINE_STRING(BGl_string5161z00zzmsil_outz00,
		BgL_bgl_string5161za700za7za7m5323za7, "\tclt", 4);
	      DEFINE_STRING(BGl_string5162z00zzmsil_outz00,
		BgL_bgl_string5162za700za7za7m5324za7, "\tcgt", 4);
	      DEFINE_STRING(BGl_string5163z00zzmsil_outz00,
		BgL_bgl_string5163za700za7za7m5325za7, "msil_out", 8);
	      DEFINE_STRING(BGl_string5164z00zzmsil_outz00,
		BgL_bgl_string5164za700za7za7m5326za7,
		"(let ((out (dotnet-out me))) (push-string me msg) (fprint out \"\\tcall\\t void bigloo.foreign::print(class System.String)\")) ulong long ushort short ucs2 char ubyte byte bool native final abstract static int ullong llong uelong elong double float (private static) (public static) (public static hidebysig specialname rtspecialname) void (public hidebysig specialname rtspecialname instance) (public virtual hidebysig instance) export call ",
		437);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pushzd2constant2zd2envz00zzmsil_outz00,
		BgL_bgl__pushza7d2constant5327za7, BGl__pushzd2constant2zd2zzmsil_outz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_closezd2tryzd2envz00zzmsil_outz00,
		BgL_bgl__closeza7d2tryza7d2za75328za7, BGl__closezd2tryzd2zzmsil_outz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_storezd2fieldzd2envz00zzmsil_outz00,
		BgL_bgl__storeza7d2fieldza7d5329z00, BGl__storezd2fieldzd2zzmsil_outz00, 0L,
		BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_subzd2envzd2zzmsil_outz00,
		BgL_bgl__subza700za7za7msil_ou5330za7, BGl__subz00zzmsil_outz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitandzd2envzd2zzmsil_outz00,
		BgL_bgl__bitandza700za7za7msil5331za7, BGl__bitandz00zzmsil_outz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitxorzd2envzd2zzmsil_outz00,
		BgL_bgl__bitxorza700za7za7msil5332za7, BGl__bitxorz00zzmsil_outz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_loadzd2vectorzd2envz00zzmsil_outz00,
		BgL_bgl__loadza7d2vectorza7d5333z00, BGl__loadzd2vectorzd2zzmsil_outz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2superzd2constructorzd2envzd2zzmsil_outz00,
		BgL_bgl__callza7d2superza7d25334z00,
		BGl__callzd2superzd2constructorz00zzmsil_outz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_storezd2varzd2envz00zzmsil_outz00,
		BgL_bgl__storeza7d2varza7d2za75335za7, BGl__storezd2varzd2zzmsil_outz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2globalzd2methodzd2envzd2zzmsil_outz00,
		BgL_bgl__openza7d2globalza7d5336z00,
		BGl__openzd2globalzd2methodz00zzmsil_outz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_commentzd2envzd2zzmsil_outz00,
		BgL_bgl__commentza700za7za7msi5337za7, BGl__commentz00zzmsil_outz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_loadzd2fieldzd2envz00zzmsil_outz00,
		BgL_bgl__loadza7d2fieldza7d25338z00, BGl__loadzd2fieldzd2zzmsil_outz00, 0L,
		BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mulzd2envzd2zzmsil_outz00,
		BgL_bgl__mulza700za7za7msil_ou5339za7, BGl__mulz00zzmsil_outz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2methodzd2virtualzd2envzd2zzmsil_outz00,
		BgL_bgl__openza7d2methodza7d5340z00,
		BGl__openzd2methodzd2virtualz00zzmsil_outz00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_storezd2parzd2envz00zzmsil_outz00,
		BgL_bgl__storeza7d2parza7d2za75341za7, BGl__storezd2parzd2zzmsil_outz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_brfalsezd2envzd2zzmsil_outz00,
		BgL_bgl__brfalseza700za7za7msi5342za7, BGl__brfalsez00zzmsil_outz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_throwzd2envzd2zzmsil_outz00,
		BgL_bgl__throwza700za7za7msil_5343za7, BGl__throwz00zzmsil_outz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgtzd2envzd2zzmsil_outz00,
		BgL_bgl__cgtza700za7za7msil_ou5344za7, BGl__cgtz00zzmsil_outz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_openzd2classzd2envz00zzmsil_outz00,
		BgL_bgl__openza7d2classza7d25345z00, BGl__openzd2classzd2zzmsil_outz00, 0L,
		BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_declarezd2tailzd2envz00zzmsil_outz00,
		BgL_bgl__declareza7d2tailza75346z00, BGl__declarezd2tailzd2zzmsil_outz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_closezd2methodzd2envz00zzmsil_outz00,
		BgL_bgl__closeza7d2methodza75347z00, BGl__closezd2methodzd2zzmsil_outz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_openzd2catchzd2envz00zzmsil_outz00,
		BgL_bgl__openza7d2catchza7d25348z00, BGl__openzd2catchzd2zzmsil_outz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rethrowzd2envzd2zzmsil_outz00,
		BgL_bgl__rethrowza700za7za7msi5349za7, BGl__rethrowz00zzmsil_outz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_returnzd2envzd2zzmsil_outz00,
		BgL_bgl__returnza700za7za7msil5350za7, BGl__returnz00zzmsil_outz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_callvirtzd2envzd2zzmsil_outz00,
		BgL_bgl__callvirtza700za7za7ms5351za7, BGl__callvirtz00zzmsil_outz00, 0L,
		BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitorzd2envzd2zzmsil_outz00,
		BgL_bgl__bitorza700za7za7msil_5352za7, BGl__bitorz00zzmsil_outz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_closezd2classzd2envz00zzmsil_outz00,
		BgL_bgl__closeza7d2classza7d5353z00, BGl__closezd2classzd2zzmsil_outz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_declarezd2globalzd2envz00zzmsil_outz00,
		BgL_bgl__declareza7d2globa5354za7, BGl__declarezd2globalzd2zzmsil_outz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_closezd2namespacezd2envz00zzmsil_outz00,
		BgL_bgl__closeza7d2namespa5355za7, BGl__closezd2namespacezd2zzmsil_outz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_negzd2envzd2zzmsil_outz00,
		BgL_bgl__negza700za7za7msil_ou5356za7, BGl__negz00zzmsil_outz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_isinstzd2envzd2zzmsil_outz00,
		BgL_bgl__isinstza700za7za7msil5357za7, BGl__isinstz00zzmsil_outz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cltzd2envzd2zzmsil_outz00,
		BgL_bgl__cltza700za7za7msil_ou5358za7, BGl__cltz00zzmsil_outz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_printzd2infozd2envz00zzmsil_outz00,
		BgL_bgl__printza7d2infoza7d25359z00, BGl__printzd2infozd2zzmsil_outz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ldnullzd2envzd2zzmsil_outz00,
		BgL_bgl__ldnullza700za7za7msil5360za7, BGl__ldnullz00zzmsil_outz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_loadzd2vectorzd2lengthzd2envzd2zzmsil_outz00,
		BgL_bgl__loadza7d2vectorza7d5361z00,
		BGl__loadzd2vectorzd2lengthz00zzmsil_outz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_leavezd2envzd2zzmsil_outz00,
		BgL_bgl__leaveza700za7za7msil_5362za7, BGl__leavez00zzmsil_outz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_beqzd2envzd2zzmsil_outz00,
		BgL_bgl__beqza700za7za7msil_ou5363za7, BGl__beqz00zzmsil_outz00, 0L,
		BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2methodzd2constructorzd2envzd2zzmsil_outz00,
		BgL_bgl__openza7d2methodza7d5364z00,
		BGl__openzd2methodzd2constructorz00zzmsil_outz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_labelzd2envzd2zzmsil_outz00,
		BgL_bgl__labelza700za7za7msil_5365za7, BGl__labelz00zzmsil_outz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_popzd2envzd2zzmsil_outz00,
		BgL_bgl__popza700za7za7msil_ou5366za7, BGl__popz00zzmsil_outz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_addzd2envzd2zzmsil_outz00,
		BgL_bgl__addza700za7za7msil_ou5367za7, BGl__addz00zzmsil_outz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bnezd2envzd2zzmsil_outz00,
		BgL_bgl__bneza700za7za7msil_ou5368za7, BGl__bnez00zzmsil_outz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_remzd2envzd2zzmsil_outz00,
		BgL_bgl__remza700za7za7msil_ou5369za7, BGl__remz00zzmsil_outz00, 0L,
		BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmsil_outz00(long
		BgL_checksumz00_3369, char *BgL_fromz00_3370)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmsil_outz00))
				{
					BGl_requirezd2initializa7ationz75zzmsil_outz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmsil_outz00();
					BGl_cnstzd2initzd2zzmsil_outz00();
					BGl_importedzd2moduleszd2initz00zzmsil_outz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmsil_outz00()
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 1 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "msil_out");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"msil_out");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "msil_out");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"msil_out");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"msil_out");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "msil_out");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "msil_out");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"msil_out");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"msil_out");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmsil_outz00()
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 1 */
			{	/* SawMsil/out.scm 1 */
				obj_t BgL_cportz00_3350;

				BgL_cportz00_3350 =
					bgl_open_input_string(BGl_string5164z00zzmsil_outz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_3351;

					BgL_iz00_3351 = ((long) 28);
				BgL_loopz00_3352:
					if ((BgL_iz00_3351 == ((long) -1)))
						{	/* SawMsil/out.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMsil/out.scm 1 */
							{	/* SawMsil/out.scm 1 */
								obj_t BgL_arg5166z00_3354;

								{	/* SawMsil/out.scm 1 */

									{	/* SawMsil/out.scm 1 */
										obj_t BgL_locationz00_3356;

										BgL_locationz00_3356 = BBOOL(((bool_t) 0));
										{	/* SawMsil/out.scm 1 */

											BgL_arg5166z00_3354 =
												BGl_readz00zz__readerz00(BgL_cportz00_3350,
												BgL_locationz00_3356);
										}
									}
								}
								{	/* SawMsil/out.scm 1 */
									int BgL_auxz00_3392;

									BgL_auxz00_3392 = (int) (BgL_iz00_3351);
									CNST_TABLE_SET(BgL_auxz00_3392, BgL_arg5166z00_3354);
							}}
							{	/* SawMsil/out.scm 1 */
								int BgL_auxz00_3357;

								BgL_auxz00_3357 = (int) ((BgL_iz00_3351 - ((long) 1)));
								{
									long BgL_iz00_3397;

									BgL_iz00_3397 = (long) (BgL_auxz00_3357);
									BgL_iz00_3351 = BgL_iz00_3397;
									goto BgL_loopz00_3352;
								}
							}
						}
				}
			}
		}
	}



/* get-type-name */
	obj_t BGl_getzd2typezd2namez00zzmsil_outz00(obj_t BgL_tz00_1)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 94 */
			if (SYMBOLP(BgL_tz00_1))
				{	/* SawMsil/out.scm 96 */
					return BGl_stdzd2typenamezd2zzmsil_namesz00(BgL_tz00_1);
				}
			else
				{	/* SawMsil/out.scm 96 */
					if (STRINGP(BgL_tz00_1))
						{	/* SawMsil/out.scm 97 */
							return BgL_tz00_1;
						}
					else
						{	/* SawMsil/out.scm 97 */
							if (BGl_iszd2azf3z21zz__objectz00(BgL_tz00_1,
									BGl_typez00zztype_typez00))
								{
									BgL_typez00_bglt BgL_auxz00_3406;

									BgL_auxz00_3406 = (BgL_typez00_bglt) (BgL_tz00_1);
									return
										(((BgL_typez00_bglt) CREF(BgL_auxz00_3406))->BgL_namez00);
								}
							else
								{	/* SawMsil/out.scm 98 */
									if (BGl_iszd2azf3z21zz__objectz00(BgL_tz00_1,
											BGl_localz00zzast_varz00))
										{	/* SawMsil/out.scm 99 */
											BgL_typez00_bglt BgL_obj1509z00_2447;

											{
												BgL_variablez00_bglt BgL_auxz00_3411;

												BgL_auxz00_3411 =
													(BgL_variablez00_bglt) (
													(BgL_localz00_bglt) (BgL_tz00_1));
												BgL_obj1509z00_2447 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3411))->
													BgL_typez00);
											}
											return
												(((BgL_typez00_bglt) CREF(BgL_obj1509z00_2447))->
												BgL_namez00);
										}
									else
										{	/* SawMsil/out.scm 99 */
											return
												BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
												BGl_string5041z00zzmsil_outz00, BgL_tz00_1);
		}}}}}
	}



/* _get-type-name */
	obj_t BGl__getzd2typezd2namez00zzmsil_outz00(obj_t BgL_envz00_3096,
		obj_t BgL_tz00_3097)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 94 */
			return BGl_getzd2typezd2namez00zzmsil_outz00(BgL_tz00_3097);
		}
	}



/* declare-list */
	obj_t BGl_declarezd2listzd2zzmsil_outz00(obj_t BgL_outz00_2, obj_t BgL_lz00_3,
		obj_t BgL_argzd2ze3namez31_4)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 105 */
			bgl_display_string(BGl_string5042z00zzmsil_outz00, BgL_outz00_2);
			{
				obj_t BgL_pz00_1478;

				obj_t BgL_lz00_1479;

				BgL_pz00_1478 = BGl_string5045z00zzmsil_outz00;
				BgL_lz00_1479 = BgL_lz00_3;
			BgL_zc3anonymousza34769ze3z83_1480:
				if (NULLP(BgL_lz00_1479))
					{	/* SawMsil/out.scm 108 */
						return
							bgl_display_string(BGl_string5043z00zzmsil_outz00, BgL_outz00_2);
					}
				else
					{	/* SawMsil/out.scm 108 */
						bgl_display_obj(BgL_pz00_1478, BgL_outz00_2);
						{	/* SawMsil/out.scm 111 */
							obj_t BgL_arg4771z00_1482;

							{	/* SawMsil/out.scm 111 */
								obj_t BgL_arg4772z00_1483;

								BgL_arg4772z00_1483 = CAR(BgL_lz00_1479);
								BgL_arg4771z00_1482 =
									PROCEDURE_ENTRY(BgL_argzd2ze3namez31_4)
									(BgL_argzd2ze3namez31_4, BgL_arg4772z00_1483, BEOA);
							}
							bgl_display_obj(BgL_arg4771z00_1482, BgL_outz00_2);
						}
						{
							obj_t BgL_lz00_3429;

							obj_t BgL_pz00_3428;

							BgL_pz00_3428 = BGl_string5044z00zzmsil_outz00;
							BgL_lz00_3429 = CDR(BgL_lz00_1479);
							BgL_lz00_1479 = BgL_lz00_3429;
							BgL_pz00_1478 = BgL_pz00_3428;
							goto BgL_zc3anonymousza34769ze3z83_1480;
						}
					}
			}
		}
	}



/* comment */
	BGL_EXPORTED_DEF obj_t BGl_commentz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_5, obj_t BgL_tagz00_6, obj_t BgL_objz00_7)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 117 */
			{	/* SawMsil/out.scm 118 */
				obj_t BgL_port4674z00_1487;

				BgL_port4674z00_1487 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_5))->BgL_outz00);
				bgl_display_string(BGl_string5046z00zzmsil_outz00,
					BgL_port4674z00_1487);
				bgl_display_obj(BgL_tagz00_6, BgL_port4674z00_1487);
				bgl_display_string(BGl_string5047z00zzmsil_outz00,
					BgL_port4674z00_1487);
				bgl_display_obj(BgL_objz00_7, BgL_port4674z00_1487);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4674z00_1487);
		}}
	}



/* _comment */
	obj_t BGl__commentz00zzmsil_outz00(obj_t BgL_envz00_3098,
		obj_t BgL_mez00_3099, obj_t BgL_tagz00_3100, obj_t BgL_objz00_3101)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 117 */
			return
				BGl_commentz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3099), BgL_tagz00_3100,
				BgL_objz00_3101);
		}
	}



/* open-namespace */
	BGL_EXPORTED_DEF obj_t BGl_openzd2namespacezd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_8)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 123 */
			{	/* SawMsil/out.scm 124 */
				obj_t BgL_namez00_1488;

				BgL_namez00_1488 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_8))->BgL_qnamez00);
				if (
					(STRING_LENGTH(BGl_suffixz00zz__osz00(BgL_namez00_1488)) ==
						((long) 0)))
					{	/* SawMsil/out.scm 125 */
						return BFALSE;
					}
				else
					{	/* SawMsil/out.scm 126 */
						obj_t BgL_outz00_1490;

						BgL_outz00_1490 =
							(((BgL_dotnetz00_bglt) CREF(BgL_mez00_8))->BgL_outz00);
						bgl_display_string(BGl_string5048z00zzmsil_outz00, BgL_outz00_1490);
						bgl_display_obj(BGl_prefixz00zz__osz00(BgL_namez00_1488),
							BgL_outz00_1490);
						bgl_display_string(BGl_string5049z00zzmsil_outz00, BgL_outz00_1490);
						return bgl_display_char(((unsigned char) '\n'), BgL_outz00_1490);
		}}}
	}



/* _open-namespace */
	obj_t BGl__openzd2namespacezd2zzmsil_outz00(obj_t BgL_envz00_3102,
		obj_t BgL_mez00_3103)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 123 */
			return
				BGl_openzd2namespacezd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3103));
		}
	}



/* close-namespace */
	BGL_EXPORTED_DEF obj_t
		BGl_closezd2namespacezd2zzmsil_outz00(BgL_dotnetz00_bglt BgL_mez00_9)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 129 */
			{	/* SawMsil/out.scm 130 */
				obj_t BgL_namez00_1496;

				BgL_namez00_1496 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_9))->BgL_qnamez00);
				if (
					(STRING_LENGTH(BGl_suffixz00zz__osz00(BgL_namez00_1496)) ==
						((long) 0)))
					{	/* SawMsil/out.scm 131 */
						return BFALSE;
					}
				else
					{	/* SawMsil/out.scm 132 */
						obj_t BgL_outz00_1498;

						BgL_outz00_1498 =
							(((BgL_dotnetz00_bglt) CREF(BgL_mez00_9))->BgL_outz00);
						bgl_display_string(BGl_string5050z00zzmsil_outz00, BgL_outz00_1498);
						return bgl_display_char(((unsigned char) '\n'), BgL_outz00_1498);
		}}}
	}



/* _close-namespace */
	obj_t BGl__closezd2namespacezd2zzmsil_outz00(obj_t BgL_envz00_3104,
		obj_t BgL_mez00_3105)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 129 */
			return
				BGl_closezd2namespacezd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3105));
		}
	}



/* open-class */
	BGL_EXPORTED_DEF obj_t BGl_openzd2classzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_10, obj_t BgL_namez00_11, obj_t BgL_superz00_12,
		obj_t BgL_publiczf3zf3_13)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 139 */
			{
				obj_t BgL_namez00_1518;

				obj_t BgL_namez00_1510;

				{	/* SawMsil/out.scm 147 */
					obj_t BgL_outz00_1505;

					BgL_outz00_1505 =
						(((BgL_dotnetz00_bglt) CREF(BgL_mez00_10))->BgL_outz00);
					bgl_display_string(BGl_string5051z00zzmsil_outz00, BgL_outz00_1505);
					{	/* SawMsil/out.scm 148 */
						obj_t BgL_arg4785z00_1507;

						if (CBOOL(BgL_publiczf3zf3_13))
							{	/* SawMsil/out.scm 148 */
								BgL_arg4785z00_1507 = BGl_string5052z00zzmsil_outz00;
							}
						else
							{	/* SawMsil/out.scm 148 */
								BgL_arg4785z00_1507 = BGl_string5053z00zzmsil_outz00;
							}
						bgl_display_obj(BgL_arg4785z00_1507, BgL_outz00_1505);
					}
					bgl_display_string(BGl_string5054z00zzmsil_outz00, BgL_outz00_1505);
					{	/* SawMsil/out.scm 148 */
						obj_t BgL_auxz00_3468;

						BgL_namez00_1510 = BgL_namez00_11;
						if (
							(STRING_REF(BgL_namez00_1510,
									((long) 0)) == ((unsigned char) '\'')))
							{	/* SawMsil/out.scm 141 */
								BgL_namez00_1518 =
									c_substring(BgL_namez00_1510, ((long) 1),
									(STRING_LENGTH(BgL_namez00_1510) - ((long) 1)));
							}
						else
							{	/* SawMsil/out.scm 141 */
								BgL_namez00_1518 = BgL_namez00_1510;
							}
						{	/* SawMsil/out.scm 145 */
							obj_t BgL_sufz00_1520;

							BgL_sufz00_1520 = BGl_suffixz00zz__osz00(BgL_namez00_1518);
							if ((STRING_LENGTH(BgL_sufz00_1520) == ((long) 0)))
								{	/* SawMsil/out.scm 146 */
									BgL_auxz00_3468 = BgL_namez00_1518;
								}
							else
								{	/* SawMsil/out.scm 146 */
									BgL_auxz00_3468 = BgL_sufz00_1520;
								}
						}
						bgl_display_obj(BgL_auxz00_3468, BgL_outz00_1505);
					}
					bgl_display_string(BGl_string5055z00zzmsil_outz00, BgL_outz00_1505);
					bgl_display_obj(BgL_superz00_12, BgL_outz00_1505);
					bgl_display_string(BGl_string5056z00zzmsil_outz00, BgL_outz00_1505);
					return bgl_display_char(((unsigned char) '\n'), BgL_outz00_1505);
		}}}
	}



/* _open-class */
	obj_t BGl__openzd2classzd2zzmsil_outz00(obj_t BgL_envz00_3106,
		obj_t BgL_mez00_3107, obj_t BgL_namez00_3108, obj_t BgL_superz00_3109,
		obj_t BgL_publiczf3zf3_3110)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 139 */
			return
				BGl_openzd2classzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3107), BgL_namez00_3108,
				BgL_superz00_3109, BgL_publiczf3zf3_3110);
		}
	}



/* close-class */
	BGL_EXPORTED_DEF obj_t BGl_closezd2classzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_14)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 151 */
			{	/* SawMsil/out.scm 152 */
				obj_t BgL_port4678z00_2502;

				BgL_port4678z00_2502 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_14))->BgL_outz00);
				bgl_display_string(BGl_string5050z00zzmsil_outz00,
					BgL_port4678z00_2502);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4678z00_2502);
		}}
	}



/* _close-class */
	obj_t BGl__closezd2classzd2zzmsil_outz00(obj_t BgL_envz00_3111,
		obj_t BgL_mez00_3112)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 151 */
			return
				BGl_closezd2classzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3112));
		}
	}



/* declare-field */
	BGL_EXPORTED_DEF obj_t BGl_declarezd2fieldzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_15, BgL_slotz00_bglt BgL_fieldz00_16)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 157 */
			{	/* SawMsil/out.scm 158 */
				obj_t BgL_port4679z00_1527;

				BgL_port4679z00_1527 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_15))->BgL_outz00);
				bgl_display_string(BGl_string5057z00zzmsil_outz00,
					BgL_port4679z00_1527);
				{	/* SawMsil/out.scm 158 */
					obj_t BgL_arg4799z00_1528;

					{	/* SawMsil/out.scm 158 */
						obj_t BgL_arg4800z00_1529;

						BgL_arg4800z00_1529 =
							BGl_getzd2fieldzd2typez00zzbackend_cplibz00(BgL_fieldz00_16);
						{
							BgL_typez00_bglt BgL_auxz00_3494;

							BgL_auxz00_3494 = (BgL_typez00_bglt) (BgL_arg4800z00_1529);
							BgL_arg4799z00_1528 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_3494))->BgL_namez00);
						}
					}
					bgl_display_obj(BgL_arg4799z00_1528, BgL_port4679z00_1527);
				}
				bgl_display_string(BGl_string5047z00zzmsil_outz00,
					BgL_port4679z00_1527);
				{	/* SawMsil/out.scm 159 */
					obj_t BgL_arg4801z00_1530;

					BgL_arg4801z00_1530 =
						(((BgL_slotz00_bglt) CREF(BgL_fieldz00_16))->BgL_namez00);
					bgl_display_obj(BgL_arg4801z00_1530, BgL_port4679z00_1527);
				}
				return bgl_display_char(((unsigned char) '\n'), BgL_port4679z00_1527);
		}}
	}



/* _declare-field */
	obj_t BGl__declarezd2fieldzd2zzmsil_outz00(obj_t BgL_envz00_3113,
		obj_t BgL_mez00_3114, obj_t BgL_fieldz00_3115)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 157 */
			return
				BGl_declarezd2fieldzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3114),
				(BgL_slotz00_bglt) (BgL_fieldz00_3115));
		}
	}



/* declare-global */
	BGL_EXPORTED_DEF obj_t BGl_declarezd2globalzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_17, BgL_globalz00_bglt BgL_varz00_18)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 161 */
			{	/* SawMsil/out.scm 162 */
				obj_t BgL_port4680z00_1531;

				BgL_port4680z00_1531 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_17))->BgL_outz00);
				bgl_display_string(BGl_string5058z00zzmsil_outz00,
					BgL_port4680z00_1531);
				{	/* SawMsil/out.scm 163 */
					obj_t BgL_arg4802z00_1532;

					if (
						((((BgL_globalz00_bglt) CREF(BgL_varz00_18))->BgL_importz00) ==
							CNST_TABLE_REF(((long) 1))))
						{	/* SawMsil/out.scm 163 */
							BgL_arg4802z00_1532 = BGl_string5052z00zzmsil_outz00;
						}
					else
						{	/* SawMsil/out.scm 163 */
							BgL_arg4802z00_1532 = BGl_string5053z00zzmsil_outz00;
						}
					bgl_display_obj(BgL_arg4802z00_1532, BgL_port4680z00_1531);
				}
				bgl_display_string(BGl_string5059z00zzmsil_outz00,
					BgL_port4680z00_1531);
				{	/* SawMsil/out.scm 165 */
					obj_t BgL_arg4806z00_1536;

					{	/* SawMsil/out.scm 165 */
						BgL_typez00_bglt BgL_obj1509z00_2522;

						{
							BgL_variablez00_bglt BgL_auxz00_3513;

							BgL_auxz00_3513 = (BgL_variablez00_bglt) (BgL_varz00_18);
							BgL_obj1509z00_2522 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_3513))->BgL_typez00);
						}
						BgL_arg4806z00_1536 =
							(((BgL_typez00_bglt) CREF(BgL_obj1509z00_2522))->BgL_namez00);
					}
					bgl_display_obj(BgL_arg4806z00_1536, BgL_port4680z00_1531);
				}
				bgl_display_string(BGl_string5047z00zzmsil_outz00,
					BgL_port4680z00_1531);
				bgl_display_obj(BGl_globalzd2simplenamezd2zzmsil_namesz00
					(BgL_varz00_18), BgL_port4680z00_1531);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4680z00_1531);
		}}
	}



/* _declare-global */
	obj_t BGl__declarezd2globalzd2zzmsil_outz00(obj_t BgL_envz00_3116,
		obj_t BgL_mez00_3117, obj_t BgL_varz00_3118)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 161 */
			return
				BGl_declarezd2globalzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3117),
				(BgL_globalz00_bglt) (BgL_varz00_3118));
		}
	}



/* open-method */
	BGL_EXPORTED_DEF obj_t BGl_openzd2methodzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_19, obj_t BgL_modifiersz00_20, obj_t BgL_typerz00_21,
		obj_t BgL_namez00_22, obj_t BgL_argsz00_23)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 173 */
			{	/* SawMsil/out.scm 174 */
				obj_t BgL_outz00_1539;

				BgL_outz00_1539 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_19))->BgL_outz00);
				bgl_display_string(BGl_string5060z00zzmsil_outz00, BgL_outz00_1539);
				{
					obj_t BgL_l4681z00_1541;

					BgL_l4681z00_1541 = BgL_modifiersz00_20;
				BgL_zc3anonymousza34809ze3z83_1542:
					if (PAIRP(BgL_l4681z00_1541))
						{	/* SawMsil/out.scm 176 */
							{	/* SawMsil/out.scm 176 */
								obj_t BgL_mz00_1544;

								BgL_mz00_1544 = CAR(BgL_l4681z00_1541);
								bgl_display_obj(BgL_mz00_1544, BgL_outz00_1539);
								bgl_display_string(BGl_string5047z00zzmsil_outz00,
									BgL_outz00_1539);
							}
							{
								obj_t BgL_l4681z00_3532;

								BgL_l4681z00_3532 = CDR(BgL_l4681z00_1541);
								BgL_l4681z00_1541 = BgL_l4681z00_3532;
								goto BgL_zc3anonymousza34809ze3z83_1542;
							}
						}
					else
						{	/* SawMsil/out.scm 176 */
							((bool_t) 1);
						}
				}
				bgl_display_obj(BGl_getzd2typezd2namez00zzmsil_outz00(BgL_typerz00_21),
					BgL_outz00_1539);
				bgl_display_string(BGl_string5047z00zzmsil_outz00, BgL_outz00_1539);
				bgl_display_obj(BgL_namez00_22, BgL_outz00_1539);
				BGl_declarezd2listzd2zzmsil_outz00(BgL_outz00_1539, BgL_argsz00_23,
					BGl_getzd2typezd2namezd2envzd2zzmsil_outz00);
				{	/* SawMsil/out.scm 181 */
					obj_t BgL_arg4813z00_1549;

					if (CBOOL(BGl_za2purifyza2z00zzengine_paramz00))
						{	/* SawMsil/out.scm 181 */
							BgL_arg4813z00_1549 = BGl_string5061z00zzmsil_outz00;
						}
					else
						{	/* SawMsil/out.scm 181 */
							BgL_arg4813z00_1549 = BGl_string5062z00zzmsil_outz00;
						}
					bgl_display_obj(BgL_arg4813z00_1549, BgL_outz00_1539);
				}
				return bgl_display_char(((unsigned char) '\n'), BgL_outz00_1539);
		}}
	}



/* _open-method */
	obj_t BGl__openzd2methodzd2zzmsil_outz00(obj_t BgL_envz00_3119,
		obj_t BgL_mez00_3120, obj_t BgL_modifiersz00_3121, obj_t BgL_typerz00_3122,
		obj_t BgL_namez00_3123, obj_t BgL_argsz00_3124)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 173 */
			return
				BGl_openzd2methodzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3120), BgL_modifiersz00_3121,
				BgL_typerz00_3122, BgL_namez00_3123, BgL_argsz00_3124);
		}
	}



/* open-method-virtual */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2methodzd2virtualz00zzmsil_outz00(BgL_dotnetz00_bglt BgL_mez00_24,
		obj_t BgL_typerz00_25, obj_t BgL_namez00_26, obj_t BgL_argsz00_27)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 183 */
			return
				BGl_openzd2methodzd2zzmsil_outz00(BgL_mez00_24,
				CNST_TABLE_REF(((long) 2)), BgL_typerz00_25, BgL_namez00_26,
				BgL_argsz00_27);
		}
	}



/* _open-method-virtual */
	obj_t BGl__openzd2methodzd2virtualz00zzmsil_outz00(obj_t BgL_envz00_3125,
		obj_t BgL_mez00_3126, obj_t BgL_typerz00_3127, obj_t BgL_namez00_3128,
		obj_t BgL_argsz00_3129)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 183 */
			return
				BGl_openzd2methodzd2virtualz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3126), BgL_typerz00_3127,
				BgL_namez00_3128, BgL_argsz00_3129);
		}
	}



/* open-method-constructor */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2methodzd2constructorz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_28, obj_t BgL_argsz00_29)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 187 */
			return
				BGl_openzd2methodzd2zzmsil_outz00(BgL_mez00_28,
				CNST_TABLE_REF(((long) 3)),
				CNST_TABLE_REF(((long) 4)), BGl_string5063z00zzmsil_outz00,
				BgL_argsz00_29);
		}
	}



/* _open-method-constructor */
	obj_t BGl__openzd2methodzd2constructorz00zzmsil_outz00(obj_t BgL_envz00_3130,
		obj_t BgL_mez00_3131, obj_t BgL_argsz00_3132)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 187 */
			return
				BGl_openzd2methodzd2constructorz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3131), BgL_argsz00_3132);
		}
	}



/* open-method-class-constructor */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2methodzd2classzd2constructorzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_30)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 191 */
			return
				BGl_openzd2methodzd2zzmsil_outz00(BgL_mez00_30,
				CNST_TABLE_REF(((long) 5)),
				CNST_TABLE_REF(((long) 4)), BGl_string5064z00zzmsil_outz00, BNIL);
		}
	}



/* _open-method-class-constructor */
	obj_t BGl__openzd2methodzd2classzd2constructorzd2zzmsil_outz00(obj_t
		BgL_envz00_3133, obj_t BgL_mez00_3134)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 191 */
			return
				BGl_openzd2methodzd2classzd2constructorzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3134));
		}
	}



/* open-global-method */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2globalzd2methodz00zzmsil_outz00(BgL_dotnetz00_bglt BgL_mez00_31,
		BgL_globalz00_bglt BgL_varz00_32)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 195 */
			{	/* SawMsil/out.scm 197 */
				obj_t BgL_arg4814z00_1550;

				BgL_typez00_bglt BgL_arg4815z00_1551;

				obj_t BgL_arg4816z00_1552;

				obj_t BgL_arg4817z00_1553;

				if (
					((((BgL_globalz00_bglt) CREF(BgL_varz00_32))->BgL_importz00) ==
						CNST_TABLE_REF(((long) 1))))
					{	/* SawMsil/out.scm 197 */
						BgL_arg4814z00_1550 = CNST_TABLE_REF(((long) 6));
					}
				else
					{	/* SawMsil/out.scm 197 */
						BgL_arg4814z00_1550 = CNST_TABLE_REF(((long) 7));
					}
				{
					BgL_variablez00_bglt BgL_auxz00_3565;

					BgL_auxz00_3565 = (BgL_variablez00_bglt) (BgL_varz00_32);
					BgL_arg4815z00_1551 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_3565))->BgL_typez00);
				}
				BgL_arg4816z00_1552 =
					BGl_globalzd2simplenamezd2zzmsil_namesz00(BgL_varz00_32);
				{	/* SawMsil/out.scm 202 */
					BgL_sfunz00_bglt BgL_obj1880z00_2540;

					{	/* SawMsil/out.scm 202 */
						BgL_variablez00_bglt BgL_obj1611z00_2539;

						BgL_obj1611z00_2539 = (BgL_variablez00_bglt) (BgL_varz00_32);
						BgL_obj1880z00_2540 =
							(BgL_sfunz00_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_2539))->
								BgL_valuez00));
					}
					BgL_arg4817z00_1553 =
						(((BgL_sfunz00_bglt) CREF(BgL_obj1880z00_2540))->BgL_argsz00);
				}
				return
					BGl_openzd2methodzd2zzmsil_outz00(BgL_mez00_31, BgL_arg4814z00_1550,
					(obj_t) (BgL_arg4815z00_1551), BgL_arg4816z00_1552,
					BgL_arg4817z00_1553);
			}
		}
	}



/* _open-global-method */
	obj_t BGl__openzd2globalzd2methodz00zzmsil_outz00(obj_t BgL_envz00_3135,
		obj_t BgL_mez00_3136, obj_t BgL_varz00_3137)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 195 */
			return
				BGl_openzd2globalzd2methodz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3136),
				(BgL_globalz00_bglt) (BgL_varz00_3137));
		}
	}



/* close-method */
	BGL_EXPORTED_DEF obj_t BGl_closezd2methodzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_33)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 204 */
			{	/* SawMsil/out.scm 205 */
				obj_t BgL_port4684z00_2541;

				BgL_port4684z00_2541 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_33))->BgL_outz00);
				bgl_display_string(BGl_string5050z00zzmsil_outz00,
					BgL_port4684z00_2541);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4684z00_2541);
		}}
	}



/* _close-method */
	obj_t BGl__closezd2methodzd2zzmsil_outz00(obj_t BgL_envz00_3138,
		obj_t BgL_mez00_3139)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 204 */
			return
				BGl_closezd2methodzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3139));
		}
	}



/* declare-entrypoint */
	BGL_EXPORTED_DEF obj_t
		BGl_declarezd2entrypointzd2zzmsil_outz00(BgL_dotnetz00_bglt BgL_mez00_34)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 210 */
			{	/* SawMsil/out.scm 211 */
				obj_t BgL_port4685z00_2546;

				BgL_port4685z00_2546 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_34))->BgL_outz00);
				bgl_display_string(BGl_string5065z00zzmsil_outz00,
					BgL_port4685z00_2546);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4685z00_2546);
		}}
	}



/* _declare-entrypoint */
	obj_t BGl__declarezd2entrypointzd2zzmsil_outz00(obj_t BgL_envz00_3140,
		obj_t BgL_mez00_3141)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 210 */
			return
				BGl_declarezd2entrypointzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3141));
		}
	}



/* declare-maxstack */
	BGL_EXPORTED_DEF obj_t
		BGl_declarezd2maxstackzd2zzmsil_outz00(BgL_dotnetz00_bglt BgL_mez00_35,
		obj_t BgL_nz00_36)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 216 */
			{	/* SawMsil/out.scm 217 */
				obj_t BgL_port4686z00_2551;

				BgL_port4686z00_2551 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_35))->BgL_outz00);
				bgl_display_string(BGl_string5066z00zzmsil_outz00,
					BgL_port4686z00_2551);
				bgl_display_obj(BgL_nz00_36, BgL_port4686z00_2551);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4686z00_2551);
		}}
	}



/* _declare-maxstack */
	obj_t BGl__declarezd2maxstackzd2zzmsil_outz00(obj_t BgL_envz00_3142,
		obj_t BgL_mez00_3143, obj_t BgL_nz00_3144)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 216 */
			return
				BGl_declarezd2maxstackzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3143), BgL_nz00_3144);
		}
	}



/* declare-locals */
	BGL_EXPORTED_DEF obj_t BGl_declarezd2localszd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_37, obj_t BgL_lz00_38)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 222 */
			if (NULLP(BgL_lz00_38))
				{	/* SawMsil/out.scm 223 */
					return BFALSE;
				}
			else
				{	/* SawMsil/out.scm 224 */
					obj_t BgL_outz00_1562;

					BgL_outz00_1562 =
						(((BgL_dotnetz00_bglt) CREF(BgL_mez00_37))->BgL_outz00);
					bgl_display_string(BGl_string5067z00zzmsil_outz00, BgL_outz00_1562);
					BGl_declarezd2listzd2zzmsil_outz00(BgL_outz00_1562, BgL_lz00_38,
						BGl_proc5068z00zzmsil_outz00);
					bgl_display_string(BGl_string5045z00zzmsil_outz00, BgL_outz00_1562);
					return bgl_display_char(((unsigned char) '\n'), BgL_outz00_1562);
		}}
	}



/* _declare-locals */
	obj_t BGl__declarezd2localszd2zzmsil_outz00(obj_t BgL_envz00_3146,
		obj_t BgL_mez00_3147, obj_t BgL_lz00_3148)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 222 */
			return
				BGl_declarezd2localszd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3147), BgL_lz00_3148);
		}
	}



/* <anonymous:4824> */
	obj_t BGl_zc3anonymousza34824ze3z83zzmsil_outz00(obj_t BgL_envz00_3149,
		obj_t BgL_rz00_3150)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 226 */
			{
				obj_t BgL_rz00_1564;

				BgL_rz00_1564 = BgL_rz00_3150;
				{	/* SawMsil/out.scm 226 */
					BgL_typez00_bglt BgL_obj1509z00_2562;

					{
						BgL_rtl_regz00_bglt BgL_auxz00_3603;

						BgL_auxz00_3603 = (BgL_rtl_regz00_bglt) (BgL_rz00_1564);
						BgL_obj1509z00_2562 =
							(((BgL_rtl_regz00_bglt) CREF(BgL_auxz00_3603))->BgL_typez00);
					}
					return (((BgL_typez00_bglt) CREF(BgL_obj1509z00_2562))->BgL_namez00);
				}
			}
		}
	}



/* declare-tail */
	BGL_EXPORTED_DEF obj_t BGl_declarezd2tailzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_39)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 232 */
			{	/* SawMsil/out.scm 233 */
				obj_t BgL_port4688z00_2566;

				BgL_port4688z00_2566 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_39))->BgL_outz00);
				bgl_display_string(BGl_string5069z00zzmsil_outz00,
					BgL_port4688z00_2566);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4688z00_2566);
		}}
	}



/* _declare-tail */
	obj_t BGl__declarezd2tailzd2zzmsil_outz00(obj_t BgL_envz00_3151,
		obj_t BgL_mez00_3152)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 232 */
			return
				BGl_declarezd2tailzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3152));
		}
	}



/* push-num */
	BGL_EXPORTED_DEF obj_t BGl_pushzd2numzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_40, obj_t BgL_nz00_41, obj_t BgL_typez00_42)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 238 */
			{	/* SawMsil/out.scm 239 */
				obj_t BgL_outz00_1570;

				BgL_outz00_1570 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_40))->BgL_outz00);
				if (BIGNUMP(BgL_nz00_41))
					{	/* SawMsil/out.scm 240 */
						bgl_display_string(BGl_string5070z00zzmsil_outz00, BgL_outz00_1570);
						{	/* SawMsil/out.scm 243 */
							obj_t BgL_arg4827z00_1572;

							{	/* SawMsil/out.scm 243 */

								BgL_arg4827z00_1572 =
									BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
									(BgL_nz00_41, ((long) 10));
							}
							BGl_stroutz00zzmsil_outz00(BgL_outz00_1570, BgL_arg4827z00_1572);
						}
						bgl_display_string(BGl_string5071z00zzmsil_outz00, BgL_outz00_1570);
						bgl_display_char(((unsigned char) '\n'), BgL_outz00_1570);
						bgl_display_string(BGl_string5072z00zzmsil_outz00, BgL_outz00_1570);
						return bgl_display_char(((unsigned char) '\n'), BgL_outz00_1570);
					}
				else
					{	/* SawMsil/out.scm 240 */
						if ((BgL_typez00_42 == CNST_TABLE_REF(((long) 8))))
							{	/* SawMsil/out.scm 247 */
								bgl_display_string(BGl_string5073z00zzmsil_outz00,
									BgL_outz00_1570);
								bgl_display_obj(BgL_nz00_41, BgL_outz00_1570);
								return
									bgl_display_char(((unsigned char) '\n'), BgL_outz00_1570);
							}
						else
							{	/* SawMsil/out.scm 247 */
								if ((BgL_typez00_42 == CNST_TABLE_REF(((long) 9))))
									{	/* SawMsil/out.scm 247 */
										if (BGL_IS_NAN(REAL_TO_DOUBLE(BgL_nz00_41)))
											{	/* SawMsil/out.scm 252 */
												bgl_display_string(BGl_string5074z00zzmsil_outz00,
													BgL_outz00_1570);
												return bgl_display_char(((unsigned char) '\n'),
													BgL_outz00_1570);
											}
										else
											{	/* SawMsil/out.scm 254 */
												bool_t BgL_testz00_3636;

												if (BGL_IS_INF(REAL_TO_DOUBLE(BgL_nz00_41)))
													{	/* SawMsil/out.scm 254 */
														BgL_testz00_3636 =
															(REAL_TO_DOUBLE(BgL_nz00_41) < ((double) 0.0));
													}
												else
													{	/* SawMsil/out.scm 254 */
														BgL_testz00_3636 = ((bool_t) 0);
													}
												if (BgL_testz00_3636)
													{	/* SawMsil/out.scm 254 */
														bgl_display_string(BGl_string5075z00zzmsil_outz00,
															BgL_outz00_1570);
														return bgl_display_char(((unsigned char) '\n'),
															BgL_outz00_1570);
													}
												else
													{	/* SawMsil/out.scm 254 */
														if (BGL_IS_INF(REAL_TO_DOUBLE(BgL_nz00_41)))
															{	/* SawMsil/out.scm 257 */
																bgl_display_string
																	(BGl_string5076z00zzmsil_outz00,
																	BgL_outz00_1570);
																return bgl_display_char(((unsigned char) '\n'),
																	BgL_outz00_1570);
															}
														else
															{	/* SawMsil/out.scm 257 */
																bgl_display_string
																	(BGl_string5077z00zzmsil_outz00,
																	BgL_outz00_1570);
																bgl_display_obj(BgL_nz00_41, BgL_outz00_1570);
																return
																	bgl_display_char(((unsigned char) '\n'),
																	BgL_outz00_1570);
									}}}}
								else
									{	/* SawMsil/out.scm 247 */
										bool_t BgL_testz00_3652;

										{	/* SawMsil/out.scm 247 */
											bool_t BgL__ortest_4663z00_1606;

											BgL__ortest_4663z00_1606 =
												(BgL_typez00_42 == CNST_TABLE_REF(((long) 10)));
											if (BgL__ortest_4663z00_1606)
												{	/* SawMsil/out.scm 247 */
													BgL_testz00_3652 = BgL__ortest_4663z00_1606;
												}
											else
												{	/* SawMsil/out.scm 247 */
													BgL_testz00_3652 =
														(BgL_typez00_42 == CNST_TABLE_REF(((long) 11)));
										}}
										if (BgL_testz00_3652)
											{	/* SawMsil/out.scm 247 */
												bgl_display_string(BGl_string5078z00zzmsil_outz00,
													BgL_outz00_1570);
												{	/* SawMsil/out.scm 263 */
													obj_t BgL_arg4835z00_1591;

													BgL_arg4835z00_1591 =
														BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
														(BELONG_TO_LONG(BgL_nz00_41), BNIL);
													bgl_display_obj(BgL_arg4835z00_1591, BgL_outz00_1570);
												}
												return
													bgl_display_char(((unsigned char) '\n'),
													BgL_outz00_1570);
											}
										else
											{	/* SawMsil/out.scm 247 */
												bool_t BgL_testz00_3663;

												{	/* SawMsil/out.scm 247 */
													bool_t BgL__ortest_4664z00_1605;

													BgL__ortest_4664z00_1605 =
														(BgL_typez00_42 == CNST_TABLE_REF(((long) 12)));
													if (BgL__ortest_4664z00_1605)
														{	/* SawMsil/out.scm 247 */
															BgL_testz00_3663 = BgL__ortest_4664z00_1605;
														}
													else
														{	/* SawMsil/out.scm 247 */
															BgL_testz00_3663 =
																(BgL_typez00_42 == CNST_TABLE_REF(((long) 13)));
												}}
												if (BgL_testz00_3663)
													{	/* SawMsil/out.scm 247 */
														bgl_display_string(BGl_string5078z00zzmsil_outz00,
															BgL_outz00_1570);
														bgl_display_obj
															(BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
															(BLLONG_TO_LLONG(BgL_nz00_41), BNIL),
															BgL_outz00_1570);
														return bgl_display_char(((unsigned char) '\n'),
															BgL_outz00_1570);
													}
												else
													{	/* SawMsil/out.scm 247 */
														bgl_display_string(BGl_string5079z00zzmsil_outz00,
															BgL_outz00_1570);
														{

															if (INTEGERP(BgL_nz00_41))
																{	/* SawMsil/out.scm 270 */
																	switch ((long) CINT(BgL_nz00_41))
																		{
																		case ((long) -1):

																			bgl_display_string
																				(BGl_string5082z00zzmsil_outz00,
																				BgL_outz00_1570);
																			return bgl_display_char(((unsigned char)
																					'\n'), BgL_outz00_1570);
																			break;
																		case ((long) 0):
																		case ((long) 1):
																		case ((long) 2):
																		case ((long) 3):
																		case ((long) 4):
																		case ((long) 5):
																		case ((long) 6):
																		case ((long) 7):
																		case ((long) 8):

																			bgl_display_string
																				(BGl_string5083z00zzmsil_outz00,
																				BgL_outz00_1570);
																			bgl_display_obj(BgL_nz00_41,
																				BgL_outz00_1570);
																			return bgl_display_char(((unsigned char)
																					'\n'), BgL_outz00_1570);
																			break;
																		default:
																		BgL_case_else4665z00_1597:
																			{	/* SawMsil/out.scm 276 */
																				bool_t BgL_testz00_3682;

																				if (
																					((long) CINT(BgL_nz00_41) >
																						((long) 8)))
																					{	/* SawMsil/out.scm 276 */
																						BgL_testz00_3682 =
																							(
																							(long) CINT(BgL_nz00_41) <
																							((long) 256));
																					}
																				else
																					{	/* SawMsil/out.scm 276 */
																						BgL_testz00_3682 = ((bool_t) 0);
																					}
																				if (BgL_testz00_3682)
																					{	/* SawMsil/out.scm 276 */
																						bgl_display_string
																							(BGl_string5080z00zzmsil_outz00,
																							BgL_outz00_1570);
																					}
																				else
																					{	/* SawMsil/out.scm 276 */
																						BFALSE;
																					}
																			}
																			bgl_display_string
																				(BGl_string5081z00zzmsil_outz00,
																				BgL_outz00_1570);
																			bgl_display_obj(BgL_nz00_41,
																				BgL_outz00_1570);
																			return bgl_display_char(((unsigned char)
																					'\n'), BgL_outz00_1570);
																}}
															else
																{	/* SawMsil/out.scm 270 */
																	goto BgL_case_else4665z00_1597;
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



/* _push-num */
	obj_t BGl__pushzd2numzd2zzmsil_outz00(obj_t BgL_envz00_3153,
		obj_t BgL_mez00_3154, obj_t BgL_nz00_3155, obj_t BgL_typez00_3156)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 238 */
			return
				BGl_pushzd2numzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3154), BgL_nz00_3155, BgL_typez00_3156);
		}
	}



/* push-int */
	BGL_EXPORTED_DEF obj_t BGl_pushzd2intzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_43, obj_t BgL_nz00_44)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 279 */
			return
				BGl_pushzd2numzd2zzmsil_outz00(BgL_mez00_43, BgL_nz00_44,
				CNST_TABLE_REF(((long) 14)));
		}
	}



/* _push-int */
	obj_t BGl__pushzd2intzd2zzmsil_outz00(obj_t BgL_envz00_3157,
		obj_t BgL_mez00_3158, obj_t BgL_nz00_3159)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 279 */
			return
				BGl_pushzd2intzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3158), BgL_nz00_3159);
		}
	}



/* push-string */
	BGL_EXPORTED_DEF obj_t BGl_pushzd2stringzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_45, obj_t BgL_sz00_46)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 282 */
			{	/* SawMsil/out.scm 283 */
				obj_t BgL_outz00_1607;

				BgL_outz00_1607 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_45))->BgL_outz00);
				bgl_display_string(BGl_string5070z00zzmsil_outz00, BgL_outz00_1607);
				BGl_stroutz00zzmsil_outz00(BgL_outz00_1607, BgL_sz00_46);
				bgl_display_string(BGl_string5071z00zzmsil_outz00, BgL_outz00_1607);
				return bgl_display_char(((unsigned char) '\n'), BgL_outz00_1607);
		}}
	}



/* _push-string */
	obj_t BGl__pushzd2stringzd2zzmsil_outz00(obj_t BgL_envz00_3160,
		obj_t BgL_mez00_3161, obj_t BgL_sz00_3162)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 282 */
			return
				BGl_pushzd2stringzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3161), BgL_sz00_3162);
		}
	}



/* strout */
	bool_t BGl_stroutz00zzmsil_outz00(obj_t BgL_outz00_47, obj_t BgL_sz00_48)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 288 */
			{	/* SawMsil/out.scm 290 */
				long BgL_nz00_1610;

				BgL_nz00_1610 = STRING_LENGTH(BgL_sz00_48);
				{
					long BgL_iz00_1612;

					BgL_iz00_1612 = ((long) 0);
				BgL_zc3anonymousza34843ze3z83_1613:
					if ((BgL_iz00_1612 == BgL_nz00_1610))
						{	/* SawMsil/out.scm 292 */
							return ((bool_t) 0);
						}
					else
						{	/* SawMsil/out.scm 293 */
							unsigned char BgL_cz00_1615;

							BgL_cz00_1615 = STRING_REF(BgL_sz00_48, BgL_iz00_1612);
							{	/* SawMsil/out.scm 294 */
								long BgL_cnz00_1616;

								BgL_cnz00_1616 = (BgL_cz00_1615);
								if ((BgL_cz00_1615 == ((unsigned char) '"')))
									{	/* SawMsil/out.scm 296 */
										bgl_display_string(BGl_string5084z00zzmsil_outz00,
											BgL_outz00_47);
									}
								else
									{	/* SawMsil/out.scm 296 */
										if ((BgL_cz00_1615 == ((unsigned char) '\\')))
											{	/* SawMsil/out.scm 298 */
												bgl_display_string(BGl_string5085z00zzmsil_outz00,
													BgL_outz00_47);
											}
										else
											{	/* SawMsil/out.scm 298 */
												if ((BgL_cnz00_1616 == ((long) 0)))
													{	/* SawMsil/out.scm 300 */
														{	/* SawMsil/out.scm 301 */
															unsigned char BgL_auxz00_3720;

															BgL_auxz00_3720 = (((long) 192));
															bgl_display_char(BgL_auxz00_3720, BgL_outz00_47);
														}
														{	/* SawMsil/out.scm 302 */
															unsigned char BgL_auxz00_3723;

															BgL_auxz00_3723 = (((long) 128));
															bgl_display_char(BgL_auxz00_3723, BgL_outz00_47);
													}}
												else
													{	/* SawMsil/out.scm 300 */
														if ((BgL_cnz00_1616 < ((long) 128)))
															{	/* SawMsil/out.scm 303 */
																bgl_display_char(BgL_cz00_1615, BgL_outz00_47);
															}
														else
															{	/* SawMsil/out.scm 303 */
																if ((BgL_cnz00_1616 < ((long) 2048)))
																	{	/* SawMsil/out.scm 305 */
																		{	/* SawMsil/out.scm 306 */
																			long BgL_arg4850z00_1622;

																			BgL_arg4850z00_1622 =
																				(((long) 192) |
																				(BgL_cnz00_1616 >> (int) (((long) 6))));
																			{	/* SawMsil/out.scm 306 */
																				unsigned char BgL_auxz00_3734;

																				BgL_auxz00_3734 = (BgL_arg4850z00_1622);
																				bgl_display_char(BgL_auxz00_3734,
																					BgL_outz00_47);
																		}}
																		{	/* SawMsil/out.scm 307 */
																			long BgL_arg4853z00_1625;

																			BgL_arg4853z00_1625 =
																				(((long) 128) |
																				(BgL_cnz00_1616 & ((long) 63)));
																			{	/* SawMsil/out.scm 307 */
																				unsigned char BgL_auxz00_3739;

																				BgL_auxz00_3739 = (BgL_arg4853z00_1625);
																				bgl_display_char(BgL_auxz00_3739,
																					BgL_outz00_47);
																	}}}
																else
																	{	/* SawMsil/out.scm 305 */
																		{	/* SawMsil/out.scm 309 */
																			long BgL_arg4856z00_1628;

																			BgL_arg4856z00_1628 =
																				(((long) 224) |
																				(BgL_cnz00_1616 >>
																					(int) (((long) 12))));
																			{	/* SawMsil/out.scm 309 */
																				unsigned char BgL_auxz00_3745;

																				BgL_auxz00_3745 = (BgL_arg4856z00_1628);
																				bgl_display_char(BgL_auxz00_3745,
																					BgL_outz00_47);
																		}}
																		{	/* SawMsil/out.scm 310 */
																			long BgL_arg4859z00_1631;

																			BgL_arg4859z00_1631 =
																				(((long) 128) |
																				((BgL_cnz00_1616 >>
																						(int) (((long) 6))) & ((long) 63)));
																			{	/* SawMsil/out.scm 310 */
																				unsigned char BgL_auxz00_3752;

																				BgL_auxz00_3752 = (BgL_arg4859z00_1631);
																				bgl_display_char(BgL_auxz00_3752,
																					BgL_outz00_47);
																		}}
																		{	/* SawMsil/out.scm 311 */
																			long BgL_arg4864z00_1636;

																			BgL_arg4864z00_1636 =
																				(((long) 128) |
																				(BgL_cnz00_1616 & ((long) 63)));
																			{	/* SawMsil/out.scm 311 */
																				unsigned char BgL_auxz00_3757;

																				BgL_auxz00_3757 = (BgL_arg4864z00_1636);
																				bgl_display_char(BgL_auxz00_3757,
																					BgL_outz00_47);
									}}}}}}}
								{
									long BgL_iz00_3760;

									BgL_iz00_3760 = (BgL_iz00_1612 + ((long) 1));
									BgL_iz00_1612 = BgL_iz00_3760;
									goto BgL_zc3anonymousza34843ze3z83_1613;
								}
							}
						}
				}
			}
		}
	}



/* push-constant */
	BGL_EXPORTED_DEF obj_t BGl_pushzd2constantzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_49, obj_t BgL_xz00_50)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 314 */
			{	/* SawMsil/out.scm 315 */
				obj_t BgL_port4702z00_1645;

				BgL_port4702z00_1645 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_49))->BgL_outz00);
				bgl_display_string(BGl_string5086z00zzmsil_outz00,
					BgL_port4702z00_1645);
				bgl_display_obj(BgL_xz00_50, BgL_port4702z00_1645);
				bgl_display_string(BGl_string5087z00zzmsil_outz00,
					BgL_port4702z00_1645);
				bgl_display_obj(BgL_xz00_50, BgL_port4702z00_1645);
				bgl_display_string(BGl_string5088z00zzmsil_outz00,
					BgL_port4702z00_1645);
				bgl_display_obj(BgL_xz00_50, BgL_port4702z00_1645);
				bgl_display_string(BGl_string5089z00zzmsil_outz00,
					BgL_port4702z00_1645);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4702z00_1645);
		}}
	}



/* _push-constant */
	obj_t BGl__pushzd2constantzd2zzmsil_outz00(obj_t BgL_envz00_3163,
		obj_t BgL_mez00_3164, obj_t BgL_xz00_3165)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 314 */
			return
				BGl_pushzd2constantzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3164), BgL_xz00_3165);
		}
	}



/* push-constant2 */
	BGL_EXPORTED_DEF obj_t BGl_pushzd2constant2zd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_51, obj_t BgL_cz00_52, obj_t BgL_xz00_53)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 318 */
			{	/* SawMsil/out.scm 319 */
				obj_t BgL_port4703z00_1646;

				BgL_port4703z00_1646 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_51))->BgL_outz00);
				bgl_display_string(BGl_string5086z00zzmsil_outz00,
					BgL_port4703z00_1646);
				bgl_display_obj(BgL_cz00_52, BgL_port4703z00_1646);
				bgl_display_string(BGl_string5087z00zzmsil_outz00,
					BgL_port4703z00_1646);
				bgl_display_obj(BgL_cz00_52, BgL_port4703z00_1646);
				bgl_display_string(BGl_string5090z00zzmsil_outz00,
					BgL_port4703z00_1646);
				bgl_display_obj(BgL_xz00_53, BgL_port4703z00_1646);
				bgl_display_string(BGl_string5089z00zzmsil_outz00,
					BgL_port4703z00_1646);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4703z00_1646);
		}}
	}



/* _push-constant2 */
	obj_t BGl__pushzd2constant2zd2zzmsil_outz00(obj_t BgL_envz00_3166,
		obj_t BgL_mez00_3167, obj_t BgL_cz00_3168, obj_t BgL_xz00_3169)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 318 */
			return
				BGl_pushzd2constant2zd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3167), BgL_cz00_3168, BgL_xz00_3169);
		}
	}



/* load-global */
	BGL_EXPORTED_DEF obj_t BGl_loadzd2globalzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_54, BgL_globalz00_bglt BgL_varz00_55)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 325 */
			{	/* SawMsil/out.scm 326 */
				obj_t BgL_port4704z00_1647;

				BgL_port4704z00_1647 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_54))->BgL_outz00);
				bgl_display_string(BGl_string5091z00zzmsil_outz00,
					BgL_port4704z00_1647);
				{	/* SawMsil/out.scm 326 */
					obj_t BgL_arg4870z00_1648;

					{
						BgL_variablez00_bglt BgL_auxz00_3786;

						BgL_auxz00_3786 = (BgL_variablez00_bglt) (BgL_varz00_55);
						BgL_arg4870z00_1648 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_3786))->BgL_namez00);
					}
					bgl_display_obj(BgL_arg4870z00_1648, BgL_port4704z00_1647);
				}
				return bgl_display_char(((unsigned char) '\n'), BgL_port4704z00_1647);
		}}
	}



/* _load-global */
	obj_t BGl__loadzd2globalzd2zzmsil_outz00(obj_t BgL_envz00_3170,
		obj_t BgL_mez00_3171, obj_t BgL_varz00_3172)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 325 */
			return
				BGl_loadzd2globalzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3171),
				(BgL_globalz00_bglt) (BgL_varz00_3172));
		}
	}



/* store-global */
	BGL_EXPORTED_DEF obj_t BGl_storezd2globalzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_56, BgL_globalz00_bglt BgL_varz00_57)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 328 */
			{	/* SawMsil/out.scm 329 */
				obj_t BgL_port4705z00_1649;

				BgL_port4705z00_1649 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_56))->BgL_outz00);
				bgl_display_string(BGl_string5092z00zzmsil_outz00,
					BgL_port4705z00_1649);
				{	/* SawMsil/out.scm 329 */
					obj_t BgL_arg4871z00_1650;

					{
						BgL_variablez00_bglt BgL_auxz00_3796;

						BgL_auxz00_3796 = (BgL_variablez00_bglt) (BgL_varz00_57);
						BgL_arg4871z00_1650 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_3796))->BgL_namez00);
					}
					bgl_display_obj(BgL_arg4871z00_1650, BgL_port4705z00_1649);
				}
				return bgl_display_char(((unsigned char) '\n'), BgL_port4705z00_1649);
		}}
	}



/* _store-global */
	obj_t BGl__storezd2globalzd2zzmsil_outz00(obj_t BgL_envz00_3173,
		obj_t BgL_mez00_3174, obj_t BgL_varz00_3175)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 328 */
			return
				BGl_storezd2globalzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3174),
				(BgL_globalz00_bglt) (BgL_varz00_3175));
		}
	}



/* load-par */
	BGL_EXPORTED_DEF obj_t BGl_loadzd2parzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_58, int BgL_nz00_59)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 334 */
			{	/* SawMsil/out.scm 335 */
				obj_t BgL_sz00_1651;

				if (((long) (BgL_nz00_59) < ((long) 4)))
					{	/* SawMsil/out.scm 335 */
						BgL_sz00_1651 = BGl_string5083z00zzmsil_outz00;
					}
				else
					{	/* SawMsil/out.scm 335 */
						if (((long) (BgL_nz00_59) < ((long) 256)))
							{	/* SawMsil/out.scm 335 */
								BgL_sz00_1651 = BGl_string5093z00zzmsil_outz00;
							}
						else
							{	/* SawMsil/out.scm 335 */
								BgL_sz00_1651 = BGl_string5081z00zzmsil_outz00;
							}
					}
				{	/* SawMsil/out.scm 336 */
					obj_t BgL_port4706z00_1652;

					BgL_port4706z00_1652 =
						(((BgL_dotnetz00_bglt) CREF(BgL_mez00_58))->BgL_outz00);
					bgl_display_string(BGl_string5094z00zzmsil_outz00,
						BgL_port4706z00_1652);
					bgl_display_obj(BgL_sz00_1651, BgL_port4706z00_1652);
					bgl_display_obj(BINT(BgL_nz00_59), BgL_port4706z00_1652);
					return bgl_display_char(((unsigned char) '\n'), BgL_port4706z00_1652);
		}}}
	}



/* _load-par */
	obj_t BGl__loadzd2parzd2zzmsil_outz00(obj_t BgL_envz00_3176,
		obj_t BgL_mez00_3177, obj_t BgL_nz00_3178)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 334 */
			return
				BGl_loadzd2parzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3177), CINT(BgL_nz00_3178));
		}
	}



/* store-par */
	BGL_EXPORTED_DEF obj_t BGl_storezd2parzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_60, int BgL_nz00_61)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 338 */
			{	/* SawMsil/out.scm 339 */
				obj_t BgL_sz00_1655;

				if (((long) (BgL_nz00_61) < ((long) 256)))
					{	/* SawMsil/out.scm 339 */
						BgL_sz00_1655 = BGl_string5093z00zzmsil_outz00;
					}
				else
					{	/* SawMsil/out.scm 339 */
						BgL_sz00_1655 = BGl_string5081z00zzmsil_outz00;
					}
				{	/* SawMsil/out.scm 340 */
					obj_t BgL_port4707z00_1656;

					BgL_port4707z00_1656 =
						(((BgL_dotnetz00_bglt) CREF(BgL_mez00_60))->BgL_outz00);
					bgl_display_string(BGl_string5095z00zzmsil_outz00,
						BgL_port4707z00_1656);
					bgl_display_obj(BgL_sz00_1655, BgL_port4707z00_1656);
					bgl_display_obj(BINT(BgL_nz00_61), BgL_port4707z00_1656);
					return bgl_display_char(((unsigned char) '\n'), BgL_port4707z00_1656);
		}}}
	}



/* _store-par */
	obj_t BGl__storezd2parzd2zzmsil_outz00(obj_t BgL_envz00_3179,
		obj_t BgL_mez00_3180, obj_t BgL_nz00_3181)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 338 */
			return
				BGl_storezd2parzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3180), CINT(BgL_nz00_3181));
		}
	}



/* load-var */
	BGL_EXPORTED_DEF obj_t BGl_loadzd2varzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_62, int BgL_nz00_63)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 342 */
			{	/* SawMsil/out.scm 343 */
				obj_t BgL_sz00_1658;

				if (((long) (BgL_nz00_63) < ((long) 4)))
					{	/* SawMsil/out.scm 343 */
						BgL_sz00_1658 = BGl_string5083z00zzmsil_outz00;
					}
				else
					{	/* SawMsil/out.scm 343 */
						if (((long) (BgL_nz00_63) < ((long) 256)))
							{	/* SawMsil/out.scm 343 */
								BgL_sz00_1658 = BGl_string5093z00zzmsil_outz00;
							}
						else
							{	/* SawMsil/out.scm 343 */
								BgL_sz00_1658 = BGl_string5081z00zzmsil_outz00;
							}
					}
				{	/* SawMsil/out.scm 344 */
					obj_t BgL_port4708z00_1659;

					BgL_port4708z00_1659 =
						(((BgL_dotnetz00_bglt) CREF(BgL_mez00_62))->BgL_outz00);
					bgl_display_string(BGl_string5096z00zzmsil_outz00,
						BgL_port4708z00_1659);
					bgl_display_obj(BgL_sz00_1658, BgL_port4708z00_1659);
					bgl_display_obj(BINT(BgL_nz00_63), BgL_port4708z00_1659);
					return bgl_display_char(((unsigned char) '\n'), BgL_port4708z00_1659);
		}}}
	}



/* _load-var */
	obj_t BGl__loadzd2varzd2zzmsil_outz00(obj_t BgL_envz00_3182,
		obj_t BgL_mez00_3183, obj_t BgL_nz00_3184)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 342 */
			return
				BGl_loadzd2varzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3183), CINT(BgL_nz00_3184));
		}
	}



/* store-var */
	BGL_EXPORTED_DEF obj_t BGl_storezd2varzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_64, int BgL_nz00_65)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 346 */
			{	/* SawMsil/out.scm 347 */
				obj_t BgL_sz00_1662;

				if (((long) (BgL_nz00_65) < ((long) 4)))
					{	/* SawMsil/out.scm 347 */
						BgL_sz00_1662 = BGl_string5083z00zzmsil_outz00;
					}
				else
					{	/* SawMsil/out.scm 347 */
						if (((long) (BgL_nz00_65) < ((long) 256)))
							{	/* SawMsil/out.scm 347 */
								BgL_sz00_1662 = BGl_string5093z00zzmsil_outz00;
							}
						else
							{	/* SawMsil/out.scm 347 */
								BgL_sz00_1662 = BGl_string5081z00zzmsil_outz00;
							}
					}
				{	/* SawMsil/out.scm 348 */
					obj_t BgL_port4709z00_1663;

					BgL_port4709z00_1663 =
						(((BgL_dotnetz00_bglt) CREF(BgL_mez00_64))->BgL_outz00);
					bgl_display_string(BGl_string5097z00zzmsil_outz00,
						BgL_port4709z00_1663);
					bgl_display_obj(BgL_sz00_1662, BgL_port4709z00_1663);
					bgl_display_obj(BINT(BgL_nz00_65), BgL_port4709z00_1663);
					return bgl_display_char(((unsigned char) '\n'), BgL_port4709z00_1663);
		}}}
	}



/* _store-var */
	obj_t BGl__storezd2varzd2zzmsil_outz00(obj_t BgL_envz00_3185,
		obj_t BgL_mez00_3186, obj_t BgL_nz00_3187)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 346 */
			return
				BGl_storezd2varzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3186), CINT(BgL_nz00_3187));
		}
	}



/* _call */
	obj_t BGl__callz00zzmsil_outz00(BgL_dotnetz00_bglt BgL_mez00_66,
		obj_t BgL_callopz00_67, obj_t BgL_typerz00_68, obj_t BgL_namez00_69,
		obj_t BgL_argsz00_70)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 353 */
			{	/* SawMsil/out.scm 354 */
				obj_t BgL_outz00_1666;

				BgL_outz00_1666 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_66))->BgL_outz00);
				bgl_display_obj(BgL_callopz00_67, BgL_outz00_1666);
				bgl_display_obj(BGl_getzd2typezd2namez00zzmsil_outz00(BgL_typerz00_68),
					BgL_outz00_1666);
				bgl_display_string(BGl_string5047z00zzmsil_outz00, BgL_outz00_1666);
				bgl_display_obj(BgL_namez00_69, BgL_outz00_1666);
				BGl_declarezd2listzd2zzmsil_outz00(BgL_outz00_1666, BgL_argsz00_70,
					BGl_getzd2typezd2namezd2envzd2zzmsil_outz00);
				bgl_display_string(BGl_string5045z00zzmsil_outz00, BgL_outz00_1666);
				return bgl_display_char(((unsigned char) '\n'), BgL_outz00_1666);
		}}
	}



/* call-super */
	BGL_EXPORTED_DEF obj_t BGl_callzd2superzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_71, obj_t BgL_typerz00_72, obj_t BgL_pkgcz00_73,
		obj_t BgL_namez00_74, obj_t BgL_argsz00_75)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 362 */
			{	/* SawMsil/out.scm 363 */
				obj_t BgL_arg4881z00_2778;

				{	/* SawMsil/out.scm 363 */
					obj_t BgL_list4882z00_2779;

					{	/* SawMsil/out.scm 363 */
						obj_t BgL_arg4883z00_2780;

						{	/* SawMsil/out.scm 363 */
							obj_t BgL_arg4885z00_2782;

							{	/* SawMsil/out.scm 363 */
								obj_t BgL_arg4886z00_2783;

								BgL_arg4886z00_2783 =
									MAKE_PAIR(BGl_string5098z00zzmsil_outz00, BNIL);
								BgL_arg4885z00_2782 =
									MAKE_PAIR(BgL_namez00_74, BgL_arg4886z00_2783);
							}
							BgL_arg4883z00_2780 =
								MAKE_PAIR(BGl_string5099z00zzmsil_outz00, BgL_arg4885z00_2782);
						}
						BgL_list4882z00_2779 =
							MAKE_PAIR(BgL_pkgcz00_73, BgL_arg4883z00_2780);
					}
					BgL_arg4881z00_2778 =
						BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list4882z00_2779);
				}
				return
					BGl__callz00zzmsil_outz00(BgL_mez00_71,
					BGl_string5100z00zzmsil_outz00, BgL_typerz00_72, BgL_arg4881z00_2778,
					BgL_argsz00_75);
			}
		}
	}



/* _call-super */
	obj_t BGl__callzd2superzd2zzmsil_outz00(obj_t BgL_envz00_3188,
		obj_t BgL_mez00_3189, obj_t BgL_typerz00_3190, obj_t BgL_pkgcz00_3191,
		obj_t BgL_namez00_3192, obj_t BgL_argsz00_3193)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 362 */
			return
				BGl_callzd2superzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3189), BgL_typerz00_3190,
				BgL_pkgcz00_3191, BgL_namez00_3192, BgL_argsz00_3193);
		}
	}



/* call-super-constructor */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2superzd2constructorz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_76, obj_t BgL_typez00_77, obj_t BgL_argsz00_78)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 366 */
			{	/* SawMsil/out.scm 367 */
				obj_t BgL_arg4888z00_2785;

				obj_t BgL_arg4889z00_2786;

				BgL_arg4888z00_2785 = CNST_TABLE_REF(((long) 4));
				BgL_arg4889z00_2786 =
					string_append(BgL_typez00_77, BGl_string5101z00zzmsil_outz00);
				return
					BGl__callz00zzmsil_outz00(BgL_mez00_76,
					BGl_string5100z00zzmsil_outz00, BgL_arg4888z00_2785,
					BgL_arg4889z00_2786, BgL_argsz00_78);
			}
		}
	}



/* _call-super-constructor */
	obj_t BGl__callzd2superzd2constructorz00zzmsil_outz00(obj_t BgL_envz00_3194,
		obj_t BgL_mez00_3195, obj_t BgL_typez00_3196, obj_t BgL_argsz00_3197)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 366 */
			return
				BGl_callzd2superzd2constructorz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3195), BgL_typez00_3196,
				BgL_argsz00_3197);
		}
	}



/* libcall */
	BGL_EXPORTED_DEF obj_t BGl_libcallz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_79, obj_t BgL_typerz00_80, obj_t BgL_pkgcz00_81,
		obj_t BgL_namez00_82, obj_t BgL_argsz00_83)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 369 */
			{	/* SawMsil/out.scm 370 */
				obj_t BgL_outz00_1679;

				BgL_outz00_1679 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_79))->BgL_outz00);
				bgl_display_string(BGl_string5102z00zzmsil_outz00, BgL_outz00_1679);
				bgl_display_obj(BGl_getzd2typezd2namez00zzmsil_outz00(BgL_typerz00_80),
					BgL_outz00_1679);
				bgl_display_string(BGl_string5103z00zzmsil_outz00, BgL_outz00_1679);
				bgl_display_obj(BgL_pkgcz00_81, BgL_outz00_1679);
				bgl_display_string(BGl_string5090z00zzmsil_outz00, BgL_outz00_1679);
				bgl_display_obj(BgL_namez00_82, BgL_outz00_1679);
				bgl_display_string(BGl_string5098z00zzmsil_outz00, BgL_outz00_1679);
				BGl_declarezd2listzd2zzmsil_outz00(BgL_outz00_1679, BgL_argsz00_83,
					BGl_getzd2typezd2namezd2envzd2zzmsil_outz00);
				bgl_display_string(BGl_string5045z00zzmsil_outz00, BgL_outz00_1679);
				return bgl_display_char(((unsigned char) '\n'), BgL_outz00_1679);
		}}
	}



/* _libcall */
	obj_t BGl__libcallz00zzmsil_outz00(obj_t BgL_envz00_3198,
		obj_t BgL_mez00_3199, obj_t BgL_typerz00_3200, obj_t BgL_pkgcz00_3201,
		obj_t BgL_namez00_3202, obj_t BgL_argsz00_3203)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 369 */
			return
				BGl_libcallz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3199), BgL_typerz00_3200,
				BgL_pkgcz00_3201, BgL_namez00_3202, BgL_argsz00_3203);
		}
	}



/* callvirt */
	BGL_EXPORTED_DEF obj_t BGl_callvirtz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_84, obj_t BgL_typerz00_85, obj_t BgL_namez00_86,
		obj_t BgL_argsz00_87)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 381 */
			return
				BGl__callz00zzmsil_outz00(BgL_mez00_84, BGl_string5104z00zzmsil_outz00,
				BgL_typerz00_85, BgL_namez00_86, BgL_argsz00_87);
		}
	}



/* _callvirt */
	obj_t BGl__callvirtz00zzmsil_outz00(obj_t BgL_envz00_3204,
		obj_t BgL_mez00_3205, obj_t BgL_typerz00_3206, obj_t BgL_namez00_3207,
		obj_t BgL_argsz00_3208)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 381 */
			return
				BGl_callvirtz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3205), BgL_typerz00_3206,
				BgL_namez00_3207, BgL_argsz00_3208);
		}
	}



/* call */
	BGL_EXPORTED_DEF obj_t BGl_callz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_88, obj_t BgL_namez00_89, obj_t BgL_modifiersz00_90,
		obj_t BgL_argsz00_91)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 384 */
			{	/* SawMsil/out.scm 385 */
				obj_t BgL_outz00_1682;

				BgL_outz00_1682 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_88))->BgL_outz00);
				bgl_display_string(BGl_string5102z00zzmsil_outz00, BgL_outz00_1682);
				bgl_display_obj(BgL_modifiersz00_90, BgL_outz00_1682);
				bgl_display_string(BGl_string5047z00zzmsil_outz00, BgL_outz00_1682);
				bgl_display_obj(BgL_namez00_89, BgL_outz00_1682);
				BGl_declarezd2listzd2zzmsil_outz00(BgL_outz00_1682, BgL_argsz00_91,
					BGl_getzd2typezd2namezd2envzd2zzmsil_outz00);
				bgl_display_string(BGl_string5045z00zzmsil_outz00, BgL_outz00_1682);
				return bgl_display_char(((unsigned char) '\n'), BgL_outz00_1682);
		}}
	}



/* _call5040 */
	obj_t BGl__call5040z00zzmsil_outz00(obj_t BgL_envz00_3209,
		obj_t BgL_mez00_3210, obj_t BgL_namez00_3211, obj_t BgL_modifiersz00_3212,
		obj_t BgL_argsz00_3213)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 384 */
			return
				BGl_callz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3210), BgL_namez00_3211,
				BgL_modifiersz00_3212, BgL_argsz00_3213);
		}
	}



/* call-global */
	BGL_EXPORTED_DEF obj_t BGl_callzd2globalzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_92, BgL_globalz00_bglt BgL_varz00_93)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 393 */
			{
				BgL_valuez00_bglt BgL_funz00_1699;

				BgL_valuez00_bglt BgL_funz00_1692;

				{	/* SawMsil/out.scm 410 */
					BgL_valuez00_bglt BgL_funz00_1686;

					obj_t BgL_outz00_1687;

					{
						BgL_variablez00_bglt BgL_auxz00_3910;

						BgL_auxz00_3910 = (BgL_variablez00_bglt) (BgL_varz00_93);
						BgL_funz00_1686 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_3910))->BgL_valuez00);
					}
					BgL_outz00_1687 =
						(((BgL_dotnetz00_bglt) CREF(BgL_mez00_92))->BgL_outz00);
					{	/* SawMsil/out.scm 411 */
						obj_t BgL_auxz00_3914;

						BgL_funz00_1699 = BgL_funz00_1686;
						{	/* SawMsil/out.scm 401 */
							bool_t BgL_testz00_3915;

							{	/* SawMsil/out.scm 401 */
								obj_t BgL_obj2019z00_2819;

								BgL_obj2019z00_2819 = (obj_t) (BgL_funz00_1699);
								BgL_testz00_3915 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj2019z00_2819,
									BGl_cfunz00zzast_varz00);
							}
							if (BgL_testz00_3915)
								{	/* SawMsil/out.scm 402 */
									obj_t BgL_modifiersz00_1702;

									{
										BgL_cfunz00_bglt BgL_auxz00_3918;

										BgL_auxz00_3918 = (BgL_cfunz00_bglt) (BgL_funz00_1699);
										BgL_modifiersz00_1702 =
											(((BgL_cfunz00_bglt) CREF(BgL_auxz00_3918))->
											BgL_methodz00);
									}
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(CNST_TABLE_REF(((long) 15)), BgL_modifiersz00_1702)))
										{	/* SawMsil/out.scm 404 */
											BgL_auxz00_3914 = BGl_string5102z00zzmsil_outz00;
										}
									else
										{	/* SawMsil/out.scm 404 */
											if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(CNST_TABLE_REF(((long) 16)), BgL_modifiersz00_1702)))
												{	/* SawMsil/out.scm 405 */
													BgL_auxz00_3914 = BGl_string5104z00zzmsil_outz00;
												}
											else
												{	/* SawMsil/out.scm 405 */
													if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
															(CNST_TABLE_REF(((long) 17)),
																BgL_modifiersz00_1702)))
														{	/* SawMsil/out.scm 406 */
															BgL_auxz00_3914 = BGl_string5100z00zzmsil_outz00;
														}
													else
														{	/* SawMsil/out.scm 406 */
															if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																	(CNST_TABLE_REF(((long) 18)),
																		BgL_modifiersz00_1702)))
																{	/* SawMsil/out.scm 407 */
																	BgL_auxz00_3914 =
																		BGl_string5100z00zzmsil_outz00;
																}
															else
																{	/* SawMsil/out.scm 407 */
																	BgL_auxz00_3914 =
																		BGl_string5104z00zzmsil_outz00;
																}
														}
												}
										}
								}
							else
								{	/* SawMsil/out.scm 401 */
									BgL_auxz00_3914 = BGl_string5102z00zzmsil_outz00;
								}
						}
						bgl_display_obj(BgL_auxz00_3914, BgL_outz00_1687);
					}
					{	/* SawMsil/out.scm 412 */
						obj_t BgL_arg4892z00_1689;

						{
							BgL_variablez00_bglt BgL_auxz00_3938;

							BgL_auxz00_3938 = (BgL_variablez00_bglt) (BgL_varz00_93);
							BgL_arg4892z00_1689 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_3938))->BgL_namez00);
						}
						bgl_display_obj(BgL_arg4892z00_1689, BgL_outz00_1687);
					}
					{	/* SawMsil/out.scm 413 */
						obj_t BgL_auxz00_3942;

						BgL_funz00_1692 = BgL_funz00_1686;
						{	/* SawMsil/out.scm 395 */
							bool_t BgL_testz00_3943;

							{	/* SawMsil/out.scm 395 */
								obj_t BgL_obj2019z00_2813;

								BgL_obj2019z00_2813 = (obj_t) (BgL_funz00_1692);
								BgL_testz00_3943 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj2019z00_2813,
									BGl_cfunz00zzast_varz00);
							}
							if (BgL_testz00_3943)
								{	/* SawMsil/out.scm 396 */
									bool_t BgL_testz00_3946;

									{	/* SawMsil/out.scm 396 */
										obj_t BgL_auxz00_3947;

										{	/* SawMsil/out.scm 396 */
											obj_t BgL_auxz00_3948;

											{
												BgL_cfunz00_bglt BgL_auxz00_3950;

												BgL_auxz00_3950 = (BgL_cfunz00_bglt) (BgL_funz00_1692);
												BgL_auxz00_3948 =
													(((BgL_cfunz00_bglt) CREF(BgL_auxz00_3950))->
													BgL_methodz00);
											}
											BgL_auxz00_3947 =
												BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF(
													((long) 15)), BgL_auxz00_3948);
										}
										BgL_testz00_3946 = CBOOL(BgL_auxz00_3947);
									}
									if (BgL_testz00_3946)
										{
											BgL_cfunz00_bglt BgL_auxz00_3955;

											BgL_auxz00_3955 = (BgL_cfunz00_bglt) (BgL_funz00_1692);
											BgL_auxz00_3942 =
												(((BgL_cfunz00_bglt) CREF(BgL_auxz00_3955))->
												BgL_argszd2typezd2);
										}
									else
										{	/* SawMsil/out.scm 398 */
											obj_t BgL_pairz00_2817;

											{
												BgL_cfunz00_bglt BgL_auxz00_3958;

												BgL_auxz00_3958 = (BgL_cfunz00_bglt) (BgL_funz00_1692);
												BgL_pairz00_2817 =
													(((BgL_cfunz00_bglt) CREF(BgL_auxz00_3958))->
													BgL_argszd2typezd2);
											}
											BgL_auxz00_3942 = CDR(BgL_pairz00_2817);
										}
								}
							else
								{
									BgL_sfunz00_bglt BgL_auxz00_3962;

									BgL_auxz00_3962 = (BgL_sfunz00_bglt) (BgL_funz00_1692);
									BgL_auxz00_3942 =
										(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3962))->BgL_argsz00);
								}
						}
						BGl_declarezd2listzd2zzmsil_outz00(BgL_outz00_1687, BgL_auxz00_3942,
							BGl_getzd2typezd2namezd2envzd2zzmsil_outz00);
					}
					bgl_display_string(BGl_string5045z00zzmsil_outz00, BgL_outz00_1687);
					return bgl_display_char(((unsigned char) '\n'), BgL_outz00_1687);
		}}}
	}



/* _call-global */
	obj_t BGl__callzd2globalzd2zzmsil_outz00(obj_t BgL_envz00_3214,
		obj_t BgL_mez00_3215, obj_t BgL_varz00_3216)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 393 */
			return
				BGl_callzd2globalzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3215),
				(BgL_globalz00_bglt) (BgL_varz00_3216));
		}
	}



/* return */
	BGL_EXPORTED_DEF obj_t BGl_returnz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_94)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 416 */
			{	/* SawMsil/out.scm 417 */
				obj_t BgL_port4714z00_2821;

				BgL_port4714z00_2821 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_94))->BgL_outz00);
				bgl_display_string(BGl_string5105z00zzmsil_outz00,
					BgL_port4714z00_2821);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4714z00_2821);
		}}
	}



/* _return */
	obj_t BGl__returnz00zzmsil_outz00(obj_t BgL_envz00_3217, obj_t BgL_mez00_3218)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 416 */
			return BGl_returnz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_3218));
		}
	}



/* throw */
	BGL_EXPORTED_DEF obj_t BGl_throwz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_95)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 422 */
			{	/* SawMsil/out.scm 423 */
				obj_t BgL_port4715z00_2826;

				BgL_port4715z00_2826 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_95))->BgL_outz00);
				bgl_display_string(BGl_string5106z00zzmsil_outz00,
					BgL_port4715z00_2826);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4715z00_2826);
		}}
	}



/* _throw */
	obj_t BGl__throwz00zzmsil_outz00(obj_t BgL_envz00_3219, obj_t BgL_mez00_3220)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 422 */
			return BGl_throwz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_3220));
		}
	}



/* rethrow */
	BGL_EXPORTED_DEF obj_t BGl_rethrowz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_96)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 425 */
			{	/* SawMsil/out.scm 426 */
				obj_t BgL_port4716z00_2831;

				BgL_port4716z00_2831 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_96))->BgL_outz00);
				bgl_display_string(BGl_string5107z00zzmsil_outz00,
					BgL_port4716z00_2831);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4716z00_2831);
		}}
	}



/* _rethrow */
	obj_t BGl__rethrowz00zzmsil_outz00(obj_t BgL_envz00_3221,
		obj_t BgL_mez00_3222)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 425 */
			return BGl_rethrowz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_3222));
		}
	}



/* open-try */
	BGL_EXPORTED_DEF obj_t BGl_openzd2tryzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_97)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 428 */
			{	/* SawMsil/out.scm 429 */
				obj_t BgL_port4717z00_2836;

				BgL_port4717z00_2836 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_97))->BgL_outz00);
				bgl_display_string(BGl_string5108z00zzmsil_outz00,
					BgL_port4717z00_2836);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4717z00_2836);
		}}
	}



/* _open-try */
	obj_t BGl__openzd2tryzd2zzmsil_outz00(obj_t BgL_envz00_3223,
		obj_t BgL_mez00_3224)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 428 */
			return
				BGl_openzd2tryzd2zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_3224));
		}
	}



/* open-catch */
	BGL_EXPORTED_DEF obj_t BGl_openzd2catchzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_98, obj_t BgL_typez00_99, obj_t BgL_contz00_100)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 431 */
			{	/* SawMsil/out.scm 432 */
				obj_t BgL_outz00_1713;

				BgL_outz00_1713 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_98))->BgL_outz00);
				bgl_display_string(BGl_string5109z00zzmsil_outz00, BgL_outz00_1713);
				bgl_display_obj(BgL_contz00_100, BgL_outz00_1713);
				bgl_display_char(((unsigned char) '\n'), BgL_outz00_1713);
				bgl_display_string(BGl_string5110z00zzmsil_outz00, BgL_outz00_1713);
				bgl_display_obj(BGl_getzd2typezd2namez00zzmsil_outz00(BgL_typez00_99),
					BgL_outz00_1713);
				bgl_display_string(BGl_string5056z00zzmsil_outz00, BgL_outz00_1713);
				return bgl_display_char(((unsigned char) '\n'), BgL_outz00_1713);
		}}
	}



/* _open-catch */
	obj_t BGl__openzd2catchzd2zzmsil_outz00(obj_t BgL_envz00_3225,
		obj_t BgL_mez00_3226, obj_t BgL_typez00_3227, obj_t BgL_contz00_3228)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 431 */
			return
				BGl_openzd2catchzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3226), BgL_typez00_3227,
				BgL_contz00_3228);
		}
	}



/* leave */
	BGL_EXPORTED_DEF obj_t BGl_leavez00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_101, obj_t BgL_contz00_102)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 436 */
			{	/* SawMsil/out.scm 437 */
				obj_t BgL_port4720z00_2850;

				BgL_port4720z00_2850 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_101))->BgL_outz00);
				bgl_display_string(BGl_string5109z00zzmsil_outz00,
					BgL_port4720z00_2850);
				bgl_display_obj(BgL_contz00_102, BgL_port4720z00_2850);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4720z00_2850);
		}}
	}



/* _leave */
	obj_t BGl__leavez00zzmsil_outz00(obj_t BgL_envz00_3229, obj_t BgL_mez00_3230,
		obj_t BgL_contz00_3231)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 436 */
			return
				BGl_leavez00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3230), BgL_contz00_3231);
		}
	}



/* close-try */
	BGL_EXPORTED_DEF obj_t BGl_closezd2tryzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_103, obj_t BgL_contz00_104)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 439 */
			{	/* SawMsil/out.scm 440 */
				obj_t BgL_outz00_1718;

				BgL_outz00_1718 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_103))->BgL_outz00);
				bgl_display_string(BGl_string5109z00zzmsil_outz00, BgL_outz00_1718);
				bgl_display_obj(BgL_contz00_104, BgL_outz00_1718);
				bgl_display_char(((unsigned char) '\n'), BgL_outz00_1718);
				bgl_display_string(BGl_string5111z00zzmsil_outz00, BgL_outz00_1718);
				bgl_display_char(((unsigned char) '\n'), BgL_outz00_1718);
				bgl_display_obj(BgL_contz00_104, BgL_outz00_1718);
				return
					bgl_display_string(BGl_string5112z00zzmsil_outz00, BgL_outz00_1718);
			}
		}
	}



/* _close-try */
	obj_t BGl__closezd2tryzd2zzmsil_outz00(obj_t BgL_envz00_3232,
		obj_t BgL_mez00_3233, obj_t BgL_contz00_3234)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 439 */
			return
				BGl_closezd2tryzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3233), BgL_contz00_3234);
		}
	}



/* newarray */
	BGL_EXPORTED_DEF obj_t BGl_newarrayz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_105, obj_t BgL_typez00_106)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 449 */
			{	/* SawMsil/out.scm 450 */
				obj_t BgL_port4723z00_1721;

				BgL_port4723z00_1721 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_105))->BgL_outz00);
				bgl_display_string(BGl_string5113z00zzmsil_outz00,
					BgL_port4723z00_1721);
				bgl_display_obj(BGl_getzd2typezd2namez00zzmsil_outz00(BgL_typez00_106),
					BgL_port4723z00_1721);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4723z00_1721);
		}}
	}



/* _newarray */
	obj_t BGl__newarrayz00zzmsil_outz00(obj_t BgL_envz00_3235,
		obj_t BgL_mez00_3236, obj_t BgL_typez00_3237)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 449 */
			return
				BGl_newarrayz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3236), BgL_typez00_3237);
		}
	}



/* extension */
	obj_t BGl_extensionz00zzmsil_outz00(obj_t BgL_typez00_107)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 452 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_typez00_107,
					BGl_typez00zztype_typez00))
				{	/* SawMsil/out.scm 454 */
					obj_t BgL_casezd2valuezd2_1724;

					{
						BgL_typez00_bglt BgL_auxz00_4027;

						BgL_auxz00_4027 = (BgL_typez00_bglt) (BgL_typez00_107);
						BgL_casezd2valuezd2_1724 =
							(((BgL_typez00_bglt) CREF(BgL_auxz00_4027))->BgL_idz00);
					}
					{	/* SawMsil/out.scm 454 */
						bool_t BgL_testz00_4030;

						{	/* SawMsil/out.scm 454 */
							bool_t BgL__ortest_4667z00_1734;

							BgL__ortest_4667z00_1734 =
								(BgL_casezd2valuezd2_1724 == CNST_TABLE_REF(((long) 19)));
							if (BgL__ortest_4667z00_1734)
								{	/* SawMsil/out.scm 454 */
									BgL_testz00_4030 = BgL__ortest_4667z00_1734;
								}
							else
								{	/* SawMsil/out.scm 454 */
									bool_t BgL__ortest_4668z00_1735;

									BgL__ortest_4668z00_1735 =
										(BgL_casezd2valuezd2_1724 == CNST_TABLE_REF(((long) 20)));
									if (BgL__ortest_4668z00_1735)
										{	/* SawMsil/out.scm 454 */
											BgL_testz00_4030 = BgL__ortest_4668z00_1735;
										}
									else
										{	/* SawMsil/out.scm 454 */
											bool_t BgL__ortest_4669z00_1736;

											BgL__ortest_4669z00_1736 =
												(BgL_casezd2valuezd2_1724 ==
												CNST_TABLE_REF(((long) 21)));
											if (BgL__ortest_4669z00_1736)
												{	/* SawMsil/out.scm 454 */
													BgL_testz00_4030 = BgL__ortest_4669z00_1736;
												}
											else
												{	/* SawMsil/out.scm 454 */
													BgL_testz00_4030 =
														(BgL_casezd2valuezd2_1724 ==
														CNST_TABLE_REF(((long) 22)));
						}}}}
						if (BgL_testz00_4030)
							{	/* SawMsil/out.scm 454 */
								return BGl_string5114z00zzmsil_outz00;
							}
						else
							{	/* SawMsil/out.scm 454 */
								bool_t BgL_testz00_4042;

								{	/* SawMsil/out.scm 454 */
									bool_t BgL__ortest_4670z00_1732;

									BgL__ortest_4670z00_1732 =
										(BgL_casezd2valuezd2_1724 == CNST_TABLE_REF(((long) 23)));
									if (BgL__ortest_4670z00_1732)
										{	/* SawMsil/out.scm 454 */
											BgL_testz00_4042 = BgL__ortest_4670z00_1732;
										}
									else
										{	/* SawMsil/out.scm 454 */
											bool_t BgL__ortest_4671z00_1733;

											BgL__ortest_4671z00_1733 =
												(BgL_casezd2valuezd2_1724 ==
												CNST_TABLE_REF(((long) 24)));
											if (BgL__ortest_4671z00_1733)
												{	/* SawMsil/out.scm 454 */
													BgL_testz00_4042 = BgL__ortest_4671z00_1733;
												}
											else
												{	/* SawMsil/out.scm 454 */
													BgL_testz00_4042 =
														(BgL_casezd2valuezd2_1724 ==
														CNST_TABLE_REF(((long) 25)));
								}}}
								if (BgL_testz00_4042)
									{	/* SawMsil/out.scm 454 */
										return BGl_string5115z00zzmsil_outz00;
									}
								else
									{	/* SawMsil/out.scm 454 */
										bool_t BgL_testz00_4051;

										{	/* SawMsil/out.scm 454 */
											bool_t BgL__ortest_4672z00_1730;

											BgL__ortest_4672z00_1730 =
												(BgL_casezd2valuezd2_1724 ==
												CNST_TABLE_REF(((long) 14)));
											if (BgL__ortest_4672z00_1730)
												{	/* SawMsil/out.scm 454 */
													BgL_testz00_4051 = BgL__ortest_4672z00_1730;
												}
											else
												{	/* SawMsil/out.scm 454 */
													bool_t BgL__ortest_4673z00_1731;

													BgL__ortest_4673z00_1731 =
														(BgL_casezd2valuezd2_1724 ==
														CNST_TABLE_REF(((long) 26)));
													if (BgL__ortest_4673z00_1731)
														{	/* SawMsil/out.scm 454 */
															BgL_testz00_4051 = BgL__ortest_4673z00_1731;
														}
													else
														{	/* SawMsil/out.scm 454 */
															BgL_testz00_4051 =
																(BgL_casezd2valuezd2_1724 ==
																CNST_TABLE_REF(((long) 27)));
										}}}
										if (BgL_testz00_4051)
											{	/* SawMsil/out.scm 454 */
												return BGl_string5116z00zzmsil_outz00;
											}
										else
											{	/* SawMsil/out.scm 454 */
												if (
													(BgL_casezd2valuezd2_1724 ==
														CNST_TABLE_REF(((long) 8))))
													{	/* SawMsil/out.scm 454 */
														return BGl_string5117z00zzmsil_outz00;
													}
												else
													{	/* SawMsil/out.scm 454 */
														if (
															(BgL_casezd2valuezd2_1724 ==
																CNST_TABLE_REF(((long) 9))))
															{	/* SawMsil/out.scm 454 */
																return BGl_string5118z00zzmsil_outz00;
															}
														else
															{	/* SawMsil/out.scm 454 */
																return BGl_string5119z00zzmsil_outz00;
															}
													}
											}
									}
							}
					}
				}
			else
				{	/* SawMsil/out.scm 453 */
					return BGl_string5119z00zzmsil_outz00;
				}
		}
	}



/* load-vector */
	BGL_EXPORTED_DEF obj_t BGl_loadzd2vectorzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_108, obj_t BgL_typez00_109)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 463 */
			{	/* SawMsil/out.scm 464 */
				obj_t BgL_port4724z00_1737;

				BgL_port4724z00_1737 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_108))->BgL_outz00);
				bgl_display_string(BGl_string5120z00zzmsil_outz00,
					BgL_port4724z00_1737);
				bgl_display_obj(BGl_extensionz00zzmsil_outz00(BgL_typez00_109),
					BgL_port4724z00_1737);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4724z00_1737);
		}}
	}



/* _load-vector */
	obj_t BGl__loadzd2vectorzd2zzmsil_outz00(obj_t BgL_envz00_3238,
		obj_t BgL_mez00_3239, obj_t BgL_typez00_3240)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 463 */
			return
				BGl_loadzd2vectorzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3239), BgL_typez00_3240);
		}
	}



/* store-vector */
	BGL_EXPORTED_DEF obj_t BGl_storezd2vectorzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_110, obj_t BgL_typez00_111)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 466 */
			{	/* SawMsil/out.scm 467 */
				obj_t BgL_port4725z00_1739;

				BgL_port4725z00_1739 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_110))->BgL_outz00);
				bgl_display_string(BGl_string5121z00zzmsil_outz00,
					BgL_port4725z00_1739);
				bgl_display_obj(BGl_extensionz00zzmsil_outz00(BgL_typez00_111),
					BgL_port4725z00_1739);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4725z00_1739);
		}}
	}



/* _store-vector */
	obj_t BGl__storezd2vectorzd2zzmsil_outz00(obj_t BgL_envz00_3241,
		obj_t BgL_mez00_3242, obj_t BgL_typez00_3243)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 466 */
			return
				BGl_storezd2vectorzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3242), BgL_typez00_3243);
		}
	}



/* load-vector-length */
	BGL_EXPORTED_DEF obj_t
		BGl_loadzd2vectorzd2lengthz00zzmsil_outz00(BgL_dotnetz00_bglt BgL_mez00_112)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 469 */
			{	/* SawMsil/out.scm 470 */
				obj_t BgL_port4726z00_1741;

				BgL_port4726z00_1741 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_112))->BgL_outz00);
				bgl_display_string(BGl_string5122z00zzmsil_outz00,
					BgL_port4726z00_1741);
				bgl_display_char(((unsigned char) '\n'), BgL_port4726z00_1741);
			}
			{	/* SawMsil/out.scm 471 */
				obj_t BgL_port4727z00_1742;

				BgL_port4727z00_1742 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_112))->BgL_outz00);
				bgl_display_string(BGl_string5123z00zzmsil_outz00,
					BgL_port4727z00_1742);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4727z00_1742);
		}}
	}



/* _load-vector-length */
	obj_t BGl__loadzd2vectorzd2lengthz00zzmsil_outz00(obj_t BgL_envz00_3244,
		obj_t BgL_mez00_3245)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 469 */
			return
				BGl_loadzd2vectorzd2lengthz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3245));
		}
	}



/* newobj */
	BGL_EXPORTED_DEF obj_t BGl_newobjz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_113, obj_t BgL_typenamez00_114, obj_t BgL_lz00_115)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 476 */
			{
				obj_t BgL_namez00_1757;

				obj_t BgL_namez00_1749;

				{	/* SawMsil/out.scm 485 */
					obj_t BgL_outz00_1745;

					BgL_outz00_1745 =
						(((BgL_dotnetz00_bglt) CREF(BgL_mez00_113))->BgL_outz00);
					bgl_display_string(BGl_string5125z00zzmsil_outz00, BgL_outz00_1745);
					{	/* SawMsil/out.scm 487 */
						obj_t BgL_auxz00_4090;

						BgL_namez00_1757 = BgL_typenamez00_114;
						if (bigloo_strncmp(BgL_namez00_1757, BGl_string5124z00zzmsil_outz00,
								((long) 6)))
							{	/* SawMsil/out.scm 482 */
								BgL_namez00_1749 =
									c_substring(BgL_namez00_1757, ((long) 6),
									STRING_LENGTH(BgL_namez00_1757));
							}
						else
							{	/* SawMsil/out.scm 482 */
								BgL_namez00_1749 = BgL_namez00_1757;
							}
						if (
							(STRING_REF(BgL_namez00_1749,
									((long) 0)) == ((unsigned char) '\'')))
							{	/* SawMsil/out.scm 478 */
								BgL_auxz00_4090 =
									c_substring(BgL_namez00_1749, ((long) 1),
									(STRING_LENGTH(BgL_namez00_1749) - ((long) 1)));
							}
						else
							{	/* SawMsil/out.scm 478 */
								BgL_auxz00_4090 = BgL_namez00_1749;
							}
						bgl_display_obj(BgL_auxz00_4090, BgL_outz00_1745);
					}
					bgl_display_string(BGl_string5126z00zzmsil_outz00, BgL_outz00_1745);
					BGl_declarezd2listzd2zzmsil_outz00(BgL_outz00_1745, BgL_lz00_115,
						BGl_getzd2typezd2namezd2envzd2zzmsil_outz00);
					bgl_display_string(BGl_string5045z00zzmsil_outz00, BgL_outz00_1745);
					return bgl_display_char(((unsigned char) '\n'), BgL_outz00_1745);
		}}}
	}



/* _newobj */
	obj_t BGl__newobjz00zzmsil_outz00(obj_t BgL_envz00_3246, obj_t BgL_mez00_3247,
		obj_t BgL_typenamez00_3248, obj_t BgL_lz00_3249)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 476 */
			return
				BGl_newobjz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3247), BgL_typenamez00_3248,
				BgL_lz00_3249);
		}
	}



/* load-field */
	BGL_EXPORTED_DEF obj_t BGl_loadzd2fieldzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_116, obj_t BgL_typez00_117, obj_t BgL_classz00_118,
		obj_t BgL_fieldz00_119)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 492 */
			{	/* SawMsil/out.scm 493 */
				obj_t BgL_port4729z00_1764;

				BgL_port4729z00_1764 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_116))->BgL_outz00);
				bgl_display_string(BGl_string5127z00zzmsil_outz00,
					BgL_port4729z00_1764);
				bgl_display_obj(BGl_getzd2typezd2namez00zzmsil_outz00(BgL_typez00_117),
					BgL_port4729z00_1764);
				bgl_display_string(BGl_string5047z00zzmsil_outz00,
					BgL_port4729z00_1764);
				bgl_display_obj(BGl_getzd2typezd2namez00zzmsil_outz00(BgL_classz00_118),
					BgL_port4729z00_1764);
				bgl_display_string(BGl_string5099z00zzmsil_outz00,
					BgL_port4729z00_1764);
				bgl_display_obj(BgL_fieldz00_119, BgL_port4729z00_1764);
				bgl_display_string(BGl_string5098z00zzmsil_outz00,
					BgL_port4729z00_1764);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4729z00_1764);
		}}
	}



/* _load-field */
	obj_t BGl__loadzd2fieldzd2zzmsil_outz00(obj_t BgL_envz00_3250,
		obj_t BgL_mez00_3251, obj_t BgL_typez00_3252, obj_t BgL_classz00_3253,
		obj_t BgL_fieldz00_3254)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 492 */
			return
				BGl_loadzd2fieldzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3251), BgL_typez00_3252,
				BgL_classz00_3253, BgL_fieldz00_3254);
		}
	}



/* store-field */
	BGL_EXPORTED_DEF obj_t BGl_storezd2fieldzd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_120, obj_t BgL_typez00_121, obj_t BgL_classz00_122,
		obj_t BgL_fieldz00_123)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 496 */
			{	/* SawMsil/out.scm 497 */
				obj_t BgL_port4730z00_1767;

				BgL_port4730z00_1767 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_120))->BgL_outz00);
				bgl_display_string(BGl_string5128z00zzmsil_outz00,
					BgL_port4730z00_1767);
				bgl_display_obj(BGl_getzd2typezd2namez00zzmsil_outz00(BgL_typez00_121),
					BgL_port4730z00_1767);
				bgl_display_string(BGl_string5047z00zzmsil_outz00,
					BgL_port4730z00_1767);
				bgl_display_obj(BGl_getzd2typezd2namez00zzmsil_outz00(BgL_classz00_122),
					BgL_port4730z00_1767);
				bgl_display_string(BGl_string5099z00zzmsil_outz00,
					BgL_port4730z00_1767);
				bgl_display_obj(BgL_fieldz00_123, BgL_port4730z00_1767);
				bgl_display_string(BGl_string5098z00zzmsil_outz00,
					BgL_port4730z00_1767);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4730z00_1767);
		}}
	}



/* _store-field */
	obj_t BGl__storezd2fieldzd2zzmsil_outz00(obj_t BgL_envz00_3255,
		obj_t BgL_mez00_3256, obj_t BgL_typez00_3257, obj_t BgL_classz00_3258,
		obj_t BgL_fieldz00_3259)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 496 */
			return
				BGl_storezd2fieldzd2zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3256), BgL_typez00_3257,
				BgL_classz00_3258, BgL_fieldz00_3259);
		}
	}



/* castclass */
	BGL_EXPORTED_DEF obj_t BGl_castclassz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_124, BgL_typez00_bglt BgL_typez00_125)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 500 */
			{	/* SawMsil/out.scm 501 */
				obj_t BgL_port4731z00_1770;

				BgL_port4731z00_1770 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_124))->BgL_outz00);
				bgl_display_string(BGl_string5129z00zzmsil_outz00,
					BgL_port4731z00_1770);
				{	/* SawMsil/out.scm 501 */
					obj_t BgL_arg4933z00_1771;

					BgL_arg4933z00_1771 =
						(((BgL_typez00_bglt) CREF(BgL_typez00_125))->BgL_namez00);
					bgl_display_obj(BgL_arg4933z00_1771, BgL_port4731z00_1770);
				}
				return bgl_display_char(((unsigned char) '\n'), BgL_port4731z00_1770);
		}}
	}



/* _castclass */
	obj_t BGl__castclassz00zzmsil_outz00(obj_t BgL_envz00_3260,
		obj_t BgL_mez00_3261, obj_t BgL_typez00_3262)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 500 */
			return
				BGl_castclassz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3261),
				(BgL_typez00_bglt) (BgL_typez00_3262));
		}
	}



/* isinst */
	BGL_EXPORTED_DEF obj_t BGl_isinstz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_126, BgL_typez00_bglt BgL_typez00_127)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 503 */
			{	/* SawMsil/out.scm 504 */
				obj_t BgL_port4732z00_1772;

				BgL_port4732z00_1772 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_126))->BgL_outz00);
				bgl_display_string(BGl_string5130z00zzmsil_outz00,
					BgL_port4732z00_1772);
				{	/* SawMsil/out.scm 504 */
					obj_t BgL_arg4934z00_1773;

					BgL_arg4934z00_1773 =
						(((BgL_typez00_bglt) CREF(BgL_typez00_127))->BgL_namez00);
					bgl_display_obj(BgL_arg4934z00_1773, BgL_port4732z00_1772);
				}
				return bgl_display_char(((unsigned char) '\n'), BgL_port4732z00_1772);
		}}
	}



/* _isinst */
	obj_t BGl__isinstz00zzmsil_outz00(obj_t BgL_envz00_3263, obj_t BgL_mez00_3264,
		obj_t BgL_typez00_3265)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 503 */
			return
				BGl_isinstz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3264),
				(BgL_typez00_bglt) (BgL_typez00_3265));
		}
	}



/* label */
	BGL_EXPORTED_DEF obj_t BGl_labelz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_128, obj_t BgL_prefixz00_129, obj_t BgL_labz00_130)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 509 */
			{	/* SawMsil/out.scm 510 */
				obj_t BgL_outz00_2945;

				BgL_outz00_2945 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_128))->BgL_outz00);
				bgl_display_obj(BgL_prefixz00_129, BgL_outz00_2945);
				bgl_display_obj(BgL_labz00_130, BgL_outz00_2945);
				return
					bgl_display_string(BGl_string5112z00zzmsil_outz00, BgL_outz00_2945);
			}
		}
	}



/* _label */
	obj_t BGl__labelz00zzmsil_outz00(obj_t BgL_envz00_3266, obj_t BgL_mez00_3267,
		obj_t BgL_prefixz00_3268, obj_t BgL_labz00_3269)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 509 */
			return
				BGl_labelz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3267), BgL_prefixz00_3268,
				BgL_labz00_3269);
		}
	}



/* br */
	BGL_EXPORTED_DEF obj_t BGl_brz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_131, obj_t BgL_prefixz00_132, obj_t BgL_labelz00_133)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 515 */
			{	/* SawMsil/out.scm 516 */
				obj_t BgL_port4733z00_2949;

				BgL_port4733z00_2949 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_131))->BgL_outz00);
				bgl_display_string(BGl_string5131z00zzmsil_outz00,
					BgL_port4733z00_2949);
				bgl_display_obj(BgL_prefixz00_132, BgL_port4733z00_2949);
				bgl_display_obj(BgL_labelz00_133, BgL_port4733z00_2949);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4733z00_2949);
		}}
	}



/* _br */
	obj_t BGl__brz00zzmsil_outz00(obj_t BgL_envz00_3270, obj_t BgL_mez00_3271,
		obj_t BgL_prefixz00_3272, obj_t BgL_labelz00_3273)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 515 */
			return
				BGl_brz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3271), BgL_prefixz00_3272,
				BgL_labelz00_3273);
		}
	}



/* brfalse */
	BGL_EXPORTED_DEF obj_t BGl_brfalsez00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_134, obj_t BgL_prefixz00_135, obj_t BgL_labelz00_136)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 518 */
			{	/* SawMsil/out.scm 519 */
				obj_t BgL_port4734z00_2954;

				BgL_port4734z00_2954 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_134))->BgL_outz00);
				bgl_display_string(BGl_string5132z00zzmsil_outz00,
					BgL_port4734z00_2954);
				bgl_display_obj(BgL_prefixz00_135, BgL_port4734z00_2954);
				bgl_display_obj(BgL_labelz00_136, BgL_port4734z00_2954);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4734z00_2954);
		}}
	}



/* _brfalse */
	obj_t BGl__brfalsez00zzmsil_outz00(obj_t BgL_envz00_3274,
		obj_t BgL_mez00_3275, obj_t BgL_prefixz00_3276, obj_t BgL_labelz00_3277)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 518 */
			return
				BGl_brfalsez00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3275), BgL_prefixz00_3276,
				BgL_labelz00_3277);
		}
	}



/* brtrue */
	BGL_EXPORTED_DEF obj_t BGl_brtruez00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_137, obj_t BgL_prefixz00_138, obj_t BgL_labelz00_139)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 521 */
			{	/* SawMsil/out.scm 522 */
				obj_t BgL_port4735z00_2959;

				BgL_port4735z00_2959 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_137))->BgL_outz00);
				bgl_display_string(BGl_string5133z00zzmsil_outz00,
					BgL_port4735z00_2959);
				bgl_display_obj(BgL_prefixz00_138, BgL_port4735z00_2959);
				bgl_display_obj(BgL_labelz00_139, BgL_port4735z00_2959);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4735z00_2959);
		}}
	}



/* _brtrue */
	obj_t BGl__brtruez00zzmsil_outz00(obj_t BgL_envz00_3278, obj_t BgL_mez00_3279,
		obj_t BgL_prefixz00_3280, obj_t BgL_labelz00_3281)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 521 */
			return
				BGl_brtruez00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3279), BgL_prefixz00_3280,
				BgL_labelz00_3281);
		}
	}



/* beq */
	BGL_EXPORTED_DEF obj_t BGl_beqz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_140, obj_t BgL_prefixz00_141, obj_t BgL_labelz00_142)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 524 */
			{	/* SawMsil/out.scm 525 */
				obj_t BgL_port4736z00_2964;

				BgL_port4736z00_2964 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_140))->BgL_outz00);
				bgl_display_string(BGl_string5134z00zzmsil_outz00,
					BgL_port4736z00_2964);
				bgl_display_obj(BgL_prefixz00_141, BgL_port4736z00_2964);
				bgl_display_obj(BgL_labelz00_142, BgL_port4736z00_2964);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4736z00_2964);
		}}
	}



/* _beq */
	obj_t BGl__beqz00zzmsil_outz00(obj_t BgL_envz00_3282, obj_t BgL_mez00_3283,
		obj_t BgL_prefixz00_3284, obj_t BgL_labelz00_3285)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 524 */
			return
				BGl_beqz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3283), BgL_prefixz00_3284,
				BgL_labelz00_3285);
		}
	}



/* bne */
	BGL_EXPORTED_DEF obj_t BGl_bnez00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_143, obj_t BgL_prefixz00_144, obj_t BgL_labelz00_145)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 527 */
			{	/* SawMsil/out.scm 528 */
				obj_t BgL_port4737z00_2969;

				BgL_port4737z00_2969 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_143))->BgL_outz00);
				bgl_display_string(BGl_string5135z00zzmsil_outz00,
					BgL_port4737z00_2969);
				bgl_display_obj(BgL_prefixz00_144, BgL_port4737z00_2969);
				bgl_display_obj(BgL_labelz00_145, BgL_port4737z00_2969);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4737z00_2969);
		}}
	}



/* _bne */
	obj_t BGl__bnez00zzmsil_outz00(obj_t BgL_envz00_3286, obj_t BgL_mez00_3287,
		obj_t BgL_prefixz00_3288, obj_t BgL_labelz00_3289)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 527 */
			return
				BGl_bnez00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3287), BgL_prefixz00_3288,
				BgL_labelz00_3289);
		}
	}



/* blt */
	BGL_EXPORTED_DEF obj_t BGl_bltz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_146, obj_t BgL_prefixz00_147, obj_t BgL_labelz00_148)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 530 */
			{	/* SawMsil/out.scm 531 */
				obj_t BgL_port4738z00_2974;

				BgL_port4738z00_2974 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_146))->BgL_outz00);
				bgl_display_string(BGl_string5136z00zzmsil_outz00,
					BgL_port4738z00_2974);
				bgl_display_obj(BgL_prefixz00_147, BgL_port4738z00_2974);
				bgl_display_obj(BgL_labelz00_148, BgL_port4738z00_2974);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4738z00_2974);
		}}
	}



/* _blt */
	obj_t BGl__bltz00zzmsil_outz00(obj_t BgL_envz00_3290, obj_t BgL_mez00_3291,
		obj_t BgL_prefixz00_3292, obj_t BgL_labelz00_3293)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 530 */
			return
				BGl_bltz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3291), BgL_prefixz00_3292,
				BgL_labelz00_3293);
		}
	}



/* bgt */
	BGL_EXPORTED_DEF obj_t BGl_bgtz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_149, obj_t BgL_prefixz00_150, obj_t BgL_labelz00_151)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 533 */
			{	/* SawMsil/out.scm 534 */
				obj_t BgL_port4739z00_2979;

				BgL_port4739z00_2979 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_149))->BgL_outz00);
				bgl_display_string(BGl_string5137z00zzmsil_outz00,
					BgL_port4739z00_2979);
				bgl_display_obj(BgL_prefixz00_150, BgL_port4739z00_2979);
				bgl_display_obj(BgL_labelz00_151, BgL_port4739z00_2979);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4739z00_2979);
		}}
	}



/* _bgt */
	obj_t BGl__bgtz00zzmsil_outz00(obj_t BgL_envz00_3294, obj_t BgL_mez00_3295,
		obj_t BgL_prefixz00_3296, obj_t BgL_labelz00_3297)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 533 */
			return
				BGl_bgtz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3295), BgL_prefixz00_3296,
				BgL_labelz00_3297);
		}
	}



/* bge */
	BGL_EXPORTED_DEF obj_t BGl_bgez00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_152, obj_t BgL_prefixz00_153, obj_t BgL_labelz00_154)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 536 */
			{	/* SawMsil/out.scm 537 */
				obj_t BgL_port4740z00_2984;

				BgL_port4740z00_2984 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_152))->BgL_outz00);
				bgl_display_string(BGl_string5138z00zzmsil_outz00,
					BgL_port4740z00_2984);
				bgl_display_obj(BgL_prefixz00_153, BgL_port4740z00_2984);
				bgl_display_obj(BgL_labelz00_154, BgL_port4740z00_2984);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4740z00_2984);
		}}
	}



/* _bge */
	obj_t BGl__bgez00zzmsil_outz00(obj_t BgL_envz00_3298, obj_t BgL_mez00_3299,
		obj_t BgL_prefixz00_3300, obj_t BgL_labelz00_3301)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 536 */
			return
				BGl_bgez00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3299), BgL_prefixz00_3300,
				BgL_labelz00_3301);
		}
	}



/* ble */
	BGL_EXPORTED_DEF obj_t BGl_blez00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_155, obj_t BgL_prefixz00_156, obj_t BgL_labelz00_157)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 539 */
			{	/* SawMsil/out.scm 540 */
				obj_t BgL_port4741z00_2989;

				BgL_port4741z00_2989 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_155))->BgL_outz00);
				bgl_display_string(BGl_string5139z00zzmsil_outz00,
					BgL_port4741z00_2989);
				bgl_display_obj(BgL_prefixz00_156, BgL_port4741z00_2989);
				bgl_display_obj(BgL_labelz00_157, BgL_port4741z00_2989);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4741z00_2989);
		}}
	}



/* _ble */
	obj_t BGl__blez00zzmsil_outz00(obj_t BgL_envz00_3302, obj_t BgL_mez00_3303,
		obj_t BgL_prefixz00_3304, obj_t BgL_labelz00_3305)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 539 */
			return
				BGl_blez00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3303), BgL_prefixz00_3304,
				BgL_labelz00_3305);
		}
	}



/* switch */
	BGL_EXPORTED_DEF obj_t BGl_switchz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_158, obj_t BgL_labsz00_159)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 542 */
			{	/* SawMsil/out.scm 543 */
				obj_t BgL_outz00_1784;

				BgL_outz00_1784 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_158))->BgL_outz00);
				bgl_display_string(BGl_string5140z00zzmsil_outz00, BgL_outz00_1784);
				if (CBOOL
					(BGl_za2dotnetzd2pnetzd2workaroundzd2switchza2zd2zzengine_paramz00))
					{	/* SawMsil/out.scm 545 */
						BGl_declarezd2listzd2zzmsil_outz00(BgL_outz00_1784, BgL_labsz00_159,
							BGl_proc5141z00zzmsil_outz00);
					}
				else
					{	/* SawMsil/out.scm 545 */
						BGl_declarezd2listzd2zzmsil_outz00(BgL_outz00_1784, BgL_labsz00_159,
							BGl_proc5142z00zzmsil_outz00);
					}
				bgl_display_string(BGl_string5045z00zzmsil_outz00, BgL_outz00_1784);
				bgl_display_char(((unsigned char) '\n'), BgL_outz00_1784);
				if (CBOOL
					(BGl_za2dotnetzd2pnetzd2workaroundzd2switchza2zd2zzengine_paramz00))
					{	/* SawMsil/out.scm 550 */
						obj_t BgL_sz00_1794;

						BgL_sz00_1794 =
							BGl_gensymz00zz__r4_symbols_6_4z00
							(BGl_string5143z00zzmsil_outz00);
						bgl_display_obj(BgL_sz00_1794, BgL_outz00_1784);
						bgl_display_string(BGl_string5144z00zzmsil_outz00, BgL_outz00_1784);
						bgl_display_obj(BgL_sz00_1794, BgL_outz00_1784);
						bgl_display_string(BGl_string5145z00zzmsil_outz00, BgL_outz00_1784);
						bgl_display_char(((unsigned char) '\n'), BgL_outz00_1784);
						{	/* SawMsil/out.scm 552 */
							obj_t BgL_donez00_1796;

							BgL_donez00_1796 = BNIL;
							{
								obj_t BgL_l4745z00_1798;

								BgL_l4745z00_1798 = BgL_labsz00_159;
							BgL_zc3anonymousza34939ze3z83_1799:
								if (PAIRP(BgL_l4745z00_1798))
									{	/* SawMsil/out.scm 553 */
										{	/* SawMsil/out.scm 554 */
											obj_t BgL_xz00_1801;

											BgL_xz00_1801 = CAR(BgL_l4745z00_1798);
											if (CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00
													(BgL_xz00_1801, BgL_donez00_1796)))
												{	/* SawMsil/out.scm 554 */
													BFALSE;
												}
											else
												{	/* SawMsil/out.scm 554 */
													BgL_donez00_1796 =
														MAKE_PAIR(BgL_xz00_1801, BgL_donez00_1796);
													bgl_display_string(BGl_string5143z00zzmsil_outz00,
														BgL_outz00_1784);
													bgl_display_obj(BgL_xz00_1801, BgL_outz00_1784);
													bgl_display_string(BGl_string5144z00zzmsil_outz00,
														BgL_outz00_1784);
													bgl_display_obj(BgL_xz00_1801, BgL_outz00_1784);
													bgl_display_char(((unsigned char) '\n'),
														BgL_outz00_1784);
										}}
										{
											obj_t BgL_l4745z00_4247;

											BgL_l4745z00_4247 = CDR(BgL_l4745z00_1798);
											BgL_l4745z00_1798 = BgL_l4745z00_4247;
											goto BgL_zc3anonymousza34939ze3z83_1799;
										}
									}
								else
									{	/* SawMsil/out.scm 553 */
										((bool_t) 1);
									}
							}
						}
						bgl_display_obj(BgL_sz00_1794, BgL_outz00_1784);
						bgl_display_string(BGl_string5146z00zzmsil_outz00, BgL_outz00_1784);
						return bgl_display_char(((unsigned char) '\n'), BgL_outz00_1784);
					}
				else
					{	/* SawMsil/out.scm 549 */
						return BFALSE;
					}
			}
		}
	}



/* _switch */
	obj_t BGl__switchz00zzmsil_outz00(obj_t BgL_envz00_3308, obj_t BgL_mez00_3309,
		obj_t BgL_labsz00_3310)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 542 */
			return
				BGl_switchz00zzmsil_outz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_3309), BgL_labsz00_3310);
		}
	}



/* <anonymous:4936> */
	obj_t BGl_zc3anonymousza34936ze3z83zzmsil_outz00(obj_t BgL_envz00_3311,
		obj_t BgL_xz00_3312)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 546 */
			{
				obj_t BgL_xz00_1786;

				BgL_xz00_1786 = BgL_xz00_3312;
				return string_append(BGl_string5143z00zzmsil_outz00, BgL_xz00_1786);
			}
		}
	}



/* <anonymous:4938> */
	obj_t BGl_zc3anonymousza34938ze3z83zzmsil_outz00(obj_t BgL_envz00_3313,
		obj_t BgL_xz00_3314)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 547 */
			return BgL_xz00_3314;
		}
	}



/* add */
	BGL_EXPORTED_DEF obj_t BGl_addz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_160)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 563 */
			{	/* SawMsil/out.scm 564 */
				obj_t BgL_port4748z00_3016;

				BgL_port4748z00_3016 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_160))->BgL_outz00);
				bgl_display_string(BGl_string5147z00zzmsil_outz00,
					BgL_port4748z00_3016);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4748z00_3016);
		}}
	}



/* _add */
	obj_t BGl__addz00zzmsil_outz00(obj_t BgL_envz00_3315, obj_t BgL_mez00_3316)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 563 */
			return BGl_addz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_3316));
		}
	}



/* sub */
	BGL_EXPORTED_DEF obj_t BGl_subz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_161)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 566 */
			{	/* SawMsil/out.scm 567 */
				obj_t BgL_port4749z00_3021;

				BgL_port4749z00_3021 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_161))->BgL_outz00);
				bgl_display_string(BGl_string5148z00zzmsil_outz00,
					BgL_port4749z00_3021);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4749z00_3021);
		}}
	}



/* _sub */
	obj_t BGl__subz00zzmsil_outz00(obj_t BgL_envz00_3317, obj_t BgL_mez00_3318)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 566 */
			return BGl_subz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_3318));
		}
	}



/* mul */
	BGL_EXPORTED_DEF obj_t BGl_mulz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_162)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 569 */
			{	/* SawMsil/out.scm 570 */
				obj_t BgL_port4750z00_3026;

				BgL_port4750z00_3026 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_162))->BgL_outz00);
				bgl_display_string(BGl_string5149z00zzmsil_outz00,
					BgL_port4750z00_3026);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4750z00_3026);
		}}
	}



/* _mul */
	obj_t BGl__mulz00zzmsil_outz00(obj_t BgL_envz00_3319, obj_t BgL_mez00_3320)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 569 */
			return BGl_mulz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_3320));
		}
	}



/* div */
	BGL_EXPORTED_DEF obj_t BGl_divz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_163)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 572 */
			{	/* SawMsil/out.scm 573 */
				obj_t BgL_port4751z00_3031;

				BgL_port4751z00_3031 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_163))->BgL_outz00);
				bgl_display_string(BGl_string5150z00zzmsil_outz00,
					BgL_port4751z00_3031);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4751z00_3031);
		}}
	}



/* _div */
	obj_t BGl__divz00zzmsil_outz00(obj_t BgL_envz00_3321, obj_t BgL_mez00_3322)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 572 */
			return BGl_divz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_3322));
		}
	}



/* neg */
	BGL_EXPORTED_DEF obj_t BGl_negz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_164)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 575 */
			{	/* SawMsil/out.scm 576 */
				obj_t BgL_port4752z00_3036;

				BgL_port4752z00_3036 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_164))->BgL_outz00);
				bgl_display_string(BGl_string5151z00zzmsil_outz00,
					BgL_port4752z00_3036);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4752z00_3036);
		}}
	}



/* _neg */
	obj_t BGl__negz00zzmsil_outz00(obj_t BgL_envz00_3323, obj_t BgL_mez00_3324)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 575 */
			return BGl_negz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_3324));
		}
	}



/* rem */
	BGL_EXPORTED_DEF obj_t BGl_remz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_165)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 578 */
			{	/* SawMsil/out.scm 579 */
				obj_t BgL_port4753z00_3041;

				BgL_port4753z00_3041 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_165))->BgL_outz00);
				bgl_display_string(BGl_string5152z00zzmsil_outz00,
					BgL_port4753z00_3041);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4753z00_3041);
		}}
	}



/* _rem */
	obj_t BGl__remz00zzmsil_outz00(obj_t BgL_envz00_3325, obj_t BgL_mez00_3326)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 578 */
			return BGl_remz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_3326));
		}
	}



/* bitand */
	BGL_EXPORTED_DEF obj_t BGl_bitandz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_166)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 584 */
			{	/* SawMsil/out.scm 585 */
				obj_t BgL_port4754z00_3046;

				BgL_port4754z00_3046 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_166))->BgL_outz00);
				bgl_display_string(BGl_string5153z00zzmsil_outz00,
					BgL_port4754z00_3046);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4754z00_3046);
		}}
	}



/* _bitand */
	obj_t BGl__bitandz00zzmsil_outz00(obj_t BgL_envz00_3327, obj_t BgL_mez00_3328)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 584 */
			return BGl_bitandz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_3328));
		}
	}



/* bitor */
	BGL_EXPORTED_DEF obj_t BGl_bitorz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_167)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 587 */
			{	/* SawMsil/out.scm 588 */
				obj_t BgL_port4755z00_3051;

				BgL_port4755z00_3051 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_167))->BgL_outz00);
				bgl_display_string(BGl_string5154z00zzmsil_outz00,
					BgL_port4755z00_3051);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4755z00_3051);
		}}
	}



/* _bitor */
	obj_t BGl__bitorz00zzmsil_outz00(obj_t BgL_envz00_3329, obj_t BgL_mez00_3330)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 587 */
			return BGl_bitorz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_3330));
		}
	}



/* bitxor */
	BGL_EXPORTED_DEF obj_t BGl_bitxorz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_168)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 590 */
			{	/* SawMsil/out.scm 591 */
				obj_t BgL_port4756z00_3056;

				BgL_port4756z00_3056 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_168))->BgL_outz00);
				bgl_display_string(BGl_string5155z00zzmsil_outz00,
					BgL_port4756z00_3056);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4756z00_3056);
		}}
	}



/* _bitxor */
	obj_t BGl__bitxorz00zzmsil_outz00(obj_t BgL_envz00_3331, obj_t BgL_mez00_3332)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 590 */
			return BGl_bitxorz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_3332));
		}
	}



/* bitnot */
	BGL_EXPORTED_DEF obj_t BGl_bitnotz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_169)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 593 */
			{	/* SawMsil/out.scm 594 */
				obj_t BgL_port4757z00_3061;

				BgL_port4757z00_3061 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_169))->BgL_outz00);
				bgl_display_string(BGl_string5156z00zzmsil_outz00,
					BgL_port4757z00_3061);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4757z00_3061);
		}}
	}



/* _bitnot */
	obj_t BGl__bitnotz00zzmsil_outz00(obj_t BgL_envz00_3333, obj_t BgL_mez00_3334)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 593 */
			return BGl_bitnotz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_3334));
		}
	}



/* ldnull */
	BGL_EXPORTED_DEF obj_t BGl_ldnullz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_170)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 600 */
			{	/* SawMsil/out.scm 601 */
				obj_t BgL_port4758z00_3066;

				BgL_port4758z00_3066 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_170))->BgL_outz00);
				bgl_display_string(BGl_string5157z00zzmsil_outz00,
					BgL_port4758z00_3066);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4758z00_3066);
		}}
	}



/* _ldnull */
	obj_t BGl__ldnullz00zzmsil_outz00(obj_t BgL_envz00_3335, obj_t BgL_mez00_3336)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 600 */
			return BGl_ldnullz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_3336));
		}
	}



/* pop */
	BGL_EXPORTED_DEF obj_t BGl_popz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_171)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 603 */
			{	/* SawMsil/out.scm 604 */
				obj_t BgL_port4759z00_3071;

				BgL_port4759z00_3071 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_171))->BgL_outz00);
				bgl_display_string(BGl_string5158z00zzmsil_outz00,
					BgL_port4759z00_3071);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4759z00_3071);
		}}
	}



/* _pop */
	obj_t BGl__popz00zzmsil_outz00(obj_t BgL_envz00_3337, obj_t BgL_mez00_3338)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 603 */
			return BGl_popz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_3338));
		}
	}



/* dup */
	BGL_EXPORTED_DEF obj_t BGl_dupz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_172)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 606 */
			{	/* SawMsil/out.scm 607 */
				obj_t BgL_port4760z00_3076;

				BgL_port4760z00_3076 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_172))->BgL_outz00);
				bgl_display_string(BGl_string5159z00zzmsil_outz00,
					BgL_port4760z00_3076);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4760z00_3076);
		}}
	}



/* _dup */
	obj_t BGl__dupz00zzmsil_outz00(obj_t BgL_envz00_3339, obj_t BgL_mez00_3340)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 606 */
			return BGl_dupz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_3340));
		}
	}



/* ceq */
	BGL_EXPORTED_DEF obj_t BGl_ceqz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_173)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 609 */
			{	/* SawMsil/out.scm 610 */
				obj_t BgL_port4761z00_3081;

				BgL_port4761z00_3081 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_173))->BgL_outz00);
				bgl_display_string(BGl_string5160z00zzmsil_outz00,
					BgL_port4761z00_3081);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4761z00_3081);
		}}
	}



/* _ceq */
	obj_t BGl__ceqz00zzmsil_outz00(obj_t BgL_envz00_3341, obj_t BgL_mez00_3342)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 609 */
			return BGl_ceqz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_3342));
		}
	}



/* clt */
	BGL_EXPORTED_DEF obj_t BGl_cltz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_174)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 612 */
			{	/* SawMsil/out.scm 613 */
				obj_t BgL_port4762z00_3086;

				BgL_port4762z00_3086 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_174))->BgL_outz00);
				bgl_display_string(BGl_string5161z00zzmsil_outz00,
					BgL_port4762z00_3086);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4762z00_3086);
		}}
	}



/* _clt */
	obj_t BGl__cltz00zzmsil_outz00(obj_t BgL_envz00_3343, obj_t BgL_mez00_3344)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 612 */
			return BGl_cltz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_3344));
		}
	}



/* cgt */
	BGL_EXPORTED_DEF obj_t BGl_cgtz00zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_175)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 615 */
			{	/* SawMsil/out.scm 616 */
				obj_t BgL_port4763z00_3091;

				BgL_port4763z00_3091 =
					(((BgL_dotnetz00_bglt) CREF(BgL_mez00_175))->BgL_outz00);
				bgl_display_string(BGl_string5162z00zzmsil_outz00,
					BgL_port4763z00_3091);
				return bgl_display_char(((unsigned char) '\n'), BgL_port4763z00_3091);
		}}
	}



/* _cgt */
	obj_t BGl__cgtz00zzmsil_outz00(obj_t BgL_envz00_3345, obj_t BgL_mez00_3346)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 615 */
			return BGl_cgtz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_3346));
		}
	}



/* print-info */
	BGL_EXPORTED_DEF obj_t BGl_printzd2infozd2zzmsil_outz00(BgL_dotnetz00_bglt
		BgL_mez00_176, obj_t BgL_msgz00_177)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 621 */
			return CNST_TABLE_REF(((long) 28));
		}
	}



/* _print-info */
	obj_t BGl__printzd2infozd2zzmsil_outz00(obj_t BgL_envz00_3347,
		obj_t BgL_mez00_3348, obj_t BgL_msgz00_3349)
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 621 */
			return CNST_TABLE_REF(((long) 28));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmsil_outz00()
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmsil_outz00()
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 1 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmsil_outz00()
	{
		AN_OBJECT;
		{	/* SawMsil/out.scm 1 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string5163z00zzmsil_outz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5163z00zzmsil_outz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5163z00zzmsil_outz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5163z00zzmsil_outz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string5163z00zzmsil_outz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string5163z00zzmsil_outz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string5163z00zzmsil_outz00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 52967775),
				BSTRING_TO_STRING(BGl_string5163z00zzmsil_outz00));
			BGl_modulezd2initializa7ationz75zzbackend_dotnet_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string5163z00zzmsil_outz00));
			BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 254412896),
				BSTRING_TO_STRING(BGl_string5163z00zzmsil_outz00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string5163z00zzmsil_outz00));
			return
				BGl_modulezd2initializa7ationz75zzmsil_namesz00(((long) 484617828),
				BSTRING_TO_STRING(BGl_string5163z00zzmsil_outz00));
		}
	}

#ifdef __cplusplus
}
#endif
