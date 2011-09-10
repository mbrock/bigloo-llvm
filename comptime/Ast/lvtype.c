/*===========================================================================*/
/*   (Ast/lvtype.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/lvtype.scm)*/
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


	static obj_t BGl_lvtypezd2nodez12zd2atom3291z12zzast_lvtypez00(obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_lvtypezd2nodez12zd2funcall3305z12zzast_lvtypez00(obj_t,
		obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t
		BGl_setzd2variablezd2typez12z12zzast_lvtypez00(BgL_variablez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_lvtypezd2nodez12zd2select3317z12zzast_lvtypez00(obj_t,
		obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_lvtypez00();
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_lvtypezd2nodez12zd2conditi3313z12zzast_lvtypez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_lvtypezd2nodez12zd2app3301z12zzast_lvtypez00(obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzast_lvtypez00();
	static obj_t BGl_lvtypezd2nodez12zd2cast3309z12zzast_lvtypez00(obj_t, obj_t);
	static obj_t BGl_lvtypezd2nodez12zd2boxzd2ref3333zc0zzast_lvtypez00(obj_t,
		obj_t);
	static obj_t BGl__lvtypezd2nodez12zd2default3287z12zzast_lvtypez00(obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_closurez00zzast_nodez00;
	static obj_t BGl_lvtypezd2nodez12zd2setq3311z12zzast_lvtypez00(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_lvtypezd2nodez12zd2setzd2exzd23323z12zzast_lvtypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nodez00_bglt);
	static obj_t BGl_lvtypezd2nodez12zd2var3295z12zzast_lvtypez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_lvtypez00();
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_lvtypezd2nodez12zd2letzd2fun3319zc0zzast_lvtypez00(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_lvtypez00 = BUNSPEC;
	static obj_t BGl_lvtypezd2nodez12zd2closure3297z12zzast_lvtypez00(obj_t,
		obj_t);
	static obj_t BGl_lvtypezd2nodez12zd2kwote3293z12zzast_lvtypez00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_lvtypez00();
	static obj_t BGl_lvtypezd2nodez12zd2letzd2var3321zc0zzast_lvtypez00(obj_t,
		obj_t);
	static obj_t BGl_lvtypezd2nodez12zd2jumpzd2ex3325zc0zzast_lvtypez00(obj_t,
		obj_t);
	static obj_t BGl_lvtypezd2nodez12zd2fail3315z12zzast_lvtypez00(obj_t, obj_t);
	static obj_t BGl_lvtypezd2nodez12zd2boxzd2set3331zc0zzast_lvtypez00(obj_t,
		obj_t);
	static obj_t BGl_lvtypezd2nodez12zd2sequenc3299z12zzast_lvtypez00(obj_t,
		obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzast_lvtypez00();
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_lvtypezd2nodez12zd2makezd2bo3328zc0zzast_lvtypez00(obj_t,
		obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_lvtypezd2nodez12zd2extern3307z12zzast_lvtypez00(obj_t,
		obj_t);
	static obj_t BGl__lvtypezd2nodez12zc0zzast_lvtypez00(obj_t, obj_t);
	static obj_t BGl_lvtypezd2nodez12zd2appzd2ly3303zc0zzast_lvtypez00(obj_t,
		obj_t);
	static obj_t
		BGl_lvtypezd2nodez12zd2default3287z12zzast_lvtypez00(BgL_nodez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_lvtypez00();
	static bool_t BGl_lvtypezd2nodeza2z12z62zzast_lvtypez00(obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_lvtypezd2nodez12zd2default3287zd2envzc0zzast_lvtypez00,
		BgL_bgl__lvtypeza7d2nodeza713539z00,
		BGl__lvtypezd2nodez12zd2default3287z12zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3513z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123540z00,
		BGl_lvtypezd2nodez12zd2atom3291z12zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3514z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123541z00,
		BGl_lvtypezd2nodez12zd2kwote3293z12zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3515z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123542z00,
		BGl_lvtypezd2nodez12zd2var3295z12zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3516z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123543z00,
		BGl_lvtypezd2nodez12zd2closure3297z12zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3517z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123544z00,
		BGl_lvtypezd2nodez12zd2sequenc3299z12zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3518z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123545z00,
		BGl_lvtypezd2nodez12zd2app3301z12zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3520z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123546z00,
		BGl_lvtypezd2nodez12zd2funcall3305z12zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3519z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123547z00,
		BGl_lvtypezd2nodez12zd2appzd2ly3303zc0zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3521z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123548z00,
		BGl_lvtypezd2nodez12zd2extern3307z12zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3522z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123549z00,
		BGl_lvtypezd2nodez12zd2cast3309z12zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3523z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123550z00,
		BGl_lvtypezd2nodez12zd2setq3311z12zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3524z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123551z00,
		BGl_lvtypezd2nodez12zd2conditi3313z12zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3525z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123552z00,
		BGl_lvtypezd2nodez12zd2fail3315z12zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3526z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123553z00,
		BGl_lvtypezd2nodez12zd2select3317z12zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3527z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123554z00,
		BGl_lvtypezd2nodez12zd2letzd2fun3319zc0zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3528z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123555z00,
		BGl_lvtypezd2nodez12zd2letzd2var3321zc0zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3530z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123556z00,
		BGl_lvtypezd2nodez12zd2jumpzd2ex3325zc0zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3529z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123557z00,
		BGl_lvtypezd2nodez12zd2setzd2exzd23323z12zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3531z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123558z00,
		BGl_lvtypezd2nodez12zd2makezd2bo3328zc0zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3532z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123559z00,
		BGl_lvtypezd2nodez12zd2boxzd2set3331zc0zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3533z00zzast_lvtypez00,
		BgL_bgl_lvtypeza7d2nodeza7123560z00,
		BGl_lvtypezd2nodez12zd2boxzd2ref3333zc0zzast_lvtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3511z00zzast_lvtypez00,
		BgL_bgl_string3511za700za7za7a3561za7, "lvtype-node!", 12);
	      DEFINE_STRING(BGl_string3512z00zzast_lvtypez00,
		BgL_bgl_string3512za700za7za7a3562za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3534z00zzast_lvtypez00,
		BgL_bgl_string3534za700za7za7a3563za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string3535z00zzast_lvtypez00,
		BgL_bgl_string3535za700za7za7a3564za7, "ast_lvtype", 10);
	      DEFINE_STRING(BGl_string3536z00zzast_lvtypez00,
		BgL_bgl_string3536za700za7za7a3565za7, "lvtype-node!-default3287 ", 25);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
		BgL_bgl__lvtypeza7d2nodeza713566z00,
		BGl__lvtypezd2nodez12zc0zzast_lvtypez00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long
		BgL_checksumz00_2234, char *BgL_fromz00_2235)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_lvtypez00))
				{
					BGl_requirezd2initializa7ationz75zzast_lvtypez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_lvtypez00();
					BGl_cnstzd2initzd2zzast_lvtypez00();
					BGl_importedzd2moduleszd2initz00zzast_lvtypez00();
					BGl_genericzd2initzd2zzast_lvtypez00();
					BGl_methodzd2initzd2zzast_lvtypez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_lvtypez00()
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 16 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_lvtype");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_lvtype");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_lvtype");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_lvtypez00()
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 16 */
			{	/* Ast/lvtype.scm 16 */
				obj_t BgL_cportz00_2223;

				BgL_cportz00_2223 =
					bgl_open_input_string(BGl_string3536z00zzast_lvtypez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2224;

					BgL_iz00_2224 = ((long) 0);
				BgL_loopz00_2225:
					if ((BgL_iz00_2224 == ((long) -1)))
						{	/* Ast/lvtype.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Ast/lvtype.scm 16 */
							{	/* Ast/lvtype.scm 16 */
								obj_t BgL_arg3538z00_2227;

								{	/* Ast/lvtype.scm 16 */

									{	/* Ast/lvtype.scm 16 */
										obj_t BgL_locationz00_2229;

										BgL_locationz00_2229 = BBOOL(((bool_t) 0));
										{	/* Ast/lvtype.scm 16 */

											BgL_arg3538z00_2227 =
												BGl_readz00zz__readerz00(BgL_cportz00_2223,
												BgL_locationz00_2229);
										}
									}
								}
								{	/* Ast/lvtype.scm 16 */
									int BgL_auxz00_2253;

									BgL_auxz00_2253 = (int) (BgL_iz00_2224);
									CNST_TABLE_SET(BgL_auxz00_2253, BgL_arg3538z00_2227);
							}}
							{	/* Ast/lvtype.scm 16 */
								int BgL_auxz00_2230;

								BgL_auxz00_2230 = (int) ((BgL_iz00_2224 - ((long) 1)));
								{
									long BgL_iz00_2258;

									BgL_iz00_2258 = (long) (BgL_auxz00_2230);
									BgL_iz00_2224 = BgL_iz00_2258;
									goto BgL_loopz00_2225;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_lvtypez00()
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 16 */
			return BUNSPEC;
		}
	}



/* lvtype-node*! */
	bool_t BGl_lvtypezd2nodeza2z12z62zzast_lvtypez00(obj_t BgL_nodeza2za2_24)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 199 */
			{
				obj_t BgL_l3285z00_800;

				BgL_l3285z00_800 = BgL_nodeza2za2_24;
			BgL_zc3anonymousza33334ze3z83_801:
				if (PAIRP(BgL_l3285z00_800))
					{	/* Ast/lvtype.scm 200 */
						{	/* Ast/lvtype.scm 200 */
							obj_t BgL_arg3336z00_803;

							BgL_arg3336z00_803 = CAR(BgL_l3285z00_800);
							{	/* Ast/lvtype.scm 200 */
								BgL_nodez00_bglt BgL_nodez00_1369;

								BgL_nodez00_1369 = (BgL_nodez00_bglt) (BgL_arg3336z00_803);
								{	/* Ast/lvtype.scm 200 */
									obj_t BgL_method3289z00_1370;

									{	/* Ast/lvtype.scm 200 */
										BgL_objectz00_bglt BgL_objz00_1371;

										BgL_objz00_1371 = (BgL_objectz00_bglt) (BgL_nodez00_1369);
										{	/* Ast/lvtype.scm 200 */
											long BgL_objzd2classzd2numz00_1372;

											BgL_objzd2classzd2numz00_1372 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1371);
											{	/* Ast/lvtype.scm 200 */
												obj_t BgL_arg2643z00_1373;

												BgL_arg2643z00_1373 =
													PROCEDURE_REF
													(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
													(int) (((long) 1)));
												{	/* Ast/lvtype.scm 200 */
													obj_t BgL_arrayz00_1375;

													int BgL_offsetz00_1376;

													BgL_arrayz00_1375 = BgL_arg2643z00_1373;
													BgL_offsetz00_1376 =
														(int) (BgL_objzd2classzd2numz00_1372);
													{	/* Ast/lvtype.scm 200 */
														long BgL_offsetz00_1377;

														BgL_offsetz00_1377 =
															((long) (BgL_offsetz00_1376) - OBJECT_TYPE);
														{	/* Ast/lvtype.scm 200 */
															long BgL_modz00_1378;

															{	/* Ast/lvtype.scm 200 */
																int BgL_arg2645z00_1379;

																BgL_arg2645z00_1379 = (int) (((long) 16));
																{	/* Ast/lvtype.scm 200 */
																	long BgL_auxz00_2272;

																	BgL_auxz00_2272 =
																		(long) (BgL_arg2645z00_1379);
																	BgL_modz00_1378 =
																		(BgL_offsetz00_1377 / BgL_auxz00_2272);
															}}
															{	/* Ast/lvtype.scm 200 */
																long BgL_restz00_1380;

																{	/* Ast/lvtype.scm 200 */
																	int BgL_arg2644z00_1381;

																	BgL_arg2644z00_1381 = (int) (((long) 16));
																	{	/* Ast/lvtype.scm 200 */
																		long BgL_auxz00_2276;

																		BgL_auxz00_2276 =
																			(long) (BgL_arg2644z00_1381);
																		BgL_restz00_1380 =
																			(BgL_offsetz00_1377 % BgL_auxz00_2276);
																}}
																{	/* Ast/lvtype.scm 200 */

																	BgL_method3289z00_1370 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1375,
																			(int) (BgL_modz00_1378)),
																		(int) (BgL_restz00_1380));
									}}}}}}}}
									PROCEDURE_ENTRY(BgL_method3289z00_1370)
										(BgL_method3289z00_1370, (obj_t) (BgL_nodez00_1369), BEOA);
						}}}
						{
							obj_t BgL_l3285z00_2286;

							BgL_l3285z00_2286 = CDR(BgL_l3285z00_800);
							BgL_l3285z00_800 = BgL_l3285z00_2286;
							goto BgL_zc3anonymousza33334ze3z83_801;
						}
					}
				else
					{	/* Ast/lvtype.scm 200 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* set-variable-type! */
	obj_t BGl_setzd2variablezd2typez12z12zzast_lvtypez00(BgL_variablez00_bglt
		BgL_variablez00_25, BgL_typez00_bglt BgL_typez00_26)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 205 */
			{	/* Ast/lvtype.scm 206 */
				obj_t BgL_ntypez00_806;

				BgL_typez00_bglt BgL_otypez00_807;

				if (((obj_t) (BgL_typez00_26) == BGl_za2_za2z00zztype_cachez00))
					{	/* Ast/lvtype.scm 206 */
						BgL_ntypez00_806 = BGl_za2objza2z00zztype_cachez00;
					}
				else
					{	/* Ast/lvtype.scm 206 */
						BgL_ntypez00_806 = (obj_t) (BgL_typez00_26);
					}
				BgL_otypez00_807 =
					(((BgL_variablez00_bglt) CREF(BgL_variablez00_25))->BgL_typez00);
				if (((obj_t) (BgL_otypez00_807) == BGl_za2_za2z00zztype_cachez00))
					{
						BgL_typez00_bglt BgL_auxz00_2296;

						BgL_auxz00_2296 = (BgL_typez00_bglt) (BgL_ntypez00_806);
						return
							((((BgL_variablez00_bglt) CREF(BgL_variablez00_25))->
								BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_2296), BUNSPEC);
					}
				else
					{	/* Ast/lvtype.scm 208 */
						return BFALSE;
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_lvtypez00()
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 16 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_lvtypezd2nodez12zd2default3287zd2envzc0zzast_lvtypez00,
				BGl_nodez00zzast_nodez00, BGl_string3511z00zzast_lvtypez00);
		}
	}



/* lvtype-node! */
	BGL_EXPORTED_DEF obj_t BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nodez00_bglt
		BgL_nodez00_1)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 29 */
			{	/* Ast/lvtype.scm 29 */
				obj_t BgL_method3289z00_1399;

				{	/* Ast/lvtype.scm 29 */
					BgL_objectz00_bglt BgL_objz00_1400;

					BgL_objz00_1400 = (BgL_objectz00_bglt) (BgL_nodez00_1);
					{	/* Ast/lvtype.scm 29 */
						long BgL_objzd2classzd2numz00_1401;

						BgL_objzd2classzd2numz00_1401 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1400);
						{	/* Ast/lvtype.scm 29 */
							obj_t BgL_arg2643z00_1402;

							BgL_arg2643z00_1402 =
								PROCEDURE_REF(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
								(int) (((long) 1)));
							{	/* Ast/lvtype.scm 29 */
								obj_t BgL_arrayz00_1404;

								int BgL_offsetz00_1405;

								BgL_arrayz00_1404 = BgL_arg2643z00_1402;
								BgL_offsetz00_1405 = (int) (BgL_objzd2classzd2numz00_1401);
								{	/* Ast/lvtype.scm 29 */
									long BgL_offsetz00_1406;

									BgL_offsetz00_1406 =
										((long) (BgL_offsetz00_1405) - OBJECT_TYPE);
									{	/* Ast/lvtype.scm 29 */
										long BgL_modz00_1407;

										{	/* Ast/lvtype.scm 29 */
											int BgL_arg2645z00_1408;

											BgL_arg2645z00_1408 = (int) (((long) 16));
											{	/* Ast/lvtype.scm 29 */
												long BgL_auxz00_2308;

												BgL_auxz00_2308 = (long) (BgL_arg2645z00_1408);
												BgL_modz00_1407 =
													(BgL_offsetz00_1406 / BgL_auxz00_2308);
										}}
										{	/* Ast/lvtype.scm 29 */
											long BgL_restz00_1409;

											{	/* Ast/lvtype.scm 29 */
												int BgL_arg2644z00_1410;

												BgL_arg2644z00_1410 = (int) (((long) 16));
												{	/* Ast/lvtype.scm 29 */
													long BgL_auxz00_2312;

													BgL_auxz00_2312 = (long) (BgL_arg2644z00_1410);
													BgL_restz00_1409 =
														(BgL_offsetz00_1406 % BgL_auxz00_2312);
											}}
											{	/* Ast/lvtype.scm 29 */

												BgL_method3289z00_1399 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1404,
														(int) (BgL_modz00_1407)), (int) (BgL_restz00_1409));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3289z00_1399) (BgL_method3289z00_1399,
					(obj_t) (BgL_nodez00_1), BEOA);
			}
		}
	}



/* _lvtype-node! */
	obj_t BGl__lvtypezd2nodez12zc0zzast_lvtypez00(obj_t BgL_envz00_2156,
		obj_t BgL_nodez00_2157)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 29 */
			return
				BGl_lvtypezd2nodez12zc0zzast_lvtypez00(
				(BgL_nodez00_bglt) (BgL_nodez00_2157));
		}
	}



/* lvtype-node!-default3287 */
	obj_t BGl_lvtypezd2nodez12zd2default3287z12zzast_lvtypez00(BgL_nodez00_bglt
		BgL_nodez00_2)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 16 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string3512z00zzast_lvtypez00, (obj_t) (BgL_nodez00_2));
		}
	}



/* _lvtype-node!-default3287 */
	obj_t BGl__lvtypezd2nodez12zd2default3287z12zzast_lvtypez00(obj_t
		BgL_envz00_2158, obj_t BgL_nodez00_2159)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 16 */
			return
				BGl_lvtypezd2nodez12zd2default3287z12zzast_lvtypez00(
				(BgL_nodez00_bglt) (BgL_nodez00_2159));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_lvtypez00()
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00, BGl_atomz00zzast_nodez00,
				BGl_proc3513z00zzast_lvtypez00, BGl_string3511z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_kwotez00zzast_nodez00, BGl_proc3514z00zzast_lvtypez00,
				BGl_string3511z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00, BGl_varz00zzast_nodez00,
				BGl_proc3515z00zzast_lvtypez00, BGl_string3511z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_closurez00zzast_nodez00, BGl_proc3516z00zzast_lvtypez00,
				BGl_string3511z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_sequencez00zzast_nodez00, BGl_proc3517z00zzast_lvtypez00,
				BGl_string3511z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00, BGl_appz00zzast_nodez00,
				BGl_proc3518z00zzast_lvtypez00, BGl_string3511z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3519z00zzast_lvtypez00,
				BGl_string3511z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_funcallz00zzast_nodez00, BGl_proc3520z00zzast_lvtypez00,
				BGl_string3511z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_externz00zzast_nodez00, BGl_proc3521z00zzast_lvtypez00,
				BGl_string3511z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00, BGl_castz00zzast_nodez00,
				BGl_proc3522z00zzast_lvtypez00, BGl_string3511z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00, BGl_setqz00zzast_nodez00,
				BGl_proc3523z00zzast_lvtypez00, BGl_string3511z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3524z00zzast_lvtypez00,
				BGl_string3511z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00, BGl_failz00zzast_nodez00,
				BGl_proc3525z00zzast_lvtypez00, BGl_string3511z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_selectz00zzast_nodez00, BGl_proc3526z00zzast_lvtypez00,
				BGl_string3511z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3527z00zzast_lvtypez00,
				BGl_string3511z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3528z00zzast_lvtypez00,
				BGl_string3511z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3529z00zzast_lvtypez00,
				BGl_string3511z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3530z00zzast_lvtypez00,
				BGl_string3511z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3531z00zzast_lvtypez00,
				BGl_string3511z00zzast_lvtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3532z00zzast_lvtypez00,
				BGl_string3511z00zzast_lvtypez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3533z00zzast_lvtypez00,
				BGl_string3511z00zzast_lvtypez00);
		}
	}



/* lvtype-node!-box-ref3333 */
	obj_t BGl_lvtypezd2nodez12zd2boxzd2ref3333zc0zzast_lvtypez00(obj_t
		BgL_envz00_2181, obj_t BgL_nodez00_2182)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 192 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1360;

				BgL_nodez00_1360 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2182);
				{	/* Ast/lvtype.scm 193 */
					BgL_varz00_bglt BgL_arg3453z00_2128;

					BgL_arg3453z00_2128 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1360))->BgL_varz00);
					{	/* Ast/lvtype.scm 193 */
						BgL_nodez00_bglt BgL_nodez00_2130;

						BgL_nodez00_2130 = (BgL_nodez00_bglt) (BgL_arg3453z00_2128);
						{	/* Ast/lvtype.scm 193 */
							obj_t BgL_method3289z00_2131;

							{	/* Ast/lvtype.scm 193 */
								BgL_objectz00_bglt BgL_objz00_2132;

								BgL_objz00_2132 = (BgL_objectz00_bglt) (BgL_nodez00_2130);
								{	/* Ast/lvtype.scm 193 */
									long BgL_objzd2classzd2numz00_2133;

									BgL_objzd2classzd2numz00_2133 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2132);
									{	/* Ast/lvtype.scm 193 */
										obj_t BgL_arg2643z00_2134;

										BgL_arg2643z00_2134 =
											PROCEDURE_REF
											(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
											(int) (((long) 1)));
										{	/* Ast/lvtype.scm 193 */
											obj_t BgL_arrayz00_2136;

											int BgL_offsetz00_2137;

											BgL_arrayz00_2136 = BgL_arg2643z00_2134;
											BgL_offsetz00_2137 =
												(int) (BgL_objzd2classzd2numz00_2133);
											{	/* Ast/lvtype.scm 193 */
												long BgL_offsetz00_2138;

												BgL_offsetz00_2138 =
													((long) (BgL_offsetz00_2137) - OBJECT_TYPE);
												{	/* Ast/lvtype.scm 193 */
													long BgL_modz00_2139;

													{	/* Ast/lvtype.scm 193 */
														int BgL_arg2645z00_2140;

														BgL_arg2645z00_2140 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 193 */
															long BgL_auxz00_2360;

															BgL_auxz00_2360 = (long) (BgL_arg2645z00_2140);
															BgL_modz00_2139 =
																(BgL_offsetz00_2138 / BgL_auxz00_2360);
													}}
													{	/* Ast/lvtype.scm 193 */
														long BgL_restz00_2141;

														{	/* Ast/lvtype.scm 193 */
															int BgL_arg2644z00_2142;

															BgL_arg2644z00_2142 = (int) (((long) 16));
															{	/* Ast/lvtype.scm 193 */
																long BgL_auxz00_2364;

																BgL_auxz00_2364 = (long) (BgL_arg2644z00_2142);
																BgL_restz00_2141 =
																	(BgL_offsetz00_2138 % BgL_auxz00_2364);
														}}
														{	/* Ast/lvtype.scm 193 */

															BgL_method3289z00_2131 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2136,
																	(int) (BgL_modz00_2139)),
																(int) (BgL_restz00_2141));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3289z00_2131) (BgL_method3289z00_2131,
								(obj_t) (BgL_nodez00_2130), BEOA);
						}
					}
				}
			}
		}
	}



/* lvtype-node!-box-set3331 */
	obj_t BGl_lvtypezd2nodez12zd2boxzd2set3331zc0zzast_lvtypez00(obj_t
		BgL_envz00_2183, obj_t BgL_nodez00_2184)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 184 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1352;

				BgL_nodez00_1352 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2184);
				{	/* Ast/lvtype.scm 186 */
					BgL_varz00_bglt BgL_arg3450z00_1356;

					BgL_arg3450z00_1356 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1352))->BgL_varz00);
					{	/* Ast/lvtype.scm 186 */
						BgL_nodez00_bglt BgL_nodez00_2074;

						BgL_nodez00_2074 = (BgL_nodez00_bglt) (BgL_arg3450z00_1356);
						{	/* Ast/lvtype.scm 186 */
							obj_t BgL_method3289z00_2075;

							{	/* Ast/lvtype.scm 186 */
								BgL_objectz00_bglt BgL_objz00_2076;

								BgL_objz00_2076 = (BgL_objectz00_bglt) (BgL_nodez00_2074);
								{	/* Ast/lvtype.scm 186 */
									long BgL_objzd2classzd2numz00_2077;

									BgL_objzd2classzd2numz00_2077 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2076);
									{	/* Ast/lvtype.scm 186 */
										obj_t BgL_arg2643z00_2078;

										BgL_arg2643z00_2078 =
											PROCEDURE_REF
											(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
											(int) (((long) 1)));
										{	/* Ast/lvtype.scm 186 */
											obj_t BgL_arrayz00_2080;

											int BgL_offsetz00_2081;

											BgL_arrayz00_2080 = BgL_arg2643z00_2078;
											BgL_offsetz00_2081 =
												(int) (BgL_objzd2classzd2numz00_2077);
											{	/* Ast/lvtype.scm 186 */
												long BgL_offsetz00_2082;

												BgL_offsetz00_2082 =
													((long) (BgL_offsetz00_2081) - OBJECT_TYPE);
												{	/* Ast/lvtype.scm 186 */
													long BgL_modz00_2083;

													{	/* Ast/lvtype.scm 186 */
														int BgL_arg2645z00_2084;

														BgL_arg2645z00_2084 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 186 */
															long BgL_auxz00_2385;

															BgL_auxz00_2385 = (long) (BgL_arg2645z00_2084);
															BgL_modz00_2083 =
																(BgL_offsetz00_2082 / BgL_auxz00_2385);
													}}
													{	/* Ast/lvtype.scm 186 */
														long BgL_restz00_2085;

														{	/* Ast/lvtype.scm 186 */
															int BgL_arg2644z00_2086;

															BgL_arg2644z00_2086 = (int) (((long) 16));
															{	/* Ast/lvtype.scm 186 */
																long BgL_auxz00_2389;

																BgL_auxz00_2389 = (long) (BgL_arg2644z00_2086);
																BgL_restz00_2085 =
																	(BgL_offsetz00_2082 % BgL_auxz00_2389);
														}}
														{	/* Ast/lvtype.scm 186 */

															BgL_method3289z00_2075 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2080,
																	(int) (BgL_modz00_2083)),
																(int) (BgL_restz00_2085));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3289z00_2075) (BgL_method3289z00_2075,
								(obj_t) (BgL_nodez00_2074), BEOA);
				}}}
				{	/* Ast/lvtype.scm 187 */
					BgL_nodez00_bglt BgL_arg3451z00_1357;

					BgL_arg3451z00_1357 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1352))->BgL_valuez00);
					{	/* Ast/lvtype.scm 187 */
						obj_t BgL_method3289z00_2102;

						{	/* Ast/lvtype.scm 187 */
							BgL_objectz00_bglt BgL_objz00_2103;

							BgL_objz00_2103 = (BgL_objectz00_bglt) (BgL_arg3451z00_1357);
							{	/* Ast/lvtype.scm 187 */
								long BgL_objzd2classzd2numz00_2104;

								BgL_objzd2classzd2numz00_2104 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2103);
								{	/* Ast/lvtype.scm 187 */
									obj_t BgL_arg2643z00_2105;

									BgL_arg2643z00_2105 =
										PROCEDURE_REF(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
										(int) (((long) 1)));
									{	/* Ast/lvtype.scm 187 */
										obj_t BgL_arrayz00_2107;

										int BgL_offsetz00_2108;

										BgL_arrayz00_2107 = BgL_arg2643z00_2105;
										BgL_offsetz00_2108 = (int) (BgL_objzd2classzd2numz00_2104);
										{	/* Ast/lvtype.scm 187 */
											long BgL_offsetz00_2109;

											BgL_offsetz00_2109 =
												((long) (BgL_offsetz00_2108) - OBJECT_TYPE);
											{	/* Ast/lvtype.scm 187 */
												long BgL_modz00_2110;

												{	/* Ast/lvtype.scm 187 */
													int BgL_arg2645z00_2111;

													BgL_arg2645z00_2111 = (int) (((long) 16));
													{	/* Ast/lvtype.scm 187 */
														long BgL_auxz00_2408;

														BgL_auxz00_2408 = (long) (BgL_arg2645z00_2111);
														BgL_modz00_2110 =
															(BgL_offsetz00_2109 / BgL_auxz00_2408);
												}}
												{	/* Ast/lvtype.scm 187 */
													long BgL_restz00_2112;

													{	/* Ast/lvtype.scm 187 */
														int BgL_arg2644z00_2113;

														BgL_arg2644z00_2113 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 187 */
															long BgL_auxz00_2412;

															BgL_auxz00_2412 = (long) (BgL_arg2644z00_2113);
															BgL_restz00_2112 =
																(BgL_offsetz00_2109 % BgL_auxz00_2412);
													}}
													{	/* Ast/lvtype.scm 187 */

														BgL_method3289z00_2102 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2107,
																(int) (BgL_modz00_2110)),
															(int) (BgL_restz00_2112));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3289z00_2102) (BgL_method3289z00_2102,
							(obj_t) (BgL_arg3451z00_1357), BEOA);
					}
				}
			}
		}
	}



/* lvtype-node!-make-bo3328 */
	obj_t BGl_lvtypezd2nodez12zd2makezd2bo3328zc0zzast_lvtypez00(obj_t
		BgL_envz00_2185, obj_t BgL_nodez00_2186)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 177 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1345;

				BgL_nodez00_1345 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2186);
				{	/* Ast/lvtype.scm 178 */
					BgL_nodez00_bglt BgL_arg3448z00_2045;

					BgL_arg3448z00_2045 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1345))->BgL_valuez00);
					{	/* Ast/lvtype.scm 178 */
						obj_t BgL_method3289z00_2048;

						{	/* Ast/lvtype.scm 178 */
							BgL_objectz00_bglt BgL_objz00_2049;

							BgL_objz00_2049 = (BgL_objectz00_bglt) (BgL_arg3448z00_2045);
							{	/* Ast/lvtype.scm 178 */
								long BgL_objzd2classzd2numz00_2050;

								BgL_objzd2classzd2numz00_2050 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2049);
								{	/* Ast/lvtype.scm 178 */
									obj_t BgL_arg2643z00_2051;

									BgL_arg2643z00_2051 =
										PROCEDURE_REF(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
										(int) (((long) 1)));
									{	/* Ast/lvtype.scm 178 */
										obj_t BgL_arrayz00_2053;

										int BgL_offsetz00_2054;

										BgL_arrayz00_2053 = BgL_arg2643z00_2051;
										BgL_offsetz00_2054 = (int) (BgL_objzd2classzd2numz00_2050);
										{	/* Ast/lvtype.scm 178 */
											long BgL_offsetz00_2055;

											BgL_offsetz00_2055 =
												((long) (BgL_offsetz00_2054) - OBJECT_TYPE);
											{	/* Ast/lvtype.scm 178 */
												long BgL_modz00_2056;

												{	/* Ast/lvtype.scm 178 */
													int BgL_arg2645z00_2057;

													BgL_arg2645z00_2057 = (int) (((long) 16));
													{	/* Ast/lvtype.scm 178 */
														long BgL_auxz00_2432;

														BgL_auxz00_2432 = (long) (BgL_arg2645z00_2057);
														BgL_modz00_2056 =
															(BgL_offsetz00_2055 / BgL_auxz00_2432);
												}}
												{	/* Ast/lvtype.scm 178 */
													long BgL_restz00_2058;

													{	/* Ast/lvtype.scm 178 */
														int BgL_arg2644z00_2059;

														BgL_arg2644z00_2059 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 178 */
															long BgL_auxz00_2436;

															BgL_auxz00_2436 = (long) (BgL_arg2644z00_2059);
															BgL_restz00_2058 =
																(BgL_offsetz00_2055 % BgL_auxz00_2436);
													}}
													{	/* Ast/lvtype.scm 178 */

														BgL_method3289z00_2048 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2053,
																(int) (BgL_modz00_2056)),
															(int) (BgL_restz00_2058));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3289z00_2048) (BgL_method3289z00_2048,
							(obj_t) (BgL_arg3448z00_2045), BEOA);
					}
				}
			}
		}
	}



/* lvtype-node!-jump-ex3325 */
	obj_t BGl_lvtypezd2nodez12zd2jumpzd2ex3325zc0zzast_lvtypez00(obj_t
		BgL_envz00_2187, obj_t BgL_nodez00_2188)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 169 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1337;

				BgL_nodez00_1337 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2188);
				{	/* Ast/lvtype.scm 171 */
					BgL_nodez00_bglt BgL_arg3445z00_1341;

					BgL_arg3445z00_1341 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1337))->
						BgL_exitz00);
					{	/* Ast/lvtype.scm 171 */
						obj_t BgL_method3289z00_1992;

						{	/* Ast/lvtype.scm 171 */
							BgL_objectz00_bglt BgL_objz00_1993;

							BgL_objz00_1993 = (BgL_objectz00_bglt) (BgL_arg3445z00_1341);
							{	/* Ast/lvtype.scm 171 */
								long BgL_objzd2classzd2numz00_1994;

								BgL_objzd2classzd2numz00_1994 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1993);
								{	/* Ast/lvtype.scm 171 */
									obj_t BgL_arg2643z00_1995;

									BgL_arg2643z00_1995 =
										PROCEDURE_REF(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
										(int) (((long) 1)));
									{	/* Ast/lvtype.scm 171 */
										obj_t BgL_arrayz00_1997;

										int BgL_offsetz00_1998;

										BgL_arrayz00_1997 = BgL_arg2643z00_1995;
										BgL_offsetz00_1998 = (int) (BgL_objzd2classzd2numz00_1994);
										{	/* Ast/lvtype.scm 171 */
											long BgL_offsetz00_1999;

											BgL_offsetz00_1999 =
												((long) (BgL_offsetz00_1998) - OBJECT_TYPE);
											{	/* Ast/lvtype.scm 171 */
												long BgL_modz00_2000;

												{	/* Ast/lvtype.scm 171 */
													int BgL_arg2645z00_2001;

													BgL_arg2645z00_2001 = (int) (((long) 16));
													{	/* Ast/lvtype.scm 171 */
														long BgL_auxz00_2456;

														BgL_auxz00_2456 = (long) (BgL_arg2645z00_2001);
														BgL_modz00_2000 =
															(BgL_offsetz00_1999 / BgL_auxz00_2456);
												}}
												{	/* Ast/lvtype.scm 171 */
													long BgL_restz00_2002;

													{	/* Ast/lvtype.scm 171 */
														int BgL_arg2644z00_2003;

														BgL_arg2644z00_2003 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 171 */
															long BgL_auxz00_2460;

															BgL_auxz00_2460 = (long) (BgL_arg2644z00_2003);
															BgL_restz00_2002 =
																(BgL_offsetz00_1999 % BgL_auxz00_2460);
													}}
													{	/* Ast/lvtype.scm 171 */

														BgL_method3289z00_1992 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1997,
																(int) (BgL_modz00_2000)),
															(int) (BgL_restz00_2002));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3289z00_1992) (BgL_method3289z00_1992,
							(obj_t) (BgL_arg3445z00_1341), BEOA);
				}}
				{	/* Ast/lvtype.scm 172 */
					BgL_nodez00_bglt BgL_arg3446z00_1342;

					BgL_arg3446z00_1342 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1337))->
						BgL_valuez00);
					{	/* Ast/lvtype.scm 172 */
						obj_t BgL_method3289z00_2019;

						{	/* Ast/lvtype.scm 172 */
							BgL_objectz00_bglt BgL_objz00_2020;

							BgL_objz00_2020 = (BgL_objectz00_bglt) (BgL_arg3446z00_1342);
							{	/* Ast/lvtype.scm 172 */
								long BgL_objzd2classzd2numz00_2021;

								BgL_objzd2classzd2numz00_2021 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2020);
								{	/* Ast/lvtype.scm 172 */
									obj_t BgL_arg2643z00_2022;

									BgL_arg2643z00_2022 =
										PROCEDURE_REF(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
										(int) (((long) 1)));
									{	/* Ast/lvtype.scm 172 */
										obj_t BgL_arrayz00_2024;

										int BgL_offsetz00_2025;

										BgL_arrayz00_2024 = BgL_arg2643z00_2022;
										BgL_offsetz00_2025 = (int) (BgL_objzd2classzd2numz00_2021);
										{	/* Ast/lvtype.scm 172 */
											long BgL_offsetz00_2026;

											BgL_offsetz00_2026 =
												((long) (BgL_offsetz00_2025) - OBJECT_TYPE);
											{	/* Ast/lvtype.scm 172 */
												long BgL_modz00_2027;

												{	/* Ast/lvtype.scm 172 */
													int BgL_arg2645z00_2028;

													BgL_arg2645z00_2028 = (int) (((long) 16));
													{	/* Ast/lvtype.scm 172 */
														long BgL_auxz00_2479;

														BgL_auxz00_2479 = (long) (BgL_arg2645z00_2028);
														BgL_modz00_2027 =
															(BgL_offsetz00_2026 / BgL_auxz00_2479);
												}}
												{	/* Ast/lvtype.scm 172 */
													long BgL_restz00_2029;

													{	/* Ast/lvtype.scm 172 */
														int BgL_arg2644z00_2030;

														BgL_arg2644z00_2030 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 172 */
															long BgL_auxz00_2483;

															BgL_auxz00_2483 = (long) (BgL_arg2644z00_2030);
															BgL_restz00_2029 =
																(BgL_offsetz00_2026 % BgL_auxz00_2483);
													}}
													{	/* Ast/lvtype.scm 172 */

														BgL_method3289z00_2019 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2024,
																(int) (BgL_modz00_2027)),
															(int) (BgL_restz00_2029));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3289z00_2019) (BgL_method3289z00_2019,
							(obj_t) (BgL_arg3446z00_1342), BEOA);
					}
				}
			}
		}
	}



/* lvtype-node!-set-ex-3323 */
	obj_t BGl_lvtypezd2nodez12zd2setzd2exzd23323z12zzast_lvtypez00(obj_t
		BgL_envz00_2189, obj_t BgL_nodez00_2190)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 161 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1329;

				BgL_nodez00_1329 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2190);
				{	/* Ast/lvtype.scm 163 */
					BgL_nodez00_bglt BgL_arg3441z00_1333;

					BgL_arg3441z00_1333 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1329))->BgL_bodyz00);
					{	/* Ast/lvtype.scm 163 */
						obj_t BgL_method3289z00_1938;

						{	/* Ast/lvtype.scm 163 */
							BgL_objectz00_bglt BgL_objz00_1939;

							BgL_objz00_1939 = (BgL_objectz00_bglt) (BgL_arg3441z00_1333);
							{	/* Ast/lvtype.scm 163 */
								long BgL_objzd2classzd2numz00_1940;

								BgL_objzd2classzd2numz00_1940 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1939);
								{	/* Ast/lvtype.scm 163 */
									obj_t BgL_arg2643z00_1941;

									BgL_arg2643z00_1941 =
										PROCEDURE_REF(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
										(int) (((long) 1)));
									{	/* Ast/lvtype.scm 163 */
										obj_t BgL_arrayz00_1943;

										int BgL_offsetz00_1944;

										BgL_arrayz00_1943 = BgL_arg2643z00_1941;
										BgL_offsetz00_1944 = (int) (BgL_objzd2classzd2numz00_1940);
										{	/* Ast/lvtype.scm 163 */
											long BgL_offsetz00_1945;

											BgL_offsetz00_1945 =
												((long) (BgL_offsetz00_1944) - OBJECT_TYPE);
											{	/* Ast/lvtype.scm 163 */
												long BgL_modz00_1946;

												{	/* Ast/lvtype.scm 163 */
													int BgL_arg2645z00_1947;

													BgL_arg2645z00_1947 = (int) (((long) 16));
													{	/* Ast/lvtype.scm 163 */
														long BgL_auxz00_2503;

														BgL_auxz00_2503 = (long) (BgL_arg2645z00_1947);
														BgL_modz00_1946 =
															(BgL_offsetz00_1945 / BgL_auxz00_2503);
												}}
												{	/* Ast/lvtype.scm 163 */
													long BgL_restz00_1948;

													{	/* Ast/lvtype.scm 163 */
														int BgL_arg2644z00_1949;

														BgL_arg2644z00_1949 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 163 */
															long BgL_auxz00_2507;

															BgL_auxz00_2507 = (long) (BgL_arg2644z00_1949);
															BgL_restz00_1948 =
																(BgL_offsetz00_1945 % BgL_auxz00_2507);
													}}
													{	/* Ast/lvtype.scm 163 */

														BgL_method3289z00_1938 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1943,
																(int) (BgL_modz00_1946)),
															(int) (BgL_restz00_1948));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3289z00_1938) (BgL_method3289z00_1938,
							(obj_t) (BgL_arg3441z00_1333), BEOA);
				}}
				{	/* Ast/lvtype.scm 164 */
					BgL_varz00_bglt BgL_arg3443z00_1334;

					BgL_arg3443z00_1334 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1329))->BgL_varz00);
					{	/* Ast/lvtype.scm 164 */
						BgL_nodez00_bglt BgL_nodez00_1964;

						BgL_nodez00_1964 = (BgL_nodez00_bglt) (BgL_arg3443z00_1334);
						{	/* Ast/lvtype.scm 164 */
							obj_t BgL_method3289z00_1965;

							{	/* Ast/lvtype.scm 164 */
								BgL_objectz00_bglt BgL_objz00_1966;

								BgL_objz00_1966 = (BgL_objectz00_bglt) (BgL_nodez00_1964);
								{	/* Ast/lvtype.scm 164 */
									long BgL_objzd2classzd2numz00_1967;

									BgL_objzd2classzd2numz00_1967 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1966);
									{	/* Ast/lvtype.scm 164 */
										obj_t BgL_arg2643z00_1968;

										BgL_arg2643z00_1968 =
											PROCEDURE_REF
											(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
											(int) (((long) 1)));
										{	/* Ast/lvtype.scm 164 */
											obj_t BgL_arrayz00_1970;

											int BgL_offsetz00_1971;

											BgL_arrayz00_1970 = BgL_arg2643z00_1968;
											BgL_offsetz00_1971 =
												(int) (BgL_objzd2classzd2numz00_1967);
											{	/* Ast/lvtype.scm 164 */
												long BgL_offsetz00_1972;

												BgL_offsetz00_1972 =
													((long) (BgL_offsetz00_1971) - OBJECT_TYPE);
												{	/* Ast/lvtype.scm 164 */
													long BgL_modz00_1973;

													{	/* Ast/lvtype.scm 164 */
														int BgL_arg2645z00_1974;

														BgL_arg2645z00_1974 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 164 */
															long BgL_auxz00_2527;

															BgL_auxz00_2527 = (long) (BgL_arg2645z00_1974);
															BgL_modz00_1973 =
																(BgL_offsetz00_1972 / BgL_auxz00_2527);
													}}
													{	/* Ast/lvtype.scm 164 */
														long BgL_restz00_1975;

														{	/* Ast/lvtype.scm 164 */
															int BgL_arg2644z00_1976;

															BgL_arg2644z00_1976 = (int) (((long) 16));
															{	/* Ast/lvtype.scm 164 */
																long BgL_auxz00_2531;

																BgL_auxz00_2531 = (long) (BgL_arg2644z00_1976);
																BgL_restz00_1975 =
																	(BgL_offsetz00_1972 % BgL_auxz00_2531);
														}}
														{	/* Ast/lvtype.scm 164 */

															BgL_method3289z00_1965 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1970,
																	(int) (BgL_modz00_1973)),
																(int) (BgL_restz00_1975));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3289z00_1965) (BgL_method3289z00_1965,
								(obj_t) (BgL_nodez00_1964), BEOA);
						}
					}
				}
			}
		}
	}



/* lvtype-node!-let-var3321 */
	obj_t BGl_lvtypezd2nodez12zd2letzd2var3321zc0zzast_lvtypez00(obj_t
		BgL_envz00_2191, obj_t BgL_nodez00_2192)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 148 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1311;

				BgL_nodez00_1311 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2192);
				{	/* Ast/lvtype.scm 150 */
					obj_t BgL_g3284z00_1315;

					BgL_g3284z00_1315 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1311))->BgL_bindingsz00);
					{
						obj_t BgL_l3282z00_1317;

						BgL_l3282z00_1317 = BgL_g3284z00_1315;
					BgL_zc3anonymousza33435ze3z83_1318:
						if (PAIRP(BgL_l3282z00_1317))
							{	/* Ast/lvtype.scm 150 */
								{	/* Ast/lvtype.scm 151 */
									obj_t BgL_bindingz00_1320;

									BgL_bindingz00_1320 = CAR(BgL_l3282z00_1317);
									{	/* Ast/lvtype.scm 151 */
										obj_t BgL_varz00_1321;

										obj_t BgL_valz00_1322;

										BgL_varz00_1321 = CAR(BgL_bindingz00_1320);
										BgL_valz00_1322 = CDR(BgL_bindingz00_1320);
										{	/* Ast/lvtype.scm 153 */
											BgL_nodez00_bglt BgL_nodez00_1882;

											BgL_nodez00_1882 = (BgL_nodez00_bglt) (BgL_valz00_1322);
											{	/* Ast/lvtype.scm 153 */
												obj_t BgL_method3289z00_1883;

												{	/* Ast/lvtype.scm 153 */
													BgL_objectz00_bglt BgL_objz00_1884;

													BgL_objz00_1884 =
														(BgL_objectz00_bglt) (BgL_nodez00_1882);
													{	/* Ast/lvtype.scm 153 */
														long BgL_objzd2classzd2numz00_1885;

														BgL_objzd2classzd2numz00_1885 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1884);
														{	/* Ast/lvtype.scm 153 */
															obj_t BgL_arg2643z00_1886;

															BgL_arg2643z00_1886 =
																PROCEDURE_REF
																(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
																(int) (((long) 1)));
															{	/* Ast/lvtype.scm 153 */
																obj_t BgL_arrayz00_1888;

																int BgL_offsetz00_1889;

																BgL_arrayz00_1888 = BgL_arg2643z00_1886;
																BgL_offsetz00_1889 =
																	(int) (BgL_objzd2classzd2numz00_1885);
																{	/* Ast/lvtype.scm 153 */
																	long BgL_offsetz00_1890;

																	BgL_offsetz00_1890 =
																		((long) (BgL_offsetz00_1889) - OBJECT_TYPE);
																	{	/* Ast/lvtype.scm 153 */
																		long BgL_modz00_1891;

																		{	/* Ast/lvtype.scm 153 */
																			int BgL_arg2645z00_1892;

																			BgL_arg2645z00_1892 = (int) (((long) 16));
																			{	/* Ast/lvtype.scm 153 */
																				long BgL_auxz00_2557;

																				BgL_auxz00_2557 =
																					(long) (BgL_arg2645z00_1892);
																				BgL_modz00_1891 =
																					(BgL_offsetz00_1890 /
																					BgL_auxz00_2557);
																		}}
																		{	/* Ast/lvtype.scm 153 */
																			long BgL_restz00_1893;

																			{	/* Ast/lvtype.scm 153 */
																				int BgL_arg2644z00_1894;

																				BgL_arg2644z00_1894 =
																					(int) (((long) 16));
																				{	/* Ast/lvtype.scm 153 */
																					long BgL_auxz00_2561;

																					BgL_auxz00_2561 =
																						(long) (BgL_arg2644z00_1894);
																					BgL_restz00_1893 =
																						(BgL_offsetz00_1890 %
																						BgL_auxz00_2561);
																			}}
																			{	/* Ast/lvtype.scm 153 */

																				BgL_method3289z00_1883 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1888,
																						(int) (BgL_modz00_1891)),
																					(int) (BgL_restz00_1893));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method3289z00_1883)
													(BgL_method3289z00_1883, (obj_t) (BgL_nodez00_1882),
													BEOA);
										}}
										BGl_setzd2variablezd2typez12z12zzast_lvtypez00(
											(BgL_variablez00_bglt) (BgL_varz00_1321),
											BGl_getzd2typezd2zztype_typeofz00(
												(BgL_nodez00_bglt) (BgL_valz00_1322)));
								}}
								{
									obj_t BgL_l3282z00_2575;

									BgL_l3282z00_2575 = CDR(BgL_l3282z00_1317);
									BgL_l3282z00_1317 = BgL_l3282z00_2575;
									goto BgL_zc3anonymousza33435ze3z83_1318;
								}
							}
						else
							{	/* Ast/lvtype.scm 150 */
								((bool_t) 1);
							}
					}
				}
				{	/* Ast/lvtype.scm 156 */
					BgL_nodez00_bglt BgL_arg3439z00_1326;

					BgL_arg3439z00_1326 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1311))->BgL_bodyz00);
					{	/* Ast/lvtype.scm 156 */
						obj_t BgL_method3289z00_1911;

						{	/* Ast/lvtype.scm 156 */
							BgL_objectz00_bglt BgL_objz00_1912;

							BgL_objz00_1912 = (BgL_objectz00_bglt) (BgL_arg3439z00_1326);
							{	/* Ast/lvtype.scm 156 */
								long BgL_objzd2classzd2numz00_1913;

								BgL_objzd2classzd2numz00_1913 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1912);
								{	/* Ast/lvtype.scm 156 */
									obj_t BgL_arg2643z00_1914;

									BgL_arg2643z00_1914 =
										PROCEDURE_REF(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
										(int) (((long) 1)));
									{	/* Ast/lvtype.scm 156 */
										obj_t BgL_arrayz00_1916;

										int BgL_offsetz00_1917;

										BgL_arrayz00_1916 = BgL_arg2643z00_1914;
										BgL_offsetz00_1917 = (int) (BgL_objzd2classzd2numz00_1913);
										{	/* Ast/lvtype.scm 156 */
											long BgL_offsetz00_1918;

											BgL_offsetz00_1918 =
												((long) (BgL_offsetz00_1917) - OBJECT_TYPE);
											{	/* Ast/lvtype.scm 156 */
												long BgL_modz00_1919;

												{	/* Ast/lvtype.scm 156 */
													int BgL_arg2645z00_1920;

													BgL_arg2645z00_1920 = (int) (((long) 16));
													{	/* Ast/lvtype.scm 156 */
														long BgL_auxz00_2586;

														BgL_auxz00_2586 = (long) (BgL_arg2645z00_1920);
														BgL_modz00_1919 =
															(BgL_offsetz00_1918 / BgL_auxz00_2586);
												}}
												{	/* Ast/lvtype.scm 156 */
													long BgL_restz00_1921;

													{	/* Ast/lvtype.scm 156 */
														int BgL_arg2644z00_1922;

														BgL_arg2644z00_1922 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 156 */
															long BgL_auxz00_2590;

															BgL_auxz00_2590 = (long) (BgL_arg2644z00_1922);
															BgL_restz00_1921 =
																(BgL_offsetz00_1918 % BgL_auxz00_2590);
													}}
													{	/* Ast/lvtype.scm 156 */

														BgL_method3289z00_1911 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1916,
																(int) (BgL_modz00_1919)),
															(int) (BgL_restz00_1921));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3289z00_1911) (BgL_method3289z00_1911,
							(obj_t) (BgL_arg3439z00_1326), BEOA);
					}
				}
			}
		}
	}



/* lvtype-node!-let-fun3319 */
	obj_t BGl_lvtypezd2nodez12zd2letzd2fun3319zc0zzast_lvtypez00(obj_t
		BgL_envz00_2193, obj_t BgL_nodez00_2194)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 138 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1294;

				BgL_nodez00_1294 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2194);
				{	/* Ast/lvtype.scm 140 */
					obj_t BgL_g3281z00_1298;

					BgL_g3281z00_1298 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1294))->BgL_localsz00);
					{
						obj_t BgL_l3279z00_1300;

						BgL_l3279z00_1300 = BgL_g3281z00_1298;
					BgL_zc3anonymousza33427ze3z83_1301:
						if (PAIRP(BgL_l3279z00_1300))
							{	/* Ast/lvtype.scm 140 */
								{	/* Ast/lvtype.scm 141 */
									obj_t BgL_localz00_1303;

									BgL_localz00_1303 = CAR(BgL_l3279z00_1300);
									{	/* Ast/lvtype.scm 141 */
										obj_t BgL_arg3430z00_1304;

										{	/* Ast/lvtype.scm 141 */
											BgL_sfunz00_bglt BgL_obj1884z00_1822;

											{	/* Ast/lvtype.scm 141 */
												BgL_variablez00_bglt BgL_obj1611z00_1821;

												BgL_obj1611z00_1821 =
													(BgL_variablez00_bglt) (BgL_localz00_1303);
												BgL_obj1884z00_1822 =
													(BgL_sfunz00_bglt) (
													(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1821))->
														BgL_valuez00));
											}
											BgL_arg3430z00_1304 =
												(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_1822))->
												BgL_bodyz00);
										}
										{	/* Ast/lvtype.scm 141 */
											BgL_nodez00_bglt BgL_nodez00_1823;

											BgL_nodez00_1823 =
												(BgL_nodez00_bglt) (BgL_arg3430z00_1304);
											{	/* Ast/lvtype.scm 141 */
												obj_t BgL_method3289z00_1824;

												{	/* Ast/lvtype.scm 141 */
													BgL_objectz00_bglt BgL_objz00_1825;

													BgL_objz00_1825 =
														(BgL_objectz00_bglt) (BgL_nodez00_1823);
													{	/* Ast/lvtype.scm 141 */
														long BgL_objzd2classzd2numz00_1826;

														BgL_objzd2classzd2numz00_1826 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1825);
														{	/* Ast/lvtype.scm 141 */
															obj_t BgL_arg2643z00_1827;

															BgL_arg2643z00_1827 =
																PROCEDURE_REF
																(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
																(int) (((long) 1)));
															{	/* Ast/lvtype.scm 141 */
																obj_t BgL_arrayz00_1829;

																int BgL_offsetz00_1830;

																BgL_arrayz00_1829 = BgL_arg2643z00_1827;
																BgL_offsetz00_1830 =
																	(int) (BgL_objzd2classzd2numz00_1826);
																{	/* Ast/lvtype.scm 141 */
																	long BgL_offsetz00_1831;

																	BgL_offsetz00_1831 =
																		((long) (BgL_offsetz00_1830) - OBJECT_TYPE);
																	{	/* Ast/lvtype.scm 141 */
																		long BgL_modz00_1832;

																		{	/* Ast/lvtype.scm 141 */
																			int BgL_arg2645z00_1833;

																			BgL_arg2645z00_1833 = (int) (((long) 16));
																			{	/* Ast/lvtype.scm 141 */
																				long BgL_auxz00_2618;

																				BgL_auxz00_2618 =
																					(long) (BgL_arg2645z00_1833);
																				BgL_modz00_1832 =
																					(BgL_offsetz00_1831 /
																					BgL_auxz00_2618);
																		}}
																		{	/* Ast/lvtype.scm 141 */
																			long BgL_restz00_1834;

																			{	/* Ast/lvtype.scm 141 */
																				int BgL_arg2644z00_1835;

																				BgL_arg2644z00_1835 =
																					(int) (((long) 16));
																				{	/* Ast/lvtype.scm 141 */
																					long BgL_auxz00_2622;

																					BgL_auxz00_2622 =
																						(long) (BgL_arg2644z00_1835);
																					BgL_restz00_1834 =
																						(BgL_offsetz00_1831 %
																						BgL_auxz00_2622);
																			}}
																			{	/* Ast/lvtype.scm 141 */

																				BgL_method3289z00_1824 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1829,
																						(int) (BgL_modz00_1832)),
																					(int) (BgL_restz00_1834));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method3289z00_1824)
													(BgL_method3289z00_1824, (obj_t) (BgL_nodez00_1823),
													BEOA);
								}}}}
								{
									obj_t BgL_l3279z00_2632;

									BgL_l3279z00_2632 = CDR(BgL_l3279z00_1300);
									BgL_l3279z00_1300 = BgL_l3279z00_2632;
									goto BgL_zc3anonymousza33427ze3z83_1301;
								}
							}
						else
							{	/* Ast/lvtype.scm 140 */
								((bool_t) 1);
							}
					}
				}
				{	/* Ast/lvtype.scm 143 */
					BgL_nodez00_bglt BgL_arg3433z00_1308;

					BgL_arg3433z00_1308 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1294))->BgL_bodyz00);
					{	/* Ast/lvtype.scm 143 */
						obj_t BgL_method3289z00_1852;

						{	/* Ast/lvtype.scm 143 */
							BgL_objectz00_bglt BgL_objz00_1853;

							BgL_objz00_1853 = (BgL_objectz00_bglt) (BgL_arg3433z00_1308);
							{	/* Ast/lvtype.scm 143 */
								long BgL_objzd2classzd2numz00_1854;

								BgL_objzd2classzd2numz00_1854 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1853);
								{	/* Ast/lvtype.scm 143 */
									obj_t BgL_arg2643z00_1855;

									BgL_arg2643z00_1855 =
										PROCEDURE_REF(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
										(int) (((long) 1)));
									{	/* Ast/lvtype.scm 143 */
										obj_t BgL_arrayz00_1857;

										int BgL_offsetz00_1858;

										BgL_arrayz00_1857 = BgL_arg2643z00_1855;
										BgL_offsetz00_1858 = (int) (BgL_objzd2classzd2numz00_1854);
										{	/* Ast/lvtype.scm 143 */
											long BgL_offsetz00_1859;

											BgL_offsetz00_1859 =
												((long) (BgL_offsetz00_1858) - OBJECT_TYPE);
											{	/* Ast/lvtype.scm 143 */
												long BgL_modz00_1860;

												{	/* Ast/lvtype.scm 143 */
													int BgL_arg2645z00_1861;

													BgL_arg2645z00_1861 = (int) (((long) 16));
													{	/* Ast/lvtype.scm 143 */
														long BgL_auxz00_2643;

														BgL_auxz00_2643 = (long) (BgL_arg2645z00_1861);
														BgL_modz00_1860 =
															(BgL_offsetz00_1859 / BgL_auxz00_2643);
												}}
												{	/* Ast/lvtype.scm 143 */
													long BgL_restz00_1862;

													{	/* Ast/lvtype.scm 143 */
														int BgL_arg2644z00_1863;

														BgL_arg2644z00_1863 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 143 */
															long BgL_auxz00_2647;

															BgL_auxz00_2647 = (long) (BgL_arg2644z00_1863);
															BgL_restz00_1862 =
																(BgL_offsetz00_1859 % BgL_auxz00_2647);
													}}
													{	/* Ast/lvtype.scm 143 */

														BgL_method3289z00_1852 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1857,
																(int) (BgL_modz00_1860)),
															(int) (BgL_restz00_1862));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3289z00_1852) (BgL_method3289z00_1852,
							(obj_t) (BgL_arg3433z00_1308), BEOA);
					}
				}
			}
		}
	}



/* lvtype-node!-select3317 */
	obj_t BGl_lvtypezd2nodez12zd2select3317z12zzast_lvtypez00(obj_t
		BgL_envz00_2195, obj_t BgL_nodez00_2196)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 128 */
			{
				BgL_selectz00_bglt BgL_nodez00_1278;

				{	/* Ast/lvtype.scm 129 */
					bool_t BgL_auxz00_2658;

					BgL_nodez00_1278 = (BgL_selectz00_bglt) (BgL_nodez00_2196);
					{	/* Ast/lvtype.scm 130 */
						BgL_nodez00_bglt BgL_arg3420z00_1282;

						BgL_arg3420z00_1282 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1278))->BgL_testz00);
						{	/* Ast/lvtype.scm 130 */
							obj_t BgL_method3289z00_1762;

							{	/* Ast/lvtype.scm 130 */
								BgL_objectz00_bglt BgL_objz00_1763;

								BgL_objz00_1763 = (BgL_objectz00_bglt) (BgL_arg3420z00_1282);
								{	/* Ast/lvtype.scm 130 */
									long BgL_objzd2classzd2numz00_1764;

									BgL_objzd2classzd2numz00_1764 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1763);
									{	/* Ast/lvtype.scm 130 */
										obj_t BgL_arg2643z00_1765;

										BgL_arg2643z00_1765 =
											PROCEDURE_REF
											(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
											(int) (((long) 1)));
										{	/* Ast/lvtype.scm 130 */
											obj_t BgL_arrayz00_1767;

											int BgL_offsetz00_1768;

											BgL_arrayz00_1767 = BgL_arg2643z00_1765;
											BgL_offsetz00_1768 =
												(int) (BgL_objzd2classzd2numz00_1764);
											{	/* Ast/lvtype.scm 130 */
												long BgL_offsetz00_1769;

												BgL_offsetz00_1769 =
													((long) (BgL_offsetz00_1768) - OBJECT_TYPE);
												{	/* Ast/lvtype.scm 130 */
													long BgL_modz00_1770;

													{	/* Ast/lvtype.scm 130 */
														int BgL_arg2645z00_1771;

														BgL_arg2645z00_1771 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 130 */
															long BgL_auxz00_2668;

															BgL_auxz00_2668 = (long) (BgL_arg2645z00_1771);
															BgL_modz00_1770 =
																(BgL_offsetz00_1769 / BgL_auxz00_2668);
													}}
													{	/* Ast/lvtype.scm 130 */
														long BgL_restz00_1772;

														{	/* Ast/lvtype.scm 130 */
															int BgL_arg2644z00_1773;

															BgL_arg2644z00_1773 = (int) (((long) 16));
															{	/* Ast/lvtype.scm 130 */
																long BgL_auxz00_2672;

																BgL_auxz00_2672 = (long) (BgL_arg2644z00_1773);
																BgL_restz00_1772 =
																	(BgL_offsetz00_1769 % BgL_auxz00_2672);
														}}
														{	/* Ast/lvtype.scm 130 */

															BgL_method3289z00_1762 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1767,
																	(int) (BgL_modz00_1770)),
																(int) (BgL_restz00_1772));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3289z00_1762) (BgL_method3289z00_1762,
								(obj_t) (BgL_arg3420z00_1282), BEOA);
					}}
					{	/* Ast/lvtype.scm 131 */
						obj_t BgL_g3278z00_1283;

						BgL_g3278z00_1283 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1278))->BgL_clausesz00);
						{
							obj_t BgL_l3276z00_1285;

							BgL_l3276z00_1285 = BgL_g3278z00_1283;
						BgL_zc3anonymousza33421ze3z83_1286:
							if (PAIRP(BgL_l3276z00_1285))
								{	/* Ast/lvtype.scm 131 */
									{	/* Ast/lvtype.scm 132 */
										obj_t BgL_clausez00_1288;

										BgL_clausez00_1288 = CAR(BgL_l3276z00_1285);
										{	/* Ast/lvtype.scm 132 */
											obj_t BgL_arg3424z00_1289;

											BgL_arg3424z00_1289 = CDR(BgL_clausez00_1288);
											{	/* Ast/lvtype.scm 132 */
												BgL_nodez00_bglt BgL_nodez00_1791;

												BgL_nodez00_1791 =
													(BgL_nodez00_bglt) (BgL_arg3424z00_1289);
												{	/* Ast/lvtype.scm 132 */
													obj_t BgL_method3289z00_1792;

													{	/* Ast/lvtype.scm 132 */
														BgL_objectz00_bglt BgL_objz00_1793;

														BgL_objz00_1793 =
															(BgL_objectz00_bglt) (BgL_nodez00_1791);
														{	/* Ast/lvtype.scm 132 */
															long BgL_objzd2classzd2numz00_1794;

															BgL_objzd2classzd2numz00_1794 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_1793);
															{	/* Ast/lvtype.scm 132 */
																obj_t BgL_arg2643z00_1795;

																BgL_arg2643z00_1795 =
																	PROCEDURE_REF
																	(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
																	(int) (((long) 1)));
																{	/* Ast/lvtype.scm 132 */
																	obj_t BgL_arrayz00_1797;

																	int BgL_offsetz00_1798;

																	BgL_arrayz00_1797 = BgL_arg2643z00_1795;
																	BgL_offsetz00_1798 =
																		(int) (BgL_objzd2classzd2numz00_1794);
																	{	/* Ast/lvtype.scm 132 */
																		long BgL_offsetz00_1799;

																		BgL_offsetz00_1799 =
																			(
																			(long) (BgL_offsetz00_1798) -
																			OBJECT_TYPE);
																		{	/* Ast/lvtype.scm 132 */
																			long BgL_modz00_1800;

																			{	/* Ast/lvtype.scm 132 */
																				int BgL_arg2645z00_1801;

																				BgL_arg2645z00_1801 =
																					(int) (((long) 16));
																				{	/* Ast/lvtype.scm 132 */
																					long BgL_auxz00_2696;

																					BgL_auxz00_2696 =
																						(long) (BgL_arg2645z00_1801);
																					BgL_modz00_1800 =
																						(BgL_offsetz00_1799 /
																						BgL_auxz00_2696);
																			}}
																			{	/* Ast/lvtype.scm 132 */
																				long BgL_restz00_1802;

																				{	/* Ast/lvtype.scm 132 */
																					int BgL_arg2644z00_1803;

																					BgL_arg2644z00_1803 =
																						(int) (((long) 16));
																					{	/* Ast/lvtype.scm 132 */
																						long BgL_auxz00_2700;

																						BgL_auxz00_2700 =
																							(long) (BgL_arg2644z00_1803);
																						BgL_restz00_1802 =
																							(BgL_offsetz00_1799 %
																							BgL_auxz00_2700);
																				}}
																				{	/* Ast/lvtype.scm 132 */

																					BgL_method3289z00_1792 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_1797,
																							(int) (BgL_modz00_1800)),
																						(int) (BgL_restz00_1802));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method3289z00_1792)
														(BgL_method3289z00_1792, (obj_t) (BgL_nodez00_1791),
														BEOA);
									}}}}
									{
										obj_t BgL_l3276z00_2710;

										BgL_l3276z00_2710 = CDR(BgL_l3276z00_1285);
										BgL_l3276z00_1285 = BgL_l3276z00_2710;
										goto BgL_zc3anonymousza33421ze3z83_1286;
									}
								}
							else
								{	/* Ast/lvtype.scm 131 */
									BgL_auxz00_2658 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_2658);
				}
			}
		}
	}



/* lvtype-node!-fail3315 */
	obj_t BGl_lvtypezd2nodez12zd2fail3315z12zzast_lvtypez00(obj_t BgL_envz00_2197,
		obj_t BgL_nodez00_2198)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 119 */
			{
				BgL_failz00_bglt BgL_nodez00_1269;

				BgL_nodez00_1269 = (BgL_failz00_bglt) (BgL_nodez00_2198);
				{	/* Ast/lvtype.scm 121 */
					BgL_nodez00_bglt BgL_arg3416z00_1273;

					BgL_arg3416z00_1273 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1269))->BgL_procz00);
					{	/* Ast/lvtype.scm 121 */
						obj_t BgL_method3289z00_1681;

						{	/* Ast/lvtype.scm 121 */
							BgL_objectz00_bglt BgL_objz00_1682;

							BgL_objz00_1682 = (BgL_objectz00_bglt) (BgL_arg3416z00_1273);
							{	/* Ast/lvtype.scm 121 */
								long BgL_objzd2classzd2numz00_1683;

								BgL_objzd2classzd2numz00_1683 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1682);
								{	/* Ast/lvtype.scm 121 */
									obj_t BgL_arg2643z00_1684;

									BgL_arg2643z00_1684 =
										PROCEDURE_REF(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
										(int) (((long) 1)));
									{	/* Ast/lvtype.scm 121 */
										obj_t BgL_arrayz00_1686;

										int BgL_offsetz00_1687;

										BgL_arrayz00_1686 = BgL_arg2643z00_1684;
										BgL_offsetz00_1687 = (int) (BgL_objzd2classzd2numz00_1683);
										{	/* Ast/lvtype.scm 121 */
											long BgL_offsetz00_1688;

											BgL_offsetz00_1688 =
												((long) (BgL_offsetz00_1687) - OBJECT_TYPE);
											{	/* Ast/lvtype.scm 121 */
												long BgL_modz00_1689;

												{	/* Ast/lvtype.scm 121 */
													int BgL_arg2645z00_1690;

													BgL_arg2645z00_1690 = (int) (((long) 16));
													{	/* Ast/lvtype.scm 121 */
														long BgL_auxz00_2723;

														BgL_auxz00_2723 = (long) (BgL_arg2645z00_1690);
														BgL_modz00_1689 =
															(BgL_offsetz00_1688 / BgL_auxz00_2723);
												}}
												{	/* Ast/lvtype.scm 121 */
													long BgL_restz00_1691;

													{	/* Ast/lvtype.scm 121 */
														int BgL_arg2644z00_1692;

														BgL_arg2644z00_1692 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 121 */
															long BgL_auxz00_2727;

															BgL_auxz00_2727 = (long) (BgL_arg2644z00_1692);
															BgL_restz00_1691 =
																(BgL_offsetz00_1688 % BgL_auxz00_2727);
													}}
													{	/* Ast/lvtype.scm 121 */

														BgL_method3289z00_1681 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1686,
																(int) (BgL_modz00_1689)),
															(int) (BgL_restz00_1691));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3289z00_1681) (BgL_method3289z00_1681,
							(obj_t) (BgL_arg3416z00_1273), BEOA);
				}}
				{	/* Ast/lvtype.scm 122 */
					BgL_nodez00_bglt BgL_arg3417z00_1274;

					BgL_arg3417z00_1274 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1269))->BgL_msgz00);
					{	/* Ast/lvtype.scm 122 */
						obj_t BgL_method3289z00_1708;

						{	/* Ast/lvtype.scm 122 */
							BgL_objectz00_bglt BgL_objz00_1709;

							BgL_objz00_1709 = (BgL_objectz00_bglt) (BgL_arg3417z00_1274);
							{	/* Ast/lvtype.scm 122 */
								long BgL_objzd2classzd2numz00_1710;

								BgL_objzd2classzd2numz00_1710 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1709);
								{	/* Ast/lvtype.scm 122 */
									obj_t BgL_arg2643z00_1711;

									BgL_arg2643z00_1711 =
										PROCEDURE_REF(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
										(int) (((long) 1)));
									{	/* Ast/lvtype.scm 122 */
										obj_t BgL_arrayz00_1713;

										int BgL_offsetz00_1714;

										BgL_arrayz00_1713 = BgL_arg2643z00_1711;
										BgL_offsetz00_1714 = (int) (BgL_objzd2classzd2numz00_1710);
										{	/* Ast/lvtype.scm 122 */
											long BgL_offsetz00_1715;

											BgL_offsetz00_1715 =
												((long) (BgL_offsetz00_1714) - OBJECT_TYPE);
											{	/* Ast/lvtype.scm 122 */
												long BgL_modz00_1716;

												{	/* Ast/lvtype.scm 122 */
													int BgL_arg2645z00_1717;

													BgL_arg2645z00_1717 = (int) (((long) 16));
													{	/* Ast/lvtype.scm 122 */
														long BgL_auxz00_2746;

														BgL_auxz00_2746 = (long) (BgL_arg2645z00_1717);
														BgL_modz00_1716 =
															(BgL_offsetz00_1715 / BgL_auxz00_2746);
												}}
												{	/* Ast/lvtype.scm 122 */
													long BgL_restz00_1718;

													{	/* Ast/lvtype.scm 122 */
														int BgL_arg2644z00_1719;

														BgL_arg2644z00_1719 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 122 */
															long BgL_auxz00_2750;

															BgL_auxz00_2750 = (long) (BgL_arg2644z00_1719);
															BgL_restz00_1718 =
																(BgL_offsetz00_1715 % BgL_auxz00_2750);
													}}
													{	/* Ast/lvtype.scm 122 */

														BgL_method3289z00_1708 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1713,
																(int) (BgL_modz00_1716)),
															(int) (BgL_restz00_1718));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3289z00_1708) (BgL_method3289z00_1708,
							(obj_t) (BgL_arg3417z00_1274), BEOA);
				}}
				{	/* Ast/lvtype.scm 123 */
					BgL_nodez00_bglt BgL_arg3418z00_1275;

					BgL_arg3418z00_1275 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1269))->BgL_objz00);
					{	/* Ast/lvtype.scm 123 */
						obj_t BgL_method3289z00_1735;

						{	/* Ast/lvtype.scm 123 */
							BgL_objectz00_bglt BgL_objz00_1736;

							BgL_objz00_1736 = (BgL_objectz00_bglt) (BgL_arg3418z00_1275);
							{	/* Ast/lvtype.scm 123 */
								long BgL_objzd2classzd2numz00_1737;

								BgL_objzd2classzd2numz00_1737 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1736);
								{	/* Ast/lvtype.scm 123 */
									obj_t BgL_arg2643z00_1738;

									BgL_arg2643z00_1738 =
										PROCEDURE_REF(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
										(int) (((long) 1)));
									{	/* Ast/lvtype.scm 123 */
										obj_t BgL_arrayz00_1740;

										int BgL_offsetz00_1741;

										BgL_arrayz00_1740 = BgL_arg2643z00_1738;
										BgL_offsetz00_1741 = (int) (BgL_objzd2classzd2numz00_1737);
										{	/* Ast/lvtype.scm 123 */
											long BgL_offsetz00_1742;

											BgL_offsetz00_1742 =
												((long) (BgL_offsetz00_1741) - OBJECT_TYPE);
											{	/* Ast/lvtype.scm 123 */
												long BgL_modz00_1743;

												{	/* Ast/lvtype.scm 123 */
													int BgL_arg2645z00_1744;

													BgL_arg2645z00_1744 = (int) (((long) 16));
													{	/* Ast/lvtype.scm 123 */
														long BgL_auxz00_2769;

														BgL_auxz00_2769 = (long) (BgL_arg2645z00_1744);
														BgL_modz00_1743 =
															(BgL_offsetz00_1742 / BgL_auxz00_2769);
												}}
												{	/* Ast/lvtype.scm 123 */
													long BgL_restz00_1745;

													{	/* Ast/lvtype.scm 123 */
														int BgL_arg2644z00_1746;

														BgL_arg2644z00_1746 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 123 */
															long BgL_auxz00_2773;

															BgL_auxz00_2773 = (long) (BgL_arg2644z00_1746);
															BgL_restz00_1745 =
																(BgL_offsetz00_1742 % BgL_auxz00_2773);
													}}
													{	/* Ast/lvtype.scm 123 */

														BgL_method3289z00_1735 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1740,
																(int) (BgL_modz00_1743)),
															(int) (BgL_restz00_1745));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3289z00_1735) (BgL_method3289z00_1735,
							(obj_t) (BgL_arg3418z00_1275), BEOA);
					}
				}
			}
		}
	}



/* lvtype-node!-conditi3313 */
	obj_t BGl_lvtypezd2nodez12zd2conditi3313z12zzast_lvtypez00(obj_t
		BgL_envz00_2199, obj_t BgL_nodez00_2200)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 110 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1260;

				BgL_nodez00_1260 = (BgL_conditionalz00_bglt) (BgL_nodez00_2200);
				{	/* Ast/lvtype.scm 112 */
					BgL_nodez00_bglt BgL_arg3412z00_1264;

					BgL_arg3412z00_1264 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1260))->BgL_testz00);
					{	/* Ast/lvtype.scm 112 */
						obj_t BgL_method3289z00_1600;

						{	/* Ast/lvtype.scm 112 */
							BgL_objectz00_bglt BgL_objz00_1601;

							BgL_objz00_1601 = (BgL_objectz00_bglt) (BgL_arg3412z00_1264);
							{	/* Ast/lvtype.scm 112 */
								long BgL_objzd2classzd2numz00_1602;

								BgL_objzd2classzd2numz00_1602 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1601);
								{	/* Ast/lvtype.scm 112 */
									obj_t BgL_arg2643z00_1603;

									BgL_arg2643z00_1603 =
										PROCEDURE_REF(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
										(int) (((long) 1)));
									{	/* Ast/lvtype.scm 112 */
										obj_t BgL_arrayz00_1605;

										int BgL_offsetz00_1606;

										BgL_arrayz00_1605 = BgL_arg2643z00_1603;
										BgL_offsetz00_1606 = (int) (BgL_objzd2classzd2numz00_1602);
										{	/* Ast/lvtype.scm 112 */
											long BgL_offsetz00_1607;

											BgL_offsetz00_1607 =
												((long) (BgL_offsetz00_1606) - OBJECT_TYPE);
											{	/* Ast/lvtype.scm 112 */
												long BgL_modz00_1608;

												{	/* Ast/lvtype.scm 112 */
													int BgL_arg2645z00_1609;

													BgL_arg2645z00_1609 = (int) (((long) 16));
													{	/* Ast/lvtype.scm 112 */
														long BgL_auxz00_2793;

														BgL_auxz00_2793 = (long) (BgL_arg2645z00_1609);
														BgL_modz00_1608 =
															(BgL_offsetz00_1607 / BgL_auxz00_2793);
												}}
												{	/* Ast/lvtype.scm 112 */
													long BgL_restz00_1610;

													{	/* Ast/lvtype.scm 112 */
														int BgL_arg2644z00_1611;

														BgL_arg2644z00_1611 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 112 */
															long BgL_auxz00_2797;

															BgL_auxz00_2797 = (long) (BgL_arg2644z00_1611);
															BgL_restz00_1610 =
																(BgL_offsetz00_1607 % BgL_auxz00_2797);
													}}
													{	/* Ast/lvtype.scm 112 */

														BgL_method3289z00_1600 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1605,
																(int) (BgL_modz00_1608)),
															(int) (BgL_restz00_1610));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3289z00_1600) (BgL_method3289z00_1600,
							(obj_t) (BgL_arg3412z00_1264), BEOA);
				}}
				{	/* Ast/lvtype.scm 113 */
					BgL_nodez00_bglt BgL_arg3413z00_1265;

					BgL_arg3413z00_1265 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1260))->BgL_truez00);
					{	/* Ast/lvtype.scm 113 */
						obj_t BgL_method3289z00_1627;

						{	/* Ast/lvtype.scm 113 */
							BgL_objectz00_bglt BgL_objz00_1628;

							BgL_objz00_1628 = (BgL_objectz00_bglt) (BgL_arg3413z00_1265);
							{	/* Ast/lvtype.scm 113 */
								long BgL_objzd2classzd2numz00_1629;

								BgL_objzd2classzd2numz00_1629 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1628);
								{	/* Ast/lvtype.scm 113 */
									obj_t BgL_arg2643z00_1630;

									BgL_arg2643z00_1630 =
										PROCEDURE_REF(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
										(int) (((long) 1)));
									{	/* Ast/lvtype.scm 113 */
										obj_t BgL_arrayz00_1632;

										int BgL_offsetz00_1633;

										BgL_arrayz00_1632 = BgL_arg2643z00_1630;
										BgL_offsetz00_1633 = (int) (BgL_objzd2classzd2numz00_1629);
										{	/* Ast/lvtype.scm 113 */
											long BgL_offsetz00_1634;

											BgL_offsetz00_1634 =
												((long) (BgL_offsetz00_1633) - OBJECT_TYPE);
											{	/* Ast/lvtype.scm 113 */
												long BgL_modz00_1635;

												{	/* Ast/lvtype.scm 113 */
													int BgL_arg2645z00_1636;

													BgL_arg2645z00_1636 = (int) (((long) 16));
													{	/* Ast/lvtype.scm 113 */
														long BgL_auxz00_2816;

														BgL_auxz00_2816 = (long) (BgL_arg2645z00_1636);
														BgL_modz00_1635 =
															(BgL_offsetz00_1634 / BgL_auxz00_2816);
												}}
												{	/* Ast/lvtype.scm 113 */
													long BgL_restz00_1637;

													{	/* Ast/lvtype.scm 113 */
														int BgL_arg2644z00_1638;

														BgL_arg2644z00_1638 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 113 */
															long BgL_auxz00_2820;

															BgL_auxz00_2820 = (long) (BgL_arg2644z00_1638);
															BgL_restz00_1637 =
																(BgL_offsetz00_1634 % BgL_auxz00_2820);
													}}
													{	/* Ast/lvtype.scm 113 */

														BgL_method3289z00_1627 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1632,
																(int) (BgL_modz00_1635)),
															(int) (BgL_restz00_1637));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3289z00_1627) (BgL_method3289z00_1627,
							(obj_t) (BgL_arg3413z00_1265), BEOA);
				}}
				{	/* Ast/lvtype.scm 114 */
					BgL_nodez00_bglt BgL_arg3414z00_1266;

					BgL_arg3414z00_1266 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1260))->BgL_falsez00);
					{	/* Ast/lvtype.scm 114 */
						obj_t BgL_method3289z00_1654;

						{	/* Ast/lvtype.scm 114 */
							BgL_objectz00_bglt BgL_objz00_1655;

							BgL_objz00_1655 = (BgL_objectz00_bglt) (BgL_arg3414z00_1266);
							{	/* Ast/lvtype.scm 114 */
								long BgL_objzd2classzd2numz00_1656;

								BgL_objzd2classzd2numz00_1656 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1655);
								{	/* Ast/lvtype.scm 114 */
									obj_t BgL_arg2643z00_1657;

									BgL_arg2643z00_1657 =
										PROCEDURE_REF(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
										(int) (((long) 1)));
									{	/* Ast/lvtype.scm 114 */
										obj_t BgL_arrayz00_1659;

										int BgL_offsetz00_1660;

										BgL_arrayz00_1659 = BgL_arg2643z00_1657;
										BgL_offsetz00_1660 = (int) (BgL_objzd2classzd2numz00_1656);
										{	/* Ast/lvtype.scm 114 */
											long BgL_offsetz00_1661;

											BgL_offsetz00_1661 =
												((long) (BgL_offsetz00_1660) - OBJECT_TYPE);
											{	/* Ast/lvtype.scm 114 */
												long BgL_modz00_1662;

												{	/* Ast/lvtype.scm 114 */
													int BgL_arg2645z00_1663;

													BgL_arg2645z00_1663 = (int) (((long) 16));
													{	/* Ast/lvtype.scm 114 */
														long BgL_auxz00_2839;

														BgL_auxz00_2839 = (long) (BgL_arg2645z00_1663);
														BgL_modz00_1662 =
															(BgL_offsetz00_1661 / BgL_auxz00_2839);
												}}
												{	/* Ast/lvtype.scm 114 */
													long BgL_restz00_1664;

													{	/* Ast/lvtype.scm 114 */
														int BgL_arg2644z00_1665;

														BgL_arg2644z00_1665 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 114 */
															long BgL_auxz00_2843;

															BgL_auxz00_2843 = (long) (BgL_arg2644z00_1665);
															BgL_restz00_1664 =
																(BgL_offsetz00_1661 % BgL_auxz00_2843);
													}}
													{	/* Ast/lvtype.scm 114 */

														BgL_method3289z00_1654 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1659,
																(int) (BgL_modz00_1662)),
															(int) (BgL_restz00_1664));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3289z00_1654) (BgL_method3289z00_1654,
							(obj_t) (BgL_arg3414z00_1266), BEOA);
					}
				}
			}
		}
	}



/* lvtype-node!-setq3311 */
	obj_t BGl_lvtypezd2nodez12zd2setq3311z12zzast_lvtypez00(obj_t BgL_envz00_2201,
		obj_t BgL_nodez00_2202)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 102 */
			{
				BgL_setqz00_bglt BgL_nodez00_1252;

				BgL_nodez00_1252 = (BgL_setqz00_bglt) (BgL_nodez00_2202);
				{	/* Ast/lvtype.scm 104 */
					BgL_nodez00_bglt BgL_arg3409z00_1256;

					BgL_arg3409z00_1256 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1252))->BgL_valuez00);
					{	/* Ast/lvtype.scm 104 */
						obj_t BgL_method3289z00_1546;

						{	/* Ast/lvtype.scm 104 */
							BgL_objectz00_bglt BgL_objz00_1547;

							BgL_objz00_1547 = (BgL_objectz00_bglt) (BgL_arg3409z00_1256);
							{	/* Ast/lvtype.scm 104 */
								long BgL_objzd2classzd2numz00_1548;

								BgL_objzd2classzd2numz00_1548 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1547);
								{	/* Ast/lvtype.scm 104 */
									obj_t BgL_arg2643z00_1549;

									BgL_arg2643z00_1549 =
										PROCEDURE_REF(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
										(int) (((long) 1)));
									{	/* Ast/lvtype.scm 104 */
										obj_t BgL_arrayz00_1551;

										int BgL_offsetz00_1552;

										BgL_arrayz00_1551 = BgL_arg2643z00_1549;
										BgL_offsetz00_1552 = (int) (BgL_objzd2classzd2numz00_1548);
										{	/* Ast/lvtype.scm 104 */
											long BgL_offsetz00_1553;

											BgL_offsetz00_1553 =
												((long) (BgL_offsetz00_1552) - OBJECT_TYPE);
											{	/* Ast/lvtype.scm 104 */
												long BgL_modz00_1554;

												{	/* Ast/lvtype.scm 104 */
													int BgL_arg2645z00_1555;

													BgL_arg2645z00_1555 = (int) (((long) 16));
													{	/* Ast/lvtype.scm 104 */
														long BgL_auxz00_2863;

														BgL_auxz00_2863 = (long) (BgL_arg2645z00_1555);
														BgL_modz00_1554 =
															(BgL_offsetz00_1553 / BgL_auxz00_2863);
												}}
												{	/* Ast/lvtype.scm 104 */
													long BgL_restz00_1556;

													{	/* Ast/lvtype.scm 104 */
														int BgL_arg2644z00_1557;

														BgL_arg2644z00_1557 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 104 */
															long BgL_auxz00_2867;

															BgL_auxz00_2867 = (long) (BgL_arg2644z00_1557);
															BgL_restz00_1556 =
																(BgL_offsetz00_1553 % BgL_auxz00_2867);
													}}
													{	/* Ast/lvtype.scm 104 */

														BgL_method3289z00_1546 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1551,
																(int) (BgL_modz00_1554)),
															(int) (BgL_restz00_1556));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3289z00_1546) (BgL_method3289z00_1546,
							(obj_t) (BgL_arg3409z00_1256), BEOA);
				}}
				{	/* Ast/lvtype.scm 105 */
					BgL_varz00_bglt BgL_arg3410z00_1257;

					BgL_arg3410z00_1257 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1252))->BgL_varz00);
					{	/* Ast/lvtype.scm 105 */
						BgL_nodez00_bglt BgL_nodez00_1572;

						BgL_nodez00_1572 = (BgL_nodez00_bglt) (BgL_arg3410z00_1257);
						{	/* Ast/lvtype.scm 105 */
							obj_t BgL_method3289z00_1573;

							{	/* Ast/lvtype.scm 105 */
								BgL_objectz00_bglt BgL_objz00_1574;

								BgL_objz00_1574 = (BgL_objectz00_bglt) (BgL_nodez00_1572);
								{	/* Ast/lvtype.scm 105 */
									long BgL_objzd2classzd2numz00_1575;

									BgL_objzd2classzd2numz00_1575 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1574);
									{	/* Ast/lvtype.scm 105 */
										obj_t BgL_arg2643z00_1576;

										BgL_arg2643z00_1576 =
											PROCEDURE_REF
											(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
											(int) (((long) 1)));
										{	/* Ast/lvtype.scm 105 */
											obj_t BgL_arrayz00_1578;

											int BgL_offsetz00_1579;

											BgL_arrayz00_1578 = BgL_arg2643z00_1576;
											BgL_offsetz00_1579 =
												(int) (BgL_objzd2classzd2numz00_1575);
											{	/* Ast/lvtype.scm 105 */
												long BgL_offsetz00_1580;

												BgL_offsetz00_1580 =
													((long) (BgL_offsetz00_1579) - OBJECT_TYPE);
												{	/* Ast/lvtype.scm 105 */
													long BgL_modz00_1581;

													{	/* Ast/lvtype.scm 105 */
														int BgL_arg2645z00_1582;

														BgL_arg2645z00_1582 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 105 */
															long BgL_auxz00_2887;

															BgL_auxz00_2887 = (long) (BgL_arg2645z00_1582);
															BgL_modz00_1581 =
																(BgL_offsetz00_1580 / BgL_auxz00_2887);
													}}
													{	/* Ast/lvtype.scm 105 */
														long BgL_restz00_1583;

														{	/* Ast/lvtype.scm 105 */
															int BgL_arg2644z00_1584;

															BgL_arg2644z00_1584 = (int) (((long) 16));
															{	/* Ast/lvtype.scm 105 */
																long BgL_auxz00_2891;

																BgL_auxz00_2891 = (long) (BgL_arg2644z00_1584);
																BgL_restz00_1583 =
																	(BgL_offsetz00_1580 % BgL_auxz00_2891);
														}}
														{	/* Ast/lvtype.scm 105 */

															BgL_method3289z00_1573 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1578,
																	(int) (BgL_modz00_1581)),
																(int) (BgL_restz00_1583));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3289z00_1573) (BgL_method3289z00_1573,
								(obj_t) (BgL_nodez00_1572), BEOA);
						}
					}
				}
			}
		}
	}



/* lvtype-node!-cast3309 */
	obj_t BGl_lvtypezd2nodez12zd2cast3309z12zzast_lvtypez00(obj_t BgL_envz00_2203,
		obj_t BgL_nodez00_2204)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 95 */
			{
				BgL_castz00_bglt BgL_nodez00_1245;

				BgL_nodez00_1245 = (BgL_castz00_bglt) (BgL_nodez00_2204);
				{	/* Ast/lvtype.scm 96 */
					BgL_nodez00_bglt BgL_arg3407z00_1516;

					BgL_arg3407z00_1516 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_1245))->BgL_argz00);
					{	/* Ast/lvtype.scm 96 */
						obj_t BgL_method3289z00_1519;

						{	/* Ast/lvtype.scm 96 */
							BgL_objectz00_bglt BgL_objz00_1520;

							BgL_objz00_1520 = (BgL_objectz00_bglt) (BgL_arg3407z00_1516);
							{	/* Ast/lvtype.scm 96 */
								long BgL_objzd2classzd2numz00_1521;

								BgL_objzd2classzd2numz00_1521 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1520);
								{	/* Ast/lvtype.scm 96 */
									obj_t BgL_arg2643z00_1522;

									BgL_arg2643z00_1522 =
										PROCEDURE_REF(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
										(int) (((long) 1)));
									{	/* Ast/lvtype.scm 96 */
										obj_t BgL_arrayz00_1524;

										int BgL_offsetz00_1525;

										BgL_arrayz00_1524 = BgL_arg2643z00_1522;
										BgL_offsetz00_1525 = (int) (BgL_objzd2classzd2numz00_1521);
										{	/* Ast/lvtype.scm 96 */
											long BgL_offsetz00_1526;

											BgL_offsetz00_1526 =
												((long) (BgL_offsetz00_1525) - OBJECT_TYPE);
											{	/* Ast/lvtype.scm 96 */
												long BgL_modz00_1527;

												{	/* Ast/lvtype.scm 96 */
													int BgL_arg2645z00_1528;

													BgL_arg2645z00_1528 = (int) (((long) 16));
													{	/* Ast/lvtype.scm 96 */
														long BgL_auxz00_2911;

														BgL_auxz00_2911 = (long) (BgL_arg2645z00_1528);
														BgL_modz00_1527 =
															(BgL_offsetz00_1526 / BgL_auxz00_2911);
												}}
												{	/* Ast/lvtype.scm 96 */
													long BgL_restz00_1529;

													{	/* Ast/lvtype.scm 96 */
														int BgL_arg2644z00_1530;

														BgL_arg2644z00_1530 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 96 */
															long BgL_auxz00_2915;

															BgL_auxz00_2915 = (long) (BgL_arg2644z00_1530);
															BgL_restz00_1529 =
																(BgL_offsetz00_1526 % BgL_auxz00_2915);
													}}
													{	/* Ast/lvtype.scm 96 */

														BgL_method3289z00_1519 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1524,
																(int) (BgL_modz00_1527)),
															(int) (BgL_restz00_1529));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3289z00_1519) (BgL_method3289z00_1519,
							(obj_t) (BgL_arg3407z00_1516), BEOA);
					}
				}
			}
		}
	}



/* lvtype-node!-extern3307 */
	obj_t BGl_lvtypezd2nodez12zd2extern3307z12zzast_lvtypez00(obj_t
		BgL_envz00_2205, obj_t BgL_nodez00_2206)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 88 */
			{
				BgL_externz00_bglt BgL_nodez00_1238;

				{	/* Ast/lvtype.scm 89 */
					bool_t BgL_auxz00_2926;

					BgL_nodez00_1238 = (BgL_externz00_bglt) (BgL_nodez00_2206);
					{	/* Ast/lvtype.scm 89 */
						obj_t BgL_arg3405z00_1513;

						BgL_arg3405z00_1513 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1238))->BgL_exprza2za2);
						BgL_auxz00_2926 =
							BGl_lvtypezd2nodeza2z12z62zzast_lvtypez00(BgL_arg3405z00_1513);
					}
					return BBOOL(BgL_auxz00_2926);
				}
			}
		}
	}



/* lvtype-node!-funcall3305 */
	obj_t BGl_lvtypezd2nodez12zd2funcall3305z12zzast_lvtypez00(obj_t
		BgL_envz00_2207, obj_t BgL_nodez00_2208)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 80 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1230;

				{	/* Ast/lvtype.scm 81 */
					bool_t BgL_auxz00_2931;

					BgL_nodez00_1230 = (BgL_funcallz00_bglt) (BgL_nodez00_2208);
					{	/* Ast/lvtype.scm 82 */
						BgL_nodez00_bglt BgL_arg3402z00_1234;

						BgL_arg3402z00_1234 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1230))->BgL_funz00);
						{	/* Ast/lvtype.scm 82 */
							obj_t BgL_method3289z00_1486;

							{	/* Ast/lvtype.scm 82 */
								BgL_objectz00_bglt BgL_objz00_1487;

								BgL_objz00_1487 = (BgL_objectz00_bglt) (BgL_arg3402z00_1234);
								{	/* Ast/lvtype.scm 82 */
									long BgL_objzd2classzd2numz00_1488;

									BgL_objzd2classzd2numz00_1488 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1487);
									{	/* Ast/lvtype.scm 82 */
										obj_t BgL_arg2643z00_1489;

										BgL_arg2643z00_1489 =
											PROCEDURE_REF
											(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
											(int) (((long) 1)));
										{	/* Ast/lvtype.scm 82 */
											obj_t BgL_arrayz00_1491;

											int BgL_offsetz00_1492;

											BgL_arrayz00_1491 = BgL_arg2643z00_1489;
											BgL_offsetz00_1492 =
												(int) (BgL_objzd2classzd2numz00_1488);
											{	/* Ast/lvtype.scm 82 */
												long BgL_offsetz00_1493;

												BgL_offsetz00_1493 =
													((long) (BgL_offsetz00_1492) - OBJECT_TYPE);
												{	/* Ast/lvtype.scm 82 */
													long BgL_modz00_1494;

													{	/* Ast/lvtype.scm 82 */
														int BgL_arg2645z00_1495;

														BgL_arg2645z00_1495 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 82 */
															long BgL_auxz00_2941;

															BgL_auxz00_2941 = (long) (BgL_arg2645z00_1495);
															BgL_modz00_1494 =
																(BgL_offsetz00_1493 / BgL_auxz00_2941);
													}}
													{	/* Ast/lvtype.scm 82 */
														long BgL_restz00_1496;

														{	/* Ast/lvtype.scm 82 */
															int BgL_arg2644z00_1497;

															BgL_arg2644z00_1497 = (int) (((long) 16));
															{	/* Ast/lvtype.scm 82 */
																long BgL_auxz00_2945;

																BgL_auxz00_2945 = (long) (BgL_arg2644z00_1497);
																BgL_restz00_1496 =
																	(BgL_offsetz00_1493 % BgL_auxz00_2945);
														}}
														{	/* Ast/lvtype.scm 82 */

															BgL_method3289z00_1486 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1491,
																	(int) (BgL_modz00_1494)),
																(int) (BgL_restz00_1496));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3289z00_1486) (BgL_method3289z00_1486,
								(obj_t) (BgL_arg3402z00_1234), BEOA);
					}}
					{	/* Ast/lvtype.scm 83 */
						obj_t BgL_arg3403z00_1235;

						BgL_arg3403z00_1235 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1230))->BgL_argsz00);
						BgL_auxz00_2931 =
							BGl_lvtypezd2nodeza2z12z62zzast_lvtypez00(BgL_arg3403z00_1235);
					}
					return BBOOL(BgL_auxz00_2931);
				}
			}
		}
	}



/* lvtype-node!-app-ly3303 */
	obj_t BGl_lvtypezd2nodez12zd2appzd2ly3303zc0zzast_lvtypez00(obj_t
		BgL_envz00_2209, obj_t BgL_nodez00_2210)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 72 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1222;

				BgL_nodez00_1222 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2210);
				{	/* Ast/lvtype.scm 74 */
					BgL_nodez00_bglt BgL_arg3399z00_1226;

					BgL_arg3399z00_1226 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1222))->BgL_funz00);
					{	/* Ast/lvtype.scm 74 */
						obj_t BgL_method3289z00_1432;

						{	/* Ast/lvtype.scm 74 */
							BgL_objectz00_bglt BgL_objz00_1433;

							BgL_objz00_1433 = (BgL_objectz00_bglt) (BgL_arg3399z00_1226);
							{	/* Ast/lvtype.scm 74 */
								long BgL_objzd2classzd2numz00_1434;

								BgL_objzd2classzd2numz00_1434 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1433);
								{	/* Ast/lvtype.scm 74 */
									obj_t BgL_arg2643z00_1435;

									BgL_arg2643z00_1435 =
										PROCEDURE_REF(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
										(int) (((long) 1)));
									{	/* Ast/lvtype.scm 74 */
										obj_t BgL_arrayz00_1437;

										int BgL_offsetz00_1438;

										BgL_arrayz00_1437 = BgL_arg2643z00_1435;
										BgL_offsetz00_1438 = (int) (BgL_objzd2classzd2numz00_1434);
										{	/* Ast/lvtype.scm 74 */
											long BgL_offsetz00_1439;

											BgL_offsetz00_1439 =
												((long) (BgL_offsetz00_1438) - OBJECT_TYPE);
											{	/* Ast/lvtype.scm 74 */
												long BgL_modz00_1440;

												{	/* Ast/lvtype.scm 74 */
													int BgL_arg2645z00_1441;

													BgL_arg2645z00_1441 = (int) (((long) 16));
													{	/* Ast/lvtype.scm 74 */
														long BgL_auxz00_2968;

														BgL_auxz00_2968 = (long) (BgL_arg2645z00_1441);
														BgL_modz00_1440 =
															(BgL_offsetz00_1439 / BgL_auxz00_2968);
												}}
												{	/* Ast/lvtype.scm 74 */
													long BgL_restz00_1442;

													{	/* Ast/lvtype.scm 74 */
														int BgL_arg2644z00_1443;

														BgL_arg2644z00_1443 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 74 */
															long BgL_auxz00_2972;

															BgL_auxz00_2972 = (long) (BgL_arg2644z00_1443);
															BgL_restz00_1442 =
																(BgL_offsetz00_1439 % BgL_auxz00_2972);
													}}
													{	/* Ast/lvtype.scm 74 */

														BgL_method3289z00_1432 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1437,
																(int) (BgL_modz00_1440)),
															(int) (BgL_restz00_1442));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3289z00_1432) (BgL_method3289z00_1432,
							(obj_t) (BgL_arg3399z00_1226), BEOA);
				}}
				{	/* Ast/lvtype.scm 75 */
					BgL_nodez00_bglt BgL_arg3400z00_1227;

					BgL_arg3400z00_1227 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1222))->BgL_argz00);
					{	/* Ast/lvtype.scm 75 */
						obj_t BgL_method3289z00_1459;

						{	/* Ast/lvtype.scm 75 */
							BgL_objectz00_bglt BgL_objz00_1460;

							BgL_objz00_1460 = (BgL_objectz00_bglt) (BgL_arg3400z00_1227);
							{	/* Ast/lvtype.scm 75 */
								long BgL_objzd2classzd2numz00_1461;

								BgL_objzd2classzd2numz00_1461 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1460);
								{	/* Ast/lvtype.scm 75 */
									obj_t BgL_arg2643z00_1462;

									BgL_arg2643z00_1462 =
										PROCEDURE_REF(BGl_lvtypezd2nodez12zd2envz12zzast_lvtypez00,
										(int) (((long) 1)));
									{	/* Ast/lvtype.scm 75 */
										obj_t BgL_arrayz00_1464;

										int BgL_offsetz00_1465;

										BgL_arrayz00_1464 = BgL_arg2643z00_1462;
										BgL_offsetz00_1465 = (int) (BgL_objzd2classzd2numz00_1461);
										{	/* Ast/lvtype.scm 75 */
											long BgL_offsetz00_1466;

											BgL_offsetz00_1466 =
												((long) (BgL_offsetz00_1465) - OBJECT_TYPE);
											{	/* Ast/lvtype.scm 75 */
												long BgL_modz00_1467;

												{	/* Ast/lvtype.scm 75 */
													int BgL_arg2645z00_1468;

													BgL_arg2645z00_1468 = (int) (((long) 16));
													{	/* Ast/lvtype.scm 75 */
														long BgL_auxz00_2991;

														BgL_auxz00_2991 = (long) (BgL_arg2645z00_1468);
														BgL_modz00_1467 =
															(BgL_offsetz00_1466 / BgL_auxz00_2991);
												}}
												{	/* Ast/lvtype.scm 75 */
													long BgL_restz00_1469;

													{	/* Ast/lvtype.scm 75 */
														int BgL_arg2644z00_1470;

														BgL_arg2644z00_1470 = (int) (((long) 16));
														{	/* Ast/lvtype.scm 75 */
															long BgL_auxz00_2995;

															BgL_auxz00_2995 = (long) (BgL_arg2644z00_1470);
															BgL_restz00_1469 =
																(BgL_offsetz00_1466 % BgL_auxz00_2995);
													}}
													{	/* Ast/lvtype.scm 75 */

														BgL_method3289z00_1459 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1464,
																(int) (BgL_modz00_1467)),
															(int) (BgL_restz00_1469));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3289z00_1459) (BgL_method3289z00_1459,
							(obj_t) (BgL_arg3400z00_1227), BEOA);
					}
				}
			}
		}
	}



/* lvtype-node!-app3301 */
	obj_t BGl_lvtypezd2nodez12zd2app3301z12zzast_lvtypez00(obj_t BgL_envz00_2211,
		obj_t BgL_nodez00_2212)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 65 */
			{
				BgL_appz00_bglt BgL_nodez00_1215;

				{	/* Ast/lvtype.scm 66 */
					bool_t BgL_auxz00_3006;

					BgL_nodez00_1215 = (BgL_appz00_bglt) (BgL_nodez00_2212);
					{	/* Ast/lvtype.scm 66 */
						obj_t BgL_arg3397z00_1428;

						BgL_arg3397z00_1428 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1215))->BgL_argsz00);
						BgL_auxz00_3006 =
							BGl_lvtypezd2nodeza2z12z62zzast_lvtypez00(BgL_arg3397z00_1428);
					}
					return BBOOL(BgL_auxz00_3006);
				}
			}
		}
	}



/* lvtype-node!-sequenc3299 */
	obj_t BGl_lvtypezd2nodez12zd2sequenc3299z12zzast_lvtypez00(obj_t
		BgL_envz00_2213, obj_t BgL_nodez00_2214)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 58 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1208;

				{	/* Ast/lvtype.scm 59 */
					bool_t BgL_auxz00_3011;

					BgL_nodez00_1208 = (BgL_sequencez00_bglt) (BgL_nodez00_2214);
					{	/* Ast/lvtype.scm 59 */
						obj_t BgL_arg3395z00_1425;

						BgL_arg3395z00_1425 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1208))->BgL_nodesz00);
						BgL_auxz00_3011 =
							BGl_lvtypezd2nodeza2z12z62zzast_lvtypez00(BgL_arg3395z00_1425);
					}
					return BBOOL(BgL_auxz00_3011);
				}
			}
		}
	}



/* lvtype-node!-closure3297 */
	obj_t BGl_lvtypezd2nodez12zd2closure3297z12zzast_lvtypez00(obj_t
		BgL_envz00_2215, obj_t BgL_nodez00_2216)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 52 */
			{
				BgL_closurez00_bglt BgL_nodez00_1200;

				BgL_nodez00_1200 = (BgL_closurez00_bglt) (BgL_nodez00_2216);
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string3511z00zzast_lvtypez00, BGl_string3534z00zzast_lvtypez00,
					BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_1200)));
			}
		}
	}



/* lvtype-node!-var3295 */
	obj_t BGl_lvtypezd2nodez12zd2var3295z12zzast_lvtypez00(obj_t BgL_envz00_2217,
		obj_t BgL_nodez00_2218)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 46 */
			return BUNSPEC;
		}
	}



/* lvtype-node!-kwote3293 */
	obj_t BGl_lvtypezd2nodez12zd2kwote3293z12zzast_lvtypez00(obj_t
		BgL_envz00_2219, obj_t BgL_nodez00_2220)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 40 */
			return BUNSPEC;
		}
	}



/* lvtype-node!-atom3291 */
	obj_t BGl_lvtypezd2nodez12zd2atom3291z12zzast_lvtypez00(obj_t BgL_envz00_2221,
		obj_t BgL_nodez00_2222)
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 34 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_lvtypez00()
	{
		AN_OBJECT;
		{	/* Ast/lvtype.scm 16 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3535z00zzast_lvtypez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3535z00zzast_lvtypez00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 341705556),
				BSTRING_TO_STRING(BGl_string3535z00zzast_lvtypez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3535z00zzast_lvtypez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3535z00zzast_lvtypez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3535z00zzast_lvtypez00));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3535z00zzast_lvtypez00));
		}
	}

#ifdef __cplusplus
}
#endif
