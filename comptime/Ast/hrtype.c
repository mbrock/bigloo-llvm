/*===========================================================================*/
/*   (Ast/hrtype.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/hrtype.scm)*/
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


	static obj_t BGl_hrtypezd2nodez12zd2conditi3351z12zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl__hrtypezd2nodez12zc0zzast_hrtypez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_hrtypezd2nodez12zd2extern3343z12zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_alreadyzd2restoredzf3z21zzast_envz00(obj_t);
	static obj_t BGl_hrtypezd2nodez12zd2appzd2ly3339zc0zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl__hrtypezd2nodez12zd2default3323z12zzast_hrtypez00(obj_t,
		obj_t);
	static obj_t BGl_hrtypezd2nodez12zd2boxzd2ref3370zc0zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_hrtypezd2nodez12zd2app3337z12zzast_hrtypez00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_hrtypez00();
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t BGl_hrtypezd2nodez12zd2setzd2exzd23361z12zzast_hrtypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_hrtypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzast_hrtypez00();
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	static obj_t BGl_hrtypezd2nodez12zd2atom3326z12zzast_hrtypez00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_hrtypezd2nodez12zd2letzd2fun3357zc0zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_hrtypezd2nodez12zd2select3355z12zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_hrtypezd2nodez12zd2closure3333z12zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_hrtypezd2nodez12zd2letzd2var3359zc0zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	static obj_t BGl_hrtypezd2nodez12zd2jumpzd2ex3363zc0zzast_hrtypez00(obj_t,
		obj_t);
	static obj_t BGl_hrtypezd2nodez12zd2var3331z12zzast_hrtypez00(obj_t, obj_t);
	static obj_t BGl_hrtypezd2nodez12zd2sequenc3335z12zzast_hrtypez00(obj_t,
		obj_t);
	static obj_t BGl_hrtypezd2nodez12zd2boxzd2set3367zc0zzast_hrtypez00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzast_hrtypez00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static bool_t BGl_hrtypezd2nodeza2z12z62zzast_hrtypez00(obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_hrtypezd2nodez12zd2cast3345z12zzast_hrtypez00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_hrtypez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzast_hrtypez00();
	BGL_EXPORTED_DECL obj_t
		BGl_hrtypezd2nodez12zc0zzast_hrtypez00(BgL_nodez00_bglt);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_hrtypezd2nodez12zd2makezd2bo3365zc0zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzast_hrtypez00();
	static obj_t BGl_hrtypezd2nodez12zd2setq3348z12zzast_hrtypez00(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t
		BGl_hrtypezd2nodez12zd2default3323z12zzast_hrtypez00(BgL_nodez00_bglt);
	extern obj_t BGl_restorezd2globalz12zc0zzast_envz00(obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_globalzd2bucketzd2positionz00zzast_envz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	static obj_t BGl_hrtypezd2nodez12zd2funcall3341z12zzast_hrtypez00(obj_t,
		obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_hrtypezd2nodez12zd2fail3353z12zzast_hrtypez00(obj_t, obj_t);
	static obj_t BGl_hrtypezd2nodez12zd2kwote3328z12zzast_hrtypez00(obj_t, obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	static obj_t
		BGl_restorezd2variablezd2typez12z12zzast_hrtypez00(BgL_variablez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_hrtypez00();
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_GENERIC(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
		BgL_bgl__hrtypeza7d2nodeza713643z00,
		BGl__hrtypezd2nodez12zc0zzast_hrtypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_hrtypezd2nodez12zd2default3323zd2envzc0zzast_hrtypez00,
		BgL_bgl__hrtypeza7d2nodeza713644z00,
		BGl__hrtypezd2nodez12zd2default3323z12zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3615z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123645z00,
		BGl_hrtypezd2nodez12zd2atom3326z12zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3616z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123646z00,
		BGl_hrtypezd2nodez12zd2kwote3328z12zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3617z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123647z00,
		BGl_hrtypezd2nodez12zd2var3331z12zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3618z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123648z00,
		BGl_hrtypezd2nodez12zd2closure3333z12zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3620z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123649z00,
		BGl_hrtypezd2nodez12zd2app3337z12zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3619z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123650z00,
		BGl_hrtypezd2nodez12zd2sequenc3335z12zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3621z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123651z00,
		BGl_hrtypezd2nodez12zd2appzd2ly3339zc0zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3622z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123652z00,
		BGl_hrtypezd2nodez12zd2funcall3341z12zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3623z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123653z00,
		BGl_hrtypezd2nodez12zd2extern3343z12zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3624z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123654z00,
		BGl_hrtypezd2nodez12zd2cast3345z12zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3625z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123655z00,
		BGl_hrtypezd2nodez12zd2setq3348z12zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3626z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123656z00,
		BGl_hrtypezd2nodez12zd2conditi3351z12zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3627z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123657z00,
		BGl_hrtypezd2nodez12zd2fail3353z12zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3628z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123658z00,
		BGl_hrtypezd2nodez12zd2select3355z12zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3630z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123659z00,
		BGl_hrtypezd2nodez12zd2letzd2var3359zc0zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3629z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123660z00,
		BGl_hrtypezd2nodez12zd2letzd2fun3357zc0zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3631z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123661z00,
		BGl_hrtypezd2nodez12zd2setzd2exzd23361z12zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3632z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123662z00,
		BGl_hrtypezd2nodez12zd2jumpzd2ex3363zc0zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3633z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123663z00,
		BGl_hrtypezd2nodez12zd2makezd2bo3365zc0zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3634z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123664z00,
		BGl_hrtypezd2nodez12zd2boxzd2set3367zc0zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3635z00zzast_hrtypez00,
		BgL_bgl_hrtypeza7d2nodeza7123665z00,
		BGl_hrtypezd2nodez12zd2boxzd2ref3370zc0zzast_hrtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3613z00zzast_hrtypez00,
		BgL_bgl_string3613za700za7za7a3666za7, "hrtype-node!", 12);
	      DEFINE_STRING(BGl_string3614z00zzast_hrtypez00,
		BgL_bgl_string3614za700za7za7a3667za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3636z00zzast_hrtypez00,
		BgL_bgl_string3636za700za7za7a3668za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string3637z00zzast_hrtypez00,
		BgL_bgl_string3637za700za7za7a3669za7, "heap", 4);
	      DEFINE_STRING(BGl_string3638z00zzast_hrtypez00,
		BgL_bgl_string3638za700za7za7a3670za7, "Can't find library variable", 27);
	      DEFINE_STRING(BGl_string3640z00zzast_hrtypez00,
		BgL_bgl_string3640za700za7za7a3671za7,
		"static sifun hrtype-node!-default3323 ", 38);
	      DEFINE_STRING(BGl_string3639z00zzast_hrtypez00,
		BgL_bgl_string3639za700za7za7a3672za7, "ast_hrtype", 10);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_hrtypez00(long
		BgL_checksumz00_2391, char *BgL_fromz00_2392)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_hrtypez00))
				{
					BGl_requirezd2initializa7ationz75zzast_hrtypez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_hrtypez00();
					BGl_cnstzd2initzd2zzast_hrtypez00();
					BGl_importedzd2moduleszd2initz00zzast_hrtypez00();
					BGl_genericzd2initzd2zzast_hrtypez00();
					BGl_methodzd2initzd2zzast_hrtypez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_hrtypez00()
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 17 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_hrtype");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_hrtype");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_hrtype");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_hrtypez00()
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 17 */
			{	/* Ast/hrtype.scm 17 */
				obj_t BgL_cportz00_2380;

				BgL_cportz00_2380 =
					bgl_open_input_string(BGl_string3640z00zzast_hrtypez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2381;

					BgL_iz00_2381 = ((long) 2);
				BgL_loopz00_2382:
					if ((BgL_iz00_2381 == ((long) -1)))
						{	/* Ast/hrtype.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Ast/hrtype.scm 17 */
							{	/* Ast/hrtype.scm 17 */
								obj_t BgL_arg3642z00_2384;

								{	/* Ast/hrtype.scm 17 */

									{	/* Ast/hrtype.scm 17 */
										obj_t BgL_locationz00_2386;

										BgL_locationz00_2386 = BBOOL(((bool_t) 0));
										{	/* Ast/hrtype.scm 17 */

											BgL_arg3642z00_2384 =
												BGl_readz00zz__readerz00(BgL_cportz00_2380,
												BgL_locationz00_2386);
										}
									}
								}
								{	/* Ast/hrtype.scm 17 */
									int BgL_auxz00_2410;

									BgL_auxz00_2410 = (int) (BgL_iz00_2381);
									CNST_TABLE_SET(BgL_auxz00_2410, BgL_arg3642z00_2384);
							}}
							{	/* Ast/hrtype.scm 17 */
								int BgL_auxz00_2387;

								BgL_auxz00_2387 = (int) ((BgL_iz00_2381 - ((long) 1)));
								{
									long BgL_iz00_2415;

									BgL_iz00_2415 = (long) (BgL_auxz00_2387);
									BgL_iz00_2381 = BgL_iz00_2415;
									goto BgL_loopz00_2382;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_hrtypez00()
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 17 */
			return BUNSPEC;
		}
	}



/* hrtype-node*! */
	bool_t BGl_hrtypezd2nodeza2z12z62zzast_hrtypez00(obj_t BgL_nodeza2za2_24)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 285 */
			{
				obj_t BgL_l3321z00_809;

				BgL_l3321z00_809 = BgL_nodeza2za2_24;
			BgL_zc3anonymousza33371ze3z83_810:
				if (PAIRP(BgL_l3321z00_809))
					{	/* Ast/hrtype.scm 286 */
						{	/* Ast/hrtype.scm 286 */
							obj_t BgL_arg3373z00_812;

							BgL_arg3373z00_812 = CAR(BgL_l3321z00_809);
							{	/* Ast/hrtype.scm 286 */
								BgL_nodez00_bglt BgL_nodez00_1460;

								BgL_nodez00_1460 = (BgL_nodez00_bglt) (BgL_arg3373z00_812);
								{	/* Ast/hrtype.scm 286 */
									obj_t BgL_method3324z00_1461;

									{	/* Ast/hrtype.scm 286 */
										BgL_objectz00_bglt BgL_objz00_1462;

										BgL_objz00_1462 = (BgL_objectz00_bglt) (BgL_nodez00_1460);
										{	/* Ast/hrtype.scm 286 */
											long BgL_objzd2classzd2numz00_1463;

											BgL_objzd2classzd2numz00_1463 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1462);
											{	/* Ast/hrtype.scm 286 */
												obj_t BgL_arg2643z00_1464;

												BgL_arg2643z00_1464 =
													PROCEDURE_REF
													(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
													(int) (((long) 1)));
												{	/* Ast/hrtype.scm 286 */
													obj_t BgL_arrayz00_1466;

													int BgL_offsetz00_1467;

													BgL_arrayz00_1466 = BgL_arg2643z00_1464;
													BgL_offsetz00_1467 =
														(int) (BgL_objzd2classzd2numz00_1463);
													{	/* Ast/hrtype.scm 286 */
														long BgL_offsetz00_1468;

														BgL_offsetz00_1468 =
															((long) (BgL_offsetz00_1467) - OBJECT_TYPE);
														{	/* Ast/hrtype.scm 286 */
															long BgL_modz00_1469;

															{	/* Ast/hrtype.scm 286 */
																int BgL_arg2645z00_1470;

																BgL_arg2645z00_1470 = (int) (((long) 16));
																{	/* Ast/hrtype.scm 286 */
																	long BgL_auxz00_2429;

																	BgL_auxz00_2429 =
																		(long) (BgL_arg2645z00_1470);
																	BgL_modz00_1469 =
																		(BgL_offsetz00_1468 / BgL_auxz00_2429);
															}}
															{	/* Ast/hrtype.scm 286 */
																long BgL_restz00_1471;

																{	/* Ast/hrtype.scm 286 */
																	int BgL_arg2644z00_1472;

																	BgL_arg2644z00_1472 = (int) (((long) 16));
																	{	/* Ast/hrtype.scm 286 */
																		long BgL_auxz00_2433;

																		BgL_auxz00_2433 =
																			(long) (BgL_arg2644z00_1472);
																		BgL_restz00_1471 =
																			(BgL_offsetz00_1468 % BgL_auxz00_2433);
																}}
																{	/* Ast/hrtype.scm 286 */

																	BgL_method3324z00_1461 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1466,
																			(int) (BgL_modz00_1469)),
																		(int) (BgL_restz00_1471));
									}}}}}}}}
									PROCEDURE_ENTRY(BgL_method3324z00_1461)
										(BgL_method3324z00_1461, (obj_t) (BgL_nodez00_1460), BEOA);
						}}}
						{
							obj_t BgL_l3321z00_2443;

							BgL_l3321z00_2443 = CDR(BgL_l3321z00_809);
							BgL_l3321z00_809 = BgL_l3321z00_2443;
							goto BgL_zc3anonymousza33371ze3z83_810;
						}
					}
				else
					{	/* Ast/hrtype.scm 286 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* restore-variable-type! */
	obj_t BGl_restorezd2variablezd2typez12z12zzast_hrtypez00(BgL_variablez00_bglt
		BgL_variablez00_25)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 291 */
			{	/* Ast/hrtype.scm 292 */
				BgL_typez00_bglt BgL_typez00_815;

				BgL_typez00_815 =
					(((BgL_variablez00_bglt) CREF(BgL_variablez00_25))->BgL_typez00);
				{	/* Ast/hrtype.scm 293 */
					bool_t BgL_testz00_2446;

					{	/* Ast/hrtype.scm 293 */
						obj_t BgL_obj1599z00_1488;

						BgL_obj1599z00_1488 = (obj_t) (BgL_typez00_815);
						BgL_testz00_2446 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj1599z00_1488,
							BGl_typez00zztype_typez00);
					}
					if (BgL_testz00_2446)
						{	/* Ast/hrtype.scm 294 */
							BgL_typez00_bglt BgL_arg3376z00_817;

							{	/* Ast/hrtype.scm 294 */
								obj_t BgL_arg3377z00_818;

								BgL_arg3377z00_818 =
									(((BgL_typez00_bglt) CREF(BgL_typez00_815))->BgL_idz00);
								BgL_arg3376z00_817 =
									BGl_findzd2typezd2zztype_envz00(BgL_arg3377z00_818);
							}
							return
								((((BgL_variablez00_bglt) CREF(BgL_variablez00_25))->
									BgL_typez00) =
								((BgL_typez00_bglt) BgL_arg3376z00_817), BUNSPEC);
						}
					else
						{	/* Ast/hrtype.scm 293 */
							return BFALSE;
						}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_hrtypez00()
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 17 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_hrtypezd2nodez12zd2default3323zd2envzc0zzast_hrtypez00,
				BGl_nodez00zzast_nodez00, BGl_string3613z00zzast_hrtypez00);
		}
	}



/* hrtype-node! */
	BGL_EXPORTED_DEF obj_t BGl_hrtypezd2nodez12zc0zzast_hrtypez00(BgL_nodez00_bglt
		BgL_nodez00_1)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 31 */
			{	/* Ast/hrtype.scm 31 */
				obj_t BgL_method3324z00_1492;

				{	/* Ast/hrtype.scm 31 */
					BgL_objectz00_bglt BgL_objz00_1493;

					BgL_objz00_1493 = (BgL_objectz00_bglt) (BgL_nodez00_1);
					{	/* Ast/hrtype.scm 31 */
						long BgL_objzd2classzd2numz00_1494;

						BgL_objzd2classzd2numz00_1494 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1493);
						{	/* Ast/hrtype.scm 31 */
							obj_t BgL_arg2643z00_1495;

							BgL_arg2643z00_1495 =
								PROCEDURE_REF(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
								(int) (((long) 1)));
							{	/* Ast/hrtype.scm 31 */
								obj_t BgL_arrayz00_1497;

								int BgL_offsetz00_1498;

								BgL_arrayz00_1497 = BgL_arg2643z00_1495;
								BgL_offsetz00_1498 = (int) (BgL_objzd2classzd2numz00_1494);
								{	/* Ast/hrtype.scm 31 */
									long BgL_offsetz00_1499;

									BgL_offsetz00_1499 =
										((long) (BgL_offsetz00_1498) - OBJECT_TYPE);
									{	/* Ast/hrtype.scm 31 */
										long BgL_modz00_1500;

										{	/* Ast/hrtype.scm 31 */
											int BgL_arg2645z00_1501;

											BgL_arg2645z00_1501 = (int) (((long) 16));
											{	/* Ast/hrtype.scm 31 */
												long BgL_auxz00_2461;

												BgL_auxz00_2461 = (long) (BgL_arg2645z00_1501);
												BgL_modz00_1500 =
													(BgL_offsetz00_1499 / BgL_auxz00_2461);
										}}
										{	/* Ast/hrtype.scm 31 */
											long BgL_restz00_1502;

											{	/* Ast/hrtype.scm 31 */
												int BgL_arg2644z00_1503;

												BgL_arg2644z00_1503 = (int) (((long) 16));
												{	/* Ast/hrtype.scm 31 */
													long BgL_auxz00_2465;

													BgL_auxz00_2465 = (long) (BgL_arg2644z00_1503);
													BgL_restz00_1502 =
														(BgL_offsetz00_1499 % BgL_auxz00_2465);
											}}
											{	/* Ast/hrtype.scm 31 */

												BgL_method3324z00_1492 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1497,
														(int) (BgL_modz00_1500)), (int) (BgL_restz00_1502));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3324z00_1492) (BgL_method3324z00_1492,
					(obj_t) (BgL_nodez00_1), BEOA);
			}
		}
	}



/* _hrtype-node! */
	obj_t BGl__hrtypezd2nodez12zc0zzast_hrtypez00(obj_t BgL_envz00_2313,
		obj_t BgL_nodez00_2314)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 31 */
			return
				BGl_hrtypezd2nodez12zc0zzast_hrtypez00(
				(BgL_nodez00_bglt) (BgL_nodez00_2314));
		}
	}



/* hrtype-node!-default3323 */
	obj_t BGl_hrtypezd2nodez12zd2default3323z12zzast_hrtypez00(BgL_nodez00_bglt
		BgL_nodez00_2)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 17 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string3614z00zzast_hrtypez00, (obj_t) (BgL_nodez00_2));
		}
	}



/* _hrtype-node!-default3323 */
	obj_t BGl__hrtypezd2nodez12zd2default3323z12zzast_hrtypez00(obj_t
		BgL_envz00_2315, obj_t BgL_nodez00_2316)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 17 */
			return
				BGl_hrtypezd2nodez12zd2default3323z12zzast_hrtypez00(
				(BgL_nodez00_bglt) (BgL_nodez00_2316));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_hrtypez00()
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 17 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00, BGl_atomz00zzast_nodez00,
				BGl_proc3615z00zzast_hrtypez00, BGl_string3613z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_kwotez00zzast_nodez00, BGl_proc3616z00zzast_hrtypez00,
				BGl_string3613z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00, BGl_varz00zzast_nodez00,
				BGl_proc3617z00zzast_hrtypez00, BGl_string3613z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_closurez00zzast_nodez00, BGl_proc3618z00zzast_hrtypez00,
				BGl_string3613z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_sequencez00zzast_nodez00, BGl_proc3619z00zzast_hrtypez00,
				BGl_string3613z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00, BGl_appz00zzast_nodez00,
				BGl_proc3620z00zzast_hrtypez00, BGl_string3613z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3621z00zzast_hrtypez00,
				BGl_string3613z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_funcallz00zzast_nodez00, BGl_proc3622z00zzast_hrtypez00,
				BGl_string3613z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_externz00zzast_nodez00, BGl_proc3623z00zzast_hrtypez00,
				BGl_string3613z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00, BGl_castz00zzast_nodez00,
				BGl_proc3624z00zzast_hrtypez00, BGl_string3613z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00, BGl_setqz00zzast_nodez00,
				BGl_proc3625z00zzast_hrtypez00, BGl_string3613z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3626z00zzast_hrtypez00,
				BGl_string3613z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00, BGl_failz00zzast_nodez00,
				BGl_proc3627z00zzast_hrtypez00, BGl_string3613z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_selectz00zzast_nodez00, BGl_proc3628z00zzast_hrtypez00,
				BGl_string3613z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3629z00zzast_hrtypez00,
				BGl_string3613z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3630z00zzast_hrtypez00,
				BGl_string3613z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3631z00zzast_hrtypez00,
				BGl_string3613z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3632z00zzast_hrtypez00,
				BGl_string3613z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3633z00zzast_hrtypez00,
				BGl_string3613z00zzast_hrtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3634z00zzast_hrtypez00,
				BGl_string3613z00zzast_hrtypez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3635z00zzast_hrtypez00,
				BGl_string3613z00zzast_hrtypez00);
		}
	}



/* hrtype-node!-box-ref3370 */
	obj_t BGl_hrtypezd2nodez12zd2boxzd2ref3370zc0zzast_hrtypez00(obj_t
		BgL_envz00_2338, obj_t BgL_nodez00_2339)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 278 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1451;

				BgL_nodez00_1451 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2339);
				{	/* Ast/hrtype.scm 279 */
					BgL_varz00_bglt BgL_arg3555z00_2285;

					BgL_arg3555z00_2285 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1451))->BgL_varz00);
					{	/* Ast/hrtype.scm 279 */
						BgL_nodez00_bglt BgL_nodez00_2287;

						BgL_nodez00_2287 = (BgL_nodez00_bglt) (BgL_arg3555z00_2285);
						{	/* Ast/hrtype.scm 279 */
							obj_t BgL_method3324z00_2288;

							{	/* Ast/hrtype.scm 279 */
								BgL_objectz00_bglt BgL_objz00_2289;

								BgL_objz00_2289 = (BgL_objectz00_bglt) (BgL_nodez00_2287);
								{	/* Ast/hrtype.scm 279 */
									long BgL_objzd2classzd2numz00_2290;

									BgL_objzd2classzd2numz00_2290 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2289);
									{	/* Ast/hrtype.scm 279 */
										obj_t BgL_arg2643z00_2291;

										BgL_arg2643z00_2291 =
											PROCEDURE_REF
											(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
											(int) (((long) 1)));
										{	/* Ast/hrtype.scm 279 */
											obj_t BgL_arrayz00_2293;

											int BgL_offsetz00_2294;

											BgL_arrayz00_2293 = BgL_arg2643z00_2291;
											BgL_offsetz00_2294 =
												(int) (BgL_objzd2classzd2numz00_2290);
											{	/* Ast/hrtype.scm 279 */
												long BgL_offsetz00_2295;

												BgL_offsetz00_2295 =
													((long) (BgL_offsetz00_2294) - OBJECT_TYPE);
												{	/* Ast/hrtype.scm 279 */
													long BgL_modz00_2296;

													{	/* Ast/hrtype.scm 279 */
														int BgL_arg2645z00_2297;

														BgL_arg2645z00_2297 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 279 */
															long BgL_auxz00_2513;

															BgL_auxz00_2513 = (long) (BgL_arg2645z00_2297);
															BgL_modz00_2296 =
																(BgL_offsetz00_2295 / BgL_auxz00_2513);
													}}
													{	/* Ast/hrtype.scm 279 */
														long BgL_restz00_2298;

														{	/* Ast/hrtype.scm 279 */
															int BgL_arg2644z00_2299;

															BgL_arg2644z00_2299 = (int) (((long) 16));
															{	/* Ast/hrtype.scm 279 */
																long BgL_auxz00_2517;

																BgL_auxz00_2517 = (long) (BgL_arg2644z00_2299);
																BgL_restz00_2298 =
																	(BgL_offsetz00_2295 % BgL_auxz00_2517);
														}}
														{	/* Ast/hrtype.scm 279 */

															BgL_method3324z00_2288 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2293,
																	(int) (BgL_modz00_2296)),
																(int) (BgL_restz00_2298));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3324z00_2288) (BgL_method3324z00_2288,
								(obj_t) (BgL_nodez00_2287), BEOA);
						}
					}
				}
			}
		}
	}



/* hrtype-node!-box-set3367 */
	obj_t BGl_hrtypezd2nodez12zd2boxzd2set3367zc0zzast_hrtypez00(obj_t
		BgL_envz00_2340, obj_t BgL_nodez00_2341)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 270 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1443;

				BgL_nodez00_1443 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2341);
				{	/* Ast/hrtype.scm 272 */
					BgL_varz00_bglt BgL_arg3552z00_1447;

					BgL_arg3552z00_1447 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1443))->BgL_varz00);
					{	/* Ast/hrtype.scm 272 */
						BgL_nodez00_bglt BgL_nodez00_2231;

						BgL_nodez00_2231 = (BgL_nodez00_bglt) (BgL_arg3552z00_1447);
						{	/* Ast/hrtype.scm 272 */
							obj_t BgL_method3324z00_2232;

							{	/* Ast/hrtype.scm 272 */
								BgL_objectz00_bglt BgL_objz00_2233;

								BgL_objz00_2233 = (BgL_objectz00_bglt) (BgL_nodez00_2231);
								{	/* Ast/hrtype.scm 272 */
									long BgL_objzd2classzd2numz00_2234;

									BgL_objzd2classzd2numz00_2234 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2233);
									{	/* Ast/hrtype.scm 272 */
										obj_t BgL_arg2643z00_2235;

										BgL_arg2643z00_2235 =
											PROCEDURE_REF
											(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
											(int) (((long) 1)));
										{	/* Ast/hrtype.scm 272 */
											obj_t BgL_arrayz00_2237;

											int BgL_offsetz00_2238;

											BgL_arrayz00_2237 = BgL_arg2643z00_2235;
											BgL_offsetz00_2238 =
												(int) (BgL_objzd2classzd2numz00_2234);
											{	/* Ast/hrtype.scm 272 */
												long BgL_offsetz00_2239;

												BgL_offsetz00_2239 =
													((long) (BgL_offsetz00_2238) - OBJECT_TYPE);
												{	/* Ast/hrtype.scm 272 */
													long BgL_modz00_2240;

													{	/* Ast/hrtype.scm 272 */
														int BgL_arg2645z00_2241;

														BgL_arg2645z00_2241 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 272 */
															long BgL_auxz00_2538;

															BgL_auxz00_2538 = (long) (BgL_arg2645z00_2241);
															BgL_modz00_2240 =
																(BgL_offsetz00_2239 / BgL_auxz00_2538);
													}}
													{	/* Ast/hrtype.scm 272 */
														long BgL_restz00_2242;

														{	/* Ast/hrtype.scm 272 */
															int BgL_arg2644z00_2243;

															BgL_arg2644z00_2243 = (int) (((long) 16));
															{	/* Ast/hrtype.scm 272 */
																long BgL_auxz00_2542;

																BgL_auxz00_2542 = (long) (BgL_arg2644z00_2243);
																BgL_restz00_2242 =
																	(BgL_offsetz00_2239 % BgL_auxz00_2542);
														}}
														{	/* Ast/hrtype.scm 272 */

															BgL_method3324z00_2232 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2237,
																	(int) (BgL_modz00_2240)),
																(int) (BgL_restz00_2242));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3324z00_2232) (BgL_method3324z00_2232,
								(obj_t) (BgL_nodez00_2231), BEOA);
				}}}
				{	/* Ast/hrtype.scm 273 */
					BgL_nodez00_bglt BgL_arg3553z00_1448;

					BgL_arg3553z00_1448 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1443))->BgL_valuez00);
					{	/* Ast/hrtype.scm 273 */
						obj_t BgL_method3324z00_2259;

						{	/* Ast/hrtype.scm 273 */
							BgL_objectz00_bglt BgL_objz00_2260;

							BgL_objz00_2260 = (BgL_objectz00_bglt) (BgL_arg3553z00_1448);
							{	/* Ast/hrtype.scm 273 */
								long BgL_objzd2classzd2numz00_2261;

								BgL_objzd2classzd2numz00_2261 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2260);
								{	/* Ast/hrtype.scm 273 */
									obj_t BgL_arg2643z00_2262;

									BgL_arg2643z00_2262 =
										PROCEDURE_REF(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
										(int) (((long) 1)));
									{	/* Ast/hrtype.scm 273 */
										obj_t BgL_arrayz00_2264;

										int BgL_offsetz00_2265;

										BgL_arrayz00_2264 = BgL_arg2643z00_2262;
										BgL_offsetz00_2265 = (int) (BgL_objzd2classzd2numz00_2261);
										{	/* Ast/hrtype.scm 273 */
											long BgL_offsetz00_2266;

											BgL_offsetz00_2266 =
												((long) (BgL_offsetz00_2265) - OBJECT_TYPE);
											{	/* Ast/hrtype.scm 273 */
												long BgL_modz00_2267;

												{	/* Ast/hrtype.scm 273 */
													int BgL_arg2645z00_2268;

													BgL_arg2645z00_2268 = (int) (((long) 16));
													{	/* Ast/hrtype.scm 273 */
														long BgL_auxz00_2561;

														BgL_auxz00_2561 = (long) (BgL_arg2645z00_2268);
														BgL_modz00_2267 =
															(BgL_offsetz00_2266 / BgL_auxz00_2561);
												}}
												{	/* Ast/hrtype.scm 273 */
													long BgL_restz00_2269;

													{	/* Ast/hrtype.scm 273 */
														int BgL_arg2644z00_2270;

														BgL_arg2644z00_2270 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 273 */
															long BgL_auxz00_2565;

															BgL_auxz00_2565 = (long) (BgL_arg2644z00_2270);
															BgL_restz00_2269 =
																(BgL_offsetz00_2266 % BgL_auxz00_2565);
													}}
													{	/* Ast/hrtype.scm 273 */

														BgL_method3324z00_2259 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2264,
																(int) (BgL_modz00_2267)),
															(int) (BgL_restz00_2269));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3324z00_2259) (BgL_method3324z00_2259,
							(obj_t) (BgL_arg3553z00_1448), BEOA);
					}
				}
			}
		}
	}



/* hrtype-node!-make-bo3365 */
	obj_t BGl_hrtypezd2nodez12zd2makezd2bo3365zc0zzast_hrtypez00(obj_t
		BgL_envz00_2342, obj_t BgL_nodez00_2343)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 263 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1436;

				BgL_nodez00_1436 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2343);
				{	/* Ast/hrtype.scm 264 */
					BgL_nodez00_bglt BgL_arg3550z00_2202;

					BgL_arg3550z00_2202 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1436))->BgL_valuez00);
					{	/* Ast/hrtype.scm 264 */
						obj_t BgL_method3324z00_2205;

						{	/* Ast/hrtype.scm 264 */
							BgL_objectz00_bglt BgL_objz00_2206;

							BgL_objz00_2206 = (BgL_objectz00_bglt) (BgL_arg3550z00_2202);
							{	/* Ast/hrtype.scm 264 */
								long BgL_objzd2classzd2numz00_2207;

								BgL_objzd2classzd2numz00_2207 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2206);
								{	/* Ast/hrtype.scm 264 */
									obj_t BgL_arg2643z00_2208;

									BgL_arg2643z00_2208 =
										PROCEDURE_REF(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
										(int) (((long) 1)));
									{	/* Ast/hrtype.scm 264 */
										obj_t BgL_arrayz00_2210;

										int BgL_offsetz00_2211;

										BgL_arrayz00_2210 = BgL_arg2643z00_2208;
										BgL_offsetz00_2211 = (int) (BgL_objzd2classzd2numz00_2207);
										{	/* Ast/hrtype.scm 264 */
											long BgL_offsetz00_2212;

											BgL_offsetz00_2212 =
												((long) (BgL_offsetz00_2211) - OBJECT_TYPE);
											{	/* Ast/hrtype.scm 264 */
												long BgL_modz00_2213;

												{	/* Ast/hrtype.scm 264 */
													int BgL_arg2645z00_2214;

													BgL_arg2645z00_2214 = (int) (((long) 16));
													{	/* Ast/hrtype.scm 264 */
														long BgL_auxz00_2585;

														BgL_auxz00_2585 = (long) (BgL_arg2645z00_2214);
														BgL_modz00_2213 =
															(BgL_offsetz00_2212 / BgL_auxz00_2585);
												}}
												{	/* Ast/hrtype.scm 264 */
													long BgL_restz00_2215;

													{	/* Ast/hrtype.scm 264 */
														int BgL_arg2644z00_2216;

														BgL_arg2644z00_2216 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 264 */
															long BgL_auxz00_2589;

															BgL_auxz00_2589 = (long) (BgL_arg2644z00_2216);
															BgL_restz00_2215 =
																(BgL_offsetz00_2212 % BgL_auxz00_2589);
													}}
													{	/* Ast/hrtype.scm 264 */

														BgL_method3324z00_2205 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2210,
																(int) (BgL_modz00_2213)),
															(int) (BgL_restz00_2215));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3324z00_2205) (BgL_method3324z00_2205,
							(obj_t) (BgL_arg3550z00_2202), BEOA);
					}
				}
			}
		}
	}



/* hrtype-node!-jump-ex3363 */
	obj_t BGl_hrtypezd2nodez12zd2jumpzd2ex3363zc0zzast_hrtypez00(obj_t
		BgL_envz00_2344, obj_t BgL_nodez00_2345)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 255 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1428;

				BgL_nodez00_1428 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2345);
				{	/* Ast/hrtype.scm 257 */
					BgL_nodez00_bglt BgL_arg3547z00_1432;

					BgL_arg3547z00_1432 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1428))->
						BgL_exitz00);
					{	/* Ast/hrtype.scm 257 */
						obj_t BgL_method3324z00_2149;

						{	/* Ast/hrtype.scm 257 */
							BgL_objectz00_bglt BgL_objz00_2150;

							BgL_objz00_2150 = (BgL_objectz00_bglt) (BgL_arg3547z00_1432);
							{	/* Ast/hrtype.scm 257 */
								long BgL_objzd2classzd2numz00_2151;

								BgL_objzd2classzd2numz00_2151 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2150);
								{	/* Ast/hrtype.scm 257 */
									obj_t BgL_arg2643z00_2152;

									BgL_arg2643z00_2152 =
										PROCEDURE_REF(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
										(int) (((long) 1)));
									{	/* Ast/hrtype.scm 257 */
										obj_t BgL_arrayz00_2154;

										int BgL_offsetz00_2155;

										BgL_arrayz00_2154 = BgL_arg2643z00_2152;
										BgL_offsetz00_2155 = (int) (BgL_objzd2classzd2numz00_2151);
										{	/* Ast/hrtype.scm 257 */
											long BgL_offsetz00_2156;

											BgL_offsetz00_2156 =
												((long) (BgL_offsetz00_2155) - OBJECT_TYPE);
											{	/* Ast/hrtype.scm 257 */
												long BgL_modz00_2157;

												{	/* Ast/hrtype.scm 257 */
													int BgL_arg2645z00_2158;

													BgL_arg2645z00_2158 = (int) (((long) 16));
													{	/* Ast/hrtype.scm 257 */
														long BgL_auxz00_2609;

														BgL_auxz00_2609 = (long) (BgL_arg2645z00_2158);
														BgL_modz00_2157 =
															(BgL_offsetz00_2156 / BgL_auxz00_2609);
												}}
												{	/* Ast/hrtype.scm 257 */
													long BgL_restz00_2159;

													{	/* Ast/hrtype.scm 257 */
														int BgL_arg2644z00_2160;

														BgL_arg2644z00_2160 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 257 */
															long BgL_auxz00_2613;

															BgL_auxz00_2613 = (long) (BgL_arg2644z00_2160);
															BgL_restz00_2159 =
																(BgL_offsetz00_2156 % BgL_auxz00_2613);
													}}
													{	/* Ast/hrtype.scm 257 */

														BgL_method3324z00_2149 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2154,
																(int) (BgL_modz00_2157)),
															(int) (BgL_restz00_2159));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3324z00_2149) (BgL_method3324z00_2149,
							(obj_t) (BgL_arg3547z00_1432), BEOA);
				}}
				{	/* Ast/hrtype.scm 258 */
					BgL_nodez00_bglt BgL_arg3548z00_1433;

					BgL_arg3548z00_1433 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1428))->
						BgL_valuez00);
					{	/* Ast/hrtype.scm 258 */
						obj_t BgL_method3324z00_2176;

						{	/* Ast/hrtype.scm 258 */
							BgL_objectz00_bglt BgL_objz00_2177;

							BgL_objz00_2177 = (BgL_objectz00_bglt) (BgL_arg3548z00_1433);
							{	/* Ast/hrtype.scm 258 */
								long BgL_objzd2classzd2numz00_2178;

								BgL_objzd2classzd2numz00_2178 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2177);
								{	/* Ast/hrtype.scm 258 */
									obj_t BgL_arg2643z00_2179;

									BgL_arg2643z00_2179 =
										PROCEDURE_REF(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
										(int) (((long) 1)));
									{	/* Ast/hrtype.scm 258 */
										obj_t BgL_arrayz00_2181;

										int BgL_offsetz00_2182;

										BgL_arrayz00_2181 = BgL_arg2643z00_2179;
										BgL_offsetz00_2182 = (int) (BgL_objzd2classzd2numz00_2178);
										{	/* Ast/hrtype.scm 258 */
											long BgL_offsetz00_2183;

											BgL_offsetz00_2183 =
												((long) (BgL_offsetz00_2182) - OBJECT_TYPE);
											{	/* Ast/hrtype.scm 258 */
												long BgL_modz00_2184;

												{	/* Ast/hrtype.scm 258 */
													int BgL_arg2645z00_2185;

													BgL_arg2645z00_2185 = (int) (((long) 16));
													{	/* Ast/hrtype.scm 258 */
														long BgL_auxz00_2632;

														BgL_auxz00_2632 = (long) (BgL_arg2645z00_2185);
														BgL_modz00_2184 =
															(BgL_offsetz00_2183 / BgL_auxz00_2632);
												}}
												{	/* Ast/hrtype.scm 258 */
													long BgL_restz00_2186;

													{	/* Ast/hrtype.scm 258 */
														int BgL_arg2644z00_2187;

														BgL_arg2644z00_2187 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 258 */
															long BgL_auxz00_2636;

															BgL_auxz00_2636 = (long) (BgL_arg2644z00_2187);
															BgL_restz00_2186 =
																(BgL_offsetz00_2183 % BgL_auxz00_2636);
													}}
													{	/* Ast/hrtype.scm 258 */

														BgL_method3324z00_2176 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2181,
																(int) (BgL_modz00_2184)),
															(int) (BgL_restz00_2186));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3324z00_2176) (BgL_method3324z00_2176,
							(obj_t) (BgL_arg3548z00_1433), BEOA);
					}
				}
			}
		}
	}



/* hrtype-node!-set-ex-3361 */
	obj_t BGl_hrtypezd2nodez12zd2setzd2exzd23361z12zzast_hrtypez00(obj_t
		BgL_envz00_2346, obj_t BgL_nodez00_2347)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 246 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1418;

				BgL_nodez00_1418 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2347);
				{	/* Ast/hrtype.scm 248 */
					BgL_variablez00_bglt BgL_arg3542z00_1422;

					{	/* Ast/hrtype.scm 248 */
						BgL_varz00_bglt BgL_obj2178z00_2092;

						BgL_obj2178z00_2092 =
							(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1418))->
							BgL_varz00);
						BgL_arg3542z00_1422 =
							(((BgL_varz00_bglt) CREF(BgL_obj2178z00_2092))->BgL_variablez00);
					}
					BGl_restorezd2variablezd2typez12z12zzast_hrtypez00
						(BgL_arg3542z00_1422);
				}
				{	/* Ast/hrtype.scm 249 */
					BgL_nodez00_bglt BgL_arg3544z00_1424;

					BgL_arg3544z00_1424 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1418))->BgL_bodyz00);
					{	/* Ast/hrtype.scm 249 */
						obj_t BgL_method3324z00_2095;

						{	/* Ast/hrtype.scm 249 */
							BgL_objectz00_bglt BgL_objz00_2096;

							BgL_objz00_2096 = (BgL_objectz00_bglt) (BgL_arg3544z00_1424);
							{	/* Ast/hrtype.scm 249 */
								long BgL_objzd2classzd2numz00_2097;

								BgL_objzd2classzd2numz00_2097 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2096);
								{	/* Ast/hrtype.scm 249 */
									obj_t BgL_arg2643z00_2098;

									BgL_arg2643z00_2098 =
										PROCEDURE_REF(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
										(int) (((long) 1)));
									{	/* Ast/hrtype.scm 249 */
										obj_t BgL_arrayz00_2100;

										int BgL_offsetz00_2101;

										BgL_arrayz00_2100 = BgL_arg2643z00_2098;
										BgL_offsetz00_2101 = (int) (BgL_objzd2classzd2numz00_2097);
										{	/* Ast/hrtype.scm 249 */
											long BgL_offsetz00_2102;

											BgL_offsetz00_2102 =
												((long) (BgL_offsetz00_2101) - OBJECT_TYPE);
											{	/* Ast/hrtype.scm 249 */
												long BgL_modz00_2103;

												{	/* Ast/hrtype.scm 249 */
													int BgL_arg2645z00_2104;

													BgL_arg2645z00_2104 = (int) (((long) 16));
													{	/* Ast/hrtype.scm 249 */
														long BgL_auxz00_2659;

														BgL_auxz00_2659 = (long) (BgL_arg2645z00_2104);
														BgL_modz00_2103 =
															(BgL_offsetz00_2102 / BgL_auxz00_2659);
												}}
												{	/* Ast/hrtype.scm 249 */
													long BgL_restz00_2105;

													{	/* Ast/hrtype.scm 249 */
														int BgL_arg2644z00_2106;

														BgL_arg2644z00_2106 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 249 */
															long BgL_auxz00_2663;

															BgL_auxz00_2663 = (long) (BgL_arg2644z00_2106);
															BgL_restz00_2105 =
																(BgL_offsetz00_2102 % BgL_auxz00_2663);
													}}
													{	/* Ast/hrtype.scm 249 */

														BgL_method3324z00_2095 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2100,
																(int) (BgL_modz00_2103)),
															(int) (BgL_restz00_2105));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3324z00_2095) (BgL_method3324z00_2095,
							(obj_t) (BgL_arg3544z00_1424), BEOA);
				}}
				{	/* Ast/hrtype.scm 250 */
					BgL_varz00_bglt BgL_arg3545z00_1425;

					BgL_arg3545z00_1425 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1418))->BgL_varz00);
					{	/* Ast/hrtype.scm 250 */
						BgL_nodez00_bglt BgL_nodez00_2121;

						BgL_nodez00_2121 = (BgL_nodez00_bglt) (BgL_arg3545z00_1425);
						{	/* Ast/hrtype.scm 250 */
							obj_t BgL_method3324z00_2122;

							{	/* Ast/hrtype.scm 250 */
								BgL_objectz00_bglt BgL_objz00_2123;

								BgL_objz00_2123 = (BgL_objectz00_bglt) (BgL_nodez00_2121);
								{	/* Ast/hrtype.scm 250 */
									long BgL_objzd2classzd2numz00_2124;

									BgL_objzd2classzd2numz00_2124 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2123);
									{	/* Ast/hrtype.scm 250 */
										obj_t BgL_arg2643z00_2125;

										BgL_arg2643z00_2125 =
											PROCEDURE_REF
											(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
											(int) (((long) 1)));
										{	/* Ast/hrtype.scm 250 */
											obj_t BgL_arrayz00_2127;

											int BgL_offsetz00_2128;

											BgL_arrayz00_2127 = BgL_arg2643z00_2125;
											BgL_offsetz00_2128 =
												(int) (BgL_objzd2classzd2numz00_2124);
											{	/* Ast/hrtype.scm 250 */
												long BgL_offsetz00_2129;

												BgL_offsetz00_2129 =
													((long) (BgL_offsetz00_2128) - OBJECT_TYPE);
												{	/* Ast/hrtype.scm 250 */
													long BgL_modz00_2130;

													{	/* Ast/hrtype.scm 250 */
														int BgL_arg2645z00_2131;

														BgL_arg2645z00_2131 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 250 */
															long BgL_auxz00_2683;

															BgL_auxz00_2683 = (long) (BgL_arg2645z00_2131);
															BgL_modz00_2130 =
																(BgL_offsetz00_2129 / BgL_auxz00_2683);
													}}
													{	/* Ast/hrtype.scm 250 */
														long BgL_restz00_2132;

														{	/* Ast/hrtype.scm 250 */
															int BgL_arg2644z00_2133;

															BgL_arg2644z00_2133 = (int) (((long) 16));
															{	/* Ast/hrtype.scm 250 */
																long BgL_auxz00_2687;

																BgL_auxz00_2687 = (long) (BgL_arg2644z00_2133);
																BgL_restz00_2132 =
																	(BgL_offsetz00_2129 % BgL_auxz00_2687);
														}}
														{	/* Ast/hrtype.scm 250 */

															BgL_method3324z00_2122 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2127,
																	(int) (BgL_modz00_2130)),
																(int) (BgL_restz00_2132));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3324z00_2122) (BgL_method3324z00_2122,
								(obj_t) (BgL_nodez00_2121), BEOA);
						}
					}
				}
			}
		}
	}



/* hrtype-node!-let-var3359 */
	obj_t BGl_hrtypezd2nodez12zd2letzd2var3359zc0zzast_hrtypez00(obj_t
		BgL_envz00_2348, obj_t BgL_nodez00_2349)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 233 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1401;

				BgL_nodez00_1401 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2349);
				{	/* Ast/hrtype.scm 235 */
					obj_t BgL_g3320z00_1405;

					BgL_g3320z00_1405 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1401))->BgL_bindingsz00);
					{
						obj_t BgL_l3318z00_1407;

						BgL_l3318z00_1407 = BgL_g3320z00_1405;
					BgL_zc3anonymousza33537ze3z83_1408:
						if (PAIRP(BgL_l3318z00_1407))
							{	/* Ast/hrtype.scm 235 */
								{	/* Ast/hrtype.scm 236 */
									obj_t BgL_bindingz00_1410;

									BgL_bindingz00_1410 = CAR(BgL_l3318z00_1407);
									{	/* Ast/hrtype.scm 236 */
										obj_t BgL_varz00_1411;

										obj_t BgL_valz00_1412;

										BgL_varz00_1411 = CAR(BgL_bindingz00_1410);
										BgL_valz00_1412 = CDR(BgL_bindingz00_1410);
										{	/* Ast/hrtype.scm 238 */
											BgL_nodez00_bglt BgL_nodez00_2037;

											BgL_nodez00_2037 = (BgL_nodez00_bglt) (BgL_valz00_1412);
											{	/* Ast/hrtype.scm 238 */
												obj_t BgL_method3324z00_2038;

												{	/* Ast/hrtype.scm 238 */
													BgL_objectz00_bglt BgL_objz00_2039;

													BgL_objz00_2039 =
														(BgL_objectz00_bglt) (BgL_nodez00_2037);
													{	/* Ast/hrtype.scm 238 */
														long BgL_objzd2classzd2numz00_2040;

														BgL_objzd2classzd2numz00_2040 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2039);
														{	/* Ast/hrtype.scm 238 */
															obj_t BgL_arg2643z00_2041;

															BgL_arg2643z00_2041 =
																PROCEDURE_REF
																(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
																(int) (((long) 1)));
															{	/* Ast/hrtype.scm 238 */
																obj_t BgL_arrayz00_2043;

																int BgL_offsetz00_2044;

																BgL_arrayz00_2043 = BgL_arg2643z00_2041;
																BgL_offsetz00_2044 =
																	(int) (BgL_objzd2classzd2numz00_2040);
																{	/* Ast/hrtype.scm 238 */
																	long BgL_offsetz00_2045;

																	BgL_offsetz00_2045 =
																		((long) (BgL_offsetz00_2044) - OBJECT_TYPE);
																	{	/* Ast/hrtype.scm 238 */
																		long BgL_modz00_2046;

																		{	/* Ast/hrtype.scm 238 */
																			int BgL_arg2645z00_2047;

																			BgL_arg2645z00_2047 = (int) (((long) 16));
																			{	/* Ast/hrtype.scm 238 */
																				long BgL_auxz00_2713;

																				BgL_auxz00_2713 =
																					(long) (BgL_arg2645z00_2047);
																				BgL_modz00_2046 =
																					(BgL_offsetz00_2045 /
																					BgL_auxz00_2713);
																		}}
																		{	/* Ast/hrtype.scm 238 */
																			long BgL_restz00_2048;

																			{	/* Ast/hrtype.scm 238 */
																				int BgL_arg2644z00_2049;

																				BgL_arg2644z00_2049 =
																					(int) (((long) 16));
																				{	/* Ast/hrtype.scm 238 */
																					long BgL_auxz00_2717;

																					BgL_auxz00_2717 =
																						(long) (BgL_arg2644z00_2049);
																					BgL_restz00_2048 =
																						(BgL_offsetz00_2045 %
																						BgL_auxz00_2717);
																			}}
																			{	/* Ast/hrtype.scm 238 */

																				BgL_method3324z00_2038 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2043,
																						(int) (BgL_modz00_2046)),
																					(int) (BgL_restz00_2048));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method3324z00_2038)
													(BgL_method3324z00_2038, (obj_t) (BgL_nodez00_2037),
													BEOA);
										}}
										BGl_restorezd2variablezd2typez12z12zzast_hrtypez00(
											(BgL_variablez00_bglt) (BgL_varz00_1411));
								}}
								{
									obj_t BgL_l3318z00_2729;

									BgL_l3318z00_2729 = CDR(BgL_l3318z00_1407);
									BgL_l3318z00_1407 = BgL_l3318z00_2729;
									goto BgL_zc3anonymousza33537ze3z83_1408;
								}
							}
						else
							{	/* Ast/hrtype.scm 235 */
								((bool_t) 1);
							}
					}
				}
				{	/* Ast/hrtype.scm 241 */
					BgL_nodez00_bglt BgL_arg3540z00_1415;

					BgL_arg3540z00_1415 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1401))->BgL_bodyz00);
					{	/* Ast/hrtype.scm 241 */
						obj_t BgL_method3324z00_2066;

						{	/* Ast/hrtype.scm 241 */
							BgL_objectz00_bglt BgL_objz00_2067;

							BgL_objz00_2067 = (BgL_objectz00_bglt) (BgL_arg3540z00_1415);
							{	/* Ast/hrtype.scm 241 */
								long BgL_objzd2classzd2numz00_2068;

								BgL_objzd2classzd2numz00_2068 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2067);
								{	/* Ast/hrtype.scm 241 */
									obj_t BgL_arg2643z00_2069;

									BgL_arg2643z00_2069 =
										PROCEDURE_REF(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
										(int) (((long) 1)));
									{	/* Ast/hrtype.scm 241 */
										obj_t BgL_arrayz00_2071;

										int BgL_offsetz00_2072;

										BgL_arrayz00_2071 = BgL_arg2643z00_2069;
										BgL_offsetz00_2072 = (int) (BgL_objzd2classzd2numz00_2068);
										{	/* Ast/hrtype.scm 241 */
											long BgL_offsetz00_2073;

											BgL_offsetz00_2073 =
												((long) (BgL_offsetz00_2072) - OBJECT_TYPE);
											{	/* Ast/hrtype.scm 241 */
												long BgL_modz00_2074;

												{	/* Ast/hrtype.scm 241 */
													int BgL_arg2645z00_2075;

													BgL_arg2645z00_2075 = (int) (((long) 16));
													{	/* Ast/hrtype.scm 241 */
														long BgL_auxz00_2740;

														BgL_auxz00_2740 = (long) (BgL_arg2645z00_2075);
														BgL_modz00_2074 =
															(BgL_offsetz00_2073 / BgL_auxz00_2740);
												}}
												{	/* Ast/hrtype.scm 241 */
													long BgL_restz00_2076;

													{	/* Ast/hrtype.scm 241 */
														int BgL_arg2644z00_2077;

														BgL_arg2644z00_2077 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 241 */
															long BgL_auxz00_2744;

															BgL_auxz00_2744 = (long) (BgL_arg2644z00_2077);
															BgL_restz00_2076 =
																(BgL_offsetz00_2073 % BgL_auxz00_2744);
													}}
													{	/* Ast/hrtype.scm 241 */

														BgL_method3324z00_2066 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2071,
																(int) (BgL_modz00_2074)),
															(int) (BgL_restz00_2076));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3324z00_2066) (BgL_method3324z00_2066,
							(obj_t) (BgL_arg3540z00_1415), BEOA);
					}
				}
			}
		}
	}



/* hrtype-node!-let-fun3357 */
	obj_t BGl_hrtypezd2nodez12zd2letzd2fun3357zc0zzast_hrtypez00(obj_t
		BgL_envz00_2350, obj_t BgL_nodez00_2351)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 208 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1369;

				BgL_nodez00_1369 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2351);
				{	/* Ast/hrtype.scm 210 */
					obj_t BgL_g3317z00_1373;

					BgL_g3317z00_1373 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1369))->BgL_localsz00);
					{
						obj_t BgL_l3315z00_1375;

						BgL_l3315z00_1375 = BgL_g3317z00_1373;
					BgL_zc3anonymousza33520ze3z83_1376:
						if (PAIRP(BgL_l3315z00_1375))
							{	/* Ast/hrtype.scm 210 */
								{	/* Ast/hrtype.scm 211 */
									obj_t BgL_localz00_1378;

									BgL_localz00_1378 = CAR(BgL_l3315z00_1375);
									{	/* Ast/hrtype.scm 211 */
										BgL_valuez00_bglt BgL_sfunz00_1379;

										{
											BgL_variablez00_bglt BgL_auxz00_2759;

											BgL_auxz00_2759 =
												(BgL_variablez00_bglt) (BgL_localz00_1378);
											BgL_sfunz00_1379 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_2759))->
												BgL_valuez00);
										}
										{	/* Ast/hrtype.scm 212 */
											obj_t BgL_g3299z00_1380;

											{
												BgL_sfunz00_bglt BgL_auxz00_2762;

												BgL_auxz00_2762 = (BgL_sfunz00_bglt) (BgL_sfunz00_1379);
												BgL_g3299z00_1380 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2762))->
													BgL_argsz00);
											}
											{
												obj_t BgL_argsz00_1382;

												BgL_argsz00_1382 = BgL_g3299z00_1380;
											BgL_zc3anonymousza33522ze3z83_1383:
												if (PAIRP(BgL_argsz00_1382))
													{	/* Ast/hrtype.scm 214 */
														obj_t BgL_argz00_1385;

														BgL_argz00_1385 = CAR(BgL_argsz00_1382);
														if (BGl_iszd2azf3z21zz__objectz00(BgL_argz00_1385,
																BGl_typez00zztype_typez00))
															{	/* Ast/hrtype.scm 217 */
																BgL_typez00_bglt BgL_arg3525z00_1387;

																{	/* Ast/hrtype.scm 217 */
																	obj_t BgL_arg3526z00_1388;

																	{
																		BgL_typez00_bglt BgL_auxz00_2770;

																		BgL_auxz00_2770 =
																			(BgL_typez00_bglt) (BgL_argz00_1385);
																		BgL_arg3526z00_1388 =
																			(((BgL_typez00_bglt)
																				CREF(BgL_auxz00_2770))->BgL_idz00);
																	}
																	BgL_arg3525z00_1387 =
																		BGl_findzd2typezd2zztype_envz00
																		(BgL_arg3526z00_1388);
																}
																{	/* Ast/hrtype.scm 217 */
																	obj_t BgL_auxz00_2774;

																	BgL_auxz00_2774 =
																		(obj_t) (BgL_arg3525z00_1387);
																	SET_CAR(BgL_argsz00_1382, BgL_auxz00_2774);
																}
															}
														else
															{	/* Ast/hrtype.scm 216 */
																if (BGl_iszd2azf3z21zz__objectz00
																	(BgL_argz00_1385, BGl_localz00zzast_varz00))
																	{	/* Ast/hrtype.scm 218 */
																		BGl_restorezd2variablezd2typez12z12zzast_hrtypez00
																			((BgL_variablez00_bglt) (
																				(BgL_localz00_bglt) (BgL_argz00_1385)));
																	}
																else
																	{	/* Ast/hrtype.scm 218 */
																		BGl_errorz00zz__errorz00
																			(BGl_string3613z00zzast_hrtypez00,
																			BGl_string3636z00zzast_hrtypez00,
																			BGl_shapez00zztools_shapez00
																			(BgL_argz00_1385));
																	}
															}
														{
															obj_t BgL_argsz00_2784;

															BgL_argsz00_2784 = CDR(BgL_argsz00_1382);
															BgL_argsz00_1382 = BgL_argsz00_2784;
															goto BgL_zc3anonymousza33522ze3z83_1383;
														}
													}
												else
													{	/* Ast/hrtype.scm 213 */
														((bool_t) 0);
													}
											}
										}
										BGl_restorezd2variablezd2typez12z12zzast_hrtypez00(
											(BgL_variablez00_bglt) (BgL_localz00_1378));
										{	/* Ast/hrtype.scm 226 */
											obj_t BgL_arg3532z00_1395;

											{
												BgL_sfunz00_bglt BgL_auxz00_2788;

												BgL_auxz00_2788 = (BgL_sfunz00_bglt) (BgL_sfunz00_1379);
												BgL_arg3532z00_1395 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2788))->
													BgL_bodyz00);
											}
											{	/* Ast/hrtype.scm 226 */
												BgL_nodez00_bglt BgL_nodez00_1978;

												BgL_nodez00_1978 =
													(BgL_nodez00_bglt) (BgL_arg3532z00_1395);
												{	/* Ast/hrtype.scm 226 */
													obj_t BgL_method3324z00_1979;

													{	/* Ast/hrtype.scm 226 */
														BgL_objectz00_bglt BgL_objz00_1980;

														BgL_objz00_1980 =
															(BgL_objectz00_bglt) (BgL_nodez00_1978);
														{	/* Ast/hrtype.scm 226 */
															long BgL_objzd2classzd2numz00_1981;

															BgL_objzd2classzd2numz00_1981 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_1980);
															{	/* Ast/hrtype.scm 226 */
																obj_t BgL_arg2643z00_1982;

																BgL_arg2643z00_1982 =
																	PROCEDURE_REF
																	(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
																	(int) (((long) 1)));
																{	/* Ast/hrtype.scm 226 */
																	obj_t BgL_arrayz00_1984;

																	int BgL_offsetz00_1985;

																	BgL_arrayz00_1984 = BgL_arg2643z00_1982;
																	BgL_offsetz00_1985 =
																		(int) (BgL_objzd2classzd2numz00_1981);
																	{	/* Ast/hrtype.scm 226 */
																		long BgL_offsetz00_1986;

																		BgL_offsetz00_1986 =
																			(
																			(long) (BgL_offsetz00_1985) -
																			OBJECT_TYPE);
																		{	/* Ast/hrtype.scm 226 */
																			long BgL_modz00_1987;

																			{	/* Ast/hrtype.scm 226 */
																				int BgL_arg2645z00_1988;

																				BgL_arg2645z00_1988 =
																					(int) (((long) 16));
																				{	/* Ast/hrtype.scm 226 */
																					long BgL_auxz00_2800;

																					BgL_auxz00_2800 =
																						(long) (BgL_arg2645z00_1988);
																					BgL_modz00_1987 =
																						(BgL_offsetz00_1986 /
																						BgL_auxz00_2800);
																			}}
																			{	/* Ast/hrtype.scm 226 */
																				long BgL_restz00_1989;

																				{	/* Ast/hrtype.scm 226 */
																					int BgL_arg2644z00_1990;

																					BgL_arg2644z00_1990 =
																						(int) (((long) 16));
																					{	/* Ast/hrtype.scm 226 */
																						long BgL_auxz00_2804;

																						BgL_auxz00_2804 =
																							(long) (BgL_arg2644z00_1990);
																						BgL_restz00_1989 =
																							(BgL_offsetz00_1986 %
																							BgL_auxz00_2804);
																				}}
																				{	/* Ast/hrtype.scm 226 */

																					BgL_method3324z00_1979 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_1984,
																							(int) (BgL_modz00_1987)),
																						(int) (BgL_restz00_1989));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method3324z00_1979)
														(BgL_method3324z00_1979, (obj_t) (BgL_nodez00_1978),
														BEOA);
								}}}}}
								{
									obj_t BgL_l3315z00_2814;

									BgL_l3315z00_2814 = CDR(BgL_l3315z00_1375);
									BgL_l3315z00_1375 = BgL_l3315z00_2814;
									goto BgL_zc3anonymousza33520ze3z83_1376;
								}
							}
						else
							{	/* Ast/hrtype.scm 210 */
								((bool_t) 1);
							}
					}
				}
				{	/* Ast/hrtype.scm 228 */
					BgL_nodez00_bglt BgL_arg3535z00_1398;

					BgL_arg3535z00_1398 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1369))->BgL_bodyz00);
					{	/* Ast/hrtype.scm 228 */
						obj_t BgL_method3324z00_2007;

						{	/* Ast/hrtype.scm 228 */
							BgL_objectz00_bglt BgL_objz00_2008;

							BgL_objz00_2008 = (BgL_objectz00_bglt) (BgL_arg3535z00_1398);
							{	/* Ast/hrtype.scm 228 */
								long BgL_objzd2classzd2numz00_2009;

								BgL_objzd2classzd2numz00_2009 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2008);
								{	/* Ast/hrtype.scm 228 */
									obj_t BgL_arg2643z00_2010;

									BgL_arg2643z00_2010 =
										PROCEDURE_REF(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
										(int) (((long) 1)));
									{	/* Ast/hrtype.scm 228 */
										obj_t BgL_arrayz00_2012;

										int BgL_offsetz00_2013;

										BgL_arrayz00_2012 = BgL_arg2643z00_2010;
										BgL_offsetz00_2013 = (int) (BgL_objzd2classzd2numz00_2009);
										{	/* Ast/hrtype.scm 228 */
											long BgL_offsetz00_2014;

											BgL_offsetz00_2014 =
												((long) (BgL_offsetz00_2013) - OBJECT_TYPE);
											{	/* Ast/hrtype.scm 228 */
												long BgL_modz00_2015;

												{	/* Ast/hrtype.scm 228 */
													int BgL_arg2645z00_2016;

													BgL_arg2645z00_2016 = (int) (((long) 16));
													{	/* Ast/hrtype.scm 228 */
														long BgL_auxz00_2825;

														BgL_auxz00_2825 = (long) (BgL_arg2645z00_2016);
														BgL_modz00_2015 =
															(BgL_offsetz00_2014 / BgL_auxz00_2825);
												}}
												{	/* Ast/hrtype.scm 228 */
													long BgL_restz00_2017;

													{	/* Ast/hrtype.scm 228 */
														int BgL_arg2644z00_2018;

														BgL_arg2644z00_2018 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 228 */
															long BgL_auxz00_2829;

															BgL_auxz00_2829 = (long) (BgL_arg2644z00_2018);
															BgL_restz00_2017 =
																(BgL_offsetz00_2014 % BgL_auxz00_2829);
													}}
													{	/* Ast/hrtype.scm 228 */

														BgL_method3324z00_2007 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2012,
																(int) (BgL_modz00_2015)),
															(int) (BgL_restz00_2017));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3324z00_2007) (BgL_method3324z00_2007,
							(obj_t) (BgL_arg3535z00_1398), BEOA);
					}
				}
			}
		}
	}



/* hrtype-node!-select3355 */
	obj_t BGl_hrtypezd2nodez12zd2select3355z12zzast_hrtypez00(obj_t
		BgL_envz00_2352, obj_t BgL_nodez00_2353)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 198 */
			{
				BgL_selectz00_bglt BgL_nodez00_1353;

				{	/* Ast/hrtype.scm 199 */
					bool_t BgL_auxz00_2840;

					BgL_nodez00_1353 = (BgL_selectz00_bglt) (BgL_nodez00_2353);
					{	/* Ast/hrtype.scm 200 */
						BgL_nodez00_bglt BgL_arg3514z00_1357;

						BgL_arg3514z00_1357 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1353))->BgL_testz00);
						{	/* Ast/hrtype.scm 200 */
							obj_t BgL_method3324z00_1908;

							{	/* Ast/hrtype.scm 200 */
								BgL_objectz00_bglt BgL_objz00_1909;

								BgL_objz00_1909 = (BgL_objectz00_bglt) (BgL_arg3514z00_1357);
								{	/* Ast/hrtype.scm 200 */
									long BgL_objzd2classzd2numz00_1910;

									BgL_objzd2classzd2numz00_1910 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1909);
									{	/* Ast/hrtype.scm 200 */
										obj_t BgL_arg2643z00_1911;

										BgL_arg2643z00_1911 =
											PROCEDURE_REF
											(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
											(int) (((long) 1)));
										{	/* Ast/hrtype.scm 200 */
											obj_t BgL_arrayz00_1913;

											int BgL_offsetz00_1914;

											BgL_arrayz00_1913 = BgL_arg2643z00_1911;
											BgL_offsetz00_1914 =
												(int) (BgL_objzd2classzd2numz00_1910);
											{	/* Ast/hrtype.scm 200 */
												long BgL_offsetz00_1915;

												BgL_offsetz00_1915 =
													((long) (BgL_offsetz00_1914) - OBJECT_TYPE);
												{	/* Ast/hrtype.scm 200 */
													long BgL_modz00_1916;

													{	/* Ast/hrtype.scm 200 */
														int BgL_arg2645z00_1917;

														BgL_arg2645z00_1917 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 200 */
															long BgL_auxz00_2850;

															BgL_auxz00_2850 = (long) (BgL_arg2645z00_1917);
															BgL_modz00_1916 =
																(BgL_offsetz00_1915 / BgL_auxz00_2850);
													}}
													{	/* Ast/hrtype.scm 200 */
														long BgL_restz00_1918;

														{	/* Ast/hrtype.scm 200 */
															int BgL_arg2644z00_1919;

															BgL_arg2644z00_1919 = (int) (((long) 16));
															{	/* Ast/hrtype.scm 200 */
																long BgL_auxz00_2854;

																BgL_auxz00_2854 = (long) (BgL_arg2644z00_1919);
																BgL_restz00_1918 =
																	(BgL_offsetz00_1915 % BgL_auxz00_2854);
														}}
														{	/* Ast/hrtype.scm 200 */

															BgL_method3324z00_1908 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1913,
																	(int) (BgL_modz00_1916)),
																(int) (BgL_restz00_1918));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3324z00_1908) (BgL_method3324z00_1908,
								(obj_t) (BgL_arg3514z00_1357), BEOA);
					}}
					{	/* Ast/hrtype.scm 201 */
						obj_t BgL_g3314z00_1358;

						BgL_g3314z00_1358 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1353))->BgL_clausesz00);
						{
							obj_t BgL_l3312z00_1360;

							BgL_l3312z00_1360 = BgL_g3314z00_1358;
						BgL_zc3anonymousza33515ze3z83_1361:
							if (PAIRP(BgL_l3312z00_1360))
								{	/* Ast/hrtype.scm 201 */
									{	/* Ast/hrtype.scm 202 */
										obj_t BgL_clausez00_1363;

										BgL_clausez00_1363 = CAR(BgL_l3312z00_1360);
										{	/* Ast/hrtype.scm 202 */
											obj_t BgL_arg3517z00_1364;

											BgL_arg3517z00_1364 = CDR(BgL_clausez00_1363);
											{	/* Ast/hrtype.scm 202 */
												BgL_nodez00_bglt BgL_nodez00_1937;

												BgL_nodez00_1937 =
													(BgL_nodez00_bglt) (BgL_arg3517z00_1364);
												{	/* Ast/hrtype.scm 202 */
													obj_t BgL_method3324z00_1938;

													{	/* Ast/hrtype.scm 202 */
														BgL_objectz00_bglt BgL_objz00_1939;

														BgL_objz00_1939 =
															(BgL_objectz00_bglt) (BgL_nodez00_1937);
														{	/* Ast/hrtype.scm 202 */
															long BgL_objzd2classzd2numz00_1940;

															BgL_objzd2classzd2numz00_1940 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_1939);
															{	/* Ast/hrtype.scm 202 */
																obj_t BgL_arg2643z00_1941;

																BgL_arg2643z00_1941 =
																	PROCEDURE_REF
																	(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
																	(int) (((long) 1)));
																{	/* Ast/hrtype.scm 202 */
																	obj_t BgL_arrayz00_1943;

																	int BgL_offsetz00_1944;

																	BgL_arrayz00_1943 = BgL_arg2643z00_1941;
																	BgL_offsetz00_1944 =
																		(int) (BgL_objzd2classzd2numz00_1940);
																	{	/* Ast/hrtype.scm 202 */
																		long BgL_offsetz00_1945;

																		BgL_offsetz00_1945 =
																			(
																			(long) (BgL_offsetz00_1944) -
																			OBJECT_TYPE);
																		{	/* Ast/hrtype.scm 202 */
																			long BgL_modz00_1946;

																			{	/* Ast/hrtype.scm 202 */
																				int BgL_arg2645z00_1947;

																				BgL_arg2645z00_1947 =
																					(int) (((long) 16));
																				{	/* Ast/hrtype.scm 202 */
																					long BgL_auxz00_2878;

																					BgL_auxz00_2878 =
																						(long) (BgL_arg2645z00_1947);
																					BgL_modz00_1946 =
																						(BgL_offsetz00_1945 /
																						BgL_auxz00_2878);
																			}}
																			{	/* Ast/hrtype.scm 202 */
																				long BgL_restz00_1948;

																				{	/* Ast/hrtype.scm 202 */
																					int BgL_arg2644z00_1949;

																					BgL_arg2644z00_1949 =
																						(int) (((long) 16));
																					{	/* Ast/hrtype.scm 202 */
																						long BgL_auxz00_2882;

																						BgL_auxz00_2882 =
																							(long) (BgL_arg2644z00_1949);
																						BgL_restz00_1948 =
																							(BgL_offsetz00_1945 %
																							BgL_auxz00_2882);
																				}}
																				{	/* Ast/hrtype.scm 202 */

																					BgL_method3324z00_1938 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_1943,
																							(int) (BgL_modz00_1946)),
																						(int) (BgL_restz00_1948));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method3324z00_1938)
														(BgL_method3324z00_1938, (obj_t) (BgL_nodez00_1937),
														BEOA);
									}}}}
									{
										obj_t BgL_l3312z00_2892;

										BgL_l3312z00_2892 = CDR(BgL_l3312z00_1360);
										BgL_l3312z00_1360 = BgL_l3312z00_2892;
										goto BgL_zc3anonymousza33515ze3z83_1361;
									}
								}
							else
								{	/* Ast/hrtype.scm 201 */
									BgL_auxz00_2840 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_2840);
				}
			}
		}
	}



/* hrtype-node!-fail3353 */
	obj_t BGl_hrtypezd2nodez12zd2fail3353z12zzast_hrtypez00(obj_t BgL_envz00_2354,
		obj_t BgL_nodez00_2355)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 189 */
			{
				BgL_failz00_bglt BgL_nodez00_1344;

				BgL_nodez00_1344 = (BgL_failz00_bglt) (BgL_nodez00_2355);
				{	/* Ast/hrtype.scm 191 */
					BgL_nodez00_bglt BgL_arg3510z00_1348;

					BgL_arg3510z00_1348 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1344))->BgL_procz00);
					{	/* Ast/hrtype.scm 191 */
						obj_t BgL_method3324z00_1827;

						{	/* Ast/hrtype.scm 191 */
							BgL_objectz00_bglt BgL_objz00_1828;

							BgL_objz00_1828 = (BgL_objectz00_bglt) (BgL_arg3510z00_1348);
							{	/* Ast/hrtype.scm 191 */
								long BgL_objzd2classzd2numz00_1829;

								BgL_objzd2classzd2numz00_1829 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1828);
								{	/* Ast/hrtype.scm 191 */
									obj_t BgL_arg2643z00_1830;

									BgL_arg2643z00_1830 =
										PROCEDURE_REF(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
										(int) (((long) 1)));
									{	/* Ast/hrtype.scm 191 */
										obj_t BgL_arrayz00_1832;

										int BgL_offsetz00_1833;

										BgL_arrayz00_1832 = BgL_arg2643z00_1830;
										BgL_offsetz00_1833 = (int) (BgL_objzd2classzd2numz00_1829);
										{	/* Ast/hrtype.scm 191 */
											long BgL_offsetz00_1834;

											BgL_offsetz00_1834 =
												((long) (BgL_offsetz00_1833) - OBJECT_TYPE);
											{	/* Ast/hrtype.scm 191 */
												long BgL_modz00_1835;

												{	/* Ast/hrtype.scm 191 */
													int BgL_arg2645z00_1836;

													BgL_arg2645z00_1836 = (int) (((long) 16));
													{	/* Ast/hrtype.scm 191 */
														long BgL_auxz00_2905;

														BgL_auxz00_2905 = (long) (BgL_arg2645z00_1836);
														BgL_modz00_1835 =
															(BgL_offsetz00_1834 / BgL_auxz00_2905);
												}}
												{	/* Ast/hrtype.scm 191 */
													long BgL_restz00_1837;

													{	/* Ast/hrtype.scm 191 */
														int BgL_arg2644z00_1838;

														BgL_arg2644z00_1838 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 191 */
															long BgL_auxz00_2909;

															BgL_auxz00_2909 = (long) (BgL_arg2644z00_1838);
															BgL_restz00_1837 =
																(BgL_offsetz00_1834 % BgL_auxz00_2909);
													}}
													{	/* Ast/hrtype.scm 191 */

														BgL_method3324z00_1827 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1832,
																(int) (BgL_modz00_1835)),
															(int) (BgL_restz00_1837));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3324z00_1827) (BgL_method3324z00_1827,
							(obj_t) (BgL_arg3510z00_1348), BEOA);
				}}
				{	/* Ast/hrtype.scm 192 */
					BgL_nodez00_bglt BgL_arg3511z00_1349;

					BgL_arg3511z00_1349 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1344))->BgL_msgz00);
					{	/* Ast/hrtype.scm 192 */
						obj_t BgL_method3324z00_1854;

						{	/* Ast/hrtype.scm 192 */
							BgL_objectz00_bglt BgL_objz00_1855;

							BgL_objz00_1855 = (BgL_objectz00_bglt) (BgL_arg3511z00_1349);
							{	/* Ast/hrtype.scm 192 */
								long BgL_objzd2classzd2numz00_1856;

								BgL_objzd2classzd2numz00_1856 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1855);
								{	/* Ast/hrtype.scm 192 */
									obj_t BgL_arg2643z00_1857;

									BgL_arg2643z00_1857 =
										PROCEDURE_REF(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
										(int) (((long) 1)));
									{	/* Ast/hrtype.scm 192 */
										obj_t BgL_arrayz00_1859;

										int BgL_offsetz00_1860;

										BgL_arrayz00_1859 = BgL_arg2643z00_1857;
										BgL_offsetz00_1860 = (int) (BgL_objzd2classzd2numz00_1856);
										{	/* Ast/hrtype.scm 192 */
											long BgL_offsetz00_1861;

											BgL_offsetz00_1861 =
												((long) (BgL_offsetz00_1860) - OBJECT_TYPE);
											{	/* Ast/hrtype.scm 192 */
												long BgL_modz00_1862;

												{	/* Ast/hrtype.scm 192 */
													int BgL_arg2645z00_1863;

													BgL_arg2645z00_1863 = (int) (((long) 16));
													{	/* Ast/hrtype.scm 192 */
														long BgL_auxz00_2928;

														BgL_auxz00_2928 = (long) (BgL_arg2645z00_1863);
														BgL_modz00_1862 =
															(BgL_offsetz00_1861 / BgL_auxz00_2928);
												}}
												{	/* Ast/hrtype.scm 192 */
													long BgL_restz00_1864;

													{	/* Ast/hrtype.scm 192 */
														int BgL_arg2644z00_1865;

														BgL_arg2644z00_1865 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 192 */
															long BgL_auxz00_2932;

															BgL_auxz00_2932 = (long) (BgL_arg2644z00_1865);
															BgL_restz00_1864 =
																(BgL_offsetz00_1861 % BgL_auxz00_2932);
													}}
													{	/* Ast/hrtype.scm 192 */

														BgL_method3324z00_1854 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1859,
																(int) (BgL_modz00_1862)),
															(int) (BgL_restz00_1864));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3324z00_1854) (BgL_method3324z00_1854,
							(obj_t) (BgL_arg3511z00_1349), BEOA);
				}}
				{	/* Ast/hrtype.scm 193 */
					BgL_nodez00_bglt BgL_arg3512z00_1350;

					BgL_arg3512z00_1350 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1344))->BgL_objz00);
					{	/* Ast/hrtype.scm 193 */
						obj_t BgL_method3324z00_1881;

						{	/* Ast/hrtype.scm 193 */
							BgL_objectz00_bglt BgL_objz00_1882;

							BgL_objz00_1882 = (BgL_objectz00_bglt) (BgL_arg3512z00_1350);
							{	/* Ast/hrtype.scm 193 */
								long BgL_objzd2classzd2numz00_1883;

								BgL_objzd2classzd2numz00_1883 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1882);
								{	/* Ast/hrtype.scm 193 */
									obj_t BgL_arg2643z00_1884;

									BgL_arg2643z00_1884 =
										PROCEDURE_REF(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
										(int) (((long) 1)));
									{	/* Ast/hrtype.scm 193 */
										obj_t BgL_arrayz00_1886;

										int BgL_offsetz00_1887;

										BgL_arrayz00_1886 = BgL_arg2643z00_1884;
										BgL_offsetz00_1887 = (int) (BgL_objzd2classzd2numz00_1883);
										{	/* Ast/hrtype.scm 193 */
											long BgL_offsetz00_1888;

											BgL_offsetz00_1888 =
												((long) (BgL_offsetz00_1887) - OBJECT_TYPE);
											{	/* Ast/hrtype.scm 193 */
												long BgL_modz00_1889;

												{	/* Ast/hrtype.scm 193 */
													int BgL_arg2645z00_1890;

													BgL_arg2645z00_1890 = (int) (((long) 16));
													{	/* Ast/hrtype.scm 193 */
														long BgL_auxz00_2951;

														BgL_auxz00_2951 = (long) (BgL_arg2645z00_1890);
														BgL_modz00_1889 =
															(BgL_offsetz00_1888 / BgL_auxz00_2951);
												}}
												{	/* Ast/hrtype.scm 193 */
													long BgL_restz00_1891;

													{	/* Ast/hrtype.scm 193 */
														int BgL_arg2644z00_1892;

														BgL_arg2644z00_1892 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 193 */
															long BgL_auxz00_2955;

															BgL_auxz00_2955 = (long) (BgL_arg2644z00_1892);
															BgL_restz00_1891 =
																(BgL_offsetz00_1888 % BgL_auxz00_2955);
													}}
													{	/* Ast/hrtype.scm 193 */

														BgL_method3324z00_1881 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1886,
																(int) (BgL_modz00_1889)),
															(int) (BgL_restz00_1891));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3324z00_1881) (BgL_method3324z00_1881,
							(obj_t) (BgL_arg3512z00_1350), BEOA);
					}
				}
			}
		}
	}



/* hrtype-node!-conditi3351 */
	obj_t BGl_hrtypezd2nodez12zd2conditi3351z12zzast_hrtypez00(obj_t
		BgL_envz00_2356, obj_t BgL_nodez00_2357)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 180 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1335;

				BgL_nodez00_1335 = (BgL_conditionalz00_bglt) (BgL_nodez00_2357);
				{	/* Ast/hrtype.scm 182 */
					BgL_nodez00_bglt BgL_arg3506z00_1339;

					BgL_arg3506z00_1339 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1335))->BgL_testz00);
					{	/* Ast/hrtype.scm 182 */
						obj_t BgL_method3324z00_1746;

						{	/* Ast/hrtype.scm 182 */
							BgL_objectz00_bglt BgL_objz00_1747;

							BgL_objz00_1747 = (BgL_objectz00_bglt) (BgL_arg3506z00_1339);
							{	/* Ast/hrtype.scm 182 */
								long BgL_objzd2classzd2numz00_1748;

								BgL_objzd2classzd2numz00_1748 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1747);
								{	/* Ast/hrtype.scm 182 */
									obj_t BgL_arg2643z00_1749;

									BgL_arg2643z00_1749 =
										PROCEDURE_REF(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
										(int) (((long) 1)));
									{	/* Ast/hrtype.scm 182 */
										obj_t BgL_arrayz00_1751;

										int BgL_offsetz00_1752;

										BgL_arrayz00_1751 = BgL_arg2643z00_1749;
										BgL_offsetz00_1752 = (int) (BgL_objzd2classzd2numz00_1748);
										{	/* Ast/hrtype.scm 182 */
											long BgL_offsetz00_1753;

											BgL_offsetz00_1753 =
												((long) (BgL_offsetz00_1752) - OBJECT_TYPE);
											{	/* Ast/hrtype.scm 182 */
												long BgL_modz00_1754;

												{	/* Ast/hrtype.scm 182 */
													int BgL_arg2645z00_1755;

													BgL_arg2645z00_1755 = (int) (((long) 16));
													{	/* Ast/hrtype.scm 182 */
														long BgL_auxz00_2975;

														BgL_auxz00_2975 = (long) (BgL_arg2645z00_1755);
														BgL_modz00_1754 =
															(BgL_offsetz00_1753 / BgL_auxz00_2975);
												}}
												{	/* Ast/hrtype.scm 182 */
													long BgL_restz00_1756;

													{	/* Ast/hrtype.scm 182 */
														int BgL_arg2644z00_1757;

														BgL_arg2644z00_1757 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 182 */
															long BgL_auxz00_2979;

															BgL_auxz00_2979 = (long) (BgL_arg2644z00_1757);
															BgL_restz00_1756 =
																(BgL_offsetz00_1753 % BgL_auxz00_2979);
													}}
													{	/* Ast/hrtype.scm 182 */

														BgL_method3324z00_1746 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1751,
																(int) (BgL_modz00_1754)),
															(int) (BgL_restz00_1756));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3324z00_1746) (BgL_method3324z00_1746,
							(obj_t) (BgL_arg3506z00_1339), BEOA);
				}}
				{	/* Ast/hrtype.scm 183 */
					BgL_nodez00_bglt BgL_arg3507z00_1340;

					BgL_arg3507z00_1340 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1335))->BgL_truez00);
					{	/* Ast/hrtype.scm 183 */
						obj_t BgL_method3324z00_1773;

						{	/* Ast/hrtype.scm 183 */
							BgL_objectz00_bglt BgL_objz00_1774;

							BgL_objz00_1774 = (BgL_objectz00_bglt) (BgL_arg3507z00_1340);
							{	/* Ast/hrtype.scm 183 */
								long BgL_objzd2classzd2numz00_1775;

								BgL_objzd2classzd2numz00_1775 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1774);
								{	/* Ast/hrtype.scm 183 */
									obj_t BgL_arg2643z00_1776;

									BgL_arg2643z00_1776 =
										PROCEDURE_REF(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
										(int) (((long) 1)));
									{	/* Ast/hrtype.scm 183 */
										obj_t BgL_arrayz00_1778;

										int BgL_offsetz00_1779;

										BgL_arrayz00_1778 = BgL_arg2643z00_1776;
										BgL_offsetz00_1779 = (int) (BgL_objzd2classzd2numz00_1775);
										{	/* Ast/hrtype.scm 183 */
											long BgL_offsetz00_1780;

											BgL_offsetz00_1780 =
												((long) (BgL_offsetz00_1779) - OBJECT_TYPE);
											{	/* Ast/hrtype.scm 183 */
												long BgL_modz00_1781;

												{	/* Ast/hrtype.scm 183 */
													int BgL_arg2645z00_1782;

													BgL_arg2645z00_1782 = (int) (((long) 16));
													{	/* Ast/hrtype.scm 183 */
														long BgL_auxz00_2998;

														BgL_auxz00_2998 = (long) (BgL_arg2645z00_1782);
														BgL_modz00_1781 =
															(BgL_offsetz00_1780 / BgL_auxz00_2998);
												}}
												{	/* Ast/hrtype.scm 183 */
													long BgL_restz00_1783;

													{	/* Ast/hrtype.scm 183 */
														int BgL_arg2644z00_1784;

														BgL_arg2644z00_1784 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 183 */
															long BgL_auxz00_3002;

															BgL_auxz00_3002 = (long) (BgL_arg2644z00_1784);
															BgL_restz00_1783 =
																(BgL_offsetz00_1780 % BgL_auxz00_3002);
													}}
													{	/* Ast/hrtype.scm 183 */

														BgL_method3324z00_1773 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1778,
																(int) (BgL_modz00_1781)),
															(int) (BgL_restz00_1783));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3324z00_1773) (BgL_method3324z00_1773,
							(obj_t) (BgL_arg3507z00_1340), BEOA);
				}}
				{	/* Ast/hrtype.scm 184 */
					BgL_nodez00_bglt BgL_arg3508z00_1341;

					BgL_arg3508z00_1341 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1335))->BgL_falsez00);
					{	/* Ast/hrtype.scm 184 */
						obj_t BgL_method3324z00_1800;

						{	/* Ast/hrtype.scm 184 */
							BgL_objectz00_bglt BgL_objz00_1801;

							BgL_objz00_1801 = (BgL_objectz00_bglt) (BgL_arg3508z00_1341);
							{	/* Ast/hrtype.scm 184 */
								long BgL_objzd2classzd2numz00_1802;

								BgL_objzd2classzd2numz00_1802 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1801);
								{	/* Ast/hrtype.scm 184 */
									obj_t BgL_arg2643z00_1803;

									BgL_arg2643z00_1803 =
										PROCEDURE_REF(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
										(int) (((long) 1)));
									{	/* Ast/hrtype.scm 184 */
										obj_t BgL_arrayz00_1805;

										int BgL_offsetz00_1806;

										BgL_arrayz00_1805 = BgL_arg2643z00_1803;
										BgL_offsetz00_1806 = (int) (BgL_objzd2classzd2numz00_1802);
										{	/* Ast/hrtype.scm 184 */
											long BgL_offsetz00_1807;

											BgL_offsetz00_1807 =
												((long) (BgL_offsetz00_1806) - OBJECT_TYPE);
											{	/* Ast/hrtype.scm 184 */
												long BgL_modz00_1808;

												{	/* Ast/hrtype.scm 184 */
													int BgL_arg2645z00_1809;

													BgL_arg2645z00_1809 = (int) (((long) 16));
													{	/* Ast/hrtype.scm 184 */
														long BgL_auxz00_3021;

														BgL_auxz00_3021 = (long) (BgL_arg2645z00_1809);
														BgL_modz00_1808 =
															(BgL_offsetz00_1807 / BgL_auxz00_3021);
												}}
												{	/* Ast/hrtype.scm 184 */
													long BgL_restz00_1810;

													{	/* Ast/hrtype.scm 184 */
														int BgL_arg2644z00_1811;

														BgL_arg2644z00_1811 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 184 */
															long BgL_auxz00_3025;

															BgL_auxz00_3025 = (long) (BgL_arg2644z00_1811);
															BgL_restz00_1810 =
																(BgL_offsetz00_1807 % BgL_auxz00_3025);
													}}
													{	/* Ast/hrtype.scm 184 */

														BgL_method3324z00_1800 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1805,
																(int) (BgL_modz00_1808)),
															(int) (BgL_restz00_1810));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3324z00_1800) (BgL_method3324z00_1800,
							(obj_t) (BgL_arg3508z00_1341), BEOA);
					}
				}
			}
		}
	}



/* hrtype-node!-setq3348 */
	obj_t BGl_hrtypezd2nodez12zd2setq3348z12zzast_hrtypez00(obj_t BgL_envz00_2358,
		obj_t BgL_nodez00_2359)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 172 */
			{
				BgL_setqz00_bglt BgL_nodez00_1327;

				BgL_nodez00_1327 = (BgL_setqz00_bglt) (BgL_nodez00_2359);
				{	/* Ast/hrtype.scm 174 */
					BgL_nodez00_bglt BgL_arg3503z00_1331;

					BgL_arg3503z00_1331 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1327))->BgL_valuez00);
					{	/* Ast/hrtype.scm 174 */
						obj_t BgL_method3324z00_1692;

						{	/* Ast/hrtype.scm 174 */
							BgL_objectz00_bglt BgL_objz00_1693;

							BgL_objz00_1693 = (BgL_objectz00_bglt) (BgL_arg3503z00_1331);
							{	/* Ast/hrtype.scm 174 */
								long BgL_objzd2classzd2numz00_1694;

								BgL_objzd2classzd2numz00_1694 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1693);
								{	/* Ast/hrtype.scm 174 */
									obj_t BgL_arg2643z00_1695;

									BgL_arg2643z00_1695 =
										PROCEDURE_REF(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
										(int) (((long) 1)));
									{	/* Ast/hrtype.scm 174 */
										obj_t BgL_arrayz00_1697;

										int BgL_offsetz00_1698;

										BgL_arrayz00_1697 = BgL_arg2643z00_1695;
										BgL_offsetz00_1698 = (int) (BgL_objzd2classzd2numz00_1694);
										{	/* Ast/hrtype.scm 174 */
											long BgL_offsetz00_1699;

											BgL_offsetz00_1699 =
												((long) (BgL_offsetz00_1698) - OBJECT_TYPE);
											{	/* Ast/hrtype.scm 174 */
												long BgL_modz00_1700;

												{	/* Ast/hrtype.scm 174 */
													int BgL_arg2645z00_1701;

													BgL_arg2645z00_1701 = (int) (((long) 16));
													{	/* Ast/hrtype.scm 174 */
														long BgL_auxz00_3045;

														BgL_auxz00_3045 = (long) (BgL_arg2645z00_1701);
														BgL_modz00_1700 =
															(BgL_offsetz00_1699 / BgL_auxz00_3045);
												}}
												{	/* Ast/hrtype.scm 174 */
													long BgL_restz00_1702;

													{	/* Ast/hrtype.scm 174 */
														int BgL_arg2644z00_1703;

														BgL_arg2644z00_1703 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 174 */
															long BgL_auxz00_3049;

															BgL_auxz00_3049 = (long) (BgL_arg2644z00_1703);
															BgL_restz00_1702 =
																(BgL_offsetz00_1699 % BgL_auxz00_3049);
													}}
													{	/* Ast/hrtype.scm 174 */

														BgL_method3324z00_1692 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1697,
																(int) (BgL_modz00_1700)),
															(int) (BgL_restz00_1702));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3324z00_1692) (BgL_method3324z00_1692,
							(obj_t) (BgL_arg3503z00_1331), BEOA);
				}}
				{	/* Ast/hrtype.scm 175 */
					BgL_varz00_bglt BgL_arg3504z00_1332;

					BgL_arg3504z00_1332 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1327))->BgL_varz00);
					{	/* Ast/hrtype.scm 175 */
						BgL_nodez00_bglt BgL_nodez00_1718;

						BgL_nodez00_1718 = (BgL_nodez00_bglt) (BgL_arg3504z00_1332);
						{	/* Ast/hrtype.scm 175 */
							obj_t BgL_method3324z00_1719;

							{	/* Ast/hrtype.scm 175 */
								BgL_objectz00_bglt BgL_objz00_1720;

								BgL_objz00_1720 = (BgL_objectz00_bglt) (BgL_nodez00_1718);
								{	/* Ast/hrtype.scm 175 */
									long BgL_objzd2classzd2numz00_1721;

									BgL_objzd2classzd2numz00_1721 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1720);
									{	/* Ast/hrtype.scm 175 */
										obj_t BgL_arg2643z00_1722;

										BgL_arg2643z00_1722 =
											PROCEDURE_REF
											(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
											(int) (((long) 1)));
										{	/* Ast/hrtype.scm 175 */
											obj_t BgL_arrayz00_1724;

											int BgL_offsetz00_1725;

											BgL_arrayz00_1724 = BgL_arg2643z00_1722;
											BgL_offsetz00_1725 =
												(int) (BgL_objzd2classzd2numz00_1721);
											{	/* Ast/hrtype.scm 175 */
												long BgL_offsetz00_1726;

												BgL_offsetz00_1726 =
													((long) (BgL_offsetz00_1725) - OBJECT_TYPE);
												{	/* Ast/hrtype.scm 175 */
													long BgL_modz00_1727;

													{	/* Ast/hrtype.scm 175 */
														int BgL_arg2645z00_1728;

														BgL_arg2645z00_1728 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 175 */
															long BgL_auxz00_3069;

															BgL_auxz00_3069 = (long) (BgL_arg2645z00_1728);
															BgL_modz00_1727 =
																(BgL_offsetz00_1726 / BgL_auxz00_3069);
													}}
													{	/* Ast/hrtype.scm 175 */
														long BgL_restz00_1729;

														{	/* Ast/hrtype.scm 175 */
															int BgL_arg2644z00_1730;

															BgL_arg2644z00_1730 = (int) (((long) 16));
															{	/* Ast/hrtype.scm 175 */
																long BgL_auxz00_3073;

																BgL_auxz00_3073 = (long) (BgL_arg2644z00_1730);
																BgL_restz00_1729 =
																	(BgL_offsetz00_1726 % BgL_auxz00_3073);
														}}
														{	/* Ast/hrtype.scm 175 */

															BgL_method3324z00_1719 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1724,
																	(int) (BgL_modz00_1727)),
																(int) (BgL_restz00_1729));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3324z00_1719) (BgL_method3324z00_1719,
								(obj_t) (BgL_nodez00_1718), BEOA);
						}
					}
				}
			}
		}
	}



/* hrtype-node!-cast3345 */
	obj_t BGl_hrtypezd2nodez12zd2cast3345z12zzast_hrtypez00(obj_t BgL_envz00_2360,
		obj_t BgL_nodez00_2361)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 165 */
			{
				BgL_castz00_bglt BgL_nodez00_1320;

				BgL_nodez00_1320 = (BgL_castz00_bglt) (BgL_nodez00_2361);
				{	/* Ast/hrtype.scm 166 */
					BgL_nodez00_bglt BgL_arg3501z00_1662;

					BgL_arg3501z00_1662 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_1320))->BgL_argz00);
					{	/* Ast/hrtype.scm 166 */
						obj_t BgL_method3324z00_1665;

						{	/* Ast/hrtype.scm 166 */
							BgL_objectz00_bglt BgL_objz00_1666;

							BgL_objz00_1666 = (BgL_objectz00_bglt) (BgL_arg3501z00_1662);
							{	/* Ast/hrtype.scm 166 */
								long BgL_objzd2classzd2numz00_1667;

								BgL_objzd2classzd2numz00_1667 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1666);
								{	/* Ast/hrtype.scm 166 */
									obj_t BgL_arg2643z00_1668;

									BgL_arg2643z00_1668 =
										PROCEDURE_REF(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
										(int) (((long) 1)));
									{	/* Ast/hrtype.scm 166 */
										obj_t BgL_arrayz00_1670;

										int BgL_offsetz00_1671;

										BgL_arrayz00_1670 = BgL_arg2643z00_1668;
										BgL_offsetz00_1671 = (int) (BgL_objzd2classzd2numz00_1667);
										{	/* Ast/hrtype.scm 166 */
											long BgL_offsetz00_1672;

											BgL_offsetz00_1672 =
												((long) (BgL_offsetz00_1671) - OBJECT_TYPE);
											{	/* Ast/hrtype.scm 166 */
												long BgL_modz00_1673;

												{	/* Ast/hrtype.scm 166 */
													int BgL_arg2645z00_1674;

													BgL_arg2645z00_1674 = (int) (((long) 16));
													{	/* Ast/hrtype.scm 166 */
														long BgL_auxz00_3093;

														BgL_auxz00_3093 = (long) (BgL_arg2645z00_1674);
														BgL_modz00_1673 =
															(BgL_offsetz00_1672 / BgL_auxz00_3093);
												}}
												{	/* Ast/hrtype.scm 166 */
													long BgL_restz00_1675;

													{	/* Ast/hrtype.scm 166 */
														int BgL_arg2644z00_1676;

														BgL_arg2644z00_1676 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 166 */
															long BgL_auxz00_3097;

															BgL_auxz00_3097 = (long) (BgL_arg2644z00_1676);
															BgL_restz00_1675 =
																(BgL_offsetz00_1672 % BgL_auxz00_3097);
													}}
													{	/* Ast/hrtype.scm 166 */

														BgL_method3324z00_1665 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1670,
																(int) (BgL_modz00_1673)),
															(int) (BgL_restz00_1675));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3324z00_1665) (BgL_method3324z00_1665,
							(obj_t) (BgL_arg3501z00_1662), BEOA);
					}
				}
			}
		}
	}



/* hrtype-node!-extern3343 */
	obj_t BGl_hrtypezd2nodez12zd2extern3343z12zzast_hrtypez00(obj_t
		BgL_envz00_2362, obj_t BgL_nodez00_2363)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 156 */
			{
				BgL_externz00_bglt BgL_nodez00_1308;

				{	/* Ast/hrtype.scm 157 */
					bool_t BgL_auxz00_3108;

					BgL_nodez00_1308 = (BgL_externz00_bglt) (BgL_nodez00_2363);
					{	/* Ast/hrtype.scm 158 */
						bool_t BgL_testz00_3109;

						{	/* Ast/hrtype.scm 158 */
							BgL_typez00_bglt BgL_arg3498z00_1316;

							{
								BgL_nodez00_bglt BgL_auxz00_3110;

								BgL_auxz00_3110 = (BgL_nodez00_bglt) (BgL_nodez00_1308);
								BgL_arg3498z00_1316 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_3110))->BgL_typez00);
							}
							{	/* Ast/hrtype.scm 158 */
								obj_t BgL_obj1599z00_1655;

								BgL_obj1599z00_1655 = (obj_t) (BgL_arg3498z00_1316);
								BgL_testz00_3109 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1599z00_1655,
									BGl_typez00zztype_typez00);
							}
						}
						if (BgL_testz00_3109)
							{	/* Ast/hrtype.scm 159 */
								BgL_typez00_bglt BgL_arg3495z00_1313;

								{	/* Ast/hrtype.scm 159 */
									obj_t BgL_arg3496z00_1314;

									{	/* Ast/hrtype.scm 159 */
										BgL_typez00_bglt BgL_obj1508z00_1657;

										{
											BgL_nodez00_bglt BgL_auxz00_3115;

											BgL_auxz00_3115 = (BgL_nodez00_bglt) (BgL_nodez00_1308);
											BgL_obj1508z00_1657 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_3115))->
												BgL_typez00);
										}
										BgL_arg3496z00_1314 =
											(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1657))->
											BgL_idz00);
									}
									BgL_arg3495z00_1313 =
										BGl_findzd2typezd2zztype_envz00(BgL_arg3496z00_1314);
								}
								{
									BgL_nodez00_bglt BgL_auxz00_3120;

									BgL_auxz00_3120 = (BgL_nodez00_bglt) (BgL_nodez00_1308);
									((((BgL_nodez00_bglt) CREF(BgL_auxz00_3120))->BgL_typez00) =
										((BgL_typez00_bglt) BgL_arg3495z00_1313), BUNSPEC);
								}
							}
						else
							{	/* Ast/hrtype.scm 158 */
								BFALSE;
							}
					}
					{	/* Ast/hrtype.scm 160 */
						obj_t BgL_arg3499z00_1317;

						BgL_arg3499z00_1317 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1308))->BgL_exprza2za2);
						BgL_auxz00_3108 =
							BGl_hrtypezd2nodeza2z12z62zzast_hrtypez00(BgL_arg3499z00_1317);
					}
					return BBOOL(BgL_auxz00_3108);
				}
			}
		}
	}



/* hrtype-node!-funcall3341 */
	obj_t BGl_hrtypezd2nodez12zd2funcall3341z12zzast_hrtypez00(obj_t
		BgL_envz00_2364, obj_t BgL_nodez00_2365)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 148 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1300;

				{	/* Ast/hrtype.scm 149 */
					bool_t BgL_auxz00_3127;

					BgL_nodez00_1300 = (BgL_funcallz00_bglt) (BgL_nodez00_2365);
					{	/* Ast/hrtype.scm 150 */
						BgL_nodez00_bglt BgL_arg3491z00_1304;

						BgL_arg3491z00_1304 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1300))->BgL_funz00);
						{	/* Ast/hrtype.scm 150 */
							obj_t BgL_method3324z00_1628;

							{	/* Ast/hrtype.scm 150 */
								BgL_objectz00_bglt BgL_objz00_1629;

								BgL_objz00_1629 = (BgL_objectz00_bglt) (BgL_arg3491z00_1304);
								{	/* Ast/hrtype.scm 150 */
									long BgL_objzd2classzd2numz00_1630;

									BgL_objzd2classzd2numz00_1630 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1629);
									{	/* Ast/hrtype.scm 150 */
										obj_t BgL_arg2643z00_1631;

										BgL_arg2643z00_1631 =
											PROCEDURE_REF
											(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
											(int) (((long) 1)));
										{	/* Ast/hrtype.scm 150 */
											obj_t BgL_arrayz00_1633;

											int BgL_offsetz00_1634;

											BgL_arrayz00_1633 = BgL_arg2643z00_1631;
											BgL_offsetz00_1634 =
												(int) (BgL_objzd2classzd2numz00_1630);
											{	/* Ast/hrtype.scm 150 */
												long BgL_offsetz00_1635;

												BgL_offsetz00_1635 =
													((long) (BgL_offsetz00_1634) - OBJECT_TYPE);
												{	/* Ast/hrtype.scm 150 */
													long BgL_modz00_1636;

													{	/* Ast/hrtype.scm 150 */
														int BgL_arg2645z00_1637;

														BgL_arg2645z00_1637 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 150 */
															long BgL_auxz00_3137;

															BgL_auxz00_3137 = (long) (BgL_arg2645z00_1637);
															BgL_modz00_1636 =
																(BgL_offsetz00_1635 / BgL_auxz00_3137);
													}}
													{	/* Ast/hrtype.scm 150 */
														long BgL_restz00_1638;

														{	/* Ast/hrtype.scm 150 */
															int BgL_arg2644z00_1639;

															BgL_arg2644z00_1639 = (int) (((long) 16));
															{	/* Ast/hrtype.scm 150 */
																long BgL_auxz00_3141;

																BgL_auxz00_3141 = (long) (BgL_arg2644z00_1639);
																BgL_restz00_1638 =
																	(BgL_offsetz00_1635 % BgL_auxz00_3141);
														}}
														{	/* Ast/hrtype.scm 150 */

															BgL_method3324z00_1628 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1633,
																	(int) (BgL_modz00_1636)),
																(int) (BgL_restz00_1638));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3324z00_1628) (BgL_method3324z00_1628,
								(obj_t) (BgL_arg3491z00_1304), BEOA);
					}}
					{	/* Ast/hrtype.scm 151 */
						obj_t BgL_arg3492z00_1305;

						BgL_arg3492z00_1305 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1300))->BgL_argsz00);
						BgL_auxz00_3127 =
							BGl_hrtypezd2nodeza2z12z62zzast_hrtypez00(BgL_arg3492z00_1305);
					}
					return BBOOL(BgL_auxz00_3127);
				}
			}
		}
	}



/* hrtype-node!-app-ly3339 */
	obj_t BGl_hrtypezd2nodez12zd2appzd2ly3339zc0zzast_hrtypez00(obj_t
		BgL_envz00_2366, obj_t BgL_nodez00_2367)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 140 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1292;

				BgL_nodez00_1292 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2367);
				{	/* Ast/hrtype.scm 142 */
					BgL_nodez00_bglt BgL_arg3488z00_1296;

					BgL_arg3488z00_1296 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1292))->BgL_funz00);
					{	/* Ast/hrtype.scm 142 */
						obj_t BgL_method3324z00_1574;

						{	/* Ast/hrtype.scm 142 */
							BgL_objectz00_bglt BgL_objz00_1575;

							BgL_objz00_1575 = (BgL_objectz00_bglt) (BgL_arg3488z00_1296);
							{	/* Ast/hrtype.scm 142 */
								long BgL_objzd2classzd2numz00_1576;

								BgL_objzd2classzd2numz00_1576 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1575);
								{	/* Ast/hrtype.scm 142 */
									obj_t BgL_arg2643z00_1577;

									BgL_arg2643z00_1577 =
										PROCEDURE_REF(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
										(int) (((long) 1)));
									{	/* Ast/hrtype.scm 142 */
										obj_t BgL_arrayz00_1579;

										int BgL_offsetz00_1580;

										BgL_arrayz00_1579 = BgL_arg2643z00_1577;
										BgL_offsetz00_1580 = (int) (BgL_objzd2classzd2numz00_1576);
										{	/* Ast/hrtype.scm 142 */
											long BgL_offsetz00_1581;

											BgL_offsetz00_1581 =
												((long) (BgL_offsetz00_1580) - OBJECT_TYPE);
											{	/* Ast/hrtype.scm 142 */
												long BgL_modz00_1582;

												{	/* Ast/hrtype.scm 142 */
													int BgL_arg2645z00_1583;

													BgL_arg2645z00_1583 = (int) (((long) 16));
													{	/* Ast/hrtype.scm 142 */
														long BgL_auxz00_3164;

														BgL_auxz00_3164 = (long) (BgL_arg2645z00_1583);
														BgL_modz00_1582 =
															(BgL_offsetz00_1581 / BgL_auxz00_3164);
												}}
												{	/* Ast/hrtype.scm 142 */
													long BgL_restz00_1584;

													{	/* Ast/hrtype.scm 142 */
														int BgL_arg2644z00_1585;

														BgL_arg2644z00_1585 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 142 */
															long BgL_auxz00_3168;

															BgL_auxz00_3168 = (long) (BgL_arg2644z00_1585);
															BgL_restz00_1584 =
																(BgL_offsetz00_1581 % BgL_auxz00_3168);
													}}
													{	/* Ast/hrtype.scm 142 */

														BgL_method3324z00_1574 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1579,
																(int) (BgL_modz00_1582)),
															(int) (BgL_restz00_1584));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3324z00_1574) (BgL_method3324z00_1574,
							(obj_t) (BgL_arg3488z00_1296), BEOA);
				}}
				{	/* Ast/hrtype.scm 143 */
					BgL_nodez00_bglt BgL_arg3489z00_1297;

					BgL_arg3489z00_1297 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1292))->BgL_argz00);
					{	/* Ast/hrtype.scm 143 */
						obj_t BgL_method3324z00_1601;

						{	/* Ast/hrtype.scm 143 */
							BgL_objectz00_bglt BgL_objz00_1602;

							BgL_objz00_1602 = (BgL_objectz00_bglt) (BgL_arg3489z00_1297);
							{	/* Ast/hrtype.scm 143 */
								long BgL_objzd2classzd2numz00_1603;

								BgL_objzd2classzd2numz00_1603 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1602);
								{	/* Ast/hrtype.scm 143 */
									obj_t BgL_arg2643z00_1604;

									BgL_arg2643z00_1604 =
										PROCEDURE_REF(BGl_hrtypezd2nodez12zd2envz12zzast_hrtypez00,
										(int) (((long) 1)));
									{	/* Ast/hrtype.scm 143 */
										obj_t BgL_arrayz00_1606;

										int BgL_offsetz00_1607;

										BgL_arrayz00_1606 = BgL_arg2643z00_1604;
										BgL_offsetz00_1607 = (int) (BgL_objzd2classzd2numz00_1603);
										{	/* Ast/hrtype.scm 143 */
											long BgL_offsetz00_1608;

											BgL_offsetz00_1608 =
												((long) (BgL_offsetz00_1607) - OBJECT_TYPE);
											{	/* Ast/hrtype.scm 143 */
												long BgL_modz00_1609;

												{	/* Ast/hrtype.scm 143 */
													int BgL_arg2645z00_1610;

													BgL_arg2645z00_1610 = (int) (((long) 16));
													{	/* Ast/hrtype.scm 143 */
														long BgL_auxz00_3187;

														BgL_auxz00_3187 = (long) (BgL_arg2645z00_1610);
														BgL_modz00_1609 =
															(BgL_offsetz00_1608 / BgL_auxz00_3187);
												}}
												{	/* Ast/hrtype.scm 143 */
													long BgL_restz00_1611;

													{	/* Ast/hrtype.scm 143 */
														int BgL_arg2644z00_1612;

														BgL_arg2644z00_1612 = (int) (((long) 16));
														{	/* Ast/hrtype.scm 143 */
															long BgL_auxz00_3191;

															BgL_auxz00_3191 = (long) (BgL_arg2644z00_1612);
															BgL_restz00_1611 =
																(BgL_offsetz00_1608 % BgL_auxz00_3191);
													}}
													{	/* Ast/hrtype.scm 143 */

														BgL_method3324z00_1601 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1606,
																(int) (BgL_modz00_1609)),
															(int) (BgL_restz00_1611));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3324z00_1601) (BgL_method3324z00_1601,
							(obj_t) (BgL_arg3489z00_1297), BEOA);
					}
				}
			}
		}
	}



/* hrtype-node!-app3337 */
	obj_t BGl_hrtypezd2nodez12zd2app3337z12zzast_hrtypez00(obj_t BgL_envz00_2368,
		obj_t BgL_nodez00_2369)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 100 */
			{
				BgL_appz00_bglt BgL_nodez00_1246;

				{	/* Ast/hrtype.scm 101 */
					bool_t BgL_auxz00_3202;

					BgL_nodez00_1246 = (BgL_appz00_bglt) (BgL_nodez00_2369);
					{	/* Ast/hrtype.scm 102 */
						bool_t BgL_testz00_3203;

						{	/* Ast/hrtype.scm 102 */
							BgL_typez00_bglt BgL_arg3454z00_1254;

							{
								BgL_nodez00_bglt BgL_auxz00_3204;

								BgL_auxz00_3204 = (BgL_nodez00_bglt) (BgL_nodez00_1246);
								BgL_arg3454z00_1254 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_3204))->BgL_typez00);
							}
							{	/* Ast/hrtype.scm 102 */
								obj_t BgL_obj1599z00_1540;

								BgL_obj1599z00_1540 = (obj_t) (BgL_arg3454z00_1254);
								BgL_testz00_3203 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1599z00_1540,
									BGl_typez00zztype_typez00);
							}
						}
						if (BgL_testz00_3203)
							{	/* Ast/hrtype.scm 103 */
								BgL_typez00_bglt BgL_arg3451z00_1251;

								{	/* Ast/hrtype.scm 103 */
									obj_t BgL_arg3452z00_1252;

									{	/* Ast/hrtype.scm 103 */
										BgL_typez00_bglt BgL_obj1508z00_1542;

										{
											BgL_nodez00_bglt BgL_auxz00_3209;

											BgL_auxz00_3209 = (BgL_nodez00_bglt) (BgL_nodez00_1246);
											BgL_obj1508z00_1542 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_3209))->
												BgL_typez00);
										}
										BgL_arg3452z00_1252 =
											(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1542))->
											BgL_idz00);
									}
									BgL_arg3451z00_1251 =
										BGl_findzd2typezd2zztype_envz00(BgL_arg3452z00_1252);
								}
								{
									BgL_nodez00_bglt BgL_auxz00_3214;

									BgL_auxz00_3214 = (BgL_nodez00_bglt) (BgL_nodez00_1246);
									((((BgL_nodez00_bglt) CREF(BgL_auxz00_3214))->BgL_typez00) =
										((BgL_typez00_bglt) BgL_arg3451z00_1251), BUNSPEC);
								}
							}
						else
							{	/* Ast/hrtype.scm 102 */
								BFALSE;
							}
					}
					{	/* Ast/hrtype.scm 104 */
						BgL_varz00_bglt BgL_instance3279z00_1255;

						BgL_instance3279z00_1255 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1246))->BgL_funz00);
						{	/* Ast/hrtype.scm 105 */
							bool_t BgL_testz00_3218;

							{	/* Ast/hrtype.scm 105 */
								BgL_variablez00_bglt BgL_arg3485z00_1288;

								BgL_arg3485z00_1288 =
									(((BgL_varz00_bglt) CREF(BgL_instance3279z00_1255))->
									BgL_variablez00);
								{	/* Ast/hrtype.scm 105 */
									obj_t BgL_obj1773z00_1547;

									BgL_obj1773z00_1547 = (obj_t) (BgL_arg3485z00_1288);
									BgL_testz00_3218 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj1773z00_1547,
										BGl_globalz00zzast_varz00);
								}
							}
							if (BgL_testz00_3218)
								{	/* Ast/hrtype.scm 106 */
									BgL_valuez00_bglt BgL_valuez00_1257;

									{	/* Ast/hrtype.scm 106 */
										BgL_variablez00_bglt BgL_obj1631z00_1549;

										BgL_obj1631z00_1549 =
											(((BgL_varz00_bglt) CREF(BgL_instance3279z00_1255))->
											BgL_variablez00);
										BgL_valuez00_1257 =
											(((BgL_variablez00_bglt) CREF(BgL_obj1631z00_1549))->
											BgL_valuez00);
									}
									{	/* Ast/hrtype.scm 108 */
										bool_t BgL_testz00_3224;

										{	/* Ast/hrtype.scm 108 */
											obj_t BgL_obj2042z00_1550;

											BgL_obj2042z00_1550 = (obj_t) (BgL_valuez00_1257);
											BgL_testz00_3224 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj2042z00_1550,
												BGl_cfunz00zzast_varz00);
										}
										if (BgL_testz00_3224)
											{	/* Ast/hrtype.scm 109 */
												BgL_variablez00_bglt BgL_arg3457z00_1259;

												BgL_arg3457z00_1259 =
													(((BgL_varz00_bglt) CREF(BgL_instance3279z00_1255))->
													BgL_variablez00);
												BGl_restorezd2globalz12zc0zzast_envz00((obj_t)
													(BgL_arg3457z00_1259));
											}
										else
											{	/* Ast/hrtype.scm 110 */
												bool_t BgL_testz00_3230;

												{	/* Ast/hrtype.scm 110 */
													obj_t BgL_obj1978z00_1552;

													BgL_obj1978z00_1552 = (obj_t) (BgL_valuez00_1257);
													BgL_testz00_3230 =
														BGl_iszd2azf3z21zz__objectz00(BgL_obj1978z00_1552,
														BGl_sfunz00zzast_varz00);
												}
												if (BgL_testz00_3230)
													{	/* Ast/hrtype.scm 111 */
														bool_t BgL_testz00_3233;

														{	/* Ast/hrtype.scm 111 */
															bool_t BgL_testz00_3234;

															{	/* Ast/hrtype.scm 111 */
																obj_t BgL_auxz00_3235;

																{
																	BgL_sfunz00_bglt BgL_auxz00_3236;

																	BgL_auxz00_3236 =
																		(BgL_sfunz00_bglt) (BgL_valuez00_1257);
																	BgL_auxz00_3235 =
																		(((BgL_sfunz00_bglt)
																			CREF(BgL_auxz00_3236))->BgL_classz00);
																}
																BgL_testz00_3234 =
																	(BgL_auxz00_3235 ==
																	CNST_TABLE_REF(((long) 1)));
															}
															if (BgL_testz00_3234)
																{	/* Ast/hrtype.scm 113 */
																	bool_t BgL_testz00_3241;

																	{	/* Ast/hrtype.scm 113 */
																		BgL_variablez00_bglt BgL_arg3480z00_1284;

																		BgL_arg3480z00_1284 =
																			(((BgL_varz00_bglt)
																				CREF(BgL_instance3279z00_1255))->
																			BgL_variablez00);
																		BgL_testz00_3241 =
																			CBOOL
																			(BGl_alreadyzd2restoredzf3z21zzast_envz00(
																				(obj_t) (BgL_arg3480z00_1284)));
																	}
																	if (BgL_testz00_3241)
																		{	/* Ast/hrtype.scm 113 */
																			BgL_testz00_3233 = ((bool_t) 0);
																		}
																	else
																		{	/* Ast/hrtype.scm 113 */
																			BgL_testz00_3233 = ((bool_t) 1);
																		}
																}
															else
																{	/* Ast/hrtype.scm 111 */
																	BgL_testz00_3233 = ((bool_t) 0);
																}
														}
														if (BgL_testz00_3233)
															{	/* Ast/hrtype.scm 117 */
																BgL_variablez00_bglt BgL_arg3460z00_1262;

																BgL_arg3460z00_1262 =
																	(((BgL_varz00_bglt)
																		CREF(BgL_instance3279z00_1255))->
																	BgL_variablez00);
																BGl_restorezd2globalz12zc0zzast_envz00((obj_t)
																	(BgL_arg3460z00_1262));
															}
														else
															{	/* Ast/hrtype.scm 123 */
																obj_t BgL_gz00_1263;

																{	/* Ast/hrtype.scm 123 */
																	obj_t BgL_arg3473z00_1277;

																	obj_t BgL_arg3474z00_1278;

																	{	/* Ast/hrtype.scm 123 */
																		BgL_variablez00_bglt BgL_obj1624z00_1557;

																		BgL_obj1624z00_1557 =
																			(((BgL_varz00_bglt)
																				CREF(BgL_instance3279z00_1255))->
																			BgL_variablez00);
																		BgL_arg3473z00_1277 =
																			(((BgL_variablez00_bglt)
																				CREF(BgL_obj1624z00_1557))->BgL_idz00);
																	}
																	{	/* Ast/hrtype.scm 124 */
																		BgL_globalz00_bglt BgL_obj1697z00_1559;

																		BgL_obj1697z00_1559 =
																			(BgL_globalz00_bglt) (
																			(((BgL_varz00_bglt)
																					CREF(BgL_instance3279z00_1255))->
																				BgL_variablez00));
																		BgL_arg3474z00_1278 =
																			(((BgL_globalz00_bglt)
																				CREF(BgL_obj1697z00_1559))->
																			BgL_modulez00);
																	}
																	{	/* Ast/hrtype.scm 123 */
																		obj_t BgL_list3475z00_1279;

																		BgL_list3475z00_1279 =
																			MAKE_PAIR(BgL_arg3474z00_1278, BNIL);
																		BgL_gz00_1263 =
																			BGl_findzd2globalzd2zzast_envz00
																			(BgL_arg3473z00_1277,
																			BgL_list3475z00_1279);
																	}
																}
																if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_1263,
																		BGl_variablez00zzast_varz00))
																	{
																		BgL_variablez00_bglt BgL_auxz00_3258;

																		BgL_auxz00_3258 =
																			(BgL_variablez00_bglt) (BgL_gz00_1263);
																		((((BgL_varz00_bglt)
																					CREF(BgL_instance3279z00_1255))->
																				BgL_variablez00) =
																			((BgL_variablez00_bglt) BgL_auxz00_3258),
																			BUNSPEC);
																	}
																else
																	{	/* Ast/hrtype.scm 126 */
																		obj_t BgL_newzd2gzd2_1265;

																		{	/* Ast/hrtype.scm 126 */
																			obj_t BgL_arg3470z00_1274;

																			{	/* Ast/hrtype.scm 126 */
																				BgL_variablez00_bglt
																					BgL_obj1624z00_1564;
																				BgL_obj1624z00_1564 =
																					(((BgL_varz00_bglt)
																						CREF(BgL_instance3279z00_1255))->
																					BgL_variablez00);
																				BgL_arg3470z00_1274 =
																					(((BgL_variablez00_bglt)
																						CREF(BgL_obj1624z00_1564))->
																					BgL_idz00);
																			}
																			{	/* Ast/hrtype.scm 126 */
																				obj_t BgL_list3471z00_1275;

																				BgL_list3471z00_1275 =
																					MAKE_PAIR
																					(BGl_za2moduleza2z00zzmodule_modulez00,
																					BNIL);
																				BgL_newzd2gzd2_1265 =
																					BGl_findzd2globalzd2zzast_envz00
																					(BgL_arg3470z00_1274,
																					BgL_list3471z00_1275);
																			}
																		}
																		{	/* Ast/hrtype.scm 128 */
																			bool_t BgL_testz00_3265;

																			if (BGl_iszd2azf3z21zz__objectz00
																				(BgL_newzd2gzd2_1265,
																					BGl_globalz00zzast_varz00))
																				{	/* Ast/hrtype.scm 129 */
																					obj_t BgL_auxz00_3268;

																					{
																						BgL_globalz00_bglt BgL_auxz00_3269;

																						BgL_auxz00_3269 =
																							(BgL_globalz00_bglt)
																							(BgL_newzd2gzd2_1265);
																						BgL_auxz00_3268 =
																							(((BgL_globalz00_bglt)
																								CREF(BgL_auxz00_3269))->
																							BgL_importz00);
																					}
																					BgL_testz00_3265 =
																						(BgL_auxz00_3268 ==
																						CNST_TABLE_REF(((long) 2)));
																				}
																			else
																				{	/* Ast/hrtype.scm 128 */
																					BgL_testz00_3265 = ((bool_t) 0);
																				}
																			if (BgL_testz00_3265)
																				{
																					BgL_variablez00_bglt BgL_auxz00_3274;

																					BgL_auxz00_3274 =
																						(BgL_variablez00_bglt) (
																						(BgL_globalz00_bglt)
																						(BgL_newzd2gzd2_1265));
																					((((BgL_varz00_bglt)
																								CREF
																								(BgL_instance3279z00_1255))->
																							BgL_variablez00) =
																						((BgL_variablez00_bglt)
																							BgL_auxz00_3274), BUNSPEC);
																				}
																			else
																				{	/* Ast/hrtype.scm 130 */
																					obj_t BgL_arg3465z00_1269;

																					{	/* Ast/hrtype.scm 132 */
																						BgL_variablez00_bglt
																							BgL_obj1624z00_1570;
																						BgL_obj1624z00_1570 =
																							(((BgL_varz00_bglt)
																								CREF
																								(BgL_instance3279z00_1255))->
																							BgL_variablez00);
																						BgL_arg3465z00_1269 =
																							(((BgL_variablez00_bglt)
																								CREF(BgL_obj1624z00_1570))->
																							BgL_idz00);
																					}
																					BGl_errorz00zz__errorz00
																						(BGl_string3637z00zzast_hrtypez00,
																						BGl_string3638z00zzast_hrtypez00,
																						BgL_arg3465z00_1269);
																				}
																		}
																	}
															}
													}
												else
													{	/* Ast/hrtype.scm 110 */
														BFALSE;
													}
											}
									}
								}
							else
								{	/* Ast/hrtype.scm 105 */
									BFALSE;
								}
						}
					}
					{	/* Ast/hrtype.scm 135 */
						obj_t BgL_arg3486z00_1289;

						BgL_arg3486z00_1289 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1246))->BgL_argsz00);
						BgL_auxz00_3202 =
							BGl_hrtypezd2nodeza2z12z62zzast_hrtypez00(BgL_arg3486z00_1289);
					}
					return BBOOL(BgL_auxz00_3202);
				}
			}
		}
	}



/* hrtype-node!-sequenc3335 */
	obj_t BGl_hrtypezd2nodez12zd2sequenc3335z12zzast_hrtypez00(obj_t
		BgL_envz00_2370, obj_t BgL_nodez00_2371)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 93 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1239;

				{	/* Ast/hrtype.scm 94 */
					bool_t BgL_auxz00_3285;

					BgL_nodez00_1239 = (BgL_sequencez00_bglt) (BgL_nodez00_2371);
					{	/* Ast/hrtype.scm 94 */
						obj_t BgL_arg3448z00_1537;

						BgL_arg3448z00_1537 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1239))->BgL_nodesz00);
						BgL_auxz00_3285 =
							BGl_hrtypezd2nodeza2z12z62zzast_hrtypez00(BgL_arg3448z00_1537);
					}
					return BBOOL(BgL_auxz00_3285);
				}
			}
		}
	}



/* hrtype-node!-closure3333 */
	obj_t BGl_hrtypezd2nodez12zd2closure3333z12zzast_hrtypez00(obj_t
		BgL_envz00_2372, obj_t BgL_nodez00_2373)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 87 */
			return BUNSPEC;
		}
	}



/* hrtype-node!-var3331 */
	obj_t BGl_hrtypezd2nodez12zd2var3331z12zzast_hrtypez00(obj_t BgL_envz00_2374,
		obj_t BgL_nodez00_2375)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 48 */
			{
				BgL_varz00_bglt BgL_nodez00_1210;

				BgL_nodez00_1210 = (BgL_varz00_bglt) (BgL_nodez00_2375);
				{	/* Ast/hrtype.scm 73 */
					bool_t BgL_testz00_3290;

					{	/* Ast/hrtype.scm 73 */
						bool_t BgL_testz00_3291;

						{	/* Ast/hrtype.scm 73 */
							BgL_variablez00_bglt BgL_arg3439z00_1226;

							BgL_arg3439z00_1226 =
								(((BgL_varz00_bglt) CREF(BgL_nodez00_1210))->BgL_variablez00);
							{	/* Ast/hrtype.scm 73 */
								obj_t BgL_obj1773z00_1518;

								BgL_obj1773z00_1518 = (obj_t) (BgL_arg3439z00_1226);
								BgL_testz00_3291 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1773z00_1518,
									BGl_globalz00zzast_varz00);
							}
						}
						if (BgL_testz00_3291)
							{	/* Ast/hrtype.scm 74 */
								obj_t BgL_arg3435z00_1222;

								obj_t BgL_arg3436z00_1223;

								{	/* Ast/hrtype.scm 74 */
									BgL_variablez00_bglt BgL_obj1624z00_1520;

									BgL_obj1624z00_1520 =
										(((BgL_varz00_bglt) CREF(BgL_nodez00_1210))->
										BgL_variablez00);
									BgL_arg3435z00_1222 =
										(((BgL_variablez00_bglt) CREF(BgL_obj1624z00_1520))->
										BgL_idz00);
								}
								{	/* Ast/hrtype.scm 75 */
									BgL_globalz00_bglt BgL_obj1697z00_1522;

									BgL_obj1697z00_1522 =
										(BgL_globalz00_bglt) (
										(((BgL_varz00_bglt) CREF(BgL_nodez00_1210))->
											BgL_variablez00));
									BgL_arg3436z00_1223 =
										(((BgL_globalz00_bglt) CREF(BgL_obj1697z00_1522))->
										BgL_modulez00);
								}
								BgL_testz00_3290 =
									CBOOL(BGl_globalzd2bucketzd2positionz00zzast_envz00
									(BgL_arg3435z00_1222, BgL_arg3436z00_1223));
							}
						else
							{	/* Ast/hrtype.scm 73 */
								BgL_testz00_3290 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_3290)
						{	/* Ast/hrtype.scm 76 */
							obj_t BgL_nz00_1215;

							{	/* Ast/hrtype.scm 76 */
								obj_t BgL_arg3430z00_1217;

								obj_t BgL_arg3431z00_1218;

								{	/* Ast/hrtype.scm 76 */
									BgL_variablez00_bglt BgL_obj1624z00_1524;

									BgL_obj1624z00_1524 =
										(((BgL_varz00_bglt) CREF(BgL_nodez00_1210))->
										BgL_variablez00);
									BgL_arg3430z00_1217 =
										(((BgL_variablez00_bglt) CREF(BgL_obj1624z00_1524))->
										BgL_idz00);
								}
								{	/* Ast/hrtype.scm 77 */
									BgL_globalz00_bglt BgL_obj1697z00_1526;

									BgL_obj1697z00_1526 =
										(BgL_globalz00_bglt) (
										(((BgL_varz00_bglt) CREF(BgL_nodez00_1210))->
											BgL_variablez00));
									BgL_arg3431z00_1218 =
										(((BgL_globalz00_bglt) CREF(BgL_obj1697z00_1526))->
										BgL_modulez00);
								}
								BgL_nz00_1215 =
									BGl_findzd2globalzf2modulez20zzast_envz00(BgL_arg3430z00_1217,
									BgL_arg3431z00_1218);
							}
							if (BGl_iszd2azf3z21zz__objectz00(BgL_nz00_1215,
									BGl_globalz00zzast_varz00))
								{
									BgL_variablez00_bglt BgL_auxz00_3310;

									BgL_auxz00_3310 =
										(BgL_variablez00_bglt) (
										(BgL_globalz00_bglt) (BgL_nz00_1215));
									((((BgL_varz00_bglt) CREF(BgL_nodez00_1210))->
											BgL_variablez00) =
										((BgL_variablez00_bglt) BgL_auxz00_3310), BUNSPEC);
								}
							else
								{	/* Ast/hrtype.scm 78 */
									BFALSE;
								}
						}
					else
						{	/* Ast/hrtype.scm 73 */
							BFALSE;
						}
				}
				{	/* Ast/hrtype.scm 80 */
					bool_t BgL_testz00_3314;

					{	/* Ast/hrtype.scm 80 */
						BgL_typez00_bglt BgL_arg3445z00_1231;

						{
							BgL_nodez00_bglt BgL_auxz00_3315;

							BgL_auxz00_3315 = (BgL_nodez00_bglt) (BgL_nodez00_1210);
							BgL_arg3445z00_1231 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_3315))->BgL_typez00);
						}
						{	/* Ast/hrtype.scm 80 */
							obj_t BgL_obj1599z00_1531;

							BgL_obj1599z00_1531 = (obj_t) (BgL_arg3445z00_1231);
							BgL_testz00_3314 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj1599z00_1531,
								BGl_typez00zztype_typez00);
						}
					}
					if (BgL_testz00_3314)
						{	/* Ast/hrtype.scm 81 */
							BgL_typez00_bglt BgL_arg3441z00_1228;

							{	/* Ast/hrtype.scm 81 */
								obj_t BgL_arg3443z00_1229;

								{	/* Ast/hrtype.scm 81 */
									BgL_typez00_bglt BgL_obj1508z00_1533;

									{
										BgL_nodez00_bglt BgL_auxz00_3320;

										BgL_auxz00_3320 = (BgL_nodez00_bglt) (BgL_nodez00_1210);
										BgL_obj1508z00_1533 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_3320))->BgL_typez00);
									}
									BgL_arg3443z00_1229 =
										(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1533))->BgL_idz00);
								}
								BgL_arg3441z00_1228 =
									BGl_findzd2typezd2zztype_envz00(BgL_arg3443z00_1229);
							}
							{
								BgL_nodez00_bglt BgL_auxz00_3325;

								BgL_auxz00_3325 = (BgL_nodez00_bglt) (BgL_nodez00_1210);
								((((BgL_nodez00_bglt) CREF(BgL_auxz00_3325))->BgL_typez00) =
									((BgL_typez00_bglt) BgL_arg3441z00_1228), BUNSPEC);
							}
						}
					else
						{	/* Ast/hrtype.scm 80 */
							BFALSE;
						}
				}
				return BUNSPEC;
			}
		}
	}



/* hrtype-node!-kwote3328 */
	obj_t BGl_hrtypezd2nodez12zd2kwote3328z12zzast_hrtypez00(obj_t
		BgL_envz00_2376, obj_t BgL_nodez00_2377)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 42 */
			return BUNSPEC;
		}
	}



/* hrtype-node!-atom3326 */
	obj_t BGl_hrtypezd2nodez12zd2atom3326z12zzast_hrtypez00(obj_t BgL_envz00_2378,
		obj_t BgL_nodez00_2379)
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 36 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_hrtypez00()
	{
		AN_OBJECT;
		{	/* Ast/hrtype.scm 17 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3639z00zzast_hrtypez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3639z00zzast_hrtypez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3639z00zzast_hrtypez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3639z00zzast_hrtypez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3639z00zzast_hrtypez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3639z00zzast_hrtypez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3639z00zzast_hrtypez00));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3639z00zzast_hrtypez00));
		}
	}

#ifdef __cplusplus
}
#endif
