/*===========================================================================*/
/*   (Cfa/specialize.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/specialize.scm)*/
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

	typedef struct BgL_specializa7edzd2globalz75_bgl
	{
		obj_t BgL_fixz00;
	}                                *BgL_specializa7edzd2globalz75_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_patchz12zd2fail3596zc0zzcfa_specializa7eza7(obj_t, obj_t);
	static obj_t BGl_patchz12zd2makezd2box3608z12zzcfa_specializa7eza7(obj_t,
		obj_t);
	static bool_t BGl_patchzd2treez12zc0zzcfa_specializa7eza7(obj_t);
	static obj_t BGl_patchz12zd2funcall3586zc0zzcfa_specializa7eza7(obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl_structzb2objectzd2ze3objec3621z83zzcfa_specializa7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_arithmeticzd2operatorzf3z21zzcfa_specializa7eza7(BgL_globalz00_bglt);
	extern obj_t
		BGl_za2optimzd2cfazd2flonumzd2arithmeticzf3za2z21zzengine_paramz00;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_za2boxedzd2eqzf3za2z21zzcfa_specializa7eza7 = BUNSPEC;
	static obj_t BGl_patchza2z12zb0zzcfa_specializa7eza7(obj_t);
	static obj_t BGl__specializa7ez12zb5zzcfa_specializa7eza7(obj_t, obj_t);
	static obj_t BGl_patchz12zd2kwote3576zc0zzcfa_specializa7eza7(obj_t, obj_t);
	static obj_t BGl_za2specializa7edzd2eqzd2typesza2za7zzcfa_specializa7eza7 =
		BUNSPEC;
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	static obj_t BGl_za2specializa7ationsza2za7zzcfa_specializa7eza7 = BUNSPEC;
	static obj_t BGl_patchz12zd2select3598zc0zzcfa_specializa7eza7(obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static BgL_appz00_bglt
		BGl_specializa7ezd2appz12z67zzcfa_specializa7eza7(BgL_appz00_bglt);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcfa_specializa7eza7();
	extern BgL_valuez00_bglt BGl_valuezd2nilzd2zzast_varz00();
	extern obj_t BGl_za2bintza2z00zztype_cachez00;
	static obj_t BGl__arithmeticzd2speczd2typesz00zzcfa_specializa7eza7(obj_t,
		obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl__specializa7edzd2globalzd2nilza7zzcfa_specializa7eza7(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static BgL_specializa7edzd2globalz75_bglt
		BGl_specializa7edzd2globalzd2nilza7zzcfa_specializa7eza7();
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t BGl_patchz12zd2boxzd2ref3613z12zzcfa_specializa7eza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcfa_specializa7eza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_patchzd2funz12zc0zzcfa_specializa7eza7(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_specializa7eza7();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static bool_t BGl_specializa7ezd2optimiza7ationzf3z21zzcfa_specializa7eza7();
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_za2specializa7edzd2typesza2z75zzcfa_specializa7eza7 =
		BUNSPEC;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_patchz12zd2atom3574zc0zzcfa_specializa7eza7(obj_t, obj_t);
	static obj_t BGl_patchz12zd2jumpzd2exzd2it3606zc0zzcfa_specializa7eza7(obj_t,
		obj_t);
	static obj_t
		BGl_installzd2specializa7edzd2typez12zb5zzcfa_specializa7eza7(obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_arithmeticzd2speczd2typesz00zzcfa_specializa7eza7(BgL_globalz00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	extern obj_t
		BGl_za2optimzd2cfazd2fixnumzd2arithmeticzf3za2z21zzengine_paramz00;
	extern obj_t BGl_za2realza2z00zztype_cachez00;
	static obj_t BGl_za2specializa7eza2za7zzcfa_specializa7eza7 = BUNSPEC;
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl__patchz12z12zzcfa_specializa7eza7(obj_t, obj_t);
	static obj_t BGl_patchz12zd2app3615zc0zzcfa_specializa7eza7(obj_t, obj_t);
	static BgL_appz00_bglt
		BGl_specializa7ezd2eqzf3z86zzcfa_specializa7eza7(BgL_appz00_bglt);
	static obj_t BGl_methodzd2initzd2zzcfa_specializa7eza7();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_patchz12zd2letzd2fun3600z12zzcfa_specializa7eza7(obj_t,
		obj_t);
	static obj_t BGl_patchz12zd2closure3580zc0zzcfa_specializa7eza7(obj_t, obj_t);
	static obj_t BGl_patchz12zd2setzd2exzd2it3604zc0zzcfa_specializa7eza7(obj_t,
		obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_patchz12zd2letzd2var3602z12zzcfa_specializa7eza7(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_specializa7eza7 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzcfa_specializa7eza7();
	static obj_t BGl_z52thezd2specializa7edzd2globalzd2nilz27zzcfa_specializa7eza7
		= BUNSPEC;
	static obj_t BGl_specializa7edzd2globalz75zzcfa_specializa7eza7 = BUNSPEC;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl__arithmeticzd2operatorzf3z21zzcfa_specializa7eza7(obj_t,
		obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_installzd2specializa7ez12z67zzcfa_specializa7eza7(obj_t,
		obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	static obj_t BGl_patchz12zd2cast3590zc0zzcfa_specializa7eza7(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_patchz12z12zzcfa_specializa7eza7(BgL_nodez00_bglt);
	static obj_t BGl_addzd2specializa7edzd2typez12zb5zzcfa_specializa7eza7(obj_t);
	static obj_t BGl_normaliza7ezd2getzd2typeza7zzcfa_specializa7eza7(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_specializa7eza7();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl_patchz12zd2sequence3582zc0zzcfa_specializa7eza7(obj_t,
		obj_t);
	static obj_t BGl_patchz12zd2var3578zc0zzcfa_specializa7eza7(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_patchz12zd2boxzd2setz123611z00zzcfa_specializa7eza7(obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_za2brealza2z00zztype_cachez00;
	static obj_t BGl__specializa7edzd2globalzf3z86zzcfa_specializa7eza7(obj_t,
		obj_t);
	static obj_t BGl_patchz12zd2setq3592zc0zzcfa_specializa7eza7(obj_t, obj_t);
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_za2bcharza2z00zztype_cachez00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt);
	static obj_t BGl_objectzd2ze3structzd2speci3618ze3zzcfa_specializa7eza7(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	static obj_t BGl_patchz12zd2extern3588zc0zzcfa_specializa7eza7(obj_t, obj_t);
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	static obj_t BGl__patchz12zd2default3571zc0zzcfa_specializa7eza7(obj_t,
		obj_t);
	static obj_t BGl_patchz12zd2appzd2ly3584z12zzcfa_specializa7eza7(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t
		BGl_addzd2specializa7edzd2eqzd2typez12z67zzcfa_specializa7eza7(obj_t);
	static obj_t BGl_patchz12zd2conditional3594zc0zzcfa_specializa7eza7(obj_t,
		obj_t);
	static obj_t BGl_uninstallzd2specializa7esz12z67zzcfa_specializa7eza7();
	static bool_t BGl_showzd2specializa7ez75zzcfa_specializa7eza7();
	static obj_t
		BGl_patchz12zd2default3571zc0zzcfa_specializa7eza7(BgL_nodez00_bglt);
	static obj_t
		BGl__z52allocatezd2specializa7edzd2globalzf5zzcfa_specializa7eza7(obj_t);
	static obj_t BGl_objectzd2initzd2zzcfa_specializa7eza7();
	BGL_EXPORTED_DECL obj_t BGl_specializa7ez12zb5zzcfa_specializa7eza7(obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_specializa7eza7();
	static obj_t BGl_za2czd2eqzf3za2z21zzcfa_specializa7eza7 = BUNSPEC;
	static obj_t __cnst[10];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2specializa7edzd2globalzd2envz27zzcfa_specializa7eza7,
		BgL_bgl__za752allocateza7d2s4103z00,
		BGl__z52allocatezd2specializa7edzd2globalzf5zzcfa_specializa7eza7, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4072z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2atom34104z00,
		BGl_patchz12zd2atom3574zc0zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4073z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2kwote4105z00,
		BGl_patchz12zd2kwote3576zc0zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4074z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2var354106z00,
		BGl_patchz12zd2var3578zc0zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4075z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2closu4107z00,
		BGl_patchz12zd2closure3580zc0zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4076z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2seque4108z00,
		BGl_patchz12zd2sequence3582zc0zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4077z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2appza7d4109za7,
		BGl_patchz12zd2appzd2ly3584z12zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4078z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2funca4110z00,
		BGl_patchz12zd2funcall3586zc0zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4080z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2cast34111z00,
		BGl_patchz12zd2cast3590zc0zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4079z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2exter4112z00,
		BGl_patchz12zd2extern3588zc0zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4081z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2setq34113z00,
		BGl_patchz12zd2setq3592zc0zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4082z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2condi4114z00,
		BGl_patchz12zd2conditional3594zc0zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4083z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2fail34115z00,
		BGl_patchz12zd2fail3596zc0zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4084z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2selec4116z00,
		BGl_patchz12zd2select3598zc0zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4085z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2letza7d4117za7,
		BGl_patchz12zd2letzd2fun3600z12zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4086z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2letza7d4118za7,
		BGl_patchz12zd2letzd2var3602z12zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4087z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2setza7d4119za7,
		BGl_patchz12zd2setzd2exzd2it3604zc0zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4088z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2jumpza74120za7,
		BGl_patchz12zd2jumpzd2exzd2it3606zc0zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4090z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2boxza7d4121za7,
		BGl_patchz12zd2boxzd2setz123611z00zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4089z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2makeza74122za7,
		BGl_patchz12zd2makezd2box3608z12zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4091z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2boxza7d4123za7,
		BGl_patchz12zd2boxzd2ref3613z12zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4092z00zzcfa_specializa7eza7,
		BgL_bgl_patchza712za7d2app364124z00,
		BGl_patchz12zd2app3615zc0zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4093z00zzcfa_specializa7eza7,
		BgL_bgl_objectza7d2za7e3stru4125z00,
		BGl_objectzd2ze3structzd2speci3618ze3zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4095z00zzcfa_specializa7eza7,
		BgL_bgl_structza7b2objectza74126z00,
		BGl_structzb2objectzd2ze3objec3621z83zzcfa_specializa7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4055z00zzcfa_specializa7eza7,
		BgL_bgl_string4055za700za7za7c4127za7, "arithmetic-spec-types", 21);
	      DEFINE_STRING(BGl_string4056z00zzcfa_specializa7eza7,
		BgL_bgl_string4056za700za7za7c4128za7, "Null specification for", 22);
	      DEFINE_STRING(BGl_string4057z00zzcfa_specializa7eza7,
		BgL_bgl_string4057za700za7za7c4129za7, "   . specializing", 17);
	      DEFINE_STRING(BGl_string4058z00zzcfa_specializa7eza7,
		BgL_bgl_string4058za700za7za7c4130za7, ")\n", 2);
	      DEFINE_STRING(BGl_string4060z00zzcfa_specializa7eza7,
		BgL_bgl_string4060za700za7za7c4131za7, "        (-> ", 12);
	      DEFINE_STRING(BGl_string4059z00zzcfa_specializa7eza7,
		BgL_bgl_string4059za700za7za7c4132za7, ": ", 2);
	      DEFINE_STRING(BGl_string4061z00zzcfa_specializa7eza7,
		BgL_bgl_string4061za700za7za7c4133za7, "        (eq? ", 13);
	      DEFINE_STRING(BGl_string4062z00zzcfa_specializa7eza7,
		BgL_bgl_string4062za700za7za7c4134za7, "add-specialized-type!", 21);
	      DEFINE_STRING(BGl_string4063z00zzcfa_specializa7eza7,
		BgL_bgl_string4063za700za7za7c4135za7, "Unspecialized type", 18);
	      DEFINE_STRING(BGl_string4064z00zzcfa_specializa7eza7,
		BgL_bgl_string4064za700za7za7c4136za7, "install-specialize", 18);
	      DEFINE_STRING(BGl_string4065z00zzcfa_specializa7eza7,
		BgL_bgl_string4065za700za7za7c4137za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string4066z00zzcfa_specializa7eza7,
		BgL_bgl_string4066za700za7za7c4138za7, " -- ", 4);
	      DEFINE_STRING(BGl_string4067z00zzcfa_specializa7eza7,
		BgL_bgl_string4067za700za7za7c4139za7, "Can't find global", 17);
	      DEFINE_STRING(BGl_string4068z00zzcfa_specializa7eza7,
		BgL_bgl_string4068za700za7za7c4140za7, "install-specialize!", 19);
	      DEFINE_STRING(BGl_string4070z00zzcfa_specializa7eza7,
		BgL_bgl_string4070za700za7za7c4141za7, "patch!", 6);
	      DEFINE_STRING(BGl_string4069z00zzcfa_specializa7eza7,
		BgL_bgl_string4069za700za7za7c4142za7, "", 0);
	      DEFINE_STRING(BGl_string4071z00zzcfa_specializa7eza7,
		BgL_bgl_string4071za700za7za7c4143za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string4094z00zzcfa_specializa7eza7,
		BgL_bgl_string4094za700za7za7c4144za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string4096z00zzcfa_specializa7eza7,
		BgL_bgl_string4096za700za7za7c4145za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string4097z00zzcfa_specializa7eza7,
		BgL_bgl_string4097za700za7za7c4146za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string4098z00zzcfa_specializa7eza7,
		BgL_bgl_string4098za700za7za7c4147za7, "cfa_specialize", 14);
	      DEFINE_STRING(BGl_string4099z00zzcfa_specializa7eza7,
		BgL_bgl_string4099za700za7za7c4148za7,
		"patch!-default3571 _ specialized-global done c-eq? c-boxed-eq? foreign __r4_numbers_6_5_flonum __r4_numbers_6_5_fixnum ((c-eq? (c-eq? foreign) (=fx __r4_numbers_6_5_fixnum) (=fl __r4_numbers_6_5_flonum)) (2= (2= __r4_numbers_6_5) (=fx __r4_numbers_6_5_fixnum) (=fl __r4_numbers_6_5_flonum)) (2< (2< __r4_numbers_6_5) (<fx __r4_numbers_6_5_fixnum) (<fl __r4_numbers_6_5_flonum)) (2> (2> __r4_numbers_6_5) (>fx __r4_numbers_6_5_fixnum) (>fl __r4_numbers_6_5_flonum)) (2<= (2<= __r4_numbers_6_5) (<=fx __r4_numbers_6_5_fixnum) (<=fl __r4_numbers_6_5_flonum)) (2>= (2>= __r4_numbers_6_5) (>=fx __r4_numbers_6_5_fixnum) (>=fl __r4_numbers_6_5_flonum)) (zero? (zero? __r4_numbers_6_5) (zerofx? __r4_numbers_6_5_fixnum) (zerofl? __r4_numbers_6_5_flonum)) (positive? (positive? __r4_numbers_6_5) (positivefx? __r4_numbers_6_5_fixnum) (positivefl? __r4_numbers_6_5_flonum)) (negative? (negative? __r4_numbers_6_5) (negativefx? __r4_numbers_6_5_fixnum) (negativefl? __r4_numbers_6_5_flonum)) (2+ (2+ __r4_numbers_6_5) (+fx __r4_number"
		"s_6_5_fixnum) (+fl __r4_numbers_6_5_flonum)) (2- (2- __r4_numbers_6_5) (-fx __r4_numbers_6_5_fixnum) (-fl __r4_numbers_6_5_flonum)) (2* (2* __r4_numbers_6_5) (*fx __r4_numbers_6_5_fixnum) (*fl __r4_numbers_6_5_flonum)) (2/ (2/ __r4_numbers_6_5) (/fl __r4_numbers_6_5_flonum)) (abs (abs __r4_numbers_6_5) (absfx __r4_numbers_6_5_fixnum) (absfl __r4_numbers_6_5_flonum)) (log (log __r4_numbers_6_5) (logfl __r4_numbers_6_5_flonum)) (exp (exp __r4_numbers_6_5) (expfl __r4_numbers_6_5_flonum)) (sin (sin __r4_numbers_6_5) (sinfl __r4_numbers_6_5_flonum)) (cos (cos __r4_numbers_6_5) (cosfl __r4_numbers_6_5_flonum)) (tan (tan __r4_numbers_6_5) (tanfl __r4_numbers_6_5_flonum)) (atan (atan __r4_numbers_6_5) (atanfl __r4_numbers_6_5_flonum)) (asin (asin __r4_numbers_6_5) (asinfl __r4_numbers_6_5_flonum)) (acos (acos __r4_numbers_6_5) (acosfl __r4_numbers_6_5_flonum)) (sqrt (sqrt __r4_numbers_6_5) (sqrtfl __r4_numbers_6_5_flonum))) ",
		1955);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_arithmeticzd2operatorzf3zd2envzf3zzcfa_specializa7eza7,
		BgL_bgl__arithmeticza7d2op4149za7,
		BGl__arithmeticzd2operatorzf3z21zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_specializa7edzd2globalzd2nilzd2envz75zzcfa_specializa7eza7,
		BgL_bgl__specializa7a7edza7d4150z00,
		BGl__specializa7edzd2globalzd2nilza7zzcfa_specializa7eza7, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_specializa7edzd2globalzf3zd2envz54zzcfa_specializa7eza7,
		BgL_bgl__specializa7a7edza7d4151z00,
		BGl__specializa7edzd2globalzf3z86zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_arithmeticzd2speczd2typeszd2envzd2zzcfa_specializa7eza7,
		BgL_bgl__arithmeticza7d2sp4152za7,
		BGl__arithmeticzd2speczd2typesz00zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_specializa7ez12zd2envz67zzcfa_specializa7eza7,
		BgL_bgl__specializa7a7eza7124153z00,
		BGl__specializa7ez12zb5zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
		BgL_bgl__patchza712za712za7za7cf4154z00,
		BGl__patchz12z12zzcfa_specializa7eza7, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_patchz12zd2default3571zd2envz12zzcfa_specializa7eza7,
		BgL_bgl__patchza712za7d2defa4155z00,
		BGl__patchz12zd2default3571zc0zzcfa_specializa7eza7, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzcfa_specializa7eza7(long
		BgL_checksumz00_3058, char *BgL_fromz00_3059)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_specializa7eza7))
				{
					BGl_requirezd2initializa7ationz75zzcfa_specializa7eza7 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_specializa7eza7();
					BGl_cnstzd2initzd2zzcfa_specializa7eza7();
					BGl_importedzd2moduleszd2initz00zzcfa_specializa7eza7();
					BGl_objectzd2initzd2zzcfa_specializa7eza7();
					BGl_genericzd2initzd2zzcfa_specializa7eza7();
					BGl_methodzd2initzd2zzcfa_specializa7eza7();
					BGl_toplevelzd2initzd2zzcfa_specializa7eza7();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_specializa7eza7()
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 19 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"cfa_specialize");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"cfa_specialize");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"cfa_specialize");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_specialize");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_specializa7eza7()
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 19 */
			{	/* Cfa/specialize.scm 19 */
				obj_t BgL_cportz00_3041;

				BgL_cportz00_3041 =
					bgl_open_input_string(BGl_string4099z00zzcfa_specializa7eza7,
					(int) (((long) 0)));
				{
					long BgL_iz00_3042;

					BgL_iz00_3042 = ((long) 9);
				BgL_loopz00_3043:
					if ((BgL_iz00_3042 == ((long) -1)))
						{	/* Cfa/specialize.scm 19 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/specialize.scm 19 */
							{	/* Cfa/specialize.scm 19 */
								obj_t BgL_arg4101z00_3045;

								{	/* Cfa/specialize.scm 19 */

									{	/* Cfa/specialize.scm 19 */
										obj_t BgL_locationz00_3047;

										BgL_locationz00_3047 = BBOOL(((bool_t) 0));
										{	/* Cfa/specialize.scm 19 */

											BgL_arg4101z00_3045 =
												BGl_readz00zz__readerz00(BgL_cportz00_3041,
												BgL_locationz00_3047);
										}
									}
								}
								{	/* Cfa/specialize.scm 19 */
									int BgL_auxz00_3080;

									BgL_auxz00_3080 = (int) (BgL_iz00_3042);
									CNST_TABLE_SET(BgL_auxz00_3080, BgL_arg4101z00_3045);
							}}
							{	/* Cfa/specialize.scm 19 */
								int BgL_auxz00_3048;

								BgL_auxz00_3048 = (int) ((BgL_iz00_3042 - ((long) 1)));
								{
									long BgL_iz00_3085;

									BgL_iz00_3085 = (long) (BgL_auxz00_3048);
									BgL_iz00_3042 = BgL_iz00_3085;
									goto BgL_loopz00_3043;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_specializa7eza7()
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 19 */
			BGl_za2specializa7ationsza2za7zzcfa_specializa7eza7 =
				CNST_TABLE_REF(((long) 0));
			BGl_za2czd2eqzf3za2z21zzcfa_specializa7eza7 = BUNSPEC;
			BGl_za2specializa7eza2za7zzcfa_specializa7eza7 = BNIL;
			BGl_za2specializa7edzd2typesza2z75zzcfa_specializa7eza7 = BNIL;
			BGl_za2specializa7edzd2eqzd2typesza2za7zzcfa_specializa7eza7 = BNIL;
			BGl_za2boxedzd2eqzf3za2z21zzcfa_specializa7eza7 = BUNSPEC;
			return BUNSPEC;
		}
	}



/* specialize! */
	BGL_EXPORTED_DEF obj_t BGl_specializa7ez12zb5zzcfa_specializa7eza7(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 43 */
			if (BGl_specializa7ezd2optimiza7ationzf3z21zzcfa_specializa7eza7())
				{	/* Cfa/specialize.scm 45 */
					{
						obj_t BgL_l3551z00_929;

						BgL_l3551z00_929 =
							BGl_za2specializa7ationsza2za7zzcfa_specializa7eza7;
					BgL_zc3anonymousza33623ze3z83_930:
						if (PAIRP(BgL_l3551z00_929))
							{	/* Cfa/specialize.scm 47 */
								{	/* Cfa/specialize.scm 48 */
									obj_t BgL_specz00_932;

									BgL_specz00_932 = CAR(BgL_l3551z00_929);
									{	/* Cfa/specialize.scm 48 */
										obj_t BgL_runner3626z00_934;

										BgL_runner3626z00_934 = CDR(BgL_specz00_932);
										{	/* Cfa/specialize.scm 48 */
											obj_t BgL_aux3625z00_933;

											BgL_aux3625z00_933 = CAR(BgL_runner3626z00_934);
											BgL_runner3626z00_934 = CDR(BgL_runner3626z00_934);
											BGl_installzd2specializa7ez12z67zzcfa_specializa7eza7
												(BgL_aux3625z00_933, BgL_runner3626z00_934);
										}
									}
								}
								{
									obj_t BgL_l3551z00_3097;

									BgL_l3551z00_3097 = CDR(BgL_l3551z00_929);
									BgL_l3551z00_929 = BgL_l3551z00_3097;
									goto BgL_zc3anonymousza33623ze3z83_930;
								}
							}
						else
							{	/* Cfa/specialize.scm 47 */
								((bool_t) 1);
							}
					}
					BGl_patchzd2treez12zc0zzcfa_specializa7eza7(BgL_globalsz00_1);
					BGl_showzd2specializa7ez75zzcfa_specializa7eza7();
					BGl_uninstallzd2specializa7esz12z67zzcfa_specializa7eza7();
				}
			else
				{	/* Cfa/specialize.scm 45 */
					BFALSE;
				}
			return BgL_globalsz00_1;
		}
	}



/* _specialize! */
	obj_t BGl__specializa7ez12zb5zzcfa_specializa7eza7(obj_t BgL_envz00_2952,
		obj_t BgL_globalsz00_2953)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 43 */
			return BGl_specializa7ez12zb5zzcfa_specializa7eza7(BgL_globalsz00_2953);
		}
	}



/* arithmetic-operator? */
	BGL_EXPORTED_DEF obj_t
		BGl_arithmeticzd2operatorzf3z21zzcfa_specializa7eza7(BgL_globalz00_bglt
		BgL_globalz00_2)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 58 */
			{	/* Cfa/specialize.scm 60 */
				obj_t BgL_cellz00_938;

				{	/* Cfa/specialize.scm 60 */
					obj_t BgL_arg3631z00_943;

					{
						BgL_variablez00_bglt BgL_auxz00_3103;

						BgL_auxz00_3103 = (BgL_variablez00_bglt) (BgL_globalz00_2);
						BgL_arg3631z00_943 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_3103))->BgL_idz00);
					}
					BgL_cellz00_938 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg3631z00_943,
						BGl_za2specializa7ationsza2za7zzcfa_specializa7eza7);
				}
				if (PAIRP(BgL_cellz00_938))
					{	/* Cfa/specialize.scm 62 */
						bool_t BgL_auxz00_3109;

						{	/* Cfa/specialize.scm 62 */
							obj_t BgL_auxz00_3110;

							{	/* Cfa/specialize.scm 62 */
								obj_t BgL_pairz00_1835;

								BgL_pairz00_1835 = CAR(CDR(BgL_cellz00_938));
								BgL_auxz00_3110 = CAR(CDR(BgL_pairz00_1835));
							}
							BgL_auxz00_3109 =
								(BgL_auxz00_3110 ==
								(((BgL_globalz00_bglt) CREF(BgL_globalz00_2))->BgL_modulez00));
						}
						return BBOOL(BgL_auxz00_3109);
					}
				else
					{	/* Cfa/specialize.scm 61 */
						return BFALSE;
					}
			}
		}
	}



/* _arithmetic-operator? */
	obj_t BGl__arithmeticzd2operatorzf3z21zzcfa_specializa7eza7(obj_t
		BgL_envz00_2954, obj_t BgL_globalz00_2955)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 58 */
			return
				BGl_arithmeticzd2operatorzf3z21zzcfa_specializa7eza7(
				(BgL_globalz00_bglt) (BgL_globalz00_2955));
		}
	}



/* arithmetic-spec-types */
	BGL_EXPORTED_DEF obj_t
		BGl_arithmeticzd2speczd2typesz00zzcfa_specializa7eza7(BgL_globalz00_bglt
		BgL_globalz00_3)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 71 */
			{	/* Cfa/specialize.scm 73 */
				obj_t BgL_cellz00_945;

				{	/* Cfa/specialize.scm 73 */
					obj_t BgL_arg3652z00_972;

					{
						BgL_variablez00_bglt BgL_auxz00_3120;

						BgL_auxz00_3120 = (BgL_variablez00_bglt) (BgL_globalz00_3);
						BgL_arg3652z00_972 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_3120))->BgL_idz00);
					}
					BgL_cellz00_945 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg3652z00_972,
						BGl_za2specializa7ationsza2za7zzcfa_specializa7eza7);
				}
				if (PAIRP(BgL_cellz00_945))
					{	/* Cfa/specialize.scm 76 */
						obj_t BgL_g3506z00_947;

						BgL_g3506z00_947 = CDR(CDR(BgL_cellz00_945));
						{
							obj_t BgL_specz00_950;

							obj_t BgL_typesz00_951;

							BgL_specz00_950 = BgL_g3506z00_947;
							BgL_typesz00_951 = BNIL;
						BgL_zc3anonymousza33633ze3z83_952:
							if (NULLP(BgL_specz00_950))
								{	/* Cfa/specialize.scm 79 */
									if (NULLP(BgL_typesz00_951))
										{	/* Cfa/specialize.scm 80 */
											return
												BGl_internalzd2errorzd2zztools_errorz00
												(BGl_string4055z00zzcfa_specializa7eza7,
												BGl_string4056z00zzcfa_specializa7eza7,
												BGl_shapez00zztools_shapez00((obj_t)
													(BgL_globalz00_3)));
										}
									else
										{	/* Cfa/specialize.scm 80 */
											return BgL_typesz00_951;
										}
								}
							else
								{	/* Cfa/specialize.scm 85 */
									bool_t BgL_testz00_3135;

									if (CBOOL
										(BGl_za2optimzd2cfazd2fixnumzd2arithmeticzf3za2z21zzengine_paramz00))
										{	/* Cfa/specialize.scm 86 */
											obj_t BgL_auxz00_3138;

											{	/* Cfa/specialize.scm 86 */
												obj_t BgL_pairz00_1849;

												BgL_pairz00_1849 = CAR(BgL_specz00_950);
												BgL_auxz00_3138 = CAR(CDR(BgL_pairz00_1849));
											}
											BgL_testz00_3135 =
												(BgL_auxz00_3138 == CNST_TABLE_REF(((long) 1)));
										}
									else
										{	/* Cfa/specialize.scm 85 */
											BgL_testz00_3135 = ((bool_t) 0);
										}
									if (BgL_testz00_3135)
										{	/* Cfa/specialize.scm 87 */
											obj_t BgL_arg3640z00_959;

											obj_t BgL_arg3641z00_960;

											BgL_arg3640z00_959 = CDR(BgL_specz00_950);
											BgL_arg3641z00_960 =
												MAKE_PAIR(BGl_za2longza2z00zztype_cachez00,
												BgL_typesz00_951);
											{
												obj_t BgL_typesz00_3147;

												obj_t BgL_specz00_3146;

												BgL_specz00_3146 = BgL_arg3640z00_959;
												BgL_typesz00_3147 = BgL_arg3641z00_960;
												BgL_typesz00_951 = BgL_typesz00_3147;
												BgL_specz00_950 = BgL_specz00_3146;
												goto BgL_zc3anonymousza33633ze3z83_952;
											}
										}
									else
										{	/* Cfa/specialize.scm 88 */
											bool_t BgL_testz00_3148;

											if (CBOOL
												(BGl_za2optimzd2cfazd2flonumzd2arithmeticzf3za2z21zzengine_paramz00))
												{	/* Cfa/specialize.scm 89 */
													obj_t BgL_auxz00_3151;

													{	/* Cfa/specialize.scm 89 */
														obj_t BgL_pairz00_1855;

														BgL_pairz00_1855 = CAR(BgL_specz00_950);
														BgL_auxz00_3151 = CAR(CDR(BgL_pairz00_1855));
													}
													BgL_testz00_3148 =
														(BgL_auxz00_3151 == CNST_TABLE_REF(((long) 2)));
												}
											else
												{	/* Cfa/specialize.scm 88 */
													BgL_testz00_3148 = ((bool_t) 0);
												}
											if (BgL_testz00_3148)
												{	/* Cfa/specialize.scm 90 */
													obj_t BgL_arg3643z00_962;

													obj_t BgL_arg3644z00_963;

													BgL_arg3643z00_962 = CDR(BgL_specz00_950);
													BgL_arg3644z00_963 =
														MAKE_PAIR(BGl_za2realza2z00zztype_cachez00,
														BgL_typesz00_951);
													{
														obj_t BgL_typesz00_3160;

														obj_t BgL_specz00_3159;

														BgL_specz00_3159 = BgL_arg3643z00_962;
														BgL_typesz00_3160 = BgL_arg3644z00_963;
														BgL_typesz00_951 = BgL_typesz00_3160;
														BgL_specz00_950 = BgL_specz00_3159;
														goto BgL_zc3anonymousza33633ze3z83_952;
													}
												}
											else
												{
													obj_t BgL_specz00_3161;

													BgL_specz00_3161 = CDR(BgL_specz00_950);
													BgL_specz00_950 = BgL_specz00_3161;
													goto BgL_zc3anonymousza33633ze3z83_952;
												}
										}
								}
						}
					}
				else
					{	/* Cfa/specialize.scm 74 */
						return BNIL;
					}
			}
		}
	}



/* _arithmetic-spec-types */
	obj_t BGl__arithmeticzd2speczd2typesz00zzcfa_specializa7eza7(obj_t
		BgL_envz00_2956, obj_t BgL_globalz00_2957)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 71 */
			return
				BGl_arithmeticzd2speczd2typesz00zzcfa_specializa7eza7(
				(BgL_globalz00_bglt) (BgL_globalz00_2957));
		}
	}



/* specialize-optimization? */
	bool_t BGl_specializa7ezd2optimiza7ationzf3z21zzcfa_specializa7eza7()
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 163 */
			if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 1)))
				{	/* Cfa/specialize.scm 164 */
					if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
						{	/* Cfa/specialize.scm 164 */
							return ((bool_t) 0);
						}
					else
						{	/* Cfa/specialize.scm 164 */
							return ((bool_t) 1);
						}
				}
			else
				{	/* Cfa/specialize.scm 164 */
					return ((bool_t) 0);
				}
		}
	}



/* show-specialize */
	bool_t BGl_showzd2specializa7ez75zzcfa_specializa7eza7()
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 169 */
			{	/* Cfa/specialize.scm 170 */
				obj_t BgL_list3653z00_974;

				{	/* Cfa/specialize.scm 170 */
					obj_t BgL_arg3655z00_976;

					BgL_arg3655z00_976 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
					BgL_list3653z00_974 =
						MAKE_PAIR(BGl_string4057z00zzcfa_specializa7eza7,
						BgL_arg3655z00_976);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list3653z00_974);
			}
			{
				obj_t BgL_l3553z00_978;

				BgL_l3553z00_978 =
					BGl_za2specializa7edzd2typesza2z75zzcfa_specializa7eza7;
			BgL_zc3anonymousza33656ze3z83_979:
				if (PAIRP(BgL_l3553z00_978))
					{	/* Cfa/specialize.scm 171 */
						{	/* Cfa/specialize.scm 172 */
							obj_t BgL_typeze2numze2_981;

							BgL_typeze2numze2_981 = CAR(BgL_l3553z00_978);
							{	/* Cfa/specialize.scm 172 */
								bool_t BgL_testz00_3178;

								{	/* Cfa/specialize.scm 172 */
									long BgL_auxz00_3179;

									{	/* Cfa/specialize.scm 172 */
										obj_t BgL_pairz00_1865;

										BgL_pairz00_1865 = BgL_typeze2numze2_981;
										BgL_auxz00_3179 = (long) CINT(CDR(BgL_pairz00_1865));
									}
									BgL_testz00_3178 = (BgL_auxz00_3179 > ((long) 0));
								}
								if (BgL_testz00_3178)
									{	/* Cfa/specialize.scm 173 */
										obj_t BgL_arg3661z00_985;

										obj_t BgL_arg3663z00_987;

										BgL_arg3661z00_985 =
											BGl_shapez00zztools_shapez00(CAR(BgL_typeze2numze2_981));
										BgL_arg3663z00_987 = CDR(BgL_typeze2numze2_981);
										{	/* Cfa/specialize.scm 173 */
											obj_t BgL_list3665z00_989;

											{	/* Cfa/specialize.scm 173 */
												obj_t BgL_arg3666z00_990;

												{	/* Cfa/specialize.scm 173 */
													obj_t BgL_arg3667z00_991;

													{	/* Cfa/specialize.scm 173 */
														obj_t BgL_arg3668z00_992;

														{	/* Cfa/specialize.scm 173 */
															obj_t BgL_arg3670z00_993;

															BgL_arg3670z00_993 =
																MAKE_PAIR
																(BGl_string4058z00zzcfa_specializa7eza7, BNIL);
															BgL_arg3668z00_992 =
																MAKE_PAIR(BgL_arg3663z00_987,
																BgL_arg3670z00_993);
														}
														BgL_arg3667z00_991 =
															MAKE_PAIR(BGl_string4059z00zzcfa_specializa7eza7,
															BgL_arg3668z00_992);
													}
													BgL_arg3666z00_990 =
														MAKE_PAIR(BgL_arg3661z00_985, BgL_arg3667z00_991);
												}
												BgL_list3665z00_989 =
													MAKE_PAIR(BGl_string4060z00zzcfa_specializa7eza7,
													BgL_arg3666z00_990);
											}
											BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
												BgL_list3665z00_989);
									}}
								else
									{	/* Cfa/specialize.scm 172 */
										BFALSE;
									}
							}
						}
						{
							obj_t BgL_l3553z00_3193;

							BgL_l3553z00_3193 = CDR(BgL_l3553z00_978);
							BgL_l3553z00_978 = BgL_l3553z00_3193;
							goto BgL_zc3anonymousza33656ze3z83_979;
						}
					}
				else
					{	/* Cfa/specialize.scm 171 */
						((bool_t) 1);
					}
			}
			{
				obj_t BgL_l3555z00_1000;

				BgL_l3555z00_1000 =
					BGl_za2specializa7edzd2eqzd2typesza2za7zzcfa_specializa7eza7;
			BgL_zc3anonymousza33675ze3z83_1001:
				if (PAIRP(BgL_l3555z00_1000))
					{	/* Cfa/specialize.scm 176 */
						{	/* Cfa/specialize.scm 177 */
							obj_t BgL_typeze2numze2_1003;

							BgL_typeze2numze2_1003 = CAR(BgL_l3555z00_1000);
							{	/* Cfa/specialize.scm 177 */
								bool_t BgL_testz00_3198;

								{	/* Cfa/specialize.scm 177 */
									long BgL_auxz00_3199;

									{	/* Cfa/specialize.scm 177 */
										obj_t BgL_pairz00_1873;

										BgL_pairz00_1873 = BgL_typeze2numze2_1003;
										BgL_auxz00_3199 = (long) CINT(CDR(BgL_pairz00_1873));
									}
									BgL_testz00_3198 = (BgL_auxz00_3199 > ((long) 0));
								}
								if (BgL_testz00_3198)
									{	/* Cfa/specialize.scm 178 */
										obj_t BgL_arg3680z00_1007;

										obj_t BgL_arg3682z00_1009;

										BgL_arg3680z00_1007 =
											BGl_shapez00zztools_shapez00(CAR(BgL_typeze2numze2_1003));
										BgL_arg3682z00_1009 = CDR(BgL_typeze2numze2_1003);
										{	/* Cfa/specialize.scm 178 */
											obj_t BgL_list3684z00_1011;

											{	/* Cfa/specialize.scm 178 */
												obj_t BgL_arg3685z00_1012;

												{	/* Cfa/specialize.scm 178 */
													obj_t BgL_arg3686z00_1013;

													{	/* Cfa/specialize.scm 178 */
														obj_t BgL_arg3687z00_1014;

														{	/* Cfa/specialize.scm 178 */
															obj_t BgL_arg3688z00_1015;

															BgL_arg3688z00_1015 =
																MAKE_PAIR
																(BGl_string4058z00zzcfa_specializa7eza7, BNIL);
															BgL_arg3687z00_1014 =
																MAKE_PAIR(BgL_arg3682z00_1009,
																BgL_arg3688z00_1015);
														}
														BgL_arg3686z00_1013 =
															MAKE_PAIR(BGl_string4059z00zzcfa_specializa7eza7,
															BgL_arg3687z00_1014);
													}
													BgL_arg3685z00_1012 =
														MAKE_PAIR(BgL_arg3680z00_1007, BgL_arg3686z00_1013);
												}
												BgL_list3684z00_1011 =
													MAKE_PAIR(BGl_string4061z00zzcfa_specializa7eza7,
													BgL_arg3685z00_1012);
											}
											BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
												BgL_list3684z00_1011);
									}}
								else
									{	/* Cfa/specialize.scm 177 */
										BFALSE;
									}
							}
						}
						{
							obj_t BgL_l3555z00_3213;

							BgL_l3555z00_3213 = CDR(BgL_l3555z00_1000);
							BgL_l3555z00_1000 = BgL_l3555z00_3213;
							goto BgL_zc3anonymousza33675ze3z83_1001;
						}
					}
				else
					{	/* Cfa/specialize.scm 176 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* install-specialized-type! */
	obj_t BGl_installzd2specializa7edzd2typez12zb5zzcfa_specializa7eza7(obj_t
		BgL_typez00_4)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 193 */
			{	/* Cfa/specialize.scm 194 */
				bool_t BgL_testz00_3215;

				{	/* Cfa/specialize.scm 194 */
					obj_t BgL_auxz00_3216;

					BgL_auxz00_3216 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_typez00_4,
						BGl_za2specializa7edzd2typesza2z75zzcfa_specializa7eza7);
					BgL_testz00_3215 = PAIRP(BgL_auxz00_3216);
				}
				if (BgL_testz00_3215)
					{	/* Cfa/specialize.scm 194 */
						return BFALSE;
					}
				else
					{	/* Cfa/specialize.scm 194 */
						{	/* Cfa/specialize.scm 196 */
							obj_t BgL_arg3694z00_1022;

							BgL_arg3694z00_1022 = MAKE_PAIR(BgL_typez00_4, BINT(((long) 0)));
							BGl_za2specializa7edzd2typesza2z75zzcfa_specializa7eza7 =
								MAKE_PAIR(BgL_arg3694z00_1022,
								BGl_za2specializa7edzd2typesza2z75zzcfa_specializa7eza7);
						}
						{	/* Cfa/specialize.scm 197 */
							obj_t BgL_list3695z00_1023;

							BgL_list3695z00_1023 =
								MAKE_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
							BGl_za2boxedzd2eqzf3za2z21zzcfa_specializa7eza7 =
								BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 4)),
								BgL_list3695z00_1023);
						}
						{	/* Cfa/specialize.scm 198 */
							obj_t BgL_list3696z00_1024;

							BgL_list3696z00_1024 =
								MAKE_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
							return (BGl_za2czd2eqzf3za2z21zzcfa_specializa7eza7 =
								BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 5)),
									BgL_list3696z00_1024), BUNSPEC);
		}}}}
	}



/* add-specialized-type! */
	obj_t BGl_addzd2specializa7edzd2typez12zb5zzcfa_specializa7eza7(obj_t
		BgL_typez00_5)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 203 */
			{	/* Cfa/specialize.scm 204 */
				obj_t BgL_cellz00_1026;

				BgL_cellz00_1026 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_typez00_5,
					BGl_za2specializa7edzd2typesza2z75zzcfa_specializa7eza7);
				if (PAIRP(BgL_cellz00_1026))
					{	/* Cfa/specialize.scm 209 */
						long BgL_arg3699z00_1028;

						BgL_arg3699z00_1028 =
							(((long) 1) + (long) CINT(CDR(BgL_cellz00_1026)));
						{	/* Cfa/specialize.scm 209 */
							obj_t BgL_auxz00_3236;

							BgL_auxz00_3236 = BINT(BgL_arg3699z00_1028);
							return SET_CDR(BgL_cellz00_1026, BgL_auxz00_3236);
						}
					}
				else
					{	/* Cfa/specialize.scm 205 */
						return
							BGl_internalzd2errorzd2zztools_errorz00
							(BGl_string4062z00zzcfa_specializa7eza7,
							BGl_string4063z00zzcfa_specializa7eza7,
							BGl_shapez00zztools_shapez00(BgL_typez00_5));
					}
			}
		}
	}



/* add-specialized-eq-type! */
	obj_t BGl_addzd2specializa7edzd2eqzd2typez12z67zzcfa_specializa7eza7(obj_t
		BgL_typez00_6)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 214 */
			{	/* Cfa/specialize.scm 215 */
				obj_t BgL_cellz00_1034;

				BgL_cellz00_1034 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_typez00_6,
					BGl_za2specializa7edzd2eqzd2typesza2za7zzcfa_specializa7eza7);
				if (PAIRP(BgL_cellz00_1034))
					{	/* Cfa/specialize.scm 219 */
						long BgL_arg3706z00_1036;

						BgL_arg3706z00_1036 =
							(((long) 1) + (long) CINT(CDR(BgL_cellz00_1034)));
						{	/* Cfa/specialize.scm 219 */
							obj_t BgL_auxz00_3247;

							BgL_auxz00_3247 = BINT(BgL_arg3706z00_1036);
							return SET_CDR(BgL_cellz00_1034, BgL_auxz00_3247);
						}
					}
				else
					{	/* Cfa/specialize.scm 217 */
						obj_t BgL_arg3709z00_1039;

						BgL_arg3709z00_1039 = MAKE_PAIR(BgL_typez00_6, BINT(((long) 1)));
						return (BGl_za2specializa7edzd2eqzd2typesza2za7zzcfa_specializa7eza7
							=
							MAKE_PAIR(BgL_arg3709z00_1039,
								BGl_za2specializa7edzd2eqzd2typesza2za7zzcfa_specializa7eza7),
							BUNSPEC);
					}
			}
		}
	}



/* install-specialize! */
	obj_t BGl_installzd2specializa7ez12z67zzcfa_specializa7eza7(obj_t
		BgL_genz00_7, obj_t BgL_fixesz00_8)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 224 */
			{	/* Cfa/specialize.scm 225 */
				obj_t BgL_genzd2idzd2_1040;

				BgL_genzd2idzd2_1040 = CAR(BgL_genz00_7);
				{	/* Cfa/specialize.scm 225 */
					obj_t BgL_genzd2modzd2_1041;

					{	/* Cfa/specialize.scm 226 */
						obj_t BgL_pairz00_1893;

						BgL_pairz00_1893 = BgL_genz00_7;
						BgL_genzd2modzd2_1041 = CAR(CDR(BgL_pairz00_1893));
					}
					{	/* Cfa/specialize.scm 226 */
						obj_t BgL_genericz00_1042;

						BgL_genericz00_1042 =
							BGl_findzd2globalzf2modulez20zzast_envz00(BgL_genzd2idzd2_1040,
							BgL_genzd2modzd2_1041);
						{	/* Cfa/specialize.scm 227 */

							if (BGl_iszd2azf3z21zz__objectz00(BgL_genericz00_1042,
									BGl_globalz00zzast_varz00))
								{
									obj_t BgL_fixesz00_1046;

									obj_t BgL_resz00_1047;

									BgL_fixesz00_1046 = BgL_fixesz00_8;
									BgL_resz00_1047 = BNIL;
								BgL_zc3anonymousza33711ze3z83_1048:
									if (NULLP(BgL_fixesz00_1046))
										{	/* Cfa/specialize.scm 231 */
											{	/* Cfa/specialize.scm 233 */
												BgL_globalz00_bglt BgL_obj3510z00_1050;

												BgL_obj3510z00_1050 =
													((BgL_globalz00_bglt)
													(BgL_globalz00_bglt) (BgL_genericz00_1042));
												{	/* Cfa/specialize.scm 233 */
													BgL_specializa7edzd2globalz75_bglt
														BgL_arg3713z00_1051;
													{	/* Cfa/specialize.scm 233 */
														BgL_specializa7edzd2globalz75_bglt
															BgL_res3985z00_1905;
														{	/* Cfa/specialize.scm 233 */
															BgL_specializa7edzd2globalz75_bglt
																BgL_new3416z00_1900;
															BgL_new3416z00_1900 =
																((BgL_specializa7edzd2globalz75_bglt)
																BREF(GC_MALLOC(sizeof(struct
																			BgL_specializa7edzd2globalz75_bgl))));
															{	/* Cfa/specialize.scm 233 */
																BgL_specializa7edzd2globalz75_bglt
																	BgL_res3984z00_1904;
																{	/* Cfa/specialize.scm 233 */
																	BgL_specializa7edzd2globalz75_bglt
																		BgL_new3438z00_1901;
																	BgL_new3438z00_1901 = BgL_new3416z00_1900;
																	{	/* Cfa/specialize.scm 233 */
																		obj_t BgL_fix3437z00_1903;

																		BgL_fix3437z00_1903 = BgL_resz00_1047;
																		((((BgL_specializa7edzd2globalz75_bglt)
																					CREF(BgL_new3438z00_1901))->
																				BgL_fixz00) =
																			((obj_t) BgL_fix3437z00_1903), BUNSPEC);
																		BgL_res3984z00_1904 = BgL_new3438z00_1901;
																}} BgL_res3984z00_1904;
															}
															BgL_res3985z00_1905 = BgL_new3416z00_1900;
														}
														BgL_arg3713z00_1051 = BgL_res3985z00_1905;
													}
													{	/* Cfa/specialize.scm 233 */
														obj_t BgL_auxz00_3267;

														BgL_objectz00_bglt BgL_auxz00_3265;

														BgL_auxz00_3267 = (obj_t) (BgL_arg3713z00_1051);
														BgL_auxz00_3265 =
															(BgL_objectz00_bglt) (BgL_obj3510z00_1050);
														BGL_OBJECT_WIDENING_SET(BgL_auxz00_3265,
															BgL_auxz00_3267);
												}}
												BGL_OBJECT_CLASS_NUM_SET(
													(BgL_objectz00_bglt) (BgL_obj3510z00_1050),
													BGl_classzd2numzd2zz__objectz00
													(BGl_specializa7edzd2globalz75zzcfa_specializa7eza7));
												BgL_obj3510z00_1050;
											}
											return (BGl_za2specializa7eza2za7zzcfa_specializa7eza7 =
												MAKE_PAIR(BgL_genericz00_1042,
													BGl_za2specializa7eza2za7zzcfa_specializa7eza7),
												BUNSPEC);
										}
									else
										{	/* Cfa/specialize.scm 236 */
											obj_t BgL_fixz00_1053;

											BgL_fixz00_1053 = CAR(BgL_fixesz00_1046);
											{	/* Cfa/specialize.scm 236 */
												obj_t BgL_idz00_1054;

												BgL_idz00_1054 = CAR(BgL_fixz00_1053);
												{	/* Cfa/specialize.scm 237 */
													obj_t BgL_modz00_1055;

													{	/* Cfa/specialize.scm 238 */
														obj_t BgL_pairz00_1910;

														BgL_pairz00_1910 = BgL_fixz00_1053;
														BgL_modz00_1055 = CAR(CDR(BgL_pairz00_1910));
													}
													{	/* Cfa/specialize.scm 238 */
														obj_t BgL_globalz00_1056;

														BgL_globalz00_1056 =
															BGl_findzd2globalzf2modulez20zzast_envz00
															(BgL_idz00_1054, BgL_modz00_1055);
														{	/* Cfa/specialize.scm 239 */

															if (BGl_iszd2azf3z21zz__objectz00
																(BgL_globalz00_1056, BGl_globalz00zzast_varz00))
																{	/* Cfa/specialize.scm 241 */
																	BgL_valuez00_bglt BgL_valz00_1058;

																	{
																		BgL_variablez00_bglt BgL_auxz00_3281;

																		BgL_auxz00_3281 =
																			(BgL_variablez00_bglt) (
																			(BgL_globalz00_bglt)
																			(BgL_globalz00_1056));
																		BgL_valz00_1058 =
																			(((BgL_variablez00_bglt)
																				CREF(BgL_auxz00_3281))->BgL_valuez00);
																	}
																	{	/* Cfa/specialize.scm 243 */
																		bool_t BgL_testz00_3285;

																		{	/* Cfa/specialize.scm 243 */
																			bool_t BgL_testz00_3286;

																			{	/* Cfa/specialize.scm 243 */
																				obj_t BgL_obj2044z00_1916;

																				BgL_obj2044z00_1916 =
																					(obj_t) (BgL_valz00_1058);
																				BgL_testz00_3286 =
																					BGl_iszd2azf3z21zz__objectz00
																					(BgL_obj2044z00_1916,
																					BGl_sfunz00zzast_varz00);
																			}
																			if (BgL_testz00_3286)
																				{	/* Cfa/specialize.scm 243 */
																					obj_t BgL_auxz00_3289;

																					{
																						BgL_sfunz00_bglt BgL_auxz00_3290;

																						BgL_auxz00_3290 =
																							(BgL_sfunz00_bglt)
																							(BgL_valz00_1058);
																						BgL_auxz00_3289 =
																							(((BgL_sfunz00_bglt)
																								CREF(BgL_auxz00_3290))->
																							BgL_argsz00);
																					}
																					BgL_testz00_3285 =
																						PAIRP(BgL_auxz00_3289);
																				}
																			else
																				{	/* Cfa/specialize.scm 243 */
																					BgL_testz00_3285 = ((bool_t) 0);
																				}
																		}
																		if (BgL_testz00_3285)
																			{	/* Cfa/specialize.scm 244 */
																				obj_t BgL_typez00_1060;

																				{	/* Cfa/specialize.scm 244 */
																					obj_t BgL_vz00_1064;

																					{	/* Cfa/specialize.scm 244 */
																						obj_t BgL_pairz00_1920;

																						{
																							BgL_sfunz00_bglt BgL_auxz00_3294;

																							BgL_auxz00_3294 =
																								(BgL_sfunz00_bglt)
																								(BgL_valz00_1058);
																							BgL_pairz00_1920 =
																								(((BgL_sfunz00_bglt)
																									CREF(BgL_auxz00_3294))->
																								BgL_argsz00);
																						}
																						BgL_vz00_1064 =
																							CAR(BgL_pairz00_1920);
																					}
																					if (BGl_iszd2azf3z21zz__objectz00
																						(BgL_vz00_1064,
																							BGl_typez00zztype_typez00))
																						{	/* Cfa/specialize.scm 248 */
																							BgL_typez00_1060 = BgL_vz00_1064;
																						}
																					else
																						{	/* Cfa/specialize.scm 248 */
																							if (BGl_iszd2azf3z21zz__objectz00
																								(BgL_vz00_1064,
																									BGl_localz00zzast_varz00))
																								{	/* Cfa/specialize.scm 251 */
																									BgL_variablez00_bglt
																										BgL_obj1696z00_1923;
																									BgL_obj1696z00_1923 =
																										(BgL_variablez00_bglt) (
																										(BgL_localz00_bglt)
																										(BgL_vz00_1064));
																									BgL_typez00_1060 =
																										(obj_t) (((
																												(BgL_variablez00_bglt)
																												CREF
																												(BgL_obj1696z00_1923))->
																											BgL_typez00));
																								}
																							else
																								{	/* Cfa/specialize.scm 253 */
																									obj_t BgL_arg3724z00_1069;

																									{
																										BgL_variablez00_bglt
																											BgL_auxz00_3306;
																										BgL_auxz00_3306 =
																											(BgL_variablez00_bglt) (
																											(BgL_globalz00_bglt)
																											(BgL_globalz00_1056));
																										BgL_arg3724z00_1069 =
																											(((BgL_variablez00_bglt)
																												CREF(BgL_auxz00_3306))->
																											BgL_idz00);
																									}
																									BgL_typez00_1060 =
																										BGl_internalzd2errorzd2zztools_errorz00
																										(BGl_string4064z00zzcfa_specializa7eza7,
																										BGl_string4065z00zzcfa_specializa7eza7,
																										BgL_arg3724z00_1069);
																								}
																						}
																				}
																				BGl_installzd2specializa7edzd2typez12zb5zzcfa_specializa7eza7
																					(BgL_typez00_1060);
																				{	/* Cfa/specialize.scm 258 */
																					obj_t BgL_arg3717z00_1061;

																					obj_t BgL_arg3718z00_1062;

																					BgL_arg3717z00_1061 =
																						CDR(BgL_fixesz00_1046);
																					{	/* Cfa/specialize.scm 259 */
																						obj_t BgL_arg3719z00_1063;

																						BgL_arg3719z00_1063 =
																							MAKE_PAIR(BgL_typez00_1060,
																							BgL_globalz00_1056);
																						BgL_arg3718z00_1062 =
																							MAKE_PAIR(BgL_arg3719z00_1063,
																							BgL_resz00_1047);
																					}
																					{
																						obj_t BgL_resz00_3316;

																						obj_t BgL_fixesz00_3315;

																						BgL_fixesz00_3315 =
																							BgL_arg3717z00_1061;
																						BgL_resz00_3316 =
																							BgL_arg3718z00_1062;
																						BgL_resz00_1047 = BgL_resz00_3316;
																						BgL_fixesz00_1046 =
																							BgL_fixesz00_3315;
																						goto
																							BgL_zc3anonymousza33711ze3z83_1048;
																					}
																				}
																			}
																		else
																			{	/* Cfa/specialize.scm 260 */
																				bool_t BgL_testz00_3317;

																				{	/* Cfa/specialize.scm 260 */
																					bool_t BgL_testz00_3318;

																					{	/* Cfa/specialize.scm 260 */
																						obj_t BgL_obj2108z00_1926;

																						BgL_obj2108z00_1926 =
																							(obj_t) (BgL_valz00_1058);
																						BgL_testz00_3318 =
																							BGl_iszd2azf3z21zz__objectz00
																							(BgL_obj2108z00_1926,
																							BGl_cfunz00zzast_varz00);
																					}
																					if (BgL_testz00_3318)
																						{	/* Cfa/specialize.scm 260 */
																							obj_t BgL_auxz00_3321;

																							{
																								BgL_cfunz00_bglt
																									BgL_auxz00_3322;
																								BgL_auxz00_3322 =
																									(BgL_cfunz00_bglt)
																									(BgL_valz00_1058);
																								BgL_auxz00_3321 =
																									(((BgL_cfunz00_bglt)
																										CREF(BgL_auxz00_3322))->
																									BgL_argszd2typezd2);
																							}
																							BgL_testz00_3317 =
																								PAIRP(BgL_auxz00_3321);
																						}
																					else
																						{	/* Cfa/specialize.scm 260 */
																							BgL_testz00_3317 = ((bool_t) 0);
																						}
																				}
																				if (BgL_testz00_3317)
																					{	/* Cfa/specialize.scm 261 */
																						obj_t BgL_typez00_1072;

																						{	/* Cfa/specialize.scm 261 */
																							obj_t BgL_pairz00_1930;

																							{
																								BgL_cfunz00_bglt
																									BgL_auxz00_3326;
																								BgL_auxz00_3326 =
																									(BgL_cfunz00_bglt)
																									(BgL_valz00_1058);
																								BgL_pairz00_1930 =
																									(((BgL_cfunz00_bglt)
																										CREF(BgL_auxz00_3326))->
																									BgL_argszd2typezd2);
																							}
																							BgL_typez00_1072 =
																								CAR(BgL_pairz00_1930);
																						}
																						BGl_installzd2specializa7edzd2typez12zb5zzcfa_specializa7eza7
																							(BgL_typez00_1072);
																						{	/* Cfa/specialize.scm 263 */
																							obj_t BgL_arg3727z00_1073;

																							obj_t BgL_arg3728z00_1074;

																							BgL_arg3727z00_1073 =
																								CDR(BgL_fixesz00_1046);
																							{	/* Cfa/specialize.scm 264 */
																								obj_t BgL_arg3729z00_1075;

																								BgL_arg3729z00_1075 =
																									MAKE_PAIR(BgL_typez00_1072,
																									BgL_globalz00_1056);
																								BgL_arg3728z00_1074 =
																									MAKE_PAIR(BgL_arg3729z00_1075,
																									BgL_resz00_1047);
																							}
																							{
																								obj_t BgL_resz00_3335;

																								obj_t BgL_fixesz00_3334;

																								BgL_fixesz00_3334 =
																									BgL_arg3727z00_1073;
																								BgL_resz00_3335 =
																									BgL_arg3728z00_1074;
																								BgL_resz00_1047 =
																									BgL_resz00_3335;
																								BgL_fixesz00_1046 =
																									BgL_fixesz00_3334;
																								goto
																									BgL_zc3anonymousza33711ze3z83_1048;
																							}
																						}
																					}
																				else
																					{	/* Cfa/specialize.scm 260 */
																						return BFALSE;
																					}
																			}
																	}
																}
															else
																{	/* Cfa/specialize.scm 240 */
																	{	/* Cfa/specialize.scm 266 */
																		obj_t BgL_arg3738z00_1084;

																		BgL_arg3738z00_1084 =
																			MAKE_PAIR(BgL_idz00_1054,
																			BgL_modz00_1055);
																		{	/* Cfa/specialize.scm 266 */
																			obj_t BgL_list3739z00_1085;

																			{	/* Cfa/specialize.scm 266 */
																				obj_t BgL_arg3740z00_1086;

																				{	/* Cfa/specialize.scm 266 */
																					obj_t BgL_arg3741z00_1087;

																					{	/* Cfa/specialize.scm 266 */
																						obj_t BgL_arg3742z00_1088;

																						BgL_arg3742z00_1088 =
																							MAKE_PAIR(BgL_arg3738z00_1084,
																							BNIL);
																						BgL_arg3741z00_1087 =
																							MAKE_PAIR
																							(BGl_string4066z00zzcfa_specializa7eza7,
																							BgL_arg3742z00_1088);
																					}
																					BgL_arg3740z00_1086 =
																						MAKE_PAIR
																						(BGl_string4067z00zzcfa_specializa7eza7,
																						BgL_arg3741z00_1087);
																				}
																				BgL_list3739z00_1085 =
																					MAKE_PAIR
																					(BGl_string4068z00zzcfa_specializa7eza7,
																					BgL_arg3740z00_1086);
																			}
																			BGl_warningz00zz__errorz00
																				(BgL_list3739z00_1085);
																		}
																	}
																	{
																		obj_t BgL_fixesz00_3342;

																		BgL_fixesz00_3342 = CDR(BgL_fixesz00_1046);
																		BgL_fixesz00_1046 = BgL_fixesz00_3342;
																		goto BgL_zc3anonymousza33711ze3z83_1048;
																	}
																}
														}
													}
												}
											}
										}
								}
							else
								{	/* Cfa/specialize.scm 271 */
									obj_t BgL_arg3749z00_1094;

									BgL_arg3749z00_1094 =
										MAKE_PAIR(BgL_genzd2idzd2_1040, BgL_genzd2modzd2_1041);
									{	/* Cfa/specialize.scm 271 */
										obj_t BgL_list3750z00_1095;

										{	/* Cfa/specialize.scm 271 */
											obj_t BgL_arg3751z00_1096;

											{	/* Cfa/specialize.scm 271 */
												obj_t BgL_arg3752z00_1097;

												{	/* Cfa/specialize.scm 271 */
													obj_t BgL_arg3753z00_1098;

													BgL_arg3753z00_1098 =
														MAKE_PAIR(BgL_arg3749z00_1094, BNIL);
													BgL_arg3752z00_1097 =
														MAKE_PAIR(BGl_string4066z00zzcfa_specializa7eza7,
														BgL_arg3753z00_1098);
												}
												BgL_arg3751z00_1096 =
													MAKE_PAIR(BGl_string4067z00zzcfa_specializa7eza7,
													BgL_arg3752z00_1097);
											}
											BgL_list3750z00_1095 =
												MAKE_PAIR(BGl_string4068z00zzcfa_specializa7eza7,
												BgL_arg3751z00_1096);
										}
										return BGl_warningz00zz__errorz00(BgL_list3750z00_1095);
									}
								}
						}
					}
				}
			}
		}
	}



/* uninstall-specializes! */
	obj_t BGl_uninstallzd2specializa7esz12z67zzcfa_specializa7eza7()
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 279 */
			BGl_za2specializa7edzd2typesza2z75zzcfa_specializa7eza7 = BNIL;
			{
				obj_t BgL_l3557z00_1100;

				BgL_l3557z00_1100 = BGl_za2specializa7eza2za7zzcfa_specializa7eza7;
			BgL_zc3anonymousza33754ze3z83_1101:
				if (PAIRP(BgL_l3557z00_1100))
					{	/* Cfa/specialize.scm 281 */
						{	/* Cfa/specialize.scm 281 */
							obj_t BgL_oz00_1103;

							BgL_oz00_1103 = CAR(BgL_l3557z00_1100);
							{	/* Cfa/specialize.scm 281 */
								long BgL_arg3756z00_1105;

								{	/* Cfa/specialize.scm 281 */
									obj_t BgL_arg3757z00_1106;

									{	/* Cfa/specialize.scm 281 */
										obj_t BgL_arg3758z00_1107;

										{	/* Cfa/specialize.scm 281 */
											BgL_objectz00_bglt BgL_objectz00_1935;

											BgL_objectz00_1935 = (BgL_objectz00_bglt) (BgL_oz00_1103);
											{	/* Cfa/specialize.scm 281 */
												long BgL_arg2646z00_1936;

												{	/* Cfa/specialize.scm 281 */
													long BgL_arg2647z00_1937;

													BgL_arg2647z00_1937 =
														BGL_OBJECT_CLASS_NUM(BgL_objectz00_1935);
													BgL_arg2646z00_1936 =
														(BgL_arg2647z00_1937 - OBJECT_TYPE);
												}
												BgL_arg3758z00_1107 =
													VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
													(int) (BgL_arg2646z00_1936));
										}}
										BgL_arg3757z00_1106 =
											BGl_classzd2superzd2zz__objectz00(BgL_arg3758z00_1107);
									}
									BgL_arg3756z00_1105 =
										BGl_classzd2numzd2zz__objectz00(BgL_arg3757z00_1106);
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_oz00_1103), BgL_arg3756z00_1105);
							}
							{	/* Cfa/specialize.scm 281 */
								BgL_objectz00_bglt BgL_auxz00_3362;

								BgL_auxz00_3362 = (BgL_objectz00_bglt) (BgL_oz00_1103);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3362, BFALSE);
							} BgL_oz00_1103;
						}
						{
							obj_t BgL_l3557z00_3365;

							BgL_l3557z00_3365 = CDR(BgL_l3557z00_1100);
							BgL_l3557z00_1100 = BgL_l3557z00_3365;
							goto BgL_zc3anonymousza33754ze3z83_1101;
						}
					}
				else
					{	/* Cfa/specialize.scm 281 */
						((bool_t) 1);
					}
			}
			return (BGl_za2specializa7eza2za7zzcfa_specializa7eza7 = BNIL, BUNSPEC);
		}
	}



/* patch-tree! */
	bool_t BGl_patchzd2treez12zc0zzcfa_specializa7eza7(obj_t BgL_globalsz00_9)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 287 */
			{
				obj_t BgL_l3559z00_1111;

				BgL_l3559z00_1111 = BgL_globalsz00_9;
			BgL_zc3anonymousza33760ze3z83_1112:
				if (PAIRP(BgL_l3559z00_1111))
					{	/* Cfa/specialize.scm 288 */
						BGl_patchzd2funz12zc0zzcfa_specializa7eza7(CAR(BgL_l3559z00_1111));
						{
							obj_t BgL_l3559z00_3371;

							BgL_l3559z00_3371 = CDR(BgL_l3559z00_1111);
							BgL_l3559z00_1111 = BgL_l3559z00_3371;
							goto BgL_zc3anonymousza33760ze3z83_1112;
						}
					}
				else
					{	/* Cfa/specialize.scm 288 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* patch-fun! */
	obj_t BGl_patchzd2funz12zc0zzcfa_specializa7eza7(obj_t BgL_variablez00_10)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 293 */
			{	/* Cfa/specialize.scm 294 */
				BgL_valuez00_bglt BgL_funz00_1117;

				{
					BgL_variablez00_bglt BgL_auxz00_3373;

					BgL_auxz00_3373 = (BgL_variablez00_bglt) (BgL_variablez00_10);
					BgL_funz00_1117 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_3373))->BgL_valuez00);
				}
				{	/* Cfa/specialize.scm 295 */
					obj_t BgL_arg3764z00_1118;

					{	/* Cfa/specialize.scm 295 */
						obj_t BgL_arg3765z00_1119;

						{
							BgL_sfunz00_bglt BgL_auxz00_3376;

							BgL_auxz00_3376 = (BgL_sfunz00_bglt) (BgL_funz00_1117);
							BgL_arg3765z00_1119 =
								(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3376))->BgL_bodyz00);
						}
						{	/* Cfa/specialize.scm 295 */
							BgL_nodez00_bglt BgL_nodez00_1951;

							BgL_nodez00_1951 = (BgL_nodez00_bglt) (BgL_arg3765z00_1119);
							{	/* Cfa/specialize.scm 295 */
								obj_t BgL_method3572z00_1952;

								{	/* Cfa/specialize.scm 295 */
									BgL_objectz00_bglt BgL_objz00_1953;

									BgL_objz00_1953 = (BgL_objectz00_bglt) (BgL_nodez00_1951);
									{	/* Cfa/specialize.scm 295 */
										long BgL_objzd2classzd2numz00_1954;

										BgL_objzd2classzd2numz00_1954 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1953);
										{	/* Cfa/specialize.scm 295 */
											obj_t BgL_arg2643z00_1955;

											BgL_arg2643z00_1955 =
												PROCEDURE_REF
												(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
												(int) (((long) 1)));
											{	/* Cfa/specialize.scm 295 */
												obj_t BgL_arrayz00_1957;

												int BgL_offsetz00_1958;

												BgL_arrayz00_1957 = BgL_arg2643z00_1955;
												BgL_offsetz00_1958 =
													(int) (BgL_objzd2classzd2numz00_1954);
												{	/* Cfa/specialize.scm 295 */
													long BgL_offsetz00_1959;

													BgL_offsetz00_1959 =
														((long) (BgL_offsetz00_1958) - OBJECT_TYPE);
													{	/* Cfa/specialize.scm 295 */
														long BgL_modz00_1960;

														{	/* Cfa/specialize.scm 295 */
															int BgL_arg2645z00_1961;

															BgL_arg2645z00_1961 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 295 */
																long BgL_auxz00_3388;

																BgL_auxz00_3388 = (long) (BgL_arg2645z00_1961);
																BgL_modz00_1960 =
																	(BgL_offsetz00_1959 / BgL_auxz00_3388);
														}}
														{	/* Cfa/specialize.scm 295 */
															long BgL_restz00_1962;

															{	/* Cfa/specialize.scm 295 */
																int BgL_arg2644z00_1963;

																BgL_arg2644z00_1963 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 295 */
																	long BgL_auxz00_3392;

																	BgL_auxz00_3392 =
																		(long) (BgL_arg2644z00_1963);
																	BgL_restz00_1962 =
																		(BgL_offsetz00_1959 % BgL_auxz00_3392);
															}}
															{	/* Cfa/specialize.scm 295 */

																BgL_method3572z00_1952 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1957,
																		(int) (BgL_modz00_1960)),
																	(int) (BgL_restz00_1962));
								}}}}}}}}
								BgL_arg3764z00_1118 =
									PROCEDURE_ENTRY(BgL_method3572z00_1952)
									(BgL_method3572z00_1952, (obj_t) (BgL_nodez00_1951), BEOA);
					}}}
					{
						BgL_sfunz00_bglt BgL_auxz00_3402;

						BgL_auxz00_3402 = (BgL_sfunz00_bglt) (BgL_funz00_1117);
						return
							((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3402))->BgL_bodyz00) =
							((obj_t) BgL_arg3764z00_1118), BUNSPEC);
					}
				}
			}
		}
	}



/* patch*! */
	obj_t BGl_patchza2z12zb0zzcfa_specializa7eza7(obj_t BgL_nodeza2za2_33)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 475 */
			{
				obj_t BgL_nodeza2za2_1121;

				BgL_nodeza2za2_1121 = BgL_nodeza2za2_33;
			BgL_zc3anonymousza33766ze3z83_1122:
				if (NULLP(BgL_nodeza2za2_1121))
					{	/* Cfa/specialize.scm 477 */
						return CNST_TABLE_REF(((long) 6));
					}
				else
					{	/* Cfa/specialize.scm 477 */
						{	/* Cfa/specialize.scm 480 */
							obj_t BgL_arg3768z00_1124;

							{	/* Cfa/specialize.scm 480 */
								obj_t BgL_arg3769z00_1125;

								BgL_arg3769z00_1125 = CAR(BgL_nodeza2za2_1121);
								{	/* Cfa/specialize.scm 480 */
									BgL_nodez00_bglt BgL_nodez00_1981;

									BgL_nodez00_1981 = (BgL_nodez00_bglt) (BgL_arg3769z00_1125);
									{	/* Cfa/specialize.scm 480 */
										obj_t BgL_method3572z00_1982;

										{	/* Cfa/specialize.scm 480 */
											BgL_objectz00_bglt BgL_objz00_1983;

											BgL_objz00_1983 = (BgL_objectz00_bglt) (BgL_nodez00_1981);
											{	/* Cfa/specialize.scm 480 */
												long BgL_objzd2classzd2numz00_1984;

												BgL_objzd2classzd2numz00_1984 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1983);
												{	/* Cfa/specialize.scm 480 */
													obj_t BgL_arg2643z00_1985;

													BgL_arg2643z00_1985 =
														PROCEDURE_REF
														(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
														(int) (((long) 1)));
													{	/* Cfa/specialize.scm 480 */
														obj_t BgL_arrayz00_1987;

														int BgL_offsetz00_1988;

														BgL_arrayz00_1987 = BgL_arg2643z00_1985;
														BgL_offsetz00_1988 =
															(int) (BgL_objzd2classzd2numz00_1984);
														{	/* Cfa/specialize.scm 480 */
															long BgL_offsetz00_1989;

															BgL_offsetz00_1989 =
																((long) (BgL_offsetz00_1988) - OBJECT_TYPE);
															{	/* Cfa/specialize.scm 480 */
																long BgL_modz00_1990;

																{	/* Cfa/specialize.scm 480 */
																	int BgL_arg2645z00_1991;

																	BgL_arg2645z00_1991 = (int) (((long) 16));
																	{	/* Cfa/specialize.scm 480 */
																		long BgL_auxz00_3418;

																		BgL_auxz00_3418 =
																			(long) (BgL_arg2645z00_1991);
																		BgL_modz00_1990 =
																			(BgL_offsetz00_1989 / BgL_auxz00_3418);
																}}
																{	/* Cfa/specialize.scm 480 */
																	long BgL_restz00_1992;

																	{	/* Cfa/specialize.scm 480 */
																		int BgL_arg2644z00_1993;

																		BgL_arg2644z00_1993 = (int) (((long) 16));
																		{	/* Cfa/specialize.scm 480 */
																			long BgL_auxz00_3422;

																			BgL_auxz00_3422 =
																				(long) (BgL_arg2644z00_1993);
																			BgL_restz00_1992 =
																				(BgL_offsetz00_1989 % BgL_auxz00_3422);
																	}}
																	{	/* Cfa/specialize.scm 480 */

																		BgL_method3572z00_1982 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1987,
																				(int) (BgL_modz00_1990)),
																			(int) (BgL_restz00_1992));
										}}}}}}}}
										BgL_arg3768z00_1124 =
											PROCEDURE_ENTRY(BgL_method3572z00_1982)
											(BgL_method3572z00_1982, (obj_t) (BgL_nodez00_1981),
											BEOA);
							}}}
							SET_CAR(BgL_nodeza2za2_1121, BgL_arg3768z00_1124);
						}
						{
							obj_t BgL_nodeza2za2_3433;

							BgL_nodeza2za2_3433 = CDR(BgL_nodeza2za2_1121);
							BgL_nodeza2za2_1121 = BgL_nodeza2za2_3433;
							goto BgL_zc3anonymousza33766ze3z83_1122;
						}
					}
			}
		}
	}



/* specialize-app! */
	BgL_appz00_bglt
		BGl_specializa7ezd2appz12z67zzcfa_specializa7eza7(BgL_appz00_bglt
		BgL_nodez00_35)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 500 */
			if (NULLP((((BgL_appz00_bglt) CREF(BgL_nodez00_35))->BgL_argsz00)))
				{	/* Cfa/specialize.scm 507 */
					return BgL_nodez00_35;
				}
			else
				{	/* Cfa/specialize.scm 511 */
					obj_t BgL_typez00_1131;

					{	/* Cfa/specialize.scm 511 */
						obj_t BgL_arg3784z00_1150;

						{	/* Cfa/specialize.scm 511 */
							obj_t BgL_pairz00_2013;

							BgL_pairz00_2013 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_35))->BgL_argsz00);
							BgL_arg3784z00_1150 = CAR(BgL_pairz00_2013);
						}
						BgL_typez00_1131 =
							BGl_normaliza7ezd2getzd2typeza7zzcfa_specializa7eza7
							(BgL_arg3784z00_1150);
					}
					{	/* Cfa/specialize.scm 511 */
						BgL_variablez00_bglt BgL_gloz00_1132;

						{	/* Cfa/specialize.scm 512 */
							BgL_varz00_bglt BgL_obj2244z00_2015;

							BgL_obj2244z00_2015 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_35))->BgL_funz00);
							BgL_gloz00_1132 =
								(((BgL_varz00_bglt) CREF(BgL_obj2244z00_2015))->
								BgL_variablez00);
						}
						{	/* Cfa/specialize.scm 512 */
							obj_t BgL_specz00_1133;

							{	/* Cfa/specialize.scm 513 */
								obj_t BgL_auxz00_3443;

								{	/* Cfa/specialize.scm 513 */
									BgL_specializa7edzd2globalz75_bglt BgL_obj3449z00_2016;

									BgL_obj3449z00_2016 =
										(BgL_specializa7edzd2globalz75_bglt) (BgL_gloz00_1132);
									{
										obj_t BgL_auxz00_3445;

										{	/* Cfa/specialize.scm 513 */
											BgL_objectz00_bglt BgL_auxz00_3446;

											BgL_auxz00_3446 =
												(BgL_objectz00_bglt) (BgL_obj3449z00_2016);
											BgL_auxz00_3445 = BGL_OBJECT_WIDENING(BgL_auxz00_3446);
										}
										BgL_auxz00_3443 =
											(((BgL_specializa7edzd2globalz75_bglt)
												CREF(BgL_auxz00_3445))->BgL_fixz00);
									}
								}
								BgL_specz00_1133 =
									BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_typez00_1131,
									BgL_auxz00_3443);
							}
							{	/* Cfa/specialize.scm 513 */

								if (PAIRP(BgL_specz00_1133))
									{	/* Cfa/specialize.scm 515 */
										obj_t BgL_g3548z00_1135;

										{	/* Cfa/specialize.scm 515 */
											obj_t BgL_pairz00_2019;

											BgL_pairz00_2019 =
												(((BgL_appz00_bglt) CREF(BgL_nodez00_35))->BgL_argsz00);
											BgL_g3548z00_1135 = CDR(BgL_pairz00_2019);
										}
										{
											obj_t BgL_argsz00_1137;

											BgL_argsz00_1137 = BgL_g3548z00_1135;
										BgL_zc3anonymousza33773ze3z83_1138:
											if (NULLP(BgL_argsz00_1137))
												{	/* Cfa/specialize.scm 517 */
													BGl_addzd2specializa7edzd2typez12zb5zzcfa_specializa7eza7
														(BgL_typez00_1131);
													{	/* Cfa/specialize.scm 519 */
														BgL_varz00_bglt BgL_arg3775z00_1140;

														obj_t BgL_arg3776z00_1141;

														BgL_arg3775z00_1140 =
															(((BgL_appz00_bglt) CREF(BgL_nodez00_35))->
															BgL_funz00);
														BgL_arg3776z00_1141 = CDR(BgL_specz00_1133);
														{
															BgL_variablez00_bglt BgL_auxz00_3460;

															BgL_auxz00_3460 =
																(BgL_variablez00_bglt) (BgL_arg3776z00_1141);
															((((BgL_varz00_bglt) CREF(BgL_arg3775z00_1140))->
																	BgL_variablez00) =
																((BgL_variablez00_bglt) BgL_auxz00_3460),
																BUNSPEC);
														}
													}
													{
														BgL_typez00_bglt BgL_auxz00_3465;

														BgL_nodez00_bglt BgL_auxz00_3463;

														BgL_auxz00_3465 =
															(BgL_typez00_bglt) (BgL_typez00_1131);
														BgL_auxz00_3463 =
															(BgL_nodez00_bglt) (BgL_nodez00_35);
														((((BgL_nodez00_bglt) CREF(BgL_auxz00_3463))->
																BgL_typez00) =
															((BgL_typez00_bglt) BgL_auxz00_3465), BUNSPEC);
													}
													return BgL_nodez00_35;
												}
											else
												{	/* Cfa/specialize.scm 517 */
													if (
														(BGl_normaliza7ezd2getzd2typeza7zzcfa_specializa7eza7
															(CAR(BgL_argsz00_1137)) == BgL_typez00_1131))
														{
															obj_t BgL_argsz00_3472;

															BgL_argsz00_3472 = CDR(BgL_argsz00_1137);
															BgL_argsz00_1137 = BgL_argsz00_3472;
															goto BgL_zc3anonymousza33773ze3z83_1138;
														}
													else
														{	/* Cfa/specialize.scm 522 */
															return
																BGl_specializa7ezd2eqzf3z86zzcfa_specializa7eza7
																(BgL_nodez00_35);
														}
												}
										}
									}
								else
									{	/* Cfa/specialize.scm 514 */
										return
											BGl_specializa7ezd2eqzf3z86zzcfa_specializa7eza7
											(BgL_nodez00_35);
									}
							}
						}
					}
				}
		}
	}



/* normalize-get-type */
	obj_t BGl_normaliza7ezd2getzd2typeza7zzcfa_specializa7eza7(obj_t
		BgL_valz00_1153)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 505 */
			{	/* Cfa/specialize.scm 502 */
				BgL_typez00_bglt BgL_tyz00_1155;

				BgL_tyz00_1155 =
					BGl_getzd2typezd2zztype_typeofz00(
					(BgL_nodez00_bglt) (BgL_valz00_1153));
				if (((obj_t) (BgL_tyz00_1155) == BGl_za2intza2z00zztype_cachez00))
					{	/* Cfa/specialize.scm 503 */
						return BGl_za2longza2z00zztype_cachez00;
					}
				else
					{	/* Cfa/specialize.scm 503 */
						return (obj_t) (BgL_tyz00_1155);
					}
			}
		}
	}



/* specialize-eq? */
	BgL_appz00_bglt
		BGl_specializa7ezd2eqzf3z86zzcfa_specializa7eza7(BgL_appz00_bglt
		BgL_nodez00_36)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 536 */
			{
				BgL_appz00_bglt BgL_nodez00_1187;

				obj_t BgL_typez00_1188;

				{	/* Cfa/specialize.scm 543 */
					bool_t BgL_testz00_3482;

					{	/* Cfa/specialize.scm 543 */
						bool_t BgL_testz00_3483;

						{	/* Cfa/specialize.scm 543 */
							BgL_variablez00_bglt BgL_arg3813z00_1185;

							{	/* Cfa/specialize.scm 543 */
								BgL_varz00_bglt BgL_obj2244z00_2030;

								BgL_obj2244z00_2030 =
									(((BgL_appz00_bglt) CREF(BgL_nodez00_36))->BgL_funz00);
								BgL_arg3813z00_1185 =
									(((BgL_varz00_bglt) CREF(BgL_obj2244z00_2030))->
									BgL_variablez00);
							}
							BgL_testz00_3483 =
								(
								(obj_t) (BgL_arg3813z00_1185) ==
								BGl_za2czd2eqzf3za2z21zzcfa_specializa7eza7);
						}
						if (BgL_testz00_3483)
							{	/* Cfa/specialize.scm 544 */
								obj_t BgL_arg3812z00_1184;

								BgL_arg3812z00_1184 =
									BGl_thezd2backendzd2zzbackend_backendz00();
								{
									BgL_backendz00_bglt BgL_auxz00_3489;

									BgL_auxz00_3489 = (BgL_backendz00_bglt) (BgL_arg3812z00_1184);
									BgL_testz00_3482 =
										(((BgL_backendz00_bglt) CREF(BgL_auxz00_3489))->
										BgL_typedzd2eqzd2);
								}
							}
						else
							{	/* Cfa/specialize.scm 543 */
								BgL_testz00_3482 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_3482)
						{	/* Cfa/specialize.scm 546 */
							BgL_typez00_bglt BgL_t1z00_1161;

							BgL_typez00_bglt BgL_t2z00_1162;

							{	/* Cfa/specialize.scm 546 */
								obj_t BgL_arg3807z00_1179;

								{	/* Cfa/specialize.scm 546 */
									obj_t BgL_pairz00_2033;

									BgL_pairz00_2033 =
										(((BgL_appz00_bglt) CREF(BgL_nodez00_36))->BgL_argsz00);
									BgL_arg3807z00_1179 = CAR(BgL_pairz00_2033);
								}
								BgL_t1z00_1161 =
									BGl_getzd2typezd2zztype_typeofz00(
									(BgL_nodez00_bglt) (BgL_arg3807z00_1179));
							}
							{	/* Cfa/specialize.scm 547 */
								obj_t BgL_arg3809z00_1181;

								{	/* Cfa/specialize.scm 547 */
									obj_t BgL_pairz00_2035;

									BgL_pairz00_2035 =
										(((BgL_appz00_bglt) CREF(BgL_nodez00_36))->BgL_argsz00);
									BgL_arg3809z00_1181 = CAR(CDR(BgL_pairz00_2035));
								}
								BgL_t2z00_1162 =
									BGl_getzd2typezd2zztype_typeofz00(
									(BgL_nodez00_bglt) (BgL_arg3809z00_1181));
							}
							{	/* Cfa/specialize.scm 549 */
								bool_t BgL_testz00_3501;

								if (
									((obj_t) (BgL_t1z00_1161) == BGl_za2objza2z00zztype_cachez00))
									{	/* Cfa/specialize.scm 549 */
										BgL_testz00_3501 =
											(
											(obj_t) (BgL_t2z00_1162) ==
											BGl_za2objza2z00zztype_cachez00);
									}
								else
									{	/* Cfa/specialize.scm 549 */
										BgL_testz00_3501 = ((bool_t) 0);
									}
								if (BgL_testz00_3501)
									{	/* Cfa/specialize.scm 549 */
										BUNSPEC;
									}
								else
									{	/* Cfa/specialize.scm 549 */
										if (
											((obj_t) (BgL_t1z00_1161) ==
												BGl_za2bintza2z00zztype_cachez00))
											{	/* Cfa/specialize.scm 551 */
												if (
													((obj_t) (BgL_t2z00_1162) ==
														BGl_za2bintza2z00zztype_cachez00))
													{	/* Cfa/specialize.scm 552 */
														BgL_nodez00_1187 = BgL_nodez00_36;
														BgL_typez00_1188 = BGl_za2bintza2z00zztype_cachez00;
													BgL_zc3anonymousza33815ze3z83_1189:
														{	/* Cfa/specialize.scm 539 */
															bool_t BgL_testz00_3513;

															{	/* Cfa/specialize.scm 539 */
																obj_t BgL_obj1839z00_2039;

																BgL_obj1839z00_2039 =
																	BGl_za2boxedzd2eqzf3za2z21zzcfa_specializa7eza7;
																BgL_testz00_3513 =
																	BGl_iszd2azf3z21zz__objectz00
																	(BgL_obj1839z00_2039,
																	BGl_globalz00zzast_varz00);
															}
															if (BgL_testz00_3513)
																{	/* Cfa/specialize.scm 539 */
																	{	/* Cfa/specialize.scm 541 */
																		BgL_varz00_bglt BgL_arg3817z00_1191;

																		BgL_arg3817z00_1191 =
																			(((BgL_appz00_bglt)
																				CREF(BgL_nodez00_36))->BgL_funz00);
																		{
																			BgL_variablez00_bglt BgL_auxz00_3516;

																			BgL_auxz00_3516 =
																				(BgL_variablez00_bglt) (
																				(BgL_globalz00_bglt)
																				(BGl_za2boxedzd2eqzf3za2z21zzcfa_specializa7eza7));
																			((((BgL_varz00_bglt)
																						CREF(BgL_arg3817z00_1191))->
																					BgL_variablez00) =
																				((BgL_variablez00_bglt)
																					BgL_auxz00_3516), BUNSPEC);
																		}
																	}
																	BGl_addzd2specializa7edzd2eqzd2typez12z67zzcfa_specializa7eza7
																		(BgL_typez00_1188);
																}
															else
																{	/* Cfa/specialize.scm 539 */
																	BFALSE;
																}
														}
													}
												else
													{	/* Cfa/specialize.scm 552 */
														BFALSE;
													}
											}
										else
											{	/* Cfa/specialize.scm 551 */
												if (
													((obj_t) (BgL_t2z00_1162) ==
														BGl_za2bintza2z00zztype_cachez00))
													{	/* Cfa/specialize.scm 555 */
														BUNSPEC;
													}
												else
													{	/* Cfa/specialize.scm 555 */
														if (
															((obj_t) (BgL_t1z00_1161) ==
																BGl_za2brealza2z00zztype_cachez00))
															{	/* Cfa/specialize.scm 557 */
																if (
																	((obj_t) (BgL_t2z00_1162) ==
																		BGl_za2brealza2z00zztype_cachez00))
																	{
																		obj_t BgL_typez00_3531;

																		BgL_appz00_bglt BgL_nodez00_3530;

																		BgL_nodez00_3530 = BgL_nodez00_36;
																		BgL_typez00_3531 =
																			BGl_za2brealza2z00zztype_cachez00;
																		BgL_typez00_1188 = BgL_typez00_3531;
																		BgL_nodez00_1187 = BgL_nodez00_3530;
																		goto BgL_zc3anonymousza33815ze3z83_1189;
																	}
																else
																	{	/* Cfa/specialize.scm 558 */
																		BFALSE;
																	}
															}
														else
															{	/* Cfa/specialize.scm 557 */
																if (
																	((obj_t) (BgL_t2z00_1162) ==
																		BGl_za2brealza2z00zztype_cachez00))
																	{	/* Cfa/specialize.scm 561 */
																		BUNSPEC;
																	}
																else
																	{	/* Cfa/specialize.scm 561 */
																		if (
																			((obj_t) (BgL_t2z00_1162) ==
																				BGl_za2bintza2z00zztype_cachez00))
																			{	/* Cfa/specialize.scm 563 */
																				BUNSPEC;
																			}
																		else
																			{	/* Cfa/specialize.scm 563 */
																				if (
																					((obj_t) (BgL_t1z00_1161) ==
																						BGl_za2bcharza2z00zztype_cachez00))
																					{	/* Cfa/specialize.scm 565 */
																						if (
																							((obj_t) (BgL_t2z00_1162) ==
																								BGl_za2bcharza2z00zztype_cachez00))
																							{
																								obj_t BgL_typez00_3545;

																								BgL_appz00_bglt
																									BgL_nodez00_3544;
																								BgL_nodez00_3544 =
																									BgL_nodez00_36;
																								BgL_typez00_3545 =
																									BGl_za2bcharza2z00zztype_cachez00;
																								BgL_typez00_1188 =
																									BgL_typez00_3545;
																								BgL_nodez00_1187 =
																									BgL_nodez00_3544;
																								goto
																									BgL_zc3anonymousza33815ze3z83_1189;
																							}
																						else
																							{	/* Cfa/specialize.scm 566 */
																								BFALSE;
																							}
																					}
																				else
																					{	/* Cfa/specialize.scm 565 */
																						if (
																							((obj_t) (BgL_t2z00_1162) ==
																								BGl_za2bcharza2z00zztype_cachez00))
																							{	/* Cfa/specialize.scm 569 */
																								BUNSPEC;
																							}
																						else
																							{	/* Cfa/specialize.scm 571 */
																								bool_t BgL_testz00_3549;

																								if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_t1z00_1161))
																									{	/* Cfa/specialize.scm 571 */
																										BgL_testz00_3549 =
																											BGl_bigloozd2typezf3z21zztype_typez00
																											(BgL_t2z00_1162);
																									}
																								else
																									{	/* Cfa/specialize.scm 571 */
																										BgL_testz00_3549 =
																											((bool_t) 0);
																									}
																								if (BgL_testz00_3549)
																									{	/* Cfa/specialize.scm 573 */
																										BgL_typez00_bglt
																											BgL_arg3803z00_1175;
																										if (((obj_t)
																												(BgL_t1z00_1161) ==
																												BGl_za2objza2z00zztype_cachez00))
																											{	/* Cfa/specialize.scm 573 */
																												BgL_arg3803z00_1175 =
																													BgL_t2z00_1162;
																											}
																										else
																											{	/* Cfa/specialize.scm 573 */
																												BgL_arg3803z00_1175 =
																													BgL_t1z00_1161;
																											}
																										{
																											obj_t BgL_typez00_3557;

																											BgL_appz00_bglt
																												BgL_nodez00_3556;
																											BgL_nodez00_3556 =
																												BgL_nodez00_36;
																											BgL_typez00_3557 =
																												(obj_t)
																												(BgL_arg3803z00_1175);
																											BgL_typez00_1188 =
																												BgL_typez00_3557;
																											BgL_nodez00_1187 =
																												BgL_nodez00_3556;
																											goto
																												BgL_zc3anonymousza33815ze3z83_1189;
																										}
																									}
																								else
																									{	/* Cfa/specialize.scm 571 */
																										BUNSPEC;
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
							return BgL_nodez00_36;
						}
					else
						{	/* Cfa/specialize.scm 543 */
							return BgL_nodez00_36;
						}
				}
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_specializa7eza7()
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 19 */
			{	/* Cfa/specialize.scm 34 */
				obj_t BgL_arg3818z00_1193;

				obj_t BgL_arg3819z00_1194;

				obj_t BgL_arg3822z00_1197;

				BgL_arg3818z00_1193 = CNST_TABLE_REF(((long) 7));
				BgL_arg3819z00_1194 = BGl_globalz00zzast_varz00;
				{	/* Cfa/specialize.scm 34 */
					obj_t BgL_v3570z00_1198;

					BgL_v3570z00_1198 = create_vector((int) (((long) 0)));
					BgL_arg3822z00_1197 = BgL_v3570z00_1198;
				}
				BGl_specializa7edzd2globalz75zzcfa_specializa7eza7 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3818z00_1193,
					BgL_arg3819z00_1194, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2specializa7edzd2globalzd2envz27zzcfa_specializa7eza7,
					BGl_specializa7edzd2globalzd2nilzd2envz75zzcfa_specializa7eza7,
					BGl_specializa7edzd2globalzf3zd2envz54zzcfa_specializa7eza7,
					((long) 420446428), BFALSE, BFALSE, BgL_arg3822z00_1197);
			}
			return (BGl_z52thezd2specializa7edzd2globalzd2nilz27zzcfa_specializa7eza7
				= BUNSPEC, BUNSPEC);
		}
	}



/* _specialized-global? */
	obj_t BGl__specializa7edzd2globalzf3z86zzcfa_specializa7eza7(obj_t
		BgL_envz00_2962, obj_t BgL_obj3448z00_2963)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 34 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3448z00_2963,
					BGl_specializa7edzd2globalz75zzcfa_specializa7eza7));
		}
	}



/* _%allocate-specialized-global */
	obj_t BGl__z52allocatezd2specializa7edzd2globalzf5zzcfa_specializa7eza7(obj_t
		BgL_envz00_2960)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 34 */
			{	/* Cfa/specialize.scm 34 */
				BgL_globalz00_bglt BgL_auxz00_3565;

				{	/* Cfa/specialize.scm 34 */
					BgL_globalz00_bglt BgL_res4102z00_3054;

					{	/* Cfa/specialize.scm 34 */
						BgL_globalz00_bglt BgL_new3441z00_3052;

						BgL_new3441z00_3052 =
							((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_globalz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3441z00_3052),
							BGl_classzd2numzd2zz__objectz00
							(BGl_specializa7edzd2globalz75zzcfa_specializa7eza7));
						{	/* Cfa/specialize.scm 34 */
							BgL_objectz00_bglt BgL_auxz00_3570;

							BgL_auxz00_3570 = (BgL_objectz00_bglt) (BgL_new3441z00_3052);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3570, BFALSE);
						}
						BgL_res4102z00_3054 = BgL_new3441z00_3052;
					}
					BgL_auxz00_3565 = BgL_res4102z00_3054;
				}
				return (obj_t) (BgL_auxz00_3565);
			}
		}
	}



/* specialized-global-nil */
	BgL_specializa7edzd2globalz75_bglt
		BGl_specializa7edzd2globalzd2nilza7zzcfa_specializa7eza7()
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 34 */
			if (
				(BGl_z52thezd2specializa7edzd2globalzd2nilz27zzcfa_specializa7eza7 ==
					BUNSPEC))
				{	/* Cfa/specialize.scm 34 */
					{	/* Cfa/specialize.scm 34 */
						BgL_globalz00_bglt BgL_res3991z00_2057;

						{	/* Cfa/specialize.scm 34 */
							BgL_globalz00_bglt BgL_new1838z00_2053;

							BgL_new1838z00_2053 =
								((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_globalz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1838z00_2053),
								BGl_classzd2numzd2zz__objectz00(BGl_globalz00zzast_varz00));
							{	/* Cfa/specialize.scm 34 */
								BgL_objectz00_bglt BgL_auxz00_3580;

								BgL_auxz00_3580 = (BgL_objectz00_bglt) (BgL_new1838z00_2053);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3580, BFALSE);
							}
							BgL_res3991z00_2057 = BgL_new1838z00_2053;
						}
						BGl_z52thezd2specializa7edzd2globalzd2nilz27zzcfa_specializa7eza7 =
							(obj_t) (BgL_res3991z00_2057);
					}
					{	/* Cfa/specialize.scm 34 */
						obj_t BgL_arg3827z00_1208;

						BgL_typez00_bglt BgL_arg3828z00_1209;

						BgL_valuez00_bglt BgL_arg3829z00_1210;

						obj_t BgL_arg3831z00_1212;

						BgL_arg3827z00_1208 = CNST_TABLE_REF(((long) 8));
						BgL_arg3828z00_1209 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg3829z00_1210 = BGl_valuezd2nilzd2zzast_varz00();
						BgL_arg3831z00_1212 = CNST_TABLE_REF(((long) 8));
						{	/* Cfa/specialize.scm 34 */
							BgL_globalz00_bglt BgL_res3992z00_2091;

							{	/* Cfa/specialize.scm 34 */
								BgL_globalz00_bglt BgL_new1820z00_2058;

								BgL_new1820z00_2058 =
									(BgL_globalz00_bglt)
									(BGl_z52thezd2specializa7edzd2globalzd2nilz27zzcfa_specializa7eza7);
								{	/* Cfa/specialize.scm 34 */
									obj_t BgL_id1804z00_2075;

									obj_t BgL_name1805z00_2076;

									BgL_typez00_bglt BgL_type1806z00_2077;

									BgL_valuez00_bglt BgL_value1807z00_2078;

									obj_t BgL_access1808z00_2079;

									obj_t BgL_fastzd2alpha1809zd2_2080;

									obj_t BgL_removable1810z00_2081;

									long BgL_occurrence1811z00_2082;

									obj_t BgL_module1812z00_2083;

									obj_t BgL_import1813z00_2084;

									bool_t BgL_evaluablezf31814zf3_2085;

									obj_t BgL_library1815z00_2086;

									bool_t BgL_userzf31816zf3_2087;

									obj_t BgL_pragma1817z00_2088;

									obj_t BgL_src1818z00_2089;

									obj_t BgL_jvmzd2typezd2name1819z00_2090;

									BgL_id1804z00_2075 = BgL_arg3827z00_1208;
									BgL_name1805z00_2076 = BUNSPEC;
									BgL_type1806z00_2077 = BgL_arg3828z00_1209;
									BgL_value1807z00_2078 = BgL_arg3829z00_1210;
									BgL_access1808z00_2079 = BUNSPEC;
									BgL_fastzd2alpha1809zd2_2080 = BUNSPEC;
									BgL_removable1810z00_2081 = BUNSPEC;
									BgL_occurrence1811z00_2082 = ((long) 0);
									BgL_module1812z00_2083 = BgL_arg3831z00_1212;
									BgL_import1813z00_2084 = BUNSPEC;
									BgL_evaluablezf31814zf3_2085 = ((bool_t) 0);
									BgL_library1815z00_2086 = BUNSPEC;
									BgL_userzf31816zf3_2087 = ((bool_t) 0);
									BgL_pragma1817z00_2088 = BUNSPEC;
									BgL_src1818z00_2089 = BUNSPEC;
									BgL_jvmzd2typezd2name1819z00_2090 =
										BGl_string4069z00zzcfa_specializa7eza7;
									((((BgL_globalz00_bglt) CREF(BgL_new1820z00_2058))->
											BgL_idz00) = ((obj_t) BgL_id1804z00_2075), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1820z00_2058))->
											BgL_namez00) = ((obj_t) BgL_name1805z00_2076), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1820z00_2058))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type1806z00_2077), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1820z00_2058))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) BgL_value1807z00_2078), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1820z00_2058))->
											BgL_accessz00) =
										((obj_t) BgL_access1808z00_2079), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1820z00_2058))->
											BgL_fastzd2alphazd2) =
										((obj_t) BgL_fastzd2alpha1809zd2_2080), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1820z00_2058))->
											BgL_removablez00) =
										((obj_t) BgL_removable1810z00_2081), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1820z00_2058))->
											BgL_occurrencez00) =
										((long) BgL_occurrence1811z00_2082), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1820z00_2058))->
											BgL_modulez00) =
										((obj_t) BgL_module1812z00_2083), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1820z00_2058))->
											BgL_importz00) =
										((obj_t) BgL_import1813z00_2084), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1820z00_2058))->
											BgL_evaluablezf3zf3) =
										((bool_t) BgL_evaluablezf31814zf3_2085), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1820z00_2058))->
											BgL_libraryz00) =
										((obj_t) BgL_library1815z00_2086), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1820z00_2058))->
											BgL_userzf3zf3) =
										((bool_t) BgL_userzf31816zf3_2087), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1820z00_2058))->
											BgL_pragmaz00) =
										((obj_t) BgL_pragma1817z00_2088), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1820z00_2058))->
											BgL_srcz00) = ((obj_t) BgL_src1818z00_2089), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1820z00_2058))->
											BgL_jvmzd2typezd2namez00) =
										((obj_t) BgL_jvmzd2typezd2name1819z00_2090), BUNSPEC);
									BgL_res3992z00_2091 = BgL_new1820z00_2058;
							}} BgL_res3992z00_2091;
					}}
					{	/* Cfa/specialize.scm 34 */
						long BgL_arg3833z00_1214;

						BgL_arg3833z00_1214 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_specializa7edzd2globalz75zzcfa_specializa7eza7);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2specializa7edzd2globalzd2nilz27zzcfa_specializa7eza7),
							BgL_arg3833z00_1214);
					}
					{	/* Cfa/specialize.scm 34 */
						BgL_specializa7edzd2globalz75_bglt BgL_arg3834z00_1215;

						{	/* Cfa/specialize.scm 34 */
							BgL_specializa7edzd2globalz75_bglt BgL_res3994z00_2100;

							{	/* Cfa/specialize.scm 34 */
								BgL_specializa7edzd2globalz75_bglt BgL_new3416z00_2095;

								BgL_new3416z00_2095 =
									((BgL_specializa7edzd2globalz75_bglt)
									BREF(GC_MALLOC(sizeof(struct
												BgL_specializa7edzd2globalz75_bgl))));
								{	/* Cfa/specialize.scm 34 */
									BgL_specializa7edzd2globalz75_bglt BgL_res3993z00_2099;

									{	/* Cfa/specialize.scm 34 */
										BgL_specializa7edzd2globalz75_bglt BgL_new3438z00_2096;

										BgL_new3438z00_2096 = BgL_new3416z00_2095;
										{	/* Cfa/specialize.scm 34 */
											obj_t BgL_fix3437z00_2098;

											BgL_fix3437z00_2098 = BUNSPEC;
											((((BgL_specializa7edzd2globalz75_bglt)
														CREF(BgL_new3438z00_2096))->BgL_fixz00) =
												((obj_t) BgL_fix3437z00_2098), BUNSPEC);
											BgL_res3993z00_2099 = BgL_new3438z00_2096;
									}} BgL_res3993z00_2099;
								}
								BgL_res3994z00_2100 = BgL_new3416z00_2095;
							}
							BgL_arg3834z00_1215 = BgL_res3994z00_2100;
						}
						{	/* Cfa/specialize.scm 34 */
							obj_t BgL_auxz00_3612;

							BgL_objectz00_bglt BgL_auxz00_3610;

							BgL_auxz00_3612 = (obj_t) (BgL_arg3834z00_1215);
							BgL_auxz00_3610 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2specializa7edzd2globalzd2nilz27zzcfa_specializa7eza7);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3610, BgL_auxz00_3612);
				}}}
			else
				{	/* Cfa/specialize.scm 34 */
					BFALSE;
				}
			return
				(BgL_specializa7edzd2globalz75_bglt)
				(BGl_z52thezd2specializa7edzd2globalzd2nilz27zzcfa_specializa7eza7);
		}
	}



/* _specialized-global-nil */
	obj_t BGl__specializa7edzd2globalzd2nilza7zzcfa_specializa7eza7(obj_t
		BgL_envz00_2961)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 34 */
			return
				(obj_t) (BGl_specializa7edzd2globalzd2nilza7zzcfa_specializa7eza7());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_specializa7eza7()
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 19 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_patchz12zd2default3571zd2envz12zzcfa_specializa7eza7,
				BGl_nodez00zzast_nodez00, BGl_string4070z00zzcfa_specializa7eza7);
		}
	}



/* patch! */
	obj_t BGl_patchz12z12zzcfa_specializa7eza7(BgL_nodez00_bglt BgL_nodez00_11)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 300 */
			{	/* Cfa/specialize.scm 300 */
				obj_t BgL_method3572z00_2121;

				{	/* Cfa/specialize.scm 300 */
					BgL_objectz00_bglt BgL_objz00_2122;

					BgL_objz00_2122 = (BgL_objectz00_bglt) (BgL_nodez00_11);
					{	/* Cfa/specialize.scm 300 */
						long BgL_objzd2classzd2numz00_2123;

						BgL_objzd2classzd2numz00_2123 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2122);
						{	/* Cfa/specialize.scm 300 */
							obj_t BgL_arg2643z00_2124;

							BgL_arg2643z00_2124 =
								PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
								(int) (((long) 1)));
							{	/* Cfa/specialize.scm 300 */
								obj_t BgL_arrayz00_2126;

								int BgL_offsetz00_2127;

								BgL_arrayz00_2126 = BgL_arg2643z00_2124;
								BgL_offsetz00_2127 = (int) (BgL_objzd2classzd2numz00_2123);
								{	/* Cfa/specialize.scm 300 */
									long BgL_offsetz00_2128;

									BgL_offsetz00_2128 =
										((long) (BgL_offsetz00_2127) - OBJECT_TYPE);
									{	/* Cfa/specialize.scm 300 */
										long BgL_modz00_2129;

										{	/* Cfa/specialize.scm 300 */
											int BgL_arg2645z00_2130;

											BgL_arg2645z00_2130 = (int) (((long) 16));
											{	/* Cfa/specialize.scm 300 */
												long BgL_auxz00_3627;

												BgL_auxz00_3627 = (long) (BgL_arg2645z00_2130);
												BgL_modz00_2129 =
													(BgL_offsetz00_2128 / BgL_auxz00_3627);
										}}
										{	/* Cfa/specialize.scm 300 */
											long BgL_restz00_2131;

											{	/* Cfa/specialize.scm 300 */
												int BgL_arg2644z00_2132;

												BgL_arg2644z00_2132 = (int) (((long) 16));
												{	/* Cfa/specialize.scm 300 */
													long BgL_auxz00_3631;

													BgL_auxz00_3631 = (long) (BgL_arg2644z00_2132);
													BgL_restz00_2131 =
														(BgL_offsetz00_2128 % BgL_auxz00_3631);
											}}
											{	/* Cfa/specialize.scm 300 */

												BgL_method3572z00_2121 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2126,
														(int) (BgL_modz00_2129)), (int) (BgL_restz00_2131));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3572z00_2121) (BgL_method3572z00_2121,
					(obj_t) (BgL_nodez00_11), BEOA);
			}
		}
	}



/* _patch! */
	obj_t BGl__patchz12z12zzcfa_specializa7eza7(obj_t BgL_envz00_2958,
		obj_t BgL_nodez00_2959)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 300 */
			return
				BGl_patchz12z12zzcfa_specializa7eza7(
				(BgL_nodez00_bglt) (BgL_nodez00_2959));
		}
	}



/* patch!-default3571 */
	obj_t BGl_patchz12zd2default3571zc0zzcfa_specializa7eza7(BgL_nodez00_bglt
		BgL_nodez00_12)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 19 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 9)),
				BGl_string4071z00zzcfa_specializa7eza7, (obj_t) (BgL_nodez00_12));
		}
	}



/* _patch!-default3571 */
	obj_t BGl__patchz12zd2default3571zc0zzcfa_specializa7eza7(obj_t
		BgL_envz00_2964, obj_t BgL_nodez00_2965)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 19 */
			return
				BGl_patchz12zd2default3571zc0zzcfa_specializa7eza7(
				(BgL_nodez00_bglt) (BgL_nodez00_2965));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_specializa7eza7()
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 19 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7, BGl_atomz00zzast_nodez00,
				BGl_proc4072z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7, BGl_kwotez00zzast_nodez00,
				BGl_proc4073z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7, BGl_varz00zzast_nodez00,
				BGl_proc4074z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_closurez00zzast_nodez00, BGl_proc4075z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_sequencez00zzast_nodez00, BGl_proc4076z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc4077z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_funcallz00zzast_nodez00, BGl_proc4078z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7, BGl_externz00zzast_nodez00,
				BGl_proc4079z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7, BGl_castz00zzast_nodez00,
				BGl_proc4080z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7, BGl_setqz00zzast_nodez00,
				BGl_proc4081z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_conditionalz00zzast_nodez00, BGl_proc4082z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7, BGl_failz00zzast_nodez00,
				BGl_proc4083z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7, BGl_selectz00zzast_nodez00,
				BGl_proc4084z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc4085z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc4086z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc4087z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc4088z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc4089z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc4090z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc4091z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_patchz12zd2envzc0zzcfa_specializa7eza7, BGl_appz00zzast_nodez00,
				BGl_proc4092z00zzcfa_specializa7eza7,
				BGl_string4070z00zzcfa_specializa7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_specializa7edzd2globalz75zzcfa_specializa7eza7,
				BGl_proc4093z00zzcfa_specializa7eza7,
				BGl_string4094z00zzcfa_specializa7eza7);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_specializa7edzd2globalz75zzcfa_specializa7eza7,
				BGl_proc4095z00zzcfa_specializa7eza7,
				BGl_string4096z00zzcfa_specializa7eza7);
		}
	}



/* struct+object->objec3621 */
	obj_t BGl_structzb2objectzd2ze3objec3621z83zzcfa_specializa7eza7(obj_t
		BgL_envz00_2994, obj_t BgL_oz00_2995, obj_t BgL_sz00_2996)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 34 */
			{
				BgL_specializa7edzd2globalz75_bglt BgL_oz00_1811;

				obj_t BgL_sz00_1812;

				{	/* Cfa/specialize.scm 34 */
					BgL_specializa7edzd2globalz75_bglt BgL_auxz00_3671;

					BgL_oz00_1811 = (BgL_specializa7edzd2globalz75_bglt) (BgL_oz00_2995);
					BgL_sz00_1812 = BgL_sz00_2996;
					{

						{	/* Cfa/specialize.scm 34 */
							obj_t BgL_old3445z00_1815;

							obj_t BgL_aux3446z00_1816;

							{	/* Cfa/specialize.scm 34 */
								obj_t BgL_nextzd2method3620zd2_1821;

								BgL_nextzd2method3620zd2_1821 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1811),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_specializa7edzd2globalz75zzcfa_specializa7eza7);
								if (PROCEDUREP(BgL_nextzd2method3620zd2_1821))
									{	/* Cfa/specialize.scm 34 */
										BgL_old3445z00_1815 =
											PROCEDURE_ENTRY(BgL_nextzd2method3620zd2_1821)
											(BgL_nextzd2method3620zd2_1821, (obj_t) (BgL_oz00_1811),
											BgL_sz00_1812, BEOA);
									}
								else
									{	/* Cfa/specialize.scm 34 */
										BgL_old3445z00_1815 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1811), BgL_sz00_1812));
									}
							}
							BgL_aux3446z00_1816 =
								STRUCT_REF(BgL_sz00_1812, (int) (((long) 0)));
							{	/* Cfa/specialize.scm 34 */
								BgL_specializa7edzd2globalz75_bglt BgL_new3447z00_1817;

								BgL_new3447z00_1817 =
									((BgL_specializa7edzd2globalz75_bglt) (BgL_old3445z00_1815));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3447z00_1817),
									BGl_classzd2numzd2zz__objectz00
									(BGl_specializa7edzd2globalz75zzcfa_specializa7eza7));
								{	/* Cfa/specialize.scm 34 */
									BgL_specializa7edzd2globalz75_bglt BgL_arg3981z00_1819;

									{	/* Cfa/specialize.scm 34 */
										obj_t BgL_arg3982z00_1820;

										BgL_arg3982z00_1820 =
											STRUCT_REF(BgL_aux3446z00_1816, (int) (((long) 0)));
										{	/* Cfa/specialize.scm 34 */
											BgL_specializa7edzd2globalz75_bglt BgL_res4051z00_2950;

											{	/* Cfa/specialize.scm 34 */
												BgL_specializa7edzd2globalz75_bglt BgL_new3416z00_2945;

												BgL_new3416z00_2945 =
													((BgL_specializa7edzd2globalz75_bglt)
													BREF(GC_MALLOC(sizeof(struct
																BgL_specializa7edzd2globalz75_bgl))));
												{	/* Cfa/specialize.scm 34 */
													BgL_specializa7edzd2globalz75_bglt
														BgL_res4050z00_2949;
													{	/* Cfa/specialize.scm 34 */
														BgL_specializa7edzd2globalz75_bglt
															BgL_new3438z00_2946;
														BgL_new3438z00_2946 = BgL_new3416z00_2945;
														{	/* Cfa/specialize.scm 34 */
															obj_t BgL_fix3437z00_2948;

															BgL_fix3437z00_2948 = BgL_arg3982z00_1820;
															((((BgL_specializa7edzd2globalz75_bglt)
																		CREF(BgL_new3438z00_2946))->BgL_fixz00) =
																((obj_t) BgL_fix3437z00_2948), BUNSPEC);
															BgL_res4050z00_2949 = BgL_new3438z00_2946;
													}} BgL_res4050z00_2949;
												}
												BgL_res4051z00_2950 = BgL_new3416z00_2945;
											}
											BgL_arg3981z00_1819 = BgL_res4051z00_2950;
									}}
									{	/* Cfa/specialize.scm 34 */
										obj_t BgL_auxz00_3694;

										BgL_objectz00_bglt BgL_auxz00_3692;

										BgL_auxz00_3694 = (obj_t) (BgL_arg3981z00_1819);
										BgL_auxz00_3692 =
											(BgL_objectz00_bglt) (BgL_new3447z00_1817);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3692, BgL_auxz00_3694);
								}}
								BgL_auxz00_3671 = BgL_new3447z00_1817;
					}}}
					return (obj_t) (BgL_auxz00_3671);
				}
			}
		}
	}



/* object->struct-speci3618 */
	obj_t BGl_objectzd2ze3structzd2speci3618ze3zzcfa_specializa7eza7(obj_t
		BgL_envz00_2997, obj_t BgL_obj3442z00_2998)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 34 */
			{
				BgL_specializa7edzd2globalz75_bglt BgL_obj3442z00_1801;

				BgL_obj3442z00_1801 =
					(BgL_specializa7edzd2globalz75_bglt) (BgL_obj3442z00_2998);
				{

					{	/* Cfa/specialize.scm 34 */
						obj_t BgL_res3443z00_1804;

						{	/* Cfa/specialize.scm 34 */
							obj_t BgL_nextzd2method3617zd2_1809;

							BgL_nextzd2method3617zd2_1809 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3442z00_1801),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_specializa7edzd2globalz75zzcfa_specializa7eza7);
							if (PROCEDUREP(BgL_nextzd2method3617zd2_1809))
								{	/* Cfa/specialize.scm 34 */
									BgL_res3443z00_1804 =
										PROCEDURE_ENTRY(BgL_nextzd2method3617zd2_1809)
										(BgL_nextzd2method3617zd2_1809,
										(obj_t) (BgL_obj3442z00_1801), BEOA);
								}
							else
								{	/* Cfa/specialize.scm 34 */
									BgL_res3443z00_1804 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3442z00_1801));
								}
						}
						{	/* Cfa/specialize.scm 34 */
							obj_t BgL_aux3444z00_1805;

							{	/* Cfa/specialize.scm 34 */
								obj_t BgL_keyz00_2921;

								BgL_keyz00_2921 = CNST_TABLE_REF(((long) 7));
								BgL_aux3444z00_1805 =
									make_struct(BgL_keyz00_2921, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cfa/specialize.scm 34 */
								obj_t BgL_arg3977z00_1807;

								{
									obj_t BgL_auxz00_3711;

									{	/* Cfa/specialize.scm 34 */
										BgL_objectz00_bglt BgL_auxz00_3712;

										BgL_auxz00_3712 =
											(BgL_objectz00_bglt) (BgL_obj3442z00_1801);
										BgL_auxz00_3711 = BGL_OBJECT_WIDENING(BgL_auxz00_3712);
									}
									BgL_arg3977z00_1807 =
										(((BgL_specializa7edzd2globalz75_bglt)
											CREF(BgL_auxz00_3711))->BgL_fixz00);
								}
								{	/* Cfa/specialize.scm 34 */
									int BgL_auxz00_3716;

									BgL_auxz00_3716 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3444z00_1805, BgL_auxz00_3716,
										BgL_arg3977z00_1807);
							}}
							{	/* Cfa/specialize.scm 34 */
								int BgL_auxz00_3719;

								BgL_auxz00_3719 = (int) (((long) 0));
								STRUCT_SET(BgL_res3443z00_1804, BgL_auxz00_3719,
									BgL_aux3444z00_1805);
							}
							{	/* Cfa/specialize.scm 34 */
								obj_t BgL_auxz00_3722;

								BgL_auxz00_3722 = STRUCT_KEY(BgL_res3443z00_1804);
								STRUCT_KEY_SET(BgL_aux3444z00_1805, BgL_auxz00_3722);
							}
							{	/* Cfa/specialize.scm 34 */
								obj_t BgL_kz00_2936;

								BgL_kz00_2936 = CNST_TABLE_REF(((long) 7));
								STRUCT_KEY_SET(BgL_res3443z00_1804, BgL_kz00_2936);
							}
							return BgL_res3443z00_1804;
						}
					}
				}
			}
		}
	}



/* patch!-app3615 */
	obj_t BGl_patchz12zd2app3615zc0zzcfa_specializa7eza7(obj_t BgL_envz00_2999,
		obj_t BgL_nodez00_3000)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 486 */
			{
				BgL_appz00_bglt BgL_nodez00_1789;

				{	/* Cfa/specialize.scm 487 */
					BgL_appz00_bglt BgL_auxz00_3728;

					BgL_nodez00_1789 = (BgL_appz00_bglt) (BgL_nodez00_3000);
					{	/* Cfa/specialize.scm 488 */
						obj_t BgL_arg3969z00_1793;

						BgL_arg3969z00_1793 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1789))->BgL_argsz00);
						BGl_patchza2z12zb0zzcfa_specializa7eza7(BgL_arg3969z00_1793);
					}
					{	/* Cfa/specialize.scm 489 */
						obj_t BgL_arg3970z00_1794;

						{	/* Cfa/specialize.scm 489 */
							BgL_varz00_bglt BgL_arg3972z00_1795;

							BgL_arg3972z00_1795 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1789))->BgL_funz00);
							{	/* Cfa/specialize.scm 489 */
								BgL_nodez00_bglt BgL_nodez00_2890;

								BgL_nodez00_2890 = (BgL_nodez00_bglt) (BgL_arg3972z00_1795);
								{	/* Cfa/specialize.scm 489 */
									obj_t BgL_method3572z00_2891;

									{	/* Cfa/specialize.scm 489 */
										BgL_objectz00_bglt BgL_objz00_2892;

										BgL_objz00_2892 = (BgL_objectz00_bglt) (BgL_nodez00_2890);
										{	/* Cfa/specialize.scm 489 */
											long BgL_objzd2classzd2numz00_2893;

											BgL_objzd2classzd2numz00_2893 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2892);
											{	/* Cfa/specialize.scm 489 */
												obj_t BgL_arg2643z00_2894;

												BgL_arg2643z00_2894 =
													PROCEDURE_REF
													(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
													(int) (((long) 1)));
												{	/* Cfa/specialize.scm 489 */
													obj_t BgL_arrayz00_2896;

													int BgL_offsetz00_2897;

													BgL_arrayz00_2896 = BgL_arg2643z00_2894;
													BgL_offsetz00_2897 =
														(int) (BgL_objzd2classzd2numz00_2893);
													{	/* Cfa/specialize.scm 489 */
														long BgL_offsetz00_2898;

														BgL_offsetz00_2898 =
															((long) (BgL_offsetz00_2897) - OBJECT_TYPE);
														{	/* Cfa/specialize.scm 489 */
															long BgL_modz00_2899;

															{	/* Cfa/specialize.scm 489 */
																int BgL_arg2645z00_2900;

																BgL_arg2645z00_2900 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 489 */
																	long BgL_auxz00_3741;

																	BgL_auxz00_3741 =
																		(long) (BgL_arg2645z00_2900);
																	BgL_modz00_2899 =
																		(BgL_offsetz00_2898 / BgL_auxz00_3741);
															}}
															{	/* Cfa/specialize.scm 489 */
																long BgL_restz00_2901;

																{	/* Cfa/specialize.scm 489 */
																	int BgL_arg2644z00_2902;

																	BgL_arg2644z00_2902 = (int) (((long) 16));
																	{	/* Cfa/specialize.scm 489 */
																		long BgL_auxz00_3745;

																		BgL_auxz00_3745 =
																			(long) (BgL_arg2644z00_2902);
																		BgL_restz00_2901 =
																			(BgL_offsetz00_2898 % BgL_auxz00_3745);
																}}
																{	/* Cfa/specialize.scm 489 */

																	BgL_method3572z00_2891 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2896,
																			(int) (BgL_modz00_2899)),
																		(int) (BgL_restz00_2901));
									}}}}}}}}
									BgL_arg3970z00_1794 =
										PROCEDURE_ENTRY(BgL_method3572z00_2891)
										(BgL_method3572z00_2891, (obj_t) (BgL_nodez00_2890), BEOA);
						}}}
						{
							BgL_varz00_bglt BgL_auxz00_3755;

							BgL_auxz00_3755 = (BgL_varz00_bglt) (BgL_arg3970z00_1794);
							((((BgL_appz00_bglt) CREF(BgL_nodez00_1789))->BgL_funz00) =
								((BgL_varz00_bglt) BgL_auxz00_3755), BUNSPEC);
					}}
					{	/* Cfa/specialize.scm 490 */
						BgL_variablez00_bglt BgL_vz00_1796;

						{	/* Cfa/specialize.scm 490 */
							BgL_varz00_bglt BgL_obj2244z00_2919;

							BgL_obj2244z00_2919 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1789))->BgL_funz00);
							BgL_vz00_1796 =
								(((BgL_varz00_bglt) CREF(BgL_obj2244z00_2919))->
								BgL_variablez00);
						}
						{	/* Cfa/specialize.scm 492 */
							bool_t BgL_testz00_3760;

							{	/* Cfa/specialize.scm 492 */
								obj_t BgL_obj3448z00_2920;

								BgL_obj3448z00_2920 = (obj_t) (BgL_vz00_1796);
								BgL_testz00_3760 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj3448z00_2920,
									BGl_specializa7edzd2globalz75zzcfa_specializa7eza7);
							}
							if (BgL_testz00_3760)
								{	/* Cfa/specialize.scm 492 */
									BgL_auxz00_3728 =
										BGl_specializa7ezd2appz12z67zzcfa_specializa7eza7
										(BgL_nodez00_1789);
								}
							else
								{	/* Cfa/specialize.scm 492 */
									BgL_auxz00_3728 = BgL_nodez00_1789;
								}
						}
					}
					return (obj_t) (BgL_auxz00_3728);
				}
			}
		}
	}



/* patch!-box-ref3613 */
	obj_t BGl_patchz12zd2boxzd2ref3613z12zzcfa_specializa7eza7(obj_t
		BgL_envz00_3001, obj_t BgL_nodez00_3002)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 467 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1781;

				{	/* Cfa/specialize.scm 468 */
					BgL_boxzd2refzd2_bglt BgL_auxz00_3766;

					BgL_nodez00_1781 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_3002);
					{	/* Cfa/specialize.scm 469 */
						obj_t BgL_arg3966z00_1785;

						{	/* Cfa/specialize.scm 469 */
							BgL_varz00_bglt BgL_arg3967z00_1786;

							BgL_arg3967z00_1786 =
								(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1781))->BgL_varz00);
							{	/* Cfa/specialize.scm 469 */
								BgL_nodez00_bglt BgL_nodez00_2860;

								BgL_nodez00_2860 = (BgL_nodez00_bglt) (BgL_arg3967z00_1786);
								{	/* Cfa/specialize.scm 469 */
									obj_t BgL_method3572z00_2861;

									{	/* Cfa/specialize.scm 469 */
										BgL_objectz00_bglt BgL_objz00_2862;

										BgL_objz00_2862 = (BgL_objectz00_bglt) (BgL_nodez00_2860);
										{	/* Cfa/specialize.scm 469 */
											long BgL_objzd2classzd2numz00_2863;

											BgL_objzd2classzd2numz00_2863 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2862);
											{	/* Cfa/specialize.scm 469 */
												obj_t BgL_arg2643z00_2864;

												BgL_arg2643z00_2864 =
													PROCEDURE_REF
													(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
													(int) (((long) 1)));
												{	/* Cfa/specialize.scm 469 */
													obj_t BgL_arrayz00_2866;

													int BgL_offsetz00_2867;

													BgL_arrayz00_2866 = BgL_arg2643z00_2864;
													BgL_offsetz00_2867 =
														(int) (BgL_objzd2classzd2numz00_2863);
													{	/* Cfa/specialize.scm 469 */
														long BgL_offsetz00_2868;

														BgL_offsetz00_2868 =
															((long) (BgL_offsetz00_2867) - OBJECT_TYPE);
														{	/* Cfa/specialize.scm 469 */
															long BgL_modz00_2869;

															{	/* Cfa/specialize.scm 469 */
																int BgL_arg2645z00_2870;

																BgL_arg2645z00_2870 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 469 */
																	long BgL_auxz00_3777;

																	BgL_auxz00_3777 =
																		(long) (BgL_arg2645z00_2870);
																	BgL_modz00_2869 =
																		(BgL_offsetz00_2868 / BgL_auxz00_3777);
															}}
															{	/* Cfa/specialize.scm 469 */
																long BgL_restz00_2871;

																{	/* Cfa/specialize.scm 469 */
																	int BgL_arg2644z00_2872;

																	BgL_arg2644z00_2872 = (int) (((long) 16));
																	{	/* Cfa/specialize.scm 469 */
																		long BgL_auxz00_3781;

																		BgL_auxz00_3781 =
																			(long) (BgL_arg2644z00_2872);
																		BgL_restz00_2871 =
																			(BgL_offsetz00_2868 % BgL_auxz00_3781);
																}}
																{	/* Cfa/specialize.scm 469 */

																	BgL_method3572z00_2861 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2866,
																			(int) (BgL_modz00_2869)),
																		(int) (BgL_restz00_2871));
									}}}}}}}}
									BgL_arg3966z00_1785 =
										PROCEDURE_ENTRY(BgL_method3572z00_2861)
										(BgL_method3572z00_2861, (obj_t) (BgL_nodez00_2860), BEOA);
						}}}
						{
							BgL_varz00_bglt BgL_auxz00_3791;

							BgL_auxz00_3791 = (BgL_varz00_bglt) (BgL_arg3966z00_1785);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1781))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_3791), BUNSPEC);
					}}
					BgL_auxz00_3766 = BgL_nodez00_1781;
					return (obj_t) (BgL_auxz00_3766);
				}
			}
		}
	}



/* patch!-box-set!3611 */
	obj_t BGl_patchz12zd2boxzd2setz123611z00zzcfa_specializa7eza7(obj_t
		BgL_envz00_3003, obj_t BgL_nodez00_3004)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 458 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1771;

				{	/* Cfa/specialize.scm 459 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_3796;

					BgL_nodez00_1771 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_3004);
					{	/* Cfa/specialize.scm 460 */
						obj_t BgL_arg3961z00_1775;

						{	/* Cfa/specialize.scm 460 */
							BgL_varz00_bglt BgL_arg3962z00_1776;

							BgL_arg3962z00_1776 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1771))->
								BgL_varz00);
							{	/* Cfa/specialize.scm 460 */
								BgL_nodez00_bglt BgL_nodez00_2802;

								BgL_nodez00_2802 = (BgL_nodez00_bglt) (BgL_arg3962z00_1776);
								{	/* Cfa/specialize.scm 460 */
									obj_t BgL_method3572z00_2803;

									{	/* Cfa/specialize.scm 460 */
										BgL_objectz00_bglt BgL_objz00_2804;

										BgL_objz00_2804 = (BgL_objectz00_bglt) (BgL_nodez00_2802);
										{	/* Cfa/specialize.scm 460 */
											long BgL_objzd2classzd2numz00_2805;

											BgL_objzd2classzd2numz00_2805 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2804);
											{	/* Cfa/specialize.scm 460 */
												obj_t BgL_arg2643z00_2806;

												BgL_arg2643z00_2806 =
													PROCEDURE_REF
													(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
													(int) (((long) 1)));
												{	/* Cfa/specialize.scm 460 */
													obj_t BgL_arrayz00_2808;

													int BgL_offsetz00_2809;

													BgL_arrayz00_2808 = BgL_arg2643z00_2806;
													BgL_offsetz00_2809 =
														(int) (BgL_objzd2classzd2numz00_2805);
													{	/* Cfa/specialize.scm 460 */
														long BgL_offsetz00_2810;

														BgL_offsetz00_2810 =
															((long) (BgL_offsetz00_2809) - OBJECT_TYPE);
														{	/* Cfa/specialize.scm 460 */
															long BgL_modz00_2811;

															{	/* Cfa/specialize.scm 460 */
																int BgL_arg2645z00_2812;

																BgL_arg2645z00_2812 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 460 */
																	long BgL_auxz00_3807;

																	BgL_auxz00_3807 =
																		(long) (BgL_arg2645z00_2812);
																	BgL_modz00_2811 =
																		(BgL_offsetz00_2810 / BgL_auxz00_3807);
															}}
															{	/* Cfa/specialize.scm 460 */
																long BgL_restz00_2813;

																{	/* Cfa/specialize.scm 460 */
																	int BgL_arg2644z00_2814;

																	BgL_arg2644z00_2814 = (int) (((long) 16));
																	{	/* Cfa/specialize.scm 460 */
																		long BgL_auxz00_3811;

																		BgL_auxz00_3811 =
																			(long) (BgL_arg2644z00_2814);
																		BgL_restz00_2813 =
																			(BgL_offsetz00_2810 % BgL_auxz00_3811);
																}}
																{	/* Cfa/specialize.scm 460 */

																	BgL_method3572z00_2803 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2808,
																			(int) (BgL_modz00_2811)),
																		(int) (BgL_restz00_2813));
									}}}}}}}}
									BgL_arg3961z00_1775 =
										PROCEDURE_ENTRY(BgL_method3572z00_2803)
										(BgL_method3572z00_2803, (obj_t) (BgL_nodez00_2802), BEOA);
						}}}
						{
							BgL_varz00_bglt BgL_auxz00_3821;

							BgL_auxz00_3821 = (BgL_varz00_bglt) (BgL_arg3961z00_1775);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1771))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_3821), BUNSPEC);
					}}
					{	/* Cfa/specialize.scm 461 */
						obj_t BgL_arg3963z00_1777;

						{	/* Cfa/specialize.scm 461 */
							BgL_nodez00_bglt BgL_arg3964z00_1778;

							BgL_arg3964z00_1778 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1771))->
								BgL_valuez00);
							{	/* Cfa/specialize.scm 461 */
								obj_t BgL_method3572z00_2832;

								{	/* Cfa/specialize.scm 461 */
									BgL_objectz00_bglt BgL_objz00_2833;

									BgL_objz00_2833 = (BgL_objectz00_bglt) (BgL_arg3964z00_1778);
									{	/* Cfa/specialize.scm 461 */
										long BgL_objzd2classzd2numz00_2834;

										BgL_objzd2classzd2numz00_2834 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2833);
										{	/* Cfa/specialize.scm 461 */
											obj_t BgL_arg2643z00_2835;

											BgL_arg2643z00_2835 =
												PROCEDURE_REF
												(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
												(int) (((long) 1)));
											{	/* Cfa/specialize.scm 461 */
												obj_t BgL_arrayz00_2837;

												int BgL_offsetz00_2838;

												BgL_arrayz00_2837 = BgL_arg2643z00_2835;
												BgL_offsetz00_2838 =
													(int) (BgL_objzd2classzd2numz00_2834);
												{	/* Cfa/specialize.scm 461 */
													long BgL_offsetz00_2839;

													BgL_offsetz00_2839 =
														((long) (BgL_offsetz00_2838) - OBJECT_TYPE);
													{	/* Cfa/specialize.scm 461 */
														long BgL_modz00_2840;

														{	/* Cfa/specialize.scm 461 */
															int BgL_arg2645z00_2841;

															BgL_arg2645z00_2841 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 461 */
																long BgL_auxz00_3833;

																BgL_auxz00_3833 = (long) (BgL_arg2645z00_2841);
																BgL_modz00_2840 =
																	(BgL_offsetz00_2839 / BgL_auxz00_3833);
														}}
														{	/* Cfa/specialize.scm 461 */
															long BgL_restz00_2842;

															{	/* Cfa/specialize.scm 461 */
																int BgL_arg2644z00_2843;

																BgL_arg2644z00_2843 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 461 */
																	long BgL_auxz00_3837;

																	BgL_auxz00_3837 =
																		(long) (BgL_arg2644z00_2843);
																	BgL_restz00_2842 =
																		(BgL_offsetz00_2839 % BgL_auxz00_3837);
															}}
															{	/* Cfa/specialize.scm 461 */

																BgL_method3572z00_2832 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2837,
																		(int) (BgL_modz00_2840)),
																	(int) (BgL_restz00_2842));
								}}}}}}}}
								BgL_arg3963z00_1777 =
									PROCEDURE_ENTRY(BgL_method3572z00_2832)
									(BgL_method3572z00_2832, (obj_t) (BgL_arg3964z00_1778), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_3847;

							BgL_auxz00_3847 = (BgL_nodez00_bglt) (BgL_arg3963z00_1777);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1771))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_auxz00_3847), BUNSPEC);
					}}
					BgL_auxz00_3796 = BgL_nodez00_1771;
					return (obj_t) (BgL_auxz00_3796);
				}
			}
		}
	}



/* patch!-make-box3608 */
	obj_t BGl_patchz12zd2makezd2box3608z12zzcfa_specializa7eza7(obj_t
		BgL_envz00_3005, obj_t BgL_nodez00_3006)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 450 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1763;

				{	/* Cfa/specialize.scm 451 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_3852;

					BgL_nodez00_1763 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_3006);
					{	/* Cfa/specialize.scm 452 */
						obj_t BgL_arg3958z00_1767;

						{	/* Cfa/specialize.scm 452 */
							BgL_nodez00_bglt BgL_arg3959z00_1768;

							BgL_arg3959z00_1768 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1763))->
								BgL_valuez00);
							{	/* Cfa/specialize.scm 452 */
								obj_t BgL_method3572z00_2774;

								{	/* Cfa/specialize.scm 452 */
									BgL_objectz00_bglt BgL_objz00_2775;

									BgL_objz00_2775 = (BgL_objectz00_bglt) (BgL_arg3959z00_1768);
									{	/* Cfa/specialize.scm 452 */
										long BgL_objzd2classzd2numz00_2776;

										BgL_objzd2classzd2numz00_2776 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2775);
										{	/* Cfa/specialize.scm 452 */
											obj_t BgL_arg2643z00_2777;

											BgL_arg2643z00_2777 =
												PROCEDURE_REF
												(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
												(int) (((long) 1)));
											{	/* Cfa/specialize.scm 452 */
												obj_t BgL_arrayz00_2779;

												int BgL_offsetz00_2780;

												BgL_arrayz00_2779 = BgL_arg2643z00_2777;
												BgL_offsetz00_2780 =
													(int) (BgL_objzd2classzd2numz00_2776);
												{	/* Cfa/specialize.scm 452 */
													long BgL_offsetz00_2781;

													BgL_offsetz00_2781 =
														((long) (BgL_offsetz00_2780) - OBJECT_TYPE);
													{	/* Cfa/specialize.scm 452 */
														long BgL_modz00_2782;

														{	/* Cfa/specialize.scm 452 */
															int BgL_arg2645z00_2783;

															BgL_arg2645z00_2783 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 452 */
																long BgL_auxz00_3862;

																BgL_auxz00_3862 = (long) (BgL_arg2645z00_2783);
																BgL_modz00_2782 =
																	(BgL_offsetz00_2781 / BgL_auxz00_3862);
														}}
														{	/* Cfa/specialize.scm 452 */
															long BgL_restz00_2784;

															{	/* Cfa/specialize.scm 452 */
																int BgL_arg2644z00_2785;

																BgL_arg2644z00_2785 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 452 */
																	long BgL_auxz00_3866;

																	BgL_auxz00_3866 =
																		(long) (BgL_arg2644z00_2785);
																	BgL_restz00_2784 =
																		(BgL_offsetz00_2781 % BgL_auxz00_3866);
															}}
															{	/* Cfa/specialize.scm 452 */

																BgL_method3572z00_2774 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2779,
																		(int) (BgL_modz00_2782)),
																	(int) (BgL_restz00_2784));
								}}}}}}}}
								BgL_arg3958z00_1767 =
									PROCEDURE_ENTRY(BgL_method3572z00_2774)
									(BgL_method3572z00_2774, (obj_t) (BgL_arg3959z00_1768), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_3876;

							BgL_auxz00_3876 = (BgL_nodez00_bglt) (BgL_arg3958z00_1767);
							((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1763))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_auxz00_3876), BUNSPEC);
					}}
					BgL_auxz00_3852 = BgL_nodez00_1763;
					return (obj_t) (BgL_auxz00_3852);
				}
			}
		}
	}



/* patch!-jump-ex-it3606 */
	obj_t BGl_patchz12zd2jumpzd2exzd2it3606zc0zzcfa_specializa7eza7(obj_t
		BgL_envz00_3007, obj_t BgL_nodez00_3008)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 441 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1753;

				{	/* Cfa/specialize.scm 442 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_3881;

					BgL_nodez00_1753 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_3008);
					{	/* Cfa/specialize.scm 443 */
						obj_t BgL_arg3951z00_1757;

						{	/* Cfa/specialize.scm 443 */
							BgL_nodez00_bglt BgL_arg3953z00_1758;

							BgL_arg3953z00_1758 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1753))->
								BgL_exitz00);
							{	/* Cfa/specialize.scm 443 */
								obj_t BgL_method3572z00_2716;

								{	/* Cfa/specialize.scm 443 */
									BgL_objectz00_bglt BgL_objz00_2717;

									BgL_objz00_2717 = (BgL_objectz00_bglt) (BgL_arg3953z00_1758);
									{	/* Cfa/specialize.scm 443 */
										long BgL_objzd2classzd2numz00_2718;

										BgL_objzd2classzd2numz00_2718 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2717);
										{	/* Cfa/specialize.scm 443 */
											obj_t BgL_arg2643z00_2719;

											BgL_arg2643z00_2719 =
												PROCEDURE_REF
												(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
												(int) (((long) 1)));
											{	/* Cfa/specialize.scm 443 */
												obj_t BgL_arrayz00_2721;

												int BgL_offsetz00_2722;

												BgL_arrayz00_2721 = BgL_arg2643z00_2719;
												BgL_offsetz00_2722 =
													(int) (BgL_objzd2classzd2numz00_2718);
												{	/* Cfa/specialize.scm 443 */
													long BgL_offsetz00_2723;

													BgL_offsetz00_2723 =
														((long) (BgL_offsetz00_2722) - OBJECT_TYPE);
													{	/* Cfa/specialize.scm 443 */
														long BgL_modz00_2724;

														{	/* Cfa/specialize.scm 443 */
															int BgL_arg2645z00_2725;

															BgL_arg2645z00_2725 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 443 */
																long BgL_auxz00_3891;

																BgL_auxz00_3891 = (long) (BgL_arg2645z00_2725);
																BgL_modz00_2724 =
																	(BgL_offsetz00_2723 / BgL_auxz00_3891);
														}}
														{	/* Cfa/specialize.scm 443 */
															long BgL_restz00_2726;

															{	/* Cfa/specialize.scm 443 */
																int BgL_arg2644z00_2727;

																BgL_arg2644z00_2727 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 443 */
																	long BgL_auxz00_3895;

																	BgL_auxz00_3895 =
																		(long) (BgL_arg2644z00_2727);
																	BgL_restz00_2726 =
																		(BgL_offsetz00_2723 % BgL_auxz00_3895);
															}}
															{	/* Cfa/specialize.scm 443 */

																BgL_method3572z00_2716 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2721,
																		(int) (BgL_modz00_2724)),
																	(int) (BgL_restz00_2726));
								}}}}}}}}
								BgL_arg3951z00_1757 =
									PROCEDURE_ENTRY(BgL_method3572z00_2716)
									(BgL_method3572z00_2716, (obj_t) (BgL_arg3953z00_1758), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_3905;

							BgL_auxz00_3905 = (BgL_nodez00_bglt) (BgL_arg3951z00_1757);
							((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1753))->
									BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_3905), BUNSPEC);
					}}
					{	/* Cfa/specialize.scm 444 */
						obj_t BgL_arg3954z00_1759;

						{	/* Cfa/specialize.scm 444 */
							BgL_nodez00_bglt BgL_arg3955z00_1760;

							BgL_arg3955z00_1760 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1753))->
								BgL_valuez00);
							{	/* Cfa/specialize.scm 444 */
								obj_t BgL_method3572z00_2745;

								{	/* Cfa/specialize.scm 444 */
									BgL_objectz00_bglt BgL_objz00_2746;

									BgL_objz00_2746 = (BgL_objectz00_bglt) (BgL_arg3955z00_1760);
									{	/* Cfa/specialize.scm 444 */
										long BgL_objzd2classzd2numz00_2747;

										BgL_objzd2classzd2numz00_2747 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2746);
										{	/* Cfa/specialize.scm 444 */
											obj_t BgL_arg2643z00_2748;

											BgL_arg2643z00_2748 =
												PROCEDURE_REF
												(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
												(int) (((long) 1)));
											{	/* Cfa/specialize.scm 444 */
												obj_t BgL_arrayz00_2750;

												int BgL_offsetz00_2751;

												BgL_arrayz00_2750 = BgL_arg2643z00_2748;
												BgL_offsetz00_2751 =
													(int) (BgL_objzd2classzd2numz00_2747);
												{	/* Cfa/specialize.scm 444 */
													long BgL_offsetz00_2752;

													BgL_offsetz00_2752 =
														((long) (BgL_offsetz00_2751) - OBJECT_TYPE);
													{	/* Cfa/specialize.scm 444 */
														long BgL_modz00_2753;

														{	/* Cfa/specialize.scm 444 */
															int BgL_arg2645z00_2754;

															BgL_arg2645z00_2754 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 444 */
																long BgL_auxz00_3917;

																BgL_auxz00_3917 = (long) (BgL_arg2645z00_2754);
																BgL_modz00_2753 =
																	(BgL_offsetz00_2752 / BgL_auxz00_3917);
														}}
														{	/* Cfa/specialize.scm 444 */
															long BgL_restz00_2755;

															{	/* Cfa/specialize.scm 444 */
																int BgL_arg2644z00_2756;

																BgL_arg2644z00_2756 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 444 */
																	long BgL_auxz00_3921;

																	BgL_auxz00_3921 =
																		(long) (BgL_arg2644z00_2756);
																	BgL_restz00_2755 =
																		(BgL_offsetz00_2752 % BgL_auxz00_3921);
															}}
															{	/* Cfa/specialize.scm 444 */

																BgL_method3572z00_2745 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2750,
																		(int) (BgL_modz00_2753)),
																	(int) (BgL_restz00_2755));
								}}}}}}}}
								BgL_arg3954z00_1759 =
									PROCEDURE_ENTRY(BgL_method3572z00_2745)
									(BgL_method3572z00_2745, (obj_t) (BgL_arg3955z00_1760), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_3931;

							BgL_auxz00_3931 = (BgL_nodez00_bglt) (BgL_arg3954z00_1759);
							((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1753))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_auxz00_3931), BUNSPEC);
					}}
					BgL_auxz00_3881 = BgL_nodez00_1753;
					return (obj_t) (BgL_auxz00_3881);
				}
			}
		}
	}



/* patch!-set-ex-it3604 */
	obj_t BGl_patchz12zd2setzd2exzd2it3604zc0zzcfa_specializa7eza7(obj_t
		BgL_envz00_3009, obj_t BgL_nodez00_3010)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 432 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1744;

				{	/* Cfa/specialize.scm 433 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_3936;

					BgL_nodez00_1744 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_3010);
					{	/* Cfa/specialize.scm 434 */
						obj_t BgL_arg3947z00_1748;

						{	/* Cfa/specialize.scm 434 */
							BgL_nodez00_bglt BgL_arg3948z00_1749;

							BgL_arg3948z00_1749 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1744))->
								BgL_bodyz00);
							{	/* Cfa/specialize.scm 434 */
								obj_t BgL_method3572z00_2660;

								{	/* Cfa/specialize.scm 434 */
									BgL_objectz00_bglt BgL_objz00_2661;

									BgL_objz00_2661 = (BgL_objectz00_bglt) (BgL_arg3948z00_1749);
									{	/* Cfa/specialize.scm 434 */
										long BgL_objzd2classzd2numz00_2662;

										BgL_objzd2classzd2numz00_2662 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2661);
										{	/* Cfa/specialize.scm 434 */
											obj_t BgL_arg2643z00_2663;

											BgL_arg2643z00_2663 =
												PROCEDURE_REF
												(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
												(int) (((long) 1)));
											{	/* Cfa/specialize.scm 434 */
												obj_t BgL_arrayz00_2665;

												int BgL_offsetz00_2666;

												BgL_arrayz00_2665 = BgL_arg2643z00_2663;
												BgL_offsetz00_2666 =
													(int) (BgL_objzd2classzd2numz00_2662);
												{	/* Cfa/specialize.scm 434 */
													long BgL_offsetz00_2667;

													BgL_offsetz00_2667 =
														((long) (BgL_offsetz00_2666) - OBJECT_TYPE);
													{	/* Cfa/specialize.scm 434 */
														long BgL_modz00_2668;

														{	/* Cfa/specialize.scm 434 */
															int BgL_arg2645z00_2669;

															BgL_arg2645z00_2669 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 434 */
																long BgL_auxz00_3946;

																BgL_auxz00_3946 = (long) (BgL_arg2645z00_2669);
																BgL_modz00_2668 =
																	(BgL_offsetz00_2667 / BgL_auxz00_3946);
														}}
														{	/* Cfa/specialize.scm 434 */
															long BgL_restz00_2670;

															{	/* Cfa/specialize.scm 434 */
																int BgL_arg2644z00_2671;

																BgL_arg2644z00_2671 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 434 */
																	long BgL_auxz00_3950;

																	BgL_auxz00_3950 =
																		(long) (BgL_arg2644z00_2671);
																	BgL_restz00_2670 =
																		(BgL_offsetz00_2667 % BgL_auxz00_3950);
															}}
															{	/* Cfa/specialize.scm 434 */

																BgL_method3572z00_2660 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2665,
																		(int) (BgL_modz00_2668)),
																	(int) (BgL_restz00_2670));
								}}}}}}}}
								BgL_arg3947z00_1748 =
									PROCEDURE_ENTRY(BgL_method3572z00_2660)
									(BgL_method3572z00_2660, (obj_t) (BgL_arg3948z00_1749), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_3960;

							BgL_auxz00_3960 = (BgL_nodez00_bglt) (BgL_arg3947z00_1748);
							((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1744))->
									BgL_bodyz00) = ((BgL_nodez00_bglt) BgL_auxz00_3960), BUNSPEC);
					}}
					{	/* Cfa/specialize.scm 435 */
						BgL_varz00_bglt BgL_arg3949z00_1750;

						BgL_arg3949z00_1750 =
							(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1744))->
							BgL_varz00);
						{	/* Cfa/specialize.scm 435 */
							BgL_nodez00_bglt BgL_nodez00_2688;

							BgL_nodez00_2688 = (BgL_nodez00_bglt) (BgL_arg3949z00_1750);
							{	/* Cfa/specialize.scm 435 */
								obj_t BgL_method3572z00_2689;

								{	/* Cfa/specialize.scm 435 */
									BgL_objectz00_bglt BgL_objz00_2690;

									BgL_objz00_2690 = (BgL_objectz00_bglt) (BgL_nodez00_2688);
									{	/* Cfa/specialize.scm 435 */
										long BgL_objzd2classzd2numz00_2691;

										BgL_objzd2classzd2numz00_2691 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2690);
										{	/* Cfa/specialize.scm 435 */
											obj_t BgL_arg2643z00_2692;

											BgL_arg2643z00_2692 =
												PROCEDURE_REF
												(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
												(int) (((long) 1)));
											{	/* Cfa/specialize.scm 435 */
												obj_t BgL_arrayz00_2694;

												int BgL_offsetz00_2695;

												BgL_arrayz00_2694 = BgL_arg2643z00_2692;
												BgL_offsetz00_2695 =
													(int) (BgL_objzd2classzd2numz00_2691);
												{	/* Cfa/specialize.scm 435 */
													long BgL_offsetz00_2696;

													BgL_offsetz00_2696 =
														((long) (BgL_offsetz00_2695) - OBJECT_TYPE);
													{	/* Cfa/specialize.scm 435 */
														long BgL_modz00_2697;

														{	/* Cfa/specialize.scm 435 */
															int BgL_arg2645z00_2698;

															BgL_arg2645z00_2698 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 435 */
																long BgL_auxz00_3973;

																BgL_auxz00_3973 = (long) (BgL_arg2645z00_2698);
																BgL_modz00_2697 =
																	(BgL_offsetz00_2696 / BgL_auxz00_3973);
														}}
														{	/* Cfa/specialize.scm 435 */
															long BgL_restz00_2699;

															{	/* Cfa/specialize.scm 435 */
																int BgL_arg2644z00_2700;

																BgL_arg2644z00_2700 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 435 */
																	long BgL_auxz00_3977;

																	BgL_auxz00_3977 =
																		(long) (BgL_arg2644z00_2700);
																	BgL_restz00_2699 =
																		(BgL_offsetz00_2696 % BgL_auxz00_3977);
															}}
															{	/* Cfa/specialize.scm 435 */

																BgL_method3572z00_2689 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2694,
																		(int) (BgL_modz00_2697)),
																	(int) (BgL_restz00_2699));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method3572z00_2689) (BgL_method3572z00_2689,
									(obj_t) (BgL_nodez00_2688), BEOA);
					}}}
					BgL_auxz00_3936 = BgL_nodez00_1744;
					return (obj_t) (BgL_auxz00_3936);
				}
			}
		}
	}



/* patch!-let-var3602 */
	obj_t BGl_patchz12zd2letzd2var3602z12zzcfa_specializa7eza7(obj_t
		BgL_envz00_3011, obj_t BgL_nodez00_3012)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 420 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1726;

				{	/* Cfa/specialize.scm 421 */
					BgL_letzd2varzd2_bglt BgL_auxz00_3989;

					BgL_nodez00_1726 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_3012);
					{	/* Cfa/specialize.scm 422 */
						obj_t BgL_g3569z00_1730;

						BgL_g3569z00_1730 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1726))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3567z00_1732;

							BgL_l3567z00_1732 = BgL_g3569z00_1730;
						BgL_zc3anonymousza33940ze3z83_1733:
							if (PAIRP(BgL_l3567z00_1732))
								{	/* Cfa/specialize.scm 422 */
									{	/* Cfa/specialize.scm 423 */
										obj_t BgL_bindingz00_1735;

										BgL_bindingz00_1735 = CAR(BgL_l3567z00_1732);
										{	/* Cfa/specialize.scm 423 */
											obj_t BgL_valz00_1736;

											BgL_valz00_1736 = CDR(BgL_bindingz00_1735);
											{	/* Cfa/specialize.scm 424 */
												obj_t BgL_arg3942z00_1737;

												{	/* Cfa/specialize.scm 424 */
													BgL_nodez00_bglt BgL_nodez00_2600;

													BgL_nodez00_2600 =
														(BgL_nodez00_bglt) (BgL_valz00_1736);
													{	/* Cfa/specialize.scm 424 */
														obj_t BgL_method3572z00_2601;

														{	/* Cfa/specialize.scm 424 */
															BgL_objectz00_bglt BgL_objz00_2602;

															BgL_objz00_2602 =
																(BgL_objectz00_bglt) (BgL_nodez00_2600);
															{	/* Cfa/specialize.scm 424 */
																long BgL_objzd2classzd2numz00_2603;

																BgL_objzd2classzd2numz00_2603 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2602);
																{	/* Cfa/specialize.scm 424 */
																	obj_t BgL_arg2643z00_2604;

																	BgL_arg2643z00_2604 =
																		PROCEDURE_REF
																		(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
																		(int) (((long) 1)));
																	{	/* Cfa/specialize.scm 424 */
																		obj_t BgL_arrayz00_2606;

																		int BgL_offsetz00_2607;

																		BgL_arrayz00_2606 = BgL_arg2643z00_2604;
																		BgL_offsetz00_2607 =
																			(int) (BgL_objzd2classzd2numz00_2603);
																		{	/* Cfa/specialize.scm 424 */
																			long BgL_offsetz00_2608;

																			BgL_offsetz00_2608 =
																				(
																				(long) (BgL_offsetz00_2607) -
																				OBJECT_TYPE);
																			{	/* Cfa/specialize.scm 424 */
																				long BgL_modz00_2609;

																				{	/* Cfa/specialize.scm 424 */
																					int BgL_arg2645z00_2610;

																					BgL_arg2645z00_2610 =
																						(int) (((long) 16));
																					{	/* Cfa/specialize.scm 424 */
																						long BgL_auxz00_4004;

																						BgL_auxz00_4004 =
																							(long) (BgL_arg2645z00_2610);
																						BgL_modz00_2609 =
																							(BgL_offsetz00_2608 /
																							BgL_auxz00_4004);
																				}}
																				{	/* Cfa/specialize.scm 424 */
																					long BgL_restz00_2611;

																					{	/* Cfa/specialize.scm 424 */
																						int BgL_arg2644z00_2612;

																						BgL_arg2644z00_2612 =
																							(int) (((long) 16));
																						{	/* Cfa/specialize.scm 424 */
																							long BgL_auxz00_4008;

																							BgL_auxz00_4008 =
																								(long) (BgL_arg2644z00_2612);
																							BgL_restz00_2611 =
																								(BgL_offsetz00_2608 %
																								BgL_auxz00_4008);
																					}}
																					{	/* Cfa/specialize.scm 424 */

																						BgL_method3572z00_2601 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2606,
																								(int) (BgL_modz00_2609)),
																							(int) (BgL_restz00_2611));
														}}}}}}}}
														BgL_arg3942z00_1737 =
															PROCEDURE_ENTRY(BgL_method3572z00_2601)
															(BgL_method3572z00_2601,
															(obj_t) (BgL_nodez00_2600), BEOA);
												}}
												SET_CDR(BgL_bindingz00_1735, BgL_arg3942z00_1737);
									}}}
									{
										obj_t BgL_l3567z00_4019;

										BgL_l3567z00_4019 = CDR(BgL_l3567z00_1732);
										BgL_l3567z00_1732 = BgL_l3567z00_4019;
										goto BgL_zc3anonymousza33940ze3z83_1733;
									}
								}
							else
								{	/* Cfa/specialize.scm 422 */
									((bool_t) 1);
								}
						}
					}
					{	/* Cfa/specialize.scm 426 */
						obj_t BgL_arg3944z00_1740;

						{	/* Cfa/specialize.scm 426 */
							BgL_nodez00_bglt BgL_arg3945z00_1741;

							BgL_arg3945z00_1741 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1726))->BgL_bodyz00);
							{	/* Cfa/specialize.scm 426 */
								obj_t BgL_method3572z00_2631;

								{	/* Cfa/specialize.scm 426 */
									BgL_objectz00_bglt BgL_objz00_2632;

									BgL_objz00_2632 = (BgL_objectz00_bglt) (BgL_arg3945z00_1741);
									{	/* Cfa/specialize.scm 426 */
										long BgL_objzd2classzd2numz00_2633;

										BgL_objzd2classzd2numz00_2633 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2632);
										{	/* Cfa/specialize.scm 426 */
											obj_t BgL_arg2643z00_2634;

											BgL_arg2643z00_2634 =
												PROCEDURE_REF
												(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
												(int) (((long) 1)));
											{	/* Cfa/specialize.scm 426 */
												obj_t BgL_arrayz00_2636;

												int BgL_offsetz00_2637;

												BgL_arrayz00_2636 = BgL_arg2643z00_2634;
												BgL_offsetz00_2637 =
													(int) (BgL_objzd2classzd2numz00_2633);
												{	/* Cfa/specialize.scm 426 */
													long BgL_offsetz00_2638;

													BgL_offsetz00_2638 =
														((long) (BgL_offsetz00_2637) - OBJECT_TYPE);
													{	/* Cfa/specialize.scm 426 */
														long BgL_modz00_2639;

														{	/* Cfa/specialize.scm 426 */
															int BgL_arg2645z00_2640;

															BgL_arg2645z00_2640 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 426 */
																long BgL_auxz00_4030;

																BgL_auxz00_4030 = (long) (BgL_arg2645z00_2640);
																BgL_modz00_2639 =
																	(BgL_offsetz00_2638 / BgL_auxz00_4030);
														}}
														{	/* Cfa/specialize.scm 426 */
															long BgL_restz00_2641;

															{	/* Cfa/specialize.scm 426 */
																int BgL_arg2644z00_2642;

																BgL_arg2644z00_2642 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 426 */
																	long BgL_auxz00_4034;

																	BgL_auxz00_4034 =
																		(long) (BgL_arg2644z00_2642);
																	BgL_restz00_2641 =
																		(BgL_offsetz00_2638 % BgL_auxz00_4034);
															}}
															{	/* Cfa/specialize.scm 426 */

																BgL_method3572z00_2631 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2636,
																		(int) (BgL_modz00_2639)),
																	(int) (BgL_restz00_2641));
								}}}}}}}}
								BgL_arg3944z00_1740 =
									PROCEDURE_ENTRY(BgL_method3572z00_2631)
									(BgL_method3572z00_2631, (obj_t) (BgL_arg3945z00_1741), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_4044;

							BgL_auxz00_4044 = (BgL_nodez00_bglt) (BgL_arg3944z00_1740);
							((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1726))->BgL_bodyz00) =
								((BgL_nodez00_bglt) BgL_auxz00_4044), BUNSPEC);
					}}
					BgL_auxz00_3989 = BgL_nodez00_1726;
					return (obj_t) (BgL_auxz00_3989);
				}
			}
		}
	}



/* patch!-let-fun3600 */
	obj_t BGl_patchz12zd2letzd2fun3600z12zzcfa_specializa7eza7(obj_t
		BgL_envz00_3013, obj_t BgL_nodez00_3014)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 411 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1710;

				{	/* Cfa/specialize.scm 412 */
					BgL_letzd2funzd2_bglt BgL_auxz00_4049;

					BgL_nodez00_1710 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_3014);
					{	/* Cfa/specialize.scm 413 */
						obj_t BgL_g3566z00_1714;

						BgL_g3566z00_1714 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1710))->BgL_localsz00);
						{
							obj_t BgL_l3564z00_1716;

							BgL_l3564z00_1716 = BgL_g3566z00_1714;
						BgL_zc3anonymousza33933ze3z83_1717:
							if (PAIRP(BgL_l3564z00_1716))
								{	/* Cfa/specialize.scm 413 */
									BGl_patchzd2funz12zc0zzcfa_specializa7eza7(CAR
										(BgL_l3564z00_1716));
									{
										obj_t BgL_l3564z00_4055;

										BgL_l3564z00_4055 = CDR(BgL_l3564z00_1716);
										BgL_l3564z00_1716 = BgL_l3564z00_4055;
										goto BgL_zc3anonymousza33933ze3z83_1717;
									}
								}
							else
								{	/* Cfa/specialize.scm 413 */
									((bool_t) 1);
								}
						}
					}
					{	/* Cfa/specialize.scm 414 */
						obj_t BgL_arg3937z00_1722;

						{	/* Cfa/specialize.scm 414 */
							BgL_nodez00_bglt BgL_arg3938z00_1723;

							BgL_arg3938z00_1723 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1710))->BgL_bodyz00);
							{	/* Cfa/specialize.scm 414 */
								obj_t BgL_method3572z00_2569;

								{	/* Cfa/specialize.scm 414 */
									BgL_objectz00_bglt BgL_objz00_2570;

									BgL_objz00_2570 = (BgL_objectz00_bglt) (BgL_arg3938z00_1723);
									{	/* Cfa/specialize.scm 414 */
										long BgL_objzd2classzd2numz00_2571;

										BgL_objzd2classzd2numz00_2571 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2570);
										{	/* Cfa/specialize.scm 414 */
											obj_t BgL_arg2643z00_2572;

											BgL_arg2643z00_2572 =
												PROCEDURE_REF
												(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
												(int) (((long) 1)));
											{	/* Cfa/specialize.scm 414 */
												obj_t BgL_arrayz00_2574;

												int BgL_offsetz00_2575;

												BgL_arrayz00_2574 = BgL_arg2643z00_2572;
												BgL_offsetz00_2575 =
													(int) (BgL_objzd2classzd2numz00_2571);
												{	/* Cfa/specialize.scm 414 */
													long BgL_offsetz00_2576;

													BgL_offsetz00_2576 =
														((long) (BgL_offsetz00_2575) - OBJECT_TYPE);
													{	/* Cfa/specialize.scm 414 */
														long BgL_modz00_2577;

														{	/* Cfa/specialize.scm 414 */
															int BgL_arg2645z00_2578;

															BgL_arg2645z00_2578 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 414 */
																long BgL_auxz00_4066;

																BgL_auxz00_4066 = (long) (BgL_arg2645z00_2578);
																BgL_modz00_2577 =
																	(BgL_offsetz00_2576 / BgL_auxz00_4066);
														}}
														{	/* Cfa/specialize.scm 414 */
															long BgL_restz00_2579;

															{	/* Cfa/specialize.scm 414 */
																int BgL_arg2644z00_2580;

																BgL_arg2644z00_2580 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 414 */
																	long BgL_auxz00_4070;

																	BgL_auxz00_4070 =
																		(long) (BgL_arg2644z00_2580);
																	BgL_restz00_2579 =
																		(BgL_offsetz00_2576 % BgL_auxz00_4070);
															}}
															{	/* Cfa/specialize.scm 414 */

																BgL_method3572z00_2569 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2574,
																		(int) (BgL_modz00_2577)),
																	(int) (BgL_restz00_2579));
								}}}}}}}}
								BgL_arg3937z00_1722 =
									PROCEDURE_ENTRY(BgL_method3572z00_2569)
									(BgL_method3572z00_2569, (obj_t) (BgL_arg3938z00_1723), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_4080;

							BgL_auxz00_4080 = (BgL_nodez00_bglt) (BgL_arg3937z00_1722);
							((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1710))->BgL_bodyz00) =
								((BgL_nodez00_bglt) BgL_auxz00_4080), BUNSPEC);
					}}
					BgL_auxz00_4049 = BgL_nodez00_1710;
					return (obj_t) (BgL_auxz00_4049);
				}
			}
		}
	}



/* patch!-select3598 */
	obj_t BGl_patchz12zd2select3598zc0zzcfa_specializa7eza7(obj_t BgL_envz00_3015,
		obj_t BgL_nodez00_3016)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 400 */
			{
				BgL_selectz00_bglt BgL_nodez00_1692;

				{	/* Cfa/specialize.scm 401 */
					BgL_selectz00_bglt BgL_auxz00_4085;

					BgL_nodez00_1692 = (BgL_selectz00_bglt) (BgL_nodez00_3016);
					{	/* Cfa/specialize.scm 402 */
						obj_t BgL_arg3925z00_1696;

						{	/* Cfa/specialize.scm 402 */
							BgL_nodez00_bglt BgL_arg3926z00_1697;

							BgL_arg3926z00_1697 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1692))->BgL_testz00);
							{	/* Cfa/specialize.scm 402 */
								obj_t BgL_method3572z00_2503;

								{	/* Cfa/specialize.scm 402 */
									BgL_objectz00_bglt BgL_objz00_2504;

									BgL_objz00_2504 = (BgL_objectz00_bglt) (BgL_arg3926z00_1697);
									{	/* Cfa/specialize.scm 402 */
										long BgL_objzd2classzd2numz00_2505;

										BgL_objzd2classzd2numz00_2505 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2504);
										{	/* Cfa/specialize.scm 402 */
											obj_t BgL_arg2643z00_2506;

											BgL_arg2643z00_2506 =
												PROCEDURE_REF
												(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
												(int) (((long) 1)));
											{	/* Cfa/specialize.scm 402 */
												obj_t BgL_arrayz00_2508;

												int BgL_offsetz00_2509;

												BgL_arrayz00_2508 = BgL_arg2643z00_2506;
												BgL_offsetz00_2509 =
													(int) (BgL_objzd2classzd2numz00_2505);
												{	/* Cfa/specialize.scm 402 */
													long BgL_offsetz00_2510;

													BgL_offsetz00_2510 =
														((long) (BgL_offsetz00_2509) - OBJECT_TYPE);
													{	/* Cfa/specialize.scm 402 */
														long BgL_modz00_2511;

														{	/* Cfa/specialize.scm 402 */
															int BgL_arg2645z00_2512;

															BgL_arg2645z00_2512 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 402 */
																long BgL_auxz00_4095;

																BgL_auxz00_4095 = (long) (BgL_arg2645z00_2512);
																BgL_modz00_2511 =
																	(BgL_offsetz00_2510 / BgL_auxz00_4095);
														}}
														{	/* Cfa/specialize.scm 402 */
															long BgL_restz00_2513;

															{	/* Cfa/specialize.scm 402 */
																int BgL_arg2644z00_2514;

																BgL_arg2644z00_2514 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 402 */
																	long BgL_auxz00_4099;

																	BgL_auxz00_4099 =
																		(long) (BgL_arg2644z00_2514);
																	BgL_restz00_2513 =
																		(BgL_offsetz00_2510 % BgL_auxz00_4099);
															}}
															{	/* Cfa/specialize.scm 402 */

																BgL_method3572z00_2503 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2508,
																		(int) (BgL_modz00_2511)),
																	(int) (BgL_restz00_2513));
								}}}}}}}}
								BgL_arg3925z00_1696 =
									PROCEDURE_ENTRY(BgL_method3572z00_2503)
									(BgL_method3572z00_2503, (obj_t) (BgL_arg3926z00_1697), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_4109;

							BgL_auxz00_4109 = (BgL_nodez00_bglt) (BgL_arg3925z00_1696);
							((((BgL_selectz00_bglt) CREF(BgL_nodez00_1692))->BgL_testz00) =
								((BgL_nodez00_bglt) BgL_auxz00_4109), BUNSPEC);
					}}
					{	/* Cfa/specialize.scm 403 */
						obj_t BgL_g3563z00_1698;

						BgL_g3563z00_1698 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1692))->BgL_clausesz00);
						{
							obj_t BgL_l3561z00_1700;

							BgL_l3561z00_1700 = BgL_g3563z00_1698;
						BgL_zc3anonymousza33927ze3z83_1701:
							if (PAIRP(BgL_l3561z00_1700))
								{	/* Cfa/specialize.scm 403 */
									{	/* Cfa/specialize.scm 404 */
										obj_t BgL_clausez00_1703;

										BgL_clausez00_1703 = CAR(BgL_l3561z00_1700);
										{	/* Cfa/specialize.scm 404 */
											obj_t BgL_arg3929z00_1704;

											{	/* Cfa/specialize.scm 404 */
												obj_t BgL_arg3930z00_1705;

												BgL_arg3930z00_1705 = CDR(BgL_clausez00_1703);
												{	/* Cfa/specialize.scm 404 */
													BgL_nodez00_bglt BgL_nodez00_2534;

													BgL_nodez00_2534 =
														(BgL_nodez00_bglt) (BgL_arg3930z00_1705);
													{	/* Cfa/specialize.scm 404 */
														obj_t BgL_method3572z00_2535;

														{	/* Cfa/specialize.scm 404 */
															BgL_objectz00_bglt BgL_objz00_2536;

															BgL_objz00_2536 =
																(BgL_objectz00_bglt) (BgL_nodez00_2534);
															{	/* Cfa/specialize.scm 404 */
																long BgL_objzd2classzd2numz00_2537;

																BgL_objzd2classzd2numz00_2537 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2536);
																{	/* Cfa/specialize.scm 404 */
																	obj_t BgL_arg2643z00_2538;

																	BgL_arg2643z00_2538 =
																		PROCEDURE_REF
																		(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
																		(int) (((long) 1)));
																	{	/* Cfa/specialize.scm 404 */
																		obj_t BgL_arrayz00_2540;

																		int BgL_offsetz00_2541;

																		BgL_arrayz00_2540 = BgL_arg2643z00_2538;
																		BgL_offsetz00_2541 =
																			(int) (BgL_objzd2classzd2numz00_2537);
																		{	/* Cfa/specialize.scm 404 */
																			long BgL_offsetz00_2542;

																			BgL_offsetz00_2542 =
																				(
																				(long) (BgL_offsetz00_2541) -
																				OBJECT_TYPE);
																			{	/* Cfa/specialize.scm 404 */
																				long BgL_modz00_2543;

																				{	/* Cfa/specialize.scm 404 */
																					int BgL_arg2645z00_2544;

																					BgL_arg2645z00_2544 =
																						(int) (((long) 16));
																					{	/* Cfa/specialize.scm 404 */
																						long BgL_auxz00_4126;

																						BgL_auxz00_4126 =
																							(long) (BgL_arg2645z00_2544);
																						BgL_modz00_2543 =
																							(BgL_offsetz00_2542 /
																							BgL_auxz00_4126);
																				}}
																				{	/* Cfa/specialize.scm 404 */
																					long BgL_restz00_2545;

																					{	/* Cfa/specialize.scm 404 */
																						int BgL_arg2644z00_2546;

																						BgL_arg2644z00_2546 =
																							(int) (((long) 16));
																						{	/* Cfa/specialize.scm 404 */
																							long BgL_auxz00_4130;

																							BgL_auxz00_4130 =
																								(long) (BgL_arg2644z00_2546);
																							BgL_restz00_2545 =
																								(BgL_offsetz00_2542 %
																								BgL_auxz00_4130);
																					}}
																					{	/* Cfa/specialize.scm 404 */

																						BgL_method3572z00_2535 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2540,
																								(int) (BgL_modz00_2543)),
																							(int) (BgL_restz00_2545));
														}}}}}}}}
														BgL_arg3929z00_1704 =
															PROCEDURE_ENTRY(BgL_method3572z00_2535)
															(BgL_method3572z00_2535,
															(obj_t) (BgL_nodez00_2534), BEOA);
											}}}
											SET_CDR(BgL_clausez00_1703, BgL_arg3929z00_1704);
									}}
									{
										obj_t BgL_l3561z00_4141;

										BgL_l3561z00_4141 = CDR(BgL_l3561z00_1700);
										BgL_l3561z00_1700 = BgL_l3561z00_4141;
										goto BgL_zc3anonymousza33927ze3z83_1701;
									}
								}
							else
								{	/* Cfa/specialize.scm 403 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_4085 = BgL_nodez00_1692;
					return (obj_t) (BgL_auxz00_4085);
				}
			}
		}
	}



/* patch!-fail3596 */
	obj_t BGl_patchz12zd2fail3596zc0zzcfa_specializa7eza7(obj_t BgL_envz00_3017,
		obj_t BgL_nodez00_3018)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 390 */
			{
				BgL_failz00_bglt BgL_nodez00_1680;

				{	/* Cfa/specialize.scm 391 */
					BgL_failz00_bglt BgL_auxz00_4145;

					BgL_nodez00_1680 = (BgL_failz00_bglt) (BgL_nodez00_3018);
					{	/* Cfa/specialize.scm 392 */
						obj_t BgL_arg3917z00_1684;

						{	/* Cfa/specialize.scm 392 */
							BgL_nodez00_bglt BgL_arg3918z00_1685;

							BgL_arg3918z00_1685 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1680))->BgL_procz00);
							{	/* Cfa/specialize.scm 392 */
								obj_t BgL_method3572z00_2416;

								{	/* Cfa/specialize.scm 392 */
									BgL_objectz00_bglt BgL_objz00_2417;

									BgL_objz00_2417 = (BgL_objectz00_bglt) (BgL_arg3918z00_1685);
									{	/* Cfa/specialize.scm 392 */
										long BgL_objzd2classzd2numz00_2418;

										BgL_objzd2classzd2numz00_2418 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2417);
										{	/* Cfa/specialize.scm 392 */
											obj_t BgL_arg2643z00_2419;

											BgL_arg2643z00_2419 =
												PROCEDURE_REF
												(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
												(int) (((long) 1)));
											{	/* Cfa/specialize.scm 392 */
												obj_t BgL_arrayz00_2421;

												int BgL_offsetz00_2422;

												BgL_arrayz00_2421 = BgL_arg2643z00_2419;
												BgL_offsetz00_2422 =
													(int) (BgL_objzd2classzd2numz00_2418);
												{	/* Cfa/specialize.scm 392 */
													long BgL_offsetz00_2423;

													BgL_offsetz00_2423 =
														((long) (BgL_offsetz00_2422) - OBJECT_TYPE);
													{	/* Cfa/specialize.scm 392 */
														long BgL_modz00_2424;

														{	/* Cfa/specialize.scm 392 */
															int BgL_arg2645z00_2425;

															BgL_arg2645z00_2425 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 392 */
																long BgL_auxz00_4155;

																BgL_auxz00_4155 = (long) (BgL_arg2645z00_2425);
																BgL_modz00_2424 =
																	(BgL_offsetz00_2423 / BgL_auxz00_4155);
														}}
														{	/* Cfa/specialize.scm 392 */
															long BgL_restz00_2426;

															{	/* Cfa/specialize.scm 392 */
																int BgL_arg2644z00_2427;

																BgL_arg2644z00_2427 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 392 */
																	long BgL_auxz00_4159;

																	BgL_auxz00_4159 =
																		(long) (BgL_arg2644z00_2427);
																	BgL_restz00_2426 =
																		(BgL_offsetz00_2423 % BgL_auxz00_4159);
															}}
															{	/* Cfa/specialize.scm 392 */

																BgL_method3572z00_2416 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2421,
																		(int) (BgL_modz00_2424)),
																	(int) (BgL_restz00_2426));
								}}}}}}}}
								BgL_arg3917z00_1684 =
									PROCEDURE_ENTRY(BgL_method3572z00_2416)
									(BgL_method3572z00_2416, (obj_t) (BgL_arg3918z00_1685), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_4169;

							BgL_auxz00_4169 = (BgL_nodez00_bglt) (BgL_arg3917z00_1684);
							((((BgL_failz00_bglt) CREF(BgL_nodez00_1680))->BgL_procz00) =
								((BgL_nodez00_bglt) BgL_auxz00_4169), BUNSPEC);
					}}
					{	/* Cfa/specialize.scm 393 */
						obj_t BgL_arg3919z00_1686;

						{	/* Cfa/specialize.scm 393 */
							BgL_nodez00_bglt BgL_arg3920z00_1687;

							BgL_arg3920z00_1687 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1680))->BgL_msgz00);
							{	/* Cfa/specialize.scm 393 */
								obj_t BgL_method3572z00_2445;

								{	/* Cfa/specialize.scm 393 */
									BgL_objectz00_bglt BgL_objz00_2446;

									BgL_objz00_2446 = (BgL_objectz00_bglt) (BgL_arg3920z00_1687);
									{	/* Cfa/specialize.scm 393 */
										long BgL_objzd2classzd2numz00_2447;

										BgL_objzd2classzd2numz00_2447 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2446);
										{	/* Cfa/specialize.scm 393 */
											obj_t BgL_arg2643z00_2448;

											BgL_arg2643z00_2448 =
												PROCEDURE_REF
												(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
												(int) (((long) 1)));
											{	/* Cfa/specialize.scm 393 */
												obj_t BgL_arrayz00_2450;

												int BgL_offsetz00_2451;

												BgL_arrayz00_2450 = BgL_arg2643z00_2448;
												BgL_offsetz00_2451 =
													(int) (BgL_objzd2classzd2numz00_2447);
												{	/* Cfa/specialize.scm 393 */
													long BgL_offsetz00_2452;

													BgL_offsetz00_2452 =
														((long) (BgL_offsetz00_2451) - OBJECT_TYPE);
													{	/* Cfa/specialize.scm 393 */
														long BgL_modz00_2453;

														{	/* Cfa/specialize.scm 393 */
															int BgL_arg2645z00_2454;

															BgL_arg2645z00_2454 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 393 */
																long BgL_auxz00_4181;

																BgL_auxz00_4181 = (long) (BgL_arg2645z00_2454);
																BgL_modz00_2453 =
																	(BgL_offsetz00_2452 / BgL_auxz00_4181);
														}}
														{	/* Cfa/specialize.scm 393 */
															long BgL_restz00_2455;

															{	/* Cfa/specialize.scm 393 */
																int BgL_arg2644z00_2456;

																BgL_arg2644z00_2456 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 393 */
																	long BgL_auxz00_4185;

																	BgL_auxz00_4185 =
																		(long) (BgL_arg2644z00_2456);
																	BgL_restz00_2455 =
																		(BgL_offsetz00_2452 % BgL_auxz00_4185);
															}}
															{	/* Cfa/specialize.scm 393 */

																BgL_method3572z00_2445 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2450,
																		(int) (BgL_modz00_2453)),
																	(int) (BgL_restz00_2455));
								}}}}}}}}
								BgL_arg3919z00_1686 =
									PROCEDURE_ENTRY(BgL_method3572z00_2445)
									(BgL_method3572z00_2445, (obj_t) (BgL_arg3920z00_1687), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_4195;

							BgL_auxz00_4195 = (BgL_nodez00_bglt) (BgL_arg3919z00_1686);
							((((BgL_failz00_bglt) CREF(BgL_nodez00_1680))->BgL_msgz00) =
								((BgL_nodez00_bglt) BgL_auxz00_4195), BUNSPEC);
					}}
					{	/* Cfa/specialize.scm 394 */
						obj_t BgL_arg3922z00_1688;

						{	/* Cfa/specialize.scm 394 */
							BgL_nodez00_bglt BgL_arg3923z00_1689;

							BgL_arg3923z00_1689 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1680))->BgL_objz00);
							{	/* Cfa/specialize.scm 394 */
								obj_t BgL_method3572z00_2474;

								{	/* Cfa/specialize.scm 394 */
									BgL_objectz00_bglt BgL_objz00_2475;

									BgL_objz00_2475 = (BgL_objectz00_bglt) (BgL_arg3923z00_1689);
									{	/* Cfa/specialize.scm 394 */
										long BgL_objzd2classzd2numz00_2476;

										BgL_objzd2classzd2numz00_2476 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2475);
										{	/* Cfa/specialize.scm 394 */
											obj_t BgL_arg2643z00_2477;

											BgL_arg2643z00_2477 =
												PROCEDURE_REF
												(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
												(int) (((long) 1)));
											{	/* Cfa/specialize.scm 394 */
												obj_t BgL_arrayz00_2479;

												int BgL_offsetz00_2480;

												BgL_arrayz00_2479 = BgL_arg2643z00_2477;
												BgL_offsetz00_2480 =
													(int) (BgL_objzd2classzd2numz00_2476);
												{	/* Cfa/specialize.scm 394 */
													long BgL_offsetz00_2481;

													BgL_offsetz00_2481 =
														((long) (BgL_offsetz00_2480) - OBJECT_TYPE);
													{	/* Cfa/specialize.scm 394 */
														long BgL_modz00_2482;

														{	/* Cfa/specialize.scm 394 */
															int BgL_arg2645z00_2483;

															BgL_arg2645z00_2483 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 394 */
																long BgL_auxz00_4207;

																BgL_auxz00_4207 = (long) (BgL_arg2645z00_2483);
																BgL_modz00_2482 =
																	(BgL_offsetz00_2481 / BgL_auxz00_4207);
														}}
														{	/* Cfa/specialize.scm 394 */
															long BgL_restz00_2484;

															{	/* Cfa/specialize.scm 394 */
																int BgL_arg2644z00_2485;

																BgL_arg2644z00_2485 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 394 */
																	long BgL_auxz00_4211;

																	BgL_auxz00_4211 =
																		(long) (BgL_arg2644z00_2485);
																	BgL_restz00_2484 =
																		(BgL_offsetz00_2481 % BgL_auxz00_4211);
															}}
															{	/* Cfa/specialize.scm 394 */

																BgL_method3572z00_2474 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2479,
																		(int) (BgL_modz00_2482)),
																	(int) (BgL_restz00_2484));
								}}}}}}}}
								BgL_arg3922z00_1688 =
									PROCEDURE_ENTRY(BgL_method3572z00_2474)
									(BgL_method3572z00_2474, (obj_t) (BgL_arg3923z00_1689), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_4221;

							BgL_auxz00_4221 = (BgL_nodez00_bglt) (BgL_arg3922z00_1688);
							((((BgL_failz00_bglt) CREF(BgL_nodez00_1680))->BgL_objz00) =
								((BgL_nodez00_bglt) BgL_auxz00_4221), BUNSPEC);
					}}
					BgL_auxz00_4145 = BgL_nodez00_1680;
					return (obj_t) (BgL_auxz00_4145);
				}
			}
		}
	}



/* patch!-conditional3594 */
	obj_t BGl_patchz12zd2conditional3594zc0zzcfa_specializa7eza7(obj_t
		BgL_envz00_3019, obj_t BgL_nodez00_3020)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 380 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1668;

				{	/* Cfa/specialize.scm 381 */
					BgL_conditionalz00_bglt BgL_auxz00_4226;

					BgL_nodez00_1668 = (BgL_conditionalz00_bglt) (BgL_nodez00_3020);
					{	/* Cfa/specialize.scm 382 */
						obj_t BgL_arg3910z00_1672;

						{	/* Cfa/specialize.scm 382 */
							BgL_nodez00_bglt BgL_arg3911z00_1673;

							BgL_arg3911z00_1673 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1668))->
								BgL_testz00);
							{	/* Cfa/specialize.scm 382 */
								obj_t BgL_method3572z00_2329;

								{	/* Cfa/specialize.scm 382 */
									BgL_objectz00_bglt BgL_objz00_2330;

									BgL_objz00_2330 = (BgL_objectz00_bglt) (BgL_arg3911z00_1673);
									{	/* Cfa/specialize.scm 382 */
										long BgL_objzd2classzd2numz00_2331;

										BgL_objzd2classzd2numz00_2331 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2330);
										{	/* Cfa/specialize.scm 382 */
											obj_t BgL_arg2643z00_2332;

											BgL_arg2643z00_2332 =
												PROCEDURE_REF
												(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
												(int) (((long) 1)));
											{	/* Cfa/specialize.scm 382 */
												obj_t BgL_arrayz00_2334;

												int BgL_offsetz00_2335;

												BgL_arrayz00_2334 = BgL_arg2643z00_2332;
												BgL_offsetz00_2335 =
													(int) (BgL_objzd2classzd2numz00_2331);
												{	/* Cfa/specialize.scm 382 */
													long BgL_offsetz00_2336;

													BgL_offsetz00_2336 =
														((long) (BgL_offsetz00_2335) - OBJECT_TYPE);
													{	/* Cfa/specialize.scm 382 */
														long BgL_modz00_2337;

														{	/* Cfa/specialize.scm 382 */
															int BgL_arg2645z00_2338;

															BgL_arg2645z00_2338 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 382 */
																long BgL_auxz00_4236;

																BgL_auxz00_4236 = (long) (BgL_arg2645z00_2338);
																BgL_modz00_2337 =
																	(BgL_offsetz00_2336 / BgL_auxz00_4236);
														}}
														{	/* Cfa/specialize.scm 382 */
															long BgL_restz00_2339;

															{	/* Cfa/specialize.scm 382 */
																int BgL_arg2644z00_2340;

																BgL_arg2644z00_2340 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 382 */
																	long BgL_auxz00_4240;

																	BgL_auxz00_4240 =
																		(long) (BgL_arg2644z00_2340);
																	BgL_restz00_2339 =
																		(BgL_offsetz00_2336 % BgL_auxz00_4240);
															}}
															{	/* Cfa/specialize.scm 382 */

																BgL_method3572z00_2329 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2334,
																		(int) (BgL_modz00_2337)),
																	(int) (BgL_restz00_2339));
								}}}}}}}}
								BgL_arg3910z00_1672 =
									PROCEDURE_ENTRY(BgL_method3572z00_2329)
									(BgL_method3572z00_2329, (obj_t) (BgL_arg3911z00_1673), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_4250;

							BgL_auxz00_4250 = (BgL_nodez00_bglt) (BgL_arg3910z00_1672);
							((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1668))->
									BgL_testz00) = ((BgL_nodez00_bglt) BgL_auxz00_4250), BUNSPEC);
					}}
					{	/* Cfa/specialize.scm 383 */
						obj_t BgL_arg3912z00_1674;

						{	/* Cfa/specialize.scm 383 */
							BgL_nodez00_bglt BgL_arg3913z00_1675;

							BgL_arg3913z00_1675 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1668))->
								BgL_truez00);
							{	/* Cfa/specialize.scm 383 */
								obj_t BgL_method3572z00_2358;

								{	/* Cfa/specialize.scm 383 */
									BgL_objectz00_bglt BgL_objz00_2359;

									BgL_objz00_2359 = (BgL_objectz00_bglt) (BgL_arg3913z00_1675);
									{	/* Cfa/specialize.scm 383 */
										long BgL_objzd2classzd2numz00_2360;

										BgL_objzd2classzd2numz00_2360 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2359);
										{	/* Cfa/specialize.scm 383 */
											obj_t BgL_arg2643z00_2361;

											BgL_arg2643z00_2361 =
												PROCEDURE_REF
												(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
												(int) (((long) 1)));
											{	/* Cfa/specialize.scm 383 */
												obj_t BgL_arrayz00_2363;

												int BgL_offsetz00_2364;

												BgL_arrayz00_2363 = BgL_arg2643z00_2361;
												BgL_offsetz00_2364 =
													(int) (BgL_objzd2classzd2numz00_2360);
												{	/* Cfa/specialize.scm 383 */
													long BgL_offsetz00_2365;

													BgL_offsetz00_2365 =
														((long) (BgL_offsetz00_2364) - OBJECT_TYPE);
													{	/* Cfa/specialize.scm 383 */
														long BgL_modz00_2366;

														{	/* Cfa/specialize.scm 383 */
															int BgL_arg2645z00_2367;

															BgL_arg2645z00_2367 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 383 */
																long BgL_auxz00_4262;

																BgL_auxz00_4262 = (long) (BgL_arg2645z00_2367);
																BgL_modz00_2366 =
																	(BgL_offsetz00_2365 / BgL_auxz00_4262);
														}}
														{	/* Cfa/specialize.scm 383 */
															long BgL_restz00_2368;

															{	/* Cfa/specialize.scm 383 */
																int BgL_arg2644z00_2369;

																BgL_arg2644z00_2369 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 383 */
																	long BgL_auxz00_4266;

																	BgL_auxz00_4266 =
																		(long) (BgL_arg2644z00_2369);
																	BgL_restz00_2368 =
																		(BgL_offsetz00_2365 % BgL_auxz00_4266);
															}}
															{	/* Cfa/specialize.scm 383 */

																BgL_method3572z00_2358 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2363,
																		(int) (BgL_modz00_2366)),
																	(int) (BgL_restz00_2368));
								}}}}}}}}
								BgL_arg3912z00_1674 =
									PROCEDURE_ENTRY(BgL_method3572z00_2358)
									(BgL_method3572z00_2358, (obj_t) (BgL_arg3913z00_1675), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_4276;

							BgL_auxz00_4276 = (BgL_nodez00_bglt) (BgL_arg3912z00_1674);
							((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1668))->
									BgL_truez00) = ((BgL_nodez00_bglt) BgL_auxz00_4276), BUNSPEC);
					}}
					{	/* Cfa/specialize.scm 384 */
						obj_t BgL_arg3914z00_1676;

						{	/* Cfa/specialize.scm 384 */
							BgL_nodez00_bglt BgL_arg3915z00_1677;

							BgL_arg3915z00_1677 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1668))->
								BgL_falsez00);
							{	/* Cfa/specialize.scm 384 */
								obj_t BgL_method3572z00_2387;

								{	/* Cfa/specialize.scm 384 */
									BgL_objectz00_bglt BgL_objz00_2388;

									BgL_objz00_2388 = (BgL_objectz00_bglt) (BgL_arg3915z00_1677);
									{	/* Cfa/specialize.scm 384 */
										long BgL_objzd2classzd2numz00_2389;

										BgL_objzd2classzd2numz00_2389 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2388);
										{	/* Cfa/specialize.scm 384 */
											obj_t BgL_arg2643z00_2390;

											BgL_arg2643z00_2390 =
												PROCEDURE_REF
												(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
												(int) (((long) 1)));
											{	/* Cfa/specialize.scm 384 */
												obj_t BgL_arrayz00_2392;

												int BgL_offsetz00_2393;

												BgL_arrayz00_2392 = BgL_arg2643z00_2390;
												BgL_offsetz00_2393 =
													(int) (BgL_objzd2classzd2numz00_2389);
												{	/* Cfa/specialize.scm 384 */
													long BgL_offsetz00_2394;

													BgL_offsetz00_2394 =
														((long) (BgL_offsetz00_2393) - OBJECT_TYPE);
													{	/* Cfa/specialize.scm 384 */
														long BgL_modz00_2395;

														{	/* Cfa/specialize.scm 384 */
															int BgL_arg2645z00_2396;

															BgL_arg2645z00_2396 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 384 */
																long BgL_auxz00_4288;

																BgL_auxz00_4288 = (long) (BgL_arg2645z00_2396);
																BgL_modz00_2395 =
																	(BgL_offsetz00_2394 / BgL_auxz00_4288);
														}}
														{	/* Cfa/specialize.scm 384 */
															long BgL_restz00_2397;

															{	/* Cfa/specialize.scm 384 */
																int BgL_arg2644z00_2398;

																BgL_arg2644z00_2398 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 384 */
																	long BgL_auxz00_4292;

																	BgL_auxz00_4292 =
																		(long) (BgL_arg2644z00_2398);
																	BgL_restz00_2397 =
																		(BgL_offsetz00_2394 % BgL_auxz00_4292);
															}}
															{	/* Cfa/specialize.scm 384 */

																BgL_method3572z00_2387 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2392,
																		(int) (BgL_modz00_2395)),
																	(int) (BgL_restz00_2397));
								}}}}}}}}
								BgL_arg3914z00_1676 =
									PROCEDURE_ENTRY(BgL_method3572z00_2387)
									(BgL_method3572z00_2387, (obj_t) (BgL_arg3915z00_1677), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_4302;

							BgL_auxz00_4302 = (BgL_nodez00_bglt) (BgL_arg3914z00_1676);
							((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1668))->
									BgL_falsez00) =
								((BgL_nodez00_bglt) BgL_auxz00_4302), BUNSPEC);
					}}
					BgL_auxz00_4226 = BgL_nodez00_1668;
					return (obj_t) (BgL_auxz00_4226);
				}
			}
		}
	}



/* patch!-setq3592 */
	obj_t BGl_patchz12zd2setq3592zc0zzcfa_specializa7eza7(obj_t BgL_envz00_3021,
		obj_t BgL_nodez00_3022)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 371 */
			{
				BgL_setqz00_bglt BgL_nodez00_1658;

				{	/* Cfa/specialize.scm 372 */
					BgL_setqz00_bglt BgL_auxz00_4307;

					BgL_nodez00_1658 = (BgL_setqz00_bglt) (BgL_nodez00_3022);
					{	/* Cfa/specialize.scm 373 */
						obj_t BgL_arg3904z00_1662;

						{	/* Cfa/specialize.scm 373 */
							BgL_nodez00_bglt BgL_arg3905z00_1663;

							BgL_arg3905z00_1663 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1658))->BgL_valuez00);
							{	/* Cfa/specialize.scm 373 */
								obj_t BgL_method3572z00_2271;

								{	/* Cfa/specialize.scm 373 */
									BgL_objectz00_bglt BgL_objz00_2272;

									BgL_objz00_2272 = (BgL_objectz00_bglt) (BgL_arg3905z00_1663);
									{	/* Cfa/specialize.scm 373 */
										long BgL_objzd2classzd2numz00_2273;

										BgL_objzd2classzd2numz00_2273 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2272);
										{	/* Cfa/specialize.scm 373 */
											obj_t BgL_arg2643z00_2274;

											BgL_arg2643z00_2274 =
												PROCEDURE_REF
												(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
												(int) (((long) 1)));
											{	/* Cfa/specialize.scm 373 */
												obj_t BgL_arrayz00_2276;

												int BgL_offsetz00_2277;

												BgL_arrayz00_2276 = BgL_arg2643z00_2274;
												BgL_offsetz00_2277 =
													(int) (BgL_objzd2classzd2numz00_2273);
												{	/* Cfa/specialize.scm 373 */
													long BgL_offsetz00_2278;

													BgL_offsetz00_2278 =
														((long) (BgL_offsetz00_2277) - OBJECT_TYPE);
													{	/* Cfa/specialize.scm 373 */
														long BgL_modz00_2279;

														{	/* Cfa/specialize.scm 373 */
															int BgL_arg2645z00_2280;

															BgL_arg2645z00_2280 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 373 */
																long BgL_auxz00_4317;

																BgL_auxz00_4317 = (long) (BgL_arg2645z00_2280);
																BgL_modz00_2279 =
																	(BgL_offsetz00_2278 / BgL_auxz00_4317);
														}}
														{	/* Cfa/specialize.scm 373 */
															long BgL_restz00_2281;

															{	/* Cfa/specialize.scm 373 */
																int BgL_arg2644z00_2282;

																BgL_arg2644z00_2282 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 373 */
																	long BgL_auxz00_4321;

																	BgL_auxz00_4321 =
																		(long) (BgL_arg2644z00_2282);
																	BgL_restz00_2281 =
																		(BgL_offsetz00_2278 % BgL_auxz00_4321);
															}}
															{	/* Cfa/specialize.scm 373 */

																BgL_method3572z00_2271 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2276,
																		(int) (BgL_modz00_2279)),
																	(int) (BgL_restz00_2281));
								}}}}}}}}
								BgL_arg3904z00_1662 =
									PROCEDURE_ENTRY(BgL_method3572z00_2271)
									(BgL_method3572z00_2271, (obj_t) (BgL_arg3905z00_1663), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_4331;

							BgL_auxz00_4331 = (BgL_nodez00_bglt) (BgL_arg3904z00_1662);
							((((BgL_setqz00_bglt) CREF(BgL_nodez00_1658))->BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_auxz00_4331), BUNSPEC);
					}}
					{	/* Cfa/specialize.scm 374 */
						obj_t BgL_arg3906z00_1664;

						{	/* Cfa/specialize.scm 374 */
							BgL_varz00_bglt BgL_arg3908z00_1665;

							BgL_arg3908z00_1665 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1658))->BgL_varz00);
							{	/* Cfa/specialize.scm 374 */
								BgL_nodez00_bglt BgL_nodez00_2299;

								BgL_nodez00_2299 = (BgL_nodez00_bglt) (BgL_arg3908z00_1665);
								{	/* Cfa/specialize.scm 374 */
									obj_t BgL_method3572z00_2300;

									{	/* Cfa/specialize.scm 374 */
										BgL_objectz00_bglt BgL_objz00_2301;

										BgL_objz00_2301 = (BgL_objectz00_bglt) (BgL_nodez00_2299);
										{	/* Cfa/specialize.scm 374 */
											long BgL_objzd2classzd2numz00_2302;

											BgL_objzd2classzd2numz00_2302 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2301);
											{	/* Cfa/specialize.scm 374 */
												obj_t BgL_arg2643z00_2303;

												BgL_arg2643z00_2303 =
													PROCEDURE_REF
													(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
													(int) (((long) 1)));
												{	/* Cfa/specialize.scm 374 */
													obj_t BgL_arrayz00_2305;

													int BgL_offsetz00_2306;

													BgL_arrayz00_2305 = BgL_arg2643z00_2303;
													BgL_offsetz00_2306 =
														(int) (BgL_objzd2classzd2numz00_2302);
													{	/* Cfa/specialize.scm 374 */
														long BgL_offsetz00_2307;

														BgL_offsetz00_2307 =
															((long) (BgL_offsetz00_2306) - OBJECT_TYPE);
														{	/* Cfa/specialize.scm 374 */
															long BgL_modz00_2308;

															{	/* Cfa/specialize.scm 374 */
																int BgL_arg2645z00_2309;

																BgL_arg2645z00_2309 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 374 */
																	long BgL_auxz00_4344;

																	BgL_auxz00_4344 =
																		(long) (BgL_arg2645z00_2309);
																	BgL_modz00_2308 =
																		(BgL_offsetz00_2307 / BgL_auxz00_4344);
															}}
															{	/* Cfa/specialize.scm 374 */
																long BgL_restz00_2310;

																{	/* Cfa/specialize.scm 374 */
																	int BgL_arg2644z00_2311;

																	BgL_arg2644z00_2311 = (int) (((long) 16));
																	{	/* Cfa/specialize.scm 374 */
																		long BgL_auxz00_4348;

																		BgL_auxz00_4348 =
																			(long) (BgL_arg2644z00_2311);
																		BgL_restz00_2310 =
																			(BgL_offsetz00_2307 % BgL_auxz00_4348);
																}}
																{	/* Cfa/specialize.scm 374 */

																	BgL_method3572z00_2300 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2305,
																			(int) (BgL_modz00_2308)),
																		(int) (BgL_restz00_2310));
									}}}}}}}}
									BgL_arg3906z00_1664 =
										PROCEDURE_ENTRY(BgL_method3572z00_2300)
										(BgL_method3572z00_2300, (obj_t) (BgL_nodez00_2299), BEOA);
						}}}
						{
							BgL_varz00_bglt BgL_auxz00_4358;

							BgL_auxz00_4358 = (BgL_varz00_bglt) (BgL_arg3906z00_1664);
							((((BgL_setqz00_bglt) CREF(BgL_nodez00_1658))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_4358), BUNSPEC);
					}}
					BgL_auxz00_4307 = BgL_nodez00_1658;
					return (obj_t) (BgL_auxz00_4307);
				}
			}
		}
	}



/* patch!-cast3590 */
	obj_t BGl_patchz12zd2cast3590zc0zzcfa_specializa7eza7(obj_t BgL_envz00_3023,
		obj_t BgL_nodez00_3024)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 363 */
			{
				BgL_castz00_bglt BgL_nodez00_1651;

				{	/* Cfa/specialize.scm 364 */
					BgL_castz00_bglt BgL_auxz00_4363;

					BgL_nodez00_1651 = (BgL_castz00_bglt) (BgL_nodez00_3024);
					{	/* Cfa/specialize.scm 364 */
						BgL_nodez00_bglt BgL_arg3902z00_2241;

						BgL_arg3902z00_2241 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1651))->BgL_argz00);
						{	/* Cfa/specialize.scm 364 */
							obj_t BgL_method3572z00_2244;

							{	/* Cfa/specialize.scm 364 */
								BgL_objectz00_bglt BgL_objz00_2245;

								BgL_objz00_2245 = (BgL_objectz00_bglt) (BgL_arg3902z00_2241);
								{	/* Cfa/specialize.scm 364 */
									long BgL_objzd2classzd2numz00_2246;

									BgL_objzd2classzd2numz00_2246 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2245);
									{	/* Cfa/specialize.scm 364 */
										obj_t BgL_arg2643z00_2247;

										BgL_arg2643z00_2247 =
											PROCEDURE_REF(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
											(int) (((long) 1)));
										{	/* Cfa/specialize.scm 364 */
											obj_t BgL_arrayz00_2249;

											int BgL_offsetz00_2250;

											BgL_arrayz00_2249 = BgL_arg2643z00_2247;
											BgL_offsetz00_2250 =
												(int) (BgL_objzd2classzd2numz00_2246);
											{	/* Cfa/specialize.scm 364 */
												long BgL_offsetz00_2251;

												BgL_offsetz00_2251 =
													((long) (BgL_offsetz00_2250) - OBJECT_TYPE);
												{	/* Cfa/specialize.scm 364 */
													long BgL_modz00_2252;

													{	/* Cfa/specialize.scm 364 */
														int BgL_arg2645z00_2253;

														BgL_arg2645z00_2253 = (int) (((long) 16));
														{	/* Cfa/specialize.scm 364 */
															long BgL_auxz00_4373;

															BgL_auxz00_4373 = (long) (BgL_arg2645z00_2253);
															BgL_modz00_2252 =
																(BgL_offsetz00_2251 / BgL_auxz00_4373);
													}}
													{	/* Cfa/specialize.scm 364 */
														long BgL_restz00_2254;

														{	/* Cfa/specialize.scm 364 */
															int BgL_arg2644z00_2255;

															BgL_arg2644z00_2255 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 364 */
																long BgL_auxz00_4377;

																BgL_auxz00_4377 = (long) (BgL_arg2644z00_2255);
																BgL_restz00_2254 =
																	(BgL_offsetz00_2251 % BgL_auxz00_4377);
														}}
														{	/* Cfa/specialize.scm 364 */

															BgL_method3572z00_2244 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2249,
																	(int) (BgL_modz00_2252)),
																(int) (BgL_restz00_2254));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3572z00_2244) (BgL_method3572z00_2244,
								(obj_t) (BgL_arg3902z00_2241), BEOA);
					}}
					BgL_auxz00_4363 = BgL_nodez00_1651;
					return (obj_t) (BgL_auxz00_4363);
				}
			}
		}
	}



/* patch!-extern3588 */
	obj_t BGl_patchz12zd2extern3588zc0zzcfa_specializa7eza7(obj_t BgL_envz00_3025,
		obj_t BgL_nodez00_3026)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 355 */
			{
				BgL_externz00_bglt BgL_nodez00_1644;

				{	/* Cfa/specialize.scm 356 */
					BgL_externz00_bglt BgL_auxz00_4389;

					BgL_nodez00_1644 = (BgL_externz00_bglt) (BgL_nodez00_3026);
					{	/* Cfa/specialize.scm 356 */
						obj_t BgL_arg3900z00_2238;

						BgL_arg3900z00_2238 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1644))->BgL_exprza2za2);
						BGl_patchza2z12zb0zzcfa_specializa7eza7(BgL_arg3900z00_2238);
					}
					BgL_auxz00_4389 = BgL_nodez00_1644;
					return (obj_t) (BgL_auxz00_4389);
				}
			}
		}
	}



/* patch!-funcall3586 */
	obj_t BGl_patchz12zd2funcall3586zc0zzcfa_specializa7eza7(obj_t
		BgL_envz00_3027, obj_t BgL_nodez00_3028)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 346 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1635;

				{	/* Cfa/specialize.scm 347 */
					BgL_funcallz00_bglt BgL_auxz00_4394;

					BgL_nodez00_1635 = (BgL_funcallz00_bglt) (BgL_nodez00_3028);
					{	/* Cfa/specialize.scm 348 */
						obj_t BgL_arg3896z00_1639;

						{	/* Cfa/specialize.scm 348 */
							BgL_nodez00_bglt BgL_arg3897z00_1640;

							BgL_arg3897z00_1640 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1635))->BgL_funz00);
							{	/* Cfa/specialize.scm 348 */
								obj_t BgL_method3572z00_2209;

								{	/* Cfa/specialize.scm 348 */
									BgL_objectz00_bglt BgL_objz00_2210;

									BgL_objz00_2210 = (BgL_objectz00_bglt) (BgL_arg3897z00_1640);
									{	/* Cfa/specialize.scm 348 */
										long BgL_objzd2classzd2numz00_2211;

										BgL_objzd2classzd2numz00_2211 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2210);
										{	/* Cfa/specialize.scm 348 */
											obj_t BgL_arg2643z00_2212;

											BgL_arg2643z00_2212 =
												PROCEDURE_REF
												(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
												(int) (((long) 1)));
											{	/* Cfa/specialize.scm 348 */
												obj_t BgL_arrayz00_2214;

												int BgL_offsetz00_2215;

												BgL_arrayz00_2214 = BgL_arg2643z00_2212;
												BgL_offsetz00_2215 =
													(int) (BgL_objzd2classzd2numz00_2211);
												{	/* Cfa/specialize.scm 348 */
													long BgL_offsetz00_2216;

													BgL_offsetz00_2216 =
														((long) (BgL_offsetz00_2215) - OBJECT_TYPE);
													{	/* Cfa/specialize.scm 348 */
														long BgL_modz00_2217;

														{	/* Cfa/specialize.scm 348 */
															int BgL_arg2645z00_2218;

															BgL_arg2645z00_2218 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 348 */
																long BgL_auxz00_4404;

																BgL_auxz00_4404 = (long) (BgL_arg2645z00_2218);
																BgL_modz00_2217 =
																	(BgL_offsetz00_2216 / BgL_auxz00_4404);
														}}
														{	/* Cfa/specialize.scm 348 */
															long BgL_restz00_2219;

															{	/* Cfa/specialize.scm 348 */
																int BgL_arg2644z00_2220;

																BgL_arg2644z00_2220 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 348 */
																	long BgL_auxz00_4408;

																	BgL_auxz00_4408 =
																		(long) (BgL_arg2644z00_2220);
																	BgL_restz00_2219 =
																		(BgL_offsetz00_2216 % BgL_auxz00_4408);
															}}
															{	/* Cfa/specialize.scm 348 */

																BgL_method3572z00_2209 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2214,
																		(int) (BgL_modz00_2217)),
																	(int) (BgL_restz00_2219));
								}}}}}}}}
								BgL_arg3896z00_1639 =
									PROCEDURE_ENTRY(BgL_method3572z00_2209)
									(BgL_method3572z00_2209, (obj_t) (BgL_arg3897z00_1640), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_4418;

							BgL_auxz00_4418 = (BgL_nodez00_bglt) (BgL_arg3896z00_1639);
							((((BgL_funcallz00_bglt) CREF(BgL_nodez00_1635))->BgL_funz00) =
								((BgL_nodez00_bglt) BgL_auxz00_4418), BUNSPEC);
					}}
					{	/* Cfa/specialize.scm 349 */
						obj_t BgL_arg3898z00_1641;

						BgL_arg3898z00_1641 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1635))->BgL_argsz00);
						BGl_patchza2z12zb0zzcfa_specializa7eza7(BgL_arg3898z00_1641);
					}
					BgL_auxz00_4394 = BgL_nodez00_1635;
					return (obj_t) (BgL_auxz00_4394);
				}
			}
		}
	}



/* patch!-app-ly3584 */
	obj_t BGl_patchz12zd2appzd2ly3584z12zzcfa_specializa7eza7(obj_t
		BgL_envz00_3029, obj_t BgL_nodez00_3030)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 337 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1625;

				{	/* Cfa/specialize.scm 338 */
					BgL_appzd2lyzd2_bglt BgL_auxz00_4425;

					BgL_nodez00_1625 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_3030);
					{	/* Cfa/specialize.scm 339 */
						obj_t BgL_arg3891z00_1629;

						{	/* Cfa/specialize.scm 339 */
							BgL_nodez00_bglt BgL_arg3892z00_1630;

							BgL_arg3892z00_1630 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1625))->BgL_funz00);
							{	/* Cfa/specialize.scm 339 */
								obj_t BgL_method3572z00_2151;

								{	/* Cfa/specialize.scm 339 */
									BgL_objectz00_bglt BgL_objz00_2152;

									BgL_objz00_2152 = (BgL_objectz00_bglt) (BgL_arg3892z00_1630);
									{	/* Cfa/specialize.scm 339 */
										long BgL_objzd2classzd2numz00_2153;

										BgL_objzd2classzd2numz00_2153 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2152);
										{	/* Cfa/specialize.scm 339 */
											obj_t BgL_arg2643z00_2154;

											BgL_arg2643z00_2154 =
												PROCEDURE_REF
												(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
												(int) (((long) 1)));
											{	/* Cfa/specialize.scm 339 */
												obj_t BgL_arrayz00_2156;

												int BgL_offsetz00_2157;

												BgL_arrayz00_2156 = BgL_arg2643z00_2154;
												BgL_offsetz00_2157 =
													(int) (BgL_objzd2classzd2numz00_2153);
												{	/* Cfa/specialize.scm 339 */
													long BgL_offsetz00_2158;

													BgL_offsetz00_2158 =
														((long) (BgL_offsetz00_2157) - OBJECT_TYPE);
													{	/* Cfa/specialize.scm 339 */
														long BgL_modz00_2159;

														{	/* Cfa/specialize.scm 339 */
															int BgL_arg2645z00_2160;

															BgL_arg2645z00_2160 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 339 */
																long BgL_auxz00_4435;

																BgL_auxz00_4435 = (long) (BgL_arg2645z00_2160);
																BgL_modz00_2159 =
																	(BgL_offsetz00_2158 / BgL_auxz00_4435);
														}}
														{	/* Cfa/specialize.scm 339 */
															long BgL_restz00_2161;

															{	/* Cfa/specialize.scm 339 */
																int BgL_arg2644z00_2162;

																BgL_arg2644z00_2162 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 339 */
																	long BgL_auxz00_4439;

																	BgL_auxz00_4439 =
																		(long) (BgL_arg2644z00_2162);
																	BgL_restz00_2161 =
																		(BgL_offsetz00_2158 % BgL_auxz00_4439);
															}}
															{	/* Cfa/specialize.scm 339 */

																BgL_method3572z00_2151 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2156,
																		(int) (BgL_modz00_2159)),
																	(int) (BgL_restz00_2161));
								}}}}}}}}
								BgL_arg3891z00_1629 =
									PROCEDURE_ENTRY(BgL_method3572z00_2151)
									(BgL_method3572z00_2151, (obj_t) (BgL_arg3892z00_1630), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_4449;

							BgL_auxz00_4449 = (BgL_nodez00_bglt) (BgL_arg3891z00_1629);
							((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1625))->BgL_funz00) =
								((BgL_nodez00_bglt) BgL_auxz00_4449), BUNSPEC);
					}}
					{	/* Cfa/specialize.scm 340 */
						obj_t BgL_arg3893z00_1631;

						{	/* Cfa/specialize.scm 340 */
							BgL_nodez00_bglt BgL_arg3894z00_1632;

							BgL_arg3894z00_1632 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1625))->BgL_argz00);
							{	/* Cfa/specialize.scm 340 */
								obj_t BgL_method3572z00_2180;

								{	/* Cfa/specialize.scm 340 */
									BgL_objectz00_bglt BgL_objz00_2181;

									BgL_objz00_2181 = (BgL_objectz00_bglt) (BgL_arg3894z00_1632);
									{	/* Cfa/specialize.scm 340 */
										long BgL_objzd2classzd2numz00_2182;

										BgL_objzd2classzd2numz00_2182 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2181);
										{	/* Cfa/specialize.scm 340 */
											obj_t BgL_arg2643z00_2183;

											BgL_arg2643z00_2183 =
												PROCEDURE_REF
												(BGl_patchz12zd2envzc0zzcfa_specializa7eza7,
												(int) (((long) 1)));
											{	/* Cfa/specialize.scm 340 */
												obj_t BgL_arrayz00_2185;

												int BgL_offsetz00_2186;

												BgL_arrayz00_2185 = BgL_arg2643z00_2183;
												BgL_offsetz00_2186 =
													(int) (BgL_objzd2classzd2numz00_2182);
												{	/* Cfa/specialize.scm 340 */
													long BgL_offsetz00_2187;

													BgL_offsetz00_2187 =
														((long) (BgL_offsetz00_2186) - OBJECT_TYPE);
													{	/* Cfa/specialize.scm 340 */
														long BgL_modz00_2188;

														{	/* Cfa/specialize.scm 340 */
															int BgL_arg2645z00_2189;

															BgL_arg2645z00_2189 = (int) (((long) 16));
															{	/* Cfa/specialize.scm 340 */
																long BgL_auxz00_4461;

																BgL_auxz00_4461 = (long) (BgL_arg2645z00_2189);
																BgL_modz00_2188 =
																	(BgL_offsetz00_2187 / BgL_auxz00_4461);
														}}
														{	/* Cfa/specialize.scm 340 */
															long BgL_restz00_2190;

															{	/* Cfa/specialize.scm 340 */
																int BgL_arg2644z00_2191;

																BgL_arg2644z00_2191 = (int) (((long) 16));
																{	/* Cfa/specialize.scm 340 */
																	long BgL_auxz00_4465;

																	BgL_auxz00_4465 =
																		(long) (BgL_arg2644z00_2191);
																	BgL_restz00_2190 =
																		(BgL_offsetz00_2187 % BgL_auxz00_4465);
															}}
															{	/* Cfa/specialize.scm 340 */

																BgL_method3572z00_2180 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2185,
																		(int) (BgL_modz00_2188)),
																	(int) (BgL_restz00_2190));
								}}}}}}}}
								BgL_arg3893z00_1631 =
									PROCEDURE_ENTRY(BgL_method3572z00_2180)
									(BgL_method3572z00_2180, (obj_t) (BgL_arg3894z00_1632), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_4475;

							BgL_auxz00_4475 = (BgL_nodez00_bglt) (BgL_arg3893z00_1631);
							((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1625))->BgL_argz00) =
								((BgL_nodez00_bglt) BgL_auxz00_4475), BUNSPEC);
					}}
					BgL_auxz00_4425 = BgL_nodez00_1625;
					return (obj_t) (BgL_auxz00_4425);
				}
			}
		}
	}



/* patch!-sequence3582 */
	obj_t BGl_patchz12zd2sequence3582zc0zzcfa_specializa7eza7(obj_t
		BgL_envz00_3031, obj_t BgL_nodez00_3032)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 329 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1618;

				{	/* Cfa/specialize.scm 330 */
					BgL_sequencez00_bglt BgL_auxz00_4480;

					BgL_nodez00_1618 = (BgL_sequencez00_bglt) (BgL_nodez00_3032);
					{	/* Cfa/specialize.scm 330 */
						obj_t BgL_arg3889z00_2147;

						BgL_arg3889z00_2147 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1618))->BgL_nodesz00);
						BGl_patchza2z12zb0zzcfa_specializa7eza7(BgL_arg3889z00_2147);
					}
					BgL_auxz00_4480 = BgL_nodez00_1618;
					return (obj_t) (BgL_auxz00_4480);
				}
			}
		}
	}



/* patch!-closure3580 */
	obj_t BGl_patchz12zd2closure3580zc0zzcfa_specializa7eza7(obj_t
		BgL_envz00_3033, obj_t BgL_nodez00_3034)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 323 */
			{
				BgL_closurez00_bglt BgL_nodez00_1610;

				BgL_nodez00_1610 = (BgL_closurez00_bglt) (BgL_nodez00_3034);
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string4070z00zzcfa_specializa7eza7,
					BGl_string4097z00zzcfa_specializa7eza7,
					BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_1610)));
			}
		}
	}



/* patch!-var3578 */
	obj_t BGl_patchz12zd2var3578zc0zzcfa_specializa7eza7(obj_t BgL_envz00_3035,
		obj_t BgL_nodez00_3036)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 317 */
			return (obj_t) ((BgL_varz00_bglt) (BgL_nodez00_3036));
		}
	}



/* patch!-kwote3576 */
	obj_t BGl_patchz12zd2kwote3576zc0zzcfa_specializa7eza7(obj_t BgL_envz00_3037,
		obj_t BgL_nodez00_3038)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 311 */
			return (obj_t) ((BgL_kwotez00_bglt) (BgL_nodez00_3038));
		}
	}



/* patch!-atom3574 */
	obj_t BGl_patchz12zd2atom3574zc0zzcfa_specializa7eza7(obj_t BgL_envz00_3039,
		obj_t BgL_nodez00_3040)
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 305 */
			return (obj_t) ((BgL_atomz00_bglt) (BgL_nodez00_3040));
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_specializa7eza7()
	{
		AN_OBJECT;
		{	/* Cfa/specialize.scm 19 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4098z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4098z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4098z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4098z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 341705556),
				BSTRING_TO_STRING(BGl_string4098z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4098z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string4098z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4098z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string4098z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4098z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4098z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string4098z00zzcfa_specializa7eza7));
			BGl_modulezd2initializa7ationz75zzinline_inlinez00(((long) 326457085),
				BSTRING_TO_STRING(BGl_string4098z00zzcfa_specializa7eza7));
			return
				BGl_modulezd2initializa7ationz75zzinline_walkz00(((long) 175384950),
				BSTRING_TO_STRING(BGl_string4098z00zzcfa_specializa7eza7));
		}
	}

#ifdef __cplusplus
}
#endif
