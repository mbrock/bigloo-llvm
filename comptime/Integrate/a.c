/*===========================================================================*/
/*   (Integrate/a.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/a.scm)*/
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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_sexitz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_handlerz00;
		bool_t BgL_detachedzf3zf3;
	}               *BgL_sexitz00_bglt;

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

	typedef struct BgL_closurez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}                 *BgL_closurez00_bglt;

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

	typedef struct BgL_boxzd2setz12zc0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                      *BgL_boxzd2setz12zc0_bglt;

	typedef struct BgL_sfunzf2iinfozf2_bgl
	{
		obj_t BgL_ownerz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
		obj_t BgL_cfromz00;
		obj_t BgL_ctoz00;
		obj_t BgL_kz00;
		obj_t BgL_kza2za2;
		obj_t BgL_uz00;
		obj_t BgL_cnz00;
		obj_t BgL_ctz00;
		obj_t BgL_kontz00;
		bool_t BgL_gzf3zf3;
		obj_t BgL_lz00;
		obj_t BgL_ledz00;
		obj_t BgL_istampz00;
		obj_t BgL_globalz00;
		obj_t BgL_kapturedz00;
		obj_t BgL_tailzd2coercionzd2;
	}                      *BgL_sfunzf2iinfozf2_bglt;


	static obj_t BGl_nodezd2Azd2appzd2ly3577zd2zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_za2pairzd2nilza2zd2zztype_cachez00;
	BGL_EXPORTED_DEF obj_t BGl_za2phiza2z00zzintegrate_az00 = BUNSPEC;
	extern obj_t BGl_wideningzd2sexitzf2Iinfoz20zzintegrate_infoz00(obj_t, obj_t,
		bool_t, bool_t);
	BGL_EXPORTED_DECL obj_t BGl_Az00zzintegrate_az00(BgL_globalz00_bglt,
		BgL_nodez00_bglt);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_nodezd2Azd2setzd2exzd2it3597z00zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__nodezd2Azd2default3561z00zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_za2kontza2z00zzintegrate_az00 = BUNSPEC;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzintegrate_az00();
	static obj_t BGl_nodezd2Azd2fail3589z00zzintegrate_az00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_wideningzd2svarzf2Iinfoz20zzintegrate_infoz00(obj_t, obj_t,
		bool_t, bool_t);
	static obj_t BGl_nodezd2Azd2conditional3587z00zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_sfunzf2Iinfozf2zzintegrate_infoz00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_nodezd2Azd2default3561z00zzintegrate_az00(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_nodezd2Azd2sequence3573z00zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t BGl_nodezd2Azd2boxzd2setz123604zc0zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_sexitzf2Iinfozf2zzintegrate_infoz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzintegrate_az00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzintegrate_az00();
	static obj_t BGl_nodezd2Azd2app3575z00zzintegrate_az00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2Azd2select3591z00zzintegrate_az00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_tracezd2Azd2zzintegrate_az00(obj_t, obj_t);
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	static obj_t BGl_nodezd2Azd2funcall3579z00zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_wideningzd2sfunzf2Iinfoz20zzintegrate_infoz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_closurez00zzast_nodez00;
	static bool_t BGl_tailzd2typezd2compatiblezf3zf3zzintegrate_az00(obj_t,
		BgL_typez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl__Az00zzintegrate_az00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2magicza2z00zztype_cachez00;
	static obj_t BGl_nodezd2Azd2kwote3567z00zzintegrate_az00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_getzd2newzd2kontz00zzintegrate_az00();
	static obj_t BGl_methodzd2initzd2zzintegrate_az00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_nodezd2Azd2makezd2box3601zd2zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_nodezd2Azd2boxzd2ref3606zd2zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_nodezd2Azd2var3569z00zzintegrate_az00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_nodezd2Azd2atom3565z00zzintegrate_az00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_az00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzintegrate_az00();
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl_zc3anonymousza33632ze3z83zzintegrate_az00(obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_nodezd2Azd2jumpzd2exzd2it3599z00zzintegrate_az00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_az00();
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_nodezd2Azd2letzd2fun3593zd2zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_tailzd2coercionzd2zzintegrate_az00(obj_t,
		BgL_globalz00_bglt);
	static bool_t
		BGl_initializa7ezd2funz12z67zzintegrate_az00(BgL_variablez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_nodezd2Azd2closure3571z00zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__nodezd2Azd2zzintegrate_az00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd2Azd2cast3583z00zzintegrate_az00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt);
	static obj_t BGl_nodezd2Azd2letzd2var3595zd2zzintegrate_az00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_nodezd2Azd2setq3585z00zzintegrate_az00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_svarzf2Iinfozf2zzintegrate_infoz00;
	extern obj_t BGl_za2pairza2z00zztype_cachez00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_az00();
	static obj_t BGl_nodezd2Azd2extern3581z00zzintegrate_az00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2Azd2zzintegrate_az00(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t, obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4050z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2atom34076z00,
		BGl_nodezd2Azd2atom3565z00zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4051z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2kwote4077z00,
		BGl_nodezd2Azd2kwote3567z00zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4052z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2var354078z00,
		BGl_nodezd2Azd2var3569z00zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4053z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2closu4079z00,
		BGl_nodezd2Azd2closure3571z00zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4054z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2seque4080z00,
		BGl_nodezd2Azd2sequence3573z00zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4055z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2app354081z00,
		BGl_nodezd2Azd2app3575z00zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4056z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2appza7d4082za7,
		BGl_nodezd2Azd2appzd2ly3577zd2zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4057z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2funca4083z00,
		BGl_nodezd2Azd2funcall3579z00zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4058z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2exter4084z00,
		BGl_nodezd2Azd2extern3581z00zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4060z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2setq34085z00,
		BGl_nodezd2Azd2setq3585z00zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4059z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2cast34086z00,
		BGl_nodezd2Azd2cast3583z00zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4061z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2condi4087z00,
		BGl_nodezd2Azd2conditional3587z00zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4062z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2fail34088z00,
		BGl_nodezd2Azd2fail3589z00zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4063z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2selec4089z00,
		BGl_nodezd2Azd2select3591z00zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4064z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2letza7d4090za7,
		BGl_nodezd2Azd2letzd2fun3593zd2zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4065z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2letza7d4091za7,
		BGl_nodezd2Azd2letzd2var3595zd2zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4066z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2setza7d4092za7,
		BGl_nodezd2Azd2setzd2exzd2it3597z00zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4067z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2jumpza74093za7,
		BGl_nodezd2Azd2jumpzd2exzd2it3599z00zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4068z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2makeza74094za7,
		BGl_nodezd2Azd2makezd2box3601zd2zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4070z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2boxza7d4095za7,
		BGl_nodezd2Azd2boxzd2ref3606zd2zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4069z00zzintegrate_az00,
		BgL_bgl_nodeza7d2aza7d2boxza7d4096za7,
		BGl_nodezd2Azd2boxzd2setz123604zc0zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string4041z00zzintegrate_az00,
		BgL_bgl_string4041za700za7za7i4097za7, "Before tail-coercion", 20);
	      DEFINE_STRING(BGl_string4042z00zzintegrate_az00,
		BgL_bgl_string4042za700za7za7i4098za7, "After tail-coercion", 19);
	      DEFINE_STRING(BGl_string4043z00zzintegrate_az00,
		BgL_bgl_string4043za700za7za7i4099za7, "A( ", 3);
	      DEFINE_STRING(BGl_string4044z00zzintegrate_az00,
		BgL_bgl_string4044za700za7za7i4100za7, ", ", 2);
	      DEFINE_STRING(BGl_string4045z00zzintegrate_az00,
		BgL_bgl_string4045za700za7za7i4101za7, " )", 2);
	      DEFINE_STRING(BGl_string4046z00zzintegrate_az00,
		BgL_bgl_string4046za700za7za7i4102za7,
		"' because used in two different type contexts: ", 47);
	      DEFINE_STRING(BGl_string4047z00zzintegrate_az00,
		BgL_bgl_string4047za700za7za7i4103za7, "Globalizing `", 13);
	      DEFINE_STRING(BGl_string4048z00zzintegrate_az00,
		BgL_bgl_string4048za700za7za7i4104za7, "node-A", 6);
	      DEFINE_STRING(BGl_string4049z00zzintegrate_az00,
		BgL_bgl_string4049za700za7za7i4105za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string4071z00zzintegrate_az00,
		BgL_bgl_string4071za700za7za7i4106za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string4072z00zzintegrate_az00,
		BgL_bgl_string4072za700za7za7i4107za7, "integrate_a", 11);
	      DEFINE_STRING(BGl_string4073z00zzintegrate_az00,
		BgL_bgl_string4073za700za7za7i4108za7, "node-A-default3561 tail ", 24);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nodezd2Azd2default3561zd2envzd2zzintegrate_az00,
		BgL_bgl__nodeza7d2aza7d2defa4109z00,
		BGl__nodezd2Azd2default3561z00zzintegrate_az00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_GENERIC(BGl_nodezd2Azd2envz00zzintegrate_az00,
		BgL_bgl__nodeza7d2aza7d2za7za7in4110z00, BGl__nodezd2Azd2zzintegrate_az00,
		0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_Azd2envzd2zzintegrate_az00,
		BgL_bgl__aza700za7za7integrate4111za7, BGl__Az00zzintegrate_az00, 0L,
		BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzintegrate_az00(long
		BgL_checksumz00_3228, char *BgL_fromz00_3229)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_az00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_az00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzintegrate_az00();
					BGl_cnstzd2initzd2zzintegrate_az00();
					BGl_importedzd2moduleszd2initz00zzintegrate_az00();
					BGl_genericzd2initzd2zzintegrate_az00();
					BGl_methodzd2initzd2zzintegrate_az00();
					BGl_toplevelzd2initzd2zzintegrate_az00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_az00()
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 18 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "integrate_a");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "integrate_a");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "integrate_a");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"integrate_a");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_a");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"integrate_a");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzintegrate_az00()
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 18 */
			{	/* Integrate/a.scm 18 */
				obj_t BgL_cportz00_3200;

				BgL_cportz00_3200 =
					bgl_open_input_string(BGl_string4073z00zzintegrate_az00,
					(int) (((long) 0)));
				{
					long BgL_iz00_3201;

					BgL_iz00_3201 = ((long) 1);
				BgL_loopz00_3202:
					if ((BgL_iz00_3201 == ((long) -1)))
						{	/* Integrate/a.scm 18 */
							return BUNSPEC;
						}
					else
						{	/* Integrate/a.scm 18 */
							{	/* Integrate/a.scm 18 */
								obj_t BgL_arg4075z00_3204;

								{	/* Integrate/a.scm 18 */

									{	/* Integrate/a.scm 18 */
										obj_t BgL_locationz00_3206;

										BgL_locationz00_3206 = BBOOL(((bool_t) 0));
										{	/* Integrate/a.scm 18 */

											BgL_arg4075z00_3204 =
												BGl_readz00zz__readerz00(BgL_cportz00_3200,
												BgL_locationz00_3206);
										}
									}
								}
								{	/* Integrate/a.scm 18 */
									int BgL_auxz00_3251;

									BgL_auxz00_3251 = (int) (BgL_iz00_3201);
									CNST_TABLE_SET(BgL_auxz00_3251, BgL_arg4075z00_3204);
							}}
							{	/* Integrate/a.scm 18 */
								int BgL_auxz00_3207;

								BgL_auxz00_3207 = (int) ((BgL_iz00_3201 - ((long) 1)));
								{
									long BgL_iz00_3256;

									BgL_iz00_3256 = (long) (BgL_auxz00_3207);
									BgL_iz00_3201 = BgL_iz00_3256;
									goto BgL_loopz00_3202;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzintegrate_az00()
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 18 */
			BGl_za2phiza2z00zzintegrate_az00 = BUNSPEC;
			BGl_za2kontza2z00zzintegrate_az00 = BUNSPEC;
			return BUNSPEC;
		}
	}



/* A */
	BGL_EXPORTED_DEF obj_t BGl_Az00zzintegrate_az00(BgL_globalz00_bglt
		BgL_globalz00_1, BgL_nodez00_bglt BgL_nodez00_2)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 42 */
			{	/* Integrate/a.scm 44 */
				obj_t BgL_list3607z00_985;

				BgL_list3607z00_985 = MAKE_PAIR((obj_t) (BgL_globalz00_1), BNIL);
				BGl_za2phiza2z00zzintegrate_az00 = BgL_list3607z00_985;
			}
			BGl_za2kontza2z00zzintegrate_az00 = BINT(((long) 0));
			BGl_initializa7ezd2funz12z67zzintegrate_az00(
				(BgL_variablez00_bglt) (BgL_globalz00_1),
				(BgL_variablez00_bglt) (BgL_globalz00_1));
			{	/* Integrate/a.scm 48 */
				obj_t BgL_az00_986;

				{	/* Integrate/a.scm 48 */
					obj_t BgL_arg3608z00_988;

					{	/* Integrate/a.scm 48 */
						obj_t BgL_arg3610z00_990;

						BgL_typez00_bglt BgL_arg3612z00_991;

						BgL_arg3610z00_990 = CNST_TABLE_REF(((long) 0));
						{
							BgL_variablez00_bglt BgL_auxz00_3265;

							BgL_auxz00_3265 = (BgL_variablez00_bglt) (BgL_globalz00_1);
							BgL_arg3612z00_991 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_3265))->BgL_typez00);
						}
						BgL_arg3608z00_988 =
							MAKE_PAIR(BgL_arg3610z00_990, (obj_t) (BgL_arg3612z00_991));
					}
					{	/* Integrate/a.scm 48 */
						BgL_variablez00_bglt BgL_hostz00_1982;

						BgL_hostz00_1982 = (BgL_variablez00_bglt) (BgL_globalz00_1);
						{	/* Integrate/a.scm 48 */
							obj_t BgL_method3562z00_1985;

							{	/* Integrate/a.scm 48 */
								BgL_objectz00_bglt BgL_objz00_1986;

								BgL_objz00_1986 = (BgL_objectz00_bglt) (BgL_nodez00_2);
								{	/* Integrate/a.scm 48 */
									long BgL_objzd2classzd2numz00_1987;

									BgL_objzd2classzd2numz00_1987 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1986);
									{	/* Integrate/a.scm 48 */
										obj_t BgL_arg2643z00_1988;

										BgL_arg2643z00_1988 =
											PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
											(int) (((long) 1)));
										{	/* Integrate/a.scm 48 */
											obj_t BgL_arrayz00_1990;

											int BgL_offsetz00_1991;

											BgL_arrayz00_1990 = BgL_arg2643z00_1988;
											BgL_offsetz00_1991 =
												(int) (BgL_objzd2classzd2numz00_1987);
											{	/* Integrate/a.scm 48 */
												long BgL_offsetz00_1992;

												BgL_offsetz00_1992 =
													((long) (BgL_offsetz00_1991) - OBJECT_TYPE);
												{	/* Integrate/a.scm 48 */
													long BgL_modz00_1993;

													{	/* Integrate/a.scm 48 */
														int BgL_arg2645z00_1994;

														BgL_arg2645z00_1994 = (int) (((long) 16));
														{	/* Integrate/a.scm 48 */
															long BgL_auxz00_3279;

															BgL_auxz00_3279 = (long) (BgL_arg2645z00_1994);
															BgL_modz00_1993 =
																(BgL_offsetz00_1992 / BgL_auxz00_3279);
													}}
													{	/* Integrate/a.scm 48 */
														long BgL_restz00_1995;

														{	/* Integrate/a.scm 48 */
															int BgL_arg2644z00_1996;

															BgL_arg2644z00_1996 = (int) (((long) 16));
															{	/* Integrate/a.scm 48 */
																long BgL_auxz00_3283;

																BgL_auxz00_3283 = (long) (BgL_arg2644z00_1996);
																BgL_restz00_1995 =
																	(BgL_offsetz00_1992 % BgL_auxz00_3283);
														}}
														{	/* Integrate/a.scm 48 */

															BgL_method3562z00_1985 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1990,
																	(int) (BgL_modz00_1993)),
																(int) (BgL_restz00_1995));
							}}}}}}}}
							BgL_az00_986 =
								PROCEDURE_ENTRY(BgL_method3562z00_1985) (BgL_method3562z00_1985,
								(obj_t) (BgL_nodez00_2),
								(obj_t) (BgL_hostz00_1982), BgL_arg3608z00_988, BNIL, BEOA);
				}}}
				{	/* Integrate/a.scm 48 */
					obj_t BgL_az72z72_987;

					BgL_az72z72_987 =
						BGl_tailzd2coercionzd2zzintegrate_az00(BgL_az00_986,
						BgL_globalz00_1);
					{	/* Integrate/a.scm 49 */

						BGl_tracezd2Azd2zzintegrate_az00(BgL_az00_986,
							BGl_string4041z00zzintegrate_az00);
						BGl_tracezd2Azd2zzintegrate_az00(BgL_az72z72_987,
							BGl_string4042z00zzintegrate_az00);
						return BgL_az72z72_987;
					}
				}
			}
		}
	}



/* _A */
	obj_t BGl__Az00zzintegrate_az00(obj_t BgL_envz00_3058,
		obj_t BgL_globalz00_3059, obj_t BgL_nodez00_3060)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 42 */
			return
				BGl_Az00zzintegrate_az00(
				(BgL_globalz00_bglt) (BgL_globalz00_3059),
				(BgL_nodez00_bglt) (BgL_nodez00_3060));
		}
	}



/* initialize-fun! */
	bool_t BGl_initializa7ezd2funz12z67zzintegrate_az00(BgL_variablez00_bglt
		BgL_funz00_3, BgL_variablez00_bglt BgL_ownerz00_4)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 57 */
			{	/* Integrate/a.scm 58 */
				BgL_sfunz00_bglt BgL_obj3495z00_992;

				BgL_obj3495z00_992 =
					((BgL_sfunz00_bglt)
					(BgL_sfunz00_bglt) (
						(((BgL_variablez00_bglt) CREF(BgL_funz00_3))->BgL_valuez00)));
				{	/* Integrate/iinfo.scm 47 */
					obj_t BgL_arg3613z00_993;

					{	/* Integrate/iinfo.scm 47 */
						bool_t BgL_arg3622z00_1002;

						{	/* Integrate/a.scm 60 */
							obj_t BgL_obj1751z00_2011;

							BgL_obj1751z00_2011 = (obj_t) (BgL_funz00_3);
							BgL_arg3622z00_1002 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_2011,
								BGl_globalz00zzast_varz00);
						}
						BgL_arg3613z00_993 =
							BGl_wideningzd2sfunzf2Iinfoz20zzintegrate_infoz00(
							(obj_t) (BgL_ownerz00_4), BUNSPEC, BNIL, BNIL, BNIL, BNIL, BNIL,
							BUNSPEC, BNIL, BNIL, BNIL, BgL_arg3622z00_1002, BUNSPEC, BNIL,
							BUNSPEC, BUNSPEC, BUNSPEC, BUNSPEC);
					}
					{	/* Integrate/a.scm 58 */
						BgL_objectz00_bglt BgL_auxz00_3307;

						BgL_auxz00_3307 = (BgL_objectz00_bglt) (BgL_obj3495z00_992);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_3307, BgL_arg3613z00_993);
					}
				}
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_obj3495z00_992),
					BGl_classzd2numzd2zz__objectz00
					(BGl_sfunzf2Iinfozf2zzintegrate_infoz00));
				BgL_obj3495z00_992;
			}
			{	/* Integrate/a.scm 61 */
				obj_t BgL_g3547z00_1005;

				{	/* Integrate/a.scm 63 */
					BgL_sfunz00_bglt BgL_obj1880z00_2015;

					BgL_obj1880z00_2015 =
						(BgL_sfunz00_bglt) (
						(((BgL_variablez00_bglt) CREF(BgL_funz00_3))->BgL_valuez00));
					BgL_g3547z00_1005 =
						(((BgL_sfunz00_bglt) CREF(BgL_obj1880z00_2015))->BgL_argsz00);
				}
				{
					obj_t BgL_l3545z00_1007;

					BgL_l3545z00_1007 = BgL_g3547z00_1005;
				BgL_zc3anonymousza33625ze3z83_1008:
					if (PAIRP(BgL_l3545z00_1007))
						{	/* Integrate/a.scm 63 */
							{	/* Integrate/a.scm 62 */
								obj_t BgL_xz00_1010;

								BgL_xz00_1010 = CAR(BgL_l3545z00_1007);
								{	/* Integrate/a.scm 62 */
									BgL_svarz00_bglt BgL_obj3496z00_1011;

									{
										BgL_svarz00_bglt BgL_auxz00_3319;

										{	/* Integrate/a.scm 62 */
											BgL_valuez00_bglt BgL_auxz00_3320;

											{
												BgL_variablez00_bglt BgL_auxz00_3321;

												BgL_auxz00_3321 =
													(BgL_variablez00_bglt) (BgL_xz00_1010);
												BgL_auxz00_3320 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3321))->
													BgL_valuez00);
											}
											BgL_auxz00_3319 = (BgL_svarz00_bglt) (BgL_auxz00_3320);
										}
										BgL_obj3496z00_1011 = ((BgL_svarz00_bglt) BgL_auxz00_3319);
									}
									{	/* Integrate/a.scm 62 */
										obj_t BgL_auxz00_3328;

										BgL_objectz00_bglt BgL_auxz00_3326;

										BgL_auxz00_3328 =
											BGl_wideningzd2svarzf2Iinfoz20zzintegrate_infoz00(BUNSPEC,
											BUNSPEC, ((bool_t) 0), ((bool_t) 0));
										BgL_auxz00_3326 =
											(BgL_objectz00_bglt) (BgL_obj3496z00_1011);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3326, BgL_auxz00_3328);
									}
									BGL_OBJECT_CLASS_NUM_SET(
										(BgL_objectz00_bglt) (BgL_obj3496z00_1011),
										BGl_classzd2numzd2zz__objectz00
										(BGl_svarzf2Iinfozf2zzintegrate_infoz00));
									BgL_obj3496z00_1011;
								}
							}
							{
								obj_t BgL_l3545z00_3334;

								BgL_l3545z00_3334 = CDR(BgL_l3545z00_1007);
								BgL_l3545z00_1007 = BgL_l3545z00_3334;
								goto BgL_zc3anonymousza33625ze3z83_1008;
							}
						}
					else
						{	/* Integrate/a.scm 63 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* get-new-kont */
	obj_t BGl_getzd2newzd2kontz00zzintegrate_az00()
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 73 */
			{	/* Integrate/a.scm 74 */
				long BgL_za72za7_2023;

				BgL_za72za7_2023 = (long) CINT(BGl_za2kontza2z00zzintegrate_az00);
				BGl_za2kontza2z00zzintegrate_az00 =
					BINT((((long) 1) + BgL_za72za7_2023));
			}
			return BGl_za2kontza2z00zzintegrate_az00;
		}
	}



/* trace-A */
	obj_t BGl_tracezd2Azd2zzintegrate_az00(obj_t BgL_az00_5, obj_t BgL_msgz00_6)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 80 */
			{	/* Integrate/a.scm 81 */
				obj_t BgL_pz00_1017;

				{	/* Integrate/a.scm 83 */
					obj_t BgL_zc3anonymousza33632ze3z83_3066;

					BgL_zc3anonymousza33632ze3z83_3066 =
						make_fx_procedure(BGl_zc3anonymousza33632ze3z83zzintegrate_az00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza33632ze3z83_3066,
						(int) (((long) 0)), BgL_az00_5);
					BgL_pz00_1017 =
						BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
						(BgL_zc3anonymousza33632ze3z83_3066);
				}
				return BNIL;
			}
		}
	}



/* <anonymous:3632> */
	obj_t BGl_zc3anonymousza33632ze3z83zzintegrate_az00(obj_t BgL_envz00_3067)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 82 */
			{	/* Integrate/a.scm 83 */
				obj_t BgL_az00_3068;

				BgL_az00_3068 = PROCEDURE_REF(BgL_envz00_3067, (int) (((long) 0)));
				{

					{	/* Integrate/a.scm 83 */
						bool_t BgL_auxz00_3347;

						{
							obj_t BgL_l3549z00_1021;

							BgL_l3549z00_1021 = BgL_az00_3068;
						BgL_zc3anonymousza33633ze3z83_1022:
							if (PAIRP(BgL_l3549z00_1021))
								{	/* Integrate/a.scm 83 */
									{	/* Integrate/a.scm 84 */
										obj_t BgL_az00_1024;

										BgL_az00_1024 = CAR(BgL_l3549z00_1021);
										{	/* Integrate/a.scm 84 */
											obj_t BgL_port3548z00_1025;

											{	/* Integrate/a.scm 84 */
												obj_t BgL_res3981z00_2027;

												{	/* Integrate/a.scm 84 */
													obj_t BgL_auxz00_3351;

													BgL_auxz00_3351 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res3981z00_2027 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3351);
												}
												BgL_port3548z00_1025 = BgL_res3981z00_2027;
											}
											bgl_display_string(BGl_string4043z00zzintegrate_az00,
												BgL_port3548z00_1025);
											bgl_display_obj(BGl_shapez00zztools_shapez00(CAR
													(BgL_az00_1024)), BgL_port3548z00_1025);
											bgl_display_string(BGl_string4044z00zzintegrate_az00,
												BgL_port3548z00_1025);
											{	/* Integrate/a.scm 85 */
												obj_t BgL_arg3637z00_1028;

												{	/* Integrate/a.scm 85 */
													obj_t BgL_arg3638z00_1029;

													{	/* Integrate/a.scm 85 */
														obj_t BgL_pairz00_2033;

														BgL_pairz00_2033 = BgL_az00_1024;
														BgL_arg3638z00_1029 = CAR(CDR(BgL_pairz00_2033));
													}
													BgL_arg3637z00_1028 =
														BGl_shapez00zztools_shapez00(BgL_arg3638z00_1029);
												}
												bgl_display_obj(BgL_arg3637z00_1028,
													BgL_port3548z00_1025);
											}
											bgl_display_string(BGl_string4044z00zzintegrate_az00,
												BgL_port3548z00_1025);
											{	/* Integrate/a.scm 86 */
												obj_t BgL_arg3639z00_1030;

												{	/* Integrate/a.scm 86 */
													obj_t BgL_arg3640z00_1031;

													{	/* Integrate/a.scm 86 */
														obj_t BgL_pairz00_2039;

														BgL_pairz00_2039 = BgL_az00_1024;
														BgL_arg3640z00_1031 =
															CAR(CDR(CDR(BgL_pairz00_2039)));
													}
													BgL_arg3639z00_1030 =
														BGl_shapez00zztools_shapez00(BgL_arg3640z00_1031);
												}
												bgl_display_obj(BgL_arg3639z00_1030,
													BgL_port3548z00_1025);
											}
											bgl_display_string(BGl_string4045z00zzintegrate_az00,
												BgL_port3548z00_1025);
											bgl_display_char(((unsigned char) '\n'),
												BgL_port3548z00_1025);
									}}
									{
										obj_t BgL_l3549z00_3371;

										BgL_l3549z00_3371 = CDR(BgL_l3549z00_1021);
										BgL_l3549z00_1021 = BgL_l3549z00_3371;
										goto BgL_zc3anonymousza33633ze3z83_1022;
									}
								}
							else
								{	/* Integrate/a.scm 83 */
									BgL_auxz00_3347 = ((bool_t) 1);
								}
						}
						return BBOOL(BgL_auxz00_3347);
					}
				}
			}
		}
	}



/* tail-type-compatible? */
	bool_t BGl_tailzd2typezd2compatiblezf3zf3zzintegrate_az00(obj_t BgL_t1z00_7,
		BgL_typez00_bglt BgL_t2z00_8)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 102 */
			{	/* Integrate/a.scm 103 */
				bool_t BgL__ortest_3497z00_1035;

				BgL__ortest_3497z00_1035 = (BgL_t1z00_7 == (obj_t) (BgL_t2z00_8));
				if (BgL__ortest_3497z00_1035)
					{	/* Integrate/a.scm 103 */
						return BgL__ortest_3497z00_1035;
					}
				else
					{	/* Integrate/a.scm 104 */
						bool_t BgL__ortest_3498z00_1036;

						if ((BgL_t1z00_7 == BGl_za2intza2z00zztype_cachez00))
							{	/* Integrate/a.scm 104 */
								BgL__ortest_3498z00_1036 =
									((obj_t) (BgL_t2z00_8) == BGl_za2longza2z00zztype_cachez00);
							}
						else
							{	/* Integrate/a.scm 104 */
								BgL__ortest_3498z00_1036 = ((bool_t) 0);
							}
						if (BgL__ortest_3498z00_1036)
							{	/* Integrate/a.scm 104 */
								return BgL__ortest_3498z00_1036;
							}
						else
							{	/* Integrate/a.scm 104 */
								if ((BgL_t1z00_7 == BGl_za2longza2z00zztype_cachez00))
									{	/* Integrate/a.scm 105 */
										return
											(
											(obj_t) (BgL_t2z00_8) == BGl_za2intza2z00zztype_cachez00);
									}
								else
									{	/* Integrate/a.scm 105 */
										return ((bool_t) 0);
									}
							}
					}
			}
		}
	}



/* tail-coercion */
	obj_t BGl_tailzd2coercionzd2zzintegrate_az00(obj_t BgL_az00_9,
		BgL_globalz00_bglt BgL_globalz00_10)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 115 */
			{
				obj_t BgL_l3551z00_1040;

				BgL_l3551z00_1040 = BgL_az00_9;
			BgL_zc3anonymousza33642ze3z83_1041:
				if (PAIRP(BgL_l3551z00_1040))
					{	/* Integrate/a.scm 117 */
						{	/* Integrate/a.scm 118 */
							obj_t BgL_az00_1043;

							BgL_az00_1043 = CAR(BgL_l3551z00_1040);
							{
								obj_t BgL_calleez00_1044;

								obj_t BgL_typez00_1045;

								if (PAIRP(BgL_az00_1043))
									{	/* Integrate/a.scm 118 */
										obj_t BgL_cdrzd21654zd2_1049;

										BgL_cdrzd21654zd2_1049 = CDR(BgL_az00_1043);
										if (PAIRP(BgL_cdrzd21654zd2_1049))
											{	/* Integrate/a.scm 118 */
												obj_t BgL_cdrzd21658zd2_1051;

												BgL_cdrzd21658zd2_1051 = CDR(BgL_cdrzd21654zd2_1049);
												if (PAIRP(BgL_cdrzd21658zd2_1051))
													{	/* Integrate/a.scm 118 */
														obj_t BgL_carzd21661zd2_1053;

														BgL_carzd21661zd2_1053 =
															CAR(BgL_cdrzd21658zd2_1051);
														if (PAIRP(BgL_carzd21661zd2_1053))
															{	/* Integrate/a.scm 118 */
																if (NULLP(CDR(BgL_cdrzd21658zd2_1051)))
																	{	/* Integrate/a.scm 118 */
																		BgL_calleez00_1044 =
																			CAR(BgL_cdrzd21654zd2_1049);
																		BgL_typez00_1045 =
																			CDR(BgL_carzd21661zd2_1053);
																		{	/* Integrate/a.scm 120 */
																			BgL_valuez00_bglt BgL_funz00_1059;

																			{
																				BgL_variablez00_bglt BgL_auxz00_3403;

																				BgL_auxz00_3403 =
																					(BgL_variablez00_bglt)
																					(BgL_calleez00_1044);
																				BgL_funz00_1059 =
																					(((BgL_variablez00_bglt)
																						CREF(BgL_auxz00_3403))->
																					BgL_valuez00);
																			}
																			if (BGl_iszd2azf3z21zz__objectz00
																				(BgL_typez00_1045,
																					BGl_typez00zztype_typez00))
																				{	/* Integrate/a.scm 125 */
																					bool_t BgL_testz00_3408;

																					if (
																						(BgL_typez00_1045 ==
																							BGl_za2objza2z00zztype_cachez00))
																						{	/* Integrate/a.scm 125 */
																							BgL_testz00_3408 = ((bool_t) 1);
																						}
																					else
																						{	/* Integrate/a.scm 125 */
																							BgL_testz00_3408 =
																								(BgL_typez00_1045 ==
																								BGl_za2magicza2z00zztype_cachez00);
																						}
																					if (BgL_testz00_3408)
																						{	/* Integrate/a.scm 125 */
																							BUNSPEC;
																						}
																					else
																						{	/* Integrate/a.scm 127 */
																							bool_t BgL_testz00_3412;

																							{	/* Integrate/a.scm 127 */
																								obj_t BgL_auxz00_3413;

																								{	/* Integrate/a.scm 127 */
																									BgL_sfunzf2iinfozf2_bglt
																										BgL_obj3444z00_2064;
																									BgL_obj3444z00_2064 =
																										(BgL_sfunzf2iinfozf2_bglt)
																										(BgL_funz00_1059);
																									{
																										obj_t BgL_auxz00_3415;

																										{	/* Integrate/a.scm 127 */
																											BgL_objectz00_bglt
																												BgL_auxz00_3416;
																											BgL_auxz00_3416 =
																												(BgL_objectz00_bglt)
																												(BgL_obj3444z00_2064);
																											BgL_auxz00_3415 =
																												BGL_OBJECT_WIDENING
																												(BgL_auxz00_3416);
																										}
																										BgL_auxz00_3413 =
																											(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3415))->BgL_tailzd2coercionzd2);
																									}
																								}
																								BgL_testz00_3412 =
																									(BgL_auxz00_3413 == BUNSPEC);
																							}
																							if (BgL_testz00_3412)
																								{	/* Integrate/a.scm 128 */
																									BgL_sfunzf2iinfozf2_bglt
																										BgL_obj3446z00_2065;
																									obj_t BgL_val3445z00_2066;

																									BgL_obj3446z00_2065 =
																										(BgL_sfunzf2iinfozf2_bglt)
																										(BgL_funz00_1059);
																									BgL_val3445z00_2066 =
																										BgL_typez00_1045;
																									{
																										obj_t BgL_auxz00_3422;

																										{	/* Integrate/a.scm 128 */
																											BgL_objectz00_bglt
																												BgL_auxz00_3423;
																											BgL_auxz00_3423 =
																												(BgL_objectz00_bglt)
																												(BgL_obj3446z00_2065);
																											BgL_auxz00_3422 =
																												BGL_OBJECT_WIDENING
																												(BgL_auxz00_3423);
																										}
																										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3422))->BgL_tailzd2coercionzd2) = ((obj_t) BgL_val3445z00_2066), BUNSPEC);
																									}
																								}
																							else
																								{	/* Integrate/a.scm 129 */
																									bool_t BgL_testz00_3427;

																									if (
																										(BgL_typez00_1045 ==
																											BGl_za2pairzd2nilza2zd2zztype_cachez00))
																										{	/* Integrate/a.scm 129 */
																											BgL_testz00_3427 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Integrate/a.scm 129 */
																											BgL_testz00_3427 =
																												(BgL_typez00_1045 ==
																												BGl_za2magicza2z00zztype_cachez00);
																										}
																									if (BgL_testz00_3427)
																										{	/* Integrate/a.scm 129 */
																											BUNSPEC;
																										}
																									else
																										{	/* Integrate/a.scm 131 */
																											bool_t BgL_testz00_3431;

																											{	/* Integrate/a.scm 131 */
																												bool_t BgL_testz00_3432;

																												if (
																													(BgL_typez00_1045 ==
																														BGl_za2pairzd2nilza2zd2zztype_cachez00))
																													{	/* Integrate/a.scm 132 */
																														obj_t
																															BgL_arg3679z00_1088;
																														{	/* Integrate/a.scm 132 */
																															BgL_sfunzf2iinfozf2_bglt
																																BgL_obj3444z00_2067;
																															BgL_obj3444z00_2067
																																=
																																(BgL_sfunzf2iinfozf2_bglt)
																																(BgL_funz00_1059);
																															{
																																obj_t
																																	BgL_auxz00_3436;
																																{	/* Integrate/a.scm 132 */
																																	BgL_objectz00_bglt
																																		BgL_auxz00_3437;
																																	BgL_auxz00_3437
																																		=
																																		(BgL_objectz00_bglt)
																																		(BgL_obj3444z00_2067);
																																	BgL_auxz00_3436
																																		=
																																		BGL_OBJECT_WIDENING
																																		(BgL_auxz00_3437);
																																}
																																BgL_arg3679z00_1088
																																	=
																																	(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3436))->BgL_tailzd2coercionzd2);
																															}
																														}
																														BgL_testz00_3432 =
																															(BgL_arg3679z00_1088
																															==
																															BGl_za2pairza2z00zztype_cachez00);
																													}
																												else
																													{	/* Integrate/a.scm 131 */
																														BgL_testz00_3432 =
																															((bool_t) 0);
																													}
																												if (BgL_testz00_3432)
																													{	/* Integrate/a.scm 131 */
																														BgL_testz00_3431 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Integrate/a.scm 131 */
																														if (
																															(BgL_typez00_1045
																																==
																																BGl_za2pairza2z00zztype_cachez00))
																															{	/* Integrate/a.scm 134 */
																																obj_t
																																	BgL_arg3677z00_1086;
																																{	/* Integrate/a.scm 134 */
																																	BgL_sfunzf2iinfozf2_bglt
																																		BgL_obj3444z00_2068;
																																	BgL_obj3444z00_2068
																																		=
																																		(BgL_sfunzf2iinfozf2_bglt)
																																		(BgL_funz00_1059);
																																	{
																																		obj_t
																																			BgL_auxz00_3445;
																																		{	/* Integrate/a.scm 134 */
																																			BgL_objectz00_bglt
																																				BgL_auxz00_3446;
																																			BgL_auxz00_3446
																																				=
																																				(BgL_objectz00_bglt)
																																				(BgL_obj3444z00_2068);
																																			BgL_auxz00_3445
																																				=
																																				BGL_OBJECT_WIDENING
																																				(BgL_auxz00_3446);
																																		}
																																		BgL_arg3677z00_1086
																																			=
																																			(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3445))->BgL_tailzd2coercionzd2);
																																	}
																																}
																																BgL_testz00_3431
																																	=
																																	(BgL_arg3677z00_1086
																																	==
																																	BGl_za2pairzd2nilza2zd2zztype_cachez00);
																															}
																														else
																															{	/* Integrate/a.scm 133 */
																																BgL_testz00_3431
																																	=
																																	((bool_t) 0);
																															}
																													}
																											}
																											if (BgL_testz00_3431)
																												{	/* Integrate/a.scm 131 */
																													BUNSPEC;
																												}
																											else
																												{	/* Integrate/a.scm 136 */
																													bool_t
																														BgL_testz00_3451;
																													{	/* Integrate/a.scm 136 */
																														obj_t
																															BgL_auxz00_3452;
																														{	/* Integrate/a.scm 136 */
																															BgL_sfunzf2iinfozf2_bglt
																																BgL_obj3444z00_2069;
																															BgL_obj3444z00_2069
																																=
																																(BgL_sfunzf2iinfozf2_bglt)
																																(BgL_funz00_1059);
																															{
																																obj_t
																																	BgL_auxz00_3454;
																																{	/* Integrate/a.scm 136 */
																																	BgL_objectz00_bglt
																																		BgL_auxz00_3455;
																																	BgL_auxz00_3455
																																		=
																																		(BgL_objectz00_bglt)
																																		(BgL_obj3444z00_2069);
																																	BgL_auxz00_3454
																																		=
																																		BGL_OBJECT_WIDENING
																																		(BgL_auxz00_3455);
																																}
																																BgL_auxz00_3452
																																	=
																																	(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3454))->BgL_tailzd2coercionzd2);
																															}
																														}
																														BgL_testz00_3451 =
																															BGl_tailzd2typezd2compatiblezf3zf3zzintegrate_az00
																															(BgL_auxz00_3452,
																															(BgL_typez00_bglt)
																															(BgL_typez00_1045));
																													}
																													if (BgL_testz00_3451)
																														{	/* Integrate/a.scm 136 */
																															BFALSE;
																														}
																													else
																														{	/* Integrate/a.scm 136 */
																															if (BGl_iszd2azf3z21zz__objectz00(BgL_calleez00_1044, BGl_localz00zzast_varz00))
																																{	/* Integrate/a.scm 138 */
																																	obj_t
																																		BgL_arg3659z00_1068;
																																	obj_t
																																		BgL_arg3661z00_1070;
																																	obj_t
																																		BgL_arg3663z00_1072;
																																	obj_t
																																		BgL_arg3665z00_1074;
																																	BgL_arg3659z00_1068
																																		=
																																		BGl_shapez00zztools_shapez00
																																		((obj_t)
																																		(BgL_globalz00_10));
																																	BgL_arg3661z00_1070
																																		=
																																		BGl_shapez00zztools_shapez00
																																		(BgL_calleez00_1044);
																																	{	/* Integrate/a.scm 142 */
																																		obj_t
																																			BgL_arg3674z00_1082;
																																		{	/* Integrate/a.scm 142 */
																																			BgL_sfunzf2iinfozf2_bglt
																																				BgL_obj3444z00_2071;
																																			BgL_obj3444z00_2071
																																				=
																																				(BgL_sfunzf2iinfozf2_bglt)
																																				(BgL_funz00_1059);
																																			{
																																				obj_t
																																					BgL_auxz00_3467;
																																				{	/* Integrate/a.scm 142 */
																																					BgL_objectz00_bglt
																																						BgL_auxz00_3468;
																																					BgL_auxz00_3468
																																						=
																																						(BgL_objectz00_bglt)
																																						(BgL_obj3444z00_2071);
																																					BgL_auxz00_3467
																																						=
																																						BGL_OBJECT_WIDENING
																																						(BgL_auxz00_3468);
																																				}
																																				BgL_arg3674z00_1082
																																					=
																																					(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3467))->BgL_tailzd2coercionzd2);
																																			}
																																		}
																																		BgL_arg3663z00_1072
																																			=
																																			BGl_shapez00zztools_shapez00
																																			(BgL_arg3674z00_1082);
																																	}
																																	BgL_arg3665z00_1074
																																		=
																																		BGl_shapez00zztools_shapez00
																																		(BgL_typez00_1045);
																																	{	/* Integrate/a.scm 138 */
																																		obj_t
																																			BgL_list3666z00_1075;
																																		{	/* Integrate/a.scm 138 */
																																			obj_t
																																				BgL_arg3667z00_1076;
																																			{	/* Integrate/a.scm 138 */
																																				obj_t
																																					BgL_arg3668z00_1077;
																																				{	/* Integrate/a.scm 138 */
																																					obj_t
																																						BgL_arg3670z00_1078;
																																					{	/* Integrate/a.scm 138 */
																																						obj_t
																																							BgL_arg3671z00_1079;
																																						{	/* Integrate/a.scm 138 */
																																							obj_t
																																								BgL_arg3672z00_1080;
																																							{	/* Integrate/a.scm 138 */
																																								obj_t
																																									BgL_arg3673z00_1081;
																																								BgL_arg3673z00_1081
																																									=
																																									MAKE_PAIR
																																									(BgL_arg3665z00_1074,
																																									BNIL);
																																								BgL_arg3672z00_1080
																																									=
																																									MAKE_PAIR
																																									(BGl_string4044z00zzintegrate_az00,
																																									BgL_arg3673z00_1081);
																																							}
																																							BgL_arg3671z00_1079
																																								=
																																								MAKE_PAIR
																																								(BgL_arg3663z00_1072,
																																								BgL_arg3672z00_1080);
																																						}
																																						BgL_arg3670z00_1078
																																							=
																																							MAKE_PAIR
																																							(BGl_string4046z00zzintegrate_az00,
																																							BgL_arg3671z00_1079);
																																					}
																																					BgL_arg3668z00_1077
																																						=
																																						MAKE_PAIR
																																						(BgL_arg3661z00_1070,
																																						BgL_arg3670z00_1078);
																																				}
																																				BgL_arg3667z00_1076
																																					=
																																					MAKE_PAIR
																																					(BGl_string4047z00zzintegrate_az00,
																																					BgL_arg3668z00_1077);
																																			}
																																			BgL_list3666z00_1075
																																				=
																																				MAKE_PAIR
																																				(BgL_arg3659z00_1068,
																																				BgL_arg3667z00_1076);
																																		}
																																		BGl_warningz00zz__errorz00
																																			(BgL_list3666z00_1075);
																																	}
																																}
																															else
																																{	/* Integrate/a.scm 137 */
																																	BFALSE;
																																}
																															{	/* Integrate/a.scm 144 */
																																BgL_sfunzf2iinfozf2_bglt
																																	BgL_obj3446z00_2072;
																																obj_t
																																	BgL_val3445z00_2073;
																																BgL_obj3446z00_2072
																																	=
																																	(BgL_sfunzf2iinfozf2_bglt)
																																	(BgL_funz00_1059);
																																BgL_val3445z00_2073
																																	= BFALSE;
																																{
																																	obj_t
																																		BgL_auxz00_3483;
																																	{	/* Integrate/a.scm 144 */
																																		BgL_objectz00_bglt
																																			BgL_auxz00_3484;
																																		BgL_auxz00_3484
																																			=
																																			(BgL_objectz00_bglt)
																																			(BgL_obj3446z00_2072);
																																		BgL_auxz00_3483
																																			=
																																			BGL_OBJECT_WIDENING
																																			(BgL_auxz00_3484);
																																	}
																																	((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3483))->BgL_tailzd2coercionzd2) = ((obj_t) BgL_val3445z00_2073), BUNSPEC);
																																}
																															}
																														}
																												}
																										}
																								}
																						}
																				}
																			else
																				{	/* Integrate/a.scm 123 */
																					BUNSPEC;
																				}
																		}
																	}
																else
																	{	/* Integrate/a.scm 118 */
																		BFALSE;
																	}
															}
														else
															{	/* Integrate/a.scm 118 */
																BFALSE;
															}
													}
												else
													{	/* Integrate/a.scm 118 */
														BFALSE;
													}
											}
										else
											{	/* Integrate/a.scm 118 */
												BFALSE;
											}
									}
								else
									{	/* Integrate/a.scm 118 */
										BFALSE;
									}
							}
						}
						{
							obj_t BgL_l3551z00_3490;

							BgL_l3551z00_3490 = CDR(BgL_l3551z00_1040);
							BgL_l3551z00_1040 = BgL_l3551z00_3490;
							goto BgL_zc3anonymousza33642ze3z83_1041;
						}
					}
				else
					{	/* Integrate/a.scm 117 */
						((bool_t) 1);
					}
			}
			if (NULLP(BgL_az00_9))
				{	/* Integrate/a.scm 147 */
					return BNIL;
				}
			else
				{	/* Integrate/a.scm 147 */
					obj_t BgL_head3555z00_1096;

					BgL_head3555z00_1096 = MAKE_PAIR(BNIL, BNIL);
					{
						obj_t BgL_l3553z00_1098;

						obj_t BgL_tail3556z00_1099;

						BgL_l3553z00_1098 = BgL_az00_9;
						BgL_tail3556z00_1099 = BgL_head3555z00_1096;
					BgL_zc3anonymousza33685ze3z83_1100:
						if (NULLP(BgL_l3553z00_1098))
							{	/* Integrate/a.scm 147 */
								return CDR(BgL_head3555z00_1096);
							}
						else
							{	/* Integrate/a.scm 147 */
								obj_t BgL_newtail3557z00_1102;

								{	/* Integrate/a.scm 147 */
									obj_t BgL_arg3688z00_1104;

									{	/* Integrate/a.scm 147 */
										obj_t BgL_az00_1106;

										BgL_az00_1106 = CAR(BgL_l3553z00_1098);
										{
											obj_t BgL_callerz00_1107;

											obj_t BgL_calleez00_1108;

											obj_t BgL_typez00_1109;

											if (PAIRP(BgL_az00_1106))
												{	/* Integrate/a.scm 148 */
													obj_t BgL_cdrzd21679zd2_1119;

													BgL_cdrzd21679zd2_1119 = CDR(BgL_az00_1106);
													if (PAIRP(BgL_cdrzd21679zd2_1119))
														{	/* Integrate/a.scm 148 */
															obj_t BgL_cdrzd21684zd2_1121;

															BgL_cdrzd21684zd2_1121 =
																CDR(BgL_cdrzd21679zd2_1119);
															if (PAIRP(BgL_cdrzd21684zd2_1121))
																{	/* Integrate/a.scm 148 */
																	obj_t BgL_carzd21687zd2_1123;

																	BgL_carzd21687zd2_1123 =
																		CAR(BgL_cdrzd21684zd2_1121);
																	if (PAIRP(BgL_carzd21687zd2_1123))
																		{	/* Integrate/a.scm 148 */
																			if (
																				(CAR(BgL_carzd21687zd2_1123) ==
																					CNST_TABLE_REF(((long) 0))))
																				{	/* Integrate/a.scm 148 */
																					if (NULLP(CDR
																							(BgL_cdrzd21684zd2_1121)))
																						{	/* Integrate/a.scm 148 */
																							BgL_callerz00_1107 =
																								CAR(BgL_az00_1106);
																							BgL_calleez00_1108 =
																								CAR(BgL_cdrzd21679zd2_1119);
																							BgL_typez00_1109 =
																								CDR(BgL_carzd21687zd2_1123);
																							{	/* Integrate/a.scm 150 */
																								BgL_valuez00_bglt
																									BgL_funz00_1142;
																								{
																									BgL_variablez00_bglt
																										BgL_auxz00_3517;
																									BgL_auxz00_3517 =
																										(BgL_variablez00_bglt)
																										(BgL_calleez00_1108);
																									BgL_funz00_1142 =
																										(((BgL_variablez00_bglt)
																											CREF(BgL_auxz00_3517))->
																										BgL_valuez00);
																								}
																								{	/* Integrate/a.scm 154 */
																									obj_t BgL_arg3708z00_1144;

																									{	/* Integrate/a.scm 154 */
																										bool_t BgL_testz00_3520;

																										{	/* Integrate/a.scm 154 */
																											BgL_sfunzf2iinfozf2_bglt
																												BgL_obj3444z00_2113;
																											BgL_obj3444z00_2113 =
																												(BgL_sfunzf2iinfozf2_bglt)
																												(BgL_funz00_1142);
																											{	/* Integrate/a.scm 154 */
																												obj_t BgL_auxz00_3522;

																												{
																													obj_t BgL_auxz00_3523;

																													{	/* Integrate/a.scm 154 */
																														BgL_objectz00_bglt
																															BgL_auxz00_3524;
																														BgL_auxz00_3524 =
																															(BgL_objectz00_bglt)
																															(BgL_obj3444z00_2113);
																														BgL_auxz00_3523 =
																															BGL_OBJECT_WIDENING
																															(BgL_auxz00_3524);
																													}
																													BgL_auxz00_3522 =
																														(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3523))->BgL_tailzd2coercionzd2);
																												}
																												BgL_testz00_3520 =
																													CBOOL
																													(BgL_auxz00_3522);
																											}
																										}
																										if (BgL_testz00_3520)
																											{	/* Integrate/a.scm 154 */
																												BgL_arg3708z00_1144 =
																													CNST_TABLE_REF(((long)
																														0));
																											}
																										else
																											{	/* Integrate/a.scm 154 */
																												BgL_arg3708z00_1144 =
																													BGl_getzd2newzd2kontz00zzintegrate_az00
																													();
																											}
																									}
																									{	/* Integrate/a.scm 152 */
																										obj_t BgL_list3709z00_1145;

																										{	/* Integrate/a.scm 152 */
																											obj_t BgL_arg3710z00_1146;

																											{	/* Integrate/a.scm 152 */
																												obj_t
																													BgL_arg3711z00_1147;
																												BgL_arg3711z00_1147 =
																													MAKE_PAIR
																													(BgL_arg3708z00_1144,
																													BNIL);
																												BgL_arg3710z00_1146 =
																													MAKE_PAIR
																													(BgL_calleez00_1108,
																													BgL_arg3711z00_1147);
																											}
																											BgL_list3709z00_1145 =
																												MAKE_PAIR
																												(BgL_callerz00_1107,
																												BgL_arg3710z00_1146);
																										}
																										BgL_arg3688z00_1104 =
																											BgL_list3709z00_1145;
																									}
																								}
																							}
																						}
																					else
																						{	/* Integrate/a.scm 148 */
																							BgL_arg3688z00_1104 =
																								BgL_az00_1106;
																						}
																				}
																			else
																				{	/* Integrate/a.scm 148 */
																					obj_t BgL_cdrzd21723zd2_1132;

																					BgL_cdrzd21723zd2_1132 =
																						CDR(BgL_cdrzd21679zd2_1119);
																					{	/* Integrate/a.scm 148 */
																						obj_t BgL_carzd21728zd2_1133;

																						BgL_carzd21728zd2_1133 =
																							CAR(BgL_cdrzd21723zd2_1132);
																						if (NULLP(CDR
																								(BgL_cdrzd21723zd2_1132)))
																							{	/* Integrate/a.scm 148 */
																								obj_t BgL_arg3701z00_1135;

																								obj_t BgL_arg3702z00_1136;

																								obj_t BgL_arg3703z00_1137;

																								BgL_arg3701z00_1135 =
																									CAR(BgL_az00_1106);
																								BgL_arg3702z00_1136 =
																									CAR(BgL_cdrzd21679zd2_1119);
																								BgL_arg3703z00_1137 =
																									CAR(BgL_carzd21728zd2_1133);
																								{	/* Integrate/a.scm 148 */
																									obj_t BgL_list3713z00_2107;

																									{	/* Integrate/a.scm 148 */
																										obj_t BgL_arg3714z00_2108;

																										{	/* Integrate/a.scm 148 */
																											obj_t BgL_arg3715z00_2109;

																											BgL_arg3715z00_2109 =
																												MAKE_PAIR
																												(BgL_arg3703z00_1137,
																												BNIL);
																											BgL_arg3714z00_2108 =
																												MAKE_PAIR
																												(BgL_arg3702z00_1136,
																												BgL_arg3715z00_2109);
																										}
																										BgL_list3713z00_2107 =
																											MAKE_PAIR
																											(BgL_arg3701z00_1135,
																											BgL_arg3714z00_2108);
																									}
																									BgL_arg3688z00_1104 =
																										BgL_list3713z00_2107;
																								}
																							}
																						else
																							{	/* Integrate/a.scm 148 */
																								BgL_arg3688z00_1104 =
																									BgL_az00_1106;
																							}
																					}
																				}
																		}
																	else
																		{	/* Integrate/a.scm 148 */
																			BgL_arg3688z00_1104 = BgL_az00_1106;
																		}
																}
															else
																{	/* Integrate/a.scm 148 */
																	BgL_arg3688z00_1104 = BgL_az00_1106;
																}
														}
													else
														{	/* Integrate/a.scm 148 */
															BgL_arg3688z00_1104 = BgL_az00_1106;
														}
												}
											else
												{	/* Integrate/a.scm 148 */
													BgL_arg3688z00_1104 = BgL_az00_1106;
												}
										}
									}
									BgL_newtail3557z00_1102 =
										MAKE_PAIR(BgL_arg3688z00_1104, BNIL);
								}
								SET_CDR(BgL_tail3556z00_1099, BgL_newtail3557z00_1102);
								{
									obj_t BgL_tail3556z00_3552;

									obj_t BgL_l3553z00_3550;

									BgL_l3553z00_3550 = CDR(BgL_l3553z00_1098);
									BgL_tail3556z00_3552 = BgL_newtail3557z00_1102;
									BgL_tail3556z00_1099 = BgL_tail3556z00_3552;
									BgL_l3553z00_1098 = BgL_l3553z00_3550;
									goto BgL_zc3anonymousza33685ze3z83_1100;
								}
							}
					}
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_az00()
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 18 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00,
				BGl_nodezd2Azd2default3561zd2envzd2zzintegrate_az00,
				BGl_nodez00zzast_nodez00, BGl_string4048z00zzintegrate_az00);
		}
	}



/* node-A */
	obj_t BGl_nodezd2Azd2zzintegrate_az00(BgL_nodez00_bglt BgL_nodez00_11,
		BgL_variablez00_bglt BgL_hostz00_12, obj_t BgL_kz00_13, obj_t BgL_az00_14)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 164 */
			{	/* Integrate/a.scm 164 */
				obj_t BgL_method3562z00_2126;

				{	/* Integrate/a.scm 164 */
					BgL_objectz00_bglt BgL_objz00_2127;

					BgL_objz00_2127 = (BgL_objectz00_bglt) (BgL_nodez00_11);
					{	/* Integrate/a.scm 164 */
						long BgL_objzd2classzd2numz00_2128;

						BgL_objzd2classzd2numz00_2128 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2127);
						{	/* Integrate/a.scm 164 */
							obj_t BgL_arg2643z00_2129;

							BgL_arg2643z00_2129 =
								PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
								(int) (((long) 1)));
							{	/* Integrate/a.scm 164 */
								obj_t BgL_arrayz00_2131;

								int BgL_offsetz00_2132;

								BgL_arrayz00_2131 = BgL_arg2643z00_2129;
								BgL_offsetz00_2132 = (int) (BgL_objzd2classzd2numz00_2128);
								{	/* Integrate/a.scm 164 */
									long BgL_offsetz00_2133;

									BgL_offsetz00_2133 =
										((long) (BgL_offsetz00_2132) - OBJECT_TYPE);
									{	/* Integrate/a.scm 164 */
										long BgL_modz00_2134;

										{	/* Integrate/a.scm 164 */
											int BgL_arg2645z00_2135;

											BgL_arg2645z00_2135 = (int) (((long) 16));
											{	/* Integrate/a.scm 164 */
												long BgL_auxz00_3562;

												BgL_auxz00_3562 = (long) (BgL_arg2645z00_2135);
												BgL_modz00_2134 =
													(BgL_offsetz00_2133 / BgL_auxz00_3562);
										}}
										{	/* Integrate/a.scm 164 */
											long BgL_restz00_2136;

											{	/* Integrate/a.scm 164 */
												int BgL_arg2644z00_2137;

												BgL_arg2644z00_2137 = (int) (((long) 16));
												{	/* Integrate/a.scm 164 */
													long BgL_auxz00_3566;

													BgL_auxz00_3566 = (long) (BgL_arg2644z00_2137);
													BgL_restz00_2136 =
														(BgL_offsetz00_2133 % BgL_auxz00_3566);
											}}
											{	/* Integrate/a.scm 164 */

												BgL_method3562z00_2126 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2131,
														(int) (BgL_modz00_2134)), (int) (BgL_restz00_2136));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3562z00_2126) (BgL_method3562z00_2126,
					(obj_t) (BgL_nodez00_11),
					(obj_t) (BgL_hostz00_12), BgL_kz00_13, BgL_az00_14, BEOA);
			}
		}
	}



/* _node-A */
	obj_t BGl__nodezd2Azd2zzintegrate_az00(obj_t BgL_envz00_3061,
		obj_t BgL_nodez00_3062, obj_t BgL_hostz00_3063, obj_t BgL_kz00_3064,
		obj_t BgL_az00_3065)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 164 */
			return
				BGl_nodezd2Azd2zzintegrate_az00(
				(BgL_nodez00_bglt) (BgL_nodez00_3062),
				(BgL_variablez00_bglt) (BgL_hostz00_3063), BgL_kz00_3064,
				BgL_az00_3065);
		}
	}



/* node-A-default3561 */
	obj_t BGl_nodezd2Azd2default3561z00zzintegrate_az00(BgL_nodez00_bglt
		BgL_nodez00_15, BgL_variablez00_bglt BgL_hostz00_16, obj_t BgL_kz00_17,
		obj_t BgL_az00_18)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 18 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
				BGl_string4049z00zzintegrate_az00, (obj_t) (BgL_nodez00_15));
		}
	}



/* _node-A-default3561 */
	obj_t BGl__nodezd2Azd2default3561z00zzintegrate_az00(obj_t BgL_envz00_3069,
		obj_t BgL_nodez00_3070, obj_t BgL_hostz00_3071, obj_t BgL_kz00_3072,
		obj_t BgL_az00_3073)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 18 */
			return
				BGl_nodezd2Azd2default3561z00zzintegrate_az00(
				(BgL_nodez00_bglt) (BgL_nodez00_3070),
				(BgL_variablez00_bglt) (BgL_hostz00_3071), BgL_kz00_3072,
				BgL_az00_3073);
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_az00()
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 18 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_atomz00zzast_nodez00,
				BGl_proc4050z00zzintegrate_az00, BGl_string4048z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_kwotez00zzast_nodez00,
				BGl_proc4051z00zzintegrate_az00, BGl_string4048z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_varz00zzast_nodez00,
				BGl_proc4052z00zzintegrate_az00, BGl_string4048z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_closurez00zzast_nodez00,
				BGl_proc4053z00zzintegrate_az00, BGl_string4048z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_sequencez00zzast_nodez00,
				BGl_proc4054z00zzintegrate_az00, BGl_string4048z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_appz00zzast_nodez00,
				BGl_proc4055z00zzintegrate_az00, BGl_string4048z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc4056z00zzintegrate_az00, BGl_string4048z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_funcallz00zzast_nodez00,
				BGl_proc4057z00zzintegrate_az00, BGl_string4048z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_externz00zzast_nodez00,
				BGl_proc4058z00zzintegrate_az00, BGl_string4048z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_castz00zzast_nodez00,
				BGl_proc4059z00zzintegrate_az00, BGl_string4048z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_setqz00zzast_nodez00,
				BGl_proc4060z00zzintegrate_az00, BGl_string4048z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_conditionalz00zzast_nodez00,
				BGl_proc4061z00zzintegrate_az00, BGl_string4048z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_failz00zzast_nodez00,
				BGl_proc4062z00zzintegrate_az00, BGl_string4048z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_selectz00zzast_nodez00,
				BGl_proc4063z00zzintegrate_az00, BGl_string4048z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc4064z00zzintegrate_az00, BGl_string4048z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc4065z00zzintegrate_az00, BGl_string4048z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc4066z00zzintegrate_az00,
				BGl_string4048z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc4067z00zzintegrate_az00,
				BGl_string4048z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc4068z00zzintegrate_az00, BGl_string4048z00zzintegrate_az00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc4069z00zzintegrate_az00,
				BGl_string4048z00zzintegrate_az00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2Azd2envz00zzintegrate_az00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc4070z00zzintegrate_az00, BGl_string4048z00zzintegrate_az00);
		}
	}



/* node-A-box-ref3606 */
	obj_t BGl_nodezd2Azd2boxzd2ref3606zd2zzintegrate_az00(obj_t BgL_envz00_3095,
		obj_t BgL_nodez00_3096, obj_t BgL_hostz00_3097, obj_t BgL_kz00_3098,
		obj_t BgL_az00_3099)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 412 */
			return BgL_az00_3099;
		}
	}



/* node-A-box-set!3604 */
	obj_t BGl_nodezd2Azd2boxzd2setz123604zc0zzintegrate_az00(obj_t
		BgL_envz00_3100, obj_t BgL_nodez00_3101, obj_t BgL_hostz00_3102,
		obj_t BgL_kz00_3103, obj_t BgL_az00_3104)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 405 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1956;

				obj_t BgL_hostz00_1957;

				obj_t BgL_kz00_1958;

				obj_t BgL_az00_1959;

				BgL_nodez00_1956 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_3101);
				BgL_hostz00_1957 = BgL_hostz00_3102;
				BgL_kz00_1958 = BgL_kz00_3103;
				BgL_az00_1959 = BgL_az00_3104;
				{	/* Integrate/a.scm 406 */
					BgL_nodez00_bglt BgL_arg3970z00_3022;

					obj_t BgL_arg3972z00_3023;

					BgL_arg3970z00_3022 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1956))->BgL_valuez00);
					{	/* Integrate/a.scm 406 */
						obj_t BgL_arg3973z00_3024;

						BgL_typez00_bglt BgL_arg3974z00_3025;

						BgL_arg3973z00_3024 = BGl_getzd2newzd2kontz00zzintegrate_az00();
						{	/* Integrate/a.scm 406 */
							BgL_nodez00_bglt BgL_arg3975z00_3026;

							BgL_arg3975z00_3026 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1956))->
								BgL_valuez00);
							BgL_arg3974z00_3025 =
								BGl_getzd2typezd2zztype_typeofz00(BgL_arg3975z00_3026);
						}
						BgL_arg3972z00_3023 =
							MAKE_PAIR(BgL_arg3973z00_3024, (obj_t) (BgL_arg3974z00_3025));
					}
					{	/* Integrate/a.scm 406 */
						BgL_variablez00_bglt BgL_hostz00_3030;

						BgL_hostz00_3030 = (BgL_variablez00_bglt) (BgL_hostz00_1957);
						{	/* Integrate/a.scm 406 */
							obj_t BgL_method3562z00_3033;

							{	/* Integrate/a.scm 406 */
								BgL_objectz00_bglt BgL_objz00_3034;

								BgL_objz00_3034 = (BgL_objectz00_bglt) (BgL_arg3970z00_3022);
								{	/* Integrate/a.scm 406 */
									long BgL_objzd2classzd2numz00_3035;

									BgL_objzd2classzd2numz00_3035 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3034);
									{	/* Integrate/a.scm 406 */
										obj_t BgL_arg2643z00_3036;

										BgL_arg2643z00_3036 =
											PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
											(int) (((long) 1)));
										{	/* Integrate/a.scm 406 */
											obj_t BgL_arrayz00_3038;

											int BgL_offsetz00_3039;

											BgL_arrayz00_3038 = BgL_arg2643z00_3036;
											BgL_offsetz00_3039 =
												(int) (BgL_objzd2classzd2numz00_3035);
											{	/* Integrate/a.scm 406 */
												long BgL_offsetz00_3040;

												BgL_offsetz00_3040 =
													((long) (BgL_offsetz00_3039) - OBJECT_TYPE);
												{	/* Integrate/a.scm 406 */
													long BgL_modz00_3041;

													{	/* Integrate/a.scm 406 */
														int BgL_arg2645z00_3042;

														BgL_arg2645z00_3042 = (int) (((long) 16));
														{	/* Integrate/a.scm 406 */
															long BgL_auxz00_3622;

															BgL_auxz00_3622 = (long) (BgL_arg2645z00_3042);
															BgL_modz00_3041 =
																(BgL_offsetz00_3040 / BgL_auxz00_3622);
													}}
													{	/* Integrate/a.scm 406 */
														long BgL_restz00_3043;

														{	/* Integrate/a.scm 406 */
															int BgL_arg2644z00_3044;

															BgL_arg2644z00_3044 = (int) (((long) 16));
															{	/* Integrate/a.scm 406 */
																long BgL_auxz00_3626;

																BgL_auxz00_3626 = (long) (BgL_arg2644z00_3044);
																BgL_restz00_3043 =
																	(BgL_offsetz00_3040 % BgL_auxz00_3626);
														}}
														{	/* Integrate/a.scm 406 */

															BgL_method3562z00_3033 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3038,
																	(int) (BgL_modz00_3041)),
																(int) (BgL_restz00_3043));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3562z00_3033) (BgL_method3562z00_3033,
								(obj_t) (BgL_arg3970z00_3022),
								(obj_t) (BgL_hostz00_3030), BgL_arg3972z00_3023, BgL_az00_1959,
								BEOA);
						}
					}
				}
			}
		}
	}



/* node-A-make-box3601 */
	obj_t BGl_nodezd2Azd2makezd2box3601zd2zzintegrate_az00(obj_t BgL_envz00_3105,
		obj_t BgL_nodez00_3106, obj_t BgL_hostz00_3107, obj_t BgL_kz00_3108,
		obj_t BgL_az00_3109)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 398 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1942;

				obj_t BgL_hostz00_1943;

				obj_t BgL_kz00_1944;

				obj_t BgL_az00_1945;

				BgL_nodez00_1942 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_3106);
				BgL_hostz00_1943 = BgL_hostz00_3107;
				BgL_kz00_1944 = BgL_kz00_3108;
				BgL_az00_1945 = BgL_az00_3109;
				{	/* Integrate/a.scm 399 */
					BgL_nodez00_bglt BgL_arg3964z00_2985;

					obj_t BgL_arg3965z00_2986;

					BgL_arg3964z00_2985 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1942))->BgL_valuez00);
					{	/* Integrate/a.scm 399 */
						obj_t BgL_arg3966z00_2987;

						BgL_typez00_bglt BgL_arg3967z00_2988;

						BgL_arg3966z00_2987 = BGl_getzd2newzd2kontz00zzintegrate_az00();
						{	/* Integrate/a.scm 399 */
							BgL_nodez00_bglt BgL_arg3968z00_2989;

							BgL_arg3968z00_2989 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1942))->
								BgL_valuez00);
							BgL_arg3967z00_2988 =
								BGl_getzd2typezd2zztype_typeofz00(BgL_arg3968z00_2989);
						}
						BgL_arg3965z00_2986 =
							MAKE_PAIR(BgL_arg3966z00_2987, (obj_t) (BgL_arg3967z00_2988));
					}
					{	/* Integrate/a.scm 399 */
						BgL_variablez00_bglt BgL_hostz00_2993;

						BgL_hostz00_2993 = (BgL_variablez00_bglt) (BgL_hostz00_1943);
						{	/* Integrate/a.scm 399 */
							obj_t BgL_method3562z00_2996;

							{	/* Integrate/a.scm 399 */
								BgL_objectz00_bglt BgL_objz00_2997;

								BgL_objz00_2997 = (BgL_objectz00_bglt) (BgL_arg3964z00_2985);
								{	/* Integrate/a.scm 399 */
									long BgL_objzd2classzd2numz00_2998;

									BgL_objzd2classzd2numz00_2998 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2997);
									{	/* Integrate/a.scm 399 */
										obj_t BgL_arg2643z00_2999;

										BgL_arg2643z00_2999 =
											PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
											(int) (((long) 1)));
										{	/* Integrate/a.scm 399 */
											obj_t BgL_arrayz00_3001;

											int BgL_offsetz00_3002;

											BgL_arrayz00_3001 = BgL_arg2643z00_2999;
											BgL_offsetz00_3002 =
												(int) (BgL_objzd2classzd2numz00_2998);
											{	/* Integrate/a.scm 399 */
												long BgL_offsetz00_3003;

												BgL_offsetz00_3003 =
													((long) (BgL_offsetz00_3002) - OBJECT_TYPE);
												{	/* Integrate/a.scm 399 */
													long BgL_modz00_3004;

													{	/* Integrate/a.scm 399 */
														int BgL_arg2645z00_3005;

														BgL_arg2645z00_3005 = (int) (((long) 16));
														{	/* Integrate/a.scm 399 */
															long BgL_auxz00_3653;

															BgL_auxz00_3653 = (long) (BgL_arg2645z00_3005);
															BgL_modz00_3004 =
																(BgL_offsetz00_3003 / BgL_auxz00_3653);
													}}
													{	/* Integrate/a.scm 399 */
														long BgL_restz00_3006;

														{	/* Integrate/a.scm 399 */
															int BgL_arg2644z00_3007;

															BgL_arg2644z00_3007 = (int) (((long) 16));
															{	/* Integrate/a.scm 399 */
																long BgL_auxz00_3657;

																BgL_auxz00_3657 = (long) (BgL_arg2644z00_3007);
																BgL_restz00_3006 =
																	(BgL_offsetz00_3003 % BgL_auxz00_3657);
														}}
														{	/* Integrate/a.scm 399 */

															BgL_method3562z00_2996 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3001,
																	(int) (BgL_modz00_3004)),
																(int) (BgL_restz00_3006));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3562z00_2996) (BgL_method3562z00_2996,
								(obj_t) (BgL_arg3964z00_2985),
								(obj_t) (BgL_hostz00_2993), BgL_arg3965z00_2986, BgL_az00_1945,
								BEOA);
						}
					}
				}
			}
		}
	}



/* node-A-jump-ex-it3599 */
	obj_t BGl_nodezd2Azd2jumpzd2exzd2it3599z00zzintegrate_az00(obj_t
		BgL_envz00_3110, obj_t BgL_nodez00_3111, obj_t BgL_hostz00_3112,
		obj_t BgL_kz00_3113, obj_t BgL_az00_3114)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 388 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1922;

				obj_t BgL_hostz00_1923;

				obj_t BgL_kz00_1924;

				obj_t BgL_az00_1925;

				BgL_nodez00_1922 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_3111);
				BgL_hostz00_1923 = BgL_hostz00_3112;
				BgL_kz00_1924 = BgL_kz00_3113;
				BgL_az00_1925 = BgL_az00_3114;
				{	/* Integrate/a.scm 390 */
					BgL_nodez00_bglt BgL_arg3950z00_1929;

					obj_t BgL_arg3951z00_1930;

					obj_t BgL_arg3953z00_1931;

					BgL_arg3950z00_1929 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1922))->
						BgL_exitz00);
					{	/* Integrate/a.scm 392 */
						obj_t BgL_arg3954z00_1932;

						BgL_typez00_bglt BgL_arg3955z00_1933;

						BgL_arg3954z00_1932 = BGl_getzd2newzd2kontz00zzintegrate_az00();
						{	/* Integrate/a.scm 392 */
							BgL_nodez00_bglt BgL_arg3956z00_1934;

							BgL_arg3956z00_1934 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1922))->
								BgL_exitz00);
							BgL_arg3955z00_1933 =
								BGl_getzd2typezd2zztype_typeofz00(BgL_arg3956z00_1934);
						}
						BgL_arg3951z00_1930 =
							MAKE_PAIR(BgL_arg3954z00_1932, (obj_t) (BgL_arg3955z00_1933));
					}
					{	/* Integrate/a.scm 393 */
						BgL_nodez00_bglt BgL_arg3958z00_1935;

						obj_t BgL_arg3959z00_1936;

						BgL_arg3958z00_1935 =
							(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1922))->
							BgL_valuez00);
						{	/* Integrate/a.scm 393 */
							obj_t BgL_arg3960z00_1937;

							BgL_typez00_bglt BgL_arg3961z00_1938;

							BgL_arg3960z00_1937 = BGl_getzd2newzd2kontz00zzintegrate_az00();
							{	/* Integrate/a.scm 393 */
								BgL_nodez00_bglt BgL_arg3962z00_1939;

								BgL_arg3962z00_1939 =
									(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1922))->
									BgL_valuez00);
								BgL_arg3961z00_1938 =
									BGl_getzd2typezd2zztype_typeofz00(BgL_arg3962z00_1939);
							}
							BgL_arg3959z00_1936 =
								MAKE_PAIR(BgL_arg3960z00_1937, (obj_t) (BgL_arg3961z00_1938));
						}
						{	/* Integrate/a.scm 393 */
							BgL_variablez00_bglt BgL_hostz00_2927;

							BgL_hostz00_2927 = (BgL_variablez00_bglt) (BgL_hostz00_1923);
							{	/* Integrate/a.scm 393 */
								obj_t BgL_method3562z00_2930;

								{	/* Integrate/a.scm 393 */
									BgL_objectz00_bglt BgL_objz00_2931;

									BgL_objz00_2931 = (BgL_objectz00_bglt) (BgL_arg3958z00_1935);
									{	/* Integrate/a.scm 393 */
										long BgL_objzd2classzd2numz00_2932;

										BgL_objzd2classzd2numz00_2932 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2931);
										{	/* Integrate/a.scm 393 */
											obj_t BgL_arg2643z00_2933;

											BgL_arg2643z00_2933 =
												PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
												(int) (((long) 1)));
											{	/* Integrate/a.scm 393 */
												obj_t BgL_arrayz00_2935;

												int BgL_offsetz00_2936;

												BgL_arrayz00_2935 = BgL_arg2643z00_2933;
												BgL_offsetz00_2936 =
													(int) (BgL_objzd2classzd2numz00_2932);
												{	/* Integrate/a.scm 393 */
													long BgL_offsetz00_2937;

													BgL_offsetz00_2937 =
														((long) (BgL_offsetz00_2936) - OBJECT_TYPE);
													{	/* Integrate/a.scm 393 */
														long BgL_modz00_2938;

														{	/* Integrate/a.scm 393 */
															int BgL_arg2645z00_2939;

															BgL_arg2645z00_2939 = (int) (((long) 16));
															{	/* Integrate/a.scm 393 */
																long BgL_auxz00_3690;

																BgL_auxz00_3690 = (long) (BgL_arg2645z00_2939);
																BgL_modz00_2938 =
																	(BgL_offsetz00_2937 / BgL_auxz00_3690);
														}}
														{	/* Integrate/a.scm 393 */
															long BgL_restz00_2940;

															{	/* Integrate/a.scm 393 */
																int BgL_arg2644z00_2941;

																BgL_arg2644z00_2941 = (int) (((long) 16));
																{	/* Integrate/a.scm 393 */
																	long BgL_auxz00_3694;

																	BgL_auxz00_3694 =
																		(long) (BgL_arg2644z00_2941);
																	BgL_restz00_2940 =
																		(BgL_offsetz00_2937 % BgL_auxz00_3694);
															}}
															{	/* Integrate/a.scm 393 */

																BgL_method3562z00_2930 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2935,
																		(int) (BgL_modz00_2938)),
																	(int) (BgL_restz00_2940));
								}}}}}}}}
								BgL_arg3953z00_1931 =
									PROCEDURE_ENTRY(BgL_method3562z00_2930)
									(BgL_method3562z00_2930, (obj_t) (BgL_arg3958z00_1935),
									(obj_t) (BgL_hostz00_2927), BgL_arg3959z00_1936,
									BgL_az00_1925, BEOA);
					}}}
					{	/* Integrate/a.scm 390 */
						BgL_variablez00_bglt BgL_hostz00_2956;

						BgL_hostz00_2956 = (BgL_variablez00_bglt) (BgL_hostz00_1923);
						{	/* Integrate/a.scm 390 */
							obj_t BgL_method3562z00_2959;

							{	/* Integrate/a.scm 390 */
								BgL_objectz00_bglt BgL_objz00_2960;

								BgL_objz00_2960 = (BgL_objectz00_bglt) (BgL_arg3950z00_1929);
								{	/* Integrate/a.scm 390 */
									long BgL_objzd2classzd2numz00_2961;

									BgL_objzd2classzd2numz00_2961 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2960);
									{	/* Integrate/a.scm 390 */
										obj_t BgL_arg2643z00_2962;

										BgL_arg2643z00_2962 =
											PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
											(int) (((long) 1)));
										{	/* Integrate/a.scm 390 */
											obj_t BgL_arrayz00_2964;

											int BgL_offsetz00_2965;

											BgL_arrayz00_2964 = BgL_arg2643z00_2962;
											BgL_offsetz00_2965 =
												(int) (BgL_objzd2classzd2numz00_2961);
											{	/* Integrate/a.scm 390 */
												long BgL_offsetz00_2966;

												BgL_offsetz00_2966 =
													((long) (BgL_offsetz00_2965) - OBJECT_TYPE);
												{	/* Integrate/a.scm 390 */
													long BgL_modz00_2967;

													{	/* Integrate/a.scm 390 */
														int BgL_arg2645z00_2968;

														BgL_arg2645z00_2968 = (int) (((long) 16));
														{	/* Integrate/a.scm 390 */
															long BgL_auxz00_3714;

															BgL_auxz00_3714 = (long) (BgL_arg2645z00_2968);
															BgL_modz00_2967 =
																(BgL_offsetz00_2966 / BgL_auxz00_3714);
													}}
													{	/* Integrate/a.scm 390 */
														long BgL_restz00_2969;

														{	/* Integrate/a.scm 390 */
															int BgL_arg2644z00_2970;

															BgL_arg2644z00_2970 = (int) (((long) 16));
															{	/* Integrate/a.scm 390 */
																long BgL_auxz00_3718;

																BgL_auxz00_3718 = (long) (BgL_arg2644z00_2970);
																BgL_restz00_2969 =
																	(BgL_offsetz00_2966 % BgL_auxz00_3718);
														}}
														{	/* Integrate/a.scm 390 */

															BgL_method3562z00_2959 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2964,
																	(int) (BgL_modz00_2967)),
																(int) (BgL_restz00_2969));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3562z00_2959) (BgL_method3562z00_2959,
								(obj_t) (BgL_arg3950z00_1929),
								(obj_t) (BgL_hostz00_2956), BgL_arg3951z00_1930,
								BgL_arg3953z00_1931, BEOA);
						}
					}
				}
			}
		}
	}



/* node-A-set-ex-it3597 */
	obj_t BGl_nodezd2Azd2setzd2exzd2it3597z00zzintegrate_az00(obj_t
		BgL_envz00_3115, obj_t BgL_nodez00_3116, obj_t BgL_hostz00_3117,
		obj_t BgL_kz00_3118, obj_t BgL_az00_3119)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 367 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1881;

				obj_t BgL_hostz00_1882;

				obj_t BgL_kz00_1883;

				obj_t BgL_az00_1884;

				BgL_nodez00_1881 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_3116);
				BgL_hostz00_1882 = BgL_hostz00_3117;
				BgL_kz00_1883 = BgL_kz00_3118;
				BgL_az00_1884 = BgL_az00_3119;
				{	/* Integrate/a.scm 373 */
					BgL_variablez00_bglt BgL_exitz00_1888;

					{	/* Integrate/a.scm 373 */
						BgL_varz00_bglt BgL_obj2155z00_2883;

						BgL_obj2155z00_2883 =
							(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1881))->
							BgL_varz00);
						BgL_exitz00_1888 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2883))->BgL_variablez00);
					}
					{	/* Integrate/a.scm 373 */
						obj_t BgL_hdlgz00_1889;

						{	/* Integrate/a.scm 374 */
							BgL_sexitz00_bglt BgL_obj2058z00_2885;

							BgL_obj2058z00_2885 =
								(BgL_sexitz00_bglt) (
								(((BgL_variablez00_bglt) CREF(BgL_exitz00_1888))->
									BgL_valuez00));
							BgL_hdlgz00_1889 =
								(((BgL_sexitz00_bglt) CREF(BgL_obj2058z00_2885))->
								BgL_handlerz00);
						}
						{	/* Integrate/a.scm 374 */

							{	/* Integrate/a.scm 375 */
								BgL_sexitz00_bglt BgL_obj3538z00_1890;

								BgL_obj3538z00_1890 =
									((BgL_sexitz00_bglt)
									(BgL_sexitz00_bglt) (
										(((BgL_variablez00_bglt) CREF(BgL_exitz00_1888))->
											BgL_valuez00)));
								{	/* Integrate/a.scm 375 */
									obj_t BgL_auxz00_3740;

									BgL_objectz00_bglt BgL_auxz00_3738;

									BgL_auxz00_3740 =
										BGl_wideningzd2sexitzf2Iinfoz20zzintegrate_infoz00(BUNSPEC,
										BUNSPEC, ((bool_t) 0), ((bool_t) 0));
									BgL_auxz00_3738 = (BgL_objectz00_bglt) (BgL_obj3538z00_1890);
									BGL_OBJECT_WIDENING_SET(BgL_auxz00_3738, BgL_auxz00_3740);
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_obj3538z00_1890),
									BGl_classzd2numzd2zz__objectz00
									(BGl_sexitzf2Iinfozf2zzintegrate_infoz00));
								BgL_obj3538z00_1890;
							}
							{	/* Integrate/a.scm 376 */
								bool_t BgL_testz00_3746;

								{	/* Integrate/a.scm 376 */
									BgL_sexitz00_bglt BgL_obj2061z00_2890;

									BgL_obj2061z00_2890 =
										(BgL_sexitz00_bglt) (
										(((BgL_variablez00_bglt) CREF(BgL_exitz00_1888))->
											BgL_valuez00));
									BgL_testz00_3746 =
										(((BgL_sexitz00_bglt) CREF(BgL_obj2061z00_2890))->
										BgL_detachedzf3zf3);
								}
								if (BgL_testz00_3746)
									{	/* Integrate/a.scm 376 */
										return BgL_az00_1884;
									}
								else
									{	/* Integrate/a.scm 377 */
										obj_t BgL_call1z00_1894;

										obj_t BgL_call2z00_1895;

										{	/* Integrate/a.scm 377 */
											obj_t BgL_arg3932z00_1903;

											{	/* Integrate/a.scm 377 */
												obj_t BgL_arg3933z00_1904;

												{	/* Integrate/a.scm 377 */
													obj_t BgL_arg3937z00_1908;

													BgL_typez00_bglt BgL_arg3938z00_1909;

													BgL_arg3937z00_1908 =
														BGl_getzd2newzd2kontz00zzintegrate_az00();
													BgL_arg3938z00_1909 =
														BGl_getzd2typezd2zztype_typeofz00(
														(BgL_nodez00_bglt) (BgL_nodez00_1881));
													BgL_arg3933z00_1904 =
														MAKE_PAIR(BgL_arg3937z00_1908,
														(obj_t) (BgL_arg3938z00_1909));
												}
												{	/* Integrate/a.scm 377 */
													obj_t BgL_list3935z00_1906;

													{	/* Integrate/a.scm 377 */
														obj_t BgL_arg3936z00_1907;

														BgL_arg3936z00_1907 = MAKE_PAIR(BNIL, BNIL);
														BgL_list3935z00_1906 =
															MAKE_PAIR(BgL_arg3933z00_1904,
															BgL_arg3936z00_1907);
													}
													BgL_arg3932z00_1903 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_hdlgz00_1889, BgL_list3935z00_1906);
												}
											}
											BgL_call1z00_1894 =
												MAKE_PAIR(BgL_hdlgz00_1889, BgL_arg3932z00_1903);
										}
										{	/* Integrate/a.scm 378 */
											obj_t BgL_arg3939z00_1910;

											{	/* Integrate/a.scm 378 */
												obj_t BgL_arg3940z00_1911;

												{	/* Integrate/a.scm 378 */
													obj_t BgL_arg3944z00_1915;

													BgL_typez00_bglt BgL_arg3945z00_1916;

													BgL_arg3944z00_1915 =
														BGl_getzd2newzd2kontz00zzintegrate_az00();
													BgL_arg3945z00_1916 =
														BGl_getzd2typezd2zztype_typeofz00(
														(BgL_nodez00_bglt) (BgL_nodez00_1881));
													BgL_arg3940z00_1911 =
														MAKE_PAIR(BgL_arg3944z00_1915,
														(obj_t) (BgL_arg3945z00_1916));
												}
												{	/* Integrate/a.scm 378 */
													obj_t BgL_list3942z00_1913;

													{	/* Integrate/a.scm 378 */
														obj_t BgL_arg3943z00_1914;

														BgL_arg3943z00_1914 = MAKE_PAIR(BNIL, BNIL);
														BgL_list3942z00_1913 =
															MAKE_PAIR(BgL_arg3940z00_1911,
															BgL_arg3943z00_1914);
													}
													BgL_arg3939z00_1910 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_hdlgz00_1889, BgL_list3942z00_1913);
												}
											}
											BgL_call2z00_1895 =
												MAKE_PAIR(BgL_hdlgz00_1889, BgL_arg3939z00_1910);
										}
										{	/* Integrate/a.scm 379 */
											BgL_nodez00_bglt BgL_arg3925z00_1896;

											obj_t BgL_arg3926z00_1897;

											obj_t BgL_arg3927z00_1898;

											BgL_arg3925z00_1896 =
												(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1881))->
												BgL_bodyz00);
											{	/* Integrate/a.scm 381 */
												obj_t BgL_arg3928z00_1899;

												BgL_typez00_bglt BgL_arg3929z00_1900;

												BgL_arg3928z00_1899 =
													BGl_getzd2newzd2kontz00zzintegrate_az00();
												{	/* Integrate/a.scm 381 */
													BgL_nodez00_bglt BgL_arg3930z00_1901;

													BgL_arg3930z00_1901 =
														(((BgL_setzd2exzd2itz00_bglt)
															CREF(BgL_nodez00_1881))->BgL_bodyz00);
													BgL_arg3929z00_1900 =
														BGl_getzd2typezd2zztype_typeofz00
														(BgL_arg3930z00_1901);
												}
												BgL_arg3926z00_1897 =
													MAKE_PAIR(BgL_arg3928z00_1899,
													(obj_t) (BgL_arg3929z00_1900));
											}
											{	/* Integrate/a.scm 382 */
												obj_t BgL_arg3931z00_1902;

												BgL_arg3931z00_1902 =
													MAKE_PAIR(BgL_call2z00_1895, BgL_az00_1884);
												BgL_arg3927z00_1898 =
													MAKE_PAIR(BgL_call1z00_1894, BgL_arg3931z00_1902);
											}
											{	/* Integrate/a.scm 379 */
												BgL_variablez00_bglt BgL_hostz00_2894;

												BgL_hostz00_2894 =
													(BgL_variablez00_bglt) (BgL_hostz00_1882);
												{	/* Integrate/a.scm 379 */
													obj_t BgL_method3562z00_2897;

													{	/* Integrate/a.scm 379 */
														BgL_objectz00_bglt BgL_objz00_2898;

														BgL_objz00_2898 =
															(BgL_objectz00_bglt) (BgL_arg3925z00_1896);
														{	/* Integrate/a.scm 379 */
															long BgL_objzd2classzd2numz00_2899;

															BgL_objzd2classzd2numz00_2899 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2898);
															{	/* Integrate/a.scm 379 */
																obj_t BgL_arg2643z00_2900;

																BgL_arg2643z00_2900 =
																	PROCEDURE_REF
																	(BGl_nodezd2Azd2envz00zzintegrate_az00,
																	(int) (((long) 1)));
																{	/* Integrate/a.scm 379 */
																	obj_t BgL_arrayz00_2902;

																	int BgL_offsetz00_2903;

																	BgL_arrayz00_2902 = BgL_arg2643z00_2900;
																	BgL_offsetz00_2903 =
																		(int) (BgL_objzd2classzd2numz00_2899);
																	{	/* Integrate/a.scm 379 */
																		long BgL_offsetz00_2904;

																		BgL_offsetz00_2904 =
																			(
																			(long) (BgL_offsetz00_2903) -
																			OBJECT_TYPE);
																		{	/* Integrate/a.scm 379 */
																			long BgL_modz00_2905;

																			{	/* Integrate/a.scm 379 */
																				int BgL_arg2645z00_2906;

																				BgL_arg2645z00_2906 =
																					(int) (((long) 16));
																				{	/* Integrate/a.scm 379 */
																					long BgL_auxz00_3785;

																					BgL_auxz00_3785 =
																						(long) (BgL_arg2645z00_2906);
																					BgL_modz00_2905 =
																						(BgL_offsetz00_2904 /
																						BgL_auxz00_3785);
																			}}
																			{	/* Integrate/a.scm 379 */
																				long BgL_restz00_2907;

																				{	/* Integrate/a.scm 379 */
																					int BgL_arg2644z00_2908;

																					BgL_arg2644z00_2908 =
																						(int) (((long) 16));
																					{	/* Integrate/a.scm 379 */
																						long BgL_auxz00_3789;

																						BgL_auxz00_3789 =
																							(long) (BgL_arg2644z00_2908);
																						BgL_restz00_2907 =
																							(BgL_offsetz00_2904 %
																							BgL_auxz00_3789);
																				}}
																				{	/* Integrate/a.scm 379 */

																					BgL_method3562z00_2897 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2902,
																							(int) (BgL_modz00_2905)),
																						(int) (BgL_restz00_2907));
													}}}}}}}}
													return
														PROCEDURE_ENTRY(BgL_method3562z00_2897)
														(BgL_method3562z00_2897,
														(obj_t) (BgL_arg3925z00_1896),
														(obj_t) (BgL_hostz00_2894), BgL_arg3926z00_1897,
														BgL_arg3927z00_1898, BEOA);
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



/* node-A-let-var3595 */
	obj_t BGl_nodezd2Azd2letzd2var3595zd2zzintegrate_az00(obj_t BgL_envz00_3120,
		obj_t BgL_nodez00_3121, obj_t BgL_hostz00_3122, obj_t BgL_kz00_3123,
		obj_t BgL_az00_3124)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 348 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1853;

				obj_t BgL_hostz00_1854;

				obj_t BgL_kz00_1855;

				obj_t BgL_az00_1856;

				BgL_nodez00_1853 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_3121);
				BgL_hostz00_1854 = BgL_hostz00_3122;
				BgL_kz00_1855 = BgL_kz00_3123;
				BgL_az00_1856 = BgL_az00_3124;
				{	/* Integrate/a.scm 350 */
					obj_t BgL_g3534z00_1860;

					BgL_g3534z00_1860 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1853))->BgL_bindingsz00);
					{
						obj_t BgL_bindingsz00_1862;

						obj_t BgL_az00_1863;

						BgL_bindingsz00_1862 = BgL_g3534z00_1860;
						BgL_az00_1863 = BgL_az00_1856;
					BgL_zc3anonymousza33911ze3z83_1864:
						if (NULLP(BgL_bindingsz00_1862))
							{	/* Integrate/a.scm 353 */
								BgL_nodez00_bglt BgL_arg3913z00_1866;

								BgL_arg3913z00_1866 =
									(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1853))->
									BgL_bodyz00);
								{	/* Integrate/a.scm 353 */
									BgL_variablez00_bglt BgL_hostz00_2817;

									BgL_hostz00_2817 = (BgL_variablez00_bglt) (BgL_hostz00_1854);
									{	/* Integrate/a.scm 353 */
										obj_t BgL_method3562z00_2820;

										{	/* Integrate/a.scm 353 */
											BgL_objectz00_bglt BgL_objz00_2821;

											BgL_objz00_2821 =
												(BgL_objectz00_bglt) (BgL_arg3913z00_1866);
											{	/* Integrate/a.scm 353 */
												long BgL_objzd2classzd2numz00_2822;

												BgL_objzd2classzd2numz00_2822 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2821);
												{	/* Integrate/a.scm 353 */
													obj_t BgL_arg2643z00_2823;

													BgL_arg2643z00_2823 =
														PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
														(int) (((long) 1)));
													{	/* Integrate/a.scm 353 */
														obj_t BgL_arrayz00_2825;

														int BgL_offsetz00_2826;

														BgL_arrayz00_2825 = BgL_arg2643z00_2823;
														BgL_offsetz00_2826 =
															(int) (BgL_objzd2classzd2numz00_2822);
														{	/* Integrate/a.scm 353 */
															long BgL_offsetz00_2827;

															BgL_offsetz00_2827 =
																((long) (BgL_offsetz00_2826) - OBJECT_TYPE);
															{	/* Integrate/a.scm 353 */
																long BgL_modz00_2828;

																{	/* Integrate/a.scm 353 */
																	int BgL_arg2645z00_2829;

																	BgL_arg2645z00_2829 = (int) (((long) 16));
																	{	/* Integrate/a.scm 353 */
																		long BgL_auxz00_3814;

																		BgL_auxz00_3814 =
																			(long) (BgL_arg2645z00_2829);
																		BgL_modz00_2828 =
																			(BgL_offsetz00_2827 / BgL_auxz00_3814);
																}}
																{	/* Integrate/a.scm 353 */
																	long BgL_restz00_2830;

																	{	/* Integrate/a.scm 353 */
																		int BgL_arg2644z00_2831;

																		BgL_arg2644z00_2831 = (int) (((long) 16));
																		{	/* Integrate/a.scm 353 */
																			long BgL_auxz00_3818;

																			BgL_auxz00_3818 =
																				(long) (BgL_arg2644z00_2831);
																			BgL_restz00_2830 =
																				(BgL_offsetz00_2827 % BgL_auxz00_3818);
																	}}
																	{	/* Integrate/a.scm 353 */

																		BgL_method3562z00_2820 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2825,
																				(int) (BgL_modz00_2828)),
																			(int) (BgL_restz00_2830));
										}}}}}}}}
										return
											PROCEDURE_ENTRY(BgL_method3562z00_2820)
											(BgL_method3562z00_2820, (obj_t) (BgL_arg3913z00_1866),
											(obj_t) (BgL_hostz00_2817), BgL_kz00_1855, BgL_az00_1863,
											BEOA);
									}
								}
							}
						else
							{	/* Integrate/a.scm 354 */
								obj_t BgL_bindingz00_1867;

								BgL_bindingz00_1867 = CAR(BgL_bindingsz00_1862);
								{	/* Integrate/a.scm 354 */
									obj_t BgL_varz00_1868;

									BgL_varz00_1868 = CAR(BgL_bindingz00_1867);
									{	/* Integrate/a.scm 355 */
										obj_t BgL_valz00_1869;

										BgL_valz00_1869 = CDR(BgL_bindingz00_1867);
										{	/* Integrate/a.scm 356 */

											{	/* Integrate/a.scm 357 */
												BgL_svarz00_bglt BgL_obj3535z00_1870;

												{
													BgL_svarz00_bglt BgL_auxz00_3832;

													{	/* Integrate/a.scm 357 */
														BgL_valuez00_bglt BgL_auxz00_3833;

														{
															BgL_variablez00_bglt BgL_auxz00_3834;

															BgL_auxz00_3834 =
																(BgL_variablez00_bglt) (BgL_varz00_1868);
															BgL_auxz00_3833 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_3834))->BgL_valuez00);
														}
														BgL_auxz00_3832 =
															(BgL_svarz00_bglt) (BgL_auxz00_3833);
													}
													BgL_obj3535z00_1870 =
														((BgL_svarz00_bglt) BgL_auxz00_3832);
												}
												{	/* Integrate/a.scm 357 */
													obj_t BgL_auxz00_3841;

													BgL_objectz00_bglt BgL_auxz00_3839;

													BgL_auxz00_3841 =
														BGl_wideningzd2svarzf2Iinfoz20zzintegrate_infoz00
														(BUNSPEC, BUNSPEC, ((bool_t) 0), ((bool_t) 0));
													BgL_auxz00_3839 =
														(BgL_objectz00_bglt) (BgL_obj3535z00_1870);
													BGL_OBJECT_WIDENING_SET(BgL_auxz00_3839,
														BgL_auxz00_3841);
												}
												BGL_OBJECT_CLASS_NUM_SET(
													(BgL_objectz00_bglt) (BgL_obj3535z00_1870),
													BGl_classzd2numzd2zz__objectz00
													(BGl_svarzf2Iinfozf2zzintegrate_infoz00));
												BgL_obj3535z00_1870;
											}
											{	/* Integrate/a.scm 358 */
												obj_t BgL_arg3916z00_1873;

												obj_t BgL_arg3917z00_1874;

												BgL_arg3916z00_1873 = CDR(BgL_bindingsz00_1862);
												{	/* Integrate/a.scm 361 */
													obj_t BgL_arg3918z00_1875;

													{	/* Integrate/a.scm 361 */
														obj_t BgL_arg3919z00_1876;

														BgL_typez00_bglt BgL_arg3920z00_1877;

														BgL_arg3919z00_1876 =
															BGl_getzd2newzd2kontz00zzintegrate_az00();
														{
															BgL_variablez00_bglt BgL_auxz00_3849;

															BgL_auxz00_3849 =
																(BgL_variablez00_bglt) (BgL_varz00_1868);
															BgL_arg3920z00_1877 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_3849))->BgL_typez00);
														}
														BgL_arg3918z00_1875 =
															MAKE_PAIR(BgL_arg3919z00_1876,
															(obj_t) (BgL_arg3920z00_1877));
													}
													{	/* Integrate/a.scm 359 */
														BgL_nodez00_bglt BgL_nodez00_2853;

														BgL_variablez00_bglt BgL_hostz00_2854;

														BgL_nodez00_2853 =
															(BgL_nodez00_bglt) (BgL_valz00_1869);
														BgL_hostz00_2854 =
															(BgL_variablez00_bglt) (BgL_hostz00_1854);
														{	/* Integrate/a.scm 359 */
															obj_t BgL_method3562z00_2857;

															{	/* Integrate/a.scm 359 */
																BgL_objectz00_bglt BgL_objz00_2858;

																BgL_objz00_2858 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2853);
																{	/* Integrate/a.scm 359 */
																	long BgL_objzd2classzd2numz00_2859;

																	BgL_objzd2classzd2numz00_2859 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2858);
																	{	/* Integrate/a.scm 359 */
																		obj_t BgL_arg2643z00_2860;

																		BgL_arg2643z00_2860 =
																			PROCEDURE_REF
																			(BGl_nodezd2Azd2envz00zzintegrate_az00,
																			(int) (((long) 1)));
																		{	/* Integrate/a.scm 359 */
																			obj_t BgL_arrayz00_2862;

																			int BgL_offsetz00_2863;

																			BgL_arrayz00_2862 = BgL_arg2643z00_2860;
																			BgL_offsetz00_2863 =
																				(int) (BgL_objzd2classzd2numz00_2859);
																			{	/* Integrate/a.scm 359 */
																				long BgL_offsetz00_2864;

																				BgL_offsetz00_2864 =
																					(
																					(long) (BgL_offsetz00_2863) -
																					OBJECT_TYPE);
																				{	/* Integrate/a.scm 359 */
																					long BgL_modz00_2865;

																					{	/* Integrate/a.scm 359 */
																						int BgL_arg2645z00_2866;

																						BgL_arg2645z00_2866 =
																							(int) (((long) 16));
																						{	/* Integrate/a.scm 359 */
																							long BgL_auxz00_3864;

																							BgL_auxz00_3864 =
																								(long) (BgL_arg2645z00_2866);
																							BgL_modz00_2865 =
																								(BgL_offsetz00_2864 /
																								BgL_auxz00_3864);
																					}}
																					{	/* Integrate/a.scm 359 */
																						long BgL_restz00_2867;

																						{	/* Integrate/a.scm 359 */
																							int BgL_arg2644z00_2868;

																							BgL_arg2644z00_2868 =
																								(int) (((long) 16));
																							{	/* Integrate/a.scm 359 */
																								long BgL_auxz00_3868;

																								BgL_auxz00_3868 =
																									(long) (BgL_arg2644z00_2868);
																								BgL_restz00_2867 =
																									(BgL_offsetz00_2864 %
																									BgL_auxz00_3868);
																						}}
																						{	/* Integrate/a.scm 359 */

																							BgL_method3562z00_2857 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2862,
																									(int) (BgL_modz00_2865)),
																								(int) (BgL_restz00_2867));
															}}}}}}}}
															BgL_arg3917z00_1874 =
																PROCEDURE_ENTRY(BgL_method3562z00_2857)
																(BgL_method3562z00_2857,
																(obj_t) (BgL_nodez00_2853),
																(obj_t) (BgL_hostz00_2854), BgL_arg3918z00_1875,
																BgL_az00_1863, BEOA);
												}}}
												{
													obj_t BgL_az00_3880;

													obj_t BgL_bindingsz00_3879;

													BgL_bindingsz00_3879 = BgL_arg3916z00_1873;
													BgL_az00_3880 = BgL_arg3917z00_1874;
													BgL_az00_1863 = BgL_az00_3880;
													BgL_bindingsz00_1862 = BgL_bindingsz00_3879;
													goto BgL_zc3anonymousza33911ze3z83_1864;
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



/* node-A-let-fun3593 */
	obj_t BGl_nodezd2Azd2letzd2fun3593zd2zzintegrate_az00(obj_t BgL_envz00_3125,
		obj_t BgL_nodez00_3126, obj_t BgL_hostz00_3127, obj_t BgL_kz00_3128,
		obj_t BgL_az00_3129)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 327 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1818;

				obj_t BgL_hostz00_1819;

				obj_t BgL_kz00_1820;

				obj_t BgL_az00_1821;

				BgL_nodez00_1818 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_3126);
				BgL_hostz00_1819 = BgL_hostz00_3127;
				BgL_kz00_1820 = BgL_kz00_3128;
				BgL_az00_1821 = BgL_az00_3129;
				{	/* Integrate/a.scm 330 */
					obj_t BgL_g3560z00_1825;

					BgL_g3560z00_1825 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1818))->BgL_localsz00);
					{
						obj_t BgL_l3558z00_1827;

						BgL_l3558z00_1827 = BgL_g3560z00_1825;
					BgL_zc3anonymousza33893ze3z83_1828:
						if (PAIRP(BgL_l3558z00_1827))
							{	/* Integrate/a.scm 333 */
								{	/* Integrate/a.scm 332 */
									obj_t BgL_fz00_1830;

									BgL_fz00_1830 = CAR(BgL_l3558z00_1827);
									BGl_initializa7ezd2funz12z67zzintegrate_az00(
										(BgL_variablez00_bglt) (BgL_fz00_1830),
										(BgL_variablez00_bglt) (BgL_hostz00_1819));
									BGl_za2phiza2z00zzintegrate_az00 =
										MAKE_PAIR(BgL_fz00_1830, BGl_za2phiza2z00zzintegrate_az00);
								}
								{
									obj_t BgL_l3558z00_3890;

									BgL_l3558z00_3890 = CDR(BgL_l3558z00_1827);
									BgL_l3558z00_1827 = BgL_l3558z00_3890;
									goto BgL_zc3anonymousza33893ze3z83_1828;
								}
							}
						else
							{	/* Integrate/a.scm 333 */
								((bool_t) 1);
							}
					}
				}
				{	/* Integrate/a.scm 335 */
					obj_t BgL_g3531z00_1833;

					BgL_g3531z00_1833 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1818))->BgL_localsz00);
					{
						obj_t BgL_localsz00_1835;

						obj_t BgL_az00_1836;

						BgL_localsz00_1835 = BgL_g3531z00_1833;
						BgL_az00_1836 = BgL_az00_1821;
					BgL_zc3anonymousza33896ze3z83_1837:
						if (NULLP(BgL_localsz00_1835))
							{	/* Integrate/a.scm 338 */
								BgL_nodez00_bglt BgL_arg3898z00_1839;

								BgL_arg3898z00_1839 =
									(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1818))->
									BgL_bodyz00);
								{	/* Integrate/a.scm 338 */
									BgL_variablez00_bglt BgL_hostz00_2749;

									BgL_hostz00_2749 = (BgL_variablez00_bglt) (BgL_hostz00_1819);
									{	/* Integrate/a.scm 338 */
										obj_t BgL_method3562z00_2752;

										{	/* Integrate/a.scm 338 */
											BgL_objectz00_bglt BgL_objz00_2753;

											BgL_objz00_2753 =
												(BgL_objectz00_bglt) (BgL_arg3898z00_1839);
											{	/* Integrate/a.scm 338 */
												long BgL_objzd2classzd2numz00_2754;

												BgL_objzd2classzd2numz00_2754 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2753);
												{	/* Integrate/a.scm 338 */
													obj_t BgL_arg2643z00_2755;

													BgL_arg2643z00_2755 =
														PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
														(int) (((long) 1)));
													{	/* Integrate/a.scm 338 */
														obj_t BgL_arrayz00_2757;

														int BgL_offsetz00_2758;

														BgL_arrayz00_2757 = BgL_arg2643z00_2755;
														BgL_offsetz00_2758 =
															(int) (BgL_objzd2classzd2numz00_2754);
														{	/* Integrate/a.scm 338 */
															long BgL_offsetz00_2759;

															BgL_offsetz00_2759 =
																((long) (BgL_offsetz00_2758) - OBJECT_TYPE);
															{	/* Integrate/a.scm 338 */
																long BgL_modz00_2760;

																{	/* Integrate/a.scm 338 */
																	int BgL_arg2645z00_2761;

																	BgL_arg2645z00_2761 = (int) (((long) 16));
																	{	/* Integrate/a.scm 338 */
																		long BgL_auxz00_3905;

																		BgL_auxz00_3905 =
																			(long) (BgL_arg2645z00_2761);
																		BgL_modz00_2760 =
																			(BgL_offsetz00_2759 / BgL_auxz00_3905);
																}}
																{	/* Integrate/a.scm 338 */
																	long BgL_restz00_2762;

																	{	/* Integrate/a.scm 338 */
																		int BgL_arg2644z00_2763;

																		BgL_arg2644z00_2763 = (int) (((long) 16));
																		{	/* Integrate/a.scm 338 */
																			long BgL_auxz00_3909;

																			BgL_auxz00_3909 =
																				(long) (BgL_arg2644z00_2763);
																			BgL_restz00_2762 =
																				(BgL_offsetz00_2759 % BgL_auxz00_3909);
																	}}
																	{	/* Integrate/a.scm 338 */

																		BgL_method3562z00_2752 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2757,
																				(int) (BgL_modz00_2760)),
																			(int) (BgL_restz00_2762));
										}}}}}}}}
										return
											PROCEDURE_ENTRY(BgL_method3562z00_2752)
											(BgL_method3562z00_2752, (obj_t) (BgL_arg3898z00_1839),
											(obj_t) (BgL_hostz00_2749), BgL_kz00_1820, BgL_az00_1836,
											BEOA);
									}
								}
							}
						else
							{	/* Integrate/a.scm 339 */
								obj_t BgL_arg3899z00_1840;

								obj_t BgL_arg3900z00_1841;

								BgL_arg3899z00_1840 = CDR(BgL_localsz00_1835);
								{	/* Integrate/a.scm 340 */
									obj_t BgL_arg3901z00_1842;

									obj_t BgL_arg3902z00_1843;

									obj_t BgL_arg3903z00_1844;

									{	/* Integrate/a.scm 340 */
										BgL_sfunz00_bglt BgL_obj1884z00_2780;

										{	/* Integrate/a.scm 340 */
											BgL_valuez00_bglt BgL_auxz00_3921;

											{	/* Integrate/a.scm 340 */
												BgL_variablez00_bglt BgL_obj1611z00_2779;

												{	/* Integrate/a.scm 340 */
													obj_t BgL_pairz00_2778;

													BgL_pairz00_2778 = BgL_localsz00_1835;
													BgL_obj1611z00_2779 =
														(BgL_variablez00_bglt) (CAR(BgL_pairz00_2778));
												}
												BgL_auxz00_3921 =
													(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_2779))->
													BgL_valuez00);
											}
											BgL_obj1884z00_2780 =
												(BgL_sfunz00_bglt) (BgL_auxz00_3921);
										}
										BgL_arg3901z00_1842 =
											(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_2780))->
											BgL_bodyz00);
									}
									BgL_arg3902z00_1843 = CAR(BgL_localsz00_1835);
									{	/* Integrate/a.scm 342 */
										obj_t BgL_arg3906z00_1847;

										BgL_typez00_bglt BgL_arg3908z00_1848;

										BgL_arg3906z00_1847 = CNST_TABLE_REF(((long) 0));
										{	/* Integrate/a.scm 342 */
											BgL_variablez00_bglt BgL_obj1608z00_2783;

											{	/* Integrate/a.scm 342 */
												obj_t BgL_pairz00_2782;

												BgL_pairz00_2782 = BgL_localsz00_1835;
												BgL_obj1608z00_2783 =
													(BgL_variablez00_bglt) (CAR(BgL_pairz00_2782));
											}
											BgL_arg3908z00_1848 =
												(((BgL_variablez00_bglt) CREF(BgL_obj1608z00_2783))->
												BgL_typez00);
										}
										BgL_arg3903z00_1844 =
											MAKE_PAIR(BgL_arg3906z00_1847,
											(obj_t) (BgL_arg3908z00_1848));
									}
									{	/* Integrate/a.scm 340 */
										BgL_nodez00_bglt BgL_nodez00_2784;

										BgL_variablez00_bglt BgL_hostz00_2785;

										BgL_nodez00_2784 = (BgL_nodez00_bglt) (BgL_arg3901z00_1842);
										BgL_hostz00_2785 =
											(BgL_variablez00_bglt) (BgL_arg3902z00_1843);
										{	/* Integrate/a.scm 340 */
											obj_t BgL_method3562z00_2788;

											{	/* Integrate/a.scm 340 */
												BgL_objectz00_bglt BgL_objz00_2789;

												BgL_objz00_2789 =
													(BgL_objectz00_bglt) (BgL_nodez00_2784);
												{	/* Integrate/a.scm 340 */
													long BgL_objzd2classzd2numz00_2790;

													BgL_objzd2classzd2numz00_2790 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2789);
													{	/* Integrate/a.scm 340 */
														obj_t BgL_arg2643z00_2791;

														BgL_arg2643z00_2791 =
															PROCEDURE_REF
															(BGl_nodezd2Azd2envz00zzintegrate_az00,
															(int) (((long) 1)));
														{	/* Integrate/a.scm 340 */
															obj_t BgL_arrayz00_2793;

															int BgL_offsetz00_2794;

															BgL_arrayz00_2793 = BgL_arg2643z00_2791;
															BgL_offsetz00_2794 =
																(int) (BgL_objzd2classzd2numz00_2790);
															{	/* Integrate/a.scm 340 */
																long BgL_offsetz00_2795;

																BgL_offsetz00_2795 =
																	((long) (BgL_offsetz00_2794) - OBJECT_TYPE);
																{	/* Integrate/a.scm 340 */
																	long BgL_modz00_2796;

																	{	/* Integrate/a.scm 340 */
																		int BgL_arg2645z00_2797;

																		BgL_arg2645z00_2797 = (int) (((long) 16));
																		{	/* Integrate/a.scm 340 */
																			long BgL_auxz00_3944;

																			BgL_auxz00_3944 =
																				(long) (BgL_arg2645z00_2797);
																			BgL_modz00_2796 =
																				(BgL_offsetz00_2795 / BgL_auxz00_3944);
																	}}
																	{	/* Integrate/a.scm 340 */
																		long BgL_restz00_2798;

																		{	/* Integrate/a.scm 340 */
																			int BgL_arg2644z00_2799;

																			BgL_arg2644z00_2799 = (int) (((long) 16));
																			{	/* Integrate/a.scm 340 */
																				long BgL_auxz00_3948;

																				BgL_auxz00_3948 =
																					(long) (BgL_arg2644z00_2799);
																				BgL_restz00_2798 =
																					(BgL_offsetz00_2795 %
																					BgL_auxz00_3948);
																		}}
																		{	/* Integrate/a.scm 340 */

																			BgL_method3562z00_2788 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2793,
																					(int) (BgL_modz00_2796)),
																				(int) (BgL_restz00_2798));
											}}}}}}}}
											BgL_arg3900z00_1841 =
												PROCEDURE_ENTRY(BgL_method3562z00_2788)
												(BgL_method3562z00_2788, (obj_t) (BgL_nodez00_2784),
												(obj_t) (BgL_hostz00_2785), BgL_arg3903z00_1844,
												BgL_az00_1836, BEOA);
								}}}
								{
									obj_t BgL_az00_3960;

									obj_t BgL_localsz00_3959;

									BgL_localsz00_3959 = BgL_arg3899z00_1840;
									BgL_az00_3960 = BgL_arg3900z00_1841;
									BgL_az00_1836 = BgL_az00_3960;
									BgL_localsz00_1835 = BgL_localsz00_3959;
									goto BgL_zc3anonymousza33896ze3z83_1837;
								}
							}
					}
				}
			}
		}
	}



/* node-A-select3591 */
	obj_t BGl_nodezd2Azd2select3591z00zzintegrate_az00(obj_t BgL_envz00_3130,
		obj_t BgL_nodez00_3131, obj_t BgL_hostz00_3132, obj_t BgL_kz00_3133,
		obj_t BgL_az00_3134)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 312 */
			{
				BgL_selectz00_bglt BgL_nodez00_1793;

				obj_t BgL_hostz00_1794;

				obj_t BgL_kz00_1795;

				obj_t BgL_az00_1796;

				BgL_nodez00_1793 = (BgL_selectz00_bglt) (BgL_nodez00_3131);
				BgL_hostz00_1794 = BgL_hostz00_3132;
				BgL_kz00_1795 = BgL_kz00_3133;
				BgL_az00_1796 = BgL_az00_3134;
				{	/* Integrate/a.scm 314 */
					obj_t BgL_g3527z00_1800;

					obj_t BgL_g3528z00_1801;

					BgL_g3527z00_1800 =
						(((BgL_selectz00_bglt) CREF(BgL_nodez00_1793))->BgL_clausesz00);
					{	/* Integrate/a.scm 315 */
						BgL_nodez00_bglt BgL_arg3888z00_1812;

						obj_t BgL_arg3889z00_1813;

						BgL_arg3888z00_1812 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1793))->BgL_testz00);
						{	/* Integrate/a.scm 317 */
							obj_t BgL_arg3890z00_1814;

							BgL_typez00_bglt BgL_arg3891z00_1815;

							BgL_arg3890z00_1814 = BGl_getzd2newzd2kontz00zzintegrate_az00();
							BgL_arg3891z00_1815 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1793))->
								BgL_itemzd2typezd2);
							BgL_arg3889z00_1813 =
								MAKE_PAIR(BgL_arg3890z00_1814, (obj_t) (BgL_arg3891z00_1815));
						}
						{	/* Integrate/a.scm 315 */
							BgL_variablez00_bglt BgL_hostz00_2680;

							BgL_hostz00_2680 = (BgL_variablez00_bglt) (BgL_hostz00_1794);
							{	/* Integrate/a.scm 315 */
								obj_t BgL_method3562z00_2683;

								{	/* Integrate/a.scm 315 */
									BgL_objectz00_bglt BgL_objz00_2684;

									BgL_objz00_2684 = (BgL_objectz00_bglt) (BgL_arg3888z00_1812);
									{	/* Integrate/a.scm 315 */
										long BgL_objzd2classzd2numz00_2685;

										BgL_objzd2classzd2numz00_2685 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2684);
										{	/* Integrate/a.scm 315 */
											obj_t BgL_arg2643z00_2686;

											BgL_arg2643z00_2686 =
												PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
												(int) (((long) 1)));
											{	/* Integrate/a.scm 315 */
												obj_t BgL_arrayz00_2688;

												int BgL_offsetz00_2689;

												BgL_arrayz00_2688 = BgL_arg2643z00_2686;
												BgL_offsetz00_2689 =
													(int) (BgL_objzd2classzd2numz00_2685);
												{	/* Integrate/a.scm 315 */
													long BgL_offsetz00_2690;

													BgL_offsetz00_2690 =
														((long) (BgL_offsetz00_2689) - OBJECT_TYPE);
													{	/* Integrate/a.scm 315 */
														long BgL_modz00_2691;

														{	/* Integrate/a.scm 315 */
															int BgL_arg2645z00_2692;

															BgL_arg2645z00_2692 = (int) (((long) 16));
															{	/* Integrate/a.scm 315 */
																long BgL_auxz00_3977;

																BgL_auxz00_3977 = (long) (BgL_arg2645z00_2692);
																BgL_modz00_2691 =
																	(BgL_offsetz00_2690 / BgL_auxz00_3977);
														}}
														{	/* Integrate/a.scm 315 */
															long BgL_restz00_2693;

															{	/* Integrate/a.scm 315 */
																int BgL_arg2644z00_2694;

																BgL_arg2644z00_2694 = (int) (((long) 16));
																{	/* Integrate/a.scm 315 */
																	long BgL_auxz00_3981;

																	BgL_auxz00_3981 =
																		(long) (BgL_arg2644z00_2694);
																	BgL_restz00_2693 =
																		(BgL_offsetz00_2690 % BgL_auxz00_3981);
															}}
															{	/* Integrate/a.scm 315 */

																BgL_method3562z00_2683 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2688,
																		(int) (BgL_modz00_2691)),
																	(int) (BgL_restz00_2693));
								}}}}}}}}
								BgL_g3528z00_1801 =
									PROCEDURE_ENTRY(BgL_method3562z00_2683)
									(BgL_method3562z00_2683, (obj_t) (BgL_arg3888z00_1812),
									(obj_t) (BgL_hostz00_2680), BgL_arg3889z00_1813,
									BgL_az00_1796, BEOA);
					}}}
					{
						obj_t BgL_clausesz00_1803;

						obj_t BgL_az00_1804;

						BgL_clausesz00_1803 = BgL_g3527z00_1800;
						BgL_az00_1804 = BgL_g3528z00_1801;
					BgL_zc3anonymousza33882ze3z83_1805:
						if (NULLP(BgL_clausesz00_1803))
							{	/* Integrate/a.scm 319 */
								return BgL_az00_1804;
							}
						else
							{	/* Integrate/a.scm 321 */
								obj_t BgL_arg3884z00_1807;

								obj_t BgL_arg3885z00_1808;

								BgL_arg3884z00_1807 = CDR(BgL_clausesz00_1803);
								{	/* Integrate/a.scm 322 */
									obj_t BgL_arg3886z00_1809;

									BgL_arg3886z00_1809 = CDR(CAR(BgL_clausesz00_1803));
									{	/* Integrate/a.scm 322 */
										BgL_nodez00_bglt BgL_nodez00_2712;

										BgL_variablez00_bglt BgL_hostz00_2713;

										BgL_nodez00_2712 = (BgL_nodez00_bglt) (BgL_arg3886z00_1809);
										BgL_hostz00_2713 =
											(BgL_variablez00_bglt) (BgL_hostz00_1794);
										{	/* Integrate/a.scm 322 */
											obj_t BgL_method3562z00_2716;

											{	/* Integrate/a.scm 322 */
												BgL_objectz00_bglt BgL_objz00_2717;

												BgL_objz00_2717 =
													(BgL_objectz00_bglt) (BgL_nodez00_2712);
												{	/* Integrate/a.scm 322 */
													long BgL_objzd2classzd2numz00_2718;

													BgL_objzd2classzd2numz00_2718 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2717);
													{	/* Integrate/a.scm 322 */
														obj_t BgL_arg2643z00_2719;

														BgL_arg2643z00_2719 =
															PROCEDURE_REF
															(BGl_nodezd2Azd2envz00zzintegrate_az00,
															(int) (((long) 1)));
														{	/* Integrate/a.scm 322 */
															obj_t BgL_arrayz00_2721;

															int BgL_offsetz00_2722;

															BgL_arrayz00_2721 = BgL_arg2643z00_2719;
															BgL_offsetz00_2722 =
																(int) (BgL_objzd2classzd2numz00_2718);
															{	/* Integrate/a.scm 322 */
																long BgL_offsetz00_2723;

																BgL_offsetz00_2723 =
																	((long) (BgL_offsetz00_2722) - OBJECT_TYPE);
																{	/* Integrate/a.scm 322 */
																	long BgL_modz00_2724;

																	{	/* Integrate/a.scm 322 */
																		int BgL_arg2645z00_2725;

																		BgL_arg2645z00_2725 = (int) (((long) 16));
																		{	/* Integrate/a.scm 322 */
																			long BgL_auxz00_4007;

																			BgL_auxz00_4007 =
																				(long) (BgL_arg2645z00_2725);
																			BgL_modz00_2724 =
																				(BgL_offsetz00_2723 / BgL_auxz00_4007);
																	}}
																	{	/* Integrate/a.scm 322 */
																		long BgL_restz00_2726;

																		{	/* Integrate/a.scm 322 */
																			int BgL_arg2644z00_2727;

																			BgL_arg2644z00_2727 = (int) (((long) 16));
																			{	/* Integrate/a.scm 322 */
																				long BgL_auxz00_4011;

																				BgL_auxz00_4011 =
																					(long) (BgL_arg2644z00_2727);
																				BgL_restz00_2726 =
																					(BgL_offsetz00_2723 %
																					BgL_auxz00_4011);
																		}}
																		{	/* Integrate/a.scm 322 */

																			BgL_method3562z00_2716 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2721,
																					(int) (BgL_modz00_2724)),
																				(int) (BgL_restz00_2726));
											}}}}}}}}
											BgL_arg3885z00_1808 =
												PROCEDURE_ENTRY(BgL_method3562z00_2716)
												(BgL_method3562z00_2716, (obj_t) (BgL_nodez00_2712),
												(obj_t) (BgL_hostz00_2713), BgL_kz00_1795,
												BgL_az00_1804, BEOA);
								}}}
								{
									obj_t BgL_az00_4023;

									obj_t BgL_clausesz00_4022;

									BgL_clausesz00_4022 = BgL_arg3884z00_1807;
									BgL_az00_4023 = BgL_arg3885z00_1808;
									BgL_az00_1804 = BgL_az00_4023;
									BgL_clausesz00_1803 = BgL_clausesz00_4022;
									goto BgL_zc3anonymousza33882ze3z83_1805;
								}
							}
					}
				}
			}
		}
	}



/* node-A-fail3589 */
	obj_t BGl_nodezd2Azd2fail3589z00zzintegrate_az00(obj_t BgL_envz00_3135,
		obj_t BgL_nodez00_3136, obj_t BgL_hostz00_3137, obj_t BgL_kz00_3138,
		obj_t BgL_az00_3139)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 296 */
			{
				BgL_failz00_bglt BgL_nodez00_1768;

				obj_t BgL_hostz00_1769;

				obj_t BgL_kz00_1770;

				obj_t BgL_az00_1771;

				BgL_nodez00_1768 = (BgL_failz00_bglt) (BgL_nodez00_3136);
				BgL_hostz00_1769 = BgL_hostz00_3137;
				BgL_kz00_1770 = BgL_kz00_3138;
				BgL_az00_1771 = BgL_az00_3139;
				{	/* Integrate/a.scm 298 */
					BgL_nodez00_bglt BgL_arg3865z00_1775;

					obj_t BgL_arg3866z00_1776;

					obj_t BgL_arg3867z00_1777;

					BgL_arg3865z00_1775 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1768))->BgL_procz00);
					{	/* Integrate/a.scm 300 */
						obj_t BgL_arg3868z00_1778;

						BgL_nodez00_bglt BgL_arg3869z00_1779;

						BgL_arg3868z00_1778 = BGl_getzd2newzd2kontz00zzintegrate_az00();
						BgL_arg3869z00_1779 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_1768))->BgL_procz00);
						BgL_arg3866z00_1776 =
							MAKE_PAIR(BgL_arg3868z00_1778, (obj_t) (BgL_arg3869z00_1779));
					}
					{	/* Integrate/a.scm 301 */
						BgL_nodez00_bglt BgL_arg3870z00_1780;

						obj_t BgL_arg3871z00_1781;

						obj_t BgL_arg3872z00_1782;

						BgL_arg3870z00_1780 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_1768))->BgL_msgz00);
						{	/* Integrate/a.scm 303 */
							obj_t BgL_arg3873z00_1783;

							BgL_typez00_bglt BgL_arg3874z00_1784;

							BgL_arg3873z00_1783 = BGl_getzd2newzd2kontz00zzintegrate_az00();
							{	/* Integrate/a.scm 303 */
								BgL_nodez00_bglt BgL_arg3875z00_1785;

								BgL_arg3875z00_1785 =
									(((BgL_failz00_bglt) CREF(BgL_nodez00_1768))->BgL_msgz00);
								BgL_arg3874z00_1784 =
									BGl_getzd2typezd2zztype_typeofz00(BgL_arg3875z00_1785);
							}
							BgL_arg3871z00_1781 =
								MAKE_PAIR(BgL_arg3873z00_1783, (obj_t) (BgL_arg3874z00_1784));
						}
						{	/* Integrate/a.scm 304 */
							BgL_nodez00_bglt BgL_arg3876z00_1786;

							obj_t BgL_arg3877z00_1787;

							BgL_arg3876z00_1786 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1768))->BgL_objz00);
							{	/* Integrate/a.scm 306 */
								obj_t BgL_arg3878z00_1788;

								BgL_typez00_bglt BgL_arg3879z00_1789;

								BgL_arg3878z00_1788 = BGl_getzd2newzd2kontz00zzintegrate_az00();
								{	/* Integrate/a.scm 306 */
									BgL_nodez00_bglt BgL_arg3880z00_1790;

									BgL_arg3880z00_1790 =
										(((BgL_failz00_bglt) CREF(BgL_nodez00_1768))->BgL_objz00);
									BgL_arg3879z00_1789 =
										BGl_getzd2typezd2zztype_typeofz00(BgL_arg3880z00_1790);
								}
								BgL_arg3877z00_1787 =
									MAKE_PAIR(BgL_arg3878z00_1788, (obj_t) (BgL_arg3879z00_1789));
							}
							{	/* Integrate/a.scm 304 */
								BgL_variablez00_bglt BgL_hostz00_2590;

								BgL_hostz00_2590 = (BgL_variablez00_bglt) (BgL_hostz00_1769);
								{	/* Integrate/a.scm 304 */
									obj_t BgL_method3562z00_2593;

									{	/* Integrate/a.scm 304 */
										BgL_objectz00_bglt BgL_objz00_2594;

										BgL_objz00_2594 =
											(BgL_objectz00_bglt) (BgL_arg3876z00_1786);
										{	/* Integrate/a.scm 304 */
											long BgL_objzd2classzd2numz00_2595;

											BgL_objzd2classzd2numz00_2595 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2594);
											{	/* Integrate/a.scm 304 */
												obj_t BgL_arg2643z00_2596;

												BgL_arg2643z00_2596 =
													PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
													(int) (((long) 1)));
												{	/* Integrate/a.scm 304 */
													obj_t BgL_arrayz00_2598;

													int BgL_offsetz00_2599;

													BgL_arrayz00_2598 = BgL_arg2643z00_2596;
													BgL_offsetz00_2599 =
														(int) (BgL_objzd2classzd2numz00_2595);
													{	/* Integrate/a.scm 304 */
														long BgL_offsetz00_2600;

														BgL_offsetz00_2600 =
															((long) (BgL_offsetz00_2599) - OBJECT_TYPE);
														{	/* Integrate/a.scm 304 */
															long BgL_modz00_2601;

															{	/* Integrate/a.scm 304 */
																int BgL_arg2645z00_2602;

																BgL_arg2645z00_2602 = (int) (((long) 16));
																{	/* Integrate/a.scm 304 */
																	long BgL_auxz00_4051;

																	BgL_auxz00_4051 =
																		(long) (BgL_arg2645z00_2602);
																	BgL_modz00_2601 =
																		(BgL_offsetz00_2600 / BgL_auxz00_4051);
															}}
															{	/* Integrate/a.scm 304 */
																long BgL_restz00_2603;

																{	/* Integrate/a.scm 304 */
																	int BgL_arg2644z00_2604;

																	BgL_arg2644z00_2604 = (int) (((long) 16));
																	{	/* Integrate/a.scm 304 */
																		long BgL_auxz00_4055;

																		BgL_auxz00_4055 =
																			(long) (BgL_arg2644z00_2604);
																		BgL_restz00_2603 =
																			(BgL_offsetz00_2600 % BgL_auxz00_4055);
																}}
																{	/* Integrate/a.scm 304 */

																	BgL_method3562z00_2593 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2598,
																			(int) (BgL_modz00_2601)),
																		(int) (BgL_restz00_2603));
									}}}}}}}}
									BgL_arg3872z00_1782 =
										PROCEDURE_ENTRY(BgL_method3562z00_2593)
										(BgL_method3562z00_2593, (obj_t) (BgL_arg3876z00_1786),
										(obj_t) (BgL_hostz00_2590), BgL_arg3877z00_1787,
										BgL_az00_1771, BEOA);
						}}}
						{	/* Integrate/a.scm 301 */
							BgL_variablez00_bglt BgL_hostz00_2619;

							BgL_hostz00_2619 = (BgL_variablez00_bglt) (BgL_hostz00_1769);
							{	/* Integrate/a.scm 301 */
								obj_t BgL_method3562z00_2622;

								{	/* Integrate/a.scm 301 */
									BgL_objectz00_bglt BgL_objz00_2623;

									BgL_objz00_2623 = (BgL_objectz00_bglt) (BgL_arg3870z00_1780);
									{	/* Integrate/a.scm 301 */
										long BgL_objzd2classzd2numz00_2624;

										BgL_objzd2classzd2numz00_2624 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2623);
										{	/* Integrate/a.scm 301 */
											obj_t BgL_arg2643z00_2625;

											BgL_arg2643z00_2625 =
												PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
												(int) (((long) 1)));
											{	/* Integrate/a.scm 301 */
												obj_t BgL_arrayz00_2627;

												int BgL_offsetz00_2628;

												BgL_arrayz00_2627 = BgL_arg2643z00_2625;
												BgL_offsetz00_2628 =
													(int) (BgL_objzd2classzd2numz00_2624);
												{	/* Integrate/a.scm 301 */
													long BgL_offsetz00_2629;

													BgL_offsetz00_2629 =
														((long) (BgL_offsetz00_2628) - OBJECT_TYPE);
													{	/* Integrate/a.scm 301 */
														long BgL_modz00_2630;

														{	/* Integrate/a.scm 301 */
															int BgL_arg2645z00_2631;

															BgL_arg2645z00_2631 = (int) (((long) 16));
															{	/* Integrate/a.scm 301 */
																long BgL_auxz00_4075;

																BgL_auxz00_4075 = (long) (BgL_arg2645z00_2631);
																BgL_modz00_2630 =
																	(BgL_offsetz00_2629 / BgL_auxz00_4075);
														}}
														{	/* Integrate/a.scm 301 */
															long BgL_restz00_2632;

															{	/* Integrate/a.scm 301 */
																int BgL_arg2644z00_2633;

																BgL_arg2644z00_2633 = (int) (((long) 16));
																{	/* Integrate/a.scm 301 */
																	long BgL_auxz00_4079;

																	BgL_auxz00_4079 =
																		(long) (BgL_arg2644z00_2633);
																	BgL_restz00_2632 =
																		(BgL_offsetz00_2629 % BgL_auxz00_4079);
															}}
															{	/* Integrate/a.scm 301 */

																BgL_method3562z00_2622 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2627,
																		(int) (BgL_modz00_2630)),
																	(int) (BgL_restz00_2632));
								}}}}}}}}
								BgL_arg3867z00_1777 =
									PROCEDURE_ENTRY(BgL_method3562z00_2622)
									(BgL_method3562z00_2622, (obj_t) (BgL_arg3870z00_1780),
									(obj_t) (BgL_hostz00_2619), BgL_arg3871z00_1781,
									BgL_arg3872z00_1782, BEOA);
					}}}
					{	/* Integrate/a.scm 298 */
						BgL_variablez00_bglt BgL_hostz00_2648;

						BgL_hostz00_2648 = (BgL_variablez00_bglt) (BgL_hostz00_1769);
						{	/* Integrate/a.scm 298 */
							obj_t BgL_method3562z00_2651;

							{	/* Integrate/a.scm 298 */
								BgL_objectz00_bglt BgL_objz00_2652;

								BgL_objz00_2652 = (BgL_objectz00_bglt) (BgL_arg3865z00_1775);
								{	/* Integrate/a.scm 298 */
									long BgL_objzd2classzd2numz00_2653;

									BgL_objzd2classzd2numz00_2653 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2652);
									{	/* Integrate/a.scm 298 */
										obj_t BgL_arg2643z00_2654;

										BgL_arg2643z00_2654 =
											PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
											(int) (((long) 1)));
										{	/* Integrate/a.scm 298 */
											obj_t BgL_arrayz00_2656;

											int BgL_offsetz00_2657;

											BgL_arrayz00_2656 = BgL_arg2643z00_2654;
											BgL_offsetz00_2657 =
												(int) (BgL_objzd2classzd2numz00_2653);
											{	/* Integrate/a.scm 298 */
												long BgL_offsetz00_2658;

												BgL_offsetz00_2658 =
													((long) (BgL_offsetz00_2657) - OBJECT_TYPE);
												{	/* Integrate/a.scm 298 */
													long BgL_modz00_2659;

													{	/* Integrate/a.scm 298 */
														int BgL_arg2645z00_2660;

														BgL_arg2645z00_2660 = (int) (((long) 16));
														{	/* Integrate/a.scm 298 */
															long BgL_auxz00_4099;

															BgL_auxz00_4099 = (long) (BgL_arg2645z00_2660);
															BgL_modz00_2659 =
																(BgL_offsetz00_2658 / BgL_auxz00_4099);
													}}
													{	/* Integrate/a.scm 298 */
														long BgL_restz00_2661;

														{	/* Integrate/a.scm 298 */
															int BgL_arg2644z00_2662;

															BgL_arg2644z00_2662 = (int) (((long) 16));
															{	/* Integrate/a.scm 298 */
																long BgL_auxz00_4103;

																BgL_auxz00_4103 = (long) (BgL_arg2644z00_2662);
																BgL_restz00_2661 =
																	(BgL_offsetz00_2658 % BgL_auxz00_4103);
														}}
														{	/* Integrate/a.scm 298 */

															BgL_method3562z00_2651 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2656,
																	(int) (BgL_modz00_2659)),
																(int) (BgL_restz00_2661));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3562z00_2651) (BgL_method3562z00_2651,
								(obj_t) (BgL_arg3865z00_1775),
								(obj_t) (BgL_hostz00_2648), BgL_arg3866z00_1776,
								BgL_arg3867z00_1777, BEOA);
						}
					}
				}
			}
		}
	}



/* node-A-conditional3587 */
	obj_t BGl_nodezd2Azd2conditional3587z00zzintegrate_az00(obj_t BgL_envz00_3140,
		obj_t BgL_nodez00_3141, obj_t BgL_hostz00_3142, obj_t BgL_kz00_3143,
		obj_t BgL_az00_3144)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 288 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1752;

				obj_t BgL_hostz00_1753;

				obj_t BgL_kz00_1754;

				obj_t BgL_az00_1755;

				BgL_nodez00_1752 = (BgL_conditionalz00_bglt) (BgL_nodez00_3141);
				BgL_hostz00_1753 = BgL_hostz00_3142;
				BgL_kz00_1754 = BgL_kz00_3143;
				BgL_az00_1755 = BgL_az00_3144;
				{	/* Integrate/a.scm 290 */
					obj_t BgL_az00_1759;

					{	/* Integrate/a.scm 290 */
						BgL_nodez00_bglt BgL_arg3861z00_1763;

						obj_t BgL_arg3862z00_1764;

						BgL_arg3861z00_1763 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1752))->BgL_testz00);
						{	/* Integrate/a.scm 290 */
							obj_t BgL_arg3863z00_1765;

							BgL_arg3863z00_1765 = BGl_getzd2newzd2kontz00zzintegrate_az00();
							BgL_arg3862z00_1764 =
								MAKE_PAIR(BgL_arg3863z00_1765,
								BGl_za2boolza2z00zztype_cachez00);
						}
						{	/* Integrate/a.scm 290 */
							BgL_variablez00_bglt BgL_hostz00_2495;

							BgL_hostz00_2495 = (BgL_variablez00_bglt) (BgL_hostz00_1753);
							{	/* Integrate/a.scm 290 */
								obj_t BgL_method3562z00_2498;

								{	/* Integrate/a.scm 290 */
									BgL_objectz00_bglt BgL_objz00_2499;

									BgL_objz00_2499 = (BgL_objectz00_bglt) (BgL_arg3861z00_1763);
									{	/* Integrate/a.scm 290 */
										long BgL_objzd2classzd2numz00_2500;

										BgL_objzd2classzd2numz00_2500 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2499);
										{	/* Integrate/a.scm 290 */
											obj_t BgL_arg2643z00_2501;

											BgL_arg2643z00_2501 =
												PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
												(int) (((long) 1)));
											{	/* Integrate/a.scm 290 */
												obj_t BgL_arrayz00_2503;

												int BgL_offsetz00_2504;

												BgL_arrayz00_2503 = BgL_arg2643z00_2501;
												BgL_offsetz00_2504 =
													(int) (BgL_objzd2classzd2numz00_2500);
												{	/* Integrate/a.scm 290 */
													long BgL_offsetz00_2505;

													BgL_offsetz00_2505 =
														((long) (BgL_offsetz00_2504) - OBJECT_TYPE);
													{	/* Integrate/a.scm 290 */
														long BgL_modz00_2506;

														{	/* Integrate/a.scm 290 */
															int BgL_arg2645z00_2507;

															BgL_arg2645z00_2507 = (int) (((long) 16));
															{	/* Integrate/a.scm 290 */
																long BgL_auxz00_4127;

																BgL_auxz00_4127 = (long) (BgL_arg2645z00_2507);
																BgL_modz00_2506 =
																	(BgL_offsetz00_2505 / BgL_auxz00_4127);
														}}
														{	/* Integrate/a.scm 290 */
															long BgL_restz00_2508;

															{	/* Integrate/a.scm 290 */
																int BgL_arg2644z00_2509;

																BgL_arg2644z00_2509 = (int) (((long) 16));
																{	/* Integrate/a.scm 290 */
																	long BgL_auxz00_4131;

																	BgL_auxz00_4131 =
																		(long) (BgL_arg2644z00_2509);
																	BgL_restz00_2508 =
																		(BgL_offsetz00_2505 % BgL_auxz00_4131);
															}}
															{	/* Integrate/a.scm 290 */

																BgL_method3562z00_2498 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2503,
																		(int) (BgL_modz00_2506)),
																	(int) (BgL_restz00_2508));
								}}}}}}}}
								BgL_az00_1759 =
									PROCEDURE_ENTRY(BgL_method3562z00_2498)
									(BgL_method3562z00_2498, (obj_t) (BgL_arg3861z00_1763),
									(obj_t) (BgL_hostz00_2495), BgL_arg3862z00_1764,
									BgL_az00_1755, BEOA);
					}}}
					{	/* Integrate/a.scm 291 */
						BgL_nodez00_bglt BgL_arg3858z00_1760;

						obj_t BgL_arg3859z00_1761;

						BgL_arg3858z00_1760 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1752))->BgL_truez00);
						{	/* Integrate/a.scm 291 */
							BgL_nodez00_bglt BgL_arg3860z00_1762;

							BgL_arg3860z00_1762 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1752))->
								BgL_falsez00);
							{	/* Integrate/a.scm 291 */
								BgL_variablez00_bglt BgL_hostz00_2526;

								BgL_hostz00_2526 = (BgL_variablez00_bglt) (BgL_hostz00_1753);
								{	/* Integrate/a.scm 291 */
									obj_t BgL_method3562z00_2529;

									{	/* Integrate/a.scm 291 */
										BgL_objectz00_bglt BgL_objz00_2530;

										BgL_objz00_2530 =
											(BgL_objectz00_bglt) (BgL_arg3860z00_1762);
										{	/* Integrate/a.scm 291 */
											long BgL_objzd2classzd2numz00_2531;

											BgL_objzd2classzd2numz00_2531 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2530);
											{	/* Integrate/a.scm 291 */
												obj_t BgL_arg2643z00_2532;

												BgL_arg2643z00_2532 =
													PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
													(int) (((long) 1)));
												{	/* Integrate/a.scm 291 */
													obj_t BgL_arrayz00_2534;

													int BgL_offsetz00_2535;

													BgL_arrayz00_2534 = BgL_arg2643z00_2532;
													BgL_offsetz00_2535 =
														(int) (BgL_objzd2classzd2numz00_2531);
													{	/* Integrate/a.scm 291 */
														long BgL_offsetz00_2536;

														BgL_offsetz00_2536 =
															((long) (BgL_offsetz00_2535) - OBJECT_TYPE);
														{	/* Integrate/a.scm 291 */
															long BgL_modz00_2537;

															{	/* Integrate/a.scm 291 */
																int BgL_arg2645z00_2538;

																BgL_arg2645z00_2538 = (int) (((long) 16));
																{	/* Integrate/a.scm 291 */
																	long BgL_auxz00_4153;

																	BgL_auxz00_4153 =
																		(long) (BgL_arg2645z00_2538);
																	BgL_modz00_2537 =
																		(BgL_offsetz00_2536 / BgL_auxz00_4153);
															}}
															{	/* Integrate/a.scm 291 */
																long BgL_restz00_2539;

																{	/* Integrate/a.scm 291 */
																	int BgL_arg2644z00_2540;

																	BgL_arg2644z00_2540 = (int) (((long) 16));
																	{	/* Integrate/a.scm 291 */
																		long BgL_auxz00_4157;

																		BgL_auxz00_4157 =
																			(long) (BgL_arg2644z00_2540);
																		BgL_restz00_2539 =
																			(BgL_offsetz00_2536 % BgL_auxz00_4157);
																}}
																{	/* Integrate/a.scm 291 */

																	BgL_method3562z00_2529 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2534,
																			(int) (BgL_modz00_2537)),
																		(int) (BgL_restz00_2539));
									}}}}}}}}
									BgL_arg3859z00_1761 =
										PROCEDURE_ENTRY(BgL_method3562z00_2529)
										(BgL_method3562z00_2529, (obj_t) (BgL_arg3860z00_1762),
										(obj_t) (BgL_hostz00_2526), BgL_kz00_1754, BgL_az00_1759,
										BEOA);
						}}}
						{	/* Integrate/a.scm 291 */
							BgL_variablez00_bglt BgL_hostz00_2555;

							BgL_hostz00_2555 = (BgL_variablez00_bglt) (BgL_hostz00_1753);
							{	/* Integrate/a.scm 291 */
								obj_t BgL_method3562z00_2558;

								{	/* Integrate/a.scm 291 */
									BgL_objectz00_bglt BgL_objz00_2559;

									BgL_objz00_2559 = (BgL_objectz00_bglt) (BgL_arg3858z00_1760);
									{	/* Integrate/a.scm 291 */
										long BgL_objzd2classzd2numz00_2560;

										BgL_objzd2classzd2numz00_2560 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2559);
										{	/* Integrate/a.scm 291 */
											obj_t BgL_arg2643z00_2561;

											BgL_arg2643z00_2561 =
												PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
												(int) (((long) 1)));
											{	/* Integrate/a.scm 291 */
												obj_t BgL_arrayz00_2563;

												int BgL_offsetz00_2564;

												BgL_arrayz00_2563 = BgL_arg2643z00_2561;
												BgL_offsetz00_2564 =
													(int) (BgL_objzd2classzd2numz00_2560);
												{	/* Integrate/a.scm 291 */
													long BgL_offsetz00_2565;

													BgL_offsetz00_2565 =
														((long) (BgL_offsetz00_2564) - OBJECT_TYPE);
													{	/* Integrate/a.scm 291 */
														long BgL_modz00_2566;

														{	/* Integrate/a.scm 291 */
															int BgL_arg2645z00_2567;

															BgL_arg2645z00_2567 = (int) (((long) 16));
															{	/* Integrate/a.scm 291 */
																long BgL_auxz00_4177;

																BgL_auxz00_4177 = (long) (BgL_arg2645z00_2567);
																BgL_modz00_2566 =
																	(BgL_offsetz00_2565 / BgL_auxz00_4177);
														}}
														{	/* Integrate/a.scm 291 */
															long BgL_restz00_2568;

															{	/* Integrate/a.scm 291 */
																int BgL_arg2644z00_2569;

																BgL_arg2644z00_2569 = (int) (((long) 16));
																{	/* Integrate/a.scm 291 */
																	long BgL_auxz00_4181;

																	BgL_auxz00_4181 =
																		(long) (BgL_arg2644z00_2569);
																	BgL_restz00_2568 =
																		(BgL_offsetz00_2565 % BgL_auxz00_4181);
															}}
															{	/* Integrate/a.scm 291 */

																BgL_method3562z00_2558 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2563,
																		(int) (BgL_modz00_2566)),
																	(int) (BgL_restz00_2568));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method3562z00_2558)
									(BgL_method3562z00_2558, (obj_t) (BgL_arg3858z00_1760),
									(obj_t) (BgL_hostz00_2555), BgL_kz00_1754,
									BgL_arg3859z00_1761, BEOA);
							}
						}
					}
				}
			}
		}
	}



/* node-A-setq3585 */
	obj_t BGl_nodezd2Azd2setq3585z00zzintegrate_az00(obj_t BgL_envz00_3145,
		obj_t BgL_nodez00_3146, obj_t BgL_hostz00_3147, obj_t BgL_kz00_3148,
		obj_t BgL_az00_3149)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 281 */
			{
				BgL_setqz00_bglt BgL_nodez00_1738;

				obj_t BgL_hostz00_1739;

				obj_t BgL_kz00_1740;

				obj_t BgL_az00_1741;

				BgL_nodez00_1738 = (BgL_setqz00_bglt) (BgL_nodez00_3146);
				BgL_hostz00_1739 = BgL_hostz00_3147;
				BgL_kz00_1740 = BgL_kz00_3148;
				BgL_az00_1741 = BgL_az00_3149;
				{	/* Integrate/a.scm 282 */
					BgL_nodez00_bglt BgL_arg3852z00_2457;

					obj_t BgL_arg3853z00_2458;

					BgL_arg3852z00_2457 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1738))->BgL_valuez00);
					{	/* Integrate/a.scm 282 */
						obj_t BgL_arg3854z00_2459;

						BgL_typez00_bglt BgL_arg3855z00_2460;

						BgL_arg3854z00_2459 = BGl_getzd2newzd2kontz00zzintegrate_az00();
						{	/* Integrate/a.scm 282 */
							BgL_nodez00_bglt BgL_arg3856z00_2461;

							BgL_arg3856z00_2461 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1738))->BgL_valuez00);
							BgL_arg3855z00_2460 =
								BGl_getzd2typezd2zztype_typeofz00(BgL_arg3856z00_2461);
						}
						BgL_arg3853z00_2458 =
							MAKE_PAIR(BgL_arg3854z00_2459, (obj_t) (BgL_arg3855z00_2460));
					}
					{	/* Integrate/a.scm 282 */
						BgL_variablez00_bglt BgL_hostz00_2465;

						BgL_hostz00_2465 = (BgL_variablez00_bglt) (BgL_hostz00_1739);
						{	/* Integrate/a.scm 282 */
							obj_t BgL_method3562z00_2468;

							{	/* Integrate/a.scm 282 */
								BgL_objectz00_bglt BgL_objz00_2469;

								BgL_objz00_2469 = (BgL_objectz00_bglt) (BgL_arg3852z00_2457);
								{	/* Integrate/a.scm 282 */
									long BgL_objzd2classzd2numz00_2470;

									BgL_objzd2classzd2numz00_2470 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2469);
									{	/* Integrate/a.scm 282 */
										obj_t BgL_arg2643z00_2471;

										BgL_arg2643z00_2471 =
											PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
											(int) (((long) 1)));
										{	/* Integrate/a.scm 282 */
											obj_t BgL_arrayz00_2473;

											int BgL_offsetz00_2474;

											BgL_arrayz00_2473 = BgL_arg2643z00_2471;
											BgL_offsetz00_2474 =
												(int) (BgL_objzd2classzd2numz00_2470);
											{	/* Integrate/a.scm 282 */
												long BgL_offsetz00_2475;

												BgL_offsetz00_2475 =
													((long) (BgL_offsetz00_2474) - OBJECT_TYPE);
												{	/* Integrate/a.scm 282 */
													long BgL_modz00_2476;

													{	/* Integrate/a.scm 282 */
														int BgL_arg2645z00_2477;

														BgL_arg2645z00_2477 = (int) (((long) 16));
														{	/* Integrate/a.scm 282 */
															long BgL_auxz00_4208;

															BgL_auxz00_4208 = (long) (BgL_arg2645z00_2477);
															BgL_modz00_2476 =
																(BgL_offsetz00_2475 / BgL_auxz00_4208);
													}}
													{	/* Integrate/a.scm 282 */
														long BgL_restz00_2478;

														{	/* Integrate/a.scm 282 */
															int BgL_arg2644z00_2479;

															BgL_arg2644z00_2479 = (int) (((long) 16));
															{	/* Integrate/a.scm 282 */
																long BgL_auxz00_4212;

																BgL_auxz00_4212 = (long) (BgL_arg2644z00_2479);
																BgL_restz00_2478 =
																	(BgL_offsetz00_2475 % BgL_auxz00_4212);
														}}
														{	/* Integrate/a.scm 282 */

															BgL_method3562z00_2468 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2473,
																	(int) (BgL_modz00_2476)),
																(int) (BgL_restz00_2478));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3562z00_2468) (BgL_method3562z00_2468,
								(obj_t) (BgL_arg3852z00_2457),
								(obj_t) (BgL_hostz00_2465), BgL_arg3853z00_2458, BgL_az00_1741,
								BEOA);
						}
					}
				}
			}
		}
	}



/* node-A-cast3583 */
	obj_t BGl_nodezd2Azd2cast3583z00zzintegrate_az00(obj_t BgL_envz00_3150,
		obj_t BgL_nodez00_3151, obj_t BgL_hostz00_3152, obj_t BgL_kz00_3153,
		obj_t BgL_az00_3154)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 274 */
			{
				BgL_castz00_bglt BgL_nodez00_1724;

				obj_t BgL_hostz00_1725;

				obj_t BgL_kz00_1726;

				obj_t BgL_az00_1727;

				BgL_nodez00_1724 = (BgL_castz00_bglt) (BgL_nodez00_3151);
				BgL_hostz00_1725 = BgL_hostz00_3152;
				BgL_kz00_1726 = BgL_kz00_3153;
				BgL_az00_1727 = BgL_az00_3154;
				{	/* Integrate/a.scm 275 */
					BgL_nodez00_bglt BgL_arg3846z00_2420;

					obj_t BgL_arg3847z00_2421;

					BgL_arg3846z00_2420 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_1724))->BgL_argz00);
					{	/* Integrate/a.scm 275 */
						obj_t BgL_arg3848z00_2422;

						BgL_typez00_bglt BgL_arg3849z00_2423;

						BgL_arg3848z00_2422 = BGl_getzd2newzd2kontz00zzintegrate_az00();
						{	/* Integrate/a.scm 275 */
							BgL_nodez00_bglt BgL_arg3850z00_2424;

							BgL_arg3850z00_2424 =
								(((BgL_castz00_bglt) CREF(BgL_nodez00_1724))->BgL_argz00);
							BgL_arg3849z00_2423 =
								BGl_getzd2typezd2zztype_typeofz00(BgL_arg3850z00_2424);
						}
						BgL_arg3847z00_2421 =
							MAKE_PAIR(BgL_arg3848z00_2422, (obj_t) (BgL_arg3849z00_2423));
					}
					{	/* Integrate/a.scm 275 */
						BgL_variablez00_bglt BgL_hostz00_2428;

						BgL_hostz00_2428 = (BgL_variablez00_bglt) (BgL_hostz00_1725);
						{	/* Integrate/a.scm 275 */
							obj_t BgL_method3562z00_2431;

							{	/* Integrate/a.scm 275 */
								BgL_objectz00_bglt BgL_objz00_2432;

								BgL_objz00_2432 = (BgL_objectz00_bglt) (BgL_arg3846z00_2420);
								{	/* Integrate/a.scm 275 */
									long BgL_objzd2classzd2numz00_2433;

									BgL_objzd2classzd2numz00_2433 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2432);
									{	/* Integrate/a.scm 275 */
										obj_t BgL_arg2643z00_2434;

										BgL_arg2643z00_2434 =
											PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
											(int) (((long) 1)));
										{	/* Integrate/a.scm 275 */
											obj_t BgL_arrayz00_2436;

											int BgL_offsetz00_2437;

											BgL_arrayz00_2436 = BgL_arg2643z00_2434;
											BgL_offsetz00_2437 =
												(int) (BgL_objzd2classzd2numz00_2433);
											{	/* Integrate/a.scm 275 */
												long BgL_offsetz00_2438;

												BgL_offsetz00_2438 =
													((long) (BgL_offsetz00_2437) - OBJECT_TYPE);
												{	/* Integrate/a.scm 275 */
													long BgL_modz00_2439;

													{	/* Integrate/a.scm 275 */
														int BgL_arg2645z00_2440;

														BgL_arg2645z00_2440 = (int) (((long) 16));
														{	/* Integrate/a.scm 275 */
															long BgL_auxz00_4239;

															BgL_auxz00_4239 = (long) (BgL_arg2645z00_2440);
															BgL_modz00_2439 =
																(BgL_offsetz00_2438 / BgL_auxz00_4239);
													}}
													{	/* Integrate/a.scm 275 */
														long BgL_restz00_2441;

														{	/* Integrate/a.scm 275 */
															int BgL_arg2644z00_2442;

															BgL_arg2644z00_2442 = (int) (((long) 16));
															{	/* Integrate/a.scm 275 */
																long BgL_auxz00_4243;

																BgL_auxz00_4243 = (long) (BgL_arg2644z00_2442);
																BgL_restz00_2441 =
																	(BgL_offsetz00_2438 % BgL_auxz00_4243);
														}}
														{	/* Integrate/a.scm 275 */

															BgL_method3562z00_2431 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2436,
																	(int) (BgL_modz00_2439)),
																(int) (BgL_restz00_2441));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3562z00_2431) (BgL_method3562z00_2431,
								(obj_t) (BgL_arg3846z00_2420),
								(obj_t) (BgL_hostz00_2428), BgL_arg3847z00_2421, BgL_az00_1727,
								BEOA);
						}
					}
				}
			}
		}
	}



/* node-A-extern3581 */
	obj_t BGl_nodezd2Azd2extern3581z00zzintegrate_az00(obj_t BgL_envz00_3155,
		obj_t BgL_nodez00_3156, obj_t BgL_hostz00_3157, obj_t BgL_kz00_3158,
		obj_t BgL_az00_3159)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 259 */
			{
				BgL_externz00_bglt BgL_nodez00_1701;

				obj_t BgL_hostz00_1702;

				obj_t BgL_kz00_1703;

				obj_t BgL_az00_1704;

				BgL_nodez00_1701 = (BgL_externz00_bglt) (BgL_nodez00_3156);
				BgL_hostz00_1702 = BgL_hostz00_3157;
				BgL_kz00_1703 = BgL_kz00_3158;
				BgL_az00_1704 = BgL_az00_3159;
				{
					obj_t BgL_astsz00_1710;

					obj_t BgL_az00_1711;

					{	/* Integrate/a.scm 261 */
						obj_t BgL_arg3835z00_1709;

						BgL_arg3835z00_1709 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1701))->BgL_exprza2za2);
						BgL_astsz00_1710 = BgL_arg3835z00_1709;
						BgL_az00_1711 = BgL_az00_1704;
					BgL_zc3anonymousza33836ze3z83_1712:
						if (NULLP(BgL_astsz00_1710))
							{	/* Integrate/a.scm 263 */
								return BgL_az00_1711;
							}
						else
							{	/* Integrate/a.scm 265 */
								obj_t BgL_arg3838z00_1714;

								obj_t BgL_arg3839z00_1715;

								BgL_arg3838z00_1714 = CDR(BgL_astsz00_1710);
								{	/* Integrate/a.scm 266 */
									obj_t BgL_arg3840z00_1716;

									obj_t BgL_arg3841z00_1717;

									BgL_arg3840z00_1716 = CAR(BgL_astsz00_1710);
									{	/* Integrate/a.scm 268 */
										obj_t BgL_arg3842z00_1718;

										BgL_typez00_bglt BgL_arg3843z00_1719;

										BgL_arg3842z00_1718 =
											BGl_getzd2newzd2kontz00zzintegrate_az00();
										{	/* Integrate/a.scm 268 */
											obj_t BgL_arg3844z00_1720;

											BgL_arg3844z00_1720 = CAR(BgL_astsz00_1710);
											BgL_arg3843z00_1719 =
												BGl_getzd2typezd2zztype_typeofz00(
												(BgL_nodez00_bglt) (BgL_arg3844z00_1720));
										}
										BgL_arg3841z00_1717 =
											MAKE_PAIR(BgL_arg3842z00_1718,
											(obj_t) (BgL_arg3843z00_1719));
									}
									{	/* Integrate/a.scm 266 */
										BgL_nodez00_bglt BgL_nodez00_2390;

										BgL_variablez00_bglt BgL_hostz00_2391;

										BgL_nodez00_2390 = (BgL_nodez00_bglt) (BgL_arg3840z00_1716);
										BgL_hostz00_2391 =
											(BgL_variablez00_bglt) (BgL_hostz00_1702);
										{	/* Integrate/a.scm 266 */
											obj_t BgL_method3562z00_2394;

											{	/* Integrate/a.scm 266 */
												BgL_objectz00_bglt BgL_objz00_2395;

												BgL_objz00_2395 =
													(BgL_objectz00_bglt) (BgL_nodez00_2390);
												{	/* Integrate/a.scm 266 */
													long BgL_objzd2classzd2numz00_2396;

													BgL_objzd2classzd2numz00_2396 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2395);
													{	/* Integrate/a.scm 266 */
														obj_t BgL_arg2643z00_2397;

														BgL_arg2643z00_2397 =
															PROCEDURE_REF
															(BGl_nodezd2Azd2envz00zzintegrate_az00,
															(int) (((long) 1)));
														{	/* Integrate/a.scm 266 */
															obj_t BgL_arrayz00_2399;

															int BgL_offsetz00_2400;

															BgL_arrayz00_2399 = BgL_arg2643z00_2397;
															BgL_offsetz00_2400 =
																(int) (BgL_objzd2classzd2numz00_2396);
															{	/* Integrate/a.scm 266 */
																long BgL_offsetz00_2401;

																BgL_offsetz00_2401 =
																	((long) (BgL_offsetz00_2400) - OBJECT_TYPE);
																{	/* Integrate/a.scm 266 */
																	long BgL_modz00_2402;

																	{	/* Integrate/a.scm 266 */
																		int BgL_arg2645z00_2403;

																		BgL_arg2645z00_2403 = (int) (((long) 16));
																		{	/* Integrate/a.scm 266 */
																			long BgL_auxz00_4276;

																			BgL_auxz00_4276 =
																				(long) (BgL_arg2645z00_2403);
																			BgL_modz00_2402 =
																				(BgL_offsetz00_2401 / BgL_auxz00_4276);
																	}}
																	{	/* Integrate/a.scm 266 */
																		long BgL_restz00_2404;

																		{	/* Integrate/a.scm 266 */
																			int BgL_arg2644z00_2405;

																			BgL_arg2644z00_2405 = (int) (((long) 16));
																			{	/* Integrate/a.scm 266 */
																				long BgL_auxz00_4280;

																				BgL_auxz00_4280 =
																					(long) (BgL_arg2644z00_2405);
																				BgL_restz00_2404 =
																					(BgL_offsetz00_2401 %
																					BgL_auxz00_4280);
																		}}
																		{	/* Integrate/a.scm 266 */

																			BgL_method3562z00_2394 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2399,
																					(int) (BgL_modz00_2402)),
																				(int) (BgL_restz00_2404));
											}}}}}}}}
											BgL_arg3839z00_1715 =
												PROCEDURE_ENTRY(BgL_method3562z00_2394)
												(BgL_method3562z00_2394, (obj_t) (BgL_nodez00_2390),
												(obj_t) (BgL_hostz00_2391), BgL_arg3841z00_1717,
												BgL_az00_1711, BEOA);
								}}}
								{
									obj_t BgL_az00_4292;

									obj_t BgL_astsz00_4291;

									BgL_astsz00_4291 = BgL_arg3838z00_1714;
									BgL_az00_4292 = BgL_arg3839z00_1715;
									BgL_az00_1711 = BgL_az00_4292;
									BgL_astsz00_1710 = BgL_astsz00_4291;
									goto BgL_zc3anonymousza33836ze3z83_1712;
								}
							}
					}
				}
			}
		}
	}



/* node-A-funcall3579 */
	obj_t BGl_nodezd2Azd2funcall3579z00zzintegrate_az00(obj_t BgL_envz00_3160,
		obj_t BgL_nodez00_3161, obj_t BgL_hostz00_3162, obj_t BgL_kz00_3163,
		obj_t BgL_az00_3164)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 241 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1672;

				obj_t BgL_hostz00_1673;

				obj_t BgL_kz00_1674;

				obj_t BgL_az00_1675;

				BgL_nodez00_1672 = (BgL_funcallz00_bglt) (BgL_nodez00_3161);
				BgL_hostz00_1673 = BgL_hostz00_3162;
				BgL_kz00_1674 = BgL_kz00_3163;
				BgL_az00_1675 = BgL_az00_3164;
				{	/* Integrate/a.scm 243 */
					BgL_nodez00_bglt BgL_arg3818z00_1679;

					obj_t BgL_arg3819z00_1680;

					obj_t BgL_arg3820z00_1681;

					BgL_arg3818z00_1679 =
						(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1672))->BgL_funz00);
					{	/* Integrate/a.scm 245 */
						obj_t BgL_arg3821z00_1682;

						BgL_typez00_bglt BgL_arg3822z00_1683;

						BgL_arg3821z00_1682 = BGl_getzd2newzd2kontz00zzintegrate_az00();
						{	/* Integrate/a.scm 245 */
							BgL_nodez00_bglt BgL_arg3823z00_1684;

							BgL_arg3823z00_1684 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1672))->BgL_funz00);
							BgL_arg3822z00_1683 =
								BGl_getzd2typezd2zztype_typeofz00(BgL_arg3823z00_1684);
						}
						BgL_arg3819z00_1680 =
							MAKE_PAIR(BgL_arg3821z00_1682, (obj_t) (BgL_arg3822z00_1683));
					}
					{
						obj_t BgL_argsz00_1687;

						obj_t BgL_az00_1688;

						{	/* Integrate/a.scm 246 */
							obj_t BgL_arg3824z00_1686;

							BgL_arg3824z00_1686 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1672))->BgL_argsz00);
							BgL_argsz00_1687 = BgL_arg3824z00_1686;
							BgL_az00_1688 = BgL_az00_1675;
						BgL_zc3anonymousza33825ze3z83_1689:
							if (NULLP(BgL_argsz00_1687))
								{	/* Integrate/a.scm 248 */
									BgL_arg3820z00_1681 = BgL_az00_1688;
								}
							else
								{	/* Integrate/a.scm 250 */
									obj_t BgL_arg3827z00_1691;

									obj_t BgL_arg3828z00_1692;

									BgL_arg3827z00_1691 = CDR(BgL_argsz00_1687);
									{	/* Integrate/a.scm 251 */
										obj_t BgL_arg3829z00_1693;

										obj_t BgL_arg3830z00_1694;

										BgL_arg3829z00_1693 = CAR(BgL_argsz00_1687);
										{	/* Integrate/a.scm 253 */
											obj_t BgL_arg3831z00_1695;

											BgL_typez00_bglt BgL_arg3832z00_1696;

											BgL_arg3831z00_1695 =
												BGl_getzd2newzd2kontz00zzintegrate_az00();
											{	/* Integrate/a.scm 253 */
												obj_t BgL_arg3833z00_1697;

												BgL_arg3833z00_1697 = CAR(BgL_argsz00_1687);
												BgL_arg3832z00_1696 =
													BGl_getzd2typezd2zztype_typeofz00(
													(BgL_nodez00_bglt) (BgL_arg3833z00_1697));
											}
											BgL_arg3830z00_1694 =
												MAKE_PAIR(BgL_arg3831z00_1695,
												(obj_t) (BgL_arg3832z00_1696));
										}
										{	/* Integrate/a.scm 251 */
											BgL_nodez00_bglt BgL_nodez00_2327;

											BgL_variablez00_bglt BgL_hostz00_2328;

											BgL_nodez00_2327 =
												(BgL_nodez00_bglt) (BgL_arg3829z00_1693);
											BgL_hostz00_2328 =
												(BgL_variablez00_bglt) (BgL_hostz00_1673);
											{	/* Integrate/a.scm 251 */
												obj_t BgL_method3562z00_2331;

												{	/* Integrate/a.scm 251 */
													BgL_objectz00_bglt BgL_objz00_2332;

													BgL_objz00_2332 =
														(BgL_objectz00_bglt) (BgL_nodez00_2327);
													{	/* Integrate/a.scm 251 */
														long BgL_objzd2classzd2numz00_2333;

														BgL_objzd2classzd2numz00_2333 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2332);
														{	/* Integrate/a.scm 251 */
															obj_t BgL_arg2643z00_2334;

															BgL_arg2643z00_2334 =
																PROCEDURE_REF
																(BGl_nodezd2Azd2envz00zzintegrate_az00,
																(int) (((long) 1)));
															{	/* Integrate/a.scm 251 */
																obj_t BgL_arrayz00_2336;

																int BgL_offsetz00_2337;

																BgL_arrayz00_2336 = BgL_arg2643z00_2334;
																BgL_offsetz00_2337 =
																	(int) (BgL_objzd2classzd2numz00_2333);
																{	/* Integrate/a.scm 251 */
																	long BgL_offsetz00_2338;

																	BgL_offsetz00_2338 =
																		((long) (BgL_offsetz00_2337) - OBJECT_TYPE);
																	{	/* Integrate/a.scm 251 */
																		long BgL_modz00_2339;

																		{	/* Integrate/a.scm 251 */
																			int BgL_arg2645z00_2340;

																			BgL_arg2645z00_2340 = (int) (((long) 16));
																			{	/* Integrate/a.scm 251 */
																				long BgL_auxz00_4321;

																				BgL_auxz00_4321 =
																					(long) (BgL_arg2645z00_2340);
																				BgL_modz00_2339 =
																					(BgL_offsetz00_2338 /
																					BgL_auxz00_4321);
																		}}
																		{	/* Integrate/a.scm 251 */
																			long BgL_restz00_2341;

																			{	/* Integrate/a.scm 251 */
																				int BgL_arg2644z00_2342;

																				BgL_arg2644z00_2342 =
																					(int) (((long) 16));
																				{	/* Integrate/a.scm 251 */
																					long BgL_auxz00_4325;

																					BgL_auxz00_4325 =
																						(long) (BgL_arg2644z00_2342);
																					BgL_restz00_2341 =
																						(BgL_offsetz00_2338 %
																						BgL_auxz00_4325);
																			}}
																			{	/* Integrate/a.scm 251 */

																				BgL_method3562z00_2331 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2336,
																						(int) (BgL_modz00_2339)),
																					(int) (BgL_restz00_2341));
												}}}}}}}}
												BgL_arg3828z00_1692 =
													PROCEDURE_ENTRY(BgL_method3562z00_2331)
													(BgL_method3562z00_2331, (obj_t) (BgL_nodez00_2327),
													(obj_t) (BgL_hostz00_2328), BgL_arg3830z00_1694,
													BgL_az00_1688, BEOA);
									}}}
									{
										obj_t BgL_az00_4337;

										obj_t BgL_argsz00_4336;

										BgL_argsz00_4336 = BgL_arg3827z00_1691;
										BgL_az00_4337 = BgL_arg3828z00_1692;
										BgL_az00_1688 = BgL_az00_4337;
										BgL_argsz00_1687 = BgL_argsz00_4336;
										goto BgL_zc3anonymousza33825ze3z83_1689;
									}
								}
						}
					}
					{	/* Integrate/a.scm 243 */
						BgL_variablez00_bglt BgL_hostz00_2357;

						BgL_hostz00_2357 = (BgL_variablez00_bglt) (BgL_hostz00_1673);
						{	/* Integrate/a.scm 243 */
							obj_t BgL_method3562z00_2360;

							{	/* Integrate/a.scm 243 */
								BgL_objectz00_bglt BgL_objz00_2361;

								BgL_objz00_2361 = (BgL_objectz00_bglt) (BgL_arg3818z00_1679);
								{	/* Integrate/a.scm 243 */
									long BgL_objzd2classzd2numz00_2362;

									BgL_objzd2classzd2numz00_2362 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2361);
									{	/* Integrate/a.scm 243 */
										obj_t BgL_arg2643z00_2363;

										BgL_arg2643z00_2363 =
											PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
											(int) (((long) 1)));
										{	/* Integrate/a.scm 243 */
											obj_t BgL_arrayz00_2365;

											int BgL_offsetz00_2366;

											BgL_arrayz00_2365 = BgL_arg2643z00_2363;
											BgL_offsetz00_2366 =
												(int) (BgL_objzd2classzd2numz00_2362);
											{	/* Integrate/a.scm 243 */
												long BgL_offsetz00_2367;

												BgL_offsetz00_2367 =
													((long) (BgL_offsetz00_2366) - OBJECT_TYPE);
												{	/* Integrate/a.scm 243 */
													long BgL_modz00_2368;

													{	/* Integrate/a.scm 243 */
														int BgL_arg2645z00_2369;

														BgL_arg2645z00_2369 = (int) (((long) 16));
														{	/* Integrate/a.scm 243 */
															long BgL_auxz00_4347;

															BgL_auxz00_4347 = (long) (BgL_arg2645z00_2369);
															BgL_modz00_2368 =
																(BgL_offsetz00_2367 / BgL_auxz00_4347);
													}}
													{	/* Integrate/a.scm 243 */
														long BgL_restz00_2370;

														{	/* Integrate/a.scm 243 */
															int BgL_arg2644z00_2371;

															BgL_arg2644z00_2371 = (int) (((long) 16));
															{	/* Integrate/a.scm 243 */
																long BgL_auxz00_4351;

																BgL_auxz00_4351 = (long) (BgL_arg2644z00_2371);
																BgL_restz00_2370 =
																	(BgL_offsetz00_2367 % BgL_auxz00_4351);
														}}
														{	/* Integrate/a.scm 243 */

															BgL_method3562z00_2360 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2365,
																	(int) (BgL_modz00_2368)),
																(int) (BgL_restz00_2370));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3562z00_2360) (BgL_method3562z00_2360,
								(obj_t) (BgL_arg3818z00_1679),
								(obj_t) (BgL_hostz00_2357), BgL_arg3819z00_1680,
								BgL_arg3820z00_1681, BEOA);
						}
					}
				}
			}
		}
	}



/* node-A-app-ly3577 */
	obj_t BGl_nodezd2Azd2appzd2ly3577zd2zzintegrate_az00(obj_t BgL_envz00_3165,
		obj_t BgL_nodez00_3166, obj_t BgL_hostz00_3167, obj_t BgL_kz00_3168,
		obj_t BgL_az00_3169)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 231 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1652;

				obj_t BgL_hostz00_1653;

				obj_t BgL_kz00_1654;

				obj_t BgL_az00_1655;

				BgL_nodez00_1652 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_3166);
				BgL_hostz00_1653 = BgL_hostz00_3167;
				BgL_kz00_1654 = BgL_kz00_3168;
				BgL_az00_1655 = BgL_az00_3169;
				{	/* Integrate/a.scm 233 */
					BgL_nodez00_bglt BgL_arg3806z00_1659;

					obj_t BgL_arg3807z00_1660;

					obj_t BgL_arg3808z00_1661;

					BgL_arg3806z00_1659 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1652))->BgL_funz00);
					{	/* Integrate/a.scm 235 */
						obj_t BgL_arg3809z00_1662;

						BgL_typez00_bglt BgL_arg3810z00_1663;

						BgL_arg3809z00_1662 = BGl_getzd2newzd2kontz00zzintegrate_az00();
						{	/* Integrate/a.scm 235 */
							BgL_nodez00_bglt BgL_arg3811z00_1664;

							BgL_arg3811z00_1664 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1652))->BgL_funz00);
							BgL_arg3810z00_1663 =
								BGl_getzd2typezd2zztype_typeofz00(BgL_arg3811z00_1664);
						}
						BgL_arg3807z00_1660 =
							MAKE_PAIR(BgL_arg3809z00_1662, (obj_t) (BgL_arg3810z00_1663));
					}
					{	/* Integrate/a.scm 236 */
						BgL_nodez00_bglt BgL_arg3812z00_1665;

						obj_t BgL_arg3813z00_1666;

						BgL_arg3812z00_1665 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1652))->BgL_argz00);
						{	/* Integrate/a.scm 236 */
							obj_t BgL_arg3814z00_1667;

							BgL_typez00_bglt BgL_arg3815z00_1668;

							BgL_arg3814z00_1667 = BGl_getzd2newzd2kontz00zzintegrate_az00();
							{	/* Integrate/a.scm 236 */
								BgL_nodez00_bglt BgL_arg3816z00_1669;

								BgL_arg3816z00_1669 =
									(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1652))->BgL_argz00);
								BgL_arg3815z00_1668 =
									BGl_getzd2typezd2zztype_typeofz00(BgL_arg3816z00_1669);
							}
							BgL_arg3813z00_1666 =
								MAKE_PAIR(BgL_arg3814z00_1667, (obj_t) (BgL_arg3815z00_1668));
						}
						{	/* Integrate/a.scm 236 */
							BgL_variablez00_bglt BgL_hostz00_2263;

							BgL_hostz00_2263 = (BgL_variablez00_bglt) (BgL_hostz00_1653);
							{	/* Integrate/a.scm 236 */
								obj_t BgL_method3562z00_2266;

								{	/* Integrate/a.scm 236 */
									BgL_objectz00_bglt BgL_objz00_2267;

									BgL_objz00_2267 = (BgL_objectz00_bglt) (BgL_arg3812z00_1665);
									{	/* Integrate/a.scm 236 */
										long BgL_objzd2classzd2numz00_2268;

										BgL_objzd2classzd2numz00_2268 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2267);
										{	/* Integrate/a.scm 236 */
											obj_t BgL_arg2643z00_2269;

											BgL_arg2643z00_2269 =
												PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
												(int) (((long) 1)));
											{	/* Integrate/a.scm 236 */
												obj_t BgL_arrayz00_2271;

												int BgL_offsetz00_2272;

												BgL_arrayz00_2271 = BgL_arg2643z00_2269;
												BgL_offsetz00_2272 =
													(int) (BgL_objzd2classzd2numz00_2268);
												{	/* Integrate/a.scm 236 */
													long BgL_offsetz00_2273;

													BgL_offsetz00_2273 =
														((long) (BgL_offsetz00_2272) - OBJECT_TYPE);
													{	/* Integrate/a.scm 236 */
														long BgL_modz00_2274;

														{	/* Integrate/a.scm 236 */
															int BgL_arg2645z00_2275;

															BgL_arg2645z00_2275 = (int) (((long) 16));
															{	/* Integrate/a.scm 236 */
																long BgL_auxz00_4384;

																BgL_auxz00_4384 = (long) (BgL_arg2645z00_2275);
																BgL_modz00_2274 =
																	(BgL_offsetz00_2273 / BgL_auxz00_4384);
														}}
														{	/* Integrate/a.scm 236 */
															long BgL_restz00_2276;

															{	/* Integrate/a.scm 236 */
																int BgL_arg2644z00_2277;

																BgL_arg2644z00_2277 = (int) (((long) 16));
																{	/* Integrate/a.scm 236 */
																	long BgL_auxz00_4388;

																	BgL_auxz00_4388 =
																		(long) (BgL_arg2644z00_2277);
																	BgL_restz00_2276 =
																		(BgL_offsetz00_2273 % BgL_auxz00_4388);
															}}
															{	/* Integrate/a.scm 236 */

																BgL_method3562z00_2266 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2271,
																		(int) (BgL_modz00_2274)),
																	(int) (BgL_restz00_2276));
								}}}}}}}}
								BgL_arg3808z00_1661 =
									PROCEDURE_ENTRY(BgL_method3562z00_2266)
									(BgL_method3562z00_2266, (obj_t) (BgL_arg3812z00_1665),
									(obj_t) (BgL_hostz00_2263), BgL_arg3813z00_1666,
									BgL_az00_1655, BEOA);
					}}}
					{	/* Integrate/a.scm 233 */
						BgL_variablez00_bglt BgL_hostz00_2292;

						BgL_hostz00_2292 = (BgL_variablez00_bglt) (BgL_hostz00_1653);
						{	/* Integrate/a.scm 233 */
							obj_t BgL_method3562z00_2295;

							{	/* Integrate/a.scm 233 */
								BgL_objectz00_bglt BgL_objz00_2296;

								BgL_objz00_2296 = (BgL_objectz00_bglt) (BgL_arg3806z00_1659);
								{	/* Integrate/a.scm 233 */
									long BgL_objzd2classzd2numz00_2297;

									BgL_objzd2classzd2numz00_2297 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2296);
									{	/* Integrate/a.scm 233 */
										obj_t BgL_arg2643z00_2298;

										BgL_arg2643z00_2298 =
											PROCEDURE_REF(BGl_nodezd2Azd2envz00zzintegrate_az00,
											(int) (((long) 1)));
										{	/* Integrate/a.scm 233 */
											obj_t BgL_arrayz00_2300;

											int BgL_offsetz00_2301;

											BgL_arrayz00_2300 = BgL_arg2643z00_2298;
											BgL_offsetz00_2301 =
												(int) (BgL_objzd2classzd2numz00_2297);
											{	/* Integrate/a.scm 233 */
												long BgL_offsetz00_2302;

												BgL_offsetz00_2302 =
													((long) (BgL_offsetz00_2301) - OBJECT_TYPE);
												{	/* Integrate/a.scm 233 */
													long BgL_modz00_2303;

													{	/* Integrate/a.scm 233 */
														int BgL_arg2645z00_2304;

														BgL_arg2645z00_2304 = (int) (((long) 16));
														{	/* Integrate/a.scm 233 */
															long BgL_auxz00_4408;

															BgL_auxz00_4408 = (long) (BgL_arg2645z00_2304);
															BgL_modz00_2303 =
																(BgL_offsetz00_2302 / BgL_auxz00_4408);
													}}
													{	/* Integrate/a.scm 233 */
														long BgL_restz00_2305;

														{	/* Integrate/a.scm 233 */
															int BgL_arg2644z00_2306;

															BgL_arg2644z00_2306 = (int) (((long) 16));
															{	/* Integrate/a.scm 233 */
																long BgL_auxz00_4412;

																BgL_auxz00_4412 = (long) (BgL_arg2644z00_2306);
																BgL_restz00_2305 =
																	(BgL_offsetz00_2302 % BgL_auxz00_4412);
														}}
														{	/* Integrate/a.scm 233 */

															BgL_method3562z00_2295 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2300,
																	(int) (BgL_modz00_2303)),
																(int) (BgL_restz00_2305));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3562z00_2295) (BgL_method3562z00_2295,
								(obj_t) (BgL_arg3806z00_1659),
								(obj_t) (BgL_hostz00_2292), BgL_arg3807z00_1660,
								BgL_arg3808z00_1661, BEOA);
						}
					}
				}
			}
		}
	}



/* node-A-app3575 */
	obj_t BGl_nodezd2Azd2app3575z00zzintegrate_az00(obj_t BgL_envz00_3170,
		obj_t BgL_nodez00_3171, obj_t BgL_hostz00_3172, obj_t BgL_kz00_3173,
		obj_t BgL_az00_3174)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 210 */
			{
				BgL_appz00_bglt BgL_nodez00_1622;

				obj_t BgL_hostz00_1623;

				obj_t BgL_kz00_1624;

				obj_t BgL_az00_1625;

				BgL_nodez00_1622 = (BgL_appz00_bglt) (BgL_nodez00_3171);
				BgL_hostz00_1623 = BgL_hostz00_3172;
				BgL_kz00_1624 = BgL_kz00_3173;
				BgL_az00_1625 = BgL_az00_3174;
				{	/* Integrate/a.scm 212 */
					BgL_variablez00_bglt BgL_calleez00_1629;

					{	/* Integrate/a.scm 212 */
						BgL_varz00_bglt BgL_obj2155z00_2222;

						BgL_obj2155z00_2222 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1622))->BgL_funz00);
						BgL_calleez00_1629 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2222))->BgL_variablez00);
					}
					{	/* Integrate/a.scm 214 */
						obj_t BgL_g3510z00_1630;

						BgL_g3510z00_1630 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1622))->BgL_argsz00);
						{
							obj_t BgL_argsz00_1632;

							obj_t BgL_az00_1633;

							BgL_argsz00_1632 = BgL_g3510z00_1630;
							BgL_az00_1633 = BgL_az00_1625;
						BgL_zc3anonymousza33789ze3z83_1634:
							if (NULLP(BgL_argsz00_1632))
								{	/* Integrate/a.scm 218 */
									bool_t BgL_testz00_4429;

									{	/* Integrate/a.scm 218 */
										obj_t BgL_obj1812z00_2225;

										BgL_obj1812z00_2225 = (obj_t) (BgL_calleez00_1629);
										BgL_testz00_4429 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj1812z00_2225,
											BGl_localz00zzast_varz00);
									}
									if (BgL_testz00_4429)
										{	/* Integrate/a.scm 219 */
											obj_t BgL_arg3792z00_1637;

											{	/* Integrate/a.scm 219 */
												obj_t BgL_arg3793z00_1638;

												{	/* Integrate/a.scm 219 */
													obj_t BgL_list3794z00_1639;

													{	/* Integrate/a.scm 219 */
														obj_t BgL_arg3795z00_1640;

														BgL_arg3795z00_1640 = MAKE_PAIR(BNIL, BNIL);
														BgL_list3794z00_1639 =
															MAKE_PAIR(BgL_kz00_1624, BgL_arg3795z00_1640);
													}
													BgL_arg3793z00_1638 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
														(obj_t) (
															(BgL_localz00_bglt) (BgL_calleez00_1629)),
														BgL_list3794z00_1639);
												}
												BgL_arg3792z00_1637 =
													MAKE_PAIR(BgL_hostz00_1623, BgL_arg3793z00_1638);
											}
											return MAKE_PAIR(BgL_arg3792z00_1637, BgL_az00_1633);
										}
									else
										{	/* Integrate/a.scm 218 */
											return BgL_az00_1633;
										}
								}
							else
								{	/* Integrate/a.scm 222 */
									obj_t BgL_arg3796z00_1641;

									obj_t BgL_arg3797z00_1642;

									BgL_arg3796z00_1641 = CDR(BgL_argsz00_1632);
									{	/* Integrate/a.scm 223 */
										obj_t BgL_arg3798z00_1643;

										obj_t BgL_arg3799z00_1644;

										BgL_arg3798z00_1643 = CAR(BgL_argsz00_1632);
										{	/* Integrate/a.scm 225 */
											obj_t BgL_arg3800z00_1645;

											BgL_typez00_bglt BgL_arg3801z00_1646;

											BgL_arg3800z00_1645 =
												BGl_getzd2newzd2kontz00zzintegrate_az00();
											{	/* Integrate/a.scm 225 */
												obj_t BgL_arg3803z00_1647;

												BgL_arg3803z00_1647 = CAR(BgL_argsz00_1632);
												BgL_arg3801z00_1646 =
													BGl_getzd2typezd2zztype_typeofz00(
													(BgL_nodez00_bglt) (BgL_arg3803z00_1647));
											}
											BgL_arg3799z00_1644 =
												MAKE_PAIR(BgL_arg3800z00_1645,
												(obj_t) (BgL_arg3801z00_1646));
										}
										{	/* Integrate/a.scm 223 */
											BgL_nodez00_bglt BgL_nodez00_2229;

											BgL_variablez00_bglt BgL_hostz00_2230;

											BgL_nodez00_2229 =
												(BgL_nodez00_bglt) (BgL_arg3798z00_1643);
											BgL_hostz00_2230 =
												(BgL_variablez00_bglt) (BgL_hostz00_1623);
											{	/* Integrate/a.scm 223 */
												obj_t BgL_method3562z00_2233;

												{	/* Integrate/a.scm 223 */
													BgL_objectz00_bglt BgL_objz00_2234;

													BgL_objz00_2234 =
														(BgL_objectz00_bglt) (BgL_nodez00_2229);
													{	/* Integrate/a.scm 223 */
														long BgL_objzd2classzd2numz00_2235;

														BgL_objzd2classzd2numz00_2235 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2234);
														{	/* Integrate/a.scm 223 */
															obj_t BgL_arg2643z00_2236;

															BgL_arg2643z00_2236 =
																PROCEDURE_REF
																(BGl_nodezd2Azd2envz00zzintegrate_az00,
																(int) (((long) 1)));
															{	/* Integrate/a.scm 223 */
																obj_t BgL_arrayz00_2238;

																int BgL_offsetz00_2239;

																BgL_arrayz00_2238 = BgL_arg2643z00_2236;
																BgL_offsetz00_2239 =
																	(int) (BgL_objzd2classzd2numz00_2235);
																{	/* Integrate/a.scm 223 */
																	long BgL_offsetz00_2240;

																	BgL_offsetz00_2240 =
																		((long) (BgL_offsetz00_2239) - OBJECT_TYPE);
																	{	/* Integrate/a.scm 223 */
																		long BgL_modz00_2241;

																		{	/* Integrate/a.scm 223 */
																			int BgL_arg2645z00_2242;

																			BgL_arg2645z00_2242 = (int) (((long) 16));
																			{	/* Integrate/a.scm 223 */
																				long BgL_auxz00_4457;

																				BgL_auxz00_4457 =
																					(long) (BgL_arg2645z00_2242);
																				BgL_modz00_2241 =
																					(BgL_offsetz00_2240 /
																					BgL_auxz00_4457);
																		}}
																		{	/* Integrate/a.scm 223 */
																			long BgL_restz00_2243;

																			{	/* Integrate/a.scm 223 */
																				int BgL_arg2644z00_2244;

																				BgL_arg2644z00_2244 =
																					(int) (((long) 16));
																				{	/* Integrate/a.scm 223 */
																					long BgL_auxz00_4461;

																					BgL_auxz00_4461 =
																						(long) (BgL_arg2644z00_2244);
																					BgL_restz00_2243 =
																						(BgL_offsetz00_2240 %
																						BgL_auxz00_4461);
																			}}
																			{	/* Integrate/a.scm 223 */

																				BgL_method3562z00_2233 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2238,
																						(int) (BgL_modz00_2241)),
																					(int) (BgL_restz00_2243));
												}}}}}}}}
												BgL_arg3797z00_1642 =
													PROCEDURE_ENTRY(BgL_method3562z00_2233)
													(BgL_method3562z00_2233, (obj_t) (BgL_nodez00_2229),
													(obj_t) (BgL_hostz00_2230), BgL_arg3799z00_1644,
													BgL_az00_1633, BEOA);
									}}}
									{
										obj_t BgL_az00_4473;

										obj_t BgL_argsz00_4472;

										BgL_argsz00_4472 = BgL_arg3796z00_1641;
										BgL_az00_4473 = BgL_arg3797z00_1642;
										BgL_az00_1633 = BgL_az00_4473;
										BgL_argsz00_1632 = BgL_argsz00_4472;
										goto BgL_zc3anonymousza33789ze3z83_1634;
									}
								}
						}
					}
				}
			}
		}
	}



/* node-A-sequence3573 */
	obj_t BGl_nodezd2Azd2sequence3573z00zzintegrate_az00(obj_t BgL_envz00_3175,
		obj_t BgL_nodez00_3176, obj_t BgL_hostz00_3177, obj_t BgL_kz00_3178,
		obj_t BgL_az00_3179)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 193 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1595;

				obj_t BgL_hostz00_1596;

				obj_t BgL_kz00_1597;

				obj_t BgL_az00_1598;

				BgL_nodez00_1595 = (BgL_sequencez00_bglt) (BgL_nodez00_3176);
				BgL_hostz00_1596 = BgL_hostz00_3177;
				BgL_kz00_1597 = BgL_kz00_3178;
				BgL_az00_1598 = BgL_az00_3179;
				if (NULLP(
						(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1595))->BgL_nodesz00)))
					{	/* Integrate/a.scm 195 */
						return BgL_az00_1598;
					}
				else
					{
						obj_t BgL_ndsz00_1605;

						obj_t BgL_az00_1606;

						{	/* Integrate/a.scm 197 */
							obj_t BgL_arg3775z00_1604;

							BgL_arg3775z00_1604 =
								(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1595))->BgL_nodesz00);
							BgL_ndsz00_1605 = BgL_arg3775z00_1604;
							BgL_az00_1606 = BgL_az00_1598;
						BgL_zc3anonymousza33776ze3z83_1607:
							if (NULLP(CDR(BgL_ndsz00_1605)))
								{	/* Integrate/a.scm 200 */
									obj_t BgL_arg3778z00_1609;

									BgL_arg3778z00_1609 = CAR(BgL_ndsz00_1605);
									{	/* Integrate/a.scm 200 */
										BgL_nodez00_bglt BgL_nodez00_2160;

										BgL_variablez00_bglt BgL_hostz00_2161;

										BgL_nodez00_2160 = (BgL_nodez00_bglt) (BgL_arg3778z00_1609);
										BgL_hostz00_2161 =
											(BgL_variablez00_bglt) (BgL_hostz00_1596);
										{	/* Integrate/a.scm 200 */
											obj_t BgL_method3562z00_2164;

											{	/* Integrate/a.scm 200 */
												BgL_objectz00_bglt BgL_objz00_2165;

												BgL_objz00_2165 =
													(BgL_objectz00_bglt) (BgL_nodez00_2160);
												{	/* Integrate/a.scm 200 */
													long BgL_objzd2classzd2numz00_2166;

													BgL_objzd2classzd2numz00_2166 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2165);
													{	/* Integrate/a.scm 200 */
														obj_t BgL_arg2643z00_2167;

														BgL_arg2643z00_2167 =
															PROCEDURE_REF
															(BGl_nodezd2Azd2envz00zzintegrate_az00,
															(int) (((long) 1)));
														{	/* Integrate/a.scm 200 */
															obj_t BgL_arrayz00_2169;

															int BgL_offsetz00_2170;

															BgL_arrayz00_2169 = BgL_arg2643z00_2167;
															BgL_offsetz00_2170 =
																(int) (BgL_objzd2classzd2numz00_2166);
															{	/* Integrate/a.scm 200 */
																long BgL_offsetz00_2171;

																BgL_offsetz00_2171 =
																	((long) (BgL_offsetz00_2170) - OBJECT_TYPE);
																{	/* Integrate/a.scm 200 */
																	long BgL_modz00_2172;

																	{	/* Integrate/a.scm 200 */
																		int BgL_arg2645z00_2173;

																		BgL_arg2645z00_2173 = (int) (((long) 16));
																		{	/* Integrate/a.scm 200 */
																			long BgL_auxz00_4493;

																			BgL_auxz00_4493 =
																				(long) (BgL_arg2645z00_2173);
																			BgL_modz00_2172 =
																				(BgL_offsetz00_2171 / BgL_auxz00_4493);
																	}}
																	{	/* Integrate/a.scm 200 */
																		long BgL_restz00_2174;

																		{	/* Integrate/a.scm 200 */
																			int BgL_arg2644z00_2175;

																			BgL_arg2644z00_2175 = (int) (((long) 16));
																			{	/* Integrate/a.scm 200 */
																				long BgL_auxz00_4497;

																				BgL_auxz00_4497 =
																					(long) (BgL_arg2644z00_2175);
																				BgL_restz00_2174 =
																					(BgL_offsetz00_2171 %
																					BgL_auxz00_4497);
																		}}
																		{	/* Integrate/a.scm 200 */

																			BgL_method3562z00_2164 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2169,
																					(int) (BgL_modz00_2172)),
																				(int) (BgL_restz00_2174));
											}}}}}}}}
											return
												PROCEDURE_ENTRY(BgL_method3562z00_2164)
												(BgL_method3562z00_2164, (obj_t) (BgL_nodez00_2160),
												(obj_t) (BgL_hostz00_2161), BgL_kz00_1597,
												BgL_az00_1606, BEOA);
										}
									}
								}
							else
								{	/* Integrate/a.scm 201 */
									obj_t BgL_arg3779z00_1610;

									obj_t BgL_arg3780z00_1611;

									BgL_arg3779z00_1610 = CDR(BgL_ndsz00_1605);
									{	/* Integrate/a.scm 202 */
										obj_t BgL_arg3781z00_1612;

										obj_t BgL_arg3782z00_1613;

										BgL_arg3781z00_1612 = CAR(BgL_ndsz00_1605);
										{	/* Integrate/a.scm 204 */
											obj_t BgL_arg3783z00_1614;

											BgL_typez00_bglt BgL_arg3784z00_1615;

											BgL_arg3783z00_1614 =
												BGl_getzd2newzd2kontz00zzintegrate_az00();
											{	/* Integrate/a.scm 204 */
												obj_t BgL_arg3785z00_1616;

												BgL_arg3785z00_1616 = CAR(BgL_ndsz00_1605);
												BgL_arg3784z00_1615 =
													BGl_getzd2typezd2zztype_typeofz00(
													(BgL_nodez00_bglt) (BgL_arg3785z00_1616));
											}
											BgL_arg3782z00_1613 =
												MAKE_PAIR(BgL_arg3783z00_1614,
												(obj_t) (BgL_arg3784z00_1615));
										}
										{	/* Integrate/a.scm 202 */
											BgL_nodez00_bglt BgL_nodez00_2192;

											BgL_variablez00_bglt BgL_hostz00_2193;

											BgL_nodez00_2192 =
												(BgL_nodez00_bglt) (BgL_arg3781z00_1612);
											BgL_hostz00_2193 =
												(BgL_variablez00_bglt) (BgL_hostz00_1596);
											{	/* Integrate/a.scm 202 */
												obj_t BgL_method3562z00_2196;

												{	/* Integrate/a.scm 202 */
													BgL_objectz00_bglt BgL_objz00_2197;

													BgL_objz00_2197 =
														(BgL_objectz00_bglt) (BgL_nodez00_2192);
													{	/* Integrate/a.scm 202 */
														long BgL_objzd2classzd2numz00_2198;

														BgL_objzd2classzd2numz00_2198 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2197);
														{	/* Integrate/a.scm 202 */
															obj_t BgL_arg2643z00_2199;

															BgL_arg2643z00_2199 =
																PROCEDURE_REF
																(BGl_nodezd2Azd2envz00zzintegrate_az00,
																(int) (((long) 1)));
															{	/* Integrate/a.scm 202 */
																obj_t BgL_arrayz00_2201;

																int BgL_offsetz00_2202;

																BgL_arrayz00_2201 = BgL_arg2643z00_2199;
																BgL_offsetz00_2202 =
																	(int) (BgL_objzd2classzd2numz00_2198);
																{	/* Integrate/a.scm 202 */
																	long BgL_offsetz00_2203;

																	BgL_offsetz00_2203 =
																		((long) (BgL_offsetz00_2202) - OBJECT_TYPE);
																	{	/* Integrate/a.scm 202 */
																		long BgL_modz00_2204;

																		{	/* Integrate/a.scm 202 */
																			int BgL_arg2645z00_2205;

																			BgL_arg2645z00_2205 = (int) (((long) 16));
																			{	/* Integrate/a.scm 202 */
																				long BgL_auxz00_4526;

																				BgL_auxz00_4526 =
																					(long) (BgL_arg2645z00_2205);
																				BgL_modz00_2204 =
																					(BgL_offsetz00_2203 /
																					BgL_auxz00_4526);
																		}}
																		{	/* Integrate/a.scm 202 */
																			long BgL_restz00_2206;

																			{	/* Integrate/a.scm 202 */
																				int BgL_arg2644z00_2207;

																				BgL_arg2644z00_2207 =
																					(int) (((long) 16));
																				{	/* Integrate/a.scm 202 */
																					long BgL_auxz00_4530;

																					BgL_auxz00_4530 =
																						(long) (BgL_arg2644z00_2207);
																					BgL_restz00_2206 =
																						(BgL_offsetz00_2203 %
																						BgL_auxz00_4530);
																			}}
																			{	/* Integrate/a.scm 202 */

																				BgL_method3562z00_2196 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2201,
																						(int) (BgL_modz00_2204)),
																					(int) (BgL_restz00_2206));
												}}}}}}}}
												BgL_arg3780z00_1611 =
													PROCEDURE_ENTRY(BgL_method3562z00_2196)
													(BgL_method3562z00_2196, (obj_t) (BgL_nodez00_2192),
													(obj_t) (BgL_hostz00_2193), BgL_arg3782z00_1613,
													BgL_az00_1606, BEOA);
									}}}
									{
										obj_t BgL_az00_4542;

										obj_t BgL_ndsz00_4541;

										BgL_ndsz00_4541 = BgL_arg3779z00_1610;
										BgL_az00_4542 = BgL_arg3780z00_1611;
										BgL_az00_1606 = BgL_az00_4542;
										BgL_ndsz00_1605 = BgL_ndsz00_4541;
										goto BgL_zc3anonymousza33776ze3z83_1607;
									}
								}
						}
					}
			}
		}
	}



/* node-A-closure3571 */
	obj_t BGl_nodezd2Azd2closure3571z00zzintegrate_az00(obj_t BgL_envz00_3180,
		obj_t BgL_nodez00_3181, obj_t BgL_hostz00_3182, obj_t BgL_kz00_3183,
		obj_t BgL_az00_3184)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 187 */
			{
				BgL_closurez00_bglt BgL_nodez00_1584;

				obj_t BgL_hostz00_1585;

				obj_t BgL_kz00_1586;

				obj_t BgL_az00_1587;

				BgL_nodez00_1584 = (BgL_closurez00_bglt) (BgL_nodez00_3181);
				BgL_hostz00_1585 = BgL_hostz00_3182;
				BgL_kz00_1586 = BgL_kz00_3183;
				BgL_az00_1587 = BgL_az00_3184;
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string4048z00zzintegrate_az00, BGl_string4071z00zzintegrate_az00,
					BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_1584)));
			}
		}
	}



/* node-A-var3569 */
	obj_t BGl_nodezd2Azd2var3569z00zzintegrate_az00(obj_t BgL_envz00_3185,
		obj_t BgL_nodez00_3186, obj_t BgL_hostz00_3187, obj_t BgL_kz00_3188,
		obj_t BgL_az00_3189)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 181 */
			return BgL_az00_3189;
		}
	}



/* node-A-kwote3567 */
	obj_t BGl_nodezd2Azd2kwote3567z00zzintegrate_az00(obj_t BgL_envz00_3190,
		obj_t BgL_nodez00_3191, obj_t BgL_hostz00_3192, obj_t BgL_kz00_3193,
		obj_t BgL_az00_3194)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 175 */
			return BgL_az00_3194;
		}
	}



/* node-A-atom3565 */
	obj_t BGl_nodezd2Azd2atom3565z00zzintegrate_az00(obj_t BgL_envz00_3195,
		obj_t BgL_nodez00_3196, obj_t BgL_hostz00_3197, obj_t BgL_kz00_3198,
		obj_t BgL_az00_3199)
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 169 */
			return BgL_az00_3199;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_az00()
	{
		AN_OBJECT;
		{	/* Integrate/a.scm 18 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4072z00zzintegrate_az00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4072z00zzintegrate_az00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4072z00zzintegrate_az00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4072z00zzintegrate_az00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4072z00zzintegrate_az00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4072z00zzintegrate_az00));
			BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string4072z00zzintegrate_az00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4072z00zzintegrate_az00));
			return
				BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 341705556),
				BSTRING_TO_STRING(BGl_string4072z00zzintegrate_az00));
		}
	}

#ifdef __cplusplus
}
#endif
