/*===========================================================================*/
/*   (Cfa/collect.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/collect.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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

	typedef struct BgL_appzd2lyzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}                  *BgL_appzd2lyzd2_bglt;

	typedef struct BgL_funcallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_strengthz00;
	}                 *BgL_funcallz00_bglt;

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

	typedef struct BgL_vallocz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2heapzd2formatz00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                *BgL_vallocz00_bglt;

	typedef struct BgL_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}              *BgL_castz00_bglt;

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

	typedef struct BgL_letzd2varzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_bindingsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
		bool_t BgL_removablezf3zf3;
	}                   *BgL_letzd2varzd2_bglt;

	typedef struct BgL_setzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                       *BgL_setzd2exzd2itz00_bglt;

	typedef struct BgL_jumpzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_exitz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                        *BgL_jumpzd2exzd2itz00_bglt;

	typedef struct BgL_makezd2boxzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                    *BgL_makezd2boxzd2_bglt;

	typedef struct BgL_boxzd2refzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_varz00;
	}                   *BgL_boxzd2refzd2_bglt;

	typedef struct BgL_boxzd2setz12zc0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                      *BgL_boxzd2setz12zc0_bglt;


	static obj_t BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_nodezd2collectz12zd2fail5372z12zzcfa_collectz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t
		BGl_wideningzd2prezd2makezd2procedurezd2appz00zzcfa_info2z00
		(BgL_variablez00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_nodezd2collectz12zd2select5374z12zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2collectz12zd2funcal5362z12zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__getzd2allocszd2zzcfa_collectz00(obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t
		BGl_arithmeticzd2operatorzf3z21zzcfa_specializa7eza7(BgL_globalz00_bglt);
	extern obj_t
		BGl_za2optimzd2cfazd2flonumzd2arithmeticzf3za2z21zzengine_paramz00;
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	static bool_t BGl_nodezd2collectza2z12z62zzcfa_collectz00(obj_t, obj_t);
	extern obj_t BGl_kwotezf2nodezf2zzcfa_infoz00;
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcfa_collectz00();
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern obj_t BGl_wideningzd2prezd2arithmeticzd2appzd2zzcfa_info2z00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_getzd2atypezd2zzcfa_collectz00(obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	extern obj_t BGl_vallocz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_collectz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_closurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_boxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_structz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_vectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_procedurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_specializa7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_arithmeticz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	static bool_t BGl_monomorphiczd2vectorzf3z21zzcfa_collectz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_collectz00();
	extern obj_t BGl_wideningzd2prezd2structzd2setz12zd2appz12zzcfa_info2z00();
	BGL_IMPORT int BGl_bigloozd2warningzd2zz__paramz00();
	static obj_t BGl_nodezd2collectz12zd2boxzd2se5386zc0zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_wideningzd2prezd2structzd2refzd2appz00zzcfa_info2z00();
	extern obj_t BGl_wideningzd2prezd2makezd2boxzd2zzcfa_infoz00();
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_wideningzd2kwotezf2nodez20zzcfa_infoz00(BgL_nodez00_bglt);
	extern obj_t BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00;
	static obj_t BGl_nodezd2collectz12zd2kwote5349z12zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_za2usedzd2allocza2zd2zzcfa_collectz00 = BUNSPEC;
	extern BgL_nodez00_bglt
		BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t
		BGl_wideningzd2prezd2valloczf2Cinfozf2zzcfa_info3z00(BgL_variablez00_bglt);
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_prezd2makezd2boxz00zzcfa_infoz00;
	static obj_t BGl_nodezd2collectz12zd2atom5347z12zzcfa_collectz00(obj_t, obj_t,
		obj_t);
	extern obj_t
		BGl_arithmeticzd2speczd2typesz00zzcfa_specializa7eza7(BgL_globalz00_bglt);
	static obj_t BGl_nodezd2collectz12zd2makezd2b5384zc0zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_nodezd2collectz12zd2defaul5344z12zzcfa_collectz00(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_nodezd2collectz12zd2setzd2ex5380zc0zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	extern bool_t BGl_vectorzd2optimzf3z21zzcfa_vectorz00();
	extern obj_t
		BGl_za2optimzd2cfazd2fixnumzd2arithmeticzf3za2z21zzengine_paramz00;
	static obj_t BGl_nodezd2collectz12zd2boxzd2re5388zc0zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_collectzd2allzd2approxz12z12zzcfa_collectz00(obj_t);
	extern obj_t
		BGl_wideningzd2prezd2makezd2structzd2appz00zzcfa_info2z00
		(BgL_variablez00_bglt);
	static obj_t BGl_methodzd2initzd2zzcfa_collectz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_nodezd2collectz12zd2letzd2fu5376zc0zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_collectz00 = BUNSPEC;
	static obj_t BGl_nodezd2collectz12zd2sequen5354z12zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_scnstz00zzast_varz00;
	extern obj_t BGl_addzd2funcallz12zc0zzcfa_closurez00(BgL_nodez00_bglt);
	static obj_t BGl_genericzd2initzd2zzcfa_collectz00();
	extern obj_t BGl_wideningzd2prezd2procedurezd2refzd2appz00zzcfa_info2z00();
	static obj_t BGl_nodezd2collectz12zd2app5356z12zzcfa_collectz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00;
	BGL_IMPORT obj_t BGl_bigloozd2warningzd2setz12z12zz__paramz00(int);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00;
	static obj_t BGl_nodezd2collectz12zd2cast5366z12zzcfa_collectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_collectz00();
	extern obj_t BGl_prezd2arithmeticzd2appz00zzcfa_info2z00;
	extern obj_t BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00;
	BGL_EXPORTED_DECL obj_t BGl_getzd2allocszd2zzcfa_collectz00();
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl__nodezd2collectz12zd2defaul5344z12zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2collectz12zd2letzd2va5378zc0zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2collectz12zd2extern5364z12zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00;
	extern obj_t BGl_wideningzd2prezd2procedurezd2setz12zd2appz12zzcfa_info2z00();
	static obj_t BGl_nodezd2collectz12zd2appzd2ly5360zc0zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_nodezd2collectz12zd2setq5368z12zzcfa_collectz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	static obj_t BGl_nodezd2collectz12zd2var5352z12zzcfa_collectz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	extern obj_t BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00;
	static obj_t BGl_nodezd2collectz12zd2valloc5358z12zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00;
	static obj_t BGl_nodezd2collectz12zd2condit5370z12zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__nodezd2collectz12zc0zzcfa_collectz00(obj_t, obj_t, obj_t);
	extern obj_t
		BGl_wideningzd2prezd2makezd2vectorzd2appz00zzcfa_info2z00
		(BgL_variablez00_bglt);
	static obj_t BGl__collectzd2allzd2approxz12z12zzcfa_collectz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_collectz00();
	static obj_t BGl_nodezd2collectz12zd2jumpzd2e5382zc0zzcfa_collectz00(obj_t,
		obj_t, obj_t);
	static obj_t __cnst[17];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nodezd2collectz12zd2defaul5344zd2envzc0zzcfa_collectz00,
		BgL_bgl__nodeza7d2collectza75736z00,
		BGl__nodezd2collectz12zd2defaul5344z12zzcfa_collectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_collectzd2allzd2approxz12zd2envzc0zzcfa_collectz00,
		BgL_bgl__collectza7d2allza7d5737z00,
		BGl__collectzd2allzd2approxz12z12zzcfa_collectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
		BgL_bgl__nodeza7d2collectza75738z00,
		BGl__nodezd2collectz12zc0zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5711z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715739z00,
		BGl_nodezd2collectz12zd2atom5347z12zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5712z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715740z00,
		BGl_nodezd2collectz12zd2kwote5349z12zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5713z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715741z00,
		BGl_nodezd2collectz12zd2var5352z12zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5714z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715742z00,
		BGl_nodezd2collectz12zd2sequen5354z12zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5715z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715743z00,
		BGl_nodezd2collectz12zd2app5356z12zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5716z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715744z00,
		BGl_nodezd2collectz12zd2valloc5358z12zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5717z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715745z00,
		BGl_nodezd2collectz12zd2appzd2ly5360zc0zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5718z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715746z00,
		BGl_nodezd2collectz12zd2funcal5362z12zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5720z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715747z00,
		BGl_nodezd2collectz12zd2cast5366z12zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5719z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715748z00,
		BGl_nodezd2collectz12zd2extern5364z12zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5721z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715749z00,
		BGl_nodezd2collectz12zd2setq5368z12zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5722z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715750z00,
		BGl_nodezd2collectz12zd2condit5370z12zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5723z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715751z00,
		BGl_nodezd2collectz12zd2fail5372z12zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5724z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715752z00,
		BGl_nodezd2collectz12zd2select5374z12zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5725z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715753z00,
		BGl_nodezd2collectz12zd2letzd2fu5376zc0zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5726z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715754z00,
		BGl_nodezd2collectz12zd2letzd2va5378zc0zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5727z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715755z00,
		BGl_nodezd2collectz12zd2setzd2ex5380zc0zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5728z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715756z00,
		BGl_nodezd2collectz12zd2jumpzd2e5382zc0zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5730z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715757z00,
		BGl_nodezd2collectz12zd2boxzd2se5386zc0zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5729z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715758z00,
		BGl_nodezd2collectz12zd2makezd2b5384zc0zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5731z00zzcfa_collectz00,
		BgL_bgl_nodeza7d2collectza715759z00,
		BGl_nodezd2collectz12zd2boxzd2re5388zc0zzcfa_collectz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string5710z00zzcfa_collectz00,
		BgL_bgl_string5710za700za7za7c5760za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string5709z00zzcfa_collectz00,
		BgL_bgl_string5709za700za7za7c5761za7, "node-collect!", 13);
	      DEFINE_STRING(BGl_string5732z00zzcfa_collectz00,
		BgL_bgl_string5732za700za7za7c5762za7, "cfa_collect", 11);
	      DEFINE_STRING(BGl_string5733z00zzcfa_collectz00,
		BgL_bgl_string5733za700za7za7c5763za7,
		"(pragma::obj \"\") c-struct-set! c-struct-ref c-make-struct $make-vector c-make-vector procedure-set! procedure-ref make-va-procedure make-fx-procedure c-eq? node-collect!-defaul5344 real string boolean char integer ",
		214);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2allocszd2envz00zzcfa_collectz00,
		BgL_bgl__getza7d2allocsza7d25764z00, BGl__getzd2allocszd2zzcfa_collectz00,
		0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_collectz00(long
		BgL_checksumz00_3265, char *BgL_fromz00_3266)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_collectz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_collectz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_collectz00();
					BGl_cnstzd2initzd2zzcfa_collectz00();
					BGl_importedzd2moduleszd2initz00zzcfa_collectz00();
					BGl_genericzd2initzd2zzcfa_collectz00();
					BGl_methodzd2initzd2zzcfa_collectz00();
					BGl_toplevelzd2initzd2zzcfa_collectz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_collectz00()
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_collect");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cfa_collect");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_collect");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0), "cfa_collect");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_collect");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_collectz00()
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 15 */
			{	/* Cfa/collect.scm 15 */
				obj_t BgL_cportz00_3255;

				BgL_cportz00_3255 =
					bgl_open_input_string(BGl_string5733z00zzcfa_collectz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_3256;

					BgL_iz00_3256 = ((long) 16);
				BgL_loopz00_3257:
					if ((BgL_iz00_3256 == ((long) -1)))
						{	/* Cfa/collect.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/collect.scm 15 */
							{	/* Cfa/collect.scm 15 */
								obj_t BgL_arg5735z00_3259;

								{	/* Cfa/collect.scm 15 */

									{	/* Cfa/collect.scm 15 */
										obj_t BgL_locationz00_3261;

										BgL_locationz00_3261 = BBOOL(((bool_t) 0));
										{	/* Cfa/collect.scm 15 */

											BgL_arg5735z00_3259 =
												BGl_readz00zz__readerz00(BgL_cportz00_3255,
												BgL_locationz00_3261);
										}
									}
								}
								{	/* Cfa/collect.scm 15 */
									int BgL_auxz00_3287;

									BgL_auxz00_3287 = (int) (BgL_iz00_3256);
									CNST_TABLE_SET(BgL_auxz00_3287, BgL_arg5735z00_3259);
							}}
							{	/* Cfa/collect.scm 15 */
								int BgL_auxz00_3262;

								BgL_auxz00_3262 = (int) ((BgL_iz00_3256 - ((long) 1)));
								{
									long BgL_iz00_3292;

									BgL_iz00_3292 = (long) (BgL_auxz00_3262);
									BgL_iz00_3256 = BgL_iz00_3292;
									goto BgL_loopz00_3257;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_collectz00()
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 15 */
			return (BGl_za2usedzd2allocza2zd2zzcfa_collectz00 = BNIL, BUNSPEC);
		}
	}



/* collect-all-approx! */
	BGL_EXPORTED_DEF obj_t BGl_collectzd2allzd2approxz12z12zzcfa_collectz00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 45 */
			{
				obj_t BgL_l5331z00_1269;

				{	/* Cfa/collect.scm 46 */
					bool_t BgL_auxz00_3294;

					BgL_l5331z00_1269 = BgL_globalsz00_1;
				BgL_zc3anonymousza35389ze3z83_1270:
					if (PAIRP(BgL_l5331z00_1269))
						{	/* Cfa/collect.scm 46 */
							{	/* Cfa/collect.scm 46 */
								obj_t BgL_globalz00_1272;

								BgL_globalz00_1272 = CAR(BgL_l5331z00_1269);
								{	/* Cfa/collect.scm 46 */
									BgL_valuez00_bglt BgL_arg5391z00_1273;

									{
										BgL_variablez00_bglt BgL_auxz00_3298;

										BgL_auxz00_3298 =
											(BgL_variablez00_bglt) (BgL_globalz00_1272);
										BgL_arg5391z00_1273 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_3298))->
											BgL_valuez00);
									}
									{	/* Cfa/collect.scm 46 */
										BgL_sfunz00_bglt BgL_valuez00_2183;

										BgL_globalz00_bglt BgL_globalz00_2184;

										BgL_valuez00_2183 =
											(BgL_sfunz00_bglt) (BgL_arg5391z00_1273);
										BgL_globalz00_2184 =
											(BgL_globalz00_bglt) (BgL_globalz00_1272);
										{	/* Cfa/collect.scm 46 */
											obj_t BgL_arg5393z00_2185;

											BgL_arg5393z00_2185 =
												(((BgL_sfunz00_bglt) CREF(BgL_valuez00_2183))->
												BgL_bodyz00);
											BGl_nodezd2collectz12zc0zzcfa_collectz00(
												(BgL_nodez00_bglt) (BgL_arg5393z00_2185),
												(BgL_variablez00_bglt) (BgL_globalz00_2184));
										}
									}
								}
							}
							{
								obj_t BgL_l5331z00_3307;

								BgL_l5331z00_3307 = CDR(BgL_l5331z00_1269);
								BgL_l5331z00_1269 = BgL_l5331z00_3307;
								goto BgL_zc3anonymousza35389ze3z83_1270;
							}
						}
					else
						{	/* Cfa/collect.scm 46 */
							BgL_auxz00_3294 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_3294);
				}
			}
		}
	}



/* _collect-all-approx! */
	obj_t BGl__collectzd2allzd2approxz12z12zzcfa_collectz00(obj_t BgL_envz00_3162,
		obj_t BgL_globalsz00_3163)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 45 */
			return
				BGl_collectzd2allzd2approxz12z12zzcfa_collectz00(BgL_globalsz00_3163);
		}
	}



/* monomorphic-vector? */
	bool_t BGl_monomorphiczd2vectorzf3z21zzcfa_collectz00(obj_t BgL_vectorz00_12)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 93 */
			{	/* Cfa/collect.scm 108 */
				int BgL_lenz00_1278;

				BgL_lenz00_1278 = VECTOR_LENGTH(BgL_vectorz00_12);
				if (((long) (BgL_lenz00_1278) == ((long) 0)))
					{	/* Cfa/collect.scm 109 */
						return ((bool_t) 0);
					}
				else
					{	/* Cfa/collect.scm 111 */
						obj_t BgL_atypez00_1280;

						BgL_atypez00_1280 =
							BGl_getzd2atypezd2zzcfa_collectz00(VECTOR_REF(BgL_vectorz00_12,
								(int) (((long) 0))));
						{
							long BgL_iz00_1282;

							BgL_iz00_1282 = ((long) 1);
						BgL_zc3anonymousza35395ze3z83_1283:
							if (CBOOL(BgL_atypez00_1280))
								{	/* Cfa/collect.scm 114 */
									if ((BgL_iz00_1282 == (long) (BgL_lenz00_1278)))
										{	/* Cfa/collect.scm 116 */
											return ((bool_t) 1);
										}
									else
										{	/* Cfa/collect.scm 116 */
											if (
												(BGl_getzd2atypezd2zzcfa_collectz00(VECTOR_REF
														(BgL_vectorz00_12,
															(int) (BgL_iz00_1282))) == BgL_atypez00_1280))
												{
													long BgL_iz00_3328;

													BgL_iz00_3328 = (BgL_iz00_1282 + ((long) 1));
													BgL_iz00_1282 = BgL_iz00_3328;
													goto BgL_zc3anonymousza35395ze3z83_1283;
												}
											else
												{	/* Cfa/collect.scm 118 */
													return ((bool_t) 0);
												}
										}
								}
							else
								{	/* Cfa/collect.scm 114 */
									return ((bool_t) 0);
								}
						}
					}
			}
		}
	}



/* get-atype */
	obj_t BGl_getzd2atypezd2zzcfa_collectz00(obj_t BgL_valuez00_1291)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 107 */
			if (INTEGERP(BgL_valuez00_1291))
				{	/* Cfa/collect.scm 96 */
					return CNST_TABLE_REF(((long) 0));
				}
			else
				{	/* Cfa/collect.scm 96 */
					if (CHARP(BgL_valuez00_1291))
						{	/* Cfa/collect.scm 98 */
							return CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Cfa/collect.scm 98 */
							if (BOOLEANP(BgL_valuez00_1291))
								{	/* Cfa/collect.scm 100 */
									return CNST_TABLE_REF(((long) 2));
								}
							else
								{	/* Cfa/collect.scm 100 */
									if (STRINGP(BgL_valuez00_1291))
										{	/* Cfa/collect.scm 102 */
											return CNST_TABLE_REF(((long) 3));
										}
									else
										{	/* Cfa/collect.scm 104 */
											bool_t BgL_testz00_3342;

											if (INTEGERP(BgL_valuez00_1291))
												{	/* Cfa/collect.scm 104 */
													BgL_testz00_3342 = ((bool_t) 1);
												}
											else
												{	/* Cfa/collect.scm 104 */
													BgL_testz00_3342 = REALP(BgL_valuez00_1291);
												}
											if (BgL_testz00_3342)
												{	/* Cfa/collect.scm 104 */
													return CNST_TABLE_REF(((long) 4));
												}
											else
												{	/* Cfa/collect.scm 104 */
													return BFALSE;
												}
										}
								}
						}
				}
		}
	}



/* node-collect*! */
	bool_t BGl_nodezd2collectza2z12z62zzcfa_collectz00(obj_t BgL_nodeza2za2_51,
		obj_t BgL_ownerz00_52)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 339 */
			{
				obj_t BgL_l5342z00_1300;

				BgL_l5342z00_1300 = BgL_nodeza2za2_51;
			BgL_zc3anonymousza35408ze3z83_1301:
				if (PAIRP(BgL_l5342z00_1300))
					{	/* Cfa/collect.scm 340 */
						{	/* Cfa/collect.scm 340 */
							obj_t BgL_nodez00_1303;

							BgL_nodez00_1303 = CAR(BgL_l5342z00_1300);
							{	/* Cfa/collect.scm 340 */
								BgL_nodez00_bglt BgL_nodez00_2237;

								BgL_variablez00_bglt BgL_ownerz00_2238;

								BgL_nodez00_2237 = (BgL_nodez00_bglt) (BgL_nodez00_1303);
								BgL_ownerz00_2238 = (BgL_variablez00_bglt) (BgL_ownerz00_52);
								{	/* Cfa/collect.scm 340 */
									obj_t BgL_method5345z00_2239;

									{	/* Cfa/collect.scm 340 */
										BgL_objectz00_bglt BgL_objz00_2240;

										BgL_objz00_2240 = (BgL_objectz00_bglt) (BgL_nodez00_2237);
										{	/* Cfa/collect.scm 340 */
											long BgL_objzd2classzd2numz00_2241;

											BgL_objzd2classzd2numz00_2241 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2240);
											{	/* Cfa/collect.scm 340 */
												obj_t BgL_arg2643z00_2242;

												BgL_arg2643z00_2242 =
													PROCEDURE_REF
													(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
													(int) (((long) 1)));
												{	/* Cfa/collect.scm 340 */
													obj_t BgL_arrayz00_2244;

													int BgL_offsetz00_2245;

													BgL_arrayz00_2244 = BgL_arg2643z00_2242;
													BgL_offsetz00_2245 =
														(int) (BgL_objzd2classzd2numz00_2241);
													{	/* Cfa/collect.scm 340 */
														long BgL_offsetz00_2246;

														BgL_offsetz00_2246 =
															((long) (BgL_offsetz00_2245) - OBJECT_TYPE);
														{	/* Cfa/collect.scm 340 */
															long BgL_modz00_2247;

															{	/* Cfa/collect.scm 340 */
																int BgL_arg2645z00_2248;

																BgL_arg2645z00_2248 = (int) (((long) 16));
																{	/* Cfa/collect.scm 340 */
																	long BgL_auxz00_3360;

																	BgL_auxz00_3360 =
																		(long) (BgL_arg2645z00_2248);
																	BgL_modz00_2247 =
																		(BgL_offsetz00_2246 / BgL_auxz00_3360);
															}}
															{	/* Cfa/collect.scm 340 */
																long BgL_restz00_2249;

																{	/* Cfa/collect.scm 340 */
																	int BgL_arg2644z00_2250;

																	BgL_arg2644z00_2250 = (int) (((long) 16));
																	{	/* Cfa/collect.scm 340 */
																		long BgL_auxz00_3364;

																		BgL_auxz00_3364 =
																			(long) (BgL_arg2644z00_2250);
																		BgL_restz00_2249 =
																			(BgL_offsetz00_2246 % BgL_auxz00_3364);
																}}
																{	/* Cfa/collect.scm 340 */

																	BgL_method5345z00_2239 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2244,
																			(int) (BgL_modz00_2247)),
																		(int) (BgL_restz00_2249));
									}}}}}}}}
									PROCEDURE_ENTRY(BgL_method5345z00_2239)
										(BgL_method5345z00_2239, (obj_t) (BgL_nodez00_2237),
										(obj_t) (BgL_ownerz00_2238), BEOA);
						}}}
						{
							obj_t BgL_l5342z00_3375;

							BgL_l5342z00_3375 = CDR(BgL_l5342z00_1300);
							BgL_l5342z00_1300 = BgL_l5342z00_3375;
							goto BgL_zc3anonymousza35408ze3z83_1301;
						}
					}
				else
					{	/* Cfa/collect.scm 340 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* get-allocs */
	BGL_EXPORTED_DEF obj_t BGl_getzd2allocszd2zzcfa_collectz00()
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 362 */
			return BGl_za2usedzd2allocza2zd2zzcfa_collectz00;
		}
	}



/* _get-allocs */
	obj_t BGl__getzd2allocszd2zzcfa_collectz00(obj_t BgL_envz00_3167)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 362 */
			return BGl_za2usedzd2allocza2zd2zzcfa_collectz00;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_collectz00()
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_nodezd2collectz12zd2defaul5344zd2envzc0zzcfa_collectz00,
				BGl_nodez00zzast_nodez00, BGl_string5709z00zzcfa_collectz00);
		}
	}



/* node-collect! */
	obj_t BGl_nodezd2collectz12zc0zzcfa_collectz00(BgL_nodez00_bglt BgL_nodez00_4,
		BgL_variablez00_bglt BgL_ownerz00_5)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 58 */
			{	/* Cfa/collect.scm 58 */
				obj_t BgL_method5345z00_2265;

				{	/* Cfa/collect.scm 58 */
					BgL_objectz00_bglt BgL_objz00_2266;

					BgL_objz00_2266 = (BgL_objectz00_bglt) (BgL_nodez00_4);
					{	/* Cfa/collect.scm 58 */
						long BgL_objzd2classzd2numz00_2267;

						BgL_objzd2classzd2numz00_2267 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2266);
						{	/* Cfa/collect.scm 58 */
							obj_t BgL_arg2643z00_2268;

							BgL_arg2643z00_2268 =
								PROCEDURE_REF(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
								(int) (((long) 1)));
							{	/* Cfa/collect.scm 58 */
								obj_t BgL_arrayz00_2270;

								int BgL_offsetz00_2271;

								BgL_arrayz00_2270 = BgL_arg2643z00_2268;
								BgL_offsetz00_2271 = (int) (BgL_objzd2classzd2numz00_2267);
								{	/* Cfa/collect.scm 58 */
									long BgL_offsetz00_2272;

									BgL_offsetz00_2272 =
										((long) (BgL_offsetz00_2271) - OBJECT_TYPE);
									{	/* Cfa/collect.scm 58 */
										long BgL_modz00_2273;

										{	/* Cfa/collect.scm 58 */
											int BgL_arg2645z00_2274;

											BgL_arg2645z00_2274 = (int) (((long) 16));
											{	/* Cfa/collect.scm 58 */
												long BgL_auxz00_3386;

												BgL_auxz00_3386 = (long) (BgL_arg2645z00_2274);
												BgL_modz00_2273 =
													(BgL_offsetz00_2272 / BgL_auxz00_3386);
										}}
										{	/* Cfa/collect.scm 58 */
											long BgL_restz00_2275;

											{	/* Cfa/collect.scm 58 */
												int BgL_arg2644z00_2276;

												BgL_arg2644z00_2276 = (int) (((long) 16));
												{	/* Cfa/collect.scm 58 */
													long BgL_auxz00_3390;

													BgL_auxz00_3390 = (long) (BgL_arg2644z00_2276);
													BgL_restz00_2275 =
														(BgL_offsetz00_2272 % BgL_auxz00_3390);
											}}
											{	/* Cfa/collect.scm 58 */

												BgL_method5345z00_2265 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2270,
														(int) (BgL_modz00_2273)), (int) (BgL_restz00_2275));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5345z00_2265) (BgL_method5345z00_2265,
					(obj_t) (BgL_nodez00_4), (obj_t) (BgL_ownerz00_5), BEOA);
			}
		}
	}



/* _node-collect! */
	obj_t BGl__nodezd2collectz12zc0zzcfa_collectz00(obj_t BgL_envz00_3164,
		obj_t BgL_nodez00_3165, obj_t BgL_ownerz00_3166)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 58 */
			return
				BGl_nodezd2collectz12zc0zzcfa_collectz00(
				(BgL_nodez00_bglt) (BgL_nodez00_3165),
				(BgL_variablez00_bglt) (BgL_ownerz00_3166));
		}
	}



/* node-collect!-defaul5344 */
	obj_t BGl_nodezd2collectz12zd2defaul5344z12zzcfa_collectz00(BgL_nodez00_bglt
		BgL_nodez00_6, BgL_variablez00_bglt BgL_ownerz00_7)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 5)),
				BGl_string5710z00zzcfa_collectz00, (obj_t) (BgL_nodez00_6));
		}
	}



/* _node-collect!-defaul5344 */
	obj_t BGl__nodezd2collectz12zd2defaul5344z12zzcfa_collectz00(obj_t
		BgL_envz00_3168, obj_t BgL_nodez00_3169, obj_t BgL_ownerz00_3170)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 15 */
			return
				BGl_nodezd2collectz12zd2defaul5344z12zzcfa_collectz00(
				(BgL_nodez00_bglt) (BgL_nodez00_3169),
				(BgL_variablez00_bglt) (BgL_ownerz00_3170));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_collectz00()
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_atomz00zzast_nodez00, BGl_proc5711z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_kwotez00zzast_nodez00, BGl_proc5712z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_varz00zzast_nodez00, BGl_proc5713z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_sequencez00zzast_nodez00, BGl_proc5714z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_appz00zzast_nodez00, BGl_proc5715z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_vallocz00zzast_nodez00, BGl_proc5716z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc5717z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_funcallz00zzast_nodez00, BGl_proc5718z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_externz00zzast_nodez00, BGl_proc5719z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_castz00zzast_nodez00, BGl_proc5720z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_setqz00zzast_nodez00, BGl_proc5721z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc5722z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_failz00zzast_nodez00, BGl_proc5723z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_selectz00zzast_nodez00, BGl_proc5724z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc5725z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc5726z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc5727z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc5728z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc5729z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc5730z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc5731z00zzcfa_collectz00,
				BGl_string5709z00zzcfa_collectz00);
		}
	}



/* node-collect!-box-re5388 */
	obj_t BGl_nodezd2collectz12zd2boxzd2re5388zc0zzcfa_collectz00(obj_t
		BgL_envz00_3192, obj_t BgL_nodez00_3193, obj_t BgL_ownerz00_3194)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 332 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_2172;

				obj_t BgL_ownerz00_2173;

				BgL_nodez00_2172 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_3193);
				BgL_ownerz00_2173 = BgL_ownerz00_3194;
				{	/* Cfa/collect.scm 333 */
					BgL_varz00_bglt BgL_arg5646z00_3133;

					BgL_arg5646z00_3133 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_2172))->BgL_varz00);
					{	/* Cfa/collect.scm 333 */
						BgL_nodez00_bglt BgL_nodez00_3135;

						BgL_variablez00_bglt BgL_ownerz00_3136;

						BgL_nodez00_3135 = (BgL_nodez00_bglt) (BgL_arg5646z00_3133);
						BgL_ownerz00_3136 = (BgL_variablez00_bglt) (BgL_ownerz00_2173);
						{	/* Cfa/collect.scm 333 */
							obj_t BgL_method5345z00_3137;

							{	/* Cfa/collect.scm 333 */
								BgL_objectz00_bglt BgL_objz00_3138;

								BgL_objz00_3138 = (BgL_objectz00_bglt) (BgL_nodez00_3135);
								{	/* Cfa/collect.scm 333 */
									long BgL_objzd2classzd2numz00_3139;

									BgL_objzd2classzd2numz00_3139 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3138);
									{	/* Cfa/collect.scm 333 */
										obj_t BgL_arg2643z00_3140;

										BgL_arg2643z00_3140 =
											PROCEDURE_REF
											(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
											(int) (((long) 1)));
										{	/* Cfa/collect.scm 333 */
											obj_t BgL_arrayz00_3142;

											int BgL_offsetz00_3143;

											BgL_arrayz00_3142 = BgL_arg2643z00_3140;
											BgL_offsetz00_3143 =
												(int) (BgL_objzd2classzd2numz00_3139);
											{	/* Cfa/collect.scm 333 */
												long BgL_offsetz00_3144;

												BgL_offsetz00_3144 =
													((long) (BgL_offsetz00_3143) - OBJECT_TYPE);
												{	/* Cfa/collect.scm 333 */
													long BgL_modz00_3145;

													{	/* Cfa/collect.scm 333 */
														int BgL_arg2645z00_3146;

														BgL_arg2645z00_3146 = (int) (((long) 16));
														{	/* Cfa/collect.scm 333 */
															long BgL_auxz00_3442;

															BgL_auxz00_3442 = (long) (BgL_arg2645z00_3146);
															BgL_modz00_3145 =
																(BgL_offsetz00_3144 / BgL_auxz00_3442);
													}}
													{	/* Cfa/collect.scm 333 */
														long BgL_restz00_3147;

														{	/* Cfa/collect.scm 333 */
															int BgL_arg2644z00_3148;

															BgL_arg2644z00_3148 = (int) (((long) 16));
															{	/* Cfa/collect.scm 333 */
																long BgL_auxz00_3446;

																BgL_auxz00_3446 = (long) (BgL_arg2644z00_3148);
																BgL_restz00_3147 =
																	(BgL_offsetz00_3144 % BgL_auxz00_3446);
														}}
														{	/* Cfa/collect.scm 333 */

															BgL_method5345z00_3137 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3142,
																	(int) (BgL_modz00_3145)),
																(int) (BgL_restz00_3147));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method5345z00_3137) (BgL_method5345z00_3137,
								(obj_t) (BgL_nodez00_3135), (obj_t) (BgL_ownerz00_3136), BEOA);
						}
					}
				}
			}
		}
	}



/* node-collect!-box-se5386 */
	obj_t BGl_nodezd2collectz12zd2boxzd2se5386zc0zzcfa_collectz00(obj_t
		BgL_envz00_3195, obj_t BgL_nodez00_3196, obj_t BgL_ownerz00_3197)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 324 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_2163;

				obj_t BgL_ownerz00_2164;

				BgL_nodez00_2163 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_3196);
				BgL_ownerz00_2164 = BgL_ownerz00_3197;
				{	/* Cfa/collect.scm 325 */
					BgL_varz00_bglt BgL_arg5643z00_3074;

					BgL_arg5643z00_3074 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_2163))->BgL_varz00);
					{	/* Cfa/collect.scm 325 */
						BgL_nodez00_bglt BgL_nodez00_3077;

						BgL_variablez00_bglt BgL_ownerz00_3078;

						BgL_nodez00_3077 = (BgL_nodez00_bglt) (BgL_arg5643z00_3074);
						BgL_ownerz00_3078 = (BgL_variablez00_bglt) (BgL_ownerz00_2164);
						{	/* Cfa/collect.scm 325 */
							obj_t BgL_method5345z00_3079;

							{	/* Cfa/collect.scm 325 */
								BgL_objectz00_bglt BgL_objz00_3080;

								BgL_objz00_3080 = (BgL_objectz00_bglt) (BgL_nodez00_3077);
								{	/* Cfa/collect.scm 325 */
									long BgL_objzd2classzd2numz00_3081;

									BgL_objzd2classzd2numz00_3081 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3080);
									{	/* Cfa/collect.scm 325 */
										obj_t BgL_arg2643z00_3082;

										BgL_arg2643z00_3082 =
											PROCEDURE_REF
											(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
											(int) (((long) 1)));
										{	/* Cfa/collect.scm 325 */
											obj_t BgL_arrayz00_3084;

											int BgL_offsetz00_3085;

											BgL_arrayz00_3084 = BgL_arg2643z00_3082;
											BgL_offsetz00_3085 =
												(int) (BgL_objzd2classzd2numz00_3081);
											{	/* Cfa/collect.scm 325 */
												long BgL_offsetz00_3086;

												BgL_offsetz00_3086 =
													((long) (BgL_offsetz00_3085) - OBJECT_TYPE);
												{	/* Cfa/collect.scm 325 */
													long BgL_modz00_3087;

													{	/* Cfa/collect.scm 325 */
														int BgL_arg2645z00_3088;

														BgL_arg2645z00_3088 = (int) (((long) 16));
														{	/* Cfa/collect.scm 325 */
															long BgL_auxz00_3469;

															BgL_auxz00_3469 = (long) (BgL_arg2645z00_3088);
															BgL_modz00_3087 =
																(BgL_offsetz00_3086 / BgL_auxz00_3469);
													}}
													{	/* Cfa/collect.scm 325 */
														long BgL_restz00_3089;

														{	/* Cfa/collect.scm 325 */
															int BgL_arg2644z00_3090;

															BgL_arg2644z00_3090 = (int) (((long) 16));
															{	/* Cfa/collect.scm 325 */
																long BgL_auxz00_3473;

																BgL_auxz00_3473 = (long) (BgL_arg2644z00_3090);
																BgL_restz00_3089 =
																	(BgL_offsetz00_3086 % BgL_auxz00_3473);
														}}
														{	/* Cfa/collect.scm 325 */

															BgL_method5345z00_3079 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3084,
																	(int) (BgL_modz00_3087)),
																(int) (BgL_restz00_3089));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5345z00_3079) (BgL_method5345z00_3079,
								(obj_t) (BgL_nodez00_3077), (obj_t) (BgL_ownerz00_3078), BEOA);
				}}}
				{	/* Cfa/collect.scm 325 */
					BgL_nodez00_bglt BgL_arg5644z00_3075;

					BgL_arg5644z00_3075 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_2163))->BgL_valuez00);
					{	/* Cfa/collect.scm 325 */
						BgL_variablez00_bglt BgL_ownerz00_3106;

						BgL_ownerz00_3106 = (BgL_variablez00_bglt) (BgL_ownerz00_2164);
						{	/* Cfa/collect.scm 325 */
							obj_t BgL_method5345z00_3107;

							{	/* Cfa/collect.scm 325 */
								BgL_objectz00_bglt BgL_objz00_3108;

								BgL_objz00_3108 = (BgL_objectz00_bglt) (BgL_arg5644z00_3075);
								{	/* Cfa/collect.scm 325 */
									long BgL_objzd2classzd2numz00_3109;

									BgL_objzd2classzd2numz00_3109 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3108);
									{	/* Cfa/collect.scm 325 */
										obj_t BgL_arg2643z00_3110;

										BgL_arg2643z00_3110 =
											PROCEDURE_REF
											(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
											(int) (((long) 1)));
										{	/* Cfa/collect.scm 325 */
											obj_t BgL_arrayz00_3112;

											int BgL_offsetz00_3113;

											BgL_arrayz00_3112 = BgL_arg2643z00_3110;
											BgL_offsetz00_3113 =
												(int) (BgL_objzd2classzd2numz00_3109);
											{	/* Cfa/collect.scm 325 */
												long BgL_offsetz00_3114;

												BgL_offsetz00_3114 =
													((long) (BgL_offsetz00_3113) - OBJECT_TYPE);
												{	/* Cfa/collect.scm 325 */
													long BgL_modz00_3115;

													{	/* Cfa/collect.scm 325 */
														int BgL_arg2645z00_3116;

														BgL_arg2645z00_3116 = (int) (((long) 16));
														{	/* Cfa/collect.scm 325 */
															long BgL_auxz00_3494;

															BgL_auxz00_3494 = (long) (BgL_arg2645z00_3116);
															BgL_modz00_3115 =
																(BgL_offsetz00_3114 / BgL_auxz00_3494);
													}}
													{	/* Cfa/collect.scm 325 */
														long BgL_restz00_3117;

														{	/* Cfa/collect.scm 325 */
															int BgL_arg2644z00_3118;

															BgL_arg2644z00_3118 = (int) (((long) 16));
															{	/* Cfa/collect.scm 325 */
																long BgL_auxz00_3498;

																BgL_auxz00_3498 = (long) (BgL_arg2644z00_3118);
																BgL_restz00_3117 =
																	(BgL_offsetz00_3114 % BgL_auxz00_3498);
														}}
														{	/* Cfa/collect.scm 325 */

															BgL_method5345z00_3107 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3112,
																	(int) (BgL_modz00_3115)),
																(int) (BgL_restz00_3117));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method5345z00_3107) (BgL_method5345z00_3107,
								(obj_t) (BgL_arg5644z00_3075),
								(obj_t) (BgL_ownerz00_3106), BEOA);
						}
					}
				}
			}
		}
	}



/* node-collect!-make-b5384 */
	obj_t BGl_nodezd2collectz12zd2makezd2b5384zc0zzcfa_collectz00(obj_t
		BgL_envz00_3198, obj_t BgL_nodez00_3199, obj_t BgL_ownerz00_3200)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 314 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_2152;

				obj_t BgL_ownerz00_2153;

				BgL_nodez00_2152 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_3199);
				BgL_ownerz00_2153 = BgL_ownerz00_3200;
				{	/* Cfa/collect.scm 315 */
					BgL_nodez00_bglt BgL_arg5637z00_2156;

					BgL_arg5637z00_2156 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_2152))->BgL_valuez00);
					{	/* Cfa/collect.scm 315 */
						BgL_variablez00_bglt BgL_ownerz00_3042;

						BgL_ownerz00_3042 = (BgL_variablez00_bglt) (BgL_ownerz00_2153);
						{	/* Cfa/collect.scm 315 */
							obj_t BgL_method5345z00_3043;

							{	/* Cfa/collect.scm 315 */
								BgL_objectz00_bglt BgL_objz00_3044;

								BgL_objz00_3044 = (BgL_objectz00_bglt) (BgL_arg5637z00_2156);
								{	/* Cfa/collect.scm 315 */
									long BgL_objzd2classzd2numz00_3045;

									BgL_objzd2classzd2numz00_3045 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3044);
									{	/* Cfa/collect.scm 315 */
										obj_t BgL_arg2643z00_3046;

										BgL_arg2643z00_3046 =
											PROCEDURE_REF
											(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
											(int) (((long) 1)));
										{	/* Cfa/collect.scm 315 */
											obj_t BgL_arrayz00_3048;

											int BgL_offsetz00_3049;

											BgL_arrayz00_3048 = BgL_arg2643z00_3046;
											BgL_offsetz00_3049 =
												(int) (BgL_objzd2classzd2numz00_3045);
											{	/* Cfa/collect.scm 315 */
												long BgL_offsetz00_3050;

												BgL_offsetz00_3050 =
													((long) (BgL_offsetz00_3049) - OBJECT_TYPE);
												{	/* Cfa/collect.scm 315 */
													long BgL_modz00_3051;

													{	/* Cfa/collect.scm 315 */
														int BgL_arg2645z00_3052;

														BgL_arg2645z00_3052 = (int) (((long) 16));
														{	/* Cfa/collect.scm 315 */
															long BgL_auxz00_3520;

															BgL_auxz00_3520 = (long) (BgL_arg2645z00_3052);
															BgL_modz00_3051 =
																(BgL_offsetz00_3050 / BgL_auxz00_3520);
													}}
													{	/* Cfa/collect.scm 315 */
														long BgL_restz00_3053;

														{	/* Cfa/collect.scm 315 */
															int BgL_arg2644z00_3054;

															BgL_arg2644z00_3054 = (int) (((long) 16));
															{	/* Cfa/collect.scm 315 */
																long BgL_auxz00_3524;

																BgL_auxz00_3524 = (long) (BgL_arg2644z00_3054);
																BgL_restz00_3053 =
																	(BgL_offsetz00_3050 % BgL_auxz00_3524);
														}}
														{	/* Cfa/collect.scm 315 */

															BgL_method5345z00_3043 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3048,
																	(int) (BgL_modz00_3051)),
																(int) (BgL_restz00_3053));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5345z00_3043) (BgL_method5345z00_3043,
								(obj_t) (BgL_arg5637z00_2156),
								(obj_t) (BgL_ownerz00_3042), BEOA);
				}}}
				if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 1)))
					{	/* Cfa/collect.scm 316 */
						BGl_za2usedzd2allocza2zd2zzcfa_collectz00 =
							MAKE_PAIR(
							(obj_t) (BgL_nodez00_2152),
							BGl_za2usedzd2allocza2zd2zzcfa_collectz00);
						{	/* Cfa/collect.scm 319 */
							BgL_makezd2boxzd2_bglt BgL_obj5326z00_2158;

							BgL_obj5326z00_2158 = ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2152);
							{	/* Cfa/collect.scm 319 */
								obj_t BgL_auxz00_3543;

								BgL_objectz00_bglt BgL_auxz00_3541;

								BgL_auxz00_3543 =
									BGl_wideningzd2prezd2makezd2boxzd2zzcfa_infoz00();
								BgL_auxz00_3541 = (BgL_objectz00_bglt) (BgL_obj5326z00_2158);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3541, BgL_auxz00_3543);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_obj5326z00_2158),
								BGl_classzd2numzd2zz__objectz00
								(BGl_prezd2makezd2boxz00zzcfa_infoz00));
							return (obj_t) (BgL_obj5326z00_2158);
						}
					}
				else
					{	/* Cfa/collect.scm 316 */
						return BFALSE;
					}
			}
		}
	}



/* node-collect!-jump-e5382 */
	obj_t BGl_nodezd2collectz12zd2jumpzd2e5382zc0zzcfa_collectz00(obj_t
		BgL_envz00_3201, obj_t BgL_nodez00_3202, obj_t BgL_ownerz00_3203)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 306 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_2143;

				obj_t BgL_ownerz00_2144;

				BgL_nodez00_2143 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_3202);
				BgL_ownerz00_2144 = BgL_ownerz00_3203;
				{	/* Cfa/collect.scm 307 */
					BgL_nodez00_bglt BgL_arg5634z00_2982;

					BgL_arg5634z00_2982 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_2143))->
						BgL_exitz00);
					{	/* Cfa/collect.scm 307 */
						BgL_variablez00_bglt BgL_ownerz00_2986;

						BgL_ownerz00_2986 = (BgL_variablez00_bglt) (BgL_ownerz00_2144);
						{	/* Cfa/collect.scm 307 */
							obj_t BgL_method5345z00_2987;

							{	/* Cfa/collect.scm 307 */
								BgL_objectz00_bglt BgL_objz00_2988;

								BgL_objz00_2988 = (BgL_objectz00_bglt) (BgL_arg5634z00_2982);
								{	/* Cfa/collect.scm 307 */
									long BgL_objzd2classzd2numz00_2989;

									BgL_objzd2classzd2numz00_2989 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2988);
									{	/* Cfa/collect.scm 307 */
										obj_t BgL_arg2643z00_2990;

										BgL_arg2643z00_2990 =
											PROCEDURE_REF
											(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
											(int) (((long) 1)));
										{	/* Cfa/collect.scm 307 */
											obj_t BgL_arrayz00_2992;

											int BgL_offsetz00_2993;

											BgL_arrayz00_2992 = BgL_arg2643z00_2990;
											BgL_offsetz00_2993 =
												(int) (BgL_objzd2classzd2numz00_2989);
											{	/* Cfa/collect.scm 307 */
												long BgL_offsetz00_2994;

												BgL_offsetz00_2994 =
													((long) (BgL_offsetz00_2993) - OBJECT_TYPE);
												{	/* Cfa/collect.scm 307 */
													long BgL_modz00_2995;

													{	/* Cfa/collect.scm 307 */
														int BgL_arg2645z00_2996;

														BgL_arg2645z00_2996 = (int) (((long) 16));
														{	/* Cfa/collect.scm 307 */
															long BgL_auxz00_3561;

															BgL_auxz00_3561 = (long) (BgL_arg2645z00_2996);
															BgL_modz00_2995 =
																(BgL_offsetz00_2994 / BgL_auxz00_3561);
													}}
													{	/* Cfa/collect.scm 307 */
														long BgL_restz00_2997;

														{	/* Cfa/collect.scm 307 */
															int BgL_arg2644z00_2998;

															BgL_arg2644z00_2998 = (int) (((long) 16));
															{	/* Cfa/collect.scm 307 */
																long BgL_auxz00_3565;

																BgL_auxz00_3565 = (long) (BgL_arg2644z00_2998);
																BgL_restz00_2997 =
																	(BgL_offsetz00_2994 % BgL_auxz00_3565);
														}}
														{	/* Cfa/collect.scm 307 */

															BgL_method5345z00_2987 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2992,
																	(int) (BgL_modz00_2995)),
																(int) (BgL_restz00_2997));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5345z00_2987) (BgL_method5345z00_2987,
								(obj_t) (BgL_arg5634z00_2982),
								(obj_t) (BgL_ownerz00_2986), BEOA);
				}}}
				{	/* Cfa/collect.scm 307 */
					BgL_nodez00_bglt BgL_arg5635z00_2983;

					BgL_arg5635z00_2983 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_2143))->
						BgL_valuez00);
					{	/* Cfa/collect.scm 307 */
						BgL_variablez00_bglt BgL_ownerz00_3014;

						BgL_ownerz00_3014 = (BgL_variablez00_bglt) (BgL_ownerz00_2144);
						{	/* Cfa/collect.scm 307 */
							obj_t BgL_method5345z00_3015;

							{	/* Cfa/collect.scm 307 */
								BgL_objectz00_bglt BgL_objz00_3016;

								BgL_objz00_3016 = (BgL_objectz00_bglt) (BgL_arg5635z00_2983);
								{	/* Cfa/collect.scm 307 */
									long BgL_objzd2classzd2numz00_3017;

									BgL_objzd2classzd2numz00_3017 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3016);
									{	/* Cfa/collect.scm 307 */
										obj_t BgL_arg2643z00_3018;

										BgL_arg2643z00_3018 =
											PROCEDURE_REF
											(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
											(int) (((long) 1)));
										{	/* Cfa/collect.scm 307 */
											obj_t BgL_arrayz00_3020;

											int BgL_offsetz00_3021;

											BgL_arrayz00_3020 = BgL_arg2643z00_3018;
											BgL_offsetz00_3021 =
												(int) (BgL_objzd2classzd2numz00_3017);
											{	/* Cfa/collect.scm 307 */
												long BgL_offsetz00_3022;

												BgL_offsetz00_3022 =
													((long) (BgL_offsetz00_3021) - OBJECT_TYPE);
												{	/* Cfa/collect.scm 307 */
													long BgL_modz00_3023;

													{	/* Cfa/collect.scm 307 */
														int BgL_arg2645z00_3024;

														BgL_arg2645z00_3024 = (int) (((long) 16));
														{	/* Cfa/collect.scm 307 */
															long BgL_auxz00_3586;

															BgL_auxz00_3586 = (long) (BgL_arg2645z00_3024);
															BgL_modz00_3023 =
																(BgL_offsetz00_3022 / BgL_auxz00_3586);
													}}
													{	/* Cfa/collect.scm 307 */
														long BgL_restz00_3025;

														{	/* Cfa/collect.scm 307 */
															int BgL_arg2644z00_3026;

															BgL_arg2644z00_3026 = (int) (((long) 16));
															{	/* Cfa/collect.scm 307 */
																long BgL_auxz00_3590;

																BgL_auxz00_3590 = (long) (BgL_arg2644z00_3026);
																BgL_restz00_3025 =
																	(BgL_offsetz00_3022 % BgL_auxz00_3590);
														}}
														{	/* Cfa/collect.scm 307 */

															BgL_method5345z00_3015 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3020,
																	(int) (BgL_modz00_3023)),
																(int) (BgL_restz00_3025));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method5345z00_3015) (BgL_method5345z00_3015,
								(obj_t) (BgL_arg5635z00_2983),
								(obj_t) (BgL_ownerz00_3014), BEOA);
						}
					}
				}
			}
		}
	}



/* node-collect!-set-ex5380 */
	obj_t BGl_nodezd2collectz12zd2setzd2ex5380zc0zzcfa_collectz00(obj_t
		BgL_envz00_3204, obj_t BgL_nodez00_3205, obj_t BgL_ownerz00_3206)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 299 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_2135;

				obj_t BgL_ownerz00_2136;

				BgL_nodez00_2135 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_3205);
				BgL_ownerz00_2136 = BgL_ownerz00_3206;
				{	/* Cfa/collect.scm 300 */
					BgL_nodez00_bglt BgL_arg5632z00_2952;

					BgL_arg5632z00_2952 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_2135))->BgL_bodyz00);
					{	/* Cfa/collect.scm 300 */
						BgL_variablez00_bglt BgL_ownerz00_2955;

						BgL_ownerz00_2955 = (BgL_variablez00_bglt) (BgL_ownerz00_2136);
						{	/* Cfa/collect.scm 300 */
							obj_t BgL_method5345z00_2956;

							{	/* Cfa/collect.scm 300 */
								BgL_objectz00_bglt BgL_objz00_2957;

								BgL_objz00_2957 = (BgL_objectz00_bglt) (BgL_arg5632z00_2952);
								{	/* Cfa/collect.scm 300 */
									long BgL_objzd2classzd2numz00_2958;

									BgL_objzd2classzd2numz00_2958 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2957);
									{	/* Cfa/collect.scm 300 */
										obj_t BgL_arg2643z00_2959;

										BgL_arg2643z00_2959 =
											PROCEDURE_REF
											(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
											(int) (((long) 1)));
										{	/* Cfa/collect.scm 300 */
											obj_t BgL_arrayz00_2961;

											int BgL_offsetz00_2962;

											BgL_arrayz00_2961 = BgL_arg2643z00_2959;
											BgL_offsetz00_2962 =
												(int) (BgL_objzd2classzd2numz00_2958);
											{	/* Cfa/collect.scm 300 */
												long BgL_offsetz00_2963;

												BgL_offsetz00_2963 =
													((long) (BgL_offsetz00_2962) - OBJECT_TYPE);
												{	/* Cfa/collect.scm 300 */
													long BgL_modz00_2964;

													{	/* Cfa/collect.scm 300 */
														int BgL_arg2645z00_2965;

														BgL_arg2645z00_2965 = (int) (((long) 16));
														{	/* Cfa/collect.scm 300 */
															long BgL_auxz00_3612;

															BgL_auxz00_3612 = (long) (BgL_arg2645z00_2965);
															BgL_modz00_2964 =
																(BgL_offsetz00_2963 / BgL_auxz00_3612);
													}}
													{	/* Cfa/collect.scm 300 */
														long BgL_restz00_2966;

														{	/* Cfa/collect.scm 300 */
															int BgL_arg2644z00_2967;

															BgL_arg2644z00_2967 = (int) (((long) 16));
															{	/* Cfa/collect.scm 300 */
																long BgL_auxz00_3616;

																BgL_auxz00_3616 = (long) (BgL_arg2644z00_2967);
																BgL_restz00_2966 =
																	(BgL_offsetz00_2963 % BgL_auxz00_3616);
														}}
														{	/* Cfa/collect.scm 300 */

															BgL_method5345z00_2956 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2961,
																	(int) (BgL_modz00_2964)),
																(int) (BgL_restz00_2966));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method5345z00_2956) (BgL_method5345z00_2956,
								(obj_t) (BgL_arg5632z00_2952),
								(obj_t) (BgL_ownerz00_2955), BEOA);
						}
					}
				}
			}
		}
	}



/* node-collect!-let-va5378 */
	obj_t BGl_nodezd2collectz12zd2letzd2va5378zc0zzcfa_collectz00(obj_t
		BgL_envz00_3207, obj_t BgL_nodez00_3208, obj_t BgL_ownerz00_3209)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 289 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_2118;

				obj_t BgL_ownerz00_2119;

				BgL_nodez00_2118 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_3208);
				BgL_ownerz00_2119 = BgL_ownerz00_3209;
				{	/* Cfa/collect.scm 291 */
					obj_t BgL_g5341z00_2123;

					BgL_g5341z00_2123 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_2118))->BgL_bindingsz00);
					{
						obj_t BgL_l5339z00_2125;

						BgL_l5339z00_2125 = BgL_g5341z00_2123;
					BgL_zc3anonymousza35626ze3z83_2126:
						if (PAIRP(BgL_l5339z00_2125))
							{	/* Cfa/collect.scm 291 */
								{	/* Cfa/collect.scm 292 */
									obj_t BgL_bindingz00_2128;

									BgL_bindingz00_2128 = CAR(BgL_l5339z00_2125);
									{	/* Cfa/collect.scm 292 */
										obj_t BgL_arg5628z00_2129;

										BgL_arg5628z00_2129 = CDR(BgL_bindingz00_2128);
										{	/* Cfa/collect.scm 292 */
											BgL_nodez00_bglt BgL_nodez00_2895;

											BgL_variablez00_bglt BgL_ownerz00_2896;

											BgL_nodez00_2895 =
												(BgL_nodez00_bglt) (BgL_arg5628z00_2129);
											BgL_ownerz00_2896 =
												(BgL_variablez00_bglt) (BgL_ownerz00_2119);
											{	/* Cfa/collect.scm 292 */
												obj_t BgL_method5345z00_2897;

												{	/* Cfa/collect.scm 292 */
													BgL_objectz00_bglt BgL_objz00_2898;

													BgL_objz00_2898 =
														(BgL_objectz00_bglt) (BgL_nodez00_2895);
													{	/* Cfa/collect.scm 292 */
														long BgL_objzd2classzd2numz00_2899;

														BgL_objzd2classzd2numz00_2899 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2898);
														{	/* Cfa/collect.scm 292 */
															obj_t BgL_arg2643z00_2900;

															BgL_arg2643z00_2900 =
																PROCEDURE_REF
																(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
																(int) (((long) 1)));
															{	/* Cfa/collect.scm 292 */
																obj_t BgL_arrayz00_2902;

																int BgL_offsetz00_2903;

																BgL_arrayz00_2902 = BgL_arg2643z00_2900;
																BgL_offsetz00_2903 =
																	(int) (BgL_objzd2classzd2numz00_2899);
																{	/* Cfa/collect.scm 292 */
																	long BgL_offsetz00_2904;

																	BgL_offsetz00_2904 =
																		((long) (BgL_offsetz00_2903) - OBJECT_TYPE);
																	{	/* Cfa/collect.scm 292 */
																		long BgL_modz00_2905;

																		{	/* Cfa/collect.scm 292 */
																			int BgL_arg2645z00_2906;

																			BgL_arg2645z00_2906 = (int) (((long) 16));
																			{	/* Cfa/collect.scm 292 */
																				long BgL_auxz00_3643;

																				BgL_auxz00_3643 =
																					(long) (BgL_arg2645z00_2906);
																				BgL_modz00_2905 =
																					(BgL_offsetz00_2904 /
																					BgL_auxz00_3643);
																		}}
																		{	/* Cfa/collect.scm 292 */
																			long BgL_restz00_2907;

																			{	/* Cfa/collect.scm 292 */
																				int BgL_arg2644z00_2908;

																				BgL_arg2644z00_2908 =
																					(int) (((long) 16));
																				{	/* Cfa/collect.scm 292 */
																					long BgL_auxz00_3647;

																					BgL_auxz00_3647 =
																						(long) (BgL_arg2644z00_2908);
																					BgL_restz00_2907 =
																						(BgL_offsetz00_2904 %
																						BgL_auxz00_3647);
																			}}
																			{	/* Cfa/collect.scm 292 */

																				BgL_method5345z00_2897 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2902,
																						(int) (BgL_modz00_2905)),
																					(int) (BgL_restz00_2907));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method5345z00_2897)
													(BgL_method5345z00_2897, (obj_t) (BgL_nodez00_2895),
													(obj_t) (BgL_ownerz00_2896), BEOA);
								}}}}
								{
									obj_t BgL_l5339z00_3658;

									BgL_l5339z00_3658 = CDR(BgL_l5339z00_2125);
									BgL_l5339z00_2125 = BgL_l5339z00_3658;
									goto BgL_zc3anonymousza35626ze3z83_2126;
								}
							}
						else
							{	/* Cfa/collect.scm 291 */
								((bool_t) 1);
							}
					}
				}
				{	/* Cfa/collect.scm 294 */
					BgL_nodez00_bglt BgL_arg5630z00_2132;

					BgL_arg5630z00_2132 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_2118))->BgL_bodyz00);
					{	/* Cfa/collect.scm 294 */
						BgL_variablez00_bglt BgL_ownerz00_2925;

						BgL_ownerz00_2925 = (BgL_variablez00_bglt) (BgL_ownerz00_2119);
						{	/* Cfa/collect.scm 294 */
							obj_t BgL_method5345z00_2926;

							{	/* Cfa/collect.scm 294 */
								BgL_objectz00_bglt BgL_objz00_2927;

								BgL_objz00_2927 = (BgL_objectz00_bglt) (BgL_arg5630z00_2132);
								{	/* Cfa/collect.scm 294 */
									long BgL_objzd2classzd2numz00_2928;

									BgL_objzd2classzd2numz00_2928 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2927);
									{	/* Cfa/collect.scm 294 */
										obj_t BgL_arg2643z00_2929;

										BgL_arg2643z00_2929 =
											PROCEDURE_REF
											(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
											(int) (((long) 1)));
										{	/* Cfa/collect.scm 294 */
											obj_t BgL_arrayz00_2931;

											int BgL_offsetz00_2932;

											BgL_arrayz00_2931 = BgL_arg2643z00_2929;
											BgL_offsetz00_2932 =
												(int) (BgL_objzd2classzd2numz00_2928);
											{	/* Cfa/collect.scm 294 */
												long BgL_offsetz00_2933;

												BgL_offsetz00_2933 =
													((long) (BgL_offsetz00_2932) - OBJECT_TYPE);
												{	/* Cfa/collect.scm 294 */
													long BgL_modz00_2934;

													{	/* Cfa/collect.scm 294 */
														int BgL_arg2645z00_2935;

														BgL_arg2645z00_2935 = (int) (((long) 16));
														{	/* Cfa/collect.scm 294 */
															long BgL_auxz00_3670;

															BgL_auxz00_3670 = (long) (BgL_arg2645z00_2935);
															BgL_modz00_2934 =
																(BgL_offsetz00_2933 / BgL_auxz00_3670);
													}}
													{	/* Cfa/collect.scm 294 */
														long BgL_restz00_2936;

														{	/* Cfa/collect.scm 294 */
															int BgL_arg2644z00_2937;

															BgL_arg2644z00_2937 = (int) (((long) 16));
															{	/* Cfa/collect.scm 294 */
																long BgL_auxz00_3674;

																BgL_auxz00_3674 = (long) (BgL_arg2644z00_2937);
																BgL_restz00_2936 =
																	(BgL_offsetz00_2933 % BgL_auxz00_3674);
														}}
														{	/* Cfa/collect.scm 294 */

															BgL_method5345z00_2926 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2931,
																	(int) (BgL_modz00_2934)),
																(int) (BgL_restz00_2936));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method5345z00_2926) (BgL_method5345z00_2926,
								(obj_t) (BgL_arg5630z00_2132),
								(obj_t) (BgL_ownerz00_2925), BEOA);
						}
					}
				}
			}
		}
	}



/* node-collect!-let-fu5376 */
	obj_t BGl_nodezd2collectz12zd2letzd2fu5376zc0zzcfa_collectz00(obj_t
		BgL_envz00_3210, obj_t BgL_nodez00_3211, obj_t BgL_ownerz00_3212)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 278 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_2100;

				obj_t BgL_ownerz00_2101;

				BgL_nodez00_2100 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_3211);
				BgL_ownerz00_2101 = BgL_ownerz00_3212;
				{	/* Cfa/collect.scm 280 */
					obj_t BgL_g5338z00_2105;

					BgL_g5338z00_2105 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_2100))->BgL_localsz00);
					{
						obj_t BgL_l5336z00_2107;

						BgL_l5336z00_2107 = BgL_g5338z00_2105;
					BgL_zc3anonymousza35620ze3z83_2108:
						if (PAIRP(BgL_l5336z00_2107))
							{	/* Cfa/collect.scm 280 */
								{	/* Cfa/collect.scm 281 */
									obj_t BgL_lz00_2110;

									BgL_lz00_2110 = CAR(BgL_l5336z00_2107);
									{	/* Cfa/collect.scm 281 */
										BgL_valuez00_bglt BgL_fz00_2111;

										{
											BgL_variablez00_bglt BgL_auxz00_3690;

											BgL_auxz00_3690 = (BgL_variablez00_bglt) (BgL_lz00_2110);
											BgL_fz00_2111 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_3690))->
												BgL_valuez00);
										}
										{	/* Cfa/collect.scm 282 */
											obj_t BgL_arg5622z00_2112;

											{
												BgL_sfunz00_bglt BgL_auxz00_3693;

												BgL_auxz00_3693 = (BgL_sfunz00_bglt) (BgL_fz00_2111);
												BgL_arg5622z00_2112 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3693))->
													BgL_bodyz00);
											}
											{	/* Cfa/collect.scm 282 */
												BgL_nodez00_bglt BgL_nodez00_2835;

												BgL_variablez00_bglt BgL_ownerz00_2836;

												BgL_nodez00_2835 =
													(BgL_nodez00_bglt) (BgL_arg5622z00_2112);
												BgL_ownerz00_2836 =
													(BgL_variablez00_bglt) (BgL_lz00_2110);
												{	/* Cfa/collect.scm 282 */
													obj_t BgL_method5345z00_2837;

													{	/* Cfa/collect.scm 282 */
														BgL_objectz00_bglt BgL_objz00_2838;

														BgL_objz00_2838 =
															(BgL_objectz00_bglt) (BgL_nodez00_2835);
														{	/* Cfa/collect.scm 282 */
															long BgL_objzd2classzd2numz00_2839;

															BgL_objzd2classzd2numz00_2839 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2838);
															{	/* Cfa/collect.scm 282 */
																obj_t BgL_arg2643z00_2840;

																BgL_arg2643z00_2840 =
																	PROCEDURE_REF
																	(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
																	(int) (((long) 1)));
																{	/* Cfa/collect.scm 282 */
																	obj_t BgL_arrayz00_2842;

																	int BgL_offsetz00_2843;

																	BgL_arrayz00_2842 = BgL_arg2643z00_2840;
																	BgL_offsetz00_2843 =
																		(int) (BgL_objzd2classzd2numz00_2839);
																	{	/* Cfa/collect.scm 282 */
																		long BgL_offsetz00_2844;

																		BgL_offsetz00_2844 =
																			(
																			(long) (BgL_offsetz00_2843) -
																			OBJECT_TYPE);
																		{	/* Cfa/collect.scm 282 */
																			long BgL_modz00_2845;

																			{	/* Cfa/collect.scm 282 */
																				int BgL_arg2645z00_2846;

																				BgL_arg2645z00_2846 =
																					(int) (((long) 16));
																				{	/* Cfa/collect.scm 282 */
																					long BgL_auxz00_3706;

																					BgL_auxz00_3706 =
																						(long) (BgL_arg2645z00_2846);
																					BgL_modz00_2845 =
																						(BgL_offsetz00_2844 /
																						BgL_auxz00_3706);
																			}}
																			{	/* Cfa/collect.scm 282 */
																				long BgL_restz00_2847;

																				{	/* Cfa/collect.scm 282 */
																					int BgL_arg2644z00_2848;

																					BgL_arg2644z00_2848 =
																						(int) (((long) 16));
																					{	/* Cfa/collect.scm 282 */
																						long BgL_auxz00_3710;

																						BgL_auxz00_3710 =
																							(long) (BgL_arg2644z00_2848);
																						BgL_restz00_2847 =
																							(BgL_offsetz00_2844 %
																							BgL_auxz00_3710);
																				}}
																				{	/* Cfa/collect.scm 282 */

																					BgL_method5345z00_2837 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2842,
																							(int) (BgL_modz00_2845)),
																						(int) (BgL_restz00_2847));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method5345z00_2837)
														(BgL_method5345z00_2837, (obj_t) (BgL_nodez00_2835),
														(obj_t) (BgL_ownerz00_2836), BEOA);
								}}}}}
								{
									obj_t BgL_l5336z00_3721;

									BgL_l5336z00_3721 = CDR(BgL_l5336z00_2107);
									BgL_l5336z00_2107 = BgL_l5336z00_3721;
									goto BgL_zc3anonymousza35620ze3z83_2108;
								}
							}
						else
							{	/* Cfa/collect.scm 280 */
								((bool_t) 1);
							}
					}
				}
				{	/* Cfa/collect.scm 284 */
					BgL_nodez00_bglt BgL_arg5624z00_2115;

					BgL_arg5624z00_2115 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_2100))->BgL_bodyz00);
					{	/* Cfa/collect.scm 284 */
						BgL_variablez00_bglt BgL_ownerz00_2865;

						BgL_ownerz00_2865 = (BgL_variablez00_bglt) (BgL_ownerz00_2101);
						{	/* Cfa/collect.scm 284 */
							obj_t BgL_method5345z00_2866;

							{	/* Cfa/collect.scm 284 */
								BgL_objectz00_bglt BgL_objz00_2867;

								BgL_objz00_2867 = (BgL_objectz00_bglt) (BgL_arg5624z00_2115);
								{	/* Cfa/collect.scm 284 */
									long BgL_objzd2classzd2numz00_2868;

									BgL_objzd2classzd2numz00_2868 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2867);
									{	/* Cfa/collect.scm 284 */
										obj_t BgL_arg2643z00_2869;

										BgL_arg2643z00_2869 =
											PROCEDURE_REF
											(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
											(int) (((long) 1)));
										{	/* Cfa/collect.scm 284 */
											obj_t BgL_arrayz00_2871;

											int BgL_offsetz00_2872;

											BgL_arrayz00_2871 = BgL_arg2643z00_2869;
											BgL_offsetz00_2872 =
												(int) (BgL_objzd2classzd2numz00_2868);
											{	/* Cfa/collect.scm 284 */
												long BgL_offsetz00_2873;

												BgL_offsetz00_2873 =
													((long) (BgL_offsetz00_2872) - OBJECT_TYPE);
												{	/* Cfa/collect.scm 284 */
													long BgL_modz00_2874;

													{	/* Cfa/collect.scm 284 */
														int BgL_arg2645z00_2875;

														BgL_arg2645z00_2875 = (int) (((long) 16));
														{	/* Cfa/collect.scm 284 */
															long BgL_auxz00_3733;

															BgL_auxz00_3733 = (long) (BgL_arg2645z00_2875);
															BgL_modz00_2874 =
																(BgL_offsetz00_2873 / BgL_auxz00_3733);
													}}
													{	/* Cfa/collect.scm 284 */
														long BgL_restz00_2876;

														{	/* Cfa/collect.scm 284 */
															int BgL_arg2644z00_2877;

															BgL_arg2644z00_2877 = (int) (((long) 16));
															{	/* Cfa/collect.scm 284 */
																long BgL_auxz00_3737;

																BgL_auxz00_3737 = (long) (BgL_arg2644z00_2877);
																BgL_restz00_2876 =
																	(BgL_offsetz00_2873 % BgL_auxz00_3737);
														}}
														{	/* Cfa/collect.scm 284 */

															BgL_method5345z00_2866 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2871,
																	(int) (BgL_modz00_2874)),
																(int) (BgL_restz00_2876));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method5345z00_2866) (BgL_method5345z00_2866,
								(obj_t) (BgL_arg5624z00_2115),
								(obj_t) (BgL_ownerz00_2865), BEOA);
						}
					}
				}
			}
		}
	}



/* node-collect!-select5374 */
	obj_t BGl_nodezd2collectz12zd2select5374z12zzcfa_collectz00(obj_t
		BgL_envz00_3213, obj_t BgL_nodez00_3214, obj_t BgL_ownerz00_3215)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 268 */
			{
				BgL_selectz00_bglt BgL_nodez00_2083;

				obj_t BgL_ownerz00_2084;

				{	/* Cfa/collect.scm 269 */
					bool_t BgL_auxz00_3749;

					BgL_nodez00_2083 = (BgL_selectz00_bglt) (BgL_nodez00_3214);
					BgL_ownerz00_2084 = BgL_ownerz00_3215;
					{	/* Cfa/collect.scm 270 */
						BgL_nodez00_bglt BgL_arg5614z00_2088;

						BgL_arg5614z00_2088 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_2083))->BgL_testz00);
						{	/* Cfa/collect.scm 270 */
							BgL_variablez00_bglt BgL_ownerz00_2772;

							BgL_ownerz00_2772 = (BgL_variablez00_bglt) (BgL_ownerz00_2084);
							{	/* Cfa/collect.scm 270 */
								obj_t BgL_method5345z00_2773;

								{	/* Cfa/collect.scm 270 */
									BgL_objectz00_bglt BgL_objz00_2774;

									BgL_objz00_2774 = (BgL_objectz00_bglt) (BgL_arg5614z00_2088);
									{	/* Cfa/collect.scm 270 */
										long BgL_objzd2classzd2numz00_2775;

										BgL_objzd2classzd2numz00_2775 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2774);
										{	/* Cfa/collect.scm 270 */
											obj_t BgL_arg2643z00_2776;

											BgL_arg2643z00_2776 =
												PROCEDURE_REF
												(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
												(int) (((long) 1)));
											{	/* Cfa/collect.scm 270 */
												obj_t BgL_arrayz00_2778;

												int BgL_offsetz00_2779;

												BgL_arrayz00_2778 = BgL_arg2643z00_2776;
												BgL_offsetz00_2779 =
													(int) (BgL_objzd2classzd2numz00_2775);
												{	/* Cfa/collect.scm 270 */
													long BgL_offsetz00_2780;

													BgL_offsetz00_2780 =
														((long) (BgL_offsetz00_2779) - OBJECT_TYPE);
													{	/* Cfa/collect.scm 270 */
														long BgL_modz00_2781;

														{	/* Cfa/collect.scm 270 */
															int BgL_arg2645z00_2782;

															BgL_arg2645z00_2782 = (int) (((long) 16));
															{	/* Cfa/collect.scm 270 */
																long BgL_auxz00_3760;

																BgL_auxz00_3760 = (long) (BgL_arg2645z00_2782);
																BgL_modz00_2781 =
																	(BgL_offsetz00_2780 / BgL_auxz00_3760);
														}}
														{	/* Cfa/collect.scm 270 */
															long BgL_restz00_2783;

															{	/* Cfa/collect.scm 270 */
																int BgL_arg2644z00_2784;

																BgL_arg2644z00_2784 = (int) (((long) 16));
																{	/* Cfa/collect.scm 270 */
																	long BgL_auxz00_3764;

																	BgL_auxz00_3764 =
																		(long) (BgL_arg2644z00_2784);
																	BgL_restz00_2783 =
																		(BgL_offsetz00_2780 % BgL_auxz00_3764);
															}}
															{	/* Cfa/collect.scm 270 */

																BgL_method5345z00_2773 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2778,
																		(int) (BgL_modz00_2781)),
																	(int) (BgL_restz00_2783));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method5345z00_2773) (BgL_method5345z00_2773,
									(obj_t) (BgL_arg5614z00_2088),
									(obj_t) (BgL_ownerz00_2772), BEOA);
					}}}
					{	/* Cfa/collect.scm 271 */
						obj_t BgL_g5335z00_2089;

						BgL_g5335z00_2089 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_2083))->BgL_clausesz00);
						{
							obj_t BgL_l5333z00_2091;

							BgL_l5333z00_2091 = BgL_g5335z00_2089;
						BgL_zc3anonymousza35615ze3z83_2092:
							if (PAIRP(BgL_l5333z00_2091))
								{	/* Cfa/collect.scm 271 */
									{	/* Cfa/collect.scm 272 */
										obj_t BgL_clausez00_2094;

										BgL_clausez00_2094 = CAR(BgL_l5333z00_2091);
										{	/* Cfa/collect.scm 272 */
											obj_t BgL_arg5617z00_2095;

											BgL_arg5617z00_2095 = CDR(BgL_clausez00_2094);
											{	/* Cfa/collect.scm 272 */
												BgL_nodez00_bglt BgL_nodez00_2802;

												BgL_variablez00_bglt BgL_ownerz00_2803;

												BgL_nodez00_2802 =
													(BgL_nodez00_bglt) (BgL_arg5617z00_2095);
												BgL_ownerz00_2803 =
													(BgL_variablez00_bglt) (BgL_ownerz00_2084);
												{	/* Cfa/collect.scm 272 */
													obj_t BgL_method5345z00_2804;

													{	/* Cfa/collect.scm 272 */
														BgL_objectz00_bglt BgL_objz00_2805;

														BgL_objz00_2805 =
															(BgL_objectz00_bglt) (BgL_nodez00_2802);
														{	/* Cfa/collect.scm 272 */
															long BgL_objzd2classzd2numz00_2806;

															BgL_objzd2classzd2numz00_2806 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2805);
															{	/* Cfa/collect.scm 272 */
																obj_t BgL_arg2643z00_2807;

																BgL_arg2643z00_2807 =
																	PROCEDURE_REF
																	(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
																	(int) (((long) 1)));
																{	/* Cfa/collect.scm 272 */
																	obj_t BgL_arrayz00_2809;

																	int BgL_offsetz00_2810;

																	BgL_arrayz00_2809 = BgL_arg2643z00_2807;
																	BgL_offsetz00_2810 =
																		(int) (BgL_objzd2classzd2numz00_2806);
																	{	/* Cfa/collect.scm 272 */
																		long BgL_offsetz00_2811;

																		BgL_offsetz00_2811 =
																			(
																			(long) (BgL_offsetz00_2810) -
																			OBJECT_TYPE);
																		{	/* Cfa/collect.scm 272 */
																			long BgL_modz00_2812;

																			{	/* Cfa/collect.scm 272 */
																				int BgL_arg2645z00_2813;

																				BgL_arg2645z00_2813 =
																					(int) (((long) 16));
																				{	/* Cfa/collect.scm 272 */
																					long BgL_auxz00_3790;

																					BgL_auxz00_3790 =
																						(long) (BgL_arg2645z00_2813);
																					BgL_modz00_2812 =
																						(BgL_offsetz00_2811 /
																						BgL_auxz00_3790);
																			}}
																			{	/* Cfa/collect.scm 272 */
																				long BgL_restz00_2814;

																				{	/* Cfa/collect.scm 272 */
																					int BgL_arg2644z00_2815;

																					BgL_arg2644z00_2815 =
																						(int) (((long) 16));
																					{	/* Cfa/collect.scm 272 */
																						long BgL_auxz00_3794;

																						BgL_auxz00_3794 =
																							(long) (BgL_arg2644z00_2815);
																						BgL_restz00_2814 =
																							(BgL_offsetz00_2811 %
																							BgL_auxz00_3794);
																				}}
																				{	/* Cfa/collect.scm 272 */

																					BgL_method5345z00_2804 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2809,
																							(int) (BgL_modz00_2812)),
																						(int) (BgL_restz00_2814));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method5345z00_2804)
														(BgL_method5345z00_2804, (obj_t) (BgL_nodez00_2802),
														(obj_t) (BgL_ownerz00_2803), BEOA);
									}}}}
									{
										obj_t BgL_l5333z00_3805;

										BgL_l5333z00_3805 = CDR(BgL_l5333z00_2091);
										BgL_l5333z00_2091 = BgL_l5333z00_3805;
										goto BgL_zc3anonymousza35615ze3z83_2092;
									}
								}
							else
								{	/* Cfa/collect.scm 271 */
									BgL_auxz00_3749 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_3749);
				}
			}
		}
	}



/* node-collect!-fail5372 */
	obj_t BGl_nodezd2collectz12zd2fail5372z12zzcfa_collectz00(obj_t
		BgL_envz00_3216, obj_t BgL_nodez00_3217, obj_t BgL_ownerz00_3218)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 259 */
			{
				BgL_failz00_bglt BgL_nodez00_2073;

				obj_t BgL_ownerz00_2074;

				BgL_nodez00_2073 = (BgL_failz00_bglt) (BgL_nodez00_3217);
				BgL_ownerz00_2074 = BgL_ownerz00_3218;
				{	/* Cfa/collect.scm 261 */
					BgL_nodez00_bglt BgL_arg5610z00_2078;

					BgL_arg5610z00_2078 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_2073))->BgL_procz00);
					{	/* Cfa/collect.scm 261 */
						BgL_variablez00_bglt BgL_ownerz00_2688;

						BgL_ownerz00_2688 = (BgL_variablez00_bglt) (BgL_ownerz00_2074);
						{	/* Cfa/collect.scm 261 */
							obj_t BgL_method5345z00_2689;

							{	/* Cfa/collect.scm 261 */
								BgL_objectz00_bglt BgL_objz00_2690;

								BgL_objz00_2690 = (BgL_objectz00_bglt) (BgL_arg5610z00_2078);
								{	/* Cfa/collect.scm 261 */
									long BgL_objzd2classzd2numz00_2691;

									BgL_objzd2classzd2numz00_2691 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2690);
									{	/* Cfa/collect.scm 261 */
										obj_t BgL_arg2643z00_2692;

										BgL_arg2643z00_2692 =
											PROCEDURE_REF
											(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
											(int) (((long) 1)));
										{	/* Cfa/collect.scm 261 */
											obj_t BgL_arrayz00_2694;

											int BgL_offsetz00_2695;

											BgL_arrayz00_2694 = BgL_arg2643z00_2692;
											BgL_offsetz00_2695 =
												(int) (BgL_objzd2classzd2numz00_2691);
											{	/* Cfa/collect.scm 261 */
												long BgL_offsetz00_2696;

												BgL_offsetz00_2696 =
													((long) (BgL_offsetz00_2695) - OBJECT_TYPE);
												{	/* Cfa/collect.scm 261 */
													long BgL_modz00_2697;

													{	/* Cfa/collect.scm 261 */
														int BgL_arg2645z00_2698;

														BgL_arg2645z00_2698 = (int) (((long) 16));
														{	/* Cfa/collect.scm 261 */
															long BgL_auxz00_3819;

															BgL_auxz00_3819 = (long) (BgL_arg2645z00_2698);
															BgL_modz00_2697 =
																(BgL_offsetz00_2696 / BgL_auxz00_3819);
													}}
													{	/* Cfa/collect.scm 261 */
														long BgL_restz00_2699;

														{	/* Cfa/collect.scm 261 */
															int BgL_arg2644z00_2700;

															BgL_arg2644z00_2700 = (int) (((long) 16));
															{	/* Cfa/collect.scm 261 */
																long BgL_auxz00_3823;

																BgL_auxz00_3823 = (long) (BgL_arg2644z00_2700);
																BgL_restz00_2699 =
																	(BgL_offsetz00_2696 % BgL_auxz00_3823);
														}}
														{	/* Cfa/collect.scm 261 */

															BgL_method5345z00_2689 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2694,
																	(int) (BgL_modz00_2697)),
																(int) (BgL_restz00_2699));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5345z00_2689) (BgL_method5345z00_2689,
								(obj_t) (BgL_arg5610z00_2078),
								(obj_t) (BgL_ownerz00_2688), BEOA);
				}}}
				{	/* Cfa/collect.scm 262 */
					BgL_nodez00_bglt BgL_arg5611z00_2079;

					BgL_arg5611z00_2079 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_2073))->BgL_msgz00);
					{	/* Cfa/collect.scm 262 */
						BgL_variablez00_bglt BgL_ownerz00_2716;

						BgL_ownerz00_2716 = (BgL_variablez00_bglt) (BgL_ownerz00_2074);
						{	/* Cfa/collect.scm 262 */
							obj_t BgL_method5345z00_2717;

							{	/* Cfa/collect.scm 262 */
								BgL_objectz00_bglt BgL_objz00_2718;

								BgL_objz00_2718 = (BgL_objectz00_bglt) (BgL_arg5611z00_2079);
								{	/* Cfa/collect.scm 262 */
									long BgL_objzd2classzd2numz00_2719;

									BgL_objzd2classzd2numz00_2719 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2718);
									{	/* Cfa/collect.scm 262 */
										obj_t BgL_arg2643z00_2720;

										BgL_arg2643z00_2720 =
											PROCEDURE_REF
											(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
											(int) (((long) 1)));
										{	/* Cfa/collect.scm 262 */
											obj_t BgL_arrayz00_2722;

											int BgL_offsetz00_2723;

											BgL_arrayz00_2722 = BgL_arg2643z00_2720;
											BgL_offsetz00_2723 =
												(int) (BgL_objzd2classzd2numz00_2719);
											{	/* Cfa/collect.scm 262 */
												long BgL_offsetz00_2724;

												BgL_offsetz00_2724 =
													((long) (BgL_offsetz00_2723) - OBJECT_TYPE);
												{	/* Cfa/collect.scm 262 */
													long BgL_modz00_2725;

													{	/* Cfa/collect.scm 262 */
														int BgL_arg2645z00_2726;

														BgL_arg2645z00_2726 = (int) (((long) 16));
														{	/* Cfa/collect.scm 262 */
															long BgL_auxz00_3844;

															BgL_auxz00_3844 = (long) (BgL_arg2645z00_2726);
															BgL_modz00_2725 =
																(BgL_offsetz00_2724 / BgL_auxz00_3844);
													}}
													{	/* Cfa/collect.scm 262 */
														long BgL_restz00_2727;

														{	/* Cfa/collect.scm 262 */
															int BgL_arg2644z00_2728;

															BgL_arg2644z00_2728 = (int) (((long) 16));
															{	/* Cfa/collect.scm 262 */
																long BgL_auxz00_3848;

																BgL_auxz00_3848 = (long) (BgL_arg2644z00_2728);
																BgL_restz00_2727 =
																	(BgL_offsetz00_2724 % BgL_auxz00_3848);
														}}
														{	/* Cfa/collect.scm 262 */

															BgL_method5345z00_2717 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2722,
																	(int) (BgL_modz00_2725)),
																(int) (BgL_restz00_2727));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5345z00_2717) (BgL_method5345z00_2717,
								(obj_t) (BgL_arg5611z00_2079),
								(obj_t) (BgL_ownerz00_2716), BEOA);
				}}}
				{	/* Cfa/collect.scm 263 */
					BgL_nodez00_bglt BgL_arg5612z00_2080;

					BgL_arg5612z00_2080 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_2073))->BgL_objz00);
					{	/* Cfa/collect.scm 263 */
						BgL_variablez00_bglt BgL_ownerz00_2744;

						BgL_ownerz00_2744 = (BgL_variablez00_bglt) (BgL_ownerz00_2074);
						{	/* Cfa/collect.scm 263 */
							obj_t BgL_method5345z00_2745;

							{	/* Cfa/collect.scm 263 */
								BgL_objectz00_bglt BgL_objz00_2746;

								BgL_objz00_2746 = (BgL_objectz00_bglt) (BgL_arg5612z00_2080);
								{	/* Cfa/collect.scm 263 */
									long BgL_objzd2classzd2numz00_2747;

									BgL_objzd2classzd2numz00_2747 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2746);
									{	/* Cfa/collect.scm 263 */
										obj_t BgL_arg2643z00_2748;

										BgL_arg2643z00_2748 =
											PROCEDURE_REF
											(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
											(int) (((long) 1)));
										{	/* Cfa/collect.scm 263 */
											obj_t BgL_arrayz00_2750;

											int BgL_offsetz00_2751;

											BgL_arrayz00_2750 = BgL_arg2643z00_2748;
											BgL_offsetz00_2751 =
												(int) (BgL_objzd2classzd2numz00_2747);
											{	/* Cfa/collect.scm 263 */
												long BgL_offsetz00_2752;

												BgL_offsetz00_2752 =
													((long) (BgL_offsetz00_2751) - OBJECT_TYPE);
												{	/* Cfa/collect.scm 263 */
													long BgL_modz00_2753;

													{	/* Cfa/collect.scm 263 */
														int BgL_arg2645z00_2754;

														BgL_arg2645z00_2754 = (int) (((long) 16));
														{	/* Cfa/collect.scm 263 */
															long BgL_auxz00_3869;

															BgL_auxz00_3869 = (long) (BgL_arg2645z00_2754);
															BgL_modz00_2753 =
																(BgL_offsetz00_2752 / BgL_auxz00_3869);
													}}
													{	/* Cfa/collect.scm 263 */
														long BgL_restz00_2755;

														{	/* Cfa/collect.scm 263 */
															int BgL_arg2644z00_2756;

															BgL_arg2644z00_2756 = (int) (((long) 16));
															{	/* Cfa/collect.scm 263 */
																long BgL_auxz00_3873;

																BgL_auxz00_3873 = (long) (BgL_arg2644z00_2756);
																BgL_restz00_2755 =
																	(BgL_offsetz00_2752 % BgL_auxz00_3873);
														}}
														{	/* Cfa/collect.scm 263 */

															BgL_method5345z00_2745 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2750,
																	(int) (BgL_modz00_2753)),
																(int) (BgL_restz00_2755));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method5345z00_2745) (BgL_method5345z00_2745,
								(obj_t) (BgL_arg5612z00_2080),
								(obj_t) (BgL_ownerz00_2744), BEOA);
						}
					}
				}
			}
		}
	}



/* node-collect!-condit5370 */
	obj_t BGl_nodezd2collectz12zd2condit5370z12zzcfa_collectz00(obj_t
		BgL_envz00_3219, obj_t BgL_nodez00_3220, obj_t BgL_ownerz00_3221)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 250 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_2063;

				obj_t BgL_ownerz00_2064;

				BgL_nodez00_2063 = (BgL_conditionalz00_bglt) (BgL_nodez00_3220);
				BgL_ownerz00_2064 = BgL_ownerz00_3221;
				{	/* Cfa/collect.scm 252 */
					BgL_nodez00_bglt BgL_arg5606z00_2068;

					BgL_arg5606z00_2068 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_2063))->BgL_testz00);
					{	/* Cfa/collect.scm 252 */
						BgL_variablez00_bglt BgL_ownerz00_2604;

						BgL_ownerz00_2604 = (BgL_variablez00_bglt) (BgL_ownerz00_2064);
						{	/* Cfa/collect.scm 252 */
							obj_t BgL_method5345z00_2605;

							{	/* Cfa/collect.scm 252 */
								BgL_objectz00_bglt BgL_objz00_2606;

								BgL_objz00_2606 = (BgL_objectz00_bglt) (BgL_arg5606z00_2068);
								{	/* Cfa/collect.scm 252 */
									long BgL_objzd2classzd2numz00_2607;

									BgL_objzd2classzd2numz00_2607 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2606);
									{	/* Cfa/collect.scm 252 */
										obj_t BgL_arg2643z00_2608;

										BgL_arg2643z00_2608 =
											PROCEDURE_REF
											(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
											(int) (((long) 1)));
										{	/* Cfa/collect.scm 252 */
											obj_t BgL_arrayz00_2610;

											int BgL_offsetz00_2611;

											BgL_arrayz00_2610 = BgL_arg2643z00_2608;
											BgL_offsetz00_2611 =
												(int) (BgL_objzd2classzd2numz00_2607);
											{	/* Cfa/collect.scm 252 */
												long BgL_offsetz00_2612;

												BgL_offsetz00_2612 =
													((long) (BgL_offsetz00_2611) - OBJECT_TYPE);
												{	/* Cfa/collect.scm 252 */
													long BgL_modz00_2613;

													{	/* Cfa/collect.scm 252 */
														int BgL_arg2645z00_2614;

														BgL_arg2645z00_2614 = (int) (((long) 16));
														{	/* Cfa/collect.scm 252 */
															long BgL_auxz00_3895;

															BgL_auxz00_3895 = (long) (BgL_arg2645z00_2614);
															BgL_modz00_2613 =
																(BgL_offsetz00_2612 / BgL_auxz00_3895);
													}}
													{	/* Cfa/collect.scm 252 */
														long BgL_restz00_2615;

														{	/* Cfa/collect.scm 252 */
															int BgL_arg2644z00_2616;

															BgL_arg2644z00_2616 = (int) (((long) 16));
															{	/* Cfa/collect.scm 252 */
																long BgL_auxz00_3899;

																BgL_auxz00_3899 = (long) (BgL_arg2644z00_2616);
																BgL_restz00_2615 =
																	(BgL_offsetz00_2612 % BgL_auxz00_3899);
														}}
														{	/* Cfa/collect.scm 252 */

															BgL_method5345z00_2605 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2610,
																	(int) (BgL_modz00_2613)),
																(int) (BgL_restz00_2615));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5345z00_2605) (BgL_method5345z00_2605,
								(obj_t) (BgL_arg5606z00_2068),
								(obj_t) (BgL_ownerz00_2604), BEOA);
				}}}
				{	/* Cfa/collect.scm 253 */
					BgL_nodez00_bglt BgL_arg5607z00_2069;

					BgL_arg5607z00_2069 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_2063))->BgL_truez00);
					{	/* Cfa/collect.scm 253 */
						BgL_variablez00_bglt BgL_ownerz00_2632;

						BgL_ownerz00_2632 = (BgL_variablez00_bglt) (BgL_ownerz00_2064);
						{	/* Cfa/collect.scm 253 */
							obj_t BgL_method5345z00_2633;

							{	/* Cfa/collect.scm 253 */
								BgL_objectz00_bglt BgL_objz00_2634;

								BgL_objz00_2634 = (BgL_objectz00_bglt) (BgL_arg5607z00_2069);
								{	/* Cfa/collect.scm 253 */
									long BgL_objzd2classzd2numz00_2635;

									BgL_objzd2classzd2numz00_2635 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2634);
									{	/* Cfa/collect.scm 253 */
										obj_t BgL_arg2643z00_2636;

										BgL_arg2643z00_2636 =
											PROCEDURE_REF
											(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
											(int) (((long) 1)));
										{	/* Cfa/collect.scm 253 */
											obj_t BgL_arrayz00_2638;

											int BgL_offsetz00_2639;

											BgL_arrayz00_2638 = BgL_arg2643z00_2636;
											BgL_offsetz00_2639 =
												(int) (BgL_objzd2classzd2numz00_2635);
											{	/* Cfa/collect.scm 253 */
												long BgL_offsetz00_2640;

												BgL_offsetz00_2640 =
													((long) (BgL_offsetz00_2639) - OBJECT_TYPE);
												{	/* Cfa/collect.scm 253 */
													long BgL_modz00_2641;

													{	/* Cfa/collect.scm 253 */
														int BgL_arg2645z00_2642;

														BgL_arg2645z00_2642 = (int) (((long) 16));
														{	/* Cfa/collect.scm 253 */
															long BgL_auxz00_3920;

															BgL_auxz00_3920 = (long) (BgL_arg2645z00_2642);
															BgL_modz00_2641 =
																(BgL_offsetz00_2640 / BgL_auxz00_3920);
													}}
													{	/* Cfa/collect.scm 253 */
														long BgL_restz00_2643;

														{	/* Cfa/collect.scm 253 */
															int BgL_arg2644z00_2644;

															BgL_arg2644z00_2644 = (int) (((long) 16));
															{	/* Cfa/collect.scm 253 */
																long BgL_auxz00_3924;

																BgL_auxz00_3924 = (long) (BgL_arg2644z00_2644);
																BgL_restz00_2643 =
																	(BgL_offsetz00_2640 % BgL_auxz00_3924);
														}}
														{	/* Cfa/collect.scm 253 */

															BgL_method5345z00_2633 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2638,
																	(int) (BgL_modz00_2641)),
																(int) (BgL_restz00_2643));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5345z00_2633) (BgL_method5345z00_2633,
								(obj_t) (BgL_arg5607z00_2069),
								(obj_t) (BgL_ownerz00_2632), BEOA);
				}}}
				{	/* Cfa/collect.scm 254 */
					BgL_nodez00_bglt BgL_arg5608z00_2070;

					BgL_arg5608z00_2070 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_2063))->BgL_falsez00);
					{	/* Cfa/collect.scm 254 */
						BgL_variablez00_bglt BgL_ownerz00_2660;

						BgL_ownerz00_2660 = (BgL_variablez00_bglt) (BgL_ownerz00_2064);
						{	/* Cfa/collect.scm 254 */
							obj_t BgL_method5345z00_2661;

							{	/* Cfa/collect.scm 254 */
								BgL_objectz00_bglt BgL_objz00_2662;

								BgL_objz00_2662 = (BgL_objectz00_bglt) (BgL_arg5608z00_2070);
								{	/* Cfa/collect.scm 254 */
									long BgL_objzd2classzd2numz00_2663;

									BgL_objzd2classzd2numz00_2663 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2662);
									{	/* Cfa/collect.scm 254 */
										obj_t BgL_arg2643z00_2664;

										BgL_arg2643z00_2664 =
											PROCEDURE_REF
											(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
											(int) (((long) 1)));
										{	/* Cfa/collect.scm 254 */
											obj_t BgL_arrayz00_2666;

											int BgL_offsetz00_2667;

											BgL_arrayz00_2666 = BgL_arg2643z00_2664;
											BgL_offsetz00_2667 =
												(int) (BgL_objzd2classzd2numz00_2663);
											{	/* Cfa/collect.scm 254 */
												long BgL_offsetz00_2668;

												BgL_offsetz00_2668 =
													((long) (BgL_offsetz00_2667) - OBJECT_TYPE);
												{	/* Cfa/collect.scm 254 */
													long BgL_modz00_2669;

													{	/* Cfa/collect.scm 254 */
														int BgL_arg2645z00_2670;

														BgL_arg2645z00_2670 = (int) (((long) 16));
														{	/* Cfa/collect.scm 254 */
															long BgL_auxz00_3945;

															BgL_auxz00_3945 = (long) (BgL_arg2645z00_2670);
															BgL_modz00_2669 =
																(BgL_offsetz00_2668 / BgL_auxz00_3945);
													}}
													{	/* Cfa/collect.scm 254 */
														long BgL_restz00_2671;

														{	/* Cfa/collect.scm 254 */
															int BgL_arg2644z00_2672;

															BgL_arg2644z00_2672 = (int) (((long) 16));
															{	/* Cfa/collect.scm 254 */
																long BgL_auxz00_3949;

																BgL_auxz00_3949 = (long) (BgL_arg2644z00_2672);
																BgL_restz00_2671 =
																	(BgL_offsetz00_2668 % BgL_auxz00_3949);
														}}
														{	/* Cfa/collect.scm 254 */

															BgL_method5345z00_2661 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2666,
																	(int) (BgL_modz00_2669)),
																(int) (BgL_restz00_2671));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method5345z00_2661) (BgL_method5345z00_2661,
								(obj_t) (BgL_arg5608z00_2070),
								(obj_t) (BgL_ownerz00_2660), BEOA);
						}
					}
				}
			}
		}
	}



/* node-collect!-setq5368 */
	obj_t BGl_nodezd2collectz12zd2setq5368z12zzcfa_collectz00(obj_t
		BgL_envz00_3222, obj_t BgL_nodez00_3223, obj_t BgL_ownerz00_3224)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 243 */
			{
				BgL_setqz00_bglt BgL_nodez00_2055;

				obj_t BgL_ownerz00_2056;

				BgL_nodez00_2055 = (BgL_setqz00_bglt) (BgL_nodez00_3223);
				BgL_ownerz00_2056 = BgL_ownerz00_3224;
				{	/* Cfa/collect.scm 244 */
					BgL_nodez00_bglt BgL_arg5604z00_2573;

					BgL_arg5604z00_2573 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_2055))->BgL_valuez00);
					{	/* Cfa/collect.scm 244 */
						BgL_variablez00_bglt BgL_ownerz00_2576;

						BgL_ownerz00_2576 = (BgL_variablez00_bglt) (BgL_ownerz00_2056);
						{	/* Cfa/collect.scm 244 */
							obj_t BgL_method5345z00_2577;

							{	/* Cfa/collect.scm 244 */
								BgL_objectz00_bglt BgL_objz00_2578;

								BgL_objz00_2578 = (BgL_objectz00_bglt) (BgL_arg5604z00_2573);
								{	/* Cfa/collect.scm 244 */
									long BgL_objzd2classzd2numz00_2579;

									BgL_objzd2classzd2numz00_2579 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2578);
									{	/* Cfa/collect.scm 244 */
										obj_t BgL_arg2643z00_2580;

										BgL_arg2643z00_2580 =
											PROCEDURE_REF
											(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
											(int) (((long) 1)));
										{	/* Cfa/collect.scm 244 */
											obj_t BgL_arrayz00_2582;

											int BgL_offsetz00_2583;

											BgL_arrayz00_2582 = BgL_arg2643z00_2580;
											BgL_offsetz00_2583 =
												(int) (BgL_objzd2classzd2numz00_2579);
											{	/* Cfa/collect.scm 244 */
												long BgL_offsetz00_2584;

												BgL_offsetz00_2584 =
													((long) (BgL_offsetz00_2583) - OBJECT_TYPE);
												{	/* Cfa/collect.scm 244 */
													long BgL_modz00_2585;

													{	/* Cfa/collect.scm 244 */
														int BgL_arg2645z00_2586;

														BgL_arg2645z00_2586 = (int) (((long) 16));
														{	/* Cfa/collect.scm 244 */
															long BgL_auxz00_3971;

															BgL_auxz00_3971 = (long) (BgL_arg2645z00_2586);
															BgL_modz00_2585 =
																(BgL_offsetz00_2584 / BgL_auxz00_3971);
													}}
													{	/* Cfa/collect.scm 244 */
														long BgL_restz00_2587;

														{	/* Cfa/collect.scm 244 */
															int BgL_arg2644z00_2588;

															BgL_arg2644z00_2588 = (int) (((long) 16));
															{	/* Cfa/collect.scm 244 */
																long BgL_auxz00_3975;

																BgL_auxz00_3975 = (long) (BgL_arg2644z00_2588);
																BgL_restz00_2587 =
																	(BgL_offsetz00_2584 % BgL_auxz00_3975);
														}}
														{	/* Cfa/collect.scm 244 */

															BgL_method5345z00_2577 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2582,
																	(int) (BgL_modz00_2585)),
																(int) (BgL_restz00_2587));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method5345z00_2577) (BgL_method5345z00_2577,
								(obj_t) (BgL_arg5604z00_2573),
								(obj_t) (BgL_ownerz00_2576), BEOA);
						}
					}
				}
			}
		}
	}



/* node-collect!-cast5366 */
	obj_t BGl_nodezd2collectz12zd2cast5366z12zzcfa_collectz00(obj_t
		BgL_envz00_3225, obj_t BgL_nodez00_3226, obj_t BgL_ownerz00_3227)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 236 */
			{
				BgL_castz00_bglt BgL_nodez00_2047;

				obj_t BgL_ownerz00_2048;

				BgL_nodez00_2047 = (BgL_castz00_bglt) (BgL_nodez00_3226);
				BgL_ownerz00_2048 = BgL_ownerz00_3227;
				{	/* Cfa/collect.scm 237 */
					BgL_nodez00_bglt BgL_arg5602z00_2543;

					BgL_arg5602z00_2543 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_2047))->BgL_argz00);
					{	/* Cfa/collect.scm 237 */
						BgL_variablez00_bglt BgL_ownerz00_2546;

						BgL_ownerz00_2546 = (BgL_variablez00_bglt) (BgL_ownerz00_2048);
						{	/* Cfa/collect.scm 237 */
							obj_t BgL_method5345z00_2547;

							{	/* Cfa/collect.scm 237 */
								BgL_objectz00_bglt BgL_objz00_2548;

								BgL_objz00_2548 = (BgL_objectz00_bglt) (BgL_arg5602z00_2543);
								{	/* Cfa/collect.scm 237 */
									long BgL_objzd2classzd2numz00_2549;

									BgL_objzd2classzd2numz00_2549 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2548);
									{	/* Cfa/collect.scm 237 */
										obj_t BgL_arg2643z00_2550;

										BgL_arg2643z00_2550 =
											PROCEDURE_REF
											(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
											(int) (((long) 1)));
										{	/* Cfa/collect.scm 237 */
											obj_t BgL_arrayz00_2552;

											int BgL_offsetz00_2553;

											BgL_arrayz00_2552 = BgL_arg2643z00_2550;
											BgL_offsetz00_2553 =
												(int) (BgL_objzd2classzd2numz00_2549);
											{	/* Cfa/collect.scm 237 */
												long BgL_offsetz00_2554;

												BgL_offsetz00_2554 =
													((long) (BgL_offsetz00_2553) - OBJECT_TYPE);
												{	/* Cfa/collect.scm 237 */
													long BgL_modz00_2555;

													{	/* Cfa/collect.scm 237 */
														int BgL_arg2645z00_2556;

														BgL_arg2645z00_2556 = (int) (((long) 16));
														{	/* Cfa/collect.scm 237 */
															long BgL_auxz00_3997;

															BgL_auxz00_3997 = (long) (BgL_arg2645z00_2556);
															BgL_modz00_2555 =
																(BgL_offsetz00_2554 / BgL_auxz00_3997);
													}}
													{	/* Cfa/collect.scm 237 */
														long BgL_restz00_2557;

														{	/* Cfa/collect.scm 237 */
															int BgL_arg2644z00_2558;

															BgL_arg2644z00_2558 = (int) (((long) 16));
															{	/* Cfa/collect.scm 237 */
																long BgL_auxz00_4001;

																BgL_auxz00_4001 = (long) (BgL_arg2644z00_2558);
																BgL_restz00_2557 =
																	(BgL_offsetz00_2554 % BgL_auxz00_4001);
														}}
														{	/* Cfa/collect.scm 237 */

															BgL_method5345z00_2547 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2552,
																	(int) (BgL_modz00_2555)),
																(int) (BgL_restz00_2557));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method5345z00_2547) (BgL_method5345z00_2547,
								(obj_t) (BgL_arg5602z00_2543),
								(obj_t) (BgL_ownerz00_2546), BEOA);
						}
					}
				}
			}
		}
	}



/* node-collect!-extern5364 */
	obj_t BGl_nodezd2collectz12zd2extern5364z12zzcfa_collectz00(obj_t
		BgL_envz00_3228, obj_t BgL_nodez00_3229, obj_t BgL_ownerz00_3230)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 229 */
			{
				BgL_externz00_bglt BgL_nodez00_2039;

				obj_t BgL_ownerz00_2040;

				{	/* Cfa/collect.scm 230 */
					bool_t BgL_auxz00_4013;

					BgL_nodez00_2039 = (BgL_externz00_bglt) (BgL_nodez00_3229);
					BgL_ownerz00_2040 = BgL_ownerz00_3230;
					{	/* Cfa/collect.scm 230 */
						obj_t BgL_arg5600z00_2540;

						BgL_arg5600z00_2540 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_2039))->BgL_exprza2za2);
						BgL_auxz00_4013 =
							BGl_nodezd2collectza2z12z62zzcfa_collectz00(BgL_arg5600z00_2540,
							BgL_ownerz00_2040);
					}
					return BBOOL(BgL_auxz00_4013);
				}
			}
		}
	}



/* node-collect!-funcal5362 */
	obj_t BGl_nodezd2collectz12zd2funcal5362z12zzcfa_collectz00(obj_t
		BgL_envz00_3231, obj_t BgL_nodez00_3232, obj_t BgL_ownerz00_3233)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 220 */
			{
				BgL_funcallz00_bglt BgL_nodez00_2030;

				obj_t BgL_ownerz00_2031;

				{	/* Cfa/collect.scm 221 */
					bool_t BgL_auxz00_4018;

					BgL_nodez00_2030 = (BgL_funcallz00_bglt) (BgL_nodez00_3232);
					BgL_ownerz00_2031 = BgL_ownerz00_3233;
					BGl_addzd2funcallz12zc0zzcfa_closurez00(
						(BgL_nodez00_bglt) (BgL_nodez00_2030));
					{	/* Cfa/collect.scm 223 */
						BgL_nodez00_bglt BgL_arg5597z00_2035;

						BgL_arg5597z00_2035 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_2030))->BgL_funz00);
						{	/* Cfa/collect.scm 223 */
							BgL_variablez00_bglt BgL_ownerz00_2512;

							BgL_ownerz00_2512 = (BgL_variablez00_bglt) (BgL_ownerz00_2031);
							{	/* Cfa/collect.scm 223 */
								obj_t BgL_method5345z00_2513;

								{	/* Cfa/collect.scm 223 */
									BgL_objectz00_bglt BgL_objz00_2514;

									BgL_objz00_2514 = (BgL_objectz00_bglt) (BgL_arg5597z00_2035);
									{	/* Cfa/collect.scm 223 */
										long BgL_objzd2classzd2numz00_2515;

										BgL_objzd2classzd2numz00_2515 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2514);
										{	/* Cfa/collect.scm 223 */
											obj_t BgL_arg2643z00_2516;

											BgL_arg2643z00_2516 =
												PROCEDURE_REF
												(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
												(int) (((long) 1)));
											{	/* Cfa/collect.scm 223 */
												obj_t BgL_arrayz00_2518;

												int BgL_offsetz00_2519;

												BgL_arrayz00_2518 = BgL_arg2643z00_2516;
												BgL_offsetz00_2519 =
													(int) (BgL_objzd2classzd2numz00_2515);
												{	/* Cfa/collect.scm 223 */
													long BgL_offsetz00_2520;

													BgL_offsetz00_2520 =
														((long) (BgL_offsetz00_2519) - OBJECT_TYPE);
													{	/* Cfa/collect.scm 223 */
														long BgL_modz00_2521;

														{	/* Cfa/collect.scm 223 */
															int BgL_arg2645z00_2522;

															BgL_arg2645z00_2522 = (int) (((long) 16));
															{	/* Cfa/collect.scm 223 */
																long BgL_auxz00_4031;

																BgL_auxz00_4031 = (long) (BgL_arg2645z00_2522);
																BgL_modz00_2521 =
																	(BgL_offsetz00_2520 / BgL_auxz00_4031);
														}}
														{	/* Cfa/collect.scm 223 */
															long BgL_restz00_2523;

															{	/* Cfa/collect.scm 223 */
																int BgL_arg2644z00_2524;

																BgL_arg2644z00_2524 = (int) (((long) 16));
																{	/* Cfa/collect.scm 223 */
																	long BgL_auxz00_4035;

																	BgL_auxz00_4035 =
																		(long) (BgL_arg2644z00_2524);
																	BgL_restz00_2523 =
																		(BgL_offsetz00_2520 % BgL_auxz00_4035);
															}}
															{	/* Cfa/collect.scm 223 */

																BgL_method5345z00_2513 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2518,
																		(int) (BgL_modz00_2521)),
																	(int) (BgL_restz00_2523));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method5345z00_2513) (BgL_method5345z00_2513,
									(obj_t) (BgL_arg5597z00_2035),
									(obj_t) (BgL_ownerz00_2512), BEOA);
					}}}
					{	/* Cfa/collect.scm 224 */
						obj_t BgL_arg5598z00_2036;

						BgL_arg5598z00_2036 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_2030))->BgL_argsz00);
						BgL_auxz00_4018 =
							BGl_nodezd2collectza2z12z62zzcfa_collectz00(BgL_arg5598z00_2036,
							BgL_ownerz00_2031);
					}
					return BBOOL(BgL_auxz00_4018);
				}
			}
		}
	}



/* node-collect!-app-ly5360 */
	obj_t BGl_nodezd2collectz12zd2appzd2ly5360zc0zzcfa_collectz00(obj_t
		BgL_envz00_3234, obj_t BgL_nodez00_3235, obj_t BgL_ownerz00_3236)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 212 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_2021;

				obj_t BgL_ownerz00_2022;

				BgL_nodez00_2021 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_3235);
				BgL_ownerz00_2022 = BgL_ownerz00_3236;
				{	/* Cfa/collect.scm 213 */
					BgL_nodez00_bglt BgL_arg5594z00_2452;

					BgL_arg5594z00_2452 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_2021))->BgL_funz00);
					{	/* Cfa/collect.scm 213 */
						BgL_variablez00_bglt BgL_ownerz00_2456;

						BgL_ownerz00_2456 = (BgL_variablez00_bglt) (BgL_ownerz00_2022);
						{	/* Cfa/collect.scm 213 */
							obj_t BgL_method5345z00_2457;

							{	/* Cfa/collect.scm 213 */
								BgL_objectz00_bglt BgL_objz00_2458;

								BgL_objz00_2458 = (BgL_objectz00_bglt) (BgL_arg5594z00_2452);
								{	/* Cfa/collect.scm 213 */
									long BgL_objzd2classzd2numz00_2459;

									BgL_objzd2classzd2numz00_2459 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2458);
									{	/* Cfa/collect.scm 213 */
										obj_t BgL_arg2643z00_2460;

										BgL_arg2643z00_2460 =
											PROCEDURE_REF
											(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
											(int) (((long) 1)));
										{	/* Cfa/collect.scm 213 */
											obj_t BgL_arrayz00_2462;

											int BgL_offsetz00_2463;

											BgL_arrayz00_2462 = BgL_arg2643z00_2460;
											BgL_offsetz00_2463 =
												(int) (BgL_objzd2classzd2numz00_2459);
											{	/* Cfa/collect.scm 213 */
												long BgL_offsetz00_2464;

												BgL_offsetz00_2464 =
													((long) (BgL_offsetz00_2463) - OBJECT_TYPE);
												{	/* Cfa/collect.scm 213 */
													long BgL_modz00_2465;

													{	/* Cfa/collect.scm 213 */
														int BgL_arg2645z00_2466;

														BgL_arg2645z00_2466 = (int) (((long) 16));
														{	/* Cfa/collect.scm 213 */
															long BgL_auxz00_4060;

															BgL_auxz00_4060 = (long) (BgL_arg2645z00_2466);
															BgL_modz00_2465 =
																(BgL_offsetz00_2464 / BgL_auxz00_4060);
													}}
													{	/* Cfa/collect.scm 213 */
														long BgL_restz00_2467;

														{	/* Cfa/collect.scm 213 */
															int BgL_arg2644z00_2468;

															BgL_arg2644z00_2468 = (int) (((long) 16));
															{	/* Cfa/collect.scm 213 */
																long BgL_auxz00_4064;

																BgL_auxz00_4064 = (long) (BgL_arg2644z00_2468);
																BgL_restz00_2467 =
																	(BgL_offsetz00_2464 % BgL_auxz00_4064);
														}}
														{	/* Cfa/collect.scm 213 */

															BgL_method5345z00_2457 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2462,
																	(int) (BgL_modz00_2465)),
																(int) (BgL_restz00_2467));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5345z00_2457) (BgL_method5345z00_2457,
								(obj_t) (BgL_arg5594z00_2452),
								(obj_t) (BgL_ownerz00_2456), BEOA);
				}}}
				{	/* Cfa/collect.scm 213 */
					BgL_nodez00_bglt BgL_arg5595z00_2453;

					BgL_arg5595z00_2453 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_2021))->BgL_argz00);
					{	/* Cfa/collect.scm 213 */
						BgL_variablez00_bglt BgL_ownerz00_2484;

						BgL_ownerz00_2484 = (BgL_variablez00_bglt) (BgL_ownerz00_2022);
						{	/* Cfa/collect.scm 213 */
							obj_t BgL_method5345z00_2485;

							{	/* Cfa/collect.scm 213 */
								BgL_objectz00_bglt BgL_objz00_2486;

								BgL_objz00_2486 = (BgL_objectz00_bglt) (BgL_arg5595z00_2453);
								{	/* Cfa/collect.scm 213 */
									long BgL_objzd2classzd2numz00_2487;

									BgL_objzd2classzd2numz00_2487 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2486);
									{	/* Cfa/collect.scm 213 */
										obj_t BgL_arg2643z00_2488;

										BgL_arg2643z00_2488 =
											PROCEDURE_REF
											(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
											(int) (((long) 1)));
										{	/* Cfa/collect.scm 213 */
											obj_t BgL_arrayz00_2490;

											int BgL_offsetz00_2491;

											BgL_arrayz00_2490 = BgL_arg2643z00_2488;
											BgL_offsetz00_2491 =
												(int) (BgL_objzd2classzd2numz00_2487);
											{	/* Cfa/collect.scm 213 */
												long BgL_offsetz00_2492;

												BgL_offsetz00_2492 =
													((long) (BgL_offsetz00_2491) - OBJECT_TYPE);
												{	/* Cfa/collect.scm 213 */
													long BgL_modz00_2493;

													{	/* Cfa/collect.scm 213 */
														int BgL_arg2645z00_2494;

														BgL_arg2645z00_2494 = (int) (((long) 16));
														{	/* Cfa/collect.scm 213 */
															long BgL_auxz00_4085;

															BgL_auxz00_4085 = (long) (BgL_arg2645z00_2494);
															BgL_modz00_2493 =
																(BgL_offsetz00_2492 / BgL_auxz00_4085);
													}}
													{	/* Cfa/collect.scm 213 */
														long BgL_restz00_2495;

														{	/* Cfa/collect.scm 213 */
															int BgL_arg2644z00_2496;

															BgL_arg2644z00_2496 = (int) (((long) 16));
															{	/* Cfa/collect.scm 213 */
																long BgL_auxz00_4089;

																BgL_auxz00_4089 = (long) (BgL_arg2644z00_2496);
																BgL_restz00_2495 =
																	(BgL_offsetz00_2492 % BgL_auxz00_4089);
														}}
														{	/* Cfa/collect.scm 213 */

															BgL_method5345z00_2485 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2490,
																	(int) (BgL_modz00_2493)),
																(int) (BgL_restz00_2495));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method5345z00_2485) (BgL_method5345z00_2485,
								(obj_t) (BgL_arg5595z00_2453),
								(obj_t) (BgL_ownerz00_2484), BEOA);
						}
					}
				}
			}
		}
	}



/* node-collect!-valloc5358 */
	obj_t BGl_nodezd2collectz12zd2valloc5358z12zzcfa_collectz00(obj_t
		BgL_envz00_3237, obj_t BgL_nodez00_3238, obj_t BgL_ownerz00_3239)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 201 */
			{
				BgL_vallocz00_bglt BgL_nodez00_2009;

				obj_t BgL_ownerz00_2010;

				BgL_nodez00_2009 = (BgL_vallocz00_bglt) (BgL_nodez00_3238);
				BgL_ownerz00_2010 = BgL_ownerz00_3239;
				{	/* Cfa/collect.scm 203 */
					obj_t BgL_arg5589z00_2014;

					{
						BgL_externz00_bglt BgL_auxz00_4101;

						BgL_auxz00_4101 = (BgL_externz00_bglt) (BgL_nodez00_2009);
						BgL_arg5589z00_2014 =
							(((BgL_externz00_bglt) CREF(BgL_auxz00_4101))->BgL_exprza2za2);
					}
					BGl_nodezd2collectza2z12z62zzcfa_collectz00(BgL_arg5589z00_2014,
						BgL_ownerz00_2010);
				}
				if (BGl_vectorzd2optimzf3z21zzcfa_vectorz00())
					{	/* Cfa/collect.scm 204 */
						BGl_za2usedzd2allocza2zd2zzcfa_collectz00 =
							MAKE_PAIR(
							(obj_t) (BgL_nodez00_2009),
							BGl_za2usedzd2allocza2zd2zzcfa_collectz00);
						{	/* Cfa/collect.scm 207 */
							BgL_vallocz00_bglt BgL_obj5301z00_2016;

							BgL_obj5301z00_2016 = ((BgL_vallocz00_bglt) BgL_nodez00_2009);
							{	/* Cfa/collect.scm 207 */
								obj_t BgL_auxz00_4112;

								BgL_objectz00_bglt BgL_auxz00_4110;

								BgL_auxz00_4112 =
									BGl_wideningzd2prezd2valloczf2Cinfozf2zzcfa_info3z00(
									(BgL_variablez00_bglt) (BgL_ownerz00_2010));
								BgL_auxz00_4110 = (BgL_objectz00_bglt) (BgL_obj5301z00_2016);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_4110, BgL_auxz00_4112);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_obj5301z00_2016),
								BGl_classzd2numzd2zz__objectz00
								(BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00));
							return (obj_t) (BgL_obj5301z00_2016);
						}
					}
				else
					{	/* Cfa/collect.scm 204 */
						return BFALSE;
					}
			}
		}
	}



/* node-collect!-app5356 */
	obj_t BGl_nodezd2collectz12zd2app5356z12zzcfa_collectz00(obj_t
		BgL_envz00_3240, obj_t BgL_nodez00_3241, obj_t BgL_ownerz00_3242)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 149 */
			{
				BgL_appz00_bglt BgL_nodez00_1945;

				obj_t BgL_ownerz00_1946;

				BgL_nodez00_1945 = (BgL_appz00_bglt) (BgL_nodez00_3241);
				BgL_ownerz00_1946 = BgL_ownerz00_3242;
				{	/* Cfa/collect.scm 151 */
					obj_t BgL_arg5546z00_1950;

					BgL_arg5546z00_1950 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_1945))->BgL_argsz00);
					BGl_nodezd2collectza2z12z62zzcfa_collectz00(BgL_arg5546z00_1950,
						BgL_ownerz00_1946);
				}
				{	/* Cfa/collect.scm 152 */
					BgL_varz00_bglt BgL_arg5547z00_1951;

					BgL_arg5547z00_1951 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_1945))->BgL_funz00);
					{	/* Cfa/collect.scm 152 */
						BgL_nodez00_bglt BgL_nodez00_2370;

						BgL_variablez00_bglt BgL_ownerz00_2371;

						BgL_nodez00_2370 = (BgL_nodez00_bglt) (BgL_arg5547z00_1951);
						BgL_ownerz00_2371 = (BgL_variablez00_bglt) (BgL_ownerz00_1946);
						{	/* Cfa/collect.scm 152 */
							obj_t BgL_method5345z00_2372;

							{	/* Cfa/collect.scm 152 */
								BgL_objectz00_bglt BgL_objz00_2373;

								BgL_objz00_2373 = (BgL_objectz00_bglt) (BgL_nodez00_2370);
								{	/* Cfa/collect.scm 152 */
									long BgL_objzd2classzd2numz00_2374;

									BgL_objzd2classzd2numz00_2374 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2373);
									{	/* Cfa/collect.scm 152 */
										obj_t BgL_arg2643z00_2375;

										BgL_arg2643z00_2375 =
											PROCEDURE_REF
											(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
											(int) (((long) 1)));
										{	/* Cfa/collect.scm 152 */
											obj_t BgL_arrayz00_2377;

											int BgL_offsetz00_2378;

											BgL_arrayz00_2377 = BgL_arg2643z00_2375;
											BgL_offsetz00_2378 =
												(int) (BgL_objzd2classzd2numz00_2374);
											{	/* Cfa/collect.scm 152 */
												long BgL_offsetz00_2379;

												BgL_offsetz00_2379 =
													((long) (BgL_offsetz00_2378) - OBJECT_TYPE);
												{	/* Cfa/collect.scm 152 */
													long BgL_modz00_2380;

													{	/* Cfa/collect.scm 152 */
														int BgL_arg2645z00_2381;

														BgL_arg2645z00_2381 = (int) (((long) 16));
														{	/* Cfa/collect.scm 152 */
															long BgL_auxz00_4134;

															BgL_auxz00_4134 = (long) (BgL_arg2645z00_2381);
															BgL_modz00_2380 =
																(BgL_offsetz00_2379 / BgL_auxz00_4134);
													}}
													{	/* Cfa/collect.scm 152 */
														long BgL_restz00_2382;

														{	/* Cfa/collect.scm 152 */
															int BgL_arg2644z00_2383;

															BgL_arg2644z00_2383 = (int) (((long) 16));
															{	/* Cfa/collect.scm 152 */
																long BgL_auxz00_4138;

																BgL_auxz00_4138 = (long) (BgL_arg2644z00_2383);
																BgL_restz00_2382 =
																	(BgL_offsetz00_2379 % BgL_auxz00_4138);
														}}
														{	/* Cfa/collect.scm 152 */

															BgL_method5345z00_2372 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2377,
																	(int) (BgL_modz00_2380)),
																(int) (BgL_restz00_2382));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5345z00_2372) (BgL_method5345z00_2372,
								(obj_t) (BgL_nodez00_2370), (obj_t) (BgL_ownerz00_2371), BEOA);
				}}}
				{	/* Cfa/collect.scm 153 */
					BgL_variablez00_bglt BgL_vz00_1952;

					{	/* Cfa/collect.scm 153 */
						BgL_varz00_bglt BgL_obj2263z00_2398;

						BgL_obj2263z00_2398 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1945))->BgL_funz00);
						BgL_vz00_1952 =
							(((BgL_varz00_bglt) CREF(BgL_obj2263z00_2398))->BgL_variablez00);
					}
					{	/* Cfa/collect.scm 154 */
						bool_t BgL_testz00_4151;

						{	/* Cfa/collect.scm 154 */
							obj_t BgL_obj1860z00_2399;

							BgL_obj1860z00_2399 = (obj_t) (BgL_vz00_1952);
							BgL_testz00_4151 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj1860z00_2399,
								BGl_globalz00zzast_varz00);
						}
						if (BgL_testz00_4151)
							{	/* Cfa/collect.scm 155 */
								bool_t BgL_testz00_4154;

								{	/* Cfa/collect.scm 155 */
									BgL_valuez00_bglt BgL_arg5586z00_2005;

									BgL_arg5586z00_2005 =
										(((BgL_variablez00_bglt) CREF(BgL_vz00_1952))->
										BgL_valuez00);
									{	/* Cfa/collect.scm 155 */
										obj_t BgL_obj2128z00_2401;

										BgL_obj2128z00_2401 = (obj_t) (BgL_arg5586z00_2005);
										BgL_testz00_4154 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj2128z00_2401,
											BGl_cfunz00zzast_varz00);
									}
								}
								if (BgL_testz00_4154)
									{	/* Cfa/collect.scm 155 */
										{	/* Cfa/collect.scm 161 */
											obj_t BgL_casezd2valuezd2_1955;

											BgL_casezd2valuezd2_1955 =
												(((BgL_variablez00_bglt) CREF(BgL_vz00_1952))->
												BgL_idz00);
											if ((BgL_casezd2valuezd2_1955 ==
													CNST_TABLE_REF(((long) 6))))
												{	/* Cfa/collect.scm 163 */
													bool_t BgL_testz00_4162;

													if (CBOOL
														(BGl_za2optimzd2cfazd2fixnumzd2arithmeticzf3za2z21zzengine_paramz00))
														{	/* Cfa/collect.scm 163 */
															BgL_testz00_4162 = ((bool_t) 1);
														}
													else
														{	/* Cfa/collect.scm 163 */
															BgL_testz00_4162 =
																CBOOL
																(BGl_za2optimzd2cfazd2flonumzd2arithmeticzf3za2z21zzengine_paramz00);
														}
													if (BgL_testz00_4162)
														{	/* Cfa/collect.scm 165 */
															BgL_appz00_bglt BgL_obj5288z00_1958;

															BgL_obj5288z00_1958 =
																((BgL_appz00_bglt) BgL_nodez00_1945);
															{	/* Cfa/collect.scm 165 */
																obj_t BgL_auxz00_4169;

																BgL_objectz00_bglt BgL_auxz00_4167;

																BgL_auxz00_4169 =
																	BGl_wideningzd2prezd2arithmeticzd2appzd2zzcfa_info2z00
																	(BGl_arithmeticzd2speczd2typesz00zzcfa_specializa7eza7
																	((BgL_globalz00_bglt) (BgL_vz00_1952)));
																BgL_auxz00_4167 =
																	(BgL_objectz00_bglt) (BgL_obj5288z00_1958);
																BGL_OBJECT_WIDENING_SET(BgL_auxz00_4167,
																	BgL_auxz00_4169);
															}
															BGL_OBJECT_CLASS_NUM_SET(
																(BgL_objectz00_bglt) (BgL_obj5288z00_1958),
																BGl_classzd2numzd2zz__objectz00
																(BGl_prezd2arithmeticzd2appz00zzcfa_info2z00));
															(obj_t) (BgL_obj5288z00_1958);
														}
													else
														{	/* Cfa/collect.scm 163 */
															BFALSE;
														}
												}
											else
												{	/* Cfa/collect.scm 161 */
													if (
														(BgL_casezd2valuezd2_1955 ==
															CNST_TABLE_REF(((long) 7))))
														{	/* Cfa/collect.scm 161 */
															BGl_za2usedzd2allocza2zd2zzcfa_collectz00 =
																MAKE_PAIR(
																(obj_t) (BgL_nodez00_1945),
																BGl_za2usedzd2allocza2zd2zzcfa_collectz00);
															{	/* Cfa/collect.scm 169 */
																BgL_appz00_bglt BgL_obj5289z00_1963;

																BgL_obj5289z00_1963 =
																	((BgL_appz00_bglt) BgL_nodez00_1945);
																{	/* Cfa/collect.scm 169 */
																	obj_t BgL_auxz00_4186;

																	BgL_objectz00_bglt BgL_auxz00_4184;

																	BgL_auxz00_4186 =
																		BGl_wideningzd2prezd2makezd2procedurezd2appz00zzcfa_info2z00
																		((BgL_variablez00_bglt)
																		(BgL_ownerz00_1946));
																	BgL_auxz00_4184 =
																		(BgL_objectz00_bglt) (BgL_obj5289z00_1963);
																	BGL_OBJECT_WIDENING_SET(BgL_auxz00_4184,
																		BgL_auxz00_4186);
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	(BgL_objectz00_bglt) (BgL_obj5289z00_1963),
																	BGl_classzd2numzd2zz__objectz00
																	(BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00));
																(obj_t) (BgL_obj5289z00_1963);
														}}
													else
														{	/* Cfa/collect.scm 161 */
															if (
																(BgL_casezd2valuezd2_1955 ==
																	CNST_TABLE_REF(((long) 8))))
																{	/* Cfa/collect.scm 161 */
																	BGl_za2usedzd2allocza2zd2zzcfa_collectz00 =
																		MAKE_PAIR(
																		(obj_t) (BgL_nodez00_1945),
																		BGl_za2usedzd2allocza2zd2zzcfa_collectz00);
																	{	/* Cfa/collect.scm 172 */
																		BgL_appz00_bglt BgL_obj5290z00_1967;

																		BgL_obj5290z00_1967 =
																			((BgL_appz00_bglt) BgL_nodez00_1945);
																		{	/* Cfa/collect.scm 172 */
																			obj_t BgL_auxz00_4202;

																			BgL_objectz00_bglt BgL_auxz00_4200;

																			BgL_auxz00_4202 =
																				BGl_wideningzd2prezd2makezd2procedurezd2appz00zzcfa_info2z00
																				((BgL_variablez00_bglt)
																				(BgL_ownerz00_1946));
																			BgL_auxz00_4200 =
																				(BgL_objectz00_bglt)
																				(BgL_obj5290z00_1967);
																			BGL_OBJECT_WIDENING_SET(BgL_auxz00_4200,
																				BgL_auxz00_4202);
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			(BgL_objectz00_bglt)
																			(BgL_obj5290z00_1967),
																			BGl_classzd2numzd2zz__objectz00
																			(BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00));
																		(obj_t) (BgL_obj5290z00_1967);
																}}
															else
																{	/* Cfa/collect.scm 161 */
																	if (
																		(BgL_casezd2valuezd2_1955 ==
																			CNST_TABLE_REF(((long) 9))))
																		{	/* Cfa/collect.scm 174 */
																			BgL_appz00_bglt BgL_obj5291z00_1971;

																			BgL_obj5291z00_1971 =
																				((BgL_appz00_bglt) BgL_nodez00_1945);
																			{	/* Cfa/collect.scm 174 */
																				obj_t BgL_auxz00_4216;

																				BgL_objectz00_bglt BgL_auxz00_4214;

																				BgL_auxz00_4216 =
																					BGl_wideningzd2prezd2procedurezd2refzd2appz00zzcfa_info2z00
																					();
																				BgL_auxz00_4214 =
																					(BgL_objectz00_bglt)
																					(BgL_obj5291z00_1971);
																				BGL_OBJECT_WIDENING_SET(BgL_auxz00_4214,
																					BgL_auxz00_4216);
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				(BgL_objectz00_bglt)
																				(BgL_obj5291z00_1971),
																				BGl_classzd2numzd2zz__objectz00
																				(BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00));
																			(obj_t) (BgL_obj5291z00_1971);
																		}
																	else
																		{	/* Cfa/collect.scm 161 */
																			if (
																				(BgL_casezd2valuezd2_1955 ==
																					CNST_TABLE_REF(((long) 10))))
																				{	/* Cfa/collect.scm 176 */
																					BgL_appz00_bglt BgL_obj5292z00_1975;

																					BgL_obj5292z00_1975 =
																						((BgL_appz00_bglt)
																						BgL_nodez00_1945);
																					{	/* Cfa/collect.scm 176 */
																						obj_t BgL_auxz00_4229;

																						BgL_objectz00_bglt BgL_auxz00_4227;

																						BgL_auxz00_4229 =
																							BGl_wideningzd2prezd2procedurezd2setz12zd2appz12zzcfa_info2z00
																							();
																						BgL_auxz00_4227 =
																							(BgL_objectz00_bglt)
																							(BgL_obj5292z00_1975);
																						BGL_OBJECT_WIDENING_SET
																							(BgL_auxz00_4227,
																							BgL_auxz00_4229);
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						(BgL_objectz00_bglt)
																						(BgL_obj5292z00_1975),
																						BGl_classzd2numzd2zz__objectz00
																						(BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00));
																					(obj_t) (BgL_obj5292z00_1975);
																				}
																			else
																				{	/* Cfa/collect.scm 161 */
																					BUNSPEC;
																				}
																		}
																}
														}
												}
										}
										if (BGl_vectorzd2optimzf3z21zzcfa_vectorz00())
											{	/* Cfa/collect.scm 178 */
												obj_t BgL_casezd2valuezd2_1979;

												BgL_casezd2valuezd2_1979 =
													(((BgL_variablez00_bglt) CREF(BgL_vz00_1952))->
													BgL_idz00);
												{	/* Cfa/collect.scm 178 */
													bool_t BgL_testz00_4239;

													{	/* Cfa/collect.scm 178 */
														bool_t BgL__ortest_5293z00_1984;

														BgL__ortest_5293z00_1984 =
															(BgL_casezd2valuezd2_1979 ==
															CNST_TABLE_REF(((long) 11)));
														if (BgL__ortest_5293z00_1984)
															{	/* Cfa/collect.scm 178 */
																BgL_testz00_4239 = BgL__ortest_5293z00_1984;
															}
														else
															{	/* Cfa/collect.scm 178 */
																BgL_testz00_4239 =
																	(BgL_casezd2valuezd2_1979 ==
																	CNST_TABLE_REF(((long) 12)));
													}}
													if (BgL_testz00_4239)
														{	/* Cfa/collect.scm 178 */
															BGl_za2usedzd2allocza2zd2zzcfa_collectz00 =
																MAKE_PAIR(
																(obj_t) (BgL_nodez00_1945),
																BGl_za2usedzd2allocza2zd2zzcfa_collectz00);
															{	/* Cfa/collect.scm 181 */
																BgL_appz00_bglt BgL_obj5294z00_1981;

																BgL_obj5294z00_1981 =
																	((BgL_appz00_bglt) BgL_nodez00_1945);
																{	/* Cfa/collect.scm 181 */
																	obj_t BgL_auxz00_4250;

																	BgL_objectz00_bglt BgL_auxz00_4248;

																	BgL_auxz00_4250 =
																		BGl_wideningzd2prezd2makezd2vectorzd2appz00zzcfa_info2z00
																		((BgL_variablez00_bglt)
																		(BgL_ownerz00_1946));
																	BgL_auxz00_4248 =
																		(BgL_objectz00_bglt) (BgL_obj5294z00_1981);
																	BGL_OBJECT_WIDENING_SET(BgL_auxz00_4248,
																		BgL_auxz00_4250);
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	(BgL_objectz00_bglt) (BgL_obj5294z00_1981),
																	BGl_classzd2numzd2zz__objectz00
																	(BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00));
																(obj_t) (BgL_obj5294z00_1981);
															}
														}
													else
														{	/* Cfa/collect.scm 178 */
															BUNSPEC;
														}
												}
											}
										else
											{	/* Cfa/collect.scm 177 */
												BFALSE;
											}
										if (
											((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >=
												((long) 2)))
											{	/* Cfa/collect.scm 183 */
												obj_t BgL_casezd2valuezd2_1986;

												BgL_casezd2valuezd2_1986 =
													(((BgL_variablez00_bglt) CREF(BgL_vz00_1952))->
													BgL_idz00);
												if ((BgL_casezd2valuezd2_1986 ==
														CNST_TABLE_REF(((long) 13))))
													{	/* Cfa/collect.scm 183 */
														BGl_za2usedzd2allocza2zd2zzcfa_collectz00 =
															MAKE_PAIR(
															(obj_t) (BgL_nodez00_1945),
															BGl_za2usedzd2allocza2zd2zzcfa_collectz00);
														{	/* Cfa/collect.scm 186 */
															BgL_appz00_bglt BgL_obj5295z00_1988;

															BgL_obj5295z00_1988 =
																((BgL_appz00_bglt) BgL_nodez00_1945);
															{	/* Cfa/collect.scm 186 */
																obj_t BgL_auxz00_4270;

																BgL_objectz00_bglt BgL_auxz00_4268;

																BgL_auxz00_4270 =
																	BGl_wideningzd2prezd2makezd2structzd2appz00zzcfa_info2z00
																	((BgL_variablez00_bglt) (BgL_ownerz00_1946));
																BgL_auxz00_4268 =
																	(BgL_objectz00_bglt) (BgL_obj5295z00_1988);
																BGL_OBJECT_WIDENING_SET(BgL_auxz00_4268,
																	BgL_auxz00_4270);
															}
															BGL_OBJECT_CLASS_NUM_SET(
																(BgL_objectz00_bglt) (BgL_obj5295z00_1988),
																BGl_classzd2numzd2zz__objectz00
																(BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00));
															return (obj_t) (BgL_obj5295z00_1988);
														}
													}
												else
													{	/* Cfa/collect.scm 183 */
														if (
															(BgL_casezd2valuezd2_1986 ==
																CNST_TABLE_REF(((long) 14))))
															{	/* Cfa/collect.scm 188 */
																BgL_appz00_bglt BgL_obj5296z00_1992;

																BgL_obj5296z00_1992 =
																	((BgL_appz00_bglt) BgL_nodez00_1945);
																{	/* Cfa/collect.scm 188 */
																	obj_t BgL_auxz00_4284;

																	BgL_objectz00_bglt BgL_auxz00_4282;

																	BgL_auxz00_4284 =
																		BGl_wideningzd2prezd2structzd2refzd2appz00zzcfa_info2z00
																		();
																	BgL_auxz00_4282 =
																		(BgL_objectz00_bglt) (BgL_obj5296z00_1992);
																	BGL_OBJECT_WIDENING_SET(BgL_auxz00_4282,
																		BgL_auxz00_4284);
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	(BgL_objectz00_bglt) (BgL_obj5296z00_1992),
																	BGl_classzd2numzd2zz__objectz00
																	(BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00));
																return (obj_t) (BgL_obj5296z00_1992);
															}
														else
															{	/* Cfa/collect.scm 183 */
																if (
																	(BgL_casezd2valuezd2_1986 ==
																		CNST_TABLE_REF(((long) 15))))
																	{	/* Cfa/collect.scm 190 */
																		BgL_appz00_bglt BgL_obj5297z00_1996;

																		BgL_obj5297z00_1996 =
																			((BgL_appz00_bglt) BgL_nodez00_1945);
																		{	/* Cfa/collect.scm 190 */
																			obj_t BgL_auxz00_4297;

																			BgL_objectz00_bglt BgL_auxz00_4295;

																			BgL_auxz00_4297 =
																				BGl_wideningzd2prezd2structzd2setz12zd2appz12zzcfa_info2z00
																				();
																			BgL_auxz00_4295 =
																				(BgL_objectz00_bglt)
																				(BgL_obj5297z00_1996);
																			BGL_OBJECT_WIDENING_SET(BgL_auxz00_4295,
																				BgL_auxz00_4297);
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			(BgL_objectz00_bglt)
																			(BgL_obj5297z00_1996),
																			BGl_classzd2numzd2zz__objectz00
																			(BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00));
																		return (obj_t) (BgL_obj5297z00_1996);
																	}
																else
																	{	/* Cfa/collect.scm 183 */
																		return BUNSPEC;
																	}
															}
													}
											}
										else
											{	/* Cfa/collect.scm 182 */
												return BFALSE;
											}
									}
								else
									{	/* Cfa/collect.scm 192 */
										bool_t BgL_testz00_4304;

										if (CBOOL
											(BGl_za2optimzd2cfazd2fixnumzd2arithmeticzf3za2z21zzengine_paramz00))
											{	/* Cfa/collect.scm 192 */
												BgL_testz00_4304 = ((bool_t) 1);
											}
										else
											{	/* Cfa/collect.scm 192 */
												BgL_testz00_4304 =
													CBOOL
													(BGl_za2optimzd2cfazd2flonumzd2arithmeticzf3za2z21zzengine_paramz00);
											}
										if (BgL_testz00_4304)
											{	/* Cfa/collect.scm 192 */
												if (CBOOL
													(BGl_arithmeticzd2operatorzf3z21zzcfa_specializa7eza7(
															(BgL_globalz00_bglt) (BgL_vz00_1952))))
													{	/* Cfa/collect.scm 195 */
														BgL_appz00_bglt BgL_obj5298z00_2001;

														BgL_obj5298z00_2001 =
															((BgL_appz00_bglt) BgL_nodez00_1945);
														{	/* Cfa/collect.scm 195 */
															obj_t BgL_auxz00_4315;

															BgL_objectz00_bglt BgL_auxz00_4313;

															BgL_auxz00_4315 =
																BGl_wideningzd2prezd2arithmeticzd2appzd2zzcfa_info2z00
																(BGl_arithmeticzd2speczd2typesz00zzcfa_specializa7eza7
																((BgL_globalz00_bglt) (BgL_vz00_1952)));
															BgL_auxz00_4313 =
																(BgL_objectz00_bglt) (BgL_obj5298z00_2001);
															BGL_OBJECT_WIDENING_SET(BgL_auxz00_4313,
																BgL_auxz00_4315);
														}
														BGL_OBJECT_CLASS_NUM_SET(
															(BgL_objectz00_bglt) (BgL_obj5298z00_2001),
															BGl_classzd2numzd2zz__objectz00
															(BGl_prezd2arithmeticzd2appz00zzcfa_info2z00));
														return (obj_t) (BgL_obj5298z00_2001);
													}
												else
													{	/* Cfa/collect.scm 194 */
														return BFALSE;
													}
											}
										else
											{	/* Cfa/collect.scm 192 */
												return BFALSE;
											}
									}
							}
						else
							{	/* Cfa/collect.scm 154 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* node-collect!-sequen5354 */
	obj_t BGl_nodezd2collectz12zd2sequen5354z12zzcfa_collectz00(obj_t
		BgL_envz00_3243, obj_t BgL_nodez00_3244, obj_t BgL_ownerz00_3245)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 143 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1938;

				obj_t BgL_ownerz00_1939;

				{	/* Cfa/collect.scm 144 */
					bool_t BgL_auxz00_4325;

					BgL_nodez00_1938 = (BgL_sequencez00_bglt) (BgL_nodez00_3244);
					BgL_ownerz00_1939 = BgL_ownerz00_3245;
					{	/* Cfa/collect.scm 144 */
						obj_t BgL_arg5544z00_2366;

						BgL_arg5544z00_2366 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1938))->BgL_nodesz00);
						BgL_auxz00_4325 =
							BGl_nodezd2collectza2z12z62zzcfa_collectz00(BgL_arg5544z00_2366,
							BgL_ownerz00_1939);
					}
					return BBOOL(BgL_auxz00_4325);
				}
			}
		}
	}



/* node-collect!-var5352 */
	obj_t BGl_nodezd2collectz12zd2var5352z12zzcfa_collectz00(obj_t
		BgL_envz00_3246, obj_t BgL_nodez00_3247, obj_t BgL_ownerz00_3248)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 126 */
			{
				BgL_varz00_bglt BgL_nodez00_1920;

				obj_t BgL_ownerz00_1921;

				BgL_nodez00_1920 = (BgL_varz00_bglt) (BgL_nodez00_3247);
				BgL_ownerz00_1921 = BgL_ownerz00_3248;
				{	/* Cfa/collect.scm 127 */
					BgL_variablez00_bglt BgL_vz00_1924;

					BgL_vz00_1924 =
						(((BgL_varz00_bglt) CREF(BgL_nodez00_1920))->BgL_variablez00);
					{	/* Cfa/collect.scm 128 */
						bool_t BgL_testz00_4331;

						{	/* Cfa/collect.scm 128 */
							bool_t BgL_testz00_4332;

							{	/* Cfa/collect.scm 128 */
								obj_t BgL_obj1860z00_2330;

								BgL_obj1860z00_2330 = (obj_t) (BgL_vz00_1924);
								BgL_testz00_4332 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1860z00_2330,
									BGl_globalz00zzast_varz00);
							}
							if (BgL_testz00_4332)
								{	/* Cfa/collect.scm 129 */
									bool_t BgL_testz00_4335;

									{	/* Cfa/collect.scm 129 */
										obj_t BgL_arg5542z00_1935;

										{
											BgL_globalz00_bglt BgL_auxz00_4336;

											BgL_auxz00_4336 = (BgL_globalz00_bglt) (BgL_vz00_1924);
											BgL_arg5542z00_1935 =
												(((BgL_globalz00_bglt) CREF(BgL_auxz00_4336))->
												BgL_modulez00);
										}
										BgL_testz00_4335 =
											(BgL_arg5542z00_1935 ==
											BGl_za2moduleza2z00zzmodule_modulez00);
									}
									if (BgL_testz00_4335)
										{	/* Cfa/collect.scm 130 */
											bool_t BgL_testz00_4340;

											{	/* Cfa/collect.scm 130 */
												BgL_valuez00_bglt BgL_arg5541z00_1934;

												BgL_arg5541z00_1934 =
													(((BgL_variablez00_bglt) CREF(BgL_vz00_1924))->
													BgL_valuez00);
												{	/* Cfa/collect.scm 130 */
													obj_t BgL_obj2158z00_2333;

													BgL_obj2158z00_2333 = (obj_t) (BgL_arg5541z00_1934);
													BgL_testz00_4340 =
														BGl_iszd2azf3z21zz__objectz00(BgL_obj2158z00_2333,
														BGl_scnstz00zzast_varz00);
												}
											}
											if (BgL_testz00_4340)
												{	/* Cfa/collect.scm 131 */
													bool_t BgL_testz00_4344;

													{	/* Cfa/collect.scm 131 */
														obj_t BgL_arg5539z00_1932;

														{	/* Cfa/collect.scm 131 */
															BgL_scnstz00_bglt BgL_obj2139z00_2335;

															BgL_obj2139z00_2335 =
																(BgL_scnstz00_bglt) (
																(((BgL_variablez00_bglt) CREF(BgL_vz00_1924))->
																	BgL_valuez00));
															BgL_arg5539z00_1932 =
																(((BgL_scnstz00_bglt)
																	CREF(BgL_obj2139z00_2335))->BgL_nodez00);
														}
														BgL_testz00_4344 =
															CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
															(BgL_arg5539z00_1932,
																BGl_za2usedzd2allocza2zd2zzcfa_collectz00));
													}
													if (BgL_testz00_4344)
														{	/* Cfa/collect.scm 131 */
															BgL_testz00_4331 = ((bool_t) 0);
														}
													else
														{	/* Cfa/collect.scm 131 */
															BgL_testz00_4331 = ((bool_t) 1);
														}
												}
											else
												{	/* Cfa/collect.scm 130 */
													BgL_testz00_4331 = ((bool_t) 0);
												}
										}
									else
										{	/* Cfa/collect.scm 129 */
											BgL_testz00_4331 = ((bool_t) 0);
										}
								}
							else
								{	/* Cfa/collect.scm 128 */
									BgL_testz00_4331 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_4331)
							{	/* Cfa/collect.scm 128 */
								{	/* Cfa/collect.scm 137 */
									obj_t BgL_arg5533z00_1926;

									{	/* Cfa/collect.scm 137 */
										BgL_scnstz00_bglt BgL_obj2139z00_2338;

										BgL_obj2139z00_2338 =
											(BgL_scnstz00_bglt) (
											(((BgL_variablez00_bglt) CREF(BgL_vz00_1924))->
												BgL_valuez00));
										BgL_arg5533z00_1926 =
											(((BgL_scnstz00_bglt) CREF(BgL_obj2139z00_2338))->
											BgL_nodez00);
									}
									{	/* Cfa/collect.scm 137 */
										BgL_nodez00_bglt BgL_nodez00_2339;

										BgL_variablez00_bglt BgL_ownerz00_2340;

										BgL_nodez00_2339 = (BgL_nodez00_bglt) (BgL_arg5533z00_1926);
										BgL_ownerz00_2340 =
											(BgL_variablez00_bglt) (BgL_ownerz00_1921);
										{	/* Cfa/collect.scm 137 */
											obj_t BgL_method5345z00_2341;

											{	/* Cfa/collect.scm 137 */
												BgL_objectz00_bglt BgL_objz00_2342;

												BgL_objz00_2342 =
													(BgL_objectz00_bglt) (BgL_nodez00_2339);
												{	/* Cfa/collect.scm 137 */
													long BgL_objzd2classzd2numz00_2343;

													BgL_objzd2classzd2numz00_2343 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2342);
													{	/* Cfa/collect.scm 137 */
														obj_t BgL_arg2643z00_2344;

														BgL_arg2643z00_2344 =
															PROCEDURE_REF
															(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
															(int) (((long) 1)));
														{	/* Cfa/collect.scm 137 */
															obj_t BgL_arrayz00_2346;

															int BgL_offsetz00_2347;

															BgL_arrayz00_2346 = BgL_arg2643z00_2344;
															BgL_offsetz00_2347 =
																(int) (BgL_objzd2classzd2numz00_2343);
															{	/* Cfa/collect.scm 137 */
																long BgL_offsetz00_2348;

																BgL_offsetz00_2348 =
																	((long) (BgL_offsetz00_2347) - OBJECT_TYPE);
																{	/* Cfa/collect.scm 137 */
																	long BgL_modz00_2349;

																	{	/* Cfa/collect.scm 137 */
																		int BgL_arg2645z00_2350;

																		BgL_arg2645z00_2350 = (int) (((long) 16));
																		{	/* Cfa/collect.scm 137 */
																			long BgL_auxz00_4363;

																			BgL_auxz00_4363 =
																				(long) (BgL_arg2645z00_2350);
																			BgL_modz00_2349 =
																				(BgL_offsetz00_2348 / BgL_auxz00_4363);
																	}}
																	{	/* Cfa/collect.scm 137 */
																		long BgL_restz00_2351;

																		{	/* Cfa/collect.scm 137 */
																			int BgL_arg2644z00_2352;

																			BgL_arg2644z00_2352 = (int) (((long) 16));
																			{	/* Cfa/collect.scm 137 */
																				long BgL_auxz00_4367;

																				BgL_auxz00_4367 =
																					(long) (BgL_arg2644z00_2352);
																				BgL_restz00_2351 =
																					(BgL_offsetz00_2348 %
																					BgL_auxz00_4367);
																		}}
																		{	/* Cfa/collect.scm 137 */

																			BgL_method5345z00_2341 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2346,
																					(int) (BgL_modz00_2349)),
																				(int) (BgL_restz00_2351));
											}}}}}}}}
											PROCEDURE_ENTRY(BgL_method5345z00_2341)
												(BgL_method5345z00_2341, (obj_t) (BgL_nodez00_2339),
												(obj_t) (BgL_ownerz00_2340), BEOA);
							}}}}
						else
							{	/* Cfa/collect.scm 128 */
								BFALSE;
							}
					}
				}
				return BUNSPEC;
			}
		}
	}



/* node-collect!-kwote5349 */
	obj_t BGl_nodezd2collectz12zd2kwote5349z12zzcfa_collectz00(obj_t
		BgL_envz00_3249, obj_t BgL_nodez00_3250, obj_t BgL_ownerz00_3251)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 69 */
			{
				BgL_kwotez00_bglt BgL_nodez00_1893;

				obj_t BgL_ownerz00_1894;

				BgL_nodez00_1893 = (BgL_kwotez00_bglt) (BgL_nodez00_3250);
				BgL_ownerz00_1894 = BgL_ownerz00_3251;
				{	/* Cfa/collect.scm 70 */
					obj_t BgL_valuez00_1897;

					BgL_valuez00_1897 =
						(((BgL_kwotez00_bglt) CREF(BgL_nodez00_1893))->BgL_valuez00);
					{	/* Cfa/collect.scm 71 */
						bool_t BgL_testz00_4380;

						if (BGl_vectorzd2optimzf3z21zzcfa_vectorz00())
							{	/* Cfa/collect.scm 71 */
								BgL_testz00_4380 = VECTORP(BgL_valuez00_1897);
							}
						else
							{	/* Cfa/collect.scm 71 */
								BgL_testz00_4380 = ((bool_t) 0);
							}
						if (BgL_testz00_4380)
							{	/* Cfa/collect.scm 72 */
								int BgL_warningz00_1899;

								{	/* Cfa/collect.scm 72 */
									int BgL_wanz00_1916;

									BgL_wanz00_1916 = BGl_bigloozd2warningzd2zz__paramz00();
									BGl_bigloozd2warningzd2setz12z12zz__paramz00(
										(int) (((long) 0)));
									BgL_warningz00_1899 = BgL_wanz00_1916;
								}
								{	/* Cfa/collect.scm 72 */
									obj_t BgL_backendz00_1900;

									BgL_backendz00_1900 =
										BGl_thezd2backendzd2zzbackend_backendz00();
									{	/* Cfa/collect.scm 75 */
										bool_t BgL_pragmazf3zf3_1901;

										{	/* Cfa/collect.scm 76 */
											bool_t BgL_tgtz00_1915;

											{
												BgL_backendz00_bglt BgL_auxz00_4388;

												BgL_auxz00_4388 =
													(BgL_backendz00_bglt) (BgL_backendz00_1900);
												BgL_tgtz00_1915 =
													(((BgL_backendz00_bglt) CREF(BgL_auxz00_4388))->
													BgL_pragmazd2supportzd2);
											}
											{
												BgL_backendz00_bglt BgL_auxz00_4391;

												BgL_auxz00_4391 =
													(BgL_backendz00_bglt) (BgL_backendz00_1900);
												((((BgL_backendz00_bglt) CREF(BgL_auxz00_4391))->
														BgL_pragmazd2supportzd2) =
													((bool_t) ((bool_t) 1)), BUNSPEC);
											}
											BgL_pragmazf3zf3_1901 = BgL_tgtz00_1915;
										}
										{	/* Cfa/collect.scm 76 */
											BgL_nodez00_bglt BgL_dummyz00_1902;

											{	/* Cfa/collect.scm 80 */
												obj_t BgL_arg5521z00_1906;

												{	/* Cfa/collect.scm 80 */
													obj_t BgL_arg5522z00_1907;

													obj_t BgL_arg5523z00_1908;

													BgL_arg5522z00_1907 = CNST_TABLE_REF(((long) 12));
													{	/* Cfa/collect.scm 80 */
														int BgL_arg5524z00_1909;

														obj_t BgL_arg5525z00_1910;

														BgL_arg5524z00_1909 =
															VECTOR_LENGTH(BgL_valuez00_1897);
														if (BGl_monomorphiczd2vectorzf3z21zzcfa_collectz00
															(BgL_valuez00_1897))
															{	/* Cfa/collect.scm 81 */
																BgL_arg5525z00_1910 =
																	VECTOR_REF(BgL_valuez00_1897,
																	(int) (((long) 0)));
															}
														else
															{	/* Cfa/collect.scm 81 */
																BgL_arg5525z00_1910 =
																	CNST_TABLE_REF(((long) 16));
															}
														{	/* Cfa/collect.scm 80 */
															obj_t BgL_list5527z00_1912;

															{	/* Cfa/collect.scm 80 */
																obj_t BgL_arg5528z00_1913;

																BgL_arg5528z00_1913 = MAKE_PAIR(BNIL, BNIL);
																BgL_list5527z00_1912 =
																	MAKE_PAIR(BgL_arg5525z00_1910,
																	BgL_arg5528z00_1913);
															}
															BgL_arg5523z00_1908 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT
																(BgL_arg5524z00_1909), BgL_list5527z00_1912);
													}}
													BgL_arg5521z00_1906 =
														MAKE_PAIR(BgL_arg5522z00_1907, BgL_arg5523z00_1908);
												}
												BgL_dummyz00_1902 =
													BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
													(BgL_arg5521z00_1906, BFALSE);
											}
											{	/* Cfa/collect.scm 79 */

												{
													BgL_backendz00_bglt BgL_auxz00_4407;

													BgL_auxz00_4407 =
														(BgL_backendz00_bglt) (BgL_backendz00_1900);
													((((BgL_backendz00_bglt) CREF(BgL_auxz00_4407))->
															BgL_pragmazd2supportzd2) =
														((bool_t) BgL_pragmazf3zf3_1901), BUNSPEC);
												}
												BGl_bigloozd2warningzd2setz12z12zz__paramz00
													(BgL_warningz00_1899);
												{	/* Cfa/collect.scm 87 */
													BgL_kwotez00_bglt BgL_obj5285z00_1903;

													BgL_obj5285z00_1903 =
														((BgL_kwotez00_bglt) BgL_nodez00_1893);
													{	/* Cfa/collect.scm 87 */
														obj_t BgL_auxz00_4414;

														BgL_objectz00_bglt BgL_auxz00_4412;

														BgL_auxz00_4414 =
															BGl_wideningzd2kwotezf2nodez20zzcfa_infoz00
															(BgL_dummyz00_1902);
														BgL_auxz00_4412 =
															(BgL_objectz00_bglt) (BgL_obj5285z00_1903);
														BGL_OBJECT_WIDENING_SET(BgL_auxz00_4412,
															BgL_auxz00_4414);
													}
													BGL_OBJECT_CLASS_NUM_SET(
														(BgL_objectz00_bglt) (BgL_obj5285z00_1903),
														BGl_classzd2numzd2zz__objectz00
														(BGl_kwotezf2nodezf2zzcfa_infoz00));
													BgL_obj5285z00_1903;
												}
												{	/* Cfa/collect.scm 88 */
													BgL_variablez00_bglt BgL_ownerz00_2303;

													BgL_ownerz00_2303 =
														(BgL_variablez00_bglt) (BgL_ownerz00_1894);
													{	/* Cfa/collect.scm 88 */
														obj_t BgL_method5345z00_2304;

														{	/* Cfa/collect.scm 88 */
															BgL_objectz00_bglt BgL_objz00_2305;

															BgL_objz00_2305 =
																(BgL_objectz00_bglt) (BgL_dummyz00_1902);
															{	/* Cfa/collect.scm 88 */
																long BgL_objzd2classzd2numz00_2306;

																BgL_objzd2classzd2numz00_2306 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2305);
																{	/* Cfa/collect.scm 88 */
																	obj_t BgL_arg2643z00_2307;

																	BgL_arg2643z00_2307 =
																		PROCEDURE_REF
																		(BGl_nodezd2collectz12zd2envz12zzcfa_collectz00,
																		(int) (((long) 1)));
																	{	/* Cfa/collect.scm 88 */
																		obj_t BgL_arrayz00_2309;

																		int BgL_offsetz00_2310;

																		BgL_arrayz00_2309 = BgL_arg2643z00_2307;
																		BgL_offsetz00_2310 =
																			(int) (BgL_objzd2classzd2numz00_2306);
																		{	/* Cfa/collect.scm 88 */
																			long BgL_offsetz00_2311;

																			BgL_offsetz00_2311 =
																				(
																				(long) (BgL_offsetz00_2310) -
																				OBJECT_TYPE);
																			{	/* Cfa/collect.scm 88 */
																				long BgL_modz00_2312;

																				{	/* Cfa/collect.scm 88 */
																					int BgL_arg2645z00_2313;

																					BgL_arg2645z00_2313 =
																						(int) (((long) 16));
																					{	/* Cfa/collect.scm 88 */
																						long BgL_auxz00_4429;

																						BgL_auxz00_4429 =
																							(long) (BgL_arg2645z00_2313);
																						BgL_modz00_2312 =
																							(BgL_offsetz00_2311 /
																							BgL_auxz00_4429);
																				}}
																				{	/* Cfa/collect.scm 88 */
																					long BgL_restz00_2314;

																					{	/* Cfa/collect.scm 88 */
																						int BgL_arg2644z00_2315;

																						BgL_arg2644z00_2315 =
																							(int) (((long) 16));
																						{	/* Cfa/collect.scm 88 */
																							long BgL_auxz00_4433;

																							BgL_auxz00_4433 =
																								(long) (BgL_arg2644z00_2315);
																							BgL_restz00_2314 =
																								(BgL_offsetz00_2311 %
																								BgL_auxz00_4433);
																					}}
																					{	/* Cfa/collect.scm 88 */

																						BgL_method5345z00_2304 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2309,
																								(int) (BgL_modz00_2312)),
																							(int) (BgL_restz00_2314));
														}}}}}}}}
														return
															PROCEDURE_ENTRY(BgL_method5345z00_2304)
															(BgL_method5345z00_2304,
															(obj_t) (BgL_dummyz00_1902),
															(obj_t) (BgL_ownerz00_2303), BEOA);
													}
												}
											}
										}
									}
								}
							}
						else
							{	/* Cfa/collect.scm 71 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* node-collect!-atom5347 */
	obj_t BGl_nodezd2collectz12zd2atom5347z12zzcfa_collectz00(obj_t
		BgL_envz00_3252, obj_t BgL_nodez00_3253, obj_t BgL_ownerz00_3254)
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 63 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_collectz00()
	{
		AN_OBJECT;
		{	/* Cfa/collect.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 239222528),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzcfa_info3z00(((long) 0),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzcfa_arithmeticz00(((long) 416199856),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzcfa_specializa7eza7(((long) 37308749),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzcfa_procedurez00(((long) 526522172),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzcfa_vectorz00(((long) 512450393),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzcfa_structz00(((long) 512321873),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			BGl_modulezd2initializa7ationz75zzcfa_boxz00(((long) 267499261),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_closurez00(((long) 416995938),
				BSTRING_TO_STRING(BGl_string5732z00zzcfa_collectz00));
		}
	}

#ifdef __cplusplus
}
#endif
