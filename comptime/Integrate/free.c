/*===========================================================================*/
/*   (Integrate/free.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/free.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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

	typedef struct BgL_sexitzf2iinfozf2_bgl
	{
		obj_t BgL_fzd2markzd2;
		obj_t BgL_uzd2markzd2;
		bool_t BgL_kapturedzf3zf3;
		bool_t BgL_celledzf3zf3;
	}                       *BgL_sexitzf2iinfozf2_bglt;

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


	static obj_t BGl__nodezd2freezd2zzintegrate_freez00(obj_t, obj_t, obj_t);
	static obj_t BGl_nodezd2freezd2select3573z00zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_nodezd2freezd2fail3571z00zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_nodezd2freezd2conditiona3569z00zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_nodezd2freezd2funcall3561z00zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd2freezd2var3550z00zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t BGl_nodezd2freezd2makezd2box3583zd2zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_sexitzf2Iinfozf2zzintegrate_infoz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_freez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_nodez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t
		BGl_internalzd2getzd2freezd2varsz12zc0zzintegrate_freez00(BgL_nodez00_bglt,
		BgL_localz00_bglt);
	static obj_t BGl_toplevelzd2initzd2zzintegrate_freez00();
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_freezd2fromzd2zzintegrate_freez00(obj_t,
		BgL_localz00_bglt);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_nodezd2freezd2boxzd2ref3585zd2zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_closurez00zzast_nodez00;
	static obj_t BGl_nodezd2freezd2jumpzd2exzd2it3581z00zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzintegrate_freez00();
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_freez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzintegrate_freez00();
	static obj_t BGl__freezd2fromzd2zzintegrate_freez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_za2integratorza2z00zzintegrate_freez00 = BUNSPEC;
	static obj_t BGl_nodezd2freezd2letzd2fun3575zd2zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_bindzd2variablez12zc0zzintegrate_freez00(BgL_localz00_bglt,
		BgL_localz00_bglt);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_nodezd2freezd2closure3552z00zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static long BGl_za2roundza2z00zzintegrate_freez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_nodezd2freezd2letzd2var3577zd2zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_freez00();
	static obj_t BGl_nodezd2freezd2cast3565z00zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd2freezd2extern3563z00zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_nodezd2freezd2zzintegrate_freez00(BgL_nodez00_bglt, obj_t);
	static obj_t BGl_nodezd2freezd2setzd2exzd2it3579z00zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2freeza2z70zzintegrate_freez00(obj_t, obj_t);
	static obj_t BGl_nodezd2freezd2appzd2ly3558zd2zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__getzd2freezd2varsz00zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_markzd2variablez12zc0zzintegrate_freez00(BgL_localz00_bglt);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl__nodezd2freezd2default3547z00zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2freezd2setq3567z00zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2freezd2varsz00zzintegrate_freez00(BgL_nodez00_bglt,
		BgL_localz00_bglt);
	static obj_t BGl_nodezd2freezd2app3556z00zzintegrate_freez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd2freezd2sequence3554z00zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_freezd2variablezf3z21zzintegrate_freez00(obj_t);
	extern obj_t BGl_svarzf2Iinfozf2zzintegrate_infoz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_freez00();
	static obj_t BGl_nodezd2freezd2boxzd2setz123587zc0zzintegrate_freez00(obj_t,
		obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string3831z00zzintegrate_freez00,
		BgL_bgl_string3831za700za7za7i3855za7, "free-variable?", 14);
	      DEFINE_STRING(BGl_string3832z00zzintegrate_freez00,
		BgL_bgl_string3832za700za7za7i3856za7, "Unknown variable type", 21);
	      DEFINE_STRING(BGl_string3833z00zzintegrate_freez00,
		BgL_bgl_string3833za700za7za7i3857za7, "node-free", 9);
	      DEFINE_STRING(BGl_string3853z00zzintegrate_freez00,
		BgL_bgl_string3853za700za7za7i3858za7, "Unexepected `closure' node", 26);
	      DEFINE_STRING(BGl_string3854z00zzintegrate_freez00,
		BgL_bgl_string3854za700za7za7i3859za7, "integrate_free", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2freezd2varszd2envzd2zzintegrate_freez00,
		BgL_bgl__getza7d2freeza7d2va3860z00,
		BGl__getzd2freezd2varsz00zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_freezd2fromzd2envz00zzintegrate_freez00,
		BgL_bgl__freeza7d2fromza7d2za73861za7,
		BGl__freezd2fromzd2zzintegrate_freez00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nodezd2freezd2default3547zd2envzd2zzintegrate_freez00,
		BgL_bgl__nodeza7d2freeza7d2d3862z00,
		BGl__nodezd2freezd2default3547z00zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_GENERIC(BGl_nodezd2freezd2envz00zzintegrate_freez00,
		BgL_bgl__nodeza7d2freeza7d2za73863za7,
		BGl__nodezd2freezd2zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3834z00zzintegrate_freez00,
		BgL_bgl_nodeza7d2freeza7d2va3864z00,
		BGl_nodezd2freezd2var3550z00zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3835z00zzintegrate_freez00,
		BgL_bgl_nodeza7d2freeza7d2cl3865z00,
		BGl_nodezd2freezd2closure3552z00zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3836z00zzintegrate_freez00,
		BgL_bgl_nodeza7d2freeza7d2se3866z00,
		BGl_nodezd2freezd2sequence3554z00zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3837z00zzintegrate_freez00,
		BgL_bgl_nodeza7d2freeza7d2ap3867z00,
		BGl_nodezd2freezd2app3556z00zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3838z00zzintegrate_freez00,
		BgL_bgl_nodeza7d2freeza7d2ap3868z00,
		BGl_nodezd2freezd2appzd2ly3558zd2zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3840z00zzintegrate_freez00,
		BgL_bgl_nodeza7d2freeza7d2ex3869z00,
		BGl_nodezd2freezd2extern3563z00zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3839z00zzintegrate_freez00,
		BgL_bgl_nodeza7d2freeza7d2fu3870z00,
		BGl_nodezd2freezd2funcall3561z00zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3841z00zzintegrate_freez00,
		BgL_bgl_nodeza7d2freeza7d2ca3871z00,
		BGl_nodezd2freezd2cast3565z00zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3842z00zzintegrate_freez00,
		BgL_bgl_nodeza7d2freeza7d2se3872z00,
		BGl_nodezd2freezd2setq3567z00zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3843z00zzintegrate_freez00,
		BgL_bgl_nodeza7d2freeza7d2co3873z00,
		BGl_nodezd2freezd2conditiona3569z00zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3844z00zzintegrate_freez00,
		BgL_bgl_nodeza7d2freeza7d2fa3874z00,
		BGl_nodezd2freezd2fail3571z00zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3845z00zzintegrate_freez00,
		BgL_bgl_nodeza7d2freeza7d2se3875z00,
		BGl_nodezd2freezd2select3573z00zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3846z00zzintegrate_freez00,
		BgL_bgl_nodeza7d2freeza7d2le3876z00,
		BGl_nodezd2freezd2letzd2fun3575zd2zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3847z00zzintegrate_freez00,
		BgL_bgl_nodeza7d2freeza7d2le3877z00,
		BGl_nodezd2freezd2letzd2var3577zd2zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3848z00zzintegrate_freez00,
		BgL_bgl_nodeza7d2freeza7d2se3878z00,
		BGl_nodezd2freezd2setzd2exzd2it3579z00zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3850z00zzintegrate_freez00,
		BgL_bgl_nodeza7d2freeza7d2ma3879z00,
		BGl_nodezd2freezd2makezd2box3583zd2zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3849z00zzintegrate_freez00,
		BgL_bgl_nodeza7d2freeza7d2ju3880z00,
		BGl_nodezd2freezd2jumpzd2exzd2it3581z00zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3851z00zzintegrate_freez00,
		BgL_bgl_nodeza7d2freeza7d2bo3881z00,
		BGl_nodezd2freezd2boxzd2ref3585zd2zzintegrate_freez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3852z00zzintegrate_freez00,
		BgL_bgl_nodeza7d2freeza7d2bo3882z00,
		BGl_nodezd2freezd2boxzd2setz123587zc0zzintegrate_freez00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_freez00(long
		BgL_checksumz00_2633, char *BgL_fromz00_2634)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_freez00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_freez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzintegrate_freez00();
					BGl_importedzd2moduleszd2initz00zzintegrate_freez00();
					BGl_genericzd2initzd2zzintegrate_freez00();
					BGl_methodzd2initzd2zzintegrate_freez00();
					BGl_toplevelzd2initzd2zzintegrate_freez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_freez00()
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"integrate_free");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"integrate_free");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"integrate_free");
			return BUNSPEC;
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzintegrate_freez00()
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 15 */
			BGl_za2roundza2z00zzintegrate_freez00 = ((long) 0);
			BGl_za2integratorza2z00zzintegrate_freez00 = BUNSPEC;
			return BUNSPEC;
		}
	}



/* mark-variable! */
	obj_t BGl_markzd2variablez12zc0zzintegrate_freez00(BgL_localz00_bglt
		BgL_localz00_1)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 41 */
			{	/* Integrate/free.scm 42 */
				BgL_valuez00_bglt BgL_infoz00_937;

				{
					BgL_variablez00_bglt BgL_auxz00_2646;

					BgL_auxz00_2646 = (BgL_variablez00_bglt) (BgL_localz00_1);
					BgL_infoz00_937 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2646))->BgL_valuez00);
				}
				{	/* Integrate/free.scm 44 */
					bool_t BgL_testz00_2649;

					{	/* Integrate/free.scm 44 */
						obj_t BgL_obj3258z00_1644;

						BgL_obj3258z00_1644 = (obj_t) (BgL_infoz00_937);
						BgL_testz00_2649 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj3258z00_1644,
							BGl_svarzf2Iinfozf2zzintegrate_infoz00);
					}
					if (BgL_testz00_2649)
						{	/* Integrate/free.scm 45 */
							BgL_svarzf2iinfozf2_bglt BgL_obj3261z00_1645;

							obj_t BgL_val3260z00_1646;

							BgL_obj3261z00_1645 =
								(BgL_svarzf2iinfozf2_bglt) (BgL_infoz00_937);
							BgL_val3260z00_1646 = BINT(BGl_za2roundza2z00zzintegrate_freez00);
							{
								obj_t BgL_auxz00_2654;

								{	/* Integrate/free.scm 45 */
									BgL_objectz00_bglt BgL_auxz00_2655;

									BgL_auxz00_2655 = (BgL_objectz00_bglt) (BgL_obj3261z00_1645);
									BgL_auxz00_2654 = BGL_OBJECT_WIDENING(BgL_auxz00_2655);
								}
								return
									((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_auxz00_2654))->
										BgL_fzd2markzd2) = ((obj_t) BgL_val3260z00_1646), BUNSPEC);
							}
						}
					else
						{	/* Integrate/free.scm 46 */
							bool_t BgL_testz00_2659;

							{	/* Integrate/free.scm 46 */
								obj_t BgL_obj3295z00_1647;

								BgL_obj3295z00_1647 = (obj_t) (BgL_infoz00_937);
								BgL_testz00_2659 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj3295z00_1647,
									BGl_sexitzf2Iinfozf2zzintegrate_infoz00);
							}
							if (BgL_testz00_2659)
								{	/* Integrate/free.scm 47 */
									BgL_sexitzf2iinfozf2_bglt BgL_obj3298z00_1648;

									obj_t BgL_val3297z00_1649;

									BgL_obj3298z00_1648 =
										(BgL_sexitzf2iinfozf2_bglt) (BgL_infoz00_937);
									BgL_val3297z00_1649 =
										BINT(BGl_za2roundza2z00zzintegrate_freez00);
									{
										obj_t BgL_auxz00_2664;

										{	/* Integrate/free.scm 47 */
											BgL_objectz00_bglt BgL_auxz00_2665;

											BgL_auxz00_2665 =
												(BgL_objectz00_bglt) (BgL_obj3298z00_1648);
											BgL_auxz00_2664 = BGL_OBJECT_WIDENING(BgL_auxz00_2665);
										}
										return
											((((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_auxz00_2664))->
												BgL_fzd2markzd2) =
											((obj_t) BgL_val3297z00_1649), BUNSPEC);
									}
								}
							else
								{	/* Integrate/free.scm 46 */
									return BFALSE;
								}
						}
				}
			}
		}
	}



/* bind-variable! */
	obj_t BGl_bindzd2variablez12zc0zzintegrate_freez00(BgL_localz00_bglt
		BgL_localz00_2, BgL_localz00_bglt BgL_integratorz00_3)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 52 */
			{	/* Integrate/free.scm 53 */
				BgL_valuez00_bglt BgL_finfoz00_940;

				{
					BgL_variablez00_bglt BgL_auxz00_2669;

					BgL_auxz00_2669 = (BgL_variablez00_bglt) (BgL_integratorz00_3);
					BgL_finfoz00_940 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2669))->BgL_valuez00);
				}
				{	/* Integrate/free.scm 54 */
					obj_t BgL_arg3590z00_941;

					{	/* Integrate/free.scm 54 */
						obj_t BgL_arg3591z00_942;

						{	/* Integrate/free.scm 54 */
							BgL_sfunzf2iinfozf2_bglt BgL_obj3398z00_1651;

							BgL_obj3398z00_1651 =
								(BgL_sfunzf2iinfozf2_bglt) (BgL_finfoz00_940);
							{
								obj_t BgL_auxz00_2673;

								{	/* Integrate/free.scm 54 */
									BgL_objectz00_bglt BgL_auxz00_2674;

									BgL_auxz00_2674 = (BgL_objectz00_bglt) (BgL_obj3398z00_1651);
									BgL_auxz00_2673 = BGL_OBJECT_WIDENING(BgL_auxz00_2674);
								}
								BgL_arg3591z00_942 =
									(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_2673))->
									BgL_boundz00);
							}
						}
						BgL_arg3590z00_941 =
							MAKE_PAIR((obj_t) (BgL_localz00_2), BgL_arg3591z00_942);
					}
					{	/* Integrate/free.scm 54 */
						BgL_sfunzf2iinfozf2_bglt BgL_obj3400z00_1652;

						obj_t BgL_val3399z00_1653;

						BgL_obj3400z00_1652 = (BgL_sfunzf2iinfozf2_bglt) (BgL_finfoz00_940);
						BgL_val3399z00_1653 = BgL_arg3590z00_941;
						{
							obj_t BgL_auxz00_2681;

							{	/* Integrate/free.scm 54 */
								BgL_objectz00_bglt BgL_auxz00_2682;

								BgL_auxz00_2682 = (BgL_objectz00_bglt) (BgL_obj3400z00_1652);
								BgL_auxz00_2681 = BGL_OBJECT_WIDENING(BgL_auxz00_2682);
							}
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_2681))->
									BgL_boundz00) = ((obj_t) BgL_val3399z00_1653), BUNSPEC);
						}
					}
				}
				return BGl_markzd2variablez12zc0zzintegrate_freez00(BgL_localz00_2);
			}
		}
	}



/* free-variable? */
	obj_t BGl_freezd2variablezf3z21zzintegrate_freez00(obj_t BgL_localz00_4)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 60 */
			{	/* Integrate/free.scm 61 */
				BgL_valuez00_bglt BgL_infoz00_943;

				{
					BgL_variablez00_bglt BgL_auxz00_2687;

					BgL_auxz00_2687 = (BgL_variablez00_bglt) (BgL_localz00_4);
					BgL_infoz00_943 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2687))->BgL_valuez00);
				}
				{	/* Integrate/free.scm 63 */
					bool_t BgL_testz00_2690;

					{	/* Integrate/free.scm 63 */
						obj_t BgL_obj3258z00_1655;

						BgL_obj3258z00_1655 = (obj_t) (BgL_infoz00_943);
						BgL_testz00_2690 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj3258z00_1655,
							BGl_svarzf2Iinfozf2zzintegrate_infoz00);
					}
					if (BgL_testz00_2690)
						{	/* Integrate/free.scm 64 */
							bool_t BgL_testz00_2693;

							{	/* Integrate/free.scm 64 */
								obj_t BgL_arg3594z00_946;

								{	/* Integrate/free.scm 64 */
									BgL_svarzf2iinfozf2_bglt BgL_obj3259z00_1656;

									BgL_obj3259z00_1656 =
										(BgL_svarzf2iinfozf2_bglt) (BgL_infoz00_943);
									{
										obj_t BgL_auxz00_2695;

										{	/* Integrate/free.scm 64 */
											BgL_objectz00_bglt BgL_auxz00_2696;

											BgL_auxz00_2696 =
												(BgL_objectz00_bglt) (BgL_obj3259z00_1656);
											BgL_auxz00_2695 = BGL_OBJECT_WIDENING(BgL_auxz00_2696);
										}
										BgL_arg3594z00_946 =
											(((BgL_svarzf2iinfozf2_bglt) CREF(BgL_auxz00_2695))->
											BgL_fzd2markzd2);
									}
								}
								BgL_testz00_2693 =
									(BgL_arg3594z00_946 ==
									BINT(BGl_za2roundza2z00zzintegrate_freez00));
							}
							if (BgL_testz00_2693)
								{	/* Integrate/free.scm 64 */
									return BFALSE;
								}
							else
								{	/* Integrate/free.scm 64 */
									return BTRUE;
								}
						}
					else
						{	/* Integrate/free.scm 65 */
							bool_t BgL_testz00_2702;

							{	/* Integrate/free.scm 65 */
								obj_t BgL_obj3295z00_1657;

								BgL_obj3295z00_1657 = (obj_t) (BgL_infoz00_943);
								BgL_testz00_2702 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj3295z00_1657,
									BGl_sexitzf2Iinfozf2zzintegrate_infoz00);
							}
							if (BgL_testz00_2702)
								{	/* Integrate/free.scm 66 */
									bool_t BgL_testz00_2705;

									{	/* Integrate/free.scm 66 */
										obj_t BgL_arg3597z00_949;

										{	/* Integrate/free.scm 66 */
											BgL_sexitzf2iinfozf2_bglt BgL_obj3296z00_1658;

											BgL_obj3296z00_1658 =
												(BgL_sexitzf2iinfozf2_bglt) (BgL_infoz00_943);
											{
												obj_t BgL_auxz00_2707;

												{	/* Integrate/free.scm 66 */
													BgL_objectz00_bglt BgL_auxz00_2708;

													BgL_auxz00_2708 =
														(BgL_objectz00_bglt) (BgL_obj3296z00_1658);
													BgL_auxz00_2707 =
														BGL_OBJECT_WIDENING(BgL_auxz00_2708);
												}
												BgL_arg3597z00_949 =
													(((BgL_sexitzf2iinfozf2_bglt) CREF(BgL_auxz00_2707))->
													BgL_fzd2markzd2);
											}
										}
										BgL_testz00_2705 =
											(BgL_arg3597z00_949 ==
											BINT(BGl_za2roundza2z00zzintegrate_freez00));
									}
									if (BgL_testz00_2705)
										{	/* Integrate/free.scm 66 */
											return BFALSE;
										}
									else
										{	/* Integrate/free.scm 66 */
											return BTRUE;
										}
								}
							else
								{	/* Integrate/free.scm 68 */
									obj_t BgL_arg3600z00_952;

									BgL_arg3600z00_952 =
										MAKE_PAIR(BgL_localz00_4,
										BGl_shapez00zztools_shapez00(BgL_localz00_4));
									return
										BGl_errorz00zz__errorz00
										(BGl_string3831z00zzintegrate_freez00,
										BGl_string3832z00zzintegrate_freez00, BgL_arg3600z00_952);
								}
						}
				}
			}
		}
	}



/* get-free-vars */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2freezd2varsz00zzintegrate_freez00(BgL_nodez00_bglt BgL_nodez00_5,
		BgL_localz00_bglt BgL_integratorz00_6)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 78 */
			{	/* Integrate/free.scm 81 */
				obj_t BgL_freez00_954;

				{	/* Integrate/free.scm 81 */
					BgL_sfunzf2iinfozf2_bglt BgL_obj3395z00_1660;

					{	/* Integrate/free.scm 81 */
						BgL_variablez00_bglt BgL_obj1611z00_1659;

						BgL_obj1611z00_1659 = (BgL_variablez00_bglt) (BgL_integratorz00_6);
						BgL_obj3395z00_1660 =
							(BgL_sfunzf2iinfozf2_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1659))->
								BgL_valuez00));
					}
					{
						obj_t BgL_auxz00_2720;

						{	/* Integrate/free.scm 81 */
							BgL_objectz00_bglt BgL_auxz00_2721;

							BgL_auxz00_2721 = (BgL_objectz00_bglt) (BgL_obj3395z00_1660);
							BgL_auxz00_2720 = BGL_OBJECT_WIDENING(BgL_auxz00_2721);
						}
						BgL_freez00_954 =
							(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_2720))->BgL_freez00);
					}
				}
				{	/* Integrate/free.scm 82 */
					bool_t BgL_testz00_2725;

					if (NULLP(BgL_freez00_954))
						{	/* Integrate/free.scm 82 */
							BgL_testz00_2725 = ((bool_t) 1);
						}
					else
						{	/* Integrate/free.scm 82 */
							BgL_testz00_2725 = PAIRP(BgL_freez00_954);
						}
					if (BgL_testz00_2725)
						{	/* Integrate/free.scm 82 */
							return BgL_freez00_954;
						}
					else
						{	/* Integrate/free.scm 84 */
							obj_t BgL_freez00_956;

							BgL_freez00_956 =
								BGl_internalzd2getzd2freezd2varsz12zc0zzintegrate_freez00
								(BgL_nodez00_5, BgL_integratorz00_6);
							{	/* Integrate/free.scm 85 */
								BgL_valuez00_bglt BgL_arg3603z00_957;

								{
									BgL_variablez00_bglt BgL_auxz00_2730;

									BgL_auxz00_2730 =
										(BgL_variablez00_bglt) (BgL_integratorz00_6);
									BgL_arg3603z00_957 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2730))->
										BgL_valuez00);
								}
								{	/* Integrate/free.scm 85 */
									BgL_sfunzf2iinfozf2_bglt BgL_obj3397z00_1664;

									obj_t BgL_val3396z00_1665;

									BgL_obj3397z00_1664 =
										(BgL_sfunzf2iinfozf2_bglt) (BgL_arg3603z00_957);
									BgL_val3396z00_1665 = BgL_freez00_956;
									{
										obj_t BgL_auxz00_2734;

										{	/* Integrate/free.scm 85 */
											BgL_objectz00_bglt BgL_auxz00_2735;

											BgL_auxz00_2735 =
												(BgL_objectz00_bglt) (BgL_obj3397z00_1664);
											BgL_auxz00_2734 = BGL_OBJECT_WIDENING(BgL_auxz00_2735);
										}
										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_2734))->
												BgL_freez00) = ((obj_t) BgL_val3396z00_1665), BUNSPEC);
									}
								}
							}
							return BgL_freez00_956;
						}
				}
			}
		}
	}



/* _get-free-vars */
	obj_t BGl__getzd2freezd2varsz00zzintegrate_freez00(obj_t BgL_envz00_2543,
		obj_t BgL_nodez00_2544, obj_t BgL_integratorz00_2545)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 78 */
			return
				BGl_getzd2freezd2varsz00zzintegrate_freez00(
				(BgL_nodez00_bglt) (BgL_nodez00_2544),
				(BgL_localz00_bglt) (BgL_integratorz00_2545));
		}
	}



/* internal-get-free-vars! */
	obj_t
		BGl_internalzd2getzd2freezd2varsz12zc0zzintegrate_freez00(BgL_nodez00_bglt
		BgL_nodez00_7, BgL_localz00_bglt BgL_integratorz00_8)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 99 */
			BGl_za2roundza2z00zzintegrate_freez00 =
				(BGl_za2roundza2z00zzintegrate_freez00 + ((long) 1));
			BGl_za2integratorza2z00zzintegrate_freez00 =
				(obj_t) (BgL_integratorz00_8);
			{	/* Integrate/free.scm 103 */
				obj_t BgL_g3535z00_960;

				{	/* Integrate/free.scm 104 */
					BgL_sfunz00_bglt BgL_obj1880z00_1669;

					{	/* Integrate/free.scm 104 */
						BgL_variablez00_bglt BgL_obj1611z00_1668;

						BgL_obj1611z00_1668 = (BgL_variablez00_bglt) (BgL_integratorz00_8);
						BgL_obj1880z00_1669 =
							(BgL_sfunz00_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1668))->
								BgL_valuez00));
					}
					BgL_g3535z00_960 =
						(((BgL_sfunz00_bglt) CREF(BgL_obj1880z00_1669))->BgL_argsz00);
				}
				{
					obj_t BgL_l3533z00_962;

					BgL_l3533z00_962 = BgL_g3535z00_960;
				BgL_zc3anonymousza33606ze3z83_963:
					if (PAIRP(BgL_l3533z00_962))
						{	/* Integrate/free.scm 104 */
							{	/* Integrate/free.scm 103 */
								obj_t BgL_lz00_965;

								BgL_lz00_965 = CAR(BgL_l3533z00_962);
								BGl_bindzd2variablez12zc0zzintegrate_freez00(
									(BgL_localz00_bglt) (BgL_lz00_965), BgL_integratorz00_8);
							}
							{
								obj_t BgL_l3533z00_2753;

								BgL_l3533z00_2753 = CDR(BgL_l3533z00_962);
								BgL_l3533z00_962 = BgL_l3533z00_2753;
								goto BgL_zc3anonymousza33606ze3z83_963;
							}
						}
					else
						{	/* Integrate/free.scm 104 */
							((bool_t) 1);
						}
				}
			}
			{	/* Integrate/free.scm 106 */
				obj_t BgL_method3548z00_1675;

				{	/* Integrate/free.scm 106 */
					BgL_objectz00_bglt BgL_objz00_1676;

					BgL_objz00_1676 = (BgL_objectz00_bglt) (BgL_nodez00_7);
					{	/* Integrate/free.scm 106 */
						long BgL_objzd2classzd2numz00_1677;

						BgL_objzd2classzd2numz00_1677 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1676);
						{	/* Integrate/free.scm 106 */
							obj_t BgL_arg2643z00_1678;

							BgL_arg2643z00_1678 =
								PROCEDURE_REF(BGl_nodezd2freezd2envz00zzintegrate_freez00,
								(int) (((long) 1)));
							{	/* Integrate/free.scm 106 */
								obj_t BgL_arrayz00_1680;

								int BgL_offsetz00_1681;

								BgL_arrayz00_1680 = BgL_arg2643z00_1678;
								BgL_offsetz00_1681 = (int) (BgL_objzd2classzd2numz00_1677);
								{	/* Integrate/free.scm 106 */
									long BgL_offsetz00_1682;

									BgL_offsetz00_1682 =
										((long) (BgL_offsetz00_1681) - OBJECT_TYPE);
									{	/* Integrate/free.scm 106 */
										long BgL_modz00_1683;

										{	/* Integrate/free.scm 106 */
											int BgL_arg2645z00_1684;

											BgL_arg2645z00_1684 = (int) (((long) 16));
											{	/* Integrate/free.scm 106 */
												long BgL_auxz00_2763;

												BgL_auxz00_2763 = (long) (BgL_arg2645z00_1684);
												BgL_modz00_1683 =
													(BgL_offsetz00_1682 / BgL_auxz00_2763);
										}}
										{	/* Integrate/free.scm 106 */
											long BgL_restz00_1685;

											{	/* Integrate/free.scm 106 */
												int BgL_arg2644z00_1686;

												BgL_arg2644z00_1686 = (int) (((long) 16));
												{	/* Integrate/free.scm 106 */
													long BgL_auxz00_2767;

													BgL_auxz00_2767 = (long) (BgL_arg2644z00_1686);
													BgL_restz00_1685 =
														(BgL_offsetz00_1682 % BgL_auxz00_2767);
											}}
											{	/* Integrate/free.scm 106 */

												BgL_method3548z00_1675 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1680,
														(int) (BgL_modz00_1683)), (int) (BgL_restz00_1685));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3548z00_1675) (BgL_method3548z00_1675,
					(obj_t) (BgL_nodez00_7), BNIL, BEOA);
			}
		}
	}



/* node-free* */
	obj_t BGl_nodezd2freeza2z70zzintegrate_freez00(obj_t BgL_nodeza2za2_51,
		obj_t BgL_freez00_52)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 278 */
			{
				obj_t BgL_nodeza2za2_970;

				obj_t BgL_freez00_971;

				BgL_nodeza2za2_970 = BgL_nodeza2za2_51;
				BgL_freez00_971 = BgL_freez00_52;
			BgL_zc3anonymousza33610ze3z83_972:
				if (NULLP(BgL_nodeza2za2_970))
					{	/* Integrate/free.scm 281 */
						return BgL_freez00_971;
					}
				else
					{	/* Integrate/free.scm 283 */
						obj_t BgL_arg3612z00_974;

						obj_t BgL_arg3613z00_975;

						BgL_arg3612z00_974 = CDR(BgL_nodeza2za2_970);
						{	/* Integrate/free.scm 284 */
							obj_t BgL_arg3614z00_976;

							BgL_arg3614z00_976 = CAR(BgL_nodeza2za2_970);
							{	/* Integrate/free.scm 284 */
								BgL_nodez00_bglt BgL_nodez00_1703;

								BgL_nodez00_1703 = (BgL_nodez00_bglt) (BgL_arg3614z00_976);
								{	/* Integrate/free.scm 284 */
									obj_t BgL_method3548z00_1705;

									{	/* Integrate/free.scm 284 */
										BgL_objectz00_bglt BgL_objz00_1706;

										BgL_objz00_1706 = (BgL_objectz00_bglt) (BgL_nodez00_1703);
										{	/* Integrate/free.scm 284 */
											long BgL_objzd2classzd2numz00_1707;

											BgL_objzd2classzd2numz00_1707 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1706);
											{	/* Integrate/free.scm 284 */
												obj_t BgL_arg2643z00_1708;

												BgL_arg2643z00_1708 =
													PROCEDURE_REF
													(BGl_nodezd2freezd2envz00zzintegrate_freez00,
													(int) (((long) 1)));
												{	/* Integrate/free.scm 284 */
													obj_t BgL_arrayz00_1710;

													int BgL_offsetz00_1711;

													BgL_arrayz00_1710 = BgL_arg2643z00_1708;
													BgL_offsetz00_1711 =
														(int) (BgL_objzd2classzd2numz00_1707);
													{	/* Integrate/free.scm 284 */
														long BgL_offsetz00_1712;

														BgL_offsetz00_1712 =
															((long) (BgL_offsetz00_1711) - OBJECT_TYPE);
														{	/* Integrate/free.scm 284 */
															long BgL_modz00_1713;

															{	/* Integrate/free.scm 284 */
																int BgL_arg2645z00_1714;

																BgL_arg2645z00_1714 = (int) (((long) 16));
																{	/* Integrate/free.scm 284 */
																	long BgL_auxz00_2790;

																	BgL_auxz00_2790 =
																		(long) (BgL_arg2645z00_1714);
																	BgL_modz00_1713 =
																		(BgL_offsetz00_1712 / BgL_auxz00_2790);
															}}
															{	/* Integrate/free.scm 284 */
																long BgL_restz00_1715;

																{	/* Integrate/free.scm 284 */
																	int BgL_arg2644z00_1716;

																	BgL_arg2644z00_1716 = (int) (((long) 16));
																	{	/* Integrate/free.scm 284 */
																		long BgL_auxz00_2794;

																		BgL_auxz00_2794 =
																			(long) (BgL_arg2644z00_1716);
																		BgL_restz00_1715 =
																			(BgL_offsetz00_1712 % BgL_auxz00_2794);
																}}
																{	/* Integrate/free.scm 284 */

																	BgL_method3548z00_1705 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1710,
																			(int) (BgL_modz00_1713)),
																		(int) (BgL_restz00_1715));
									}}}}}}}}
									BgL_arg3613z00_975 =
										PROCEDURE_ENTRY(BgL_method3548z00_1705)
										(BgL_method3548z00_1705, (obj_t) (BgL_nodez00_1703),
										BgL_freez00_971, BEOA);
						}}}
						{
							obj_t BgL_freez00_2805;

							obj_t BgL_nodeza2za2_2804;

							BgL_nodeza2za2_2804 = BgL_arg3612z00_974;
							BgL_freez00_2805 = BgL_arg3613z00_975;
							BgL_freez00_971 = BgL_freez00_2805;
							BgL_nodeza2za2_970 = BgL_nodeza2za2_2804;
							goto BgL_zc3anonymousza33610ze3z83_972;
						}
					}
			}
		}
	}



/* free-from */
	BGL_EXPORTED_DEF obj_t BGl_freezd2fromzd2zzintegrate_freez00(obj_t
		BgL_setsz00_53, BgL_localz00_bglt BgL_integratorz00_54)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 289 */
			BGl_za2roundza2z00zzintegrate_freez00 =
				(BGl_za2roundza2z00zzintegrate_freez00 + ((long) 1));
			{	/* Integrate/free.scm 292 */
				BgL_valuez00_bglt BgL_finfoz00_978;

				{
					BgL_variablez00_bglt BgL_auxz00_2807;

					BgL_auxz00_2807 = (BgL_variablez00_bglt) (BgL_integratorz00_54);
					BgL_finfoz00_978 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2807))->BgL_valuez00);
				}
				{	/* Integrate/free.scm 299 */
					obj_t BgL_g3541z00_979;

					{	/* Integrate/free.scm 299 */
						BgL_sfunzf2iinfozf2_bglt BgL_obj3398z00_1733;

						BgL_obj3398z00_1733 = (BgL_sfunzf2iinfozf2_bglt) (BgL_finfoz00_978);
						{
							obj_t BgL_auxz00_2811;

							{	/* Integrate/free.scm 299 */
								BgL_objectz00_bglt BgL_auxz00_2812;

								BgL_auxz00_2812 = (BgL_objectz00_bglt) (BgL_obj3398z00_1733);
								BgL_auxz00_2811 = BGL_OBJECT_WIDENING(BgL_auxz00_2812);
							}
							BgL_g3541z00_979 =
								(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_2811))->
								BgL_boundz00);
					}}
					{
						obj_t BgL_l3539z00_981;

						BgL_l3539z00_981 = BgL_g3541z00_979;
					BgL_zc3anonymousza33615ze3z83_982:
						if (PAIRP(BgL_l3539z00_981))
							{	/* Integrate/free.scm 299 */
								{	/* Integrate/free.scm 299 */
									obj_t BgL_arg3617z00_984;

									BgL_arg3617z00_984 = CAR(BgL_l3539z00_981);
									BGl_markzd2variablez12zc0zzintegrate_freez00(
										(BgL_localz00_bglt) (BgL_arg3617z00_984));
								}
								{
									obj_t BgL_l3539z00_2821;

									BgL_l3539z00_2821 = CDR(BgL_l3539z00_981);
									BgL_l3539z00_981 = BgL_l3539z00_2821;
									goto BgL_zc3anonymousza33615ze3z83_982;
								}
							}
						else
							{	/* Integrate/free.scm 299 */
								((bool_t) 1);
							}
					}
				}
			}
			if (NULLP(BgL_setsz00_53))
				{	/* Integrate/free.scm 301 */
					return BNIL;
				}
			else
				{	/* Integrate/free.scm 301 */
					obj_t BgL_head3544z00_989;

					BgL_head3544z00_989 = MAKE_PAIR(BNIL, BNIL);
					{
						obj_t BgL_l3542z00_991;

						obj_t BgL_tail3545z00_992;

						BgL_l3542z00_991 = BgL_setsz00_53;
						BgL_tail3545z00_992 = BgL_head3544z00_989;
					BgL_zc3anonymousza33620ze3z83_993:
						if (NULLP(BgL_l3542z00_991))
							{	/* Integrate/free.scm 301 */
								return CDR(BgL_head3544z00_989);
							}
						else
							{	/* Integrate/free.scm 301 */
								obj_t BgL_newtail3546z00_995;

								{	/* Integrate/free.scm 301 */
									obj_t BgL_arg3623z00_997;

									{	/* Integrate/free.scm 301 */
										obj_t BgL_setz00_999;

										BgL_setz00_999 = CAR(BgL_l3542z00_991);
										{
											obj_t BgL_setz00_1002;

											obj_t BgL_resz00_1003;

											BgL_setz00_1002 = BgL_setz00_999;
											BgL_resz00_1003 = BNIL;
										BgL_zc3anonymousza33625ze3z83_1004:
											if (NULLP(BgL_setz00_1002))
												{	/* Integrate/free.scm 305 */
													BgL_arg3623z00_997 = BgL_resz00_1003;
												}
											else
												{	/* Integrate/free.scm 307 */
													bool_t BgL_testz00_2832;

													{	/* Integrate/free.scm 307 */
														obj_t BgL_arg3632z00_1011;

														BgL_arg3632z00_1011 = CAR(BgL_setz00_1002);
														BgL_testz00_2832 =
															CBOOL(BGl_freezd2variablezf3z21zzintegrate_freez00
															(BgL_arg3632z00_1011));
													}
													if (BgL_testz00_2832)
														{	/* Integrate/free.scm 308 */
															obj_t BgL_arg3628z00_1007;

															obj_t BgL_arg3629z00_1008;

															BgL_arg3628z00_1007 = CDR(BgL_setz00_1002);
															BgL_arg3629z00_1008 =
																MAKE_PAIR(CAR(BgL_setz00_1002),
																BgL_resz00_1003);
															{
																obj_t BgL_resz00_2840;

																obj_t BgL_setz00_2839;

																BgL_setz00_2839 = BgL_arg3628z00_1007;
																BgL_resz00_2840 = BgL_arg3629z00_1008;
																BgL_resz00_1003 = BgL_resz00_2840;
																BgL_setz00_1002 = BgL_setz00_2839;
																goto BgL_zc3anonymousza33625ze3z83_1004;
															}
														}
													else
														{
															obj_t BgL_setz00_2841;

															BgL_setz00_2841 = CDR(BgL_setz00_1002);
															BgL_setz00_1002 = BgL_setz00_2841;
															goto BgL_zc3anonymousza33625ze3z83_1004;
														}
												}
										}
									}
									BgL_newtail3546z00_995 = MAKE_PAIR(BgL_arg3623z00_997, BNIL);
								}
								SET_CDR(BgL_tail3545z00_992, BgL_newtail3546z00_995);
								{
									obj_t BgL_tail3545z00_2847;

									obj_t BgL_l3542z00_2845;

									BgL_l3542z00_2845 = CDR(BgL_l3542z00_991);
									BgL_tail3545z00_2847 = BgL_newtail3546z00_995;
									BgL_tail3545z00_992 = BgL_tail3545z00_2847;
									BgL_l3542z00_991 = BgL_l3542z00_2845;
									goto BgL_zc3anonymousza33620ze3z83_993;
								}
							}
					}
				}
		}
	}



/* _free-from */
	obj_t BGl__freezd2fromzd2zzintegrate_freez00(obj_t BgL_envz00_2549,
		obj_t BgL_setsz00_2550, obj_t BgL_integratorz00_2551)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 289 */
			return
				BGl_freezd2fromzd2zzintegrate_freez00(BgL_setsz00_2550,
				(BgL_localz00_bglt) (BgL_integratorz00_2551));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_freez00()
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_nodezd2freezd2default3547zd2envzd2zzintegrate_freez00,
				BGl_nodez00zzast_nodez00, BGl_string3833z00zzintegrate_freez00);
		}
	}



/* node-free */
	obj_t BGl_nodezd2freezd2zzintegrate_freez00(BgL_nodez00_bglt BgL_nodez00_9,
		obj_t BgL_freez00_10)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 111 */
			{	/* Integrate/free.scm 111 */
				obj_t BgL_method3548z00_1753;

				{	/* Integrate/free.scm 111 */
					BgL_objectz00_bglt BgL_objz00_1754;

					BgL_objz00_1754 = (BgL_objectz00_bglt) (BgL_nodez00_9);
					{	/* Integrate/free.scm 111 */
						long BgL_objzd2classzd2numz00_1755;

						BgL_objzd2classzd2numz00_1755 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1754);
						{	/* Integrate/free.scm 111 */
							obj_t BgL_arg2643z00_1756;

							BgL_arg2643z00_1756 =
								PROCEDURE_REF(BGl_nodezd2freezd2envz00zzintegrate_freez00,
								(int) (((long) 1)));
							{	/* Integrate/free.scm 111 */
								obj_t BgL_arrayz00_1758;

								int BgL_offsetz00_1759;

								BgL_arrayz00_1758 = BgL_arg2643z00_1756;
								BgL_offsetz00_1759 = (int) (BgL_objzd2classzd2numz00_1755);
								{	/* Integrate/free.scm 111 */
									long BgL_offsetz00_1760;

									BgL_offsetz00_1760 =
										((long) (BgL_offsetz00_1759) - OBJECT_TYPE);
									{	/* Integrate/free.scm 111 */
										long BgL_modz00_1761;

										{	/* Integrate/free.scm 111 */
											int BgL_arg2645z00_1762;

											BgL_arg2645z00_1762 = (int) (((long) 16));
											{	/* Integrate/free.scm 111 */
												long BgL_auxz00_2859;

												BgL_auxz00_2859 = (long) (BgL_arg2645z00_1762);
												BgL_modz00_1761 =
													(BgL_offsetz00_1760 / BgL_auxz00_2859);
										}}
										{	/* Integrate/free.scm 111 */
											long BgL_restz00_1763;

											{	/* Integrate/free.scm 111 */
												int BgL_arg2644z00_1764;

												BgL_arg2644z00_1764 = (int) (((long) 16));
												{	/* Integrate/free.scm 111 */
													long BgL_auxz00_2863;

													BgL_auxz00_2863 = (long) (BgL_arg2644z00_1764);
													BgL_restz00_1763 =
														(BgL_offsetz00_1760 % BgL_auxz00_2863);
											}}
											{	/* Integrate/free.scm 111 */

												BgL_method3548z00_1753 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1758,
														(int) (BgL_modz00_1761)), (int) (BgL_restz00_1763));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3548z00_1753) (BgL_method3548z00_1753,
					(obj_t) (BgL_nodez00_9), BgL_freez00_10, BEOA);
			}
		}
	}



/* _node-free */
	obj_t BGl__nodezd2freezd2zzintegrate_freez00(obj_t BgL_envz00_2546,
		obj_t BgL_nodez00_2547, obj_t BgL_freez00_2548)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 111 */
			return
				BGl_nodezd2freezd2zzintegrate_freez00(
				(BgL_nodez00_bglt) (BgL_nodez00_2547), BgL_freez00_2548);
		}
	}



/* _node-free-default3547 */
	obj_t BGl__nodezd2freezd2default3547z00zzintegrate_freez00(obj_t
		BgL_envz00_2552, obj_t BgL_nodez00_2553, obj_t BgL_freez00_2554)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 15 */
			return BgL_freez00_2554;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_freez00()
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00, BGl_varz00zzast_nodez00,
				BGl_proc3834z00zzintegrate_freez00,
				BGl_string3833z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_closurez00zzast_nodez00, BGl_proc3835z00zzintegrate_freez00,
				BGl_string3833z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_sequencez00zzast_nodez00, BGl_proc3836z00zzintegrate_freez00,
				BGl_string3833z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00, BGl_appz00zzast_nodez00,
				BGl_proc3837z00zzintegrate_freez00,
				BGl_string3833z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3838z00zzintegrate_freez00,
				BGl_string3833z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_funcallz00zzast_nodez00, BGl_proc3839z00zzintegrate_freez00,
				BGl_string3833z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_externz00zzast_nodez00, BGl_proc3840z00zzintegrate_freez00,
				BGl_string3833z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00, BGl_castz00zzast_nodez00,
				BGl_proc3841z00zzintegrate_freez00,
				BGl_string3833z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00, BGl_setqz00zzast_nodez00,
				BGl_proc3842z00zzintegrate_freez00,
				BGl_string3833z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3843z00zzintegrate_freez00,
				BGl_string3833z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00, BGl_failz00zzast_nodez00,
				BGl_proc3844z00zzintegrate_freez00,
				BGl_string3833z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_selectz00zzast_nodez00, BGl_proc3845z00zzintegrate_freez00,
				BGl_string3833z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3846z00zzintegrate_freez00,
				BGl_string3833z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3847z00zzintegrate_freez00,
				BGl_string3833z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3848z00zzintegrate_freez00,
				BGl_string3833z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3849z00zzintegrate_freez00,
				BGl_string3833z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3850z00zzintegrate_freez00,
				BGl_string3833z00zzintegrate_freez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3851z00zzintegrate_freez00,
				BGl_string3833z00zzintegrate_freez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2freezd2envz00zzintegrate_freez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3852z00zzintegrate_freez00,
				BGl_string3833z00zzintegrate_freez00);
		}
	}



/* node-free-box-set!3587 */
	obj_t BGl_nodezd2freezd2boxzd2setz123587zc0zzintegrate_freez00(obj_t
		BgL_envz00_2574, obj_t BgL_nodez00_2575, obj_t BgL_freez00_2576)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 271 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1633;

				obj_t BgL_freez00_1634;

				BgL_nodez00_1633 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2575);
				BgL_freez00_1634 = BgL_freez00_2576;
				{	/* Integrate/free.scm 272 */
					BgL_varz00_bglt BgL_arg3771z00_2484;

					obj_t BgL_arg3772z00_2485;

					BgL_arg3771z00_2484 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1633))->BgL_varz00);
					{	/* Integrate/free.scm 272 */
						BgL_nodez00_bglt BgL_arg3773z00_2486;

						BgL_arg3773z00_2486 =
							(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1633))->
							BgL_valuez00);
						{	/* Integrate/free.scm 272 */
							obj_t BgL_method3548z00_2491;

							{	/* Integrate/free.scm 272 */
								BgL_objectz00_bglt BgL_objz00_2492;

								BgL_objz00_2492 = (BgL_objectz00_bglt) (BgL_arg3773z00_2486);
								{	/* Integrate/free.scm 272 */
									long BgL_objzd2classzd2numz00_2493;

									BgL_objzd2classzd2numz00_2493 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2492);
									{	/* Integrate/free.scm 272 */
										obj_t BgL_arg2643z00_2494;

										BgL_arg2643z00_2494 =
											PROCEDURE_REF(BGl_nodezd2freezd2envz00zzintegrate_freez00,
											(int) (((long) 1)));
										{	/* Integrate/free.scm 272 */
											obj_t BgL_arrayz00_2496;

											int BgL_offsetz00_2497;

											BgL_arrayz00_2496 = BgL_arg2643z00_2494;
											BgL_offsetz00_2497 =
												(int) (BgL_objzd2classzd2numz00_2493);
											{	/* Integrate/free.scm 272 */
												long BgL_offsetz00_2498;

												BgL_offsetz00_2498 =
													((long) (BgL_offsetz00_2497) - OBJECT_TYPE);
												{	/* Integrate/free.scm 272 */
													long BgL_modz00_2499;

													{	/* Integrate/free.scm 272 */
														int BgL_arg2645z00_2500;

														BgL_arg2645z00_2500 = (int) (((long) 16));
														{	/* Integrate/free.scm 272 */
															long BgL_auxz00_2904;

															BgL_auxz00_2904 = (long) (BgL_arg2645z00_2500);
															BgL_modz00_2499 =
																(BgL_offsetz00_2498 / BgL_auxz00_2904);
													}}
													{	/* Integrate/free.scm 272 */
														long BgL_restz00_2501;

														{	/* Integrate/free.scm 272 */
															int BgL_arg2644z00_2502;

															BgL_arg2644z00_2502 = (int) (((long) 16));
															{	/* Integrate/free.scm 272 */
																long BgL_auxz00_2908;

																BgL_auxz00_2908 = (long) (BgL_arg2644z00_2502);
																BgL_restz00_2501 =
																	(BgL_offsetz00_2498 % BgL_auxz00_2908);
														}}
														{	/* Integrate/free.scm 272 */

															BgL_method3548z00_2491 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2496,
																	(int) (BgL_modz00_2499)),
																(int) (BgL_restz00_2501));
							}}}}}}}}
							BgL_arg3772z00_2485 =
								PROCEDURE_ENTRY(BgL_method3548z00_2491) (BgL_method3548z00_2491,
								(obj_t) (BgL_arg3773z00_2486), BgL_freez00_1634, BEOA);
					}}
					{	/* Integrate/free.scm 272 */
						BgL_nodez00_bglt BgL_nodez00_2516;

						BgL_nodez00_2516 = (BgL_nodez00_bglt) (BgL_arg3771z00_2484);
						{	/* Integrate/free.scm 272 */
							obj_t BgL_method3548z00_2518;

							{	/* Integrate/free.scm 272 */
								BgL_objectz00_bglt BgL_objz00_2519;

								BgL_objz00_2519 = (BgL_objectz00_bglt) (BgL_nodez00_2516);
								{	/* Integrate/free.scm 272 */
									long BgL_objzd2classzd2numz00_2520;

									BgL_objzd2classzd2numz00_2520 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2519);
									{	/* Integrate/free.scm 272 */
										obj_t BgL_arg2643z00_2521;

										BgL_arg2643z00_2521 =
											PROCEDURE_REF(BGl_nodezd2freezd2envz00zzintegrate_freez00,
											(int) (((long) 1)));
										{	/* Integrate/free.scm 272 */
											obj_t BgL_arrayz00_2523;

											int BgL_offsetz00_2524;

											BgL_arrayz00_2523 = BgL_arg2643z00_2521;
											BgL_offsetz00_2524 =
												(int) (BgL_objzd2classzd2numz00_2520);
											{	/* Integrate/free.scm 272 */
												long BgL_offsetz00_2525;

												BgL_offsetz00_2525 =
													((long) (BgL_offsetz00_2524) - OBJECT_TYPE);
												{	/* Integrate/free.scm 272 */
													long BgL_modz00_2526;

													{	/* Integrate/free.scm 272 */
														int BgL_arg2645z00_2527;

														BgL_arg2645z00_2527 = (int) (((long) 16));
														{	/* Integrate/free.scm 272 */
															long BgL_auxz00_2927;

															BgL_auxz00_2927 = (long) (BgL_arg2645z00_2527);
															BgL_modz00_2526 =
																(BgL_offsetz00_2525 / BgL_auxz00_2927);
													}}
													{	/* Integrate/free.scm 272 */
														long BgL_restz00_2528;

														{	/* Integrate/free.scm 272 */
															int BgL_arg2644z00_2529;

															BgL_arg2644z00_2529 = (int) (((long) 16));
															{	/* Integrate/free.scm 272 */
																long BgL_auxz00_2931;

																BgL_auxz00_2931 = (long) (BgL_arg2644z00_2529);
																BgL_restz00_2528 =
																	(BgL_offsetz00_2525 % BgL_auxz00_2931);
														}}
														{	/* Integrate/free.scm 272 */

															BgL_method3548z00_2518 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2523,
																	(int) (BgL_modz00_2526)),
																(int) (BgL_restz00_2528));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3548z00_2518) (BgL_method3548z00_2518,
								(obj_t) (BgL_nodez00_2516), BgL_arg3772z00_2485, BEOA);
						}
					}
				}
			}
		}
	}



/* node-free-box-ref3585 */
	obj_t BGl_nodezd2freezd2boxzd2ref3585zd2zzintegrate_freez00(obj_t
		BgL_envz00_2577, obj_t BgL_nodez00_2578, obj_t BgL_freez00_2579)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 264 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1625;

				obj_t BgL_freez00_1626;

				BgL_nodez00_1625 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2578);
				BgL_freez00_1626 = BgL_freez00_2579;
				{	/* Integrate/free.scm 265 */
					BgL_varz00_bglt BgL_arg3769z00_2454;

					BgL_arg3769z00_2454 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1625))->BgL_varz00);
					{	/* Integrate/free.scm 265 */
						BgL_nodez00_bglt BgL_nodez00_2456;

						BgL_nodez00_2456 = (BgL_nodez00_bglt) (BgL_arg3769z00_2454);
						{	/* Integrate/free.scm 265 */
							obj_t BgL_method3548z00_2458;

							{	/* Integrate/free.scm 265 */
								BgL_objectz00_bglt BgL_objz00_2459;

								BgL_objz00_2459 = (BgL_objectz00_bglt) (BgL_nodez00_2456);
								{	/* Integrate/free.scm 265 */
									long BgL_objzd2classzd2numz00_2460;

									BgL_objzd2classzd2numz00_2460 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2459);
									{	/* Integrate/free.scm 265 */
										obj_t BgL_arg2643z00_2461;

										BgL_arg2643z00_2461 =
											PROCEDURE_REF(BGl_nodezd2freezd2envz00zzintegrate_freez00,
											(int) (((long) 1)));
										{	/* Integrate/free.scm 265 */
											obj_t BgL_arrayz00_2463;

											int BgL_offsetz00_2464;

											BgL_arrayz00_2463 = BgL_arg2643z00_2461;
											BgL_offsetz00_2464 =
												(int) (BgL_objzd2classzd2numz00_2460);
											{	/* Integrate/free.scm 265 */
												long BgL_offsetz00_2465;

												BgL_offsetz00_2465 =
													((long) (BgL_offsetz00_2464) - OBJECT_TYPE);
												{	/* Integrate/free.scm 265 */
													long BgL_modz00_2466;

													{	/* Integrate/free.scm 265 */
														int BgL_arg2645z00_2467;

														BgL_arg2645z00_2467 = (int) (((long) 16));
														{	/* Integrate/free.scm 265 */
															long BgL_auxz00_2952;

															BgL_auxz00_2952 = (long) (BgL_arg2645z00_2467);
															BgL_modz00_2466 =
																(BgL_offsetz00_2465 / BgL_auxz00_2952);
													}}
													{	/* Integrate/free.scm 265 */
														long BgL_restz00_2468;

														{	/* Integrate/free.scm 265 */
															int BgL_arg2644z00_2469;

															BgL_arg2644z00_2469 = (int) (((long) 16));
															{	/* Integrate/free.scm 265 */
																long BgL_auxz00_2956;

																BgL_auxz00_2956 = (long) (BgL_arg2644z00_2469);
																BgL_restz00_2468 =
																	(BgL_offsetz00_2465 % BgL_auxz00_2956);
														}}
														{	/* Integrate/free.scm 265 */

															BgL_method3548z00_2458 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2463,
																	(int) (BgL_modz00_2466)),
																(int) (BgL_restz00_2468));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3548z00_2458) (BgL_method3548z00_2458,
								(obj_t) (BgL_nodez00_2456), BgL_freez00_1626, BEOA);
						}
					}
				}
			}
		}
	}



/* node-free-make-box3583 */
	obj_t BGl_nodezd2freezd2makezd2box3583zd2zzintegrate_freez00(obj_t
		BgL_envz00_2580, obj_t BgL_nodez00_2581, obj_t BgL_freez00_2582)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 257 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1617;

				obj_t BgL_freez00_1618;

				BgL_nodez00_1617 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2581);
				BgL_freez00_1618 = BgL_freez00_2582;
				{	/* Integrate/free.scm 258 */
					BgL_nodez00_bglt BgL_arg3767z00_2424;

					BgL_arg3767z00_2424 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1617))->BgL_valuez00);
					{	/* Integrate/free.scm 258 */
						obj_t BgL_method3548z00_2428;

						{	/* Integrate/free.scm 258 */
							BgL_objectz00_bglt BgL_objz00_2429;

							BgL_objz00_2429 = (BgL_objectz00_bglt) (BgL_arg3767z00_2424);
							{	/* Integrate/free.scm 258 */
								long BgL_objzd2classzd2numz00_2430;

								BgL_objzd2classzd2numz00_2430 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2429);
								{	/* Integrate/free.scm 258 */
									obj_t BgL_arg2643z00_2431;

									BgL_arg2643z00_2431 =
										PROCEDURE_REF(BGl_nodezd2freezd2envz00zzintegrate_freez00,
										(int) (((long) 1)));
									{	/* Integrate/free.scm 258 */
										obj_t BgL_arrayz00_2433;

										int BgL_offsetz00_2434;

										BgL_arrayz00_2433 = BgL_arg2643z00_2431;
										BgL_offsetz00_2434 = (int) (BgL_objzd2classzd2numz00_2430);
										{	/* Integrate/free.scm 258 */
											long BgL_offsetz00_2435;

											BgL_offsetz00_2435 =
												((long) (BgL_offsetz00_2434) - OBJECT_TYPE);
											{	/* Integrate/free.scm 258 */
												long BgL_modz00_2436;

												{	/* Integrate/free.scm 258 */
													int BgL_arg2645z00_2437;

													BgL_arg2645z00_2437 = (int) (((long) 16));
													{	/* Integrate/free.scm 258 */
														long BgL_auxz00_2976;

														BgL_auxz00_2976 = (long) (BgL_arg2645z00_2437);
														BgL_modz00_2436 =
															(BgL_offsetz00_2435 / BgL_auxz00_2976);
												}}
												{	/* Integrate/free.scm 258 */
													long BgL_restz00_2438;

													{	/* Integrate/free.scm 258 */
														int BgL_arg2644z00_2439;

														BgL_arg2644z00_2439 = (int) (((long) 16));
														{	/* Integrate/free.scm 258 */
															long BgL_auxz00_2980;

															BgL_auxz00_2980 = (long) (BgL_arg2644z00_2439);
															BgL_restz00_2438 =
																(BgL_offsetz00_2435 % BgL_auxz00_2980);
													}}
													{	/* Integrate/free.scm 258 */

														BgL_method3548z00_2428 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2433,
																(int) (BgL_modz00_2436)),
															(int) (BgL_restz00_2438));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3548z00_2428) (BgL_method3548z00_2428,
							(obj_t) (BgL_arg3767z00_2424), BgL_freez00_1618, BEOA);
					}
				}
			}
		}
	}



/* node-free-jump-ex-it3581 */
	obj_t BGl_nodezd2freezd2jumpzd2exzd2it3581z00zzintegrate_freez00(obj_t
		BgL_envz00_2583, obj_t BgL_nodez00_2584, obj_t BgL_freez00_2585)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 250 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1607;

				obj_t BgL_freez00_1608;

				BgL_nodez00_1607 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2584);
				BgL_freez00_1608 = BgL_freez00_2585;
				{	/* Integrate/free.scm 251 */
					BgL_nodez00_bglt BgL_arg3763z00_2364;

					obj_t BgL_arg3764z00_2365;

					BgL_arg3763z00_2364 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1607))->
						BgL_exitz00);
					{	/* Integrate/free.scm 251 */
						BgL_nodez00_bglt BgL_arg3765z00_2366;

						BgL_arg3765z00_2366 =
							(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1607))->
							BgL_valuez00);
						{	/* Integrate/free.scm 251 */
							obj_t BgL_method3548z00_2371;

							{	/* Integrate/free.scm 251 */
								BgL_objectz00_bglt BgL_objz00_2372;

								BgL_objz00_2372 = (BgL_objectz00_bglt) (BgL_arg3765z00_2366);
								{	/* Integrate/free.scm 251 */
									long BgL_objzd2classzd2numz00_2373;

									BgL_objzd2classzd2numz00_2373 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2372);
									{	/* Integrate/free.scm 251 */
										obj_t BgL_arg2643z00_2374;

										BgL_arg2643z00_2374 =
											PROCEDURE_REF(BGl_nodezd2freezd2envz00zzintegrate_freez00,
											(int) (((long) 1)));
										{	/* Integrate/free.scm 251 */
											obj_t BgL_arrayz00_2376;

											int BgL_offsetz00_2377;

											BgL_arrayz00_2376 = BgL_arg2643z00_2374;
											BgL_offsetz00_2377 =
												(int) (BgL_objzd2classzd2numz00_2373);
											{	/* Integrate/free.scm 251 */
												long BgL_offsetz00_2378;

												BgL_offsetz00_2378 =
													((long) (BgL_offsetz00_2377) - OBJECT_TYPE);
												{	/* Integrate/free.scm 251 */
													long BgL_modz00_2379;

													{	/* Integrate/free.scm 251 */
														int BgL_arg2645z00_2380;

														BgL_arg2645z00_2380 = (int) (((long) 16));
														{	/* Integrate/free.scm 251 */
															long BgL_auxz00_3001;

															BgL_auxz00_3001 = (long) (BgL_arg2645z00_2380);
															BgL_modz00_2379 =
																(BgL_offsetz00_2378 / BgL_auxz00_3001);
													}}
													{	/* Integrate/free.scm 251 */
														long BgL_restz00_2381;

														{	/* Integrate/free.scm 251 */
															int BgL_arg2644z00_2382;

															BgL_arg2644z00_2382 = (int) (((long) 16));
															{	/* Integrate/free.scm 251 */
																long BgL_auxz00_3005;

																BgL_auxz00_3005 = (long) (BgL_arg2644z00_2382);
																BgL_restz00_2381 =
																	(BgL_offsetz00_2378 % BgL_auxz00_3005);
														}}
														{	/* Integrate/free.scm 251 */

															BgL_method3548z00_2371 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2376,
																	(int) (BgL_modz00_2379)),
																(int) (BgL_restz00_2381));
							}}}}}}}}
							BgL_arg3764z00_2365 =
								PROCEDURE_ENTRY(BgL_method3548z00_2371) (BgL_method3548z00_2371,
								(obj_t) (BgL_arg3765z00_2366), BgL_freez00_1608, BEOA);
					}}
					{	/* Integrate/free.scm 251 */
						obj_t BgL_method3548z00_2398;

						{	/* Integrate/free.scm 251 */
							BgL_objectz00_bglt BgL_objz00_2399;

							BgL_objz00_2399 = (BgL_objectz00_bglt) (BgL_arg3763z00_2364);
							{	/* Integrate/free.scm 251 */
								long BgL_objzd2classzd2numz00_2400;

								BgL_objzd2classzd2numz00_2400 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2399);
								{	/* Integrate/free.scm 251 */
									obj_t BgL_arg2643z00_2401;

									BgL_arg2643z00_2401 =
										PROCEDURE_REF(BGl_nodezd2freezd2envz00zzintegrate_freez00,
										(int) (((long) 1)));
									{	/* Integrate/free.scm 251 */
										obj_t BgL_arrayz00_2403;

										int BgL_offsetz00_2404;

										BgL_arrayz00_2403 = BgL_arg2643z00_2401;
										BgL_offsetz00_2404 = (int) (BgL_objzd2classzd2numz00_2400);
										{	/* Integrate/free.scm 251 */
											long BgL_offsetz00_2405;

											BgL_offsetz00_2405 =
												((long) (BgL_offsetz00_2404) - OBJECT_TYPE);
											{	/* Integrate/free.scm 251 */
												long BgL_modz00_2406;

												{	/* Integrate/free.scm 251 */
													int BgL_arg2645z00_2407;

													BgL_arg2645z00_2407 = (int) (((long) 16));
													{	/* Integrate/free.scm 251 */
														long BgL_auxz00_3023;

														BgL_auxz00_3023 = (long) (BgL_arg2645z00_2407);
														BgL_modz00_2406 =
															(BgL_offsetz00_2405 / BgL_auxz00_3023);
												}}
												{	/* Integrate/free.scm 251 */
													long BgL_restz00_2408;

													{	/* Integrate/free.scm 251 */
														int BgL_arg2644z00_2409;

														BgL_arg2644z00_2409 = (int) (((long) 16));
														{	/* Integrate/free.scm 251 */
															long BgL_auxz00_3027;

															BgL_auxz00_3027 = (long) (BgL_arg2644z00_2409);
															BgL_restz00_2408 =
																(BgL_offsetz00_2405 % BgL_auxz00_3027);
													}}
													{	/* Integrate/free.scm 251 */

														BgL_method3548z00_2398 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2403,
																(int) (BgL_modz00_2406)),
															(int) (BgL_restz00_2408));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3548z00_2398) (BgL_method3548z00_2398,
							(obj_t) (BgL_arg3763z00_2364), BgL_arg3764z00_2365, BEOA);
					}
				}
			}
		}
	}



/* node-free-set-ex-it3579 */
	obj_t BGl_nodezd2freezd2setzd2exzd2it3579z00zzintegrate_freez00(obj_t
		BgL_envz00_2586, obj_t BgL_nodez00_2587, obj_t BgL_freez00_2588)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 242 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1597;

				obj_t BgL_freez00_1598;

				BgL_nodez00_1597 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2587);
				BgL_freez00_1598 = BgL_freez00_2588;
				{	/* Integrate/free.scm 244 */
					BgL_variablez00_bglt BgL_arg3759z00_1602;

					{	/* Integrate/free.scm 244 */
						BgL_varz00_bglt BgL_obj2155z00_2334;

						BgL_obj2155z00_2334 =
							(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1597))->
							BgL_varz00);
						BgL_arg3759z00_1602 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2334))->BgL_variablez00);
					}
					BGl_bindzd2variablez12zc0zzintegrate_freez00(
						(BgL_localz00_bglt) (BgL_arg3759z00_1602),
						(BgL_localz00_bglt) (BGl_za2integratorza2z00zzintegrate_freez00));
				}
				{	/* Integrate/free.scm 245 */
					BgL_nodez00_bglt BgL_arg3761z00_1604;

					BgL_arg3761z00_1604 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1597))->BgL_bodyz00);
					{	/* Integrate/free.scm 245 */
						obj_t BgL_method3548z00_2338;

						{	/* Integrate/free.scm 245 */
							BgL_objectz00_bglt BgL_objz00_2339;

							BgL_objz00_2339 = (BgL_objectz00_bglt) (BgL_arg3761z00_1604);
							{	/* Integrate/free.scm 245 */
								long BgL_objzd2classzd2numz00_2340;

								BgL_objzd2classzd2numz00_2340 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2339);
								{	/* Integrate/free.scm 245 */
									obj_t BgL_arg2643z00_2341;

									BgL_arg2643z00_2341 =
										PROCEDURE_REF(BGl_nodezd2freezd2envz00zzintegrate_freez00,
										(int) (((long) 1)));
									{	/* Integrate/free.scm 245 */
										obj_t BgL_arrayz00_2343;

										int BgL_offsetz00_2344;

										BgL_arrayz00_2343 = BgL_arg2643z00_2341;
										BgL_offsetz00_2344 = (int) (BgL_objzd2classzd2numz00_2340);
										{	/* Integrate/free.scm 245 */
											long BgL_offsetz00_2345;

											BgL_offsetz00_2345 =
												((long) (BgL_offsetz00_2344) - OBJECT_TYPE);
											{	/* Integrate/free.scm 245 */
												long BgL_modz00_2346;

												{	/* Integrate/free.scm 245 */
													int BgL_arg2645z00_2347;

													BgL_arg2645z00_2347 = (int) (((long) 16));
													{	/* Integrate/free.scm 245 */
														long BgL_auxz00_3052;

														BgL_auxz00_3052 = (long) (BgL_arg2645z00_2347);
														BgL_modz00_2346 =
															(BgL_offsetz00_2345 / BgL_auxz00_3052);
												}}
												{	/* Integrate/free.scm 245 */
													long BgL_restz00_2348;

													{	/* Integrate/free.scm 245 */
														int BgL_arg2644z00_2349;

														BgL_arg2644z00_2349 = (int) (((long) 16));
														{	/* Integrate/free.scm 245 */
															long BgL_auxz00_3056;

															BgL_auxz00_3056 = (long) (BgL_arg2644z00_2349);
															BgL_restz00_2348 =
																(BgL_offsetz00_2345 % BgL_auxz00_3056);
													}}
													{	/* Integrate/free.scm 245 */

														BgL_method3548z00_2338 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2343,
																(int) (BgL_modz00_2346)),
															(int) (BgL_restz00_2348));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3548z00_2338) (BgL_method3548z00_2338,
							(obj_t) (BgL_arg3761z00_1604), BgL_freez00_1598, BEOA);
					}
				}
			}
		}
	}



/* node-free-let-var3577 */
	obj_t BGl_nodezd2freezd2letzd2var3577zd2zzintegrate_freez00(obj_t
		BgL_envz00_2589, obj_t BgL_nodez00_2590, obj_t BgL_freez00_2591)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 228 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1576;

				obj_t BgL_freez00_1577;

				BgL_nodez00_1576 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2590);
				BgL_freez00_1577 = BgL_freez00_2591;
				{
					obj_t BgL_bindingsz00_1583;

					obj_t BgL_freez00_1584;

					{	/* Integrate/free.scm 230 */
						obj_t BgL_arg3748z00_1582;

						BgL_arg3748z00_1582 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1576))->
							BgL_bindingsz00);
						BgL_bindingsz00_1583 = BgL_arg3748z00_1582;
						BgL_freez00_1584 = BgL_freez00_1577;
					BgL_zc3anonymousza33749ze3z83_1585:
						if (NULLP(BgL_bindingsz00_1583))
							{	/* Integrate/free.scm 233 */
								BgL_nodez00_bglt BgL_arg3751z00_1587;

								BgL_arg3751z00_1587 =
									(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1576))->
									BgL_bodyz00);
								{	/* Integrate/free.scm 233 */
									obj_t BgL_method3548z00_2276;

									{	/* Integrate/free.scm 233 */
										BgL_objectz00_bglt BgL_objz00_2277;

										BgL_objz00_2277 =
											(BgL_objectz00_bglt) (BgL_arg3751z00_1587);
										{	/* Integrate/free.scm 233 */
											long BgL_objzd2classzd2numz00_2278;

											BgL_objzd2classzd2numz00_2278 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2277);
											{	/* Integrate/free.scm 233 */
												obj_t BgL_arg2643z00_2279;

												BgL_arg2643z00_2279 =
													PROCEDURE_REF
													(BGl_nodezd2freezd2envz00zzintegrate_freez00,
													(int) (((long) 1)));
												{	/* Integrate/free.scm 233 */
													obj_t BgL_arrayz00_2281;

													int BgL_offsetz00_2282;

													BgL_arrayz00_2281 = BgL_arg2643z00_2279;
													BgL_offsetz00_2282 =
														(int) (BgL_objzd2classzd2numz00_2278);
													{	/* Integrate/free.scm 233 */
														long BgL_offsetz00_2283;

														BgL_offsetz00_2283 =
															((long) (BgL_offsetz00_2282) - OBJECT_TYPE);
														{	/* Integrate/free.scm 233 */
															long BgL_modz00_2284;

															{	/* Integrate/free.scm 233 */
																int BgL_arg2645z00_2285;

																BgL_arg2645z00_2285 = (int) (((long) 16));
																{	/* Integrate/free.scm 233 */
																	long BgL_auxz00_3079;

																	BgL_auxz00_3079 =
																		(long) (BgL_arg2645z00_2285);
																	BgL_modz00_2284 =
																		(BgL_offsetz00_2283 / BgL_auxz00_3079);
															}}
															{	/* Integrate/free.scm 233 */
																long BgL_restz00_2286;

																{	/* Integrate/free.scm 233 */
																	int BgL_arg2644z00_2287;

																	BgL_arg2644z00_2287 = (int) (((long) 16));
																	{	/* Integrate/free.scm 233 */
																		long BgL_auxz00_3083;

																		BgL_auxz00_3083 =
																			(long) (BgL_arg2644z00_2287);
																		BgL_restz00_2286 =
																			(BgL_offsetz00_2283 % BgL_auxz00_3083);
																}}
																{	/* Integrate/free.scm 233 */

																	BgL_method3548z00_2276 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2281,
																			(int) (BgL_modz00_2284)),
																		(int) (BgL_restz00_2286));
									}}}}}}}}
									return
										PROCEDURE_ENTRY(BgL_method3548z00_2276)
										(BgL_method3548z00_2276, (obj_t) (BgL_arg3751z00_1587),
										BgL_freez00_1584, BEOA);
								}
							}
						else
							{	/* Integrate/free.scm 232 */
								{	/* Integrate/free.scm 235 */
									obj_t BgL_arg3752z00_1588;

									BgL_arg3752z00_1588 = CAR(CAR(BgL_bindingsz00_1583));
									BGl_bindzd2variablez12zc0zzintegrate_freez00(
										(BgL_localz00_bglt) (BgL_arg3752z00_1588),
										(BgL_localz00_bglt)
										(BGl_za2integratorza2z00zzintegrate_freez00));
								}
								{	/* Integrate/free.scm 236 */
									obj_t BgL_arg3754z00_1590;

									obj_t BgL_arg3755z00_1591;

									BgL_arg3754z00_1590 = CDR(BgL_bindingsz00_1583);
									{	/* Integrate/free.scm 237 */
										obj_t BgL_arg3756z00_1592;

										BgL_arg3756z00_1592 = CDR(CAR(BgL_bindingsz00_1583));
										{	/* Integrate/free.scm 237 */
											BgL_nodez00_bglt BgL_nodez00_2306;

											BgL_nodez00_2306 =
												(BgL_nodez00_bglt) (BgL_arg3756z00_1592);
											{	/* Integrate/free.scm 237 */
												obj_t BgL_method3548z00_2308;

												{	/* Integrate/free.scm 237 */
													BgL_objectz00_bglt BgL_objz00_2309;

													BgL_objz00_2309 =
														(BgL_objectz00_bglt) (BgL_nodez00_2306);
													{	/* Integrate/free.scm 237 */
														long BgL_objzd2classzd2numz00_2310;

														BgL_objzd2classzd2numz00_2310 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2309);
														{	/* Integrate/free.scm 237 */
															obj_t BgL_arg2643z00_2311;

															BgL_arg2643z00_2311 =
																PROCEDURE_REF
																(BGl_nodezd2freezd2envz00zzintegrate_freez00,
																(int) (((long) 1)));
															{	/* Integrate/free.scm 237 */
																obj_t BgL_arrayz00_2313;

																int BgL_offsetz00_2314;

																BgL_arrayz00_2313 = BgL_arg2643z00_2311;
																BgL_offsetz00_2314 =
																	(int) (BgL_objzd2classzd2numz00_2310);
																{	/* Integrate/free.scm 237 */
																	long BgL_offsetz00_2315;

																	BgL_offsetz00_2315 =
																		((long) (BgL_offsetz00_2314) - OBJECT_TYPE);
																	{	/* Integrate/free.scm 237 */
																		long BgL_modz00_2316;

																		{	/* Integrate/free.scm 237 */
																			int BgL_arg2645z00_2317;

																			BgL_arg2645z00_2317 = (int) (((long) 16));
																			{	/* Integrate/free.scm 237 */
																				long BgL_auxz00_3110;

																				BgL_auxz00_3110 =
																					(long) (BgL_arg2645z00_2317);
																				BgL_modz00_2316 =
																					(BgL_offsetz00_2315 /
																					BgL_auxz00_3110);
																		}}
																		{	/* Integrate/free.scm 237 */
																			long BgL_restz00_2318;

																			{	/* Integrate/free.scm 237 */
																				int BgL_arg2644z00_2319;

																				BgL_arg2644z00_2319 =
																					(int) (((long) 16));
																				{	/* Integrate/free.scm 237 */
																					long BgL_auxz00_3114;

																					BgL_auxz00_3114 =
																						(long) (BgL_arg2644z00_2319);
																					BgL_restz00_2318 =
																						(BgL_offsetz00_2315 %
																						BgL_auxz00_3114);
																			}}
																			{	/* Integrate/free.scm 237 */

																				BgL_method3548z00_2308 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2313,
																						(int) (BgL_modz00_2316)),
																					(int) (BgL_restz00_2318));
												}}}}}}}}
												BgL_arg3755z00_1591 =
													PROCEDURE_ENTRY(BgL_method3548z00_2308)
													(BgL_method3548z00_2308, (obj_t) (BgL_nodez00_2306),
													BgL_freez00_1584, BEOA);
									}}}
									{
										obj_t BgL_freez00_3125;

										obj_t BgL_bindingsz00_3124;

										BgL_bindingsz00_3124 = BgL_arg3754z00_1590;
										BgL_freez00_3125 = BgL_arg3755z00_1591;
										BgL_freez00_1584 = BgL_freez00_3125;
										BgL_bindingsz00_1583 = BgL_bindingsz00_3124;
										goto BgL_zc3anonymousza33749ze3z83_1585;
									}
								}
							}
					}
				}
			}
		}
	}



/* node-free-let-fun3575 */
	obj_t BGl_nodezd2freezd2letzd2fun3575zd2zzintegrate_freez00(obj_t
		BgL_envz00_2592, obj_t BgL_nodez00_2593, obj_t BgL_freez00_2594)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 211 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1548;

				obj_t BgL_freez00_1549;

				BgL_nodez00_1548 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2593);
				BgL_freez00_1549 = BgL_freez00_2594;
				{	/* Integrate/free.scm 214 */
					obj_t BgL_g3519z00_1553;

					BgL_g3519z00_1553 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1548))->BgL_localsz00);
					{
						obj_t BgL_localsz00_1555;

						obj_t BgL_freez00_1556;

						BgL_localsz00_1555 = BgL_g3519z00_1553;
						BgL_freez00_1556 = BgL_freez00_1549;
					BgL_zc3anonymousza33736ze3z83_1557:
						if (NULLP(BgL_localsz00_1555))
							{	/* Integrate/free.scm 217 */
								BgL_nodez00_bglt BgL_arg3738z00_1559;

								BgL_arg3738z00_1559 =
									(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1548))->
									BgL_bodyz00);
								{	/* Integrate/free.scm 217 */
									obj_t BgL_method3548z00_2211;

									{	/* Integrate/free.scm 217 */
										BgL_objectz00_bglt BgL_objz00_2212;

										BgL_objz00_2212 =
											(BgL_objectz00_bglt) (BgL_arg3738z00_1559);
										{	/* Integrate/free.scm 217 */
											long BgL_objzd2classzd2numz00_2213;

											BgL_objzd2classzd2numz00_2213 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2212);
											{	/* Integrate/free.scm 217 */
												obj_t BgL_arg2643z00_2214;

												BgL_arg2643z00_2214 =
													PROCEDURE_REF
													(BGl_nodezd2freezd2envz00zzintegrate_freez00,
													(int) (((long) 1)));
												{	/* Integrate/free.scm 217 */
													obj_t BgL_arrayz00_2216;

													int BgL_offsetz00_2217;

													BgL_arrayz00_2216 = BgL_arg2643z00_2214;
													BgL_offsetz00_2217 =
														(int) (BgL_objzd2classzd2numz00_2213);
													{	/* Integrate/free.scm 217 */
														long BgL_offsetz00_2218;

														BgL_offsetz00_2218 =
															((long) (BgL_offsetz00_2217) - OBJECT_TYPE);
														{	/* Integrate/free.scm 217 */
															long BgL_modz00_2219;

															{	/* Integrate/free.scm 217 */
																int BgL_arg2645z00_2220;

																BgL_arg2645z00_2220 = (int) (((long) 16));
																{	/* Integrate/free.scm 217 */
																	long BgL_auxz00_3139;

																	BgL_auxz00_3139 =
																		(long) (BgL_arg2645z00_2220);
																	BgL_modz00_2219 =
																		(BgL_offsetz00_2218 / BgL_auxz00_3139);
															}}
															{	/* Integrate/free.scm 217 */
																long BgL_restz00_2221;

																{	/* Integrate/free.scm 217 */
																	int BgL_arg2644z00_2222;

																	BgL_arg2644z00_2222 = (int) (((long) 16));
																	{	/* Integrate/free.scm 217 */
																		long BgL_auxz00_3143;

																		BgL_auxz00_3143 =
																			(long) (BgL_arg2644z00_2222);
																		BgL_restz00_2221 =
																			(BgL_offsetz00_2218 % BgL_auxz00_3143);
																}}
																{	/* Integrate/free.scm 217 */

																	BgL_method3548z00_2211 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2216,
																			(int) (BgL_modz00_2219)),
																		(int) (BgL_restz00_2221));
									}}}}}}}}
									return
										PROCEDURE_ENTRY(BgL_method3548z00_2211)
										(BgL_method3548z00_2211, (obj_t) (BgL_arg3738z00_1559),
										BgL_freez00_1556, BEOA);
								}
							}
						else
							{	/* Integrate/free.scm 218 */
								obj_t BgL_localz00_1560;

								BgL_localz00_1560 = CAR(BgL_localsz00_1555);
								{	/* Integrate/free.scm 218 */
									BgL_valuez00_bglt BgL_funz00_1561;

									{
										BgL_variablez00_bglt BgL_auxz00_3154;

										BgL_auxz00_3154 =
											(BgL_variablez00_bglt) (BgL_localz00_1560);
										BgL_funz00_1561 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_3154))->
											BgL_valuez00);
									}
									{	/* Integrate/free.scm 219 */

										{	/* Integrate/free.scm 220 */
											obj_t BgL_g3538z00_1562;

											{
												BgL_sfunz00_bglt BgL_auxz00_3157;

												BgL_auxz00_3157 = (BgL_sfunz00_bglt) (BgL_funz00_1561);
												BgL_g3538z00_1562 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3157))->
													BgL_argsz00);
											}
											{
												obj_t BgL_l3536z00_1564;

												BgL_l3536z00_1564 = BgL_g3538z00_1562;
											BgL_zc3anonymousza33739ze3z83_1565:
												if (PAIRP(BgL_l3536z00_1564))
													{	/* Integrate/free.scm 221 */
														{	/* Integrate/free.scm 220 */
															obj_t BgL_lz00_1567;

															BgL_lz00_1567 = CAR(BgL_l3536z00_1564);
															BGl_bindzd2variablez12zc0zzintegrate_freez00(
																(BgL_localz00_bglt) (BgL_lz00_1567),
																(BgL_localz00_bglt)
																(BGl_za2integratorza2z00zzintegrate_freez00));
														}
														{
															obj_t BgL_l3536z00_3166;

															BgL_l3536z00_3166 = CDR(BgL_l3536z00_1564);
															BgL_l3536z00_1564 = BgL_l3536z00_3166;
															goto BgL_zc3anonymousza33739ze3z83_1565;
														}
													}
												else
													{	/* Integrate/free.scm 221 */
														((bool_t) 1);
													}
											}
										}
										{	/* Integrate/free.scm 222 */
											obj_t BgL_arg3742z00_1570;

											obj_t BgL_arg3745z00_1571;

											BgL_arg3742z00_1570 = CDR(BgL_localsz00_1555);
											{	/* Integrate/free.scm 223 */
												obj_t BgL_arg3746z00_1572;

												{
													BgL_sfunz00_bglt BgL_auxz00_3169;

													BgL_auxz00_3169 =
														(BgL_sfunz00_bglt) (BgL_funz00_1561);
													BgL_arg3746z00_1572 =
														(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3169))->
														BgL_bodyz00);
												}
												{	/* Integrate/free.scm 223 */
													BgL_nodez00_bglt BgL_nodez00_2244;

													BgL_nodez00_2244 =
														(BgL_nodez00_bglt) (BgL_arg3746z00_1572);
													{	/* Integrate/free.scm 223 */
														obj_t BgL_method3548z00_2246;

														{	/* Integrate/free.scm 223 */
															BgL_objectz00_bglt BgL_objz00_2247;

															BgL_objz00_2247 =
																(BgL_objectz00_bglt) (BgL_nodez00_2244);
															{	/* Integrate/free.scm 223 */
																long BgL_objzd2classzd2numz00_2248;

																BgL_objzd2classzd2numz00_2248 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2247);
																{	/* Integrate/free.scm 223 */
																	obj_t BgL_arg2643z00_2249;

																	BgL_arg2643z00_2249 =
																		PROCEDURE_REF
																		(BGl_nodezd2freezd2envz00zzintegrate_freez00,
																		(int) (((long) 1)));
																	{	/* Integrate/free.scm 223 */
																		obj_t BgL_arrayz00_2251;

																		int BgL_offsetz00_2252;

																		BgL_arrayz00_2251 = BgL_arg2643z00_2249;
																		BgL_offsetz00_2252 =
																			(int) (BgL_objzd2classzd2numz00_2248);
																		{	/* Integrate/free.scm 223 */
																			long BgL_offsetz00_2253;

																			BgL_offsetz00_2253 =
																				(
																				(long) (BgL_offsetz00_2252) -
																				OBJECT_TYPE);
																			{	/* Integrate/free.scm 223 */
																				long BgL_modz00_2254;

																				{	/* Integrate/free.scm 223 */
																					int BgL_arg2645z00_2255;

																					BgL_arg2645z00_2255 =
																						(int) (((long) 16));
																					{	/* Integrate/free.scm 223 */
																						long BgL_auxz00_3181;

																						BgL_auxz00_3181 =
																							(long) (BgL_arg2645z00_2255);
																						BgL_modz00_2254 =
																							(BgL_offsetz00_2253 /
																							BgL_auxz00_3181);
																				}}
																				{	/* Integrate/free.scm 223 */
																					long BgL_restz00_2256;

																					{	/* Integrate/free.scm 223 */
																						int BgL_arg2644z00_2257;

																						BgL_arg2644z00_2257 =
																							(int) (((long) 16));
																						{	/* Integrate/free.scm 223 */
																							long BgL_auxz00_3185;

																							BgL_auxz00_3185 =
																								(long) (BgL_arg2644z00_2257);
																							BgL_restz00_2256 =
																								(BgL_offsetz00_2253 %
																								BgL_auxz00_3185);
																					}}
																					{	/* Integrate/free.scm 223 */

																						BgL_method3548z00_2246 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2251,
																								(int) (BgL_modz00_2254)),
																							(int) (BgL_restz00_2256));
														}}}}}}}}
														BgL_arg3745z00_1571 =
															PROCEDURE_ENTRY(BgL_method3548z00_2246)
															(BgL_method3548z00_2246,
															(obj_t) (BgL_nodez00_2244), BgL_freez00_1556,
															BEOA);
											}}}
											{
												obj_t BgL_freez00_3196;

												obj_t BgL_localsz00_3195;

												BgL_localsz00_3195 = BgL_arg3742z00_1570;
												BgL_freez00_3196 = BgL_arg3745z00_1571;
												BgL_freez00_1556 = BgL_freez00_3196;
												BgL_localsz00_1555 = BgL_localsz00_3195;
												goto BgL_zc3anonymousza33736ze3z83_1557;
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



/* node-free-select3573 */
	obj_t BGl_nodezd2freezd2select3573z00zzintegrate_freez00(obj_t
		BgL_envz00_2595, obj_t BgL_nodez00_2596, obj_t BgL_freez00_2597)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 200 */
			{
				BgL_selectz00_bglt BgL_nodez00_1529;

				obj_t BgL_freez00_1530;

				BgL_nodez00_1529 = (BgL_selectz00_bglt) (BgL_nodez00_2596);
				BgL_freez00_1530 = BgL_freez00_2597;
				{
					obj_t BgL_clausesz00_1536;

					obj_t BgL_freez00_1537;

					{	/* Integrate/free.scm 202 */
						obj_t BgL_arg3727z00_1535;

						BgL_arg3727z00_1535 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1529))->BgL_clausesz00);
						BgL_clausesz00_1536 = BgL_arg3727z00_1535;
						BgL_freez00_1537 = BgL_freez00_1530;
					BgL_zc3anonymousza33728ze3z83_1538:
						if (NULLP(BgL_clausesz00_1536))
							{	/* Integrate/free.scm 205 */
								BgL_nodez00_bglt BgL_arg3730z00_1540;

								BgL_arg3730z00_1540 =
									(((BgL_selectz00_bglt) CREF(BgL_nodez00_1529))->BgL_testz00);
								{	/* Integrate/free.scm 205 */
									obj_t BgL_method3548z00_2151;

									{	/* Integrate/free.scm 205 */
										BgL_objectz00_bglt BgL_objz00_2152;

										BgL_objz00_2152 =
											(BgL_objectz00_bglt) (BgL_arg3730z00_1540);
										{	/* Integrate/free.scm 205 */
											long BgL_objzd2classzd2numz00_2153;

											BgL_objzd2classzd2numz00_2153 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2152);
											{	/* Integrate/free.scm 205 */
												obj_t BgL_arg2643z00_2154;

												BgL_arg2643z00_2154 =
													PROCEDURE_REF
													(BGl_nodezd2freezd2envz00zzintegrate_freez00,
													(int) (((long) 1)));
												{	/* Integrate/free.scm 205 */
													obj_t BgL_arrayz00_2156;

													int BgL_offsetz00_2157;

													BgL_arrayz00_2156 = BgL_arg2643z00_2154;
													BgL_offsetz00_2157 =
														(int) (BgL_objzd2classzd2numz00_2153);
													{	/* Integrate/free.scm 205 */
														long BgL_offsetz00_2158;

														BgL_offsetz00_2158 =
															((long) (BgL_offsetz00_2157) - OBJECT_TYPE);
														{	/* Integrate/free.scm 205 */
															long BgL_modz00_2159;

															{	/* Integrate/free.scm 205 */
																int BgL_arg2645z00_2160;

																BgL_arg2645z00_2160 = (int) (((long) 16));
																{	/* Integrate/free.scm 205 */
																	long BgL_auxz00_3210;

																	BgL_auxz00_3210 =
																		(long) (BgL_arg2645z00_2160);
																	BgL_modz00_2159 =
																		(BgL_offsetz00_2158 / BgL_auxz00_3210);
															}}
															{	/* Integrate/free.scm 205 */
																long BgL_restz00_2161;

																{	/* Integrate/free.scm 205 */
																	int BgL_arg2644z00_2162;

																	BgL_arg2644z00_2162 = (int) (((long) 16));
																	{	/* Integrate/free.scm 205 */
																		long BgL_auxz00_3214;

																		BgL_auxz00_3214 =
																			(long) (BgL_arg2644z00_2162);
																		BgL_restz00_2161 =
																			(BgL_offsetz00_2158 % BgL_auxz00_3214);
																}}
																{	/* Integrate/free.scm 205 */

																	BgL_method3548z00_2151 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2156,
																			(int) (BgL_modz00_2159)),
																		(int) (BgL_restz00_2161));
									}}}}}}}}
									return
										PROCEDURE_ENTRY(BgL_method3548z00_2151)
										(BgL_method3548z00_2151, (obj_t) (BgL_arg3730z00_1540),
										BgL_freez00_1537, BEOA);
								}
							}
						else
							{	/* Integrate/free.scm 206 */
								obj_t BgL_arg3731z00_1541;

								obj_t BgL_arg3732z00_1542;

								BgL_arg3731z00_1541 = CDR(BgL_clausesz00_1536);
								{	/* Integrate/free.scm 206 */
									obj_t BgL_arg3733z00_1543;

									BgL_arg3733z00_1543 = CDR(CAR(BgL_clausesz00_1536));
									{	/* Integrate/free.scm 206 */
										BgL_nodez00_bglt BgL_nodez00_2179;

										BgL_nodez00_2179 = (BgL_nodez00_bglt) (BgL_arg3733z00_1543);
										{	/* Integrate/free.scm 206 */
											obj_t BgL_method3548z00_2181;

											{	/* Integrate/free.scm 206 */
												BgL_objectz00_bglt BgL_objz00_2182;

												BgL_objz00_2182 =
													(BgL_objectz00_bglt) (BgL_nodez00_2179);
												{	/* Integrate/free.scm 206 */
													long BgL_objzd2classzd2numz00_2183;

													BgL_objzd2classzd2numz00_2183 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2182);
													{	/* Integrate/free.scm 206 */
														obj_t BgL_arg2643z00_2184;

														BgL_arg2643z00_2184 =
															PROCEDURE_REF
															(BGl_nodezd2freezd2envz00zzintegrate_freez00,
															(int) (((long) 1)));
														{	/* Integrate/free.scm 206 */
															obj_t BgL_arrayz00_2186;

															int BgL_offsetz00_2187;

															BgL_arrayz00_2186 = BgL_arg2643z00_2184;
															BgL_offsetz00_2187 =
																(int) (BgL_objzd2classzd2numz00_2183);
															{	/* Integrate/free.scm 206 */
																long BgL_offsetz00_2188;

																BgL_offsetz00_2188 =
																	((long) (BgL_offsetz00_2187) - OBJECT_TYPE);
																{	/* Integrate/free.scm 206 */
																	long BgL_modz00_2189;

																	{	/* Integrate/free.scm 206 */
																		int BgL_arg2645z00_2190;

																		BgL_arg2645z00_2190 = (int) (((long) 16));
																		{	/* Integrate/free.scm 206 */
																			long BgL_auxz00_3236;

																			BgL_auxz00_3236 =
																				(long) (BgL_arg2645z00_2190);
																			BgL_modz00_2189 =
																				(BgL_offsetz00_2188 / BgL_auxz00_3236);
																	}}
																	{	/* Integrate/free.scm 206 */
																		long BgL_restz00_2191;

																		{	/* Integrate/free.scm 206 */
																			int BgL_arg2644z00_2192;

																			BgL_arg2644z00_2192 = (int) (((long) 16));
																			{	/* Integrate/free.scm 206 */
																				long BgL_auxz00_3240;

																				BgL_auxz00_3240 =
																					(long) (BgL_arg2644z00_2192);
																				BgL_restz00_2191 =
																					(BgL_offsetz00_2188 %
																					BgL_auxz00_3240);
																		}}
																		{	/* Integrate/free.scm 206 */

																			BgL_method3548z00_2181 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2186,
																					(int) (BgL_modz00_2189)),
																				(int) (BgL_restz00_2191));
											}}}}}}}}
											BgL_arg3732z00_1542 =
												PROCEDURE_ENTRY(BgL_method3548z00_2181)
												(BgL_method3548z00_2181, (obj_t) (BgL_nodez00_2179),
												BgL_freez00_1537, BEOA);
								}}}
								{
									obj_t BgL_freez00_3251;

									obj_t BgL_clausesz00_3250;

									BgL_clausesz00_3250 = BgL_arg3731z00_1541;
									BgL_freez00_3251 = BgL_arg3732z00_1542;
									BgL_freez00_1537 = BgL_freez00_3251;
									BgL_clausesz00_1536 = BgL_clausesz00_3250;
									goto BgL_zc3anonymousza33728ze3z83_1538;
								}
							}
					}
				}
			}
		}
	}



/* node-free-fail3571 */
	obj_t BGl_nodezd2freezd2fail3571z00zzintegrate_freez00(obj_t BgL_envz00_2598,
		obj_t BgL_nodez00_2599, obj_t BgL_freez00_2600)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 193 */
			{
				BgL_failz00_bglt BgL_nodez00_1517;

				obj_t BgL_freez00_1518;

				BgL_nodez00_1517 = (BgL_failz00_bglt) (BgL_nodez00_2599);
				BgL_freez00_1518 = BgL_freez00_2600;
				{	/* Integrate/free.scm 195 */
					BgL_nodez00_bglt BgL_arg3721z00_1522;

					obj_t BgL_arg3722z00_1523;

					BgL_arg3721z00_1522 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1517))->BgL_procz00);
					{	/* Integrate/free.scm 195 */
						BgL_nodez00_bglt BgL_arg3723z00_1524;

						obj_t BgL_arg3724z00_1525;

						BgL_arg3723z00_1524 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_1517))->BgL_msgz00);
						{	/* Integrate/free.scm 195 */
							BgL_nodez00_bglt BgL_arg3725z00_1526;

							BgL_arg3725z00_1526 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1517))->BgL_objz00);
							{	/* Integrate/free.scm 195 */
								obj_t BgL_method3548z00_2067;

								{	/* Integrate/free.scm 195 */
									BgL_objectz00_bglt BgL_objz00_2068;

									BgL_objz00_2068 = (BgL_objectz00_bglt) (BgL_arg3725z00_1526);
									{	/* Integrate/free.scm 195 */
										long BgL_objzd2classzd2numz00_2069;

										BgL_objzd2classzd2numz00_2069 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2068);
										{	/* Integrate/free.scm 195 */
											obj_t BgL_arg2643z00_2070;

											BgL_arg2643z00_2070 =
												PROCEDURE_REF
												(BGl_nodezd2freezd2envz00zzintegrate_freez00,
												(int) (((long) 1)));
											{	/* Integrate/free.scm 195 */
												obj_t BgL_arrayz00_2072;

												int BgL_offsetz00_2073;

												BgL_arrayz00_2072 = BgL_arg2643z00_2070;
												BgL_offsetz00_2073 =
													(int) (BgL_objzd2classzd2numz00_2069);
												{	/* Integrate/free.scm 195 */
													long BgL_offsetz00_2074;

													BgL_offsetz00_2074 =
														((long) (BgL_offsetz00_2073) - OBJECT_TYPE);
													{	/* Integrate/free.scm 195 */
														long BgL_modz00_2075;

														{	/* Integrate/free.scm 195 */
															int BgL_arg2645z00_2076;

															BgL_arg2645z00_2076 = (int) (((long) 16));
															{	/* Integrate/free.scm 195 */
																long BgL_auxz00_3264;

																BgL_auxz00_3264 = (long) (BgL_arg2645z00_2076);
																BgL_modz00_2075 =
																	(BgL_offsetz00_2074 / BgL_auxz00_3264);
														}}
														{	/* Integrate/free.scm 195 */
															long BgL_restz00_2077;

															{	/* Integrate/free.scm 195 */
																int BgL_arg2644z00_2078;

																BgL_arg2644z00_2078 = (int) (((long) 16));
																{	/* Integrate/free.scm 195 */
																	long BgL_auxz00_3268;

																	BgL_auxz00_3268 =
																		(long) (BgL_arg2644z00_2078);
																	BgL_restz00_2077 =
																		(BgL_offsetz00_2074 % BgL_auxz00_3268);
															}}
															{	/* Integrate/free.scm 195 */

																BgL_method3548z00_2067 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2072,
																		(int) (BgL_modz00_2075)),
																	(int) (BgL_restz00_2077));
								}}}}}}}}
								BgL_arg3724z00_1525 =
									PROCEDURE_ENTRY(BgL_method3548z00_2067)
									(BgL_method3548z00_2067, (obj_t) (BgL_arg3725z00_1526),
									BgL_freez00_1518, BEOA);
						}}
						{	/* Integrate/free.scm 195 */
							obj_t BgL_method3548z00_2094;

							{	/* Integrate/free.scm 195 */
								BgL_objectz00_bglt BgL_objz00_2095;

								BgL_objz00_2095 = (BgL_objectz00_bglt) (BgL_arg3723z00_1524);
								{	/* Integrate/free.scm 195 */
									long BgL_objzd2classzd2numz00_2096;

									BgL_objzd2classzd2numz00_2096 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2095);
									{	/* Integrate/free.scm 195 */
										obj_t BgL_arg2643z00_2097;

										BgL_arg2643z00_2097 =
											PROCEDURE_REF(BGl_nodezd2freezd2envz00zzintegrate_freez00,
											(int) (((long) 1)));
										{	/* Integrate/free.scm 195 */
											obj_t BgL_arrayz00_2099;

											int BgL_offsetz00_2100;

											BgL_arrayz00_2099 = BgL_arg2643z00_2097;
											BgL_offsetz00_2100 =
												(int) (BgL_objzd2classzd2numz00_2096);
											{	/* Integrate/free.scm 195 */
												long BgL_offsetz00_2101;

												BgL_offsetz00_2101 =
													((long) (BgL_offsetz00_2100) - OBJECT_TYPE);
												{	/* Integrate/free.scm 195 */
													long BgL_modz00_2102;

													{	/* Integrate/free.scm 195 */
														int BgL_arg2645z00_2103;

														BgL_arg2645z00_2103 = (int) (((long) 16));
														{	/* Integrate/free.scm 195 */
															long BgL_auxz00_3286;

															BgL_auxz00_3286 = (long) (BgL_arg2645z00_2103);
															BgL_modz00_2102 =
																(BgL_offsetz00_2101 / BgL_auxz00_3286);
													}}
													{	/* Integrate/free.scm 195 */
														long BgL_restz00_2104;

														{	/* Integrate/free.scm 195 */
															int BgL_arg2644z00_2105;

															BgL_arg2644z00_2105 = (int) (((long) 16));
															{	/* Integrate/free.scm 195 */
																long BgL_auxz00_3290;

																BgL_auxz00_3290 = (long) (BgL_arg2644z00_2105);
																BgL_restz00_2104 =
																	(BgL_offsetz00_2101 % BgL_auxz00_3290);
														}}
														{	/* Integrate/free.scm 195 */

															BgL_method3548z00_2094 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2099,
																	(int) (BgL_modz00_2102)),
																(int) (BgL_restz00_2104));
							}}}}}}}}
							BgL_arg3722z00_1523 =
								PROCEDURE_ENTRY(BgL_method3548z00_2094) (BgL_method3548z00_2094,
								(obj_t) (BgL_arg3723z00_1524), BgL_arg3724z00_1525, BEOA);
					}}
					{	/* Integrate/free.scm 195 */
						obj_t BgL_method3548z00_2121;

						{	/* Integrate/free.scm 195 */
							BgL_objectz00_bglt BgL_objz00_2122;

							BgL_objz00_2122 = (BgL_objectz00_bglt) (BgL_arg3721z00_1522);
							{	/* Integrate/free.scm 195 */
								long BgL_objzd2classzd2numz00_2123;

								BgL_objzd2classzd2numz00_2123 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2122);
								{	/* Integrate/free.scm 195 */
									obj_t BgL_arg2643z00_2124;

									BgL_arg2643z00_2124 =
										PROCEDURE_REF(BGl_nodezd2freezd2envz00zzintegrate_freez00,
										(int) (((long) 1)));
									{	/* Integrate/free.scm 195 */
										obj_t BgL_arrayz00_2126;

										int BgL_offsetz00_2127;

										BgL_arrayz00_2126 = BgL_arg2643z00_2124;
										BgL_offsetz00_2127 = (int) (BgL_objzd2classzd2numz00_2123);
										{	/* Integrate/free.scm 195 */
											long BgL_offsetz00_2128;

											BgL_offsetz00_2128 =
												((long) (BgL_offsetz00_2127) - OBJECT_TYPE);
											{	/* Integrate/free.scm 195 */
												long BgL_modz00_2129;

												{	/* Integrate/free.scm 195 */
													int BgL_arg2645z00_2130;

													BgL_arg2645z00_2130 = (int) (((long) 16));
													{	/* Integrate/free.scm 195 */
														long BgL_auxz00_3308;

														BgL_auxz00_3308 = (long) (BgL_arg2645z00_2130);
														BgL_modz00_2129 =
															(BgL_offsetz00_2128 / BgL_auxz00_3308);
												}}
												{	/* Integrate/free.scm 195 */
													long BgL_restz00_2131;

													{	/* Integrate/free.scm 195 */
														int BgL_arg2644z00_2132;

														BgL_arg2644z00_2132 = (int) (((long) 16));
														{	/* Integrate/free.scm 195 */
															long BgL_auxz00_3312;

															BgL_auxz00_3312 = (long) (BgL_arg2644z00_2132);
															BgL_restz00_2131 =
																(BgL_offsetz00_2128 % BgL_auxz00_3312);
													}}
													{	/* Integrate/free.scm 195 */

														BgL_method3548z00_2121 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2126,
																(int) (BgL_modz00_2129)),
															(int) (BgL_restz00_2131));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3548z00_2121) (BgL_method3548z00_2121,
							(obj_t) (BgL_arg3721z00_1522), BgL_arg3722z00_1523, BEOA);
					}
				}
			}
		}
	}



/* node-free-conditiona3569 */
	obj_t BGl_nodezd2freezd2conditiona3569z00zzintegrate_freez00(obj_t
		BgL_envz00_2601, obj_t BgL_nodez00_2602, obj_t BgL_freez00_2603)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 186 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1505;

				obj_t BgL_freez00_1506;

				BgL_nodez00_1505 = (BgL_conditionalz00_bglt) (BgL_nodez00_2602);
				BgL_freez00_1506 = BgL_freez00_2603;
				{	/* Integrate/free.scm 188 */
					BgL_nodez00_bglt BgL_arg3715z00_1510;

					obj_t BgL_arg3716z00_1511;

					BgL_arg3715z00_1510 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1505))->BgL_testz00);
					{	/* Integrate/free.scm 188 */
						BgL_nodez00_bglt BgL_arg3717z00_1512;

						obj_t BgL_arg3718z00_1513;

						BgL_arg3717z00_1512 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1505))->BgL_truez00);
						{	/* Integrate/free.scm 188 */
							BgL_nodez00_bglt BgL_arg3719z00_1514;

							BgL_arg3719z00_1514 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1505))->
								BgL_falsez00);
							{	/* Integrate/free.scm 188 */
								obj_t BgL_method3548z00_1983;

								{	/* Integrate/free.scm 188 */
									BgL_objectz00_bglt BgL_objz00_1984;

									BgL_objz00_1984 = (BgL_objectz00_bglt) (BgL_arg3719z00_1514);
									{	/* Integrate/free.scm 188 */
										long BgL_objzd2classzd2numz00_1985;

										BgL_objzd2classzd2numz00_1985 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1984);
										{	/* Integrate/free.scm 188 */
											obj_t BgL_arg2643z00_1986;

											BgL_arg2643z00_1986 =
												PROCEDURE_REF
												(BGl_nodezd2freezd2envz00zzintegrate_freez00,
												(int) (((long) 1)));
											{	/* Integrate/free.scm 188 */
												obj_t BgL_arrayz00_1988;

												int BgL_offsetz00_1989;

												BgL_arrayz00_1988 = BgL_arg2643z00_1986;
												BgL_offsetz00_1989 =
													(int) (BgL_objzd2classzd2numz00_1985);
												{	/* Integrate/free.scm 188 */
													long BgL_offsetz00_1990;

													BgL_offsetz00_1990 =
														((long) (BgL_offsetz00_1989) - OBJECT_TYPE);
													{	/* Integrate/free.scm 188 */
														long BgL_modz00_1991;

														{	/* Integrate/free.scm 188 */
															int BgL_arg2645z00_1992;

															BgL_arg2645z00_1992 = (int) (((long) 16));
															{	/* Integrate/free.scm 188 */
																long BgL_auxz00_3334;

																BgL_auxz00_3334 = (long) (BgL_arg2645z00_1992);
																BgL_modz00_1991 =
																	(BgL_offsetz00_1990 / BgL_auxz00_3334);
														}}
														{	/* Integrate/free.scm 188 */
															long BgL_restz00_1993;

															{	/* Integrate/free.scm 188 */
																int BgL_arg2644z00_1994;

																BgL_arg2644z00_1994 = (int) (((long) 16));
																{	/* Integrate/free.scm 188 */
																	long BgL_auxz00_3338;

																	BgL_auxz00_3338 =
																		(long) (BgL_arg2644z00_1994);
																	BgL_restz00_1993 =
																		(BgL_offsetz00_1990 % BgL_auxz00_3338);
															}}
															{	/* Integrate/free.scm 188 */

																BgL_method3548z00_1983 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1988,
																		(int) (BgL_modz00_1991)),
																	(int) (BgL_restz00_1993));
								}}}}}}}}
								BgL_arg3718z00_1513 =
									PROCEDURE_ENTRY(BgL_method3548z00_1983)
									(BgL_method3548z00_1983, (obj_t) (BgL_arg3719z00_1514),
									BgL_freez00_1506, BEOA);
						}}
						{	/* Integrate/free.scm 188 */
							obj_t BgL_method3548z00_2010;

							{	/* Integrate/free.scm 188 */
								BgL_objectz00_bglt BgL_objz00_2011;

								BgL_objz00_2011 = (BgL_objectz00_bglt) (BgL_arg3717z00_1512);
								{	/* Integrate/free.scm 188 */
									long BgL_objzd2classzd2numz00_2012;

									BgL_objzd2classzd2numz00_2012 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2011);
									{	/* Integrate/free.scm 188 */
										obj_t BgL_arg2643z00_2013;

										BgL_arg2643z00_2013 =
											PROCEDURE_REF(BGl_nodezd2freezd2envz00zzintegrate_freez00,
											(int) (((long) 1)));
										{	/* Integrate/free.scm 188 */
											obj_t BgL_arrayz00_2015;

											int BgL_offsetz00_2016;

											BgL_arrayz00_2015 = BgL_arg2643z00_2013;
											BgL_offsetz00_2016 =
												(int) (BgL_objzd2classzd2numz00_2012);
											{	/* Integrate/free.scm 188 */
												long BgL_offsetz00_2017;

												BgL_offsetz00_2017 =
													((long) (BgL_offsetz00_2016) - OBJECT_TYPE);
												{	/* Integrate/free.scm 188 */
													long BgL_modz00_2018;

													{	/* Integrate/free.scm 188 */
														int BgL_arg2645z00_2019;

														BgL_arg2645z00_2019 = (int) (((long) 16));
														{	/* Integrate/free.scm 188 */
															long BgL_auxz00_3356;

															BgL_auxz00_3356 = (long) (BgL_arg2645z00_2019);
															BgL_modz00_2018 =
																(BgL_offsetz00_2017 / BgL_auxz00_3356);
													}}
													{	/* Integrate/free.scm 188 */
														long BgL_restz00_2020;

														{	/* Integrate/free.scm 188 */
															int BgL_arg2644z00_2021;

															BgL_arg2644z00_2021 = (int) (((long) 16));
															{	/* Integrate/free.scm 188 */
																long BgL_auxz00_3360;

																BgL_auxz00_3360 = (long) (BgL_arg2644z00_2021);
																BgL_restz00_2020 =
																	(BgL_offsetz00_2017 % BgL_auxz00_3360);
														}}
														{	/* Integrate/free.scm 188 */

															BgL_method3548z00_2010 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2015,
																	(int) (BgL_modz00_2018)),
																(int) (BgL_restz00_2020));
							}}}}}}}}
							BgL_arg3716z00_1511 =
								PROCEDURE_ENTRY(BgL_method3548z00_2010) (BgL_method3548z00_2010,
								(obj_t) (BgL_arg3717z00_1512), BgL_arg3718z00_1513, BEOA);
					}}
					{	/* Integrate/free.scm 188 */
						obj_t BgL_method3548z00_2037;

						{	/* Integrate/free.scm 188 */
							BgL_objectz00_bglt BgL_objz00_2038;

							BgL_objz00_2038 = (BgL_objectz00_bglt) (BgL_arg3715z00_1510);
							{	/* Integrate/free.scm 188 */
								long BgL_objzd2classzd2numz00_2039;

								BgL_objzd2classzd2numz00_2039 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2038);
								{	/* Integrate/free.scm 188 */
									obj_t BgL_arg2643z00_2040;

									BgL_arg2643z00_2040 =
										PROCEDURE_REF(BGl_nodezd2freezd2envz00zzintegrate_freez00,
										(int) (((long) 1)));
									{	/* Integrate/free.scm 188 */
										obj_t BgL_arrayz00_2042;

										int BgL_offsetz00_2043;

										BgL_arrayz00_2042 = BgL_arg2643z00_2040;
										BgL_offsetz00_2043 = (int) (BgL_objzd2classzd2numz00_2039);
										{	/* Integrate/free.scm 188 */
											long BgL_offsetz00_2044;

											BgL_offsetz00_2044 =
												((long) (BgL_offsetz00_2043) - OBJECT_TYPE);
											{	/* Integrate/free.scm 188 */
												long BgL_modz00_2045;

												{	/* Integrate/free.scm 188 */
													int BgL_arg2645z00_2046;

													BgL_arg2645z00_2046 = (int) (((long) 16));
													{	/* Integrate/free.scm 188 */
														long BgL_auxz00_3378;

														BgL_auxz00_3378 = (long) (BgL_arg2645z00_2046);
														BgL_modz00_2045 =
															(BgL_offsetz00_2044 / BgL_auxz00_3378);
												}}
												{	/* Integrate/free.scm 188 */
													long BgL_restz00_2047;

													{	/* Integrate/free.scm 188 */
														int BgL_arg2644z00_2048;

														BgL_arg2644z00_2048 = (int) (((long) 16));
														{	/* Integrate/free.scm 188 */
															long BgL_auxz00_3382;

															BgL_auxz00_3382 = (long) (BgL_arg2644z00_2048);
															BgL_restz00_2047 =
																(BgL_offsetz00_2044 % BgL_auxz00_3382);
													}}
													{	/* Integrate/free.scm 188 */

														BgL_method3548z00_2037 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2042,
																(int) (BgL_modz00_2045)),
															(int) (BgL_restz00_2047));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3548z00_2037) (BgL_method3548z00_2037,
							(obj_t) (BgL_arg3715z00_1510), BgL_arg3716z00_1511, BEOA);
					}
				}
			}
		}
	}



/* node-free-setq3567 */
	obj_t BGl_nodezd2freezd2setq3567z00zzintegrate_freez00(obj_t BgL_envz00_2604,
		obj_t BgL_nodez00_2605, obj_t BgL_freez00_2606)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 179 */
			{
				BgL_setqz00_bglt BgL_nodez00_1495;

				obj_t BgL_freez00_1496;

				BgL_nodez00_1495 = (BgL_setqz00_bglt) (BgL_nodez00_2605);
				BgL_freez00_1496 = BgL_freez00_2606;
				{	/* Integrate/free.scm 180 */
					BgL_varz00_bglt BgL_arg3711z00_1919;

					obj_t BgL_arg3712z00_1920;

					BgL_arg3711z00_1919 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1495))->BgL_varz00);
					{	/* Integrate/free.scm 180 */
						BgL_nodez00_bglt BgL_arg3713z00_1921;

						BgL_arg3713z00_1921 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_1495))->BgL_valuez00);
						{	/* Integrate/free.scm 180 */
							obj_t BgL_method3548z00_1926;

							{	/* Integrate/free.scm 180 */
								BgL_objectz00_bglt BgL_objz00_1927;

								BgL_objz00_1927 = (BgL_objectz00_bglt) (BgL_arg3713z00_1921);
								{	/* Integrate/free.scm 180 */
									long BgL_objzd2classzd2numz00_1928;

									BgL_objzd2classzd2numz00_1928 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1927);
									{	/* Integrate/free.scm 180 */
										obj_t BgL_arg2643z00_1929;

										BgL_arg2643z00_1929 =
											PROCEDURE_REF(BGl_nodezd2freezd2envz00zzintegrate_freez00,
											(int) (((long) 1)));
										{	/* Integrate/free.scm 180 */
											obj_t BgL_arrayz00_1931;

											int BgL_offsetz00_1932;

											BgL_arrayz00_1931 = BgL_arg2643z00_1929;
											BgL_offsetz00_1932 =
												(int) (BgL_objzd2classzd2numz00_1928);
											{	/* Integrate/free.scm 180 */
												long BgL_offsetz00_1933;

												BgL_offsetz00_1933 =
													((long) (BgL_offsetz00_1932) - OBJECT_TYPE);
												{	/* Integrate/free.scm 180 */
													long BgL_modz00_1934;

													{	/* Integrate/free.scm 180 */
														int BgL_arg2645z00_1935;

														BgL_arg2645z00_1935 = (int) (((long) 16));
														{	/* Integrate/free.scm 180 */
															long BgL_auxz00_3403;

															BgL_auxz00_3403 = (long) (BgL_arg2645z00_1935);
															BgL_modz00_1934 =
																(BgL_offsetz00_1933 / BgL_auxz00_3403);
													}}
													{	/* Integrate/free.scm 180 */
														long BgL_restz00_1936;

														{	/* Integrate/free.scm 180 */
															int BgL_arg2644z00_1937;

															BgL_arg2644z00_1937 = (int) (((long) 16));
															{	/* Integrate/free.scm 180 */
																long BgL_auxz00_3407;

																BgL_auxz00_3407 = (long) (BgL_arg2644z00_1937);
																BgL_restz00_1936 =
																	(BgL_offsetz00_1933 % BgL_auxz00_3407);
														}}
														{	/* Integrate/free.scm 180 */

															BgL_method3548z00_1926 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1931,
																	(int) (BgL_modz00_1934)),
																(int) (BgL_restz00_1936));
							}}}}}}}}
							BgL_arg3712z00_1920 =
								PROCEDURE_ENTRY(BgL_method3548z00_1926) (BgL_method3548z00_1926,
								(obj_t) (BgL_arg3713z00_1921), BgL_freez00_1496, BEOA);
					}}
					{	/* Integrate/free.scm 180 */
						BgL_nodez00_bglt BgL_nodez00_1951;

						BgL_nodez00_1951 = (BgL_nodez00_bglt) (BgL_arg3711z00_1919);
						{	/* Integrate/free.scm 180 */
							obj_t BgL_method3548z00_1953;

							{	/* Integrate/free.scm 180 */
								BgL_objectz00_bglt BgL_objz00_1954;

								BgL_objz00_1954 = (BgL_objectz00_bglt) (BgL_nodez00_1951);
								{	/* Integrate/free.scm 180 */
									long BgL_objzd2classzd2numz00_1955;

									BgL_objzd2classzd2numz00_1955 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1954);
									{	/* Integrate/free.scm 180 */
										obj_t BgL_arg2643z00_1956;

										BgL_arg2643z00_1956 =
											PROCEDURE_REF(BGl_nodezd2freezd2envz00zzintegrate_freez00,
											(int) (((long) 1)));
										{	/* Integrate/free.scm 180 */
											obj_t BgL_arrayz00_1958;

											int BgL_offsetz00_1959;

											BgL_arrayz00_1958 = BgL_arg2643z00_1956;
											BgL_offsetz00_1959 =
												(int) (BgL_objzd2classzd2numz00_1955);
											{	/* Integrate/free.scm 180 */
												long BgL_offsetz00_1960;

												BgL_offsetz00_1960 =
													((long) (BgL_offsetz00_1959) - OBJECT_TYPE);
												{	/* Integrate/free.scm 180 */
													long BgL_modz00_1961;

													{	/* Integrate/free.scm 180 */
														int BgL_arg2645z00_1962;

														BgL_arg2645z00_1962 = (int) (((long) 16));
														{	/* Integrate/free.scm 180 */
															long BgL_auxz00_3426;

															BgL_auxz00_3426 = (long) (BgL_arg2645z00_1962);
															BgL_modz00_1961 =
																(BgL_offsetz00_1960 / BgL_auxz00_3426);
													}}
													{	/* Integrate/free.scm 180 */
														long BgL_restz00_1963;

														{	/* Integrate/free.scm 180 */
															int BgL_arg2644z00_1964;

															BgL_arg2644z00_1964 = (int) (((long) 16));
															{	/* Integrate/free.scm 180 */
																long BgL_auxz00_3430;

																BgL_auxz00_3430 = (long) (BgL_arg2644z00_1964);
																BgL_restz00_1963 =
																	(BgL_offsetz00_1960 % BgL_auxz00_3430);
														}}
														{	/* Integrate/free.scm 180 */

															BgL_method3548z00_1953 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1958,
																	(int) (BgL_modz00_1961)),
																(int) (BgL_restz00_1963));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3548z00_1953) (BgL_method3548z00_1953,
								(obj_t) (BgL_nodez00_1951), BgL_arg3712z00_1920, BEOA);
						}
					}
				}
			}
		}
	}



/* node-free-cast3565 */
	obj_t BGl_nodezd2freezd2cast3565z00zzintegrate_freez00(obj_t BgL_envz00_2607,
		obj_t BgL_nodez00_2608, obj_t BgL_freez00_2609)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 172 */
			{
				BgL_castz00_bglt BgL_nodez00_1487;

				obj_t BgL_freez00_1488;

				BgL_nodez00_1487 = (BgL_castz00_bglt) (BgL_nodez00_2608);
				BgL_freez00_1488 = BgL_freez00_2609;
				{	/* Integrate/free.scm 173 */
					BgL_nodez00_bglt BgL_arg3709z00_1889;

					BgL_arg3709z00_1889 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_1487))->BgL_argz00);
					{	/* Integrate/free.scm 173 */
						obj_t BgL_method3548z00_1893;

						{	/* Integrate/free.scm 173 */
							BgL_objectz00_bglt BgL_objz00_1894;

							BgL_objz00_1894 = (BgL_objectz00_bglt) (BgL_arg3709z00_1889);
							{	/* Integrate/free.scm 173 */
								long BgL_objzd2classzd2numz00_1895;

								BgL_objzd2classzd2numz00_1895 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1894);
								{	/* Integrate/free.scm 173 */
									obj_t BgL_arg2643z00_1896;

									BgL_arg2643z00_1896 =
										PROCEDURE_REF(BGl_nodezd2freezd2envz00zzintegrate_freez00,
										(int) (((long) 1)));
									{	/* Integrate/free.scm 173 */
										obj_t BgL_arrayz00_1898;

										int BgL_offsetz00_1899;

										BgL_arrayz00_1898 = BgL_arg2643z00_1896;
										BgL_offsetz00_1899 = (int) (BgL_objzd2classzd2numz00_1895);
										{	/* Integrate/free.scm 173 */
											long BgL_offsetz00_1900;

											BgL_offsetz00_1900 =
												((long) (BgL_offsetz00_1899) - OBJECT_TYPE);
											{	/* Integrate/free.scm 173 */
												long BgL_modz00_1901;

												{	/* Integrate/free.scm 173 */
													int BgL_arg2645z00_1902;

													BgL_arg2645z00_1902 = (int) (((long) 16));
													{	/* Integrate/free.scm 173 */
														long BgL_auxz00_3450;

														BgL_auxz00_3450 = (long) (BgL_arg2645z00_1902);
														BgL_modz00_1901 =
															(BgL_offsetz00_1900 / BgL_auxz00_3450);
												}}
												{	/* Integrate/free.scm 173 */
													long BgL_restz00_1903;

													{	/* Integrate/free.scm 173 */
														int BgL_arg2644z00_1904;

														BgL_arg2644z00_1904 = (int) (((long) 16));
														{	/* Integrate/free.scm 173 */
															long BgL_auxz00_3454;

															BgL_auxz00_3454 = (long) (BgL_arg2644z00_1904);
															BgL_restz00_1903 =
																(BgL_offsetz00_1900 % BgL_auxz00_3454);
													}}
													{	/* Integrate/free.scm 173 */

														BgL_method3548z00_1893 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1898,
																(int) (BgL_modz00_1901)),
															(int) (BgL_restz00_1903));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3548z00_1893) (BgL_method3548z00_1893,
							(obj_t) (BgL_arg3709z00_1889), BgL_freez00_1488, BEOA);
					}
				}
			}
		}
	}



/* node-free-extern3563 */
	obj_t BGl_nodezd2freezd2extern3563z00zzintegrate_freez00(obj_t
		BgL_envz00_2610, obj_t BgL_nodez00_2611, obj_t BgL_freez00_2612)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 165 */
			{
				BgL_externz00_bglt BgL_nodez00_1479;

				obj_t BgL_freez00_1480;

				BgL_nodez00_1479 = (BgL_externz00_bglt) (BgL_nodez00_2611);
				BgL_freez00_1480 = BgL_freez00_2612;
				{	/* Integrate/free.scm 166 */
					obj_t BgL_arg3707z00_1886;

					BgL_arg3707z00_1886 =
						(((BgL_externz00_bglt) CREF(BgL_nodez00_1479))->BgL_exprza2za2);
					return
						BGl_nodezd2freeza2z70zzintegrate_freez00(BgL_arg3707z00_1886,
						BgL_freez00_1480);
				}
			}
		}
	}



/* node-free-funcall3561 */
	obj_t BGl_nodezd2freezd2funcall3561z00zzintegrate_freez00(obj_t
		BgL_envz00_2613, obj_t BgL_nodez00_2614, obj_t BgL_freez00_2615)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 158 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1469;

				obj_t BgL_freez00_1470;

				BgL_nodez00_1469 = (BgL_funcallz00_bglt) (BgL_nodez00_2614);
				BgL_freez00_1470 = BgL_freez00_2615;
				{	/* Integrate/free.scm 159 */
					BgL_nodez00_bglt BgL_arg3703z00_1853;

					obj_t BgL_arg3704z00_1854;

					BgL_arg3703z00_1853 =
						(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1469))->BgL_funz00);
					{	/* Integrate/free.scm 159 */
						obj_t BgL_arg3705z00_1855;

						BgL_arg3705z00_1855 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1469))->BgL_argsz00);
						BgL_arg3704z00_1854 =
							BGl_nodezd2freeza2z70zzintegrate_freez00(BgL_arg3705z00_1855,
							BgL_freez00_1470);
					}
					{	/* Integrate/free.scm 159 */
						obj_t BgL_method3548z00_1860;

						{	/* Integrate/free.scm 159 */
							BgL_objectz00_bglt BgL_objz00_1861;

							BgL_objz00_1861 = (BgL_objectz00_bglt) (BgL_arg3703z00_1853);
							{	/* Integrate/free.scm 159 */
								long BgL_objzd2classzd2numz00_1862;

								BgL_objzd2classzd2numz00_1862 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1861);
								{	/* Integrate/free.scm 159 */
									obj_t BgL_arg2643z00_1863;

									BgL_arg2643z00_1863 =
										PROCEDURE_REF(BGl_nodezd2freezd2envz00zzintegrate_freez00,
										(int) (((long) 1)));
									{	/* Integrate/free.scm 159 */
										obj_t BgL_arrayz00_1865;

										int BgL_offsetz00_1866;

										BgL_arrayz00_1865 = BgL_arg2643z00_1863;
										BgL_offsetz00_1866 = (int) (BgL_objzd2classzd2numz00_1862);
										{	/* Integrate/free.scm 159 */
											long BgL_offsetz00_1867;

											BgL_offsetz00_1867 =
												((long) (BgL_offsetz00_1866) - OBJECT_TYPE);
											{	/* Integrate/free.scm 159 */
												long BgL_modz00_1868;

												{	/* Integrate/free.scm 159 */
													int BgL_arg2645z00_1869;

													BgL_arg2645z00_1869 = (int) (((long) 16));
													{	/* Integrate/free.scm 159 */
														long BgL_auxz00_3479;

														BgL_auxz00_3479 = (long) (BgL_arg2645z00_1869);
														BgL_modz00_1868 =
															(BgL_offsetz00_1867 / BgL_auxz00_3479);
												}}
												{	/* Integrate/free.scm 159 */
													long BgL_restz00_1870;

													{	/* Integrate/free.scm 159 */
														int BgL_arg2644z00_1871;

														BgL_arg2644z00_1871 = (int) (((long) 16));
														{	/* Integrate/free.scm 159 */
															long BgL_auxz00_3483;

															BgL_auxz00_3483 = (long) (BgL_arg2644z00_1871);
															BgL_restz00_1870 =
																(BgL_offsetz00_1867 % BgL_auxz00_3483);
													}}
													{	/* Integrate/free.scm 159 */

														BgL_method3548z00_1860 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1865,
																(int) (BgL_modz00_1868)),
															(int) (BgL_restz00_1870));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3548z00_1860) (BgL_method3548z00_1860,
							(obj_t) (BgL_arg3703z00_1853), BgL_arg3704z00_1854, BEOA);
					}
				}
			}
		}
	}



/* node-free-app-ly3558 */
	obj_t BGl_nodezd2freezd2appzd2ly3558zd2zzintegrate_freez00(obj_t
		BgL_envz00_2616, obj_t BgL_nodez00_2617, obj_t BgL_freez00_2618)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 151 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1459;

				obj_t BgL_freez00_1460;

				BgL_nodez00_1459 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2617);
				BgL_freez00_1460 = BgL_freez00_2618;
				{	/* Integrate/free.scm 152 */
					BgL_nodez00_bglt BgL_arg3699z00_1793;

					obj_t BgL_arg3700z00_1794;

					BgL_arg3699z00_1793 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1459))->BgL_funz00);
					{	/* Integrate/free.scm 152 */
						BgL_nodez00_bglt BgL_arg3701z00_1795;

						BgL_arg3701z00_1795 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1459))->BgL_argz00);
						{	/* Integrate/free.scm 152 */
							obj_t BgL_method3548z00_1800;

							{	/* Integrate/free.scm 152 */
								BgL_objectz00_bglt BgL_objz00_1801;

								BgL_objz00_1801 = (BgL_objectz00_bglt) (BgL_arg3701z00_1795);
								{	/* Integrate/free.scm 152 */
									long BgL_objzd2classzd2numz00_1802;

									BgL_objzd2classzd2numz00_1802 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1801);
									{	/* Integrate/free.scm 152 */
										obj_t BgL_arg2643z00_1803;

										BgL_arg2643z00_1803 =
											PROCEDURE_REF(BGl_nodezd2freezd2envz00zzintegrate_freez00,
											(int) (((long) 1)));
										{	/* Integrate/free.scm 152 */
											obj_t BgL_arrayz00_1805;

											int BgL_offsetz00_1806;

											BgL_arrayz00_1805 = BgL_arg2643z00_1803;
											BgL_offsetz00_1806 =
												(int) (BgL_objzd2classzd2numz00_1802);
											{	/* Integrate/free.scm 152 */
												long BgL_offsetz00_1807;

												BgL_offsetz00_1807 =
													((long) (BgL_offsetz00_1806) - OBJECT_TYPE);
												{	/* Integrate/free.scm 152 */
													long BgL_modz00_1808;

													{	/* Integrate/free.scm 152 */
														int BgL_arg2645z00_1809;

														BgL_arg2645z00_1809 = (int) (((long) 16));
														{	/* Integrate/free.scm 152 */
															long BgL_auxz00_3504;

															BgL_auxz00_3504 = (long) (BgL_arg2645z00_1809);
															BgL_modz00_1808 =
																(BgL_offsetz00_1807 / BgL_auxz00_3504);
													}}
													{	/* Integrate/free.scm 152 */
														long BgL_restz00_1810;

														{	/* Integrate/free.scm 152 */
															int BgL_arg2644z00_1811;

															BgL_arg2644z00_1811 = (int) (((long) 16));
															{	/* Integrate/free.scm 152 */
																long BgL_auxz00_3508;

																BgL_auxz00_3508 = (long) (BgL_arg2644z00_1811);
																BgL_restz00_1810 =
																	(BgL_offsetz00_1807 % BgL_auxz00_3508);
														}}
														{	/* Integrate/free.scm 152 */

															BgL_method3548z00_1800 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1805,
																	(int) (BgL_modz00_1808)),
																(int) (BgL_restz00_1810));
							}}}}}}}}
							BgL_arg3700z00_1794 =
								PROCEDURE_ENTRY(BgL_method3548z00_1800) (BgL_method3548z00_1800,
								(obj_t) (BgL_arg3701z00_1795), BgL_freez00_1460, BEOA);
					}}
					{	/* Integrate/free.scm 152 */
						obj_t BgL_method3548z00_1827;

						{	/* Integrate/free.scm 152 */
							BgL_objectz00_bglt BgL_objz00_1828;

							BgL_objz00_1828 = (BgL_objectz00_bglt) (BgL_arg3699z00_1793);
							{	/* Integrate/free.scm 152 */
								long BgL_objzd2classzd2numz00_1829;

								BgL_objzd2classzd2numz00_1829 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1828);
								{	/* Integrate/free.scm 152 */
									obj_t BgL_arg2643z00_1830;

									BgL_arg2643z00_1830 =
										PROCEDURE_REF(BGl_nodezd2freezd2envz00zzintegrate_freez00,
										(int) (((long) 1)));
									{	/* Integrate/free.scm 152 */
										obj_t BgL_arrayz00_1832;

										int BgL_offsetz00_1833;

										BgL_arrayz00_1832 = BgL_arg2643z00_1830;
										BgL_offsetz00_1833 = (int) (BgL_objzd2classzd2numz00_1829);
										{	/* Integrate/free.scm 152 */
											long BgL_offsetz00_1834;

											BgL_offsetz00_1834 =
												((long) (BgL_offsetz00_1833) - OBJECT_TYPE);
											{	/* Integrate/free.scm 152 */
												long BgL_modz00_1835;

												{	/* Integrate/free.scm 152 */
													int BgL_arg2645z00_1836;

													BgL_arg2645z00_1836 = (int) (((long) 16));
													{	/* Integrate/free.scm 152 */
														long BgL_auxz00_3526;

														BgL_auxz00_3526 = (long) (BgL_arg2645z00_1836);
														BgL_modz00_1835 =
															(BgL_offsetz00_1834 / BgL_auxz00_3526);
												}}
												{	/* Integrate/free.scm 152 */
													long BgL_restz00_1837;

													{	/* Integrate/free.scm 152 */
														int BgL_arg2644z00_1838;

														BgL_arg2644z00_1838 = (int) (((long) 16));
														{	/* Integrate/free.scm 152 */
															long BgL_auxz00_3530;

															BgL_auxz00_3530 = (long) (BgL_arg2644z00_1838);
															BgL_restz00_1837 =
																(BgL_offsetz00_1834 % BgL_auxz00_3530);
													}}
													{	/* Integrate/free.scm 152 */

														BgL_method3548z00_1827 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1832,
																(int) (BgL_modz00_1835)),
															(int) (BgL_restz00_1837));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3548z00_1827) (BgL_method3548z00_1827,
							(obj_t) (BgL_arg3699z00_1793), BgL_arg3700z00_1794, BEOA);
					}
				}
			}
		}
	}



/* node-free-app3556 */
	obj_t BGl_nodezd2freezd2app3556z00zzintegrate_freez00(obj_t BgL_envz00_2619,
		obj_t BgL_nodez00_2620, obj_t BgL_freez00_2621)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 144 */
			{
				BgL_appz00_bglt BgL_nodez00_1451;

				obj_t BgL_freez00_1452;

				BgL_nodez00_1451 = (BgL_appz00_bglt) (BgL_nodez00_2620);
				BgL_freez00_1452 = BgL_freez00_2621;
				{	/* Integrate/free.scm 145 */
					obj_t BgL_arg3697z00_1790;

					BgL_arg3697z00_1790 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_1451))->BgL_argsz00);
					return
						BGl_nodezd2freeza2z70zzintegrate_freez00(BgL_arg3697z00_1790,
						BgL_freez00_1452);
				}
			}
		}
	}



/* node-free-sequence3554 */
	obj_t BGl_nodezd2freezd2sequence3554z00zzintegrate_freez00(obj_t
		BgL_envz00_2622, obj_t BgL_nodez00_2623, obj_t BgL_freez00_2624)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 137 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1443;

				obj_t BgL_freez00_1444;

				BgL_nodez00_1443 = (BgL_sequencez00_bglt) (BgL_nodez00_2623);
				BgL_freez00_1444 = BgL_freez00_2624;
				{	/* Integrate/free.scm 138 */
					obj_t BgL_arg3695z00_1787;

					BgL_arg3695z00_1787 =
						(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1443))->BgL_nodesz00);
					return
						BGl_nodezd2freeza2z70zzintegrate_freez00(BgL_arg3695z00_1787,
						BgL_freez00_1444);
				}
			}
		}
	}



/* node-free-closure3552 */
	obj_t BGl_nodezd2freezd2closure3552z00zzintegrate_freez00(obj_t
		BgL_envz00_2625, obj_t BgL_nodez00_2626, obj_t BgL_freez00_2627)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 131 */
			{
				BgL_closurez00_bglt BgL_nodez00_1434;

				obj_t BgL_freez00_1435;

				BgL_nodez00_1434 = (BgL_closurez00_bglt) (BgL_nodez00_2626);
				BgL_freez00_1435 = BgL_freez00_2627;
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string3833z00zzintegrate_freez00,
					BGl_string3853z00zzintegrate_freez00,
					BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_1434)));
			}
		}
	}



/* node-free-var3550 */
	obj_t BGl_nodezd2freezd2var3550z00zzintegrate_freez00(obj_t BgL_envz00_2628,
		obj_t BgL_nodez00_2629, obj_t BgL_freez00_2630)
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 117 */
			{
				BgL_varz00_bglt BgL_nodez00_1421;

				obj_t BgL_freez00_1422;

				BgL_nodez00_1421 = (BgL_varz00_bglt) (BgL_nodez00_2629);
				BgL_freez00_1422 = BgL_freez00_2630;
				{	/* Integrate/free.scm 120 */
					bool_t BgL_testz00_3551;

					{	/* Integrate/free.scm 120 */
						BgL_variablez00_bglt BgL_arg3689z00_1431;

						BgL_arg3689z00_1431 =
							(((BgL_varz00_bglt) CREF(BgL_nodez00_1421))->BgL_variablez00);
						{	/* Integrate/free.scm 120 */
							obj_t BgL_obj1751z00_1779;

							BgL_obj1751z00_1779 = (obj_t) (BgL_arg3689z00_1431);
							BgL_testz00_3551 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_1779,
								BGl_globalz00zzast_varz00);
						}
					}
					if (BgL_testz00_3551)
						{	/* Integrate/free.scm 120 */
							return BgL_freez00_1422;
						}
					else
						{	/* Integrate/free.scm 122 */
							bool_t BgL_testz00_3555;

							{	/* Integrate/free.scm 122 */
								BgL_variablez00_bglt BgL_arg3688z00_1430;

								BgL_arg3688z00_1430 =
									(((BgL_varz00_bglt) CREF(BgL_nodez00_1421))->BgL_variablez00);
								BgL_testz00_3555 =
									CBOOL(BGl_freezd2variablezf3z21zzintegrate_freez00(
										(obj_t) (BgL_arg3688z00_1430)));
							}
							if (BgL_testz00_3555)
								{	/* Integrate/free.scm 122 */
									{	/* Integrate/free.scm 123 */
										BgL_variablez00_bglt BgL_arg3686z00_1428;

										BgL_arg3686z00_1428 =
											(((BgL_varz00_bglt) CREF(BgL_nodez00_1421))->
											BgL_variablez00);
										BGl_markzd2variablez12zc0zzintegrate_freez00(
											(BgL_localz00_bglt) (BgL_arg3686z00_1428));
									}
									{	/* Integrate/free.scm 124 */
										BgL_variablez00_bglt BgL_arg3687z00_1429;

										BgL_arg3687z00_1429 =
											(((BgL_varz00_bglt) CREF(BgL_nodez00_1421))->
											BgL_variablez00);
										return MAKE_PAIR((obj_t) (BgL_arg3687z00_1429),
											BgL_freez00_1422);
									}
								}
							else
								{	/* Integrate/free.scm 122 */
									return BgL_freez00_1422;
								}
						}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_freez00()
	{
		AN_OBJECT;
		{	/* Integrate/free.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3854z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3854z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3854z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3854z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3854z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3854z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3854z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3854z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3854z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3854z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(((long) 189731515),
				BSTRING_TO_STRING(BGl_string3854z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string3854z00zzintegrate_freez00));
			BGl_modulezd2initializa7ationz75zzintegrate_nodez00(((long) 507393140),
				BSTRING_TO_STRING(BGl_string3854z00zzintegrate_freez00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3854z00zzintegrate_freez00));
		}
	}

#ifdef __cplusplus
}
#endif
