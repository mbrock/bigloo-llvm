/*===========================================================================*/
/*   (Ast/shrinkify.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/shrinkify.scm)*/
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


	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t
		BGl_shrinkzd2nodez12zd2default3278z12zzast_shrinkifyz00(BgL_nodez00_bglt);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_shrinkifyz00();
	static obj_t BGl_shrinkzd2nodez12zd2cast3297z12zzast_shrinkifyz00(obj_t,
		obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t BGl_shrinkzd2nodez12zd2funcall3293z12zzast_shrinkifyz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzast_shrinkifyz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzast_shrinkifyz00();
	static obj_t BGl__shrinkzd2variablez12zd2def3276z12zzast_shrinkifyz00(obj_t,
		obj_t);
	static obj_t BGl_shrinkzd2nodez12zd2setq3299z12zzast_shrinkifyz00(obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_shrinkifyz12z12zzast_shrinkifyz00(obj_t);
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_shrinkzd2nodez12zd2conditi3301z12zzast_shrinkifyz00(obj_t,
		obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_shrinkzd2nodez12zd2extern3295z12zzast_shrinkifyz00(obj_t,
		obj_t);
	static obj_t
		BGl_shrinkzd2variablez12zc0zzast_shrinkifyz00(BgL_variablez00_bglt);
	static obj_t BGl_shrinkzd2nodez12zd2appzd2ly3291zc0zzast_shrinkifyz00(obj_t,
		obj_t);
	static obj_t BGl_shrinkzd2nodez12zd2boxzd2ref3309zc0zzast_shrinkifyz00(obj_t,
		obj_t);
	static obj_t BGl__shrinkzd2nodez12zd2default3278z12zzast_shrinkifyz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzast_shrinkifyz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_shrinkzd2nodez12zd2fail3303z12zzast_shrinkifyz00(obj_t,
		obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_shrinkzd2nodez12zd2app3289z12zzast_shrinkifyz00(obj_t,
		obj_t);
	static obj_t BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(BgL_nodez00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzast_shrinkifyz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzast_shrinkifyz00();
	static obj_t
		BGl_shrinkzd2nodez12zd2setzd2exzd23317z12zzast_shrinkifyz00(obj_t, obj_t);
	static obj_t BGl_shrinkzd2nodez12zd2kwote3285z12zzast_shrinkifyz00(obj_t,
		obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl__shrinkifyz12z12zzast_shrinkifyz00(obj_t, obj_t);
	static obj_t BGl__shrinkzd2variablez12zc0zzast_shrinkifyz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_shrinkifyz00();
	static obj_t BGl_shrinkzd2nodez12zd2select3305z12zzast_shrinkifyz00(obj_t,
		obj_t);
	static obj_t BGl_shrinkzd2nodez12zd2letzd2fun3313zc0zzast_shrinkifyz00(obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_shrinkzd2nodez12zd2letzd2var3315zc0zzast_shrinkifyz00(obj_t,
		obj_t);
	static obj_t BGl_shrinkzd2nodez12zd2jumpzd2ex3319zc0zzast_shrinkifyz00(obj_t,
		obj_t);
	static obj_t BGl_shrinkzd2nodez12zd2var3283z12zzast_shrinkifyz00(obj_t,
		obj_t);
	static obj_t BGl_shrinkzd2nodez12zd2boxzd2set3311zc0zzast_shrinkifyz00(obj_t,
		obj_t);
	static obj_t BGl_shrinkzd2nodez12zd2sequenc3287z12zzast_shrinkifyz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl_shrinkzd2nodez12zd2atom3281z12zzast_shrinkifyz00(obj_t,
		obj_t);
	static bool_t BGl_shrinkzd2nodeza2z12z62zzast_shrinkifyz00(obj_t);
	static obj_t BGl_shrinkzd2nodez12zd2makezd2bo3307zc0zzast_shrinkifyz00(obj_t,
		obj_t);
	static obj_t
		BGl_shrinkzd2variablez12zd2def3276z12zzast_shrinkifyz00
		(BgL_variablez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_shrinkifyz00();
	static obj_t BGl__shrinkzd2nodez12zc0zzast_shrinkifyz00(obj_t, obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_shrinkzd2variablez12zd2def3276zd2envzc0zzast_shrinkifyz00,
		BgL_bgl__shrinkza7d2variab3620za7,
		BGl__shrinkzd2variablez12zd2def3276z12zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_shrinkzd2nodez12zd2default3278zd2envzc0zzast_shrinkifyz00,
		BgL_bgl__shrinkza7d2nodeza713621z00,
		BGl__shrinkzd2nodez12zd2default3278z12zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_shrinkzd2variablez12zd2envz12zzast_shrinkifyz00,
		BgL_bgl__shrinkza7d2variab3622za7,
		BGl__shrinkzd2variablez12zc0zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_shrinkifyz12zd2envzc0zzast_shrinkifyz00,
		BgL_bgl__shrinkifyza712za7123623z00, BGl__shrinkifyz12z12zzast_shrinkifyz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3600z00zzast_shrinkifyz00,
		BgL_bgl_shrinkza7d2nodeza7123624z00,
		BGl_shrinkzd2nodez12zd2app3289z12zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3601z00zzast_shrinkifyz00,
		BgL_bgl_shrinkza7d2nodeza7123625z00,
		BGl_shrinkzd2nodez12zd2appzd2ly3291zc0zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3602z00zzast_shrinkifyz00,
		BgL_bgl_shrinkza7d2nodeza7123626z00,
		BGl_shrinkzd2nodez12zd2funcall3293z12zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3603z00zzast_shrinkifyz00,
		BgL_bgl_shrinkza7d2nodeza7123627z00,
		BGl_shrinkzd2nodez12zd2extern3295z12zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3604z00zzast_shrinkifyz00,
		BgL_bgl_shrinkza7d2nodeza7123628z00,
		BGl_shrinkzd2nodez12zd2cast3297z12zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3605z00zzast_shrinkifyz00,
		BgL_bgl_shrinkza7d2nodeza7123629z00,
		BGl_shrinkzd2nodez12zd2setq3299z12zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3606z00zzast_shrinkifyz00,
		BgL_bgl_shrinkza7d2nodeza7123630z00,
		BGl_shrinkzd2nodez12zd2conditi3301z12zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3596z00zzast_shrinkifyz00,
		BgL_bgl_shrinkza7d2nodeza7123631z00,
		BGl_shrinkzd2nodez12zd2atom3281z12zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3607z00zzast_shrinkifyz00,
		BgL_bgl_shrinkza7d2nodeza7123632z00,
		BGl_shrinkzd2nodez12zd2fail3303z12zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3597z00zzast_shrinkifyz00,
		BgL_bgl_shrinkza7d2nodeza7123633z00,
		BGl_shrinkzd2nodez12zd2var3283z12zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3608z00zzast_shrinkifyz00,
		BgL_bgl_shrinkza7d2nodeza7123634z00,
		BGl_shrinkzd2nodez12zd2select3305z12zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3598z00zzast_shrinkifyz00,
		BgL_bgl_shrinkza7d2nodeza7123635z00,
		BGl_shrinkzd2nodez12zd2kwote3285z12zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3610z00zzast_shrinkifyz00,
		BgL_bgl_shrinkza7d2nodeza7123636z00,
		BGl_shrinkzd2nodez12zd2boxzd2ref3309zc0zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3609z00zzast_shrinkifyz00,
		BgL_bgl_shrinkza7d2nodeza7123637z00,
		BGl_shrinkzd2nodez12zd2makezd2bo3307zc0zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3599z00zzast_shrinkifyz00,
		BgL_bgl_shrinkza7d2nodeza7123638z00,
		BGl_shrinkzd2nodez12zd2sequenc3287z12zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3611z00zzast_shrinkifyz00,
		BgL_bgl_shrinkza7d2nodeza7123639z00,
		BGl_shrinkzd2nodez12zd2boxzd2set3311zc0zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3612z00zzast_shrinkifyz00,
		BgL_bgl_shrinkza7d2nodeza7123640z00,
		BGl_shrinkzd2nodez12zd2letzd2fun3313zc0zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3613z00zzast_shrinkifyz00,
		BgL_bgl_shrinkza7d2nodeza7123641z00,
		BGl_shrinkzd2nodez12zd2letzd2var3315zc0zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3614z00zzast_shrinkifyz00,
		BgL_bgl_shrinkza7d2nodeza7123642z00,
		BGl_shrinkzd2nodez12zd2setzd2exzd23317z12zzast_shrinkifyz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3615z00zzast_shrinkifyz00,
		BgL_bgl_shrinkza7d2nodeza7123643z00,
		BGl_shrinkzd2nodez12zd2jumpzd2ex3319zc0zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3593z00zzast_shrinkifyz00,
		BgL_bgl_string3593za700za7za7a3644za7, "shrink-variable!", 16);
	      DEFINE_STRING(BGl_string3594z00zzast_shrinkifyz00,
		BgL_bgl_string3594za700za7za7a3645za7, "shrink-node!", 12);
	      DEFINE_STRING(BGl_string3595z00zzast_shrinkifyz00,
		BgL_bgl_string3595za700za7za7a3646za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3616z00zzast_shrinkifyz00,
		BgL_bgl_string3616za700za7za7a3647za7, "ast_shrinkify", 13);
	      DEFINE_STRING(BGl_string3617z00zzast_shrinkifyz00,
		BgL_bgl_string3617za700za7za7a3648za7, "shrink-node!-default3278 ", 25);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
		BgL_bgl__shrinkza7d2nodeza713649z00,
		BGl__shrinkzd2nodez12zc0zzast_shrinkifyz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_shrinkifyz00(long
		BgL_checksumz00_2618, char *BgL_fromz00_2619)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_shrinkifyz00))
				{
					BGl_requirezd2initializa7ationz75zzast_shrinkifyz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_shrinkifyz00();
					BGl_cnstzd2initzd2zzast_shrinkifyz00();
					BGl_importedzd2moduleszd2initz00zzast_shrinkifyz00();
					BGl_genericzd2initzd2zzast_shrinkifyz00();
					BGl_methodzd2initzd2zzast_shrinkifyz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_shrinkifyz00()
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"ast_shrinkify");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_shrinkify");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"ast_shrinkify");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_shrinkifyz00()
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 15 */
			{	/* Ast/shrinkify.scm 15 */
				obj_t BgL_cportz00_2607;

				BgL_cportz00_2607 =
					bgl_open_input_string(BGl_string3617z00zzast_shrinkifyz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2608;

					BgL_iz00_2608 = ((long) 0);
				BgL_loopz00_2609:
					if ((BgL_iz00_2608 == ((long) -1)))
						{	/* Ast/shrinkify.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Ast/shrinkify.scm 15 */
							{	/* Ast/shrinkify.scm 15 */
								obj_t BgL_arg3619z00_2611;

								{	/* Ast/shrinkify.scm 15 */

									{	/* Ast/shrinkify.scm 15 */
										obj_t BgL_locationz00_2613;

										BgL_locationz00_2613 = BBOOL(((bool_t) 0));
										{	/* Ast/shrinkify.scm 15 */

											BgL_arg3619z00_2611 =
												BGl_readz00zz__readerz00(BgL_cportz00_2607,
												BgL_locationz00_2613);
										}
									}
								}
								{	/* Ast/shrinkify.scm 15 */
									int BgL_auxz00_2637;

									BgL_auxz00_2637 = (int) (BgL_iz00_2608);
									CNST_TABLE_SET(BgL_auxz00_2637, BgL_arg3619z00_2611);
							}}
							{	/* Ast/shrinkify.scm 15 */
								int BgL_auxz00_2614;

								BgL_auxz00_2614 = (int) ((BgL_iz00_2608 - ((long) 1)));
								{
									long BgL_iz00_2642;

									BgL_iz00_2642 = (long) (BgL_auxz00_2614);
									BgL_iz00_2608 = BgL_iz00_2642;
									goto BgL_loopz00_2609;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_shrinkifyz00()
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 15 */
			return BUNSPEC;
		}
	}



/* shrinkify! */
	BGL_EXPORTED_DEF obj_t BGl_shrinkifyz12z12zzast_shrinkifyz00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 25 */
			BGl_forzd2eachzd2globalz12z12zzast_envz00
				(BGl_shrinkzd2variablez12zd2envz12zzast_shrinkifyz00, BNIL);
			{
				obj_t BgL_l3260z00_801;

				BgL_l3260z00_801 = BgL_globalsz00_1;
			BgL_zc3anonymousza33321ze3z83_802:
				if (PAIRP(BgL_l3260z00_801))
					{	/* Ast/shrinkify.scm 27 */
						{	/* Ast/shrinkify.scm 28 */
							obj_t BgL_globalz00_804;

							BgL_globalz00_804 = CAR(BgL_l3260z00_801);
							{	/* Ast/shrinkify.scm 28 */
								BgL_valuez00_bglt BgL_sfunz00_805;

								{
									BgL_variablez00_bglt BgL_auxz00_2648;

									BgL_auxz00_2648 = (BgL_variablez00_bglt) (BgL_globalz00_804);
									BgL_sfunz00_805 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2648))->
										BgL_valuez00);
								}
								{	/* Ast/shrinkify.scm 29 */
									obj_t BgL_g3259z00_806;

									{
										BgL_sfunz00_bglt BgL_auxz00_2651;

										BgL_auxz00_2651 = (BgL_sfunz00_bglt) (BgL_sfunz00_805);
										BgL_g3259z00_806 =
											(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2651))->BgL_argsz00);
									}
									{
										obj_t BgL_l3257z00_808;

										BgL_l3257z00_808 = BgL_g3259z00_806;
									BgL_zc3anonymousza33323ze3z83_809:
										if (PAIRP(BgL_l3257z00_808))
											{	/* Ast/shrinkify.scm 29 */
												{	/* Ast/shrinkify.scm 29 */
													obj_t BgL_arg3325z00_811;

													BgL_arg3325z00_811 = CAR(BgL_l3257z00_808);
													{	/* Ast/shrinkify.scm 29 */
														BgL_variablez00_bglt BgL_variablez00_1420;

														BgL_variablez00_1420 =
															(BgL_variablez00_bglt) (BgL_arg3325z00_811);
														{	/* Ast/shrinkify.scm 29 */
															obj_t BgL_method3277z00_1421;

															{	/* Ast/shrinkify.scm 29 */
																BgL_objectz00_bglt BgL_objz00_1422;

																BgL_objz00_1422 =
																	(BgL_objectz00_bglt) (BgL_variablez00_1420);
																{	/* Ast/shrinkify.scm 29 */
																	long BgL_objzd2classzd2numz00_1423;

																	BgL_objzd2classzd2numz00_1423 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_1422);
																	{	/* Ast/shrinkify.scm 29 */
																		obj_t BgL_arg2643z00_1424;

																		BgL_arg2643z00_1424 =
																			PROCEDURE_REF
																			(BGl_shrinkzd2variablez12zd2envz12zzast_shrinkifyz00,
																			(int) (((long) 1)));
																		{	/* Ast/shrinkify.scm 29 */
																			obj_t BgL_arrayz00_1426;

																			int BgL_offsetz00_1427;

																			BgL_arrayz00_1426 = BgL_arg2643z00_1424;
																			BgL_offsetz00_1427 =
																				(int) (BgL_objzd2classzd2numz00_1423);
																			{	/* Ast/shrinkify.scm 29 */
																				long BgL_offsetz00_1428;

																				BgL_offsetz00_1428 =
																					(
																					(long) (BgL_offsetz00_1427) -
																					OBJECT_TYPE);
																				{	/* Ast/shrinkify.scm 29 */
																					long BgL_modz00_1429;

																					{	/* Ast/shrinkify.scm 29 */
																						int BgL_arg2645z00_1430;

																						BgL_arg2645z00_1430 =
																							(int) (((long) 16));
																						{	/* Ast/shrinkify.scm 29 */
																							long BgL_auxz00_2666;

																							BgL_auxz00_2666 =
																								(long) (BgL_arg2645z00_1430);
																							BgL_modz00_1429 =
																								(BgL_offsetz00_1428 /
																								BgL_auxz00_2666);
																					}}
																					{	/* Ast/shrinkify.scm 29 */
																						long BgL_restz00_1431;

																						{	/* Ast/shrinkify.scm 29 */
																							int BgL_arg2644z00_1432;

																							BgL_arg2644z00_1432 =
																								(int) (((long) 16));
																							{	/* Ast/shrinkify.scm 29 */
																								long BgL_auxz00_2670;

																								BgL_auxz00_2670 =
																									(long) (BgL_arg2644z00_1432);
																								BgL_restz00_1431 =
																									(BgL_offsetz00_1428 %
																									BgL_auxz00_2670);
																						}}
																						{	/* Ast/shrinkify.scm 29 */

																							BgL_method3277z00_1421 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_1426,
																									(int) (BgL_modz00_1429)),
																								(int) (BgL_restz00_1431));
															}}}}}}}}
															PROCEDURE_ENTRY(BgL_method3277z00_1421)
																(BgL_method3277z00_1421,
																(obj_t) (BgL_variablez00_1420), BEOA);
												}}}
												{
													obj_t BgL_l3257z00_2680;

													BgL_l3257z00_2680 = CDR(BgL_l3257z00_808);
													BgL_l3257z00_808 = BgL_l3257z00_2680;
													goto BgL_zc3anonymousza33323ze3z83_809;
												}
											}
										else
											{	/* Ast/shrinkify.scm 29 */
												((bool_t) 1);
											}
									}
								}
								{	/* Ast/shrinkify.scm 30 */
									obj_t BgL_arg3327z00_814;

									{	/* Ast/shrinkify.scm 30 */
										BgL_sfunz00_bglt BgL_obj1884z00_1448;

										{	/* Ast/shrinkify.scm 30 */
											BgL_variablez00_bglt BgL_obj1611z00_1447;

											BgL_obj1611z00_1447 =
												(BgL_variablez00_bglt) (BgL_globalz00_804);
											BgL_obj1884z00_1448 =
												(BgL_sfunz00_bglt) (
												(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1447))->
													BgL_valuez00));
										}
										BgL_arg3327z00_814 =
											(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_1448))->
											BgL_bodyz00);
									}
									{	/* Ast/shrinkify.scm 30 */
										obj_t BgL_res3492z00_1475;

										{	/* Ast/shrinkify.scm 30 */
											BgL_nodez00_bglt BgL_nodez00_1449;

											BgL_nodez00_1449 =
												(BgL_nodez00_bglt) (BgL_arg3327z00_814);
											{	/* Ast/shrinkify.scm 30 */
												obj_t BgL_method3279z00_1450;

												{	/* Ast/shrinkify.scm 30 */
													BgL_objectz00_bglt BgL_objz00_1451;

													BgL_objz00_1451 =
														(BgL_objectz00_bglt) (BgL_nodez00_1449);
													{	/* Ast/shrinkify.scm 30 */
														long BgL_objzd2classzd2numz00_1452;

														BgL_objzd2classzd2numz00_1452 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1451);
														{	/* Ast/shrinkify.scm 30 */
															obj_t BgL_arg2643z00_1453;

															BgL_arg2643z00_1453 =
																PROCEDURE_REF
																(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
																(int) (((long) 1)));
															{	/* Ast/shrinkify.scm 30 */
																obj_t BgL_arrayz00_1455;

																int BgL_offsetz00_1456;

																BgL_arrayz00_1455 = BgL_arg2643z00_1453;
																BgL_offsetz00_1456 =
																	(int) (BgL_objzd2classzd2numz00_1452);
																{	/* Ast/shrinkify.scm 30 */
																	long BgL_offsetz00_1457;

																	BgL_offsetz00_1457 =
																		((long) (BgL_offsetz00_1456) - OBJECT_TYPE);
																	{	/* Ast/shrinkify.scm 30 */
																		long BgL_modz00_1458;

																		{	/* Ast/shrinkify.scm 30 */
																			int BgL_arg2645z00_1459;

																			BgL_arg2645z00_1459 = (int) (((long) 16));
																			{	/* Ast/shrinkify.scm 30 */
																				long BgL_auxz00_2695;

																				BgL_auxz00_2695 =
																					(long) (BgL_arg2645z00_1459);
																				BgL_modz00_1458 =
																					(BgL_offsetz00_1457 /
																					BgL_auxz00_2695);
																		}}
																		{	/* Ast/shrinkify.scm 30 */
																			long BgL_restz00_1460;

																			{	/* Ast/shrinkify.scm 30 */
																				int BgL_arg2644z00_1461;

																				BgL_arg2644z00_1461 =
																					(int) (((long) 16));
																				{	/* Ast/shrinkify.scm 30 */
																					long BgL_auxz00_2699;

																					BgL_auxz00_2699 =
																						(long) (BgL_arg2644z00_1461);
																					BgL_restz00_1460 =
																						(BgL_offsetz00_1457 %
																						BgL_auxz00_2699);
																			}}
																			{	/* Ast/shrinkify.scm 30 */

																				BgL_method3279z00_1450 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1455,
																						(int) (BgL_modz00_1458)),
																					(int) (BgL_restz00_1460));
												}}}}}}}}
												{	/* Ast/shrinkify.scm 30 */
													obj_t BgL_xz00_2577;

													BgL_xz00_2577 =
														PROCEDURE_ENTRY(BgL_method3279z00_1450)
														(BgL_method3279z00_1450, (obj_t) (BgL_nodez00_1449),
														BEOA);
													BgL_res3492z00_1475 = BUNSPEC;
										}}} BgL_res3492z00_1475;
						}}}}
						{
							obj_t BgL_l3260z00_2709;

							BgL_l3260z00_2709 = CDR(BgL_l3260z00_801);
							BgL_l3260z00_801 = BgL_l3260z00_2709;
							goto BgL_zc3anonymousza33321ze3z83_802;
						}
					}
				else
					{	/* Ast/shrinkify.scm 27 */
						((bool_t) 1);
					}
			}
			return BgL_globalsz00_1;
		}
	}



/* _shrinkify! */
	obj_t BGl__shrinkifyz12z12zzast_shrinkifyz00(obj_t BgL_envz00_2507,
		obj_t BgL_globalsz00_2508)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 25 */
			return BGl_shrinkifyz12z12zzast_shrinkifyz00(BgL_globalsz00_2508);
		}
	}



/* shrink-node*! */
	bool_t BGl_shrinkzd2nodeza2z12z62zzast_shrinkifyz00(obj_t BgL_nodeza2za2_26)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 221 */
			{
				obj_t BgL_l3274z00_819;

				BgL_l3274z00_819 = BgL_nodeza2za2_26;
			BgL_zc3anonymousza33330ze3z83_820:
				if (PAIRP(BgL_l3274z00_819))
					{	/* Ast/shrinkify.scm 222 */
						{	/* Ast/shrinkify.scm 222 */
							obj_t BgL_arg3332z00_822;

							BgL_arg3332z00_822 = CAR(BgL_l3274z00_819);
							{	/* Ast/shrinkify.scm 222 */
								obj_t BgL_res3495z00_1505;

								{	/* Ast/shrinkify.scm 222 */
									BgL_nodez00_bglt BgL_nodez00_1479;

									BgL_nodez00_1479 = (BgL_nodez00_bglt) (BgL_arg3332z00_822);
									{	/* Ast/shrinkify.scm 222 */
										obj_t BgL_method3279z00_1480;

										{	/* Ast/shrinkify.scm 222 */
											BgL_objectz00_bglt BgL_objz00_1481;

											BgL_objz00_1481 = (BgL_objectz00_bglt) (BgL_nodez00_1479);
											{	/* Ast/shrinkify.scm 222 */
												long BgL_objzd2classzd2numz00_1482;

												BgL_objzd2classzd2numz00_1482 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1481);
												{	/* Ast/shrinkify.scm 222 */
													obj_t BgL_arg2643z00_1483;

													BgL_arg2643z00_1483 =
														PROCEDURE_REF
														(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
														(int) (((long) 1)));
													{	/* Ast/shrinkify.scm 222 */
														obj_t BgL_arrayz00_1485;

														int BgL_offsetz00_1486;

														BgL_arrayz00_1485 = BgL_arg2643z00_1483;
														BgL_offsetz00_1486 =
															(int) (BgL_objzd2classzd2numz00_1482);
														{	/* Ast/shrinkify.scm 222 */
															long BgL_offsetz00_1487;

															BgL_offsetz00_1487 =
																((long) (BgL_offsetz00_1486) - OBJECT_TYPE);
															{	/* Ast/shrinkify.scm 222 */
																long BgL_modz00_1488;

																{	/* Ast/shrinkify.scm 222 */
																	int BgL_arg2645z00_1489;

																	BgL_arg2645z00_1489 = (int) (((long) 16));
																	{	/* Ast/shrinkify.scm 222 */
																		long BgL_auxz00_2724;

																		BgL_auxz00_2724 =
																			(long) (BgL_arg2645z00_1489);
																		BgL_modz00_1488 =
																			(BgL_offsetz00_1487 / BgL_auxz00_2724);
																}}
																{	/* Ast/shrinkify.scm 222 */
																	long BgL_restz00_1490;

																	{	/* Ast/shrinkify.scm 222 */
																		int BgL_arg2644z00_1491;

																		BgL_arg2644z00_1491 = (int) (((long) 16));
																		{	/* Ast/shrinkify.scm 222 */
																			long BgL_auxz00_2728;

																			BgL_auxz00_2728 =
																				(long) (BgL_arg2644z00_1491);
																			BgL_restz00_1490 =
																				(BgL_offsetz00_1487 % BgL_auxz00_2728);
																	}}
																	{	/* Ast/shrinkify.scm 222 */

																		BgL_method3279z00_1480 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1485,
																				(int) (BgL_modz00_1488)),
																			(int) (BgL_restz00_1490));
										}}}}}}}}
										{	/* Ast/shrinkify.scm 222 */
											obj_t BgL_xz00_2578;

											BgL_xz00_2578 =
												PROCEDURE_ENTRY(BgL_method3279z00_1480)
												(BgL_method3279z00_1480, (obj_t) (BgL_nodez00_1479),
												BEOA);
											BgL_res3495z00_1505 = BUNSPEC;
								}}} BgL_res3495z00_1505;
						}}
						{
							obj_t BgL_l3274z00_2738;

							BgL_l3274z00_2738 = CDR(BgL_l3274z00_819);
							BgL_l3274z00_819 = BgL_l3274z00_2738;
							goto BgL_zc3anonymousza33330ze3z83_820;
						}
					}
				else
					{	/* Ast/shrinkify.scm 222 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_shrinkifyz00()
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_shrinkzd2variablez12zd2envz12zzast_shrinkifyz00,
				BGl_shrinkzd2variablez12zd2def3276zd2envzc0zzast_shrinkifyz00,
				BGl_variablez00zzast_varz00, BGl_string3593z00zzast_shrinkifyz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_shrinkzd2nodez12zd2default3278zd2envzc0zzast_shrinkifyz00,
				BGl_nodez00zzast_nodez00, BGl_string3594z00zzast_shrinkifyz00);
		}
	}



/* shrink-variable! */
	obj_t BGl_shrinkzd2variablez12zc0zzast_shrinkifyz00(BgL_variablez00_bglt
		BgL_variablez00_2)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 37 */
			{	/* Ast/shrinkify.scm 37 */
				obj_t BgL_method3277z00_1507;

				{	/* Ast/shrinkify.scm 37 */
					BgL_objectz00_bglt BgL_objz00_1508;

					BgL_objz00_1508 = (BgL_objectz00_bglt) (BgL_variablez00_2);
					{	/* Ast/shrinkify.scm 37 */
						long BgL_objzd2classzd2numz00_1509;

						BgL_objzd2classzd2numz00_1509 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1508);
						{	/* Ast/shrinkify.scm 37 */
							obj_t BgL_arg2643z00_1510;

							BgL_arg2643z00_1510 =
								PROCEDURE_REF
								(BGl_shrinkzd2variablez12zd2envz12zzast_shrinkifyz00,
								(int) (((long) 1)));
							{	/* Ast/shrinkify.scm 37 */
								obj_t BgL_arrayz00_1512;

								int BgL_offsetz00_1513;

								BgL_arrayz00_1512 = BgL_arg2643z00_1510;
								BgL_offsetz00_1513 = (int) (BgL_objzd2classzd2numz00_1509);
								{	/* Ast/shrinkify.scm 37 */
									long BgL_offsetz00_1514;

									BgL_offsetz00_1514 =
										((long) (BgL_offsetz00_1513) - OBJECT_TYPE);
									{	/* Ast/shrinkify.scm 37 */
										long BgL_modz00_1515;

										{	/* Ast/shrinkify.scm 37 */
											int BgL_arg2645z00_1516;

											BgL_arg2645z00_1516 = (int) (((long) 16));
											{	/* Ast/shrinkify.scm 37 */
												long BgL_auxz00_2750;

												BgL_auxz00_2750 = (long) (BgL_arg2645z00_1516);
												BgL_modz00_1515 =
													(BgL_offsetz00_1514 / BgL_auxz00_2750);
										}}
										{	/* Ast/shrinkify.scm 37 */
											long BgL_restz00_1517;

											{	/* Ast/shrinkify.scm 37 */
												int BgL_arg2644z00_1518;

												BgL_arg2644z00_1518 = (int) (((long) 16));
												{	/* Ast/shrinkify.scm 37 */
													long BgL_auxz00_2754;

													BgL_auxz00_2754 = (long) (BgL_arg2644z00_1518);
													BgL_restz00_1517 =
														(BgL_offsetz00_1514 % BgL_auxz00_2754);
											}}
											{	/* Ast/shrinkify.scm 37 */

												BgL_method3277z00_1507 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1512,
														(int) (BgL_modz00_1515)), (int) (BgL_restz00_1517));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3277z00_1507) (BgL_method3277z00_1507,
					(obj_t) (BgL_variablez00_2), BEOA);
			}
		}
	}



/* _shrink-variable! */
	obj_t BGl__shrinkzd2variablez12zc0zzast_shrinkifyz00(obj_t BgL_envz00_2509,
		obj_t BgL_variablez00_2510)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 37 */
			return
				BGl_shrinkzd2variablez12zc0zzast_shrinkifyz00(
				(BgL_variablez00_bglt) (BgL_variablez00_2510));
		}
	}



/* shrink-variable!-def3276 */
	obj_t
		BGl_shrinkzd2variablez12zd2def3276z12zzast_shrinkifyz00(BgL_variablez00_bglt
		BgL_variablez00_3)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 15 */
			{	/* Ast/shrinkify.scm 38 */
				bool_t BgL_testz00_2766;

				{	/* Ast/shrinkify.scm 38 */
					bool_t BgL_testz00_2767;

					{	/* Ast/shrinkify.scm 38 */
						obj_t BgL_auxz00_2768;

						{	/* Ast/shrinkify.scm 38 */
							BgL_objectz00_bglt BgL_auxz00_2769;

							BgL_auxz00_2769 = (BgL_objectz00_bglt) (BgL_variablez00_3);
							BgL_auxz00_2768 = BGL_OBJECT_WIDENING(BgL_auxz00_2769);
						}
						BgL_testz00_2767 = CBOOL(BgL_auxz00_2768);
					}
					if (BgL_testz00_2767)
						{	/* Ast/shrinkify.scm 38 */
							BgL_testz00_2766 = ((bool_t) 1);
						}
					else
						{	/* Ast/shrinkify.scm 38 */
							BgL_testz00_2766 = ((bool_t) 0);
						}
				}
				if (BgL_testz00_2766)
					{	/* Ast/shrinkify.scm 38 */
						{	/* Ast/shrinkify.scm 39 */
							long BgL_arg3383z00_1202;

							{	/* Ast/shrinkify.scm 39 */
								obj_t BgL_arg3384z00_1203;

								{	/* Ast/shrinkify.scm 39 */
									obj_t BgL_arg3385z00_1204;

									{	/* Ast/shrinkify.scm 39 */
										BgL_objectz00_bglt BgL_objectz00_1535;

										BgL_objectz00_1535 =
											(BgL_objectz00_bglt) (BgL_variablez00_3);
										{	/* Ast/shrinkify.scm 39 */
											long BgL_arg2646z00_1536;

											{	/* Ast/shrinkify.scm 39 */
												long BgL_arg2647z00_1537;

												BgL_arg2647z00_1537 =
													BGL_OBJECT_CLASS_NUM(BgL_objectz00_1535);
												BgL_arg2646z00_1536 =
													(BgL_arg2647z00_1537 - OBJECT_TYPE);
											}
											BgL_arg3385z00_1204 =
												VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
												(int) (BgL_arg2646z00_1536));
									}}
									BgL_arg3384z00_1203 =
										BGl_classzd2superzd2zz__objectz00(BgL_arg3385z00_1204);
								}
								BgL_arg3383z00_1202 =
									BGl_classzd2numzd2zz__objectz00(BgL_arg3384z00_1203);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_variablez00_3), BgL_arg3383z00_1202);
						}
						{	/* Ast/shrinkify.scm 39 */
							BgL_objectz00_bglt BgL_auxz00_2782;

							BgL_auxz00_2782 = (BgL_objectz00_bglt) (BgL_variablez00_3);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2782, BFALSE);
						}
						(obj_t) (BgL_variablez00_3);
					}
				else
					{	/* Ast/shrinkify.scm 38 */
						BFALSE;
					}
			}
			{	/* Ast/shrinkify.scm 40 */
				bool_t BgL_testz00_2786;

				{	/* Ast/shrinkify.scm 40 */
					bool_t BgL_testz00_2787;

					{	/* Ast/shrinkify.scm 40 */
						obj_t BgL_auxz00_2788;

						{	/* Ast/shrinkify.scm 40 */
							BgL_objectz00_bglt BgL_auxz00_2789;

							BgL_auxz00_2789 =
								(BgL_objectz00_bglt) (
								(((BgL_variablez00_bglt) CREF(BgL_variablez00_3))->
									BgL_valuez00));
							BgL_auxz00_2788 = BGL_OBJECT_WIDENING(BgL_auxz00_2789);
						}
						BgL_testz00_2787 = CBOOL(BgL_auxz00_2788);
					}
					if (BgL_testz00_2787)
						{	/* Ast/shrinkify.scm 40 */
							BgL_testz00_2786 = ((bool_t) 1);
						}
					else
						{	/* Ast/shrinkify.scm 40 */
							BgL_testz00_2786 = ((bool_t) 0);
						}
				}
				if (BgL_testz00_2786)
					{	/* Ast/shrinkify.scm 41 */
						BgL_valuez00_bglt BgL_o3243z00_1206;

						BgL_o3243z00_1206 =
							(((BgL_variablez00_bglt) CREF(BgL_variablez00_3))->BgL_valuez00);
						{	/* Ast/shrinkify.scm 41 */
							long BgL_arg3387z00_1207;

							{	/* Ast/shrinkify.scm 41 */
								obj_t BgL_arg3388z00_1208;

								{	/* Ast/shrinkify.scm 41 */
									obj_t BgL_arg3389z00_1209;

									{	/* Ast/shrinkify.scm 41 */
										BgL_objectz00_bglt BgL_objectz00_1550;

										BgL_objectz00_1550 =
											(BgL_objectz00_bglt) (BgL_o3243z00_1206);
										{	/* Ast/shrinkify.scm 41 */
											long BgL_arg2646z00_1551;

											{	/* Ast/shrinkify.scm 41 */
												long BgL_arg2647z00_1552;

												BgL_arg2647z00_1552 =
													BGL_OBJECT_CLASS_NUM(BgL_objectz00_1550);
												BgL_arg2646z00_1551 =
													(BgL_arg2647z00_1552 - OBJECT_TYPE);
											}
											BgL_arg3389z00_1209 =
												VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
												(int) (BgL_arg2646z00_1551));
									}}
									BgL_arg3388z00_1208 =
										BGl_classzd2superzd2zz__objectz00(BgL_arg3389z00_1209);
								}
								BgL_arg3387z00_1207 =
									BGl_classzd2numzd2zz__objectz00(BgL_arg3388z00_1208);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_o3243z00_1206), BgL_arg3387z00_1207);
						}
						{	/* Ast/shrinkify.scm 41 */
							BgL_objectz00_bglt BgL_auxz00_2804;

							BgL_auxz00_2804 = (BgL_objectz00_bglt) (BgL_o3243z00_1206);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2804, BFALSE);
						}
						return (obj_t) (BgL_o3243z00_1206);
					}
				else
					{	/* Ast/shrinkify.scm 40 */
						return BFALSE;
					}
			}
		}
	}



/* _shrink-variable!-def3276 */
	obj_t BGl__shrinkzd2variablez12zd2def3276z12zzast_shrinkifyz00(obj_t
		BgL_envz00_2513, obj_t BgL_variablez00_2514)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 15 */
			return
				BGl_shrinkzd2variablez12zd2def3276z12zzast_shrinkifyz00(
				(BgL_variablez00_bglt) (BgL_variablez00_2514));
		}
	}



/* shrink-node! */
	obj_t BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(BgL_nodez00_bglt
		BgL_nodez00_4)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 46 */
			{	/* Ast/shrinkify.scm 46 */
				obj_t BgL_method3279z00_1560;

				{	/* Ast/shrinkify.scm 46 */
					BgL_objectz00_bglt BgL_objz00_1561;

					BgL_objz00_1561 = (BgL_objectz00_bglt) (BgL_nodez00_4);
					{	/* Ast/shrinkify.scm 46 */
						long BgL_objzd2classzd2numz00_1562;

						BgL_objzd2classzd2numz00_1562 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1561);
						{	/* Ast/shrinkify.scm 46 */
							obj_t BgL_arg2643z00_1563;

							BgL_arg2643z00_1563 =
								PROCEDURE_REF(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
								(int) (((long) 1)));
							{	/* Ast/shrinkify.scm 46 */
								obj_t BgL_arrayz00_1565;

								int BgL_offsetz00_1566;

								BgL_arrayz00_1565 = BgL_arg2643z00_1563;
								BgL_offsetz00_1566 = (int) (BgL_objzd2classzd2numz00_1562);
								{	/* Ast/shrinkify.scm 46 */
									long BgL_offsetz00_1567;

									BgL_offsetz00_1567 =
										((long) (BgL_offsetz00_1566) - OBJECT_TYPE);
									{	/* Ast/shrinkify.scm 46 */
										long BgL_modz00_1568;

										{	/* Ast/shrinkify.scm 46 */
											int BgL_arg2645z00_1569;

											BgL_arg2645z00_1569 = (int) (((long) 16));
											{	/* Ast/shrinkify.scm 46 */
												long BgL_auxz00_2818;

												BgL_auxz00_2818 = (long) (BgL_arg2645z00_1569);
												BgL_modz00_1568 =
													(BgL_offsetz00_1567 / BgL_auxz00_2818);
										}}
										{	/* Ast/shrinkify.scm 46 */
											long BgL_restz00_1570;

											{	/* Ast/shrinkify.scm 46 */
												int BgL_arg2644z00_1571;

												BgL_arg2644z00_1571 = (int) (((long) 16));
												{	/* Ast/shrinkify.scm 46 */
													long BgL_auxz00_2822;

													BgL_auxz00_2822 = (long) (BgL_arg2644z00_1571);
													BgL_restz00_1570 =
														(BgL_offsetz00_1567 % BgL_auxz00_2822);
											}}
											{	/* Ast/shrinkify.scm 46 */

												BgL_method3279z00_1560 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1565,
														(int) (BgL_modz00_1568)), (int) (BgL_restz00_1570));
				}}}}}}}}
				{	/* Ast/shrinkify.scm 46 */
					obj_t BgL_xz00_2579;

					BgL_xz00_2579 =
						PROCEDURE_ENTRY(BgL_method3279z00_1560) (BgL_method3279z00_1560,
						(obj_t) (BgL_nodez00_4), BEOA);
					return BUNSPEC;
				}
			}
		}
	}



/* _shrink-node! */
	obj_t BGl__shrinkzd2nodez12zc0zzast_shrinkifyz00(obj_t BgL_envz00_2511,
		obj_t BgL_nodez00_2512)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 46 */
			return
				BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(BgL_nodez00_bglt) (BgL_nodez00_2512));
		}
	}



/* shrink-node!-default3278 */
	obj_t BGl_shrinkzd2nodez12zd2default3278z12zzast_shrinkifyz00(BgL_nodez00_bglt
		BgL_nodez00_5)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 15 */
			{	/* Ast/shrinkify.scm 15 */
				obj_t BgL_xz00_2580;

				BgL_xz00_2580 =
					BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
					BGl_string3595z00zzast_shrinkifyz00, (obj_t) (BgL_nodez00_5));
				return BUNSPEC;
			}
		}
	}



/* _shrink-node!-default3278 */
	obj_t BGl__shrinkzd2nodez12zd2default3278z12zzast_shrinkifyz00(obj_t
		BgL_envz00_2515, obj_t BgL_nodez00_2516)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 15 */
			return
				BGl_shrinkzd2nodez12zd2default3278z12zzast_shrinkifyz00(
				(BgL_nodez00_bglt) (BgL_nodez00_2516));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_shrinkifyz00()
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_atomz00zzast_nodez00, BGl_proc3596z00zzast_shrinkifyz00,
				BGl_string3594z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_varz00zzast_nodez00, BGl_proc3597z00zzast_shrinkifyz00,
				BGl_string3594z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_kwotez00zzast_nodez00, BGl_proc3598z00zzast_shrinkifyz00,
				BGl_string3594z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_sequencez00zzast_nodez00, BGl_proc3599z00zzast_shrinkifyz00,
				BGl_string3594z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_appz00zzast_nodez00, BGl_proc3600z00zzast_shrinkifyz00,
				BGl_string3594z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3601z00zzast_shrinkifyz00,
				BGl_string3594z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_funcallz00zzast_nodez00, BGl_proc3602z00zzast_shrinkifyz00,
				BGl_string3594z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_externz00zzast_nodez00, BGl_proc3603z00zzast_shrinkifyz00,
				BGl_string3594z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_castz00zzast_nodez00, BGl_proc3604z00zzast_shrinkifyz00,
				BGl_string3594z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_setqz00zzast_nodez00, BGl_proc3605z00zzast_shrinkifyz00,
				BGl_string3594z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3606z00zzast_shrinkifyz00,
				BGl_string3594z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_failz00zzast_nodez00, BGl_proc3607z00zzast_shrinkifyz00,
				BGl_string3594z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_selectz00zzast_nodez00, BGl_proc3608z00zzast_shrinkifyz00,
				BGl_string3594z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3609z00zzast_shrinkifyz00,
				BGl_string3594z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3610z00zzast_shrinkifyz00,
				BGl_string3594z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3611z00zzast_shrinkifyz00,
				BGl_string3594z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3612z00zzast_shrinkifyz00,
				BGl_string3594z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3613z00zzast_shrinkifyz00,
				BGl_string3594z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3614z00zzast_shrinkifyz00,
				BGl_string3594z00zzast_shrinkifyz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3615z00zzast_shrinkifyz00,
				BGl_string3594z00zzast_shrinkifyz00);
		}
	}



/* shrink-node!-jump-ex3319 */
	obj_t BGl_shrinkzd2nodez12zd2jumpzd2ex3319zc0zzast_shrinkifyz00(obj_t
		BgL_envz00_2537, obj_t BgL_nodez00_2538)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 213 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1407;

				BgL_nodez00_1407 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2538);
				{	/* Ast/shrinkify.scm 214 */
					BgL_nodez00_bglt BgL_arg3485z00_1410;

					BgL_arg3485z00_1410 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1407))->
						BgL_exitz00);
					{	/* Ast/shrinkify.scm 214 */
						obj_t BgL_res3589z00_2478;

						{	/* Ast/shrinkify.scm 214 */
							obj_t BgL_method3279z00_2453;

							{	/* Ast/shrinkify.scm 214 */
								BgL_objectz00_bglt BgL_objz00_2454;

								BgL_objz00_2454 = (BgL_objectz00_bglt) (BgL_arg3485z00_1410);
								{	/* Ast/shrinkify.scm 214 */
									long BgL_objzd2classzd2numz00_2455;

									BgL_objzd2classzd2numz00_2455 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2454);
									{	/* Ast/shrinkify.scm 214 */
										obj_t BgL_arg2643z00_2456;

										BgL_arg2643z00_2456 =
											PROCEDURE_REF
											(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
											(int) (((long) 1)));
										{	/* Ast/shrinkify.scm 214 */
											obj_t BgL_arrayz00_2458;

											int BgL_offsetz00_2459;

											BgL_arrayz00_2458 = BgL_arg2643z00_2456;
											BgL_offsetz00_2459 =
												(int) (BgL_objzd2classzd2numz00_2455);
											{	/* Ast/shrinkify.scm 214 */
												long BgL_offsetz00_2460;

												BgL_offsetz00_2460 =
													((long) (BgL_offsetz00_2459) - OBJECT_TYPE);
												{	/* Ast/shrinkify.scm 214 */
													long BgL_modz00_2461;

													{	/* Ast/shrinkify.scm 214 */
														int BgL_arg2645z00_2462;

														BgL_arg2645z00_2462 = (int) (((long) 16));
														{	/* Ast/shrinkify.scm 214 */
															long BgL_auxz00_2868;

															BgL_auxz00_2868 = (long) (BgL_arg2645z00_2462);
															BgL_modz00_2461 =
																(BgL_offsetz00_2460 / BgL_auxz00_2868);
													}}
													{	/* Ast/shrinkify.scm 214 */
														long BgL_restz00_2463;

														{	/* Ast/shrinkify.scm 214 */
															int BgL_arg2644z00_2464;

															BgL_arg2644z00_2464 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 214 */
																long BgL_auxz00_2872;

																BgL_auxz00_2872 = (long) (BgL_arg2644z00_2464);
																BgL_restz00_2463 =
																	(BgL_offsetz00_2460 % BgL_auxz00_2872);
														}}
														{	/* Ast/shrinkify.scm 214 */

															BgL_method3279z00_2453 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2458,
																	(int) (BgL_modz00_2461)),
																(int) (BgL_restz00_2463));
							}}}}}}}}
							{	/* Ast/shrinkify.scm 214 */
								obj_t BgL_xz00_2581;

								BgL_xz00_2581 =
									PROCEDURE_ENTRY(BgL_method3279z00_2453)
									(BgL_method3279z00_2453, (obj_t) (BgL_arg3485z00_1410), BEOA);
								BgL_res3589z00_2478 = BUNSPEC;
						}} BgL_res3589z00_2478;
				}}
				{	/* Ast/shrinkify.scm 215 */
					BgL_nodez00_bglt BgL_arg3486z00_1411;

					BgL_arg3486z00_1411 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1407))->
						BgL_valuez00);
					{	/* Ast/shrinkify.scm 215 */
						obj_t BgL_res3592z00_2506;

						{	/* Ast/shrinkify.scm 215 */
							obj_t BgL_method3279z00_2481;

							{	/* Ast/shrinkify.scm 215 */
								BgL_objectz00_bglt BgL_objz00_2482;

								BgL_objz00_2482 = (BgL_objectz00_bglt) (BgL_arg3486z00_1411);
								{	/* Ast/shrinkify.scm 215 */
									long BgL_objzd2classzd2numz00_2483;

									BgL_objzd2classzd2numz00_2483 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2482);
									{	/* Ast/shrinkify.scm 215 */
										obj_t BgL_arg2643z00_2484;

										BgL_arg2643z00_2484 =
											PROCEDURE_REF
											(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
											(int) (((long) 1)));
										{	/* Ast/shrinkify.scm 215 */
											obj_t BgL_arrayz00_2486;

											int BgL_offsetz00_2487;

											BgL_arrayz00_2486 = BgL_arg2643z00_2484;
											BgL_offsetz00_2487 =
												(int) (BgL_objzd2classzd2numz00_2483);
											{	/* Ast/shrinkify.scm 215 */
												long BgL_offsetz00_2488;

												BgL_offsetz00_2488 =
													((long) (BgL_offsetz00_2487) - OBJECT_TYPE);
												{	/* Ast/shrinkify.scm 215 */
													long BgL_modz00_2489;

													{	/* Ast/shrinkify.scm 215 */
														int BgL_arg2645z00_2490;

														BgL_arg2645z00_2490 = (int) (((long) 16));
														{	/* Ast/shrinkify.scm 215 */
															long BgL_auxz00_2891;

															BgL_auxz00_2891 = (long) (BgL_arg2645z00_2490);
															BgL_modz00_2489 =
																(BgL_offsetz00_2488 / BgL_auxz00_2891);
													}}
													{	/* Ast/shrinkify.scm 215 */
														long BgL_restz00_2491;

														{	/* Ast/shrinkify.scm 215 */
															int BgL_arg2644z00_2492;

															BgL_arg2644z00_2492 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 215 */
																long BgL_auxz00_2895;

																BgL_auxz00_2895 = (long) (BgL_arg2644z00_2492);
																BgL_restz00_2491 =
																	(BgL_offsetz00_2488 % BgL_auxz00_2895);
														}}
														{	/* Ast/shrinkify.scm 215 */

															BgL_method3279z00_2481 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2486,
																	(int) (BgL_modz00_2489)),
																(int) (BgL_restz00_2491));
							}}}}}}}}
							{	/* Ast/shrinkify.scm 215 */
								obj_t BgL_xz00_2582;

								BgL_xz00_2582 =
									PROCEDURE_ENTRY(BgL_method3279z00_2481)
									(BgL_method3279z00_2481, (obj_t) (BgL_arg3486z00_1411), BEOA);
								BgL_res3592z00_2506 = BUNSPEC;
						}} BgL_res3592z00_2506;
				}}
				return BUNSPEC;
			}
		}
	}



/* shrink-node!-set-ex-3317 */
	obj_t BGl_shrinkzd2nodez12zd2setzd2exzd23317z12zzast_shrinkifyz00(obj_t
		BgL_envz00_2539, obj_t BgL_nodez00_2540)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 204 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1399;

				BgL_nodez00_1399 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2540);
				{	/* Ast/shrinkify.scm 206 */
					BgL_varz00_bglt BgL_arg3482z00_1403;

					BgL_arg3482z00_1403 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1399))->BgL_varz00);
					{	/* Ast/shrinkify.scm 206 */
						obj_t BgL_res3583z00_2422;

						{	/* Ast/shrinkify.scm 206 */
							BgL_nodez00_bglt BgL_nodez00_2396;

							BgL_nodez00_2396 = (BgL_nodez00_bglt) (BgL_arg3482z00_1403);
							{	/* Ast/shrinkify.scm 206 */
								obj_t BgL_method3279z00_2397;

								{	/* Ast/shrinkify.scm 206 */
									BgL_objectz00_bglt BgL_objz00_2398;

									BgL_objz00_2398 = (BgL_objectz00_bglt) (BgL_nodez00_2396);
									{	/* Ast/shrinkify.scm 206 */
										long BgL_objzd2classzd2numz00_2399;

										BgL_objzd2classzd2numz00_2399 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2398);
										{	/* Ast/shrinkify.scm 206 */
											obj_t BgL_arg2643z00_2400;

											BgL_arg2643z00_2400 =
												PROCEDURE_REF
												(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
												(int) (((long) 1)));
											{	/* Ast/shrinkify.scm 206 */
												obj_t BgL_arrayz00_2402;

												int BgL_offsetz00_2403;

												BgL_arrayz00_2402 = BgL_arg2643z00_2400;
												BgL_offsetz00_2403 =
													(int) (BgL_objzd2classzd2numz00_2399);
												{	/* Ast/shrinkify.scm 206 */
													long BgL_offsetz00_2404;

													BgL_offsetz00_2404 =
														((long) (BgL_offsetz00_2403) - OBJECT_TYPE);
													{	/* Ast/shrinkify.scm 206 */
														long BgL_modz00_2405;

														{	/* Ast/shrinkify.scm 206 */
															int BgL_arg2645z00_2406;

															BgL_arg2645z00_2406 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 206 */
																long BgL_auxz00_2916;

																BgL_auxz00_2916 = (long) (BgL_arg2645z00_2406);
																BgL_modz00_2405 =
																	(BgL_offsetz00_2404 / BgL_auxz00_2916);
														}}
														{	/* Ast/shrinkify.scm 206 */
															long BgL_restz00_2407;

															{	/* Ast/shrinkify.scm 206 */
																int BgL_arg2644z00_2408;

																BgL_arg2644z00_2408 = (int) (((long) 16));
																{	/* Ast/shrinkify.scm 206 */
																	long BgL_auxz00_2920;

																	BgL_auxz00_2920 =
																		(long) (BgL_arg2644z00_2408);
																	BgL_restz00_2407 =
																		(BgL_offsetz00_2404 % BgL_auxz00_2920);
															}}
															{	/* Ast/shrinkify.scm 206 */

																BgL_method3279z00_2397 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2402,
																		(int) (BgL_modz00_2405)),
																	(int) (BgL_restz00_2407));
								}}}}}}}}
								{	/* Ast/shrinkify.scm 206 */
									obj_t BgL_xz00_2583;

									BgL_xz00_2583 =
										PROCEDURE_ENTRY(BgL_method3279z00_2397)
										(BgL_method3279z00_2397, (obj_t) (BgL_nodez00_2396), BEOA);
									BgL_res3583z00_2422 = BUNSPEC;
						}}} BgL_res3583z00_2422;
				}}
				{	/* Ast/shrinkify.scm 207 */
					BgL_nodez00_bglt BgL_arg3483z00_1404;

					BgL_arg3483z00_1404 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1399))->BgL_bodyz00);
					{	/* Ast/shrinkify.scm 207 */
						obj_t BgL_res3586z00_2450;

						{	/* Ast/shrinkify.scm 207 */
							obj_t BgL_method3279z00_2425;

							{	/* Ast/shrinkify.scm 207 */
								BgL_objectz00_bglt BgL_objz00_2426;

								BgL_objz00_2426 = (BgL_objectz00_bglt) (BgL_arg3483z00_1404);
								{	/* Ast/shrinkify.scm 207 */
									long BgL_objzd2classzd2numz00_2427;

									BgL_objzd2classzd2numz00_2427 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2426);
									{	/* Ast/shrinkify.scm 207 */
										obj_t BgL_arg2643z00_2428;

										BgL_arg2643z00_2428 =
											PROCEDURE_REF
											(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
											(int) (((long) 1)));
										{	/* Ast/shrinkify.scm 207 */
											obj_t BgL_arrayz00_2430;

											int BgL_offsetz00_2431;

											BgL_arrayz00_2430 = BgL_arg2643z00_2428;
											BgL_offsetz00_2431 =
												(int) (BgL_objzd2classzd2numz00_2427);
											{	/* Ast/shrinkify.scm 207 */
												long BgL_offsetz00_2432;

												BgL_offsetz00_2432 =
													((long) (BgL_offsetz00_2431) - OBJECT_TYPE);
												{	/* Ast/shrinkify.scm 207 */
													long BgL_modz00_2433;

													{	/* Ast/shrinkify.scm 207 */
														int BgL_arg2645z00_2434;

														BgL_arg2645z00_2434 = (int) (((long) 16));
														{	/* Ast/shrinkify.scm 207 */
															long BgL_auxz00_2939;

															BgL_auxz00_2939 = (long) (BgL_arg2645z00_2434);
															BgL_modz00_2433 =
																(BgL_offsetz00_2432 / BgL_auxz00_2939);
													}}
													{	/* Ast/shrinkify.scm 207 */
														long BgL_restz00_2435;

														{	/* Ast/shrinkify.scm 207 */
															int BgL_arg2644z00_2436;

															BgL_arg2644z00_2436 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 207 */
																long BgL_auxz00_2943;

																BgL_auxz00_2943 = (long) (BgL_arg2644z00_2436);
																BgL_restz00_2435 =
																	(BgL_offsetz00_2432 % BgL_auxz00_2943);
														}}
														{	/* Ast/shrinkify.scm 207 */

															BgL_method3279z00_2425 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2430,
																	(int) (BgL_modz00_2433)),
																(int) (BgL_restz00_2435));
							}}}}}}}}
							{	/* Ast/shrinkify.scm 207 */
								obj_t BgL_xz00_2584;

								BgL_xz00_2584 =
									PROCEDURE_ENTRY(BgL_method3279z00_2425)
									(BgL_method3279z00_2425, (obj_t) (BgL_arg3483z00_1404), BEOA);
								BgL_res3586z00_2450 = BUNSPEC;
						}} BgL_res3586z00_2450;
				}}
				return BUNSPEC;
			}
		}
	}



/* shrink-node!-let-var3315 */
	obj_t BGl_shrinkzd2nodez12zd2letzd2var3315zc0zzast_shrinkifyz00(obj_t
		BgL_envz00_2541, obj_t BgL_nodez00_2542)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 192 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1382;

				BgL_nodez00_1382 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2542);
				{	/* Ast/shrinkify.scm 194 */
					BgL_nodez00_bglt BgL_arg3474z00_1386;

					BgL_arg3474z00_1386 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1382))->BgL_bodyz00);
					{	/* Ast/shrinkify.scm 194 */
						obj_t BgL_res3575z00_2335;

						{	/* Ast/shrinkify.scm 194 */
							obj_t BgL_method3279z00_2310;

							{	/* Ast/shrinkify.scm 194 */
								BgL_objectz00_bglt BgL_objz00_2311;

								BgL_objz00_2311 = (BgL_objectz00_bglt) (BgL_arg3474z00_1386);
								{	/* Ast/shrinkify.scm 194 */
									long BgL_objzd2classzd2numz00_2312;

									BgL_objzd2classzd2numz00_2312 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2311);
									{	/* Ast/shrinkify.scm 194 */
										obj_t BgL_arg2643z00_2313;

										BgL_arg2643z00_2313 =
											PROCEDURE_REF
											(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
											(int) (((long) 1)));
										{	/* Ast/shrinkify.scm 194 */
											obj_t BgL_arrayz00_2315;

											int BgL_offsetz00_2316;

											BgL_arrayz00_2315 = BgL_arg2643z00_2313;
											BgL_offsetz00_2316 =
												(int) (BgL_objzd2classzd2numz00_2312);
											{	/* Ast/shrinkify.scm 194 */
												long BgL_offsetz00_2317;

												BgL_offsetz00_2317 =
													((long) (BgL_offsetz00_2316) - OBJECT_TYPE);
												{	/* Ast/shrinkify.scm 194 */
													long BgL_modz00_2318;

													{	/* Ast/shrinkify.scm 194 */
														int BgL_arg2645z00_2319;

														BgL_arg2645z00_2319 = (int) (((long) 16));
														{	/* Ast/shrinkify.scm 194 */
															long BgL_auxz00_2963;

															BgL_auxz00_2963 = (long) (BgL_arg2645z00_2319);
															BgL_modz00_2318 =
																(BgL_offsetz00_2317 / BgL_auxz00_2963);
													}}
													{	/* Ast/shrinkify.scm 194 */
														long BgL_restz00_2320;

														{	/* Ast/shrinkify.scm 194 */
															int BgL_arg2644z00_2321;

															BgL_arg2644z00_2321 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 194 */
																long BgL_auxz00_2967;

																BgL_auxz00_2967 = (long) (BgL_arg2644z00_2321);
																BgL_restz00_2320 =
																	(BgL_offsetz00_2317 % BgL_auxz00_2967);
														}}
														{	/* Ast/shrinkify.scm 194 */

															BgL_method3279z00_2310 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2315,
																	(int) (BgL_modz00_2318)),
																(int) (BgL_restz00_2320));
							}}}}}}}}
							{	/* Ast/shrinkify.scm 194 */
								obj_t BgL_xz00_2585;

								BgL_xz00_2585 =
									PROCEDURE_ENTRY(BgL_method3279z00_2310)
									(BgL_method3279z00_2310, (obj_t) (BgL_arg3474z00_1386), BEOA);
								BgL_res3575z00_2335 = BUNSPEC;
						}} BgL_res3575z00_2335;
				}}
				{	/* Ast/shrinkify.scm 195 */
					obj_t BgL_g3273z00_1387;

					BgL_g3273z00_1387 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1382))->BgL_bindingsz00);
					{
						obj_t BgL_l3271z00_1389;

						BgL_l3271z00_1389 = BgL_g3273z00_1387;
					BgL_zc3anonymousza33475ze3z83_1390:
						if (PAIRP(BgL_l3271z00_1389))
							{	/* Ast/shrinkify.scm 195 */
								{	/* Ast/shrinkify.scm 197 */
									obj_t BgL_bindingz00_1392;

									BgL_bindingz00_1392 = CAR(BgL_l3271z00_1389);
									{	/* Ast/shrinkify.scm 196 */
										obj_t BgL_arg3477z00_1393;

										BgL_arg3477z00_1393 = CAR(BgL_bindingz00_1392);
										{	/* Ast/shrinkify.scm 196 */
											BgL_variablez00_bglt BgL_variablez00_2340;

											BgL_variablez00_2340 =
												(BgL_variablez00_bglt) (BgL_arg3477z00_1393);
											{	/* Ast/shrinkify.scm 196 */
												obj_t BgL_method3277z00_2341;

												{	/* Ast/shrinkify.scm 196 */
													BgL_objectz00_bglt BgL_objz00_2342;

													BgL_objz00_2342 =
														(BgL_objectz00_bglt) (BgL_variablez00_2340);
													{	/* Ast/shrinkify.scm 196 */
														long BgL_objzd2classzd2numz00_2343;

														BgL_objzd2classzd2numz00_2343 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2342);
														{	/* Ast/shrinkify.scm 196 */
															obj_t BgL_arg2643z00_2344;

															BgL_arg2643z00_2344 =
																PROCEDURE_REF
																(BGl_shrinkzd2variablez12zd2envz12zzast_shrinkifyz00,
																(int) (((long) 1)));
															{	/* Ast/shrinkify.scm 196 */
																obj_t BgL_arrayz00_2346;

																int BgL_offsetz00_2347;

																BgL_arrayz00_2346 = BgL_arg2643z00_2344;
																BgL_offsetz00_2347 =
																	(int) (BgL_objzd2classzd2numz00_2343);
																{	/* Ast/shrinkify.scm 196 */
																	long BgL_offsetz00_2348;

																	BgL_offsetz00_2348 =
																		((long) (BgL_offsetz00_2347) - OBJECT_TYPE);
																	{	/* Ast/shrinkify.scm 196 */
																		long BgL_modz00_2349;

																		{	/* Ast/shrinkify.scm 196 */
																			int BgL_arg2645z00_2350;

																			BgL_arg2645z00_2350 = (int) (((long) 16));
																			{	/* Ast/shrinkify.scm 196 */
																				long BgL_auxz00_2991;

																				BgL_auxz00_2991 =
																					(long) (BgL_arg2645z00_2350);
																				BgL_modz00_2349 =
																					(BgL_offsetz00_2348 /
																					BgL_auxz00_2991);
																		}}
																		{	/* Ast/shrinkify.scm 196 */
																			long BgL_restz00_2351;

																			{	/* Ast/shrinkify.scm 196 */
																				int BgL_arg2644z00_2352;

																				BgL_arg2644z00_2352 =
																					(int) (((long) 16));
																				{	/* Ast/shrinkify.scm 196 */
																					long BgL_auxz00_2995;

																					BgL_auxz00_2995 =
																						(long) (BgL_arg2644z00_2352);
																					BgL_restz00_2351 =
																						(BgL_offsetz00_2348 %
																						BgL_auxz00_2995);
																			}}
																			{	/* Ast/shrinkify.scm 196 */

																				BgL_method3277z00_2341 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2346,
																						(int) (BgL_modz00_2349)),
																					(int) (BgL_restz00_2351));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method3277z00_2341)
													(BgL_method3277z00_2341,
													(obj_t) (BgL_variablez00_2340), BEOA);
									}}}
									{	/* Ast/shrinkify.scm 197 */
										obj_t BgL_arg3478z00_1394;

										BgL_arg3478z00_1394 = CDR(BgL_bindingz00_1392);
										{	/* Ast/shrinkify.scm 197 */
											obj_t BgL_res3580z00_2393;

											{	/* Ast/shrinkify.scm 197 */
												BgL_nodez00_bglt BgL_nodez00_2367;

												BgL_nodez00_2367 =
													(BgL_nodez00_bglt) (BgL_arg3478z00_1394);
												{	/* Ast/shrinkify.scm 197 */
													obj_t BgL_method3279z00_2368;

													{	/* Ast/shrinkify.scm 197 */
														BgL_objectz00_bglt BgL_objz00_2369;

														BgL_objz00_2369 =
															(BgL_objectz00_bglt) (BgL_nodez00_2367);
														{	/* Ast/shrinkify.scm 197 */
															long BgL_objzd2classzd2numz00_2370;

															BgL_objzd2classzd2numz00_2370 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2369);
															{	/* Ast/shrinkify.scm 197 */
																obj_t BgL_arg2643z00_2371;

																BgL_arg2643z00_2371 =
																	PROCEDURE_REF
																	(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
																	(int) (((long) 1)));
																{	/* Ast/shrinkify.scm 197 */
																	obj_t BgL_arrayz00_2373;

																	int BgL_offsetz00_2374;

																	BgL_arrayz00_2373 = BgL_arg2643z00_2371;
																	BgL_offsetz00_2374 =
																		(int) (BgL_objzd2classzd2numz00_2370);
																	{	/* Ast/shrinkify.scm 197 */
																		long BgL_offsetz00_2375;

																		BgL_offsetz00_2375 =
																			(
																			(long) (BgL_offsetz00_2374) -
																			OBJECT_TYPE);
																		{	/* Ast/shrinkify.scm 197 */
																			long BgL_modz00_2376;

																			{	/* Ast/shrinkify.scm 197 */
																				int BgL_arg2645z00_2377;

																				BgL_arg2645z00_2377 =
																					(int) (((long) 16));
																				{	/* Ast/shrinkify.scm 197 */
																					long BgL_auxz00_3015;

																					BgL_auxz00_3015 =
																						(long) (BgL_arg2645z00_2377);
																					BgL_modz00_2376 =
																						(BgL_offsetz00_2375 /
																						BgL_auxz00_3015);
																			}}
																			{	/* Ast/shrinkify.scm 197 */
																				long BgL_restz00_2378;

																				{	/* Ast/shrinkify.scm 197 */
																					int BgL_arg2644z00_2379;

																					BgL_arg2644z00_2379 =
																						(int) (((long) 16));
																					{	/* Ast/shrinkify.scm 197 */
																						long BgL_auxz00_3019;

																						BgL_auxz00_3019 =
																							(long) (BgL_arg2644z00_2379);
																						BgL_restz00_2378 =
																							(BgL_offsetz00_2375 %
																							BgL_auxz00_3019);
																				}}
																				{	/* Ast/shrinkify.scm 197 */

																					BgL_method3279z00_2368 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2373,
																							(int) (BgL_modz00_2376)),
																						(int) (BgL_restz00_2378));
													}}}}}}}}
													{	/* Ast/shrinkify.scm 197 */
														obj_t BgL_xz00_2586;

														BgL_xz00_2586 =
															PROCEDURE_ENTRY(BgL_method3279z00_2368)
															(BgL_method3279z00_2368,
															(obj_t) (BgL_nodez00_2367), BEOA);
														BgL_res3580z00_2393 = BUNSPEC;
											}}} BgL_res3580z00_2393;
								}}}
								{
									obj_t BgL_l3271z00_3029;

									BgL_l3271z00_3029 = CDR(BgL_l3271z00_1389);
									BgL_l3271z00_1389 = BgL_l3271z00_3029;
									goto BgL_zc3anonymousza33475ze3z83_1390;
								}
							}
						else
							{	/* Ast/shrinkify.scm 195 */
								((bool_t) 1);
							}
					}
				}
				return BUNSPEC;
			}
		}
	}



/* shrink-node!-let-fun3313 */
	obj_t BGl_shrinkzd2nodez12zd2letzd2fun3313zc0zzast_shrinkifyz00(obj_t
		BgL_envz00_2543, obj_t BgL_nodez00_2544)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 178 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1357;

				BgL_nodez00_1357 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2544);
				{	/* Ast/shrinkify.scm 180 */
					BgL_nodez00_bglt BgL_arg3464z00_1361;

					BgL_arg3464z00_1361 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1357))->BgL_bodyz00);
					{	/* Ast/shrinkify.scm 180 */
						obj_t BgL_res3565z00_2218;

						{	/* Ast/shrinkify.scm 180 */
							obj_t BgL_method3279z00_2193;

							{	/* Ast/shrinkify.scm 180 */
								BgL_objectz00_bglt BgL_objz00_2194;

								BgL_objz00_2194 = (BgL_objectz00_bglt) (BgL_arg3464z00_1361);
								{	/* Ast/shrinkify.scm 180 */
									long BgL_objzd2classzd2numz00_2195;

									BgL_objzd2classzd2numz00_2195 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2194);
									{	/* Ast/shrinkify.scm 180 */
										obj_t BgL_arg2643z00_2196;

										BgL_arg2643z00_2196 =
											PROCEDURE_REF
											(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
											(int) (((long) 1)));
										{	/* Ast/shrinkify.scm 180 */
											obj_t BgL_arrayz00_2198;

											int BgL_offsetz00_2199;

											BgL_arrayz00_2198 = BgL_arg2643z00_2196;
											BgL_offsetz00_2199 =
												(int) (BgL_objzd2classzd2numz00_2195);
											{	/* Ast/shrinkify.scm 180 */
												long BgL_offsetz00_2200;

												BgL_offsetz00_2200 =
													((long) (BgL_offsetz00_2199) - OBJECT_TYPE);
												{	/* Ast/shrinkify.scm 180 */
													long BgL_modz00_2201;

													{	/* Ast/shrinkify.scm 180 */
														int BgL_arg2645z00_2202;

														BgL_arg2645z00_2202 = (int) (((long) 16));
														{	/* Ast/shrinkify.scm 180 */
															long BgL_auxz00_3041;

															BgL_auxz00_3041 = (long) (BgL_arg2645z00_2202);
															BgL_modz00_2201 =
																(BgL_offsetz00_2200 / BgL_auxz00_3041);
													}}
													{	/* Ast/shrinkify.scm 180 */
														long BgL_restz00_2203;

														{	/* Ast/shrinkify.scm 180 */
															int BgL_arg2644z00_2204;

															BgL_arg2644z00_2204 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 180 */
																long BgL_auxz00_3045;

																BgL_auxz00_3045 = (long) (BgL_arg2644z00_2204);
																BgL_restz00_2203 =
																	(BgL_offsetz00_2200 % BgL_auxz00_3045);
														}}
														{	/* Ast/shrinkify.scm 180 */

															BgL_method3279z00_2193 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2198,
																	(int) (BgL_modz00_2201)),
																(int) (BgL_restz00_2203));
							}}}}}}}}
							{	/* Ast/shrinkify.scm 180 */
								obj_t BgL_xz00_2587;

								BgL_xz00_2587 =
									PROCEDURE_ENTRY(BgL_method3279z00_2193)
									(BgL_method3279z00_2193, (obj_t) (BgL_arg3464z00_1361), BEOA);
								BgL_res3565z00_2218 = BUNSPEC;
						}} BgL_res3565z00_2218;
				}}
				{	/* Ast/shrinkify.scm 181 */
					obj_t BgL_g3270z00_1362;

					BgL_g3270z00_1362 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1357))->BgL_localsz00);
					{
						obj_t BgL_l3268z00_1364;

						BgL_l3268z00_1364 = BgL_g3270z00_1362;
					BgL_zc3anonymousza33465ze3z83_1365:
						if (PAIRP(BgL_l3268z00_1364))
							{	/* Ast/shrinkify.scm 181 */
								{	/* Ast/shrinkify.scm 182 */
									obj_t BgL_localz00_1367;

									BgL_localz00_1367 = CAR(BgL_l3268z00_1364);
									{	/* Ast/shrinkify.scm 182 */
										BgL_valuez00_bglt BgL_sfunz00_1368;

										{
											BgL_variablez00_bglt BgL_auxz00_3059;

											BgL_auxz00_3059 =
												(BgL_variablez00_bglt) (BgL_localz00_1367);
											BgL_sfunz00_1368 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_3059))->
												BgL_valuez00);
										}
										{	/* Ast/shrinkify.scm 183 */
											BgL_variablez00_bglt BgL_variablez00_2223;

											BgL_variablez00_2223 =
												(BgL_variablez00_bglt) (BgL_localz00_1367);
											{	/* Ast/shrinkify.scm 183 */
												obj_t BgL_method3277z00_2224;

												{	/* Ast/shrinkify.scm 183 */
													BgL_objectz00_bglt BgL_objz00_2225;

													BgL_objz00_2225 =
														(BgL_objectz00_bglt) (BgL_variablez00_2223);
													{	/* Ast/shrinkify.scm 183 */
														long BgL_objzd2classzd2numz00_2226;

														BgL_objzd2classzd2numz00_2226 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2225);
														{	/* Ast/shrinkify.scm 183 */
															obj_t BgL_arg2643z00_2227;

															BgL_arg2643z00_2227 =
																PROCEDURE_REF
																(BGl_shrinkzd2variablez12zd2envz12zzast_shrinkifyz00,
																(int) (((long) 1)));
															{	/* Ast/shrinkify.scm 183 */
																obj_t BgL_arrayz00_2229;

																int BgL_offsetz00_2230;

																BgL_arrayz00_2229 = BgL_arg2643z00_2227;
																BgL_offsetz00_2230 =
																	(int) (BgL_objzd2classzd2numz00_2226);
																{	/* Ast/shrinkify.scm 183 */
																	long BgL_offsetz00_2231;

																	BgL_offsetz00_2231 =
																		((long) (BgL_offsetz00_2230) - OBJECT_TYPE);
																	{	/* Ast/shrinkify.scm 183 */
																		long BgL_modz00_2232;

																		{	/* Ast/shrinkify.scm 183 */
																			int BgL_arg2645z00_2233;

																			BgL_arg2645z00_2233 = (int) (((long) 16));
																			{	/* Ast/shrinkify.scm 183 */
																				long BgL_auxz00_3071;

																				BgL_auxz00_3071 =
																					(long) (BgL_arg2645z00_2233);
																				BgL_modz00_2232 =
																					(BgL_offsetz00_2231 /
																					BgL_auxz00_3071);
																		}}
																		{	/* Ast/shrinkify.scm 183 */
																			long BgL_restz00_2234;

																			{	/* Ast/shrinkify.scm 183 */
																				int BgL_arg2644z00_2235;

																				BgL_arg2644z00_2235 =
																					(int) (((long) 16));
																				{	/* Ast/shrinkify.scm 183 */
																					long BgL_auxz00_3075;

																					BgL_auxz00_3075 =
																						(long) (BgL_arg2644z00_2235);
																					BgL_restz00_2234 =
																						(BgL_offsetz00_2231 %
																						BgL_auxz00_3075);
																			}}
																			{	/* Ast/shrinkify.scm 183 */

																				BgL_method3277z00_2224 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2229,
																						(int) (BgL_modz00_2232)),
																					(int) (BgL_restz00_2234));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method3277z00_2224)
													(BgL_method3277z00_2224,
													(obj_t) (BgL_variablez00_2223), BEOA);
										}}
										{	/* Ast/shrinkify.scm 184 */
											obj_t BgL_g3267z00_1369;

											{
												BgL_sfunz00_bglt BgL_auxz00_3085;

												BgL_auxz00_3085 = (BgL_sfunz00_bglt) (BgL_sfunz00_1368);
												BgL_g3267z00_1369 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3085))->
													BgL_argsz00);
											}
											{
												obj_t BgL_l3265z00_1371;

												BgL_l3265z00_1371 = BgL_g3267z00_1369;
											BgL_zc3anonymousza33467ze3z83_1372:
												if (PAIRP(BgL_l3265z00_1371))
													{	/* Ast/shrinkify.scm 184 */
														{	/* Ast/shrinkify.scm 184 */
															obj_t BgL_arg3469z00_1374;

															BgL_arg3469z00_1374 = CAR(BgL_l3265z00_1371);
															{	/* Ast/shrinkify.scm 184 */
																BgL_variablez00_bglt BgL_variablez00_2252;

																BgL_variablez00_2252 =
																	(BgL_variablez00_bglt) (BgL_arg3469z00_1374);
																{	/* Ast/shrinkify.scm 184 */
																	obj_t BgL_method3277z00_2253;

																	{	/* Ast/shrinkify.scm 184 */
																		BgL_objectz00_bglt BgL_objz00_2254;

																		BgL_objz00_2254 =
																			(BgL_objectz00_bglt)
																			(BgL_variablez00_2252);
																		{	/* Ast/shrinkify.scm 184 */
																			long BgL_objzd2classzd2numz00_2255;

																			BgL_objzd2classzd2numz00_2255 =
																				BGL_OBJECT_CLASS_NUM(BgL_objz00_2254);
																			{	/* Ast/shrinkify.scm 184 */
																				obj_t BgL_arg2643z00_2256;

																				BgL_arg2643z00_2256 =
																					PROCEDURE_REF
																					(BGl_shrinkzd2variablez12zd2envz12zzast_shrinkifyz00,
																					(int) (((long) 1)));
																				{	/* Ast/shrinkify.scm 184 */
																					obj_t BgL_arrayz00_2258;

																					int BgL_offsetz00_2259;

																					BgL_arrayz00_2258 =
																						BgL_arg2643z00_2256;
																					BgL_offsetz00_2259 =
																						(int)
																						(BgL_objzd2classzd2numz00_2255);
																					{	/* Ast/shrinkify.scm 184 */
																						long BgL_offsetz00_2260;

																						BgL_offsetz00_2260 =
																							(
																							(long) (BgL_offsetz00_2259) -
																							OBJECT_TYPE);
																						{	/* Ast/shrinkify.scm 184 */
																							long BgL_modz00_2261;

																							{	/* Ast/shrinkify.scm 184 */
																								int BgL_arg2645z00_2262;

																								BgL_arg2645z00_2262 =
																									(int) (((long) 16));
																								{	/* Ast/shrinkify.scm 184 */
																									long BgL_auxz00_3100;

																									BgL_auxz00_3100 =
																										(long)
																										(BgL_arg2645z00_2262);
																									BgL_modz00_2261 =
																										(BgL_offsetz00_2260 /
																										BgL_auxz00_3100);
																							}}
																							{	/* Ast/shrinkify.scm 184 */
																								long BgL_restz00_2263;

																								{	/* Ast/shrinkify.scm 184 */
																									int BgL_arg2644z00_2264;

																									BgL_arg2644z00_2264 =
																										(int) (((long) 16));
																									{	/* Ast/shrinkify.scm 184 */
																										long BgL_auxz00_3104;

																										BgL_auxz00_3104 =
																											(long)
																											(BgL_arg2644z00_2264);
																										BgL_restz00_2263 =
																											(BgL_offsetz00_2260 %
																											BgL_auxz00_3104);
																								}}
																								{	/* Ast/shrinkify.scm 184 */

																									BgL_method3277z00_2253 =
																										VECTOR_REF(VECTOR_REF
																										(BgL_arrayz00_2258,
																											(int) (BgL_modz00_2261)),
																										(int) (BgL_restz00_2263));
																	}}}}}}}}
																	PROCEDURE_ENTRY(BgL_method3277z00_2253)
																		(BgL_method3277z00_2253,
																		(obj_t) (BgL_variablez00_2252), BEOA);
														}}}
														{
															obj_t BgL_l3265z00_3114;

															BgL_l3265z00_3114 = CDR(BgL_l3265z00_1371);
															BgL_l3265z00_1371 = BgL_l3265z00_3114;
															goto BgL_zc3anonymousza33467ze3z83_1372;
														}
													}
												else
													{	/* Ast/shrinkify.scm 184 */
														((bool_t) 1);
													}
											}
										}
										{	/* Ast/shrinkify.scm 185 */
											obj_t BgL_arg3471z00_1377;

											{
												BgL_sfunz00_bglt BgL_auxz00_3116;

												BgL_auxz00_3116 = (BgL_sfunz00_bglt) (BgL_sfunz00_1368);
												BgL_arg3471z00_1377 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3116))->
													BgL_bodyz00);
											}
											{	/* Ast/shrinkify.scm 185 */
												obj_t BgL_res3572z00_2306;

												{	/* Ast/shrinkify.scm 185 */
													BgL_nodez00_bglt BgL_nodez00_2280;

													BgL_nodez00_2280 =
														(BgL_nodez00_bglt) (BgL_arg3471z00_1377);
													{	/* Ast/shrinkify.scm 185 */
														obj_t BgL_method3279z00_2281;

														{	/* Ast/shrinkify.scm 185 */
															BgL_objectz00_bglt BgL_objz00_2282;

															BgL_objz00_2282 =
																(BgL_objectz00_bglt) (BgL_nodez00_2280);
															{	/* Ast/shrinkify.scm 185 */
																long BgL_objzd2classzd2numz00_2283;

																BgL_objzd2classzd2numz00_2283 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2282);
																{	/* Ast/shrinkify.scm 185 */
																	obj_t BgL_arg2643z00_2284;

																	BgL_arg2643z00_2284 =
																		PROCEDURE_REF
																		(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
																		(int) (((long) 1)));
																	{	/* Ast/shrinkify.scm 185 */
																		obj_t BgL_arrayz00_2286;

																		int BgL_offsetz00_2287;

																		BgL_arrayz00_2286 = BgL_arg2643z00_2284;
																		BgL_offsetz00_2287 =
																			(int) (BgL_objzd2classzd2numz00_2283);
																		{	/* Ast/shrinkify.scm 185 */
																			long BgL_offsetz00_2288;

																			BgL_offsetz00_2288 =
																				(
																				(long) (BgL_offsetz00_2287) -
																				OBJECT_TYPE);
																			{	/* Ast/shrinkify.scm 185 */
																				long BgL_modz00_2289;

																				{	/* Ast/shrinkify.scm 185 */
																					int BgL_arg2645z00_2290;

																					BgL_arg2645z00_2290 =
																						(int) (((long) 16));
																					{	/* Ast/shrinkify.scm 185 */
																						long BgL_auxz00_3128;

																						BgL_auxz00_3128 =
																							(long) (BgL_arg2645z00_2290);
																						BgL_modz00_2289 =
																							(BgL_offsetz00_2288 /
																							BgL_auxz00_3128);
																				}}
																				{	/* Ast/shrinkify.scm 185 */
																					long BgL_restz00_2291;

																					{	/* Ast/shrinkify.scm 185 */
																						int BgL_arg2644z00_2292;

																						BgL_arg2644z00_2292 =
																							(int) (((long) 16));
																						{	/* Ast/shrinkify.scm 185 */
																							long BgL_auxz00_3132;

																							BgL_auxz00_3132 =
																								(long) (BgL_arg2644z00_2292);
																							BgL_restz00_2291 =
																								(BgL_offsetz00_2288 %
																								BgL_auxz00_3132);
																					}}
																					{	/* Ast/shrinkify.scm 185 */

																						BgL_method3279z00_2281 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2286,
																								(int) (BgL_modz00_2289)),
																							(int) (BgL_restz00_2291));
														}}}}}}}}
														{	/* Ast/shrinkify.scm 185 */
															obj_t BgL_xz00_2588;

															BgL_xz00_2588 =
																PROCEDURE_ENTRY(BgL_method3279z00_2281)
																(BgL_method3279z00_2281,
																(obj_t) (BgL_nodez00_2280), BEOA);
															BgL_res3572z00_2306 = BUNSPEC;
												}}} BgL_res3572z00_2306;
								}}}}
								{
									obj_t BgL_l3268z00_3142;

									BgL_l3268z00_3142 = CDR(BgL_l3268z00_1364);
									BgL_l3268z00_1364 = BgL_l3268z00_3142;
									goto BgL_zc3anonymousza33465ze3z83_1365;
								}
							}
						else
							{	/* Ast/shrinkify.scm 181 */
								((bool_t) 1);
							}
					}
				}
				return BUNSPEC;
			}
		}
	}



/* shrink-node!-box-set3311 */
	obj_t BGl_shrinkzd2nodez12zd2boxzd2set3311zc0zzast_shrinkifyz00(obj_t
		BgL_envz00_2545, obj_t BgL_nodez00_2546)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 169 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1345;

				BgL_nodez00_1345 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2546);
				{	/* Ast/shrinkify.scm 170 */
					bool_t BgL_testz00_3145;

					{	/* Ast/shrinkify.scm 170 */
						bool_t BgL_testz00_3146;

						{	/* Ast/shrinkify.scm 170 */
							obj_t BgL_auxz00_3147;

							{	/* Ast/shrinkify.scm 170 */
								BgL_objectz00_bglt BgL_auxz00_3148;

								BgL_auxz00_3148 = (BgL_objectz00_bglt) (BgL_nodez00_1345);
								BgL_auxz00_3147 = BGL_OBJECT_WIDENING(BgL_auxz00_3148);
							}
							BgL_testz00_3146 = CBOOL(BgL_auxz00_3147);
						}
						if (BgL_testz00_3146)
							{	/* Ast/shrinkify.scm 170 */
								BgL_testz00_3145 = ((bool_t) 1);
							}
						else
							{	/* Ast/shrinkify.scm 170 */
								BgL_testz00_3145 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_3145)
						{	/* Ast/shrinkify.scm 170 */
							{	/* Ast/shrinkify.scm 170 */
								long BgL_arg3458z00_1350;

								{	/* Ast/shrinkify.scm 170 */
									obj_t BgL_arg3459z00_1351;

									{	/* Ast/shrinkify.scm 170 */
										obj_t BgL_arg3460z00_1352;

										{	/* Ast/shrinkify.scm 170 */
											BgL_objectz00_bglt BgL_objectz00_2125;

											BgL_objectz00_2125 =
												(BgL_objectz00_bglt) (BgL_nodez00_1345);
											{	/* Ast/shrinkify.scm 170 */
												long BgL_arg2646z00_2126;

												{	/* Ast/shrinkify.scm 170 */
													long BgL_arg2647z00_2127;

													BgL_arg2647z00_2127 =
														BGL_OBJECT_CLASS_NUM(BgL_objectz00_2125);
													BgL_arg2646z00_2126 =
														(BgL_arg2647z00_2127 - OBJECT_TYPE);
												}
												BgL_arg3460z00_1352 =
													VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
													(int) (BgL_arg2646z00_2126));
										}}
										BgL_arg3459z00_1351 =
											BGl_classzd2superzd2zz__objectz00(BgL_arg3460z00_1352);
									}
									BgL_arg3458z00_1350 =
										BGl_classzd2numzd2zz__objectz00(BgL_arg3459z00_1351);
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_nodez00_1345), BgL_arg3458z00_1350);
							}
							{	/* Ast/shrinkify.scm 170 */
								BgL_objectz00_bglt BgL_auxz00_3161;

								BgL_auxz00_3161 = (BgL_objectz00_bglt) (BgL_nodez00_1345);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3161, BFALSE);
							}
							(obj_t) (BgL_nodez00_1345);
						}
					else
						{	/* Ast/shrinkify.scm 170 */
							BFALSE;
						}
				}
				{	/* Ast/shrinkify.scm 171 */
					BgL_varz00_bglt BgL_arg3461z00_1353;

					BgL_arg3461z00_1353 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1345))->BgL_varz00);
					{	/* Ast/shrinkify.scm 171 */
						obj_t BgL_res3559z00_2162;

						{	/* Ast/shrinkify.scm 171 */
							BgL_nodez00_bglt BgL_nodez00_2136;

							BgL_nodez00_2136 = (BgL_nodez00_bglt) (BgL_arg3461z00_1353);
							{	/* Ast/shrinkify.scm 171 */
								obj_t BgL_method3279z00_2137;

								{	/* Ast/shrinkify.scm 171 */
									BgL_objectz00_bglt BgL_objz00_2138;

									BgL_objz00_2138 = (BgL_objectz00_bglt) (BgL_nodez00_2136);
									{	/* Ast/shrinkify.scm 171 */
										long BgL_objzd2classzd2numz00_2139;

										BgL_objzd2classzd2numz00_2139 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2138);
										{	/* Ast/shrinkify.scm 171 */
											obj_t BgL_arg2643z00_2140;

											BgL_arg2643z00_2140 =
												PROCEDURE_REF
												(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
												(int) (((long) 1)));
											{	/* Ast/shrinkify.scm 171 */
												obj_t BgL_arrayz00_2142;

												int BgL_offsetz00_2143;

												BgL_arrayz00_2142 = BgL_arg2643z00_2140;
												BgL_offsetz00_2143 =
													(int) (BgL_objzd2classzd2numz00_2139);
												{	/* Ast/shrinkify.scm 171 */
													long BgL_offsetz00_2144;

													BgL_offsetz00_2144 =
														((long) (BgL_offsetz00_2143) - OBJECT_TYPE);
													{	/* Ast/shrinkify.scm 171 */
														long BgL_modz00_2145;

														{	/* Ast/shrinkify.scm 171 */
															int BgL_arg2645z00_2146;

															BgL_arg2645z00_2146 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 171 */
																long BgL_auxz00_3175;

																BgL_auxz00_3175 = (long) (BgL_arg2645z00_2146);
																BgL_modz00_2145 =
																	(BgL_offsetz00_2144 / BgL_auxz00_3175);
														}}
														{	/* Ast/shrinkify.scm 171 */
															long BgL_restz00_2147;

															{	/* Ast/shrinkify.scm 171 */
																int BgL_arg2644z00_2148;

																BgL_arg2644z00_2148 = (int) (((long) 16));
																{	/* Ast/shrinkify.scm 171 */
																	long BgL_auxz00_3179;

																	BgL_auxz00_3179 =
																		(long) (BgL_arg2644z00_2148);
																	BgL_restz00_2147 =
																		(BgL_offsetz00_2144 % BgL_auxz00_3179);
															}}
															{	/* Ast/shrinkify.scm 171 */

																BgL_method3279z00_2137 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2142,
																		(int) (BgL_modz00_2145)),
																	(int) (BgL_restz00_2147));
								}}}}}}}}
								{	/* Ast/shrinkify.scm 171 */
									obj_t BgL_xz00_2589;

									BgL_xz00_2589 =
										PROCEDURE_ENTRY(BgL_method3279z00_2137)
										(BgL_method3279z00_2137, (obj_t) (BgL_nodez00_2136), BEOA);
									BgL_res3559z00_2162 = BUNSPEC;
						}}} BgL_res3559z00_2162;
				}}
				{	/* Ast/shrinkify.scm 172 */
					BgL_nodez00_bglt BgL_arg3462z00_1354;

					BgL_arg3462z00_1354 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1345))->BgL_valuez00);
					{	/* Ast/shrinkify.scm 172 */
						obj_t BgL_res3562z00_2190;

						{	/* Ast/shrinkify.scm 172 */
							obj_t BgL_method3279z00_2165;

							{	/* Ast/shrinkify.scm 172 */
								BgL_objectz00_bglt BgL_objz00_2166;

								BgL_objz00_2166 = (BgL_objectz00_bglt) (BgL_arg3462z00_1354);
								{	/* Ast/shrinkify.scm 172 */
									long BgL_objzd2classzd2numz00_2167;

									BgL_objzd2classzd2numz00_2167 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2166);
									{	/* Ast/shrinkify.scm 172 */
										obj_t BgL_arg2643z00_2168;

										BgL_arg2643z00_2168 =
											PROCEDURE_REF
											(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
											(int) (((long) 1)));
										{	/* Ast/shrinkify.scm 172 */
											obj_t BgL_arrayz00_2170;

											int BgL_offsetz00_2171;

											BgL_arrayz00_2170 = BgL_arg2643z00_2168;
											BgL_offsetz00_2171 =
												(int) (BgL_objzd2classzd2numz00_2167);
											{	/* Ast/shrinkify.scm 172 */
												long BgL_offsetz00_2172;

												BgL_offsetz00_2172 =
													((long) (BgL_offsetz00_2171) - OBJECT_TYPE);
												{	/* Ast/shrinkify.scm 172 */
													long BgL_modz00_2173;

													{	/* Ast/shrinkify.scm 172 */
														int BgL_arg2645z00_2174;

														BgL_arg2645z00_2174 = (int) (((long) 16));
														{	/* Ast/shrinkify.scm 172 */
															long BgL_auxz00_3198;

															BgL_auxz00_3198 = (long) (BgL_arg2645z00_2174);
															BgL_modz00_2173 =
																(BgL_offsetz00_2172 / BgL_auxz00_3198);
													}}
													{	/* Ast/shrinkify.scm 172 */
														long BgL_restz00_2175;

														{	/* Ast/shrinkify.scm 172 */
															int BgL_arg2644z00_2176;

															BgL_arg2644z00_2176 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 172 */
																long BgL_auxz00_3202;

																BgL_auxz00_3202 = (long) (BgL_arg2644z00_2176);
																BgL_restz00_2175 =
																	(BgL_offsetz00_2172 % BgL_auxz00_3202);
														}}
														{	/* Ast/shrinkify.scm 172 */

															BgL_method3279z00_2165 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2170,
																	(int) (BgL_modz00_2173)),
																(int) (BgL_restz00_2175));
							}}}}}}}}
							{	/* Ast/shrinkify.scm 172 */
								obj_t BgL_xz00_2590;

								BgL_xz00_2590 =
									PROCEDURE_ENTRY(BgL_method3279z00_2165)
									(BgL_method3279z00_2165, (obj_t) (BgL_arg3462z00_1354), BEOA);
								BgL_res3562z00_2190 = BUNSPEC;
						}} BgL_res3562z00_2190;
				}}
				return BUNSPEC;
			}
		}
	}



/* shrink-node!-box-ref3309 */
	obj_t BGl_shrinkzd2nodez12zd2boxzd2ref3309zc0zzast_shrinkifyz00(obj_t
		BgL_envz00_2547, obj_t BgL_nodez00_2548)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 161 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1334;

				BgL_nodez00_1334 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2548);
				{	/* Ast/shrinkify.scm 162 */
					bool_t BgL_testz00_3213;

					{	/* Ast/shrinkify.scm 162 */
						bool_t BgL_testz00_3214;

						{	/* Ast/shrinkify.scm 162 */
							obj_t BgL_auxz00_3215;

							{	/* Ast/shrinkify.scm 162 */
								BgL_objectz00_bglt BgL_auxz00_3216;

								BgL_auxz00_3216 = (BgL_objectz00_bglt) (BgL_nodez00_1334);
								BgL_auxz00_3215 = BGL_OBJECT_WIDENING(BgL_auxz00_3216);
							}
							BgL_testz00_3214 = CBOOL(BgL_auxz00_3215);
						}
						if (BgL_testz00_3214)
							{	/* Ast/shrinkify.scm 162 */
								BgL_testz00_3213 = ((bool_t) 1);
							}
						else
							{	/* Ast/shrinkify.scm 162 */
								BgL_testz00_3213 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_3213)
						{	/* Ast/shrinkify.scm 162 */
							{	/* Ast/shrinkify.scm 162 */
								long BgL_arg3452z00_1339;

								{	/* Ast/shrinkify.scm 162 */
									obj_t BgL_arg3453z00_1340;

									{	/* Ast/shrinkify.scm 162 */
										obj_t BgL_arg3454z00_1341;

										{	/* Ast/shrinkify.scm 162 */
											BgL_objectz00_bglt BgL_objectz00_2084;

											BgL_objectz00_2084 =
												(BgL_objectz00_bglt) (BgL_nodez00_1334);
											{	/* Ast/shrinkify.scm 162 */
												long BgL_arg2646z00_2085;

												{	/* Ast/shrinkify.scm 162 */
													long BgL_arg2647z00_2086;

													BgL_arg2647z00_2086 =
														BGL_OBJECT_CLASS_NUM(BgL_objectz00_2084);
													BgL_arg2646z00_2085 =
														(BgL_arg2647z00_2086 - OBJECT_TYPE);
												}
												BgL_arg3454z00_1341 =
													VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
													(int) (BgL_arg2646z00_2085));
										}}
										BgL_arg3453z00_1340 =
											BGl_classzd2superzd2zz__objectz00(BgL_arg3454z00_1341);
									}
									BgL_arg3452z00_1339 =
										BGl_classzd2numzd2zz__objectz00(BgL_arg3453z00_1340);
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_nodez00_1334), BgL_arg3452z00_1339);
							}
							{	/* Ast/shrinkify.scm 162 */
								BgL_objectz00_bglt BgL_auxz00_3229;

								BgL_auxz00_3229 = (BgL_objectz00_bglt) (BgL_nodez00_1334);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3229, BFALSE);
							}
							(obj_t) (BgL_nodez00_1334);
						}
					else
						{	/* Ast/shrinkify.scm 162 */
							BFALSE;
						}
				}
				{	/* Ast/shrinkify.scm 163 */
					BgL_varz00_bglt BgL_arg3455z00_1342;

					BgL_arg3455z00_1342 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1334))->BgL_varz00);
					{	/* Ast/shrinkify.scm 163 */
						obj_t BgL_res3555z00_2121;

						{	/* Ast/shrinkify.scm 163 */
							BgL_nodez00_bglt BgL_nodez00_2095;

							BgL_nodez00_2095 = (BgL_nodez00_bglt) (BgL_arg3455z00_1342);
							{	/* Ast/shrinkify.scm 163 */
								obj_t BgL_method3279z00_2096;

								{	/* Ast/shrinkify.scm 163 */
									BgL_objectz00_bglt BgL_objz00_2097;

									BgL_objz00_2097 = (BgL_objectz00_bglt) (BgL_nodez00_2095);
									{	/* Ast/shrinkify.scm 163 */
										long BgL_objzd2classzd2numz00_2098;

										BgL_objzd2classzd2numz00_2098 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2097);
										{	/* Ast/shrinkify.scm 163 */
											obj_t BgL_arg2643z00_2099;

											BgL_arg2643z00_2099 =
												PROCEDURE_REF
												(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
												(int) (((long) 1)));
											{	/* Ast/shrinkify.scm 163 */
												obj_t BgL_arrayz00_2101;

												int BgL_offsetz00_2102;

												BgL_arrayz00_2101 = BgL_arg2643z00_2099;
												BgL_offsetz00_2102 =
													(int) (BgL_objzd2classzd2numz00_2098);
												{	/* Ast/shrinkify.scm 163 */
													long BgL_offsetz00_2103;

													BgL_offsetz00_2103 =
														((long) (BgL_offsetz00_2102) - OBJECT_TYPE);
													{	/* Ast/shrinkify.scm 163 */
														long BgL_modz00_2104;

														{	/* Ast/shrinkify.scm 163 */
															int BgL_arg2645z00_2105;

															BgL_arg2645z00_2105 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 163 */
																long BgL_auxz00_3243;

																BgL_auxz00_3243 = (long) (BgL_arg2645z00_2105);
																BgL_modz00_2104 =
																	(BgL_offsetz00_2103 / BgL_auxz00_3243);
														}}
														{	/* Ast/shrinkify.scm 163 */
															long BgL_restz00_2106;

															{	/* Ast/shrinkify.scm 163 */
																int BgL_arg2644z00_2107;

																BgL_arg2644z00_2107 = (int) (((long) 16));
																{	/* Ast/shrinkify.scm 163 */
																	long BgL_auxz00_3247;

																	BgL_auxz00_3247 =
																		(long) (BgL_arg2644z00_2107);
																	BgL_restz00_2106 =
																		(BgL_offsetz00_2103 % BgL_auxz00_3247);
															}}
															{	/* Ast/shrinkify.scm 163 */

																BgL_method3279z00_2096 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2101,
																		(int) (BgL_modz00_2104)),
																	(int) (BgL_restz00_2106));
								}}}}}}}}
								{	/* Ast/shrinkify.scm 163 */
									obj_t BgL_xz00_2591;

									BgL_xz00_2591 =
										PROCEDURE_ENTRY(BgL_method3279z00_2096)
										(BgL_method3279z00_2096, (obj_t) (BgL_nodez00_2095), BEOA);
									BgL_res3555z00_2121 = BUNSPEC;
						}}} BgL_res3555z00_2121;
				}}
				return BUNSPEC;
			}
		}
	}



/* shrink-node!-make-bo3307 */
	obj_t BGl_shrinkzd2nodez12zd2makezd2bo3307zc0zzast_shrinkifyz00(obj_t
		BgL_envz00_2549, obj_t BgL_nodez00_2550)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 153 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1323;

				BgL_nodez00_1323 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2550);
				{	/* Ast/shrinkify.scm 154 */
					bool_t BgL_testz00_3258;

					{	/* Ast/shrinkify.scm 154 */
						bool_t BgL_testz00_3259;

						{	/* Ast/shrinkify.scm 154 */
							obj_t BgL_auxz00_3260;

							{	/* Ast/shrinkify.scm 154 */
								BgL_objectz00_bglt BgL_auxz00_3261;

								BgL_auxz00_3261 = (BgL_objectz00_bglt) (BgL_nodez00_1323);
								BgL_auxz00_3260 = BGL_OBJECT_WIDENING(BgL_auxz00_3261);
							}
							BgL_testz00_3259 = CBOOL(BgL_auxz00_3260);
						}
						if (BgL_testz00_3259)
							{	/* Ast/shrinkify.scm 154 */
								BgL_testz00_3258 = ((bool_t) 1);
							}
						else
							{	/* Ast/shrinkify.scm 154 */
								BgL_testz00_3258 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_3258)
						{	/* Ast/shrinkify.scm 154 */
							{	/* Ast/shrinkify.scm 154 */
								long BgL_arg3446z00_1328;

								{	/* Ast/shrinkify.scm 154 */
									obj_t BgL_arg3447z00_1329;

									{	/* Ast/shrinkify.scm 154 */
										obj_t BgL_arg3448z00_1330;

										{	/* Ast/shrinkify.scm 154 */
											BgL_objectz00_bglt BgL_objectz00_2043;

											BgL_objectz00_2043 =
												(BgL_objectz00_bglt) (BgL_nodez00_1323);
											{	/* Ast/shrinkify.scm 154 */
												long BgL_arg2646z00_2044;

												{	/* Ast/shrinkify.scm 154 */
													long BgL_arg2647z00_2045;

													BgL_arg2647z00_2045 =
														BGL_OBJECT_CLASS_NUM(BgL_objectz00_2043);
													BgL_arg2646z00_2044 =
														(BgL_arg2647z00_2045 - OBJECT_TYPE);
												}
												BgL_arg3448z00_1330 =
													VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
													(int) (BgL_arg2646z00_2044));
										}}
										BgL_arg3447z00_1329 =
											BGl_classzd2superzd2zz__objectz00(BgL_arg3448z00_1330);
									}
									BgL_arg3446z00_1328 =
										BGl_classzd2numzd2zz__objectz00(BgL_arg3447z00_1329);
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_nodez00_1323), BgL_arg3446z00_1328);
							}
							{	/* Ast/shrinkify.scm 154 */
								BgL_objectz00_bglt BgL_auxz00_3274;

								BgL_auxz00_3274 = (BgL_objectz00_bglt) (BgL_nodez00_1323);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3274, BFALSE);
							}
							(obj_t) (BgL_nodez00_1323);
						}
					else
						{	/* Ast/shrinkify.scm 154 */
							BFALSE;
						}
				}
				{	/* Ast/shrinkify.scm 155 */
					BgL_nodez00_bglt BgL_arg3449z00_1331;

					BgL_arg3449z00_1331 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1323))->BgL_valuez00);
					{	/* Ast/shrinkify.scm 155 */
						obj_t BgL_res3551z00_2080;

						{	/* Ast/shrinkify.scm 155 */
							obj_t BgL_method3279z00_2055;

							{	/* Ast/shrinkify.scm 155 */
								BgL_objectz00_bglt BgL_objz00_2056;

								BgL_objz00_2056 = (BgL_objectz00_bglt) (BgL_arg3449z00_1331);
								{	/* Ast/shrinkify.scm 155 */
									long BgL_objzd2classzd2numz00_2057;

									BgL_objzd2classzd2numz00_2057 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2056);
									{	/* Ast/shrinkify.scm 155 */
										obj_t BgL_arg2643z00_2058;

										BgL_arg2643z00_2058 =
											PROCEDURE_REF
											(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
											(int) (((long) 1)));
										{	/* Ast/shrinkify.scm 155 */
											obj_t BgL_arrayz00_2060;

											int BgL_offsetz00_2061;

											BgL_arrayz00_2060 = BgL_arg2643z00_2058;
											BgL_offsetz00_2061 =
												(int) (BgL_objzd2classzd2numz00_2057);
											{	/* Ast/shrinkify.scm 155 */
												long BgL_offsetz00_2062;

												BgL_offsetz00_2062 =
													((long) (BgL_offsetz00_2061) - OBJECT_TYPE);
												{	/* Ast/shrinkify.scm 155 */
													long BgL_modz00_2063;

													{	/* Ast/shrinkify.scm 155 */
														int BgL_arg2645z00_2064;

														BgL_arg2645z00_2064 = (int) (((long) 16));
														{	/* Ast/shrinkify.scm 155 */
															long BgL_auxz00_3287;

															BgL_auxz00_3287 = (long) (BgL_arg2645z00_2064);
															BgL_modz00_2063 =
																(BgL_offsetz00_2062 / BgL_auxz00_3287);
													}}
													{	/* Ast/shrinkify.scm 155 */
														long BgL_restz00_2065;

														{	/* Ast/shrinkify.scm 155 */
															int BgL_arg2644z00_2066;

															BgL_arg2644z00_2066 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 155 */
																long BgL_auxz00_3291;

																BgL_auxz00_3291 = (long) (BgL_arg2644z00_2066);
																BgL_restz00_2065 =
																	(BgL_offsetz00_2062 % BgL_auxz00_3291);
														}}
														{	/* Ast/shrinkify.scm 155 */

															BgL_method3279z00_2055 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2060,
																	(int) (BgL_modz00_2063)),
																(int) (BgL_restz00_2065));
							}}}}}}}}
							{	/* Ast/shrinkify.scm 155 */
								obj_t BgL_xz00_2592;

								BgL_xz00_2592 =
									PROCEDURE_ENTRY(BgL_method3279z00_2055)
									(BgL_method3279z00_2055, (obj_t) (BgL_arg3449z00_1331), BEOA);
								BgL_res3551z00_2080 = BUNSPEC;
						}} BgL_res3551z00_2080;
				}}
				return BUNSPEC;
			}
		}
	}



/* shrink-node!-select3305 */
	obj_t BGl_shrinkzd2nodez12zd2select3305z12zzast_shrinkifyz00(obj_t
		BgL_envz00_2551, obj_t BgL_nodez00_2552)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 143 */
			{
				BgL_selectz00_bglt BgL_nodez00_1308;

				BgL_nodez00_1308 = (BgL_selectz00_bglt) (BgL_nodez00_2552);
				{	/* Ast/shrinkify.scm 144 */
					BgL_nodez00_bglt BgL_arg3438z00_1311;

					BgL_arg3438z00_1311 =
						(((BgL_selectz00_bglt) CREF(BgL_nodez00_1308))->BgL_testz00);
					{	/* Ast/shrinkify.scm 144 */
						obj_t BgL_res3544z00_2007;

						{	/* Ast/shrinkify.scm 144 */
							obj_t BgL_method3279z00_1982;

							{	/* Ast/shrinkify.scm 144 */
								BgL_objectz00_bglt BgL_objz00_1983;

								BgL_objz00_1983 = (BgL_objectz00_bglt) (BgL_arg3438z00_1311);
								{	/* Ast/shrinkify.scm 144 */
									long BgL_objzd2classzd2numz00_1984;

									BgL_objzd2classzd2numz00_1984 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1983);
									{	/* Ast/shrinkify.scm 144 */
										obj_t BgL_arg2643z00_1985;

										BgL_arg2643z00_1985 =
											PROCEDURE_REF
											(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
											(int) (((long) 1)));
										{	/* Ast/shrinkify.scm 144 */
											obj_t BgL_arrayz00_1987;

											int BgL_offsetz00_1988;

											BgL_arrayz00_1987 = BgL_arg2643z00_1985;
											BgL_offsetz00_1988 =
												(int) (BgL_objzd2classzd2numz00_1984);
											{	/* Ast/shrinkify.scm 144 */
												long BgL_offsetz00_1989;

												BgL_offsetz00_1989 =
													((long) (BgL_offsetz00_1988) - OBJECT_TYPE);
												{	/* Ast/shrinkify.scm 144 */
													long BgL_modz00_1990;

													{	/* Ast/shrinkify.scm 144 */
														int BgL_arg2645z00_1991;

														BgL_arg2645z00_1991 = (int) (((long) 16));
														{	/* Ast/shrinkify.scm 144 */
															long BgL_auxz00_3311;

															BgL_auxz00_3311 = (long) (BgL_arg2645z00_1991);
															BgL_modz00_1990 =
																(BgL_offsetz00_1989 / BgL_auxz00_3311);
													}}
													{	/* Ast/shrinkify.scm 144 */
														long BgL_restz00_1992;

														{	/* Ast/shrinkify.scm 144 */
															int BgL_arg2644z00_1993;

															BgL_arg2644z00_1993 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 144 */
																long BgL_auxz00_3315;

																BgL_auxz00_3315 = (long) (BgL_arg2644z00_1993);
																BgL_restz00_1992 =
																	(BgL_offsetz00_1989 % BgL_auxz00_3315);
														}}
														{	/* Ast/shrinkify.scm 144 */

															BgL_method3279z00_1982 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1987,
																	(int) (BgL_modz00_1990)),
																(int) (BgL_restz00_1992));
							}}}}}}}}
							{	/* Ast/shrinkify.scm 144 */
								obj_t BgL_xz00_2593;

								BgL_xz00_2593 =
									PROCEDURE_ENTRY(BgL_method3279z00_1982)
									(BgL_method3279z00_1982, (obj_t) (BgL_arg3438z00_1311), BEOA);
								BgL_res3544z00_2007 = BUNSPEC;
						}} BgL_res3544z00_2007;
				}}
				{	/* Ast/shrinkify.scm 145 */
					obj_t BgL_g3264z00_1312;

					BgL_g3264z00_1312 =
						(((BgL_selectz00_bglt) CREF(BgL_nodez00_1308))->BgL_clausesz00);
					{
						obj_t BgL_l3262z00_1314;

						BgL_l3262z00_1314 = BgL_g3264z00_1312;
					BgL_zc3anonymousza33439ze3z83_1315:
						if (PAIRP(BgL_l3262z00_1314))
							{	/* Ast/shrinkify.scm 147 */
								{	/* Ast/shrinkify.scm 146 */
									obj_t BgL_clausez00_1317;

									BgL_clausez00_1317 = CAR(BgL_l3262z00_1314);
									{	/* Ast/shrinkify.scm 146 */
										obj_t BgL_arg3441z00_1318;

										BgL_arg3441z00_1318 = CDR(BgL_clausez00_1317);
										{	/* Ast/shrinkify.scm 146 */
											obj_t BgL_res3547z00_2038;

											{	/* Ast/shrinkify.scm 146 */
												BgL_nodez00_bglt BgL_nodez00_2012;

												BgL_nodez00_2012 =
													(BgL_nodez00_bglt) (BgL_arg3441z00_1318);
												{	/* Ast/shrinkify.scm 146 */
													obj_t BgL_method3279z00_2013;

													{	/* Ast/shrinkify.scm 146 */
														BgL_objectz00_bglt BgL_objz00_2014;

														BgL_objz00_2014 =
															(BgL_objectz00_bglt) (BgL_nodez00_2012);
														{	/* Ast/shrinkify.scm 146 */
															long BgL_objzd2classzd2numz00_2015;

															BgL_objzd2classzd2numz00_2015 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2014);
															{	/* Ast/shrinkify.scm 146 */
																obj_t BgL_arg2643z00_2016;

																BgL_arg2643z00_2016 =
																	PROCEDURE_REF
																	(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
																	(int) (((long) 1)));
																{	/* Ast/shrinkify.scm 146 */
																	obj_t BgL_arrayz00_2018;

																	int BgL_offsetz00_2019;

																	BgL_arrayz00_2018 = BgL_arg2643z00_2016;
																	BgL_offsetz00_2019 =
																		(int) (BgL_objzd2classzd2numz00_2015);
																	{	/* Ast/shrinkify.scm 146 */
																		long BgL_offsetz00_2020;

																		BgL_offsetz00_2020 =
																			(
																			(long) (BgL_offsetz00_2019) -
																			OBJECT_TYPE);
																		{	/* Ast/shrinkify.scm 146 */
																			long BgL_modz00_2021;

																			{	/* Ast/shrinkify.scm 146 */
																				int BgL_arg2645z00_2022;

																				BgL_arg2645z00_2022 =
																					(int) (((long) 16));
																				{	/* Ast/shrinkify.scm 146 */
																					long BgL_auxz00_3339;

																					BgL_auxz00_3339 =
																						(long) (BgL_arg2645z00_2022);
																					BgL_modz00_2021 =
																						(BgL_offsetz00_2020 /
																						BgL_auxz00_3339);
																			}}
																			{	/* Ast/shrinkify.scm 146 */
																				long BgL_restz00_2023;

																				{	/* Ast/shrinkify.scm 146 */
																					int BgL_arg2644z00_2024;

																					BgL_arg2644z00_2024 =
																						(int) (((long) 16));
																					{	/* Ast/shrinkify.scm 146 */
																						long BgL_auxz00_3343;

																						BgL_auxz00_3343 =
																							(long) (BgL_arg2644z00_2024);
																						BgL_restz00_2023 =
																							(BgL_offsetz00_2020 %
																							BgL_auxz00_3343);
																				}}
																				{	/* Ast/shrinkify.scm 146 */

																					BgL_method3279z00_2013 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2018,
																							(int) (BgL_modz00_2021)),
																						(int) (BgL_restz00_2023));
													}}}}}}}}
													{	/* Ast/shrinkify.scm 146 */
														obj_t BgL_xz00_2594;

														BgL_xz00_2594 =
															PROCEDURE_ENTRY(BgL_method3279z00_2013)
															(BgL_method3279z00_2013,
															(obj_t) (BgL_nodez00_2012), BEOA);
														BgL_res3547z00_2038 = BUNSPEC;
											}}} BgL_res3547z00_2038;
								}}}
								{
									obj_t BgL_l3262z00_3353;

									BgL_l3262z00_3353 = CDR(BgL_l3262z00_1314);
									BgL_l3262z00_1314 = BgL_l3262z00_3353;
									goto BgL_zc3anonymousza33439ze3z83_1315;
								}
							}
						else
							{	/* Ast/shrinkify.scm 147 */
								((bool_t) 1);
							}
					}
				}
				return BUNSPEC;
			}
		}
	}



/* shrink-node!-fail3303 */
	obj_t BGl_shrinkzd2nodez12zd2fail3303z12zzast_shrinkifyz00(obj_t
		BgL_envz00_2553, obj_t BgL_nodez00_2554)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 134 */
			{
				BgL_failz00_bglt BgL_nodez00_1300;

				BgL_nodez00_1300 = (BgL_failz00_bglt) (BgL_nodez00_2554);
				{	/* Ast/shrinkify.scm 135 */
					BgL_nodez00_bglt BgL_arg3434z00_1303;

					BgL_arg3434z00_1303 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1300))->BgL_procz00);
					{	/* Ast/shrinkify.scm 135 */
						obj_t BgL_res3535z00_1923;

						{	/* Ast/shrinkify.scm 135 */
							obj_t BgL_method3279z00_1898;

							{	/* Ast/shrinkify.scm 135 */
								BgL_objectz00_bglt BgL_objz00_1899;

								BgL_objz00_1899 = (BgL_objectz00_bglt) (BgL_arg3434z00_1303);
								{	/* Ast/shrinkify.scm 135 */
									long BgL_objzd2classzd2numz00_1900;

									BgL_objzd2classzd2numz00_1900 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1899);
									{	/* Ast/shrinkify.scm 135 */
										obj_t BgL_arg2643z00_1901;

										BgL_arg2643z00_1901 =
											PROCEDURE_REF
											(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
											(int) (((long) 1)));
										{	/* Ast/shrinkify.scm 135 */
											obj_t BgL_arrayz00_1903;

											int BgL_offsetz00_1904;

											BgL_arrayz00_1903 = BgL_arg2643z00_1901;
											BgL_offsetz00_1904 =
												(int) (BgL_objzd2classzd2numz00_1900);
											{	/* Ast/shrinkify.scm 135 */
												long BgL_offsetz00_1905;

												BgL_offsetz00_1905 =
													((long) (BgL_offsetz00_1904) - OBJECT_TYPE);
												{	/* Ast/shrinkify.scm 135 */
													long BgL_modz00_1906;

													{	/* Ast/shrinkify.scm 135 */
														int BgL_arg2645z00_1907;

														BgL_arg2645z00_1907 = (int) (((long) 16));
														{	/* Ast/shrinkify.scm 135 */
															long BgL_auxz00_3365;

															BgL_auxz00_3365 = (long) (BgL_arg2645z00_1907);
															BgL_modz00_1906 =
																(BgL_offsetz00_1905 / BgL_auxz00_3365);
													}}
													{	/* Ast/shrinkify.scm 135 */
														long BgL_restz00_1908;

														{	/* Ast/shrinkify.scm 135 */
															int BgL_arg2644z00_1909;

															BgL_arg2644z00_1909 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 135 */
																long BgL_auxz00_3369;

																BgL_auxz00_3369 = (long) (BgL_arg2644z00_1909);
																BgL_restz00_1908 =
																	(BgL_offsetz00_1905 % BgL_auxz00_3369);
														}}
														{	/* Ast/shrinkify.scm 135 */

															BgL_method3279z00_1898 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1903,
																	(int) (BgL_modz00_1906)),
																(int) (BgL_restz00_1908));
							}}}}}}}}
							{	/* Ast/shrinkify.scm 135 */
								obj_t BgL_xz00_2595;

								BgL_xz00_2595 =
									PROCEDURE_ENTRY(BgL_method3279z00_1898)
									(BgL_method3279z00_1898, (obj_t) (BgL_arg3434z00_1303), BEOA);
								BgL_res3535z00_1923 = BUNSPEC;
						}} BgL_res3535z00_1923;
				}}
				{	/* Ast/shrinkify.scm 136 */
					BgL_nodez00_bglt BgL_arg3435z00_1304;

					BgL_arg3435z00_1304 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1300))->BgL_msgz00);
					{	/* Ast/shrinkify.scm 136 */
						obj_t BgL_res3538z00_1951;

						{	/* Ast/shrinkify.scm 136 */
							obj_t BgL_method3279z00_1926;

							{	/* Ast/shrinkify.scm 136 */
								BgL_objectz00_bglt BgL_objz00_1927;

								BgL_objz00_1927 = (BgL_objectz00_bglt) (BgL_arg3435z00_1304);
								{	/* Ast/shrinkify.scm 136 */
									long BgL_objzd2classzd2numz00_1928;

									BgL_objzd2classzd2numz00_1928 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1927);
									{	/* Ast/shrinkify.scm 136 */
										obj_t BgL_arg2643z00_1929;

										BgL_arg2643z00_1929 =
											PROCEDURE_REF
											(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
											(int) (((long) 1)));
										{	/* Ast/shrinkify.scm 136 */
											obj_t BgL_arrayz00_1931;

											int BgL_offsetz00_1932;

											BgL_arrayz00_1931 = BgL_arg2643z00_1929;
											BgL_offsetz00_1932 =
												(int) (BgL_objzd2classzd2numz00_1928);
											{	/* Ast/shrinkify.scm 136 */
												long BgL_offsetz00_1933;

												BgL_offsetz00_1933 =
													((long) (BgL_offsetz00_1932) - OBJECT_TYPE);
												{	/* Ast/shrinkify.scm 136 */
													long BgL_modz00_1934;

													{	/* Ast/shrinkify.scm 136 */
														int BgL_arg2645z00_1935;

														BgL_arg2645z00_1935 = (int) (((long) 16));
														{	/* Ast/shrinkify.scm 136 */
															long BgL_auxz00_3388;

															BgL_auxz00_3388 = (long) (BgL_arg2645z00_1935);
															BgL_modz00_1934 =
																(BgL_offsetz00_1933 / BgL_auxz00_3388);
													}}
													{	/* Ast/shrinkify.scm 136 */
														long BgL_restz00_1936;

														{	/* Ast/shrinkify.scm 136 */
															int BgL_arg2644z00_1937;

															BgL_arg2644z00_1937 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 136 */
																long BgL_auxz00_3392;

																BgL_auxz00_3392 = (long) (BgL_arg2644z00_1937);
																BgL_restz00_1936 =
																	(BgL_offsetz00_1933 % BgL_auxz00_3392);
														}}
														{	/* Ast/shrinkify.scm 136 */

															BgL_method3279z00_1926 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1931,
																	(int) (BgL_modz00_1934)),
																(int) (BgL_restz00_1936));
							}}}}}}}}
							{	/* Ast/shrinkify.scm 136 */
								obj_t BgL_xz00_2596;

								BgL_xz00_2596 =
									PROCEDURE_ENTRY(BgL_method3279z00_1926)
									(BgL_method3279z00_1926, (obj_t) (BgL_arg3435z00_1304), BEOA);
								BgL_res3538z00_1951 = BUNSPEC;
						}} BgL_res3538z00_1951;
				}}
				{	/* Ast/shrinkify.scm 137 */
					BgL_nodez00_bglt BgL_arg3436z00_1305;

					BgL_arg3436z00_1305 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1300))->BgL_objz00);
					{	/* Ast/shrinkify.scm 137 */
						obj_t BgL_res3541z00_1979;

						{	/* Ast/shrinkify.scm 137 */
							obj_t BgL_method3279z00_1954;

							{	/* Ast/shrinkify.scm 137 */
								BgL_objectz00_bglt BgL_objz00_1955;

								BgL_objz00_1955 = (BgL_objectz00_bglt) (BgL_arg3436z00_1305);
								{	/* Ast/shrinkify.scm 137 */
									long BgL_objzd2classzd2numz00_1956;

									BgL_objzd2classzd2numz00_1956 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1955);
									{	/* Ast/shrinkify.scm 137 */
										obj_t BgL_arg2643z00_1957;

										BgL_arg2643z00_1957 =
											PROCEDURE_REF
											(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
											(int) (((long) 1)));
										{	/* Ast/shrinkify.scm 137 */
											obj_t BgL_arrayz00_1959;

											int BgL_offsetz00_1960;

											BgL_arrayz00_1959 = BgL_arg2643z00_1957;
											BgL_offsetz00_1960 =
												(int) (BgL_objzd2classzd2numz00_1956);
											{	/* Ast/shrinkify.scm 137 */
												long BgL_offsetz00_1961;

												BgL_offsetz00_1961 =
													((long) (BgL_offsetz00_1960) - OBJECT_TYPE);
												{	/* Ast/shrinkify.scm 137 */
													long BgL_modz00_1962;

													{	/* Ast/shrinkify.scm 137 */
														int BgL_arg2645z00_1963;

														BgL_arg2645z00_1963 = (int) (((long) 16));
														{	/* Ast/shrinkify.scm 137 */
															long BgL_auxz00_3411;

															BgL_auxz00_3411 = (long) (BgL_arg2645z00_1963);
															BgL_modz00_1962 =
																(BgL_offsetz00_1961 / BgL_auxz00_3411);
													}}
													{	/* Ast/shrinkify.scm 137 */
														long BgL_restz00_1964;

														{	/* Ast/shrinkify.scm 137 */
															int BgL_arg2644z00_1965;

															BgL_arg2644z00_1965 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 137 */
																long BgL_auxz00_3415;

																BgL_auxz00_3415 = (long) (BgL_arg2644z00_1965);
																BgL_restz00_1964 =
																	(BgL_offsetz00_1961 % BgL_auxz00_3415);
														}}
														{	/* Ast/shrinkify.scm 137 */

															BgL_method3279z00_1954 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1959,
																	(int) (BgL_modz00_1962)),
																(int) (BgL_restz00_1964));
							}}}}}}}}
							{	/* Ast/shrinkify.scm 137 */
								obj_t BgL_xz00_2597;

								BgL_xz00_2597 =
									PROCEDURE_ENTRY(BgL_method3279z00_1954)
									(BgL_method3279z00_1954, (obj_t) (BgL_arg3436z00_1305), BEOA);
								BgL_res3541z00_1979 = BUNSPEC;
						}} BgL_res3541z00_1979;
				}}
				return BUNSPEC;
			}
		}
	}



/* shrink-node!-conditi3301 */
	obj_t BGl_shrinkzd2nodez12zd2conditi3301z12zzast_shrinkifyz00(obj_t
		BgL_envz00_2555, obj_t BgL_nodez00_2556)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 125 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1292;

				BgL_nodez00_1292 = (BgL_conditionalz00_bglt) (BgL_nodez00_2556);
				{	/* Ast/shrinkify.scm 126 */
					BgL_nodez00_bglt BgL_arg3430z00_1295;

					BgL_arg3430z00_1295 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1292))->BgL_testz00);
					{	/* Ast/shrinkify.scm 126 */
						obj_t BgL_res3526z00_1839;

						{	/* Ast/shrinkify.scm 126 */
							obj_t BgL_method3279z00_1814;

							{	/* Ast/shrinkify.scm 126 */
								BgL_objectz00_bglt BgL_objz00_1815;

								BgL_objz00_1815 = (BgL_objectz00_bglt) (BgL_arg3430z00_1295);
								{	/* Ast/shrinkify.scm 126 */
									long BgL_objzd2classzd2numz00_1816;

									BgL_objzd2classzd2numz00_1816 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1815);
									{	/* Ast/shrinkify.scm 126 */
										obj_t BgL_arg2643z00_1817;

										BgL_arg2643z00_1817 =
											PROCEDURE_REF
											(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
											(int) (((long) 1)));
										{	/* Ast/shrinkify.scm 126 */
											obj_t BgL_arrayz00_1819;

											int BgL_offsetz00_1820;

											BgL_arrayz00_1819 = BgL_arg2643z00_1817;
											BgL_offsetz00_1820 =
												(int) (BgL_objzd2classzd2numz00_1816);
											{	/* Ast/shrinkify.scm 126 */
												long BgL_offsetz00_1821;

												BgL_offsetz00_1821 =
													((long) (BgL_offsetz00_1820) - OBJECT_TYPE);
												{	/* Ast/shrinkify.scm 126 */
													long BgL_modz00_1822;

													{	/* Ast/shrinkify.scm 126 */
														int BgL_arg2645z00_1823;

														BgL_arg2645z00_1823 = (int) (((long) 16));
														{	/* Ast/shrinkify.scm 126 */
															long BgL_auxz00_3435;

															BgL_auxz00_3435 = (long) (BgL_arg2645z00_1823);
															BgL_modz00_1822 =
																(BgL_offsetz00_1821 / BgL_auxz00_3435);
													}}
													{	/* Ast/shrinkify.scm 126 */
														long BgL_restz00_1824;

														{	/* Ast/shrinkify.scm 126 */
															int BgL_arg2644z00_1825;

															BgL_arg2644z00_1825 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 126 */
																long BgL_auxz00_3439;

																BgL_auxz00_3439 = (long) (BgL_arg2644z00_1825);
																BgL_restz00_1824 =
																	(BgL_offsetz00_1821 % BgL_auxz00_3439);
														}}
														{	/* Ast/shrinkify.scm 126 */

															BgL_method3279z00_1814 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1819,
																	(int) (BgL_modz00_1822)),
																(int) (BgL_restz00_1824));
							}}}}}}}}
							{	/* Ast/shrinkify.scm 126 */
								obj_t BgL_xz00_2598;

								BgL_xz00_2598 =
									PROCEDURE_ENTRY(BgL_method3279z00_1814)
									(BgL_method3279z00_1814, (obj_t) (BgL_arg3430z00_1295), BEOA);
								BgL_res3526z00_1839 = BUNSPEC;
						}} BgL_res3526z00_1839;
				}}
				{	/* Ast/shrinkify.scm 127 */
					BgL_nodez00_bglt BgL_arg3431z00_1296;

					BgL_arg3431z00_1296 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1292))->BgL_truez00);
					{	/* Ast/shrinkify.scm 127 */
						obj_t BgL_res3529z00_1867;

						{	/* Ast/shrinkify.scm 127 */
							obj_t BgL_method3279z00_1842;

							{	/* Ast/shrinkify.scm 127 */
								BgL_objectz00_bglt BgL_objz00_1843;

								BgL_objz00_1843 = (BgL_objectz00_bglt) (BgL_arg3431z00_1296);
								{	/* Ast/shrinkify.scm 127 */
									long BgL_objzd2classzd2numz00_1844;

									BgL_objzd2classzd2numz00_1844 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1843);
									{	/* Ast/shrinkify.scm 127 */
										obj_t BgL_arg2643z00_1845;

										BgL_arg2643z00_1845 =
											PROCEDURE_REF
											(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
											(int) (((long) 1)));
										{	/* Ast/shrinkify.scm 127 */
											obj_t BgL_arrayz00_1847;

											int BgL_offsetz00_1848;

											BgL_arrayz00_1847 = BgL_arg2643z00_1845;
											BgL_offsetz00_1848 =
												(int) (BgL_objzd2classzd2numz00_1844);
											{	/* Ast/shrinkify.scm 127 */
												long BgL_offsetz00_1849;

												BgL_offsetz00_1849 =
													((long) (BgL_offsetz00_1848) - OBJECT_TYPE);
												{	/* Ast/shrinkify.scm 127 */
													long BgL_modz00_1850;

													{	/* Ast/shrinkify.scm 127 */
														int BgL_arg2645z00_1851;

														BgL_arg2645z00_1851 = (int) (((long) 16));
														{	/* Ast/shrinkify.scm 127 */
															long BgL_auxz00_3458;

															BgL_auxz00_3458 = (long) (BgL_arg2645z00_1851);
															BgL_modz00_1850 =
																(BgL_offsetz00_1849 / BgL_auxz00_3458);
													}}
													{	/* Ast/shrinkify.scm 127 */
														long BgL_restz00_1852;

														{	/* Ast/shrinkify.scm 127 */
															int BgL_arg2644z00_1853;

															BgL_arg2644z00_1853 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 127 */
																long BgL_auxz00_3462;

																BgL_auxz00_3462 = (long) (BgL_arg2644z00_1853);
																BgL_restz00_1852 =
																	(BgL_offsetz00_1849 % BgL_auxz00_3462);
														}}
														{	/* Ast/shrinkify.scm 127 */

															BgL_method3279z00_1842 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1847,
																	(int) (BgL_modz00_1850)),
																(int) (BgL_restz00_1852));
							}}}}}}}}
							{	/* Ast/shrinkify.scm 127 */
								obj_t BgL_xz00_2599;

								BgL_xz00_2599 =
									PROCEDURE_ENTRY(BgL_method3279z00_1842)
									(BgL_method3279z00_1842, (obj_t) (BgL_arg3431z00_1296), BEOA);
								BgL_res3529z00_1867 = BUNSPEC;
						}} BgL_res3529z00_1867;
				}}
				{	/* Ast/shrinkify.scm 128 */
					BgL_nodez00_bglt BgL_arg3432z00_1297;

					BgL_arg3432z00_1297 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1292))->BgL_falsez00);
					{	/* Ast/shrinkify.scm 128 */
						obj_t BgL_res3532z00_1895;

						{	/* Ast/shrinkify.scm 128 */
							obj_t BgL_method3279z00_1870;

							{	/* Ast/shrinkify.scm 128 */
								BgL_objectz00_bglt BgL_objz00_1871;

								BgL_objz00_1871 = (BgL_objectz00_bglt) (BgL_arg3432z00_1297);
								{	/* Ast/shrinkify.scm 128 */
									long BgL_objzd2classzd2numz00_1872;

									BgL_objzd2classzd2numz00_1872 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1871);
									{	/* Ast/shrinkify.scm 128 */
										obj_t BgL_arg2643z00_1873;

										BgL_arg2643z00_1873 =
											PROCEDURE_REF
											(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
											(int) (((long) 1)));
										{	/* Ast/shrinkify.scm 128 */
											obj_t BgL_arrayz00_1875;

											int BgL_offsetz00_1876;

											BgL_arrayz00_1875 = BgL_arg2643z00_1873;
											BgL_offsetz00_1876 =
												(int) (BgL_objzd2classzd2numz00_1872);
											{	/* Ast/shrinkify.scm 128 */
												long BgL_offsetz00_1877;

												BgL_offsetz00_1877 =
													((long) (BgL_offsetz00_1876) - OBJECT_TYPE);
												{	/* Ast/shrinkify.scm 128 */
													long BgL_modz00_1878;

													{	/* Ast/shrinkify.scm 128 */
														int BgL_arg2645z00_1879;

														BgL_arg2645z00_1879 = (int) (((long) 16));
														{	/* Ast/shrinkify.scm 128 */
															long BgL_auxz00_3481;

															BgL_auxz00_3481 = (long) (BgL_arg2645z00_1879);
															BgL_modz00_1878 =
																(BgL_offsetz00_1877 / BgL_auxz00_3481);
													}}
													{	/* Ast/shrinkify.scm 128 */
														long BgL_restz00_1880;

														{	/* Ast/shrinkify.scm 128 */
															int BgL_arg2644z00_1881;

															BgL_arg2644z00_1881 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 128 */
																long BgL_auxz00_3485;

																BgL_auxz00_3485 = (long) (BgL_arg2644z00_1881);
																BgL_restz00_1880 =
																	(BgL_offsetz00_1877 % BgL_auxz00_3485);
														}}
														{	/* Ast/shrinkify.scm 128 */

															BgL_method3279z00_1870 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1875,
																	(int) (BgL_modz00_1878)),
																(int) (BgL_restz00_1880));
							}}}}}}}}
							{	/* Ast/shrinkify.scm 128 */
								obj_t BgL_xz00_2600;

								BgL_xz00_2600 =
									PROCEDURE_ENTRY(BgL_method3279z00_1870)
									(BgL_method3279z00_1870, (obj_t) (BgL_arg3432z00_1297), BEOA);
								BgL_res3532z00_1895 = BUNSPEC;
						}} BgL_res3532z00_1895;
				}}
				return BUNSPEC;
			}
		}
	}



/* shrink-node!-setq3299 */
	obj_t BGl_shrinkzd2nodez12zd2setq3299z12zzast_shrinkifyz00(obj_t
		BgL_envz00_2557, obj_t BgL_nodez00_2558)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 118 */
			{
				BgL_setqz00_bglt BgL_nodez00_1286;

				BgL_nodez00_1286 = (BgL_setqz00_bglt) (BgL_nodez00_2558);
				{	/* Ast/shrinkify.scm 119 */
					BgL_nodez00_bglt BgL_arg3426z00_1783;

					BgL_arg3426z00_1783 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1286))->BgL_valuez00);
					{	/* Ast/shrinkify.scm 119 */
						obj_t BgL_res3523z00_1811;

						{	/* Ast/shrinkify.scm 119 */
							obj_t BgL_method3279z00_1786;

							{	/* Ast/shrinkify.scm 119 */
								BgL_objectz00_bglt BgL_objz00_1787;

								BgL_objz00_1787 = (BgL_objectz00_bglt) (BgL_arg3426z00_1783);
								{	/* Ast/shrinkify.scm 119 */
									long BgL_objzd2classzd2numz00_1788;

									BgL_objzd2classzd2numz00_1788 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1787);
									{	/* Ast/shrinkify.scm 119 */
										obj_t BgL_arg2643z00_1789;

										BgL_arg2643z00_1789 =
											PROCEDURE_REF
											(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
											(int) (((long) 1)));
										{	/* Ast/shrinkify.scm 119 */
											obj_t BgL_arrayz00_1791;

											int BgL_offsetz00_1792;

											BgL_arrayz00_1791 = BgL_arg2643z00_1789;
											BgL_offsetz00_1792 =
												(int) (BgL_objzd2classzd2numz00_1788);
											{	/* Ast/shrinkify.scm 119 */
												long BgL_offsetz00_1793;

												BgL_offsetz00_1793 =
													((long) (BgL_offsetz00_1792) - OBJECT_TYPE);
												{	/* Ast/shrinkify.scm 119 */
													long BgL_modz00_1794;

													{	/* Ast/shrinkify.scm 119 */
														int BgL_arg2645z00_1795;

														BgL_arg2645z00_1795 = (int) (((long) 16));
														{	/* Ast/shrinkify.scm 119 */
															long BgL_auxz00_3505;

															BgL_auxz00_3505 = (long) (BgL_arg2645z00_1795);
															BgL_modz00_1794 =
																(BgL_offsetz00_1793 / BgL_auxz00_3505);
													}}
													{	/* Ast/shrinkify.scm 119 */
														long BgL_restz00_1796;

														{	/* Ast/shrinkify.scm 119 */
															int BgL_arg2644z00_1797;

															BgL_arg2644z00_1797 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 119 */
																long BgL_auxz00_3509;

																BgL_auxz00_3509 = (long) (BgL_arg2644z00_1797);
																BgL_restz00_1796 =
																	(BgL_offsetz00_1793 % BgL_auxz00_3509);
														}}
														{	/* Ast/shrinkify.scm 119 */

															BgL_method3279z00_1786 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1791,
																	(int) (BgL_modz00_1794)),
																(int) (BgL_restz00_1796));
							}}}}}}}}
							{	/* Ast/shrinkify.scm 119 */
								obj_t BgL_xz00_2601;

								BgL_xz00_2601 =
									PROCEDURE_ENTRY(BgL_method3279z00_1786)
									(BgL_method3279z00_1786, (obj_t) (BgL_arg3426z00_1783), BEOA);
								BgL_res3523z00_1811 = BUNSPEC;
						}} BgL_res3523z00_1811;
				}}
				return BUNSPEC;
			}
		}
	}



/* shrink-node!-cast3297 */
	obj_t BGl_shrinkzd2nodez12zd2cast3297z12zzast_shrinkifyz00(obj_t
		BgL_envz00_2559, obj_t BgL_nodez00_2560)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 111 */
			{
				BgL_castz00_bglt BgL_nodez00_1280;

				{	/* Ast/shrinkify.scm 112 */
					BgL_castz00_bglt BgL_auxz00_3520;

					BgL_nodez00_1280 = (BgL_castz00_bglt) (BgL_nodez00_2560);
					{	/* Ast/shrinkify.scm 112 */
						BgL_nodez00_bglt BgL_arg3424z00_1754;

						BgL_arg3424z00_1754 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1280))->BgL_argz00);
						{	/* Ast/shrinkify.scm 112 */
							obj_t BgL_res3520z00_1782;

							{	/* Ast/shrinkify.scm 112 */
								obj_t BgL_method3279z00_1757;

								{	/* Ast/shrinkify.scm 112 */
									BgL_objectz00_bglt BgL_objz00_1758;

									BgL_objz00_1758 = (BgL_objectz00_bglt) (BgL_arg3424z00_1754);
									{	/* Ast/shrinkify.scm 112 */
										long BgL_objzd2classzd2numz00_1759;

										BgL_objzd2classzd2numz00_1759 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1758);
										{	/* Ast/shrinkify.scm 112 */
											obj_t BgL_arg2643z00_1760;

											BgL_arg2643z00_1760 =
												PROCEDURE_REF
												(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
												(int) (((long) 1)));
											{	/* Ast/shrinkify.scm 112 */
												obj_t BgL_arrayz00_1762;

												int BgL_offsetz00_1763;

												BgL_arrayz00_1762 = BgL_arg2643z00_1760;
												BgL_offsetz00_1763 =
													(int) (BgL_objzd2classzd2numz00_1759);
												{	/* Ast/shrinkify.scm 112 */
													long BgL_offsetz00_1764;

													BgL_offsetz00_1764 =
														((long) (BgL_offsetz00_1763) - OBJECT_TYPE);
													{	/* Ast/shrinkify.scm 112 */
														long BgL_modz00_1765;

														{	/* Ast/shrinkify.scm 112 */
															int BgL_arg2645z00_1766;

															BgL_arg2645z00_1766 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 112 */
																long BgL_auxz00_3530;

																BgL_auxz00_3530 = (long) (BgL_arg2645z00_1766);
																BgL_modz00_1765 =
																	(BgL_offsetz00_1764 / BgL_auxz00_3530);
														}}
														{	/* Ast/shrinkify.scm 112 */
															long BgL_restz00_1767;

															{	/* Ast/shrinkify.scm 112 */
																int BgL_arg2644z00_1768;

																BgL_arg2644z00_1768 = (int) (((long) 16));
																{	/* Ast/shrinkify.scm 112 */
																	long BgL_auxz00_3534;

																	BgL_auxz00_3534 =
																		(long) (BgL_arg2644z00_1768);
																	BgL_restz00_1767 =
																		(BgL_offsetz00_1764 % BgL_auxz00_3534);
															}}
															{	/* Ast/shrinkify.scm 112 */

																BgL_method3279z00_1757 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1762,
																		(int) (BgL_modz00_1765)),
																	(int) (BgL_restz00_1767));
								}}}}}}}}
								{	/* Ast/shrinkify.scm 112 */
									obj_t BgL_xz00_2602;

									BgL_xz00_2602 =
										PROCEDURE_ENTRY(BgL_method3279z00_1757)
										(BgL_method3279z00_1757, (obj_t) (BgL_arg3424z00_1754),
										BEOA);
									BgL_res3520z00_1782 = BUNSPEC;
							}} BgL_res3520z00_1782;
					}}
					BgL_auxz00_3520 = BgL_nodez00_1280;
					return (obj_t) (BgL_auxz00_3520);
				}
			}
		}
	}



/* shrink-node!-extern3295 */
	obj_t BGl_shrinkzd2nodez12zd2extern3295z12zzast_shrinkifyz00(obj_t
		BgL_envz00_2561, obj_t BgL_nodez00_2562)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 103 */
			{
				BgL_externz00_bglt BgL_nodez00_1269;

				{	/* Ast/shrinkify.scm 104 */
					BgL_externz00_bglt BgL_auxz00_3546;

					BgL_nodez00_1269 = (BgL_externz00_bglt) (BgL_nodez00_2562);
					{	/* Ast/shrinkify.scm 104 */
						bool_t BgL_testz00_3547;

						{	/* Ast/shrinkify.scm 104 */
							bool_t BgL_testz00_3548;

							{	/* Ast/shrinkify.scm 104 */
								obj_t BgL_auxz00_3549;

								{	/* Ast/shrinkify.scm 104 */
									BgL_objectz00_bglt BgL_auxz00_3550;

									BgL_auxz00_3550 = (BgL_objectz00_bglt) (BgL_nodez00_1269);
									BgL_auxz00_3549 = BGL_OBJECT_WIDENING(BgL_auxz00_3550);
								}
								BgL_testz00_3548 = CBOOL(BgL_auxz00_3549);
							}
							if (BgL_testz00_3548)
								{	/* Ast/shrinkify.scm 104 */
									BgL_testz00_3547 = ((bool_t) 1);
								}
							else
								{	/* Ast/shrinkify.scm 104 */
									BgL_testz00_3547 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_3547)
							{	/* Ast/shrinkify.scm 104 */
								{	/* Ast/shrinkify.scm 104 */
									long BgL_arg3418z00_1274;

									{	/* Ast/shrinkify.scm 104 */
										obj_t BgL_arg3419z00_1275;

										{	/* Ast/shrinkify.scm 104 */
											obj_t BgL_arg3420z00_1276;

											{	/* Ast/shrinkify.scm 104 */
												BgL_objectz00_bglt BgL_objectz00_1743;

												BgL_objectz00_1743 =
													(BgL_objectz00_bglt) (BgL_nodez00_1269);
												{	/* Ast/shrinkify.scm 104 */
													long BgL_arg2646z00_1744;

													{	/* Ast/shrinkify.scm 104 */
														long BgL_arg2647z00_1745;

														BgL_arg2647z00_1745 =
															BGL_OBJECT_CLASS_NUM(BgL_objectz00_1743);
														BgL_arg2646z00_1744 =
															(BgL_arg2647z00_1745 - OBJECT_TYPE);
													}
													BgL_arg3420z00_1276 =
														VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
														(int) (BgL_arg2646z00_1744));
											}}
											BgL_arg3419z00_1275 =
												BGl_classzd2superzd2zz__objectz00(BgL_arg3420z00_1276);
										}
										BgL_arg3418z00_1274 =
											BGl_classzd2numzd2zz__objectz00(BgL_arg3419z00_1275);
									}
									BGL_OBJECT_CLASS_NUM_SET(
										(BgL_objectz00_bglt) (BgL_nodez00_1269),
										BgL_arg3418z00_1274);
								}
								{	/* Ast/shrinkify.scm 104 */
									BgL_objectz00_bglt BgL_auxz00_3563;

									BgL_auxz00_3563 = (BgL_objectz00_bglt) (BgL_nodez00_1269);
									BGL_OBJECT_WIDENING_SET(BgL_auxz00_3563, BFALSE);
								}
								(obj_t) (BgL_nodez00_1269);
							}
						else
							{	/* Ast/shrinkify.scm 104 */
								BFALSE;
							}
					}
					{	/* Ast/shrinkify.scm 105 */
						obj_t BgL_arg3421z00_1277;

						BgL_arg3421z00_1277 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1269))->BgL_exprza2za2);
						BGl_shrinkzd2nodeza2z12z62zzast_shrinkifyz00(BgL_arg3421z00_1277);
					}
					BgL_auxz00_3546 = BgL_nodez00_1269;
					return (obj_t) (BgL_auxz00_3546);
				}
			}
		}
	}



/* shrink-node!-funcall3293 */
	obj_t BGl_shrinkzd2nodez12zd2funcall3293z12zzast_shrinkifyz00(obj_t
		BgL_envz00_2563, obj_t BgL_nodez00_2564)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 94 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1257;

				BgL_nodez00_1257 = (BgL_funcallz00_bglt) (BgL_nodez00_2564);
				{	/* Ast/shrinkify.scm 95 */
					bool_t BgL_testz00_3571;

					{	/* Ast/shrinkify.scm 95 */
						bool_t BgL_testz00_3572;

						{	/* Ast/shrinkify.scm 95 */
							obj_t BgL_auxz00_3573;

							{	/* Ast/shrinkify.scm 95 */
								BgL_objectz00_bglt BgL_auxz00_3574;

								BgL_auxz00_3574 = (BgL_objectz00_bglt) (BgL_nodez00_1257);
								BgL_auxz00_3573 = BGL_OBJECT_WIDENING(BgL_auxz00_3574);
							}
							BgL_testz00_3572 = CBOOL(BgL_auxz00_3573);
						}
						if (BgL_testz00_3572)
							{	/* Ast/shrinkify.scm 95 */
								BgL_testz00_3571 = ((bool_t) 1);
							}
						else
							{	/* Ast/shrinkify.scm 95 */
								BgL_testz00_3571 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_3571)
						{	/* Ast/shrinkify.scm 95 */
							{	/* Ast/shrinkify.scm 95 */
								long BgL_arg3411z00_1262;

								{	/* Ast/shrinkify.scm 95 */
									obj_t BgL_arg3412z00_1263;

									{	/* Ast/shrinkify.scm 95 */
										obj_t BgL_arg3413z00_1264;

										{	/* Ast/shrinkify.scm 95 */
											BgL_objectz00_bglt BgL_objectz00_1701;

											BgL_objectz00_1701 =
												(BgL_objectz00_bglt) (BgL_nodez00_1257);
											{	/* Ast/shrinkify.scm 95 */
												long BgL_arg2646z00_1702;

												{	/* Ast/shrinkify.scm 95 */
													long BgL_arg2647z00_1703;

													BgL_arg2647z00_1703 =
														BGL_OBJECT_CLASS_NUM(BgL_objectz00_1701);
													BgL_arg2646z00_1702 =
														(BgL_arg2647z00_1703 - OBJECT_TYPE);
												}
												BgL_arg3413z00_1264 =
													VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
													(int) (BgL_arg2646z00_1702));
										}}
										BgL_arg3412z00_1263 =
											BGl_classzd2superzd2zz__objectz00(BgL_arg3413z00_1264);
									}
									BgL_arg3411z00_1262 =
										BGl_classzd2numzd2zz__objectz00(BgL_arg3412z00_1263);
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_nodez00_1257), BgL_arg3411z00_1262);
							}
							{	/* Ast/shrinkify.scm 95 */
								BgL_objectz00_bglt BgL_auxz00_3587;

								BgL_auxz00_3587 = (BgL_objectz00_bglt) (BgL_nodez00_1257);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3587, BFALSE);
							}
							(obj_t) (BgL_nodez00_1257);
						}
					else
						{	/* Ast/shrinkify.scm 95 */
							BFALSE;
						}
				}
				{	/* Ast/shrinkify.scm 96 */
					BgL_nodez00_bglt BgL_arg3414z00_1265;

					BgL_arg3414z00_1265 =
						(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1257))->BgL_funz00);
					{	/* Ast/shrinkify.scm 96 */
						obj_t BgL_res3516z00_1738;

						{	/* Ast/shrinkify.scm 96 */
							obj_t BgL_method3279z00_1713;

							{	/* Ast/shrinkify.scm 96 */
								BgL_objectz00_bglt BgL_objz00_1714;

								BgL_objz00_1714 = (BgL_objectz00_bglt) (BgL_arg3414z00_1265);
								{	/* Ast/shrinkify.scm 96 */
									long BgL_objzd2classzd2numz00_1715;

									BgL_objzd2classzd2numz00_1715 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1714);
									{	/* Ast/shrinkify.scm 96 */
										obj_t BgL_arg2643z00_1716;

										BgL_arg2643z00_1716 =
											PROCEDURE_REF
											(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
											(int) (((long) 1)));
										{	/* Ast/shrinkify.scm 96 */
											obj_t BgL_arrayz00_1718;

											int BgL_offsetz00_1719;

											BgL_arrayz00_1718 = BgL_arg2643z00_1716;
											BgL_offsetz00_1719 =
												(int) (BgL_objzd2classzd2numz00_1715);
											{	/* Ast/shrinkify.scm 96 */
												long BgL_offsetz00_1720;

												BgL_offsetz00_1720 =
													((long) (BgL_offsetz00_1719) - OBJECT_TYPE);
												{	/* Ast/shrinkify.scm 96 */
													long BgL_modz00_1721;

													{	/* Ast/shrinkify.scm 96 */
														int BgL_arg2645z00_1722;

														BgL_arg2645z00_1722 = (int) (((long) 16));
														{	/* Ast/shrinkify.scm 96 */
															long BgL_auxz00_3600;

															BgL_auxz00_3600 = (long) (BgL_arg2645z00_1722);
															BgL_modz00_1721 =
																(BgL_offsetz00_1720 / BgL_auxz00_3600);
													}}
													{	/* Ast/shrinkify.scm 96 */
														long BgL_restz00_1723;

														{	/* Ast/shrinkify.scm 96 */
															int BgL_arg2644z00_1724;

															BgL_arg2644z00_1724 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 96 */
																long BgL_auxz00_3604;

																BgL_auxz00_3604 = (long) (BgL_arg2644z00_1724);
																BgL_restz00_1723 =
																	(BgL_offsetz00_1720 % BgL_auxz00_3604);
														}}
														{	/* Ast/shrinkify.scm 96 */

															BgL_method3279z00_1713 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1718,
																	(int) (BgL_modz00_1721)),
																(int) (BgL_restz00_1723));
							}}}}}}}}
							{	/* Ast/shrinkify.scm 96 */
								obj_t BgL_xz00_2603;

								BgL_xz00_2603 =
									PROCEDURE_ENTRY(BgL_method3279z00_1713)
									(BgL_method3279z00_1713, (obj_t) (BgL_arg3414z00_1265), BEOA);
								BgL_res3516z00_1738 = BUNSPEC;
						}} BgL_res3516z00_1738;
				}}
				{	/* Ast/shrinkify.scm 97 */
					obj_t BgL_arg3415z00_1266;

					BgL_arg3415z00_1266 =
						(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1257))->BgL_argsz00);
					BGl_shrinkzd2nodeza2z12z62zzast_shrinkifyz00(BgL_arg3415z00_1266);
				}
				return BUNSPEC;
			}
		}
	}



/* shrink-node!-app-ly3291 */
	obj_t BGl_shrinkzd2nodez12zd2appzd2ly3291zc0zzast_shrinkifyz00(obj_t
		BgL_envz00_2565, obj_t BgL_nodez00_2566)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 85 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1245;

				BgL_nodez00_1245 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2566);
				{	/* Ast/shrinkify.scm 86 */
					bool_t BgL_testz00_3617;

					{	/* Ast/shrinkify.scm 86 */
						bool_t BgL_testz00_3618;

						{	/* Ast/shrinkify.scm 86 */
							obj_t BgL_auxz00_3619;

							{	/* Ast/shrinkify.scm 86 */
								BgL_objectz00_bglt BgL_auxz00_3620;

								BgL_auxz00_3620 = (BgL_objectz00_bglt) (BgL_nodez00_1245);
								BgL_auxz00_3619 = BGL_OBJECT_WIDENING(BgL_auxz00_3620);
							}
							BgL_testz00_3618 = CBOOL(BgL_auxz00_3619);
						}
						if (BgL_testz00_3618)
							{	/* Ast/shrinkify.scm 86 */
								BgL_testz00_3617 = ((bool_t) 1);
							}
						else
							{	/* Ast/shrinkify.scm 86 */
								BgL_testz00_3617 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_3617)
						{	/* Ast/shrinkify.scm 86 */
							{	/* Ast/shrinkify.scm 86 */
								long BgL_arg3404z00_1250;

								{	/* Ast/shrinkify.scm 86 */
									obj_t BgL_arg3405z00_1251;

									{	/* Ast/shrinkify.scm 86 */
										obj_t BgL_arg3406z00_1252;

										{	/* Ast/shrinkify.scm 86 */
											BgL_objectz00_bglt BgL_objectz00_1632;

											BgL_objectz00_1632 =
												(BgL_objectz00_bglt) (BgL_nodez00_1245);
											{	/* Ast/shrinkify.scm 86 */
												long BgL_arg2646z00_1633;

												{	/* Ast/shrinkify.scm 86 */
													long BgL_arg2647z00_1634;

													BgL_arg2647z00_1634 =
														BGL_OBJECT_CLASS_NUM(BgL_objectz00_1632);
													BgL_arg2646z00_1633 =
														(BgL_arg2647z00_1634 - OBJECT_TYPE);
												}
												BgL_arg3406z00_1252 =
													VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
													(int) (BgL_arg2646z00_1633));
										}}
										BgL_arg3405z00_1251 =
											BGl_classzd2superzd2zz__objectz00(BgL_arg3406z00_1252);
									}
									BgL_arg3404z00_1250 =
										BGl_classzd2numzd2zz__objectz00(BgL_arg3405z00_1251);
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_nodez00_1245), BgL_arg3404z00_1250);
							}
							{	/* Ast/shrinkify.scm 86 */
								BgL_objectz00_bglt BgL_auxz00_3633;

								BgL_auxz00_3633 = (BgL_objectz00_bglt) (BgL_nodez00_1245);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3633, BFALSE);
							}
							(obj_t) (BgL_nodez00_1245);
						}
					else
						{	/* Ast/shrinkify.scm 86 */
							BFALSE;
						}
				}
				{	/* Ast/shrinkify.scm 87 */
					BgL_nodez00_bglt BgL_arg3407z00_1253;

					BgL_arg3407z00_1253 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1245))->BgL_funz00);
					{	/* Ast/shrinkify.scm 87 */
						obj_t BgL_res3509z00_1669;

						{	/* Ast/shrinkify.scm 87 */
							obj_t BgL_method3279z00_1644;

							{	/* Ast/shrinkify.scm 87 */
								BgL_objectz00_bglt BgL_objz00_1645;

								BgL_objz00_1645 = (BgL_objectz00_bglt) (BgL_arg3407z00_1253);
								{	/* Ast/shrinkify.scm 87 */
									long BgL_objzd2classzd2numz00_1646;

									BgL_objzd2classzd2numz00_1646 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1645);
									{	/* Ast/shrinkify.scm 87 */
										obj_t BgL_arg2643z00_1647;

										BgL_arg2643z00_1647 =
											PROCEDURE_REF
											(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
											(int) (((long) 1)));
										{	/* Ast/shrinkify.scm 87 */
											obj_t BgL_arrayz00_1649;

											int BgL_offsetz00_1650;

											BgL_arrayz00_1649 = BgL_arg2643z00_1647;
											BgL_offsetz00_1650 =
												(int) (BgL_objzd2classzd2numz00_1646);
											{	/* Ast/shrinkify.scm 87 */
												long BgL_offsetz00_1651;

												BgL_offsetz00_1651 =
													((long) (BgL_offsetz00_1650) - OBJECT_TYPE);
												{	/* Ast/shrinkify.scm 87 */
													long BgL_modz00_1652;

													{	/* Ast/shrinkify.scm 87 */
														int BgL_arg2645z00_1653;

														BgL_arg2645z00_1653 = (int) (((long) 16));
														{	/* Ast/shrinkify.scm 87 */
															long BgL_auxz00_3646;

															BgL_auxz00_3646 = (long) (BgL_arg2645z00_1653);
															BgL_modz00_1652 =
																(BgL_offsetz00_1651 / BgL_auxz00_3646);
													}}
													{	/* Ast/shrinkify.scm 87 */
														long BgL_restz00_1654;

														{	/* Ast/shrinkify.scm 87 */
															int BgL_arg2644z00_1655;

															BgL_arg2644z00_1655 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 87 */
																long BgL_auxz00_3650;

																BgL_auxz00_3650 = (long) (BgL_arg2644z00_1655);
																BgL_restz00_1654 =
																	(BgL_offsetz00_1651 % BgL_auxz00_3650);
														}}
														{	/* Ast/shrinkify.scm 87 */

															BgL_method3279z00_1644 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1649,
																	(int) (BgL_modz00_1652)),
																(int) (BgL_restz00_1654));
							}}}}}}}}
							{	/* Ast/shrinkify.scm 87 */
								obj_t BgL_xz00_2604;

								BgL_xz00_2604 =
									PROCEDURE_ENTRY(BgL_method3279z00_1644)
									(BgL_method3279z00_1644, (obj_t) (BgL_arg3407z00_1253), BEOA);
								BgL_res3509z00_1669 = BUNSPEC;
						}} BgL_res3509z00_1669;
				}}
				{	/* Ast/shrinkify.scm 88 */
					BgL_nodez00_bglt BgL_arg3408z00_1254;

					BgL_arg3408z00_1254 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1245))->BgL_argz00);
					{	/* Ast/shrinkify.scm 88 */
						obj_t BgL_res3512z00_1697;

						{	/* Ast/shrinkify.scm 88 */
							obj_t BgL_method3279z00_1672;

							{	/* Ast/shrinkify.scm 88 */
								BgL_objectz00_bglt BgL_objz00_1673;

								BgL_objz00_1673 = (BgL_objectz00_bglt) (BgL_arg3408z00_1254);
								{	/* Ast/shrinkify.scm 88 */
									long BgL_objzd2classzd2numz00_1674;

									BgL_objzd2classzd2numz00_1674 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1673);
									{	/* Ast/shrinkify.scm 88 */
										obj_t BgL_arg2643z00_1675;

										BgL_arg2643z00_1675 =
											PROCEDURE_REF
											(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
											(int) (((long) 1)));
										{	/* Ast/shrinkify.scm 88 */
											obj_t BgL_arrayz00_1677;

											int BgL_offsetz00_1678;

											BgL_arrayz00_1677 = BgL_arg2643z00_1675;
											BgL_offsetz00_1678 =
												(int) (BgL_objzd2classzd2numz00_1674);
											{	/* Ast/shrinkify.scm 88 */
												long BgL_offsetz00_1679;

												BgL_offsetz00_1679 =
													((long) (BgL_offsetz00_1678) - OBJECT_TYPE);
												{	/* Ast/shrinkify.scm 88 */
													long BgL_modz00_1680;

													{	/* Ast/shrinkify.scm 88 */
														int BgL_arg2645z00_1681;

														BgL_arg2645z00_1681 = (int) (((long) 16));
														{	/* Ast/shrinkify.scm 88 */
															long BgL_auxz00_3669;

															BgL_auxz00_3669 = (long) (BgL_arg2645z00_1681);
															BgL_modz00_1680 =
																(BgL_offsetz00_1679 / BgL_auxz00_3669);
													}}
													{	/* Ast/shrinkify.scm 88 */
														long BgL_restz00_1682;

														{	/* Ast/shrinkify.scm 88 */
															int BgL_arg2644z00_1683;

															BgL_arg2644z00_1683 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 88 */
																long BgL_auxz00_3673;

																BgL_auxz00_3673 = (long) (BgL_arg2644z00_1683);
																BgL_restz00_1682 =
																	(BgL_offsetz00_1679 % BgL_auxz00_3673);
														}}
														{	/* Ast/shrinkify.scm 88 */

															BgL_method3279z00_1672 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1677,
																	(int) (BgL_modz00_1680)),
																(int) (BgL_restz00_1682));
							}}}}}}}}
							{	/* Ast/shrinkify.scm 88 */
								obj_t BgL_xz00_2605;

								BgL_xz00_2605 =
									PROCEDURE_ENTRY(BgL_method3279z00_1672)
									(BgL_method3279z00_1672, (obj_t) (BgL_arg3408z00_1254), BEOA);
								BgL_res3512z00_1697 = BUNSPEC;
						}} BgL_res3512z00_1697;
				}}
				return BUNSPEC;
			}
		}
	}



/* shrink-node!-app3289 */
	obj_t BGl_shrinkzd2nodez12zd2app3289z12zzast_shrinkifyz00(obj_t
		BgL_envz00_2567, obj_t BgL_nodez00_2568)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 76 */
			{
				BgL_appz00_bglt BgL_nodez00_1233;

				BgL_nodez00_1233 = (BgL_appz00_bglt) (BgL_nodez00_2568);
				{	/* Ast/shrinkify.scm 77 */
					bool_t BgL_testz00_3684;

					{	/* Ast/shrinkify.scm 77 */
						bool_t BgL_testz00_3685;

						{	/* Ast/shrinkify.scm 77 */
							obj_t BgL_auxz00_3686;

							{	/* Ast/shrinkify.scm 77 */
								BgL_objectz00_bglt BgL_auxz00_3687;

								BgL_auxz00_3687 = (BgL_objectz00_bglt) (BgL_nodez00_1233);
								BgL_auxz00_3686 = BGL_OBJECT_WIDENING(BgL_auxz00_3687);
							}
							BgL_testz00_3685 = CBOOL(BgL_auxz00_3686);
						}
						if (BgL_testz00_3685)
							{	/* Ast/shrinkify.scm 77 */
								BgL_testz00_3684 = ((bool_t) 1);
							}
						else
							{	/* Ast/shrinkify.scm 77 */
								BgL_testz00_3684 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_3684)
						{	/* Ast/shrinkify.scm 77 */
							{	/* Ast/shrinkify.scm 77 */
								long BgL_arg3397z00_1238;

								{	/* Ast/shrinkify.scm 77 */
									obj_t BgL_arg3398z00_1239;

									{	/* Ast/shrinkify.scm 77 */
										obj_t BgL_arg3399z00_1240;

										{	/* Ast/shrinkify.scm 77 */
											BgL_objectz00_bglt BgL_objectz00_1590;

											BgL_objectz00_1590 =
												(BgL_objectz00_bglt) (BgL_nodez00_1233);
											{	/* Ast/shrinkify.scm 77 */
												long BgL_arg2646z00_1591;

												{	/* Ast/shrinkify.scm 77 */
													long BgL_arg2647z00_1592;

													BgL_arg2647z00_1592 =
														BGL_OBJECT_CLASS_NUM(BgL_objectz00_1590);
													BgL_arg2646z00_1591 =
														(BgL_arg2647z00_1592 - OBJECT_TYPE);
												}
												BgL_arg3399z00_1240 =
													VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
													(int) (BgL_arg2646z00_1591));
										}}
										BgL_arg3398z00_1239 =
											BGl_classzd2superzd2zz__objectz00(BgL_arg3399z00_1240);
									}
									BgL_arg3397z00_1238 =
										BGl_classzd2numzd2zz__objectz00(BgL_arg3398z00_1239);
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_nodez00_1233), BgL_arg3397z00_1238);
							}
							{	/* Ast/shrinkify.scm 77 */
								BgL_objectz00_bglt BgL_auxz00_3700;

								BgL_auxz00_3700 = (BgL_objectz00_bglt) (BgL_nodez00_1233);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3700, BFALSE);
							}
							(obj_t) (BgL_nodez00_1233);
						}
					else
						{	/* Ast/shrinkify.scm 77 */
							BFALSE;
						}
				}
				{	/* Ast/shrinkify.scm 78 */
					BgL_varz00_bglt BgL_arg3400z00_1241;

					BgL_arg3400z00_1241 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_1233))->BgL_funz00);
					{	/* Ast/shrinkify.scm 78 */
						obj_t BgL_res3505z00_1627;

						{	/* Ast/shrinkify.scm 78 */
							BgL_nodez00_bglt BgL_nodez00_1601;

							BgL_nodez00_1601 = (BgL_nodez00_bglt) (BgL_arg3400z00_1241);
							{	/* Ast/shrinkify.scm 78 */
								obj_t BgL_method3279z00_1602;

								{	/* Ast/shrinkify.scm 78 */
									BgL_objectz00_bglt BgL_objz00_1603;

									BgL_objz00_1603 = (BgL_objectz00_bglt) (BgL_nodez00_1601);
									{	/* Ast/shrinkify.scm 78 */
										long BgL_objzd2classzd2numz00_1604;

										BgL_objzd2classzd2numz00_1604 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1603);
										{	/* Ast/shrinkify.scm 78 */
											obj_t BgL_arg2643z00_1605;

											BgL_arg2643z00_1605 =
												PROCEDURE_REF
												(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
												(int) (((long) 1)));
											{	/* Ast/shrinkify.scm 78 */
												obj_t BgL_arrayz00_1607;

												int BgL_offsetz00_1608;

												BgL_arrayz00_1607 = BgL_arg2643z00_1605;
												BgL_offsetz00_1608 =
													(int) (BgL_objzd2classzd2numz00_1604);
												{	/* Ast/shrinkify.scm 78 */
													long BgL_offsetz00_1609;

													BgL_offsetz00_1609 =
														((long) (BgL_offsetz00_1608) - OBJECT_TYPE);
													{	/* Ast/shrinkify.scm 78 */
														long BgL_modz00_1610;

														{	/* Ast/shrinkify.scm 78 */
															int BgL_arg2645z00_1611;

															BgL_arg2645z00_1611 = (int) (((long) 16));
															{	/* Ast/shrinkify.scm 78 */
																long BgL_auxz00_3714;

																BgL_auxz00_3714 = (long) (BgL_arg2645z00_1611);
																BgL_modz00_1610 =
																	(BgL_offsetz00_1609 / BgL_auxz00_3714);
														}}
														{	/* Ast/shrinkify.scm 78 */
															long BgL_restz00_1612;

															{	/* Ast/shrinkify.scm 78 */
																int BgL_arg2644z00_1613;

																BgL_arg2644z00_1613 = (int) (((long) 16));
																{	/* Ast/shrinkify.scm 78 */
																	long BgL_auxz00_3718;

																	BgL_auxz00_3718 =
																		(long) (BgL_arg2644z00_1613);
																	BgL_restz00_1612 =
																		(BgL_offsetz00_1609 % BgL_auxz00_3718);
															}}
															{	/* Ast/shrinkify.scm 78 */

																BgL_method3279z00_1602 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1607,
																		(int) (BgL_modz00_1610)),
																	(int) (BgL_restz00_1612));
								}}}}}}}}
								{	/* Ast/shrinkify.scm 78 */
									obj_t BgL_xz00_2606;

									BgL_xz00_2606 =
										PROCEDURE_ENTRY(BgL_method3279z00_1602)
										(BgL_method3279z00_1602, (obj_t) (BgL_nodez00_1601), BEOA);
									BgL_res3505z00_1627 = BUNSPEC;
						}}} BgL_res3505z00_1627;
				}}
				{	/* Ast/shrinkify.scm 79 */
					obj_t BgL_arg3401z00_1242;

					BgL_arg3401z00_1242 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_1233))->BgL_argsz00);
					BGl_shrinkzd2nodeza2z12z62zzast_shrinkifyz00(BgL_arg3401z00_1242);
				}
				return BUNSPEC;
			}
		}
	}



/* shrink-node!-sequenc3287 */
	obj_t BGl_shrinkzd2nodez12zd2sequenc3287z12zzast_shrinkifyz00(obj_t
		BgL_envz00_2569, obj_t BgL_nodez00_2570)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 69 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1227;

				BgL_nodez00_1227 = (BgL_sequencez00_bglt) (BgL_nodez00_2570);
				{	/* Ast/shrinkify.scm 70 */
					obj_t BgL_arg3394z00_1585;

					BgL_arg3394z00_1585 =
						(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1227))->BgL_nodesz00);
					BGl_shrinkzd2nodeza2z12z62zzast_shrinkifyz00(BgL_arg3394z00_1585);
				}
				return BUNSPEC;
			}
		}
	}



/* shrink-node!-kwote3285 */
	obj_t BGl_shrinkzd2nodez12zd2kwote3285z12zzast_shrinkifyz00(obj_t
		BgL_envz00_2571, obj_t BgL_nodez00_2572)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 63 */
			return BUNSPEC;
		}
	}



/* shrink-node!-var3283 */
	obj_t BGl_shrinkzd2nodez12zd2var3283z12zzast_shrinkifyz00(obj_t
		BgL_envz00_2573, obj_t BgL_nodez00_2574)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 57 */
			return BUNSPEC;
		}
	}



/* shrink-node!-atom3281 */
	obj_t BGl_shrinkzd2nodez12zd2atom3281z12zzast_shrinkifyz00(obj_t
		BgL_envz00_2575, obj_t BgL_nodez00_2576)
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 51 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_shrinkifyz00()
	{
		AN_OBJECT;
		{	/* Ast/shrinkify.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3616z00zzast_shrinkifyz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3616z00zzast_shrinkifyz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3616z00zzast_shrinkifyz00));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3616z00zzast_shrinkifyz00));
		}
	}

#ifdef __cplusplus
}
#endif
