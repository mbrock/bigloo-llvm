/*===========================================================================*/
/*   (Globalize/free.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/free.scm)*/
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

	typedef struct BgL_sexitzf2ginfozf2_bgl
	{
		bool_t BgL_gzf3zf3;
		bool_t BgL_kapturedzf3zf3;
		long BgL_freezd2markzd2;
		long BgL_markz00;
	}                       *BgL_sexitzf2ginfozf2_bglt;

	typedef struct BgL_localzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		bool_t BgL_globaliza7edzf3z54;
	}                       *BgL_localzf2ginfozf2_bglt;


	static obj_t BGl__nodezd2freezd2zzglobaliza7e_freeza7(obj_t, obj_t, obj_t);
	static obj_t BGl__thezd2globalzd2closurez00zzglobaliza7e_freeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_nodezd2freezd2boxzd2setz123743zc0zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_thezd2globalzd2closurez00zzglobaliza7e_freeza7(BgL_globalz00_bglt,
		obj_t);
	static obj_t BGl_nodezd2freezd2select3725z00zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl__thezd2closurezd2zzglobaliza7e_freeza7(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	static obj_t BGl_nodezd2freezd2fail3723z00zzglobaliza7e_freeza7(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_nodezd2freezd2conditiona3721z00zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzglobaliza7e_freeza7();
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2freezd2funcall3711z00zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2freezd2var3701z00zzglobaliza7e_freeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t
		BGl_internalzd2getzd2freezd2varsz12zc0zzglobaliza7e_freeza7
		(BgL_nodez00_bglt, BgL_localz00_bglt);
	static obj_t BGl_toplevelzd2initzd2zzglobaliza7e_freeza7();
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_nodezd2freezd2makezd2box3738zd2zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_freezd2fromzd2zzglobaliza7e_freeza7(obj_t,
		BgL_localz00_bglt);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern BgL_globalz00_bglt
		BGl_makezd2globalzd2closurez00zzglobaliza7e_globalzd2closurez75
		(BgL_globalz00_bglt);
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_closurez00zzast_nodez00;
	static obj_t BGl_nodezd2freezd2boxzd2ref3741zd2zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_freeza7();
	extern obj_t BGl_setqz00zzast_nodez00;
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t
		BGl_nodezd2freezd2jumpzd2exzd2it3735z00zzglobaliza7e_freeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_freeza7 = BUNSPEC;
	extern obj_t BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7;
	extern BgL_atomz00_bglt BGl_makezd2atomzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t);
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_freeza7();
	static obj_t BGl__freezd2fromzd2zzglobaliza7e_freeza7(obj_t, obj_t, obj_t);
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_za2integratorza2z00zzglobaliza7e_freeza7 = BUNSPEC;
	static obj_t BGl_bindzd2variablez12zc0zzglobaliza7e_freeza7(BgL_localz00_bglt,
		BgL_localz00_bglt);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_wideningzd2localzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t,
		bool_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static long BGl_za2roundza2z00zzglobaliza7e_freeza7;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_freeza7();
	static obj_t BGl_nodezd2freezd2letzd2fun3728zd2zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2freezd2closure3703z00zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2freezd2letzd2var3730zd2zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_nodezd2freezd2zzglobaliza7e_freeza7(BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7(bool_t,
		long, long, bool_t);
	extern obj_t BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7;
	static obj_t BGl_nodezd2freeza2z70zzglobaliza7e_freeza7(obj_t, obj_t);
	static obj_t BGl_nodezd2freezd2cast3717z00zzglobaliza7e_freeza7(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	static obj_t BGl_thezd2localzd2closurez00zzglobaliza7e_freeza7(obj_t, obj_t);
	static obj_t BGl_nodezd2freezd2extern3714z00zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl__getzd2freezd2varsz00zzglobaliza7e_freeza7(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_markzd2variablez12zc0zzglobaliza7e_freeza7(BgL_localz00_bglt);
	static obj_t
		BGl_nodezd2freezd2setzd2exzd2it3732z00zzglobaliza7e_freeza7(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_nodezd2freezd2appzd2ly3709zd2zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7;
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2freezd2varsz00zzglobaliza7e_freeza7(BgL_nodez00_bglt,
		BgL_localz00_bglt);
	extern obj_t BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7;
	static obj_t BGl__nodezd2freezd2default3698z00zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_nodezd2freezd2setq3719z00zzglobaliza7e_freeza7(obj_t, obj_t,
		obj_t);
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_freezd2variablezf3z21zzglobaliza7e_freeza7(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_thezd2closurezd2zzglobaliza7e_freeza7(BgL_variablez00_bglt, obj_t);
	static obj_t BGl_nodezd2freezd2app3707z00zzglobaliza7e_freeza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_freeza7();
	static obj_t BGl_nodezd2freezd2sequence3705z00zzglobaliza7e_freeza7(obj_t,
		obj_t, obj_t);
	static obj_t __cnst[6];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4053z00zzglobaliza7e_freeza7,
		BgL_bgl_nodeza7d2freeza7d2va4076z00,
		BGl_nodezd2freezd2var3701z00zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4054z00zzglobaliza7e_freeza7,
		BgL_bgl_nodeza7d2freeza7d2cl4077z00,
		BGl_nodezd2freezd2closure3703z00zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4055z00zzglobaliza7e_freeza7,
		BgL_bgl_nodeza7d2freeza7d2se4078z00,
		BGl_nodezd2freezd2sequence3705z00zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4056z00zzglobaliza7e_freeza7,
		BgL_bgl_nodeza7d2freeza7d2ap4079z00,
		BGl_nodezd2freezd2app3707z00zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4057z00zzglobaliza7e_freeza7,
		BgL_bgl_nodeza7d2freeza7d2ap4080z00,
		BGl_nodezd2freezd2appzd2ly3709zd2zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4058z00zzglobaliza7e_freeza7,
		BgL_bgl_nodeza7d2freeza7d2fu4081z00,
		BGl_nodezd2freezd2funcall3711z00zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4060z00zzglobaliza7e_freeza7,
		BgL_bgl_nodeza7d2freeza7d2ca4082z00,
		BGl_nodezd2freezd2cast3717z00zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4059z00zzglobaliza7e_freeza7,
		BgL_bgl_nodeza7d2freeza7d2ex4083z00,
		BGl_nodezd2freezd2extern3714z00zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4061z00zzglobaliza7e_freeza7,
		BgL_bgl_nodeza7d2freeza7d2se4084z00,
		BGl_nodezd2freezd2setq3719z00zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4062z00zzglobaliza7e_freeza7,
		BgL_bgl_nodeza7d2freeza7d2co4085z00,
		BGl_nodezd2freezd2conditiona3721z00zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4063z00zzglobaliza7e_freeza7,
		BgL_bgl_nodeza7d2freeza7d2fa4086z00,
		BGl_nodezd2freezd2fail3723z00zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4064z00zzglobaliza7e_freeza7,
		BgL_bgl_nodeza7d2freeza7d2se4087z00,
		BGl_nodezd2freezd2select3725z00zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4065z00zzglobaliza7e_freeza7,
		BgL_bgl_nodeza7d2freeza7d2le4088z00,
		BGl_nodezd2freezd2letzd2fun3728zd2zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4066z00zzglobaliza7e_freeza7,
		BgL_bgl_nodeza7d2freeza7d2le4089z00,
		BGl_nodezd2freezd2letzd2var3730zd2zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4067z00zzglobaliza7e_freeza7,
		BgL_bgl_nodeza7d2freeza7d2se4090z00,
		BGl_nodezd2freezd2setzd2exzd2it3732z00zzglobaliza7e_freeza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4068z00zzglobaliza7e_freeza7,
		BgL_bgl_nodeza7d2freeza7d2ju4091z00,
		BGl_nodezd2freezd2jumpzd2exzd2it3735z00zzglobaliza7e_freeza7, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4070z00zzglobaliza7e_freeza7,
		BgL_bgl_nodeza7d2freeza7d2bo4092z00,
		BGl_nodezd2freezd2boxzd2ref3741zd2zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4069z00zzglobaliza7e_freeza7,
		BgL_bgl_nodeza7d2freeza7d2ma4093z00,
		BGl_nodezd2freezd2makezd2box3738zd2zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4071z00zzglobaliza7e_freeza7,
		BgL_bgl_nodeza7d2freeza7d2bo4094z00,
		BGl_nodezd2freezd2boxzd2setz123743zc0zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4050z00zzglobaliza7e_freeza7,
		BgL_bgl_string4050za700za7za7g4095za7, "free-variable?", 14);
	      DEFINE_STRING(BGl_string4051z00zzglobaliza7e_freeza7,
		BgL_bgl_string4051za700za7za7g4096za7, "Unknown variable type", 21);
	      DEFINE_STRING(BGl_string4052z00zzglobaliza7e_freeza7,
		BgL_bgl_string4052za700za7za7g4097za7, "node-free", 9);
	      DEFINE_STRING(BGl_string4072z00zzglobaliza7e_freeza7,
		BgL_bgl_string4072za700za7za7g4098za7, "globalize_free", 14);
	      DEFINE_STRING(BGl_string4073z00zzglobaliza7e_freeza7,
		BgL_bgl_string4073za700za7za7g4099za7,
		"sfun sgfun -env::procedure value make-fx-procedure make-va-procedure ",
		69);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2freezd2varszd2envzd2zzglobaliza7e_freeza7,
		BgL_bgl__getza7d2freeza7d2va4100z00,
		BGl__getzd2freezd2varsz00zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_freezd2fromzd2envz00zzglobaliza7e_freeza7,
		BgL_bgl__freeza7d2fromza7d2za74101za7,
		BGl__freezd2fromzd2zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nodezd2freezd2default3698zd2envzd2zzglobaliza7e_freeza7,
		BgL_bgl__nodeza7d2freeza7d2d4102z00,
		BGl__nodezd2freezd2default3698z00zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_thezd2closurezd2envz00zzglobaliza7e_freeza7,
		BgL_bgl__theza7d2closureza7d4103z00,
		BGl__thezd2closurezd2zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_GENERIC(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
		BgL_bgl__nodeza7d2freeza7d2za74104za7,
		BGl__nodezd2freezd2zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_thezd2globalzd2closurezd2envzd2zzglobaliza7e_freeza7,
		BgL_bgl__theza7d2globalza7d24105z00,
		BGl__thezd2globalzd2closurez00zzglobaliza7e_freeza7, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(long
		BgL_checksumz00_2850, char *BgL_fromz00_2851)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_freeza7))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_freeza7 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_freeza7();
					BGl_cnstzd2initzd2zzglobaliza7e_freeza7();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_freeza7();
					BGl_genericzd2initzd2zzglobaliza7e_freeza7();
					BGl_methodzd2initzd2zzglobaliza7e_freeza7();
					BGl_toplevelzd2initzd2zzglobaliza7e_freeza7();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_freeza7()
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_free");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"globalize_free");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"globalize_free");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_free");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_free");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzglobaliza7e_freeza7()
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 15 */
			{	/* Globalize/free.scm 15 */
				obj_t BgL_cportz00_2835;

				BgL_cportz00_2835 =
					bgl_open_input_string(BGl_string4073z00zzglobaliza7e_freeza7,
					(int) (((long) 0)));
				{
					long BgL_iz00_2836;

					BgL_iz00_2836 = ((long) 5);
				BgL_loopz00_2837:
					if ((BgL_iz00_2836 == ((long) -1)))
						{	/* Globalize/free.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Globalize/free.scm 15 */
							{	/* Globalize/free.scm 15 */
								obj_t BgL_arg4075z00_2839;

								{	/* Globalize/free.scm 15 */

									{	/* Globalize/free.scm 15 */
										obj_t BgL_locationz00_2841;

										BgL_locationz00_2841 = BBOOL(((bool_t) 0));
										{	/* Globalize/free.scm 15 */

											BgL_arg4075z00_2839 =
												BGl_readz00zz__readerz00(BgL_cportz00_2835,
												BgL_locationz00_2841);
										}
									}
								}
								{	/* Globalize/free.scm 15 */
									int BgL_auxz00_2872;

									BgL_auxz00_2872 = (int) (BgL_iz00_2836);
									CNST_TABLE_SET(BgL_auxz00_2872, BgL_arg4075z00_2839);
							}}
							{	/* Globalize/free.scm 15 */
								int BgL_auxz00_2842;

								BgL_auxz00_2842 = (int) ((BgL_iz00_2836 - ((long) 1)));
								{
									long BgL_iz00_2877;

									BgL_iz00_2877 = (long) (BgL_auxz00_2842);
									BgL_iz00_2836 = BgL_iz00_2877;
									goto BgL_loopz00_2837;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzglobaliza7e_freeza7()
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 15 */
			BGl_za2roundza2z00zzglobaliza7e_freeza7 = ((long) 0);
			BGl_za2integratorza2z00zzglobaliza7e_freeza7 = BUNSPEC;
			return BUNSPEC;
		}
	}



/* mark-variable! */
	obj_t BGl_markzd2variablez12zc0zzglobaliza7e_freeza7(BgL_localz00_bglt
		BgL_localz00_1)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 43 */
			{	/* Globalize/free.scm 44 */
				BgL_valuez00_bglt BgL_infoz00_971;

				{
					BgL_variablez00_bglt BgL_auxz00_2879;

					BgL_auxz00_2879 = (BgL_variablez00_bglt) (BgL_localz00_1);
					BgL_infoz00_971 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2879))->BgL_valuez00);
				}
				{	/* Globalize/free.scm 46 */
					bool_t BgL_testz00_2882;

					{	/* Globalize/free.scm 46 */
						obj_t BgL_obj3447z00_1766;

						BgL_obj3447z00_1766 = (obj_t) (BgL_infoz00_971);
						BgL_testz00_2882 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj3447z00_1766,
							BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
					}
					if (BgL_testz00_2882)
						{	/* Globalize/free.scm 47 */
							BgL_svarzf2ginfozf2_bglt BgL_obj3453z00_1767;

							long BgL_val3452z00_1768;

							BgL_obj3453z00_1767 =
								(BgL_svarzf2ginfozf2_bglt) (BgL_infoz00_971);
							BgL_val3452z00_1768 = BGl_za2roundza2z00zzglobaliza7e_freeza7;
							{
								obj_t BgL_auxz00_2886;

								{	/* Globalize/free.scm 47 */
									BgL_objectz00_bglt BgL_auxz00_2887;

									BgL_auxz00_2887 = (BgL_objectz00_bglt) (BgL_obj3453z00_1767);
									BgL_auxz00_2886 = BGL_OBJECT_WIDENING(BgL_auxz00_2887);
								}
								return
									((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_auxz00_2886))->
										BgL_freezd2markzd2) =
									((long) BgL_val3452z00_1768), BUNSPEC);
						}}
					else
						{	/* Globalize/free.scm 48 */
							bool_t BgL_testz00_2891;

							{	/* Globalize/free.scm 48 */
								obj_t BgL_obj3322z00_1769;

								BgL_obj3322z00_1769 = (obj_t) (BgL_infoz00_971);
								BgL_testz00_2891 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj3322z00_1769,
									BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7);
							}
							if (BgL_testz00_2891)
								{	/* Globalize/free.scm 49 */
									BgL_sfunzf2ginfozf2_bglt BgL_obj3363z00_1770;

									obj_t BgL_val3362z00_1771;

									BgL_obj3363z00_1770 =
										(BgL_sfunzf2ginfozf2_bglt) (BgL_infoz00_971);
									BgL_val3362z00_1771 =
										BINT(BGl_za2roundza2z00zzglobaliza7e_freeza7);
									{
										obj_t BgL_auxz00_2896;

										{	/* Globalize/free.scm 49 */
											BgL_objectz00_bglt BgL_auxz00_2897;

											BgL_auxz00_2897 =
												(BgL_objectz00_bglt) (BgL_obj3363z00_1770);
											BgL_auxz00_2896 = BGL_OBJECT_WIDENING(BgL_auxz00_2897);
										}
										return
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_2896))->
												BgL_freezd2markzd2) =
											((obj_t) BgL_val3362z00_1771), BUNSPEC);
									}
								}
							else
								{	/* Globalize/free.scm 50 */
									bool_t BgL_testz00_2901;

									{	/* Globalize/free.scm 50 */
										obj_t BgL_obj3480z00_1772;

										BgL_obj3480z00_1772 = (obj_t) (BgL_infoz00_971);
										BgL_testz00_2901 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj3480z00_1772,
											BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7);
									}
									if (BgL_testz00_2901)
										{	/* Globalize/free.scm 51 */
											BgL_sexitzf2ginfozf2_bglt BgL_obj3489z00_1773;

											long BgL_val3488z00_1774;

											BgL_obj3489z00_1773 =
												(BgL_sexitzf2ginfozf2_bglt) (BgL_infoz00_971);
											BgL_val3488z00_1774 =
												BGl_za2roundza2z00zzglobaliza7e_freeza7;
											{
												obj_t BgL_auxz00_2905;

												{	/* Globalize/free.scm 51 */
													BgL_objectz00_bglt BgL_auxz00_2906;

													BgL_auxz00_2906 =
														(BgL_objectz00_bglt) (BgL_obj3489z00_1773);
													BgL_auxz00_2905 =
														BGL_OBJECT_WIDENING(BgL_auxz00_2906);
												}
												return
													((((BgL_sexitzf2ginfozf2_bglt)
															CREF(BgL_auxz00_2905))->BgL_freezd2markzd2) =
													((long) BgL_val3488z00_1774), BUNSPEC);
										}}
									else
										{	/* Globalize/free.scm 50 */
											return BFALSE;
										}
								}
						}
				}
			}
		}
	}



/* bind-variable! */
	obj_t BGl_bindzd2variablez12zc0zzglobaliza7e_freeza7(BgL_localz00_bglt
		BgL_localz00_2, BgL_localz00_bglt BgL_integratorz00_3)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 56 */
			{	/* Globalize/free.scm 57 */
				BgL_valuez00_bglt BgL_finfoz00_975;

				{
					BgL_variablez00_bglt BgL_auxz00_2910;

					BgL_auxz00_2910 = (BgL_variablez00_bglt) (BgL_integratorz00_3);
					BgL_finfoz00_975 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2910))->BgL_valuez00);
				}
				{	/* Globalize/free.scm 58 */
					obj_t BgL_arg3747z00_976;

					{	/* Globalize/free.scm 58 */
						obj_t BgL_arg3748z00_977;

						{	/* Globalize/free.scm 58 */
							BgL_sfunzf2ginfozf2_bglt BgL_obj3382z00_1776;

							BgL_obj3382z00_1776 =
								(BgL_sfunzf2ginfozf2_bglt) (BgL_finfoz00_975);
							{
								obj_t BgL_auxz00_2914;

								{	/* Globalize/free.scm 58 */
									BgL_objectz00_bglt BgL_auxz00_2915;

									BgL_auxz00_2915 = (BgL_objectz00_bglt) (BgL_obj3382z00_1776);
									BgL_auxz00_2914 = BGL_OBJECT_WIDENING(BgL_auxz00_2915);
								}
								BgL_arg3748z00_977 =
									(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_2914))->
									BgL_boundz00);
							}
						}
						BgL_arg3747z00_976 =
							MAKE_PAIR((obj_t) (BgL_localz00_2), BgL_arg3748z00_977);
					}
					{	/* Globalize/free.scm 58 */
						BgL_sfunzf2ginfozf2_bglt BgL_obj3384z00_1777;

						obj_t BgL_val3383z00_1778;

						BgL_obj3384z00_1777 = (BgL_sfunzf2ginfozf2_bglt) (BgL_finfoz00_975);
						BgL_val3383z00_1778 = BgL_arg3747z00_976;
						{
							obj_t BgL_auxz00_2922;

							{	/* Globalize/free.scm 58 */
								BgL_objectz00_bglt BgL_auxz00_2923;

								BgL_auxz00_2923 = (BgL_objectz00_bglt) (BgL_obj3384z00_1777);
								BgL_auxz00_2922 = BGL_OBJECT_WIDENING(BgL_auxz00_2923);
							}
							((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_2922))->
									BgL_boundz00) = ((obj_t) BgL_val3383z00_1778), BUNSPEC);
						}
					}
				}
				return BGl_markzd2variablez12zc0zzglobaliza7e_freeza7(BgL_localz00_2);
			}
		}
	}



/* free-variable? */
	obj_t BGl_freezd2variablezf3z21zzglobaliza7e_freeza7(obj_t BgL_localz00_4)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 64 */
			{	/* Globalize/free.scm 65 */
				BgL_valuez00_bglt BgL_infoz00_978;

				{
					BgL_variablez00_bglt BgL_auxz00_2928;

					BgL_auxz00_2928 = (BgL_variablez00_bglt) (BgL_localz00_4);
					BgL_infoz00_978 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2928))->BgL_valuez00);
				}
				{	/* Globalize/free.scm 67 */
					bool_t BgL_testz00_2931;

					{	/* Globalize/free.scm 67 */
						obj_t BgL_obj3447z00_1780;

						BgL_obj3447z00_1780 = (obj_t) (BgL_infoz00_978);
						BgL_testz00_2931 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj3447z00_1780,
							BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7);
					}
					if (BgL_testz00_2931)
						{	/* Globalize/free.scm 68 */
							bool_t BgL_testz00_2934;

							{	/* Globalize/free.scm 68 */
								long BgL_arg3751z00_981;

								{	/* Globalize/free.scm 68 */
									BgL_svarzf2ginfozf2_bglt BgL_obj3451z00_1781;

									BgL_obj3451z00_1781 =
										(BgL_svarzf2ginfozf2_bglt) (BgL_infoz00_978);
									{
										obj_t BgL_auxz00_2936;

										{	/* Globalize/free.scm 68 */
											BgL_objectz00_bglt BgL_auxz00_2937;

											BgL_auxz00_2937 =
												(BgL_objectz00_bglt) (BgL_obj3451z00_1781);
											BgL_auxz00_2936 = BGL_OBJECT_WIDENING(BgL_auxz00_2937);
										}
										BgL_arg3751z00_981 =
											(((BgL_svarzf2ginfozf2_bglt) CREF(BgL_auxz00_2936))->
											BgL_freezd2markzd2);
								}}
								BgL_testz00_2934 =
									(BgL_arg3751z00_981 ==
									BGl_za2roundza2z00zzglobaliza7e_freeza7);
							}
							if (BgL_testz00_2934)
								{	/* Globalize/free.scm 68 */
									return BFALSE;
								}
							else
								{	/* Globalize/free.scm 68 */
									return BTRUE;
								}
						}
					else
						{	/* Globalize/free.scm 69 */
							bool_t BgL_testz00_2942;

							{	/* Globalize/free.scm 69 */
								obj_t BgL_obj3322z00_1782;

								BgL_obj3322z00_1782 = (obj_t) (BgL_infoz00_978);
								BgL_testz00_2942 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj3322z00_1782,
									BGl_sfunzf2Ginfozf2zzglobaliza7e_ginfoza7);
							}
							if (BgL_testz00_2942)
								{	/* Globalize/free.scm 70 */
									bool_t BgL_testz00_2945;

									{	/* Globalize/free.scm 70 */
										obj_t BgL_arg3754z00_984;

										{	/* Globalize/free.scm 70 */
											BgL_sfunzf2ginfozf2_bglt BgL_obj3361z00_1783;

											BgL_obj3361z00_1783 =
												(BgL_sfunzf2ginfozf2_bglt) (BgL_infoz00_978);
											{
												obj_t BgL_auxz00_2947;

												{	/* Globalize/free.scm 70 */
													BgL_objectz00_bglt BgL_auxz00_2948;

													BgL_auxz00_2948 =
														(BgL_objectz00_bglt) (BgL_obj3361z00_1783);
													BgL_auxz00_2947 =
														BGL_OBJECT_WIDENING(BgL_auxz00_2948);
												}
												BgL_arg3754z00_984 =
													(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_2947))->
													BgL_freezd2markzd2);
											}
										}
										BgL_testz00_2945 =
											(BgL_arg3754z00_984 ==
											BINT(BGl_za2roundza2z00zzglobaliza7e_freeza7));
									}
									if (BgL_testz00_2945)
										{	/* Globalize/free.scm 70 */
											return BFALSE;
										}
									else
										{	/* Globalize/free.scm 70 */
											return BTRUE;
										}
								}
							else
								{	/* Globalize/free.scm 71 */
									bool_t BgL_testz00_2954;

									{	/* Globalize/free.scm 71 */
										obj_t BgL_obj3480z00_1784;

										BgL_obj3480z00_1784 = (obj_t) (BgL_infoz00_978);
										BgL_testz00_2954 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj3480z00_1784,
											BGl_sexitzf2Ginfozf2zzglobaliza7e_ginfoza7);
									}
									if (BgL_testz00_2954)
										{	/* Globalize/free.scm 72 */
											bool_t BgL_testz00_2957;

											{	/* Globalize/free.scm 72 */
												long BgL_arg3757z00_987;

												{	/* Globalize/free.scm 72 */
													BgL_sexitzf2ginfozf2_bglt BgL_obj3487z00_1785;

													BgL_obj3487z00_1785 =
														(BgL_sexitzf2ginfozf2_bglt) (BgL_infoz00_978);
													{
														obj_t BgL_auxz00_2959;

														{	/* Globalize/free.scm 72 */
															BgL_objectz00_bglt BgL_auxz00_2960;

															BgL_auxz00_2960 =
																(BgL_objectz00_bglt) (BgL_obj3487z00_1785);
															BgL_auxz00_2959 =
																BGL_OBJECT_WIDENING(BgL_auxz00_2960);
														}
														BgL_arg3757z00_987 =
															(((BgL_sexitzf2ginfozf2_bglt)
																CREF(BgL_auxz00_2959))->BgL_freezd2markzd2);
												}}
												BgL_testz00_2957 =
													(BgL_arg3757z00_987 ==
													BGl_za2roundza2z00zzglobaliza7e_freeza7);
											}
											if (BgL_testz00_2957)
												{	/* Globalize/free.scm 72 */
													return BFALSE;
												}
											else
												{	/* Globalize/free.scm 72 */
													return BTRUE;
												}
										}
									else
										{	/* Globalize/free.scm 74 */
											obj_t BgL_arg3760z00_990;

											BgL_arg3760z00_990 =
												MAKE_PAIR(BgL_localz00_4,
												BGl_shapez00zztools_shapez00(BgL_localz00_4));
											return
												BGl_errorz00zz__errorz00
												(BGl_string4050z00zzglobaliza7e_freeza7,
												BGl_string4051z00zzglobaliza7e_freeza7,
												BgL_arg3760z00_990);
										}
								}
						}
				}
			}
		}
	}



/* get-free-vars */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2freezd2varsz00zzglobaliza7e_freeza7(BgL_nodez00_bglt
		BgL_nodez00_5, BgL_localz00_bglt BgL_integratorz00_6)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 84 */
			{	/* Globalize/free.scm 87 */
				obj_t BgL_freez00_992;

				{	/* Globalize/free.scm 87 */
					BgL_sfunzf2ginfozf2_bglt BgL_obj3379z00_1787;

					{	/* Globalize/free.scm 87 */
						BgL_variablez00_bglt BgL_obj1611z00_1786;

						BgL_obj1611z00_1786 = (BgL_variablez00_bglt) (BgL_integratorz00_6);
						BgL_obj3379z00_1787 =
							(BgL_sfunzf2ginfozf2_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1786))->
								BgL_valuez00));
					}
					{
						obj_t BgL_auxz00_2971;

						{	/* Globalize/free.scm 87 */
							BgL_objectz00_bglt BgL_auxz00_2972;

							BgL_auxz00_2972 = (BgL_objectz00_bglt) (BgL_obj3379z00_1787);
							BgL_auxz00_2971 = BGL_OBJECT_WIDENING(BgL_auxz00_2972);
						}
						BgL_freez00_992 =
							(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_2971))->BgL_freez00);
					}
				}
				{	/* Globalize/free.scm 88 */
					bool_t BgL_testz00_2976;

					if (NULLP(BgL_freez00_992))
						{	/* Globalize/free.scm 88 */
							BgL_testz00_2976 = ((bool_t) 1);
						}
					else
						{	/* Globalize/free.scm 88 */
							BgL_testz00_2976 = PAIRP(BgL_freez00_992);
						}
					if (BgL_testz00_2976)
						{	/* Globalize/free.scm 88 */
							return BgL_freez00_992;
						}
					else
						{	/* Globalize/free.scm 90 */
							obj_t BgL_freez00_994;

							BgL_freez00_994 =
								BGl_internalzd2getzd2freezd2varsz12zc0zzglobaliza7e_freeza7
								(BgL_nodez00_5, BgL_integratorz00_6);
							{	/* Globalize/free.scm 91 */
								BgL_valuez00_bglt BgL_arg3763z00_995;

								{
									BgL_variablez00_bglt BgL_auxz00_2981;

									BgL_auxz00_2981 =
										(BgL_variablez00_bglt) (BgL_integratorz00_6);
									BgL_arg3763z00_995 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2981))->
										BgL_valuez00);
								}
								{	/* Globalize/free.scm 91 */
									BgL_sfunzf2ginfozf2_bglt BgL_obj3381z00_1791;

									obj_t BgL_val3380z00_1792;

									BgL_obj3381z00_1791 =
										(BgL_sfunzf2ginfozf2_bglt) (BgL_arg3763z00_995);
									BgL_val3380z00_1792 = BgL_freez00_994;
									{
										obj_t BgL_auxz00_2985;

										{	/* Globalize/free.scm 91 */
											BgL_objectz00_bglt BgL_auxz00_2986;

											BgL_auxz00_2986 =
												(BgL_objectz00_bglt) (BgL_obj3381z00_1791);
											BgL_auxz00_2985 = BGL_OBJECT_WIDENING(BgL_auxz00_2986);
										}
										((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_2985))->
												BgL_freez00) = ((obj_t) BgL_val3380z00_1792), BUNSPEC);
									}
								}
							}
							return BgL_freez00_994;
						}
				}
			}
		}
	}



/* _get-free-vars */
	obj_t BGl__getzd2freezd2varsz00zzglobaliza7e_freeza7(obj_t BgL_envz00_2741,
		obj_t BgL_nodez00_2742, obj_t BgL_integratorz00_2743)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 84 */
			return
				BGl_getzd2freezd2varsz00zzglobaliza7e_freeza7(
				(BgL_nodez00_bglt) (BgL_nodez00_2742),
				(BgL_localz00_bglt) (BgL_integratorz00_2743));
		}
	}



/* internal-get-free-vars! */
	obj_t
		BGl_internalzd2getzd2freezd2varsz12zc0zzglobaliza7e_freeza7(BgL_nodez00_bglt
		BgL_nodez00_7, BgL_localz00_bglt BgL_integratorz00_8)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 105 */
			BGl_za2roundza2z00zzglobaliza7e_freeza7 =
				(BGl_za2roundza2z00zzglobaliza7e_freeza7 + ((long) 1));
			BGl_za2integratorza2z00zzglobaliza7e_freeza7 =
				(obj_t) (BgL_integratorz00_8);
			BGl_bindzd2variablez12zc0zzglobaliza7e_freeza7(BgL_integratorz00_8,
				BgL_integratorz00_8);
			{	/* Globalize/free.scm 110 */
				obj_t BgL_arg3766z00_998;

				{	/* Globalize/free.scm 110 */
					BgL_variablez00_bglt BgL_variablez00_1795;

					BgL_variablez00_1795 = (BgL_variablez00_bglt) (BgL_integratorz00_8);
					{	/* Globalize/free.scm 110 */
						bool_t BgL_testz00_2997;

						{	/* Globalize/free.scm 110 */
							obj_t BgL_obj1751z00_1798;

							BgL_obj1751z00_1798 = (obj_t) (BgL_variablez00_1795);
							BgL_testz00_2997 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_1798,
								BGl_globalz00zzast_varz00);
						}
						if (BgL_testz00_2997)
							{	/* Globalize/free.scm 110 */
								BgL_arg3766z00_998 =
									BGl_thezd2globalzd2closurez00zzglobaliza7e_freeza7(
									(BgL_globalz00_bglt) (BgL_variablez00_1795), BFALSE);
							}
						else
							{	/* Globalize/free.scm 110 */
								BgL_arg3766z00_998 =
									BGl_thezd2localzd2closurez00zzglobaliza7e_freeza7(
									(obj_t) (BgL_variablez00_1795), BFALSE);
							}
					}
				}
				BGl_bindzd2variablez12zc0zzglobaliza7e_freeza7(
					(BgL_localz00_bglt) (BgL_arg3766z00_998), BgL_integratorz00_8);
			}
			{	/* Globalize/free.scm 111 */
				obj_t BgL_g3683z00_999;

				{	/* Globalize/free.scm 112 */
					BgL_sfunz00_bglt BgL_obj1880z00_1800;

					{	/* Globalize/free.scm 112 */
						BgL_variablez00_bglt BgL_obj1611z00_1799;

						BgL_obj1611z00_1799 = (BgL_variablez00_bglt) (BgL_integratorz00_8);
						BgL_obj1880z00_1800 =
							(BgL_sfunz00_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1799))->
								BgL_valuez00));
					}
					BgL_g3683z00_999 =
						(((BgL_sfunz00_bglt) CREF(BgL_obj1880z00_1800))->BgL_argsz00);
				}
				{
					obj_t BgL_l3681z00_1001;

					BgL_l3681z00_1001 = BgL_g3683z00_999;
				BgL_zc3anonymousza33767ze3z83_1002:
					if (PAIRP(BgL_l3681z00_1001))
						{	/* Globalize/free.scm 112 */
							{	/* Globalize/free.scm 111 */
								obj_t BgL_lz00_1004;

								BgL_lz00_1004 = CAR(BgL_l3681z00_1001);
								BGl_bindzd2variablez12zc0zzglobaliza7e_freeza7(
									(BgL_localz00_bglt) (BgL_lz00_1004), BgL_integratorz00_8);
							}
							{
								obj_t BgL_l3681z00_3015;

								BgL_l3681z00_3015 = CDR(BgL_l3681z00_1001);
								BgL_l3681z00_1001 = BgL_l3681z00_3015;
								goto BgL_zc3anonymousza33767ze3z83_1002;
							}
						}
					else
						{	/* Globalize/free.scm 112 */
							((bool_t) 1);
						}
				}
			}
			{	/* Globalize/free.scm 114 */
				obj_t BgL_method3699z00_1806;

				{	/* Globalize/free.scm 114 */
					BgL_objectz00_bglt BgL_objz00_1807;

					BgL_objz00_1807 = (BgL_objectz00_bglt) (BgL_nodez00_7);
					{	/* Globalize/free.scm 114 */
						long BgL_objzd2classzd2numz00_1808;

						BgL_objzd2classzd2numz00_1808 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1807);
						{	/* Globalize/free.scm 114 */
							obj_t BgL_arg2643z00_1809;

							BgL_arg2643z00_1809 =
								PROCEDURE_REF(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
								(int) (((long) 1)));
							{	/* Globalize/free.scm 114 */
								obj_t BgL_arrayz00_1811;

								int BgL_offsetz00_1812;

								BgL_arrayz00_1811 = BgL_arg2643z00_1809;
								BgL_offsetz00_1812 = (int) (BgL_objzd2classzd2numz00_1808);
								{	/* Globalize/free.scm 114 */
									long BgL_offsetz00_1813;

									BgL_offsetz00_1813 =
										((long) (BgL_offsetz00_1812) - OBJECT_TYPE);
									{	/* Globalize/free.scm 114 */
										long BgL_modz00_1814;

										{	/* Globalize/free.scm 114 */
											int BgL_arg2645z00_1815;

											BgL_arg2645z00_1815 = (int) (((long) 16));
											{	/* Globalize/free.scm 114 */
												long BgL_auxz00_3025;

												BgL_auxz00_3025 = (long) (BgL_arg2645z00_1815);
												BgL_modz00_1814 =
													(BgL_offsetz00_1813 / BgL_auxz00_3025);
										}}
										{	/* Globalize/free.scm 114 */
											long BgL_restz00_1816;

											{	/* Globalize/free.scm 114 */
												int BgL_arg2644z00_1817;

												BgL_arg2644z00_1817 = (int) (((long) 16));
												{	/* Globalize/free.scm 114 */
													long BgL_auxz00_3029;

													BgL_auxz00_3029 = (long) (BgL_arg2644z00_1817);
													BgL_restz00_1816 =
														(BgL_offsetz00_1813 % BgL_auxz00_3029);
											}}
											{	/* Globalize/free.scm 114 */

												BgL_method3699z00_1806 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1811,
														(int) (BgL_modz00_1814)), (int) (BgL_restz00_1816));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3699z00_1806) (BgL_method3699z00_1806,
					(obj_t) (BgL_nodez00_7), BNIL, BEOA);
			}
		}
	}



/* node-free* */
	obj_t BGl_nodezd2freeza2z70zzglobaliza7e_freeza7(obj_t BgL_nodeza2za2_51,
		obj_t BgL_freez00_52)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 312 */
			{
				obj_t BgL_nodeza2za2_1009;

				obj_t BgL_freez00_1010;

				BgL_nodeza2za2_1009 = BgL_nodeza2za2_51;
				BgL_freez00_1010 = BgL_freez00_52;
			BgL_zc3anonymousza33771ze3z83_1011:
				if (NULLP(BgL_nodeza2za2_1009))
					{	/* Globalize/free.scm 315 */
						return BgL_freez00_1010;
					}
				else
					{	/* Globalize/free.scm 317 */
						obj_t BgL_arg3773z00_1013;

						obj_t BgL_arg3774z00_1014;

						BgL_arg3773z00_1013 = CDR(BgL_nodeza2za2_1009);
						{	/* Globalize/free.scm 318 */
							obj_t BgL_arg3775z00_1015;

							BgL_arg3775z00_1015 = CAR(BgL_nodeza2za2_1009);
							{	/* Globalize/free.scm 318 */
								BgL_nodez00_bglt BgL_nodez00_1834;

								BgL_nodez00_1834 = (BgL_nodez00_bglt) (BgL_arg3775z00_1015);
								{	/* Globalize/free.scm 318 */
									obj_t BgL_method3699z00_1836;

									{	/* Globalize/free.scm 318 */
										BgL_objectz00_bglt BgL_objz00_1837;

										BgL_objz00_1837 = (BgL_objectz00_bglt) (BgL_nodez00_1834);
										{	/* Globalize/free.scm 318 */
											long BgL_objzd2classzd2numz00_1838;

											BgL_objzd2classzd2numz00_1838 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1837);
											{	/* Globalize/free.scm 318 */
												obj_t BgL_arg2643z00_1839;

												BgL_arg2643z00_1839 =
													PROCEDURE_REF
													(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
													(int) (((long) 1)));
												{	/* Globalize/free.scm 318 */
													obj_t BgL_arrayz00_1841;

													int BgL_offsetz00_1842;

													BgL_arrayz00_1841 = BgL_arg2643z00_1839;
													BgL_offsetz00_1842 =
														(int) (BgL_objzd2classzd2numz00_1838);
													{	/* Globalize/free.scm 318 */
														long BgL_offsetz00_1843;

														BgL_offsetz00_1843 =
															((long) (BgL_offsetz00_1842) - OBJECT_TYPE);
														{	/* Globalize/free.scm 318 */
															long BgL_modz00_1844;

															{	/* Globalize/free.scm 318 */
																int BgL_arg2645z00_1845;

																BgL_arg2645z00_1845 = (int) (((long) 16));
																{	/* Globalize/free.scm 318 */
																	long BgL_auxz00_3052;

																	BgL_auxz00_3052 =
																		(long) (BgL_arg2645z00_1845);
																	BgL_modz00_1844 =
																		(BgL_offsetz00_1843 / BgL_auxz00_3052);
															}}
															{	/* Globalize/free.scm 318 */
																long BgL_restz00_1846;

																{	/* Globalize/free.scm 318 */
																	int BgL_arg2644z00_1847;

																	BgL_arg2644z00_1847 = (int) (((long) 16));
																	{	/* Globalize/free.scm 318 */
																		long BgL_auxz00_3056;

																		BgL_auxz00_3056 =
																			(long) (BgL_arg2644z00_1847);
																		BgL_restz00_1846 =
																			(BgL_offsetz00_1843 % BgL_auxz00_3056);
																}}
																{	/* Globalize/free.scm 318 */

																	BgL_method3699z00_1836 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1841,
																			(int) (BgL_modz00_1844)),
																		(int) (BgL_restz00_1846));
									}}}}}}}}
									BgL_arg3774z00_1014 =
										PROCEDURE_ENTRY(BgL_method3699z00_1836)
										(BgL_method3699z00_1836, (obj_t) (BgL_nodez00_1834),
										BgL_freez00_1010, BEOA);
						}}}
						{
							obj_t BgL_freez00_3067;

							obj_t BgL_nodeza2za2_3066;

							BgL_nodeza2za2_3066 = BgL_arg3773z00_1013;
							BgL_freez00_3067 = BgL_arg3774z00_1014;
							BgL_freez00_1010 = BgL_freez00_3067;
							BgL_nodeza2za2_1009 = BgL_nodeza2za2_3066;
							goto BgL_zc3anonymousza33771ze3z83_1011;
						}
					}
			}
		}
	}



/* the-closure */
	BGL_EXPORTED_DEF obj_t
		BGl_thezd2closurezd2zzglobaliza7e_freeza7(BgL_variablez00_bglt
		BgL_variablez00_53, obj_t BgL_locz00_54)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 323 */
			{	/* Globalize/free.scm 324 */
				bool_t BgL_testz00_3068;

				{	/* Globalize/free.scm 324 */
					obj_t BgL_obj1751z00_1862;

					BgL_obj1751z00_1862 = (obj_t) (BgL_variablez00_53);
					BgL_testz00_3068 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_1862,
						BGl_globalz00zzast_varz00);
				}
				if (BgL_testz00_3068)
					{	/* Globalize/free.scm 324 */
						return
							BGl_thezd2globalzd2closurez00zzglobaliza7e_freeza7(
							(BgL_globalz00_bglt) (BgL_variablez00_53), BgL_locz00_54);
					}
				else
					{	/* Globalize/free.scm 324 */
						return
							BGl_thezd2localzd2closurez00zzglobaliza7e_freeza7(
							(obj_t) (BgL_variablez00_53), BgL_locz00_54);
					}
			}
		}
	}



/* _the-closure */
	obj_t BGl__thezd2closurezd2zzglobaliza7e_freeza7(obj_t BgL_envz00_2747,
		obj_t BgL_variablez00_2748, obj_t BgL_locz00_2749)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 323 */
			return
				BGl_thezd2closurezd2zzglobaliza7e_freeza7(
				(BgL_variablez00_bglt) (BgL_variablez00_2748), BgL_locz00_2749);
		}
	}



/* the-global-closure */
	BGL_EXPORTED_DEF obj_t
		BGl_thezd2globalzd2closurez00zzglobaliza7e_freeza7(BgL_globalz00_bglt
		BgL_globalz00_55, obj_t BgL_locz00_56)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 331 */
			{	/* Globalize/free.scm 332 */
				obj_t BgL_closurez00_1018;

				{	/* Globalize/free.scm 332 */
					BgL_funz00_bglt BgL_obj1826z00_1864;

					{	/* Globalize/free.scm 332 */
						BgL_variablez00_bglt BgL_obj1611z00_1863;

						BgL_obj1611z00_1863 = (BgL_variablez00_bglt) (BgL_globalz00_55);
						BgL_obj1826z00_1864 =
							(BgL_funz00_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1863))->
								BgL_valuez00));
					}
					BgL_closurez00_1018 =
						(((BgL_funz00_bglt) CREF(BgL_obj1826z00_1864))->
						BgL_thezd2closurezd2);
				}
				if (BGl_iszd2azf3z21zz__objectz00(BgL_closurez00_1018,
						BGl_globalz00zzast_varz00))
					{	/* Globalize/free.scm 333 */
						return BgL_closurez00_1018;
					}
				else
					{	/* Globalize/free.scm 335 */
						BgL_globalz00_bglt BgL_glocloz00_1020;

						BgL_glocloz00_1020 =
							BGl_makezd2globalzd2closurez00zzglobaliza7e_globalzd2closurez75
							(BgL_globalz00_55);
						{	/* Globalize/free.scm 335 */
							long BgL_arityz00_1021;

							{	/* Globalize/free.scm 336 */
								BgL_funz00_bglt BgL_obj1813z00_1867;

								{	/* Globalize/free.scm 336 */
									BgL_variablez00_bglt BgL_obj1611z00_1866;

									BgL_obj1611z00_1866 =
										(BgL_variablez00_bglt) (BgL_globalz00_55);
									BgL_obj1813z00_1867 =
										(BgL_funz00_bglt) (
										(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1866))->
											BgL_valuez00));
								}
								BgL_arityz00_1021 =
									(((BgL_funz00_bglt) CREF(BgL_obj1813z00_1867))->BgL_arityz00);
							}
							{	/* Globalize/free.scm 336 */
								obj_t BgL_makezd2clozd2_1022;

								if ((BgL_arityz00_1021 < ((long) 0)))
									{	/* Globalize/free.scm 338 */
										BgL_makezd2clozd2_1022 = CNST_TABLE_REF(((long) 0));
									}
								else
									{	/* Globalize/free.scm 338 */
										BgL_makezd2clozd2_1022 = CNST_TABLE_REF(((long) 1));
									}
								{	/* Globalize/free.scm 337 */
									BgL_nodez00_bglt BgL_nodez00_1023;

									{	/* Globalize/free.scm 345 */
										obj_t BgL_arg3795z00_1043;

										obj_t BgL_arg3797z00_1045;

										{	/* Globalize/free.scm 345 */
											obj_t BgL_arg3798z00_1046;

											{	/* Globalize/free.scm 345 */
												BgL_varz00_bglt BgL_arg3799z00_1047;

												BgL_atomz00_bglt BgL_arg3800z00_1048;

												BgL_atomz00_bglt BgL_arg3801z00_1049;

												BgL_arg3799z00_1047 =
													BGl_makezd2varzd2zzast_nodez00(BgL_locz00_56,
													(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00),
													(BgL_variablez00_bglt) (BgL_glocloz00_1020));
												BgL_arg3800z00_1048 =
													BGl_makezd2atomzd2zzast_nodez00(BgL_locz00_56,
													(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00),
													BINT(BgL_arityz00_1021));
												BgL_arg3801z00_1049 =
													BGl_makezd2atomzd2zzast_nodez00(BgL_locz00_56,
													(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00),
													BINT(((long) 0)));
												{	/* Globalize/free.scm 344 */
													obj_t BgL_list3804z00_1051;

													{	/* Globalize/free.scm 344 */
														obj_t BgL_arg3805z00_1052;

														{	/* Globalize/free.scm 344 */
															obj_t BgL_arg3806z00_1053;

															BgL_arg3806z00_1053 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3805z00_1052 =
																MAKE_PAIR(
																(obj_t) (BgL_arg3801z00_1049),
																BgL_arg3806z00_1053);
														}
														BgL_list3804z00_1051 =
															MAKE_PAIR(
															(obj_t) (BgL_arg3800z00_1048),
															BgL_arg3805z00_1052);
													}
													BgL_arg3798z00_1046 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
														(obj_t) (BgL_arg3799z00_1047),
														BgL_list3804z00_1051);
											}}
											BgL_arg3795z00_1043 =
												MAKE_PAIR(BgL_makezd2clozd2_1022, BgL_arg3798z00_1046);
										}
										BgL_arg3797z00_1045 = CNST_TABLE_REF(((long) 2));
										BgL_nodez00_1023 =
											BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg3795z00_1043,
											BNIL, BgL_locz00_56, BgL_arg3797z00_1045);
									}
									{	/* Globalize/free.scm 344 */
										BgL_globalz00_bglt BgL_closurez00_1024;

										{	/* Globalize/free.scm 361 */
											obj_t BgL_arg3782z00_1029;

											obj_t BgL_arg3783z00_1030;

											obj_t BgL_arg3784z00_1031;

											{	/* Globalize/free.scm 361 */
												obj_t BgL_arg3785z00_1032;

												{	/* Globalize/free.scm 361 */
													obj_t BgL_arg3786z00_1033;

													obj_t BgL_arg3787z00_1034;

													{	/* Globalize/free.scm 361 */
														obj_t BgL_arg3790z00_1037;

														{
															BgL_variablez00_bglt BgL_auxz00_3111;

															BgL_auxz00_3111 =
																(BgL_variablez00_bglt) (BgL_globalz00_55);
															BgL_arg3790z00_1037 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_3111))->BgL_idz00);
														}
														{	/* Globalize/free.scm 360 */
															obj_t BgL_res3996z00_1873;

															{	/* Globalize/free.scm 360 */
																obj_t BgL_arg2063z00_1872;

																BgL_arg2063z00_1872 =
																	SYMBOL_TO_STRING(BgL_arg3790z00_1037);
																BgL_res3996z00_1873 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_1872);
															}
															BgL_arg3786z00_1033 = BgL_res3996z00_1873;
													}}
													{	/* Globalize/free.scm 360 */
														obj_t BgL_res3997z00_1876;

														{	/* Globalize/free.scm 360 */
															obj_t BgL_symbolz00_1874;

															BgL_symbolz00_1874 = CNST_TABLE_REF(((long) 3));
															{	/* Globalize/free.scm 360 */
																obj_t BgL_arg2063z00_1875;

																BgL_arg2063z00_1875 =
																	SYMBOL_TO_STRING(BgL_symbolz00_1874);
																BgL_res3997z00_1876 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_1875);
														}}
														BgL_arg3787z00_1034 = BgL_res3997z00_1876;
													}
													{	/* Globalize/free.scm 360 */
														obj_t BgL_list3788z00_1035;

														{	/* Globalize/free.scm 360 */
															obj_t BgL_arg3789z00_1036;

															BgL_arg3789z00_1036 =
																MAKE_PAIR(BgL_arg3787z00_1034, BNIL);
															BgL_list3788z00_1035 =
																MAKE_PAIR(BgL_arg3786z00_1033,
																BgL_arg3789z00_1036);
														}
														BgL_arg3785z00_1032 =
															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
															(BgL_list3788z00_1035);
												}}
												BgL_arg3782z00_1029 =
													string_to_symbol(BSTRING_TO_STRING
													(BgL_arg3785z00_1032));
											}
											BgL_arg3783z00_1030 =
												(((BgL_globalz00_bglt) CREF(BgL_globalz00_55))->
												BgL_modulez00);
											{	/* Globalize/free.scm 365 */
												bool_t BgL_testz00_3125;

												{	/* Globalize/free.scm 365 */
													BgL_valuez00_bglt BgL_arg3794z00_1042;

													{
														BgL_variablez00_bglt BgL_auxz00_3126;

														BgL_auxz00_3126 =
															(BgL_variablez00_bglt) (BgL_globalz00_55);
														BgL_arg3794z00_1042 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_3126))->
															BgL_valuez00);
													}
													{	/* Globalize/free.scm 365 */
														obj_t BgL_obj1955z00_1880;

														BgL_obj1955z00_1880 = (obj_t) (BgL_arg3794z00_1042);
														BgL_testz00_3125 =
															BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_1880,
															BGl_sfunz00zzast_varz00);
												}}
												if (BgL_testz00_3125)
													{	/* Globalize/free.scm 366 */
														bool_t BgL_testz00_3131;

														{	/* Globalize/free.scm 366 */
															obj_t BgL_auxz00_3132;

															{	/* Globalize/free.scm 366 */
																BgL_sfunz00_bglt BgL_obj1887z00_1882;

																{	/* Globalize/free.scm 366 */
																	BgL_variablez00_bglt BgL_obj1611z00_1881;

																	BgL_obj1611z00_1881 =
																		(BgL_variablez00_bglt) (BgL_globalz00_55);
																	BgL_obj1887z00_1882 =
																		(BgL_sfunz00_bglt) (
																		(((BgL_variablez00_bglt)
																				CREF(BgL_obj1611z00_1881))->
																			BgL_valuez00));
																}
																BgL_auxz00_3132 =
																	(((BgL_sfunz00_bglt)
																		CREF(BgL_obj1887z00_1882))->BgL_classz00);
															}
															BgL_testz00_3131 =
																(BgL_auxz00_3132 == CNST_TABLE_REF(((long) 4)));
														}
														if (BgL_testz00_3131)
															{	/* Globalize/free.scm 366 */
																BgL_arg3784z00_1031 =
																	CNST_TABLE_REF(((long) 4));
															}
														else
															{	/* Globalize/free.scm 366 */
																BgL_arg3784z00_1031 =
																	CNST_TABLE_REF(((long) 5));
													}}
												else
													{	/* Globalize/free.scm 365 */
														BgL_arg3784z00_1031 = CNST_TABLE_REF(((long) 5));
											}}
											BgL_closurez00_1024 =
												BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2
												(BgL_arg3782z00_1029, BgL_arg3783z00_1030,
												(obj_t) (BgL_nodez00_1023), BgL_arg3784z00_1031,
												BgL_locz00_56);
										}
										{	/* Globalize/free.scm 360 */

											{	/* Globalize/free.scm 373 */
												obj_t BgL_arg3778z00_1025;

												BgL_arg3778z00_1025 =
													(((BgL_globalz00_bglt) CREF(BgL_globalz00_55))->
													BgL_libraryz00);
												((((BgL_globalz00_bglt) CREF(BgL_closurez00_1024))->
														BgL_libraryz00) =
													((obj_t) BgL_arg3778z00_1025), BUNSPEC);
											}
											{	/* Globalize/free.scm 374 */
												obj_t BgL_arg3779z00_1026;

												BgL_arg3779z00_1026 =
													(((BgL_globalz00_bglt) CREF(BgL_globalz00_55))->
													BgL_importz00);
												((((BgL_globalz00_bglt) CREF(BgL_closurez00_1024))->
														BgL_importz00) =
													((obj_t) BgL_arg3779z00_1026), BUNSPEC);
											}
											{	/* Globalize/free.scm 375 */
												BgL_valuez00_bglt BgL_arg3780z00_1027;

												{
													BgL_variablez00_bglt BgL_auxz00_3148;

													BgL_auxz00_3148 =
														(BgL_variablez00_bglt) (BgL_globalz00_55);
													BgL_arg3780z00_1027 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_3148))->
														BgL_valuez00);
												}
												{
													obj_t BgL_auxz00_3153;

													BgL_funz00_bglt BgL_auxz00_3151;

													BgL_auxz00_3153 = (obj_t) (BgL_closurez00_1024);
													BgL_auxz00_3151 =
														(BgL_funz00_bglt) (BgL_arg3780z00_1027);
													((((BgL_funz00_bglt) CREF(BgL_auxz00_3151))->
															BgL_thezd2closurezd2) =
														((obj_t) BgL_auxz00_3153), BUNSPEC);
											}}
											{	/* Globalize/free.scm 379 */
												BgL_valuez00_bglt BgL_arg3781z00_1028;

												{
													BgL_variablez00_bglt BgL_auxz00_3156;

													BgL_auxz00_3156 =
														(BgL_variablez00_bglt) (BgL_glocloz00_1020);
													BgL_arg3781z00_1028 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_3156))->
														BgL_valuez00);
												}
												{
													obj_t BgL_auxz00_3161;

													BgL_funz00_bglt BgL_auxz00_3159;

													BgL_auxz00_3161 = (obj_t) (BgL_closurez00_1024);
													BgL_auxz00_3159 =
														(BgL_funz00_bglt) (BgL_arg3781z00_1028);
													((((BgL_funz00_bglt) CREF(BgL_auxz00_3159))->
															BgL_thezd2closurezd2) =
														((obj_t) BgL_auxz00_3161), BUNSPEC);
											}}
											return (obj_t) (BgL_closurez00_1024);
										}
									}
								}
							}
						}
					}
			}
		}
	}



/* _the-global-closure */
	obj_t BGl__thezd2globalzd2closurez00zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2750, obj_t BgL_globalz00_2751, obj_t BgL_locz00_2752)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 331 */
			return
				BGl_thezd2globalzd2closurez00zzglobaliza7e_freeza7(
				(BgL_globalz00_bglt) (BgL_globalz00_2751), BgL_locz00_2752);
		}
	}



/* the-local-closure */
	obj_t BGl_thezd2localzd2closurez00zzglobaliza7e_freeza7(obj_t BgL_localz00_57,
		obj_t BgL_locz00_58)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 389 */
			{	/* Globalize/free.scm 390 */
				BgL_valuez00_bglt BgL_infoz00_1057;

				{
					BgL_variablez00_bglt BgL_auxz00_3167;

					BgL_auxz00_3167 = (BgL_variablez00_bglt) (BgL_localz00_57);
					BgL_infoz00_1057 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_3167))->BgL_valuez00);
				}
				{	/* Globalize/free.scm 391 */
					bool_t BgL_testz00_3170;

					{	/* Globalize/free.scm 391 */
						obj_t BgL_arg3817z00_1068;

						{
							BgL_funz00_bglt BgL_auxz00_3171;

							BgL_auxz00_3171 = (BgL_funz00_bglt) (BgL_infoz00_1057);
							BgL_arg3817z00_1068 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_3171))->
								BgL_thezd2closurezd2);
						}
						BgL_testz00_3170 =
							BGl_iszd2azf3z21zz__objectz00(BgL_arg3817z00_1068,
							BGl_localz00zzast_varz00);
					}
					if (BgL_testz00_3170)
						{
							BgL_funz00_bglt BgL_auxz00_3175;

							BgL_auxz00_3175 = (BgL_funz00_bglt) (BgL_infoz00_1057);
							return
								(((BgL_funz00_bglt) CREF(BgL_auxz00_3175))->
								BgL_thezd2closurezd2);
						}
					else
						{	/* Globalize/free.scm 393 */
							BgL_localz00_bglt BgL_closurez00_1059;

							{	/* Globalize/free.scm 393 */
								obj_t BgL_arg3816z00_1067;

								{
									BgL_variablez00_bglt BgL_auxz00_3178;

									BgL_auxz00_3178 = (BgL_variablez00_bglt) (BgL_localz00_57);
									BgL_arg3816z00_1067 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_3178))->BgL_idz00);
								}
								BgL_closurez00_1059 =
									BGl_makezd2localzd2svarz00zzast_localz00(BgL_arg3816z00_1067,
									(BgL_typez00_bglt) (BGl_za2procedureza2z00zztype_cachez00));
							}
							{	/* Globalize/free.scm 394 */
								bool_t BgL_arg3811z00_1060;

								{
									BgL_localz00_bglt BgL_auxz00_3183;

									BgL_auxz00_3183 = (BgL_localz00_bglt) (BgL_localz00_57);
									BgL_arg3811z00_1060 =
										(((BgL_localz00_bglt) CREF(BgL_auxz00_3183))->
										BgL_userzf3zf3);
								}
								((((BgL_localz00_bglt) CREF(BgL_closurez00_1059))->
										BgL_userzf3zf3) = ((bool_t) BgL_arg3811z00_1060), BUNSPEC);
							}
							{	/* Globalize/free.scm 395 */
								BgL_svarz00_bglt BgL_obj3678z00_1061;

								{
									BgL_svarz00_bglt BgL_auxz00_3187;

									{	/* Globalize/free.scm 395 */
										BgL_valuez00_bglt BgL_auxz00_3188;

										{
											BgL_variablez00_bglt BgL_auxz00_3189;

											BgL_auxz00_3189 =
												(BgL_variablez00_bglt) (BgL_closurez00_1059);
											BgL_auxz00_3188 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_3189))->
												BgL_valuez00);
										}
										BgL_auxz00_3187 = (BgL_svarz00_bglt) (BgL_auxz00_3188);
									}
									BgL_obj3678z00_1061 = ((BgL_svarz00_bglt) BgL_auxz00_3187);
								}
								{	/* Globalize/free.scm 395 */
									obj_t BgL_auxz00_3196;

									BgL_objectz00_bglt BgL_auxz00_3194;

									BgL_auxz00_3196 =
										BGl_wideningzd2svarzf2Ginfoz20zzglobaliza7e_ginfoza7((
											(bool_t) 0), ((long) -10), ((long) -10), ((bool_t) 0));
									BgL_auxz00_3194 = (BgL_objectz00_bglt) (BgL_obj3678z00_1061);
									BGL_OBJECT_WIDENING_SET(BgL_auxz00_3194, BgL_auxz00_3196);
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_obj3678z00_1061),
									BGl_classzd2numzd2zz__objectz00
									(BGl_svarzf2Ginfozf2zzglobaliza7e_ginfoza7));
								BgL_obj3678z00_1061;
							}
							{	/* Globalize/free.scm 396 */
								BgL_localz00_bglt BgL_obj3679z00_1064;

								BgL_obj3679z00_1064 = ((BgL_localz00_bglt) BgL_closurez00_1059);
								{	/* Globalize/free.scm 396 */
									obj_t BgL_auxz00_3205;

									BgL_objectz00_bglt BgL_auxz00_3203;

									BgL_auxz00_3205 =
										BGl_wideningzd2localzf2Ginfoz20zzglobaliza7e_ginfoza7((
											(bool_t) 0), ((bool_t) 0));
									BgL_auxz00_3203 = (BgL_objectz00_bglt) (BgL_obj3679z00_1064);
									BGL_OBJECT_WIDENING_SET(BgL_auxz00_3203, BgL_auxz00_3205);
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_obj3679z00_1064),
									BGl_classzd2numzd2zz__objectz00
									(BGl_localzf2Ginfozf2zzglobaliza7e_ginfoza7));
								BgL_obj3679z00_1064;
							}
							{
								obj_t BgL_auxz00_3213;

								BgL_funz00_bglt BgL_auxz00_3211;

								BgL_auxz00_3213 = (obj_t) (BgL_closurez00_1059);
								BgL_auxz00_3211 = (BgL_funz00_bglt) (BgL_infoz00_1057);
								((((BgL_funz00_bglt) CREF(BgL_auxz00_3211))->
										BgL_thezd2closurezd2) = ((obj_t) BgL_auxz00_3213), BUNSPEC);
							}
							return (obj_t) (BgL_closurez00_1059);
						}
				}
			}
		}
	}



/* free-from */
	BGL_EXPORTED_DEF obj_t BGl_freezd2fromzd2zzglobaliza7e_freeza7(obj_t
		BgL_setsz00_59, BgL_localz00_bglt BgL_integratorz00_60)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 403 */
			BGl_za2roundza2z00zzglobaliza7e_freeza7 =
				(BGl_za2roundza2z00zzglobaliza7e_freeza7 + ((long) 1));
			{	/* Globalize/free.scm 406 */
				BgL_valuez00_bglt BgL_finfoz00_1069;

				{
					BgL_variablez00_bglt BgL_auxz00_3218;

					BgL_auxz00_3218 = (BgL_variablez00_bglt) (BgL_integratorz00_60);
					BgL_finfoz00_1069 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_3218))->BgL_valuez00);
				}
				{	/* Globalize/free.scm 413 */
					obj_t BgL_g3692z00_1070;

					{	/* Globalize/free.scm 413 */
						BgL_sfunzf2ginfozf2_bglt BgL_obj3382z00_1915;

						BgL_obj3382z00_1915 =
							(BgL_sfunzf2ginfozf2_bglt) (BgL_finfoz00_1069);
						{
							obj_t BgL_auxz00_3222;

							{	/* Globalize/free.scm 413 */
								BgL_objectz00_bglt BgL_auxz00_3223;

								BgL_auxz00_3223 = (BgL_objectz00_bglt) (BgL_obj3382z00_1915);
								BgL_auxz00_3222 = BGL_OBJECT_WIDENING(BgL_auxz00_3223);
							}
							BgL_g3692z00_1070 =
								(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3222))->
								BgL_boundz00);
					}}
					{
						obj_t BgL_l3690z00_1072;

						BgL_l3690z00_1072 = BgL_g3692z00_1070;
					BgL_zc3anonymousza33818ze3z83_1073:
						if (PAIRP(BgL_l3690z00_1072))
							{	/* Globalize/free.scm 413 */
								{	/* Globalize/free.scm 413 */
									obj_t BgL_arg3820z00_1075;

									BgL_arg3820z00_1075 = CAR(BgL_l3690z00_1072);
									BGl_markzd2variablez12zc0zzglobaliza7e_freeza7(
										(BgL_localz00_bglt) (BgL_arg3820z00_1075));
								}
								{
									obj_t BgL_l3690z00_3232;

									BgL_l3690z00_3232 = CDR(BgL_l3690z00_1072);
									BgL_l3690z00_1072 = BgL_l3690z00_3232;
									goto BgL_zc3anonymousza33818ze3z83_1073;
								}
							}
						else
							{	/* Globalize/free.scm 413 */
								((bool_t) 1);
							}
					}
				}
			}
			if (NULLP(BgL_setsz00_59))
				{	/* Globalize/free.scm 415 */
					return BNIL;
				}
			else
				{	/* Globalize/free.scm 415 */
					obj_t BgL_head3695z00_1080;

					BgL_head3695z00_1080 = MAKE_PAIR(BNIL, BNIL);
					{
						obj_t BgL_l3693z00_1082;

						obj_t BgL_tail3696z00_1083;

						BgL_l3693z00_1082 = BgL_setsz00_59;
						BgL_tail3696z00_1083 = BgL_head3695z00_1080;
					BgL_zc3anonymousza33823ze3z83_1084:
						if (NULLP(BgL_l3693z00_1082))
							{	/* Globalize/free.scm 415 */
								return CDR(BgL_head3695z00_1080);
							}
						else
							{	/* Globalize/free.scm 415 */
								obj_t BgL_newtail3697z00_1086;

								{	/* Globalize/free.scm 415 */
									obj_t BgL_arg3826z00_1088;

									{	/* Globalize/free.scm 415 */
										obj_t BgL_setz00_1090;

										BgL_setz00_1090 = CAR(BgL_l3693z00_1082);
										{
											obj_t BgL_setz00_1093;

											obj_t BgL_resz00_1094;

											BgL_setz00_1093 = BgL_setz00_1090;
											BgL_resz00_1094 = BNIL;
										BgL_zc3anonymousza33828ze3z83_1095:
											if (NULLP(BgL_setz00_1093))
												{	/* Globalize/free.scm 419 */
													BgL_arg3826z00_1088 = BgL_resz00_1094;
												}
											else
												{	/* Globalize/free.scm 421 */
													bool_t BgL_testz00_3243;

													{	/* Globalize/free.scm 421 */
														obj_t BgL_arg3835z00_1102;

														BgL_arg3835z00_1102 = CAR(BgL_setz00_1093);
														BgL_testz00_3243 =
															CBOOL
															(BGl_freezd2variablezf3z21zzglobaliza7e_freeza7
															(BgL_arg3835z00_1102));
													}
													if (BgL_testz00_3243)
														{	/* Globalize/free.scm 422 */
															obj_t BgL_arg3831z00_1098;

															obj_t BgL_arg3832z00_1099;

															BgL_arg3831z00_1098 = CDR(BgL_setz00_1093);
															BgL_arg3832z00_1099 =
																MAKE_PAIR(CAR(BgL_setz00_1093),
																BgL_resz00_1094);
															{
																obj_t BgL_resz00_3251;

																obj_t BgL_setz00_3250;

																BgL_setz00_3250 = BgL_arg3831z00_1098;
																BgL_resz00_3251 = BgL_arg3832z00_1099;
																BgL_resz00_1094 = BgL_resz00_3251;
																BgL_setz00_1093 = BgL_setz00_3250;
																goto BgL_zc3anonymousza33828ze3z83_1095;
															}
														}
													else
														{
															obj_t BgL_setz00_3252;

															BgL_setz00_3252 = CDR(BgL_setz00_1093);
															BgL_setz00_1093 = BgL_setz00_3252;
															goto BgL_zc3anonymousza33828ze3z83_1095;
														}
												}
										}
									}
									BgL_newtail3697z00_1086 =
										MAKE_PAIR(BgL_arg3826z00_1088, BNIL);
								}
								SET_CDR(BgL_tail3696z00_1083, BgL_newtail3697z00_1086);
								{
									obj_t BgL_tail3696z00_3258;

									obj_t BgL_l3693z00_3256;

									BgL_l3693z00_3256 = CDR(BgL_l3693z00_1082);
									BgL_tail3696z00_3258 = BgL_newtail3697z00_1086;
									BgL_tail3696z00_1083 = BgL_tail3696z00_3258;
									BgL_l3693z00_1082 = BgL_l3693z00_3256;
									goto BgL_zc3anonymousza33823ze3z83_1084;
								}
							}
					}
				}
		}
	}



/* _free-from */
	obj_t BGl__freezd2fromzd2zzglobaliza7e_freeza7(obj_t BgL_envz00_2753,
		obj_t BgL_setsz00_2754, obj_t BgL_integratorz00_2755)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 403 */
			return
				BGl_freezd2fromzd2zzglobaliza7e_freeza7(BgL_setsz00_2754,
				(BgL_localz00_bglt) (BgL_integratorz00_2755));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_freeza7()
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_nodezd2freezd2default3698zd2envzd2zzglobaliza7e_freeza7,
				BGl_nodez00zzast_nodez00, BGl_string4052z00zzglobaliza7e_freeza7);
		}
	}



/* node-free */
	obj_t BGl_nodezd2freezd2zzglobaliza7e_freeza7(BgL_nodez00_bglt BgL_nodez00_9,
		obj_t BgL_freez00_10)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 119 */
			{	/* Globalize/free.scm 119 */
				obj_t BgL_method3699z00_1935;

				{	/* Globalize/free.scm 119 */
					BgL_objectz00_bglt BgL_objz00_1936;

					BgL_objz00_1936 = (BgL_objectz00_bglt) (BgL_nodez00_9);
					{	/* Globalize/free.scm 119 */
						long BgL_objzd2classzd2numz00_1937;

						BgL_objzd2classzd2numz00_1937 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1936);
						{	/* Globalize/free.scm 119 */
							obj_t BgL_arg2643z00_1938;

							BgL_arg2643z00_1938 =
								PROCEDURE_REF(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
								(int) (((long) 1)));
							{	/* Globalize/free.scm 119 */
								obj_t BgL_arrayz00_1940;

								int BgL_offsetz00_1941;

								BgL_arrayz00_1940 = BgL_arg2643z00_1938;
								BgL_offsetz00_1941 = (int) (BgL_objzd2classzd2numz00_1937);
								{	/* Globalize/free.scm 119 */
									long BgL_offsetz00_1942;

									BgL_offsetz00_1942 =
										((long) (BgL_offsetz00_1941) - OBJECT_TYPE);
									{	/* Globalize/free.scm 119 */
										long BgL_modz00_1943;

										{	/* Globalize/free.scm 119 */
											int BgL_arg2645z00_1944;

											BgL_arg2645z00_1944 = (int) (((long) 16));
											{	/* Globalize/free.scm 119 */
												long BgL_auxz00_3270;

												BgL_auxz00_3270 = (long) (BgL_arg2645z00_1944);
												BgL_modz00_1943 =
													(BgL_offsetz00_1942 / BgL_auxz00_3270);
										}}
										{	/* Globalize/free.scm 119 */
											long BgL_restz00_1945;

											{	/* Globalize/free.scm 119 */
												int BgL_arg2644z00_1946;

												BgL_arg2644z00_1946 = (int) (((long) 16));
												{	/* Globalize/free.scm 119 */
													long BgL_auxz00_3274;

													BgL_auxz00_3274 = (long) (BgL_arg2644z00_1946);
													BgL_restz00_1945 =
														(BgL_offsetz00_1942 % BgL_auxz00_3274);
											}}
											{	/* Globalize/free.scm 119 */

												BgL_method3699z00_1935 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1940,
														(int) (BgL_modz00_1943)), (int) (BgL_restz00_1945));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3699z00_1935) (BgL_method3699z00_1935,
					(obj_t) (BgL_nodez00_9), BgL_freez00_10, BEOA);
			}
		}
	}



/* _node-free */
	obj_t BGl__nodezd2freezd2zzglobaliza7e_freeza7(obj_t BgL_envz00_2744,
		obj_t BgL_nodez00_2745, obj_t BgL_freez00_2746)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 119 */
			return
				BGl_nodezd2freezd2zzglobaliza7e_freeza7(
				(BgL_nodez00_bglt) (BgL_nodez00_2745), BgL_freez00_2746);
		}
	}



/* _node-free-default3698 */
	obj_t BGl__nodezd2freezd2default3698z00zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2756, obj_t BgL_nodez00_2757, obj_t BgL_freez00_2758)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 15 */
			return BgL_freez00_2758;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_freeza7()
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7, BGl_varz00zzast_nodez00,
				BGl_proc4053z00zzglobaliza7e_freeza7,
				BGl_string4052z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_closurez00zzast_nodez00, BGl_proc4054z00zzglobaliza7e_freeza7,
				BGl_string4052z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_sequencez00zzast_nodez00, BGl_proc4055z00zzglobaliza7e_freeza7,
				BGl_string4052z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7, BGl_appz00zzast_nodez00,
				BGl_proc4056z00zzglobaliza7e_freeza7,
				BGl_string4052z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc4057z00zzglobaliza7e_freeza7,
				BGl_string4052z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_funcallz00zzast_nodez00, BGl_proc4058z00zzglobaliza7e_freeza7,
				BGl_string4052z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_externz00zzast_nodez00, BGl_proc4059z00zzglobaliza7e_freeza7,
				BGl_string4052z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_castz00zzast_nodez00, BGl_proc4060z00zzglobaliza7e_freeza7,
				BGl_string4052z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_setqz00zzast_nodez00, BGl_proc4061z00zzglobaliza7e_freeza7,
				BGl_string4052z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_conditionalz00zzast_nodez00, BGl_proc4062z00zzglobaliza7e_freeza7,
				BGl_string4052z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_failz00zzast_nodez00, BGl_proc4063z00zzglobaliza7e_freeza7,
				BGl_string4052z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_selectz00zzast_nodez00, BGl_proc4064z00zzglobaliza7e_freeza7,
				BGl_string4052z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc4065z00zzglobaliza7e_freeza7,
				BGl_string4052z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc4066z00zzglobaliza7e_freeza7,
				BGl_string4052z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc4067z00zzglobaliza7e_freeza7,
				BGl_string4052z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc4068z00zzglobaliza7e_freeza7,
				BGl_string4052z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc4069z00zzglobaliza7e_freeza7,
				BGl_string4052z00zzglobaliza7e_freeza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc4070z00zzglobaliza7e_freeza7,
				BGl_string4052z00zzglobaliza7e_freeza7);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc4071z00zzglobaliza7e_freeza7,
				BGl_string4052z00zzglobaliza7e_freeza7);
		}
	}



/* node-free-box-set!3743 */
	obj_t BGl_nodezd2freezd2boxzd2setz123743zc0zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2778, obj_t BgL_nodez00_2779, obj_t BgL_freez00_2780)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 305 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1755;

				obj_t BgL_freez00_1756;

				BgL_nodez00_1755 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2779);
				BgL_freez00_1756 = BgL_freez00_2780;
				{	/* Globalize/free.scm 306 */
					BgL_varz00_bglt BgL_arg3988z00_2682;

					obj_t BgL_arg3989z00_2683;

					BgL_arg3988z00_2682 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1755))->BgL_varz00);
					{	/* Globalize/free.scm 306 */
						BgL_nodez00_bglt BgL_arg3990z00_2684;

						BgL_arg3990z00_2684 =
							(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1755))->
							BgL_valuez00);
						{	/* Globalize/free.scm 306 */
							obj_t BgL_method3699z00_2689;

							{	/* Globalize/free.scm 306 */
								BgL_objectz00_bglt BgL_objz00_2690;

								BgL_objz00_2690 = (BgL_objectz00_bglt) (BgL_arg3990z00_2684);
								{	/* Globalize/free.scm 306 */
									long BgL_objzd2classzd2numz00_2691;

									BgL_objzd2classzd2numz00_2691 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2690);
									{	/* Globalize/free.scm 306 */
										obj_t BgL_arg2643z00_2692;

										BgL_arg2643z00_2692 =
											PROCEDURE_REF
											(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
											(int) (((long) 1)));
										{	/* Globalize/free.scm 306 */
											obj_t BgL_arrayz00_2694;

											int BgL_offsetz00_2695;

											BgL_arrayz00_2694 = BgL_arg2643z00_2692;
											BgL_offsetz00_2695 =
												(int) (BgL_objzd2classzd2numz00_2691);
											{	/* Globalize/free.scm 306 */
												long BgL_offsetz00_2696;

												BgL_offsetz00_2696 =
													((long) (BgL_offsetz00_2695) - OBJECT_TYPE);
												{	/* Globalize/free.scm 306 */
													long BgL_modz00_2697;

													{	/* Globalize/free.scm 306 */
														int BgL_arg2645z00_2698;

														BgL_arg2645z00_2698 = (int) (((long) 16));
														{	/* Globalize/free.scm 306 */
															long BgL_auxz00_3315;

															BgL_auxz00_3315 = (long) (BgL_arg2645z00_2698);
															BgL_modz00_2697 =
																(BgL_offsetz00_2696 / BgL_auxz00_3315);
													}}
													{	/* Globalize/free.scm 306 */
														long BgL_restz00_2699;

														{	/* Globalize/free.scm 306 */
															int BgL_arg2644z00_2700;

															BgL_arg2644z00_2700 = (int) (((long) 16));
															{	/* Globalize/free.scm 306 */
																long BgL_auxz00_3319;

																BgL_auxz00_3319 = (long) (BgL_arg2644z00_2700);
																BgL_restz00_2699 =
																	(BgL_offsetz00_2696 % BgL_auxz00_3319);
														}}
														{	/* Globalize/free.scm 306 */

															BgL_method3699z00_2689 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2694,
																	(int) (BgL_modz00_2697)),
																(int) (BgL_restz00_2699));
							}}}}}}}}
							BgL_arg3989z00_2683 =
								PROCEDURE_ENTRY(BgL_method3699z00_2689) (BgL_method3699z00_2689,
								(obj_t) (BgL_arg3990z00_2684), BgL_freez00_1756, BEOA);
					}}
					{	/* Globalize/free.scm 306 */
						BgL_nodez00_bglt BgL_nodez00_2714;

						BgL_nodez00_2714 = (BgL_nodez00_bglt) (BgL_arg3988z00_2682);
						{	/* Globalize/free.scm 306 */
							obj_t BgL_method3699z00_2716;

							{	/* Globalize/free.scm 306 */
								BgL_objectz00_bglt BgL_objz00_2717;

								BgL_objz00_2717 = (BgL_objectz00_bglt) (BgL_nodez00_2714);
								{	/* Globalize/free.scm 306 */
									long BgL_objzd2classzd2numz00_2718;

									BgL_objzd2classzd2numz00_2718 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2717);
									{	/* Globalize/free.scm 306 */
										obj_t BgL_arg2643z00_2719;

										BgL_arg2643z00_2719 =
											PROCEDURE_REF
											(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
											(int) (((long) 1)));
										{	/* Globalize/free.scm 306 */
											obj_t BgL_arrayz00_2721;

											int BgL_offsetz00_2722;

											BgL_arrayz00_2721 = BgL_arg2643z00_2719;
											BgL_offsetz00_2722 =
												(int) (BgL_objzd2classzd2numz00_2718);
											{	/* Globalize/free.scm 306 */
												long BgL_offsetz00_2723;

												BgL_offsetz00_2723 =
													((long) (BgL_offsetz00_2722) - OBJECT_TYPE);
												{	/* Globalize/free.scm 306 */
													long BgL_modz00_2724;

													{	/* Globalize/free.scm 306 */
														int BgL_arg2645z00_2725;

														BgL_arg2645z00_2725 = (int) (((long) 16));
														{	/* Globalize/free.scm 306 */
															long BgL_auxz00_3338;

															BgL_auxz00_3338 = (long) (BgL_arg2645z00_2725);
															BgL_modz00_2724 =
																(BgL_offsetz00_2723 / BgL_auxz00_3338);
													}}
													{	/* Globalize/free.scm 306 */
														long BgL_restz00_2726;

														{	/* Globalize/free.scm 306 */
															int BgL_arg2644z00_2727;

															BgL_arg2644z00_2727 = (int) (((long) 16));
															{	/* Globalize/free.scm 306 */
																long BgL_auxz00_3342;

																BgL_auxz00_3342 = (long) (BgL_arg2644z00_2727);
																BgL_restz00_2726 =
																	(BgL_offsetz00_2723 % BgL_auxz00_3342);
														}}
														{	/* Globalize/free.scm 306 */

															BgL_method3699z00_2716 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2721,
																	(int) (BgL_modz00_2724)),
																(int) (BgL_restz00_2726));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3699z00_2716) (BgL_method3699z00_2716,
								(obj_t) (BgL_nodez00_2714), BgL_arg3989z00_2683, BEOA);
						}
					}
				}
			}
		}
	}



/* node-free-box-ref3741 */
	obj_t BGl_nodezd2freezd2boxzd2ref3741zd2zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2781, obj_t BgL_nodez00_2782, obj_t BgL_freez00_2783)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 298 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1747;

				obj_t BgL_freez00_1748;

				BgL_nodez00_1747 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2782);
				BgL_freez00_1748 = BgL_freez00_2783;
				{	/* Globalize/free.scm 299 */
					BgL_varz00_bglt BgL_arg3986z00_2652;

					BgL_arg3986z00_2652 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1747))->BgL_varz00);
					{	/* Globalize/free.scm 299 */
						BgL_nodez00_bglt BgL_nodez00_2654;

						BgL_nodez00_2654 = (BgL_nodez00_bglt) (BgL_arg3986z00_2652);
						{	/* Globalize/free.scm 299 */
							obj_t BgL_method3699z00_2656;

							{	/* Globalize/free.scm 299 */
								BgL_objectz00_bglt BgL_objz00_2657;

								BgL_objz00_2657 = (BgL_objectz00_bglt) (BgL_nodez00_2654);
								{	/* Globalize/free.scm 299 */
									long BgL_objzd2classzd2numz00_2658;

									BgL_objzd2classzd2numz00_2658 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2657);
									{	/* Globalize/free.scm 299 */
										obj_t BgL_arg2643z00_2659;

										BgL_arg2643z00_2659 =
											PROCEDURE_REF
											(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
											(int) (((long) 1)));
										{	/* Globalize/free.scm 299 */
											obj_t BgL_arrayz00_2661;

											int BgL_offsetz00_2662;

											BgL_arrayz00_2661 = BgL_arg2643z00_2659;
											BgL_offsetz00_2662 =
												(int) (BgL_objzd2classzd2numz00_2658);
											{	/* Globalize/free.scm 299 */
												long BgL_offsetz00_2663;

												BgL_offsetz00_2663 =
													((long) (BgL_offsetz00_2662) - OBJECT_TYPE);
												{	/* Globalize/free.scm 299 */
													long BgL_modz00_2664;

													{	/* Globalize/free.scm 299 */
														int BgL_arg2645z00_2665;

														BgL_arg2645z00_2665 = (int) (((long) 16));
														{	/* Globalize/free.scm 299 */
															long BgL_auxz00_3363;

															BgL_auxz00_3363 = (long) (BgL_arg2645z00_2665);
															BgL_modz00_2664 =
																(BgL_offsetz00_2663 / BgL_auxz00_3363);
													}}
													{	/* Globalize/free.scm 299 */
														long BgL_restz00_2666;

														{	/* Globalize/free.scm 299 */
															int BgL_arg2644z00_2667;

															BgL_arg2644z00_2667 = (int) (((long) 16));
															{	/* Globalize/free.scm 299 */
																long BgL_auxz00_3367;

																BgL_auxz00_3367 = (long) (BgL_arg2644z00_2667);
																BgL_restz00_2666 =
																	(BgL_offsetz00_2663 % BgL_auxz00_3367);
														}}
														{	/* Globalize/free.scm 299 */

															BgL_method3699z00_2656 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2661,
																	(int) (BgL_modz00_2664)),
																(int) (BgL_restz00_2666));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3699z00_2656) (BgL_method3699z00_2656,
								(obj_t) (BgL_nodez00_2654), BgL_freez00_1748, BEOA);
						}
					}
				}
			}
		}
	}



/* node-free-make-box3738 */
	obj_t BGl_nodezd2freezd2makezd2box3738zd2zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2784, obj_t BgL_nodez00_2785, obj_t BgL_freez00_2786)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 291 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1739;

				obj_t BgL_freez00_1740;

				BgL_nodez00_1739 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2785);
				BgL_freez00_1740 = BgL_freez00_2786;
				{	/* Globalize/free.scm 292 */
					BgL_nodez00_bglt BgL_arg3984z00_2622;

					BgL_arg3984z00_2622 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1739))->BgL_valuez00);
					{	/* Globalize/free.scm 292 */
						obj_t BgL_method3699z00_2626;

						{	/* Globalize/free.scm 292 */
							BgL_objectz00_bglt BgL_objz00_2627;

							BgL_objz00_2627 = (BgL_objectz00_bglt) (BgL_arg3984z00_2622);
							{	/* Globalize/free.scm 292 */
								long BgL_objzd2classzd2numz00_2628;

								BgL_objzd2classzd2numz00_2628 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2627);
								{	/* Globalize/free.scm 292 */
									obj_t BgL_arg2643z00_2629;

									BgL_arg2643z00_2629 =
										PROCEDURE_REF(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
										(int) (((long) 1)));
									{	/* Globalize/free.scm 292 */
										obj_t BgL_arrayz00_2631;

										int BgL_offsetz00_2632;

										BgL_arrayz00_2631 = BgL_arg2643z00_2629;
										BgL_offsetz00_2632 = (int) (BgL_objzd2classzd2numz00_2628);
										{	/* Globalize/free.scm 292 */
											long BgL_offsetz00_2633;

											BgL_offsetz00_2633 =
												((long) (BgL_offsetz00_2632) - OBJECT_TYPE);
											{	/* Globalize/free.scm 292 */
												long BgL_modz00_2634;

												{	/* Globalize/free.scm 292 */
													int BgL_arg2645z00_2635;

													BgL_arg2645z00_2635 = (int) (((long) 16));
													{	/* Globalize/free.scm 292 */
														long BgL_auxz00_3387;

														BgL_auxz00_3387 = (long) (BgL_arg2645z00_2635);
														BgL_modz00_2634 =
															(BgL_offsetz00_2633 / BgL_auxz00_3387);
												}}
												{	/* Globalize/free.scm 292 */
													long BgL_restz00_2636;

													{	/* Globalize/free.scm 292 */
														int BgL_arg2644z00_2637;

														BgL_arg2644z00_2637 = (int) (((long) 16));
														{	/* Globalize/free.scm 292 */
															long BgL_auxz00_3391;

															BgL_auxz00_3391 = (long) (BgL_arg2644z00_2637);
															BgL_restz00_2636 =
																(BgL_offsetz00_2633 % BgL_auxz00_3391);
													}}
													{	/* Globalize/free.scm 292 */

														BgL_method3699z00_2626 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2631,
																(int) (BgL_modz00_2634)),
															(int) (BgL_restz00_2636));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3699z00_2626) (BgL_method3699z00_2626,
							(obj_t) (BgL_arg3984z00_2622), BgL_freez00_1740, BEOA);
					}
				}
			}
		}
	}



/* node-free-jump-ex-it3735 */
	obj_t BGl_nodezd2freezd2jumpzd2exzd2it3735z00zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2787, obj_t BgL_nodez00_2788, obj_t BgL_freez00_2789)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 284 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1729;

				obj_t BgL_freez00_1730;

				BgL_nodez00_1729 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2788);
				BgL_freez00_1730 = BgL_freez00_2789;
				{	/* Globalize/free.scm 285 */
					BgL_nodez00_bglt BgL_arg3980z00_2562;

					obj_t BgL_arg3981z00_2563;

					BgL_arg3980z00_2562 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1729))->
						BgL_exitz00);
					{	/* Globalize/free.scm 285 */
						BgL_nodez00_bglt BgL_arg3982z00_2564;

						BgL_arg3982z00_2564 =
							(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1729))->
							BgL_valuez00);
						{	/* Globalize/free.scm 285 */
							obj_t BgL_method3699z00_2569;

							{	/* Globalize/free.scm 285 */
								BgL_objectz00_bglt BgL_objz00_2570;

								BgL_objz00_2570 = (BgL_objectz00_bglt) (BgL_arg3982z00_2564);
								{	/* Globalize/free.scm 285 */
									long BgL_objzd2classzd2numz00_2571;

									BgL_objzd2classzd2numz00_2571 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2570);
									{	/* Globalize/free.scm 285 */
										obj_t BgL_arg2643z00_2572;

										BgL_arg2643z00_2572 =
											PROCEDURE_REF
											(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
											(int) (((long) 1)));
										{	/* Globalize/free.scm 285 */
											obj_t BgL_arrayz00_2574;

											int BgL_offsetz00_2575;

											BgL_arrayz00_2574 = BgL_arg2643z00_2572;
											BgL_offsetz00_2575 =
												(int) (BgL_objzd2classzd2numz00_2571);
											{	/* Globalize/free.scm 285 */
												long BgL_offsetz00_2576;

												BgL_offsetz00_2576 =
													((long) (BgL_offsetz00_2575) - OBJECT_TYPE);
												{	/* Globalize/free.scm 285 */
													long BgL_modz00_2577;

													{	/* Globalize/free.scm 285 */
														int BgL_arg2645z00_2578;

														BgL_arg2645z00_2578 = (int) (((long) 16));
														{	/* Globalize/free.scm 285 */
															long BgL_auxz00_3412;

															BgL_auxz00_3412 = (long) (BgL_arg2645z00_2578);
															BgL_modz00_2577 =
																(BgL_offsetz00_2576 / BgL_auxz00_3412);
													}}
													{	/* Globalize/free.scm 285 */
														long BgL_restz00_2579;

														{	/* Globalize/free.scm 285 */
															int BgL_arg2644z00_2580;

															BgL_arg2644z00_2580 = (int) (((long) 16));
															{	/* Globalize/free.scm 285 */
																long BgL_auxz00_3416;

																BgL_auxz00_3416 = (long) (BgL_arg2644z00_2580);
																BgL_restz00_2579 =
																	(BgL_offsetz00_2576 % BgL_auxz00_3416);
														}}
														{	/* Globalize/free.scm 285 */

															BgL_method3699z00_2569 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2574,
																	(int) (BgL_modz00_2577)),
																(int) (BgL_restz00_2579));
							}}}}}}}}
							BgL_arg3981z00_2563 =
								PROCEDURE_ENTRY(BgL_method3699z00_2569) (BgL_method3699z00_2569,
								(obj_t) (BgL_arg3982z00_2564), BgL_freez00_1730, BEOA);
					}}
					{	/* Globalize/free.scm 285 */
						obj_t BgL_method3699z00_2596;

						{	/* Globalize/free.scm 285 */
							BgL_objectz00_bglt BgL_objz00_2597;

							BgL_objz00_2597 = (BgL_objectz00_bglt) (BgL_arg3980z00_2562);
							{	/* Globalize/free.scm 285 */
								long BgL_objzd2classzd2numz00_2598;

								BgL_objzd2classzd2numz00_2598 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2597);
								{	/* Globalize/free.scm 285 */
									obj_t BgL_arg2643z00_2599;

									BgL_arg2643z00_2599 =
										PROCEDURE_REF(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
										(int) (((long) 1)));
									{	/* Globalize/free.scm 285 */
										obj_t BgL_arrayz00_2601;

										int BgL_offsetz00_2602;

										BgL_arrayz00_2601 = BgL_arg2643z00_2599;
										BgL_offsetz00_2602 = (int) (BgL_objzd2classzd2numz00_2598);
										{	/* Globalize/free.scm 285 */
											long BgL_offsetz00_2603;

											BgL_offsetz00_2603 =
												((long) (BgL_offsetz00_2602) - OBJECT_TYPE);
											{	/* Globalize/free.scm 285 */
												long BgL_modz00_2604;

												{	/* Globalize/free.scm 285 */
													int BgL_arg2645z00_2605;

													BgL_arg2645z00_2605 = (int) (((long) 16));
													{	/* Globalize/free.scm 285 */
														long BgL_auxz00_3434;

														BgL_auxz00_3434 = (long) (BgL_arg2645z00_2605);
														BgL_modz00_2604 =
															(BgL_offsetz00_2603 / BgL_auxz00_3434);
												}}
												{	/* Globalize/free.scm 285 */
													long BgL_restz00_2606;

													{	/* Globalize/free.scm 285 */
														int BgL_arg2644z00_2607;

														BgL_arg2644z00_2607 = (int) (((long) 16));
														{	/* Globalize/free.scm 285 */
															long BgL_auxz00_3438;

															BgL_auxz00_3438 = (long) (BgL_arg2644z00_2607);
															BgL_restz00_2606 =
																(BgL_offsetz00_2603 % BgL_auxz00_3438);
													}}
													{	/* Globalize/free.scm 285 */

														BgL_method3699z00_2596 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2601,
																(int) (BgL_modz00_2604)),
															(int) (BgL_restz00_2606));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3699z00_2596) (BgL_method3699z00_2596,
							(obj_t) (BgL_arg3980z00_2562), BgL_arg3981z00_2563, BEOA);
					}
				}
			}
		}
	}



/* node-free-set-ex-it3732 */
	obj_t BGl_nodezd2freezd2setzd2exzd2it3732z00zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2790, obj_t BgL_nodez00_2791, obj_t BgL_freez00_2792)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 276 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1719;

				obj_t BgL_freez00_1720;

				BgL_nodez00_1719 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2791);
				BgL_freez00_1720 = BgL_freez00_2792;
				{	/* Globalize/free.scm 278 */
					BgL_variablez00_bglt BgL_arg3976z00_1724;

					{	/* Globalize/free.scm 278 */
						BgL_varz00_bglt BgL_obj2155z00_2532;

						BgL_obj2155z00_2532 =
							(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1719))->
							BgL_varz00);
						BgL_arg3976z00_1724 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2532))->BgL_variablez00);
					}
					BGl_bindzd2variablez12zc0zzglobaliza7e_freeza7(
						(BgL_localz00_bglt) (BgL_arg3976z00_1724),
						(BgL_localz00_bglt) (BGl_za2integratorza2z00zzglobaliza7e_freeza7));
				}
				{	/* Globalize/free.scm 279 */
					BgL_nodez00_bglt BgL_arg3978z00_1726;

					BgL_arg3978z00_1726 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1719))->BgL_bodyz00);
					{	/* Globalize/free.scm 279 */
						obj_t BgL_method3699z00_2536;

						{	/* Globalize/free.scm 279 */
							BgL_objectz00_bglt BgL_objz00_2537;

							BgL_objz00_2537 = (BgL_objectz00_bglt) (BgL_arg3978z00_1726);
							{	/* Globalize/free.scm 279 */
								long BgL_objzd2classzd2numz00_2538;

								BgL_objzd2classzd2numz00_2538 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2537);
								{	/* Globalize/free.scm 279 */
									obj_t BgL_arg2643z00_2539;

									BgL_arg2643z00_2539 =
										PROCEDURE_REF(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
										(int) (((long) 1)));
									{	/* Globalize/free.scm 279 */
										obj_t BgL_arrayz00_2541;

										int BgL_offsetz00_2542;

										BgL_arrayz00_2541 = BgL_arg2643z00_2539;
										BgL_offsetz00_2542 = (int) (BgL_objzd2classzd2numz00_2538);
										{	/* Globalize/free.scm 279 */
											long BgL_offsetz00_2543;

											BgL_offsetz00_2543 =
												((long) (BgL_offsetz00_2542) - OBJECT_TYPE);
											{	/* Globalize/free.scm 279 */
												long BgL_modz00_2544;

												{	/* Globalize/free.scm 279 */
													int BgL_arg2645z00_2545;

													BgL_arg2645z00_2545 = (int) (((long) 16));
													{	/* Globalize/free.scm 279 */
														long BgL_auxz00_3463;

														BgL_auxz00_3463 = (long) (BgL_arg2645z00_2545);
														BgL_modz00_2544 =
															(BgL_offsetz00_2543 / BgL_auxz00_3463);
												}}
												{	/* Globalize/free.scm 279 */
													long BgL_restz00_2546;

													{	/* Globalize/free.scm 279 */
														int BgL_arg2644z00_2547;

														BgL_arg2644z00_2547 = (int) (((long) 16));
														{	/* Globalize/free.scm 279 */
															long BgL_auxz00_3467;

															BgL_auxz00_3467 = (long) (BgL_arg2644z00_2547);
															BgL_restz00_2546 =
																(BgL_offsetz00_2543 % BgL_auxz00_3467);
													}}
													{	/* Globalize/free.scm 279 */

														BgL_method3699z00_2536 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2541,
																(int) (BgL_modz00_2544)),
															(int) (BgL_restz00_2546));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3699z00_2536) (BgL_method3699z00_2536,
							(obj_t) (BgL_arg3978z00_1726), BgL_freez00_1720, BEOA);
					}
				}
			}
		}
	}



/* node-free-let-var3730 */
	obj_t BGl_nodezd2freezd2letzd2var3730zd2zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2793, obj_t BgL_nodez00_2794, obj_t BgL_freez00_2795)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 262 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1698;

				obj_t BgL_freez00_1699;

				BgL_nodez00_1698 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2794);
				BgL_freez00_1699 = BgL_freez00_2795;
				{
					obj_t BgL_bindingsz00_1705;

					obj_t BgL_freez00_1706;

					{	/* Globalize/free.scm 264 */
						obj_t BgL_arg3964z00_1704;

						BgL_arg3964z00_1704 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1698))->
							BgL_bindingsz00);
						BgL_bindingsz00_1705 = BgL_arg3964z00_1704;
						BgL_freez00_1706 = BgL_freez00_1699;
					BgL_zc3anonymousza33965ze3z83_1707:
						if (NULLP(BgL_bindingsz00_1705))
							{	/* Globalize/free.scm 267 */
								BgL_nodez00_bglt BgL_arg3967z00_1709;

								BgL_arg3967z00_1709 =
									(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1698))->
									BgL_bodyz00);
								{	/* Globalize/free.scm 267 */
									obj_t BgL_method3699z00_2474;

									{	/* Globalize/free.scm 267 */
										BgL_objectz00_bglt BgL_objz00_2475;

										BgL_objz00_2475 =
											(BgL_objectz00_bglt) (BgL_arg3967z00_1709);
										{	/* Globalize/free.scm 267 */
											long BgL_objzd2classzd2numz00_2476;

											BgL_objzd2classzd2numz00_2476 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2475);
											{	/* Globalize/free.scm 267 */
												obj_t BgL_arg2643z00_2477;

												BgL_arg2643z00_2477 =
													PROCEDURE_REF
													(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
													(int) (((long) 1)));
												{	/* Globalize/free.scm 267 */
													obj_t BgL_arrayz00_2479;

													int BgL_offsetz00_2480;

													BgL_arrayz00_2479 = BgL_arg2643z00_2477;
													BgL_offsetz00_2480 =
														(int) (BgL_objzd2classzd2numz00_2476);
													{	/* Globalize/free.scm 267 */
														long BgL_offsetz00_2481;

														BgL_offsetz00_2481 =
															((long) (BgL_offsetz00_2480) - OBJECT_TYPE);
														{	/* Globalize/free.scm 267 */
															long BgL_modz00_2482;

															{	/* Globalize/free.scm 267 */
																int BgL_arg2645z00_2483;

																BgL_arg2645z00_2483 = (int) (((long) 16));
																{	/* Globalize/free.scm 267 */
																	long BgL_auxz00_3490;

																	BgL_auxz00_3490 =
																		(long) (BgL_arg2645z00_2483);
																	BgL_modz00_2482 =
																		(BgL_offsetz00_2481 / BgL_auxz00_3490);
															}}
															{	/* Globalize/free.scm 267 */
																long BgL_restz00_2484;

																{	/* Globalize/free.scm 267 */
																	int BgL_arg2644z00_2485;

																	BgL_arg2644z00_2485 = (int) (((long) 16));
																	{	/* Globalize/free.scm 267 */
																		long BgL_auxz00_3494;

																		BgL_auxz00_3494 =
																			(long) (BgL_arg2644z00_2485);
																		BgL_restz00_2484 =
																			(BgL_offsetz00_2481 % BgL_auxz00_3494);
																}}
																{	/* Globalize/free.scm 267 */

																	BgL_method3699z00_2474 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2479,
																			(int) (BgL_modz00_2482)),
																		(int) (BgL_restz00_2484));
									}}}}}}}}
									return
										PROCEDURE_ENTRY(BgL_method3699z00_2474)
										(BgL_method3699z00_2474, (obj_t) (BgL_arg3967z00_1709),
										BgL_freez00_1706, BEOA);
								}
							}
						else
							{	/* Globalize/free.scm 266 */
								{	/* Globalize/free.scm 269 */
									obj_t BgL_arg3968z00_1710;

									BgL_arg3968z00_1710 = CAR(CAR(BgL_bindingsz00_1705));
									BGl_bindzd2variablez12zc0zzglobaliza7e_freeza7(
										(BgL_localz00_bglt) (BgL_arg3968z00_1710),
										(BgL_localz00_bglt)
										(BGl_za2integratorza2z00zzglobaliza7e_freeza7));
								}
								{	/* Globalize/free.scm 270 */
									obj_t BgL_arg3970z00_1712;

									obj_t BgL_arg3972z00_1713;

									BgL_arg3970z00_1712 = CDR(BgL_bindingsz00_1705);
									{	/* Globalize/free.scm 271 */
										obj_t BgL_arg3973z00_1714;

										BgL_arg3973z00_1714 = CDR(CAR(BgL_bindingsz00_1705));
										{	/* Globalize/free.scm 271 */
											BgL_nodez00_bglt BgL_nodez00_2504;

											BgL_nodez00_2504 =
												(BgL_nodez00_bglt) (BgL_arg3973z00_1714);
											{	/* Globalize/free.scm 271 */
												obj_t BgL_method3699z00_2506;

												{	/* Globalize/free.scm 271 */
													BgL_objectz00_bglt BgL_objz00_2507;

													BgL_objz00_2507 =
														(BgL_objectz00_bglt) (BgL_nodez00_2504);
													{	/* Globalize/free.scm 271 */
														long BgL_objzd2classzd2numz00_2508;

														BgL_objzd2classzd2numz00_2508 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2507);
														{	/* Globalize/free.scm 271 */
															obj_t BgL_arg2643z00_2509;

															BgL_arg2643z00_2509 =
																PROCEDURE_REF
																(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
																(int) (((long) 1)));
															{	/* Globalize/free.scm 271 */
																obj_t BgL_arrayz00_2511;

																int BgL_offsetz00_2512;

																BgL_arrayz00_2511 = BgL_arg2643z00_2509;
																BgL_offsetz00_2512 =
																	(int) (BgL_objzd2classzd2numz00_2508);
																{	/* Globalize/free.scm 271 */
																	long BgL_offsetz00_2513;

																	BgL_offsetz00_2513 =
																		((long) (BgL_offsetz00_2512) - OBJECT_TYPE);
																	{	/* Globalize/free.scm 271 */
																		long BgL_modz00_2514;

																		{	/* Globalize/free.scm 271 */
																			int BgL_arg2645z00_2515;

																			BgL_arg2645z00_2515 = (int) (((long) 16));
																			{	/* Globalize/free.scm 271 */
																				long BgL_auxz00_3521;

																				BgL_auxz00_3521 =
																					(long) (BgL_arg2645z00_2515);
																				BgL_modz00_2514 =
																					(BgL_offsetz00_2513 /
																					BgL_auxz00_3521);
																		}}
																		{	/* Globalize/free.scm 271 */
																			long BgL_restz00_2516;

																			{	/* Globalize/free.scm 271 */
																				int BgL_arg2644z00_2517;

																				BgL_arg2644z00_2517 =
																					(int) (((long) 16));
																				{	/* Globalize/free.scm 271 */
																					long BgL_auxz00_3525;

																					BgL_auxz00_3525 =
																						(long) (BgL_arg2644z00_2517);
																					BgL_restz00_2516 =
																						(BgL_offsetz00_2513 %
																						BgL_auxz00_3525);
																			}}
																			{	/* Globalize/free.scm 271 */

																				BgL_method3699z00_2506 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2511,
																						(int) (BgL_modz00_2514)),
																					(int) (BgL_restz00_2516));
												}}}}}}}}
												BgL_arg3972z00_1713 =
													PROCEDURE_ENTRY(BgL_method3699z00_2506)
													(BgL_method3699z00_2506, (obj_t) (BgL_nodez00_2504),
													BgL_freez00_1706, BEOA);
									}}}
									{
										obj_t BgL_freez00_3536;

										obj_t BgL_bindingsz00_3535;

										BgL_bindingsz00_3535 = BgL_arg3970z00_1712;
										BgL_freez00_3536 = BgL_arg3972z00_1713;
										BgL_freez00_1706 = BgL_freez00_3536;
										BgL_bindingsz00_1705 = BgL_bindingsz00_3535;
										goto BgL_zc3anonymousza33965ze3z83_1707;
									}
								}
							}
					}
				}
			}
		}
	}



/* node-free-let-fun3728 */
	obj_t BGl_nodezd2freezd2letzd2fun3728zd2zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2796, obj_t BgL_nodez00_2797, obj_t BgL_freez00_2798)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 237 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1659;

				obj_t BgL_freez00_1660;

				BgL_nodez00_1659 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2797);
				BgL_freez00_1660 = BgL_freez00_2798;
				{	/* Globalize/free.scm 239 */
					obj_t BgL_g3686z00_1664;

					BgL_g3686z00_1664 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1659))->BgL_localsz00);
					{
						obj_t BgL_l3684z00_1666;

						BgL_l3684z00_1666 = BgL_g3686z00_1664;
					BgL_zc3anonymousza33946ze3z83_1667:
						if (PAIRP(BgL_l3684z00_1666))
							{	/* Globalize/free.scm 239 */
								{	/* Globalize/free.scm 245 */
									obj_t BgL_fz00_1669;

									BgL_fz00_1669 = CAR(BgL_l3684z00_1666);
									BGl_bindzd2variablez12zc0zzglobaliza7e_freeza7(
										(BgL_localz00_bglt) (BgL_fz00_1669),
										(BgL_localz00_bglt)
										(BGl_za2integratorza2z00zzglobaliza7e_freeza7));
									{	/* Globalize/free.scm 243 */
										bool_t BgL_testz00_3545;

										{	/* Globalize/free.scm 243 */
											BgL_localzf2ginfozf2_bglt BgL_obj3520z00_2401;

											BgL_obj3520z00_2401 =
												(BgL_localzf2ginfozf2_bglt) (BgL_fz00_1669);
											{
												obj_t BgL_auxz00_3547;

												{	/* Globalize/free.scm 243 */
													BgL_objectz00_bglt BgL_auxz00_3548;

													BgL_auxz00_3548 =
														(BgL_objectz00_bglt) (BgL_obj3520z00_2401);
													BgL_auxz00_3547 =
														BGL_OBJECT_WIDENING(BgL_auxz00_3548);
												}
												BgL_testz00_3545 =
													(((BgL_localzf2ginfozf2_bglt) CREF(BgL_auxz00_3547))->
													BgL_escapezf3zf3);
											}
										}
										if (BgL_testz00_3545)
											{	/* Globalize/free.scm 244 */
												obj_t BgL_arg3949z00_1671;

												{	/* Globalize/free.scm 244 */
													obj_t BgL_arg3950z00_1672;

													{
														BgL_nodez00_bglt BgL_auxz00_3552;

														BgL_auxz00_3552 =
															(BgL_nodez00_bglt) (BgL_nodez00_1659);
														BgL_arg3950z00_1672 =
															(((BgL_nodez00_bglt) CREF(BgL_auxz00_3552))->
															BgL_locz00);
													}
													BgL_arg3949z00_1671 =
														BGl_thezd2localzd2closurez00zzglobaliza7e_freeza7
														(BgL_fz00_1669, BgL_arg3950z00_1672);
												}
												BGl_bindzd2variablez12zc0zzglobaliza7e_freeza7(
													(BgL_localz00_bglt) (BgL_arg3949z00_1671),
													(BgL_localz00_bglt)
													(BGl_za2integratorza2z00zzglobaliza7e_freeza7));
											}
										else
											{	/* Globalize/free.scm 243 */
												BFALSE;
											}
									}
								}
								{
									obj_t BgL_l3684z00_3559;

									BgL_l3684z00_3559 = CDR(BgL_l3684z00_1666);
									BgL_l3684z00_1666 = BgL_l3684z00_3559;
									goto BgL_zc3anonymousza33946ze3z83_1667;
								}
							}
						else
							{	/* Globalize/free.scm 239 */
								((bool_t) 1);
							}
					}
				}
				{
					obj_t BgL_lclsz00_1677;

					obj_t BgL_freez00_1678;

					{	/* Globalize/free.scm 247 */
						obj_t BgL_arg3953z00_1676;

						BgL_arg3953z00_1676 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1659))->BgL_localsz00);
						BgL_lclsz00_1677 = BgL_arg3953z00_1676;
						BgL_freez00_1678 = BgL_freez00_1660;
					BgL_zc3anonymousza33954ze3z83_1679:
						if (NULLP(BgL_lclsz00_1677))
							{	/* Globalize/free.scm 250 */
								BgL_nodez00_bglt BgL_arg3956z00_1681;

								BgL_arg3956z00_1681 =
									(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1659))->
									BgL_bodyz00);
								{	/* Globalize/free.scm 250 */
									obj_t BgL_method3699z00_2409;

									{	/* Globalize/free.scm 250 */
										BgL_objectz00_bglt BgL_objz00_2410;

										BgL_objz00_2410 =
											(BgL_objectz00_bglt) (BgL_arg3956z00_1681);
										{	/* Globalize/free.scm 250 */
											long BgL_objzd2classzd2numz00_2411;

											BgL_objzd2classzd2numz00_2411 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2410);
											{	/* Globalize/free.scm 250 */
												obj_t BgL_arg2643z00_2412;

												BgL_arg2643z00_2412 =
													PROCEDURE_REF
													(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
													(int) (((long) 1)));
												{	/* Globalize/free.scm 250 */
													obj_t BgL_arrayz00_2414;

													int BgL_offsetz00_2415;

													BgL_arrayz00_2414 = BgL_arg2643z00_2412;
													BgL_offsetz00_2415 =
														(int) (BgL_objzd2classzd2numz00_2411);
													{	/* Globalize/free.scm 250 */
														long BgL_offsetz00_2416;

														BgL_offsetz00_2416 =
															((long) (BgL_offsetz00_2415) - OBJECT_TYPE);
														{	/* Globalize/free.scm 250 */
															long BgL_modz00_2417;

															{	/* Globalize/free.scm 250 */
																int BgL_arg2645z00_2418;

																BgL_arg2645z00_2418 = (int) (((long) 16));
																{	/* Globalize/free.scm 250 */
																	long BgL_auxz00_3573;

																	BgL_auxz00_3573 =
																		(long) (BgL_arg2645z00_2418);
																	BgL_modz00_2417 =
																		(BgL_offsetz00_2416 / BgL_auxz00_3573);
															}}
															{	/* Globalize/free.scm 250 */
																long BgL_restz00_2419;

																{	/* Globalize/free.scm 250 */
																	int BgL_arg2644z00_2420;

																	BgL_arg2644z00_2420 = (int) (((long) 16));
																	{	/* Globalize/free.scm 250 */
																		long BgL_auxz00_3577;

																		BgL_auxz00_3577 =
																			(long) (BgL_arg2644z00_2420);
																		BgL_restz00_2419 =
																			(BgL_offsetz00_2416 % BgL_auxz00_3577);
																}}
																{	/* Globalize/free.scm 250 */

																	BgL_method3699z00_2409 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2414,
																			(int) (BgL_modz00_2417)),
																		(int) (BgL_restz00_2419));
									}}}}}}}}
									return
										PROCEDURE_ENTRY(BgL_method3699z00_2409)
										(BgL_method3699z00_2409, (obj_t) (BgL_arg3956z00_1681),
										BgL_freez00_1678, BEOA);
								}
							}
						else
							{	/* Globalize/free.scm 251 */
								obj_t BgL_localz00_1682;

								BgL_localz00_1682 = CAR(BgL_lclsz00_1677);
								{	/* Globalize/free.scm 251 */
									BgL_valuez00_bglt BgL_funz00_1683;

									{
										BgL_variablez00_bglt BgL_auxz00_3588;

										BgL_auxz00_3588 =
											(BgL_variablez00_bglt) (BgL_localz00_1682);
										BgL_funz00_1683 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_3588))->
											BgL_valuez00);
									}
									{	/* Globalize/free.scm 252 */

										{	/* Globalize/free.scm 253 */
											obj_t BgL_g3689z00_1684;

											{
												BgL_sfunz00_bglt BgL_auxz00_3591;

												BgL_auxz00_3591 = (BgL_sfunz00_bglt) (BgL_funz00_1683);
												BgL_g3689z00_1684 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3591))->
													BgL_argsz00);
											}
											{
												obj_t BgL_l3687z00_1686;

												BgL_l3687z00_1686 = BgL_g3689z00_1684;
											BgL_zc3anonymousza33957ze3z83_1687:
												if (PAIRP(BgL_l3687z00_1686))
													{	/* Globalize/free.scm 255 */
														{	/* Globalize/free.scm 254 */
															obj_t BgL_lz00_1689;

															BgL_lz00_1689 = CAR(BgL_l3687z00_1686);
															BGl_bindzd2variablez12zc0zzglobaliza7e_freeza7(
																(BgL_localz00_bglt) (BgL_lz00_1689),
																(BgL_localz00_bglt)
																(BGl_za2integratorza2z00zzglobaliza7e_freeza7));
														}
														{
															obj_t BgL_l3687z00_3600;

															BgL_l3687z00_3600 = CDR(BgL_l3687z00_1686);
															BgL_l3687z00_1686 = BgL_l3687z00_3600;
															goto BgL_zc3anonymousza33957ze3z83_1687;
														}
													}
												else
													{	/* Globalize/free.scm 255 */
														((bool_t) 1);
													}
											}
										}
										{	/* Globalize/free.scm 256 */
											obj_t BgL_arg3960z00_1692;

											obj_t BgL_arg3961z00_1693;

											BgL_arg3960z00_1692 = CDR(BgL_lclsz00_1677);
											{	/* Globalize/free.scm 257 */
												obj_t BgL_arg3962z00_1694;

												{
													BgL_sfunz00_bglt BgL_auxz00_3603;

													BgL_auxz00_3603 =
														(BgL_sfunz00_bglt) (BgL_funz00_1683);
													BgL_arg3962z00_1694 =
														(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3603))->
														BgL_bodyz00);
												}
												{	/* Globalize/free.scm 257 */
													BgL_nodez00_bglt BgL_nodez00_2442;

													BgL_nodez00_2442 =
														(BgL_nodez00_bglt) (BgL_arg3962z00_1694);
													{	/* Globalize/free.scm 257 */
														obj_t BgL_method3699z00_2444;

														{	/* Globalize/free.scm 257 */
															BgL_objectz00_bglt BgL_objz00_2445;

															BgL_objz00_2445 =
																(BgL_objectz00_bglt) (BgL_nodez00_2442);
															{	/* Globalize/free.scm 257 */
																long BgL_objzd2classzd2numz00_2446;

																BgL_objzd2classzd2numz00_2446 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2445);
																{	/* Globalize/free.scm 257 */
																	obj_t BgL_arg2643z00_2447;

																	BgL_arg2643z00_2447 =
																		PROCEDURE_REF
																		(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
																		(int) (((long) 1)));
																	{	/* Globalize/free.scm 257 */
																		obj_t BgL_arrayz00_2449;

																		int BgL_offsetz00_2450;

																		BgL_arrayz00_2449 = BgL_arg2643z00_2447;
																		BgL_offsetz00_2450 =
																			(int) (BgL_objzd2classzd2numz00_2446);
																		{	/* Globalize/free.scm 257 */
																			long BgL_offsetz00_2451;

																			BgL_offsetz00_2451 =
																				(
																				(long) (BgL_offsetz00_2450) -
																				OBJECT_TYPE);
																			{	/* Globalize/free.scm 257 */
																				long BgL_modz00_2452;

																				{	/* Globalize/free.scm 257 */
																					int BgL_arg2645z00_2453;

																					BgL_arg2645z00_2453 =
																						(int) (((long) 16));
																					{	/* Globalize/free.scm 257 */
																						long BgL_auxz00_3615;

																						BgL_auxz00_3615 =
																							(long) (BgL_arg2645z00_2453);
																						BgL_modz00_2452 =
																							(BgL_offsetz00_2451 /
																							BgL_auxz00_3615);
																				}}
																				{	/* Globalize/free.scm 257 */
																					long BgL_restz00_2454;

																					{	/* Globalize/free.scm 257 */
																						int BgL_arg2644z00_2455;

																						BgL_arg2644z00_2455 =
																							(int) (((long) 16));
																						{	/* Globalize/free.scm 257 */
																							long BgL_auxz00_3619;

																							BgL_auxz00_3619 =
																								(long) (BgL_arg2644z00_2455);
																							BgL_restz00_2454 =
																								(BgL_offsetz00_2451 %
																								BgL_auxz00_3619);
																					}}
																					{	/* Globalize/free.scm 257 */

																						BgL_method3699z00_2444 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2449,
																								(int) (BgL_modz00_2452)),
																							(int) (BgL_restz00_2454));
														}}}}}}}}
														BgL_arg3961z00_1693 =
															PROCEDURE_ENTRY(BgL_method3699z00_2444)
															(BgL_method3699z00_2444,
															(obj_t) (BgL_nodez00_2442), BgL_freez00_1678,
															BEOA);
											}}}
											{
												obj_t BgL_freez00_3630;

												obj_t BgL_lclsz00_3629;

												BgL_lclsz00_3629 = BgL_arg3960z00_1692;
												BgL_freez00_3630 = BgL_arg3961z00_1693;
												BgL_freez00_1678 = BgL_freez00_3630;
												BgL_lclsz00_1677 = BgL_lclsz00_3629;
												goto BgL_zc3anonymousza33954ze3z83_1679;
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



/* node-free-select3725 */
	obj_t BGl_nodezd2freezd2select3725z00zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2799, obj_t BgL_nodez00_2800, obj_t BgL_freez00_2801)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 226 */
			{
				BgL_selectz00_bglt BgL_nodez00_1640;

				obj_t BgL_freez00_1641;

				BgL_nodez00_1640 = (BgL_selectz00_bglt) (BgL_nodez00_2800);
				BgL_freez00_1641 = BgL_freez00_2801;
				{
					obj_t BgL_clausesz00_1647;

					obj_t BgL_freez00_1648;

					{	/* Globalize/free.scm 228 */
						obj_t BgL_arg3937z00_1646;

						BgL_arg3937z00_1646 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1640))->BgL_clausesz00);
						BgL_clausesz00_1647 = BgL_arg3937z00_1646;
						BgL_freez00_1648 = BgL_freez00_1641;
					BgL_zc3anonymousza33938ze3z83_1649:
						if (NULLP(BgL_clausesz00_1647))
							{	/* Globalize/free.scm 231 */
								BgL_nodez00_bglt BgL_arg3940z00_1651;

								BgL_arg3940z00_1651 =
									(((BgL_selectz00_bglt) CREF(BgL_nodez00_1640))->BgL_testz00);
								{	/* Globalize/free.scm 231 */
									obj_t BgL_method3699z00_2343;

									{	/* Globalize/free.scm 231 */
										BgL_objectz00_bglt BgL_objz00_2344;

										BgL_objz00_2344 =
											(BgL_objectz00_bglt) (BgL_arg3940z00_1651);
										{	/* Globalize/free.scm 231 */
											long BgL_objzd2classzd2numz00_2345;

											BgL_objzd2classzd2numz00_2345 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2344);
											{	/* Globalize/free.scm 231 */
												obj_t BgL_arg2643z00_2346;

												BgL_arg2643z00_2346 =
													PROCEDURE_REF
													(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
													(int) (((long) 1)));
												{	/* Globalize/free.scm 231 */
													obj_t BgL_arrayz00_2348;

													int BgL_offsetz00_2349;

													BgL_arrayz00_2348 = BgL_arg2643z00_2346;
													BgL_offsetz00_2349 =
														(int) (BgL_objzd2classzd2numz00_2345);
													{	/* Globalize/free.scm 231 */
														long BgL_offsetz00_2350;

														BgL_offsetz00_2350 =
															((long) (BgL_offsetz00_2349) - OBJECT_TYPE);
														{	/* Globalize/free.scm 231 */
															long BgL_modz00_2351;

															{	/* Globalize/free.scm 231 */
																int BgL_arg2645z00_2352;

																BgL_arg2645z00_2352 = (int) (((long) 16));
																{	/* Globalize/free.scm 231 */
																	long BgL_auxz00_3644;

																	BgL_auxz00_3644 =
																		(long) (BgL_arg2645z00_2352);
																	BgL_modz00_2351 =
																		(BgL_offsetz00_2350 / BgL_auxz00_3644);
															}}
															{	/* Globalize/free.scm 231 */
																long BgL_restz00_2353;

																{	/* Globalize/free.scm 231 */
																	int BgL_arg2644z00_2354;

																	BgL_arg2644z00_2354 = (int) (((long) 16));
																	{	/* Globalize/free.scm 231 */
																		long BgL_auxz00_3648;

																		BgL_auxz00_3648 =
																			(long) (BgL_arg2644z00_2354);
																		BgL_restz00_2353 =
																			(BgL_offsetz00_2350 % BgL_auxz00_3648);
																}}
																{	/* Globalize/free.scm 231 */

																	BgL_method3699z00_2343 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2348,
																			(int) (BgL_modz00_2351)),
																		(int) (BgL_restz00_2353));
									}}}}}}}}
									return
										PROCEDURE_ENTRY(BgL_method3699z00_2343)
										(BgL_method3699z00_2343, (obj_t) (BgL_arg3940z00_1651),
										BgL_freez00_1648, BEOA);
								}
							}
						else
							{	/* Globalize/free.scm 232 */
								obj_t BgL_arg3941z00_1652;

								obj_t BgL_arg3942z00_1653;

								BgL_arg3941z00_1652 = CDR(BgL_clausesz00_1647);
								{	/* Globalize/free.scm 232 */
									obj_t BgL_arg3943z00_1654;

									BgL_arg3943z00_1654 = CDR(CAR(BgL_clausesz00_1647));
									{	/* Globalize/free.scm 232 */
										BgL_nodez00_bglt BgL_nodez00_2371;

										BgL_nodez00_2371 = (BgL_nodez00_bglt) (BgL_arg3943z00_1654);
										{	/* Globalize/free.scm 232 */
											obj_t BgL_method3699z00_2373;

											{	/* Globalize/free.scm 232 */
												BgL_objectz00_bglt BgL_objz00_2374;

												BgL_objz00_2374 =
													(BgL_objectz00_bglt) (BgL_nodez00_2371);
												{	/* Globalize/free.scm 232 */
													long BgL_objzd2classzd2numz00_2375;

													BgL_objzd2classzd2numz00_2375 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2374);
													{	/* Globalize/free.scm 232 */
														obj_t BgL_arg2643z00_2376;

														BgL_arg2643z00_2376 =
															PROCEDURE_REF
															(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
															(int) (((long) 1)));
														{	/* Globalize/free.scm 232 */
															obj_t BgL_arrayz00_2378;

															int BgL_offsetz00_2379;

															BgL_arrayz00_2378 = BgL_arg2643z00_2376;
															BgL_offsetz00_2379 =
																(int) (BgL_objzd2classzd2numz00_2375);
															{	/* Globalize/free.scm 232 */
																long BgL_offsetz00_2380;

																BgL_offsetz00_2380 =
																	((long) (BgL_offsetz00_2379) - OBJECT_TYPE);
																{	/* Globalize/free.scm 232 */
																	long BgL_modz00_2381;

																	{	/* Globalize/free.scm 232 */
																		int BgL_arg2645z00_2382;

																		BgL_arg2645z00_2382 = (int) (((long) 16));
																		{	/* Globalize/free.scm 232 */
																			long BgL_auxz00_3670;

																			BgL_auxz00_3670 =
																				(long) (BgL_arg2645z00_2382);
																			BgL_modz00_2381 =
																				(BgL_offsetz00_2380 / BgL_auxz00_3670);
																	}}
																	{	/* Globalize/free.scm 232 */
																		long BgL_restz00_2383;

																		{	/* Globalize/free.scm 232 */
																			int BgL_arg2644z00_2384;

																			BgL_arg2644z00_2384 = (int) (((long) 16));
																			{	/* Globalize/free.scm 232 */
																				long BgL_auxz00_3674;

																				BgL_auxz00_3674 =
																					(long) (BgL_arg2644z00_2384);
																				BgL_restz00_2383 =
																					(BgL_offsetz00_2380 %
																					BgL_auxz00_3674);
																		}}
																		{	/* Globalize/free.scm 232 */

																			BgL_method3699z00_2373 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2378,
																					(int) (BgL_modz00_2381)),
																				(int) (BgL_restz00_2383));
											}}}}}}}}
											BgL_arg3942z00_1653 =
												PROCEDURE_ENTRY(BgL_method3699z00_2373)
												(BgL_method3699z00_2373, (obj_t) (BgL_nodez00_2371),
												BgL_freez00_1648, BEOA);
								}}}
								{
									obj_t BgL_freez00_3685;

									obj_t BgL_clausesz00_3684;

									BgL_clausesz00_3684 = BgL_arg3941z00_1652;
									BgL_freez00_3685 = BgL_arg3942z00_1653;
									BgL_freez00_1648 = BgL_freez00_3685;
									BgL_clausesz00_1647 = BgL_clausesz00_3684;
									goto BgL_zc3anonymousza33938ze3z83_1649;
								}
							}
					}
				}
			}
		}
	}



/* node-free-fail3723 */
	obj_t BGl_nodezd2freezd2fail3723z00zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2802, obj_t BgL_nodez00_2803, obj_t BgL_freez00_2804)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 219 */
			{
				BgL_failz00_bglt BgL_nodez00_1628;

				obj_t BgL_freez00_1629;

				BgL_nodez00_1628 = (BgL_failz00_bglt) (BgL_nodez00_2803);
				BgL_freez00_1629 = BgL_freez00_2804;
				{	/* Globalize/free.scm 221 */
					BgL_nodez00_bglt BgL_arg3931z00_1633;

					obj_t BgL_arg3932z00_1634;

					BgL_arg3931z00_1633 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1628))->BgL_procz00);
					{	/* Globalize/free.scm 221 */
						BgL_nodez00_bglt BgL_arg3933z00_1635;

						obj_t BgL_arg3934z00_1636;

						BgL_arg3933z00_1635 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_1628))->BgL_msgz00);
						{	/* Globalize/free.scm 221 */
							BgL_nodez00_bglt BgL_arg3935z00_1637;

							BgL_arg3935z00_1637 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1628))->BgL_objz00);
							{	/* Globalize/free.scm 221 */
								obj_t BgL_method3699z00_2259;

								{	/* Globalize/free.scm 221 */
									BgL_objectz00_bglt BgL_objz00_2260;

									BgL_objz00_2260 = (BgL_objectz00_bglt) (BgL_arg3935z00_1637);
									{	/* Globalize/free.scm 221 */
										long BgL_objzd2classzd2numz00_2261;

										BgL_objzd2classzd2numz00_2261 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2260);
										{	/* Globalize/free.scm 221 */
											obj_t BgL_arg2643z00_2262;

											BgL_arg2643z00_2262 =
												PROCEDURE_REF
												(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
												(int) (((long) 1)));
											{	/* Globalize/free.scm 221 */
												obj_t BgL_arrayz00_2264;

												int BgL_offsetz00_2265;

												BgL_arrayz00_2264 = BgL_arg2643z00_2262;
												BgL_offsetz00_2265 =
													(int) (BgL_objzd2classzd2numz00_2261);
												{	/* Globalize/free.scm 221 */
													long BgL_offsetz00_2266;

													BgL_offsetz00_2266 =
														((long) (BgL_offsetz00_2265) - OBJECT_TYPE);
													{	/* Globalize/free.scm 221 */
														long BgL_modz00_2267;

														{	/* Globalize/free.scm 221 */
															int BgL_arg2645z00_2268;

															BgL_arg2645z00_2268 = (int) (((long) 16));
															{	/* Globalize/free.scm 221 */
																long BgL_auxz00_3698;

																BgL_auxz00_3698 = (long) (BgL_arg2645z00_2268);
																BgL_modz00_2267 =
																	(BgL_offsetz00_2266 / BgL_auxz00_3698);
														}}
														{	/* Globalize/free.scm 221 */
															long BgL_restz00_2269;

															{	/* Globalize/free.scm 221 */
																int BgL_arg2644z00_2270;

																BgL_arg2644z00_2270 = (int) (((long) 16));
																{	/* Globalize/free.scm 221 */
																	long BgL_auxz00_3702;

																	BgL_auxz00_3702 =
																		(long) (BgL_arg2644z00_2270);
																	BgL_restz00_2269 =
																		(BgL_offsetz00_2266 % BgL_auxz00_3702);
															}}
															{	/* Globalize/free.scm 221 */

																BgL_method3699z00_2259 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2264,
																		(int) (BgL_modz00_2267)),
																	(int) (BgL_restz00_2269));
								}}}}}}}}
								BgL_arg3934z00_1636 =
									PROCEDURE_ENTRY(BgL_method3699z00_2259)
									(BgL_method3699z00_2259, (obj_t) (BgL_arg3935z00_1637),
									BgL_freez00_1629, BEOA);
						}}
						{	/* Globalize/free.scm 221 */
							obj_t BgL_method3699z00_2286;

							{	/* Globalize/free.scm 221 */
								BgL_objectz00_bglt BgL_objz00_2287;

								BgL_objz00_2287 = (BgL_objectz00_bglt) (BgL_arg3933z00_1635);
								{	/* Globalize/free.scm 221 */
									long BgL_objzd2classzd2numz00_2288;

									BgL_objzd2classzd2numz00_2288 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2287);
									{	/* Globalize/free.scm 221 */
										obj_t BgL_arg2643z00_2289;

										BgL_arg2643z00_2289 =
											PROCEDURE_REF
											(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
											(int) (((long) 1)));
										{	/* Globalize/free.scm 221 */
											obj_t BgL_arrayz00_2291;

											int BgL_offsetz00_2292;

											BgL_arrayz00_2291 = BgL_arg2643z00_2289;
											BgL_offsetz00_2292 =
												(int) (BgL_objzd2classzd2numz00_2288);
											{	/* Globalize/free.scm 221 */
												long BgL_offsetz00_2293;

												BgL_offsetz00_2293 =
													((long) (BgL_offsetz00_2292) - OBJECT_TYPE);
												{	/* Globalize/free.scm 221 */
													long BgL_modz00_2294;

													{	/* Globalize/free.scm 221 */
														int BgL_arg2645z00_2295;

														BgL_arg2645z00_2295 = (int) (((long) 16));
														{	/* Globalize/free.scm 221 */
															long BgL_auxz00_3720;

															BgL_auxz00_3720 = (long) (BgL_arg2645z00_2295);
															BgL_modz00_2294 =
																(BgL_offsetz00_2293 / BgL_auxz00_3720);
													}}
													{	/* Globalize/free.scm 221 */
														long BgL_restz00_2296;

														{	/* Globalize/free.scm 221 */
															int BgL_arg2644z00_2297;

															BgL_arg2644z00_2297 = (int) (((long) 16));
															{	/* Globalize/free.scm 221 */
																long BgL_auxz00_3724;

																BgL_auxz00_3724 = (long) (BgL_arg2644z00_2297);
																BgL_restz00_2296 =
																	(BgL_offsetz00_2293 % BgL_auxz00_3724);
														}}
														{	/* Globalize/free.scm 221 */

															BgL_method3699z00_2286 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2291,
																	(int) (BgL_modz00_2294)),
																(int) (BgL_restz00_2296));
							}}}}}}}}
							BgL_arg3932z00_1634 =
								PROCEDURE_ENTRY(BgL_method3699z00_2286) (BgL_method3699z00_2286,
								(obj_t) (BgL_arg3933z00_1635), BgL_arg3934z00_1636, BEOA);
					}}
					{	/* Globalize/free.scm 221 */
						obj_t BgL_method3699z00_2313;

						{	/* Globalize/free.scm 221 */
							BgL_objectz00_bglt BgL_objz00_2314;

							BgL_objz00_2314 = (BgL_objectz00_bglt) (BgL_arg3931z00_1633);
							{	/* Globalize/free.scm 221 */
								long BgL_objzd2classzd2numz00_2315;

								BgL_objzd2classzd2numz00_2315 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2314);
								{	/* Globalize/free.scm 221 */
									obj_t BgL_arg2643z00_2316;

									BgL_arg2643z00_2316 =
										PROCEDURE_REF(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
										(int) (((long) 1)));
									{	/* Globalize/free.scm 221 */
										obj_t BgL_arrayz00_2318;

										int BgL_offsetz00_2319;

										BgL_arrayz00_2318 = BgL_arg2643z00_2316;
										BgL_offsetz00_2319 = (int) (BgL_objzd2classzd2numz00_2315);
										{	/* Globalize/free.scm 221 */
											long BgL_offsetz00_2320;

											BgL_offsetz00_2320 =
												((long) (BgL_offsetz00_2319) - OBJECT_TYPE);
											{	/* Globalize/free.scm 221 */
												long BgL_modz00_2321;

												{	/* Globalize/free.scm 221 */
													int BgL_arg2645z00_2322;

													BgL_arg2645z00_2322 = (int) (((long) 16));
													{	/* Globalize/free.scm 221 */
														long BgL_auxz00_3742;

														BgL_auxz00_3742 = (long) (BgL_arg2645z00_2322);
														BgL_modz00_2321 =
															(BgL_offsetz00_2320 / BgL_auxz00_3742);
												}}
												{	/* Globalize/free.scm 221 */
													long BgL_restz00_2323;

													{	/* Globalize/free.scm 221 */
														int BgL_arg2644z00_2324;

														BgL_arg2644z00_2324 = (int) (((long) 16));
														{	/* Globalize/free.scm 221 */
															long BgL_auxz00_3746;

															BgL_auxz00_3746 = (long) (BgL_arg2644z00_2324);
															BgL_restz00_2323 =
																(BgL_offsetz00_2320 % BgL_auxz00_3746);
													}}
													{	/* Globalize/free.scm 221 */

														BgL_method3699z00_2313 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2318,
																(int) (BgL_modz00_2321)),
															(int) (BgL_restz00_2323));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3699z00_2313) (BgL_method3699z00_2313,
							(obj_t) (BgL_arg3931z00_1633), BgL_arg3932z00_1634, BEOA);
					}
				}
			}
		}
	}



/* node-free-conditiona3721 */
	obj_t BGl_nodezd2freezd2conditiona3721z00zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2805, obj_t BgL_nodez00_2806, obj_t BgL_freez00_2807)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 212 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1616;

				obj_t BgL_freez00_1617;

				BgL_nodez00_1616 = (BgL_conditionalz00_bglt) (BgL_nodez00_2806);
				BgL_freez00_1617 = BgL_freez00_2807;
				{	/* Globalize/free.scm 214 */
					BgL_nodez00_bglt BgL_arg3925z00_1621;

					obj_t BgL_arg3926z00_1622;

					BgL_arg3925z00_1621 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1616))->BgL_testz00);
					{	/* Globalize/free.scm 214 */
						BgL_nodez00_bglt BgL_arg3927z00_1623;

						obj_t BgL_arg3928z00_1624;

						BgL_arg3927z00_1623 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1616))->BgL_truez00);
						{	/* Globalize/free.scm 214 */
							BgL_nodez00_bglt BgL_arg3929z00_1625;

							BgL_arg3929z00_1625 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1616))->
								BgL_falsez00);
							{	/* Globalize/free.scm 214 */
								obj_t BgL_method3699z00_2175;

								{	/* Globalize/free.scm 214 */
									BgL_objectz00_bglt BgL_objz00_2176;

									BgL_objz00_2176 = (BgL_objectz00_bglt) (BgL_arg3929z00_1625);
									{	/* Globalize/free.scm 214 */
										long BgL_objzd2classzd2numz00_2177;

										BgL_objzd2classzd2numz00_2177 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2176);
										{	/* Globalize/free.scm 214 */
											obj_t BgL_arg2643z00_2178;

											BgL_arg2643z00_2178 =
												PROCEDURE_REF
												(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
												(int) (((long) 1)));
											{	/* Globalize/free.scm 214 */
												obj_t BgL_arrayz00_2180;

												int BgL_offsetz00_2181;

												BgL_arrayz00_2180 = BgL_arg2643z00_2178;
												BgL_offsetz00_2181 =
													(int) (BgL_objzd2classzd2numz00_2177);
												{	/* Globalize/free.scm 214 */
													long BgL_offsetz00_2182;

													BgL_offsetz00_2182 =
														((long) (BgL_offsetz00_2181) - OBJECT_TYPE);
													{	/* Globalize/free.scm 214 */
														long BgL_modz00_2183;

														{	/* Globalize/free.scm 214 */
															int BgL_arg2645z00_2184;

															BgL_arg2645z00_2184 = (int) (((long) 16));
															{	/* Globalize/free.scm 214 */
																long BgL_auxz00_3768;

																BgL_auxz00_3768 = (long) (BgL_arg2645z00_2184);
																BgL_modz00_2183 =
																	(BgL_offsetz00_2182 / BgL_auxz00_3768);
														}}
														{	/* Globalize/free.scm 214 */
															long BgL_restz00_2185;

															{	/* Globalize/free.scm 214 */
																int BgL_arg2644z00_2186;

																BgL_arg2644z00_2186 = (int) (((long) 16));
																{	/* Globalize/free.scm 214 */
																	long BgL_auxz00_3772;

																	BgL_auxz00_3772 =
																		(long) (BgL_arg2644z00_2186);
																	BgL_restz00_2185 =
																		(BgL_offsetz00_2182 % BgL_auxz00_3772);
															}}
															{	/* Globalize/free.scm 214 */

																BgL_method3699z00_2175 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2180,
																		(int) (BgL_modz00_2183)),
																	(int) (BgL_restz00_2185));
								}}}}}}}}
								BgL_arg3928z00_1624 =
									PROCEDURE_ENTRY(BgL_method3699z00_2175)
									(BgL_method3699z00_2175, (obj_t) (BgL_arg3929z00_1625),
									BgL_freez00_1617, BEOA);
						}}
						{	/* Globalize/free.scm 214 */
							obj_t BgL_method3699z00_2202;

							{	/* Globalize/free.scm 214 */
								BgL_objectz00_bglt BgL_objz00_2203;

								BgL_objz00_2203 = (BgL_objectz00_bglt) (BgL_arg3927z00_1623);
								{	/* Globalize/free.scm 214 */
									long BgL_objzd2classzd2numz00_2204;

									BgL_objzd2classzd2numz00_2204 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2203);
									{	/* Globalize/free.scm 214 */
										obj_t BgL_arg2643z00_2205;

										BgL_arg2643z00_2205 =
											PROCEDURE_REF
											(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
											(int) (((long) 1)));
										{	/* Globalize/free.scm 214 */
											obj_t BgL_arrayz00_2207;

											int BgL_offsetz00_2208;

											BgL_arrayz00_2207 = BgL_arg2643z00_2205;
											BgL_offsetz00_2208 =
												(int) (BgL_objzd2classzd2numz00_2204);
											{	/* Globalize/free.scm 214 */
												long BgL_offsetz00_2209;

												BgL_offsetz00_2209 =
													((long) (BgL_offsetz00_2208) - OBJECT_TYPE);
												{	/* Globalize/free.scm 214 */
													long BgL_modz00_2210;

													{	/* Globalize/free.scm 214 */
														int BgL_arg2645z00_2211;

														BgL_arg2645z00_2211 = (int) (((long) 16));
														{	/* Globalize/free.scm 214 */
															long BgL_auxz00_3790;

															BgL_auxz00_3790 = (long) (BgL_arg2645z00_2211);
															BgL_modz00_2210 =
																(BgL_offsetz00_2209 / BgL_auxz00_3790);
													}}
													{	/* Globalize/free.scm 214 */
														long BgL_restz00_2212;

														{	/* Globalize/free.scm 214 */
															int BgL_arg2644z00_2213;

															BgL_arg2644z00_2213 = (int) (((long) 16));
															{	/* Globalize/free.scm 214 */
																long BgL_auxz00_3794;

																BgL_auxz00_3794 = (long) (BgL_arg2644z00_2213);
																BgL_restz00_2212 =
																	(BgL_offsetz00_2209 % BgL_auxz00_3794);
														}}
														{	/* Globalize/free.scm 214 */

															BgL_method3699z00_2202 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2207,
																	(int) (BgL_modz00_2210)),
																(int) (BgL_restz00_2212));
							}}}}}}}}
							BgL_arg3926z00_1622 =
								PROCEDURE_ENTRY(BgL_method3699z00_2202) (BgL_method3699z00_2202,
								(obj_t) (BgL_arg3927z00_1623), BgL_arg3928z00_1624, BEOA);
					}}
					{	/* Globalize/free.scm 214 */
						obj_t BgL_method3699z00_2229;

						{	/* Globalize/free.scm 214 */
							BgL_objectz00_bglt BgL_objz00_2230;

							BgL_objz00_2230 = (BgL_objectz00_bglt) (BgL_arg3925z00_1621);
							{	/* Globalize/free.scm 214 */
								long BgL_objzd2classzd2numz00_2231;

								BgL_objzd2classzd2numz00_2231 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2230);
								{	/* Globalize/free.scm 214 */
									obj_t BgL_arg2643z00_2232;

									BgL_arg2643z00_2232 =
										PROCEDURE_REF(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
										(int) (((long) 1)));
									{	/* Globalize/free.scm 214 */
										obj_t BgL_arrayz00_2234;

										int BgL_offsetz00_2235;

										BgL_arrayz00_2234 = BgL_arg2643z00_2232;
										BgL_offsetz00_2235 = (int) (BgL_objzd2classzd2numz00_2231);
										{	/* Globalize/free.scm 214 */
											long BgL_offsetz00_2236;

											BgL_offsetz00_2236 =
												((long) (BgL_offsetz00_2235) - OBJECT_TYPE);
											{	/* Globalize/free.scm 214 */
												long BgL_modz00_2237;

												{	/* Globalize/free.scm 214 */
													int BgL_arg2645z00_2238;

													BgL_arg2645z00_2238 = (int) (((long) 16));
													{	/* Globalize/free.scm 214 */
														long BgL_auxz00_3812;

														BgL_auxz00_3812 = (long) (BgL_arg2645z00_2238);
														BgL_modz00_2237 =
															(BgL_offsetz00_2236 / BgL_auxz00_3812);
												}}
												{	/* Globalize/free.scm 214 */
													long BgL_restz00_2239;

													{	/* Globalize/free.scm 214 */
														int BgL_arg2644z00_2240;

														BgL_arg2644z00_2240 = (int) (((long) 16));
														{	/* Globalize/free.scm 214 */
															long BgL_auxz00_3816;

															BgL_auxz00_3816 = (long) (BgL_arg2644z00_2240);
															BgL_restz00_2239 =
																(BgL_offsetz00_2236 % BgL_auxz00_3816);
													}}
													{	/* Globalize/free.scm 214 */

														BgL_method3699z00_2229 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2234,
																(int) (BgL_modz00_2237)),
															(int) (BgL_restz00_2239));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3699z00_2229) (BgL_method3699z00_2229,
							(obj_t) (BgL_arg3925z00_1621), BgL_arg3926z00_1622, BEOA);
					}
				}
			}
		}
	}



/* node-free-setq3719 */
	obj_t BGl_nodezd2freezd2setq3719z00zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2808, obj_t BgL_nodez00_2809, obj_t BgL_freez00_2810)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 205 */
			{
				BgL_setqz00_bglt BgL_nodez00_1606;

				obj_t BgL_freez00_1607;

				BgL_nodez00_1606 = (BgL_setqz00_bglt) (BgL_nodez00_2809);
				BgL_freez00_1607 = BgL_freez00_2810;
				{	/* Globalize/free.scm 206 */
					BgL_varz00_bglt BgL_arg3920z00_2111;

					obj_t BgL_arg3922z00_2112;

					BgL_arg3920z00_2111 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1606))->BgL_varz00);
					{	/* Globalize/free.scm 206 */
						BgL_nodez00_bglt BgL_arg3923z00_2113;

						BgL_arg3923z00_2113 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_1606))->BgL_valuez00);
						{	/* Globalize/free.scm 206 */
							obj_t BgL_method3699z00_2118;

							{	/* Globalize/free.scm 206 */
								BgL_objectz00_bglt BgL_objz00_2119;

								BgL_objz00_2119 = (BgL_objectz00_bglt) (BgL_arg3923z00_2113);
								{	/* Globalize/free.scm 206 */
									long BgL_objzd2classzd2numz00_2120;

									BgL_objzd2classzd2numz00_2120 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2119);
									{	/* Globalize/free.scm 206 */
										obj_t BgL_arg2643z00_2121;

										BgL_arg2643z00_2121 =
											PROCEDURE_REF
											(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
											(int) (((long) 1)));
										{	/* Globalize/free.scm 206 */
											obj_t BgL_arrayz00_2123;

											int BgL_offsetz00_2124;

											BgL_arrayz00_2123 = BgL_arg2643z00_2121;
											BgL_offsetz00_2124 =
												(int) (BgL_objzd2classzd2numz00_2120);
											{	/* Globalize/free.scm 206 */
												long BgL_offsetz00_2125;

												BgL_offsetz00_2125 =
													((long) (BgL_offsetz00_2124) - OBJECT_TYPE);
												{	/* Globalize/free.scm 206 */
													long BgL_modz00_2126;

													{	/* Globalize/free.scm 206 */
														int BgL_arg2645z00_2127;

														BgL_arg2645z00_2127 = (int) (((long) 16));
														{	/* Globalize/free.scm 206 */
															long BgL_auxz00_3837;

															BgL_auxz00_3837 = (long) (BgL_arg2645z00_2127);
															BgL_modz00_2126 =
																(BgL_offsetz00_2125 / BgL_auxz00_3837);
													}}
													{	/* Globalize/free.scm 206 */
														long BgL_restz00_2128;

														{	/* Globalize/free.scm 206 */
															int BgL_arg2644z00_2129;

															BgL_arg2644z00_2129 = (int) (((long) 16));
															{	/* Globalize/free.scm 206 */
																long BgL_auxz00_3841;

																BgL_auxz00_3841 = (long) (BgL_arg2644z00_2129);
																BgL_restz00_2128 =
																	(BgL_offsetz00_2125 % BgL_auxz00_3841);
														}}
														{	/* Globalize/free.scm 206 */

															BgL_method3699z00_2118 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2123,
																	(int) (BgL_modz00_2126)),
																(int) (BgL_restz00_2128));
							}}}}}}}}
							BgL_arg3922z00_2112 =
								PROCEDURE_ENTRY(BgL_method3699z00_2118) (BgL_method3699z00_2118,
								(obj_t) (BgL_arg3923z00_2113), BgL_freez00_1607, BEOA);
					}}
					{	/* Globalize/free.scm 206 */
						BgL_nodez00_bglt BgL_nodez00_2143;

						BgL_nodez00_2143 = (BgL_nodez00_bglt) (BgL_arg3920z00_2111);
						{	/* Globalize/free.scm 206 */
							obj_t BgL_method3699z00_2145;

							{	/* Globalize/free.scm 206 */
								BgL_objectz00_bglt BgL_objz00_2146;

								BgL_objz00_2146 = (BgL_objectz00_bglt) (BgL_nodez00_2143);
								{	/* Globalize/free.scm 206 */
									long BgL_objzd2classzd2numz00_2147;

									BgL_objzd2classzd2numz00_2147 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2146);
									{	/* Globalize/free.scm 206 */
										obj_t BgL_arg2643z00_2148;

										BgL_arg2643z00_2148 =
											PROCEDURE_REF
											(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
											(int) (((long) 1)));
										{	/* Globalize/free.scm 206 */
											obj_t BgL_arrayz00_2150;

											int BgL_offsetz00_2151;

											BgL_arrayz00_2150 = BgL_arg2643z00_2148;
											BgL_offsetz00_2151 =
												(int) (BgL_objzd2classzd2numz00_2147);
											{	/* Globalize/free.scm 206 */
												long BgL_offsetz00_2152;

												BgL_offsetz00_2152 =
													((long) (BgL_offsetz00_2151) - OBJECT_TYPE);
												{	/* Globalize/free.scm 206 */
													long BgL_modz00_2153;

													{	/* Globalize/free.scm 206 */
														int BgL_arg2645z00_2154;

														BgL_arg2645z00_2154 = (int) (((long) 16));
														{	/* Globalize/free.scm 206 */
															long BgL_auxz00_3860;

															BgL_auxz00_3860 = (long) (BgL_arg2645z00_2154);
															BgL_modz00_2153 =
																(BgL_offsetz00_2152 / BgL_auxz00_3860);
													}}
													{	/* Globalize/free.scm 206 */
														long BgL_restz00_2155;

														{	/* Globalize/free.scm 206 */
															int BgL_arg2644z00_2156;

															BgL_arg2644z00_2156 = (int) (((long) 16));
															{	/* Globalize/free.scm 206 */
																long BgL_auxz00_3864;

																BgL_auxz00_3864 = (long) (BgL_arg2644z00_2156);
																BgL_restz00_2155 =
																	(BgL_offsetz00_2152 % BgL_auxz00_3864);
														}}
														{	/* Globalize/free.scm 206 */

															BgL_method3699z00_2145 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2150,
																	(int) (BgL_modz00_2153)),
																(int) (BgL_restz00_2155));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3699z00_2145) (BgL_method3699z00_2145,
								(obj_t) (BgL_nodez00_2143), BgL_arg3922z00_2112, BEOA);
						}
					}
				}
			}
		}
	}



/* node-free-cast3717 */
	obj_t BGl_nodezd2freezd2cast3717z00zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2811, obj_t BgL_nodez00_2812, obj_t BgL_freez00_2813)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 198 */
			{
				BgL_castz00_bglt BgL_nodez00_1598;

				obj_t BgL_freez00_1599;

				BgL_nodez00_1598 = (BgL_castz00_bglt) (BgL_nodez00_2812);
				BgL_freez00_1599 = BgL_freez00_2813;
				{	/* Globalize/free.scm 199 */
					BgL_nodez00_bglt BgL_arg3918z00_2081;

					BgL_arg3918z00_2081 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_1598))->BgL_argz00);
					{	/* Globalize/free.scm 199 */
						obj_t BgL_method3699z00_2085;

						{	/* Globalize/free.scm 199 */
							BgL_objectz00_bglt BgL_objz00_2086;

							BgL_objz00_2086 = (BgL_objectz00_bglt) (BgL_arg3918z00_2081);
							{	/* Globalize/free.scm 199 */
								long BgL_objzd2classzd2numz00_2087;

								BgL_objzd2classzd2numz00_2087 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2086);
								{	/* Globalize/free.scm 199 */
									obj_t BgL_arg2643z00_2088;

									BgL_arg2643z00_2088 =
										PROCEDURE_REF(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
										(int) (((long) 1)));
									{	/* Globalize/free.scm 199 */
										obj_t BgL_arrayz00_2090;

										int BgL_offsetz00_2091;

										BgL_arrayz00_2090 = BgL_arg2643z00_2088;
										BgL_offsetz00_2091 = (int) (BgL_objzd2classzd2numz00_2087);
										{	/* Globalize/free.scm 199 */
											long BgL_offsetz00_2092;

											BgL_offsetz00_2092 =
												((long) (BgL_offsetz00_2091) - OBJECT_TYPE);
											{	/* Globalize/free.scm 199 */
												long BgL_modz00_2093;

												{	/* Globalize/free.scm 199 */
													int BgL_arg2645z00_2094;

													BgL_arg2645z00_2094 = (int) (((long) 16));
													{	/* Globalize/free.scm 199 */
														long BgL_auxz00_3884;

														BgL_auxz00_3884 = (long) (BgL_arg2645z00_2094);
														BgL_modz00_2093 =
															(BgL_offsetz00_2092 / BgL_auxz00_3884);
												}}
												{	/* Globalize/free.scm 199 */
													long BgL_restz00_2095;

													{	/* Globalize/free.scm 199 */
														int BgL_arg2644z00_2096;

														BgL_arg2644z00_2096 = (int) (((long) 16));
														{	/* Globalize/free.scm 199 */
															long BgL_auxz00_3888;

															BgL_auxz00_3888 = (long) (BgL_arg2644z00_2096);
															BgL_restz00_2095 =
																(BgL_offsetz00_2092 % BgL_auxz00_3888);
													}}
													{	/* Globalize/free.scm 199 */

														BgL_method3699z00_2085 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2090,
																(int) (BgL_modz00_2093)),
															(int) (BgL_restz00_2095));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3699z00_2085) (BgL_method3699z00_2085,
							(obj_t) (BgL_arg3918z00_2081), BgL_freez00_1599, BEOA);
					}
				}
			}
		}
	}



/* node-free-extern3714 */
	obj_t BGl_nodezd2freezd2extern3714z00zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2814, obj_t BgL_nodez00_2815, obj_t BgL_freez00_2816)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 191 */
			{
				BgL_externz00_bglt BgL_nodez00_1590;

				obj_t BgL_freez00_1591;

				BgL_nodez00_1590 = (BgL_externz00_bglt) (BgL_nodez00_2815);
				BgL_freez00_1591 = BgL_freez00_2816;
				{	/* Globalize/free.scm 192 */
					obj_t BgL_arg3916z00_2078;

					BgL_arg3916z00_2078 =
						(((BgL_externz00_bglt) CREF(BgL_nodez00_1590))->BgL_exprza2za2);
					return
						BGl_nodezd2freeza2z70zzglobaliza7e_freeza7(BgL_arg3916z00_2078,
						BgL_freez00_1591);
				}
			}
		}
	}



/* node-free-funcall3711 */
	obj_t BGl_nodezd2freezd2funcall3711z00zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2817, obj_t BgL_nodez00_2818, obj_t BgL_freez00_2819)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 184 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1580;

				obj_t BgL_freez00_1581;

				BgL_nodez00_1580 = (BgL_funcallz00_bglt) (BgL_nodez00_2818);
				BgL_freez00_1581 = BgL_freez00_2819;
				{	/* Globalize/free.scm 185 */
					BgL_nodez00_bglt BgL_arg3912z00_2045;

					obj_t BgL_arg3913z00_2046;

					BgL_arg3912z00_2045 =
						(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1580))->BgL_funz00);
					{	/* Globalize/free.scm 185 */
						obj_t BgL_arg3914z00_2047;

						BgL_arg3914z00_2047 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1580))->BgL_argsz00);
						BgL_arg3913z00_2046 =
							BGl_nodezd2freeza2z70zzglobaliza7e_freeza7(BgL_arg3914z00_2047,
							BgL_freez00_1581);
					}
					{	/* Globalize/free.scm 185 */
						obj_t BgL_method3699z00_2052;

						{	/* Globalize/free.scm 185 */
							BgL_objectz00_bglt BgL_objz00_2053;

							BgL_objz00_2053 = (BgL_objectz00_bglt) (BgL_arg3912z00_2045);
							{	/* Globalize/free.scm 185 */
								long BgL_objzd2classzd2numz00_2054;

								BgL_objzd2classzd2numz00_2054 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2053);
								{	/* Globalize/free.scm 185 */
									obj_t BgL_arg2643z00_2055;

									BgL_arg2643z00_2055 =
										PROCEDURE_REF(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
										(int) (((long) 1)));
									{	/* Globalize/free.scm 185 */
										obj_t BgL_arrayz00_2057;

										int BgL_offsetz00_2058;

										BgL_arrayz00_2057 = BgL_arg2643z00_2055;
										BgL_offsetz00_2058 = (int) (BgL_objzd2classzd2numz00_2054);
										{	/* Globalize/free.scm 185 */
											long BgL_offsetz00_2059;

											BgL_offsetz00_2059 =
												((long) (BgL_offsetz00_2058) - OBJECT_TYPE);
											{	/* Globalize/free.scm 185 */
												long BgL_modz00_2060;

												{	/* Globalize/free.scm 185 */
													int BgL_arg2645z00_2061;

													BgL_arg2645z00_2061 = (int) (((long) 16));
													{	/* Globalize/free.scm 185 */
														long BgL_auxz00_3913;

														BgL_auxz00_3913 = (long) (BgL_arg2645z00_2061);
														BgL_modz00_2060 =
															(BgL_offsetz00_2059 / BgL_auxz00_3913);
												}}
												{	/* Globalize/free.scm 185 */
													long BgL_restz00_2062;

													{	/* Globalize/free.scm 185 */
														int BgL_arg2644z00_2063;

														BgL_arg2644z00_2063 = (int) (((long) 16));
														{	/* Globalize/free.scm 185 */
															long BgL_auxz00_3917;

															BgL_auxz00_3917 = (long) (BgL_arg2644z00_2063);
															BgL_restz00_2062 =
																(BgL_offsetz00_2059 % BgL_auxz00_3917);
													}}
													{	/* Globalize/free.scm 185 */

														BgL_method3699z00_2052 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2057,
																(int) (BgL_modz00_2060)),
															(int) (BgL_restz00_2062));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3699z00_2052) (BgL_method3699z00_2052,
							(obj_t) (BgL_arg3912z00_2045), BgL_arg3913z00_2046, BEOA);
					}
				}
			}
		}
	}



/* node-free-app-ly3709 */
	obj_t BGl_nodezd2freezd2appzd2ly3709zd2zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2820, obj_t BgL_nodez00_2821, obj_t BgL_freez00_2822)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 177 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1570;

				obj_t BgL_freez00_1571;

				BgL_nodez00_1570 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2821);
				BgL_freez00_1571 = BgL_freez00_2822;
				{	/* Globalize/free.scm 178 */
					BgL_nodez00_bglt BgL_arg3908z00_1985;

					obj_t BgL_arg3909z00_1986;

					BgL_arg3908z00_1985 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1570))->BgL_funz00);
					{	/* Globalize/free.scm 178 */
						BgL_nodez00_bglt BgL_arg3910z00_1987;

						BgL_arg3910z00_1987 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1570))->BgL_argz00);
						{	/* Globalize/free.scm 178 */
							obj_t BgL_method3699z00_1992;

							{	/* Globalize/free.scm 178 */
								BgL_objectz00_bglt BgL_objz00_1993;

								BgL_objz00_1993 = (BgL_objectz00_bglt) (BgL_arg3910z00_1987);
								{	/* Globalize/free.scm 178 */
									long BgL_objzd2classzd2numz00_1994;

									BgL_objzd2classzd2numz00_1994 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1993);
									{	/* Globalize/free.scm 178 */
										obj_t BgL_arg2643z00_1995;

										BgL_arg2643z00_1995 =
											PROCEDURE_REF
											(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
											(int) (((long) 1)));
										{	/* Globalize/free.scm 178 */
											obj_t BgL_arrayz00_1997;

											int BgL_offsetz00_1998;

											BgL_arrayz00_1997 = BgL_arg2643z00_1995;
											BgL_offsetz00_1998 =
												(int) (BgL_objzd2classzd2numz00_1994);
											{	/* Globalize/free.scm 178 */
												long BgL_offsetz00_1999;

												BgL_offsetz00_1999 =
													((long) (BgL_offsetz00_1998) - OBJECT_TYPE);
												{	/* Globalize/free.scm 178 */
													long BgL_modz00_2000;

													{	/* Globalize/free.scm 178 */
														int BgL_arg2645z00_2001;

														BgL_arg2645z00_2001 = (int) (((long) 16));
														{	/* Globalize/free.scm 178 */
															long BgL_auxz00_3938;

															BgL_auxz00_3938 = (long) (BgL_arg2645z00_2001);
															BgL_modz00_2000 =
																(BgL_offsetz00_1999 / BgL_auxz00_3938);
													}}
													{	/* Globalize/free.scm 178 */
														long BgL_restz00_2002;

														{	/* Globalize/free.scm 178 */
															int BgL_arg2644z00_2003;

															BgL_arg2644z00_2003 = (int) (((long) 16));
															{	/* Globalize/free.scm 178 */
																long BgL_auxz00_3942;

																BgL_auxz00_3942 = (long) (BgL_arg2644z00_2003);
																BgL_restz00_2002 =
																	(BgL_offsetz00_1999 % BgL_auxz00_3942);
														}}
														{	/* Globalize/free.scm 178 */

															BgL_method3699z00_1992 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1997,
																	(int) (BgL_modz00_2000)),
																(int) (BgL_restz00_2002));
							}}}}}}}}
							BgL_arg3909z00_1986 =
								PROCEDURE_ENTRY(BgL_method3699z00_1992) (BgL_method3699z00_1992,
								(obj_t) (BgL_arg3910z00_1987), BgL_freez00_1571, BEOA);
					}}
					{	/* Globalize/free.scm 178 */
						obj_t BgL_method3699z00_2019;

						{	/* Globalize/free.scm 178 */
							BgL_objectz00_bglt BgL_objz00_2020;

							BgL_objz00_2020 = (BgL_objectz00_bglt) (BgL_arg3908z00_1985);
							{	/* Globalize/free.scm 178 */
								long BgL_objzd2classzd2numz00_2021;

								BgL_objzd2classzd2numz00_2021 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2020);
								{	/* Globalize/free.scm 178 */
									obj_t BgL_arg2643z00_2022;

									BgL_arg2643z00_2022 =
										PROCEDURE_REF(BGl_nodezd2freezd2envz00zzglobaliza7e_freeza7,
										(int) (((long) 1)));
									{	/* Globalize/free.scm 178 */
										obj_t BgL_arrayz00_2024;

										int BgL_offsetz00_2025;

										BgL_arrayz00_2024 = BgL_arg2643z00_2022;
										BgL_offsetz00_2025 = (int) (BgL_objzd2classzd2numz00_2021);
										{	/* Globalize/free.scm 178 */
											long BgL_offsetz00_2026;

											BgL_offsetz00_2026 =
												((long) (BgL_offsetz00_2025) - OBJECT_TYPE);
											{	/* Globalize/free.scm 178 */
												long BgL_modz00_2027;

												{	/* Globalize/free.scm 178 */
													int BgL_arg2645z00_2028;

													BgL_arg2645z00_2028 = (int) (((long) 16));
													{	/* Globalize/free.scm 178 */
														long BgL_auxz00_3960;

														BgL_auxz00_3960 = (long) (BgL_arg2645z00_2028);
														BgL_modz00_2027 =
															(BgL_offsetz00_2026 / BgL_auxz00_3960);
												}}
												{	/* Globalize/free.scm 178 */
													long BgL_restz00_2029;

													{	/* Globalize/free.scm 178 */
														int BgL_arg2644z00_2030;

														BgL_arg2644z00_2030 = (int) (((long) 16));
														{	/* Globalize/free.scm 178 */
															long BgL_auxz00_3964;

															BgL_auxz00_3964 = (long) (BgL_arg2644z00_2030);
															BgL_restz00_2029 =
																(BgL_offsetz00_2026 % BgL_auxz00_3964);
													}}
													{	/* Globalize/free.scm 178 */

														BgL_method3699z00_2019 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2024,
																(int) (BgL_modz00_2027)),
															(int) (BgL_restz00_2029));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3699z00_2019) (BgL_method3699z00_2019,
							(obj_t) (BgL_arg3908z00_1985), BgL_arg3909z00_1986, BEOA);
					}
				}
			}
		}
	}



/* node-free-app3707 */
	obj_t BGl_nodezd2freezd2app3707z00zzglobaliza7e_freeza7(obj_t BgL_envz00_2823,
		obj_t BgL_nodez00_2824, obj_t BgL_freez00_2825)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 161 */
			{
				BgL_appz00_bglt BgL_nodez00_1554;

				obj_t BgL_freez00_1555;

				BgL_nodez00_1554 = (BgL_appz00_bglt) (BgL_nodez00_2824);
				BgL_freez00_1555 = BgL_freez00_2825;
				{	/* Globalize/free.scm 163 */
					obj_t BgL_freez00_1559;

					{	/* Globalize/free.scm 163 */
						BgL_variablez00_bglt BgL_varz00_1561;

						{	/* Globalize/free.scm 163 */
							BgL_varz00_bglt BgL_obj2155z00_1975;

							BgL_obj2155z00_1975 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1554))->BgL_funz00);
							BgL_varz00_1561 =
								(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1975))->
								BgL_variablez00);
						}
						{	/* Globalize/free.scm 165 */
							bool_t BgL_testz00_3977;

							{	/* Globalize/free.scm 165 */
								obj_t BgL_obj1751z00_1976;

								BgL_obj1751z00_1976 = (obj_t) (BgL_varz00_1561);
								BgL_testz00_3977 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_1976,
									BGl_globalz00zzast_varz00);
							}
							if (BgL_testz00_3977)
								{	/* Globalize/free.scm 165 */
									BgL_freez00_1559 = BgL_freez00_1555;
								}
							else
								{	/* Globalize/free.scm 167 */
									bool_t BgL_testz00_3980;

									{	/* Globalize/free.scm 167 */
										bool_t BgL_testz00_3981;

										{	/* Globalize/free.scm 167 */
											BgL_localzf2ginfozf2_bglt BgL_obj3520z00_1977;

											BgL_obj3520z00_1977 =
												(BgL_localzf2ginfozf2_bglt) (BgL_varz00_1561);
											{
												obj_t BgL_auxz00_3983;

												{	/* Globalize/free.scm 167 */
													BgL_objectz00_bglt BgL_auxz00_3984;

													BgL_auxz00_3984 =
														(BgL_objectz00_bglt) (BgL_obj3520z00_1977);
													BgL_auxz00_3983 =
														BGL_OBJECT_WIDENING(BgL_auxz00_3984);
												}
												BgL_testz00_3981 =
													(((BgL_localzf2ginfozf2_bglt) CREF(BgL_auxz00_3983))->
													BgL_escapezf3zf3);
											}
										}
										if (BgL_testz00_3981)
											{	/* Globalize/free.scm 167 */
												BgL_testz00_3980 =
													CBOOL(BGl_freezd2variablezf3z21zzglobaliza7e_freeza7(
														(obj_t) (BgL_varz00_1561)));
											}
										else
											{	/* Globalize/free.scm 167 */
												BgL_testz00_3980 = ((bool_t) 0);
											}
									}
									if (BgL_testz00_3980)
										{	/* Globalize/free.scm 167 */
											BGl_markzd2variablez12zc0zzglobaliza7e_freeza7(
												(BgL_localz00_bglt) (BgL_varz00_1561));
											{	/* Globalize/free.scm 169 */
												obj_t BgL_arg3903z00_1564;

												{	/* Globalize/free.scm 169 */
													obj_t BgL_arg3904z00_1565;

													{
														BgL_nodez00_bglt BgL_auxz00_3993;

														BgL_auxz00_3993 =
															(BgL_nodez00_bglt) (BgL_nodez00_1554);
														BgL_arg3904z00_1565 =
															(((BgL_nodez00_bglt) CREF(BgL_auxz00_3993))->
															BgL_locz00);
													}
													{	/* Globalize/free.scm 169 */
														bool_t BgL_testz00_3996;

														{	/* Globalize/free.scm 169 */
															obj_t BgL_obj1751z00_1982;

															BgL_obj1751z00_1982 = (obj_t) (BgL_varz00_1561);
															BgL_testz00_3996 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_obj1751z00_1982,
																BGl_globalz00zzast_varz00);
														}
														if (BgL_testz00_3996)
															{	/* Globalize/free.scm 169 */
																BgL_arg3903z00_1564 =
																	BGl_thezd2globalzd2closurez00zzglobaliza7e_freeza7
																	((BgL_globalz00_bglt) (BgL_varz00_1561),
																	BgL_arg3904z00_1565);
															}
														else
															{	/* Globalize/free.scm 169 */
																BgL_arg3903z00_1564 =
																	BGl_thezd2localzd2closurez00zzglobaliza7e_freeza7
																	((obj_t) (BgL_varz00_1561),
																	BgL_arg3904z00_1565);
															}
													}
												}
												BgL_freez00_1559 =
													MAKE_PAIR(BgL_arg3903z00_1564, BgL_freez00_1555);
											}
										}
									else
										{	/* Globalize/free.scm 167 */
											BgL_freez00_1559 = BgL_freez00_1555;
										}
								}
						}
					}
					{	/* Globalize/free.scm 172 */
						obj_t BgL_arg3900z00_1560;

						BgL_arg3900z00_1560 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1554))->BgL_argsz00);
						return
							BGl_nodezd2freeza2z70zzglobaliza7e_freeza7(BgL_arg3900z00_1560,
							BgL_freez00_1559);
					}
				}
			}
		}
	}



/* node-free-sequence3705 */
	obj_t BGl_nodezd2freezd2sequence3705z00zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2826, obj_t BgL_nodez00_2827, obj_t BgL_freez00_2828)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 154 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1546;

				obj_t BgL_freez00_1547;

				BgL_nodez00_1546 = (BgL_sequencez00_bglt) (BgL_nodez00_2827);
				BgL_freez00_1547 = BgL_freez00_2828;
				{	/* Globalize/free.scm 155 */
					obj_t BgL_arg3898z00_1972;

					BgL_arg3898z00_1972 =
						(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1546))->BgL_nodesz00);
					return
						BGl_nodezd2freeza2z70zzglobaliza7e_freeza7(BgL_arg3898z00_1972,
						BgL_freez00_1547);
				}
			}
		}
	}



/* node-free-closure3703 */
	obj_t BGl_nodezd2freezd2closure3703z00zzglobaliza7e_freeza7(obj_t
		BgL_envz00_2829, obj_t BgL_nodez00_2830, obj_t BgL_freez00_2831)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 139 */
			{
				BgL_closurez00_bglt BgL_nodez00_1535;

				obj_t BgL_freez00_1536;

				BgL_nodez00_1535 = (BgL_closurez00_bglt) (BgL_nodez00_2830);
				BgL_freez00_1536 = BgL_freez00_2831;
				{	/* Globalize/free.scm 141 */
					obj_t BgL_varz00_1540;

					{	/* Globalize/free.scm 141 */
						BgL_variablez00_bglt BgL_arg3896z00_1543;

						{
							BgL_varz00_bglt BgL_auxz00_4010;

							BgL_auxz00_4010 = (BgL_varz00_bglt) (BgL_nodez00_1535);
							BgL_arg3896z00_1543 =
								(((BgL_varz00_bglt) CREF(BgL_auxz00_4010))->BgL_variablez00);
						}
						{	/* Globalize/free.scm 141 */
							bool_t BgL_testz00_4013;

							{	/* Globalize/free.scm 141 */
								obj_t BgL_obj1751z00_1969;

								BgL_obj1751z00_1969 = (obj_t) (BgL_arg3896z00_1543);
								BgL_testz00_4013 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_1969,
									BGl_globalz00zzast_varz00);
							}
							if (BgL_testz00_4013)
								{	/* Globalize/free.scm 141 */
									BgL_varz00_1540 =
										BGl_thezd2globalzd2closurez00zzglobaliza7e_freeza7(
										(BgL_globalz00_bglt) (BgL_arg3896z00_1543), BFALSE);
								}
							else
								{	/* Globalize/free.scm 141 */
									BgL_varz00_1540 =
										BGl_thezd2localzd2closurez00zzglobaliza7e_freeza7(
										(obj_t) (BgL_arg3896z00_1543), BFALSE);
								}
						}
					}
					if (BGl_iszd2azf3z21zz__objectz00(BgL_varz00_1540,
							BGl_globalz00zzast_varz00))
						{	/* Globalize/free.scm 143 */
							return BgL_freez00_1536;
						}
					else
						{	/* Globalize/free.scm 143 */
							if (CBOOL(BGl_freezd2variablezf3z21zzglobaliza7e_freeza7
									(BgL_varz00_1540)))
								{	/* Globalize/free.scm 145 */
									BGl_markzd2variablez12zc0zzglobaliza7e_freeza7(
										(BgL_localz00_bglt) (BgL_varz00_1540));
									return MAKE_PAIR(BgL_varz00_1540, BgL_freez00_1536);
								}
							else
								{	/* Globalize/free.scm 145 */
									return BgL_freez00_1536;
								}
						}
				}
			}
		}
	}



/* node-free-var3701 */
	obj_t BGl_nodezd2freezd2var3701z00zzglobaliza7e_freeza7(obj_t BgL_envz00_2832,
		obj_t BgL_nodez00_2833, obj_t BgL_freez00_2834)
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 125 */
			{
				BgL_varz00_bglt BgL_nodez00_1522;

				obj_t BgL_freez00_1523;

				BgL_nodez00_1522 = (BgL_varz00_bglt) (BgL_nodez00_2833);
				BgL_freez00_1523 = BgL_freez00_2834;
				{	/* Globalize/free.scm 128 */
					bool_t BgL_testz00_4029;

					{	/* Globalize/free.scm 128 */
						BgL_variablez00_bglt BgL_arg3892z00_1532;

						BgL_arg3892z00_1532 =
							(((BgL_varz00_bglt) CREF(BgL_nodez00_1522))->BgL_variablez00);
						{	/* Globalize/free.scm 128 */
							obj_t BgL_obj1751z00_1961;

							BgL_obj1751z00_1961 = (obj_t) (BgL_arg3892z00_1532);
							BgL_testz00_4029 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_1961,
								BGl_globalz00zzast_varz00);
						}
					}
					if (BgL_testz00_4029)
						{	/* Globalize/free.scm 128 */
							return BgL_freez00_1523;
						}
					else
						{	/* Globalize/free.scm 130 */
							bool_t BgL_testz00_4033;

							{	/* Globalize/free.scm 130 */
								BgL_variablez00_bglt BgL_arg3891z00_1531;

								BgL_arg3891z00_1531 =
									(((BgL_varz00_bglt) CREF(BgL_nodez00_1522))->BgL_variablez00);
								BgL_testz00_4033 =
									CBOOL(BGl_freezd2variablezf3z21zzglobaliza7e_freeza7(
										(obj_t) (BgL_arg3891z00_1531)));
							}
							if (BgL_testz00_4033)
								{	/* Globalize/free.scm 130 */
									{	/* Globalize/free.scm 131 */
										BgL_variablez00_bglt BgL_arg3889z00_1529;

										BgL_arg3889z00_1529 =
											(((BgL_varz00_bglt) CREF(BgL_nodez00_1522))->
											BgL_variablez00);
										BGl_markzd2variablez12zc0zzglobaliza7e_freeza7(
											(BgL_localz00_bglt) (BgL_arg3889z00_1529));
									}
									{	/* Globalize/free.scm 132 */
										BgL_variablez00_bglt BgL_arg3890z00_1530;

										BgL_arg3890z00_1530 =
											(((BgL_varz00_bglt) CREF(BgL_nodez00_1522))->
											BgL_variablez00);
										return MAKE_PAIR((obj_t) (BgL_arg3890z00_1530),
											BgL_freez00_1523);
									}
								}
							else
								{	/* Globalize/free.scm 130 */
									return BgL_freez00_1523;
								}
						}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_freeza7()
	{
		AN_OBJECT;
		{	/* Globalize/free.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4072z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4072z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string4072z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4072z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4072z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4072z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string4072z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4072z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string4072z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(((long) 189731515),
				BSTRING_TO_STRING(BGl_string4072z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string4072z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(((long) 157543843),
				BSTRING_TO_STRING(BGl_string4072z00zzglobaliza7e_freeza7));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4072z00zzglobaliza7e_freeza7));
			return
				BGl_modulezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75((
					(long) 55366255),
				BSTRING_TO_STRING(BGl_string4072z00zzglobaliza7e_freeza7));
		}
	}

#ifdef __cplusplus
}
#endif
