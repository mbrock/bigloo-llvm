/*===========================================================================*/
/*   (Beta/walk.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Beta/walk.scm)*/
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


	static obj_t BGl__nodezd2betaz12zd2default3272z12zzbeta_walkz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_nodezd2betaz12zd2setzd2exzd2it3305z12zzbeta_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2betaza2z12z62zzbeta_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_nodezd2betaz12zd2cast3285z12zzbeta_walkz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_nodezd2betaz12zd2extern3283z12zzbeta_walkz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_nodezd2betaz12zd2appzd2ly3279zc0zzbeta_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd2betaz12zd2funcall3281z12zzbeta_walkz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_mapz12z12zz__r4_control_features_6_9z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzbeta_walkz00();
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_nodezd2betaz12zd2setq3287z12zzbeta_walkz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t BGl__nodezd2betaz12zc0zzbeta_walkz00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzbeta_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
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
	static obj_t BGl_toplevelzd2initzd2zzbeta_walkz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static obj_t BGl_nodezd2betaz12zd2boxzd2ref3297zc0zzbeta_walkz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_nodezd2betaz12zd2select3293z12zzbeta_walkz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_nodezd2betaz12zd2app3277z12zzbeta_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd2betaz12zd2fail3291z12zzbeta_walkz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_betazd2walkz12zc0zzbeta_walkz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzbeta_walkz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbeta_walkz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzbeta_walkz00();
	static obj_t BGl_nodezd2betaz12zd2letzd2fun3301zc0zzbeta_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd2betaz12zd2jumpzd2exzd2i3307z12zzbeta_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33349ze3z83zzbeta_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_nodezd2betaz12zd2sequence3275z12zzbeta_walkz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_nodezd2betaz12zd2letzd2var3303zc0zzbeta_walkz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzbeta_walkz00();
	static obj_t BGl_nodezd2betaz12zd2boxzd2setz123299zd2zzbeta_walkz00(obj_t,
		obj_t, obj_t);
	static bool_t BGl_betazd2globalsz12zc0zzbeta_walkz00(obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_nodezd2betaz12zd2condition3289z12zzbeta_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__betazd2walkz12zc0zzbeta_walkz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33404ze3z83zzbeta_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_nodezd2betaz12zc0zzbeta_walkz00(BgL_nodez00_bglt,
		obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_nodezd2betaz12zd2makezd2box3295zc0zzbeta_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzbeta_walkz00();
	static obj_t __cnst[3];


	   
		 
		DEFINE_STATIC_BGL_GENERIC(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
		BgL_bgl__nodeza7d2betaza712za73616za7, BGl__nodezd2betaz12zc0zzbeta_walkz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_betazd2walkz12zd2envz12zzbeta_walkz00,
		BgL_bgl__betaza7d2walkza712za73617za7, BGl__betazd2walkz12zc0zzbeta_walkz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nodezd2betaz12zd2default3272zd2envzc0zzbeta_walkz00,
		BgL_bgl__nodeza7d2betaza712za73618za7,
		BGl__nodezd2betaz12zd2default3272z12zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3600z00zzbeta_walkz00,
		BgL_bgl_nodeza7d2betaza712za7d3619za7,
		BGl_nodezd2betaz12zd2cast3285z12zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3601z00zzbeta_walkz00,
		BgL_bgl_nodeza7d2betaza712za7d3620za7,
		BGl_nodezd2betaz12zd2setq3287z12zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3602z00zzbeta_walkz00,
		BgL_bgl_nodeza7d2betaza712za7d3621za7,
		BGl_nodezd2betaz12zd2condition3289z12zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3603z00zzbeta_walkz00,
		BgL_bgl_nodeza7d2betaza712za7d3622za7,
		BGl_nodezd2betaz12zd2fail3291z12zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3604z00zzbeta_walkz00,
		BgL_bgl_nodeza7d2betaza712za7d3623za7,
		BGl_nodezd2betaz12zd2select3293z12zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3605z00zzbeta_walkz00,
		BgL_bgl_nodeza7d2betaza712za7d3624za7,
		BGl_nodezd2betaz12zd2makezd2box3295zc0zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3595z00zzbeta_walkz00,
		BgL_bgl_nodeza7d2betaza712za7d3625za7,
		BGl_nodezd2betaz12zd2sequence3275z12zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3606z00zzbeta_walkz00,
		BgL_bgl_nodeza7d2betaza712za7d3626za7,
		BGl_nodezd2betaz12zd2boxzd2ref3297zc0zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3596z00zzbeta_walkz00,
		BgL_bgl_nodeza7d2betaza712za7d3627za7,
		BGl_nodezd2betaz12zd2app3277z12zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3607z00zzbeta_walkz00,
		BgL_bgl_nodeza7d2betaza712za7d3628za7,
		BGl_nodezd2betaz12zd2boxzd2setz123299zd2zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3597z00zzbeta_walkz00,
		BgL_bgl_nodeza7d2betaza712za7d3629za7,
		BGl_nodezd2betaz12zd2appzd2ly3279zc0zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3608z00zzbeta_walkz00,
		BgL_bgl_nodeza7d2betaza712za7d3630za7,
		BGl_nodezd2betaz12zd2letzd2fun3301zc0zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3598z00zzbeta_walkz00,
		BgL_bgl_nodeza7d2betaza712za7d3631za7,
		BGl_nodezd2betaz12zd2funcall3281z12zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3610z00zzbeta_walkz00,
		BgL_bgl_nodeza7d2betaza712za7d3632za7,
		BGl_nodezd2betaz12zd2setzd2exzd2it3305z12zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3609z00zzbeta_walkz00,
		BgL_bgl_nodeza7d2betaza712za7d3633za7,
		BGl_nodezd2betaz12zd2letzd2var3303zc0zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3599z00zzbeta_walkz00,
		BgL_bgl_nodeza7d2betaza712za7d3634za7,
		BGl_nodezd2betaz12zd2extern3283z12zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3611z00zzbeta_walkz00,
		BgL_bgl_nodeza7d2betaza712za7d3635za7,
		BGl_nodezd2betaz12zd2jumpzd2exzd2i3307z12zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3586z00zzbeta_walkz00,
		BgL_bgl_string3586za700za7za7b3636za7, "Constant Beta", 13);
	      DEFINE_STRING(BGl_string3587z00zzbeta_walkz00,
		BgL_bgl_string3587za700za7za7b3637za7, "   . ", 5);
	      DEFINE_STRING(BGl_string3588z00zzbeta_walkz00,
		BgL_bgl_string3588za700za7za7b3638za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string3590z00zzbeta_walkz00,
		BgL_bgl_string3590za700za7za7b3639za7, "s", 1);
	      DEFINE_STRING(BGl_string3589z00zzbeta_walkz00,
		BgL_bgl_string3589za700za7za7b3640za7, " error", 6);
	      DEFINE_STRING(BGl_string3591z00zzbeta_walkz00,
		BgL_bgl_string3591za700za7za7b3641za7, "", 0);
	      DEFINE_STRING(BGl_string3592z00zzbeta_walkz00,
		BgL_bgl_string3592za700za7za7b3642za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string3593z00zzbeta_walkz00,
		BgL_bgl_string3593za700za7za7b3643za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string3594z00zzbeta_walkz00,
		BgL_bgl_string3594za700za7za7b3644za7, "node-beta!", 10);
	      DEFINE_STRING(BGl_string3612z00zzbeta_walkz00,
		BgL_bgl_string3612za700za7za7b3645za7, "beta_walk", 9);
	      DEFINE_STRING(BGl_string3613z00zzbeta_walkz00,
		BgL_bgl_string3613za700za7za7b3646za7, "read beta pass-started ", 23);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbeta_walkz00(long
		BgL_checksumz00_2511, char *BgL_fromz00_2512)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbeta_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzbeta_walkz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbeta_walkz00();
					BGl_cnstzd2initzd2zzbeta_walkz00();
					BGl_importedzd2moduleszd2initz00zzbeta_walkz00();
					BGl_genericzd2initzd2zzbeta_walkz00();
					BGl_methodzd2initzd2zzbeta_walkz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbeta_walkz00()
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 18 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "beta_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"beta_walk");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"beta_walk");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "beta_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"beta_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "beta_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"beta_walk");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"beta_walk");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbeta_walkz00()
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 18 */
			{	/* Beta/walk.scm 18 */
				obj_t BgL_cportz00_2501;

				BgL_cportz00_2501 =
					bgl_open_input_string(BGl_string3613z00zzbeta_walkz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2502;

					BgL_iz00_2502 = ((long) 2);
				BgL_loopz00_2503:
					if ((BgL_iz00_2502 == ((long) -1)))
						{	/* Beta/walk.scm 18 */
							return BUNSPEC;
						}
					else
						{	/* Beta/walk.scm 18 */
							{	/* Beta/walk.scm 18 */
								obj_t BgL_arg3615z00_2505;

								{	/* Beta/walk.scm 18 */

									{	/* Beta/walk.scm 18 */
										obj_t BgL_locationz00_2507;

										BgL_locationz00_2507 = BBOOL(((bool_t) 0));
										{	/* Beta/walk.scm 18 */

											BgL_arg3615z00_2505 =
												BGl_readz00zz__readerz00(BgL_cportz00_2501,
												BgL_locationz00_2507);
										}
									}
								}
								{	/* Beta/walk.scm 18 */
									int BgL_auxz00_2535;

									BgL_auxz00_2535 = (int) (BgL_iz00_2502);
									CNST_TABLE_SET(BgL_auxz00_2535, BgL_arg3615z00_2505);
							}}
							{	/* Beta/walk.scm 18 */
								int BgL_auxz00_2508;

								BgL_auxz00_2508 = (int) ((BgL_iz00_2502 - ((long) 1)));
								{
									long BgL_iz00_2540;

									BgL_iz00_2540 = (long) (BgL_auxz00_2508);
									BgL_iz00_2502 = BgL_iz00_2540;
									goto BgL_loopz00_2503;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbeta_walkz00()
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 18 */
			return BUNSPEC;
		}
	}



/* beta-walk! */
	BGL_EXPORTED_DEF obj_t BGl_betazd2walkz12zc0zzbeta_walkz00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 34 */
			{	/* Beta/walk.scm 35 */
				obj_t BgL_list3308z00_815;

				{	/* Beta/walk.scm 35 */
					obj_t BgL_arg3310z00_817;

					{	/* Beta/walk.scm 35 */
						obj_t BgL_arg3312z00_819;

						BgL_arg3312z00_819 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg3310z00_817 =
							MAKE_PAIR(BGl_string3586z00zzbeta_walkz00, BgL_arg3312z00_819);
					}
					BgL_list3308z00_815 =
						MAKE_PAIR(BGl_string3587z00zzbeta_walkz00, BgL_arg3310z00_817);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list3308z00_815);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string3586z00zzbeta_walkz00;
			{
				obj_t BgL_hooksz00_823;

				obj_t BgL_hnamesz00_824;

				BgL_hooksz00_823 = BNIL;
				BgL_hnamesz00_824 = BNIL;
			BgL_zc3anonymousza33313ze3z83_825:
				if (NULLP(BgL_hooksz00_823))
					{	/* Beta/walk.scm 35 */
						CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Beta/walk.scm 35 */
						bool_t BgL_testz00_2552;

						{	/* Beta/walk.scm 35 */
							obj_t BgL_fun3322z00_833;

							BgL_fun3322z00_833 = CAR(BgL_hooksz00_823);
							BgL_testz00_2552 =
								CBOOL(PROCEDURE_ENTRY(BgL_fun3322z00_833) (BgL_fun3322z00_833,
									BEOA));
						}
						if (BgL_testz00_2552)
							{
								obj_t BgL_hnamesz00_2559;

								obj_t BgL_hooksz00_2557;

								BgL_hooksz00_2557 = CDR(BgL_hooksz00_823);
								BgL_hnamesz00_2559 = CDR(BgL_hnamesz00_824);
								BgL_hnamesz00_824 = BgL_hnamesz00_2559;
								BgL_hooksz00_823 = BgL_hooksz00_2557;
								goto BgL_zc3anonymousza33313ze3z83_825;
							}
						else
							{	/* Beta/walk.scm 35 */
								BGl_internalzd2errorzd2zztools_errorz00
									(BGl_string3586z00zzbeta_walkz00,
									BGl_string3588z00zzbeta_walkz00, CAR(BgL_hnamesz00_824));
							}
					}
			}
			BGl_betazd2globalsz12zc0zzbeta_walkz00(BgL_globalsz00_1);
			{	/* Beta/walk.scm 37 */
				obj_t BgL_valuez00_836;

				BgL_valuez00_836 =
					BGl_removezd2varzd2zzast_removez00(CNST_TABLE_REF(((long) 1)),
					BgL_globalsz00_1);
				if (((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
						((long) 0)))
					{	/* Beta/walk.scm 37 */
						{	/* Beta/walk.scm 37 */
							obj_t BgL_port3263z00_838;

							{	/* Beta/walk.scm 37 */
								obj_t BgL_res3498z00_1470;

								{	/* Beta/walk.scm 37 */
									obj_t BgL_auxz00_2569;

									BgL_auxz00_2569 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3498z00_1470 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_2569);
								}
								BgL_port3263z00_838 = BgL_res3498z00_1470;
							}
							bgl_display_obj
								(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
								BgL_port3263z00_838);
							bgl_display_string(BGl_string3589z00zzbeta_walkz00,
								BgL_port3263z00_838);
							{	/* Beta/walk.scm 37 */
								obj_t BgL_arg3325z00_839;

								{	/* Beta/walk.scm 37 */
									bool_t BgL_testz00_2574;

									if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
										(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
										{	/* Beta/walk.scm 37 */
											BgL_testz00_2574 =
												BGl_2ze3ze3zz__r4_numbers_6_5z00
												(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
												BINT(((long) 1)));
										}
									else
										{	/* Beta/walk.scm 37 */
											BgL_testz00_2574 = ((bool_t) 0);
										}
									if (BgL_testz00_2574)
										{	/* Beta/walk.scm 37 */
											BgL_arg3325z00_839 = BGl_string3590z00zzbeta_walkz00;
										}
									else
										{	/* Beta/walk.scm 37 */
											BgL_arg3325z00_839 = BGl_string3591z00zzbeta_walkz00;
										}
								}
								bgl_display_obj(BgL_arg3325z00_839, BgL_port3263z00_838);
							}
							bgl_display_string(BGl_string3592z00zzbeta_walkz00,
								BgL_port3263z00_838);
							bgl_display_char(((unsigned char) '\n'), BgL_port3263z00_838);
						}
						{	/* Beta/walk.scm 37 */
							obj_t BgL_list3328z00_842;

							BgL_list3328z00_842 = MAKE_PAIR(BINT(((long) -1)), BNIL);
							return BGl_exitz00zz__errorz00(BgL_list3328z00_842);
						}
					}
				else
					{
						obj_t BgL_hooksz00_846;

						obj_t BgL_hnamesz00_847;

						BgL_hooksz00_846 = BNIL;
						BgL_hnamesz00_847 = BNIL;
					BgL_zc3anonymousza33329ze3z83_848:
						if (NULLP(BgL_hooksz00_846))
							{	/* Beta/walk.scm 37 */
								return BgL_valuez00_836;
							}
						else
							{	/* Beta/walk.scm 37 */
								bool_t BgL_testz00_2587;

								{	/* Beta/walk.scm 37 */
									obj_t BgL_fun3338z00_855;

									BgL_fun3338z00_855 = CAR(BgL_hooksz00_846);
									BgL_testz00_2587 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun3338z00_855)
										(BgL_fun3338z00_855, BEOA));
								}
								if (BgL_testz00_2587)
									{
										obj_t BgL_hnamesz00_2594;

										obj_t BgL_hooksz00_2592;

										BgL_hooksz00_2592 = CDR(BgL_hooksz00_846);
										BgL_hnamesz00_2594 = CDR(BgL_hnamesz00_847);
										BgL_hnamesz00_847 = BgL_hnamesz00_2594;
										BgL_hooksz00_846 = BgL_hooksz00_2592;
										goto BgL_zc3anonymousza33329ze3z83_848;
									}
								else
									{	/* Beta/walk.scm 37 */
										obj_t BgL_arg3335z00_854;

										BgL_arg3335z00_854 = CAR(BgL_hnamesz00_847);
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string3593z00zzbeta_walkz00, BgL_arg3335z00_854);
									}
							}
					}
			}
		}
	}



/* _beta-walk! */
	obj_t BGl__betazd2walkz12zc0zzbeta_walkz00(obj_t BgL_envz00_2417,
		obj_t BgL_globalsz00_2418)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 34 */
			return BGl_betazd2walkz12zc0zzbeta_walkz00(BgL_globalsz00_2418);
		}
	}



/* beta-globals! */
	bool_t BGl_betazd2globalsz12zc0zzbeta_walkz00(obj_t BgL_globalsz00_2)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 42 */
			{
				obj_t BgL_l3264z00_859;

				BgL_l3264z00_859 = BgL_globalsz00_2;
			BgL_zc3anonymousza33340ze3z83_860:
				if (PAIRP(BgL_l3264z00_859))
					{	/* Beta/walk.scm 43 */
						{	/* Beta/walk.scm 44 */
							obj_t BgL_globalz00_862;

							BgL_globalz00_862 = CAR(BgL_l3264z00_859);
							{	/* Beta/walk.scm 44 */
								BgL_valuez00_bglt BgL_sfunz00_863;

								{
									BgL_variablez00_bglt BgL_auxz00_2602;

									BgL_auxz00_2602 = (BgL_variablez00_bglt) (BgL_globalz00_862);
									BgL_sfunz00_863 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2602))->
										BgL_valuez00);
								}
								{	/* Beta/walk.scm 45 */
									BgL_nodez00_bglt BgL_arg3342z00_864;

									{	/* Beta/walk.scm 45 */
										obj_t BgL_arg3343z00_865;

										{
											BgL_sfunz00_bglt BgL_auxz00_2605;

											BgL_auxz00_2605 = (BgL_sfunz00_bglt) (BgL_sfunz00_863);
											BgL_arg3343z00_865 =
												(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2605))->
												BgL_bodyz00);
										}
										{	/* Beta/walk.scm 45 */
											BgL_nodez00_bglt BgL_res3502z00_1514;

											{	/* Beta/walk.scm 45 */
												BgL_nodez00_bglt BgL_nodez00_1487;

												BgL_nodez00_1487 =
													(BgL_nodez00_bglt) (BgL_arg3343z00_865);
												{	/* Beta/walk.scm 45 */
													obj_t BgL_method3273z00_1489;

													{	/* Beta/walk.scm 45 */
														BgL_objectz00_bglt BgL_objz00_1490;

														BgL_objz00_1490 =
															(BgL_objectz00_bglt) (BgL_nodez00_1487);
														{	/* Beta/walk.scm 45 */
															long BgL_objzd2classzd2numz00_1491;

															BgL_objzd2classzd2numz00_1491 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_1490);
															{	/* Beta/walk.scm 45 */
																obj_t BgL_arg2643z00_1492;

																BgL_arg2643z00_1492 =
																	PROCEDURE_REF
																	(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
																	(int) (((long) 1)));
																{	/* Beta/walk.scm 45 */
																	obj_t BgL_arrayz00_1494;

																	int BgL_offsetz00_1495;

																	BgL_arrayz00_1494 = BgL_arg2643z00_1492;
																	BgL_offsetz00_1495 =
																		(int) (BgL_objzd2classzd2numz00_1491);
																	{	/* Beta/walk.scm 45 */
																		long BgL_offsetz00_1496;

																		BgL_offsetz00_1496 =
																			(
																			(long) (BgL_offsetz00_1495) -
																			OBJECT_TYPE);
																		{	/* Beta/walk.scm 45 */
																			long BgL_modz00_1497;

																			{	/* Beta/walk.scm 45 */
																				int BgL_arg2645z00_1498;

																				BgL_arg2645z00_1498 =
																					(int) (((long) 16));
																				{	/* Beta/walk.scm 45 */
																					long BgL_auxz00_2617;

																					BgL_auxz00_2617 =
																						(long) (BgL_arg2645z00_1498);
																					BgL_modz00_1497 =
																						(BgL_offsetz00_1496 /
																						BgL_auxz00_2617);
																			}}
																			{	/* Beta/walk.scm 45 */
																				long BgL_restz00_1499;

																				{	/* Beta/walk.scm 45 */
																					int BgL_arg2644z00_1500;

																					BgL_arg2644z00_1500 =
																						(int) (((long) 16));
																					{	/* Beta/walk.scm 45 */
																						long BgL_auxz00_2621;

																						BgL_auxz00_2621 =
																							(long) (BgL_arg2644z00_1500);
																						BgL_restz00_1499 =
																							(BgL_offsetz00_1496 %
																							BgL_auxz00_2621);
																				}}
																				{	/* Beta/walk.scm 45 */

																					BgL_method3273z00_1489 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_1494,
																							(int) (BgL_modz00_1497)),
																						(int) (BgL_restz00_1499));
													}}}}}}}}
													BgL_res3502z00_1514 =
														(BgL_nodez00_bglt) (PROCEDURE_ENTRY
														(BgL_method3273z00_1489) (BgL_method3273z00_1489,
															(obj_t) (BgL_nodez00_1487), BNIL, BEOA));
											}}
											BgL_arg3342z00_864 = BgL_res3502z00_1514;
									}}
									{
										obj_t BgL_auxz00_2634;

										BgL_sfunz00_bglt BgL_auxz00_2632;

										BgL_auxz00_2634 = (obj_t) (BgL_arg3342z00_864);
										BgL_auxz00_2632 = (BgL_sfunz00_bglt) (BgL_sfunz00_863);
										((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2632))->BgL_bodyz00) =
											((obj_t) BgL_auxz00_2634), BUNSPEC);
						}}}}
						{
							obj_t BgL_l3264z00_2637;

							BgL_l3264z00_2637 = CDR(BgL_l3264z00_859);
							BgL_l3264z00_859 = BgL_l3264z00_2637;
							goto BgL_zc3anonymousza33340ze3z83_860;
						}
					}
				else
					{	/* Beta/walk.scm 43 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* node-beta*! */
	obj_t BGl_nodezd2betaza2z12z62zzbeta_walkz00(obj_t BgL_nodeza2za2_41,
		obj_t BgL_stackz00_42)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 219 */
			{	/* Beta/walk.scm 220 */
				obj_t BgL_zc3anonymousza33349ze3z83_2422;

				BgL_zc3anonymousza33349ze3z83_2422 =
					make_fx_procedure(BGl_zc3anonymousza33349ze3z83zzbeta_walkz00,
					(int) (((long) 1)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza33349ze3z83_2422,
					(int) (((long) 0)), BgL_stackz00_42);
				{	/* Beta/walk.scm 220 */
					obj_t BgL_list3348z00_870;

					BgL_list3348z00_870 = MAKE_PAIR(BgL_nodeza2za2_41, BNIL);
					BGl_mapz12z12zz__r4_control_features_6_9z00
						(BgL_zc3anonymousza33349ze3z83_2422, BgL_list3348z00_870);
			}}
			return BgL_nodeza2za2_41;
		}
	}



/* <anonymous:3349> */
	obj_t BGl_zc3anonymousza33349ze3z83zzbeta_walkz00(obj_t BgL_envz00_2423,
		obj_t BgL_nodez00_2425)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 220 */
			{	/* Beta/walk.scm 220 */
				obj_t BgL_stackz00_2424;

				BgL_stackz00_2424 = PROCEDURE_REF(BgL_envz00_2423, (int) (((long) 0)));
				{
					obj_t BgL_nodez00_871;

					{	/* Beta/walk.scm 220 */
						BgL_nodez00_bglt BgL_auxz00_2648;

						BgL_nodez00_871 = BgL_nodez00_2425;
						{	/* Beta/walk.scm 220 */
							BgL_nodez00_bglt BgL_res3505z00_1545;

							{	/* Beta/walk.scm 220 */
								BgL_nodez00_bglt BgL_nodez00_1518;

								BgL_nodez00_1518 = (BgL_nodez00_bglt) (BgL_nodez00_871);
								{	/* Beta/walk.scm 220 */
									obj_t BgL_method3273z00_1520;

									{	/* Beta/walk.scm 220 */
										BgL_objectz00_bglt BgL_objz00_1521;

										BgL_objz00_1521 = (BgL_objectz00_bglt) (BgL_nodez00_1518);
										{	/* Beta/walk.scm 220 */
											long BgL_objzd2classzd2numz00_1522;

											BgL_objzd2classzd2numz00_1522 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1521);
											{	/* Beta/walk.scm 220 */
												obj_t BgL_arg2643z00_1523;

												BgL_arg2643z00_1523 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
													(int) (((long) 1)));
												{	/* Beta/walk.scm 220 */
													obj_t BgL_arrayz00_1525;

													int BgL_offsetz00_1526;

													BgL_arrayz00_1525 = BgL_arg2643z00_1523;
													BgL_offsetz00_1526 =
														(int) (BgL_objzd2classzd2numz00_1522);
													{	/* Beta/walk.scm 220 */
														long BgL_offsetz00_1527;

														BgL_offsetz00_1527 =
															((long) (BgL_offsetz00_1526) - OBJECT_TYPE);
														{	/* Beta/walk.scm 220 */
															long BgL_modz00_1528;

															{	/* Beta/walk.scm 220 */
																int BgL_arg2645z00_1529;

																BgL_arg2645z00_1529 = (int) (((long) 16));
																{	/* Beta/walk.scm 220 */
																	long BgL_auxz00_2658;

																	BgL_auxz00_2658 =
																		(long) (BgL_arg2645z00_1529);
																	BgL_modz00_1528 =
																		(BgL_offsetz00_1527 / BgL_auxz00_2658);
															}}
															{	/* Beta/walk.scm 220 */
																long BgL_restz00_1530;

																{	/* Beta/walk.scm 220 */
																	int BgL_arg2644z00_1531;

																	BgL_arg2644z00_1531 = (int) (((long) 16));
																	{	/* Beta/walk.scm 220 */
																		long BgL_auxz00_2662;

																		BgL_auxz00_2662 =
																			(long) (BgL_arg2644z00_1531);
																		BgL_restz00_1530 =
																			(BgL_offsetz00_1527 % BgL_auxz00_2662);
																}}
																{	/* Beta/walk.scm 220 */

																	BgL_method3273z00_1520 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1525,
																			(int) (BgL_modz00_1528)),
																		(int) (BgL_restz00_1530));
									}}}}}}}}
									BgL_res3505z00_1545 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3273z00_1520)
										(BgL_method3273z00_1520, (obj_t) (BgL_nodez00_1518),
											BgL_stackz00_2424, BEOA));
							}}
							BgL_auxz00_2648 = BgL_res3505z00_1545;
						}
						return (obj_t) (BgL_auxz00_2648);
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbeta_walkz00()
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 18 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_nodezd2betaz12zd2default3272zd2envzc0zzbeta_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string3594z00zzbeta_walkz00);
		}
	}



/* node-beta! */
	BgL_nodez00_bglt BGl_nodezd2betaz12zc0zzbeta_walkz00(BgL_nodez00_bglt
		BgL_nodez00_3, obj_t BgL_stackz00_4)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 51 */
			{	/* Beta/walk.scm 51 */
				obj_t BgL_method3273z00_1546;

				{	/* Beta/walk.scm 51 */
					BgL_objectz00_bglt BgL_objz00_1547;

					BgL_objz00_1547 = (BgL_objectz00_bglt) (BgL_nodez00_3);
					{	/* Beta/walk.scm 51 */
						long BgL_objzd2classzd2numz00_1548;

						BgL_objzd2classzd2numz00_1548 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1547);
						{	/* Beta/walk.scm 51 */
							obj_t BgL_arg2643z00_1549;

							BgL_arg2643z00_1549 =
								PROCEDURE_REF(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
								(int) (((long) 1)));
							{	/* Beta/walk.scm 51 */
								obj_t BgL_arrayz00_1551;

								int BgL_offsetz00_1552;

								BgL_arrayz00_1551 = BgL_arg2643z00_1549;
								BgL_offsetz00_1552 = (int) (BgL_objzd2classzd2numz00_1548);
								{	/* Beta/walk.scm 51 */
									long BgL_offsetz00_1553;

									BgL_offsetz00_1553 =
										((long) (BgL_offsetz00_1552) - OBJECT_TYPE);
									{	/* Beta/walk.scm 51 */
										long BgL_modz00_1554;

										{	/* Beta/walk.scm 51 */
											int BgL_arg2645z00_1555;

											BgL_arg2645z00_1555 = (int) (((long) 16));
											{	/* Beta/walk.scm 51 */
												long BgL_auxz00_2683;

												BgL_auxz00_2683 = (long) (BgL_arg2645z00_1555);
												BgL_modz00_1554 =
													(BgL_offsetz00_1553 / BgL_auxz00_2683);
										}}
										{	/* Beta/walk.scm 51 */
											long BgL_restz00_1556;

											{	/* Beta/walk.scm 51 */
												int BgL_arg2644z00_1557;

												BgL_arg2644z00_1557 = (int) (((long) 16));
												{	/* Beta/walk.scm 51 */
													long BgL_auxz00_2687;

													BgL_auxz00_2687 = (long) (BgL_arg2644z00_1557);
													BgL_restz00_1556 =
														(BgL_offsetz00_1553 % BgL_auxz00_2687);
											}}
											{	/* Beta/walk.scm 51 */

												BgL_method3273z00_1546 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1551,
														(int) (BgL_modz00_1554)), (int) (BgL_restz00_1556));
				}}}}}}}}
				return
					(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3273z00_1546)
					(BgL_method3273z00_1546, (obj_t) (BgL_nodez00_3), BgL_stackz00_4,
						BEOA));
			}
		}
	}



/* _node-beta! */
	obj_t BGl__nodezd2betaz12zc0zzbeta_walkz00(obj_t BgL_envz00_2419,
		obj_t BgL_nodez00_2420, obj_t BgL_stackz00_2421)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 51 */
			return
				(obj_t) (BGl_nodezd2betaz12zc0zzbeta_walkz00(
					(BgL_nodez00_bglt) (BgL_nodez00_2420), BgL_stackz00_2421));
		}
	}



/* _node-beta!-default3272 */
	obj_t BGl__nodezd2betaz12zd2default3272z12zzbeta_walkz00(obj_t
		BgL_envz00_2426, obj_t BgL_nodez00_2427, obj_t BgL_stackz00_2428)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 18 */
			return (obj_t) ((BgL_nodez00_bglt) (BgL_nodez00_2427));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbeta_walkz00()
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 18 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_sequencez00zzast_nodez00, BGl_proc3595z00zzbeta_walkz00,
				BGl_string3594z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc3596z00zzbeta_walkz00, BGl_string3594z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3597z00zzbeta_walkz00,
				BGl_string3594z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc3598z00zzbeta_walkz00, BGl_string3594z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc3599z00zzbeta_walkz00, BGl_string3594z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc3600z00zzbeta_walkz00, BGl_string3594z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc3601z00zzbeta_walkz00, BGl_string3594z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3602z00zzbeta_walkz00,
				BGl_string3594z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc3603z00zzbeta_walkz00, BGl_string3594z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00, BGl_selectz00zzast_nodez00,
				BGl_proc3604z00zzbeta_walkz00, BGl_string3594z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3605z00zzbeta_walkz00,
				BGl_string3594z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3606z00zzbeta_walkz00,
				BGl_string3594z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3607z00zzbeta_walkz00,
				BGl_string3594z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3608z00zzbeta_walkz00,
				BGl_string3594z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3609z00zzbeta_walkz00,
				BGl_string3594z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3610z00zzbeta_walkz00,
				BGl_string3594z00zzbeta_walkz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3611z00zzbeta_walkz00,
				BGl_string3594z00zzbeta_walkz00);
		}
	}



/* node-beta!-jump-ex-i3307 */
	obj_t BGl_nodezd2betaz12zd2jumpzd2exzd2i3307z12zzbeta_walkz00(obj_t
		BgL_envz00_2447, obj_t BgL_nodez00_2448, obj_t BgL_stackz00_2449)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 211 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1450;

				obj_t BgL_stackz00_1451;

				{	/* Beta/walk.scm 212 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_2720;

					BgL_nodez00_1450 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2448);
					BgL_stackz00_1451 = BgL_stackz00_2449;
					{	/* Beta/walk.scm 212 */
						BgL_nodez00_bglt BgL_arg3492z00_1454;

						{	/* Beta/walk.scm 212 */
							BgL_nodez00_bglt BgL_arg3493z00_1455;

							BgL_arg3493z00_1455 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1450))->
								BgL_exitz00);
							{	/* Beta/walk.scm 212 */
								BgL_nodez00_bglt BgL_res3582z00_2383;

								{	/* Beta/walk.scm 212 */
									obj_t BgL_method3273z00_2358;

									{	/* Beta/walk.scm 212 */
										BgL_objectz00_bglt BgL_objz00_2359;

										BgL_objz00_2359 =
											(BgL_objectz00_bglt) (BgL_arg3493z00_1455);
										{	/* Beta/walk.scm 212 */
											long BgL_objzd2classzd2numz00_2360;

											BgL_objzd2classzd2numz00_2360 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2359);
											{	/* Beta/walk.scm 212 */
												obj_t BgL_arg2643z00_2361;

												BgL_arg2643z00_2361 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
													(int) (((long) 1)));
												{	/* Beta/walk.scm 212 */
													obj_t BgL_arrayz00_2363;

													int BgL_offsetz00_2364;

													BgL_arrayz00_2363 = BgL_arg2643z00_2361;
													BgL_offsetz00_2364 =
														(int) (BgL_objzd2classzd2numz00_2360);
													{	/* Beta/walk.scm 212 */
														long BgL_offsetz00_2365;

														BgL_offsetz00_2365 =
															((long) (BgL_offsetz00_2364) - OBJECT_TYPE);
														{	/* Beta/walk.scm 212 */
															long BgL_modz00_2366;

															{	/* Beta/walk.scm 212 */
																int BgL_arg2645z00_2367;

																BgL_arg2645z00_2367 = (int) (((long) 16));
																{	/* Beta/walk.scm 212 */
																	long BgL_auxz00_2730;

																	BgL_auxz00_2730 =
																		(long) (BgL_arg2645z00_2367);
																	BgL_modz00_2366 =
																		(BgL_offsetz00_2365 / BgL_auxz00_2730);
															}}
															{	/* Beta/walk.scm 212 */
																long BgL_restz00_2368;

																{	/* Beta/walk.scm 212 */
																	int BgL_arg2644z00_2369;

																	BgL_arg2644z00_2369 = (int) (((long) 16));
																	{	/* Beta/walk.scm 212 */
																		long BgL_auxz00_2734;

																		BgL_auxz00_2734 =
																			(long) (BgL_arg2644z00_2369);
																		BgL_restz00_2368 =
																			(BgL_offsetz00_2365 % BgL_auxz00_2734);
																}}
																{	/* Beta/walk.scm 212 */

																	BgL_method3273z00_2358 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2363,
																			(int) (BgL_modz00_2366)),
																		(int) (BgL_restz00_2368));
									}}}}}}}}
									BgL_res3582z00_2383 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3273z00_2358)
										(BgL_method3273z00_2358, (obj_t) (BgL_arg3493z00_1455),
											BgL_stackz00_1451, BEOA));
								}
								BgL_arg3492z00_1454 = BgL_res3582z00_2383;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1450))->
								BgL_exitz00) =
							((BgL_nodez00_bglt) BgL_arg3492z00_1454), BUNSPEC);
					}
					{	/* Beta/walk.scm 213 */
						BgL_nodez00_bglt BgL_arg3494z00_1456;

						{	/* Beta/walk.scm 213 */
							BgL_nodez00_bglt BgL_arg3495z00_1457;

							BgL_arg3495z00_1457 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1450))->
								BgL_valuez00);
							{	/* Beta/walk.scm 213 */
								BgL_nodez00_bglt BgL_res3585z00_2414;

								{	/* Beta/walk.scm 213 */
									obj_t BgL_method3273z00_2389;

									{	/* Beta/walk.scm 213 */
										BgL_objectz00_bglt BgL_objz00_2390;

										BgL_objz00_2390 =
											(BgL_objectz00_bglt) (BgL_arg3495z00_1457);
										{	/* Beta/walk.scm 213 */
											long BgL_objzd2classzd2numz00_2391;

											BgL_objzd2classzd2numz00_2391 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2390);
											{	/* Beta/walk.scm 213 */
												obj_t BgL_arg2643z00_2392;

												BgL_arg2643z00_2392 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
													(int) (((long) 1)));
												{	/* Beta/walk.scm 213 */
													obj_t BgL_arrayz00_2394;

													int BgL_offsetz00_2395;

													BgL_arrayz00_2394 = BgL_arg2643z00_2392;
													BgL_offsetz00_2395 =
														(int) (BgL_objzd2classzd2numz00_2391);
													{	/* Beta/walk.scm 213 */
														long BgL_offsetz00_2396;

														BgL_offsetz00_2396 =
															((long) (BgL_offsetz00_2395) - OBJECT_TYPE);
														{	/* Beta/walk.scm 213 */
															long BgL_modz00_2397;

															{	/* Beta/walk.scm 213 */
																int BgL_arg2645z00_2398;

																BgL_arg2645z00_2398 = (int) (((long) 16));
																{	/* Beta/walk.scm 213 */
																	long BgL_auxz00_2755;

																	BgL_auxz00_2755 =
																		(long) (BgL_arg2645z00_2398);
																	BgL_modz00_2397 =
																		(BgL_offsetz00_2396 / BgL_auxz00_2755);
															}}
															{	/* Beta/walk.scm 213 */
																long BgL_restz00_2399;

																{	/* Beta/walk.scm 213 */
																	int BgL_arg2644z00_2400;

																	BgL_arg2644z00_2400 = (int) (((long) 16));
																	{	/* Beta/walk.scm 213 */
																		long BgL_auxz00_2759;

																		BgL_auxz00_2759 =
																			(long) (BgL_arg2644z00_2400);
																		BgL_restz00_2399 =
																			(BgL_offsetz00_2396 % BgL_auxz00_2759);
																}}
																{	/* Beta/walk.scm 213 */

																	BgL_method3273z00_2389 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2394,
																			(int) (BgL_modz00_2397)),
																		(int) (BgL_restz00_2399));
									}}}}}}}}
									BgL_res3585z00_2414 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3273z00_2389)
										(BgL_method3273z00_2389, (obj_t) (BgL_arg3495z00_1457),
											BgL_stackz00_1451, BEOA));
								}
								BgL_arg3494z00_1456 = BgL_res3585z00_2414;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1450))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3494z00_1456), BUNSPEC);
					}
					BgL_auxz00_2720 = BgL_nodez00_1450;
					return (obj_t) (BgL_auxz00_2720);
				}
			}
		}
	}



/* node-beta!-set-ex-it3305 */
	obj_t BGl_nodezd2betaz12zd2setzd2exzd2it3305z12zzbeta_walkz00(obj_t
		BgL_envz00_2450, obj_t BgL_nodez00_2451, obj_t BgL_stackz00_2452)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 204 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1442;

				obj_t BgL_stackz00_1443;

				{	/* Beta/walk.scm 205 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_2773;

					BgL_nodez00_1442 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2451);
					BgL_stackz00_1443 = BgL_stackz00_2452;
					{	/* Beta/walk.scm 205 */
						BgL_nodez00_bglt BgL_arg3489z00_2322;

						{	/* Beta/walk.scm 205 */
							BgL_nodez00_bglt BgL_arg3490z00_2323;

							BgL_arg3490z00_2323 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1442))->
								BgL_bodyz00);
							{	/* Beta/walk.scm 205 */
								BgL_nodez00_bglt BgL_res3579z00_2352;

								{	/* Beta/walk.scm 205 */
									obj_t BgL_method3273z00_2327;

									{	/* Beta/walk.scm 205 */
										BgL_objectz00_bglt BgL_objz00_2328;

										BgL_objz00_2328 =
											(BgL_objectz00_bglt) (BgL_arg3490z00_2323);
										{	/* Beta/walk.scm 205 */
											long BgL_objzd2classzd2numz00_2329;

											BgL_objzd2classzd2numz00_2329 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2328);
											{	/* Beta/walk.scm 205 */
												obj_t BgL_arg2643z00_2330;

												BgL_arg2643z00_2330 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
													(int) (((long) 1)));
												{	/* Beta/walk.scm 205 */
													obj_t BgL_arrayz00_2332;

													int BgL_offsetz00_2333;

													BgL_arrayz00_2332 = BgL_arg2643z00_2330;
													BgL_offsetz00_2333 =
														(int) (BgL_objzd2classzd2numz00_2329);
													{	/* Beta/walk.scm 205 */
														long BgL_offsetz00_2334;

														BgL_offsetz00_2334 =
															((long) (BgL_offsetz00_2333) - OBJECT_TYPE);
														{	/* Beta/walk.scm 205 */
															long BgL_modz00_2335;

															{	/* Beta/walk.scm 205 */
																int BgL_arg2645z00_2336;

																BgL_arg2645z00_2336 = (int) (((long) 16));
																{	/* Beta/walk.scm 205 */
																	long BgL_auxz00_2783;

																	BgL_auxz00_2783 =
																		(long) (BgL_arg2645z00_2336);
																	BgL_modz00_2335 =
																		(BgL_offsetz00_2334 / BgL_auxz00_2783);
															}}
															{	/* Beta/walk.scm 205 */
																long BgL_restz00_2337;

																{	/* Beta/walk.scm 205 */
																	int BgL_arg2644z00_2338;

																	BgL_arg2644z00_2338 = (int) (((long) 16));
																	{	/* Beta/walk.scm 205 */
																		long BgL_auxz00_2787;

																		BgL_auxz00_2787 =
																			(long) (BgL_arg2644z00_2338);
																		BgL_restz00_2337 =
																			(BgL_offsetz00_2334 % BgL_auxz00_2787);
																}}
																{	/* Beta/walk.scm 205 */

																	BgL_method3273z00_2327 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2332,
																			(int) (BgL_modz00_2335)),
																		(int) (BgL_restz00_2337));
									}}}}}}}}
									BgL_res3579z00_2352 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3273z00_2327)
										(BgL_method3273z00_2327, (obj_t) (BgL_arg3490z00_2323),
											BgL_stackz00_1443, BEOA));
								}
								BgL_arg3489z00_2322 = BgL_res3579z00_2352;
						}}
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1442))->
								BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3489z00_2322), BUNSPEC);
					}
					BgL_auxz00_2773 = BgL_nodez00_1442;
					return (obj_t) (BgL_auxz00_2773);
				}
			}
		}
	}



/* node-beta!-let-var3303 */
	obj_t BGl_nodezd2betaz12zd2letzd2var3303zc0zzbeta_walkz00(obj_t
		BgL_envz00_2453, obj_t BgL_nodez00_2454, obj_t BgL_stackz00_2455)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 178 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1405;

				obj_t BgL_stackz00_1406;

				{	/* Beta/walk.scm 179 */
					BgL_letzd2varzd2_bglt BgL_auxz00_2801;

					BgL_nodez00_1405 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2454);
					BgL_stackz00_1406 = BgL_stackz00_2455;
					{
						obj_t BgL_bindingsz00_1412;

						obj_t BgL_newzd2stackzd2_1413;

						{	/* Beta/walk.scm 180 */
							obj_t BgL_arg3470z00_1411;

							BgL_arg3470z00_1411 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1405))->
								BgL_bindingsz00);
							BgL_bindingsz00_1412 = BgL_arg3470z00_1411;
							BgL_newzd2stackzd2_1413 = BgL_stackz00_1406;
						BgL_zc3anonymousza33471ze3z83_1414:
							if (NULLP(BgL_bindingsz00_1412))
								{	/* Beta/walk.scm 182 */
									{	/* Beta/walk.scm 184 */
										BgL_nodez00_bglt BgL_arg3473z00_1416;

										{	/* Beta/walk.scm 184 */
											BgL_nodez00_bglt BgL_arg3474z00_1417;

											BgL_arg3474z00_1417 =
												(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1405))->
												BgL_bodyz00);
											{	/* Beta/walk.scm 184 */
												BgL_nodez00_bglt BgL_res3573z00_2275;

												{	/* Beta/walk.scm 184 */
													obj_t BgL_method3273z00_2250;

													{	/* Beta/walk.scm 184 */
														BgL_objectz00_bglt BgL_objz00_2251;

														BgL_objz00_2251 =
															(BgL_objectz00_bglt) (BgL_arg3474z00_1417);
														{	/* Beta/walk.scm 184 */
															long BgL_objzd2classzd2numz00_2252;

															BgL_objzd2classzd2numz00_2252 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2251);
															{	/* Beta/walk.scm 184 */
																obj_t BgL_arg2643z00_2253;

																BgL_arg2643z00_2253 =
																	PROCEDURE_REF
																	(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
																	(int) (((long) 1)));
																{	/* Beta/walk.scm 184 */
																	obj_t BgL_arrayz00_2255;

																	int BgL_offsetz00_2256;

																	BgL_arrayz00_2255 = BgL_arg2643z00_2253;
																	BgL_offsetz00_2256 =
																		(int) (BgL_objzd2classzd2numz00_2252);
																	{	/* Beta/walk.scm 184 */
																		long BgL_offsetz00_2257;

																		BgL_offsetz00_2257 =
																			(
																			(long) (BgL_offsetz00_2256) -
																			OBJECT_TYPE);
																		{	/* Beta/walk.scm 184 */
																			long BgL_modz00_2258;

																			{	/* Beta/walk.scm 184 */
																				int BgL_arg2645z00_2259;

																				BgL_arg2645z00_2259 =
																					(int) (((long) 16));
																				{	/* Beta/walk.scm 184 */
																					long BgL_auxz00_2814;

																					BgL_auxz00_2814 =
																						(long) (BgL_arg2645z00_2259);
																					BgL_modz00_2258 =
																						(BgL_offsetz00_2257 /
																						BgL_auxz00_2814);
																			}}
																			{	/* Beta/walk.scm 184 */
																				long BgL_restz00_2260;

																				{	/* Beta/walk.scm 184 */
																					int BgL_arg2644z00_2261;

																					BgL_arg2644z00_2261 =
																						(int) (((long) 16));
																					{	/* Beta/walk.scm 184 */
																						long BgL_auxz00_2818;

																						BgL_auxz00_2818 =
																							(long) (BgL_arg2644z00_2261);
																						BgL_restz00_2260 =
																							(BgL_offsetz00_2257 %
																							BgL_auxz00_2818);
																				}}
																				{	/* Beta/walk.scm 184 */

																					BgL_method3273z00_2250 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2255,
																							(int) (BgL_modz00_2258)),
																						(int) (BgL_restz00_2260));
													}}}}}}}}
													BgL_res3573z00_2275 =
														(BgL_nodez00_bglt) (PROCEDURE_ENTRY
														(BgL_method3273z00_2250) (BgL_method3273z00_2250,
															(obj_t) (BgL_arg3474z00_1417),
															BgL_newzd2stackzd2_1413, BEOA));
												}
												BgL_arg3473z00_1416 = BgL_res3573z00_2275;
										}}
										((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1405))->
												BgL_bodyz00) =
											((BgL_nodez00_bglt) BgL_arg3473z00_1416), BUNSPEC);
									}
									BgL_auxz00_2801 = BgL_nodez00_1405;
								}
							else
								{	/* Beta/walk.scm 186 */
									obj_t BgL_bindingz00_1418;

									BgL_bindingz00_1418 = CAR(BgL_bindingsz00_1412);
									{	/* Beta/walk.scm 187 */
										BgL_nodez00_bglt BgL_valz00_1420;

										{	/* Beta/walk.scm 188 */
											obj_t BgL_arg3487z00_1438;

											BgL_arg3487z00_1438 = CDR(BgL_bindingz00_1418);
											{	/* Beta/walk.scm 188 */
												BgL_nodez00_bglt BgL_res3576z00_2308;

												{	/* Beta/walk.scm 188 */
													BgL_nodez00_bglt BgL_nodez00_2281;

													BgL_nodez00_2281 =
														(BgL_nodez00_bglt) (BgL_arg3487z00_1438);
													{	/* Beta/walk.scm 188 */
														obj_t BgL_method3273z00_2283;

														{	/* Beta/walk.scm 188 */
															BgL_objectz00_bglt BgL_objz00_2284;

															BgL_objz00_2284 =
																(BgL_objectz00_bglt) (BgL_nodez00_2281);
															{	/* Beta/walk.scm 188 */
																long BgL_objzd2classzd2numz00_2285;

																BgL_objzd2classzd2numz00_2285 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2284);
																{	/* Beta/walk.scm 188 */
																	obj_t BgL_arg2643z00_2286;

																	BgL_arg2643z00_2286 =
																		PROCEDURE_REF
																		(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
																		(int) (((long) 1)));
																	{	/* Beta/walk.scm 188 */
																		obj_t BgL_arrayz00_2288;

																		int BgL_offsetz00_2289;

																		BgL_arrayz00_2288 = BgL_arg2643z00_2286;
																		BgL_offsetz00_2289 =
																			(int) (BgL_objzd2classzd2numz00_2285);
																		{	/* Beta/walk.scm 188 */
																			long BgL_offsetz00_2290;

																			BgL_offsetz00_2290 =
																				(
																				(long) (BgL_offsetz00_2289) -
																				OBJECT_TYPE);
																			{	/* Beta/walk.scm 188 */
																				long BgL_modz00_2291;

																				{	/* Beta/walk.scm 188 */
																					int BgL_arg2645z00_2292;

																					BgL_arg2645z00_2292 =
																						(int) (((long) 16));
																					{	/* Beta/walk.scm 188 */
																						long BgL_auxz00_2841;

																						BgL_auxz00_2841 =
																							(long) (BgL_arg2645z00_2292);
																						BgL_modz00_2291 =
																							(BgL_offsetz00_2290 /
																							BgL_auxz00_2841);
																				}}
																				{	/* Beta/walk.scm 188 */
																					long BgL_restz00_2293;

																					{	/* Beta/walk.scm 188 */
																						int BgL_arg2644z00_2294;

																						BgL_arg2644z00_2294 =
																							(int) (((long) 16));
																						{	/* Beta/walk.scm 188 */
																							long BgL_auxz00_2845;

																							BgL_auxz00_2845 =
																								(long) (BgL_arg2644z00_2294);
																							BgL_restz00_2293 =
																								(BgL_offsetz00_2290 %
																								BgL_auxz00_2845);
																					}}
																					{	/* Beta/walk.scm 188 */

																						BgL_method3273z00_2283 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2288,
																								(int) (BgL_modz00_2291)),
																							(int) (BgL_restz00_2293));
														}}}}}}}}
														BgL_res3576z00_2308 =
															(BgL_nodez00_bglt) (PROCEDURE_ENTRY
															(BgL_method3273z00_2283) (BgL_method3273z00_2283,
																(obj_t) (BgL_nodez00_2281), BgL_stackz00_1406,
																BEOA));
												}}
												BgL_valz00_1420 = BgL_res3576z00_2308;
										}}
										{	/* Beta/walk.scm 188 */

											{	/* Beta/walk.scm 189 */
												bool_t BgL_testz00_2856;

												{	/* Beta/walk.scm 189 */
													bool_t BgL_testz00_2857;

													{	/* Beta/walk.scm 189 */
														obj_t BgL_arg3486z00_1437;

														BgL_arg3486z00_1437 = CDR(BgL_bindingz00_1418);
														BgL_testz00_2857 =
															BGl_iszd2azf3z21zz__objectz00(BgL_arg3486z00_1437,
															BGl_atomz00zzast_nodez00);
													}
													if (BgL_testz00_2857)
														{	/* Beta/walk.scm 190 */
															bool_t BgL_testz00_2860;

															{	/* Beta/walk.scm 190 */
																obj_t BgL_auxz00_2861;

																{	/* Beta/walk.scm 190 */
																	BgL_variablez00_bglt BgL_obj1614z00_2312;

																	{	/* Beta/walk.scm 190 */
																		obj_t BgL_pairz00_2311;

																		BgL_pairz00_2311 = BgL_bindingz00_1418;
																		BgL_obj1614z00_2312 =
																			(BgL_variablez00_bglt) (CAR
																			(BgL_pairz00_2311));
																	}
																	BgL_auxz00_2861 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_obj1614z00_2312))->
																		BgL_accessz00);
																}
																BgL_testz00_2860 =
																	(BgL_auxz00_2861 ==
																	CNST_TABLE_REF(((long) 2)));
															}
															if (BgL_testz00_2860)
																{	/* Beta/walk.scm 191 */
																	obj_t BgL_valz00_1427;

																	{	/* Beta/walk.scm 191 */
																		BgL_atomz00_bglt BgL_obj2135z00_2314;

																		{	/* Beta/walk.scm 191 */
																			obj_t BgL_pairz00_2313;

																			BgL_pairz00_2313 = BgL_bindingz00_1418;
																			BgL_obj2135z00_2314 =
																				(BgL_atomz00_bglt) (CDR
																				(BgL_pairz00_2313));
																		}
																		BgL_valz00_1427 =
																			(((BgL_atomz00_bglt)
																				CREF(BgL_obj2135z00_2314))->
																			BgL_valuez00);
																	}
																	{	/* Beta/walk.scm 192 */
																		bool_t BgL__ortest_3258z00_1428;

																		BgL__ortest_3258z00_1428 =
																			BGl_numberzf3zf3zz__r4_numbers_6_5z00
																			(BgL_valz00_1427);
																		if (BgL__ortest_3258z00_1428)
																			{	/* Beta/walk.scm 192 */
																				BgL_testz00_2856 =
																					BgL__ortest_3258z00_1428;
																			}
																		else
																			{	/* Beta/walk.scm 193 */
																				bool_t BgL__ortest_3259z00_1429;

																				BgL__ortest_3259z00_1429 =
																					BOOLEANP(BgL_valz00_1427);
																				if (BgL__ortest_3259z00_1429)
																					{	/* Beta/walk.scm 193 */
																						BgL_testz00_2856 =
																							BgL__ortest_3259z00_1429;
																					}
																				else
																					{	/* Beta/walk.scm 194 */
																						bool_t BgL__ortest_3260z00_1430;

																						BgL__ortest_3260z00_1430 =
																							CHARP(BgL_valz00_1427);
																						if (BgL__ortest_3260z00_1430)
																							{	/* Beta/walk.scm 194 */
																								BgL_testz00_2856 =
																									BgL__ortest_3260z00_1430;
																							}
																						else
																							{	/* Beta/walk.scm 195 */
																								bool_t BgL__ortest_3261z00_1431;

																								BgL__ortest_3261z00_1431 =
																									SYMBOLP(BgL_valz00_1427);
																								if (BgL__ortest_3261z00_1431)
																									{	/* Beta/walk.scm 195 */
																										BgL_testz00_2856 =
																											BgL__ortest_3261z00_1431;
																									}
																								else
																									{	/* Beta/walk.scm 196 */
																										bool_t
																											BgL__ortest_3262z00_1432;
																										BgL__ortest_3262z00_1432 =
																											KEYWORDP(BgL_valz00_1427);
																										if (BgL__ortest_3262z00_1432)
																											{	/* Beta/walk.scm 196 */
																												BgL_testz00_2856 =
																													BgL__ortest_3262z00_1432;
																											}
																										else
																											{	/* Beta/walk.scm 196 */
																												BgL_testz00_2856 =
																													CNSTP
																													(BgL_valz00_1427);
																											}
																									}
																							}
																					}
																			}
																	}
																}
															else
																{	/* Beta/walk.scm 190 */
																	BgL_testz00_2856 = ((bool_t) 0);
																}
														}
													else
														{	/* Beta/walk.scm 189 */
															BgL_testz00_2856 = ((bool_t) 0);
														}
												}
												if (BgL_testz00_2856)
													{	/* Beta/walk.scm 198 */
														obj_t BgL_arg3476z00_1422;

														obj_t BgL_arg3477z00_1423;

														BgL_arg3476z00_1422 = CDR(BgL_bindingsz00_1412);
														BgL_arg3477z00_1423 =
															MAKE_PAIR(BgL_bindingz00_1418,
															BgL_newzd2stackzd2_1413);
														{
															obj_t BgL_newzd2stackzd2_2884;

															obj_t BgL_bindingsz00_2883;

															BgL_bindingsz00_2883 = BgL_arg3476z00_1422;
															BgL_newzd2stackzd2_2884 = BgL_arg3477z00_1423;
															BgL_newzd2stackzd2_1413 = BgL_newzd2stackzd2_2884;
															BgL_bindingsz00_1412 = BgL_bindingsz00_2883;
															goto BgL_zc3anonymousza33471ze3z83_1414;
														}
													}
												else
													{
														obj_t BgL_bindingsz00_2885;

														BgL_bindingsz00_2885 = CDR(BgL_bindingsz00_1412);
														BgL_bindingsz00_1412 = BgL_bindingsz00_2885;
														goto BgL_zc3anonymousza33471ze3z83_1414;
													}
											}
										}
									}
								}
						}
					}
					return (obj_t) (BgL_auxz00_2801);
				}
			}
		}
	}



/* node-beta!-let-fun3301 */
	obj_t BGl_nodezd2betaz12zd2letzd2fun3301zc0zzbeta_walkz00(obj_t
		BgL_envz00_2456, obj_t BgL_nodez00_2457, obj_t BgL_stackz00_2458)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 166 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1385;

				obj_t BgL_stackz00_1386;

				{	/* Beta/walk.scm 167 */
					BgL_letzd2funzd2_bglt BgL_auxz00_2889;

					BgL_nodez00_1385 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2457);
					BgL_stackz00_1386 = BgL_stackz00_2458;
					{	/* Beta/walk.scm 168 */
						BgL_nodez00_bglt BgL_arg3462z00_1390;

						{	/* Beta/walk.scm 168 */
							BgL_nodez00_bglt BgL_arg3463z00_1391;

							BgL_arg3463z00_1391 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1385))->BgL_bodyz00);
							{	/* Beta/walk.scm 168 */
								BgL_nodez00_bglt BgL_res3567z00_2206;

								{	/* Beta/walk.scm 168 */
									obj_t BgL_method3273z00_2181;

									{	/* Beta/walk.scm 168 */
										BgL_objectz00_bglt BgL_objz00_2182;

										BgL_objz00_2182 =
											(BgL_objectz00_bglt) (BgL_arg3463z00_1391);
										{	/* Beta/walk.scm 168 */
											long BgL_objzd2classzd2numz00_2183;

											BgL_objzd2classzd2numz00_2183 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2182);
											{	/* Beta/walk.scm 168 */
												obj_t BgL_arg2643z00_2184;

												BgL_arg2643z00_2184 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
													(int) (((long) 1)));
												{	/* Beta/walk.scm 168 */
													obj_t BgL_arrayz00_2186;

													int BgL_offsetz00_2187;

													BgL_arrayz00_2186 = BgL_arg2643z00_2184;
													BgL_offsetz00_2187 =
														(int) (BgL_objzd2classzd2numz00_2183);
													{	/* Beta/walk.scm 168 */
														long BgL_offsetz00_2188;

														BgL_offsetz00_2188 =
															((long) (BgL_offsetz00_2187) - OBJECT_TYPE);
														{	/* Beta/walk.scm 168 */
															long BgL_modz00_2189;

															{	/* Beta/walk.scm 168 */
																int BgL_arg2645z00_2190;

																BgL_arg2645z00_2190 = (int) (((long) 16));
																{	/* Beta/walk.scm 168 */
																	long BgL_auxz00_2899;

																	BgL_auxz00_2899 =
																		(long) (BgL_arg2645z00_2190);
																	BgL_modz00_2189 =
																		(BgL_offsetz00_2188 / BgL_auxz00_2899);
															}}
															{	/* Beta/walk.scm 168 */
																long BgL_restz00_2191;

																{	/* Beta/walk.scm 168 */
																	int BgL_arg2644z00_2192;

																	BgL_arg2644z00_2192 = (int) (((long) 16));
																	{	/* Beta/walk.scm 168 */
																		long BgL_auxz00_2903;

																		BgL_auxz00_2903 =
																			(long) (BgL_arg2644z00_2192);
																		BgL_restz00_2191 =
																			(BgL_offsetz00_2188 % BgL_auxz00_2903);
																}}
																{	/* Beta/walk.scm 168 */

																	BgL_method3273z00_2181 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2186,
																			(int) (BgL_modz00_2189)),
																		(int) (BgL_restz00_2191));
									}}}}}}}}
									BgL_res3567z00_2206 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3273z00_2181)
										(BgL_method3273z00_2181, (obj_t) (BgL_arg3463z00_1391),
											BgL_stackz00_1386, BEOA));
								}
								BgL_arg3462z00_1390 = BgL_res3567z00_2206;
						}}
						((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1385))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3462z00_1390), BUNSPEC);
					}
					{	/* Beta/walk.scm 169 */
						obj_t BgL_g3271z00_1392;

						BgL_g3271z00_1392 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1385))->BgL_localsz00);
						{
							obj_t BgL_l3269z00_1394;

							BgL_l3269z00_1394 = BgL_g3271z00_1392;
						BgL_zc3anonymousza33464ze3z83_1395:
							if (PAIRP(BgL_l3269z00_1394))
								{	/* Beta/walk.scm 169 */
									{	/* Beta/walk.scm 170 */
										obj_t BgL_localz00_1397;

										BgL_localz00_1397 = CAR(BgL_l3269z00_1394);
										{	/* Beta/walk.scm 170 */
											BgL_valuez00_bglt BgL_funz00_1398;

											{
												BgL_variablez00_bglt BgL_auxz00_2919;

												BgL_auxz00_2919 =
													(BgL_variablez00_bglt) (BgL_localz00_1397);
												BgL_funz00_1398 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_2919))->
													BgL_valuez00);
											}
											{	/* Beta/walk.scm 171 */
												BgL_nodez00_bglt BgL_arg3466z00_1399;

												{	/* Beta/walk.scm 171 */
													obj_t BgL_arg3467z00_1400;

													{
														BgL_sfunz00_bglt BgL_auxz00_2922;

														BgL_auxz00_2922 =
															(BgL_sfunz00_bglt) (BgL_funz00_1398);
														BgL_arg3467z00_1400 =
															(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2922))->
															BgL_bodyz00);
													}
													{	/* Beta/walk.scm 171 */
														BgL_nodez00_bglt BgL_res3570z00_2241;

														{	/* Beta/walk.scm 171 */
															BgL_nodez00_bglt BgL_nodez00_2214;

															BgL_nodez00_2214 =
																(BgL_nodez00_bglt) (BgL_arg3467z00_1400);
															{	/* Beta/walk.scm 171 */
																obj_t BgL_method3273z00_2216;

																{	/* Beta/walk.scm 171 */
																	BgL_objectz00_bglt BgL_objz00_2217;

																	BgL_objz00_2217 =
																		(BgL_objectz00_bglt) (BgL_nodez00_2214);
																	{	/* Beta/walk.scm 171 */
																		long BgL_objzd2classzd2numz00_2218;

																		BgL_objzd2classzd2numz00_2218 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_2217);
																		{	/* Beta/walk.scm 171 */
																			obj_t BgL_arg2643z00_2219;

																			BgL_arg2643z00_2219 =
																				PROCEDURE_REF
																				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
																				(int) (((long) 1)));
																			{	/* Beta/walk.scm 171 */
																				obj_t BgL_arrayz00_2221;

																				int BgL_offsetz00_2222;

																				BgL_arrayz00_2221 = BgL_arg2643z00_2219;
																				BgL_offsetz00_2222 =
																					(int) (BgL_objzd2classzd2numz00_2218);
																				{	/* Beta/walk.scm 171 */
																					long BgL_offsetz00_2223;

																					BgL_offsetz00_2223 =
																						(
																						(long) (BgL_offsetz00_2222) -
																						OBJECT_TYPE);
																					{	/* Beta/walk.scm 171 */
																						long BgL_modz00_2224;

																						{	/* Beta/walk.scm 171 */
																							int BgL_arg2645z00_2225;

																							BgL_arg2645z00_2225 =
																								(int) (((long) 16));
																							{	/* Beta/walk.scm 171 */
																								long BgL_auxz00_2934;

																								BgL_auxz00_2934 =
																									(long) (BgL_arg2645z00_2225);
																								BgL_modz00_2224 =
																									(BgL_offsetz00_2223 /
																									BgL_auxz00_2934);
																						}}
																						{	/* Beta/walk.scm 171 */
																							long BgL_restz00_2226;

																							{	/* Beta/walk.scm 171 */
																								int BgL_arg2644z00_2227;

																								BgL_arg2644z00_2227 =
																									(int) (((long) 16));
																								{	/* Beta/walk.scm 171 */
																									long BgL_auxz00_2938;

																									BgL_auxz00_2938 =
																										(long)
																										(BgL_arg2644z00_2227);
																									BgL_restz00_2226 =
																										(BgL_offsetz00_2223 %
																										BgL_auxz00_2938);
																							}}
																							{	/* Beta/walk.scm 171 */

																								BgL_method3273z00_2216 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_2221,
																										(int) (BgL_modz00_2224)),
																									(int) (BgL_restz00_2226));
																}}}}}}}}
																BgL_res3570z00_2241 =
																	(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																	(BgL_method3273z00_2216)
																	(BgL_method3273z00_2216,
																		(obj_t) (BgL_nodez00_2214),
																		BgL_stackz00_1386, BEOA));
														}}
														BgL_arg3466z00_1399 = BgL_res3570z00_2241;
												}}
												{
													obj_t BgL_auxz00_2951;

													BgL_sfunz00_bglt BgL_auxz00_2949;

													BgL_auxz00_2951 = (obj_t) (BgL_arg3466z00_1399);
													BgL_auxz00_2949 =
														(BgL_sfunz00_bglt) (BgL_funz00_1398);
													((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2949))->
															BgL_bodyz00) =
														((obj_t) BgL_auxz00_2951), BUNSPEC);
									}}}}
									{
										obj_t BgL_l3269z00_2954;

										BgL_l3269z00_2954 = CDR(BgL_l3269z00_1394);
										BgL_l3269z00_1394 = BgL_l3269z00_2954;
										goto BgL_zc3anonymousza33464ze3z83_1395;
									}
								}
							else
								{	/* Beta/walk.scm 169 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_2889 = BgL_nodez00_1385;
					return (obj_t) (BgL_auxz00_2889);
				}
			}
		}
	}



/* node-beta!-box-set!3299 */
	obj_t BGl_nodezd2betaz12zd2boxzd2setz123299zd2zzbeta_walkz00(obj_t
		BgL_envz00_2459, obj_t BgL_nodez00_2460, obj_t BgL_stackz00_2461)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 158 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1375;

				obj_t BgL_stackz00_1376;

				{	/* Beta/walk.scm 159 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_2958;

					BgL_nodez00_1375 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2460);
					BgL_stackz00_1376 = BgL_stackz00_2461;
					{	/* Beta/walk.scm 159 */
						BgL_nodez00_bglt BgL_arg3457z00_1379;

						{	/* Beta/walk.scm 159 */
							BgL_varz00_bglt BgL_arg3458z00_1380;

							BgL_arg3458z00_1380 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1375))->
								BgL_varz00);
							{	/* Beta/walk.scm 159 */
								BgL_nodez00_bglt BgL_res3561z00_2144;

								{	/* Beta/walk.scm 159 */
									BgL_nodez00_bglt BgL_nodez00_2117;

									BgL_nodez00_2117 = (BgL_nodez00_bglt) (BgL_arg3458z00_1380);
									{	/* Beta/walk.scm 159 */
										obj_t BgL_method3273z00_2119;

										{	/* Beta/walk.scm 159 */
											BgL_objectz00_bglt BgL_objz00_2120;

											BgL_objz00_2120 = (BgL_objectz00_bglt) (BgL_nodez00_2117);
											{	/* Beta/walk.scm 159 */
												long BgL_objzd2classzd2numz00_2121;

												BgL_objzd2classzd2numz00_2121 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2120);
												{	/* Beta/walk.scm 159 */
													obj_t BgL_arg2643z00_2122;

													BgL_arg2643z00_2122 =
														PROCEDURE_REF
														(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
														(int) (((long) 1)));
													{	/* Beta/walk.scm 159 */
														obj_t BgL_arrayz00_2124;

														int BgL_offsetz00_2125;

														BgL_arrayz00_2124 = BgL_arg2643z00_2122;
														BgL_offsetz00_2125 =
															(int) (BgL_objzd2classzd2numz00_2121);
														{	/* Beta/walk.scm 159 */
															long BgL_offsetz00_2126;

															BgL_offsetz00_2126 =
																((long) (BgL_offsetz00_2125) - OBJECT_TYPE);
															{	/* Beta/walk.scm 159 */
																long BgL_modz00_2127;

																{	/* Beta/walk.scm 159 */
																	int BgL_arg2645z00_2128;

																	BgL_arg2645z00_2128 = (int) (((long) 16));
																	{	/* Beta/walk.scm 159 */
																		long BgL_auxz00_2969;

																		BgL_auxz00_2969 =
																			(long) (BgL_arg2645z00_2128);
																		BgL_modz00_2127 =
																			(BgL_offsetz00_2126 / BgL_auxz00_2969);
																}}
																{	/* Beta/walk.scm 159 */
																	long BgL_restz00_2129;

																	{	/* Beta/walk.scm 159 */
																		int BgL_arg2644z00_2130;

																		BgL_arg2644z00_2130 = (int) (((long) 16));
																		{	/* Beta/walk.scm 159 */
																			long BgL_auxz00_2973;

																			BgL_auxz00_2973 =
																				(long) (BgL_arg2644z00_2130);
																			BgL_restz00_2129 =
																				(BgL_offsetz00_2126 % BgL_auxz00_2973);
																	}}
																	{	/* Beta/walk.scm 159 */

																		BgL_method3273z00_2119 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2124,
																				(int) (BgL_modz00_2127)),
																			(int) (BgL_restz00_2129));
										}}}}}}}}
										BgL_res3561z00_2144 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3273z00_2119) (BgL_method3273z00_2119,
												(obj_t) (BgL_nodez00_2117), BgL_stackz00_1376, BEOA));
								}}
								BgL_arg3457z00_1379 = BgL_res3561z00_2144;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_2984;

							BgL_auxz00_2984 = (BgL_varz00_bglt) (BgL_arg3457z00_1379);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1375))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_2984), BUNSPEC);
					}}
					{	/* Beta/walk.scm 160 */
						BgL_nodez00_bglt BgL_arg3459z00_1381;

						{	/* Beta/walk.scm 160 */
							BgL_nodez00_bglt BgL_arg3460z00_1382;

							BgL_arg3460z00_1382 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1375))->
								BgL_valuez00);
							{	/* Beta/walk.scm 160 */
								BgL_nodez00_bglt BgL_res3564z00_2175;

								{	/* Beta/walk.scm 160 */
									obj_t BgL_method3273z00_2150;

									{	/* Beta/walk.scm 160 */
										BgL_objectz00_bglt BgL_objz00_2151;

										BgL_objz00_2151 =
											(BgL_objectz00_bglt) (BgL_arg3460z00_1382);
										{	/* Beta/walk.scm 160 */
											long BgL_objzd2classzd2numz00_2152;

											BgL_objzd2classzd2numz00_2152 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2151);
											{	/* Beta/walk.scm 160 */
												obj_t BgL_arg2643z00_2153;

												BgL_arg2643z00_2153 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
													(int) (((long) 1)));
												{	/* Beta/walk.scm 160 */
													obj_t BgL_arrayz00_2155;

													int BgL_offsetz00_2156;

													BgL_arrayz00_2155 = BgL_arg2643z00_2153;
													BgL_offsetz00_2156 =
														(int) (BgL_objzd2classzd2numz00_2152);
													{	/* Beta/walk.scm 160 */
														long BgL_offsetz00_2157;

														BgL_offsetz00_2157 =
															((long) (BgL_offsetz00_2156) - OBJECT_TYPE);
														{	/* Beta/walk.scm 160 */
															long BgL_modz00_2158;

															{	/* Beta/walk.scm 160 */
																int BgL_arg2645z00_2159;

																BgL_arg2645z00_2159 = (int) (((long) 16));
																{	/* Beta/walk.scm 160 */
																	long BgL_auxz00_2996;

																	BgL_auxz00_2996 =
																		(long) (BgL_arg2645z00_2159);
																	BgL_modz00_2158 =
																		(BgL_offsetz00_2157 / BgL_auxz00_2996);
															}}
															{	/* Beta/walk.scm 160 */
																long BgL_restz00_2160;

																{	/* Beta/walk.scm 160 */
																	int BgL_arg2644z00_2161;

																	BgL_arg2644z00_2161 = (int) (((long) 16));
																	{	/* Beta/walk.scm 160 */
																		long BgL_auxz00_3000;

																		BgL_auxz00_3000 =
																			(long) (BgL_arg2644z00_2161);
																		BgL_restz00_2160 =
																			(BgL_offsetz00_2157 % BgL_auxz00_3000);
																}}
																{	/* Beta/walk.scm 160 */

																	BgL_method3273z00_2150 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2155,
																			(int) (BgL_modz00_2158)),
																		(int) (BgL_restz00_2160));
									}}}}}}}}
									BgL_res3564z00_2175 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3273z00_2150)
										(BgL_method3273z00_2150, (obj_t) (BgL_arg3460z00_1382),
											BgL_stackz00_1376, BEOA));
								}
								BgL_arg3459z00_1381 = BgL_res3564z00_2175;
						}}
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1375))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3459z00_1381), BUNSPEC);
					}
					BgL_auxz00_2958 = BgL_nodez00_1375;
					return (obj_t) (BgL_auxz00_2958);
				}
			}
		}
	}



/* node-beta!-box-ref3297 */
	obj_t BGl_nodezd2betaz12zd2boxzd2ref3297zc0zzbeta_walkz00(obj_t
		BgL_envz00_2462, obj_t BgL_nodez00_2463, obj_t BgL_stackz00_2464)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 151 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1367;

				obj_t BgL_stackz00_1368;

				{	/* Beta/walk.scm 152 */
					BgL_boxzd2refzd2_bglt BgL_auxz00_3014;

					BgL_nodez00_1367 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2463);
					BgL_stackz00_1368 = BgL_stackz00_2464;
					{	/* Beta/walk.scm 152 */
						BgL_nodez00_bglt BgL_arg3454z00_2083;

						{	/* Beta/walk.scm 152 */
							BgL_varz00_bglt BgL_arg3455z00_2084;

							BgL_arg3455z00_2084 =
								(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1367))->BgL_varz00);
							{	/* Beta/walk.scm 152 */
								BgL_nodez00_bglt BgL_res3558z00_2113;

								{	/* Beta/walk.scm 152 */
									BgL_nodez00_bglt BgL_nodez00_2086;

									BgL_nodez00_2086 = (BgL_nodez00_bglt) (BgL_arg3455z00_2084);
									{	/* Beta/walk.scm 152 */
										obj_t BgL_method3273z00_2088;

										{	/* Beta/walk.scm 152 */
											BgL_objectz00_bglt BgL_objz00_2089;

											BgL_objz00_2089 = (BgL_objectz00_bglt) (BgL_nodez00_2086);
											{	/* Beta/walk.scm 152 */
												long BgL_objzd2classzd2numz00_2090;

												BgL_objzd2classzd2numz00_2090 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2089);
												{	/* Beta/walk.scm 152 */
													obj_t BgL_arg2643z00_2091;

													BgL_arg2643z00_2091 =
														PROCEDURE_REF
														(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
														(int) (((long) 1)));
													{	/* Beta/walk.scm 152 */
														obj_t BgL_arrayz00_2093;

														int BgL_offsetz00_2094;

														BgL_arrayz00_2093 = BgL_arg2643z00_2091;
														BgL_offsetz00_2094 =
															(int) (BgL_objzd2classzd2numz00_2090);
														{	/* Beta/walk.scm 152 */
															long BgL_offsetz00_2095;

															BgL_offsetz00_2095 =
																((long) (BgL_offsetz00_2094) - OBJECT_TYPE);
															{	/* Beta/walk.scm 152 */
																long BgL_modz00_2096;

																{	/* Beta/walk.scm 152 */
																	int BgL_arg2645z00_2097;

																	BgL_arg2645z00_2097 = (int) (((long) 16));
																	{	/* Beta/walk.scm 152 */
																		long BgL_auxz00_3025;

																		BgL_auxz00_3025 =
																			(long) (BgL_arg2645z00_2097);
																		BgL_modz00_2096 =
																			(BgL_offsetz00_2095 / BgL_auxz00_3025);
																}}
																{	/* Beta/walk.scm 152 */
																	long BgL_restz00_2098;

																	{	/* Beta/walk.scm 152 */
																		int BgL_arg2644z00_2099;

																		BgL_arg2644z00_2099 = (int) (((long) 16));
																		{	/* Beta/walk.scm 152 */
																			long BgL_auxz00_3029;

																			BgL_auxz00_3029 =
																				(long) (BgL_arg2644z00_2099);
																			BgL_restz00_2098 =
																				(BgL_offsetz00_2095 % BgL_auxz00_3029);
																	}}
																	{	/* Beta/walk.scm 152 */

																		BgL_method3273z00_2088 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2093,
																				(int) (BgL_modz00_2096)),
																			(int) (BgL_restz00_2098));
										}}}}}}}}
										BgL_res3558z00_2113 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3273z00_2088) (BgL_method3273z00_2088,
												(obj_t) (BgL_nodez00_2086), BgL_stackz00_1368, BEOA));
								}}
								BgL_arg3454z00_2083 = BgL_res3558z00_2113;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3040;

							BgL_auxz00_3040 = (BgL_varz00_bglt) (BgL_arg3454z00_2083);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1367))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_3040), BUNSPEC);
					}}
					BgL_auxz00_3014 = BgL_nodez00_1367;
					return (obj_t) (BgL_auxz00_3014);
				}
			}
		}
	}



/* node-beta!-make-box3295 */
	obj_t BGl_nodezd2betaz12zd2makezd2box3295zc0zzbeta_walkz00(obj_t
		BgL_envz00_2465, obj_t BgL_nodez00_2466, obj_t BgL_stackz00_2467)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 144 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1359;

				obj_t BgL_stackz00_1360;

				{	/* Beta/walk.scm 145 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_3045;

					BgL_nodez00_1359 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2466);
					BgL_stackz00_1360 = BgL_stackz00_2467;
					{	/* Beta/walk.scm 145 */
						BgL_nodez00_bglt BgL_arg3451z00_2050;

						{	/* Beta/walk.scm 145 */
							BgL_nodez00_bglt BgL_arg3452z00_2051;

							BgL_arg3452z00_2051 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1359))->
								BgL_valuez00);
							{	/* Beta/walk.scm 145 */
								BgL_nodez00_bglt BgL_res3555z00_2080;

								{	/* Beta/walk.scm 145 */
									obj_t BgL_method3273z00_2055;

									{	/* Beta/walk.scm 145 */
										BgL_objectz00_bglt BgL_objz00_2056;

										BgL_objz00_2056 =
											(BgL_objectz00_bglt) (BgL_arg3452z00_2051);
										{	/* Beta/walk.scm 145 */
											long BgL_objzd2classzd2numz00_2057;

											BgL_objzd2classzd2numz00_2057 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2056);
											{	/* Beta/walk.scm 145 */
												obj_t BgL_arg2643z00_2058;

												BgL_arg2643z00_2058 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
													(int) (((long) 1)));
												{	/* Beta/walk.scm 145 */
													obj_t BgL_arrayz00_2060;

													int BgL_offsetz00_2061;

													BgL_arrayz00_2060 = BgL_arg2643z00_2058;
													BgL_offsetz00_2061 =
														(int) (BgL_objzd2classzd2numz00_2057);
													{	/* Beta/walk.scm 145 */
														long BgL_offsetz00_2062;

														BgL_offsetz00_2062 =
															((long) (BgL_offsetz00_2061) - OBJECT_TYPE);
														{	/* Beta/walk.scm 145 */
															long BgL_modz00_2063;

															{	/* Beta/walk.scm 145 */
																int BgL_arg2645z00_2064;

																BgL_arg2645z00_2064 = (int) (((long) 16));
																{	/* Beta/walk.scm 145 */
																	long BgL_auxz00_3055;

																	BgL_auxz00_3055 =
																		(long) (BgL_arg2645z00_2064);
																	BgL_modz00_2063 =
																		(BgL_offsetz00_2062 / BgL_auxz00_3055);
															}}
															{	/* Beta/walk.scm 145 */
																long BgL_restz00_2065;

																{	/* Beta/walk.scm 145 */
																	int BgL_arg2644z00_2066;

																	BgL_arg2644z00_2066 = (int) (((long) 16));
																	{	/* Beta/walk.scm 145 */
																		long BgL_auxz00_3059;

																		BgL_auxz00_3059 =
																			(long) (BgL_arg2644z00_2066);
																		BgL_restz00_2065 =
																			(BgL_offsetz00_2062 % BgL_auxz00_3059);
																}}
																{	/* Beta/walk.scm 145 */

																	BgL_method3273z00_2055 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2060,
																			(int) (BgL_modz00_2063)),
																		(int) (BgL_restz00_2065));
									}}}}}}}}
									BgL_res3555z00_2080 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3273z00_2055)
										(BgL_method3273z00_2055, (obj_t) (BgL_arg3452z00_2051),
											BgL_stackz00_1360, BEOA));
								}
								BgL_arg3451z00_2050 = BgL_res3555z00_2080;
						}}
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1359))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3451z00_2050), BUNSPEC);
					}
					BgL_auxz00_3045 = BgL_nodez00_1359;
					return (obj_t) (BgL_auxz00_3045);
				}
			}
		}
	}



/* node-beta!-select3293 */
	obj_t BGl_nodezd2betaz12zd2select3293z12zzbeta_walkz00(obj_t BgL_envz00_2468,
		obj_t BgL_nodez00_2469, obj_t BgL_stackz00_2470)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 134 */
			{
				BgL_selectz00_bglt BgL_nodez00_1341;

				obj_t BgL_stackz00_1342;

				{	/* Beta/walk.scm 135 */
					BgL_selectz00_bglt BgL_auxz00_3073;

					BgL_nodez00_1341 = (BgL_selectz00_bglt) (BgL_nodez00_2469);
					BgL_stackz00_1342 = BgL_stackz00_2470;
					{	/* Beta/walk.scm 135 */
						BgL_nodez00_bglt BgL_arg3443z00_1345;

						{	/* Beta/walk.scm 135 */
							BgL_nodez00_bglt BgL_arg3444z00_1346;

							BgL_arg3444z00_1346 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1341))->BgL_testz00);
							{	/* Beta/walk.scm 135 */
								BgL_nodez00_bglt BgL_res3549z00_2012;

								{	/* Beta/walk.scm 135 */
									obj_t BgL_method3273z00_1987;

									{	/* Beta/walk.scm 135 */
										BgL_objectz00_bglt BgL_objz00_1988;

										BgL_objz00_1988 =
											(BgL_objectz00_bglt) (BgL_arg3444z00_1346);
										{	/* Beta/walk.scm 135 */
											long BgL_objzd2classzd2numz00_1989;

											BgL_objzd2classzd2numz00_1989 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1988);
											{	/* Beta/walk.scm 135 */
												obj_t BgL_arg2643z00_1990;

												BgL_arg2643z00_1990 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
													(int) (((long) 1)));
												{	/* Beta/walk.scm 135 */
													obj_t BgL_arrayz00_1992;

													int BgL_offsetz00_1993;

													BgL_arrayz00_1992 = BgL_arg2643z00_1990;
													BgL_offsetz00_1993 =
														(int) (BgL_objzd2classzd2numz00_1989);
													{	/* Beta/walk.scm 135 */
														long BgL_offsetz00_1994;

														BgL_offsetz00_1994 =
															((long) (BgL_offsetz00_1993) - OBJECT_TYPE);
														{	/* Beta/walk.scm 135 */
															long BgL_modz00_1995;

															{	/* Beta/walk.scm 135 */
																int BgL_arg2645z00_1996;

																BgL_arg2645z00_1996 = (int) (((long) 16));
																{	/* Beta/walk.scm 135 */
																	long BgL_auxz00_3083;

																	BgL_auxz00_3083 =
																		(long) (BgL_arg2645z00_1996);
																	BgL_modz00_1995 =
																		(BgL_offsetz00_1994 / BgL_auxz00_3083);
															}}
															{	/* Beta/walk.scm 135 */
																long BgL_restz00_1997;

																{	/* Beta/walk.scm 135 */
																	int BgL_arg2644z00_1998;

																	BgL_arg2644z00_1998 = (int) (((long) 16));
																	{	/* Beta/walk.scm 135 */
																		long BgL_auxz00_3087;

																		BgL_auxz00_3087 =
																			(long) (BgL_arg2644z00_1998);
																		BgL_restz00_1997 =
																			(BgL_offsetz00_1994 % BgL_auxz00_3087);
																}}
																{	/* Beta/walk.scm 135 */

																	BgL_method3273z00_1987 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1992,
																			(int) (BgL_modz00_1995)),
																		(int) (BgL_restz00_1997));
									}}}}}}}}
									BgL_res3549z00_2012 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3273z00_1987)
										(BgL_method3273z00_1987, (obj_t) (BgL_arg3444z00_1346),
											BgL_stackz00_1342, BEOA));
								}
								BgL_arg3443z00_1345 = BgL_res3549z00_2012;
						}}
						((((BgL_selectz00_bglt) CREF(BgL_nodez00_1341))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3443z00_1345), BUNSPEC);
					}
					{	/* Beta/walk.scm 136 */
						obj_t BgL_g3268z00_1347;

						BgL_g3268z00_1347 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1341))->BgL_clausesz00);
						{
							obj_t BgL_l3266z00_1349;

							BgL_l3266z00_1349 = BgL_g3268z00_1347;
						BgL_zc3anonymousza33445ze3z83_1350:
							if (PAIRP(BgL_l3266z00_1349))
								{	/* Beta/walk.scm 138 */
									{	/* Beta/walk.scm 137 */
										obj_t BgL_clausez00_1352;

										BgL_clausez00_1352 = CAR(BgL_l3266z00_1349);
										{	/* Beta/walk.scm 137 */
											BgL_nodez00_bglt BgL_arg3447z00_1353;

											{	/* Beta/walk.scm 137 */
												obj_t BgL_arg3448z00_1354;

												BgL_arg3448z00_1354 = CDR(BgL_clausez00_1352);
												{	/* Beta/walk.scm 137 */
													BgL_nodez00_bglt BgL_res3552z00_2046;

													{	/* Beta/walk.scm 137 */
														BgL_nodez00_bglt BgL_nodez00_2019;

														BgL_nodez00_2019 =
															(BgL_nodez00_bglt) (BgL_arg3448z00_1354);
														{	/* Beta/walk.scm 137 */
															obj_t BgL_method3273z00_2021;

															{	/* Beta/walk.scm 137 */
																BgL_objectz00_bglt BgL_objz00_2022;

																BgL_objz00_2022 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2019);
																{	/* Beta/walk.scm 137 */
																	long BgL_objzd2classzd2numz00_2023;

																	BgL_objzd2classzd2numz00_2023 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2022);
																	{	/* Beta/walk.scm 137 */
																		obj_t BgL_arg2643z00_2024;

																		BgL_arg2643z00_2024 =
																			PROCEDURE_REF
																			(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
																			(int) (((long) 1)));
																		{	/* Beta/walk.scm 137 */
																			obj_t BgL_arrayz00_2026;

																			int BgL_offsetz00_2027;

																			BgL_arrayz00_2026 = BgL_arg2643z00_2024;
																			BgL_offsetz00_2027 =
																				(int) (BgL_objzd2classzd2numz00_2023);
																			{	/* Beta/walk.scm 137 */
																				long BgL_offsetz00_2028;

																				BgL_offsetz00_2028 =
																					(
																					(long) (BgL_offsetz00_2027) -
																					OBJECT_TYPE);
																				{	/* Beta/walk.scm 137 */
																					long BgL_modz00_2029;

																					{	/* Beta/walk.scm 137 */
																						int BgL_arg2645z00_2030;

																						BgL_arg2645z00_2030 =
																							(int) (((long) 16));
																						{	/* Beta/walk.scm 137 */
																							long BgL_auxz00_3113;

																							BgL_auxz00_3113 =
																								(long) (BgL_arg2645z00_2030);
																							BgL_modz00_2029 =
																								(BgL_offsetz00_2028 /
																								BgL_auxz00_3113);
																					}}
																					{	/* Beta/walk.scm 137 */
																						long BgL_restz00_2031;

																						{	/* Beta/walk.scm 137 */
																							int BgL_arg2644z00_2032;

																							BgL_arg2644z00_2032 =
																								(int) (((long) 16));
																							{	/* Beta/walk.scm 137 */
																								long BgL_auxz00_3117;

																								BgL_auxz00_3117 =
																									(long) (BgL_arg2644z00_2032);
																								BgL_restz00_2031 =
																									(BgL_offsetz00_2028 %
																									BgL_auxz00_3117);
																						}}
																						{	/* Beta/walk.scm 137 */

																							BgL_method3273z00_2021 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2026,
																									(int) (BgL_modz00_2029)),
																								(int) (BgL_restz00_2031));
															}}}}}}}}
															BgL_res3552z00_2046 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3273z00_2021)
																(BgL_method3273z00_2021,
																	(obj_t) (BgL_nodez00_2019), BgL_stackz00_1342,
																	BEOA));
													}}
													BgL_arg3447z00_1353 = BgL_res3552z00_2046;
											}}
											{	/* Beta/walk.scm 137 */
												obj_t BgL_auxz00_3128;

												BgL_auxz00_3128 = (obj_t) (BgL_arg3447z00_1353);
												SET_CDR(BgL_clausez00_1352, BgL_auxz00_3128);
									}}}
									{
										obj_t BgL_l3266z00_3131;

										BgL_l3266z00_3131 = CDR(BgL_l3266z00_1349);
										BgL_l3266z00_1349 = BgL_l3266z00_3131;
										goto BgL_zc3anonymousza33445ze3z83_1350;
									}
								}
							else
								{	/* Beta/walk.scm 138 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_3073 = BgL_nodez00_1341;
					return (obj_t) (BgL_auxz00_3073);
				}
			}
		}
	}



/* node-beta!-fail3291 */
	obj_t BGl_nodezd2betaz12zd2fail3291z12zzbeta_walkz00(obj_t BgL_envz00_2471,
		obj_t BgL_nodez00_2472, obj_t BgL_stackz00_2473)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 125 */
			{
				BgL_failz00_bglt BgL_nodez00_1329;

				obj_t BgL_stackz00_1330;

				{	/* Beta/walk.scm 126 */
					BgL_failz00_bglt BgL_auxz00_3135;

					BgL_nodez00_1329 = (BgL_failz00_bglt) (BgL_nodez00_2472);
					BgL_stackz00_1330 = BgL_stackz00_2473;
					{	/* Beta/walk.scm 126 */
						BgL_nodez00_bglt BgL_arg3436z00_1333;

						{	/* Beta/walk.scm 126 */
							BgL_nodez00_bglt BgL_arg3437z00_1334;

							BgL_arg3437z00_1334 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1329))->BgL_procz00);
							{	/* Beta/walk.scm 126 */
								BgL_nodez00_bglt BgL_res3540z00_1919;

								{	/* Beta/walk.scm 126 */
									obj_t BgL_method3273z00_1894;

									{	/* Beta/walk.scm 126 */
										BgL_objectz00_bglt BgL_objz00_1895;

										BgL_objz00_1895 =
											(BgL_objectz00_bglt) (BgL_arg3437z00_1334);
										{	/* Beta/walk.scm 126 */
											long BgL_objzd2classzd2numz00_1896;

											BgL_objzd2classzd2numz00_1896 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1895);
											{	/* Beta/walk.scm 126 */
												obj_t BgL_arg2643z00_1897;

												BgL_arg2643z00_1897 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
													(int) (((long) 1)));
												{	/* Beta/walk.scm 126 */
													obj_t BgL_arrayz00_1899;

													int BgL_offsetz00_1900;

													BgL_arrayz00_1899 = BgL_arg2643z00_1897;
													BgL_offsetz00_1900 =
														(int) (BgL_objzd2classzd2numz00_1896);
													{	/* Beta/walk.scm 126 */
														long BgL_offsetz00_1901;

														BgL_offsetz00_1901 =
															((long) (BgL_offsetz00_1900) - OBJECT_TYPE);
														{	/* Beta/walk.scm 126 */
															long BgL_modz00_1902;

															{	/* Beta/walk.scm 126 */
																int BgL_arg2645z00_1903;

																BgL_arg2645z00_1903 = (int) (((long) 16));
																{	/* Beta/walk.scm 126 */
																	long BgL_auxz00_3145;

																	BgL_auxz00_3145 =
																		(long) (BgL_arg2645z00_1903);
																	BgL_modz00_1902 =
																		(BgL_offsetz00_1901 / BgL_auxz00_3145);
															}}
															{	/* Beta/walk.scm 126 */
																long BgL_restz00_1904;

																{	/* Beta/walk.scm 126 */
																	int BgL_arg2644z00_1905;

																	BgL_arg2644z00_1905 = (int) (((long) 16));
																	{	/* Beta/walk.scm 126 */
																		long BgL_auxz00_3149;

																		BgL_auxz00_3149 =
																			(long) (BgL_arg2644z00_1905);
																		BgL_restz00_1904 =
																			(BgL_offsetz00_1901 % BgL_auxz00_3149);
																}}
																{	/* Beta/walk.scm 126 */

																	BgL_method3273z00_1894 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1899,
																			(int) (BgL_modz00_1902)),
																		(int) (BgL_restz00_1904));
									}}}}}}}}
									BgL_res3540z00_1919 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3273z00_1894)
										(BgL_method3273z00_1894, (obj_t) (BgL_arg3437z00_1334),
											BgL_stackz00_1330, BEOA));
								}
								BgL_arg3436z00_1333 = BgL_res3540z00_1919;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1329))->BgL_procz00) =
							((BgL_nodez00_bglt) BgL_arg3436z00_1333), BUNSPEC);
					}
					{	/* Beta/walk.scm 127 */
						BgL_nodez00_bglt BgL_arg3438z00_1335;

						{	/* Beta/walk.scm 127 */
							BgL_nodez00_bglt BgL_arg3439z00_1336;

							BgL_arg3439z00_1336 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1329))->BgL_msgz00);
							{	/* Beta/walk.scm 127 */
								BgL_nodez00_bglt BgL_res3543z00_1950;

								{	/* Beta/walk.scm 127 */
									obj_t BgL_method3273z00_1925;

									{	/* Beta/walk.scm 127 */
										BgL_objectz00_bglt BgL_objz00_1926;

										BgL_objz00_1926 =
											(BgL_objectz00_bglt) (BgL_arg3439z00_1336);
										{	/* Beta/walk.scm 127 */
											long BgL_objzd2classzd2numz00_1927;

											BgL_objzd2classzd2numz00_1927 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1926);
											{	/* Beta/walk.scm 127 */
												obj_t BgL_arg2643z00_1928;

												BgL_arg2643z00_1928 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
													(int) (((long) 1)));
												{	/* Beta/walk.scm 127 */
													obj_t BgL_arrayz00_1930;

													int BgL_offsetz00_1931;

													BgL_arrayz00_1930 = BgL_arg2643z00_1928;
													BgL_offsetz00_1931 =
														(int) (BgL_objzd2classzd2numz00_1927);
													{	/* Beta/walk.scm 127 */
														long BgL_offsetz00_1932;

														BgL_offsetz00_1932 =
															((long) (BgL_offsetz00_1931) - OBJECT_TYPE);
														{	/* Beta/walk.scm 127 */
															long BgL_modz00_1933;

															{	/* Beta/walk.scm 127 */
																int BgL_arg2645z00_1934;

																BgL_arg2645z00_1934 = (int) (((long) 16));
																{	/* Beta/walk.scm 127 */
																	long BgL_auxz00_3170;

																	BgL_auxz00_3170 =
																		(long) (BgL_arg2645z00_1934);
																	BgL_modz00_1933 =
																		(BgL_offsetz00_1932 / BgL_auxz00_3170);
															}}
															{	/* Beta/walk.scm 127 */
																long BgL_restz00_1935;

																{	/* Beta/walk.scm 127 */
																	int BgL_arg2644z00_1936;

																	BgL_arg2644z00_1936 = (int) (((long) 16));
																	{	/* Beta/walk.scm 127 */
																		long BgL_auxz00_3174;

																		BgL_auxz00_3174 =
																			(long) (BgL_arg2644z00_1936);
																		BgL_restz00_1935 =
																			(BgL_offsetz00_1932 % BgL_auxz00_3174);
																}}
																{	/* Beta/walk.scm 127 */

																	BgL_method3273z00_1925 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1930,
																			(int) (BgL_modz00_1933)),
																		(int) (BgL_restz00_1935));
									}}}}}}}}
									BgL_res3543z00_1950 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3273z00_1925)
										(BgL_method3273z00_1925, (obj_t) (BgL_arg3439z00_1336),
											BgL_stackz00_1330, BEOA));
								}
								BgL_arg3438z00_1335 = BgL_res3543z00_1950;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1329))->BgL_msgz00) =
							((BgL_nodez00_bglt) BgL_arg3438z00_1335), BUNSPEC);
					}
					{	/* Beta/walk.scm 128 */
						BgL_nodez00_bglt BgL_arg3440z00_1337;

						{	/* Beta/walk.scm 128 */
							BgL_nodez00_bglt BgL_arg3441z00_1338;

							BgL_arg3441z00_1338 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1329))->BgL_objz00);
							{	/* Beta/walk.scm 128 */
								BgL_nodez00_bglt BgL_res3546z00_1981;

								{	/* Beta/walk.scm 128 */
									obj_t BgL_method3273z00_1956;

									{	/* Beta/walk.scm 128 */
										BgL_objectz00_bglt BgL_objz00_1957;

										BgL_objz00_1957 =
											(BgL_objectz00_bglt) (BgL_arg3441z00_1338);
										{	/* Beta/walk.scm 128 */
											long BgL_objzd2classzd2numz00_1958;

											BgL_objzd2classzd2numz00_1958 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1957);
											{	/* Beta/walk.scm 128 */
												obj_t BgL_arg2643z00_1959;

												BgL_arg2643z00_1959 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
													(int) (((long) 1)));
												{	/* Beta/walk.scm 128 */
													obj_t BgL_arrayz00_1961;

													int BgL_offsetz00_1962;

													BgL_arrayz00_1961 = BgL_arg2643z00_1959;
													BgL_offsetz00_1962 =
														(int) (BgL_objzd2classzd2numz00_1958);
													{	/* Beta/walk.scm 128 */
														long BgL_offsetz00_1963;

														BgL_offsetz00_1963 =
															((long) (BgL_offsetz00_1962) - OBJECT_TYPE);
														{	/* Beta/walk.scm 128 */
															long BgL_modz00_1964;

															{	/* Beta/walk.scm 128 */
																int BgL_arg2645z00_1965;

																BgL_arg2645z00_1965 = (int) (((long) 16));
																{	/* Beta/walk.scm 128 */
																	long BgL_auxz00_3195;

																	BgL_auxz00_3195 =
																		(long) (BgL_arg2645z00_1965);
																	BgL_modz00_1964 =
																		(BgL_offsetz00_1963 / BgL_auxz00_3195);
															}}
															{	/* Beta/walk.scm 128 */
																long BgL_restz00_1966;

																{	/* Beta/walk.scm 128 */
																	int BgL_arg2644z00_1967;

																	BgL_arg2644z00_1967 = (int) (((long) 16));
																	{	/* Beta/walk.scm 128 */
																		long BgL_auxz00_3199;

																		BgL_auxz00_3199 =
																			(long) (BgL_arg2644z00_1967);
																		BgL_restz00_1966 =
																			(BgL_offsetz00_1963 % BgL_auxz00_3199);
																}}
																{	/* Beta/walk.scm 128 */

																	BgL_method3273z00_1956 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1961,
																			(int) (BgL_modz00_1964)),
																		(int) (BgL_restz00_1966));
									}}}}}}}}
									BgL_res3546z00_1981 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3273z00_1956)
										(BgL_method3273z00_1956, (obj_t) (BgL_arg3441z00_1338),
											BgL_stackz00_1330, BEOA));
								}
								BgL_arg3440z00_1337 = BgL_res3546z00_1981;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1329))->BgL_objz00) =
							((BgL_nodez00_bglt) BgL_arg3440z00_1337), BUNSPEC);
					}
					BgL_auxz00_3135 = BgL_nodez00_1329;
					return (obj_t) (BgL_auxz00_3135);
				}
			}
		}
	}



/* node-beta!-condition3289 */
	obj_t BGl_nodezd2betaz12zd2condition3289z12zzbeta_walkz00(obj_t
		BgL_envz00_2474, obj_t BgL_nodez00_2475, obj_t BgL_stackz00_2476)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 116 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1317;

				obj_t BgL_stackz00_1318;

				{	/* Beta/walk.scm 117 */
					BgL_conditionalz00_bglt BgL_auxz00_3213;

					BgL_nodez00_1317 = (BgL_conditionalz00_bglt) (BgL_nodez00_2475);
					BgL_stackz00_1318 = BgL_stackz00_2476;
					{	/* Beta/walk.scm 117 */
						BgL_nodez00_bglt BgL_arg3427z00_1321;

						{	/* Beta/walk.scm 117 */
							BgL_nodez00_bglt BgL_arg3430z00_1322;

							BgL_arg3430z00_1322 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1317))->
								BgL_testz00);
							{	/* Beta/walk.scm 117 */
								BgL_nodez00_bglt BgL_res3531z00_1826;

								{	/* Beta/walk.scm 117 */
									obj_t BgL_method3273z00_1801;

									{	/* Beta/walk.scm 117 */
										BgL_objectz00_bglt BgL_objz00_1802;

										BgL_objz00_1802 =
											(BgL_objectz00_bglt) (BgL_arg3430z00_1322);
										{	/* Beta/walk.scm 117 */
											long BgL_objzd2classzd2numz00_1803;

											BgL_objzd2classzd2numz00_1803 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1802);
											{	/* Beta/walk.scm 117 */
												obj_t BgL_arg2643z00_1804;

												BgL_arg2643z00_1804 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
													(int) (((long) 1)));
												{	/* Beta/walk.scm 117 */
													obj_t BgL_arrayz00_1806;

													int BgL_offsetz00_1807;

													BgL_arrayz00_1806 = BgL_arg2643z00_1804;
													BgL_offsetz00_1807 =
														(int) (BgL_objzd2classzd2numz00_1803);
													{	/* Beta/walk.scm 117 */
														long BgL_offsetz00_1808;

														BgL_offsetz00_1808 =
															((long) (BgL_offsetz00_1807) - OBJECT_TYPE);
														{	/* Beta/walk.scm 117 */
															long BgL_modz00_1809;

															{	/* Beta/walk.scm 117 */
																int BgL_arg2645z00_1810;

																BgL_arg2645z00_1810 = (int) (((long) 16));
																{	/* Beta/walk.scm 117 */
																	long BgL_auxz00_3223;

																	BgL_auxz00_3223 =
																		(long) (BgL_arg2645z00_1810);
																	BgL_modz00_1809 =
																		(BgL_offsetz00_1808 / BgL_auxz00_3223);
															}}
															{	/* Beta/walk.scm 117 */
																long BgL_restz00_1811;

																{	/* Beta/walk.scm 117 */
																	int BgL_arg2644z00_1812;

																	BgL_arg2644z00_1812 = (int) (((long) 16));
																	{	/* Beta/walk.scm 117 */
																		long BgL_auxz00_3227;

																		BgL_auxz00_3227 =
																			(long) (BgL_arg2644z00_1812);
																		BgL_restz00_1811 =
																			(BgL_offsetz00_1808 % BgL_auxz00_3227);
																}}
																{	/* Beta/walk.scm 117 */

																	BgL_method3273z00_1801 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1806,
																			(int) (BgL_modz00_1809)),
																		(int) (BgL_restz00_1811));
									}}}}}}}}
									BgL_res3531z00_1826 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3273z00_1801)
										(BgL_method3273z00_1801, (obj_t) (BgL_arg3430z00_1322),
											BgL_stackz00_1318, BEOA));
								}
								BgL_arg3427z00_1321 = BgL_res3531z00_1826;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1317))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3427z00_1321), BUNSPEC);
					}
					{	/* Beta/walk.scm 118 */
						BgL_nodez00_bglt BgL_arg3431z00_1323;

						{	/* Beta/walk.scm 118 */
							BgL_nodez00_bglt BgL_arg3432z00_1324;

							BgL_arg3432z00_1324 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1317))->
								BgL_truez00);
							{	/* Beta/walk.scm 118 */
								BgL_nodez00_bglt BgL_res3534z00_1857;

								{	/* Beta/walk.scm 118 */
									obj_t BgL_method3273z00_1832;

									{	/* Beta/walk.scm 118 */
										BgL_objectz00_bglt BgL_objz00_1833;

										BgL_objz00_1833 =
											(BgL_objectz00_bglt) (BgL_arg3432z00_1324);
										{	/* Beta/walk.scm 118 */
											long BgL_objzd2classzd2numz00_1834;

											BgL_objzd2classzd2numz00_1834 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1833);
											{	/* Beta/walk.scm 118 */
												obj_t BgL_arg2643z00_1835;

												BgL_arg2643z00_1835 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
													(int) (((long) 1)));
												{	/* Beta/walk.scm 118 */
													obj_t BgL_arrayz00_1837;

													int BgL_offsetz00_1838;

													BgL_arrayz00_1837 = BgL_arg2643z00_1835;
													BgL_offsetz00_1838 =
														(int) (BgL_objzd2classzd2numz00_1834);
													{	/* Beta/walk.scm 118 */
														long BgL_offsetz00_1839;

														BgL_offsetz00_1839 =
															((long) (BgL_offsetz00_1838) - OBJECT_TYPE);
														{	/* Beta/walk.scm 118 */
															long BgL_modz00_1840;

															{	/* Beta/walk.scm 118 */
																int BgL_arg2645z00_1841;

																BgL_arg2645z00_1841 = (int) (((long) 16));
																{	/* Beta/walk.scm 118 */
																	long BgL_auxz00_3248;

																	BgL_auxz00_3248 =
																		(long) (BgL_arg2645z00_1841);
																	BgL_modz00_1840 =
																		(BgL_offsetz00_1839 / BgL_auxz00_3248);
															}}
															{	/* Beta/walk.scm 118 */
																long BgL_restz00_1842;

																{	/* Beta/walk.scm 118 */
																	int BgL_arg2644z00_1843;

																	BgL_arg2644z00_1843 = (int) (((long) 16));
																	{	/* Beta/walk.scm 118 */
																		long BgL_auxz00_3252;

																		BgL_auxz00_3252 =
																			(long) (BgL_arg2644z00_1843);
																		BgL_restz00_1842 =
																			(BgL_offsetz00_1839 % BgL_auxz00_3252);
																}}
																{	/* Beta/walk.scm 118 */

																	BgL_method3273z00_1832 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1837,
																			(int) (BgL_modz00_1840)),
																		(int) (BgL_restz00_1842));
									}}}}}}}}
									BgL_res3534z00_1857 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3273z00_1832)
										(BgL_method3273z00_1832, (obj_t) (BgL_arg3432z00_1324),
											BgL_stackz00_1318, BEOA));
								}
								BgL_arg3431z00_1323 = BgL_res3534z00_1857;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1317))->BgL_truez00) =
							((BgL_nodez00_bglt) BgL_arg3431z00_1323), BUNSPEC);
					}
					{	/* Beta/walk.scm 119 */
						BgL_nodez00_bglt BgL_arg3433z00_1325;

						{	/* Beta/walk.scm 119 */
							BgL_nodez00_bglt BgL_arg3434z00_1326;

							BgL_arg3434z00_1326 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1317))->
								BgL_falsez00);
							{	/* Beta/walk.scm 119 */
								BgL_nodez00_bglt BgL_res3537z00_1888;

								{	/* Beta/walk.scm 119 */
									obj_t BgL_method3273z00_1863;

									{	/* Beta/walk.scm 119 */
										BgL_objectz00_bglt BgL_objz00_1864;

										BgL_objz00_1864 =
											(BgL_objectz00_bglt) (BgL_arg3434z00_1326);
										{	/* Beta/walk.scm 119 */
											long BgL_objzd2classzd2numz00_1865;

											BgL_objzd2classzd2numz00_1865 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1864);
											{	/* Beta/walk.scm 119 */
												obj_t BgL_arg2643z00_1866;

												BgL_arg2643z00_1866 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
													(int) (((long) 1)));
												{	/* Beta/walk.scm 119 */
													obj_t BgL_arrayz00_1868;

													int BgL_offsetz00_1869;

													BgL_arrayz00_1868 = BgL_arg2643z00_1866;
													BgL_offsetz00_1869 =
														(int) (BgL_objzd2classzd2numz00_1865);
													{	/* Beta/walk.scm 119 */
														long BgL_offsetz00_1870;

														BgL_offsetz00_1870 =
															((long) (BgL_offsetz00_1869) - OBJECT_TYPE);
														{	/* Beta/walk.scm 119 */
															long BgL_modz00_1871;

															{	/* Beta/walk.scm 119 */
																int BgL_arg2645z00_1872;

																BgL_arg2645z00_1872 = (int) (((long) 16));
																{	/* Beta/walk.scm 119 */
																	long BgL_auxz00_3273;

																	BgL_auxz00_3273 =
																		(long) (BgL_arg2645z00_1872);
																	BgL_modz00_1871 =
																		(BgL_offsetz00_1870 / BgL_auxz00_3273);
															}}
															{	/* Beta/walk.scm 119 */
																long BgL_restz00_1873;

																{	/* Beta/walk.scm 119 */
																	int BgL_arg2644z00_1874;

																	BgL_arg2644z00_1874 = (int) (((long) 16));
																	{	/* Beta/walk.scm 119 */
																		long BgL_auxz00_3277;

																		BgL_auxz00_3277 =
																			(long) (BgL_arg2644z00_1874);
																		BgL_restz00_1873 =
																			(BgL_offsetz00_1870 % BgL_auxz00_3277);
																}}
																{	/* Beta/walk.scm 119 */

																	BgL_method3273z00_1863 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1868,
																			(int) (BgL_modz00_1871)),
																		(int) (BgL_restz00_1873));
									}}}}}}}}
									BgL_res3537z00_1888 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3273z00_1863)
										(BgL_method3273z00_1863, (obj_t) (BgL_arg3434z00_1326),
											BgL_stackz00_1318, BEOA));
								}
								BgL_arg3433z00_1325 = BgL_res3537z00_1888;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1317))->
								BgL_falsez00) =
							((BgL_nodez00_bglt) BgL_arg3433z00_1325), BUNSPEC);
					}
					BgL_auxz00_3213 = BgL_nodez00_1317;
					return (obj_t) (BgL_auxz00_3213);
				}
			}
		}
	}



/* node-beta!-setq3287 */
	obj_t BGl_nodezd2betaz12zd2setq3287z12zzbeta_walkz00(obj_t BgL_envz00_2477,
		obj_t BgL_nodez00_2478, obj_t BgL_stackz00_2479)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 109 */
			{
				BgL_setqz00_bglt BgL_nodez00_1309;

				obj_t BgL_stackz00_1310;

				{	/* Beta/walk.scm 110 */
					BgL_setqz00_bglt BgL_auxz00_3291;

					BgL_nodez00_1309 = (BgL_setqz00_bglt) (BgL_nodez00_2478);
					BgL_stackz00_1310 = BgL_stackz00_2479;
					{	/* Beta/walk.scm 110 */
						BgL_nodez00_bglt BgL_arg3424z00_1765;

						{	/* Beta/walk.scm 110 */
							BgL_nodez00_bglt BgL_arg3425z00_1766;

							BgL_arg3425z00_1766 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1309))->BgL_valuez00);
							{	/* Beta/walk.scm 110 */
								BgL_nodez00_bglt BgL_res3528z00_1795;

								{	/* Beta/walk.scm 110 */
									obj_t BgL_method3273z00_1770;

									{	/* Beta/walk.scm 110 */
										BgL_objectz00_bglt BgL_objz00_1771;

										BgL_objz00_1771 =
											(BgL_objectz00_bglt) (BgL_arg3425z00_1766);
										{	/* Beta/walk.scm 110 */
											long BgL_objzd2classzd2numz00_1772;

											BgL_objzd2classzd2numz00_1772 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1771);
											{	/* Beta/walk.scm 110 */
												obj_t BgL_arg2643z00_1773;

												BgL_arg2643z00_1773 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
													(int) (((long) 1)));
												{	/* Beta/walk.scm 110 */
													obj_t BgL_arrayz00_1775;

													int BgL_offsetz00_1776;

													BgL_arrayz00_1775 = BgL_arg2643z00_1773;
													BgL_offsetz00_1776 =
														(int) (BgL_objzd2classzd2numz00_1772);
													{	/* Beta/walk.scm 110 */
														long BgL_offsetz00_1777;

														BgL_offsetz00_1777 =
															((long) (BgL_offsetz00_1776) - OBJECT_TYPE);
														{	/* Beta/walk.scm 110 */
															long BgL_modz00_1778;

															{	/* Beta/walk.scm 110 */
																int BgL_arg2645z00_1779;

																BgL_arg2645z00_1779 = (int) (((long) 16));
																{	/* Beta/walk.scm 110 */
																	long BgL_auxz00_3301;

																	BgL_auxz00_3301 =
																		(long) (BgL_arg2645z00_1779);
																	BgL_modz00_1778 =
																		(BgL_offsetz00_1777 / BgL_auxz00_3301);
															}}
															{	/* Beta/walk.scm 110 */
																long BgL_restz00_1780;

																{	/* Beta/walk.scm 110 */
																	int BgL_arg2644z00_1781;

																	BgL_arg2644z00_1781 = (int) (((long) 16));
																	{	/* Beta/walk.scm 110 */
																		long BgL_auxz00_3305;

																		BgL_auxz00_3305 =
																			(long) (BgL_arg2644z00_1781);
																		BgL_restz00_1780 =
																			(BgL_offsetz00_1777 % BgL_auxz00_3305);
																}}
																{	/* Beta/walk.scm 110 */

																	BgL_method3273z00_1770 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1775,
																			(int) (BgL_modz00_1778)),
																		(int) (BgL_restz00_1780));
									}}}}}}}}
									BgL_res3528z00_1795 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3273z00_1770)
										(BgL_method3273z00_1770, (obj_t) (BgL_arg3425z00_1766),
											BgL_stackz00_1310, BEOA));
								}
								BgL_arg3424z00_1765 = BgL_res3528z00_1795;
						}}
						((((BgL_setqz00_bglt) CREF(BgL_nodez00_1309))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3424z00_1765), BUNSPEC);
					}
					BgL_auxz00_3291 = BgL_nodez00_1309;
					return (obj_t) (BgL_auxz00_3291);
				}
			}
		}
	}



/* node-beta!-cast3285 */
	obj_t BGl_nodezd2betaz12zd2cast3285z12zzbeta_walkz00(obj_t BgL_envz00_2480,
		obj_t BgL_nodez00_2481, obj_t BgL_stackz00_2482)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 102 */
			{
				BgL_castz00_bglt BgL_nodez00_1302;

				obj_t BgL_stackz00_1303;

				{	/* Beta/walk.scm 103 */
					BgL_castz00_bglt BgL_auxz00_3319;

					BgL_nodez00_1302 = (BgL_castz00_bglt) (BgL_nodez00_2481);
					BgL_stackz00_1303 = BgL_stackz00_2482;
					{	/* Beta/walk.scm 103 */
						BgL_nodez00_bglt BgL_arg3422z00_1735;

						BgL_arg3422z00_1735 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1302))->BgL_argz00);
						{	/* Beta/walk.scm 103 */
							BgL_nodez00_bglt BgL_res3525z00_1764;

							{	/* Beta/walk.scm 103 */
								obj_t BgL_method3273z00_1739;

								{	/* Beta/walk.scm 103 */
									BgL_objectz00_bglt BgL_objz00_1740;

									BgL_objz00_1740 = (BgL_objectz00_bglt) (BgL_arg3422z00_1735);
									{	/* Beta/walk.scm 103 */
										long BgL_objzd2classzd2numz00_1741;

										BgL_objzd2classzd2numz00_1741 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1740);
										{	/* Beta/walk.scm 103 */
											obj_t BgL_arg2643z00_1742;

											BgL_arg2643z00_1742 =
												PROCEDURE_REF(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
												(int) (((long) 1)));
											{	/* Beta/walk.scm 103 */
												obj_t BgL_arrayz00_1744;

												int BgL_offsetz00_1745;

												BgL_arrayz00_1744 = BgL_arg2643z00_1742;
												BgL_offsetz00_1745 =
													(int) (BgL_objzd2classzd2numz00_1741);
												{	/* Beta/walk.scm 103 */
													long BgL_offsetz00_1746;

													BgL_offsetz00_1746 =
														((long) (BgL_offsetz00_1745) - OBJECT_TYPE);
													{	/* Beta/walk.scm 103 */
														long BgL_modz00_1747;

														{	/* Beta/walk.scm 103 */
															int BgL_arg2645z00_1748;

															BgL_arg2645z00_1748 = (int) (((long) 16));
															{	/* Beta/walk.scm 103 */
																long BgL_auxz00_3329;

																BgL_auxz00_3329 = (long) (BgL_arg2645z00_1748);
																BgL_modz00_1747 =
																	(BgL_offsetz00_1746 / BgL_auxz00_3329);
														}}
														{	/* Beta/walk.scm 103 */
															long BgL_restz00_1749;

															{	/* Beta/walk.scm 103 */
																int BgL_arg2644z00_1750;

																BgL_arg2644z00_1750 = (int) (((long) 16));
																{	/* Beta/walk.scm 103 */
																	long BgL_auxz00_3333;

																	BgL_auxz00_3333 =
																		(long) (BgL_arg2644z00_1750);
																	BgL_restz00_1749 =
																		(BgL_offsetz00_1746 % BgL_auxz00_3333);
															}}
															{	/* Beta/walk.scm 103 */

																BgL_method3273z00_1739 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1744,
																		(int) (BgL_modz00_1747)),
																	(int) (BgL_restz00_1749));
								}}}}}}}}
								BgL_res3525z00_1764 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3273z00_1739)
									(BgL_method3273z00_1739, (obj_t) (BgL_arg3422z00_1735),
										BgL_stackz00_1303, BEOA));
							} BgL_res3525z00_1764;
					}}
					BgL_auxz00_3319 = BgL_nodez00_1302;
					return (obj_t) (BgL_auxz00_3319);
				}
			}
		}
	}



/* node-beta!-extern3283 */
	obj_t BGl_nodezd2betaz12zd2extern3283z12zzbeta_walkz00(obj_t BgL_envz00_2483,
		obj_t BgL_nodez00_2484, obj_t BgL_stackz00_2485)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 95 */
			{
				BgL_externz00_bglt BgL_nodez00_1295;

				obj_t BgL_stackz00_1296;

				{	/* Beta/walk.scm 96 */
					BgL_externz00_bglt BgL_auxz00_3346;

					BgL_nodez00_1295 = (BgL_externz00_bglt) (BgL_nodez00_2484);
					BgL_stackz00_1296 = BgL_stackz00_2485;
					{	/* Beta/walk.scm 96 */
						obj_t BgL_arg3420z00_1733;

						BgL_arg3420z00_1733 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1295))->BgL_exprza2za2);
						BGl_nodezd2betaza2z12z62zzbeta_walkz00(BgL_arg3420z00_1733,
							BgL_stackz00_1296);
					}
					BgL_auxz00_3346 = BgL_nodez00_1295;
					return (obj_t) (BgL_auxz00_3346);
				}
			}
		}
	}



/* node-beta!-funcall3281 */
	obj_t BGl_nodezd2betaz12zd2funcall3281z12zzbeta_walkz00(obj_t BgL_envz00_2486,
		obj_t BgL_nodez00_2487, obj_t BgL_stackz00_2488)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 87 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1286;

				obj_t BgL_stackz00_1287;

				{	/* Beta/walk.scm 88 */
					BgL_funcallz00_bglt BgL_auxz00_3351;

					BgL_nodez00_1286 = (BgL_funcallz00_bglt) (BgL_nodez00_2487);
					BgL_stackz00_1287 = BgL_stackz00_2488;
					{	/* Beta/walk.scm 88 */
						BgL_nodez00_bglt BgL_arg3416z00_1290;

						{	/* Beta/walk.scm 88 */
							BgL_nodez00_bglt BgL_arg3417z00_1291;

							BgL_arg3417z00_1291 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1286))->BgL_funz00);
							{	/* Beta/walk.scm 88 */
								BgL_nodez00_bglt BgL_res3522z00_1729;

								{	/* Beta/walk.scm 88 */
									obj_t BgL_method3273z00_1704;

									{	/* Beta/walk.scm 88 */
										BgL_objectz00_bglt BgL_objz00_1705;

										BgL_objz00_1705 =
											(BgL_objectz00_bglt) (BgL_arg3417z00_1291);
										{	/* Beta/walk.scm 88 */
											long BgL_objzd2classzd2numz00_1706;

											BgL_objzd2classzd2numz00_1706 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1705);
											{	/* Beta/walk.scm 88 */
												obj_t BgL_arg2643z00_1707;

												BgL_arg2643z00_1707 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
													(int) (((long) 1)));
												{	/* Beta/walk.scm 88 */
													obj_t BgL_arrayz00_1709;

													int BgL_offsetz00_1710;

													BgL_arrayz00_1709 = BgL_arg2643z00_1707;
													BgL_offsetz00_1710 =
														(int) (BgL_objzd2classzd2numz00_1706);
													{	/* Beta/walk.scm 88 */
														long BgL_offsetz00_1711;

														BgL_offsetz00_1711 =
															((long) (BgL_offsetz00_1710) - OBJECT_TYPE);
														{	/* Beta/walk.scm 88 */
															long BgL_modz00_1712;

															{	/* Beta/walk.scm 88 */
																int BgL_arg2645z00_1713;

																BgL_arg2645z00_1713 = (int) (((long) 16));
																{	/* Beta/walk.scm 88 */
																	long BgL_auxz00_3361;

																	BgL_auxz00_3361 =
																		(long) (BgL_arg2645z00_1713);
																	BgL_modz00_1712 =
																		(BgL_offsetz00_1711 / BgL_auxz00_3361);
															}}
															{	/* Beta/walk.scm 88 */
																long BgL_restz00_1714;

																{	/* Beta/walk.scm 88 */
																	int BgL_arg2644z00_1715;

																	BgL_arg2644z00_1715 = (int) (((long) 16));
																	{	/* Beta/walk.scm 88 */
																		long BgL_auxz00_3365;

																		BgL_auxz00_3365 =
																			(long) (BgL_arg2644z00_1715);
																		BgL_restz00_1714 =
																			(BgL_offsetz00_1711 % BgL_auxz00_3365);
																}}
																{	/* Beta/walk.scm 88 */

																	BgL_method3273z00_1704 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1709,
																			(int) (BgL_modz00_1712)),
																		(int) (BgL_restz00_1714));
									}}}}}}}}
									BgL_res3522z00_1729 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3273z00_1704)
										(BgL_method3273z00_1704, (obj_t) (BgL_arg3417z00_1291),
											BgL_stackz00_1287, BEOA));
								}
								BgL_arg3416z00_1290 = BgL_res3522z00_1729;
						}}
						((((BgL_funcallz00_bglt) CREF(BgL_nodez00_1286))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3416z00_1290), BUNSPEC);
					}
					{	/* Beta/walk.scm 89 */
						obj_t BgL_arg3418z00_1292;

						BgL_arg3418z00_1292 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1286))->BgL_argsz00);
						BGl_nodezd2betaza2z12z62zzbeta_walkz00(BgL_arg3418z00_1292,
							BgL_stackz00_1287);
					}
					BgL_auxz00_3351 = BgL_nodez00_1286;
					return (obj_t) (BgL_auxz00_3351);
				}
			}
		}
	}



/* node-beta!-app-ly3279 */
	obj_t BGl_nodezd2betaz12zd2appzd2ly3279zc0zzbeta_walkz00(obj_t
		BgL_envz00_2489, obj_t BgL_nodez00_2490, obj_t BgL_stackz00_2491)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 79 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1276;

				obj_t BgL_stackz00_1277;

				{	/* Beta/walk.scm 80 */
					BgL_appzd2lyzd2_bglt BgL_auxz00_3381;

					BgL_nodez00_1276 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2490);
					BgL_stackz00_1277 = BgL_stackz00_2491;
					{	/* Beta/walk.scm 80 */
						BgL_nodez00_bglt BgL_arg3411z00_1280;

						{	/* Beta/walk.scm 80 */
							BgL_nodez00_bglt BgL_arg3412z00_1281;

							BgL_arg3412z00_1281 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1276))->BgL_funz00);
							{	/* Beta/walk.scm 80 */
								BgL_nodez00_bglt BgL_res3516z00_1667;

								{	/* Beta/walk.scm 80 */
									obj_t BgL_method3273z00_1642;

									{	/* Beta/walk.scm 80 */
										BgL_objectz00_bglt BgL_objz00_1643;

										BgL_objz00_1643 =
											(BgL_objectz00_bglt) (BgL_arg3412z00_1281);
										{	/* Beta/walk.scm 80 */
											long BgL_objzd2classzd2numz00_1644;

											BgL_objzd2classzd2numz00_1644 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1643);
											{	/* Beta/walk.scm 80 */
												obj_t BgL_arg2643z00_1645;

												BgL_arg2643z00_1645 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
													(int) (((long) 1)));
												{	/* Beta/walk.scm 80 */
													obj_t BgL_arrayz00_1647;

													int BgL_offsetz00_1648;

													BgL_arrayz00_1647 = BgL_arg2643z00_1645;
													BgL_offsetz00_1648 =
														(int) (BgL_objzd2classzd2numz00_1644);
													{	/* Beta/walk.scm 80 */
														long BgL_offsetz00_1649;

														BgL_offsetz00_1649 =
															((long) (BgL_offsetz00_1648) - OBJECT_TYPE);
														{	/* Beta/walk.scm 80 */
															long BgL_modz00_1650;

															{	/* Beta/walk.scm 80 */
																int BgL_arg2645z00_1651;

																BgL_arg2645z00_1651 = (int) (((long) 16));
																{	/* Beta/walk.scm 80 */
																	long BgL_auxz00_3391;

																	BgL_auxz00_3391 =
																		(long) (BgL_arg2645z00_1651);
																	BgL_modz00_1650 =
																		(BgL_offsetz00_1649 / BgL_auxz00_3391);
															}}
															{	/* Beta/walk.scm 80 */
																long BgL_restz00_1652;

																{	/* Beta/walk.scm 80 */
																	int BgL_arg2644z00_1653;

																	BgL_arg2644z00_1653 = (int) (((long) 16));
																	{	/* Beta/walk.scm 80 */
																		long BgL_auxz00_3395;

																		BgL_auxz00_3395 =
																			(long) (BgL_arg2644z00_1653);
																		BgL_restz00_1652 =
																			(BgL_offsetz00_1649 % BgL_auxz00_3395);
																}}
																{	/* Beta/walk.scm 80 */

																	BgL_method3273z00_1642 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1647,
																			(int) (BgL_modz00_1650)),
																		(int) (BgL_restz00_1652));
									}}}}}}}}
									BgL_res3516z00_1667 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3273z00_1642)
										(BgL_method3273z00_1642, (obj_t) (BgL_arg3412z00_1281),
											BgL_stackz00_1277, BEOA));
								}
								BgL_arg3411z00_1280 = BgL_res3516z00_1667;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1276))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3411z00_1280), BUNSPEC);
					}
					{	/* Beta/walk.scm 81 */
						BgL_nodez00_bglt BgL_arg3413z00_1282;

						{	/* Beta/walk.scm 81 */
							BgL_nodez00_bglt BgL_arg3414z00_1283;

							BgL_arg3414z00_1283 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1276))->BgL_argz00);
							{	/* Beta/walk.scm 81 */
								BgL_nodez00_bglt BgL_res3519z00_1698;

								{	/* Beta/walk.scm 81 */
									obj_t BgL_method3273z00_1673;

									{	/* Beta/walk.scm 81 */
										BgL_objectz00_bglt BgL_objz00_1674;

										BgL_objz00_1674 =
											(BgL_objectz00_bglt) (BgL_arg3414z00_1283);
										{	/* Beta/walk.scm 81 */
											long BgL_objzd2classzd2numz00_1675;

											BgL_objzd2classzd2numz00_1675 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1674);
											{	/* Beta/walk.scm 81 */
												obj_t BgL_arg2643z00_1676;

												BgL_arg2643z00_1676 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
													(int) (((long) 1)));
												{	/* Beta/walk.scm 81 */
													obj_t BgL_arrayz00_1678;

													int BgL_offsetz00_1679;

													BgL_arrayz00_1678 = BgL_arg2643z00_1676;
													BgL_offsetz00_1679 =
														(int) (BgL_objzd2classzd2numz00_1675);
													{	/* Beta/walk.scm 81 */
														long BgL_offsetz00_1680;

														BgL_offsetz00_1680 =
															((long) (BgL_offsetz00_1679) - OBJECT_TYPE);
														{	/* Beta/walk.scm 81 */
															long BgL_modz00_1681;

															{	/* Beta/walk.scm 81 */
																int BgL_arg2645z00_1682;

																BgL_arg2645z00_1682 = (int) (((long) 16));
																{	/* Beta/walk.scm 81 */
																	long BgL_auxz00_3416;

																	BgL_auxz00_3416 =
																		(long) (BgL_arg2645z00_1682);
																	BgL_modz00_1681 =
																		(BgL_offsetz00_1680 / BgL_auxz00_3416);
															}}
															{	/* Beta/walk.scm 81 */
																long BgL_restz00_1683;

																{	/* Beta/walk.scm 81 */
																	int BgL_arg2644z00_1684;

																	BgL_arg2644z00_1684 = (int) (((long) 16));
																	{	/* Beta/walk.scm 81 */
																		long BgL_auxz00_3420;

																		BgL_auxz00_3420 =
																			(long) (BgL_arg2644z00_1684);
																		BgL_restz00_1683 =
																			(BgL_offsetz00_1680 % BgL_auxz00_3420);
																}}
																{	/* Beta/walk.scm 81 */

																	BgL_method3273z00_1673 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1678,
																			(int) (BgL_modz00_1681)),
																		(int) (BgL_restz00_1683));
									}}}}}}}}
									BgL_res3519z00_1698 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3273z00_1673)
										(BgL_method3273z00_1673, (obj_t) (BgL_arg3414z00_1283),
											BgL_stackz00_1277, BEOA));
								}
								BgL_arg3413z00_1282 = BgL_res3519z00_1698;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1276))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg3413z00_1282), BUNSPEC);
					}
					BgL_auxz00_3381 = BgL_nodez00_1276;
					return (obj_t) (BgL_auxz00_3381);
				}
			}
		}
	}



/* node-beta!-app3277 */
	obj_t BGl_nodezd2betaz12zd2app3277z12zzbeta_walkz00(obj_t BgL_envz00_2492,
		obj_t BgL_nodez00_2493, obj_t BgL_stackz00_2494)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 64 */
			{
				BgL_appz00_bglt BgL_nodez00_1256;

				obj_t BgL_stackz00_1257;

				{	/* Beta/walk.scm 65 */
					BgL_appz00_bglt BgL_auxz00_3434;

					BgL_nodez00_1256 = (BgL_appz00_bglt) (BgL_nodez00_2493);
					BgL_stackz00_1257 = BgL_stackz00_2494;
					{	/* Beta/walk.scm 65 */
						BgL_nodez00_bglt BgL_arg3399z00_1260;

						{	/* Beta/walk.scm 65 */
							BgL_varz00_bglt BgL_arg3400z00_1261;

							BgL_arg3400z00_1261 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1256))->BgL_funz00);
							{	/* Beta/walk.scm 65 */
								BgL_nodez00_bglt BgL_res3510z00_1601;

								{	/* Beta/walk.scm 65 */
									BgL_nodez00_bglt BgL_nodez00_1574;

									BgL_nodez00_1574 = (BgL_nodez00_bglt) (BgL_arg3400z00_1261);
									{	/* Beta/walk.scm 65 */
										obj_t BgL_method3273z00_1576;

										{	/* Beta/walk.scm 65 */
											BgL_objectz00_bglt BgL_objz00_1577;

											BgL_objz00_1577 = (BgL_objectz00_bglt) (BgL_nodez00_1574);
											{	/* Beta/walk.scm 65 */
												long BgL_objzd2classzd2numz00_1578;

												BgL_objzd2classzd2numz00_1578 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1577);
												{	/* Beta/walk.scm 65 */
													obj_t BgL_arg2643z00_1579;

													BgL_arg2643z00_1579 =
														PROCEDURE_REF
														(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
														(int) (((long) 1)));
													{	/* Beta/walk.scm 65 */
														obj_t BgL_arrayz00_1581;

														int BgL_offsetz00_1582;

														BgL_arrayz00_1581 = BgL_arg2643z00_1579;
														BgL_offsetz00_1582 =
															(int) (BgL_objzd2classzd2numz00_1578);
														{	/* Beta/walk.scm 65 */
															long BgL_offsetz00_1583;

															BgL_offsetz00_1583 =
																((long) (BgL_offsetz00_1582) - OBJECT_TYPE);
															{	/* Beta/walk.scm 65 */
																long BgL_modz00_1584;

																{	/* Beta/walk.scm 65 */
																	int BgL_arg2645z00_1585;

																	BgL_arg2645z00_1585 = (int) (((long) 16));
																	{	/* Beta/walk.scm 65 */
																		long BgL_auxz00_3445;

																		BgL_auxz00_3445 =
																			(long) (BgL_arg2645z00_1585);
																		BgL_modz00_1584 =
																			(BgL_offsetz00_1583 / BgL_auxz00_3445);
																}}
																{	/* Beta/walk.scm 65 */
																	long BgL_restz00_1586;

																	{	/* Beta/walk.scm 65 */
																		int BgL_arg2644z00_1587;

																		BgL_arg2644z00_1587 = (int) (((long) 16));
																		{	/* Beta/walk.scm 65 */
																			long BgL_auxz00_3449;

																			BgL_auxz00_3449 =
																				(long) (BgL_arg2644z00_1587);
																			BgL_restz00_1586 =
																				(BgL_offsetz00_1583 % BgL_auxz00_3449);
																	}}
																	{	/* Beta/walk.scm 65 */

																		BgL_method3273z00_1576 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1581,
																				(int) (BgL_modz00_1584)),
																			(int) (BgL_restz00_1586));
										}}}}}}}}
										BgL_res3510z00_1601 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3273z00_1576) (BgL_method3273z00_1576,
												(obj_t) (BgL_nodez00_1574), BgL_stackz00_1257, BEOA));
								}}
								BgL_arg3399z00_1260 = BgL_res3510z00_1601;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3460;

							BgL_auxz00_3460 = (BgL_varz00_bglt) (BgL_arg3399z00_1260);
							((((BgL_appz00_bglt) CREF(BgL_nodez00_1256))->BgL_funz00) =
								((BgL_varz00_bglt) BgL_auxz00_3460), BUNSPEC);
					}}
					{	/* Beta/walk.scm 66 */
						obj_t BgL_arg3402z00_1263;

						BgL_arg3402z00_1263 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1256))->BgL_argsz00);
						{	/* Beta/walk.scm 67 */
							obj_t BgL_zc3anonymousza33404ze3z83_2444;

							BgL_zc3anonymousza33404ze3z83_2444 =
								make_fx_procedure(BGl_zc3anonymousza33404ze3z83zzbeta_walkz00,
								(int) (((long) 1)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3anonymousza33404ze3z83_2444,
								(int) (((long) 0)), BgL_stackz00_1257);
							{	/* Beta/walk.scm 66 */
								obj_t BgL_list3403z00_1264;

								BgL_list3403z00_1264 = MAKE_PAIR(BgL_arg3402z00_1263, BNIL);
								BGl_mapz12z12zz__r4_control_features_6_9z00
									(BgL_zc3anonymousza33404ze3z83_2444, BgL_list3403z00_1264);
					}}}
					BgL_auxz00_3434 = BgL_nodez00_1256;
					return (obj_t) (BgL_auxz00_3434);
				}
			}
		}
	}



/* <anonymous:3404> */
	obj_t BGl_zc3anonymousza33404ze3z83zzbeta_walkz00(obj_t BgL_envz00_2495,
		obj_t BgL_nz00_2497)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 66 */
			{	/* Beta/walk.scm 67 */
				obj_t BgL_stackz00_2496;

				BgL_stackz00_2496 = PROCEDURE_REF(BgL_envz00_2495, (int) (((long) 0)));
				{
					obj_t BgL_nz00_1265;

					BgL_nz00_1265 = BgL_nz00_2497;
					{	/* Beta/walk.scm 67 */
						bool_t BgL_testz00_3475;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_nz00_1265,
								BGl_varz00zzast_nodez00))
							{	/* Beta/walk.scm 67 */
								BgL_variablez00_bglt BgL_arg3409z00_1272;

								{
									BgL_varz00_bglt BgL_auxz00_3478;

									BgL_auxz00_3478 = (BgL_varz00_bglt) (BgL_nz00_1265);
									BgL_arg3409z00_1272 =
										(((BgL_varz00_bglt) CREF(BgL_auxz00_3478))->
										BgL_variablez00);
								}
								{	/* Beta/walk.scm 67 */
									obj_t BgL_obj1812z00_1607;

									BgL_obj1812z00_1607 = (obj_t) (BgL_arg3409z00_1272);
									BgL_testz00_3475 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj1812z00_1607,
										BGl_localz00zzast_varz00);
								}
							}
						else
							{	/* Beta/walk.scm 67 */
								BgL_testz00_3475 = ((bool_t) 0);
							}
						if (BgL_testz00_3475)
							{	/* Beta/walk.scm 68 */
								obj_t BgL_redz00_1268;

								{	/* Beta/walk.scm 68 */
									obj_t BgL_auxz00_3483;

									{	/* Beta/walk.scm 68 */
										BgL_variablez00_bglt BgL_auxz00_3484;

										{
											BgL_varz00_bglt BgL_auxz00_3485;

											BgL_auxz00_3485 = (BgL_varz00_bglt) (BgL_nz00_1265);
											BgL_auxz00_3484 =
												(((BgL_varz00_bglt) CREF(BgL_auxz00_3485))->
												BgL_variablez00);
										}
										BgL_auxz00_3483 = (obj_t) (BgL_auxz00_3484);
									}
									BgL_redz00_1268 =
										BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3483,
										BgL_stackz00_2496);
								}
								if (PAIRP(BgL_redz00_1268))
									{	/* Beta/walk.scm 69 */
										return CDR(BgL_redz00_1268);
									}
								else
									{	/* Beta/walk.scm 69 */
										return BgL_nz00_1265;
									}
							}
						else
							{	/* Beta/walk.scm 72 */
								BgL_nodez00_bglt BgL_res3513z00_1638;

								{	/* Beta/walk.scm 72 */
									BgL_nodez00_bglt BgL_nodez00_1611;

									BgL_nodez00_1611 = (BgL_nodez00_bglt) (BgL_nz00_1265);
									{	/* Beta/walk.scm 72 */
										obj_t BgL_method3273z00_1613;

										{	/* Beta/walk.scm 72 */
											BgL_objectz00_bglt BgL_objz00_1614;

											BgL_objz00_1614 = (BgL_objectz00_bglt) (BgL_nodez00_1611);
											{	/* Beta/walk.scm 72 */
												long BgL_objzd2classzd2numz00_1615;

												BgL_objzd2classzd2numz00_1615 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1614);
												{	/* Beta/walk.scm 72 */
													obj_t BgL_arg2643z00_1616;

													BgL_arg2643z00_1616 =
														PROCEDURE_REF
														(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
														(int) (((long) 1)));
													{	/* Beta/walk.scm 72 */
														obj_t BgL_arrayz00_1618;

														int BgL_offsetz00_1619;

														BgL_arrayz00_1618 = BgL_arg2643z00_1616;
														BgL_offsetz00_1619 =
															(int) (BgL_objzd2classzd2numz00_1615);
														{	/* Beta/walk.scm 72 */
															long BgL_offsetz00_1620;

															BgL_offsetz00_1620 =
																((long) (BgL_offsetz00_1619) - OBJECT_TYPE);
															{	/* Beta/walk.scm 72 */
																long BgL_modz00_1621;

																{	/* Beta/walk.scm 72 */
																	int BgL_arg2645z00_1622;

																	BgL_arg2645z00_1622 = (int) (((long) 16));
																	{	/* Beta/walk.scm 72 */
																		long BgL_auxz00_3502;

																		BgL_auxz00_3502 =
																			(long) (BgL_arg2645z00_1622);
																		BgL_modz00_1621 =
																			(BgL_offsetz00_1620 / BgL_auxz00_3502);
																}}
																{	/* Beta/walk.scm 72 */
																	long BgL_restz00_1623;

																	{	/* Beta/walk.scm 72 */
																		int BgL_arg2644z00_1624;

																		BgL_arg2644z00_1624 = (int) (((long) 16));
																		{	/* Beta/walk.scm 72 */
																			long BgL_auxz00_3506;

																			BgL_auxz00_3506 =
																				(long) (BgL_arg2644z00_1624);
																			BgL_restz00_1623 =
																				(BgL_offsetz00_1620 % BgL_auxz00_3506);
																	}}
																	{	/* Beta/walk.scm 72 */

																		BgL_method3273z00_1613 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1618,
																				(int) (BgL_modz00_1621)),
																			(int) (BgL_restz00_1623));
										}}}}}}}}
										BgL_res3513z00_1638 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3273z00_1613) (BgL_method3273z00_1613,
												(obj_t) (BgL_nodez00_1611), BgL_stackz00_2496, BEOA));
								}}
								return (obj_t) (BgL_res3513z00_1638);
							}
					}
				}
			}
		}
	}



/* node-beta!-sequence3275 */
	obj_t BGl_nodezd2betaz12zd2sequence3275z12zzbeta_walkz00(obj_t
		BgL_envz00_2498, obj_t BgL_nodez00_2499, obj_t BgL_stackz00_2500)
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 57 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1249;

				obj_t BgL_stackz00_1250;

				{	/* Beta/walk.scm 58 */
					BgL_sequencez00_bglt BgL_auxz00_3518;

					BgL_nodez00_1249 = (BgL_sequencez00_bglt) (BgL_nodez00_2499);
					BgL_stackz00_1250 = BgL_stackz00_2500;
					{	/* Beta/walk.scm 58 */
						obj_t BgL_arg3397z00_1571;

						BgL_arg3397z00_1571 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1249))->BgL_nodesz00);
						BGl_nodezd2betaza2z12z62zzbeta_walkz00(BgL_arg3397z00_1571,
							BgL_stackz00_1250);
					}
					BgL_auxz00_3518 = BgL_nodez00_1249;
					return (obj_t) (BgL_auxz00_3518);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbeta_walkz00()
	{
		AN_OBJECT;
		{	/* Beta/walk.scm 18 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3612z00zzbeta_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3612z00zzbeta_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string3612z00zzbeta_walkz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3612z00zzbeta_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3612z00zzbeta_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3612z00zzbeta_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3612z00zzbeta_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3612z00zzbeta_walkz00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 470955713),
				BSTRING_TO_STRING(BGl_string3612z00zzbeta_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3612z00zzbeta_walkz00));
			BGl_modulezd2initializa7ationz75zzast_occurz00(((long) 335751924),
				BSTRING_TO_STRING(BGl_string3612z00zzbeta_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzast_removez00(((long) 52292466),
				BSTRING_TO_STRING(BGl_string3612z00zzbeta_walkz00));
		}
	}

#ifdef __cplusplus
}
#endif
