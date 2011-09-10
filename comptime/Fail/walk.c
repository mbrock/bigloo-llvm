/*===========================================================================*/
/*   (Fail/walk.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Fail/walk.scm)*/
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


	static obj_t BGl_failzd2nodez12zd2sequence3294z12zzfail_walkz00(obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_failzd2nodez12zd2select3310z12zzfail_walkz00(obj_t, obj_t);
	static obj_t BGl_failzd2nodez12zd2cast3316z12zzfail_walkz00(obj_t, obj_t);
	static obj_t BGl_failzd2nodez12zd2boxzd2setz123326zd2zzfail_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_failzd2walkz12zc0zzfail_walkz00(obj_t);
	static obj_t BGl_failzd2nodez12zd2condition3306z12zzfail_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzfail_walkz00();
	static obj_t BGl__failzd2nodez12zd2default3284z12zzfail_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_failzd2nodez12zd2default3284z12zzfail_walkz00(BgL_nodez00_bglt);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_failzd2nodez12zd2app3296z12zzfail_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_failzd2nodez12zd2setq3304z12zzfail_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzfail_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
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
	static obj_t BGl_toplevelzd2initzd2zzfail_walkz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl__failzd2nodez12zc0zzfail_walkz00(obj_t, obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	static obj_t BGl_failzd2nodeza2z12z62zzfail_walkz00(obj_t);
	static obj_t BGl_failzd2nodez12zd2funcall3300z12zzfail_walkz00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static obj_t BGl_failzd2nodez12zd2makezd2box3322zc0zzfail_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_failzd2nodez12zd2setzd2exzd2it3318z12zzfail_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_failzd2nodez12zd2fail3308z12zzfail_walkz00(obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	static obj_t BGl_failzd2nodez12zd2var3292z12zzfail_walkz00(obj_t, obj_t);
	static obj_t BGl__failzd2walkz12zc0zzfail_walkz00(obj_t, obj_t);
	static obj_t BGl_za2errorza2z00zzfail_walkz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzfail_walkz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_failzd2nodez12zd2boxzd2ref3324zc0zzfail_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzfail_walkz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzfail_walkz00();
	static obj_t BGl_zc3anonymousza33353ze3z83zzfail_walkz00(obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static obj_t BGl_failzd2nodez12zd2kwote3290z12zzfail_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzfail_walkz00();
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_failzd2nodez12zd2letzd2fun3312zc0zzfail_walkz00(obj_t,
		obj_t);
	static obj_t BGl_failzd2nodez12zd2extern3302z12zzfail_walkz00(obj_t, obj_t);
	static obj_t BGl_failzd2nodez12zd2atom3288z12zzfail_walkz00(obj_t, obj_t);
	static obj_t BGl_failzd2nodez12zd2appzd2ly3298zc0zzfail_walkz00(obj_t, obj_t);
	static obj_t BGl_failzd2nodez12zd2letzd2var3314zc0zzfail_walkz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_failzd2funz12zc0zzfail_walkz00(obj_t);
	static BgL_nodez00_bglt BGl_failzd2nodez12zc0zzfail_walkz00(BgL_nodez00_bglt);
	static obj_t BGl_failzd2nodez12zd2jumpzd2exzd2i3320z12zzfail_walkz00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzfail_walkz00();
	static obj_t __cnst[9];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_failzd2nodez12zd2default3284zd2envzc0zzfail_walkz00,
		BgL_bgl__failza7d2nodeza712za73668za7,
		BGl__failzd2nodez12zd2default3284z12zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
		BgL_bgl__failza7d2nodeza712za73669za7, BGl__failzd2nodez12zc0zzfail_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_failzd2walkz12zd2envz12zzfail_walkz00,
		BgL_bgl__failza7d2walkza712za73670za7, BGl__failzd2walkz12zc0zzfail_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3635z00zzfail_walkz00,
		BgL_bgl_za7c3anonymousza7a333671z00,
		BGl_zc3anonymousza33353ze3z83zzfail_walkz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3644z00zzfail_walkz00,
		BgL_bgl_failza7d2nodeza712za7d3672za7,
		BGl_failzd2nodez12zd2atom3288z12zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3645z00zzfail_walkz00,
		BgL_bgl_failza7d2nodeza712za7d3673za7,
		BGl_failzd2nodez12zd2kwote3290z12zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3646z00zzfail_walkz00,
		BgL_bgl_failza7d2nodeza712za7d3674za7,
		BGl_failzd2nodez12zd2var3292z12zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3647z00zzfail_walkz00,
		BgL_bgl_failza7d2nodeza712za7d3675za7,
		BGl_failzd2nodez12zd2sequence3294z12zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3648z00zzfail_walkz00,
		BgL_bgl_failza7d2nodeza712za7d3676za7,
		BGl_failzd2nodez12zd2app3296z12zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3650z00zzfail_walkz00,
		BgL_bgl_failza7d2nodeza712za7d3677za7,
		BGl_failzd2nodez12zd2funcall3300z12zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3649z00zzfail_walkz00,
		BgL_bgl_failza7d2nodeza712za7d3678za7,
		BGl_failzd2nodez12zd2appzd2ly3298zc0zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3651z00zzfail_walkz00,
		BgL_bgl_failza7d2nodeza712za7d3679za7,
		BGl_failzd2nodez12zd2extern3302z12zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3652z00zzfail_walkz00,
		BgL_bgl_failza7d2nodeza712za7d3680za7,
		BGl_failzd2nodez12zd2setq3304z12zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3653z00zzfail_walkz00,
		BgL_bgl_failza7d2nodeza712za7d3681za7,
		BGl_failzd2nodez12zd2condition3306z12zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3654z00zzfail_walkz00,
		BgL_bgl_failza7d2nodeza712za7d3682za7,
		BGl_failzd2nodez12zd2fail3308z12zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3655z00zzfail_walkz00,
		BgL_bgl_failza7d2nodeza712za7d3683za7,
		BGl_failzd2nodez12zd2select3310z12zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3656z00zzfail_walkz00,
		BgL_bgl_failza7d2nodeza712za7d3684za7,
		BGl_failzd2nodez12zd2letzd2fun3312zc0zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3657z00zzfail_walkz00,
		BgL_bgl_failza7d2nodeza712za7d3685za7,
		BGl_failzd2nodez12zd2letzd2var3314zc0zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3658z00zzfail_walkz00,
		BgL_bgl_failza7d2nodeza712za7d3686za7,
		BGl_failzd2nodez12zd2cast3316z12zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3660z00zzfail_walkz00,
		BgL_bgl_failza7d2nodeza712za7d3687za7,
		BGl_failzd2nodez12zd2jumpzd2exzd2i3320z12zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3659z00zzfail_walkz00,
		BgL_bgl_failza7d2nodeza712za7d3688za7,
		BGl_failzd2nodez12zd2setzd2exzd2it3318z12zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3661z00zzfail_walkz00,
		BgL_bgl_failza7d2nodeza712za7d3689za7,
		BGl_failzd2nodez12zd2makezd2box3322zc0zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3662z00zzfail_walkz00,
		BgL_bgl_failza7d2nodeza712za7d3690za7,
		BGl_failzd2nodez12zd2boxzd2ref3324zc0zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3663z00zzfail_walkz00,
		BgL_bgl_failza7d2nodeza712za7d3691za7,
		BGl_failzd2nodez12zd2boxzd2setz123326zd2zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3633z00zzfail_walkz00,
		BgL_bgl_string3633za700za7za7f3692za7, "Fail", 4);
	      DEFINE_STRING(BGl_string3634z00zzfail_walkz00,
		BgL_bgl_string3634za700za7za7f3693za7, "   . ", 5);
	      DEFINE_STRING(BGl_string3636z00zzfail_walkz00,
		BgL_bgl_string3636za700za7za7f3694za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string3637z00zzfail_walkz00,
		BgL_bgl_string3637za700za7za7f3695za7, " error", 6);
	      DEFINE_STRING(BGl_string3638z00zzfail_walkz00,
		BgL_bgl_string3638za700za7za7f3696za7, "s", 1);
	      DEFINE_STRING(BGl_string3640z00zzfail_walkz00,
		BgL_bgl_string3640za700za7za7f3697za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string3639z00zzfail_walkz00,
		BgL_bgl_string3639za700za7za7f3698za7, "", 0);
	      DEFINE_STRING(BGl_string3641z00zzfail_walkz00,
		BgL_bgl_string3641za700za7za7f3699za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string3642z00zzfail_walkz00,
		BgL_bgl_string3642za700za7za7f3700za7, "fail-node!", 10);
	      DEFINE_STRING(BGl_string3643z00zzfail_walkz00,
		BgL_bgl_string3643za700za7za7f3701za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3664z00zzfail_walkz00,
		BgL_bgl_string3664za700za7za7f3702za7, "fail_walk", 9);
	      DEFINE_STRING(BGl_string3665z00zzfail_walkz00,
		BgL_bgl_string3665za700za7za7f3703za7,
		"value error/location location fail-node!-default3284 done error __error pass-started ((lambda () (set! *error* (find-global (quote error) (quote __error))))) ",
		158);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzfail_walkz00(long
		BgL_checksumz00_2390, char *BgL_fromz00_2391)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzfail_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzfail_walkz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzfail_walkz00();
					BGl_cnstzd2initzd2zzfail_walkz00();
					BGl_importedzd2moduleszd2initz00zzfail_walkz00();
					BGl_genericzd2initzd2zzfail_walkz00();
					BGl_methodzd2initzd2zzfail_walkz00();
					BGl_toplevelzd2initzd2zzfail_walkz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzfail_walkz00()
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 18 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "fail_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"fail_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "fail_walk");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "fail_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"fail_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"fail_walk");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"fail_walk");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzfail_walkz00()
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 18 */
			{	/* Fail/walk.scm 18 */
				obj_t BgL_cportz00_2378;

				BgL_cportz00_2378 =
					bgl_open_input_string(BGl_string3665z00zzfail_walkz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2379;

					BgL_iz00_2379 = ((long) 8);
				BgL_loopz00_2380:
					if ((BgL_iz00_2379 == ((long) -1)))
						{	/* Fail/walk.scm 18 */
							return BUNSPEC;
						}
					else
						{	/* Fail/walk.scm 18 */
							{	/* Fail/walk.scm 18 */
								obj_t BgL_arg3667z00_2382;

								{	/* Fail/walk.scm 18 */

									{	/* Fail/walk.scm 18 */
										obj_t BgL_locationz00_2384;

										BgL_locationz00_2384 = BBOOL(((bool_t) 0));
										{	/* Fail/walk.scm 18 */

											BgL_arg3667z00_2382 =
												BGl_readz00zz__readerz00(BgL_cportz00_2378,
												BgL_locationz00_2384);
										}
									}
								}
								{	/* Fail/walk.scm 18 */
									int BgL_auxz00_2414;

									BgL_auxz00_2414 = (int) (BgL_iz00_2379);
									CNST_TABLE_SET(BgL_auxz00_2414, BgL_arg3667z00_2382);
							}}
							{	/* Fail/walk.scm 18 */
								int BgL_auxz00_2385;

								BgL_auxz00_2385 = (int) ((BgL_iz00_2379 - ((long) 1)));
								{
									long BgL_iz00_2419;

									BgL_iz00_2419 = (long) (BgL_auxz00_2385);
									BgL_iz00_2379 = BgL_iz00_2419;
									goto BgL_loopz00_2380;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzfail_walkz00()
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 18 */
			BGl_za2errorza2z00zzfail_walkz00 = BUNSPEC;
			return BUNSPEC;
		}
	}



/* fail-walk! */
	BGL_EXPORTED_DEF obj_t BGl_failzd2walkz12zc0zzfail_walkz00(obj_t
		BgL_globalsz00_15)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 38 */
			{	/* Fail/walk.scm 39 */
				obj_t BgL_list3336z00_822;

				{	/* Fail/walk.scm 39 */
					obj_t BgL_arg3338z00_824;

					{	/* Fail/walk.scm 39 */
						obj_t BgL_arg3340z00_826;

						BgL_arg3340z00_826 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg3338z00_824 =
							MAKE_PAIR(BGl_string3633z00zzfail_walkz00, BgL_arg3340z00_826);
					}
					BgL_list3336z00_822 =
						MAKE_PAIR(BGl_string3634z00zzfail_walkz00, BgL_arg3338z00_824);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list3336z00_822);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string3633z00zzfail_walkz00;
			{	/* Fail/walk.scm 39 */
				obj_t BgL_g3246z00_827;

				obj_t BgL_g3247z00_828;

				{	/* Fail/walk.scm 39 */
					obj_t BgL_list3352z00_843;

					BgL_list3352z00_843 = MAKE_PAIR(BGl_proc3635z00zzfail_walkz00, BNIL);
					BgL_g3246z00_827 = BgL_list3352z00_843;
				}
				BgL_g3247z00_828 = CNST_TABLE_REF(((long) 0));
				{
					obj_t BgL_hooksz00_830;

					obj_t BgL_hnamesz00_831;

					BgL_hooksz00_830 = BgL_g3246z00_827;
					BgL_hnamesz00_831 = BgL_g3247z00_828;
				BgL_zc3anonymousza33341ze3z83_832:
					if (NULLP(BgL_hooksz00_830))
						{	/* Fail/walk.scm 39 */
							CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Fail/walk.scm 39 */
							bool_t BgL_testz00_2433;

							{	/* Fail/walk.scm 39 */
								obj_t BgL_fun3350z00_840;

								BgL_fun3350z00_840 = CAR(BgL_hooksz00_830);
								BgL_testz00_2433 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun3350z00_840) (BgL_fun3350z00_840,
										BEOA));
							}
							if (BgL_testz00_2433)
								{
									obj_t BgL_hnamesz00_2440;

									obj_t BgL_hooksz00_2438;

									BgL_hooksz00_2438 = CDR(BgL_hooksz00_830);
									BgL_hnamesz00_2440 = CDR(BgL_hnamesz00_831);
									BgL_hnamesz00_831 = BgL_hnamesz00_2440;
									BgL_hooksz00_830 = BgL_hooksz00_2438;
									goto BgL_zc3anonymousza33341ze3z83_832;
								}
							else
								{	/* Fail/walk.scm 39 */
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string3633z00zzfail_walkz00,
										BGl_string3636z00zzfail_walkz00, CAR(BgL_hnamesz00_831));
								}
						}
				}
			}
			{
				obj_t BgL_l3272z00_848;

				BgL_l3272z00_848 = BgL_globalsz00_15;
			BgL_zc3anonymousza33355ze3z83_849:
				if (PAIRP(BgL_l3272z00_848))
					{	/* Fail/walk.scm 42 */
						BGl_failzd2funz12zc0zzfail_walkz00(CAR(BgL_l3272z00_848));
						{
							obj_t BgL_l3272z00_2448;

							BgL_l3272z00_2448 = CDR(BgL_l3272z00_848);
							BgL_l3272z00_848 = BgL_l3272z00_2448;
							goto BgL_zc3anonymousza33355ze3z83_849;
						}
					}
				else
					{	/* Fail/walk.scm 42 */
						((bool_t) 1);
					}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Fail/walk.scm 43 */
					{	/* Fail/walk.scm 43 */
						obj_t BgL_port3274z00_856;

						{	/* Fail/walk.scm 43 */
							obj_t BgL_res3558z00_1511;

							{	/* Fail/walk.scm 43 */
								obj_t BgL_auxz00_2453;

								BgL_auxz00_2453 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res3558z00_1511 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_2453);
							}
							BgL_port3274z00_856 = BgL_res3558z00_1511;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port3274z00_856);
						bgl_display_string(BGl_string3637z00zzfail_walkz00,
							BgL_port3274z00_856);
						{	/* Fail/walk.scm 43 */
							obj_t BgL_arg3360z00_857;

							{	/* Fail/walk.scm 43 */
								bool_t BgL_testz00_2458;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Fail/walk.scm 43 */
										BgL_testz00_2458 =
											BGl_2ze3ze3zz__r4_numbers_6_5z00
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
											BINT(((long) 1)));
									}
								else
									{	/* Fail/walk.scm 43 */
										BgL_testz00_2458 = ((bool_t) 0);
									}
								if (BgL_testz00_2458)
									{	/* Fail/walk.scm 43 */
										BgL_arg3360z00_857 = BGl_string3638z00zzfail_walkz00;
									}
								else
									{	/* Fail/walk.scm 43 */
										BgL_arg3360z00_857 = BGl_string3639z00zzfail_walkz00;
									}
							}
							bgl_display_obj(BgL_arg3360z00_857, BgL_port3274z00_856);
						}
						bgl_display_string(BGl_string3640z00zzfail_walkz00,
							BgL_port3274z00_856);
						bgl_display_char(((unsigned char) '\n'), BgL_port3274z00_856);
					}
					{	/* Fail/walk.scm 43 */
						obj_t BgL_list3363z00_860;

						BgL_list3363z00_860 = MAKE_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list3363z00_860);
					}
				}
			else
				{
					obj_t BgL_hooksz00_864;

					obj_t BgL_hnamesz00_865;

					BgL_hooksz00_864 = BNIL;
					BgL_hnamesz00_865 = BNIL;
				BgL_zc3anonymousza33364ze3z83_866:
					if (NULLP(BgL_hooksz00_864))
						{	/* Fail/walk.scm 43 */
							return BgL_globalsz00_15;
						}
					else
						{	/* Fail/walk.scm 43 */
							bool_t BgL_testz00_2471;

							{	/* Fail/walk.scm 43 */
								obj_t BgL_fun3372z00_873;

								BgL_fun3372z00_873 = CAR(BgL_hooksz00_864);
								BgL_testz00_2471 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun3372z00_873) (BgL_fun3372z00_873,
										BEOA));
							}
							if (BgL_testz00_2471)
								{
									obj_t BgL_hnamesz00_2478;

									obj_t BgL_hooksz00_2476;

									BgL_hooksz00_2476 = CDR(BgL_hooksz00_864);
									BgL_hnamesz00_2478 = CDR(BgL_hnamesz00_865);
									BgL_hnamesz00_865 = BgL_hnamesz00_2478;
									BgL_hooksz00_864 = BgL_hooksz00_2476;
									goto BgL_zc3anonymousza33364ze3z83_866;
								}
							else
								{	/* Fail/walk.scm 43 */
									obj_t BgL_arg3371z00_872;

									BgL_arg3371z00_872 = CAR(BgL_hnamesz00_865);
									return
										BGl_internalzd2errorzd2zztools_errorz00
										(BGl_za2currentzd2passza2zd2zzengine_passz00,
										BGl_string3641z00zzfail_walkz00, BgL_arg3371z00_872);
								}
						}
				}
		}
	}



/* _fail-walk! */
	obj_t BGl__failzd2walkz12zc0zzfail_walkz00(obj_t BgL_envz00_2310,
		obj_t BgL_globalsz00_2311)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 38 */
			return BGl_failzd2walkz12zc0zzfail_walkz00(BgL_globalsz00_2311);
		}
	}



/* <anonymous:3353> */
	obj_t BGl_zc3anonymousza33353ze3z83zzfail_walkz00(obj_t BgL_envz00_2312)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 40 */
			{

				{	/* Fail/walk.scm 41 */
					obj_t BgL_list3354z00_845;

					BgL_list3354z00_845 = MAKE_PAIR(CNST_TABLE_REF(((long) 2)), BNIL);
					return (BGl_za2errorza2z00zzfail_walkz00 =
						BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 3)),
							BgL_list3354z00_845), BUNSPEC);
		}}}
	}



/* fail-fun! */
	obj_t BGl_failzd2funz12zc0zzfail_walkz00(obj_t BgL_varz00_16)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 48 */
			{	/* Fail/walk.scm 49 */
				BgL_valuez00_bglt BgL_funz00_876;

				{
					BgL_variablez00_bglt BgL_auxz00_2487;

					BgL_auxz00_2487 = (BgL_variablez00_bglt) (BgL_varz00_16);
					BgL_funz00_876 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2487))->BgL_valuez00);
				}
				{	/* Fail/walk.scm 49 */
					obj_t BgL_bodyz00_877;

					{
						BgL_sfunz00_bglt BgL_auxz00_2490;

						BgL_auxz00_2490 = (BgL_sfunz00_bglt) (BgL_funz00_876);
						BgL_bodyz00_877 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2490))->BgL_bodyz00);
					}
					{	/* Fail/walk.scm 51 */

						{	/* Fail/walk.scm 52 */
							obj_t BgL_arg3374z00_879;

							{
								BgL_variablez00_bglt BgL_auxz00_2493;

								BgL_auxz00_2493 = (BgL_variablez00_bglt) (BgL_varz00_16);
								BgL_arg3374z00_879 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_2493))->BgL_idz00);
							}
							BGl_enterzd2functionzd2zztools_errorz00(BgL_arg3374z00_879);
						}
						{	/* Fail/walk.scm 53 */
							BgL_nodez00_bglt BgL_arg3375z00_880;

							{	/* Fail/walk.scm 53 */
								BgL_nodez00_bglt BgL_res3562z00_1554;

								{	/* Fail/walk.scm 53 */
									BgL_nodez00_bglt BgL_nodez00_1528;

									BgL_nodez00_1528 = (BgL_nodez00_bglt) (BgL_bodyz00_877);
									{	/* Fail/walk.scm 53 */
										obj_t BgL_method3286z00_1529;

										{	/* Fail/walk.scm 53 */
											BgL_objectz00_bglt BgL_objz00_1530;

											BgL_objz00_1530 = (BgL_objectz00_bglt) (BgL_nodez00_1528);
											{	/* Fail/walk.scm 53 */
												long BgL_objzd2classzd2numz00_1531;

												BgL_objzd2classzd2numz00_1531 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1530);
												{	/* Fail/walk.scm 53 */
													obj_t BgL_arg2643z00_1532;

													BgL_arg2643z00_1532 =
														PROCEDURE_REF
														(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
														(int) (((long) 1)));
													{	/* Fail/walk.scm 53 */
														obj_t BgL_arrayz00_1534;

														int BgL_offsetz00_1535;

														BgL_arrayz00_1534 = BgL_arg2643z00_1532;
														BgL_offsetz00_1535 =
															(int) (BgL_objzd2classzd2numz00_1531);
														{	/* Fail/walk.scm 53 */
															long BgL_offsetz00_1536;

															BgL_offsetz00_1536 =
																((long) (BgL_offsetz00_1535) - OBJECT_TYPE);
															{	/* Fail/walk.scm 53 */
																long BgL_modz00_1537;

																{	/* Fail/walk.scm 53 */
																	int BgL_arg2645z00_1538;

																	BgL_arg2645z00_1538 = (int) (((long) 16));
																	{	/* Fail/walk.scm 53 */
																		long BgL_auxz00_2506;

																		BgL_auxz00_2506 =
																			(long) (BgL_arg2645z00_1538);
																		BgL_modz00_1537 =
																			(BgL_offsetz00_1536 / BgL_auxz00_2506);
																}}
																{	/* Fail/walk.scm 53 */
																	long BgL_restz00_1539;

																	{	/* Fail/walk.scm 53 */
																		int BgL_arg2644z00_1540;

																		BgL_arg2644z00_1540 = (int) (((long) 16));
																		{	/* Fail/walk.scm 53 */
																			long BgL_auxz00_2510;

																			BgL_auxz00_2510 =
																				(long) (BgL_arg2644z00_1540);
																			BgL_restz00_1539 =
																				(BgL_offsetz00_1536 % BgL_auxz00_2510);
																	}}
																	{	/* Fail/walk.scm 53 */

																		BgL_method3286z00_1529 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1534,
																				(int) (BgL_modz00_1537)),
																			(int) (BgL_restz00_1539));
										}}}}}}}}
										BgL_res3562z00_1554 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3286z00_1529) (BgL_method3286z00_1529,
												(obj_t) (BgL_nodez00_1528), BEOA));
								}}
								BgL_arg3375z00_880 = BgL_res3562z00_1554;
							}
							{
								obj_t BgL_auxz00_2523;

								BgL_sfunz00_bglt BgL_auxz00_2521;

								BgL_auxz00_2523 = (obj_t) (BgL_arg3375z00_880);
								BgL_auxz00_2521 = (BgL_sfunz00_bglt) (BgL_funz00_876);
								((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2521))->BgL_bodyz00) =
									((obj_t) BgL_auxz00_2523), BUNSPEC);
						}}
						return BGl_leavezd2functionzd2zztools_errorz00();
					}
				}
			}
		}
	}



/* fail-node*! */
	obj_t BGl_failzd2nodeza2z12z62zzfail_walkz00(obj_t BgL_nodeza2za2_39)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 244 */
		BGl_failzd2nodeza2z12z62zzfail_walkz00:
			if (NULLP(BgL_nodeza2za2_39))
				{	/* Fail/walk.scm 245 */
					return CNST_TABLE_REF(((long) 4));
				}
			else
				{	/* Fail/walk.scm 245 */
					{	/* Fail/walk.scm 248 */
						BgL_nodez00_bglt BgL_arg3377z00_882;

						{	/* Fail/walk.scm 248 */
							obj_t BgL_arg3378z00_883;

							BgL_arg3378z00_883 = CAR(BgL_nodeza2za2_39);
							{	/* Fail/walk.scm 248 */
								BgL_nodez00_bglt BgL_res3565z00_1585;

								{	/* Fail/walk.scm 248 */
									BgL_nodez00_bglt BgL_nodez00_1559;

									BgL_nodez00_1559 = (BgL_nodez00_bglt) (BgL_arg3378z00_883);
									{	/* Fail/walk.scm 248 */
										obj_t BgL_method3286z00_1560;

										{	/* Fail/walk.scm 248 */
											BgL_objectz00_bglt BgL_objz00_1561;

											BgL_objz00_1561 = (BgL_objectz00_bglt) (BgL_nodez00_1559);
											{	/* Fail/walk.scm 248 */
												long BgL_objzd2classzd2numz00_1562;

												BgL_objzd2classzd2numz00_1562 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1561);
												{	/* Fail/walk.scm 248 */
													obj_t BgL_arg2643z00_1563;

													BgL_arg2643z00_1563 =
														PROCEDURE_REF
														(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
														(int) (((long) 1)));
													{	/* Fail/walk.scm 248 */
														obj_t BgL_arrayz00_1565;

														int BgL_offsetz00_1566;

														BgL_arrayz00_1565 = BgL_arg2643z00_1563;
														BgL_offsetz00_1566 =
															(int) (BgL_objzd2classzd2numz00_1562);
														{	/* Fail/walk.scm 248 */
															long BgL_offsetz00_1567;

															BgL_offsetz00_1567 =
																((long) (BgL_offsetz00_1566) - OBJECT_TYPE);
															{	/* Fail/walk.scm 248 */
																long BgL_modz00_1568;

																{	/* Fail/walk.scm 248 */
																	int BgL_arg2645z00_1569;

																	BgL_arg2645z00_1569 = (int) (((long) 16));
																	{	/* Fail/walk.scm 248 */
																		long BgL_auxz00_2540;

																		BgL_auxz00_2540 =
																			(long) (BgL_arg2645z00_1569);
																		BgL_modz00_1568 =
																			(BgL_offsetz00_1567 / BgL_auxz00_2540);
																}}
																{	/* Fail/walk.scm 248 */
																	long BgL_restz00_1570;

																	{	/* Fail/walk.scm 248 */
																		int BgL_arg2644z00_1571;

																		BgL_arg2644z00_1571 = (int) (((long) 16));
																		{	/* Fail/walk.scm 248 */
																			long BgL_auxz00_2544;

																			BgL_auxz00_2544 =
																				(long) (BgL_arg2644z00_1571);
																			BgL_restz00_1570 =
																				(BgL_offsetz00_1567 % BgL_auxz00_2544);
																	}}
																	{	/* Fail/walk.scm 248 */

																		BgL_method3286z00_1560 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1565,
																				(int) (BgL_modz00_1568)),
																			(int) (BgL_restz00_1570));
										}}}}}}}}
										BgL_res3565z00_1585 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3286z00_1560) (BgL_method3286z00_1560,
												(obj_t) (BgL_nodez00_1559), BEOA));
								}}
								BgL_arg3377z00_882 = BgL_res3565z00_1585;
						}}
						{	/* Fail/walk.scm 248 */
							obj_t BgL_auxz00_2555;

							BgL_auxz00_2555 = (obj_t) (BgL_arg3377z00_882);
							SET_CAR(BgL_nodeza2za2_39, BgL_auxz00_2555);
					}}
					{
						obj_t BgL_nodeza2za2_2558;

						BgL_nodeza2za2_2558 = CDR(BgL_nodeza2za2_39);
						BgL_nodeza2za2_39 = BgL_nodeza2za2_2558;
						goto BGl_failzd2nodeza2z12z62zzfail_walkz00;
					}
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzfail_walkz00()
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 18 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_failzd2nodez12zd2default3284zd2envzc0zzfail_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string3642z00zzfail_walkz00);
		}
	}



/* fail-node! */
	BgL_nodez00_bglt BGl_failzd2nodez12zc0zzfail_walkz00(BgL_nodez00_bglt
		BgL_nodez00_17)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 59 */
			{	/* Fail/walk.scm 59 */
				obj_t BgL_method3286z00_1589;

				{	/* Fail/walk.scm 59 */
					BgL_objectz00_bglt BgL_objz00_1590;

					BgL_objz00_1590 = (BgL_objectz00_bglt) (BgL_nodez00_17);
					{	/* Fail/walk.scm 59 */
						long BgL_objzd2classzd2numz00_1591;

						BgL_objzd2classzd2numz00_1591 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1590);
						{	/* Fail/walk.scm 59 */
							obj_t BgL_arg2643z00_1592;

							BgL_arg2643z00_1592 =
								PROCEDURE_REF(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
								(int) (((long) 1)));
							{	/* Fail/walk.scm 59 */
								obj_t BgL_arrayz00_1594;

								int BgL_offsetz00_1595;

								BgL_arrayz00_1594 = BgL_arg2643z00_1592;
								BgL_offsetz00_1595 = (int) (BgL_objzd2classzd2numz00_1591);
								{	/* Fail/walk.scm 59 */
									long BgL_offsetz00_1596;

									BgL_offsetz00_1596 =
										((long) (BgL_offsetz00_1595) - OBJECT_TYPE);
									{	/* Fail/walk.scm 59 */
										long BgL_modz00_1597;

										{	/* Fail/walk.scm 59 */
											int BgL_arg2645z00_1598;

											BgL_arg2645z00_1598 = (int) (((long) 16));
											{	/* Fail/walk.scm 59 */
												long BgL_auxz00_2569;

												BgL_auxz00_2569 = (long) (BgL_arg2645z00_1598);
												BgL_modz00_1597 =
													(BgL_offsetz00_1596 / BgL_auxz00_2569);
										}}
										{	/* Fail/walk.scm 59 */
											long BgL_restz00_1599;

											{	/* Fail/walk.scm 59 */
												int BgL_arg2644z00_1600;

												BgL_arg2644z00_1600 = (int) (((long) 16));
												{	/* Fail/walk.scm 59 */
													long BgL_auxz00_2573;

													BgL_auxz00_2573 = (long) (BgL_arg2644z00_1600);
													BgL_restz00_1599 =
														(BgL_offsetz00_1596 % BgL_auxz00_2573);
											}}
											{	/* Fail/walk.scm 59 */

												BgL_method3286z00_1589 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1594,
														(int) (BgL_modz00_1597)), (int) (BgL_restz00_1599));
				}}}}}}}}
				return
					(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3286z00_1589)
					(BgL_method3286z00_1589, (obj_t) (BgL_nodez00_17), BEOA));
			}
		}
	}



/* _fail-node! */
	obj_t BGl__failzd2nodez12zc0zzfail_walkz00(obj_t BgL_envz00_2313,
		obj_t BgL_nodez00_2314)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 59 */
			return
				(obj_t) (BGl_failzd2nodez12zc0zzfail_walkz00(
					(BgL_nodez00_bglt) (BgL_nodez00_2314)));
		}
	}



/* fail-node!-default3284 */
	BgL_nodez00_bglt
		BGl_failzd2nodez12zd2default3284z12zzfail_walkz00(BgL_nodez00_bglt
		BgL_nodez00_18)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 18 */
			return
				(BgL_nodez00_bglt) (BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 5)),
					BGl_string3643z00zzfail_walkz00, (obj_t) (BgL_nodez00_18)));
		}
	}



/* _fail-node!-default3284 */
	obj_t BGl__failzd2nodez12zd2default3284z12zzfail_walkz00(obj_t
		BgL_envz00_2315, obj_t BgL_nodez00_2316)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 18 */
			return
				(obj_t) (BGl_failzd2nodez12zd2default3284z12zzfail_walkz00(
					(BgL_nodez00_bglt) (BgL_nodez00_2316)));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzfail_walkz00()
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 18 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_atomz00zzast_nodez00,
				BGl_proc3644z00zzfail_walkz00, BGl_string3642z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_kwotez00zzast_nodez00,
				BGl_proc3645z00zzfail_walkz00, BGl_string3642z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_varz00zzast_nodez00,
				BGl_proc3646z00zzfail_walkz00, BGl_string3642z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_sequencez00zzast_nodez00, BGl_proc3647z00zzfail_walkz00,
				BGl_string3642z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc3648z00zzfail_walkz00, BGl_string3642z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3649z00zzfail_walkz00,
				BGl_string3642z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc3650z00zzfail_walkz00, BGl_string3642z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc3651z00zzfail_walkz00, BGl_string3642z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc3652z00zzfail_walkz00, BGl_string3642z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3653z00zzfail_walkz00,
				BGl_string3642z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc3654z00zzfail_walkz00, BGl_string3642z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_selectz00zzast_nodez00,
				BGl_proc3655z00zzfail_walkz00, BGl_string3642z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3656z00zzfail_walkz00,
				BGl_string3642z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3657z00zzfail_walkz00,
				BGl_string3642z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc3658z00zzfail_walkz00, BGl_string3642z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3659z00zzfail_walkz00,
				BGl_string3642z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3660z00zzfail_walkz00,
				BGl_string3642z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3661z00zzfail_walkz00,
				BGl_string3642z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3662z00zzfail_walkz00,
				BGl_string3642z00zzfail_walkz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3663z00zzfail_walkz00,
				BGl_string3642z00zzfail_walkz00);
		}
	}



/* fail-node!-box-set!3326 */
	obj_t BGl_failzd2nodez12zd2boxzd2setz123326zd2zzfail_walkz00(obj_t
		BgL_envz00_2337, obj_t BgL_nodez00_2338)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 236 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1481;

				{	/* Fail/walk.scm 237 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_2614;

					BgL_nodez00_1481 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2338);
					{	/* Fail/walk.scm 238 */
						BgL_nodez00_bglt BgL_arg3552z00_1485;

						{	/* Fail/walk.scm 238 */
							BgL_nodez00_bglt BgL_arg3553z00_1486;

							BgL_arg3553z00_1486 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1481))->
								BgL_valuez00);
							{	/* Fail/walk.scm 238 */
								BgL_nodez00_bglt BgL_res3632z00_2306;

								{	/* Fail/walk.scm 238 */
									obj_t BgL_method3286z00_2281;

									{	/* Fail/walk.scm 238 */
										BgL_objectz00_bglt BgL_objz00_2282;

										BgL_objz00_2282 =
											(BgL_objectz00_bglt) (BgL_arg3553z00_1486);
										{	/* Fail/walk.scm 238 */
											long BgL_objzd2classzd2numz00_2283;

											BgL_objzd2classzd2numz00_2283 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2282);
											{	/* Fail/walk.scm 238 */
												obj_t BgL_arg2643z00_2284;

												BgL_arg2643z00_2284 =
													PROCEDURE_REF
													(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
													(int) (((long) 1)));
												{	/* Fail/walk.scm 238 */
													obj_t BgL_arrayz00_2286;

													int BgL_offsetz00_2287;

													BgL_arrayz00_2286 = BgL_arg2643z00_2284;
													BgL_offsetz00_2287 =
														(int) (BgL_objzd2classzd2numz00_2283);
													{	/* Fail/walk.scm 238 */
														long BgL_offsetz00_2288;

														BgL_offsetz00_2288 =
															((long) (BgL_offsetz00_2287) - OBJECT_TYPE);
														{	/* Fail/walk.scm 238 */
															long BgL_modz00_2289;

															{	/* Fail/walk.scm 238 */
																int BgL_arg2645z00_2290;

																BgL_arg2645z00_2290 = (int) (((long) 16));
																{	/* Fail/walk.scm 238 */
																	long BgL_auxz00_2624;

																	BgL_auxz00_2624 =
																		(long) (BgL_arg2645z00_2290);
																	BgL_modz00_2289 =
																		(BgL_offsetz00_2288 / BgL_auxz00_2624);
															}}
															{	/* Fail/walk.scm 238 */
																long BgL_restz00_2291;

																{	/* Fail/walk.scm 238 */
																	int BgL_arg2644z00_2292;

																	BgL_arg2644z00_2292 = (int) (((long) 16));
																	{	/* Fail/walk.scm 238 */
																		long BgL_auxz00_2628;

																		BgL_auxz00_2628 =
																			(long) (BgL_arg2644z00_2292);
																		BgL_restz00_2291 =
																			(BgL_offsetz00_2288 % BgL_auxz00_2628);
																}}
																{	/* Fail/walk.scm 238 */

																	BgL_method3286z00_2281 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2286,
																			(int) (BgL_modz00_2289)),
																		(int) (BgL_restz00_2291));
									}}}}}}}}
									BgL_res3632z00_2306 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3286z00_2281)
										(BgL_method3286z00_2281, (obj_t) (BgL_arg3553z00_1486),
											BEOA));
								}
								BgL_arg3552z00_1485 = BgL_res3632z00_2306;
						}}
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1481))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3552z00_1485), BUNSPEC);
					}
					BgL_auxz00_2614 = BgL_nodez00_1481;
					return (obj_t) (BgL_auxz00_2614);
				}
			}
		}
	}



/* fail-node!-box-ref3324 */
	obj_t BGl_failzd2nodez12zd2boxzd2ref3324zc0zzfail_walkz00(obj_t
		BgL_envz00_2339, obj_t BgL_nodez00_2340)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 230 */
			return (obj_t) ((BgL_boxzd2refzd2_bglt) (BgL_nodez00_2340));
		}
	}



/* fail-node!-make-box3322 */
	obj_t BGl_failzd2nodez12zd2makezd2box3322zc0zzfail_walkz00(obj_t
		BgL_envz00_2341, obj_t BgL_nodez00_2342)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 223 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1469;

				{	/* Fail/walk.scm 224 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_2644;

					BgL_nodez00_1469 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2342);
					{	/* Fail/walk.scm 224 */
						BgL_nodez00_bglt BgL_arg3548z00_1472;

						{	/* Fail/walk.scm 224 */
							BgL_nodez00_bglt BgL_arg3549z00_1473;

							BgL_arg3549z00_1473 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1469))->
								BgL_valuez00);
							{	/* Fail/walk.scm 224 */
								BgL_nodez00_bglt BgL_res3629z00_2276;

								{	/* Fail/walk.scm 224 */
									obj_t BgL_method3286z00_2251;

									{	/* Fail/walk.scm 224 */
										BgL_objectz00_bglt BgL_objz00_2252;

										BgL_objz00_2252 =
											(BgL_objectz00_bglt) (BgL_arg3549z00_1473);
										{	/* Fail/walk.scm 224 */
											long BgL_objzd2classzd2numz00_2253;

											BgL_objzd2classzd2numz00_2253 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2252);
											{	/* Fail/walk.scm 224 */
												obj_t BgL_arg2643z00_2254;

												BgL_arg2643z00_2254 =
													PROCEDURE_REF
													(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
													(int) (((long) 1)));
												{	/* Fail/walk.scm 224 */
													obj_t BgL_arrayz00_2256;

													int BgL_offsetz00_2257;

													BgL_arrayz00_2256 = BgL_arg2643z00_2254;
													BgL_offsetz00_2257 =
														(int) (BgL_objzd2classzd2numz00_2253);
													{	/* Fail/walk.scm 224 */
														long BgL_offsetz00_2258;

														BgL_offsetz00_2258 =
															((long) (BgL_offsetz00_2257) - OBJECT_TYPE);
														{	/* Fail/walk.scm 224 */
															long BgL_modz00_2259;

															{	/* Fail/walk.scm 224 */
																int BgL_arg2645z00_2260;

																BgL_arg2645z00_2260 = (int) (((long) 16));
																{	/* Fail/walk.scm 224 */
																	long BgL_auxz00_2654;

																	BgL_auxz00_2654 =
																		(long) (BgL_arg2645z00_2260);
																	BgL_modz00_2259 =
																		(BgL_offsetz00_2258 / BgL_auxz00_2654);
															}}
															{	/* Fail/walk.scm 224 */
																long BgL_restz00_2261;

																{	/* Fail/walk.scm 224 */
																	int BgL_arg2644z00_2262;

																	BgL_arg2644z00_2262 = (int) (((long) 16));
																	{	/* Fail/walk.scm 224 */
																		long BgL_auxz00_2658;

																		BgL_auxz00_2658 =
																			(long) (BgL_arg2644z00_2262);
																		BgL_restz00_2261 =
																			(BgL_offsetz00_2258 % BgL_auxz00_2658);
																}}
																{	/* Fail/walk.scm 224 */

																	BgL_method3286z00_2251 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2256,
																			(int) (BgL_modz00_2259)),
																		(int) (BgL_restz00_2261));
									}}}}}}}}
									BgL_res3629z00_2276 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3286z00_2251)
										(BgL_method3286z00_2251, (obj_t) (BgL_arg3549z00_1473),
											BEOA));
								}
								BgL_arg3548z00_1472 = BgL_res3629z00_2276;
						}}
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1469))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3548z00_1472), BUNSPEC);
					}
					BgL_auxz00_2644 = BgL_nodez00_1469;
					return (obj_t) (BgL_auxz00_2644);
				}
			}
		}
	}



/* fail-node!-jump-ex-i3320 */
	obj_t BGl_failzd2nodez12zd2jumpzd2exzd2i3320z12zzfail_walkz00(obj_t
		BgL_envz00_2343, obj_t BgL_nodez00_2344)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 214 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1459;

				{	/* Fail/walk.scm 215 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_2672;

					BgL_nodez00_1459 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2344);
					{	/* Fail/walk.scm 216 */
						BgL_nodez00_bglt BgL_arg3543z00_1463;

						{	/* Fail/walk.scm 216 */
							BgL_nodez00_bglt BgL_arg3544z00_1464;

							BgL_arg3544z00_1464 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1459))->
								BgL_exitz00);
							{	/* Fail/walk.scm 216 */
								BgL_nodez00_bglt BgL_res3623z00_2216;

								{	/* Fail/walk.scm 216 */
									obj_t BgL_method3286z00_2191;

									{	/* Fail/walk.scm 216 */
										BgL_objectz00_bglt BgL_objz00_2192;

										BgL_objz00_2192 =
											(BgL_objectz00_bglt) (BgL_arg3544z00_1464);
										{	/* Fail/walk.scm 216 */
											long BgL_objzd2classzd2numz00_2193;

											BgL_objzd2classzd2numz00_2193 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2192);
											{	/* Fail/walk.scm 216 */
												obj_t BgL_arg2643z00_2194;

												BgL_arg2643z00_2194 =
													PROCEDURE_REF
													(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
													(int) (((long) 1)));
												{	/* Fail/walk.scm 216 */
													obj_t BgL_arrayz00_2196;

													int BgL_offsetz00_2197;

													BgL_arrayz00_2196 = BgL_arg2643z00_2194;
													BgL_offsetz00_2197 =
														(int) (BgL_objzd2classzd2numz00_2193);
													{	/* Fail/walk.scm 216 */
														long BgL_offsetz00_2198;

														BgL_offsetz00_2198 =
															((long) (BgL_offsetz00_2197) - OBJECT_TYPE);
														{	/* Fail/walk.scm 216 */
															long BgL_modz00_2199;

															{	/* Fail/walk.scm 216 */
																int BgL_arg2645z00_2200;

																BgL_arg2645z00_2200 = (int) (((long) 16));
																{	/* Fail/walk.scm 216 */
																	long BgL_auxz00_2682;

																	BgL_auxz00_2682 =
																		(long) (BgL_arg2645z00_2200);
																	BgL_modz00_2199 =
																		(BgL_offsetz00_2198 / BgL_auxz00_2682);
															}}
															{	/* Fail/walk.scm 216 */
																long BgL_restz00_2201;

																{	/* Fail/walk.scm 216 */
																	int BgL_arg2644z00_2202;

																	BgL_arg2644z00_2202 = (int) (((long) 16));
																	{	/* Fail/walk.scm 216 */
																		long BgL_auxz00_2686;

																		BgL_auxz00_2686 =
																			(long) (BgL_arg2644z00_2202);
																		BgL_restz00_2201 =
																			(BgL_offsetz00_2198 % BgL_auxz00_2686);
																}}
																{	/* Fail/walk.scm 216 */

																	BgL_method3286z00_2191 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2196,
																			(int) (BgL_modz00_2199)),
																		(int) (BgL_restz00_2201));
									}}}}}}}}
									BgL_res3623z00_2216 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3286z00_2191)
										(BgL_method3286z00_2191, (obj_t) (BgL_arg3544z00_1464),
											BEOA));
								}
								BgL_arg3543z00_1463 = BgL_res3623z00_2216;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1459))->
								BgL_exitz00) =
							((BgL_nodez00_bglt) BgL_arg3543z00_1463), BUNSPEC);
					}
					{	/* Fail/walk.scm 217 */
						BgL_nodez00_bglt BgL_arg3545z00_1465;

						{	/* Fail/walk.scm 217 */
							BgL_nodez00_bglt BgL_arg3546z00_1466;

							BgL_arg3546z00_1466 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1459))->
								BgL_valuez00);
							{	/* Fail/walk.scm 217 */
								BgL_nodez00_bglt BgL_res3626z00_2246;

								{	/* Fail/walk.scm 217 */
									obj_t BgL_method3286z00_2221;

									{	/* Fail/walk.scm 217 */
										BgL_objectz00_bglt BgL_objz00_2222;

										BgL_objz00_2222 =
											(BgL_objectz00_bglt) (BgL_arg3546z00_1466);
										{	/* Fail/walk.scm 217 */
											long BgL_objzd2classzd2numz00_2223;

											BgL_objzd2classzd2numz00_2223 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2222);
											{	/* Fail/walk.scm 217 */
												obj_t BgL_arg2643z00_2224;

												BgL_arg2643z00_2224 =
													PROCEDURE_REF
													(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
													(int) (((long) 1)));
												{	/* Fail/walk.scm 217 */
													obj_t BgL_arrayz00_2226;

													int BgL_offsetz00_2227;

													BgL_arrayz00_2226 = BgL_arg2643z00_2224;
													BgL_offsetz00_2227 =
														(int) (BgL_objzd2classzd2numz00_2223);
													{	/* Fail/walk.scm 217 */
														long BgL_offsetz00_2228;

														BgL_offsetz00_2228 =
															((long) (BgL_offsetz00_2227) - OBJECT_TYPE);
														{	/* Fail/walk.scm 217 */
															long BgL_modz00_2229;

															{	/* Fail/walk.scm 217 */
																int BgL_arg2645z00_2230;

																BgL_arg2645z00_2230 = (int) (((long) 16));
																{	/* Fail/walk.scm 217 */
																	long BgL_auxz00_2707;

																	BgL_auxz00_2707 =
																		(long) (BgL_arg2645z00_2230);
																	BgL_modz00_2229 =
																		(BgL_offsetz00_2228 / BgL_auxz00_2707);
															}}
															{	/* Fail/walk.scm 217 */
																long BgL_restz00_2231;

																{	/* Fail/walk.scm 217 */
																	int BgL_arg2644z00_2232;

																	BgL_arg2644z00_2232 = (int) (((long) 16));
																	{	/* Fail/walk.scm 217 */
																		long BgL_auxz00_2711;

																		BgL_auxz00_2711 =
																			(long) (BgL_arg2644z00_2232);
																		BgL_restz00_2231 =
																			(BgL_offsetz00_2228 % BgL_auxz00_2711);
																}}
																{	/* Fail/walk.scm 217 */

																	BgL_method3286z00_2221 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2226,
																			(int) (BgL_modz00_2229)),
																		(int) (BgL_restz00_2231));
									}}}}}}}}
									BgL_res3626z00_2246 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3286z00_2221)
										(BgL_method3286z00_2221, (obj_t) (BgL_arg3546z00_1466),
											BEOA));
								}
								BgL_arg3545z00_1465 = BgL_res3626z00_2246;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1459))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3545z00_1465), BUNSPEC);
					}
					BgL_auxz00_2672 = BgL_nodez00_1459;
					return (obj_t) (BgL_auxz00_2672);
				}
			}
		}
	}



/* fail-node!-set-ex-it3318 */
	obj_t BGl_failzd2nodez12zd2setzd2exzd2it3318z12zzfail_walkz00(obj_t
		BgL_envz00_2345, obj_t BgL_nodez00_2346)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 207 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1452;

				{	/* Fail/walk.scm 208 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_2725;

					BgL_nodez00_1452 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2346);
					{	/* Fail/walk.scm 208 */
						BgL_nodez00_bglt BgL_arg3540z00_1455;

						{	/* Fail/walk.scm 208 */
							BgL_nodez00_bglt BgL_arg3541z00_1456;

							BgL_arg3541z00_1456 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1452))->
								BgL_bodyz00);
							{	/* Fail/walk.scm 208 */
								BgL_nodez00_bglt BgL_res3620z00_2186;

								{	/* Fail/walk.scm 208 */
									obj_t BgL_method3286z00_2161;

									{	/* Fail/walk.scm 208 */
										BgL_objectz00_bglt BgL_objz00_2162;

										BgL_objz00_2162 =
											(BgL_objectz00_bglt) (BgL_arg3541z00_1456);
										{	/* Fail/walk.scm 208 */
											long BgL_objzd2classzd2numz00_2163;

											BgL_objzd2classzd2numz00_2163 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2162);
											{	/* Fail/walk.scm 208 */
												obj_t BgL_arg2643z00_2164;

												BgL_arg2643z00_2164 =
													PROCEDURE_REF
													(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
													(int) (((long) 1)));
												{	/* Fail/walk.scm 208 */
													obj_t BgL_arrayz00_2166;

													int BgL_offsetz00_2167;

													BgL_arrayz00_2166 = BgL_arg2643z00_2164;
													BgL_offsetz00_2167 =
														(int) (BgL_objzd2classzd2numz00_2163);
													{	/* Fail/walk.scm 208 */
														long BgL_offsetz00_2168;

														BgL_offsetz00_2168 =
															((long) (BgL_offsetz00_2167) - OBJECT_TYPE);
														{	/* Fail/walk.scm 208 */
															long BgL_modz00_2169;

															{	/* Fail/walk.scm 208 */
																int BgL_arg2645z00_2170;

																BgL_arg2645z00_2170 = (int) (((long) 16));
																{	/* Fail/walk.scm 208 */
																	long BgL_auxz00_2735;

																	BgL_auxz00_2735 =
																		(long) (BgL_arg2645z00_2170);
																	BgL_modz00_2169 =
																		(BgL_offsetz00_2168 / BgL_auxz00_2735);
															}}
															{	/* Fail/walk.scm 208 */
																long BgL_restz00_2171;

																{	/* Fail/walk.scm 208 */
																	int BgL_arg2644z00_2172;

																	BgL_arg2644z00_2172 = (int) (((long) 16));
																	{	/* Fail/walk.scm 208 */
																		long BgL_auxz00_2739;

																		BgL_auxz00_2739 =
																			(long) (BgL_arg2644z00_2172);
																		BgL_restz00_2171 =
																			(BgL_offsetz00_2168 % BgL_auxz00_2739);
																}}
																{	/* Fail/walk.scm 208 */

																	BgL_method3286z00_2161 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2166,
																			(int) (BgL_modz00_2169)),
																		(int) (BgL_restz00_2171));
									}}}}}}}}
									BgL_res3620z00_2186 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3286z00_2161)
										(BgL_method3286z00_2161, (obj_t) (BgL_arg3541z00_1456),
											BEOA));
								}
								BgL_arg3540z00_1455 = BgL_res3620z00_2186;
						}}
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1452))->
								BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3540z00_1455), BUNSPEC);
					}
					BgL_auxz00_2725 = BgL_nodez00_1452;
					return (obj_t) (BgL_auxz00_2725);
				}
			}
		}
	}



/* fail-node!-cast3316 */
	obj_t BGl_failzd2nodez12zd2cast3316z12zzfail_walkz00(obj_t BgL_envz00_2347,
		obj_t BgL_nodez00_2348)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 199 */
			{
				BgL_castz00_bglt BgL_nodez00_1444;

				{	/* Fail/walk.scm 200 */
					BgL_castz00_bglt BgL_auxz00_2753;

					BgL_nodez00_1444 = (BgL_castz00_bglt) (BgL_nodez00_2348);
					{	/* Fail/walk.scm 201 */
						BgL_nodez00_bglt BgL_arg3537z00_1448;

						{	/* Fail/walk.scm 201 */
							BgL_nodez00_bglt BgL_arg3538z00_1449;

							BgL_arg3538z00_1449 =
								(((BgL_castz00_bglt) CREF(BgL_nodez00_1444))->BgL_argz00);
							{	/* Fail/walk.scm 201 */
								BgL_nodez00_bglt BgL_res3617z00_2156;

								{	/* Fail/walk.scm 201 */
									obj_t BgL_method3286z00_2131;

									{	/* Fail/walk.scm 201 */
										BgL_objectz00_bglt BgL_objz00_2132;

										BgL_objz00_2132 =
											(BgL_objectz00_bglt) (BgL_arg3538z00_1449);
										{	/* Fail/walk.scm 201 */
											long BgL_objzd2classzd2numz00_2133;

											BgL_objzd2classzd2numz00_2133 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2132);
											{	/* Fail/walk.scm 201 */
												obj_t BgL_arg2643z00_2134;

												BgL_arg2643z00_2134 =
													PROCEDURE_REF
													(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
													(int) (((long) 1)));
												{	/* Fail/walk.scm 201 */
													obj_t BgL_arrayz00_2136;

													int BgL_offsetz00_2137;

													BgL_arrayz00_2136 = BgL_arg2643z00_2134;
													BgL_offsetz00_2137 =
														(int) (BgL_objzd2classzd2numz00_2133);
													{	/* Fail/walk.scm 201 */
														long BgL_offsetz00_2138;

														BgL_offsetz00_2138 =
															((long) (BgL_offsetz00_2137) - OBJECT_TYPE);
														{	/* Fail/walk.scm 201 */
															long BgL_modz00_2139;

															{	/* Fail/walk.scm 201 */
																int BgL_arg2645z00_2140;

																BgL_arg2645z00_2140 = (int) (((long) 16));
																{	/* Fail/walk.scm 201 */
																	long BgL_auxz00_2763;

																	BgL_auxz00_2763 =
																		(long) (BgL_arg2645z00_2140);
																	BgL_modz00_2139 =
																		(BgL_offsetz00_2138 / BgL_auxz00_2763);
															}}
															{	/* Fail/walk.scm 201 */
																long BgL_restz00_2141;

																{	/* Fail/walk.scm 201 */
																	int BgL_arg2644z00_2142;

																	BgL_arg2644z00_2142 = (int) (((long) 16));
																	{	/* Fail/walk.scm 201 */
																		long BgL_auxz00_2767;

																		BgL_auxz00_2767 =
																			(long) (BgL_arg2644z00_2142);
																		BgL_restz00_2141 =
																			(BgL_offsetz00_2138 % BgL_auxz00_2767);
																}}
																{	/* Fail/walk.scm 201 */

																	BgL_method3286z00_2131 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2136,
																			(int) (BgL_modz00_2139)),
																		(int) (BgL_restz00_2141));
									}}}}}}}}
									BgL_res3617z00_2156 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3286z00_2131)
										(BgL_method3286z00_2131, (obj_t) (BgL_arg3538z00_1449),
											BEOA));
								}
								BgL_arg3537z00_1448 = BgL_res3617z00_2156;
						}}
						((((BgL_castz00_bglt) CREF(BgL_nodez00_1444))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg3537z00_1448), BUNSPEC);
					}
					BgL_auxz00_2753 = BgL_nodez00_1444;
					return (obj_t) (BgL_auxz00_2753);
				}
			}
		}
	}



/* fail-node!-let-var3314 */
	obj_t BGl_failzd2nodez12zd2letzd2var3314zc0zzfail_walkz00(obj_t
		BgL_envz00_2349, obj_t BgL_nodez00_2350)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 188 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1426;

				{	/* Fail/walk.scm 189 */
					BgL_letzd2varzd2_bglt BgL_auxz00_2781;

					BgL_nodez00_1426 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2350);
					{	/* Fail/walk.scm 190 */
						obj_t BgL_g3283z00_1430;

						BgL_g3283z00_1430 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1426))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3281z00_1432;

							BgL_l3281z00_1432 = BgL_g3283z00_1430;
						BgL_zc3anonymousza33528ze3z83_1433:
							if (PAIRP(BgL_l3281z00_1432))
								{	/* Fail/walk.scm 190 */
									{	/* Fail/walk.scm 191 */
										obj_t BgL_bindingz00_1435;

										BgL_bindingz00_1435 = CAR(BgL_l3281z00_1432);
										{	/* Fail/walk.scm 191 */
											BgL_nodez00_bglt BgL_arg3530z00_1436;

											{	/* Fail/walk.scm 191 */
												obj_t BgL_arg3531z00_1437;

												BgL_arg3531z00_1437 = CDR(BgL_bindingz00_1435);
												{	/* Fail/walk.scm 191 */
													BgL_nodez00_bglt BgL_res3611z00_2095;

													{	/* Fail/walk.scm 191 */
														BgL_nodez00_bglt BgL_nodez00_2069;

														BgL_nodez00_2069 =
															(BgL_nodez00_bglt) (BgL_arg3531z00_1437);
														{	/* Fail/walk.scm 191 */
															obj_t BgL_method3286z00_2070;

															{	/* Fail/walk.scm 191 */
																BgL_objectz00_bglt BgL_objz00_2071;

																BgL_objz00_2071 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2069);
																{	/* Fail/walk.scm 191 */
																	long BgL_objzd2classzd2numz00_2072;

																	BgL_objzd2classzd2numz00_2072 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2071);
																	{	/* Fail/walk.scm 191 */
																		obj_t BgL_arg2643z00_2073;

																		BgL_arg2643z00_2073 =
																			PROCEDURE_REF
																			(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
																			(int) (((long) 1)));
																		{	/* Fail/walk.scm 191 */
																			obj_t BgL_arrayz00_2075;

																			int BgL_offsetz00_2076;

																			BgL_arrayz00_2075 = BgL_arg2643z00_2073;
																			BgL_offsetz00_2076 =
																				(int) (BgL_objzd2classzd2numz00_2072);
																			{	/* Fail/walk.scm 191 */
																				long BgL_offsetz00_2077;

																				BgL_offsetz00_2077 =
																					(
																					(long) (BgL_offsetz00_2076) -
																					OBJECT_TYPE);
																				{	/* Fail/walk.scm 191 */
																					long BgL_modz00_2078;

																					{	/* Fail/walk.scm 191 */
																						int BgL_arg2645z00_2079;

																						BgL_arg2645z00_2079 =
																							(int) (((long) 16));
																						{	/* Fail/walk.scm 191 */
																							long BgL_auxz00_2796;

																							BgL_auxz00_2796 =
																								(long) (BgL_arg2645z00_2079);
																							BgL_modz00_2078 =
																								(BgL_offsetz00_2077 /
																								BgL_auxz00_2796);
																					}}
																					{	/* Fail/walk.scm 191 */
																						long BgL_restz00_2080;

																						{	/* Fail/walk.scm 191 */
																							int BgL_arg2644z00_2081;

																							BgL_arg2644z00_2081 =
																								(int) (((long) 16));
																							{	/* Fail/walk.scm 191 */
																								long BgL_auxz00_2800;

																								BgL_auxz00_2800 =
																									(long) (BgL_arg2644z00_2081);
																								BgL_restz00_2080 =
																									(BgL_offsetz00_2077 %
																									BgL_auxz00_2800);
																						}}
																						{	/* Fail/walk.scm 191 */

																							BgL_method3286z00_2070 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2075,
																									(int) (BgL_modz00_2078)),
																								(int) (BgL_restz00_2080));
															}}}}}}}}
															BgL_res3611z00_2095 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3286z00_2070)
																(BgL_method3286z00_2070,
																	(obj_t) (BgL_nodez00_2069), BEOA));
													}}
													BgL_arg3530z00_1436 = BgL_res3611z00_2095;
											}}
											{	/* Fail/walk.scm 191 */
												obj_t BgL_auxz00_2811;

												BgL_auxz00_2811 = (obj_t) (BgL_arg3530z00_1436);
												SET_CDR(BgL_bindingz00_1435, BgL_auxz00_2811);
									}}}
									{
										obj_t BgL_l3281z00_2814;

										BgL_l3281z00_2814 = CDR(BgL_l3281z00_1432);
										BgL_l3281z00_1432 = BgL_l3281z00_2814;
										goto BgL_zc3anonymousza33528ze3z83_1433;
									}
								}
							else
								{	/* Fail/walk.scm 190 */
									((bool_t) 1);
								}
						}
					}
					{	/* Fail/walk.scm 193 */
						BgL_nodez00_bglt BgL_arg3533z00_1440;

						{	/* Fail/walk.scm 193 */
							BgL_nodez00_bglt BgL_arg3535z00_1441;

							BgL_arg3535z00_1441 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1426))->BgL_bodyz00);
							{	/* Fail/walk.scm 193 */
								BgL_nodez00_bglt BgL_res3614z00_2126;

								{	/* Fail/walk.scm 193 */
									obj_t BgL_method3286z00_2101;

									{	/* Fail/walk.scm 193 */
										BgL_objectz00_bglt BgL_objz00_2102;

										BgL_objz00_2102 =
											(BgL_objectz00_bglt) (BgL_arg3535z00_1441);
										{	/* Fail/walk.scm 193 */
											long BgL_objzd2classzd2numz00_2103;

											BgL_objzd2classzd2numz00_2103 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2102);
											{	/* Fail/walk.scm 193 */
												obj_t BgL_arg2643z00_2104;

												BgL_arg2643z00_2104 =
													PROCEDURE_REF
													(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
													(int) (((long) 1)));
												{	/* Fail/walk.scm 193 */
													obj_t BgL_arrayz00_2106;

													int BgL_offsetz00_2107;

													BgL_arrayz00_2106 = BgL_arg2643z00_2104;
													BgL_offsetz00_2107 =
														(int) (BgL_objzd2classzd2numz00_2103);
													{	/* Fail/walk.scm 193 */
														long BgL_offsetz00_2108;

														BgL_offsetz00_2108 =
															((long) (BgL_offsetz00_2107) - OBJECT_TYPE);
														{	/* Fail/walk.scm 193 */
															long BgL_modz00_2109;

															{	/* Fail/walk.scm 193 */
																int BgL_arg2645z00_2110;

																BgL_arg2645z00_2110 = (int) (((long) 16));
																{	/* Fail/walk.scm 193 */
																	long BgL_auxz00_2825;

																	BgL_auxz00_2825 =
																		(long) (BgL_arg2645z00_2110);
																	BgL_modz00_2109 =
																		(BgL_offsetz00_2108 / BgL_auxz00_2825);
															}}
															{	/* Fail/walk.scm 193 */
																long BgL_restz00_2111;

																{	/* Fail/walk.scm 193 */
																	int BgL_arg2644z00_2112;

																	BgL_arg2644z00_2112 = (int) (((long) 16));
																	{	/* Fail/walk.scm 193 */
																		long BgL_auxz00_2829;

																		BgL_auxz00_2829 =
																			(long) (BgL_arg2644z00_2112);
																		BgL_restz00_2111 =
																			(BgL_offsetz00_2108 % BgL_auxz00_2829);
																}}
																{	/* Fail/walk.scm 193 */

																	BgL_method3286z00_2101 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2106,
																			(int) (BgL_modz00_2109)),
																		(int) (BgL_restz00_2111));
									}}}}}}}}
									BgL_res3614z00_2126 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3286z00_2101)
										(BgL_method3286z00_2101, (obj_t) (BgL_arg3535z00_1441),
											BEOA));
								}
								BgL_arg3533z00_1440 = BgL_res3614z00_2126;
						}}
						((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1426))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3533z00_1440), BUNSPEC);
					}
					BgL_auxz00_2781 = BgL_nodez00_1426;
					return (obj_t) (BgL_auxz00_2781);
				}
			}
		}
	}



/* fail-node!-let-fun3312 */
	obj_t BGl_failzd2nodez12zd2letzd2fun3312zc0zzfail_walkz00(obj_t
		BgL_envz00_2351, obj_t BgL_nodez00_2352)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 179 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1410;

				{	/* Fail/walk.scm 180 */
					BgL_letzd2funzd2_bglt BgL_auxz00_2843;

					BgL_nodez00_1410 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2352);
					{	/* Fail/walk.scm 181 */
						obj_t BgL_g3280z00_1414;

						BgL_g3280z00_1414 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1410))->BgL_localsz00);
						{
							obj_t BgL_l3278z00_1416;

							BgL_l3278z00_1416 = BgL_g3280z00_1414;
						BgL_zc3anonymousza33521ze3z83_1417:
							if (PAIRP(BgL_l3278z00_1416))
								{	/* Fail/walk.scm 181 */
									BGl_failzd2funz12zc0zzfail_walkz00(CAR(BgL_l3278z00_1416));
									{
										obj_t BgL_l3278z00_2849;

										BgL_l3278z00_2849 = CDR(BgL_l3278z00_1416);
										BgL_l3278z00_1416 = BgL_l3278z00_2849;
										goto BgL_zc3anonymousza33521ze3z83_1417;
									}
								}
							else
								{	/* Fail/walk.scm 181 */
									((bool_t) 1);
								}
						}
					}
					{	/* Fail/walk.scm 182 */
						BgL_nodez00_bglt BgL_arg3525z00_1422;

						{	/* Fail/walk.scm 182 */
							BgL_nodez00_bglt BgL_arg3526z00_1423;

							BgL_arg3526z00_1423 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1410))->BgL_bodyz00);
							{	/* Fail/walk.scm 182 */
								BgL_nodez00_bglt BgL_res3608z00_2062;

								{	/* Fail/walk.scm 182 */
									obj_t BgL_method3286z00_2037;

									{	/* Fail/walk.scm 182 */
										BgL_objectz00_bglt BgL_objz00_2038;

										BgL_objz00_2038 =
											(BgL_objectz00_bglt) (BgL_arg3526z00_1423);
										{	/* Fail/walk.scm 182 */
											long BgL_objzd2classzd2numz00_2039;

											BgL_objzd2classzd2numz00_2039 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2038);
											{	/* Fail/walk.scm 182 */
												obj_t BgL_arg2643z00_2040;

												BgL_arg2643z00_2040 =
													PROCEDURE_REF
													(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
													(int) (((long) 1)));
												{	/* Fail/walk.scm 182 */
													obj_t BgL_arrayz00_2042;

													int BgL_offsetz00_2043;

													BgL_arrayz00_2042 = BgL_arg2643z00_2040;
													BgL_offsetz00_2043 =
														(int) (BgL_objzd2classzd2numz00_2039);
													{	/* Fail/walk.scm 182 */
														long BgL_offsetz00_2044;

														BgL_offsetz00_2044 =
															((long) (BgL_offsetz00_2043) - OBJECT_TYPE);
														{	/* Fail/walk.scm 182 */
															long BgL_modz00_2045;

															{	/* Fail/walk.scm 182 */
																int BgL_arg2645z00_2046;

																BgL_arg2645z00_2046 = (int) (((long) 16));
																{	/* Fail/walk.scm 182 */
																	long BgL_auxz00_2860;

																	BgL_auxz00_2860 =
																		(long) (BgL_arg2645z00_2046);
																	BgL_modz00_2045 =
																		(BgL_offsetz00_2044 / BgL_auxz00_2860);
															}}
															{	/* Fail/walk.scm 182 */
																long BgL_restz00_2047;

																{	/* Fail/walk.scm 182 */
																	int BgL_arg2644z00_2048;

																	BgL_arg2644z00_2048 = (int) (((long) 16));
																	{	/* Fail/walk.scm 182 */
																		long BgL_auxz00_2864;

																		BgL_auxz00_2864 =
																			(long) (BgL_arg2644z00_2048);
																		BgL_restz00_2047 =
																			(BgL_offsetz00_2044 % BgL_auxz00_2864);
																}}
																{	/* Fail/walk.scm 182 */

																	BgL_method3286z00_2037 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2042,
																			(int) (BgL_modz00_2045)),
																		(int) (BgL_restz00_2047));
									}}}}}}}}
									BgL_res3608z00_2062 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3286z00_2037)
										(BgL_method3286z00_2037, (obj_t) (BgL_arg3526z00_1423),
											BEOA));
								}
								BgL_arg3525z00_1422 = BgL_res3608z00_2062;
						}}
						((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1410))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3525z00_1422), BUNSPEC);
					}
					BgL_auxz00_2843 = BgL_nodez00_1410;
					return (obj_t) (BgL_auxz00_2843);
				}
			}
		}
	}



/* fail-node!-select3310 */
	obj_t BGl_failzd2nodez12zd2select3310z12zzfail_walkz00(obj_t BgL_envz00_2353,
		obj_t BgL_nodez00_2354)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 168 */
			{
				BgL_selectz00_bglt BgL_nodez00_1392;

				{	/* Fail/walk.scm 169 */
					BgL_selectz00_bglt BgL_auxz00_2878;

					BgL_nodez00_1392 = (BgL_selectz00_bglt) (BgL_nodez00_2354);
					{	/* Fail/walk.scm 170 */
						BgL_nodez00_bglt BgL_arg3512z00_1396;

						{	/* Fail/walk.scm 170 */
							BgL_nodez00_bglt BgL_arg3513z00_1397;

							BgL_arg3513z00_1397 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1392))->BgL_testz00);
							{	/* Fail/walk.scm 170 */
								BgL_nodez00_bglt BgL_res3602z00_1994;

								{	/* Fail/walk.scm 170 */
									obj_t BgL_method3286z00_1969;

									{	/* Fail/walk.scm 170 */
										BgL_objectz00_bglt BgL_objz00_1970;

										BgL_objz00_1970 =
											(BgL_objectz00_bglt) (BgL_arg3513z00_1397);
										{	/* Fail/walk.scm 170 */
											long BgL_objzd2classzd2numz00_1971;

											BgL_objzd2classzd2numz00_1971 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1970);
											{	/* Fail/walk.scm 170 */
												obj_t BgL_arg2643z00_1972;

												BgL_arg2643z00_1972 =
													PROCEDURE_REF
													(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
													(int) (((long) 1)));
												{	/* Fail/walk.scm 170 */
													obj_t BgL_arrayz00_1974;

													int BgL_offsetz00_1975;

													BgL_arrayz00_1974 = BgL_arg2643z00_1972;
													BgL_offsetz00_1975 =
														(int) (BgL_objzd2classzd2numz00_1971);
													{	/* Fail/walk.scm 170 */
														long BgL_offsetz00_1976;

														BgL_offsetz00_1976 =
															((long) (BgL_offsetz00_1975) - OBJECT_TYPE);
														{	/* Fail/walk.scm 170 */
															long BgL_modz00_1977;

															{	/* Fail/walk.scm 170 */
																int BgL_arg2645z00_1978;

																BgL_arg2645z00_1978 = (int) (((long) 16));
																{	/* Fail/walk.scm 170 */
																	long BgL_auxz00_2888;

																	BgL_auxz00_2888 =
																		(long) (BgL_arg2645z00_1978);
																	BgL_modz00_1977 =
																		(BgL_offsetz00_1976 / BgL_auxz00_2888);
															}}
															{	/* Fail/walk.scm 170 */
																long BgL_restz00_1979;

																{	/* Fail/walk.scm 170 */
																	int BgL_arg2644z00_1980;

																	BgL_arg2644z00_1980 = (int) (((long) 16));
																	{	/* Fail/walk.scm 170 */
																		long BgL_auxz00_2892;

																		BgL_auxz00_2892 =
																			(long) (BgL_arg2644z00_1980);
																		BgL_restz00_1979 =
																			(BgL_offsetz00_1976 % BgL_auxz00_2892);
																}}
																{	/* Fail/walk.scm 170 */

																	BgL_method3286z00_1969 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1974,
																			(int) (BgL_modz00_1977)),
																		(int) (BgL_restz00_1979));
									}}}}}}}}
									BgL_res3602z00_1994 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3286z00_1969)
										(BgL_method3286z00_1969, (obj_t) (BgL_arg3513z00_1397),
											BEOA));
								}
								BgL_arg3512z00_1396 = BgL_res3602z00_1994;
						}}
						((((BgL_selectz00_bglt) CREF(BgL_nodez00_1392))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3512z00_1396), BUNSPEC);
					}
					{	/* Fail/walk.scm 171 */
						obj_t BgL_g3277z00_1398;

						BgL_g3277z00_1398 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1392))->BgL_clausesz00);
						{
							obj_t BgL_l3275z00_1400;

							BgL_l3275z00_1400 = BgL_g3277z00_1398;
						BgL_zc3anonymousza33514ze3z83_1401:
							if (PAIRP(BgL_l3275z00_1400))
								{	/* Fail/walk.scm 171 */
									{	/* Fail/walk.scm 172 */
										obj_t BgL_clausez00_1403;

										BgL_clausez00_1403 = CAR(BgL_l3275z00_1400);
										{	/* Fail/walk.scm 172 */
											BgL_nodez00_bglt BgL_arg3517z00_1404;

											{	/* Fail/walk.scm 172 */
												obj_t BgL_arg3518z00_1405;

												BgL_arg3518z00_1405 = CDR(BgL_clausez00_1403);
												{	/* Fail/walk.scm 172 */
													BgL_nodez00_bglt BgL_res3605z00_2027;

													{	/* Fail/walk.scm 172 */
														BgL_nodez00_bglt BgL_nodez00_2001;

														BgL_nodez00_2001 =
															(BgL_nodez00_bglt) (BgL_arg3518z00_1405);
														{	/* Fail/walk.scm 172 */
															obj_t BgL_method3286z00_2002;

															{	/* Fail/walk.scm 172 */
																BgL_objectz00_bglt BgL_objz00_2003;

																BgL_objz00_2003 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2001);
																{	/* Fail/walk.scm 172 */
																	long BgL_objzd2classzd2numz00_2004;

																	BgL_objzd2classzd2numz00_2004 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2003);
																	{	/* Fail/walk.scm 172 */
																		obj_t BgL_arg2643z00_2005;

																		BgL_arg2643z00_2005 =
																			PROCEDURE_REF
																			(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
																			(int) (((long) 1)));
																		{	/* Fail/walk.scm 172 */
																			obj_t BgL_arrayz00_2007;

																			int BgL_offsetz00_2008;

																			BgL_arrayz00_2007 = BgL_arg2643z00_2005;
																			BgL_offsetz00_2008 =
																				(int) (BgL_objzd2classzd2numz00_2004);
																			{	/* Fail/walk.scm 172 */
																				long BgL_offsetz00_2009;

																				BgL_offsetz00_2009 =
																					(
																					(long) (BgL_offsetz00_2008) -
																					OBJECT_TYPE);
																				{	/* Fail/walk.scm 172 */
																					long BgL_modz00_2010;

																					{	/* Fail/walk.scm 172 */
																						int BgL_arg2645z00_2011;

																						BgL_arg2645z00_2011 =
																							(int) (((long) 16));
																						{	/* Fail/walk.scm 172 */
																							long BgL_auxz00_2918;

																							BgL_auxz00_2918 =
																								(long) (BgL_arg2645z00_2011);
																							BgL_modz00_2010 =
																								(BgL_offsetz00_2009 /
																								BgL_auxz00_2918);
																					}}
																					{	/* Fail/walk.scm 172 */
																						long BgL_restz00_2012;

																						{	/* Fail/walk.scm 172 */
																							int BgL_arg2644z00_2013;

																							BgL_arg2644z00_2013 =
																								(int) (((long) 16));
																							{	/* Fail/walk.scm 172 */
																								long BgL_auxz00_2922;

																								BgL_auxz00_2922 =
																									(long) (BgL_arg2644z00_2013);
																								BgL_restz00_2012 =
																									(BgL_offsetz00_2009 %
																									BgL_auxz00_2922);
																						}}
																						{	/* Fail/walk.scm 172 */

																							BgL_method3286z00_2002 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2007,
																									(int) (BgL_modz00_2010)),
																								(int) (BgL_restz00_2012));
															}}}}}}}}
															BgL_res3605z00_2027 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3286z00_2002)
																(BgL_method3286z00_2002,
																	(obj_t) (BgL_nodez00_2001), BEOA));
													}}
													BgL_arg3517z00_1404 = BgL_res3605z00_2027;
											}}
											{	/* Fail/walk.scm 172 */
												obj_t BgL_auxz00_2933;

												BgL_auxz00_2933 = (obj_t) (BgL_arg3517z00_1404);
												SET_CDR(BgL_clausez00_1403, BgL_auxz00_2933);
									}}}
									{
										obj_t BgL_l3275z00_2936;

										BgL_l3275z00_2936 = CDR(BgL_l3275z00_1400);
										BgL_l3275z00_1400 = BgL_l3275z00_2936;
										goto BgL_zc3anonymousza33514ze3z83_1401;
									}
								}
							else
								{	/* Fail/walk.scm 171 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_2878 = BgL_nodez00_1392;
					return (obj_t) (BgL_auxz00_2878);
				}
			}
		}
	}



/* fail-node!-fail3308 */
	obj_t BGl_failzd2nodez12zd2fail3308z12zzfail_walkz00(obj_t BgL_envz00_2355,
		obj_t BgL_nodez00_2356)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 149 */
			{
				BgL_failz00_bglt BgL_nodez00_1359;

				BgL_nodez00_1359 = (BgL_failz00_bglt) (BgL_nodez00_2356);
				{	/* Fail/walk.scm 151 */
					BgL_nodez00_bglt BgL_arg3484z00_1363;

					{	/* Fail/walk.scm 151 */
						BgL_nodez00_bglt BgL_arg3485z00_1364;

						BgL_arg3485z00_1364 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_1359))->BgL_procz00);
						{	/* Fail/walk.scm 151 */
							BgL_nodez00_bglt BgL_res3592z00_1887;

							{	/* Fail/walk.scm 151 */
								obj_t BgL_method3286z00_1862;

								{	/* Fail/walk.scm 151 */
									BgL_objectz00_bglt BgL_objz00_1863;

									BgL_objz00_1863 = (BgL_objectz00_bglt) (BgL_arg3485z00_1364);
									{	/* Fail/walk.scm 151 */
										long BgL_objzd2classzd2numz00_1864;

										BgL_objzd2classzd2numz00_1864 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1863);
										{	/* Fail/walk.scm 151 */
											obj_t BgL_arg2643z00_1865;

											BgL_arg2643z00_1865 =
												PROCEDURE_REF(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
												(int) (((long) 1)));
											{	/* Fail/walk.scm 151 */
												obj_t BgL_arrayz00_1867;

												int BgL_offsetz00_1868;

												BgL_arrayz00_1867 = BgL_arg2643z00_1865;
												BgL_offsetz00_1868 =
													(int) (BgL_objzd2classzd2numz00_1864);
												{	/* Fail/walk.scm 151 */
													long BgL_offsetz00_1869;

													BgL_offsetz00_1869 =
														((long) (BgL_offsetz00_1868) - OBJECT_TYPE);
													{	/* Fail/walk.scm 151 */
														long BgL_modz00_1870;

														{	/* Fail/walk.scm 151 */
															int BgL_arg2645z00_1871;

															BgL_arg2645z00_1871 = (int) (((long) 16));
															{	/* Fail/walk.scm 151 */
																long BgL_auxz00_2949;

																BgL_auxz00_2949 = (long) (BgL_arg2645z00_1871);
																BgL_modz00_1870 =
																	(BgL_offsetz00_1869 / BgL_auxz00_2949);
														}}
														{	/* Fail/walk.scm 151 */
															long BgL_restz00_1872;

															{	/* Fail/walk.scm 151 */
																int BgL_arg2644z00_1873;

																BgL_arg2644z00_1873 = (int) (((long) 16));
																{	/* Fail/walk.scm 151 */
																	long BgL_auxz00_2953;

																	BgL_auxz00_2953 =
																		(long) (BgL_arg2644z00_1873);
																	BgL_restz00_1872 =
																		(BgL_offsetz00_1869 % BgL_auxz00_2953);
															}}
															{	/* Fail/walk.scm 151 */

																BgL_method3286z00_1862 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1867,
																		(int) (BgL_modz00_1870)),
																	(int) (BgL_restz00_1872));
								}}}}}}}}
								BgL_res3592z00_1887 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3286z00_1862)
									(BgL_method3286z00_1862, (obj_t) (BgL_arg3485z00_1364),
										BEOA));
							}
							BgL_arg3484z00_1363 = BgL_res3592z00_1887;
					}}
					((((BgL_failz00_bglt) CREF(BgL_nodez00_1359))->BgL_procz00) =
						((BgL_nodez00_bglt) BgL_arg3484z00_1363), BUNSPEC);
				}
				{	/* Fail/walk.scm 152 */
					BgL_nodez00_bglt BgL_arg3486z00_1365;

					{	/* Fail/walk.scm 152 */
						BgL_nodez00_bglt BgL_arg3487z00_1366;

						BgL_arg3487z00_1366 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_1359))->BgL_msgz00);
						{	/* Fail/walk.scm 152 */
							BgL_nodez00_bglt BgL_res3595z00_1917;

							{	/* Fail/walk.scm 152 */
								obj_t BgL_method3286z00_1892;

								{	/* Fail/walk.scm 152 */
									BgL_objectz00_bglt BgL_objz00_1893;

									BgL_objz00_1893 = (BgL_objectz00_bglt) (BgL_arg3487z00_1366);
									{	/* Fail/walk.scm 152 */
										long BgL_objzd2classzd2numz00_1894;

										BgL_objzd2classzd2numz00_1894 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1893);
										{	/* Fail/walk.scm 152 */
											obj_t BgL_arg2643z00_1895;

											BgL_arg2643z00_1895 =
												PROCEDURE_REF(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
												(int) (((long) 1)));
											{	/* Fail/walk.scm 152 */
												obj_t BgL_arrayz00_1897;

												int BgL_offsetz00_1898;

												BgL_arrayz00_1897 = BgL_arg2643z00_1895;
												BgL_offsetz00_1898 =
													(int) (BgL_objzd2classzd2numz00_1894);
												{	/* Fail/walk.scm 152 */
													long BgL_offsetz00_1899;

													BgL_offsetz00_1899 =
														((long) (BgL_offsetz00_1898) - OBJECT_TYPE);
													{	/* Fail/walk.scm 152 */
														long BgL_modz00_1900;

														{	/* Fail/walk.scm 152 */
															int BgL_arg2645z00_1901;

															BgL_arg2645z00_1901 = (int) (((long) 16));
															{	/* Fail/walk.scm 152 */
																long BgL_auxz00_2974;

																BgL_auxz00_2974 = (long) (BgL_arg2645z00_1901);
																BgL_modz00_1900 =
																	(BgL_offsetz00_1899 / BgL_auxz00_2974);
														}}
														{	/* Fail/walk.scm 152 */
															long BgL_restz00_1902;

															{	/* Fail/walk.scm 152 */
																int BgL_arg2644z00_1903;

																BgL_arg2644z00_1903 = (int) (((long) 16));
																{	/* Fail/walk.scm 152 */
																	long BgL_auxz00_2978;

																	BgL_auxz00_2978 =
																		(long) (BgL_arg2644z00_1903);
																	BgL_restz00_1902 =
																		(BgL_offsetz00_1899 % BgL_auxz00_2978);
															}}
															{	/* Fail/walk.scm 152 */

																BgL_method3286z00_1892 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1897,
																		(int) (BgL_modz00_1900)),
																	(int) (BgL_restz00_1902));
								}}}}}}}}
								BgL_res3595z00_1917 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3286z00_1892)
									(BgL_method3286z00_1892, (obj_t) (BgL_arg3487z00_1366),
										BEOA));
							}
							BgL_arg3486z00_1365 = BgL_res3595z00_1917;
					}}
					((((BgL_failz00_bglt) CREF(BgL_nodez00_1359))->BgL_msgz00) =
						((BgL_nodez00_bglt) BgL_arg3486z00_1365), BUNSPEC);
				}
				{	/* Fail/walk.scm 153 */
					BgL_nodez00_bglt BgL_arg3488z00_1367;

					{	/* Fail/walk.scm 153 */
						BgL_nodez00_bglt BgL_arg3489z00_1368;

						BgL_arg3489z00_1368 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_1359))->BgL_objz00);
						{	/* Fail/walk.scm 153 */
							BgL_nodez00_bglt BgL_res3598z00_1947;

							{	/* Fail/walk.scm 153 */
								obj_t BgL_method3286z00_1922;

								{	/* Fail/walk.scm 153 */
									BgL_objectz00_bglt BgL_objz00_1923;

									BgL_objz00_1923 = (BgL_objectz00_bglt) (BgL_arg3489z00_1368);
									{	/* Fail/walk.scm 153 */
										long BgL_objzd2classzd2numz00_1924;

										BgL_objzd2classzd2numz00_1924 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1923);
										{	/* Fail/walk.scm 153 */
											obj_t BgL_arg2643z00_1925;

											BgL_arg2643z00_1925 =
												PROCEDURE_REF(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
												(int) (((long) 1)));
											{	/* Fail/walk.scm 153 */
												obj_t BgL_arrayz00_1927;

												int BgL_offsetz00_1928;

												BgL_arrayz00_1927 = BgL_arg2643z00_1925;
												BgL_offsetz00_1928 =
													(int) (BgL_objzd2classzd2numz00_1924);
												{	/* Fail/walk.scm 153 */
													long BgL_offsetz00_1929;

													BgL_offsetz00_1929 =
														((long) (BgL_offsetz00_1928) - OBJECT_TYPE);
													{	/* Fail/walk.scm 153 */
														long BgL_modz00_1930;

														{	/* Fail/walk.scm 153 */
															int BgL_arg2645z00_1931;

															BgL_arg2645z00_1931 = (int) (((long) 16));
															{	/* Fail/walk.scm 153 */
																long BgL_auxz00_2999;

																BgL_auxz00_2999 = (long) (BgL_arg2645z00_1931);
																BgL_modz00_1930 =
																	(BgL_offsetz00_1929 / BgL_auxz00_2999);
														}}
														{	/* Fail/walk.scm 153 */
															long BgL_restz00_1932;

															{	/* Fail/walk.scm 153 */
																int BgL_arg2644z00_1933;

																BgL_arg2644z00_1933 = (int) (((long) 16));
																{	/* Fail/walk.scm 153 */
																	long BgL_auxz00_3003;

																	BgL_auxz00_3003 =
																		(long) (BgL_arg2644z00_1933);
																	BgL_restz00_1932 =
																		(BgL_offsetz00_1929 % BgL_auxz00_3003);
															}}
															{	/* Fail/walk.scm 153 */

																BgL_method3286z00_1922 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1927,
																		(int) (BgL_modz00_1930)),
																	(int) (BgL_restz00_1932));
								}}}}}}}}
								BgL_res3598z00_1947 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3286z00_1922)
									(BgL_method3286z00_1922, (obj_t) (BgL_arg3489z00_1368),
										BEOA));
							}
							BgL_arg3488z00_1367 = BgL_res3598z00_1947;
					}}
					((((BgL_failz00_bglt) CREF(BgL_nodez00_1359))->BgL_objz00) =
						((BgL_nodez00_bglt) BgL_arg3488z00_1367), BUNSPEC);
				}
				{	/* Fail/walk.scm 154 */
					bool_t BgL_testz00_3015;

					{	/* Fail/walk.scm 154 */
						obj_t BgL_oz00_1951;

						{
							BgL_nodez00_bglt BgL_auxz00_3016;

							BgL_auxz00_3016 = (BgL_nodez00_bglt) (BgL_nodez00_1359);
							BgL_oz00_1951 =
								(((BgL_nodez00_bglt) CREF(BgL_auxz00_3016))->BgL_locz00);
						}
						if (STRUCTP(BgL_oz00_1951))
							{	/* Fail/walk.scm 154 */
								BgL_testz00_3015 =
									(STRUCT_KEY(BgL_oz00_1951) == CNST_TABLE_REF(((long) 6)));
							}
						else
							{	/* Fail/walk.scm 154 */
								BgL_testz00_3015 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_3015)
						{	/* Fail/walk.scm 155 */
							obj_t BgL_arg3491z00_1370;

							obj_t BgL_arg3493z00_1372;

							obj_t BgL_arg3494z00_1373;

							{	/* Fail/walk.scm 155 */
								obj_t BgL_arg3495z00_1374;

								obj_t BgL_arg3496z00_1375;

								BgL_arg3495z00_1374 = CNST_TABLE_REF(((long) 7));
								{	/* Fail/walk.scm 155 */
									BgL_nodez00_bglt BgL_arg3497z00_1376;

									BgL_nodez00_bglt BgL_arg3498z00_1377;

									BgL_nodez00_bglt BgL_arg3499z00_1378;

									obj_t BgL_arg3500z00_1379;

									obj_t BgL_arg3501z00_1380;

									BgL_arg3497z00_1376 =
										(((BgL_failz00_bglt) CREF(BgL_nodez00_1359))->BgL_procz00);
									BgL_arg3498z00_1377 =
										(((BgL_failz00_bglt) CREF(BgL_nodez00_1359))->BgL_msgz00);
									BgL_arg3499z00_1378 =
										(((BgL_failz00_bglt) CREF(BgL_nodez00_1359))->BgL_objz00);
									{	/* Fail/walk.scm 158 */
										obj_t BgL_arg3508z00_1387;

										{
											BgL_nodez00_bglt BgL_auxz00_3028;

											BgL_auxz00_3028 = (BgL_nodez00_bglt) (BgL_nodez00_1359);
											BgL_arg3508z00_1387 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_3028))->
												BgL_locz00);
										}
										BgL_arg3500z00_1379 =
											BGl_locationzd2fullzd2fnamez00zztools_locationz00
											(BgL_arg3508z00_1387);
									}
									{	/* Fail/walk.scm 159 */
										obj_t BgL_sz00_1964;

										{
											BgL_nodez00_bglt BgL_auxz00_3032;

											BgL_auxz00_3032 = (BgL_nodez00_bglt) (BgL_nodez00_1359);
											BgL_sz00_1964 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_3032))->
												BgL_locz00);
										}
										BgL_arg3501z00_1380 =
											STRUCT_REF(BgL_sz00_1964, (int) (((long) 1)));
									}
									{	/* Fail/walk.scm 155 */
										obj_t BgL_list3503z00_1382;

										{	/* Fail/walk.scm 155 */
											obj_t BgL_arg3504z00_1383;

											{	/* Fail/walk.scm 155 */
												obj_t BgL_arg3505z00_1384;

												{	/* Fail/walk.scm 155 */
													obj_t BgL_arg3506z00_1385;

													{	/* Fail/walk.scm 155 */
														obj_t BgL_arg3507z00_1386;

														BgL_arg3507z00_1386 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3506z00_1385 =
															MAKE_PAIR(BgL_arg3501z00_1380,
															BgL_arg3507z00_1386);
													}
													BgL_arg3505z00_1384 =
														MAKE_PAIR(BgL_arg3500z00_1379, BgL_arg3506z00_1385);
												}
												BgL_arg3504z00_1383 =
													MAKE_PAIR(
													(obj_t) (BgL_arg3499z00_1378), BgL_arg3505z00_1384);
											}
											BgL_list3503z00_1382 =
												MAKE_PAIR(
												(obj_t) (BgL_arg3498z00_1377), BgL_arg3504z00_1383);
										}
										BgL_arg3496z00_1375 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
											(obj_t) (BgL_arg3497z00_1376), BgL_list3503z00_1382);
								}}
								BgL_arg3491z00_1370 =
									MAKE_PAIR(BgL_arg3495z00_1374, BgL_arg3496z00_1375);
							}
							{
								BgL_nodez00_bglt BgL_auxz00_3047;

								BgL_auxz00_3047 = (BgL_nodez00_bglt) (BgL_nodez00_1359);
								BgL_arg3493z00_1372 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_3047))->BgL_locz00);
							}
							BgL_arg3494z00_1373 = CNST_TABLE_REF(((long) 8));
							return
								(obj_t) (BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg3491z00_1370,
									BNIL, BgL_arg3493z00_1372, BgL_arg3494z00_1373));
						}
					else
						{	/* Fail/walk.scm 154 */
							return (obj_t) (BgL_nodez00_1359);
						}
				}
			}
		}
	}



/* fail-node!-condition3306 */
	obj_t BGl_failzd2nodez12zd2condition3306z12zzfail_walkz00(obj_t
		BgL_envz00_2357, obj_t BgL_nodez00_2358)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 139 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1347;

				{	/* Fail/walk.scm 140 */
					BgL_conditionalz00_bglt BgL_auxz00_3055;

					BgL_nodez00_1347 = (BgL_conditionalz00_bglt) (BgL_nodez00_2358);
					{	/* Fail/walk.scm 141 */
						BgL_nodez00_bglt BgL_arg3476z00_1351;

						{	/* Fail/walk.scm 141 */
							BgL_nodez00_bglt BgL_arg3477z00_1352;

							BgL_arg3477z00_1352 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1347))->
								BgL_testz00);
							{	/* Fail/walk.scm 141 */
								BgL_nodez00_bglt BgL_res3583z00_1797;

								{	/* Fail/walk.scm 141 */
									obj_t BgL_method3286z00_1772;

									{	/* Fail/walk.scm 141 */
										BgL_objectz00_bglt BgL_objz00_1773;

										BgL_objz00_1773 =
											(BgL_objectz00_bglt) (BgL_arg3477z00_1352);
										{	/* Fail/walk.scm 141 */
											long BgL_objzd2classzd2numz00_1774;

											BgL_objzd2classzd2numz00_1774 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1773);
											{	/* Fail/walk.scm 141 */
												obj_t BgL_arg2643z00_1775;

												BgL_arg2643z00_1775 =
													PROCEDURE_REF
													(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
													(int) (((long) 1)));
												{	/* Fail/walk.scm 141 */
													obj_t BgL_arrayz00_1777;

													int BgL_offsetz00_1778;

													BgL_arrayz00_1777 = BgL_arg2643z00_1775;
													BgL_offsetz00_1778 =
														(int) (BgL_objzd2classzd2numz00_1774);
													{	/* Fail/walk.scm 141 */
														long BgL_offsetz00_1779;

														BgL_offsetz00_1779 =
															((long) (BgL_offsetz00_1778) - OBJECT_TYPE);
														{	/* Fail/walk.scm 141 */
															long BgL_modz00_1780;

															{	/* Fail/walk.scm 141 */
																int BgL_arg2645z00_1781;

																BgL_arg2645z00_1781 = (int) (((long) 16));
																{	/* Fail/walk.scm 141 */
																	long BgL_auxz00_3065;

																	BgL_auxz00_3065 =
																		(long) (BgL_arg2645z00_1781);
																	BgL_modz00_1780 =
																		(BgL_offsetz00_1779 / BgL_auxz00_3065);
															}}
															{	/* Fail/walk.scm 141 */
																long BgL_restz00_1782;

																{	/* Fail/walk.scm 141 */
																	int BgL_arg2644z00_1783;

																	BgL_arg2644z00_1783 = (int) (((long) 16));
																	{	/* Fail/walk.scm 141 */
																		long BgL_auxz00_3069;

																		BgL_auxz00_3069 =
																			(long) (BgL_arg2644z00_1783);
																		BgL_restz00_1782 =
																			(BgL_offsetz00_1779 % BgL_auxz00_3069);
																}}
																{	/* Fail/walk.scm 141 */

																	BgL_method3286z00_1772 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1777,
																			(int) (BgL_modz00_1780)),
																		(int) (BgL_restz00_1782));
									}}}}}}}}
									BgL_res3583z00_1797 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3286z00_1772)
										(BgL_method3286z00_1772, (obj_t) (BgL_arg3477z00_1352),
											BEOA));
								}
								BgL_arg3476z00_1351 = BgL_res3583z00_1797;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1347))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3476z00_1351), BUNSPEC);
					}
					{	/* Fail/walk.scm 142 */
						BgL_nodez00_bglt BgL_arg3478z00_1353;

						{	/* Fail/walk.scm 142 */
							BgL_nodez00_bglt BgL_arg3479z00_1354;

							BgL_arg3479z00_1354 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1347))->
								BgL_truez00);
							{	/* Fail/walk.scm 142 */
								BgL_nodez00_bglt BgL_res3586z00_1827;

								{	/* Fail/walk.scm 142 */
									obj_t BgL_method3286z00_1802;

									{	/* Fail/walk.scm 142 */
										BgL_objectz00_bglt BgL_objz00_1803;

										BgL_objz00_1803 =
											(BgL_objectz00_bglt) (BgL_arg3479z00_1354);
										{	/* Fail/walk.scm 142 */
											long BgL_objzd2classzd2numz00_1804;

											BgL_objzd2classzd2numz00_1804 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1803);
											{	/* Fail/walk.scm 142 */
												obj_t BgL_arg2643z00_1805;

												BgL_arg2643z00_1805 =
													PROCEDURE_REF
													(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
													(int) (((long) 1)));
												{	/* Fail/walk.scm 142 */
													obj_t BgL_arrayz00_1807;

													int BgL_offsetz00_1808;

													BgL_arrayz00_1807 = BgL_arg2643z00_1805;
													BgL_offsetz00_1808 =
														(int) (BgL_objzd2classzd2numz00_1804);
													{	/* Fail/walk.scm 142 */
														long BgL_offsetz00_1809;

														BgL_offsetz00_1809 =
															((long) (BgL_offsetz00_1808) - OBJECT_TYPE);
														{	/* Fail/walk.scm 142 */
															long BgL_modz00_1810;

															{	/* Fail/walk.scm 142 */
																int BgL_arg2645z00_1811;

																BgL_arg2645z00_1811 = (int) (((long) 16));
																{	/* Fail/walk.scm 142 */
																	long BgL_auxz00_3090;

																	BgL_auxz00_3090 =
																		(long) (BgL_arg2645z00_1811);
																	BgL_modz00_1810 =
																		(BgL_offsetz00_1809 / BgL_auxz00_3090);
															}}
															{	/* Fail/walk.scm 142 */
																long BgL_restz00_1812;

																{	/* Fail/walk.scm 142 */
																	int BgL_arg2644z00_1813;

																	BgL_arg2644z00_1813 = (int) (((long) 16));
																	{	/* Fail/walk.scm 142 */
																		long BgL_auxz00_3094;

																		BgL_auxz00_3094 =
																			(long) (BgL_arg2644z00_1813);
																		BgL_restz00_1812 =
																			(BgL_offsetz00_1809 % BgL_auxz00_3094);
																}}
																{	/* Fail/walk.scm 142 */

																	BgL_method3286z00_1802 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1807,
																			(int) (BgL_modz00_1810)),
																		(int) (BgL_restz00_1812));
									}}}}}}}}
									BgL_res3586z00_1827 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3286z00_1802)
										(BgL_method3286z00_1802, (obj_t) (BgL_arg3479z00_1354),
											BEOA));
								}
								BgL_arg3478z00_1353 = BgL_res3586z00_1827;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1347))->BgL_truez00) =
							((BgL_nodez00_bglt) BgL_arg3478z00_1353), BUNSPEC);
					}
					{	/* Fail/walk.scm 143 */
						BgL_nodez00_bglt BgL_arg3480z00_1355;

						{	/* Fail/walk.scm 143 */
							BgL_nodez00_bglt BgL_arg3482z00_1356;

							BgL_arg3482z00_1356 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1347))->
								BgL_falsez00);
							{	/* Fail/walk.scm 143 */
								BgL_nodez00_bglt BgL_res3589z00_1857;

								{	/* Fail/walk.scm 143 */
									obj_t BgL_method3286z00_1832;

									{	/* Fail/walk.scm 143 */
										BgL_objectz00_bglt BgL_objz00_1833;

										BgL_objz00_1833 =
											(BgL_objectz00_bglt) (BgL_arg3482z00_1356);
										{	/* Fail/walk.scm 143 */
											long BgL_objzd2classzd2numz00_1834;

											BgL_objzd2classzd2numz00_1834 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1833);
											{	/* Fail/walk.scm 143 */
												obj_t BgL_arg2643z00_1835;

												BgL_arg2643z00_1835 =
													PROCEDURE_REF
													(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
													(int) (((long) 1)));
												{	/* Fail/walk.scm 143 */
													obj_t BgL_arrayz00_1837;

													int BgL_offsetz00_1838;

													BgL_arrayz00_1837 = BgL_arg2643z00_1835;
													BgL_offsetz00_1838 =
														(int) (BgL_objzd2classzd2numz00_1834);
													{	/* Fail/walk.scm 143 */
														long BgL_offsetz00_1839;

														BgL_offsetz00_1839 =
															((long) (BgL_offsetz00_1838) - OBJECT_TYPE);
														{	/* Fail/walk.scm 143 */
															long BgL_modz00_1840;

															{	/* Fail/walk.scm 143 */
																int BgL_arg2645z00_1841;

																BgL_arg2645z00_1841 = (int) (((long) 16));
																{	/* Fail/walk.scm 143 */
																	long BgL_auxz00_3115;

																	BgL_auxz00_3115 =
																		(long) (BgL_arg2645z00_1841);
																	BgL_modz00_1840 =
																		(BgL_offsetz00_1839 / BgL_auxz00_3115);
															}}
															{	/* Fail/walk.scm 143 */
																long BgL_restz00_1842;

																{	/* Fail/walk.scm 143 */
																	int BgL_arg2644z00_1843;

																	BgL_arg2644z00_1843 = (int) (((long) 16));
																	{	/* Fail/walk.scm 143 */
																		long BgL_auxz00_3119;

																		BgL_auxz00_3119 =
																			(long) (BgL_arg2644z00_1843);
																		BgL_restz00_1842 =
																			(BgL_offsetz00_1839 % BgL_auxz00_3119);
																}}
																{	/* Fail/walk.scm 143 */

																	BgL_method3286z00_1832 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1837,
																			(int) (BgL_modz00_1840)),
																		(int) (BgL_restz00_1842));
									}}}}}}}}
									BgL_res3589z00_1857 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3286z00_1832)
										(BgL_method3286z00_1832, (obj_t) (BgL_arg3482z00_1356),
											BEOA));
								}
								BgL_arg3480z00_1355 = BgL_res3589z00_1857;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1347))->
								BgL_falsez00) =
							((BgL_nodez00_bglt) BgL_arg3480z00_1355), BUNSPEC);
					}
					BgL_auxz00_3055 = BgL_nodez00_1347;
					return (obj_t) (BgL_auxz00_3055);
				}
			}
		}
	}



/* fail-node!-setq3304 */
	obj_t BGl_failzd2nodez12zd2setq3304z12zzfail_walkz00(obj_t BgL_envz00_2359,
		obj_t BgL_nodez00_2360)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 132 */
			{
				BgL_setqz00_bglt BgL_nodez00_1340;

				{	/* Fail/walk.scm 133 */
					BgL_setqz00_bglt BgL_auxz00_3133;

					BgL_nodez00_1340 = (BgL_setqz00_bglt) (BgL_nodez00_2360);
					{	/* Fail/walk.scm 133 */
						BgL_nodez00_bglt BgL_arg3473z00_1343;

						{	/* Fail/walk.scm 133 */
							BgL_nodez00_bglt BgL_arg3474z00_1344;

							BgL_arg3474z00_1344 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1340))->BgL_valuez00);
							{	/* Fail/walk.scm 133 */
								BgL_nodez00_bglt BgL_res3580z00_1767;

								{	/* Fail/walk.scm 133 */
									obj_t BgL_method3286z00_1742;

									{	/* Fail/walk.scm 133 */
										BgL_objectz00_bglt BgL_objz00_1743;

										BgL_objz00_1743 =
											(BgL_objectz00_bglt) (BgL_arg3474z00_1344);
										{	/* Fail/walk.scm 133 */
											long BgL_objzd2classzd2numz00_1744;

											BgL_objzd2classzd2numz00_1744 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1743);
											{	/* Fail/walk.scm 133 */
												obj_t BgL_arg2643z00_1745;

												BgL_arg2643z00_1745 =
													PROCEDURE_REF
													(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
													(int) (((long) 1)));
												{	/* Fail/walk.scm 133 */
													obj_t BgL_arrayz00_1747;

													int BgL_offsetz00_1748;

													BgL_arrayz00_1747 = BgL_arg2643z00_1745;
													BgL_offsetz00_1748 =
														(int) (BgL_objzd2classzd2numz00_1744);
													{	/* Fail/walk.scm 133 */
														long BgL_offsetz00_1749;

														BgL_offsetz00_1749 =
															((long) (BgL_offsetz00_1748) - OBJECT_TYPE);
														{	/* Fail/walk.scm 133 */
															long BgL_modz00_1750;

															{	/* Fail/walk.scm 133 */
																int BgL_arg2645z00_1751;

																BgL_arg2645z00_1751 = (int) (((long) 16));
																{	/* Fail/walk.scm 133 */
																	long BgL_auxz00_3143;

																	BgL_auxz00_3143 =
																		(long) (BgL_arg2645z00_1751);
																	BgL_modz00_1750 =
																		(BgL_offsetz00_1749 / BgL_auxz00_3143);
															}}
															{	/* Fail/walk.scm 133 */
																long BgL_restz00_1752;

																{	/* Fail/walk.scm 133 */
																	int BgL_arg2644z00_1753;

																	BgL_arg2644z00_1753 = (int) (((long) 16));
																	{	/* Fail/walk.scm 133 */
																		long BgL_auxz00_3147;

																		BgL_auxz00_3147 =
																			(long) (BgL_arg2644z00_1753);
																		BgL_restz00_1752 =
																			(BgL_offsetz00_1749 % BgL_auxz00_3147);
																}}
																{	/* Fail/walk.scm 133 */

																	BgL_method3286z00_1742 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1747,
																			(int) (BgL_modz00_1750)),
																		(int) (BgL_restz00_1752));
									}}}}}}}}
									BgL_res3580z00_1767 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3286z00_1742)
										(BgL_method3286z00_1742, (obj_t) (BgL_arg3474z00_1344),
											BEOA));
								}
								BgL_arg3473z00_1343 = BgL_res3580z00_1767;
						}}
						((((BgL_setqz00_bglt) CREF(BgL_nodez00_1340))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3473z00_1343), BUNSPEC);
					}
					BgL_auxz00_3133 = BgL_nodez00_1340;
					return (obj_t) (BgL_auxz00_3133);
				}
			}
		}
	}



/* fail-node!-extern3302 */
	obj_t BGl_failzd2nodez12zd2extern3302z12zzfail_walkz00(obj_t BgL_envz00_2361,
		obj_t BgL_nodez00_2362)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 125 */
			{
				BgL_externz00_bglt BgL_nodez00_1334;

				{	/* Fail/walk.scm 126 */
					BgL_externz00_bglt BgL_auxz00_3161;

					BgL_nodez00_1334 = (BgL_externz00_bglt) (BgL_nodez00_2362);
					{	/* Fail/walk.scm 126 */
						obj_t BgL_arg3471z00_1738;

						BgL_arg3471z00_1738 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1334))->BgL_exprza2za2);
						BGl_failzd2nodeza2z12z62zzfail_walkz00(BgL_arg3471z00_1738);
					}
					BgL_auxz00_3161 = BgL_nodez00_1334;
					return (obj_t) (BgL_auxz00_3161);
				}
			}
		}
	}



/* fail-node!-funcall3300 */
	obj_t BGl_failzd2nodez12zd2funcall3300z12zzfail_walkz00(obj_t BgL_envz00_2363,
		obj_t BgL_nodez00_2364)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 116 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1325;

				{	/* Fail/walk.scm 117 */
					BgL_funcallz00_bglt BgL_auxz00_3166;

					BgL_nodez00_1325 = (BgL_funcallz00_bglt) (BgL_nodez00_2364);
					{	/* Fail/walk.scm 118 */
						BgL_nodez00_bglt BgL_arg3467z00_1329;

						{	/* Fail/walk.scm 118 */
							BgL_nodez00_bglt BgL_arg3468z00_1330;

							BgL_arg3468z00_1330 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1325))->BgL_funz00);
							{	/* Fail/walk.scm 118 */
								BgL_nodez00_bglt BgL_res3577z00_1734;

								{	/* Fail/walk.scm 118 */
									obj_t BgL_method3286z00_1709;

									{	/* Fail/walk.scm 118 */
										BgL_objectz00_bglt BgL_objz00_1710;

										BgL_objz00_1710 =
											(BgL_objectz00_bglt) (BgL_arg3468z00_1330);
										{	/* Fail/walk.scm 118 */
											long BgL_objzd2classzd2numz00_1711;

											BgL_objzd2classzd2numz00_1711 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1710);
											{	/* Fail/walk.scm 118 */
												obj_t BgL_arg2643z00_1712;

												BgL_arg2643z00_1712 =
													PROCEDURE_REF
													(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
													(int) (((long) 1)));
												{	/* Fail/walk.scm 118 */
													obj_t BgL_arrayz00_1714;

													int BgL_offsetz00_1715;

													BgL_arrayz00_1714 = BgL_arg2643z00_1712;
													BgL_offsetz00_1715 =
														(int) (BgL_objzd2classzd2numz00_1711);
													{	/* Fail/walk.scm 118 */
														long BgL_offsetz00_1716;

														BgL_offsetz00_1716 =
															((long) (BgL_offsetz00_1715) - OBJECT_TYPE);
														{	/* Fail/walk.scm 118 */
															long BgL_modz00_1717;

															{	/* Fail/walk.scm 118 */
																int BgL_arg2645z00_1718;

																BgL_arg2645z00_1718 = (int) (((long) 16));
																{	/* Fail/walk.scm 118 */
																	long BgL_auxz00_3176;

																	BgL_auxz00_3176 =
																		(long) (BgL_arg2645z00_1718);
																	BgL_modz00_1717 =
																		(BgL_offsetz00_1716 / BgL_auxz00_3176);
															}}
															{	/* Fail/walk.scm 118 */
																long BgL_restz00_1719;

																{	/* Fail/walk.scm 118 */
																	int BgL_arg2644z00_1720;

																	BgL_arg2644z00_1720 = (int) (((long) 16));
																	{	/* Fail/walk.scm 118 */
																		long BgL_auxz00_3180;

																		BgL_auxz00_3180 =
																			(long) (BgL_arg2644z00_1720);
																		BgL_restz00_1719 =
																			(BgL_offsetz00_1716 % BgL_auxz00_3180);
																}}
																{	/* Fail/walk.scm 118 */

																	BgL_method3286z00_1709 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1714,
																			(int) (BgL_modz00_1717)),
																		(int) (BgL_restz00_1719));
									}}}}}}}}
									BgL_res3577z00_1734 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3286z00_1709)
										(BgL_method3286z00_1709, (obj_t) (BgL_arg3468z00_1330),
											BEOA));
								}
								BgL_arg3467z00_1329 = BgL_res3577z00_1734;
						}}
						((((BgL_funcallz00_bglt) CREF(BgL_nodez00_1325))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3467z00_1329), BUNSPEC);
					}
					{	/* Fail/walk.scm 119 */
						obj_t BgL_arg3469z00_1331;

						BgL_arg3469z00_1331 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1325))->BgL_argsz00);
						BGl_failzd2nodeza2z12z62zzfail_walkz00(BgL_arg3469z00_1331);
					}
					BgL_auxz00_3166 = BgL_nodez00_1325;
					return (obj_t) (BgL_auxz00_3166);
				}
			}
		}
	}



/* fail-node!-app-ly3298 */
	obj_t BGl_failzd2nodez12zd2appzd2ly3298zc0zzfail_walkz00(obj_t
		BgL_envz00_2365, obj_t BgL_nodez00_2366)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 107 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1315;

				{	/* Fail/walk.scm 108 */
					BgL_appzd2lyzd2_bglt BgL_auxz00_3196;

					BgL_nodez00_1315 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2366);
					{	/* Fail/walk.scm 109 */
						BgL_nodez00_bglt BgL_arg3462z00_1319;

						{	/* Fail/walk.scm 109 */
							BgL_nodez00_bglt BgL_arg3463z00_1320;

							BgL_arg3463z00_1320 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1315))->BgL_funz00);
							{	/* Fail/walk.scm 109 */
								BgL_nodez00_bglt BgL_res3571z00_1674;

								{	/* Fail/walk.scm 109 */
									obj_t BgL_method3286z00_1649;

									{	/* Fail/walk.scm 109 */
										BgL_objectz00_bglt BgL_objz00_1650;

										BgL_objz00_1650 =
											(BgL_objectz00_bglt) (BgL_arg3463z00_1320);
										{	/* Fail/walk.scm 109 */
											long BgL_objzd2classzd2numz00_1651;

											BgL_objzd2classzd2numz00_1651 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1650);
											{	/* Fail/walk.scm 109 */
												obj_t BgL_arg2643z00_1652;

												BgL_arg2643z00_1652 =
													PROCEDURE_REF
													(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
													(int) (((long) 1)));
												{	/* Fail/walk.scm 109 */
													obj_t BgL_arrayz00_1654;

													int BgL_offsetz00_1655;

													BgL_arrayz00_1654 = BgL_arg2643z00_1652;
													BgL_offsetz00_1655 =
														(int) (BgL_objzd2classzd2numz00_1651);
													{	/* Fail/walk.scm 109 */
														long BgL_offsetz00_1656;

														BgL_offsetz00_1656 =
															((long) (BgL_offsetz00_1655) - OBJECT_TYPE);
														{	/* Fail/walk.scm 109 */
															long BgL_modz00_1657;

															{	/* Fail/walk.scm 109 */
																int BgL_arg2645z00_1658;

																BgL_arg2645z00_1658 = (int) (((long) 16));
																{	/* Fail/walk.scm 109 */
																	long BgL_auxz00_3206;

																	BgL_auxz00_3206 =
																		(long) (BgL_arg2645z00_1658);
																	BgL_modz00_1657 =
																		(BgL_offsetz00_1656 / BgL_auxz00_3206);
															}}
															{	/* Fail/walk.scm 109 */
																long BgL_restz00_1659;

																{	/* Fail/walk.scm 109 */
																	int BgL_arg2644z00_1660;

																	BgL_arg2644z00_1660 = (int) (((long) 16));
																	{	/* Fail/walk.scm 109 */
																		long BgL_auxz00_3210;

																		BgL_auxz00_3210 =
																			(long) (BgL_arg2644z00_1660);
																		BgL_restz00_1659 =
																			(BgL_offsetz00_1656 % BgL_auxz00_3210);
																}}
																{	/* Fail/walk.scm 109 */

																	BgL_method3286z00_1649 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1654,
																			(int) (BgL_modz00_1657)),
																		(int) (BgL_restz00_1659));
									}}}}}}}}
									BgL_res3571z00_1674 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3286z00_1649)
										(BgL_method3286z00_1649, (obj_t) (BgL_arg3463z00_1320),
											BEOA));
								}
								BgL_arg3462z00_1319 = BgL_res3571z00_1674;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1315))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3462z00_1319), BUNSPEC);
					}
					{	/* Fail/walk.scm 110 */
						BgL_nodez00_bglt BgL_arg3464z00_1321;

						{	/* Fail/walk.scm 110 */
							BgL_nodez00_bglt BgL_arg3465z00_1322;

							BgL_arg3465z00_1322 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1315))->BgL_argz00);
							{	/* Fail/walk.scm 110 */
								BgL_nodez00_bglt BgL_res3574z00_1704;

								{	/* Fail/walk.scm 110 */
									obj_t BgL_method3286z00_1679;

									{	/* Fail/walk.scm 110 */
										BgL_objectz00_bglt BgL_objz00_1680;

										BgL_objz00_1680 =
											(BgL_objectz00_bglt) (BgL_arg3465z00_1322);
										{	/* Fail/walk.scm 110 */
											long BgL_objzd2classzd2numz00_1681;

											BgL_objzd2classzd2numz00_1681 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1680);
											{	/* Fail/walk.scm 110 */
												obj_t BgL_arg2643z00_1682;

												BgL_arg2643z00_1682 =
													PROCEDURE_REF
													(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
													(int) (((long) 1)));
												{	/* Fail/walk.scm 110 */
													obj_t BgL_arrayz00_1684;

													int BgL_offsetz00_1685;

													BgL_arrayz00_1684 = BgL_arg2643z00_1682;
													BgL_offsetz00_1685 =
														(int) (BgL_objzd2classzd2numz00_1681);
													{	/* Fail/walk.scm 110 */
														long BgL_offsetz00_1686;

														BgL_offsetz00_1686 =
															((long) (BgL_offsetz00_1685) - OBJECT_TYPE);
														{	/* Fail/walk.scm 110 */
															long BgL_modz00_1687;

															{	/* Fail/walk.scm 110 */
																int BgL_arg2645z00_1688;

																BgL_arg2645z00_1688 = (int) (((long) 16));
																{	/* Fail/walk.scm 110 */
																	long BgL_auxz00_3231;

																	BgL_auxz00_3231 =
																		(long) (BgL_arg2645z00_1688);
																	BgL_modz00_1687 =
																		(BgL_offsetz00_1686 / BgL_auxz00_3231);
															}}
															{	/* Fail/walk.scm 110 */
																long BgL_restz00_1689;

																{	/* Fail/walk.scm 110 */
																	int BgL_arg2644z00_1690;

																	BgL_arg2644z00_1690 = (int) (((long) 16));
																	{	/* Fail/walk.scm 110 */
																		long BgL_auxz00_3235;

																		BgL_auxz00_3235 =
																			(long) (BgL_arg2644z00_1690);
																		BgL_restz00_1689 =
																			(BgL_offsetz00_1686 % BgL_auxz00_3235);
																}}
																{	/* Fail/walk.scm 110 */

																	BgL_method3286z00_1679 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1684,
																			(int) (BgL_modz00_1687)),
																		(int) (BgL_restz00_1689));
									}}}}}}}}
									BgL_res3574z00_1704 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3286z00_1679)
										(BgL_method3286z00_1679, (obj_t) (BgL_arg3465z00_1322),
											BEOA));
								}
								BgL_arg3464z00_1321 = BgL_res3574z00_1704;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1315))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg3464z00_1321), BUNSPEC);
					}
					BgL_auxz00_3196 = BgL_nodez00_1315;
					return (obj_t) (BgL_auxz00_3196);
				}
			}
		}
	}



/* fail-node!-app3296 */
	obj_t BGl_failzd2nodez12zd2app3296z12zzfail_walkz00(obj_t BgL_envz00_2367,
		obj_t BgL_nodez00_2368)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 89 */
			{
				BgL_appz00_bglt BgL_nodez00_1281;

				BgL_nodez00_1281 = (BgL_appz00_bglt) (BgL_nodez00_2368);
				{	/* Fail/walk.scm 91 */
					obj_t BgL_arg3432z00_1285;

					BgL_arg3432z00_1285 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_1281))->BgL_argsz00);
					BGl_failzd2nodeza2z12z62zzfail_walkz00(BgL_arg3432z00_1285);
				}
				{	/* Fail/walk.scm 92 */
					bool_t BgL_testz00_3251;

					{	/* Fail/walk.scm 92 */
						bool_t BgL_testz00_3252;

						{	/* Fail/walk.scm 92 */
							obj_t BgL_oz00_1618;

							{
								BgL_nodez00_bglt BgL_auxz00_3253;

								BgL_auxz00_3253 = (BgL_nodez00_bglt) (BgL_nodez00_1281);
								BgL_oz00_1618 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_3253))->BgL_locz00);
							}
							if (STRUCTP(BgL_oz00_1618))
								{	/* Fail/walk.scm 92 */
									BgL_testz00_3252 =
										(STRUCT_KEY(BgL_oz00_1618) == CNST_TABLE_REF(((long) 6)));
								}
							else
								{	/* Fail/walk.scm 92 */
									BgL_testz00_3252 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_3252)
							{	/* Fail/walk.scm 93 */
								BgL_variablez00_bglt BgL_arg3458z00_1310;

								{	/* Fail/walk.scm 93 */
									BgL_varz00_bglt BgL_obj2155z00_1626;

									BgL_obj2155z00_1626 =
										(((BgL_appz00_bglt) CREF(BgL_nodez00_1281))->BgL_funz00);
									BgL_arg3458z00_1310 =
										(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1626))->
										BgL_variablez00);
								}
								BgL_testz00_3251 =
									(
									(obj_t) (BgL_arg3458z00_1310) ==
									BGl_za2errorza2z00zzfail_walkz00);
							}
						else
							{	/* Fail/walk.scm 92 */
								BgL_testz00_3251 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_3251)
						{	/* Fail/walk.scm 94 */
							obj_t BgL_arg3434z00_1287;

							obj_t BgL_arg3436z00_1289;

							obj_t BgL_arg3437z00_1290;

							{	/* Fail/walk.scm 94 */
								obj_t BgL_arg3438z00_1291;

								obj_t BgL_arg3439z00_1292;

								BgL_arg3438z00_1291 = CNST_TABLE_REF(((long) 7));
								{	/* Fail/walk.scm 94 */
									obj_t BgL_arg3440z00_1293;

									obj_t BgL_arg3441z00_1294;

									obj_t BgL_arg3443z00_1295;

									obj_t BgL_arg3444z00_1296;

									obj_t BgL_arg3445z00_1297;

									{	/* Fail/walk.scm 94 */
										obj_t BgL_pairz00_1628;

										BgL_pairz00_1628 =
											(((BgL_appz00_bglt) CREF(BgL_nodez00_1281))->BgL_argsz00);
										BgL_arg3440z00_1293 = CAR(BgL_pairz00_1628);
									}
									{	/* Fail/walk.scm 95 */
										obj_t BgL_pairz00_1630;

										BgL_pairz00_1630 =
											(((BgL_appz00_bglt) CREF(BgL_nodez00_1281))->BgL_argsz00);
										BgL_arg3441z00_1294 = CAR(CDR(BgL_pairz00_1630));
									}
									{	/* Fail/walk.scm 96 */
										obj_t BgL_pairz00_1635;

										BgL_pairz00_1635 =
											(((BgL_appz00_bglt) CREF(BgL_nodez00_1281))->BgL_argsz00);
										BgL_arg3443z00_1295 = CAR(CDR(CDR(BgL_pairz00_1635)));
									}
									{	/* Fail/walk.scm 97 */
										obj_t BgL_arg3455z00_1307;

										{
											BgL_nodez00_bglt BgL_auxz00_3275;

											BgL_auxz00_3275 = (BgL_nodez00_bglt) (BgL_nodez00_1281);
											BgL_arg3455z00_1307 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_3275))->
												BgL_locz00);
										}
										BgL_arg3444z00_1296 =
											BGl_locationzd2fullzd2fnamez00zztools_locationz00
											(BgL_arg3455z00_1307);
									}
									{	/* Fail/walk.scm 98 */
										obj_t BgL_sz00_1644;

										{
											BgL_nodez00_bglt BgL_auxz00_3279;

											BgL_auxz00_3279 = (BgL_nodez00_bglt) (BgL_nodez00_1281);
											BgL_sz00_1644 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_3279))->
												BgL_locz00);
										}
										BgL_arg3445z00_1297 =
											STRUCT_REF(BgL_sz00_1644, (int) (((long) 1)));
									}
									{	/* Fail/walk.scm 94 */
										obj_t BgL_list3447z00_1299;

										{	/* Fail/walk.scm 94 */
											obj_t BgL_arg3448z00_1300;

											{	/* Fail/walk.scm 94 */
												obj_t BgL_arg3449z00_1301;

												{	/* Fail/walk.scm 94 */
													obj_t BgL_arg3450z00_1302;

													{	/* Fail/walk.scm 94 */
														obj_t BgL_arg3451z00_1303;

														BgL_arg3451z00_1303 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3450z00_1302 =
															MAKE_PAIR(BgL_arg3445z00_1297,
															BgL_arg3451z00_1303);
													}
													BgL_arg3449z00_1301 =
														MAKE_PAIR(BgL_arg3444z00_1296, BgL_arg3450z00_1302);
												}
												BgL_arg3448z00_1300 =
													MAKE_PAIR(BgL_arg3443z00_1295, BgL_arg3449z00_1301);
											}
											BgL_list3447z00_1299 =
												MAKE_PAIR(BgL_arg3441z00_1294, BgL_arg3448z00_1300);
										}
										BgL_arg3439z00_1292 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3440z00_1293, BgL_list3447z00_1299);
								}}
								BgL_arg3434z00_1287 =
									MAKE_PAIR(BgL_arg3438z00_1291, BgL_arg3439z00_1292);
							}
							{
								BgL_nodez00_bglt BgL_auxz00_3291;

								BgL_auxz00_3291 = (BgL_nodez00_bglt) (BgL_nodez00_1281);
								BgL_arg3436z00_1289 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_3291))->BgL_locz00);
							}
							BgL_arg3437z00_1290 = CNST_TABLE_REF(((long) 8));
							return
								(obj_t) (BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg3434z00_1287,
									BNIL, BgL_arg3436z00_1289, BgL_arg3437z00_1290));
						}
					else
						{	/* Fail/walk.scm 92 */
							return (obj_t) (BgL_nodez00_1281);
						}
				}
			}
		}
	}



/* fail-node!-sequence3294 */
	obj_t BGl_failzd2nodez12zd2sequence3294z12zzfail_walkz00(obj_t
		BgL_envz00_2369, obj_t BgL_nodez00_2370)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 82 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1275;

				{	/* Fail/walk.scm 83 */
					BgL_sequencez00_bglt BgL_auxz00_3299;

					BgL_nodez00_1275 = (BgL_sequencez00_bglt) (BgL_nodez00_2370);
					{	/* Fail/walk.scm 83 */
						obj_t BgL_arg3430z00_1614;

						BgL_arg3430z00_1614 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1275))->BgL_nodesz00);
						BGl_failzd2nodeza2z12z62zzfail_walkz00(BgL_arg3430z00_1614);
					}
					BgL_auxz00_3299 = BgL_nodez00_1275;
					return (obj_t) (BgL_auxz00_3299);
				}
			}
		}
	}



/* fail-node!-var3292 */
	obj_t BGl_failzd2nodez12zd2var3292z12zzfail_walkz00(obj_t BgL_envz00_2371,
		obj_t BgL_nodez00_2372)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 76 */
			return (obj_t) ((BgL_varz00_bglt) (BgL_nodez00_2372));
		}
	}



/* fail-node!-kwote3290 */
	obj_t BGl_failzd2nodez12zd2kwote3290z12zzfail_walkz00(obj_t BgL_envz00_2373,
		obj_t BgL_nodez00_2374)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 70 */
			return (obj_t) ((BgL_kwotez00_bglt) (BgL_nodez00_2374));
		}
	}



/* fail-node!-atom3288 */
	obj_t BGl_failzd2nodez12zd2atom3288z12zzfail_walkz00(obj_t BgL_envz00_2375,
		obj_t BgL_nodez00_2376)
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 64 */
			return (obj_t) ((BgL_atomz00_bglt) (BgL_nodez00_2376));
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzfail_walkz00()
	{
		AN_OBJECT;
		{	/* Fail/walk.scm 18 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3664z00zzfail_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3664z00zzfail_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string3664z00zzfail_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3664z00zzfail_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3664z00zzfail_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3664z00zzfail_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3664z00zzfail_walkz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3664z00zzfail_walkz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3664z00zzfail_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3664z00zzfail_walkz00));
		}
	}

#ifdef __cplusplus
}
#endif
