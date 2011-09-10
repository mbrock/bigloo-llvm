/*===========================================================================*/
/*   (Globalize/node.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/node.scm)*/
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

	typedef struct BgL_sfunzf2ginfozf2_bgl
	{
		bool_t BgL_gzf3zf3;
		obj_t BgL_cfromz00;
		obj_t BgL_cfromza2za2;
		obj_t BgL_ctoz00;
		obj_t BgL_ctoza2za2;
		obj_t BgL_cfunctionz00;
		obj_t BgL_integratorz00;
		obj_t BgL_imarkz00;
		obj_t BgL_ownerz00;
		obj_t BgL_integratedz00;
		obj_t BgL_pluggedzd2inzd2;
		long BgL_markz00;
		obj_t BgL_freezd2markzd2;
		obj_t BgL_thezd2globalzd2;
		obj_t BgL_kapturedz00;
		obj_t BgL_newzd2bodyzd2;
		long BgL_bmarkz00;
		long BgL_umarkz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
	}                      *BgL_sfunzf2ginfozf2_bglt;

	typedef struct BgL_svarzf2ginfozf2_bgl
	{
		bool_t BgL_kapturedzf3zf3;
		long BgL_freezd2markzd2;
		long BgL_markz00;
		bool_t BgL_celledzf3zf3;
	}                      *BgL_svarzf2ginfozf2_bglt;

	typedef struct BgL_localzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		bool_t BgL_globaliza7edzf3z54;
	}                       *BgL_localzf2ginfozf2_bglt;


	static obj_t BGl_gloza2z12zb0zzglobaliza7e_nodeza7(obj_t, obj_t);
	extern BgL_boxzd2refzd2_bglt BGl_makezd2boxzd2refz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt);
	extern obj_t BGl_nodez00zzast_nodez00;
	static BgL_letzd2varzd2_bglt
		BGl_makezd2escapingzd2bindingsz00zzglobaliza7e_nodeza7(obj_t,
		BgL_nodez00_bglt, BgL_variablez00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_gloz12zd2letzd2fun3765z12zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gloz12zd2closure3743zc0zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gloz12zd2setq3757zc0zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gloz12zd2extern3753zc0zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	extern BgL_makezd2boxzd2_bglt BGl_makezd2makezd2boxz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_nodez00_bglt);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_gloz12zd2kwote3738zc0zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cellzd2formalszd2zzglobaliza7e_nodeza7(obj_t,
		BgL_nodez00_bglt);
	static obj_t BGl_gloz12zd2appzd2ly3749z12zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_gloz12zd2letzd2var3767z12zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	static obj_t BGl_gloz12zd2app3747zc0zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gloz12zd2sequence3745zc0zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	static BgL_makezd2boxzd2_bglt
		BGl_azd2makezd2cellz00zzglobaliza7e_nodeza7(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	extern BgL_appz00_bglt BGl_makezd2appzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t);
	static obj_t BGl_cnstzd2initzd2zzglobaliza7e_nodeza7();
	static obj_t BGl_gloz12zd2boxzd2setz123777z00zzglobaliza7e_nodeza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_localzd2ze3globalz96(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern BgL_sequencez00_bglt BGl_makezd2sequencezd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzglobaliza7e_nodeza7();
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_nodezd2globaliza7ez12z67zzglobaliza7e_nodeza7(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gloz12zd2jumpzd2exzd2it3771zc0zzglobaliza7e_nodeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_gloz12zd2fail3761zc0zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t
		BGl_globaliza7ezd2localzd2funz12zb5zzglobaliza7e_nodeza7(BgL_localz00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_gloz12zd2conditional3759zc0zzglobaliza7e_nodeza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_gloz12zd2select3763zc0zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_gloz12zd2var3741zc0zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_celledzd2bindingszd2zzglobaliza7e_nodeza7(obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_makezd2setszd2zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t,
		BgL_variablez00_bglt);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static BgL_nodez00_bglt BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_gloz12zd2makezd2box3773z12zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_gloz12zd2default3733zc0zzglobaliza7e_nodeza7(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_nodeza7();
	extern obj_t BGl_setqz00zzast_nodez00;
	static BgL_appz00_bglt
		BGl_azd2procedurezd2setz12z12zzglobaliza7e_nodeza7(obj_t, obj_t, long,
		obj_t, BgL_variablez00_bglt);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_nodeza7 = BUNSPEC;
	extern obj_t BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7;
	extern BgL_globalz00_bglt
		BGl_thezd2globalzd2zzglobaliza7e_localzd2ze3globalz96(BgL_localz00_bglt);
	extern BgL_atomz00_bglt BGl_makezd2atomzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t);
	static obj_t BGl_gloz12zd2funcall3751zc0zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_nodeza7();
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern BgL_boxzd2setz12zc0_bglt BGl_makezd2boxzd2setz12z12zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_varz00_bglt, BgL_nodez00_bglt);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_gloz12zd2atom3736zc0zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_nodeza7();
	static BgL_appz00_bglt
		BGl_azd2makezd2procedurez00zzglobaliza7e_nodeza7(BgL_localz00_bglt);
	static obj_t BGl__gloz12zd2default3733zc0zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t,
		long, long, bool_t);
	static bool_t BGl_celledzf3zf3zzglobaliza7e_nodeza7(BgL_variablez00_bglt);
	static obj_t BGl__gloz12z12zzglobaliza7e_nodeza7(obj_t, obj_t, obj_t);
	static obj_t BGl_gloz12zd2boxzd2ref3775z12zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__nodezd2globaliza7ez12z67zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_gloz12zd2setzd2exzd2it3769zc0zzglobaliza7e_nodeza7(obj_t,
		obj_t, obj_t);
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_gloz12zd2cast3755zc0zzglobaliza7e_nodeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_thezd2closurezd2zzglobaliza7e_freeza7(BgL_variablez00_bglt,
		obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	extern BgL_letzd2varzd2_bglt BGl_makezd2letzd2varz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt, bool_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_nodeza7();
	static obj_t __cnst[10];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_nodezd2globaliza7ez12zd2envzb5zzglobaliza7e_nodeza7,
		BgL_bgl__nodeza7d2globaliza74260z00,
		BGl__nodezd2globaliza7ez12z67zzglobaliza7e_nodeza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4234z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2atom3734261z00,
		BGl_gloz12zd2atom3736zc0zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4235z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2kwote374262z00,
		BGl_gloz12zd2kwote3738zc0zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4236z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2var37414263z00,
		BGl_gloz12zd2var3741zc0zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4237z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2closure4264z00,
		BGl_gloz12zd2closure3743zc0zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4238z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2sequenc4265z00,
		BGl_gloz12zd2sequence3745zc0zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4240z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2appza7d2l4266za7,
		BGl_gloz12zd2appzd2ly3749z12zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4239z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2app37474267z00,
		BGl_gloz12zd2app3747zc0zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4241z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2funcall4268z00,
		BGl_gloz12zd2funcall3751zc0zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4242z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2extern34269z00,
		BGl_gloz12zd2extern3753zc0zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4243z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2cast3754270z00,
		BGl_gloz12zd2cast3755zc0zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4244z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2setq3754271z00,
		BGl_gloz12zd2setq3757zc0zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4245z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2conditi4272z00,
		BGl_gloz12zd2conditional3759zc0zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4246z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2fail3764273z00,
		BGl_gloz12zd2fail3761zc0zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4247z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2select34274z00,
		BGl_gloz12zd2select3763zc0zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4248z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2letza7d2f4275za7,
		BGl_gloz12zd2letzd2fun3765z12zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4250z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2setza7d2e4276za7,
		BGl_gloz12zd2setzd2exzd2it3769zc0zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4249z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2letza7d2v4277za7,
		BGl_gloz12zd2letzd2var3767z12zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4251z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2jumpza7d24278za7,
		BGl_gloz12zd2jumpzd2exzd2it3771zc0zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4252z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2makeza7d24279za7,
		BGl_gloz12zd2makezd2box3773z12zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4253z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2boxza7d2r4280za7,
		BGl_gloz12zd2boxzd2ref3775z12zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4254z00zzglobaliza7e_nodeza7,
		BgL_bgl_gloza712za7d2boxza7d2s4281za7,
		BGl_gloz12zd2boxzd2setz123777z00zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4232z00zzglobaliza7e_nodeza7,
		BgL_bgl_string4232za700za7za7g4282za7, "glo!", 4);
	      DEFINE_STRING(BGl_string4233z00zzglobaliza7e_nodeza7,
		BgL_bgl_string4233za700za7za7g4283za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string4255z00zzglobaliza7e_nodeza7,
		BgL_bgl_string4255za700za7za7g4284za7,
		"Shoud not be here (because of the integration", 45);
	      DEFINE_STRING(BGl_string4256z00zzglobaliza7e_nodeza7,
		BgL_bgl_string4256za700za7za7g4285za7, "globalize_node", 14);
	      DEFINE_STRING(BGl_string4257z00zzglobaliza7e_nodeza7,
		BgL_bgl_string4257za700za7za7g4286za7,
		"aux glo! glo!-default3733 procedure-set! foreign make-fx-procedure make-va-procedure done (write cell-globalize) cell-globalize ",
		128);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_gloz12zd2default3733zd2envz12zzglobaliza7e_nodeza7,
		BgL_bgl__gloza712za7d2defaul4287z00,
		BGl__gloz12zd2default3733zc0zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_GENERIC(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
		BgL_bgl__gloza712za712za7za7glob4288z00,
		BGl__gloz12z12zzglobaliza7e_nodeza7, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(long
		BgL_checksumz00_3270, char *BgL_fromz00_3271)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_nodeza7))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_nodeza7 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_nodeza7();
					BGl_cnstzd2initzd2zzglobaliza7e_nodeza7();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_nodeza7();
					BGl_genericzd2initzd2zzglobaliza7e_nodeza7();
					BGl_methodzd2initzd2zzglobaliza7e_nodeza7();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_nodeza7()
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 17 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_node");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"globalize_node");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_node");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_node");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzglobaliza7e_nodeza7()
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 17 */
			{	/* Globalize/node.scm 17 */
				obj_t BgL_cportz00_3256;

				BgL_cportz00_3256 =
					bgl_open_input_string(BGl_string4257z00zzglobaliza7e_nodeza7,
					(int) (((long) 0)));
				{
					long BgL_iz00_3257;

					BgL_iz00_3257 = ((long) 9);
				BgL_loopz00_3258:
					if ((BgL_iz00_3257 == ((long) -1)))
						{	/* Globalize/node.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Globalize/node.scm 17 */
							{	/* Globalize/node.scm 17 */
								obj_t BgL_arg4259z00_3260;

								{	/* Globalize/node.scm 17 */

									{	/* Globalize/node.scm 17 */
										obj_t BgL_locationz00_3262;

										BgL_locationz00_3262 = BBOOL(((bool_t) 0));
										{	/* Globalize/node.scm 17 */

											BgL_arg4259z00_3260 =
												BGl_readz00zz__readerz00(BgL_cportz00_3256,
												BgL_locationz00_3262);
										}
									}
								}
								{	/* Globalize/node.scm 17 */
									int BgL_auxz00_3290;

									BgL_auxz00_3290 = (int) (BgL_iz00_3257);
									CNST_TABLE_SET(BgL_auxz00_3290, BgL_arg4259z00_3260);
							}}
							{	/* Globalize/node.scm 17 */
								int BgL_auxz00_3263;

								BgL_auxz00_3263 = (int) ((BgL_iz00_3257 - ((long) 1)));
								{
									long BgL_iz00_3295;

									BgL_iz00_3295 = (long) (BgL_auxz00_3263);
									BgL_iz00_3257 = BgL_iz00_3295;
									goto BgL_loopz00_3258;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzglobaliza7e_nodeza7()
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 17 */
			return BUNSPEC;
		}
	}



/* node-globalize! */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_nodezd2globaliza7ez12z67zzglobaliza7e_nodeza7(BgL_nodez00_bglt
		BgL_nodez00_1, BgL_variablez00_bglt BgL_integratorz00_2,
		obj_t BgL_whatzf2byza2z50_3)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 40 */
			{	/* Globalize/node.scm 44 */
				BgL_valuez00_bglt BgL_funz00_983;

				BgL_funz00_983 =
					(((BgL_variablez00_bglt) CREF(BgL_integratorz00_2))->BgL_valuez00);
				{	/* Globalize/node.scm 44 */
					obj_t BgL_celledz00_984;

					{	/* Globalize/node.scm 45 */
						obj_t BgL_arg3788z00_1005;

						{
							BgL_sfunz00_bglt BgL_auxz00_3298;

							BgL_auxz00_3298 = (BgL_sfunz00_bglt) (BgL_funz00_983);
							BgL_arg3788z00_1005 =
								(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3298))->BgL_argsz00);
						}
						BgL_celledz00_984 =
							BGl_celledzd2bindingszd2zzglobaliza7e_nodeza7
							(BgL_arg3788z00_1005);
					}
					{	/* Globalize/node.scm 45 */
						obj_t BgL_whatzf2byza2z50_985;

						BgL_whatzf2byza2z50_985 =
							bgl_append2(BgL_celledz00_984, BgL_whatzf2byza2z50_3);
						{	/* Globalize/node.scm 46 */

							{
								obj_t BgL_l3714z00_987;

								BgL_l3714z00_987 = BgL_whatzf2byza2z50_985;
							BgL_zc3anonymousza33778ze3z83_988:
								if (PAIRP(BgL_l3714z00_987))
									{	/* Globalize/node.scm 48 */
										{	/* Globalize/node.scm 49 */
											obj_t BgL_wze2bze2_990;

											BgL_wze2bze2_990 = CAR(BgL_l3714z00_987);
											{	/* Globalize/node.scm 49 */
												obj_t BgL_arg3780z00_991;

												obj_t BgL_arg3781z00_992;

												BgL_arg3780z00_991 = CAR(BgL_wze2bze2_990);
												BgL_arg3781z00_992 = CDR(BgL_wze2bze2_990);
												{
													BgL_variablez00_bglt BgL_auxz00_3308;

													BgL_auxz00_3308 =
														(BgL_variablez00_bglt) (BgL_arg3780z00_991);
													((((BgL_variablez00_bglt) CREF(BgL_auxz00_3308))->
															BgL_fastzd2alphazd2) =
														((obj_t) BgL_arg3781z00_992), BUNSPEC);
												}
											}
										}
										{
											obj_t BgL_l3714z00_3311;

											BgL_l3714z00_3311 = CDR(BgL_l3714z00_987);
											BgL_l3714z00_987 = BgL_l3714z00_3311;
											goto BgL_zc3anonymousza33778ze3z83_988;
										}
									}
								else
									{	/* Globalize/node.scm 48 */
										((bool_t) 1);
									}
							}
							{	/* Globalize/node.scm 51 */
								obj_t BgL_resz00_995;

								{	/* Globalize/node.scm 51 */
									BgL_nodez00_bglt BgL_arg3787z00_1004;

									{	/* Globalize/node.scm 51 */
										BgL_nodez00_bglt BgL_res4135z00_1982;

										{	/* Globalize/node.scm 51 */
											obj_t BgL_method3734z00_1957;

											{	/* Globalize/node.scm 51 */
												BgL_objectz00_bglt BgL_objz00_1958;

												BgL_objz00_1958 = (BgL_objectz00_bglt) (BgL_nodez00_1);
												{	/* Globalize/node.scm 51 */
													long BgL_objzd2classzd2numz00_1959;

													BgL_objzd2classzd2numz00_1959 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1958);
													{	/* Globalize/node.scm 51 */
														obj_t BgL_arg2643z00_1960;

														BgL_arg2643z00_1960 =
															PROCEDURE_REF
															(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
															(int) (((long) 1)));
														{	/* Globalize/node.scm 51 */
															obj_t BgL_arrayz00_1962;

															int BgL_offsetz00_1963;

															BgL_arrayz00_1962 = BgL_arg2643z00_1960;
															BgL_offsetz00_1963 =
																(int) (BgL_objzd2classzd2numz00_1959);
															{	/* Globalize/node.scm 51 */
																long BgL_offsetz00_1964;

																BgL_offsetz00_1964 =
																	((long) (BgL_offsetz00_1963) - OBJECT_TYPE);
																{	/* Globalize/node.scm 51 */
																	long BgL_modz00_1965;

																	{	/* Globalize/node.scm 51 */
																		int BgL_arg2645z00_1966;

																		BgL_arg2645z00_1966 = (int) (((long) 16));
																		{	/* Globalize/node.scm 51 */
																			long BgL_auxz00_3321;

																			BgL_auxz00_3321 =
																				(long) (BgL_arg2645z00_1966);
																			BgL_modz00_1965 =
																				(BgL_offsetz00_1964 / BgL_auxz00_3321);
																	}}
																	{	/* Globalize/node.scm 51 */
																		long BgL_restz00_1967;

																		{	/* Globalize/node.scm 51 */
																			int BgL_arg2644z00_1968;

																			BgL_arg2644z00_1968 = (int) (((long) 16));
																			{	/* Globalize/node.scm 51 */
																				long BgL_auxz00_3325;

																				BgL_auxz00_3325 =
																					(long) (BgL_arg2644z00_1968);
																				BgL_restz00_1967 =
																					(BgL_offsetz00_1964 %
																					BgL_auxz00_3325);
																		}}
																		{	/* Globalize/node.scm 51 */

																			BgL_method3734z00_1957 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1962,
																					(int) (BgL_modz00_1965)),
																				(int) (BgL_restz00_1967));
											}}}}}}}}
											BgL_res4135z00_1982 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3734z00_1957) (BgL_method3734z00_1957,
													(obj_t) (BgL_nodez00_1),
													(obj_t) (BgL_integratorz00_2), BEOA));
										}
										BgL_arg3787z00_1004 = BgL_res4135z00_1982;
									}
									BgL_resz00_995 =
										BGl_cellzd2formalszd2zzglobaliza7e_nodeza7
										(BgL_celledz00_984, BgL_arg3787z00_1004);
								}
								{
									obj_t BgL_l3716z00_997;

									BgL_l3716z00_997 = BgL_whatzf2byza2z50_985;
								BgL_zc3anonymousza33783ze3z83_998:
									if (PAIRP(BgL_l3716z00_997))
										{	/* Globalize/node.scm 53 */
											{	/* Globalize/node.scm 54 */
												obj_t BgL_wze2bze2_1000;

												BgL_wze2bze2_1000 = CAR(BgL_l3716z00_997);
												{	/* Globalize/node.scm 54 */
													obj_t BgL_arg3785z00_1001;

													BgL_arg3785z00_1001 = CAR(BgL_wze2bze2_1000);
													{
														BgL_variablez00_bglt BgL_auxz00_3342;

														BgL_auxz00_3342 =
															(BgL_variablez00_bglt) (BgL_arg3785z00_1001);
														((((BgL_variablez00_bglt) CREF(BgL_auxz00_3342))->
																BgL_fastzd2alphazd2) =
															((obj_t) BUNSPEC), BUNSPEC);
													}
												}
											}
											{
												obj_t BgL_l3716z00_3345;

												BgL_l3716z00_3345 = CDR(BgL_l3716z00_997);
												BgL_l3716z00_997 = BgL_l3716z00_3345;
												goto BgL_zc3anonymousza33783ze3z83_998;
											}
										}
									else
										{	/* Globalize/node.scm 53 */
											((bool_t) 1);
										}
								}
								return (BgL_nodez00_bglt) (BgL_resz00_995);
							}
						}
					}
				}
			}
		}
	}



/* _node-globalize! */
	obj_t BGl__nodezd2globaliza7ez12z67zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3162, obj_t BgL_nodez00_3163, obj_t BgL_integratorz00_3164,
		obj_t BgL_whatzf2byza2z50_3165)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 40 */
			return
				(obj_t) (BGl_nodezd2globaliza7ez12z67zzglobaliza7e_nodeza7(
					(BgL_nodez00_bglt) (BgL_nodez00_3163),
					(BgL_variablez00_bglt) (BgL_integratorz00_3164),
					BgL_whatzf2byza2z50_3165));
		}
	}



/* celled-bindings */
	obj_t BGl_celledzd2bindingszd2zzglobaliza7e_nodeza7(obj_t BgL_formalsz00_4)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 61 */
			{
				obj_t BgL_celledz00_1008;

				obj_t BgL_formalsz00_1009;

				BgL_celledz00_1008 = BNIL;
				BgL_formalsz00_1009 = BgL_formalsz00_4;
			BgL_zc3anonymousza33789ze3z83_1010:
				if (NULLP(BgL_formalsz00_1009))
					{	/* Globalize/node.scm 65 */
						return BgL_celledz00_1008;
					}
				else
					{	/* Globalize/node.scm 65 */
						if (BGl_celledzf3zf3zzglobaliza7e_nodeza7(
								(BgL_variablez00_bglt) (CAR(BgL_formalsz00_1009))))
							{	/* Globalize/node.scm 70 */
								BgL_typez00_bglt BgL_vtypez00_1013;

								{	/* Globalize/node.scm 70 */
									BgL_variablez00_bglt BgL_obj1608z00_1992;

									{	/* Globalize/node.scm 70 */
										obj_t BgL_pairz00_1991;

										BgL_pairz00_1991 = BgL_formalsz00_1009;
										BgL_obj1608z00_1992 =
											(BgL_variablez00_bglt) (CAR(BgL_pairz00_1991));
									}
									BgL_vtypez00_1013 =
										(((BgL_variablez00_bglt) CREF(BgL_obj1608z00_1992))->
										BgL_typez00);
								}
								{	/* Globalize/node.scm 70 */
									obj_t BgL_ntypez00_1014;

									if (
										((obj_t) (BgL_vtypez00_1013) ==
											BGl_za2_za2z00zztype_cachez00))
										{	/* Globalize/node.scm 72 */
											BgL_ntypez00_1014 = BGl_za2objza2z00zztype_cachez00;
										}
									else
										{	/* Globalize/node.scm 72 */
											if (BGl_bigloozd2typezf3z21zztype_typez00
												(BgL_vtypez00_1013))
												{	/* Globalize/node.scm 73 */
													BgL_ntypez00_1014 = (obj_t) (BgL_vtypez00_1013);
												}
											else
												{	/* Globalize/node.scm 73 */
													BgL_ntypez00_1014 = BGl_za2objza2z00zztype_cachez00;
												}
										}
									{	/* Globalize/node.scm 71 */
										BgL_localz00_bglt BgL_varz00_1015;

										{	/* Globalize/node.scm 75 */
											obj_t BgL_arg3799z00_1025;

											{	/* Globalize/node.scm 75 */
												BgL_variablez00_bglt BgL_obj1604z00_1994;

												{	/* Globalize/node.scm 75 */
													obj_t BgL_pairz00_1993;

													BgL_pairz00_1993 = BgL_formalsz00_1009;
													BgL_obj1604z00_1994 =
														(BgL_variablez00_bglt) (CAR(BgL_pairz00_1993));
												}
												BgL_arg3799z00_1025 =
													(((BgL_variablez00_bglt) CREF(BgL_obj1604z00_1994))->
													BgL_idz00);
											}
											BgL_varz00_1015 =
												BGl_makezd2localzd2svarz00zzast_localz00
												(BgL_arg3799z00_1025,
												(BgL_typez00_bglt) (BgL_ntypez00_1014));
										}
										{	/* Globalize/node.scm 75 */
											obj_t BgL_oze2nze2_1016;

											BgL_oze2nze2_1016 =
												MAKE_PAIR(CAR(BgL_formalsz00_1009),
												(obj_t) (BgL_varz00_1015));
											{	/* Globalize/node.scm 76 */

												{	/* Globalize/node.scm 77 */
													BgL_variablez00_bglt BgL_obj1616z00_1996;

													obj_t BgL_val1615z00_1997;

													BgL_obj1616z00_1996 =
														(BgL_variablez00_bglt) (BgL_varz00_1015);
													BgL_val1615z00_1997 = CNST_TABLE_REF(((long) 0));
													((((BgL_variablez00_bglt) CREF(BgL_obj1616z00_1996))->
															BgL_accessz00) =
														((obj_t) BgL_val1615z00_1997), BUNSPEC);
												}
												{	/* Globalize/node.scm 78 */
													bool_t BgL_arg3792z00_1017;

													{	/* Globalize/node.scm 78 */
														BgL_localz00_bglt BgL_obj1774z00_1999;

														{	/* Globalize/node.scm 78 */
															obj_t BgL_pairz00_1998;

															BgL_pairz00_1998 = BgL_formalsz00_1009;
															BgL_obj1774z00_1999 =
																(BgL_localz00_bglt) (CAR(BgL_pairz00_1998));
														}
														BgL_arg3792z00_1017 =
															(((BgL_localz00_bglt) CREF(BgL_obj1774z00_1999))->
															BgL_userzf3zf3);
													}
													((((BgL_localz00_bglt) CREF(BgL_varz00_1015))->
															BgL_userzf3zf3) =
														((bool_t) BgL_arg3792z00_1017), BUNSPEC);
												}
												{	/* Globalize/node.scm 79 */
													BgL_svarz00_bglt BgL_obj3638z00_1019;

													{
														BgL_svarz00_bglt BgL_auxz00_3382;

														{	/* Globalize/node.scm 79 */
															BgL_valuez00_bglt BgL_auxz00_3383;

															{
																BgL_variablez00_bglt BgL_auxz00_3384;

																BgL_auxz00_3384 =
																	(BgL_variablez00_bglt) (BgL_varz00_1015);
																BgL_auxz00_3383 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_3384))->BgL_valuez00);
															}
															BgL_auxz00_3382 =
																(BgL_svarz00_bglt) (BgL_auxz00_3383);
														}
														BgL_obj3638z00_1019 =
															((BgL_svarz00_bglt) BgL_auxz00_3382);
													}
													{	/* Globalize/node.scm 79 */
														obj_t BgL_auxz00_3391;

														BgL_objectz00_bglt BgL_auxz00_3389;

														BgL_auxz00_3391 =
															BGl_wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7
															(((bool_t) 1), ((long) -10), ((long) -10),
															((bool_t) 1));
														BgL_auxz00_3389 =
															(BgL_objectz00_bglt) (BgL_obj3638z00_1019);
														BGL_OBJECT_WIDENING_SET(BgL_auxz00_3389,
															BgL_auxz00_3391);
													}
													BGL_OBJECT_CLASS_NUM_SET(
														(BgL_objectz00_bglt) (BgL_obj3638z00_1019),
														BGl_classzd2numzd2zz__objectz00
														(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7));
													BgL_obj3638z00_1019;
												}
												{	/* Globalize/node.scm 82 */
													obj_t BgL_arg3796z00_1022;

													obj_t BgL_arg3797z00_1023;

													BgL_arg3796z00_1022 =
														MAKE_PAIR(BgL_oze2nze2_1016, BgL_celledz00_1008);
													BgL_arg3797z00_1023 = CDR(BgL_formalsz00_1009);
													{
														obj_t BgL_formalsz00_3400;

														obj_t BgL_celledz00_3399;

														BgL_celledz00_3399 = BgL_arg3796z00_1022;
														BgL_formalsz00_3400 = BgL_arg3797z00_1023;
														BgL_formalsz00_1009 = BgL_formalsz00_3400;
														BgL_celledz00_1008 = BgL_celledz00_3399;
														goto BgL_zc3anonymousza33789ze3z83_1010;
													}
												}
											}
										}
									}
								}
							}
						else
							{
								obj_t BgL_formalsz00_3401;

								BgL_formalsz00_3401 = CDR(BgL_formalsz00_1009);
								BgL_formalsz00_1009 = BgL_formalsz00_3401;
								goto BgL_zc3anonymousza33789ze3z83_1010;
							}
					}
			}
		}
	}



/* cell-formals */
	obj_t BGl_cellzd2formalszd2zzglobaliza7e_nodeza7(obj_t BgL_celledz00_5,
		BgL_nodez00_bglt BgL_bodyz00_6)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 87 */
			if (NULLP(BgL_celledz00_5))
				{	/* Globalize/node.scm 88 */
					return (obj_t) (BgL_bodyz00_6);
				}
			else
				{	/* Globalize/node.scm 90 */
					obj_t BgL_locz00_1034;

					BgL_locz00_1034 =
						(((BgL_nodez00_bglt) CREF(BgL_bodyz00_6))->BgL_locz00);
					{	/* Globalize/node.scm 91 */
						obj_t BgL_arg3808z00_1036;

						{	/* Globalize/node.scm 95 */
							obj_t BgL_head3720z00_1039;

							BgL_head3720z00_1039 = MAKE_PAIR(BNIL, BNIL);
							{
								obj_t BgL_l3718z00_1041;

								obj_t BgL_tail3721z00_1042;

								BgL_l3718z00_1041 = BgL_celledz00_5;
								BgL_tail3721z00_1042 = BgL_head3720z00_1039;
							BgL_zc3anonymousza33810ze3z83_1043:
								if (NULLP(BgL_l3718z00_1041))
									{	/* Globalize/node.scm 95 */
										BgL_arg3808z00_1036 = CDR(BgL_head3720z00_1039);
									}
								else
									{	/* Globalize/node.scm 95 */
										obj_t BgL_newtail3722z00_1045;

										{	/* Globalize/node.scm 95 */
											obj_t BgL_arg3813z00_1047;

											{	/* Globalize/node.scm 95 */
												obj_t BgL_oze2nze2_1049;

												BgL_oze2nze2_1049 = CAR(BgL_l3718z00_1041);
												{	/* Globalize/node.scm 96 */
													obj_t BgL_arg3815z00_1050;

													BgL_makezd2boxzd2_bglt BgL_arg3816z00_1051;

													BgL_arg3815z00_1050 = CDR(BgL_oze2nze2_1049);
													{	/* Globalize/node.scm 100 */
														BgL_varz00_bglt BgL_arg3817z00_1052;

														obj_t BgL_arg3818z00_1053;

														{	/* Globalize/node.scm 100 */
															obj_t BgL_arg3819z00_1054;

															BgL_arg3819z00_1054 = CAR(BgL_oze2nze2_1049);
															BgL_arg3817z00_1052 =
																BGl_makezd2varzd2zzast_nodez00(BgL_locz00_1034,
																(BgL_typez00_bglt)
																(BGl_za2_za2z00zztype_cachez00),
																(BgL_variablez00_bglt) (BgL_arg3819z00_1054));
														}
														BgL_arg3818z00_1053 = CAR(BgL_oze2nze2_1049);
														BgL_arg3816z00_1051 =
															BGl_azd2makezd2cellz00zzglobaliza7e_nodeza7(
															(BgL_nodez00_bglt) (BgL_arg3817z00_1052),
															(BgL_variablez00_bglt) (BgL_arg3818z00_1053));
													}
													BgL_arg3813z00_1047 =
														MAKE_PAIR(BgL_arg3815z00_1050,
														(obj_t) (BgL_arg3816z00_1051));
												}
											}
											BgL_newtail3722z00_1045 =
												MAKE_PAIR(BgL_arg3813z00_1047, BNIL);
										}
										SET_CDR(BgL_tail3721z00_1042, BgL_newtail3722z00_1045);
										{
											obj_t BgL_tail3721z00_3427;

											obj_t BgL_l3718z00_3425;

											BgL_l3718z00_3425 = CDR(BgL_l3718z00_1041);
											BgL_tail3721z00_3427 = BgL_newtail3722z00_1045;
											BgL_tail3721z00_1042 = BgL_tail3721z00_3427;
											BgL_l3718z00_1041 = BgL_l3718z00_3425;
											goto BgL_zc3anonymousza33810ze3z83_1043;
										}
									}
							}
						}
						return
							(obj_t) (BGl_makezd2letzd2varz00zzast_nodez00(BgL_locz00_1034,
								(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00), BUNSPEC,
								BINT(((long) -1)), BgL_arg3808z00_1036, BgL_bodyz00_6,
								((bool_t) 1)));
		}}}
	}



/* a-make-cell */
	BgL_makezd2boxzd2_bglt
		BGl_azd2makezd2cellz00zzglobaliza7e_nodeza7(BgL_nodez00_bglt BgL_nodez00_7,
		BgL_variablez00_bglt BgL_variablez00_8)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 107 */
			{	/* Globalize/node.scm 109 */
				BgL_variablez00_bglt BgL_obj1616z00_2023;

				obj_t BgL_val1615z00_2024;

				BgL_obj1616z00_2023 = BgL_variablez00_8;
				BgL_val1615z00_2024 = CNST_TABLE_REF(((long) 0));
				((((BgL_variablez00_bglt) CREF(BgL_obj1616z00_2023))->BgL_accessz00) =
					((obj_t) BgL_val1615z00_2024), BUNSPEC);
			}
			{	/* Globalize/node.scm 110 */
				BgL_valuez00_bglt BgL_arg3820z00_1057;

				BgL_arg3820z00_1057 =
					(((BgL_variablez00_bglt) CREF(BgL_variablez00_8))->BgL_valuez00);
				{	/* Globalize/node.scm 110 */
					BgL_svarzf2ginfozf2_bglt BgL_obj3459z00_2026;

					bool_t BgL_val3458z00_2027;

					BgL_obj3459z00_2026 =
						(BgL_svarzf2ginfozf2_bglt) (BgL_arg3820z00_1057);
					BgL_val3458z00_2027 = ((bool_t) 1);
					{
						obj_t BgL_auxz00_3436;

						{	/* Globalize/node.scm 110 */
							BgL_objectz00_bglt BgL_auxz00_3437;

							BgL_auxz00_3437 = (BgL_objectz00_bglt) (BgL_obj3459z00_2026);
							BgL_auxz00_3436 = BGL_OBJECT_WIDENING(BgL_auxz00_3437);
						}
						((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_auxz00_3436))->
								BgL_celledzf3zf3) = ((bool_t) BgL_val3458z00_2027), BUNSPEC);
			}}}
			{	/* Globalize/node.scm 111 */
				obj_t BgL_arg3821z00_1058;

				BgL_arg3821z00_1058 =
					(((BgL_nodez00_bglt) CREF(BgL_nodez00_7))->BgL_locz00);
				return
					BGl_makezd2makezd2boxz00zzast_nodez00(BgL_arg3821z00_1058,
					(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00), BUNSPEC,
					BINT(((long) -1)), BgL_nodez00_7);
		}}
	}



/* celled? */
	bool_t BGl_celledzf3zf3zzglobaliza7e_nodeza7(BgL_variablez00_bglt
		BgL_variablez00_9)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 116 */
			{	/* Globalize/node.scm 117 */
				bool_t BgL_testz00_3445;

				{	/* Globalize/node.scm 117 */
					obj_t BgL_obj1812z00_2029;

					BgL_obj1812z00_2029 = (obj_t) (BgL_variablez00_9);
					BgL_testz00_3445 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj1812z00_2029,
						BGl_localz00zzast_varz00);
				}
				if (BgL_testz00_3445)
					{	/* Globalize/node.scm 118 */
						bool_t BgL_testz00_3448;

						{	/* Globalize/node.scm 118 */
							BgL_valuez00_bglt BgL_arg3827z00_1068;

							BgL_arg3827z00_1068 =
								(((BgL_variablez00_bglt) CREF(BgL_variablez00_9))->
								BgL_valuez00);
							{	/* Globalize/node.scm 118 */
								obj_t BgL_obj3447z00_2031;

								BgL_obj3447z00_2031 = (obj_t) (BgL_arg3827z00_1068);
								BgL_testz00_3448 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj3447z00_2031,
									BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
							}
						}
						if (BgL_testz00_3448)
							{	/* Globalize/node.scm 119 */
								bool_t BgL__ortest_3646z00_1062;

								{	/* Globalize/node.scm 119 */
									BgL_svarzf2ginfozf2_bglt BgL_obj3457z00_2033;

									BgL_obj3457z00_2033 =
										(BgL_svarzf2ginfozf2_bglt) (
										(((BgL_variablez00_bglt) CREF(BgL_variablez00_9))->
											BgL_valuez00));
									{
										obj_t BgL_auxz00_3454;

										{	/* Globalize/node.scm 119 */
											BgL_objectz00_bglt BgL_auxz00_3455;

											BgL_auxz00_3455 =
												(BgL_objectz00_bglt) (BgL_obj3457z00_2033);
											BgL_auxz00_3454 = BGL_OBJECT_WIDENING(BgL_auxz00_3455);
										}
										BgL__ortest_3646z00_1062 =
											(((BgL_svarzf2ginfozf2_bglt) CREF(BgL_auxz00_3454))->
											BgL_celledzf3zf3);
									}
								}
								if (BgL__ortest_3646z00_1062)
									{	/* Globalize/node.scm 119 */
										return BgL__ortest_3646z00_1062;
									}
								else
									{	/* Globalize/node.scm 119 */
										if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
													(((BgL_variablez00_bglt) CREF(BgL_variablez00_9))->
														BgL_accessz00), CNST_TABLE_REF(((long) 1)))))
											{	/* Globalize/node.scm 121 */
												BgL_svarzf2ginfozf2_bglt BgL_obj3448z00_2036;

												BgL_obj3448z00_2036 =
													(BgL_svarzf2ginfozf2_bglt) (
													(((BgL_variablez00_bglt) CREF(BgL_variablez00_9))->
														BgL_valuez00));
												{
													obj_t BgL_auxz00_3467;

													{	/* Globalize/node.scm 121 */
														BgL_objectz00_bglt BgL_auxz00_3468;

														BgL_auxz00_3468 =
															(BgL_objectz00_bglt) (BgL_obj3448z00_2036);
														BgL_auxz00_3467 =
															BGL_OBJECT_WIDENING(BgL_auxz00_3468);
													}
													return
														(((BgL_svarzf2ginfozf2_bglt)
															CREF(BgL_auxz00_3467))->BgL_kapturedzf3zf3);
												}
											}
										else
											{	/* Globalize/node.scm 120 */
												return ((bool_t) 0);
											}
									}
							}
						else
							{	/* Globalize/node.scm 118 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* Globalize/node.scm 117 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* glo*! */
	obj_t BGl_gloza2z12zb0zzglobaliza7e_nodeza7(obj_t BgL_nodeza2za2_56,
		obj_t BgL_integratorz00_57)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 464 */
			{
				obj_t BgL_nodeza2za2_1070;

				BgL_nodeza2za2_1070 = BgL_nodeza2za2_56;
			BgL_zc3anonymousza33828ze3z83_1071:
				if (NULLP(BgL_nodeza2za2_1070))
					{	/* Globalize/node.scm 466 */
						return CNST_TABLE_REF(((long) 2));
					}
				else
					{	/* Globalize/node.scm 466 */
						{	/* Globalize/node.scm 469 */
							BgL_nodez00_bglt BgL_arg3830z00_1073;

							{	/* Globalize/node.scm 469 */
								obj_t BgL_arg3831z00_1074;

								BgL_arg3831z00_1074 = CAR(BgL_nodeza2za2_1070);
								{	/* Globalize/node.scm 469 */
									BgL_nodez00_bglt BgL_res4138z00_2066;

									{	/* Globalize/node.scm 469 */
										BgL_nodez00_bglt BgL_nodez00_2039;

										BgL_variablez00_bglt BgL_integratorz00_2040;

										BgL_nodez00_2039 = (BgL_nodez00_bglt) (BgL_arg3831z00_1074);
										BgL_integratorz00_2040 =
											(BgL_variablez00_bglt) (BgL_integratorz00_57);
										{	/* Globalize/node.scm 469 */
											obj_t BgL_method3734z00_2041;

											{	/* Globalize/node.scm 469 */
												BgL_objectz00_bglt BgL_objz00_2042;

												BgL_objz00_2042 =
													(BgL_objectz00_bglt) (BgL_nodez00_2039);
												{	/* Globalize/node.scm 469 */
													long BgL_objzd2classzd2numz00_2043;

													BgL_objzd2classzd2numz00_2043 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2042);
													{	/* Globalize/node.scm 469 */
														obj_t BgL_arg2643z00_2044;

														BgL_arg2643z00_2044 =
															PROCEDURE_REF
															(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
															(int) (((long) 1)));
														{	/* Globalize/node.scm 469 */
															obj_t BgL_arrayz00_2046;

															int BgL_offsetz00_2047;

															BgL_arrayz00_2046 = BgL_arg2643z00_2044;
															BgL_offsetz00_2047 =
																(int) (BgL_objzd2classzd2numz00_2043);
															{	/* Globalize/node.scm 469 */
																long BgL_offsetz00_2048;

																BgL_offsetz00_2048 =
																	((long) (BgL_offsetz00_2047) - OBJECT_TYPE);
																{	/* Globalize/node.scm 469 */
																	long BgL_modz00_2049;

																	{	/* Globalize/node.scm 469 */
																		int BgL_arg2645z00_2050;

																		BgL_arg2645z00_2050 = (int) (((long) 16));
																		{	/* Globalize/node.scm 469 */
																			long BgL_auxz00_3486;

																			BgL_auxz00_3486 =
																				(long) (BgL_arg2645z00_2050);
																			BgL_modz00_2049 =
																				(BgL_offsetz00_2048 / BgL_auxz00_3486);
																	}}
																	{	/* Globalize/node.scm 469 */
																		long BgL_restz00_2051;

																		{	/* Globalize/node.scm 469 */
																			int BgL_arg2644z00_2052;

																			BgL_arg2644z00_2052 = (int) (((long) 16));
																			{	/* Globalize/node.scm 469 */
																				long BgL_auxz00_3490;

																				BgL_auxz00_3490 =
																					(long) (BgL_arg2644z00_2052);
																				BgL_restz00_2051 =
																					(BgL_offsetz00_2048 %
																					BgL_auxz00_3490);
																		}}
																		{	/* Globalize/node.scm 469 */

																			BgL_method3734z00_2041 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2046,
																					(int) (BgL_modz00_2049)),
																				(int) (BgL_restz00_2051));
											}}}}}}}}
											BgL_res4138z00_2066 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3734z00_2041) (BgL_method3734z00_2041,
													(obj_t) (BgL_nodez00_2039),
													(obj_t) (BgL_integratorz00_2040), BEOA));
									}}
									BgL_arg3830z00_1073 = BgL_res4138z00_2066;
							}}
							{	/* Globalize/node.scm 469 */
								obj_t BgL_auxz00_3502;

								BgL_auxz00_3502 = (obj_t) (BgL_arg3830z00_1073);
								SET_CAR(BgL_nodeza2za2_1070, BgL_auxz00_3502);
						}}
						{
							obj_t BgL_nodeza2za2_3505;

							BgL_nodeza2za2_3505 = CDR(BgL_nodeza2za2_1070);
							BgL_nodeza2za2_1070 = BgL_nodeza2za2_3505;
							goto BgL_zc3anonymousza33828ze3z83_1071;
						}
					}
			}
		}
	}



/* make-escaping-bindings */
	BgL_letzd2varzd2_bglt
		BGl_makezd2escapingzd2bindingsz00zzglobaliza7e_nodeza7(obj_t
		BgL_ebindingsz00_58, BgL_nodez00_bglt BgL_nodez00_59,
		BgL_variablez00_bglt BgL_integratorz00_60)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 475 */
			{
				obj_t BgL_ebindingsz00_1080;

				obj_t BgL_bindingsz00_1081;

				obj_t BgL_setsz00_1082;

				BgL_ebindingsz00_1080 = BgL_ebindingsz00_58;
				BgL_bindingsz00_1081 = BNIL;
				BgL_setsz00_1082 = BNIL;
			BgL_zc3anonymousza33833ze3z83_1083:
				if (NULLP(BgL_ebindingsz00_1080))
					{	/* Globalize/node.scm 484 */
						obj_t BgL_arg3835z00_1085;

						obj_t BgL_arg3837z00_1087;

						BgL_arg3835z00_1085 =
							(((BgL_nodez00_bglt) CREF(BgL_nodez00_59))->BgL_locz00);
						if (NULLP(BgL_setsz00_1082))
							{	/* Globalize/node.scm 487 */
								BgL_arg3837z00_1087 = (obj_t) (BgL_nodez00_59);
							}
						else
							{	/* Globalize/node.scm 490 */
								obj_t BgL_arg3839z00_1089;

								obj_t BgL_arg3841z00_1091;

								BgL_arg3839z00_1089 =
									(((BgL_nodez00_bglt) CREF(BgL_nodez00_59))->BgL_locz00);
								{	/* Globalize/node.scm 492 */
									obj_t BgL_arg3842z00_1092;

									{	/* Globalize/node.scm 492 */
										obj_t BgL_list3843z00_1093;

										BgL_list3843z00_1093 =
											MAKE_PAIR((obj_t) (BgL_nodez00_59), BNIL);
										BgL_arg3842z00_1092 = BgL_list3843z00_1093;
									}
									BgL_arg3841z00_1091 =
										bgl_append2(BgL_setsz00_1082, BgL_arg3842z00_1092);
								}
								BgL_arg3837z00_1087 =
									(obj_t) (BGl_makezd2sequencezd2zzast_nodez00
									(BgL_arg3839z00_1089,
										(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00), BUNSPEC,
										BINT(((long) -1)), BgL_arg3841z00_1091));
							}
						return
							BGl_makezd2letzd2varz00zzast_nodez00(BgL_arg3835z00_1085,
							(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00), BUNSPEC,
							BINT(((long) -1)), BgL_bindingsz00_1081,
							(BgL_nodez00_bglt) (BgL_arg3837z00_1087), ((bool_t) 1));
					}
				else
					{	/* Globalize/node.scm 493 */
						obj_t BgL_localz00_1094;

						BgL_localz00_1094 = CAR(BgL_ebindingsz00_1080);
						{	/* Globalize/node.scm 493 */
							obj_t BgL_newz00_1095;

							{	/* Globalize/node.scm 494 */
								obj_t BgL_arg3853z00_1106;

								BgL_arg3853z00_1106 =
									(((BgL_nodez00_bglt) CREF(BgL_nodez00_59))->BgL_locz00);
								BgL_newz00_1095 =
									BGl_thezd2closurezd2zzglobaliza7e_freeza7(
									(BgL_variablez00_bglt) (BgL_localz00_1094),
									BgL_arg3853z00_1106);
							}
							{	/* Globalize/node.scm 494 */
								obj_t BgL_nsetsz00_1096;

								{	/* Globalize/node.scm 496 */
									obj_t BgL_arg3850z00_1103;

									obj_t BgL_arg3851z00_1104;

									BgL_arg3850z00_1103 =
										(((BgL_nodez00_bglt) CREF(BgL_nodez00_59))->BgL_locz00);
									{	/* Globalize/node.scm 497 */
										BgL_sfunzf2ginfozf2_bglt BgL_obj3367z00_2080;

										{	/* Globalize/node.scm 497 */
											BgL_variablez00_bglt BgL_obj1611z00_2079;

											BgL_obj1611z00_2079 =
												(BgL_variablez00_bglt) (BgL_localz00_1094);
											BgL_obj3367z00_2080 =
												(BgL_sfunzf2ginfozf2_bglt) (
												(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_2079))->
													BgL_valuez00));
										}
										{
											obj_t BgL_auxz00_3533;

											{	/* Globalize/node.scm 497 */
												BgL_objectz00_bglt BgL_auxz00_3534;

												BgL_auxz00_3534 =
													(BgL_objectz00_bglt) (BgL_obj3367z00_2080);
												BgL_auxz00_3533 = BGL_OBJECT_WIDENING(BgL_auxz00_3534);
											}
											BgL_arg3851z00_1104 =
												(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3533))->
												BgL_kapturedz00);
										}
									}
									BgL_nsetsz00_1096 =
										BGl_makezd2setszd2zzglobaliza7e_nodeza7(BgL_newz00_1095,
										BgL_arg3850z00_1103, BgL_arg3851z00_1104,
										BgL_integratorz00_60);
								}
								{	/* Globalize/node.scm 495 */

									{	/* Globalize/node.scm 499 */
										obj_t BgL_arg3844z00_1097;

										obj_t BgL_arg3845z00_1098;

										obj_t BgL_arg3846z00_1099;

										BgL_arg3844z00_1097 = CDR(BgL_ebindingsz00_1080);
										{	/* Globalize/node.scm 500 */
											obj_t BgL_arg3847z00_1100;

											{	/* Globalize/node.scm 500 */
												BgL_appz00_bglt BgL_arg3848z00_1101;

												BgL_arg3848z00_1101 =
													BGl_azd2makezd2procedurez00zzglobaliza7e_nodeza7(
													(BgL_localz00_bglt) (BgL_localz00_1094));
												BgL_arg3847z00_1100 =
													MAKE_PAIR(BgL_newz00_1095,
													(obj_t) (BgL_arg3848z00_1101));
											}
											BgL_arg3845z00_1098 =
												MAKE_PAIR(BgL_arg3847z00_1100, BgL_bindingsz00_1081);
										}
										if (NULLP(BgL_nsetsz00_1096))
											{	/* Globalize/node.scm 502 */
												BgL_arg3846z00_1099 = BgL_setsz00_1082;
											}
										else
											{	/* Globalize/node.scm 502 */
												BgL_arg3846z00_1099 =
													MAKE_PAIR(BgL_nsetsz00_1096, BgL_setsz00_1082);
											}
										{
											obj_t BgL_setsz00_3550;

											obj_t BgL_bindingsz00_3549;

											obj_t BgL_ebindingsz00_3548;

											BgL_ebindingsz00_3548 = BgL_arg3844z00_1097;
											BgL_bindingsz00_3549 = BgL_arg3845z00_1098;
											BgL_setsz00_3550 = BgL_arg3846z00_1099;
											BgL_setsz00_1082 = BgL_setsz00_3550;
											BgL_bindingsz00_1081 = BgL_bindingsz00_3549;
											BgL_ebindingsz00_1080 = BgL_ebindingsz00_3548;
											goto BgL_zc3anonymousza33833ze3z83_1083;
										}
									}
								}
							}
						}
					}
			}
		}
	}



/* globalize-local-fun! */
	obj_t
		BGl_globaliza7ezd2localzd2funz12zb5zzglobaliza7e_nodeza7(BgL_localz00_bglt
		BgL_localz00_61, BgL_variablez00_bglt BgL_integratorz00_62)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 509 */
			{	/* Globalize/node.scm 512 */
				BgL_valuez00_bglt BgL_funz00_1108;

				{
					BgL_variablez00_bglt BgL_auxz00_3551;

					BgL_auxz00_3551 = (BgL_variablez00_bglt) (BgL_localz00_61);
					BgL_funz00_1108 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_3551))->BgL_valuez00);
				}
				{	/* Globalize/node.scm 512 */
					obj_t BgL_obodyz00_1109;

					{
						BgL_sfunz00_bglt BgL_auxz00_3554;

						BgL_auxz00_3554 = (BgL_sfunz00_bglt) (BgL_funz00_1108);
						BgL_obodyz00_1109 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3554))->BgL_bodyz00);
					}
					{	/* Globalize/node.scm 513 */

						if (((obj_t) (BgL_localz00_61) == (obj_t) (BgL_integratorz00_62)))
							{	/* Globalize/node.scm 515 */
								BgL_nodez00_bglt BgL_arg3855z00_1111;

								{	/* Globalize/node.scm 515 */
									BgL_nodez00_bglt BgL_res4142z00_2112;

									{	/* Globalize/node.scm 515 */
										BgL_nodez00_bglt BgL_nodez00_2085;

										BgL_nodez00_2085 = (BgL_nodez00_bglt) (BgL_obodyz00_1109);
										{	/* Globalize/node.scm 515 */
											obj_t BgL_method3734z00_2087;

											{	/* Globalize/node.scm 515 */
												BgL_objectz00_bglt BgL_objz00_2088;

												BgL_objz00_2088 =
													(BgL_objectz00_bglt) (BgL_nodez00_2085);
												{	/* Globalize/node.scm 515 */
													long BgL_objzd2classzd2numz00_2089;

													BgL_objzd2classzd2numz00_2089 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2088);
													{	/* Globalize/node.scm 515 */
														obj_t BgL_arg2643z00_2090;

														BgL_arg2643z00_2090 =
															PROCEDURE_REF
															(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
															(int) (((long) 1)));
														{	/* Globalize/node.scm 515 */
															obj_t BgL_arrayz00_2092;

															int BgL_offsetz00_2093;

															BgL_arrayz00_2092 = BgL_arg2643z00_2090;
															BgL_offsetz00_2093 =
																(int) (BgL_objzd2classzd2numz00_2089);
															{	/* Globalize/node.scm 515 */
																long BgL_offsetz00_2094;

																BgL_offsetz00_2094 =
																	((long) (BgL_offsetz00_2093) - OBJECT_TYPE);
																{	/* Globalize/node.scm 515 */
																	long BgL_modz00_2095;

																	{	/* Globalize/node.scm 515 */
																		int BgL_arg2645z00_2096;

																		BgL_arg2645z00_2096 = (int) (((long) 16));
																		{	/* Globalize/node.scm 515 */
																			long BgL_auxz00_3570;

																			BgL_auxz00_3570 =
																				(long) (BgL_arg2645z00_2096);
																			BgL_modz00_2095 =
																				(BgL_offsetz00_2094 / BgL_auxz00_3570);
																	}}
																	{	/* Globalize/node.scm 515 */
																		long BgL_restz00_2097;

																		{	/* Globalize/node.scm 515 */
																			int BgL_arg2644z00_2098;

																			BgL_arg2644z00_2098 = (int) (((long) 16));
																			{	/* Globalize/node.scm 515 */
																				long BgL_auxz00_3574;

																				BgL_auxz00_3574 =
																					(long) (BgL_arg2644z00_2098);
																				BgL_restz00_2097 =
																					(BgL_offsetz00_2094 %
																					BgL_auxz00_3574);
																		}}
																		{	/* Globalize/node.scm 515 */

																			BgL_method3734z00_2087 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2092,
																					(int) (BgL_modz00_2095)),
																				(int) (BgL_restz00_2097));
											}}}}}}}}
											BgL_res4142z00_2112 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3734z00_2087) (BgL_method3734z00_2087,
													(obj_t) (BgL_nodez00_2085),
													(obj_t) (BgL_integratorz00_62), BEOA));
									}}
									BgL_arg3855z00_1111 = BgL_res4142z00_2112;
								}
								{
									obj_t BgL_auxz00_3588;

									BgL_sfunz00_bglt BgL_auxz00_3586;

									BgL_auxz00_3588 = (obj_t) (BgL_arg3855z00_1111);
									BgL_auxz00_3586 = (BgL_sfunz00_bglt) (BgL_funz00_1108);
									return
										((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3586))->BgL_bodyz00) =
										((obj_t) BgL_auxz00_3588), BUNSPEC);
								}
							}
						else
							{	/* Globalize/node.scm 516 */
								obj_t BgL_celledz00_1112;

								{	/* Globalize/node.scm 516 */
									obj_t BgL_arg3865z00_1132;

									{
										BgL_sfunz00_bglt BgL_auxz00_3591;

										BgL_auxz00_3591 = (BgL_sfunz00_bglt) (BgL_funz00_1108);
										BgL_arg3865z00_1132 =
											(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3591))->BgL_argsz00);
									}
									BgL_celledz00_1112 =
										BGl_celledzd2bindingszd2zzglobaliza7e_nodeza7
										(BgL_arg3865z00_1132);
								}
								{
									obj_t BgL_l3729z00_1114;

									BgL_l3729z00_1114 = BgL_celledz00_1112;
								BgL_zc3anonymousza33856ze3z83_1115:
									if (PAIRP(BgL_l3729z00_1114))
										{	/* Globalize/node.scm 517 */
											{	/* Globalize/node.scm 518 */
												obj_t BgL_wze2bze2_1117;

												BgL_wze2bze2_1117 = CAR(BgL_l3729z00_1114);
												{	/* Globalize/node.scm 518 */
													obj_t BgL_arg3858z00_1118;

													obj_t BgL_arg3859z00_1119;

													BgL_arg3858z00_1118 = CAR(BgL_wze2bze2_1117);
													BgL_arg3859z00_1119 = CDR(BgL_wze2bze2_1117);
													{
														BgL_variablez00_bglt BgL_auxz00_3600;

														BgL_auxz00_3600 =
															(BgL_variablez00_bglt) (BgL_arg3858z00_1118);
														((((BgL_variablez00_bglt) CREF(BgL_auxz00_3600))->
																BgL_fastzd2alphazd2) =
															((obj_t) BgL_arg3859z00_1119), BUNSPEC);
													}
												}
											}
											{
												obj_t BgL_l3729z00_3603;

												BgL_l3729z00_3603 = CDR(BgL_l3729z00_1114);
												BgL_l3729z00_1114 = BgL_l3729z00_3603;
												goto BgL_zc3anonymousza33856ze3z83_1115;
											}
										}
									else
										{	/* Globalize/node.scm 517 */
											((bool_t) 1);
										}
								}
								{	/* Globalize/node.scm 520 */
									BgL_nodez00_bglt BgL_nbody1z00_1122;

									{	/* Globalize/node.scm 520 */
										BgL_nodez00_bglt BgL_res4145z00_2150;

										{	/* Globalize/node.scm 520 */
											BgL_nodez00_bglt BgL_nodez00_2123;

											BgL_nodez00_2123 = (BgL_nodez00_bglt) (BgL_obodyz00_1109);
											{	/* Globalize/node.scm 520 */
												obj_t BgL_method3734z00_2125;

												{	/* Globalize/node.scm 520 */
													BgL_objectz00_bglt BgL_objz00_2126;

													BgL_objz00_2126 =
														(BgL_objectz00_bglt) (BgL_nodez00_2123);
													{	/* Globalize/node.scm 520 */
														long BgL_objzd2classzd2numz00_2127;

														BgL_objzd2classzd2numz00_2127 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2126);
														{	/* Globalize/node.scm 520 */
															obj_t BgL_arg2643z00_2128;

															BgL_arg2643z00_2128 =
																PROCEDURE_REF
																(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
																(int) (((long) 1)));
															{	/* Globalize/node.scm 520 */
																obj_t BgL_arrayz00_2130;

																int BgL_offsetz00_2131;

																BgL_arrayz00_2130 = BgL_arg2643z00_2128;
																BgL_offsetz00_2131 =
																	(int) (BgL_objzd2classzd2numz00_2127);
																{	/* Globalize/node.scm 520 */
																	long BgL_offsetz00_2132;

																	BgL_offsetz00_2132 =
																		((long) (BgL_offsetz00_2131) - OBJECT_TYPE);
																	{	/* Globalize/node.scm 520 */
																		long BgL_modz00_2133;

																		{	/* Globalize/node.scm 520 */
																			int BgL_arg2645z00_2134;

																			BgL_arg2645z00_2134 = (int) (((long) 16));
																			{	/* Globalize/node.scm 520 */
																				long BgL_auxz00_3614;

																				BgL_auxz00_3614 =
																					(long) (BgL_arg2645z00_2134);
																				BgL_modz00_2133 =
																					(BgL_offsetz00_2132 /
																					BgL_auxz00_3614);
																		}}
																		{	/* Globalize/node.scm 520 */
																			long BgL_restz00_2135;

																			{	/* Globalize/node.scm 520 */
																				int BgL_arg2644z00_2136;

																				BgL_arg2644z00_2136 =
																					(int) (((long) 16));
																				{	/* Globalize/node.scm 520 */
																					long BgL_auxz00_3618;

																					BgL_auxz00_3618 =
																						(long) (BgL_arg2644z00_2136);
																					BgL_restz00_2135 =
																						(BgL_offsetz00_2132 %
																						BgL_auxz00_3618);
																			}}
																			{	/* Globalize/node.scm 520 */

																				BgL_method3734z00_2125 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2130,
																						(int) (BgL_modz00_2133)),
																					(int) (BgL_restz00_2135));
												}}}}}}}}
												BgL_res4145z00_2150 =
													(BgL_nodez00_bglt) (PROCEDURE_ENTRY
													(BgL_method3734z00_2125) (BgL_method3734z00_2125,
														(obj_t) (BgL_nodez00_2123),
														(obj_t) (BgL_integratorz00_62), BEOA));
										}}
										BgL_nbody1z00_1122 = BgL_res4145z00_2150;
									}
									{	/* Globalize/node.scm 520 */
										obj_t BgL_nbody2z00_1123;

										BgL_nbody2z00_1123 =
											BGl_cellzd2formalszd2zzglobaliza7e_nodeza7
											(BgL_celledz00_1112, BgL_nbody1z00_1122);
										{	/* Globalize/node.scm 521 */

											{
												obj_t BgL_l3731z00_1125;

												BgL_l3731z00_1125 = BgL_celledz00_1112;
											BgL_zc3anonymousza33861ze3z83_1126:
												if (PAIRP(BgL_l3731z00_1125))
													{	/* Globalize/node.scm 522 */
														{	/* Globalize/node.scm 523 */
															obj_t BgL_wze2bze2_1128;

															BgL_wze2bze2_1128 = CAR(BgL_l3731z00_1125);
															{	/* Globalize/node.scm 523 */
																obj_t BgL_arg3863z00_1129;

																BgL_arg3863z00_1129 = CAR(BgL_wze2bze2_1128);
																{
																	BgL_variablez00_bglt BgL_auxz00_3635;

																	BgL_auxz00_3635 =
																		(BgL_variablez00_bglt)
																		(BgL_arg3863z00_1129);
																	((((BgL_variablez00_bglt)
																				CREF(BgL_auxz00_3635))->
																			BgL_fastzd2alphazd2) =
																		((obj_t) BUNSPEC), BUNSPEC);
																}
															}
														}
														{
															obj_t BgL_l3731z00_3638;

															BgL_l3731z00_3638 = CDR(BgL_l3731z00_1125);
															BgL_l3731z00_1125 = BgL_l3731z00_3638;
															goto BgL_zc3anonymousza33861ze3z83_1126;
														}
													}
												else
													{	/* Globalize/node.scm 522 */
														((bool_t) 1);
													}
											}
											{
												BgL_sfunz00_bglt BgL_auxz00_3640;

												BgL_auxz00_3640 = (BgL_sfunz00_bglt) (BgL_funz00_1108);
												return
													((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3640))->
														BgL_bodyz00) =
													((obj_t) BgL_nbody2z00_1123), BUNSPEC);
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



/* a-make-procedure */
	BgL_appz00_bglt
		BGl_azd2makezd2procedurez00zzglobaliza7e_nodeza7(BgL_localz00_bglt
		BgL_localz00_63)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 530 */
			{	/* Globalize/node.scm 531 */
				BgL_valuez00_bglt BgL_funz00_1133;

				{
					BgL_variablez00_bglt BgL_auxz00_3643;

					BgL_auxz00_3643 = (BgL_variablez00_bglt) (BgL_localz00_63);
					BgL_funz00_1133 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_3643))->BgL_valuez00);
				}
				{	/* Globalize/node.scm 531 */
					long BgL_arityz00_1134;

					{
						BgL_funz00_bglt BgL_auxz00_3646;

						BgL_auxz00_3646 = (BgL_funz00_bglt) (BgL_funz00_1133);
						BgL_arityz00_1134 =
							(((BgL_funz00_bglt) CREF(BgL_auxz00_3646))->BgL_arityz00);
					}
					{	/* Globalize/node.scm 532 */
						obj_t BgL_kapturedz00_1135;

						{	/* Globalize/node.scm 533 */
							BgL_sfunzf2ginfozf2_bglt BgL_obj3367z00_2162;

							{	/* Globalize/node.scm 533 */
								BgL_variablez00_bglt BgL_obj1611z00_2161;

								BgL_obj1611z00_2161 = (BgL_variablez00_bglt) (BgL_localz00_63);
								BgL_obj3367z00_2162 =
									(BgL_sfunzf2ginfozf2_bglt) (
									(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_2161))->
										BgL_valuez00));
							}
							{
								obj_t BgL_auxz00_3652;

								{	/* Globalize/node.scm 533 */
									BgL_objectz00_bglt BgL_auxz00_3653;

									BgL_auxz00_3653 = (BgL_objectz00_bglt) (BgL_obj3367z00_2162);
									BgL_auxz00_3652 = BGL_OBJECT_WIDENING(BgL_auxz00_3653);
								}
								BgL_kapturedz00_1135 =
									(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3652))->
									BgL_kapturedz00);
						}}
						{	/* Globalize/node.scm 534 */
							obj_t BgL_makezd2pzd2_1137;

							if ((BgL_arityz00_1134 < ((long) 0)))
								{	/* Globalize/node.scm 536 */
									BgL_makezd2pzd2_1137 = CNST_TABLE_REF(((long) 3));
								}
							else
								{	/* Globalize/node.scm 536 */
									BgL_makezd2pzd2_1137 = CNST_TABLE_REF(((long) 4));
								}
							{	/* Globalize/node.scm 535 */

								{	/* Globalize/node.scm 540 */
									BgL_varz00_bglt BgL_arg3867z00_1139;

									obj_t BgL_arg3868z00_1140;

									{	/* Globalize/node.scm 546 */
										obj_t BgL_arg3869z00_1141;

										BgL_arg3869z00_1141 =
											BGl_findzd2globalzf2modulez20zzast_envz00
											(BgL_makezd2pzd2_1137, CNST_TABLE_REF(((long) 5)));
										BgL_arg3867z00_1139 =
											BGl_makezd2varzd2zzast_nodez00(BUNSPEC,
											(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00),
											(BgL_variablez00_bglt) (BgL_arg3869z00_1141));
									}
									{	/* Globalize/node.scm 550 */
										BgL_varz00_bglt BgL_arg3870z00_1142;

										BgL_atomz00_bglt BgL_arg3871z00_1143;

										BgL_atomz00_bglt BgL_arg3872z00_1144;

										{	/* Globalize/node.scm 550 */
											BgL_globalz00_bglt BgL_arg3876z00_1148;

											BgL_arg3876z00_1148 =
												BGl_thezd2globalzd2zzglobaliza7e_localzd2ze3globalz96
												(BgL_localz00_63);
											BgL_arg3870z00_1142 =
												BGl_makezd2varzd2zzast_nodez00(BUNSPEC,
												(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00),
												(BgL_variablez00_bglt) (BgL_arg3876z00_1148));
										}
										BgL_arg3871z00_1143 =
											BGl_makezd2atomzd2zzast_nodez00(BUNSPEC,
											(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00),
											BINT(BgL_arityz00_1134));
										{	/* Globalize/node.scm 558 */
											long BgL_arg3877z00_1149;

											BgL_arg3877z00_1149 =
												bgl_list_length(BgL_kapturedz00_1135);
											BgL_arg3872z00_1144 =
												BGl_makezd2atomzd2zzast_nodez00(BUNSPEC,
												(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00),
												BINT(BgL_arg3877z00_1149));
										}
										{	/* Globalize/node.scm 547 */
											obj_t BgL_list3873z00_1145;

											{	/* Globalize/node.scm 547 */
												obj_t BgL_arg3874z00_1146;

												{	/* Globalize/node.scm 547 */
													obj_t BgL_arg3875z00_1147;

													BgL_arg3875z00_1147 =
														MAKE_PAIR((obj_t) (BgL_arg3872z00_1144), BNIL);
													BgL_arg3874z00_1146 =
														MAKE_PAIR(
														(obj_t) (BgL_arg3871z00_1143), BgL_arg3875z00_1147);
												}
												BgL_list3873z00_1145 =
													MAKE_PAIR(
													(obj_t) (BgL_arg3870z00_1142), BgL_arg3874z00_1146);
											}
											BgL_arg3868z00_1140 = BgL_list3873z00_1145;
									}}
									return
										BGl_makezd2appzd2zzast_nodez00(BUNSPEC,
										(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00), BUNSPEC,
										BINT(((long) -1)), BgL_arg3867z00_1139,
										BgL_arg3868z00_1140);
		}}}}}}}
	}



/* make-sets */
	obj_t BGl_makezd2setszd2zzglobaliza7e_nodeza7(obj_t BgL_newz00_64,
		obj_t BgL_locz00_65, obj_t BgL_kapturedz00_66,
		BgL_variablez00_bglt BgL_integratorz00_67)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 563 */
			if (NULLP(BgL_kapturedz00_66))
				{	/* Globalize/node.scm 564 */
					return BNIL;
				}
			else
				{	/* Globalize/node.scm 566 */
					obj_t BgL_arg3882z00_1154;

					{
						obj_t BgL_kapturedz00_1157;

						long BgL_indicez00_1158;

						obj_t BgL_setsz00_1159;

						BgL_kapturedz00_1157 = BgL_kapturedz00_66;
						BgL_indicez00_1158 = ((long) 0);
						BgL_setsz00_1159 = BNIL;
					BgL_zc3anonymousza33883ze3z83_1160:
						if (NULLP(BgL_kapturedz00_1157))
							{	/* Globalize/node.scm 572 */
								BgL_arg3882z00_1154 = bgl_reverse_bang(BgL_setsz00_1159);
							}
						else
							{	/* Globalize/node.scm 574 */
								obj_t BgL_arg3885z00_1162;

								long BgL_arg3886z00_1163;

								obj_t BgL_arg3887z00_1164;

								BgL_arg3885z00_1162 = CDR(BgL_kapturedz00_1157);
								BgL_arg3886z00_1163 = (BgL_indicez00_1158 + ((long) 1));
								{	/* Globalize/node.scm 579 */
									BgL_appz00_bglt BgL_arg3888z00_1165;

									BgL_arg3888z00_1165 =
										BGl_azd2procedurezd2setz12z12zzglobaliza7e_nodeza7
										(BgL_locz00_65, BgL_newz00_64, BgL_indicez00_1158,
										CAR(BgL_kapturedz00_1157), BgL_integratorz00_67);
									BgL_arg3887z00_1164 =
										MAKE_PAIR((obj_t) (BgL_arg3888z00_1165), BgL_setsz00_1159);
								}
								{
									obj_t BgL_setsz00_3699;

									long BgL_indicez00_3698;

									obj_t BgL_kapturedz00_3697;

									BgL_kapturedz00_3697 = BgL_arg3885z00_1162;
									BgL_indicez00_3698 = BgL_arg3886z00_1163;
									BgL_setsz00_3699 = BgL_arg3887z00_1164;
									BgL_setsz00_1159 = BgL_setsz00_3699;
									BgL_indicez00_1158 = BgL_indicez00_3698;
									BgL_kapturedz00_1157 = BgL_kapturedz00_3697;
									goto BgL_zc3anonymousza33883ze3z83_1160;
								}
							}
					}
					return
						(obj_t) (BGl_makezd2sequencezd2zzast_nodez00(BgL_locz00_65,
							(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00), BUNSPEC,
							BINT(((long) -1)), BgL_arg3882z00_1154));
		}}
	}



/* a-procedure-set! */
	BgL_appz00_bglt BGl_azd2procedurezd2setz12z12zzglobaliza7e_nodeza7(obj_t
		BgL_locz00_68, obj_t BgL_newz00_69, long BgL_indicez00_70,
		obj_t BgL_kapturedz00_71, BgL_variablez00_bglt BgL_integratorz00_72)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 586 */
			{
				obj_t BgL_varz00_1180;

				{	/* Globalize/node.scm 592 */
					BgL_varz00_bglt BgL_arg3891z00_1170;

					obj_t BgL_arg3892z00_1171;

					{	/* Globalize/node.scm 598 */
						obj_t BgL_arg3893z00_1172;

						BgL_arg3893z00_1172 =
							BGl_findzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
									6)), CNST_TABLE_REF(((long) 5)));
						BgL_arg3891z00_1170 =
							BGl_makezd2varzd2zzast_nodez00(BgL_locz00_68,
							(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00),
							(BgL_variablez00_bglt) (BgL_arg3893z00_1172));
					}
					{	/* Globalize/node.scm 599 */
						BgL_varz00_bglt BgL_arg3894z00_1173;

						BgL_atomz00_bglt BgL_arg3895z00_1174;

						BgL_varz00_bglt BgL_arg3896z00_1175;

						BgL_arg3894z00_1173 =
							BGl_makezd2varzd2zzast_nodez00(BgL_locz00_68,
							(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00),
							(BgL_variablez00_bglt) (BgL_newz00_69));
						BgL_arg3895z00_1174 =
							BGl_makezd2atomzd2zzast_nodez00(BgL_locz00_68,
							(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00),
							BINT(BgL_indicez00_70));
						{	/* Globalize/node.scm 610 */
							obj_t BgL_arg3900z00_1179;

							BgL_varz00_1180 = BgL_kapturedz00_71;
						BgL_zc3anonymousza33901ze3z83_1181:
							{	/* Globalize/node.scm 588 */
								obj_t BgL_alphaz00_1182;

								{
									BgL_variablez00_bglt BgL_auxz00_3716;

									BgL_auxz00_3716 = (BgL_variablez00_bglt) (BgL_varz00_1180);
									BgL_alphaz00_1182 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_3716))->
										BgL_fastzd2alphazd2);
								}
								if (BGl_iszd2azf3z21zz__objectz00(BgL_alphaz00_1182,
										BGl_localz00zzast_varz00))
									{
										obj_t BgL_varz00_3721;

										BgL_varz00_3721 = BgL_alphaz00_1182;
										BgL_varz00_1180 = BgL_varz00_3721;
										goto BgL_zc3anonymousza33901ze3z83_1181;
									}
								else
									{	/* Globalize/node.scm 589 */
										BgL_arg3900z00_1179 = BgL_varz00_1180;
									}
							}
							BgL_arg3896z00_1175 =
								BGl_makezd2varzd2zzast_nodez00(BgL_locz00_68,
								(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00),
								(BgL_variablez00_bglt) (BgL_arg3900z00_1179));
						}
						{	/* Globalize/node.scm 599 */
							obj_t BgL_list3897z00_1176;

							{	/* Globalize/node.scm 599 */
								obj_t BgL_arg3898z00_1177;

								{	/* Globalize/node.scm 599 */
									obj_t BgL_arg3899z00_1178;

									BgL_arg3899z00_1178 =
										MAKE_PAIR((obj_t) (BgL_arg3896z00_1175), BNIL);
									BgL_arg3898z00_1177 =
										MAKE_PAIR(
										(obj_t) (BgL_arg3895z00_1174), BgL_arg3899z00_1178);
								}
								BgL_list3897z00_1176 =
									MAKE_PAIR((obj_t) (BgL_arg3894z00_1173), BgL_arg3898z00_1177);
							}
							BgL_arg3892z00_1171 = BgL_list3897z00_1176;
						}
					}
					return
						BGl_makezd2appzd2zzast_nodez00(BgL_locz00_68,
						(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00), BUNSPEC,
						BINT(((long) -1)), BgL_arg3891z00_1170, BgL_arg3892z00_1171);
		}}}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_nodeza7()
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 17 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
				BGl_gloz12zd2default3733zd2envz12zzglobaliza7e_nodeza7,
				BGl_nodez00zzast_nodez00, BGl_string4232z00zzglobaliza7e_nodeza7);
		}
	}



/* glo! */
	BgL_nodez00_bglt BGl_gloz12z12zzglobaliza7e_nodeza7(BgL_nodez00_bglt
		BgL_nodez00_10, BgL_variablez00_bglt BgL_integratorz00_11)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 126 */
			{	/* Globalize/node.scm 126 */
				obj_t BgL_method3734z00_2177;

				{	/* Globalize/node.scm 126 */
					BgL_objectz00_bglt BgL_objz00_2178;

					BgL_objz00_2178 = (BgL_objectz00_bglt) (BgL_nodez00_10);
					{	/* Globalize/node.scm 126 */
						long BgL_objzd2classzd2numz00_2179;

						BgL_objzd2classzd2numz00_2179 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2178);
						{	/* Globalize/node.scm 126 */
							obj_t BgL_arg2643z00_2180;

							BgL_arg2643z00_2180 =
								PROCEDURE_REF(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
								(int) (((long) 1)));
							{	/* Globalize/node.scm 126 */
								obj_t BgL_arrayz00_2182;

								int BgL_offsetz00_2183;

								BgL_arrayz00_2182 = BgL_arg2643z00_2180;
								BgL_offsetz00_2183 = (int) (BgL_objzd2classzd2numz00_2179);
								{	/* Globalize/node.scm 126 */
									long BgL_offsetz00_2184;

									BgL_offsetz00_2184 =
										((long) (BgL_offsetz00_2183) - OBJECT_TYPE);
									{	/* Globalize/node.scm 126 */
										long BgL_modz00_2185;

										{	/* Globalize/node.scm 126 */
											int BgL_arg2645z00_2186;

											BgL_arg2645z00_2186 = (int) (((long) 16));
											{	/* Globalize/node.scm 126 */
												long BgL_auxz00_3743;

												BgL_auxz00_3743 = (long) (BgL_arg2645z00_2186);
												BgL_modz00_2185 =
													(BgL_offsetz00_2184 / BgL_auxz00_3743);
										}}
										{	/* Globalize/node.scm 126 */
											long BgL_restz00_2187;

											{	/* Globalize/node.scm 126 */
												int BgL_arg2644z00_2188;

												BgL_arg2644z00_2188 = (int) (((long) 16));
												{	/* Globalize/node.scm 126 */
													long BgL_auxz00_3747;

													BgL_auxz00_3747 = (long) (BgL_arg2644z00_2188);
													BgL_restz00_2187 =
														(BgL_offsetz00_2184 % BgL_auxz00_3747);
											}}
											{	/* Globalize/node.scm 126 */

												BgL_method3734z00_2177 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2182,
														(int) (BgL_modz00_2185)), (int) (BgL_restz00_2187));
				}}}}}}}}
				return
					(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3734z00_2177)
					(BgL_method3734z00_2177, (obj_t) (BgL_nodez00_10),
						(obj_t) (BgL_integratorz00_11), BEOA));
			}
		}
	}



/* _glo! */
	obj_t BGl__gloz12z12zzglobaliza7e_nodeza7(obj_t BgL_envz00_3166,
		obj_t BgL_nodez00_3167, obj_t BgL_integratorz00_3168)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 126 */
			return
				(obj_t) (BGl_gloz12z12zzglobaliza7e_nodeza7(
					(BgL_nodez00_bglt) (BgL_nodez00_3167),
					(BgL_variablez00_bglt) (BgL_integratorz00_3168)));
		}
	}



/* glo!-default3733 */
	BgL_nodez00_bglt
		BGl_gloz12zd2default3733zc0zzglobaliza7e_nodeza7(BgL_nodez00_bglt
		BgL_nodez00_12, BgL_variablez00_bglt BgL_integratorz00_13)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 17 */
			return
				(BgL_nodez00_bglt) (BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 7)),
					BGl_string4233z00zzglobaliza7e_nodeza7, (obj_t) (BgL_nodez00_12)));
		}
	}



/* _glo!-default3733 */
	obj_t BGl__gloz12zd2default3733zc0zzglobaliza7e_nodeza7(obj_t BgL_envz00_3169,
		obj_t BgL_nodez00_3170, obj_t BgL_integratorz00_3171)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 17 */
			return
				(obj_t) (BGl_gloz12zd2default3733zc0zzglobaliza7e_nodeza7(
					(BgL_nodez00_bglt) (BgL_nodez00_3170),
					(BgL_variablez00_bglt) (BgL_integratorz00_3171)));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_nodeza7()
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 17 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_atomz00zzast_nodez00,
				BGl_proc4234z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_kwotez00zzast_nodez00,
				BGl_proc4235z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_varz00zzast_nodez00,
				BGl_proc4236z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_closurez00zzast_nodez00,
				BGl_proc4237z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_sequencez00zzast_nodez00,
				BGl_proc4238z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_appz00zzast_nodez00,
				BGl_proc4239z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc4240z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_funcallz00zzast_nodez00,
				BGl_proc4241z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_externz00zzast_nodez00,
				BGl_proc4242z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_castz00zzast_nodez00,
				BGl_proc4243z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_setqz00zzast_nodez00,
				BGl_proc4244z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
				BGl_conditionalz00zzast_nodez00, BGl_proc4245z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_failz00zzast_nodez00,
				BGl_proc4246z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7, BGl_selectz00zzast_nodez00,
				BGl_proc4247z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc4248z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc4249z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc4250z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc4251z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc4252z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc4253z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc4254z00zzglobaliza7e_nodeza7,
				BGl_string4232z00zzglobaliza7e_nodeza7);
		}
	}



/* glo!-box-set!3777 */
	obj_t BGl_gloz12zd2boxzd2setz123777z00zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3193, obj_t BgL_nodez00_3194, obj_t BgL_integratorz00_3195)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 455 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1935;

				obj_t BgL_integratorz00_1936;

				{	/* Globalize/node.scm 456 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_3792;

					BgL_nodez00_1935 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_3194);
					BgL_integratorz00_1936 = BgL_integratorz00_3195;
					{	/* Globalize/node.scm 457 */
						BgL_nodez00_bglt BgL_arg4128z00_1940;

						{	/* Globalize/node.scm 457 */
							BgL_varz00_bglt BgL_arg4129z00_1941;

							BgL_arg4129z00_1941 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1935))->
								BgL_varz00);
							{	/* Globalize/node.scm 457 */
								BgL_nodez00_bglt BgL_res4228z00_3128;

								{	/* Globalize/node.scm 457 */
									BgL_nodez00_bglt BgL_nodez00_3101;

									BgL_variablez00_bglt BgL_integratorz00_3102;

									BgL_nodez00_3101 = (BgL_nodez00_bglt) (BgL_arg4129z00_1941);
									BgL_integratorz00_3102 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1936);
									{	/* Globalize/node.scm 457 */
										obj_t BgL_method3734z00_3103;

										{	/* Globalize/node.scm 457 */
											BgL_objectz00_bglt BgL_objz00_3104;

											BgL_objz00_3104 = (BgL_objectz00_bglt) (BgL_nodez00_3101);
											{	/* Globalize/node.scm 457 */
												long BgL_objzd2classzd2numz00_3105;

												BgL_objzd2classzd2numz00_3105 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3104);
												{	/* Globalize/node.scm 457 */
													obj_t BgL_arg2643z00_3106;

													BgL_arg2643z00_3106 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
														(int) (((long) 1)));
													{	/* Globalize/node.scm 457 */
														obj_t BgL_arrayz00_3108;

														int BgL_offsetz00_3109;

														BgL_arrayz00_3108 = BgL_arg2643z00_3106;
														BgL_offsetz00_3109 =
															(int) (BgL_objzd2classzd2numz00_3105);
														{	/* Globalize/node.scm 457 */
															long BgL_offsetz00_3110;

															BgL_offsetz00_3110 =
																((long) (BgL_offsetz00_3109) - OBJECT_TYPE);
															{	/* Globalize/node.scm 457 */
																long BgL_modz00_3111;

																{	/* Globalize/node.scm 457 */
																	int BgL_arg2645z00_3112;

																	BgL_arg2645z00_3112 = (int) (((long) 16));
																	{	/* Globalize/node.scm 457 */
																		long BgL_auxz00_3804;

																		BgL_auxz00_3804 =
																			(long) (BgL_arg2645z00_3112);
																		BgL_modz00_3111 =
																			(BgL_offsetz00_3110 / BgL_auxz00_3804);
																}}
																{	/* Globalize/node.scm 457 */
																	long BgL_restz00_3113;

																	{	/* Globalize/node.scm 457 */
																		int BgL_arg2644z00_3114;

																		BgL_arg2644z00_3114 = (int) (((long) 16));
																		{	/* Globalize/node.scm 457 */
																			long BgL_auxz00_3808;

																			BgL_auxz00_3808 =
																				(long) (BgL_arg2644z00_3114);
																			BgL_restz00_3113 =
																				(BgL_offsetz00_3110 % BgL_auxz00_3808);
																	}}
																	{	/* Globalize/node.scm 457 */

																		BgL_method3734z00_3103 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3108,
																				(int) (BgL_modz00_3111)),
																			(int) (BgL_restz00_3113));
										}}}}}}}}
										BgL_res4228z00_3128 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3734z00_3103) (BgL_method3734z00_3103,
												(obj_t) (BgL_nodez00_3101),
												(obj_t) (BgL_integratorz00_3102), BEOA));
								}}
								BgL_arg4128z00_1940 = BgL_res4228z00_3128;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3820;

							BgL_auxz00_3820 = (BgL_varz00_bglt) (BgL_arg4128z00_1940);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1935))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_3820), BUNSPEC);
					}}
					{	/* Globalize/node.scm 458 */
						BgL_nodez00_bglt BgL_arg4130z00_1942;

						{	/* Globalize/node.scm 458 */
							BgL_nodez00_bglt BgL_arg4131z00_1943;

							BgL_arg4131z00_1943 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1935))->
								BgL_valuez00);
							{	/* Globalize/node.scm 458 */
								BgL_nodez00_bglt BgL_res4231z00_3159;

								{	/* Globalize/node.scm 458 */
									BgL_variablez00_bglt BgL_integratorz00_3133;

									BgL_integratorz00_3133 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1936);
									{	/* Globalize/node.scm 458 */
										obj_t BgL_method3734z00_3134;

										{	/* Globalize/node.scm 458 */
											BgL_objectz00_bglt BgL_objz00_3135;

											BgL_objz00_3135 =
												(BgL_objectz00_bglt) (BgL_arg4131z00_1943);
											{	/* Globalize/node.scm 458 */
												long BgL_objzd2classzd2numz00_3136;

												BgL_objzd2classzd2numz00_3136 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3135);
												{	/* Globalize/node.scm 458 */
													obj_t BgL_arg2643z00_3137;

													BgL_arg2643z00_3137 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
														(int) (((long) 1)));
													{	/* Globalize/node.scm 458 */
														obj_t BgL_arrayz00_3139;

														int BgL_offsetz00_3140;

														BgL_arrayz00_3139 = BgL_arg2643z00_3137;
														BgL_offsetz00_3140 =
															(int) (BgL_objzd2classzd2numz00_3136);
														{	/* Globalize/node.scm 458 */
															long BgL_offsetz00_3141;

															BgL_offsetz00_3141 =
																((long) (BgL_offsetz00_3140) - OBJECT_TYPE);
															{	/* Globalize/node.scm 458 */
																long BgL_modz00_3142;

																{	/* Globalize/node.scm 458 */
																	int BgL_arg2645z00_3143;

																	BgL_arg2645z00_3143 = (int) (((long) 16));
																	{	/* Globalize/node.scm 458 */
																		long BgL_auxz00_3833;

																		BgL_auxz00_3833 =
																			(long) (BgL_arg2645z00_3143);
																		BgL_modz00_3142 =
																			(BgL_offsetz00_3141 / BgL_auxz00_3833);
																}}
																{	/* Globalize/node.scm 458 */
																	long BgL_restz00_3144;

																	{	/* Globalize/node.scm 458 */
																		int BgL_arg2644z00_3145;

																		BgL_arg2644z00_3145 = (int) (((long) 16));
																		{	/* Globalize/node.scm 458 */
																			long BgL_auxz00_3837;

																			BgL_auxz00_3837 =
																				(long) (BgL_arg2644z00_3145);
																			BgL_restz00_3144 =
																				(BgL_offsetz00_3141 % BgL_auxz00_3837);
																	}}
																	{	/* Globalize/node.scm 458 */

																		BgL_method3734z00_3134 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3139,
																				(int) (BgL_modz00_3142)),
																			(int) (BgL_restz00_3144));
										}}}}}}}}
										BgL_res4231z00_3159 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3734z00_3134) (BgL_method3734z00_3134,
												(obj_t) (BgL_arg4131z00_1943),
												(obj_t) (BgL_integratorz00_3133), BEOA));
								}}
								BgL_arg4130z00_1942 = BgL_res4231z00_3159;
						}}
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1935))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg4130z00_1942), BUNSPEC);
					}
					BgL_auxz00_3792 = BgL_nodez00_1935;
					return (obj_t) (BgL_auxz00_3792);
				}
			}
		}
	}



/* glo!-box-ref3775 */
	obj_t BGl_gloz12zd2boxzd2ref3775z12zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3196, obj_t BgL_nodez00_3197, obj_t BgL_integratorz00_3198)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 447 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1926;

				obj_t BgL_integratorz00_1927;

				{	/* Globalize/node.scm 448 */
					BgL_boxzd2refzd2_bglt BgL_auxz00_3852;

					BgL_nodez00_1926 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_3197);
					BgL_integratorz00_1927 = BgL_integratorz00_3198;
					{	/* Globalize/node.scm 448 */
						BgL_nodez00_bglt BgL_arg4125z00_3067;

						{	/* Globalize/node.scm 448 */
							BgL_varz00_bglt BgL_arg4126z00_3068;

							BgL_arg4126z00_3068 =
								(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1926))->BgL_varz00);
							{	/* Globalize/node.scm 448 */
								BgL_nodez00_bglt BgL_res4225z00_3097;

								{	/* Globalize/node.scm 448 */
									BgL_nodez00_bglt BgL_nodez00_3070;

									BgL_variablez00_bglt BgL_integratorz00_3071;

									BgL_nodez00_3070 = (BgL_nodez00_bglt) (BgL_arg4126z00_3068);
									BgL_integratorz00_3071 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1927);
									{	/* Globalize/node.scm 448 */
										obj_t BgL_method3734z00_3072;

										{	/* Globalize/node.scm 448 */
											BgL_objectz00_bglt BgL_objz00_3073;

											BgL_objz00_3073 = (BgL_objectz00_bglt) (BgL_nodez00_3070);
											{	/* Globalize/node.scm 448 */
												long BgL_objzd2classzd2numz00_3074;

												BgL_objzd2classzd2numz00_3074 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3073);
												{	/* Globalize/node.scm 448 */
													obj_t BgL_arg2643z00_3075;

													BgL_arg2643z00_3075 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
														(int) (((long) 1)));
													{	/* Globalize/node.scm 448 */
														obj_t BgL_arrayz00_3077;

														int BgL_offsetz00_3078;

														BgL_arrayz00_3077 = BgL_arg2643z00_3075;
														BgL_offsetz00_3078 =
															(int) (BgL_objzd2classzd2numz00_3074);
														{	/* Globalize/node.scm 448 */
															long BgL_offsetz00_3079;

															BgL_offsetz00_3079 =
																((long) (BgL_offsetz00_3078) - OBJECT_TYPE);
															{	/* Globalize/node.scm 448 */
																long BgL_modz00_3080;

																{	/* Globalize/node.scm 448 */
																	int BgL_arg2645z00_3081;

																	BgL_arg2645z00_3081 = (int) (((long) 16));
																	{	/* Globalize/node.scm 448 */
																		long BgL_auxz00_3864;

																		BgL_auxz00_3864 =
																			(long) (BgL_arg2645z00_3081);
																		BgL_modz00_3080 =
																			(BgL_offsetz00_3079 / BgL_auxz00_3864);
																}}
																{	/* Globalize/node.scm 448 */
																	long BgL_restz00_3082;

																	{	/* Globalize/node.scm 448 */
																		int BgL_arg2644z00_3083;

																		BgL_arg2644z00_3083 = (int) (((long) 16));
																		{	/* Globalize/node.scm 448 */
																			long BgL_auxz00_3868;

																			BgL_auxz00_3868 =
																				(long) (BgL_arg2644z00_3083);
																			BgL_restz00_3082 =
																				(BgL_offsetz00_3079 % BgL_auxz00_3868);
																	}}
																	{	/* Globalize/node.scm 448 */

																		BgL_method3734z00_3072 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3077,
																				(int) (BgL_modz00_3080)),
																			(int) (BgL_restz00_3082));
										}}}}}}}}
										BgL_res4225z00_3097 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3734z00_3072) (BgL_method3734z00_3072,
												(obj_t) (BgL_nodez00_3070),
												(obj_t) (BgL_integratorz00_3071), BEOA));
								}}
								BgL_arg4125z00_3067 = BgL_res4225z00_3097;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3880;

							BgL_auxz00_3880 = (BgL_varz00_bglt) (BgL_arg4125z00_3067);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1926))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_3880), BUNSPEC);
					}}
					BgL_auxz00_3852 = BgL_nodez00_1926;
					return (obj_t) (BgL_auxz00_3852);
				}
			}
		}
	}



/* glo!-make-box3773 */
	obj_t BGl_gloz12zd2makezd2box3773z12zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3199, obj_t BgL_nodez00_3200, obj_t BgL_integratorz00_3201)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 439 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1917;

				obj_t BgL_integratorz00_1918;

				{	/* Globalize/node.scm 440 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_3885;

					BgL_nodez00_1917 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_3200);
					BgL_integratorz00_1918 = BgL_integratorz00_3201;
					{	/* Globalize/node.scm 440 */
						BgL_nodez00_bglt BgL_arg4122z00_3033;

						{	/* Globalize/node.scm 440 */
							BgL_nodez00_bglt BgL_arg4123z00_3034;

							BgL_arg4123z00_3034 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1917))->
								BgL_valuez00);
							{	/* Globalize/node.scm 440 */
								BgL_nodez00_bglt BgL_res4222z00_3063;

								{	/* Globalize/node.scm 440 */
									BgL_variablez00_bglt BgL_integratorz00_3037;

									BgL_integratorz00_3037 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1918);
									{	/* Globalize/node.scm 440 */
										obj_t BgL_method3734z00_3038;

										{	/* Globalize/node.scm 440 */
											BgL_objectz00_bglt BgL_objz00_3039;

											BgL_objz00_3039 =
												(BgL_objectz00_bglt) (BgL_arg4123z00_3034);
											{	/* Globalize/node.scm 440 */
												long BgL_objzd2classzd2numz00_3040;

												BgL_objzd2classzd2numz00_3040 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3039);
												{	/* Globalize/node.scm 440 */
													obj_t BgL_arg2643z00_3041;

													BgL_arg2643z00_3041 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
														(int) (((long) 1)));
													{	/* Globalize/node.scm 440 */
														obj_t BgL_arrayz00_3043;

														int BgL_offsetz00_3044;

														BgL_arrayz00_3043 = BgL_arg2643z00_3041;
														BgL_offsetz00_3044 =
															(int) (BgL_objzd2classzd2numz00_3040);
														{	/* Globalize/node.scm 440 */
															long BgL_offsetz00_3045;

															BgL_offsetz00_3045 =
																((long) (BgL_offsetz00_3044) - OBJECT_TYPE);
															{	/* Globalize/node.scm 440 */
																long BgL_modz00_3046;

																{	/* Globalize/node.scm 440 */
																	int BgL_arg2645z00_3047;

																	BgL_arg2645z00_3047 = (int) (((long) 16));
																	{	/* Globalize/node.scm 440 */
																		long BgL_auxz00_3896;

																		BgL_auxz00_3896 =
																			(long) (BgL_arg2645z00_3047);
																		BgL_modz00_3046 =
																			(BgL_offsetz00_3045 / BgL_auxz00_3896);
																}}
																{	/* Globalize/node.scm 440 */
																	long BgL_restz00_3048;

																	{	/* Globalize/node.scm 440 */
																		int BgL_arg2644z00_3049;

																		BgL_arg2644z00_3049 = (int) (((long) 16));
																		{	/* Globalize/node.scm 440 */
																			long BgL_auxz00_3900;

																			BgL_auxz00_3900 =
																				(long) (BgL_arg2644z00_3049);
																			BgL_restz00_3048 =
																				(BgL_offsetz00_3045 % BgL_auxz00_3900);
																	}}
																	{	/* Globalize/node.scm 440 */

																		BgL_method3734z00_3038 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3043,
																				(int) (BgL_modz00_3046)),
																			(int) (BgL_restz00_3048));
										}}}}}}}}
										BgL_res4222z00_3063 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3734z00_3038) (BgL_method3734z00_3038,
												(obj_t) (BgL_arg4123z00_3034),
												(obj_t) (BgL_integratorz00_3037), BEOA));
								}}
								BgL_arg4122z00_3033 = BgL_res4222z00_3063;
						}}
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1917))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg4122z00_3033), BUNSPEC);
					}
					BgL_auxz00_3885 = BgL_nodez00_1917;
					return (obj_t) (BgL_auxz00_3885);
				}
			}
		}
	}



/* glo!-jump-ex-it3771 */
	obj_t BGl_gloz12zd2jumpzd2exzd2it3771zc0zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3202, obj_t BgL_nodez00_3203, obj_t BgL_integratorz00_3204)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 430 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1906;

				obj_t BgL_integratorz00_1907;

				{	/* Globalize/node.scm 431 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_3915;

					BgL_nodez00_1906 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_3203);
					BgL_integratorz00_1907 = BgL_integratorz00_3204;
					{	/* Globalize/node.scm 432 */
						BgL_nodez00_bglt BgL_arg4117z00_1911;

						{	/* Globalize/node.scm 432 */
							BgL_nodez00_bglt BgL_arg4118z00_1912;

							BgL_arg4118z00_1912 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1906))->
								BgL_exitz00);
							{	/* Globalize/node.scm 432 */
								BgL_nodez00_bglt BgL_res4216z00_2998;

								{	/* Globalize/node.scm 432 */
									BgL_variablez00_bglt BgL_integratorz00_2972;

									BgL_integratorz00_2972 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1907);
									{	/* Globalize/node.scm 432 */
										obj_t BgL_method3734z00_2973;

										{	/* Globalize/node.scm 432 */
											BgL_objectz00_bglt BgL_objz00_2974;

											BgL_objz00_2974 =
												(BgL_objectz00_bglt) (BgL_arg4118z00_1912);
											{	/* Globalize/node.scm 432 */
												long BgL_objzd2classzd2numz00_2975;

												BgL_objzd2classzd2numz00_2975 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2974);
												{	/* Globalize/node.scm 432 */
													obj_t BgL_arg2643z00_2976;

													BgL_arg2643z00_2976 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
														(int) (((long) 1)));
													{	/* Globalize/node.scm 432 */
														obj_t BgL_arrayz00_2978;

														int BgL_offsetz00_2979;

														BgL_arrayz00_2978 = BgL_arg2643z00_2976;
														BgL_offsetz00_2979 =
															(int) (BgL_objzd2classzd2numz00_2975);
														{	/* Globalize/node.scm 432 */
															long BgL_offsetz00_2980;

															BgL_offsetz00_2980 =
																((long) (BgL_offsetz00_2979) - OBJECT_TYPE);
															{	/* Globalize/node.scm 432 */
																long BgL_modz00_2981;

																{	/* Globalize/node.scm 432 */
																	int BgL_arg2645z00_2982;

																	BgL_arg2645z00_2982 = (int) (((long) 16));
																	{	/* Globalize/node.scm 432 */
																		long BgL_auxz00_3926;

																		BgL_auxz00_3926 =
																			(long) (BgL_arg2645z00_2982);
																		BgL_modz00_2981 =
																			(BgL_offsetz00_2980 / BgL_auxz00_3926);
																}}
																{	/* Globalize/node.scm 432 */
																	long BgL_restz00_2983;

																	{	/* Globalize/node.scm 432 */
																		int BgL_arg2644z00_2984;

																		BgL_arg2644z00_2984 = (int) (((long) 16));
																		{	/* Globalize/node.scm 432 */
																			long BgL_auxz00_3930;

																			BgL_auxz00_3930 =
																				(long) (BgL_arg2644z00_2984);
																			BgL_restz00_2983 =
																				(BgL_offsetz00_2980 % BgL_auxz00_3930);
																	}}
																	{	/* Globalize/node.scm 432 */

																		BgL_method3734z00_2973 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2978,
																				(int) (BgL_modz00_2981)),
																			(int) (BgL_restz00_2983));
										}}}}}}}}
										BgL_res4216z00_2998 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3734z00_2973) (BgL_method3734z00_2973,
												(obj_t) (BgL_arg4118z00_1912),
												(obj_t) (BgL_integratorz00_2972), BEOA));
								}}
								BgL_arg4117z00_1911 = BgL_res4216z00_2998;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1906))->
								BgL_exitz00) =
							((BgL_nodez00_bglt) BgL_arg4117z00_1911), BUNSPEC);
					}
					{	/* Globalize/node.scm 433 */
						BgL_nodez00_bglt BgL_arg4119z00_1913;

						{	/* Globalize/node.scm 433 */
							BgL_nodez00_bglt BgL_arg4120z00_1914;

							BgL_arg4120z00_1914 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1906))->
								BgL_valuez00);
							{	/* Globalize/node.scm 433 */
								BgL_nodez00_bglt BgL_res4219z00_3029;

								{	/* Globalize/node.scm 433 */
									BgL_variablez00_bglt BgL_integratorz00_3003;

									BgL_integratorz00_3003 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1907);
									{	/* Globalize/node.scm 433 */
										obj_t BgL_method3734z00_3004;

										{	/* Globalize/node.scm 433 */
											BgL_objectz00_bglt BgL_objz00_3005;

											BgL_objz00_3005 =
												(BgL_objectz00_bglt) (BgL_arg4120z00_1914);
											{	/* Globalize/node.scm 433 */
												long BgL_objzd2classzd2numz00_3006;

												BgL_objzd2classzd2numz00_3006 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3005);
												{	/* Globalize/node.scm 433 */
													obj_t BgL_arg2643z00_3007;

													BgL_arg2643z00_3007 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
														(int) (((long) 1)));
													{	/* Globalize/node.scm 433 */
														obj_t BgL_arrayz00_3009;

														int BgL_offsetz00_3010;

														BgL_arrayz00_3009 = BgL_arg2643z00_3007;
														BgL_offsetz00_3010 =
															(int) (BgL_objzd2classzd2numz00_3006);
														{	/* Globalize/node.scm 433 */
															long BgL_offsetz00_3011;

															BgL_offsetz00_3011 =
																((long) (BgL_offsetz00_3010) - OBJECT_TYPE);
															{	/* Globalize/node.scm 433 */
																long BgL_modz00_3012;

																{	/* Globalize/node.scm 433 */
																	int BgL_arg2645z00_3013;

																	BgL_arg2645z00_3013 = (int) (((long) 16));
																	{	/* Globalize/node.scm 433 */
																		long BgL_auxz00_3953;

																		BgL_auxz00_3953 =
																			(long) (BgL_arg2645z00_3013);
																		BgL_modz00_3012 =
																			(BgL_offsetz00_3011 / BgL_auxz00_3953);
																}}
																{	/* Globalize/node.scm 433 */
																	long BgL_restz00_3014;

																	{	/* Globalize/node.scm 433 */
																		int BgL_arg2644z00_3015;

																		BgL_arg2644z00_3015 = (int) (((long) 16));
																		{	/* Globalize/node.scm 433 */
																			long BgL_auxz00_3957;

																			BgL_auxz00_3957 =
																				(long) (BgL_arg2644z00_3015);
																			BgL_restz00_3014 =
																				(BgL_offsetz00_3011 % BgL_auxz00_3957);
																	}}
																	{	/* Globalize/node.scm 433 */

																		BgL_method3734z00_3004 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3009,
																				(int) (BgL_modz00_3012)),
																			(int) (BgL_restz00_3014));
										}}}}}}}}
										BgL_res4219z00_3029 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3734z00_3004) (BgL_method3734z00_3004,
												(obj_t) (BgL_arg4120z00_1914),
												(obj_t) (BgL_integratorz00_3003), BEOA));
								}}
								BgL_arg4119z00_1913 = BgL_res4219z00_3029;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1906))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg4119z00_1913), BUNSPEC);
					}
					BgL_auxz00_3915 = BgL_nodez00_1906;
					return (obj_t) (BgL_auxz00_3915);
				}
			}
		}
	}



/* glo!-set-ex-it3769 */
	obj_t BGl_gloz12zd2setzd2exzd2it3769zc0zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3205, obj_t BgL_nodez00_3206, obj_t BgL_integratorz00_3207)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 415 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1888;

				obj_t BgL_integratorz00_1889;

				{	/* Globalize/node.scm 416 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_3972;

					BgL_nodez00_1888 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_3206);
					BgL_integratorz00_1889 = BgL_integratorz00_3207;
					{	/* Globalize/node.scm 417 */
						obj_t BgL_hdlgz00_1893;

						{	/* Globalize/node.scm 417 */
							BgL_sexitz00_bglt BgL_obj2058z00_2931;

							{	/* Globalize/node.scm 417 */
								BgL_valuez00_bglt BgL_auxz00_3973;

								{	/* Globalize/node.scm 417 */
									BgL_variablez00_bglt BgL_arg4114z00_1902;

									{	/* Globalize/node.scm 417 */
										BgL_varz00_bglt BgL_obj2155z00_2929;

										BgL_obj2155z00_2929 =
											(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1888))->
											BgL_varz00);
										BgL_arg4114z00_1902 =
											(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2929))->
											BgL_variablez00);
									}
									BgL_auxz00_3973 =
										(((BgL_variablez00_bglt) CREF(BgL_arg4114z00_1902))->
										BgL_valuez00);
								}
								BgL_obj2058z00_2931 = (BgL_sexitz00_bglt) (BgL_auxz00_3973);
							}
							BgL_hdlgz00_1893 =
								(((BgL_sexitz00_bglt) CREF(BgL_obj2058z00_2931))->
								BgL_handlerz00);
						}
						{	/* Globalize/node.scm 422 */
							bool_t BgL_testz00_3979;

							{	/* Globalize/node.scm 422 */
								BgL_sfunzf2ginfozf2_bglt BgL_obj3323z00_2933;

								{	/* Globalize/node.scm 422 */
									BgL_variablez00_bglt BgL_obj1611z00_2932;

									BgL_obj1611z00_2932 =
										(BgL_variablez00_bglt) (BgL_hdlgz00_1893);
									BgL_obj3323z00_2933 =
										(BgL_sfunzf2ginfozf2_bglt) (
										(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_2932))->
											BgL_valuez00));
								}
								{
									obj_t BgL_auxz00_3983;

									{	/* Globalize/node.scm 422 */
										BgL_objectz00_bglt BgL_auxz00_3984;

										BgL_auxz00_3984 =
											(BgL_objectz00_bglt) (BgL_obj3323z00_2933);
										BgL_auxz00_3983 = BGL_OBJECT_WIDENING(BgL_auxz00_3984);
									}
									BgL_testz00_3979 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3983))->
										BgL_gzf3zf3);
								}
							}
							if (BgL_testz00_3979)
								{	/* Globalize/node.scm 423 */
									BgL_valuez00_bglt BgL_arg4107z00_1895;

									{	/* Globalize/node.scm 423 */
										BgL_variablez00_bglt BgL_arg4108z00_1896;

										{	/* Globalize/node.scm 423 */
											BgL_varz00_bglt BgL_obj2155z00_2935;

											BgL_obj2155z00_2935 =
												(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1888))->
												BgL_varz00);
											BgL_arg4108z00_1896 =
												(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2935))->
												BgL_variablez00);
										}
										BgL_arg4107z00_1895 =
											(((BgL_variablez00_bglt) CREF(BgL_arg4108z00_1896))->
											BgL_valuez00);
									}
									{
										BgL_sexitz00_bglt BgL_auxz00_3991;

										BgL_auxz00_3991 = (BgL_sexitz00_bglt) (BgL_arg4107z00_1895);
										((((BgL_sexitz00_bglt) CREF(BgL_auxz00_3991))->
												BgL_detachedzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
									}
								}
							else
								{	/* Globalize/node.scm 422 */
									BFALSE;
								}
						}
						{	/* Globalize/node.scm 424 */
							BgL_nodez00_bglt BgL_arg4111z00_1899;

							{	/* Globalize/node.scm 424 */
								BgL_nodez00_bglt BgL_arg4112z00_1900;

								BgL_arg4112z00_1900 =
									(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1888))->
									BgL_bodyz00);
								{	/* Globalize/node.scm 424 */
									BgL_nodez00_bglt BgL_res4213z00_2967;

									{	/* Globalize/node.scm 424 */
										BgL_variablez00_bglt BgL_integratorz00_2941;

										BgL_integratorz00_2941 =
											(BgL_variablez00_bglt) (BgL_integratorz00_1889);
										{	/* Globalize/node.scm 424 */
											obj_t BgL_method3734z00_2942;

											{	/* Globalize/node.scm 424 */
												BgL_objectz00_bglt BgL_objz00_2943;

												BgL_objz00_2943 =
													(BgL_objectz00_bglt) (BgL_arg4112z00_1900);
												{	/* Globalize/node.scm 424 */
													long BgL_objzd2classzd2numz00_2944;

													BgL_objzd2classzd2numz00_2944 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2943);
													{	/* Globalize/node.scm 424 */
														obj_t BgL_arg2643z00_2945;

														BgL_arg2643z00_2945 =
															PROCEDURE_REF
															(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
															(int) (((long) 1)));
														{	/* Globalize/node.scm 424 */
															obj_t BgL_arrayz00_2947;

															int BgL_offsetz00_2948;

															BgL_arrayz00_2947 = BgL_arg2643z00_2945;
															BgL_offsetz00_2948 =
																(int) (BgL_objzd2classzd2numz00_2944);
															{	/* Globalize/node.scm 424 */
																long BgL_offsetz00_2949;

																BgL_offsetz00_2949 =
																	((long) (BgL_offsetz00_2948) - OBJECT_TYPE);
																{	/* Globalize/node.scm 424 */
																	long BgL_modz00_2950;

																	{	/* Globalize/node.scm 424 */
																		int BgL_arg2645z00_2951;

																		BgL_arg2645z00_2951 = (int) (((long) 16));
																		{	/* Globalize/node.scm 424 */
																			long BgL_auxz00_4004;

																			BgL_auxz00_4004 =
																				(long) (BgL_arg2645z00_2951);
																			BgL_modz00_2950 =
																				(BgL_offsetz00_2949 / BgL_auxz00_4004);
																	}}
																	{	/* Globalize/node.scm 424 */
																		long BgL_restz00_2952;

																		{	/* Globalize/node.scm 424 */
																			int BgL_arg2644z00_2953;

																			BgL_arg2644z00_2953 = (int) (((long) 16));
																			{	/* Globalize/node.scm 424 */
																				long BgL_auxz00_4008;

																				BgL_auxz00_4008 =
																					(long) (BgL_arg2644z00_2953);
																				BgL_restz00_2952 =
																					(BgL_offsetz00_2949 %
																					BgL_auxz00_4008);
																		}}
																		{	/* Globalize/node.scm 424 */

																			BgL_method3734z00_2942 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2947,
																					(int) (BgL_modz00_2950)),
																				(int) (BgL_restz00_2952));
											}}}}}}}}
											BgL_res4213z00_2967 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3734z00_2942) (BgL_method3734z00_2942,
													(obj_t) (BgL_arg4112z00_1900),
													(obj_t) (BgL_integratorz00_2941), BEOA));
									}}
									BgL_arg4111z00_1899 = BgL_res4213z00_2967;
							}}
							((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1888))->
									BgL_bodyz00) =
								((BgL_nodez00_bglt) BgL_arg4111z00_1899), BUNSPEC);
						}
						BgL_auxz00_3972 = BgL_nodez00_1888;
					}
					return (obj_t) (BgL_auxz00_3972);
				}
			}
		}
	}



/* glo!-let-var3767 */
	obj_t BGl_gloz12zd2letzd2var3767z12zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3208, obj_t BgL_nodez00_3209, obj_t BgL_integratorz00_3210)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 397 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1865;

				obj_t BgL_integratorz00_1866;

				{	/* Globalize/node.scm 398 */
					BgL_letzd2varzd2_bglt BgL_auxz00_4023;

					BgL_nodez00_1865 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_3209);
					BgL_integratorz00_1866 = BgL_integratorz00_3210;
					{	/* Globalize/node.scm 399 */
						obj_t BgL_g3728z00_1870;

						BgL_g3728z00_1870 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1865))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3726z00_1872;

							BgL_l3726z00_1872 = BgL_g3728z00_1870;
						BgL_zc3anonymousza34096ze3z83_1873:
							if (PAIRP(BgL_l3726z00_1872))
								{	/* Globalize/node.scm 399 */
									{	/* Globalize/node.scm 400 */
										obj_t BgL_bindingz00_1875;

										BgL_bindingz00_1875 = CAR(BgL_l3726z00_1872);
										{	/* Globalize/node.scm 400 */
											obj_t BgL_varz00_1876;

											obj_t BgL_valz00_1877;

											BgL_varz00_1876 = CAR(BgL_bindingz00_1875);
											BgL_valz00_1877 = CDR(BgL_bindingz00_1875);
											{	/* Globalize/node.scm 402 */
												BgL_nodez00_bglt BgL_arg4098z00_1878;

												{	/* Globalize/node.scm 402 */
													BgL_nodez00_bglt BgL_res4207z00_2888;

													{	/* Globalize/node.scm 402 */
														BgL_nodez00_bglt BgL_nodez00_2861;

														BgL_variablez00_bglt BgL_integratorz00_2862;

														BgL_nodez00_2861 =
															(BgL_nodez00_bglt) (BgL_valz00_1877);
														BgL_integratorz00_2862 =
															(BgL_variablez00_bglt) (BgL_integratorz00_1866);
														{	/* Globalize/node.scm 402 */
															obj_t BgL_method3734z00_2863;

															{	/* Globalize/node.scm 402 */
																BgL_objectz00_bglt BgL_objz00_2864;

																BgL_objz00_2864 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2861);
																{	/* Globalize/node.scm 402 */
																	long BgL_objzd2classzd2numz00_2865;

																	BgL_objzd2classzd2numz00_2865 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2864);
																	{	/* Globalize/node.scm 402 */
																		obj_t BgL_arg2643z00_2866;

																		BgL_arg2643z00_2866 =
																			PROCEDURE_REF
																			(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
																			(int) (((long) 1)));
																		{	/* Globalize/node.scm 402 */
																			obj_t BgL_arrayz00_2868;

																			int BgL_offsetz00_2869;

																			BgL_arrayz00_2868 = BgL_arg2643z00_2866;
																			BgL_offsetz00_2869 =
																				(int) (BgL_objzd2classzd2numz00_2865);
																			{	/* Globalize/node.scm 402 */
																				long BgL_offsetz00_2870;

																				BgL_offsetz00_2870 =
																					(
																					(long) (BgL_offsetz00_2869) -
																					OBJECT_TYPE);
																				{	/* Globalize/node.scm 402 */
																					long BgL_modz00_2871;

																					{	/* Globalize/node.scm 402 */
																						int BgL_arg2645z00_2872;

																						BgL_arg2645z00_2872 =
																							(int) (((long) 16));
																						{	/* Globalize/node.scm 402 */
																							long BgL_auxz00_4040;

																							BgL_auxz00_4040 =
																								(long) (BgL_arg2645z00_2872);
																							BgL_modz00_2871 =
																								(BgL_offsetz00_2870 /
																								BgL_auxz00_4040);
																					}}
																					{	/* Globalize/node.scm 402 */
																						long BgL_restz00_2873;

																						{	/* Globalize/node.scm 402 */
																							int BgL_arg2644z00_2874;

																							BgL_arg2644z00_2874 =
																								(int) (((long) 16));
																							{	/* Globalize/node.scm 402 */
																								long BgL_auxz00_4044;

																								BgL_auxz00_4044 =
																									(long) (BgL_arg2644z00_2874);
																								BgL_restz00_2873 =
																									(BgL_offsetz00_2870 %
																									BgL_auxz00_4044);
																						}}
																						{	/* Globalize/node.scm 402 */

																							BgL_method3734z00_2863 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2868,
																									(int) (BgL_modz00_2871)),
																								(int) (BgL_restz00_2873));
															}}}}}}}}
															BgL_res4207z00_2888 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3734z00_2863)
																(BgL_method3734z00_2863,
																	(obj_t) (BgL_nodez00_2861),
																	(obj_t) (BgL_integratorz00_2862), BEOA));
													}}
													BgL_arg4098z00_1878 = BgL_res4207z00_2888;
												}
												{	/* Globalize/node.scm 402 */
													obj_t BgL_auxz00_4056;

													BgL_auxz00_4056 = (obj_t) (BgL_arg4098z00_1878);
													SET_CDR(BgL_bindingz00_1875, BgL_auxz00_4056);
											}}
											if (BGl_celledzf3zf3zzglobaliza7e_nodeza7(
													(BgL_variablez00_bglt) (BgL_varz00_1876)))
												{	/* Globalize/node.scm 403 */
													{
														BgL_typez00_bglt BgL_auxz00_4064;

														BgL_variablez00_bglt BgL_auxz00_4062;

														BgL_auxz00_4064 =
															(BgL_typez00_bglt)
															(BGl_za2objza2z00zztype_cachez00);
														BgL_auxz00_4062 =
															(BgL_variablez00_bglt) (BgL_varz00_1876);
														((((BgL_variablez00_bglt) CREF(BgL_auxz00_4062))->
																BgL_typez00) =
															((BgL_typez00_bglt) BgL_auxz00_4064), BUNSPEC);
													}
													{	/* Globalize/node.scm 406 */
														BgL_makezd2boxzd2_bglt BgL_arg4100z00_1880;

														{	/* Globalize/node.scm 406 */
															obj_t BgL_arg4101z00_1881;

															BgL_arg4101z00_1881 = CDR(BgL_bindingz00_1875);
															BgL_arg4100z00_1880 =
																BGl_azd2makezd2cellz00zzglobaliza7e_nodeza7(
																(BgL_nodez00_bglt) (BgL_arg4101z00_1881),
																(BgL_variablez00_bglt) (BgL_varz00_1876));
														}
														{	/* Globalize/node.scm 406 */
															obj_t BgL_auxz00_4071;

															BgL_auxz00_4071 = (obj_t) (BgL_arg4100z00_1880);
															SET_CDR(BgL_bindingz00_1875, BgL_auxz00_4071);
														}
													}
												}
											else
												{	/* Globalize/node.scm 403 */
													BFALSE;
												}
										}
									}
									{
										obj_t BgL_l3726z00_4074;

										BgL_l3726z00_4074 = CDR(BgL_l3726z00_1872);
										BgL_l3726z00_1872 = BgL_l3726z00_4074;
										goto BgL_zc3anonymousza34096ze3z83_1873;
									}
								}
							else
								{	/* Globalize/node.scm 399 */
									((bool_t) 1);
								}
						}
					}
					{	/* Globalize/node.scm 409 */
						BgL_nodez00_bglt BgL_arg4103z00_1884;

						{	/* Globalize/node.scm 409 */
							BgL_nodez00_bglt BgL_arg4104z00_1885;

							BgL_arg4104z00_1885 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1865))->BgL_bodyz00);
							{	/* Globalize/node.scm 409 */
								BgL_nodez00_bglt BgL_res4210z00_2925;

								{	/* Globalize/node.scm 409 */
									BgL_variablez00_bglt BgL_integratorz00_2899;

									BgL_integratorz00_2899 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1866);
									{	/* Globalize/node.scm 409 */
										obj_t BgL_method3734z00_2900;

										{	/* Globalize/node.scm 409 */
											BgL_objectz00_bglt BgL_objz00_2901;

											BgL_objz00_2901 =
												(BgL_objectz00_bglt) (BgL_arg4104z00_1885);
											{	/* Globalize/node.scm 409 */
												long BgL_objzd2classzd2numz00_2902;

												BgL_objzd2classzd2numz00_2902 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2901);
												{	/* Globalize/node.scm 409 */
													obj_t BgL_arg2643z00_2903;

													BgL_arg2643z00_2903 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
														(int) (((long) 1)));
													{	/* Globalize/node.scm 409 */
														obj_t BgL_arrayz00_2905;

														int BgL_offsetz00_2906;

														BgL_arrayz00_2905 = BgL_arg2643z00_2903;
														BgL_offsetz00_2906 =
															(int) (BgL_objzd2classzd2numz00_2902);
														{	/* Globalize/node.scm 409 */
															long BgL_offsetz00_2907;

															BgL_offsetz00_2907 =
																((long) (BgL_offsetz00_2906) - OBJECT_TYPE);
															{	/* Globalize/node.scm 409 */
																long BgL_modz00_2908;

																{	/* Globalize/node.scm 409 */
																	int BgL_arg2645z00_2909;

																	BgL_arg2645z00_2909 = (int) (((long) 16));
																	{	/* Globalize/node.scm 409 */
																		long BgL_auxz00_4086;

																		BgL_auxz00_4086 =
																			(long) (BgL_arg2645z00_2909);
																		BgL_modz00_2908 =
																			(BgL_offsetz00_2907 / BgL_auxz00_4086);
																}}
																{	/* Globalize/node.scm 409 */
																	long BgL_restz00_2910;

																	{	/* Globalize/node.scm 409 */
																		int BgL_arg2644z00_2911;

																		BgL_arg2644z00_2911 = (int) (((long) 16));
																		{	/* Globalize/node.scm 409 */
																			long BgL_auxz00_4090;

																			BgL_auxz00_4090 =
																				(long) (BgL_arg2644z00_2911);
																			BgL_restz00_2910 =
																				(BgL_offsetz00_2907 % BgL_auxz00_4090);
																	}}
																	{	/* Globalize/node.scm 409 */

																		BgL_method3734z00_2900 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2905,
																				(int) (BgL_modz00_2908)),
																			(int) (BgL_restz00_2910));
										}}}}}}}}
										BgL_res4210z00_2925 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3734z00_2900) (BgL_method3734z00_2900,
												(obj_t) (BgL_arg4104z00_1885),
												(obj_t) (BgL_integratorz00_2899), BEOA));
								}}
								BgL_arg4103z00_1884 = BgL_res4210z00_2925;
						}}
						((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1865))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg4103z00_1884), BUNSPEC);
					}
					BgL_auxz00_4023 = BgL_nodez00_1865;
					return (obj_t) (BgL_auxz00_4023);
				}
			}
		}
	}



/* glo!-let-fun3765 */
	obj_t BGl_gloz12zd2letzd2fun3765z12zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3211, obj_t BgL_nodez00_3212, obj_t BgL_integratorz00_3213)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 355 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1827;

				obj_t BgL_integratorz00_1828;

				BgL_nodez00_1827 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_3212);
				BgL_integratorz00_1828 = BgL_integratorz00_3213;
				{	/* Globalize/node.scm 357 */
					BgL_nodez00_bglt BgL_arg4071z00_1832;

					{	/* Globalize/node.scm 357 */
						BgL_nodez00_bglt BgL_arg4072z00_1833;

						BgL_arg4072z00_1833 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1827))->BgL_bodyz00);
						{	/* Globalize/node.scm 357 */
							BgL_nodez00_bglt BgL_res4204z00_2837;

							{	/* Globalize/node.scm 357 */
								BgL_variablez00_bglt BgL_integratorz00_2811;

								BgL_integratorz00_2811 =
									(BgL_variablez00_bglt) (BgL_integratorz00_1828);
								{	/* Globalize/node.scm 357 */
									obj_t BgL_method3734z00_2812;

									{	/* Globalize/node.scm 357 */
										BgL_objectz00_bglt BgL_objz00_2813;

										BgL_objz00_2813 =
											(BgL_objectz00_bglt) (BgL_arg4072z00_1833);
										{	/* Globalize/node.scm 357 */
											long BgL_objzd2classzd2numz00_2814;

											BgL_objzd2classzd2numz00_2814 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2813);
											{	/* Globalize/node.scm 357 */
												obj_t BgL_arg2643z00_2815;

												BgL_arg2643z00_2815 =
													PROCEDURE_REF
													(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
													(int) (((long) 1)));
												{	/* Globalize/node.scm 357 */
													obj_t BgL_arrayz00_2817;

													int BgL_offsetz00_2818;

													BgL_arrayz00_2817 = BgL_arg2643z00_2815;
													BgL_offsetz00_2818 =
														(int) (BgL_objzd2classzd2numz00_2814);
													{	/* Globalize/node.scm 357 */
														long BgL_offsetz00_2819;

														BgL_offsetz00_2819 =
															((long) (BgL_offsetz00_2818) - OBJECT_TYPE);
														{	/* Globalize/node.scm 357 */
															long BgL_modz00_2820;

															{	/* Globalize/node.scm 357 */
																int BgL_arg2645z00_2821;

																BgL_arg2645z00_2821 = (int) (((long) 16));
																{	/* Globalize/node.scm 357 */
																	long BgL_auxz00_4115;

																	BgL_auxz00_4115 =
																		(long) (BgL_arg2645z00_2821);
																	BgL_modz00_2820 =
																		(BgL_offsetz00_2819 / BgL_auxz00_4115);
															}}
															{	/* Globalize/node.scm 357 */
																long BgL_restz00_2822;

																{	/* Globalize/node.scm 357 */
																	int BgL_arg2644z00_2823;

																	BgL_arg2644z00_2823 = (int) (((long) 16));
																	{	/* Globalize/node.scm 357 */
																		long BgL_auxz00_4119;

																		BgL_auxz00_4119 =
																			(long) (BgL_arg2644z00_2823);
																		BgL_restz00_2822 =
																			(BgL_offsetz00_2819 % BgL_auxz00_4119);
																}}
																{	/* Globalize/node.scm 357 */

																	BgL_method3734z00_2812 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2817,
																			(int) (BgL_modz00_2820)),
																		(int) (BgL_restz00_2822));
									}}}}}}}}
									BgL_res4204z00_2837 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3734z00_2812)
										(BgL_method3734z00_2812, (obj_t) (BgL_arg4072z00_1833),
											(obj_t) (BgL_integratorz00_2811), BEOA));
							}}
							BgL_arg4071z00_1832 = BgL_res4204z00_2837;
					}}
					((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1827))->BgL_bodyz00) =
						((BgL_nodez00_bglt) BgL_arg4071z00_1832), BUNSPEC);
				}
				{
					obj_t BgL_obindingsz00_1838;

					obj_t BgL_nbindingsz00_1839;

					obj_t BgL_ebindingsz00_1840;

					{	/* Globalize/node.scm 358 */
						obj_t BgL_arg4073z00_1837;

						BgL_arg4073z00_1837 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1827))->BgL_localsz00);
						BgL_obindingsz00_1838 = BgL_arg4073z00_1837;
						BgL_nbindingsz00_1839 = BNIL;
						BgL_ebindingsz00_1840 = BNIL;
					BgL_zc3anonymousza34074ze3z83_1841:
						if (NULLP(BgL_obindingsz00_1838))
							{	/* Globalize/node.scm 369 */
								((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1827))->
										BgL_localsz00) = ((obj_t) BgL_nbindingsz00_1839), BUNSPEC);
								if (NULLP(BgL_ebindingsz00_1840))
									{	/* Globalize/node.scm 371 */
										return (obj_t) (BgL_nodez00_1827);
									}
								else
									{	/* Globalize/node.scm 371 */
										return
											(obj_t)
											(BGl_makezd2escapingzd2bindingsz00zzglobaliza7e_nodeza7
											(BgL_ebindingsz00_1840,
												(BgL_nodez00_bglt) (BgL_nodez00_1827),
												(BgL_variablez00_bglt) (BgL_integratorz00_1828)));
									}
							}
						else
							{	/* Globalize/node.scm 374 */
								bool_t BgL_testz00_4143;

								if ((CAR(BgL_obindingsz00_1838) == BgL_integratorz00_1828))
									{	/* Globalize/node.scm 374 */
										BgL_testz00_4143 = ((bool_t) 0);
									}
								else
									{	/* Globalize/node.scm 375 */
										BgL_localzf2ginfozf2_bglt BgL_obj3520z00_2848;

										{	/* Globalize/node.scm 375 */
											obj_t BgL_pairz00_2847;

											BgL_pairz00_2847 = BgL_obindingsz00_1838;
											BgL_obj3520z00_2848 =
												(BgL_localzf2ginfozf2_bglt) (CAR(BgL_pairz00_2847));
										}
										{
											obj_t BgL_auxz00_4149;

											{	/* Globalize/node.scm 375 */
												BgL_objectz00_bglt BgL_auxz00_4150;

												BgL_auxz00_4150 =
													(BgL_objectz00_bglt) (BgL_obj3520z00_2848);
												BgL_auxz00_4149 = BGL_OBJECT_WIDENING(BgL_auxz00_4150);
											}
											BgL_testz00_4143 =
												(((BgL_localzf2ginfozf2_bglt) CREF(BgL_auxz00_4149))->
												BgL_escapezf3zf3);
										}
									}
								if (BgL_testz00_4143)
									{	/* Globalize/node.scm 376 */
										obj_t BgL_arg4079z00_1846;

										obj_t BgL_arg4080z00_1847;

										BgL_arg4079z00_1846 = CDR(BgL_obindingsz00_1838);
										BgL_arg4080z00_1847 =
											MAKE_PAIR(CAR(BgL_obindingsz00_1838),
											BgL_ebindingsz00_1840);
										{
											obj_t BgL_ebindingsz00_4158;

											obj_t BgL_obindingsz00_4157;

											BgL_obindingsz00_4157 = BgL_arg4079z00_1846;
											BgL_ebindingsz00_4158 = BgL_arg4080z00_1847;
											BgL_ebindingsz00_1840 = BgL_ebindingsz00_4158;
											BgL_obindingsz00_1838 = BgL_obindingsz00_4157;
											goto BgL_zc3anonymousza34074ze3z83_1841;
										}
									}
								else
									{	/* Globalize/node.scm 374 */
										if ((CAR(BgL_obindingsz00_1838) == BgL_integratorz00_1828))
											{	/* Globalize/node.scm 379 */
												{	/* Globalize/node.scm 381 */
													obj_t BgL_arg4083z00_1850;

													obj_t BgL_arg4085z00_1852;

													BgL_arg4083z00_1850 = CNST_TABLE_REF(((long) 8));
													BgL_arg4085z00_1852 =
														BGl_shapez00zztools_shapez00(CAR
														(BgL_obindingsz00_1838));
													BGl_internalzd2errorzd2zztools_errorz00
														(BgL_arg4083z00_1850,
														BGl_string4255z00zzglobaliza7e_nodeza7,
														BgL_arg4085z00_1852);
												}
												{
													obj_t BgL_obindingsz00_4166;

													BgL_obindingsz00_4166 = CDR(BgL_obindingsz00_1838);
													BgL_obindingsz00_1838 = BgL_obindingsz00_4166;
													goto BgL_zc3anonymousza34074ze3z83_1841;
												}
											}
										else
											{	/* Globalize/node.scm 388 */
												obj_t BgL_localz00_1855;

												BgL_localz00_1855 = CAR(BgL_obindingsz00_1838);
												BGl_globaliza7ezd2localzd2funz12zb5zzglobaliza7e_nodeza7
													((BgL_localz00_bglt) (BgL_localz00_1855),
													(BgL_variablez00_bglt) (BgL_integratorz00_1828));
												{	/* Globalize/node.scm 390 */
													obj_t BgL_arg4089z00_1856;

													obj_t BgL_arg4090z00_1857;

													BgL_arg4089z00_1856 = CDR(BgL_obindingsz00_1838);
													BgL_arg4090z00_1857 =
														MAKE_PAIR(BgL_localz00_1855, BgL_nbindingsz00_1839);
													{
														obj_t BgL_nbindingsz00_4175;

														obj_t BgL_obindingsz00_4174;

														BgL_obindingsz00_4174 = BgL_arg4089z00_1856;
														BgL_nbindingsz00_4175 = BgL_arg4090z00_1857;
														BgL_nbindingsz00_1839 = BgL_nbindingsz00_4175;
														BgL_obindingsz00_1838 = BgL_obindingsz00_4174;
														goto BgL_zc3anonymousza34074ze3z83_1841;
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



/* glo!-select3763 */
	obj_t BGl_gloz12zd2select3763zc0zzglobaliza7e_nodeza7(obj_t BgL_envz00_3214,
		obj_t BgL_nodez00_3215, obj_t BgL_integratorz00_3216)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 344 */
			{
				BgL_selectz00_bglt BgL_nodez00_1808;

				obj_t BgL_integratorz00_1809;

				{	/* Globalize/node.scm 345 */
					BgL_selectz00_bglt BgL_auxz00_4177;

					BgL_nodez00_1808 = (BgL_selectz00_bglt) (BgL_nodez00_3215);
					BgL_integratorz00_1809 = BgL_integratorz00_3216;
					{	/* Globalize/node.scm 346 */
						BgL_nodez00_bglt BgL_arg4063z00_1813;

						{	/* Globalize/node.scm 346 */
							BgL_nodez00_bglt BgL_arg4064z00_1814;

							BgL_arg4064z00_1814 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1808))->BgL_testz00);
							{	/* Globalize/node.scm 346 */
								BgL_nodez00_bglt BgL_res4198z00_2771;

								{	/* Globalize/node.scm 346 */
									BgL_variablez00_bglt BgL_integratorz00_2745;

									BgL_integratorz00_2745 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1809);
									{	/* Globalize/node.scm 346 */
										obj_t BgL_method3734z00_2746;

										{	/* Globalize/node.scm 346 */
											BgL_objectz00_bglt BgL_objz00_2747;

											BgL_objz00_2747 =
												(BgL_objectz00_bglt) (BgL_arg4064z00_1814);
											{	/* Globalize/node.scm 346 */
												long BgL_objzd2classzd2numz00_2748;

												BgL_objzd2classzd2numz00_2748 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2747);
												{	/* Globalize/node.scm 346 */
													obj_t BgL_arg2643z00_2749;

													BgL_arg2643z00_2749 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
														(int) (((long) 1)));
													{	/* Globalize/node.scm 346 */
														obj_t BgL_arrayz00_2751;

														int BgL_offsetz00_2752;

														BgL_arrayz00_2751 = BgL_arg2643z00_2749;
														BgL_offsetz00_2752 =
															(int) (BgL_objzd2classzd2numz00_2748);
														{	/* Globalize/node.scm 346 */
															long BgL_offsetz00_2753;

															BgL_offsetz00_2753 =
																((long) (BgL_offsetz00_2752) - OBJECT_TYPE);
															{	/* Globalize/node.scm 346 */
																long BgL_modz00_2754;

																{	/* Globalize/node.scm 346 */
																	int BgL_arg2645z00_2755;

																	BgL_arg2645z00_2755 = (int) (((long) 16));
																	{	/* Globalize/node.scm 346 */
																		long BgL_auxz00_4188;

																		BgL_auxz00_4188 =
																			(long) (BgL_arg2645z00_2755);
																		BgL_modz00_2754 =
																			(BgL_offsetz00_2753 / BgL_auxz00_4188);
																}}
																{	/* Globalize/node.scm 346 */
																	long BgL_restz00_2756;

																	{	/* Globalize/node.scm 346 */
																		int BgL_arg2644z00_2757;

																		BgL_arg2644z00_2757 = (int) (((long) 16));
																		{	/* Globalize/node.scm 346 */
																			long BgL_auxz00_4192;

																			BgL_auxz00_4192 =
																				(long) (BgL_arg2644z00_2757);
																			BgL_restz00_2756 =
																				(BgL_offsetz00_2753 % BgL_auxz00_4192);
																	}}
																	{	/* Globalize/node.scm 346 */

																		BgL_method3734z00_2746 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2751,
																				(int) (BgL_modz00_2754)),
																			(int) (BgL_restz00_2756));
										}}}}}}}}
										BgL_res4198z00_2771 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3734z00_2746) (BgL_method3734z00_2746,
												(obj_t) (BgL_arg4064z00_1814),
												(obj_t) (BgL_integratorz00_2745), BEOA));
								}}
								BgL_arg4063z00_1813 = BgL_res4198z00_2771;
						}}
						((((BgL_selectz00_bglt) CREF(BgL_nodez00_1808))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg4063z00_1813), BUNSPEC);
					}
					{	/* Globalize/node.scm 347 */
						obj_t BgL_g3725z00_1815;

						BgL_g3725z00_1815 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1808))->BgL_clausesz00);
						{
							obj_t BgL_l3723z00_1817;

							BgL_l3723z00_1817 = BgL_g3725z00_1815;
						BgL_zc3anonymousza34065ze3z83_1818:
							if (PAIRP(BgL_l3723z00_1817))
								{	/* Globalize/node.scm 347 */
									{	/* Globalize/node.scm 348 */
										obj_t BgL_clausez00_1820;

										BgL_clausez00_1820 = CAR(BgL_l3723z00_1817);
										{	/* Globalize/node.scm 348 */
											BgL_nodez00_bglt BgL_arg4067z00_1821;

											{	/* Globalize/node.scm 348 */
												obj_t BgL_arg4068z00_1822;

												BgL_arg4068z00_1822 = CDR(BgL_clausez00_1820);
												{	/* Globalize/node.scm 348 */
													BgL_nodez00_bglt BgL_res4201z00_2805;

													{	/* Globalize/node.scm 348 */
														BgL_nodez00_bglt BgL_nodez00_2778;

														BgL_variablez00_bglt BgL_integratorz00_2779;

														BgL_nodez00_2778 =
															(BgL_nodez00_bglt) (BgL_arg4068z00_1822);
														BgL_integratorz00_2779 =
															(BgL_variablez00_bglt) (BgL_integratorz00_1809);
														{	/* Globalize/node.scm 348 */
															obj_t BgL_method3734z00_2780;

															{	/* Globalize/node.scm 348 */
																BgL_objectz00_bglt BgL_objz00_2781;

																BgL_objz00_2781 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2778);
																{	/* Globalize/node.scm 348 */
																	long BgL_objzd2classzd2numz00_2782;

																	BgL_objzd2classzd2numz00_2782 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2781);
																	{	/* Globalize/node.scm 348 */
																		obj_t BgL_arg2643z00_2783;

																		BgL_arg2643z00_2783 =
																			PROCEDURE_REF
																			(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
																			(int) (((long) 1)));
																		{	/* Globalize/node.scm 348 */
																			obj_t BgL_arrayz00_2785;

																			int BgL_offsetz00_2786;

																			BgL_arrayz00_2785 = BgL_arg2643z00_2783;
																			BgL_offsetz00_2786 =
																				(int) (BgL_objzd2classzd2numz00_2782);
																			{	/* Globalize/node.scm 348 */
																				long BgL_offsetz00_2787;

																				BgL_offsetz00_2787 =
																					(
																					(long) (BgL_offsetz00_2786) -
																					OBJECT_TYPE);
																				{	/* Globalize/node.scm 348 */
																					long BgL_modz00_2788;

																					{	/* Globalize/node.scm 348 */
																						int BgL_arg2645z00_2789;

																						BgL_arg2645z00_2789 =
																							(int) (((long) 16));
																						{	/* Globalize/node.scm 348 */
																							long BgL_auxz00_4220;

																							BgL_auxz00_4220 =
																								(long) (BgL_arg2645z00_2789);
																							BgL_modz00_2788 =
																								(BgL_offsetz00_2787 /
																								BgL_auxz00_4220);
																					}}
																					{	/* Globalize/node.scm 348 */
																						long BgL_restz00_2790;

																						{	/* Globalize/node.scm 348 */
																							int BgL_arg2644z00_2791;

																							BgL_arg2644z00_2791 =
																								(int) (((long) 16));
																							{	/* Globalize/node.scm 348 */
																								long BgL_auxz00_4224;

																								BgL_auxz00_4224 =
																									(long) (BgL_arg2644z00_2791);
																								BgL_restz00_2790 =
																									(BgL_offsetz00_2787 %
																									BgL_auxz00_4224);
																						}}
																						{	/* Globalize/node.scm 348 */

																							BgL_method3734z00_2780 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2785,
																									(int) (BgL_modz00_2788)),
																								(int) (BgL_restz00_2790));
															}}}}}}}}
															BgL_res4201z00_2805 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3734z00_2780)
																(BgL_method3734z00_2780,
																	(obj_t) (BgL_nodez00_2778),
																	(obj_t) (BgL_integratorz00_2779), BEOA));
													}}
													BgL_arg4067z00_1821 = BgL_res4201z00_2805;
											}}
											{	/* Globalize/node.scm 348 */
												obj_t BgL_auxz00_4236;

												BgL_auxz00_4236 = (obj_t) (BgL_arg4067z00_1821);
												SET_CDR(BgL_clausez00_1820, BgL_auxz00_4236);
									}}}
									{
										obj_t BgL_l3723z00_4239;

										BgL_l3723z00_4239 = CDR(BgL_l3723z00_1817);
										BgL_l3723z00_1817 = BgL_l3723z00_4239;
										goto BgL_zc3anonymousza34065ze3z83_1818;
									}
								}
							else
								{	/* Globalize/node.scm 347 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_4177 = BgL_nodez00_1808;
					return (obj_t) (BgL_auxz00_4177);
				}
			}
		}
	}



/* glo!-fail3761 */
	obj_t BGl_gloz12zd2fail3761zc0zzglobaliza7e_nodeza7(obj_t BgL_envz00_3217,
		obj_t BgL_nodez00_3218, obj_t BgL_integratorz00_3219)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 334 */
			{
				BgL_failz00_bglt BgL_nodez00_1795;

				obj_t BgL_integratorz00_1796;

				{	/* Globalize/node.scm 335 */
					BgL_failz00_bglt BgL_auxz00_4243;

					BgL_nodez00_1795 = (BgL_failz00_bglt) (BgL_nodez00_3218);
					BgL_integratorz00_1796 = BgL_integratorz00_3219;
					{	/* Globalize/node.scm 336 */
						BgL_nodez00_bglt BgL_arg4056z00_1800;

						{	/* Globalize/node.scm 336 */
							BgL_nodez00_bglt BgL_arg4057z00_1801;

							BgL_arg4057z00_1801 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1795))->BgL_procz00);
							{	/* Globalize/node.scm 336 */
								BgL_nodez00_bglt BgL_res4189z00_2678;

								{	/* Globalize/node.scm 336 */
									BgL_variablez00_bglt BgL_integratorz00_2652;

									BgL_integratorz00_2652 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1796);
									{	/* Globalize/node.scm 336 */
										obj_t BgL_method3734z00_2653;

										{	/* Globalize/node.scm 336 */
											BgL_objectz00_bglt BgL_objz00_2654;

											BgL_objz00_2654 =
												(BgL_objectz00_bglt) (BgL_arg4057z00_1801);
											{	/* Globalize/node.scm 336 */
												long BgL_objzd2classzd2numz00_2655;

												BgL_objzd2classzd2numz00_2655 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2654);
												{	/* Globalize/node.scm 336 */
													obj_t BgL_arg2643z00_2656;

													BgL_arg2643z00_2656 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
														(int) (((long) 1)));
													{	/* Globalize/node.scm 336 */
														obj_t BgL_arrayz00_2658;

														int BgL_offsetz00_2659;

														BgL_arrayz00_2658 = BgL_arg2643z00_2656;
														BgL_offsetz00_2659 =
															(int) (BgL_objzd2classzd2numz00_2655);
														{	/* Globalize/node.scm 336 */
															long BgL_offsetz00_2660;

															BgL_offsetz00_2660 =
																((long) (BgL_offsetz00_2659) - OBJECT_TYPE);
															{	/* Globalize/node.scm 336 */
																long BgL_modz00_2661;

																{	/* Globalize/node.scm 336 */
																	int BgL_arg2645z00_2662;

																	BgL_arg2645z00_2662 = (int) (((long) 16));
																	{	/* Globalize/node.scm 336 */
																		long BgL_auxz00_4254;

																		BgL_auxz00_4254 =
																			(long) (BgL_arg2645z00_2662);
																		BgL_modz00_2661 =
																			(BgL_offsetz00_2660 / BgL_auxz00_4254);
																}}
																{	/* Globalize/node.scm 336 */
																	long BgL_restz00_2663;

																	{	/* Globalize/node.scm 336 */
																		int BgL_arg2644z00_2664;

																		BgL_arg2644z00_2664 = (int) (((long) 16));
																		{	/* Globalize/node.scm 336 */
																			long BgL_auxz00_4258;

																			BgL_auxz00_4258 =
																				(long) (BgL_arg2644z00_2664);
																			BgL_restz00_2663 =
																				(BgL_offsetz00_2660 % BgL_auxz00_4258);
																	}}
																	{	/* Globalize/node.scm 336 */

																		BgL_method3734z00_2653 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2658,
																				(int) (BgL_modz00_2661)),
																			(int) (BgL_restz00_2663));
										}}}}}}}}
										BgL_res4189z00_2678 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3734z00_2653) (BgL_method3734z00_2653,
												(obj_t) (BgL_arg4057z00_1801),
												(obj_t) (BgL_integratorz00_2652), BEOA));
								}}
								BgL_arg4056z00_1800 = BgL_res4189z00_2678;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1795))->BgL_procz00) =
							((BgL_nodez00_bglt) BgL_arg4056z00_1800), BUNSPEC);
					}
					{	/* Globalize/node.scm 337 */
						BgL_nodez00_bglt BgL_arg4058z00_1802;

						{	/* Globalize/node.scm 337 */
							BgL_nodez00_bglt BgL_arg4059z00_1803;

							BgL_arg4059z00_1803 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1795))->BgL_msgz00);
							{	/* Globalize/node.scm 337 */
								BgL_nodez00_bglt BgL_res4192z00_2709;

								{	/* Globalize/node.scm 337 */
									BgL_variablez00_bglt BgL_integratorz00_2683;

									BgL_integratorz00_2683 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1796);
									{	/* Globalize/node.scm 337 */
										obj_t BgL_method3734z00_2684;

										{	/* Globalize/node.scm 337 */
											BgL_objectz00_bglt BgL_objz00_2685;

											BgL_objz00_2685 =
												(BgL_objectz00_bglt) (BgL_arg4059z00_1803);
											{	/* Globalize/node.scm 337 */
												long BgL_objzd2classzd2numz00_2686;

												BgL_objzd2classzd2numz00_2686 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2685);
												{	/* Globalize/node.scm 337 */
													obj_t BgL_arg2643z00_2687;

													BgL_arg2643z00_2687 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
														(int) (((long) 1)));
													{	/* Globalize/node.scm 337 */
														obj_t BgL_arrayz00_2689;

														int BgL_offsetz00_2690;

														BgL_arrayz00_2689 = BgL_arg2643z00_2687;
														BgL_offsetz00_2690 =
															(int) (BgL_objzd2classzd2numz00_2686);
														{	/* Globalize/node.scm 337 */
															long BgL_offsetz00_2691;

															BgL_offsetz00_2691 =
																((long) (BgL_offsetz00_2690) - OBJECT_TYPE);
															{	/* Globalize/node.scm 337 */
																long BgL_modz00_2692;

																{	/* Globalize/node.scm 337 */
																	int BgL_arg2645z00_2693;

																	BgL_arg2645z00_2693 = (int) (((long) 16));
																	{	/* Globalize/node.scm 337 */
																		long BgL_auxz00_4281;

																		BgL_auxz00_4281 =
																			(long) (BgL_arg2645z00_2693);
																		BgL_modz00_2692 =
																			(BgL_offsetz00_2691 / BgL_auxz00_4281);
																}}
																{	/* Globalize/node.scm 337 */
																	long BgL_restz00_2694;

																	{	/* Globalize/node.scm 337 */
																		int BgL_arg2644z00_2695;

																		BgL_arg2644z00_2695 = (int) (((long) 16));
																		{	/* Globalize/node.scm 337 */
																			long BgL_auxz00_4285;

																			BgL_auxz00_4285 =
																				(long) (BgL_arg2644z00_2695);
																			BgL_restz00_2694 =
																				(BgL_offsetz00_2691 % BgL_auxz00_4285);
																	}}
																	{	/* Globalize/node.scm 337 */

																		BgL_method3734z00_2684 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2689,
																				(int) (BgL_modz00_2692)),
																			(int) (BgL_restz00_2694));
										}}}}}}}}
										BgL_res4192z00_2709 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3734z00_2684) (BgL_method3734z00_2684,
												(obj_t) (BgL_arg4059z00_1803),
												(obj_t) (BgL_integratorz00_2683), BEOA));
								}}
								BgL_arg4058z00_1802 = BgL_res4192z00_2709;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1795))->BgL_msgz00) =
							((BgL_nodez00_bglt) BgL_arg4058z00_1802), BUNSPEC);
					}
					{	/* Globalize/node.scm 338 */
						BgL_nodez00_bglt BgL_arg4060z00_1804;

						{	/* Globalize/node.scm 338 */
							BgL_nodez00_bglt BgL_arg4061z00_1805;

							BgL_arg4061z00_1805 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1795))->BgL_objz00);
							{	/* Globalize/node.scm 338 */
								BgL_nodez00_bglt BgL_res4195z00_2740;

								{	/* Globalize/node.scm 338 */
									BgL_variablez00_bglt BgL_integratorz00_2714;

									BgL_integratorz00_2714 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1796);
									{	/* Globalize/node.scm 338 */
										obj_t BgL_method3734z00_2715;

										{	/* Globalize/node.scm 338 */
											BgL_objectz00_bglt BgL_objz00_2716;

											BgL_objz00_2716 =
												(BgL_objectz00_bglt) (BgL_arg4061z00_1805);
											{	/* Globalize/node.scm 338 */
												long BgL_objzd2classzd2numz00_2717;

												BgL_objzd2classzd2numz00_2717 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2716);
												{	/* Globalize/node.scm 338 */
													obj_t BgL_arg2643z00_2718;

													BgL_arg2643z00_2718 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
														(int) (((long) 1)));
													{	/* Globalize/node.scm 338 */
														obj_t BgL_arrayz00_2720;

														int BgL_offsetz00_2721;

														BgL_arrayz00_2720 = BgL_arg2643z00_2718;
														BgL_offsetz00_2721 =
															(int) (BgL_objzd2classzd2numz00_2717);
														{	/* Globalize/node.scm 338 */
															long BgL_offsetz00_2722;

															BgL_offsetz00_2722 =
																((long) (BgL_offsetz00_2721) - OBJECT_TYPE);
															{	/* Globalize/node.scm 338 */
																long BgL_modz00_2723;

																{	/* Globalize/node.scm 338 */
																	int BgL_arg2645z00_2724;

																	BgL_arg2645z00_2724 = (int) (((long) 16));
																	{	/* Globalize/node.scm 338 */
																		long BgL_auxz00_4308;

																		BgL_auxz00_4308 =
																			(long) (BgL_arg2645z00_2724);
																		BgL_modz00_2723 =
																			(BgL_offsetz00_2722 / BgL_auxz00_4308);
																}}
																{	/* Globalize/node.scm 338 */
																	long BgL_restz00_2725;

																	{	/* Globalize/node.scm 338 */
																		int BgL_arg2644z00_2726;

																		BgL_arg2644z00_2726 = (int) (((long) 16));
																		{	/* Globalize/node.scm 338 */
																			long BgL_auxz00_4312;

																			BgL_auxz00_4312 =
																				(long) (BgL_arg2644z00_2726);
																			BgL_restz00_2725 =
																				(BgL_offsetz00_2722 % BgL_auxz00_4312);
																	}}
																	{	/* Globalize/node.scm 338 */

																		BgL_method3734z00_2715 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2720,
																				(int) (BgL_modz00_2723)),
																			(int) (BgL_restz00_2725));
										}}}}}}}}
										BgL_res4195z00_2740 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3734z00_2715) (BgL_method3734z00_2715,
												(obj_t) (BgL_arg4061z00_1805),
												(obj_t) (BgL_integratorz00_2714), BEOA));
								}}
								BgL_arg4060z00_1804 = BgL_res4195z00_2740;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1795))->BgL_objz00) =
							((BgL_nodez00_bglt) BgL_arg4060z00_1804), BUNSPEC);
					}
					BgL_auxz00_4243 = BgL_nodez00_1795;
					return (obj_t) (BgL_auxz00_4243);
				}
			}
		}
	}



/* glo!-conditional3759 */
	obj_t BGl_gloz12zd2conditional3759zc0zzglobaliza7e_nodeza7(obj_t
		BgL_envz00_3220, obj_t BgL_nodez00_3221, obj_t BgL_integratorz00_3222)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 324 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1782;

				obj_t BgL_integratorz00_1783;

				{	/* Globalize/node.scm 325 */
					BgL_conditionalz00_bglt BgL_auxz00_4327;

					BgL_nodez00_1782 = (BgL_conditionalz00_bglt) (BgL_nodez00_3221);
					BgL_integratorz00_1783 = BgL_integratorz00_3222;
					{	/* Globalize/node.scm 326 */
						BgL_nodez00_bglt BgL_arg4049z00_1787;

						{	/* Globalize/node.scm 326 */
							BgL_nodez00_bglt BgL_arg4050z00_1788;

							BgL_arg4050z00_1788 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1782))->
								BgL_testz00);
							{	/* Globalize/node.scm 326 */
								BgL_nodez00_bglt BgL_res4180z00_2585;

								{	/* Globalize/node.scm 326 */
									BgL_variablez00_bglt BgL_integratorz00_2559;

									BgL_integratorz00_2559 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1783);
									{	/* Globalize/node.scm 326 */
										obj_t BgL_method3734z00_2560;

										{	/* Globalize/node.scm 326 */
											BgL_objectz00_bglt BgL_objz00_2561;

											BgL_objz00_2561 =
												(BgL_objectz00_bglt) (BgL_arg4050z00_1788);
											{	/* Globalize/node.scm 326 */
												long BgL_objzd2classzd2numz00_2562;

												BgL_objzd2classzd2numz00_2562 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2561);
												{	/* Globalize/node.scm 326 */
													obj_t BgL_arg2643z00_2563;

													BgL_arg2643z00_2563 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
														(int) (((long) 1)));
													{	/* Globalize/node.scm 326 */
														obj_t BgL_arrayz00_2565;

														int BgL_offsetz00_2566;

														BgL_arrayz00_2565 = BgL_arg2643z00_2563;
														BgL_offsetz00_2566 =
															(int) (BgL_objzd2classzd2numz00_2562);
														{	/* Globalize/node.scm 326 */
															long BgL_offsetz00_2567;

															BgL_offsetz00_2567 =
																((long) (BgL_offsetz00_2566) - OBJECT_TYPE);
															{	/* Globalize/node.scm 326 */
																long BgL_modz00_2568;

																{	/* Globalize/node.scm 326 */
																	int BgL_arg2645z00_2569;

																	BgL_arg2645z00_2569 = (int) (((long) 16));
																	{	/* Globalize/node.scm 326 */
																		long BgL_auxz00_4338;

																		BgL_auxz00_4338 =
																			(long) (BgL_arg2645z00_2569);
																		BgL_modz00_2568 =
																			(BgL_offsetz00_2567 / BgL_auxz00_4338);
																}}
																{	/* Globalize/node.scm 326 */
																	long BgL_restz00_2570;

																	{	/* Globalize/node.scm 326 */
																		int BgL_arg2644z00_2571;

																		BgL_arg2644z00_2571 = (int) (((long) 16));
																		{	/* Globalize/node.scm 326 */
																			long BgL_auxz00_4342;

																			BgL_auxz00_4342 =
																				(long) (BgL_arg2644z00_2571);
																			BgL_restz00_2570 =
																				(BgL_offsetz00_2567 % BgL_auxz00_4342);
																	}}
																	{	/* Globalize/node.scm 326 */

																		BgL_method3734z00_2560 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2565,
																				(int) (BgL_modz00_2568)),
																			(int) (BgL_restz00_2570));
										}}}}}}}}
										BgL_res4180z00_2585 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3734z00_2560) (BgL_method3734z00_2560,
												(obj_t) (BgL_arg4050z00_1788),
												(obj_t) (BgL_integratorz00_2559), BEOA));
								}}
								BgL_arg4049z00_1787 = BgL_res4180z00_2585;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1782))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg4049z00_1787), BUNSPEC);
					}
					{	/* Globalize/node.scm 327 */
						BgL_nodez00_bglt BgL_arg4051z00_1789;

						{	/* Globalize/node.scm 327 */
							BgL_nodez00_bglt BgL_arg4052z00_1790;

							BgL_arg4052z00_1790 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1782))->
								BgL_truez00);
							{	/* Globalize/node.scm 327 */
								BgL_nodez00_bglt BgL_res4183z00_2616;

								{	/* Globalize/node.scm 327 */
									BgL_variablez00_bglt BgL_integratorz00_2590;

									BgL_integratorz00_2590 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1783);
									{	/* Globalize/node.scm 327 */
										obj_t BgL_method3734z00_2591;

										{	/* Globalize/node.scm 327 */
											BgL_objectz00_bglt BgL_objz00_2592;

											BgL_objz00_2592 =
												(BgL_objectz00_bglt) (BgL_arg4052z00_1790);
											{	/* Globalize/node.scm 327 */
												long BgL_objzd2classzd2numz00_2593;

												BgL_objzd2classzd2numz00_2593 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2592);
												{	/* Globalize/node.scm 327 */
													obj_t BgL_arg2643z00_2594;

													BgL_arg2643z00_2594 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
														(int) (((long) 1)));
													{	/* Globalize/node.scm 327 */
														obj_t BgL_arrayz00_2596;

														int BgL_offsetz00_2597;

														BgL_arrayz00_2596 = BgL_arg2643z00_2594;
														BgL_offsetz00_2597 =
															(int) (BgL_objzd2classzd2numz00_2593);
														{	/* Globalize/node.scm 327 */
															long BgL_offsetz00_2598;

															BgL_offsetz00_2598 =
																((long) (BgL_offsetz00_2597) - OBJECT_TYPE);
															{	/* Globalize/node.scm 327 */
																long BgL_modz00_2599;

																{	/* Globalize/node.scm 327 */
																	int BgL_arg2645z00_2600;

																	BgL_arg2645z00_2600 = (int) (((long) 16));
																	{	/* Globalize/node.scm 327 */
																		long BgL_auxz00_4365;

																		BgL_auxz00_4365 =
																			(long) (BgL_arg2645z00_2600);
																		BgL_modz00_2599 =
																			(BgL_offsetz00_2598 / BgL_auxz00_4365);
																}}
																{	/* Globalize/node.scm 327 */
																	long BgL_restz00_2601;

																	{	/* Globalize/node.scm 327 */
																		int BgL_arg2644z00_2602;

																		BgL_arg2644z00_2602 = (int) (((long) 16));
																		{	/* Globalize/node.scm 327 */
																			long BgL_auxz00_4369;

																			BgL_auxz00_4369 =
																				(long) (BgL_arg2644z00_2602);
																			BgL_restz00_2601 =
																				(BgL_offsetz00_2598 % BgL_auxz00_4369);
																	}}
																	{	/* Globalize/node.scm 327 */

																		BgL_method3734z00_2591 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2596,
																				(int) (BgL_modz00_2599)),
																			(int) (BgL_restz00_2601));
										}}}}}}}}
										BgL_res4183z00_2616 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3734z00_2591) (BgL_method3734z00_2591,
												(obj_t) (BgL_arg4052z00_1790),
												(obj_t) (BgL_integratorz00_2590), BEOA));
								}}
								BgL_arg4051z00_1789 = BgL_res4183z00_2616;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1782))->BgL_truez00) =
							((BgL_nodez00_bglt) BgL_arg4051z00_1789), BUNSPEC);
					}
					{	/* Globalize/node.scm 328 */
						BgL_nodez00_bglt BgL_arg4053z00_1791;

						{	/* Globalize/node.scm 328 */
							BgL_nodez00_bglt BgL_arg4054z00_1792;

							BgL_arg4054z00_1792 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1782))->
								BgL_falsez00);
							{	/* Globalize/node.scm 328 */
								BgL_nodez00_bglt BgL_res4186z00_2647;

								{	/* Globalize/node.scm 328 */
									BgL_variablez00_bglt BgL_integratorz00_2621;

									BgL_integratorz00_2621 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1783);
									{	/* Globalize/node.scm 328 */
										obj_t BgL_method3734z00_2622;

										{	/* Globalize/node.scm 328 */
											BgL_objectz00_bglt BgL_objz00_2623;

											BgL_objz00_2623 =
												(BgL_objectz00_bglt) (BgL_arg4054z00_1792);
											{	/* Globalize/node.scm 328 */
												long BgL_objzd2classzd2numz00_2624;

												BgL_objzd2classzd2numz00_2624 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2623);
												{	/* Globalize/node.scm 328 */
													obj_t BgL_arg2643z00_2625;

													BgL_arg2643z00_2625 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
														(int) (((long) 1)));
													{	/* Globalize/node.scm 328 */
														obj_t BgL_arrayz00_2627;

														int BgL_offsetz00_2628;

														BgL_arrayz00_2627 = BgL_arg2643z00_2625;
														BgL_offsetz00_2628 =
															(int) (BgL_objzd2classzd2numz00_2624);
														{	/* Globalize/node.scm 328 */
															long BgL_offsetz00_2629;

															BgL_offsetz00_2629 =
																((long) (BgL_offsetz00_2628) - OBJECT_TYPE);
															{	/* Globalize/node.scm 328 */
																long BgL_modz00_2630;

																{	/* Globalize/node.scm 328 */
																	int BgL_arg2645z00_2631;

																	BgL_arg2645z00_2631 = (int) (((long) 16));
																	{	/* Globalize/node.scm 328 */
																		long BgL_auxz00_4392;

																		BgL_auxz00_4392 =
																			(long) (BgL_arg2645z00_2631);
																		BgL_modz00_2630 =
																			(BgL_offsetz00_2629 / BgL_auxz00_4392);
																}}
																{	/* Globalize/node.scm 328 */
																	long BgL_restz00_2632;

																	{	/* Globalize/node.scm 328 */
																		int BgL_arg2644z00_2633;

																		BgL_arg2644z00_2633 = (int) (((long) 16));
																		{	/* Globalize/node.scm 328 */
																			long BgL_auxz00_4396;

																			BgL_auxz00_4396 =
																				(long) (BgL_arg2644z00_2633);
																			BgL_restz00_2632 =
																				(BgL_offsetz00_2629 % BgL_auxz00_4396);
																	}}
																	{	/* Globalize/node.scm 328 */

																		BgL_method3734z00_2622 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2627,
																				(int) (BgL_modz00_2630)),
																			(int) (BgL_restz00_2632));
										}}}}}}}}
										BgL_res4186z00_2647 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3734z00_2622) (BgL_method3734z00_2622,
												(obj_t) (BgL_arg4054z00_1792),
												(obj_t) (BgL_integratorz00_2621), BEOA));
								}}
								BgL_arg4053z00_1791 = BgL_res4186z00_2647;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1782))->
								BgL_falsez00) =
							((BgL_nodez00_bglt) BgL_arg4053z00_1791), BUNSPEC);
					}
					BgL_auxz00_4327 = BgL_nodez00_1782;
					return (obj_t) (BgL_auxz00_4327);
				}
			}
		}
	}



/* glo!-setq3757 */
	obj_t BGl_gloz12zd2setq3757zc0zzglobaliza7e_nodeza7(obj_t BgL_envz00_3223,
		obj_t BgL_nodez00_3224, obj_t BgL_integratorz00_3225)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 288 */
			{
				BgL_setqz00_bglt BgL_nodez00_1743;

				obj_t BgL_integratorz00_1744;

				BgL_nodez00_1743 = (BgL_setqz00_bglt) (BgL_nodez00_3224);
				BgL_integratorz00_1744 = BgL_integratorz00_3225;
				{	/* Globalize/node.scm 290 */
					BgL_nodez00_bglt BgL_arg4026z00_1748;

					{	/* Globalize/node.scm 290 */
						BgL_nodez00_bglt BgL_arg4027z00_1749;

						BgL_arg4027z00_1749 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_1743))->BgL_valuez00);
						{	/* Globalize/node.scm 290 */
							BgL_nodez00_bglt BgL_res4176z00_2527;

							{	/* Globalize/node.scm 290 */
								BgL_variablez00_bglt BgL_integratorz00_2501;

								BgL_integratorz00_2501 =
									(BgL_variablez00_bglt) (BgL_integratorz00_1744);
								{	/* Globalize/node.scm 290 */
									obj_t BgL_method3734z00_2502;

									{	/* Globalize/node.scm 290 */
										BgL_objectz00_bglt BgL_objz00_2503;

										BgL_objz00_2503 =
											(BgL_objectz00_bglt) (BgL_arg4027z00_1749);
										{	/* Globalize/node.scm 290 */
											long BgL_objzd2classzd2numz00_2504;

											BgL_objzd2classzd2numz00_2504 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2503);
											{	/* Globalize/node.scm 290 */
												obj_t BgL_arg2643z00_2505;

												BgL_arg2643z00_2505 =
													PROCEDURE_REF
													(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
													(int) (((long) 1)));
												{	/* Globalize/node.scm 290 */
													obj_t BgL_arrayz00_2507;

													int BgL_offsetz00_2508;

													BgL_arrayz00_2507 = BgL_arg2643z00_2505;
													BgL_offsetz00_2508 =
														(int) (BgL_objzd2classzd2numz00_2504);
													{	/* Globalize/node.scm 290 */
														long BgL_offsetz00_2509;

														BgL_offsetz00_2509 =
															((long) (BgL_offsetz00_2508) - OBJECT_TYPE);
														{	/* Globalize/node.scm 290 */
															long BgL_modz00_2510;

															{	/* Globalize/node.scm 290 */
																int BgL_arg2645z00_2511;

																BgL_arg2645z00_2511 = (int) (((long) 16));
																{	/* Globalize/node.scm 290 */
																	long BgL_auxz00_4421;

																	BgL_auxz00_4421 =
																		(long) (BgL_arg2645z00_2511);
																	BgL_modz00_2510 =
																		(BgL_offsetz00_2509 / BgL_auxz00_4421);
															}}
															{	/* Globalize/node.scm 290 */
																long BgL_restz00_2512;

																{	/* Globalize/node.scm 290 */
																	int BgL_arg2644z00_2513;

																	BgL_arg2644z00_2513 = (int) (((long) 16));
																	{	/* Globalize/node.scm 290 */
																		long BgL_auxz00_4425;

																		BgL_auxz00_4425 =
																			(long) (BgL_arg2644z00_2513);
																		BgL_restz00_2512 =
																			(BgL_offsetz00_2509 % BgL_auxz00_4425);
																}}
																{	/* Globalize/node.scm 290 */

																	BgL_method3734z00_2502 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2507,
																			(int) (BgL_modz00_2510)),
																		(int) (BgL_restz00_2512));
									}}}}}}}}
									BgL_res4176z00_2527 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3734z00_2502)
										(BgL_method3734z00_2502, (obj_t) (BgL_arg4027z00_1749),
											(obj_t) (BgL_integratorz00_2501), BEOA));
							}}
							BgL_arg4026z00_1748 = BgL_res4176z00_2527;
					}}
					((((BgL_setqz00_bglt) CREF(BgL_nodez00_1743))->BgL_valuez00) =
						((BgL_nodez00_bglt) BgL_arg4026z00_1748), BUNSPEC);
				}
				{	/* Globalize/node.scm 291 */
					BgL_variablez00_bglt BgL_varz00_1750;

					{	/* Globalize/node.scm 291 */
						BgL_varz00_bglt BgL_obj2155z00_2531;

						BgL_obj2155z00_2531 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_1743))->BgL_varz00);
						BgL_varz00_1750 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2531))->BgL_variablez00);
					}
					{	/* Globalize/node.scm 292 */
						obj_t BgL_g3671z00_1751;

						BgL_g3671z00_1751 =
							(((BgL_variablez00_bglt) CREF(BgL_varz00_1750))->
							BgL_fastzd2alphazd2);
						{
							obj_t BgL_varz00_1753;

							obj_t BgL_alphaz00_1754;

							BgL_varz00_1753 = (obj_t) (BgL_varz00_1750);
							BgL_alphaz00_1754 = BgL_g3671z00_1751;
						BgL_zc3anonymousza34028ze3z83_1755:
							if (BGl_iszd2azf3z21zz__objectz00(BgL_alphaz00_1754,
									BGl_localz00zzast_varz00))
								{	/* Globalize/node.scm 294 */
									{	/* Globalize/node.scm 296 */
										BgL_varz00_bglt BgL_arg4030z00_1757;

										BgL_arg4030z00_1757 =
											(((BgL_setqz00_bglt) CREF(BgL_nodez00_1743))->BgL_varz00);
										{
											BgL_variablez00_bglt BgL_auxz00_4444;

											BgL_auxz00_4444 =
												(BgL_variablez00_bglt) (
												(BgL_localz00_bglt) (BgL_alphaz00_1754));
											((((BgL_varz00_bglt) CREF(BgL_arg4030z00_1757))->
													BgL_variablez00) =
												((BgL_variablez00_bglt) BgL_auxz00_4444), BUNSPEC);
										}
									}
									{	/* Globalize/node.scm 297 */
										obj_t BgL_arg4031z00_1758;

										{
											BgL_variablez00_bglt BgL_auxz00_4448;

											BgL_auxz00_4448 =
												(BgL_variablez00_bglt) (
												(BgL_localz00_bglt) (BgL_alphaz00_1754));
											BgL_arg4031z00_1758 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_4448))->
												BgL_fastzd2alphazd2);
										}
										{
											obj_t BgL_alphaz00_4453;

											obj_t BgL_varz00_4452;

											BgL_varz00_4452 = BgL_alphaz00_1754;
											BgL_alphaz00_4453 = BgL_arg4031z00_1758;
											BgL_alphaz00_1754 = BgL_alphaz00_4453;
											BgL_varz00_1753 = BgL_varz00_4452;
											goto BgL_zc3anonymousza34028ze3z83_1755;
										}
									}
								}
							else
								{	/* Globalize/node.scm 298 */
									BgL_variablez00_bglt BgL_varz00_1759;

									{	/* Globalize/node.scm 298 */
										BgL_varz00_bglt BgL_obj2155z00_2539;

										BgL_obj2155z00_2539 =
											(((BgL_setqz00_bglt) CREF(BgL_nodez00_1743))->BgL_varz00);
										BgL_varz00_1759 =
											(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2539))->
											BgL_variablez00);
									}
									{	/* Globalize/node.scm 299 */
										bool_t BgL_testz00_4456;

										{	/* Globalize/node.scm 299 */
											bool_t BgL_testz00_4457;

											{	/* Globalize/node.scm 299 */
												obj_t BgL_obj1812z00_2540;

												BgL_obj1812z00_2540 = (obj_t) (BgL_varz00_1759);
												BgL_testz00_4457 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj1812z00_2540,
													BGl_localz00zzast_varz00);
											}
											if (BgL_testz00_4457)
												{	/* Globalize/node.scm 299 */
													BgL_testz00_4456 =
														BGl_celledzf3zf3zzglobaliza7e_nodeza7
														(BgL_varz00_1759);
												}
											else
												{	/* Globalize/node.scm 299 */
													BgL_testz00_4456 = ((bool_t) 0);
												}
										}
										if (BgL_testz00_4456)
											{	/* Globalize/node.scm 300 */
												BgL_localz00_bglt BgL_azd2varzd2_1761;

												obj_t BgL_locz00_1762;

												BgL_azd2varzd2_1761 =
													BGl_makezd2localzd2svarz00zzast_localz00
													(CNST_TABLE_REF(((long) 9)),
													(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
												{
													BgL_nodez00_bglt BgL_auxz00_4464;

													BgL_auxz00_4464 =
														(BgL_nodez00_bglt) (BgL_nodez00_1743);
													BgL_locz00_1762 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_4464))->
														BgL_locz00);
												}
												{	/* Globalize/node.scm 302 */
													BgL_variablez00_bglt BgL_obj1616z00_2542;

													obj_t BgL_val1615z00_2543;

													BgL_obj1616z00_2542 = BgL_varz00_1759;
													BgL_val1615z00_2543 = CNST_TABLE_REF(((long) 0));
													((((BgL_variablez00_bglt) CREF(BgL_obj1616z00_2542))->
															BgL_accessz00) =
														((obj_t) BgL_val1615z00_2543), BUNSPEC);
												}
												{	/* Globalize/node.scm 303 */
													bool_t BgL_arg4033z00_1763;

													{
														BgL_localz00_bglt BgL_auxz00_4469;

														BgL_auxz00_4469 =
															(BgL_localz00_bglt) (BgL_varz00_1759);
														BgL_arg4033z00_1763 =
															(((BgL_localz00_bglt) CREF(BgL_auxz00_4469))->
															BgL_userzf3zf3);
													}
													((((BgL_localz00_bglt) CREF(BgL_azd2varzd2_1761))->
															BgL_userzf3zf3) =
														((bool_t) BgL_arg4033z00_1763), BUNSPEC);
												}
												{	/* Globalize/node.scm 304 */
													BgL_varz00_bglt BgL_arg4034z00_1764;

													BgL_arg4034z00_1764 =
														(((BgL_setqz00_bglt) CREF(BgL_nodez00_1743))->
														BgL_varz00);
													{
														BgL_typez00_bglt BgL_auxz00_4476;

														BgL_nodez00_bglt BgL_auxz00_4474;

														BgL_auxz00_4476 =
															(BgL_typez00_bglt)
															(BGl_za2objza2z00zztype_cachez00);
														BgL_auxz00_4474 =
															(BgL_nodez00_bglt) (BgL_arg4034z00_1764);
														((((BgL_nodez00_bglt) CREF(BgL_auxz00_4474))->
																BgL_typez00) =
															((BgL_typez00_bglt) BgL_auxz00_4476), BUNSPEC);
												}}
												{	/* Globalize/node.scm 305 */
													BgL_svarz00_bglt BgL_obj3672z00_1765;

													{
														BgL_svarz00_bglt BgL_auxz00_4479;

														{	/* Globalize/node.scm 305 */
															BgL_valuez00_bglt BgL_auxz00_4480;

															{
																BgL_variablez00_bglt BgL_auxz00_4481;

																BgL_auxz00_4481 =
																	(BgL_variablez00_bglt) (BgL_azd2varzd2_1761);
																BgL_auxz00_4480 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_4481))->BgL_valuez00);
															}
															BgL_auxz00_4479 =
																(BgL_svarz00_bglt) (BgL_auxz00_4480);
														}
														BgL_obj3672z00_1765 =
															((BgL_svarz00_bglt) BgL_auxz00_4479);
													}
													{	/* Globalize/node.scm 305 */
														obj_t BgL_auxz00_4488;

														BgL_objectz00_bglt BgL_auxz00_4486;

														BgL_auxz00_4488 =
															BGl_wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7
															(((bool_t) 0), ((long) -10), ((long) -10),
															((bool_t) 0));
														BgL_auxz00_4486 =
															(BgL_objectz00_bglt) (BgL_obj3672z00_1765);
														BGL_OBJECT_WIDENING_SET(BgL_auxz00_4486,
															BgL_auxz00_4488);
													}
													BGL_OBJECT_CLASS_NUM_SET(
														(BgL_objectz00_bglt) (BgL_obj3672z00_1765),
														BGl_classzd2numzd2zz__objectz00
														(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7));
													BgL_obj3672z00_1765;
												}
												{	/* Globalize/node.scm 307 */
													obj_t BgL_arg4038z00_1769;

													BgL_boxzd2setz12zc0_bglt BgL_arg4039z00_1770;

													{	/* Globalize/node.scm 310 */
														obj_t BgL_arg4040z00_1771;

														{	/* Globalize/node.scm 310 */
															BgL_nodez00_bglt BgL_arg4042z00_1773;

															BgL_arg4042z00_1773 =
																(((BgL_setqz00_bglt) CREF(BgL_nodez00_1743))->
																BgL_valuez00);
															BgL_arg4040z00_1771 =
																MAKE_PAIR((obj_t) (BgL_azd2varzd2_1761),
																(obj_t) (BgL_arg4042z00_1773));
														}
														{	/* Globalize/node.scm 310 */
															obj_t BgL_list4041z00_1772;

															BgL_list4041z00_1772 =
																MAKE_PAIR(BgL_arg4040z00_1771, BNIL);
															BgL_arg4038z00_1769 = BgL_list4041z00_1772;
													}}
													{	/* Globalize/node.scm 314 */
														BgL_varz00_bglt BgL_arg4043z00_1774;

														BgL_varz00_bglt BgL_arg4044z00_1775;

														BgL_arg4043z00_1774 =
															(((BgL_setqz00_bglt) CREF(BgL_nodez00_1743))->
															BgL_varz00);
														BgL_arg4044z00_1775 =
															BGl_makezd2varzd2zzast_nodez00(BgL_locz00_1762,
															(BgL_typez00_bglt)
															(BGl_za2_za2z00zztype_cachez00),
															(BgL_variablez00_bglt) (BgL_azd2varzd2_1761));
														BgL_arg4039z00_1770 =
															BGl_makezd2boxzd2setz12z12zzast_nodez00
															(BgL_locz00_1762,
															(BgL_typez00_bglt)
															(BGl_za2_za2z00zztype_cachez00),
															BgL_arg4043z00_1774,
															(BgL_nodez00_bglt) (BgL_arg4044z00_1775));
													}
													return
														(obj_t) (BGl_makezd2letzd2varz00zzast_nodez00
														(BgL_locz00_1762,
															(BgL_typez00_bglt)
															(BGl_za2_za2z00zztype_cachez00), BUNSPEC,
															BINT(((long) -1)), BgL_arg4038z00_1769,
															(BgL_nodez00_bglt) (BgL_arg4039z00_1770),
															((bool_t) 1)));
											}}
										else
											{	/* Globalize/node.scm 299 */
												return (obj_t) (BgL_nodez00_1743);
											}
									}
								}
						}
					}
				}
			}
		}
	}



/* glo!-cast3755 */
	obj_t BGl_gloz12zd2cast3755zc0zzglobaliza7e_nodeza7(obj_t BgL_envz00_3226,
		obj_t BgL_nodez00_3227, obj_t BgL_integratorz00_3228)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 280 */
			{
				BgL_castz00_bglt BgL_nodez00_1735;

				obj_t BgL_integratorz00_1736;

				{	/* Globalize/node.scm 281 */
					BgL_castz00_bglt BgL_auxz00_4514;

					BgL_nodez00_1735 = (BgL_castz00_bglt) (BgL_nodez00_3227);
					BgL_integratorz00_1736 = BgL_integratorz00_3228;
					{	/* Globalize/node.scm 281 */
						BgL_nodez00_bglt BgL_arg4024z00_2469;

						BgL_arg4024z00_2469 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1735))->BgL_argz00);
						{	/* Globalize/node.scm 281 */
							BgL_nodez00_bglt BgL_res4173z00_2498;

							{	/* Globalize/node.scm 281 */
								BgL_variablez00_bglt BgL_integratorz00_2472;

								BgL_integratorz00_2472 =
									(BgL_variablez00_bglt) (BgL_integratorz00_1736);
								{	/* Globalize/node.scm 281 */
									obj_t BgL_method3734z00_2473;

									{	/* Globalize/node.scm 281 */
										BgL_objectz00_bglt BgL_objz00_2474;

										BgL_objz00_2474 =
											(BgL_objectz00_bglt) (BgL_arg4024z00_2469);
										{	/* Globalize/node.scm 281 */
											long BgL_objzd2classzd2numz00_2475;

											BgL_objzd2classzd2numz00_2475 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2474);
											{	/* Globalize/node.scm 281 */
												obj_t BgL_arg2643z00_2476;

												BgL_arg2643z00_2476 =
													PROCEDURE_REF
													(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
													(int) (((long) 1)));
												{	/* Globalize/node.scm 281 */
													obj_t BgL_arrayz00_2478;

													int BgL_offsetz00_2479;

													BgL_arrayz00_2478 = BgL_arg2643z00_2476;
													BgL_offsetz00_2479 =
														(int) (BgL_objzd2classzd2numz00_2475);
													{	/* Globalize/node.scm 281 */
														long BgL_offsetz00_2480;

														BgL_offsetz00_2480 =
															((long) (BgL_offsetz00_2479) - OBJECT_TYPE);
														{	/* Globalize/node.scm 281 */
															long BgL_modz00_2481;

															{	/* Globalize/node.scm 281 */
																int BgL_arg2645z00_2482;

																BgL_arg2645z00_2482 = (int) (((long) 16));
																{	/* Globalize/node.scm 281 */
																	long BgL_auxz00_4525;

																	BgL_auxz00_4525 =
																		(long) (BgL_arg2645z00_2482);
																	BgL_modz00_2481 =
																		(BgL_offsetz00_2480 / BgL_auxz00_4525);
															}}
															{	/* Globalize/node.scm 281 */
																long BgL_restz00_2483;

																{	/* Globalize/node.scm 281 */
																	int BgL_arg2644z00_2484;

																	BgL_arg2644z00_2484 = (int) (((long) 16));
																	{	/* Globalize/node.scm 281 */
																		long BgL_auxz00_4529;

																		BgL_auxz00_4529 =
																			(long) (BgL_arg2644z00_2484);
																		BgL_restz00_2483 =
																			(BgL_offsetz00_2480 % BgL_auxz00_4529);
																}}
																{	/* Globalize/node.scm 281 */

																	BgL_method3734z00_2473 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2478,
																			(int) (BgL_modz00_2481)),
																		(int) (BgL_restz00_2483));
									}}}}}}}}
									BgL_res4173z00_2498 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3734z00_2473)
										(BgL_method3734z00_2473, (obj_t) (BgL_arg4024z00_2469),
											(obj_t) (BgL_integratorz00_2472), BEOA));
							}} BgL_res4173z00_2498;
					}}
					BgL_auxz00_4514 = BgL_nodez00_1735;
					return (obj_t) (BgL_auxz00_4514);
				}
			}
		}
	}



/* glo!-extern3753 */
	obj_t BGl_gloz12zd2extern3753zc0zzglobaliza7e_nodeza7(obj_t BgL_envz00_3229,
		obj_t BgL_nodez00_3230, obj_t BgL_integratorz00_3231)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 272 */
			{
				BgL_externz00_bglt BgL_nodez00_1727;

				obj_t BgL_integratorz00_1728;

				{	/* Globalize/node.scm 273 */
					BgL_externz00_bglt BgL_auxz00_4543;

					BgL_nodez00_1727 = (BgL_externz00_bglt) (BgL_nodez00_3230);
					BgL_integratorz00_1728 = BgL_integratorz00_3231;
					{	/* Globalize/node.scm 273 */
						obj_t BgL_arg4022z00_2466;

						BgL_arg4022z00_2466 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1727))->BgL_exprza2za2);
						BGl_gloza2z12zb0zzglobaliza7e_nodeza7(BgL_arg4022z00_2466,
							BgL_integratorz00_1728);
					}
					BgL_auxz00_4543 = BgL_nodez00_1727;
					return (obj_t) (BgL_auxz00_4543);
				}
			}
		}
	}



/* glo!-funcall3751 */
	obj_t BGl_gloz12zd2funcall3751zc0zzglobaliza7e_nodeza7(obj_t BgL_envz00_3232,
		obj_t BgL_nodez00_3233, obj_t BgL_integratorz00_3234)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 263 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1717;

				obj_t BgL_integratorz00_1718;

				{	/* Globalize/node.scm 264 */
					BgL_funcallz00_bglt BgL_auxz00_4548;

					BgL_nodez00_1717 = (BgL_funcallz00_bglt) (BgL_nodez00_3233);
					BgL_integratorz00_1718 = BgL_integratorz00_3234;
					{	/* Globalize/node.scm 265 */
						BgL_nodez00_bglt BgL_arg4018z00_1722;

						{	/* Globalize/node.scm 265 */
							BgL_nodez00_bglt BgL_arg4019z00_1723;

							BgL_arg4019z00_1723 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1717))->BgL_funz00);
							{	/* Globalize/node.scm 265 */
								BgL_nodez00_bglt BgL_res4170z00_2461;

								{	/* Globalize/node.scm 265 */
									BgL_variablez00_bglt BgL_integratorz00_2435;

									BgL_integratorz00_2435 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1718);
									{	/* Globalize/node.scm 265 */
										obj_t BgL_method3734z00_2436;

										{	/* Globalize/node.scm 265 */
											BgL_objectz00_bglt BgL_objz00_2437;

											BgL_objz00_2437 =
												(BgL_objectz00_bglt) (BgL_arg4019z00_1723);
											{	/* Globalize/node.scm 265 */
												long BgL_objzd2classzd2numz00_2438;

												BgL_objzd2classzd2numz00_2438 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2437);
												{	/* Globalize/node.scm 265 */
													obj_t BgL_arg2643z00_2439;

													BgL_arg2643z00_2439 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
														(int) (((long) 1)));
													{	/* Globalize/node.scm 265 */
														obj_t BgL_arrayz00_2441;

														int BgL_offsetz00_2442;

														BgL_arrayz00_2441 = BgL_arg2643z00_2439;
														BgL_offsetz00_2442 =
															(int) (BgL_objzd2classzd2numz00_2438);
														{	/* Globalize/node.scm 265 */
															long BgL_offsetz00_2443;

															BgL_offsetz00_2443 =
																((long) (BgL_offsetz00_2442) - OBJECT_TYPE);
															{	/* Globalize/node.scm 265 */
																long BgL_modz00_2444;

																{	/* Globalize/node.scm 265 */
																	int BgL_arg2645z00_2445;

																	BgL_arg2645z00_2445 = (int) (((long) 16));
																	{	/* Globalize/node.scm 265 */
																		long BgL_auxz00_4559;

																		BgL_auxz00_4559 =
																			(long) (BgL_arg2645z00_2445);
																		BgL_modz00_2444 =
																			(BgL_offsetz00_2443 / BgL_auxz00_4559);
																}}
																{	/* Globalize/node.scm 265 */
																	long BgL_restz00_2446;

																	{	/* Globalize/node.scm 265 */
																		int BgL_arg2644z00_2447;

																		BgL_arg2644z00_2447 = (int) (((long) 16));
																		{	/* Globalize/node.scm 265 */
																			long BgL_auxz00_4563;

																			BgL_auxz00_4563 =
																				(long) (BgL_arg2644z00_2447);
																			BgL_restz00_2446 =
																				(BgL_offsetz00_2443 % BgL_auxz00_4563);
																	}}
																	{	/* Globalize/node.scm 265 */

																		BgL_method3734z00_2436 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2441,
																				(int) (BgL_modz00_2444)),
																			(int) (BgL_restz00_2446));
										}}}}}}}}
										BgL_res4170z00_2461 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3734z00_2436) (BgL_method3734z00_2436,
												(obj_t) (BgL_arg4019z00_1723),
												(obj_t) (BgL_integratorz00_2435), BEOA));
								}}
								BgL_arg4018z00_1722 = BgL_res4170z00_2461;
						}}
						((((BgL_funcallz00_bglt) CREF(BgL_nodez00_1717))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg4018z00_1722), BUNSPEC);
					}
					{	/* Globalize/node.scm 266 */
						obj_t BgL_arg4020z00_1724;

						BgL_arg4020z00_1724 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1717))->BgL_argsz00);
						BGl_gloza2z12zb0zzglobaliza7e_nodeza7(BgL_arg4020z00_1724,
							BgL_integratorz00_1718);
					}
					BgL_auxz00_4548 = BgL_nodez00_1717;
					return (obj_t) (BgL_auxz00_4548);
				}
			}
		}
	}



/* glo!-app-ly3749 */
	obj_t BGl_gloz12zd2appzd2ly3749z12zzglobaliza7e_nodeza7(obj_t BgL_envz00_3235,
		obj_t BgL_nodez00_3236, obj_t BgL_integratorz00_3237)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 254 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1706;

				obj_t BgL_integratorz00_1707;

				{	/* Globalize/node.scm 255 */
					BgL_appzd2lyzd2_bglt BgL_auxz00_4580;

					BgL_nodez00_1706 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_3236);
					BgL_integratorz00_1707 = BgL_integratorz00_3237;
					{	/* Globalize/node.scm 256 */
						BgL_nodez00_bglt BgL_arg4013z00_1711;

						{	/* Globalize/node.scm 256 */
							BgL_nodez00_bglt BgL_arg4014z00_1712;

							BgL_arg4014z00_1712 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1706))->BgL_funz00);
							{	/* Globalize/node.scm 256 */
								BgL_nodez00_bglt BgL_res4164z00_2399;

								{	/* Globalize/node.scm 256 */
									BgL_variablez00_bglt BgL_integratorz00_2373;

									BgL_integratorz00_2373 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1707);
									{	/* Globalize/node.scm 256 */
										obj_t BgL_method3734z00_2374;

										{	/* Globalize/node.scm 256 */
											BgL_objectz00_bglt BgL_objz00_2375;

											BgL_objz00_2375 =
												(BgL_objectz00_bglt) (BgL_arg4014z00_1712);
											{	/* Globalize/node.scm 256 */
												long BgL_objzd2classzd2numz00_2376;

												BgL_objzd2classzd2numz00_2376 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2375);
												{	/* Globalize/node.scm 256 */
													obj_t BgL_arg2643z00_2377;

													BgL_arg2643z00_2377 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
														(int) (((long) 1)));
													{	/* Globalize/node.scm 256 */
														obj_t BgL_arrayz00_2379;

														int BgL_offsetz00_2380;

														BgL_arrayz00_2379 = BgL_arg2643z00_2377;
														BgL_offsetz00_2380 =
															(int) (BgL_objzd2classzd2numz00_2376);
														{	/* Globalize/node.scm 256 */
															long BgL_offsetz00_2381;

															BgL_offsetz00_2381 =
																((long) (BgL_offsetz00_2380) - OBJECT_TYPE);
															{	/* Globalize/node.scm 256 */
																long BgL_modz00_2382;

																{	/* Globalize/node.scm 256 */
																	int BgL_arg2645z00_2383;

																	BgL_arg2645z00_2383 = (int) (((long) 16));
																	{	/* Globalize/node.scm 256 */
																		long BgL_auxz00_4591;

																		BgL_auxz00_4591 =
																			(long) (BgL_arg2645z00_2383);
																		BgL_modz00_2382 =
																			(BgL_offsetz00_2381 / BgL_auxz00_4591);
																}}
																{	/* Globalize/node.scm 256 */
																	long BgL_restz00_2384;

																	{	/* Globalize/node.scm 256 */
																		int BgL_arg2644z00_2385;

																		BgL_arg2644z00_2385 = (int) (((long) 16));
																		{	/* Globalize/node.scm 256 */
																			long BgL_auxz00_4595;

																			BgL_auxz00_4595 =
																				(long) (BgL_arg2644z00_2385);
																			BgL_restz00_2384 =
																				(BgL_offsetz00_2381 % BgL_auxz00_4595);
																	}}
																	{	/* Globalize/node.scm 256 */

																		BgL_method3734z00_2374 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2379,
																				(int) (BgL_modz00_2382)),
																			(int) (BgL_restz00_2384));
										}}}}}}}}
										BgL_res4164z00_2399 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3734z00_2374) (BgL_method3734z00_2374,
												(obj_t) (BgL_arg4014z00_1712),
												(obj_t) (BgL_integratorz00_2373), BEOA));
								}}
								BgL_arg4013z00_1711 = BgL_res4164z00_2399;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1706))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg4013z00_1711), BUNSPEC);
					}
					{	/* Globalize/node.scm 257 */
						BgL_nodez00_bglt BgL_arg4015z00_1713;

						{	/* Globalize/node.scm 257 */
							BgL_nodez00_bglt BgL_arg4016z00_1714;

							BgL_arg4016z00_1714 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1706))->BgL_argz00);
							{	/* Globalize/node.scm 257 */
								BgL_nodez00_bglt BgL_res4167z00_2430;

								{	/* Globalize/node.scm 257 */
									BgL_variablez00_bglt BgL_integratorz00_2404;

									BgL_integratorz00_2404 =
										(BgL_variablez00_bglt) (BgL_integratorz00_1707);
									{	/* Globalize/node.scm 257 */
										obj_t BgL_method3734z00_2405;

										{	/* Globalize/node.scm 257 */
											BgL_objectz00_bglt BgL_objz00_2406;

											BgL_objz00_2406 =
												(BgL_objectz00_bglt) (BgL_arg4016z00_1714);
											{	/* Globalize/node.scm 257 */
												long BgL_objzd2classzd2numz00_2407;

												BgL_objzd2classzd2numz00_2407 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2406);
												{	/* Globalize/node.scm 257 */
													obj_t BgL_arg2643z00_2408;

													BgL_arg2643z00_2408 =
														PROCEDURE_REF
														(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
														(int) (((long) 1)));
													{	/* Globalize/node.scm 257 */
														obj_t BgL_arrayz00_2410;

														int BgL_offsetz00_2411;

														BgL_arrayz00_2410 = BgL_arg2643z00_2408;
														BgL_offsetz00_2411 =
															(int) (BgL_objzd2classzd2numz00_2407);
														{	/* Globalize/node.scm 257 */
															long BgL_offsetz00_2412;

															BgL_offsetz00_2412 =
																((long) (BgL_offsetz00_2411) - OBJECT_TYPE);
															{	/* Globalize/node.scm 257 */
																long BgL_modz00_2413;

																{	/* Globalize/node.scm 257 */
																	int BgL_arg2645z00_2414;

																	BgL_arg2645z00_2414 = (int) (((long) 16));
																	{	/* Globalize/node.scm 257 */
																		long BgL_auxz00_4618;

																		BgL_auxz00_4618 =
																			(long) (BgL_arg2645z00_2414);
																		BgL_modz00_2413 =
																			(BgL_offsetz00_2412 / BgL_auxz00_4618);
																}}
																{	/* Globalize/node.scm 257 */
																	long BgL_restz00_2415;

																	{	/* Globalize/node.scm 257 */
																		int BgL_arg2644z00_2416;

																		BgL_arg2644z00_2416 = (int) (((long) 16));
																		{	/* Globalize/node.scm 257 */
																			long BgL_auxz00_4622;

																			BgL_auxz00_4622 =
																				(long) (BgL_arg2644z00_2416);
																			BgL_restz00_2415 =
																				(BgL_offsetz00_2412 % BgL_auxz00_4622);
																	}}
																	{	/* Globalize/node.scm 257 */

																		BgL_method3734z00_2405 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2410,
																				(int) (BgL_modz00_2413)),
																			(int) (BgL_restz00_2415));
										}}}}}}}}
										BgL_res4167z00_2430 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3734z00_2405) (BgL_method3734z00_2405,
												(obj_t) (BgL_arg4016z00_1714),
												(obj_t) (BgL_integratorz00_2404), BEOA));
								}}
								BgL_arg4015z00_1713 = BgL_res4167z00_2430;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1706))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg4015z00_1713), BUNSPEC);
					}
					BgL_auxz00_4580 = BgL_nodez00_1706;
					return (obj_t) (BgL_auxz00_4580);
				}
			}
		}
	}



/* glo!-app3747 */
	obj_t BGl_gloz12zd2app3747zc0zzglobaliza7e_nodeza7(obj_t BgL_envz00_3238,
		obj_t BgL_nodez00_3239, obj_t BgL_integratorz00_3240)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 189 */
			{
				BgL_appz00_bglt BgL_nodez00_1650;

				obj_t BgL_integratorz00_1651;

				{	/* Globalize/node.scm 190 */
					BgL_appz00_bglt BgL_auxz00_4637;

					BgL_nodez00_1650 = (BgL_appz00_bglt) (BgL_nodez00_3239);
					BgL_integratorz00_1651 = BgL_integratorz00_3240;
					{	/* Globalize/node.scm 191 */
						BgL_variablez00_bglt BgL_funz00_1655;

						{	/* Globalize/node.scm 191 */
							BgL_varz00_bglt BgL_obj2155z00_2281;

							BgL_obj2155z00_2281 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1650))->BgL_funz00);
							BgL_funz00_1655 =
								(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2281))->
								BgL_variablez00);
						}
						{	/* Globalize/node.scm 191 */
							BgL_valuez00_bglt BgL_infoz00_1656;

							BgL_infoz00_1656 =
								(((BgL_variablez00_bglt) CREF(BgL_funz00_1655))->BgL_valuez00);
							{	/* Globalize/node.scm 192 */

								{	/* Globalize/node.scm 201 */
									bool_t BgL_testz00_4641;

									{	/* Globalize/node.scm 201 */
										bool_t BgL_testz00_4642;

										{	/* Globalize/node.scm 201 */
											obj_t BgL_obj1812z00_2283;

											BgL_obj1812z00_2283 = (obj_t) (BgL_funz00_1655);
											BgL_testz00_4642 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj1812z00_2283,
												BGl_localz00zzast_varz00);
										}
										if (BgL_testz00_4642)
											{	/* Globalize/node.scm 202 */
												bool_t BgL_testz00_4645;

												if (
													((obj_t) (
															(BgL_localz00_bglt) (BgL_funz00_1655)) ==
														BgL_integratorz00_1651))
													{	/* Globalize/node.scm 203 */
														bool_t BgL_testz00_4650;

														{	/* Globalize/node.scm 203 */
															BgL_localzf2ginfozf2_bglt BgL_obj3520z00_2284;

															BgL_obj3520z00_2284 =
																(BgL_localzf2ginfozf2_bglt) (
																(BgL_localz00_bglt) (BgL_funz00_1655));
															{
																obj_t BgL_auxz00_4653;

																{	/* Globalize/node.scm 203 */
																	BgL_objectz00_bglt BgL_auxz00_4654;

																	BgL_auxz00_4654 =
																		(BgL_objectz00_bglt) (BgL_obj3520z00_2284);
																	BgL_auxz00_4653 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_4654);
																}
																BgL_testz00_4650 =
																	(((BgL_localzf2ginfozf2_bglt)
																		CREF(BgL_auxz00_4653))->BgL_escapezf3zf3);
															}
														}
														if (BgL_testz00_4650)
															{	/* Globalize/node.scm 203 */
																BgL_testz00_4645 = ((bool_t) 0);
															}
														else
															{	/* Globalize/node.scm 203 */
																BgL_testz00_4645 = ((bool_t) 1);
															}
													}
												else
													{	/* Globalize/node.scm 202 */
														BgL_testz00_4645 = ((bool_t) 1);
													}
												if (BgL_testz00_4645)
													{	/* Globalize/node.scm 204 */
														BgL_sfunzf2ginfozf2_bglt BgL_obj3323z00_2285;

														BgL_obj3323z00_2285 =
															(BgL_sfunzf2ginfozf2_bglt) (BgL_infoz00_1656);
														{
															obj_t BgL_auxz00_4659;

															{	/* Globalize/node.scm 204 */
																BgL_objectz00_bglt BgL_auxz00_4660;

																BgL_auxz00_4660 =
																	(BgL_objectz00_bglt) (BgL_obj3323z00_2285);
																BgL_auxz00_4659 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_4660);
															}
															BgL_testz00_4641 =
																(((BgL_sfunzf2ginfozf2_bglt)
																	CREF(BgL_auxz00_4659))->BgL_gzf3zf3);
														}
													}
												else
													{	/* Globalize/node.scm 202 */
														BgL_testz00_4641 = ((bool_t) 0);
													}
											}
										else
											{	/* Globalize/node.scm 201 */
												BgL_testz00_4641 = ((bool_t) 0);
											}
									}
									if (BgL_testz00_4641)
										{	/* Globalize/node.scm 207 */
											BgL_varz00_bglt BgL_arg3978z00_1658;

											{	/* Globalize/node.scm 207 */
												obj_t BgL_arg3979z00_1659;

												BgL_typez00_bglt BgL_arg3980z00_1660;

												BgL_globalz00_bglt BgL_arg3981z00_1661;

												{
													BgL_nodez00_bglt BgL_auxz00_4664;

													BgL_auxz00_4664 =
														(BgL_nodez00_bglt) (BgL_nodez00_1650);
													BgL_arg3979z00_1659 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_4664))->
														BgL_locz00);
												}
												{
													BgL_nodez00_bglt BgL_auxz00_4667;

													BgL_auxz00_4667 =
														(BgL_nodez00_bglt) (BgL_nodez00_1650);
													BgL_arg3980z00_1660 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_4667))->
														BgL_typez00);
												}
												BgL_arg3981z00_1661 =
													BGl_thezd2globalzd2zzglobaliza7e_localzd2ze3globalz96(
													(BgL_localz00_bglt) (BgL_funz00_1655));
												BgL_arg3978z00_1658 =
													BGl_makezd2varzd2zzast_nodez00(BgL_arg3979z00_1659,
													BgL_arg3980z00_1660,
													(BgL_variablez00_bglt) (BgL_arg3981z00_1661));
											}
											((((BgL_appz00_bglt) CREF(BgL_nodez00_1650))->
													BgL_funz00) =
												((BgL_varz00_bglt) BgL_arg3978z00_1658), BUNSPEC);
										}
									else
										{	/* Globalize/node.scm 201 */
											BFALSE;
										}
								}
								{
									obj_t BgL_nodesz00_1668;

									{	/* Globalize/node.scm 212 */
										obj_t BgL_arg3986z00_1667;

										BgL_arg3986z00_1667 =
											(((BgL_appz00_bglt) CREF(BgL_nodez00_1650))->BgL_argsz00);
										BgL_nodesz00_1668 = BgL_arg3986z00_1667;
									BgL_zc3anonymousza33987ze3z83_1669:
										if (NULLP(BgL_nodesz00_1668))
											{	/* Globalize/node.scm 213 */
												CNST_TABLE_REF(((long) 2));
											}
										else
											{	/* Globalize/node.scm 213 */
												{	/* Globalize/node.scm 216 */
													BgL_nodez00_bglt BgL_arg3989z00_1671;

													{	/* Globalize/node.scm 216 */
														obj_t BgL_arg3990z00_1672;

														BgL_arg3990z00_1672 = CAR(BgL_nodesz00_1668);
														{	/* Globalize/node.scm 216 */
															BgL_nodez00_bglt BgL_res4158z00_2320;

															{	/* Globalize/node.scm 216 */
																BgL_nodez00_bglt BgL_nodez00_2293;

																BgL_variablez00_bglt BgL_integratorz00_2294;

																BgL_nodez00_2293 =
																	(BgL_nodez00_bglt) (BgL_arg3990z00_1672);
																BgL_integratorz00_2294 =
																	(BgL_variablez00_bglt)
																	(BgL_integratorz00_1651);
																{	/* Globalize/node.scm 216 */
																	obj_t BgL_method3734z00_2295;

																	{	/* Globalize/node.scm 216 */
																		BgL_objectz00_bglt BgL_objz00_2296;

																		BgL_objz00_2296 =
																			(BgL_objectz00_bglt) (BgL_nodez00_2293);
																		{	/* Globalize/node.scm 216 */
																			long BgL_objzd2classzd2numz00_2297;

																			BgL_objzd2classzd2numz00_2297 =
																				BGL_OBJECT_CLASS_NUM(BgL_objz00_2296);
																			{	/* Globalize/node.scm 216 */
																				obj_t BgL_arg2643z00_2298;

																				BgL_arg2643z00_2298 =
																					PROCEDURE_REF
																					(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
																					(int) (((long) 1)));
																				{	/* Globalize/node.scm 216 */
																					obj_t BgL_arrayz00_2300;

																					int BgL_offsetz00_2301;

																					BgL_arrayz00_2300 =
																						BgL_arg2643z00_2298;
																					BgL_offsetz00_2301 =
																						(int)
																						(BgL_objzd2classzd2numz00_2297);
																					{	/* Globalize/node.scm 216 */
																						long BgL_offsetz00_2302;

																						BgL_offsetz00_2302 =
																							(
																							(long) (BgL_offsetz00_2301) -
																							OBJECT_TYPE);
																						{	/* Globalize/node.scm 216 */
																							long BgL_modz00_2303;

																							{	/* Globalize/node.scm 216 */
																								int BgL_arg2645z00_2304;

																								BgL_arg2645z00_2304 =
																									(int) (((long) 16));
																								{	/* Globalize/node.scm 216 */
																									long BgL_auxz00_4690;

																									BgL_auxz00_4690 =
																										(long)
																										(BgL_arg2645z00_2304);
																									BgL_modz00_2303 =
																										(BgL_offsetz00_2302 /
																										BgL_auxz00_4690);
																							}}
																							{	/* Globalize/node.scm 216 */
																								long BgL_restz00_2305;

																								{	/* Globalize/node.scm 216 */
																									int BgL_arg2644z00_2306;

																									BgL_arg2644z00_2306 =
																										(int) (((long) 16));
																									{	/* Globalize/node.scm 216 */
																										long BgL_auxz00_4694;

																										BgL_auxz00_4694 =
																											(long)
																											(BgL_arg2644z00_2306);
																										BgL_restz00_2305 =
																											(BgL_offsetz00_2302 %
																											BgL_auxz00_4694);
																								}}
																								{	/* Globalize/node.scm 216 */

																									BgL_method3734z00_2295 =
																										VECTOR_REF(VECTOR_REF
																										(BgL_arrayz00_2300,
																											(int) (BgL_modz00_2303)),
																										(int) (BgL_restz00_2305));
																	}}}}}}}}
																	BgL_res4158z00_2320 =
																		(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																		(BgL_method3734z00_2295)
																		(BgL_method3734z00_2295,
																			(obj_t) (BgL_nodez00_2293),
																			(obj_t) (BgL_integratorz00_2294), BEOA));
															}}
															BgL_arg3989z00_1671 = BgL_res4158z00_2320;
													}}
													{	/* Globalize/node.scm 216 */
														obj_t BgL_auxz00_4706;

														BgL_auxz00_4706 = (obj_t) (BgL_arg3989z00_1671);
														SET_CAR(BgL_nodesz00_1668, BgL_auxz00_4706);
												}}
												{
													obj_t BgL_nodesz00_4709;

													BgL_nodesz00_4709 = CDR(BgL_nodesz00_1668);
													BgL_nodesz00_1668 = BgL_nodesz00_4709;
													goto BgL_zc3anonymousza33987ze3z83_1669;
												}
											}
									}
								}
								{	/* Globalize/node.scm 219 */
									bool_t BgL_testz00_4711;

									{	/* Globalize/node.scm 219 */
										bool_t BgL_testz00_4712;

										{	/* Globalize/node.scm 219 */
											obj_t BgL_obj1751z00_2324;

											BgL_obj1751z00_2324 = (obj_t) (BgL_funz00_1655);
											BgL_testz00_4712 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_2324,
												BGl_globalz00zzast_varz00);
										}
										if (BgL_testz00_4712)
											{	/* Globalize/node.scm 219 */
												BgL_testz00_4711 = ((bool_t) 1);
											}
										else
											{	/* Globalize/node.scm 220 */
												bool_t BgL_testz00_4715;

												{	/* Globalize/node.scm 220 */
													BgL_sfunzf2ginfozf2_bglt BgL_obj3323z00_2325;

													BgL_obj3323z00_2325 =
														(BgL_sfunzf2ginfozf2_bglt) (BgL_infoz00_1656);
													{
														obj_t BgL_auxz00_4717;

														{	/* Globalize/node.scm 220 */
															BgL_objectz00_bglt BgL_auxz00_4718;

															BgL_auxz00_4718 =
																(BgL_objectz00_bglt) (BgL_obj3323z00_2325);
															BgL_auxz00_4717 =
																BGL_OBJECT_WIDENING(BgL_auxz00_4718);
														}
														BgL_testz00_4715 =
															(((BgL_sfunzf2ginfozf2_bglt)
																CREF(BgL_auxz00_4717))->BgL_gzf3zf3);
													}
												}
												if (BgL_testz00_4715)
													{	/* Globalize/node.scm 220 */
														if (
															((obj_t) (BgL_funz00_1655) ==
																BgL_integratorz00_1651))
															{	/* Globalize/node.scm 222 */
																BgL_localzf2ginfozf2_bglt BgL_obj3520z00_2326;

																BgL_obj3520z00_2326 =
																	(BgL_localzf2ginfozf2_bglt) (BgL_funz00_1655);
																{
																	obj_t BgL_auxz00_4726;

																	{	/* Globalize/node.scm 222 */
																		BgL_objectz00_bglt BgL_auxz00_4727;

																		BgL_auxz00_4727 =
																			(BgL_objectz00_bglt)
																			(BgL_obj3520z00_2326);
																		BgL_auxz00_4726 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_4727);
																	}
																	BgL_testz00_4711 =
																		(((BgL_localzf2ginfozf2_bglt)
																			CREF(BgL_auxz00_4726))->BgL_escapezf3zf3);
																}
															}
														else
															{	/* Globalize/node.scm 221 */
																BgL_testz00_4711 = ((bool_t) 0);
															}
													}
												else
													{	/* Globalize/node.scm 220 */
														BgL_testz00_4711 = ((bool_t) 1);
													}
											}
									}
									if (BgL_testz00_4711)
										{	/* Globalize/node.scm 219 */
											CNST_TABLE_REF(((long) 2));
										}
									else
										{	/* Globalize/node.scm 224 */
											bool_t BgL_testz00_4732;

											{	/* Globalize/node.scm 224 */
												BgL_localzf2ginfozf2_bglt BgL_obj3520z00_2327;

												BgL_obj3520z00_2327 =
													(BgL_localzf2ginfozf2_bglt) (BgL_funz00_1655);
												{
													obj_t BgL_auxz00_4734;

													{	/* Globalize/node.scm 224 */
														BgL_objectz00_bglt BgL_auxz00_4735;

														BgL_auxz00_4735 =
															(BgL_objectz00_bglt) (BgL_obj3520z00_2327);
														BgL_auxz00_4734 =
															BGL_OBJECT_WIDENING(BgL_auxz00_4735);
													}
													BgL_testz00_4732 =
														(((BgL_localzf2ginfozf2_bglt)
															CREF(BgL_auxz00_4734))->BgL_escapezf3zf3);
												}
											}
											if (BgL_testz00_4732)
												{	/* Globalize/node.scm 228 */
													obj_t BgL_arg3994z00_1677;

													{	/* Globalize/node.scm 228 */
														BgL_nodez00_bglt BgL_arg3995z00_1678;

														obj_t BgL_arg3996z00_1679;

														{	/* Globalize/node.scm 228 */
															BgL_varz00_bglt BgL_arg3997z00_1680;

															{	/* Globalize/node.scm 228 */
																obj_t BgL_arg3998z00_1681;

																obj_t BgL_arg3999z00_1682;

																{
																	BgL_nodez00_bglt BgL_auxz00_4739;

																	BgL_auxz00_4739 =
																		(BgL_nodez00_bglt) (BgL_nodez00_1650);
																	BgL_arg3998z00_1681 =
																		(((BgL_nodez00_bglt)
																			CREF(BgL_auxz00_4739))->BgL_locz00);
																}
																{	/* Globalize/node.scm 230 */
																	obj_t BgL_arg4000z00_1683;

																	{
																		BgL_nodez00_bglt BgL_auxz00_4742;

																		BgL_auxz00_4742 =
																			(BgL_nodez00_bglt) (BgL_nodez00_1650);
																		BgL_arg4000z00_1683 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_auxz00_4742))->BgL_locz00);
																	}
																	BgL_arg3999z00_1682 =
																		BGl_thezd2closurezd2zzglobaliza7e_freeza7
																		(BgL_funz00_1655, BgL_arg4000z00_1683);
																}
																BgL_arg3997z00_1680 =
																	BGl_makezd2varzd2zzast_nodez00
																	(BgL_arg3998z00_1681,
																	(BgL_typez00_bglt)
																	(BGl_za2_za2z00zztype_cachez00),
																	(BgL_variablez00_bglt) (BgL_arg3999z00_1682));
															}
															{	/* Globalize/node.scm 227 */
																BgL_nodez00_bglt BgL_res4161z00_2357;

																{	/* Globalize/node.scm 227 */
																	BgL_nodez00_bglt BgL_nodez00_2330;

																	BgL_variablez00_bglt BgL_integratorz00_2331;

																	BgL_nodez00_2330 =
																		(BgL_nodez00_bglt) (BgL_arg3997z00_1680);
																	BgL_integratorz00_2331 =
																		(BgL_variablez00_bglt)
																		(BgL_integratorz00_1651);
																	{	/* Globalize/node.scm 227 */
																		obj_t BgL_method3734z00_2332;

																		{	/* Globalize/node.scm 227 */
																			BgL_objectz00_bglt BgL_objz00_2333;

																			BgL_objz00_2333 =
																				(BgL_objectz00_bglt) (BgL_nodez00_2330);
																			{	/* Globalize/node.scm 227 */
																				long BgL_objzd2classzd2numz00_2334;

																				BgL_objzd2classzd2numz00_2334 =
																					BGL_OBJECT_CLASS_NUM(BgL_objz00_2333);
																				{	/* Globalize/node.scm 227 */
																					obj_t BgL_arg2643z00_2335;

																					BgL_arg2643z00_2335 =
																						PROCEDURE_REF
																						(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
																						(int) (((long) 1)));
																					{	/* Globalize/node.scm 227 */
																						obj_t BgL_arrayz00_2337;

																						int BgL_offsetz00_2338;

																						BgL_arrayz00_2337 =
																							BgL_arg2643z00_2335;
																						BgL_offsetz00_2338 =
																							(int)
																							(BgL_objzd2classzd2numz00_2334);
																						{	/* Globalize/node.scm 227 */
																							long BgL_offsetz00_2339;

																							BgL_offsetz00_2339 =
																								(
																								(long) (BgL_offsetz00_2338) -
																								OBJECT_TYPE);
																							{	/* Globalize/node.scm 227 */
																								long BgL_modz00_2340;

																								{	/* Globalize/node.scm 227 */
																									int BgL_arg2645z00_2341;

																									BgL_arg2645z00_2341 =
																										(int) (((long) 16));
																									{	/* Globalize/node.scm 227 */
																										long BgL_auxz00_4759;

																										BgL_auxz00_4759 =
																											(long)
																											(BgL_arg2645z00_2341);
																										BgL_modz00_2340 =
																											(BgL_offsetz00_2339 /
																											BgL_auxz00_4759);
																								}}
																								{	/* Globalize/node.scm 227 */
																									long BgL_restz00_2342;

																									{	/* Globalize/node.scm 227 */
																										int BgL_arg2644z00_2343;

																										BgL_arg2644z00_2343 =
																											(int) (((long) 16));
																										{	/* Globalize/node.scm 227 */
																											long BgL_auxz00_4763;

																											BgL_auxz00_4763 =
																												(long)
																												(BgL_arg2644z00_2343);
																											BgL_restz00_2342 =
																												(BgL_offsetz00_2339 %
																												BgL_auxz00_4763);
																									}}
																									{	/* Globalize/node.scm 227 */

																										BgL_method3734z00_2332 =
																											VECTOR_REF(VECTOR_REF
																											(BgL_arrayz00_2337,
																												(int)
																												(BgL_modz00_2340)),
																											(int) (BgL_restz00_2342));
																		}}}}}}}}
																		BgL_res4161z00_2357 =
																			(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																			(BgL_method3734z00_2332)
																			(BgL_method3734z00_2332,
																				(obj_t) (BgL_nodez00_2330),
																				(obj_t) (BgL_integratorz00_2331),
																				BEOA));
																}}
																BgL_arg3995z00_1678 = BgL_res4161z00_2357;
														}}
														BgL_arg3996z00_1679 =
															(((BgL_appz00_bglt) CREF(BgL_nodez00_1650))->
															BgL_argsz00);
														BgL_arg3994z00_1677 =
															MAKE_PAIR((obj_t) (BgL_arg3995z00_1678),
															BgL_arg3996z00_1679);
													}
													((((BgL_appz00_bglt) CREF(BgL_nodez00_1650))->
															BgL_argsz00) =
														((obj_t) BgL_arg3994z00_1677), BUNSPEC);
												}
											else
												{	/* Globalize/node.scm 236 */
													obj_t BgL_g3659z00_1684;

													{	/* Globalize/node.scm 237 */
														BgL_sfunzf2ginfozf2_bglt BgL_obj3367z00_2361;

														BgL_obj3367z00_2361 =
															(BgL_sfunzf2ginfozf2_bglt) (BgL_infoz00_1656);
														{
															obj_t BgL_auxz00_4780;

															{	/* Globalize/node.scm 237 */
																BgL_objectz00_bglt BgL_auxz00_4781;

																BgL_auxz00_4781 =
																	(BgL_objectz00_bglt) (BgL_obj3367z00_2361);
																BgL_auxz00_4780 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_4781);
															}
															BgL_g3659z00_1684 =
																(((BgL_sfunzf2ginfozf2_bglt)
																	CREF(BgL_auxz00_4780))->BgL_kapturedz00);
														}
													}
													{
														obj_t BgL_newzd2actualszd2_1687;

														obj_t BgL_kapturedz00_1688;

														{	/* Globalize/node.scm 236 */
															obj_t BgL_arg4001z00_1686;

															BgL_arg4001z00_1686 =
																(((BgL_appz00_bglt) CREF(BgL_nodez00_1650))->
																BgL_argsz00);
															BgL_newzd2actualszd2_1687 = BgL_arg4001z00_1686;
															BgL_kapturedz00_1688 = BgL_g3659z00_1684;
														BgL_zc3anonymousza34002ze3z83_1689:
															if (NULLP(BgL_kapturedz00_1688))
																{	/* Globalize/node.scm 238 */
																	((((BgL_appz00_bglt) CREF(BgL_nodez00_1650))->
																			BgL_argsz00) =
																		((obj_t) BgL_newzd2actualszd2_1687),
																		BUNSPEC);
																}
															else
																{	/* Globalize/node.scm 240 */
																	obj_t BgL_kapz00_1691;

																	BgL_kapz00_1691 = CAR(BgL_kapturedz00_1688);
																	{	/* Globalize/node.scm 240 */
																		obj_t BgL_alphaz00_1692;

																		{
																			BgL_variablez00_bglt BgL_auxz00_4790;

																			BgL_auxz00_4790 =
																				(BgL_variablez00_bglt)
																				(BgL_kapz00_1691);
																			BgL_alphaz00_1692 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_auxz00_4790))->
																				BgL_fastzd2alphazd2);
																		}
																		{	/* Globalize/node.scm 241 */
																			obj_t BgL_varz00_1693;

																			if (BGl_iszd2azf3z21zz__objectz00
																				(BgL_alphaz00_1692,
																					BGl_localz00zzast_varz00))
																				{	/* Globalize/node.scm 242 */
																					BgL_varz00_1693 = BgL_alphaz00_1692;
																				}
																			else
																				{	/* Globalize/node.scm 242 */
																					BgL_varz00_1693 = BgL_kapz00_1691;
																				}
																			{	/* Globalize/node.scm 242 */

																				{	/* Globalize/node.scm 244 */
																					obj_t BgL_arg4004z00_1694;

																					obj_t BgL_arg4005z00_1695;

																					{	/* Globalize/node.scm 244 */
																						BgL_varz00_bglt BgL_arg4006z00_1696;

																						{	/* Globalize/node.scm 244 */
																							obj_t BgL_arg4007z00_1697;

																							{
																								BgL_nodez00_bglt
																									BgL_auxz00_4795;
																								BgL_auxz00_4795 =
																									(BgL_nodez00_bglt)
																									(BgL_nodez00_1650);
																								BgL_arg4007z00_1697 =
																									(((BgL_nodez00_bglt)
																										CREF(BgL_auxz00_4795))->
																									BgL_locz00);
																							}
																							BgL_arg4006z00_1696 =
																								BGl_makezd2varzd2zzast_nodez00
																								(BgL_arg4007z00_1697,
																								(BgL_typez00_bglt)
																								(BGl_za2_za2z00zztype_cachez00),
																								(BgL_variablez00_bglt)
																								(BgL_varz00_1693));
																						}
																						BgL_arg4004z00_1694 =
																							MAKE_PAIR(
																							(obj_t) (BgL_arg4006z00_1696),
																							BgL_newzd2actualszd2_1687);
																					}
																					BgL_arg4005z00_1695 =
																						CDR(BgL_kapturedz00_1688);
																					{
																						obj_t BgL_kapturedz00_4805;

																						obj_t BgL_newzd2actualszd2_4804;

																						BgL_newzd2actualszd2_4804 =
																							BgL_arg4004z00_1694;
																						BgL_kapturedz00_4805 =
																							BgL_arg4005z00_1695;
																						BgL_kapturedz00_1688 =
																							BgL_kapturedz00_4805;
																						BgL_newzd2actualszd2_1687 =
																							BgL_newzd2actualszd2_4804;
																						goto
																							BgL_zc3anonymousza34002ze3z83_1689;
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
								BgL_auxz00_4637 = BgL_nodez00_1650;
							}
						}
					}
					return (obj_t) (BgL_auxz00_4637);
				}
			}
		}
	}



/* glo!-sequence3745 */
	obj_t BGl_gloz12zd2sequence3745zc0zzglobaliza7e_nodeza7(obj_t BgL_envz00_3241,
		obj_t BgL_nodez00_3242, obj_t BgL_integratorz00_3243)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 181 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1642;

				obj_t BgL_integratorz00_1643;

				{	/* Globalize/node.scm 182 */
					BgL_sequencez00_bglt BgL_auxz00_4808;

					BgL_nodez00_1642 = (BgL_sequencez00_bglt) (BgL_nodez00_3242);
					BgL_integratorz00_1643 = BgL_integratorz00_3243;
					{	/* Globalize/node.scm 182 */
						obj_t BgL_arg3975z00_2278;

						BgL_arg3975z00_2278 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1642))->BgL_nodesz00);
						BGl_gloza2z12zb0zzglobaliza7e_nodeza7(BgL_arg3975z00_2278,
							BgL_integratorz00_1643);
					}
					BgL_auxz00_4808 = BgL_nodez00_1642;
					return (obj_t) (BgL_auxz00_4808);
				}
			}
		}
	}



/* glo!-closure3743 */
	obj_t BGl_gloz12zd2closure3743zc0zzglobaliza7e_nodeza7(obj_t BgL_envz00_3244,
		obj_t BgL_nodez00_3245, obj_t BgL_integratorz00_3246)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 170 */
			{
				BgL_closurez00_bglt BgL_nodez00_1630;

				obj_t BgL_integratorz00_1631;

				{	/* Globalize/node.scm 171 */
					BgL_nodez00_bglt BgL_auxz00_4813;

					BgL_nodez00_1630 = (BgL_closurez00_bglt) (BgL_nodez00_3245);
					BgL_integratorz00_1631 = BgL_integratorz00_3246;
					{	/* Globalize/node.scm 173 */
						BgL_varz00_bglt BgL_arg3968z00_1635;

						{	/* Globalize/node.scm 173 */
							obj_t BgL_arg3969z00_1636;

							obj_t BgL_arg3970z00_1637;

							{
								BgL_nodez00_bglt BgL_auxz00_4814;

								BgL_auxz00_4814 = (BgL_nodez00_bglt) (BgL_nodez00_1630);
								BgL_arg3969z00_1636 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4814))->BgL_locz00);
							}
							{	/* Globalize/node.scm 175 */
								BgL_variablez00_bglt BgL_arg3972z00_1638;

								obj_t BgL_arg3973z00_1639;

								{
									BgL_varz00_bglt BgL_auxz00_4817;

									BgL_auxz00_4817 = (BgL_varz00_bglt) (BgL_nodez00_1630);
									BgL_arg3972z00_1638 =
										(((BgL_varz00_bglt) CREF(BgL_auxz00_4817))->
										BgL_variablez00);
								}
								{
									BgL_nodez00_bglt BgL_auxz00_4820;

									BgL_auxz00_4820 = (BgL_nodez00_bglt) (BgL_nodez00_1630);
									BgL_arg3973z00_1639 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_4820))->BgL_locz00);
								}
								BgL_arg3970z00_1637 =
									BGl_thezd2closurezd2zzglobaliza7e_freeza7(BgL_arg3972z00_1638,
									BgL_arg3973z00_1639);
							}
							BgL_arg3968z00_1635 =
								BGl_makezd2varzd2zzast_nodez00(BgL_arg3969z00_1636,
								(BgL_typez00_bglt) (BGl_za2procedureza2z00zztype_cachez00),
								(BgL_variablez00_bglt) (BgL_arg3970z00_1637));
						}
						{	/* Globalize/node.scm 172 */
							BgL_nodez00_bglt BgL_res4155z00_2276;

							{	/* Globalize/node.scm 172 */
								BgL_nodez00_bglt BgL_nodez00_2249;

								BgL_variablez00_bglt BgL_integratorz00_2250;

								BgL_nodez00_2249 = (BgL_nodez00_bglt) (BgL_arg3968z00_1635);
								BgL_integratorz00_2250 =
									(BgL_variablez00_bglt) (BgL_integratorz00_1631);
								{	/* Globalize/node.scm 172 */
									obj_t BgL_method3734z00_2251;

									{	/* Globalize/node.scm 172 */
										BgL_objectz00_bglt BgL_objz00_2252;

										BgL_objz00_2252 = (BgL_objectz00_bglt) (BgL_nodez00_2249);
										{	/* Globalize/node.scm 172 */
											long BgL_objzd2classzd2numz00_2253;

											BgL_objzd2classzd2numz00_2253 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2252);
											{	/* Globalize/node.scm 172 */
												obj_t BgL_arg2643z00_2254;

												BgL_arg2643z00_2254 =
													PROCEDURE_REF
													(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
													(int) (((long) 1)));
												{	/* Globalize/node.scm 172 */
													obj_t BgL_arrayz00_2256;

													int BgL_offsetz00_2257;

													BgL_arrayz00_2256 = BgL_arg2643z00_2254;
													BgL_offsetz00_2257 =
														(int) (BgL_objzd2classzd2numz00_2253);
													{	/* Globalize/node.scm 172 */
														long BgL_offsetz00_2258;

														BgL_offsetz00_2258 =
															((long) (BgL_offsetz00_2257) - OBJECT_TYPE);
														{	/* Globalize/node.scm 172 */
															long BgL_modz00_2259;

															{	/* Globalize/node.scm 172 */
																int BgL_arg2645z00_2260;

																BgL_arg2645z00_2260 = (int) (((long) 16));
																{	/* Globalize/node.scm 172 */
																	long BgL_auxz00_4837;

																	BgL_auxz00_4837 =
																		(long) (BgL_arg2645z00_2260);
																	BgL_modz00_2259 =
																		(BgL_offsetz00_2258 / BgL_auxz00_4837);
															}}
															{	/* Globalize/node.scm 172 */
																long BgL_restz00_2261;

																{	/* Globalize/node.scm 172 */
																	int BgL_arg2644z00_2262;

																	BgL_arg2644z00_2262 = (int) (((long) 16));
																	{	/* Globalize/node.scm 172 */
																		long BgL_auxz00_4841;

																		BgL_auxz00_4841 =
																			(long) (BgL_arg2644z00_2262);
																		BgL_restz00_2261 =
																			(BgL_offsetz00_2258 % BgL_auxz00_4841);
																}}
																{	/* Globalize/node.scm 172 */

																	BgL_method3734z00_2251 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2256,
																			(int) (BgL_modz00_2259)),
																		(int) (BgL_restz00_2261));
									}}}}}}}}
									BgL_res4155z00_2276 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3734z00_2251)
										(BgL_method3734z00_2251, (obj_t) (BgL_nodez00_2249),
											(obj_t) (BgL_integratorz00_2250), BEOA));
							}}
							BgL_auxz00_4813 = BgL_res4155z00_2276;
					}}
					return (obj_t) (BgL_auxz00_4813);
				}
			}
		}
	}



/* glo!-var3741 */
	obj_t BGl_gloz12zd2var3741zc0zzglobaliza7e_nodeza7(obj_t BgL_envz00_3247,
		obj_t BgL_nodez00_3248, obj_t BgL_integratorz00_3249)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 143 */
			{
				BgL_varz00_bglt BgL_nodez00_1614;

				obj_t BgL_integratorz00_1615;

				BgL_nodez00_1614 = (BgL_varz00_bglt) (BgL_nodez00_3248);
				BgL_integratorz00_1615 = BgL_integratorz00_3249;
				{	/* Globalize/node.scm 144 */
					BgL_variablez00_bglt BgL_variablez00_1618;

					BgL_variablez00_1618 =
						(((BgL_varz00_bglt) CREF(BgL_nodez00_1614))->BgL_variablez00);
					{	/* Globalize/node.scm 144 */
						obj_t BgL_alphaz00_1619;

						BgL_alphaz00_1619 =
							(((BgL_variablez00_bglt) CREF(BgL_variablez00_1618))->
							BgL_fastzd2alphazd2);
						{	/* Globalize/node.scm 145 */

							if (BGl_iszd2azf3z21zz__objectz00(BgL_alphaz00_1619,
									BGl_localz00zzast_varz00))
								{	/* Globalize/node.scm 147 */
									{
										BgL_variablez00_bglt BgL_auxz00_4859;

										BgL_auxz00_4859 =
											(BgL_variablez00_bglt) (
											(BgL_localz00_bglt) (BgL_alphaz00_1619));
										((((BgL_varz00_bglt) CREF(BgL_nodez00_1614))->
												BgL_variablez00) =
											((BgL_variablez00_bglt) BgL_auxz00_4859), BUNSPEC);
									}
									{	/* Globalize/node.scm 149 */
										BgL_typez00_bglt BgL_arg3960z00_1621;

										{
											BgL_variablez00_bglt BgL_auxz00_4863;

											BgL_auxz00_4863 =
												(BgL_variablez00_bglt) (
												(BgL_localz00_bglt) (BgL_alphaz00_1619));
											BgL_arg3960z00_1621 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_4863))->
												BgL_typez00);
										}
										{
											BgL_nodez00_bglt BgL_auxz00_4867;

											BgL_auxz00_4867 = (BgL_nodez00_bglt) (BgL_nodez00_1614);
											((((BgL_nodez00_bglt) CREF(BgL_auxz00_4867))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_arg3960z00_1621), BUNSPEC);
										}
									}
									{	/* Globalize/node.scm 150 */
										BgL_nodez00_bglt BgL_res4152z00_2237;

										{	/* Globalize/node.scm 150 */
											BgL_nodez00_bglt BgL_nodez00_2210;

											BgL_variablez00_bglt BgL_integratorz00_2211;

											BgL_nodez00_2210 = (BgL_nodez00_bglt) (BgL_nodez00_1614);
											BgL_integratorz00_2211 =
												(BgL_variablez00_bglt) (BgL_integratorz00_1615);
											{	/* Globalize/node.scm 150 */
												obj_t BgL_method3734z00_2212;

												{	/* Globalize/node.scm 150 */
													BgL_objectz00_bglt BgL_objz00_2213;

													BgL_objz00_2213 =
														(BgL_objectz00_bglt) (BgL_nodez00_2210);
													{	/* Globalize/node.scm 150 */
														long BgL_objzd2classzd2numz00_2214;

														BgL_objzd2classzd2numz00_2214 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2213);
														{	/* Globalize/node.scm 150 */
															obj_t BgL_arg2643z00_2215;

															BgL_arg2643z00_2215 =
																PROCEDURE_REF
																(BGl_gloz12zd2envzc0zzglobaliza7e_nodeza7,
																(int) (((long) 1)));
															{	/* Globalize/node.scm 150 */
																obj_t BgL_arrayz00_2217;

																int BgL_offsetz00_2218;

																BgL_arrayz00_2217 = BgL_arg2643z00_2215;
																BgL_offsetz00_2218 =
																	(int) (BgL_objzd2classzd2numz00_2214);
																{	/* Globalize/node.scm 150 */
																	long BgL_offsetz00_2219;

																	BgL_offsetz00_2219 =
																		((long) (BgL_offsetz00_2218) - OBJECT_TYPE);
																	{	/* Globalize/node.scm 150 */
																		long BgL_modz00_2220;

																		{	/* Globalize/node.scm 150 */
																			int BgL_arg2645z00_2221;

																			BgL_arg2645z00_2221 = (int) (((long) 16));
																			{	/* Globalize/node.scm 150 */
																				long BgL_auxz00_4880;

																				BgL_auxz00_4880 =
																					(long) (BgL_arg2645z00_2221);
																				BgL_modz00_2220 =
																					(BgL_offsetz00_2219 /
																					BgL_auxz00_4880);
																		}}
																		{	/* Globalize/node.scm 150 */
																			long BgL_restz00_2222;

																			{	/* Globalize/node.scm 150 */
																				int BgL_arg2644z00_2223;

																				BgL_arg2644z00_2223 =
																					(int) (((long) 16));
																				{	/* Globalize/node.scm 150 */
																					long BgL_auxz00_4884;

																					BgL_auxz00_4884 =
																						(long) (BgL_arg2644z00_2223);
																					BgL_restz00_2222 =
																						(BgL_offsetz00_2219 %
																						BgL_auxz00_4884);
																			}}
																			{	/* Globalize/node.scm 150 */

																				BgL_method3734z00_2212 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2217,
																						(int) (BgL_modz00_2220)),
																					(int) (BgL_restz00_2222));
												}}}}}}}}
												BgL_res4152z00_2237 =
													(BgL_nodez00_bglt) (PROCEDURE_ENTRY
													(BgL_method3734z00_2212) (BgL_method3734z00_2212,
														(obj_t) (BgL_nodez00_2210),
														(obj_t) (BgL_integratorz00_2211), BEOA));
										}}
										return (obj_t) (BgL_res4152z00_2237);
									}
								}
							else
								{	/* Globalize/node.scm 151 */
									bool_t BgL_testz00_4897;

									{	/* Globalize/node.scm 151 */
										obj_t BgL_obj1751z00_2238;

										BgL_obj1751z00_2238 = (obj_t) (BgL_variablez00_1618);
										BgL_testz00_4897 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_2238,
											BGl_globalz00zzast_varz00);
									}
									if (BgL_testz00_4897)
										{	/* Globalize/node.scm 151 */
											return (obj_t) (BgL_nodez00_1614);
										}
									else
										{	/* Globalize/node.scm 151 */
											if (BGl_celledzf3zf3zzglobaliza7e_nodeza7
												(BgL_variablez00_1618))
												{	/* Globalize/node.scm 153 */
													{	/* Globalize/node.scm 154 */
														BgL_variablez00_bglt BgL_obj1616z00_2239;

														obj_t BgL_val1615z00_2240;

														BgL_obj1616z00_2239 = BgL_variablez00_1618;
														BgL_val1615z00_2240 = CNST_TABLE_REF(((long) 0));
														((((BgL_variablez00_bglt)
																	CREF(BgL_obj1616z00_2239))->BgL_accessz00) =
															((obj_t) BgL_val1615z00_2240), BUNSPEC);
													}
													{
														BgL_typez00_bglt BgL_auxz00_4907;

														BgL_nodez00_bglt BgL_auxz00_4905;

														BgL_auxz00_4907 =
															(BgL_typez00_bglt)
															(BGl_za2objza2z00zztype_cachez00);
														BgL_auxz00_4905 =
															(BgL_nodez00_bglt) (BgL_nodez00_1614);
														((((BgL_nodez00_bglt) CREF(BgL_auxz00_4905))->
																BgL_typez00) =
															((BgL_typez00_bglt) BgL_auxz00_4907), BUNSPEC);
													}
													{	/* Globalize/node.scm 161 */
														obj_t BgL_arg3963z00_1624;

														BgL_typez00_bglt BgL_arg3964z00_1625;

														{
															BgL_nodez00_bglt BgL_auxz00_4910;

															BgL_auxz00_4910 =
																(BgL_nodez00_bglt) (BgL_nodez00_1614);
															BgL_arg3963z00_1624 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_4910))->
																BgL_locz00);
														}
														{	/* Globalize/node.scm 162 */
															BgL_variablez00_bglt BgL_obj1608z00_2245;

															BgL_obj1608z00_2245 =
																(((BgL_varz00_bglt) CREF(BgL_nodez00_1614))->
																BgL_variablez00);
															BgL_arg3964z00_1625 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_obj1608z00_2245))->BgL_typez00);
														}
														return
															(obj_t) (BGl_makezd2boxzd2refz00zzast_nodez00
															(BgL_arg3963z00_1624, BgL_arg3964z00_1625,
																BUNSPEC, BINT(((long) -1)), BgL_nodez00_1614));
												}}
											else
												{	/* Globalize/node.scm 153 */
													return (obj_t) (BgL_nodez00_1614);
												}
										}
								}
						}
					}
				}
			}
		}
	}



/* glo!-kwote3738 */
	obj_t BGl_gloz12zd2kwote3738zc0zzglobaliza7e_nodeza7(obj_t BgL_envz00_3250,
		obj_t BgL_nodez00_3251, obj_t BgL_integratorz00_3252)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 137 */
			return (obj_t) ((BgL_kwotez00_bglt) (BgL_nodez00_3251));
		}
	}



/* glo!-atom3736 */
	obj_t BGl_gloz12zd2atom3736zc0zzglobaliza7e_nodeza7(obj_t BgL_envz00_3253,
		obj_t BgL_nodez00_3254, obj_t BgL_integratorz00_3255)
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 131 */
			return (obj_t) ((BgL_atomz00_bglt) (BgL_nodez00_3254));
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_nodeza7()
	{
		AN_OBJECT;
		{	/* Globalize/node.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4256z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4256z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4256z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4256z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 341705556),
				BSTRING_TO_STRING(BGl_string4256z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4256z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4256z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string4256z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string4256z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string4256z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string4256z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(((long) 242972228),
				BSTRING_TO_STRING(BGl_string4256z00zzglobaliza7e_nodeza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_localzd2ze3globalz96(((long)
					76915944), BSTRING_TO_STRING(BGl_string4256z00zzglobaliza7e_nodeza7));
			return BGl_modulezd2initializa7ationz75zztools_errorz00(((long)
					139755433),
				BSTRING_TO_STRING(BGl_string4256z00zzglobaliza7e_nodeza7));
		}
	}

#ifdef __cplusplus
}
#endif
