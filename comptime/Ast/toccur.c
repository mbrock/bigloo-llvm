/*===========================================================================*/
/*   (Ast/toccur.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/toccur.scm)*/
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

	typedef struct BgL_cfunz00_bgl
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
		obj_t BgL_argszd2typezd2;
		bool_t BgL_macrozf3zf3;
		bool_t BgL_infixzf3zf3;
		obj_t BgL_methodz00;
	}              *BgL_cfunz00_bglt;

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
	static obj_t BGl__occurzd2nodez12zc0zzast_typezd2occurzd2(obj_t, obj_t);
	static obj_t BGl_typezd2incrementzd2sfunz12z12zzast_typezd2occurzd2(obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static bool_t BGl_occurzd2nodeza2z12z62zzast_typezd2occurzd2(obj_t);
	static obj_t
		BGl_occurzd2nodez12zd2boxzd2ref3323zc0zzast_typezd2occurzd2(obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_typezd2occurzd2();
	static obj_t BGl_occurzd2nodez12zd2var3291z12zzast_typezd2occurzd2(obj_t,
		obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzast_typezd2occurzd2(long, char *);
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
	static obj_t BGl_toplevelzd2initzd2zzast_typezd2occurzd2();
	static obj_t BGl__typezd2incrementzd2globalz12z12zzast_typezd2occurzd2(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2incrementzd2globalz12z12zzast_typezd2occurzd2
		(BgL_globalz00_bglt);
	static obj_t BGl_occurzd2nodez12zd2extern3301z12zzast_typezd2occurzd2(obj_t,
		obj_t);
	static obj_t BGl_occurzd2nodez12zd2appzd2ly3297zc0zzast_typezd2occurzd2(obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t
		BGl_occurzd2nodez12zd2letzd2fun3313zc0zzast_typezd2occurzd2(obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t
		BGl_occurzd2nodez12zd2letzd2var3315zc0zzast_typezd2occurzd2(obj_t, obj_t);
	static obj_t
		BGl_occurzd2nodez12zd2setzd2exzd2i3317z12zzast_typezd2occurzd2(obj_t,
		obj_t);
	static obj_t BGl_occurzd2nodez12zd2sequence3293z12zzast_typezd2occurzd2(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzast_typezd2occurzd2();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t
		BGl_occurzd2nodez12zd2boxzd2setz123325zd2zzast_typezd2occurzd2(obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_typezd2occurzd2 = BUNSPEC;
	static obj_t BGl_occurzd2nodez12zd2conditio3307z12zzast_typezd2occurzd2(obj_t,
		obj_t);
	extern obj_t BGl_scnstz00zzast_varz00;
	static obj_t BGl_occurzd2nodez12zd2select3311z12zzast_typezd2occurzd2(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzast_typezd2occurzd2();
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl_occurzd2nodez12zd2cast3303z12zzast_typezd2occurzd2(obj_t,
		obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t
		BGl_occurzd2nodez12zd2jumpzd2exzd23319z12zzast_typezd2occurzd2(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_typezd2occurzd2();
	static obj_t BGl_za2globalza2z00zzast_typezd2occurzd2 = BUNSPEC;
	static obj_t BGl__occurzd2nodez12zd2default3287z12zzast_typezd2occurzd2(obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_occurzd2nodez12zd2setq3305z12zzast_typezd2occurzd2(obj_t,
		obj_t);
	static obj_t
		BGl_occurzd2nodez12zd2makezd2box3321zc0zzast_typezd2occurzd2(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t
		BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(BgL_typez00_bglt);
	extern obj_t BGl_cfunz00zzast_varz00;
	static obj_t BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(BgL_nodez00_bglt);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_occurzd2nodez12zd2funcall3299z12zzast_typezd2occurzd2(obj_t,
		obj_t);
	static obj_t BGl_occurzd2nodez12zd2app3295z12zzast_typezd2occurzd2(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_typezd2occurzd2();
	static obj_t BGl_occurzd2nodez12zd2fail3309z12zzast_typezd2occurzd2(obj_t,
		obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_occurzd2nodez12zd2default3287zd2envzc0zzast_typezd2occurzd2,
		BgL_bgl__occurza7d2nodeza7123543z00,
		BGl__occurzd2nodez12zd2default3287z12zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
		BgL_bgl__occurza7d2nodeza7123544z00,
		BGl__occurzd2nodez12zc0zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2incrementzd2globalz12zd2envzc0zzast_typezd2occurzd2,
		BgL_bgl__typeza7d2incremen3545za7,
		BGl__typezd2incrementzd2globalz12z12zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3520z00zzast_typezd2occurzd2,
		BgL_bgl_occurza7d2nodeza712za73546za7,
		BGl_occurzd2nodez12zd2var3291z12zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3521z00zzast_typezd2occurzd2,
		BgL_bgl_occurza7d2nodeza712za73547za7,
		BGl_occurzd2nodez12zd2sequence3293z12zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3522z00zzast_typezd2occurzd2,
		BgL_bgl_occurza7d2nodeza712za73548za7,
		BGl_occurzd2nodez12zd2app3295z12zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3523z00zzast_typezd2occurzd2,
		BgL_bgl_occurza7d2nodeza712za73549za7,
		BGl_occurzd2nodez12zd2appzd2ly3297zc0zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3524z00zzast_typezd2occurzd2,
		BgL_bgl_occurza7d2nodeza712za73550za7,
		BGl_occurzd2nodez12zd2funcall3299z12zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3525z00zzast_typezd2occurzd2,
		BgL_bgl_occurza7d2nodeza712za73551za7,
		BGl_occurzd2nodez12zd2extern3301z12zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3526z00zzast_typezd2occurzd2,
		BgL_bgl_occurza7d2nodeza712za73552za7,
		BGl_occurzd2nodez12zd2cast3303z12zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3527z00zzast_typezd2occurzd2,
		BgL_bgl_occurza7d2nodeza712za73553za7,
		BGl_occurzd2nodez12zd2setq3305z12zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3528z00zzast_typezd2occurzd2,
		BgL_bgl_occurza7d2nodeza712za73554za7,
		BGl_occurzd2nodez12zd2conditio3307z12zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3530z00zzast_typezd2occurzd2,
		BgL_bgl_occurza7d2nodeza712za73555za7,
		BGl_occurzd2nodez12zd2select3311z12zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3529z00zzast_typezd2occurzd2,
		BgL_bgl_occurza7d2nodeza712za73556za7,
		BGl_occurzd2nodez12zd2fail3309z12zzast_typezd2occurzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3531z00zzast_typezd2occurzd2,
		BgL_bgl_occurza7d2nodeza712za73557za7,
		BGl_occurzd2nodez12zd2letzd2fun3313zc0zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3532z00zzast_typezd2occurzd2,
		BgL_bgl_occurza7d2nodeza712za73558za7,
		BGl_occurzd2nodez12zd2letzd2var3315zc0zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3533z00zzast_typezd2occurzd2,
		BgL_bgl_occurza7d2nodeza712za73559za7,
		BGl_occurzd2nodez12zd2setzd2exzd2i3317z12zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3534z00zzast_typezd2occurzd2,
		BgL_bgl_occurza7d2nodeza712za73560za7,
		BGl_occurzd2nodez12zd2jumpzd2exzd23319z12zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3535z00zzast_typezd2occurzd2,
		BgL_bgl_occurza7d2nodeza712za73561za7,
		BGl_occurzd2nodez12zd2makezd2box3321zc0zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3536z00zzast_typezd2occurzd2,
		BgL_bgl_occurza7d2nodeza712za73562za7,
		BGl_occurzd2nodez12zd2boxzd2ref3323zc0zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3537z00zzast_typezd2occurzd2,
		BgL_bgl_occurza7d2nodeza712za73563za7,
		BGl_occurzd2nodez12zd2boxzd2setz123325zd2zzast_typezd2occurzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STRING(BGl_string3519z00zzast_typezd2occurzd2,
		BgL_bgl_string3519za700za7za7a3564za7, "occur-node!", 11);
	      DEFINE_STRING(BGl_string3538z00zzast_typezd2occurzd2,
		BgL_bgl_string3538za700za7za7a3565za7, "ast_type-occur", 14);
	      DEFINE_STRING(BGl_string3539z00zzast_typezd2occurzd2,
		BgL_bgl_string3539za700za7za7a3566za7, "done ", 5);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzast_typezd2occurzd2(long
		BgL_checksumz00_2281, char *BgL_fromz00_2282)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_typezd2occurzd2))
				{
					BGl_requirezd2initializa7ationz75zzast_typezd2occurzd2 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_typezd2occurzd2();
					BGl_cnstzd2initzd2zzast_typezd2occurzd2();
					BGl_importedzd2moduleszd2initz00zzast_typezd2occurzd2();
					BGl_genericzd2initzd2zzast_typezd2occurzd2();
					BGl_methodzd2initzd2zzast_typezd2occurzd2();
					BGl_toplevelzd2initzd2zzast_typezd2occurzd2();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_typezd2occurzd2()
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 14 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"ast_type-occur");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"ast_type-occur");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_typezd2occurzd2()
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 14 */
			{	/* Ast/toccur.scm 14 */
				obj_t BgL_cportz00_2271;

				BgL_cportz00_2271 =
					bgl_open_input_string(BGl_string3539z00zzast_typezd2occurzd2,
					(int) (((long) 0)));
				{
					long BgL_iz00_2272;

					BgL_iz00_2272 = ((long) 0);
				BgL_loopz00_2273:
					if ((BgL_iz00_2272 == ((long) -1)))
						{	/* Ast/toccur.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/toccur.scm 14 */
							{	/* Ast/toccur.scm 14 */
								obj_t BgL_arg3541z00_2275;

								{	/* Ast/toccur.scm 14 */

									{	/* Ast/toccur.scm 14 */
										obj_t BgL_locationz00_2277;

										BgL_locationz00_2277 = BBOOL(((bool_t) 0));
										{	/* Ast/toccur.scm 14 */

											BgL_arg3541z00_2275 =
												BGl_readz00zz__readerz00(BgL_cportz00_2271,
												BgL_locationz00_2277);
										}
									}
								}
								{	/* Ast/toccur.scm 14 */
									int BgL_auxz00_2300;

									BgL_auxz00_2300 = (int) (BgL_iz00_2272);
									CNST_TABLE_SET(BgL_auxz00_2300, BgL_arg3541z00_2275);
							}}
							{	/* Ast/toccur.scm 14 */
								int BgL_auxz00_2278;

								BgL_auxz00_2278 = (int) ((BgL_iz00_2272 - ((long) 1)));
								{
									long BgL_iz00_2305;

									BgL_iz00_2305 = (long) (BgL_auxz00_2278);
									BgL_iz00_2272 = BgL_iz00_2305;
									goto BgL_loopz00_2273;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_typezd2occurzd2()
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 14 */
			BGl_za2globalza2z00zzast_typezd2occurzd2 = BUNSPEC;
			return BUNSPEC;
		}
	}



/* type-increment-global! */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2incrementzd2globalz12z12zzast_typezd2occurzd2(BgL_globalz00_bglt
		BgL_globalz00_1)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 29 */
			{	/* Ast/toccur.scm 30 */
				bool_t BgL_testz00_2307;

				{	/* Ast/toccur.scm 30 */
					BgL_valuez00_bglt BgL_arg3328z00_800;

					{
						BgL_variablez00_bglt BgL_auxz00_2308;

						BgL_auxz00_2308 = (BgL_variablez00_bglt) (BgL_globalz00_1);
						BgL_arg3328z00_800 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_2308))->BgL_valuez00);
					}
					{	/* Ast/toccur.scm 30 */
						obj_t BgL_obj1955z00_1377;

						BgL_obj1955z00_1377 = (obj_t) (BgL_arg3328z00_800);
						BgL_testz00_2307 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_1377,
							BGl_sfunz00zzast_varz00);
					}
				}
				if (BgL_testz00_2307)
					{	/* Ast/toccur.scm 30 */
						return
							BGl_typezd2incrementzd2sfunz12z12zzast_typezd2occurzd2(
							(obj_t) (BgL_globalz00_1));
					}
				else
					{	/* Ast/toccur.scm 32 */
						BgL_typez00_bglt BgL_arg3327z00_799;

						{
							BgL_variablez00_bglt BgL_auxz00_2315;

							BgL_auxz00_2315 = (BgL_variablez00_bglt) (BgL_globalz00_1);
							BgL_arg3327z00_799 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_2315))->BgL_typez00);
						}
						return
							BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
							(BgL_arg3327z00_799);
					}
			}
		}
	}



/* _type-increment-global! */
	obj_t BGl__typezd2incrementzd2globalz12z12zzast_typezd2occurzd2(obj_t
		BgL_envz00_2211, obj_t BgL_globalz00_2212)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 29 */
			return
				BGl_typezd2incrementzd2globalz12z12zzast_typezd2occurzd2(
				(BgL_globalz00_bglt) (BgL_globalz00_2212));
		}
	}



/* type-increment-sfun! */
	obj_t BGl_typezd2incrementzd2sfunz12z12zzast_typezd2occurzd2(obj_t
		BgL_varz00_2)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 37 */
			{	/* Ast/toccur.scm 38 */
				BgL_typez00_bglt BgL_arg3329z00_801;

				{
					BgL_variablez00_bglt BgL_auxz00_2321;

					BgL_auxz00_2321 = (BgL_variablez00_bglt) (BgL_varz00_2);
					BgL_arg3329z00_801 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2321))->BgL_typez00);
				}
				BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
					(BgL_arg3329z00_801);
			}
			{	/* Ast/toccur.scm 39 */
				obj_t BgL_g3272z00_802;

				{	/* Ast/toccur.scm 45 */
					BgL_sfunz00_bglt BgL_obj1880z00_1381;

					{	/* Ast/toccur.scm 45 */
						BgL_variablez00_bglt BgL_obj1611z00_1380;

						BgL_obj1611z00_1380 = (BgL_variablez00_bglt) (BgL_varz00_2);
						BgL_obj1880z00_1381 =
							(BgL_sfunz00_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1380))->
								BgL_valuez00));
					}
					BgL_g3272z00_802 =
						(((BgL_sfunz00_bglt) CREF(BgL_obj1880z00_1381))->BgL_argsz00);
				}
				{
					obj_t BgL_l3270z00_804;

					BgL_l3270z00_804 = BgL_g3272z00_802;
				BgL_zc3anonymousza33330ze3z83_805:
					if (PAIRP(BgL_l3270z00_804))
						{	/* Ast/toccur.scm 45 */
							{	/* Ast/toccur.scm 41 */
								obj_t BgL_az00_807;

								BgL_az00_807 = CAR(BgL_l3270z00_804);
								if (BGl_iszd2azf3z21zz__objectz00(BgL_az00_807,
										BGl_typez00zztype_typez00))
									{	/* Ast/toccur.scm 41 */
										BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
											(BgL_typez00_bglt) (BgL_az00_807));
									}
								else
									{	/* Ast/toccur.scm 41 */
										if (BGl_iszd2azf3z21zz__objectz00(BgL_az00_807,
												BGl_localz00zzast_varz00))
											{	/* Ast/toccur.scm 44 */
												BgL_typez00_bglt BgL_arg3334z00_810;

												{
													BgL_variablez00_bglt BgL_auxz00_2338;

													BgL_auxz00_2338 =
														(BgL_variablez00_bglt) (
														(BgL_localz00_bglt) (BgL_az00_807));
													BgL_arg3334z00_810 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_2338))->
														BgL_typez00);
												}
												BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
													(BgL_arg3334z00_810);
											}
										else
											{	/* Ast/toccur.scm 43 */
												BFALSE;
											}
									}
							}
							{
								obj_t BgL_l3270z00_2343;

								BgL_l3270z00_2343 = CDR(BgL_l3270z00_804);
								BgL_l3270z00_804 = BgL_l3270z00_2343;
								goto BgL_zc3anonymousza33330ze3z83_805;
							}
						}
					else
						{	/* Ast/toccur.scm 45 */
							((bool_t) 1);
						}
				}
			}
			{	/* Ast/toccur.scm 46 */
				obj_t BgL_nodez00_814;

				{	/* Ast/toccur.scm 46 */
					BgL_sfunz00_bglt BgL_obj1884z00_1389;

					{	/* Ast/toccur.scm 46 */
						BgL_variablez00_bglt BgL_obj1611z00_1388;

						BgL_obj1611z00_1388 = (BgL_variablez00_bglt) (BgL_varz00_2);
						BgL_obj1884z00_1389 =
							(BgL_sfunz00_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1388))->
								BgL_valuez00));
					}
					BgL_nodez00_814 =
						(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_1389))->BgL_bodyz00);
				}
				if (BGl_iszd2azf3z21zz__objectz00(BgL_nodez00_814,
						BGl_nodez00zzast_nodez00))
					{	/* Ast/toccur.scm 48 */
						BgL_nodez00_bglt BgL_nodez00_1391;

						BgL_nodez00_1391 = (BgL_nodez00_bglt) (BgL_nodez00_814);
						{	/* Ast/toccur.scm 48 */
							obj_t BgL_method3289z00_1392;

							{	/* Ast/toccur.scm 48 */
								BgL_objectz00_bglt BgL_objz00_1393;

								BgL_objz00_1393 = (BgL_objectz00_bglt) (BgL_nodez00_1391);
								{	/* Ast/toccur.scm 48 */
									long BgL_objzd2classzd2numz00_1394;

									BgL_objzd2classzd2numz00_1394 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1393);
									{	/* Ast/toccur.scm 48 */
										obj_t BgL_arg2643z00_1395;

										BgL_arg2643z00_1395 =
											PROCEDURE_REF
											(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
											(int) (((long) 1)));
										{	/* Ast/toccur.scm 48 */
											obj_t BgL_arrayz00_1397;

											int BgL_offsetz00_1398;

											BgL_arrayz00_1397 = BgL_arg2643z00_1395;
											BgL_offsetz00_1398 =
												(int) (BgL_objzd2classzd2numz00_1394);
											{	/* Ast/toccur.scm 48 */
												long BgL_offsetz00_1399;

												BgL_offsetz00_1399 =
													((long) (BgL_offsetz00_1398) - OBJECT_TYPE);
												{	/* Ast/toccur.scm 48 */
													long BgL_modz00_1400;

													{	/* Ast/toccur.scm 48 */
														int BgL_arg2645z00_1401;

														BgL_arg2645z00_1401 = (int) (((long) 16));
														{	/* Ast/toccur.scm 48 */
															long BgL_auxz00_2360;

															BgL_auxz00_2360 = (long) (BgL_arg2645z00_1401);
															BgL_modz00_1400 =
																(BgL_offsetz00_1399 / BgL_auxz00_2360);
													}}
													{	/* Ast/toccur.scm 48 */
														long BgL_restz00_1402;

														{	/* Ast/toccur.scm 48 */
															int BgL_arg2644z00_1403;

															BgL_arg2644z00_1403 = (int) (((long) 16));
															{	/* Ast/toccur.scm 48 */
																long BgL_auxz00_2364;

																BgL_auxz00_2364 = (long) (BgL_arg2644z00_1403);
																BgL_restz00_1402 =
																	(BgL_offsetz00_1399 % BgL_auxz00_2364);
														}}
														{	/* Ast/toccur.scm 48 */

															BgL_method3289z00_1392 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1397,
																	(int) (BgL_modz00_1400)),
																(int) (BgL_restz00_1402));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3289z00_1392) (BgL_method3289z00_1392,
								(obj_t) (BgL_nodez00_1391), BEOA);
						}
					}
				else
					{	/* Ast/toccur.scm 47 */
						return BFALSE;
					}
			}
		}
	}



/* occur-node*! */
	bool_t BGl_occurzd2nodeza2z12z62zzast_typezd2occurzd2(obj_t BgL_nodeza2za2_25)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 220 */
			{
				obj_t BgL_l3285z00_818;

				BgL_l3285z00_818 = BgL_nodeza2za2_25;
			BgL_zc3anonymousza33339ze3z83_819:
				if (PAIRP(BgL_l3285z00_818))
					{	/* Ast/toccur.scm 221 */
						{	/* Ast/toccur.scm 221 */
							obj_t BgL_arg3341z00_821;

							BgL_arg3341z00_821 = CAR(BgL_l3285z00_818);
							{	/* Ast/toccur.scm 221 */
								BgL_nodez00_bglt BgL_nodez00_1419;

								BgL_nodez00_1419 = (BgL_nodez00_bglt) (BgL_arg3341z00_821);
								{	/* Ast/toccur.scm 221 */
									obj_t BgL_method3289z00_1420;

									{	/* Ast/toccur.scm 221 */
										BgL_objectz00_bglt BgL_objz00_1421;

										BgL_objz00_1421 = (BgL_objectz00_bglt) (BgL_nodez00_1419);
										{	/* Ast/toccur.scm 221 */
											long BgL_objzd2classzd2numz00_1422;

											BgL_objzd2classzd2numz00_1422 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1421);
											{	/* Ast/toccur.scm 221 */
												obj_t BgL_arg2643z00_1423;

												BgL_arg2643z00_1423 =
													PROCEDURE_REF
													(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
													(int) (((long) 1)));
												{	/* Ast/toccur.scm 221 */
													obj_t BgL_arrayz00_1425;

													int BgL_offsetz00_1426;

													BgL_arrayz00_1425 = BgL_arg2643z00_1423;
													BgL_offsetz00_1426 =
														(int) (BgL_objzd2classzd2numz00_1422);
													{	/* Ast/toccur.scm 221 */
														long BgL_offsetz00_1427;

														BgL_offsetz00_1427 =
															((long) (BgL_offsetz00_1426) - OBJECT_TYPE);
														{	/* Ast/toccur.scm 221 */
															long BgL_modz00_1428;

															{	/* Ast/toccur.scm 221 */
																int BgL_arg2645z00_1429;

																BgL_arg2645z00_1429 = (int) (((long) 16));
																{	/* Ast/toccur.scm 221 */
																	long BgL_auxz00_2386;

																	BgL_auxz00_2386 =
																		(long) (BgL_arg2645z00_1429);
																	BgL_modz00_1428 =
																		(BgL_offsetz00_1427 / BgL_auxz00_2386);
															}}
															{	/* Ast/toccur.scm 221 */
																long BgL_restz00_1430;

																{	/* Ast/toccur.scm 221 */
																	int BgL_arg2644z00_1431;

																	BgL_arg2644z00_1431 = (int) (((long) 16));
																	{	/* Ast/toccur.scm 221 */
																		long BgL_auxz00_2390;

																		BgL_auxz00_2390 =
																			(long) (BgL_arg2644z00_1431);
																		BgL_restz00_1430 =
																			(BgL_offsetz00_1427 % BgL_auxz00_2390);
																}}
																{	/* Ast/toccur.scm 221 */

																	BgL_method3289z00_1420 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1425,
																			(int) (BgL_modz00_1428)),
																		(int) (BgL_restz00_1430));
									}}}}}}}}
									PROCEDURE_ENTRY(BgL_method3289z00_1420)
										(BgL_method3289z00_1420, (obj_t) (BgL_nodez00_1419), BEOA);
						}}}
						{
							obj_t BgL_l3285z00_2400;

							BgL_l3285z00_2400 = CDR(BgL_l3285z00_818);
							BgL_l3285z00_818 = BgL_l3285z00_2400;
							goto BgL_zc3anonymousza33339ze3z83_819;
						}
					}
				else
					{	/* Ast/toccur.scm 221 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_typezd2occurzd2()
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 14 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_occurzd2nodez12zd2default3287zd2envzc0zzast_typezd2occurzd2,
				BGl_nodez00zzast_nodez00, BGl_string3519z00zzast_typezd2occurzd2);
		}
	}



/* occur-node! */
	obj_t BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(BgL_nodez00_bglt
		BgL_nodez00_5)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 65 */
			{	/* Ast/toccur.scm 65 */
				obj_t BgL_method3289z00_1446;

				{	/* Ast/toccur.scm 65 */
					BgL_objectz00_bglt BgL_objz00_1447;

					BgL_objz00_1447 = (BgL_objectz00_bglt) (BgL_nodez00_5);
					{	/* Ast/toccur.scm 65 */
						long BgL_objzd2classzd2numz00_1448;

						BgL_objzd2classzd2numz00_1448 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1447);
						{	/* Ast/toccur.scm 65 */
							obj_t BgL_arg2643z00_1449;

							BgL_arg2643z00_1449 =
								PROCEDURE_REF(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
								(int) (((long) 1)));
							{	/* Ast/toccur.scm 65 */
								obj_t BgL_arrayz00_1451;

								int BgL_offsetz00_1452;

								BgL_arrayz00_1451 = BgL_arg2643z00_1449;
								BgL_offsetz00_1452 = (int) (BgL_objzd2classzd2numz00_1448);
								{	/* Ast/toccur.scm 65 */
									long BgL_offsetz00_1453;

									BgL_offsetz00_1453 =
										((long) (BgL_offsetz00_1452) - OBJECT_TYPE);
									{	/* Ast/toccur.scm 65 */
										long BgL_modz00_1454;

										{	/* Ast/toccur.scm 65 */
											int BgL_arg2645z00_1455;

											BgL_arg2645z00_1455 = (int) (((long) 16));
											{	/* Ast/toccur.scm 65 */
												long BgL_auxz00_2411;

												BgL_auxz00_2411 = (long) (BgL_arg2645z00_1455);
												BgL_modz00_1454 =
													(BgL_offsetz00_1453 / BgL_auxz00_2411);
										}}
										{	/* Ast/toccur.scm 65 */
											long BgL_restz00_1456;

											{	/* Ast/toccur.scm 65 */
												int BgL_arg2644z00_1457;

												BgL_arg2644z00_1457 = (int) (((long) 16));
												{	/* Ast/toccur.scm 65 */
													long BgL_auxz00_2415;

													BgL_auxz00_2415 = (long) (BgL_arg2644z00_1457);
													BgL_restz00_1456 =
														(BgL_offsetz00_1453 % BgL_auxz00_2415);
											}}
											{	/* Ast/toccur.scm 65 */

												BgL_method3289z00_1446 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1451,
														(int) (BgL_modz00_1454)), (int) (BgL_restz00_1456));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3289z00_1446) (BgL_method3289z00_1446,
					(obj_t) (BgL_nodez00_5), BEOA);
			}
		}
	}



/* _occur-node! */
	obj_t BGl__occurzd2nodez12zc0zzast_typezd2occurzd2(obj_t BgL_envz00_2213,
		obj_t BgL_nodez00_2214)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 65 */
			return
				BGl_occurzd2nodez12zc0zzast_typezd2occurzd2(
				(BgL_nodez00_bglt) (BgL_nodez00_2214));
		}
	}



/* _occur-node!-default3287 */
	obj_t BGl__occurzd2nodez12zd2default3287z12zzast_typezd2occurzd2(obj_t
		BgL_envz00_2215, obj_t BgL_nodez00_2216)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 14 */
			{	/* Ast/toccur.scm 66 */
				obj_t BgL_res3542z00_2280;

				BgL_res3542z00_2280 = CNST_TABLE_REF(((long) 0));
				return BgL_res3542z00_2280;
			}
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_typezd2occurzd2()
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 14 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_varz00zzast_nodez00, BGl_proc3520z00zzast_typezd2occurzd2,
				BGl_string3519z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_sequencez00zzast_nodez00, BGl_proc3521z00zzast_typezd2occurzd2,
				BGl_string3519z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_appz00zzast_nodez00, BGl_proc3522z00zzast_typezd2occurzd2,
				BGl_string3519z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3523z00zzast_typezd2occurzd2,
				BGl_string3519z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_funcallz00zzast_nodez00, BGl_proc3524z00zzast_typezd2occurzd2,
				BGl_string3519z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_externz00zzast_nodez00, BGl_proc3525z00zzast_typezd2occurzd2,
				BGl_string3519z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_castz00zzast_nodez00, BGl_proc3526z00zzast_typezd2occurzd2,
				BGl_string3519z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_setqz00zzast_nodez00, BGl_proc3527z00zzast_typezd2occurzd2,
				BGl_string3519z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_conditionalz00zzast_nodez00, BGl_proc3528z00zzast_typezd2occurzd2,
				BGl_string3519z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_failz00zzast_nodez00, BGl_proc3529z00zzast_typezd2occurzd2,
				BGl_string3519z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_selectz00zzast_nodez00, BGl_proc3530z00zzast_typezd2occurzd2,
				BGl_string3519z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3531z00zzast_typezd2occurzd2,
				BGl_string3519z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3532z00zzast_typezd2occurzd2,
				BGl_string3519z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3533z00zzast_typezd2occurzd2,
				BGl_string3519z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc3534z00zzast_typezd2occurzd2,
				BGl_string3519z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3535z00zzast_typezd2occurzd2,
				BGl_string3519z00zzast_typezd2occurzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3536z00zzast_typezd2occurzd2,
				BGl_string3519z00zzast_typezd2occurzd2);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3537z00zzast_typezd2occurzd2,
				BGl_string3519z00zzast_typezd2occurzd2);
		}
	}



/* occur-node!-box-set!3325 */
	obj_t BGl_occurzd2nodez12zd2boxzd2setz123325zd2zzast_typezd2occurzd2(obj_t
		BgL_envz00_2235, obj_t BgL_nodez00_2236)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 212 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1368;

				BgL_nodez00_1368 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2236);
				{	/* Ast/toccur.scm 214 */
					BgL_varz00_bglt BgL_arg3458z00_1372;

					BgL_arg3458z00_1372 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1368))->BgL_varz00);
					{	/* Ast/toccur.scm 214 */
						BgL_nodez00_bglt BgL_nodez00_2158;

						BgL_nodez00_2158 = (BgL_nodez00_bglt) (BgL_arg3458z00_1372);
						{	/* Ast/toccur.scm 214 */
							obj_t BgL_method3289z00_2159;

							{	/* Ast/toccur.scm 214 */
								BgL_objectz00_bglt BgL_objz00_2160;

								BgL_objz00_2160 = (BgL_objectz00_bglt) (BgL_nodez00_2158);
								{	/* Ast/toccur.scm 214 */
									long BgL_objzd2classzd2numz00_2161;

									BgL_objzd2classzd2numz00_2161 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2160);
									{	/* Ast/toccur.scm 214 */
										obj_t BgL_arg2643z00_2162;

										BgL_arg2643z00_2162 =
											PROCEDURE_REF
											(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
											(int) (((long) 1)));
										{	/* Ast/toccur.scm 214 */
											obj_t BgL_arrayz00_2164;

											int BgL_offsetz00_2165;

											BgL_arrayz00_2164 = BgL_arg2643z00_2162;
											BgL_offsetz00_2165 =
												(int) (BgL_objzd2classzd2numz00_2161);
											{	/* Ast/toccur.scm 214 */
												long BgL_offsetz00_2166;

												BgL_offsetz00_2166 =
													((long) (BgL_offsetz00_2165) - OBJECT_TYPE);
												{	/* Ast/toccur.scm 214 */
													long BgL_modz00_2167;

													{	/* Ast/toccur.scm 214 */
														int BgL_arg2645z00_2168;

														BgL_arg2645z00_2168 = (int) (((long) 16));
														{	/* Ast/toccur.scm 214 */
															long BgL_auxz00_2456;

															BgL_auxz00_2456 = (long) (BgL_arg2645z00_2168);
															BgL_modz00_2167 =
																(BgL_offsetz00_2166 / BgL_auxz00_2456);
													}}
													{	/* Ast/toccur.scm 214 */
														long BgL_restz00_2169;

														{	/* Ast/toccur.scm 214 */
															int BgL_arg2644z00_2170;

															BgL_arg2644z00_2170 = (int) (((long) 16));
															{	/* Ast/toccur.scm 214 */
																long BgL_auxz00_2460;

																BgL_auxz00_2460 = (long) (BgL_arg2644z00_2170);
																BgL_restz00_2169 =
																	(BgL_offsetz00_2166 % BgL_auxz00_2460);
														}}
														{	/* Ast/toccur.scm 214 */

															BgL_method3289z00_2159 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2164,
																	(int) (BgL_modz00_2167)),
																(int) (BgL_restz00_2169));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3289z00_2159) (BgL_method3289z00_2159,
								(obj_t) (BgL_nodez00_2158), BEOA);
				}}}
				{	/* Ast/toccur.scm 215 */
					BgL_nodez00_bglt BgL_arg3459z00_1373;

					BgL_arg3459z00_1373 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1368))->BgL_valuez00);
					{	/* Ast/toccur.scm 215 */
						obj_t BgL_method3289z00_2186;

						{	/* Ast/toccur.scm 215 */
							BgL_objectz00_bglt BgL_objz00_2187;

							BgL_objz00_2187 = (BgL_objectz00_bglt) (BgL_arg3459z00_1373);
							{	/* Ast/toccur.scm 215 */
								long BgL_objzd2classzd2numz00_2188;

								BgL_objzd2classzd2numz00_2188 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2187);
								{	/* Ast/toccur.scm 215 */
									obj_t BgL_arg2643z00_2189;

									BgL_arg2643z00_2189 =
										PROCEDURE_REF
										(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
										(int) (((long) 1)));
									{	/* Ast/toccur.scm 215 */
										obj_t BgL_arrayz00_2191;

										int BgL_offsetz00_2192;

										BgL_arrayz00_2191 = BgL_arg2643z00_2189;
										BgL_offsetz00_2192 = (int) (BgL_objzd2classzd2numz00_2188);
										{	/* Ast/toccur.scm 215 */
											long BgL_offsetz00_2193;

											BgL_offsetz00_2193 =
												((long) (BgL_offsetz00_2192) - OBJECT_TYPE);
											{	/* Ast/toccur.scm 215 */
												long BgL_modz00_2194;

												{	/* Ast/toccur.scm 215 */
													int BgL_arg2645z00_2195;

													BgL_arg2645z00_2195 = (int) (((long) 16));
													{	/* Ast/toccur.scm 215 */
														long BgL_auxz00_2479;

														BgL_auxz00_2479 = (long) (BgL_arg2645z00_2195);
														BgL_modz00_2194 =
															(BgL_offsetz00_2193 / BgL_auxz00_2479);
												}}
												{	/* Ast/toccur.scm 215 */
													long BgL_restz00_2196;

													{	/* Ast/toccur.scm 215 */
														int BgL_arg2644z00_2197;

														BgL_arg2644z00_2197 = (int) (((long) 16));
														{	/* Ast/toccur.scm 215 */
															long BgL_auxz00_2483;

															BgL_auxz00_2483 = (long) (BgL_arg2644z00_2197);
															BgL_restz00_2196 =
																(BgL_offsetz00_2193 % BgL_auxz00_2483);
													}}
													{	/* Ast/toccur.scm 215 */

														BgL_method3289z00_2186 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2191,
																(int) (BgL_modz00_2194)),
															(int) (BgL_restz00_2196));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3289z00_2186) (BgL_method3289z00_2186,
							(obj_t) (BgL_arg3459z00_1373), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-box-ref3323 */
	obj_t BGl_occurzd2nodez12zd2boxzd2ref3323zc0zzast_typezd2occurzd2(obj_t
		BgL_envz00_2237, obj_t BgL_nodez00_2238)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 206 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1362;

				BgL_nodez00_1362 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2238);
				{	/* Ast/toccur.scm 207 */
					BgL_varz00_bglt BgL_arg3456z00_2129;

					BgL_arg3456z00_2129 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1362))->BgL_varz00);
					{	/* Ast/toccur.scm 207 */
						BgL_nodez00_bglt BgL_nodez00_2131;

						BgL_nodez00_2131 = (BgL_nodez00_bglt) (BgL_arg3456z00_2129);
						{	/* Ast/toccur.scm 207 */
							obj_t BgL_method3289z00_2132;

							{	/* Ast/toccur.scm 207 */
								BgL_objectz00_bglt BgL_objz00_2133;

								BgL_objz00_2133 = (BgL_objectz00_bglt) (BgL_nodez00_2131);
								{	/* Ast/toccur.scm 207 */
									long BgL_objzd2classzd2numz00_2134;

									BgL_objzd2classzd2numz00_2134 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2133);
									{	/* Ast/toccur.scm 207 */
										obj_t BgL_arg2643z00_2135;

										BgL_arg2643z00_2135 =
											PROCEDURE_REF
											(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
											(int) (((long) 1)));
										{	/* Ast/toccur.scm 207 */
											obj_t BgL_arrayz00_2137;

											int BgL_offsetz00_2138;

											BgL_arrayz00_2137 = BgL_arg2643z00_2135;
											BgL_offsetz00_2138 =
												(int) (BgL_objzd2classzd2numz00_2134);
											{	/* Ast/toccur.scm 207 */
												long BgL_offsetz00_2139;

												BgL_offsetz00_2139 =
													((long) (BgL_offsetz00_2138) - OBJECT_TYPE);
												{	/* Ast/toccur.scm 207 */
													long BgL_modz00_2140;

													{	/* Ast/toccur.scm 207 */
														int BgL_arg2645z00_2141;

														BgL_arg2645z00_2141 = (int) (((long) 16));
														{	/* Ast/toccur.scm 207 */
															long BgL_auxz00_2504;

															BgL_auxz00_2504 = (long) (BgL_arg2645z00_2141);
															BgL_modz00_2140 =
																(BgL_offsetz00_2139 / BgL_auxz00_2504);
													}}
													{	/* Ast/toccur.scm 207 */
														long BgL_restz00_2142;

														{	/* Ast/toccur.scm 207 */
															int BgL_arg2644z00_2143;

															BgL_arg2644z00_2143 = (int) (((long) 16));
															{	/* Ast/toccur.scm 207 */
																long BgL_auxz00_2508;

																BgL_auxz00_2508 = (long) (BgL_arg2644z00_2143);
																BgL_restz00_2142 =
																	(BgL_offsetz00_2139 % BgL_auxz00_2508);
														}}
														{	/* Ast/toccur.scm 207 */

															BgL_method3289z00_2132 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2137,
																	(int) (BgL_modz00_2140)),
																(int) (BgL_restz00_2142));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3289z00_2132) (BgL_method3289z00_2132,
								(obj_t) (BgL_nodez00_2131), BEOA);
						}
					}
				}
			}
		}
	}



/* occur-node!-make-box3321 */
	obj_t BGl_occurzd2nodez12zd2makezd2box3321zc0zzast_typezd2occurzd2(obj_t
		BgL_envz00_2239, obj_t BgL_nodez00_2240)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 200 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1356;

				BgL_nodez00_1356 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2240);
				{	/* Ast/toccur.scm 201 */
					BgL_nodez00_bglt BgL_arg3454z00_2101;

					BgL_arg3454z00_2101 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1356))->BgL_valuez00);
					{	/* Ast/toccur.scm 201 */
						obj_t BgL_method3289z00_2104;

						{	/* Ast/toccur.scm 201 */
							BgL_objectz00_bglt BgL_objz00_2105;

							BgL_objz00_2105 = (BgL_objectz00_bglt) (BgL_arg3454z00_2101);
							{	/* Ast/toccur.scm 201 */
								long BgL_objzd2classzd2numz00_2106;

								BgL_objzd2classzd2numz00_2106 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2105);
								{	/* Ast/toccur.scm 201 */
									obj_t BgL_arg2643z00_2107;

									BgL_arg2643z00_2107 =
										PROCEDURE_REF
										(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
										(int) (((long) 1)));
									{	/* Ast/toccur.scm 201 */
										obj_t BgL_arrayz00_2109;

										int BgL_offsetz00_2110;

										BgL_arrayz00_2109 = BgL_arg2643z00_2107;
										BgL_offsetz00_2110 = (int) (BgL_objzd2classzd2numz00_2106);
										{	/* Ast/toccur.scm 201 */
											long BgL_offsetz00_2111;

											BgL_offsetz00_2111 =
												((long) (BgL_offsetz00_2110) - OBJECT_TYPE);
											{	/* Ast/toccur.scm 201 */
												long BgL_modz00_2112;

												{	/* Ast/toccur.scm 201 */
													int BgL_arg2645z00_2113;

													BgL_arg2645z00_2113 = (int) (((long) 16));
													{	/* Ast/toccur.scm 201 */
														long BgL_auxz00_2528;

														BgL_auxz00_2528 = (long) (BgL_arg2645z00_2113);
														BgL_modz00_2112 =
															(BgL_offsetz00_2111 / BgL_auxz00_2528);
												}}
												{	/* Ast/toccur.scm 201 */
													long BgL_restz00_2114;

													{	/* Ast/toccur.scm 201 */
														int BgL_arg2644z00_2115;

														BgL_arg2644z00_2115 = (int) (((long) 16));
														{	/* Ast/toccur.scm 201 */
															long BgL_auxz00_2532;

															BgL_auxz00_2532 = (long) (BgL_arg2644z00_2115);
															BgL_restz00_2114 =
																(BgL_offsetz00_2111 % BgL_auxz00_2532);
													}}
													{	/* Ast/toccur.scm 201 */

														BgL_method3289z00_2104 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2109,
																(int) (BgL_modz00_2112)),
															(int) (BgL_restz00_2114));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3289z00_2104) (BgL_method3289z00_2104,
							(obj_t) (BgL_arg3454z00_2101), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-jump-ex-3319 */
	obj_t BGl_occurzd2nodez12zd2jumpzd2exzd23319z12zzast_typezd2occurzd2(obj_t
		BgL_envz00_2241, obj_t BgL_nodez00_2242)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 192 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1348;

				BgL_nodez00_1348 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2242);
				{	/* Ast/toccur.scm 194 */
					BgL_nodez00_bglt BgL_arg3451z00_1352;

					BgL_arg3451z00_1352 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1348))->
						BgL_exitz00);
					{	/* Ast/toccur.scm 194 */
						obj_t BgL_method3289z00_2049;

						{	/* Ast/toccur.scm 194 */
							BgL_objectz00_bglt BgL_objz00_2050;

							BgL_objz00_2050 = (BgL_objectz00_bglt) (BgL_arg3451z00_1352);
							{	/* Ast/toccur.scm 194 */
								long BgL_objzd2classzd2numz00_2051;

								BgL_objzd2classzd2numz00_2051 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2050);
								{	/* Ast/toccur.scm 194 */
									obj_t BgL_arg2643z00_2052;

									BgL_arg2643z00_2052 =
										PROCEDURE_REF
										(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
										(int) (((long) 1)));
									{	/* Ast/toccur.scm 194 */
										obj_t BgL_arrayz00_2054;

										int BgL_offsetz00_2055;

										BgL_arrayz00_2054 = BgL_arg2643z00_2052;
										BgL_offsetz00_2055 = (int) (BgL_objzd2classzd2numz00_2051);
										{	/* Ast/toccur.scm 194 */
											long BgL_offsetz00_2056;

											BgL_offsetz00_2056 =
												((long) (BgL_offsetz00_2055) - OBJECT_TYPE);
											{	/* Ast/toccur.scm 194 */
												long BgL_modz00_2057;

												{	/* Ast/toccur.scm 194 */
													int BgL_arg2645z00_2058;

													BgL_arg2645z00_2058 = (int) (((long) 16));
													{	/* Ast/toccur.scm 194 */
														long BgL_auxz00_2552;

														BgL_auxz00_2552 = (long) (BgL_arg2645z00_2058);
														BgL_modz00_2057 =
															(BgL_offsetz00_2056 / BgL_auxz00_2552);
												}}
												{	/* Ast/toccur.scm 194 */
													long BgL_restz00_2059;

													{	/* Ast/toccur.scm 194 */
														int BgL_arg2644z00_2060;

														BgL_arg2644z00_2060 = (int) (((long) 16));
														{	/* Ast/toccur.scm 194 */
															long BgL_auxz00_2556;

															BgL_auxz00_2556 = (long) (BgL_arg2644z00_2060);
															BgL_restz00_2059 =
																(BgL_offsetz00_2056 % BgL_auxz00_2556);
													}}
													{	/* Ast/toccur.scm 194 */

														BgL_method3289z00_2049 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2054,
																(int) (BgL_modz00_2057)),
															(int) (BgL_restz00_2059));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3289z00_2049) (BgL_method3289z00_2049,
							(obj_t) (BgL_arg3451z00_1352), BEOA);
				}}
				{	/* Ast/toccur.scm 195 */
					BgL_nodez00_bglt BgL_arg3452z00_1353;

					BgL_arg3452z00_1353 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1348))->
						BgL_valuez00);
					{	/* Ast/toccur.scm 195 */
						obj_t BgL_method3289z00_2076;

						{	/* Ast/toccur.scm 195 */
							BgL_objectz00_bglt BgL_objz00_2077;

							BgL_objz00_2077 = (BgL_objectz00_bglt) (BgL_arg3452z00_1353);
							{	/* Ast/toccur.scm 195 */
								long BgL_objzd2classzd2numz00_2078;

								BgL_objzd2classzd2numz00_2078 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2077);
								{	/* Ast/toccur.scm 195 */
									obj_t BgL_arg2643z00_2079;

									BgL_arg2643z00_2079 =
										PROCEDURE_REF
										(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
										(int) (((long) 1)));
									{	/* Ast/toccur.scm 195 */
										obj_t BgL_arrayz00_2081;

										int BgL_offsetz00_2082;

										BgL_arrayz00_2081 = BgL_arg2643z00_2079;
										BgL_offsetz00_2082 = (int) (BgL_objzd2classzd2numz00_2078);
										{	/* Ast/toccur.scm 195 */
											long BgL_offsetz00_2083;

											BgL_offsetz00_2083 =
												((long) (BgL_offsetz00_2082) - OBJECT_TYPE);
											{	/* Ast/toccur.scm 195 */
												long BgL_modz00_2084;

												{	/* Ast/toccur.scm 195 */
													int BgL_arg2645z00_2085;

													BgL_arg2645z00_2085 = (int) (((long) 16));
													{	/* Ast/toccur.scm 195 */
														long BgL_auxz00_2575;

														BgL_auxz00_2575 = (long) (BgL_arg2645z00_2085);
														BgL_modz00_2084 =
															(BgL_offsetz00_2083 / BgL_auxz00_2575);
												}}
												{	/* Ast/toccur.scm 195 */
													long BgL_restz00_2086;

													{	/* Ast/toccur.scm 195 */
														int BgL_arg2644z00_2087;

														BgL_arg2644z00_2087 = (int) (((long) 16));
														{	/* Ast/toccur.scm 195 */
															long BgL_auxz00_2579;

															BgL_auxz00_2579 = (long) (BgL_arg2644z00_2087);
															BgL_restz00_2086 =
																(BgL_offsetz00_2083 % BgL_auxz00_2579);
													}}
													{	/* Ast/toccur.scm 195 */

														BgL_method3289z00_2076 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2081,
																(int) (BgL_modz00_2084)),
															(int) (BgL_restz00_2086));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3289z00_2076) (BgL_method3289z00_2076,
							(obj_t) (BgL_arg3452z00_1353), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-set-ex-i3317 */
	obj_t BGl_occurzd2nodez12zd2setzd2exzd2i3317z12zzast_typezd2occurzd2(obj_t
		BgL_envz00_2243, obj_t BgL_nodez00_2244)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 185 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1341;

				BgL_nodez00_1341 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2244);
				{	/* Ast/toccur.scm 187 */
					BgL_nodez00_bglt BgL_arg3449z00_2019;

					BgL_arg3449z00_2019 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1341))->BgL_bodyz00);
					{	/* Ast/toccur.scm 187 */
						obj_t BgL_method3289z00_2022;

						{	/* Ast/toccur.scm 187 */
							BgL_objectz00_bglt BgL_objz00_2023;

							BgL_objz00_2023 = (BgL_objectz00_bglt) (BgL_arg3449z00_2019);
							{	/* Ast/toccur.scm 187 */
								long BgL_objzd2classzd2numz00_2024;

								BgL_objzd2classzd2numz00_2024 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2023);
								{	/* Ast/toccur.scm 187 */
									obj_t BgL_arg2643z00_2025;

									BgL_arg2643z00_2025 =
										PROCEDURE_REF
										(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
										(int) (((long) 1)));
									{	/* Ast/toccur.scm 187 */
										obj_t BgL_arrayz00_2027;

										int BgL_offsetz00_2028;

										BgL_arrayz00_2027 = BgL_arg2643z00_2025;
										BgL_offsetz00_2028 = (int) (BgL_objzd2classzd2numz00_2024);
										{	/* Ast/toccur.scm 187 */
											long BgL_offsetz00_2029;

											BgL_offsetz00_2029 =
												((long) (BgL_offsetz00_2028) - OBJECT_TYPE);
											{	/* Ast/toccur.scm 187 */
												long BgL_modz00_2030;

												{	/* Ast/toccur.scm 187 */
													int BgL_arg2645z00_2031;

													BgL_arg2645z00_2031 = (int) (((long) 16));
													{	/* Ast/toccur.scm 187 */
														long BgL_auxz00_2599;

														BgL_auxz00_2599 = (long) (BgL_arg2645z00_2031);
														BgL_modz00_2030 =
															(BgL_offsetz00_2029 / BgL_auxz00_2599);
												}}
												{	/* Ast/toccur.scm 187 */
													long BgL_restz00_2032;

													{	/* Ast/toccur.scm 187 */
														int BgL_arg2644z00_2033;

														BgL_arg2644z00_2033 = (int) (((long) 16));
														{	/* Ast/toccur.scm 187 */
															long BgL_auxz00_2603;

															BgL_auxz00_2603 = (long) (BgL_arg2644z00_2033);
															BgL_restz00_2032 =
																(BgL_offsetz00_2029 % BgL_auxz00_2603);
													}}
													{	/* Ast/toccur.scm 187 */

														BgL_method3289z00_2022 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2027,
																(int) (BgL_modz00_2030)),
															(int) (BgL_restz00_2032));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3289z00_2022) (BgL_method3289z00_2022,
							(obj_t) (BgL_arg3449z00_2019), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-let-var3315 */
	obj_t BGl_occurzd2nodez12zd2letzd2var3315zc0zzast_typezd2occurzd2(obj_t
		BgL_envz00_2245, obj_t BgL_nodez00_2246)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 173 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1323;

				BgL_nodez00_1323 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2246);
				{	/* Ast/toccur.scm 175 */
					obj_t BgL_g3284z00_1327;

					BgL_g3284z00_1327 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1323))->BgL_bindingsz00);
					{
						obj_t BgL_l3282z00_1329;

						BgL_l3282z00_1329 = BgL_g3284z00_1327;
					BgL_zc3anonymousza33442ze3z83_1330:
						if (PAIRP(BgL_l3282z00_1329))
							{	/* Ast/toccur.scm 175 */
								{	/* Ast/toccur.scm 178 */
									obj_t BgL_bindingz00_1332;

									BgL_bindingz00_1332 = CAR(BgL_l3282z00_1329);
									{	/* Ast/toccur.scm 176 */
										obj_t BgL_instance3262z00_1333;

										BgL_instance3262z00_1333 = CAR(BgL_bindingz00_1332);
										{	/* Ast/toccur.scm 177 */
											BgL_typez00_bglt BgL_arg3444z00_1334;

											{
												BgL_variablez00_bglt BgL_auxz00_2619;

												BgL_auxz00_2619 =
													(BgL_variablez00_bglt) (BgL_instance3262z00_1333);
												BgL_arg3444z00_1334 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_2619))->
													BgL_typez00);
											}
											BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
												(BgL_arg3444z00_1334);
										}
									}
									{	/* Ast/toccur.scm 178 */
										obj_t BgL_arg3445z00_1335;

										BgL_arg3445z00_1335 = CDR(BgL_bindingz00_1332);
										{	/* Ast/toccur.scm 178 */
											BgL_nodez00_bglt BgL_nodez00_1965;

											BgL_nodez00_1965 =
												(BgL_nodez00_bglt) (BgL_arg3445z00_1335);
											{	/* Ast/toccur.scm 178 */
												obj_t BgL_method3289z00_1966;

												{	/* Ast/toccur.scm 178 */
													BgL_objectz00_bglt BgL_objz00_1967;

													BgL_objz00_1967 =
														(BgL_objectz00_bglt) (BgL_nodez00_1965);
													{	/* Ast/toccur.scm 178 */
														long BgL_objzd2classzd2numz00_1968;

														BgL_objzd2classzd2numz00_1968 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1967);
														{	/* Ast/toccur.scm 178 */
															obj_t BgL_arg2643z00_1969;

															BgL_arg2643z00_1969 =
																PROCEDURE_REF
																(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
																(int) (((long) 1)));
															{	/* Ast/toccur.scm 178 */
																obj_t BgL_arrayz00_1971;

																int BgL_offsetz00_1972;

																BgL_arrayz00_1971 = BgL_arg2643z00_1969;
																BgL_offsetz00_1972 =
																	(int) (BgL_objzd2classzd2numz00_1968);
																{	/* Ast/toccur.scm 178 */
																	long BgL_offsetz00_1973;

																	BgL_offsetz00_1973 =
																		((long) (BgL_offsetz00_1972) - OBJECT_TYPE);
																	{	/* Ast/toccur.scm 178 */
																		long BgL_modz00_1974;

																		{	/* Ast/toccur.scm 178 */
																			int BgL_arg2645z00_1975;

																			BgL_arg2645z00_1975 = (int) (((long) 16));
																			{	/* Ast/toccur.scm 178 */
																				long BgL_auxz00_2633;

																				BgL_auxz00_2633 =
																					(long) (BgL_arg2645z00_1975);
																				BgL_modz00_1974 =
																					(BgL_offsetz00_1973 /
																					BgL_auxz00_2633);
																		}}
																		{	/* Ast/toccur.scm 178 */
																			long BgL_restz00_1976;

																			{	/* Ast/toccur.scm 178 */
																				int BgL_arg2644z00_1977;

																				BgL_arg2644z00_1977 =
																					(int) (((long) 16));
																				{	/* Ast/toccur.scm 178 */
																					long BgL_auxz00_2637;

																					BgL_auxz00_2637 =
																						(long) (BgL_arg2644z00_1977);
																					BgL_restz00_1976 =
																						(BgL_offsetz00_1973 %
																						BgL_auxz00_2637);
																			}}
																			{	/* Ast/toccur.scm 178 */

																				BgL_method3289z00_1966 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1971,
																						(int) (BgL_modz00_1974)),
																					(int) (BgL_restz00_1976));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method3289z00_1966)
													(BgL_method3289z00_1966, (obj_t) (BgL_nodez00_1965),
													BEOA);
								}}}}
								{
									obj_t BgL_l3282z00_2647;

									BgL_l3282z00_2647 = CDR(BgL_l3282z00_1329);
									BgL_l3282z00_1329 = BgL_l3282z00_2647;
									goto BgL_zc3anonymousza33442ze3z83_1330;
								}
							}
						else
							{	/* Ast/toccur.scm 175 */
								((bool_t) 1);
							}
					}
				}
				{	/* Ast/toccur.scm 180 */
					BgL_nodez00_bglt BgL_arg3447z00_1338;

					BgL_arg3447z00_1338 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1323))->BgL_bodyz00);
					{	/* Ast/toccur.scm 180 */
						obj_t BgL_method3289z00_1994;

						{	/* Ast/toccur.scm 180 */
							BgL_objectz00_bglt BgL_objz00_1995;

							BgL_objz00_1995 = (BgL_objectz00_bglt) (BgL_arg3447z00_1338);
							{	/* Ast/toccur.scm 180 */
								long BgL_objzd2classzd2numz00_1996;

								BgL_objzd2classzd2numz00_1996 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1995);
								{	/* Ast/toccur.scm 180 */
									obj_t BgL_arg2643z00_1997;

									BgL_arg2643z00_1997 =
										PROCEDURE_REF
										(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
										(int) (((long) 1)));
									{	/* Ast/toccur.scm 180 */
										obj_t BgL_arrayz00_1999;

										int BgL_offsetz00_2000;

										BgL_arrayz00_1999 = BgL_arg2643z00_1997;
										BgL_offsetz00_2000 = (int) (BgL_objzd2classzd2numz00_1996);
										{	/* Ast/toccur.scm 180 */
											long BgL_offsetz00_2001;

											BgL_offsetz00_2001 =
												((long) (BgL_offsetz00_2000) - OBJECT_TYPE);
											{	/* Ast/toccur.scm 180 */
												long BgL_modz00_2002;

												{	/* Ast/toccur.scm 180 */
													int BgL_arg2645z00_2003;

													BgL_arg2645z00_2003 = (int) (((long) 16));
													{	/* Ast/toccur.scm 180 */
														long BgL_auxz00_2658;

														BgL_auxz00_2658 = (long) (BgL_arg2645z00_2003);
														BgL_modz00_2002 =
															(BgL_offsetz00_2001 / BgL_auxz00_2658);
												}}
												{	/* Ast/toccur.scm 180 */
													long BgL_restz00_2004;

													{	/* Ast/toccur.scm 180 */
														int BgL_arg2644z00_2005;

														BgL_arg2644z00_2005 = (int) (((long) 16));
														{	/* Ast/toccur.scm 180 */
															long BgL_auxz00_2662;

															BgL_auxz00_2662 = (long) (BgL_arg2644z00_2005);
															BgL_restz00_2004 =
																(BgL_offsetz00_2001 % BgL_auxz00_2662);
													}}
													{	/* Ast/toccur.scm 180 */

														BgL_method3289z00_1994 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1999,
																(int) (BgL_modz00_2002)),
															(int) (BgL_restz00_2004));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3289z00_1994) (BgL_method3289z00_1994,
							(obj_t) (BgL_arg3447z00_1338), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-let-fun3313 */
	obj_t BGl_occurzd2nodez12zd2letzd2fun3313zc0zzast_typezd2occurzd2(obj_t
		BgL_envz00_2247, obj_t BgL_nodez00_2248)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 165 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1308;

				BgL_nodez00_1308 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2248);
				{	/* Ast/toccur.scm 167 */
					obj_t BgL_g3281z00_1312;

					BgL_g3281z00_1312 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1308))->BgL_localsz00);
					{
						obj_t BgL_l3279z00_1314;

						BgL_l3279z00_1314 = BgL_g3281z00_1312;
					BgL_zc3anonymousza33436ze3z83_1315:
						if (PAIRP(BgL_l3279z00_1314))
							{	/* Ast/toccur.scm 167 */
								BGl_typezd2incrementzd2sfunz12z12zzast_typezd2occurzd2(CAR
									(BgL_l3279z00_1314));
								{
									obj_t BgL_l3279z00_2678;

									BgL_l3279z00_2678 = CDR(BgL_l3279z00_1314);
									BgL_l3279z00_1314 = BgL_l3279z00_2678;
									goto BgL_zc3anonymousza33436ze3z83_1315;
								}
							}
						else
							{	/* Ast/toccur.scm 167 */
								((bool_t) 1);
							}
					}
				}
				{	/* Ast/toccur.scm 168 */
					BgL_nodez00_bglt BgL_arg3440z00_1320;

					BgL_arg3440z00_1320 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1308))->BgL_bodyz00);
					{	/* Ast/toccur.scm 168 */
						obj_t BgL_method3289z00_1934;

						{	/* Ast/toccur.scm 168 */
							BgL_objectz00_bglt BgL_objz00_1935;

							BgL_objz00_1935 = (BgL_objectz00_bglt) (BgL_arg3440z00_1320);
							{	/* Ast/toccur.scm 168 */
								long BgL_objzd2classzd2numz00_1936;

								BgL_objzd2classzd2numz00_1936 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1935);
								{	/* Ast/toccur.scm 168 */
									obj_t BgL_arg2643z00_1937;

									BgL_arg2643z00_1937 =
										PROCEDURE_REF
										(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
										(int) (((long) 1)));
									{	/* Ast/toccur.scm 168 */
										obj_t BgL_arrayz00_1939;

										int BgL_offsetz00_1940;

										BgL_arrayz00_1939 = BgL_arg2643z00_1937;
										BgL_offsetz00_1940 = (int) (BgL_objzd2classzd2numz00_1936);
										{	/* Ast/toccur.scm 168 */
											long BgL_offsetz00_1941;

											BgL_offsetz00_1941 =
												((long) (BgL_offsetz00_1940) - OBJECT_TYPE);
											{	/* Ast/toccur.scm 168 */
												long BgL_modz00_1942;

												{	/* Ast/toccur.scm 168 */
													int BgL_arg2645z00_1943;

													BgL_arg2645z00_1943 = (int) (((long) 16));
													{	/* Ast/toccur.scm 168 */
														long BgL_auxz00_2689;

														BgL_auxz00_2689 = (long) (BgL_arg2645z00_1943);
														BgL_modz00_1942 =
															(BgL_offsetz00_1941 / BgL_auxz00_2689);
												}}
												{	/* Ast/toccur.scm 168 */
													long BgL_restz00_1944;

													{	/* Ast/toccur.scm 168 */
														int BgL_arg2644z00_1945;

														BgL_arg2644z00_1945 = (int) (((long) 16));
														{	/* Ast/toccur.scm 168 */
															long BgL_auxz00_2693;

															BgL_auxz00_2693 = (long) (BgL_arg2644z00_1945);
															BgL_restz00_1944 =
																(BgL_offsetz00_1941 % BgL_auxz00_2693);
													}}
													{	/* Ast/toccur.scm 168 */

														BgL_method3289z00_1934 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1939,
																(int) (BgL_modz00_1942)),
															(int) (BgL_restz00_1944));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3289z00_1934) (BgL_method3289z00_1934,
							(obj_t) (BgL_arg3440z00_1320), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-select3311 */
	obj_t BGl_occurzd2nodez12zd2select3311z12zzast_typezd2occurzd2(obj_t
		BgL_envz00_2249, obj_t BgL_nodez00_2250)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 155 */
			{
				BgL_selectz00_bglt BgL_nodez00_1292;

				{	/* Ast/toccur.scm 156 */
					bool_t BgL_auxz00_2704;

					BgL_nodez00_1292 = (BgL_selectz00_bglt) (BgL_nodez00_2250);
					{	/* Ast/toccur.scm 157 */
						BgL_nodez00_bglt BgL_arg3430z00_1296;

						BgL_arg3430z00_1296 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1292))->BgL_testz00);
						{	/* Ast/toccur.scm 157 */
							obj_t BgL_method3289z00_1872;

							{	/* Ast/toccur.scm 157 */
								BgL_objectz00_bglt BgL_objz00_1873;

								BgL_objz00_1873 = (BgL_objectz00_bglt) (BgL_arg3430z00_1296);
								{	/* Ast/toccur.scm 157 */
									long BgL_objzd2classzd2numz00_1874;

									BgL_objzd2classzd2numz00_1874 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1873);
									{	/* Ast/toccur.scm 157 */
										obj_t BgL_arg2643z00_1875;

										BgL_arg2643z00_1875 =
											PROCEDURE_REF
											(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
											(int) (((long) 1)));
										{	/* Ast/toccur.scm 157 */
											obj_t BgL_arrayz00_1877;

											int BgL_offsetz00_1878;

											BgL_arrayz00_1877 = BgL_arg2643z00_1875;
											BgL_offsetz00_1878 =
												(int) (BgL_objzd2classzd2numz00_1874);
											{	/* Ast/toccur.scm 157 */
												long BgL_offsetz00_1879;

												BgL_offsetz00_1879 =
													((long) (BgL_offsetz00_1878) - OBJECT_TYPE);
												{	/* Ast/toccur.scm 157 */
													long BgL_modz00_1880;

													{	/* Ast/toccur.scm 157 */
														int BgL_arg2645z00_1881;

														BgL_arg2645z00_1881 = (int) (((long) 16));
														{	/* Ast/toccur.scm 157 */
															long BgL_auxz00_2714;

															BgL_auxz00_2714 = (long) (BgL_arg2645z00_1881);
															BgL_modz00_1880 =
																(BgL_offsetz00_1879 / BgL_auxz00_2714);
													}}
													{	/* Ast/toccur.scm 157 */
														long BgL_restz00_1882;

														{	/* Ast/toccur.scm 157 */
															int BgL_arg2644z00_1883;

															BgL_arg2644z00_1883 = (int) (((long) 16));
															{	/* Ast/toccur.scm 157 */
																long BgL_auxz00_2718;

																BgL_auxz00_2718 = (long) (BgL_arg2644z00_1883);
																BgL_restz00_1882 =
																	(BgL_offsetz00_1879 % BgL_auxz00_2718);
														}}
														{	/* Ast/toccur.scm 157 */

															BgL_method3289z00_1872 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1877,
																	(int) (BgL_modz00_1880)),
																(int) (BgL_restz00_1882));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3289z00_1872) (BgL_method3289z00_1872,
								(obj_t) (BgL_arg3430z00_1296), BEOA);
					}}
					{	/* Ast/toccur.scm 158 */
						obj_t BgL_g3278z00_1297;

						BgL_g3278z00_1297 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1292))->BgL_clausesz00);
						{
							obj_t BgL_l3276z00_1299;

							BgL_l3276z00_1299 = BgL_g3278z00_1297;
						BgL_zc3anonymousza33431ze3z83_1300:
							if (PAIRP(BgL_l3276z00_1299))
								{	/* Ast/toccur.scm 158 */
									{	/* Ast/toccur.scm 159 */
										obj_t BgL_clausez00_1302;

										BgL_clausez00_1302 = CAR(BgL_l3276z00_1299);
										{	/* Ast/toccur.scm 159 */
											obj_t BgL_arg3433z00_1303;

											BgL_arg3433z00_1303 = CDR(BgL_clausez00_1302);
											{	/* Ast/toccur.scm 159 */
												BgL_nodez00_bglt BgL_nodez00_1901;

												BgL_nodez00_1901 =
													(BgL_nodez00_bglt) (BgL_arg3433z00_1303);
												{	/* Ast/toccur.scm 159 */
													obj_t BgL_method3289z00_1902;

													{	/* Ast/toccur.scm 159 */
														BgL_objectz00_bglt BgL_objz00_1903;

														BgL_objz00_1903 =
															(BgL_objectz00_bglt) (BgL_nodez00_1901);
														{	/* Ast/toccur.scm 159 */
															long BgL_objzd2classzd2numz00_1904;

															BgL_objzd2classzd2numz00_1904 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_1903);
															{	/* Ast/toccur.scm 159 */
																obj_t BgL_arg2643z00_1905;

																BgL_arg2643z00_1905 =
																	PROCEDURE_REF
																	(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
																	(int) (((long) 1)));
																{	/* Ast/toccur.scm 159 */
																	obj_t BgL_arrayz00_1907;

																	int BgL_offsetz00_1908;

																	BgL_arrayz00_1907 = BgL_arg2643z00_1905;
																	BgL_offsetz00_1908 =
																		(int) (BgL_objzd2classzd2numz00_1904);
																	{	/* Ast/toccur.scm 159 */
																		long BgL_offsetz00_1909;

																		BgL_offsetz00_1909 =
																			(
																			(long) (BgL_offsetz00_1908) -
																			OBJECT_TYPE);
																		{	/* Ast/toccur.scm 159 */
																			long BgL_modz00_1910;

																			{	/* Ast/toccur.scm 159 */
																				int BgL_arg2645z00_1911;

																				BgL_arg2645z00_1911 =
																					(int) (((long) 16));
																				{	/* Ast/toccur.scm 159 */
																					long BgL_auxz00_2742;

																					BgL_auxz00_2742 =
																						(long) (BgL_arg2645z00_1911);
																					BgL_modz00_1910 =
																						(BgL_offsetz00_1909 /
																						BgL_auxz00_2742);
																			}}
																			{	/* Ast/toccur.scm 159 */
																				long BgL_restz00_1912;

																				{	/* Ast/toccur.scm 159 */
																					int BgL_arg2644z00_1913;

																					BgL_arg2644z00_1913 =
																						(int) (((long) 16));
																					{	/* Ast/toccur.scm 159 */
																						long BgL_auxz00_2746;

																						BgL_auxz00_2746 =
																							(long) (BgL_arg2644z00_1913);
																						BgL_restz00_1912 =
																							(BgL_offsetz00_1909 %
																							BgL_auxz00_2746);
																				}}
																				{	/* Ast/toccur.scm 159 */

																					BgL_method3289z00_1902 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_1907,
																							(int) (BgL_modz00_1910)),
																						(int) (BgL_restz00_1912));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method3289z00_1902)
														(BgL_method3289z00_1902, (obj_t) (BgL_nodez00_1901),
														BEOA);
									}}}}
									{
										obj_t BgL_l3276z00_2756;

										BgL_l3276z00_2756 = CDR(BgL_l3276z00_1299);
										BgL_l3276z00_1299 = BgL_l3276z00_2756;
										goto BgL_zc3anonymousza33431ze3z83_1300;
									}
								}
							else
								{	/* Ast/toccur.scm 158 */
									BgL_auxz00_2704 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_2704);
				}
			}
		}
	}



/* occur-node!-fail3309 */
	obj_t BGl_occurzd2nodez12zd2fail3309z12zzast_typezd2occurzd2(obj_t
		BgL_envz00_2251, obj_t BgL_nodez00_2252)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 146 */
			{
				BgL_failz00_bglt BgL_nodez00_1283;

				BgL_nodez00_1283 = (BgL_failz00_bglt) (BgL_nodez00_2252);
				{	/* Ast/toccur.scm 148 */
					BgL_nodez00_bglt BgL_arg3424z00_1287;

					BgL_arg3424z00_1287 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1283))->BgL_procz00);
					{	/* Ast/toccur.scm 148 */
						obj_t BgL_method3289z00_1791;

						{	/* Ast/toccur.scm 148 */
							BgL_objectz00_bglt BgL_objz00_1792;

							BgL_objz00_1792 = (BgL_objectz00_bglt) (BgL_arg3424z00_1287);
							{	/* Ast/toccur.scm 148 */
								long BgL_objzd2classzd2numz00_1793;

								BgL_objzd2classzd2numz00_1793 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1792);
								{	/* Ast/toccur.scm 148 */
									obj_t BgL_arg2643z00_1794;

									BgL_arg2643z00_1794 =
										PROCEDURE_REF
										(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
										(int) (((long) 1)));
									{	/* Ast/toccur.scm 148 */
										obj_t BgL_arrayz00_1796;

										int BgL_offsetz00_1797;

										BgL_arrayz00_1796 = BgL_arg2643z00_1794;
										BgL_offsetz00_1797 = (int) (BgL_objzd2classzd2numz00_1793);
										{	/* Ast/toccur.scm 148 */
											long BgL_offsetz00_1798;

											BgL_offsetz00_1798 =
												((long) (BgL_offsetz00_1797) - OBJECT_TYPE);
											{	/* Ast/toccur.scm 148 */
												long BgL_modz00_1799;

												{	/* Ast/toccur.scm 148 */
													int BgL_arg2645z00_1800;

													BgL_arg2645z00_1800 = (int) (((long) 16));
													{	/* Ast/toccur.scm 148 */
														long BgL_auxz00_2769;

														BgL_auxz00_2769 = (long) (BgL_arg2645z00_1800);
														BgL_modz00_1799 =
															(BgL_offsetz00_1798 / BgL_auxz00_2769);
												}}
												{	/* Ast/toccur.scm 148 */
													long BgL_restz00_1801;

													{	/* Ast/toccur.scm 148 */
														int BgL_arg2644z00_1802;

														BgL_arg2644z00_1802 = (int) (((long) 16));
														{	/* Ast/toccur.scm 148 */
															long BgL_auxz00_2773;

															BgL_auxz00_2773 = (long) (BgL_arg2644z00_1802);
															BgL_restz00_1801 =
																(BgL_offsetz00_1798 % BgL_auxz00_2773);
													}}
													{	/* Ast/toccur.scm 148 */

														BgL_method3289z00_1791 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1796,
																(int) (BgL_modz00_1799)),
															(int) (BgL_restz00_1801));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3289z00_1791) (BgL_method3289z00_1791,
							(obj_t) (BgL_arg3424z00_1287), BEOA);
				}}
				{	/* Ast/toccur.scm 149 */
					BgL_nodez00_bglt BgL_arg3425z00_1288;

					BgL_arg3425z00_1288 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1283))->BgL_msgz00);
					{	/* Ast/toccur.scm 149 */
						obj_t BgL_method3289z00_1818;

						{	/* Ast/toccur.scm 149 */
							BgL_objectz00_bglt BgL_objz00_1819;

							BgL_objz00_1819 = (BgL_objectz00_bglt) (BgL_arg3425z00_1288);
							{	/* Ast/toccur.scm 149 */
								long BgL_objzd2classzd2numz00_1820;

								BgL_objzd2classzd2numz00_1820 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1819);
								{	/* Ast/toccur.scm 149 */
									obj_t BgL_arg2643z00_1821;

									BgL_arg2643z00_1821 =
										PROCEDURE_REF
										(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
										(int) (((long) 1)));
									{	/* Ast/toccur.scm 149 */
										obj_t BgL_arrayz00_1823;

										int BgL_offsetz00_1824;

										BgL_arrayz00_1823 = BgL_arg2643z00_1821;
										BgL_offsetz00_1824 = (int) (BgL_objzd2classzd2numz00_1820);
										{	/* Ast/toccur.scm 149 */
											long BgL_offsetz00_1825;

											BgL_offsetz00_1825 =
												((long) (BgL_offsetz00_1824) - OBJECT_TYPE);
											{	/* Ast/toccur.scm 149 */
												long BgL_modz00_1826;

												{	/* Ast/toccur.scm 149 */
													int BgL_arg2645z00_1827;

													BgL_arg2645z00_1827 = (int) (((long) 16));
													{	/* Ast/toccur.scm 149 */
														long BgL_auxz00_2792;

														BgL_auxz00_2792 = (long) (BgL_arg2645z00_1827);
														BgL_modz00_1826 =
															(BgL_offsetz00_1825 / BgL_auxz00_2792);
												}}
												{	/* Ast/toccur.scm 149 */
													long BgL_restz00_1828;

													{	/* Ast/toccur.scm 149 */
														int BgL_arg2644z00_1829;

														BgL_arg2644z00_1829 = (int) (((long) 16));
														{	/* Ast/toccur.scm 149 */
															long BgL_auxz00_2796;

															BgL_auxz00_2796 = (long) (BgL_arg2644z00_1829);
															BgL_restz00_1828 =
																(BgL_offsetz00_1825 % BgL_auxz00_2796);
													}}
													{	/* Ast/toccur.scm 149 */

														BgL_method3289z00_1818 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1823,
																(int) (BgL_modz00_1826)),
															(int) (BgL_restz00_1828));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3289z00_1818) (BgL_method3289z00_1818,
							(obj_t) (BgL_arg3425z00_1288), BEOA);
				}}
				{	/* Ast/toccur.scm 150 */
					BgL_nodez00_bglt BgL_arg3426z00_1289;

					BgL_arg3426z00_1289 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1283))->BgL_objz00);
					{	/* Ast/toccur.scm 150 */
						obj_t BgL_method3289z00_1845;

						{	/* Ast/toccur.scm 150 */
							BgL_objectz00_bglt BgL_objz00_1846;

							BgL_objz00_1846 = (BgL_objectz00_bglt) (BgL_arg3426z00_1289);
							{	/* Ast/toccur.scm 150 */
								long BgL_objzd2classzd2numz00_1847;

								BgL_objzd2classzd2numz00_1847 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1846);
								{	/* Ast/toccur.scm 150 */
									obj_t BgL_arg2643z00_1848;

									BgL_arg2643z00_1848 =
										PROCEDURE_REF
										(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
										(int) (((long) 1)));
									{	/* Ast/toccur.scm 150 */
										obj_t BgL_arrayz00_1850;

										int BgL_offsetz00_1851;

										BgL_arrayz00_1850 = BgL_arg2643z00_1848;
										BgL_offsetz00_1851 = (int) (BgL_objzd2classzd2numz00_1847);
										{	/* Ast/toccur.scm 150 */
											long BgL_offsetz00_1852;

											BgL_offsetz00_1852 =
												((long) (BgL_offsetz00_1851) - OBJECT_TYPE);
											{	/* Ast/toccur.scm 150 */
												long BgL_modz00_1853;

												{	/* Ast/toccur.scm 150 */
													int BgL_arg2645z00_1854;

													BgL_arg2645z00_1854 = (int) (((long) 16));
													{	/* Ast/toccur.scm 150 */
														long BgL_auxz00_2815;

														BgL_auxz00_2815 = (long) (BgL_arg2645z00_1854);
														BgL_modz00_1853 =
															(BgL_offsetz00_1852 / BgL_auxz00_2815);
												}}
												{	/* Ast/toccur.scm 150 */
													long BgL_restz00_1855;

													{	/* Ast/toccur.scm 150 */
														int BgL_arg2644z00_1856;

														BgL_arg2644z00_1856 = (int) (((long) 16));
														{	/* Ast/toccur.scm 150 */
															long BgL_auxz00_2819;

															BgL_auxz00_2819 = (long) (BgL_arg2644z00_1856);
															BgL_restz00_1855 =
																(BgL_offsetz00_1852 % BgL_auxz00_2819);
													}}
													{	/* Ast/toccur.scm 150 */

														BgL_method3289z00_1845 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1850,
																(int) (BgL_modz00_1853)),
															(int) (BgL_restz00_1855));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3289z00_1845) (BgL_method3289z00_1845,
							(obj_t) (BgL_arg3426z00_1289), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-conditio3307 */
	obj_t BGl_occurzd2nodez12zd2conditio3307z12zzast_typezd2occurzd2(obj_t
		BgL_envz00_2253, obj_t BgL_nodez00_2254)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 137 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1274;

				BgL_nodez00_1274 = (BgL_conditionalz00_bglt) (BgL_nodez00_2254);
				{	/* Ast/toccur.scm 139 */
					BgL_nodez00_bglt BgL_arg3420z00_1278;

					BgL_arg3420z00_1278 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1274))->BgL_testz00);
					{	/* Ast/toccur.scm 139 */
						obj_t BgL_method3289z00_1710;

						{	/* Ast/toccur.scm 139 */
							BgL_objectz00_bglt BgL_objz00_1711;

							BgL_objz00_1711 = (BgL_objectz00_bglt) (BgL_arg3420z00_1278);
							{	/* Ast/toccur.scm 139 */
								long BgL_objzd2classzd2numz00_1712;

								BgL_objzd2classzd2numz00_1712 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1711);
								{	/* Ast/toccur.scm 139 */
									obj_t BgL_arg2643z00_1713;

									BgL_arg2643z00_1713 =
										PROCEDURE_REF
										(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
										(int) (((long) 1)));
									{	/* Ast/toccur.scm 139 */
										obj_t BgL_arrayz00_1715;

										int BgL_offsetz00_1716;

										BgL_arrayz00_1715 = BgL_arg2643z00_1713;
										BgL_offsetz00_1716 = (int) (BgL_objzd2classzd2numz00_1712);
										{	/* Ast/toccur.scm 139 */
											long BgL_offsetz00_1717;

											BgL_offsetz00_1717 =
												((long) (BgL_offsetz00_1716) - OBJECT_TYPE);
											{	/* Ast/toccur.scm 139 */
												long BgL_modz00_1718;

												{	/* Ast/toccur.scm 139 */
													int BgL_arg2645z00_1719;

													BgL_arg2645z00_1719 = (int) (((long) 16));
													{	/* Ast/toccur.scm 139 */
														long BgL_auxz00_2839;

														BgL_auxz00_2839 = (long) (BgL_arg2645z00_1719);
														BgL_modz00_1718 =
															(BgL_offsetz00_1717 / BgL_auxz00_2839);
												}}
												{	/* Ast/toccur.scm 139 */
													long BgL_restz00_1720;

													{	/* Ast/toccur.scm 139 */
														int BgL_arg2644z00_1721;

														BgL_arg2644z00_1721 = (int) (((long) 16));
														{	/* Ast/toccur.scm 139 */
															long BgL_auxz00_2843;

															BgL_auxz00_2843 = (long) (BgL_arg2644z00_1721);
															BgL_restz00_1720 =
																(BgL_offsetz00_1717 % BgL_auxz00_2843);
													}}
													{	/* Ast/toccur.scm 139 */

														BgL_method3289z00_1710 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1715,
																(int) (BgL_modz00_1718)),
															(int) (BgL_restz00_1720));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3289z00_1710) (BgL_method3289z00_1710,
							(obj_t) (BgL_arg3420z00_1278), BEOA);
				}}
				{	/* Ast/toccur.scm 140 */
					BgL_nodez00_bglt BgL_arg3421z00_1279;

					BgL_arg3421z00_1279 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1274))->BgL_truez00);
					{	/* Ast/toccur.scm 140 */
						obj_t BgL_method3289z00_1737;

						{	/* Ast/toccur.scm 140 */
							BgL_objectz00_bglt BgL_objz00_1738;

							BgL_objz00_1738 = (BgL_objectz00_bglt) (BgL_arg3421z00_1279);
							{	/* Ast/toccur.scm 140 */
								long BgL_objzd2classzd2numz00_1739;

								BgL_objzd2classzd2numz00_1739 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1738);
								{	/* Ast/toccur.scm 140 */
									obj_t BgL_arg2643z00_1740;

									BgL_arg2643z00_1740 =
										PROCEDURE_REF
										(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
										(int) (((long) 1)));
									{	/* Ast/toccur.scm 140 */
										obj_t BgL_arrayz00_1742;

										int BgL_offsetz00_1743;

										BgL_arrayz00_1742 = BgL_arg2643z00_1740;
										BgL_offsetz00_1743 = (int) (BgL_objzd2classzd2numz00_1739);
										{	/* Ast/toccur.scm 140 */
											long BgL_offsetz00_1744;

											BgL_offsetz00_1744 =
												((long) (BgL_offsetz00_1743) - OBJECT_TYPE);
											{	/* Ast/toccur.scm 140 */
												long BgL_modz00_1745;

												{	/* Ast/toccur.scm 140 */
													int BgL_arg2645z00_1746;

													BgL_arg2645z00_1746 = (int) (((long) 16));
													{	/* Ast/toccur.scm 140 */
														long BgL_auxz00_2862;

														BgL_auxz00_2862 = (long) (BgL_arg2645z00_1746);
														BgL_modz00_1745 =
															(BgL_offsetz00_1744 / BgL_auxz00_2862);
												}}
												{	/* Ast/toccur.scm 140 */
													long BgL_restz00_1747;

													{	/* Ast/toccur.scm 140 */
														int BgL_arg2644z00_1748;

														BgL_arg2644z00_1748 = (int) (((long) 16));
														{	/* Ast/toccur.scm 140 */
															long BgL_auxz00_2866;

															BgL_auxz00_2866 = (long) (BgL_arg2644z00_1748);
															BgL_restz00_1747 =
																(BgL_offsetz00_1744 % BgL_auxz00_2866);
													}}
													{	/* Ast/toccur.scm 140 */

														BgL_method3289z00_1737 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1742,
																(int) (BgL_modz00_1745)),
															(int) (BgL_restz00_1747));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3289z00_1737) (BgL_method3289z00_1737,
							(obj_t) (BgL_arg3421z00_1279), BEOA);
				}}
				{	/* Ast/toccur.scm 141 */
					BgL_nodez00_bglt BgL_arg3422z00_1280;

					BgL_arg3422z00_1280 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1274))->BgL_falsez00);
					{	/* Ast/toccur.scm 141 */
						obj_t BgL_method3289z00_1764;

						{	/* Ast/toccur.scm 141 */
							BgL_objectz00_bglt BgL_objz00_1765;

							BgL_objz00_1765 = (BgL_objectz00_bglt) (BgL_arg3422z00_1280);
							{	/* Ast/toccur.scm 141 */
								long BgL_objzd2classzd2numz00_1766;

								BgL_objzd2classzd2numz00_1766 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1765);
								{	/* Ast/toccur.scm 141 */
									obj_t BgL_arg2643z00_1767;

									BgL_arg2643z00_1767 =
										PROCEDURE_REF
										(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
										(int) (((long) 1)));
									{	/* Ast/toccur.scm 141 */
										obj_t BgL_arrayz00_1769;

										int BgL_offsetz00_1770;

										BgL_arrayz00_1769 = BgL_arg2643z00_1767;
										BgL_offsetz00_1770 = (int) (BgL_objzd2classzd2numz00_1766);
										{	/* Ast/toccur.scm 141 */
											long BgL_offsetz00_1771;

											BgL_offsetz00_1771 =
												((long) (BgL_offsetz00_1770) - OBJECT_TYPE);
											{	/* Ast/toccur.scm 141 */
												long BgL_modz00_1772;

												{	/* Ast/toccur.scm 141 */
													int BgL_arg2645z00_1773;

													BgL_arg2645z00_1773 = (int) (((long) 16));
													{	/* Ast/toccur.scm 141 */
														long BgL_auxz00_2885;

														BgL_auxz00_2885 = (long) (BgL_arg2645z00_1773);
														BgL_modz00_1772 =
															(BgL_offsetz00_1771 / BgL_auxz00_2885);
												}}
												{	/* Ast/toccur.scm 141 */
													long BgL_restz00_1774;

													{	/* Ast/toccur.scm 141 */
														int BgL_arg2644z00_1775;

														BgL_arg2644z00_1775 = (int) (((long) 16));
														{	/* Ast/toccur.scm 141 */
															long BgL_auxz00_2889;

															BgL_auxz00_2889 = (long) (BgL_arg2644z00_1775);
															BgL_restz00_1774 =
																(BgL_offsetz00_1771 % BgL_auxz00_2889);
													}}
													{	/* Ast/toccur.scm 141 */

														BgL_method3289z00_1764 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1769,
																(int) (BgL_modz00_1772)),
															(int) (BgL_restz00_1774));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3289z00_1764) (BgL_method3289z00_1764,
							(obj_t) (BgL_arg3422z00_1280), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-setq3305 */
	obj_t BGl_occurzd2nodez12zd2setq3305z12zzast_typezd2occurzd2(obj_t
		BgL_envz00_2255, obj_t BgL_nodez00_2256)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 129 */
			{
				BgL_setqz00_bglt BgL_nodez00_1266;

				BgL_nodez00_1266 = (BgL_setqz00_bglt) (BgL_nodez00_2256);
				{	/* Ast/toccur.scm 131 */
					BgL_varz00_bglt BgL_arg3417z00_1270;

					BgL_arg3417z00_1270 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1266))->BgL_varz00);
					{	/* Ast/toccur.scm 131 */
						BgL_nodez00_bglt BgL_nodez00_1655;

						BgL_nodez00_1655 = (BgL_nodez00_bglt) (BgL_arg3417z00_1270);
						{	/* Ast/toccur.scm 131 */
							obj_t BgL_method3289z00_1656;

							{	/* Ast/toccur.scm 131 */
								BgL_objectz00_bglt BgL_objz00_1657;

								BgL_objz00_1657 = (BgL_objectz00_bglt) (BgL_nodez00_1655);
								{	/* Ast/toccur.scm 131 */
									long BgL_objzd2classzd2numz00_1658;

									BgL_objzd2classzd2numz00_1658 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1657);
									{	/* Ast/toccur.scm 131 */
										obj_t BgL_arg2643z00_1659;

										BgL_arg2643z00_1659 =
											PROCEDURE_REF
											(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
											(int) (((long) 1)));
										{	/* Ast/toccur.scm 131 */
											obj_t BgL_arrayz00_1661;

											int BgL_offsetz00_1662;

											BgL_arrayz00_1661 = BgL_arg2643z00_1659;
											BgL_offsetz00_1662 =
												(int) (BgL_objzd2classzd2numz00_1658);
											{	/* Ast/toccur.scm 131 */
												long BgL_offsetz00_1663;

												BgL_offsetz00_1663 =
													((long) (BgL_offsetz00_1662) - OBJECT_TYPE);
												{	/* Ast/toccur.scm 131 */
													long BgL_modz00_1664;

													{	/* Ast/toccur.scm 131 */
														int BgL_arg2645z00_1665;

														BgL_arg2645z00_1665 = (int) (((long) 16));
														{	/* Ast/toccur.scm 131 */
															long BgL_auxz00_2910;

															BgL_auxz00_2910 = (long) (BgL_arg2645z00_1665);
															BgL_modz00_1664 =
																(BgL_offsetz00_1663 / BgL_auxz00_2910);
													}}
													{	/* Ast/toccur.scm 131 */
														long BgL_restz00_1666;

														{	/* Ast/toccur.scm 131 */
															int BgL_arg2644z00_1667;

															BgL_arg2644z00_1667 = (int) (((long) 16));
															{	/* Ast/toccur.scm 131 */
																long BgL_auxz00_2914;

																BgL_auxz00_2914 = (long) (BgL_arg2644z00_1667);
																BgL_restz00_1666 =
																	(BgL_offsetz00_1663 % BgL_auxz00_2914);
														}}
														{	/* Ast/toccur.scm 131 */

															BgL_method3289z00_1656 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1661,
																	(int) (BgL_modz00_1664)),
																(int) (BgL_restz00_1666));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3289z00_1656) (BgL_method3289z00_1656,
								(obj_t) (BgL_nodez00_1655), BEOA);
				}}}
				{	/* Ast/toccur.scm 132 */
					BgL_nodez00_bglt BgL_arg3418z00_1271;

					BgL_arg3418z00_1271 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1266))->BgL_valuez00);
					{	/* Ast/toccur.scm 132 */
						obj_t BgL_method3289z00_1683;

						{	/* Ast/toccur.scm 132 */
							BgL_objectz00_bglt BgL_objz00_1684;

							BgL_objz00_1684 = (BgL_objectz00_bglt) (BgL_arg3418z00_1271);
							{	/* Ast/toccur.scm 132 */
								long BgL_objzd2classzd2numz00_1685;

								BgL_objzd2classzd2numz00_1685 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1684);
								{	/* Ast/toccur.scm 132 */
									obj_t BgL_arg2643z00_1686;

									BgL_arg2643z00_1686 =
										PROCEDURE_REF
										(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
										(int) (((long) 1)));
									{	/* Ast/toccur.scm 132 */
										obj_t BgL_arrayz00_1688;

										int BgL_offsetz00_1689;

										BgL_arrayz00_1688 = BgL_arg2643z00_1686;
										BgL_offsetz00_1689 = (int) (BgL_objzd2classzd2numz00_1685);
										{	/* Ast/toccur.scm 132 */
											long BgL_offsetz00_1690;

											BgL_offsetz00_1690 =
												((long) (BgL_offsetz00_1689) - OBJECT_TYPE);
											{	/* Ast/toccur.scm 132 */
												long BgL_modz00_1691;

												{	/* Ast/toccur.scm 132 */
													int BgL_arg2645z00_1692;

													BgL_arg2645z00_1692 = (int) (((long) 16));
													{	/* Ast/toccur.scm 132 */
														long BgL_auxz00_2933;

														BgL_auxz00_2933 = (long) (BgL_arg2645z00_1692);
														BgL_modz00_1691 =
															(BgL_offsetz00_1690 / BgL_auxz00_2933);
												}}
												{	/* Ast/toccur.scm 132 */
													long BgL_restz00_1693;

													{	/* Ast/toccur.scm 132 */
														int BgL_arg2644z00_1694;

														BgL_arg2644z00_1694 = (int) (((long) 16));
														{	/* Ast/toccur.scm 132 */
															long BgL_auxz00_2937;

															BgL_auxz00_2937 = (long) (BgL_arg2644z00_1694);
															BgL_restz00_1693 =
																(BgL_offsetz00_1690 % BgL_auxz00_2937);
													}}
													{	/* Ast/toccur.scm 132 */

														BgL_method3289z00_1683 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1688,
																(int) (BgL_modz00_1691)),
															(int) (BgL_restz00_1693));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3289z00_1683) (BgL_method3289z00_1683,
							(obj_t) (BgL_arg3418z00_1271), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-cast3303 */
	obj_t BGl_occurzd2nodez12zd2cast3303z12zzast_typezd2occurzd2(obj_t
		BgL_envz00_2257, obj_t BgL_nodez00_2258)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 123 */
			{
				BgL_castz00_bglt BgL_nodez00_1260;

				BgL_nodez00_1260 = (BgL_castz00_bglt) (BgL_nodez00_2258);
				{	/* Ast/toccur.scm 124 */
					BgL_nodez00_bglt BgL_arg3415z00_1626;

					BgL_arg3415z00_1626 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_1260))->BgL_argz00);
					{	/* Ast/toccur.scm 124 */
						obj_t BgL_method3289z00_1629;

						{	/* Ast/toccur.scm 124 */
							BgL_objectz00_bglt BgL_objz00_1630;

							BgL_objz00_1630 = (BgL_objectz00_bglt) (BgL_arg3415z00_1626);
							{	/* Ast/toccur.scm 124 */
								long BgL_objzd2classzd2numz00_1631;

								BgL_objzd2classzd2numz00_1631 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1630);
								{	/* Ast/toccur.scm 124 */
									obj_t BgL_arg2643z00_1632;

									BgL_arg2643z00_1632 =
										PROCEDURE_REF
										(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
										(int) (((long) 1)));
									{	/* Ast/toccur.scm 124 */
										obj_t BgL_arrayz00_1634;

										int BgL_offsetz00_1635;

										BgL_arrayz00_1634 = BgL_arg2643z00_1632;
										BgL_offsetz00_1635 = (int) (BgL_objzd2classzd2numz00_1631);
										{	/* Ast/toccur.scm 124 */
											long BgL_offsetz00_1636;

											BgL_offsetz00_1636 =
												((long) (BgL_offsetz00_1635) - OBJECT_TYPE);
											{	/* Ast/toccur.scm 124 */
												long BgL_modz00_1637;

												{	/* Ast/toccur.scm 124 */
													int BgL_arg2645z00_1638;

													BgL_arg2645z00_1638 = (int) (((long) 16));
													{	/* Ast/toccur.scm 124 */
														long BgL_auxz00_2957;

														BgL_auxz00_2957 = (long) (BgL_arg2645z00_1638);
														BgL_modz00_1637 =
															(BgL_offsetz00_1636 / BgL_auxz00_2957);
												}}
												{	/* Ast/toccur.scm 124 */
													long BgL_restz00_1639;

													{	/* Ast/toccur.scm 124 */
														int BgL_arg2644z00_1640;

														BgL_arg2644z00_1640 = (int) (((long) 16));
														{	/* Ast/toccur.scm 124 */
															long BgL_auxz00_2961;

															BgL_auxz00_2961 = (long) (BgL_arg2644z00_1640);
															BgL_restz00_1639 =
																(BgL_offsetz00_1636 % BgL_auxz00_2961);
													}}
													{	/* Ast/toccur.scm 124 */

														BgL_method3289z00_1629 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1634,
																(int) (BgL_modz00_1637)),
															(int) (BgL_restz00_1639));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3289z00_1629) (BgL_method3289z00_1629,
							(obj_t) (BgL_arg3415z00_1626), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-extern3301 */
	obj_t BGl_occurzd2nodez12zd2extern3301z12zzast_typezd2occurzd2(obj_t
		BgL_envz00_2259, obj_t BgL_nodez00_2260)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 115 */
			{
				BgL_externz00_bglt BgL_nodez00_1253;

				{	/* Ast/toccur.scm 117 */
					bool_t BgL_auxz00_2972;

					BgL_nodez00_1253 = (BgL_externz00_bglt) (BgL_nodez00_2260);
					{	/* Ast/toccur.scm 117 */
						obj_t BgL_nodesz00_1624;

						BgL_nodesz00_1624 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1253))->BgL_exprza2za2);
						BgL_auxz00_2972 =
							BGl_occurzd2nodeza2z12z62zzast_typezd2occurzd2(BgL_nodesz00_1624);
					}
					return BBOOL(BgL_auxz00_2972);
				}
			}
		}
	}



/* occur-node!-funcall3299 */
	obj_t BGl_occurzd2nodez12zd2funcall3299z12zzast_typezd2occurzd2(obj_t
		BgL_envz00_2261, obj_t BgL_nodez00_2262)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 107 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1245;

				{	/* Ast/toccur.scm 108 */
					bool_t BgL_auxz00_2977;

					BgL_nodez00_1245 = (BgL_funcallz00_bglt) (BgL_nodez00_2262);
					{	/* Ast/toccur.scm 109 */
						BgL_nodez00_bglt BgL_arg3411z00_1249;

						BgL_arg3411z00_1249 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1245))->BgL_funz00);
						{	/* Ast/toccur.scm 109 */
							obj_t BgL_method3289z00_1598;

							{	/* Ast/toccur.scm 109 */
								BgL_objectz00_bglt BgL_objz00_1599;

								BgL_objz00_1599 = (BgL_objectz00_bglt) (BgL_arg3411z00_1249);
								{	/* Ast/toccur.scm 109 */
									long BgL_objzd2classzd2numz00_1600;

									BgL_objzd2classzd2numz00_1600 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1599);
									{	/* Ast/toccur.scm 109 */
										obj_t BgL_arg2643z00_1601;

										BgL_arg2643z00_1601 =
											PROCEDURE_REF
											(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
											(int) (((long) 1)));
										{	/* Ast/toccur.scm 109 */
											obj_t BgL_arrayz00_1603;

											int BgL_offsetz00_1604;

											BgL_arrayz00_1603 = BgL_arg2643z00_1601;
											BgL_offsetz00_1604 =
												(int) (BgL_objzd2classzd2numz00_1600);
											{	/* Ast/toccur.scm 109 */
												long BgL_offsetz00_1605;

												BgL_offsetz00_1605 =
													((long) (BgL_offsetz00_1604) - OBJECT_TYPE);
												{	/* Ast/toccur.scm 109 */
													long BgL_modz00_1606;

													{	/* Ast/toccur.scm 109 */
														int BgL_arg2645z00_1607;

														BgL_arg2645z00_1607 = (int) (((long) 16));
														{	/* Ast/toccur.scm 109 */
															long BgL_auxz00_2987;

															BgL_auxz00_2987 = (long) (BgL_arg2645z00_1607);
															BgL_modz00_1606 =
																(BgL_offsetz00_1605 / BgL_auxz00_2987);
													}}
													{	/* Ast/toccur.scm 109 */
														long BgL_restz00_1608;

														{	/* Ast/toccur.scm 109 */
															int BgL_arg2644z00_1609;

															BgL_arg2644z00_1609 = (int) (((long) 16));
															{	/* Ast/toccur.scm 109 */
																long BgL_auxz00_2991;

																BgL_auxz00_2991 = (long) (BgL_arg2644z00_1609);
																BgL_restz00_1608 =
																	(BgL_offsetz00_1605 % BgL_auxz00_2991);
														}}
														{	/* Ast/toccur.scm 109 */

															BgL_method3289z00_1598 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1603,
																	(int) (BgL_modz00_1606)),
																(int) (BgL_restz00_1608));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3289z00_1598) (BgL_method3289z00_1598,
								(obj_t) (BgL_arg3411z00_1249), BEOA);
					}}
					{	/* Ast/toccur.scm 110 */
						obj_t BgL_arg3412z00_1250;

						BgL_arg3412z00_1250 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1245))->BgL_argsz00);
						BgL_auxz00_2977 =
							BGl_occurzd2nodeza2z12z62zzast_typezd2occurzd2
							(BgL_arg3412z00_1250);
					}
					return BBOOL(BgL_auxz00_2977);
				}
			}
		}
	}



/* occur-node!-app-ly3297 */
	obj_t BGl_occurzd2nodez12zd2appzd2ly3297zc0zzast_typezd2occurzd2(obj_t
		BgL_envz00_2263, obj_t BgL_nodez00_2264)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 99 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1237;

				BgL_nodez00_1237 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2264);
				{	/* Ast/toccur.scm 101 */
					BgL_nodez00_bglt BgL_arg3408z00_1241;

					BgL_arg3408z00_1241 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1237))->BgL_funz00);
					{	/* Ast/toccur.scm 101 */
						obj_t BgL_method3289z00_1544;

						{	/* Ast/toccur.scm 101 */
							BgL_objectz00_bglt BgL_objz00_1545;

							BgL_objz00_1545 = (BgL_objectz00_bglt) (BgL_arg3408z00_1241);
							{	/* Ast/toccur.scm 101 */
								long BgL_objzd2classzd2numz00_1546;

								BgL_objzd2classzd2numz00_1546 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1545);
								{	/* Ast/toccur.scm 101 */
									obj_t BgL_arg2643z00_1547;

									BgL_arg2643z00_1547 =
										PROCEDURE_REF
										(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
										(int) (((long) 1)));
									{	/* Ast/toccur.scm 101 */
										obj_t BgL_arrayz00_1549;

										int BgL_offsetz00_1550;

										BgL_arrayz00_1549 = BgL_arg2643z00_1547;
										BgL_offsetz00_1550 = (int) (BgL_objzd2classzd2numz00_1546);
										{	/* Ast/toccur.scm 101 */
											long BgL_offsetz00_1551;

											BgL_offsetz00_1551 =
												((long) (BgL_offsetz00_1550) - OBJECT_TYPE);
											{	/* Ast/toccur.scm 101 */
												long BgL_modz00_1552;

												{	/* Ast/toccur.scm 101 */
													int BgL_arg2645z00_1553;

													BgL_arg2645z00_1553 = (int) (((long) 16));
													{	/* Ast/toccur.scm 101 */
														long BgL_auxz00_3014;

														BgL_auxz00_3014 = (long) (BgL_arg2645z00_1553);
														BgL_modz00_1552 =
															(BgL_offsetz00_1551 / BgL_auxz00_3014);
												}}
												{	/* Ast/toccur.scm 101 */
													long BgL_restz00_1554;

													{	/* Ast/toccur.scm 101 */
														int BgL_arg2644z00_1555;

														BgL_arg2644z00_1555 = (int) (((long) 16));
														{	/* Ast/toccur.scm 101 */
															long BgL_auxz00_3018;

															BgL_auxz00_3018 = (long) (BgL_arg2644z00_1555);
															BgL_restz00_1554 =
																(BgL_offsetz00_1551 % BgL_auxz00_3018);
													}}
													{	/* Ast/toccur.scm 101 */

														BgL_method3289z00_1544 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1549,
																(int) (BgL_modz00_1552)),
															(int) (BgL_restz00_1554));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3289z00_1544) (BgL_method3289z00_1544,
							(obj_t) (BgL_arg3408z00_1241), BEOA);
				}}
				{	/* Ast/toccur.scm 102 */
					BgL_nodez00_bglt BgL_arg3409z00_1242;

					BgL_arg3409z00_1242 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1237))->BgL_argz00);
					{	/* Ast/toccur.scm 102 */
						obj_t BgL_method3289z00_1571;

						{	/* Ast/toccur.scm 102 */
							BgL_objectz00_bglt BgL_objz00_1572;

							BgL_objz00_1572 = (BgL_objectz00_bglt) (BgL_arg3409z00_1242);
							{	/* Ast/toccur.scm 102 */
								long BgL_objzd2classzd2numz00_1573;

								BgL_objzd2classzd2numz00_1573 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1572);
								{	/* Ast/toccur.scm 102 */
									obj_t BgL_arg2643z00_1574;

									BgL_arg2643z00_1574 =
										PROCEDURE_REF
										(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
										(int) (((long) 1)));
									{	/* Ast/toccur.scm 102 */
										obj_t BgL_arrayz00_1576;

										int BgL_offsetz00_1577;

										BgL_arrayz00_1576 = BgL_arg2643z00_1574;
										BgL_offsetz00_1577 = (int) (BgL_objzd2classzd2numz00_1573);
										{	/* Ast/toccur.scm 102 */
											long BgL_offsetz00_1578;

											BgL_offsetz00_1578 =
												((long) (BgL_offsetz00_1577) - OBJECT_TYPE);
											{	/* Ast/toccur.scm 102 */
												long BgL_modz00_1579;

												{	/* Ast/toccur.scm 102 */
													int BgL_arg2645z00_1580;

													BgL_arg2645z00_1580 = (int) (((long) 16));
													{	/* Ast/toccur.scm 102 */
														long BgL_auxz00_3037;

														BgL_auxz00_3037 = (long) (BgL_arg2645z00_1580);
														BgL_modz00_1579 =
															(BgL_offsetz00_1578 / BgL_auxz00_3037);
												}}
												{	/* Ast/toccur.scm 102 */
													long BgL_restz00_1581;

													{	/* Ast/toccur.scm 102 */
														int BgL_arg2644z00_1582;

														BgL_arg2644z00_1582 = (int) (((long) 16));
														{	/* Ast/toccur.scm 102 */
															long BgL_auxz00_3041;

															BgL_auxz00_3041 = (long) (BgL_arg2644z00_1582);
															BgL_restz00_1581 =
																(BgL_offsetz00_1578 % BgL_auxz00_3041);
													}}
													{	/* Ast/toccur.scm 102 */

														BgL_method3289z00_1571 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1576,
																(int) (BgL_modz00_1579)),
															(int) (BgL_restz00_1581));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3289z00_1571) (BgL_method3289z00_1571,
							(obj_t) (BgL_arg3409z00_1242), BEOA);
					}
				}
			}
		}
	}



/* occur-node!-app3295 */
	obj_t BGl_occurzd2nodez12zd2app3295z12zzast_typezd2occurzd2(obj_t
		BgL_envz00_2265, obj_t BgL_nodez00_2266)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 86 */
			{
				BgL_appz00_bglt BgL_nodez00_1216;

				{	/* Ast/toccur.scm 87 */
					bool_t BgL_auxz00_3052;

					BgL_nodez00_1216 = (BgL_appz00_bglt) (BgL_nodez00_2266);
					{	/* Ast/toccur.scm 88 */
						BgL_varz00_bglt BgL_arg3398z00_1220;

						BgL_arg3398z00_1220 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1216))->BgL_funz00);
						{	/* Ast/toccur.scm 88 */
							BgL_nodez00_bglt BgL_nodez00_1506;

							BgL_nodez00_1506 = (BgL_nodez00_bglt) (BgL_arg3398z00_1220);
							{	/* Ast/toccur.scm 88 */
								obj_t BgL_method3289z00_1507;

								{	/* Ast/toccur.scm 88 */
									BgL_objectz00_bglt BgL_objz00_1508;

									BgL_objz00_1508 = (BgL_objectz00_bglt) (BgL_nodez00_1506);
									{	/* Ast/toccur.scm 88 */
										long BgL_objzd2classzd2numz00_1509;

										BgL_objzd2classzd2numz00_1509 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1508);
										{	/* Ast/toccur.scm 88 */
											obj_t BgL_arg2643z00_1510;

											BgL_arg2643z00_1510 =
												PROCEDURE_REF
												(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
												(int) (((long) 1)));
											{	/* Ast/toccur.scm 88 */
												obj_t BgL_arrayz00_1512;

												int BgL_offsetz00_1513;

												BgL_arrayz00_1512 = BgL_arg2643z00_1510;
												BgL_offsetz00_1513 =
													(int) (BgL_objzd2classzd2numz00_1509);
												{	/* Ast/toccur.scm 88 */
													long BgL_offsetz00_1514;

													BgL_offsetz00_1514 =
														((long) (BgL_offsetz00_1513) - OBJECT_TYPE);
													{	/* Ast/toccur.scm 88 */
														long BgL_modz00_1515;

														{	/* Ast/toccur.scm 88 */
															int BgL_arg2645z00_1516;

															BgL_arg2645z00_1516 = (int) (((long) 16));
															{	/* Ast/toccur.scm 88 */
																long BgL_auxz00_3063;

																BgL_auxz00_3063 = (long) (BgL_arg2645z00_1516);
																BgL_modz00_1515 =
																	(BgL_offsetz00_1514 / BgL_auxz00_3063);
														}}
														{	/* Ast/toccur.scm 88 */
															long BgL_restz00_1517;

															{	/* Ast/toccur.scm 88 */
																int BgL_arg2644z00_1518;

																BgL_arg2644z00_1518 = (int) (((long) 16));
																{	/* Ast/toccur.scm 88 */
																	long BgL_auxz00_3067;

																	BgL_auxz00_3067 =
																		(long) (BgL_arg2644z00_1518);
																	BgL_restz00_1517 =
																		(BgL_offsetz00_1514 % BgL_auxz00_3067);
															}}
															{	/* Ast/toccur.scm 88 */

																BgL_method3289z00_1507 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1512,
																		(int) (BgL_modz00_1515)),
																	(int) (BgL_restz00_1517));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method3289z00_1507) (BgL_method3289z00_1507,
									(obj_t) (BgL_nodez00_1506), BEOA);
					}}}
					{	/* Ast/toccur.scm 89 */
						obj_t BgL_arg3399z00_1221;

						BgL_arg3399z00_1221 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1216))->BgL_argsz00);
						BGl_occurzd2nodeza2z12z62zzast_typezd2occurzd2(BgL_arg3399z00_1221);
					}
					{	/* Ast/toccur.scm 90 */
						BgL_variablez00_bglt BgL_varz00_1222;

						{	/* Ast/toccur.scm 90 */
							BgL_varz00_bglt BgL_obj2155z00_1534;

							BgL_obj2155z00_1534 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1216))->BgL_funz00);
							BgL_varz00_1222 =
								(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1534))->
								BgL_variablez00);
						}
						{	/* Ast/toccur.scm 90 */
							BgL_valuez00_bglt BgL_valz00_1223;

							BgL_valz00_1223 =
								(((BgL_variablez00_bglt) CREF(BgL_varz00_1222))->BgL_valuez00);
							{	/* Ast/toccur.scm 91 */

								{	/* Ast/toccur.scm 92 */
									bool_t BgL_testz00_3082;

									{	/* Ast/toccur.scm 92 */
										obj_t BgL_obj2019z00_1536;

										BgL_obj2019z00_1536 = (obj_t) (BgL_valz00_1223);
										BgL_testz00_3082 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj2019z00_1536,
											BGl_cfunz00zzast_varz00);
									}
									if (BgL_testz00_3082)
										{	/* Ast/toccur.scm 92 */
											{	/* Ast/toccur.scm 93 */
												BgL_typez00_bglt BgL_arg3401z00_1225;

												BgL_arg3401z00_1225 =
													(((BgL_variablez00_bglt) CREF(BgL_varz00_1222))->
													BgL_typez00);
												BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
													(BgL_arg3401z00_1225);
											}
											{	/* Ast/toccur.scm 94 */
												obj_t BgL_g3275z00_1226;

												{
													BgL_cfunz00_bglt BgL_auxz00_3087;

													BgL_auxz00_3087 =
														(BgL_cfunz00_bglt) (BgL_valz00_1223);
													BgL_g3275z00_1226 =
														(((BgL_cfunz00_bglt) CREF(BgL_auxz00_3087))->
														BgL_argszd2typezd2);
												}
												{
													obj_t BgL_l3273z00_1228;

													BgL_l3273z00_1228 = BgL_g3275z00_1226;
												BgL_zc3anonymousza33402ze3z83_1229:
													if (PAIRP(BgL_l3273z00_1228))
														{	/* Ast/toccur.scm 94 */
															{	/* Ast/toccur.scm 94 */
																obj_t BgL_arg3404z00_1231;

																BgL_arg3404z00_1231 = CAR(BgL_l3273z00_1228);
																BGl_typezd2occurrencezd2incrementz12z12zztype_typez00
																	((BgL_typez00_bglt) (BgL_arg3404z00_1231));
															}
															{
																obj_t BgL_l3273z00_3095;

																BgL_l3273z00_3095 = CDR(BgL_l3273z00_1228);
																BgL_l3273z00_1228 = BgL_l3273z00_3095;
																goto BgL_zc3anonymousza33402ze3z83_1229;
															}
														}
													else
														{	/* Ast/toccur.scm 94 */
															BgL_auxz00_3052 = ((bool_t) 1);
														}
												}
											}
										}
									else
										{	/* Ast/toccur.scm 92 */
											BgL_auxz00_3052 = ((bool_t) 0);
										}
								}
							}
						}
					}
					return BBOOL(BgL_auxz00_3052);
				}
			}
		}
	}



/* occur-node!-sequence3293 */
	obj_t BGl_occurzd2nodez12zd2sequence3293z12zzast_typezd2occurzd2(obj_t
		BgL_envz00_2267, obj_t BgL_nodez00_2268)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 80 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1210;

				{	/* Ast/toccur.scm 81 */
					bool_t BgL_auxz00_3099;

					BgL_nodez00_1210 = (BgL_sequencez00_bglt) (BgL_nodez00_2268);
					{	/* Ast/toccur.scm 81 */
						obj_t BgL_arg3396z00_1503;

						BgL_arg3396z00_1503 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1210))->BgL_nodesz00);
						BgL_auxz00_3099 =
							BGl_occurzd2nodeza2z12z62zzast_typezd2occurzd2
							(BgL_arg3396z00_1503);
					}
					return BBOOL(BgL_auxz00_3099);
				}
			}
		}
	}



/* occur-node!-var3291 */
	obj_t BGl_occurzd2nodez12zd2var3291z12zzast_typezd2occurzd2(obj_t
		BgL_envz00_2269, obj_t BgL_nodez00_2270)
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 71 */
			{
				BgL_varz00_bglt BgL_nodez00_1199;

				BgL_nodez00_1199 = (BgL_varz00_bglt) (BgL_nodez00_2270);
				{	/* Ast/toccur.scm 72 */
					BgL_variablez00_bglt BgL_vz00_1202;

					BgL_vz00_1202 =
						(((BgL_varz00_bglt) CREF(BgL_nodez00_1199))->BgL_variablez00);
					{	/* Ast/toccur.scm 73 */
						BgL_valuez00_bglt BgL_valuez00_1203;

						BgL_valuez00_1203 =
							(((BgL_variablez00_bglt) CREF(BgL_vz00_1202))->BgL_valuez00);
						{	/* Ast/toccur.scm 74 */
							bool_t BgL_testz00_3106;

							{	/* Ast/toccur.scm 74 */
								bool_t BgL_testz00_3107;

								{	/* Ast/toccur.scm 74 */
									obj_t BgL_obj2049z00_1473;

									BgL_obj2049z00_1473 = (obj_t) (BgL_valuez00_1203);
									BgL_testz00_3107 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj2049z00_1473,
										BGl_scnstz00zzast_varz00);
								}
								if (BgL_testz00_3107)
									{	/* Ast/toccur.scm 74 */
										obj_t BgL_arg3394z00_1207;

										{
											BgL_scnstz00_bglt BgL_auxz00_3110;

											BgL_auxz00_3110 = (BgL_scnstz00_bglt) (BgL_valuez00_1203);
											BgL_arg3394z00_1207 =
												(((BgL_scnstz00_bglt) CREF(BgL_auxz00_3110))->
												BgL_nodez00);
										}
										BgL_testz00_3106 =
											BGl_iszd2azf3z21zz__objectz00(BgL_arg3394z00_1207,
											BGl_nodez00zzast_nodez00);
									}
								else
									{	/* Ast/toccur.scm 74 */
										BgL_testz00_3106 = ((bool_t) 0);
									}
							}
							if (BgL_testz00_3106)
								{	/* Ast/toccur.scm 75 */
									obj_t BgL_arg3392z00_1205;

									{
										BgL_scnstz00_bglt BgL_auxz00_3114;

										BgL_auxz00_3114 = (BgL_scnstz00_bglt) (BgL_valuez00_1203);
										BgL_arg3392z00_1205 =
											(((BgL_scnstz00_bglt) CREF(BgL_auxz00_3114))->
											BgL_nodez00);
									}
									{	/* Ast/toccur.scm 75 */
										BgL_nodez00_bglt BgL_nodez00_1477;

										BgL_nodez00_1477 = (BgL_nodez00_bglt) (BgL_arg3392z00_1205);
										{	/* Ast/toccur.scm 75 */
											obj_t BgL_method3289z00_1478;

											{	/* Ast/toccur.scm 75 */
												BgL_objectz00_bglt BgL_objz00_1479;

												BgL_objz00_1479 =
													(BgL_objectz00_bglt) (BgL_nodez00_1477);
												{	/* Ast/toccur.scm 75 */
													long BgL_objzd2classzd2numz00_1480;

													BgL_objzd2classzd2numz00_1480 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1479);
													{	/* Ast/toccur.scm 75 */
														obj_t BgL_arg2643z00_1481;

														BgL_arg2643z00_1481 =
															PROCEDURE_REF
															(BGl_occurzd2nodez12zd2envz12zzast_typezd2occurzd2,
															(int) (((long) 1)));
														{	/* Ast/toccur.scm 75 */
															obj_t BgL_arrayz00_1483;

															int BgL_offsetz00_1484;

															BgL_arrayz00_1483 = BgL_arg2643z00_1481;
															BgL_offsetz00_1484 =
																(int) (BgL_objzd2classzd2numz00_1480);
															{	/* Ast/toccur.scm 75 */
																long BgL_offsetz00_1485;

																BgL_offsetz00_1485 =
																	((long) (BgL_offsetz00_1484) - OBJECT_TYPE);
																{	/* Ast/toccur.scm 75 */
																	long BgL_modz00_1486;

																	{	/* Ast/toccur.scm 75 */
																		int BgL_arg2645z00_1487;

																		BgL_arg2645z00_1487 = (int) (((long) 16));
																		{	/* Ast/toccur.scm 75 */
																			long BgL_auxz00_3126;

																			BgL_auxz00_3126 =
																				(long) (BgL_arg2645z00_1487);
																			BgL_modz00_1486 =
																				(BgL_offsetz00_1485 / BgL_auxz00_3126);
																	}}
																	{	/* Ast/toccur.scm 75 */
																		long BgL_restz00_1488;

																		{	/* Ast/toccur.scm 75 */
																			int BgL_arg2644z00_1489;

																			BgL_arg2644z00_1489 = (int) (((long) 16));
																			{	/* Ast/toccur.scm 75 */
																				long BgL_auxz00_3130;

																				BgL_auxz00_3130 =
																					(long) (BgL_arg2644z00_1489);
																				BgL_restz00_1488 =
																					(BgL_offsetz00_1485 %
																					BgL_auxz00_3130);
																		}}
																		{	/* Ast/toccur.scm 75 */

																			BgL_method3289z00_1478 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1483,
																					(int) (BgL_modz00_1486)),
																				(int) (BgL_restz00_1488));
											}}}}}}}}
											return
												PROCEDURE_ENTRY(BgL_method3289z00_1478)
												(BgL_method3289z00_1478, (obj_t) (BgL_nodez00_1477),
												BEOA);
										}
									}
								}
							else
								{	/* Ast/toccur.scm 74 */
									return BFALSE;
								}
						}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_typezd2occurzd2()
	{
		AN_OBJECT;
		{	/* Ast/toccur.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3538z00zzast_typezd2occurzd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3538z00zzast_typezd2occurzd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3538z00zzast_typezd2occurzd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3538z00zzast_typezd2occurzd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3538z00zzast_typezd2occurzd2));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3538z00zzast_typezd2occurzd2));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3538z00zzast_typezd2occurzd2));
			return
				BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3538z00zzast_typezd2occurzd2));
		}
	}

#ifdef __cplusplus
}
#endif
