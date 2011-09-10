/*===========================================================================*/
/*   (Integrate/node.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/node.scm)*/
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

	typedef struct BgL_svarzf2iinfozf2_bgl
	{
		obj_t BgL_fzd2markzd2;
		obj_t BgL_uzd2markzd2;
		bool_t BgL_kapturedzf3zf3;
		bool_t BgL_celledzf3zf3;
	}                      *BgL_svarzf2iinfozf2_bglt;

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


	static obj_t BGl_gloz12zd2closure3580zc0zzintegrate_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__integratezd2celledzf3z21zzintegrate_nodez00(obj_t, obj_t);
	static obj_t BGl_gloza2z12zb0zzintegrate_nodez00(obj_t, obj_t);
	static obj_t BGl_gloz12zd2setq3594zc0zzintegrate_nodez00(obj_t, obj_t, obj_t);
	static obj_t BGl_gloz12zd2extern3590zc0zzintegrate_nodez00(obj_t, obj_t,
		obj_t);
	extern BgL_boxzd2refzd2_bglt BGl_makezd2boxzd2refz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt);
	static obj_t BGl_gloz12zd2kwote3576zc0zzintegrate_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gloz12zd2letzd2var3604z12zzintegrate_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gloz12zd2appzd2ly3586z12zzintegrate_nodez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_gloz12zd2app3584zc0zzintegrate_nodez00(obj_t, obj_t, obj_t);
	static obj_t BGl_gloz12zd2sequence3582zc0zzintegrate_nodez00(obj_t, obj_t,
		obj_t);
	extern BgL_makezd2boxzd2_bglt BGl_makezd2makezd2boxz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_nodez00_bglt);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_cellzd2formalszd2zzintegrate_nodez00(obj_t,
		BgL_nodez00_bglt);
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t BGl_gloz12zd2boxzd2setz123615z00zzintegrate_nodez00(obj_t, obj_t,
		obj_t);
	static BgL_makezd2boxzd2_bglt
		BGl_azd2makezd2cellz00zzintegrate_nodez00(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzintegrate_nodez00();
	extern obj_t BGl_wideningzd2svarzf2Iinfoz20zzintegrate_infoz00(obj_t, obj_t,
		bool_t, bool_t);
	extern obj_t BGl_sfunzf2Iinfozf2zzintegrate_infoz00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_gloz12zd2jumpzd2exzd2it3608zc0zzintegrate_nodez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_gloz12zd2fail3598zc0zzintegrate_nodez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_nodez00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_localzd2ze3globalz31(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzintegrate_nodez00();
	static obj_t BGl_gloz12zd2select3600zc0zzintegrate_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gloz12zd2conditional3596zc0zzintegrate_nodez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_gloz12zd2var3578zc0zzintegrate_nodez00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t
		BGl_globaliza7ezd2localzd2funz12zb5zzintegrate_nodez00(BgL_localz00_bglt,
		BgL_variablez00_bglt);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_gloz12zd2makezd2box3611z12zzintegrate_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_celledzd2bindingszd2zzintegrate_nodez00(obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl__integratezd2globaliza7ez12z67zzintegrate_nodez00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_gloz12zd2default3570zc0zzintegrate_nodez00(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static BgL_nodez00_bglt BGl_gloz12z12zzintegrate_nodez00(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_methodzd2initzd2zzintegrate_nodez00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_gloz12zd2funcall3588zc0zzintegrate_nodez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_nodez00 = BUNSPEC;
	extern obj_t
		BGl_thezd2globalzd2zzintegrate_localzd2ze3globalz31(BgL_localz00_bglt);
	static obj_t BGl_genericzd2initzd2zzintegrate_nodez00();
	static obj_t BGl_gloz12zd2atom3574zc0zzintegrate_nodez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	extern BgL_boxzd2setz12zc0_bglt BGl_makezd2boxzd2setz12z12zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_varz00_bglt, BgL_nodez00_bglt);
	static obj_t BGl__gloz12zd2default3570zc0zzintegrate_nodez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_nodez00();
	static obj_t BGl_gloz12zd2boxzd2ref3613z12zzintegrate_nodez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl__gloz12z12zzintegrate_nodez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_gloz12zd2setzd2exzd2it3606zc0zzintegrate_nodez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_integratezd2globaliza7ez12z67zzintegrate_nodez00(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_gloz12zd2cast3592zc0zzintegrate_nodez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	BGL_EXPORTED_DECL bool_t
		BGl_integratezd2celledzf3z21zzintegrate_nodez00(BgL_localz00_bglt);
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	extern BgL_letzd2varzd2_bglt BGl_makezd2letzd2varz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt, bool_t);
	extern obj_t BGl_svarzf2Iinfozf2zzintegrate_infoz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_nodez00();
	static obj_t BGl_gloz12zd2letzd2fun3602z12zzintegrate_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t __cnst[6];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3966z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2atom3573993z00,
		BGl_gloz12zd2atom3574zc0zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3967z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2kwote353994z00,
		BGl_gloz12zd2kwote3576zc0zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3968z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2var35783995z00,
		BGl_gloz12zd2var3578zc0zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3970z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2sequenc3996z00,
		BGl_gloz12zd2sequence3582zc0zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3969z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2closure3997z00,
		BGl_gloz12zd2closure3580zc0zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3971z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2app35843998z00,
		BGl_gloz12zd2app3584zc0zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3972z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2appza7d2l3999za7,
		BGl_gloz12zd2appzd2ly3586z12zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3973z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2funcall4000z00,
		BGl_gloz12zd2funcall3588zc0zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3974z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2extern34001z00,
		BGl_gloz12zd2extern3590zc0zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3975z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2cast3594002z00,
		BGl_gloz12zd2cast3592zc0zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3976z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2setq3594003z00,
		BGl_gloz12zd2setq3594zc0zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3977z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2conditi4004z00,
		BGl_gloz12zd2conditional3596zc0zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3978z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2fail3594005z00,
		BGl_gloz12zd2fail3598zc0zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3980z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2letza7d2f4006za7,
		BGl_gloz12zd2letzd2fun3602z12zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3979z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2select34007z00,
		BGl_gloz12zd2select3600zc0zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3981z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2letza7d2v4008za7,
		BGl_gloz12zd2letzd2var3604z12zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3982z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2setza7d2e4009za7,
		BGl_gloz12zd2setzd2exzd2it3606zc0zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3983z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2jumpza7d24010za7,
		BGl_gloz12zd2jumpzd2exzd2it3608zc0zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3984z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2makeza7d24011za7,
		BGl_gloz12zd2makezd2box3611z12zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3985z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2boxza7d2r4012za7,
		BGl_gloz12zd2boxzd2ref3613z12zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3986z00zzintegrate_nodez00,
		BgL_bgl_gloza712za7d2boxza7d2s4013za7,
		BGl_gloz12zd2boxzd2setz123615z00zzintegrate_nodez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3964z00zzintegrate_nodez00,
		BgL_bgl_string3964za700za7za7i4014za7, "glo!", 4);
	      DEFINE_STRING(BGl_string3965z00zzintegrate_nodez00,
		BgL_bgl_string3965za700za7za7i4015za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3987z00zzintegrate_nodez00,
		BgL_bgl_string3987za700za7za7i4016za7, "node-free", 9);
	      DEFINE_STRING(BGl_string3988z00zzintegrate_nodez00,
		BgL_bgl_string3988za700za7za7i4017za7, "Unexepected `closure' node", 26);
	      DEFINE_STRING(BGl_string3990z00zzintegrate_nodez00,
		BgL_bgl_string3990za700za7za7i4018za7,
		"aux glo!-default3570 done (write cell-integrate) cell-integrate read ",
		69);
	      DEFINE_STRING(BGl_string3989z00zzintegrate_nodez00,
		BgL_bgl_string3989za700za7za7i4019za7, "integrate_node", 14);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_gloz12zd2default3570zd2envz12zzintegrate_nodez00,
		BgL_bgl__gloza712za7d2defaul4020z00,
		BGl__gloz12zd2default3570zc0zzintegrate_nodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_integratezd2celledzf3zd2envzf3zzintegrate_nodez00,
		BgL_bgl__integrateza7d2cel4021za7,
		BGl__integratezd2celledzf3z21zzintegrate_nodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_integratezd2globaliza7ez12zd2envzb5zzintegrate_nodez00,
		BgL_bgl__integrateza7d2glo4022za7,
		BGl__integratezd2globaliza7ez12z67zzintegrate_nodez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_GENERIC(BGl_gloz12zd2envzc0zzintegrate_nodez00,
		BgL_bgl__gloza712za712za7za7inte4023z00, BGl__gloz12z12zzintegrate_nodez00,
		0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_nodez00(long
		BgL_checksumz00_2977, char *BgL_fromz00_2978)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_nodez00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_nodez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzintegrate_nodez00();
					BGl_cnstzd2initzd2zzintegrate_nodez00();
					BGl_importedzd2moduleszd2initz00zzintegrate_nodez00();
					BGl_genericzd2initzd2zzintegrate_nodez00();
					BGl_methodzd2initzd2zzintegrate_nodez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_nodez00()
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"integrate_node");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"integrate_node");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"integrate_node");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_node");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzintegrate_nodez00()
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 15 */
			{	/* Integrate/node.scm 15 */
				obj_t BgL_cportz00_2963;

				BgL_cportz00_2963 =
					bgl_open_input_string(BGl_string3990z00zzintegrate_nodez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2964;

					BgL_iz00_2964 = ((long) 5);
				BgL_loopz00_2965:
					if ((BgL_iz00_2964 == ((long) -1)))
						{	/* Integrate/node.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Integrate/node.scm 15 */
							{	/* Integrate/node.scm 15 */
								obj_t BgL_arg3992z00_2967;

								{	/* Integrate/node.scm 15 */

									{	/* Integrate/node.scm 15 */
										obj_t BgL_locationz00_2969;

										BgL_locationz00_2969 = BBOOL(((bool_t) 0));
										{	/* Integrate/node.scm 15 */

											BgL_arg3992z00_2967 =
												BGl_readz00zz__readerz00(BgL_cportz00_2963,
												BgL_locationz00_2969);
										}
									}
								}
								{	/* Integrate/node.scm 15 */
									int BgL_auxz00_2997;

									BgL_auxz00_2997 = (int) (BgL_iz00_2964);
									CNST_TABLE_SET(BgL_auxz00_2997, BgL_arg3992z00_2967);
							}}
							{	/* Integrate/node.scm 15 */
								int BgL_auxz00_2970;

								BgL_auxz00_2970 = (int) ((BgL_iz00_2964 - ((long) 1)));
								{
									long BgL_iz00_3002;

									BgL_iz00_3002 = (long) (BgL_auxz00_2970);
									BgL_iz00_2964 = BgL_iz00_3002;
									goto BgL_loopz00_2965;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzintegrate_nodez00()
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 15 */
			return BUNSPEC;
		}
	}



/* integrate-globalize! */
	BGL_EXPORTED_DEF obj_t
		BGl_integratezd2globaliza7ez12z67zzintegrate_nodez00(BgL_nodez00_bglt
		BgL_astz00_1, BgL_variablez00_bglt BgL_integratorz00_2,
		obj_t BgL_whatzf2byza2z50_3)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 36 */
			{	/* Integrate/node.scm 42 */
				BgL_valuez00_bglt BgL_funz00_942;

				BgL_funz00_942 =
					(((BgL_variablez00_bglt) CREF(BgL_integratorz00_2))->BgL_valuez00);
				{	/* Integrate/node.scm 42 */
					obj_t BgL_celledz00_943;

					{	/* Integrate/node.scm 43 */
						obj_t BgL_arg3626z00_964;

						{
							BgL_sfunz00_bglt BgL_auxz00_3005;

							BgL_auxz00_3005 = (BgL_sfunz00_bglt) (BgL_funz00_942);
							BgL_arg3626z00_964 =
								(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3005))->BgL_argsz00);
						}
						BgL_celledz00_943 =
							BGl_celledzd2bindingszd2zzintegrate_nodez00(BgL_arg3626z00_964);
					}
					{	/* Integrate/node.scm 43 */
						obj_t BgL_whatzf2byza2z50_944;

						BgL_whatzf2byza2z50_944 =
							bgl_append2(BgL_celledz00_943, BgL_whatzf2byza2z50_3);
						{	/* Integrate/node.scm 44 */

							{
								obj_t BgL_l3548z00_946;

								BgL_l3548z00_946 = BgL_whatzf2byza2z50_944;
							BgL_zc3anonymousza33616ze3z83_947:
								if (PAIRP(BgL_l3548z00_946))
									{	/* Integrate/node.scm 46 */
										{	/* Integrate/node.scm 47 */
											obj_t BgL_wze2bze2_949;

											BgL_wze2bze2_949 = CAR(BgL_l3548z00_946);
											{	/* Integrate/node.scm 47 */
												obj_t BgL_arg3618z00_950;

												obj_t BgL_arg3619z00_951;

												BgL_arg3618z00_950 = CAR(BgL_wze2bze2_949);
												BgL_arg3619z00_951 = CDR(BgL_wze2bze2_949);
												{
													BgL_variablez00_bglt BgL_auxz00_3015;

													BgL_auxz00_3015 =
														(BgL_variablez00_bglt) (BgL_arg3618z00_950);
													((((BgL_variablez00_bglt) CREF(BgL_auxz00_3015))->
															BgL_fastzd2alphazd2) =
														((obj_t) BgL_arg3619z00_951), BUNSPEC);
												}
											}
										}
										{
											obj_t BgL_l3548z00_3018;

											BgL_l3548z00_3018 = CDR(BgL_l3548z00_946);
											BgL_l3548z00_946 = BgL_l3548z00_3018;
											goto BgL_zc3anonymousza33616ze3z83_947;
										}
									}
								else
									{	/* Integrate/node.scm 46 */
										((bool_t) 1);
									}
							}
							{	/* Integrate/node.scm 49 */
								obj_t BgL_resz00_954;

								{	/* Integrate/node.scm 49 */
									BgL_nodez00_bglt BgL_arg3625z00_963;

									{	/* Integrate/node.scm 49 */
										BgL_nodez00_bglt BgL_res3876z00_1806;

										{	/* Integrate/node.scm 49 */
											obj_t BgL_method3572z00_1781;

											{	/* Integrate/node.scm 49 */
												BgL_objectz00_bglt BgL_objz00_1782;

												BgL_objz00_1782 = (BgL_objectz00_bglt) (BgL_astz00_1);
												{	/* Integrate/node.scm 49 */
													long BgL_objzd2classzd2numz00_1783;

													BgL_objzd2classzd2numz00_1783 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1782);
													{	/* Integrate/node.scm 49 */
														obj_t BgL_arg2643z00_1784;

														BgL_arg2643z00_1784 =
															PROCEDURE_REF
															(BGl_gloz12zd2envzc0zzintegrate_nodez00,
															(int) (((long) 1)));
														{	/* Integrate/node.scm 49 */
															obj_t BgL_arrayz00_1786;

															int BgL_offsetz00_1787;

															BgL_arrayz00_1786 = BgL_arg2643z00_1784;
															BgL_offsetz00_1787 =
																(int) (BgL_objzd2classzd2numz00_1783);
															{	/* Integrate/node.scm 49 */
																long BgL_offsetz00_1788;

																BgL_offsetz00_1788 =
																	((long) (BgL_offsetz00_1787) - OBJECT_TYPE);
																{	/* Integrate/node.scm 49 */
																	long BgL_modz00_1789;

																	{	/* Integrate/node.scm 49 */
																		int BgL_arg2645z00_1790;

																		BgL_arg2645z00_1790 = (int) (((long) 16));
																		{	/* Integrate/node.scm 49 */
																			long BgL_auxz00_3028;

																			BgL_auxz00_3028 =
																				(long) (BgL_arg2645z00_1790);
																			BgL_modz00_1789 =
																				(BgL_offsetz00_1788 / BgL_auxz00_3028);
																	}}
																	{	/* Integrate/node.scm 49 */
																		long BgL_restz00_1791;

																		{	/* Integrate/node.scm 49 */
																			int BgL_arg2644z00_1792;

																			BgL_arg2644z00_1792 = (int) (((long) 16));
																			{	/* Integrate/node.scm 49 */
																				long BgL_auxz00_3032;

																				BgL_auxz00_3032 =
																					(long) (BgL_arg2644z00_1792);
																				BgL_restz00_1791 =
																					(BgL_offsetz00_1788 %
																					BgL_auxz00_3032);
																		}}
																		{	/* Integrate/node.scm 49 */

																			BgL_method3572z00_1781 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1786,
																					(int) (BgL_modz00_1789)),
																				(int) (BgL_restz00_1791));
											}}}}}}}}
											BgL_res3876z00_1806 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3572z00_1781) (BgL_method3572z00_1781,
													(obj_t) (BgL_astz00_1), (obj_t) (BgL_integratorz00_2),
													BEOA));
										}
										BgL_arg3625z00_963 = BgL_res3876z00_1806;
									}
									BgL_resz00_954 =
										BGl_cellzd2formalszd2zzintegrate_nodez00(BgL_celledz00_943,
										BgL_arg3625z00_963);
								}
								{
									obj_t BgL_l3550z00_956;

									BgL_l3550z00_956 = BgL_whatzf2byza2z50_944;
								BgL_zc3anonymousza33621ze3z83_957:
									if (PAIRP(BgL_l3550z00_956))
										{	/* Integrate/node.scm 51 */
											{	/* Integrate/node.scm 52 */
												obj_t BgL_wze2bze2_959;

												BgL_wze2bze2_959 = CAR(BgL_l3550z00_956);
												{	/* Integrate/node.scm 52 */
													obj_t BgL_arg3623z00_960;

													BgL_arg3623z00_960 = CAR(BgL_wze2bze2_959);
													{
														BgL_variablez00_bglt BgL_auxz00_3049;

														BgL_auxz00_3049 =
															(BgL_variablez00_bglt) (BgL_arg3623z00_960);
														((((BgL_variablez00_bglt) CREF(BgL_auxz00_3049))->
																BgL_fastzd2alphazd2) =
															((obj_t) BUNSPEC), BUNSPEC);
													}
												}
											}
											{
												obj_t BgL_l3550z00_3052;

												BgL_l3550z00_3052 = CDR(BgL_l3550z00_956);
												BgL_l3550z00_956 = BgL_l3550z00_3052;
												goto BgL_zc3anonymousza33621ze3z83_957;
											}
										}
									else
										{	/* Integrate/node.scm 51 */
											((bool_t) 1);
										}
								}
								return BgL_resz00_954;
							}
						}
					}
				}
			}
		}
	}



/* _integrate-globalize! */
	obj_t BGl__integratezd2globaliza7ez12z67zzintegrate_nodez00(obj_t
		BgL_envz00_2867, obj_t BgL_astz00_2868, obj_t BgL_integratorz00_2869,
		obj_t BgL_whatzf2byza2z50_2870)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 36 */
			return
				BGl_integratezd2globaliza7ez12z67zzintegrate_nodez00(
				(BgL_nodez00_bglt) (BgL_astz00_2868),
				(BgL_variablez00_bglt) (BgL_integratorz00_2869),
				BgL_whatzf2byza2z50_2870);
		}
	}



/* celled-bindings */
	obj_t BGl_celledzd2bindingszd2zzintegrate_nodez00(obj_t BgL_formalsz00_4)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 59 */
			{
				obj_t BgL_celledz00_967;

				obj_t BgL_formalsz00_968;

				BgL_celledz00_967 = BNIL;
				BgL_formalsz00_968 = BgL_formalsz00_4;
			BgL_zc3anonymousza33627ze3z83_969:
				if (NULLP(BgL_formalsz00_968))
					{	/* Integrate/node.scm 63 */
						return BgL_celledz00_967;
					}
				else
					{	/* Integrate/node.scm 63 */
						if (BGl_integratezd2celledzf3z21zzintegrate_nodez00(
								(BgL_localz00_bglt) (CAR(BgL_formalsz00_968))))
							{	/* Integrate/node.scm 68 */
								BgL_typez00_bglt BgL_vtypez00_972;

								{	/* Integrate/node.scm 68 */
									BgL_variablez00_bglt BgL_obj1608z00_1816;

									{	/* Integrate/node.scm 68 */
										obj_t BgL_pairz00_1815;

										BgL_pairz00_1815 = BgL_formalsz00_968;
										BgL_obj1608z00_1816 =
											(BgL_variablez00_bglt) (CAR(BgL_pairz00_1815));
									}
									BgL_vtypez00_972 =
										(((BgL_variablez00_bglt) CREF(BgL_obj1608z00_1816))->
										BgL_typez00);
								}
								{	/* Integrate/node.scm 68 */
									obj_t BgL_ntypez00_973;

									if (
										((obj_t) (BgL_vtypez00_972) ==
											BGl_za2_za2z00zztype_cachez00))
										{	/* Integrate/node.scm 70 */
											BgL_ntypez00_973 = BGl_za2objza2z00zztype_cachez00;
										}
									else
										{	/* Integrate/node.scm 70 */
											if (BGl_bigloozd2typezf3z21zztype_typez00
												(BgL_vtypez00_972))
												{	/* Integrate/node.scm 71 */
													BgL_ntypez00_973 = (obj_t) (BgL_vtypez00_972);
												}
											else
												{	/* Integrate/node.scm 72 */
													bool_t BgL_testz00_3072;

													{	/* Integrate/node.scm 72 */
														obj_t BgL_auxz00_3073;

														{	/* Integrate/node.scm 72 */
															BgL_variablez00_bglt BgL_obj1614z00_1818;

															{	/* Integrate/node.scm 72 */
																obj_t BgL_pairz00_1817;

																BgL_pairz00_1817 = BgL_formalsz00_968;
																BgL_obj1614z00_1818 =
																	(BgL_variablez00_bglt) (CAR
																	(BgL_pairz00_1817));
															}
															BgL_auxz00_3073 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_obj1614z00_1818))->BgL_accessz00);
														}
														BgL_testz00_3072 =
															(BgL_auxz00_3073 == CNST_TABLE_REF(((long) 0)));
													}
													if (BgL_testz00_3072)
														{	/* Integrate/node.scm 72 */
															BgL_ntypez00_973 = (obj_t) (BgL_vtypez00_972);
														}
													else
														{	/* Integrate/node.scm 72 */
															BgL_ntypez00_973 =
																BGl_za2objza2z00zztype_cachez00;
														}
												}
										}
									{	/* Integrate/node.scm 69 */
										BgL_localz00_bglt BgL_varz00_974;

										{	/* Integrate/node.scm 74 */
											obj_t BgL_arg3635z00_982;

											{	/* Integrate/node.scm 74 */
												BgL_variablez00_bglt BgL_obj1604z00_1820;

												{	/* Integrate/node.scm 74 */
													obj_t BgL_pairz00_1819;

													BgL_pairz00_1819 = BgL_formalsz00_968;
													BgL_obj1604z00_1820 =
														(BgL_variablez00_bglt) (CAR(BgL_pairz00_1819));
												}
												BgL_arg3635z00_982 =
													(((BgL_variablez00_bglt) CREF(BgL_obj1604z00_1820))->
													BgL_idz00);
											}
											BgL_varz00_974 =
												BGl_makezd2localzd2svarz00zzast_localz00
												(BgL_arg3635z00_982,
												(BgL_typez00_bglt) (BgL_ntypez00_973));
										}
										{	/* Integrate/node.scm 74 */
											obj_t BgL_oze2nze2_975;

											BgL_oze2nze2_975 =
												MAKE_PAIR(CAR(BgL_formalsz00_968),
												(obj_t) (BgL_varz00_974));
											{	/* Integrate/node.scm 75 */

												{	/* Integrate/node.scm 76 */
													BgL_variablez00_bglt BgL_obj1616z00_1822;

													obj_t BgL_val1615z00_1823;

													BgL_obj1616z00_1822 =
														(BgL_variablez00_bglt) (BgL_varz00_974);
													BgL_val1615z00_1823 = CNST_TABLE_REF(((long) 1));
													((((BgL_variablez00_bglt) CREF(BgL_obj1616z00_1822))->
															BgL_accessz00) =
														((obj_t) BgL_val1615z00_1823), BUNSPEC);
												}
												{	/* Integrate/node.scm 77 */
													BgL_svarz00_bglt BgL_obj3496z00_976;

													{
														BgL_svarz00_bglt BgL_auxz00_3091;

														{	/* Integrate/node.scm 77 */
															BgL_valuez00_bglt BgL_auxz00_3092;

															{
																BgL_variablez00_bglt BgL_auxz00_3093;

																BgL_auxz00_3093 =
																	(BgL_variablez00_bglt) (BgL_varz00_974);
																BgL_auxz00_3092 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_3093))->BgL_valuez00);
															}
															BgL_auxz00_3091 =
																(BgL_svarz00_bglt) (BgL_auxz00_3092);
														}
														BgL_obj3496z00_976 =
															((BgL_svarz00_bglt) BgL_auxz00_3091);
													}
													{	/* Integrate/node.scm 77 */
														obj_t BgL_auxz00_3100;

														BgL_objectz00_bglt BgL_auxz00_3098;

														BgL_auxz00_3100 =
															BGl_wideningzd2svarzf2Iinfoz20zzintegrate_infoz00
															(BUNSPEC, BUNSPEC, ((bool_t) 1), ((bool_t) 1));
														BgL_auxz00_3098 =
															(BgL_objectz00_bglt) (BgL_obj3496z00_976);
														BGL_OBJECT_WIDENING_SET(BgL_auxz00_3098,
															BgL_auxz00_3100);
													}
													BGL_OBJECT_CLASS_NUM_SET(
														(BgL_objectz00_bglt) (BgL_obj3496z00_976),
														BGl_classzd2numzd2zz__objectz00
														(BGl_svarzf2Iinfozf2zzintegrate_infoz00));
													BgL_obj3496z00_976;
												}
												{	/* Integrate/node.scm 80 */
													obj_t BgL_arg3632z00_979;

													obj_t BgL_arg3633z00_980;

													BgL_arg3632z00_979 =
														MAKE_PAIR(BgL_oze2nze2_975, BgL_celledz00_967);
													BgL_arg3633z00_980 = CDR(BgL_formalsz00_968);
													{
														obj_t BgL_formalsz00_3109;

														obj_t BgL_celledz00_3108;

														BgL_celledz00_3108 = BgL_arg3632z00_979;
														BgL_formalsz00_3109 = BgL_arg3633z00_980;
														BgL_formalsz00_968 = BgL_formalsz00_3109;
														BgL_celledz00_967 = BgL_celledz00_3108;
														goto BgL_zc3anonymousza33627ze3z83_969;
													}
												}
											}
										}
									}
								}
							}
						else
							{
								obj_t BgL_formalsz00_3110;

								BgL_formalsz00_3110 = CDR(BgL_formalsz00_968);
								BgL_formalsz00_968 = BgL_formalsz00_3110;
								goto BgL_zc3anonymousza33627ze3z83_969;
							}
					}
			}
		}
	}



/* cell-formals */
	obj_t BGl_cellzd2formalszd2zzintegrate_nodez00(obj_t BgL_celledz00_5,
		BgL_nodez00_bglt BgL_bodyz00_6)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 85 */
			if (NULLP(BgL_celledz00_5))
				{	/* Integrate/node.scm 86 */
					return (obj_t) (BgL_bodyz00_6);
				}
			else
				{	/* Integrate/node.scm 88 */
					obj_t BgL_locz00_995;

					BgL_locz00_995 =
						(((BgL_nodez00_bglt) CREF(BgL_bodyz00_6))->BgL_locz00);
					{	/* Integrate/node.scm 89 */
						obj_t BgL_arg3648z00_997;

						{	/* Integrate/node.scm 93 */
							obj_t BgL_head3554z00_1000;

							BgL_head3554z00_1000 = MAKE_PAIR(BNIL, BNIL);
							{
								obj_t BgL_l3552z00_1002;

								obj_t BgL_tail3555z00_1003;

								BgL_l3552z00_1002 = BgL_celledz00_5;
								BgL_tail3555z00_1003 = BgL_head3554z00_1000;
							BgL_zc3anonymousza33650ze3z83_1004:
								if (NULLP(BgL_l3552z00_1002))
									{	/* Integrate/node.scm 93 */
										BgL_arg3648z00_997 = CDR(BgL_head3554z00_1000);
									}
								else
									{	/* Integrate/node.scm 93 */
										obj_t BgL_newtail3556z00_1006;

										{	/* Integrate/node.scm 93 */
											obj_t BgL_arg3653z00_1008;

											{	/* Integrate/node.scm 93 */
												obj_t BgL_oze2nze2_1010;

												BgL_oze2nze2_1010 = CAR(BgL_l3552z00_1002);
												{	/* Integrate/node.scm 94 */
													obj_t BgL_arg3655z00_1011;

													BgL_makezd2boxzd2_bglt BgL_arg3656z00_1012;

													BgL_arg3655z00_1011 = CDR(BgL_oze2nze2_1010);
													{	/* Integrate/node.scm 98 */
														BgL_varz00_bglt BgL_arg3657z00_1013;

														obj_t BgL_arg3658z00_1014;

														{	/* Integrate/node.scm 98 */
															obj_t BgL_arg3659z00_1015;

															BgL_arg3659z00_1015 = CAR(BgL_oze2nze2_1010);
															BgL_arg3657z00_1013 =
																BGl_makezd2varzd2zzast_nodez00(BgL_locz00_995,
																(BgL_typez00_bglt)
																(BGl_za2_za2z00zztype_cachez00),
																(BgL_variablez00_bglt) (BgL_arg3659z00_1015));
														}
														BgL_arg3658z00_1014 = CAR(BgL_oze2nze2_1010);
														BgL_arg3656z00_1012 =
															BGl_azd2makezd2cellz00zzintegrate_nodez00(
															(BgL_nodez00_bglt) (BgL_arg3657z00_1013),
															(BgL_variablez00_bglt) (BgL_arg3658z00_1014));
													}
													BgL_arg3653z00_1008 =
														MAKE_PAIR(BgL_arg3655z00_1011,
														(obj_t) (BgL_arg3656z00_1012));
												}
											}
											BgL_newtail3556z00_1006 =
												MAKE_PAIR(BgL_arg3653z00_1008, BNIL);
										}
										SET_CDR(BgL_tail3555z00_1003, BgL_newtail3556z00_1006);
										{
											obj_t BgL_tail3555z00_3136;

											obj_t BgL_l3552z00_3134;

											BgL_l3552z00_3134 = CDR(BgL_l3552z00_1002);
											BgL_tail3555z00_3136 = BgL_newtail3556z00_1006;
											BgL_tail3555z00_1003 = BgL_tail3555z00_3136;
											BgL_l3552z00_1002 = BgL_l3552z00_3134;
											goto BgL_zc3anonymousza33650ze3z83_1004;
										}
									}
							}
						}
						return
							(obj_t) (BGl_makezd2letzd2varz00zzast_nodez00(BgL_locz00_995,
								(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00), BUNSPEC,
								BINT(((long) -1)), BgL_arg3648z00_997, BgL_bodyz00_6,
								((bool_t) 1)));
		}}}
	}



/* a-make-cell */
	BgL_makezd2boxzd2_bglt
		BGl_azd2makezd2cellz00zzintegrate_nodez00(BgL_nodez00_bglt BgL_nodez00_7,
		BgL_variablez00_bglt BgL_variablez00_8)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 105 */
			{	/* Integrate/node.scm 109 */
				BgL_variablez00_bglt BgL_obj1616z00_1845;

				obj_t BgL_val1615z00_1846;

				BgL_obj1616z00_1845 = BgL_variablez00_8;
				BgL_val1615z00_1846 = CNST_TABLE_REF(((long) 1));
				((((BgL_variablez00_bglt) CREF(BgL_obj1616z00_1845))->BgL_accessz00) =
					((obj_t) BgL_val1615z00_1846), BUNSPEC);
			}
			{	/* Integrate/node.scm 110 */
				BgL_valuez00_bglt BgL_arg3660z00_1018;

				BgL_arg3660z00_1018 =
					(((BgL_variablez00_bglt) CREF(BgL_variablez00_8))->BgL_valuez00);
				{	/* Integrate/node.scm 110 */
					BgL_svarzf2iinfozf2_bglt BgL_obj3272z00_1848;

					bool_t BgL_val3270z00_1849;

					BgL_obj3272z00_1848 =
						(BgL_svarzf2iinfozf2_bglt) (BgL_arg3660z00_1018);
					BgL_val3270z00_1849 = ((bool_t) 1);
					{
						obj_t BgL_auxz00_3145;

						{	/* Integrate/node.scm 110 */
							BgL_objectz00_bglt BgL_auxz00_3146;

							BgL_auxz00_3146 = (BgL_objectz00_bglt) (BgL_obj3272z00_1848);
							BgL_auxz00_3145 = BGL_OBJECT_WIDENING(BgL_auxz00_3146);
						}
						((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_auxz00_3145))->
								BgL_celledzf3zf3) = ((bool_t) BgL_val3270z00_1849), BUNSPEC);
			}}}
			{	/* Integrate/node.scm 111 */
				obj_t BgL_arg3661z00_1019;

				BgL_arg3661z00_1019 =
					(((BgL_nodez00_bglt) CREF(BgL_nodez00_7))->BgL_locz00);
				return
					BGl_makezd2makezd2boxz00zzast_nodez00(BgL_arg3661z00_1019,
					(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00), BUNSPEC,
					BINT(((long) -1)), BgL_nodez00_7);
		}}
	}



/* integrate-celled? */
	BGL_EXPORTED_DEF bool_t
		BGl_integratezd2celledzf3z21zzintegrate_nodez00(BgL_localz00_bglt
		BgL_variablez00_9)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 116 */
			{	/* Integrate/node.scm 127 */
				bool_t BgL_testz00_3154;

				{	/* Integrate/node.scm 127 */
					BgL_valuez00_bglt BgL_arg3667z00_1028;

					{
						BgL_variablez00_bglt BgL_auxz00_3155;

						BgL_auxz00_3155 = (BgL_variablez00_bglt) (BgL_variablez00_9);
						BgL_arg3667z00_1028 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_3155))->BgL_valuez00);
					}
					{	/* Integrate/node.scm 127 */
						obj_t BgL_obj3258z00_1852;

						BgL_obj3258z00_1852 = (obj_t) (BgL_arg3667z00_1028);
						BgL_testz00_3154 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj3258z00_1852,
							BGl_svarzf2Iinfozf2zzintegrate_infoz00);
				}}
				if (BgL_testz00_3154)
					{	/* Integrate/node.scm 128 */
						bool_t BgL__ortest_3503z00_1022;

						{	/* Integrate/node.scm 128 */
							BgL_svarzf2iinfozf2_bglt BgL_obj3269z00_1854;

							{	/* Integrate/node.scm 128 */
								BgL_variablez00_bglt BgL_obj1611z00_1853;

								BgL_obj1611z00_1853 =
									(BgL_variablez00_bglt) (BgL_variablez00_9);
								BgL_obj3269z00_1854 =
									(BgL_svarzf2iinfozf2_bglt) (
									(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1853))->
										BgL_valuez00));
							}
							{
								obj_t BgL_auxz00_3163;

								{	/* Integrate/node.scm 128 */
									BgL_objectz00_bglt BgL_auxz00_3164;

									BgL_auxz00_3164 = (BgL_objectz00_bglt) (BgL_obj3269z00_1854);
									BgL_auxz00_3163 = BGL_OBJECT_WIDENING(BgL_auxz00_3164);
								}
								BgL__ortest_3503z00_1022 =
									(((BgL_svarzf2iinfozf2_bglt) CREF(BgL_auxz00_3163))->
									BgL_celledzf3zf3);
							}
						}
						if (BgL__ortest_3503z00_1022)
							{	/* Integrate/node.scm 128 */
								return BgL__ortest_3503z00_1022;
							}
						else
							{	/* Integrate/node.scm 129 */
								bool_t BgL_testz00_3169;

								{	/* Integrate/node.scm 129 */
									obj_t BgL_auxz00_3170;

									{	/* Integrate/node.scm 129 */
										obj_t BgL_auxz00_3171;

										{
											BgL_variablez00_bglt BgL_auxz00_3172;

											BgL_auxz00_3172 =
												(BgL_variablez00_bglt) (BgL_variablez00_9);
											BgL_auxz00_3171 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_3172))->
												BgL_accessz00);
										}
										BgL_auxz00_3170 =
											BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3171,
											CNST_TABLE_REF(((long) 2)));
									}
									BgL_testz00_3169 = CBOOL(BgL_auxz00_3170);
								}
								if (BgL_testz00_3169)
									{	/* Integrate/node.scm 130 */
										BgL_svarzf2iinfozf2_bglt BgL_obj3265z00_1857;

										{	/* Integrate/node.scm 130 */
											BgL_variablez00_bglt BgL_obj1611z00_1856;

											BgL_obj1611z00_1856 =
												(BgL_variablez00_bglt) (BgL_variablez00_9);
											BgL_obj3265z00_1857 =
												(BgL_svarzf2iinfozf2_bglt) (
												(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1856))->
													BgL_valuez00));
										}
										{
											obj_t BgL_auxz00_3181;

											{	/* Integrate/node.scm 130 */
												BgL_objectz00_bglt BgL_auxz00_3182;

												BgL_auxz00_3182 =
													(BgL_objectz00_bglt) (BgL_obj3265z00_1857);
												BgL_auxz00_3181 = BGL_OBJECT_WIDENING(BgL_auxz00_3182);
											}
											return
												(((BgL_svarzf2iinfozf2_bglt) CREF(BgL_auxz00_3181))->
												BgL_kapturedzf3zf3);
										}
									}
								else
									{	/* Integrate/node.scm 129 */
										return ((bool_t) 0);
									}
							}
					}
				else
					{	/* Integrate/node.scm 127 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* _integrate-celled? */
	obj_t BGl__integratezd2celledzf3z21zzintegrate_nodez00(obj_t BgL_envz00_2874,
		obj_t BgL_variablez00_2875)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 116 */
			return
				BBOOL(BGl_integratezd2celledzf3z21zzintegrate_nodez00(
					(BgL_localz00_bglt) (BgL_variablez00_2875)));
		}
	}



/* glo*! */
	obj_t BGl_gloza2z12zb0zzintegrate_nodez00(obj_t BgL_nodeza2za2_56,
		obj_t BgL_integratorz00_57)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 406 */
			{
				obj_t BgL_nodeza2za2_1030;

				BgL_nodeza2za2_1030 = BgL_nodeza2za2_56;
			BgL_zc3anonymousza33668ze3z83_1031:
				if (NULLP(BgL_nodeza2za2_1030))
					{	/* Integrate/node.scm 408 */
						return CNST_TABLE_REF(((long) 3));
					}
				else
					{	/* Integrate/node.scm 408 */
						{	/* Integrate/node.scm 411 */
							BgL_nodez00_bglt BgL_arg3670z00_1033;

							{	/* Integrate/node.scm 411 */
								obj_t BgL_arg3671z00_1034;

								BgL_arg3671z00_1034 = CAR(BgL_nodeza2za2_1030);
								{	/* Integrate/node.scm 411 */
									BgL_nodez00_bglt BgL_res3879z00_1887;

									{	/* Integrate/node.scm 411 */
										BgL_nodez00_bglt BgL_nodez00_1860;

										BgL_variablez00_bglt BgL_integratorz00_1861;

										BgL_nodez00_1860 = (BgL_nodez00_bglt) (BgL_arg3671z00_1034);
										BgL_integratorz00_1861 =
											(BgL_variablez00_bglt) (BgL_integratorz00_57);
										{	/* Integrate/node.scm 411 */
											obj_t BgL_method3572z00_1862;

											{	/* Integrate/node.scm 411 */
												BgL_objectz00_bglt BgL_objz00_1863;

												BgL_objz00_1863 =
													(BgL_objectz00_bglt) (BgL_nodez00_1860);
												{	/* Integrate/node.scm 411 */
													long BgL_objzd2classzd2numz00_1864;

													BgL_objzd2classzd2numz00_1864 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1863);
													{	/* Integrate/node.scm 411 */
														obj_t BgL_arg2643z00_1865;

														BgL_arg2643z00_1865 =
															PROCEDURE_REF
															(BGl_gloz12zd2envzc0zzintegrate_nodez00,
															(int) (((long) 1)));
														{	/* Integrate/node.scm 411 */
															obj_t BgL_arrayz00_1867;

															int BgL_offsetz00_1868;

															BgL_arrayz00_1867 = BgL_arg2643z00_1865;
															BgL_offsetz00_1868 =
																(int) (BgL_objzd2classzd2numz00_1864);
															{	/* Integrate/node.scm 411 */
																long BgL_offsetz00_1869;

																BgL_offsetz00_1869 =
																	((long) (BgL_offsetz00_1868) - OBJECT_TYPE);
																{	/* Integrate/node.scm 411 */
																	long BgL_modz00_1870;

																	{	/* Integrate/node.scm 411 */
																		int BgL_arg2645z00_1871;

																		BgL_arg2645z00_1871 = (int) (((long) 16));
																		{	/* Integrate/node.scm 411 */
																			long BgL_auxz00_3203;

																			BgL_auxz00_3203 =
																				(long) (BgL_arg2645z00_1871);
																			BgL_modz00_1870 =
																				(BgL_offsetz00_1869 / BgL_auxz00_3203);
																	}}
																	{	/* Integrate/node.scm 411 */
																		long BgL_restz00_1872;

																		{	/* Integrate/node.scm 411 */
																			int BgL_arg2644z00_1873;

																			BgL_arg2644z00_1873 = (int) (((long) 16));
																			{	/* Integrate/node.scm 411 */
																				long BgL_auxz00_3207;

																				BgL_auxz00_3207 =
																					(long) (BgL_arg2644z00_1873);
																				BgL_restz00_1872 =
																					(BgL_offsetz00_1869 %
																					BgL_auxz00_3207);
																		}}
																		{	/* Integrate/node.scm 411 */

																			BgL_method3572z00_1862 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1867,
																					(int) (BgL_modz00_1870)),
																				(int) (BgL_restz00_1872));
											}}}}}}}}
											BgL_res3879z00_1887 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3572z00_1862) (BgL_method3572z00_1862,
													(obj_t) (BgL_nodez00_1860),
													(obj_t) (BgL_integratorz00_1861), BEOA));
									}}
									BgL_arg3670z00_1033 = BgL_res3879z00_1887;
							}}
							{	/* Integrate/node.scm 411 */
								obj_t BgL_auxz00_3219;

								BgL_auxz00_3219 = (obj_t) (BgL_arg3670z00_1033);
								SET_CAR(BgL_nodeza2za2_1030, BgL_auxz00_3219);
						}}
						{
							obj_t BgL_nodeza2za2_3222;

							BgL_nodeza2za2_3222 = CDR(BgL_nodeza2za2_1030);
							BgL_nodeza2za2_1030 = BgL_nodeza2za2_3222;
							goto BgL_zc3anonymousza33668ze3z83_1031;
						}
					}
			}
		}
	}



/* globalize-local-fun! */
	obj_t BGl_globaliza7ezd2localzd2funz12zb5zzintegrate_nodez00(BgL_localz00_bglt
		BgL_localz00_58, BgL_variablez00_bglt BgL_integratorz00_59)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 417 */
			{	/* Integrate/node.scm 420 */
				BgL_valuez00_bglt BgL_funz00_1037;

				{
					BgL_variablez00_bglt BgL_auxz00_3224;

					BgL_auxz00_3224 = (BgL_variablez00_bglt) (BgL_localz00_58);
					BgL_funz00_1037 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_3224))->BgL_valuez00);
				}
				{	/* Integrate/node.scm 420 */
					obj_t BgL_obodyz00_1038;

					{
						BgL_sfunz00_bglt BgL_auxz00_3227;

						BgL_auxz00_3227 = (BgL_sfunz00_bglt) (BgL_funz00_1037);
						BgL_obodyz00_1038 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3227))->BgL_bodyz00);
					}
					{	/* Integrate/node.scm 421 */

						if (((obj_t) (BgL_localz00_58) == (obj_t) (BgL_integratorz00_59)))
							{	/* Integrate/node.scm 424 */
								BgL_nodez00_bglt BgL_arg3674z00_1040;

								{	/* Integrate/node.scm 424 */
									BgL_nodez00_bglt BgL_res3882z00_1920;

									{	/* Integrate/node.scm 424 */
										BgL_nodez00_bglt BgL_nodez00_1893;

										BgL_nodez00_1893 = (BgL_nodez00_bglt) (BgL_obodyz00_1038);
										{	/* Integrate/node.scm 424 */
											obj_t BgL_method3572z00_1895;

											{	/* Integrate/node.scm 424 */
												BgL_objectz00_bglt BgL_objz00_1896;

												BgL_objz00_1896 =
													(BgL_objectz00_bglt) (BgL_nodez00_1893);
												{	/* Integrate/node.scm 424 */
													long BgL_objzd2classzd2numz00_1897;

													BgL_objzd2classzd2numz00_1897 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1896);
													{	/* Integrate/node.scm 424 */
														obj_t BgL_arg2643z00_1898;

														BgL_arg2643z00_1898 =
															PROCEDURE_REF
															(BGl_gloz12zd2envzc0zzintegrate_nodez00,
															(int) (((long) 1)));
														{	/* Integrate/node.scm 424 */
															obj_t BgL_arrayz00_1900;

															int BgL_offsetz00_1901;

															BgL_arrayz00_1900 = BgL_arg2643z00_1898;
															BgL_offsetz00_1901 =
																(int) (BgL_objzd2classzd2numz00_1897);
															{	/* Integrate/node.scm 424 */
																long BgL_offsetz00_1902;

																BgL_offsetz00_1902 =
																	((long) (BgL_offsetz00_1901) - OBJECT_TYPE);
																{	/* Integrate/node.scm 424 */
																	long BgL_modz00_1903;

																	{	/* Integrate/node.scm 424 */
																		int BgL_arg2645z00_1904;

																		BgL_arg2645z00_1904 = (int) (((long) 16));
																		{	/* Integrate/node.scm 424 */
																			long BgL_auxz00_3243;

																			BgL_auxz00_3243 =
																				(long) (BgL_arg2645z00_1904);
																			BgL_modz00_1903 =
																				(BgL_offsetz00_1902 / BgL_auxz00_3243);
																	}}
																	{	/* Integrate/node.scm 424 */
																		long BgL_restz00_1905;

																		{	/* Integrate/node.scm 424 */
																			int BgL_arg2644z00_1906;

																			BgL_arg2644z00_1906 = (int) (((long) 16));
																			{	/* Integrate/node.scm 424 */
																				long BgL_auxz00_3247;

																				BgL_auxz00_3247 =
																					(long) (BgL_arg2644z00_1906);
																				BgL_restz00_1905 =
																					(BgL_offsetz00_1902 %
																					BgL_auxz00_3247);
																		}}
																		{	/* Integrate/node.scm 424 */

																			BgL_method3572z00_1895 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1900,
																					(int) (BgL_modz00_1903)),
																				(int) (BgL_restz00_1905));
											}}}}}}}}
											BgL_res3882z00_1920 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3572z00_1895) (BgL_method3572z00_1895,
													(obj_t) (BgL_nodez00_1893),
													(obj_t) (BgL_integratorz00_59), BEOA));
									}}
									BgL_arg3674z00_1040 = BgL_res3882z00_1920;
								}
								{
									obj_t BgL_auxz00_3261;

									BgL_sfunz00_bglt BgL_auxz00_3259;

									BgL_auxz00_3261 = (obj_t) (BgL_arg3674z00_1040);
									BgL_auxz00_3259 = (BgL_sfunz00_bglt) (BgL_funz00_1037);
									return
										((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3259))->BgL_bodyz00) =
										((obj_t) BgL_auxz00_3261), BUNSPEC);
								}
							}
						else
							{	/* Integrate/node.scm 425 */
								bool_t BgL_testz00_3264;

								{	/* Integrate/node.scm 425 */
									bool_t BgL_testz00_3265;

									{	/* Integrate/node.scm 425 */
										obj_t BgL_obj3389z00_1923;

										BgL_obj3389z00_1923 = (obj_t) (BgL_funz00_1037);
										BgL_testz00_3265 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj3389z00_1923,
											BGl_sfunzf2Iinfozf2zzintegrate_infoz00);
									}
									if (BgL_testz00_3265)
										{	/* Integrate/node.scm 425 */
											BgL_sfunzf2iinfozf2_bglt BgL_obj3425z00_1924;

											BgL_obj3425z00_1924 =
												(BgL_sfunzf2iinfozf2_bglt) (BgL_funz00_1037);
											{
												obj_t BgL_auxz00_3269;

												{	/* Integrate/node.scm 425 */
													BgL_objectz00_bglt BgL_auxz00_3270;

													BgL_auxz00_3270 =
														(BgL_objectz00_bglt) (BgL_obj3425z00_1924);
													BgL_auxz00_3269 =
														BGL_OBJECT_WIDENING(BgL_auxz00_3270);
												}
												BgL_testz00_3264 =
													(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3269))->
													BgL_gzf3zf3);
											}
										}
									else
										{	/* Integrate/node.scm 425 */
											BgL_testz00_3264 = ((bool_t) 0);
										}
								}
								if (BgL_testz00_3264)
									{	/* Integrate/node.scm 425 */
										return BUNSPEC;
									}
								else
									{	/* Integrate/node.scm 428 */
										obj_t BgL_celledz00_1042;

										{	/* Integrate/node.scm 428 */
											obj_t BgL_arg3685z00_1062;

											{
												BgL_sfunz00_bglt BgL_auxz00_3274;

												BgL_auxz00_3274 = (BgL_sfunz00_bglt) (BgL_funz00_1037);
												BgL_arg3685z00_1062 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3274))->
													BgL_argsz00);
											}
											BgL_celledz00_1042 =
												BGl_celledzd2bindingszd2zzintegrate_nodez00
												(BgL_arg3685z00_1062);
										}
										{
											obj_t BgL_l3566z00_1044;

											BgL_l3566z00_1044 = BgL_celledz00_1042;
										BgL_zc3anonymousza33676ze3z83_1045:
											if (PAIRP(BgL_l3566z00_1044))
												{	/* Integrate/node.scm 429 */
													{	/* Integrate/node.scm 430 */
														obj_t BgL_wze2bze2_1047;

														BgL_wze2bze2_1047 = CAR(BgL_l3566z00_1044);
														{	/* Integrate/node.scm 430 */
															obj_t BgL_arg3678z00_1048;

															obj_t BgL_arg3679z00_1049;

															BgL_arg3678z00_1048 = CAR(BgL_wze2bze2_1047);
															BgL_arg3679z00_1049 = CDR(BgL_wze2bze2_1047);
															{
																BgL_variablez00_bglt BgL_auxz00_3283;

																BgL_auxz00_3283 =
																	(BgL_variablez00_bglt) (BgL_arg3678z00_1048);
																((((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_3283))->
																		BgL_fastzd2alphazd2) =
																	((obj_t) BgL_arg3679z00_1049), BUNSPEC);
															}
														}
													}
													{
														obj_t BgL_l3566z00_3286;

														BgL_l3566z00_3286 = CDR(BgL_l3566z00_1044);
														BgL_l3566z00_1044 = BgL_l3566z00_3286;
														goto BgL_zc3anonymousza33676ze3z83_1045;
													}
												}
											else
												{	/* Integrate/node.scm 429 */
													((bool_t) 1);
												}
										}
										{	/* Integrate/node.scm 432 */
											BgL_nodez00_bglt BgL_nbody1z00_1052;

											{	/* Integrate/node.scm 432 */
												BgL_nodez00_bglt BgL_res3885z00_1960;

												{	/* Integrate/node.scm 432 */
													BgL_nodez00_bglt BgL_nodez00_1933;

													BgL_nodez00_1933 =
														(BgL_nodez00_bglt) (BgL_obodyz00_1038);
													{	/* Integrate/node.scm 432 */
														obj_t BgL_method3572z00_1935;

														{	/* Integrate/node.scm 432 */
															BgL_objectz00_bglt BgL_objz00_1936;

															BgL_objz00_1936 =
																(BgL_objectz00_bglt) (BgL_nodez00_1933);
															{	/* Integrate/node.scm 432 */
																long BgL_objzd2classzd2numz00_1937;

																BgL_objzd2classzd2numz00_1937 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1936);
																{	/* Integrate/node.scm 432 */
																	obj_t BgL_arg2643z00_1938;

																	BgL_arg2643z00_1938 =
																		PROCEDURE_REF
																		(BGl_gloz12zd2envzc0zzintegrate_nodez00,
																		(int) (((long) 1)));
																	{	/* Integrate/node.scm 432 */
																		obj_t BgL_arrayz00_1940;

																		int BgL_offsetz00_1941;

																		BgL_arrayz00_1940 = BgL_arg2643z00_1938;
																		BgL_offsetz00_1941 =
																			(int) (BgL_objzd2classzd2numz00_1937);
																		{	/* Integrate/node.scm 432 */
																			long BgL_offsetz00_1942;

																			BgL_offsetz00_1942 =
																				(
																				(long) (BgL_offsetz00_1941) -
																				OBJECT_TYPE);
																			{	/* Integrate/node.scm 432 */
																				long BgL_modz00_1943;

																				{	/* Integrate/node.scm 432 */
																					int BgL_arg2645z00_1944;

																					BgL_arg2645z00_1944 =
																						(int) (((long) 16));
																					{	/* Integrate/node.scm 432 */
																						long BgL_auxz00_3297;

																						BgL_auxz00_3297 =
																							(long) (BgL_arg2645z00_1944);
																						BgL_modz00_1943 =
																							(BgL_offsetz00_1942 /
																							BgL_auxz00_3297);
																				}}
																				{	/* Integrate/node.scm 432 */
																					long BgL_restz00_1945;

																					{	/* Integrate/node.scm 432 */
																						int BgL_arg2644z00_1946;

																						BgL_arg2644z00_1946 =
																							(int) (((long) 16));
																						{	/* Integrate/node.scm 432 */
																							long BgL_auxz00_3301;

																							BgL_auxz00_3301 =
																								(long) (BgL_arg2644z00_1946);
																							BgL_restz00_1945 =
																								(BgL_offsetz00_1942 %
																								BgL_auxz00_3301);
																					}}
																					{	/* Integrate/node.scm 432 */

																						BgL_method3572z00_1935 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1940,
																								(int) (BgL_modz00_1943)),
																							(int) (BgL_restz00_1945));
														}}}}}}}}
														BgL_res3885z00_1960 =
															(BgL_nodez00_bglt) (PROCEDURE_ENTRY
															(BgL_method3572z00_1935) (BgL_method3572z00_1935,
																(obj_t) (BgL_nodez00_1933),
																(obj_t) (BgL_integratorz00_59), BEOA));
												}}
												BgL_nbody1z00_1052 = BgL_res3885z00_1960;
											}
											{	/* Integrate/node.scm 432 */
												obj_t BgL_nbody2z00_1053;

												BgL_nbody2z00_1053 =
													BGl_cellzd2formalszd2zzintegrate_nodez00
													(BgL_celledz00_1042, BgL_nbody1z00_1052);
												{	/* Integrate/node.scm 433 */

													{
														obj_t BgL_l3568z00_1055;

														BgL_l3568z00_1055 = BgL_celledz00_1042;
													BgL_zc3anonymousza33681ze3z83_1056:
														if (PAIRP(BgL_l3568z00_1055))
															{	/* Integrate/node.scm 434 */
																{	/* Integrate/node.scm 435 */
																	obj_t BgL_wze2bze2_1058;

																	BgL_wze2bze2_1058 = CAR(BgL_l3568z00_1055);
																	{	/* Integrate/node.scm 435 */
																		obj_t BgL_arg3683z00_1059;

																		BgL_arg3683z00_1059 =
																			CAR(BgL_wze2bze2_1058);
																		{
																			BgL_variablez00_bglt BgL_auxz00_3318;

																			BgL_auxz00_3318 =
																				(BgL_variablez00_bglt)
																				(BgL_arg3683z00_1059);
																			((((BgL_variablez00_bglt)
																						CREF(BgL_auxz00_3318))->
																					BgL_fastzd2alphazd2) =
																				((obj_t) BUNSPEC), BUNSPEC);
																		}
																	}
																}
																{
																	obj_t BgL_l3568z00_3321;

																	BgL_l3568z00_3321 = CDR(BgL_l3568z00_1055);
																	BgL_l3568z00_1055 = BgL_l3568z00_3321;
																	goto BgL_zc3anonymousza33681ze3z83_1056;
																}
															}
														else
															{	/* Integrate/node.scm 434 */
																((bool_t) 1);
															}
													}
													{
														BgL_sfunz00_bglt BgL_auxz00_3323;

														BgL_auxz00_3323 =
															(BgL_sfunz00_bglt) (BgL_funz00_1037);
														return
															((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3323))->
																BgL_bodyz00) =
															((obj_t) BgL_nbody2z00_1053), BUNSPEC);
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



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_nodez00()
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00,
				BGl_gloz12zd2default3570zd2envz12zzintegrate_nodez00,
				BGl_nodez00zzast_nodez00, BGl_string3964z00zzintegrate_nodez00);
		}
	}



/* glo! */
	BgL_nodez00_bglt BGl_gloz12z12zzintegrate_nodez00(BgL_nodez00_bglt
		BgL_nodez00_10, BgL_variablez00_bglt BgL_integratorz00_11)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 135 */
			{	/* Integrate/node.scm 135 */
				obj_t BgL_method3572z00_1969;

				{	/* Integrate/node.scm 135 */
					BgL_objectz00_bglt BgL_objz00_1970;

					BgL_objz00_1970 = (BgL_objectz00_bglt) (BgL_nodez00_10);
					{	/* Integrate/node.scm 135 */
						long BgL_objzd2classzd2numz00_1971;

						BgL_objzd2classzd2numz00_1971 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1970);
						{	/* Integrate/node.scm 135 */
							obj_t BgL_arg2643z00_1972;

							BgL_arg2643z00_1972 =
								PROCEDURE_REF(BGl_gloz12zd2envzc0zzintegrate_nodez00,
								(int) (((long) 1)));
							{	/* Integrate/node.scm 135 */
								obj_t BgL_arrayz00_1974;

								int BgL_offsetz00_1975;

								BgL_arrayz00_1974 = BgL_arg2643z00_1972;
								BgL_offsetz00_1975 = (int) (BgL_objzd2classzd2numz00_1971);
								{	/* Integrate/node.scm 135 */
									long BgL_offsetz00_1976;

									BgL_offsetz00_1976 =
										((long) (BgL_offsetz00_1975) - OBJECT_TYPE);
									{	/* Integrate/node.scm 135 */
										long BgL_modz00_1977;

										{	/* Integrate/node.scm 135 */
											int BgL_arg2645z00_1978;

											BgL_arg2645z00_1978 = (int) (((long) 16));
											{	/* Integrate/node.scm 135 */
												long BgL_auxz00_3335;

												BgL_auxz00_3335 = (long) (BgL_arg2645z00_1978);
												BgL_modz00_1977 =
													(BgL_offsetz00_1976 / BgL_auxz00_3335);
										}}
										{	/* Integrate/node.scm 135 */
											long BgL_restz00_1979;

											{	/* Integrate/node.scm 135 */
												int BgL_arg2644z00_1980;

												BgL_arg2644z00_1980 = (int) (((long) 16));
												{	/* Integrate/node.scm 135 */
													long BgL_auxz00_3339;

													BgL_auxz00_3339 = (long) (BgL_arg2644z00_1980);
													BgL_restz00_1979 =
														(BgL_offsetz00_1976 % BgL_auxz00_3339);
											}}
											{	/* Integrate/node.scm 135 */

												BgL_method3572z00_1969 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1974,
														(int) (BgL_modz00_1977)), (int) (BgL_restz00_1979));
				}}}}}}}}
				return
					(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3572z00_1969)
					(BgL_method3572z00_1969, (obj_t) (BgL_nodez00_10),
						(obj_t) (BgL_integratorz00_11), BEOA));
			}
		}
	}



/* _glo! */
	obj_t BGl__gloz12z12zzintegrate_nodez00(obj_t BgL_envz00_2871,
		obj_t BgL_nodez00_2872, obj_t BgL_integratorz00_2873)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 135 */
			return
				(obj_t) (BGl_gloz12z12zzintegrate_nodez00(
					(BgL_nodez00_bglt) (BgL_nodez00_2872),
					(BgL_variablez00_bglt) (BgL_integratorz00_2873)));
		}
	}



/* glo!-default3570 */
	BgL_nodez00_bglt
		BGl_gloz12zd2default3570zc0zzintegrate_nodez00(BgL_nodez00_bglt
		BgL_nodez00_12, BgL_variablez00_bglt BgL_integratorz00_13)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 15 */
			return
				(BgL_nodez00_bglt) (BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 4)),
					BGl_string3965z00zzintegrate_nodez00, (obj_t) (BgL_nodez00_12)));
		}
	}



/* _glo!-default3570 */
	obj_t BGl__gloz12zd2default3570zc0zzintegrate_nodez00(obj_t BgL_envz00_2876,
		obj_t BgL_nodez00_2877, obj_t BgL_integratorz00_2878)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 15 */
			return
				(obj_t) (BGl_gloz12zd2default3570zc0zzintegrate_nodez00(
					(BgL_nodez00_bglt) (BgL_nodez00_2877),
					(BgL_variablez00_bglt) (BgL_integratorz00_2878)));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_nodez00()
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_atomz00zzast_nodez00,
				BGl_proc3966z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_kwotez00zzast_nodez00,
				BGl_proc3967z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_varz00zzast_nodez00,
				BGl_proc3968z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_closurez00zzast_nodez00,
				BGl_proc3969z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_sequencez00zzast_nodez00,
				BGl_proc3970z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_appz00zzast_nodez00,
				BGl_proc3971z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3972z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_funcallz00zzast_nodez00,
				BGl_proc3973z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_externz00zzast_nodez00,
				BGl_proc3974z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_castz00zzast_nodez00,
				BGl_proc3975z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_setqz00zzast_nodez00,
				BGl_proc3976z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3977z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_failz00zzast_nodez00,
				BGl_proc3978z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_selectz00zzast_nodez00,
				BGl_proc3979z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc3980z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc3981z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3982z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3983z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc3984z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc3985z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzintegrate_nodez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3986z00zzintegrate_nodez00,
				BGl_string3964z00zzintegrate_nodez00);
		}
	}



/* glo!-box-set!3615 */
	obj_t BGl_gloz12zd2boxzd2setz123615z00zzintegrate_nodez00(obj_t
		BgL_envz00_2900, obj_t BgL_nodez00_2901, obj_t BgL_integratorz00_2902)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 396 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1759;

				obj_t BgL_integratorz00_1760;

				{	/* Tools/trace.sch 53 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_3384;

					BgL_nodez00_1759 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2901);
					BgL_integratorz00_1760 = BgL_integratorz00_2902;
					{	/* Integrate/node.scm 399 */
						BgL_nodez00_bglt BgL_arg3869z00_1764;

						{	/* Integrate/node.scm 399 */
							BgL_varz00_bglt BgL_arg3870z00_1765;

							BgL_arg3870z00_1765 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1759))->
								BgL_varz00);
							{	/* Integrate/node.scm 399 */
								BgL_nodez00_bglt BgL_res3960z00_2833;

								{	/* Integrate/node.scm 399 */
									BgL_nodez00_bglt BgL_nodez00_2806;

									BgL_variablez00_bglt BgL_integratorz00_2807;

									BgL_nodez00_2806 = (BgL_nodez00_bglt) (BgL_arg3870z00_1765);
									BgL_integratorz00_2807 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1760);
									{	/* Integrate/node.scm 399 */
										obj_t BgL_method3572z00_2808;

										{	/* Integrate/node.scm 399 */
											BgL_objectz00_bglt BgL_objz00_2809;

											BgL_objz00_2809 = (BgL_objectz00_bglt) (BgL_nodez00_2806);
											{	/* Integrate/node.scm 399 */
												long BgL_objzd2classzd2numz00_2810;

												BgL_objzd2classzd2numz00_2810 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2809);
												{	/* Integrate/node.scm 399 */
													obj_t BgL_arg2643z00_2811;

													BgL_arg2643z00_2811 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzintegrate_nodez00,
														(int) (((long) 1)));
													{	/* Integrate/node.scm 399 */
														obj_t BgL_arrayz00_2813;

														int BgL_offsetz00_2814;

														BgL_arrayz00_2813 = BgL_arg2643z00_2811;
														BgL_offsetz00_2814 =
															(int) (BgL_objzd2classzd2numz00_2810);
														{	/* Integrate/node.scm 399 */
															long BgL_offsetz00_2815;

															BgL_offsetz00_2815 =
																((long) (BgL_offsetz00_2814) - OBJECT_TYPE);
															{	/* Integrate/node.scm 399 */
																long BgL_modz00_2816;

																{	/* Integrate/node.scm 399 */
																	int BgL_arg2645z00_2817;

																	BgL_arg2645z00_2817 = (int) (((long) 16));
																	{	/* Integrate/node.scm 399 */
																		long BgL_auxz00_3396;

																		BgL_auxz00_3396 =
																			(long) (BgL_arg2645z00_2817);
																		BgL_modz00_2816 =
																			(BgL_offsetz00_2815 / BgL_auxz00_3396);
																}}
																{	/* Integrate/node.scm 399 */
																	long BgL_restz00_2818;

																	{	/* Integrate/node.scm 399 */
																		int BgL_arg2644z00_2819;

																		BgL_arg2644z00_2819 = (int) (((long) 16));
																		{	/* Integrate/node.scm 399 */
																			long BgL_auxz00_3400;

																			BgL_auxz00_3400 =
																				(long) (BgL_arg2644z00_2819);
																			BgL_restz00_2818 =
																				(BgL_offsetz00_2815 % BgL_auxz00_3400);
																	}}
																	{	/* Integrate/node.scm 399 */

																		BgL_method3572z00_2808 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2813,
																				(int) (BgL_modz00_2816)),
																			(int) (BgL_restz00_2818));
										}}}}}}}}
										BgL_res3960z00_2833 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3572z00_2808) (BgL_method3572z00_2808,
												(obj_t) (BgL_nodez00_2806),
												(obj_t) (BgL_integratorz00_2807), BEOA));
								}}
								BgL_arg3869z00_1764 = BgL_res3960z00_2833;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3412;

							BgL_auxz00_3412 = (BgL_varz00_bglt) (BgL_arg3869z00_1764);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1759))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_3412), BUNSPEC);
					}}
					{	/* Integrate/node.scm 400 */
						BgL_nodez00_bglt BgL_arg3871z00_1766;

						{	/* Integrate/node.scm 400 */
							BgL_nodez00_bglt BgL_arg3872z00_1767;

							BgL_arg3872z00_1767 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1759))->
								BgL_valuez00);
							{	/* Integrate/node.scm 400 */
								BgL_nodez00_bglt BgL_res3963z00_2864;

								{	/* Integrate/node.scm 400 */
									BgL_variablez00_bglt BgL_integratorz00_2838;

									BgL_integratorz00_2838 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1760);
									{	/* Integrate/node.scm 400 */
										obj_t BgL_method3572z00_2839;

										{	/* Integrate/node.scm 400 */
											BgL_objectz00_bglt BgL_objz00_2840;

											BgL_objz00_2840 =
												(BgL_objectz00_bglt) (BgL_arg3872z00_1767);
											{	/* Integrate/node.scm 400 */
												long BgL_objzd2classzd2numz00_2841;

												BgL_objzd2classzd2numz00_2841 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2840);
												{	/* Integrate/node.scm 400 */
													obj_t BgL_arg2643z00_2842;

													BgL_arg2643z00_2842 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzintegrate_nodez00,
														(int) (((long) 1)));
													{	/* Integrate/node.scm 400 */
														obj_t BgL_arrayz00_2844;

														int BgL_offsetz00_2845;

														BgL_arrayz00_2844 = BgL_arg2643z00_2842;
														BgL_offsetz00_2845 =
															(int) (BgL_objzd2classzd2numz00_2841);
														{	/* Integrate/node.scm 400 */
															long BgL_offsetz00_2846;

															BgL_offsetz00_2846 =
																((long) (BgL_offsetz00_2845) - OBJECT_TYPE);
															{	/* Integrate/node.scm 400 */
																long BgL_modz00_2847;

																{	/* Integrate/node.scm 400 */
																	int BgL_arg2645z00_2848;

																	BgL_arg2645z00_2848 = (int) (((long) 16));
																	{	/* Integrate/node.scm 400 */
																		long BgL_auxz00_3425;

																		BgL_auxz00_3425 =
																			(long) (BgL_arg2645z00_2848);
																		BgL_modz00_2847 =
																			(BgL_offsetz00_2846 / BgL_auxz00_3425);
																}}
																{	/* Integrate/node.scm 400 */
																	long BgL_restz00_2849;

																	{	/* Integrate/node.scm 400 */
																		int BgL_arg2644z00_2850;

																		BgL_arg2644z00_2850 = (int) (((long) 16));
																		{	/* Integrate/node.scm 400 */
																			long BgL_auxz00_3429;

																			BgL_auxz00_3429 =
																				(long) (BgL_arg2644z00_2850);
																			BgL_restz00_2849 =
																				(BgL_offsetz00_2846 % BgL_auxz00_3429);
																	}}
																	{	/* Integrate/node.scm 400 */

																		BgL_method3572z00_2839 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2844,
																				(int) (BgL_modz00_2847)),
																			(int) (BgL_restz00_2849));
										}}}}}}}}
										BgL_res3963z00_2864 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3572z00_2839) (BgL_method3572z00_2839,
												(obj_t) (BgL_arg3872z00_1767),
												(obj_t) (BgL_integratorz00_2838), BEOA));
								}}
								BgL_arg3871z00_1766 = BgL_res3963z00_2864;
						}}
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1759))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3871z00_1766), BUNSPEC);
					}
					BgL_auxz00_3384 = BgL_nodez00_1759;
					return (obj_t) (BgL_auxz00_3384);
				}
			}
		}
	}



/* glo!-box-ref3613 */
	obj_t BGl_gloz12zd2boxzd2ref3613z12zzintegrate_nodez00(obj_t BgL_envz00_2903,
		obj_t BgL_nodez00_2904, obj_t BgL_integratorz00_2905)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 387 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1750;

				obj_t BgL_integratorz00_1751;

				{	/* Tools/trace.sch 53 */
					BgL_boxzd2refzd2_bglt BgL_auxz00_3444;

					BgL_nodez00_1750 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2904);
					BgL_integratorz00_1751 = BgL_integratorz00_2905;
					{	/* Integrate/node.scm 389 */
						BgL_nodez00_bglt BgL_arg3866z00_2772;

						{	/* Integrate/node.scm 389 */
							BgL_varz00_bglt BgL_arg3867z00_2773;

							BgL_arg3867z00_2773 =
								(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1750))->BgL_varz00);
							{	/* Integrate/node.scm 389 */
								BgL_nodez00_bglt BgL_res3957z00_2802;

								{	/* Integrate/node.scm 389 */
									BgL_nodez00_bglt BgL_nodez00_2775;

									BgL_variablez00_bglt BgL_integratorz00_2776;

									BgL_nodez00_2775 = (BgL_nodez00_bglt) (BgL_arg3867z00_2773);
									BgL_integratorz00_2776 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1751);
									{	/* Integrate/node.scm 389 */
										obj_t BgL_method3572z00_2777;

										{	/* Integrate/node.scm 389 */
											BgL_objectz00_bglt BgL_objz00_2778;

											BgL_objz00_2778 = (BgL_objectz00_bglt) (BgL_nodez00_2775);
											{	/* Integrate/node.scm 389 */
												long BgL_objzd2classzd2numz00_2779;

												BgL_objzd2classzd2numz00_2779 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2778);
												{	/* Integrate/node.scm 389 */
													obj_t BgL_arg2643z00_2780;

													BgL_arg2643z00_2780 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzintegrate_nodez00,
														(int) (((long) 1)));
													{	/* Integrate/node.scm 389 */
														obj_t BgL_arrayz00_2782;

														int BgL_offsetz00_2783;

														BgL_arrayz00_2782 = BgL_arg2643z00_2780;
														BgL_offsetz00_2783 =
															(int) (BgL_objzd2classzd2numz00_2779);
														{	/* Integrate/node.scm 389 */
															long BgL_offsetz00_2784;

															BgL_offsetz00_2784 =
																((long) (BgL_offsetz00_2783) - OBJECT_TYPE);
															{	/* Integrate/node.scm 389 */
																long BgL_modz00_2785;

																{	/* Integrate/node.scm 389 */
																	int BgL_arg2645z00_2786;

																	BgL_arg2645z00_2786 = (int) (((long) 16));
																	{	/* Integrate/node.scm 389 */
																		long BgL_auxz00_3456;

																		BgL_auxz00_3456 =
																			(long) (BgL_arg2645z00_2786);
																		BgL_modz00_2785 =
																			(BgL_offsetz00_2784 / BgL_auxz00_3456);
																}}
																{	/* Integrate/node.scm 389 */
																	long BgL_restz00_2787;

																	{	/* Integrate/node.scm 389 */
																		int BgL_arg2644z00_2788;

																		BgL_arg2644z00_2788 = (int) (((long) 16));
																		{	/* Integrate/node.scm 389 */
																			long BgL_auxz00_3460;

																			BgL_auxz00_3460 =
																				(long) (BgL_arg2644z00_2788);
																			BgL_restz00_2787 =
																				(BgL_offsetz00_2784 % BgL_auxz00_3460);
																	}}
																	{	/* Integrate/node.scm 389 */

																		BgL_method3572z00_2777 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2782,
																				(int) (BgL_modz00_2785)),
																			(int) (BgL_restz00_2787));
										}}}}}}}}
										BgL_res3957z00_2802 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3572z00_2777) (BgL_method3572z00_2777,
												(obj_t) (BgL_nodez00_2775),
												(obj_t) (BgL_integratorz00_2776), BEOA));
								}}
								BgL_arg3866z00_2772 = BgL_res3957z00_2802;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3472;

							BgL_auxz00_3472 = (BgL_varz00_bglt) (BgL_arg3866z00_2772);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1750))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_3472), BUNSPEC);
					}}
					BgL_auxz00_3444 = BgL_nodez00_1750;
					return (obj_t) (BgL_auxz00_3444);
				}
			}
		}
	}



/* glo!-make-box3611 */
	obj_t BGl_gloz12zd2makezd2box3611z12zzintegrate_nodez00(obj_t BgL_envz00_2906,
		obj_t BgL_nodez00_2907, obj_t BgL_integratorz00_2908)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 379 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1741;

				obj_t BgL_integratorz00_1742;

				{	/* Integrate/node.scm 380 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_3477;

					BgL_nodez00_1741 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2907);
					BgL_integratorz00_1742 = BgL_integratorz00_2908;
					{	/* Integrate/node.scm 380 */
						BgL_nodez00_bglt BgL_arg3863z00_2738;

						{	/* Integrate/node.scm 380 */
							BgL_nodez00_bglt BgL_arg3864z00_2739;

							BgL_arg3864z00_2739 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1741))->
								BgL_valuez00);
							{	/* Integrate/node.scm 380 */
								BgL_nodez00_bglt BgL_res3954z00_2768;

								{	/* Integrate/node.scm 380 */
									BgL_variablez00_bglt BgL_integratorz00_2742;

									BgL_integratorz00_2742 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1742);
									{	/* Integrate/node.scm 380 */
										obj_t BgL_method3572z00_2743;

										{	/* Integrate/node.scm 380 */
											BgL_objectz00_bglt BgL_objz00_2744;

											BgL_objz00_2744 =
												(BgL_objectz00_bglt) (BgL_arg3864z00_2739);
											{	/* Integrate/node.scm 380 */
												long BgL_objzd2classzd2numz00_2745;

												BgL_objzd2classzd2numz00_2745 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2744);
												{	/* Integrate/node.scm 380 */
													obj_t BgL_arg2643z00_2746;

													BgL_arg2643z00_2746 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzintegrate_nodez00,
														(int) (((long) 1)));
													{	/* Integrate/node.scm 380 */
														obj_t BgL_arrayz00_2748;

														int BgL_offsetz00_2749;

														BgL_arrayz00_2748 = BgL_arg2643z00_2746;
														BgL_offsetz00_2749 =
															(int) (BgL_objzd2classzd2numz00_2745);
														{	/* Integrate/node.scm 380 */
															long BgL_offsetz00_2750;

															BgL_offsetz00_2750 =
																((long) (BgL_offsetz00_2749) - OBJECT_TYPE);
															{	/* Integrate/node.scm 380 */
																long BgL_modz00_2751;

																{	/* Integrate/node.scm 380 */
																	int BgL_arg2645z00_2752;

																	BgL_arg2645z00_2752 = (int) (((long) 16));
																	{	/* Integrate/node.scm 380 */
																		long BgL_auxz00_3488;

																		BgL_auxz00_3488 =
																			(long) (BgL_arg2645z00_2752);
																		BgL_modz00_2751 =
																			(BgL_offsetz00_2750 / BgL_auxz00_3488);
																}}
																{	/* Integrate/node.scm 380 */
																	long BgL_restz00_2753;

																	{	/* Integrate/node.scm 380 */
																		int BgL_arg2644z00_2754;

																		BgL_arg2644z00_2754 = (int) (((long) 16));
																		{	/* Integrate/node.scm 380 */
																			long BgL_auxz00_3492;

																			BgL_auxz00_3492 =
																				(long) (BgL_arg2644z00_2754);
																			BgL_restz00_2753 =
																				(BgL_offsetz00_2750 % BgL_auxz00_3492);
																	}}
																	{	/* Integrate/node.scm 380 */

																		BgL_method3572z00_2743 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2748,
																				(int) (BgL_modz00_2751)),
																			(int) (BgL_restz00_2753));
										}}}}}}}}
										BgL_res3954z00_2768 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3572z00_2743) (BgL_method3572z00_2743,
												(obj_t) (BgL_arg3864z00_2739),
												(obj_t) (BgL_integratorz00_2742), BEOA));
								}}
								BgL_arg3863z00_2738 = BgL_res3954z00_2768;
						}}
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1741))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3863z00_2738), BUNSPEC);
					}
					BgL_auxz00_3477 = BgL_nodez00_1741;
					return (obj_t) (BgL_auxz00_3477);
				}
			}
		}
	}



/* glo!-jump-ex-it3608 */
	obj_t BGl_gloz12zd2jumpzd2exzd2it3608zc0zzintegrate_nodez00(obj_t
		BgL_envz00_2909, obj_t BgL_nodez00_2910, obj_t BgL_integratorz00_2911)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 370 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1730;

				obj_t BgL_integratorz00_1731;

				{	/* Integrate/node.scm 371 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_3507;

					BgL_nodez00_1730 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2910);
					BgL_integratorz00_1731 = BgL_integratorz00_2911;
					{	/* Integrate/node.scm 372 */
						BgL_nodez00_bglt BgL_arg3858z00_1735;

						{	/* Integrate/node.scm 372 */
							BgL_nodez00_bglt BgL_arg3859z00_1736;

							BgL_arg3859z00_1736 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1730))->
								BgL_exitz00);
							{	/* Integrate/node.scm 372 */
								BgL_nodez00_bglt BgL_res3948z00_2703;

								{	/* Integrate/node.scm 372 */
									BgL_variablez00_bglt BgL_integratorz00_2677;

									BgL_integratorz00_2677 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1731);
									{	/* Integrate/node.scm 372 */
										obj_t BgL_method3572z00_2678;

										{	/* Integrate/node.scm 372 */
											BgL_objectz00_bglt BgL_objz00_2679;

											BgL_objz00_2679 =
												(BgL_objectz00_bglt) (BgL_arg3859z00_1736);
											{	/* Integrate/node.scm 372 */
												long BgL_objzd2classzd2numz00_2680;

												BgL_objzd2classzd2numz00_2680 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2679);
												{	/* Integrate/node.scm 372 */
													obj_t BgL_arg2643z00_2681;

													BgL_arg2643z00_2681 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzintegrate_nodez00,
														(int) (((long) 1)));
													{	/* Integrate/node.scm 372 */
														obj_t BgL_arrayz00_2683;

														int BgL_offsetz00_2684;

														BgL_arrayz00_2683 = BgL_arg2643z00_2681;
														BgL_offsetz00_2684 =
															(int) (BgL_objzd2classzd2numz00_2680);
														{	/* Integrate/node.scm 372 */
															long BgL_offsetz00_2685;

															BgL_offsetz00_2685 =
																((long) (BgL_offsetz00_2684) - OBJECT_TYPE);
															{	/* Integrate/node.scm 372 */
																long BgL_modz00_2686;

																{	/* Integrate/node.scm 372 */
																	int BgL_arg2645z00_2687;

																	BgL_arg2645z00_2687 = (int) (((long) 16));
																	{	/* Integrate/node.scm 372 */
																		long BgL_auxz00_3518;

																		BgL_auxz00_3518 =
																			(long) (BgL_arg2645z00_2687);
																		BgL_modz00_2686 =
																			(BgL_offsetz00_2685 / BgL_auxz00_3518);
																}}
																{	/* Integrate/node.scm 372 */
																	long BgL_restz00_2688;

																	{	/* Integrate/node.scm 372 */
																		int BgL_arg2644z00_2689;

																		BgL_arg2644z00_2689 = (int) (((long) 16));
																		{	/* Integrate/node.scm 372 */
																			long BgL_auxz00_3522;

																			BgL_auxz00_3522 =
																				(long) (BgL_arg2644z00_2689);
																			BgL_restz00_2688 =
																				(BgL_offsetz00_2685 % BgL_auxz00_3522);
																	}}
																	{	/* Integrate/node.scm 372 */

																		BgL_method3572z00_2678 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2683,
																				(int) (BgL_modz00_2686)),
																			(int) (BgL_restz00_2688));
										}}}}}}}}
										BgL_res3948z00_2703 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3572z00_2678) (BgL_method3572z00_2678,
												(obj_t) (BgL_arg3859z00_1736),
												(obj_t) (BgL_integratorz00_2677), BEOA));
								}}
								BgL_arg3858z00_1735 = BgL_res3948z00_2703;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1730))->
								BgL_exitz00) =
							((BgL_nodez00_bglt) BgL_arg3858z00_1735), BUNSPEC);
					}
					{	/* Integrate/node.scm 373 */
						BgL_nodez00_bglt BgL_arg3860z00_1737;

						{	/* Integrate/node.scm 373 */
							BgL_nodez00_bglt BgL_arg3861z00_1738;

							BgL_arg3861z00_1738 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1730))->
								BgL_valuez00);
							{	/* Integrate/node.scm 373 */
								BgL_nodez00_bglt BgL_res3951z00_2734;

								{	/* Integrate/node.scm 373 */
									BgL_variablez00_bglt BgL_integratorz00_2708;

									BgL_integratorz00_2708 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1731);
									{	/* Integrate/node.scm 373 */
										obj_t BgL_method3572z00_2709;

										{	/* Integrate/node.scm 373 */
											BgL_objectz00_bglt BgL_objz00_2710;

											BgL_objz00_2710 =
												(BgL_objectz00_bglt) (BgL_arg3861z00_1738);
											{	/* Integrate/node.scm 373 */
												long BgL_objzd2classzd2numz00_2711;

												BgL_objzd2classzd2numz00_2711 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2710);
												{	/* Integrate/node.scm 373 */
													obj_t BgL_arg2643z00_2712;

													BgL_arg2643z00_2712 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzintegrate_nodez00,
														(int) (((long) 1)));
													{	/* Integrate/node.scm 373 */
														obj_t BgL_arrayz00_2714;

														int BgL_offsetz00_2715;

														BgL_arrayz00_2714 = BgL_arg2643z00_2712;
														BgL_offsetz00_2715 =
															(int) (BgL_objzd2classzd2numz00_2711);
														{	/* Integrate/node.scm 373 */
															long BgL_offsetz00_2716;

															BgL_offsetz00_2716 =
																((long) (BgL_offsetz00_2715) - OBJECT_TYPE);
															{	/* Integrate/node.scm 373 */
																long BgL_modz00_2717;

																{	/* Integrate/node.scm 373 */
																	int BgL_arg2645z00_2718;

																	BgL_arg2645z00_2718 = (int) (((long) 16));
																	{	/* Integrate/node.scm 373 */
																		long BgL_auxz00_3545;

																		BgL_auxz00_3545 =
																			(long) (BgL_arg2645z00_2718);
																		BgL_modz00_2717 =
																			(BgL_offsetz00_2716 / BgL_auxz00_3545);
																}}
																{	/* Integrate/node.scm 373 */
																	long BgL_restz00_2719;

																	{	/* Integrate/node.scm 373 */
																		int BgL_arg2644z00_2720;

																		BgL_arg2644z00_2720 = (int) (((long) 16));
																		{	/* Integrate/node.scm 373 */
																			long BgL_auxz00_3549;

																			BgL_auxz00_3549 =
																				(long) (BgL_arg2644z00_2720);
																			BgL_restz00_2719 =
																				(BgL_offsetz00_2716 % BgL_auxz00_3549);
																	}}
																	{	/* Integrate/node.scm 373 */

																		BgL_method3572z00_2709 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2714,
																				(int) (BgL_modz00_2717)),
																			(int) (BgL_restz00_2719));
										}}}}}}}}
										BgL_res3951z00_2734 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3572z00_2709) (BgL_method3572z00_2709,
												(obj_t) (BgL_arg3861z00_1738),
												(obj_t) (BgL_integratorz00_2708), BEOA));
								}}
								BgL_arg3860z00_1737 = BgL_res3951z00_2734;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1730))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3860z00_1737), BUNSPEC);
					}
					BgL_auxz00_3507 = BgL_nodez00_1730;
					return (obj_t) (BgL_auxz00_3507);
				}
			}
		}
	}



/* glo!-set-ex-it3606 */
	obj_t BGl_gloz12zd2setzd2exzd2it3606zc0zzintegrate_nodez00(obj_t
		BgL_envz00_2912, obj_t BgL_nodez00_2913, obj_t BgL_integratorz00_2914)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 362 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1721;

				obj_t BgL_integratorz00_1722;

				{	/* Integrate/node.scm 363 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_3564;

					BgL_nodez00_1721 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2913);
					BgL_integratorz00_1722 = BgL_integratorz00_2914;
					{	/* Integrate/node.scm 363 */
						BgL_nodez00_bglt BgL_arg3855z00_2642;

						{	/* Integrate/node.scm 363 */
							BgL_nodez00_bglt BgL_arg3856z00_2643;

							BgL_arg3856z00_2643 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1721))->
								BgL_bodyz00);
							{	/* Integrate/node.scm 363 */
								BgL_nodez00_bglt BgL_res3945z00_2672;

								{	/* Integrate/node.scm 363 */
									BgL_variablez00_bglt BgL_integratorz00_2646;

									BgL_integratorz00_2646 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1722);
									{	/* Integrate/node.scm 363 */
										obj_t BgL_method3572z00_2647;

										{	/* Integrate/node.scm 363 */
											BgL_objectz00_bglt BgL_objz00_2648;

											BgL_objz00_2648 =
												(BgL_objectz00_bglt) (BgL_arg3856z00_2643);
											{	/* Integrate/node.scm 363 */
												long BgL_objzd2classzd2numz00_2649;

												BgL_objzd2classzd2numz00_2649 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2648);
												{	/* Integrate/node.scm 363 */
													obj_t BgL_arg2643z00_2650;

													BgL_arg2643z00_2650 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzintegrate_nodez00,
														(int) (((long) 1)));
													{	/* Integrate/node.scm 363 */
														obj_t BgL_arrayz00_2652;

														int BgL_offsetz00_2653;

														BgL_arrayz00_2652 = BgL_arg2643z00_2650;
														BgL_offsetz00_2653 =
															(int) (BgL_objzd2classzd2numz00_2649);
														{	/* Integrate/node.scm 363 */
															long BgL_offsetz00_2654;

															BgL_offsetz00_2654 =
																((long) (BgL_offsetz00_2653) - OBJECT_TYPE);
															{	/* Integrate/node.scm 363 */
																long BgL_modz00_2655;

																{	/* Integrate/node.scm 363 */
																	int BgL_arg2645z00_2656;

																	BgL_arg2645z00_2656 = (int) (((long) 16));
																	{	/* Integrate/node.scm 363 */
																		long BgL_auxz00_3575;

																		BgL_auxz00_3575 =
																			(long) (BgL_arg2645z00_2656);
																		BgL_modz00_2655 =
																			(BgL_offsetz00_2654 / BgL_auxz00_3575);
																}}
																{	/* Integrate/node.scm 363 */
																	long BgL_restz00_2657;

																	{	/* Integrate/node.scm 363 */
																		int BgL_arg2644z00_2658;

																		BgL_arg2644z00_2658 = (int) (((long) 16));
																		{	/* Integrate/node.scm 363 */
																			long BgL_auxz00_3579;

																			BgL_auxz00_3579 =
																				(long) (BgL_arg2644z00_2658);
																			BgL_restz00_2657 =
																				(BgL_offsetz00_2654 % BgL_auxz00_3579);
																	}}
																	{	/* Integrate/node.scm 363 */

																		BgL_method3572z00_2647 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2652,
																				(int) (BgL_modz00_2655)),
																			(int) (BgL_restz00_2657));
										}}}}}}}}
										BgL_res3945z00_2672 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3572z00_2647) (BgL_method3572z00_2647,
												(obj_t) (BgL_arg3856z00_2643),
												(obj_t) (BgL_integratorz00_2646), BEOA));
								}}
								BgL_arg3855z00_2642 = BgL_res3945z00_2672;
						}}
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1721))->
								BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3855z00_2642), BUNSPEC);
					}
					BgL_auxz00_3564 = BgL_nodez00_1721;
					return (obj_t) (BgL_auxz00_3564);
				}
			}
		}
	}



/* glo!-let-var3604 */
	obj_t BGl_gloz12zd2letzd2var3604z12zzintegrate_nodez00(obj_t BgL_envz00_2915,
		obj_t BgL_nodez00_2916, obj_t BgL_integratorz00_2917)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 344 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1698;

				obj_t BgL_integratorz00_1699;

				{	/* Integrate/node.scm 345 */
					BgL_letzd2varzd2_bglt BgL_auxz00_3594;

					BgL_nodez00_1698 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2916);
					BgL_integratorz00_1699 = BgL_integratorz00_2917;
					{	/* Integrate/node.scm 346 */
						obj_t BgL_g3565z00_1703;

						BgL_g3565z00_1703 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1698))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3563z00_1705;

							BgL_l3563z00_1705 = BgL_g3565z00_1703;
						BgL_zc3anonymousza33845ze3z83_1706:
							if (PAIRP(BgL_l3563z00_1705))
								{	/* Integrate/node.scm 346 */
									{	/* Integrate/node.scm 347 */
										obj_t BgL_bindingz00_1708;

										BgL_bindingz00_1708 = CAR(BgL_l3563z00_1705);
										{	/* Integrate/node.scm 347 */
											obj_t BgL_varz00_1709;

											obj_t BgL_valz00_1710;

											BgL_varz00_1709 = CAR(BgL_bindingz00_1708);
											BgL_valz00_1710 = CDR(BgL_bindingz00_1708);
											{	/* Integrate/node.scm 349 */
												BgL_nodez00_bglt BgL_arg3847z00_1711;

												{	/* Integrate/node.scm 349 */
													BgL_nodez00_bglt BgL_res3939z00_2601;

													{	/* Integrate/node.scm 349 */
														BgL_nodez00_bglt BgL_nodez00_2574;

														BgL_variablez00_bglt BgL_integratorz00_2575;

														BgL_nodez00_2574 =
															(BgL_nodez00_bglt) (BgL_valz00_1710);
														BgL_integratorz00_2575 =
															(BgL_variablez00_bglt) (BgL_integratorz00_1699);
														{	/* Integrate/node.scm 349 */
															obj_t BgL_method3572z00_2576;

															{	/* Integrate/node.scm 349 */
																BgL_objectz00_bglt BgL_objz00_2577;

																BgL_objz00_2577 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2574);
																{	/* Integrate/node.scm 349 */
																	long BgL_objzd2classzd2numz00_2578;

																	BgL_objzd2classzd2numz00_2578 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2577);
																	{	/* Integrate/node.scm 349 */
																		obj_t BgL_arg2643z00_2579;

																		BgL_arg2643z00_2579 =
																			PROCEDURE_REF
																			(BGl_gloz12zd2envzc0zzintegrate_nodez00,
																			(int) (((long) 1)));
																		{	/* Integrate/node.scm 349 */
																			obj_t BgL_arrayz00_2581;

																			int BgL_offsetz00_2582;

																			BgL_arrayz00_2581 = BgL_arg2643z00_2579;
																			BgL_offsetz00_2582 =
																				(int) (BgL_objzd2classzd2numz00_2578);
																			{	/* Integrate/node.scm 349 */
																				long BgL_offsetz00_2583;

																				BgL_offsetz00_2583 =
																					(
																					(long) (BgL_offsetz00_2582) -
																					OBJECT_TYPE);
																				{	/* Integrate/node.scm 349 */
																					long BgL_modz00_2584;

																					{	/* Integrate/node.scm 349 */
																						int BgL_arg2645z00_2585;

																						BgL_arg2645z00_2585 =
																							(int) (((long) 16));
																						{	/* Integrate/node.scm 349 */
																							long BgL_auxz00_3611;

																							BgL_auxz00_3611 =
																								(long) (BgL_arg2645z00_2585);
																							BgL_modz00_2584 =
																								(BgL_offsetz00_2583 /
																								BgL_auxz00_3611);
																					}}
																					{	/* Integrate/node.scm 349 */
																						long BgL_restz00_2586;

																						{	/* Integrate/node.scm 349 */
																							int BgL_arg2644z00_2587;

																							BgL_arg2644z00_2587 =
																								(int) (((long) 16));
																							{	/* Integrate/node.scm 349 */
																								long BgL_auxz00_3615;

																								BgL_auxz00_3615 =
																									(long) (BgL_arg2644z00_2587);
																								BgL_restz00_2586 =
																									(BgL_offsetz00_2583 %
																									BgL_auxz00_3615);
																						}}
																						{	/* Integrate/node.scm 349 */

																							BgL_method3572z00_2576 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2581,
																									(int) (BgL_modz00_2584)),
																								(int) (BgL_restz00_2586));
															}}}}}}}}
															BgL_res3939z00_2601 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3572z00_2576)
																(BgL_method3572z00_2576,
																	(obj_t) (BgL_nodez00_2574),
																	(obj_t) (BgL_integratorz00_2575), BEOA));
													}}
													BgL_arg3847z00_1711 = BgL_res3939z00_2601;
												}
												{	/* Integrate/node.scm 349 */
													obj_t BgL_auxz00_3627;

													BgL_auxz00_3627 = (obj_t) (BgL_arg3847z00_1711);
													SET_CDR(BgL_bindingz00_1708, BgL_auxz00_3627);
											}}
											if (BGl_integratezd2celledzf3z21zzintegrate_nodez00(
													(BgL_localz00_bglt) (BgL_varz00_1709)))
												{	/* Integrate/node.scm 350 */
													{
														BgL_typez00_bglt BgL_auxz00_3635;

														BgL_variablez00_bglt BgL_auxz00_3633;

														BgL_auxz00_3635 =
															(BgL_typez00_bglt)
															(BGl_za2objza2z00zztype_cachez00);
														BgL_auxz00_3633 =
															(BgL_variablez00_bglt) (BgL_varz00_1709);
														((((BgL_variablez00_bglt) CREF(BgL_auxz00_3633))->
																BgL_typez00) =
															((BgL_typez00_bglt) BgL_auxz00_3635), BUNSPEC);
													}
													{	/* Integrate/node.scm 353 */
														BgL_makezd2boxzd2_bglt BgL_arg3849z00_1713;

														{	/* Integrate/node.scm 353 */
															obj_t BgL_arg3850z00_1714;

															BgL_arg3850z00_1714 = CDR(BgL_bindingz00_1708);
															BgL_arg3849z00_1713 =
																BGl_azd2makezd2cellz00zzintegrate_nodez00(
																(BgL_nodez00_bglt) (BgL_arg3850z00_1714),
																(BgL_variablez00_bglt) (BgL_varz00_1709));
														}
														{	/* Integrate/node.scm 353 */
															obj_t BgL_auxz00_3642;

															BgL_auxz00_3642 = (obj_t) (BgL_arg3849z00_1713);
															SET_CDR(BgL_bindingz00_1708, BgL_auxz00_3642);
														}
													}
												}
											else
												{	/* Integrate/node.scm 350 */
													BFALSE;
												}
										}
									}
									{
										obj_t BgL_l3563z00_3645;

										BgL_l3563z00_3645 = CDR(BgL_l3563z00_1705);
										BgL_l3563z00_1705 = BgL_l3563z00_3645;
										goto BgL_zc3anonymousza33845ze3z83_1706;
									}
								}
							else
								{	/* Integrate/node.scm 346 */
									((bool_t) 1);
								}
						}
					}
					{	/* Integrate/node.scm 356 */
						BgL_nodez00_bglt BgL_arg3852z00_1717;

						{	/* Integrate/node.scm 356 */
							BgL_nodez00_bglt BgL_arg3853z00_1718;

							BgL_arg3853z00_1718 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1698))->BgL_bodyz00);
							{	/* Integrate/node.scm 356 */
								BgL_nodez00_bglt BgL_res3942z00_2638;

								{	/* Integrate/node.scm 356 */
									BgL_variablez00_bglt BgL_integratorz00_2612;

									BgL_integratorz00_2612 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1699);
									{	/* Integrate/node.scm 356 */
										obj_t BgL_method3572z00_2613;

										{	/* Integrate/node.scm 356 */
											BgL_objectz00_bglt BgL_objz00_2614;

											BgL_objz00_2614 =
												(BgL_objectz00_bglt) (BgL_arg3853z00_1718);
											{	/* Integrate/node.scm 356 */
												long BgL_objzd2classzd2numz00_2615;

												BgL_objzd2classzd2numz00_2615 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2614);
												{	/* Integrate/node.scm 356 */
													obj_t BgL_arg2643z00_2616;

													BgL_arg2643z00_2616 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzintegrate_nodez00,
														(int) (((long) 1)));
													{	/* Integrate/node.scm 356 */
														obj_t BgL_arrayz00_2618;

														int BgL_offsetz00_2619;

														BgL_arrayz00_2618 = BgL_arg2643z00_2616;
														BgL_offsetz00_2619 =
															(int) (BgL_objzd2classzd2numz00_2615);
														{	/* Integrate/node.scm 356 */
															long BgL_offsetz00_2620;

															BgL_offsetz00_2620 =
																((long) (BgL_offsetz00_2619) - OBJECT_TYPE);
															{	/* Integrate/node.scm 356 */
																long BgL_modz00_2621;

																{	/* Integrate/node.scm 356 */
																	int BgL_arg2645z00_2622;

																	BgL_arg2645z00_2622 = (int) (((long) 16));
																	{	/* Integrate/node.scm 356 */
																		long BgL_auxz00_3657;

																		BgL_auxz00_3657 =
																			(long) (BgL_arg2645z00_2622);
																		BgL_modz00_2621 =
																			(BgL_offsetz00_2620 / BgL_auxz00_3657);
																}}
																{	/* Integrate/node.scm 356 */
																	long BgL_restz00_2623;

																	{	/* Integrate/node.scm 356 */
																		int BgL_arg2644z00_2624;

																		BgL_arg2644z00_2624 = (int) (((long) 16));
																		{	/* Integrate/node.scm 356 */
																			long BgL_auxz00_3661;

																			BgL_auxz00_3661 =
																				(long) (BgL_arg2644z00_2624);
																			BgL_restz00_2623 =
																				(BgL_offsetz00_2620 % BgL_auxz00_3661);
																	}}
																	{	/* Integrate/node.scm 356 */

																		BgL_method3572z00_2613 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2618,
																				(int) (BgL_modz00_2621)),
																			(int) (BgL_restz00_2623));
										}}}}}}}}
										BgL_res3942z00_2638 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3572z00_2613) (BgL_method3572z00_2613,
												(obj_t) (BgL_arg3853z00_1718),
												(obj_t) (BgL_integratorz00_2612), BEOA));
								}}
								BgL_arg3852z00_1717 = BgL_res3942z00_2638;
						}}
						((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1698))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3852z00_1717), BUNSPEC);
					}
					BgL_auxz00_3594 = BgL_nodez00_1698;
					return (obj_t) (BgL_auxz00_3594);
				}
			}
		}
	}



/* glo!-let-fun3602 */
	obj_t BGl_gloz12zd2letzd2fun3602z12zzintegrate_nodez00(obj_t BgL_envz00_2918,
		obj_t BgL_nodez00_2919, obj_t BgL_integratorz00_2920)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 333 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1681;

				obj_t BgL_integratorz00_1682;

				{	/* Integrate/node.scm 334 */
					BgL_letzd2funzd2_bglt BgL_auxz00_3676;

					BgL_nodez00_1681 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2919);
					BgL_integratorz00_1682 = BgL_integratorz00_2920;
					{	/* Integrate/node.scm 335 */
						BgL_nodez00_bglt BgL_arg3839z00_1686;

						{	/* Integrate/node.scm 335 */
							BgL_nodez00_bglt BgL_arg3840z00_1687;

							BgL_arg3840z00_1687 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1681))->BgL_bodyz00);
							{	/* Integrate/node.scm 335 */
								BgL_nodez00_bglt BgL_res3936z00_2562;

								{	/* Integrate/node.scm 335 */
									BgL_variablez00_bglt BgL_integratorz00_2536;

									BgL_integratorz00_2536 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1682);
									{	/* Integrate/node.scm 335 */
										obj_t BgL_method3572z00_2537;

										{	/* Integrate/node.scm 335 */
											BgL_objectz00_bglt BgL_objz00_2538;

											BgL_objz00_2538 =
												(BgL_objectz00_bglt) (BgL_arg3840z00_1687);
											{	/* Integrate/node.scm 335 */
												long BgL_objzd2classzd2numz00_2539;

												BgL_objzd2classzd2numz00_2539 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2538);
												{	/* Integrate/node.scm 335 */
													obj_t BgL_arg2643z00_2540;

													BgL_arg2643z00_2540 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzintegrate_nodez00,
														(int) (((long) 1)));
													{	/* Integrate/node.scm 335 */
														obj_t BgL_arrayz00_2542;

														int BgL_offsetz00_2543;

														BgL_arrayz00_2542 = BgL_arg2643z00_2540;
														BgL_offsetz00_2543 =
															(int) (BgL_objzd2classzd2numz00_2539);
														{	/* Integrate/node.scm 335 */
															long BgL_offsetz00_2544;

															BgL_offsetz00_2544 =
																((long) (BgL_offsetz00_2543) - OBJECT_TYPE);
															{	/* Integrate/node.scm 335 */
																long BgL_modz00_2545;

																{	/* Integrate/node.scm 335 */
																	int BgL_arg2645z00_2546;

																	BgL_arg2645z00_2546 = (int) (((long) 16));
																	{	/* Integrate/node.scm 335 */
																		long BgL_auxz00_3687;

																		BgL_auxz00_3687 =
																			(long) (BgL_arg2645z00_2546);
																		BgL_modz00_2545 =
																			(BgL_offsetz00_2544 / BgL_auxz00_3687);
																}}
																{	/* Integrate/node.scm 335 */
																	long BgL_restz00_2547;

																	{	/* Integrate/node.scm 335 */
																		int BgL_arg2644z00_2548;

																		BgL_arg2644z00_2548 = (int) (((long) 16));
																		{	/* Integrate/node.scm 335 */
																			long BgL_auxz00_3691;

																			BgL_auxz00_3691 =
																				(long) (BgL_arg2644z00_2548);
																			BgL_restz00_2547 =
																				(BgL_offsetz00_2544 % BgL_auxz00_3691);
																	}}
																	{	/* Integrate/node.scm 335 */

																		BgL_method3572z00_2537 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2542,
																				(int) (BgL_modz00_2545)),
																			(int) (BgL_restz00_2547));
										}}}}}}}}
										BgL_res3936z00_2562 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3572z00_2537) (BgL_method3572z00_2537,
												(obj_t) (BgL_arg3840z00_1687),
												(obj_t) (BgL_integratorz00_2536), BEOA));
								}}
								BgL_arg3839z00_1686 = BgL_res3936z00_2562;
						}}
						((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1681))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3839z00_1686), BUNSPEC);
					}
					{	/* Integrate/node.scm 336 */
						obj_t BgL_g3562z00_1688;

						BgL_g3562z00_1688 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1681))->BgL_localsz00);
						{
							obj_t BgL_l3560z00_1690;

							BgL_l3560z00_1690 = BgL_g3562z00_1688;
						BgL_zc3anonymousza33841ze3z83_1691:
							if (PAIRP(BgL_l3560z00_1690))
								{	/* Integrate/node.scm 336 */
									{	/* Integrate/node.scm 337 */
										obj_t BgL_localz00_1693;

										BgL_localz00_1693 = CAR(BgL_l3560z00_1690);
										BGl_globaliza7ezd2localzd2funz12zb5zzintegrate_nodez00(
											(BgL_localz00_bglt) (BgL_localz00_1693),
											(BgL_variablez00_bglt) (BgL_integratorz00_1682));
									}
									{
										obj_t BgL_l3560z00_3711;

										BgL_l3560z00_3711 = CDR(BgL_l3560z00_1690);
										BgL_l3560z00_1690 = BgL_l3560z00_3711;
										goto BgL_zc3anonymousza33841ze3z83_1691;
									}
								}
							else
								{	/* Integrate/node.scm 336 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_3676 = BgL_nodez00_1681;
					return (obj_t) (BgL_auxz00_3676);
				}
			}
		}
	}



/* glo!-select3600 */
	obj_t BGl_gloz12zd2select3600zc0zzintegrate_nodez00(obj_t BgL_envz00_2921,
		obj_t BgL_nodez00_2922, obj_t BgL_integratorz00_2923)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 322 */
			{
				BgL_selectz00_bglt BgL_nodez00_1662;

				obj_t BgL_integratorz00_1663;

				{	/* Integrate/node.scm 323 */
					BgL_selectz00_bglt BgL_auxz00_3715;

					BgL_nodez00_1662 = (BgL_selectz00_bglt) (BgL_nodez00_2922);
					BgL_integratorz00_1663 = BgL_integratorz00_2923;
					{	/* Integrate/node.scm 324 */
						BgL_nodez00_bglt BgL_arg3831z00_1667;

						{	/* Integrate/node.scm 324 */
							BgL_nodez00_bglt BgL_arg3832z00_1668;

							BgL_arg3832z00_1668 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1662))->BgL_testz00);
							{	/* Integrate/node.scm 324 */
								BgL_nodez00_bglt BgL_res3930z00_2496;

								{	/* Integrate/node.scm 324 */
									BgL_variablez00_bglt BgL_integratorz00_2470;

									BgL_integratorz00_2470 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1663);
									{	/* Integrate/node.scm 324 */
										obj_t BgL_method3572z00_2471;

										{	/* Integrate/node.scm 324 */
											BgL_objectz00_bglt BgL_objz00_2472;

											BgL_objz00_2472 =
												(BgL_objectz00_bglt) (BgL_arg3832z00_1668);
											{	/* Integrate/node.scm 324 */
												long BgL_objzd2classzd2numz00_2473;

												BgL_objzd2classzd2numz00_2473 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2472);
												{	/* Integrate/node.scm 324 */
													obj_t BgL_arg2643z00_2474;

													BgL_arg2643z00_2474 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzintegrate_nodez00,
														(int) (((long) 1)));
													{	/* Integrate/node.scm 324 */
														obj_t BgL_arrayz00_2476;

														int BgL_offsetz00_2477;

														BgL_arrayz00_2476 = BgL_arg2643z00_2474;
														BgL_offsetz00_2477 =
															(int) (BgL_objzd2classzd2numz00_2473);
														{	/* Integrate/node.scm 324 */
															long BgL_offsetz00_2478;

															BgL_offsetz00_2478 =
																((long) (BgL_offsetz00_2477) - OBJECT_TYPE);
															{	/* Integrate/node.scm 324 */
																long BgL_modz00_2479;

																{	/* Integrate/node.scm 324 */
																	int BgL_arg2645z00_2480;

																	BgL_arg2645z00_2480 = (int) (((long) 16));
																	{	/* Integrate/node.scm 324 */
																		long BgL_auxz00_3726;

																		BgL_auxz00_3726 =
																			(long) (BgL_arg2645z00_2480);
																		BgL_modz00_2479 =
																			(BgL_offsetz00_2478 / BgL_auxz00_3726);
																}}
																{	/* Integrate/node.scm 324 */
																	long BgL_restz00_2481;

																	{	/* Integrate/node.scm 324 */
																		int BgL_arg2644z00_2482;

																		BgL_arg2644z00_2482 = (int) (((long) 16));
																		{	/* Integrate/node.scm 324 */
																			long BgL_auxz00_3730;

																			BgL_auxz00_3730 =
																				(long) (BgL_arg2644z00_2482);
																			BgL_restz00_2481 =
																				(BgL_offsetz00_2478 % BgL_auxz00_3730);
																	}}
																	{	/* Integrate/node.scm 324 */

																		BgL_method3572z00_2471 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2476,
																				(int) (BgL_modz00_2479)),
																			(int) (BgL_restz00_2481));
										}}}}}}}}
										BgL_res3930z00_2496 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3572z00_2471) (BgL_method3572z00_2471,
												(obj_t) (BgL_arg3832z00_1668),
												(obj_t) (BgL_integratorz00_2470), BEOA));
								}}
								BgL_arg3831z00_1667 = BgL_res3930z00_2496;
						}}
						((((BgL_selectz00_bglt) CREF(BgL_nodez00_1662))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3831z00_1667), BUNSPEC);
					}
					{	/* Integrate/node.scm 325 */
						obj_t BgL_g3559z00_1669;

						BgL_g3559z00_1669 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1662))->BgL_clausesz00);
						{
							obj_t BgL_l3557z00_1671;

							BgL_l3557z00_1671 = BgL_g3559z00_1669;
						BgL_zc3anonymousza33833ze3z83_1672:
							if (PAIRP(BgL_l3557z00_1671))
								{	/* Integrate/node.scm 325 */
									{	/* Integrate/node.scm 326 */
										obj_t BgL_clausez00_1674;

										BgL_clausez00_1674 = CAR(BgL_l3557z00_1671);
										{	/* Integrate/node.scm 326 */
											BgL_nodez00_bglt BgL_arg3835z00_1675;

											{	/* Integrate/node.scm 326 */
												obj_t BgL_arg3836z00_1676;

												BgL_arg3836z00_1676 = CDR(BgL_clausez00_1674);
												{	/* Integrate/node.scm 326 */
													BgL_nodez00_bglt BgL_res3933z00_2530;

													{	/* Integrate/node.scm 326 */
														BgL_nodez00_bglt BgL_nodez00_2503;

														BgL_variablez00_bglt BgL_integratorz00_2504;

														BgL_nodez00_2503 =
															(BgL_nodez00_bglt) (BgL_arg3836z00_1676);
														BgL_integratorz00_2504 =
															(BgL_variablez00_bglt) (BgL_integratorz00_1663);
														{	/* Integrate/node.scm 326 */
															obj_t BgL_method3572z00_2505;

															{	/* Integrate/node.scm 326 */
																BgL_objectz00_bglt BgL_objz00_2506;

																BgL_objz00_2506 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2503);
																{	/* Integrate/node.scm 326 */
																	long BgL_objzd2classzd2numz00_2507;

																	BgL_objzd2classzd2numz00_2507 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2506);
																	{	/* Integrate/node.scm 326 */
																		obj_t BgL_arg2643z00_2508;

																		BgL_arg2643z00_2508 =
																			PROCEDURE_REF
																			(BGl_gloz12zd2envzc0zzintegrate_nodez00,
																			(int) (((long) 1)));
																		{	/* Integrate/node.scm 326 */
																			obj_t BgL_arrayz00_2510;

																			int BgL_offsetz00_2511;

																			BgL_arrayz00_2510 = BgL_arg2643z00_2508;
																			BgL_offsetz00_2511 =
																				(int) (BgL_objzd2classzd2numz00_2507);
																			{	/* Integrate/node.scm 326 */
																				long BgL_offsetz00_2512;

																				BgL_offsetz00_2512 =
																					(
																					(long) (BgL_offsetz00_2511) -
																					OBJECT_TYPE);
																				{	/* Integrate/node.scm 326 */
																					long BgL_modz00_2513;

																					{	/* Integrate/node.scm 326 */
																						int BgL_arg2645z00_2514;

																						BgL_arg2645z00_2514 =
																							(int) (((long) 16));
																						{	/* Integrate/node.scm 326 */
																							long BgL_auxz00_3758;

																							BgL_auxz00_3758 =
																								(long) (BgL_arg2645z00_2514);
																							BgL_modz00_2513 =
																								(BgL_offsetz00_2512 /
																								BgL_auxz00_3758);
																					}}
																					{	/* Integrate/node.scm 326 */
																						long BgL_restz00_2515;

																						{	/* Integrate/node.scm 326 */
																							int BgL_arg2644z00_2516;

																							BgL_arg2644z00_2516 =
																								(int) (((long) 16));
																							{	/* Integrate/node.scm 326 */
																								long BgL_auxz00_3762;

																								BgL_auxz00_3762 =
																									(long) (BgL_arg2644z00_2516);
																								BgL_restz00_2515 =
																									(BgL_offsetz00_2512 %
																									BgL_auxz00_3762);
																						}}
																						{	/* Integrate/node.scm 326 */

																							BgL_method3572z00_2505 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2510,
																									(int) (BgL_modz00_2513)),
																								(int) (BgL_restz00_2515));
															}}}}}}}}
															BgL_res3933z00_2530 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3572z00_2505)
																(BgL_method3572z00_2505,
																	(obj_t) (BgL_nodez00_2503),
																	(obj_t) (BgL_integratorz00_2504), BEOA));
													}}
													BgL_arg3835z00_1675 = BgL_res3933z00_2530;
											}}
											{	/* Integrate/node.scm 326 */
												obj_t BgL_auxz00_3774;

												BgL_auxz00_3774 = (obj_t) (BgL_arg3835z00_1675);
												SET_CDR(BgL_clausez00_1674, BgL_auxz00_3774);
									}}}
									{
										obj_t BgL_l3557z00_3777;

										BgL_l3557z00_3777 = CDR(BgL_l3557z00_1671);
										BgL_l3557z00_1671 = BgL_l3557z00_3777;
										goto BgL_zc3anonymousza33833ze3z83_1672;
									}
								}
							else
								{	/* Integrate/node.scm 325 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_3715 = BgL_nodez00_1662;
					return (obj_t) (BgL_auxz00_3715);
				}
			}
		}
	}



/* glo!-fail3598 */
	obj_t BGl_gloz12zd2fail3598zc0zzintegrate_nodez00(obj_t BgL_envz00_2924,
		obj_t BgL_nodez00_2925, obj_t BgL_integratorz00_2926)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 312 */
			{
				BgL_failz00_bglt BgL_nodez00_1649;

				obj_t BgL_integratorz00_1650;

				{	/* Integrate/node.scm 313 */
					BgL_failz00_bglt BgL_auxz00_3781;

					BgL_nodez00_1649 = (BgL_failz00_bglt) (BgL_nodez00_2925);
					BgL_integratorz00_1650 = BgL_integratorz00_2926;
					{	/* Integrate/node.scm 314 */
						BgL_nodez00_bglt BgL_arg3824z00_1654;

						{	/* Integrate/node.scm 314 */
							BgL_nodez00_bglt BgL_arg3825z00_1655;

							BgL_arg3825z00_1655 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1649))->BgL_procz00);
							{	/* Integrate/node.scm 314 */
								BgL_nodez00_bglt BgL_res3921z00_2403;

								{	/* Integrate/node.scm 314 */
									BgL_variablez00_bglt BgL_integratorz00_2377;

									BgL_integratorz00_2377 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1650);
									{	/* Integrate/node.scm 314 */
										obj_t BgL_method3572z00_2378;

										{	/* Integrate/node.scm 314 */
											BgL_objectz00_bglt BgL_objz00_2379;

											BgL_objz00_2379 =
												(BgL_objectz00_bglt) (BgL_arg3825z00_1655);
											{	/* Integrate/node.scm 314 */
												long BgL_objzd2classzd2numz00_2380;

												BgL_objzd2classzd2numz00_2380 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2379);
												{	/* Integrate/node.scm 314 */
													obj_t BgL_arg2643z00_2381;

													BgL_arg2643z00_2381 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzintegrate_nodez00,
														(int) (((long) 1)));
													{	/* Integrate/node.scm 314 */
														obj_t BgL_arrayz00_2383;

														int BgL_offsetz00_2384;

														BgL_arrayz00_2383 = BgL_arg2643z00_2381;
														BgL_offsetz00_2384 =
															(int) (BgL_objzd2classzd2numz00_2380);
														{	/* Integrate/node.scm 314 */
															long BgL_offsetz00_2385;

															BgL_offsetz00_2385 =
																((long) (BgL_offsetz00_2384) - OBJECT_TYPE);
															{	/* Integrate/node.scm 314 */
																long BgL_modz00_2386;

																{	/* Integrate/node.scm 314 */
																	int BgL_arg2645z00_2387;

																	BgL_arg2645z00_2387 = (int) (((long) 16));
																	{	/* Integrate/node.scm 314 */
																		long BgL_auxz00_3792;

																		BgL_auxz00_3792 =
																			(long) (BgL_arg2645z00_2387);
																		BgL_modz00_2386 =
																			(BgL_offsetz00_2385 / BgL_auxz00_3792);
																}}
																{	/* Integrate/node.scm 314 */
																	long BgL_restz00_2388;

																	{	/* Integrate/node.scm 314 */
																		int BgL_arg2644z00_2389;

																		BgL_arg2644z00_2389 = (int) (((long) 16));
																		{	/* Integrate/node.scm 314 */
																			long BgL_auxz00_3796;

																			BgL_auxz00_3796 =
																				(long) (BgL_arg2644z00_2389);
																			BgL_restz00_2388 =
																				(BgL_offsetz00_2385 % BgL_auxz00_3796);
																	}}
																	{	/* Integrate/node.scm 314 */

																		BgL_method3572z00_2378 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2383,
																				(int) (BgL_modz00_2386)),
																			(int) (BgL_restz00_2388));
										}}}}}}}}
										BgL_res3921z00_2403 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3572z00_2378) (BgL_method3572z00_2378,
												(obj_t) (BgL_arg3825z00_1655),
												(obj_t) (BgL_integratorz00_2377), BEOA));
								}}
								BgL_arg3824z00_1654 = BgL_res3921z00_2403;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1649))->BgL_procz00) =
							((BgL_nodez00_bglt) BgL_arg3824z00_1654), BUNSPEC);
					}
					{	/* Integrate/node.scm 315 */
						BgL_nodez00_bglt BgL_arg3826z00_1656;

						{	/* Integrate/node.scm 315 */
							BgL_nodez00_bglt BgL_arg3827z00_1657;

							BgL_arg3827z00_1657 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1649))->BgL_msgz00);
							{	/* Integrate/node.scm 315 */
								BgL_nodez00_bglt BgL_res3924z00_2434;

								{	/* Integrate/node.scm 315 */
									BgL_variablez00_bglt BgL_integratorz00_2408;

									BgL_integratorz00_2408 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1650);
									{	/* Integrate/node.scm 315 */
										obj_t BgL_method3572z00_2409;

										{	/* Integrate/node.scm 315 */
											BgL_objectz00_bglt BgL_objz00_2410;

											BgL_objz00_2410 =
												(BgL_objectz00_bglt) (BgL_arg3827z00_1657);
											{	/* Integrate/node.scm 315 */
												long BgL_objzd2classzd2numz00_2411;

												BgL_objzd2classzd2numz00_2411 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2410);
												{	/* Integrate/node.scm 315 */
													obj_t BgL_arg2643z00_2412;

													BgL_arg2643z00_2412 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzintegrate_nodez00,
														(int) (((long) 1)));
													{	/* Integrate/node.scm 315 */
														obj_t BgL_arrayz00_2414;

														int BgL_offsetz00_2415;

														BgL_arrayz00_2414 = BgL_arg2643z00_2412;
														BgL_offsetz00_2415 =
															(int) (BgL_objzd2classzd2numz00_2411);
														{	/* Integrate/node.scm 315 */
															long BgL_offsetz00_2416;

															BgL_offsetz00_2416 =
																((long) (BgL_offsetz00_2415) - OBJECT_TYPE);
															{	/* Integrate/node.scm 315 */
																long BgL_modz00_2417;

																{	/* Integrate/node.scm 315 */
																	int BgL_arg2645z00_2418;

																	BgL_arg2645z00_2418 = (int) (((long) 16));
																	{	/* Integrate/node.scm 315 */
																		long BgL_auxz00_3819;

																		BgL_auxz00_3819 =
																			(long) (BgL_arg2645z00_2418);
																		BgL_modz00_2417 =
																			(BgL_offsetz00_2416 / BgL_auxz00_3819);
																}}
																{	/* Integrate/node.scm 315 */
																	long BgL_restz00_2419;

																	{	/* Integrate/node.scm 315 */
																		int BgL_arg2644z00_2420;

																		BgL_arg2644z00_2420 = (int) (((long) 16));
																		{	/* Integrate/node.scm 315 */
																			long BgL_auxz00_3823;

																			BgL_auxz00_3823 =
																				(long) (BgL_arg2644z00_2420);
																			BgL_restz00_2419 =
																				(BgL_offsetz00_2416 % BgL_auxz00_3823);
																	}}
																	{	/* Integrate/node.scm 315 */

																		BgL_method3572z00_2409 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2414,
																				(int) (BgL_modz00_2417)),
																			(int) (BgL_restz00_2419));
										}}}}}}}}
										BgL_res3924z00_2434 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3572z00_2409) (BgL_method3572z00_2409,
												(obj_t) (BgL_arg3827z00_1657),
												(obj_t) (BgL_integratorz00_2408), BEOA));
								}}
								BgL_arg3826z00_1656 = BgL_res3924z00_2434;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1649))->BgL_msgz00) =
							((BgL_nodez00_bglt) BgL_arg3826z00_1656), BUNSPEC);
					}
					{	/* Integrate/node.scm 316 */
						BgL_nodez00_bglt BgL_arg3828z00_1658;

						{	/* Integrate/node.scm 316 */
							BgL_nodez00_bglt BgL_arg3829z00_1659;

							BgL_arg3829z00_1659 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1649))->BgL_objz00);
							{	/* Integrate/node.scm 316 */
								BgL_nodez00_bglt BgL_res3927z00_2465;

								{	/* Integrate/node.scm 316 */
									BgL_variablez00_bglt BgL_integratorz00_2439;

									BgL_integratorz00_2439 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1650);
									{	/* Integrate/node.scm 316 */
										obj_t BgL_method3572z00_2440;

										{	/* Integrate/node.scm 316 */
											BgL_objectz00_bglt BgL_objz00_2441;

											BgL_objz00_2441 =
												(BgL_objectz00_bglt) (BgL_arg3829z00_1659);
											{	/* Integrate/node.scm 316 */
												long BgL_objzd2classzd2numz00_2442;

												BgL_objzd2classzd2numz00_2442 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2441);
												{	/* Integrate/node.scm 316 */
													obj_t BgL_arg2643z00_2443;

													BgL_arg2643z00_2443 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzintegrate_nodez00,
														(int) (((long) 1)));
													{	/* Integrate/node.scm 316 */
														obj_t BgL_arrayz00_2445;

														int BgL_offsetz00_2446;

														BgL_arrayz00_2445 = BgL_arg2643z00_2443;
														BgL_offsetz00_2446 =
															(int) (BgL_objzd2classzd2numz00_2442);
														{	/* Integrate/node.scm 316 */
															long BgL_offsetz00_2447;

															BgL_offsetz00_2447 =
																((long) (BgL_offsetz00_2446) - OBJECT_TYPE);
															{	/* Integrate/node.scm 316 */
																long BgL_modz00_2448;

																{	/* Integrate/node.scm 316 */
																	int BgL_arg2645z00_2449;

																	BgL_arg2645z00_2449 = (int) (((long) 16));
																	{	/* Integrate/node.scm 316 */
																		long BgL_auxz00_3846;

																		BgL_auxz00_3846 =
																			(long) (BgL_arg2645z00_2449);
																		BgL_modz00_2448 =
																			(BgL_offsetz00_2447 / BgL_auxz00_3846);
																}}
																{	/* Integrate/node.scm 316 */
																	long BgL_restz00_2450;

																	{	/* Integrate/node.scm 316 */
																		int BgL_arg2644z00_2451;

																		BgL_arg2644z00_2451 = (int) (((long) 16));
																		{	/* Integrate/node.scm 316 */
																			long BgL_auxz00_3850;

																			BgL_auxz00_3850 =
																				(long) (BgL_arg2644z00_2451);
																			BgL_restz00_2450 =
																				(BgL_offsetz00_2447 % BgL_auxz00_3850);
																	}}
																	{	/* Integrate/node.scm 316 */

																		BgL_method3572z00_2440 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2445,
																				(int) (BgL_modz00_2448)),
																			(int) (BgL_restz00_2450));
										}}}}}}}}
										BgL_res3927z00_2465 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3572z00_2440) (BgL_method3572z00_2440,
												(obj_t) (BgL_arg3829z00_1659),
												(obj_t) (BgL_integratorz00_2439), BEOA));
								}}
								BgL_arg3828z00_1658 = BgL_res3927z00_2465;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1649))->BgL_objz00) =
							((BgL_nodez00_bglt) BgL_arg3828z00_1658), BUNSPEC);
					}
					BgL_auxz00_3781 = BgL_nodez00_1649;
					return (obj_t) (BgL_auxz00_3781);
				}
			}
		}
	}



/* glo!-conditional3596 */
	obj_t BGl_gloz12zd2conditional3596zc0zzintegrate_nodez00(obj_t
		BgL_envz00_2927, obj_t BgL_nodez00_2928, obj_t BgL_integratorz00_2929)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 302 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1636;

				obj_t BgL_integratorz00_1637;

				{	/* Integrate/node.scm 303 */
					BgL_conditionalz00_bglt BgL_auxz00_3865;

					BgL_nodez00_1636 = (BgL_conditionalz00_bglt) (BgL_nodez00_2928);
					BgL_integratorz00_1637 = BgL_integratorz00_2929;
					{	/* Integrate/node.scm 304 */
						BgL_nodez00_bglt BgL_arg3817z00_1641;

						{	/* Integrate/node.scm 304 */
							BgL_nodez00_bglt BgL_arg3818z00_1642;

							BgL_arg3818z00_1642 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1636))->
								BgL_testz00);
							{	/* Integrate/node.scm 304 */
								BgL_nodez00_bglt BgL_res3912z00_2310;

								{	/* Integrate/node.scm 304 */
									BgL_variablez00_bglt BgL_integratorz00_2284;

									BgL_integratorz00_2284 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1637);
									{	/* Integrate/node.scm 304 */
										obj_t BgL_method3572z00_2285;

										{	/* Integrate/node.scm 304 */
											BgL_objectz00_bglt BgL_objz00_2286;

											BgL_objz00_2286 =
												(BgL_objectz00_bglt) (BgL_arg3818z00_1642);
											{	/* Integrate/node.scm 304 */
												long BgL_objzd2classzd2numz00_2287;

												BgL_objzd2classzd2numz00_2287 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2286);
												{	/* Integrate/node.scm 304 */
													obj_t BgL_arg2643z00_2288;

													BgL_arg2643z00_2288 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzintegrate_nodez00,
														(int) (((long) 1)));
													{	/* Integrate/node.scm 304 */
														obj_t BgL_arrayz00_2290;

														int BgL_offsetz00_2291;

														BgL_arrayz00_2290 = BgL_arg2643z00_2288;
														BgL_offsetz00_2291 =
															(int) (BgL_objzd2classzd2numz00_2287);
														{	/* Integrate/node.scm 304 */
															long BgL_offsetz00_2292;

															BgL_offsetz00_2292 =
																((long) (BgL_offsetz00_2291) - OBJECT_TYPE);
															{	/* Integrate/node.scm 304 */
																long BgL_modz00_2293;

																{	/* Integrate/node.scm 304 */
																	int BgL_arg2645z00_2294;

																	BgL_arg2645z00_2294 = (int) (((long) 16));
																	{	/* Integrate/node.scm 304 */
																		long BgL_auxz00_3876;

																		BgL_auxz00_3876 =
																			(long) (BgL_arg2645z00_2294);
																		BgL_modz00_2293 =
																			(BgL_offsetz00_2292 / BgL_auxz00_3876);
																}}
																{	/* Integrate/node.scm 304 */
																	long BgL_restz00_2295;

																	{	/* Integrate/node.scm 304 */
																		int BgL_arg2644z00_2296;

																		BgL_arg2644z00_2296 = (int) (((long) 16));
																		{	/* Integrate/node.scm 304 */
																			long BgL_auxz00_3880;

																			BgL_auxz00_3880 =
																				(long) (BgL_arg2644z00_2296);
																			BgL_restz00_2295 =
																				(BgL_offsetz00_2292 % BgL_auxz00_3880);
																	}}
																	{	/* Integrate/node.scm 304 */

																		BgL_method3572z00_2285 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2290,
																				(int) (BgL_modz00_2293)),
																			(int) (BgL_restz00_2295));
										}}}}}}}}
										BgL_res3912z00_2310 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3572z00_2285) (BgL_method3572z00_2285,
												(obj_t) (BgL_arg3818z00_1642),
												(obj_t) (BgL_integratorz00_2284), BEOA));
								}}
								BgL_arg3817z00_1641 = BgL_res3912z00_2310;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1636))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3817z00_1641), BUNSPEC);
					}
					{	/* Integrate/node.scm 305 */
						BgL_nodez00_bglt BgL_arg3819z00_1643;

						{	/* Integrate/node.scm 305 */
							BgL_nodez00_bglt BgL_arg3820z00_1644;

							BgL_arg3820z00_1644 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1636))->
								BgL_truez00);
							{	/* Integrate/node.scm 305 */
								BgL_nodez00_bglt BgL_res3915z00_2341;

								{	/* Integrate/node.scm 305 */
									BgL_variablez00_bglt BgL_integratorz00_2315;

									BgL_integratorz00_2315 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1637);
									{	/* Integrate/node.scm 305 */
										obj_t BgL_method3572z00_2316;

										{	/* Integrate/node.scm 305 */
											BgL_objectz00_bglt BgL_objz00_2317;

											BgL_objz00_2317 =
												(BgL_objectz00_bglt) (BgL_arg3820z00_1644);
											{	/* Integrate/node.scm 305 */
												long BgL_objzd2classzd2numz00_2318;

												BgL_objzd2classzd2numz00_2318 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2317);
												{	/* Integrate/node.scm 305 */
													obj_t BgL_arg2643z00_2319;

													BgL_arg2643z00_2319 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzintegrate_nodez00,
														(int) (((long) 1)));
													{	/* Integrate/node.scm 305 */
														obj_t BgL_arrayz00_2321;

														int BgL_offsetz00_2322;

														BgL_arrayz00_2321 = BgL_arg2643z00_2319;
														BgL_offsetz00_2322 =
															(int) (BgL_objzd2classzd2numz00_2318);
														{	/* Integrate/node.scm 305 */
															long BgL_offsetz00_2323;

															BgL_offsetz00_2323 =
																((long) (BgL_offsetz00_2322) - OBJECT_TYPE);
															{	/* Integrate/node.scm 305 */
																long BgL_modz00_2324;

																{	/* Integrate/node.scm 305 */
																	int BgL_arg2645z00_2325;

																	BgL_arg2645z00_2325 = (int) (((long) 16));
																	{	/* Integrate/node.scm 305 */
																		long BgL_auxz00_3903;

																		BgL_auxz00_3903 =
																			(long) (BgL_arg2645z00_2325);
																		BgL_modz00_2324 =
																			(BgL_offsetz00_2323 / BgL_auxz00_3903);
																}}
																{	/* Integrate/node.scm 305 */
																	long BgL_restz00_2326;

																	{	/* Integrate/node.scm 305 */
																		int BgL_arg2644z00_2327;

																		BgL_arg2644z00_2327 = (int) (((long) 16));
																		{	/* Integrate/node.scm 305 */
																			long BgL_auxz00_3907;

																			BgL_auxz00_3907 =
																				(long) (BgL_arg2644z00_2327);
																			BgL_restz00_2326 =
																				(BgL_offsetz00_2323 % BgL_auxz00_3907);
																	}}
																	{	/* Integrate/node.scm 305 */

																		BgL_method3572z00_2316 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2321,
																				(int) (BgL_modz00_2324)),
																			(int) (BgL_restz00_2326));
										}}}}}}}}
										BgL_res3915z00_2341 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3572z00_2316) (BgL_method3572z00_2316,
												(obj_t) (BgL_arg3820z00_1644),
												(obj_t) (BgL_integratorz00_2315), BEOA));
								}}
								BgL_arg3819z00_1643 = BgL_res3915z00_2341;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1636))->BgL_truez00) =
							((BgL_nodez00_bglt) BgL_arg3819z00_1643), BUNSPEC);
					}
					{	/* Integrate/node.scm 306 */
						BgL_nodez00_bglt BgL_arg3821z00_1645;

						{	/* Integrate/node.scm 306 */
							BgL_nodez00_bglt BgL_arg3822z00_1646;

							BgL_arg3822z00_1646 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1636))->
								BgL_falsez00);
							{	/* Integrate/node.scm 306 */
								BgL_nodez00_bglt BgL_res3918z00_2372;

								{	/* Integrate/node.scm 306 */
									BgL_variablez00_bglt BgL_integratorz00_2346;

									BgL_integratorz00_2346 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1637);
									{	/* Integrate/node.scm 306 */
										obj_t BgL_method3572z00_2347;

										{	/* Integrate/node.scm 306 */
											BgL_objectz00_bglt BgL_objz00_2348;

											BgL_objz00_2348 =
												(BgL_objectz00_bglt) (BgL_arg3822z00_1646);
											{	/* Integrate/node.scm 306 */
												long BgL_objzd2classzd2numz00_2349;

												BgL_objzd2classzd2numz00_2349 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2348);
												{	/* Integrate/node.scm 306 */
													obj_t BgL_arg2643z00_2350;

													BgL_arg2643z00_2350 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzintegrate_nodez00,
														(int) (((long) 1)));
													{	/* Integrate/node.scm 306 */
														obj_t BgL_arrayz00_2352;

														int BgL_offsetz00_2353;

														BgL_arrayz00_2352 = BgL_arg2643z00_2350;
														BgL_offsetz00_2353 =
															(int) (BgL_objzd2classzd2numz00_2349);
														{	/* Integrate/node.scm 306 */
															long BgL_offsetz00_2354;

															BgL_offsetz00_2354 =
																((long) (BgL_offsetz00_2353) - OBJECT_TYPE);
															{	/* Integrate/node.scm 306 */
																long BgL_modz00_2355;

																{	/* Integrate/node.scm 306 */
																	int BgL_arg2645z00_2356;

																	BgL_arg2645z00_2356 = (int) (((long) 16));
																	{	/* Integrate/node.scm 306 */
																		long BgL_auxz00_3930;

																		BgL_auxz00_3930 =
																			(long) (BgL_arg2645z00_2356);
																		BgL_modz00_2355 =
																			(BgL_offsetz00_2354 / BgL_auxz00_3930);
																}}
																{	/* Integrate/node.scm 306 */
																	long BgL_restz00_2357;

																	{	/* Integrate/node.scm 306 */
																		int BgL_arg2644z00_2358;

																		BgL_arg2644z00_2358 = (int) (((long) 16));
																		{	/* Integrate/node.scm 306 */
																			long BgL_auxz00_3934;

																			BgL_auxz00_3934 =
																				(long) (BgL_arg2644z00_2358);
																			BgL_restz00_2357 =
																				(BgL_offsetz00_2354 % BgL_auxz00_3934);
																	}}
																	{	/* Integrate/node.scm 306 */

																		BgL_method3572z00_2347 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2352,
																				(int) (BgL_modz00_2355)),
																			(int) (BgL_restz00_2357));
										}}}}}}}}
										BgL_res3918z00_2372 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3572z00_2347) (BgL_method3572z00_2347,
												(obj_t) (BgL_arg3822z00_1646),
												(obj_t) (BgL_integratorz00_2346), BEOA));
								}}
								BgL_arg3821z00_1645 = BgL_res3918z00_2372;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1636))->
								BgL_falsez00) =
							((BgL_nodez00_bglt) BgL_arg3821z00_1645), BUNSPEC);
					}
					BgL_auxz00_3865 = BgL_nodez00_1636;
					return (obj_t) (BgL_auxz00_3865);
				}
			}
		}
	}



/* glo!-setq3594 */
	obj_t BGl_gloz12zd2setq3594zc0zzintegrate_nodez00(obj_t BgL_envz00_2930,
		obj_t BgL_nodez00_2931, obj_t BgL_integratorz00_2932)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 267 */
			{
				BgL_setqz00_bglt BgL_nodez00_1598;

				obj_t BgL_integratorz00_1599;

				BgL_nodez00_1598 = (BgL_setqz00_bglt) (BgL_nodez00_2931);
				BgL_integratorz00_1599 = BgL_integratorz00_2932;
				{	/* Integrate/node.scm 269 */
					BgL_nodez00_bglt BgL_arg3794z00_1603;

					{	/* Integrate/node.scm 269 */
						BgL_nodez00_bglt BgL_arg3795z00_1604;

						BgL_arg3795z00_1604 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_1598))->BgL_valuez00);
						{	/* Integrate/node.scm 269 */
							BgL_nodez00_bglt BgL_res3908z00_2255;

							{	/* Integrate/node.scm 269 */
								BgL_variablez00_bglt BgL_integratorz00_2229;

								BgL_integratorz00_2229 =
									(BgL_variablez00_bglt) (BgL_integratorz00_1599);
								{	/* Integrate/node.scm 269 */
									obj_t BgL_method3572z00_2230;

									{	/* Integrate/node.scm 269 */
										BgL_objectz00_bglt BgL_objz00_2231;

										BgL_objz00_2231 =
											(BgL_objectz00_bglt) (BgL_arg3795z00_1604);
										{	/* Integrate/node.scm 269 */
											long BgL_objzd2classzd2numz00_2232;

											BgL_objzd2classzd2numz00_2232 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2231);
											{	/* Integrate/node.scm 269 */
												obj_t BgL_arg2643z00_2233;

												BgL_arg2643z00_2233 =
													PROCEDURE_REF(BGl_gloz12zd2envzc0zzintegrate_nodez00,
													(int) (((long) 1)));
												{	/* Integrate/node.scm 269 */
													obj_t BgL_arrayz00_2235;

													int BgL_offsetz00_2236;

													BgL_arrayz00_2235 = BgL_arg2643z00_2233;
													BgL_offsetz00_2236 =
														(int) (BgL_objzd2classzd2numz00_2232);
													{	/* Integrate/node.scm 269 */
														long BgL_offsetz00_2237;

														BgL_offsetz00_2237 =
															((long) (BgL_offsetz00_2236) - OBJECT_TYPE);
														{	/* Integrate/node.scm 269 */
															long BgL_modz00_2238;

															{	/* Integrate/node.scm 269 */
																int BgL_arg2645z00_2239;

																BgL_arg2645z00_2239 = (int) (((long) 16));
																{	/* Integrate/node.scm 269 */
																	long BgL_auxz00_3959;

																	BgL_auxz00_3959 =
																		(long) (BgL_arg2645z00_2239);
																	BgL_modz00_2238 =
																		(BgL_offsetz00_2237 / BgL_auxz00_3959);
															}}
															{	/* Integrate/node.scm 269 */
																long BgL_restz00_2240;

																{	/* Integrate/node.scm 269 */
																	int BgL_arg2644z00_2241;

																	BgL_arg2644z00_2241 = (int) (((long) 16));
																	{	/* Integrate/node.scm 269 */
																		long BgL_auxz00_3963;

																		BgL_auxz00_3963 =
																			(long) (BgL_arg2644z00_2241);
																		BgL_restz00_2240 =
																			(BgL_offsetz00_2237 % BgL_auxz00_3963);
																}}
																{	/* Integrate/node.scm 269 */

																	BgL_method3572z00_2230 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2235,
																			(int) (BgL_modz00_2238)),
																		(int) (BgL_restz00_2240));
									}}}}}}}}
									BgL_res3908z00_2255 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3572z00_2230)
										(BgL_method3572z00_2230, (obj_t) (BgL_arg3795z00_1604),
											(obj_t) (BgL_integratorz00_2229), BEOA));
							}}
							BgL_arg3794z00_1603 = BgL_res3908z00_2255;
					}}
					((((BgL_setqz00_bglt) CREF(BgL_nodez00_1598))->BgL_valuez00) =
						((BgL_nodez00_bglt) BgL_arg3794z00_1603), BUNSPEC);
				}
				{	/* Integrate/node.scm 270 */
					BgL_variablez00_bglt BgL_varz00_1605;

					{	/* Integrate/node.scm 270 */
						BgL_varz00_bglt BgL_obj2155z00_2259;

						BgL_obj2155z00_2259 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_1598))->BgL_varz00);
						BgL_varz00_1605 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2259))->BgL_variablez00);
					}
					{	/* Integrate/node.scm 271 */
						obj_t BgL_g3523z00_1606;

						BgL_g3523z00_1606 =
							(((BgL_variablez00_bglt) CREF(BgL_varz00_1605))->
							BgL_fastzd2alphazd2);
						{
							obj_t BgL_varz00_1608;

							obj_t BgL_alphaz00_1609;

							BgL_varz00_1608 = (obj_t) (BgL_varz00_1605);
							BgL_alphaz00_1609 = BgL_g3523z00_1606;
						BgL_zc3anonymousza33796ze3z83_1610:
							if (BGl_iszd2azf3z21zz__objectz00(BgL_alphaz00_1609,
									BGl_localz00zzast_varz00))
								{	/* Integrate/node.scm 273 */
									{	/* Integrate/node.scm 275 */
										BgL_varz00_bglt BgL_arg3798z00_1612;

										BgL_arg3798z00_1612 =
											(((BgL_setqz00_bglt) CREF(BgL_nodez00_1598))->BgL_varz00);
										{
											BgL_variablez00_bglt BgL_auxz00_3982;

											BgL_auxz00_3982 =
												(BgL_variablez00_bglt) (
												(BgL_localz00_bglt) (BgL_alphaz00_1609));
											((((BgL_varz00_bglt) CREF(BgL_arg3798z00_1612))->
													BgL_variablez00) =
												((BgL_variablez00_bglt) BgL_auxz00_3982), BUNSPEC);
										}
									}
									{	/* Integrate/node.scm 276 */
										obj_t BgL_arg3799z00_1613;

										{
											BgL_variablez00_bglt BgL_auxz00_3986;

											BgL_auxz00_3986 =
												(BgL_variablez00_bglt) (
												(BgL_localz00_bglt) (BgL_alphaz00_1609));
											BgL_arg3799z00_1613 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_3986))->
												BgL_fastzd2alphazd2);
										}
										{
											obj_t BgL_alphaz00_3991;

											obj_t BgL_varz00_3990;

											BgL_varz00_3990 = BgL_alphaz00_1609;
											BgL_alphaz00_3991 = BgL_arg3799z00_1613;
											BgL_alphaz00_1609 = BgL_alphaz00_3991;
											BgL_varz00_1608 = BgL_varz00_3990;
											goto BgL_zc3anonymousza33796ze3z83_1610;
										}
									}
								}
							else
								{	/* Integrate/node.scm 277 */
									BgL_variablez00_bglt BgL_varz00_1614;

									{	/* Integrate/node.scm 277 */
										BgL_varz00_bglt BgL_obj2155z00_2267;

										BgL_obj2155z00_2267 =
											(((BgL_setqz00_bglt) CREF(BgL_nodez00_1598))->BgL_varz00);
										BgL_varz00_1614 =
											(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2267))->
											BgL_variablez00);
									}
									{	/* Integrate/node.scm 278 */
										bool_t BgL_testz00_3994;

										{	/* Integrate/node.scm 278 */
											bool_t BgL_testz00_3995;

											{	/* Integrate/node.scm 278 */
												obj_t BgL_obj1812z00_2268;

												BgL_obj1812z00_2268 = (obj_t) (BgL_varz00_1614);
												BgL_testz00_3995 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj1812z00_2268,
													BGl_localz00zzast_varz00);
											}
											if (BgL_testz00_3995)
												{	/* Integrate/node.scm 278 */
													BgL_testz00_3994 =
														BGl_integratezd2celledzf3z21zzintegrate_nodez00(
														(BgL_localz00_bglt) (BgL_varz00_1614));
												}
											else
												{	/* Integrate/node.scm 278 */
													BgL_testz00_3994 = ((bool_t) 0);
												}
										}
										if (BgL_testz00_3994)
											{	/* Integrate/node.scm 279 */
												BgL_localz00_bglt BgL_azd2varzd2_1616;

												obj_t BgL_locz00_1617;

												BgL_azd2varzd2_1616 =
													BGl_makezd2localzd2svarz00zzast_localz00
													(CNST_TABLE_REF(((long) 5)),
													(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
												{
													BgL_nodez00_bglt BgL_auxz00_4003;

													BgL_auxz00_4003 =
														(BgL_nodez00_bglt) (BgL_nodez00_1598);
													BgL_locz00_1617 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_4003))->
														BgL_locz00);
												}
												{	/* Integrate/node.scm 281 */
													BgL_variablez00_bglt BgL_obj1616z00_2270;

													obj_t BgL_val1615z00_2271;

													BgL_obj1616z00_2270 = BgL_varz00_1614;
													BgL_val1615z00_2271 = CNST_TABLE_REF(((long) 1));
													((((BgL_variablez00_bglt) CREF(BgL_obj1616z00_2270))->
															BgL_accessz00) =
														((obj_t) BgL_val1615z00_2271), BUNSPEC);
												}
												{	/* Integrate/node.scm 282 */
													BgL_varz00_bglt BgL_arg3801z00_1618;

													BgL_arg3801z00_1618 =
														(((BgL_setqz00_bglt) CREF(BgL_nodez00_1598))->
														BgL_varz00);
													{
														BgL_typez00_bglt BgL_auxz00_4011;

														BgL_nodez00_bglt BgL_auxz00_4009;

														BgL_auxz00_4011 =
															(BgL_typez00_bglt)
															(BGl_za2objza2z00zztype_cachez00);
														BgL_auxz00_4009 =
															(BgL_nodez00_bglt) (BgL_arg3801z00_1618);
														((((BgL_nodez00_bglt) CREF(BgL_auxz00_4009))->
																BgL_typez00) =
															((BgL_typez00_bglt) BgL_auxz00_4011), BUNSPEC);
												}}
												{	/* Integrate/node.scm 283 */
													BgL_svarz00_bglt BgL_obj3524z00_1619;

													{
														BgL_svarz00_bglt BgL_auxz00_4014;

														{	/* Integrate/node.scm 283 */
															BgL_valuez00_bglt BgL_auxz00_4015;

															{
																BgL_variablez00_bglt BgL_auxz00_4016;

																BgL_auxz00_4016 =
																	(BgL_variablez00_bglt) (BgL_azd2varzd2_1616);
																BgL_auxz00_4015 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_4016))->BgL_valuez00);
															}
															BgL_auxz00_4014 =
																(BgL_svarz00_bglt) (BgL_auxz00_4015);
														}
														BgL_obj3524z00_1619 =
															((BgL_svarz00_bglt) BgL_auxz00_4014);
													}
													{	/* Integrate/node.scm 283 */
														obj_t BgL_auxz00_4023;

														BgL_objectz00_bglt BgL_auxz00_4021;

														BgL_auxz00_4023 =
															BGl_wideningzd2svarzf2Iinfoz20zzintegrate_infoz00
															(BUNSPEC, BUNSPEC, ((bool_t) 0), ((bool_t) 0));
														BgL_auxz00_4021 =
															(BgL_objectz00_bglt) (BgL_obj3524z00_1619);
														BGL_OBJECT_WIDENING_SET(BgL_auxz00_4021,
															BgL_auxz00_4023);
													}
													BGL_OBJECT_CLASS_NUM_SET(
														(BgL_objectz00_bglt) (BgL_obj3524z00_1619),
														BGl_classzd2numzd2zz__objectz00
														(BGl_svarzf2Iinfozf2zzintegrate_infoz00));
													BgL_obj3524z00_1619;
												}
												{	/* Integrate/node.scm 285 */
													obj_t BgL_arg3806z00_1623;

													BgL_boxzd2setz12zc0_bglt BgL_arg3807z00_1624;

													{	/* Integrate/node.scm 288 */
														obj_t BgL_arg3808z00_1625;

														{	/* Integrate/node.scm 288 */
															BgL_nodez00_bglt BgL_arg3810z00_1627;

															BgL_arg3810z00_1627 =
																(((BgL_setqz00_bglt) CREF(BgL_nodez00_1598))->
																BgL_valuez00);
															BgL_arg3808z00_1625 =
																MAKE_PAIR((obj_t) (BgL_azd2varzd2_1616),
																(obj_t) (BgL_arg3810z00_1627));
														}
														{	/* Integrate/node.scm 288 */
															obj_t BgL_list3809z00_1626;

															BgL_list3809z00_1626 =
																MAKE_PAIR(BgL_arg3808z00_1625, BNIL);
															BgL_arg3806z00_1623 = BgL_list3809z00_1626;
													}}
													{	/* Integrate/node.scm 292 */
														BgL_varz00_bglt BgL_arg3811z00_1628;

														BgL_varz00_bglt BgL_arg3812z00_1629;

														BgL_arg3811z00_1628 =
															(((BgL_setqz00_bglt) CREF(BgL_nodez00_1598))->
															BgL_varz00);
														BgL_arg3812z00_1629 =
															BGl_makezd2varzd2zzast_nodez00(BgL_locz00_1617,
															(BgL_typez00_bglt)
															(BGl_za2_za2z00zztype_cachez00),
															(BgL_variablez00_bglt) (BgL_azd2varzd2_1616));
														BgL_arg3807z00_1624 =
															BGl_makezd2boxzd2setz12z12zzast_nodez00
															(BgL_locz00_1617,
															(BgL_typez00_bglt)
															(BGl_za2_za2z00zztype_cachez00),
															BgL_arg3811z00_1628,
															(BgL_nodez00_bglt) (BgL_arg3812z00_1629));
													}
													return
														(obj_t) (BGl_makezd2letzd2varz00zzast_nodez00
														(BgL_locz00_1617,
															(BgL_typez00_bglt)
															(BGl_za2_za2z00zztype_cachez00), BUNSPEC,
															BINT(((long) -1)), BgL_arg3806z00_1623,
															(BgL_nodez00_bglt) (BgL_arg3807z00_1624),
															((bool_t) 1)));
											}}
										else
											{	/* Integrate/node.scm 278 */
												return (obj_t) (BgL_nodez00_1598);
											}
									}
								}
						}
					}
				}
			}
		}
	}



/* glo!-cast3592 */
	obj_t BGl_gloz12zd2cast3592zc0zzintegrate_nodez00(obj_t BgL_envz00_2933,
		obj_t BgL_nodez00_2934, obj_t BgL_integratorz00_2935)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 259 */
			{
				BgL_castz00_bglt BgL_nodez00_1590;

				obj_t BgL_integratorz00_1591;

				{	/* Integrate/node.scm 260 */
					BgL_castz00_bglt BgL_auxz00_4049;

					BgL_nodez00_1590 = (BgL_castz00_bglt) (BgL_nodez00_2934);
					BgL_integratorz00_1591 = BgL_integratorz00_2935;
					{	/* Integrate/node.scm 260 */
						BgL_nodez00_bglt BgL_arg3792z00_2197;

						BgL_arg3792z00_2197 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1590))->BgL_argz00);
						{	/* Integrate/node.scm 260 */
							BgL_nodez00_bglt BgL_res3905z00_2226;

							{	/* Integrate/node.scm 260 */
								BgL_variablez00_bglt BgL_integratorz00_2200;

								BgL_integratorz00_2200 =
									(BgL_variablez00_bglt) (BgL_integratorz00_1591);
								{	/* Integrate/node.scm 260 */
									obj_t BgL_method3572z00_2201;

									{	/* Integrate/node.scm 260 */
										BgL_objectz00_bglt BgL_objz00_2202;

										BgL_objz00_2202 =
											(BgL_objectz00_bglt) (BgL_arg3792z00_2197);
										{	/* Integrate/node.scm 260 */
											long BgL_objzd2classzd2numz00_2203;

											BgL_objzd2classzd2numz00_2203 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2202);
											{	/* Integrate/node.scm 260 */
												obj_t BgL_arg2643z00_2204;

												BgL_arg2643z00_2204 =
													PROCEDURE_REF(BGl_gloz12zd2envzc0zzintegrate_nodez00,
													(int) (((long) 1)));
												{	/* Integrate/node.scm 260 */
													obj_t BgL_arrayz00_2206;

													int BgL_offsetz00_2207;

													BgL_arrayz00_2206 = BgL_arg2643z00_2204;
													BgL_offsetz00_2207 =
														(int) (BgL_objzd2classzd2numz00_2203);
													{	/* Integrate/node.scm 260 */
														long BgL_offsetz00_2208;

														BgL_offsetz00_2208 =
															((long) (BgL_offsetz00_2207) - OBJECT_TYPE);
														{	/* Integrate/node.scm 260 */
															long BgL_modz00_2209;

															{	/* Integrate/node.scm 260 */
																int BgL_arg2645z00_2210;

																BgL_arg2645z00_2210 = (int) (((long) 16));
																{	/* Integrate/node.scm 260 */
																	long BgL_auxz00_4060;

																	BgL_auxz00_4060 =
																		(long) (BgL_arg2645z00_2210);
																	BgL_modz00_2209 =
																		(BgL_offsetz00_2208 / BgL_auxz00_4060);
															}}
															{	/* Integrate/node.scm 260 */
																long BgL_restz00_2211;

																{	/* Integrate/node.scm 260 */
																	int BgL_arg2644z00_2212;

																	BgL_arg2644z00_2212 = (int) (((long) 16));
																	{	/* Integrate/node.scm 260 */
																		long BgL_auxz00_4064;

																		BgL_auxz00_4064 =
																			(long) (BgL_arg2644z00_2212);
																		BgL_restz00_2211 =
																			(BgL_offsetz00_2208 % BgL_auxz00_4064);
																}}
																{	/* Integrate/node.scm 260 */

																	BgL_method3572z00_2201 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2206,
																			(int) (BgL_modz00_2209)),
																		(int) (BgL_restz00_2211));
									}}}}}}}}
									BgL_res3905z00_2226 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3572z00_2201)
										(BgL_method3572z00_2201, (obj_t) (BgL_arg3792z00_2197),
											(obj_t) (BgL_integratorz00_2200), BEOA));
							}} BgL_res3905z00_2226;
					}}
					BgL_auxz00_4049 = BgL_nodez00_1590;
					return (obj_t) (BgL_auxz00_4049);
				}
			}
		}
	}



/* glo!-extern3590 */
	obj_t BGl_gloz12zd2extern3590zc0zzintegrate_nodez00(obj_t BgL_envz00_2936,
		obj_t BgL_nodez00_2937, obj_t BgL_integratorz00_2938)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 251 */
			{
				BgL_externz00_bglt BgL_nodez00_1582;

				obj_t BgL_integratorz00_1583;

				{	/* Integrate/node.scm 252 */
					BgL_externz00_bglt BgL_auxz00_4078;

					BgL_nodez00_1582 = (BgL_externz00_bglt) (BgL_nodez00_2937);
					BgL_integratorz00_1583 = BgL_integratorz00_2938;
					{	/* Integrate/node.scm 252 */
						obj_t BgL_arg3790z00_2194;

						BgL_arg3790z00_2194 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1582))->BgL_exprza2za2);
						BGl_gloza2z12zb0zzintegrate_nodez00(BgL_arg3790z00_2194,
							BgL_integratorz00_1583);
					}
					BgL_auxz00_4078 = BgL_nodez00_1582;
					return (obj_t) (BgL_auxz00_4078);
				}
			}
		}
	}



/* glo!-funcall3588 */
	obj_t BGl_gloz12zd2funcall3588zc0zzintegrate_nodez00(obj_t BgL_envz00_2939,
		obj_t BgL_nodez00_2940, obj_t BgL_integratorz00_2941)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 242 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1572;

				obj_t BgL_integratorz00_1573;

				{	/* Integrate/node.scm 243 */
					BgL_funcallz00_bglt BgL_auxz00_4083;

					BgL_nodez00_1572 = (BgL_funcallz00_bglt) (BgL_nodez00_2940);
					BgL_integratorz00_1573 = BgL_integratorz00_2941;
					{	/* Integrate/node.scm 244 */
						BgL_nodez00_bglt BgL_arg3786z00_1577;

						{	/* Integrate/node.scm 244 */
							BgL_nodez00_bglt BgL_arg3787z00_1578;

							BgL_arg3787z00_1578 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1572))->BgL_funz00);
							{	/* Integrate/node.scm 244 */
								BgL_nodez00_bglt BgL_res3902z00_2189;

								{	/* Integrate/node.scm 244 */
									BgL_variablez00_bglt BgL_integratorz00_2163;

									BgL_integratorz00_2163 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1573);
									{	/* Integrate/node.scm 244 */
										obj_t BgL_method3572z00_2164;

										{	/* Integrate/node.scm 244 */
											BgL_objectz00_bglt BgL_objz00_2165;

											BgL_objz00_2165 =
												(BgL_objectz00_bglt) (BgL_arg3787z00_1578);
											{	/* Integrate/node.scm 244 */
												long BgL_objzd2classzd2numz00_2166;

												BgL_objzd2classzd2numz00_2166 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2165);
												{	/* Integrate/node.scm 244 */
													obj_t BgL_arg2643z00_2167;

													BgL_arg2643z00_2167 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzintegrate_nodez00,
														(int) (((long) 1)));
													{	/* Integrate/node.scm 244 */
														obj_t BgL_arrayz00_2169;

														int BgL_offsetz00_2170;

														BgL_arrayz00_2169 = BgL_arg2643z00_2167;
														BgL_offsetz00_2170 =
															(int) (BgL_objzd2classzd2numz00_2166);
														{	/* Integrate/node.scm 244 */
															long BgL_offsetz00_2171;

															BgL_offsetz00_2171 =
																((long) (BgL_offsetz00_2170) - OBJECT_TYPE);
															{	/* Integrate/node.scm 244 */
																long BgL_modz00_2172;

																{	/* Integrate/node.scm 244 */
																	int BgL_arg2645z00_2173;

																	BgL_arg2645z00_2173 = (int) (((long) 16));
																	{	/* Integrate/node.scm 244 */
																		long BgL_auxz00_4094;

																		BgL_auxz00_4094 =
																			(long) (BgL_arg2645z00_2173);
																		BgL_modz00_2172 =
																			(BgL_offsetz00_2171 / BgL_auxz00_4094);
																}}
																{	/* Integrate/node.scm 244 */
																	long BgL_restz00_2174;

																	{	/* Integrate/node.scm 244 */
																		int BgL_arg2644z00_2175;

																		BgL_arg2644z00_2175 = (int) (((long) 16));
																		{	/* Integrate/node.scm 244 */
																			long BgL_auxz00_4098;

																			BgL_auxz00_4098 =
																				(long) (BgL_arg2644z00_2175);
																			BgL_restz00_2174 =
																				(BgL_offsetz00_2171 % BgL_auxz00_4098);
																	}}
																	{	/* Integrate/node.scm 244 */

																		BgL_method3572z00_2164 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2169,
																				(int) (BgL_modz00_2172)),
																			(int) (BgL_restz00_2174));
										}}}}}}}}
										BgL_res3902z00_2189 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3572z00_2164) (BgL_method3572z00_2164,
												(obj_t) (BgL_arg3787z00_1578),
												(obj_t) (BgL_integratorz00_2163), BEOA));
								}}
								BgL_arg3786z00_1577 = BgL_res3902z00_2189;
						}}
						((((BgL_funcallz00_bglt) CREF(BgL_nodez00_1572))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3786z00_1577), BUNSPEC);
					}
					{	/* Integrate/node.scm 245 */
						obj_t BgL_arg3788z00_1579;

						BgL_arg3788z00_1579 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1572))->BgL_argsz00);
						BGl_gloza2z12zb0zzintegrate_nodez00(BgL_arg3788z00_1579,
							BgL_integratorz00_1573);
					}
					BgL_auxz00_4083 = BgL_nodez00_1572;
					return (obj_t) (BgL_auxz00_4083);
				}
			}
		}
	}



/* glo!-app-ly3586 */
	obj_t BGl_gloz12zd2appzd2ly3586z12zzintegrate_nodez00(obj_t BgL_envz00_2942,
		obj_t BgL_nodez00_2943, obj_t BgL_integratorz00_2944)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 233 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1561;

				obj_t BgL_integratorz00_1562;

				{	/* Integrate/node.scm 234 */
					BgL_appzd2lyzd2_bglt BgL_auxz00_4115;

					BgL_nodez00_1561 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2943);
					BgL_integratorz00_1562 = BgL_integratorz00_2944;
					{	/* Integrate/node.scm 235 */
						BgL_nodez00_bglt BgL_arg3781z00_1566;

						{	/* Integrate/node.scm 235 */
							BgL_nodez00_bglt BgL_arg3782z00_1567;

							BgL_arg3782z00_1567 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1561))->BgL_funz00);
							{	/* Integrate/node.scm 235 */
								BgL_nodez00_bglt BgL_res3896z00_2127;

								{	/* Integrate/node.scm 235 */
									BgL_variablez00_bglt BgL_integratorz00_2101;

									BgL_integratorz00_2101 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1562);
									{	/* Integrate/node.scm 235 */
										obj_t BgL_method3572z00_2102;

										{	/* Integrate/node.scm 235 */
											BgL_objectz00_bglt BgL_objz00_2103;

											BgL_objz00_2103 =
												(BgL_objectz00_bglt) (BgL_arg3782z00_1567);
											{	/* Integrate/node.scm 235 */
												long BgL_objzd2classzd2numz00_2104;

												BgL_objzd2classzd2numz00_2104 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2103);
												{	/* Integrate/node.scm 235 */
													obj_t BgL_arg2643z00_2105;

													BgL_arg2643z00_2105 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzintegrate_nodez00,
														(int) (((long) 1)));
													{	/* Integrate/node.scm 235 */
														obj_t BgL_arrayz00_2107;

														int BgL_offsetz00_2108;

														BgL_arrayz00_2107 = BgL_arg2643z00_2105;
														BgL_offsetz00_2108 =
															(int) (BgL_objzd2classzd2numz00_2104);
														{	/* Integrate/node.scm 235 */
															long BgL_offsetz00_2109;

															BgL_offsetz00_2109 =
																((long) (BgL_offsetz00_2108) - OBJECT_TYPE);
															{	/* Integrate/node.scm 235 */
																long BgL_modz00_2110;

																{	/* Integrate/node.scm 235 */
																	int BgL_arg2645z00_2111;

																	BgL_arg2645z00_2111 = (int) (((long) 16));
																	{	/* Integrate/node.scm 235 */
																		long BgL_auxz00_4126;

																		BgL_auxz00_4126 =
																			(long) (BgL_arg2645z00_2111);
																		BgL_modz00_2110 =
																			(BgL_offsetz00_2109 / BgL_auxz00_4126);
																}}
																{	/* Integrate/node.scm 235 */
																	long BgL_restz00_2112;

																	{	/* Integrate/node.scm 235 */
																		int BgL_arg2644z00_2113;

																		BgL_arg2644z00_2113 = (int) (((long) 16));
																		{	/* Integrate/node.scm 235 */
																			long BgL_auxz00_4130;

																			BgL_auxz00_4130 =
																				(long) (BgL_arg2644z00_2113);
																			BgL_restz00_2112 =
																				(BgL_offsetz00_2109 % BgL_auxz00_4130);
																	}}
																	{	/* Integrate/node.scm 235 */

																		BgL_method3572z00_2102 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2107,
																				(int) (BgL_modz00_2110)),
																			(int) (BgL_restz00_2112));
										}}}}}}}}
										BgL_res3896z00_2127 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3572z00_2102) (BgL_method3572z00_2102,
												(obj_t) (BgL_arg3782z00_1567),
												(obj_t) (BgL_integratorz00_2101), BEOA));
								}}
								BgL_arg3781z00_1566 = BgL_res3896z00_2127;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1561))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3781z00_1566), BUNSPEC);
					}
					{	/* Integrate/node.scm 236 */
						BgL_nodez00_bglt BgL_arg3783z00_1568;

						{	/* Integrate/node.scm 236 */
							BgL_nodez00_bglt BgL_arg3784z00_1569;

							BgL_arg3784z00_1569 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1561))->BgL_argz00);
							{	/* Integrate/node.scm 236 */
								BgL_nodez00_bglt BgL_res3899z00_2158;

								{	/* Integrate/node.scm 236 */
									BgL_variablez00_bglt BgL_integratorz00_2132;

									BgL_integratorz00_2132 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1562);
									{	/* Integrate/node.scm 236 */
										obj_t BgL_method3572z00_2133;

										{	/* Integrate/node.scm 236 */
											BgL_objectz00_bglt BgL_objz00_2134;

											BgL_objz00_2134 =
												(BgL_objectz00_bglt) (BgL_arg3784z00_1569);
											{	/* Integrate/node.scm 236 */
												long BgL_objzd2classzd2numz00_2135;

												BgL_objzd2classzd2numz00_2135 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2134);
												{	/* Integrate/node.scm 236 */
													obj_t BgL_arg2643z00_2136;

													BgL_arg2643z00_2136 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzintegrate_nodez00,
														(int) (((long) 1)));
													{	/* Integrate/node.scm 236 */
														obj_t BgL_arrayz00_2138;

														int BgL_offsetz00_2139;

														BgL_arrayz00_2138 = BgL_arg2643z00_2136;
														BgL_offsetz00_2139 =
															(int) (BgL_objzd2classzd2numz00_2135);
														{	/* Integrate/node.scm 236 */
															long BgL_offsetz00_2140;

															BgL_offsetz00_2140 =
																((long) (BgL_offsetz00_2139) - OBJECT_TYPE);
															{	/* Integrate/node.scm 236 */
																long BgL_modz00_2141;

																{	/* Integrate/node.scm 236 */
																	int BgL_arg2645z00_2142;

																	BgL_arg2645z00_2142 = (int) (((long) 16));
																	{	/* Integrate/node.scm 236 */
																		long BgL_auxz00_4153;

																		BgL_auxz00_4153 =
																			(long) (BgL_arg2645z00_2142);
																		BgL_modz00_2141 =
																			(BgL_offsetz00_2140 / BgL_auxz00_4153);
																}}
																{	/* Integrate/node.scm 236 */
																	long BgL_restz00_2143;

																	{	/* Integrate/node.scm 236 */
																		int BgL_arg2644z00_2144;

																		BgL_arg2644z00_2144 = (int) (((long) 16));
																		{	/* Integrate/node.scm 236 */
																			long BgL_auxz00_4157;

																			BgL_auxz00_4157 =
																				(long) (BgL_arg2644z00_2144);
																			BgL_restz00_2143 =
																				(BgL_offsetz00_2140 % BgL_auxz00_4157);
																	}}
																	{	/* Integrate/node.scm 236 */

																		BgL_method3572z00_2133 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2138,
																				(int) (BgL_modz00_2141)),
																			(int) (BgL_restz00_2143));
										}}}}}}}}
										BgL_res3899z00_2158 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3572z00_2133) (BgL_method3572z00_2133,
												(obj_t) (BgL_arg3784z00_1569),
												(obj_t) (BgL_integratorz00_2132), BEOA));
								}}
								BgL_arg3783z00_1568 = BgL_res3899z00_2158;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1561))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg3783z00_1568), BUNSPEC);
					}
					BgL_auxz00_4115 = BgL_nodez00_1561;
					return (obj_t) (BgL_auxz00_4115);
				}
			}
		}
	}



/* glo!-app3584 */
	obj_t BGl_gloz12zd2app3584zc0zzintegrate_nodez00(obj_t BgL_envz00_2945,
		obj_t BgL_nodez00_2946, obj_t BgL_integratorz00_2947)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 193 */
			{
				BgL_appz00_bglt BgL_nodez00_1516;

				obj_t BgL_integratorz00_1517;

				{	/* Integrate/node.scm 194 */
					BgL_appz00_bglt BgL_auxz00_4172;

					BgL_nodez00_1516 = (BgL_appz00_bglt) (BgL_nodez00_2946);
					BgL_integratorz00_1517 = BgL_integratorz00_2947;
					{	/* Integrate/node.scm 195 */
						BgL_variablez00_bglt BgL_funz00_1521;

						{	/* Integrate/node.scm 195 */
							BgL_varz00_bglt BgL_obj2155z00_2045;

							BgL_obj2155z00_2045 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1516))->BgL_funz00);
							BgL_funz00_1521 =
								(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2045))->
								BgL_variablez00);
						}
						{	/* Integrate/node.scm 195 */
							BgL_valuez00_bglt BgL_infoz00_1522;

							BgL_infoz00_1522 =
								(((BgL_variablez00_bglt) CREF(BgL_funz00_1521))->BgL_valuez00);
							{	/* Integrate/node.scm 196 */

								{	/* Integrate/node.scm 198 */
									bool_t BgL_testz00_4176;

									{	/* Integrate/node.scm 198 */
										bool_t BgL_testz00_4177;

										{	/* Integrate/node.scm 198 */
											obj_t BgL_obj1812z00_2047;

											BgL_obj1812z00_2047 = (obj_t) (BgL_funz00_1521);
											BgL_testz00_4177 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj1812z00_2047,
												BGl_localz00zzast_varz00);
										}
										if (BgL_testz00_4177)
											{	/* Integrate/node.scm 198 */
												BgL_sfunzf2iinfozf2_bglt BgL_obj3425z00_2048;

												BgL_obj3425z00_2048 =
													(BgL_sfunzf2iinfozf2_bglt) (BgL_infoz00_1522);
												{
													obj_t BgL_auxz00_4181;

													{	/* Integrate/node.scm 198 */
														BgL_objectz00_bglt BgL_auxz00_4182;

														BgL_auxz00_4182 =
															(BgL_objectz00_bglt) (BgL_obj3425z00_2048);
														BgL_auxz00_4181 =
															BGL_OBJECT_WIDENING(BgL_auxz00_4182);
													}
													BgL_testz00_4176 =
														(((BgL_sfunzf2iinfozf2_bglt)
															CREF(BgL_auxz00_4181))->BgL_gzf3zf3);
												}
											}
										else
											{	/* Integrate/node.scm 198 */
												BgL_testz00_4176 = ((bool_t) 0);
											}
									}
									if (BgL_testz00_4176)
										{	/* Integrate/node.scm 201 */
											BgL_varz00_bglt BgL_arg3756z00_1524;

											{	/* Integrate/node.scm 201 */
												obj_t BgL_arg3757z00_1525;

												BgL_typez00_bglt BgL_arg3758z00_1526;

												obj_t BgL_arg3759z00_1527;

												{
													BgL_nodez00_bglt BgL_auxz00_4186;

													BgL_auxz00_4186 =
														(BgL_nodez00_bglt) (BgL_nodez00_1516);
													BgL_arg3757z00_1525 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_4186))->
														BgL_locz00);
												}
												{	/* Integrate/node.scm 202 */
													obj_t BgL_arg3760z00_1528;

													BgL_arg3760z00_1528 =
														BGl_thezd2globalzd2zzintegrate_localzd2ze3globalz31(
														(BgL_localz00_bglt) (BgL_funz00_1521));
													{
														BgL_variablez00_bglt BgL_auxz00_4191;

														BgL_auxz00_4191 =
															(BgL_variablez00_bglt) (BgL_arg3760z00_1528);
														BgL_arg3758z00_1526 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_4191))->
															BgL_typez00);
													}
												}
												BgL_arg3759z00_1527 =
													BGl_thezd2globalzd2zzintegrate_localzd2ze3globalz31(
													(BgL_localz00_bglt) (BgL_funz00_1521));
												BgL_arg3756z00_1524 =
													BGl_makezd2varzd2zzast_nodez00(BgL_arg3757z00_1525,
													BgL_arg3758z00_1526,
													(BgL_variablez00_bglt) (BgL_arg3759z00_1527));
											}
											((((BgL_appz00_bglt) CREF(BgL_nodez00_1516))->
													BgL_funz00) =
												((BgL_varz00_bglt) BgL_arg3756z00_1524), BUNSPEC);
										}
									else
										{	/* Integrate/node.scm 198 */
											BFALSE;
										}
								}
								{
									obj_t BgL_nodesz00_1532;

									{	/* Integrate/node.scm 206 */
										obj_t BgL_arg3762z00_1531;

										BgL_arg3762z00_1531 =
											(((BgL_appz00_bglt) CREF(BgL_nodez00_1516))->BgL_argsz00);
										BgL_nodesz00_1532 = BgL_arg3762z00_1531;
									BgL_zc3anonymousza33763ze3z83_1533:
										if (NULLP(BgL_nodesz00_1532))
											{	/* Integrate/node.scm 207 */
												CNST_TABLE_REF(((long) 3));
											}
										else
											{	/* Integrate/node.scm 207 */
												{	/* Integrate/node.scm 210 */
													BgL_nodez00_bglt BgL_arg3765z00_1535;

													{	/* Integrate/node.scm 210 */
														obj_t BgL_arg3766z00_1536;

														BgL_arg3766z00_1536 = CAR(BgL_nodesz00_1532);
														{	/* Integrate/node.scm 210 */
															BgL_nodez00_bglt BgL_res3893z00_2083;

															{	/* Integrate/node.scm 210 */
																BgL_nodez00_bglt BgL_nodez00_2056;

																BgL_variablez00_bglt BgL_integratorz00_2057;

																BgL_nodez00_2056 =
																	(BgL_nodez00_bglt) (BgL_arg3766z00_1536);
																BgL_integratorz00_2057 =
																	(BgL_variablez00_bglt)
																	(BgL_integratorz00_1517);
																{	/* Integrate/node.scm 210 */
																	obj_t BgL_method3572z00_2058;

																	{	/* Integrate/node.scm 210 */
																		BgL_objectz00_bglt BgL_objz00_2059;

																		BgL_objz00_2059 =
																			(BgL_objectz00_bglt) (BgL_nodez00_2056);
																		{	/* Integrate/node.scm 210 */
																			long BgL_objzd2classzd2numz00_2060;

																			BgL_objzd2classzd2numz00_2060 =
																				BGL_OBJECT_CLASS_NUM(BgL_objz00_2059);
																			{	/* Integrate/node.scm 210 */
																				obj_t BgL_arg2643z00_2061;

																				BgL_arg2643z00_2061 =
																					PROCEDURE_REF
																					(BGl_gloz12zd2envzc0zzintegrate_nodez00,
																					(int) (((long) 1)));
																				{	/* Integrate/node.scm 210 */
																					obj_t BgL_arrayz00_2063;

																					int BgL_offsetz00_2064;

																					BgL_arrayz00_2063 =
																						BgL_arg2643z00_2061;
																					BgL_offsetz00_2064 =
																						(int)
																						(BgL_objzd2classzd2numz00_2060);
																					{	/* Integrate/node.scm 210 */
																						long BgL_offsetz00_2065;

																						BgL_offsetz00_2065 =
																							(
																							(long) (BgL_offsetz00_2064) -
																							OBJECT_TYPE);
																						{	/* Integrate/node.scm 210 */
																							long BgL_modz00_2066;

																							{	/* Integrate/node.scm 210 */
																								int BgL_arg2645z00_2067;

																								BgL_arg2645z00_2067 =
																									(int) (((long) 16));
																								{	/* Integrate/node.scm 210 */
																									long BgL_auxz00_4214;

																									BgL_auxz00_4214 =
																										(long)
																										(BgL_arg2645z00_2067);
																									BgL_modz00_2066 =
																										(BgL_offsetz00_2065 /
																										BgL_auxz00_4214);
																							}}
																							{	/* Integrate/node.scm 210 */
																								long BgL_restz00_2068;

																								{	/* Integrate/node.scm 210 */
																									int BgL_arg2644z00_2069;

																									BgL_arg2644z00_2069 =
																										(int) (((long) 16));
																									{	/* Integrate/node.scm 210 */
																										long BgL_auxz00_4218;

																										BgL_auxz00_4218 =
																											(long)
																											(BgL_arg2644z00_2069);
																										BgL_restz00_2068 =
																											(BgL_offsetz00_2065 %
																											BgL_auxz00_4218);
																								}}
																								{	/* Integrate/node.scm 210 */

																									BgL_method3572z00_2058 =
																										VECTOR_REF(VECTOR_REF
																										(BgL_arrayz00_2063,
																											(int) (BgL_modz00_2066)),
																										(int) (BgL_restz00_2068));
																	}}}}}}}}
																	BgL_res3893z00_2083 =
																		(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																		(BgL_method3572z00_2058)
																		(BgL_method3572z00_2058,
																			(obj_t) (BgL_nodez00_2056),
																			(obj_t) (BgL_integratorz00_2057), BEOA));
															}}
															BgL_arg3765z00_1535 = BgL_res3893z00_2083;
													}}
													{	/* Integrate/node.scm 210 */
														obj_t BgL_auxz00_4230;

														BgL_auxz00_4230 = (obj_t) (BgL_arg3765z00_1535);
														SET_CAR(BgL_nodesz00_1532, BgL_auxz00_4230);
												}}
												{
													obj_t BgL_nodesz00_4233;

													BgL_nodesz00_4233 = CDR(BgL_nodesz00_1532);
													BgL_nodesz00_1532 = BgL_nodesz00_4233;
													goto BgL_zc3anonymousza33763ze3z83_1533;
												}
											}
									}
								}
								{	/* Integrate/node.scm 212 */
									bool_t BgL_testz00_4235;

									{	/* Integrate/node.scm 212 */
										bool_t BgL_testz00_4236;

										{	/* Integrate/node.scm 212 */
											obj_t BgL_obj1751z00_2087;

											BgL_obj1751z00_2087 = (obj_t) (BgL_funz00_1521);
											BgL_testz00_4236 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_2087,
												BGl_globalz00zzast_varz00);
										}
										if (BgL_testz00_4236)
											{	/* Integrate/node.scm 212 */
												BgL_testz00_4235 = ((bool_t) 1);
											}
										else
											{	/* Integrate/node.scm 212 */
												bool_t BgL_testz00_4239;

												{	/* Integrate/node.scm 212 */
													BgL_sfunzf2iinfozf2_bglt BgL_obj3425z00_2088;

													BgL_obj3425z00_2088 =
														(BgL_sfunzf2iinfozf2_bglt) (BgL_infoz00_1522);
													{
														obj_t BgL_auxz00_4241;

														{	/* Integrate/node.scm 212 */
															BgL_objectz00_bglt BgL_auxz00_4242;

															BgL_auxz00_4242 =
																(BgL_objectz00_bglt) (BgL_obj3425z00_2088);
															BgL_auxz00_4241 =
																BGL_OBJECT_WIDENING(BgL_auxz00_4242);
														}
														BgL_testz00_4239 =
															(((BgL_sfunzf2iinfozf2_bglt)
																CREF(BgL_auxz00_4241))->BgL_gzf3zf3);
													}
												}
												if (BgL_testz00_4239)
													{	/* Integrate/node.scm 212 */
														BgL_testz00_4235 = ((bool_t) 0);
													}
												else
													{	/* Integrate/node.scm 212 */
														BgL_testz00_4235 = ((bool_t) 1);
													}
											}
									}
									if (BgL_testz00_4235)
										{	/* Integrate/node.scm 212 */
											BFALSE;
										}
									else
										{	/* Integrate/node.scm 215 */
											obj_t BgL_g3511z00_1540;

											{	/* Integrate/node.scm 216 */
												BgL_sfunzf2iinfozf2_bglt BgL_obj3440z00_2089;

												BgL_obj3440z00_2089 =
													(BgL_sfunzf2iinfozf2_bglt) (BgL_infoz00_1522);
												{
													obj_t BgL_auxz00_4247;

													{	/* Integrate/node.scm 216 */
														BgL_objectz00_bglt BgL_auxz00_4248;

														BgL_auxz00_4248 =
															(BgL_objectz00_bglt) (BgL_obj3440z00_2089);
														BgL_auxz00_4247 =
															BGL_OBJECT_WIDENING(BgL_auxz00_4248);
													}
													BgL_g3511z00_1540 =
														(((BgL_sfunzf2iinfozf2_bglt)
															CREF(BgL_auxz00_4247))->BgL_kapturedz00);
												}
											}
											{
												obj_t BgL_newzd2actualszd2_1543;

												obj_t BgL_kapturedz00_1544;

												{	/* Integrate/node.scm 215 */
													obj_t BgL_arg3769z00_1542;

													BgL_arg3769z00_1542 =
														(((BgL_appz00_bglt) CREF(BgL_nodez00_1516))->
														BgL_argsz00);
													BgL_newzd2actualszd2_1543 = BgL_arg3769z00_1542;
													BgL_kapturedz00_1544 = BgL_g3511z00_1540;
												BgL_zc3anonymousza33770ze3z83_1545:
													if (NULLP(BgL_kapturedz00_1544))
														{	/* Integrate/node.scm 217 */
															((((BgL_appz00_bglt) CREF(BgL_nodez00_1516))->
																	BgL_argsz00) =
																((obj_t) BgL_newzd2actualszd2_1543), BUNSPEC);
														}
													else
														{	/* Integrate/node.scm 219 */
															obj_t BgL_kapz00_1547;

															BgL_kapz00_1547 = CAR(BgL_kapturedz00_1544);
															{	/* Integrate/node.scm 219 */
																obj_t BgL_alphaz00_1548;

																{
																	BgL_variablez00_bglt BgL_auxz00_4257;

																	BgL_auxz00_4257 =
																		(BgL_variablez00_bglt) (BgL_kapz00_1547);
																	BgL_alphaz00_1548 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_4257))->
																		BgL_fastzd2alphazd2);
																}
																{	/* Integrate/node.scm 220 */
																	obj_t BgL_varz00_1549;

																	if (BGl_iszd2azf3z21zz__objectz00
																		(BgL_alphaz00_1548,
																			BGl_localz00zzast_varz00))
																		{	/* Integrate/node.scm 221 */
																			BgL_varz00_1549 = BgL_alphaz00_1548;
																		}
																	else
																		{	/* Integrate/node.scm 221 */
																			BgL_varz00_1549 = BgL_kapz00_1547;
																		}
																	{	/* Integrate/node.scm 221 */

																		{	/* Integrate/node.scm 223 */
																			obj_t BgL_arg3772z00_1550;

																			obj_t BgL_arg3773z00_1551;

																			{	/* Integrate/node.scm 223 */
																				BgL_varz00_bglt BgL_arg3774z00_1552;

																				{	/* Integrate/node.scm 223 */
																					obj_t BgL_arg3775z00_1553;

																					{
																						BgL_nodez00_bglt BgL_auxz00_4262;

																						BgL_auxz00_4262 =
																							(BgL_nodez00_bglt)
																							(BgL_nodez00_1516);
																						BgL_arg3775z00_1553 =
																							(((BgL_nodez00_bglt)
																								CREF(BgL_auxz00_4262))->
																							BgL_locz00);
																					}
																					BgL_arg3774z00_1552 =
																						BGl_makezd2varzd2zzast_nodez00
																						(BgL_arg3775z00_1553,
																						(BgL_typez00_bglt)
																						(BGl_za2_za2z00zztype_cachez00),
																						(BgL_variablez00_bglt)
																						(BgL_varz00_1549));
																				}
																				BgL_arg3772z00_1550 =
																					MAKE_PAIR(
																					(obj_t) (BgL_arg3774z00_1552),
																					BgL_newzd2actualszd2_1543);
																			}
																			BgL_arg3773z00_1551 =
																				CDR(BgL_kapturedz00_1544);
																			{
																				obj_t BgL_kapturedz00_4272;

																				obj_t BgL_newzd2actualszd2_4271;

																				BgL_newzd2actualszd2_4271 =
																					BgL_arg3772z00_1550;
																				BgL_kapturedz00_4272 =
																					BgL_arg3773z00_1551;
																				BgL_kapturedz00_1544 =
																					BgL_kapturedz00_4272;
																				BgL_newzd2actualszd2_1543 =
																					BgL_newzd2actualszd2_4271;
																				goto BgL_zc3anonymousza33770ze3z83_1545;
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
								BgL_auxz00_4172 = BgL_nodez00_1516;
							}
						}
					}
					return (obj_t) (BgL_auxz00_4172);
				}
			}
		}
	}



/* glo!-sequence3582 */
	obj_t BGl_gloz12zd2sequence3582zc0zzintegrate_nodez00(obj_t BgL_envz00_2948,
		obj_t BgL_nodez00_2949, obj_t BgL_integratorz00_2950)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 185 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1508;

				obj_t BgL_integratorz00_1509;

				{	/* Integrate/node.scm 186 */
					BgL_sequencez00_bglt BgL_auxz00_4275;

					BgL_nodez00_1508 = (BgL_sequencez00_bglt) (BgL_nodez00_2949);
					BgL_integratorz00_1509 = BgL_integratorz00_2950;
					{	/* Integrate/node.scm 186 */
						obj_t BgL_arg3753z00_2042;

						BgL_arg3753z00_2042 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1508))->BgL_nodesz00);
						BGl_gloza2z12zb0zzintegrate_nodez00(BgL_arg3753z00_2042,
							BgL_integratorz00_1509);
					}
					BgL_auxz00_4275 = BgL_nodez00_1508;
					return (obj_t) (BgL_auxz00_4275);
				}
			}
		}
	}



/* glo!-closure3580 */
	obj_t BGl_gloz12zd2closure3580zc0zzintegrate_nodez00(obj_t BgL_envz00_2951,
		obj_t BgL_nodez00_2952, obj_t BgL_integratorz00_2953)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 179 */
			{
				BgL_closurez00_bglt BgL_nodez00_1499;

				obj_t BgL_integratorz00_1500;

				BgL_nodez00_1499 = (BgL_closurez00_bglt) (BgL_nodez00_2952);
				BgL_integratorz00_1500 = BgL_integratorz00_2953;
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string3987z00zzintegrate_nodez00,
					BGl_string3988z00zzintegrate_nodez00,
					BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_1499)));
			}
		}
	}



/* glo!-var3578 */
	obj_t BGl_gloz12zd2var3578zc0zzintegrate_nodez00(obj_t BgL_envz00_2954,
		obj_t BgL_nodez00_2955, obj_t BgL_integratorz00_2956)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 152 */
			{
				BgL_varz00_bglt BgL_nodez00_1483;

				obj_t BgL_integratorz00_1484;

				BgL_nodez00_1483 = (BgL_varz00_bglt) (BgL_nodez00_2955);
				BgL_integratorz00_1484 = BgL_integratorz00_2956;
				{	/* Integrate/node.scm 153 */
					BgL_variablez00_bglt BgL_variablez00_1487;

					BgL_variablez00_1487 =
						(((BgL_varz00_bglt) CREF(BgL_nodez00_1483))->BgL_variablez00);
					{	/* Integrate/node.scm 153 */
						obj_t BgL_alphaz00_1488;

						BgL_alphaz00_1488 =
							(((BgL_variablez00_bglt) CREF(BgL_variablez00_1487))->
							BgL_fastzd2alphazd2);
						{	/* Integrate/node.scm 154 */

							if (BGl_iszd2azf3z21zz__objectz00(BgL_alphaz00_1488,
									BGl_localz00zzast_varz00))
								{	/* Integrate/node.scm 156 */
									{
										BgL_variablez00_bglt BgL_auxz00_4288;

										BgL_auxz00_4288 =
											(BgL_variablez00_bglt) (
											(BgL_localz00_bglt) (BgL_alphaz00_1488));
										((((BgL_varz00_bglt) CREF(BgL_nodez00_1483))->
												BgL_variablez00) =
											((BgL_variablez00_bglt) BgL_auxz00_4288), BUNSPEC);
									}
									{	/* Integrate/node.scm 158 */
										BgL_typez00_bglt BgL_arg3739z00_1490;

										{
											BgL_variablez00_bglt BgL_auxz00_4292;

											BgL_auxz00_4292 =
												(BgL_variablez00_bglt) (
												(BgL_localz00_bglt) (BgL_alphaz00_1488));
											BgL_arg3739z00_1490 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_4292))->
												BgL_typez00);
										}
										{
											BgL_nodez00_bglt BgL_auxz00_4296;

											BgL_auxz00_4296 = (BgL_nodez00_bglt) (BgL_nodez00_1483);
											((((BgL_nodez00_bglt) CREF(BgL_auxz00_4296))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_arg3739z00_1490), BUNSPEC);
										}
									}
									{	/* Integrate/node.scm 159 */
										BgL_nodez00_bglt BgL_res3890z00_2029;

										{	/* Integrate/node.scm 159 */
											BgL_nodez00_bglt BgL_nodez00_2002;

											BgL_variablez00_bglt BgL_integratorz00_2003;

											BgL_nodez00_2002 = (BgL_nodez00_bglt) (BgL_nodez00_1483);
											BgL_integratorz00_2003 =
												(BgL_variablez00_bglt) (BgL_integratorz00_1484);
											{	/* Integrate/node.scm 159 */
												obj_t BgL_method3572z00_2004;

												{	/* Integrate/node.scm 159 */
													BgL_objectz00_bglt BgL_objz00_2005;

													BgL_objz00_2005 =
														(BgL_objectz00_bglt) (BgL_nodez00_2002);
													{	/* Integrate/node.scm 159 */
														long BgL_objzd2classzd2numz00_2006;

														BgL_objzd2classzd2numz00_2006 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2005);
														{	/* Integrate/node.scm 159 */
															obj_t BgL_arg2643z00_2007;

															BgL_arg2643z00_2007 =
																PROCEDURE_REF
																(BGl_gloz12zd2envzc0zzintegrate_nodez00,
																(int) (((long) 1)));
															{	/* Integrate/node.scm 159 */
																obj_t BgL_arrayz00_2009;

																int BgL_offsetz00_2010;

																BgL_arrayz00_2009 = BgL_arg2643z00_2007;
																BgL_offsetz00_2010 =
																	(int) (BgL_objzd2classzd2numz00_2006);
																{	/* Integrate/node.scm 159 */
																	long BgL_offsetz00_2011;

																	BgL_offsetz00_2011 =
																		((long) (BgL_offsetz00_2010) - OBJECT_TYPE);
																	{	/* Integrate/node.scm 159 */
																		long BgL_modz00_2012;

																		{	/* Integrate/node.scm 159 */
																			int BgL_arg2645z00_2013;

																			BgL_arg2645z00_2013 = (int) (((long) 16));
																			{	/* Integrate/node.scm 159 */
																				long BgL_auxz00_4309;

																				BgL_auxz00_4309 =
																					(long) (BgL_arg2645z00_2013);
																				BgL_modz00_2012 =
																					(BgL_offsetz00_2011 /
																					BgL_auxz00_4309);
																		}}
																		{	/* Integrate/node.scm 159 */
																			long BgL_restz00_2014;

																			{	/* Integrate/node.scm 159 */
																				int BgL_arg2644z00_2015;

																				BgL_arg2644z00_2015 =
																					(int) (((long) 16));
																				{	/* Integrate/node.scm 159 */
																					long BgL_auxz00_4313;

																					BgL_auxz00_4313 =
																						(long) (BgL_arg2644z00_2015);
																					BgL_restz00_2014 =
																						(BgL_offsetz00_2011 %
																						BgL_auxz00_4313);
																			}}
																			{	/* Integrate/node.scm 159 */

																				BgL_method3572z00_2004 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2009,
																						(int) (BgL_modz00_2012)),
																					(int) (BgL_restz00_2014));
												}}}}}}}}
												BgL_res3890z00_2029 =
													(BgL_nodez00_bglt) (PROCEDURE_ENTRY
													(BgL_method3572z00_2004) (BgL_method3572z00_2004,
														(obj_t) (BgL_nodez00_2002),
														(obj_t) (BgL_integratorz00_2003), BEOA));
										}}
										return (obj_t) (BgL_res3890z00_2029);
									}
								}
							else
								{	/* Integrate/node.scm 160 */
									bool_t BgL_testz00_4326;

									{	/* Integrate/node.scm 160 */
										obj_t BgL_obj1751z00_2030;

										BgL_obj1751z00_2030 = (obj_t) (BgL_variablez00_1487);
										BgL_testz00_4326 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_2030,
											BGl_globalz00zzast_varz00);
									}
									if (BgL_testz00_4326)
										{	/* Integrate/node.scm 160 */
											return (obj_t) (BgL_nodez00_1483);
										}
									else
										{	/* Integrate/node.scm 160 */
											if (BGl_integratezd2celledzf3z21zzintegrate_nodez00(
													(BgL_localz00_bglt) (BgL_variablez00_1487)))
												{	/* Integrate/node.scm 162 */
													{	/* Integrate/node.scm 163 */
														BgL_variablez00_bglt BgL_obj1616z00_2031;

														obj_t BgL_val1615z00_2032;

														BgL_obj1616z00_2031 = BgL_variablez00_1487;
														BgL_val1615z00_2032 = CNST_TABLE_REF(((long) 1));
														((((BgL_variablez00_bglt)
																	CREF(BgL_obj1616z00_2031))->BgL_accessz00) =
															((obj_t) BgL_val1615z00_2032), BUNSPEC);
													}
													{
														BgL_typez00_bglt BgL_auxz00_4337;

														BgL_nodez00_bglt BgL_auxz00_4335;

														BgL_auxz00_4337 =
															(BgL_typez00_bglt)
															(BGl_za2objza2z00zztype_cachez00);
														BgL_auxz00_4335 =
															(BgL_nodez00_bglt) (BgL_nodez00_1483);
														((((BgL_nodez00_bglt) CREF(BgL_auxz00_4335))->
																BgL_typez00) =
															((BgL_typez00_bglt) BgL_auxz00_4337), BUNSPEC);
													}
													{	/* Integrate/node.scm 170 */
														obj_t BgL_arg3742z00_1493;

														BgL_typez00_bglt BgL_arg3745z00_1494;

														{
															BgL_nodez00_bglt BgL_auxz00_4340;

															BgL_auxz00_4340 =
																(BgL_nodez00_bglt) (BgL_nodez00_1483);
															BgL_arg3742z00_1493 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_4340))->
																BgL_locz00);
														}
														{	/* Integrate/node.scm 171 */
															BgL_variablez00_bglt BgL_obj1608z00_2037;

															BgL_obj1608z00_2037 =
																(((BgL_varz00_bglt) CREF(BgL_nodez00_1483))->
																BgL_variablez00);
															BgL_arg3745z00_1494 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_obj1608z00_2037))->BgL_typez00);
														}
														return
															(obj_t) (BGl_makezd2boxzd2refz00zzast_nodez00
															(BgL_arg3742z00_1493, BgL_arg3745z00_1494,
																BUNSPEC, BINT(((long) -1)), BgL_nodez00_1483));
												}}
											else
												{	/* Integrate/node.scm 162 */
													return (obj_t) (BgL_nodez00_1483);
												}
										}
								}
						}
					}
				}
			}
		}
	}



/* glo!-kwote3576 */
	obj_t BGl_gloz12zd2kwote3576zc0zzintegrate_nodez00(obj_t BgL_envz00_2957,
		obj_t BgL_nodez00_2958, obj_t BgL_integratorz00_2959)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 146 */
			return (obj_t) ((BgL_kwotez00_bglt) (BgL_nodez00_2958));
		}
	}



/* glo!-atom3574 */
	obj_t BGl_gloz12zd2atom3574zc0zzintegrate_nodez00(obj_t BgL_envz00_2960,
		obj_t BgL_nodez00_2961, obj_t BgL_integratorz00_2962)
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 140 */
			return (obj_t) ((BgL_atomz00_bglt) (BgL_nodez00_2961));
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_nodez00()
	{
		AN_OBJECT;
		{	/* Integrate/node.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3989z00zzintegrate_nodez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3989z00zzintegrate_nodez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3989z00zzintegrate_nodez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3989z00zzintegrate_nodez00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 341705556),
				BSTRING_TO_STRING(BGl_string3989z00zzintegrate_nodez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3989z00zzintegrate_nodez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3989z00zzintegrate_nodez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3989z00zzintegrate_nodez00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3989z00zzintegrate_nodez00));
			BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string3989z00zzintegrate_nodez00));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_localzd2ze3globalz31(((long)
					154146174), BSTRING_TO_STRING(BGl_string3989z00zzintegrate_nodez00));
		}
	}

#ifdef __cplusplus
}
#endif
