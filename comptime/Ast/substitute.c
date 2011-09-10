/*===========================================================================*/
/*   (Ast/substitute.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/substitute.scm)*/
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


	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_dozd2substitutez12zd2makezd23317zc0zzast_substitutez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_dozd2substitutez12zd2setq3301z12zzast_substitutez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_dozd2substituteza2z12z62zzast_substitutez00(obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_substitutez00();
	static obj_t BGl_dozd2substitutez12zd2jumpzd23315zc0zzast_substitutez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_dozd2substitutez12zd2boxzd2s3321zc0zzast_substitutez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzast_substitutez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_applyz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzast_substitutez00();
	static obj_t BGl_dozd2substitutez12zd2exter3297z12zzast_substitutez00(obj_t,
		obj_t, obj_t);
	extern BgL_closurez00_bglt BGl_makezd2closurezd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_variablez00_bglt);
	static obj_t BGl_dozd2substitutez12zd2fail3305z12zzast_substitutez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_dozd2substitutez12zd2letzd2f3309zc0zzast_substitutez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_dozd2substitutez12zc0zzast_substitutez00(BgL_nodez00_bglt, obj_t);
	static obj_t BGl_dozd2substitutez12zd2appzd2l3293zc0zzast_substitutez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	extern bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	static obj_t BGl_dozd2substitutez12zd2app3291z12zzast_substitutez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	static obj_t BGl_dozd2substitutez12zd2setzd2e3313zc0zzast_substitutez00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_dozd2substitutez12zd2defau3280z12zzast_substitutez00(BgL_nodez00_bglt,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzast_substitutez00();
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_substitutez00 = BUNSPEC;
	static obj_t BGl_dozd2substitutez12zd2letzd2v3311zc0zzast_substitutez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_usezd2variablez12zc0zzast_sexpz00(BgL_variablez00_bglt,
		obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_knownzd2appzd2lyzd2ze3nodez31zzast_applyz00(obj_t,
		obj_t, BgL_nodez00_bglt, BgL_nodez00_bglt, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_substitutez00();
	extern obj_t BGl_funz00zzast_varz00;
	extern BgL_nodez00_bglt BGl_makezd2appzd2nodez00zzast_appz00(obj_t, obj_t,
		obj_t, BgL_varz00_bglt, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_dozd2substitutez12zd2kwote3287z12zzast_substitutez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_dozd2substitutez12zd2var3285z12zzast_substitutez00(obj_t,
		obj_t, obj_t);
	extern bool_t
		BGl_correctzd2arityzd2appzf3zf3zzast_appz00(BgL_variablez00_bglt, obj_t);
	static obj_t BGl_dozd2substitutez12zd2atom3283z12zzast_substitutez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_substitutez00();
	static obj_t BGl_dozd2substitutez12zd2selec3307z12zzast_substitutez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_substitutez12z12zzast_substitutez00(obj_t, obj_t, BgL_nodez00_bglt,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl__dozd2substitutez12zc0zzast_substitutez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_dozd2substitutez12zd2funca3295z12zzast_substitutez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__dozd2substitutez12zd2defau3280z12zzast_substitutez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__substitutez12z12zzast_substitutez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_dozd2substitutez12zd2seque3289z12zzast_substitutez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_dozd2substitutez12zd2condi3303z12zzast_substitutez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_dozd2substitutez12zd2cast3299z12zzast_substitutez00(obj_t,
		obj_t, obj_t);
	extern bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_substitutez00();
	static obj_t BGl_dozd2substitutez12zd2boxzd2r3319zc0zzast_substitutez00(obj_t,
		obj_t, obj_t);
	static obj_t __cnst[7];


	   
		 
		DEFINE_STATIC_BGL_GENERIC
		(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
		BgL_bgl__doza7d2substitute3664za7,
		BGl__dozd2substitutez12zc0zzast_substitutez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_substitutez12zd2envzc0zzast_substitutez00,
		BgL_bgl__substituteza712za713665z00,
		BGl__substitutez12z12zzast_substitutez00, 0L, BUNSPEC, 4);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_dozd2substitutez12zd2defau3280zd2envzc0zzast_substitutez00,
		BgL_bgl__doza7d2substitute3666za7,
		BGl__dozd2substitutez12zd2defau3280z12zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3636z00zzast_substitutez00,
		BgL_bgl_doza7d2substituteza73667z00,
		BGl_dozd2substitutez12zd2atom3283z12zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3637z00zzast_substitutez00,
		BgL_bgl_doza7d2substituteza73668z00,
		BGl_dozd2substitutez12zd2var3285z12zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3638z00zzast_substitutez00,
		BgL_bgl_doza7d2substituteza73669z00,
		BGl_dozd2substitutez12zd2kwote3287z12zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3640z00zzast_substitutez00,
		BgL_bgl_doza7d2substituteza73670z00,
		BGl_dozd2substitutez12zd2app3291z12zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3639z00zzast_substitutez00,
		BgL_bgl_doza7d2substituteza73671z00,
		BGl_dozd2substitutez12zd2seque3289z12zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3641z00zzast_substitutez00,
		BgL_bgl_doza7d2substituteza73672z00,
		BGl_dozd2substitutez12zd2appzd2l3293zc0zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3642z00zzast_substitutez00,
		BgL_bgl_doza7d2substituteza73673z00,
		BGl_dozd2substitutez12zd2funca3295z12zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3643z00zzast_substitutez00,
		BgL_bgl_doza7d2substituteza73674z00,
		BGl_dozd2substitutez12zd2exter3297z12zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3644z00zzast_substitutez00,
		BgL_bgl_doza7d2substituteza73675z00,
		BGl_dozd2substitutez12zd2cast3299z12zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3645z00zzast_substitutez00,
		BgL_bgl_doza7d2substituteza73676z00,
		BGl_dozd2substitutez12zd2setq3301z12zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3646z00zzast_substitutez00,
		BgL_bgl_doza7d2substituteza73677z00,
		BGl_dozd2substitutez12zd2condi3303z12zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3647z00zzast_substitutez00,
		BgL_bgl_doza7d2substituteza73678z00,
		BGl_dozd2substitutez12zd2fail3305z12zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3648z00zzast_substitutez00,
		BgL_bgl_doza7d2substituteza73679z00,
		BGl_dozd2substitutez12zd2selec3307z12zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3650z00zzast_substitutez00,
		BgL_bgl_doza7d2substituteza73680z00,
		BGl_dozd2substitutez12zd2letzd2v3311zc0zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3649z00zzast_substitutez00,
		BgL_bgl_doza7d2substituteza73681z00,
		BGl_dozd2substitutez12zd2letzd2f3309zc0zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3651z00zzast_substitutez00,
		BgL_bgl_doza7d2substituteza73682z00,
		BGl_dozd2substitutez12zd2setzd2e3313zc0zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3652z00zzast_substitutez00,
		BgL_bgl_doza7d2substituteza73683z00,
		BGl_dozd2substitutez12zd2jumpzd23315zc0zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3653z00zzast_substitutez00,
		BgL_bgl_doza7d2substituteza73684z00,
		BGl_dozd2substitutez12zd2makezd23317zc0zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3654z00zzast_substitutez00,
		BgL_bgl_doza7d2substituteza73685z00,
		BGl_dozd2substitutez12zd2boxzd2r3319zc0zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3655z00zzast_substitutez00,
		BgL_bgl_doza7d2substituteza73686z00,
		BGl_dozd2substitutez12zd2boxzd2s3321zc0zzast_substitutez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3634z00zzast_substitutez00,
		BgL_bgl_string3634za700za7za7a3687za7, "do-substitute!", 14);
	      DEFINE_STRING(BGl_string3635z00zzast_substitutez00,
		BgL_bgl_string3635za700za7za7a3688za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3656z00zzast_substitutez00,
		BgL_bgl_string3656za700za7za7a3689za7, "Illegal application", 19);
	      DEFINE_STRING(BGl_string3657z00zzast_substitutez00,
		BgL_bgl_string3657za700za7za7a3690za7, "wrong number of argument(s)", 27);
	      DEFINE_STRING(BGl_string3658z00zzast_substitutez00,
		BgL_bgl_string3658za700za7za7a3691za7, "duplicate", 9);
	      DEFINE_STRING(BGl_string3660z00zzast_substitutez00,
		BgL_bgl_string3660za700za7za7a3692za7, "ast_substitute", 14);
	      DEFINE_STRING(BGl_string3659z00zzast_substitutez00,
		BgL_bgl_string3659za700za7za7a3693za7, "Illegal substitution", 20);
	      DEFINE_STRING(BGl_string3661z00zzast_substitutez00,
		BgL_bgl_string3661za700za7za7a3694za7,
		"apply funcall set! app do-substitute!-defau3280 value done ", 59);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzast_substitutez00(long
		BgL_checksumz00_2654, char *BgL_fromz00_2655)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_substitutez00))
				{
					BGl_requirezd2initializa7ationz75zzast_substitutez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_substitutez00();
					BGl_cnstzd2initzd2zzast_substitutez00();
					BGl_importedzd2moduleszd2initz00zzast_substitutez00();
					BGl_genericzd2initzd2zzast_substitutez00();
					BGl_methodzd2initzd2zzast_substitutez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_substitutez00()
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 14 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"ast_substitute");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"ast_substitute");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"ast_substitute");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_substitutez00()
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 14 */
			{	/* Ast/substitute.scm 14 */
				obj_t BgL_cportz00_2642;

				BgL_cportz00_2642 =
					bgl_open_input_string(BGl_string3661z00zzast_substitutez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2643;

					BgL_iz00_2643 = ((long) 6);
				BgL_loopz00_2644:
					if ((BgL_iz00_2643 == ((long) -1)))
						{	/* Ast/substitute.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/substitute.scm 14 */
							{	/* Ast/substitute.scm 14 */
								obj_t BgL_arg3663z00_2646;

								{	/* Ast/substitute.scm 14 */

									{	/* Ast/substitute.scm 14 */
										obj_t BgL_locationz00_2648;

										BgL_locationz00_2648 = BBOOL(((bool_t) 0));
										{	/* Ast/substitute.scm 14 */

											BgL_arg3663z00_2646 =
												BGl_readz00zz__readerz00(BgL_cportz00_2642,
												BgL_locationz00_2648);
										}
									}
								}
								{	/* Ast/substitute.scm 14 */
									int BgL_auxz00_2673;

									BgL_auxz00_2673 = (int) (BgL_iz00_2643);
									CNST_TABLE_SET(BgL_auxz00_2673, BgL_arg3663z00_2646);
							}}
							{	/* Ast/substitute.scm 14 */
								int BgL_auxz00_2649;

								BgL_auxz00_2649 = (int) ((BgL_iz00_2643 - ((long) 1)));
								{
									long BgL_iz00_2678;

									BgL_iz00_2678 = (long) (BgL_auxz00_2649);
									BgL_iz00_2643 = BgL_iz00_2678;
									goto BgL_loopz00_2644;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_substitutez00()
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 14 */
			return BUNSPEC;
		}
	}



/* substitute! */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_substitutez12z12zzast_substitutez00(obj_t BgL_whatza2za2_1,
		obj_t BgL_byza2za2_2, BgL_nodez00_bglt BgL_nodez00_3, obj_t BgL_sitez00_4)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 34 */
			{
				obj_t BgL_ll3261z00_824;

				obj_t BgL_ll3262z00_825;

				BgL_ll3261z00_824 = BgL_whatza2za2_1;
				BgL_ll3262z00_825 = BgL_byza2za2_2;
			BgL_zc3anonymousza33322ze3z83_826:
				if (NULLP(BgL_ll3261z00_824))
					{	/* Ast/substitute.scm 37 */
						((bool_t) 1);
					}
				else
					{	/* Ast/substitute.scm 37 */
						{	/* Ast/substitute.scm 39 */
							obj_t BgL_whatz00_828;

							obj_t BgL_byz00_829;

							BgL_whatz00_828 = CAR(BgL_ll3261z00_824);
							BgL_byz00_829 = CAR(BgL_ll3262z00_825);
							{
								BgL_variablez00_bglt BgL_auxz00_2684;

								BgL_auxz00_2684 = (BgL_variablez00_bglt) (BgL_whatz00_828);
								((((BgL_variablez00_bglt) CREF(BgL_auxz00_2684))->
										BgL_fastzd2alphazd2) = ((obj_t) BgL_byz00_829), BUNSPEC);
							}
						}
						{
							obj_t BgL_ll3262z00_2689;

							obj_t BgL_ll3261z00_2687;

							BgL_ll3261z00_2687 = CDR(BgL_ll3261z00_824);
							BgL_ll3262z00_2689 = CDR(BgL_ll3262z00_825);
							BgL_ll3262z00_825 = BgL_ll3262z00_2689;
							BgL_ll3261z00_824 = BgL_ll3261z00_2687;
							goto BgL_zc3anonymousza33322ze3z83_826;
						}
					}
			}
			{	/* Ast/substitute.scm 42 */
				BgL_nodez00_bglt BgL_resz00_833;

				{	/* Ast/substitute.scm 42 */
					BgL_nodez00_bglt BgL_res3544z00_1551;

					{	/* Ast/substitute.scm 42 */
						obj_t BgL_method3281z00_1526;

						{	/* Ast/substitute.scm 42 */
							BgL_objectz00_bglt BgL_objz00_1527;

							BgL_objz00_1527 = (BgL_objectz00_bglt) (BgL_nodez00_3);
							{	/* Ast/substitute.scm 42 */
								long BgL_objzd2classzd2numz00_1528;

								BgL_objzd2classzd2numz00_1528 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1527);
								{	/* Ast/substitute.scm 42 */
									obj_t BgL_arg2643z00_1529;

									BgL_arg2643z00_1529 =
										PROCEDURE_REF
										(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
										(int) (((long) 1)));
									{	/* Ast/substitute.scm 42 */
										obj_t BgL_arrayz00_1531;

										int BgL_offsetz00_1532;

										BgL_arrayz00_1531 = BgL_arg2643z00_1529;
										BgL_offsetz00_1532 = (int) (BgL_objzd2classzd2numz00_1528);
										{	/* Ast/substitute.scm 42 */
											long BgL_offsetz00_1533;

											BgL_offsetz00_1533 =
												((long) (BgL_offsetz00_1532) - OBJECT_TYPE);
											{	/* Ast/substitute.scm 42 */
												long BgL_modz00_1534;

												{	/* Ast/substitute.scm 42 */
													int BgL_arg2645z00_1535;

													BgL_arg2645z00_1535 = (int) (((long) 16));
													{	/* Ast/substitute.scm 42 */
														long BgL_auxz00_2699;

														BgL_auxz00_2699 = (long) (BgL_arg2645z00_1535);
														BgL_modz00_1534 =
															(BgL_offsetz00_1533 / BgL_auxz00_2699);
												}}
												{	/* Ast/substitute.scm 42 */
													long BgL_restz00_1536;

													{	/* Ast/substitute.scm 42 */
														int BgL_arg2644z00_1537;

														BgL_arg2644z00_1537 = (int) (((long) 16));
														{	/* Ast/substitute.scm 42 */
															long BgL_auxz00_2703;

															BgL_auxz00_2703 = (long) (BgL_arg2644z00_1537);
															BgL_restz00_1536 =
																(BgL_offsetz00_1533 % BgL_auxz00_2703);
													}}
													{	/* Ast/substitute.scm 42 */

														BgL_method3281z00_1526 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1531,
																(int) (BgL_modz00_1534)),
															(int) (BgL_restz00_1536));
						}}}}}}}}
						BgL_res3544z00_1551 =
							(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_1526)
							(BgL_method3281z00_1526, (obj_t) (BgL_nodez00_3), BgL_sitez00_4,
								BEOA));
					}
					BgL_resz00_833 = BgL_res3544z00_1551;
				}
				{
					obj_t BgL_l3264z00_835;

					BgL_l3264z00_835 = BgL_whatza2za2_1;
				BgL_zc3anonymousza33326ze3z83_836:
					if (PAIRP(BgL_l3264z00_835))
						{	/* Ast/substitute.scm 44 */
							{	/* Ast/substitute.scm 45 */
								obj_t BgL_whatz00_838;

								BgL_whatz00_838 = CAR(BgL_l3264z00_835);
								{
									BgL_variablez00_bglt BgL_auxz00_2717;

									BgL_auxz00_2717 = (BgL_variablez00_bglt) (BgL_whatz00_838);
									((((BgL_variablez00_bglt) CREF(BgL_auxz00_2717))->
											BgL_fastzd2alphazd2) = ((obj_t) BUNSPEC), BUNSPEC);
								}
							}
							{
								obj_t BgL_l3264z00_2720;

								BgL_l3264z00_2720 = CDR(BgL_l3264z00_835);
								BgL_l3264z00_835 = BgL_l3264z00_2720;
								goto BgL_zc3anonymousza33326ze3z83_836;
							}
						}
					else
						{	/* Ast/substitute.scm 44 */
							((bool_t) 1);
						}
				}
				return BgL_resz00_833;
			}
		}
	}



/* _substitute! */
	obj_t BGl__substitutez12z12zzast_substitutez00(obj_t BgL_envz00_2551,
		obj_t BgL_whatza2za2_2552, obj_t BgL_byza2za2_2553, obj_t BgL_nodez00_2554,
		obj_t BgL_sitez00_2555)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 34 */
			return
				(obj_t) (BGl_substitutez12z12zzast_substitutez00(BgL_whatza2za2_2552,
					BgL_byza2za2_2553, (BgL_nodez00_bglt) (BgL_nodez00_2554),
					BgL_sitez00_2555));
		}
	}



/* do-substitute*! */
	obj_t BGl_dozd2substituteza2z12z62zzast_substitutez00(obj_t BgL_nodeza2za2_49,
		obj_t BgL_sitez00_50)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 271 */
		BGl_dozd2substituteza2z12z62zzast_substitutez00:
			if (NULLP(BgL_nodeza2za2_49))
				{	/* Ast/substitute.scm 273 */
					return CNST_TABLE_REF(((long) 0));
				}
			else
				{	/* Ast/substitute.scm 273 */
					if (NULLP(CDR(BgL_nodeza2za2_49)))
						{	/* Ast/substitute.scm 275 */
							{	/* Ast/substitute.scm 276 */
								BgL_nodez00_bglt BgL_arg3331z00_843;

								{	/* Ast/substitute.scm 276 */
									obj_t BgL_arg3332z00_844;

									BgL_arg3332z00_844 = CAR(BgL_nodeza2za2_49);
									{	/* Ast/substitute.scm 276 */
										BgL_nodez00_bglt BgL_res3547z00_1588;

										{	/* Ast/substitute.scm 276 */
											BgL_nodez00_bglt BgL_nodez00_1561;

											BgL_nodez00_1561 =
												(BgL_nodez00_bglt) (BgL_arg3332z00_844);
											{	/* Ast/substitute.scm 276 */
												obj_t BgL_method3281z00_1563;

												{	/* Ast/substitute.scm 276 */
													BgL_objectz00_bglt BgL_objz00_1564;

													BgL_objz00_1564 =
														(BgL_objectz00_bglt) (BgL_nodez00_1561);
													{	/* Ast/substitute.scm 276 */
														long BgL_objzd2classzd2numz00_1565;

														BgL_objzd2classzd2numz00_1565 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1564);
														{	/* Ast/substitute.scm 276 */
															obj_t BgL_arg2643z00_1566;

															BgL_arg2643z00_1566 =
																PROCEDURE_REF
																(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
																(int) (((long) 1)));
															{	/* Ast/substitute.scm 276 */
																obj_t BgL_arrayz00_1568;

																int BgL_offsetz00_1569;

																BgL_arrayz00_1568 = BgL_arg2643z00_1566;
																BgL_offsetz00_1569 =
																	(int) (BgL_objzd2classzd2numz00_1565);
																{	/* Ast/substitute.scm 276 */
																	long BgL_offsetz00_1570;

																	BgL_offsetz00_1570 =
																		((long) (BgL_offsetz00_1569) - OBJECT_TYPE);
																	{	/* Ast/substitute.scm 276 */
																		long BgL_modz00_1571;

																		{	/* Ast/substitute.scm 276 */
																			int BgL_arg2645z00_1572;

																			BgL_arg2645z00_1572 = (int) (((long) 16));
																			{	/* Ast/substitute.scm 276 */
																				long BgL_auxz00_2741;

																				BgL_auxz00_2741 =
																					(long) (BgL_arg2645z00_1572);
																				BgL_modz00_1571 =
																					(BgL_offsetz00_1570 /
																					BgL_auxz00_2741);
																		}}
																		{	/* Ast/substitute.scm 276 */
																			long BgL_restz00_1573;

																			{	/* Ast/substitute.scm 276 */
																				int BgL_arg2644z00_1574;

																				BgL_arg2644z00_1574 =
																					(int) (((long) 16));
																				{	/* Ast/substitute.scm 276 */
																					long BgL_auxz00_2745;

																					BgL_auxz00_2745 =
																						(long) (BgL_arg2644z00_1574);
																					BgL_restz00_1573 =
																						(BgL_offsetz00_1570 %
																						BgL_auxz00_2745);
																			}}
																			{	/* Ast/substitute.scm 276 */

																				BgL_method3281z00_1563 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1568,
																						(int) (BgL_modz00_1571)),
																					(int) (BgL_restz00_1573));
												}}}}}}}}
												BgL_res3547z00_1588 =
													(BgL_nodez00_bglt) (PROCEDURE_ENTRY
													(BgL_method3281z00_1563) (BgL_method3281z00_1563,
														(obj_t) (BgL_nodez00_1561), BgL_sitez00_50, BEOA));
										}}
										BgL_arg3331z00_843 = BgL_res3547z00_1588;
								}}
								{	/* Ast/substitute.scm 276 */
									obj_t BgL_auxz00_2756;

									BgL_auxz00_2756 = (obj_t) (BgL_arg3331z00_843);
									SET_CAR(BgL_nodeza2za2_49, BgL_auxz00_2756);
							}}
							return CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Ast/substitute.scm 275 */
							{	/* Ast/substitute.scm 279 */
								BgL_nodez00_bglt BgL_arg3333z00_845;

								{	/* Ast/substitute.scm 279 */
									obj_t BgL_arg3334z00_846;

									obj_t BgL_arg3335z00_847;

									BgL_arg3334z00_846 = CAR(BgL_nodeza2za2_49);
									BgL_arg3335z00_847 = CNST_TABLE_REF(((long) 1));
									{	/* Ast/substitute.scm 279 */
										BgL_nodez00_bglt BgL_res3550z00_1619;

										{	/* Ast/substitute.scm 279 */
											BgL_nodez00_bglt BgL_nodez00_1592;

											BgL_nodez00_1592 =
												(BgL_nodez00_bglt) (BgL_arg3334z00_846);
											{	/* Ast/substitute.scm 279 */
												obj_t BgL_method3281z00_1594;

												{	/* Ast/substitute.scm 279 */
													BgL_objectz00_bglt BgL_objz00_1595;

													BgL_objz00_1595 =
														(BgL_objectz00_bglt) (BgL_nodez00_1592);
													{	/* Ast/substitute.scm 279 */
														long BgL_objzd2classzd2numz00_1596;

														BgL_objzd2classzd2numz00_1596 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1595);
														{	/* Ast/substitute.scm 279 */
															obj_t BgL_arg2643z00_1597;

															BgL_arg2643z00_1597 =
																PROCEDURE_REF
																(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
																(int) (((long) 1)));
															{	/* Ast/substitute.scm 279 */
																obj_t BgL_arrayz00_1599;

																int BgL_offsetz00_1600;

																BgL_arrayz00_1599 = BgL_arg2643z00_1597;
																BgL_offsetz00_1600 =
																	(int) (BgL_objzd2classzd2numz00_1596);
																{	/* Ast/substitute.scm 279 */
																	long BgL_offsetz00_1601;

																	BgL_offsetz00_1601 =
																		((long) (BgL_offsetz00_1600) - OBJECT_TYPE);
																	{	/* Ast/substitute.scm 279 */
																		long BgL_modz00_1602;

																		{	/* Ast/substitute.scm 279 */
																			int BgL_arg2645z00_1603;

																			BgL_arg2645z00_1603 = (int) (((long) 16));
																			{	/* Ast/substitute.scm 279 */
																				long BgL_auxz00_2771;

																				BgL_auxz00_2771 =
																					(long) (BgL_arg2645z00_1603);
																				BgL_modz00_1602 =
																					(BgL_offsetz00_1601 /
																					BgL_auxz00_2771);
																		}}
																		{	/* Ast/substitute.scm 279 */
																			long BgL_restz00_1604;

																			{	/* Ast/substitute.scm 279 */
																				int BgL_arg2644z00_1605;

																				BgL_arg2644z00_1605 =
																					(int) (((long) 16));
																				{	/* Ast/substitute.scm 279 */
																					long BgL_auxz00_2775;

																					BgL_auxz00_2775 =
																						(long) (BgL_arg2644z00_1605);
																					BgL_restz00_1604 =
																						(BgL_offsetz00_1601 %
																						BgL_auxz00_2775);
																			}}
																			{	/* Ast/substitute.scm 279 */

																				BgL_method3281z00_1594 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1599,
																						(int) (BgL_modz00_1602)),
																					(int) (BgL_restz00_1604));
												}}}}}}}}
												BgL_res3550z00_1619 =
													(BgL_nodez00_bglt) (PROCEDURE_ENTRY
													(BgL_method3281z00_1594) (BgL_method3281z00_1594,
														(obj_t) (BgL_nodez00_1592), BgL_arg3335z00_847,
														BEOA));
										}}
										BgL_arg3333z00_845 = BgL_res3550z00_1619;
								}}
								{	/* Ast/substitute.scm 279 */
									obj_t BgL_auxz00_2786;

									BgL_auxz00_2786 = (obj_t) (BgL_arg3333z00_845);
									SET_CAR(BgL_nodeza2za2_49, BgL_auxz00_2786);
							}}
							{
								obj_t BgL_nodeza2za2_2789;

								BgL_nodeza2za2_2789 = CDR(BgL_nodeza2za2_49);
								BgL_nodeza2za2_49 = BgL_nodeza2za2_2789;
								goto BGl_dozd2substituteza2z12z62zzast_substitutez00;
							}
						}
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_substitutez00()
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 14 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_dozd2substitutez12zd2defau3280zd2envzc0zzast_substitutez00,
				BGl_nodez00zzast_nodez00, BGl_string3634z00zzast_substitutez00);
		}
	}



/* do-substitute! */
	BgL_nodez00_bglt BGl_dozd2substitutez12zc0zzast_substitutez00(BgL_nodez00_bglt
		BgL_nodez00_5, obj_t BgL_sitez00_6)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 52 */
			{	/* Ast/substitute.scm 52 */
				obj_t BgL_method3281z00_1623;

				{	/* Ast/substitute.scm 52 */
					BgL_objectz00_bglt BgL_objz00_1624;

					BgL_objz00_1624 = (BgL_objectz00_bglt) (BgL_nodez00_5);
					{	/* Ast/substitute.scm 52 */
						long BgL_objzd2classzd2numz00_1625;

						BgL_objzd2classzd2numz00_1625 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1624);
						{	/* Ast/substitute.scm 52 */
							obj_t BgL_arg2643z00_1626;

							BgL_arg2643z00_1626 =
								PROCEDURE_REF
								(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
								(int) (((long) 1)));
							{	/* Ast/substitute.scm 52 */
								obj_t BgL_arrayz00_1628;

								int BgL_offsetz00_1629;

								BgL_arrayz00_1628 = BgL_arg2643z00_1626;
								BgL_offsetz00_1629 = (int) (BgL_objzd2classzd2numz00_1625);
								{	/* Ast/substitute.scm 52 */
									long BgL_offsetz00_1630;

									BgL_offsetz00_1630 =
										((long) (BgL_offsetz00_1629) - OBJECT_TYPE);
									{	/* Ast/substitute.scm 52 */
										long BgL_modz00_1631;

										{	/* Ast/substitute.scm 52 */
											int BgL_arg2645z00_1632;

											BgL_arg2645z00_1632 = (int) (((long) 16));
											{	/* Ast/substitute.scm 52 */
												long BgL_auxz00_2800;

												BgL_auxz00_2800 = (long) (BgL_arg2645z00_1632);
												BgL_modz00_1631 =
													(BgL_offsetz00_1630 / BgL_auxz00_2800);
										}}
										{	/* Ast/substitute.scm 52 */
											long BgL_restz00_1633;

											{	/* Ast/substitute.scm 52 */
												int BgL_arg2644z00_1634;

												BgL_arg2644z00_1634 = (int) (((long) 16));
												{	/* Ast/substitute.scm 52 */
													long BgL_auxz00_2804;

													BgL_auxz00_2804 = (long) (BgL_arg2644z00_1634);
													BgL_restz00_1633 =
														(BgL_offsetz00_1630 % BgL_auxz00_2804);
											}}
											{	/* Ast/substitute.scm 52 */

												BgL_method3281z00_1623 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1628,
														(int) (BgL_modz00_1631)), (int) (BgL_restz00_1633));
				}}}}}}}}
				return
					(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_1623)
					(BgL_method3281z00_1623, (obj_t) (BgL_nodez00_5), BgL_sitez00_6,
						BEOA));
			}
		}
	}



/* _do-substitute! */
	obj_t BGl__dozd2substitutez12zc0zzast_substitutez00(obj_t BgL_envz00_2556,
		obj_t BgL_nodez00_2557, obj_t BgL_sitez00_2558)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 52 */
			return
				(obj_t) (BGl_dozd2substitutez12zc0zzast_substitutez00(
					(BgL_nodez00_bglt) (BgL_nodez00_2557), BgL_sitez00_2558));
		}
	}



/* do-substitute!-defau3280 */
	BgL_nodez00_bglt
		BGl_dozd2substitutez12zd2defau3280z12zzast_substitutez00(BgL_nodez00_bglt
		BgL_nodez00_7, obj_t BgL_sitez00_8)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 14 */
			return
				(BgL_nodez00_bglt) (BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 2)),
					BGl_string3635z00zzast_substitutez00, (obj_t) (BgL_nodez00_7)));
		}
	}



/* _do-substitute!-defau3280 */
	obj_t BGl__dozd2substitutez12zd2defau3280z12zzast_substitutez00(obj_t
		BgL_envz00_2559, obj_t BgL_nodez00_2560, obj_t BgL_sitez00_2561)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 14 */
			return
				(obj_t) (BGl_dozd2substitutez12zd2defau3280z12zzast_substitutez00(
					(BgL_nodez00_bglt) (BgL_nodez00_2560), BgL_sitez00_2561));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_substitutez00()
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 14 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_atomz00zzast_nodez00, BGl_proc3636z00zzast_substitutez00,
				BGl_string3634z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_varz00zzast_nodez00, BGl_proc3637z00zzast_substitutez00,
				BGl_string3634z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_kwotez00zzast_nodez00, BGl_proc3638z00zzast_substitutez00,
				BGl_string3634z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_sequencez00zzast_nodez00, BGl_proc3639z00zzast_substitutez00,
				BGl_string3634z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_appz00zzast_nodez00, BGl_proc3640z00zzast_substitutez00,
				BGl_string3634z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3641z00zzast_substitutez00,
				BGl_string3634z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_funcallz00zzast_nodez00, BGl_proc3642z00zzast_substitutez00,
				BGl_string3634z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_externz00zzast_nodez00, BGl_proc3643z00zzast_substitutez00,
				BGl_string3634z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_castz00zzast_nodez00, BGl_proc3644z00zzast_substitutez00,
				BGl_string3634z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_setqz00zzast_nodez00, BGl_proc3645z00zzast_substitutez00,
				BGl_string3634z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3646z00zzast_substitutez00,
				BGl_string3634z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_failz00zzast_nodez00, BGl_proc3647z00zzast_substitutez00,
				BGl_string3634z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_selectz00zzast_nodez00, BGl_proc3648z00zzast_substitutez00,
				BGl_string3634z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3649z00zzast_substitutez00,
				BGl_string3634z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3650z00zzast_substitutez00,
				BGl_string3634z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3651z00zzast_substitutez00,
				BGl_string3634z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3652z00zzast_substitutez00,
				BGl_string3634z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3653z00zzast_substitutez00,
				BGl_string3634z00zzast_substitutez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3654z00zzast_substitutez00,
				BGl_string3634z00zzast_substitutez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3655z00zzast_substitutez00,
				BGl_string3634z00zzast_substitutez00);
		}
	}



/* do-substitute!-box-s3321 */
	obj_t BGl_dozd2substitutez12zd2boxzd2s3321zc0zzast_substitutez00(obj_t
		BgL_envz00_2582, obj_t BgL_nodez00_2583, obj_t BgL_sitez00_2584)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 263 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1505;

				obj_t BgL_sitez00_1506;

				{	/* Ast/substitute.scm 264 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_2845;

					BgL_nodez00_1505 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2583);
					BgL_sitez00_1506 = BgL_sitez00_2584;
					{	/* Ast/substitute.scm 264 */
						BgL_nodez00_bglt BgL_arg3535z00_1509;

						{	/* Ast/substitute.scm 264 */
							BgL_varz00_bglt BgL_arg3536z00_1510;

							obj_t BgL_arg3537z00_1511;

							BgL_arg3536z00_1510 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1505))->
								BgL_varz00);
							BgL_arg3537z00_1511 = CNST_TABLE_REF(((long) 1));
							{	/* Ast/substitute.scm 264 */
								BgL_nodez00_bglt BgL_res3630z00_2517;

								{	/* Ast/substitute.scm 264 */
									BgL_nodez00_bglt BgL_nodez00_2490;

									BgL_nodez00_2490 = (BgL_nodez00_bglt) (BgL_arg3536z00_1510);
									{	/* Ast/substitute.scm 264 */
										obj_t BgL_method3281z00_2492;

										{	/* Ast/substitute.scm 264 */
											BgL_objectz00_bglt BgL_objz00_2493;

											BgL_objz00_2493 = (BgL_objectz00_bglt) (BgL_nodez00_2490);
											{	/* Ast/substitute.scm 264 */
												long BgL_objzd2classzd2numz00_2494;

												BgL_objzd2classzd2numz00_2494 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2493);
												{	/* Ast/substitute.scm 264 */
													obj_t BgL_arg2643z00_2495;

													BgL_arg2643z00_2495 =
														PROCEDURE_REF
														(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
														(int) (((long) 1)));
													{	/* Ast/substitute.scm 264 */
														obj_t BgL_arrayz00_2497;

														int BgL_offsetz00_2498;

														BgL_arrayz00_2497 = BgL_arg2643z00_2495;
														BgL_offsetz00_2498 =
															(int) (BgL_objzd2classzd2numz00_2494);
														{	/* Ast/substitute.scm 264 */
															long BgL_offsetz00_2499;

															BgL_offsetz00_2499 =
																((long) (BgL_offsetz00_2498) - OBJECT_TYPE);
															{	/* Ast/substitute.scm 264 */
																long BgL_modz00_2500;

																{	/* Ast/substitute.scm 264 */
																	int BgL_arg2645z00_2501;

																	BgL_arg2645z00_2501 = (int) (((long) 16));
																	{	/* Ast/substitute.scm 264 */
																		long BgL_auxz00_2857;

																		BgL_auxz00_2857 =
																			(long) (BgL_arg2645z00_2501);
																		BgL_modz00_2500 =
																			(BgL_offsetz00_2499 / BgL_auxz00_2857);
																}}
																{	/* Ast/substitute.scm 264 */
																	long BgL_restz00_2502;

																	{	/* Ast/substitute.scm 264 */
																		int BgL_arg2644z00_2503;

																		BgL_arg2644z00_2503 = (int) (((long) 16));
																		{	/* Ast/substitute.scm 264 */
																			long BgL_auxz00_2861;

																			BgL_auxz00_2861 =
																				(long) (BgL_arg2644z00_2503);
																			BgL_restz00_2502 =
																				(BgL_offsetz00_2499 % BgL_auxz00_2861);
																	}}
																	{	/* Ast/substitute.scm 264 */

																		BgL_method3281z00_2492 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2497,
																				(int) (BgL_modz00_2500)),
																			(int) (BgL_restz00_2502));
										}}}}}}}}
										BgL_res3630z00_2517 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3281z00_2492) (BgL_method3281z00_2492,
												(obj_t) (BgL_nodez00_2490), BgL_arg3537z00_1511, BEOA));
								}}
								BgL_arg3535z00_1509 = BgL_res3630z00_2517;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_2872;

							BgL_auxz00_2872 = (BgL_varz00_bglt) (BgL_arg3535z00_1509);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1505))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_2872), BUNSPEC);
					}}
					{	/* Ast/substitute.scm 265 */
						BgL_nodez00_bglt BgL_arg3538z00_1512;

						{	/* Ast/substitute.scm 265 */
							BgL_nodez00_bglt BgL_arg3539z00_1513;

							obj_t BgL_arg3540z00_1514;

							BgL_arg3539z00_1513 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1505))->
								BgL_valuez00);
							BgL_arg3540z00_1514 = CNST_TABLE_REF(((long) 1));
							{	/* Ast/substitute.scm 265 */
								BgL_nodez00_bglt BgL_res3633z00_2548;

								{	/* Ast/substitute.scm 265 */
									obj_t BgL_method3281z00_2523;

									{	/* Ast/substitute.scm 265 */
										BgL_objectz00_bglt BgL_objz00_2524;

										BgL_objz00_2524 =
											(BgL_objectz00_bglt) (BgL_arg3539z00_1513);
										{	/* Ast/substitute.scm 265 */
											long BgL_objzd2classzd2numz00_2525;

											BgL_objzd2classzd2numz00_2525 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2524);
											{	/* Ast/substitute.scm 265 */
												obj_t BgL_arg2643z00_2526;

												BgL_arg2643z00_2526 =
													PROCEDURE_REF
													(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
													(int) (((long) 1)));
												{	/* Ast/substitute.scm 265 */
													obj_t BgL_arrayz00_2528;

													int BgL_offsetz00_2529;

													BgL_arrayz00_2528 = BgL_arg2643z00_2526;
													BgL_offsetz00_2529 =
														(int) (BgL_objzd2classzd2numz00_2525);
													{	/* Ast/substitute.scm 265 */
														long BgL_offsetz00_2530;

														BgL_offsetz00_2530 =
															((long) (BgL_offsetz00_2529) - OBJECT_TYPE);
														{	/* Ast/substitute.scm 265 */
															long BgL_modz00_2531;

															{	/* Ast/substitute.scm 265 */
																int BgL_arg2645z00_2532;

																BgL_arg2645z00_2532 = (int) (((long) 16));
																{	/* Ast/substitute.scm 265 */
																	long BgL_auxz00_2885;

																	BgL_auxz00_2885 =
																		(long) (BgL_arg2645z00_2532);
																	BgL_modz00_2531 =
																		(BgL_offsetz00_2530 / BgL_auxz00_2885);
															}}
															{	/* Ast/substitute.scm 265 */
																long BgL_restz00_2533;

																{	/* Ast/substitute.scm 265 */
																	int BgL_arg2644z00_2534;

																	BgL_arg2644z00_2534 = (int) (((long) 16));
																	{	/* Ast/substitute.scm 265 */
																		long BgL_auxz00_2889;

																		BgL_auxz00_2889 =
																			(long) (BgL_arg2644z00_2534);
																		BgL_restz00_2533 =
																			(BgL_offsetz00_2530 % BgL_auxz00_2889);
																}}
																{	/* Ast/substitute.scm 265 */

																	BgL_method3281z00_2523 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2528,
																			(int) (BgL_modz00_2531)),
																		(int) (BgL_restz00_2533));
									}}}}}}}}
									BgL_res3633z00_2548 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_2523)
										(BgL_method3281z00_2523, (obj_t) (BgL_arg3539z00_1513),
											BgL_arg3540z00_1514, BEOA));
								}
								BgL_arg3538z00_1512 = BgL_res3633z00_2548;
						}}
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1505))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3538z00_1512), BUNSPEC);
					}
					BgL_auxz00_2845 = BgL_nodez00_1505;
					return (obj_t) (BgL_auxz00_2845);
				}
			}
		}
	}



/* do-substitute!-box-r3319 */
	obj_t BGl_dozd2substitutez12zd2boxzd2r3319zc0zzast_substitutez00(obj_t
		BgL_envz00_2585, obj_t BgL_nodez00_2586, obj_t BgL_sitez00_2587)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 256 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1496;

				obj_t BgL_sitez00_1497;

				{	/* Ast/substitute.scm 257 */
					BgL_boxzd2refzd2_bglt BgL_auxz00_2903;

					BgL_nodez00_1496 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2586);
					BgL_sitez00_1497 = BgL_sitez00_2587;
					{	/* Ast/substitute.scm 257 */
						BgL_nodez00_bglt BgL_arg3531z00_2455;

						{	/* Ast/substitute.scm 257 */
							BgL_varz00_bglt BgL_arg3532z00_2456;

							obj_t BgL_arg3533z00_2457;

							BgL_arg3532z00_2456 =
								(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1496))->BgL_varz00);
							BgL_arg3533z00_2457 = CNST_TABLE_REF(((long) 1));
							{	/* Ast/substitute.scm 257 */
								BgL_nodez00_bglt BgL_res3627z00_2486;

								{	/* Ast/substitute.scm 257 */
									BgL_nodez00_bglt BgL_nodez00_2459;

									BgL_nodez00_2459 = (BgL_nodez00_bglt) (BgL_arg3532z00_2456);
									{	/* Ast/substitute.scm 257 */
										obj_t BgL_method3281z00_2461;

										{	/* Ast/substitute.scm 257 */
											BgL_objectz00_bglt BgL_objz00_2462;

											BgL_objz00_2462 = (BgL_objectz00_bglt) (BgL_nodez00_2459);
											{	/* Ast/substitute.scm 257 */
												long BgL_objzd2classzd2numz00_2463;

												BgL_objzd2classzd2numz00_2463 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2462);
												{	/* Ast/substitute.scm 257 */
													obj_t BgL_arg2643z00_2464;

													BgL_arg2643z00_2464 =
														PROCEDURE_REF
														(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
														(int) (((long) 1)));
													{	/* Ast/substitute.scm 257 */
														obj_t BgL_arrayz00_2466;

														int BgL_offsetz00_2467;

														BgL_arrayz00_2466 = BgL_arg2643z00_2464;
														BgL_offsetz00_2467 =
															(int) (BgL_objzd2classzd2numz00_2463);
														{	/* Ast/substitute.scm 257 */
															long BgL_offsetz00_2468;

															BgL_offsetz00_2468 =
																((long) (BgL_offsetz00_2467) - OBJECT_TYPE);
															{	/* Ast/substitute.scm 257 */
																long BgL_modz00_2469;

																{	/* Ast/substitute.scm 257 */
																	int BgL_arg2645z00_2470;

																	BgL_arg2645z00_2470 = (int) (((long) 16));
																	{	/* Ast/substitute.scm 257 */
																		long BgL_auxz00_2915;

																		BgL_auxz00_2915 =
																			(long) (BgL_arg2645z00_2470);
																		BgL_modz00_2469 =
																			(BgL_offsetz00_2468 / BgL_auxz00_2915);
																}}
																{	/* Ast/substitute.scm 257 */
																	long BgL_restz00_2471;

																	{	/* Ast/substitute.scm 257 */
																		int BgL_arg2644z00_2472;

																		BgL_arg2644z00_2472 = (int) (((long) 16));
																		{	/* Ast/substitute.scm 257 */
																			long BgL_auxz00_2919;

																			BgL_auxz00_2919 =
																				(long) (BgL_arg2644z00_2472);
																			BgL_restz00_2471 =
																				(BgL_offsetz00_2468 % BgL_auxz00_2919);
																	}}
																	{	/* Ast/substitute.scm 257 */

																		BgL_method3281z00_2461 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2466,
																				(int) (BgL_modz00_2469)),
																			(int) (BgL_restz00_2471));
										}}}}}}}}
										BgL_res3627z00_2486 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3281z00_2461) (BgL_method3281z00_2461,
												(obj_t) (BgL_nodez00_2459), BgL_arg3533z00_2457, BEOA));
								}}
								BgL_arg3531z00_2455 = BgL_res3627z00_2486;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_2930;

							BgL_auxz00_2930 = (BgL_varz00_bglt) (BgL_arg3531z00_2455);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1496))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_2930), BUNSPEC);
					}}
					BgL_auxz00_2903 = BgL_nodez00_1496;
					return (obj_t) (BgL_auxz00_2903);
				}
			}
		}
	}



/* do-substitute!-make-3317 */
	obj_t BGl_dozd2substitutez12zd2makezd23317zc0zzast_substitutez00(obj_t
		BgL_envz00_2588, obj_t BgL_nodez00_2589, obj_t BgL_sitez00_2590)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 249 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1487;

				obj_t BgL_sitez00_1488;

				{	/* Ast/substitute.scm 250 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_2935;

					BgL_nodez00_1487 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2589);
					BgL_sitez00_1488 = BgL_sitez00_2590;
					{	/* Ast/substitute.scm 250 */
						BgL_nodez00_bglt BgL_arg3527z00_2421;

						{	/* Ast/substitute.scm 250 */
							BgL_nodez00_bglt BgL_arg3528z00_2422;

							obj_t BgL_arg3529z00_2423;

							BgL_arg3528z00_2422 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1487))->
								BgL_valuez00);
							BgL_arg3529z00_2423 = CNST_TABLE_REF(((long) 1));
							{	/* Ast/substitute.scm 250 */
								BgL_nodez00_bglt BgL_res3624z00_2452;

								{	/* Ast/substitute.scm 250 */
									obj_t BgL_method3281z00_2427;

									{	/* Ast/substitute.scm 250 */
										BgL_objectz00_bglt BgL_objz00_2428;

										BgL_objz00_2428 =
											(BgL_objectz00_bglt) (BgL_arg3528z00_2422);
										{	/* Ast/substitute.scm 250 */
											long BgL_objzd2classzd2numz00_2429;

											BgL_objzd2classzd2numz00_2429 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2428);
											{	/* Ast/substitute.scm 250 */
												obj_t BgL_arg2643z00_2430;

												BgL_arg2643z00_2430 =
													PROCEDURE_REF
													(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
													(int) (((long) 1)));
												{	/* Ast/substitute.scm 250 */
													obj_t BgL_arrayz00_2432;

													int BgL_offsetz00_2433;

													BgL_arrayz00_2432 = BgL_arg2643z00_2430;
													BgL_offsetz00_2433 =
														(int) (BgL_objzd2classzd2numz00_2429);
													{	/* Ast/substitute.scm 250 */
														long BgL_offsetz00_2434;

														BgL_offsetz00_2434 =
															((long) (BgL_offsetz00_2433) - OBJECT_TYPE);
														{	/* Ast/substitute.scm 250 */
															long BgL_modz00_2435;

															{	/* Ast/substitute.scm 250 */
																int BgL_arg2645z00_2436;

																BgL_arg2645z00_2436 = (int) (((long) 16));
																{	/* Ast/substitute.scm 250 */
																	long BgL_auxz00_2946;

																	BgL_auxz00_2946 =
																		(long) (BgL_arg2645z00_2436);
																	BgL_modz00_2435 =
																		(BgL_offsetz00_2434 / BgL_auxz00_2946);
															}}
															{	/* Ast/substitute.scm 250 */
																long BgL_restz00_2437;

																{	/* Ast/substitute.scm 250 */
																	int BgL_arg2644z00_2438;

																	BgL_arg2644z00_2438 = (int) (((long) 16));
																	{	/* Ast/substitute.scm 250 */
																		long BgL_auxz00_2950;

																		BgL_auxz00_2950 =
																			(long) (BgL_arg2644z00_2438);
																		BgL_restz00_2437 =
																			(BgL_offsetz00_2434 % BgL_auxz00_2950);
																}}
																{	/* Ast/substitute.scm 250 */

																	BgL_method3281z00_2427 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2432,
																			(int) (BgL_modz00_2435)),
																		(int) (BgL_restz00_2437));
									}}}}}}}}
									BgL_res3624z00_2452 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_2427)
										(BgL_method3281z00_2427, (obj_t) (BgL_arg3528z00_2422),
											BgL_arg3529z00_2423, BEOA));
								}
								BgL_arg3527z00_2421 = BgL_res3624z00_2452;
						}}
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1487))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3527z00_2421), BUNSPEC);
					}
					BgL_auxz00_2935 = BgL_nodez00_1487;
					return (obj_t) (BgL_auxz00_2935);
				}
			}
		}
	}



/* do-substitute!-jump-3315 */
	obj_t BGl_dozd2substitutez12zd2jumpzd23315zc0zzast_substitutez00(obj_t
		BgL_envz00_2591, obj_t BgL_nodez00_2592, obj_t BgL_sitez00_2593)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 241 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1475;

				obj_t BgL_sitez00_1476;

				{	/* Ast/substitute.scm 242 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_2964;

					BgL_nodez00_1475 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2592);
					BgL_sitez00_1476 = BgL_sitez00_2593;
					{	/* Ast/substitute.scm 242 */
						BgL_nodez00_bglt BgL_arg3520z00_1479;

						{	/* Ast/substitute.scm 242 */
							BgL_nodez00_bglt BgL_arg3521z00_1480;

							obj_t BgL_arg3522z00_1481;

							BgL_arg3521z00_1480 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1475))->
								BgL_exitz00);
							BgL_arg3522z00_1481 = CNST_TABLE_REF(((long) 3));
							{	/* Ast/substitute.scm 242 */
								BgL_nodez00_bglt BgL_res3618z00_2387;

								{	/* Ast/substitute.scm 242 */
									obj_t BgL_method3281z00_2362;

									{	/* Ast/substitute.scm 242 */
										BgL_objectz00_bglt BgL_objz00_2363;

										BgL_objz00_2363 =
											(BgL_objectz00_bglt) (BgL_arg3521z00_1480);
										{	/* Ast/substitute.scm 242 */
											long BgL_objzd2classzd2numz00_2364;

											BgL_objzd2classzd2numz00_2364 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2363);
											{	/* Ast/substitute.scm 242 */
												obj_t BgL_arg2643z00_2365;

												BgL_arg2643z00_2365 =
													PROCEDURE_REF
													(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
													(int) (((long) 1)));
												{	/* Ast/substitute.scm 242 */
													obj_t BgL_arrayz00_2367;

													int BgL_offsetz00_2368;

													BgL_arrayz00_2367 = BgL_arg2643z00_2365;
													BgL_offsetz00_2368 =
														(int) (BgL_objzd2classzd2numz00_2364);
													{	/* Ast/substitute.scm 242 */
														long BgL_offsetz00_2369;

														BgL_offsetz00_2369 =
															((long) (BgL_offsetz00_2368) - OBJECT_TYPE);
														{	/* Ast/substitute.scm 242 */
															long BgL_modz00_2370;

															{	/* Ast/substitute.scm 242 */
																int BgL_arg2645z00_2371;

																BgL_arg2645z00_2371 = (int) (((long) 16));
																{	/* Ast/substitute.scm 242 */
																	long BgL_auxz00_2975;

																	BgL_auxz00_2975 =
																		(long) (BgL_arg2645z00_2371);
																	BgL_modz00_2370 =
																		(BgL_offsetz00_2369 / BgL_auxz00_2975);
															}}
															{	/* Ast/substitute.scm 242 */
																long BgL_restz00_2372;

																{	/* Ast/substitute.scm 242 */
																	int BgL_arg2644z00_2373;

																	BgL_arg2644z00_2373 = (int) (((long) 16));
																	{	/* Ast/substitute.scm 242 */
																		long BgL_auxz00_2979;

																		BgL_auxz00_2979 =
																			(long) (BgL_arg2644z00_2373);
																		BgL_restz00_2372 =
																			(BgL_offsetz00_2369 % BgL_auxz00_2979);
																}}
																{	/* Ast/substitute.scm 242 */

																	BgL_method3281z00_2362 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2367,
																			(int) (BgL_modz00_2370)),
																		(int) (BgL_restz00_2372));
									}}}}}}}}
									BgL_res3618z00_2387 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_2362)
										(BgL_method3281z00_2362, (obj_t) (BgL_arg3521z00_1480),
											BgL_arg3522z00_1481, BEOA));
								}
								BgL_arg3520z00_1479 = BgL_res3618z00_2387;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1475))->
								BgL_exitz00) =
							((BgL_nodez00_bglt) BgL_arg3520z00_1479), BUNSPEC);
					}
					{	/* Ast/substitute.scm 243 */
						BgL_nodez00_bglt BgL_arg3523z00_1482;

						{	/* Ast/substitute.scm 243 */
							BgL_nodez00_bglt BgL_arg3524z00_1483;

							obj_t BgL_arg3525z00_1484;

							BgL_arg3524z00_1483 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1475))->
								BgL_valuez00);
							BgL_arg3525z00_1484 = CNST_TABLE_REF(((long) 1));
							{	/* Ast/substitute.scm 243 */
								BgL_nodez00_bglt BgL_res3621z00_2418;

								{	/* Ast/substitute.scm 243 */
									obj_t BgL_method3281z00_2393;

									{	/* Ast/substitute.scm 243 */
										BgL_objectz00_bglt BgL_objz00_2394;

										BgL_objz00_2394 =
											(BgL_objectz00_bglt) (BgL_arg3524z00_1483);
										{	/* Ast/substitute.scm 243 */
											long BgL_objzd2classzd2numz00_2395;

											BgL_objzd2classzd2numz00_2395 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2394);
											{	/* Ast/substitute.scm 243 */
												obj_t BgL_arg2643z00_2396;

												BgL_arg2643z00_2396 =
													PROCEDURE_REF
													(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
													(int) (((long) 1)));
												{	/* Ast/substitute.scm 243 */
													obj_t BgL_arrayz00_2398;

													int BgL_offsetz00_2399;

													BgL_arrayz00_2398 = BgL_arg2643z00_2396;
													BgL_offsetz00_2399 =
														(int) (BgL_objzd2classzd2numz00_2395);
													{	/* Ast/substitute.scm 243 */
														long BgL_offsetz00_2400;

														BgL_offsetz00_2400 =
															((long) (BgL_offsetz00_2399) - OBJECT_TYPE);
														{	/* Ast/substitute.scm 243 */
															long BgL_modz00_2401;

															{	/* Ast/substitute.scm 243 */
																int BgL_arg2645z00_2402;

																BgL_arg2645z00_2402 = (int) (((long) 16));
																{	/* Ast/substitute.scm 243 */
																	long BgL_auxz00_3001;

																	BgL_auxz00_3001 =
																		(long) (BgL_arg2645z00_2402);
																	BgL_modz00_2401 =
																		(BgL_offsetz00_2400 / BgL_auxz00_3001);
															}}
															{	/* Ast/substitute.scm 243 */
																long BgL_restz00_2403;

																{	/* Ast/substitute.scm 243 */
																	int BgL_arg2644z00_2404;

																	BgL_arg2644z00_2404 = (int) (((long) 16));
																	{	/* Ast/substitute.scm 243 */
																		long BgL_auxz00_3005;

																		BgL_auxz00_3005 =
																			(long) (BgL_arg2644z00_2404);
																		BgL_restz00_2403 =
																			(BgL_offsetz00_2400 % BgL_auxz00_3005);
																}}
																{	/* Ast/substitute.scm 243 */

																	BgL_method3281z00_2393 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2398,
																			(int) (BgL_modz00_2401)),
																		(int) (BgL_restz00_2403));
									}}}}}}}}
									BgL_res3621z00_2418 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_2393)
										(BgL_method3281z00_2393, (obj_t) (BgL_arg3524z00_1483),
											BgL_arg3525z00_1484, BEOA));
								}
								BgL_arg3523z00_1482 = BgL_res3621z00_2418;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1475))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3523z00_1482), BUNSPEC);
					}
					BgL_auxz00_2964 = BgL_nodez00_1475;
					return (obj_t) (BgL_auxz00_2964);
				}
			}
		}
	}



/* do-substitute!-set-e3313 */
	obj_t BGl_dozd2substitutez12zd2setzd2e3313zc0zzast_substitutez00(obj_t
		BgL_envz00_2594, obj_t BgL_nodez00_2595, obj_t BgL_sitez00_2596)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 234 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1467;

				obj_t BgL_sitez00_1468;

				{	/* Ast/substitute.scm 235 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_3019;

					BgL_nodez00_1467 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2595);
					BgL_sitez00_1468 = BgL_sitez00_2596;
					{	/* Ast/substitute.scm 235 */
						BgL_nodez00_bglt BgL_arg3517z00_2326;

						{	/* Ast/substitute.scm 235 */
							BgL_nodez00_bglt BgL_arg3518z00_2327;

							BgL_arg3518z00_2327 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1467))->
								BgL_bodyz00);
							{	/* Ast/substitute.scm 235 */
								BgL_nodez00_bglt BgL_res3615z00_2356;

								{	/* Ast/substitute.scm 235 */
									obj_t BgL_method3281z00_2331;

									{	/* Ast/substitute.scm 235 */
										BgL_objectz00_bglt BgL_objz00_2332;

										BgL_objz00_2332 =
											(BgL_objectz00_bglt) (BgL_arg3518z00_2327);
										{	/* Ast/substitute.scm 235 */
											long BgL_objzd2classzd2numz00_2333;

											BgL_objzd2classzd2numz00_2333 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2332);
											{	/* Ast/substitute.scm 235 */
												obj_t BgL_arg2643z00_2334;

												BgL_arg2643z00_2334 =
													PROCEDURE_REF
													(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
													(int) (((long) 1)));
												{	/* Ast/substitute.scm 235 */
													obj_t BgL_arrayz00_2336;

													int BgL_offsetz00_2337;

													BgL_arrayz00_2336 = BgL_arg2643z00_2334;
													BgL_offsetz00_2337 =
														(int) (BgL_objzd2classzd2numz00_2333);
													{	/* Ast/substitute.scm 235 */
														long BgL_offsetz00_2338;

														BgL_offsetz00_2338 =
															((long) (BgL_offsetz00_2337) - OBJECT_TYPE);
														{	/* Ast/substitute.scm 235 */
															long BgL_modz00_2339;

															{	/* Ast/substitute.scm 235 */
																int BgL_arg2645z00_2340;

																BgL_arg2645z00_2340 = (int) (((long) 16));
																{	/* Ast/substitute.scm 235 */
																	long BgL_auxz00_3029;

																	BgL_auxz00_3029 =
																		(long) (BgL_arg2645z00_2340);
																	BgL_modz00_2339 =
																		(BgL_offsetz00_2338 / BgL_auxz00_3029);
															}}
															{	/* Ast/substitute.scm 235 */
																long BgL_restz00_2341;

																{	/* Ast/substitute.scm 235 */
																	int BgL_arg2644z00_2342;

																	BgL_arg2644z00_2342 = (int) (((long) 16));
																	{	/* Ast/substitute.scm 235 */
																		long BgL_auxz00_3033;

																		BgL_auxz00_3033 =
																			(long) (BgL_arg2644z00_2342);
																		BgL_restz00_2341 =
																			(BgL_offsetz00_2338 % BgL_auxz00_3033);
																}}
																{	/* Ast/substitute.scm 235 */

																	BgL_method3281z00_2331 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2336,
																			(int) (BgL_modz00_2339)),
																		(int) (BgL_restz00_2341));
									}}}}}}}}
									BgL_res3615z00_2356 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_2331)
										(BgL_method3281z00_2331, (obj_t) (BgL_arg3518z00_2327),
											BgL_sitez00_1468, BEOA));
								}
								BgL_arg3517z00_2326 = BgL_res3615z00_2356;
						}}
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1467))->
								BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3517z00_2326), BUNSPEC);
					}
					BgL_auxz00_3019 = BgL_nodez00_1467;
					return (obj_t) (BgL_auxz00_3019);
				}
			}
		}
	}



/* do-substitute!-let-v3311 */
	obj_t BGl_dozd2substitutez12zd2letzd2v3311zc0zzast_substitutez00(obj_t
		BgL_envz00_2597, obj_t BgL_nodez00_2598, obj_t BgL_sitez00_2599)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 224 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1448;

				obj_t BgL_sitez00_1449;

				{	/* Ast/substitute.scm 225 */
					BgL_letzd2varzd2_bglt BgL_auxz00_3047;

					BgL_nodez00_1448 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2598);
					BgL_sitez00_1449 = BgL_sitez00_2599;
					{	/* Ast/substitute.scm 225 */
						obj_t BgL_g3279z00_1452;

						BgL_g3279z00_1452 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1448))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3277z00_1454;

							BgL_l3277z00_1454 = BgL_g3279z00_1452;
						BgL_zc3anonymousza33507ze3z83_1455:
							if (PAIRP(BgL_l3277z00_1454))
								{	/* Ast/substitute.scm 227 */
									{	/* Ast/substitute.scm 226 */
										obj_t BgL_bindingz00_1457;

										BgL_bindingz00_1457 = CAR(BgL_l3277z00_1454);
										{	/* Ast/substitute.scm 226 */
											BgL_nodez00_bglt BgL_arg3509z00_1458;

											{	/* Ast/substitute.scm 226 */
												obj_t BgL_arg3510z00_1459;

												obj_t BgL_arg3511z00_1460;

												BgL_arg3510z00_1459 = CDR(BgL_bindingz00_1457);
												BgL_arg3511z00_1460 = CNST_TABLE_REF(((long) 1));
												{	/* Ast/substitute.scm 226 */
													BgL_nodez00_bglt BgL_res3609z00_2291;

													{	/* Ast/substitute.scm 226 */
														BgL_nodez00_bglt BgL_nodez00_2264;

														BgL_nodez00_2264 =
															(BgL_nodez00_bglt) (BgL_arg3510z00_1459);
														{	/* Ast/substitute.scm 226 */
															obj_t BgL_method3281z00_2266;

															{	/* Ast/substitute.scm 226 */
																BgL_objectz00_bglt BgL_objz00_2267;

																BgL_objz00_2267 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2264);
																{	/* Ast/substitute.scm 226 */
																	long BgL_objzd2classzd2numz00_2268;

																	BgL_objzd2classzd2numz00_2268 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2267);
																	{	/* Ast/substitute.scm 226 */
																		obj_t BgL_arg2643z00_2269;

																		BgL_arg2643z00_2269 =
																			PROCEDURE_REF
																			(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
																			(int) (((long) 1)));
																		{	/* Ast/substitute.scm 226 */
																			obj_t BgL_arrayz00_2271;

																			int BgL_offsetz00_2272;

																			BgL_arrayz00_2271 = BgL_arg2643z00_2269;
																			BgL_offsetz00_2272 =
																				(int) (BgL_objzd2classzd2numz00_2268);
																			{	/* Ast/substitute.scm 226 */
																				long BgL_offsetz00_2273;

																				BgL_offsetz00_2273 =
																					(
																					(long) (BgL_offsetz00_2272) -
																					OBJECT_TYPE);
																				{	/* Ast/substitute.scm 226 */
																					long BgL_modz00_2274;

																					{	/* Ast/substitute.scm 226 */
																						int BgL_arg2645z00_2275;

																						BgL_arg2645z00_2275 =
																							(int) (((long) 16));
																						{	/* Ast/substitute.scm 226 */
																							long BgL_auxz00_3063;

																							BgL_auxz00_3063 =
																								(long) (BgL_arg2645z00_2275);
																							BgL_modz00_2274 =
																								(BgL_offsetz00_2273 /
																								BgL_auxz00_3063);
																					}}
																					{	/* Ast/substitute.scm 226 */
																						long BgL_restz00_2276;

																						{	/* Ast/substitute.scm 226 */
																							int BgL_arg2644z00_2277;

																							BgL_arg2644z00_2277 =
																								(int) (((long) 16));
																							{	/* Ast/substitute.scm 226 */
																								long BgL_auxz00_3067;

																								BgL_auxz00_3067 =
																									(long) (BgL_arg2644z00_2277);
																								BgL_restz00_2276 =
																									(BgL_offsetz00_2273 %
																									BgL_auxz00_3067);
																						}}
																						{	/* Ast/substitute.scm 226 */

																							BgL_method3281z00_2266 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2271,
																									(int) (BgL_modz00_2274)),
																								(int) (BgL_restz00_2276));
															}}}}}}}}
															BgL_res3609z00_2291 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3281z00_2266)
																(BgL_method3281z00_2266,
																	(obj_t) (BgL_nodez00_2264),
																	BgL_arg3511z00_1460, BEOA));
													}}
													BgL_arg3509z00_1458 = BgL_res3609z00_2291;
											}}
											{	/* Ast/substitute.scm 226 */
												obj_t BgL_auxz00_3078;

												BgL_auxz00_3078 = (obj_t) (BgL_arg3509z00_1458);
												SET_CDR(BgL_bindingz00_1457, BgL_auxz00_3078);
									}}}
									{
										obj_t BgL_l3277z00_3081;

										BgL_l3277z00_3081 = CDR(BgL_l3277z00_1454);
										BgL_l3277z00_1454 = BgL_l3277z00_3081;
										goto BgL_zc3anonymousza33507ze3z83_1455;
									}
								}
							else
								{	/* Ast/substitute.scm 227 */
									((bool_t) 1);
								}
						}
					}
					{	/* Ast/substitute.scm 228 */
						BgL_nodez00_bglt BgL_arg3513z00_1463;

						{	/* Ast/substitute.scm 228 */
							BgL_nodez00_bglt BgL_arg3514z00_1464;

							BgL_arg3514z00_1464 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1448))->BgL_bodyz00);
							{	/* Ast/substitute.scm 228 */
								BgL_nodez00_bglt BgL_res3612z00_2323;

								{	/* Ast/substitute.scm 228 */
									obj_t BgL_method3281z00_2298;

									{	/* Ast/substitute.scm 228 */
										BgL_objectz00_bglt BgL_objz00_2299;

										BgL_objz00_2299 =
											(BgL_objectz00_bglt) (BgL_arg3514z00_1464);
										{	/* Ast/substitute.scm 228 */
											long BgL_objzd2classzd2numz00_2300;

											BgL_objzd2classzd2numz00_2300 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2299);
											{	/* Ast/substitute.scm 228 */
												obj_t BgL_arg2643z00_2301;

												BgL_arg2643z00_2301 =
													PROCEDURE_REF
													(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
													(int) (((long) 1)));
												{	/* Ast/substitute.scm 228 */
													obj_t BgL_arrayz00_2303;

													int BgL_offsetz00_2304;

													BgL_arrayz00_2303 = BgL_arg2643z00_2301;
													BgL_offsetz00_2304 =
														(int) (BgL_objzd2classzd2numz00_2300);
													{	/* Ast/substitute.scm 228 */
														long BgL_offsetz00_2305;

														BgL_offsetz00_2305 =
															((long) (BgL_offsetz00_2304) - OBJECT_TYPE);
														{	/* Ast/substitute.scm 228 */
															long BgL_modz00_2306;

															{	/* Ast/substitute.scm 228 */
																int BgL_arg2645z00_2307;

																BgL_arg2645z00_2307 = (int) (((long) 16));
																{	/* Ast/substitute.scm 228 */
																	long BgL_auxz00_3092;

																	BgL_auxz00_3092 =
																		(long) (BgL_arg2645z00_2307);
																	BgL_modz00_2306 =
																		(BgL_offsetz00_2305 / BgL_auxz00_3092);
															}}
															{	/* Ast/substitute.scm 228 */
																long BgL_restz00_2308;

																{	/* Ast/substitute.scm 228 */
																	int BgL_arg2644z00_2309;

																	BgL_arg2644z00_2309 = (int) (((long) 16));
																	{	/* Ast/substitute.scm 228 */
																		long BgL_auxz00_3096;

																		BgL_auxz00_3096 =
																			(long) (BgL_arg2644z00_2309);
																		BgL_restz00_2308 =
																			(BgL_offsetz00_2305 % BgL_auxz00_3096);
																}}
																{	/* Ast/substitute.scm 228 */

																	BgL_method3281z00_2298 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2303,
																			(int) (BgL_modz00_2306)),
																		(int) (BgL_restz00_2308));
									}}}}}}}}
									BgL_res3612z00_2323 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_2298)
										(BgL_method3281z00_2298, (obj_t) (BgL_arg3514z00_1464),
											BgL_sitez00_1449, BEOA));
								}
								BgL_arg3513z00_1463 = BgL_res3612z00_2323;
						}}
						((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1448))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3513z00_1463), BUNSPEC);
					}
					BgL_auxz00_3047 = BgL_nodez00_1448;
					return (obj_t) (BgL_auxz00_3047);
				}
			}
		}
	}



/* do-substitute!-let-f3309 */
	obj_t BGl_dozd2substitutez12zd2letzd2f3309zc0zzast_substitutez00(obj_t
		BgL_envz00_2600, obj_t BgL_nodez00_2601, obj_t BgL_sitez00_2602)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 212 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1428;

				obj_t BgL_sitez00_1429;

				{	/* Ast/substitute.scm 213 */
					BgL_letzd2funzd2_bglt BgL_auxz00_3110;

					BgL_nodez00_1428 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2601);
					BgL_sitez00_1429 = BgL_sitez00_2602;
					{	/* Ast/substitute.scm 213 */
						obj_t BgL_g3276z00_1432;

						BgL_g3276z00_1432 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1428))->BgL_localsz00);
						{
							obj_t BgL_l3274z00_1434;

							BgL_l3274z00_1434 = BgL_g3276z00_1432;
						BgL_zc3anonymousza33498ze3z83_1435:
							if (PAIRP(BgL_l3274z00_1434))
								{	/* Ast/substitute.scm 217 */
									{	/* Ast/substitute.scm 214 */
										obj_t BgL_localz00_1437;

										BgL_localz00_1437 = CAR(BgL_l3274z00_1434);
										{	/* Ast/substitute.scm 214 */
											BgL_valuez00_bglt BgL_funz00_1438;

											{
												BgL_variablez00_bglt BgL_auxz00_3115;

												BgL_auxz00_3115 =
													(BgL_variablez00_bglt) (BgL_localz00_1437);
												BgL_funz00_1438 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3115))->
													BgL_valuez00);
											}
											{	/* Ast/substitute.scm 215 */
												BgL_nodez00_bglt BgL_arg3500z00_1439;

												{	/* Ast/substitute.scm 215 */
													obj_t BgL_arg3501z00_1440;

													obj_t BgL_arg3502z00_1441;

													{
														BgL_sfunz00_bglt BgL_auxz00_3118;

														BgL_auxz00_3118 =
															(BgL_sfunz00_bglt) (BgL_funz00_1438);
														BgL_arg3501z00_1440 =
															(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3118))->
															BgL_bodyz00);
													}
													BgL_arg3502z00_1441 = CNST_TABLE_REF(((long) 1));
													{	/* Ast/substitute.scm 215 */
														BgL_nodez00_bglt BgL_res3603z00_2225;

														{	/* Ast/substitute.scm 215 */
															BgL_nodez00_bglt BgL_nodez00_2198;

															BgL_nodez00_2198 =
																(BgL_nodez00_bglt) (BgL_arg3501z00_1440);
															{	/* Ast/substitute.scm 215 */
																obj_t BgL_method3281z00_2200;

																{	/* Ast/substitute.scm 215 */
																	BgL_objectz00_bglt BgL_objz00_2201;

																	BgL_objz00_2201 =
																		(BgL_objectz00_bglt) (BgL_nodez00_2198);
																	{	/* Ast/substitute.scm 215 */
																		long BgL_objzd2classzd2numz00_2202;

																		BgL_objzd2classzd2numz00_2202 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_2201);
																		{	/* Ast/substitute.scm 215 */
																			obj_t BgL_arg2643z00_2203;

																			BgL_arg2643z00_2203 =
																				PROCEDURE_REF
																				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
																				(int) (((long) 1)));
																			{	/* Ast/substitute.scm 215 */
																				obj_t BgL_arrayz00_2205;

																				int BgL_offsetz00_2206;

																				BgL_arrayz00_2205 = BgL_arg2643z00_2203;
																				BgL_offsetz00_2206 =
																					(int) (BgL_objzd2classzd2numz00_2202);
																				{	/* Ast/substitute.scm 215 */
																					long BgL_offsetz00_2207;

																					BgL_offsetz00_2207 =
																						(
																						(long) (BgL_offsetz00_2206) -
																						OBJECT_TYPE);
																					{	/* Ast/substitute.scm 215 */
																						long BgL_modz00_2208;

																						{	/* Ast/substitute.scm 215 */
																							int BgL_arg2645z00_2209;

																							BgL_arg2645z00_2209 =
																								(int) (((long) 16));
																							{	/* Ast/substitute.scm 215 */
																								long BgL_auxz00_3131;

																								BgL_auxz00_3131 =
																									(long) (BgL_arg2645z00_2209);
																								BgL_modz00_2208 =
																									(BgL_offsetz00_2207 /
																									BgL_auxz00_3131);
																						}}
																						{	/* Ast/substitute.scm 215 */
																							long BgL_restz00_2210;

																							{	/* Ast/substitute.scm 215 */
																								int BgL_arg2644z00_2211;

																								BgL_arg2644z00_2211 =
																									(int) (((long) 16));
																								{	/* Ast/substitute.scm 215 */
																									long BgL_auxz00_3135;

																									BgL_auxz00_3135 =
																										(long)
																										(BgL_arg2644z00_2211);
																									BgL_restz00_2210 =
																										(BgL_offsetz00_2207 %
																										BgL_auxz00_3135);
																							}}
																							{	/* Ast/substitute.scm 215 */

																								BgL_method3281z00_2200 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_2205,
																										(int) (BgL_modz00_2208)),
																									(int) (BgL_restz00_2210));
																}}}}}}}}
																BgL_res3603z00_2225 =
																	(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																	(BgL_method3281z00_2200)
																	(BgL_method3281z00_2200,
																		(obj_t) (BgL_nodez00_2198),
																		BgL_arg3502z00_1441, BEOA));
														}}
														BgL_arg3500z00_1439 = BgL_res3603z00_2225;
												}}
												{
													obj_t BgL_auxz00_3148;

													BgL_sfunz00_bglt BgL_auxz00_3146;

													BgL_auxz00_3148 = (obj_t) (BgL_arg3500z00_1439);
													BgL_auxz00_3146 =
														(BgL_sfunz00_bglt) (BgL_funz00_1438);
													((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3146))->
															BgL_bodyz00) =
														((obj_t) BgL_auxz00_3148), BUNSPEC);
									}}}}
									{
										obj_t BgL_l3274z00_3151;

										BgL_l3274z00_3151 = CDR(BgL_l3274z00_1434);
										BgL_l3274z00_1434 = BgL_l3274z00_3151;
										goto BgL_zc3anonymousza33498ze3z83_1435;
									}
								}
							else
								{	/* Ast/substitute.scm 217 */
									((bool_t) 1);
								}
						}
					}
					{	/* Ast/substitute.scm 218 */
						BgL_nodez00_bglt BgL_arg3504z00_1444;

						{	/* Ast/substitute.scm 218 */
							BgL_nodez00_bglt BgL_arg3505z00_1445;

							BgL_arg3505z00_1445 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1428))->BgL_bodyz00);
							{	/* Ast/substitute.scm 218 */
								BgL_nodez00_bglt BgL_res3606z00_2257;

								{	/* Ast/substitute.scm 218 */
									obj_t BgL_method3281z00_2232;

									{	/* Ast/substitute.scm 218 */
										BgL_objectz00_bglt BgL_objz00_2233;

										BgL_objz00_2233 =
											(BgL_objectz00_bglt) (BgL_arg3505z00_1445);
										{	/* Ast/substitute.scm 218 */
											long BgL_objzd2classzd2numz00_2234;

											BgL_objzd2classzd2numz00_2234 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2233);
											{	/* Ast/substitute.scm 218 */
												obj_t BgL_arg2643z00_2235;

												BgL_arg2643z00_2235 =
													PROCEDURE_REF
													(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
													(int) (((long) 1)));
												{	/* Ast/substitute.scm 218 */
													obj_t BgL_arrayz00_2237;

													int BgL_offsetz00_2238;

													BgL_arrayz00_2237 = BgL_arg2643z00_2235;
													BgL_offsetz00_2238 =
														(int) (BgL_objzd2classzd2numz00_2234);
													{	/* Ast/substitute.scm 218 */
														long BgL_offsetz00_2239;

														BgL_offsetz00_2239 =
															((long) (BgL_offsetz00_2238) - OBJECT_TYPE);
														{	/* Ast/substitute.scm 218 */
															long BgL_modz00_2240;

															{	/* Ast/substitute.scm 218 */
																int BgL_arg2645z00_2241;

																BgL_arg2645z00_2241 = (int) (((long) 16));
																{	/* Ast/substitute.scm 218 */
																	long BgL_auxz00_3162;

																	BgL_auxz00_3162 =
																		(long) (BgL_arg2645z00_2241);
																	BgL_modz00_2240 =
																		(BgL_offsetz00_2239 / BgL_auxz00_3162);
															}}
															{	/* Ast/substitute.scm 218 */
																long BgL_restz00_2242;

																{	/* Ast/substitute.scm 218 */
																	int BgL_arg2644z00_2243;

																	BgL_arg2644z00_2243 = (int) (((long) 16));
																	{	/* Ast/substitute.scm 218 */
																		long BgL_auxz00_3166;

																		BgL_auxz00_3166 =
																			(long) (BgL_arg2644z00_2243);
																		BgL_restz00_2242 =
																			(BgL_offsetz00_2239 % BgL_auxz00_3166);
																}}
																{	/* Ast/substitute.scm 218 */

																	BgL_method3281z00_2232 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2237,
																			(int) (BgL_modz00_2240)),
																		(int) (BgL_restz00_2242));
									}}}}}}}}
									BgL_res3606z00_2257 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_2232)
										(BgL_method3281z00_2232, (obj_t) (BgL_arg3505z00_1445),
											BgL_sitez00_1429, BEOA));
								}
								BgL_arg3504z00_1444 = BgL_res3606z00_2257;
						}}
						((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1428))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3504z00_1444), BUNSPEC);
					}
					BgL_auxz00_3110 = BgL_nodez00_1428;
					return (obj_t) (BgL_auxz00_3110);
				}
			}
		}
	}



/* do-substitute!-selec3307 */
	obj_t BGl_dozd2substitutez12zd2selec3307z12zzast_substitutez00(obj_t
		BgL_envz00_2603, obj_t BgL_nodez00_2604, obj_t BgL_sitez00_2605)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 202 */
			{
				BgL_selectz00_bglt BgL_nodez00_1409;

				obj_t BgL_sitez00_1410;

				{	/* Ast/substitute.scm 203 */
					BgL_selectz00_bglt BgL_auxz00_3180;

					BgL_nodez00_1409 = (BgL_selectz00_bglt) (BgL_nodez00_2604);
					BgL_sitez00_1410 = BgL_sitez00_2605;
					{	/* Ast/substitute.scm 203 */
						BgL_nodez00_bglt BgL_arg3489z00_1413;

						{	/* Ast/substitute.scm 203 */
							BgL_nodez00_bglt BgL_arg3490z00_1414;

							obj_t BgL_arg3491z00_1415;

							BgL_arg3490z00_1414 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1409))->BgL_testz00);
							BgL_arg3491z00_1415 = CNST_TABLE_REF(((long) 1));
							{	/* Ast/substitute.scm 203 */
								BgL_nodez00_bglt BgL_res3597z00_2155;

								{	/* Ast/substitute.scm 203 */
									obj_t BgL_method3281z00_2130;

									{	/* Ast/substitute.scm 203 */
										BgL_objectz00_bglt BgL_objz00_2131;

										BgL_objz00_2131 =
											(BgL_objectz00_bglt) (BgL_arg3490z00_1414);
										{	/* Ast/substitute.scm 203 */
											long BgL_objzd2classzd2numz00_2132;

											BgL_objzd2classzd2numz00_2132 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2131);
											{	/* Ast/substitute.scm 203 */
												obj_t BgL_arg2643z00_2133;

												BgL_arg2643z00_2133 =
													PROCEDURE_REF
													(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
													(int) (((long) 1)));
												{	/* Ast/substitute.scm 203 */
													obj_t BgL_arrayz00_2135;

													int BgL_offsetz00_2136;

													BgL_arrayz00_2135 = BgL_arg2643z00_2133;
													BgL_offsetz00_2136 =
														(int) (BgL_objzd2classzd2numz00_2132);
													{	/* Ast/substitute.scm 203 */
														long BgL_offsetz00_2137;

														BgL_offsetz00_2137 =
															((long) (BgL_offsetz00_2136) - OBJECT_TYPE);
														{	/* Ast/substitute.scm 203 */
															long BgL_modz00_2138;

															{	/* Ast/substitute.scm 203 */
																int BgL_arg2645z00_2139;

																BgL_arg2645z00_2139 = (int) (((long) 16));
																{	/* Ast/substitute.scm 203 */
																	long BgL_auxz00_3191;

																	BgL_auxz00_3191 =
																		(long) (BgL_arg2645z00_2139);
																	BgL_modz00_2138 =
																		(BgL_offsetz00_2137 / BgL_auxz00_3191);
															}}
															{	/* Ast/substitute.scm 203 */
																long BgL_restz00_2140;

																{	/* Ast/substitute.scm 203 */
																	int BgL_arg2644z00_2141;

																	BgL_arg2644z00_2141 = (int) (((long) 16));
																	{	/* Ast/substitute.scm 203 */
																		long BgL_auxz00_3195;

																		BgL_auxz00_3195 =
																			(long) (BgL_arg2644z00_2141);
																		BgL_restz00_2140 =
																			(BgL_offsetz00_2137 % BgL_auxz00_3195);
																}}
																{	/* Ast/substitute.scm 203 */

																	BgL_method3281z00_2130 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2135,
																			(int) (BgL_modz00_2138)),
																		(int) (BgL_restz00_2140));
									}}}}}}}}
									BgL_res3597z00_2155 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_2130)
										(BgL_method3281z00_2130, (obj_t) (BgL_arg3490z00_1414),
											BgL_arg3491z00_1415, BEOA));
								}
								BgL_arg3489z00_1413 = BgL_res3597z00_2155;
						}}
						((((BgL_selectz00_bglt) CREF(BgL_nodez00_1409))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3489z00_1413), BUNSPEC);
					}
					{	/* Ast/substitute.scm 204 */
						obj_t BgL_g3273z00_1416;

						BgL_g3273z00_1416 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1409))->BgL_clausesz00);
						{
							obj_t BgL_l3271z00_1418;

							BgL_l3271z00_1418 = BgL_g3273z00_1416;
						BgL_zc3anonymousza33492ze3z83_1419:
							if (PAIRP(BgL_l3271z00_1418))
								{	/* Ast/substitute.scm 206 */
									{	/* Ast/substitute.scm 205 */
										obj_t BgL_clausez00_1421;

										BgL_clausez00_1421 = CAR(BgL_l3271z00_1418);
										{	/* Ast/substitute.scm 205 */
											BgL_nodez00_bglt BgL_arg3494z00_1422;

											{	/* Ast/substitute.scm 205 */
												obj_t BgL_arg3495z00_1423;

												BgL_arg3495z00_1423 = CDR(BgL_clausez00_1421);
												{	/* Ast/substitute.scm 205 */
													BgL_nodez00_bglt BgL_res3600z00_2189;

													{	/* Ast/substitute.scm 205 */
														BgL_nodez00_bglt BgL_nodez00_2162;

														BgL_nodez00_2162 =
															(BgL_nodez00_bglt) (BgL_arg3495z00_1423);
														{	/* Ast/substitute.scm 205 */
															obj_t BgL_method3281z00_2164;

															{	/* Ast/substitute.scm 205 */
																BgL_objectz00_bglt BgL_objz00_2165;

																BgL_objz00_2165 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2162);
																{	/* Ast/substitute.scm 205 */
																	long BgL_objzd2classzd2numz00_2166;

																	BgL_objzd2classzd2numz00_2166 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2165);
																	{	/* Ast/substitute.scm 205 */
																		obj_t BgL_arg2643z00_2167;

																		BgL_arg2643z00_2167 =
																			PROCEDURE_REF
																			(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
																			(int) (((long) 1)));
																		{	/* Ast/substitute.scm 205 */
																			obj_t BgL_arrayz00_2169;

																			int BgL_offsetz00_2170;

																			BgL_arrayz00_2169 = BgL_arg2643z00_2167;
																			BgL_offsetz00_2170 =
																				(int) (BgL_objzd2classzd2numz00_2166);
																			{	/* Ast/substitute.scm 205 */
																				long BgL_offsetz00_2171;

																				BgL_offsetz00_2171 =
																					(
																					(long) (BgL_offsetz00_2170) -
																					OBJECT_TYPE);
																				{	/* Ast/substitute.scm 205 */
																					long BgL_modz00_2172;

																					{	/* Ast/substitute.scm 205 */
																						int BgL_arg2645z00_2173;

																						BgL_arg2645z00_2173 =
																							(int) (((long) 16));
																						{	/* Ast/substitute.scm 205 */
																							long BgL_auxz00_3221;

																							BgL_auxz00_3221 =
																								(long) (BgL_arg2645z00_2173);
																							BgL_modz00_2172 =
																								(BgL_offsetz00_2171 /
																								BgL_auxz00_3221);
																					}}
																					{	/* Ast/substitute.scm 205 */
																						long BgL_restz00_2174;

																						{	/* Ast/substitute.scm 205 */
																							int BgL_arg2644z00_2175;

																							BgL_arg2644z00_2175 =
																								(int) (((long) 16));
																							{	/* Ast/substitute.scm 205 */
																								long BgL_auxz00_3225;

																								BgL_auxz00_3225 =
																									(long) (BgL_arg2644z00_2175);
																								BgL_restz00_2174 =
																									(BgL_offsetz00_2171 %
																									BgL_auxz00_3225);
																						}}
																						{	/* Ast/substitute.scm 205 */

																							BgL_method3281z00_2164 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2169,
																									(int) (BgL_modz00_2172)),
																								(int) (BgL_restz00_2174));
															}}}}}}}}
															BgL_res3600z00_2189 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3281z00_2164)
																(BgL_method3281z00_2164,
																	(obj_t) (BgL_nodez00_2162), BgL_sitez00_1410,
																	BEOA));
													}}
													BgL_arg3494z00_1422 = BgL_res3600z00_2189;
											}}
											{	/* Ast/substitute.scm 205 */
												obj_t BgL_auxz00_3236;

												BgL_auxz00_3236 = (obj_t) (BgL_arg3494z00_1422);
												SET_CDR(BgL_clausez00_1421, BgL_auxz00_3236);
									}}}
									{
										obj_t BgL_l3271z00_3239;

										BgL_l3271z00_3239 = CDR(BgL_l3271z00_1418);
										BgL_l3271z00_1418 = BgL_l3271z00_3239;
										goto BgL_zc3anonymousza33492ze3z83_1419;
									}
								}
							else
								{	/* Ast/substitute.scm 206 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_3180 = BgL_nodez00_1409;
					return (obj_t) (BgL_auxz00_3180);
				}
			}
		}
	}



/* do-substitute!-fail3305 */
	obj_t BGl_dozd2substitutez12zd2fail3305z12zzast_substitutez00(obj_t
		BgL_envz00_2606, obj_t BgL_nodez00_2607, obj_t BgL_sitez00_2608)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 192 */
			{
				BgL_failz00_bglt BgL_nodez00_1393;

				obj_t BgL_sitez00_1394;

				{	/* Ast/substitute.scm 193 */
					BgL_failz00_bglt BgL_auxz00_3243;

					BgL_nodez00_1393 = (BgL_failz00_bglt) (BgL_nodez00_2607);
					BgL_sitez00_1394 = BgL_sitez00_2608;
					{	/* Ast/substitute.scm 194 */
						BgL_nodez00_bglt BgL_arg3478z00_1398;

						{	/* Ast/substitute.scm 194 */
							BgL_nodez00_bglt BgL_arg3479z00_1399;

							obj_t BgL_arg3480z00_1400;

							BgL_arg3479z00_1399 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1393))->BgL_procz00);
							BgL_arg3480z00_1400 = CNST_TABLE_REF(((long) 1));
							{	/* Ast/substitute.scm 194 */
								BgL_nodez00_bglt BgL_res3588z00_2062;

								{	/* Ast/substitute.scm 194 */
									obj_t BgL_method3281z00_2037;

									{	/* Ast/substitute.scm 194 */
										BgL_objectz00_bglt BgL_objz00_2038;

										BgL_objz00_2038 =
											(BgL_objectz00_bglt) (BgL_arg3479z00_1399);
										{	/* Ast/substitute.scm 194 */
											long BgL_objzd2classzd2numz00_2039;

											BgL_objzd2classzd2numz00_2039 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2038);
											{	/* Ast/substitute.scm 194 */
												obj_t BgL_arg2643z00_2040;

												BgL_arg2643z00_2040 =
													PROCEDURE_REF
													(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
													(int) (((long) 1)));
												{	/* Ast/substitute.scm 194 */
													obj_t BgL_arrayz00_2042;

													int BgL_offsetz00_2043;

													BgL_arrayz00_2042 = BgL_arg2643z00_2040;
													BgL_offsetz00_2043 =
														(int) (BgL_objzd2classzd2numz00_2039);
													{	/* Ast/substitute.scm 194 */
														long BgL_offsetz00_2044;

														BgL_offsetz00_2044 =
															((long) (BgL_offsetz00_2043) - OBJECT_TYPE);
														{	/* Ast/substitute.scm 194 */
															long BgL_modz00_2045;

															{	/* Ast/substitute.scm 194 */
																int BgL_arg2645z00_2046;

																BgL_arg2645z00_2046 = (int) (((long) 16));
																{	/* Ast/substitute.scm 194 */
																	long BgL_auxz00_3254;

																	BgL_auxz00_3254 =
																		(long) (BgL_arg2645z00_2046);
																	BgL_modz00_2045 =
																		(BgL_offsetz00_2044 / BgL_auxz00_3254);
															}}
															{	/* Ast/substitute.scm 194 */
																long BgL_restz00_2047;

																{	/* Ast/substitute.scm 194 */
																	int BgL_arg2644z00_2048;

																	BgL_arg2644z00_2048 = (int) (((long) 16));
																	{	/* Ast/substitute.scm 194 */
																		long BgL_auxz00_3258;

																		BgL_auxz00_3258 =
																			(long) (BgL_arg2644z00_2048);
																		BgL_restz00_2047 =
																			(BgL_offsetz00_2044 % BgL_auxz00_3258);
																}}
																{	/* Ast/substitute.scm 194 */

																	BgL_method3281z00_2037 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2042,
																			(int) (BgL_modz00_2045)),
																		(int) (BgL_restz00_2047));
									}}}}}}}}
									BgL_res3588z00_2062 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_2037)
										(BgL_method3281z00_2037, (obj_t) (BgL_arg3479z00_1399),
											BgL_arg3480z00_1400, BEOA));
								}
								BgL_arg3478z00_1398 = BgL_res3588z00_2062;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1393))->BgL_procz00) =
							((BgL_nodez00_bglt) BgL_arg3478z00_1398), BUNSPEC);
					}
					{	/* Ast/substitute.scm 195 */
						BgL_nodez00_bglt BgL_arg3482z00_1401;

						{	/* Ast/substitute.scm 195 */
							BgL_nodez00_bglt BgL_arg3483z00_1402;

							obj_t BgL_arg3484z00_1403;

							BgL_arg3483z00_1402 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1393))->BgL_msgz00);
							BgL_arg3484z00_1403 = CNST_TABLE_REF(((long) 1));
							{	/* Ast/substitute.scm 195 */
								BgL_nodez00_bglt BgL_res3591z00_2093;

								{	/* Ast/substitute.scm 195 */
									obj_t BgL_method3281z00_2068;

									{	/* Ast/substitute.scm 195 */
										BgL_objectz00_bglt BgL_objz00_2069;

										BgL_objz00_2069 =
											(BgL_objectz00_bglt) (BgL_arg3483z00_1402);
										{	/* Ast/substitute.scm 195 */
											long BgL_objzd2classzd2numz00_2070;

											BgL_objzd2classzd2numz00_2070 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2069);
											{	/* Ast/substitute.scm 195 */
												obj_t BgL_arg2643z00_2071;

												BgL_arg2643z00_2071 =
													PROCEDURE_REF
													(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
													(int) (((long) 1)));
												{	/* Ast/substitute.scm 195 */
													obj_t BgL_arrayz00_2073;

													int BgL_offsetz00_2074;

													BgL_arrayz00_2073 = BgL_arg2643z00_2071;
													BgL_offsetz00_2074 =
														(int) (BgL_objzd2classzd2numz00_2070);
													{	/* Ast/substitute.scm 195 */
														long BgL_offsetz00_2075;

														BgL_offsetz00_2075 =
															((long) (BgL_offsetz00_2074) - OBJECT_TYPE);
														{	/* Ast/substitute.scm 195 */
															long BgL_modz00_2076;

															{	/* Ast/substitute.scm 195 */
																int BgL_arg2645z00_2077;

																BgL_arg2645z00_2077 = (int) (((long) 16));
																{	/* Ast/substitute.scm 195 */
																	long BgL_auxz00_3280;

																	BgL_auxz00_3280 =
																		(long) (BgL_arg2645z00_2077);
																	BgL_modz00_2076 =
																		(BgL_offsetz00_2075 / BgL_auxz00_3280);
															}}
															{	/* Ast/substitute.scm 195 */
																long BgL_restz00_2078;

																{	/* Ast/substitute.scm 195 */
																	int BgL_arg2644z00_2079;

																	BgL_arg2644z00_2079 = (int) (((long) 16));
																	{	/* Ast/substitute.scm 195 */
																		long BgL_auxz00_3284;

																		BgL_auxz00_3284 =
																			(long) (BgL_arg2644z00_2079);
																		BgL_restz00_2078 =
																			(BgL_offsetz00_2075 % BgL_auxz00_3284);
																}}
																{	/* Ast/substitute.scm 195 */

																	BgL_method3281z00_2068 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2073,
																			(int) (BgL_modz00_2076)),
																		(int) (BgL_restz00_2078));
									}}}}}}}}
									BgL_res3591z00_2093 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_2068)
										(BgL_method3281z00_2068, (obj_t) (BgL_arg3483z00_1402),
											BgL_arg3484z00_1403, BEOA));
								}
								BgL_arg3482z00_1401 = BgL_res3591z00_2093;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1393))->BgL_msgz00) =
							((BgL_nodez00_bglt) BgL_arg3482z00_1401), BUNSPEC);
					}
					{	/* Ast/substitute.scm 196 */
						BgL_nodez00_bglt BgL_arg3485z00_1404;

						{	/* Ast/substitute.scm 196 */
							BgL_nodez00_bglt BgL_arg3486z00_1405;

							obj_t BgL_arg3487z00_1406;

							BgL_arg3486z00_1405 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1393))->BgL_objz00);
							BgL_arg3487z00_1406 = CNST_TABLE_REF(((long) 1));
							{	/* Ast/substitute.scm 196 */
								BgL_nodez00_bglt BgL_res3594z00_2124;

								{	/* Ast/substitute.scm 196 */
									obj_t BgL_method3281z00_2099;

									{	/* Ast/substitute.scm 196 */
										BgL_objectz00_bglt BgL_objz00_2100;

										BgL_objz00_2100 =
											(BgL_objectz00_bglt) (BgL_arg3486z00_1405);
										{	/* Ast/substitute.scm 196 */
											long BgL_objzd2classzd2numz00_2101;

											BgL_objzd2classzd2numz00_2101 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2100);
											{	/* Ast/substitute.scm 196 */
												obj_t BgL_arg2643z00_2102;

												BgL_arg2643z00_2102 =
													PROCEDURE_REF
													(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
													(int) (((long) 1)));
												{	/* Ast/substitute.scm 196 */
													obj_t BgL_arrayz00_2104;

													int BgL_offsetz00_2105;

													BgL_arrayz00_2104 = BgL_arg2643z00_2102;
													BgL_offsetz00_2105 =
														(int) (BgL_objzd2classzd2numz00_2101);
													{	/* Ast/substitute.scm 196 */
														long BgL_offsetz00_2106;

														BgL_offsetz00_2106 =
															((long) (BgL_offsetz00_2105) - OBJECT_TYPE);
														{	/* Ast/substitute.scm 196 */
															long BgL_modz00_2107;

															{	/* Ast/substitute.scm 196 */
																int BgL_arg2645z00_2108;

																BgL_arg2645z00_2108 = (int) (((long) 16));
																{	/* Ast/substitute.scm 196 */
																	long BgL_auxz00_3306;

																	BgL_auxz00_3306 =
																		(long) (BgL_arg2645z00_2108);
																	BgL_modz00_2107 =
																		(BgL_offsetz00_2106 / BgL_auxz00_3306);
															}}
															{	/* Ast/substitute.scm 196 */
																long BgL_restz00_2109;

																{	/* Ast/substitute.scm 196 */
																	int BgL_arg2644z00_2110;

																	BgL_arg2644z00_2110 = (int) (((long) 16));
																	{	/* Ast/substitute.scm 196 */
																		long BgL_auxz00_3310;

																		BgL_auxz00_3310 =
																			(long) (BgL_arg2644z00_2110);
																		BgL_restz00_2109 =
																			(BgL_offsetz00_2106 % BgL_auxz00_3310);
																}}
																{	/* Ast/substitute.scm 196 */

																	BgL_method3281z00_2099 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2104,
																			(int) (BgL_modz00_2107)),
																		(int) (BgL_restz00_2109));
									}}}}}}}}
									BgL_res3594z00_2124 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_2099)
										(BgL_method3281z00_2099, (obj_t) (BgL_arg3486z00_1405),
											BgL_arg3487z00_1406, BEOA));
								}
								BgL_arg3485z00_1404 = BgL_res3594z00_2124;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1393))->BgL_objz00) =
							((BgL_nodez00_bglt) BgL_arg3485z00_1404), BUNSPEC);
					}
					BgL_auxz00_3243 = BgL_nodez00_1393;
					return (obj_t) (BgL_auxz00_3243);
				}
			}
		}
	}



/* do-substitute!-condi3303 */
	obj_t BGl_dozd2substitutez12zd2condi3303z12zzast_substitutez00(obj_t
		BgL_envz00_2609, obj_t BgL_nodez00_2610, obj_t BgL_sitez00_2611)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 182 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1379;

				obj_t BgL_sitez00_1380;

				{	/* Ast/substitute.scm 183 */
					BgL_conditionalz00_bglt BgL_auxz00_3324;

					BgL_nodez00_1379 = (BgL_conditionalz00_bglt) (BgL_nodez00_2610);
					BgL_sitez00_1380 = BgL_sitez00_2611;
					{	/* Ast/substitute.scm 184 */
						BgL_nodez00_bglt BgL_arg3470z00_1384;

						{	/* Ast/substitute.scm 184 */
							BgL_nodez00_bglt BgL_arg3471z00_1385;

							obj_t BgL_arg3472z00_1386;

							BgL_arg3471z00_1385 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1379))->
								BgL_testz00);
							BgL_arg3472z00_1386 = CNST_TABLE_REF(((long) 1));
							{	/* Ast/substitute.scm 184 */
								BgL_nodez00_bglt BgL_res3579z00_1969;

								{	/* Ast/substitute.scm 184 */
									obj_t BgL_method3281z00_1944;

									{	/* Ast/substitute.scm 184 */
										BgL_objectz00_bglt BgL_objz00_1945;

										BgL_objz00_1945 =
											(BgL_objectz00_bglt) (BgL_arg3471z00_1385);
										{	/* Ast/substitute.scm 184 */
											long BgL_objzd2classzd2numz00_1946;

											BgL_objzd2classzd2numz00_1946 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1945);
											{	/* Ast/substitute.scm 184 */
												obj_t BgL_arg2643z00_1947;

												BgL_arg2643z00_1947 =
													PROCEDURE_REF
													(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
													(int) (((long) 1)));
												{	/* Ast/substitute.scm 184 */
													obj_t BgL_arrayz00_1949;

													int BgL_offsetz00_1950;

													BgL_arrayz00_1949 = BgL_arg2643z00_1947;
													BgL_offsetz00_1950 =
														(int) (BgL_objzd2classzd2numz00_1946);
													{	/* Ast/substitute.scm 184 */
														long BgL_offsetz00_1951;

														BgL_offsetz00_1951 =
															((long) (BgL_offsetz00_1950) - OBJECT_TYPE);
														{	/* Ast/substitute.scm 184 */
															long BgL_modz00_1952;

															{	/* Ast/substitute.scm 184 */
																int BgL_arg2645z00_1953;

																BgL_arg2645z00_1953 = (int) (((long) 16));
																{	/* Ast/substitute.scm 184 */
																	long BgL_auxz00_3335;

																	BgL_auxz00_3335 =
																		(long) (BgL_arg2645z00_1953);
																	BgL_modz00_1952 =
																		(BgL_offsetz00_1951 / BgL_auxz00_3335);
															}}
															{	/* Ast/substitute.scm 184 */
																long BgL_restz00_1954;

																{	/* Ast/substitute.scm 184 */
																	int BgL_arg2644z00_1955;

																	BgL_arg2644z00_1955 = (int) (((long) 16));
																	{	/* Ast/substitute.scm 184 */
																		long BgL_auxz00_3339;

																		BgL_auxz00_3339 =
																			(long) (BgL_arg2644z00_1955);
																		BgL_restz00_1954 =
																			(BgL_offsetz00_1951 % BgL_auxz00_3339);
																}}
																{	/* Ast/substitute.scm 184 */

																	BgL_method3281z00_1944 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1949,
																			(int) (BgL_modz00_1952)),
																		(int) (BgL_restz00_1954));
									}}}}}}}}
									BgL_res3579z00_1969 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_1944)
										(BgL_method3281z00_1944, (obj_t) (BgL_arg3471z00_1385),
											BgL_arg3472z00_1386, BEOA));
								}
								BgL_arg3470z00_1384 = BgL_res3579z00_1969;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1379))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3470z00_1384), BUNSPEC);
					}
					{	/* Ast/substitute.scm 185 */
						BgL_nodez00_bglt BgL_arg3473z00_1387;

						{	/* Ast/substitute.scm 185 */
							BgL_nodez00_bglt BgL_arg3474z00_1388;

							BgL_arg3474z00_1388 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1379))->
								BgL_truez00);
							{	/* Ast/substitute.scm 185 */
								BgL_nodez00_bglt BgL_res3582z00_2000;

								{	/* Ast/substitute.scm 185 */
									obj_t BgL_method3281z00_1975;

									{	/* Ast/substitute.scm 185 */
										BgL_objectz00_bglt BgL_objz00_1976;

										BgL_objz00_1976 =
											(BgL_objectz00_bglt) (BgL_arg3474z00_1388);
										{	/* Ast/substitute.scm 185 */
											long BgL_objzd2classzd2numz00_1977;

											BgL_objzd2classzd2numz00_1977 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1976);
											{	/* Ast/substitute.scm 185 */
												obj_t BgL_arg2643z00_1978;

												BgL_arg2643z00_1978 =
													PROCEDURE_REF
													(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
													(int) (((long) 1)));
												{	/* Ast/substitute.scm 185 */
													obj_t BgL_arrayz00_1980;

													int BgL_offsetz00_1981;

													BgL_arrayz00_1980 = BgL_arg2643z00_1978;
													BgL_offsetz00_1981 =
														(int) (BgL_objzd2classzd2numz00_1977);
													{	/* Ast/substitute.scm 185 */
														long BgL_offsetz00_1982;

														BgL_offsetz00_1982 =
															((long) (BgL_offsetz00_1981) - OBJECT_TYPE);
														{	/* Ast/substitute.scm 185 */
															long BgL_modz00_1983;

															{	/* Ast/substitute.scm 185 */
																int BgL_arg2645z00_1984;

																BgL_arg2645z00_1984 = (int) (((long) 16));
																{	/* Ast/substitute.scm 185 */
																	long BgL_auxz00_3360;

																	BgL_auxz00_3360 =
																		(long) (BgL_arg2645z00_1984);
																	BgL_modz00_1983 =
																		(BgL_offsetz00_1982 / BgL_auxz00_3360);
															}}
															{	/* Ast/substitute.scm 185 */
																long BgL_restz00_1985;

																{	/* Ast/substitute.scm 185 */
																	int BgL_arg2644z00_1986;

																	BgL_arg2644z00_1986 = (int) (((long) 16));
																	{	/* Ast/substitute.scm 185 */
																		long BgL_auxz00_3364;

																		BgL_auxz00_3364 =
																			(long) (BgL_arg2644z00_1986);
																		BgL_restz00_1985 =
																			(BgL_offsetz00_1982 % BgL_auxz00_3364);
																}}
																{	/* Ast/substitute.scm 185 */

																	BgL_method3281z00_1975 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1980,
																			(int) (BgL_modz00_1983)),
																		(int) (BgL_restz00_1985));
									}}}}}}}}
									BgL_res3582z00_2000 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_1975)
										(BgL_method3281z00_1975, (obj_t) (BgL_arg3474z00_1388),
											BgL_sitez00_1380, BEOA));
								}
								BgL_arg3473z00_1387 = BgL_res3582z00_2000;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1379))->BgL_truez00) =
							((BgL_nodez00_bglt) BgL_arg3473z00_1387), BUNSPEC);
					}
					{	/* Ast/substitute.scm 186 */
						BgL_nodez00_bglt BgL_arg3475z00_1389;

						{	/* Ast/substitute.scm 186 */
							BgL_nodez00_bglt BgL_arg3476z00_1390;

							BgL_arg3476z00_1390 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1379))->
								BgL_falsez00);
							{	/* Ast/substitute.scm 186 */
								BgL_nodez00_bglt BgL_res3585z00_2031;

								{	/* Ast/substitute.scm 186 */
									obj_t BgL_method3281z00_2006;

									{	/* Ast/substitute.scm 186 */
										BgL_objectz00_bglt BgL_objz00_2007;

										BgL_objz00_2007 =
											(BgL_objectz00_bglt) (BgL_arg3476z00_1390);
										{	/* Ast/substitute.scm 186 */
											long BgL_objzd2classzd2numz00_2008;

											BgL_objzd2classzd2numz00_2008 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2007);
											{	/* Ast/substitute.scm 186 */
												obj_t BgL_arg2643z00_2009;

												BgL_arg2643z00_2009 =
													PROCEDURE_REF
													(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
													(int) (((long) 1)));
												{	/* Ast/substitute.scm 186 */
													obj_t BgL_arrayz00_2011;

													int BgL_offsetz00_2012;

													BgL_arrayz00_2011 = BgL_arg2643z00_2009;
													BgL_offsetz00_2012 =
														(int) (BgL_objzd2classzd2numz00_2008);
													{	/* Ast/substitute.scm 186 */
														long BgL_offsetz00_2013;

														BgL_offsetz00_2013 =
															((long) (BgL_offsetz00_2012) - OBJECT_TYPE);
														{	/* Ast/substitute.scm 186 */
															long BgL_modz00_2014;

															{	/* Ast/substitute.scm 186 */
																int BgL_arg2645z00_2015;

																BgL_arg2645z00_2015 = (int) (((long) 16));
																{	/* Ast/substitute.scm 186 */
																	long BgL_auxz00_3385;

																	BgL_auxz00_3385 =
																		(long) (BgL_arg2645z00_2015);
																	BgL_modz00_2014 =
																		(BgL_offsetz00_2013 / BgL_auxz00_3385);
															}}
															{	/* Ast/substitute.scm 186 */
																long BgL_restz00_2016;

																{	/* Ast/substitute.scm 186 */
																	int BgL_arg2644z00_2017;

																	BgL_arg2644z00_2017 = (int) (((long) 16));
																	{	/* Ast/substitute.scm 186 */
																		long BgL_auxz00_3389;

																		BgL_auxz00_3389 =
																			(long) (BgL_arg2644z00_2017);
																		BgL_restz00_2016 =
																			(BgL_offsetz00_2013 % BgL_auxz00_3389);
																}}
																{	/* Ast/substitute.scm 186 */

																	BgL_method3281z00_2006 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2011,
																			(int) (BgL_modz00_2014)),
																		(int) (BgL_restz00_2016));
									}}}}}}}}
									BgL_res3585z00_2031 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_2006)
										(BgL_method3281z00_2006, (obj_t) (BgL_arg3476z00_1390),
											BgL_sitez00_1380, BEOA));
								}
								BgL_arg3475z00_1389 = BgL_res3585z00_2031;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1379))->
								BgL_falsez00) =
							((BgL_nodez00_bglt) BgL_arg3475z00_1389), BUNSPEC);
					}
					BgL_auxz00_3324 = BgL_nodez00_1379;
					return (obj_t) (BgL_auxz00_3324);
				}
			}
		}
	}



/* do-substitute!-setq3301 */
	obj_t BGl_dozd2substitutez12zd2setq3301z12zzast_substitutez00(obj_t
		BgL_envz00_2612, obj_t BgL_nodez00_2613, obj_t BgL_sitez00_2614)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 173 */
			{
				BgL_setqz00_bglt BgL_nodez00_1367;

				obj_t BgL_sitez00_1368;

				{	/* Ast/substitute.scm 174 */
					BgL_setqz00_bglt BgL_auxz00_3403;

					BgL_nodez00_1367 = (BgL_setqz00_bglt) (BgL_nodez00_2613);
					BgL_sitez00_1368 = BgL_sitez00_2614;
					{	/* Ast/substitute.scm 175 */
						BgL_nodez00_bglt BgL_arg3464z00_1372;

						{	/* Ast/substitute.scm 175 */
							BgL_varz00_bglt BgL_arg3465z00_1373;

							obj_t BgL_arg3466z00_1374;

							BgL_arg3465z00_1373 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1367))->BgL_varz00);
							BgL_arg3466z00_1374 = CNST_TABLE_REF(((long) 4));
							{	/* Ast/substitute.scm 175 */
								BgL_nodez00_bglt BgL_res3573z00_1907;

								{	/* Ast/substitute.scm 175 */
									BgL_nodez00_bglt BgL_nodez00_1880;

									BgL_nodez00_1880 = (BgL_nodez00_bglt) (BgL_arg3465z00_1373);
									{	/* Ast/substitute.scm 175 */
										obj_t BgL_method3281z00_1882;

										{	/* Ast/substitute.scm 175 */
											BgL_objectz00_bglt BgL_objz00_1883;

											BgL_objz00_1883 = (BgL_objectz00_bglt) (BgL_nodez00_1880);
											{	/* Ast/substitute.scm 175 */
												long BgL_objzd2classzd2numz00_1884;

												BgL_objzd2classzd2numz00_1884 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1883);
												{	/* Ast/substitute.scm 175 */
													obj_t BgL_arg2643z00_1885;

													BgL_arg2643z00_1885 =
														PROCEDURE_REF
														(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
														(int) (((long) 1)));
													{	/* Ast/substitute.scm 175 */
														obj_t BgL_arrayz00_1887;

														int BgL_offsetz00_1888;

														BgL_arrayz00_1887 = BgL_arg2643z00_1885;
														BgL_offsetz00_1888 =
															(int) (BgL_objzd2classzd2numz00_1884);
														{	/* Ast/substitute.scm 175 */
															long BgL_offsetz00_1889;

															BgL_offsetz00_1889 =
																((long) (BgL_offsetz00_1888) - OBJECT_TYPE);
															{	/* Ast/substitute.scm 175 */
																long BgL_modz00_1890;

																{	/* Ast/substitute.scm 175 */
																	int BgL_arg2645z00_1891;

																	BgL_arg2645z00_1891 = (int) (((long) 16));
																	{	/* Ast/substitute.scm 175 */
																		long BgL_auxz00_3415;

																		BgL_auxz00_3415 =
																			(long) (BgL_arg2645z00_1891);
																		BgL_modz00_1890 =
																			(BgL_offsetz00_1889 / BgL_auxz00_3415);
																}}
																{	/* Ast/substitute.scm 175 */
																	long BgL_restz00_1892;

																	{	/* Ast/substitute.scm 175 */
																		int BgL_arg2644z00_1893;

																		BgL_arg2644z00_1893 = (int) (((long) 16));
																		{	/* Ast/substitute.scm 175 */
																			long BgL_auxz00_3419;

																			BgL_auxz00_3419 =
																				(long) (BgL_arg2644z00_1893);
																			BgL_restz00_1892 =
																				(BgL_offsetz00_1889 % BgL_auxz00_3419);
																	}}
																	{	/* Ast/substitute.scm 175 */

																		BgL_method3281z00_1882 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1887,
																				(int) (BgL_modz00_1890)),
																			(int) (BgL_restz00_1892));
										}}}}}}}}
										BgL_res3573z00_1907 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3281z00_1882) (BgL_method3281z00_1882,
												(obj_t) (BgL_nodez00_1880), BgL_arg3466z00_1374, BEOA));
								}}
								BgL_arg3464z00_1372 = BgL_res3573z00_1907;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3430;

							BgL_auxz00_3430 = (BgL_varz00_bglt) (BgL_arg3464z00_1372);
							((((BgL_setqz00_bglt) CREF(BgL_nodez00_1367))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_3430), BUNSPEC);
					}}
					{	/* Ast/substitute.scm 176 */
						BgL_nodez00_bglt BgL_arg3467z00_1375;

						{	/* Ast/substitute.scm 176 */
							BgL_nodez00_bglt BgL_arg3468z00_1376;

							BgL_arg3468z00_1376 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1367))->BgL_valuez00);
							{	/* Ast/substitute.scm 176 */
								BgL_nodez00_bglt BgL_res3576z00_1938;

								{	/* Ast/substitute.scm 176 */
									obj_t BgL_method3281z00_1913;

									{	/* Ast/substitute.scm 176 */
										BgL_objectz00_bglt BgL_objz00_1914;

										BgL_objz00_1914 =
											(BgL_objectz00_bglt) (BgL_arg3468z00_1376);
										{	/* Ast/substitute.scm 176 */
											long BgL_objzd2classzd2numz00_1915;

											BgL_objzd2classzd2numz00_1915 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1914);
											{	/* Ast/substitute.scm 176 */
												obj_t BgL_arg2643z00_1916;

												BgL_arg2643z00_1916 =
													PROCEDURE_REF
													(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
													(int) (((long) 1)));
												{	/* Ast/substitute.scm 176 */
													obj_t BgL_arrayz00_1918;

													int BgL_offsetz00_1919;

													BgL_arrayz00_1918 = BgL_arg2643z00_1916;
													BgL_offsetz00_1919 =
														(int) (BgL_objzd2classzd2numz00_1915);
													{	/* Ast/substitute.scm 176 */
														long BgL_offsetz00_1920;

														BgL_offsetz00_1920 =
															((long) (BgL_offsetz00_1919) - OBJECT_TYPE);
														{	/* Ast/substitute.scm 176 */
															long BgL_modz00_1921;

															{	/* Ast/substitute.scm 176 */
																int BgL_arg2645z00_1922;

																BgL_arg2645z00_1922 = (int) (((long) 16));
																{	/* Ast/substitute.scm 176 */
																	long BgL_auxz00_3442;

																	BgL_auxz00_3442 =
																		(long) (BgL_arg2645z00_1922);
																	BgL_modz00_1921 =
																		(BgL_offsetz00_1920 / BgL_auxz00_3442);
															}}
															{	/* Ast/substitute.scm 176 */
																long BgL_restz00_1923;

																{	/* Ast/substitute.scm 176 */
																	int BgL_arg2644z00_1924;

																	BgL_arg2644z00_1924 = (int) (((long) 16));
																	{	/* Ast/substitute.scm 176 */
																		long BgL_auxz00_3446;

																		BgL_auxz00_3446 =
																			(long) (BgL_arg2644z00_1924);
																		BgL_restz00_1923 =
																			(BgL_offsetz00_1920 % BgL_auxz00_3446);
																}}
																{	/* Ast/substitute.scm 176 */

																	BgL_method3281z00_1913 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1918,
																			(int) (BgL_modz00_1921)),
																		(int) (BgL_restz00_1923));
									}}}}}}}}
									BgL_res3576z00_1938 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_1913)
										(BgL_method3281z00_1913, (obj_t) (BgL_arg3468z00_1376),
											BgL_sitez00_1368, BEOA));
								}
								BgL_arg3467z00_1375 = BgL_res3576z00_1938;
						}}
						((((BgL_setqz00_bglt) CREF(BgL_nodez00_1367))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3467z00_1375), BUNSPEC);
					}
					BgL_auxz00_3403 = BgL_nodez00_1367;
					return (obj_t) (BgL_auxz00_3403);
				}
			}
		}
	}



/* do-substitute!-cast3299 */
	obj_t BGl_dozd2substitutez12zd2cast3299z12zzast_substitutez00(obj_t
		BgL_envz00_2615, obj_t BgL_nodez00_2616, obj_t BgL_sitez00_2617)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 166 */
			{
				BgL_castz00_bglt BgL_nodez00_1360;

				obj_t BgL_sitez00_1361;

				{	/* Ast/substitute.scm 167 */
					BgL_castz00_bglt BgL_auxz00_3460;

					BgL_nodez00_1360 = (BgL_castz00_bglt) (BgL_nodez00_2616);
					BgL_sitez00_1361 = BgL_sitez00_2617;
					{	/* Ast/substitute.scm 167 */
						BgL_nodez00_bglt BgL_arg3462z00_1849;

						BgL_arg3462z00_1849 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1360))->BgL_argz00);
						{	/* Ast/substitute.scm 167 */
							BgL_nodez00_bglt BgL_res3570z00_1878;

							{	/* Ast/substitute.scm 167 */
								obj_t BgL_method3281z00_1853;

								{	/* Ast/substitute.scm 167 */
									BgL_objectz00_bglt BgL_objz00_1854;

									BgL_objz00_1854 = (BgL_objectz00_bglt) (BgL_arg3462z00_1849);
									{	/* Ast/substitute.scm 167 */
										long BgL_objzd2classzd2numz00_1855;

										BgL_objzd2classzd2numz00_1855 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1854);
										{	/* Ast/substitute.scm 167 */
											obj_t BgL_arg2643z00_1856;

											BgL_arg2643z00_1856 =
												PROCEDURE_REF
												(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
												(int) (((long) 1)));
											{	/* Ast/substitute.scm 167 */
												obj_t BgL_arrayz00_1858;

												int BgL_offsetz00_1859;

												BgL_arrayz00_1858 = BgL_arg2643z00_1856;
												BgL_offsetz00_1859 =
													(int) (BgL_objzd2classzd2numz00_1855);
												{	/* Ast/substitute.scm 167 */
													long BgL_offsetz00_1860;

													BgL_offsetz00_1860 =
														((long) (BgL_offsetz00_1859) - OBJECT_TYPE);
													{	/* Ast/substitute.scm 167 */
														long BgL_modz00_1861;

														{	/* Ast/substitute.scm 167 */
															int BgL_arg2645z00_1862;

															BgL_arg2645z00_1862 = (int) (((long) 16));
															{	/* Ast/substitute.scm 167 */
																long BgL_auxz00_3470;

																BgL_auxz00_3470 = (long) (BgL_arg2645z00_1862);
																BgL_modz00_1861 =
																	(BgL_offsetz00_1860 / BgL_auxz00_3470);
														}}
														{	/* Ast/substitute.scm 167 */
															long BgL_restz00_1863;

															{	/* Ast/substitute.scm 167 */
																int BgL_arg2644z00_1864;

																BgL_arg2644z00_1864 = (int) (((long) 16));
																{	/* Ast/substitute.scm 167 */
																	long BgL_auxz00_3474;

																	BgL_auxz00_3474 =
																		(long) (BgL_arg2644z00_1864);
																	BgL_restz00_1863 =
																		(BgL_offsetz00_1860 % BgL_auxz00_3474);
															}}
															{	/* Ast/substitute.scm 167 */

																BgL_method3281z00_1853 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1858,
																		(int) (BgL_modz00_1861)),
																	(int) (BgL_restz00_1863));
								}}}}}}}}
								BgL_res3570z00_1878 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_1853)
									(BgL_method3281z00_1853, (obj_t) (BgL_arg3462z00_1849),
										BgL_sitez00_1361, BEOA));
							} BgL_res3570z00_1878;
					}}
					BgL_auxz00_3460 = BgL_nodez00_1360;
					return (obj_t) (BgL_auxz00_3460);
				}
			}
		}
	}



/* do-substitute!-exter3297 */
	obj_t BGl_dozd2substitutez12zd2exter3297z12zzast_substitutez00(obj_t
		BgL_envz00_2618, obj_t BgL_nodez00_2619, obj_t BgL_sitez00_2620)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 159 */
			{
				BgL_externz00_bglt BgL_nodez00_1353;

				obj_t BgL_sitez00_1354;

				{	/* Ast/substitute.scm 160 */
					BgL_externz00_bglt BgL_auxz00_3487;

					BgL_nodez00_1353 = (BgL_externz00_bglt) (BgL_nodez00_2619);
					BgL_sitez00_1354 = BgL_sitez00_2620;
					{	/* Ast/substitute.scm 160 */
						obj_t BgL_arg3460z00_1847;

						BgL_arg3460z00_1847 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1353))->BgL_exprza2za2);
						BGl_dozd2substituteza2z12z62zzast_substitutez00(BgL_arg3460z00_1847,
							BgL_sitez00_1354);
					}
					BgL_auxz00_3487 = BgL_nodez00_1353;
					return (obj_t) (BgL_auxz00_3487);
				}
			}
		}
	}



/* do-substitute!-funca3295 */
	obj_t BGl_dozd2substitutez12zd2funca3295z12zzast_substitutez00(obj_t
		BgL_envz00_2621, obj_t BgL_nodez00_2622, obj_t BgL_sitez00_2623)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 133 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1311;

				obj_t BgL_sitez00_1312;

				BgL_nodez00_1311 = (BgL_funcallz00_bglt) (BgL_nodez00_2622);
				BgL_sitez00_1312 = BgL_sitez00_2623;
				{	/* Ast/substitute.scm 135 */
					BgL_nodez00_bglt BgL_nfunz00_1316;

					obj_t BgL_nargsz00_1317;

					{	/* Ast/substitute.scm 135 */
						BgL_nodez00_bglt BgL_arg3451z00_1335;

						obj_t BgL_arg3452z00_1336;

						BgL_arg3451z00_1335 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1311))->BgL_funz00);
						BgL_arg3452z00_1336 = CNST_TABLE_REF(((long) 1));
						{	/* Ast/substitute.scm 135 */
							BgL_nodez00_bglt BgL_res3564z00_1792;

							{	/* Ast/substitute.scm 135 */
								obj_t BgL_method3281z00_1767;

								{	/* Ast/substitute.scm 135 */
									BgL_objectz00_bglt BgL_objz00_1768;

									BgL_objz00_1768 = (BgL_objectz00_bglt) (BgL_arg3451z00_1335);
									{	/* Ast/substitute.scm 135 */
										long BgL_objzd2classzd2numz00_1769;

										BgL_objzd2classzd2numz00_1769 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1768);
										{	/* Ast/substitute.scm 135 */
											obj_t BgL_arg2643z00_1770;

											BgL_arg2643z00_1770 =
												PROCEDURE_REF
												(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
												(int) (((long) 1)));
											{	/* Ast/substitute.scm 135 */
												obj_t BgL_arrayz00_1772;

												int BgL_offsetz00_1773;

												BgL_arrayz00_1772 = BgL_arg2643z00_1770;
												BgL_offsetz00_1773 =
													(int) (BgL_objzd2classzd2numz00_1769);
												{	/* Ast/substitute.scm 135 */
													long BgL_offsetz00_1774;

													BgL_offsetz00_1774 =
														((long) (BgL_offsetz00_1773) - OBJECT_TYPE);
													{	/* Ast/substitute.scm 135 */
														long BgL_modz00_1775;

														{	/* Ast/substitute.scm 135 */
															int BgL_arg2645z00_1776;

															BgL_arg2645z00_1776 = (int) (((long) 16));
															{	/* Ast/substitute.scm 135 */
																long BgL_auxz00_3502;

																BgL_auxz00_3502 = (long) (BgL_arg2645z00_1776);
																BgL_modz00_1775 =
																	(BgL_offsetz00_1774 / BgL_auxz00_3502);
														}}
														{	/* Ast/substitute.scm 135 */
															long BgL_restz00_1777;

															{	/* Ast/substitute.scm 135 */
																int BgL_arg2644z00_1778;

																BgL_arg2644z00_1778 = (int) (((long) 16));
																{	/* Ast/substitute.scm 135 */
																	long BgL_auxz00_3506;

																	BgL_auxz00_3506 =
																		(long) (BgL_arg2644z00_1778);
																	BgL_restz00_1777 =
																		(BgL_offsetz00_1774 % BgL_auxz00_3506);
															}}
															{	/* Ast/substitute.scm 135 */

																BgL_method3281z00_1767 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1772,
																		(int) (BgL_modz00_1775)),
																	(int) (BgL_restz00_1777));
								}}}}}}}}
								BgL_res3564z00_1792 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_1767)
									(BgL_method3281z00_1767, (obj_t) (BgL_arg3451z00_1335),
										BgL_arg3452z00_1336, BEOA));
							}
							BgL_nfunz00_1316 = BgL_res3564z00_1792;
					}}
					{	/* Ast/substitute.scm 136 */
						obj_t BgL_l3266z00_1337;

						BgL_l3266z00_1337 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1311))->BgL_argsz00);
						if (NULLP(BgL_l3266z00_1337))
							{	/* Ast/substitute.scm 136 */
								BgL_nargsz00_1317 = BNIL;
							}
						else
							{	/* Ast/substitute.scm 136 */
								obj_t BgL_head3268z00_1339;

								BgL_head3268z00_1339 = MAKE_PAIR(BNIL, BNIL);
								{
									obj_t BgL_l3266z00_1341;

									obj_t BgL_tail3269z00_1342;

									BgL_l3266z00_1341 = BgL_l3266z00_1337;
									BgL_tail3269z00_1342 = BgL_head3268z00_1339;
								BgL_zc3anonymousza33454ze3z83_1343:
									if (NULLP(BgL_l3266z00_1341))
										{	/* Ast/substitute.scm 136 */
											BgL_nargsz00_1317 = CDR(BgL_head3268z00_1339);
										}
									else
										{	/* Ast/substitute.scm 136 */
											obj_t BgL_newtail3270z00_1345;

											{	/* Ast/substitute.scm 136 */
												BgL_nodez00_bglt BgL_arg3457z00_1347;

												{	/* Ast/substitute.scm 136 */
													obj_t BgL_az00_1349;

													BgL_az00_1349 = CAR(BgL_l3266z00_1341);
													{	/* Ast/substitute.scm 136 */
														BgL_nodez00_bglt BgL_res3567z00_1827;

														{	/* Ast/substitute.scm 136 */
															BgL_nodez00_bglt BgL_nodez00_1800;

															obj_t BgL_sitez00_1801;

															BgL_nodez00_1800 =
																(BgL_nodez00_bglt) (BgL_az00_1349);
															BgL_sitez00_1801 = CNST_TABLE_REF(((long) 1));
															{	/* Ast/substitute.scm 136 */
																obj_t BgL_method3281z00_1802;

																{	/* Ast/substitute.scm 136 */
																	BgL_objectz00_bglt BgL_objz00_1803;

																	BgL_objz00_1803 =
																		(BgL_objectz00_bglt) (BgL_nodez00_1800);
																	{	/* Ast/substitute.scm 136 */
																		long BgL_objzd2classzd2numz00_1804;

																		BgL_objzd2classzd2numz00_1804 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_1803);
																		{	/* Ast/substitute.scm 136 */
																			obj_t BgL_arg2643z00_1805;

																			BgL_arg2643z00_1805 =
																				PROCEDURE_REF
																				(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
																				(int) (((long) 1)));
																			{	/* Ast/substitute.scm 136 */
																				obj_t BgL_arrayz00_1807;

																				int BgL_offsetz00_1808;

																				BgL_arrayz00_1807 = BgL_arg2643z00_1805;
																				BgL_offsetz00_1808 =
																					(int) (BgL_objzd2classzd2numz00_1804);
																				{	/* Ast/substitute.scm 136 */
																					long BgL_offsetz00_1809;

																					BgL_offsetz00_1809 =
																						(
																						(long) (BgL_offsetz00_1808) -
																						OBJECT_TYPE);
																					{	/* Ast/substitute.scm 136 */
																						long BgL_modz00_1810;

																						{	/* Ast/substitute.scm 136 */
																							int BgL_arg2645z00_1811;

																							BgL_arg2645z00_1811 =
																								(int) (((long) 16));
																							{	/* Ast/substitute.scm 136 */
																								long BgL_auxz00_3535;

																								BgL_auxz00_3535 =
																									(long) (BgL_arg2645z00_1811);
																								BgL_modz00_1810 =
																									(BgL_offsetz00_1809 /
																									BgL_auxz00_3535);
																						}}
																						{	/* Ast/substitute.scm 136 */
																							long BgL_restz00_1812;

																							{	/* Ast/substitute.scm 136 */
																								int BgL_arg2644z00_1813;

																								BgL_arg2644z00_1813 =
																									(int) (((long) 16));
																								{	/* Ast/substitute.scm 136 */
																									long BgL_auxz00_3539;

																									BgL_auxz00_3539 =
																										(long)
																										(BgL_arg2644z00_1813);
																									BgL_restz00_1812 =
																										(BgL_offsetz00_1809 %
																										BgL_auxz00_3539);
																							}}
																							{	/* Ast/substitute.scm 136 */

																								BgL_method3281z00_1802 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_1807,
																										(int) (BgL_modz00_1810)),
																									(int) (BgL_restz00_1812));
																}}}}}}}}
																BgL_res3567z00_1827 =
																	(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																	(BgL_method3281z00_1802)
																	(BgL_method3281z00_1802,
																		(obj_t) (BgL_nodez00_1800),
																		BgL_sitez00_1801, BEOA));
														}}
														BgL_arg3457z00_1347 = BgL_res3567z00_1827;
												}}
												BgL_newtail3270z00_1345 =
													MAKE_PAIR((obj_t) (BgL_arg3457z00_1347), BNIL);
											}
											SET_CDR(BgL_tail3269z00_1342, BgL_newtail3270z00_1345);
											{
												obj_t BgL_tail3269z00_3555;

												obj_t BgL_l3266z00_3553;

												BgL_l3266z00_3553 = CDR(BgL_l3266z00_1341);
												BgL_tail3269z00_3555 = BgL_newtail3270z00_1345;
												BgL_tail3269z00_1342 = BgL_tail3269z00_3555;
												BgL_l3266z00_1341 = BgL_l3266z00_3553;
												goto BgL_zc3anonymousza33454ze3z83_1343;
											}
										}
								}
							}
					}
					{	/* Ast/substitute.scm 137 */
						bool_t BgL_testz00_3556;

						{	/* Ast/substitute.scm 137 */
							bool_t BgL_testz00_3557;

							{	/* Ast/substitute.scm 137 */
								obj_t BgL_obj2190z00_1833;

								BgL_obj2190z00_1833 = (obj_t) (BgL_nfunz00_1316);
								BgL_testz00_3557 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj2190z00_1833,
									BGl_closurez00zzast_nodez00);
							}
							if (BgL_testz00_3557)
								{	/* Ast/substitute.scm 137 */
									BgL_testz00_3556 = ((bool_t) 1);
								}
							else
								{	/* Ast/substitute.scm 138 */
									bool_t BgL_testz00_3560;

									{	/* Ast/substitute.scm 138 */
										obj_t BgL_obj2170z00_1834;

										BgL_obj2170z00_1834 = (obj_t) (BgL_nfunz00_1316);
										BgL_testz00_3560 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj2170z00_1834,
											BGl_varz00zzast_nodez00);
									}
									if (BgL_testz00_3560)
										{	/* Ast/substitute.scm 139 */
											BgL_valuez00_bglt BgL_arg3449z00_1333;

											{	/* Ast/substitute.scm 139 */
												BgL_variablez00_bglt BgL_obj1611z00_1836;

												{
													BgL_varz00_bglt BgL_auxz00_3563;

													BgL_auxz00_3563 =
														(BgL_varz00_bglt) (BgL_nfunz00_1316);
													BgL_obj1611z00_1836 =
														(((BgL_varz00_bglt) CREF(BgL_auxz00_3563))->
														BgL_variablez00);
												}
												BgL_arg3449z00_1333 =
													(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1836))->
													BgL_valuez00);
											}
											{	/* Ast/substitute.scm 139 */
												obj_t BgL_obj1856z00_1837;

												BgL_obj1856z00_1837 = (obj_t) (BgL_arg3449z00_1333);
												BgL_testz00_3556 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj1856z00_1837,
													BGl_funz00zzast_varz00);
											}
										}
									else
										{	/* Ast/substitute.scm 138 */
											BgL_testz00_3556 = ((bool_t) 0);
										}
								}
						}
						if (BgL_testz00_3556)
							{	/* Ast/substitute.scm 140 */
								bool_t BgL_testz00_3569;

								{	/* Ast/substitute.scm 140 */
									BgL_variablez00_bglt BgL_arg3446z00_1329;

									obj_t BgL_arg3447z00_1330;

									{
										BgL_varz00_bglt BgL_auxz00_3570;

										BgL_auxz00_3570 = (BgL_varz00_bglt) (BgL_nfunz00_1316);
										BgL_arg3446z00_1329 =
											(((BgL_varz00_bglt) CREF(BgL_auxz00_3570))->
											BgL_variablez00);
									}
									BgL_arg3447z00_1330 = CDR(BgL_nargsz00_1317);
									BgL_testz00_3569 =
										BGl_correctzd2arityzd2appzf3zf3zzast_appz00
										(BgL_arg3446z00_1329, BgL_arg3447z00_1330);
								}
								if (BgL_testz00_3569)
									{	/* Ast/substitute.scm 142 */
										obj_t BgL_arg3437z00_1321;

										obj_t BgL_arg3438z00_1322;

										obj_t BgL_arg3439z00_1323;

										{
											BgL_nodez00_bglt BgL_auxz00_3575;

											BgL_auxz00_3575 = (BgL_nodez00_bglt) (BgL_nodez00_1311);
											BgL_arg3437z00_1321 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_3575))->
												BgL_locz00);
										}
										BgL_arg3438z00_1322 = CNST_TABLE_REF(((long) 5));
										BgL_arg3439z00_1323 = CDR(BgL_nargsz00_1317);
										return
											(obj_t) (BGl_makezd2appzd2nodez00zzast_appz00(BNIL,
												BgL_arg3437z00_1321, BgL_arg3438z00_1322,
												(BgL_varz00_bglt) (BgL_nfunz00_1316),
												BgL_arg3439z00_1323));
									}
								else
									{	/* Ast/substitute.scm 147 */
										obj_t BgL_arg3440z00_1324;

										obj_t BgL_arg3444z00_1327;

										{
											BgL_nodez00_bglt BgL_auxz00_3583;

											BgL_auxz00_3583 = (BgL_nodez00_bglt) (BgL_nodez00_1311);
											BgL_arg3440z00_1324 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_3583))->
												BgL_locz00);
										}
										BgL_arg3444z00_1327 =
											BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_1311));
										return
											BGl_userzd2errorzf2locationz20zztools_errorz00
											(BgL_arg3440z00_1324,
											BGl_string3656z00zzast_substitutez00,
											BGl_string3657z00zzast_substitutez00, BgL_arg3444z00_1327,
											BNIL);
									}
							}
						else
							{	/* Ast/substitute.scm 137 */
								((((BgL_funcallz00_bglt) CREF(BgL_nodez00_1311))->BgL_funz00) =
									((BgL_nodez00_bglt) BgL_nfunz00_1316), BUNSPEC);
								((((BgL_funcallz00_bglt) CREF(BgL_nodez00_1311))->BgL_argsz00) =
									((obj_t) BgL_nargsz00_1317), BUNSPEC);
								return (obj_t) (BgL_nodez00_1311);
							}
					}
				}
			}
		}
	}



/* do-substitute!-app-l3293 */
	obj_t BGl_dozd2substitutez12zd2appzd2l3293zc0zzast_substitutez00(obj_t
		BgL_envz00_2624, obj_t BgL_nodez00_2625, obj_t BgL_sitez00_2626)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 114 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1284;

				obj_t BgL_sitez00_1285;

				BgL_nodez00_1284 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2625);
				BgL_sitez00_1285 = BgL_sitez00_2626;
				{	/* Ast/substitute.scm 116 */
					BgL_nodez00_bglt BgL_nfunz00_1289;

					BgL_nodez00_bglt BgL_nargz00_1290;

					{	/* Ast/substitute.scm 116 */
						BgL_nodez00_bglt BgL_arg3427z00_1305;

						obj_t BgL_arg3430z00_1306;

						BgL_arg3427z00_1305 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1284))->BgL_funz00);
						BgL_arg3430z00_1306 = CNST_TABLE_REF(((long) 6));
						{	/* Ast/substitute.scm 116 */
							BgL_nodez00_bglt BgL_res3558z00_1723;

							{	/* Ast/substitute.scm 116 */
								obj_t BgL_method3281z00_1698;

								{	/* Ast/substitute.scm 116 */
									BgL_objectz00_bglt BgL_objz00_1699;

									BgL_objz00_1699 = (BgL_objectz00_bglt) (BgL_arg3427z00_1305);
									{	/* Ast/substitute.scm 116 */
										long BgL_objzd2classzd2numz00_1700;

										BgL_objzd2classzd2numz00_1700 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1699);
										{	/* Ast/substitute.scm 116 */
											obj_t BgL_arg2643z00_1701;

											BgL_arg2643z00_1701 =
												PROCEDURE_REF
												(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
												(int) (((long) 1)));
											{	/* Ast/substitute.scm 116 */
												obj_t BgL_arrayz00_1703;

												int BgL_offsetz00_1704;

												BgL_arrayz00_1703 = BgL_arg2643z00_1701;
												BgL_offsetz00_1704 =
													(int) (BgL_objzd2classzd2numz00_1700);
												{	/* Ast/substitute.scm 116 */
													long BgL_offsetz00_1705;

													BgL_offsetz00_1705 =
														((long) (BgL_offsetz00_1704) - OBJECT_TYPE);
													{	/* Ast/substitute.scm 116 */
														long BgL_modz00_1706;

														{	/* Ast/substitute.scm 116 */
															int BgL_arg2645z00_1707;

															BgL_arg2645z00_1707 = (int) (((long) 16));
															{	/* Ast/substitute.scm 116 */
																long BgL_auxz00_3603;

																BgL_auxz00_3603 = (long) (BgL_arg2645z00_1707);
																BgL_modz00_1706 =
																	(BgL_offsetz00_1705 / BgL_auxz00_3603);
														}}
														{	/* Ast/substitute.scm 116 */
															long BgL_restz00_1708;

															{	/* Ast/substitute.scm 116 */
																int BgL_arg2644z00_1709;

																BgL_arg2644z00_1709 = (int) (((long) 16));
																{	/* Ast/substitute.scm 116 */
																	long BgL_auxz00_3607;

																	BgL_auxz00_3607 =
																		(long) (BgL_arg2644z00_1709);
																	BgL_restz00_1708 =
																		(BgL_offsetz00_1705 % BgL_auxz00_3607);
															}}
															{	/* Ast/substitute.scm 116 */

																BgL_method3281z00_1698 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1703,
																		(int) (BgL_modz00_1706)),
																	(int) (BgL_restz00_1708));
								}}}}}}}}
								BgL_res3558z00_1723 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_1698)
									(BgL_method3281z00_1698, (obj_t) (BgL_arg3427z00_1305),
										BgL_arg3430z00_1306, BEOA));
							}
							BgL_nfunz00_1289 = BgL_res3558z00_1723;
					}}
					{	/* Ast/substitute.scm 117 */
						BgL_nodez00_bglt BgL_arg3431z00_1307;

						obj_t BgL_arg3432z00_1308;

						BgL_arg3431z00_1307 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1284))->BgL_argz00);
						BgL_arg3432z00_1308 = CNST_TABLE_REF(((long) 1));
						{	/* Ast/substitute.scm 117 */
							BgL_nodez00_bglt BgL_res3561z00_1752;

							{	/* Ast/substitute.scm 117 */
								obj_t BgL_method3281z00_1727;

								{	/* Ast/substitute.scm 117 */
									BgL_objectz00_bglt BgL_objz00_1728;

									BgL_objz00_1728 = (BgL_objectz00_bglt) (BgL_arg3431z00_1307);
									{	/* Ast/substitute.scm 117 */
										long BgL_objzd2classzd2numz00_1729;

										BgL_objzd2classzd2numz00_1729 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1728);
										{	/* Ast/substitute.scm 117 */
											obj_t BgL_arg2643z00_1730;

											BgL_arg2643z00_1730 =
												PROCEDURE_REF
												(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
												(int) (((long) 1)));
											{	/* Ast/substitute.scm 117 */
												obj_t BgL_arrayz00_1732;

												int BgL_offsetz00_1733;

												BgL_arrayz00_1732 = BgL_arg2643z00_1730;
												BgL_offsetz00_1733 =
													(int) (BgL_objzd2classzd2numz00_1729);
												{	/* Ast/substitute.scm 117 */
													long BgL_offsetz00_1734;

													BgL_offsetz00_1734 =
														((long) (BgL_offsetz00_1733) - OBJECT_TYPE);
													{	/* Ast/substitute.scm 117 */
														long BgL_modz00_1735;

														{	/* Ast/substitute.scm 117 */
															int BgL_arg2645z00_1736;

															BgL_arg2645z00_1736 = (int) (((long) 16));
															{	/* Ast/substitute.scm 117 */
																long BgL_auxz00_3628;

																BgL_auxz00_3628 = (long) (BgL_arg2645z00_1736);
																BgL_modz00_1735 =
																	(BgL_offsetz00_1734 / BgL_auxz00_3628);
														}}
														{	/* Ast/substitute.scm 117 */
															long BgL_restz00_1737;

															{	/* Ast/substitute.scm 117 */
																int BgL_arg2644z00_1738;

																BgL_arg2644z00_1738 = (int) (((long) 16));
																{	/* Ast/substitute.scm 117 */
																	long BgL_auxz00_3632;

																	BgL_auxz00_3632 =
																		(long) (BgL_arg2644z00_1738);
																	BgL_restz00_1737 =
																		(BgL_offsetz00_1734 % BgL_auxz00_3632);
															}}
															{	/* Ast/substitute.scm 117 */

																BgL_method3281z00_1727 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1732,
																		(int) (BgL_modz00_1735)),
																	(int) (BgL_restz00_1737));
								}}}}}}}}
								BgL_res3561z00_1752 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3281z00_1727)
									(BgL_method3281z00_1727, (obj_t) (BgL_arg3431z00_1307),
										BgL_arg3432z00_1308, BEOA));
							}
							BgL_nargz00_1290 = BgL_res3561z00_1752;
					}}
					{	/* Ast/substitute.scm 118 */
						bool_t BgL_testz00_3643;

						{	/* Ast/substitute.scm 118 */
							bool_t BgL_testz00_3644;

							{	/* Ast/substitute.scm 118 */
								obj_t BgL_obj2190z00_1753;

								BgL_obj2190z00_1753 = (obj_t) (BgL_nfunz00_1289);
								BgL_testz00_3644 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj2190z00_1753,
									BGl_closurez00zzast_nodez00);
							}
							if (BgL_testz00_3644)
								{	/* Ast/substitute.scm 119 */
									bool_t BgL_testz00_3647;

									{	/* Ast/substitute.scm 119 */
										BgL_variablez00_bglt BgL_arg3426z00_1304;

										{
											BgL_varz00_bglt BgL_auxz00_3648;

											BgL_auxz00_3648 =
												(BgL_varz00_bglt) (
												(BgL_closurez00_bglt) (BgL_nfunz00_1289));
											BgL_arg3426z00_1304 =
												(((BgL_varz00_bglt) CREF(BgL_auxz00_3648))->
												BgL_variablez00);
										}
										BgL_testz00_3647 =
											BGl_globalzd2optionalzf3z21zzast_varz00(
											(obj_t) (BgL_arg3426z00_1304));
									}
									if (BgL_testz00_3647)
										{	/* Ast/substitute.scm 119 */
											BgL_testz00_3643 = ((bool_t) 0);
										}
									else
										{	/* Ast/substitute.scm 120 */
											bool_t BgL_testz00_3654;

											{	/* Ast/substitute.scm 120 */
												BgL_variablez00_bglt BgL_arg3425z00_1303;

												{
													BgL_varz00_bglt BgL_auxz00_3655;

													BgL_auxz00_3655 =
														(BgL_varz00_bglt) (
														(BgL_closurez00_bglt) (BgL_nfunz00_1289));
													BgL_arg3425z00_1303 =
														(((BgL_varz00_bglt) CREF(BgL_auxz00_3655))->
														BgL_variablez00);
												}
												BgL_testz00_3654 =
													BGl_globalzd2keyzf3z21zzast_varz00(
													(obj_t) (BgL_arg3425z00_1303));
											}
											if (BgL_testz00_3654)
												{	/* Ast/substitute.scm 120 */
													BgL_testz00_3643 = ((bool_t) 0);
												}
											else
												{	/* Ast/substitute.scm 120 */
													BgL_testz00_3643 = ((bool_t) 1);
												}
										}
								}
							else
								{	/* Ast/substitute.scm 118 */
									BgL_testz00_3643 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_3643)
							{	/* Ast/substitute.scm 121 */
								obj_t BgL_arg3417z00_1293;

								BgL_varz00_bglt BgL_arg3418z00_1294;

								{
									BgL_nodez00_bglt BgL_auxz00_3661;

									BgL_auxz00_3661 = (BgL_nodez00_bglt) (BgL_nodez00_1284);
									BgL_arg3417z00_1293 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_3661))->BgL_locz00);
								}
								{	/* Ast/substitute.scm 121 */
									BgL_varz00_bglt BgL_duplicated3250z00_1295;

									BgL_duplicated3250z00_1295 =
										(BgL_varz00_bglt) (
										(BgL_closurez00_bglt) (BgL_nfunz00_1289));
									{	/* Ast/substitute.scm 121 */
										BgL_varz00_bglt BgL_new3251z00_1296;

										{	/* Ast/substitute.scm 121 */
											obj_t BgL_arg3419z00_1297;

											BgL_typez00_bglt BgL_arg3420z00_1298;

											BgL_variablez00_bglt BgL_arg3421z00_1299;

											{
												BgL_nodez00_bglt BgL_auxz00_3666;

												BgL_auxz00_3666 =
													(BgL_nodez00_bglt) (BgL_duplicated3250z00_1295);
												BgL_arg3419z00_1297 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_3666))->
													BgL_locz00);
											}
											{
												BgL_nodez00_bglt BgL_auxz00_3669;

												BgL_auxz00_3669 =
													(BgL_nodez00_bglt) (BgL_duplicated3250z00_1295);
												BgL_arg3420z00_1298 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_3669))->
													BgL_typez00);
											}
											BgL_arg3421z00_1299 =
												(((BgL_varz00_bglt) CREF(BgL_duplicated3250z00_1295))->
												BgL_variablez00);
											BgL_new3251z00_1296 =
												BGl_makezd2varzd2zzast_nodez00(BgL_arg3419z00_1297,
												BgL_arg3420z00_1298, BgL_arg3421z00_1299);
										}
										{	/* Ast/substitute.scm 121 */

											BgL_arg3418z00_1294 = BgL_new3251z00_1296;
										}
									}
								}
								return
									(obj_t) (BGl_knownzd2appzd2lyzd2ze3nodez31zzast_applyz00(BNIL,
										BgL_arg3417z00_1293,
										(BgL_nodez00_bglt) (BgL_arg3418z00_1294), BgL_nargz00_1290,
										BgL_sitez00_1285));
							}
						else
							{	/* Ast/substitute.scm 118 */
								((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1284))->BgL_funz00) =
									((BgL_nodez00_bglt) BgL_nfunz00_1289), BUNSPEC);
								((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1284))->BgL_argz00) =
									((BgL_nodez00_bglt) BgL_nargz00_1290), BUNSPEC);
								return (obj_t) (BgL_nodez00_1284);
							}
					}
				}
			}
		}
	}



/* do-substitute!-app3291 */
	obj_t BGl_dozd2substitutez12zd2app3291z12zzast_substitutez00(obj_t
		BgL_envz00_2627, obj_t BgL_nodez00_2628, obj_t BgL_sitez00_2629)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 106 */
			{
				BgL_appz00_bglt BgL_nodez00_1273;

				obj_t BgL_sitez00_1274;

				{	/* Ast/substitute.scm 107 */
					BgL_appz00_bglt BgL_auxz00_3681;

					BgL_nodez00_1273 = (BgL_appz00_bglt) (BgL_nodez00_2628);
					BgL_sitez00_1274 = BgL_sitez00_2629;
					{	/* Ast/substitute.scm 107 */
						BgL_nodez00_bglt BgL_arg3409z00_1277;

						{	/* Ast/substitute.scm 107 */
							BgL_varz00_bglt BgL_arg3410z00_1278;

							obj_t BgL_arg3411z00_1279;

							BgL_arg3410z00_1278 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1273))->BgL_funz00);
							BgL_arg3411z00_1279 = CNST_TABLE_REF(((long) 3));
							{	/* Ast/substitute.scm 107 */
								BgL_nodez00_bglt BgL_res3555z00_1691;

								{	/* Ast/substitute.scm 107 */
									BgL_nodez00_bglt BgL_nodez00_1664;

									BgL_nodez00_1664 = (BgL_nodez00_bglt) (BgL_arg3410z00_1278);
									{	/* Ast/substitute.scm 107 */
										obj_t BgL_method3281z00_1666;

										{	/* Ast/substitute.scm 107 */
											BgL_objectz00_bglt BgL_objz00_1667;

											BgL_objz00_1667 = (BgL_objectz00_bglt) (BgL_nodez00_1664);
											{	/* Ast/substitute.scm 107 */
												long BgL_objzd2classzd2numz00_1668;

												BgL_objzd2classzd2numz00_1668 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1667);
												{	/* Ast/substitute.scm 107 */
													obj_t BgL_arg2643z00_1669;

													BgL_arg2643z00_1669 =
														PROCEDURE_REF
														(BGl_dozd2substitutez12zd2envz12zzast_substitutez00,
														(int) (((long) 1)));
													{	/* Ast/substitute.scm 107 */
														obj_t BgL_arrayz00_1671;

														int BgL_offsetz00_1672;

														BgL_arrayz00_1671 = BgL_arg2643z00_1669;
														BgL_offsetz00_1672 =
															(int) (BgL_objzd2classzd2numz00_1668);
														{	/* Ast/substitute.scm 107 */
															long BgL_offsetz00_1673;

															BgL_offsetz00_1673 =
																((long) (BgL_offsetz00_1672) - OBJECT_TYPE);
															{	/* Ast/substitute.scm 107 */
																long BgL_modz00_1674;

																{	/* Ast/substitute.scm 107 */
																	int BgL_arg2645z00_1675;

																	BgL_arg2645z00_1675 = (int) (((long) 16));
																	{	/* Ast/substitute.scm 107 */
																		long BgL_auxz00_3693;

																		BgL_auxz00_3693 =
																			(long) (BgL_arg2645z00_1675);
																		BgL_modz00_1674 =
																			(BgL_offsetz00_1673 / BgL_auxz00_3693);
																}}
																{	/* Ast/substitute.scm 107 */
																	long BgL_restz00_1676;

																	{	/* Ast/substitute.scm 107 */
																		int BgL_arg2644z00_1677;

																		BgL_arg2644z00_1677 = (int) (((long) 16));
																		{	/* Ast/substitute.scm 107 */
																			long BgL_auxz00_3697;

																			BgL_auxz00_3697 =
																				(long) (BgL_arg2644z00_1677);
																			BgL_restz00_1676 =
																				(BgL_offsetz00_1673 % BgL_auxz00_3697);
																	}}
																	{	/* Ast/substitute.scm 107 */

																		BgL_method3281z00_1666 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1671,
																				(int) (BgL_modz00_1674)),
																			(int) (BgL_restz00_1676));
										}}}}}}}}
										BgL_res3555z00_1691 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3281z00_1666) (BgL_method3281z00_1666,
												(obj_t) (BgL_nodez00_1664), BgL_arg3411z00_1279, BEOA));
								}}
								BgL_arg3409z00_1277 = BgL_res3555z00_1691;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3708;

							BgL_auxz00_3708 = (BgL_varz00_bglt) (BgL_arg3409z00_1277);
							((((BgL_appz00_bglt) CREF(BgL_nodez00_1273))->BgL_funz00) =
								((BgL_varz00_bglt) BgL_auxz00_3708), BUNSPEC);
					}}
					{	/* Ast/substitute.scm 108 */
						obj_t BgL_arg3412z00_1280;

						obj_t BgL_arg3413z00_1281;

						BgL_arg3412z00_1280 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1273))->BgL_argsz00);
						BgL_arg3413z00_1281 = CNST_TABLE_REF(((long) 1));
						BGl_dozd2substituteza2z12z62zzast_substitutez00(BgL_arg3412z00_1280,
							BgL_arg3413z00_1281);
					}
					BgL_auxz00_3681 = BgL_nodez00_1273;
					return (obj_t) (BgL_auxz00_3681);
				}
			}
		}
	}



/* do-substitute!-seque3289 */
	obj_t BGl_dozd2substitutez12zd2seque3289z12zzast_substitutez00(obj_t
		BgL_envz00_2630, obj_t BgL_nodez00_2631, obj_t BgL_sitez00_2632)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 99 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1266;

				obj_t BgL_sitez00_1267;

				{	/* Ast/substitute.scm 100 */
					BgL_sequencez00_bglt BgL_auxz00_3716;

					BgL_nodez00_1266 = (BgL_sequencez00_bglt) (BgL_nodez00_2631);
					BgL_sitez00_1267 = BgL_sitez00_2632;
					{	/* Ast/substitute.scm 100 */
						obj_t BgL_arg3407z00_1661;

						BgL_arg3407z00_1661 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1266))->BgL_nodesz00);
						BGl_dozd2substituteza2z12z62zzast_substitutez00(BgL_arg3407z00_1661,
							BgL_sitez00_1267);
					}
					BgL_auxz00_3716 = BgL_nodez00_1266;
					return (obj_t) (BgL_auxz00_3716);
				}
			}
		}
	}



/* do-substitute!-kwote3287 */
	obj_t BGl_dozd2substitutez12zd2kwote3287z12zzast_substitutez00(obj_t
		BgL_envz00_2633, obj_t BgL_nodez00_2634, obj_t BgL_sitez00_2635)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 93 */
			return (obj_t) ((BgL_kwotez00_bglt) (BgL_nodez00_2634));
		}
	}



/* do-substitute!-var3285 */
	obj_t BGl_dozd2substitutez12zd2var3285z12zzast_substitutez00(obj_t
		BgL_envz00_2636, obj_t BgL_nodez00_2637, obj_t BgL_sitez00_2638)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 63 */
			{
				BgL_varz00_bglt BgL_nodez00_1231;

				obj_t BgL_sitez00_1232;

				BgL_nodez00_1231 = (BgL_varz00_bglt) (BgL_nodez00_2637);
				BgL_sitez00_1232 = BgL_sitez00_2638;
				{	/* Ast/substitute.scm 64 */
					BgL_variablez00_bglt BgL_varz00_1235;

					BgL_varz00_1235 =
						(((BgL_varz00_bglt) CREF(BgL_nodez00_1231))->BgL_variablez00);
					{	/* Ast/substitute.scm 64 */
						obj_t BgL_alphaz00_1236;

						BgL_alphaz00_1236 =
							(((BgL_variablez00_bglt) CREF(BgL_varz00_1235))->
							BgL_fastzd2alphazd2);
						{	/* Ast/substitute.scm 65 */

							{
								obj_t BgL_alphaz00_1238;

								BgL_alphaz00_1238 = BgL_alphaz00_1236;
							BgL_zc3anonymousza33387ze3z83_1239:
								if ((BgL_alphaz00_1238 == BUNSPEC))
									{	/* Ast/substitute.scm 68 */
										return (obj_t) (BgL_nodez00_1231);
									}
								else
									{	/* Ast/substitute.scm 68 */
										if (BGl_iszd2azf3z21zz__objectz00(BgL_alphaz00_1238,
												BGl_varz00zzast_nodez00))
											{	/* Ast/substitute.scm 71 */
												BgL_variablez00_bglt BgL_arg3390z00_1242;

												{
													BgL_varz00_bglt BgL_auxz00_3730;

													BgL_auxz00_3730 =
														(BgL_varz00_bglt) (BgL_alphaz00_1238);
													BgL_arg3390z00_1242 =
														(((BgL_varz00_bglt) CREF(BgL_auxz00_3730))->
														BgL_variablez00);
												}
												{
													obj_t BgL_alphaz00_3733;

													BgL_alphaz00_3733 = (obj_t) (BgL_arg3390z00_1242);
													BgL_alphaz00_1238 = BgL_alphaz00_3733;
													goto BgL_zc3anonymousza33387ze3z83_1239;
												}
											}
										else
											{	/* Ast/substitute.scm 70 */
												if (BGl_iszd2azf3z21zz__objectz00(BgL_alphaz00_1238,
														BGl_variablez00zzast_varz00))
													{	/* Ast/substitute.scm 72 */
														{	/* Ast/substitute.scm 73 */
															obj_t BgL_arg3392z00_1244;

															{
																BgL_nodez00_bglt BgL_auxz00_3737;

																BgL_auxz00_3737 =
																	(BgL_nodez00_bglt) (BgL_nodez00_1231);
																BgL_arg3392z00_1244 =
																	(((BgL_nodez00_bglt) CREF(BgL_auxz00_3737))->
																	BgL_locz00);
															}
															BGl_usezd2variablez12zc0zzast_sexpz00(
																(BgL_variablez00_bglt) (BgL_alphaz00_1238),
																BgL_arg3392z00_1244, BgL_sitez00_1232);
														}
														{	/* Ast/substitute.scm 74 */
															bool_t BgL_testz00_3742;

															{	/* Ast/substitute.scm 74 */
																bool_t BgL_testz00_3743;

																{	/* Ast/substitute.scm 74 */
																	BgL_valuez00_bglt BgL_arg3400z00_1252;

																	{
																		BgL_variablez00_bglt BgL_auxz00_3744;

																		BgL_auxz00_3744 =
																			(BgL_variablez00_bglt)
																			(BgL_alphaz00_1238);
																		BgL_arg3400z00_1252 =
																			(((BgL_variablez00_bglt)
																				CREF(BgL_auxz00_3744))->BgL_valuez00);
																	}
																	{	/* Ast/substitute.scm 74 */
																		obj_t BgL_obj1856z00_1655;

																		BgL_obj1856z00_1655 =
																			(obj_t) (BgL_arg3400z00_1252);
																		BgL_testz00_3743 =
																			BGl_iszd2azf3z21zz__objectz00
																			(BgL_obj1856z00_1655,
																			BGl_funz00zzast_varz00);
																	}
																}
																if (BgL_testz00_3743)
																	{	/* Ast/substitute.scm 74 */
																		if (
																			(BgL_sitez00_1232 ==
																				CNST_TABLE_REF(((long) 3))))
																			{	/* Ast/substitute.scm 74 */
																				BgL_testz00_3742 = ((bool_t) 0);
																			}
																		else
																			{	/* Ast/substitute.scm 74 */
																				BgL_testz00_3742 = ((bool_t) 1);
																			}
																	}
																else
																	{	/* Ast/substitute.scm 74 */
																		BgL_testz00_3742 = ((bool_t) 0);
																	}
															}
															if (BgL_testz00_3742)
																{	/* Ast/substitute.scm 76 */
																	obj_t BgL_arg3394z00_1246;

																	BgL_typez00_bglt BgL_arg3395z00_1247;

																	{
																		BgL_nodez00_bglt BgL_auxz00_3752;

																		BgL_auxz00_3752 =
																			(BgL_nodez00_bglt) (BgL_nodez00_1231);
																		BgL_arg3394z00_1246 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_auxz00_3752))->BgL_locz00);
																	}
																	{
																		BgL_nodez00_bglt BgL_auxz00_3755;

																		BgL_auxz00_3755 =
																			(BgL_nodez00_bglt) (BgL_nodez00_1231);
																		BgL_arg3395z00_1247 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_auxz00_3755))->BgL_typez00);
																	}
																	return
																		(obj_t) (BGl_makezd2closurezd2zzast_nodez00
																		(BgL_arg3394z00_1246, BgL_arg3395z00_1247,
																			(BgL_variablez00_bglt)
																			(BgL_alphaz00_1238)));
																}
															else
																{	/* Ast/substitute.scm 80 */
																	obj_t BgL_arg3396z00_1248;

																	BgL_typez00_bglt BgL_arg3397z00_1249;

																	{
																		BgL_nodez00_bglt BgL_auxz00_3761;

																		BgL_auxz00_3761 =
																			(BgL_nodez00_bglt) (BgL_nodez00_1231);
																		BgL_arg3396z00_1248 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_auxz00_3761))->BgL_locz00);
																	}
																	{
																		BgL_nodez00_bglt BgL_auxz00_3764;

																		BgL_auxz00_3764 =
																			(BgL_nodez00_bglt) (BgL_nodez00_1231);
																		BgL_arg3397z00_1249 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_auxz00_3764))->BgL_typez00);
																	}
																	return
																		(obj_t) (BGl_makezd2varzd2zzast_nodez00
																		(BgL_arg3396z00_1248, BgL_arg3397z00_1249,
																			(BgL_variablez00_bglt)
																			(BgL_alphaz00_1238)));
																}
														}
													}
												else
													{	/* Ast/substitute.scm 72 */
														if (BGl_iszd2azf3z21zz__objectz00(BgL_alphaz00_1238,
																BGl_atomz00zzast_nodez00))
															{	/* Ast/substitute.scm 83 */
																return BgL_alphaz00_1238;
															}
														else
															{	/* Ast/substitute.scm 83 */
																return
																	BGl_internalzd2errorzd2zztools_errorz00
																	(BGl_string3658z00zzast_substitutez00,
																	BGl_string3659z00zzast_substitutez00,
																	BGl_shapez00zztools_shapez00((obj_t)
																		(BgL_nodez00_1231)));
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



/* do-substitute!-atom3283 */
	obj_t BGl_dozd2substitutez12zd2atom3283z12zzast_substitutez00(obj_t
		BgL_envz00_2639, obj_t BgL_nodez00_2640, obj_t BgL_sitez00_2641)
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 57 */
			return (obj_t) ((BgL_atomz00_bglt) (BgL_nodez00_2640));
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_substitutez00()
	{
		AN_OBJECT;
		{	/* Ast/substitute.scm 14 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3660z00zzast_substitutez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3660z00zzast_substitutez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3660z00zzast_substitutez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3660z00zzast_substitutez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3660z00zzast_substitutez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3660z00zzast_substitutez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3660z00zzast_substitutez00));
			BGl_modulezd2initializa7ationz75zzast_applyz00(((long) 121557513),
				BSTRING_TO_STRING(BGl_string3660z00zzast_substitutez00));
			BGl_modulezd2initializa7ationz75zzast_appz00(((long) 271227279),
				BSTRING_TO_STRING(BGl_string3660z00zzast_substitutez00));
			return
				BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3660z00zzast_substitutez00));
		}
	}

#ifdef __cplusplus
}
#endif
