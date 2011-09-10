/*===========================================================================*/
/*   (Dataflow/walk.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Dataflow/walk.scm)*/
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

	typedef struct BgL_isaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		struct BgL_typez00_bgl *BgL_classz00;
	}             *BgL_isaz00_bglt;

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

	typedef struct BgL_localzf2valuezf2_bgl
	{
		int BgL_stampz00;
		struct BgL_nodez00_bgl *BgL_nodez00;
	}                       *BgL_localzf2valuezf2_bglt;


	static obj_t BGl_objectzd2ze3structzd2local3595ze3zzdataflow_walkz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_dataflowzd2nodez12zd2makezd23558zc0zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec3597z83zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl__abortzf3zf3zzdataflow_walkz00(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl__dataflowzd2testzd2envzd2de3564zd2zzdataflow_walkz00(obj_t,
		obj_t);
	static obj_t BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(BgL_nodez00_bglt,
		obj_t);
	static obj_t BGl__abortzf3zd2default3576z21zzdataflow_walkz00(obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_nodezd2nilzd2zzast_nodez00();
	static obj_t BGl_zc3anonymousza33772ze3z83zzdataflow_walkz00(obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_dataflowzd2nodez12zd2jumpzd23556zc0zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzdataflow_walkz00();
	static obj_t BGl_dataflowzd2nodez12zd2fail3546z12zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	extern BgL_valuez00_bglt BGl_valuezd2nilzd2zzast_varz00();
	static obj_t BGl_dataflowzd2nodez12zd2var3530z12zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_dataflowzd2nodez12zd2boxzd2s3563zc0zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_dataflowzd2testzd2envz00zzdataflow_walkz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t BGl_dataflowzd2nodez12zd2exter3540z12zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzdataflow_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_feffectz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_spreadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_cgraphz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
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
	static obj_t BGl_toplevelzd2initzd2zzdataflow_walkz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_abortzf3zf3zzdataflow_walkz00(BgL_nodez00_bglt);
	static obj_t BGl_abortzf3zd2funcall3591z21zzdataflow_walkz00(obj_t, obj_t);
	static obj_t BGl_dataflowzd2nodez12zd2letzd2f3550zc0zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dataflowzd2walkz12zc0zzdataflow_walkz00(obj_t,
		obj_t);
	static obj_t BGl__dataflowzd2testzd2envz00zzdataflow_walkz00(obj_t, obj_t);
	static obj_t BGl_abortzf3zd2fail3579z21zzdataflow_walkz00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static obj_t BGl_dataflowzd2nodez12zd2appzd2l3536zc0zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__localzf2valuezd2nilz20zzdataflow_walkz00(obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_abortzf3zd2conditional3587z21zzdataflow_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_dataflowzd2nodez12zd2setzd2e3554zc0zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_dataflowzd2testzd2envzd2le3575zd2zzdataflow_walkz00(obj_t,
		obj_t);
	static obj_t BGl_z52thezd2localzf2valuezd2nilza0zzdataflow_walkz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzdataflow_walkz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl__dataflowzd2nodez12zc0zzdataflow_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_abortzf3zd2app3589z21zzdataflow_walkz00(obj_t, obj_t);
	static obj_t BGl_dataflowzd2testzd2envzd2ap3567zd2zzdataflow_walkz00(obj_t,
		obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_dataflowzd2nodez12zd2letzd2v3552zc0zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzdataflow_walkz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzdataflow_walkz00();
	static obj_t BGl_localzf2valuezf2zzdataflow_walkz00 = BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl__localzf2valuezf3z01zzdataflow_walkz00(obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzdataflow_walkz00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl__dataflowzd2walkz12zc0zzdataflow_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_dataflowzd2nodez12zd2selec3548z12zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_isaz00zzast_nodez00;
	static obj_t BGl_dataflowzd2globalz12zc0zzdataflow_walkz00(obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_abortzf3zd2letzd2fun3585zf3zzdataflow_walkz00(obj_t, obj_t);
	static BgL_localzf2valuezf2_bglt
		BGl_localzf2valuezd2nilz20zzdataflow_walkz00();
	static obj_t BGl__z52allocatezd2localzf2valuez72zzdataflow_walkz00(obj_t);
	static obj_t BGl_dataflowzd2nodez12zd2funca3538z12zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_abortzf3zd2appzd2ly3593zf3zzdataflow_walkz00(obj_t, obj_t);
	static obj_t BGl_dataflowzd2testzd2envzd2is3569zd2zzdataflow_walkz00(obj_t,
		obj_t);
	static obj_t BGl_abortzf3zd2letzd2var3583zf3zzdataflow_walkz00(obj_t, obj_t);
	static obj_t BGl__dataflowzd2nodez12zd2defau3527z12zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static long BGl_letzd2varzd2stampz00zzdataflow_walkz00;
	static obj_t BGl_dataflowzd2nodez12zd2seque3532z12zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_dataflowzd2nodez12zd2condi3544z12zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_dataflowzd2nodez12zd2app3534z12zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33717ze3z83zzdataflow_walkz00(obj_t, obj_t);
	static obj_t BGl_za2isaza2z00zzdataflow_walkz00 = BUNSPEC;
	static obj_t BGl_objectzd2initzd2zzdataflow_walkz00();
	static obj_t BGl_dataflowzd2nodez12zd2setq3542z12zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_dataflowzd2testzd2envzd2va3573zd2zzdataflow_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	static obj_t BGl_abortzf3zd2sequence3581z21zzdataflow_walkz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzdataflow_walkz00();
	static obj_t BGl_dataflowzd2nodez12zd2boxzd2r3561zc0zzdataflow_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_dataflowzd2testzd2envzd2co3571zd2zzdataflow_walkz00(obj_t,
		obj_t);
	static obj_t BGl_dataflowzd2nodeza2z12z62zzdataflow_walkz00(obj_t, obj_t);
	static obj_t __cnst[6];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4100z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2nodeza74138z00,
		BGl_dataflowzd2nodez12zd2appzd2l3536zc0zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4101z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2nodeza74139z00,
		BGl_dataflowzd2nodez12zd2funca3538z12zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4102z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2nodeza74140z00,
		BGl_dataflowzd2nodez12zd2exter3540z12zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4103z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2nodeza74141z00,
		BGl_dataflowzd2nodez12zd2setq3542z12zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4104z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2nodeza74142z00,
		BGl_dataflowzd2nodez12zd2condi3544z12zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4105z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2nodeza74143z00,
		BGl_dataflowzd2nodez12zd2fail3546z12zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4106z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2nodeza74144z00,
		BGl_dataflowzd2nodez12zd2selec3548z12zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4107z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2nodeza74145z00,
		BGl_dataflowzd2nodez12zd2letzd2f3550zc0zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4097z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2nodeza74146z00,
		BGl_dataflowzd2nodez12zd2var3530z12zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4108z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2nodeza74147z00,
		BGl_dataflowzd2nodez12zd2letzd2v3552zc0zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4098z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2nodeza74148z00,
		BGl_dataflowzd2nodez12zd2seque3532z12zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4110z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2nodeza74149z00,
		BGl_dataflowzd2nodez12zd2jumpzd23556zc0zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4109z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2nodeza74150z00,
		BGl_dataflowzd2nodez12zd2setzd2e3554zc0zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4099z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2nodeza74151z00,
		BGl_dataflowzd2nodez12zd2app3534z12zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4111z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2nodeza74152z00,
		BGl_dataflowzd2nodez12zd2makezd23558zc0zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4112z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2nodeza74153z00,
		BGl_dataflowzd2nodez12zd2boxzd2r3561zc0zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4113z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2nodeza74154z00,
		BGl_dataflowzd2nodez12zd2boxzd2s3563zc0zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4114z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2testza74155z00,
		BGl_dataflowzd2testzd2envzd2ap3567zd2zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4115z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2testza74156z00,
		BGl_dataflowzd2testzd2envzd2is3569zd2zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4116z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2testza74157z00,
		BGl_dataflowzd2testzd2envzd2co3571zd2zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4117z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2testza74158z00,
		BGl_dataflowzd2testzd2envzd2va3573zd2zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4118z00zzdataflow_walkz00,
		BgL_bgl_dataflowza7d2testza74159z00,
		BGl_dataflowzd2testzd2envzd2le3575zd2zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4120z00zzdataflow_walkz00,
		BgL_bgl_abortza7f3za7d2seque4160z00,
		BGl_abortzf3zd2sequence3581z21zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4119z00zzdataflow_walkz00,
		BgL_bgl_abortza7f3za7d2fail34161z00,
		BGl_abortzf3zd2fail3579z21zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4121z00zzdataflow_walkz00,
		BgL_bgl_abortza7f3za7d2letza7d4162za7,
		BGl_abortzf3zd2letzd2var3583zf3zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4122z00zzdataflow_walkz00,
		BgL_bgl_abortza7f3za7d2letza7d4163za7,
		BGl_abortzf3zd2letzd2fun3585zf3zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4123z00zzdataflow_walkz00,
		BgL_bgl_abortza7f3za7d2condi4164z00,
		BGl_abortzf3zd2conditional3587z21zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4124z00zzdataflow_walkz00,
		BgL_bgl_abortza7f3za7d2app354165z00,
		BGl_abortzf3zd2app3589z21zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4125z00zzdataflow_walkz00,
		BgL_bgl_abortza7f3za7d2funca4166z00,
		BGl_abortzf3zd2funcall3591z21zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4126z00zzdataflow_walkz00,
		BgL_bgl_abortza7f3za7d2appza7d4167za7,
		BGl_abortzf3zd2appzd2ly3593zf3zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4127z00zzdataflow_walkz00,
		BgL_bgl_objectza7d2za7e3stru4168z00,
		BGl_objectzd2ze3structzd2local3595ze3zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4129z00zzdataflow_walkz00,
		BgL_bgl_structza7b2objectza74169z00,
		BGl_structzb2objectzd2ze3objec3597z83zzdataflow_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4131z00zzdataflow_walkz00,
		BgL_bgl_za7c3anonymousza7a334170z00,
		BGl_zc3anonymousza33717ze3z83zzdataflow_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_dataflowzd2testzd2envzd2de3564zd2envz00zzdataflow_walkz00,
		BgL_bgl__dataflowza7d2test4171za7,
		BGl__dataflowzd2testzd2envzd2de3564zd2zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4087z00zzdataflow_walkz00,
		BgL_bgl_string4087za700za7za7d4172za7, "   . ", 5);
	      DEFINE_STRING(BGl_string4088z00zzdataflow_walkz00,
		BgL_bgl_string4088za700za7za7d4173za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string4090z00zzdataflow_walkz00,
		BgL_bgl_string4090za700za7za7d4174za7, "s", 1);
	      DEFINE_STRING(BGl_string4089z00zzdataflow_walkz00,
		BgL_bgl_string4089za700za7za7d4175za7, " error", 6);
	      DEFINE_STRING(BGl_string4091z00zzdataflow_walkz00,
		BgL_bgl_string4091za700za7za7d4176za7, "", 0);
	      DEFINE_STRING(BGl_string4092z00zzdataflow_walkz00,
		BgL_bgl_string4092za700za7za7d4177za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string4093z00zzdataflow_walkz00,
		BgL_bgl_string4093za700za7za7d4178za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string4094z00zzdataflow_walkz00,
		BgL_bgl_string4094za700za7za7d4179za7, "dataflow-node!", 14);
	      DEFINE_STRING(BGl_string4095z00zzdataflow_walkz00,
		BgL_bgl_string4095za700za7za7d4180za7, "dataflow-test-env", 17);
	      DEFINE_STRING(BGl_string4096z00zzdataflow_walkz00,
		BgL_bgl_string4096za700za7za7d4181za7, "abort?", 6);
	      DEFINE_STRING(BGl_string4128z00zzdataflow_walkz00,
		BgL_bgl_string4128za700za7za7d4182za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string4130z00zzdataflow_walkz00,
		BgL_bgl_string4130za700za7za7d4183za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string4132z00zzdataflow_walkz00,
		BgL_bgl_string4132za700za7za7d4184za7, "dataflow_walk", 13);
	      DEFINE_STRING(BGl_string4133z00zzdataflow_walkz00,
		BgL_bgl_string4133za700za7za7d4185za7,
		"read _ local/value __object is-a? pass-started ", 47);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
		BgL_bgl__dataflowza7d2node4186za7,
		BGl__dataflowzd2nodez12zc0zzdataflow_walkz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dataflowzd2walkz12zd2envz12zzdataflow_walkz00,
		BgL_bgl__dataflowza7d2walk4187za7,
		BGl__dataflowzd2walkz12zc0zzdataflow_walkz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_localzf2valuezf3zd2envzd3zzdataflow_walkz00,
		BgL_bgl__localza7f2valueza7f4188z00,
		BGl__localzf2valuezf3z01zzdataflow_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_localzf2valuezd2nilzd2envzf2zzdataflow_walkz00,
		BgL_bgl__localza7f2valueza7d4189z00,
		BGl__localzf2valuezd2nilz20zzdataflow_walkz00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_abortzf3zd2default3576zd2envzf3zzdataflow_walkz00,
		BgL_bgl__abortza7f3za7d2defa4190z00,
		BGl__abortzf3zd2default3576z21zzdataflow_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2localzf2valuezd2envza0zzdataflow_walkz00,
		BgL_bgl__za752allocateza7d2l4191z00,
		BGl__z52allocatezd2localzf2valuez72zzdataflow_walkz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
		BgL_bgl__dataflowza7d2test4192za7,
		BGl__dataflowzd2testzd2envz00zzdataflow_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_abortzf3zd2envz21zzdataflow_walkz00,
		BgL_bgl__abortza7f3za7f3za7za7da4193z00, BGl__abortzf3zf3zzdataflow_walkz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_dataflowzd2nodez12zd2defau3527zd2envzc0zzdataflow_walkz00,
		BgL_bgl__dataflowza7d2node4194za7,
		BGl__dataflowzd2nodez12zd2defau3527z12zzdataflow_walkz00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzdataflow_walkz00(long
		BgL_checksumz00_3616, char *BgL_fromz00_3617)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzdataflow_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzdataflow_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzdataflow_walkz00();
					BGl_cnstzd2initzd2zzdataflow_walkz00();
					BGl_importedzd2moduleszd2initz00zzdataflow_walkz00();
					BGl_objectzd2initzd2zzdataflow_walkz00();
					BGl_genericzd2initzd2zzdataflow_walkz00();
					BGl_methodzd2initzd2zzdataflow_walkz00();
					BGl_toplevelzd2initzd2zzdataflow_walkz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzdataflow_walkz00()
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 17 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"dataflow_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"dataflow_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"dataflow_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "dataflow_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"dataflow_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"dataflow_walk");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"dataflow_walk");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"dataflow_walk");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzdataflow_walkz00()
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 17 */
			{	/* Dataflow/walk.scm 17 */
				obj_t BgL_cportz00_3596;

				BgL_cportz00_3596 =
					bgl_open_input_string(BGl_string4133z00zzdataflow_walkz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_3597;

					BgL_iz00_3597 = ((long) 5);
				BgL_loopz00_3598:
					if ((BgL_iz00_3597 == ((long) -1)))
						{	/* Dataflow/walk.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Dataflow/walk.scm 17 */
							{	/* Dataflow/walk.scm 17 */
								obj_t BgL_arg4135z00_3600;

								{	/* Dataflow/walk.scm 17 */

									{	/* Dataflow/walk.scm 17 */
										obj_t BgL_locationz00_3602;

										BgL_locationz00_3602 = BBOOL(((bool_t) 0));
										{	/* Dataflow/walk.scm 17 */

											BgL_arg4135z00_3600 =
												BGl_readz00zz__readerz00(BgL_cportz00_3596,
												BgL_locationz00_3602);
										}
									}
								}
								{	/* Dataflow/walk.scm 17 */
									int BgL_auxz00_3642;

									BgL_auxz00_3642 = (int) (BgL_iz00_3597);
									CNST_TABLE_SET(BgL_auxz00_3642, BgL_arg4135z00_3600);
							}}
							{	/* Dataflow/walk.scm 17 */
								int BgL_auxz00_3603;

								BgL_auxz00_3603 = (int) ((BgL_iz00_3597 - ((long) 1)));
								{
									long BgL_iz00_3647;

									BgL_iz00_3647 = (long) (BgL_auxz00_3603);
									BgL_iz00_3597 = BgL_iz00_3647;
									goto BgL_loopz00_3598;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzdataflow_walkz00()
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 17 */
			BGl_za2isaza2z00zzdataflow_walkz00 = BFALSE;
			BGl_letzd2varzd2stampz00zzdataflow_walkz00 = ((long) 0);
			return BUNSPEC;
		}
	}



/* dataflow-walk! */
	BGL_EXPORTED_DEF obj_t BGl_dataflowzd2walkz12zc0zzdataflow_walkz00(obj_t
		BgL_globalsz00_1, obj_t BgL_namez00_2)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 41 */
			{	/* Dataflow/walk.scm 42 */
				obj_t BgL_list3598z00_868;

				{	/* Dataflow/walk.scm 42 */
					obj_t BgL_arg3600z00_870;

					{	/* Dataflow/walk.scm 42 */
						obj_t BgL_arg3601z00_871;

						BgL_arg3601z00_871 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg3600z00_870 = MAKE_PAIR(BgL_namez00_2, BgL_arg3601z00_871);
					}
					BgL_list3598z00_868 =
						MAKE_PAIR(BGl_string4087z00zzdataflow_walkz00, BgL_arg3600z00_870);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list3598z00_868);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 = BgL_namez00_2;
			{
				obj_t BgL_hooksz00_875;

				obj_t BgL_hnamesz00_876;

				BgL_hooksz00_875 = BNIL;
				BgL_hnamesz00_876 = BNIL;
			BgL_zc3anonymousza33602ze3z83_877:
				if (NULLP(BgL_hooksz00_875))
					{	/* Dataflow/walk.scm 42 */
						CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Dataflow/walk.scm 42 */
						bool_t BgL_testz00_3659;

						{	/* Dataflow/walk.scm 42 */
							obj_t BgL_fun3609z00_884;

							BgL_fun3609z00_884 = CAR(BgL_hooksz00_875);
							BgL_testz00_3659 =
								CBOOL(PROCEDURE_ENTRY(BgL_fun3609z00_884) (BgL_fun3609z00_884,
									BEOA));
						}
						if (BgL_testz00_3659)
							{
								obj_t BgL_hnamesz00_3666;

								obj_t BgL_hooksz00_3664;

								BgL_hooksz00_3664 = CDR(BgL_hooksz00_875);
								BgL_hnamesz00_3666 = CDR(BgL_hnamesz00_876);
								BgL_hnamesz00_876 = BgL_hnamesz00_3666;
								BgL_hooksz00_875 = BgL_hooksz00_3664;
								goto BgL_zc3anonymousza33602ze3z83_877;
							}
						else
							{	/* Dataflow/walk.scm 42 */
								BGl_internalzd2errorzd2zztools_errorz00(BgL_namez00_2,
									BGl_string4088z00zzdataflow_walkz00, CAR(BgL_hnamesz00_876));
							}
					}
			}
			BGl_za2isaza2z00zzdataflow_walkz00 =
				BGl_findzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 1)),
				CNST_TABLE_REF(((long) 2)));
			{
				obj_t BgL_l3503z00_888;

				BgL_l3503z00_888 = BgL_globalsz00_1;
			BgL_zc3anonymousza33611ze3z83_889:
				if (PAIRP(BgL_l3503z00_888))
					{	/* Dataflow/walk.scm 44 */
						BGl_dataflowzd2globalz12zc0zzdataflow_walkz00(CAR
							(BgL_l3503z00_888));
						{
							obj_t BgL_l3503z00_3677;

							BgL_l3503z00_3677 = CDR(BgL_l3503z00_888);
							BgL_l3503z00_888 = BgL_l3503z00_3677;
							goto BgL_zc3anonymousza33611ze3z83_889;
						}
					}
				else
					{	/* Dataflow/walk.scm 44 */
						((bool_t) 1);
					}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Dataflow/walk.scm 45 */
					{	/* Dataflow/walk.scm 45 */
						obj_t BgL_port3505z00_896;

						{	/* Dataflow/walk.scm 45 */
							obj_t BgL_res3947z00_1829;

							{	/* Dataflow/walk.scm 45 */
								obj_t BgL_auxz00_3682;

								BgL_auxz00_3682 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res3947z00_1829 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_3682);
							}
							BgL_port3505z00_896 = BgL_res3947z00_1829;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port3505z00_896);
						bgl_display_string(BGl_string4089z00zzdataflow_walkz00,
							BgL_port3505z00_896);
						{	/* Dataflow/walk.scm 45 */
							obj_t BgL_arg3616z00_897;

							{	/* Dataflow/walk.scm 45 */
								bool_t BgL_testz00_3687;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Dataflow/walk.scm 45 */
										BgL_testz00_3687 =
											BGl_2ze3ze3zz__r4_numbers_6_5z00
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
											BINT(((long) 1)));
									}
								else
									{	/* Dataflow/walk.scm 45 */
										BgL_testz00_3687 = ((bool_t) 0);
									}
								if (BgL_testz00_3687)
									{	/* Dataflow/walk.scm 45 */
										BgL_arg3616z00_897 = BGl_string4090z00zzdataflow_walkz00;
									}
								else
									{	/* Dataflow/walk.scm 45 */
										BgL_arg3616z00_897 = BGl_string4091z00zzdataflow_walkz00;
									}
							}
							bgl_display_obj(BgL_arg3616z00_897, BgL_port3505z00_896);
						}
						bgl_display_string(BGl_string4092z00zzdataflow_walkz00,
							BgL_port3505z00_896);
						bgl_display_char(((unsigned char) '\n'), BgL_port3505z00_896);
					}
					{	/* Dataflow/walk.scm 45 */
						obj_t BgL_list3619z00_900;

						BgL_list3619z00_900 = MAKE_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list3619z00_900);
					}
				}
			else
				{
					obj_t BgL_hooksz00_904;

					obj_t BgL_hnamesz00_905;

					BgL_hooksz00_904 = BNIL;
					BgL_hnamesz00_905 = BNIL;
				BgL_zc3anonymousza33620ze3z83_906:
					if (NULLP(BgL_hooksz00_904))
						{	/* Dataflow/walk.scm 45 */
							return BgL_globalsz00_1;
						}
					else
						{	/* Dataflow/walk.scm 45 */
							bool_t BgL_testz00_3700;

							{	/* Dataflow/walk.scm 45 */
								obj_t BgL_fun3627z00_913;

								BgL_fun3627z00_913 = CAR(BgL_hooksz00_904);
								BgL_testz00_3700 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun3627z00_913) (BgL_fun3627z00_913,
										BEOA));
							}
							if (BgL_testz00_3700)
								{
									obj_t BgL_hnamesz00_3707;

									obj_t BgL_hooksz00_3705;

									BgL_hooksz00_3705 = CDR(BgL_hooksz00_904);
									BgL_hnamesz00_3707 = CDR(BgL_hnamesz00_905);
									BgL_hnamesz00_905 = BgL_hnamesz00_3707;
									BgL_hooksz00_904 = BgL_hooksz00_3705;
									goto BgL_zc3anonymousza33620ze3z83_906;
								}
							else
								{	/* Dataflow/walk.scm 45 */
									obj_t BgL_arg3626z00_912;

									BgL_arg3626z00_912 = CAR(BgL_hnamesz00_905);
									return
										BGl_internalzd2errorzd2zztools_errorz00
										(BGl_za2currentzd2passza2zd2zzengine_passz00,
										BGl_string4093z00zzdataflow_walkz00, BgL_arg3626z00_912);
								}
						}
				}
		}
	}



/* _dataflow-walk! */
	obj_t BGl__dataflowzd2walkz12zc0zzdataflow_walkz00(obj_t BgL_envz00_3449,
		obj_t BgL_globalsz00_3450, obj_t BgL_namez00_3451)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 41 */
			return
				BGl_dataflowzd2walkz12zc0zzdataflow_walkz00(BgL_globalsz00_3450,
				BgL_namez00_3451);
		}
	}



/* dataflow-global! */
	obj_t BGl_dataflowzd2globalz12zc0zzdataflow_walkz00(obj_t BgL_globalz00_3)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 55 */
			{	/* Dataflow/walk.scm 56 */
				obj_t BgL_arg3629z00_916;

				{	/* Dataflow/walk.scm 56 */
					BgL_sfunz00_bglt BgL_obj1884z00_1843;

					{	/* Dataflow/walk.scm 56 */
						BgL_variablez00_bglt BgL_obj1611z00_1842;

						BgL_obj1611z00_1842 = (BgL_variablez00_bglt) (BgL_globalz00_3);
						BgL_obj1884z00_1843 =
							(BgL_sfunz00_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1842))->
								BgL_valuez00));
					}
					BgL_arg3629z00_916 =
						(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_1843))->BgL_bodyz00);
				}
				{	/* Dataflow/walk.scm 56 */
					obj_t BgL_res3951z00_1871;

					{	/* Dataflow/walk.scm 56 */
						BgL_nodez00_bglt BgL_nodez00_1844;

						BgL_nodez00_1844 = (BgL_nodez00_bglt) (BgL_arg3629z00_916);
						{	/* Dataflow/walk.scm 56 */
							obj_t BgL_method3528z00_1846;

							{	/* Dataflow/walk.scm 56 */
								BgL_objectz00_bglt BgL_objz00_1847;

								BgL_objz00_1847 = (BgL_objectz00_bglt) (BgL_nodez00_1844);
								{	/* Dataflow/walk.scm 56 */
									long BgL_objzd2classzd2numz00_1848;

									BgL_objzd2classzd2numz00_1848 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1847);
									{	/* Dataflow/walk.scm 56 */
										obj_t BgL_arg2643z00_1849;

										BgL_arg2643z00_1849 =
											PROCEDURE_REF
											(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
											(int) (((long) 1)));
										{	/* Dataflow/walk.scm 56 */
											obj_t BgL_arrayz00_1851;

											int BgL_offsetz00_1852;

											BgL_arrayz00_1851 = BgL_arg2643z00_1849;
											BgL_offsetz00_1852 =
												(int) (BgL_objzd2classzd2numz00_1848);
											{	/* Dataflow/walk.scm 56 */
												long BgL_offsetz00_1853;

												BgL_offsetz00_1853 =
													((long) (BgL_offsetz00_1852) - OBJECT_TYPE);
												{	/* Dataflow/walk.scm 56 */
													long BgL_modz00_1854;

													{	/* Dataflow/walk.scm 56 */
														int BgL_arg2645z00_1855;

														BgL_arg2645z00_1855 = (int) (((long) 16));
														{	/* Dataflow/walk.scm 56 */
															long BgL_auxz00_3725;

															BgL_auxz00_3725 = (long) (BgL_arg2645z00_1855);
															BgL_modz00_1854 =
																(BgL_offsetz00_1853 / BgL_auxz00_3725);
													}}
													{	/* Dataflow/walk.scm 56 */
														long BgL_restz00_1856;

														{	/* Dataflow/walk.scm 56 */
															int BgL_arg2644z00_1857;

															BgL_arg2644z00_1857 = (int) (((long) 16));
															{	/* Dataflow/walk.scm 56 */
																long BgL_auxz00_3729;

																BgL_auxz00_3729 = (long) (BgL_arg2644z00_1857);
																BgL_restz00_1856 =
																	(BgL_offsetz00_1853 % BgL_auxz00_3729);
														}}
														{	/* Dataflow/walk.scm 56 */

															BgL_method3528z00_1846 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1851,
																	(int) (BgL_modz00_1854)),
																(int) (BgL_restz00_1856));
							}}}}}}}}
							BgL_res3951z00_1871 =
								PROCEDURE_ENTRY(BgL_method3528z00_1846) (BgL_method3528z00_1846,
								(obj_t) (BgL_nodez00_1844), BNIL, BEOA);
					}}
					return BgL_res3951z00_1871;
				}
			}
		}
	}



/* dataflow-node*! */
	obj_t BGl_dataflowzd2nodeza2z12z62zzdataflow_walkz00(obj_t BgL_nodeza2za2_42,
		obj_t BgL_envz00_43)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 267 */
			{
				obj_t BgL_l3512z00_920;

				BgL_l3512z00_920 = BgL_nodeza2za2_42;
			BgL_zc3anonymousza33632ze3z83_921:
				if (PAIRP(BgL_l3512z00_920))
					{	/* Dataflow/walk.scm 268 */
						{	/* Dataflow/walk.scm 268 */
							obj_t BgL_nz00_923;

							BgL_nz00_923 = CAR(BgL_l3512z00_920);
							{	/* Dataflow/walk.scm 268 */
								obj_t BgL_res3954z00_1901;

								{	/* Dataflow/walk.scm 268 */
									BgL_nodez00_bglt BgL_nodez00_1874;

									obj_t BgL_envz00_1875;

									BgL_nodez00_1874 = (BgL_nodez00_bglt) (BgL_nz00_923);
									BgL_envz00_1875 = BgL_envz00_43;
									{	/* Dataflow/walk.scm 268 */
										obj_t BgL_method3528z00_1876;

										{	/* Dataflow/walk.scm 268 */
											BgL_objectz00_bglt BgL_objz00_1877;

											BgL_objz00_1877 = (BgL_objectz00_bglt) (BgL_nodez00_1874);
											{	/* Dataflow/walk.scm 268 */
												long BgL_objzd2classzd2numz00_1878;

												BgL_objzd2classzd2numz00_1878 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1877);
												{	/* Dataflow/walk.scm 268 */
													obj_t BgL_arg2643z00_1879;

													BgL_arg2643z00_1879 =
														PROCEDURE_REF
														(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
														(int) (((long) 1)));
													{	/* Dataflow/walk.scm 268 */
														obj_t BgL_arrayz00_1881;

														int BgL_offsetz00_1882;

														BgL_arrayz00_1881 = BgL_arg2643z00_1879;
														BgL_offsetz00_1882 =
															(int) (BgL_objzd2classzd2numz00_1878);
														{	/* Dataflow/walk.scm 268 */
															long BgL_offsetz00_1883;

															BgL_offsetz00_1883 =
																((long) (BgL_offsetz00_1882) - OBJECT_TYPE);
															{	/* Dataflow/walk.scm 268 */
																long BgL_modz00_1884;

																{	/* Dataflow/walk.scm 268 */
																	int BgL_arg2645z00_1885;

																	BgL_arg2645z00_1885 = (int) (((long) 16));
																	{	/* Dataflow/walk.scm 268 */
																		long BgL_auxz00_3751;

																		BgL_auxz00_3751 =
																			(long) (BgL_arg2645z00_1885);
																		BgL_modz00_1884 =
																			(BgL_offsetz00_1883 / BgL_auxz00_3751);
																}}
																{	/* Dataflow/walk.scm 268 */
																	long BgL_restz00_1886;

																	{	/* Dataflow/walk.scm 268 */
																		int BgL_arg2644z00_1887;

																		BgL_arg2644z00_1887 = (int) (((long) 16));
																		{	/* Dataflow/walk.scm 268 */
																			long BgL_auxz00_3755;

																			BgL_auxz00_3755 =
																				(long) (BgL_arg2644z00_1887);
																			BgL_restz00_1886 =
																				(BgL_offsetz00_1883 % BgL_auxz00_3755);
																	}}
																	{	/* Dataflow/walk.scm 268 */

																		BgL_method3528z00_1876 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1881,
																				(int) (BgL_modz00_1884)),
																			(int) (BgL_restz00_1886));
										}}}}}}}}
										BgL_res3954z00_1901 =
											PROCEDURE_ENTRY(BgL_method3528z00_1876)
											(BgL_method3528z00_1876, (obj_t) (BgL_nodez00_1874),
											BgL_envz00_1875, BEOA);
								}} BgL_res3954z00_1901;
						}}
						{
							obj_t BgL_l3512z00_3765;

							BgL_l3512z00_3765 = CDR(BgL_l3512z00_920);
							BgL_l3512z00_920 = BgL_l3512z00_3765;
							goto BgL_zc3anonymousza33632ze3z83_921;
						}
					}
				else
					{	/* Dataflow/walk.scm 268 */
						((bool_t) 1);
					}
			}
			return BgL_envz00_43;
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzdataflow_walkz00()
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 17 */
			{	/* Dataflow/walk.scm 33 */
				obj_t BgL_arg3635z00_926;

				obj_t BgL_arg3636z00_927;

				obj_t BgL_arg3639z00_930;

				BgL_arg3635z00_926 = CNST_TABLE_REF(((long) 3));
				BgL_arg3636z00_927 = BGl_localz00zzast_varz00;
				{	/* Dataflow/walk.scm 33 */
					obj_t BgL_v3526z00_931;

					BgL_v3526z00_931 = create_vector((int) (((long) 0)));
					BgL_arg3639z00_930 = BgL_v3526z00_931;
				}
				BGl_localzf2valuezf2zzdataflow_walkz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3635z00_926,
					BgL_arg3636z00_927, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2localzf2valuezd2envza0zzdataflow_walkz00,
					BGl_localzf2valuezd2nilzd2envzf2zzdataflow_walkz00,
					BGl_localzf2valuezf3zd2envzd3zzdataflow_walkz00, ((long) 241262212),
					BFALSE, BFALSE, BgL_arg3639z00_930);
			}
			return (BGl_z52thezd2localzf2valuezd2nilza0zzdataflow_walkz00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* _local/value? */
	obj_t BGl__localzf2valuezf3z01zzdataflow_walkz00(obj_t BgL_envz00_3457,
		obj_t BgL_obj3400z00_3458)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 33 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3400z00_3458,
					BGl_localzf2valuezf2zzdataflow_walkz00));
		}
	}



/* _%allocate-local/value */
	obj_t BGl__z52allocatezd2localzf2valuez72zzdataflow_walkz00(obj_t
		BgL_envz00_3455)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 33 */
			{	/* Dataflow/walk.scm 33 */
				BgL_localz00_bglt BgL_auxz00_3773;

				{	/* Dataflow/walk.scm 33 */
					BgL_localz00_bglt BgL_res4136z00_3609;

					{	/* Dataflow/walk.scm 33 */
						BgL_localz00_bglt BgL_new3391z00_3607;

						BgL_new3391z00_3607 =
							((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_localz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3391z00_3607),
							BGl_classzd2numzd2zz__objectz00
							(BGl_localzf2valuezf2zzdataflow_walkz00));
						{	/* Dataflow/walk.scm 33 */
							BgL_objectz00_bglt BgL_auxz00_3778;

							BgL_auxz00_3778 = (BgL_objectz00_bglt) (BgL_new3391z00_3607);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3778, BFALSE);
						}
						BgL_res4136z00_3609 = BgL_new3391z00_3607;
					}
					BgL_auxz00_3773 = BgL_res4136z00_3609;
				}
				return (obj_t) (BgL_auxz00_3773);
			}
		}
	}



/* local/value-nil */
	BgL_localzf2valuezf2_bglt BGl_localzf2valuezd2nilz20zzdataflow_walkz00()
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 33 */
			if ((BGl_z52thezd2localzf2valuezd2nilza0zzdataflow_walkz00 == BUNSPEC))
				{	/* Dataflow/walk.scm 33 */
					{	/* Dataflow/walk.scm 33 */
						BgL_localz00_bglt BgL_res3956z00_1920;

						{	/* Dataflow/walk.scm 33 */
							BgL_localz00_bglt BgL_new1810z00_1916;

							BgL_new1810z00_1916 =
								((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_localz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1810z00_1916),
								BGl_classzd2numzd2zz__objectz00(BGl_localz00zzast_varz00));
							{	/* Dataflow/walk.scm 33 */
								BgL_objectz00_bglt BgL_auxz00_3788;

								BgL_auxz00_3788 = (BgL_objectz00_bglt) (BgL_new1810z00_1916);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3788, BFALSE);
							}
							BgL_res3956z00_1920 = BgL_new1810z00_1916;
						}
						BGl_z52thezd2localzf2valuezd2nilza0zzdataflow_walkz00 =
							(obj_t) (BgL_res3956z00_1920);
					}
					{	/* Dataflow/walk.scm 33 */
						obj_t BgL_arg3644z00_942;

						BgL_typez00_bglt BgL_arg3645z00_943;

						BgL_valuez00_bglt BgL_arg3646z00_944;

						BgL_arg3644z00_942 = CNST_TABLE_REF(((long) 4));
						BgL_arg3645z00_943 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg3646z00_944 = BGl_valuezd2nilzd2zzast_varz00();
						{	/* Dataflow/walk.scm 33 */
							BgL_localz00_bglt BgL_res3957z00_1942;

							{	/* Dataflow/walk.scm 33 */
								BgL_localz00_bglt BgL_new1798z00_1921;

								BgL_new1798z00_1921 =
									(BgL_localz00_bglt)
									(BGl_z52thezd2localzf2valuezd2nilza0zzdataflow_walkz00);
								{	/* Dataflow/walk.scm 33 */
									obj_t BgL_id1788z00_1932;

									obj_t BgL_name1789z00_1933;

									BgL_typez00_bglt BgL_type1790z00_1934;

									BgL_valuez00_bglt BgL_value1791z00_1935;

									obj_t BgL_access1792z00_1936;

									obj_t BgL_fastzd2alpha1793zd2_1937;

									obj_t BgL_removable1794z00_1938;

									long BgL_occurrence1795z00_1939;

									bool_t BgL_userzf31796zf3_1940;

									long BgL_key1797z00_1941;

									BgL_id1788z00_1932 = BgL_arg3644z00_942;
									BgL_name1789z00_1933 = BUNSPEC;
									BgL_type1790z00_1934 = BgL_arg3645z00_943;
									BgL_value1791z00_1935 = BgL_arg3646z00_944;
									BgL_access1792z00_1936 = BUNSPEC;
									BgL_fastzd2alpha1793zd2_1937 = BUNSPEC;
									BgL_removable1794z00_1938 = BUNSPEC;
									BgL_occurrence1795z00_1939 = ((long) 0);
									BgL_userzf31796zf3_1940 = ((bool_t) 0);
									BgL_key1797z00_1941 = ((long) 0);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1921))->
											BgL_idz00) = ((obj_t) BgL_id1788z00_1932), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1921))->
											BgL_namez00) = ((obj_t) BgL_name1789z00_1933), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1921))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type1790z00_1934), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1921))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) BgL_value1791z00_1935), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1921))->
											BgL_accessz00) =
										((obj_t) BgL_access1792z00_1936), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1921))->
											BgL_fastzd2alphazd2) =
										((obj_t) BgL_fastzd2alpha1793zd2_1937), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1921))->
											BgL_removablez00) =
										((obj_t) BgL_removable1794z00_1938), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1921))->
											BgL_occurrencez00) =
										((long) BgL_occurrence1795z00_1939), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1921))->
											BgL_userzf3zf3) =
										((bool_t) BgL_userzf31796zf3_1940), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1921))->
											BgL_keyz00) = ((long) BgL_key1797z00_1941), BUNSPEC);
									BgL_res3957z00_1942 = BgL_new1798z00_1921;
							}} BgL_res3957z00_1942;
					}}
					{	/* Dataflow/walk.scm 33 */
						long BgL_arg3649z00_947;

						BgL_arg3649z00_947 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_localzf2valuezf2zzdataflow_walkz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2localzf2valuezd2nilza0zzdataflow_walkz00),
							BgL_arg3649z00_947);
					}
					{	/* Dataflow/walk.scm 33 */
						BgL_localzf2valuezf2_bglt BgL_arg3650z00_948;

						{	/* Dataflow/walk.scm 33 */
							BgL_nodez00_bglt BgL_arg3652z00_950;

							BgL_arg3652z00_950 = BGl_nodezd2nilzd2zzast_nodez00();
							{	/* Dataflow/walk.scm 33 */
								BgL_localzf2valuezf2_bglt BgL_res3959z00_1954;

								{	/* Dataflow/walk.scm 33 */
									int BgL_stamp3367z00_1945;

									BgL_stamp3367z00_1945 = (int) (((long) 0));
									{	/* Dataflow/walk.scm 33 */
										BgL_localzf2valuezf2_bglt BgL_new3369z00_1947;

										BgL_new3369z00_1947 =
											((BgL_localzf2valuezf2_bglt) BREF(GC_MALLOC(sizeof(struct
														BgL_localzf2valuezf2_bgl))));
										{	/* Dataflow/walk.scm 33 */
											BgL_localzf2valuezf2_bglt BgL_res3958z00_1953;

											{	/* Dataflow/walk.scm 33 */
												BgL_localzf2valuezf2_bglt BgL_new3387z00_1948;

												BgL_new3387z00_1948 = BgL_new3369z00_1947;
												{	/* Dataflow/walk.scm 33 */
													int BgL_stamp3385z00_1951;

													BgL_nodez00_bglt BgL_node3386z00_1952;

													BgL_stamp3385z00_1951 = BgL_stamp3367z00_1945;
													BgL_node3386z00_1952 = BgL_arg3652z00_950;
													((((BgL_localzf2valuezf2_bglt)
																CREF(BgL_new3387z00_1948))->BgL_stampz00) =
														((int) BgL_stamp3385z00_1951), BUNSPEC);
													((((BgL_localzf2valuezf2_bglt)
																CREF(BgL_new3387z00_1948))->BgL_nodez00) =
														((BgL_nodez00_bglt) BgL_node3386z00_1952), BUNSPEC);
													BgL_res3958z00_1953 = BgL_new3387z00_1948;
											}} BgL_res3958z00_1953;
										}
										BgL_res3959z00_1954 = BgL_new3369z00_1947;
								}}
								BgL_arg3650z00_948 = BgL_res3959z00_1954;
						}}
						{	/* Dataflow/walk.scm 33 */
							obj_t BgL_auxz00_3816;

							BgL_objectz00_bglt BgL_auxz00_3814;

							BgL_auxz00_3816 = (obj_t) (BgL_arg3650z00_948);
							BgL_auxz00_3814 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2localzf2valuezd2nilza0zzdataflow_walkz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3814, BgL_auxz00_3816);
				}}}
			else
				{	/* Dataflow/walk.scm 33 */
					BFALSE;
				}
			return
				(BgL_localzf2valuezf2_bglt)
				(BGl_z52thezd2localzf2valuezd2nilza0zzdataflow_walkz00);
		}
	}



/* _local/value-nil */
	obj_t BGl__localzf2valuezd2nilz20zzdataflow_walkz00(obj_t BgL_envz00_3456)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 33 */
			return (obj_t) (BGl_localzf2valuezd2nilz20zzdataflow_walkz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzdataflow_walkz00()
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 17 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_dataflowzd2nodez12zd2defau3527zd2envzc0zzdataflow_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string4094z00zzdataflow_walkz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
				BGl_dataflowzd2testzd2envzd2de3564zd2envz00zzdataflow_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string4095z00zzdataflow_walkz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_abortzf3zd2envz21zzdataflow_walkz00,
				BGl_abortzf3zd2default3576zd2envzf3zzdataflow_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string4096z00zzdataflow_walkz00);
		}
	}



/* dataflow-node! */
	obj_t BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(BgL_nodez00_bglt
		BgL_nodez00_4, obj_t BgL_envz00_5)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 61 */
			{	/* Dataflow/walk.scm 61 */
				obj_t BgL_method3528z00_1969;

				{	/* Dataflow/walk.scm 61 */
					BgL_objectz00_bglt BgL_objz00_1970;

					BgL_objz00_1970 = (BgL_objectz00_bglt) (BgL_nodez00_4);
					{	/* Dataflow/walk.scm 61 */
						long BgL_objzd2classzd2numz00_1971;

						BgL_objzd2classzd2numz00_1971 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1970);
						{	/* Dataflow/walk.scm 61 */
							obj_t BgL_arg2643z00_1972;

							BgL_arg2643z00_1972 =
								PROCEDURE_REF(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
								(int) (((long) 1)));
							{	/* Dataflow/walk.scm 61 */
								obj_t BgL_arrayz00_1974;

								int BgL_offsetz00_1975;

								BgL_arrayz00_1974 = BgL_arg2643z00_1972;
								BgL_offsetz00_1975 = (int) (BgL_objzd2classzd2numz00_1971);
								{	/* Dataflow/walk.scm 61 */
									long BgL_offsetz00_1976;

									BgL_offsetz00_1976 =
										((long) (BgL_offsetz00_1975) - OBJECT_TYPE);
									{	/* Dataflow/walk.scm 61 */
										long BgL_modz00_1977;

										{	/* Dataflow/walk.scm 61 */
											int BgL_arg2645z00_1978;

											BgL_arg2645z00_1978 = (int) (((long) 16));
											{	/* Dataflow/walk.scm 61 */
												long BgL_auxz00_3833;

												BgL_auxz00_3833 = (long) (BgL_arg2645z00_1978);
												BgL_modz00_1977 =
													(BgL_offsetz00_1976 / BgL_auxz00_3833);
										}}
										{	/* Dataflow/walk.scm 61 */
											long BgL_restz00_1979;

											{	/* Dataflow/walk.scm 61 */
												int BgL_arg2644z00_1980;

												BgL_arg2644z00_1980 = (int) (((long) 16));
												{	/* Dataflow/walk.scm 61 */
													long BgL_auxz00_3837;

													BgL_auxz00_3837 = (long) (BgL_arg2644z00_1980);
													BgL_restz00_1979 =
														(BgL_offsetz00_1976 % BgL_auxz00_3837);
											}}
											{	/* Dataflow/walk.scm 61 */

												BgL_method3528z00_1969 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1974,
														(int) (BgL_modz00_1977)), (int) (BgL_restz00_1979));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3528z00_1969) (BgL_method3528z00_1969,
					(obj_t) (BgL_nodez00_4), BgL_envz00_5, BEOA);
			}
		}
	}



/* _dataflow-node! */
	obj_t BGl__dataflowzd2nodez12zc0zzdataflow_walkz00(obj_t BgL_envz00_3452,
		obj_t BgL_nodez00_3453, obj_t BgL_envz00_3454)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 61 */
			return
				BGl_dataflowzd2nodez12zc0zzdataflow_walkz00(
				(BgL_nodez00_bglt) (BgL_nodez00_3453), BgL_envz00_3454);
		}
	}



/* _dataflow-node!-defau3527 */
	obj_t BGl__dataflowzd2nodez12zd2defau3527z12zzdataflow_walkz00(obj_t
		BgL_envz00_3459, obj_t BgL_nodez00_3460, obj_t BgL_envz00_3461)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 17 */
			return BgL_envz00_3461;
		}
	}



/* dataflow-test-env */
	obj_t BGl_dataflowzd2testzd2envz00zzdataflow_walkz00(BgL_nodez00_bglt
		BgL_nodez00_44)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 274 */
			{	/* Dataflow/walk.scm 274 */
				obj_t BgL_method3565z00_1994;

				{	/* Dataflow/walk.scm 274 */
					BgL_objectz00_bglt BgL_objz00_1995;

					BgL_objz00_1995 = (BgL_objectz00_bglt) (BgL_nodez00_44);
					{	/* Dataflow/walk.scm 274 */
						long BgL_objzd2classzd2numz00_1996;

						BgL_objzd2classzd2numz00_1996 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1995);
						{	/* Dataflow/walk.scm 274 */
							obj_t BgL_arg2643z00_1997;

							BgL_arg2643z00_1997 =
								PROCEDURE_REF
								(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
								(int) (((long) 1)));
							{	/* Dataflow/walk.scm 274 */
								obj_t BgL_arrayz00_1999;

								int BgL_offsetz00_2000;

								BgL_arrayz00_1999 = BgL_arg2643z00_1997;
								BgL_offsetz00_2000 = (int) (BgL_objzd2classzd2numz00_1996);
								{	/* Dataflow/walk.scm 274 */
									long BgL_offsetz00_2001;

									BgL_offsetz00_2001 =
										((long) (BgL_offsetz00_2000) - OBJECT_TYPE);
									{	/* Dataflow/walk.scm 274 */
										long BgL_modz00_2002;

										{	/* Dataflow/walk.scm 274 */
											int BgL_arg2645z00_2003;

											BgL_arg2645z00_2003 = (int) (((long) 16));
											{	/* Dataflow/walk.scm 274 */
												long BgL_auxz00_3857;

												BgL_auxz00_3857 = (long) (BgL_arg2645z00_2003);
												BgL_modz00_2002 =
													(BgL_offsetz00_2001 / BgL_auxz00_3857);
										}}
										{	/* Dataflow/walk.scm 274 */
											long BgL_restz00_2004;

											{	/* Dataflow/walk.scm 274 */
												int BgL_arg2644z00_2005;

												BgL_arg2644z00_2005 = (int) (((long) 16));
												{	/* Dataflow/walk.scm 274 */
													long BgL_auxz00_3861;

													BgL_auxz00_3861 = (long) (BgL_arg2644z00_2005);
													BgL_restz00_2004 =
														(BgL_offsetz00_2001 % BgL_auxz00_3861);
											}}
											{	/* Dataflow/walk.scm 274 */

												BgL_method3565z00_1994 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1999,
														(int) (BgL_modz00_2002)), (int) (BgL_restz00_2004));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3565z00_1994) (BgL_method3565z00_1994,
					(obj_t) (BgL_nodez00_44), BEOA);
			}
		}
	}



/* _dataflow-test-env */
	obj_t BGl__dataflowzd2testzd2envz00zzdataflow_walkz00(obj_t BgL_envz00_3462,
		obj_t BgL_nodez00_3463)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 274 */
			return
				BGl_dataflowzd2testzd2envz00zzdataflow_walkz00(
				(BgL_nodez00_bglt) (BgL_nodez00_3463));
		}
	}



/* _dataflow-test-env-de3564 */
	obj_t BGl__dataflowzd2testzd2envzd2de3564zd2zzdataflow_walkz00(obj_t
		BgL_envz00_3464, obj_t BgL_nodez00_3465)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 17 */
			return BNIL;
		}
	}



/* abort? */
	obj_t BGl_abortzf3zf3zzdataflow_walkz00(BgL_nodez00_bglt BgL_nodez00_51)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 352 */
			{	/* Dataflow/walk.scm 352 */
				obj_t BgL_method3577z00_2019;

				{	/* Dataflow/walk.scm 352 */
					BgL_objectz00_bglt BgL_objz00_2020;

					BgL_objz00_2020 = (BgL_objectz00_bglt) (BgL_nodez00_51);
					{	/* Dataflow/walk.scm 352 */
						long BgL_objzd2classzd2numz00_2021;

						BgL_objzd2classzd2numz00_2021 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2020);
						{	/* Dataflow/walk.scm 352 */
							obj_t BgL_arg2643z00_2022;

							BgL_arg2643z00_2022 =
								PROCEDURE_REF(BGl_abortzf3zd2envz21zzdataflow_walkz00,
								(int) (((long) 1)));
							{	/* Dataflow/walk.scm 352 */
								obj_t BgL_arrayz00_2024;

								int BgL_offsetz00_2025;

								BgL_arrayz00_2024 = BgL_arg2643z00_2022;
								BgL_offsetz00_2025 = (int) (BgL_objzd2classzd2numz00_2021);
								{	/* Dataflow/walk.scm 352 */
									long BgL_offsetz00_2026;

									BgL_offsetz00_2026 =
										((long) (BgL_offsetz00_2025) - OBJECT_TYPE);
									{	/* Dataflow/walk.scm 352 */
										long BgL_modz00_2027;

										{	/* Dataflow/walk.scm 352 */
											int BgL_arg2645z00_2028;

											BgL_arg2645z00_2028 = (int) (((long) 16));
											{	/* Dataflow/walk.scm 352 */
												long BgL_auxz00_3881;

												BgL_auxz00_3881 = (long) (BgL_arg2645z00_2028);
												BgL_modz00_2027 =
													(BgL_offsetz00_2026 / BgL_auxz00_3881);
										}}
										{	/* Dataflow/walk.scm 352 */
											long BgL_restz00_2029;

											{	/* Dataflow/walk.scm 352 */
												int BgL_arg2644z00_2030;

												BgL_arg2644z00_2030 = (int) (((long) 16));
												{	/* Dataflow/walk.scm 352 */
													long BgL_auxz00_3885;

													BgL_auxz00_3885 = (long) (BgL_arg2644z00_2030);
													BgL_restz00_2029 =
														(BgL_offsetz00_2026 % BgL_auxz00_3885);
											}}
											{	/* Dataflow/walk.scm 352 */

												BgL_method3577z00_2019 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2024,
														(int) (BgL_modz00_2027)), (int) (BgL_restz00_2029));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3577z00_2019) (BgL_method3577z00_2019,
					(obj_t) (BgL_nodez00_51), BEOA);
			}
		}
	}



/* _abort? */
	obj_t BGl__abortzf3zf3zzdataflow_walkz00(obj_t BgL_envz00_3466,
		obj_t BgL_nodez00_3467)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 352 */
			return
				BGl_abortzf3zf3zzdataflow_walkz00(
				(BgL_nodez00_bglt) (BgL_nodez00_3467));
		}
	}



/* _abort?-default3576 */
	obj_t BGl__abortzf3zd2default3576z21zzdataflow_walkz00(obj_t BgL_envz00_3468,
		obj_t BgL_nodez00_3469)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 17 */
			return BBOOL(((bool_t) 0));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzdataflow_walkz00()
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 17 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_varz00zzast_nodez00, BGl_proc4097z00zzdataflow_walkz00,
				BGl_string4094z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_sequencez00zzast_nodez00, BGl_proc4098z00zzdataflow_walkz00,
				BGl_string4094z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_appz00zzast_nodez00, BGl_proc4099z00zzdataflow_walkz00,
				BGl_string4094z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc4100z00zzdataflow_walkz00,
				BGl_string4094z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_funcallz00zzast_nodez00, BGl_proc4101z00zzdataflow_walkz00,
				BGl_string4094z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_externz00zzast_nodez00, BGl_proc4102z00zzdataflow_walkz00,
				BGl_string4094z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_setqz00zzast_nodez00, BGl_proc4103z00zzdataflow_walkz00,
				BGl_string4094z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc4104z00zzdataflow_walkz00,
				BGl_string4094z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_failz00zzast_nodez00, BGl_proc4105z00zzdataflow_walkz00,
				BGl_string4094z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_selectz00zzast_nodez00, BGl_proc4106z00zzdataflow_walkz00,
				BGl_string4094z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc4107z00zzdataflow_walkz00,
				BGl_string4094z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc4108z00zzdataflow_walkz00,
				BGl_string4094z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc4109z00zzdataflow_walkz00,
				BGl_string4094z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc4110z00zzdataflow_walkz00,
				BGl_string4094z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc4111z00zzdataflow_walkz00,
				BGl_string4094z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc4112z00zzdataflow_walkz00,
				BGl_string4094z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc4113z00zzdataflow_walkz00,
				BGl_string4094z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
				BGl_appz00zzast_nodez00, BGl_proc4114z00zzdataflow_walkz00,
				BGl_string4095z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
				BGl_isaz00zzast_nodez00, BGl_proc4115z00zzdataflow_walkz00,
				BGl_string4095z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc4116z00zzdataflow_walkz00,
				BGl_string4095z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
				BGl_varz00zzast_nodez00, BGl_proc4117z00zzdataflow_walkz00,
				BGl_string4095z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc4118z00zzdataflow_walkz00,
				BGl_string4095z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_abortzf3zd2envz21zzdataflow_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc4119z00zzdataflow_walkz00, BGl_string4096z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_abortzf3zd2envz21zzdataflow_walkz00, BGl_sequencez00zzast_nodez00,
				BGl_proc4120z00zzdataflow_walkz00, BGl_string4096z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_abortzf3zd2envz21zzdataflow_walkz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc4121z00zzdataflow_walkz00, BGl_string4096z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_abortzf3zd2envz21zzdataflow_walkz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc4122z00zzdataflow_walkz00, BGl_string4096z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_abortzf3zd2envz21zzdataflow_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc4123z00zzdataflow_walkz00,
				BGl_string4096z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_abortzf3zd2envz21zzdataflow_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc4124z00zzdataflow_walkz00, BGl_string4096z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_abortzf3zd2envz21zzdataflow_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc4125z00zzdataflow_walkz00, BGl_string4096z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_abortzf3zd2envz21zzdataflow_walkz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc4126z00zzdataflow_walkz00, BGl_string4096z00zzdataflow_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_localzf2valuezf2zzdataflow_walkz00,
				BGl_proc4127z00zzdataflow_walkz00, BGl_string4128z00zzdataflow_walkz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_localzf2valuezf2zzdataflow_walkz00,
				BGl_proc4129z00zzdataflow_walkz00, BGl_string4130z00zzdataflow_walkz00);
		}
	}



/* struct+object->objec3597 */
	obj_t BGl_structzb2objectzd2ze3objec3597z83zzdataflow_walkz00(obj_t
		BgL_envz00_3509, obj_t BgL_oz00_3510, obj_t BgL_sz00_3511)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 33 */
			{
				BgL_localzf2valuezf2_bglt BgL_oz00_1803;

				obj_t BgL_sz00_1804;

				{	/* Dataflow/walk.scm 33 */
					BgL_localzf2valuezf2_bglt BgL_auxz00_3930;

					BgL_oz00_1803 = (BgL_localzf2valuezf2_bglt) (BgL_oz00_3510);
					BgL_sz00_1804 = BgL_sz00_3511;
					{

						{	/* Dataflow/walk.scm 33 */
							obj_t BgL_old3397z00_1807;

							obj_t BgL_aux3398z00_1808;

							{	/* Dataflow/walk.scm 33 */
								obj_t BgL_nextzd2method3596zd2_1814;

								BgL_nextzd2method3596zd2_1814 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1803),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_localzf2valuezf2zzdataflow_walkz00);
								if (PROCEDUREP(BgL_nextzd2method3596zd2_1814))
									{	/* Dataflow/walk.scm 33 */
										BgL_old3397z00_1807 =
											PROCEDURE_ENTRY(BgL_nextzd2method3596zd2_1814)
											(BgL_nextzd2method3596zd2_1814, (obj_t) (BgL_oz00_1803),
											BgL_sz00_1804, BEOA);
									}
								else
									{	/* Dataflow/walk.scm 33 */
										BgL_old3397z00_1807 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1803), BgL_sz00_1804));
									}
							}
							BgL_aux3398z00_1808 =
								STRUCT_REF(BgL_sz00_1804, (int) (((long) 0)));
							{	/* Dataflow/walk.scm 33 */
								BgL_localzf2valuezf2_bglt BgL_new3399z00_1809;

								BgL_new3399z00_1809 =
									((BgL_localzf2valuezf2_bglt) (BgL_old3397z00_1807));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3399z00_1809),
									BGl_classzd2numzd2zz__objectz00
									(BGl_localzf2valuezf2zzdataflow_walkz00));
								{	/* Dataflow/walk.scm 33 */
									BgL_localzf2valuezf2_bglt BgL_arg3942z00_1811;

									{	/* Dataflow/walk.scm 33 */
										obj_t BgL_arg3943z00_1812;

										obj_t BgL_arg3944z00_1813;

										BgL_arg3943z00_1812 =
											STRUCT_REF(BgL_aux3398z00_1808, (int) (((long) 0)));
										BgL_arg3944z00_1813 =
											STRUCT_REF(BgL_aux3398z00_1808, (int) (((long) 1)));
										{	/* Dataflow/walk.scm 33 */
											BgL_localzf2valuezf2_bglt BgL_res4083z00_3447;

											{	/* Dataflow/walk.scm 33 */
												int BgL_stamp3367z00_3438;

												BgL_nodez00_bglt BgL_node3368z00_3439;

												BgL_stamp3367z00_3438 = CINT(BgL_arg3943z00_1812);
												BgL_node3368z00_3439 =
													(BgL_nodez00_bglt) (BgL_arg3944z00_1813);
												{	/* Dataflow/walk.scm 33 */
													BgL_localzf2valuezf2_bglt BgL_new3369z00_3440;

													BgL_new3369z00_3440 =
														((BgL_localzf2valuezf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_localzf2valuezf2_bgl))));
													{	/* Dataflow/walk.scm 33 */
														BgL_localzf2valuezf2_bglt BgL_res4082z00_3446;

														{	/* Dataflow/walk.scm 33 */
															BgL_localzf2valuezf2_bglt BgL_new3387z00_3441;

															BgL_new3387z00_3441 = BgL_new3369z00_3440;
															{	/* Dataflow/walk.scm 33 */
																int BgL_stamp3385z00_3444;

																BgL_nodez00_bglt BgL_node3386z00_3445;

																BgL_stamp3385z00_3444 = BgL_stamp3367z00_3438;
																BgL_node3386z00_3445 = BgL_node3368z00_3439;
																((((BgL_localzf2valuezf2_bglt)
																			CREF(BgL_new3387z00_3441))->
																		BgL_stampz00) =
																	((int) BgL_stamp3385z00_3444), BUNSPEC);
																((((BgL_localzf2valuezf2_bglt)
																			CREF(BgL_new3387z00_3441))->BgL_nodez00) =
																	((BgL_nodez00_bglt) BgL_node3386z00_3445),
																	BUNSPEC);
																BgL_res4082z00_3446 = BgL_new3387z00_3441;
														}} BgL_res4082z00_3446;
													}
													BgL_res4083z00_3447 = BgL_new3369z00_3440;
											}}
											BgL_arg3942z00_1811 = BgL_res4083z00_3447;
									}}
									{	/* Dataflow/walk.scm 33 */
										obj_t BgL_auxz00_3958;

										BgL_objectz00_bglt BgL_auxz00_3956;

										BgL_auxz00_3958 = (obj_t) (BgL_arg3942z00_1811);
										BgL_auxz00_3956 =
											(BgL_objectz00_bglt) (BgL_new3399z00_1809);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3956, BgL_auxz00_3958);
								}}
								BgL_auxz00_3930 = BgL_new3399z00_1809;
					}}}
					return (obj_t) (BgL_auxz00_3930);
				}
			}
		}
	}



/* object->struct-local3595 */
	obj_t BGl_objectzd2ze3structzd2local3595ze3zzdataflow_walkz00(obj_t
		BgL_envz00_3512, obj_t BgL_obj3394z00_3513)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 33 */
			{
				BgL_localzf2valuezf2_bglt BgL_obj3394z00_1791;

				BgL_obj3394z00_1791 = (BgL_localzf2valuezf2_bglt) (BgL_obj3394z00_3513);
				{

					{	/* Dataflow/walk.scm 33 */
						obj_t BgL_res3395z00_1794;

						{	/* Dataflow/walk.scm 33 */
							obj_t BgL_nextzd2method3594zd2_1801;

							BgL_nextzd2method3594zd2_1801 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3394z00_1791),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_localzf2valuezf2zzdataflow_walkz00);
							if (PROCEDUREP(BgL_nextzd2method3594zd2_1801))
								{	/* Dataflow/walk.scm 33 */
									BgL_res3395z00_1794 =
										PROCEDURE_ENTRY(BgL_nextzd2method3594zd2_1801)
										(BgL_nextzd2method3594zd2_1801,
										(obj_t) (BgL_obj3394z00_1791), BEOA);
								}
							else
								{	/* Dataflow/walk.scm 33 */
									BgL_res3395z00_1794 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3394z00_1791));
								}
						}
						{	/* Dataflow/walk.scm 33 */
							obj_t BgL_aux3396z00_1795;

							{	/* Dataflow/walk.scm 33 */
								obj_t BgL_keyz00_3409;

								BgL_keyz00_3409 = CNST_TABLE_REF(((long) 3));
								BgL_aux3396z00_1795 =
									make_struct(BgL_keyz00_3409, (int) (((long) 2)), BUNSPEC);
							}
							{	/* Dataflow/walk.scm 33 */
								int BgL_arg3936z00_1797;

								{
									obj_t BgL_auxz00_3975;

									{	/* Dataflow/walk.scm 33 */
										BgL_objectz00_bglt BgL_auxz00_3976;

										BgL_auxz00_3976 =
											(BgL_objectz00_bglt) (BgL_obj3394z00_1791);
										BgL_auxz00_3975 = BGL_OBJECT_WIDENING(BgL_auxz00_3976);
									}
									BgL_arg3936z00_1797 =
										(((BgL_localzf2valuezf2_bglt) CREF(BgL_auxz00_3975))->
										BgL_stampz00);
								}
								{	/* Dataflow/walk.scm 33 */
									obj_t BgL_auxz00_3982;

									int BgL_auxz00_3980;

									BgL_auxz00_3982 = BINT(BgL_arg3936z00_1797);
									BgL_auxz00_3980 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3396z00_1795, BgL_auxz00_3980,
										BgL_auxz00_3982);
							}}
							{	/* Dataflow/walk.scm 33 */
								BgL_nodez00_bglt BgL_arg3938z00_1799;

								{
									obj_t BgL_auxz00_3985;

									{	/* Dataflow/walk.scm 33 */
										BgL_objectz00_bglt BgL_auxz00_3986;

										BgL_auxz00_3986 =
											(BgL_objectz00_bglt) (BgL_obj3394z00_1791);
										BgL_auxz00_3985 = BGL_OBJECT_WIDENING(BgL_auxz00_3986);
									}
									BgL_arg3938z00_1799 =
										(((BgL_localzf2valuezf2_bglt) CREF(BgL_auxz00_3985))->
										BgL_nodez00);
								}
								{	/* Dataflow/walk.scm 33 */
									obj_t BgL_auxz00_3992;

									int BgL_auxz00_3990;

									BgL_auxz00_3992 = (obj_t) (BgL_arg3938z00_1799);
									BgL_auxz00_3990 = (int) (((long) 1));
									STRUCT_SET(BgL_aux3396z00_1795, BgL_auxz00_3990,
										BgL_auxz00_3992);
							}}
							{	/* Dataflow/walk.scm 33 */
								int BgL_auxz00_3995;

								BgL_auxz00_3995 = (int) (((long) 0));
								STRUCT_SET(BgL_res3395z00_1794, BgL_auxz00_3995,
									BgL_aux3396z00_1795);
							}
							{	/* Dataflow/walk.scm 33 */
								obj_t BgL_auxz00_3998;

								BgL_auxz00_3998 = STRUCT_KEY(BgL_res3395z00_1794);
								STRUCT_KEY_SET(BgL_aux3396z00_1795, BgL_auxz00_3998);
							}
							{	/* Dataflow/walk.scm 33 */
								obj_t BgL_kz00_3428;

								BgL_kz00_3428 = CNST_TABLE_REF(((long) 3));
								STRUCT_KEY_SET(BgL_res3395z00_1794, BgL_kz00_3428);
							}
							return BgL_res3395z00_1794;
						}
					}
				}
			}
		}
	}



/* abort?-app-ly3593 */
	obj_t BGl_abortzf3zd2appzd2ly3593zf3zzdataflow_walkz00(obj_t BgL_envz00_3514,
		obj_t BgL_nodez00_3515)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 405 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1782;

				BgL_nodez00_1782 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_3515);
				{	/* Dataflow/walk.scm 407 */
					obj_t BgL__ortest_3502z00_1786;

					{	/* Dataflow/walk.scm 407 */
						BgL_nodez00_bglt BgL_arg3933z00_1788;

						BgL_arg3933z00_1788 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1782))->BgL_funz00);
						{	/* Dataflow/walk.scm 407 */
							obj_t BgL_method3577z00_3357;

							{	/* Dataflow/walk.scm 407 */
								BgL_objectz00_bglt BgL_objz00_3358;

								BgL_objz00_3358 = (BgL_objectz00_bglt) (BgL_arg3933z00_1788);
								{	/* Dataflow/walk.scm 407 */
									long BgL_objzd2classzd2numz00_3359;

									BgL_objzd2classzd2numz00_3359 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3358);
									{	/* Dataflow/walk.scm 407 */
										obj_t BgL_arg2643z00_3360;

										BgL_arg2643z00_3360 =
											PROCEDURE_REF(BGl_abortzf3zd2envz21zzdataflow_walkz00,
											(int) (((long) 1)));
										{	/* Dataflow/walk.scm 407 */
											obj_t BgL_arrayz00_3362;

											int BgL_offsetz00_3363;

											BgL_arrayz00_3362 = BgL_arg2643z00_3360;
											BgL_offsetz00_3363 =
												(int) (BgL_objzd2classzd2numz00_3359);
											{	/* Dataflow/walk.scm 407 */
												long BgL_offsetz00_3364;

												BgL_offsetz00_3364 =
													((long) (BgL_offsetz00_3363) - OBJECT_TYPE);
												{	/* Dataflow/walk.scm 407 */
													long BgL_modz00_3365;

													{	/* Dataflow/walk.scm 407 */
														int BgL_arg2645z00_3366;

														BgL_arg2645z00_3366 = (int) (((long) 16));
														{	/* Dataflow/walk.scm 407 */
															long BgL_auxz00_4013;

															BgL_auxz00_4013 = (long) (BgL_arg2645z00_3366);
															BgL_modz00_3365 =
																(BgL_offsetz00_3364 / BgL_auxz00_4013);
													}}
													{	/* Dataflow/walk.scm 407 */
														long BgL_restz00_3367;

														{	/* Dataflow/walk.scm 407 */
															int BgL_arg2644z00_3368;

															BgL_arg2644z00_3368 = (int) (((long) 16));
															{	/* Dataflow/walk.scm 407 */
																long BgL_auxz00_4017;

																BgL_auxz00_4017 = (long) (BgL_arg2644z00_3368);
																BgL_restz00_3367 =
																	(BgL_offsetz00_3364 % BgL_auxz00_4017);
														}}
														{	/* Dataflow/walk.scm 407 */

															BgL_method3577z00_3357 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3362,
																	(int) (BgL_modz00_3365)),
																(int) (BgL_restz00_3367));
							}}}}}}}}
							BgL__ortest_3502z00_1786 =
								PROCEDURE_ENTRY(BgL_method3577z00_3357) (BgL_method3577z00_3357,
								(obj_t) (BgL_arg3933z00_1788), BEOA);
					}}
					if (CBOOL(BgL__ortest_3502z00_1786))
						{	/* Dataflow/walk.scm 407 */
							return BgL__ortest_3502z00_1786;
						}
					else
						{	/* Dataflow/walk.scm 407 */
							BgL_nodez00_bglt BgL_arg3932z00_1787;

							BgL_arg3932z00_1787 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1782))->BgL_argz00);
							{	/* Dataflow/walk.scm 407 */
								obj_t BgL_method3577z00_3384;

								{	/* Dataflow/walk.scm 407 */
									BgL_objectz00_bglt BgL_objz00_3385;

									BgL_objz00_3385 = (BgL_objectz00_bglt) (BgL_arg3932z00_1787);
									{	/* Dataflow/walk.scm 407 */
										long BgL_objzd2classzd2numz00_3386;

										BgL_objzd2classzd2numz00_3386 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3385);
										{	/* Dataflow/walk.scm 407 */
											obj_t BgL_arg2643z00_3387;

											BgL_arg2643z00_3387 =
												PROCEDURE_REF(BGl_abortzf3zd2envz21zzdataflow_walkz00,
												(int) (((long) 1)));
											{	/* Dataflow/walk.scm 407 */
												obj_t BgL_arrayz00_3389;

												int BgL_offsetz00_3390;

												BgL_arrayz00_3389 = BgL_arg2643z00_3387;
												BgL_offsetz00_3390 =
													(int) (BgL_objzd2classzd2numz00_3386);
												{	/* Dataflow/walk.scm 407 */
													long BgL_offsetz00_3391;

													BgL_offsetz00_3391 =
														((long) (BgL_offsetz00_3390) - OBJECT_TYPE);
													{	/* Dataflow/walk.scm 407 */
														long BgL_modz00_3392;

														{	/* Dataflow/walk.scm 407 */
															int BgL_arg2645z00_3393;

															BgL_arg2645z00_3393 = (int) (((long) 16));
															{	/* Dataflow/walk.scm 407 */
																long BgL_auxz00_4038;

																BgL_auxz00_4038 = (long) (BgL_arg2645z00_3393);
																BgL_modz00_3392 =
																	(BgL_offsetz00_3391 / BgL_auxz00_4038);
														}}
														{	/* Dataflow/walk.scm 407 */
															long BgL_restz00_3394;

															{	/* Dataflow/walk.scm 407 */
																int BgL_arg2644z00_3395;

																BgL_arg2644z00_3395 = (int) (((long) 16));
																{	/* Dataflow/walk.scm 407 */
																	long BgL_auxz00_4042;

																	BgL_auxz00_4042 =
																		(long) (BgL_arg2644z00_3395);
																	BgL_restz00_3394 =
																		(BgL_offsetz00_3391 % BgL_auxz00_4042);
															}}
															{	/* Dataflow/walk.scm 407 */

																BgL_method3577z00_3384 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3389,
																		(int) (BgL_modz00_3392)),
																	(int) (BgL_restz00_3394));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method3577z00_3384)
									(BgL_method3577z00_3384, (obj_t) (BgL_arg3932z00_1787), BEOA);
							}
						}
				}
			}
		}
	}



/* abort?-funcall3591 */
	obj_t BGl_abortzf3zd2funcall3591z21zzdataflow_walkz00(obj_t BgL_envz00_3516,
		obj_t BgL_nodez00_3517)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 398 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1765;

				BgL_nodez00_1765 = (BgL_funcallz00_bglt) (BgL_nodez00_3517);
				{	/* Dataflow/walk.scm 400 */
					obj_t BgL__ortest_3499z00_1769;

					{	/* Dataflow/walk.scm 400 */
						BgL_nodez00_bglt BgL_arg3930z00_1779;

						BgL_arg3930z00_1779 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1765))->BgL_funz00);
						{	/* Dataflow/walk.scm 400 */
							obj_t BgL_method3577z00_3300;

							{	/* Dataflow/walk.scm 400 */
								BgL_objectz00_bglt BgL_objz00_3301;

								BgL_objz00_3301 = (BgL_objectz00_bglt) (BgL_arg3930z00_1779);
								{	/* Dataflow/walk.scm 400 */
									long BgL_objzd2classzd2numz00_3302;

									BgL_objzd2classzd2numz00_3302 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3301);
									{	/* Dataflow/walk.scm 400 */
										obj_t BgL_arg2643z00_3303;

										BgL_arg2643z00_3303 =
											PROCEDURE_REF(BGl_abortzf3zd2envz21zzdataflow_walkz00,
											(int) (((long) 1)));
										{	/* Dataflow/walk.scm 400 */
											obj_t BgL_arrayz00_3305;

											int BgL_offsetz00_3306;

											BgL_arrayz00_3305 = BgL_arg2643z00_3303;
											BgL_offsetz00_3306 =
												(int) (BgL_objzd2classzd2numz00_3302);
											{	/* Dataflow/walk.scm 400 */
												long BgL_offsetz00_3307;

												BgL_offsetz00_3307 =
													((long) (BgL_offsetz00_3306) - OBJECT_TYPE);
												{	/* Dataflow/walk.scm 400 */
													long BgL_modz00_3308;

													{	/* Dataflow/walk.scm 400 */
														int BgL_arg2645z00_3309;

														BgL_arg2645z00_3309 = (int) (((long) 16));
														{	/* Dataflow/walk.scm 400 */
															long BgL_auxz00_4062;

															BgL_auxz00_4062 = (long) (BgL_arg2645z00_3309);
															BgL_modz00_3308 =
																(BgL_offsetz00_3307 / BgL_auxz00_4062);
													}}
													{	/* Dataflow/walk.scm 400 */
														long BgL_restz00_3310;

														{	/* Dataflow/walk.scm 400 */
															int BgL_arg2644z00_3311;

															BgL_arg2644z00_3311 = (int) (((long) 16));
															{	/* Dataflow/walk.scm 400 */
																long BgL_auxz00_4066;

																BgL_auxz00_4066 = (long) (BgL_arg2644z00_3311);
																BgL_restz00_3310 =
																	(BgL_offsetz00_3307 % BgL_auxz00_4066);
														}}
														{	/* Dataflow/walk.scm 400 */

															BgL_method3577z00_3300 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3305,
																	(int) (BgL_modz00_3308)),
																(int) (BgL_restz00_3310));
							}}}}}}}}
							BgL__ortest_3499z00_1769 =
								PROCEDURE_ENTRY(BgL_method3577z00_3300) (BgL_method3577z00_3300,
								(obj_t) (BgL_arg3930z00_1779), BEOA);
					}}
					if (CBOOL(BgL__ortest_3499z00_1769))
						{	/* Dataflow/walk.scm 400 */
							return BgL__ortest_3499z00_1769;
						}
					else
						{	/* Dataflow/walk.scm 400 */
							obj_t BgL_g3525z00_1770;

							BgL_g3525z00_1770 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1765))->BgL_argsz00);
							{
								obj_t BgL_l3523z00_1772;

								{	/* Dataflow/walk.scm 400 */
									bool_t BgL_auxz00_4079;

									BgL_l3523z00_1772 = BgL_g3525z00_1770;
								BgL_zc3anonymousza33925ze3z83_1773:
									if (NULLP(BgL_l3523z00_1772))
										{	/* Dataflow/walk.scm 400 */
											BgL_auxz00_4079 = ((bool_t) 0);
										}
									else
										{	/* Dataflow/walk.scm 400 */
											bool_t BgL_testz00_4082;

											{	/* Dataflow/walk.scm 400 */
												obj_t BgL_arg3929z00_1777;

												BgL_arg3929z00_1777 = CAR(BgL_l3523z00_1772);
												{	/* Dataflow/walk.scm 400 */
													BgL_nodez00_bglt BgL_nodez00_3328;

													BgL_nodez00_3328 =
														(BgL_nodez00_bglt) (BgL_arg3929z00_1777);
													{	/* Dataflow/walk.scm 400 */
														obj_t BgL_method3577z00_3329;

														{	/* Dataflow/walk.scm 400 */
															BgL_objectz00_bglt BgL_objz00_3330;

															BgL_objz00_3330 =
																(BgL_objectz00_bglt) (BgL_nodez00_3328);
															{	/* Dataflow/walk.scm 400 */
																long BgL_objzd2classzd2numz00_3331;

																BgL_objzd2classzd2numz00_3331 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_3330);
																{	/* Dataflow/walk.scm 400 */
																	obj_t BgL_arg2643z00_3332;

																	BgL_arg2643z00_3332 =
																		PROCEDURE_REF
																		(BGl_abortzf3zd2envz21zzdataflow_walkz00,
																		(int) (((long) 1)));
																	{	/* Dataflow/walk.scm 400 */
																		obj_t BgL_arrayz00_3334;

																		int BgL_offsetz00_3335;

																		BgL_arrayz00_3334 = BgL_arg2643z00_3332;
																		BgL_offsetz00_3335 =
																			(int) (BgL_objzd2classzd2numz00_3331);
																		{	/* Dataflow/walk.scm 400 */
																			long BgL_offsetz00_3336;

																			BgL_offsetz00_3336 =
																				(
																				(long) (BgL_offsetz00_3335) -
																				OBJECT_TYPE);
																			{	/* Dataflow/walk.scm 400 */
																				long BgL_modz00_3337;

																				{	/* Dataflow/walk.scm 400 */
																					int BgL_arg2645z00_3338;

																					BgL_arg2645z00_3338 =
																						(int) (((long) 16));
																					{	/* Dataflow/walk.scm 400 */
																						long BgL_auxz00_4093;

																						BgL_auxz00_4093 =
																							(long) (BgL_arg2645z00_3338);
																						BgL_modz00_3337 =
																							(BgL_offsetz00_3336 /
																							BgL_auxz00_4093);
																				}}
																				{	/* Dataflow/walk.scm 400 */
																					long BgL_restz00_3339;

																					{	/* Dataflow/walk.scm 400 */
																						int BgL_arg2644z00_3340;

																						BgL_arg2644z00_3340 =
																							(int) (((long) 16));
																						{	/* Dataflow/walk.scm 400 */
																							long BgL_auxz00_4097;

																							BgL_auxz00_4097 =
																								(long) (BgL_arg2644z00_3340);
																							BgL_restz00_3339 =
																								(BgL_offsetz00_3336 %
																								BgL_auxz00_4097);
																					}}
																					{	/* Dataflow/walk.scm 400 */

																						BgL_method3577z00_3329 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_3334,
																								(int) (BgL_modz00_3337)),
																							(int) (BgL_restz00_3339));
														}}}}}}}}
														BgL_testz00_4082 =
															CBOOL(PROCEDURE_ENTRY(BgL_method3577z00_3329)
															(BgL_method3577z00_3329,
																(obj_t) (BgL_nodez00_3328), BEOA));
											}}}
											if (BgL_testz00_4082)
												{	/* Dataflow/walk.scm 400 */
													BgL_auxz00_4079 = ((bool_t) 1);
												}
											else
												{
													obj_t BgL_l3523z00_4108;

													BgL_l3523z00_4108 = CDR(BgL_l3523z00_1772);
													BgL_l3523z00_1772 = BgL_l3523z00_4108;
													goto BgL_zc3anonymousza33925ze3z83_1773;
												}
										}
									return BBOOL(BgL_auxz00_4079);
								}
							}
						}
				}
			}
		}
	}



/* abort?-app3589 */
	obj_t BGl_abortzf3zd2app3589z21zzdataflow_walkz00(obj_t BgL_envz00_3518,
		obj_t BgL_nodez00_3519)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 391 */
			{
				BgL_appz00_bglt BgL_nodez00_1748;

				BgL_nodez00_1748 = (BgL_appz00_bglt) (BgL_nodez00_3519);
				{	/* Dataflow/walk.scm 393 */
					obj_t BgL__ortest_3496z00_1752;

					{	/* Dataflow/walk.scm 393 */
						BgL_varz00_bglt BgL_arg3923z00_1762;

						BgL_arg3923z00_1762 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1748))->BgL_funz00);
						{	/* Dataflow/walk.scm 393 */
							BgL_nodez00_bglt BgL_nodez00_3242;

							BgL_nodez00_3242 = (BgL_nodez00_bglt) (BgL_arg3923z00_1762);
							{	/* Dataflow/walk.scm 393 */
								obj_t BgL_method3577z00_3243;

								{	/* Dataflow/walk.scm 393 */
									BgL_objectz00_bglt BgL_objz00_3244;

									BgL_objz00_3244 = (BgL_objectz00_bglt) (BgL_nodez00_3242);
									{	/* Dataflow/walk.scm 393 */
										long BgL_objzd2classzd2numz00_3245;

										BgL_objzd2classzd2numz00_3245 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3244);
										{	/* Dataflow/walk.scm 393 */
											obj_t BgL_arg2643z00_3246;

											BgL_arg2643z00_3246 =
												PROCEDURE_REF(BGl_abortzf3zd2envz21zzdataflow_walkz00,
												(int) (((long) 1)));
											{	/* Dataflow/walk.scm 393 */
												obj_t BgL_arrayz00_3248;

												int BgL_offsetz00_3249;

												BgL_arrayz00_3248 = BgL_arg2643z00_3246;
												BgL_offsetz00_3249 =
													(int) (BgL_objzd2classzd2numz00_3245);
												{	/* Dataflow/walk.scm 393 */
													long BgL_offsetz00_3250;

													BgL_offsetz00_3250 =
														((long) (BgL_offsetz00_3249) - OBJECT_TYPE);
													{	/* Dataflow/walk.scm 393 */
														long BgL_modz00_3251;

														{	/* Dataflow/walk.scm 393 */
															int BgL_arg2645z00_3252;

															BgL_arg2645z00_3252 = (int) (((long) 16));
															{	/* Dataflow/walk.scm 393 */
																long BgL_auxz00_4122;

																BgL_auxz00_4122 = (long) (BgL_arg2645z00_3252);
																BgL_modz00_3251 =
																	(BgL_offsetz00_3250 / BgL_auxz00_4122);
														}}
														{	/* Dataflow/walk.scm 393 */
															long BgL_restz00_3253;

															{	/* Dataflow/walk.scm 393 */
																int BgL_arg2644z00_3254;

																BgL_arg2644z00_3254 = (int) (((long) 16));
																{	/* Dataflow/walk.scm 393 */
																	long BgL_auxz00_4126;

																	BgL_auxz00_4126 =
																		(long) (BgL_arg2644z00_3254);
																	BgL_restz00_3253 =
																		(BgL_offsetz00_3250 % BgL_auxz00_4126);
															}}
															{	/* Dataflow/walk.scm 393 */

																BgL_method3577z00_3243 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3248,
																		(int) (BgL_modz00_3251)),
																	(int) (BgL_restz00_3253));
								}}}}}}}}
								BgL__ortest_3496z00_1752 =
									PROCEDURE_ENTRY(BgL_method3577z00_3243)
									(BgL_method3577z00_3243, (obj_t) (BgL_nodez00_3242), BEOA);
					}}}
					if (CBOOL(BgL__ortest_3496z00_1752))
						{	/* Dataflow/walk.scm 393 */
							return BgL__ortest_3496z00_1752;
						}
					else
						{	/* Dataflow/walk.scm 393 */
							obj_t BgL_g3522z00_1753;

							BgL_g3522z00_1753 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1748))->BgL_argsz00);
							{
								obj_t BgL_l3520z00_1755;

								{	/* Dataflow/walk.scm 393 */
									bool_t BgL_auxz00_4139;

									BgL_l3520z00_1755 = BgL_g3522z00_1753;
								BgL_zc3anonymousza33917ze3z83_1756:
									if (NULLP(BgL_l3520z00_1755))
										{	/* Dataflow/walk.scm 393 */
											BgL_auxz00_4139 = ((bool_t) 0);
										}
									else
										{	/* Dataflow/walk.scm 393 */
											bool_t BgL_testz00_4142;

											{	/* Dataflow/walk.scm 393 */
												obj_t BgL_arg3922z00_1760;

												BgL_arg3922z00_1760 = CAR(BgL_l3520z00_1755);
												{	/* Dataflow/walk.scm 393 */
													BgL_nodez00_bglt BgL_nodez00_3271;

													BgL_nodez00_3271 =
														(BgL_nodez00_bglt) (BgL_arg3922z00_1760);
													{	/* Dataflow/walk.scm 393 */
														obj_t BgL_method3577z00_3272;

														{	/* Dataflow/walk.scm 393 */
															BgL_objectz00_bglt BgL_objz00_3273;

															BgL_objz00_3273 =
																(BgL_objectz00_bglt) (BgL_nodez00_3271);
															{	/* Dataflow/walk.scm 393 */
																long BgL_objzd2classzd2numz00_3274;

																BgL_objzd2classzd2numz00_3274 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_3273);
																{	/* Dataflow/walk.scm 393 */
																	obj_t BgL_arg2643z00_3275;

																	BgL_arg2643z00_3275 =
																		PROCEDURE_REF
																		(BGl_abortzf3zd2envz21zzdataflow_walkz00,
																		(int) (((long) 1)));
																	{	/* Dataflow/walk.scm 393 */
																		obj_t BgL_arrayz00_3277;

																		int BgL_offsetz00_3278;

																		BgL_arrayz00_3277 = BgL_arg2643z00_3275;
																		BgL_offsetz00_3278 =
																			(int) (BgL_objzd2classzd2numz00_3274);
																		{	/* Dataflow/walk.scm 393 */
																			long BgL_offsetz00_3279;

																			BgL_offsetz00_3279 =
																				(
																				(long) (BgL_offsetz00_3278) -
																				OBJECT_TYPE);
																			{	/* Dataflow/walk.scm 393 */
																				long BgL_modz00_3280;

																				{	/* Dataflow/walk.scm 393 */
																					int BgL_arg2645z00_3281;

																					BgL_arg2645z00_3281 =
																						(int) (((long) 16));
																					{	/* Dataflow/walk.scm 393 */
																						long BgL_auxz00_4153;

																						BgL_auxz00_4153 =
																							(long) (BgL_arg2645z00_3281);
																						BgL_modz00_3280 =
																							(BgL_offsetz00_3279 /
																							BgL_auxz00_4153);
																				}}
																				{	/* Dataflow/walk.scm 393 */
																					long BgL_restz00_3282;

																					{	/* Dataflow/walk.scm 393 */
																						int BgL_arg2644z00_3283;

																						BgL_arg2644z00_3283 =
																							(int) (((long) 16));
																						{	/* Dataflow/walk.scm 393 */
																							long BgL_auxz00_4157;

																							BgL_auxz00_4157 =
																								(long) (BgL_arg2644z00_3283);
																							BgL_restz00_3282 =
																								(BgL_offsetz00_3279 %
																								BgL_auxz00_4157);
																					}}
																					{	/* Dataflow/walk.scm 393 */

																						BgL_method3577z00_3272 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_3277,
																								(int) (BgL_modz00_3280)),
																							(int) (BgL_restz00_3282));
														}}}}}}}}
														BgL_testz00_4142 =
															CBOOL(PROCEDURE_ENTRY(BgL_method3577z00_3272)
															(BgL_method3577z00_3272,
																(obj_t) (BgL_nodez00_3271), BEOA));
											}}}
											if (BgL_testz00_4142)
												{	/* Dataflow/walk.scm 393 */
													BgL_auxz00_4139 = ((bool_t) 1);
												}
											else
												{
													obj_t BgL_l3520z00_4168;

													BgL_l3520z00_4168 = CDR(BgL_l3520z00_1755);
													BgL_l3520z00_1755 = BgL_l3520z00_4168;
													goto BgL_zc3anonymousza33917ze3z83_1756;
												}
										}
									return BBOOL(BgL_auxz00_4139);
								}
							}
						}
				}
			}
		}
	}



/* abort?-conditional3587 */
	obj_t BGl_abortzf3zd2conditional3587z21zzdataflow_walkz00(obj_t
		BgL_envz00_3520, obj_t BgL_nodez00_3521)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 384 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1737;

				BgL_nodez00_1737 = (BgL_conditionalz00_bglt) (BgL_nodez00_3521);
				{	/* Dataflow/walk.scm 386 */
					obj_t BgL__ortest_3492z00_1741;

					{	/* Dataflow/walk.scm 386 */
						BgL_nodez00_bglt BgL_arg3915z00_1745;

						BgL_arg3915z00_1745 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1737))->BgL_testz00);
						{	/* Dataflow/walk.scm 386 */
							obj_t BgL_method3577z00_3162;

							{	/* Dataflow/walk.scm 386 */
								BgL_objectz00_bglt BgL_objz00_3163;

								BgL_objz00_3163 = (BgL_objectz00_bglt) (BgL_arg3915z00_1745);
								{	/* Dataflow/walk.scm 386 */
									long BgL_objzd2classzd2numz00_3164;

									BgL_objzd2classzd2numz00_3164 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3163);
									{	/* Dataflow/walk.scm 386 */
										obj_t BgL_arg2643z00_3165;

										BgL_arg2643z00_3165 =
											PROCEDURE_REF(BGl_abortzf3zd2envz21zzdataflow_walkz00,
											(int) (((long) 1)));
										{	/* Dataflow/walk.scm 386 */
											obj_t BgL_arrayz00_3167;

											int BgL_offsetz00_3168;

											BgL_arrayz00_3167 = BgL_arg2643z00_3165;
											BgL_offsetz00_3168 =
												(int) (BgL_objzd2classzd2numz00_3164);
											{	/* Dataflow/walk.scm 386 */
												long BgL_offsetz00_3169;

												BgL_offsetz00_3169 =
													((long) (BgL_offsetz00_3168) - OBJECT_TYPE);
												{	/* Dataflow/walk.scm 386 */
													long BgL_modz00_3170;

													{	/* Dataflow/walk.scm 386 */
														int BgL_arg2645z00_3171;

														BgL_arg2645z00_3171 = (int) (((long) 16));
														{	/* Dataflow/walk.scm 386 */
															long BgL_auxz00_4181;

															BgL_auxz00_4181 = (long) (BgL_arg2645z00_3171);
															BgL_modz00_3170 =
																(BgL_offsetz00_3169 / BgL_auxz00_4181);
													}}
													{	/* Dataflow/walk.scm 386 */
														long BgL_restz00_3172;

														{	/* Dataflow/walk.scm 386 */
															int BgL_arg2644z00_3173;

															BgL_arg2644z00_3173 = (int) (((long) 16));
															{	/* Dataflow/walk.scm 386 */
																long BgL_auxz00_4185;

																BgL_auxz00_4185 = (long) (BgL_arg2644z00_3173);
																BgL_restz00_3172 =
																	(BgL_offsetz00_3169 % BgL_auxz00_4185);
														}}
														{	/* Dataflow/walk.scm 386 */

															BgL_method3577z00_3162 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3167,
																	(int) (BgL_modz00_3170)),
																(int) (BgL_restz00_3172));
							}}}}}}}}
							BgL__ortest_3492z00_1741 =
								PROCEDURE_ENTRY(BgL_method3577z00_3162) (BgL_method3577z00_3162,
								(obj_t) (BgL_arg3915z00_1745), BEOA);
					}}
					if (CBOOL(BgL__ortest_3492z00_1741))
						{	/* Dataflow/walk.scm 386 */
							return BgL__ortest_3492z00_1741;
						}
					else
						{	/* Dataflow/walk.scm 386 */
							obj_t BgL__andtest_3493z00_1742;

							{	/* Dataflow/walk.scm 386 */
								BgL_nodez00_bglt BgL_arg3914z00_1744;

								BgL_arg3914z00_1744 =
									(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1737))->
									BgL_truez00);
								{	/* Dataflow/walk.scm 386 */
									obj_t BgL_method3577z00_3189;

									{	/* Dataflow/walk.scm 386 */
										BgL_objectz00_bglt BgL_objz00_3190;

										BgL_objz00_3190 =
											(BgL_objectz00_bglt) (BgL_arg3914z00_1744);
										{	/* Dataflow/walk.scm 386 */
											long BgL_objzd2classzd2numz00_3191;

											BgL_objzd2classzd2numz00_3191 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3190);
											{	/* Dataflow/walk.scm 386 */
												obj_t BgL_arg2643z00_3192;

												BgL_arg2643z00_3192 =
													PROCEDURE_REF(BGl_abortzf3zd2envz21zzdataflow_walkz00,
													(int) (((long) 1)));
												{	/* Dataflow/walk.scm 386 */
													obj_t BgL_arrayz00_3194;

													int BgL_offsetz00_3195;

													BgL_arrayz00_3194 = BgL_arg2643z00_3192;
													BgL_offsetz00_3195 =
														(int) (BgL_objzd2classzd2numz00_3191);
													{	/* Dataflow/walk.scm 386 */
														long BgL_offsetz00_3196;

														BgL_offsetz00_3196 =
															((long) (BgL_offsetz00_3195) - OBJECT_TYPE);
														{	/* Dataflow/walk.scm 386 */
															long BgL_modz00_3197;

															{	/* Dataflow/walk.scm 386 */
																int BgL_arg2645z00_3198;

																BgL_arg2645z00_3198 = (int) (((long) 16));
																{	/* Dataflow/walk.scm 386 */
																	long BgL_auxz00_4206;

																	BgL_auxz00_4206 =
																		(long) (BgL_arg2645z00_3198);
																	BgL_modz00_3197 =
																		(BgL_offsetz00_3196 / BgL_auxz00_4206);
															}}
															{	/* Dataflow/walk.scm 386 */
																long BgL_restz00_3199;

																{	/* Dataflow/walk.scm 386 */
																	int BgL_arg2644z00_3200;

																	BgL_arg2644z00_3200 = (int) (((long) 16));
																	{	/* Dataflow/walk.scm 386 */
																		long BgL_auxz00_4210;

																		BgL_auxz00_4210 =
																			(long) (BgL_arg2644z00_3200);
																		BgL_restz00_3199 =
																			(BgL_offsetz00_3196 % BgL_auxz00_4210);
																}}
																{	/* Dataflow/walk.scm 386 */

																	BgL_method3577z00_3189 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3194,
																			(int) (BgL_modz00_3197)),
																		(int) (BgL_restz00_3199));
									}}}}}}}}
									BgL__andtest_3493z00_1742 =
										PROCEDURE_ENTRY(BgL_method3577z00_3189)
										(BgL_method3577z00_3189, (obj_t) (BgL_arg3914z00_1744),
										BEOA);
							}}
							if (CBOOL(BgL__andtest_3493z00_1742))
								{	/* Dataflow/walk.scm 386 */
									BgL_nodez00_bglt BgL_arg3913z00_1743;

									BgL_arg3913z00_1743 =
										(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1737))->
										BgL_falsez00);
									{	/* Dataflow/walk.scm 386 */
										obj_t BgL_method3577z00_3216;

										{	/* Dataflow/walk.scm 386 */
											BgL_objectz00_bglt BgL_objz00_3217;

											BgL_objz00_3217 =
												(BgL_objectz00_bglt) (BgL_arg3913z00_1743);
											{	/* Dataflow/walk.scm 386 */
												long BgL_objzd2classzd2numz00_3218;

												BgL_objzd2classzd2numz00_3218 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3217);
												{	/* Dataflow/walk.scm 386 */
													obj_t BgL_arg2643z00_3219;

													BgL_arg2643z00_3219 =
														PROCEDURE_REF
														(BGl_abortzf3zd2envz21zzdataflow_walkz00,
														(int) (((long) 1)));
													{	/* Dataflow/walk.scm 386 */
														obj_t BgL_arrayz00_3221;

														int BgL_offsetz00_3222;

														BgL_arrayz00_3221 = BgL_arg2643z00_3219;
														BgL_offsetz00_3222 =
															(int) (BgL_objzd2classzd2numz00_3218);
														{	/* Dataflow/walk.scm 386 */
															long BgL_offsetz00_3223;

															BgL_offsetz00_3223 =
																((long) (BgL_offsetz00_3222) - OBJECT_TYPE);
															{	/* Dataflow/walk.scm 386 */
																long BgL_modz00_3224;

																{	/* Dataflow/walk.scm 386 */
																	int BgL_arg2645z00_3225;

																	BgL_arg2645z00_3225 = (int) (((long) 16));
																	{	/* Dataflow/walk.scm 386 */
																		long BgL_auxz00_4231;

																		BgL_auxz00_4231 =
																			(long) (BgL_arg2645z00_3225);
																		BgL_modz00_3224 =
																			(BgL_offsetz00_3223 / BgL_auxz00_4231);
																}}
																{	/* Dataflow/walk.scm 386 */
																	long BgL_restz00_3226;

																	{	/* Dataflow/walk.scm 386 */
																		int BgL_arg2644z00_3227;

																		BgL_arg2644z00_3227 = (int) (((long) 16));
																		{	/* Dataflow/walk.scm 386 */
																			long BgL_auxz00_4235;

																			BgL_auxz00_4235 =
																				(long) (BgL_arg2644z00_3227);
																			BgL_restz00_3226 =
																				(BgL_offsetz00_3223 % BgL_auxz00_4235);
																	}}
																	{	/* Dataflow/walk.scm 386 */

																		BgL_method3577z00_3216 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3221,
																				(int) (BgL_modz00_3224)),
																			(int) (BgL_restz00_3226));
										}}}}}}}}
										return
											PROCEDURE_ENTRY(BgL_method3577z00_3216)
											(BgL_method3577z00_3216, (obj_t) (BgL_arg3913z00_1743),
											BEOA);
									}
								}
							else
								{	/* Dataflow/walk.scm 386 */
									return BFALSE;
								}
						}
				}
			}
		}
	}



/* abort?-let-fun3585 */
	obj_t BGl_abortzf3zd2letzd2fun3585zf3zzdataflow_walkz00(obj_t BgL_envz00_3522,
		obj_t BgL_nodez00_3523)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 377 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1730;

				BgL_nodez00_1730 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_3523);
				{	/* Dataflow/walk.scm 378 */
					BgL_nodez00_bglt BgL_arg3911z00_3132;

					BgL_arg3911z00_3132 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1730))->BgL_bodyz00);
					{	/* Dataflow/walk.scm 378 */
						obj_t BgL_method3577z00_3135;

						{	/* Dataflow/walk.scm 378 */
							BgL_objectz00_bglt BgL_objz00_3136;

							BgL_objz00_3136 = (BgL_objectz00_bglt) (BgL_arg3911z00_3132);
							{	/* Dataflow/walk.scm 378 */
								long BgL_objzd2classzd2numz00_3137;

								BgL_objzd2classzd2numz00_3137 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_3136);
								{	/* Dataflow/walk.scm 378 */
									obj_t BgL_arg2643z00_3138;

									BgL_arg2643z00_3138 =
										PROCEDURE_REF(BGl_abortzf3zd2envz21zzdataflow_walkz00,
										(int) (((long) 1)));
									{	/* Dataflow/walk.scm 378 */
										obj_t BgL_arrayz00_3140;

										int BgL_offsetz00_3141;

										BgL_arrayz00_3140 = BgL_arg2643z00_3138;
										BgL_offsetz00_3141 = (int) (BgL_objzd2classzd2numz00_3137);
										{	/* Dataflow/walk.scm 378 */
											long BgL_offsetz00_3142;

											BgL_offsetz00_3142 =
												((long) (BgL_offsetz00_3141) - OBJECT_TYPE);
											{	/* Dataflow/walk.scm 378 */
												long BgL_modz00_3143;

												{	/* Dataflow/walk.scm 378 */
													int BgL_arg2645z00_3144;

													BgL_arg2645z00_3144 = (int) (((long) 16));
													{	/* Dataflow/walk.scm 378 */
														long BgL_auxz00_4255;

														BgL_auxz00_4255 = (long) (BgL_arg2645z00_3144);
														BgL_modz00_3143 =
															(BgL_offsetz00_3142 / BgL_auxz00_4255);
												}}
												{	/* Dataflow/walk.scm 378 */
													long BgL_restz00_3145;

													{	/* Dataflow/walk.scm 378 */
														int BgL_arg2644z00_3146;

														BgL_arg2644z00_3146 = (int) (((long) 16));
														{	/* Dataflow/walk.scm 378 */
															long BgL_auxz00_4259;

															BgL_auxz00_4259 = (long) (BgL_arg2644z00_3146);
															BgL_restz00_3145 =
																(BgL_offsetz00_3142 % BgL_auxz00_4259);
													}}
													{	/* Dataflow/walk.scm 378 */

														BgL_method3577z00_3135 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_3140,
																(int) (BgL_modz00_3143)),
															(int) (BgL_restz00_3145));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3577z00_3135) (BgL_method3577z00_3135,
							(obj_t) (BgL_arg3911z00_3132), BEOA);
					}
				}
			}
		}
	}



/* abort?-let-var3583 */
	obj_t BGl_abortzf3zd2letzd2var3583zf3zzdataflow_walkz00(obj_t BgL_envz00_3524,
		obj_t BgL_nodez00_3525)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 370 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1712;

				BgL_nodez00_1712 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_3525);
				{	/* Dataflow/walk.scm 372 */
					bool_t BgL__ortest_3487z00_1716;

					{	/* Dataflow/walk.scm 372 */
						obj_t BgL_g3519z00_1718;

						BgL_g3519z00_1718 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1712))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3517z00_1720;

							BgL_l3517z00_1720 = BgL_g3519z00_1718;
						BgL_zc3anonymousza33904ze3z83_1721:
							if (NULLP(BgL_l3517z00_1720))
								{	/* Dataflow/walk.scm 372 */
									BgL__ortest_3487z00_1716 = ((bool_t) 0);
								}
							else
								{	/* Dataflow/walk.scm 372 */
									bool_t BgL_testz00_4273;

									{	/* Dataflow/walk.scm 372 */
										obj_t BgL_bz00_1725;

										BgL_bz00_1725 = CAR(BgL_l3517z00_1720);
										{	/* Dataflow/walk.scm 372 */
											obj_t BgL_arg3909z00_1726;

											BgL_arg3909z00_1726 = CDR(BgL_bz00_1725);
											{	/* Dataflow/walk.scm 372 */
												BgL_nodez00_bglt BgL_nodez00_3077;

												BgL_nodez00_3077 =
													(BgL_nodez00_bglt) (BgL_arg3909z00_1726);
												{	/* Dataflow/walk.scm 372 */
													obj_t BgL_method3577z00_3078;

													{	/* Dataflow/walk.scm 372 */
														BgL_objectz00_bglt BgL_objz00_3079;

														BgL_objz00_3079 =
															(BgL_objectz00_bglt) (BgL_nodez00_3077);
														{	/* Dataflow/walk.scm 372 */
															long BgL_objzd2classzd2numz00_3080;

															BgL_objzd2classzd2numz00_3080 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_3079);
															{	/* Dataflow/walk.scm 372 */
																obj_t BgL_arg2643z00_3081;

																BgL_arg2643z00_3081 =
																	PROCEDURE_REF
																	(BGl_abortzf3zd2envz21zzdataflow_walkz00,
																	(int) (((long) 1)));
																{	/* Dataflow/walk.scm 372 */
																	obj_t BgL_arrayz00_3083;

																	int BgL_offsetz00_3084;

																	BgL_arrayz00_3083 = BgL_arg2643z00_3081;
																	BgL_offsetz00_3084 =
																		(int) (BgL_objzd2classzd2numz00_3080);
																	{	/* Dataflow/walk.scm 372 */
																		long BgL_offsetz00_3085;

																		BgL_offsetz00_3085 =
																			(
																			(long) (BgL_offsetz00_3084) -
																			OBJECT_TYPE);
																		{	/* Dataflow/walk.scm 372 */
																			long BgL_modz00_3086;

																			{	/* Dataflow/walk.scm 372 */
																				int BgL_arg2645z00_3087;

																				BgL_arg2645z00_3087 =
																					(int) (((long) 16));
																				{	/* Dataflow/walk.scm 372 */
																					long BgL_auxz00_4285;

																					BgL_auxz00_4285 =
																						(long) (BgL_arg2645z00_3087);
																					BgL_modz00_3086 =
																						(BgL_offsetz00_3085 /
																						BgL_auxz00_4285);
																			}}
																			{	/* Dataflow/walk.scm 372 */
																				long BgL_restz00_3088;

																				{	/* Dataflow/walk.scm 372 */
																					int BgL_arg2644z00_3089;

																					BgL_arg2644z00_3089 =
																						(int) (((long) 16));
																					{	/* Dataflow/walk.scm 372 */
																						long BgL_auxz00_4289;

																						BgL_auxz00_4289 =
																							(long) (BgL_arg2644z00_3089);
																						BgL_restz00_3088 =
																							(BgL_offsetz00_3085 %
																							BgL_auxz00_4289);
																				}}
																				{	/* Dataflow/walk.scm 372 */

																					BgL_method3577z00_3078 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_3083,
																							(int) (BgL_modz00_3086)),
																						(int) (BgL_restz00_3088));
													}}}}}}}}
													BgL_testz00_4273 =
														CBOOL(PROCEDURE_ENTRY(BgL_method3577z00_3078)
														(BgL_method3577z00_3078, (obj_t) (BgL_nodez00_3077),
															BEOA));
									}}}}
									if (BgL_testz00_4273)
										{	/* Dataflow/walk.scm 372 */
											BgL__ortest_3487z00_1716 = ((bool_t) 1);
										}
									else
										{
											obj_t BgL_l3517z00_4300;

											BgL_l3517z00_4300 = CDR(BgL_l3517z00_1720);
											BgL_l3517z00_1720 = BgL_l3517z00_4300;
											goto BgL_zc3anonymousza33904ze3z83_1721;
										}
								}
						}
					}
					if (BgL__ortest_3487z00_1716)
						{	/* Dataflow/walk.scm 372 */
							return BBOOL(BgL__ortest_3487z00_1716);
						}
					else
						{	/* Dataflow/walk.scm 372 */
							BgL_nodez00_bglt BgL_arg3903z00_1717;

							BgL_arg3903z00_1717 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1712))->BgL_bodyz00);
							{	/* Dataflow/walk.scm 372 */
								obj_t BgL_method3577z00_3106;

								{	/* Dataflow/walk.scm 372 */
									BgL_objectz00_bglt BgL_objz00_3107;

									BgL_objz00_3107 = (BgL_objectz00_bglt) (BgL_arg3903z00_1717);
									{	/* Dataflow/walk.scm 372 */
										long BgL_objzd2classzd2numz00_3108;

										BgL_objzd2classzd2numz00_3108 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_3107);
										{	/* Dataflow/walk.scm 372 */
											obj_t BgL_arg2643z00_3109;

											BgL_arg2643z00_3109 =
												PROCEDURE_REF(BGl_abortzf3zd2envz21zzdataflow_walkz00,
												(int) (((long) 1)));
											{	/* Dataflow/walk.scm 372 */
												obj_t BgL_arrayz00_3111;

												int BgL_offsetz00_3112;

												BgL_arrayz00_3111 = BgL_arg2643z00_3109;
												BgL_offsetz00_3112 =
													(int) (BgL_objzd2classzd2numz00_3108);
												{	/* Dataflow/walk.scm 372 */
													long BgL_offsetz00_3113;

													BgL_offsetz00_3113 =
														((long) (BgL_offsetz00_3112) - OBJECT_TYPE);
													{	/* Dataflow/walk.scm 372 */
														long BgL_modz00_3114;

														{	/* Dataflow/walk.scm 372 */
															int BgL_arg2645z00_3115;

															BgL_arg2645z00_3115 = (int) (((long) 16));
															{	/* Dataflow/walk.scm 372 */
																long BgL_auxz00_4313;

																BgL_auxz00_4313 = (long) (BgL_arg2645z00_3115);
																BgL_modz00_3114 =
																	(BgL_offsetz00_3113 / BgL_auxz00_4313);
														}}
														{	/* Dataflow/walk.scm 372 */
															long BgL_restz00_3116;

															{	/* Dataflow/walk.scm 372 */
																int BgL_arg2644z00_3117;

																BgL_arg2644z00_3117 = (int) (((long) 16));
																{	/* Dataflow/walk.scm 372 */
																	long BgL_auxz00_4317;

																	BgL_auxz00_4317 =
																		(long) (BgL_arg2644z00_3117);
																	BgL_restz00_3116 =
																		(BgL_offsetz00_3113 % BgL_auxz00_4317);
															}}
															{	/* Dataflow/walk.scm 372 */

																BgL_method3577z00_3106 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_3111,
																		(int) (BgL_modz00_3114)),
																	(int) (BgL_restz00_3116));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method3577z00_3106)
									(BgL_method3577z00_3106, (obj_t) (BgL_arg3903z00_1717), BEOA);
							}
						}
				}
			}
		}
	}



/* abort?-sequence3581 */
	obj_t BGl_abortzf3zd2sequence3581z21zzdataflow_walkz00(obj_t BgL_envz00_3526,
		obj_t BgL_nodez00_3527)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 364 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1698;

				{	/* Dataflow/walk.scm 365 */
					bool_t BgL_auxz00_4328;

					BgL_nodez00_1698 = (BgL_sequencez00_bglt) (BgL_nodez00_3527);
					{	/* Dataflow/walk.scm 365 */
						obj_t BgL_g3516z00_1701;

						BgL_g3516z00_1701 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1698))->BgL_nodesz00);
						{
							obj_t BgL_l3514z00_1703;

							BgL_l3514z00_1703 = BgL_g3516z00_1701;
						BgL_zc3anonymousza33897ze3z83_1704:
							if (NULLP(BgL_l3514z00_1703))
								{	/* Dataflow/walk.scm 365 */
									BgL_auxz00_4328 = ((bool_t) 0);
								}
							else
								{	/* Dataflow/walk.scm 365 */
									bool_t BgL_testz00_4332;

									{	/* Dataflow/walk.scm 365 */
										obj_t BgL_arg3901z00_1708;

										BgL_arg3901z00_1708 = CAR(BgL_l3514z00_1703);
										{	/* Dataflow/walk.scm 365 */
											BgL_nodez00_bglt BgL_nodez00_3046;

											BgL_nodez00_3046 =
												(BgL_nodez00_bglt) (BgL_arg3901z00_1708);
											{	/* Dataflow/walk.scm 365 */
												obj_t BgL_method3577z00_3047;

												{	/* Dataflow/walk.scm 365 */
													BgL_objectz00_bglt BgL_objz00_3048;

													BgL_objz00_3048 =
														(BgL_objectz00_bglt) (BgL_nodez00_3046);
													{	/* Dataflow/walk.scm 365 */
														long BgL_objzd2classzd2numz00_3049;

														BgL_objzd2classzd2numz00_3049 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_3048);
														{	/* Dataflow/walk.scm 365 */
															obj_t BgL_arg2643z00_3050;

															BgL_arg2643z00_3050 =
																PROCEDURE_REF
																(BGl_abortzf3zd2envz21zzdataflow_walkz00,
																(int) (((long) 1)));
															{	/* Dataflow/walk.scm 365 */
																obj_t BgL_arrayz00_3052;

																int BgL_offsetz00_3053;

																BgL_arrayz00_3052 = BgL_arg2643z00_3050;
																BgL_offsetz00_3053 =
																	(int) (BgL_objzd2classzd2numz00_3049);
																{	/* Dataflow/walk.scm 365 */
																	long BgL_offsetz00_3054;

																	BgL_offsetz00_3054 =
																		((long) (BgL_offsetz00_3053) - OBJECT_TYPE);
																	{	/* Dataflow/walk.scm 365 */
																		long BgL_modz00_3055;

																		{	/* Dataflow/walk.scm 365 */
																			int BgL_arg2645z00_3056;

																			BgL_arg2645z00_3056 = (int) (((long) 16));
																			{	/* Dataflow/walk.scm 365 */
																				long BgL_auxz00_4343;

																				BgL_auxz00_4343 =
																					(long) (BgL_arg2645z00_3056);
																				BgL_modz00_3055 =
																					(BgL_offsetz00_3054 /
																					BgL_auxz00_4343);
																		}}
																		{	/* Dataflow/walk.scm 365 */
																			long BgL_restz00_3057;

																			{	/* Dataflow/walk.scm 365 */
																				int BgL_arg2644z00_3058;

																				BgL_arg2644z00_3058 =
																					(int) (((long) 16));
																				{	/* Dataflow/walk.scm 365 */
																					long BgL_auxz00_4347;

																					BgL_auxz00_4347 =
																						(long) (BgL_arg2644z00_3058);
																					BgL_restz00_3057 =
																						(BgL_offsetz00_3054 %
																						BgL_auxz00_4347);
																			}}
																			{	/* Dataflow/walk.scm 365 */

																				BgL_method3577z00_3047 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_3052,
																						(int) (BgL_modz00_3055)),
																					(int) (BgL_restz00_3057));
												}}}}}}}}
												BgL_testz00_4332 =
													CBOOL(PROCEDURE_ENTRY(BgL_method3577z00_3047)
													(BgL_method3577z00_3047, (obj_t) (BgL_nodez00_3046),
														BEOA));
									}}}
									if (BgL_testz00_4332)
										{	/* Dataflow/walk.scm 365 */
											BgL_auxz00_4328 = ((bool_t) 1);
										}
									else
										{
											obj_t BgL_l3514z00_4358;

											BgL_l3514z00_4358 = CDR(BgL_l3514z00_1703);
											BgL_l3514z00_1703 = BgL_l3514z00_4358;
											goto BgL_zc3anonymousza33897ze3z83_1704;
										}
								}
						}
					}
					return BBOOL(BgL_auxz00_4328);
				}
			}
		}
	}



/* abort?-fail3579 */
	obj_t BGl_abortzf3zd2fail3579z21zzdataflow_walkz00(obj_t BgL_envz00_3528,
		obj_t BgL_nodez00_3529)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 358 */
			return BBOOL(((bool_t) 1));
		}
	}



/* dataflow-test-env-le3575 */
	obj_t BGl_dataflowzd2testzd2envzd2le3575zd2zzdataflow_walkz00(obj_t
		BgL_envz00_3530, obj_t BgL_nodez00_3531)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 335 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1664;

				BgL_nodez00_1664 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_3531);
				{	/* Dataflow/walk.scm 337 */
					bool_t BgL_testz00_4363;

					{	/* Dataflow/walk.scm 337 */
						bool_t BgL_testz00_4364;

						{	/* Dataflow/walk.scm 337 */
							obj_t BgL_auxz00_4365;

							BgL_auxz00_4365 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1664))->
								BgL_bindingsz00);
							BgL_testz00_4364 = PAIRP(BgL_auxz00_4365);
						}
						if (BgL_testz00_4364)
							{	/* Dataflow/walk.scm 338 */
								bool_t BgL_testz00_4368;

								{	/* Dataflow/walk.scm 338 */
									obj_t BgL_auxz00_4369;

									{	/* Dataflow/walk.scm 338 */
										obj_t BgL_pairz00_2983;

										BgL_pairz00_2983 =
											(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1664))->
											BgL_bindingsz00);
										BgL_auxz00_4369 = CDR(BgL_pairz00_2983);
									}
									BgL_testz00_4368 = NULLP(BgL_auxz00_4369);
								}
								if (BgL_testz00_4368)
									{	/* Dataflow/walk.scm 339 */
										obj_t BgL_arg3890z00_1686;

										{	/* Dataflow/walk.scm 339 */
											obj_t BgL_pairz00_2986;

											BgL_pairz00_2986 =
												(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1664))->
												BgL_bindingsz00);
											BgL_arg3890z00_1686 = CDR(CAR(BgL_pairz00_2986));
										}
										BgL_testz00_4363 =
											BGl_iszd2azf3z21zz__objectz00(BgL_arg3890z00_1686,
											BGl_varz00zzast_nodez00);
									}
								else
									{	/* Dataflow/walk.scm 338 */
										BgL_testz00_4363 = ((bool_t) 0);
									}
							}
						else
							{	/* Dataflow/walk.scm 337 */
								BgL_testz00_4363 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_4363)
						{	/* Dataflow/walk.scm 340 */
							obj_t BgL_envz00_1669;

							{	/* Dataflow/walk.scm 340 */
								BgL_nodez00_bglt BgL_arg3887z00_1683;

								BgL_arg3887z00_1683 =
									(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1664))->
									BgL_bodyz00);
								{	/* Dataflow/walk.scm 340 */
									obj_t BgL_res4053z00_3018;

									{	/* Dataflow/walk.scm 340 */
										obj_t BgL_method3565z00_2993;

										{	/* Dataflow/walk.scm 340 */
											BgL_objectz00_bglt BgL_objz00_2994;

											BgL_objz00_2994 =
												(BgL_objectz00_bglt) (BgL_arg3887z00_1683);
											{	/* Dataflow/walk.scm 340 */
												long BgL_objzd2classzd2numz00_2995;

												BgL_objzd2classzd2numz00_2995 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2994);
												{	/* Dataflow/walk.scm 340 */
													obj_t BgL_arg2643z00_2996;

													BgL_arg2643z00_2996 =
														PROCEDURE_REF
														(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
														(int) (((long) 1)));
													{	/* Dataflow/walk.scm 340 */
														obj_t BgL_arrayz00_2998;

														int BgL_offsetz00_2999;

														BgL_arrayz00_2998 = BgL_arg2643z00_2996;
														BgL_offsetz00_2999 =
															(int) (BgL_objzd2classzd2numz00_2995);
														{	/* Dataflow/walk.scm 340 */
															long BgL_offsetz00_3000;

															BgL_offsetz00_3000 =
																((long) (BgL_offsetz00_2999) - OBJECT_TYPE);
															{	/* Dataflow/walk.scm 340 */
																long BgL_modz00_3001;

																{	/* Dataflow/walk.scm 340 */
																	int BgL_arg2645z00_3002;

																	BgL_arg2645z00_3002 = (int) (((long) 16));
																	{	/* Dataflow/walk.scm 340 */
																		long BgL_auxz00_4386;

																		BgL_auxz00_4386 =
																			(long) (BgL_arg2645z00_3002);
																		BgL_modz00_3001 =
																			(BgL_offsetz00_3000 / BgL_auxz00_4386);
																}}
																{	/* Dataflow/walk.scm 340 */
																	long BgL_restz00_3003;

																	{	/* Dataflow/walk.scm 340 */
																		int BgL_arg2644z00_3004;

																		BgL_arg2644z00_3004 = (int) (((long) 16));
																		{	/* Dataflow/walk.scm 340 */
																			long BgL_auxz00_4390;

																			BgL_auxz00_4390 =
																				(long) (BgL_arg2644z00_3004);
																			BgL_restz00_3003 =
																				(BgL_offsetz00_3000 % BgL_auxz00_4390);
																	}}
																	{	/* Dataflow/walk.scm 340 */

																		BgL_method3565z00_2993 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2998,
																				(int) (BgL_modz00_3001)),
																			(int) (BgL_restz00_3003));
										}}}}}}}}
										BgL_res4053z00_3018 =
											PROCEDURE_ENTRY(BgL_method3565z00_2993)
											(BgL_method3565z00_2993, (obj_t) (BgL_arg3887z00_1683),
											BEOA);
									}
									BgL_envz00_1669 = BgL_res4053z00_3018;
							}}
							{	/* Dataflow/walk.scm 341 */
								bool_t BgL_testz00_4400;

								if (PAIRP(BgL_envz00_1669))
									{	/* Dataflow/walk.scm 341 */
										if (NULLP(CDR(BgL_envz00_1669)))
											{	/* Dataflow/walk.scm 343 */
												obj_t BgL_auxz00_4406;

												{	/* Dataflow/walk.scm 343 */
													obj_t BgL_pairz00_3027;

													BgL_pairz00_3027 =
														(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1664))->
														BgL_bindingsz00);
													BgL_auxz00_4406 = CAR(CAR(BgL_pairz00_3027));
												}
												BgL_testz00_4400 =
													(CAR(CAR(BgL_envz00_1669)) == BgL_auxz00_4406);
											}
										else
											{	/* Dataflow/walk.scm 342 */
												BgL_testz00_4400 = ((bool_t) 0);
											}
									}
								else
									{	/* Dataflow/walk.scm 341 */
										BgL_testz00_4400 = ((bool_t) 0);
									}
								if (BgL_testz00_4400)
									{	/* Dataflow/walk.scm 344 */
										obj_t BgL_arg3875z00_1671;

										{	/* Dataflow/walk.scm 344 */
											BgL_variablez00_bglt BgL_arg3877z00_1673;

											obj_t BgL_arg3878z00_1674;

											{	/* Dataflow/walk.scm 344 */
												BgL_varz00_bglt BgL_obj2155z00_3036;

												{	/* Dataflow/walk.scm 344 */
													obj_t BgL_auxz00_4413;

													{	/* Dataflow/walk.scm 344 */
														obj_t BgL_pairz00_3032;

														BgL_pairz00_3032 =
															(((BgL_letzd2varzd2_bglt)
																CREF(BgL_nodez00_1664))->BgL_bindingsz00);
														BgL_auxz00_4413 = CDR(CAR(BgL_pairz00_3032));
													}
													BgL_obj2155z00_3036 =
														(BgL_varz00_bglt) (BgL_auxz00_4413);
												}
												BgL_arg3877z00_1673 =
													(((BgL_varz00_bglt) CREF(BgL_obj2155z00_3036))->
													BgL_variablez00);
											}
											BgL_arg3878z00_1674 = CDR(CAR(BgL_envz00_1669));
											BgL_arg3875z00_1671 =
												MAKE_PAIR(
												(obj_t) (BgL_arg3877z00_1673), BgL_arg3878z00_1674);
										}
										{	/* Dataflow/walk.scm 344 */
											obj_t BgL_list3876z00_1672;

											BgL_list3876z00_1672 =
												MAKE_PAIR(BgL_arg3875z00_1671, BNIL);
											return BgL_list3876z00_1672;
										}
									}
								else
									{	/* Dataflow/walk.scm 341 */
										return BNIL;
									}
							}
						}
					else
						{	/* Dataflow/walk.scm 337 */
							return BNIL;
						}
				}
			}
		}
	}



/* dataflow-test-env-va3573 */
	obj_t BGl_dataflowzd2testzd2envzd2va3573zd2zzdataflow_walkz00(obj_t
		BgL_envz00_3532, obj_t BgL_nodez00_3533)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 322 */
			{
				BgL_varz00_bglt BgL_nodez00_1654;

				BgL_nodez00_1654 = (BgL_varz00_bglt) (BgL_nodez00_3533);
				{	/* Dataflow/walk.scm 324 */
					bool_t BgL_testz00_4425;

					{	/* Dataflow/walk.scm 324 */
						BgL_variablez00_bglt BgL_arg3871z00_1661;

						BgL_arg3871z00_1661 =
							(((BgL_varz00_bglt) CREF(BgL_nodez00_1654))->BgL_variablez00);
						{	/* Dataflow/walk.scm 324 */
							obj_t BgL_obj3400z00_2950;

							BgL_obj3400z00_2950 = (obj_t) (BgL_arg3871z00_1661);
							BgL_testz00_4425 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj3400z00_2950,
								BGl_localzf2valuezf2zzdataflow_walkz00);
						}
					}
					if (BgL_testz00_4425)
						{	/* Dataflow/walk.scm 325 */
							BgL_nodez00_bglt BgL_arg3869z00_1659;

							{	/* Dataflow/walk.scm 325 */
								BgL_localzf2valuezf2_bglt BgL_obj3403z00_2952;

								BgL_obj3403z00_2952 =
									(BgL_localzf2valuezf2_bglt) (
									(((BgL_varz00_bglt) CREF(BgL_nodez00_1654))->
										BgL_variablez00));
								{
									obj_t BgL_auxz00_4431;

									{	/* Dataflow/walk.scm 325 */
										BgL_objectz00_bglt BgL_auxz00_4432;

										BgL_auxz00_4432 =
											(BgL_objectz00_bglt) (BgL_obj3403z00_2952);
										BgL_auxz00_4431 = BGL_OBJECT_WIDENING(BgL_auxz00_4432);
									}
									BgL_arg3869z00_1659 =
										(((BgL_localzf2valuezf2_bglt) CREF(BgL_auxz00_4431))->
										BgL_nodez00);
								}
							}
							{	/* Dataflow/walk.scm 325 */
								obj_t BgL_res4050z00_2979;

								{	/* Dataflow/walk.scm 325 */
									obj_t BgL_method3565z00_2954;

									{	/* Dataflow/walk.scm 325 */
										BgL_objectz00_bglt BgL_objz00_2955;

										BgL_objz00_2955 =
											(BgL_objectz00_bglt) (BgL_arg3869z00_1659);
										{	/* Dataflow/walk.scm 325 */
											long BgL_objzd2classzd2numz00_2956;

											BgL_objzd2classzd2numz00_2956 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2955);
											{	/* Dataflow/walk.scm 325 */
												obj_t BgL_arg2643z00_2957;

												BgL_arg2643z00_2957 =
													PROCEDURE_REF
													(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
													(int) (((long) 1)));
												{	/* Dataflow/walk.scm 325 */
													obj_t BgL_arrayz00_2959;

													int BgL_offsetz00_2960;

													BgL_arrayz00_2959 = BgL_arg2643z00_2957;
													BgL_offsetz00_2960 =
														(int) (BgL_objzd2classzd2numz00_2956);
													{	/* Dataflow/walk.scm 325 */
														long BgL_offsetz00_2961;

														BgL_offsetz00_2961 =
															((long) (BgL_offsetz00_2960) - OBJECT_TYPE);
														{	/* Dataflow/walk.scm 325 */
															long BgL_modz00_2962;

															{	/* Dataflow/walk.scm 325 */
																int BgL_arg2645z00_2963;

																BgL_arg2645z00_2963 = (int) (((long) 16));
																{	/* Dataflow/walk.scm 325 */
																	long BgL_auxz00_4444;

																	BgL_auxz00_4444 =
																		(long) (BgL_arg2645z00_2963);
																	BgL_modz00_2962 =
																		(BgL_offsetz00_2961 / BgL_auxz00_4444);
															}}
															{	/* Dataflow/walk.scm 325 */
																long BgL_restz00_2964;

																{	/* Dataflow/walk.scm 325 */
																	int BgL_arg2644z00_2965;

																	BgL_arg2644z00_2965 = (int) (((long) 16));
																	{	/* Dataflow/walk.scm 325 */
																		long BgL_auxz00_4448;

																		BgL_auxz00_4448 =
																			(long) (BgL_arg2644z00_2965);
																		BgL_restz00_2964 =
																			(BgL_offsetz00_2961 % BgL_auxz00_4448);
																}}
																{	/* Dataflow/walk.scm 325 */

																	BgL_method3565z00_2954 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2959,
																			(int) (BgL_modz00_2962)),
																		(int) (BgL_restz00_2964));
									}}}}}}}}
									BgL_res4050z00_2979 =
										PROCEDURE_ENTRY(BgL_method3565z00_2954)
										(BgL_method3565z00_2954, (obj_t) (BgL_arg3869z00_1659),
										BEOA);
								}
								return BgL_res4050z00_2979;
							}
						}
					else
						{	/* Dataflow/walk.scm 324 */
							return BNIL;
						}
				}
			}
		}
	}



/* dataflow-test-env-co3571 */
	obj_t BGl_dataflowzd2testzd2envzd2co3571zd2zzdataflow_walkz00(obj_t
		BgL_envz00_3534, obj_t BgL_nodez00_3535)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 313 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1639;

				BgL_nodez00_1639 = (BgL_conditionalz00_bglt) (BgL_nodez00_3535);
				{	/* Dataflow/walk.scm 315 */
					bool_t BgL_testz00_4459;

					{	/* Dataflow/walk.scm 315 */
						bool_t BgL_testz00_4460;

						{	/* Dataflow/walk.scm 315 */
							BgL_nodez00_bglt BgL_arg3866z00_1651;

							BgL_arg3866z00_1651 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1639))->
								BgL_falsez00);
							{	/* Dataflow/walk.scm 315 */
								obj_t BgL_obj2150z00_2890;

								BgL_obj2150z00_2890 = (obj_t) (BgL_arg3866z00_1651);
								BgL_testz00_4460 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj2150z00_2890,
									BGl_atomz00zzast_nodez00);
							}
						}
						if (BgL_testz00_4460)
							{	/* Dataflow/walk.scm 315 */
								obj_t BgL_auxz00_4464;

								{	/* Dataflow/walk.scm 315 */
									BgL_atomz00_bglt BgL_obj2135z00_2892;

									BgL_obj2135z00_2892 =
										(BgL_atomz00_bglt) (
										(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1639))->
											BgL_falsez00));
									BgL_auxz00_4464 =
										(((BgL_atomz00_bglt) CREF(BgL_obj2135z00_2892))->
										BgL_valuez00);
								}
								BgL_testz00_4459 = (BgL_auxz00_4464 == BFALSE);
							}
						else
							{	/* Dataflow/walk.scm 315 */
								BgL_testz00_4459 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_4459)
						{	/* Dataflow/walk.scm 316 */
							obj_t BgL_arg3859z00_1644;

							obj_t BgL_arg3860z00_1645;

							{	/* Dataflow/walk.scm 316 */
								BgL_nodez00_bglt BgL_arg3861z00_1646;

								BgL_arg3861z00_1646 =
									(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1639))->
									BgL_testz00);
								{	/* Dataflow/walk.scm 316 */
									obj_t BgL_res4044z00_2920;

									{	/* Dataflow/walk.scm 316 */
										obj_t BgL_method3565z00_2895;

										{	/* Dataflow/walk.scm 316 */
											BgL_objectz00_bglt BgL_objz00_2896;

											BgL_objz00_2896 =
												(BgL_objectz00_bglt) (BgL_arg3861z00_1646);
											{	/* Dataflow/walk.scm 316 */
												long BgL_objzd2classzd2numz00_2897;

												BgL_objzd2classzd2numz00_2897 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2896);
												{	/* Dataflow/walk.scm 316 */
													obj_t BgL_arg2643z00_2898;

													BgL_arg2643z00_2898 =
														PROCEDURE_REF
														(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
														(int) (((long) 1)));
													{	/* Dataflow/walk.scm 316 */
														obj_t BgL_arrayz00_2900;

														int BgL_offsetz00_2901;

														BgL_arrayz00_2900 = BgL_arg2643z00_2898;
														BgL_offsetz00_2901 =
															(int) (BgL_objzd2classzd2numz00_2897);
														{	/* Dataflow/walk.scm 316 */
															long BgL_offsetz00_2902;

															BgL_offsetz00_2902 =
																((long) (BgL_offsetz00_2901) - OBJECT_TYPE);
															{	/* Dataflow/walk.scm 316 */
																long BgL_modz00_2903;

																{	/* Dataflow/walk.scm 316 */
																	int BgL_arg2645z00_2904;

																	BgL_arg2645z00_2904 = (int) (((long) 16));
																	{	/* Dataflow/walk.scm 316 */
																		long BgL_auxz00_4478;

																		BgL_auxz00_4478 =
																			(long) (BgL_arg2645z00_2904);
																		BgL_modz00_2903 =
																			(BgL_offsetz00_2902 / BgL_auxz00_4478);
																}}
																{	/* Dataflow/walk.scm 316 */
																	long BgL_restz00_2905;

																	{	/* Dataflow/walk.scm 316 */
																		int BgL_arg2644z00_2906;

																		BgL_arg2644z00_2906 = (int) (((long) 16));
																		{	/* Dataflow/walk.scm 316 */
																			long BgL_auxz00_4482;

																			BgL_auxz00_4482 =
																				(long) (BgL_arg2644z00_2906);
																			BgL_restz00_2905 =
																				(BgL_offsetz00_2902 % BgL_auxz00_4482);
																	}}
																	{	/* Dataflow/walk.scm 316 */

																		BgL_method3565z00_2895 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2900,
																				(int) (BgL_modz00_2903)),
																			(int) (BgL_restz00_2905));
										}}}}}}}}
										BgL_res4044z00_2920 =
											PROCEDURE_ENTRY(BgL_method3565z00_2895)
											(BgL_method3565z00_2895, (obj_t) (BgL_arg3861z00_1646),
											BEOA);
									}
									BgL_arg3859z00_1644 = BgL_res4044z00_2920;
							}}
							{	/* Dataflow/walk.scm 316 */
								BgL_nodez00_bglt BgL_arg3862z00_1647;

								BgL_arg3862z00_1647 =
									(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1639))->
									BgL_truez00);
								{	/* Dataflow/walk.scm 316 */
									obj_t BgL_res4047z00_2948;

									{	/* Dataflow/walk.scm 316 */
										obj_t BgL_method3565z00_2923;

										{	/* Dataflow/walk.scm 316 */
											BgL_objectz00_bglt BgL_objz00_2924;

											BgL_objz00_2924 =
												(BgL_objectz00_bglt) (BgL_arg3862z00_1647);
											{	/* Dataflow/walk.scm 316 */
												long BgL_objzd2classzd2numz00_2925;

												BgL_objzd2classzd2numz00_2925 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2924);
												{	/* Dataflow/walk.scm 316 */
													obj_t BgL_arg2643z00_2926;

													BgL_arg2643z00_2926 =
														PROCEDURE_REF
														(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
														(int) (((long) 1)));
													{	/* Dataflow/walk.scm 316 */
														obj_t BgL_arrayz00_2928;

														int BgL_offsetz00_2929;

														BgL_arrayz00_2928 = BgL_arg2643z00_2926;
														BgL_offsetz00_2929 =
															(int) (BgL_objzd2classzd2numz00_2925);
														{	/* Dataflow/walk.scm 316 */
															long BgL_offsetz00_2930;

															BgL_offsetz00_2930 =
																((long) (BgL_offsetz00_2929) - OBJECT_TYPE);
															{	/* Dataflow/walk.scm 316 */
																long BgL_modz00_2931;

																{	/* Dataflow/walk.scm 316 */
																	int BgL_arg2645z00_2932;

																	BgL_arg2645z00_2932 = (int) (((long) 16));
																	{	/* Dataflow/walk.scm 316 */
																		long BgL_auxz00_4501;

																		BgL_auxz00_4501 =
																			(long) (BgL_arg2645z00_2932);
																		BgL_modz00_2931 =
																			(BgL_offsetz00_2930 / BgL_auxz00_4501);
																}}
																{	/* Dataflow/walk.scm 316 */
																	long BgL_restz00_2933;

																	{	/* Dataflow/walk.scm 316 */
																		int BgL_arg2644z00_2934;

																		BgL_arg2644z00_2934 = (int) (((long) 16));
																		{	/* Dataflow/walk.scm 316 */
																			long BgL_auxz00_4505;

																			BgL_auxz00_4505 =
																				(long) (BgL_arg2644z00_2934);
																			BgL_restz00_2933 =
																				(BgL_offsetz00_2930 % BgL_auxz00_4505);
																	}}
																	{	/* Dataflow/walk.scm 316 */

																		BgL_method3565z00_2923 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2928,
																				(int) (BgL_modz00_2931)),
																			(int) (BgL_restz00_2933));
										}}}}}}}}
										BgL_res4047z00_2948 =
											PROCEDURE_ENTRY(BgL_method3565z00_2923)
											(BgL_method3565z00_2923, (obj_t) (BgL_arg3862z00_1647),
											BEOA);
									}
									BgL_arg3860z00_1645 = BgL_res4047z00_2948;
							}}
							return bgl_append2(BgL_arg3859z00_1644, BgL_arg3860z00_1645);
						}
					else
						{	/* Dataflow/walk.scm 315 */
							return BNIL;
						}
				}
			}
		}
	}



/* dataflow-test-env-is3569 */
	obj_t BGl_dataflowzd2testzd2envzd2is3569zd2zzdataflow_walkz00(obj_t
		BgL_envz00_3536, obj_t BgL_nodez00_3537)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 304 */
			{
				BgL_isaz00_bglt BgL_nodez00_1624;

				BgL_nodez00_1624 = (BgL_isaz00_bglt) (BgL_nodez00_3537);
				{	/* Dataflow/walk.scm 306 */
					bool_t BgL_testz00_4517;

					{	/* Dataflow/walk.scm 306 */
						obj_t BgL_arg3855z00_1635;

						{	/* Dataflow/walk.scm 306 */
							obj_t BgL_pairz00_2881;

							{
								BgL_externz00_bglt BgL_auxz00_4518;

								BgL_auxz00_4518 = (BgL_externz00_bglt) (BgL_nodez00_1624);
								BgL_pairz00_2881 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_4518))->
									BgL_exprza2za2);
							}
							BgL_arg3855z00_1635 = CAR(BgL_pairz00_2881);
						}
						BgL_testz00_4517 =
							BGl_iszd2azf3z21zz__objectz00(BgL_arg3855z00_1635,
							BGl_varz00zzast_nodez00);
					}
					if (BgL_testz00_4517)
						{	/* Dataflow/walk.scm 307 */
							obj_t BgL_arg3849z00_1629;

							{	/* Dataflow/walk.scm 307 */
								BgL_variablez00_bglt BgL_arg3851z00_1631;

								BgL_typez00_bglt BgL_arg3852z00_1632;

								{	/* Dataflow/walk.scm 307 */
									BgL_varz00_bglt BgL_obj2155z00_2885;

									{	/* Dataflow/walk.scm 307 */
										obj_t BgL_auxz00_4523;

										{	/* Dataflow/walk.scm 307 */
											obj_t BgL_pairz00_2884;

											{
												BgL_externz00_bglt BgL_auxz00_4524;

												BgL_auxz00_4524 =
													(BgL_externz00_bglt) (BgL_nodez00_1624);
												BgL_pairz00_2884 =
													(((BgL_externz00_bglt) CREF(BgL_auxz00_4524))->
													BgL_exprza2za2);
											}
											BgL_auxz00_4523 = CAR(BgL_pairz00_2884);
										}
										BgL_obj2155z00_2885 = (BgL_varz00_bglt) (BgL_auxz00_4523);
									}
									BgL_arg3851z00_1631 =
										(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2885))->
										BgL_variablez00);
								}
								BgL_arg3852z00_1632 =
									(((BgL_isaz00_bglt) CREF(BgL_nodez00_1624))->BgL_classz00);
								BgL_arg3849z00_1629 =
									MAKE_PAIR(
									(obj_t) (BgL_arg3851z00_1631), (obj_t) (BgL_arg3852z00_1632));
							}
							{	/* Dataflow/walk.scm 307 */
								obj_t BgL_list3850z00_1630;

								BgL_list3850z00_1630 = MAKE_PAIR(BgL_arg3849z00_1629, BNIL);
								return BgL_list3850z00_1630;
							}
						}
					else
						{	/* Dataflow/walk.scm 306 */
							return BNIL;
						}
				}
			}
		}
	}



/* dataflow-test-env-ap3567 */
	obj_t BGl_dataflowzd2testzd2envzd2ap3567zd2zzdataflow_walkz00(obj_t
		BgL_envz00_3538, obj_t BgL_nodez00_3539)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 280 */
			{
				BgL_appz00_bglt BgL_nodez00_1578;

				BgL_nodez00_1578 = (BgL_appz00_bglt) (BgL_nodez00_3539);
				{	/* Dataflow/walk.scm 282 */
					BgL_variablez00_bglt BgL_fz00_1582;

					{	/* Dataflow/walk.scm 282 */
						BgL_varz00_bglt BgL_obj2155z00_2834;

						BgL_obj2155z00_2834 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1578))->BgL_funz00);
						BgL_fz00_1582 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2834))->BgL_variablez00);
					}
					{	/* Dataflow/walk.scm 282 */
						BgL_valuez00_bglt BgL_funvz00_1583;

						BgL_funvz00_1583 =
							(((BgL_variablez00_bglt) CREF(BgL_fz00_1582))->BgL_valuez00);
						{	/* Dataflow/walk.scm 283 */

							if (
								((obj_t) (BgL_fz00_1582) == BGl_za2isaza2z00zzdataflow_walkz00))
								{	/* Dataflow/walk.scm 286 */
									bool_t BgL_testz00_4542;

									{	/* Dataflow/walk.scm 286 */
										bool_t BgL_testz00_4543;

										{	/* Dataflow/walk.scm 286 */
											obj_t BgL_arg3828z00_1603;

											{	/* Dataflow/walk.scm 286 */
												obj_t BgL_pairz00_2837;

												BgL_pairz00_2837 =
													(((BgL_appz00_bglt) CREF(BgL_nodez00_1578))->
													BgL_argsz00);
												BgL_arg3828z00_1603 = CAR(BgL_pairz00_2837);
											}
											BgL_testz00_4543 =
												BGl_iszd2azf3z21zz__objectz00(BgL_arg3828z00_1603,
												BGl_varz00zzast_nodez00);
										}
										if (BgL_testz00_4543)
											{	/* Dataflow/walk.scm 287 */
												bool_t BgL_testz00_4547;

												{	/* Dataflow/walk.scm 287 */
													obj_t BgL_arg3826z00_1601;

													{	/* Dataflow/walk.scm 287 */
														obj_t BgL_pairz00_2840;

														BgL_pairz00_2840 =
															(((BgL_appz00_bglt) CREF(BgL_nodez00_1578))->
															BgL_argsz00);
														BgL_arg3826z00_1601 = CAR(CDR(BgL_pairz00_2840));
													}
													BgL_testz00_4547 =
														BGl_iszd2azf3z21zz__objectz00(BgL_arg3826z00_1601,
														BGl_varz00zzast_nodez00);
												}
												if (BgL_testz00_4547)
													{	/* Dataflow/walk.scm 288 */
														BgL_variablez00_bglt BgL_arg3823z00_1598;

														{	/* Dataflow/walk.scm 288 */
															BgL_varz00_bglt BgL_obj2155z00_2850;

															{	/* Dataflow/walk.scm 288 */
																obj_t BgL_auxz00_4552;

																{	/* Dataflow/walk.scm 288 */
																	obj_t BgL_pairz00_2846;

																	BgL_pairz00_2846 =
																		(((BgL_appz00_bglt)
																			CREF(BgL_nodez00_1578))->BgL_argsz00);
																	BgL_auxz00_4552 = CAR(CDR(BgL_pairz00_2846));
																}
																BgL_obj2155z00_2850 =
																	(BgL_varz00_bglt) (BgL_auxz00_4552);
															}
															BgL_arg3823z00_1598 =
																(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2850))->
																BgL_variablez00);
														}
														{	/* Dataflow/walk.scm 288 */
															obj_t BgL_obj1751z00_2851;

															BgL_obj1751z00_2851 =
																(obj_t) (BgL_arg3823z00_1598);
															BgL_testz00_4542 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_obj1751z00_2851,
																BGl_globalz00zzast_varz00);
														}
													}
												else
													{	/* Dataflow/walk.scm 287 */
														BgL_testz00_4542 = ((bool_t) 0);
													}
											}
										else
											{	/* Dataflow/walk.scm 286 */
												BgL_testz00_4542 = ((bool_t) 0);
											}
									}
									if (BgL_testz00_4542)
										{	/* Dataflow/walk.scm 289 */
											BgL_typez00_bglt BgL_tyz00_1586;

											{	/* Dataflow/walk.scm 289 */
												obj_t BgL_arg3817z00_1592;

												{	/* Dataflow/walk.scm 289 */
													BgL_variablez00_bglt BgL_arg3818z00_1593;

													{	/* Dataflow/walk.scm 289 */
														BgL_varz00_bglt BgL_obj2155z00_2857;

														{	/* Dataflow/walk.scm 289 */
															obj_t BgL_auxz00_4560;

															{	/* Dataflow/walk.scm 289 */
																obj_t BgL_pairz00_2853;

																BgL_pairz00_2853 =
																	(((BgL_appz00_bglt) CREF(BgL_nodez00_1578))->
																	BgL_argsz00);
																BgL_auxz00_4560 = CAR(CDR(BgL_pairz00_2853));
															}
															BgL_obj2155z00_2857 =
																(BgL_varz00_bglt) (BgL_auxz00_4560);
														}
														BgL_arg3818z00_1593 =
															(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2857))->
															BgL_variablez00);
													}
													BgL_arg3817z00_1592 =
														(((BgL_variablez00_bglt)
															CREF(BgL_arg3818z00_1593))->BgL_idz00);
												}
												BgL_tyz00_1586 =
													BGl_findzd2typezd2zztype_envz00(BgL_arg3817z00_1592);
											}
											{	/* Dataflow/walk.scm 290 */
												obj_t BgL_arg3812z00_1587;

												{	/* Dataflow/walk.scm 290 */
													BgL_variablez00_bglt BgL_arg3814z00_1589;

													{	/* Dataflow/walk.scm 290 */
														BgL_varz00_bglt BgL_obj2155z00_2861;

														{	/* Dataflow/walk.scm 290 */
															obj_t BgL_auxz00_4568;

															{	/* Dataflow/walk.scm 290 */
																obj_t BgL_pairz00_2860;

																BgL_pairz00_2860 =
																	(((BgL_appz00_bglt) CREF(BgL_nodez00_1578))->
																	BgL_argsz00);
																BgL_auxz00_4568 = CAR(BgL_pairz00_2860);
															}
															BgL_obj2155z00_2861 =
																(BgL_varz00_bglt) (BgL_auxz00_4568);
														}
														BgL_arg3814z00_1589 =
															(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2861))->
															BgL_variablez00);
													}
													BgL_arg3812z00_1587 =
														MAKE_PAIR(
														(obj_t) (BgL_arg3814z00_1589),
														(obj_t) (BgL_tyz00_1586));
												}
												{	/* Dataflow/walk.scm 290 */
													obj_t BgL_list3813z00_1588;

													BgL_list3813z00_1588 =
														MAKE_PAIR(BgL_arg3812z00_1587, BNIL);
													return BgL_list3813z00_1588;
												}
											}
										}
									else
										{	/* Dataflow/walk.scm 286 */
											return BNIL;
										}
								}
							else
								{	/* Dataflow/walk.scm 292 */
									bool_t BgL_testz00_4577;

									{	/* Dataflow/walk.scm 292 */
										bool_t BgL_testz00_4578;

										{	/* Dataflow/walk.scm 292 */
											obj_t BgL_obj1856z00_2864;

											BgL_obj1856z00_2864 = (obj_t) (BgL_funvz00_1583);
											BgL_testz00_4578 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj1856z00_2864,
												BGl_funz00zzast_varz00);
										}
										if (BgL_testz00_4578)
											{	/* Dataflow/walk.scm 293 */
												bool_t BgL_testz00_4581;

												{	/* Dataflow/walk.scm 293 */
													BgL_funz00_bglt BgL_obj1817z00_2865;

													BgL_obj1817z00_2865 =
														(BgL_funz00_bglt) (BgL_funvz00_1583);
													BgL_testz00_4581 =
														CBOOL(
														(((BgL_funz00_bglt) CREF(BgL_obj1817z00_2865))->
															BgL_predicatezd2ofzd2));
												}
												if (BgL_testz00_4581)
													{	/* Dataflow/walk.scm 294 */
														bool_t BgL_testz00_4585;

														{	/* Dataflow/walk.scm 294 */
															obj_t BgL_auxz00_4586;

															BgL_auxz00_4586 =
																(((BgL_appz00_bglt) CREF(BgL_nodez00_1578))->
																BgL_argsz00);
															BgL_testz00_4585 = PAIRP(BgL_auxz00_4586);
														}
														if (BgL_testz00_4585)
															{	/* Dataflow/walk.scm 294 */
																bool_t BgL_testz00_4589;

																{	/* Dataflow/walk.scm 294 */
																	obj_t BgL_auxz00_4590;

																	{	/* Dataflow/walk.scm 294 */
																		obj_t BgL_pairz00_2869;

																		BgL_pairz00_2869 =
																			(((BgL_appz00_bglt)
																				CREF(BgL_nodez00_1578))->BgL_argsz00);
																		BgL_auxz00_4590 = CDR(BgL_pairz00_2869);
																	}
																	BgL_testz00_4589 = NULLP(BgL_auxz00_4590);
																}
																if (BgL_testz00_4589)
																	{	/* Dataflow/walk.scm 295 */
																		obj_t BgL_arg3841z00_1616;

																		{	/* Dataflow/walk.scm 295 */
																			obj_t BgL_pairz00_2872;

																			BgL_pairz00_2872 =
																				(((BgL_appz00_bglt)
																					CREF(BgL_nodez00_1578))->BgL_argsz00);
																			BgL_arg3841z00_1616 =
																				CAR(BgL_pairz00_2872);
																		}
																		BgL_testz00_4577 =
																			BGl_iszd2azf3z21zz__objectz00
																			(BgL_arg3841z00_1616,
																			BGl_varz00zzast_nodez00);
																	}
																else
																	{	/* Dataflow/walk.scm 294 */
																		BgL_testz00_4577 = ((bool_t) 0);
																	}
															}
														else
															{	/* Dataflow/walk.scm 294 */
																BgL_testz00_4577 = ((bool_t) 0);
															}
													}
												else
													{	/* Dataflow/walk.scm 293 */
														BgL_testz00_4577 = ((bool_t) 0);
													}
											}
										else
											{	/* Dataflow/walk.scm 292 */
												BgL_testz00_4577 = ((bool_t) 0);
											}
									}
									if (BgL_testz00_4577)
										{	/* Dataflow/walk.scm 296 */
											obj_t BgL_arg3831z00_1606;

											{	/* Dataflow/walk.scm 296 */
												BgL_variablez00_bglt BgL_arg3833z00_1608;

												obj_t BgL_arg3834z00_1609;

												{	/* Dataflow/walk.scm 296 */
													BgL_varz00_bglt BgL_obj2155z00_2876;

													{	/* Dataflow/walk.scm 296 */
														obj_t BgL_auxz00_4597;

														{	/* Dataflow/walk.scm 296 */
															obj_t BgL_pairz00_2875;

															BgL_pairz00_2875 =
																(((BgL_appz00_bglt) CREF(BgL_nodez00_1578))->
																BgL_argsz00);
															BgL_auxz00_4597 = CAR(BgL_pairz00_2875);
														}
														BgL_obj2155z00_2876 =
															(BgL_varz00_bglt) (BgL_auxz00_4597);
													}
													BgL_arg3833z00_1608 =
														(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2876))->
														BgL_variablez00);
												}
												{
													BgL_funz00_bglt BgL_auxz00_4602;

													BgL_auxz00_4602 =
														(BgL_funz00_bglt) (BgL_funvz00_1583);
													BgL_arg3834z00_1609 =
														(((BgL_funz00_bglt) CREF(BgL_auxz00_4602))->
														BgL_predicatezd2ofzd2);
												}
												BgL_arg3831z00_1606 =
													MAKE_PAIR(
													(obj_t) (BgL_arg3833z00_1608), BgL_arg3834z00_1609);
											}
											{	/* Dataflow/walk.scm 296 */
												obj_t BgL_list3832z00_1607;

												BgL_list3832z00_1607 =
													MAKE_PAIR(BgL_arg3831z00_1606, BNIL);
												return BgL_list3832z00_1607;
											}
										}
									else
										{	/* Dataflow/walk.scm 292 */
											return BNIL;
										}
								}
						}
					}
				}
			}
		}
	}



/* dataflow-node!-box-s3563 */
	obj_t BGl_dataflowzd2nodez12zd2boxzd2s3563zc0zzdataflow_walkz00(obj_t
		BgL_envz00_3540, obj_t BgL_nodez00_3541, obj_t BgL_envz00_3542)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 259 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1569;

				obj_t BgL_envz00_1570;

				BgL_nodez00_1569 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_3541);
				BgL_envz00_1570 = BgL_envz00_3542;
				{	/* Dataflow/walk.scm 260 */
					BgL_varz00_bglt BgL_arg3807z00_2799;

					BgL_arg3807z00_2799 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1569))->BgL_varz00);
					{
						BgL_typez00_bglt BgL_auxz00_4612;

						BgL_nodez00_bglt BgL_auxz00_4610;

						BgL_auxz00_4612 =
							(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
						BgL_auxz00_4610 = (BgL_nodez00_bglt) (BgL_arg3807z00_2799);
						((((BgL_nodez00_bglt) CREF(BgL_auxz00_4610))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_4612), BUNSPEC);
					}
				}
				{	/* Dataflow/walk.scm 260 */
					BgL_nodez00_bglt BgL_arg3808z00_2800;

					BgL_arg3808z00_2800 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1569))->BgL_valuez00);
					{	/* Dataflow/walk.scm 260 */
						obj_t BgL_res4038z00_2832;

						{	/* Dataflow/walk.scm 260 */
							obj_t BgL_envz00_2806;

							BgL_envz00_2806 = BgL_envz00_1570;
							{	/* Dataflow/walk.scm 260 */
								obj_t BgL_method3528z00_2807;

								{	/* Dataflow/walk.scm 260 */
									BgL_objectz00_bglt BgL_objz00_2808;

									BgL_objz00_2808 = (BgL_objectz00_bglt) (BgL_arg3808z00_2800);
									{	/* Dataflow/walk.scm 260 */
										long BgL_objzd2classzd2numz00_2809;

										BgL_objzd2classzd2numz00_2809 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2808);
										{	/* Dataflow/walk.scm 260 */
											obj_t BgL_arg2643z00_2810;

											BgL_arg2643z00_2810 =
												PROCEDURE_REF
												(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
												(int) (((long) 1)));
											{	/* Dataflow/walk.scm 260 */
												obj_t BgL_arrayz00_2812;

												int BgL_offsetz00_2813;

												BgL_arrayz00_2812 = BgL_arg2643z00_2810;
												BgL_offsetz00_2813 =
													(int) (BgL_objzd2classzd2numz00_2809);
												{	/* Dataflow/walk.scm 260 */
													long BgL_offsetz00_2814;

													BgL_offsetz00_2814 =
														((long) (BgL_offsetz00_2813) - OBJECT_TYPE);
													{	/* Dataflow/walk.scm 260 */
														long BgL_modz00_2815;

														{	/* Dataflow/walk.scm 260 */
															int BgL_arg2645z00_2816;

															BgL_arg2645z00_2816 = (int) (((long) 16));
															{	/* Dataflow/walk.scm 260 */
																long BgL_auxz00_4624;

																BgL_auxz00_4624 = (long) (BgL_arg2645z00_2816);
																BgL_modz00_2815 =
																	(BgL_offsetz00_2814 / BgL_auxz00_4624);
														}}
														{	/* Dataflow/walk.scm 260 */
															long BgL_restz00_2817;

															{	/* Dataflow/walk.scm 260 */
																int BgL_arg2644z00_2818;

																BgL_arg2644z00_2818 = (int) (((long) 16));
																{	/* Dataflow/walk.scm 260 */
																	long BgL_auxz00_4628;

																	BgL_auxz00_4628 =
																		(long) (BgL_arg2644z00_2818);
																	BgL_restz00_2817 =
																		(BgL_offsetz00_2814 % BgL_auxz00_4628);
															}}
															{	/* Dataflow/walk.scm 260 */

																BgL_method3528z00_2807 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2812,
																		(int) (BgL_modz00_2815)),
																	(int) (BgL_restz00_2817));
								}}}}}}}}
								BgL_res4038z00_2832 =
									PROCEDURE_ENTRY(BgL_method3528z00_2807)
									(BgL_method3528z00_2807, (obj_t) (BgL_arg3808z00_2800),
									BgL_envz00_2806, BEOA);
						}}
						return BgL_res4038z00_2832;
					}
				}
			}
		}
	}



/* dataflow-node!-box-r3561 */
	obj_t BGl_dataflowzd2nodez12zd2boxzd2r3561zc0zzdataflow_walkz00(obj_t
		BgL_envz00_3543, obj_t BgL_nodez00_3544, obj_t BgL_envz00_3545)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 251 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1561;

				obj_t BgL_envz00_1562;

				BgL_nodez00_1561 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_3544);
				BgL_envz00_1562 = BgL_envz00_3545;
				{	/* Dataflow/walk.scm 252 */
					BgL_varz00_bglt BgL_arg3805z00_2794;

					BgL_arg3805z00_2794 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1561))->BgL_varz00);
					{
						BgL_typez00_bglt BgL_auxz00_4642;

						BgL_nodez00_bglt BgL_auxz00_4640;

						BgL_auxz00_4642 =
							(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
						BgL_auxz00_4640 = (BgL_nodez00_bglt) (BgL_arg3805z00_2794);
						((((BgL_nodez00_bglt) CREF(BgL_auxz00_4640))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_4642), BUNSPEC);
					}
				}
				return BgL_envz00_1562;
			}
		}
	}



/* dataflow-node!-make-3558 */
	obj_t BGl_dataflowzd2nodez12zd2makezd23558zc0zzdataflow_walkz00(obj_t
		BgL_envz00_3546, obj_t BgL_nodez00_3547, obj_t BgL_envz00_3548)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 245 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1554;

				obj_t BgL_envz00_1555;

				BgL_nodez00_1554 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_3547);
				BgL_envz00_1555 = BgL_envz00_3548;
				{	/* Dataflow/walk.scm 246 */
					BgL_nodez00_bglt BgL_arg3803z00_2763;

					BgL_arg3803z00_2763 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1554))->BgL_valuez00);
					{	/* Dataflow/walk.scm 246 */
						obj_t BgL_res4035z00_2792;

						{	/* Dataflow/walk.scm 246 */
							obj_t BgL_envz00_2766;

							BgL_envz00_2766 = BgL_envz00_1555;
							{	/* Dataflow/walk.scm 246 */
								obj_t BgL_method3528z00_2767;

								{	/* Dataflow/walk.scm 246 */
									BgL_objectz00_bglt BgL_objz00_2768;

									BgL_objz00_2768 = (BgL_objectz00_bglt) (BgL_arg3803z00_2763);
									{	/* Dataflow/walk.scm 246 */
										long BgL_objzd2classzd2numz00_2769;

										BgL_objzd2classzd2numz00_2769 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2768);
										{	/* Dataflow/walk.scm 246 */
											obj_t BgL_arg2643z00_2770;

											BgL_arg2643z00_2770 =
												PROCEDURE_REF
												(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
												(int) (((long) 1)));
											{	/* Dataflow/walk.scm 246 */
												obj_t BgL_arrayz00_2772;

												int BgL_offsetz00_2773;

												BgL_arrayz00_2772 = BgL_arg2643z00_2770;
												BgL_offsetz00_2773 =
													(int) (BgL_objzd2classzd2numz00_2769);
												{	/* Dataflow/walk.scm 246 */
													long BgL_offsetz00_2774;

													BgL_offsetz00_2774 =
														((long) (BgL_offsetz00_2773) - OBJECT_TYPE);
													{	/* Dataflow/walk.scm 246 */
														long BgL_modz00_2775;

														{	/* Dataflow/walk.scm 246 */
															int BgL_arg2645z00_2776;

															BgL_arg2645z00_2776 = (int) (((long) 16));
															{	/* Dataflow/walk.scm 246 */
																long BgL_auxz00_4655;

																BgL_auxz00_4655 = (long) (BgL_arg2645z00_2776);
																BgL_modz00_2775 =
																	(BgL_offsetz00_2774 / BgL_auxz00_4655);
														}}
														{	/* Dataflow/walk.scm 246 */
															long BgL_restz00_2777;

															{	/* Dataflow/walk.scm 246 */
																int BgL_arg2644z00_2778;

																BgL_arg2644z00_2778 = (int) (((long) 16));
																{	/* Dataflow/walk.scm 246 */
																	long BgL_auxz00_4659;

																	BgL_auxz00_4659 =
																		(long) (BgL_arg2644z00_2778);
																	BgL_restz00_2777 =
																		(BgL_offsetz00_2774 % BgL_auxz00_4659);
															}}
															{	/* Dataflow/walk.scm 246 */

																BgL_method3528z00_2767 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2772,
																		(int) (BgL_modz00_2775)),
																	(int) (BgL_restz00_2777));
								}}}}}}}}
								BgL_res4035z00_2792 =
									PROCEDURE_ENTRY(BgL_method3528z00_2767)
									(BgL_method3528z00_2767, (obj_t) (BgL_arg3803z00_2763),
									BgL_envz00_2766, BEOA);
						}}
						return BgL_res4035z00_2792;
					}
				}
			}
		}
	}



/* dataflow-node!-jump-3556 */
	obj_t BGl_dataflowzd2nodez12zd2jumpzd23556zc0zzdataflow_walkz00(obj_t
		BgL_envz00_3549, obj_t BgL_nodez00_3550, obj_t BgL_envz00_3551)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 236 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1545;

				obj_t BgL_envz00_1546;

				BgL_nodez00_1545 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_3550);
				BgL_envz00_1546 = BgL_envz00_3551;
				{	/* Dataflow/walk.scm 238 */
					BgL_nodez00_bglt BgL_arg3800z00_1550;

					BgL_arg3800z00_1550 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1545))->
						BgL_exitz00);
					{	/* Dataflow/walk.scm 238 */
						obj_t BgL_res4029z00_2733;

						{	/* Dataflow/walk.scm 238 */
							obj_t BgL_envz00_2707;

							BgL_envz00_2707 = BgL_envz00_1546;
							{	/* Dataflow/walk.scm 238 */
								obj_t BgL_method3528z00_2708;

								{	/* Dataflow/walk.scm 238 */
									BgL_objectz00_bglt BgL_objz00_2709;

									BgL_objz00_2709 = (BgL_objectz00_bglt) (BgL_arg3800z00_1550);
									{	/* Dataflow/walk.scm 238 */
										long BgL_objzd2classzd2numz00_2710;

										BgL_objzd2classzd2numz00_2710 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2709);
										{	/* Dataflow/walk.scm 238 */
											obj_t BgL_arg2643z00_2711;

											BgL_arg2643z00_2711 =
												PROCEDURE_REF
												(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
												(int) (((long) 1)));
											{	/* Dataflow/walk.scm 238 */
												obj_t BgL_arrayz00_2713;

												int BgL_offsetz00_2714;

												BgL_arrayz00_2713 = BgL_arg2643z00_2711;
												BgL_offsetz00_2714 =
													(int) (BgL_objzd2classzd2numz00_2710);
												{	/* Dataflow/walk.scm 238 */
													long BgL_offsetz00_2715;

													BgL_offsetz00_2715 =
														((long) (BgL_offsetz00_2714) - OBJECT_TYPE);
													{	/* Dataflow/walk.scm 238 */
														long BgL_modz00_2716;

														{	/* Dataflow/walk.scm 238 */
															int BgL_arg2645z00_2717;

															BgL_arg2645z00_2717 = (int) (((long) 16));
															{	/* Dataflow/walk.scm 238 */
																long BgL_auxz00_4679;

																BgL_auxz00_4679 = (long) (BgL_arg2645z00_2717);
																BgL_modz00_2716 =
																	(BgL_offsetz00_2715 / BgL_auxz00_4679);
														}}
														{	/* Dataflow/walk.scm 238 */
															long BgL_restz00_2718;

															{	/* Dataflow/walk.scm 238 */
																int BgL_arg2644z00_2719;

																BgL_arg2644z00_2719 = (int) (((long) 16));
																{	/* Dataflow/walk.scm 238 */
																	long BgL_auxz00_4683;

																	BgL_auxz00_4683 =
																		(long) (BgL_arg2644z00_2719);
																	BgL_restz00_2718 =
																		(BgL_offsetz00_2715 % BgL_auxz00_4683);
															}}
															{	/* Dataflow/walk.scm 238 */

																BgL_method3528z00_2708 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2713,
																		(int) (BgL_modz00_2716)),
																	(int) (BgL_restz00_2718));
								}}}}}}}}
								BgL_res4029z00_2733 =
									PROCEDURE_ENTRY(BgL_method3528z00_2708)
									(BgL_method3528z00_2708, (obj_t) (BgL_arg3800z00_1550),
									BgL_envz00_2707, BEOA);
						}} BgL_res4029z00_2733;
				}}
				{	/* Dataflow/walk.scm 239 */
					BgL_nodez00_bglt BgL_arg3801z00_1551;

					BgL_arg3801z00_1551 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1545))->
						BgL_valuez00);
					{	/* Dataflow/walk.scm 239 */
						obj_t BgL_res4032z00_2762;

						{	/* Dataflow/walk.scm 239 */
							obj_t BgL_envz00_2736;

							BgL_envz00_2736 = BgL_envz00_1546;
							{	/* Dataflow/walk.scm 239 */
								obj_t BgL_method3528z00_2737;

								{	/* Dataflow/walk.scm 239 */
									BgL_objectz00_bglt BgL_objz00_2738;

									BgL_objz00_2738 = (BgL_objectz00_bglt) (BgL_arg3801z00_1551);
									{	/* Dataflow/walk.scm 239 */
										long BgL_objzd2classzd2numz00_2739;

										BgL_objzd2classzd2numz00_2739 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2738);
										{	/* Dataflow/walk.scm 239 */
											obj_t BgL_arg2643z00_2740;

											BgL_arg2643z00_2740 =
												PROCEDURE_REF
												(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
												(int) (((long) 1)));
											{	/* Dataflow/walk.scm 239 */
												obj_t BgL_arrayz00_2742;

												int BgL_offsetz00_2743;

												BgL_arrayz00_2742 = BgL_arg2643z00_2740;
												BgL_offsetz00_2743 =
													(int) (BgL_objzd2classzd2numz00_2739);
												{	/* Dataflow/walk.scm 239 */
													long BgL_offsetz00_2744;

													BgL_offsetz00_2744 =
														((long) (BgL_offsetz00_2743) - OBJECT_TYPE);
													{	/* Dataflow/walk.scm 239 */
														long BgL_modz00_2745;

														{	/* Dataflow/walk.scm 239 */
															int BgL_arg2645z00_2746;

															BgL_arg2645z00_2746 = (int) (((long) 16));
															{	/* Dataflow/walk.scm 239 */
																long BgL_auxz00_4702;

																BgL_auxz00_4702 = (long) (BgL_arg2645z00_2746);
																BgL_modz00_2745 =
																	(BgL_offsetz00_2744 / BgL_auxz00_4702);
														}}
														{	/* Dataflow/walk.scm 239 */
															long BgL_restz00_2747;

															{	/* Dataflow/walk.scm 239 */
																int BgL_arg2644z00_2748;

																BgL_arg2644z00_2748 = (int) (((long) 16));
																{	/* Dataflow/walk.scm 239 */
																	long BgL_auxz00_4706;

																	BgL_auxz00_4706 =
																		(long) (BgL_arg2644z00_2748);
																	BgL_restz00_2747 =
																		(BgL_offsetz00_2744 % BgL_auxz00_4706);
															}}
															{	/* Dataflow/walk.scm 239 */

																BgL_method3528z00_2737 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2742,
																		(int) (BgL_modz00_2745)),
																	(int) (BgL_restz00_2747));
								}}}}}}}}
								BgL_res4032z00_2762 =
									PROCEDURE_ENTRY(BgL_method3528z00_2737)
									(BgL_method3528z00_2737, (obj_t) (BgL_arg3801z00_1551),
									BgL_envz00_2736, BEOA);
						}} BgL_res4032z00_2762;
				}}
				return BNIL;
			}
		}
	}



/* dataflow-node!-set-e3554 */
	obj_t BGl_dataflowzd2nodez12zd2setzd2e3554zc0zzdataflow_walkz00(obj_t
		BgL_envz00_3552, obj_t BgL_nodez00_3553, obj_t BgL_envz00_3554)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 228 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1537;

				obj_t BgL_envz00_1538;

				BgL_nodez00_1537 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_3553);
				BgL_envz00_1538 = BgL_envz00_3554;
				{	/* Dataflow/walk.scm 230 */
					BgL_nodez00_bglt BgL_arg3798z00_2675;

					BgL_arg3798z00_2675 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1537))->BgL_bodyz00);
					{	/* Dataflow/walk.scm 230 */
						obj_t BgL_res4026z00_2704;

						{	/* Dataflow/walk.scm 230 */
							obj_t BgL_envz00_2678;

							BgL_envz00_2678 = BgL_envz00_1538;
							{	/* Dataflow/walk.scm 230 */
								obj_t BgL_method3528z00_2679;

								{	/* Dataflow/walk.scm 230 */
									BgL_objectz00_bglt BgL_objz00_2680;

									BgL_objz00_2680 = (BgL_objectz00_bglt) (BgL_arg3798z00_2675);
									{	/* Dataflow/walk.scm 230 */
										long BgL_objzd2classzd2numz00_2681;

										BgL_objzd2classzd2numz00_2681 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2680);
										{	/* Dataflow/walk.scm 230 */
											obj_t BgL_arg2643z00_2682;

											BgL_arg2643z00_2682 =
												PROCEDURE_REF
												(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
												(int) (((long) 1)));
											{	/* Dataflow/walk.scm 230 */
												obj_t BgL_arrayz00_2684;

												int BgL_offsetz00_2685;

												BgL_arrayz00_2684 = BgL_arg2643z00_2682;
												BgL_offsetz00_2685 =
													(int) (BgL_objzd2classzd2numz00_2681);
												{	/* Dataflow/walk.scm 230 */
													long BgL_offsetz00_2686;

													BgL_offsetz00_2686 =
														((long) (BgL_offsetz00_2685) - OBJECT_TYPE);
													{	/* Dataflow/walk.scm 230 */
														long BgL_modz00_2687;

														{	/* Dataflow/walk.scm 230 */
															int BgL_arg2645z00_2688;

															BgL_arg2645z00_2688 = (int) (((long) 16));
															{	/* Dataflow/walk.scm 230 */
																long BgL_auxz00_4726;

																BgL_auxz00_4726 = (long) (BgL_arg2645z00_2688);
																BgL_modz00_2687 =
																	(BgL_offsetz00_2686 / BgL_auxz00_4726);
														}}
														{	/* Dataflow/walk.scm 230 */
															long BgL_restz00_2689;

															{	/* Dataflow/walk.scm 230 */
																int BgL_arg2644z00_2690;

																BgL_arg2644z00_2690 = (int) (((long) 16));
																{	/* Dataflow/walk.scm 230 */
																	long BgL_auxz00_4730;

																	BgL_auxz00_4730 =
																		(long) (BgL_arg2644z00_2690);
																	BgL_restz00_2689 =
																		(BgL_offsetz00_2686 % BgL_auxz00_4730);
															}}
															{	/* Dataflow/walk.scm 230 */

																BgL_method3528z00_2679 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2684,
																		(int) (BgL_modz00_2687)),
																	(int) (BgL_restz00_2689));
								}}}}}}}}
								BgL_res4026z00_2704 =
									PROCEDURE_ENTRY(BgL_method3528z00_2679)
									(BgL_method3528z00_2679, (obj_t) (BgL_arg3798z00_2675),
									BgL_envz00_2678, BEOA);
						}} BgL_res4026z00_2704;
				}}
				return BNIL;
			}
		}
	}



/* dataflow-node!-let-v3552 */
	obj_t BGl_dataflowzd2nodez12zd2letzd2v3552zc0zzdataflow_walkz00(obj_t
		BgL_envz00_3555, obj_t BgL_nodez00_3556, obj_t BgL_envz00_3557)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 196 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1489;

				obj_t BgL_envz00_1490;

				BgL_nodez00_1489 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_3556);
				BgL_envz00_1490 = BgL_envz00_3557;
				BGl_letzd2varzd2stampz00zzdataflow_walkz00 =
					(((long) 1) + BGl_letzd2varzd2stampz00zzdataflow_walkz00);
				{	/* Dataflow/walk.scm 199 */
					long BgL_stampz00_1494;

					BgL_stampz00_1494 = BGl_letzd2varzd2stampz00zzdataflow_walkz00;
					{	/* Dataflow/walk.scm 199 */
						obj_t BgL_envz00_1495;

						{
							obj_t BgL_bindingsz00_1520;

							obj_t BgL_envz00_1521;

							{	/* Dataflow/walk.scm 200 */
								obj_t BgL_arg3788z00_1519;

								BgL_arg3788z00_1519 =
									(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1489))->
									BgL_bindingsz00);
								BgL_bindingsz00_1520 = BgL_arg3788z00_1519;
								BgL_envz00_1521 = BgL_envz00_1490;
							BgL_zc3anonymousza33789ze3z83_1522:
								if (NULLP(BgL_bindingsz00_1520))
									{	/* Dataflow/walk.scm 202 */
										BgL_envz00_1495 = BgL_envz00_1521;
									}
								else
									{	/* Dataflow/walk.scm 204 */
										obj_t BgL_nodez00_1524;

										{	/* Dataflow/walk.scm 204 */
											obj_t BgL_pairz00_2582;

											BgL_pairz00_2582 = BgL_bindingsz00_1520;
											BgL_nodez00_1524 = CDR(CAR(BgL_pairz00_2582));
										}
										{	/* Dataflow/walk.scm 204 */
											obj_t BgL_envz00_1525;

											{	/* Dataflow/walk.scm 205 */
												obj_t BgL_res4018z00_2613;

												{	/* Dataflow/walk.scm 205 */
													BgL_nodez00_bglt BgL_nodez00_2586;

													obj_t BgL_envz00_2587;

													BgL_nodez00_2586 =
														(BgL_nodez00_bglt) (BgL_nodez00_1524);
													BgL_envz00_2587 = BgL_envz00_1521;
													{	/* Dataflow/walk.scm 205 */
														obj_t BgL_method3528z00_2588;

														{	/* Dataflow/walk.scm 205 */
															BgL_objectz00_bglt BgL_objz00_2589;

															BgL_objz00_2589 =
																(BgL_objectz00_bglt) (BgL_nodez00_2586);
															{	/* Dataflow/walk.scm 205 */
																long BgL_objzd2classzd2numz00_2590;

																BgL_objzd2classzd2numz00_2590 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2589);
																{	/* Dataflow/walk.scm 205 */
																	obj_t BgL_arg2643z00_2591;

																	BgL_arg2643z00_2591 =
																		PROCEDURE_REF
																		(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
																		(int) (((long) 1)));
																	{	/* Dataflow/walk.scm 205 */
																		obj_t BgL_arrayz00_2593;

																		int BgL_offsetz00_2594;

																		BgL_arrayz00_2593 = BgL_arg2643z00_2591;
																		BgL_offsetz00_2594 =
																			(int) (BgL_objzd2classzd2numz00_2590);
																		{	/* Dataflow/walk.scm 205 */
																			long BgL_offsetz00_2595;

																			BgL_offsetz00_2595 =
																				(
																				(long) (BgL_offsetz00_2594) -
																				OBJECT_TYPE);
																			{	/* Dataflow/walk.scm 205 */
																				long BgL_modz00_2596;

																				{	/* Dataflow/walk.scm 205 */
																					int BgL_arg2645z00_2597;

																					BgL_arg2645z00_2597 =
																						(int) (((long) 16));
																					{	/* Dataflow/walk.scm 205 */
																						long BgL_auxz00_4756;

																						BgL_auxz00_4756 =
																							(long) (BgL_arg2645z00_2597);
																						BgL_modz00_2596 =
																							(BgL_offsetz00_2595 /
																							BgL_auxz00_4756);
																				}}
																				{	/* Dataflow/walk.scm 205 */
																					long BgL_restz00_2598;

																					{	/* Dataflow/walk.scm 205 */
																						int BgL_arg2644z00_2599;

																						BgL_arg2644z00_2599 =
																							(int) (((long) 16));
																						{	/* Dataflow/walk.scm 205 */
																							long BgL_auxz00_4760;

																							BgL_auxz00_4760 =
																								(long) (BgL_arg2644z00_2599);
																							BgL_restz00_2598 =
																								(BgL_offsetz00_2595 %
																								BgL_auxz00_4760);
																					}}
																					{	/* Dataflow/walk.scm 205 */

																						BgL_method3528z00_2588 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2593,
																								(int) (BgL_modz00_2596)),
																							(int) (BgL_restz00_2598));
														}}}}}}}}
														BgL_res4018z00_2613 =
															PROCEDURE_ENTRY(BgL_method3528z00_2588)
															(BgL_method3528z00_2588,
															(obj_t) (BgL_nodez00_2586), BgL_envz00_2587,
															BEOA);
												}}
												BgL_envz00_1525 = BgL_res4018z00_2613;
											}
											{	/* Dataflow/walk.scm 205 */

												{	/* Dataflow/walk.scm 206 */
													obj_t BgL_lz00_1526;

													{	/* Dataflow/walk.scm 206 */
														obj_t BgL_pairz00_2614;

														BgL_pairz00_2614 = BgL_bindingsz00_1520;
														BgL_lz00_1526 = CAR(CAR(BgL_pairz00_2614));
													}
													{	/* Dataflow/walk.scm 207 */
														bool_t BgL_testz00_4772;

														{	/* Dataflow/walk.scm 207 */
															obj_t BgL_auxz00_4773;

															{
																BgL_variablez00_bglt BgL_auxz00_4774;

																BgL_auxz00_4774 =
																	(BgL_variablez00_bglt) (BgL_lz00_1526);
																BgL_auxz00_4773 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_4774))->BgL_accessz00);
															}
															BgL_testz00_4772 =
																(BgL_auxz00_4773 == CNST_TABLE_REF(((long) 5)));
														}
														if (BgL_testz00_4772)
															{	/* Dataflow/walk.scm 208 */
																BgL_localz00_bglt BgL_obj3466z00_1528;

																BgL_obj3466z00_1528 =
																	((BgL_localz00_bglt)
																	(BgL_localz00_bglt) (BgL_lz00_1526));
																{	/* Dataflow/walk.scm 208 */
																	BgL_localzf2valuezf2_bglt BgL_arg3792z00_1529;

																	{	/* Dataflow/walk.scm 208 */
																		BgL_localzf2valuezf2_bglt
																			BgL_res4020z00_2628;
																		{	/* Dataflow/walk.scm 208 */
																			int BgL_stamp3367z00_2619;

																			BgL_nodez00_bglt BgL_node3368z00_2620;

																			BgL_stamp3367z00_2619 =
																				(int) (BgL_stampz00_1494);
																			BgL_node3368z00_2620 =
																				(BgL_nodez00_bglt) (BgL_nodez00_1524);
																			{	/* Dataflow/walk.scm 208 */
																				BgL_localzf2valuezf2_bglt
																					BgL_new3369z00_2621;
																				BgL_new3369z00_2621 =
																					((BgL_localzf2valuezf2_bglt)
																					BREF(GC_MALLOC(sizeof(struct
																								BgL_localzf2valuezf2_bgl))));
																				{	/* Dataflow/walk.scm 208 */
																					BgL_localzf2valuezf2_bglt
																						BgL_res4019z00_2627;
																					{	/* Dataflow/walk.scm 208 */
																						BgL_localzf2valuezf2_bglt
																							BgL_new3387z00_2622;
																						BgL_new3387z00_2622 =
																							BgL_new3369z00_2621;
																						{	/* Dataflow/walk.scm 208 */
																							int BgL_stamp3385z00_2625;

																							BgL_nodez00_bglt
																								BgL_node3386z00_2626;
																							BgL_stamp3385z00_2625 =
																								BgL_stamp3367z00_2619;
																							BgL_node3386z00_2626 =
																								BgL_node3368z00_2620;
																							((((BgL_localzf2valuezf2_bglt)
																										CREF(BgL_new3387z00_2622))->
																									BgL_stampz00) =
																								((int) BgL_stamp3385z00_2625),
																								BUNSPEC);
																							((((BgL_localzf2valuezf2_bglt)
																										CREF(BgL_new3387z00_2622))->
																									BgL_nodez00) =
																								((BgL_nodez00_bglt)
																									BgL_node3386z00_2626),
																								BUNSPEC);
																							BgL_res4019z00_2627 =
																								BgL_new3387z00_2622;
																					}} BgL_res4019z00_2627;
																				}
																				BgL_res4020z00_2628 =
																					BgL_new3369z00_2621;
																		}}
																		BgL_arg3792z00_1529 = BgL_res4020z00_2628;
																	}
																	{	/* Dataflow/walk.scm 208 */
																		obj_t BgL_auxz00_4788;

																		BgL_objectz00_bglt BgL_auxz00_4786;

																		BgL_auxz00_4788 =
																			(obj_t) (BgL_arg3792z00_1529);
																		BgL_auxz00_4786 =
																			(BgL_objectz00_bglt)
																			(BgL_obj3466z00_1528);
																		BGL_OBJECT_WIDENING_SET(BgL_auxz00_4786,
																			BgL_auxz00_4788);
																}}
																BGL_OBJECT_CLASS_NUM_SET(
																	(BgL_objectz00_bglt) (BgL_obj3466z00_1528),
																	BGl_classzd2numzd2zz__objectz00
																	(BGl_localzf2valuezf2zzdataflow_walkz00));
																(obj_t) (BgL_obj3466z00_1528);
															}
														else
															{	/* Dataflow/walk.scm 207 */
																BFALSE;
															}
													}
												}
												{
													obj_t BgL_envz00_4797;

													obj_t BgL_bindingsz00_4795;

													BgL_bindingsz00_4795 = CDR(BgL_bindingsz00_1520);
													BgL_envz00_4797 = BgL_envz00_1525;
													BgL_envz00_1521 = BgL_envz00_4797;
													BgL_bindingsz00_1520 = BgL_bindingsz00_4795;
													goto BgL_zc3anonymousza33789ze3z83_1522;
												}
											}
										}
									}
							}
						}
						{	/* Dataflow/walk.scm 200 */

							{	/* Dataflow/walk.scm 212 */
								obj_t BgL_arg3770z00_1497;

								{	/* Dataflow/walk.scm 223 */
									BgL_nodez00_bglt BgL_arg3787z00_1516;

									BgL_arg3787z00_1516 =
										(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1489))->
										BgL_bodyz00);
									{	/* Dataflow/walk.scm 223 */
										obj_t BgL_res4023z00_2660;

										{	/* Dataflow/walk.scm 223 */
											obj_t BgL_envz00_2634;

											BgL_envz00_2634 = BgL_envz00_1495;
											{	/* Dataflow/walk.scm 223 */
												obj_t BgL_method3528z00_2635;

												{	/* Dataflow/walk.scm 223 */
													BgL_objectz00_bglt BgL_objz00_2636;

													BgL_objz00_2636 =
														(BgL_objectz00_bglt) (BgL_arg3787z00_1516);
													{	/* Dataflow/walk.scm 223 */
														long BgL_objzd2classzd2numz00_2637;

														BgL_objzd2classzd2numz00_2637 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2636);
														{	/* Dataflow/walk.scm 223 */
															obj_t BgL_arg2643z00_2638;

															BgL_arg2643z00_2638 =
																PROCEDURE_REF
																(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
																(int) (((long) 1)));
															{	/* Dataflow/walk.scm 223 */
																obj_t BgL_arrayz00_2640;

																int BgL_offsetz00_2641;

																BgL_arrayz00_2640 = BgL_arg2643z00_2638;
																BgL_offsetz00_2641 =
																	(int) (BgL_objzd2classzd2numz00_2637);
																{	/* Dataflow/walk.scm 223 */
																	long BgL_offsetz00_2642;

																	BgL_offsetz00_2642 =
																		((long) (BgL_offsetz00_2641) - OBJECT_TYPE);
																	{	/* Dataflow/walk.scm 223 */
																		long BgL_modz00_2643;

																		{	/* Dataflow/walk.scm 223 */
																			int BgL_arg2645z00_2644;

																			BgL_arg2645z00_2644 = (int) (((long) 16));
																			{	/* Dataflow/walk.scm 223 */
																				long BgL_auxz00_4807;

																				BgL_auxz00_4807 =
																					(long) (BgL_arg2645z00_2644);
																				BgL_modz00_2643 =
																					(BgL_offsetz00_2642 /
																					BgL_auxz00_4807);
																		}}
																		{	/* Dataflow/walk.scm 223 */
																			long BgL_restz00_2645;

																			{	/* Dataflow/walk.scm 223 */
																				int BgL_arg2644z00_2646;

																				BgL_arg2644z00_2646 =
																					(int) (((long) 16));
																				{	/* Dataflow/walk.scm 223 */
																					long BgL_auxz00_4811;

																					BgL_auxz00_4811 =
																						(long) (BgL_arg2644z00_2646);
																					BgL_restz00_2645 =
																						(BgL_offsetz00_2642 %
																						BgL_auxz00_4811);
																			}}
																			{	/* Dataflow/walk.scm 223 */

																				BgL_method3528z00_2635 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2640,
																						(int) (BgL_modz00_2643)),
																					(int) (BgL_restz00_2645));
												}}}}}}}}
												BgL_res4023z00_2660 =
													PROCEDURE_ENTRY(BgL_method3528z00_2635)
													(BgL_method3528z00_2635,
													(obj_t) (BgL_arg3787z00_1516), BgL_envz00_2634, BEOA);
										}}
										BgL_arg3770z00_1497 = BgL_res4023z00_2660;
								}}
								{	/* Dataflow/walk.scm 214 */
									obj_t BgL_zc3anonymousza33772ze3z83_3495;

									BgL_zc3anonymousza33772ze3z83_3495 =
										make_fx_procedure
										(BGl_zc3anonymousza33772ze3z83zzdataflow_walkz00,
										(int) (((long) 1)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3anonymousza33772ze3z83_3495,
										(int) (((long) 0)), BINT(BgL_stampz00_1494));
									{	/* Dataflow/walk.scm 212 */
										obj_t BgL_list3771z00_1498;

										BgL_list3771z00_1498 = MAKE_PAIR(BgL_arg3770z00_1497, BNIL);
										return
											BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
											(BgL_zc3anonymousza33772ze3z83_3495,
											BgL_list3771z00_1498);
									}
								}
							}
						}
					}
				}
			}
		}
	}



/* <anonymous:3772> */
	obj_t BGl_zc3anonymousza33772ze3z83zzdataflow_walkz00(obj_t BgL_envz00_3558,
		obj_t BgL_bz00_3560)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 212 */
			{	/* Dataflow/walk.scm 214 */
				obj_t BgL_stampz00_3559;

				BgL_stampz00_3559 = PROCEDURE_REF(BgL_envz00_3558, (int) (((long) 0)));
				{
					obj_t BgL_bz00_1499;

					BgL_bz00_1499 = BgL_bz00_3560;
					{	/* Dataflow/walk.scm 214 */
						bool_t BgL_testz00_4832;

						{	/* Dataflow/walk.scm 214 */
							bool_t BgL_testz00_4833;

							{	/* Dataflow/walk.scm 214 */
								obj_t BgL_arg3786z00_1515;

								BgL_arg3786z00_1515 = CAR(BgL_bz00_1499);
								BgL_testz00_4833 =
									BGl_iszd2azf3z21zz__objectz00(BgL_arg3786z00_1515,
									BGl_localzf2valuezf2zzdataflow_walkz00);
							}
							if (BgL_testz00_4833)
								{	/* Dataflow/walk.scm 215 */
									long BgL_auxz00_4836;

									{	/* Dataflow/walk.scm 215 */
										int BgL_auxz00_4837;

										{	/* Dataflow/walk.scm 215 */
											BgL_localzf2valuezf2_bglt BgL_obj3401z00_2664;

											{	/* Dataflow/walk.scm 215 */
												obj_t BgL_pairz00_2663;

												BgL_pairz00_2663 = BgL_bz00_1499;
												BgL_obj3401z00_2664 =
													(BgL_localzf2valuezf2_bglt) (CAR(BgL_pairz00_2663));
											}
											{
												obj_t BgL_auxz00_4840;

												{	/* Dataflow/walk.scm 215 */
													BgL_objectz00_bglt BgL_auxz00_4841;

													BgL_auxz00_4841 =
														(BgL_objectz00_bglt) (BgL_obj3401z00_2664);
													BgL_auxz00_4840 =
														BGL_OBJECT_WIDENING(BgL_auxz00_4841);
												}
												BgL_auxz00_4837 =
													(((BgL_localzf2valuezf2_bglt) CREF(BgL_auxz00_4840))->
													BgL_stampz00);
										}}
										BgL_auxz00_4836 = (long) (BgL_auxz00_4837);
									}
									BgL_testz00_4832 =
										(BgL_auxz00_4836 < (long) CINT(BgL_stampz00_3559));
								}
							else
								{	/* Dataflow/walk.scm 214 */
									BgL_testz00_4832 = ((bool_t) 1);
								}
						}
						if (BgL_testz00_4832)
							{	/* Dataflow/walk.scm 214 */
								return BgL_bz00_1499;
							}
						else
							{	/* Dataflow/walk.scm 217 */
								bool_t BgL_testz00_4848;

								{	/* Dataflow/walk.scm 217 */
									BgL_nodez00_bglt BgL_arg3781z00_1510;

									{	/* Dataflow/walk.scm 217 */
										BgL_localzf2valuezf2_bglt BgL_obj3403z00_2668;

										{	/* Dataflow/walk.scm 217 */
											obj_t BgL_pairz00_2667;

											BgL_pairz00_2667 = BgL_bz00_1499;
											BgL_obj3403z00_2668 =
												(BgL_localzf2valuezf2_bglt) (CAR(BgL_pairz00_2667));
										}
										{
											obj_t BgL_auxz00_4851;

											{	/* Dataflow/walk.scm 217 */
												BgL_objectz00_bglt BgL_auxz00_4852;

												BgL_auxz00_4852 =
													(BgL_objectz00_bglt) (BgL_obj3403z00_2668);
												BgL_auxz00_4851 = BGL_OBJECT_WIDENING(BgL_auxz00_4852);
											}
											BgL_arg3781z00_1510 =
												(((BgL_localzf2valuezf2_bglt) CREF(BgL_auxz00_4851))->
												BgL_nodez00);
										}
									}
									{	/* Dataflow/walk.scm 217 */
										obj_t BgL_obj2170z00_2669;

										BgL_obj2170z00_2669 = (obj_t) (BgL_arg3781z00_1510);
										BgL_testz00_4848 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj2170z00_2669,
											BGl_varz00zzast_nodez00);
									}
								}
								if (BgL_testz00_4848)
									{	/* Dataflow/walk.scm 218 */
										BgL_variablez00_bglt BgL_vz00_1503;

										{	/* Dataflow/walk.scm 218 */
											BgL_varz00_bglt BgL_obj2155z00_2672;

											{	/* Dataflow/walk.scm 218 */
												BgL_nodez00_bglt BgL_auxz00_4858;

												{	/* Dataflow/walk.scm 218 */
													BgL_localzf2valuezf2_bglt BgL_obj3403z00_2671;

													{	/* Dataflow/walk.scm 218 */
														obj_t BgL_pairz00_2670;

														BgL_pairz00_2670 = BgL_bz00_1499;
														BgL_obj3403z00_2671 =
															(BgL_localzf2valuezf2_bglt) (CAR
															(BgL_pairz00_2670));
													}
													{
														obj_t BgL_auxz00_4861;

														{	/* Dataflow/walk.scm 218 */
															BgL_objectz00_bglt BgL_auxz00_4862;

															BgL_auxz00_4862 =
																(BgL_objectz00_bglt) (BgL_obj3403z00_2671);
															BgL_auxz00_4861 =
																BGL_OBJECT_WIDENING(BgL_auxz00_4862);
														}
														BgL_auxz00_4858 =
															(((BgL_localzf2valuezf2_bglt)
																CREF(BgL_auxz00_4861))->BgL_nodez00);
													}
												}
												BgL_obj2155z00_2672 =
													(BgL_varz00_bglt) (BgL_auxz00_4858);
											}
											BgL_vz00_1503 =
												(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2672))->
												BgL_variablez00);
										}
										if (
											((((BgL_variablez00_bglt) CREF(BgL_vz00_1503))->
													BgL_accessz00) == CNST_TABLE_REF(((long) 5))))
											{	/* Dataflow/walk.scm 219 */
												return
													MAKE_PAIR(
													(obj_t) (BgL_vz00_1503), CDR(BgL_bz00_1499));
											}
										else
											{	/* Dataflow/walk.scm 219 */
												return BFALSE;
											}
									}
								else
									{	/* Dataflow/walk.scm 217 */
										return BFALSE;
									}
							}
					}
				}
			}
		}
	}



/* dataflow-node!-let-f3550 */
	obj_t BGl_dataflowzd2nodez12zd2letzd2f3550zc0zzdataflow_walkz00(obj_t
		BgL_envz00_3561, obj_t BgL_nodez00_3562, obj_t BgL_envz00_3563)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 181 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1471;

				obj_t BgL_envz00_1472;

				BgL_nodez00_1471 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_3562);
				BgL_envz00_1472 = BgL_envz00_3563;
				{	/* Dataflow/walk.scm 183 */
					obj_t BgL_g3511z00_1476;

					BgL_g3511z00_1476 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1471))->BgL_localsz00);
					{
						obj_t BgL_l3509z00_1478;

						BgL_l3509z00_1478 = BgL_g3511z00_1476;
					BgL_zc3anonymousza33762ze3z83_1479:
						if (PAIRP(BgL_l3509z00_1478))
							{	/* Dataflow/walk.scm 183 */
								{	/* Dataflow/walk.scm 184 */
									obj_t BgL_localz00_1481;

									BgL_localz00_1481 = CAR(BgL_l3509z00_1478);
									{	/* Dataflow/walk.scm 184 */
										obj_t BgL_arg3764z00_1482;

										{	/* Dataflow/walk.scm 184 */
											BgL_sfunz00_bglt BgL_obj1884z00_2519;

											{	/* Dataflow/walk.scm 184 */
												BgL_variablez00_bglt BgL_obj1611z00_2518;

												BgL_obj1611z00_2518 =
													(BgL_variablez00_bglt) (BgL_localz00_1481);
												BgL_obj1884z00_2519 =
													(BgL_sfunz00_bglt) (
													(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_2518))->
														BgL_valuez00));
											}
											BgL_arg3764z00_1482 =
												(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_2519))->
												BgL_bodyz00);
										}
										{	/* Dataflow/walk.scm 184 */
											obj_t BgL_res4012z00_2547;

											{	/* Dataflow/walk.scm 184 */
												BgL_nodez00_bglt BgL_nodez00_2520;

												obj_t BgL_envz00_2521;

												BgL_nodez00_2520 =
													(BgL_nodez00_bglt) (BgL_arg3764z00_1482);
												BgL_envz00_2521 = BgL_envz00_1472;
												{	/* Dataflow/walk.scm 184 */
													obj_t BgL_method3528z00_2522;

													{	/* Dataflow/walk.scm 184 */
														BgL_objectz00_bglt BgL_objz00_2523;

														BgL_objz00_2523 =
															(BgL_objectz00_bglt) (BgL_nodez00_2520);
														{	/* Dataflow/walk.scm 184 */
															long BgL_objzd2classzd2numz00_2524;

															BgL_objzd2classzd2numz00_2524 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2523);
															{	/* Dataflow/walk.scm 184 */
																obj_t BgL_arg2643z00_2525;

																BgL_arg2643z00_2525 =
																	PROCEDURE_REF
																	(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
																	(int) (((long) 1)));
																{	/* Dataflow/walk.scm 184 */
																	obj_t BgL_arrayz00_2527;

																	int BgL_offsetz00_2528;

																	BgL_arrayz00_2527 = BgL_arg2643z00_2525;
																	BgL_offsetz00_2528 =
																		(int) (BgL_objzd2classzd2numz00_2524);
																	{	/* Dataflow/walk.scm 184 */
																		long BgL_offsetz00_2529;

																		BgL_offsetz00_2529 =
																			(
																			(long) (BgL_offsetz00_2528) -
																			OBJECT_TYPE);
																		{	/* Dataflow/walk.scm 184 */
																			long BgL_modz00_2530;

																			{	/* Dataflow/walk.scm 184 */
																				int BgL_arg2645z00_2531;

																				BgL_arg2645z00_2531 =
																					(int) (((long) 16));
																				{	/* Dataflow/walk.scm 184 */
																					long BgL_auxz00_4892;

																					BgL_auxz00_4892 =
																						(long) (BgL_arg2645z00_2531);
																					BgL_modz00_2530 =
																						(BgL_offsetz00_2529 /
																						BgL_auxz00_4892);
																			}}
																			{	/* Dataflow/walk.scm 184 */
																				long BgL_restz00_2532;

																				{	/* Dataflow/walk.scm 184 */
																					int BgL_arg2644z00_2533;

																					BgL_arg2644z00_2533 =
																						(int) (((long) 16));
																					{	/* Dataflow/walk.scm 184 */
																						long BgL_auxz00_4896;

																						BgL_auxz00_4896 =
																							(long) (BgL_arg2644z00_2533);
																						BgL_restz00_2532 =
																							(BgL_offsetz00_2529 %
																							BgL_auxz00_4896);
																				}}
																				{	/* Dataflow/walk.scm 184 */

																					BgL_method3528z00_2522 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2527,
																							(int) (BgL_modz00_2530)),
																						(int) (BgL_restz00_2532));
													}}}}}}}}
													BgL_res4012z00_2547 =
														PROCEDURE_ENTRY(BgL_method3528z00_2522)
														(BgL_method3528z00_2522, (obj_t) (BgL_nodez00_2520),
														BgL_envz00_2521, BEOA);
											}} BgL_res4012z00_2547;
								}}}
								{
									obj_t BgL_l3509z00_4906;

									BgL_l3509z00_4906 = CDR(BgL_l3509z00_1478);
									BgL_l3509z00_1478 = BgL_l3509z00_4906;
									goto BgL_zc3anonymousza33762ze3z83_1479;
								}
							}
						else
							{	/* Dataflow/walk.scm 183 */
								((bool_t) 1);
							}
					}
				}
				{	/* Dataflow/walk.scm 186 */
					BgL_nodez00_bglt BgL_arg3767z00_1486;

					BgL_arg3767z00_1486 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1471))->BgL_bodyz00);
					{	/* Dataflow/walk.scm 186 */
						obj_t BgL_res4015z00_2577;

						{	/* Dataflow/walk.scm 186 */
							obj_t BgL_envz00_2551;

							BgL_envz00_2551 = BgL_envz00_1472;
							{	/* Dataflow/walk.scm 186 */
								obj_t BgL_method3528z00_2552;

								{	/* Dataflow/walk.scm 186 */
									BgL_objectz00_bglt BgL_objz00_2553;

									BgL_objz00_2553 = (BgL_objectz00_bglt) (BgL_arg3767z00_1486);
									{	/* Dataflow/walk.scm 186 */
										long BgL_objzd2classzd2numz00_2554;

										BgL_objzd2classzd2numz00_2554 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2553);
										{	/* Dataflow/walk.scm 186 */
											obj_t BgL_arg2643z00_2555;

											BgL_arg2643z00_2555 =
												PROCEDURE_REF
												(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
												(int) (((long) 1)));
											{	/* Dataflow/walk.scm 186 */
												obj_t BgL_arrayz00_2557;

												int BgL_offsetz00_2558;

												BgL_arrayz00_2557 = BgL_arg2643z00_2555;
												BgL_offsetz00_2558 =
													(int) (BgL_objzd2classzd2numz00_2554);
												{	/* Dataflow/walk.scm 186 */
													long BgL_offsetz00_2559;

													BgL_offsetz00_2559 =
														((long) (BgL_offsetz00_2558) - OBJECT_TYPE);
													{	/* Dataflow/walk.scm 186 */
														long BgL_modz00_2560;

														{	/* Dataflow/walk.scm 186 */
															int BgL_arg2645z00_2561;

															BgL_arg2645z00_2561 = (int) (((long) 16));
															{	/* Dataflow/walk.scm 186 */
																long BgL_auxz00_4917;

																BgL_auxz00_4917 = (long) (BgL_arg2645z00_2561);
																BgL_modz00_2560 =
																	(BgL_offsetz00_2559 / BgL_auxz00_4917);
														}}
														{	/* Dataflow/walk.scm 186 */
															long BgL_restz00_2562;

															{	/* Dataflow/walk.scm 186 */
																int BgL_arg2644z00_2563;

																BgL_arg2644z00_2563 = (int) (((long) 16));
																{	/* Dataflow/walk.scm 186 */
																	long BgL_auxz00_4921;

																	BgL_auxz00_4921 =
																		(long) (BgL_arg2644z00_2563);
																	BgL_restz00_2562 =
																		(BgL_offsetz00_2559 % BgL_auxz00_4921);
															}}
															{	/* Dataflow/walk.scm 186 */

																BgL_method3528z00_2552 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2557,
																		(int) (BgL_modz00_2560)),
																	(int) (BgL_restz00_2562));
								}}}}}}}}
								BgL_res4015z00_2577 =
									PROCEDURE_ENTRY(BgL_method3528z00_2552)
									(BgL_method3528z00_2552, (obj_t) (BgL_arg3767z00_1486),
									BgL_envz00_2551, BEOA);
						}}
						return BgL_res4015z00_2577;
					}
				}
			}
		}
	}



/* dataflow-node!-selec3548 */
	obj_t BGl_dataflowzd2nodez12zd2selec3548z12zzdataflow_walkz00(obj_t
		BgL_envz00_3564, obj_t BgL_nodez00_3565, obj_t BgL_envz00_3566)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 170 */
			{
				BgL_selectz00_bglt BgL_nodez00_1454;

				obj_t BgL_envz00_1455;

				BgL_nodez00_1454 = (BgL_selectz00_bglt) (BgL_nodez00_3565);
				BgL_envz00_1455 = BgL_envz00_3566;
				{	/* Dataflow/walk.scm 172 */
					BgL_nodez00_bglt BgL_arg3756z00_1459;

					BgL_arg3756z00_1459 =
						(((BgL_selectz00_bglt) CREF(BgL_nodez00_1454))->BgL_testz00);
					{	/* Dataflow/walk.scm 172 */
						obj_t BgL_res4006z00_2481;

						{	/* Dataflow/walk.scm 172 */
							obj_t BgL_envz00_2455;

							BgL_envz00_2455 = BgL_envz00_1455;
							{	/* Dataflow/walk.scm 172 */
								obj_t BgL_method3528z00_2456;

								{	/* Dataflow/walk.scm 172 */
									BgL_objectz00_bglt BgL_objz00_2457;

									BgL_objz00_2457 = (BgL_objectz00_bglt) (BgL_arg3756z00_1459);
									{	/* Dataflow/walk.scm 172 */
										long BgL_objzd2classzd2numz00_2458;

										BgL_objzd2classzd2numz00_2458 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2457);
										{	/* Dataflow/walk.scm 172 */
											obj_t BgL_arg2643z00_2459;

											BgL_arg2643z00_2459 =
												PROCEDURE_REF
												(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
												(int) (((long) 1)));
											{	/* Dataflow/walk.scm 172 */
												obj_t BgL_arrayz00_2461;

												int BgL_offsetz00_2462;

												BgL_arrayz00_2461 = BgL_arg2643z00_2459;
												BgL_offsetz00_2462 =
													(int) (BgL_objzd2classzd2numz00_2458);
												{	/* Dataflow/walk.scm 172 */
													long BgL_offsetz00_2463;

													BgL_offsetz00_2463 =
														((long) (BgL_offsetz00_2462) - OBJECT_TYPE);
													{	/* Dataflow/walk.scm 172 */
														long BgL_modz00_2464;

														{	/* Dataflow/walk.scm 172 */
															int BgL_arg2645z00_2465;

															BgL_arg2645z00_2465 = (int) (((long) 16));
															{	/* Dataflow/walk.scm 172 */
																long BgL_auxz00_4941;

																BgL_auxz00_4941 = (long) (BgL_arg2645z00_2465);
																BgL_modz00_2464 =
																	(BgL_offsetz00_2463 / BgL_auxz00_4941);
														}}
														{	/* Dataflow/walk.scm 172 */
															long BgL_restz00_2466;

															{	/* Dataflow/walk.scm 172 */
																int BgL_arg2644z00_2467;

																BgL_arg2644z00_2467 = (int) (((long) 16));
																{	/* Dataflow/walk.scm 172 */
																	long BgL_auxz00_4945;

																	BgL_auxz00_4945 =
																		(long) (BgL_arg2644z00_2467);
																	BgL_restz00_2466 =
																		(BgL_offsetz00_2463 % BgL_auxz00_4945);
															}}
															{	/* Dataflow/walk.scm 172 */

																BgL_method3528z00_2456 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2461,
																		(int) (BgL_modz00_2464)),
																	(int) (BgL_restz00_2466));
								}}}}}}}}
								BgL_res4006z00_2481 =
									PROCEDURE_ENTRY(BgL_method3528z00_2456)
									(BgL_method3528z00_2456, (obj_t) (BgL_arg3756z00_1459),
									BgL_envz00_2455, BEOA);
						}} BgL_res4006z00_2481;
				}}
				{	/* Dataflow/walk.scm 173 */
					obj_t BgL_g3508z00_1460;

					BgL_g3508z00_1460 =
						(((BgL_selectz00_bglt) CREF(BgL_nodez00_1454))->BgL_clausesz00);
					{
						obj_t BgL_l3506z00_1462;

						BgL_l3506z00_1462 = BgL_g3508z00_1460;
					BgL_zc3anonymousza33757ze3z83_1463:
						if (PAIRP(BgL_l3506z00_1462))
							{	/* Dataflow/walk.scm 173 */
								{	/* Dataflow/walk.scm 174 */
									obj_t BgL_clausez00_1465;

									BgL_clausez00_1465 = CAR(BgL_l3506z00_1462);
									{	/* Dataflow/walk.scm 174 */
										obj_t BgL_arg3759z00_1466;

										BgL_arg3759z00_1466 = CDR(BgL_clausez00_1465);
										{	/* Dataflow/walk.scm 174 */
											obj_t BgL_res4009z00_2513;

											{	/* Dataflow/walk.scm 174 */
												BgL_nodez00_bglt BgL_nodez00_2486;

												obj_t BgL_envz00_2487;

												BgL_nodez00_2486 =
													(BgL_nodez00_bglt) (BgL_arg3759z00_1466);
												BgL_envz00_2487 = BgL_envz00_1455;
												{	/* Dataflow/walk.scm 174 */
													obj_t BgL_method3528z00_2488;

													{	/* Dataflow/walk.scm 174 */
														BgL_objectz00_bglt BgL_objz00_2489;

														BgL_objz00_2489 =
															(BgL_objectz00_bglt) (BgL_nodez00_2486);
														{	/* Dataflow/walk.scm 174 */
															long BgL_objzd2classzd2numz00_2490;

															BgL_objzd2classzd2numz00_2490 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2489);
															{	/* Dataflow/walk.scm 174 */
																obj_t BgL_arg2643z00_2491;

																BgL_arg2643z00_2491 =
																	PROCEDURE_REF
																	(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
																	(int) (((long) 1)));
																{	/* Dataflow/walk.scm 174 */
																	obj_t BgL_arrayz00_2493;

																	int BgL_offsetz00_2494;

																	BgL_arrayz00_2493 = BgL_arg2643z00_2491;
																	BgL_offsetz00_2494 =
																		(int) (BgL_objzd2classzd2numz00_2490);
																	{	/* Dataflow/walk.scm 174 */
																		long BgL_offsetz00_2495;

																		BgL_offsetz00_2495 =
																			(
																			(long) (BgL_offsetz00_2494) -
																			OBJECT_TYPE);
																		{	/* Dataflow/walk.scm 174 */
																			long BgL_modz00_2496;

																			{	/* Dataflow/walk.scm 174 */
																				int BgL_arg2645z00_2497;

																				BgL_arg2645z00_2497 =
																					(int) (((long) 16));
																				{	/* Dataflow/walk.scm 174 */
																					long BgL_auxz00_4969;

																					BgL_auxz00_4969 =
																						(long) (BgL_arg2645z00_2497);
																					BgL_modz00_2496 =
																						(BgL_offsetz00_2495 /
																						BgL_auxz00_4969);
																			}}
																			{	/* Dataflow/walk.scm 174 */
																				long BgL_restz00_2498;

																				{	/* Dataflow/walk.scm 174 */
																					int BgL_arg2644z00_2499;

																					BgL_arg2644z00_2499 =
																						(int) (((long) 16));
																					{	/* Dataflow/walk.scm 174 */
																						long BgL_auxz00_4973;

																						BgL_auxz00_4973 =
																							(long) (BgL_arg2644z00_2499);
																						BgL_restz00_2498 =
																							(BgL_offsetz00_2495 %
																							BgL_auxz00_4973);
																				}}
																				{	/* Dataflow/walk.scm 174 */

																					BgL_method3528z00_2488 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2493,
																							(int) (BgL_modz00_2496)),
																						(int) (BgL_restz00_2498));
													}}}}}}}}
													BgL_res4009z00_2513 =
														PROCEDURE_ENTRY(BgL_method3528z00_2488)
														(BgL_method3528z00_2488, (obj_t) (BgL_nodez00_2486),
														BgL_envz00_2487, BEOA);
											}} BgL_res4009z00_2513;
								}}}
								{
									obj_t BgL_l3506z00_4983;

									BgL_l3506z00_4983 = CDR(BgL_l3506z00_1462);
									BgL_l3506z00_1462 = BgL_l3506z00_4983;
									goto BgL_zc3anonymousza33757ze3z83_1463;
								}
							}
						else
							{	/* Dataflow/walk.scm 173 */
								((bool_t) 1);
							}
					}
				}
				return BgL_envz00_1455;
			}
		}
	}



/* dataflow-node!-fail3546 */
	obj_t BGl_dataflowzd2nodez12zd2fail3546z12zzdataflow_walkz00(obj_t
		BgL_envz00_3567, obj_t BgL_nodez00_3568, obj_t BgL_envz00_3569)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 160 */
			{
				BgL_failz00_bglt BgL_nodez00_1444;

				obj_t BgL_envz00_1445;

				BgL_nodez00_1444 = (BgL_failz00_bglt) (BgL_nodez00_3568);
				BgL_envz00_1445 = BgL_envz00_3569;
				{	/* Dataflow/walk.scm 162 */
					BgL_nodez00_bglt BgL_arg3752z00_1449;

					BgL_arg3752z00_1449 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1444))->BgL_procz00);
					{	/* Dataflow/walk.scm 162 */
						obj_t BgL_res3997z00_2394;

						{	/* Dataflow/walk.scm 162 */
							obj_t BgL_envz00_2368;

							BgL_envz00_2368 = BgL_envz00_1445;
							{	/* Dataflow/walk.scm 162 */
								obj_t BgL_method3528z00_2369;

								{	/* Dataflow/walk.scm 162 */
									BgL_objectz00_bglt BgL_objz00_2370;

									BgL_objz00_2370 = (BgL_objectz00_bglt) (BgL_arg3752z00_1449);
									{	/* Dataflow/walk.scm 162 */
										long BgL_objzd2classzd2numz00_2371;

										BgL_objzd2classzd2numz00_2371 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2370);
										{	/* Dataflow/walk.scm 162 */
											obj_t BgL_arg2643z00_2372;

											BgL_arg2643z00_2372 =
												PROCEDURE_REF
												(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
												(int) (((long) 1)));
											{	/* Dataflow/walk.scm 162 */
												obj_t BgL_arrayz00_2374;

												int BgL_offsetz00_2375;

												BgL_arrayz00_2374 = BgL_arg2643z00_2372;
												BgL_offsetz00_2375 =
													(int) (BgL_objzd2classzd2numz00_2371);
												{	/* Dataflow/walk.scm 162 */
													long BgL_offsetz00_2376;

													BgL_offsetz00_2376 =
														((long) (BgL_offsetz00_2375) - OBJECT_TYPE);
													{	/* Dataflow/walk.scm 162 */
														long BgL_modz00_2377;

														{	/* Dataflow/walk.scm 162 */
															int BgL_arg2645z00_2378;

															BgL_arg2645z00_2378 = (int) (((long) 16));
															{	/* Dataflow/walk.scm 162 */
																long BgL_auxz00_4995;

																BgL_auxz00_4995 = (long) (BgL_arg2645z00_2378);
																BgL_modz00_2377 =
																	(BgL_offsetz00_2376 / BgL_auxz00_4995);
														}}
														{	/* Dataflow/walk.scm 162 */
															long BgL_restz00_2379;

															{	/* Dataflow/walk.scm 162 */
																int BgL_arg2644z00_2380;

																BgL_arg2644z00_2380 = (int) (((long) 16));
																{	/* Dataflow/walk.scm 162 */
																	long BgL_auxz00_4999;

																	BgL_auxz00_4999 =
																		(long) (BgL_arg2644z00_2380);
																	BgL_restz00_2379 =
																		(BgL_offsetz00_2376 % BgL_auxz00_4999);
															}}
															{	/* Dataflow/walk.scm 162 */

																BgL_method3528z00_2369 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2374,
																		(int) (BgL_modz00_2377)),
																	(int) (BgL_restz00_2379));
								}}}}}}}}
								BgL_res3997z00_2394 =
									PROCEDURE_ENTRY(BgL_method3528z00_2369)
									(BgL_method3528z00_2369, (obj_t) (BgL_arg3752z00_1449),
									BgL_envz00_2368, BEOA);
						}} BgL_res3997z00_2394;
				}}
				{	/* Dataflow/walk.scm 163 */
					BgL_nodez00_bglt BgL_arg3753z00_1450;

					BgL_arg3753z00_1450 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1444))->BgL_msgz00);
					{	/* Dataflow/walk.scm 163 */
						obj_t BgL_res4000z00_2423;

						{	/* Dataflow/walk.scm 163 */
							obj_t BgL_envz00_2397;

							BgL_envz00_2397 = BgL_envz00_1445;
							{	/* Dataflow/walk.scm 163 */
								obj_t BgL_method3528z00_2398;

								{	/* Dataflow/walk.scm 163 */
									BgL_objectz00_bglt BgL_objz00_2399;

									BgL_objz00_2399 = (BgL_objectz00_bglt) (BgL_arg3753z00_1450);
									{	/* Dataflow/walk.scm 163 */
										long BgL_objzd2classzd2numz00_2400;

										BgL_objzd2classzd2numz00_2400 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2399);
										{	/* Dataflow/walk.scm 163 */
											obj_t BgL_arg2643z00_2401;

											BgL_arg2643z00_2401 =
												PROCEDURE_REF
												(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
												(int) (((long) 1)));
											{	/* Dataflow/walk.scm 163 */
												obj_t BgL_arrayz00_2403;

												int BgL_offsetz00_2404;

												BgL_arrayz00_2403 = BgL_arg2643z00_2401;
												BgL_offsetz00_2404 =
													(int) (BgL_objzd2classzd2numz00_2400);
												{	/* Dataflow/walk.scm 163 */
													long BgL_offsetz00_2405;

													BgL_offsetz00_2405 =
														((long) (BgL_offsetz00_2404) - OBJECT_TYPE);
													{	/* Dataflow/walk.scm 163 */
														long BgL_modz00_2406;

														{	/* Dataflow/walk.scm 163 */
															int BgL_arg2645z00_2407;

															BgL_arg2645z00_2407 = (int) (((long) 16));
															{	/* Dataflow/walk.scm 163 */
																long BgL_auxz00_5018;

																BgL_auxz00_5018 = (long) (BgL_arg2645z00_2407);
																BgL_modz00_2406 =
																	(BgL_offsetz00_2405 / BgL_auxz00_5018);
														}}
														{	/* Dataflow/walk.scm 163 */
															long BgL_restz00_2408;

															{	/* Dataflow/walk.scm 163 */
																int BgL_arg2644z00_2409;

																BgL_arg2644z00_2409 = (int) (((long) 16));
																{	/* Dataflow/walk.scm 163 */
																	long BgL_auxz00_5022;

																	BgL_auxz00_5022 =
																		(long) (BgL_arg2644z00_2409);
																	BgL_restz00_2408 =
																		(BgL_offsetz00_2405 % BgL_auxz00_5022);
															}}
															{	/* Dataflow/walk.scm 163 */

																BgL_method3528z00_2398 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2403,
																		(int) (BgL_modz00_2406)),
																	(int) (BgL_restz00_2408));
								}}}}}}}}
								BgL_res4000z00_2423 =
									PROCEDURE_ENTRY(BgL_method3528z00_2398)
									(BgL_method3528z00_2398, (obj_t) (BgL_arg3753z00_1450),
									BgL_envz00_2397, BEOA);
						}} BgL_res4000z00_2423;
				}}
				{	/* Dataflow/walk.scm 164 */
					BgL_nodez00_bglt BgL_arg3754z00_1451;

					BgL_arg3754z00_1451 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1444))->BgL_objz00);
					{	/* Dataflow/walk.scm 164 */
						obj_t BgL_res4003z00_2452;

						{	/* Dataflow/walk.scm 164 */
							obj_t BgL_envz00_2426;

							BgL_envz00_2426 = BgL_envz00_1445;
							{	/* Dataflow/walk.scm 164 */
								obj_t BgL_method3528z00_2427;

								{	/* Dataflow/walk.scm 164 */
									BgL_objectz00_bglt BgL_objz00_2428;

									BgL_objz00_2428 = (BgL_objectz00_bglt) (BgL_arg3754z00_1451);
									{	/* Dataflow/walk.scm 164 */
										long BgL_objzd2classzd2numz00_2429;

										BgL_objzd2classzd2numz00_2429 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2428);
										{	/* Dataflow/walk.scm 164 */
											obj_t BgL_arg2643z00_2430;

											BgL_arg2643z00_2430 =
												PROCEDURE_REF
												(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
												(int) (((long) 1)));
											{	/* Dataflow/walk.scm 164 */
												obj_t BgL_arrayz00_2432;

												int BgL_offsetz00_2433;

												BgL_arrayz00_2432 = BgL_arg2643z00_2430;
												BgL_offsetz00_2433 =
													(int) (BgL_objzd2classzd2numz00_2429);
												{	/* Dataflow/walk.scm 164 */
													long BgL_offsetz00_2434;

													BgL_offsetz00_2434 =
														((long) (BgL_offsetz00_2433) - OBJECT_TYPE);
													{	/* Dataflow/walk.scm 164 */
														long BgL_modz00_2435;

														{	/* Dataflow/walk.scm 164 */
															int BgL_arg2645z00_2436;

															BgL_arg2645z00_2436 = (int) (((long) 16));
															{	/* Dataflow/walk.scm 164 */
																long BgL_auxz00_5041;

																BgL_auxz00_5041 = (long) (BgL_arg2645z00_2436);
																BgL_modz00_2435 =
																	(BgL_offsetz00_2434 / BgL_auxz00_5041);
														}}
														{	/* Dataflow/walk.scm 164 */
															long BgL_restz00_2437;

															{	/* Dataflow/walk.scm 164 */
																int BgL_arg2644z00_2438;

																BgL_arg2644z00_2438 = (int) (((long) 16));
																{	/* Dataflow/walk.scm 164 */
																	long BgL_auxz00_5045;

																	BgL_auxz00_5045 =
																		(long) (BgL_arg2644z00_2438);
																	BgL_restz00_2437 =
																		(BgL_offsetz00_2434 % BgL_auxz00_5045);
															}}
															{	/* Dataflow/walk.scm 164 */

																BgL_method3528z00_2427 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2432,
																		(int) (BgL_modz00_2435)),
																	(int) (BgL_restz00_2437));
								}}}}}}}}
								BgL_res4003z00_2452 =
									PROCEDURE_ENTRY(BgL_method3528z00_2427)
									(BgL_method3528z00_2427, (obj_t) (BgL_arg3754z00_1451),
									BgL_envz00_2426, BEOA);
						}} BgL_res4003z00_2452;
				}}
				return BgL_envz00_1445;
			}
		}
	}



/* dataflow-node!-condi3544 */
	obj_t BGl_dataflowzd2nodez12zd2condi3544z12zzdataflow_walkz00(obj_t
		BgL_envz00_3570, obj_t BgL_nodez00_3571, obj_t BgL_envz00_3572)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 147 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1428;

				obj_t BgL_envz00_1429;

				BgL_nodez00_1428 = (BgL_conditionalz00_bglt) (BgL_nodez00_3571);
				BgL_envz00_1429 = BgL_envz00_3572;
				{	/* Dataflow/walk.scm 149 */
					obj_t BgL_tenvz00_1433;

					{	/* Dataflow/walk.scm 149 */
						BgL_nodez00_bglt BgL_arg3750z00_1441;

						BgL_arg3750z00_1441 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1428))->BgL_testz00);
						{	/* Dataflow/walk.scm 149 */
							obj_t BgL_res3983z00_2252;

							{	/* Dataflow/walk.scm 149 */
								obj_t BgL_envz00_2226;

								BgL_envz00_2226 = BgL_envz00_1429;
								{	/* Dataflow/walk.scm 149 */
									obj_t BgL_method3528z00_2227;

									{	/* Dataflow/walk.scm 149 */
										BgL_objectz00_bglt BgL_objz00_2228;

										BgL_objz00_2228 =
											(BgL_objectz00_bglt) (BgL_arg3750z00_1441);
										{	/* Dataflow/walk.scm 149 */
											long BgL_objzd2classzd2numz00_2229;

											BgL_objzd2classzd2numz00_2229 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2228);
											{	/* Dataflow/walk.scm 149 */
												obj_t BgL_arg2643z00_2230;

												BgL_arg2643z00_2230 =
													PROCEDURE_REF
													(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
													(int) (((long) 1)));
												{	/* Dataflow/walk.scm 149 */
													obj_t BgL_arrayz00_2232;

													int BgL_offsetz00_2233;

													BgL_arrayz00_2232 = BgL_arg2643z00_2230;
													BgL_offsetz00_2233 =
														(int) (BgL_objzd2classzd2numz00_2229);
													{	/* Dataflow/walk.scm 149 */
														long BgL_offsetz00_2234;

														BgL_offsetz00_2234 =
															((long) (BgL_offsetz00_2233) - OBJECT_TYPE);
														{	/* Dataflow/walk.scm 149 */
															long BgL_modz00_2235;

															{	/* Dataflow/walk.scm 149 */
																int BgL_arg2645z00_2236;

																BgL_arg2645z00_2236 = (int) (((long) 16));
																{	/* Dataflow/walk.scm 149 */
																	long BgL_auxz00_5065;

																	BgL_auxz00_5065 =
																		(long) (BgL_arg2645z00_2236);
																	BgL_modz00_2235 =
																		(BgL_offsetz00_2234 / BgL_auxz00_5065);
															}}
															{	/* Dataflow/walk.scm 149 */
																long BgL_restz00_2237;

																{	/* Dataflow/walk.scm 149 */
																	int BgL_arg2644z00_2238;

																	BgL_arg2644z00_2238 = (int) (((long) 16));
																	{	/* Dataflow/walk.scm 149 */
																		long BgL_auxz00_5069;

																		BgL_auxz00_5069 =
																			(long) (BgL_arg2644z00_2238);
																		BgL_restz00_2237 =
																			(BgL_offsetz00_2234 % BgL_auxz00_5069);
																}}
																{	/* Dataflow/walk.scm 149 */

																	BgL_method3528z00_2227 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2232,
																			(int) (BgL_modz00_2235)),
																		(int) (BgL_restz00_2237));
									}}}}}}}}
									BgL_res3983z00_2252 =
										PROCEDURE_ENTRY(BgL_method3528z00_2227)
										(BgL_method3528z00_2227, (obj_t) (BgL_arg3750z00_1441),
										BgL_envz00_2226, BEOA);
							}}
							BgL_tenvz00_1433 = BgL_res3983z00_2252;
					}}
					{	/* Dataflow/walk.scm 149 */
						obj_t BgL_truezd2envzd2_1434;

						{	/* Dataflow/walk.scm 150 */
							obj_t BgL_arg3748z00_1439;

							{	/* Dataflow/walk.scm 150 */
								BgL_nodez00_bglt BgL_arg3749z00_1440;

								BgL_arg3749z00_1440 =
									(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1428))->
									BgL_testz00);
								{	/* Dataflow/walk.scm 150 */
									obj_t BgL_res3986z00_2280;

									{	/* Dataflow/walk.scm 150 */
										obj_t BgL_method3565z00_2255;

										{	/* Dataflow/walk.scm 150 */
											BgL_objectz00_bglt BgL_objz00_2256;

											BgL_objz00_2256 =
												(BgL_objectz00_bglt) (BgL_arg3749z00_1440);
											{	/* Dataflow/walk.scm 150 */
												long BgL_objzd2classzd2numz00_2257;

												BgL_objzd2classzd2numz00_2257 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2256);
												{	/* Dataflow/walk.scm 150 */
													obj_t BgL_arg2643z00_2258;

													BgL_arg2643z00_2258 =
														PROCEDURE_REF
														(BGl_dataflowzd2testzd2envzd2envzd2zzdataflow_walkz00,
														(int) (((long) 1)));
													{	/* Dataflow/walk.scm 150 */
														obj_t BgL_arrayz00_2260;

														int BgL_offsetz00_2261;

														BgL_arrayz00_2260 = BgL_arg2643z00_2258;
														BgL_offsetz00_2261 =
															(int) (BgL_objzd2classzd2numz00_2257);
														{	/* Dataflow/walk.scm 150 */
															long BgL_offsetz00_2262;

															BgL_offsetz00_2262 =
																((long) (BgL_offsetz00_2261) - OBJECT_TYPE);
															{	/* Dataflow/walk.scm 150 */
																long BgL_modz00_2263;

																{	/* Dataflow/walk.scm 150 */
																	int BgL_arg2645z00_2264;

																	BgL_arg2645z00_2264 = (int) (((long) 16));
																	{	/* Dataflow/walk.scm 150 */
																		long BgL_auxz00_5088;

																		BgL_auxz00_5088 =
																			(long) (BgL_arg2645z00_2264);
																		BgL_modz00_2263 =
																			(BgL_offsetz00_2262 / BgL_auxz00_5088);
																}}
																{	/* Dataflow/walk.scm 150 */
																	long BgL_restz00_2265;

																	{	/* Dataflow/walk.scm 150 */
																		int BgL_arg2644z00_2266;

																		BgL_arg2644z00_2266 = (int) (((long) 16));
																		{	/* Dataflow/walk.scm 150 */
																			long BgL_auxz00_5092;

																			BgL_auxz00_5092 =
																				(long) (BgL_arg2644z00_2266);
																			BgL_restz00_2265 =
																				(BgL_offsetz00_2262 % BgL_auxz00_5092);
																	}}
																	{	/* Dataflow/walk.scm 150 */

																		BgL_method3565z00_2255 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2260,
																				(int) (BgL_modz00_2263)),
																			(int) (BgL_restz00_2265));
										}}}}}}}}
										BgL_res3986z00_2280 =
											PROCEDURE_ENTRY(BgL_method3565z00_2255)
											(BgL_method3565z00_2255, (obj_t) (BgL_arg3749z00_1440),
											BEOA);
									}
									BgL_arg3748z00_1439 = BgL_res3986z00_2280;
							}}
							BgL_truezd2envzd2_1434 =
								bgl_append2(BgL_arg3748z00_1439, BgL_tenvz00_1433);
						}
						{	/* Dataflow/walk.scm 150 */

							{	/* Dataflow/walk.scm 151 */
								BgL_nodez00_bglt BgL_arg3742z00_1435;

								BgL_arg3742z00_1435 =
									(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1428))->
									BgL_falsez00);
								{	/* Dataflow/walk.scm 151 */
									obj_t BgL_res3989z00_2309;

									{	/* Dataflow/walk.scm 151 */
										obj_t BgL_envz00_2283;

										BgL_envz00_2283 = BgL_envz00_1429;
										{	/* Dataflow/walk.scm 151 */
											obj_t BgL_method3528z00_2284;

											{	/* Dataflow/walk.scm 151 */
												BgL_objectz00_bglt BgL_objz00_2285;

												BgL_objz00_2285 =
													(BgL_objectz00_bglt) (BgL_arg3742z00_1435);
												{	/* Dataflow/walk.scm 151 */
													long BgL_objzd2classzd2numz00_2286;

													BgL_objzd2classzd2numz00_2286 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2285);
													{	/* Dataflow/walk.scm 151 */
														obj_t BgL_arg2643z00_2287;

														BgL_arg2643z00_2287 =
															PROCEDURE_REF
															(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
															(int) (((long) 1)));
														{	/* Dataflow/walk.scm 151 */
															obj_t BgL_arrayz00_2289;

															int BgL_offsetz00_2290;

															BgL_arrayz00_2289 = BgL_arg2643z00_2287;
															BgL_offsetz00_2290 =
																(int) (BgL_objzd2classzd2numz00_2286);
															{	/* Dataflow/walk.scm 151 */
																long BgL_offsetz00_2291;

																BgL_offsetz00_2291 =
																	((long) (BgL_offsetz00_2290) - OBJECT_TYPE);
																{	/* Dataflow/walk.scm 151 */
																	long BgL_modz00_2292;

																	{	/* Dataflow/walk.scm 151 */
																		int BgL_arg2645z00_2293;

																		BgL_arg2645z00_2293 = (int) (((long) 16));
																		{	/* Dataflow/walk.scm 151 */
																			long BgL_auxz00_5112;

																			BgL_auxz00_5112 =
																				(long) (BgL_arg2645z00_2293);
																			BgL_modz00_2292 =
																				(BgL_offsetz00_2291 / BgL_auxz00_5112);
																	}}
																	{	/* Dataflow/walk.scm 151 */
																		long BgL_restz00_2294;

																		{	/* Dataflow/walk.scm 151 */
																			int BgL_arg2644z00_2295;

																			BgL_arg2644z00_2295 = (int) (((long) 16));
																			{	/* Dataflow/walk.scm 151 */
																				long BgL_auxz00_5116;

																				BgL_auxz00_5116 =
																					(long) (BgL_arg2644z00_2295);
																				BgL_restz00_2294 =
																					(BgL_offsetz00_2291 %
																					BgL_auxz00_5116);
																		}}
																		{	/* Dataflow/walk.scm 151 */

																			BgL_method3528z00_2284 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2289,
																					(int) (BgL_modz00_2292)),
																				(int) (BgL_restz00_2294));
											}}}}}}}}
											BgL_res3989z00_2309 =
												PROCEDURE_ENTRY(BgL_method3528z00_2284)
												(BgL_method3528z00_2284, (obj_t) (BgL_arg3742z00_1435),
												BgL_envz00_2283, BEOA);
									}} BgL_res3989z00_2309;
							}}
							{	/* Dataflow/walk.scm 152 */
								BgL_nodez00_bglt BgL_arg3745z00_1436;

								BgL_arg3745z00_1436 =
									(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1428))->
									BgL_truez00);
								{	/* Dataflow/walk.scm 152 */
									obj_t BgL_res3992z00_2338;

									{	/* Dataflow/walk.scm 152 */
										obj_t BgL_envz00_2312;

										BgL_envz00_2312 = BgL_truezd2envzd2_1434;
										{	/* Dataflow/walk.scm 152 */
											obj_t BgL_method3528z00_2313;

											{	/* Dataflow/walk.scm 152 */
												BgL_objectz00_bglt BgL_objz00_2314;

												BgL_objz00_2314 =
													(BgL_objectz00_bglt) (BgL_arg3745z00_1436);
												{	/* Dataflow/walk.scm 152 */
													long BgL_objzd2classzd2numz00_2315;

													BgL_objzd2classzd2numz00_2315 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2314);
													{	/* Dataflow/walk.scm 152 */
														obj_t BgL_arg2643z00_2316;

														BgL_arg2643z00_2316 =
															PROCEDURE_REF
															(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
															(int) (((long) 1)));
														{	/* Dataflow/walk.scm 152 */
															obj_t BgL_arrayz00_2318;

															int BgL_offsetz00_2319;

															BgL_arrayz00_2318 = BgL_arg2643z00_2316;
															BgL_offsetz00_2319 =
																(int) (BgL_objzd2classzd2numz00_2315);
															{	/* Dataflow/walk.scm 152 */
																long BgL_offsetz00_2320;

																BgL_offsetz00_2320 =
																	((long) (BgL_offsetz00_2319) - OBJECT_TYPE);
																{	/* Dataflow/walk.scm 152 */
																	long BgL_modz00_2321;

																	{	/* Dataflow/walk.scm 152 */
																		int BgL_arg2645z00_2322;

																		BgL_arg2645z00_2322 = (int) (((long) 16));
																		{	/* Dataflow/walk.scm 152 */
																			long BgL_auxz00_5135;

																			BgL_auxz00_5135 =
																				(long) (BgL_arg2645z00_2322);
																			BgL_modz00_2321 =
																				(BgL_offsetz00_2320 / BgL_auxz00_5135);
																	}}
																	{	/* Dataflow/walk.scm 152 */
																		long BgL_restz00_2323;

																		{	/* Dataflow/walk.scm 152 */
																			int BgL_arg2644z00_2324;

																			BgL_arg2644z00_2324 = (int) (((long) 16));
																			{	/* Dataflow/walk.scm 152 */
																				long BgL_auxz00_5139;

																				BgL_auxz00_5139 =
																					(long) (BgL_arg2644z00_2324);
																				BgL_restz00_2323 =
																					(BgL_offsetz00_2320 %
																					BgL_auxz00_5139);
																		}}
																		{	/* Dataflow/walk.scm 152 */

																			BgL_method3528z00_2313 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2318,
																					(int) (BgL_modz00_2321)),
																				(int) (BgL_restz00_2323));
											}}}}}}}}
											BgL_res3992z00_2338 =
												PROCEDURE_ENTRY(BgL_method3528z00_2313)
												(BgL_method3528z00_2313, (obj_t) (BgL_arg3745z00_1436),
												BgL_envz00_2312, BEOA);
									}} BgL_res3992z00_2338;
							}}
							{	/* Dataflow/walk.scm 153 */
								bool_t BgL_testz00_5149;

								{	/* Dataflow/walk.scm 153 */
									BgL_nodez00_bglt BgL_arg3747z00_1438;

									BgL_arg3747z00_1438 =
										(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1428))->
										BgL_falsez00);
									{	/* Dataflow/walk.scm 153 */
										obj_t BgL_method3577z00_2341;

										{	/* Dataflow/walk.scm 153 */
											BgL_objectz00_bglt BgL_objz00_2342;

											BgL_objz00_2342 =
												(BgL_objectz00_bglt) (BgL_arg3747z00_1438);
											{	/* Dataflow/walk.scm 153 */
												long BgL_objzd2classzd2numz00_2343;

												BgL_objzd2classzd2numz00_2343 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2342);
												{	/* Dataflow/walk.scm 153 */
													obj_t BgL_arg2643z00_2344;

													BgL_arg2643z00_2344 =
														PROCEDURE_REF
														(BGl_abortzf3zd2envz21zzdataflow_walkz00,
														(int) (((long) 1)));
													{	/* Dataflow/walk.scm 153 */
														obj_t BgL_arrayz00_2346;

														int BgL_offsetz00_2347;

														BgL_arrayz00_2346 = BgL_arg2643z00_2344;
														BgL_offsetz00_2347 =
															(int) (BgL_objzd2classzd2numz00_2343);
														{	/* Dataflow/walk.scm 153 */
															long BgL_offsetz00_2348;

															BgL_offsetz00_2348 =
																((long) (BgL_offsetz00_2347) - OBJECT_TYPE);
															{	/* Dataflow/walk.scm 153 */
																long BgL_modz00_2349;

																{	/* Dataflow/walk.scm 153 */
																	int BgL_arg2645z00_2350;

																	BgL_arg2645z00_2350 = (int) (((long) 16));
																	{	/* Dataflow/walk.scm 153 */
																		long BgL_auxz00_5159;

																		BgL_auxz00_5159 =
																			(long) (BgL_arg2645z00_2350);
																		BgL_modz00_2349 =
																			(BgL_offsetz00_2348 / BgL_auxz00_5159);
																}}
																{	/* Dataflow/walk.scm 153 */
																	long BgL_restz00_2351;

																	{	/* Dataflow/walk.scm 153 */
																		int BgL_arg2644z00_2352;

																		BgL_arg2644z00_2352 = (int) (((long) 16));
																		{	/* Dataflow/walk.scm 153 */
																			long BgL_auxz00_5163;

																			BgL_auxz00_5163 =
																				(long) (BgL_arg2644z00_2352);
																			BgL_restz00_2351 =
																				(BgL_offsetz00_2348 % BgL_auxz00_5163);
																	}}
																	{	/* Dataflow/walk.scm 153 */

																		BgL_method3577z00_2341 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2346,
																				(int) (BgL_modz00_2349)),
																			(int) (BgL_restz00_2351));
										}}}}}}}}
										BgL_testz00_5149 =
											CBOOL(PROCEDURE_ENTRY(BgL_method3577z00_2341)
											(BgL_method3577z00_2341, (obj_t) (BgL_arg3747z00_1438),
												BEOA));
								}}
								if (BgL_testz00_5149)
									{	/* Dataflow/walk.scm 153 */
										return BgL_truezd2envzd2_1434;
									}
								else
									{	/* Dataflow/walk.scm 153 */
										return BgL_envz00_1429;
									}
							}
						}
					}
				}
			}
		}
	}



/* dataflow-node!-setq3542 */
	obj_t BGl_dataflowzd2nodez12zd2setq3542z12zzdataflow_walkz00(obj_t
		BgL_envz00_3573, obj_t BgL_nodez00_3574, obj_t BgL_envz00_3575)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 133 */
			{
				BgL_setqz00_bglt BgL_nodez00_1410;

				obj_t BgL_envz00_1411;

				BgL_nodez00_1410 = (BgL_setqz00_bglt) (BgL_nodez00_3574);
				BgL_envz00_1411 = BgL_envz00_3575;
				{	/* Dataflow/walk.scm 135 */
					obj_t BgL_nenvz00_1415;

					{	/* Dataflow/walk.scm 135 */
						BgL_nodez00_bglt BgL_arg3740z00_1425;

						BgL_arg3740z00_1425 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_1410))->BgL_valuez00);
						{	/* Dataflow/walk.scm 135 */
							obj_t BgL_res3980z00_2218;

							{	/* Dataflow/walk.scm 135 */
								obj_t BgL_envz00_2192;

								BgL_envz00_2192 = BgL_envz00_1411;
								{	/* Dataflow/walk.scm 135 */
									obj_t BgL_method3528z00_2193;

									{	/* Dataflow/walk.scm 135 */
										BgL_objectz00_bglt BgL_objz00_2194;

										BgL_objz00_2194 =
											(BgL_objectz00_bglt) (BgL_arg3740z00_1425);
										{	/* Dataflow/walk.scm 135 */
											long BgL_objzd2classzd2numz00_2195;

											BgL_objzd2classzd2numz00_2195 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2194);
											{	/* Dataflow/walk.scm 135 */
												obj_t BgL_arg2643z00_2196;

												BgL_arg2643z00_2196 =
													PROCEDURE_REF
													(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
													(int) (((long) 1)));
												{	/* Dataflow/walk.scm 135 */
													obj_t BgL_arrayz00_2198;

													int BgL_offsetz00_2199;

													BgL_arrayz00_2198 = BgL_arg2643z00_2196;
													BgL_offsetz00_2199 =
														(int) (BgL_objzd2classzd2numz00_2195);
													{	/* Dataflow/walk.scm 135 */
														long BgL_offsetz00_2200;

														BgL_offsetz00_2200 =
															((long) (BgL_offsetz00_2199) - OBJECT_TYPE);
														{	/* Dataflow/walk.scm 135 */
															long BgL_modz00_2201;

															{	/* Dataflow/walk.scm 135 */
																int BgL_arg2645z00_2202;

																BgL_arg2645z00_2202 = (int) (((long) 16));
																{	/* Dataflow/walk.scm 135 */
																	long BgL_auxz00_5184;

																	BgL_auxz00_5184 =
																		(long) (BgL_arg2645z00_2202);
																	BgL_modz00_2201 =
																		(BgL_offsetz00_2200 / BgL_auxz00_5184);
															}}
															{	/* Dataflow/walk.scm 135 */
																long BgL_restz00_2203;

																{	/* Dataflow/walk.scm 135 */
																	int BgL_arg2644z00_2204;

																	BgL_arg2644z00_2204 = (int) (((long) 16));
																	{	/* Dataflow/walk.scm 135 */
																		long BgL_auxz00_5188;

																		BgL_auxz00_5188 =
																			(long) (BgL_arg2644z00_2204);
																		BgL_restz00_2203 =
																			(BgL_offsetz00_2200 % BgL_auxz00_5188);
																}}
																{	/* Dataflow/walk.scm 135 */

																	BgL_method3528z00_2193 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2198,
																			(int) (BgL_modz00_2201)),
																		(int) (BgL_restz00_2203));
									}}}}}}}}
									BgL_res3980z00_2218 =
										PROCEDURE_ENTRY(BgL_method3528z00_2193)
										(BgL_method3528z00_2193, (obj_t) (BgL_arg3740z00_1425),
										BgL_envz00_2192, BEOA);
							}}
							BgL_nenvz00_1415 = BgL_res3980z00_2218;
					}}
					{	/* Dataflow/walk.scm 136 */
						BgL_varz00_bglt BgL_instance3454z00_1416;

						BgL_instance3454z00_1416 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_1410))->BgL_varz00);
						{	/* Dataflow/walk.scm 137 */
							bool_t BgL_testz00_5199;

							{	/* Dataflow/walk.scm 137 */
								BgL_variablez00_bglt BgL_arg3739z00_1424;

								BgL_arg3739z00_1424 =
									(((BgL_varz00_bglt) CREF(BgL_instance3454z00_1416))->
									BgL_variablez00);
								{	/* Dataflow/walk.scm 137 */
									obj_t BgL_obj1751z00_2221;

									BgL_obj1751z00_2221 = (obj_t) (BgL_arg3739z00_1424);
									BgL_testz00_5199 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_2221,
										BGl_globalz00zzast_varz00);
							}}
							if (BgL_testz00_5199)
								{	/* Dataflow/walk.scm 137 */
									return BgL_nenvz00_1415;
								}
							else
								{	/* Dataflow/walk.scm 139 */
									BgL_typez00_bglt BgL_typz00_1418;

									{	/* Dataflow/walk.scm 139 */
										BgL_nodez00_bglt BgL_arg3738z00_1423;

										BgL_arg3738z00_1423 =
											(((BgL_setqz00_bglt) CREF(BgL_nodez00_1410))->
											BgL_valuez00);
										BgL_typz00_1418 =
											BGl_getzd2typezd2zztype_typeofz00(BgL_arg3738z00_1423);
									}
									{	/* Dataflow/walk.scm 140 */
										bool_t BgL_testz00_5205;

										if (
											((obj_t) (BgL_typz00_1418) ==
												BGl_za2_za2z00zztype_cachez00))
											{	/* Dataflow/walk.scm 140 */
												BgL_testz00_5205 = ((bool_t) 1);
											}
										else
											{	/* Dataflow/walk.scm 140 */
												BgL_testz00_5205 =
													(
													(obj_t) (BgL_typz00_1418) ==
													BGl_za2objza2z00zztype_cachez00);
											}
										if (BgL_testz00_5205)
											{	/* Dataflow/walk.scm 140 */
												return BgL_nenvz00_1415;
											}
										else
											{	/* Dataflow/walk.scm 142 */
												obj_t BgL_arg3735z00_1420;

												{	/* Dataflow/walk.scm 142 */
													BgL_variablez00_bglt BgL_arg3736z00_1421;

													BgL_arg3736z00_1421 =
														(((BgL_varz00_bglt)
															CREF(BgL_instance3454z00_1416))->BgL_variablez00);
													BgL_arg3735z00_1420 =
														MAKE_PAIR((obj_t) (BgL_arg3736z00_1421),
														(obj_t) (BgL_typz00_1418));
												}
												return MAKE_PAIR(BgL_arg3735z00_1420, BgL_nenvz00_1415);
											}
									}
								}
						}
					}
				}
			}
		}
	}



/* dataflow-node!-exter3540 */
	obj_t BGl_dataflowzd2nodez12zd2exter3540z12zzdataflow_walkz00(obj_t
		BgL_envz00_3576, obj_t BgL_nodez00_3577, obj_t BgL_envz00_3578)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 126 */
			{
				BgL_externz00_bglt BgL_nodez00_1403;

				obj_t BgL_envz00_1404;

				BgL_nodez00_1403 = (BgL_externz00_bglt) (BgL_nodez00_3577);
				BgL_envz00_1404 = BgL_envz00_3578;
				{	/* Dataflow/walk.scm 127 */
					obj_t BgL_nodesz00_2188;

					BgL_nodesz00_2188 =
						(((BgL_externz00_bglt) CREF(BgL_nodez00_1403))->BgL_exprza2za2);
					return
						BGl_dataflowzd2nodeza2z12z62zzdataflow_walkz00(BgL_nodesz00_2188,
						BgL_envz00_1404);
				}
			}
		}
	}



/* dataflow-node!-funca3538 */
	obj_t BGl_dataflowzd2nodez12zd2funca3538z12zzdataflow_walkz00(obj_t
		BgL_envz00_3579, obj_t BgL_nodez00_3580, obj_t BgL_envz00_3581)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 118 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1394;

				obj_t BgL_envz00_1395;

				BgL_nodez00_1394 = (BgL_funcallz00_bglt) (BgL_nodez00_3580);
				BgL_envz00_1395 = BgL_envz00_3581;
				{	/* Dataflow/walk.scm 119 */
					BgL_nodez00_bglt BgL_arg3729z00_2156;

					BgL_arg3729z00_2156 =
						(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1394))->BgL_funz00);
					{	/* Dataflow/walk.scm 119 */
						obj_t BgL_res3977z00_2186;

						{	/* Dataflow/walk.scm 119 */
							obj_t BgL_envz00_2160;

							BgL_envz00_2160 = BgL_envz00_1395;
							{	/* Dataflow/walk.scm 119 */
								obj_t BgL_method3528z00_2161;

								{	/* Dataflow/walk.scm 119 */
									BgL_objectz00_bglt BgL_objz00_2162;

									BgL_objz00_2162 = (BgL_objectz00_bglt) (BgL_arg3729z00_2156);
									{	/* Dataflow/walk.scm 119 */
										long BgL_objzd2classzd2numz00_2163;

										BgL_objzd2classzd2numz00_2163 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2162);
										{	/* Dataflow/walk.scm 119 */
											obj_t BgL_arg2643z00_2164;

											BgL_arg2643z00_2164 =
												PROCEDURE_REF
												(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
												(int) (((long) 1)));
											{	/* Dataflow/walk.scm 119 */
												obj_t BgL_arrayz00_2166;

												int BgL_offsetz00_2167;

												BgL_arrayz00_2166 = BgL_arg2643z00_2164;
												BgL_offsetz00_2167 =
													(int) (BgL_objzd2classzd2numz00_2163);
												{	/* Dataflow/walk.scm 119 */
													long BgL_offsetz00_2168;

													BgL_offsetz00_2168 =
														((long) (BgL_offsetz00_2167) - OBJECT_TYPE);
													{	/* Dataflow/walk.scm 119 */
														long BgL_modz00_2169;

														{	/* Dataflow/walk.scm 119 */
															int BgL_arg2645z00_2170;

															BgL_arg2645z00_2170 = (int) (((long) 16));
															{	/* Dataflow/walk.scm 119 */
																long BgL_auxz00_5229;

																BgL_auxz00_5229 = (long) (BgL_arg2645z00_2170);
																BgL_modz00_2169 =
																	(BgL_offsetz00_2168 / BgL_auxz00_5229);
														}}
														{	/* Dataflow/walk.scm 119 */
															long BgL_restz00_2171;

															{	/* Dataflow/walk.scm 119 */
																int BgL_arg2644z00_2172;

																BgL_arg2644z00_2172 = (int) (((long) 16));
																{	/* Dataflow/walk.scm 119 */
																	long BgL_auxz00_5233;

																	BgL_auxz00_5233 =
																		(long) (BgL_arg2644z00_2172);
																	BgL_restz00_2171 =
																		(BgL_offsetz00_2168 % BgL_auxz00_5233);
															}}
															{	/* Dataflow/walk.scm 119 */

																BgL_method3528z00_2161 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2166,
																		(int) (BgL_modz00_2169)),
																	(int) (BgL_restz00_2171));
								}}}}}}}}
								BgL_res3977z00_2186 =
									PROCEDURE_ENTRY(BgL_method3528z00_2161)
									(BgL_method3528z00_2161, (obj_t) (BgL_arg3729z00_2156),
									BgL_envz00_2160, BEOA);
						}} BgL_res3977z00_2186;
				}}
				{	/* Dataflow/walk.scm 119 */
					obj_t BgL_arg3730z00_2157;

					BgL_arg3730z00_2157 =
						(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1394))->BgL_argsz00);
					return
						BGl_dataflowzd2nodeza2z12z62zzdataflow_walkz00(BgL_arg3730z00_2157,
						BgL_envz00_1395);
				}
			}
		}
	}



/* dataflow-node!-app-l3536 */
	obj_t BGl_dataflowzd2nodez12zd2appzd2l3536zc0zzdataflow_walkz00(obj_t
		BgL_envz00_3582, obj_t BgL_nodez00_3583, obj_t BgL_envz00_3584)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 110 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1385;

				obj_t BgL_envz00_1386;

				BgL_nodez00_1385 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_3583);
				BgL_envz00_1386 = BgL_envz00_3584;
				{	/* Dataflow/walk.scm 111 */
					BgL_nodez00_bglt BgL_arg3726z00_2095;

					BgL_arg3726z00_2095 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1385))->BgL_funz00);
					{	/* Dataflow/walk.scm 111 */
						obj_t BgL_res3971z00_2125;

						{	/* Dataflow/walk.scm 111 */
							obj_t BgL_envz00_2099;

							BgL_envz00_2099 = BgL_envz00_1386;
							{	/* Dataflow/walk.scm 111 */
								obj_t BgL_method3528z00_2100;

								{	/* Dataflow/walk.scm 111 */
									BgL_objectz00_bglt BgL_objz00_2101;

									BgL_objz00_2101 = (BgL_objectz00_bglt) (BgL_arg3726z00_2095);
									{	/* Dataflow/walk.scm 111 */
										long BgL_objzd2classzd2numz00_2102;

										BgL_objzd2classzd2numz00_2102 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2101);
										{	/* Dataflow/walk.scm 111 */
											obj_t BgL_arg2643z00_2103;

											BgL_arg2643z00_2103 =
												PROCEDURE_REF
												(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
												(int) (((long) 1)));
											{	/* Dataflow/walk.scm 111 */
												obj_t BgL_arrayz00_2105;

												int BgL_offsetz00_2106;

												BgL_arrayz00_2105 = BgL_arg2643z00_2103;
												BgL_offsetz00_2106 =
													(int) (BgL_objzd2classzd2numz00_2102);
												{	/* Dataflow/walk.scm 111 */
													long BgL_offsetz00_2107;

													BgL_offsetz00_2107 =
														((long) (BgL_offsetz00_2106) - OBJECT_TYPE);
													{	/* Dataflow/walk.scm 111 */
														long BgL_modz00_2108;

														{	/* Dataflow/walk.scm 111 */
															int BgL_arg2645z00_2109;

															BgL_arg2645z00_2109 = (int) (((long) 16));
															{	/* Dataflow/walk.scm 111 */
																long BgL_auxz00_5255;

																BgL_auxz00_5255 = (long) (BgL_arg2645z00_2109);
																BgL_modz00_2108 =
																	(BgL_offsetz00_2107 / BgL_auxz00_5255);
														}}
														{	/* Dataflow/walk.scm 111 */
															long BgL_restz00_2110;

															{	/* Dataflow/walk.scm 111 */
																int BgL_arg2644z00_2111;

																BgL_arg2644z00_2111 = (int) (((long) 16));
																{	/* Dataflow/walk.scm 111 */
																	long BgL_auxz00_5259;

																	BgL_auxz00_5259 =
																		(long) (BgL_arg2644z00_2111);
																	BgL_restz00_2110 =
																		(BgL_offsetz00_2107 % BgL_auxz00_5259);
															}}
															{	/* Dataflow/walk.scm 111 */

																BgL_method3528z00_2100 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2105,
																		(int) (BgL_modz00_2108)),
																	(int) (BgL_restz00_2110));
								}}}}}}}}
								BgL_res3971z00_2125 =
									PROCEDURE_ENTRY(BgL_method3528z00_2100)
									(BgL_method3528z00_2100, (obj_t) (BgL_arg3726z00_2095),
									BgL_envz00_2099, BEOA);
						}} BgL_res3971z00_2125;
				}}
				{	/* Dataflow/walk.scm 111 */
					BgL_nodez00_bglt BgL_arg3727z00_2096;

					BgL_arg3727z00_2096 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1385))->BgL_argz00);
					{	/* Dataflow/walk.scm 111 */
						obj_t BgL_res3974z00_2154;

						{	/* Dataflow/walk.scm 111 */
							obj_t BgL_envz00_2128;

							BgL_envz00_2128 = BgL_envz00_1386;
							{	/* Dataflow/walk.scm 111 */
								obj_t BgL_method3528z00_2129;

								{	/* Dataflow/walk.scm 111 */
									BgL_objectz00_bglt BgL_objz00_2130;

									BgL_objz00_2130 = (BgL_objectz00_bglt) (BgL_arg3727z00_2096);
									{	/* Dataflow/walk.scm 111 */
										long BgL_objzd2classzd2numz00_2131;

										BgL_objzd2classzd2numz00_2131 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2130);
										{	/* Dataflow/walk.scm 111 */
											obj_t BgL_arg2643z00_2132;

											BgL_arg2643z00_2132 =
												PROCEDURE_REF
												(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
												(int) (((long) 1)));
											{	/* Dataflow/walk.scm 111 */
												obj_t BgL_arrayz00_2134;

												int BgL_offsetz00_2135;

												BgL_arrayz00_2134 = BgL_arg2643z00_2132;
												BgL_offsetz00_2135 =
													(int) (BgL_objzd2classzd2numz00_2131);
												{	/* Dataflow/walk.scm 111 */
													long BgL_offsetz00_2136;

													BgL_offsetz00_2136 =
														((long) (BgL_offsetz00_2135) - OBJECT_TYPE);
													{	/* Dataflow/walk.scm 111 */
														long BgL_modz00_2137;

														{	/* Dataflow/walk.scm 111 */
															int BgL_arg2645z00_2138;

															BgL_arg2645z00_2138 = (int) (((long) 16));
															{	/* Dataflow/walk.scm 111 */
																long BgL_auxz00_5278;

																BgL_auxz00_5278 = (long) (BgL_arg2645z00_2138);
																BgL_modz00_2137 =
																	(BgL_offsetz00_2136 / BgL_auxz00_5278);
														}}
														{	/* Dataflow/walk.scm 111 */
															long BgL_restz00_2139;

															{	/* Dataflow/walk.scm 111 */
																int BgL_arg2644z00_2140;

																BgL_arg2644z00_2140 = (int) (((long) 16));
																{	/* Dataflow/walk.scm 111 */
																	long BgL_auxz00_5282;

																	BgL_auxz00_5282 =
																		(long) (BgL_arg2644z00_2140);
																	BgL_restz00_2139 =
																		(BgL_offsetz00_2136 % BgL_auxz00_5282);
															}}
															{	/* Dataflow/walk.scm 111 */

																BgL_method3528z00_2129 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2134,
																		(int) (BgL_modz00_2137)),
																	(int) (BgL_restz00_2139));
								}}}}}}}}
								BgL_res3974z00_2154 =
									PROCEDURE_ENTRY(BgL_method3528z00_2129)
									(BgL_method3528z00_2129, (obj_t) (BgL_arg3727z00_2096),
									BgL_envz00_2128, BEOA);
						}}
						return BgL_res3974z00_2154;
					}
				}
			}
		}
	}



/* dataflow-node!-app3534 */
	obj_t BGl_dataflowzd2nodez12zd2app3534z12zzdataflow_walkz00(obj_t
		BgL_envz00_3585, obj_t BgL_nodez00_3586, obj_t BgL_envz00_3587)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 94 */
			{
				BgL_appz00_bglt BgL_nodez00_1363;

				obj_t BgL_envz00_1364;

				BgL_nodez00_1363 = (BgL_appz00_bglt) (BgL_nodez00_3586);
				BgL_envz00_1364 = BgL_envz00_3587;
				{	/* Dataflow/walk.scm 96 */
					obj_t BgL_aenvz00_1368;

					{	/* Dataflow/walk.scm 96 */
						obj_t BgL_arg3724z00_1382;

						BgL_arg3724z00_1382 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1363))->BgL_argsz00);
						BgL_aenvz00_1368 =
							BGl_dataflowzd2nodeza2z12z62zzdataflow_walkz00
							(BgL_arg3724z00_1382, BgL_envz00_1364);
					}
					{	/* Dataflow/walk.scm 97 */
						bool_t BgL_testz00_5295;

						{	/* Dataflow/walk.scm 97 */
							bool_t BgL_testz00_5296;

							{	/* Dataflow/walk.scm 97 */
								BgL_varz00_bglt BgL_arg3723z00_1381;

								BgL_arg3723z00_1381 =
									(((BgL_appz00_bglt) CREF(BgL_nodez00_1363))->BgL_funz00);
								{	/* Dataflow/walk.scm 97 */
									obj_t BgL_obj2170z00_2087;

									BgL_obj2170z00_2087 = (obj_t) (BgL_arg3723z00_1381);
									BgL_testz00_5296 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj2170z00_2087,
										BGl_varz00zzast_nodez00);
								}
							}
							if (BgL_testz00_5296)
								{	/* Dataflow/walk.scm 97 */
									BgL_variablez00_bglt BgL_arg3721z00_1379;

									{	/* Dataflow/walk.scm 97 */
										BgL_varz00_bglt BgL_obj2155z00_2089;

										BgL_obj2155z00_2089 =
											(((BgL_appz00_bglt) CREF(BgL_nodez00_1363))->BgL_funz00);
										BgL_arg3721z00_1379 =
											(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2089))->
											BgL_variablez00);
									}
									{	/* Dataflow/walk.scm 97 */
										obj_t BgL_obj1812z00_2090;

										BgL_obj1812z00_2090 = (obj_t) (BgL_arg3721z00_1379);
										BgL_testz00_5295 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj1812z00_2090,
											BGl_localz00zzast_varz00);
									}
								}
							else
								{	/* Dataflow/walk.scm 97 */
									BgL_testz00_5295 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_5295)
							{	/* Dataflow/walk.scm 97 */
								return
									BGl_filterz00zz__r4_control_features_6_9z00
									(BGl_proc4131z00zzdataflow_walkz00, BgL_aenvz00_1368);
							}
						else
							{	/* Dataflow/walk.scm 97 */
								return BgL_aenvz00_1368;
							}
					}
				}
			}
		}
	}



/* <anonymous:3717> */
	obj_t BGl_zc3anonymousza33717ze3z83zzdataflow_walkz00(obj_t BgL_envz00_3588,
		obj_t BgL_bz00_3589)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 101 */
			{
				obj_t BgL_bz00_1371;

				{	/* Dataflow/walk.scm 102 */
					bool_t BgL_auxz00_5306;

					BgL_bz00_1371 = BgL_bz00_3589;
					{	/* Dataflow/walk.scm 102 */
						obj_t BgL_vz00_1373;

						BgL_vz00_1373 = CAR(BgL_bz00_1371);
						{	/* Dataflow/walk.scm 103 */
							bool_t BgL__ortest_3447z00_1374;

							BgL__ortest_3447z00_1374 =
								BGl_iszd2azf3z21zz__objectz00(BgL_vz00_1373,
								BGl_globalz00zzast_varz00);
							if (BgL__ortest_3447z00_1374)
								{	/* Dataflow/walk.scm 103 */
									BgL_auxz00_5306 = BgL__ortest_3447z00_1374;
								}
							else
								{	/* Dataflow/walk.scm 103 */
									obj_t BgL_auxz00_5310;

									{
										BgL_variablez00_bglt BgL_auxz00_5311;

										BgL_auxz00_5311 = (BgL_variablez00_bglt) (BgL_vz00_1373);
										BgL_auxz00_5310 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_5311))->
											BgL_accessz00);
									}
									BgL_auxz00_5306 =
										(BgL_auxz00_5310 == CNST_TABLE_REF(((long) 5)));
					}}}
					return BBOOL(BgL_auxz00_5306);
				}
			}
		}
	}



/* dataflow-node!-seque3532 */
	obj_t BGl_dataflowzd2nodez12zd2seque3532z12zzdataflow_walkz00(obj_t
		BgL_envz00_3590, obj_t BgL_nodez00_3591, obj_t BgL_envz00_3592)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 84 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1347;

				obj_t BgL_envz00_1348;

				BgL_nodez00_1347 = (BgL_sequencez00_bglt) (BgL_nodez00_3591);
				BgL_envz00_1348 = BgL_envz00_3592;
				{	/* Dataflow/walk.scm 85 */
					obj_t BgL_g3444z00_1351;

					BgL_g3444z00_1351 =
						(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1347))->BgL_nodesz00);
					{
						obj_t BgL_nodeza2za2_1353;

						obj_t BgL_envz00_1354;

						BgL_nodeza2za2_1353 = BgL_g3444z00_1351;
						BgL_envz00_1354 = BgL_envz00_1348;
					BgL_zc3anonymousza33709ze3z83_1355:
						if (NULLP(BgL_nodeza2za2_1353))
							{	/* Dataflow/walk.scm 87 */
								return BgL_envz00_1354;
							}
						else
							{	/* Dataflow/walk.scm 89 */
								obj_t BgL_arg3711z00_1357;

								obj_t BgL_arg3712z00_1358;

								BgL_arg3711z00_1357 = CDR(BgL_nodeza2za2_1353);
								{	/* Dataflow/walk.scm 89 */
									obj_t BgL_arg3713z00_1359;

									BgL_arg3713z00_1359 = CAR(BgL_nodeza2za2_1353);
									{	/* Dataflow/walk.scm 89 */
										obj_t BgL_res3968z00_2084;

										{	/* Dataflow/walk.scm 89 */
											BgL_nodez00_bglt BgL_nodez00_2057;

											obj_t BgL_envz00_2058;

											BgL_nodez00_2057 =
												(BgL_nodez00_bglt) (BgL_arg3713z00_1359);
											BgL_envz00_2058 = BgL_envz00_1354;
											{	/* Dataflow/walk.scm 89 */
												obj_t BgL_method3528z00_2059;

												{	/* Dataflow/walk.scm 89 */
													BgL_objectz00_bglt BgL_objz00_2060;

													BgL_objz00_2060 =
														(BgL_objectz00_bglt) (BgL_nodez00_2057);
													{	/* Dataflow/walk.scm 89 */
														long BgL_objzd2classzd2numz00_2061;

														BgL_objzd2classzd2numz00_2061 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2060);
														{	/* Dataflow/walk.scm 89 */
															obj_t BgL_arg2643z00_2062;

															BgL_arg2643z00_2062 =
																PROCEDURE_REF
																(BGl_dataflowzd2nodez12zd2envz12zzdataflow_walkz00,
																(int) (((long) 1)));
															{	/* Dataflow/walk.scm 89 */
																obj_t BgL_arrayz00_2064;

																int BgL_offsetz00_2065;

																BgL_arrayz00_2064 = BgL_arg2643z00_2062;
																BgL_offsetz00_2065 =
																	(int) (BgL_objzd2classzd2numz00_2061);
																{	/* Dataflow/walk.scm 89 */
																	long BgL_offsetz00_2066;

																	BgL_offsetz00_2066 =
																		((long) (BgL_offsetz00_2065) - OBJECT_TYPE);
																	{	/* Dataflow/walk.scm 89 */
																		long BgL_modz00_2067;

																		{	/* Dataflow/walk.scm 89 */
																			int BgL_arg2645z00_2068;

																			BgL_arg2645z00_2068 = (int) (((long) 16));
																			{	/* Dataflow/walk.scm 89 */
																				long BgL_auxz00_5331;

																				BgL_auxz00_5331 =
																					(long) (BgL_arg2645z00_2068);
																				BgL_modz00_2067 =
																					(BgL_offsetz00_2066 /
																					BgL_auxz00_5331);
																		}}
																		{	/* Dataflow/walk.scm 89 */
																			long BgL_restz00_2069;

																			{	/* Dataflow/walk.scm 89 */
																				int BgL_arg2644z00_2070;

																				BgL_arg2644z00_2070 =
																					(int) (((long) 16));
																				{	/* Dataflow/walk.scm 89 */
																					long BgL_auxz00_5335;

																					BgL_auxz00_5335 =
																						(long) (BgL_arg2644z00_2070);
																					BgL_restz00_2069 =
																						(BgL_offsetz00_2066 %
																						BgL_auxz00_5335);
																			}}
																			{	/* Dataflow/walk.scm 89 */

																				BgL_method3528z00_2059 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2064,
																						(int) (BgL_modz00_2067)),
																					(int) (BgL_restz00_2069));
												}}}}}}}}
												BgL_res3968z00_2084 =
													PROCEDURE_ENTRY(BgL_method3528z00_2059)
													(BgL_method3528z00_2059, (obj_t) (BgL_nodez00_2057),
													BgL_envz00_2058, BEOA);
										}}
										BgL_arg3712z00_1358 = BgL_res3968z00_2084;
								}}
								{
									obj_t BgL_envz00_5346;

									obj_t BgL_nodeza2za2_5345;

									BgL_nodeza2za2_5345 = BgL_arg3711z00_1357;
									BgL_envz00_5346 = BgL_arg3712z00_1358;
									BgL_envz00_1354 = BgL_envz00_5346;
									BgL_nodeza2za2_1353 = BgL_nodeza2za2_5345;
									goto BgL_zc3anonymousza33709ze3z83_1355;
								}
							}
					}
				}
			}
		}
	}



/* dataflow-node!-var3530 */
	obj_t BGl_dataflowzd2nodez12zd2var3530z12zzdataflow_walkz00(obj_t
		BgL_envz00_3593, obj_t BgL_nodez00_3594, obj_t BgL_envz00_3595)
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 73 */
			{
				BgL_varz00_bglt BgL_nodez00_1334;

				obj_t BgL_envz00_1335;

				BgL_nodez00_1334 = (BgL_varz00_bglt) (BgL_nodez00_3594);
				BgL_envz00_1335 = BgL_envz00_3595;
				{	/* Dataflow/walk.scm 75 */
					obj_t BgL_bz00_1339;

					BgL_bz00_1339 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(
						(obj_t) (
							(((BgL_varz00_bglt) CREF(BgL_nodez00_1334))->BgL_variablez00)),
						BgL_envz00_1335);
					if (PAIRP(BgL_bz00_1339))
						{	/* Dataflow/walk.scm 77 */
							obj_t BgL_arg3704z00_1341;

							BgL_arg3704z00_1341 = CDR(BgL_bz00_1339);
							{
								BgL_typez00_bglt BgL_auxz00_5356;

								BgL_nodez00_bglt BgL_auxz00_5354;

								BgL_auxz00_5356 = (BgL_typez00_bglt) (BgL_arg3704z00_1341);
								BgL_auxz00_5354 = (BgL_nodez00_bglt) (BgL_nodez00_1334);
								((((BgL_nodez00_bglt) CREF(BgL_auxz00_5354))->BgL_typez00) =
									((BgL_typez00_bglt) BgL_auxz00_5356), BUNSPEC);
							}
						}
					else
						{	/* Dataflow/walk.scm 78 */
							BgL_typez00_bglt BgL_arg3705z00_1342;

							{	/* Dataflow/walk.scm 78 */
								BgL_variablez00_bglt BgL_obj1608z00_2050;

								BgL_obj1608z00_2050 =
									(((BgL_varz00_bglt) CREF(BgL_nodez00_1334))->BgL_variablez00);
								BgL_arg3705z00_1342 =
									(((BgL_variablez00_bglt) CREF(BgL_obj1608z00_2050))->
									BgL_typez00);
							}
							{
								BgL_nodez00_bglt BgL_auxz00_5361;

								BgL_auxz00_5361 = (BgL_nodez00_bglt) (BgL_nodez00_1334);
								((((BgL_nodez00_bglt) CREF(BgL_auxz00_5361))->BgL_typez00) =
									((BgL_typez00_bglt) BgL_arg3705z00_1342), BUNSPEC);
							}
						}
				}
				return BgL_envz00_1335;
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzdataflow_walkz00()
	{
		AN_OBJECT;
		{	/* Dataflow/walk.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string4132z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4132z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string4132z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4132z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4132z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4132z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 341705556),
				BSTRING_TO_STRING(BGl_string4132z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4132z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string4132z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4132z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4132z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string4132z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zzeffect_cgraphz00(((long) 169100475),
				BSTRING_TO_STRING(BGl_string4132z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zzeffect_spreadz00(((long) 476444243),
				BSTRING_TO_STRING(BGl_string4132z00zzdataflow_walkz00));
			BGl_modulezd2initializa7ationz75zzeffect_feffectz00(((long) 53594424),
				BSTRING_TO_STRING(BGl_string4132z00zzdataflow_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4132z00zzdataflow_walkz00));
		}
	}

#ifdef __cplusplus
}
#endif
