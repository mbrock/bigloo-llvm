/*===========================================================================*/
/*   (Reduce/cond.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Reduce/cond.scm)*/
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
	static obj_t BGl_nodezd2condz12zd2jumpzd2exzd2i3331z12zzreduce_condz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_reducezd2conditionalz12zc0zzreduce_condz00(obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzreduce_condz00();
	static obj_t BGl_nodezd2condz12zd2atom3295z12zzreduce_condz00(obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2condz12zd2condition3317z12zzreduce_condz00(obj_t,
		obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t BGl_nodezd2condz12zd2sequence3303z12zzreduce_condz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzreduce_condz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzreduce_condz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_nodezd2condz12zd2boxzd2setz123335zd2zzreduce_condz00(obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl__nodezd2condz12zd2default3291z12zzreduce_condz00(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_nodezd2condz12zd2default3291z12zzreduce_condz00(BgL_nodez00_bglt);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_closurez00zzast_nodez00;
	static obj_t BGl_nodezd2condz12zd2cast3313z12zzreduce_condz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_nodezd2condz12zc0zzreduce_condz00(BgL_nodez00_bglt);
	static obj_t BGl_nodezd2condz12zd2funcall3309z12zzreduce_condz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2condz12zd2app3305z12zzreduce_condz00(obj_t, obj_t);
	static obj_t BGl_nodezd2condz12zd2setzd2exzd2it3328z12zzreduce_condz00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzreduce_condz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzreduce_condz00 = BUNSPEC;
	static obj_t BGl_nodezd2condz12zd2setq3315z12zzreduce_condz00(obj_t, obj_t);
	static obj_t BGl_nodezd2condz12zd2extern3311z12zzreduce_condz00(obj_t, obj_t);
	static obj_t BGl_nodezd2condz12zd2makezd2box3333zc0zzreduce_condz00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzreduce_condz00();
	static obj_t BGl__reducezd2conditionalz12zc0zzreduce_condz00(obj_t, obj_t);
	static obj_t BGl_nodezd2condz12zd2appzd2ly3307zc0zzreduce_condz00(obj_t,
		obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_nodezd2condz12zd2boxzd2ref3337zc0zzreduce_condz00(obj_t,
		obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static long BGl_za2condzd2reducedza2zd2zzreduce_condz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzreduce_condz00();
	static obj_t BGl_nodezd2condz12zd2var3299z12zzreduce_condz00(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_nodezd2condz12zd2fail3319z12zzreduce_condz00(obj_t, obj_t);
	static obj_t BGl__nodezd2condz12zc0zzreduce_condz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2condz12zd2select3321z12zzreduce_condz00(obj_t, obj_t);
	static obj_t BGl_nodezd2condz12zd2kwote3297z12zzreduce_condz00(obj_t, obj_t);
	static obj_t BGl_nodezd2condza2z12z62zzreduce_condz00(obj_t);
	static obj_t BGl_nodezd2condz12zd2letzd2fun3323zc0zzreduce_condz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2condz12zd2closure3301z12zzreduce_condz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2condz12zd2letzd2var3325zc0zzreduce_condz00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzreduce_condz00();
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_GENERIC(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
		BgL_bgl__nodeza7d2condza712za73610za7,
		BGl__nodezd2condz12zc0zzreduce_condz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nodezd2condz12zd2default3291zd2envzc0zzreduce_condz00,
		BgL_bgl__nodeza7d2condza712za73611za7,
		BGl__nodezd2condz12zd2default3291z12zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3585z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3612za7,
		BGl_nodezd2condz12zd2atom3295z12zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3586z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3613za7,
		BGl_nodezd2condz12zd2kwote3297z12zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3587z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3614za7,
		BGl_nodezd2condz12zd2var3299z12zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3588z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3615za7,
		BGl_nodezd2condz12zd2closure3301z12zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3600z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3616za7,
		BGl_nodezd2condz12zd2letzd2var3325zc0zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3590z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3617za7,
		BGl_nodezd2condz12zd2app3305z12zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3589z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3618za7,
		BGl_nodezd2condz12zd2sequence3303z12zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3601z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3619za7,
		BGl_nodezd2condz12zd2setzd2exzd2it3328z12zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3591z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3620za7,
		BGl_nodezd2condz12zd2appzd2ly3307zc0zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3602z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3621za7,
		BGl_nodezd2condz12zd2jumpzd2exzd2i3331z12zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3592z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3622za7,
		BGl_nodezd2condz12zd2funcall3309z12zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3603z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3623za7,
		BGl_nodezd2condz12zd2makezd2box3333zc0zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3593z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3624za7,
		BGl_nodezd2condz12zd2extern3311z12zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3604z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3625za7,
		BGl_nodezd2condz12zd2boxzd2setz123335zd2zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3594z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3626za7,
		BGl_nodezd2condz12zd2cast3313z12zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3605z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3627za7,
		BGl_nodezd2condz12zd2boxzd2ref3337zc0zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3595z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3628za7,
		BGl_nodezd2condz12zd2setq3315z12zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3596z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3629za7,
		BGl_nodezd2condz12zd2condition3317z12zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3597z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3630za7,
		BGl_nodezd2condz12zd2fail3319z12zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3598z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3631za7,
		BGl_nodezd2condz12zd2select3321z12zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3599z00zzreduce_condz00,
		BgL_bgl_nodeza7d2condza712za7d3632za7,
		BGl_nodezd2condz12zd2letzd2fun3323zc0zzreduce_condz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_reducezd2conditionalz12zd2envz12zzreduce_condz00,
		BgL_bgl__reduceza7d2condit3633za7,
		BGl__reducezd2conditionalz12zc0zzreduce_condz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3581z00zzreduce_condz00,
		BgL_bgl_string3581za700za7za7r3634za7, "      conditional expression ", 29);
	      DEFINE_STRING(BGl_string3582z00zzreduce_condz00,
		BgL_bgl_string3582za700za7za7r3635za7, "(reduced: ", 10);
	      DEFINE_STRING(BGl_string3583z00zzreduce_condz00,
		BgL_bgl_string3583za700za7za7r3636za7, "node-cond!", 10);
	      DEFINE_STRING(BGl_string3584z00zzreduce_condz00,
		BgL_bgl_string3584za700za7za7r3637za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3606z00zzreduce_condz00,
		BgL_bgl_string3606za700za7za7r3638za7, "reduce_cond", 11);
	      DEFINE_STRING(BGl_string3607z00zzreduce_condz00,
		BgL_bgl_string3607za700za7za7r3639za7, "node-cond!-default3291 done ", 28);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzreduce_condz00(long
		BgL_checksumz00_2386, char *BgL_fromz00_2387)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzreduce_condz00))
				{
					BGl_requirezd2initializa7ationz75zzreduce_condz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzreduce_condz00();
					BGl_cnstzd2initzd2zzreduce_condz00();
					BGl_importedzd2moduleszd2initz00zzreduce_condz00();
					BGl_genericzd2initzd2zzreduce_condz00();
					BGl_methodzd2initzd2zzreduce_condz00();
					BGl_toplevelzd2initzd2zzreduce_condz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzreduce_condz00()
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "reduce_cond");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "reduce_cond");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "reduce_cond");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzreduce_condz00()
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 15 */
			{	/* Reduce/cond.scm 15 */
				obj_t BgL_cportz00_2374;

				BgL_cportz00_2374 =
					bgl_open_input_string(BGl_string3607z00zzreduce_condz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2375;

					BgL_iz00_2375 = ((long) 1);
				BgL_loopz00_2376:
					if ((BgL_iz00_2375 == ((long) -1)))
						{	/* Reduce/cond.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Reduce/cond.scm 15 */
							{	/* Reduce/cond.scm 15 */
								obj_t BgL_arg3609z00_2378;

								{	/* Reduce/cond.scm 15 */

									{	/* Reduce/cond.scm 15 */
										obj_t BgL_locationz00_2380;

										BgL_locationz00_2380 = BBOOL(((bool_t) 0));
										{	/* Reduce/cond.scm 15 */

											BgL_arg3609z00_2378 =
												BGl_readz00zz__readerz00(BgL_cportz00_2374,
												BgL_locationz00_2380);
										}
									}
								}
								{	/* Reduce/cond.scm 15 */
									int BgL_auxz00_2406;

									BgL_auxz00_2406 = (int) (BgL_iz00_2375);
									CNST_TABLE_SET(BgL_auxz00_2406, BgL_arg3609z00_2378);
							}}
							{	/* Reduce/cond.scm 15 */
								int BgL_auxz00_2381;

								BgL_auxz00_2381 = (int) ((BgL_iz00_2375 - ((long) 1)));
								{
									long BgL_iz00_2411;

									BgL_iz00_2411 = (long) (BgL_auxz00_2381);
									BgL_iz00_2375 = BgL_iz00_2411;
									goto BgL_loopz00_2376;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzreduce_condz00()
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 15 */
			BGl_za2condzd2reducedza2zd2zzreduce_condz00 = ((long) 0);
			return BUNSPEC;
		}
	}



/* reduce-conditional! */
	BGL_EXPORTED_DEF obj_t BGl_reducezd2conditionalz12zc0zzreduce_condz00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 28 */
			{	/* Reduce/cond.scm 29 */
				obj_t BgL_list3338z00_798;

				BgL_list3338z00_798 =
					MAKE_PAIR(BGl_string3581z00zzreduce_condz00, BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list3338z00_798);
			}
			{
				obj_t BgL_l3280z00_800;

				BgL_l3280z00_800 = BgL_globalsz00_1;
			BgL_zc3anonymousza33339ze3z83_801:
				if (PAIRP(BgL_l3280z00_800))
					{	/* Reduce/cond.scm 30 */
						{	/* Reduce/cond.scm 31 */
							obj_t BgL_globalz00_803;

							BgL_globalz00_803 = CAR(BgL_l3280z00_800);
							{	/* Reduce/cond.scm 31 */
								BgL_valuez00_bglt BgL_funz00_804;

								{
									BgL_variablez00_bglt BgL_auxz00_2419;

									BgL_auxz00_2419 = (BgL_variablez00_bglt) (BgL_globalz00_803);
									BgL_funz00_804 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2419))->
										BgL_valuez00);
								}
								{	/* Reduce/cond.scm 31 */
									obj_t BgL_nodez00_805;

									{
										BgL_sfunz00_bglt BgL_auxz00_2422;

										BgL_auxz00_2422 = (BgL_sfunz00_bglt) (BgL_funz00_804);
										BgL_nodez00_805 =
											(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2422))->BgL_bodyz00);
									}
									{	/* Reduce/cond.scm 32 */

										{	/* Reduce/cond.scm 33 */
											BgL_nodez00_bglt BgL_arg3341z00_806;

											{	/* Reduce/cond.scm 33 */
												BgL_nodez00_bglt BgL_res3497z00_1433;

												{	/* Reduce/cond.scm 33 */
													BgL_nodez00_bglt BgL_nodez00_1407;

													BgL_nodez00_1407 =
														(BgL_nodez00_bglt) (BgL_nodez00_805);
													{	/* Reduce/cond.scm 33 */
														obj_t BgL_method3293z00_1408;

														{	/* Reduce/cond.scm 33 */
															BgL_objectz00_bglt BgL_objz00_1409;

															BgL_objz00_1409 =
																(BgL_objectz00_bglt) (BgL_nodez00_1407);
															{	/* Reduce/cond.scm 33 */
																long BgL_objzd2classzd2numz00_1410;

																BgL_objzd2classzd2numz00_1410 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1409);
																{	/* Reduce/cond.scm 33 */
																	obj_t BgL_arg2643z00_1411;

																	BgL_arg2643z00_1411 =
																		PROCEDURE_REF
																		(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
																		(int) (((long) 1)));
																	{	/* Reduce/cond.scm 33 */
																		obj_t BgL_arrayz00_1413;

																		int BgL_offsetz00_1414;

																		BgL_arrayz00_1413 = BgL_arg2643z00_1411;
																		BgL_offsetz00_1414 =
																			(int) (BgL_objzd2classzd2numz00_1410);
																		{	/* Reduce/cond.scm 33 */
																			long BgL_offsetz00_1415;

																			BgL_offsetz00_1415 =
																				(
																				(long) (BgL_offsetz00_1414) -
																				OBJECT_TYPE);
																			{	/* Reduce/cond.scm 33 */
																				long BgL_modz00_1416;

																				{	/* Reduce/cond.scm 33 */
																					int BgL_arg2645z00_1417;

																					BgL_arg2645z00_1417 =
																						(int) (((long) 16));
																					{	/* Reduce/cond.scm 33 */
																						long BgL_auxz00_2434;

																						BgL_auxz00_2434 =
																							(long) (BgL_arg2645z00_1417);
																						BgL_modz00_1416 =
																							(BgL_offsetz00_1415 /
																							BgL_auxz00_2434);
																				}}
																				{	/* Reduce/cond.scm 33 */
																					long BgL_restz00_1418;

																					{	/* Reduce/cond.scm 33 */
																						int BgL_arg2644z00_1419;

																						BgL_arg2644z00_1419 =
																							(int) (((long) 16));
																						{	/* Reduce/cond.scm 33 */
																							long BgL_auxz00_2438;

																							BgL_auxz00_2438 =
																								(long) (BgL_arg2644z00_1419);
																							BgL_restz00_1418 =
																								(BgL_offsetz00_1415 %
																								BgL_auxz00_2438);
																					}}
																					{	/* Reduce/cond.scm 33 */

																						BgL_method3293z00_1408 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1413,
																								(int) (BgL_modz00_1416)),
																							(int) (BgL_restz00_1418));
														}}}}}}}}
														BgL_res3497z00_1433 =
															(BgL_nodez00_bglt) (PROCEDURE_ENTRY
															(BgL_method3293z00_1408) (BgL_method3293z00_1408,
																(obj_t) (BgL_nodez00_1407), BEOA));
												}}
												BgL_arg3341z00_806 = BgL_res3497z00_1433;
											}
											{
												obj_t BgL_auxz00_2451;

												BgL_sfunz00_bglt BgL_auxz00_2449;

												BgL_auxz00_2451 = (obj_t) (BgL_arg3341z00_806);
												BgL_auxz00_2449 = (BgL_sfunz00_bglt) (BgL_funz00_804);
												((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2449))->
														BgL_bodyz00) = ((obj_t) BgL_auxz00_2451), BUNSPEC);
										}} BUNSPEC;
						}}}}
						{
							obj_t BgL_l3280z00_2454;

							BgL_l3280z00_2454 = CDR(BgL_l3280z00_800);
							BgL_l3280z00_800 = BgL_l3280z00_2454;
							goto BgL_zc3anonymousza33339ze3z83_801;
						}
					}
				else
					{	/* Reduce/cond.scm 30 */
						((bool_t) 1);
					}
			}
			{	/* Reduce/cond.scm 36 */
				obj_t BgL_list3343z00_809;

				{	/* Reduce/cond.scm 36 */
					obj_t BgL_arg3346z00_811;

					{	/* Reduce/cond.scm 36 */
						obj_t BgL_arg3347z00_812;

						{	/* Reduce/cond.scm 36 */
							obj_t BgL_arg3348z00_813;

							BgL_arg3348z00_813 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_arg3347z00_812 =
								MAKE_PAIR(BCHAR(((unsigned char) ')')), BgL_arg3348z00_813);
						}
						BgL_arg3346z00_811 =
							MAKE_PAIR(BINT(BGl_za2condzd2reducedza2zd2zzreduce_condz00),
							BgL_arg3347z00_812);
					}
					BgL_list3343z00_809 =
						MAKE_PAIR(BGl_string3582z00zzreduce_condz00, BgL_arg3346z00_811);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list3343z00_809);
			}
			return BgL_globalsz00_1;
		}
	}



/* _reduce-conditional! */
	obj_t BGl__reducezd2conditionalz12zc0zzreduce_condz00(obj_t BgL_envz00_2305,
		obj_t BgL_globalsz00_2306)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 28 */
			return
				BGl_reducezd2conditionalz12zc0zzreduce_condz00(BgL_globalsz00_2306);
		}
	}



/* node-cond*! */
	obj_t BGl_nodezd2condza2z12z62zzreduce_condz00(obj_t BgL_nodeza2za2_25)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 239 */
			{
				obj_t BgL_nodeza2za2_815;

				BgL_nodeza2za2_815 = BgL_nodeza2za2_25;
			BgL_zc3anonymousza33349ze3z83_816:
				if (NULLP(BgL_nodeza2za2_815))
					{	/* Reduce/cond.scm 241 */
						return CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Reduce/cond.scm 241 */
						{	/* Reduce/cond.scm 244 */
							BgL_nodez00_bglt BgL_arg3351z00_818;

							{	/* Reduce/cond.scm 244 */
								obj_t BgL_arg3352z00_819;

								BgL_arg3352z00_819 = CAR(BgL_nodeza2za2_815);
								{	/* Reduce/cond.scm 244 */
									BgL_nodez00_bglt BgL_res3500z00_1465;

									{	/* Reduce/cond.scm 244 */
										BgL_nodez00_bglt BgL_nodez00_1439;

										BgL_nodez00_1439 = (BgL_nodez00_bglt) (BgL_arg3352z00_819);
										{	/* Reduce/cond.scm 244 */
											obj_t BgL_method3293z00_1440;

											{	/* Reduce/cond.scm 244 */
												BgL_objectz00_bglt BgL_objz00_1441;

												BgL_objz00_1441 =
													(BgL_objectz00_bglt) (BgL_nodez00_1439);
												{	/* Reduce/cond.scm 244 */
													long BgL_objzd2classzd2numz00_1442;

													BgL_objzd2classzd2numz00_1442 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1441);
													{	/* Reduce/cond.scm 244 */
														obj_t BgL_arg2643z00_1443;

														BgL_arg2643z00_1443 =
															PROCEDURE_REF
															(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
															(int) (((long) 1)));
														{	/* Reduce/cond.scm 244 */
															obj_t BgL_arrayz00_1445;

															int BgL_offsetz00_1446;

															BgL_arrayz00_1445 = BgL_arg2643z00_1443;
															BgL_offsetz00_1446 =
																(int) (BgL_objzd2classzd2numz00_1442);
															{	/* Reduce/cond.scm 244 */
																long BgL_offsetz00_1447;

																BgL_offsetz00_1447 =
																	((long) (BgL_offsetz00_1446) - OBJECT_TYPE);
																{	/* Reduce/cond.scm 244 */
																	long BgL_modz00_1448;

																	{	/* Reduce/cond.scm 244 */
																		int BgL_arg2645z00_1449;

																		BgL_arg2645z00_1449 = (int) (((long) 16));
																		{	/* Reduce/cond.scm 244 */
																			long BgL_auxz00_2479;

																			BgL_auxz00_2479 =
																				(long) (BgL_arg2645z00_1449);
																			BgL_modz00_1448 =
																				(BgL_offsetz00_1447 / BgL_auxz00_2479);
																	}}
																	{	/* Reduce/cond.scm 244 */
																		long BgL_restz00_1450;

																		{	/* Reduce/cond.scm 244 */
																			int BgL_arg2644z00_1451;

																			BgL_arg2644z00_1451 = (int) (((long) 16));
																			{	/* Reduce/cond.scm 244 */
																				long BgL_auxz00_2483;

																				BgL_auxz00_2483 =
																					(long) (BgL_arg2644z00_1451);
																				BgL_restz00_1450 =
																					(BgL_offsetz00_1447 %
																					BgL_auxz00_2483);
																		}}
																		{	/* Reduce/cond.scm 244 */

																			BgL_method3293z00_1440 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1445,
																					(int) (BgL_modz00_1448)),
																				(int) (BgL_restz00_1450));
											}}}}}}}}
											BgL_res3500z00_1465 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3293z00_1440) (BgL_method3293z00_1440,
													(obj_t) (BgL_nodez00_1439), BEOA));
									}}
									BgL_arg3351z00_818 = BgL_res3500z00_1465;
							}}
							{	/* Reduce/cond.scm 244 */
								obj_t BgL_auxz00_2494;

								BgL_auxz00_2494 = (obj_t) (BgL_arg3351z00_818);
								SET_CAR(BgL_nodeza2za2_815, BgL_auxz00_2494);
						}}
						{
							obj_t BgL_nodeza2za2_2497;

							BgL_nodeza2za2_2497 = CDR(BgL_nodeza2za2_815);
							BgL_nodeza2za2_815 = BgL_nodeza2za2_2497;
							goto BgL_zc3anonymousza33349ze3z83_816;
						}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzreduce_condz00()
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_nodezd2condz12zd2default3291zd2envzc0zzreduce_condz00,
				BGl_nodez00zzast_nodez00, BGl_string3583z00zzreduce_condz00);
		}
	}



/* node-cond! */
	BgL_nodez00_bglt BGl_nodezd2condz12zc0zzreduce_condz00(BgL_nodez00_bglt
		BgL_nodez00_2)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 47 */
			{	/* Reduce/cond.scm 47 */
				obj_t BgL_method3293z00_1469;

				{	/* Reduce/cond.scm 47 */
					BgL_objectz00_bglt BgL_objz00_1470;

					BgL_objz00_1470 = (BgL_objectz00_bglt) (BgL_nodez00_2);
					{	/* Reduce/cond.scm 47 */
						long BgL_objzd2classzd2numz00_1471;

						BgL_objzd2classzd2numz00_1471 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1470);
						{	/* Reduce/cond.scm 47 */
							obj_t BgL_arg2643z00_1472;

							BgL_arg2643z00_1472 =
								PROCEDURE_REF(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
								(int) (((long) 1)));
							{	/* Reduce/cond.scm 47 */
								obj_t BgL_arrayz00_1474;

								int BgL_offsetz00_1475;

								BgL_arrayz00_1474 = BgL_arg2643z00_1472;
								BgL_offsetz00_1475 = (int) (BgL_objzd2classzd2numz00_1471);
								{	/* Reduce/cond.scm 47 */
									long BgL_offsetz00_1476;

									BgL_offsetz00_1476 =
										((long) (BgL_offsetz00_1475) - OBJECT_TYPE);
									{	/* Reduce/cond.scm 47 */
										long BgL_modz00_1477;

										{	/* Reduce/cond.scm 47 */
											int BgL_arg2645z00_1478;

											BgL_arg2645z00_1478 = (int) (((long) 16));
											{	/* Reduce/cond.scm 47 */
												long BgL_auxz00_2508;

												BgL_auxz00_2508 = (long) (BgL_arg2645z00_1478);
												BgL_modz00_1477 =
													(BgL_offsetz00_1476 / BgL_auxz00_2508);
										}}
										{	/* Reduce/cond.scm 47 */
											long BgL_restz00_1479;

											{	/* Reduce/cond.scm 47 */
												int BgL_arg2644z00_1480;

												BgL_arg2644z00_1480 = (int) (((long) 16));
												{	/* Reduce/cond.scm 47 */
													long BgL_auxz00_2512;

													BgL_auxz00_2512 = (long) (BgL_arg2644z00_1480);
													BgL_restz00_1479 =
														(BgL_offsetz00_1476 % BgL_auxz00_2512);
											}}
											{	/* Reduce/cond.scm 47 */

												BgL_method3293z00_1469 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1474,
														(int) (BgL_modz00_1477)), (int) (BgL_restz00_1479));
				}}}}}}}}
				return
					(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1469)
					(BgL_method3293z00_1469, (obj_t) (BgL_nodez00_2), BEOA));
			}
		}
	}



/* _node-cond! */
	obj_t BGl__nodezd2condz12zc0zzreduce_condz00(obj_t BgL_envz00_2307,
		obj_t BgL_nodez00_2308)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 47 */
			return
				(obj_t) (BGl_nodezd2condz12zc0zzreduce_condz00(
					(BgL_nodez00_bglt) (BgL_nodez00_2308)));
		}
	}



/* node-cond!-default3291 */
	BgL_nodez00_bglt
		BGl_nodezd2condz12zd2default3291z12zzreduce_condz00(BgL_nodez00_bglt
		BgL_nodez00_3)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 15 */
			return
				(BgL_nodez00_bglt) (BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
					BGl_string3584z00zzreduce_condz00, (obj_t) (BgL_nodez00_3)));
		}
	}



/* _node-cond!-default3291 */
	obj_t BGl__nodezd2condz12zd2default3291z12zzreduce_condz00(obj_t
		BgL_envz00_2309, obj_t BgL_nodez00_2310)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 15 */
			return
				(obj_t) (BGl_nodezd2condz12zd2default3291z12zzreduce_condz00(
					(BgL_nodez00_bglt) (BgL_nodez00_2310)));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzreduce_condz00()
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00, BGl_atomz00zzast_nodez00,
				BGl_proc3585z00zzreduce_condz00, BGl_string3583z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00, BGl_kwotez00zzast_nodez00,
				BGl_proc3586z00zzreduce_condz00, BGl_string3583z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00, BGl_varz00zzast_nodez00,
				BGl_proc3587z00zzreduce_condz00, BGl_string3583z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_closurez00zzast_nodez00, BGl_proc3588z00zzreduce_condz00,
				BGl_string3583z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_sequencez00zzast_nodez00, BGl_proc3589z00zzreduce_condz00,
				BGl_string3583z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00, BGl_appz00zzast_nodez00,
				BGl_proc3590z00zzreduce_condz00, BGl_string3583z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3591z00zzreduce_condz00,
				BGl_string3583z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_funcallz00zzast_nodez00, BGl_proc3592z00zzreduce_condz00,
				BGl_string3583z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_externz00zzast_nodez00, BGl_proc3593z00zzreduce_condz00,
				BGl_string3583z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00, BGl_castz00zzast_nodez00,
				BGl_proc3594z00zzreduce_condz00, BGl_string3583z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00, BGl_setqz00zzast_nodez00,
				BGl_proc3595z00zzreduce_condz00, BGl_string3583z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3596z00zzreduce_condz00,
				BGl_string3583z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00, BGl_failz00zzast_nodez00,
				BGl_proc3597z00zzreduce_condz00, BGl_string3583z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_selectz00zzast_nodez00, BGl_proc3598z00zzreduce_condz00,
				BGl_string3583z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3599z00zzreduce_condz00,
				BGl_string3583z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3600z00zzreduce_condz00,
				BGl_string3583z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3601z00zzreduce_condz00,
				BGl_string3583z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3602z00zzreduce_condz00,
				BGl_string3583z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3603z00zzreduce_condz00,
				BGl_string3583z00zzreduce_condz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3604z00zzreduce_condz00,
				BGl_string3583z00zzreduce_condz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3605z00zzreduce_condz00,
				BGl_string3583z00zzreduce_condz00);
		}
	}



/* node-cond!-box-ref3337 */
	obj_t BGl_nodezd2condz12zd2boxzd2ref3337zc0zzreduce_condz00(obj_t
		BgL_envz00_2332, obj_t BgL_nodez00_2333)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 231 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1395;

				{	/* Reduce/cond.scm 232 */
					BgL_boxzd2refzd2_bglt BgL_auxz00_2554;

					BgL_nodez00_1395 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2333);
					{	/* Reduce/cond.scm 233 */
						BgL_nodez00_bglt BgL_arg3492z00_1399;

						{	/* Reduce/cond.scm 233 */
							BgL_varz00_bglt BgL_arg3493z00_1400;

							BgL_arg3493z00_1400 =
								(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1395))->BgL_varz00);
							{	/* Reduce/cond.scm 233 */
								BgL_nodez00_bglt BgL_res3580z00_2302;

								{	/* Reduce/cond.scm 233 */
									BgL_nodez00_bglt BgL_nodez00_2276;

									BgL_nodez00_2276 = (BgL_nodez00_bglt) (BgL_arg3493z00_1400);
									{	/* Reduce/cond.scm 233 */
										obj_t BgL_method3293z00_2277;

										{	/* Reduce/cond.scm 233 */
											BgL_objectz00_bglt BgL_objz00_2278;

											BgL_objz00_2278 = (BgL_objectz00_bglt) (BgL_nodez00_2276);
											{	/* Reduce/cond.scm 233 */
												long BgL_objzd2classzd2numz00_2279;

												BgL_objzd2classzd2numz00_2279 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2278);
												{	/* Reduce/cond.scm 233 */
													obj_t BgL_arg2643z00_2280;

													BgL_arg2643z00_2280 =
														PROCEDURE_REF
														(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
														(int) (((long) 1)));
													{	/* Reduce/cond.scm 233 */
														obj_t BgL_arrayz00_2282;

														int BgL_offsetz00_2283;

														BgL_arrayz00_2282 = BgL_arg2643z00_2280;
														BgL_offsetz00_2283 =
															(int) (BgL_objzd2classzd2numz00_2279);
														{	/* Reduce/cond.scm 233 */
															long BgL_offsetz00_2284;

															BgL_offsetz00_2284 =
																((long) (BgL_offsetz00_2283) - OBJECT_TYPE);
															{	/* Reduce/cond.scm 233 */
																long BgL_modz00_2285;

																{	/* Reduce/cond.scm 233 */
																	int BgL_arg2645z00_2286;

																	BgL_arg2645z00_2286 = (int) (((long) 16));
																	{	/* Reduce/cond.scm 233 */
																		long BgL_auxz00_2565;

																		BgL_auxz00_2565 =
																			(long) (BgL_arg2645z00_2286);
																		BgL_modz00_2285 =
																			(BgL_offsetz00_2284 / BgL_auxz00_2565);
																}}
																{	/* Reduce/cond.scm 233 */
																	long BgL_restz00_2287;

																	{	/* Reduce/cond.scm 233 */
																		int BgL_arg2644z00_2288;

																		BgL_arg2644z00_2288 = (int) (((long) 16));
																		{	/* Reduce/cond.scm 233 */
																			long BgL_auxz00_2569;

																			BgL_auxz00_2569 =
																				(long) (BgL_arg2644z00_2288);
																			BgL_restz00_2287 =
																				(BgL_offsetz00_2284 % BgL_auxz00_2569);
																	}}
																	{	/* Reduce/cond.scm 233 */

																		BgL_method3293z00_2277 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2282,
																				(int) (BgL_modz00_2285)),
																			(int) (BgL_restz00_2287));
										}}}}}}}}
										BgL_res3580z00_2302 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3293z00_2277) (BgL_method3293z00_2277,
												(obj_t) (BgL_nodez00_2276), BEOA));
								}}
								BgL_arg3492z00_1399 = BgL_res3580z00_2302;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_2580;

							BgL_auxz00_2580 = (BgL_varz00_bglt) (BgL_arg3492z00_1399);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1395))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_2580), BUNSPEC);
					}}
					BgL_auxz00_2554 = BgL_nodez00_1395;
					return (obj_t) (BgL_auxz00_2554);
				}
			}
		}
	}



/* node-cond!-box-set!3335 */
	obj_t BGl_nodezd2condz12zd2boxzd2setz123335zd2zzreduce_condz00(obj_t
		BgL_envz00_2334, obj_t BgL_nodez00_2335)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 222 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1385;

				{	/* Reduce/cond.scm 223 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_2585;

					BgL_nodez00_1385 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2335);
					{	/* Reduce/cond.scm 224 */
						BgL_nodez00_bglt BgL_arg3487z00_1389;

						{	/* Reduce/cond.scm 224 */
							BgL_varz00_bglt BgL_arg3488z00_1390;

							BgL_arg3488z00_1390 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1385))->
								BgL_varz00);
							{	/* Reduce/cond.scm 224 */
								BgL_nodez00_bglt BgL_res3574z00_2242;

								{	/* Reduce/cond.scm 224 */
									BgL_nodez00_bglt BgL_nodez00_2216;

									BgL_nodez00_2216 = (BgL_nodez00_bglt) (BgL_arg3488z00_1390);
									{	/* Reduce/cond.scm 224 */
										obj_t BgL_method3293z00_2217;

										{	/* Reduce/cond.scm 224 */
											BgL_objectz00_bglt BgL_objz00_2218;

											BgL_objz00_2218 = (BgL_objectz00_bglt) (BgL_nodez00_2216);
											{	/* Reduce/cond.scm 224 */
												long BgL_objzd2classzd2numz00_2219;

												BgL_objzd2classzd2numz00_2219 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2218);
												{	/* Reduce/cond.scm 224 */
													obj_t BgL_arg2643z00_2220;

													BgL_arg2643z00_2220 =
														PROCEDURE_REF
														(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
														(int) (((long) 1)));
													{	/* Reduce/cond.scm 224 */
														obj_t BgL_arrayz00_2222;

														int BgL_offsetz00_2223;

														BgL_arrayz00_2222 = BgL_arg2643z00_2220;
														BgL_offsetz00_2223 =
															(int) (BgL_objzd2classzd2numz00_2219);
														{	/* Reduce/cond.scm 224 */
															long BgL_offsetz00_2224;

															BgL_offsetz00_2224 =
																((long) (BgL_offsetz00_2223) - OBJECT_TYPE);
															{	/* Reduce/cond.scm 224 */
																long BgL_modz00_2225;

																{	/* Reduce/cond.scm 224 */
																	int BgL_arg2645z00_2226;

																	BgL_arg2645z00_2226 = (int) (((long) 16));
																	{	/* Reduce/cond.scm 224 */
																		long BgL_auxz00_2596;

																		BgL_auxz00_2596 =
																			(long) (BgL_arg2645z00_2226);
																		BgL_modz00_2225 =
																			(BgL_offsetz00_2224 / BgL_auxz00_2596);
																}}
																{	/* Reduce/cond.scm 224 */
																	long BgL_restz00_2227;

																	{	/* Reduce/cond.scm 224 */
																		int BgL_arg2644z00_2228;

																		BgL_arg2644z00_2228 = (int) (((long) 16));
																		{	/* Reduce/cond.scm 224 */
																			long BgL_auxz00_2600;

																			BgL_auxz00_2600 =
																				(long) (BgL_arg2644z00_2228);
																			BgL_restz00_2227 =
																				(BgL_offsetz00_2224 % BgL_auxz00_2600);
																	}}
																	{	/* Reduce/cond.scm 224 */

																		BgL_method3293z00_2217 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2222,
																				(int) (BgL_modz00_2225)),
																			(int) (BgL_restz00_2227));
										}}}}}}}}
										BgL_res3574z00_2242 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3293z00_2217) (BgL_method3293z00_2217,
												(obj_t) (BgL_nodez00_2216), BEOA));
								}}
								BgL_arg3487z00_1389 = BgL_res3574z00_2242;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_2611;

							BgL_auxz00_2611 = (BgL_varz00_bglt) (BgL_arg3487z00_1389);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1385))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_2611), BUNSPEC);
					}}
					{	/* Reduce/cond.scm 225 */
						BgL_nodez00_bglt BgL_arg3489z00_1391;

						{	/* Reduce/cond.scm 225 */
							BgL_nodez00_bglt BgL_arg3490z00_1392;

							BgL_arg3490z00_1392 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1385))->
								BgL_valuez00);
							{	/* Reduce/cond.scm 225 */
								BgL_nodez00_bglt BgL_res3577z00_2272;

								{	/* Reduce/cond.scm 225 */
									obj_t BgL_method3293z00_2247;

									{	/* Reduce/cond.scm 225 */
										BgL_objectz00_bglt BgL_objz00_2248;

										BgL_objz00_2248 =
											(BgL_objectz00_bglt) (BgL_arg3490z00_1392);
										{	/* Reduce/cond.scm 225 */
											long BgL_objzd2classzd2numz00_2249;

											BgL_objzd2classzd2numz00_2249 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2248);
											{	/* Reduce/cond.scm 225 */
												obj_t BgL_arg2643z00_2250;

												BgL_arg2643z00_2250 =
													PROCEDURE_REF
													(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
													(int) (((long) 1)));
												{	/* Reduce/cond.scm 225 */
													obj_t BgL_arrayz00_2252;

													int BgL_offsetz00_2253;

													BgL_arrayz00_2252 = BgL_arg2643z00_2250;
													BgL_offsetz00_2253 =
														(int) (BgL_objzd2classzd2numz00_2249);
													{	/* Reduce/cond.scm 225 */
														long BgL_offsetz00_2254;

														BgL_offsetz00_2254 =
															((long) (BgL_offsetz00_2253) - OBJECT_TYPE);
														{	/* Reduce/cond.scm 225 */
															long BgL_modz00_2255;

															{	/* Reduce/cond.scm 225 */
																int BgL_arg2645z00_2256;

																BgL_arg2645z00_2256 = (int) (((long) 16));
																{	/* Reduce/cond.scm 225 */
																	long BgL_auxz00_2623;

																	BgL_auxz00_2623 =
																		(long) (BgL_arg2645z00_2256);
																	BgL_modz00_2255 =
																		(BgL_offsetz00_2254 / BgL_auxz00_2623);
															}}
															{	/* Reduce/cond.scm 225 */
																long BgL_restz00_2257;

																{	/* Reduce/cond.scm 225 */
																	int BgL_arg2644z00_2258;

																	BgL_arg2644z00_2258 = (int) (((long) 16));
																	{	/* Reduce/cond.scm 225 */
																		long BgL_auxz00_2627;

																		BgL_auxz00_2627 =
																			(long) (BgL_arg2644z00_2258);
																		BgL_restz00_2257 =
																			(BgL_offsetz00_2254 % BgL_auxz00_2627);
																}}
																{	/* Reduce/cond.scm 225 */

																	BgL_method3293z00_2247 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2252,
																			(int) (BgL_modz00_2255)),
																		(int) (BgL_restz00_2257));
									}}}}}}}}
									BgL_res3577z00_2272 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_2247)
										(BgL_method3293z00_2247, (obj_t) (BgL_arg3490z00_1392),
											BEOA));
								}
								BgL_arg3489z00_1391 = BgL_res3577z00_2272;
						}}
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1385))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3489z00_1391), BUNSPEC);
					}
					BgL_auxz00_2585 = BgL_nodez00_1385;
					return (obj_t) (BgL_auxz00_2585);
				}
			}
		}
	}



/* node-cond!-make-box3333 */
	obj_t BGl_nodezd2condz12zd2makezd2box3333zc0zzreduce_condz00(obj_t
		BgL_envz00_2336, obj_t BgL_nodez00_2337)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 214 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1377;

				{	/* Reduce/cond.scm 215 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_2641;

					BgL_nodez00_1377 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2337);
					{	/* Reduce/cond.scm 216 */
						BgL_nodez00_bglt BgL_arg3484z00_1381;

						{	/* Reduce/cond.scm 216 */
							BgL_nodez00_bglt BgL_arg3485z00_1382;

							BgL_arg3485z00_1382 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1377))->
								BgL_valuez00);
							{	/* Reduce/cond.scm 216 */
								BgL_nodez00_bglt BgL_res3571z00_2212;

								{	/* Reduce/cond.scm 216 */
									obj_t BgL_method3293z00_2187;

									{	/* Reduce/cond.scm 216 */
										BgL_objectz00_bglt BgL_objz00_2188;

										BgL_objz00_2188 =
											(BgL_objectz00_bglt) (BgL_arg3485z00_1382);
										{	/* Reduce/cond.scm 216 */
											long BgL_objzd2classzd2numz00_2189;

											BgL_objzd2classzd2numz00_2189 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2188);
											{	/* Reduce/cond.scm 216 */
												obj_t BgL_arg2643z00_2190;

												BgL_arg2643z00_2190 =
													PROCEDURE_REF
													(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
													(int) (((long) 1)));
												{	/* Reduce/cond.scm 216 */
													obj_t BgL_arrayz00_2192;

													int BgL_offsetz00_2193;

													BgL_arrayz00_2192 = BgL_arg2643z00_2190;
													BgL_offsetz00_2193 =
														(int) (BgL_objzd2classzd2numz00_2189);
													{	/* Reduce/cond.scm 216 */
														long BgL_offsetz00_2194;

														BgL_offsetz00_2194 =
															((long) (BgL_offsetz00_2193) - OBJECT_TYPE);
														{	/* Reduce/cond.scm 216 */
															long BgL_modz00_2195;

															{	/* Reduce/cond.scm 216 */
																int BgL_arg2645z00_2196;

																BgL_arg2645z00_2196 = (int) (((long) 16));
																{	/* Reduce/cond.scm 216 */
																	long BgL_auxz00_2651;

																	BgL_auxz00_2651 =
																		(long) (BgL_arg2645z00_2196);
																	BgL_modz00_2195 =
																		(BgL_offsetz00_2194 / BgL_auxz00_2651);
															}}
															{	/* Reduce/cond.scm 216 */
																long BgL_restz00_2197;

																{	/* Reduce/cond.scm 216 */
																	int BgL_arg2644z00_2198;

																	BgL_arg2644z00_2198 = (int) (((long) 16));
																	{	/* Reduce/cond.scm 216 */
																		long BgL_auxz00_2655;

																		BgL_auxz00_2655 =
																			(long) (BgL_arg2644z00_2198);
																		BgL_restz00_2197 =
																			(BgL_offsetz00_2194 % BgL_auxz00_2655);
																}}
																{	/* Reduce/cond.scm 216 */

																	BgL_method3293z00_2187 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2192,
																			(int) (BgL_modz00_2195)),
																		(int) (BgL_restz00_2197));
									}}}}}}}}
									BgL_res3571z00_2212 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_2187)
										(BgL_method3293z00_2187, (obj_t) (BgL_arg3485z00_1382),
											BEOA));
								}
								BgL_arg3484z00_1381 = BgL_res3571z00_2212;
						}}
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1377))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3484z00_1381), BUNSPEC);
					}
					BgL_auxz00_2641 = BgL_nodez00_1377;
					return (obj_t) (BgL_auxz00_2641);
				}
			}
		}
	}



/* node-cond!-jump-ex-i3331 */
	obj_t BGl_nodezd2condz12zd2jumpzd2exzd2i3331z12zzreduce_condz00(obj_t
		BgL_envz00_2338, obj_t BgL_nodez00_2339)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 205 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1367;

				{	/* Reduce/cond.scm 206 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_2669;

					BgL_nodez00_1367 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2339);
					{	/* Reduce/cond.scm 207 */
						BgL_nodez00_bglt BgL_arg3478z00_1371;

						{	/* Reduce/cond.scm 207 */
							BgL_nodez00_bglt BgL_arg3479z00_1372;

							BgL_arg3479z00_1372 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1367))->
								BgL_exitz00);
							{	/* Reduce/cond.scm 207 */
								BgL_nodez00_bglt BgL_res3565z00_2152;

								{	/* Reduce/cond.scm 207 */
									obj_t BgL_method3293z00_2127;

									{	/* Reduce/cond.scm 207 */
										BgL_objectz00_bglt BgL_objz00_2128;

										BgL_objz00_2128 =
											(BgL_objectz00_bglt) (BgL_arg3479z00_1372);
										{	/* Reduce/cond.scm 207 */
											long BgL_objzd2classzd2numz00_2129;

											BgL_objzd2classzd2numz00_2129 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2128);
											{	/* Reduce/cond.scm 207 */
												obj_t BgL_arg2643z00_2130;

												BgL_arg2643z00_2130 =
													PROCEDURE_REF
													(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
													(int) (((long) 1)));
												{	/* Reduce/cond.scm 207 */
													obj_t BgL_arrayz00_2132;

													int BgL_offsetz00_2133;

													BgL_arrayz00_2132 = BgL_arg2643z00_2130;
													BgL_offsetz00_2133 =
														(int) (BgL_objzd2classzd2numz00_2129);
													{	/* Reduce/cond.scm 207 */
														long BgL_offsetz00_2134;

														BgL_offsetz00_2134 =
															((long) (BgL_offsetz00_2133) - OBJECT_TYPE);
														{	/* Reduce/cond.scm 207 */
															long BgL_modz00_2135;

															{	/* Reduce/cond.scm 207 */
																int BgL_arg2645z00_2136;

																BgL_arg2645z00_2136 = (int) (((long) 16));
																{	/* Reduce/cond.scm 207 */
																	long BgL_auxz00_2679;

																	BgL_auxz00_2679 =
																		(long) (BgL_arg2645z00_2136);
																	BgL_modz00_2135 =
																		(BgL_offsetz00_2134 / BgL_auxz00_2679);
															}}
															{	/* Reduce/cond.scm 207 */
																long BgL_restz00_2137;

																{	/* Reduce/cond.scm 207 */
																	int BgL_arg2644z00_2138;

																	BgL_arg2644z00_2138 = (int) (((long) 16));
																	{	/* Reduce/cond.scm 207 */
																		long BgL_auxz00_2683;

																		BgL_auxz00_2683 =
																			(long) (BgL_arg2644z00_2138);
																		BgL_restz00_2137 =
																			(BgL_offsetz00_2134 % BgL_auxz00_2683);
																}}
																{	/* Reduce/cond.scm 207 */

																	BgL_method3293z00_2127 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2132,
																			(int) (BgL_modz00_2135)),
																		(int) (BgL_restz00_2137));
									}}}}}}}}
									BgL_res3565z00_2152 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_2127)
										(BgL_method3293z00_2127, (obj_t) (BgL_arg3479z00_1372),
											BEOA));
								}
								BgL_arg3478z00_1371 = BgL_res3565z00_2152;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1367))->
								BgL_exitz00) =
							((BgL_nodez00_bglt) BgL_arg3478z00_1371), BUNSPEC);
					}
					{	/* Reduce/cond.scm 208 */
						BgL_nodez00_bglt BgL_arg3480z00_1373;

						{	/* Reduce/cond.scm 208 */
							BgL_nodez00_bglt BgL_arg3482z00_1374;

							BgL_arg3482z00_1374 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1367))->
								BgL_valuez00);
							{	/* Reduce/cond.scm 208 */
								BgL_nodez00_bglt BgL_res3568z00_2182;

								{	/* Reduce/cond.scm 208 */
									obj_t BgL_method3293z00_2157;

									{	/* Reduce/cond.scm 208 */
										BgL_objectz00_bglt BgL_objz00_2158;

										BgL_objz00_2158 =
											(BgL_objectz00_bglt) (BgL_arg3482z00_1374);
										{	/* Reduce/cond.scm 208 */
											long BgL_objzd2classzd2numz00_2159;

											BgL_objzd2classzd2numz00_2159 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2158);
											{	/* Reduce/cond.scm 208 */
												obj_t BgL_arg2643z00_2160;

												BgL_arg2643z00_2160 =
													PROCEDURE_REF
													(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
													(int) (((long) 1)));
												{	/* Reduce/cond.scm 208 */
													obj_t BgL_arrayz00_2162;

													int BgL_offsetz00_2163;

													BgL_arrayz00_2162 = BgL_arg2643z00_2160;
													BgL_offsetz00_2163 =
														(int) (BgL_objzd2classzd2numz00_2159);
													{	/* Reduce/cond.scm 208 */
														long BgL_offsetz00_2164;

														BgL_offsetz00_2164 =
															((long) (BgL_offsetz00_2163) - OBJECT_TYPE);
														{	/* Reduce/cond.scm 208 */
															long BgL_modz00_2165;

															{	/* Reduce/cond.scm 208 */
																int BgL_arg2645z00_2166;

																BgL_arg2645z00_2166 = (int) (((long) 16));
																{	/* Reduce/cond.scm 208 */
																	long BgL_auxz00_2704;

																	BgL_auxz00_2704 =
																		(long) (BgL_arg2645z00_2166);
																	BgL_modz00_2165 =
																		(BgL_offsetz00_2164 / BgL_auxz00_2704);
															}}
															{	/* Reduce/cond.scm 208 */
																long BgL_restz00_2167;

																{	/* Reduce/cond.scm 208 */
																	int BgL_arg2644z00_2168;

																	BgL_arg2644z00_2168 = (int) (((long) 16));
																	{	/* Reduce/cond.scm 208 */
																		long BgL_auxz00_2708;

																		BgL_auxz00_2708 =
																			(long) (BgL_arg2644z00_2168);
																		BgL_restz00_2167 =
																			(BgL_offsetz00_2164 % BgL_auxz00_2708);
																}}
																{	/* Reduce/cond.scm 208 */

																	BgL_method3293z00_2157 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2162,
																			(int) (BgL_modz00_2165)),
																		(int) (BgL_restz00_2167));
									}}}}}}}}
									BgL_res3568z00_2182 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_2157)
										(BgL_method3293z00_2157, (obj_t) (BgL_arg3482z00_1374),
											BEOA));
								}
								BgL_arg3480z00_1373 = BgL_res3568z00_2182;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1367))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3480z00_1373), BUNSPEC);
					}
					BgL_auxz00_2669 = BgL_nodez00_1367;
					return (obj_t) (BgL_auxz00_2669);
				}
			}
		}
	}



/* node-cond!-set-ex-it3328 */
	obj_t BGl_nodezd2condz12zd2setzd2exzd2it3328z12zzreduce_condz00(obj_t
		BgL_envz00_2340, obj_t BgL_nodez00_2341)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 196 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1357;

				{	/* Reduce/cond.scm 197 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_2722;

					BgL_nodez00_1357 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2341);
					{	/* Reduce/cond.scm 198 */
						BgL_nodez00_bglt BgL_arg3473z00_1361;

						{	/* Reduce/cond.scm 198 */
							BgL_nodez00_bglt BgL_arg3474z00_1362;

							BgL_arg3474z00_1362 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1357))->
								BgL_bodyz00);
							{	/* Reduce/cond.scm 198 */
								BgL_nodez00_bglt BgL_res3559z00_2092;

								{	/* Reduce/cond.scm 198 */
									obj_t BgL_method3293z00_2067;

									{	/* Reduce/cond.scm 198 */
										BgL_objectz00_bglt BgL_objz00_2068;

										BgL_objz00_2068 =
											(BgL_objectz00_bglt) (BgL_arg3474z00_1362);
										{	/* Reduce/cond.scm 198 */
											long BgL_objzd2classzd2numz00_2069;

											BgL_objzd2classzd2numz00_2069 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2068);
											{	/* Reduce/cond.scm 198 */
												obj_t BgL_arg2643z00_2070;

												BgL_arg2643z00_2070 =
													PROCEDURE_REF
													(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
													(int) (((long) 1)));
												{	/* Reduce/cond.scm 198 */
													obj_t BgL_arrayz00_2072;

													int BgL_offsetz00_2073;

													BgL_arrayz00_2072 = BgL_arg2643z00_2070;
													BgL_offsetz00_2073 =
														(int) (BgL_objzd2classzd2numz00_2069);
													{	/* Reduce/cond.scm 198 */
														long BgL_offsetz00_2074;

														BgL_offsetz00_2074 =
															((long) (BgL_offsetz00_2073) - OBJECT_TYPE);
														{	/* Reduce/cond.scm 198 */
															long BgL_modz00_2075;

															{	/* Reduce/cond.scm 198 */
																int BgL_arg2645z00_2076;

																BgL_arg2645z00_2076 = (int) (((long) 16));
																{	/* Reduce/cond.scm 198 */
																	long BgL_auxz00_2732;

																	BgL_auxz00_2732 =
																		(long) (BgL_arg2645z00_2076);
																	BgL_modz00_2075 =
																		(BgL_offsetz00_2074 / BgL_auxz00_2732);
															}}
															{	/* Reduce/cond.scm 198 */
																long BgL_restz00_2077;

																{	/* Reduce/cond.scm 198 */
																	int BgL_arg2644z00_2078;

																	BgL_arg2644z00_2078 = (int) (((long) 16));
																	{	/* Reduce/cond.scm 198 */
																		long BgL_auxz00_2736;

																		BgL_auxz00_2736 =
																			(long) (BgL_arg2644z00_2078);
																		BgL_restz00_2077 =
																			(BgL_offsetz00_2074 % BgL_auxz00_2736);
																}}
																{	/* Reduce/cond.scm 198 */

																	BgL_method3293z00_2067 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2072,
																			(int) (BgL_modz00_2075)),
																		(int) (BgL_restz00_2077));
									}}}}}}}}
									BgL_res3559z00_2092 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_2067)
										(BgL_method3293z00_2067, (obj_t) (BgL_arg3474z00_1362),
											BEOA));
								}
								BgL_arg3473z00_1361 = BgL_res3559z00_2092;
						}}
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1357))->
								BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3473z00_1361), BUNSPEC);
					}
					{	/* Reduce/cond.scm 199 */
						BgL_nodez00_bglt BgL_arg3475z00_1363;

						{	/* Reduce/cond.scm 199 */
							BgL_varz00_bglt BgL_arg3476z00_1364;

							BgL_arg3476z00_1364 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1357))->
								BgL_varz00);
							{	/* Reduce/cond.scm 199 */
								BgL_nodez00_bglt BgL_res3562z00_2122;

								{	/* Reduce/cond.scm 199 */
									BgL_nodez00_bglt BgL_nodez00_2096;

									BgL_nodez00_2096 = (BgL_nodez00_bglt) (BgL_arg3476z00_1364);
									{	/* Reduce/cond.scm 199 */
										obj_t BgL_method3293z00_2097;

										{	/* Reduce/cond.scm 199 */
											BgL_objectz00_bglt BgL_objz00_2098;

											BgL_objz00_2098 = (BgL_objectz00_bglt) (BgL_nodez00_2096);
											{	/* Reduce/cond.scm 199 */
												long BgL_objzd2classzd2numz00_2099;

												BgL_objzd2classzd2numz00_2099 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2098);
												{	/* Reduce/cond.scm 199 */
													obj_t BgL_arg2643z00_2100;

													BgL_arg2643z00_2100 =
														PROCEDURE_REF
														(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
														(int) (((long) 1)));
													{	/* Reduce/cond.scm 199 */
														obj_t BgL_arrayz00_2102;

														int BgL_offsetz00_2103;

														BgL_arrayz00_2102 = BgL_arg2643z00_2100;
														BgL_offsetz00_2103 =
															(int) (BgL_objzd2classzd2numz00_2099);
														{	/* Reduce/cond.scm 199 */
															long BgL_offsetz00_2104;

															BgL_offsetz00_2104 =
																((long) (BgL_offsetz00_2103) - OBJECT_TYPE);
															{	/* Reduce/cond.scm 199 */
																long BgL_modz00_2105;

																{	/* Reduce/cond.scm 199 */
																	int BgL_arg2645z00_2106;

																	BgL_arg2645z00_2106 = (int) (((long) 16));
																	{	/* Reduce/cond.scm 199 */
																		long BgL_auxz00_2758;

																		BgL_auxz00_2758 =
																			(long) (BgL_arg2645z00_2106);
																		BgL_modz00_2105 =
																			(BgL_offsetz00_2104 / BgL_auxz00_2758);
																}}
																{	/* Reduce/cond.scm 199 */
																	long BgL_restz00_2107;

																	{	/* Reduce/cond.scm 199 */
																		int BgL_arg2644z00_2108;

																		BgL_arg2644z00_2108 = (int) (((long) 16));
																		{	/* Reduce/cond.scm 199 */
																			long BgL_auxz00_2762;

																			BgL_auxz00_2762 =
																				(long) (BgL_arg2644z00_2108);
																			BgL_restz00_2107 =
																				(BgL_offsetz00_2104 % BgL_auxz00_2762);
																	}}
																	{	/* Reduce/cond.scm 199 */

																		BgL_method3293z00_2097 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2102,
																				(int) (BgL_modz00_2105)),
																			(int) (BgL_restz00_2107));
										}}}}}}}}
										BgL_res3562z00_2122 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3293z00_2097) (BgL_method3293z00_2097,
												(obj_t) (BgL_nodez00_2096), BEOA));
								}}
								BgL_arg3475z00_1363 = BgL_res3562z00_2122;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_2773;

							BgL_auxz00_2773 = (BgL_varz00_bglt) (BgL_arg3475z00_1363);
							((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1357))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_2773), BUNSPEC);
					}}
					BgL_auxz00_2722 = BgL_nodez00_1357;
					return (obj_t) (BgL_auxz00_2722);
				}
			}
		}
	}



/* node-cond!-let-var3325 */
	obj_t BGl_nodezd2condz12zd2letzd2var3325zc0zzreduce_condz00(obj_t
		BgL_envz00_2342, obj_t BgL_nodez00_2343)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 185 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1339;

				{	/* Reduce/cond.scm 186 */
					BgL_letzd2varzd2_bglt BgL_auxz00_2778;

					BgL_nodez00_1339 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2343);
					{	/* Reduce/cond.scm 187 */
						obj_t BgL_g3290z00_1343;

						BgL_g3290z00_1343 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1339))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3288z00_1345;

							BgL_l3288z00_1345 = BgL_g3290z00_1343;
						BgL_zc3anonymousza33465ze3z83_1346:
							if (PAIRP(BgL_l3288z00_1345))
								{	/* Reduce/cond.scm 187 */
									{	/* Reduce/cond.scm 188 */
										obj_t BgL_bindingz00_1348;

										BgL_bindingz00_1348 = CAR(BgL_l3288z00_1345);
										{	/* Reduce/cond.scm 188 */
											BgL_nodez00_bglt BgL_arg3467z00_1349;

											{	/* Reduce/cond.scm 188 */
												obj_t BgL_arg3468z00_1350;

												BgL_arg3468z00_1350 = CDR(BgL_bindingz00_1348);
												{	/* Reduce/cond.scm 188 */
													BgL_nodez00_bglt BgL_res3553z00_2031;

													{	/* Reduce/cond.scm 188 */
														BgL_nodez00_bglt BgL_nodez00_2005;

														BgL_nodez00_2005 =
															(BgL_nodez00_bglt) (BgL_arg3468z00_1350);
														{	/* Reduce/cond.scm 188 */
															obj_t BgL_method3293z00_2006;

															{	/* Reduce/cond.scm 188 */
																BgL_objectz00_bglt BgL_objz00_2007;

																BgL_objz00_2007 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2005);
																{	/* Reduce/cond.scm 188 */
																	long BgL_objzd2classzd2numz00_2008;

																	BgL_objzd2classzd2numz00_2008 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2007);
																	{	/* Reduce/cond.scm 188 */
																		obj_t BgL_arg2643z00_2009;

																		BgL_arg2643z00_2009 =
																			PROCEDURE_REF
																			(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
																			(int) (((long) 1)));
																		{	/* Reduce/cond.scm 188 */
																			obj_t BgL_arrayz00_2011;

																			int BgL_offsetz00_2012;

																			BgL_arrayz00_2011 = BgL_arg2643z00_2009;
																			BgL_offsetz00_2012 =
																				(int) (BgL_objzd2classzd2numz00_2008);
																			{	/* Reduce/cond.scm 188 */
																				long BgL_offsetz00_2013;

																				BgL_offsetz00_2013 =
																					(
																					(long) (BgL_offsetz00_2012) -
																					OBJECT_TYPE);
																				{	/* Reduce/cond.scm 188 */
																					long BgL_modz00_2014;

																					{	/* Reduce/cond.scm 188 */
																						int BgL_arg2645z00_2015;

																						BgL_arg2645z00_2015 =
																							(int) (((long) 16));
																						{	/* Reduce/cond.scm 188 */
																							long BgL_auxz00_2793;

																							BgL_auxz00_2793 =
																								(long) (BgL_arg2645z00_2015);
																							BgL_modz00_2014 =
																								(BgL_offsetz00_2013 /
																								BgL_auxz00_2793);
																					}}
																					{	/* Reduce/cond.scm 188 */
																						long BgL_restz00_2016;

																						{	/* Reduce/cond.scm 188 */
																							int BgL_arg2644z00_2017;

																							BgL_arg2644z00_2017 =
																								(int) (((long) 16));
																							{	/* Reduce/cond.scm 188 */
																								long BgL_auxz00_2797;

																								BgL_auxz00_2797 =
																									(long) (BgL_arg2644z00_2017);
																								BgL_restz00_2016 =
																									(BgL_offsetz00_2013 %
																									BgL_auxz00_2797);
																						}}
																						{	/* Reduce/cond.scm 188 */

																							BgL_method3293z00_2006 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2011,
																									(int) (BgL_modz00_2014)),
																								(int) (BgL_restz00_2016));
															}}}}}}}}
															BgL_res3553z00_2031 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3293z00_2006)
																(BgL_method3293z00_2006,
																	(obj_t) (BgL_nodez00_2005), BEOA));
													}}
													BgL_arg3467z00_1349 = BgL_res3553z00_2031;
											}}
											{	/* Reduce/cond.scm 188 */
												obj_t BgL_auxz00_2808;

												BgL_auxz00_2808 = (obj_t) (BgL_arg3467z00_1349);
												SET_CDR(BgL_bindingz00_1348, BgL_auxz00_2808);
									}}}
									{
										obj_t BgL_l3288z00_2811;

										BgL_l3288z00_2811 = CDR(BgL_l3288z00_1345);
										BgL_l3288z00_1345 = BgL_l3288z00_2811;
										goto BgL_zc3anonymousza33465ze3z83_1346;
									}
								}
							else
								{	/* Reduce/cond.scm 187 */
									((bool_t) 1);
								}
						}
					}
					{	/* Reduce/cond.scm 190 */
						BgL_nodez00_bglt BgL_arg3470z00_1353;

						{	/* Reduce/cond.scm 190 */
							BgL_nodez00_bglt BgL_arg3471z00_1354;

							BgL_arg3471z00_1354 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1339))->BgL_bodyz00);
							{	/* Reduce/cond.scm 190 */
								BgL_nodez00_bglt BgL_res3556z00_2062;

								{	/* Reduce/cond.scm 190 */
									obj_t BgL_method3293z00_2037;

									{	/* Reduce/cond.scm 190 */
										BgL_objectz00_bglt BgL_objz00_2038;

										BgL_objz00_2038 =
											(BgL_objectz00_bglt) (BgL_arg3471z00_1354);
										{	/* Reduce/cond.scm 190 */
											long BgL_objzd2classzd2numz00_2039;

											BgL_objzd2classzd2numz00_2039 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2038);
											{	/* Reduce/cond.scm 190 */
												obj_t BgL_arg2643z00_2040;

												BgL_arg2643z00_2040 =
													PROCEDURE_REF
													(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
													(int) (((long) 1)));
												{	/* Reduce/cond.scm 190 */
													obj_t BgL_arrayz00_2042;

													int BgL_offsetz00_2043;

													BgL_arrayz00_2042 = BgL_arg2643z00_2040;
													BgL_offsetz00_2043 =
														(int) (BgL_objzd2classzd2numz00_2039);
													{	/* Reduce/cond.scm 190 */
														long BgL_offsetz00_2044;

														BgL_offsetz00_2044 =
															((long) (BgL_offsetz00_2043) - OBJECT_TYPE);
														{	/* Reduce/cond.scm 190 */
															long BgL_modz00_2045;

															{	/* Reduce/cond.scm 190 */
																int BgL_arg2645z00_2046;

																BgL_arg2645z00_2046 = (int) (((long) 16));
																{	/* Reduce/cond.scm 190 */
																	long BgL_auxz00_2822;

																	BgL_auxz00_2822 =
																		(long) (BgL_arg2645z00_2046);
																	BgL_modz00_2045 =
																		(BgL_offsetz00_2044 / BgL_auxz00_2822);
															}}
															{	/* Reduce/cond.scm 190 */
																long BgL_restz00_2047;

																{	/* Reduce/cond.scm 190 */
																	int BgL_arg2644z00_2048;

																	BgL_arg2644z00_2048 = (int) (((long) 16));
																	{	/* Reduce/cond.scm 190 */
																		long BgL_auxz00_2826;

																		BgL_auxz00_2826 =
																			(long) (BgL_arg2644z00_2048);
																		BgL_restz00_2047 =
																			(BgL_offsetz00_2044 % BgL_auxz00_2826);
																}}
																{	/* Reduce/cond.scm 190 */

																	BgL_method3293z00_2037 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2042,
																			(int) (BgL_modz00_2045)),
																		(int) (BgL_restz00_2047));
									}}}}}}}}
									BgL_res3556z00_2062 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_2037)
										(BgL_method3293z00_2037, (obj_t) (BgL_arg3471z00_1354),
											BEOA));
								}
								BgL_arg3470z00_1353 = BgL_res3556z00_2062;
						}}
						((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1339))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3470z00_1353), BUNSPEC);
					}
					BgL_auxz00_2778 = BgL_nodez00_1339;
					return (obj_t) (BgL_auxz00_2778);
				}
			}
		}
	}



/* node-cond!-let-fun3323 */
	obj_t BGl_nodezd2condz12zd2letzd2fun3323zc0zzreduce_condz00(obj_t
		BgL_envz00_2344, obj_t BgL_nodez00_2345)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 173 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1320;

				{	/* Reduce/cond.scm 174 */
					BgL_letzd2funzd2_bglt BgL_auxz00_2840;

					BgL_nodez00_1320 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2345);
					{	/* Reduce/cond.scm 175 */
						obj_t BgL_g3287z00_1324;

						BgL_g3287z00_1324 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1320))->BgL_localsz00);
						{
							obj_t BgL_l3285z00_1326;

							BgL_l3285z00_1326 = BgL_g3287z00_1324;
						BgL_zc3anonymousza33457ze3z83_1327:
							if (PAIRP(BgL_l3285z00_1326))
								{	/* Reduce/cond.scm 175 */
									{	/* Reduce/cond.scm 176 */
										obj_t BgL_localz00_1329;

										BgL_localz00_1329 = CAR(BgL_l3285z00_1326);
										{	/* Reduce/cond.scm 176 */
											BgL_valuez00_bglt BgL_funz00_1330;

											{
												BgL_variablez00_bglt BgL_auxz00_2845;

												BgL_auxz00_2845 =
													(BgL_variablez00_bglt) (BgL_localz00_1329);
												BgL_funz00_1330 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_2845))->
													BgL_valuez00);
											}
											{	/* Reduce/cond.scm 177 */
												BgL_nodez00_bglt BgL_arg3459z00_1331;

												{	/* Reduce/cond.scm 177 */
													obj_t BgL_arg3460z00_1332;

													{
														BgL_sfunz00_bglt BgL_auxz00_2848;

														BgL_auxz00_2848 =
															(BgL_sfunz00_bglt) (BgL_funz00_1330);
														BgL_arg3460z00_1332 =
															(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2848))->
															BgL_bodyz00);
													}
													{	/* Reduce/cond.scm 177 */
														BgL_nodez00_bglt BgL_res3547z00_1967;

														{	/* Reduce/cond.scm 177 */
															BgL_nodez00_bglt BgL_nodez00_1941;

															BgL_nodez00_1941 =
																(BgL_nodez00_bglt) (BgL_arg3460z00_1332);
															{	/* Reduce/cond.scm 177 */
																obj_t BgL_method3293z00_1942;

																{	/* Reduce/cond.scm 177 */
																	BgL_objectz00_bglt BgL_objz00_1943;

																	BgL_objz00_1943 =
																		(BgL_objectz00_bglt) (BgL_nodez00_1941);
																	{	/* Reduce/cond.scm 177 */
																		long BgL_objzd2classzd2numz00_1944;

																		BgL_objzd2classzd2numz00_1944 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_1943);
																		{	/* Reduce/cond.scm 177 */
																			obj_t BgL_arg2643z00_1945;

																			BgL_arg2643z00_1945 =
																				PROCEDURE_REF
																				(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
																				(int) (((long) 1)));
																			{	/* Reduce/cond.scm 177 */
																				obj_t BgL_arrayz00_1947;

																				int BgL_offsetz00_1948;

																				BgL_arrayz00_1947 = BgL_arg2643z00_1945;
																				BgL_offsetz00_1948 =
																					(int) (BgL_objzd2classzd2numz00_1944);
																				{	/* Reduce/cond.scm 177 */
																					long BgL_offsetz00_1949;

																					BgL_offsetz00_1949 =
																						(
																						(long) (BgL_offsetz00_1948) -
																						OBJECT_TYPE);
																					{	/* Reduce/cond.scm 177 */
																						long BgL_modz00_1950;

																						{	/* Reduce/cond.scm 177 */
																							int BgL_arg2645z00_1951;

																							BgL_arg2645z00_1951 =
																								(int) (((long) 16));
																							{	/* Reduce/cond.scm 177 */
																								long BgL_auxz00_2860;

																								BgL_auxz00_2860 =
																									(long) (BgL_arg2645z00_1951);
																								BgL_modz00_1950 =
																									(BgL_offsetz00_1949 /
																									BgL_auxz00_2860);
																						}}
																						{	/* Reduce/cond.scm 177 */
																							long BgL_restz00_1952;

																							{	/* Reduce/cond.scm 177 */
																								int BgL_arg2644z00_1953;

																								BgL_arg2644z00_1953 =
																									(int) (((long) 16));
																								{	/* Reduce/cond.scm 177 */
																									long BgL_auxz00_2864;

																									BgL_auxz00_2864 =
																										(long)
																										(BgL_arg2644z00_1953);
																									BgL_restz00_1952 =
																										(BgL_offsetz00_1949 %
																										BgL_auxz00_2864);
																							}}
																							{	/* Reduce/cond.scm 177 */

																								BgL_method3293z00_1942 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_1947,
																										(int) (BgL_modz00_1950)),
																									(int) (BgL_restz00_1952));
																}}}}}}}}
																BgL_res3547z00_1967 =
																	(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																	(BgL_method3293z00_1942)
																	(BgL_method3293z00_1942,
																		(obj_t) (BgL_nodez00_1941), BEOA));
														}}
														BgL_arg3459z00_1331 = BgL_res3547z00_1967;
												}}
												{
													obj_t BgL_auxz00_2877;

													BgL_sfunz00_bglt BgL_auxz00_2875;

													BgL_auxz00_2877 = (obj_t) (BgL_arg3459z00_1331);
													BgL_auxz00_2875 =
														(BgL_sfunz00_bglt) (BgL_funz00_1330);
													((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2875))->
															BgL_bodyz00) =
														((obj_t) BgL_auxz00_2877), BUNSPEC);
									}}}}
									{
										obj_t BgL_l3285z00_2880;

										BgL_l3285z00_2880 = CDR(BgL_l3285z00_1326);
										BgL_l3285z00_1326 = BgL_l3285z00_2880;
										goto BgL_zc3anonymousza33457ze3z83_1327;
									}
								}
							else
								{	/* Reduce/cond.scm 175 */
									((bool_t) 1);
								}
						}
					}
					{	/* Reduce/cond.scm 179 */
						BgL_nodez00_bglt BgL_arg3462z00_1335;

						{	/* Reduce/cond.scm 179 */
							BgL_nodez00_bglt BgL_arg3463z00_1336;

							BgL_arg3463z00_1336 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1320))->BgL_bodyz00);
							{	/* Reduce/cond.scm 179 */
								BgL_nodez00_bglt BgL_res3550z00_1998;

								{	/* Reduce/cond.scm 179 */
									obj_t BgL_method3293z00_1973;

									{	/* Reduce/cond.scm 179 */
										BgL_objectz00_bglt BgL_objz00_1974;

										BgL_objz00_1974 =
											(BgL_objectz00_bglt) (BgL_arg3463z00_1336);
										{	/* Reduce/cond.scm 179 */
											long BgL_objzd2classzd2numz00_1975;

											BgL_objzd2classzd2numz00_1975 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1974);
											{	/* Reduce/cond.scm 179 */
												obj_t BgL_arg2643z00_1976;

												BgL_arg2643z00_1976 =
													PROCEDURE_REF
													(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
													(int) (((long) 1)));
												{	/* Reduce/cond.scm 179 */
													obj_t BgL_arrayz00_1978;

													int BgL_offsetz00_1979;

													BgL_arrayz00_1978 = BgL_arg2643z00_1976;
													BgL_offsetz00_1979 =
														(int) (BgL_objzd2classzd2numz00_1975);
													{	/* Reduce/cond.scm 179 */
														long BgL_offsetz00_1980;

														BgL_offsetz00_1980 =
															((long) (BgL_offsetz00_1979) - OBJECT_TYPE);
														{	/* Reduce/cond.scm 179 */
															long BgL_modz00_1981;

															{	/* Reduce/cond.scm 179 */
																int BgL_arg2645z00_1982;

																BgL_arg2645z00_1982 = (int) (((long) 16));
																{	/* Reduce/cond.scm 179 */
																	long BgL_auxz00_2891;

																	BgL_auxz00_2891 =
																		(long) (BgL_arg2645z00_1982);
																	BgL_modz00_1981 =
																		(BgL_offsetz00_1980 / BgL_auxz00_2891);
															}}
															{	/* Reduce/cond.scm 179 */
																long BgL_restz00_1983;

																{	/* Reduce/cond.scm 179 */
																	int BgL_arg2644z00_1984;

																	BgL_arg2644z00_1984 = (int) (((long) 16));
																	{	/* Reduce/cond.scm 179 */
																		long BgL_auxz00_2895;

																		BgL_auxz00_2895 =
																			(long) (BgL_arg2644z00_1984);
																		BgL_restz00_1983 =
																			(BgL_offsetz00_1980 % BgL_auxz00_2895);
																}}
																{	/* Reduce/cond.scm 179 */

																	BgL_method3293z00_1973 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1978,
																			(int) (BgL_modz00_1981)),
																		(int) (BgL_restz00_1983));
									}}}}}}}}
									BgL_res3550z00_1998 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1973)
										(BgL_method3293z00_1973, (obj_t) (BgL_arg3463z00_1336),
											BEOA));
								}
								BgL_arg3462z00_1335 = BgL_res3550z00_1998;
						}}
						((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1320))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3462z00_1335), BUNSPEC);
					}
					BgL_auxz00_2840 = BgL_nodez00_1320;
					return (obj_t) (BgL_auxz00_2840);
				}
			}
		}
	}



/* node-cond!-select3321 */
	obj_t BGl_nodezd2condz12zd2select3321z12zzreduce_condz00(obj_t
		BgL_envz00_2346, obj_t BgL_nodez00_2347)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 162 */
			{
				BgL_selectz00_bglt BgL_nodez00_1302;

				{	/* Reduce/cond.scm 163 */
					BgL_selectz00_bglt BgL_auxz00_2909;

					BgL_nodez00_1302 = (BgL_selectz00_bglt) (BgL_nodez00_2347);
					{	/* Reduce/cond.scm 164 */
						BgL_nodez00_bglt BgL_arg3449z00_1306;

						{	/* Reduce/cond.scm 164 */
							BgL_nodez00_bglt BgL_arg3450z00_1307;

							BgL_arg3450z00_1307 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1302))->BgL_testz00);
							{	/* Reduce/cond.scm 164 */
								BgL_nodez00_bglt BgL_res3541z00_1899;

								{	/* Reduce/cond.scm 164 */
									obj_t BgL_method3293z00_1874;

									{	/* Reduce/cond.scm 164 */
										BgL_objectz00_bglt BgL_objz00_1875;

										BgL_objz00_1875 =
											(BgL_objectz00_bglt) (BgL_arg3450z00_1307);
										{	/* Reduce/cond.scm 164 */
											long BgL_objzd2classzd2numz00_1876;

											BgL_objzd2classzd2numz00_1876 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1875);
											{	/* Reduce/cond.scm 164 */
												obj_t BgL_arg2643z00_1877;

												BgL_arg2643z00_1877 =
													PROCEDURE_REF
													(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
													(int) (((long) 1)));
												{	/* Reduce/cond.scm 164 */
													obj_t BgL_arrayz00_1879;

													int BgL_offsetz00_1880;

													BgL_arrayz00_1879 = BgL_arg2643z00_1877;
													BgL_offsetz00_1880 =
														(int) (BgL_objzd2classzd2numz00_1876);
													{	/* Reduce/cond.scm 164 */
														long BgL_offsetz00_1881;

														BgL_offsetz00_1881 =
															((long) (BgL_offsetz00_1880) - OBJECT_TYPE);
														{	/* Reduce/cond.scm 164 */
															long BgL_modz00_1882;

															{	/* Reduce/cond.scm 164 */
																int BgL_arg2645z00_1883;

																BgL_arg2645z00_1883 = (int) (((long) 16));
																{	/* Reduce/cond.scm 164 */
																	long BgL_auxz00_2919;

																	BgL_auxz00_2919 =
																		(long) (BgL_arg2645z00_1883);
																	BgL_modz00_1882 =
																		(BgL_offsetz00_1881 / BgL_auxz00_2919);
															}}
															{	/* Reduce/cond.scm 164 */
																long BgL_restz00_1884;

																{	/* Reduce/cond.scm 164 */
																	int BgL_arg2644z00_1885;

																	BgL_arg2644z00_1885 = (int) (((long) 16));
																	{	/* Reduce/cond.scm 164 */
																		long BgL_auxz00_2923;

																		BgL_auxz00_2923 =
																			(long) (BgL_arg2644z00_1885);
																		BgL_restz00_1884 =
																			(BgL_offsetz00_1881 % BgL_auxz00_2923);
																}}
																{	/* Reduce/cond.scm 164 */

																	BgL_method3293z00_1874 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1879,
																			(int) (BgL_modz00_1882)),
																		(int) (BgL_restz00_1884));
									}}}}}}}}
									BgL_res3541z00_1899 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1874)
										(BgL_method3293z00_1874, (obj_t) (BgL_arg3450z00_1307),
											BEOA));
								}
								BgL_arg3449z00_1306 = BgL_res3541z00_1899;
						}}
						((((BgL_selectz00_bglt) CREF(BgL_nodez00_1302))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3449z00_1306), BUNSPEC);
					}
					{	/* Reduce/cond.scm 165 */
						obj_t BgL_g3284z00_1308;

						BgL_g3284z00_1308 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1302))->BgL_clausesz00);
						{
							obj_t BgL_l3282z00_1310;

							BgL_l3282z00_1310 = BgL_g3284z00_1308;
						BgL_zc3anonymousza33451ze3z83_1311:
							if (PAIRP(BgL_l3282z00_1310))
								{	/* Reduce/cond.scm 165 */
									{	/* Reduce/cond.scm 166 */
										obj_t BgL_clausez00_1313;

										BgL_clausez00_1313 = CAR(BgL_l3282z00_1310);
										{	/* Reduce/cond.scm 166 */
											BgL_nodez00_bglt BgL_arg3453z00_1314;

											{	/* Reduce/cond.scm 166 */
												obj_t BgL_arg3454z00_1315;

												BgL_arg3454z00_1315 = CDR(BgL_clausez00_1313);
												{	/* Reduce/cond.scm 166 */
													BgL_nodez00_bglt BgL_res3544z00_1932;

													{	/* Reduce/cond.scm 166 */
														BgL_nodez00_bglt BgL_nodez00_1906;

														BgL_nodez00_1906 =
															(BgL_nodez00_bglt) (BgL_arg3454z00_1315);
														{	/* Reduce/cond.scm 166 */
															obj_t BgL_method3293z00_1907;

															{	/* Reduce/cond.scm 166 */
																BgL_objectz00_bglt BgL_objz00_1908;

																BgL_objz00_1908 =
																	(BgL_objectz00_bglt) (BgL_nodez00_1906);
																{	/* Reduce/cond.scm 166 */
																	long BgL_objzd2classzd2numz00_1909;

																	BgL_objzd2classzd2numz00_1909 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_1908);
																	{	/* Reduce/cond.scm 166 */
																		obj_t BgL_arg2643z00_1910;

																		BgL_arg2643z00_1910 =
																			PROCEDURE_REF
																			(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
																			(int) (((long) 1)));
																		{	/* Reduce/cond.scm 166 */
																			obj_t BgL_arrayz00_1912;

																			int BgL_offsetz00_1913;

																			BgL_arrayz00_1912 = BgL_arg2643z00_1910;
																			BgL_offsetz00_1913 =
																				(int) (BgL_objzd2classzd2numz00_1909);
																			{	/* Reduce/cond.scm 166 */
																				long BgL_offsetz00_1914;

																				BgL_offsetz00_1914 =
																					(
																					(long) (BgL_offsetz00_1913) -
																					OBJECT_TYPE);
																				{	/* Reduce/cond.scm 166 */
																					long BgL_modz00_1915;

																					{	/* Reduce/cond.scm 166 */
																						int BgL_arg2645z00_1916;

																						BgL_arg2645z00_1916 =
																							(int) (((long) 16));
																						{	/* Reduce/cond.scm 166 */
																							long BgL_auxz00_2949;

																							BgL_auxz00_2949 =
																								(long) (BgL_arg2645z00_1916);
																							BgL_modz00_1915 =
																								(BgL_offsetz00_1914 /
																								BgL_auxz00_2949);
																					}}
																					{	/* Reduce/cond.scm 166 */
																						long BgL_restz00_1917;

																						{	/* Reduce/cond.scm 166 */
																							int BgL_arg2644z00_1918;

																							BgL_arg2644z00_1918 =
																								(int) (((long) 16));
																							{	/* Reduce/cond.scm 166 */
																								long BgL_auxz00_2953;

																								BgL_auxz00_2953 =
																									(long) (BgL_arg2644z00_1918);
																								BgL_restz00_1917 =
																									(BgL_offsetz00_1914 %
																									BgL_auxz00_2953);
																						}}
																						{	/* Reduce/cond.scm 166 */

																							BgL_method3293z00_1907 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_1912,
																									(int) (BgL_modz00_1915)),
																								(int) (BgL_restz00_1917));
															}}}}}}}}
															BgL_res3544z00_1932 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3293z00_1907)
																(BgL_method3293z00_1907,
																	(obj_t) (BgL_nodez00_1906), BEOA));
													}}
													BgL_arg3453z00_1314 = BgL_res3544z00_1932;
											}}
											{	/* Reduce/cond.scm 166 */
												obj_t BgL_auxz00_2964;

												BgL_auxz00_2964 = (obj_t) (BgL_arg3453z00_1314);
												SET_CDR(BgL_clausez00_1313, BgL_auxz00_2964);
									}}}
									{
										obj_t BgL_l3282z00_2967;

										BgL_l3282z00_2967 = CDR(BgL_l3282z00_1310);
										BgL_l3282z00_1310 = BgL_l3282z00_2967;
										goto BgL_zc3anonymousza33451ze3z83_1311;
									}
								}
							else
								{	/* Reduce/cond.scm 165 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_2909 = BgL_nodez00_1302;
					return (obj_t) (BgL_auxz00_2909);
				}
			}
		}
	}



/* node-cond!-fail3319 */
	obj_t BGl_nodezd2condz12zd2fail3319z12zzreduce_condz00(obj_t BgL_envz00_2348,
		obj_t BgL_nodez00_2349)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 152 */
			{
				BgL_failz00_bglt BgL_nodez00_1290;

				{	/* Reduce/cond.scm 153 */
					BgL_failz00_bglt BgL_auxz00_2971;

					BgL_nodez00_1290 = (BgL_failz00_bglt) (BgL_nodez00_2349);
					{	/* Reduce/cond.scm 154 */
						BgL_nodez00_bglt BgL_arg3441z00_1294;

						{	/* Reduce/cond.scm 154 */
							BgL_nodez00_bglt BgL_arg3443z00_1295;

							BgL_arg3443z00_1295 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1290))->BgL_procz00);
							{	/* Reduce/cond.scm 154 */
								BgL_nodez00_bglt BgL_res3532z00_1809;

								{	/* Reduce/cond.scm 154 */
									obj_t BgL_method3293z00_1784;

									{	/* Reduce/cond.scm 154 */
										BgL_objectz00_bglt BgL_objz00_1785;

										BgL_objz00_1785 =
											(BgL_objectz00_bglt) (BgL_arg3443z00_1295);
										{	/* Reduce/cond.scm 154 */
											long BgL_objzd2classzd2numz00_1786;

											BgL_objzd2classzd2numz00_1786 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1785);
											{	/* Reduce/cond.scm 154 */
												obj_t BgL_arg2643z00_1787;

												BgL_arg2643z00_1787 =
													PROCEDURE_REF
													(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
													(int) (((long) 1)));
												{	/* Reduce/cond.scm 154 */
													obj_t BgL_arrayz00_1789;

													int BgL_offsetz00_1790;

													BgL_arrayz00_1789 = BgL_arg2643z00_1787;
													BgL_offsetz00_1790 =
														(int) (BgL_objzd2classzd2numz00_1786);
													{	/* Reduce/cond.scm 154 */
														long BgL_offsetz00_1791;

														BgL_offsetz00_1791 =
															((long) (BgL_offsetz00_1790) - OBJECT_TYPE);
														{	/* Reduce/cond.scm 154 */
															long BgL_modz00_1792;

															{	/* Reduce/cond.scm 154 */
																int BgL_arg2645z00_1793;

																BgL_arg2645z00_1793 = (int) (((long) 16));
																{	/* Reduce/cond.scm 154 */
																	long BgL_auxz00_2981;

																	BgL_auxz00_2981 =
																		(long) (BgL_arg2645z00_1793);
																	BgL_modz00_1792 =
																		(BgL_offsetz00_1791 / BgL_auxz00_2981);
															}}
															{	/* Reduce/cond.scm 154 */
																long BgL_restz00_1794;

																{	/* Reduce/cond.scm 154 */
																	int BgL_arg2644z00_1795;

																	BgL_arg2644z00_1795 = (int) (((long) 16));
																	{	/* Reduce/cond.scm 154 */
																		long BgL_auxz00_2985;

																		BgL_auxz00_2985 =
																			(long) (BgL_arg2644z00_1795);
																		BgL_restz00_1794 =
																			(BgL_offsetz00_1791 % BgL_auxz00_2985);
																}}
																{	/* Reduce/cond.scm 154 */

																	BgL_method3293z00_1784 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1789,
																			(int) (BgL_modz00_1792)),
																		(int) (BgL_restz00_1794));
									}}}}}}}}
									BgL_res3532z00_1809 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1784)
										(BgL_method3293z00_1784, (obj_t) (BgL_arg3443z00_1295),
											BEOA));
								}
								BgL_arg3441z00_1294 = BgL_res3532z00_1809;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1290))->BgL_procz00) =
							((BgL_nodez00_bglt) BgL_arg3441z00_1294), BUNSPEC);
					}
					{	/* Reduce/cond.scm 155 */
						BgL_nodez00_bglt BgL_arg3444z00_1296;

						{	/* Reduce/cond.scm 155 */
							BgL_nodez00_bglt BgL_arg3445z00_1297;

							BgL_arg3445z00_1297 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1290))->BgL_msgz00);
							{	/* Reduce/cond.scm 155 */
								BgL_nodez00_bglt BgL_res3535z00_1839;

								{	/* Reduce/cond.scm 155 */
									obj_t BgL_method3293z00_1814;

									{	/* Reduce/cond.scm 155 */
										BgL_objectz00_bglt BgL_objz00_1815;

										BgL_objz00_1815 =
											(BgL_objectz00_bglt) (BgL_arg3445z00_1297);
										{	/* Reduce/cond.scm 155 */
											long BgL_objzd2classzd2numz00_1816;

											BgL_objzd2classzd2numz00_1816 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1815);
											{	/* Reduce/cond.scm 155 */
												obj_t BgL_arg2643z00_1817;

												BgL_arg2643z00_1817 =
													PROCEDURE_REF
													(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
													(int) (((long) 1)));
												{	/* Reduce/cond.scm 155 */
													obj_t BgL_arrayz00_1819;

													int BgL_offsetz00_1820;

													BgL_arrayz00_1819 = BgL_arg2643z00_1817;
													BgL_offsetz00_1820 =
														(int) (BgL_objzd2classzd2numz00_1816);
													{	/* Reduce/cond.scm 155 */
														long BgL_offsetz00_1821;

														BgL_offsetz00_1821 =
															((long) (BgL_offsetz00_1820) - OBJECT_TYPE);
														{	/* Reduce/cond.scm 155 */
															long BgL_modz00_1822;

															{	/* Reduce/cond.scm 155 */
																int BgL_arg2645z00_1823;

																BgL_arg2645z00_1823 = (int) (((long) 16));
																{	/* Reduce/cond.scm 155 */
																	long BgL_auxz00_3006;

																	BgL_auxz00_3006 =
																		(long) (BgL_arg2645z00_1823);
																	BgL_modz00_1822 =
																		(BgL_offsetz00_1821 / BgL_auxz00_3006);
															}}
															{	/* Reduce/cond.scm 155 */
																long BgL_restz00_1824;

																{	/* Reduce/cond.scm 155 */
																	int BgL_arg2644z00_1825;

																	BgL_arg2644z00_1825 = (int) (((long) 16));
																	{	/* Reduce/cond.scm 155 */
																		long BgL_auxz00_3010;

																		BgL_auxz00_3010 =
																			(long) (BgL_arg2644z00_1825);
																		BgL_restz00_1824 =
																			(BgL_offsetz00_1821 % BgL_auxz00_3010);
																}}
																{	/* Reduce/cond.scm 155 */

																	BgL_method3293z00_1814 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1819,
																			(int) (BgL_modz00_1822)),
																		(int) (BgL_restz00_1824));
									}}}}}}}}
									BgL_res3535z00_1839 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1814)
										(BgL_method3293z00_1814, (obj_t) (BgL_arg3445z00_1297),
											BEOA));
								}
								BgL_arg3444z00_1296 = BgL_res3535z00_1839;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1290))->BgL_msgz00) =
							((BgL_nodez00_bglt) BgL_arg3444z00_1296), BUNSPEC);
					}
					{	/* Reduce/cond.scm 156 */
						BgL_nodez00_bglt BgL_arg3446z00_1298;

						{	/* Reduce/cond.scm 156 */
							BgL_nodez00_bglt BgL_arg3447z00_1299;

							BgL_arg3447z00_1299 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1290))->BgL_objz00);
							{	/* Reduce/cond.scm 156 */
								BgL_nodez00_bglt BgL_res3538z00_1869;

								{	/* Reduce/cond.scm 156 */
									obj_t BgL_method3293z00_1844;

									{	/* Reduce/cond.scm 156 */
										BgL_objectz00_bglt BgL_objz00_1845;

										BgL_objz00_1845 =
											(BgL_objectz00_bglt) (BgL_arg3447z00_1299);
										{	/* Reduce/cond.scm 156 */
											long BgL_objzd2classzd2numz00_1846;

											BgL_objzd2classzd2numz00_1846 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1845);
											{	/* Reduce/cond.scm 156 */
												obj_t BgL_arg2643z00_1847;

												BgL_arg2643z00_1847 =
													PROCEDURE_REF
													(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
													(int) (((long) 1)));
												{	/* Reduce/cond.scm 156 */
													obj_t BgL_arrayz00_1849;

													int BgL_offsetz00_1850;

													BgL_arrayz00_1849 = BgL_arg2643z00_1847;
													BgL_offsetz00_1850 =
														(int) (BgL_objzd2classzd2numz00_1846);
													{	/* Reduce/cond.scm 156 */
														long BgL_offsetz00_1851;

														BgL_offsetz00_1851 =
															((long) (BgL_offsetz00_1850) - OBJECT_TYPE);
														{	/* Reduce/cond.scm 156 */
															long BgL_modz00_1852;

															{	/* Reduce/cond.scm 156 */
																int BgL_arg2645z00_1853;

																BgL_arg2645z00_1853 = (int) (((long) 16));
																{	/* Reduce/cond.scm 156 */
																	long BgL_auxz00_3031;

																	BgL_auxz00_3031 =
																		(long) (BgL_arg2645z00_1853);
																	BgL_modz00_1852 =
																		(BgL_offsetz00_1851 / BgL_auxz00_3031);
															}}
															{	/* Reduce/cond.scm 156 */
																long BgL_restz00_1854;

																{	/* Reduce/cond.scm 156 */
																	int BgL_arg2644z00_1855;

																	BgL_arg2644z00_1855 = (int) (((long) 16));
																	{	/* Reduce/cond.scm 156 */
																		long BgL_auxz00_3035;

																		BgL_auxz00_3035 =
																			(long) (BgL_arg2644z00_1855);
																		BgL_restz00_1854 =
																			(BgL_offsetz00_1851 % BgL_auxz00_3035);
																}}
																{	/* Reduce/cond.scm 156 */

																	BgL_method3293z00_1844 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1849,
																			(int) (BgL_modz00_1852)),
																		(int) (BgL_restz00_1854));
									}}}}}}}}
									BgL_res3538z00_1869 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1844)
										(BgL_method3293z00_1844, (obj_t) (BgL_arg3447z00_1299),
											BEOA));
								}
								BgL_arg3446z00_1298 = BgL_res3538z00_1869;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1290))->BgL_objz00) =
							((BgL_nodez00_bglt) BgL_arg3446z00_1298), BUNSPEC);
					}
					BgL_auxz00_2971 = BgL_nodez00_1290;
					return (obj_t) (BgL_auxz00_2971);
				}
			}
		}
	}



/* node-cond!-condition3317 */
	obj_t BGl_nodezd2condz12zd2condition3317z12zzreduce_condz00(obj_t
		BgL_envz00_2350, obj_t BgL_nodez00_2351)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 135 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1274;

				BgL_nodez00_1274 = (BgL_conditionalz00_bglt) (BgL_nodez00_2351);
				{	/* Reduce/cond.scm 137 */
					BgL_nodez00_bglt BgL_arg3430z00_1278;

					{	/* Reduce/cond.scm 137 */
						BgL_nodez00_bglt BgL_arg3431z00_1279;

						BgL_arg3431z00_1279 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1274))->BgL_testz00);
						{	/* Reduce/cond.scm 137 */
							BgL_nodez00_bglt BgL_res3523z00_1711;

							{	/* Reduce/cond.scm 137 */
								obj_t BgL_method3293z00_1686;

								{	/* Reduce/cond.scm 137 */
									BgL_objectz00_bglt BgL_objz00_1687;

									BgL_objz00_1687 = (BgL_objectz00_bglt) (BgL_arg3431z00_1279);
									{	/* Reduce/cond.scm 137 */
										long BgL_objzd2classzd2numz00_1688;

										BgL_objzd2classzd2numz00_1688 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1687);
										{	/* Reduce/cond.scm 137 */
											obj_t BgL_arg2643z00_1689;

											BgL_arg2643z00_1689 =
												PROCEDURE_REF
												(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
												(int) (((long) 1)));
											{	/* Reduce/cond.scm 137 */
												obj_t BgL_arrayz00_1691;

												int BgL_offsetz00_1692;

												BgL_arrayz00_1691 = BgL_arg2643z00_1689;
												BgL_offsetz00_1692 =
													(int) (BgL_objzd2classzd2numz00_1688);
												{	/* Reduce/cond.scm 137 */
													long BgL_offsetz00_1693;

													BgL_offsetz00_1693 =
														((long) (BgL_offsetz00_1692) - OBJECT_TYPE);
													{	/* Reduce/cond.scm 137 */
														long BgL_modz00_1694;

														{	/* Reduce/cond.scm 137 */
															int BgL_arg2645z00_1695;

															BgL_arg2645z00_1695 = (int) (((long) 16));
															{	/* Reduce/cond.scm 137 */
																long BgL_auxz00_3058;

																BgL_auxz00_3058 = (long) (BgL_arg2645z00_1695);
																BgL_modz00_1694 =
																	(BgL_offsetz00_1693 / BgL_auxz00_3058);
														}}
														{	/* Reduce/cond.scm 137 */
															long BgL_restz00_1696;

															{	/* Reduce/cond.scm 137 */
																int BgL_arg2644z00_1697;

																BgL_arg2644z00_1697 = (int) (((long) 16));
																{	/* Reduce/cond.scm 137 */
																	long BgL_auxz00_3062;

																	BgL_auxz00_3062 =
																		(long) (BgL_arg2644z00_1697);
																	BgL_restz00_1696 =
																		(BgL_offsetz00_1693 % BgL_auxz00_3062);
															}}
															{	/* Reduce/cond.scm 137 */

																BgL_method3293z00_1686 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1691,
																		(int) (BgL_modz00_1694)),
																	(int) (BgL_restz00_1696));
								}}}}}}}}
								BgL_res3523z00_1711 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1686)
									(BgL_method3293z00_1686, (obj_t) (BgL_arg3431z00_1279),
										BEOA));
							}
							BgL_arg3430z00_1278 = BgL_res3523z00_1711;
					}}
					((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1274))->BgL_testz00) =
						((BgL_nodez00_bglt) BgL_arg3430z00_1278), BUNSPEC);
				}
				{	/* Reduce/cond.scm 138 */
					BgL_nodez00_bglt BgL_arg3432z00_1280;

					{	/* Reduce/cond.scm 138 */
						BgL_nodez00_bglt BgL_arg3433z00_1281;

						BgL_arg3433z00_1281 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1274))->BgL_truez00);
						{	/* Reduce/cond.scm 138 */
							BgL_nodez00_bglt BgL_res3526z00_1741;

							{	/* Reduce/cond.scm 138 */
								obj_t BgL_method3293z00_1716;

								{	/* Reduce/cond.scm 138 */
									BgL_objectz00_bglt BgL_objz00_1717;

									BgL_objz00_1717 = (BgL_objectz00_bglt) (BgL_arg3433z00_1281);
									{	/* Reduce/cond.scm 138 */
										long BgL_objzd2classzd2numz00_1718;

										BgL_objzd2classzd2numz00_1718 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1717);
										{	/* Reduce/cond.scm 138 */
											obj_t BgL_arg2643z00_1719;

											BgL_arg2643z00_1719 =
												PROCEDURE_REF
												(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
												(int) (((long) 1)));
											{	/* Reduce/cond.scm 138 */
												obj_t BgL_arrayz00_1721;

												int BgL_offsetz00_1722;

												BgL_arrayz00_1721 = BgL_arg2643z00_1719;
												BgL_offsetz00_1722 =
													(int) (BgL_objzd2classzd2numz00_1718);
												{	/* Reduce/cond.scm 138 */
													long BgL_offsetz00_1723;

													BgL_offsetz00_1723 =
														((long) (BgL_offsetz00_1722) - OBJECT_TYPE);
													{	/* Reduce/cond.scm 138 */
														long BgL_modz00_1724;

														{	/* Reduce/cond.scm 138 */
															int BgL_arg2645z00_1725;

															BgL_arg2645z00_1725 = (int) (((long) 16));
															{	/* Reduce/cond.scm 138 */
																long BgL_auxz00_3083;

																BgL_auxz00_3083 = (long) (BgL_arg2645z00_1725);
																BgL_modz00_1724 =
																	(BgL_offsetz00_1723 / BgL_auxz00_3083);
														}}
														{	/* Reduce/cond.scm 138 */
															long BgL_restz00_1726;

															{	/* Reduce/cond.scm 138 */
																int BgL_arg2644z00_1727;

																BgL_arg2644z00_1727 = (int) (((long) 16));
																{	/* Reduce/cond.scm 138 */
																	long BgL_auxz00_3087;

																	BgL_auxz00_3087 =
																		(long) (BgL_arg2644z00_1727);
																	BgL_restz00_1726 =
																		(BgL_offsetz00_1723 % BgL_auxz00_3087);
															}}
															{	/* Reduce/cond.scm 138 */

																BgL_method3293z00_1716 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1721,
																		(int) (BgL_modz00_1724)),
																	(int) (BgL_restz00_1726));
								}}}}}}}}
								BgL_res3526z00_1741 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1716)
									(BgL_method3293z00_1716, (obj_t) (BgL_arg3433z00_1281),
										BEOA));
							}
							BgL_arg3432z00_1280 = BgL_res3526z00_1741;
					}}
					((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1274))->BgL_truez00) =
						((BgL_nodez00_bglt) BgL_arg3432z00_1280), BUNSPEC);
				}
				{	/* Reduce/cond.scm 139 */
					BgL_nodez00_bglt BgL_arg3434z00_1282;

					{	/* Reduce/cond.scm 139 */
						BgL_nodez00_bglt BgL_arg3435z00_1283;

						BgL_arg3435z00_1283 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1274))->
							BgL_falsez00);
						{	/* Reduce/cond.scm 139 */
							BgL_nodez00_bglt BgL_res3529z00_1771;

							{	/* Reduce/cond.scm 139 */
								obj_t BgL_method3293z00_1746;

								{	/* Reduce/cond.scm 139 */
									BgL_objectz00_bglt BgL_objz00_1747;

									BgL_objz00_1747 = (BgL_objectz00_bglt) (BgL_arg3435z00_1283);
									{	/* Reduce/cond.scm 139 */
										long BgL_objzd2classzd2numz00_1748;

										BgL_objzd2classzd2numz00_1748 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1747);
										{	/* Reduce/cond.scm 139 */
											obj_t BgL_arg2643z00_1749;

											BgL_arg2643z00_1749 =
												PROCEDURE_REF
												(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
												(int) (((long) 1)));
											{	/* Reduce/cond.scm 139 */
												obj_t BgL_arrayz00_1751;

												int BgL_offsetz00_1752;

												BgL_arrayz00_1751 = BgL_arg2643z00_1749;
												BgL_offsetz00_1752 =
													(int) (BgL_objzd2classzd2numz00_1748);
												{	/* Reduce/cond.scm 139 */
													long BgL_offsetz00_1753;

													BgL_offsetz00_1753 =
														((long) (BgL_offsetz00_1752) - OBJECT_TYPE);
													{	/* Reduce/cond.scm 139 */
														long BgL_modz00_1754;

														{	/* Reduce/cond.scm 139 */
															int BgL_arg2645z00_1755;

															BgL_arg2645z00_1755 = (int) (((long) 16));
															{	/* Reduce/cond.scm 139 */
																long BgL_auxz00_3108;

																BgL_auxz00_3108 = (long) (BgL_arg2645z00_1755);
																BgL_modz00_1754 =
																	(BgL_offsetz00_1753 / BgL_auxz00_3108);
														}}
														{	/* Reduce/cond.scm 139 */
															long BgL_restz00_1756;

															{	/* Reduce/cond.scm 139 */
																int BgL_arg2644z00_1757;

																BgL_arg2644z00_1757 = (int) (((long) 16));
																{	/* Reduce/cond.scm 139 */
																	long BgL_auxz00_3112;

																	BgL_auxz00_3112 =
																		(long) (BgL_arg2644z00_1757);
																	BgL_restz00_1756 =
																		(BgL_offsetz00_1753 % BgL_auxz00_3112);
															}}
															{	/* Reduce/cond.scm 139 */

																BgL_method3293z00_1746 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1751,
																		(int) (BgL_modz00_1754)),
																	(int) (BgL_restz00_1756));
								}}}}}}}}
								BgL_res3529z00_1771 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1746)
									(BgL_method3293z00_1746, (obj_t) (BgL_arg3435z00_1283),
										BEOA));
							}
							BgL_arg3434z00_1282 = BgL_res3529z00_1771;
					}}
					((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1274))->BgL_falsez00) =
						((BgL_nodez00_bglt) BgL_arg3434z00_1282), BUNSPEC);
				}
				{	/* Reduce/cond.scm 140 */
					bool_t BgL_testz00_3124;

					{	/* Reduce/cond.scm 140 */
						BgL_nodez00_bglt BgL_arg3439z00_1287;

						BgL_arg3439z00_1287 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1274))->BgL_testz00);
						{	/* Reduce/cond.scm 140 */
							obj_t BgL_obj2150z00_1775;

							BgL_obj2150z00_1775 = (obj_t) (BgL_arg3439z00_1287);
							BgL_testz00_3124 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2150z00_1775,
								BGl_atomz00zzast_nodez00);
					}}
					if (BgL_testz00_3124)
						{	/* Reduce/cond.scm 140 */
							BGl_za2condzd2reducedza2zd2zzreduce_condz00 =
								(((long) 1) + BGl_za2condzd2reducedza2zd2zzreduce_condz00);
							{	/* Reduce/cond.scm 144 */
								bool_t BgL_testz00_3129;

								{	/* Reduce/cond.scm 144 */
									BgL_atomz00_bglt BgL_obj2135z00_1779;

									BgL_obj2135z00_1779 =
										(BgL_atomz00_bglt) (
										(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1274))->
											BgL_testz00));
									BgL_testz00_3129 =
										CBOOL((((BgL_atomz00_bglt) CREF(BgL_obj2135z00_1779))->
											BgL_valuez00));
								}
								if (BgL_testz00_3129)
									{	/* Reduce/cond.scm 144 */
										return
											(obj_t) (
											(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1274))->
												BgL_truez00));
									}
								else
									{	/* Reduce/cond.scm 144 */
										return
											(obj_t) (
											(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1274))->
												BgL_falsez00));
									}
							}
						}
					else
						{	/* Reduce/cond.scm 140 */
							return (obj_t) (BgL_nodez00_1274);
						}
				}
			}
		}
	}



/* node-cond!-setq3315 */
	obj_t BGl_nodezd2condz12zd2setq3315z12zzreduce_condz00(obj_t BgL_envz00_2352,
		obj_t BgL_nodez00_2353)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 126 */
			{
				BgL_setqz00_bglt BgL_nodez00_1264;

				{	/* Reduce/cond.scm 127 */
					BgL_setqz00_bglt BgL_auxz00_3140;

					BgL_nodez00_1264 = (BgL_setqz00_bglt) (BgL_nodez00_2353);
					{	/* Reduce/cond.scm 128 */
						BgL_nodez00_bglt BgL_arg3422z00_1268;

						{	/* Reduce/cond.scm 128 */
							BgL_nodez00_bglt BgL_arg3424z00_1269;

							BgL_arg3424z00_1269 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1264))->BgL_valuez00);
							{	/* Reduce/cond.scm 128 */
								BgL_nodez00_bglt BgL_res3517z00_1651;

								{	/* Reduce/cond.scm 128 */
									obj_t BgL_method3293z00_1626;

									{	/* Reduce/cond.scm 128 */
										BgL_objectz00_bglt BgL_objz00_1627;

										BgL_objz00_1627 =
											(BgL_objectz00_bglt) (BgL_arg3424z00_1269);
										{	/* Reduce/cond.scm 128 */
											long BgL_objzd2classzd2numz00_1628;

											BgL_objzd2classzd2numz00_1628 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1627);
											{	/* Reduce/cond.scm 128 */
												obj_t BgL_arg2643z00_1629;

												BgL_arg2643z00_1629 =
													PROCEDURE_REF
													(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
													(int) (((long) 1)));
												{	/* Reduce/cond.scm 128 */
													obj_t BgL_arrayz00_1631;

													int BgL_offsetz00_1632;

													BgL_arrayz00_1631 = BgL_arg2643z00_1629;
													BgL_offsetz00_1632 =
														(int) (BgL_objzd2classzd2numz00_1628);
													{	/* Reduce/cond.scm 128 */
														long BgL_offsetz00_1633;

														BgL_offsetz00_1633 =
															((long) (BgL_offsetz00_1632) - OBJECT_TYPE);
														{	/* Reduce/cond.scm 128 */
															long BgL_modz00_1634;

															{	/* Reduce/cond.scm 128 */
																int BgL_arg2645z00_1635;

																BgL_arg2645z00_1635 = (int) (((long) 16));
																{	/* Reduce/cond.scm 128 */
																	long BgL_auxz00_3150;

																	BgL_auxz00_3150 =
																		(long) (BgL_arg2645z00_1635);
																	BgL_modz00_1634 =
																		(BgL_offsetz00_1633 / BgL_auxz00_3150);
															}}
															{	/* Reduce/cond.scm 128 */
																long BgL_restz00_1636;

																{	/* Reduce/cond.scm 128 */
																	int BgL_arg2644z00_1637;

																	BgL_arg2644z00_1637 = (int) (((long) 16));
																	{	/* Reduce/cond.scm 128 */
																		long BgL_auxz00_3154;

																		BgL_auxz00_3154 =
																			(long) (BgL_arg2644z00_1637);
																		BgL_restz00_1636 =
																			(BgL_offsetz00_1633 % BgL_auxz00_3154);
																}}
																{	/* Reduce/cond.scm 128 */

																	BgL_method3293z00_1626 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1631,
																			(int) (BgL_modz00_1634)),
																		(int) (BgL_restz00_1636));
									}}}}}}}}
									BgL_res3517z00_1651 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1626)
										(BgL_method3293z00_1626, (obj_t) (BgL_arg3424z00_1269),
											BEOA));
								}
								BgL_arg3422z00_1268 = BgL_res3517z00_1651;
						}}
						((((BgL_setqz00_bglt) CREF(BgL_nodez00_1264))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3422z00_1268), BUNSPEC);
					}
					{	/* Reduce/cond.scm 129 */
						BgL_nodez00_bglt BgL_arg3425z00_1270;

						{	/* Reduce/cond.scm 129 */
							BgL_varz00_bglt BgL_arg3426z00_1271;

							BgL_arg3426z00_1271 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1264))->BgL_varz00);
							{	/* Reduce/cond.scm 129 */
								BgL_nodez00_bglt BgL_res3520z00_1681;

								{	/* Reduce/cond.scm 129 */
									BgL_nodez00_bglt BgL_nodez00_1655;

									BgL_nodez00_1655 = (BgL_nodez00_bglt) (BgL_arg3426z00_1271);
									{	/* Reduce/cond.scm 129 */
										obj_t BgL_method3293z00_1656;

										{	/* Reduce/cond.scm 129 */
											BgL_objectz00_bglt BgL_objz00_1657;

											BgL_objz00_1657 = (BgL_objectz00_bglt) (BgL_nodez00_1655);
											{	/* Reduce/cond.scm 129 */
												long BgL_objzd2classzd2numz00_1658;

												BgL_objzd2classzd2numz00_1658 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1657);
												{	/* Reduce/cond.scm 129 */
													obj_t BgL_arg2643z00_1659;

													BgL_arg2643z00_1659 =
														PROCEDURE_REF
														(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
														(int) (((long) 1)));
													{	/* Reduce/cond.scm 129 */
														obj_t BgL_arrayz00_1661;

														int BgL_offsetz00_1662;

														BgL_arrayz00_1661 = BgL_arg2643z00_1659;
														BgL_offsetz00_1662 =
															(int) (BgL_objzd2classzd2numz00_1658);
														{	/* Reduce/cond.scm 129 */
															long BgL_offsetz00_1663;

															BgL_offsetz00_1663 =
																((long) (BgL_offsetz00_1662) - OBJECT_TYPE);
															{	/* Reduce/cond.scm 129 */
																long BgL_modz00_1664;

																{	/* Reduce/cond.scm 129 */
																	int BgL_arg2645z00_1665;

																	BgL_arg2645z00_1665 = (int) (((long) 16));
																	{	/* Reduce/cond.scm 129 */
																		long BgL_auxz00_3176;

																		BgL_auxz00_3176 =
																			(long) (BgL_arg2645z00_1665);
																		BgL_modz00_1664 =
																			(BgL_offsetz00_1663 / BgL_auxz00_3176);
																}}
																{	/* Reduce/cond.scm 129 */
																	long BgL_restz00_1666;

																	{	/* Reduce/cond.scm 129 */
																		int BgL_arg2644z00_1667;

																		BgL_arg2644z00_1667 = (int) (((long) 16));
																		{	/* Reduce/cond.scm 129 */
																			long BgL_auxz00_3180;

																			BgL_auxz00_3180 =
																				(long) (BgL_arg2644z00_1667);
																			BgL_restz00_1666 =
																				(BgL_offsetz00_1663 % BgL_auxz00_3180);
																	}}
																	{	/* Reduce/cond.scm 129 */

																		BgL_method3293z00_1656 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1661,
																				(int) (BgL_modz00_1664)),
																			(int) (BgL_restz00_1666));
										}}}}}}}}
										BgL_res3520z00_1681 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3293z00_1656) (BgL_method3293z00_1656,
												(obj_t) (BgL_nodez00_1655), BEOA));
								}}
								BgL_arg3425z00_1270 = BgL_res3520z00_1681;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3191;

							BgL_auxz00_3191 = (BgL_varz00_bglt) (BgL_arg3425z00_1270);
							((((BgL_setqz00_bglt) CREF(BgL_nodez00_1264))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_3191), BUNSPEC);
					}}
					BgL_auxz00_3140 = BgL_nodez00_1264;
					return (obj_t) (BgL_auxz00_3140);
				}
			}
		}
	}



/* node-cond!-cast3313 */
	obj_t BGl_nodezd2condz12zd2cast3313z12zzreduce_condz00(obj_t BgL_envz00_2354,
		obj_t BgL_nodez00_2355)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 118 */
			{
				BgL_castz00_bglt BgL_nodez00_1257;

				{	/* Reduce/cond.scm 119 */
					BgL_castz00_bglt BgL_auxz00_3196;

					BgL_nodez00_1257 = (BgL_castz00_bglt) (BgL_nodez00_2355);
					{	/* Reduce/cond.scm 119 */
						BgL_nodez00_bglt BgL_arg3420z00_1595;

						BgL_arg3420z00_1595 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1257))->BgL_argz00);
						{	/* Reduce/cond.scm 119 */
							BgL_nodez00_bglt BgL_res3514z00_1623;

							{	/* Reduce/cond.scm 119 */
								obj_t BgL_method3293z00_1598;

								{	/* Reduce/cond.scm 119 */
									BgL_objectz00_bglt BgL_objz00_1599;

									BgL_objz00_1599 = (BgL_objectz00_bglt) (BgL_arg3420z00_1595);
									{	/* Reduce/cond.scm 119 */
										long BgL_objzd2classzd2numz00_1600;

										BgL_objzd2classzd2numz00_1600 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1599);
										{	/* Reduce/cond.scm 119 */
											obj_t BgL_arg2643z00_1601;

											BgL_arg2643z00_1601 =
												PROCEDURE_REF
												(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
												(int) (((long) 1)));
											{	/* Reduce/cond.scm 119 */
												obj_t BgL_arrayz00_1603;

												int BgL_offsetz00_1604;

												BgL_arrayz00_1603 = BgL_arg2643z00_1601;
												BgL_offsetz00_1604 =
													(int) (BgL_objzd2classzd2numz00_1600);
												{	/* Reduce/cond.scm 119 */
													long BgL_offsetz00_1605;

													BgL_offsetz00_1605 =
														((long) (BgL_offsetz00_1604) - OBJECT_TYPE);
													{	/* Reduce/cond.scm 119 */
														long BgL_modz00_1606;

														{	/* Reduce/cond.scm 119 */
															int BgL_arg2645z00_1607;

															BgL_arg2645z00_1607 = (int) (((long) 16));
															{	/* Reduce/cond.scm 119 */
																long BgL_auxz00_3206;

																BgL_auxz00_3206 = (long) (BgL_arg2645z00_1607);
																BgL_modz00_1606 =
																	(BgL_offsetz00_1605 / BgL_auxz00_3206);
														}}
														{	/* Reduce/cond.scm 119 */
															long BgL_restz00_1608;

															{	/* Reduce/cond.scm 119 */
																int BgL_arg2644z00_1609;

																BgL_arg2644z00_1609 = (int) (((long) 16));
																{	/* Reduce/cond.scm 119 */
																	long BgL_auxz00_3210;

																	BgL_auxz00_3210 =
																		(long) (BgL_arg2644z00_1609);
																	BgL_restz00_1608 =
																		(BgL_offsetz00_1605 % BgL_auxz00_3210);
															}}
															{	/* Reduce/cond.scm 119 */

																BgL_method3293z00_1598 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1603,
																		(int) (BgL_modz00_1606)),
																	(int) (BgL_restz00_1608));
								}}}}}}}}
								BgL_res3514z00_1623 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1598)
									(BgL_method3293z00_1598, (obj_t) (BgL_arg3420z00_1595),
										BEOA));
							} BgL_res3514z00_1623;
					}}
					BgL_auxz00_3196 = BgL_nodez00_1257;
					return (obj_t) (BgL_auxz00_3196);
				}
			}
		}
	}



/* node-cond!-extern3311 */
	obj_t BGl_nodezd2condz12zd2extern3311z12zzreduce_condz00(obj_t
		BgL_envz00_2356, obj_t BgL_nodez00_2357)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 110 */
			{
				BgL_externz00_bglt BgL_nodez00_1250;

				{	/* Reduce/cond.scm 111 */
					BgL_externz00_bglt BgL_auxz00_3223;

					BgL_nodez00_1250 = (BgL_externz00_bglt) (BgL_nodez00_2357);
					{	/* Reduce/cond.scm 111 */
						obj_t BgL_arg3418z00_1592;

						BgL_arg3418z00_1592 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1250))->BgL_exprza2za2);
						BGl_nodezd2condza2z12z62zzreduce_condz00(BgL_arg3418z00_1592);
					}
					BgL_auxz00_3223 = BgL_nodez00_1250;
					return (obj_t) (BgL_auxz00_3223);
				}
			}
		}
	}



/* node-cond!-funcall3309 */
	obj_t BGl_nodezd2condz12zd2funcall3309z12zzreduce_condz00(obj_t
		BgL_envz00_2358, obj_t BgL_nodez00_2359)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 101 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1241;

				{	/* Reduce/cond.scm 102 */
					BgL_funcallz00_bglt BgL_auxz00_3228;

					BgL_nodez00_1241 = (BgL_funcallz00_bglt) (BgL_nodez00_2359);
					{	/* Reduce/cond.scm 103 */
						BgL_nodez00_bglt BgL_arg3414z00_1245;

						{	/* Reduce/cond.scm 103 */
							BgL_nodez00_bglt BgL_arg3415z00_1246;

							BgL_arg3415z00_1246 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1241))->BgL_funz00);
							{	/* Reduce/cond.scm 103 */
								BgL_nodez00_bglt BgL_res3511z00_1587;

								{	/* Reduce/cond.scm 103 */
									obj_t BgL_method3293z00_1562;

									{	/* Reduce/cond.scm 103 */
										BgL_objectz00_bglt BgL_objz00_1563;

										BgL_objz00_1563 =
											(BgL_objectz00_bglt) (BgL_arg3415z00_1246);
										{	/* Reduce/cond.scm 103 */
											long BgL_objzd2classzd2numz00_1564;

											BgL_objzd2classzd2numz00_1564 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1563);
											{	/* Reduce/cond.scm 103 */
												obj_t BgL_arg2643z00_1565;

												BgL_arg2643z00_1565 =
													PROCEDURE_REF
													(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
													(int) (((long) 1)));
												{	/* Reduce/cond.scm 103 */
													obj_t BgL_arrayz00_1567;

													int BgL_offsetz00_1568;

													BgL_arrayz00_1567 = BgL_arg2643z00_1565;
													BgL_offsetz00_1568 =
														(int) (BgL_objzd2classzd2numz00_1564);
													{	/* Reduce/cond.scm 103 */
														long BgL_offsetz00_1569;

														BgL_offsetz00_1569 =
															((long) (BgL_offsetz00_1568) - OBJECT_TYPE);
														{	/* Reduce/cond.scm 103 */
															long BgL_modz00_1570;

															{	/* Reduce/cond.scm 103 */
																int BgL_arg2645z00_1571;

																BgL_arg2645z00_1571 = (int) (((long) 16));
																{	/* Reduce/cond.scm 103 */
																	long BgL_auxz00_3238;

																	BgL_auxz00_3238 =
																		(long) (BgL_arg2645z00_1571);
																	BgL_modz00_1570 =
																		(BgL_offsetz00_1569 / BgL_auxz00_3238);
															}}
															{	/* Reduce/cond.scm 103 */
																long BgL_restz00_1572;

																{	/* Reduce/cond.scm 103 */
																	int BgL_arg2644z00_1573;

																	BgL_arg2644z00_1573 = (int) (((long) 16));
																	{	/* Reduce/cond.scm 103 */
																		long BgL_auxz00_3242;

																		BgL_auxz00_3242 =
																			(long) (BgL_arg2644z00_1573);
																		BgL_restz00_1572 =
																			(BgL_offsetz00_1569 % BgL_auxz00_3242);
																}}
																{	/* Reduce/cond.scm 103 */

																	BgL_method3293z00_1562 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1567,
																			(int) (BgL_modz00_1570)),
																		(int) (BgL_restz00_1572));
									}}}}}}}}
									BgL_res3511z00_1587 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1562)
										(BgL_method3293z00_1562, (obj_t) (BgL_arg3415z00_1246),
											BEOA));
								}
								BgL_arg3414z00_1245 = BgL_res3511z00_1587;
						}}
						((((BgL_funcallz00_bglt) CREF(BgL_nodez00_1241))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3414z00_1245), BUNSPEC);
					}
					{	/* Reduce/cond.scm 104 */
						obj_t BgL_arg3416z00_1247;

						BgL_arg3416z00_1247 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1241))->BgL_argsz00);
						BGl_nodezd2condza2z12z62zzreduce_condz00(BgL_arg3416z00_1247);
					}
					BgL_auxz00_3228 = BgL_nodez00_1241;
					return (obj_t) (BgL_auxz00_3228);
				}
			}
		}
	}



/* node-cond!-app-ly3307 */
	obj_t BGl_nodezd2condz12zd2appzd2ly3307zc0zzreduce_condz00(obj_t
		BgL_envz00_2360, obj_t BgL_nodez00_2361)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 92 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1231;

				{	/* Reduce/cond.scm 93 */
					BgL_appzd2lyzd2_bglt BgL_auxz00_3258;

					BgL_nodez00_1231 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2361);
					{	/* Reduce/cond.scm 94 */
						BgL_nodez00_bglt BgL_arg3409z00_1235;

						{	/* Reduce/cond.scm 94 */
							BgL_nodez00_bglt BgL_arg3410z00_1236;

							BgL_arg3410z00_1236 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1231))->BgL_funz00);
							{	/* Reduce/cond.scm 94 */
								BgL_nodez00_bglt BgL_res3505z00_1527;

								{	/* Reduce/cond.scm 94 */
									obj_t BgL_method3293z00_1502;

									{	/* Reduce/cond.scm 94 */
										BgL_objectz00_bglt BgL_objz00_1503;

										BgL_objz00_1503 =
											(BgL_objectz00_bglt) (BgL_arg3410z00_1236);
										{	/* Reduce/cond.scm 94 */
											long BgL_objzd2classzd2numz00_1504;

											BgL_objzd2classzd2numz00_1504 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1503);
											{	/* Reduce/cond.scm 94 */
												obj_t BgL_arg2643z00_1505;

												BgL_arg2643z00_1505 =
													PROCEDURE_REF
													(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
													(int) (((long) 1)));
												{	/* Reduce/cond.scm 94 */
													obj_t BgL_arrayz00_1507;

													int BgL_offsetz00_1508;

													BgL_arrayz00_1507 = BgL_arg2643z00_1505;
													BgL_offsetz00_1508 =
														(int) (BgL_objzd2classzd2numz00_1504);
													{	/* Reduce/cond.scm 94 */
														long BgL_offsetz00_1509;

														BgL_offsetz00_1509 =
															((long) (BgL_offsetz00_1508) - OBJECT_TYPE);
														{	/* Reduce/cond.scm 94 */
															long BgL_modz00_1510;

															{	/* Reduce/cond.scm 94 */
																int BgL_arg2645z00_1511;

																BgL_arg2645z00_1511 = (int) (((long) 16));
																{	/* Reduce/cond.scm 94 */
																	long BgL_auxz00_3268;

																	BgL_auxz00_3268 =
																		(long) (BgL_arg2645z00_1511);
																	BgL_modz00_1510 =
																		(BgL_offsetz00_1509 / BgL_auxz00_3268);
															}}
															{	/* Reduce/cond.scm 94 */
																long BgL_restz00_1512;

																{	/* Reduce/cond.scm 94 */
																	int BgL_arg2644z00_1513;

																	BgL_arg2644z00_1513 = (int) (((long) 16));
																	{	/* Reduce/cond.scm 94 */
																		long BgL_auxz00_3272;

																		BgL_auxz00_3272 =
																			(long) (BgL_arg2644z00_1513);
																		BgL_restz00_1512 =
																			(BgL_offsetz00_1509 % BgL_auxz00_3272);
																}}
																{	/* Reduce/cond.scm 94 */

																	BgL_method3293z00_1502 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1507,
																			(int) (BgL_modz00_1510)),
																		(int) (BgL_restz00_1512));
									}}}}}}}}
									BgL_res3505z00_1527 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1502)
										(BgL_method3293z00_1502, (obj_t) (BgL_arg3410z00_1236),
											BEOA));
								}
								BgL_arg3409z00_1235 = BgL_res3505z00_1527;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1231))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3409z00_1235), BUNSPEC);
					}
					{	/* Reduce/cond.scm 95 */
						BgL_nodez00_bglt BgL_arg3411z00_1237;

						{	/* Reduce/cond.scm 95 */
							BgL_nodez00_bglt BgL_arg3412z00_1238;

							BgL_arg3412z00_1238 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1231))->BgL_argz00);
							{	/* Reduce/cond.scm 95 */
								BgL_nodez00_bglt BgL_res3508z00_1557;

								{	/* Reduce/cond.scm 95 */
									obj_t BgL_method3293z00_1532;

									{	/* Reduce/cond.scm 95 */
										BgL_objectz00_bglt BgL_objz00_1533;

										BgL_objz00_1533 =
											(BgL_objectz00_bglt) (BgL_arg3412z00_1238);
										{	/* Reduce/cond.scm 95 */
											long BgL_objzd2classzd2numz00_1534;

											BgL_objzd2classzd2numz00_1534 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1533);
											{	/* Reduce/cond.scm 95 */
												obj_t BgL_arg2643z00_1535;

												BgL_arg2643z00_1535 =
													PROCEDURE_REF
													(BGl_nodezd2condz12zd2envz12zzreduce_condz00,
													(int) (((long) 1)));
												{	/* Reduce/cond.scm 95 */
													obj_t BgL_arrayz00_1537;

													int BgL_offsetz00_1538;

													BgL_arrayz00_1537 = BgL_arg2643z00_1535;
													BgL_offsetz00_1538 =
														(int) (BgL_objzd2classzd2numz00_1534);
													{	/* Reduce/cond.scm 95 */
														long BgL_offsetz00_1539;

														BgL_offsetz00_1539 =
															((long) (BgL_offsetz00_1538) - OBJECT_TYPE);
														{	/* Reduce/cond.scm 95 */
															long BgL_modz00_1540;

															{	/* Reduce/cond.scm 95 */
																int BgL_arg2645z00_1541;

																BgL_arg2645z00_1541 = (int) (((long) 16));
																{	/* Reduce/cond.scm 95 */
																	long BgL_auxz00_3293;

																	BgL_auxz00_3293 =
																		(long) (BgL_arg2645z00_1541);
																	BgL_modz00_1540 =
																		(BgL_offsetz00_1539 / BgL_auxz00_3293);
															}}
															{	/* Reduce/cond.scm 95 */
																long BgL_restz00_1542;

																{	/* Reduce/cond.scm 95 */
																	int BgL_arg2644z00_1543;

																	BgL_arg2644z00_1543 = (int) (((long) 16));
																	{	/* Reduce/cond.scm 95 */
																		long BgL_auxz00_3297;

																		BgL_auxz00_3297 =
																			(long) (BgL_arg2644z00_1543);
																		BgL_restz00_1542 =
																			(BgL_offsetz00_1539 % BgL_auxz00_3297);
																}}
																{	/* Reduce/cond.scm 95 */

																	BgL_method3293z00_1532 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1537,
																			(int) (BgL_modz00_1540)),
																		(int) (BgL_restz00_1542));
									}}}}}}}}
									BgL_res3508z00_1557 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1532)
										(BgL_method3293z00_1532, (obj_t) (BgL_arg3412z00_1238),
											BEOA));
								}
								BgL_arg3411z00_1237 = BgL_res3508z00_1557;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1231))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg3411z00_1237), BUNSPEC);
					}
					BgL_auxz00_3258 = BgL_nodez00_1231;
					return (obj_t) (BgL_auxz00_3258);
				}
			}
		}
	}



/* node-cond!-app3305 */
	obj_t BGl_nodezd2condz12zd2app3305z12zzreduce_condz00(obj_t BgL_envz00_2362,
		obj_t BgL_nodez00_2363)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 84 */
			{
				BgL_appz00_bglt BgL_nodez00_1224;

				{	/* Reduce/cond.scm 85 */
					BgL_appz00_bglt BgL_auxz00_3311;

					BgL_nodez00_1224 = (BgL_appz00_bglt) (BgL_nodez00_2363);
					{	/* Reduce/cond.scm 85 */
						obj_t BgL_arg3407z00_1498;

						BgL_arg3407z00_1498 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1224))->BgL_argsz00);
						BGl_nodezd2condza2z12z62zzreduce_condz00(BgL_arg3407z00_1498);
					}
					BgL_auxz00_3311 = BgL_nodez00_1224;
					return (obj_t) (BgL_auxz00_3311);
				}
			}
		}
	}



/* node-cond!-sequence3303 */
	obj_t BGl_nodezd2condz12zd2sequence3303z12zzreduce_condz00(obj_t
		BgL_envz00_2364, obj_t BgL_nodez00_2365)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 76 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1217;

				{	/* Reduce/cond.scm 77 */
					BgL_sequencez00_bglt BgL_auxz00_3316;

					BgL_nodez00_1217 = (BgL_sequencez00_bglt) (BgL_nodez00_2365);
					{	/* Reduce/cond.scm 77 */
						obj_t BgL_arg3405z00_1495;

						BgL_arg3405z00_1495 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1217))->BgL_nodesz00);
						BGl_nodezd2condza2z12z62zzreduce_condz00(BgL_arg3405z00_1495);
					}
					BgL_auxz00_3316 = BgL_nodez00_1217;
					return (obj_t) (BgL_auxz00_3316);
				}
			}
		}
	}



/* node-cond!-closure3301 */
	obj_t BGl_nodezd2condz12zd2closure3301z12zzreduce_condz00(obj_t
		BgL_envz00_2366, obj_t BgL_nodez00_2367)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 70 */
			return (obj_t) ((BgL_closurez00_bglt) (BgL_nodez00_2367));
		}
	}



/* node-cond!-var3299 */
	obj_t BGl_nodezd2condz12zd2var3299z12zzreduce_condz00(obj_t BgL_envz00_2368,
		obj_t BgL_nodez00_2369)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 64 */
			return (obj_t) ((BgL_varz00_bglt) (BgL_nodez00_2369));
		}
	}



/* node-cond!-kwote3297 */
	obj_t BGl_nodezd2condz12zd2kwote3297z12zzreduce_condz00(obj_t BgL_envz00_2370,
		obj_t BgL_nodez00_2371)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 58 */
			return (obj_t) ((BgL_kwotez00_bglt) (BgL_nodez00_2371));
		}
	}



/* node-cond!-atom3295 */
	obj_t BGl_nodezd2condz12zd2atom3295z12zzreduce_condz00(obj_t BgL_envz00_2372,
		obj_t BgL_nodez00_2373)
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 52 */
			return (obj_t) ((BgL_atomz00_bglt) (BgL_nodez00_2373));
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzreduce_condz00()
	{
		AN_OBJECT;
		{	/* Reduce/cond.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3606z00zzreduce_condz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3606z00zzreduce_condz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3606z00zzreduce_condz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3606z00zzreduce_condz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3606z00zzreduce_condz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3606z00zzreduce_condz00));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3606z00zzreduce_condz00));
		}
	}

#ifdef __cplusplus
}
#endif
