/*===========================================================================*/
/*   (Ast/occur.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/occur.scm)*/
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

	typedef struct BgL_scnstz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_nodez00;
		obj_t BgL_classz00;
		obj_t BgL_locz00;
	}               *BgL_scnstz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_nodezf2effectzf2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
	}                       *BgL_nodezf2effectzf2_bglt;

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

	typedef struct BgL_pragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_formatz00;
	}                *BgL_pragmaz00_bglt;

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


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_occurzd2nodezd2inz12z12zzast_occurz00(BgL_nodez00_bglt,
		BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__occurzd2nodez12zc0zzast_occurz00(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static bool_t BGl_occurzd2nodeza2z12z62zzast_occurz00(obj_t);
	static obj_t BGl_occurzd2nodez12zd2boxzd2ref3345zc0zzast_occurz00(obj_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_occurz00();
	BGL_EXPORTED_DECL obj_t BGl_occurzd2varzd2zzast_occurz00(obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_occurzd2nodez12zd2var3310z12zzast_occurz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzast_occurz00();
	static obj_t BGl_occurzd2nodez12zd2extern3320z12zzast_occurz00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_occurzd2nodez12zd2appzd2ly3316zc0zzast_occurz00(obj_t,
		obj_t);
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_occurzd2nodez12zd2letzd2fun3335zc0zzast_occurz00(obj_t,
		obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_occurzd2nodez12zd2letzd2var3337zc0zzast_occurz00(obj_t,
		obj_t);
	static obj_t BGl__occurzd2nodezd2inz12z12zzast_occurz00(obj_t, obj_t, obj_t);
	static obj_t BGl__occurzd2varzd2zzast_occurz00(obj_t, obj_t);
	static obj_t BGl_occurzd2nodez12zd2setzd2exzd2i3339z12zzast_occurz00(obj_t,
		obj_t);
	static obj_t BGl_occurzd2nodez12zd2sequence3312z12zzast_occurz00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzast_occurz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_occurzd2nodez12zd2boxzd2setz123348zd2zzast_occurz00(obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_occurzd2nodez12zd2pragma3322z12zzast_occurz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_occurz00 = BUNSPEC;
	extern obj_t BGl_scnstz00zzast_varz00;
	static obj_t BGl_occurzd2nodez12zd2conditio3328z12zzast_occurz00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzast_occurz00();
	static obj_t BGl_occurzd2nodez12zd2select3333z12zzast_occurz00(obj_t, obj_t);
	extern obj_t BGl_pragmaz00zzast_nodez00;
	static obj_t BGl_zc3anonymousza33351ze3z83zzast_occurz00(obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_occurzd2nodez12zd2cast3324z12zzast_occurz00(obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_occurzd2nodez12zd2jumpzd2exzd23341z12zzast_occurz00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_occurz00();
	static obj_t BGl_za2globalza2z00zzast_occurz00 = BUNSPEC;
	static obj_t BGl__occurzd2nodez12zd2default3305z12zzast_occurz00(obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_occurzd2nodez12zd2setq3326z12zzast_occurz00(obj_t, obj_t);
	static obj_t BGl_occurzd2nodez12zd2makezd2box3343zc0zzast_occurz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_occurzd2nodez12zc0zzast_occurz00(BgL_nodez00_bglt);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_occurzd2nodez12zd2funcall3318z12zzast_occurz00(obj_t, obj_t);
	static obj_t BGl_occurzd2nodez12zd2app3314z12zzast_occurz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_occurz00();
	static obj_t BGl_occurzd2nodez12zd2fail3331z12zzast_occurz00(obj_t, obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_occurzd2nodezd2inz12zd2envzc0zzast_occurz00,
		BgL_bgl__occurza7d2nodeza7d23594z00,
		BGl__occurzd2nodezd2inz12z12zzast_occurz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
		BgL_bgl__occurza7d2nodeza7123595z00, BGl__occurzd2nodez12zc0zzast_occurz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3568z00zzast_occurz00,
		BgL_bgl_za7c3anonymousza7a333596z00,
		BGl_zc3anonymousza33351ze3z83zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3570z00zzast_occurz00,
		BgL_bgl_occurza7d2nodeza712za73597za7,
		BGl_occurzd2nodez12zd2var3310z12zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3571z00zzast_occurz00,
		BgL_bgl_occurza7d2nodeza712za73598za7,
		BGl_occurzd2nodez12zd2sequence3312z12zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3572z00zzast_occurz00,
		BgL_bgl_occurza7d2nodeza712za73599za7,
		BGl_occurzd2nodez12zd2app3314z12zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3573z00zzast_occurz00,
		BgL_bgl_occurza7d2nodeza712za73600za7,
		BGl_occurzd2nodez12zd2appzd2ly3316zc0zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3574z00zzast_occurz00,
		BgL_bgl_occurza7d2nodeza712za73601za7,
		BGl_occurzd2nodez12zd2funcall3318z12zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3575z00zzast_occurz00,
		BgL_bgl_occurza7d2nodeza712za73602za7,
		BGl_occurzd2nodez12zd2extern3320z12zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3576z00zzast_occurz00,
		BgL_bgl_occurza7d2nodeza712za73603za7,
		BGl_occurzd2nodez12zd2pragma3322z12zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3577z00zzast_occurz00,
		BgL_bgl_occurza7d2nodeza712za73604za7,
		BGl_occurzd2nodez12zd2cast3324z12zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3578z00zzast_occurz00,
		BgL_bgl_occurza7d2nodeza712za73605za7,
		BGl_occurzd2nodez12zd2setq3326z12zzast_occurz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_occurzd2nodez12zd2default3305zd2envzc0zzast_occurz00,
		BgL_bgl__occurza7d2nodeza7123606z00,
		BGl__occurzd2nodez12zd2default3305z12zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3580z00zzast_occurz00,
		BgL_bgl_occurza7d2nodeza712za73607za7,
		BGl_occurzd2nodez12zd2fail3331z12zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3579z00zzast_occurz00,
		BgL_bgl_occurza7d2nodeza712za73608za7,
		BGl_occurzd2nodez12zd2conditio3328z12zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3581z00zzast_occurz00,
		BgL_bgl_occurza7d2nodeza712za73609za7,
		BGl_occurzd2nodez12zd2select3333z12zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3582z00zzast_occurz00,
		BgL_bgl_occurza7d2nodeza712za73610za7,
		BGl_occurzd2nodez12zd2letzd2fun3335zc0zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3583z00zzast_occurz00,
		BgL_bgl_occurza7d2nodeza712za73611za7,
		BGl_occurzd2nodez12zd2letzd2var3337zc0zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3584z00zzast_occurz00,
		BgL_bgl_occurza7d2nodeza712za73612za7,
		BGl_occurzd2nodez12zd2setzd2exzd2i3339z12zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3585z00zzast_occurz00,
		BgL_bgl_occurza7d2nodeza712za73613za7,
		BGl_occurzd2nodez12zd2jumpzd2exzd23341z12zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3586z00zzast_occurz00,
		BgL_bgl_occurza7d2nodeza712za73614za7,
		BGl_occurzd2nodez12zd2makezd2box3343zc0zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3587z00zzast_occurz00,
		BgL_bgl_occurza7d2nodeza712za73615za7,
		BGl_occurzd2nodez12zd2boxzd2ref3345zc0zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3588z00zzast_occurz00,
		BgL_bgl_occurza7d2nodeza712za73616za7,
		BGl_occurzd2nodez12zd2boxzd2setz123348zd2zzast_occurz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_occurzd2varzd2envz00zzast_occurz00,
		BgL_bgl__occurza7d2varza7d2za73617za7, BGl__occurzd2varzd2zzast_occurz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3569z00zzast_occurz00,
		BgL_bgl_string3569za700za7za7a3618za7, "occur-node!", 11);
	      DEFINE_STRING(BGl_string3590z00zzast_occurz00,
		BgL_bgl_string3590za700za7za7a3619za7, "read write done ", 16);
	      DEFINE_STRING(BGl_string3589z00zzast_occurz00,
		BgL_bgl_string3589za700za7za7a3620za7, "ast_occur", 9);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long
		BgL_checksumz00_2433, char *BgL_fromz00_2434)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_occurz00))
				{
					BGl_requirezd2initializa7ationz75zzast_occurz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_occurz00();
					BGl_cnstzd2initzd2zzast_occurz00();
					BGl_importedzd2moduleszd2initz00zzast_occurz00();
					BGl_genericzd2initzd2zzast_occurz00();
					BGl_methodzd2initzd2zzast_occurz00();
					BGl_toplevelzd2initzd2zzast_occurz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_occurz00()
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 17 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_occur");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_occur");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_occurz00()
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 17 */
			{	/* Ast/occur.scm 17 */
				obj_t BgL_cportz00_2423;

				BgL_cportz00_2423 =
					bgl_open_input_string(BGl_string3590z00zzast_occurz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2424;

					BgL_iz00_2424 = ((long) 2);
				BgL_loopz00_2425:
					if ((BgL_iz00_2424 == ((long) -1)))
						{	/* Ast/occur.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Ast/occur.scm 17 */
							{	/* Ast/occur.scm 17 */
								obj_t BgL_arg3592z00_2427;

								{	/* Ast/occur.scm 17 */

									{	/* Ast/occur.scm 17 */
										obj_t BgL_locationz00_2429;

										BgL_locationz00_2429 = BBOOL(((bool_t) 0));
										{	/* Ast/occur.scm 17 */

											BgL_arg3592z00_2427 =
												BGl_readz00zz__readerz00(BgL_cportz00_2423,
												BgL_locationz00_2429);
										}
									}
								}
								{	/* Ast/occur.scm 17 */
									int BgL_auxz00_2452;

									BgL_auxz00_2452 = (int) (BgL_iz00_2424);
									CNST_TABLE_SET(BgL_auxz00_2452, BgL_arg3592z00_2427);
							}}
							{	/* Ast/occur.scm 17 */
								int BgL_auxz00_2430;

								BgL_auxz00_2430 = (int) ((BgL_iz00_2424 - ((long) 1)));
								{
									long BgL_iz00_2457;

									BgL_iz00_2457 = (long) (BgL_auxz00_2430);
									BgL_iz00_2424 = BgL_iz00_2457;
									goto BgL_loopz00_2425;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_occurz00()
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 17 */
			BGl_za2globalza2z00zzast_occurz00 = BUNSPEC;
			return BUNSPEC;
		}
	}



/* occur-var */
	BGL_EXPORTED_DEF obj_t BGl_occurzd2varzd2zzast_occurz00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 31 */
			BGl_forzd2eachzd2globalz12z12zzast_envz00(BGl_proc3568z00zzast_occurz00,
				BNIL);
			{
				obj_t BgL_l3280z00_804;

				BgL_l3280z00_804 = BgL_globalsz00_1;
			BgL_zc3anonymousza33352ze3z83_805:
				if (PAIRP(BgL_l3280z00_804))
					{	/* Ast/occur.scm 35 */
						{	/* Ast/occur.scm 36 */
							obj_t BgL_globalz00_807;

							BgL_globalz00_807 = CAR(BgL_l3280z00_804);
							{	/* Ast/occur.scm 36 */
								obj_t BgL_arg3354z00_808;

								{	/* Ast/occur.scm 36 */
									BgL_sfunz00_bglt BgL_obj1884z00_1430;

									{	/* Ast/occur.scm 36 */
										BgL_variablez00_bglt BgL_obj1611z00_1429;

										BgL_obj1611z00_1429 =
											(BgL_variablez00_bglt) (BgL_globalz00_807);
										BgL_obj1884z00_1430 =
											(BgL_sfunz00_bglt) (
											(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1429))->
												BgL_valuez00));
									}
									BgL_arg3354z00_808 =
										(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_1430))->
										BgL_bodyz00);
								}
								{	/* Ast/occur.scm 36 */
									BgL_nodez00_bglt BgL_nodez00_1431;

									BgL_globalz00_bglt BgL_globalz00_1432;

									BgL_nodez00_1431 = (BgL_nodez00_bglt) (BgL_arg3354z00_808);
									BgL_globalz00_1432 = (BgL_globalz00_bglt) (BgL_globalz00_807);
									BGl_za2globalza2z00zzast_occurz00 =
										(obj_t) (BgL_globalz00_1432);
									BGl_occurzd2nodez12zc0zzast_occurz00(BgL_nodez00_1431);
								}
							}
						}
						{
							obj_t BgL_l3280z00_2471;

							BgL_l3280z00_2471 = CDR(BgL_l3280z00_804);
							BgL_l3280z00_804 = BgL_l3280z00_2471;
							goto BgL_zc3anonymousza33352ze3z83_805;
						}
					}
				else
					{	/* Ast/occur.scm 35 */
						((bool_t) 1);
					}
			}
			return BgL_globalsz00_1;
		}
	}



/* _occur-var */
	obj_t BGl__occurzd2varzd2zzast_occurz00(obj_t BgL_envz00_2355,
		obj_t BgL_globalsz00_2356)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 31 */
			return BGl_occurzd2varzd2zzast_occurz00(BgL_globalsz00_2356);
		}
	}



/* <anonymous:3351> */
	obj_t BGl_zc3anonymousza33351ze3z83zzast_occurz00(obj_t BgL_envz00_2357,
		obj_t BgL_globalz00_2358)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 33 */
			{
				obj_t BgL_globalz00_800;

				BgL_globalz00_800 = BgL_globalz00_2358;
				{
					BgL_variablez00_bglt BgL_auxz00_2474;

					BgL_auxz00_2474 = (BgL_variablez00_bglt) (BgL_globalz00_800);
					return
						((((BgL_variablez00_bglt) CREF(BgL_auxz00_2474))->
							BgL_occurrencez00) = ((long) ((long) 0)), BUNSPEC);
		}}}
	}



/* occur-node-in! */
	BGL_EXPORTED_DEF obj_t
		BGl_occurzd2nodezd2inz12z12zzast_occurz00(BgL_nodez00_bglt BgL_nodez00_2,
		BgL_globalz00_bglt BgL_globalz00_3)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 43 */
			BGl_za2globalza2z00zzast_occurz00 = (obj_t) (BgL_globalz00_3);
			{	/* Ast/occur.scm 45 */
				obj_t BgL_method3308z00_1435;

				{	/* Ast/occur.scm 45 */
					BgL_objectz00_bglt BgL_objz00_1436;

					BgL_objz00_1436 = (BgL_objectz00_bglt) (BgL_nodez00_2);
					{	/* Ast/occur.scm 45 */
						long BgL_objzd2classzd2numz00_1437;

						BgL_objzd2classzd2numz00_1437 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1436);
						{	/* Ast/occur.scm 45 */
							obj_t BgL_arg2643z00_1438;

							BgL_arg2643z00_1438 =
								PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
								(int) (((long) 1)));
							{	/* Ast/occur.scm 45 */
								obj_t BgL_arrayz00_1440;

								int BgL_offsetz00_1441;

								BgL_arrayz00_1440 = BgL_arg2643z00_1438;
								BgL_offsetz00_1441 = (int) (BgL_objzd2classzd2numz00_1437);
								{	/* Ast/occur.scm 45 */
									long BgL_offsetz00_1442;

									BgL_offsetz00_1442 =
										((long) (BgL_offsetz00_1441) - OBJECT_TYPE);
									{	/* Ast/occur.scm 45 */
										long BgL_modz00_1443;

										{	/* Ast/occur.scm 45 */
											int BgL_arg2645z00_1444;

											BgL_arg2645z00_1444 = (int) (((long) 16));
											{	/* Ast/occur.scm 45 */
												long BgL_auxz00_2486;

												BgL_auxz00_2486 = (long) (BgL_arg2645z00_1444);
												BgL_modz00_1443 =
													(BgL_offsetz00_1442 / BgL_auxz00_2486);
										}}
										{	/* Ast/occur.scm 45 */
											long BgL_restz00_1445;

											{	/* Ast/occur.scm 45 */
												int BgL_arg2644z00_1446;

												BgL_arg2644z00_1446 = (int) (((long) 16));
												{	/* Ast/occur.scm 45 */
													long BgL_auxz00_2490;

													BgL_auxz00_2490 = (long) (BgL_arg2644z00_1446);
													BgL_restz00_1445 =
														(BgL_offsetz00_1442 % BgL_auxz00_2490);
											}}
											{	/* Ast/occur.scm 45 */

												BgL_method3308z00_1435 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1440,
														(int) (BgL_modz00_1443)), (int) (BgL_restz00_1445));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3308z00_1435) (BgL_method3308z00_1435,
					(obj_t) (BgL_nodez00_2), BEOA);
			}
		}
	}



/* _occur-node-in! */
	obj_t BGl__occurzd2nodezd2inz12z12zzast_occurz00(obj_t BgL_envz00_2359,
		obj_t BgL_nodez00_2360, obj_t BgL_globalz00_2361)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 43 */
			return
				BGl_occurzd2nodezd2inz12z12zzast_occurz00(
				(BgL_nodez00_bglt) (BgL_nodez00_2360),
				(BgL_globalz00_bglt) (BgL_globalz00_2361));
		}
	}



/* occur-node*! */
	bool_t BGl_occurzd2nodeza2z12z62zzast_occurz00(obj_t BgL_nodeza2za2_25)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 241 */
			{
				obj_t BgL_l3303z00_813;

				BgL_l3303z00_813 = BgL_nodeza2za2_25;
			BgL_zc3anonymousza33357ze3z83_814:
				if (PAIRP(BgL_l3303z00_813))
					{	/* Ast/occur.scm 242 */
						{	/* Ast/occur.scm 242 */
							obj_t BgL_arg3359z00_816;

							BgL_arg3359z00_816 = CAR(BgL_l3303z00_813);
							{	/* Ast/occur.scm 242 */
								BgL_nodez00_bglt BgL_nodez00_1462;

								BgL_nodez00_1462 = (BgL_nodez00_bglt) (BgL_arg3359z00_816);
								{	/* Ast/occur.scm 242 */
									obj_t BgL_method3308z00_1463;

									{	/* Ast/occur.scm 242 */
										BgL_objectz00_bglt BgL_objz00_1464;

										BgL_objz00_1464 = (BgL_objectz00_bglt) (BgL_nodez00_1462);
										{	/* Ast/occur.scm 242 */
											long BgL_objzd2classzd2numz00_1465;

											BgL_objzd2classzd2numz00_1465 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1464);
											{	/* Ast/occur.scm 242 */
												obj_t BgL_arg2643z00_1466;

												BgL_arg2643z00_1466 =
													PROCEDURE_REF
													(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
													(int) (((long) 1)));
												{	/* Ast/occur.scm 242 */
													obj_t BgL_arrayz00_1468;

													int BgL_offsetz00_1469;

													BgL_arrayz00_1468 = BgL_arg2643z00_1466;
													BgL_offsetz00_1469 =
														(int) (BgL_objzd2classzd2numz00_1465);
													{	/* Ast/occur.scm 242 */
														long BgL_offsetz00_1470;

														BgL_offsetz00_1470 =
															((long) (BgL_offsetz00_1469) - OBJECT_TYPE);
														{	/* Ast/occur.scm 242 */
															long BgL_modz00_1471;

															{	/* Ast/occur.scm 242 */
																int BgL_arg2645z00_1472;

																BgL_arg2645z00_1472 = (int) (((long) 16));
																{	/* Ast/occur.scm 242 */
																	long BgL_auxz00_2515;

																	BgL_auxz00_2515 =
																		(long) (BgL_arg2645z00_1472);
																	BgL_modz00_1471 =
																		(BgL_offsetz00_1470 / BgL_auxz00_2515);
															}}
															{	/* Ast/occur.scm 242 */
																long BgL_restz00_1473;

																{	/* Ast/occur.scm 242 */
																	int BgL_arg2644z00_1474;

																	BgL_arg2644z00_1474 = (int) (((long) 16));
																	{	/* Ast/occur.scm 242 */
																		long BgL_auxz00_2519;

																		BgL_auxz00_2519 =
																			(long) (BgL_arg2644z00_1474);
																		BgL_restz00_1473 =
																			(BgL_offsetz00_1470 % BgL_auxz00_2519);
																}}
																{	/* Ast/occur.scm 242 */

																	BgL_method3308z00_1463 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1468,
																			(int) (BgL_modz00_1471)),
																		(int) (BgL_restz00_1473));
									}}}}}}}}
									PROCEDURE_ENTRY(BgL_method3308z00_1463)
										(BgL_method3308z00_1463, (obj_t) (BgL_nodez00_1462), BEOA);
						}}}
						{
							obj_t BgL_l3303z00_2529;

							BgL_l3303z00_2529 = CDR(BgL_l3303z00_813);
							BgL_l3303z00_813 = BgL_l3303z00_2529;
							goto BgL_zc3anonymousza33357ze3z83_814;
						}
					}
				else
					{	/* Ast/occur.scm 242 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_occurz00()
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 17 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_occurzd2nodez12zd2default3305zd2envzc0zzast_occurz00,
				BGl_nodez00zzast_nodez00, BGl_string3569z00zzast_occurz00);
		}
	}



/* occur-node! */
	BGL_EXPORTED_DEF obj_t BGl_occurzd2nodez12zc0zzast_occurz00(BgL_nodez00_bglt
		BgL_nodez00_4)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 55 */
			{	/* Ast/occur.scm 55 */
				obj_t BgL_method3308z00_1489;

				{	/* Ast/occur.scm 55 */
					BgL_objectz00_bglt BgL_objz00_1490;

					BgL_objz00_1490 = (BgL_objectz00_bglt) (BgL_nodez00_4);
					{	/* Ast/occur.scm 55 */
						long BgL_objzd2classzd2numz00_1491;

						BgL_objzd2classzd2numz00_1491 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1490);
						{	/* Ast/occur.scm 55 */
							obj_t BgL_arg2643z00_1492;

							BgL_arg2643z00_1492 =
								PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
								(int) (((long) 1)));
							{	/* Ast/occur.scm 55 */
								obj_t BgL_arrayz00_1494;

								int BgL_offsetz00_1495;

								BgL_arrayz00_1494 = BgL_arg2643z00_1492;
								BgL_offsetz00_1495 = (int) (BgL_objzd2classzd2numz00_1491);
								{	/* Ast/occur.scm 55 */
									long BgL_offsetz00_1496;

									BgL_offsetz00_1496 =
										((long) (BgL_offsetz00_1495) - OBJECT_TYPE);
									{	/* Ast/occur.scm 55 */
										long BgL_modz00_1497;

										{	/* Ast/occur.scm 55 */
											int BgL_arg2645z00_1498;

											BgL_arg2645z00_1498 = (int) (((long) 16));
											{	/* Ast/occur.scm 55 */
												long BgL_auxz00_2540;

												BgL_auxz00_2540 = (long) (BgL_arg2645z00_1498);
												BgL_modz00_1497 =
													(BgL_offsetz00_1496 / BgL_auxz00_2540);
										}}
										{	/* Ast/occur.scm 55 */
											long BgL_restz00_1499;

											{	/* Ast/occur.scm 55 */
												int BgL_arg2644z00_1500;

												BgL_arg2644z00_1500 = (int) (((long) 16));
												{	/* Ast/occur.scm 55 */
													long BgL_auxz00_2544;

													BgL_auxz00_2544 = (long) (BgL_arg2644z00_1500);
													BgL_restz00_1499 =
														(BgL_offsetz00_1496 % BgL_auxz00_2544);
											}}
											{	/* Ast/occur.scm 55 */

												BgL_method3308z00_1489 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1494,
														(int) (BgL_modz00_1497)), (int) (BgL_restz00_1499));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3308z00_1489) (BgL_method3308z00_1489,
					(obj_t) (BgL_nodez00_4), BEOA);
			}
		}
	}



/* _occur-node! */
	obj_t BGl__occurzd2nodez12zc0zzast_occurz00(obj_t BgL_envz00_2362,
		obj_t BgL_nodez00_2363)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 55 */
			return
				BGl_occurzd2nodez12zc0zzast_occurz00(
				(BgL_nodez00_bglt) (BgL_nodez00_2363));
		}
	}



/* _occur-node!-default3305 */
	obj_t BGl__occurzd2nodez12zd2default3305z12zzast_occurz00(obj_t
		BgL_envz00_2364, obj_t BgL_nodez00_2365)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 17 */
			{	/* Ast/occur.scm 56 */
				obj_t BgL_res3593z00_2432;

				BgL_res3593z00_2432 = CNST_TABLE_REF(((long) 0));
				return BgL_res3593z00_2432;
			}
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_occurz00()
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 17 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00, BGl_varz00zzast_nodez00,
				BGl_proc3570z00zzast_occurz00, BGl_string3569z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_sequencez00zzast_nodez00, BGl_proc3571z00zzast_occurz00,
				BGl_string3569z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00, BGl_appz00zzast_nodez00,
				BGl_proc3572z00zzast_occurz00, BGl_string3569z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3573z00zzast_occurz00,
				BGl_string3569z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_funcallz00zzast_nodez00, BGl_proc3574z00zzast_occurz00,
				BGl_string3569z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00, BGl_externz00zzast_nodez00,
				BGl_proc3575z00zzast_occurz00, BGl_string3569z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00, BGl_pragmaz00zzast_nodez00,
				BGl_proc3576z00zzast_occurz00, BGl_string3569z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00, BGl_castz00zzast_nodez00,
				BGl_proc3577z00zzast_occurz00, BGl_string3569z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00, BGl_setqz00zzast_nodez00,
				BGl_proc3578z00zzast_occurz00, BGl_string3569z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3579z00zzast_occurz00,
				BGl_string3569z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00, BGl_failz00zzast_nodez00,
				BGl_proc3580z00zzast_occurz00, BGl_string3569z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00, BGl_selectz00zzast_nodez00,
				BGl_proc3581z00zzast_occurz00, BGl_string3569z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3582z00zzast_occurz00,
				BGl_string3569z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3583z00zzast_occurz00,
				BGl_string3569z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3584z00zzast_occurz00,
				BGl_string3569z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3585z00zzast_occurz00,
				BGl_string3569z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3586z00zzast_occurz00,
				BGl_string3569z00zzast_occurz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3587z00zzast_occurz00,
				BGl_string3569z00zzast_occurz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3588z00zzast_occurz00,
				BGl_string3569z00zzast_occurz00);
		}
	}



/* occur-node!-box-set!3348 */
	obj_t BGl_occurzd2nodez12zd2boxzd2setz123348zd2zzast_occurz00(obj_t
		BgL_envz00_2385, obj_t BgL_nodez00_2386)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 233 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1417;

				BgL_nodez00_1417 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2386);
				{	/* Ast/occur.scm 235 */
					BgL_varz00_bglt BgL_arg3503z00_1421;

					BgL_arg3503z00_1421 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1417))->BgL_varz00);
					{	/* Ast/occur.scm 235 */
						BgL_nodez00_bglt BgL_nodez00_2301;

						BgL_nodez00_2301 = (BgL_nodez00_bglt) (BgL_arg3503z00_1421);
						{	/* Ast/occur.scm 235 */
							obj_t BgL_method3308z00_2302;

							{	/* Ast/occur.scm 235 */
								BgL_objectz00_bglt BgL_objz00_2303;

								BgL_objz00_2303 = (BgL_objectz00_bglt) (BgL_nodez00_2301);
								{	/* Ast/occur.scm 235 */
									long BgL_objzd2classzd2numz00_2304;

									BgL_objzd2classzd2numz00_2304 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2303);
									{	/* Ast/occur.scm 235 */
										obj_t BgL_arg2643z00_2305;

										BgL_arg2643z00_2305 =
											PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
											(int) (((long) 1)));
										{	/* Ast/occur.scm 235 */
											obj_t BgL_arrayz00_2307;

											int BgL_offsetz00_2308;

											BgL_arrayz00_2307 = BgL_arg2643z00_2305;
											BgL_offsetz00_2308 =
												(int) (BgL_objzd2classzd2numz00_2304);
											{	/* Ast/occur.scm 235 */
												long BgL_offsetz00_2309;

												BgL_offsetz00_2309 =
													((long) (BgL_offsetz00_2308) - OBJECT_TYPE);
												{	/* Ast/occur.scm 235 */
													long BgL_modz00_2310;

													{	/* Ast/occur.scm 235 */
														int BgL_arg2645z00_2311;

														BgL_arg2645z00_2311 = (int) (((long) 16));
														{	/* Ast/occur.scm 235 */
															long BgL_auxz00_2586;

															BgL_auxz00_2586 = (long) (BgL_arg2645z00_2311);
															BgL_modz00_2310 =
																(BgL_offsetz00_2309 / BgL_auxz00_2586);
													}}
													{	/* Ast/occur.scm 235 */
														long BgL_restz00_2312;

														{	/* Ast/occur.scm 235 */
															int BgL_arg2644z00_2313;

															BgL_arg2644z00_2313 = (int) (((long) 16));
															{	/* Ast/occur.scm 235 */
																long BgL_auxz00_2590;

																BgL_auxz00_2590 = (long) (BgL_arg2644z00_2313);
																BgL_restz00_2312 =
																	(BgL_offsetz00_2309 % BgL_auxz00_2590);
														}}
														{	/* Ast/occur.scm 235 */

															BgL_method3308z00_2302 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2307,
																	(int) (BgL_modz00_2310)),
																(int) (BgL_restz00_2312));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3308z00_2302) (BgL_method3308z00_2302,
								(obj_t) (BgL_nodez00_2301), BEOA);
				}}}
				{	/* Ast/occur.scm 236 */
					BgL_nodez00_bglt BgL_arg3504z00_1422;

					BgL_arg3504z00_1422 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1417))->BgL_valuez00);
					{	/* Ast/occur.scm 236 */
						obj_t BgL_method3308z00_2329;

						{	/* Ast/occur.scm 236 */
							BgL_objectz00_bglt BgL_objz00_2330;

							BgL_objz00_2330 = (BgL_objectz00_bglt) (BgL_arg3504z00_1422);
							{	/* Ast/occur.scm 236 */
								long BgL_objzd2classzd2numz00_2331;

								BgL_objzd2classzd2numz00_2331 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2330);
								{	/* Ast/occur.scm 236 */
									obj_t BgL_arg2643z00_2332;

									BgL_arg2643z00_2332 =
										PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
										(int) (((long) 1)));
									{	/* Ast/occur.scm 236 */
										obj_t BgL_arrayz00_2334;

										int BgL_offsetz00_2335;

										BgL_arrayz00_2334 = BgL_arg2643z00_2332;
										BgL_offsetz00_2335 = (int) (BgL_objzd2classzd2numz00_2331);
										{	/* Ast/occur.scm 236 */
											long BgL_offsetz00_2336;

											BgL_offsetz00_2336 =
												((long) (BgL_offsetz00_2335) - OBJECT_TYPE);
											{	/* Ast/occur.scm 236 */
												long BgL_modz00_2337;

												{	/* Ast/occur.scm 236 */
													int BgL_arg2645z00_2338;

													BgL_arg2645z00_2338 = (int) (((long) 16));
													{	/* Ast/occur.scm 236 */
														long BgL_auxz00_2609;

														BgL_auxz00_2609 = (long) (BgL_arg2645z00_2338);
														BgL_modz00_2337 =
															(BgL_offsetz00_2336 / BgL_auxz00_2609);
												}}
												{	/* Ast/occur.scm 236 */
													long BgL_restz00_2339;

													{	/* Ast/occur.scm 236 */
														int BgL_arg2644z00_2340;

														BgL_arg2644z00_2340 = (int) (((long) 16));
														{	/* Ast/occur.scm 236 */
															long BgL_auxz00_2613;

															BgL_auxz00_2613 = (long) (BgL_arg2644z00_2340);
															BgL_restz00_2339 =
																(BgL_offsetz00_2336 % BgL_auxz00_2613);
													}}
													{	/* Ast/occur.scm 236 */

														BgL_method3308z00_2329 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2334,
																(int) (BgL_modz00_2337)),
															(int) (BgL_restz00_2339));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3308z00_2329) (BgL_method3308z00_2329,
							(obj_t) (BgL_arg3504z00_1422), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-box-ref3345 */
	obj_t BGl_occurzd2nodez12zd2boxzd2ref3345zc0zzast_occurz00(obj_t
		BgL_envz00_2387, obj_t BgL_nodez00_2388)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 227 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1411;

				BgL_nodez00_1411 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2388);
				{	/* Ast/occur.scm 228 */
					BgL_varz00_bglt BgL_arg3501z00_2272;

					BgL_arg3501z00_2272 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1411))->BgL_varz00);
					{	/* Ast/occur.scm 228 */
						BgL_nodez00_bglt BgL_nodez00_2274;

						BgL_nodez00_2274 = (BgL_nodez00_bglt) (BgL_arg3501z00_2272);
						{	/* Ast/occur.scm 228 */
							obj_t BgL_method3308z00_2275;

							{	/* Ast/occur.scm 228 */
								BgL_objectz00_bglt BgL_objz00_2276;

								BgL_objz00_2276 = (BgL_objectz00_bglt) (BgL_nodez00_2274);
								{	/* Ast/occur.scm 228 */
									long BgL_objzd2classzd2numz00_2277;

									BgL_objzd2classzd2numz00_2277 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2276);
									{	/* Ast/occur.scm 228 */
										obj_t BgL_arg2643z00_2278;

										BgL_arg2643z00_2278 =
											PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
											(int) (((long) 1)));
										{	/* Ast/occur.scm 228 */
											obj_t BgL_arrayz00_2280;

											int BgL_offsetz00_2281;

											BgL_arrayz00_2280 = BgL_arg2643z00_2278;
											BgL_offsetz00_2281 =
												(int) (BgL_objzd2classzd2numz00_2277);
											{	/* Ast/occur.scm 228 */
												long BgL_offsetz00_2282;

												BgL_offsetz00_2282 =
													((long) (BgL_offsetz00_2281) - OBJECT_TYPE);
												{	/* Ast/occur.scm 228 */
													long BgL_modz00_2283;

													{	/* Ast/occur.scm 228 */
														int BgL_arg2645z00_2284;

														BgL_arg2645z00_2284 = (int) (((long) 16));
														{	/* Ast/occur.scm 228 */
															long BgL_auxz00_2634;

															BgL_auxz00_2634 = (long) (BgL_arg2645z00_2284);
															BgL_modz00_2283 =
																(BgL_offsetz00_2282 / BgL_auxz00_2634);
													}}
													{	/* Ast/occur.scm 228 */
														long BgL_restz00_2285;

														{	/* Ast/occur.scm 228 */
															int BgL_arg2644z00_2286;

															BgL_arg2644z00_2286 = (int) (((long) 16));
															{	/* Ast/occur.scm 228 */
																long BgL_auxz00_2638;

																BgL_auxz00_2638 = (long) (BgL_arg2644z00_2286);
																BgL_restz00_2285 =
																	(BgL_offsetz00_2282 % BgL_auxz00_2638);
														}}
														{	/* Ast/occur.scm 228 */

															BgL_method3308z00_2275 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2280,
																	(int) (BgL_modz00_2283)),
																(int) (BgL_restz00_2285));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3308z00_2275) (BgL_method3308z00_2275,
								(obj_t) (BgL_nodez00_2274), BEOA);
						}
					}
				}
			}
		}
	}



/* occur-node!-make-box3343 */
	obj_t BGl_occurzd2nodez12zd2makezd2box3343zc0zzast_occurz00(obj_t
		BgL_envz00_2389, obj_t BgL_nodez00_2390)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 221 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1405;

				BgL_nodez00_1405 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2390);
				{	/* Ast/occur.scm 222 */
					BgL_nodez00_bglt BgL_arg3499z00_2244;

					BgL_arg3499z00_2244 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1405))->BgL_valuez00);
					{	/* Ast/occur.scm 222 */
						obj_t BgL_method3308z00_2247;

						{	/* Ast/occur.scm 222 */
							BgL_objectz00_bglt BgL_objz00_2248;

							BgL_objz00_2248 = (BgL_objectz00_bglt) (BgL_arg3499z00_2244);
							{	/* Ast/occur.scm 222 */
								long BgL_objzd2classzd2numz00_2249;

								BgL_objzd2classzd2numz00_2249 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2248);
								{	/* Ast/occur.scm 222 */
									obj_t BgL_arg2643z00_2250;

									BgL_arg2643z00_2250 =
										PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
										(int) (((long) 1)));
									{	/* Ast/occur.scm 222 */
										obj_t BgL_arrayz00_2252;

										int BgL_offsetz00_2253;

										BgL_arrayz00_2252 = BgL_arg2643z00_2250;
										BgL_offsetz00_2253 = (int) (BgL_objzd2classzd2numz00_2249);
										{	/* Ast/occur.scm 222 */
											long BgL_offsetz00_2254;

											BgL_offsetz00_2254 =
												((long) (BgL_offsetz00_2253) - OBJECT_TYPE);
											{	/* Ast/occur.scm 222 */
												long BgL_modz00_2255;

												{	/* Ast/occur.scm 222 */
													int BgL_arg2645z00_2256;

													BgL_arg2645z00_2256 = (int) (((long) 16));
													{	/* Ast/occur.scm 222 */
														long BgL_auxz00_2658;

														BgL_auxz00_2658 = (long) (BgL_arg2645z00_2256);
														BgL_modz00_2255 =
															(BgL_offsetz00_2254 / BgL_auxz00_2658);
												}}
												{	/* Ast/occur.scm 222 */
													long BgL_restz00_2257;

													{	/* Ast/occur.scm 222 */
														int BgL_arg2644z00_2258;

														BgL_arg2644z00_2258 = (int) (((long) 16));
														{	/* Ast/occur.scm 222 */
															long BgL_auxz00_2662;

															BgL_auxz00_2662 = (long) (BgL_arg2644z00_2258);
															BgL_restz00_2257 =
																(BgL_offsetz00_2254 % BgL_auxz00_2662);
													}}
													{	/* Ast/occur.scm 222 */

														BgL_method3308z00_2247 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2252,
																(int) (BgL_modz00_2255)),
															(int) (BgL_restz00_2257));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3308z00_2247) (BgL_method3308z00_2247,
							(obj_t) (BgL_arg3499z00_2244), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-jump-ex-3341 */
	obj_t BGl_occurzd2nodez12zd2jumpzd2exzd23341z12zzast_occurz00(obj_t
		BgL_envz00_2391, obj_t BgL_nodez00_2392)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 213 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1397;

				BgL_nodez00_1397 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2392);
				{	/* Ast/occur.scm 215 */
					BgL_nodez00_bglt BgL_arg3496z00_1401;

					BgL_arg3496z00_1401 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1397))->
						BgL_exitz00);
					{	/* Ast/occur.scm 215 */
						obj_t BgL_method3308z00_2192;

						{	/* Ast/occur.scm 215 */
							BgL_objectz00_bglt BgL_objz00_2193;

							BgL_objz00_2193 = (BgL_objectz00_bglt) (BgL_arg3496z00_1401);
							{	/* Ast/occur.scm 215 */
								long BgL_objzd2classzd2numz00_2194;

								BgL_objzd2classzd2numz00_2194 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2193);
								{	/* Ast/occur.scm 215 */
									obj_t BgL_arg2643z00_2195;

									BgL_arg2643z00_2195 =
										PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
										(int) (((long) 1)));
									{	/* Ast/occur.scm 215 */
										obj_t BgL_arrayz00_2197;

										int BgL_offsetz00_2198;

										BgL_arrayz00_2197 = BgL_arg2643z00_2195;
										BgL_offsetz00_2198 = (int) (BgL_objzd2classzd2numz00_2194);
										{	/* Ast/occur.scm 215 */
											long BgL_offsetz00_2199;

											BgL_offsetz00_2199 =
												((long) (BgL_offsetz00_2198) - OBJECT_TYPE);
											{	/* Ast/occur.scm 215 */
												long BgL_modz00_2200;

												{	/* Ast/occur.scm 215 */
													int BgL_arg2645z00_2201;

													BgL_arg2645z00_2201 = (int) (((long) 16));
													{	/* Ast/occur.scm 215 */
														long BgL_auxz00_2682;

														BgL_auxz00_2682 = (long) (BgL_arg2645z00_2201);
														BgL_modz00_2200 =
															(BgL_offsetz00_2199 / BgL_auxz00_2682);
												}}
												{	/* Ast/occur.scm 215 */
													long BgL_restz00_2202;

													{	/* Ast/occur.scm 215 */
														int BgL_arg2644z00_2203;

														BgL_arg2644z00_2203 = (int) (((long) 16));
														{	/* Ast/occur.scm 215 */
															long BgL_auxz00_2686;

															BgL_auxz00_2686 = (long) (BgL_arg2644z00_2203);
															BgL_restz00_2202 =
																(BgL_offsetz00_2199 % BgL_auxz00_2686);
													}}
													{	/* Ast/occur.scm 215 */

														BgL_method3308z00_2192 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2197,
																(int) (BgL_modz00_2200)),
															(int) (BgL_restz00_2202));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3308z00_2192) (BgL_method3308z00_2192,
							(obj_t) (BgL_arg3496z00_1401), BEOA);
				}}
				{	/* Ast/occur.scm 216 */
					BgL_nodez00_bglt BgL_arg3497z00_1402;

					BgL_arg3497z00_1402 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1397))->
						BgL_valuez00);
					{	/* Ast/occur.scm 216 */
						obj_t BgL_method3308z00_2219;

						{	/* Ast/occur.scm 216 */
							BgL_objectz00_bglt BgL_objz00_2220;

							BgL_objz00_2220 = (BgL_objectz00_bglt) (BgL_arg3497z00_1402);
							{	/* Ast/occur.scm 216 */
								long BgL_objzd2classzd2numz00_2221;

								BgL_objzd2classzd2numz00_2221 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2220);
								{	/* Ast/occur.scm 216 */
									obj_t BgL_arg2643z00_2222;

									BgL_arg2643z00_2222 =
										PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
										(int) (((long) 1)));
									{	/* Ast/occur.scm 216 */
										obj_t BgL_arrayz00_2224;

										int BgL_offsetz00_2225;

										BgL_arrayz00_2224 = BgL_arg2643z00_2222;
										BgL_offsetz00_2225 = (int) (BgL_objzd2classzd2numz00_2221);
										{	/* Ast/occur.scm 216 */
											long BgL_offsetz00_2226;

											BgL_offsetz00_2226 =
												((long) (BgL_offsetz00_2225) - OBJECT_TYPE);
											{	/* Ast/occur.scm 216 */
												long BgL_modz00_2227;

												{	/* Ast/occur.scm 216 */
													int BgL_arg2645z00_2228;

													BgL_arg2645z00_2228 = (int) (((long) 16));
													{	/* Ast/occur.scm 216 */
														long BgL_auxz00_2705;

														BgL_auxz00_2705 = (long) (BgL_arg2645z00_2228);
														BgL_modz00_2227 =
															(BgL_offsetz00_2226 / BgL_auxz00_2705);
												}}
												{	/* Ast/occur.scm 216 */
													long BgL_restz00_2229;

													{	/* Ast/occur.scm 216 */
														int BgL_arg2644z00_2230;

														BgL_arg2644z00_2230 = (int) (((long) 16));
														{	/* Ast/occur.scm 216 */
															long BgL_auxz00_2709;

															BgL_auxz00_2709 = (long) (BgL_arg2644z00_2230);
															BgL_restz00_2229 =
																(BgL_offsetz00_2226 % BgL_auxz00_2709);
													}}
													{	/* Ast/occur.scm 216 */

														BgL_method3308z00_2219 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2224,
																(int) (BgL_modz00_2227)),
															(int) (BgL_restz00_2229));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3308z00_2219) (BgL_method3308z00_2219,
							(obj_t) (BgL_arg3497z00_1402), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-set-ex-i3339 */
	obj_t BGl_occurzd2nodez12zd2setzd2exzd2i3339z12zzast_occurz00(obj_t
		BgL_envz00_2393, obj_t BgL_nodez00_2394)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 203 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1385;

				BgL_nodez00_1385 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2394);
				{	/* Ast/occur.scm 205 */
					BgL_variablez00_bglt BgL_instance3274z00_1389;

					{	/* Ast/occur.scm 205 */
						BgL_varz00_bglt BgL_obj2155z00_2157;

						BgL_obj2155z00_2157 =
							(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1385))->
							BgL_varz00);
						BgL_instance3274z00_1389 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2157))->BgL_variablez00);
					}
					((((BgL_variablez00_bglt) CREF(BgL_instance3274z00_1389))->
							BgL_occurrencez00) = ((long) ((long) 0)), BUNSPEC);
					if (((((BgL_variablez00_bglt) CREF(BgL_instance3274z00_1389))->
								BgL_accessz00) == CNST_TABLE_REF(((long) 1))))
						{	/* Ast/occur.scm 207 */
							BgL_variablez00_bglt BgL_obj1616z00_2161;

							obj_t BgL_val1615z00_2162;

							BgL_obj1616z00_2161 = BgL_instance3274z00_1389;
							BgL_val1615z00_2162 = CNST_TABLE_REF(((long) 2));
							((((BgL_variablez00_bglt) CREF(BgL_obj1616z00_2161))->
									BgL_accessz00) = ((obj_t) BgL_val1615z00_2162), BUNSPEC);
						}
					else
						{	/* Ast/occur.scm 207 */
							BFALSE;
						}
				}
				{	/* Ast/occur.scm 208 */
					BgL_nodez00_bglt BgL_arg3494z00_1394;

					BgL_arg3494z00_1394 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1385))->BgL_bodyz00);
					{	/* Ast/occur.scm 208 */
						obj_t BgL_method3308z00_2165;

						{	/* Ast/occur.scm 208 */
							BgL_objectz00_bglt BgL_objz00_2166;

							BgL_objz00_2166 = (BgL_objectz00_bglt) (BgL_arg3494z00_1394);
							{	/* Ast/occur.scm 208 */
								long BgL_objzd2classzd2numz00_2167;

								BgL_objzd2classzd2numz00_2167 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2166);
								{	/* Ast/occur.scm 208 */
									obj_t BgL_arg2643z00_2168;

									BgL_arg2643z00_2168 =
										PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
										(int) (((long) 1)));
									{	/* Ast/occur.scm 208 */
										obj_t BgL_arrayz00_2170;

										int BgL_offsetz00_2171;

										BgL_arrayz00_2170 = BgL_arg2643z00_2168;
										BgL_offsetz00_2171 = (int) (BgL_objzd2classzd2numz00_2167);
										{	/* Ast/occur.scm 208 */
											long BgL_offsetz00_2172;

											BgL_offsetz00_2172 =
												((long) (BgL_offsetz00_2171) - OBJECT_TYPE);
											{	/* Ast/occur.scm 208 */
												long BgL_modz00_2173;

												{	/* Ast/occur.scm 208 */
													int BgL_arg2645z00_2174;

													BgL_arg2645z00_2174 = (int) (((long) 16));
													{	/* Ast/occur.scm 208 */
														long BgL_auxz00_2738;

														BgL_auxz00_2738 = (long) (BgL_arg2645z00_2174);
														BgL_modz00_2173 =
															(BgL_offsetz00_2172 / BgL_auxz00_2738);
												}}
												{	/* Ast/occur.scm 208 */
													long BgL_restz00_2175;

													{	/* Ast/occur.scm 208 */
														int BgL_arg2644z00_2176;

														BgL_arg2644z00_2176 = (int) (((long) 16));
														{	/* Ast/occur.scm 208 */
															long BgL_auxz00_2742;

															BgL_auxz00_2742 = (long) (BgL_arg2644z00_2176);
															BgL_restz00_2175 =
																(BgL_offsetz00_2172 % BgL_auxz00_2742);
													}}
													{	/* Ast/occur.scm 208 */

														BgL_method3308z00_2165 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2170,
																(int) (BgL_modz00_2173)),
															(int) (BgL_restz00_2175));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3308z00_2165) (BgL_method3308z00_2165,
							(obj_t) (BgL_arg3494z00_1394), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-let-var3337 */
	obj_t BGl_occurzd2nodez12zd2letzd2var3337zc0zzast_occurz00(obj_t
		BgL_envz00_2395, obj_t BgL_nodez00_2396)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 188 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1360;

				BgL_nodez00_1360 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2396);
				{	/* Ast/occur.scm 190 */
					obj_t BgL_g3299z00_1364;

					BgL_g3299z00_1364 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1360))->BgL_bindingsz00);
					{
						obj_t BgL_l3297z00_1366;

						BgL_l3297z00_1366 = BgL_g3299z00_1364;
					BgL_zc3anonymousza33481ze3z83_1367:
						if (PAIRP(BgL_l3297z00_1366))
							{	/* Ast/occur.scm 190 */
								{	/* Ast/occur.scm 191 */
									obj_t BgL_bindingz00_1369;

									BgL_bindingz00_1369 = CAR(BgL_l3297z00_1366);
									{	/* Ast/occur.scm 191 */
										obj_t BgL_instance3270z00_1370;

										BgL_instance3270z00_1370 = CAR(BgL_bindingz00_1369);
										{
											BgL_variablez00_bglt BgL_auxz00_2758;

											BgL_auxz00_2758 =
												(BgL_variablez00_bglt) (BgL_instance3270z00_1370);
											((((BgL_variablez00_bglt) CREF(BgL_auxz00_2758))->
													BgL_occurrencez00) = ((long) ((long) 0)), BUNSPEC);
										}
										{	/* Ast/occur.scm 193 */
											BgL_variablez00_bglt BgL_obj1616z00_2095;

											obj_t BgL_val1615z00_2096;

											BgL_obj1616z00_2095 =
												(BgL_variablez00_bglt) (BgL_instance3270z00_1370);
											BgL_val1615z00_2096 = CNST_TABLE_REF(((long) 2));
											((((BgL_variablez00_bglt) CREF(BgL_obj1616z00_2095))->
													BgL_accessz00) =
												((obj_t) BgL_val1615z00_2096), BUNSPEC);
								}}}
								{
									obj_t BgL_l3297z00_2764;

									BgL_l3297z00_2764 = CDR(BgL_l3297z00_1366);
									BgL_l3297z00_1366 = BgL_l3297z00_2764;
									goto BgL_zc3anonymousza33481ze3z83_1367;
								}
							}
						else
							{	/* Ast/occur.scm 190 */
								((bool_t) 1);
							}
					}
				}
				{	/* Ast/occur.scm 195 */
					obj_t BgL_g3302z00_1373;

					BgL_g3302z00_1373 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1360))->BgL_bindingsz00);
					{
						obj_t BgL_l3300z00_1375;

						BgL_l3300z00_1375 = BgL_g3302z00_1373;
					BgL_zc3anonymousza33484ze3z83_1376:
						if (PAIRP(BgL_l3300z00_1375))
							{	/* Ast/occur.scm 195 */
								{	/* Ast/occur.scm 196 */
									obj_t BgL_bindingz00_1378;

									BgL_bindingz00_1378 = CAR(BgL_l3300z00_1375);
									{	/* Ast/occur.scm 196 */
										obj_t BgL_arg3486z00_1379;

										BgL_arg3486z00_1379 = CDR(BgL_bindingz00_1378);
										{	/* Ast/occur.scm 196 */
											BgL_nodez00_bglt BgL_nodez00_2102;

											BgL_nodez00_2102 =
												(BgL_nodez00_bglt) (BgL_arg3486z00_1379);
											{	/* Ast/occur.scm 196 */
												obj_t BgL_method3308z00_2103;

												{	/* Ast/occur.scm 196 */
													BgL_objectz00_bglt BgL_objz00_2104;

													BgL_objz00_2104 =
														(BgL_objectz00_bglt) (BgL_nodez00_2102);
													{	/* Ast/occur.scm 196 */
														long BgL_objzd2classzd2numz00_2105;

														BgL_objzd2classzd2numz00_2105 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2104);
														{	/* Ast/occur.scm 196 */
															obj_t BgL_arg2643z00_2106;

															BgL_arg2643z00_2106 =
																PROCEDURE_REF
																(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
																(int) (((long) 1)));
															{	/* Ast/occur.scm 196 */
																obj_t BgL_arrayz00_2108;

																int BgL_offsetz00_2109;

																BgL_arrayz00_2108 = BgL_arg2643z00_2106;
																BgL_offsetz00_2109 =
																	(int) (BgL_objzd2classzd2numz00_2105);
																{	/* Ast/occur.scm 196 */
																	long BgL_offsetz00_2110;

																	BgL_offsetz00_2110 =
																		((long) (BgL_offsetz00_2109) - OBJECT_TYPE);
																	{	/* Ast/occur.scm 196 */
																		long BgL_modz00_2111;

																		{	/* Ast/occur.scm 196 */
																			int BgL_arg2645z00_2112;

																			BgL_arg2645z00_2112 = (int) (((long) 16));
																			{	/* Ast/occur.scm 196 */
																				long BgL_auxz00_2780;

																				BgL_auxz00_2780 =
																					(long) (BgL_arg2645z00_2112);
																				BgL_modz00_2111 =
																					(BgL_offsetz00_2110 /
																					BgL_auxz00_2780);
																		}}
																		{	/* Ast/occur.scm 196 */
																			long BgL_restz00_2113;

																			{	/* Ast/occur.scm 196 */
																				int BgL_arg2644z00_2114;

																				BgL_arg2644z00_2114 =
																					(int) (((long) 16));
																				{	/* Ast/occur.scm 196 */
																					long BgL_auxz00_2784;

																					BgL_auxz00_2784 =
																						(long) (BgL_arg2644z00_2114);
																					BgL_restz00_2113 =
																						(BgL_offsetz00_2110 %
																						BgL_auxz00_2784);
																			}}
																			{	/* Ast/occur.scm 196 */

																				BgL_method3308z00_2103 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2108,
																						(int) (BgL_modz00_2111)),
																					(int) (BgL_restz00_2113));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method3308z00_2103)
													(BgL_method3308z00_2103, (obj_t) (BgL_nodez00_2102),
													BEOA);
								}}}}
								{
									obj_t BgL_l3300z00_2794;

									BgL_l3300z00_2794 = CDR(BgL_l3300z00_1375);
									BgL_l3300z00_1375 = BgL_l3300z00_2794;
									goto BgL_zc3anonymousza33484ze3z83_1376;
								}
							}
						else
							{	/* Ast/occur.scm 195 */
								((bool_t) 1);
							}
					}
				}
				{	/* Ast/occur.scm 198 */
					BgL_nodez00_bglt BgL_arg3488z00_1382;

					BgL_arg3488z00_1382 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1360))->BgL_bodyz00);
					{	/* Ast/occur.scm 198 */
						obj_t BgL_method3308z00_2131;

						{	/* Ast/occur.scm 198 */
							BgL_objectz00_bglt BgL_objz00_2132;

							BgL_objz00_2132 = (BgL_objectz00_bglt) (BgL_arg3488z00_1382);
							{	/* Ast/occur.scm 198 */
								long BgL_objzd2classzd2numz00_2133;

								BgL_objzd2classzd2numz00_2133 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2132);
								{	/* Ast/occur.scm 198 */
									obj_t BgL_arg2643z00_2134;

									BgL_arg2643z00_2134 =
										PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
										(int) (((long) 1)));
									{	/* Ast/occur.scm 198 */
										obj_t BgL_arrayz00_2136;

										int BgL_offsetz00_2137;

										BgL_arrayz00_2136 = BgL_arg2643z00_2134;
										BgL_offsetz00_2137 = (int) (BgL_objzd2classzd2numz00_2133);
										{	/* Ast/occur.scm 198 */
											long BgL_offsetz00_2138;

											BgL_offsetz00_2138 =
												((long) (BgL_offsetz00_2137) - OBJECT_TYPE);
											{	/* Ast/occur.scm 198 */
												long BgL_modz00_2139;

												{	/* Ast/occur.scm 198 */
													int BgL_arg2645z00_2140;

													BgL_arg2645z00_2140 = (int) (((long) 16));
													{	/* Ast/occur.scm 198 */
														long BgL_auxz00_2805;

														BgL_auxz00_2805 = (long) (BgL_arg2645z00_2140);
														BgL_modz00_2139 =
															(BgL_offsetz00_2138 / BgL_auxz00_2805);
												}}
												{	/* Ast/occur.scm 198 */
													long BgL_restz00_2141;

													{	/* Ast/occur.scm 198 */
														int BgL_arg2644z00_2142;

														BgL_arg2644z00_2142 = (int) (((long) 16));
														{	/* Ast/occur.scm 198 */
															long BgL_auxz00_2809;

															BgL_auxz00_2809 = (long) (BgL_arg2644z00_2142);
															BgL_restz00_2141 =
																(BgL_offsetz00_2138 % BgL_auxz00_2809);
													}}
													{	/* Ast/occur.scm 198 */

														BgL_method3308z00_2131 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2136,
																(int) (BgL_modz00_2139)),
															(int) (BgL_restz00_2141));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3308z00_2131) (BgL_method3308z00_2131,
							(obj_t) (BgL_arg3488z00_1382), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-let-fun3335 */
	obj_t BGl_occurzd2nodez12zd2letzd2fun3335zc0zzast_occurz00(obj_t
		BgL_envz00_2397, obj_t BgL_nodez00_2398)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 168 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1321;

				BgL_nodez00_1321 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2398);
				{	/* Ast/occur.scm 170 */
					obj_t BgL_g3293z00_1325;

					BgL_g3293z00_1325 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1321))->BgL_localsz00);
					{
						obj_t BgL_l3291z00_1327;

						BgL_l3291z00_1327 = BgL_g3293z00_1325;
					BgL_zc3anonymousza33464ze3z83_1328:
						if (PAIRP(BgL_l3291z00_1327))
							{	/* Ast/occur.scm 170 */
								{	/* Ast/occur.scm 176 */
									obj_t BgL_localz00_1330;

									BgL_localz00_1330 = CAR(BgL_l3291z00_1327);
									{
										BgL_variablez00_bglt BgL_auxz00_2824;

										BgL_auxz00_2824 =
											(BgL_variablez00_bglt) (BgL_localz00_1330);
										((((BgL_variablez00_bglt) CREF(BgL_auxz00_2824))->
												BgL_occurrencez00) = ((long) ((long) 0)), BUNSPEC);
									}
									{	/* Ast/occur.scm 174 */
										bool_t BgL_testz00_2827;

										{	/* Ast/occur.scm 174 */
											obj_t BgL_auxz00_2828;

											{
												BgL_variablez00_bglt BgL_auxz00_2829;

												BgL_auxz00_2829 =
													(BgL_variablez00_bglt) (BgL_localz00_1330);
												BgL_auxz00_2828 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_2829))->
													BgL_accessz00);
											}
											BgL_testz00_2827 =
												(BgL_auxz00_2828 == CNST_TABLE_REF(((long) 1)));
										}
										if (BgL_testz00_2827)
											{	/* Ast/occur.scm 174 */
												BgL_variablez00_bglt BgL_obj1616z00_2017;

												obj_t BgL_val1615z00_2018;

												BgL_obj1616z00_2017 =
													(BgL_variablez00_bglt) (BgL_localz00_1330);
												BgL_val1615z00_2018 = CNST_TABLE_REF(((long) 2));
												((((BgL_variablez00_bglt) CREF(BgL_obj1616z00_2017))->
														BgL_accessz00) =
													((obj_t) BgL_val1615z00_2018), BUNSPEC);
											}
										else
											{	/* Ast/occur.scm 174 */
												BFALSE;
											}
									}
									{	/* Ast/occur.scm 175 */
										obj_t BgL_g3290z00_1335;

										{	/* Ast/occur.scm 176 */
											BgL_sfunz00_bglt BgL_obj1880z00_2020;

											{	/* Ast/occur.scm 176 */
												BgL_variablez00_bglt BgL_obj1611z00_2019;

												BgL_obj1611z00_2019 =
													(BgL_variablez00_bglt) (BgL_localz00_1330);
												BgL_obj1880z00_2020 =
													(BgL_sfunz00_bglt) (
													(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_2019))->
														BgL_valuez00));
											}
											BgL_g3290z00_1335 =
												(((BgL_sfunz00_bglt) CREF(BgL_obj1880z00_2020))->
												BgL_argsz00);
										}
										{
											obj_t BgL_l3288z00_1337;

											BgL_l3288z00_1337 = BgL_g3290z00_1335;
										BgL_zc3anonymousza33469ze3z83_1338:
											if (PAIRP(BgL_l3288z00_1337))
												{	/* Ast/occur.scm 176 */
													{	/* Ast/occur.scm 175 */
														obj_t BgL_az00_1340;

														BgL_az00_1340 = CAR(BgL_l3288z00_1337);
														{
															BgL_variablez00_bglt BgL_auxz00_2844;

															BgL_auxz00_2844 =
																(BgL_variablez00_bglt) (BgL_az00_1340);
															((((BgL_variablez00_bglt) CREF(BgL_auxz00_2844))->
																	BgL_occurrencez00) =
																((long) ((long) 1)), BUNSPEC);
													}}
													{
														obj_t BgL_l3288z00_2847;

														BgL_l3288z00_2847 = CDR(BgL_l3288z00_1337);
														BgL_l3288z00_1337 = BgL_l3288z00_2847;
														goto BgL_zc3anonymousza33469ze3z83_1338;
													}
												}
											else
												{	/* Ast/occur.scm 176 */
													((bool_t) 1);
												}
										}
									}
								}
								{
									obj_t BgL_l3291z00_2849;

									BgL_l3291z00_2849 = CDR(BgL_l3291z00_1327);
									BgL_l3291z00_1327 = BgL_l3291z00_2849;
									goto BgL_zc3anonymousza33464ze3z83_1328;
								}
							}
						else
							{	/* Ast/occur.scm 170 */
								((bool_t) 1);
							}
					}
				}
				{	/* Ast/occur.scm 178 */
					obj_t BgL_g3296z00_1346;

					BgL_g3296z00_1346 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1321))->BgL_localsz00);
					{
						obj_t BgL_l3294z00_1348;

						BgL_l3294z00_1348 = BgL_g3296z00_1346;
					BgL_zc3anonymousza33474ze3z83_1349:
						if (PAIRP(BgL_l3294z00_1348))
							{	/* Ast/occur.scm 178 */
								{	/* Ast/occur.scm 179 */
									obj_t BgL_localz00_1351;

									BgL_localz00_1351 = CAR(BgL_l3294z00_1348);
									{	/* Ast/occur.scm 179 */
										long BgL_oldz00_1352;

										{
											BgL_variablez00_bglt BgL_auxz00_2855;

											BgL_auxz00_2855 =
												(BgL_variablez00_bglt) (BgL_localz00_1351);
											BgL_oldz00_1352 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_2855))->
												BgL_occurrencez00);
										}
										{	/* Ast/occur.scm 180 */
											obj_t BgL_arg3476z00_1353;

											{	/* Ast/occur.scm 180 */
												BgL_sfunz00_bglt BgL_obj1884z00_2032;

												{	/* Ast/occur.scm 180 */
													BgL_variablez00_bglt BgL_obj1611z00_2031;

													BgL_obj1611z00_2031 =
														(BgL_variablez00_bglt) (BgL_localz00_1351);
													BgL_obj1884z00_2032 =
														(BgL_sfunz00_bglt) (
														(((BgL_variablez00_bglt)
																CREF(BgL_obj1611z00_2031))->BgL_valuez00));
												}
												BgL_arg3476z00_1353 =
													(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_2032))->
													BgL_bodyz00);
											}
											{	/* Ast/occur.scm 180 */
												BgL_nodez00_bglt BgL_nodez00_2033;

												BgL_nodez00_2033 =
													(BgL_nodez00_bglt) (BgL_arg3476z00_1353);
												{	/* Ast/occur.scm 180 */
													obj_t BgL_method3308z00_2034;

													{	/* Ast/occur.scm 180 */
														BgL_objectz00_bglt BgL_objz00_2035;

														BgL_objz00_2035 =
															(BgL_objectz00_bglt) (BgL_nodez00_2033);
														{	/* Ast/occur.scm 180 */
															long BgL_objzd2classzd2numz00_2036;

															BgL_objzd2classzd2numz00_2036 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2035);
															{	/* Ast/occur.scm 180 */
																obj_t BgL_arg2643z00_2037;

																BgL_arg2643z00_2037 =
																	PROCEDURE_REF
																	(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
																	(int) (((long) 1)));
																{	/* Ast/occur.scm 180 */
																	obj_t BgL_arrayz00_2039;

																	int BgL_offsetz00_2040;

																	BgL_arrayz00_2039 = BgL_arg2643z00_2037;
																	BgL_offsetz00_2040 =
																		(int) (BgL_objzd2classzd2numz00_2036);
																	{	/* Ast/occur.scm 180 */
																		long BgL_offsetz00_2041;

																		BgL_offsetz00_2041 =
																			(
																			(long) (BgL_offsetz00_2040) -
																			OBJECT_TYPE);
																		{	/* Ast/occur.scm 180 */
																			long BgL_modz00_2042;

																			{	/* Ast/occur.scm 180 */
																				int BgL_arg2645z00_2043;

																				BgL_arg2645z00_2043 =
																					(int) (((long) 16));
																				{	/* Ast/occur.scm 180 */
																					long BgL_auxz00_2871;

																					BgL_auxz00_2871 =
																						(long) (BgL_arg2645z00_2043);
																					BgL_modz00_2042 =
																						(BgL_offsetz00_2041 /
																						BgL_auxz00_2871);
																			}}
																			{	/* Ast/occur.scm 180 */
																				long BgL_restz00_2044;

																				{	/* Ast/occur.scm 180 */
																					int BgL_arg2644z00_2045;

																					BgL_arg2644z00_2045 =
																						(int) (((long) 16));
																					{	/* Ast/occur.scm 180 */
																						long BgL_auxz00_2875;

																						BgL_auxz00_2875 =
																							(long) (BgL_arg2644z00_2045);
																						BgL_restz00_2044 =
																							(BgL_offsetz00_2041 %
																							BgL_auxz00_2875);
																				}}
																				{	/* Ast/occur.scm 180 */

																					BgL_method3308z00_2034 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2039,
																							(int) (BgL_modz00_2042)),
																						(int) (BgL_restz00_2044));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method3308z00_2034)
														(BgL_method3308z00_2034, (obj_t) (BgL_nodez00_2033),
														BEOA);
										}}}
										{
											BgL_variablez00_bglt BgL_auxz00_2885;

											BgL_auxz00_2885 =
												(BgL_variablez00_bglt) (BgL_localz00_1351);
											((((BgL_variablez00_bglt) CREF(BgL_auxz00_2885))->
													BgL_occurrencez00) =
												((long) BgL_oldz00_1352), BUNSPEC);
								}}}
								{
									obj_t BgL_l3294z00_2888;

									BgL_l3294z00_2888 = CDR(BgL_l3294z00_1348);
									BgL_l3294z00_1348 = BgL_l3294z00_2888;
									goto BgL_zc3anonymousza33474ze3z83_1349;
								}
							}
						else
							{	/* Ast/occur.scm 178 */
								((bool_t) 1);
							}
					}
				}
				{	/* Ast/occur.scm 183 */
					BgL_nodez00_bglt BgL_arg3479z00_1357;

					BgL_arg3479z00_1357 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1321))->BgL_bodyz00);
					{	/* Ast/occur.scm 183 */
						obj_t BgL_method3308z00_2064;

						{	/* Ast/occur.scm 183 */
							BgL_objectz00_bglt BgL_objz00_2065;

							BgL_objz00_2065 = (BgL_objectz00_bglt) (BgL_arg3479z00_1357);
							{	/* Ast/occur.scm 183 */
								long BgL_objzd2classzd2numz00_2066;

								BgL_objzd2classzd2numz00_2066 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2065);
								{	/* Ast/occur.scm 183 */
									obj_t BgL_arg2643z00_2067;

									BgL_arg2643z00_2067 =
										PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
										(int) (((long) 1)));
									{	/* Ast/occur.scm 183 */
										obj_t BgL_arrayz00_2069;

										int BgL_offsetz00_2070;

										BgL_arrayz00_2069 = BgL_arg2643z00_2067;
										BgL_offsetz00_2070 = (int) (BgL_objzd2classzd2numz00_2066);
										{	/* Ast/occur.scm 183 */
											long BgL_offsetz00_2071;

											BgL_offsetz00_2071 =
												((long) (BgL_offsetz00_2070) - OBJECT_TYPE);
											{	/* Ast/occur.scm 183 */
												long BgL_modz00_2072;

												{	/* Ast/occur.scm 183 */
													int BgL_arg2645z00_2073;

													BgL_arg2645z00_2073 = (int) (((long) 16));
													{	/* Ast/occur.scm 183 */
														long BgL_auxz00_2899;

														BgL_auxz00_2899 = (long) (BgL_arg2645z00_2073);
														BgL_modz00_2072 =
															(BgL_offsetz00_2071 / BgL_auxz00_2899);
												}}
												{	/* Ast/occur.scm 183 */
													long BgL_restz00_2074;

													{	/* Ast/occur.scm 183 */
														int BgL_arg2644z00_2075;

														BgL_arg2644z00_2075 = (int) (((long) 16));
														{	/* Ast/occur.scm 183 */
															long BgL_auxz00_2903;

															BgL_auxz00_2903 = (long) (BgL_arg2644z00_2075);
															BgL_restz00_2074 =
																(BgL_offsetz00_2071 % BgL_auxz00_2903);
													}}
													{	/* Ast/occur.scm 183 */

														BgL_method3308z00_2064 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2069,
																(int) (BgL_modz00_2072)),
															(int) (BgL_restz00_2074));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3308z00_2064) (BgL_method3308z00_2064,
							(obj_t) (BgL_arg3479z00_1357), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-select3333 */
	obj_t BGl_occurzd2nodez12zd2select3333z12zzast_occurz00(obj_t BgL_envz00_2399,
		obj_t BgL_nodez00_2400)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 158 */
			{
				BgL_selectz00_bglt BgL_nodez00_1305;

				{	/* Ast/occur.scm 159 */
					bool_t BgL_auxz00_2914;

					BgL_nodez00_1305 = (BgL_selectz00_bglt) (BgL_nodez00_2400);
					{	/* Ast/occur.scm 160 */
						BgL_nodez00_bglt BgL_arg3458z00_1309;

						BgL_arg3458z00_1309 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1305))->BgL_testz00);
						{	/* Ast/occur.scm 160 */
							obj_t BgL_method3308z00_1955;

							{	/* Ast/occur.scm 160 */
								BgL_objectz00_bglt BgL_objz00_1956;

								BgL_objz00_1956 = (BgL_objectz00_bglt) (BgL_arg3458z00_1309);
								{	/* Ast/occur.scm 160 */
									long BgL_objzd2classzd2numz00_1957;

									BgL_objzd2classzd2numz00_1957 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1956);
									{	/* Ast/occur.scm 160 */
										obj_t BgL_arg2643z00_1958;

										BgL_arg2643z00_1958 =
											PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
											(int) (((long) 1)));
										{	/* Ast/occur.scm 160 */
											obj_t BgL_arrayz00_1960;

											int BgL_offsetz00_1961;

											BgL_arrayz00_1960 = BgL_arg2643z00_1958;
											BgL_offsetz00_1961 =
												(int) (BgL_objzd2classzd2numz00_1957);
											{	/* Ast/occur.scm 160 */
												long BgL_offsetz00_1962;

												BgL_offsetz00_1962 =
													((long) (BgL_offsetz00_1961) - OBJECT_TYPE);
												{	/* Ast/occur.scm 160 */
													long BgL_modz00_1963;

													{	/* Ast/occur.scm 160 */
														int BgL_arg2645z00_1964;

														BgL_arg2645z00_1964 = (int) (((long) 16));
														{	/* Ast/occur.scm 160 */
															long BgL_auxz00_2924;

															BgL_auxz00_2924 = (long) (BgL_arg2645z00_1964);
															BgL_modz00_1963 =
																(BgL_offsetz00_1962 / BgL_auxz00_2924);
													}}
													{	/* Ast/occur.scm 160 */
														long BgL_restz00_1965;

														{	/* Ast/occur.scm 160 */
															int BgL_arg2644z00_1966;

															BgL_arg2644z00_1966 = (int) (((long) 16));
															{	/* Ast/occur.scm 160 */
																long BgL_auxz00_2928;

																BgL_auxz00_2928 = (long) (BgL_arg2644z00_1966);
																BgL_restz00_1965 =
																	(BgL_offsetz00_1962 % BgL_auxz00_2928);
														}}
														{	/* Ast/occur.scm 160 */

															BgL_method3308z00_1955 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1960,
																	(int) (BgL_modz00_1963)),
																(int) (BgL_restz00_1965));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3308z00_1955) (BgL_method3308z00_1955,
								(obj_t) (BgL_arg3458z00_1309), BEOA);
					}}
					{	/* Ast/occur.scm 161 */
						obj_t BgL_g3287z00_1310;

						BgL_g3287z00_1310 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1305))->BgL_clausesz00);
						{
							obj_t BgL_l3285z00_1312;

							BgL_l3285z00_1312 = BgL_g3287z00_1310;
						BgL_zc3anonymousza33459ze3z83_1313:
							if (PAIRP(BgL_l3285z00_1312))
								{	/* Ast/occur.scm 161 */
									{	/* Ast/occur.scm 162 */
										obj_t BgL_clausez00_1315;

										BgL_clausez00_1315 = CAR(BgL_l3285z00_1312);
										{	/* Ast/occur.scm 162 */
											obj_t BgL_arg3461z00_1316;

											BgL_arg3461z00_1316 = CDR(BgL_clausez00_1315);
											{	/* Ast/occur.scm 162 */
												BgL_nodez00_bglt BgL_nodez00_1984;

												BgL_nodez00_1984 =
													(BgL_nodez00_bglt) (BgL_arg3461z00_1316);
												{	/* Ast/occur.scm 162 */
													obj_t BgL_method3308z00_1985;

													{	/* Ast/occur.scm 162 */
														BgL_objectz00_bglt BgL_objz00_1986;

														BgL_objz00_1986 =
															(BgL_objectz00_bglt) (BgL_nodez00_1984);
														{	/* Ast/occur.scm 162 */
															long BgL_objzd2classzd2numz00_1987;

															BgL_objzd2classzd2numz00_1987 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_1986);
															{	/* Ast/occur.scm 162 */
																obj_t BgL_arg2643z00_1988;

																BgL_arg2643z00_1988 =
																	PROCEDURE_REF
																	(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
																	(int) (((long) 1)));
																{	/* Ast/occur.scm 162 */
																	obj_t BgL_arrayz00_1990;

																	int BgL_offsetz00_1991;

																	BgL_arrayz00_1990 = BgL_arg2643z00_1988;
																	BgL_offsetz00_1991 =
																		(int) (BgL_objzd2classzd2numz00_1987);
																	{	/* Ast/occur.scm 162 */
																		long BgL_offsetz00_1992;

																		BgL_offsetz00_1992 =
																			(
																			(long) (BgL_offsetz00_1991) -
																			OBJECT_TYPE);
																		{	/* Ast/occur.scm 162 */
																			long BgL_modz00_1993;

																			{	/* Ast/occur.scm 162 */
																				int BgL_arg2645z00_1994;

																				BgL_arg2645z00_1994 =
																					(int) (((long) 16));
																				{	/* Ast/occur.scm 162 */
																					long BgL_auxz00_2952;

																					BgL_auxz00_2952 =
																						(long) (BgL_arg2645z00_1994);
																					BgL_modz00_1993 =
																						(BgL_offsetz00_1992 /
																						BgL_auxz00_2952);
																			}}
																			{	/* Ast/occur.scm 162 */
																				long BgL_restz00_1995;

																				{	/* Ast/occur.scm 162 */
																					int BgL_arg2644z00_1996;

																					BgL_arg2644z00_1996 =
																						(int) (((long) 16));
																					{	/* Ast/occur.scm 162 */
																						long BgL_auxz00_2956;

																						BgL_auxz00_2956 =
																							(long) (BgL_arg2644z00_1996);
																						BgL_restz00_1995 =
																							(BgL_offsetz00_1992 %
																							BgL_auxz00_2956);
																				}}
																				{	/* Ast/occur.scm 162 */

																					BgL_method3308z00_1985 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_1990,
																							(int) (BgL_modz00_1993)),
																						(int) (BgL_restz00_1995));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method3308z00_1985)
														(BgL_method3308z00_1985, (obj_t) (BgL_nodez00_1984),
														BEOA);
									}}}}
									{
										obj_t BgL_l3285z00_2966;

										BgL_l3285z00_2966 = CDR(BgL_l3285z00_1312);
										BgL_l3285z00_1312 = BgL_l3285z00_2966;
										goto BgL_zc3anonymousza33459ze3z83_1313;
									}
								}
							else
								{	/* Ast/occur.scm 161 */
									BgL_auxz00_2914 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_2914);
				}
			}
		}
	}



/* occur-node!-fail3331 */
	obj_t BGl_occurzd2nodez12zd2fail3331z12zzast_occurz00(obj_t BgL_envz00_2401,
		obj_t BgL_nodez00_2402)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 149 */
			{
				BgL_failz00_bglt BgL_nodez00_1296;

				BgL_nodez00_1296 = (BgL_failz00_bglt) (BgL_nodez00_2402);
				{	/* Ast/occur.scm 151 */
					BgL_nodez00_bglt BgL_arg3454z00_1300;

					BgL_arg3454z00_1300 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1296))->BgL_procz00);
					{	/* Ast/occur.scm 151 */
						obj_t BgL_method3308z00_1874;

						{	/* Ast/occur.scm 151 */
							BgL_objectz00_bglt BgL_objz00_1875;

							BgL_objz00_1875 = (BgL_objectz00_bglt) (BgL_arg3454z00_1300);
							{	/* Ast/occur.scm 151 */
								long BgL_objzd2classzd2numz00_1876;

								BgL_objzd2classzd2numz00_1876 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1875);
								{	/* Ast/occur.scm 151 */
									obj_t BgL_arg2643z00_1877;

									BgL_arg2643z00_1877 =
										PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
										(int) (((long) 1)));
									{	/* Ast/occur.scm 151 */
										obj_t BgL_arrayz00_1879;

										int BgL_offsetz00_1880;

										BgL_arrayz00_1879 = BgL_arg2643z00_1877;
										BgL_offsetz00_1880 = (int) (BgL_objzd2classzd2numz00_1876);
										{	/* Ast/occur.scm 151 */
											long BgL_offsetz00_1881;

											BgL_offsetz00_1881 =
												((long) (BgL_offsetz00_1880) - OBJECT_TYPE);
											{	/* Ast/occur.scm 151 */
												long BgL_modz00_1882;

												{	/* Ast/occur.scm 151 */
													int BgL_arg2645z00_1883;

													BgL_arg2645z00_1883 = (int) (((long) 16));
													{	/* Ast/occur.scm 151 */
														long BgL_auxz00_2979;

														BgL_auxz00_2979 = (long) (BgL_arg2645z00_1883);
														BgL_modz00_1882 =
															(BgL_offsetz00_1881 / BgL_auxz00_2979);
												}}
												{	/* Ast/occur.scm 151 */
													long BgL_restz00_1884;

													{	/* Ast/occur.scm 151 */
														int BgL_arg2644z00_1885;

														BgL_arg2644z00_1885 = (int) (((long) 16));
														{	/* Ast/occur.scm 151 */
															long BgL_auxz00_2983;

															BgL_auxz00_2983 = (long) (BgL_arg2644z00_1885);
															BgL_restz00_1884 =
																(BgL_offsetz00_1881 % BgL_auxz00_2983);
													}}
													{	/* Ast/occur.scm 151 */

														BgL_method3308z00_1874 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1879,
																(int) (BgL_modz00_1882)),
															(int) (BgL_restz00_1884));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3308z00_1874) (BgL_method3308z00_1874,
							(obj_t) (BgL_arg3454z00_1300), BEOA);
				}}
				{	/* Ast/occur.scm 152 */
					BgL_nodez00_bglt BgL_arg3455z00_1301;

					BgL_arg3455z00_1301 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1296))->BgL_msgz00);
					{	/* Ast/occur.scm 152 */
						obj_t BgL_method3308z00_1901;

						{	/* Ast/occur.scm 152 */
							BgL_objectz00_bglt BgL_objz00_1902;

							BgL_objz00_1902 = (BgL_objectz00_bglt) (BgL_arg3455z00_1301);
							{	/* Ast/occur.scm 152 */
								long BgL_objzd2classzd2numz00_1903;

								BgL_objzd2classzd2numz00_1903 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1902);
								{	/* Ast/occur.scm 152 */
									obj_t BgL_arg2643z00_1904;

									BgL_arg2643z00_1904 =
										PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
										(int) (((long) 1)));
									{	/* Ast/occur.scm 152 */
										obj_t BgL_arrayz00_1906;

										int BgL_offsetz00_1907;

										BgL_arrayz00_1906 = BgL_arg2643z00_1904;
										BgL_offsetz00_1907 = (int) (BgL_objzd2classzd2numz00_1903);
										{	/* Ast/occur.scm 152 */
											long BgL_offsetz00_1908;

											BgL_offsetz00_1908 =
												((long) (BgL_offsetz00_1907) - OBJECT_TYPE);
											{	/* Ast/occur.scm 152 */
												long BgL_modz00_1909;

												{	/* Ast/occur.scm 152 */
													int BgL_arg2645z00_1910;

													BgL_arg2645z00_1910 = (int) (((long) 16));
													{	/* Ast/occur.scm 152 */
														long BgL_auxz00_3002;

														BgL_auxz00_3002 = (long) (BgL_arg2645z00_1910);
														BgL_modz00_1909 =
															(BgL_offsetz00_1908 / BgL_auxz00_3002);
												}}
												{	/* Ast/occur.scm 152 */
													long BgL_restz00_1911;

													{	/* Ast/occur.scm 152 */
														int BgL_arg2644z00_1912;

														BgL_arg2644z00_1912 = (int) (((long) 16));
														{	/* Ast/occur.scm 152 */
															long BgL_auxz00_3006;

															BgL_auxz00_3006 = (long) (BgL_arg2644z00_1912);
															BgL_restz00_1911 =
																(BgL_offsetz00_1908 % BgL_auxz00_3006);
													}}
													{	/* Ast/occur.scm 152 */

														BgL_method3308z00_1901 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1906,
																(int) (BgL_modz00_1909)),
															(int) (BgL_restz00_1911));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3308z00_1901) (BgL_method3308z00_1901,
							(obj_t) (BgL_arg3455z00_1301), BEOA);
				}}
				{	/* Ast/occur.scm 153 */
					BgL_nodez00_bglt BgL_arg3456z00_1302;

					BgL_arg3456z00_1302 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1296))->BgL_objz00);
					{	/* Ast/occur.scm 153 */
						obj_t BgL_method3308z00_1928;

						{	/* Ast/occur.scm 153 */
							BgL_objectz00_bglt BgL_objz00_1929;

							BgL_objz00_1929 = (BgL_objectz00_bglt) (BgL_arg3456z00_1302);
							{	/* Ast/occur.scm 153 */
								long BgL_objzd2classzd2numz00_1930;

								BgL_objzd2classzd2numz00_1930 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1929);
								{	/* Ast/occur.scm 153 */
									obj_t BgL_arg2643z00_1931;

									BgL_arg2643z00_1931 =
										PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
										(int) (((long) 1)));
									{	/* Ast/occur.scm 153 */
										obj_t BgL_arrayz00_1933;

										int BgL_offsetz00_1934;

										BgL_arrayz00_1933 = BgL_arg2643z00_1931;
										BgL_offsetz00_1934 = (int) (BgL_objzd2classzd2numz00_1930);
										{	/* Ast/occur.scm 153 */
											long BgL_offsetz00_1935;

											BgL_offsetz00_1935 =
												((long) (BgL_offsetz00_1934) - OBJECT_TYPE);
											{	/* Ast/occur.scm 153 */
												long BgL_modz00_1936;

												{	/* Ast/occur.scm 153 */
													int BgL_arg2645z00_1937;

													BgL_arg2645z00_1937 = (int) (((long) 16));
													{	/* Ast/occur.scm 153 */
														long BgL_auxz00_3025;

														BgL_auxz00_3025 = (long) (BgL_arg2645z00_1937);
														BgL_modz00_1936 =
															(BgL_offsetz00_1935 / BgL_auxz00_3025);
												}}
												{	/* Ast/occur.scm 153 */
													long BgL_restz00_1938;

													{	/* Ast/occur.scm 153 */
														int BgL_arg2644z00_1939;

														BgL_arg2644z00_1939 = (int) (((long) 16));
														{	/* Ast/occur.scm 153 */
															long BgL_auxz00_3029;

															BgL_auxz00_3029 = (long) (BgL_arg2644z00_1939);
															BgL_restz00_1938 =
																(BgL_offsetz00_1935 % BgL_auxz00_3029);
													}}
													{	/* Ast/occur.scm 153 */

														BgL_method3308z00_1928 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1933,
																(int) (BgL_modz00_1936)),
															(int) (BgL_restz00_1938));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3308z00_1928) (BgL_method3308z00_1928,
							(obj_t) (BgL_arg3456z00_1302), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-conditio3328 */
	obj_t BGl_occurzd2nodez12zd2conditio3328z12zzast_occurz00(obj_t
		BgL_envz00_2403, obj_t BgL_nodez00_2404)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 140 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1287;

				BgL_nodez00_1287 = (BgL_conditionalz00_bglt) (BgL_nodez00_2404);
				{	/* Ast/occur.scm 142 */
					BgL_nodez00_bglt BgL_arg3450z00_1291;

					BgL_arg3450z00_1291 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1287))->BgL_testz00);
					{	/* Ast/occur.scm 142 */
						obj_t BgL_method3308z00_1793;

						{	/* Ast/occur.scm 142 */
							BgL_objectz00_bglt BgL_objz00_1794;

							BgL_objz00_1794 = (BgL_objectz00_bglt) (BgL_arg3450z00_1291);
							{	/* Ast/occur.scm 142 */
								long BgL_objzd2classzd2numz00_1795;

								BgL_objzd2classzd2numz00_1795 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1794);
								{	/* Ast/occur.scm 142 */
									obj_t BgL_arg2643z00_1796;

									BgL_arg2643z00_1796 =
										PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
										(int) (((long) 1)));
									{	/* Ast/occur.scm 142 */
										obj_t BgL_arrayz00_1798;

										int BgL_offsetz00_1799;

										BgL_arrayz00_1798 = BgL_arg2643z00_1796;
										BgL_offsetz00_1799 = (int) (BgL_objzd2classzd2numz00_1795);
										{	/* Ast/occur.scm 142 */
											long BgL_offsetz00_1800;

											BgL_offsetz00_1800 =
												((long) (BgL_offsetz00_1799) - OBJECT_TYPE);
											{	/* Ast/occur.scm 142 */
												long BgL_modz00_1801;

												{	/* Ast/occur.scm 142 */
													int BgL_arg2645z00_1802;

													BgL_arg2645z00_1802 = (int) (((long) 16));
													{	/* Ast/occur.scm 142 */
														long BgL_auxz00_3049;

														BgL_auxz00_3049 = (long) (BgL_arg2645z00_1802);
														BgL_modz00_1801 =
															(BgL_offsetz00_1800 / BgL_auxz00_3049);
												}}
												{	/* Ast/occur.scm 142 */
													long BgL_restz00_1803;

													{	/* Ast/occur.scm 142 */
														int BgL_arg2644z00_1804;

														BgL_arg2644z00_1804 = (int) (((long) 16));
														{	/* Ast/occur.scm 142 */
															long BgL_auxz00_3053;

															BgL_auxz00_3053 = (long) (BgL_arg2644z00_1804);
															BgL_restz00_1803 =
																(BgL_offsetz00_1800 % BgL_auxz00_3053);
													}}
													{	/* Ast/occur.scm 142 */

														BgL_method3308z00_1793 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1798,
																(int) (BgL_modz00_1801)),
															(int) (BgL_restz00_1803));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3308z00_1793) (BgL_method3308z00_1793,
							(obj_t) (BgL_arg3450z00_1291), BEOA);
				}}
				{	/* Ast/occur.scm 143 */
					BgL_nodez00_bglt BgL_arg3451z00_1292;

					BgL_arg3451z00_1292 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1287))->BgL_truez00);
					{	/* Ast/occur.scm 143 */
						obj_t BgL_method3308z00_1820;

						{	/* Ast/occur.scm 143 */
							BgL_objectz00_bglt BgL_objz00_1821;

							BgL_objz00_1821 = (BgL_objectz00_bglt) (BgL_arg3451z00_1292);
							{	/* Ast/occur.scm 143 */
								long BgL_objzd2classzd2numz00_1822;

								BgL_objzd2classzd2numz00_1822 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1821);
								{	/* Ast/occur.scm 143 */
									obj_t BgL_arg2643z00_1823;

									BgL_arg2643z00_1823 =
										PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
										(int) (((long) 1)));
									{	/* Ast/occur.scm 143 */
										obj_t BgL_arrayz00_1825;

										int BgL_offsetz00_1826;

										BgL_arrayz00_1825 = BgL_arg2643z00_1823;
										BgL_offsetz00_1826 = (int) (BgL_objzd2classzd2numz00_1822);
										{	/* Ast/occur.scm 143 */
											long BgL_offsetz00_1827;

											BgL_offsetz00_1827 =
												((long) (BgL_offsetz00_1826) - OBJECT_TYPE);
											{	/* Ast/occur.scm 143 */
												long BgL_modz00_1828;

												{	/* Ast/occur.scm 143 */
													int BgL_arg2645z00_1829;

													BgL_arg2645z00_1829 = (int) (((long) 16));
													{	/* Ast/occur.scm 143 */
														long BgL_auxz00_3072;

														BgL_auxz00_3072 = (long) (BgL_arg2645z00_1829);
														BgL_modz00_1828 =
															(BgL_offsetz00_1827 / BgL_auxz00_3072);
												}}
												{	/* Ast/occur.scm 143 */
													long BgL_restz00_1830;

													{	/* Ast/occur.scm 143 */
														int BgL_arg2644z00_1831;

														BgL_arg2644z00_1831 = (int) (((long) 16));
														{	/* Ast/occur.scm 143 */
															long BgL_auxz00_3076;

															BgL_auxz00_3076 = (long) (BgL_arg2644z00_1831);
															BgL_restz00_1830 =
																(BgL_offsetz00_1827 % BgL_auxz00_3076);
													}}
													{	/* Ast/occur.scm 143 */

														BgL_method3308z00_1820 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1825,
																(int) (BgL_modz00_1828)),
															(int) (BgL_restz00_1830));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3308z00_1820) (BgL_method3308z00_1820,
							(obj_t) (BgL_arg3451z00_1292), BEOA);
				}}
				{	/* Ast/occur.scm 144 */
					BgL_nodez00_bglt BgL_arg3452z00_1293;

					BgL_arg3452z00_1293 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1287))->BgL_falsez00);
					{	/* Ast/occur.scm 144 */
						obj_t BgL_method3308z00_1847;

						{	/* Ast/occur.scm 144 */
							BgL_objectz00_bglt BgL_objz00_1848;

							BgL_objz00_1848 = (BgL_objectz00_bglt) (BgL_arg3452z00_1293);
							{	/* Ast/occur.scm 144 */
								long BgL_objzd2classzd2numz00_1849;

								BgL_objzd2classzd2numz00_1849 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1848);
								{	/* Ast/occur.scm 144 */
									obj_t BgL_arg2643z00_1850;

									BgL_arg2643z00_1850 =
										PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
										(int) (((long) 1)));
									{	/* Ast/occur.scm 144 */
										obj_t BgL_arrayz00_1852;

										int BgL_offsetz00_1853;

										BgL_arrayz00_1852 = BgL_arg2643z00_1850;
										BgL_offsetz00_1853 = (int) (BgL_objzd2classzd2numz00_1849);
										{	/* Ast/occur.scm 144 */
											long BgL_offsetz00_1854;

											BgL_offsetz00_1854 =
												((long) (BgL_offsetz00_1853) - OBJECT_TYPE);
											{	/* Ast/occur.scm 144 */
												long BgL_modz00_1855;

												{	/* Ast/occur.scm 144 */
													int BgL_arg2645z00_1856;

													BgL_arg2645z00_1856 = (int) (((long) 16));
													{	/* Ast/occur.scm 144 */
														long BgL_auxz00_3095;

														BgL_auxz00_3095 = (long) (BgL_arg2645z00_1856);
														BgL_modz00_1855 =
															(BgL_offsetz00_1854 / BgL_auxz00_3095);
												}}
												{	/* Ast/occur.scm 144 */
													long BgL_restz00_1857;

													{	/* Ast/occur.scm 144 */
														int BgL_arg2644z00_1858;

														BgL_arg2644z00_1858 = (int) (((long) 16));
														{	/* Ast/occur.scm 144 */
															long BgL_auxz00_3099;

															BgL_auxz00_3099 = (long) (BgL_arg2644z00_1858);
															BgL_restz00_1857 =
																(BgL_offsetz00_1854 % BgL_auxz00_3099);
													}}
													{	/* Ast/occur.scm 144 */

														BgL_method3308z00_1847 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1852,
																(int) (BgL_modz00_1855)),
															(int) (BgL_restz00_1857));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3308z00_1847) (BgL_method3308z00_1847,
							(obj_t) (BgL_arg3452z00_1293), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-setq3326 */
	obj_t BGl_occurzd2nodez12zd2setq3326z12zzast_occurz00(obj_t BgL_envz00_2405,
		obj_t BgL_nodez00_2406)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 130 */
			{
				BgL_setqz00_bglt BgL_nodez00_1274;

				BgL_nodez00_1274 = (BgL_setqz00_bglt) (BgL_nodez00_2406);
				{	/* Ast/occur.scm 132 */
					BgL_variablez00_bglt BgL_instance3256z00_1278;

					{	/* Ast/occur.scm 132 */
						BgL_varz00_bglt BgL_obj2155z00_1733;

						BgL_obj2155z00_1733 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_1274))->BgL_varz00);
						BgL_instance3256z00_1278 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1733))->BgL_variablez00);
					}
					if (
						((((BgL_variablez00_bglt) CREF(BgL_instance3256z00_1278))->
								BgL_accessz00) == CNST_TABLE_REF(((long) 2))))
						{	/* Ast/occur.scm 133 */
							BgL_variablez00_bglt BgL_obj1616z00_1735;

							obj_t BgL_val1615z00_1736;

							BgL_obj1616z00_1735 = BgL_instance3256z00_1278;
							BgL_val1615z00_1736 = CNST_TABLE_REF(((long) 1));
							((((BgL_variablez00_bglt) CREF(BgL_obj1616z00_1735))->
									BgL_accessz00) = ((obj_t) BgL_val1615z00_1736), BUNSPEC);
						}
					else
						{	/* Ast/occur.scm 133 */
							BFALSE;
						}
				}
				{	/* Ast/occur.scm 134 */
					BgL_varz00_bglt BgL_arg3447z00_1283;

					BgL_arg3447z00_1283 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1274))->BgL_varz00);
					{	/* Ast/occur.scm 134 */
						BgL_nodez00_bglt BgL_nodez00_1738;

						BgL_nodez00_1738 = (BgL_nodez00_bglt) (BgL_arg3447z00_1283);
						{	/* Ast/occur.scm 134 */
							obj_t BgL_method3308z00_1739;

							{	/* Ast/occur.scm 134 */
								BgL_objectz00_bglt BgL_objz00_1740;

								BgL_objz00_1740 = (BgL_objectz00_bglt) (BgL_nodez00_1738);
								{	/* Ast/occur.scm 134 */
									long BgL_objzd2classzd2numz00_1741;

									BgL_objzd2classzd2numz00_1741 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1740);
									{	/* Ast/occur.scm 134 */
										obj_t BgL_arg2643z00_1742;

										BgL_arg2643z00_1742 =
											PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
											(int) (((long) 1)));
										{	/* Ast/occur.scm 134 */
											obj_t BgL_arrayz00_1744;

											int BgL_offsetz00_1745;

											BgL_arrayz00_1744 = BgL_arg2643z00_1742;
											BgL_offsetz00_1745 =
												(int) (BgL_objzd2classzd2numz00_1741);
											{	/* Ast/occur.scm 134 */
												long BgL_offsetz00_1746;

												BgL_offsetz00_1746 =
													((long) (BgL_offsetz00_1745) - OBJECT_TYPE);
												{	/* Ast/occur.scm 134 */
													long BgL_modz00_1747;

													{	/* Ast/occur.scm 134 */
														int BgL_arg2645z00_1748;

														BgL_arg2645z00_1748 = (int) (((long) 16));
														{	/* Ast/occur.scm 134 */
															long BgL_auxz00_3128;

															BgL_auxz00_3128 = (long) (BgL_arg2645z00_1748);
															BgL_modz00_1747 =
																(BgL_offsetz00_1746 / BgL_auxz00_3128);
													}}
													{	/* Ast/occur.scm 134 */
														long BgL_restz00_1749;

														{	/* Ast/occur.scm 134 */
															int BgL_arg2644z00_1750;

															BgL_arg2644z00_1750 = (int) (((long) 16));
															{	/* Ast/occur.scm 134 */
																long BgL_auxz00_3132;

																BgL_auxz00_3132 = (long) (BgL_arg2644z00_1750);
																BgL_restz00_1749 =
																	(BgL_offsetz00_1746 % BgL_auxz00_3132);
														}}
														{	/* Ast/occur.scm 134 */

															BgL_method3308z00_1739 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1744,
																	(int) (BgL_modz00_1747)),
																(int) (BgL_restz00_1749));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3308z00_1739) (BgL_method3308z00_1739,
								(obj_t) (BgL_nodez00_1738), BEOA);
				}}}
				{	/* Ast/occur.scm 135 */
					BgL_nodez00_bglt BgL_arg3448z00_1284;

					BgL_arg3448z00_1284 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1274))->BgL_valuez00);
					{	/* Ast/occur.scm 135 */
						obj_t BgL_method3308z00_1766;

						{	/* Ast/occur.scm 135 */
							BgL_objectz00_bglt BgL_objz00_1767;

							BgL_objz00_1767 = (BgL_objectz00_bglt) (BgL_arg3448z00_1284);
							{	/* Ast/occur.scm 135 */
								long BgL_objzd2classzd2numz00_1768;

								BgL_objzd2classzd2numz00_1768 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1767);
								{	/* Ast/occur.scm 135 */
									obj_t BgL_arg2643z00_1769;

									BgL_arg2643z00_1769 =
										PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
										(int) (((long) 1)));
									{	/* Ast/occur.scm 135 */
										obj_t BgL_arrayz00_1771;

										int BgL_offsetz00_1772;

										BgL_arrayz00_1771 = BgL_arg2643z00_1769;
										BgL_offsetz00_1772 = (int) (BgL_objzd2classzd2numz00_1768);
										{	/* Ast/occur.scm 135 */
											long BgL_offsetz00_1773;

											BgL_offsetz00_1773 =
												((long) (BgL_offsetz00_1772) - OBJECT_TYPE);
											{	/* Ast/occur.scm 135 */
												long BgL_modz00_1774;

												{	/* Ast/occur.scm 135 */
													int BgL_arg2645z00_1775;

													BgL_arg2645z00_1775 = (int) (((long) 16));
													{	/* Ast/occur.scm 135 */
														long BgL_auxz00_3151;

														BgL_auxz00_3151 = (long) (BgL_arg2645z00_1775);
														BgL_modz00_1774 =
															(BgL_offsetz00_1773 / BgL_auxz00_3151);
												}}
												{	/* Ast/occur.scm 135 */
													long BgL_restz00_1776;

													{	/* Ast/occur.scm 135 */
														int BgL_arg2644z00_1777;

														BgL_arg2644z00_1777 = (int) (((long) 16));
														{	/* Ast/occur.scm 135 */
															long BgL_auxz00_3155;

															BgL_auxz00_3155 = (long) (BgL_arg2644z00_1777);
															BgL_restz00_1776 =
																(BgL_offsetz00_1773 % BgL_auxz00_3155);
													}}
													{	/* Ast/occur.scm 135 */

														BgL_method3308z00_1766 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1771,
																(int) (BgL_modz00_1774)),
															(int) (BgL_restz00_1776));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3308z00_1766) (BgL_method3308z00_1766,
							(obj_t) (BgL_arg3448z00_1284), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-cast3324 */
	obj_t BGl_occurzd2nodez12zd2cast3324z12zzast_occurz00(obj_t BgL_envz00_2407,
		obj_t BgL_nodez00_2408)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 124 */
			{
				BgL_castz00_bglt BgL_nodez00_1268;

				BgL_nodez00_1268 = (BgL_castz00_bglt) (BgL_nodez00_2408);
				{	/* Ast/occur.scm 125 */
					BgL_nodez00_bglt BgL_arg3441z00_1704;

					BgL_arg3441z00_1704 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_1268))->BgL_argz00);
					{	/* Ast/occur.scm 125 */
						obj_t BgL_method3308z00_1707;

						{	/* Ast/occur.scm 125 */
							BgL_objectz00_bglt BgL_objz00_1708;

							BgL_objz00_1708 = (BgL_objectz00_bglt) (BgL_arg3441z00_1704);
							{	/* Ast/occur.scm 125 */
								long BgL_objzd2classzd2numz00_1709;

								BgL_objzd2classzd2numz00_1709 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1708);
								{	/* Ast/occur.scm 125 */
									obj_t BgL_arg2643z00_1710;

									BgL_arg2643z00_1710 =
										PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
										(int) (((long) 1)));
									{	/* Ast/occur.scm 125 */
										obj_t BgL_arrayz00_1712;

										int BgL_offsetz00_1713;

										BgL_arrayz00_1712 = BgL_arg2643z00_1710;
										BgL_offsetz00_1713 = (int) (BgL_objzd2classzd2numz00_1709);
										{	/* Ast/occur.scm 125 */
											long BgL_offsetz00_1714;

											BgL_offsetz00_1714 =
												((long) (BgL_offsetz00_1713) - OBJECT_TYPE);
											{	/* Ast/occur.scm 125 */
												long BgL_modz00_1715;

												{	/* Ast/occur.scm 125 */
													int BgL_arg2645z00_1716;

													BgL_arg2645z00_1716 = (int) (((long) 16));
													{	/* Ast/occur.scm 125 */
														long BgL_auxz00_3175;

														BgL_auxz00_3175 = (long) (BgL_arg2645z00_1716);
														BgL_modz00_1715 =
															(BgL_offsetz00_1714 / BgL_auxz00_3175);
												}}
												{	/* Ast/occur.scm 125 */
													long BgL_restz00_1717;

													{	/* Ast/occur.scm 125 */
														int BgL_arg2644z00_1718;

														BgL_arg2644z00_1718 = (int) (((long) 16));
														{	/* Ast/occur.scm 125 */
															long BgL_auxz00_3179;

															BgL_auxz00_3179 = (long) (BgL_arg2644z00_1718);
															BgL_restz00_1717 =
																(BgL_offsetz00_1714 % BgL_auxz00_3179);
													}}
													{	/* Ast/occur.scm 125 */

														BgL_method3308z00_1707 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1712,
																(int) (BgL_modz00_1715)),
															(int) (BgL_restz00_1717));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3308z00_1707) (BgL_method3308z00_1707,
							(obj_t) (BgL_arg3441z00_1704), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-pragma3322 */
	obj_t BGl_occurzd2nodez12zd2pragma3322z12zzast_occurz00(obj_t BgL_envz00_2409,
		obj_t BgL_nodez00_2410)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 110 */
			{
				BgL_pragmaz00_bglt BgL_nodez00_1246;

				BgL_nodez00_1246 = (BgL_pragmaz00_bglt) (BgL_nodez00_2410);
				{

					{	/* Ast/occur.scm 112 */
						bool_t BgL_testz00_3190;

						{	/* Ast/occur.scm 112 */
							BgL_nodezf2effectzf2_bglt BgL_obj2109z00_1665;

							BgL_obj2109z00_1665 =
								(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1246);
							BgL_testz00_3190 =
								CBOOL(
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_obj2109z00_1665))->
									BgL_sidezd2effectzf3z21));
						}
						if (BgL_testz00_3190)
							{	/* Ast/occur.scm 113 */
								obj_t BgL_g3284z00_1251;

								{
									BgL_externz00_bglt BgL_auxz00_3194;

									BgL_auxz00_3194 = (BgL_externz00_bglt) (BgL_nodez00_1246);
									BgL_g3284z00_1251 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_3194))->
										BgL_exprza2za2);
								}
								{
									obj_t BgL_l3282z00_1253;

									BgL_l3282z00_1253 = BgL_g3284z00_1251;
								BgL_zc3anonymousza33431ze3z83_1254:
									if (PAIRP(BgL_l3282z00_1253))
										{	/* Ast/occur.scm 118 */
											{	/* Ast/occur.scm 114 */
												obj_t BgL_nz00_1256;

												BgL_nz00_1256 = CAR(BgL_l3282z00_1253);
												{	/* Ast/occur.scm 114 */
													bool_t BgL_testz00_3200;

													if (BGl_iszd2azf3z21zz__objectz00(BgL_nz00_1256,
															BGl_varz00zzast_nodez00))
														{	/* Ast/occur.scm 114 */
															BgL_variablez00_bglt BgL_arg3438z00_1263;

															{
																BgL_varz00_bglt BgL_auxz00_3203;

																BgL_auxz00_3203 =
																	(BgL_varz00_bglt) (BgL_nz00_1256);
																BgL_arg3438z00_1263 =
																	(((BgL_varz00_bglt) CREF(BgL_auxz00_3203))->
																	BgL_variablez00);
															}
															{	/* Ast/occur.scm 114 */
																obj_t BgL_obj1812z00_1671;

																BgL_obj1812z00_1671 =
																	(obj_t) (BgL_arg3438z00_1263);
																BgL_testz00_3200 =
																	BGl_iszd2azf3z21zz__objectz00
																	(BgL_obj1812z00_1671,
																	BGl_localz00zzast_varz00);
															}
														}
													else
														{	/* Ast/occur.scm 114 */
															BgL_testz00_3200 = ((bool_t) 0);
														}
													if (BgL_testz00_3200)
														{	/* Ast/occur.scm 115 */
															BgL_variablez00_bglt BgL_instance3252z00_1258;

															{
																BgL_varz00_bglt BgL_auxz00_3208;

																BgL_auxz00_3208 =
																	(BgL_varz00_bglt) (BgL_nz00_1256);
																BgL_instance3252z00_1258 =
																	(((BgL_varz00_bglt) CREF(BgL_auxz00_3208))->
																	BgL_variablez00);
															}
															if (
																((((BgL_variablez00_bglt)
																			CREF(BgL_instance3252z00_1258))->
																		BgL_accessz00) ==
																	CNST_TABLE_REF(((long) 2))))
																{	/* Ast/occur.scm 117 */
																	BgL_variablez00_bglt BgL_obj1616z00_1674;

																	obj_t BgL_val1615z00_1675;

																	BgL_obj1616z00_1674 =
																		BgL_instance3252z00_1258;
																	BgL_val1615z00_1675 =
																		CNST_TABLE_REF(((long) 1));
																	((((BgL_variablez00_bglt)
																				CREF(BgL_obj1616z00_1674))->
																			BgL_accessz00) =
																		((obj_t) BgL_val1615z00_1675), BUNSPEC);
																}
															else
																{	/* Ast/occur.scm 116 */
																	BFALSE;
																}
														}
													else
														{	/* Ast/occur.scm 114 */
															BFALSE;
														}
												}
											}
											{
												obj_t BgL_l3282z00_3217;

												BgL_l3282z00_3217 = CDR(BgL_l3282z00_1253);
												BgL_l3282z00_1253 = BgL_l3282z00_3217;
												goto BgL_zc3anonymousza33431ze3z83_1254;
											}
										}
									else
										{	/* Ast/occur.scm 118 */
											((bool_t) 1);
										}
								}
							}
						else
							{	/* Ast/occur.scm 112 */
								((bool_t) 0);
							}
					}
					{	/* Ast/occur.scm 110 */
						obj_t BgL_nextzd2method3321zd2_1266;

						BgL_nextzd2method3321zd2_1266 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_nodez00_1246),
							BGl_occurzd2nodez12zd2envz12zzast_occurz00,
							BGl_pragmaz00zzast_nodez00);
						if (PROCEDUREP(BgL_nextzd2method3321zd2_1266))
							{	/* Ast/occur.scm 110 */
								return
									PROCEDURE_ENTRY(BgL_nextzd2method3321zd2_1266)
									(BgL_nextzd2method3321zd2_1266, (obj_t) (BgL_nodez00_1246),
									BEOA);
							}
						else
							{	/* Ast/occur.scm 110 */
								{	/* Ast/occur.scm 110 */
									BgL_nodez00_bglt BgL_nodez00_1678;

									BgL_nodez00_1678 = (BgL_nodez00_bglt) (BgL_nodez00_1246);
									{	/* Ast/occur.scm 110 */
										obj_t BgL_method3308z00_1679;

										{	/* Ast/occur.scm 110 */
											BgL_objectz00_bglt BgL_objz00_1680;

											BgL_objz00_1680 = (BgL_objectz00_bglt) (BgL_nodez00_1678);
											{	/* Ast/occur.scm 110 */
												long BgL_objzd2classzd2numz00_1681;

												BgL_objzd2classzd2numz00_1681 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1680);
												{	/* Ast/occur.scm 110 */
													obj_t BgL_arg2643z00_1682;

													BgL_arg2643z00_1682 =
														PROCEDURE_REF
														(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
														(int) (((long) 1)));
													{	/* Ast/occur.scm 110 */
														obj_t BgL_arrayz00_1684;

														int BgL_offsetz00_1685;

														BgL_arrayz00_1684 = BgL_arg2643z00_1682;
														BgL_offsetz00_1685 =
															(int) (BgL_objzd2classzd2numz00_1681);
														{	/* Ast/occur.scm 110 */
															long BgL_offsetz00_1686;

															BgL_offsetz00_1686 =
																((long) (BgL_offsetz00_1685) - OBJECT_TYPE);
															{	/* Ast/occur.scm 110 */
																long BgL_modz00_1687;

																{	/* Ast/occur.scm 110 */
																	int BgL_arg2645z00_1688;

																	BgL_arg2645z00_1688 = (int) (((long) 16));
																	{	/* Ast/occur.scm 110 */
																		long BgL_auxz00_3235;

																		BgL_auxz00_3235 =
																			(long) (BgL_arg2645z00_1688);
																		BgL_modz00_1687 =
																			(BgL_offsetz00_1686 / BgL_auxz00_3235);
																}}
																{	/* Ast/occur.scm 110 */
																	long BgL_restz00_1689;

																	{	/* Ast/occur.scm 110 */
																		int BgL_arg2644z00_1690;

																		BgL_arg2644z00_1690 = (int) (((long) 16));
																		{	/* Ast/occur.scm 110 */
																			long BgL_auxz00_3239;

																			BgL_auxz00_3239 =
																				(long) (BgL_arg2644z00_1690);
																			BgL_restz00_1689 =
																				(BgL_offsetz00_1686 % BgL_auxz00_3239);
																	}}
																	{	/* Ast/occur.scm 110 */

																		BgL_method3308z00_1679 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1684,
																				(int) (BgL_modz00_1687)),
																			(int) (BgL_restz00_1689));
										}}}}}}}}
										return
											PROCEDURE_ENTRY(BgL_method3308z00_1679)
											(BgL_method3308z00_1679, (obj_t) (BgL_nodez00_1678),
											BEOA);
									}
								}
							}
					}
				}
			}
		}
	}



/* occur-node!-extern3320 */
	obj_t BGl_occurzd2nodez12zd2extern3320z12zzast_occurz00(obj_t BgL_envz00_2411,
		obj_t BgL_nodez00_2412)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 102 */
			{
				BgL_externz00_bglt BgL_nodez00_1239;

				{	/* Ast/occur.scm 104 */
					bool_t BgL_auxz00_3250;

					BgL_nodez00_1239 = (BgL_externz00_bglt) (BgL_nodez00_2412);
					{	/* Ast/occur.scm 104 */
						obj_t BgL_nodesz00_1663;

						BgL_nodesz00_1663 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1239))->BgL_exprza2za2);
						BgL_auxz00_3250 =
							BGl_occurzd2nodeza2z12z62zzast_occurz00(BgL_nodesz00_1663);
					}
					return BBOOL(BgL_auxz00_3250);
				}
			}
		}
	}



/* occur-node!-funcall3318 */
	obj_t BGl_occurzd2nodez12zd2funcall3318z12zzast_occurz00(obj_t
		BgL_envz00_2413, obj_t BgL_nodez00_2414)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 94 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1231;

				{	/* Ast/occur.scm 95 */
					bool_t BgL_auxz00_3255;

					BgL_nodez00_1231 = (BgL_funcallz00_bglt) (BgL_nodez00_2414);
					{	/* Ast/occur.scm 96 */
						BgL_nodez00_bglt BgL_arg3426z00_1235;

						BgL_arg3426z00_1235 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1231))->BgL_funz00);
						{	/* Ast/occur.scm 96 */
							obj_t BgL_method3308z00_1637;

							{	/* Ast/occur.scm 96 */
								BgL_objectz00_bglt BgL_objz00_1638;

								BgL_objz00_1638 = (BgL_objectz00_bglt) (BgL_arg3426z00_1235);
								{	/* Ast/occur.scm 96 */
									long BgL_objzd2classzd2numz00_1639;

									BgL_objzd2classzd2numz00_1639 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1638);
									{	/* Ast/occur.scm 96 */
										obj_t BgL_arg2643z00_1640;

										BgL_arg2643z00_1640 =
											PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
											(int) (((long) 1)));
										{	/* Ast/occur.scm 96 */
											obj_t BgL_arrayz00_1642;

											int BgL_offsetz00_1643;

											BgL_arrayz00_1642 = BgL_arg2643z00_1640;
											BgL_offsetz00_1643 =
												(int) (BgL_objzd2classzd2numz00_1639);
											{	/* Ast/occur.scm 96 */
												long BgL_offsetz00_1644;

												BgL_offsetz00_1644 =
													((long) (BgL_offsetz00_1643) - OBJECT_TYPE);
												{	/* Ast/occur.scm 96 */
													long BgL_modz00_1645;

													{	/* Ast/occur.scm 96 */
														int BgL_arg2645z00_1646;

														BgL_arg2645z00_1646 = (int) (((long) 16));
														{	/* Ast/occur.scm 96 */
															long BgL_auxz00_3265;

															BgL_auxz00_3265 = (long) (BgL_arg2645z00_1646);
															BgL_modz00_1645 =
																(BgL_offsetz00_1644 / BgL_auxz00_3265);
													}}
													{	/* Ast/occur.scm 96 */
														long BgL_restz00_1647;

														{	/* Ast/occur.scm 96 */
															int BgL_arg2644z00_1648;

															BgL_arg2644z00_1648 = (int) (((long) 16));
															{	/* Ast/occur.scm 96 */
																long BgL_auxz00_3269;

																BgL_auxz00_3269 = (long) (BgL_arg2644z00_1648);
																BgL_restz00_1647 =
																	(BgL_offsetz00_1644 % BgL_auxz00_3269);
														}}
														{	/* Ast/occur.scm 96 */

															BgL_method3308z00_1637 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1642,
																	(int) (BgL_modz00_1645)),
																(int) (BgL_restz00_1647));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3308z00_1637) (BgL_method3308z00_1637,
								(obj_t) (BgL_arg3426z00_1235), BEOA);
					}}
					{	/* Ast/occur.scm 97 */
						obj_t BgL_arg3427z00_1236;

						BgL_arg3427z00_1236 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1231))->BgL_argsz00);
						BgL_auxz00_3255 =
							BGl_occurzd2nodeza2z12z62zzast_occurz00(BgL_arg3427z00_1236);
					}
					return BBOOL(BgL_auxz00_3255);
				}
			}
		}
	}



/* occur-node!-app-ly3316 */
	obj_t BGl_occurzd2nodez12zd2appzd2ly3316zc0zzast_occurz00(obj_t
		BgL_envz00_2415, obj_t BgL_nodez00_2416)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 86 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1223;

				BgL_nodez00_1223 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2416);
				{	/* Ast/occur.scm 88 */
					BgL_nodez00_bglt BgL_arg3422z00_1227;

					BgL_arg3422z00_1227 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1223))->BgL_funz00);
					{	/* Ast/occur.scm 88 */
						obj_t BgL_method3308z00_1583;

						{	/* Ast/occur.scm 88 */
							BgL_objectz00_bglt BgL_objz00_1584;

							BgL_objz00_1584 = (BgL_objectz00_bglt) (BgL_arg3422z00_1227);
							{	/* Ast/occur.scm 88 */
								long BgL_objzd2classzd2numz00_1585;

								BgL_objzd2classzd2numz00_1585 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1584);
								{	/* Ast/occur.scm 88 */
									obj_t BgL_arg2643z00_1586;

									BgL_arg2643z00_1586 =
										PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
										(int) (((long) 1)));
									{	/* Ast/occur.scm 88 */
										obj_t BgL_arrayz00_1588;

										int BgL_offsetz00_1589;

										BgL_arrayz00_1588 = BgL_arg2643z00_1586;
										BgL_offsetz00_1589 = (int) (BgL_objzd2classzd2numz00_1585);
										{	/* Ast/occur.scm 88 */
											long BgL_offsetz00_1590;

											BgL_offsetz00_1590 =
												((long) (BgL_offsetz00_1589) - OBJECT_TYPE);
											{	/* Ast/occur.scm 88 */
												long BgL_modz00_1591;

												{	/* Ast/occur.scm 88 */
													int BgL_arg2645z00_1592;

													BgL_arg2645z00_1592 = (int) (((long) 16));
													{	/* Ast/occur.scm 88 */
														long BgL_auxz00_3292;

														BgL_auxz00_3292 = (long) (BgL_arg2645z00_1592);
														BgL_modz00_1591 =
															(BgL_offsetz00_1590 / BgL_auxz00_3292);
												}}
												{	/* Ast/occur.scm 88 */
													long BgL_restz00_1593;

													{	/* Ast/occur.scm 88 */
														int BgL_arg2644z00_1594;

														BgL_arg2644z00_1594 = (int) (((long) 16));
														{	/* Ast/occur.scm 88 */
															long BgL_auxz00_3296;

															BgL_auxz00_3296 = (long) (BgL_arg2644z00_1594);
															BgL_restz00_1593 =
																(BgL_offsetz00_1590 % BgL_auxz00_3296);
													}}
													{	/* Ast/occur.scm 88 */

														BgL_method3308z00_1583 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1588,
																(int) (BgL_modz00_1591)),
															(int) (BgL_restz00_1593));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3308z00_1583) (BgL_method3308z00_1583,
							(obj_t) (BgL_arg3422z00_1227), BEOA);
				}}
				{	/* Ast/occur.scm 89 */
					BgL_nodez00_bglt BgL_arg3424z00_1228;

					BgL_arg3424z00_1228 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1223))->BgL_argz00);
					{	/* Ast/occur.scm 89 */
						obj_t BgL_method3308z00_1610;

						{	/* Ast/occur.scm 89 */
							BgL_objectz00_bglt BgL_objz00_1611;

							BgL_objz00_1611 = (BgL_objectz00_bglt) (BgL_arg3424z00_1228);
							{	/* Ast/occur.scm 89 */
								long BgL_objzd2classzd2numz00_1612;

								BgL_objzd2classzd2numz00_1612 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1611);
								{	/* Ast/occur.scm 89 */
									obj_t BgL_arg2643z00_1613;

									BgL_arg2643z00_1613 =
										PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
										(int) (((long) 1)));
									{	/* Ast/occur.scm 89 */
										obj_t BgL_arrayz00_1615;

										int BgL_offsetz00_1616;

										BgL_arrayz00_1615 = BgL_arg2643z00_1613;
										BgL_offsetz00_1616 = (int) (BgL_objzd2classzd2numz00_1612);
										{	/* Ast/occur.scm 89 */
											long BgL_offsetz00_1617;

											BgL_offsetz00_1617 =
												((long) (BgL_offsetz00_1616) - OBJECT_TYPE);
											{	/* Ast/occur.scm 89 */
												long BgL_modz00_1618;

												{	/* Ast/occur.scm 89 */
													int BgL_arg2645z00_1619;

													BgL_arg2645z00_1619 = (int) (((long) 16));
													{	/* Ast/occur.scm 89 */
														long BgL_auxz00_3315;

														BgL_auxz00_3315 = (long) (BgL_arg2645z00_1619);
														BgL_modz00_1618 =
															(BgL_offsetz00_1617 / BgL_auxz00_3315);
												}}
												{	/* Ast/occur.scm 89 */
													long BgL_restz00_1620;

													{	/* Ast/occur.scm 89 */
														int BgL_arg2644z00_1621;

														BgL_arg2644z00_1621 = (int) (((long) 16));
														{	/* Ast/occur.scm 89 */
															long BgL_auxz00_3319;

															BgL_auxz00_3319 = (long) (BgL_arg2644z00_1621);
															BgL_restz00_1620 =
																(BgL_offsetz00_1617 % BgL_auxz00_3319);
													}}
													{	/* Ast/occur.scm 89 */

														BgL_method3308z00_1610 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1615,
																(int) (BgL_modz00_1618)),
															(int) (BgL_restz00_1620));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3308z00_1610) (BgL_method3308z00_1610,
							(obj_t) (BgL_arg3424z00_1228), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-app3314 */
	obj_t BGl_occurzd2nodez12zd2app3314z12zzast_occurz00(obj_t BgL_envz00_2417,
		obj_t BgL_nodez00_2418)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 78 */
			{
				BgL_appz00_bglt BgL_nodez00_1215;

				{	/* Ast/occur.scm 79 */
					bool_t BgL_auxz00_3330;

					BgL_nodez00_1215 = (BgL_appz00_bglt) (BgL_nodez00_2418);
					{	/* Ast/occur.scm 80 */
						BgL_varz00_bglt BgL_arg3419z00_1219;

						BgL_arg3419z00_1219 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1215))->BgL_funz00);
						{	/* Ast/occur.scm 80 */
							BgL_nodez00_bglt BgL_nodez00_1554;

							BgL_nodez00_1554 = (BgL_nodez00_bglt) (BgL_arg3419z00_1219);
							{	/* Ast/occur.scm 80 */
								obj_t BgL_method3308z00_1555;

								{	/* Ast/occur.scm 80 */
									BgL_objectz00_bglt BgL_objz00_1556;

									BgL_objz00_1556 = (BgL_objectz00_bglt) (BgL_nodez00_1554);
									{	/* Ast/occur.scm 80 */
										long BgL_objzd2classzd2numz00_1557;

										BgL_objzd2classzd2numz00_1557 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1556);
										{	/* Ast/occur.scm 80 */
											obj_t BgL_arg2643z00_1558;

											BgL_arg2643z00_1558 =
												PROCEDURE_REF
												(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
												(int) (((long) 1)));
											{	/* Ast/occur.scm 80 */
												obj_t BgL_arrayz00_1560;

												int BgL_offsetz00_1561;

												BgL_arrayz00_1560 = BgL_arg2643z00_1558;
												BgL_offsetz00_1561 =
													(int) (BgL_objzd2classzd2numz00_1557);
												{	/* Ast/occur.scm 80 */
													long BgL_offsetz00_1562;

													BgL_offsetz00_1562 =
														((long) (BgL_offsetz00_1561) - OBJECT_TYPE);
													{	/* Ast/occur.scm 80 */
														long BgL_modz00_1563;

														{	/* Ast/occur.scm 80 */
															int BgL_arg2645z00_1564;

															BgL_arg2645z00_1564 = (int) (((long) 16));
															{	/* Ast/occur.scm 80 */
																long BgL_auxz00_3341;

																BgL_auxz00_3341 = (long) (BgL_arg2645z00_1564);
																BgL_modz00_1563 =
																	(BgL_offsetz00_1562 / BgL_auxz00_3341);
														}}
														{	/* Ast/occur.scm 80 */
															long BgL_restz00_1565;

															{	/* Ast/occur.scm 80 */
																int BgL_arg2644z00_1566;

																BgL_arg2644z00_1566 = (int) (((long) 16));
																{	/* Ast/occur.scm 80 */
																	long BgL_auxz00_3345;

																	BgL_auxz00_3345 =
																		(long) (BgL_arg2644z00_1566);
																	BgL_restz00_1565 =
																		(BgL_offsetz00_1562 % BgL_auxz00_3345);
															}}
															{	/* Ast/occur.scm 80 */

																BgL_method3308z00_1555 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1560,
																		(int) (BgL_modz00_1563)),
																	(int) (BgL_restz00_1565));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method3308z00_1555) (BgL_method3308z00_1555,
									(obj_t) (BgL_nodez00_1554), BEOA);
					}}}
					{	/* Ast/occur.scm 81 */
						obj_t BgL_arg3420z00_1220;

						BgL_arg3420z00_1220 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1215))->BgL_argsz00);
						BgL_auxz00_3330 =
							BGl_occurzd2nodeza2z12z62zzast_occurz00(BgL_arg3420z00_1220);
					}
					return BBOOL(BgL_auxz00_3330);
				}
			}
		}
	}



/* occur-node!-sequence3312 */
	obj_t BGl_occurzd2nodez12zd2sequence3312z12zzast_occurz00(obj_t
		BgL_envz00_2419, obj_t BgL_nodez00_2420)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 72 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1209;

				{	/* Ast/occur.scm 73 */
					bool_t BgL_auxz00_3359;

					BgL_nodez00_1209 = (BgL_sequencez00_bglt) (BgL_nodez00_2420);
					{	/* Ast/occur.scm 73 */
						obj_t BgL_arg3417z00_1551;

						BgL_arg3417z00_1551 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1209))->BgL_nodesz00);
						BgL_auxz00_3359 =
							BGl_occurzd2nodeza2z12z62zzast_occurz00(BgL_arg3417z00_1551);
					}
					return BBOOL(BgL_auxz00_3359);
				}
			}
		}
	}



/* occur-node!-var3310 */
	obj_t BGl_occurzd2nodez12zd2var3310z12zzast_occurz00(obj_t BgL_envz00_2421,
		obj_t BgL_nodez00_2422)
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 61 */
			{
				BgL_varz00_bglt BgL_nodez00_1194;

				BgL_nodez00_1194 = (BgL_varz00_bglt) (BgL_nodez00_2422);
				{	/* Ast/occur.scm 62 */
					BgL_variablez00_bglt BgL_vz00_1197;

					BgL_vz00_1197 =
						(((BgL_varz00_bglt) CREF(BgL_nodez00_1194))->BgL_variablez00);
					{	/* Ast/occur.scm 63 */
						BgL_valuez00_bglt BgL_valuez00_1198;

						BgL_valuez00_1198 =
							(((BgL_variablez00_bglt) CREF(BgL_vz00_1197))->BgL_valuez00);
						{	/* Ast/occur.scm 64 */
							bool_t BgL_testz00_3366;

							{	/* Ast/occur.scm 64 */
								bool_t BgL_testz00_3367;

								{	/* Ast/occur.scm 64 */
									obj_t BgL_obj2049z00_1516;

									BgL_obj2049z00_1516 = (obj_t) (BgL_valuez00_1198);
									BgL_testz00_3367 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj2049z00_1516,
										BGl_scnstz00zzast_varz00);
								}
								if (BgL_testz00_3367)
									{	/* Ast/occur.scm 64 */
										obj_t BgL_arg3411z00_1202;

										{
											BgL_scnstz00_bglt BgL_auxz00_3370;

											BgL_auxz00_3370 = (BgL_scnstz00_bglt) (BgL_valuez00_1198);
											BgL_arg3411z00_1202 =
												(((BgL_scnstz00_bglt) CREF(BgL_auxz00_3370))->
												BgL_nodez00);
										}
										BgL_testz00_3366 =
											BGl_iszd2azf3z21zz__objectz00(BgL_arg3411z00_1202,
											BGl_nodez00zzast_nodez00);
									}
								else
									{	/* Ast/occur.scm 64 */
										BgL_testz00_3366 = ((bool_t) 0);
									}
							}
							if (BgL_testz00_3366)
								{	/* Ast/occur.scm 65 */
									obj_t BgL_arg3409z00_1200;

									{
										BgL_scnstz00_bglt BgL_auxz00_3374;

										BgL_auxz00_3374 = (BgL_scnstz00_bglt) (BgL_valuez00_1198);
										BgL_arg3409z00_1200 =
											(((BgL_scnstz00_bglt) CREF(BgL_auxz00_3374))->
											BgL_nodez00);
									}
									{	/* Ast/occur.scm 65 */
										BgL_nodez00_bglt BgL_nodez00_1520;

										BgL_nodez00_1520 = (BgL_nodez00_bglt) (BgL_arg3409z00_1200);
										{	/* Ast/occur.scm 65 */
											obj_t BgL_method3308z00_1521;

											{	/* Ast/occur.scm 65 */
												BgL_objectz00_bglt BgL_objz00_1522;

												BgL_objz00_1522 =
													(BgL_objectz00_bglt) (BgL_nodez00_1520);
												{	/* Ast/occur.scm 65 */
													long BgL_objzd2classzd2numz00_1523;

													BgL_objzd2classzd2numz00_1523 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1522);
													{	/* Ast/occur.scm 65 */
														obj_t BgL_arg2643z00_1524;

														BgL_arg2643z00_1524 =
															PROCEDURE_REF
															(BGl_occurzd2nodez12zd2envz12zzast_occurz00,
															(int) (((long) 1)));
														{	/* Ast/occur.scm 65 */
															obj_t BgL_arrayz00_1526;

															int BgL_offsetz00_1527;

															BgL_arrayz00_1526 = BgL_arg2643z00_1524;
															BgL_offsetz00_1527 =
																(int) (BgL_objzd2classzd2numz00_1523);
															{	/* Ast/occur.scm 65 */
																long BgL_offsetz00_1528;

																BgL_offsetz00_1528 =
																	((long) (BgL_offsetz00_1527) - OBJECT_TYPE);
																{	/* Ast/occur.scm 65 */
																	long BgL_modz00_1529;

																	{	/* Ast/occur.scm 65 */
																		int BgL_arg2645z00_1530;

																		BgL_arg2645z00_1530 = (int) (((long) 16));
																		{	/* Ast/occur.scm 65 */
																			long BgL_auxz00_3386;

																			BgL_auxz00_3386 =
																				(long) (BgL_arg2645z00_1530);
																			BgL_modz00_1529 =
																				(BgL_offsetz00_1528 / BgL_auxz00_3386);
																	}}
																	{	/* Ast/occur.scm 65 */
																		long BgL_restz00_1531;

																		{	/* Ast/occur.scm 65 */
																			int BgL_arg2644z00_1532;

																			BgL_arg2644z00_1532 = (int) (((long) 16));
																			{	/* Ast/occur.scm 65 */
																				long BgL_auxz00_3390;

																				BgL_auxz00_3390 =
																					(long) (BgL_arg2644z00_1532);
																				BgL_restz00_1531 =
																					(BgL_offsetz00_1528 %
																					BgL_auxz00_3390);
																		}}
																		{	/* Ast/occur.scm 65 */

																			BgL_method3308z00_1521 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1526,
																					(int) (BgL_modz00_1529)),
																				(int) (BgL_restz00_1531));
											}}}}}}}}
											PROCEDURE_ENTRY(BgL_method3308z00_1521)
												(BgL_method3308z00_1521, (obj_t) (BgL_nodez00_1520),
												BEOA);
								}}}
							else
								{	/* Ast/occur.scm 64 */
									BFALSE;
								}
						}
					}
					if (((obj_t) (BgL_vz00_1197) == BGl_za2globalza2z00zzast_occurz00))
						{	/* Ast/occur.scm 66 */
							return BFALSE;
						}
					else
						{	/* Ast/occur.scm 67 */
							long BgL_arg3413z00_1204;

							BgL_arg3413z00_1204 =
								(
								(((BgL_variablez00_bglt) CREF(BgL_vz00_1197))->
									BgL_occurrencez00) + ((long) 1));
							return ((((BgL_variablez00_bglt) CREF(BgL_vz00_1197))->
									BgL_occurrencez00) = ((long) BgL_arg3413z00_1204), BUNSPEC);
		}}}}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_occurz00()
	{
		AN_OBJECT;
		{	/* Ast/occur.scm 17 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3589z00zzast_occurz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3589z00zzast_occurz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3589z00zzast_occurz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3589z00zzast_occurz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3589z00zzast_occurz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3589z00zzast_occurz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3589z00zzast_occurz00));
			return
				BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3589z00zzast_occurz00));
		}
	}

#ifdef __cplusplus
}
#endif
