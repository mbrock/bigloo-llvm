/*===========================================================================*/
/*   (Ast/sexp.scm)                                                          */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/sexp.scm)*/
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

	typedef struct BgL_feffectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_readz00;
		obj_t BgL_writez00;
	}                 *BgL_feffectz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_atomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}              *BgL_atomz00_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_closurez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}                 *BgL_closurez00_bglt;

	typedef struct BgL_kwotez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}               *BgL_kwotez00_bglt;

	typedef struct BgL_sequencez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_nodesz00;
	}                  *BgL_sequencez00_bglt;

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

	typedef struct BgL_externz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
	}                *BgL_externz00_bglt;

	typedef struct BgL_setqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}              *BgL_setqz00_bglt;

	typedef struct BgL_conditionalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_testz00;
		struct BgL_nodez00_bgl *BgL_truez00;
		struct BgL_nodez00_bgl *BgL_falsez00;
	}                     *BgL_conditionalz00_bglt;

	typedef struct BgL_failz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_procz00;
		struct BgL_nodez00_bgl *BgL_msgz00;
		struct BgL_nodez00_bgl *BgL_objz00;
	}              *BgL_failz00_bglt;

	typedef struct BgL_selectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_testz00;
		obj_t BgL_clausesz00;
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}                *BgL_selectz00_bglt;

	typedef struct BgL_letzd2funzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_localsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                   *BgL_letzd2funzd2_bglt;

	typedef struct BgL_jumpzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_exitz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                        *BgL_jumpzd2exzd2itz00_bglt;


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern BgL_nodez00_bglt BGl_letzd2ze3nodez31zzast_letz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_letzd2symzd2zzast_letz00();
	static obj_t BGl_za2cachezd2nameza2zd2zzast_sexpz00 = BUNSPEC;
	static BgL_nodez00_bglt BGl_callzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2compilerzd2debugza2zd2zzengine_paramz00;
	BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern obj_t BGl_labelszd2symzd2zzast_labelsz00();
	BGL_EXPORTED_DECL obj_t BGl_makezd2anonymouszd2namez00zzast_sexpz00(obj_t,
		obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t BGl_liipz00zzast_sexpz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__ifzd2symzd2zzast_sexpz00(obj_t);
	static obj_t BGl_za2cachezd2resza2zd2zzast_sexpz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_mapz12z12zz__r4_control_features_6_9z00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern BgL_appz00_bglt BGl_makezd2appzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_sexpz00();
	extern BgL_letzd2funzd2_bglt BGl_setzd2exitzd2ze3nodeze3zzast_exitz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl__locationzd2ze3nodez31zzast_sexpz00(obj_t, obj_t);
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	static obj_t BGl__definezd2primopzd2ze3nodeze3zzast_sexpz00(obj_t, obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	extern BgL_kwotez00_bglt BGl_makezd2kwotezd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t);
	BGL_IMPORT bool_t bigloo_strncmp(obj_t, obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_feffectz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_applyz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_exitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_letz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_labelsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_pragmaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_buildz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern BgL_sequencez00_bglt BGl_makezd2sequencezd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_sexpz00();
	extern BgL_jumpzd2exzd2itz00_bglt
		BGl_jumpzd2exitzd2ze3nodeze3zzast_exitz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	extern BgL_closurez00_bglt BGl_makezd2closurezd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_variablez00_bglt);
	extern BgL_typez00_bglt BGl_getzd2typezd2atomz00zztype_typeofz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ifzd2symzd2zzast_sexpz00();
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_to_bstring(char *);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern BgL_nodez00_bglt BGl_pragmazf2typezd2ze3nodezc3zzast_pragmaz00(bool_t,
		obj_t, BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_dssslzd2findzd2firstzd2formalzd2zztools_dssslz00(obj_t);
	static obj_t BGl_loopz00zzast_sexpz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_replacez12z12zztools_miscz00(obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_epairifyz00zztools_miscz00(obj_t, obj_t);
	extern BgL_setqz00_bglt BGl_makezd2setqzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_varz00_bglt, BgL_nodez00_bglt);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern BgL_selectz00_bglt BGl_makezd2selectzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_nodez00_bglt, obj_t, BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	extern obj_t BGl_za2magicza2z00zztype_cachez00;
	static obj_t BGl_methodzd2initzd2zzast_sexpz00();
	static obj_t BGl__usezd2variablez12zc0zzast_sexpz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	BGL_IMPORT bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	extern BgL_nodez00_bglt BGl_applycationzd2ze3nodez31zzast_applyz00(obj_t,
		obj_t, obj_t, obj_t);
	extern bool_t BGl_globalzd2readzd2onlyzf3zf3zzast_varz00(BgL_globalz00_bglt);
	extern BgL_letzd2funzd2_bglt BGl_labelszd2ze3nodez31zzast_labelsz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_sexpz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_usezd2variablez12zc0zzast_sexpz00(BgL_variablez00_bglt, obj_t, obj_t);
	extern BgL_atomz00_bglt BGl_makezd2atomzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t);
	extern BgL_failz00_bglt BGl_makezd2failzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_nodez00_bglt, BgL_nodez00_bglt, BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_withzd2exceptionzd2handlerz00zz__errorz00(obj_t, obj_t);
	static obj_t BGl_za2ifza2z00zzast_sexpz00 = BUNSPEC;
	static obj_t BGl_za2cachezd2stackza2zd2zzast_sexpz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzast_sexpz00();
	static obj_t BGl__makezd2anonymouszd2namez00zzast_sexpz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_funz00zzast_varz00;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_letzd2symzf3z21zzast_letz00(obj_t);
	static obj_t BGl_za2sitesza2z00zzast_sexpz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_exceptionzd2notifyzd2zz__objectz00(obj_t);
	extern BgL_conditionalz00_bglt BGl_makezd2conditionalzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_nodez00_bglt, BgL_nodez00_bglt,
		BgL_nodez00_bglt);
	extern bool_t BGl_privatezd2sexpzf3z21zzast_privatez00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl__errorzd2sexpzd2ze3nodeze3zzast_sexpz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_privatezd2ze3nodez31zzast_privatez00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_atomz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzast_sexpz00();
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_definezd2primopzd2ze3nodeze3zzast_sexpz00(BgL_globalz00_bglt);
	extern obj_t BGl_currentzd2functionzd2zztools_errorz00();
	static obj_t BGl_zc3anonymousza33937ze3z83zzast_sexpz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2bnilza2z00zztype_cachez00;
	static obj_t BGl__definezd2primopzd2refzd2ze3nodez31zzast_sexpz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sexpza2zd2ze3nodez93zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33661ze3z83zzast_sexpz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_epairifyzd2reczd2zztools_miscz00(obj_t, obj_t);
	extern obj_t BGl_normaliza7ezd2prognz75zztools_prognz00(obj_t);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	static obj_t BGl_zc3anonymousza33668ze3z83zzast_sexpz00(obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_applicationzd2ze3nodez31zzast_appz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_labelszd2symzf3z21zzast_labelsz00(obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_locationzd2ze3nodez31zzast_sexpz00(BgL_globalz00_bglt);
	static obj_t BGl_zc3anonymousza33388ze3z83zzast_sexpz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33389ze3z83zzast_sexpz00(obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	static obj_t BGl__sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_definezd2primopzd2refzd2ze3nodez31zzast_sexpz00(BgL_globalz00_bglt,
		BgL_nodez00_bglt);
	static obj_t BGl_zc3exitza33385ze3z83zzast_sexpz00(obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_lookupz00zzast_sexpz00(obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	extern BgL_feffectz00_bglt BGl_parsezd2effectzd2zzeffect_feffectz00(obj_t);
	static obj_t BGl__topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl__sexpza2zd2ze3nodez93zzast_sexpz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	BGL_IMPORT char *BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_sexpz00();
	static obj_t __cnst[41];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ifzd2symzd2envz00zzast_sexpz00,
		BgL_bgl__ifza7d2symza7d2za7za7as4283z00, BGl__ifzd2symzd2zzast_sexpz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string4250z00zzast_sexpz00,
		BgL_bgl_string4250za700za7za7a4284za7, "Illegal `application' form", 26);
	      DEFINE_STRING(BGl_string4251z00zzast_sexpz00,
		BgL_bgl_string4251za700za7za7a4285za7, "Illegal `case' form", 19);
	      DEFINE_STRING(BGl_string4252z00zzast_sexpz00,
		BgL_bgl_string4252za700za7za7a4286za7, "Illegal `failure' form", 22);
	      DEFINE_STRING(BGl_string4253z00zzast_sexpz00,
		BgL_bgl_string4253za700za7za7a4287za7, "Illegal `lambda' form", 21);
	      DEFINE_STRING(BGl_string4254z00zzast_sexpz00,
		BgL_bgl_string4254za700za7za7a4288za7, "Illegal `define' form", 21);
	      DEFINE_STRING(BGl_string4255z00zzast_sexpz00,
		BgL_bgl_string4255za700za7za7a4289za7, "illegal `define' expression", 27);
	      DEFINE_STRING(BGl_string4256z00zzast_sexpz00,
		BgL_bgl_string4256za700za7za7a4290za7, "Illegal `set!' form", 19);
	      DEFINE_STRING(BGl_string4257z00zzast_sexpz00,
		BgL_bgl_string4257za700za7za7a4291za7, "Read-only variable", 18);
	      DEFINE_STRING(BGl_string4258z00zzast_sexpz00,
		BgL_bgl_string4258za700za7za7a4292za7, "illegal `set!' expression", 25);
	      DEFINE_STRING(BGl_string4260z00zzast_sexpz00,
		BgL_bgl_string4260za700za7za7a4293za7, "Illegal `quote' expression", 26);
	      DEFINE_STRING(BGl_string4259z00zzast_sexpz00,
		BgL_bgl_string4259za700za7za7a4294za7, "Illegal `if' form", 17);
	      DEFINE_STRING(BGl_string4261z00zzast_sexpz00,
		BgL_bgl_string4261za700za7za7a4295za7, "Illegal `@' expression", 22);
	      DEFINE_STRING(BGl_string4262z00zzast_sexpz00,
		BgL_bgl_string4262za700za7za7a4296za7, "Unbound variable", 16);
	      DEFINE_STRING(BGl_string4263z00zzast_sexpz00,
		BgL_bgl_string4263za700za7za7a4297za7,
		"This backend (~a) does not support external first class value functions",
		71);
	      DEFINE_STRING(BGl_string4264z00zzast_sexpz00,
		BgL_bgl_string4264za700za7za7a4298za7, "Illegal atom in s-expression", 28);
	      DEFINE_STRING(BGl_string4265z00zzast_sexpz00,
		BgL_bgl_string4265za700za7za7a4299za7, "Illegal `()' expression", 23);
	      DEFINE_STRING(BGl_string4266z00zzast_sexpz00,
		BgL_bgl_string4266za700za7za7a4300za7, "wrong number of argument", 24);
	      DEFINE_STRING(BGl_string4267z00zzast_sexpz00,
		BgL_bgl_string4267za700za7za7a4301za7, "Illegal formal argument", 23);
	      DEFINE_STRING(BGl_string4268z00zzast_sexpz00,
		BgL_bgl_string4268za700za7za7a4302za7, "Illegal `pragma/effect' form", 28);
	      DEFINE_STRING(BGl_string4270z00zzast_sexpz00,
		BgL_bgl_string4270za700za7za7a4303za7, "Illegal empty sequence", 22);
	      DEFINE_STRING(BGl_string4269z00zzast_sexpz00,
		BgL_bgl_string4269za700za7za7a4304za7, "Illegal `free-pragma/effect' form",
		33);
	      DEFINE_STRING(BGl_string4271z00zzast_sexpz00,
		BgL_bgl_string4271za700za7za7a4305za7, "Illegal mutation", 16);
	      DEFINE_STRING(BGl_string4272z00zzast_sexpz00,
		BgL_bgl_string4272za700za7za7a4306za7, "($1)", 4);
	      DEFINE_STRING(BGl_string4273z00zzast_sexpz00,
		BgL_bgl_string4273za700za7za7a4307za7, "anonymous", 9);
	      DEFINE_STRING(BGl_string4274z00zzast_sexpz00,
		BgL_bgl_string4274za700za7za7a4308za7, "<", 1);
	      DEFINE_STRING(BGl_string4275z00zzast_sexpz00,
		BgL_bgl_string4275za700za7za7a4309za7, ":", 1);
	      DEFINE_STRING(BGl_string4276z00zzast_sexpz00,
		BgL_bgl_string4276za700za7za7a4310za7, "./", 2);
	      DEFINE_STRING(BGl_string4277z00zzast_sexpz00,
		BgL_bgl_string4277za700za7za7a4311za7, ">", 1);
	      DEFINE_STRING(BGl_string4278z00zzast_sexpz00,
		BgL_bgl_string4278za700za7za7a4312za7, "-", 1);
	      DEFINE_STRING(BGl_string4280z00zzast_sexpz00,
		BgL_bgl_string4280za700za7za7a4313za7,
		"> bdb pragma::obj (@ __evmeaning_address foreign) (@ define-primop! __evenv) (@ define-primop-ref! __evenv) write exp car cons (quote ()) jump-exit set-exit case failure free-pragma/effect free-pragma pragma/effect letrec* labels letrec let lambda define begin __r4_control_features_6_9 apply quote @ app eval not ::bool test location set! pragma else value if (value apply app set!) ",
		384);
	      DEFINE_STRING(BGl_string4279z00zzast_sexpz00,
		BgL_bgl_string4279za700za7za7a4314za7, "ast_sexp", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_errorzd2sexpzd2ze3nodezd2envz31zzast_sexpz00,
		BgL_bgl__errorza7d2sexpza7d24315z00,
		BGl__errorzd2sexpzd2ze3nodeze3zzast_sexpz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_definezd2primopzd2ze3nodezd2envz31zzast_sexpz00,
		BgL_bgl__defineza7d2primop4316za7,
		BGl__definezd2primopzd2ze3nodeze3zzast_sexpz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sexpzd2ze3nodezd2envze3zzast_sexpz00,
		BgL_bgl__sexpza7d2za7e3nodeza74317za7, BGl__sexpzd2ze3nodez31zzast_sexpz00,
		0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_locationzd2ze3nodezd2envze3zzast_sexpz00,
		BgL_bgl__locationza7d2za7e3n4318z00,
		BGl__locationzd2ze3nodez31zzast_sexpz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_usezd2variablez12zd2envz12zzast_sexpz00,
		BgL_bgl__useza7d2variableza74319z00, BGl__usezd2variablez12zc0zzast_sexpz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sexpza2zd2ze3nodezd2envz41zzast_sexpz00,
		BgL_bgl__sexpza7a2za7d2za7e3no4320za7,
		BGl__sexpza2zd2ze3nodez93zzast_sexpz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2anonymouszd2namezd2envzd2zzast_sexpz00,
		BgL_bgl__makeza7d2anonymou4321za7, va_generic_entry,
		BGl__makezd2anonymouszd2namez00zzast_sexpz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_topzd2levelzd2sexpzd2ze3nodezd2envze3zzast_sexpz00,
		BgL_bgl__topza7d2levelza7d2s4322z00,
		BGl__topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_definezd2primopzd2refzd2ze3nodezd2envze3zzast_sexpz00,
		BgL_bgl__defineza7d2primop4323za7,
		BGl__definezd2primopzd2refzd2ze3nodez31zzast_sexpz00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long
		BgL_checksumz00_2968, char *BgL_fromz00_2969)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_sexpz00))
				{
					BGl_requirezd2initializa7ationz75zzast_sexpz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_sexpz00();
					BGl_cnstzd2initzd2zzast_sexpz00();
					BGl_importedzd2moduleszd2initz00zzast_sexpz00();
					BGl_toplevelzd2initzd2zzast_sexpz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_sexpz00()
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 14 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_sexp");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_sexp");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"ast_sexp");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_sexp");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"ast_sexp");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "ast_sexp");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"ast_sexp");
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 0), "ast_sexp");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_sexp");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_sexp");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_sexp");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"ast_sexp");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_sexpz00()
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 14 */
			{	/* Ast/sexp.scm 14 */
				obj_t BgL_cportz00_2960;

				BgL_cportz00_2960 =
					bgl_open_input_string(BGl_string4280z00zzast_sexpz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2961;

					BgL_iz00_2961 = ((long) 40);
				BgL_loopz00_2962:
					if ((BgL_iz00_2961 == ((long) -1)))
						{	/* Ast/sexp.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/sexp.scm 14 */
							{	/* Ast/sexp.scm 14 */
								obj_t BgL_arg4282z00_2964;

								{	/* Ast/sexp.scm 14 */

									{	/* Ast/sexp.scm 14 */
										obj_t BgL_locationz00_2966;

										BgL_locationz00_2966 = BBOOL(((bool_t) 0));
										{	/* Ast/sexp.scm 14 */

											BgL_arg4282z00_2964 =
												BGl_readz00zz__readerz00(BgL_cportz00_2960,
												BgL_locationz00_2966);
										}
									}
								}
								{	/* Ast/sexp.scm 14 */
									int BgL_auxz00_2995;

									BgL_auxz00_2995 = (int) (BgL_iz00_2961);
									CNST_TABLE_SET(BgL_auxz00_2995, BgL_arg4282z00_2964);
							}}
							{	/* Ast/sexp.scm 14 */
								int BgL_auxz00_2967;

								BgL_auxz00_2967 = (int) ((BgL_iz00_2961 - ((long) 1)));
								{
									long BgL_iz00_3000;

									BgL_iz00_3000 = (long) (BgL_auxz00_2967);
									BgL_iz00_2961 = BgL_iz00_3000;
									goto BgL_loopz00_2962;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_sexpz00()
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 14 */
			BGl_za2sitesza2z00zzast_sexpz00 = CNST_TABLE_REF(((long) 0));
			BGl_za2ifza2z00zzast_sexpz00 =
				BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 1)));
			BGl_za2cachezd2nameza2zd2zzast_sexpz00 = BFALSE;
			BGl_za2cachezd2stackza2zd2zzast_sexpz00 = BFALSE;
			return (BGl_za2cachezd2resza2zd2zzast_sexpz00 = BFALSE, BUNSPEC);
		}
	}



/* top-level-sexp->node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00(obj_t BgL_expz00_15,
		obj_t BgL_locz00_16)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 59 */
			return
				(BgL_nodez00_bglt) (BGl_zc3exitza33385ze3z83zzast_sexpz00(BgL_locz00_16,
					BgL_expz00_15));
		}
	}



/* <exit:3385> */
	obj_t BGl_zc3exitza33385ze3z83zzast_sexpz00(obj_t BgL_locz00_2958,
		obj_t BgL_expz00_2957)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 60 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit3343z00_912;

			if (SET_EXIT(BgL_an_exit3343z00_912))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit3343z00_912 = (void *) jmpbuf;
					{	/* Ast/sexp.scm 60 */

						PUSH_EXIT(BgL_an_exit3343z00_912, ((long) 1));
						{	/* Ast/sexp.scm 60 */
							obj_t BgL_an_exitd3344z00_913;

							BgL_an_exitd3344z00_913 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Ast/sexp.scm 63 */
								obj_t BgL_res3346z00_916;

								{	/* Ast/sexp.scm 63 */
									obj_t BgL_zc3anonymousza33389ze3z83_2899;

									obj_t BgL_zc3anonymousza33388ze3z83_2900;

									BgL_zc3anonymousza33389ze3z83_2899 =
										make_fx_procedure
										(BGl_zc3anonymousza33389ze3z83zzast_sexpz00,
										(int) (((long) 0)), (int) (((long) 2)));
									BgL_zc3anonymousza33388ze3z83_2900 =
										make_fx_procedure
										(BGl_zc3anonymousza33388ze3z83zzast_sexpz00,
										(int) (((long) 1)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3anonymousza33389ze3z83_2899,
										(int) (((long) 0)), BgL_expz00_2957);
									PROCEDURE_SET(BgL_zc3anonymousza33389ze3z83_2899,
										(int) (((long) 1)), BgL_locz00_2958);
									PROCEDURE_SET(BgL_zc3anonymousza33388ze3z83_2900,
										(int) (((long) 0)), BgL_an_exitd3344z00_913);
									BgL_res3346z00_916 =
										BGl_withzd2exceptionzd2handlerz00zz__errorz00
										(BgL_zc3anonymousza33388ze3z83_2900,
										BgL_zc3anonymousza33389ze3z83_2899);
								}
								POP_EXIT();
								return BgL_res3346z00_916;
							}
						}
					}
				}
		}
	}



/* _top-level-sexp->node */
	obj_t BGl__topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00(obj_t BgL_envz00_2901,
		obj_t BgL_expz00_2902, obj_t BgL_locz00_2903)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 59 */
			return
				(obj_t) (BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
				(BgL_expz00_2902, BgL_locz00_2903));
		}
	}



/* <anonymous:3389> */
	obj_t BGl_zc3anonymousza33389ze3z83zzast_sexpz00(obj_t BgL_envz00_2904)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 65 */
			{	/* Ast/sexp.scm 66 */
				obj_t BgL_expz00_2905;

				obj_t BgL_locz00_2906;

				BgL_expz00_2905 = PROCEDURE_REF(BgL_envz00_2904, (int) (((long) 0)));
				BgL_locz00_2906 = PROCEDURE_REF(BgL_envz00_2904, (int) (((long) 1)));
				{

					{	/* Ast/sexp.scm 66 */
						BgL_nodez00_bglt BgL_auxz00_3031;

						BgL_auxz00_3031 =
							BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_expz00_2905, BNIL,
							BgL_locz00_2906, CNST_TABLE_REF(((long) 2)));
						return (obj_t) (BgL_auxz00_3031);
					}
				}
			}
		}
	}



/* <anonymous:3388> */
	obj_t BGl_zc3anonymousza33388ze3z83zzast_sexpz00(obj_t BgL_envz00_2907,
		obj_t BgL_ez00_2909)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 62 */
			{	/* Ast/sexp.scm 63 */
				obj_t BgL_an_exitd3344z00_2908;

				BgL_an_exitd3344z00_2908 =
					PROCEDURE_REF(BgL_envz00_2907, (int) (((long) 0)));
				{
					obj_t BgL_ez00_919;

					BgL_ez00_919 = BgL_ez00_2909;
					BGl_exceptionzd2notifyzd2zz__objectz00(BgL_ez00_919);
					return
						BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd3344z00_2908,
						BUNSPEC);
				}
			}
		}
	}



/* if-sym */
	BGL_EXPORTED_DEF obj_t BGl_ifzd2symzd2zzast_sexpz00()
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 81 */
			return BGl_za2ifza2z00zzast_sexpz00;
		}
	}



/* _if-sym */
	obj_t BGl__ifzd2symzd2zzast_sexpz00(obj_t BgL_envz00_2910)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 81 */
			return BGl_za2ifza2z00zzast_sexpz00;
		}
	}



/* sexp->node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t
		BgL_expz00_18, obj_t BgL_stackz00_19, obj_t BgL_locz00_20,
		obj_t BgL_sitez00_21)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 98 */
		BGl_sexpzd2ze3nodez31zzast_sexpz00:
			{
				obj_t BgL_atomz00_926;

				obj_t BgL_bodyz00_932;

				obj_t BgL_bodyz00_937;

				obj_t BgL_argsz00_938;

				obj_t BgL_varsz00_942;

				obj_t BgL_bodyz00_943;

				obj_t BgL_argsz00_944;

				obj_t BgL_effectz00_948;

				obj_t BgL_restz00_949;

				obj_t BgL_effectz00_952;

				obj_t BgL_restz00_953;

				if (NULLP(BgL_expz00_18))
					{	/* Ast/sexp.scm 103 */
						return
							BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
							(BGl_string4265z00zzast_sexpz00, BgL_expz00_18, BgL_locz00_20);
					}
				else
					{	/* Ast/sexp.scm 103 */
						if (BGl_iszd2azf3z21zz__objectz00(BgL_expz00_18,
								BGl_nodez00zzast_nodez00))
							{	/* Ast/sexp.scm 103 */
								obj_t BgL_auxz00_3044;

								if (BGl_iszd2azf3z21zz__objectz00(BgL_expz00_18,
										BGl_externz00zzast_nodez00))
									{	/* Ast/sexp.scm 110 */
										BgL_externz00_bglt BgL_instance3347z00_1271;

										BgL_instance3347z00_1271 =
											(BgL_externz00_bglt) (BgL_expz00_18);
										{	/* Ast/sexp.scm 111 */
											obj_t BgL_arg3659z00_1273;

											BgL_arg3659z00_1273 =
												(((BgL_externz00_bglt) CREF(BgL_instance3347z00_1271))->
												BgL_exprza2za2);
											{	/* Ast/sexp.scm 111 */
												obj_t BgL_zc3anonymousza33661ze3z83_2913;

												BgL_zc3anonymousza33661ze3z83_2913 =
													make_fx_procedure
													(BGl_zc3anonymousza33661ze3z83zzast_sexpz00,
													(int) (((long) 1)), (int) (((long) 2)));
												PROCEDURE_SET(BgL_zc3anonymousza33661ze3z83_2913,
													(int) (((long) 0)),
													(obj_t) (BgL_instance3347z00_1271));
												PROCEDURE_SET(BgL_zc3anonymousza33661ze3z83_2913,
													(int) (((long) 1)), BgL_stackz00_19);
												{	/* Ast/sexp.scm 111 */
													obj_t BgL_list3660z00_1274;

													BgL_list3660z00_1274 =
														MAKE_PAIR(BgL_arg3659z00_1273, BNIL);
													BGl_mapz12z12zz__r4_control_features_6_9z00
														(BgL_zc3anonymousza33661ze3z83_2913,
														BgL_list3660z00_1274);
									}}}}
								else
									{	/* Ast/sexp.scm 109 */
										BFALSE;
									}
								if (BGl_iszd2azf3z21zz__objectz00(BgL_expz00_18,
										BGl_appz00zzast_nodez00))
									{	/* Ast/sexp.scm 113 */
										BgL_appz00_bglt BgL_instance3349z00_1281;

										BgL_instance3349z00_1281 =
											(BgL_appz00_bglt) (BgL_expz00_18);
										{	/* Ast/sexp.scm 114 */
											obj_t BgL_arg3666z00_1283;

											BgL_arg3666z00_1283 =
												(((BgL_appz00_bglt) CREF(BgL_instance3349z00_1281))->
												BgL_argsz00);
											{	/* Ast/sexp.scm 114 */
												obj_t BgL_zc3anonymousza33668ze3z83_2912;

												BgL_zc3anonymousza33668ze3z83_2912 =
													make_fx_procedure
													(BGl_zc3anonymousza33668ze3z83zzast_sexpz00,
													(int) (((long) 1)), (int) (((long) 2)));
												PROCEDURE_SET(BgL_zc3anonymousza33668ze3z83_2912,
													(int) (((long) 0)),
													(obj_t) (BgL_instance3349z00_1281));
												PROCEDURE_SET(BgL_zc3anonymousza33668ze3z83_2912,
													(int) (((long) 1)), BgL_stackz00_19);
												{	/* Ast/sexp.scm 114 */
													obj_t BgL_list3667z00_1284;

													BgL_list3667z00_1284 =
														MAKE_PAIR(BgL_arg3666z00_1283, BNIL);
													BGl_mapz12z12zz__r4_control_features_6_9z00
														(BgL_zc3anonymousza33668ze3z83_2912,
														BgL_list3667z00_1284);
									}}}}
								else
									{	/* Ast/sexp.scm 112 */
										BFALSE;
									}
								BgL_auxz00_3044 = BgL_expz00_18;
								return (BgL_nodez00_bglt) (BgL_auxz00_3044);
							}
						else
							{	/* Ast/sexp.scm 103 */
								if (PAIRP(BgL_expz00_18))
									{	/* Ast/sexp.scm 103 */
										obj_t BgL_carzd21703zd2_967;

										BgL_carzd21703zd2_967 = CAR(BgL_expz00_18);
										if (SYMBOLP(BgL_carzd21703zd2_967))
											{	/* Ast/sexp.scm 103 */
												bool_t BgL_testz00_3079;

												{	/* Ast/sexp.scm 103 */
													obj_t BgL_xz00_1117;

													BgL_xz00_1117 = BgL_carzd21703zd2_967;
													{	/* Ast/sexp.scm 103 */
														obj_t BgL__ortest_3371z00_1118;

														BgL__ortest_3371z00_1118 =
															BGl_lookupz00zzast_sexpz00(BgL_xz00_1117,
															BgL_stackz00_19);
														if (CBOOL(BgL__ortest_3371z00_1118))
															{	/* Ast/sexp.scm 103 */
																BgL_testz00_3079 =
																	CBOOL(BgL__ortest_3371z00_1118);
															}
														else
															{	/* Ast/sexp.scm 103 */
																obj_t BgL_gz00_1119;

																BgL_gz00_1119 =
																	BGl_findzd2globalzd2zzast_envz00
																	(BgL_xz00_1117, BNIL);
																if (CBOOL(BgL_gz00_1119))
																	{	/* Ast/sexp.scm 103 */
																		bool_t BgL_testz00_3087;

																		{	/* Ast/sexp.scm 103 */
																			obj_t BgL_auxz00_3088;

																			{
																				BgL_globalz00_bglt BgL_auxz00_3089;

																				BgL_auxz00_3089 =
																					(BgL_globalz00_bglt) (BgL_gz00_1119);
																				BgL_auxz00_3088 =
																					(((BgL_globalz00_bglt)
																						CREF(BgL_auxz00_3089))->
																					BgL_modulez00);
																			}
																			BgL_testz00_3087 =
																				(BgL_auxz00_3088 ==
																				CNST_TABLE_REF(((long) 15)));
																		}
																		if (BgL_testz00_3087)
																			{	/* Ast/sexp.scm 103 */
																				BgL_testz00_3079 = ((bool_t) 0);
																			}
																		else
																			{	/* Ast/sexp.scm 103 */
																				BgL_testz00_3079 = ((bool_t) 1);
																			}
																	}
																else
																	{	/* Ast/sexp.scm 103 */
																		BgL_testz00_3079 = ((bool_t) 0);
																	}
															}
													}
												}
												if (BgL_testz00_3079)
													{	/* Ast/sexp.scm 103 */
														return
															BGl_callzd2ze3nodez31zzast_sexpz00(BgL_expz00_18,
															BgL_stackz00_19, BgL_locz00_20, BgL_sitez00_21);
													}
												else
													{	/* Ast/sexp.scm 103 */
														if (
															(CAR(BgL_expz00_18) ==
																CNST_TABLE_REF(((long) 12))))
															{	/* Ast/sexp.scm 103 */
																obj_t BgL_auxz00_3099;

															BgL_tagzd21651zd2_930:
																{	/* Ast/sexp.scm 194 */
																	obj_t BgL_locz00_1342;

																	BgL_locz00_1342 =
																		BGl_findzd2locationzf2locz20zztools_locationz00
																		(BgL_expz00_18, BgL_locz00_20);
																	{
																		obj_t BgL_namez00_1343;

																		obj_t BgL_modulez00_1344;

																		if (PAIRP(BgL_expz00_18))
																			{	/* Ast/sexp.scm 195 */
																				obj_t BgL_cdrzd22447zd2_1349;

																				BgL_cdrzd22447zd2_1349 =
																					CDR(BgL_expz00_18);
																				if (
																					(CAR(BgL_expz00_18) ==
																						CNST_TABLE_REF(((long) 12))))
																					{	/* Ast/sexp.scm 195 */
																						if (PAIRP(BgL_cdrzd22447zd2_1349))
																							{	/* Ast/sexp.scm 195 */
																								obj_t BgL_carzd22450zd2_1352;

																								obj_t BgL_cdrzd22451zd2_1353;

																								BgL_carzd22450zd2_1352 =
																									CAR(BgL_cdrzd22447zd2_1349);
																								BgL_cdrzd22451zd2_1353 =
																									CDR(BgL_cdrzd22447zd2_1349);
																								if (SYMBOLP
																									(BgL_carzd22450zd2_1352))
																									{	/* Ast/sexp.scm 195 */
																										if (PAIRP
																											(BgL_cdrzd22451zd2_1353))
																											{	/* Ast/sexp.scm 195 */
																												obj_t
																													BgL_carzd22456zd2_1356;
																												BgL_carzd22456zd2_1356 =
																													CAR
																													(BgL_cdrzd22451zd2_1353);
																												if (SYMBOLP
																													(BgL_carzd22456zd2_1356))
																													{	/* Ast/sexp.scm 195 */
																														if (NULLP(CDR
																																(BgL_cdrzd22451zd2_1353)))
																															{	/* Ast/sexp.scm 195 */
																																BgL_namez00_1343
																																	=
																																	BgL_carzd22450zd2_1352;
																																BgL_modulez00_1344
																																	=
																																	BgL_carzd22456zd2_1356;
																																{	/* Ast/sexp.scm 197 */
																																	obj_t
																																		BgL_globalz00_1362;
																																	BgL_globalz00_1362
																																		=
																																		BGl_findzd2globalzf2modulez20zzast_envz00
																																		(BgL_namez00_1343,
																																		BgL_modulez00_1344);
																																	if (BGl_iszd2azf3z21zz__objectz00(BgL_globalz00_1362, BGl_globalz00zzast_varz00))
																																		{	/* Ast/sexp.scm 201 */
																																			bool_t
																																				BgL_testz00_3125;
																																			{	/* Ast/sexp.scm 201 */
																																				obj_t
																																					BgL_auxz00_3126;
																																				{
																																					BgL_globalz00_bglt
																																						BgL_auxz00_3127;
																																					BgL_auxz00_3127
																																						=
																																						(BgL_globalz00_bglt)
																																						(BgL_globalz00_1362);
																																					BgL_auxz00_3126
																																						=
																																						(((BgL_globalz00_bglt) CREF(BgL_auxz00_3127))->BgL_importz00);
																																				}
																																				BgL_testz00_3125
																																					=
																																					(BgL_auxz00_3126
																																					==
																																					CNST_TABLE_REF
																																					(((long) 10)));
																																			}
																																			if (BgL_testz00_3125)
																																				{	/* Ast/sexp.scm 202 */
																																					obj_t
																																						BgL_arg3734z00_1365;
																																					{	/* Ast/sexp.scm 202 */
																																						obj_t
																																							BgL_arg3735z00_1366;
																																						obj_t
																																							BgL_arg3736z00_1367;
																																						BgL_arg3735z00_1366
																																							=
																																							CNST_TABLE_REF
																																							(((long) 10));
																																						{	/* Ast/sexp.scm 202 */
																																							obj_t
																																								BgL_list3737z00_1368;
																																							BgL_list3737z00_1368
																																								=
																																								MAKE_PAIR
																																								(BNIL,
																																								BNIL);
																																							BgL_arg3736z00_1367
																																								=
																																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																								(BGl_atomz00zzast_nodez00,
																																								BgL_list3737z00_1368);
																																						}
																																						BgL_arg3734z00_1365
																																							=
																																							MAKE_PAIR
																																							(BgL_arg3735z00_1366,
																																							BgL_arg3736z00_1367);
																																					}
																																					BgL_auxz00_3099
																																						=
																																						(obj_t)
																																						(BGl_sexpzd2ze3nodez31zzast_sexpz00
																																						(BgL_arg3734z00_1365,
																																							BgL_stackz00_19,
																																							BgL_locz00_1342,
																																							BgL_sitez00_21));
																																				}
																																			else
																																				{	/* Ast/sexp.scm 201 */
																																					BGl_usezd2variablez12zc0zzast_sexpz00
																																						(
																																						(BgL_variablez00_bglt)
																																						((BgL_globalz00_bglt) (BgL_globalz00_1362)), BgL_locz00_1342, BgL_sitez00_21);
																																					{	/* Ast/sexp.scm 205 */
																																						bool_t
																																							BgL_testz00_3141;
																																						if (
																																							(BgL_sitez00_21
																																								==
																																								CNST_TABLE_REF
																																								(((long) 11))))
																																							{	/* Ast/sexp.scm 205 */
																																								BgL_testz00_3141
																																									=
																																									(
																																									(bool_t)
																																									0);
																																							}
																																						else
																																							{	/* Ast/sexp.scm 206 */
																																								BgL_valuez00_bglt
																																									BgL_arg3742z00_1373;
																																								{
																																									BgL_variablez00_bglt
																																										BgL_auxz00_3145;
																																									BgL_auxz00_3145
																																										=
																																										(BgL_variablez00_bglt)
																																										(
																																										(BgL_globalz00_bglt)
																																										(BgL_globalz00_1362));
																																									BgL_arg3742z00_1373
																																										=
																																										(
																																										((BgL_variablez00_bglt) CREF(BgL_auxz00_3145))->BgL_valuez00);
																																								}
																																								{	/* Ast/sexp.scm 206 */
																																									obj_t
																																										BgL_obj1946z00_2566;
																																									BgL_obj1946z00_2566
																																										=
																																										(obj_t)
																																										(BgL_arg3742z00_1373);
																																									BgL_testz00_3141
																																										=
																																										BGl_iszd2azf3z21zz__objectz00
																																										(BgL_obj1946z00_2566,
																																										BGl_funz00zzast_varz00);
																																								}
																																							}
																																						if (BgL_testz00_3141)
																																							{	/* Ast/sexp.scm 208 */
																																								BgL_typez00_bglt
																																									BgL_arg3739z00_1370;
																																								{
																																									BgL_variablez00_bglt
																																										BgL_auxz00_3151;
																																									BgL_auxz00_3151
																																										=
																																										(BgL_variablez00_bglt)
																																										(
																																										(BgL_globalz00_bglt)
																																										(BgL_globalz00_1362));
																																									BgL_arg3739z00_1370
																																										=
																																										(
																																										((BgL_variablez00_bglt) CREF(BgL_auxz00_3151))->BgL_typez00);
																																								}
																																								BgL_auxz00_3099
																																									=
																																									(obj_t)
																																									(BGl_makezd2closurezd2zzast_nodez00
																																									(BgL_locz00_1342,
																																										BgL_arg3739z00_1370,
																																										(BgL_variablez00_bglt)
																																										((BgL_globalz00_bglt) (BgL_globalz00_1362))));
																																							}
																																						else
																																							{	/* Ast/sexp.scm 211 */
																																								BgL_typez00_bglt
																																									BgL_arg3740z00_1371;
																																								{
																																									BgL_variablez00_bglt
																																										BgL_auxz00_3159;
																																									BgL_auxz00_3159
																																										=
																																										(BgL_variablez00_bglt)
																																										(
																																										(BgL_globalz00_bglt)
																																										(BgL_globalz00_1362));
																																									BgL_arg3740z00_1371
																																										=
																																										(
																																										((BgL_variablez00_bglt) CREF(BgL_auxz00_3159))->BgL_typez00);
																																								}
																																								BgL_auxz00_3099
																																									=
																																									(obj_t)
																																									(BGl_makezd2varzd2zzast_nodez00
																																									(BgL_locz00_1342,
																																										BgL_arg3740z00_1371,
																																										(BgL_variablez00_bglt)
																																										((BgL_globalz00_bglt) (BgL_globalz00_1362))));
																																							}
																																					}
																																				}
																																		}
																																	else
																																		{	/* Ast/sexp.scm 199 */
																																			BgL_auxz00_3099
																																				=
																																				(obj_t)
																																				(BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																																				(BGl_string4262z00zzast_sexpz00,
																																					BgL_expz00_18,
																																					BgL_locz00_1342));
																																		}
																																}
																															}
																														else
																															{	/* Ast/sexp.scm 195 */
																																BgL_nodez00_bglt
																																	BgL_auxz00_3169;
																															BgL_tagzd22440zd2_1346:
																																BgL_auxz00_3169
																																	=
																																	BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																																	(BGl_string4261z00zzast_sexpz00,
																																	BgL_expz00_18,
																																	BgL_locz00_1342);
																																BgL_auxz00_3099
																																	=
																																	(obj_t)
																																	(BgL_auxz00_3169);
																															}
																													}
																												else
																													{	/* Ast/sexp.scm 195 */
																														BgL_nodez00_bglt
																															BgL_auxz00_3172;
																														goto
																															BgL_tagzd22440zd2_1346;
																														BgL_auxz00_3099 =
																															(obj_t)
																															(BgL_auxz00_3172);
																													}
																											}
																										else
																											{	/* Ast/sexp.scm 195 */
																												BgL_nodez00_bglt
																													BgL_auxz00_3174;
																												goto
																													BgL_tagzd22440zd2_1346;
																												BgL_auxz00_3099 =
																													(obj_t)
																													(BgL_auxz00_3174);
																											}
																									}
																								else
																									{	/* Ast/sexp.scm 195 */
																										BgL_nodez00_bglt
																											BgL_auxz00_3176;
																										goto BgL_tagzd22440zd2_1346;
																										BgL_auxz00_3099 =
																											(obj_t) (BgL_auxz00_3176);
																									}
																							}
																						else
																							{	/* Ast/sexp.scm 195 */
																								BgL_nodez00_bglt
																									BgL_auxz00_3178;
																								goto BgL_tagzd22440zd2_1346;
																								BgL_auxz00_3099 =
																									(obj_t) (BgL_auxz00_3178);
																							}
																					}
																				else
																					{	/* Ast/sexp.scm 195 */
																						BgL_nodez00_bglt BgL_auxz00_3180;

																						goto BgL_tagzd22440zd2_1346;
																						BgL_auxz00_3099 =
																							(obj_t) (BgL_auxz00_3180);
																					}
																			}
																		else
																			{	/* Ast/sexp.scm 195 */
																				BgL_nodez00_bglt BgL_auxz00_3182;

																				goto BgL_tagzd22440zd2_1346;
																				BgL_auxz00_3099 =
																					(obj_t) (BgL_auxz00_3182);
																			}
																	}
																}
																return (BgL_nodez00_bglt) (BgL_auxz00_3099);
															}
														else
															{	/* Ast/sexp.scm 103 */
																if (
																	(CAR(BgL_expz00_18) ==
																		CNST_TABLE_REF(((long) 13))))
																	{	/* Ast/sexp.scm 103 */
																		obj_t BgL_auxz00_3189;

																	BgL_tagzd21652zd2_931:
																		{
																			obj_t BgL_valuez00_1376;

																			if (PAIRP(BgL_expz00_18))
																				{	/* Ast/sexp.scm 103 */
																					obj_t BgL_cdrzd22467zd2_1381;

																					BgL_cdrzd22467zd2_1381 =
																						CDR(BgL_expz00_18);
																					if (PAIRP(BgL_cdrzd22467zd2_1381))
																						{	/* Ast/sexp.scm 103 */
																							if (NULLP(CDR
																									(BgL_cdrzd22467zd2_1381)))
																								{	/* Ast/sexp.scm 103 */
																									BgL_valuez00_1376 =
																										CAR(BgL_cdrzd22467zd2_1381);
																									{	/* Ast/sexp.scm 219 */
																										obj_t BgL_locz00_1386;

																										BgL_locz00_1386 =
																											BGl_findzd2locationzf2locz20zztools_locationz00
																											(BgL_expz00_18,
																											BgL_locz00_20);
																										if (NULLP
																											(BgL_valuez00_1376))
																											{	/* Ast/sexp.scm 221 */
																												BgL_auxz00_3189 =
																													(obj_t)
																													(BGl_makezd2atomzd2zzast_nodez00
																													(BgL_locz00_1386,
																														(BgL_typez00_bglt)
																														(BGl_za2bnilza2z00zztype_cachez00),
																														BNIL));
																											}
																										else
																											{	/* Ast/sexp.scm 225 */
																												bool_t BgL_testz00_3204;

																												if (PAIRP
																													(BgL_valuez00_1376))
																													{	/* Ast/sexp.scm 225 */
																														BgL_testz00_3204 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Ast/sexp.scm 225 */
																														if (VECTORP
																															(BgL_valuez00_1376))
																															{	/* Ast/sexp.scm 226 */
																																BgL_testz00_3204
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Ast/sexp.scm 226 */
																																if (BGL_HVECTORP
																																	(BgL_valuez00_1376))
																																	{	/* Ast/sexp.scm 227 */
																																		BgL_testz00_3204
																																			=
																																			((bool_t)
																																			1);
																																	}
																																else
																																	{	/* Ast/sexp.scm 227 */
																																		if (STRUCTP
																																			(BgL_valuez00_1376))
																																			{	/* Ast/sexp.scm 228 */
																																				BgL_testz00_3204
																																					=
																																					(
																																					(bool_t)
																																					1);
																																			}
																																		else
																																			{	/* Ast/sexp.scm 228 */
																																				if (SYMBOLP(BgL_valuez00_1376))
																																					{	/* Ast/sexp.scm 229 */
																																						BgL_testz00_3204
																																							=
																																							(
																																							(bool_t)
																																							1);
																																					}
																																				else
																																					{	/* Ast/sexp.scm 229 */
																																						BgL_testz00_3204
																																							=
																																							KEYWORDP
																																							(BgL_valuez00_1376);
																																					}
																																			}
																																	}
																															}
																													}
																												if (BgL_testz00_3204)
																													{	/* Ast/sexp.scm 225 */
																														BgL_auxz00_3189 =
																															(obj_t)
																															(BGl_makezd2kwotezd2zzast_nodez00
																															(BgL_locz00_1386,
																																(BgL_typez00_bglt)
																																(BGl_za2_za2z00zztype_cachez00),
																																BgL_valuez00_1376));
																													}
																												else
																													{	/* Ast/sexp.scm 234 */
																														bool_t
																															BgL_testz00_3219;
																														if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_valuez00_1376))
																															{	/* Ast/sexp.scm 234 */
																																BgL_testz00_3219
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Ast/sexp.scm 234 */
																																if (STRINGP
																																	(BgL_valuez00_1376))
																																	{	/* Ast/sexp.scm 235 */
																																		BgL_testz00_3219
																																			=
																																			((bool_t)
																																			1);
																																	}
																																else
																																	{	/* Ast/sexp.scm 235 */
																																		if (CNSTP
																																			(BgL_valuez00_1376))
																																			{	/* Ast/sexp.scm 236 */
																																				BgL_testz00_3219
																																					=
																																					(
																																					(bool_t)
																																					1);
																																			}
																																		else
																																			{	/* Ast/sexp.scm 236 */
																																				if (CHARP(BgL_valuez00_1376))
																																					{	/* Ast/sexp.scm 240 */
																																						BgL_testz00_3219
																																							=
																																							(
																																							(bool_t)
																																							1);
																																					}
																																				else
																																					{	/* Ast/sexp.scm 240 */
																																						BgL_testz00_3219
																																							=
																																							BOOLEANP
																																							(BgL_valuez00_1376);
																																					}
																																			}
																																	}
																															}
																														if (BgL_testz00_3219)
																															{	/* Ast/sexp.scm 234 */
																																BgL_auxz00_3189
																																	=
																																	(obj_t)
																																	(BGl_sexpzd2ze3nodez31zzast_sexpz00
																																	(BgL_valuez00_1376,
																																		BgL_stackz00_19,
																																		BgL_locz00_1386,
																																		BgL_sitez00_21));
																															}
																														else
																															{	/* Ast/sexp.scm 234 */
																																BgL_auxz00_3189
																																	=
																																	(obj_t)
																																	(BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																																	(BGl_string4260z00zzast_sexpz00,
																																		BgL_expz00_18,
																																		BgL_locz00_1386));
																															}
																													}
																											}
																									}
																								}
																							else
																								{	/* Ast/sexp.scm 103 */
																									BgL_nodez00_bglt
																										BgL_auxz00_3234;
																								BgL_tagzd22462zd2_1378:
																									BgL_auxz00_3234 =
																										BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																										(BGl_string4260z00zzast_sexpz00,
																										BgL_expz00_18,
																										BgL_locz00_20);
																									BgL_auxz00_3189 =
																										(obj_t) (BgL_auxz00_3234);
																								}
																						}
																					else
																						{	/* Ast/sexp.scm 103 */
																							BgL_nodez00_bglt BgL_auxz00_3237;

																							goto BgL_tagzd22462zd2_1378;
																							BgL_auxz00_3189 =
																								(obj_t) (BgL_auxz00_3237);
																						}
																				}
																			else
																				{	/* Ast/sexp.scm 103 */
																					BgL_nodez00_bglt BgL_auxz00_3239;

																					goto BgL_tagzd22462zd2_1378;
																					BgL_auxz00_3189 =
																						(obj_t) (BgL_auxz00_3239);
																				}
																		}
																		return (BgL_nodez00_bglt) (BgL_auxz00_3189);
																	}
																else
																	{	/* Ast/sexp.scm 103 */
																		if (
																			(CAR(BgL_expz00_18) ==
																				CNST_TABLE_REF(((long) 16))))
																			{	/* Ast/sexp.scm 103 */
																				obj_t BgL_arg3399z00_974;

																				BgL_arg3399z00_974 = CDR(BgL_expz00_18);
																				{	/* Ast/sexp.scm 103 */
																					BgL_sequencez00_bglt BgL_auxz00_3247;

																					BgL_bodyz00_932 = BgL_arg3399z00_974;
																				BgL_tagzd21653zd2_933:
																					{	/* Ast/sexp.scm 249 */
																						obj_t BgL_bodyz00_1399;

																						if (NULLP(BgL_bodyz00_932))
																							{	/* Ast/sexp.scm 250 */
																								obj_t BgL_list3765z00_1403;

																								BgL_list3765z00_1403 =
																									MAKE_PAIR(BUNSPEC, BNIL);
																								BgL_bodyz00_1399 =
																									BgL_list3765z00_1403;
																							}
																						else
																							{	/* Ast/sexp.scm 249 */
																								BgL_bodyz00_1399 =
																									BgL_bodyz00_932;
																							}
																						{	/* Ast/sexp.scm 252 */
																							obj_t BgL_locz00_1400;

																							BgL_locz00_1400 =
																								BGl_findzd2locationzf2locz20zztools_locationz00
																								(BgL_expz00_18, BgL_locz00_20);
																							{	/* Ast/sexp.scm 252 */
																								obj_t BgL_nodesz00_1401;

																								BgL_nodesz00_1401 =
																									BGl_sexpza2zd2ze3nodez93zzast_sexpz00
																									(BgL_bodyz00_1399,
																									BgL_stackz00_19,
																									BgL_locz00_1400,
																									BgL_sitez00_21);
																								{	/* Ast/sexp.scm 253 */

																									BgL_auxz00_3247 =
																										BGl_makezd2sequencezd2zzast_nodez00
																										(BgL_locz00_1400,
																										(BgL_typez00_bglt)
																										(BGl_za2_za2z00zztype_cachez00),
																										BUNSPEC, BINT(((long) -1)),
																										BgL_nodesz00_1401);
																					}}}}
																					return
																						(BgL_nodez00_bglt)
																						(BgL_auxz00_3247);
																				}
																			}
																		else
																			{	/* Ast/sexp.scm 103 */
																				obj_t BgL_carzd21734zd2_975;

																				BgL_carzd21734zd2_975 =
																					CAR(BgL_expz00_18);
																				if (
																					(BgL_carzd21734zd2_975 ==
																						CNST_TABLE_REF(((long) 1))))
																					{	/* Ast/sexp.scm 103 */
																						obj_t BgL_auxz00_3261;

																					BgL_tagzd21654zd2_934:
																						{
																							obj_t BgL_siz00_1404;

																							obj_t BgL_alorsz00_1405;

																							obj_t BgL_sinonz00_1406;

																							obj_t BgL_siz00_1408;

																							obj_t BgL_alorsz00_1409;

																							if (PAIRP(BgL_expz00_18))
																								{	/* Ast/sexp.scm 103 */
																									obj_t BgL_cdrzd22483zd2_1414;

																									BgL_cdrzd22483zd2_1414 =
																										CDR(BgL_expz00_18);
																									if (PAIRP
																										(BgL_cdrzd22483zd2_1414))
																										{	/* Ast/sexp.scm 103 */
																											obj_t
																												BgL_cdrzd22488zd2_1416;
																											BgL_cdrzd22488zd2_1416 =
																												CDR
																												(BgL_cdrzd22483zd2_1414);
																											if (PAIRP
																												(BgL_cdrzd22488zd2_1416))
																												{	/* Ast/sexp.scm 103 */
																													obj_t
																														BgL_cdrzd22493zd2_1418;
																													BgL_cdrzd22493zd2_1418
																														=
																														CDR
																														(BgL_cdrzd22488zd2_1416);
																													if (PAIRP
																														(BgL_cdrzd22493zd2_1418))
																														{	/* Ast/sexp.scm 103 */
																															if (NULLP(CDR
																																	(BgL_cdrzd22493zd2_1418)))
																																{	/* Ast/sexp.scm 103 */
																																	BgL_siz00_1404
																																		=
																																		CAR
																																		(BgL_cdrzd22483zd2_1414);
																																	BgL_alorsz00_1405
																																		=
																																		CAR
																																		(BgL_cdrzd22488zd2_1416);
																																	BgL_sinonz00_1406
																																		=
																																		CAR
																																		(BgL_cdrzd22493zd2_1418);
																																	{
																																		obj_t
																																			BgL_siz00_1431;
																																		if (PAIRP
																																			(BgL_siz00_1404))
																																			{	/* Ast/sexp.scm 103 */
																																				obj_t
																																					BgL_cdrzd22548zd2_1436;
																																				BgL_cdrzd22548zd2_1436
																																					=
																																					CDR
																																					(BgL_siz00_1404);
																																				if ((CAR
																																						(BgL_siz00_1404)
																																						==
																																						CNST_TABLE_REF
																																						(((long) 1))))
																																					{	/* Ast/sexp.scm 103 */
																																						if (PAIRP(BgL_cdrzd22548zd2_1436))
																																							{	/* Ast/sexp.scm 103 */
																																								obj_t
																																									BgL_cdrzd22551zd2_1439;
																																								BgL_cdrzd22551zd2_1439
																																									=
																																									CDR
																																									(BgL_cdrzd22548zd2_1436);
																																								if (PAIRP(BgL_cdrzd22551zd2_1439))
																																									{	/* Ast/sexp.scm 103 */
																																										obj_t
																																											BgL_cdrzd22554zd2_1441;
																																										BgL_cdrzd22554zd2_1441
																																											=
																																											CDR
																																											(BgL_cdrzd22551zd2_1439);
																																										if ((CAR(BgL_cdrzd22551zd2_1439) == BFALSE))
																																											{	/* Ast/sexp.scm 103 */
																																												if (PAIRP(BgL_cdrzd22554zd2_1441))
																																													{	/* Ast/sexp.scm 103 */
																																														if ((CAR(BgL_cdrzd22554zd2_1441) == BTRUE))
																																															{	/* Ast/sexp.scm 103 */
																																																if (NULLP(CDR(BgL_cdrzd22554zd2_1441)))
																																																	{	/* Ast/sexp.scm 103 */
																																																		obj_t
																																																			BgL_arg3787z00_1446;
																																																		BgL_arg3787z00_1446
																																																			=
																																																			CAR
																																																			(BgL_cdrzd22548zd2_1436);
																																																		{	/* Ast/sexp.scm 103 */
																																																			BgL_nodez00_bglt
																																																				BgL_auxz00_3301;
																																																			BgL_siz00_1431
																																																				=
																																																				BgL_arg3787z00_1446;
																																																		BgL_tagzd22540zd2_1432:
																																																			{	/* Ast/sexp.scm 263 */
																																																				obj_t
																																																					BgL_auxz00_3302;
																																																				BgL_auxz00_3302
																																																					=
																																																					CDR
																																																					(BgL_expz00_18);
																																																				SET_CAR
																																																					(BgL_auxz00_3302,
																																																					BgL_siz00_1431);
																																																			}
																																																			{	/* Ast/sexp.scm 264 */
																																																				obj_t
																																																					BgL_arg3804z00_1463;
																																																				{	/* Ast/sexp.scm 264 */
																																																					obj_t
																																																						BgL_pairz00_2629;
																																																					BgL_pairz00_2629
																																																						=
																																																						BgL_expz00_18;
																																																					BgL_arg3804z00_1463
																																																						=
																																																						CDR
																																																						(CDR
																																																						(BgL_pairz00_2629));
																																																				}
																																																				SET_CAR
																																																					(BgL_arg3804z00_1463,
																																																					BgL_sinonz00_1406);
																																																			}
																																																			{	/* Ast/sexp.scm 265 */
																																																				obj_t
																																																					BgL_arg3805z00_1464;
																																																				{	/* Ast/sexp.scm 265 */
																																																					obj_t
																																																						BgL_pairz00_2635;
																																																					BgL_pairz00_2635
																																																						=
																																																						BgL_expz00_18;
																																																					BgL_arg3805z00_1464
																																																						=
																																																						CDR
																																																						(CDR
																																																						(CDR
																																																							(BgL_pairz00_2635)));
																																																				}
																																																				SET_CAR
																																																					(BgL_arg3805z00_1464,
																																																					BgL_alorsz00_1405);
																																																			}
																																																			BgL_auxz00_3301
																																																				=
																																																				BGl_sexpzd2ze3nodez31zzast_sexpz00
																																																				(BgL_expz00_18,
																																																				BgL_stackz00_19,
																																																				BgL_locz00_20,
																																																				BgL_sitez00_21);
																																																			BgL_auxz00_3261
																																																				=
																																																				(obj_t)
																																																				(BgL_auxz00_3301);
																																																		}
																																																	}
																																																else
																																																	{	/* Ast/sexp.scm 103 */
																																																	BgL_tagzd22541zd2_1433:
																																																		{	/* Ast/sexp.scm 268 */
																																																			bool_t
																																																				BgL_testz00_3314;
																																																			if (SYMBOLP(BgL_siz00_1404))
																																																				{	/* Ast/sexp.scm 268 */
																																																					BgL_testz00_3314
																																																						=
																																																						(
																																																						(bool_t)
																																																						1);
																																																				}
																																																			else
																																																				{	/* Ast/sexp.scm 268 */
																																																					BgL_testz00_3314
																																																						=
																																																						BGl_iszd2azf3z21zz__objectz00
																																																						(BgL_siz00_1404,
																																																						BGl_atomz00zzast_nodez00);
																																																				}
																																																			if (BgL_testz00_3314)
																																																				{	/* Ast/sexp.scm 269 */
																																																					obj_t
																																																						BgL_olocz00_1466;
																																																					BgL_olocz00_1466
																																																						=
																																																						BGl_findzd2locationzf2locz20zztools_locationz00
																																																						(BgL_expz00_18,
																																																						BgL_locz00_20);
																																																					{	/* Ast/sexp.scm 269 */
																																																						obj_t
																																																							BgL_cdlocz00_1467;
																																																						BgL_cdlocz00_1467
																																																							=
																																																							BGl_findzd2locationzf2locz20zztools_locationz00
																																																							(CDR
																																																							(BgL_expz00_18),
																																																							BgL_locz00_20);
																																																						{	/* Ast/sexp.scm 270 */
																																																							obj_t
																																																								BgL_cddlocz00_1468;
																																																							{	/* Ast/sexp.scm 271 */
																																																								obj_t
																																																									BgL_arg3810z00_1481;
																																																								{	/* Ast/sexp.scm 271 */
																																																									obj_t
																																																										BgL_pairz00_2646;
																																																									BgL_pairz00_2646
																																																										=
																																																										BgL_expz00_18;
																																																									BgL_arg3810z00_1481
																																																										=
																																																										CDR
																																																										(CDR
																																																										(BgL_pairz00_2646));
																																																								}
																																																								BgL_cddlocz00_1468
																																																									=
																																																									BGl_findzd2locationzf2locz20zztools_locationz00
																																																									(BgL_arg3810z00_1481,
																																																									BgL_locz00_20);
																																																							}
																																																							{	/* Ast/sexp.scm 271 */
																																																								obj_t
																																																									BgL_cdddlocz00_1469;
																																																								{	/* Ast/sexp.scm 272 */
																																																									obj_t
																																																										BgL_arg3809z00_1480;
																																																									{	/* Ast/sexp.scm 272 */
																																																										obj_t
																																																											BgL_pairz00_2650;
																																																										BgL_pairz00_2650
																																																											=
																																																											BgL_expz00_18;
																																																										BgL_arg3809z00_1480
																																																											=
																																																											CDR
																																																											(CDR
																																																											(CDR
																																																												(BgL_pairz00_2650)));
																																																									}
																																																									BgL_cdddlocz00_1469
																																																										=
																																																										BGl_findzd2locationzf2locz20zztools_locationz00
																																																										(BgL_arg3809z00_1480,
																																																										BgL_locz00_20);
																																																								}
																																																								{	/* Ast/sexp.scm 272 */
																																																									obj_t
																																																										BgL_lzd2sizd2_1470;
																																																									BgL_lzd2sizd2_1470
																																																										=
																																																										BGl_findzd2locationzf2locz20zztools_locationz00
																																																										(BgL_siz00_1404,
																																																										BgL_cdlocz00_1467);
																																																									{	/* Ast/sexp.scm 273 */
																																																										obj_t
																																																											BgL_lzd2alorszd2_1471;
																																																										BgL_lzd2alorszd2_1471
																																																											=
																																																											BGl_findzd2locationzf2locz20zztools_locationz00
																																																											(BgL_alorsz00_1405,
																																																											BgL_cddlocz00_1468);
																																																										{	/* Ast/sexp.scm 274 */
																																																											obj_t
																																																												BgL_lzd2sinonzd2_1472;
																																																											BgL_lzd2sinonzd2_1472
																																																												=
																																																												BGl_findzd2locationzf2locz20zztools_locationz00
																																																												(BgL_sinonz00_1406,
																																																												BgL_cdddlocz00_1469);
																																																											{	/* Ast/sexp.scm 275 */
																																																												BgL_nodez00_bglt
																																																													BgL_siz00_1473;
																																																												BgL_siz00_1473
																																																													=
																																																													BGl_sexpzd2ze3nodez31zzast_sexpz00
																																																													(BgL_siz00_1404,
																																																													BgL_stackz00_19,
																																																													BgL_lzd2sizd2_1470,
																																																													CNST_TABLE_REF
																																																													(((long) 2)));
																																																												{	/* Ast/sexp.scm 276 */
																																																													BgL_nodez00_bglt
																																																														BgL_alorsz00_1474;
																																																													BgL_alorsz00_1474
																																																														=
																																																														BGl_sexpzd2ze3nodez31zzast_sexpz00
																																																														(BgL_alorsz00_1405,
																																																														BgL_stackz00_19,
																																																														BgL_lzd2alorszd2_1471,
																																																														CNST_TABLE_REF
																																																														(((long) 2)));
																																																													{	/* Ast/sexp.scm 277 */
																																																														BgL_nodez00_bglt
																																																															BgL_sinonz00_1475;
																																																														BgL_sinonz00_1475
																																																															=
																																																															BGl_sexpzd2ze3nodez31zzast_sexpz00
																																																															(BgL_sinonz00_1406,
																																																															BgL_stackz00_19,
																																																															BgL_lzd2sinonzd2_1472,
																																																															CNST_TABLE_REF
																																																															(((long) 2)));
																																																														{	/* Ast/sexp.scm 278 */
																																																															obj_t
																																																																BgL_locz00_1476;
																																																															{	/* Ast/sexp.scm 279 */
																																																																obj_t
																																																																	BgL_locz00_1477;
																																																																{	/* Ast/sexp.scm 281 */
																																																																	obj_t
																																																																		BgL_arg3808z00_1479;
																																																																	BgL_arg3808z00_1479
																																																																		=
																																																																		(
																																																																		((BgL_nodez00_bglt) CREF(BgL_siz00_1473))->BgL_locz00);
																																																																	BgL_locz00_1477
																																																																		=
																																																																		BGl_findzd2locationzf2locz20zztools_locationz00
																																																																		(BgL_expz00_18,
																																																																		BgL_arg3808z00_1479);
																																																																}
																																																																{	/* Ast/sexp.scm 282 */
																																																																	bool_t
																																																																		BgL_testz00_3339;
																																																																	if (STRUCTP(BgL_locz00_1477))
																																																																		{	/* Ast/sexp.scm 282 */
																																																																			BgL_testz00_3339
																																																																				=
																																																																				(STRUCT_KEY
																																																																				(BgL_locz00_1477)
																																																																				==
																																																																				CNST_TABLE_REF
																																																																				(((long) 6)));
																																																																		}
																																																																	else
																																																																		{	/* Ast/sexp.scm 282 */
																																																																			BgL_testz00_3339
																																																																				=
																																																																				(
																																																																				(bool_t)
																																																																				0);
																																																																		}
																																																																	if (BgL_testz00_3339)
																																																																		{	/* Ast/sexp.scm 282 */
																																																																			BgL_locz00_1476
																																																																				=
																																																																				BgL_locz00_1477;
																																																																		}
																																																																	else
																																																																		{	/* Ast/sexp.scm 282 */
																																																																			BgL_locz00_1476
																																																																				=
																																																																				BgL_olocz00_1466;
																																																																		}
																																																																}
																																																															}
																																																															{	/* Ast/sexp.scm 279 */

																																																																BgL_auxz00_3261
																																																																	=
																																																																	(obj_t)
																																																																	(BGl_makezd2conditionalzd2zzast_nodez00
																																																																	(BgL_locz00_1476,
																																																																		(BgL_typez00_bglt)
																																																																		(BGl_za2_za2z00zztype_cachez00),
																																																																		BUNSPEC,
																																																																		BINT
																																																																		(((long) -1)), BgL_siz00_1473, BgL_alorsz00_1474, BgL_sinonz00_1475));
																																																				}}}}}}}}}}}}
																																																			else
																																																				{	/* Ast/sexp.scm 290 */
																																																					obj_t
																																																						BgL_testz00_1483;
																																																					BgL_testz00_1483
																																																						=
																																																						BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																																																						(BGl_gensymz00zz__r4_symbols_6_4z00
																																																						(CNST_TABLE_REF
																																																							(((long) 7))));
																																																					{	/* Ast/sexp.scm 292 */
																																																						obj_t
																																																							BgL_arg3812z00_1484;
																																																						{	/* Ast/sexp.scm 292 */
																																																							obj_t
																																																								BgL_arg3813z00_1485;
																																																							obj_t
																																																								BgL_arg3814z00_1486;
																																																							BgL_arg3813z00_1485
																																																								=
																																																								BGl_letzd2symzd2zzast_letz00
																																																								();
																																																							{	/* Ast/sexp.scm 292 */
																																																								obj_t
																																																									BgL_arg3815z00_1487;
																																																								obj_t
																																																									BgL_arg3816z00_1488;
																																																								{	/* Ast/sexp.scm 292 */
																																																									obj_t
																																																										BgL_arg3820z00_1492;
																																																									{	/* Ast/sexp.scm 292 */
																																																										obj_t
																																																											BgL_arg3822z00_1494;
																																																										obj_t
																																																											BgL_arg3823z00_1495;
																																																										{	/* Ast/sexp.scm 292 */
																																																											obj_t
																																																												BgL_arg3824z00_1496;
																																																											{	/* Ast/sexp.scm 292 */
																																																												obj_t
																																																													BgL_arg3825z00_1497;
																																																												obj_t
																																																													BgL_arg3826z00_1498;
																																																												{	/* Ast/sexp.scm 292 */
																																																													obj_t
																																																														BgL_res4237z00_2666;
																																																													{	/* Ast/sexp.scm 292 */
																																																														obj_t
																																																															BgL_arg2063z00_2665;
																																																														BgL_arg2063z00_2665
																																																															=
																																																															SYMBOL_TO_STRING
																																																															(BgL_testz00_1483);
																																																														BgL_res4237z00_2666
																																																															=
																																																															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																																															(BgL_arg2063z00_2665);
																																																													}
																																																													BgL_arg3825z00_1497
																																																														=
																																																														BgL_res4237z00_2666;
																																																												}
																																																												{	/* Ast/sexp.scm 292 */
																																																													obj_t
																																																														BgL_res4238z00_2669;
																																																													{	/* Ast/sexp.scm 292 */
																																																														obj_t
																																																															BgL_symbolz00_2667;
																																																														BgL_symbolz00_2667
																																																															=
																																																															CNST_TABLE_REF
																																																															(
																																																															((long) 8));
																																																														{	/* Ast/sexp.scm 292 */
																																																															obj_t
																																																																BgL_arg2063z00_2668;
																																																															BgL_arg2063z00_2668
																																																																=
																																																																SYMBOL_TO_STRING
																																																																(BgL_symbolz00_2667);
																																																															BgL_res4238z00_2669
																																																																=
																																																																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																																																(BgL_arg2063z00_2668);
																																																													}}
																																																													BgL_arg3826z00_1498
																																																														=
																																																														BgL_res4238z00_2669;
																																																												}
																																																												{	/* Ast/sexp.scm 292 */
																																																													obj_t
																																																														BgL_list3827z00_1499;
																																																													{	/* Ast/sexp.scm 292 */
																																																														obj_t
																																																															BgL_arg3828z00_1500;
																																																														BgL_arg3828z00_1500
																																																															=
																																																															MAKE_PAIR
																																																															(BgL_arg3826z00_1498,
																																																															BNIL);
																																																														BgL_list3827z00_1499
																																																															=
																																																															MAKE_PAIR
																																																															(BgL_arg3825z00_1497,
																																																															BgL_arg3828z00_1500);
																																																													}
																																																													BgL_arg3824z00_1496
																																																														=
																																																														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																																														(BgL_list3827z00_1499);
																																																											}}
																																																											BgL_arg3822z00_1494
																																																												=
																																																												string_to_symbol
																																																												(BSTRING_TO_STRING
																																																												(BgL_arg3824z00_1496));
																																																										}
																																																										{	/* Ast/sexp.scm 292 */
																																																											obj_t
																																																												BgL_list3829z00_1501;
																																																											BgL_list3829z00_1501
																																																												=
																																																												MAKE_PAIR
																																																												(BNIL,
																																																												BNIL);
																																																											BgL_arg3823z00_1495
																																																												=
																																																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																																												(BgL_siz00_1404,
																																																												BgL_list3829z00_1501);
																																																										}
																																																										BgL_arg3820z00_1492
																																																											=
																																																											MAKE_PAIR
																																																											(BgL_arg3822z00_1494,
																																																											BgL_arg3823z00_1495);
																																																									}
																																																									BgL_arg3815z00_1487
																																																										=
																																																										MAKE_PAIR
																																																										(BgL_arg3820z00_1492,
																																																										BNIL);
																																																								}
																																																								{	/* Ast/sexp.scm 293 */
																																																									obj_t
																																																										BgL_arg3830z00_1502;
																																																									{	/* Ast/sexp.scm 293 */
																																																										obj_t
																																																											BgL_arg3831z00_1503;
																																																										obj_t
																																																											BgL_arg3832z00_1504;
																																																										BgL_arg3831z00_1503
																																																											=
																																																											CNST_TABLE_REF
																																																											(
																																																											((long) 1));
																																																										{	/* Ast/sexp.scm 293 */
																																																											obj_t
																																																												BgL_list3833z00_1505;
																																																											{	/* Ast/sexp.scm 293 */
																																																												obj_t
																																																													BgL_arg3834z00_1506;
																																																												{	/* Ast/sexp.scm 293 */
																																																													obj_t
																																																														BgL_arg3835z00_1507;
																																																													BgL_arg3835z00_1507
																																																														=
																																																														MAKE_PAIR
																																																														(BNIL,
																																																														BNIL);
																																																													BgL_arg3834z00_1506
																																																														=
																																																														MAKE_PAIR
																																																														(BgL_sinonz00_1406,
																																																														BgL_arg3835z00_1507);
																																																												}
																																																												BgL_list3833z00_1505
																																																													=
																																																													MAKE_PAIR
																																																													(BgL_alorsz00_1405,
																																																													BgL_arg3834z00_1506);
																																																											}
																																																											BgL_arg3832z00_1504
																																																												=
																																																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																																												(BgL_testz00_1483,
																																																												BgL_list3833z00_1505);
																																																										}
																																																										BgL_arg3830z00_1502
																																																											=
																																																											MAKE_PAIR
																																																											(BgL_arg3831z00_1503,
																																																											BgL_arg3832z00_1504);
																																																									}
																																																									BgL_arg3816z00_1488
																																																										=
																																																										BGl_epairifyzd2reczd2zztools_miscz00
																																																										(BgL_arg3830z00_1502,
																																																										BgL_expz00_18);
																																																								}
																																																								{	/* Ast/sexp.scm 292 */
																																																									obj_t
																																																										BgL_list3818z00_1490;
																																																									{	/* Ast/sexp.scm 292 */
																																																										obj_t
																																																											BgL_arg3819z00_1491;
																																																										BgL_arg3819z00_1491
																																																											=
																																																											MAKE_PAIR
																																																											(BNIL,
																																																											BNIL);
																																																										BgL_list3818z00_1490
																																																											=
																																																											MAKE_PAIR
																																																											(BgL_arg3816z00_1488,
																																																											BgL_arg3819z00_1491);
																																																									}
																																																									BgL_arg3814z00_1486
																																																										=
																																																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																																										(BgL_arg3815z00_1487,
																																																										BgL_list3818z00_1490);
																																																							}}
																																																							BgL_arg3812z00_1484
																																																								=
																																																								MAKE_PAIR
																																																								(BgL_arg3813z00_1485,
																																																								BgL_arg3814z00_1486);
																																																						}
																																																						BGl_replacez12z12zztools_miscz00
																																																							(BgL_expz00_18,
																																																							BgL_arg3812z00_1484);
																																																					}
																																																					BgL_auxz00_3261
																																																						=
																																																						(obj_t)
																																																						(BGl_sexpzd2ze3nodez31zzast_sexpz00
																																																						(BgL_expz00_18,
																																																							BgL_stackz00_19,
																																																							BgL_locz00_20,
																																																							BgL_sitez00_21));
																																															}}}}
																																														else
																																															{	/* Ast/sexp.scm 103 */
																																																goto
																																																	BgL_tagzd22541zd2_1433;
																																															}
																																													}
																																												else
																																													{	/* Ast/sexp.scm 103 */
																																														goto
																																															BgL_tagzd22541zd2_1433;
																																													}
																																											}
																																										else
																																											{	/* Ast/sexp.scm 103 */
																																												goto
																																													BgL_tagzd22541zd2_1433;
																																											}
																																									}
																																								else
																																									{	/* Ast/sexp.scm 103 */
																																										goto
																																											BgL_tagzd22541zd2_1433;
																																									}
																																							}
																																						else
																																							{	/* Ast/sexp.scm 103 */
																																								goto
																																									BgL_tagzd22541zd2_1433;
																																							}
																																					}
																																				else
																																					{	/* Ast/sexp.scm 103 */
																																						if (
																																							(CAR
																																								(BgL_siz00_1404)
																																								==
																																								CNST_TABLE_REF
																																								(((long) 9))))
																																							{	/* Ast/sexp.scm 103 */
																																								if (PAIRP(BgL_cdrzd22548zd2_1436))
																																									{	/* Ast/sexp.scm 103 */
																																										if (NULLP(CDR(BgL_cdrzd22548zd2_1436)))
																																											{	/* Ast/sexp.scm 103 */
																																												obj_t
																																													BgL_arg3796z00_1456;
																																												BgL_arg3796z00_1456
																																													=
																																													CAR
																																													(BgL_cdrzd22548zd2_1436);
																																												{	/* Ast/sexp.scm 103 */
																																													BgL_nodez00_bglt
																																														BgL_auxz00_3391;
																																													{
																																														obj_t
																																															BgL_siz00_3392;
																																														BgL_siz00_3392
																																															=
																																															BgL_arg3796z00_1456;
																																														BgL_siz00_1431
																																															=
																																															BgL_siz00_3392;
																																														goto
																																															BgL_tagzd22540zd2_1432;
																																													}
																																													BgL_auxz00_3261
																																														=
																																														(obj_t)
																																														(BgL_auxz00_3391);
																																												}
																																											}
																																										else
																																											{	/* Ast/sexp.scm 103 */
																																												goto
																																													BgL_tagzd22541zd2_1433;
																																											}
																																									}
																																								else
																																									{	/* Ast/sexp.scm 103 */
																																										goto
																																											BgL_tagzd22541zd2_1433;
																																									}
																																							}
																																						else
																																							{	/* Ast/sexp.scm 103 */
																																								goto
																																									BgL_tagzd22541zd2_1433;
																																							}
																																					}
																																			}
																																		else
																																			{	/* Ast/sexp.scm 103 */
																																				goto
																																					BgL_tagzd22541zd2_1433;
																																			}
																																	}
																																}
																															else
																																{	/* Ast/sexp.scm 103 */
																																	BgL_nodez00_bglt
																																		BgL_auxz00_3397;
																																BgL_tagzd22474zd2_1411:
																																	BgL_auxz00_3397 = BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(BGl_string4259z00zzast_sexpz00, BgL_expz00_18, BgL_locz00_20);
																																	BgL_auxz00_3261
																																		=
																																		(obj_t)
																																		(BgL_auxz00_3397);
																																}
																														}
																													else
																														{	/* Ast/sexp.scm 103 */
																															obj_t
																																BgL_cdrzd22518zd2_1426;
																															BgL_cdrzd22518zd2_1426
																																=
																																CDR
																																(BgL_cdrzd22483zd2_1414);
																															if (NULLP(CDR
																																	(BgL_cdrzd22518zd2_1426)))
																																{	/* Ast/sexp.scm 103 */
																																	obj_t
																																		BgL_arg3776z00_1428;
																																	obj_t
																																		BgL_arg3777z00_1429;
																																	BgL_arg3776z00_1428
																																		=
																																		CAR
																																		(BgL_cdrzd22483zd2_1414);
																																	BgL_arg3777z00_1429
																																		=
																																		CAR
																																		(BgL_cdrzd22518zd2_1426);
																																	{	/* Ast/sexp.scm 103 */
																																		BgL_nodez00_bglt
																																			BgL_auxz00_3406;
																																		BgL_siz00_1408
																																			=
																																			BgL_arg3776z00_1428;
																																		BgL_alorsz00_1409
																																			=
																																			BgL_arg3777z00_1429;
																																		{	/* Ast/sexp.scm 297 */
																																			obj_t
																																				BgL_arg3838z00_1510;
																																			obj_t
																																				BgL_arg3839z00_1511;
																																			{	/* Ast/sexp.scm 297 */
																																				obj_t
																																					BgL_pairz00_2671;
																																				BgL_pairz00_2671
																																					=
																																					BgL_expz00_18;
																																				BgL_arg3838z00_1510
																																					=
																																					CDR
																																					(CDR
																																					(BgL_pairz00_2671));
																																			}
																																			{	/* Ast/sexp.scm 297 */
																																				obj_t
																																					BgL_list3840z00_1512;
																																				BgL_list3840z00_1512
																																					=
																																					MAKE_PAIR
																																					(BUNSPEC,
																																					BNIL);
																																				BgL_arg3839z00_1511
																																					=
																																					BgL_list3840z00_1512;
																																			}
																																			SET_CDR
																																				(BgL_arg3838z00_1510,
																																				BgL_arg3839z00_1511);
																																		}
																																		BgL_auxz00_3406
																																			=
																																			BGl_sexpzd2ze3nodez31zzast_sexpz00
																																			(BgL_expz00_18,
																																			BgL_stackz00_19,
																																			BgL_locz00_20,
																																			BgL_sitez00_21);
																																		BgL_auxz00_3261
																																			=
																																			(obj_t)
																																			(BgL_auxz00_3406);
																																	}
																																}
																															else
																																{	/* Ast/sexp.scm 103 */
																																	BgL_nodez00_bglt
																																		BgL_auxz00_3413;
																																	goto
																																		BgL_tagzd22474zd2_1411;
																																	BgL_auxz00_3261
																																		=
																																		(obj_t)
																																		(BgL_auxz00_3413);
																																}
																														}
																												}
																											else
																												{	/* Ast/sexp.scm 103 */
																													BgL_nodez00_bglt
																														BgL_auxz00_3415;
																													goto
																														BgL_tagzd22474zd2_1411;
																													BgL_auxz00_3261 =
																														(obj_t)
																														(BgL_auxz00_3415);
																												}
																										}
																									else
																										{	/* Ast/sexp.scm 103 */
																											BgL_nodez00_bglt
																												BgL_auxz00_3417;
																											goto
																												BgL_tagzd22474zd2_1411;
																											BgL_auxz00_3261 =
																												(obj_t)
																												(BgL_auxz00_3417);
																										}
																								}
																							else
																								{	/* Ast/sexp.scm 103 */
																									BgL_nodez00_bglt
																										BgL_auxz00_3419;
																									goto BgL_tagzd22474zd2_1411;
																									BgL_auxz00_3261 =
																										(obj_t) (BgL_auxz00_3419);
																								}
																						}
																						return
																							(BgL_nodez00_bglt)
																							(BgL_auxz00_3261);
																					}
																				else
																					{	/* Ast/sexp.scm 103 */
																						if (
																							(BgL_carzd21734zd2_975 ==
																								BGl_za2ifza2z00zzast_sexpz00))
																							{	/* Ast/sexp.scm 103 */
																								obj_t BgL_auxz00_3424;

																								goto BgL_tagzd21654zd2_934;
																								return
																									(BgL_nodez00_bglt)
																									(BgL_auxz00_3424);
																							}
																						else
																							{	/* Ast/sexp.scm 103 */
																								if (
																									(CAR(BgL_expz00_18) ==
																										CNST_TABLE_REF(((long) 5))))
																									{	/* Ast/sexp.scm 103 */
																										obj_t BgL_auxz00_3430;

																									BgL_tagzd21655zd2_935:
																										{
																											obj_t BgL_varz00_1513;

																											obj_t BgL_valz00_1514;

																											if (PAIRP(BgL_expz00_18))
																												{	/* Ast/sexp.scm 103 */
																													obj_t
																														BgL_cdrzd22579zd2_1519;
																													BgL_cdrzd22579zd2_1519
																														=
																														CDR(BgL_expz00_18);
																													if (PAIRP
																														(BgL_cdrzd22579zd2_1519))
																														{	/* Ast/sexp.scm 103 */
																															obj_t
																																BgL_cdrzd22583zd2_1521;
																															BgL_cdrzd22583zd2_1521
																																=
																																CDR
																																(BgL_cdrzd22579zd2_1519);
																															if (PAIRP
																																(BgL_cdrzd22583zd2_1521))
																																{	/* Ast/sexp.scm 103 */
																																	if (NULLP(CDR
																																			(BgL_cdrzd22583zd2_1521)))
																																		{	/* Ast/sexp.scm 103 */
																																			BgL_varz00_1513
																																				=
																																				CAR
																																				(BgL_cdrzd22579zd2_1519);
																																			BgL_valz00_1514
																																				=
																																				CAR
																																				(BgL_cdrzd22583zd2_1521);
																																			{	/* Ast/sexp.scm 305 */
																																				obj_t
																																					BgL_locz00_1527;
																																				BgL_locz00_1527
																																					=
																																					BGl_findzd2locationzf2locz20zztools_locationz00
																																					(BgL_expz00_18,
																																					BgL_locz00_20);
																																				{	/* Ast/sexp.scm 305 */
																																					obj_t
																																						BgL_cdlocz00_1528;
																																					BgL_cdlocz00_1528
																																						=
																																						BGl_findzd2locationzf2locz20zztools_locationz00
																																						(CDR
																																						(BgL_expz00_18),
																																						BgL_locz00_1527);
																																					{	/* Ast/sexp.scm 306 */
																																						obj_t
																																							BgL_cddlocz00_1529;
																																						{	/* Ast/sexp.scm 307 */
																																							obj_t
																																								BgL_arg3853z00_1539;
																																							{	/* Ast/sexp.scm 307 */
																																								obj_t
																																									BgL_pairz00_2689;
																																								BgL_pairz00_2689
																																									=
																																									BgL_expz00_18;
																																								BgL_arg3853z00_1539
																																									=
																																									CDR
																																									(CDR
																																									(BgL_pairz00_2689));
																																							}
																																							BgL_cddlocz00_1529
																																								=
																																								BGl_findzd2locationzf2locz20zztools_locationz00
																																								(BgL_arg3853z00_1539,
																																								BgL_locz00_1527);
																																						}
																																						{	/* Ast/sexp.scm 307 */
																																							obj_t
																																								BgL_valzd2loczd2_1530;
																																							BgL_valzd2loczd2_1530
																																								=
																																								BGl_findzd2locationzf2locz20zztools_locationz00
																																								(BgL_valz00_1514,
																																								BgL_cddlocz00_1529);
																																							{	/* Ast/sexp.scm 308 */
																																								BgL_nodez00_bglt
																																									BgL_valz00_1531;
																																								BgL_valz00_1531
																																									=
																																									BGl_sexpzd2ze3nodez31zzast_sexpz00
																																									(BgL_valz00_1514,
																																									BgL_stackz00_19,
																																									BgL_valzd2loczd2_1530,
																																									CNST_TABLE_REF
																																									(((long) 2)));
																																								{	/* Ast/sexp.scm 309 */

																																									{	/* Ast/sexp.scm 310 */
																																										BgL_nodez00_bglt
																																											BgL_astz00_1532;
																																										BgL_astz00_1532
																																											=
																																											BGl_sexpzd2ze3nodez31zzast_sexpz00
																																											(BgL_varz00_1513,
																																											BgL_stackz00_19,
																																											BgL_cdlocz00_1528,
																																											CNST_TABLE_REF
																																											(((long) 5)));
																																										{	/* Ast/sexp.scm 311 */
																																											bool_t
																																												BgL_testz00_3453;
																																											{	/* Ast/sexp.scm 311 */
																																												obj_t
																																													BgL_obj2259z00_2693;
																																												BgL_obj2259z00_2693
																																													=
																																													(obj_t)
																																													(BgL_astz00_1532);
																																												BgL_testz00_3453
																																													=
																																													BGl_iszd2azf3z21zz__objectz00
																																													(BgL_obj2259z00_2693,
																																													BGl_varz00zzast_nodez00);
																																											}
																																											if (BgL_testz00_3453)
																																												{	/* Ast/sexp.scm 312 */
																																													BgL_varz00_bglt
																																														BgL_instance3364z00_1534;
																																													BgL_instance3364z00_1534
																																														=
																																														(BgL_varz00_bglt)
																																														(BgL_astz00_1532);
																																													{	/* Ast/sexp.scm 313 */
																																														bool_t
																																															BgL_testz00_3457;
																																														{	/* Ast/sexp.scm 313 */
																																															bool_t
																																																BgL_testz00_3458;
																																															{	/* Ast/sexp.scm 313 */
																																																BgL_variablez00_bglt
																																																	BgL_arg3852z00_1538;
																																																BgL_arg3852z00_1538
																																																	=
																																																	(
																																																	((BgL_varz00_bglt) CREF(BgL_instance3364z00_1534))->BgL_variablez00);
																																																{	/* Ast/sexp.scm 313 */
																																																	obj_t
																																																		BgL_obj1839z00_2695;
																																																	BgL_obj1839z00_2695
																																																		=
																																																		(obj_t)
																																																		(BgL_arg3852z00_1538);
																																																	BgL_testz00_3458
																																																		=
																																																		BGl_iszd2azf3z21zz__objectz00
																																																		(BgL_obj1839z00_2695,
																																																		BGl_globalz00zzast_varz00);
																																																}
																																															}
																																															if (BgL_testz00_3458)
																																																{	/* Ast/sexp.scm 314 */
																																																	BgL_variablez00_bglt
																																																		BgL_arg3851z00_1537;
																																																	BgL_arg3851z00_1537
																																																		=
																																																		(
																																																		((BgL_varz00_bglt) CREF(BgL_instance3364z00_1534))->BgL_variablez00);
																																																	BgL_testz00_3457
																																																		=
																																																		BGl_globalzd2readzd2onlyzf3zf3zzast_varz00
																																																		(
																																																		(BgL_globalz00_bglt)
																																																		(BgL_arg3851z00_1537));
																																																}
																																															else
																																																{	/* Ast/sexp.scm 313 */
																																																	BgL_testz00_3457
																																																		=
																																																		(
																																																		(bool_t)
																																																		0);
																																																}
																																														}
																																														if (BgL_testz00_3457)
																																															{	/* Ast/sexp.scm 313 */
																																																BgL_auxz00_3430
																																																	=
																																																	(obj_t)
																																																	(BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																																																	(BGl_string4257z00zzast_sexpz00,
																																																		BgL_expz00_18,
																																																		BgL_cdlocz00_1528));
																																															}
																																														else
																																															{	/* Ast/sexp.scm 313 */
																																																BgL_auxz00_3430
																																																	=
																																																	(obj_t)
																																																	(BGl_makezd2setqzd2zzast_nodez00
																																																	(BgL_locz00_1527,
																																																		(BgL_typez00_bglt)
																																																		(BGl_za2unspecza2z00zztype_cachez00),
																																																		(BgL_varz00_bglt)
																																																		(BgL_astz00_1532),
																																																		BgL_valz00_1531));
																																															}
																																													}
																																												}
																																											else
																																												{	/* Ast/sexp.scm 311 */
																																													BgL_auxz00_3430
																																														=
																																														(obj_t)
																																														(BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																																														(BGl_string4258z00zzast_sexpz00,
																																															BgL_expz00_18,
																																															BgL_locz00_1527));
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
																																	else
																																		{	/* Ast/sexp.scm 103 */
																																			BgL_nodez00_bglt
																																				BgL_auxz00_3475;
																																		BgL_tagzd22572zd2_1516:
																																			BgL_auxz00_3475 = BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(BGl_string4256z00zzast_sexpz00, BgL_expz00_18, BGl_findzd2locationzf2locz20zztools_locationz00(BgL_expz00_18, BgL_locz00_20));
																																			BgL_auxz00_3430
																																				=
																																				(obj_t)
																																				(BgL_auxz00_3475);
																																		}
																																}
																															else
																																{	/* Ast/sexp.scm 103 */
																																	BgL_nodez00_bglt
																																		BgL_auxz00_3479;
																																	goto
																																		BgL_tagzd22572zd2_1516;
																																	BgL_auxz00_3430
																																		=
																																		(obj_t)
																																		(BgL_auxz00_3479);
																																}
																														}
																													else
																														{	/* Ast/sexp.scm 103 */
																															BgL_nodez00_bglt
																																BgL_auxz00_3481;
																															goto
																																BgL_tagzd22572zd2_1516;
																															BgL_auxz00_3430 =
																																(obj_t)
																																(BgL_auxz00_3481);
																														}
																												}
																											else
																												{	/* Ast/sexp.scm 103 */
																													BgL_nodez00_bglt
																														BgL_auxz00_3483;
																													goto
																														BgL_tagzd22572zd2_1516;
																													BgL_auxz00_3430 =
																														(obj_t)
																														(BgL_auxz00_3483);
																												}
																										}
																										return
																											(BgL_nodez00_bglt)
																											(BgL_auxz00_3430);
																									}
																								else
																									{	/* Ast/sexp.scm 103 */
																										if (
																											(CAR(BgL_expz00_18) ==
																												CNST_TABLE_REF(((long)
																														17))))
																											{	/* Ast/sexp.scm 103 */
																												obj_t BgL_auxz00_3490;

																											BgL_tagzd21656zd2_936:
																												{
																													obj_t BgL_varz00_1543;

																													obj_t BgL_valz00_1544;

																													if (PAIRP
																														(BgL_expz00_18))
																														{	/* Ast/sexp.scm 103 */
																															obj_t
																																BgL_cdrzd22597zd2_1549;
																															BgL_cdrzd22597zd2_1549
																																=
																																CDR
																																(BgL_expz00_18);
																															if (PAIRP
																																(BgL_cdrzd22597zd2_1549))
																																{	/* Ast/sexp.scm 103 */
																																	obj_t
																																		BgL_cdrzd22601zd2_1551;
																																	BgL_cdrzd22601zd2_1551
																																		=
																																		CDR
																																		(BgL_cdrzd22597zd2_1549);
																																	if (PAIRP
																																		(BgL_cdrzd22601zd2_1551))
																																		{	/* Ast/sexp.scm 103 */
																																			if (NULLP
																																				(CDR
																																					(BgL_cdrzd22601zd2_1551)))
																																				{	/* Ast/sexp.scm 103 */
																																					BgL_varz00_1543
																																						=
																																						CAR
																																						(BgL_cdrzd22597zd2_1549);
																																					BgL_valz00_1544
																																						=
																																						CAR
																																						(BgL_cdrzd22601zd2_1551);
																																					{	/* Ast/sexp.scm 336 */
																																						obj_t
																																							BgL_locz00_1557;
																																						BgL_locz00_1557
																																							=
																																							BGl_findzd2locationzf2locz20zztools_locationz00
																																							(BgL_expz00_18,
																																							BgL_locz00_20);
																																						{	/* Ast/sexp.scm 336 */
																																							obj_t
																																								BgL_cdlocz00_1558;
																																							BgL_cdlocz00_1558
																																								=
																																								BGl_findzd2locationzf2locz20zztools_locationz00
																																								(CDR
																																								(BgL_expz00_18),
																																								BgL_locz00_1557);
																																							{	/* Ast/sexp.scm 337 */
																																								obj_t
																																									BgL_cddlocz00_1559;
																																								{	/* Ast/sexp.scm 338 */
																																									obj_t
																																										BgL_arg3868z00_1567;
																																									{	/* Ast/sexp.scm 338 */
																																										obj_t
																																											BgL_pairz00_2707;
																																										BgL_pairz00_2707
																																											=
																																											BgL_expz00_18;
																																										BgL_arg3868z00_1567
																																											=
																																											CDR
																																											(CDR
																																											(BgL_pairz00_2707));
																																									}
																																									BgL_cddlocz00_1559
																																										=
																																										BGl_findzd2locationzf2locz20zztools_locationz00
																																										(BgL_arg3868z00_1567,
																																										BgL_locz00_1557);
																																								}
																																								{	/* Ast/sexp.scm 338 */
																																									obj_t
																																										BgL_valzd2loczd2_1560;
																																									BgL_valzd2loczd2_1560
																																										=
																																										BGl_findzd2locationzf2locz20zztools_locationz00
																																										(BgL_valz00_1544,
																																										BgL_cddlocz00_1559);
																																									{	/* Ast/sexp.scm 339 */
																																										BgL_nodez00_bglt
																																											BgL_valz00_1561;
																																										BgL_valz00_1561
																																											=
																																											BGl_sexpzd2ze3nodez31zzast_sexpz00
																																											(BgL_valz00_1544,
																																											BgL_stackz00_19,
																																											BgL_valzd2loczd2_1560,
																																											CNST_TABLE_REF
																																											(((long) 2)));
																																										{	/* Ast/sexp.scm 340 */

																																											{	/* Ast/sexp.scm 341 */
																																												BgL_nodez00_bglt
																																													BgL_astz00_1562;
																																												BgL_astz00_1562
																																													=
																																													BGl_sexpzd2ze3nodez31zzast_sexpz00
																																													(BgL_varz00_1543,
																																													BgL_stackz00_19,
																																													BgL_cdlocz00_1558,
																																													CNST_TABLE_REF
																																													(((long) 2)));
																																												{	/* Ast/sexp.scm 342 */
																																													bool_t
																																														BgL_testz00_3513;
																																													{	/* Ast/sexp.scm 342 */
																																														bool_t
																																															BgL_testz00_3514;
																																														{	/* Ast/sexp.scm 342 */
																																															obj_t
																																																BgL_obj2259z00_2711;
																																															BgL_obj2259z00_2711
																																																=
																																																(obj_t)
																																																(BgL_astz00_1562);
																																															BgL_testz00_3514
																																																=
																																																BGl_iszd2azf3z21zz__objectz00
																																																(BgL_obj2259z00_2711,
																																																BGl_varz00zzast_nodez00);
																																														}
																																														if (BgL_testz00_3514)
																																															{	/* Ast/sexp.scm 342 */
																																																BgL_variablez00_bglt
																																																	BgL_arg3867z00_1566;
																																																{
																																																	BgL_varz00_bglt
																																																		BgL_auxz00_3517;
																																																	BgL_auxz00_3517
																																																		=
																																																		(BgL_varz00_bglt)
																																																		(BgL_astz00_1562);
																																																	BgL_arg3867z00_1566
																																																		=
																																																		(
																																																		((BgL_varz00_bglt) CREF(BgL_auxz00_3517))->BgL_variablez00);
																																																}
																																																{	/* Ast/sexp.scm 342 */
																																																	obj_t
																																																		BgL_obj1839z00_2713;
																																																	BgL_obj1839z00_2713
																																																		=
																																																		(obj_t)
																																																		(BgL_arg3867z00_1566);
																																																	BgL_testz00_3513
																																																		=
																																																		BGl_iszd2azf3z21zz__objectz00
																																																		(BgL_obj1839z00_2713,
																																																		BGl_globalz00zzast_varz00);
																																																}
																																															}
																																														else
																																															{	/* Ast/sexp.scm 342 */
																																																BgL_testz00_3513
																																																	=
																																																	(
																																																	(bool_t)
																																																	0);
																																															}
																																													}
																																													if (BgL_testz00_3513)
																																														{	/* Ast/sexp.scm 342 */
																																															{	/* Ast/sexp.scm 344 */
																																																BgL_variablez00_bglt
																																																	BgL_arg3865z00_1564;
																																																{
																																																	BgL_varz00_bglt
																																																		BgL_auxz00_3522;
																																																	BgL_auxz00_3522
																																																		=
																																																		(BgL_varz00_bglt)
																																																		(BgL_astz00_1562);
																																																	BgL_arg3865z00_1564
																																																		=
																																																		(
																																																		((BgL_varz00_bglt) CREF(BgL_auxz00_3522))->BgL_variablez00);
																																																}
																																																{
																																																	obj_t
																																																		BgL_auxz00_3527;
																																																	BgL_globalz00_bglt
																																																		BgL_auxz00_3525;
																																																	BgL_auxz00_3527
																																																		=
																																																		(obj_t)
																																																		(BgL_valz00_1561);
																																																	BgL_auxz00_3525
																																																		=
																																																		(BgL_globalz00_bglt)
																																																		(BgL_arg3865z00_1564);
																																																	((((BgL_globalz00_bglt) CREF(BgL_auxz00_3525))->BgL_srcz00) = ((obj_t) BgL_auxz00_3527), BUNSPEC);
																																																}
																																															}
																																															BgL_auxz00_3490
																																																=
																																																(obj_t)
																																																(BGl_makezd2setqzd2zzast_nodez00
																																																(BgL_locz00_1557,
																																																	(BgL_typez00_bglt)
																																																	(BGl_za2unspecza2z00zztype_cachez00),
																																																	(BgL_varz00_bglt)
																																																	(BgL_astz00_1562),
																																																	BgL_valz00_1561));
																																														}
																																													else
																																														{	/* Ast/sexp.scm 342 */
																																															BgL_auxz00_3490
																																																=
																																																(obj_t)
																																																(BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																																																(BGl_string4255z00zzast_sexpz00,
																																																	BgL_expz00_18,
																																																	BgL_locz00_1557));
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
																																			else
																																				{	/* Ast/sexp.scm 103 */
																																					BgL_nodez00_bglt
																																						BgL_auxz00_3538;
																																				BgL_tagzd22590zd2_1546:
																																					BgL_auxz00_3538 = BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(BGl_string4254z00zzast_sexpz00, BgL_expz00_18, BGl_findzd2locationzf2locz20zztools_locationz00(BgL_expz00_18, BgL_locz00_20));
																																					BgL_auxz00_3490
																																						=
																																						(obj_t)
																																						(BgL_auxz00_3538);
																																				}
																																		}
																																	else
																																		{	/* Ast/sexp.scm 103 */
																																			BgL_nodez00_bglt
																																				BgL_auxz00_3542;
																																			goto
																																				BgL_tagzd22590zd2_1546;
																																			BgL_auxz00_3490
																																				=
																																				(obj_t)
																																				(BgL_auxz00_3542);
																																		}
																																}
																															else
																																{	/* Ast/sexp.scm 103 */
																																	BgL_nodez00_bglt
																																		BgL_auxz00_3544;
																																	goto
																																		BgL_tagzd22590zd2_1546;
																																	BgL_auxz00_3490
																																		=
																																		(obj_t)
																																		(BgL_auxz00_3544);
																																}
																														}
																													else
																														{	/* Ast/sexp.scm 103 */
																															BgL_nodez00_bglt
																																BgL_auxz00_3546;
																															goto
																																BgL_tagzd22590zd2_1546;
																															BgL_auxz00_3490 =
																																(obj_t)
																																(BgL_auxz00_3546);
																														}
																												}
																												return
																													(BgL_nodez00_bglt)
																													(BgL_auxz00_3490);
																											}
																										else
																											{	/* Ast/sexp.scm 103 */
																												obj_t
																													BgL_carzd21758zd2_980;
																												BgL_carzd21758zd2_980 =
																													CAR(BgL_expz00_18);
																												if (PAIRP
																													(BgL_carzd21758zd2_980))
																													{	/* Ast/sexp.scm 103 */
																														obj_t
																															BgL_carzd21761zd2_982;
																														obj_t
																															BgL_cdrzd21762zd2_983;
																														BgL_carzd21761zd2_982
																															=
																															CAR
																															(BgL_carzd21758zd2_980);
																														BgL_cdrzd21762zd2_983
																															=
																															CDR
																															(BgL_carzd21758zd2_980);
																														{

																															if (
																																(BgL_carzd21761zd2_982
																																	==
																																	CNST_TABLE_REF
																																	(((long)
																																			19))))
																																{	/* Ast/sexp.scm 103 */
																																	obj_t
																																		BgL_auxz00_3557;
																																BgL_kapzd21763zd2_984:
																																	if (PAIRP
																																		(BgL_cdrzd21762zd2_983))
																																		{	/* Ast/sexp.scm 103 */
																																			obj_t
																																				BgL_cdrzd21766zd2_1006;
																																			BgL_cdrzd21766zd2_1006
																																				=
																																				CDR
																																				(BgL_cdrzd21762zd2_983);
																																			if (PAIRP
																																				(BgL_cdrzd21766zd2_1006))
																																				{	/* Ast/sexp.scm 103 */
																																					if (NULLP(CDR(BgL_cdrzd21766zd2_1006)))
																																						{	/* Ast/sexp.scm 103 */
																																							obj_t
																																								BgL_arg3426z00_1009;
																																							obj_t
																																								BgL_arg3427z00_1010;
																																							BgL_arg3426z00_1009
																																								=
																																								CAR
																																								(BgL_cdrzd21766zd2_1006);
																																							BgL_arg3427z00_1010
																																								=
																																								CDR
																																								(BgL_expz00_18);
																																							{	/* Ast/sexp.scm 103 */
																																								BgL_nodez00_bglt
																																									BgL_auxz00_3568;
																																								BgL_bodyz00_937
																																									=
																																									BgL_arg3426z00_1009;
																																								BgL_argsz00_938
																																									=
																																									BgL_arg3427z00_1010;
																																							BgL_tagzd21657zd2_939:
																																								{	/* Ast/sexp.scm 359 */
																																									obj_t
																																										BgL_letzd2partzd2_1571;
																																									BgL_letzd2partzd2_1571
																																										=
																																										CAR
																																										(BgL_expz00_18);
																																									{	/* Ast/sexp.scm 359 */
																																										obj_t
																																											BgL_nexpz00_1572;
																																										{	/* Ast/sexp.scm 360 */
																																											obj_t
																																												BgL_arg3872z00_1573;
																																											obj_t
																																												BgL_arg3873z00_1574;
																																											BgL_arg3872z00_1573
																																												=
																																												CAR
																																												(BgL_letzd2partzd2_1571);
																																											{	/* Ast/sexp.scm 360 */
																																												obj_t
																																													BgL_arg3874z00_1575;
																																												obj_t
																																													BgL_arg3875z00_1576;
																																												{	/* Ast/sexp.scm 360 */
																																													obj_t
																																														BgL_pairz00_2719;
																																													BgL_pairz00_2719
																																														=
																																														BgL_letzd2partzd2_1571;
																																													BgL_arg3874z00_1575
																																														=
																																														CAR
																																														(CDR
																																														(BgL_pairz00_2719));
																																												}
																																												BgL_arg3875z00_1576
																																													=
																																													MAKE_PAIR
																																													(BgL_bodyz00_937,
																																													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																													(BgL_argsz00_938,
																																														BNIL));
																																												{	/* Ast/sexp.scm 360 */
																																													obj_t
																																														BgL_list3877z00_1578;
																																													{	/* Ast/sexp.scm 360 */
																																														obj_t
																																															BgL_arg3878z00_1579;
																																														BgL_arg3878z00_1579
																																															=
																																															MAKE_PAIR
																																															(BNIL,
																																															BNIL);
																																														BgL_list3877z00_1578
																																															=
																																															MAKE_PAIR
																																															(BgL_arg3875z00_1576,
																																															BgL_arg3878z00_1579);
																																													}
																																													BgL_arg3873z00_1574
																																														=
																																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																														(BgL_arg3874z00_1575,
																																														BgL_list3877z00_1578);
																																												}
																																											}
																																											BgL_nexpz00_1572
																																												=
																																												MAKE_PAIR
																																												(BgL_arg3872z00_1573,
																																												BgL_arg3873z00_1574);
																																										}
																																										{	/* Ast/sexp.scm 360 */

																																											BgL_auxz00_3568
																																												=
																																												BGl_sexpzd2ze3nodez31zzast_sexpz00
																																												(BgL_nexpz00_1572,
																																												BgL_stackz00_19,
																																												BgL_locz00_20,
																																												BgL_sitez00_21);
																																										}
																																									}
																																								}
																																								BgL_auxz00_3557
																																									=
																																									(obj_t)
																																									(BgL_auxz00_3568);
																																							}
																																						}
																																					else
																																						{	/* Ast/sexp.scm 103 */
																																							bool_t
																																								BgL_testz00_3581;
																																							{	/* Ast/sexp.scm 103 */
																																								obj_t
																																									BgL_arg3438z00_1023;
																																								BgL_arg3438z00_1023
																																									=
																																									CAR
																																									(BgL_expz00_18);
																																								BgL_testz00_3581
																																									=
																																									CBOOL
																																									(BGl_letzd2symzf3z21zzast_letz00
																																									(BgL_arg3438z00_1023));
																																							}
																																							if (BgL_testz00_3581)
																																								{	/* Ast/sexp.scm 103 */
																																									BgL_nodez00_bglt
																																										BgL_auxz00_3585;
																																								BgL_tagzd21658zd2_940:
																																									BgL_auxz00_3585 = BGl_letzd2ze3nodez31zzast_letz00(BgL_expz00_18, BgL_stackz00_19, BgL_locz00_20, CNST_TABLE_REF(((long) 2)));
																																									BgL_auxz00_3557
																																										=
																																										(obj_t)
																																										(BgL_auxz00_3585);
																																								}
																																							else
																																								{	/* Ast/sexp.scm 103 */
																																									bool_t
																																										BgL_testz00_3589;
																																									{	/* Ast/sexp.scm 103 */
																																										obj_t
																																											BgL_arg3437z00_1022;
																																										BgL_arg3437z00_1022
																																											=
																																											CAR
																																											(BgL_expz00_18);
																																										BgL_testz00_3589
																																											=
																																											CBOOL
																																											(BGl_labelszd2symzf3z21zzast_labelsz00
																																											(BgL_arg3437z00_1022));
																																									}
																																									if (BgL_testz00_3589)
																																										{	/* Ast/sexp.scm 103 */
																																											BgL_letzd2funzd2_bglt
																																												BgL_auxz00_3593;
																																										BgL_tagzd21659zd2_941:
																																											BgL_auxz00_3593 = BGl_labelszd2ze3nodez31zzast_labelsz00(BgL_expz00_18, BgL_stackz00_19, BgL_locz00_20, CNST_TABLE_REF(((long) 2)));
																																											BgL_auxz00_3557
																																												=
																																												(obj_t)
																																												(BgL_auxz00_3593);
																																										}
																																									else
																																										{	/* Ast/sexp.scm 103 */
																																											obj_t
																																												BgL_carzd21798zd2_1013;
																																											BgL_carzd21798zd2_1013
																																												=
																																												CAR
																																												(BgL_expz00_18);
																																											{	/* Ast/sexp.scm 103 */
																																												obj_t
																																													BgL_cdrzd21803zd2_1014;
																																												BgL_cdrzd21803zd2_1014
																																													=
																																													CDR
																																													(BgL_carzd21798zd2_1013);
																																												if ((CAR(BgL_carzd21798zd2_1013) == CNST_TABLE_REF(((long) 18))))
																																													{	/* Ast/sexp.scm 103 */
																																														obj_t
																																															BgL_arg3431z00_1016;
																																														obj_t
																																															BgL_arg3432z00_1017;
																																														obj_t
																																															BgL_arg3433z00_1018;
																																														BgL_arg3431z00_1016
																																															=
																																															CAR
																																															(BgL_cdrzd21803zd2_1014);
																																														BgL_arg3432z00_1017
																																															=
																																															CDR
																																															(BgL_cdrzd21803zd2_1014);
																																														BgL_arg3433z00_1018
																																															=
																																															CDR
																																															(BgL_expz00_18);
																																														{	/* Ast/sexp.scm 103 */
																																															BgL_nodez00_bglt
																																																BgL_auxz00_3606;
																																															BgL_varsz00_942
																																																=
																																																BgL_arg3431z00_1016;
																																															BgL_bodyz00_943
																																																=
																																																BgL_arg3432z00_1017;
																																															BgL_argsz00_944
																																																=
																																																BgL_arg3433z00_1018;
																																														BgL_tagzd21660zd2_945:
																																															{	/* Ast/sexp.scm 370 */
																																																obj_t
																																																	BgL_locz00_1581;
																																																obj_t
																																																	BgL_nexpz00_1582;
																																																BgL_locz00_1581
																																																	=
																																																	BGl_findzd2locationzf2locz20zztools_locationz00
																																																	(BgL_expz00_18,
																																																	BgL_locz00_20);
																																																{	/* Ast/sexp.scm 371 */
																																																	obj_t
																																																		BgL_arg3880z00_1583;
																																																	obj_t
																																																		BgL_arg3881z00_1584;
																																																	BgL_arg3880z00_1583
																																																		=
																																																		BGl_letzd2symzd2zzast_letz00
																																																		();
																																																	{	/* Ast/sexp.scm 374 */
																																																		obj_t
																																																			BgL_arg3882z00_1585;
																																																		obj_t
																																																			BgL_arg3883z00_1586;
																																																		BgL_arg3882z00_1585
																																																			=
																																																			BGl_loopz00zzast_sexpz00
																																																			(BgL_expz00_18,
																																																			BgL_locz00_20,
																																																			BgL_varsz00_942,
																																																			BgL_argsz00_944);
																																																		{	/* Ast/sexp.scm 413 */
																																																			obj_t
																																																				BgL_arg3933z00_1643;
																																																			obj_t
																																																				BgL_arg3934z00_1644;
																																																			BgL_arg3933z00_1643
																																																				=
																																																				BGl_shapez00zztools_shapez00
																																																				(BGl_currentzd2functionzd2zztools_errorz00
																																																				());
																																																			BgL_arg3934z00_1644
																																																				=
																																																				BGl_normaliza7ezd2prognz75zztools_prognz00
																																																				(BgL_bodyz00_943);
																																																			{	/* Ast/sexp.scm 417 */
																																																				obj_t
																																																					BgL_zc3anonymousza33937ze3z83_2911;
																																																				BgL_zc3anonymousza33937ze3z83_2911
																																																					=
																																																					make_fx_procedure
																																																					(BGl_zc3anonymousza33937ze3z83zzast_sexpz00,
																																																					(int)
																																																					(((long) 3)), (int) (((long) 1)));
																																																				PROCEDURE_SET
																																																					(BgL_zc3anonymousza33937ze3z83_2911,
																																																					(int)
																																																					(((long) 0)), BgL_locz00_20);
																																																				BgL_arg3883z00_1586
																																																					=
																																																					BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00
																																																					(BgL_arg3933z00_1643,
																																																					BgL_varsz00_942,
																																																					BgL_arg3934z00_1644,
																																																					BgL_zc3anonymousza33937ze3z83_2911);
																																																		}}
																																																		{	/* Ast/sexp.scm 371 */
																																																			obj_t
																																																				BgL_list3885z00_1588;
																																																			{	/* Ast/sexp.scm 371 */
																																																				obj_t
																																																					BgL_arg3886z00_1589;
																																																				BgL_arg3886z00_1589
																																																					=
																																																					MAKE_PAIR
																																																					(BNIL,
																																																					BNIL);
																																																				BgL_list3885z00_1588
																																																					=
																																																					MAKE_PAIR
																																																					(BgL_arg3883z00_1586,
																																																					BgL_arg3886z00_1589);
																																																			}
																																																			BgL_arg3881z00_1584
																																																				=
																																																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																																				(BgL_arg3882z00_1585,
																																																				BgL_list3885z00_1588);
																																																	}}
																																																	BgL_nexpz00_1582
																																																		=
																																																		MAKE_PAIR
																																																		(BgL_arg3880z00_1583,
																																																		BgL_arg3881z00_1584);
																																																}
																																																BgL_auxz00_3606
																																																	=
																																																	BGl_letzd2ze3nodez31zzast_letz00
																																																	(BgL_nexpz00_1582,
																																																	BgL_stackz00_19,
																																																	BgL_locz00_1581,
																																																	BgL_sitez00_21);
																																															}
																																															BgL_auxz00_3557
																																																=
																																																(obj_t)
																																																(BgL_auxz00_3606);
																																													}}
																																												else
																																													{	/* Ast/sexp.scm 103 */
																																														if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																															{	/* Ast/sexp.scm 103 */
																																															BgL_tagzd21672zd2_961:
																																																BgL_auxz00_3557 = BGl_privatezd2ze3nodez31zzast_privatez00(BgL_expz00_18, BgL_stackz00_19, BgL_locz00_20, BgL_sitez00_21);
																																															}
																																														else
																																															{	/* Ast/sexp.scm 103 */
																																																BgL_nodez00_bglt
																																																	BgL_auxz00_3628;
																																															BgL_tagzd21673zd2_962:
																																																BgL_auxz00_3628 = BGl_callzd2ze3nodez31zzast_sexpz00(BgL_expz00_18, BgL_stackz00_19, BgL_locz00_20, BgL_sitez00_21);
																																																BgL_auxz00_3557
																																																	=
																																																	(obj_t)
																																																	(BgL_auxz00_3628);
																																															}
																																													}
																																											}
																																										}
																																								}
																																						}
																																				}
																																			else
																																				{	/* Ast/sexp.scm 103 */
																																					bool_t
																																						BgL_testz00_3631;
																																					{	/* Ast/sexp.scm 103 */
																																						obj_t
																																							BgL_arg3450z00_1037;
																																						BgL_arg3450z00_1037
																																							=
																																							CAR
																																							(BgL_expz00_18);
																																						BgL_testz00_3631
																																							=
																																							CBOOL
																																							(BGl_letzd2symzf3z21zzast_letz00
																																							(BgL_arg3450z00_1037));
																																					}
																																					if (BgL_testz00_3631)
																																						{	/* Ast/sexp.scm 103 */
																																							BgL_nodez00_bglt
																																								BgL_auxz00_3635;
																																							goto
																																								BgL_tagzd21658zd2_940;
																																							BgL_auxz00_3557
																																								=
																																								(obj_t)
																																								(BgL_auxz00_3635);
																																						}
																																					else
																																						{	/* Ast/sexp.scm 103 */
																																							bool_t
																																								BgL_testz00_3637;
																																							{	/* Ast/sexp.scm 103 */
																																								obj_t
																																									BgL_arg3449z00_1036;
																																								BgL_arg3449z00_1036
																																									=
																																									CAR
																																									(BgL_expz00_18);
																																								BgL_testz00_3637
																																									=
																																									CBOOL
																																									(BGl_labelszd2symzf3z21zzast_labelsz00
																																									(BgL_arg3449z00_1036));
																																							}
																																							if (BgL_testz00_3637)
																																								{	/* Ast/sexp.scm 103 */
																																									BgL_letzd2funzd2_bglt
																																										BgL_auxz00_3641;
																																									goto
																																										BgL_tagzd21659zd2_941;
																																									BgL_auxz00_3557
																																										=
																																										(obj_t)
																																										(BgL_auxz00_3641);
																																								}
																																							else
																																								{	/* Ast/sexp.scm 103 */
																																									obj_t
																																										BgL_carzd21851zd2_1027;
																																									BgL_carzd21851zd2_1027
																																										=
																																										CAR
																																										(BgL_expz00_18);
																																									{	/* Ast/sexp.scm 103 */
																																										obj_t
																																											BgL_cdrzd21856zd2_1028;
																																										BgL_cdrzd21856zd2_1028
																																											=
																																											CDR
																																											(BgL_carzd21851zd2_1027);
																																										if ((CAR(BgL_carzd21851zd2_1027) == CNST_TABLE_REF(((long) 18))))
																																											{	/* Ast/sexp.scm 103 */
																																												obj_t
																																													BgL_arg3443z00_1030;
																																												obj_t
																																													BgL_arg3444z00_1031;
																																												obj_t
																																													BgL_arg3445z00_1032;
																																												BgL_arg3443z00_1030
																																													=
																																													CAR
																																													(BgL_cdrzd21856zd2_1028);
																																												BgL_arg3444z00_1031
																																													=
																																													CDR
																																													(BgL_cdrzd21856zd2_1028);
																																												BgL_arg3445z00_1032
																																													=
																																													CDR
																																													(BgL_expz00_18);
																																												{	/* Ast/sexp.scm 103 */
																																													BgL_nodez00_bglt
																																														BgL_auxz00_3652;
																																													{
																																														obj_t
																																															BgL_argsz00_3655;
																																														obj_t
																																															BgL_bodyz00_3654;
																																														obj_t
																																															BgL_varsz00_3653;
																																														BgL_varsz00_3653
																																															=
																																															BgL_arg3443z00_1030;
																																														BgL_bodyz00_3654
																																															=
																																															BgL_arg3444z00_1031;
																																														BgL_argsz00_3655
																																															=
																																															BgL_arg3445z00_1032;
																																														BgL_argsz00_944
																																															=
																																															BgL_argsz00_3655;
																																														BgL_bodyz00_943
																																															=
																																															BgL_bodyz00_3654;
																																														BgL_varsz00_942
																																															=
																																															BgL_varsz00_3653;
																																														goto
																																															BgL_tagzd21660zd2_945;
																																													}
																																													BgL_auxz00_3557
																																														=
																																														(obj_t)
																																														(BgL_auxz00_3652);
																																												}
																																											}
																																										else
																																											{	/* Ast/sexp.scm 103 */
																																												if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																													{	/* Ast/sexp.scm 103 */
																																														goto
																																															BgL_tagzd21672zd2_961;
																																													}
																																												else
																																													{	/* Ast/sexp.scm 103 */
																																														BgL_nodez00_bglt
																																															BgL_auxz00_3659;
																																														goto
																																															BgL_tagzd21673zd2_962;
																																														BgL_auxz00_3557
																																															=
																																															(obj_t)
																																															(BgL_auxz00_3659);
																																													}
																																											}
																																									}
																																								}
																																						}
																																				}
																																		}
																																	else
																																		{	/* Ast/sexp.scm 103 */
																																			bool_t
																																				BgL_testz00_3661;
																																			{	/* Ast/sexp.scm 103 */
																																				obj_t
																																					BgL_arg3455z00_1042;
																																				BgL_arg3455z00_1042
																																					=
																																					CAR
																																					(BgL_expz00_18);
																																				BgL_testz00_3661
																																					=
																																					CBOOL
																																					(BGl_letzd2symzf3z21zzast_letz00
																																					(BgL_arg3455z00_1042));
																																			}
																																			if (BgL_testz00_3661)
																																				{	/* Ast/sexp.scm 103 */
																																					BgL_nodez00_bglt
																																						BgL_auxz00_3665;
																																					goto
																																						BgL_tagzd21658zd2_940;
																																					BgL_auxz00_3557
																																						=
																																						(obj_t)
																																						(BgL_auxz00_3665);
																																				}
																																			else
																																				{	/* Ast/sexp.scm 103 */
																																					bool_t
																																						BgL_testz00_3667;
																																					{	/* Ast/sexp.scm 103 */
																																						obj_t
																																							BgL_arg3454z00_1041;
																																						BgL_arg3454z00_1041
																																							=
																																							CAR
																																							(BgL_expz00_18);
																																						BgL_testz00_3667
																																							=
																																							CBOOL
																																							(BGl_labelszd2symzf3z21zzast_labelsz00
																																							(BgL_arg3454z00_1041));
																																					}
																																					if (BgL_testz00_3667)
																																						{	/* Ast/sexp.scm 103 */
																																							BgL_letzd2funzd2_bglt
																																								BgL_auxz00_3671;
																																							goto
																																								BgL_tagzd21659zd2_941;
																																							BgL_auxz00_3557
																																								=
																																								(obj_t)
																																								(BgL_auxz00_3671);
																																						}
																																					else
																																						{	/* Ast/sexp.scm 103 */
																																							if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																								{	/* Ast/sexp.scm 103 */
																																									goto
																																										BgL_tagzd21672zd2_961;
																																								}
																																							else
																																								{	/* Ast/sexp.scm 103 */
																																									BgL_nodez00_bglt
																																										BgL_auxz00_3675;
																																									goto
																																										BgL_tagzd21673zd2_962;
																																									BgL_auxz00_3557
																																										=
																																										(obj_t)
																																										(BgL_auxz00_3675);
																																								}
																																						}
																																				}
																																		}
																																	return
																																		(BgL_nodez00_bglt)
																																		(BgL_auxz00_3557);
																																}
																															else
																																{	/* Ast/sexp.scm 103 */
																																	if (CBOOL
																																		(BGl_letzd2symzf3z21zzast_letz00
																																			(BgL_carzd21761zd2_982)))
																																		{	/* Ast/sexp.scm 103 */
																																			obj_t
																																				BgL_auxz00_3681;
																																			goto
																																				BgL_kapzd21763zd2_984;
																																			return
																																				(BgL_nodez00_bglt)
																																				(BgL_auxz00_3681);
																																		}
																																	else
																																		{	/* Ast/sexp.scm 103 */
																																			if (
																																				(BgL_carzd21761zd2_982
																																					==
																																					CNST_TABLE_REF
																																					(((long) 20))))
																																				{	/* Ast/sexp.scm 103 */
																																					obj_t
																																						BgL_auxz00_3686;
																																					goto
																																						BgL_kapzd21763zd2_984;
																																					return
																																						(BgL_nodez00_bglt)
																																						(BgL_auxz00_3686);
																																				}
																																			else
																																				{	/* Ast/sexp.scm 103 */
																																					if (
																																						(BgL_carzd21761zd2_982
																																							==
																																							CNST_TABLE_REF
																																							(((long) 21))))
																																						{	/* Ast/sexp.scm 103 */
																																							obj_t
																																								BgL_auxz00_3691;
																																							goto
																																								BgL_kapzd21763zd2_984;
																																							return
																																								(BgL_nodez00_bglt)
																																								(BgL_auxz00_3691);
																																						}
																																					else
																																						{	/* Ast/sexp.scm 103 */
																																							if (CBOOL(BGl_labelszd2symzf3z21zzast_labelsz00(BgL_carzd21761zd2_982)))
																																								{	/* Ast/sexp.scm 103 */
																																									obj_t
																																										BgL_auxz00_3696;
																																									goto
																																										BgL_kapzd21763zd2_984;
																																									return
																																										(BgL_nodez00_bglt)
																																										(BgL_auxz00_3696);
																																								}
																																							else
																																								{	/* Ast/sexp.scm 103 */
																																									bool_t
																																										BgL_testz00_3698;
																																									{	/* Ast/sexp.scm 103 */
																																										obj_t
																																											BgL_arg3422z00_1004;
																																										BgL_arg3422z00_1004
																																											=
																																											CAR
																																											(BgL_expz00_18);
																																										BgL_testz00_3698
																																											=
																																											CBOOL
																																											(BGl_letzd2symzf3z21zzast_letz00
																																											(BgL_arg3422z00_1004));
																																									}
																																									if (BgL_testz00_3698)
																																										{	/* Ast/sexp.scm 103 */
																																											goto
																																												BgL_tagzd21658zd2_940;
																																										}
																																									else
																																										{	/* Ast/sexp.scm 103 */
																																											bool_t
																																												BgL_testz00_3702;
																																											{	/* Ast/sexp.scm 103 */
																																												obj_t
																																													BgL_arg3421z00_1003;
																																												BgL_arg3421z00_1003
																																													=
																																													CAR
																																													(BgL_expz00_18);
																																												BgL_testz00_3702
																																													=
																																													CBOOL
																																													(BGl_labelszd2symzf3z21zzast_labelsz00
																																													(BgL_arg3421z00_1003));
																																											}
																																											if (BgL_testz00_3702)
																																												{	/* Ast/sexp.scm 103 */
																																													BgL_letzd2funzd2_bglt
																																														BgL_auxz00_3706;
																																													goto
																																														BgL_tagzd21659zd2_941;
																																													return
																																														(BgL_nodez00_bglt)
																																														(BgL_auxz00_3706);
																																												}
																																											else
																																												{	/* Ast/sexp.scm 103 */
																																													obj_t
																																														BgL_carzd21947zd2_992;
																																													BgL_carzd21947zd2_992
																																														=
																																														CAR
																																														(BgL_expz00_18);
																																													{	/* Ast/sexp.scm 103 */
																																														obj_t
																																															BgL_cdrzd21952zd2_993;
																																														BgL_cdrzd21952zd2_993
																																															=
																																															CDR
																																															(BgL_carzd21947zd2_992);
																																														if ((CAR(BgL_carzd21947zd2_992) == CNST_TABLE_REF(((long) 18))))
																																															{	/* Ast/sexp.scm 103 */
																																																if (PAIRP(BgL_cdrzd21952zd2_993))
																																																	{
																																																		obj_t
																																																			BgL_argsz00_3720;
																																																		obj_t
																																																			BgL_bodyz00_3718;
																																																		obj_t
																																																			BgL_varsz00_3716;
																																																		BgL_varsz00_3716
																																																			=
																																																			CAR
																																																			(BgL_cdrzd21952zd2_993);
																																																		BgL_bodyz00_3718
																																																			=
																																																			CDR
																																																			(BgL_cdrzd21952zd2_993);
																																																		BgL_argsz00_3720
																																																			=
																																																			CDR
																																																			(BgL_expz00_18);
																																																		BgL_argsz00_944
																																																			=
																																																			BgL_argsz00_3720;
																																																		BgL_bodyz00_943
																																																			=
																																																			BgL_bodyz00_3718;
																																																		BgL_varsz00_942
																																																			=
																																																			BgL_varsz00_3716;
																																																		goto
																																																			BgL_tagzd21660zd2_945;
																																																	}
																																																else
																																																	{	/* Ast/sexp.scm 103 */
																																																		if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																																			{	/* Ast/sexp.scm 103 */
																																																				obj_t
																																																					BgL_auxz00_3724;
																																																				goto
																																																					BgL_tagzd21672zd2_961;
																																																				return
																																																					(BgL_nodez00_bglt)
																																																					(BgL_auxz00_3724);
																																																			}
																																																		else
																																																			{	/* Ast/sexp.scm 103 */
																																																				goto
																																																					BgL_tagzd21673zd2_962;
																																																			}
																																																	}
																																															}
																																														else
																																															{	/* Ast/sexp.scm 103 */
																																																if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																																	{	/* Ast/sexp.scm 103 */
																																																		obj_t
																																																			BgL_auxz00_3728;
																																																		goto
																																																			BgL_tagzd21672zd2_961;
																																																		return
																																																			(BgL_nodez00_bglt)
																																																			(BgL_auxz00_3728);
																																																	}
																																																else
																																																	{	/* Ast/sexp.scm 103 */
																																																		goto
																																																			BgL_tagzd21673zd2_962;
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
																												else
																													{	/* Ast/sexp.scm 103 */
																														if (
																															(BgL_carzd21758zd2_980
																																==
																																CNST_TABLE_REF((
																																		(long)
																																		19))))
																															{	/* Ast/sexp.scm 103 */
																																goto
																																	BgL_tagzd21658zd2_940;
																															}
																														else
																															{	/* Ast/sexp.scm 103 */
																																if (CBOOL
																																	(BGl_letzd2symzf3z21zzast_letz00
																																		(BgL_carzd21758zd2_980)))
																																	{	/* Ast/sexp.scm 103 */
																																		goto
																																			BgL_tagzd21658zd2_940;
																																	}
																																else
																																	{	/* Ast/sexp.scm 103 */
																																		if (
																																			(BgL_carzd21758zd2_980
																																				==
																																				CNST_TABLE_REF
																																				(((long)
																																						20))))
																																			{	/* Ast/sexp.scm 103 */
																																				goto
																																					BgL_tagzd21658zd2_940;
																																			}
																																		else
																																			{	/* Ast/sexp.scm 103 */
																																				if (
																																					(BgL_carzd21758zd2_980
																																						==
																																						CNST_TABLE_REF
																																						(((long) 22))))
																																					{	/* Ast/sexp.scm 103 */
																																						goto
																																							BgL_tagzd21658zd2_940;
																																					}
																																				else
																																					{	/* Ast/sexp.scm 103 */
																																						obj_t
																																							BgL_carzd22003zd2_1048;
																																						BgL_carzd22003zd2_1048
																																							=
																																							CAR
																																							(BgL_expz00_18);
																																						if (
																																							(BgL_carzd22003zd2_1048
																																								==
																																								CNST_TABLE_REF
																																								(((long) 21))))
																																							{	/* Ast/sexp.scm 103 */
																																								BgL_letzd2funzd2_bglt
																																									BgL_auxz00_3746;
																																								goto
																																									BgL_tagzd21659zd2_941;
																																								return
																																									(BgL_nodez00_bglt)
																																									(BgL_auxz00_3746);
																																							}
																																						else
																																							{	/* Ast/sexp.scm 103 */
																																								if (CBOOL(BGl_labelszd2symzf3z21zzast_labelsz00(BgL_carzd22003zd2_1048)))
																																									{	/* Ast/sexp.scm 103 */
																																										BgL_letzd2funzd2_bglt
																																											BgL_auxz00_3751;
																																										goto
																																											BgL_tagzd21659zd2_941;
																																										return
																																											(BgL_nodez00_bglt)
																																											(BgL_auxz00_3751);
																																									}
																																								else
																																									{	/* Ast/sexp.scm 103 */
																																										if ((CAR(BgL_expz00_18) == CNST_TABLE_REF(((long) 18))))
																																											{	/* Ast/sexp.scm 103 */
																																											BgL_tagzd21661zd2_946:
																																												{
																																													obj_t
																																														BgL_argsz00_1653;
																																													obj_t
																																														BgL_bodyz00_1654;
																																													if (PAIRP(BgL_expz00_18))
																																														{	/* Ast/sexp.scm 103 */
																																															obj_t
																																																BgL_cdrzd22615zd2_1659;
																																															BgL_cdrzd22615zd2_1659
																																																=
																																																CDR
																																																(BgL_expz00_18);
																																															if (PAIRP(BgL_cdrzd22615zd2_1659))
																																																{	/* Ast/sexp.scm 103 */
																																																	BgL_argsz00_1653
																																																		=
																																																		CAR
																																																		(BgL_cdrzd22615zd2_1659);
																																																	BgL_bodyz00_1654
																																																		=
																																																		CDR
																																																		(BgL_cdrzd22615zd2_1659);
																																																	{	/* Ast/sexp.scm 423 */
																																																		obj_t
																																																			BgL_locz00_1663;
																																																		obj_t
																																																			BgL_funz00_1664;
																																																		BgL_locz00_1663
																																																			=
																																																			BGl_findzd2locationzf2locz20zztools_locationz00
																																																			(BgL_expz00_18,
																																																			BgL_locz00_20);
																																																		BgL_funz00_1664
																																																			=
																																																			BGl_makezd2anonymouszd2namez00zzast_sexpz00
																																																			(BgL_locz00_20,
																																																			BNIL);
																																																		{	/* Ast/sexp.scm 425 */
																																																			obj_t
																																																				BgL_arg3943z00_1665;
																																																			{	/* Ast/sexp.scm 425 */
																																																				obj_t
																																																					BgL_arg3944z00_1666;
																																																				obj_t
																																																					BgL_arg3945z00_1667;
																																																				BgL_arg3944z00_1666
																																																					=
																																																					BGl_labelszd2symzd2zzast_labelsz00
																																																					();
																																																				{	/* Ast/sexp.scm 425 */
																																																					obj_t
																																																						BgL_arg3946z00_1668;
																																																					{	/* Ast/sexp.scm 425 */
																																																						obj_t
																																																							BgL_arg3950z00_1672;
																																																						{	/* Ast/sexp.scm 425 */
																																																							obj_t
																																																								BgL_arg3953z00_1674;
																																																							{	/* Ast/sexp.scm 425 */
																																																								obj_t
																																																									BgL_arg3954z00_1675;
																																																								BgL_arg3954z00_1675
																																																									=
																																																									BGl_normaliza7ezd2prognz75zztools_prognz00
																																																									(BgL_bodyz00_1654);
																																																								{	/* Ast/sexp.scm 425 */
																																																									obj_t
																																																										BgL_list3956z00_1677;
																																																									{	/* Ast/sexp.scm 425 */
																																																										obj_t
																																																											BgL_arg3958z00_1678;
																																																										BgL_arg3958z00_1678
																																																											=
																																																											MAKE_PAIR
																																																											(BNIL,
																																																											BNIL);
																																																										BgL_list3956z00_1677
																																																											=
																																																											MAKE_PAIR
																																																											(BgL_arg3954z00_1675,
																																																											BgL_arg3958z00_1678);
																																																									}
																																																									BgL_arg3953z00_1674
																																																										=
																																																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																																										(BgL_argsz00_1653,
																																																										BgL_list3956z00_1677);
																																																								}
																																																							}
																																																							BgL_arg3950z00_1672
																																																								=
																																																								MAKE_PAIR
																																																								(BgL_funz00_1664,
																																																								BgL_arg3953z00_1674);
																																																						}
																																																						BgL_arg3946z00_1668
																																																							=
																																																							MAKE_PAIR
																																																							(BgL_arg3950z00_1672,
																																																							BNIL);
																																																					}
																																																					{	/* Ast/sexp.scm 425 */
																																																						obj_t
																																																							BgL_list3948z00_1670;
																																																						{	/* Ast/sexp.scm 425 */
																																																							obj_t
																																																								BgL_arg3949z00_1671;
																																																							BgL_arg3949z00_1671
																																																								=
																																																								MAKE_PAIR
																																																								(BNIL,
																																																								BNIL);
																																																							BgL_list3948z00_1670
																																																								=
																																																								MAKE_PAIR
																																																								(BgL_funz00_1664,
																																																								BgL_arg3949z00_1671);
																																																						}
																																																						BgL_arg3945z00_1667
																																																							=
																																																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																																							(BgL_arg3946z00_1668,
																																																							BgL_list3948z00_1670);
																																																					}
																																																				}
																																																				BgL_arg3943z00_1665
																																																					=
																																																					MAKE_PAIR
																																																					(BgL_arg3944z00_1666,
																																																					BgL_arg3945z00_1667);
																																																			}
																																																			{
																																																				obj_t
																																																					BgL_locz00_3776;
																																																				obj_t
																																																					BgL_expz00_3775;
																																																				BgL_expz00_3775
																																																					=
																																																					BgL_arg3943z00_1665;
																																																				BgL_locz00_3776
																																																					=
																																																					BgL_locz00_1663;
																																																				BgL_locz00_20
																																																					=
																																																					BgL_locz00_3776;
																																																				BgL_expz00_18
																																																					=
																																																					BgL_expz00_3775;
																																																				goto
																																																					BGl_sexpzd2ze3nodez31zzast_sexpz00;
																																																			}
																																																		}
																																																	}
																																																}
																																															else
																																																{	/* Ast/sexp.scm 103 */
																																																BgL_tagzd22608zd2_1656:
																																																	return BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(BGl_string4253z00zzast_sexpz00, BgL_expz00_18, BGl_findzd2locationzf2locz20zztools_locationz00(BgL_expz00_18, BgL_locz00_20));
																																																}
																																														}
																																													else
																																														{	/* Ast/sexp.scm 103 */
																																															goto
																																																BgL_tagzd22608zd2_1656;
																																														}
																																												}
																																											}
																																										else
																																											{	/* Ast/sexp.scm 103 */
																																												if ((CAR(BgL_expz00_18) == CNST_TABLE_REF(((long) 4))))
																																													{	/* Ast/sexp.scm 103 */
																																													BgL_tagzd21662zd2_947:
																																														return BGl_pragmazf2typezd2ze3nodezc3zzast_pragmaz00(((bool_t) 0), BFALSE, (BgL_typez00_bglt) (BGl_za2unspecza2z00zztype_cachez00), BgL_expz00_18, BgL_stackz00_19, BgL_locz00_20, BgL_sitez00_21);
																																													}
																																												else
																																													{	/* Ast/sexp.scm 103 */
																																														obj_t
																																															BgL_cdrzd22027zd2_1053;
																																														BgL_cdrzd22027zd2_1053
																																															=
																																															CDR
																																															(BgL_expz00_18);
																																														if ((CAR(BgL_expz00_18) == CNST_TABLE_REF(((long) 23))))
																																															{	/* Ast/sexp.scm 103 */
																																																if (PAIRP(BgL_cdrzd22027zd2_1053))
																																																	{	/* Ast/sexp.scm 103 */
																																																		BgL_effectz00_948
																																																			=
																																																			CAR
																																																			(BgL_cdrzd22027zd2_1053);
																																																		BgL_restz00_949
																																																			=
																																																			CDR
																																																			(BgL_cdrzd22027zd2_1053);
																																																	BgL_tagzd21663zd2_950:
																																																		{	/* Ast/sexp.scm 439 */
																																																			BgL_feffectz00_bglt
																																																				BgL_arg3962z00_1682;
																																																			obj_t
																																																				BgL_arg3963z00_1683;
																																																			BgL_arg3962z00_1682
																																																				=
																																																				BGl_parsezd2effectzd2zzeffect_feffectz00
																																																				(BgL_effectz00_948);
																																																			{	/* Ast/sexp.scm 440 */
																																																				obj_t
																																																					BgL_arg3964z00_1684;
																																																				obj_t
																																																					BgL_arg3965z00_1685;
																																																				BgL_arg3964z00_1684
																																																					=
																																																					CNST_TABLE_REF
																																																					(
																																																					((long) 4));
																																																				BgL_arg3965z00_1685
																																																					=
																																																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																																					(BgL_restz00_949,
																																																					BNIL);
																																																				BgL_arg3963z00_1683
																																																					=
																																																					MAKE_PAIR
																																																					(BgL_arg3964z00_1684,
																																																					BgL_arg3965z00_1685);
																																																			}
																																																			return
																																																				BGl_pragmazf2typezd2ze3nodezc3zzast_pragmaz00
																																																				(
																																																				((bool_t) 0), (obj_t) (BgL_arg3962z00_1682), (BgL_typez00_bglt) (BGl_za2unspecza2z00zztype_cachez00), BgL_arg3963z00_1683, BgL_stackz00_19, BgL_locz00_20, BgL_sitez00_21);
																																																		}
																																																	}
																																																else
																																																	{	/* Ast/sexp.scm 103 */
																																																		if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																																			{	/* Ast/sexp.scm 103 */
																																																				obj_t
																																																					BgL_auxz00_3805;
																																																				goto
																																																					BgL_tagzd21672zd2_961;
																																																				return
																																																					(BgL_nodez00_bglt)
																																																					(BgL_auxz00_3805);
																																																			}
																																																		else
																																																			{	/* Ast/sexp.scm 103 */
																																																				goto
																																																					BgL_tagzd21673zd2_962;
																																																			}
																																																	}
																																															}
																																														else
																																															{	/* Ast/sexp.scm 103 */
																																																if ((CAR(BgL_expz00_18) == CNST_TABLE_REF(((long) 24))))
																																																	{	/* Ast/sexp.scm 103 */
																																																	BgL_tagzd21664zd2_951:
																																																		return BGl_pragmazf2typezd2ze3nodezc3zzast_pragmaz00(((bool_t) 1), BFALSE, (BgL_typez00_bglt) (BGl_za2unspecza2z00zztype_cachez00), BgL_expz00_18, BgL_stackz00_19, BgL_locz00_20, BgL_sitez00_21);
																																																	}
																																																else
																																																	{	/* Ast/sexp.scm 103 */
																																																		if ((CAR(BgL_expz00_18) == CNST_TABLE_REF(((long) 25))))
																																																			{	/* Ast/sexp.scm 103 */
																																																				if (PAIRP(BgL_cdrzd22027zd2_1053))
																																																					{	/* Ast/sexp.scm 103 */
																																																						BgL_effectz00_952
																																																							=
																																																							CAR
																																																							(BgL_cdrzd22027zd2_1053);
																																																						BgL_restz00_953
																																																							=
																																																							CDR
																																																							(BgL_cdrzd22027zd2_1053);
																																																					BgL_tagzd21665zd2_954:
																																																						{	/* Ast/sexp.scm 447 */
																																																							BgL_feffectz00_bglt
																																																								BgL_arg3966z00_1686;
																																																							obj_t
																																																								BgL_arg3967z00_1687;
																																																							BgL_arg3966z00_1686
																																																								=
																																																								BGl_parsezd2effectzd2zzeffect_feffectz00
																																																								(BgL_effectz00_952);
																																																							{	/* Ast/sexp.scm 448 */
																																																								obj_t
																																																									BgL_arg3968z00_1688;
																																																								obj_t
																																																									BgL_arg3969z00_1689;
																																																								BgL_arg3968z00_1688
																																																									=
																																																									CNST_TABLE_REF
																																																									(
																																																									((long) 4));
																																																								BgL_arg3969z00_1689
																																																									=
																																																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																																									(BgL_restz00_953,
																																																									BNIL);
																																																								BgL_arg3967z00_1687
																																																									=
																																																									MAKE_PAIR
																																																									(BgL_arg3968z00_1688,
																																																									BgL_arg3969z00_1689);
																																																							}
																																																							return
																																																								BGl_pragmazf2typezd2ze3nodezc3zzast_pragmaz00
																																																								(
																																																								((bool_t) 1), (obj_t) (BgL_arg3966z00_1686), (BgL_typez00_bglt) (BGl_za2unspecza2z00zztype_cachez00), BgL_arg3967z00_1687, BgL_stackz00_19, BgL_locz00_20, BgL_sitez00_21);
																																																						}
																																																					}
																																																				else
																																																					{	/* Ast/sexp.scm 103 */
																																																						if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																																							{	/* Ast/sexp.scm 103 */
																																																								obj_t
																																																									BgL_auxz00_3830;
																																																								goto
																																																									BgL_tagzd21672zd2_961;
																																																								return
																																																									(BgL_nodez00_bglt)
																																																									(BgL_auxz00_3830);
																																																							}
																																																						else
																																																							{	/* Ast/sexp.scm 103 */
																																																								goto
																																																									BgL_tagzd21673zd2_962;
																																																							}
																																																					}
																																																			}
																																																		else
																																																			{	/* Ast/sexp.scm 103 */
																																																				if ((CAR(BgL_expz00_18) == CNST_TABLE_REF(((long) 26))))
																																																					{	/* Ast/sexp.scm 103 */
																																																						obj_t
																																																							BgL_auxz00_3836;
																																																					BgL_tagzd21666zd2_955:
																																																						{
																																																							obj_t
																																																								BgL_procz00_1690;
																																																							obj_t
																																																								BgL_msgz00_1691;
																																																							obj_t
																																																								BgL_objz00_1692;
																																																							if (PAIRP(BgL_expz00_18))
																																																								{	/* Ast/sexp.scm 103 */
																																																									obj_t
																																																										BgL_cdrzd22632zd2_1697;
																																																									BgL_cdrzd22632zd2_1697
																																																										=
																																																										CDR
																																																										(BgL_expz00_18);
																																																									if (PAIRP(BgL_cdrzd22632zd2_1697))
																																																										{	/* Ast/sexp.scm 103 */
																																																											obj_t
																																																												BgL_cdrzd22637zd2_1699;
																																																											BgL_cdrzd22637zd2_1699
																																																												=
																																																												CDR
																																																												(BgL_cdrzd22632zd2_1697);
																																																											if (PAIRP(BgL_cdrzd22637zd2_1699))
																																																												{	/* Ast/sexp.scm 103 */
																																																													obj_t
																																																														BgL_cdrzd22642zd2_1701;
																																																													BgL_cdrzd22642zd2_1701
																																																														=
																																																														CDR
																																																														(BgL_cdrzd22637zd2_1699);
																																																													if (PAIRP(BgL_cdrzd22642zd2_1701))
																																																														{	/* Ast/sexp.scm 103 */
																																																															if (NULLP(CDR(BgL_cdrzd22642zd2_1701)))
																																																																{	/* Ast/sexp.scm 103 */
																																																																	obj_t
																																																																		BgL_arg3975z00_1704;
																																																																	obj_t
																																																																		BgL_arg3976z00_1705;
																																																																	obj_t
																																																																		BgL_arg3977z00_1706;
																																																																	BgL_arg3975z00_1704
																																																																		=
																																																																		CAR
																																																																		(BgL_cdrzd22632zd2_1697);
																																																																	BgL_arg3976z00_1705
																																																																		=
																																																																		CAR
																																																																		(BgL_cdrzd22637zd2_1699);
																																																																	BgL_arg3977z00_1706
																																																																		=
																																																																		CAR
																																																																		(BgL_cdrzd22642zd2_1701);
																																																																	{	/* Ast/sexp.scm 103 */
																																																																		BgL_failz00_bglt
																																																																			BgL_auxz00_3854;
																																																																		BgL_procz00_1690
																																																																			=
																																																																			BgL_arg3975z00_1704;
																																																																		BgL_msgz00_1691
																																																																			=
																																																																			BgL_arg3976z00_1705;
																																																																		BgL_objz00_1692
																																																																			=
																																																																			BgL_arg3977z00_1706;
																																																																		{	/* Ast/sexp.scm 453 */
																																																																			obj_t
																																																																				BgL_locz00_1708;
																																																																			BgL_locz00_1708
																																																																				=
																																																																				BGl_findzd2locationzf2locz20zztools_locationz00
																																																																				(BgL_expz00_18,
																																																																				BgL_locz00_20);
																																																																			{	/* Ast/sexp.scm 453 */
																																																																				obj_t
																																																																					BgL_cdlocz00_1709;
																																																																				BgL_cdlocz00_1709
																																																																					=
																																																																					BGl_findzd2locationzf2locz20zztools_locationz00
																																																																					(CDR
																																																																					(BgL_expz00_18),
																																																																					BgL_locz00_1708);
																																																																				{	/* Ast/sexp.scm 454 */
																																																																					obj_t
																																																																						BgL_cddlocz00_1710;
																																																																					{	/* Ast/sexp.scm 455 */
																																																																						obj_t
																																																																							BgL_arg3980z00_1719;
																																																																						{	/* Ast/sexp.scm 455 */
																																																																							obj_t
																																																																								BgL_pairz00_2763;
																																																																							BgL_pairz00_2763
																																																																								=
																																																																								BgL_expz00_18;
																																																																							BgL_arg3980z00_1719
																																																																								=
																																																																								CDR
																																																																								(CDR
																																																																								(BgL_pairz00_2763));
																																																																						}
																																																																						BgL_cddlocz00_1710
																																																																							=
																																																																							BGl_findzd2locationzf2locz20zztools_locationz00
																																																																							(BgL_arg3980z00_1719,
																																																																							BgL_locz00_1708);
																																																																					}
																																																																					{	/* Ast/sexp.scm 455 */
																																																																						obj_t
																																																																							BgL_cdddlocz00_1711;
																																																																						{	/* Ast/sexp.scm 456 */
																																																																							obj_t
																																																																								BgL_arg3979z00_1718;
																																																																							{	/* Ast/sexp.scm 456 */
																																																																								obj_t
																																																																									BgL_pairz00_2767;
																																																																								BgL_pairz00_2767
																																																																									=
																																																																									BgL_expz00_18;
																																																																								BgL_arg3979z00_1718
																																																																									=
																																																																									CDR
																																																																									(CDR
																																																																									(CDR
																																																																										(BgL_pairz00_2767)));
																																																																							}
																																																																							BgL_cdddlocz00_1711
																																																																								=
																																																																								BGl_findzd2locationzf2locz20zztools_locationz00
																																																																								(BgL_arg3979z00_1718,
																																																																								BgL_locz00_1708);
																																																																						}
																																																																						{	/* Ast/sexp.scm 456 */
																																																																							obj_t
																																																																								BgL_loczd2proczd2_1712;
																																																																							BgL_loczd2proczd2_1712
																																																																								=
																																																																								BGl_findzd2locationzf2locz20zztools_locationz00
																																																																								(BgL_procz00_1690,
																																																																								BgL_cdlocz00_1709);
																																																																							{	/* Ast/sexp.scm 457 */
																																																																								obj_t
																																																																									BgL_loczd2msgzd2_1713;
																																																																								BgL_loczd2msgzd2_1713
																																																																									=
																																																																									BGl_findzd2locationzf2locz20zztools_locationz00
																																																																									(BgL_msgz00_1691,
																																																																									BgL_cddlocz00_1710);
																																																																								{	/* Ast/sexp.scm 458 */
																																																																									obj_t
																																																																										BgL_loczd2objzd2_1714;
																																																																									BgL_loczd2objzd2_1714
																																																																										=
																																																																										BGl_findzd2locationzf2locz20zztools_locationz00
																																																																										(BgL_objz00_1692,
																																																																										BgL_cdddlocz00_1711);
																																																																									{	/* Ast/sexp.scm 459 */
																																																																										BgL_nodez00_bglt
																																																																											BgL_procz00_1715;
																																																																										BgL_procz00_1715
																																																																											=
																																																																											BGl_sexpzd2ze3nodez31zzast_sexpz00
																																																																											(BgL_procz00_1690,
																																																																											BgL_stackz00_19,
																																																																											BgL_loczd2proczd2_1712,
																																																																											CNST_TABLE_REF
																																																																											(((long) 2)));
																																																																										{	/* Ast/sexp.scm 460 */
																																																																											BgL_nodez00_bglt
																																																																												BgL_msgz00_1716;
																																																																											BgL_msgz00_1716
																																																																												=
																																																																												BGl_sexpzd2ze3nodez31zzast_sexpz00
																																																																												(BgL_msgz00_1691,
																																																																												BgL_stackz00_19,
																																																																												BgL_loczd2msgzd2_1713,
																																																																												CNST_TABLE_REF
																																																																												(((long) 2)));
																																																																											{	/* Ast/sexp.scm 461 */
																																																																												BgL_nodez00_bglt
																																																																													BgL_objz00_1717;
																																																																												BgL_objz00_1717
																																																																													=
																																																																													BGl_sexpzd2ze3nodez31zzast_sexpz00
																																																																													(BgL_objz00_1692,
																																																																													BgL_stackz00_19,
																																																																													BgL_loczd2objzd2_1714,
																																																																													CNST_TABLE_REF
																																																																													(((long) 2)));
																																																																												{	/* Ast/sexp.scm 462 */

																																																																													BgL_auxz00_3854
																																																																														=
																																																																														BGl_makezd2failzd2zzast_nodez00
																																																																														(BgL_locz00_1708,
																																																																														(BgL_typez00_bglt)
																																																																														(BGl_za2magicza2z00zztype_cachez00),
																																																																														BgL_procz00_1715,
																																																																														BgL_msgz00_1716,
																																																																														BgL_objz00_1717);
																																																																		}}}}}}}}}}}
																																																																		BgL_auxz00_3836
																																																																			=
																																																																			(obj_t)
																																																																			(BgL_auxz00_3854);
																																																																}}
																																																															else
																																																																{	/* Ast/sexp.scm 103 */
																																																																	BgL_nodez00_bglt
																																																																		BgL_auxz00_3877;
																																																																BgL_tagzd22623zd2_1694:
																																																																	BgL_auxz00_3877 = BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(BGl_string4252z00zzast_sexpz00, BgL_expz00_18, BGl_findzd2locationzf2locz20zztools_locationz00(BgL_expz00_18, BgL_locz00_20));
																																																																	BgL_auxz00_3836
																																																																		=
																																																																		(obj_t)
																																																																		(BgL_auxz00_3877);
																																																																}
																																																														}
																																																													else
																																																														{	/* Ast/sexp.scm 103 */
																																																															BgL_nodez00_bglt
																																																																BgL_auxz00_3881;
																																																															goto
																																																																BgL_tagzd22623zd2_1694;
																																																															BgL_auxz00_3836
																																																																=
																																																																(obj_t)
																																																																(BgL_auxz00_3881);
																																																														}
																																																												}
																																																											else
																																																												{	/* Ast/sexp.scm 103 */
																																																													BgL_nodez00_bglt
																																																														BgL_auxz00_3883;
																																																													goto
																																																														BgL_tagzd22623zd2_1694;
																																																													BgL_auxz00_3836
																																																														=
																																																														(obj_t)
																																																														(BgL_auxz00_3883);
																																																												}
																																																										}
																																																									else
																																																										{	/* Ast/sexp.scm 103 */
																																																											BgL_nodez00_bglt
																																																												BgL_auxz00_3885;
																																																											goto
																																																												BgL_tagzd22623zd2_1694;
																																																											BgL_auxz00_3836
																																																												=
																																																												(obj_t)
																																																												(BgL_auxz00_3885);
																																																										}
																																																								}
																																																							else
																																																								{	/* Ast/sexp.scm 103 */
																																																									BgL_nodez00_bglt
																																																										BgL_auxz00_3887;
																																																									goto
																																																										BgL_tagzd22623zd2_1694;
																																																									BgL_auxz00_3836
																																																										=
																																																										(obj_t)
																																																										(BgL_auxz00_3887);
																																																								}
																																																						}
																																																						return
																																																							(BgL_nodez00_bglt)
																																																							(BgL_auxz00_3836);
																																																					}
																																																				else
																																																					{	/* Ast/sexp.scm 103 */
																																																						if ((CAR(BgL_expz00_18) == CNST_TABLE_REF(((long) 27))))
																																																							{	/* Ast/sexp.scm 103 */
																																																								obj_t
																																																									BgL_auxz00_3894;
																																																							BgL_tagzd21667zd2_956:
																																																								{
																																																									obj_t
																																																										BgL_testz00_1723;
																																																									obj_t
																																																										BgL_clausesz00_1724;
																																																									if (PAIRP(BgL_expz00_18))
																																																										{	/* Ast/sexp.scm 103 */
																																																											obj_t
																																																												BgL_cdrzd22656zd2_1729;
																																																											BgL_cdrzd22656zd2_1729
																																																												=
																																																												CDR
																																																												(BgL_expz00_18);
																																																											if (PAIRP(BgL_cdrzd22656zd2_1729))
																																																												{	/* Ast/sexp.scm 103 */
																																																													BgL_testz00_1723
																																																														=
																																																														CAR
																																																														(BgL_cdrzd22656zd2_1729);
																																																													BgL_clausesz00_1724
																																																														=
																																																														CDR
																																																														(BgL_cdrzd22656zd2_1729);
																																																													{	/* Ast/sexp.scm 482 */
																																																														obj_t
																																																															BgL_locz00_1733;
																																																														BgL_locz00_1733
																																																															=
																																																															BGl_findzd2locationzf2locz20zztools_locationz00
																																																															(BgL_expz00_18,
																																																															BgL_locz00_20);
																																																														{	/* Ast/sexp.scm 482 */
																																																															obj_t
																																																																BgL_cdlocz00_1734;
																																																															BgL_cdlocz00_1734
																																																																=
																																																																BGl_findzd2locationzf2locz20zztools_locationz00
																																																																(CDR
																																																																(BgL_expz00_18),
																																																																BgL_locz00_1733);
																																																															{	/* Ast/sexp.scm 483 */
																																																																obj_t
																																																																	BgL_cddlocz00_1735;
																																																																BgL_cddlocz00_1735
																																																																	=
																																																																	BGl_findzd2locationzf2locz20zztools_locationz00
																																																																	(CDR
																																																																	(BgL_expz00_18),
																																																																	BgL_locz00_1733);
																																																																{	/* Ast/sexp.scm 484 */
																																																																	BgL_nodez00_bglt
																																																																		BgL_testz00_1736;
																																																																	{	/* Ast/sexp.scm 487 */
																																																																		obj_t
																																																																			BgL_arg4012z00_1769;
																																																																		obj_t
																																																																			BgL_arg4013z00_1770;
																																																																		BgL_arg4012z00_1769
																																																																			=
																																																																			BGl_findzd2locationzf2locz20zztools_locationz00
																																																																			(BgL_testz00_1723,
																																																																			BgL_cdlocz00_1734);
																																																																		BgL_arg4013z00_1770
																																																																			=
																																																																			CNST_TABLE_REF
																																																																			(
																																																																			((long) 2));
																																																																		BgL_testz00_1736
																																																																			=
																																																																			BGl_sexpzd2ze3nodez31zzast_sexpz00
																																																																			(BgL_testz00_1723,
																																																																			BgL_stackz00_19,
																																																																			BgL_arg4012z00_1769,
																																																																			BgL_arg4013z00_1770);
																																																																	}
																																																																	{	/* Ast/sexp.scm 485 */

																																																																		{
																																																																			obj_t
																																																																				BgL_clsz00_1739;
																																																																			obj_t
																																																																				BgL_nclausesz00_1740;
																																																																			BgL_clsz00_1739
																																																																				=
																																																																				BgL_clausesz00_1724;
																																																																			BgL_nclausesz00_1740
																																																																				=
																																																																				BNIL;
																																																																		BgL_zc3anonymousza33988ze3z83_1741:
																																																																			if (NULLP(BgL_clsz00_1739))
																																																																				{	/* Ast/sexp.scm 492 */
																																																																					obj_t
																																																																						BgL_arg3991z00_1744;
																																																																					BgL_typez00_bglt
																																																																						BgL_arg3992z00_1745;
																																																																					BgL_arg3991z00_1744
																																																																						=
																																																																						bgl_reverse_bang
																																																																						(BgL_nclausesz00_1740);
																																																																					BgL_arg3992z00_1745
																																																																						=
																																																																						BGl_getzd2typezd2atomz00zztype_typeofz00
																																																																						(CAR
																																																																						(CAR
																																																																							(CAR
																																																																								(BgL_clausesz00_1724))));
																																																																					BgL_auxz00_3894
																																																																						=
																																																																						(obj_t)
																																																																						(BGl_makezd2selectzd2zzast_nodez00
																																																																						(BgL_locz00_1733,
																																																																							(BgL_typez00_bglt)
																																																																							(BGl_za2_za2z00zztype_cachez00),
																																																																							BUNSPEC,
																																																																							BINT
																																																																							(((long) -1)), BgL_testz00_1736, BgL_arg3991z00_1744, BgL_arg3992z00_1745));
																																																																				}
																																																																			else
																																																																				{	/* Ast/sexp.scm 498 */
																																																																					obj_t
																																																																						BgL_clausez00_1749;
																																																																					BgL_clausez00_1749
																																																																						=
																																																																						CAR
																																																																						(BgL_clsz00_1739);
																																																																					{	/* Ast/sexp.scm 498 */
																																																																						BgL_nodez00_bglt
																																																																							BgL_bodyz00_1750;
																																																																						{	/* Ast/sexp.scm 499 */
																																																																							obj_t
																																																																								BgL_arg4008z00_1764;
																																																																							obj_t
																																																																								BgL_arg4009z00_1765;
																																																																							obj_t
																																																																								BgL_arg4010z00_1766;
																																																																							BgL_arg4008z00_1764
																																																																								=
																																																																								BGl_normaliza7ezd2prognz75zztools_prognz00
																																																																								(CDR
																																																																								(BgL_clausez00_1749));
																																																																							BgL_arg4009z00_1765
																																																																								=
																																																																								BGl_findzd2locationzf2locz20zztools_locationz00
																																																																								(BgL_clausez00_1749,
																																																																								BgL_cddlocz00_1735);
																																																																							BgL_arg4010z00_1766
																																																																								=
																																																																								CNST_TABLE_REF
																																																																								(
																																																																								((long) 2));
																																																																							BgL_bodyz00_1750
																																																																								=
																																																																								BGl_sexpzd2ze3nodez31zzast_sexpz00
																																																																								(BgL_arg4008z00_1764,
																																																																								BgL_stackz00_19,
																																																																								BgL_arg4009z00_1765,
																																																																								BgL_arg4010z00_1766);
																																																																						}
																																																																						{	/* Ast/sexp.scm 499 */
																																																																							obj_t
																																																																								BgL_nclausez00_1751;
																																																																							BgL_nclausez00_1751
																																																																								=
																																																																								MAKE_PAIR
																																																																								(CAR
																																																																								(BgL_clausez00_1749),
																																																																								(obj_t)
																																																																								(BgL_bodyz00_1750));
																																																																							{	/* Ast/sexp.scm 503 */

																																																																								{	/* Ast/sexp.scm 505 */
																																																																									bool_t
																																																																										BgL_testz00_3928;
																																																																									if ((CAR(BgL_clausez00_1749) == CNST_TABLE_REF(((long) 3))))
																																																																										{	/* Ast/sexp.scm 505 */
																																																																											if (NULLP(CDR(BgL_clsz00_1739)))
																																																																												{	/* Ast/sexp.scm 506 */
																																																																													BgL_testz00_3928
																																																																														=
																																																																														(
																																																																														(bool_t)
																																																																														0);
																																																																												}
																																																																											else
																																																																												{	/* Ast/sexp.scm 506 */
																																																																													BgL_testz00_3928
																																																																														=
																																																																														(
																																																																														(bool_t)
																																																																														1);
																																																																												}
																																																																										}
																																																																									else
																																																																										{	/* Ast/sexp.scm 505 */
																																																																											BgL_testz00_3928
																																																																												=
																																																																												(
																																																																												(bool_t)
																																																																												0);
																																																																										}
																																																																									if (BgL_testz00_3928)
																																																																										{	/* Ast/sexp.scm 507 */
																																																																											obj_t
																																																																												BgL_arg3998z00_1754;
																																																																											BgL_arg3998z00_1754
																																																																												=
																																																																												BGl_findzd2locationzf2locz20zztools_locationz00
																																																																												(BgL_expz00_18,
																																																																												BgL_locz00_1733);
																																																																											BgL_auxz00_3894
																																																																												=
																																																																												(obj_t)
																																																																												(BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																																																																												(BGl_string4251z00zzast_sexpz00,
																																																																													BgL_expz00_18,
																																																																													BgL_arg3998z00_1754));
																																																																										}
																																																																									else
																																																																										{	/* Ast/sexp.scm 510 */
																																																																											obj_t
																																																																												BgL_arg3999z00_1755;
																																																																											obj_t
																																																																												BgL_arg4000z00_1756;
																																																																											BgL_arg3999z00_1755
																																																																												=
																																																																												CDR
																																																																												(BgL_clsz00_1739);
																																																																											BgL_arg4000z00_1756
																																																																												=
																																																																												MAKE_PAIR
																																																																												(BGl_epairifyz00zztools_miscz00
																																																																												(BgL_nclausez00_1751,
																																																																													BgL_clausez00_1749),
																																																																												BgL_nclausesz00_1740);
																																																																											{
																																																																												obj_t
																																																																													BgL_nclausesz00_3943;
																																																																												obj_t
																																																																													BgL_clsz00_3942;
																																																																												BgL_clsz00_3942
																																																																													=
																																																																													BgL_arg3999z00_1755;
																																																																												BgL_nclausesz00_3943
																																																																													=
																																																																													BgL_arg4000z00_1756;
																																																																												BgL_nclausesz00_1740
																																																																													=
																																																																													BgL_nclausesz00_3943;
																																																																												BgL_clsz00_1739
																																																																													=
																																																																													BgL_clsz00_3942;
																																																																												goto
																																																																													BgL_zc3anonymousza33988ze3z83_1741;
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
																																																											else
																																																												{	/* Ast/sexp.scm 103 */
																																																													BgL_nodez00_bglt
																																																														BgL_auxz00_3946;
																																																												BgL_tagzd22649zd2_1726:
																																																													BgL_auxz00_3946 = BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(BGl_string4251z00zzast_sexpz00, BgL_expz00_18, BGl_findzd2locationzf2locz20zztools_locationz00(BgL_expz00_18, BgL_locz00_20));
																																																													BgL_auxz00_3894
																																																														=
																																																														(obj_t)
																																																														(BgL_auxz00_3946);
																																																												}
																																																										}
																																																									else
																																																										{	/* Ast/sexp.scm 103 */
																																																											BgL_nodez00_bglt
																																																												BgL_auxz00_3950;
																																																											goto
																																																												BgL_tagzd22649zd2_1726;
																																																											BgL_auxz00_3894
																																																												=
																																																												(obj_t)
																																																												(BgL_auxz00_3950);
																																																										}
																																																								}
																																																								return
																																																									(BgL_nodez00_bglt)
																																																									(BgL_auxz00_3894);
																																																							}
																																																						else
																																																							{	/* Ast/sexp.scm 103 */
																																																								if ((CAR(BgL_expz00_18) == CNST_TABLE_REF(((long) 28))))
																																																									{	/* Ast/sexp.scm 103 */
																																																										BgL_letzd2funzd2_bglt
																																																											BgL_auxz00_3957;
																																																									BgL_tagzd21668zd2_957:
																																																										BgL_auxz00_3957 = BGl_setzd2exitzd2ze3nodeze3zzast_exitz00(BgL_expz00_18, BgL_stackz00_19, BgL_locz00_20, BgL_sitez00_21);
																																																										return
																																																											(BgL_nodez00_bglt)
																																																											(BgL_auxz00_3957);
																																																									}
																																																								else
																																																									{	/* Ast/sexp.scm 103 */
																																																										if ((CAR(BgL_expz00_18) == CNST_TABLE_REF(((long) 29))))
																																																											{	/* Ast/sexp.scm 103 */
																																																												BgL_jumpzd2exzd2itz00_bglt
																																																													BgL_auxz00_3964;
																																																											BgL_tagzd21669zd2_958:
																																																												BgL_auxz00_3964 = BGl_jumpzd2exitzd2ze3nodeze3zzast_exitz00(BgL_expz00_18, BgL_stackz00_19, BgL_locz00_20, BgL_sitez00_21);
																																																												return
																																																													(BgL_nodez00_bglt)
																																																													(BgL_auxz00_3964);
																																																											}
																																																										else
																																																											{	/* Ast/sexp.scm 103 */
																																																												obj_t
																																																													BgL_cdrzd22065zd2_1070;
																																																												BgL_cdrzd22065zd2_1070
																																																													=
																																																													CDR
																																																													(BgL_expz00_18);
																																																												if ((CAR(BgL_expz00_18) == CNST_TABLE_REF(((long) 14))))
																																																													{	/* Ast/sexp.scm 103 */
																																																														if (PAIRP(BgL_cdrzd22065zd2_1070))
																																																															{	/* Ast/sexp.scm 103 */
																																																																obj_t
																																																																	BgL_cdrzd22067zd2_1073;
																																																																BgL_cdrzd22067zd2_1073
																																																																	=
																																																																	CDR
																																																																	(BgL_cdrzd22065zd2_1070);
																																																																if (PAIRP(BgL_cdrzd22067zd2_1073))
																																																																	{	/* Ast/sexp.scm 103 */
																																																																		if (NULLP(CDR(BgL_cdrzd22067zd2_1073)))
																																																																			{	/* Ast/sexp.scm 103 */
																																																																			BgL_tagzd21670zd2_959:
																																																																				return BGl_applycationzd2ze3nodez31zzast_applyz00(BgL_expz00_18, BgL_stackz00_19, BgL_locz00_20, BgL_sitez00_21);
																																																																			}
																																																																		else
																																																																			{	/* Ast/sexp.scm 103 */
																																																																				if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																																																					{	/* Ast/sexp.scm 103 */
																																																																						obj_t
																																																																							BgL_auxz00_3983;
																																																																						goto
																																																																							BgL_tagzd21672zd2_961;
																																																																						return
																																																																							(BgL_nodez00_bglt)
																																																																							(BgL_auxz00_3983);
																																																																					}
																																																																				else
																																																																					{	/* Ast/sexp.scm 103 */
																																																																						goto
																																																																							BgL_tagzd21673zd2_962;
																																																																					}
																																																																			}
																																																																	}
																																																																else
																																																																	{	/* Ast/sexp.scm 103 */
																																																																		if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																																																			{	/* Ast/sexp.scm 103 */
																																																																				obj_t
																																																																					BgL_auxz00_3987;
																																																																				goto
																																																																					BgL_tagzd21672zd2_961;
																																																																				return
																																																																					(BgL_nodez00_bglt)
																																																																					(BgL_auxz00_3987);
																																																																			}
																																																																		else
																																																																			{	/* Ast/sexp.scm 103 */
																																																																				goto
																																																																					BgL_tagzd21673zd2_962;
																																																																			}
																																																																	}
																																																															}
																																																														else
																																																															{	/* Ast/sexp.scm 103 */
																																																																if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																																																	{	/* Ast/sexp.scm 103 */
																																																																		obj_t
																																																																			BgL_auxz00_3991;
																																																																		goto
																																																																			BgL_tagzd21672zd2_961;
																																																																		return
																																																																			(BgL_nodez00_bglt)
																																																																			(BgL_auxz00_3991);
																																																																	}
																																																																else
																																																																	{	/* Ast/sexp.scm 103 */
																																																																		goto
																																																																			BgL_tagzd21673zd2_962;
																																																																	}
																																																															}
																																																													}
																																																												else
																																																													{	/* Ast/sexp.scm 103 */
																																																														if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(CAR(BgL_expz00_18), BUNSPEC))
																																																															{	/* Ast/sexp.scm 103 */
																																																																if (NULLP(BgL_cdrzd22065zd2_1070))
																																																																	{	/* Ast/sexp.scm 103 */
																																																																	BgL_tagzd21671zd2_960:
																																																																		return BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(BGl_string4250z00zzast_sexpz00, BgL_expz00_18, BGl_findzd2locationzf2locz20zztools_locationz00(BgL_expz00_18, BgL_locz00_20));
																																																																	}
																																																																else
																																																																	{	/* Ast/sexp.scm 103 */
																																																																		if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																																																			{	/* Ast/sexp.scm 103 */
																																																																				obj_t
																																																																					BgL_auxz00_4002;
																																																																				goto
																																																																					BgL_tagzd21672zd2_961;
																																																																				return
																																																																					(BgL_nodez00_bglt)
																																																																					(BgL_auxz00_4002);
																																																																			}
																																																																		else
																																																																			{	/* Ast/sexp.scm 103 */
																																																																				goto
																																																																					BgL_tagzd21673zd2_962;
																																																																			}
																																																																	}
																																																															}
																																																														else
																																																															{	/* Ast/sexp.scm 103 */
																																																																if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																																																	{	/* Ast/sexp.scm 103 */
																																																																		obj_t
																																																																			BgL_auxz00_4006;
																																																																		goto
																																																																			BgL_tagzd21672zd2_961;
																																																																		return
																																																																			(BgL_nodez00_bglt)
																																																																			(BgL_auxz00_4006);
																																																																	}
																																																																else
																																																																	{	/* Ast/sexp.scm 103 */
																																																																		goto
																																																																			BgL_tagzd21673zd2_962;
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
																	}
															}
													}
											}
										else
											{	/* Ast/sexp.scm 103 */
												if (
													(BgL_carzd21703zd2_967 ==
														CNST_TABLE_REF(((long) 12))))
													{	/* Ast/sexp.scm 103 */
														obj_t BgL_auxz00_4011;

														goto BgL_tagzd21651zd2_930;
														return (BgL_nodez00_bglt) (BgL_auxz00_4011);
													}
												else
													{	/* Ast/sexp.scm 103 */
														if (
															(CAR(BgL_expz00_18) ==
																CNST_TABLE_REF(((long) 13))))
															{	/* Ast/sexp.scm 103 */
																obj_t BgL_auxz00_4017;

																goto BgL_tagzd21652zd2_931;
																return (BgL_nodez00_bglt) (BgL_auxz00_4017);
															}
														else
															{	/* Ast/sexp.scm 103 */
																if (
																	(CAR(BgL_expz00_18) ==
																		CNST_TABLE_REF(((long) 16))))
																	{	/* Ast/sexp.scm 103 */
																		obj_t BgL_arg3532z00_1127;

																		BgL_arg3532z00_1127 = CDR(BgL_expz00_18);
																		{	/* Ast/sexp.scm 103 */
																			BgL_sequencez00_bglt BgL_auxz00_4024;

																			{
																				obj_t BgL_bodyz00_4025;

																				BgL_bodyz00_4025 = BgL_arg3532z00_1127;
																				BgL_bodyz00_932 = BgL_bodyz00_4025;
																				goto BgL_tagzd21653zd2_933;
																			}
																			return
																				(BgL_nodez00_bglt) (BgL_auxz00_4024);
																		}
																	}
																else
																	{	/* Ast/sexp.scm 103 */
																		obj_t BgL_carzd22100zd2_1128;

																		BgL_carzd22100zd2_1128 = CAR(BgL_expz00_18);
																		if (
																			(BgL_carzd22100zd2_1128 ==
																				CNST_TABLE_REF(((long) 1))))
																			{	/* Ast/sexp.scm 103 */
																				obj_t BgL_auxz00_4031;

																				goto BgL_tagzd21654zd2_934;
																				return
																					(BgL_nodez00_bglt) (BgL_auxz00_4031);
																			}
																		else
																			{	/* Ast/sexp.scm 103 */
																				if (
																					(BgL_carzd22100zd2_1128 ==
																						BGl_za2ifza2z00zzast_sexpz00))
																					{	/* Ast/sexp.scm 103 */
																						obj_t BgL_auxz00_4035;

																						goto BgL_tagzd21654zd2_934;
																						return
																							(BgL_nodez00_bglt)
																							(BgL_auxz00_4035);
																					}
																				else
																					{	/* Ast/sexp.scm 103 */
																						if (
																							(CAR(BgL_expz00_18) ==
																								CNST_TABLE_REF(((long) 5))))
																							{	/* Ast/sexp.scm 103 */
																								obj_t BgL_auxz00_4041;

																								goto BgL_tagzd21655zd2_935;
																								return
																									(BgL_nodez00_bglt)
																									(BgL_auxz00_4041);
																							}
																						else
																							{	/* Ast/sexp.scm 103 */
																								if (
																									(CAR(BgL_expz00_18) ==
																										CNST_TABLE_REF(((long)
																												17))))
																									{	/* Ast/sexp.scm 103 */
																										obj_t BgL_auxz00_4047;

																										goto BgL_tagzd21656zd2_936;
																										return
																											(BgL_nodez00_bglt)
																											(BgL_auxz00_4047);
																									}
																								else
																									{	/* Ast/sexp.scm 103 */
																										obj_t
																											BgL_carzd22124zd2_1133;
																										BgL_carzd22124zd2_1133 =
																											CAR(BgL_expz00_18);
																										if (PAIRP
																											(BgL_carzd22124zd2_1133))
																											{	/* Ast/sexp.scm 103 */
																												obj_t
																													BgL_carzd22127zd2_1135;
																												obj_t
																													BgL_cdrzd22128zd2_1136;
																												BgL_carzd22127zd2_1135 =
																													CAR
																													(BgL_carzd22124zd2_1133);
																												BgL_cdrzd22128zd2_1136 =
																													CDR
																													(BgL_carzd22124zd2_1133);
																												{

																													if (
																														(BgL_carzd22127zd2_1135
																															==
																															CNST_TABLE_REF((
																																	(long) 19))))
																														{	/* Ast/sexp.scm 103 */
																															obj_t
																																BgL_auxz00_4057;
																														BgL_kapzd22129zd2_1137:
																															if (PAIRP
																																(BgL_cdrzd22128zd2_1136))
																																{	/* Ast/sexp.scm 103 */
																																	obj_t
																																		BgL_cdrzd22132zd2_1159;
																																	BgL_cdrzd22132zd2_1159
																																		=
																																		CDR
																																		(BgL_cdrzd22128zd2_1136);
																																	if (PAIRP
																																		(BgL_cdrzd22132zd2_1159))
																																		{	/* Ast/sexp.scm 103 */
																																			if (NULLP
																																				(CDR
																																					(BgL_cdrzd22132zd2_1159)))
																																				{	/* Ast/sexp.scm 103 */
																																					obj_t
																																						BgL_arg3559z00_1162;
																																					obj_t
																																						BgL_arg3560z00_1163;
																																					BgL_arg3559z00_1162
																																						=
																																						CAR
																																						(BgL_cdrzd22132zd2_1159);
																																					BgL_arg3560z00_1163
																																						=
																																						CDR
																																						(BgL_expz00_18);
																																					{	/* Ast/sexp.scm 103 */
																																						BgL_nodez00_bglt
																																							BgL_auxz00_4068;
																																						{
																																							obj_t
																																								BgL_argsz00_4070;
																																							obj_t
																																								BgL_bodyz00_4069;
																																							BgL_bodyz00_4069
																																								=
																																								BgL_arg3559z00_1162;
																																							BgL_argsz00_4070
																																								=
																																								BgL_arg3560z00_1163;
																																							BgL_argsz00_938
																																								=
																																								BgL_argsz00_4070;
																																							BgL_bodyz00_937
																																								=
																																								BgL_bodyz00_4069;
																																							goto
																																								BgL_tagzd21657zd2_939;
																																						}
																																						BgL_auxz00_4057
																																							=
																																							(obj_t)
																																							(BgL_auxz00_4068);
																																					}
																																				}
																																			else
																																				{	/* Ast/sexp.scm 103 */
																																					bool_t
																																						BgL_testz00_4072;
																																					{	/* Ast/sexp.scm 103 */
																																						obj_t
																																							BgL_arg3571z00_1176;
																																						BgL_arg3571z00_1176
																																							=
																																							CAR
																																							(BgL_expz00_18);
																																						BgL_testz00_4072
																																							=
																																							CBOOL
																																							(BGl_letzd2symzf3z21zzast_letz00
																																							(BgL_arg3571z00_1176));
																																					}
																																					if (BgL_testz00_4072)
																																						{	/* Ast/sexp.scm 103 */
																																							BgL_nodez00_bglt
																																								BgL_auxz00_4076;
																																							goto
																																								BgL_tagzd21658zd2_940;
																																							BgL_auxz00_4057
																																								=
																																								(obj_t)
																																								(BgL_auxz00_4076);
																																						}
																																					else
																																						{	/* Ast/sexp.scm 103 */
																																							bool_t
																																								BgL_testz00_4078;
																																							{	/* Ast/sexp.scm 103 */
																																								obj_t
																																									BgL_arg3570z00_1175;
																																								BgL_arg3570z00_1175
																																									=
																																									CAR
																																									(BgL_expz00_18);
																																								BgL_testz00_4078
																																									=
																																									CBOOL
																																									(BGl_labelszd2symzf3z21zzast_labelsz00
																																									(BgL_arg3570z00_1175));
																																							}
																																							if (BgL_testz00_4078)
																																								{	/* Ast/sexp.scm 103 */
																																									BgL_letzd2funzd2_bglt
																																										BgL_auxz00_4082;
																																									goto
																																										BgL_tagzd21659zd2_941;
																																									BgL_auxz00_4057
																																										=
																																										(obj_t)
																																										(BgL_auxz00_4082);
																																								}
																																							else
																																								{	/* Ast/sexp.scm 103 */
																																									obj_t
																																										BgL_carzd22164zd2_1166;
																																									BgL_carzd22164zd2_1166
																																										=
																																										CAR
																																										(BgL_expz00_18);
																																									{	/* Ast/sexp.scm 103 */
																																										obj_t
																																											BgL_cdrzd22169zd2_1167;
																																										BgL_cdrzd22169zd2_1167
																																											=
																																											CDR
																																											(BgL_carzd22164zd2_1166);
																																										if ((CAR(BgL_carzd22164zd2_1166) == CNST_TABLE_REF(((long) 18))))
																																											{	/* Ast/sexp.scm 103 */
																																												obj_t
																																													BgL_arg3564z00_1169;
																																												obj_t
																																													BgL_arg3565z00_1170;
																																												obj_t
																																													BgL_arg3566z00_1171;
																																												BgL_arg3564z00_1169
																																													=
																																													CAR
																																													(BgL_cdrzd22169zd2_1167);
																																												BgL_arg3565z00_1170
																																													=
																																													CDR
																																													(BgL_cdrzd22169zd2_1167);
																																												BgL_arg3566z00_1171
																																													=
																																													CDR
																																													(BgL_expz00_18);
																																												{	/* Ast/sexp.scm 103 */
																																													BgL_nodez00_bglt
																																														BgL_auxz00_4093;
																																													{
																																														obj_t
																																															BgL_argsz00_4096;
																																														obj_t
																																															BgL_bodyz00_4095;
																																														obj_t
																																															BgL_varsz00_4094;
																																														BgL_varsz00_4094
																																															=
																																															BgL_arg3564z00_1169;
																																														BgL_bodyz00_4095
																																															=
																																															BgL_arg3565z00_1170;
																																														BgL_argsz00_4096
																																															=
																																															BgL_arg3566z00_1171;
																																														BgL_argsz00_944
																																															=
																																															BgL_argsz00_4096;
																																														BgL_bodyz00_943
																																															=
																																															BgL_bodyz00_4095;
																																														BgL_varsz00_942
																																															=
																																															BgL_varsz00_4094;
																																														goto
																																															BgL_tagzd21660zd2_945;
																																													}
																																													BgL_auxz00_4057
																																														=
																																														(obj_t)
																																														(BgL_auxz00_4093);
																																												}
																																											}
																																										else
																																											{	/* Ast/sexp.scm 103 */
																																												if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																													{	/* Ast/sexp.scm 103 */
																																														goto
																																															BgL_tagzd21672zd2_961;
																																													}
																																												else
																																													{	/* Ast/sexp.scm 103 */
																																														BgL_nodez00_bglt
																																															BgL_auxz00_4100;
																																														goto
																																															BgL_tagzd21673zd2_962;
																																														BgL_auxz00_4057
																																															=
																																															(obj_t)
																																															(BgL_auxz00_4100);
																																													}
																																											}
																																									}
																																								}
																																						}
																																				}
																																		}
																																	else
																																		{	/* Ast/sexp.scm 103 */
																																			bool_t
																																				BgL_testz00_4102;
																																			{	/* Ast/sexp.scm 103 */
																																				obj_t
																																					BgL_arg3583z00_1190;
																																				BgL_arg3583z00_1190
																																					=
																																					CAR
																																					(BgL_expz00_18);
																																				BgL_testz00_4102
																																					=
																																					CBOOL
																																					(BGl_letzd2symzf3z21zzast_letz00
																																					(BgL_arg3583z00_1190));
																																			}
																																			if (BgL_testz00_4102)
																																				{	/* Ast/sexp.scm 103 */
																																					BgL_nodez00_bglt
																																						BgL_auxz00_4106;
																																					goto
																																						BgL_tagzd21658zd2_940;
																																					BgL_auxz00_4057
																																						=
																																						(obj_t)
																																						(BgL_auxz00_4106);
																																				}
																																			else
																																				{	/* Ast/sexp.scm 103 */
																																					bool_t
																																						BgL_testz00_4108;
																																					{	/* Ast/sexp.scm 103 */
																																						obj_t
																																							BgL_arg3582z00_1189;
																																						BgL_arg3582z00_1189
																																							=
																																							CAR
																																							(BgL_expz00_18);
																																						BgL_testz00_4108
																																							=
																																							CBOOL
																																							(BGl_labelszd2symzf3z21zzast_labelsz00
																																							(BgL_arg3582z00_1189));
																																					}
																																					if (BgL_testz00_4108)
																																						{	/* Ast/sexp.scm 103 */
																																							BgL_letzd2funzd2_bglt
																																								BgL_auxz00_4112;
																																							goto
																																								BgL_tagzd21659zd2_941;
																																							BgL_auxz00_4057
																																								=
																																								(obj_t)
																																								(BgL_auxz00_4112);
																																						}
																																					else
																																						{	/* Ast/sexp.scm 103 */
																																							obj_t
																																								BgL_carzd22217zd2_1180;
																																							BgL_carzd22217zd2_1180
																																								=
																																								CAR
																																								(BgL_expz00_18);
																																							{	/* Ast/sexp.scm 103 */
																																								obj_t
																																									BgL_cdrzd22222zd2_1181;
																																								BgL_cdrzd22222zd2_1181
																																									=
																																									CDR
																																									(BgL_carzd22217zd2_1180);
																																								if ((CAR(BgL_carzd22217zd2_1180) == CNST_TABLE_REF(((long) 18))))
																																									{	/* Ast/sexp.scm 103 */
																																										obj_t
																																											BgL_arg3576z00_1183;
																																										obj_t
																																											BgL_arg3577z00_1184;
																																										obj_t
																																											BgL_arg3578z00_1185;
																																										BgL_arg3576z00_1183
																																											=
																																											CAR
																																											(BgL_cdrzd22222zd2_1181);
																																										BgL_arg3577z00_1184
																																											=
																																											CDR
																																											(BgL_cdrzd22222zd2_1181);
																																										BgL_arg3578z00_1185
																																											=
																																											CDR
																																											(BgL_expz00_18);
																																										{	/* Ast/sexp.scm 103 */
																																											BgL_nodez00_bglt
																																												BgL_auxz00_4123;
																																											{
																																												obj_t
																																													BgL_argsz00_4126;
																																												obj_t
																																													BgL_bodyz00_4125;
																																												obj_t
																																													BgL_varsz00_4124;
																																												BgL_varsz00_4124
																																													=
																																													BgL_arg3576z00_1183;
																																												BgL_bodyz00_4125
																																													=
																																													BgL_arg3577z00_1184;
																																												BgL_argsz00_4126
																																													=
																																													BgL_arg3578z00_1185;
																																												BgL_argsz00_944
																																													=
																																													BgL_argsz00_4126;
																																												BgL_bodyz00_943
																																													=
																																													BgL_bodyz00_4125;
																																												BgL_varsz00_942
																																													=
																																													BgL_varsz00_4124;
																																												goto
																																													BgL_tagzd21660zd2_945;
																																											}
																																											BgL_auxz00_4057
																																												=
																																												(obj_t)
																																												(BgL_auxz00_4123);
																																										}
																																									}
																																								else
																																									{	/* Ast/sexp.scm 103 */
																																										if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																											{	/* Ast/sexp.scm 103 */
																																												goto
																																													BgL_tagzd21672zd2_961;
																																											}
																																										else
																																											{	/* Ast/sexp.scm 103 */
																																												BgL_nodez00_bglt
																																													BgL_auxz00_4130;
																																												goto
																																													BgL_tagzd21673zd2_962;
																																												BgL_auxz00_4057
																																													=
																																													(obj_t)
																																													(BgL_auxz00_4130);
																																											}
																																									}
																																							}
																																						}
																																				}
																																		}
																																}
																															else
																																{	/* Ast/sexp.scm 103 */
																																	bool_t
																																		BgL_testz00_4132;
																																	{	/* Ast/sexp.scm 103 */
																																		obj_t
																																			BgL_arg3588z00_1195;
																																		BgL_arg3588z00_1195
																																			=
																																			CAR
																																			(BgL_expz00_18);
																																		BgL_testz00_4132
																																			=
																																			CBOOL
																																			(BGl_letzd2symzf3z21zzast_letz00
																																			(BgL_arg3588z00_1195));
																																	}
																																	if (BgL_testz00_4132)
																																		{	/* Ast/sexp.scm 103 */
																																			BgL_nodez00_bglt
																																				BgL_auxz00_4136;
																																			goto
																																				BgL_tagzd21658zd2_940;
																																			BgL_auxz00_4057
																																				=
																																				(obj_t)
																																				(BgL_auxz00_4136);
																																		}
																																	else
																																		{	/* Ast/sexp.scm 103 */
																																			bool_t
																																				BgL_testz00_4138;
																																			{	/* Ast/sexp.scm 103 */
																																				obj_t
																																					BgL_arg3587z00_1194;
																																				BgL_arg3587z00_1194
																																					=
																																					CAR
																																					(BgL_expz00_18);
																																				BgL_testz00_4138
																																					=
																																					CBOOL
																																					(BGl_labelszd2symzf3z21zzast_labelsz00
																																					(BgL_arg3587z00_1194));
																																			}
																																			if (BgL_testz00_4138)
																																				{	/* Ast/sexp.scm 103 */
																																					BgL_letzd2funzd2_bglt
																																						BgL_auxz00_4142;
																																					goto
																																						BgL_tagzd21659zd2_941;
																																					BgL_auxz00_4057
																																						=
																																						(obj_t)
																																						(BgL_auxz00_4142);
																																				}
																																			else
																																				{	/* Ast/sexp.scm 103 */
																																					if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																						{	/* Ast/sexp.scm 103 */
																																							goto
																																								BgL_tagzd21672zd2_961;
																																						}
																																					else
																																						{	/* Ast/sexp.scm 103 */
																																							BgL_nodez00_bglt
																																								BgL_auxz00_4146;
																																							goto
																																								BgL_tagzd21673zd2_962;
																																							BgL_auxz00_4057
																																								=
																																								(obj_t)
																																								(BgL_auxz00_4146);
																																						}
																																				}
																																		}
																																}
																															return
																																(BgL_nodez00_bglt)
																																(BgL_auxz00_4057);
																														}
																													else
																														{	/* Ast/sexp.scm 103 */
																															if (CBOOL
																																(BGl_letzd2symzf3z21zzast_letz00
																																	(BgL_carzd22127zd2_1135)))
																																{	/* Ast/sexp.scm 103 */
																																	obj_t
																																		BgL_auxz00_4152;
																																	goto
																																		BgL_kapzd22129zd2_1137;
																																	return
																																		(BgL_nodez00_bglt)
																																		(BgL_auxz00_4152);
																																}
																															else
																																{	/* Ast/sexp.scm 103 */
																																	if (
																																		(BgL_carzd22127zd2_1135
																																			==
																																			CNST_TABLE_REF
																																			(((long)
																																					20))))
																																		{	/* Ast/sexp.scm 103 */
																																			obj_t
																																				BgL_auxz00_4157;
																																			goto
																																				BgL_kapzd22129zd2_1137;
																																			return
																																				(BgL_nodez00_bglt)
																																				(BgL_auxz00_4157);
																																		}
																																	else
																																		{	/* Ast/sexp.scm 103 */
																																			if (
																																				(BgL_carzd22127zd2_1135
																																					==
																																					CNST_TABLE_REF
																																					(((long) 21))))
																																				{	/* Ast/sexp.scm 103 */
																																					obj_t
																																						BgL_auxz00_4162;
																																					goto
																																						BgL_kapzd22129zd2_1137;
																																					return
																																						(BgL_nodez00_bglt)
																																						(BgL_auxz00_4162);
																																				}
																																			else
																																				{	/* Ast/sexp.scm 103 */
																																					if (CBOOL(BGl_labelszd2symzf3z21zzast_labelsz00(BgL_carzd22127zd2_1135)))
																																						{	/* Ast/sexp.scm 103 */
																																							obj_t
																																								BgL_auxz00_4167;
																																							goto
																																								BgL_kapzd22129zd2_1137;
																																							return
																																								(BgL_nodez00_bglt)
																																								(BgL_auxz00_4167);
																																						}
																																					else
																																						{	/* Ast/sexp.scm 103 */
																																							bool_t
																																								BgL_testz00_4169;
																																							{	/* Ast/sexp.scm 103 */
																																								obj_t
																																									BgL_arg3555z00_1157;
																																								BgL_arg3555z00_1157
																																									=
																																									CAR
																																									(BgL_expz00_18);
																																								BgL_testz00_4169
																																									=
																																									CBOOL
																																									(BGl_letzd2symzf3z21zzast_letz00
																																									(BgL_arg3555z00_1157));
																																							}
																																							if (BgL_testz00_4169)
																																								{	/* Ast/sexp.scm 103 */
																																									goto
																																										BgL_tagzd21658zd2_940;
																																								}
																																							else
																																								{	/* Ast/sexp.scm 103 */
																																									bool_t
																																										BgL_testz00_4173;
																																									{	/* Ast/sexp.scm 103 */
																																										obj_t
																																											BgL_arg3554z00_1156;
																																										BgL_arg3554z00_1156
																																											=
																																											CAR
																																											(BgL_expz00_18);
																																										BgL_testz00_4173
																																											=
																																											CBOOL
																																											(BGl_labelszd2symzf3z21zzast_labelsz00
																																											(BgL_arg3554z00_1156));
																																									}
																																									if (BgL_testz00_4173)
																																										{	/* Ast/sexp.scm 103 */
																																											BgL_letzd2funzd2_bglt
																																												BgL_auxz00_4177;
																																											goto
																																												BgL_tagzd21659zd2_941;
																																											return
																																												(BgL_nodez00_bglt)
																																												(BgL_auxz00_4177);
																																										}
																																									else
																																										{	/* Ast/sexp.scm 103 */
																																											obj_t
																																												BgL_carzd22313zd2_1145;
																																											BgL_carzd22313zd2_1145
																																												=
																																												CAR
																																												(BgL_expz00_18);
																																											{	/* Ast/sexp.scm 103 */
																																												obj_t
																																													BgL_cdrzd22318zd2_1146;
																																												BgL_cdrzd22318zd2_1146
																																													=
																																													CDR
																																													(BgL_carzd22313zd2_1145);
																																												if ((CAR(BgL_carzd22313zd2_1145) == CNST_TABLE_REF(((long) 18))))
																																													{	/* Ast/sexp.scm 103 */
																																														if (PAIRP(BgL_cdrzd22318zd2_1146))
																																															{
																																																obj_t
																																																	BgL_argsz00_4191;
																																																obj_t
																																																	BgL_bodyz00_4189;
																																																obj_t
																																																	BgL_varsz00_4187;
																																																BgL_varsz00_4187
																																																	=
																																																	CAR
																																																	(BgL_cdrzd22318zd2_1146);
																																																BgL_bodyz00_4189
																																																	=
																																																	CDR
																																																	(BgL_cdrzd22318zd2_1146);
																																																BgL_argsz00_4191
																																																	=
																																																	CDR
																																																	(BgL_expz00_18);
																																																BgL_argsz00_944
																																																	=
																																																	BgL_argsz00_4191;
																																																BgL_bodyz00_943
																																																	=
																																																	BgL_bodyz00_4189;
																																																BgL_varsz00_942
																																																	=
																																																	BgL_varsz00_4187;
																																																goto
																																																	BgL_tagzd21660zd2_945;
																																															}
																																														else
																																															{	/* Ast/sexp.scm 103 */
																																																if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																																	{	/* Ast/sexp.scm 103 */
																																																		obj_t
																																																			BgL_auxz00_4195;
																																																		goto
																																																			BgL_tagzd21672zd2_961;
																																																		return
																																																			(BgL_nodez00_bglt)
																																																			(BgL_auxz00_4195);
																																																	}
																																																else
																																																	{	/* Ast/sexp.scm 103 */
																																																		goto
																																																			BgL_tagzd21673zd2_962;
																																																	}
																																															}
																																													}
																																												else
																																													{	/* Ast/sexp.scm 103 */
																																														if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																															{	/* Ast/sexp.scm 103 */
																																																obj_t
																																																	BgL_auxz00_4199;
																																																goto
																																																	BgL_tagzd21672zd2_961;
																																																return
																																																	(BgL_nodez00_bglt)
																																																	(BgL_auxz00_4199);
																																															}
																																														else
																																															{	/* Ast/sexp.scm 103 */
																																																goto
																																																	BgL_tagzd21673zd2_962;
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
																										else
																											{	/* Ast/sexp.scm 103 */
																												if (
																													(BgL_carzd22124zd2_1133
																														==
																														CNST_TABLE_REF((
																																(long) 19))))
																													{	/* Ast/sexp.scm 103 */
																														goto
																															BgL_tagzd21658zd2_940;
																													}
																												else
																													{	/* Ast/sexp.scm 103 */
																														if (CBOOL
																															(BGl_letzd2symzf3z21zzast_letz00
																																(BgL_carzd22124zd2_1133)))
																															{	/* Ast/sexp.scm 103 */
																																goto
																																	BgL_tagzd21658zd2_940;
																															}
																														else
																															{	/* Ast/sexp.scm 103 */
																																if (
																																	(BgL_carzd22124zd2_1133
																																		==
																																		CNST_TABLE_REF
																																		(((long)
																																				20))))
																																	{	/* Ast/sexp.scm 103 */
																																		goto
																																			BgL_tagzd21658zd2_940;
																																	}
																																else
																																	{	/* Ast/sexp.scm 103 */
																																		if (
																																			(BgL_carzd22124zd2_1133
																																				==
																																				CNST_TABLE_REF
																																				(((long)
																																						22))))
																																			{	/* Ast/sexp.scm 103 */
																																				goto
																																					BgL_tagzd21658zd2_940;
																																			}
																																		else
																																			{	/* Ast/sexp.scm 103 */
																																				obj_t
																																					BgL_carzd22369zd2_1201;
																																				BgL_carzd22369zd2_1201
																																					=
																																					CAR
																																					(BgL_expz00_18);
																																				if (
																																					(BgL_carzd22369zd2_1201
																																						==
																																						CNST_TABLE_REF
																																						(((long) 21))))
																																					{	/* Ast/sexp.scm 103 */
																																						BgL_letzd2funzd2_bglt
																																							BgL_auxz00_4217;
																																						goto
																																							BgL_tagzd21659zd2_941;
																																						return
																																							(BgL_nodez00_bglt)
																																							(BgL_auxz00_4217);
																																					}
																																				else
																																					{	/* Ast/sexp.scm 103 */
																																						if (CBOOL(BGl_labelszd2symzf3z21zzast_labelsz00(BgL_carzd22369zd2_1201)))
																																							{	/* Ast/sexp.scm 103 */
																																								BgL_letzd2funzd2_bglt
																																									BgL_auxz00_4222;
																																								goto
																																									BgL_tagzd21659zd2_941;
																																								return
																																									(BgL_nodez00_bglt)
																																									(BgL_auxz00_4222);
																																							}
																																						else
																																							{	/* Ast/sexp.scm 103 */
																																								if ((CAR(BgL_expz00_18) == CNST_TABLE_REF(((long) 18))))
																																									{	/* Ast/sexp.scm 103 */
																																										goto
																																											BgL_tagzd21661zd2_946;
																																									}
																																								else
																																									{	/* Ast/sexp.scm 103 */
																																										if ((CAR(BgL_expz00_18) == CNST_TABLE_REF(((long) 4))))
																																											{	/* Ast/sexp.scm 103 */
																																												goto
																																													BgL_tagzd21662zd2_947;
																																											}
																																										else
																																											{	/* Ast/sexp.scm 103 */
																																												obj_t
																																													BgL_cdrzd22393zd2_1206;
																																												BgL_cdrzd22393zd2_1206
																																													=
																																													CDR
																																													(BgL_expz00_18);
																																												if ((CAR(BgL_expz00_18) == CNST_TABLE_REF(((long) 23))))
																																													{	/* Ast/sexp.scm 103 */
																																														if (PAIRP(BgL_cdrzd22393zd2_1206))
																																															{
																																																obj_t
																																																	BgL_restz00_4241;
																																																obj_t
																																																	BgL_effectz00_4239;
																																																BgL_effectz00_4239
																																																	=
																																																	CAR
																																																	(BgL_cdrzd22393zd2_1206);
																																																BgL_restz00_4241
																																																	=
																																																	CDR
																																																	(BgL_cdrzd22393zd2_1206);
																																																BgL_restz00_949
																																																	=
																																																	BgL_restz00_4241;
																																																BgL_effectz00_948
																																																	=
																																																	BgL_effectz00_4239;
																																																goto
																																																	BgL_tagzd21663zd2_950;
																																															}
																																														else
																																															{	/* Ast/sexp.scm 103 */
																																																if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																																	{	/* Ast/sexp.scm 103 */
																																																		obj_t
																																																			BgL_auxz00_4245;
																																																		goto
																																																			BgL_tagzd21672zd2_961;
																																																		return
																																																			(BgL_nodez00_bglt)
																																																			(BgL_auxz00_4245);
																																																	}
																																																else
																																																	{	/* Ast/sexp.scm 103 */
																																																		goto
																																																			BgL_tagzd21673zd2_962;
																																																	}
																																															}
																																													}
																																												else
																																													{	/* Ast/sexp.scm 103 */
																																														if ((CAR(BgL_expz00_18) == CNST_TABLE_REF(((long) 24))))
																																															{	/* Ast/sexp.scm 103 */
																																																goto
																																																	BgL_tagzd21664zd2_951;
																																															}
																																														else
																																															{	/* Ast/sexp.scm 103 */
																																																if ((CAR(BgL_expz00_18) == CNST_TABLE_REF(((long) 25))))
																																																	{	/* Ast/sexp.scm 103 */
																																																		if (PAIRP(BgL_cdrzd22393zd2_1206))
																																																			{
																																																				obj_t
																																																					BgL_restz00_4259;
																																																				obj_t
																																																					BgL_effectz00_4257;
																																																				BgL_effectz00_4257
																																																					=
																																																					CAR
																																																					(BgL_cdrzd22393zd2_1206);
																																																				BgL_restz00_4259
																																																					=
																																																					CDR
																																																					(BgL_cdrzd22393zd2_1206);
																																																				BgL_restz00_953
																																																					=
																																																					BgL_restz00_4259;
																																																				BgL_effectz00_952
																																																					=
																																																					BgL_effectz00_4257;
																																																				goto
																																																					BgL_tagzd21665zd2_954;
																																																			}
																																																		else
																																																			{	/* Ast/sexp.scm 103 */
																																																				if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																																					{	/* Ast/sexp.scm 103 */
																																																						obj_t
																																																							BgL_auxz00_4263;
																																																						goto
																																																							BgL_tagzd21672zd2_961;
																																																						return
																																																							(BgL_nodez00_bglt)
																																																							(BgL_auxz00_4263);
																																																					}
																																																				else
																																																					{	/* Ast/sexp.scm 103 */
																																																						goto
																																																							BgL_tagzd21673zd2_962;
																																																					}
																																																			}
																																																	}
																																																else
																																																	{	/* Ast/sexp.scm 103 */
																																																		if ((CAR(BgL_expz00_18) == CNST_TABLE_REF(((long) 26))))
																																																			{	/* Ast/sexp.scm 103 */
																																																				obj_t
																																																					BgL_auxz00_4269;
																																																				goto
																																																					BgL_tagzd21666zd2_955;
																																																				return
																																																					(BgL_nodez00_bglt)
																																																					(BgL_auxz00_4269);
																																																			}
																																																		else
																																																			{	/* Ast/sexp.scm 103 */
																																																				if ((CAR(BgL_expz00_18) == CNST_TABLE_REF(((long) 27))))
																																																					{	/* Ast/sexp.scm 103 */
																																																						obj_t
																																																							BgL_auxz00_4275;
																																																						goto
																																																							BgL_tagzd21667zd2_956;
																																																						return
																																																							(BgL_nodez00_bglt)
																																																							(BgL_auxz00_4275);
																																																					}
																																																				else
																																																					{	/* Ast/sexp.scm 103 */
																																																						if ((CAR(BgL_expz00_18) == CNST_TABLE_REF(((long) 28))))
																																																							{	/* Ast/sexp.scm 103 */
																																																								BgL_letzd2funzd2_bglt
																																																									BgL_auxz00_4281;
																																																								goto
																																																									BgL_tagzd21668zd2_957;
																																																								return
																																																									(BgL_nodez00_bglt)
																																																									(BgL_auxz00_4281);
																																																							}
																																																						else
																																																							{	/* Ast/sexp.scm 103 */
																																																								if ((CAR(BgL_expz00_18) == CNST_TABLE_REF(((long) 29))))
																																																									{	/* Ast/sexp.scm 103 */
																																																										BgL_jumpzd2exzd2itz00_bglt
																																																											BgL_auxz00_4287;
																																																										goto
																																																											BgL_tagzd21669zd2_958;
																																																										return
																																																											(BgL_nodez00_bglt)
																																																											(BgL_auxz00_4287);
																																																									}
																																																								else
																																																									{	/* Ast/sexp.scm 103 */
																																																										obj_t
																																																											BgL_cdrzd22431zd2_1223;
																																																										BgL_cdrzd22431zd2_1223
																																																											=
																																																											CDR
																																																											(BgL_expz00_18);
																																																										if ((CAR(BgL_expz00_18) == CNST_TABLE_REF(((long) 14))))
																																																											{	/* Ast/sexp.scm 103 */
																																																												if (PAIRP(BgL_cdrzd22431zd2_1223))
																																																													{	/* Ast/sexp.scm 103 */
																																																														obj_t
																																																															BgL_cdrzd22433zd2_1226;
																																																														BgL_cdrzd22433zd2_1226
																																																															=
																																																															CDR
																																																															(BgL_cdrzd22431zd2_1223);
																																																														if (PAIRP(BgL_cdrzd22433zd2_1226))
																																																															{	/* Ast/sexp.scm 103 */
																																																																if (NULLP(CDR(BgL_cdrzd22433zd2_1226)))
																																																																	{	/* Ast/sexp.scm 103 */
																																																																		goto
																																																																			BgL_tagzd21670zd2_959;
																																																																	}
																																																																else
																																																																	{	/* Ast/sexp.scm 103 */
																																																																		if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																																																			{	/* Ast/sexp.scm 103 */
																																																																				obj_t
																																																																					BgL_auxz00_4304;
																																																																				goto
																																																																					BgL_tagzd21672zd2_961;
																																																																				return
																																																																					(BgL_nodez00_bglt)
																																																																					(BgL_auxz00_4304);
																																																																			}
																																																																		else
																																																																			{	/* Ast/sexp.scm 103 */
																																																																				goto
																																																																					BgL_tagzd21673zd2_962;
																																																																			}
																																																																	}
																																																															}
																																																														else
																																																															{	/* Ast/sexp.scm 103 */
																																																																if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																																																	{	/* Ast/sexp.scm 103 */
																																																																		obj_t
																																																																			BgL_auxz00_4308;
																																																																		goto
																																																																			BgL_tagzd21672zd2_961;
																																																																		return
																																																																			(BgL_nodez00_bglt)
																																																																			(BgL_auxz00_4308);
																																																																	}
																																																																else
																																																																	{	/* Ast/sexp.scm 103 */
																																																																		goto
																																																																			BgL_tagzd21673zd2_962;
																																																																	}
																																																															}
																																																													}
																																																												else
																																																													{	/* Ast/sexp.scm 103 */
																																																														if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																																															{	/* Ast/sexp.scm 103 */
																																																																obj_t
																																																																	BgL_auxz00_4312;
																																																																goto
																																																																	BgL_tagzd21672zd2_961;
																																																																return
																																																																	(BgL_nodez00_bglt)
																																																																	(BgL_auxz00_4312);
																																																															}
																																																														else
																																																															{	/* Ast/sexp.scm 103 */
																																																																goto
																																																																	BgL_tagzd21673zd2_962;
																																																															}
																																																													}
																																																											}
																																																										else
																																																											{	/* Ast/sexp.scm 103 */
																																																												if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(CAR(BgL_expz00_18), BUNSPEC))
																																																													{	/* Ast/sexp.scm 103 */
																																																														if (NULLP(BgL_cdrzd22431zd2_1223))
																																																															{	/* Ast/sexp.scm 103 */
																																																																goto
																																																																	BgL_tagzd21671zd2_960;
																																																															}
																																																														else
																																																															{	/* Ast/sexp.scm 103 */
																																																																if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																																																	{	/* Ast/sexp.scm 103 */
																																																																		obj_t
																																																																			BgL_auxz00_4321;
																																																																		goto
																																																																			BgL_tagzd21672zd2_961;
																																																																		return
																																																																			(BgL_nodez00_bglt)
																																																																			(BgL_auxz00_4321);
																																																																	}
																																																																else
																																																																	{	/* Ast/sexp.scm 103 */
																																																																		goto
																																																																			BgL_tagzd21673zd2_962;
																																																																	}
																																																															}
																																																													}
																																																												else
																																																													{	/* Ast/sexp.scm 103 */
																																																														if (BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_expz00_18))
																																																															{	/* Ast/sexp.scm 103 */
																																																																obj_t
																																																																	BgL_auxz00_4325;
																																																																goto
																																																																	BgL_tagzd21672zd2_961;
																																																																return
																																																																	(BgL_nodez00_bglt)
																																																																	(BgL_auxz00_4325);
																																																															}
																																																														else
																																																															{	/* Ast/sexp.scm 103 */
																																																																goto
																																																																	BgL_tagzd21673zd2_962;
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
															}
													}
											}
									}
								else
									{	/* Ast/sexp.scm 103 */
										obj_t BgL_auxz00_4327;

										BgL_atomz00_926 = BgL_expz00_18;
										if (SYMBOLP(BgL_atomz00_926))
											{	/* Ast/sexp.scm 119 */
												if (CBOOL(BGl_lookupz00zzast_sexpz00(BgL_atomz00_926,
															BgL_stackz00_19)))
													{	/* Ast/sexp.scm 143 */
														obj_t BgL_localz00_1292;

														BgL_localz00_1292 =
															BGl_lookupz00zzast_sexpz00(BgL_atomz00_926,
															BgL_stackz00_19);
														{	/* Ast/sexp.scm 143 */
															obj_t BgL_varz00_1293;

															{	/* Ast/sexp.scm 144 */
																bool_t BgL_testz00_4334;

																if (
																	(BgL_sitez00_21 ==
																		CNST_TABLE_REF(((long) 11))))
																	{	/* Ast/sexp.scm 144 */
																		BgL_testz00_4334 = ((bool_t) 0);
																	}
																else
																	{	/* Ast/sexp.scm 145 */
																		BgL_valuez00_bglt BgL_arg3679z00_1298;

																		{
																			BgL_variablez00_bglt BgL_auxz00_4338;

																			BgL_auxz00_4338 =
																				(BgL_variablez00_bglt)
																				(BgL_localz00_1292);
																			BgL_arg3679z00_1298 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_auxz00_4338))->BgL_valuez00);
																		}
																		{	/* Ast/sexp.scm 145 */
																			obj_t BgL_obj1946z00_2528;

																			BgL_obj1946z00_2528 =
																				(obj_t) (BgL_arg3679z00_1298);
																			BgL_testz00_4334 =
																				BGl_iszd2azf3z21zz__objectz00
																				(BgL_obj1946z00_2528,
																				BGl_funz00zzast_varz00);
																		}
																	}
																if (BgL_testz00_4334)
																	{	/* Ast/sexp.scm 148 */
																		BgL_typez00_bglt BgL_arg3675z00_1295;

																		{
																			BgL_variablez00_bglt BgL_auxz00_4343;

																			BgL_auxz00_4343 =
																				(BgL_variablez00_bglt)
																				(BgL_localz00_1292);
																			BgL_arg3675z00_1295 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_auxz00_4343))->BgL_typez00);
																		}
																		BgL_varz00_1293 =
																			(obj_t)
																			(BGl_makezd2closurezd2zzast_nodez00
																			(BgL_locz00_20, BgL_arg3675z00_1295,
																				(BgL_variablez00_bglt)
																				(BgL_localz00_1292)));
																	}
																else
																	{	/* Ast/sexp.scm 152 */
																		BgL_typez00_bglt BgL_arg3677z00_1296;

																		{
																			BgL_variablez00_bglt BgL_auxz00_4349;

																			BgL_auxz00_4349 =
																				(BgL_variablez00_bglt)
																				(BgL_localz00_1292);
																			BgL_arg3677z00_1296 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_auxz00_4349))->BgL_typez00);
																		}
																		BgL_varz00_1293 =
																			(obj_t) (BGl_makezd2varzd2zzast_nodez00
																			(BgL_locz00_20, BgL_arg3677z00_1296,
																				(BgL_variablez00_bglt)
																				(BgL_localz00_1292)));
																	}
															}
															{	/* Ast/sexp.scm 144 */

																BGl_usezd2variablez12zc0zzast_sexpz00(
																	(BgL_variablez00_bglt) (BgL_localz00_1292),
																	BgL_locz00_20, BgL_sitez00_21);
																BgL_auxz00_4327 = BgL_varz00_1293;
															}
														}
													}
												else
													{	/* Ast/sexp.scm 157 */
														obj_t BgL_globalz00_1299;

														BgL_globalz00_1299 =
															BGl_findzd2globalzd2zzast_envz00(BgL_atomz00_926,
															BNIL);
														if (BGl_iszd2azf3z21zz__objectz00
															(BgL_globalz00_1299, BGl_globalz00zzast_varz00))
															{	/* Ast/sexp.scm 161 */
																bool_t BgL_testz00_4360;

																{	/* Ast/sexp.scm 161 */
																	obj_t BgL_auxz00_4361;

																	{
																		BgL_globalz00_bglt BgL_auxz00_4362;

																		BgL_auxz00_4362 =
																			(BgL_globalz00_bglt) (BgL_globalz00_1299);
																		BgL_auxz00_4361 =
																			(((BgL_globalz00_bglt)
																				CREF(BgL_auxz00_4362))->BgL_importz00);
																	}
																	BgL_testz00_4360 =
																		(BgL_auxz00_4361 ==
																		CNST_TABLE_REF(((long) 10)));
																}
																if (BgL_testz00_4360)
																	{	/* Ast/sexp.scm 162 */
																		obj_t BgL_arg3682z00_1302;

																		{	/* Ast/sexp.scm 162 */
																			obj_t BgL_arg3683z00_1303;

																			obj_t BgL_arg3684z00_1304;

																			BgL_arg3683z00_1303 =
																				CNST_TABLE_REF(((long) 10));
																			{	/* Ast/sexp.scm 162 */
																				obj_t BgL_arg3685z00_1305;

																				{	/* Ast/sexp.scm 162 */
																					obj_t BgL_arg3688z00_1308;

																					obj_t BgL_arg3689z00_1309;

																					BgL_arg3688z00_1308 =
																						CNST_TABLE_REF(((long) 13));
																					{	/* Ast/sexp.scm 162 */
																						obj_t BgL_list3690z00_1310;

																						BgL_list3690z00_1310 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3689z00_1309 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_atomz00_926,
																							BgL_list3690z00_1310);
																					}
																					BgL_arg3685z00_1305 =
																						MAKE_PAIR(BgL_arg3688z00_1308,
																						BgL_arg3689z00_1309);
																				}
																				{	/* Ast/sexp.scm 162 */
																					obj_t BgL_list3687z00_1307;

																					BgL_list3687z00_1307 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3684z00_1304 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3685z00_1305,
																						BgL_list3687z00_1307);
																			}}
																			BgL_arg3682z00_1302 =
																				MAKE_PAIR(BgL_arg3683z00_1303,
																				BgL_arg3684z00_1304);
																		}
																		BgL_auxz00_4327 =
																			(obj_t)
																			(BGl_sexpzd2ze3nodez31zzast_sexpz00
																			(BgL_arg3682z00_1302, BgL_stackz00_19,
																				BgL_locz00_20, BgL_sitez00_21));
																	}
																else
																	{	/* Ast/sexp.scm 161 */
																		BGl_usezd2variablez12zc0zzast_sexpz00(
																			(BgL_variablez00_bglt) (
																				(BgL_globalz00_bglt)
																				(BgL_globalz00_1299)), BgL_locz00_20,
																			BgL_sitez00_21);
																		{	/* Ast/sexp.scm 165 */
																			bool_t BgL_testz00_4380;

																			if (
																				(BgL_sitez00_21 ==
																					CNST_TABLE_REF(((long) 11))))
																				{	/* Ast/sexp.scm 165 */
																					BgL_testz00_4380 = ((bool_t) 0);
																				}
																			else
																				{	/* Ast/sexp.scm 165 */
																					BgL_valuez00_bglt BgL_arg3706z00_1326;

																					{
																						BgL_variablez00_bglt
																							BgL_auxz00_4384;
																						BgL_auxz00_4384 =
																							(BgL_variablez00_bglt) (
																							(BgL_globalz00_bglt)
																							(BgL_globalz00_1299));
																						BgL_arg3706z00_1326 =
																							(((BgL_variablez00_bglt)
																								CREF(BgL_auxz00_4384))->
																							BgL_valuez00);
																					}
																					{	/* Ast/sexp.scm 165 */
																						obj_t BgL_obj1946z00_2534;

																						BgL_obj1946z00_2534 =
																							(obj_t) (BgL_arg3706z00_1326);
																						BgL_testz00_4380 =
																							BGl_iszd2azf3z21zz__objectz00
																							(BgL_obj1946z00_2534,
																							BGl_funz00zzast_varz00);
																					}
																				}
																			if (BgL_testz00_4380)
																				{	/* Ast/sexp.scm 166 */
																					bool_t BgL_testz00_4390;

																					{	/* Ast/sexp.scm 166 */
																						bool_t BgL_testz00_4391;

																						{	/* Ast/sexp.scm 166 */
																							BgL_valuez00_bglt
																								BgL_arg3703z00_1323;
																							{
																								BgL_variablez00_bglt
																									BgL_auxz00_4392;
																								BgL_auxz00_4392 =
																									(BgL_variablez00_bglt) (
																									(BgL_globalz00_bglt)
																									(BgL_globalz00_1299));
																								BgL_arg3703z00_1323 =
																									(((BgL_variablez00_bglt)
																										CREF(BgL_auxz00_4392))->
																									BgL_valuez00);
																							}
																							{	/* Ast/sexp.scm 166 */
																								obj_t BgL_obj2108z00_2536;

																								BgL_obj2108z00_2536 =
																									(obj_t) (BgL_arg3703z00_1323);
																								BgL_testz00_4391 =
																									BGl_iszd2azf3z21zz__objectz00
																									(BgL_obj2108z00_2536,
																									BGl_cfunz00zzast_varz00);
																							}
																						}
																						if (BgL_testz00_4391)
																							{	/* Ast/sexp.scm 167 */
																								bool_t BgL_testz00_4398;

																								{	/* Ast/sexp.scm 167 */
																									obj_t BgL_arg3702z00_1322;

																									BgL_arg3702z00_1322 =
																										BGl_thezd2backendzd2zzbackend_backendz00
																										();
																									{
																										BgL_backendz00_bglt
																											BgL_auxz00_4400;
																										BgL_auxz00_4400 =
																											(BgL_backendz00_bglt)
																											(BgL_arg3702z00_1322);
																										BgL_testz00_4398 =
																											(((BgL_backendz00_bglt)
																												CREF(BgL_auxz00_4400))->
																											BgL_foreignzd2closurezd2);
																									}
																								}
																								if (BgL_testz00_4398)
																									{	/* Ast/sexp.scm 167 */
																										BgL_testz00_4390 =
																											((bool_t) 0);
																									}
																								else
																									{	/* Ast/sexp.scm 167 */
																										if (
																											(BgL_sitez00_21 ==
																												CNST_TABLE_REF(((long)
																														14))))
																											{	/* Ast/sexp.scm 168 */
																												BgL_testz00_4390 =
																													((bool_t) 0);
																											}
																										else
																											{	/* Ast/sexp.scm 168 */
																												BgL_testz00_4390 =
																													((bool_t) 1);
																											}
																									}
																							}
																						else
																							{	/* Ast/sexp.scm 166 */
																								BgL_testz00_4390 = ((bool_t) 0);
																							}
																					}
																					if (BgL_testz00_4390)
																						{	/* Ast/sexp.scm 170 */
																							obj_t BgL_arg3693z00_1313;

																							{	/* Ast/sexp.scm 170 */
																								obj_t BgL_arg3695z00_1315;

																								{	/* Ast/sexp.scm 170 */
																									obj_t BgL_arg3697z00_1317;

																									BgL_arg3697z00_1317 =
																										BGl_thezd2backendzd2zzbackend_backendz00
																										();
																									{
																										BgL_backendz00_bglt
																											BgL_auxz00_4407;
																										BgL_auxz00_4407 =
																											(BgL_backendz00_bglt)
																											(BgL_arg3697z00_1317);
																										BgL_arg3695z00_1315 =
																											(((BgL_backendz00_bglt)
																												CREF(BgL_auxz00_4407))->
																											BgL_namez00);
																									}
																								}
																								{	/* Ast/sexp.scm 170 */
																									obj_t BgL_list3696z00_1316;

																									BgL_list3696z00_1316 =
																										MAKE_PAIR
																										(BgL_arg3695z00_1315, BNIL);
																									BgL_arg3693z00_1313 =
																										BGl_formatz00zz__r4_output_6_10_3z00
																										(BGl_string4263z00zzast_sexpz00,
																										BgL_list3696z00_1316);
																								}
																							}
																							BgL_auxz00_4327 =
																								(obj_t)
																								(BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																								(BgL_arg3693z00_1313,
																									BgL_expz00_18,
																									BgL_locz00_20));
																						}
																					else
																						{	/* Ast/sexp.scm 174 */
																							BgL_typez00_bglt
																								BgL_arg3698z00_1318;
																							{
																								BgL_variablez00_bglt
																									BgL_auxz00_4414;
																								BgL_auxz00_4414 =
																									(BgL_variablez00_bglt) (
																									(BgL_globalz00_bglt)
																									(BgL_globalz00_1299));
																								BgL_arg3698z00_1318 =
																									(((BgL_variablez00_bglt)
																										CREF(BgL_auxz00_4414))->
																									BgL_typez00);
																							}
																							BgL_auxz00_4327 =
																								(obj_t)
																								(BGl_makezd2closurezd2zzast_nodez00
																								(BgL_locz00_20,
																									BgL_arg3698z00_1318,
																									(BgL_variablez00_bglt) (
																										(BgL_globalz00_bglt)
																										(BgL_globalz00_1299))));
																						}
																				}
																			else
																				{	/* Ast/sexp.scm 178 */
																					BgL_typez00_bglt BgL_arg3704z00_1324;

																					{
																						BgL_variablez00_bglt
																							BgL_auxz00_4422;
																						BgL_auxz00_4422 =
																							(BgL_variablez00_bglt) (
																							(BgL_globalz00_bglt)
																							(BgL_globalz00_1299));
																						BgL_arg3704z00_1324 =
																							(((BgL_variablez00_bglt)
																								CREF(BgL_auxz00_4422))->
																							BgL_typez00);
																					}
																					BgL_auxz00_4327 =
																						(obj_t)
																						(BGl_makezd2varzd2zzast_nodez00
																						(BgL_locz00_20, BgL_arg3704z00_1324,
																							(BgL_variablez00_bglt) (
																								(BgL_globalz00_bglt)
																								(BgL_globalz00_1299))));
																				}
																		}
																	}
															}
														else
															{	/* Ast/sexp.scm 159 */
																BgL_auxz00_4327 =
																	(obj_t)
																	(BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																	(BGl_string4262z00zzast_sexpz00,
																		BgL_expz00_18, BgL_locz00_20));
															}
													}
											}
										else
											{	/* Ast/sexp.scm 121 */
												bool_t BgL_testz00_4432;

												if (BGl_iszd2azf3z21zz__objectz00(BgL_atomz00_926,
														BGl_localz00zzast_varz00))
													{	/* Ast/sexp.scm 121 */
														BgL_testz00_4432 = ((bool_t) 1);
													}
												else
													{	/* Ast/sexp.scm 121 */
														BgL_testz00_4432 =
															BGl_iszd2azf3z21zz__objectz00(BgL_atomz00_926,
															BGl_globalz00zzast_varz00);
													}
												if (BgL_testz00_4432)
													{	/* Ast/sexp.scm 121 */
														BGl_usezd2variablez12zc0zzast_sexpz00(
															(BgL_variablez00_bglt) (BgL_atomz00_926),
															BgL_locz00_20, BgL_sitez00_21);
														{	/* Ast/sexp.scm 123 */
															bool_t BgL_testz00_4438;

															if (
																(BgL_sitez00_21 == CNST_TABLE_REF(((long) 11))))
																{	/* Ast/sexp.scm 123 */
																	BgL_testz00_4438 = ((bool_t) 0);
																}
															else
																{	/* Ast/sexp.scm 123 */
																	BgL_valuez00_bglt BgL_arg3715z00_1335;

																	{
																		BgL_variablez00_bglt BgL_auxz00_4442;

																		BgL_auxz00_4442 =
																			(BgL_variablez00_bglt) (BgL_atomz00_926);
																		BgL_arg3715z00_1335 =
																			(((BgL_variablez00_bglt)
																				CREF(BgL_auxz00_4442))->BgL_valuez00);
																	}
																	{	/* Ast/sexp.scm 123 */
																		obj_t BgL_obj1946z00_2544;

																		BgL_obj1946z00_2544 =
																			(obj_t) (BgL_arg3715z00_1335);
																		BgL_testz00_4438 =
																			BGl_iszd2azf3z21zz__objectz00
																			(BgL_obj1946z00_2544,
																			BGl_funz00zzast_varz00);
																	}
																}
															if (BgL_testz00_4438)
																{	/* Ast/sexp.scm 126 */
																	BgL_typez00_bglt BgL_arg3712z00_1332;

																	{
																		BgL_variablez00_bglt BgL_auxz00_4447;

																		BgL_auxz00_4447 =
																			(BgL_variablez00_bglt) (BgL_atomz00_926);
																		BgL_arg3712z00_1332 =
																			(((BgL_variablez00_bglt)
																				CREF(BgL_auxz00_4447))->BgL_typez00);
																	}
																	BgL_auxz00_4327 =
																		(obj_t) (BGl_makezd2closurezd2zzast_nodez00
																		(BgL_locz00_20, BgL_arg3712z00_1332,
																			(BgL_variablez00_bglt)
																			(BgL_atomz00_926)));
																}
															else
																{	/* Ast/sexp.scm 130 */
																	BgL_typez00_bglt BgL_arg3713z00_1333;

																	{
																		BgL_variablez00_bglt BgL_auxz00_4453;

																		BgL_auxz00_4453 =
																			(BgL_variablez00_bglt) (BgL_atomz00_926);
																		BgL_arg3713z00_1333 =
																			(((BgL_variablez00_bglt)
																				CREF(BgL_auxz00_4453))->BgL_typez00);
																	}
																	BgL_auxz00_4327 =
																		(obj_t) (BGl_makezd2varzd2zzast_nodez00
																		(BgL_locz00_20, BgL_arg3713z00_1333,
																			(BgL_variablez00_bglt)
																			(BgL_atomz00_926)));
																}
														}
													}
												else
													{	/* Ast/sexp.scm 132 */
														bool_t BgL_testz00_4459;

														if (STRUCTP(BgL_atomz00_926))
															{	/* Ast/sexp.scm 132 */
																BgL_testz00_4459 = ((bool_t) 1);
															}
														else
															{	/* Ast/sexp.scm 132 */
																if (VECTORP(BgL_atomz00_926))
																	{	/* Ast/sexp.scm 133 */
																		BgL_testz00_4459 = ((bool_t) 1);
																	}
																else
																	{	/* Ast/sexp.scm 133 */
																		if (BGL_OBJECTP(BgL_atomz00_926))
																			{	/* Ast/sexp.scm 134 */
																				BgL_testz00_4459 = ((bool_t) 1);
																			}
																		else
																			{	/* Ast/sexp.scm 134 */
																				BgL_testz00_4459 =
																					PROCEDUREP(BgL_atomz00_926);
																			}
																	}
															}
														if (BgL_testz00_4459)
															{	/* Ast/sexp.scm 132 */
																BgL_auxz00_4327 =
																	(obj_t)
																	(BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																	(BGl_string4264z00zzast_sexpz00,
																		BgL_expz00_18, BgL_locz00_20));
															}
														else
															{	/* Ast/sexp.scm 140 */
																BgL_typez00_bglt BgL_arg3717z00_1337;

																BgL_arg3717z00_1337 =
																	BGl_getzd2typezd2atomz00zztype_typeofz00
																	(BgL_atomz00_926);
																BgL_auxz00_4327 =
																	(obj_t) (BGl_makezd2atomzd2zzast_nodez00
																	(BgL_locz00_20, BgL_arg3717z00_1337,
																		BgL_atomz00_926));
															}
													}
											}
										return (BgL_nodez00_bglt) (BgL_auxz00_4327);
									}
							}
					}
			}
		}
	}



/* liip */
	obj_t BGl_liipz00zzast_sexpz00(obj_t BgL_argsz00_1630)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 386 */
			if (NULLP(BgL_argsz00_1630))
				{	/* Ast/sexp.scm 387 */
					return CNST_TABLE_REF(((long) 30));
				}
			else
				{	/* Ast/sexp.scm 389 */
					obj_t BgL_arg3925z00_1633;

					obj_t BgL_arg3926z00_1634;

					BgL_arg3925z00_1633 = CNST_TABLE_REF(((long) 31));
					{	/* Ast/sexp.scm 389 */
						obj_t BgL_arg3927z00_1635;

						obj_t BgL_arg3928z00_1636;

						BgL_arg3927z00_1635 = CAR(BgL_argsz00_1630);
						BgL_arg3928z00_1636 =
							BGl_liipz00zzast_sexpz00(CDR(BgL_argsz00_1630));
						{	/* Ast/sexp.scm 389 */
							obj_t BgL_list3930z00_1638;

							{	/* Ast/sexp.scm 389 */
								obj_t BgL_arg3931z00_1639;

								BgL_arg3931z00_1639 = MAKE_PAIR(BNIL, BNIL);
								BgL_list3930z00_1638 =
									MAKE_PAIR(BgL_arg3928z00_1636, BgL_arg3931z00_1639);
							}
							BgL_arg3926z00_1634 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg3927z00_1635,
								BgL_list3930z00_1638);
					}}
					return MAKE_PAIR(BgL_arg3925z00_1633, BgL_arg3926z00_1634);
				}
		}
	}



/* loop */
	obj_t BGl_loopz00zzast_sexpz00(obj_t BgL_expz00_2956, obj_t BgL_locz00_2955,
		obj_t BgL_varsz00_1591, obj_t BgL_argsz00_1592)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 371 */
		BGl_loopz00zzast_sexpz00:
			if (NULLP(BgL_varsz00_1591))
				{	/* Ast/sexp.scm 374 */
					if (NULLP(BgL_argsz00_1592))
						{	/* Ast/sexp.scm 375 */
							return BNIL;
						}
					else
						{	/* Ast/sexp.scm 375 */
							return
								BGl_userzd2errorzf2locationz20zztools_errorz00(BgL_locz00_2955,
								BGl_shapez00zztools_shapez00
								(BGl_currentzd2functionzd2zztools_errorz00()),
								BGl_string4266z00zzast_sexpz00, BgL_expz00_2956, BNIL);
						}
				}
			else
				{	/* Ast/sexp.scm 374 */
					if (PAIRP(BgL_varsz00_1591))
						{	/* Ast/sexp.scm 382 */
							if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
									(BgL_varsz00_1591)))
								{	/* Ast/sexp.scm 392 */
									obj_t BgL_argz00_1602;

									BgL_argz00_1602 =
										BGl_dssslzd2findzd2firstzd2formalzd2zztools_dssslz00(CDR
										(BgL_varsz00_1591));
									if (CBOOL(BgL_argz00_1602))
										{
											obj_t BgL_varsz00_4500;

											BgL_varsz00_4500 = BgL_argz00_1602;
											BgL_varsz00_1591 = BgL_varsz00_4500;
											goto BGl_loopz00zzast_sexpz00;
										}
									else
										{
											obj_t BgL_varsz00_4501;

											BgL_varsz00_4501 = BNIL;
											BgL_varsz00_1591 = BgL_varsz00_4501;
											goto BGl_loopz00zzast_sexpz00;
										}
								}
							else
								{	/* Ast/sexp.scm 397 */
									bool_t BgL_testz00_4502;

									{	/* Ast/sexp.scm 397 */
										obj_t BgL_auxz00_4503;

										BgL_auxz00_4503 = CAR(BgL_varsz00_1591);
										BgL_testz00_4502 = SYMBOLP(BgL_auxz00_4503);
									}
									if (BgL_testz00_4502)
										{	/* Ast/sexp.scm 397 */
											if (NULLP(BgL_argsz00_1592))
												{	/* Ast/sexp.scm 403 */
													return
														BGl_userzd2errorzf2locationz20zztools_errorz00
														(BgL_locz00_2955,
														BGl_shapez00zztools_shapez00
														(BGl_currentzd2functionzd2zztools_errorz00()),
														BGl_string4266z00zzast_sexpz00, BgL_expz00_2956,
														BNIL);
												}
											else
												{	/* Ast/sexp.scm 410 */
													obj_t BgL_arg3903z00_1610;

													obj_t BgL_arg3904z00_1611;

													{	/* Ast/sexp.scm 410 */
														obj_t BgL_arg3905z00_1612;

														obj_t BgL_arg3906z00_1613;

														BgL_arg3905z00_1612 = CAR(BgL_varsz00_1591);
														BgL_arg3906z00_1613 = CAR(BgL_argsz00_1592);
														{	/* Ast/sexp.scm 410 */
															obj_t BgL_list3907z00_1614;

															{	/* Ast/sexp.scm 410 */
																obj_t BgL_arg3908z00_1615;

																BgL_arg3908z00_1615 =
																	MAKE_PAIR(BgL_arg3906z00_1613, BNIL);
																BgL_list3907z00_1614 =
																	MAKE_PAIR(BgL_arg3905z00_1612,
																	BgL_arg3908z00_1615);
															}
															BgL_arg3903z00_1610 = BgL_list3907z00_1614;
														}
													}
													BgL_arg3904z00_1611 =
														BGl_loopz00zzast_sexpz00(BgL_expz00_2956,
														BgL_locz00_2955, CDR(BgL_varsz00_1591),
														CDR(BgL_argsz00_1592));
													return MAKE_PAIR(BgL_arg3903z00_1610,
														BgL_arg3904z00_1611);
												}
										}
									else
										{	/* Ast/sexp.scm 397 */
											return
												BGl_userzd2errorzf2locationz20zztools_errorz00
												(BgL_locz00_2955,
												BGl_shapez00zztools_shapez00
												(BGl_currentzd2functionzd2zztools_errorz00()),
												BGl_string4267z00zzast_sexpz00, BgL_expz00_2956, BNIL);
										}
								}
						}
					else
						{	/* Ast/sexp.scm 387 */
							obj_t BgL_arg3917z00_1624;

							{	/* Ast/sexp.scm 387 */
								obj_t BgL_arg3919z00_1626;

								BgL_arg3919z00_1626 =
									BGl_liipz00zzast_sexpz00(BgL_argsz00_1592);
								{	/* Ast/sexp.scm 384 */
									obj_t BgL_list3920z00_1627;

									{	/* Ast/sexp.scm 384 */
										obj_t BgL_arg3922z00_1628;

										BgL_arg3922z00_1628 = MAKE_PAIR(BgL_arg3919z00_1626, BNIL);
										BgL_list3920z00_1627 =
											MAKE_PAIR(BgL_varsz00_1591, BgL_arg3922z00_1628);
									}
									BgL_arg3917z00_1624 = BgL_list3920z00_1627;
								}
							}
							{	/* Ast/sexp.scm 383 */
								obj_t BgL_list3918z00_1625;

								BgL_list3918z00_1625 = MAKE_PAIR(BgL_arg3917z00_1624, BNIL);
								return BgL_list3918z00_1625;
							}
						}
				}
		}
	}



/* _sexp->node */
	obj_t BGl__sexpzd2ze3nodez31zzast_sexpz00(obj_t BgL_envz00_2914,
		obj_t BgL_expz00_2915, obj_t BgL_stackz00_2916, obj_t BgL_locz00_2917,
		obj_t BgL_sitez00_2918)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 98 */
			return
				(obj_t) (BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_expz00_2915,
					BgL_stackz00_2916, BgL_locz00_2917, BgL_sitez00_2918));
		}
	}



/* <anonymous:3937> */
	obj_t BGl_zc3anonymousza33937ze3z83zzast_sexpz00(obj_t BgL_envz00_2919,
		obj_t BgL_objz00_2921, obj_t BgL_procz00_2922, obj_t BgL_msgz00_2923)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 416 */
			{	/* Ast/sexp.scm 417 */
				obj_t BgL_locz00_2920;

				BgL_locz00_2920 = PROCEDURE_REF(BgL_envz00_2919, (int) (((long) 0)));
				{
					obj_t BgL_objz00_1647;

					obj_t BgL_procz00_1648;

					obj_t BgL_msgz00_1649;

					BgL_objz00_1647 = BgL_objz00_2921;
					BgL_procz00_1648 = BgL_procz00_2922;
					BgL_msgz00_1649 = BgL_msgz00_2923;
					return
						BGl_userzd2errorzf2locationz20zztools_errorz00(BgL_locz00_2920,
						BgL_objz00_1647, BgL_procz00_1648, BgL_msgz00_1649, BNIL);
				}
			}
		}
	}



/* <anonymous:3668> */
	obj_t BGl_zc3anonymousza33668ze3z83zzast_sexpz00(obj_t BgL_envz00_2924,
		obj_t BgL_ez00_2927)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 114 */
			{	/* Ast/sexp.scm 114 */
				obj_t BgL_instance3349z00_2925;

				obj_t BgL_stackz00_2926;

				BgL_instance3349z00_2925 =
					PROCEDURE_REF(BgL_envz00_2924, (int) (((long) 0)));
				BgL_stackz00_2926 = PROCEDURE_REF(BgL_envz00_2924, (int) (((long) 1)));
				{
					obj_t BgL_ez00_1285;

					{	/* Ast/sexp.scm 114 */
						BgL_nodez00_bglt BgL_auxz00_4535;

						BgL_ez00_1285 = BgL_ez00_2927;
						{	/* Ast/sexp.scm 114 */
							obj_t BgL_arg3670z00_1287;

							obj_t BgL_arg3671z00_1288;

							{
								BgL_nodez00_bglt BgL_auxz00_4536;

								BgL_auxz00_4536 = (BgL_nodez00_bglt) (BgL_instance3349z00_2925);
								BgL_arg3670z00_1287 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4536))->BgL_locz00);
							}
							BgL_arg3671z00_1288 = CNST_TABLE_REF(((long) 2));
							BgL_auxz00_4535 =
								BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_ez00_1285,
								BgL_stackz00_2926, BgL_arg3670z00_1287, BgL_arg3671z00_1288);
						}
						return (obj_t) (BgL_auxz00_4535);
					}
				}
			}
		}
	}



/* <anonymous:3661> */
	obj_t BGl_zc3anonymousza33661ze3z83zzast_sexpz00(obj_t BgL_envz00_2928,
		obj_t BgL_ez00_2931)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 111 */
			{	/* Ast/sexp.scm 111 */
				obj_t BgL_instance3347z00_2929;

				obj_t BgL_stackz00_2930;

				BgL_instance3347z00_2929 =
					PROCEDURE_REF(BgL_envz00_2928, (int) (((long) 0)));
				BgL_stackz00_2930 = PROCEDURE_REF(BgL_envz00_2928, (int) (((long) 1)));
				{
					obj_t BgL_ez00_1275;

					{	/* Ast/sexp.scm 111 */
						BgL_nodez00_bglt BgL_auxz00_4546;

						BgL_ez00_1275 = BgL_ez00_2931;
						{	/* Ast/sexp.scm 111 */
							obj_t BgL_arg3662z00_1277;

							obj_t BgL_arg3663z00_1278;

							{
								BgL_nodez00_bglt BgL_auxz00_4547;

								BgL_auxz00_4547 = (BgL_nodez00_bglt) (BgL_instance3347z00_2929);
								BgL_arg3662z00_1277 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4547))->BgL_locz00);
							}
							BgL_arg3663z00_1278 = CNST_TABLE_REF(((long) 2));
							BgL_auxz00_4546 =
								BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_ez00_1275,
								BgL_stackz00_2930, BgL_arg3662z00_1277, BgL_arg3663z00_1278);
						}
						return (obj_t) (BgL_auxz00_4546);
					}
				}
			}
		}
	}



/* call->node */
	BgL_nodez00_bglt BGl_callzd2ze3nodez31zzast_sexpz00(obj_t BgL_expz00_22,
		obj_t BgL_stackz00_23, obj_t BgL_locz00_24, obj_t BgL_sitez00_25)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 545 */
			{	/* Ast/sexp.scm 546 */
				obj_t BgL_callerz00_1777;

				obj_t BgL_locz00_1778;

				BgL_callerz00_1777 = CAR(BgL_expz00_22);
				BgL_locz00_1778 =
					BGl_findzd2locationzf2locz20zztools_locationz00(BgL_expz00_22,
					BgL_locz00_24);
				if (SYMBOLP(BgL_callerz00_1777))
					{	/* Ast/sexp.scm 550 */
						obj_t BgL_pidz00_1780;

						BgL_pidz00_1780 =
							BGl_parsezd2idzd2zzast_identz00(BgL_callerz00_1777,
							BgL_locz00_1778);
						{	/* Ast/sexp.scm 550 */
							obj_t BgL_idz00_1781;

							BgL_idz00_1781 = CAR(BgL_pidz00_1780);
							{	/* Ast/sexp.scm 551 */
								obj_t BgL_typez00_1782;

								BgL_typez00_1782 = CDR(BgL_pidz00_1780);
								{	/* Ast/sexp.scm 552 */

									if ((BgL_idz00_1781 == CNST_TABLE_REF(((long) 4))))
										{	/* Ast/sexp.scm 553 */
											return
												BGl_pragmazf2typezd2ze3nodezc3zzast_pragmaz00(((bool_t)
													0), BFALSE, (BgL_typez00_bglt) (BgL_typez00_1782),
												BgL_expz00_22, BgL_stackz00_23, BgL_locz00_1778,
												BgL_sitez00_25);
										}
									else
										{	/* Ast/sexp.scm 553 */
											if ((BgL_idz00_1781 == CNST_TABLE_REF(((long) 23))))
												{	/* Ast/sexp.scm 557 */
													bool_t BgL_testz00_4568;

													{	/* Ast/sexp.scm 557 */
														obj_t BgL_auxz00_4569;

														BgL_auxz00_4569 = CDR(BgL_expz00_22);
														BgL_testz00_4568 = PAIRP(BgL_auxz00_4569);
													}
													if (BgL_testz00_4568)
														{	/* Ast/sexp.scm 561 */
															BgL_feffectz00_bglt BgL_arg4024z00_1787;

															obj_t BgL_arg4025z00_1788;

															{	/* Ast/sexp.scm 561 */
																obj_t BgL_arg4026z00_1789;

																{	/* Ast/sexp.scm 561 */
																	obj_t BgL_pairz00_2801;

																	BgL_pairz00_2801 = BgL_expz00_22;
																	BgL_arg4026z00_1789 =
																		CAR(CDR(BgL_pairz00_2801));
																}
																BgL_arg4024z00_1787 =
																	BGl_parsezd2effectzd2zzeffect_feffectz00
																	(BgL_arg4026z00_1789);
															}
															{	/* Ast/sexp.scm 562 */
																obj_t BgL_arg4027z00_1790;

																obj_t BgL_arg4028z00_1791;

																{	/* Ast/sexp.scm 562 */
																	obj_t BgL_arg4029z00_1792;

																	obj_t BgL_arg4030z00_1793;

																	BgL_arg4029z00_1792 =
																		CNST_TABLE_REF(((long) 32));
																	{	/* Ast/sexp.scm 562 */
																		obj_t BgL_list4031z00_1794;

																		BgL_list4031z00_1794 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg4030z00_1793 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(CNST_TABLE_REF(((long) 33)),
																			BgL_list4031z00_1794);
																	}
																	BgL_arg4027z00_1790 =
																		MAKE_PAIR(BgL_arg4029z00_1792,
																		BgL_arg4030z00_1793);
																}
																{	/* Ast/sexp.scm 562 */
																	obj_t BgL_auxz00_4580;

																	{	/* Ast/sexp.scm 562 */
																		obj_t BgL_pairz00_2805;

																		BgL_pairz00_2805 = BgL_expz00_22;
																		BgL_auxz00_4580 =
																			CDR(CDR(BgL_pairz00_2805));
																	}
																	BgL_arg4028z00_1791 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_auxz00_4580, BNIL);
																}
																BgL_arg4025z00_1788 =
																	MAKE_PAIR(BgL_arg4027z00_1790,
																	BgL_arg4028z00_1791);
															}
															return
																BGl_pragmazf2typezd2ze3nodezc3zzast_pragmaz00((
																	(bool_t) 0), (obj_t) (BgL_arg4024z00_1787),
																(BgL_typez00_bglt) (BgL_typez00_1782),
																BgL_arg4025z00_1788, BgL_stackz00_23,
																BgL_locz00_1778, BgL_sitez00_25);
														}
													else
														{	/* Ast/sexp.scm 557 */
															return
																BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																(BGl_string4268z00zzast_sexpz00, BgL_expz00_22,
																BGl_findzd2locationzf2locz20zztools_locationz00
																(BgL_expz00_22, BgL_locz00_1778));
														}
												}
											else
												{	/* Ast/sexp.scm 553 */
													if ((BgL_idz00_1781 == CNST_TABLE_REF(((long) 24))))
														{	/* Ast/sexp.scm 553 */
															return
																BGl_pragmazf2typezd2ze3nodezc3zzast_pragmaz00((
																	(bool_t) 1), BFALSE,
																(BgL_typez00_bglt) (BgL_typez00_1782),
																BgL_expz00_22, BgL_stackz00_23, BgL_locz00_1778,
																BgL_sitez00_25);
														}
													else
														{	/* Ast/sexp.scm 553 */
															if (
																(BgL_idz00_1781 == CNST_TABLE_REF(((long) 25))))
																{	/* Ast/sexp.scm 567 */
																	bool_t BgL_testz00_4598;

																	{	/* Ast/sexp.scm 567 */
																		obj_t BgL_auxz00_4599;

																		BgL_auxz00_4599 = CDR(BgL_expz00_22);
																		BgL_testz00_4598 = PAIRP(BgL_auxz00_4599);
																	}
																	if (BgL_testz00_4598)
																		{	/* Ast/sexp.scm 571 */
																			BgL_feffectz00_bglt BgL_arg4040z00_1803;

																			obj_t BgL_arg4041z00_1804;

																			{	/* Ast/sexp.scm 571 */
																				obj_t BgL_arg4042z00_1805;

																				{	/* Ast/sexp.scm 571 */
																					obj_t BgL_pairz00_2815;

																					BgL_pairz00_2815 = BgL_expz00_22;
																					BgL_arg4042z00_1805 =
																						CAR(CDR(BgL_pairz00_2815));
																				}
																				BgL_arg4040z00_1803 =
																					BGl_parsezd2effectzd2zzeffect_feffectz00
																					(BgL_arg4042z00_1805);
																			}
																			{	/* Ast/sexp.scm 572 */
																				obj_t BgL_arg4043z00_1806;

																				obj_t BgL_arg4044z00_1807;

																				{	/* Ast/sexp.scm 572 */
																					obj_t BgL_arg4045z00_1808;

																					obj_t BgL_arg4046z00_1809;

																					BgL_arg4045z00_1808 =
																						CNST_TABLE_REF(((long) 32));
																					{	/* Ast/sexp.scm 572 */
																						obj_t BgL_list4047z00_1810;

																						BgL_list4047z00_1810 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg4046z00_1809 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(CNST_TABLE_REF(((long) 33)),
																							BgL_list4047z00_1810);
																					}
																					BgL_arg4043z00_1806 =
																						MAKE_PAIR(BgL_arg4045z00_1808,
																						BgL_arg4046z00_1809);
																				}
																				{	/* Ast/sexp.scm 572 */
																					obj_t BgL_auxz00_4610;

																					{	/* Ast/sexp.scm 572 */
																						obj_t BgL_pairz00_2819;

																						BgL_pairz00_2819 = BgL_expz00_22;
																						BgL_auxz00_4610 =
																							CDR(CDR(BgL_pairz00_2819));
																					}
																					BgL_arg4044z00_1807 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_auxz00_4610, BNIL);
																				}
																				BgL_arg4041z00_1804 =
																					MAKE_PAIR(BgL_arg4043z00_1806,
																					BgL_arg4044z00_1807);
																			}
																			return
																				BGl_pragmazf2typezd2ze3nodezc3zzast_pragmaz00
																				(((bool_t) 1),
																				(obj_t) (BgL_arg4040z00_1803),
																				(BgL_typez00_bglt) (BgL_typez00_1782),
																				BgL_arg4041z00_1804, BgL_stackz00_23,
																				BgL_locz00_1778, BgL_sitez00_25);
																		}
																	else
																		{	/* Ast/sexp.scm 567 */
																			return
																				BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																				(BGl_string4269z00zzast_sexpz00,
																				BgL_expz00_22,
																				BGl_findzd2locationzf2locz20zztools_locationz00
																				(BgL_expz00_22, BgL_locz00_1778));
																		}
																}
															else
																{	/* Ast/sexp.scm 553 */
																	if (
																		(BgL_idz00_1781 ==
																			CNST_TABLE_REF(((long) 18))))
																		{
																			obj_t BgL_argsz00_1817;

																			obj_t BgL_bodyz00_1818;

																			if (PAIRP(BgL_expz00_22))
																				{	/* Ast/sexp.scm 575 */
																					obj_t BgL_cdrzd22671zd2_1823;

																					BgL_cdrzd22671zd2_1823 =
																						CDR(BgL_expz00_22);
																					if (PAIRP(BgL_cdrzd22671zd2_1823))
																						{	/* Ast/sexp.scm 575 */
																							BgL_argsz00_1817 =
																								CAR(BgL_cdrzd22671zd2_1823);
																							BgL_bodyz00_1818 =
																								CDR(BgL_cdrzd22671zd2_1823);
																							{	/* Ast/sexp.scm 577 */
																								obj_t BgL_locz00_1827;

																								BgL_locz00_1827 =
																									BGl_findzd2locationzf2locz20zztools_locationz00
																									(BgL_expz00_22,
																									BgL_locz00_1778);
																								{	/* Ast/sexp.scm 577 */
																									obj_t BgL_funz00_1828;

																									BgL_funz00_1828 =
																										BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																										(BGl_gensymz00zz__r4_symbols_6_4z00
																										(CNST_TABLE_REF(((long)
																													18))));
																									{	/* Ast/sexp.scm 578 */
																										obj_t BgL_tfunz00_1829;

																										{	/* Ast/sexp.scm 579 */
																											obj_t BgL_arg4072z00_1844;

																											{
																												BgL_typez00_bglt
																													BgL_auxz00_4632;
																												BgL_auxz00_4632 =
																													(BgL_typez00_bglt)
																													(BgL_typez00_1782);
																												BgL_arg4072z00_1844 =
																													(((BgL_typez00_bglt)
																														CREF
																														(BgL_auxz00_4632))->
																													BgL_idz00);
																											}
																											BgL_tfunz00_1829 =
																												BGl_makezd2typedzd2identz00zzast_identz00
																												(BgL_funz00_1828,
																												BgL_arg4072z00_1844);
																										}
																										{	/* Ast/sexp.scm 579 */

																											{	/* Ast/sexp.scm 581 */
																												obj_t
																													BgL_arg4058z00_1830;
																												{	/* Ast/sexp.scm 581 */
																													obj_t
																														BgL_arg4059z00_1831;
																													obj_t
																														BgL_arg4060z00_1832;
																													BgL_arg4059z00_1831 =
																														BGl_labelszd2symzd2zzast_labelsz00
																														();
																													{	/* Ast/sexp.scm 581 */
																														obj_t
																															BgL_arg4061z00_1833;
																														{	/* Ast/sexp.scm 581 */
																															obj_t
																																BgL_arg4065z00_1837;
																															{	/* Ast/sexp.scm 581 */
																																obj_t
																																	BgL_arg4067z00_1839;
																																{	/* Ast/sexp.scm 581 */
																																	obj_t
																																		BgL_arg4068z00_1840;
																																	BgL_arg4068z00_1840
																																		=
																																		BGl_normaliza7ezd2prognz75zztools_prognz00
																																		(BgL_bodyz00_1818);
																																	{	/* Ast/sexp.scm 581 */
																																		obj_t
																																			BgL_list4070z00_1842;
																																		{	/* Ast/sexp.scm 581 */
																																			obj_t
																																				BgL_arg4071z00_1843;
																																			BgL_arg4071z00_1843
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_list4070z00_1842
																																				=
																																				MAKE_PAIR
																																				(BgL_arg4068z00_1840,
																																				BgL_arg4071z00_1843);
																																		}
																																		BgL_arg4067z00_1839
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_argsz00_1817,
																																			BgL_list4070z00_1842);
																																}}
																																BgL_arg4065z00_1837
																																	=
																																	MAKE_PAIR
																																	(BgL_tfunz00_1829,
																																	BgL_arg4067z00_1839);
																															}
																															BgL_arg4061z00_1833
																																=
																																MAKE_PAIR
																																(BgL_arg4065z00_1837,
																																BNIL);
																														}
																														{	/* Ast/sexp.scm 581 */
																															obj_t
																																BgL_list4063z00_1835;
																															{	/* Ast/sexp.scm 581 */
																																obj_t
																																	BgL_arg4064z00_1836;
																																BgL_arg4064z00_1836
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_list4063z00_1835
																																	=
																																	MAKE_PAIR
																																	(BgL_funz00_1828,
																																	BgL_arg4064z00_1836);
																															}
																															BgL_arg4060z00_1832
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_arg4061z00_1833,
																																BgL_list4063z00_1835);
																													}}
																													BgL_arg4058z00_1830 =
																														MAKE_PAIR
																														(BgL_arg4059z00_1831,
																														BgL_arg4060z00_1832);
																												}
																												return
																													BGl_sexpzd2ze3nodez31zzast_sexpz00
																													(BgL_arg4058z00_1830,
																													BgL_stackz00_23,
																													BgL_locz00_1827,
																													BgL_sitez00_25);
																											}
																										}
																									}
																								}
																							}
																						}
																					else
																						{	/* Ast/sexp.scm 575 */
																						BgL_tagzd22664zd2_1820:
																							return
																								BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																								(BGl_string4253z00zzast_sexpz00,
																								BgL_expz00_22, BgL_locz00_1778);
																						}
																				}
																			else
																				{	/* Ast/sexp.scm 575 */
																					goto BgL_tagzd22664zd2_1820;
																				}
																		}
																	else
																		{	/* Ast/sexp.scm 553 */
																			return
																				BGl_applicationzd2ze3nodez31zzast_appz00
																				(BgL_expz00_22, BgL_stackz00_23,
																				BgL_locz00_1778, BgL_sitez00_25);
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
					{	/* Ast/sexp.scm 548 */
						return
							BGl_applicationzd2ze3nodez31zzast_appz00(BgL_expz00_22,
							BgL_stackz00_23, BgL_locz00_1778, BgL_sitez00_25);
					}
			}
		}
	}



/* sexp*->node */
	BGL_EXPORTED_DEF obj_t BGl_sexpza2zd2ze3nodez93zzast_sexpz00(obj_t
		BgL_expza2za2_26, obj_t BgL_stackz00_27, obj_t BgL_locz00_28,
		obj_t BgL_sitez00_29)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 595 */
			{
				obj_t BgL_expsz00_1848;

				obj_t BgL_resz00_1849;

				obj_t BgL_locz00_1850;

				BgL_expsz00_1848 = BgL_expza2za2_26;
				BgL_resz00_1849 = BNIL;
				BgL_locz00_1850 = BgL_locz00_28;
			BgL_zc3anonymousza34074ze3z83_1851:
				if (NULLP(BgL_expsz00_1848))
					{	/* Ast/sexp.scm 600 */
						return
							(obj_t) (BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
							(BGl_string4270z00zzast_sexpz00, BgL_expsz00_1848,
								BgL_locz00_1850));
					}
				else
					{	/* Ast/sexp.scm 600 */
						if (NULLP(CDR(BgL_expsz00_1848)))
							{	/* Ast/sexp.scm 603 */
								obj_t BgL_locz00_1854;

								obj_t BgL_nsitez00_1855;

								BgL_locz00_1854 =
									BGl_findzd2locationzf2locz20zztools_locationz00(CAR
									(BgL_expsz00_1848),
									BGl_findzd2locationzf2locz20zztools_locationz00
									(BgL_expsz00_1848, BgL_locz00_1850));
								if ((BgL_sitez00_29 == CNST_TABLE_REF(((long) 11))))
									{	/* Ast/sexp.scm 605 */
										BgL_nsitez00_1855 = CNST_TABLE_REF(((long) 2));
									}
								else
									{	/* Ast/sexp.scm 605 */
										BgL_nsitez00_1855 = BgL_sitez00_29;
									}
								{	/* Ast/sexp.scm 606 */
									obj_t BgL_arg4077z00_1856;

									{	/* Ast/sexp.scm 606 */
										BgL_nodez00_bglt BgL_arg4078z00_1857;

										BgL_arg4078z00_1857 =
											BGl_sexpzd2ze3nodez31zzast_sexpz00(CAR(BgL_expsz00_1848),
											BgL_stackz00_27, BgL_locz00_1854, BgL_nsitez00_1855);
										BgL_arg4077z00_1856 =
											MAKE_PAIR((obj_t) (BgL_arg4078z00_1857), BgL_resz00_1849);
									}
									return bgl_reverse_bang(BgL_arg4077z00_1856);
								}
							}
						else
							{	/* Ast/sexp.scm 608 */
								obj_t BgL_locz00_1862;

								BgL_locz00_1862 =
									BGl_findzd2locationzf2locz20zztools_locationz00(CAR
									(BgL_expsz00_1848),
									BGl_findzd2locationzf2locz20zztools_locationz00
									(BgL_expsz00_1848, BgL_locz00_1850));
								{	/* Ast/sexp.scm 610 */
									obj_t BgL_arg4083z00_1863;

									obj_t BgL_arg4084z00_1864;

									BgL_arg4083z00_1863 = CDR(BgL_expsz00_1848);
									{	/* Ast/sexp.scm 611 */
										BgL_nodez00_bglt BgL_arg4085z00_1865;

										{	/* Ast/sexp.scm 611 */
											obj_t BgL_arg4086z00_1866;

											obj_t BgL_arg4087z00_1867;

											BgL_arg4086z00_1866 = CAR(BgL_expsz00_1848);
											BgL_arg4087z00_1867 = CNST_TABLE_REF(((long) 2));
											BgL_arg4085z00_1865 =
												BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg4086z00_1866,
												BgL_stackz00_27, BgL_locz00_1862, BgL_arg4087z00_1867);
										}
										BgL_arg4084z00_1864 =
											MAKE_PAIR((obj_t) (BgL_arg4085z00_1865), BgL_resz00_1849);
									}
									{
										obj_t BgL_locz00_4683;

										obj_t BgL_resz00_4682;

										obj_t BgL_expsz00_4681;

										BgL_expsz00_4681 = BgL_arg4083z00_1863;
										BgL_resz00_4682 = BgL_arg4084z00_1864;
										BgL_locz00_4683 = BgL_locz00_1862;
										BgL_locz00_1850 = BgL_locz00_4683;
										BgL_resz00_1849 = BgL_resz00_4682;
										BgL_expsz00_1848 = BgL_expsz00_4681;
										goto BgL_zc3anonymousza34074ze3z83_1851;
									}
								}
							}
					}
			}
		}
	}



/* _sexp*->node */
	obj_t BGl__sexpza2zd2ze3nodez93zzast_sexpz00(obj_t BgL_envz00_2932,
		obj_t BgL_expza2za2_2933, obj_t BgL_stackz00_2934, obj_t BgL_locz00_2935,
		obj_t BgL_sitez00_2936)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 595 */
			return
				BGl_sexpza2zd2ze3nodez93zzast_sexpz00(BgL_expza2za2_2933,
				BgL_stackz00_2934, BgL_locz00_2935, BgL_sitez00_2936);
		}
	}



/* lookup */
	obj_t BGl_lookupz00zzast_sexpz00(obj_t BgL_namez00_30, obj_t BgL_stackz00_31)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 624 */
			{	/* Ast/sexp.scm 625 */
				bool_t BgL_testz00_4685;

				if ((BgL_namez00_30 == BGl_za2cachezd2nameza2zd2zzast_sexpz00))
					{	/* Ast/sexp.scm 625 */
						BgL_testz00_4685 =
							(BgL_stackz00_31 == BGl_za2cachezd2stackza2zd2zzast_sexpz00);
					}
				else
					{	/* Ast/sexp.scm 625 */
						BgL_testz00_4685 = ((bool_t) 0);
					}
				if (BgL_testz00_4685)
					{	/* Ast/sexp.scm 625 */
						return BGl_za2cachezd2resza2zd2zzast_sexpz00;
					}
				else
					{	/* Ast/sexp.scm 625 */
						BGl_za2cachezd2nameza2zd2zzast_sexpz00 = BgL_namez00_30;
						BGl_za2cachezd2stackza2zd2zzast_sexpz00 = BgL_stackz00_31;
						{
							obj_t BgL_stackz00_1874;

							BgL_stackz00_1874 = BgL_stackz00_31;
						BgL_zc3anonymousza34093ze3z83_1875:
							if (NULLP(BgL_stackz00_1874))
								{	/* Ast/sexp.scm 633 */
									BGl_za2cachezd2resza2zd2zzast_sexpz00 = BFALSE;
									return BFALSE;
								}
							else
								{	/* Ast/sexp.scm 636 */
									bool_t BgL_testz00_4691;

									{	/* Ast/sexp.scm 636 */
										obj_t BgL_auxz00_4692;

										{	/* Ast/sexp.scm 636 */
											BgL_variablez00_bglt BgL_obj1691z00_2841;

											{	/* Ast/sexp.scm 636 */
												obj_t BgL_pairz00_2840;

												BgL_pairz00_2840 = BgL_stackz00_1874;
												BgL_obj1691z00_2841 =
													(BgL_variablez00_bglt) (CAR(BgL_pairz00_2840));
											}
											BgL_auxz00_4692 =
												(((BgL_variablez00_bglt) CREF(BgL_obj1691z00_2841))->
												BgL_idz00);
										}
										BgL_testz00_4691 = (BgL_auxz00_4692 == BgL_namez00_30);
									}
									if (BgL_testz00_4691)
										{	/* Ast/sexp.scm 636 */
											BGl_za2cachezd2resza2zd2zzast_sexpz00 =
												CAR(BgL_stackz00_1874);
											return CAR(BgL_stackz00_1874);
										}
									else
										{
											obj_t BgL_stackz00_4699;

											BgL_stackz00_4699 = CDR(BgL_stackz00_1874);
											BgL_stackz00_1874 = BgL_stackz00_4699;
											goto BgL_zc3anonymousza34093ze3z83_1875;
										}
								}
						}
					}
			}
		}
	}



/* use-variable! */
	BGL_EXPORTED_DEF obj_t
		BGl_usezd2variablez12zc0zzast_sexpz00(BgL_variablez00_bglt BgL_varz00_32,
		obj_t BgL_locz00_33, obj_t BgL_sitez00_34)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 645 */
			if ((BgL_sitez00_34 == CNST_TABLE_REF(((long) 5))))
				{	/* Ast/sexp.scm 648 */
					BgL_variablez00_bglt BgL_obj1704z00_2845;

					obj_t BgL_val1703z00_2846;

					BgL_obj1704z00_2845 = BgL_varz00_32;
					BgL_val1703z00_2846 = CNST_TABLE_REF(((long) 34));
					((((BgL_variablez00_bglt) CREF(BgL_obj1704z00_2845))->BgL_accessz00) =
						((obj_t) BgL_val1703z00_2846), BUNSPEC);
				}
			else
				{	/* Ast/sexp.scm 647 */
					BFALSE;
				}
			{	/* Ast/sexp.scm 649 */
				BgL_valuez00_bglt BgL_valz00_1884;

				BgL_valz00_1884 =
					(((BgL_variablez00_bglt) CREF(BgL_varz00_32))->BgL_valuez00);
				{	/* Ast/sexp.scm 650 */
					bool_t BgL_testz00_4707;

					if ((BgL_sitez00_34 == CNST_TABLE_REF(((long) 5))))
						{	/* Ast/sexp.scm 650 */
							obj_t BgL_obj1946z00_2848;

							BgL_obj1946z00_2848 = (obj_t) (BgL_valz00_1884);
							BgL_testz00_4707 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj1946z00_2848,
								BGl_funz00zzast_varz00);
						}
					else
						{	/* Ast/sexp.scm 650 */
							BgL_testz00_4707 = ((bool_t) 0);
						}
					if (BgL_testz00_4707)
						{	/* Ast/sexp.scm 651 */
							obj_t BgL_arg4103z00_1887;

							BgL_arg4103z00_1887 =
								BGl_shapez00zztools_shapez00((obj_t) (BgL_varz00_32));
							return
								(obj_t) (BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
								(BGl_string4271z00zzast_sexpz00, BgL_arg4103z00_1887,
									BgL_locz00_33));
						}
					else
						{	/* Ast/sexp.scm 650 */
							return BFALSE;
						}
				}
			}
		}
	}



/* _use-variable! */
	obj_t BGl__usezd2variablez12zc0zzast_sexpz00(obj_t BgL_envz00_2937,
		obj_t BgL_varz00_2938, obj_t BgL_locz00_2939, obj_t BgL_sitez00_2940)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 645 */
			return
				BGl_usezd2variablez12zc0zzast_sexpz00(
				(BgL_variablez00_bglt) (BgL_varz00_2938), BgL_locz00_2939,
				BgL_sitez00_2940);
		}
	}



/* error-sexp->node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(obj_t BgL_msgz00_35,
		obj_t BgL_expz00_36, obj_t BgL_locz00_37)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 656 */
			{	/* Ast/sexp.scm 658 */
				obj_t BgL_arg4105z00_1889;

				BgL_nodez00_bglt BgL_arg4106z00_1890;

				BgL_arg4105z00_1889 =
					BGl_shapez00zztools_shapez00(BGl_currentzd2functionzd2zztools_errorz00
					());
				BgL_arg4106z00_1890 =
					BGl_sexpzd2ze3nodez31zzast_sexpz00(CNST_TABLE_REF(((long) 30)), BNIL,
					BgL_locz00_37, CNST_TABLE_REF(((long) 2)));
				{	/* Ast/sexp.scm 657 */
					obj_t BgL_list4107z00_1891;

					BgL_list4107z00_1891 = MAKE_PAIR((obj_t) (BgL_arg4106z00_1890), BNIL);
					return
						(BgL_nodez00_bglt) (BGl_userzd2errorzf2locationz20zztools_errorz00
						(BgL_locz00_37, BgL_arg4105z00_1889, BgL_msgz00_35, BgL_expz00_36,
							BgL_list4107z00_1891));
				}
			}
		}
	}



/* _error-sexp->node */
	obj_t BGl__errorzd2sexpzd2ze3nodeze3zzast_sexpz00(obj_t BgL_envz00_2941,
		obj_t BgL_msgz00_2942, obj_t BgL_expz00_2943, obj_t BgL_locz00_2944)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 656 */
			return
				(obj_t) (BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(BgL_msgz00_2942,
					BgL_expz00_2943, BgL_locz00_2944));
		}
	}



/* define-primop-ref->node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_definezd2primopzd2refzd2ze3nodez31zzast_sexpz00(BgL_globalz00_bglt
		BgL_globalz00_38, BgL_nodez00_bglt BgL_refz00_39)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 666 */
			{	/* Ast/sexp.scm 667 */
				BgL_nodez00_bglt BgL_funz00_1893;

				BgL_funz00_1893 =
					BGl_sexpzd2ze3nodez31zzast_sexpz00(CNST_TABLE_REF(((long) 35)), BNIL,
					BFALSE, CNST_TABLE_REF(((long) 11)));
				{	/* Ast/sexp.scm 668 */
					bool_t BgL_testz00_4733;

					{	/* Ast/sexp.scm 668 */
						obj_t BgL_obj2259z00_2849;

						BgL_obj2259z00_2849 = (obj_t) (BgL_funz00_1893);
						BgL_testz00_4733 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj2259z00_2849,
							BGl_varz00zzast_nodez00);
					}
					if (BgL_testz00_4733)
						{	/* Ast/sexp.scm 669 */
							obj_t BgL_arg4111z00_1896;

							{	/* Ast/sexp.scm 671 */
								BgL_nodez00_bglt BgL_arg4112z00_1897;

								{	/* Ast/sexp.scm 671 */
									obj_t BgL_arg4115z00_1900;

									obj_t BgL_arg4117z00_1902;

									{	/* Ast/sexp.scm 671 */
										obj_t BgL_arg4118z00_1903;

										obj_t BgL_arg4119z00_1904;

										BgL_arg4118z00_1903 = CNST_TABLE_REF(((long) 13));
										{	/* Ast/sexp.scm 671 */
											obj_t BgL_arg4120z00_1905;

											{
												BgL_variablez00_bglt BgL_auxz00_4737;

												BgL_auxz00_4737 =
													(BgL_variablez00_bglt) (BgL_globalz00_38);
												BgL_arg4120z00_1905 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_4737))->
													BgL_idz00);
											}
											{	/* Ast/sexp.scm 671 */
												obj_t BgL_list4122z00_1907;

												BgL_list4122z00_1907 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg4119z00_1904 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg4120z00_1905, BgL_list4122z00_1907);
										}}
										BgL_arg4115z00_1900 =
											MAKE_PAIR(BgL_arg4118z00_1903, BgL_arg4119z00_1904);
									}
									BgL_arg4117z00_1902 = CNST_TABLE_REF(((long) 2));
									BgL_arg4112z00_1897 =
										BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg4115z00_1900,
										BNIL, BFALSE, BgL_arg4117z00_1902);
								}
								{	/* Ast/sexp.scm 671 */
									obj_t BgL_list4113z00_1898;

									{	/* Ast/sexp.scm 671 */
										obj_t BgL_arg4114z00_1899;

										BgL_arg4114z00_1899 =
											MAKE_PAIR((obj_t) (BgL_refz00_39), BNIL);
										BgL_list4113z00_1898 =
											MAKE_PAIR(
											(obj_t) (BgL_arg4112z00_1897), BgL_arg4114z00_1899);
									}
									BgL_arg4111z00_1896 = BgL_list4113z00_1898;
							}}
							return
								(BgL_nodez00_bglt) (BGl_makezd2appzd2zzast_nodez00(BFALSE,
									(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00), BUNSPEC,
									BINT(((long) -1)),
									(BgL_varz00_bglt) (BgL_funz00_1893), BgL_arg4111z00_1896));
						}
					else
						{	/* Ast/sexp.scm 668 */
							return BgL_funz00_1893;
						}
				}
			}
		}
	}



/* _define-primop-ref->node */
	obj_t BGl__definezd2primopzd2refzd2ze3nodez31zzast_sexpz00(obj_t
		BgL_envz00_2945, obj_t BgL_globalz00_2946, obj_t BgL_refz00_2947)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 666 */
			return
				(obj_t) (BGl_definezd2primopzd2refzd2ze3nodez31zzast_sexpz00(
					(BgL_globalz00_bglt) (BgL_globalz00_2946),
					(BgL_nodez00_bglt) (BgL_refz00_2947)));
		}
	}



/* define-primop->node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_definezd2primopzd2ze3nodeze3zzast_sexpz00(BgL_globalz00_bglt
		BgL_globalz00_40)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 681 */
			BGl_usezd2variablez12zc0zzast_sexpz00(
				(BgL_variablez00_bglt) (BgL_globalz00_40), BFALSE,
				CNST_TABLE_REF(((long) 2)));
			{	/* Ast/sexp.scm 683 */
				BgL_nodez00_bglt BgL_funz00_1908;

				BgL_funz00_1908 =
					BGl_sexpzd2ze3nodez31zzast_sexpz00(CNST_TABLE_REF(((long) 36)), BNIL,
					BFALSE, CNST_TABLE_REF(((long) 11)));
				{	/* Ast/sexp.scm 684 */
					bool_t BgL_testz00_4764;

					{	/* Ast/sexp.scm 684 */
						obj_t BgL_obj2259z00_2853;

						BgL_obj2259z00_2853 = (obj_t) (BgL_funz00_1908);
						BgL_testz00_4764 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj2259z00_2853,
							BGl_varz00zzast_nodez00);
					}
					if (BgL_testz00_4764)
						{	/* Ast/sexp.scm 685 */
							obj_t BgL_arg4125z00_1911;

							{	/* Ast/sexp.scm 687 */
								BgL_nodez00_bglt BgL_arg4126z00_1912;

								BgL_nodez00_bglt BgL_arg4127z00_1913;

								{	/* Ast/sexp.scm 687 */
									obj_t BgL_arg4130z00_1916;

									obj_t BgL_arg4132z00_1918;

									{	/* Ast/sexp.scm 687 */
										obj_t BgL_arg4133z00_1919;

										obj_t BgL_arg4134z00_1920;

										BgL_arg4133z00_1919 = CNST_TABLE_REF(((long) 13));
										{	/* Ast/sexp.scm 687 */
											obj_t BgL_arg4135z00_1921;

											{
												BgL_variablez00_bglt BgL_auxz00_4768;

												BgL_auxz00_4768 =
													(BgL_variablez00_bglt) (BgL_globalz00_40);
												BgL_arg4135z00_1921 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_4768))->
													BgL_idz00);
											}
											{	/* Ast/sexp.scm 687 */
												obj_t BgL_list4137z00_1923;

												BgL_list4137z00_1923 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg4134z00_1920 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg4135z00_1921, BgL_list4137z00_1923);
										}}
										BgL_arg4130z00_1916 =
											MAKE_PAIR(BgL_arg4133z00_1919, BgL_arg4134z00_1920);
									}
									BgL_arg4132z00_1918 = CNST_TABLE_REF(((long) 2));
									BgL_arg4126z00_1912 =
										BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg4130z00_1916,
										BNIL, BFALSE, BgL_arg4132z00_1918);
								}
								BgL_arg4127z00_1913 =
									BGl_sexpzd2ze3nodez31zzast_sexpz00(
									(obj_t) (BgL_globalz00_40), BNIL, BFALSE,
									CNST_TABLE_REF(((long) 2)));
								{	/* Ast/sexp.scm 687 */
									obj_t BgL_list4128z00_1914;

									{	/* Ast/sexp.scm 687 */
										obj_t BgL_arg4129z00_1915;

										BgL_arg4129z00_1915 =
											MAKE_PAIR((obj_t) (BgL_arg4127z00_1913), BNIL);
										BgL_list4128z00_1914 =
											MAKE_PAIR(
											(obj_t) (BgL_arg4126z00_1912), BgL_arg4129z00_1915);
									}
									BgL_arg4125z00_1911 = BgL_list4128z00_1914;
							}}
							return
								(BgL_nodez00_bglt) (BGl_makezd2appzd2zzast_nodez00(BFALSE,
									(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00), BUNSPEC,
									BINT(((long) -1)),
									(BgL_varz00_bglt) (BgL_funz00_1908), BgL_arg4125z00_1911));
						}
					else
						{	/* Ast/sexp.scm 684 */
							return BgL_funz00_1908;
						}
				}
			}
		}
	}



/* _define-primop->node */
	obj_t BGl__definezd2primopzd2ze3nodeze3zzast_sexpz00(obj_t BgL_envz00_2948,
		obj_t BgL_globalz00_2949)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 681 */
			return
				(obj_t) (BGl_definezd2primopzd2ze3nodeze3zzast_sexpz00(
					(BgL_globalz00_bglt) (BgL_globalz00_2949)));
		}
	}



/* location->node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_locationzd2ze3nodez31zzast_sexpz00(BgL_globalz00_bglt BgL_globalz00_41)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 700 */
			BGl_usezd2variablez12zc0zzast_sexpz00(
				(BgL_variablez00_bglt) (BgL_globalz00_41), BFALSE,
				CNST_TABLE_REF(((long) 2)));
			{	/* Ast/sexp.scm 702 */
				BgL_nodez00_bglt BgL_funz00_1924;

				BgL_funz00_1924 =
					BGl_sexpzd2ze3nodez31zzast_sexpz00(CNST_TABLE_REF(((long) 37)), BNIL,
					BFALSE, CNST_TABLE_REF(((long) 11)));
				{	/* Ast/sexp.scm 703 */
					bool_t BgL_testz00_4797;

					{	/* Ast/sexp.scm 703 */
						obj_t BgL_obj2259z00_2857;

						BgL_obj2259z00_2857 = (obj_t) (BgL_funz00_1924);
						BgL_testz00_4797 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj2259z00_2857,
							BGl_varz00zzast_nodez00);
					}
					if (BgL_testz00_4797)
						{	/* Ast/sexp.scm 704 */
							obj_t BgL_exprz00_1926;

							{	/* Ast/sexp.scm 704 */
								bool_t BgL_testz00_4800;

								{	/* Ast/sexp.scm 704 */
									obj_t BgL_arg4148z00_1936;

									BgL_arg4148z00_1936 =
										BGl_thezd2backendzd2zzbackend_backendz00();
									{
										BgL_backendz00_bglt BgL_auxz00_4802;

										BgL_auxz00_4802 =
											(BgL_backendz00_bglt) (BgL_arg4148z00_1936);
										BgL_testz00_4800 =
											(((BgL_backendz00_bglt) CREF(BgL_auxz00_4802))->
											BgL_pragmazd2supportzd2);
									}
								}
								if (BgL_testz00_4800)
									{	/* Ast/sexp.scm 705 */
										obj_t BgL_arg4144z00_1932;

										obj_t BgL_arg4145z00_1933;

										BgL_arg4144z00_1932 = CNST_TABLE_REF(((long) 38));
										{	/* Ast/sexp.scm 705 */
											obj_t BgL_list4146z00_1934;

											{	/* Ast/sexp.scm 705 */
												obj_t BgL_arg4147z00_1935;

												BgL_arg4147z00_1935 = MAKE_PAIR(BNIL, BNIL);
												BgL_list4146z00_1934 =
													MAKE_PAIR(
													(obj_t) (BgL_globalz00_41), BgL_arg4147z00_1935);
											}
											BgL_arg4145z00_1933 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BGl_string4272z00zzast_sexpz00, BgL_list4146z00_1934);
										}
										BgL_exprz00_1926 =
											MAKE_PAIR(BgL_arg4144z00_1932, BgL_arg4145z00_1933);
									}
								else
									{	/* Ast/sexp.scm 704 */
										BgL_exprz00_1926 = (obj_t) (BgL_globalz00_41);
									}
							}
							{	/* Ast/sexp.scm 707 */
								obj_t BgL_arg4140z00_1928;

								{	/* Ast/sexp.scm 709 */
									BgL_nodez00_bglt BgL_arg4141z00_1929;

									BgL_arg4141z00_1929 =
										BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_exprz00_1926, BNIL,
										BFALSE, CNST_TABLE_REF(((long) 2)));
									{	/* Ast/sexp.scm 709 */
										obj_t BgL_list4142z00_1930;

										BgL_list4142z00_1930 =
											MAKE_PAIR((obj_t) (BgL_arg4141z00_1929), BNIL);
										BgL_arg4140z00_1928 = BgL_list4142z00_1930;
								}}
								return
									(BgL_nodez00_bglt) (BGl_makezd2appzd2zzast_nodez00(BFALSE,
										(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00),
										BUNSPEC, BINT(((long) -1)),
										(BgL_varz00_bglt) (BgL_funz00_1924), BgL_arg4140z00_1928));
						}}
					else
						{	/* Ast/sexp.scm 703 */
							return BgL_funz00_1924;
						}
				}
			}
		}
	}



/* _location->node */
	obj_t BGl__locationzd2ze3nodez31zzast_sexpz00(obj_t BgL_envz00_2950,
		obj_t BgL_globalz00_2951)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 700 */
			return
				(obj_t) (BGl_locationzd2ze3nodez31zzast_sexpz00(
					(BgL_globalz00_bglt) (BgL_globalz00_2951)));
		}
	}



/* make-anonymous-name */
	BGL_EXPORTED_DEF obj_t BGl_makezd2anonymouszd2namez00zzast_sexpz00(obj_t
		BgL_locz00_42, obj_t BgL_prefz00_43)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 715 */
			{	/* Ast/sexp.scm 716 */
				obj_t BgL_prefz00_1937;

				{	/* Ast/sexp.scm 716 */
					bool_t BgL_testz00_4824;

					if (PAIRP(BgL_prefz00_43))
						{	/* Ast/sexp.scm 716 */
							obj_t BgL_auxz00_4827;

							BgL_auxz00_4827 = CAR(BgL_prefz00_43);
							BgL_testz00_4824 = STRINGP(BgL_auxz00_4827);
						}
					else
						{	/* Ast/sexp.scm 716 */
							BgL_testz00_4824 = ((bool_t) 0);
						}
					if (BgL_testz00_4824)
						{	/* Ast/sexp.scm 716 */
							BgL_prefz00_1937 = CAR(BgL_prefz00_43);
						}
					else
						{	/* Ast/sexp.scm 716 */
							BgL_prefz00_1937 = BGl_string4273z00zzast_sexpz00;
						}
				}
				{	/* Ast/sexp.scm 719 */
					bool_t BgL_testz00_4831;

					if (STRUCTP(BgL_locz00_42))
						{	/* Ast/sexp.scm 719 */
							BgL_testz00_4831 =
								(STRUCT_KEY(BgL_locz00_42) == CNST_TABLE_REF(((long) 6)));
						}
					else
						{	/* Ast/sexp.scm 719 */
							BgL_testz00_4831 = ((bool_t) 0);
						}
					if (BgL_testz00_4831)
						{	/* Ast/sexp.scm 720 */
							obj_t BgL_filez00_1939;

							obj_t BgL_linez00_1940;

							obj_t BgL_basez00_1941;

							BgL_filez00_1939 =
								BGl_locationzd2fullzd2fnamez00zztools_locationz00
								(BgL_locz00_42);
							BgL_linez00_1940 = STRUCT_REF(BgL_locz00_42, (int) (((long) 2)));
							{	/* Ast/sexp.scm 722 */
								obj_t BgL_arg4172z00_1966;

								BgL_arg4172z00_1966 =
									BGl_gensymz00zz__r4_symbols_6_4z00(string_append_3
									(BGl_string4274z00zzast_sexpz00, BgL_prefz00_1937,
										BGl_string4275z00zzast_sexpz00));
								{	/* Ast/sexp.scm 722 */
									obj_t BgL_res4247z00_2877;

									{	/* Ast/sexp.scm 722 */
										obj_t BgL_symbolz00_2875;

										BgL_symbolz00_2875 = BgL_arg4172z00_1966;
										{	/* Ast/sexp.scm 722 */
											obj_t BgL_arg2063z00_2876;

											BgL_arg2063z00_2876 =
												SYMBOL_TO_STRING(BgL_symbolz00_2875);
											BgL_res4247z00_2877 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_2876);
									}}
									BgL_basez00_1941 = BgL_res4247z00_2877;
							}}
							{	/* Ast/sexp.scm 724 */
								bool_t BgL_testz00_4844;

								{	/* Ast/sexp.scm 724 */
									bool_t BgL_testz00_4845;

									if (
										((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >=
											((long) 1)))
										{	/* Ast/sexp.scm 725 */
											obj_t BgL_arg4169z00_1963;

											obj_t BgL_arg4170z00_1964;

											BgL_arg4169z00_1963 = CNST_TABLE_REF(((long) 39));
											{	/* Ast/sexp.scm 725 */
												obj_t BgL_arg4171z00_1965;

												BgL_arg4171z00_1965 =
													BGl_thezd2backendzd2zzbackend_backendz00();
												{
													BgL_backendz00_bglt BgL_auxz00_4851;

													BgL_auxz00_4851 =
														(BgL_backendz00_bglt) (BgL_arg4171z00_1965);
													BgL_arg4170z00_1964 =
														(((BgL_backendz00_bglt) CREF(BgL_auxz00_4851))->
														BgL_debugzd2supportzd2);
											}}
											BgL_testz00_4845 =
												CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
												(BgL_arg4169z00_1963, BgL_arg4170z00_1964));
										}
									else
										{	/* Ast/sexp.scm 724 */
											BgL_testz00_4845 = ((bool_t) 0);
										}
									if (BgL_testz00_4845)
										{	/* Ast/sexp.scm 724 */
											BgL_testz00_4844 = ((bool_t) 1);
										}
									else
										{	/* Ast/sexp.scm 724 */
											BgL_testz00_4844 =
												(
												(long)
												CINT(BGl_za2compilerzd2debugza2zd2zzengine_paramz00) >=
												((long) 1));
								}}
								if (BgL_testz00_4844)
									{	/* Ast/sexp.scm 727 */
										obj_t BgL_filez00_1943;

										if (bigloo_strncmp(BgL_filez00_1939,
												BGl_string4276z00zzast_sexpz00, ((long) 2)))
											{	/* Ast/sexp.scm 727 */
												BgL_filez00_1943 =
													c_substring(BgL_filez00_1939, ((long) 2),
													STRING_LENGTH(BgL_filez00_1939));
											}
										else
											{	/* Ast/sexp.scm 727 */
												BgL_filez00_1943 = BgL_filez00_1939;
											}
										{	/* Ast/sexp.scm 731 */
											obj_t BgL_arg4151z00_1944;

											{	/* Ast/sexp.scm 731 */
												char *BgL_arg4154z00_1947;

												{	/* Ast/sexp.scm 732 */

													BgL_arg4154z00_1947 =
														BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
														(BgL_linez00_1940, BINT(((long) 10)));
												}
												{	/* Ast/sexp.scm 731 */
													obj_t BgL_list4156z00_1949;

													{	/* Ast/sexp.scm 731 */
														obj_t BgL_arg4158z00_1950;

														{	/* Ast/sexp.scm 731 */
															obj_t BgL_arg4159z00_1951;

															{	/* Ast/sexp.scm 731 */
																obj_t BgL_arg4160z00_1952;

																{	/* Ast/sexp.scm 731 */
																	obj_t BgL_arg4161z00_1953;

																	{	/* Ast/sexp.scm 731 */
																		obj_t BgL_arg4162z00_1954;

																		BgL_arg4162z00_1954 =
																			MAKE_PAIR(BGl_string4277z00zzast_sexpz00,
																			BNIL);
																		BgL_arg4161z00_1953 =
																			MAKE_PAIR(string_to_bstring
																			(BgL_arg4154z00_1947),
																			BgL_arg4162z00_1954);
																	}
																	BgL_arg4160z00_1952 =
																		MAKE_PAIR(BGl_string4275z00zzast_sexpz00,
																		BgL_arg4161z00_1953);
																}
																BgL_arg4159z00_1951 =
																	MAKE_PAIR(BgL_filez00_1943,
																	BgL_arg4160z00_1952);
															}
															BgL_arg4158z00_1950 =
																MAKE_PAIR(BGl_string4275z00zzast_sexpz00,
																BgL_arg4159z00_1951);
														}
														BgL_list4156z00_1949 =
															MAKE_PAIR(BgL_basez00_1941, BgL_arg4158z00_1950);
													}
													BgL_arg4151z00_1944 =
														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
														(BgL_list4156z00_1949);
											}}
											return
												string_to_symbol(BSTRING_TO_STRING
												(BgL_arg4151z00_1944));
										}
									}
								else
									{	/* Ast/sexp.scm 735 */
										obj_t BgL_arg4166z00_1960;

										BgL_arg4166z00_1960 =
											string_append(BgL_basez00_1941,
											BGl_string4277z00zzast_sexpz00);
										return
											string_to_symbol(BSTRING_TO_STRING(BgL_arg4166z00_1960));
									}
							}
						}
					else
						{	/* Ast/sexp.scm 736 */
							obj_t BgL_arg4174z00_1968;

							{	/* Ast/sexp.scm 736 */
								obj_t BgL_arg4175z00_1969;

								obj_t BgL_arg4176z00_1970;

								{	/* Ast/sexp.scm 736 */
									obj_t BgL_arg4180z00_1973;

									BgL_arg4180z00_1973 =
										BGl_gensymz00zz__r4_symbols_6_4z00(string_append_3
										(BGl_string4274z00zzast_sexpz00, BgL_prefz00_1937,
											BGl_string4278z00zzast_sexpz00));
									{	/* Ast/sexp.scm 736 */
										obj_t BgL_res4248z00_2894;

										{	/* Ast/sexp.scm 736 */
											obj_t BgL_symbolz00_2892;

											BgL_symbolz00_2892 = BgL_arg4180z00_1973;
											{	/* Ast/sexp.scm 736 */
												obj_t BgL_arg2063z00_2893;

												BgL_arg2063z00_2893 =
													SYMBOL_TO_STRING(BgL_symbolz00_2892);
												BgL_res4248z00_2894 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_2893);
											}
										}
										BgL_arg4175z00_1969 = BgL_res4248z00_2894;
									}
								}
								{	/* Ast/sexp.scm 736 */
									obj_t BgL_res4249z00_2897;

									{	/* Ast/sexp.scm 736 */
										obj_t BgL_symbolz00_2895;

										BgL_symbolz00_2895 = CNST_TABLE_REF(((long) 40));
										{	/* Ast/sexp.scm 736 */
											obj_t BgL_arg2063z00_2896;

											BgL_arg2063z00_2896 =
												SYMBOL_TO_STRING(BgL_symbolz00_2895);
											BgL_res4249z00_2897 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_2896);
									}}
									BgL_arg4176z00_1970 = BgL_res4249z00_2897;
								}
								{	/* Ast/sexp.scm 736 */
									obj_t BgL_list4177z00_1971;

									{	/* Ast/sexp.scm 736 */
										obj_t BgL_arg4178z00_1972;

										BgL_arg4178z00_1972 = MAKE_PAIR(BgL_arg4176z00_1970, BNIL);
										BgL_list4177z00_1971 =
											MAKE_PAIR(BgL_arg4175z00_1969, BgL_arg4178z00_1972);
									}
									BgL_arg4174z00_1968 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list4177z00_1971);
							}}
							return string_to_symbol(BSTRING_TO_STRING(BgL_arg4174z00_1968));
						}
				}
			}
		}
	}



/* _make-anonymous-name */
	obj_t BGl__makezd2anonymouszd2namez00zzast_sexpz00(obj_t BgL_envz00_2952,
		obj_t BgL_locz00_2953, obj_t BgL_prefz00_2954)
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 715 */
			return
				BGl_makezd2anonymouszd2namez00zzast_sexpz00(BgL_locz00_2953,
				BgL_prefz00_2954);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_sexpz00()
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_sexpz00()
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_sexpz00()
	{
		AN_OBJECT;
		{	/* Ast/sexp.scm 14 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 139728077),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 315398661),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 341705556),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zzast_buildz00(((long) 46924743),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zzast_pragmaz00(((long) 292906466),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zzast_labelsz00(((long) 365507801),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zzast_letz00(((long) 352861756),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zzast_exitz00(((long) 341189244),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zzast_appz00(((long) 271227279),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zzast_applyz00(((long) 121557513),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 453255680),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
			return
				BGl_modulezd2initializa7ationz75zzeffect_feffectz00(((long) 53594424),
				BSTRING_TO_STRING(BGl_string4279z00zzast_sexpz00));
		}
	}

#ifdef __cplusplus
}
#endif
