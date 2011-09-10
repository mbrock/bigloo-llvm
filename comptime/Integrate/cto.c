/*===========================================================================*/
/*   (Integrate/cto.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/cto.scm)*/
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


	static obj_t BGl_setzd2ctoz12zd2jumpzd2exzd2it3577z12zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__setzd2ctoz12zd2default3538z12zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_setzd2ctoz12zd2boxzd2setz123581zd2zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_setzd2ctoz12zd2setq3563z12zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_setzd2ctoz12zd2letzd2fun3571zc0zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_setzd2ctoz12zd2closure3547z12zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_setzd2ctoz12zd2letzd2var3573zc0zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzintegrate_ctoz00();
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_ctoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_setzd2ctoz12zd2fail3567z12zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_setzd2ctoz12zd2setzd2exzd2it3575z12zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzintegrate_ctoz00();
	static obj_t BGl_setzd2ctoz12zd2makezd2box3579zc0zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_setzd2ctoz12zd2app3551z12zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_closurez00zzast_nodez00;
	static obj_t BGl_setzd2ctoz12zd2kwote3543z12zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzintegrate_ctoz00();
	static obj_t
		BGl_setzd2ctoz12zd2default3538z12zzintegrate_ctoz00(BgL_nodez00_bglt,
		BgL_localz00_bglt);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_ctoz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzintegrate_ctoz00();
	static obj_t BGl_setzd2ctoz12zd2funcall3555z12zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_setzd2ctoz12zd2atom3541z12zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_setzd2ctoz12zd2var3545z12zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_setzd2ctoz12zd2conditional3565z12zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_setzd2ctoz12zd2extern3558z12zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_ctoz00();
	static obj_t BGl_setzd2ctoz12zd2appzd2ly3553zc0zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_nodez00_bglt, BgL_localz00_bglt);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_setzd2ctoz12zd2boxzd2ref3583zc0zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__setzd2ctoz12zc0zzintegrate_ctoz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_setzd2ctoz12zd2cast3561z12zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_setzd2ctoz12zd2select3569z12zzintegrate_ctoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_ctoz00();
	static obj_t BGl_setzd2ctoz12zd2sequence3549z12zzintegrate_ctoz00(obj_t,
		obj_t, obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_STRING(BGl_string3786z00zzintegrate_ctoz00,
		BgL_bgl_string3786za700za7za7i3814za7, "set-cto!", 8);
	      DEFINE_STRING(BGl_string3787z00zzintegrate_ctoz00,
		BgL_bgl_string3787za700za7za7i3815za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3810z00zzintegrate_ctoz00,
		BgL_bgl_string3810za700za7za7i3816za7, "integrate_cto", 13);
	      DEFINE_STRING(BGl_string3809z00zzintegrate_ctoz00,
		BgL_bgl_string3809za700za7za7i3817za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string3811z00zzintegrate_ctoz00,
		BgL_bgl_string3811za700za7za7i3818za7, "set-cto!-default3538 ", 21);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
		BgL_bgl__setza7d2ctoza712za7c03819za7,
		BGl__setzd2ctoz12zc0zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_setzd2ctoz12zd2default3538zd2envzc0zzintegrate_ctoz00,
		BgL_bgl__setza7d2ctoza712za7d23820za7,
		BGl__setzd2ctoz12zd2default3538z12zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3788z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2a3821za7,
		BGl_setzd2ctoz12zd2atom3541z12zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3800z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2f3822za7,
		BGl_setzd2ctoz12zd2fail3567z12zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3790z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2v3823za7,
		BGl_setzd2ctoz12zd2var3545z12zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3789z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2k3824za7,
		BGl_setzd2ctoz12zd2kwote3543z12zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3801z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2s3825za7,
		BGl_setzd2ctoz12zd2select3569z12zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3791z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2c3826za7,
		BGl_setzd2ctoz12zd2closure3547z12zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3802z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2l3827za7,
		BGl_setzd2ctoz12zd2letzd2fun3571zc0zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3792z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2s3828za7,
		BGl_setzd2ctoz12zd2sequence3549z12zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3803z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2l3829za7,
		BGl_setzd2ctoz12zd2letzd2var3573zc0zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3793z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2a3830za7,
		BGl_setzd2ctoz12zd2app3551z12zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3804z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2s3831za7,
		BGl_setzd2ctoz12zd2setzd2exzd2it3575z12zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3794z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2a3832za7,
		BGl_setzd2ctoz12zd2appzd2ly3553zc0zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3805z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2j3833za7,
		BGl_setzd2ctoz12zd2jumpzd2exzd2it3577z12zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3795z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2f3834za7,
		BGl_setzd2ctoz12zd2funcall3555z12zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3806z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2m3835za7,
		BGl_setzd2ctoz12zd2makezd2box3579zc0zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3796z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2e3836za7,
		BGl_setzd2ctoz12zd2extern3558z12zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3807z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2b3837za7,
		BGl_setzd2ctoz12zd2boxzd2setz123581zd2zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3797z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2c3838za7,
		BGl_setzd2ctoz12zd2cast3561z12zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3808z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2b3839za7,
		BGl_setzd2ctoz12zd2boxzd2ref3583zc0zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3798z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2s3840za7,
		BGl_setzd2ctoz12zd2setq3563z12zzintegrate_ctoz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3799z00zzintegrate_ctoz00,
		BgL_bgl_setza7d2ctoza712za7d2c3841za7,
		BGl_setzd2ctoz12zd2conditional3565z12zzintegrate_ctoz00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzintegrate_ctoz00(long
		BgL_checksumz00_2585, char *BgL_fromz00_2586)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_ctoz00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_ctoz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzintegrate_ctoz00();
					BGl_cnstzd2initzd2zzintegrate_ctoz00();
					BGl_importedzd2moduleszd2initz00zzintegrate_ctoz00();
					BGl_genericzd2initzd2zzintegrate_ctoz00();
					BGl_methodzd2initzd2zzintegrate_ctoz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_ctoz00()
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"integrate_cto");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "integrate_cto");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"integrate_cto");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_cto");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzintegrate_ctoz00()
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 15 */
			{	/* Integrate/cto.scm 15 */
				obj_t BgL_cportz00_2571;

				BgL_cportz00_2571 =
					bgl_open_input_string(BGl_string3811z00zzintegrate_ctoz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2572;

					BgL_iz00_2572 = ((long) 0);
				BgL_loopz00_2573:
					if ((BgL_iz00_2572 == ((long) -1)))
						{	/* Integrate/cto.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Integrate/cto.scm 15 */
							{	/* Integrate/cto.scm 15 */
								obj_t BgL_arg3813z00_2575;

								{	/* Integrate/cto.scm 15 */

									{	/* Integrate/cto.scm 15 */
										obj_t BgL_locationz00_2577;

										BgL_locationz00_2577 = BBOOL(((bool_t) 0));
										{	/* Integrate/cto.scm 15 */

											BgL_arg3813z00_2575 =
												BGl_readz00zz__readerz00(BgL_cportz00_2571,
												BgL_locationz00_2577);
										}
									}
								}
								{	/* Integrate/cto.scm 15 */
									int BgL_auxz00_2605;

									BgL_auxz00_2605 = (int) (BgL_iz00_2572);
									CNST_TABLE_SET(BgL_auxz00_2605, BgL_arg3813z00_2575);
							}}
							{	/* Integrate/cto.scm 15 */
								int BgL_auxz00_2578;

								BgL_auxz00_2578 = (int) ((BgL_iz00_2572 - ((long) 1)));
								{
									long BgL_iz00_2610;

									BgL_iz00_2610 = (long) (BgL_auxz00_2578);
									BgL_iz00_2572 = BgL_iz00_2610;
									goto BgL_loopz00_2573;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzintegrate_ctoz00()
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 15 */
			return BUNSPEC;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_ctoz00()
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_setzd2ctoz12zd2default3538zd2envzc0zzintegrate_ctoz00,
				BGl_nodez00zzast_nodez00, BGl_string3786z00zzintegrate_ctoz00);
		}
	}



/* set-cto! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_nodez00_bglt
		BgL_nodez00_1, BgL_localz00_bglt BgL_localz00_2)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 28 */
			{	/* Integrate/cto.scm 28 */
				obj_t BgL_method3539z00_1582;

				{	/* Integrate/cto.scm 28 */
					BgL_objectz00_bglt BgL_objz00_1583;

					BgL_objz00_1583 = (BgL_objectz00_bglt) (BgL_nodez00_1);
					{	/* Integrate/cto.scm 28 */
						long BgL_objzd2classzd2numz00_1584;

						BgL_objzd2classzd2numz00_1584 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1583);
						{	/* Integrate/cto.scm 28 */
							obj_t BgL_arg2643z00_1585;

							BgL_arg2643z00_1585 =
								PROCEDURE_REF(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
								(int) (((long) 1)));
							{	/* Integrate/cto.scm 28 */
								obj_t BgL_arrayz00_1587;

								int BgL_offsetz00_1588;

								BgL_arrayz00_1587 = BgL_arg2643z00_1585;
								BgL_offsetz00_1588 = (int) (BgL_objzd2classzd2numz00_1584);
								{	/* Integrate/cto.scm 28 */
									long BgL_offsetz00_1589;

									BgL_offsetz00_1589 =
										((long) (BgL_offsetz00_1588) - OBJECT_TYPE);
									{	/* Integrate/cto.scm 28 */
										long BgL_modz00_1590;

										{	/* Integrate/cto.scm 28 */
											int BgL_arg2645z00_1591;

											BgL_arg2645z00_1591 = (int) (((long) 16));
											{	/* Integrate/cto.scm 28 */
												long BgL_auxz00_2621;

												BgL_auxz00_2621 = (long) (BgL_arg2645z00_1591);
												BgL_modz00_1590 =
													(BgL_offsetz00_1589 / BgL_auxz00_2621);
										}}
										{	/* Integrate/cto.scm 28 */
											long BgL_restz00_1592;

											{	/* Integrate/cto.scm 28 */
												int BgL_arg2644z00_1593;

												BgL_arg2644z00_1593 = (int) (((long) 16));
												{	/* Integrate/cto.scm 28 */
													long BgL_auxz00_2625;

													BgL_auxz00_2625 = (long) (BgL_arg2644z00_1593);
													BgL_restz00_1592 =
														(BgL_offsetz00_1589 % BgL_auxz00_2625);
											}}
											{	/* Integrate/cto.scm 28 */

												BgL_method3539z00_1582 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1587,
														(int) (BgL_modz00_1590)), (int) (BgL_restz00_1592));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3539z00_1582) (BgL_method3539z00_1582,
					(obj_t) (BgL_nodez00_1), (obj_t) (BgL_localz00_2), BEOA);
			}
		}
	}



/* _set-cto! */
	obj_t BGl__setzd2ctoz12zc0zzintegrate_ctoz00(obj_t BgL_envz00_2481,
		obj_t BgL_nodez00_2482, obj_t BgL_localz00_2483)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 28 */
			return
				BGl_setzd2ctoz12zc0zzintegrate_ctoz00(
				(BgL_nodez00_bglt) (BgL_nodez00_2482),
				(BgL_localz00_bglt) (BgL_localz00_2483));
		}
	}



/* set-cto!-default3538 */
	obj_t BGl_setzd2ctoz12zd2default3538z12zzintegrate_ctoz00(BgL_nodez00_bglt
		BgL_nodez00_3, BgL_localz00_bglt BgL_localz00_4)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string3787z00zzintegrate_ctoz00, (obj_t) (BgL_nodez00_3));
		}
	}



/* _set-cto!-default3538 */
	obj_t BGl__setzd2ctoz12zd2default3538z12zzintegrate_ctoz00(obj_t
		BgL_envz00_2484, obj_t BgL_nodez00_2485, obj_t BgL_localz00_2486)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 15 */
			return
				BGl_setzd2ctoz12zd2default3538z12zzintegrate_ctoz00(
				(BgL_nodez00_bglt) (BgL_nodez00_2485),
				(BgL_localz00_bglt) (BgL_localz00_2486));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_ctoz00()
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00, BGl_atomz00zzast_nodez00,
				BGl_proc3788z00zzintegrate_ctoz00, BGl_string3786z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00, BGl_kwotez00zzast_nodez00,
				BGl_proc3789z00zzintegrate_ctoz00, BGl_string3786z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00, BGl_varz00zzast_nodez00,
				BGl_proc3790z00zzintegrate_ctoz00, BGl_string3786z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_closurez00zzast_nodez00, BGl_proc3791z00zzintegrate_ctoz00,
				BGl_string3786z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_sequencez00zzast_nodez00, BGl_proc3792z00zzintegrate_ctoz00,
				BGl_string3786z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00, BGl_appz00zzast_nodez00,
				BGl_proc3793z00zzintegrate_ctoz00, BGl_string3786z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3794z00zzintegrate_ctoz00,
				BGl_string3786z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_funcallz00zzast_nodez00, BGl_proc3795z00zzintegrate_ctoz00,
				BGl_string3786z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_externz00zzast_nodez00, BGl_proc3796z00zzintegrate_ctoz00,
				BGl_string3786z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00, BGl_castz00zzast_nodez00,
				BGl_proc3797z00zzintegrate_ctoz00, BGl_string3786z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00, BGl_setqz00zzast_nodez00,
				BGl_proc3798z00zzintegrate_ctoz00, BGl_string3786z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3799z00zzintegrate_ctoz00,
				BGl_string3786z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00, BGl_failz00zzast_nodez00,
				BGl_proc3800z00zzintegrate_ctoz00, BGl_string3786z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_selectz00zzast_nodez00, BGl_proc3801z00zzintegrate_ctoz00,
				BGl_string3786z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3802z00zzintegrate_ctoz00,
				BGl_string3786z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3803z00zzintegrate_ctoz00,
				BGl_string3786z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3804z00zzintegrate_ctoz00,
				BGl_string3786z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3805z00zzintegrate_ctoz00,
				BGl_string3786z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3806z00zzintegrate_ctoz00,
				BGl_string3786z00zzintegrate_ctoz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3807z00zzintegrate_ctoz00,
				BGl_string3786z00zzintegrate_ctoz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3808z00zzintegrate_ctoz00,
				BGl_string3786z00zzintegrate_ctoz00);
		}
	}



/* set-cto!-box-ref3583 */
	obj_t BGl_setzd2ctoz12zd2boxzd2ref3583zc0zzintegrate_ctoz00(obj_t
		BgL_envz00_2508, obj_t BgL_nodez00_2509, obj_t BgL_localz00_2510)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 223 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1574;

				obj_t BgL_localz00_1575;

				BgL_nodez00_1574 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2509);
				BgL_localz00_1575 = BgL_localz00_2510;
				{	/* Integrate/cto.scm 224 */
					BgL_varz00_bglt BgL_arg3724z00_2452;

					BgL_arg3724z00_2452 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1574))->BgL_varz00);
					{	/* Integrate/cto.scm 224 */
						BgL_nodez00_bglt BgL_nodez00_2454;

						BgL_localz00_bglt BgL_localz00_2455;

						BgL_nodez00_2454 = (BgL_nodez00_bglt) (BgL_arg3724z00_2452);
						BgL_localz00_2455 = (BgL_localz00_bglt) (BgL_localz00_1575);
						{	/* Integrate/cto.scm 224 */
							obj_t BgL_method3539z00_2456;

							{	/* Integrate/cto.scm 224 */
								BgL_objectz00_bglt BgL_objz00_2457;

								BgL_objz00_2457 = (BgL_objectz00_bglt) (BgL_nodez00_2454);
								{	/* Integrate/cto.scm 224 */
									long BgL_objzd2classzd2numz00_2458;

									BgL_objzd2classzd2numz00_2458 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2457);
									{	/* Integrate/cto.scm 224 */
										obj_t BgL_arg2643z00_2459;

										BgL_arg2643z00_2459 =
											PROCEDURE_REF(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
											(int) (((long) 1)));
										{	/* Integrate/cto.scm 224 */
											obj_t BgL_arrayz00_2461;

											int BgL_offsetz00_2462;

											BgL_arrayz00_2461 = BgL_arg2643z00_2459;
											BgL_offsetz00_2462 =
												(int) (BgL_objzd2classzd2numz00_2458);
											{	/* Integrate/cto.scm 224 */
												long BgL_offsetz00_2463;

												BgL_offsetz00_2463 =
													((long) (BgL_offsetz00_2462) - OBJECT_TYPE);
												{	/* Integrate/cto.scm 224 */
													long BgL_modz00_2464;

													{	/* Integrate/cto.scm 224 */
														int BgL_arg2645z00_2465;

														BgL_arg2645z00_2465 = (int) (((long) 16));
														{	/* Integrate/cto.scm 224 */
															long BgL_auxz00_2677;

															BgL_auxz00_2677 = (long) (BgL_arg2645z00_2465);
															BgL_modz00_2464 =
																(BgL_offsetz00_2463 / BgL_auxz00_2677);
													}}
													{	/* Integrate/cto.scm 224 */
														long BgL_restz00_2466;

														{	/* Integrate/cto.scm 224 */
															int BgL_arg2644z00_2467;

															BgL_arg2644z00_2467 = (int) (((long) 16));
															{	/* Integrate/cto.scm 224 */
																long BgL_auxz00_2681;

																BgL_auxz00_2681 = (long) (BgL_arg2644z00_2467);
																BgL_restz00_2466 =
																	(BgL_offsetz00_2463 % BgL_auxz00_2681);
														}}
														{	/* Integrate/cto.scm 224 */

															BgL_method3539z00_2456 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2461,
																	(int) (BgL_modz00_2464)),
																(int) (BgL_restz00_2466));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3539z00_2456) (BgL_method3539z00_2456,
								(obj_t) (BgL_nodez00_2454), (obj_t) (BgL_localz00_2455), BEOA);
						}
					}
				}
			}
		}
	}



/* set-cto!-box-set!3581 */
	obj_t BGl_setzd2ctoz12zd2boxzd2setz123581zd2zzintegrate_ctoz00(obj_t
		BgL_envz00_2511, obj_t BgL_nodez00_2512, obj_t BgL_localz00_2513)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 215 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1565;

				obj_t BgL_localz00_1566;

				BgL_nodez00_1565 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2512);
				BgL_localz00_1566 = BgL_localz00_2513;
				{	/* Integrate/cto.scm 216 */
					BgL_varz00_bglt BgL_arg3721z00_2393;

					BgL_arg3721z00_2393 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1565))->BgL_varz00);
					{	/* Integrate/cto.scm 216 */
						BgL_nodez00_bglt BgL_nodez00_2396;

						BgL_localz00_bglt BgL_localz00_2397;

						BgL_nodez00_2396 = (BgL_nodez00_bglt) (BgL_arg3721z00_2393);
						BgL_localz00_2397 = (BgL_localz00_bglt) (BgL_localz00_1566);
						{	/* Integrate/cto.scm 216 */
							obj_t BgL_method3539z00_2398;

							{	/* Integrate/cto.scm 216 */
								BgL_objectz00_bglt BgL_objz00_2399;

								BgL_objz00_2399 = (BgL_objectz00_bglt) (BgL_nodez00_2396);
								{	/* Integrate/cto.scm 216 */
									long BgL_objzd2classzd2numz00_2400;

									BgL_objzd2classzd2numz00_2400 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2399);
									{	/* Integrate/cto.scm 216 */
										obj_t BgL_arg2643z00_2401;

										BgL_arg2643z00_2401 =
											PROCEDURE_REF(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
											(int) (((long) 1)));
										{	/* Integrate/cto.scm 216 */
											obj_t BgL_arrayz00_2403;

											int BgL_offsetz00_2404;

											BgL_arrayz00_2403 = BgL_arg2643z00_2401;
											BgL_offsetz00_2404 =
												(int) (BgL_objzd2classzd2numz00_2400);
											{	/* Integrate/cto.scm 216 */
												long BgL_offsetz00_2405;

												BgL_offsetz00_2405 =
													((long) (BgL_offsetz00_2404) - OBJECT_TYPE);
												{	/* Integrate/cto.scm 216 */
													long BgL_modz00_2406;

													{	/* Integrate/cto.scm 216 */
														int BgL_arg2645z00_2407;

														BgL_arg2645z00_2407 = (int) (((long) 16));
														{	/* Integrate/cto.scm 216 */
															long BgL_auxz00_2704;

															BgL_auxz00_2704 = (long) (BgL_arg2645z00_2407);
															BgL_modz00_2406 =
																(BgL_offsetz00_2405 / BgL_auxz00_2704);
													}}
													{	/* Integrate/cto.scm 216 */
														long BgL_restz00_2408;

														{	/* Integrate/cto.scm 216 */
															int BgL_arg2644z00_2409;

															BgL_arg2644z00_2409 = (int) (((long) 16));
															{	/* Integrate/cto.scm 216 */
																long BgL_auxz00_2708;

																BgL_auxz00_2708 = (long) (BgL_arg2644z00_2409);
																BgL_restz00_2408 =
																	(BgL_offsetz00_2405 % BgL_auxz00_2708);
														}}
														{	/* Integrate/cto.scm 216 */

															BgL_method3539z00_2398 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2403,
																	(int) (BgL_modz00_2406)),
																(int) (BgL_restz00_2408));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3539z00_2398) (BgL_method3539z00_2398,
								(obj_t) (BgL_nodez00_2396), (obj_t) (BgL_localz00_2397), BEOA);
				}}}
				{	/* Integrate/cto.scm 216 */
					BgL_nodez00_bglt BgL_arg3722z00_2394;

					BgL_arg3722z00_2394 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1565))->BgL_valuez00);
					{	/* Integrate/cto.scm 216 */
						BgL_localz00_bglt BgL_localz00_2425;

						BgL_localz00_2425 = (BgL_localz00_bglt) (BgL_localz00_1566);
						{	/* Integrate/cto.scm 216 */
							obj_t BgL_method3539z00_2426;

							{	/* Integrate/cto.scm 216 */
								BgL_objectz00_bglt BgL_objz00_2427;

								BgL_objz00_2427 = (BgL_objectz00_bglt) (BgL_arg3722z00_2394);
								{	/* Integrate/cto.scm 216 */
									long BgL_objzd2classzd2numz00_2428;

									BgL_objzd2classzd2numz00_2428 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2427);
									{	/* Integrate/cto.scm 216 */
										obj_t BgL_arg2643z00_2429;

										BgL_arg2643z00_2429 =
											PROCEDURE_REF(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
											(int) (((long) 1)));
										{	/* Integrate/cto.scm 216 */
											obj_t BgL_arrayz00_2431;

											int BgL_offsetz00_2432;

											BgL_arrayz00_2431 = BgL_arg2643z00_2429;
											BgL_offsetz00_2432 =
												(int) (BgL_objzd2classzd2numz00_2428);
											{	/* Integrate/cto.scm 216 */
												long BgL_offsetz00_2433;

												BgL_offsetz00_2433 =
													((long) (BgL_offsetz00_2432) - OBJECT_TYPE);
												{	/* Integrate/cto.scm 216 */
													long BgL_modz00_2434;

													{	/* Integrate/cto.scm 216 */
														int BgL_arg2645z00_2435;

														BgL_arg2645z00_2435 = (int) (((long) 16));
														{	/* Integrate/cto.scm 216 */
															long BgL_auxz00_2729;

															BgL_auxz00_2729 = (long) (BgL_arg2645z00_2435);
															BgL_modz00_2434 =
																(BgL_offsetz00_2433 / BgL_auxz00_2729);
													}}
													{	/* Integrate/cto.scm 216 */
														long BgL_restz00_2436;

														{	/* Integrate/cto.scm 216 */
															int BgL_arg2644z00_2437;

															BgL_arg2644z00_2437 = (int) (((long) 16));
															{	/* Integrate/cto.scm 216 */
																long BgL_auxz00_2733;

																BgL_auxz00_2733 = (long) (BgL_arg2644z00_2437);
																BgL_restz00_2436 =
																	(BgL_offsetz00_2433 % BgL_auxz00_2733);
														}}
														{	/* Integrate/cto.scm 216 */

															BgL_method3539z00_2426 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2431,
																	(int) (BgL_modz00_2434)),
																(int) (BgL_restz00_2436));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3539z00_2426) (BgL_method3539z00_2426,
								(obj_t) (BgL_arg3722z00_2394),
								(obj_t) (BgL_localz00_2425), BEOA);
						}
					}
				}
			}
		}
	}



/* set-cto!-make-box3579 */
	obj_t BGl_setzd2ctoz12zd2makezd2box3579zc0zzintegrate_ctoz00(obj_t
		BgL_envz00_2514, obj_t BgL_nodez00_2515, obj_t BgL_localz00_2516)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 208 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1557;

				obj_t BgL_localz00_1558;

				BgL_nodez00_1557 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2515);
				BgL_localz00_1558 = BgL_localz00_2516;
				{	/* Integrate/cto.scm 209 */
					BgL_nodez00_bglt BgL_arg3719z00_2363;

					BgL_arg3719z00_2363 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1557))->BgL_valuez00);
					{	/* Integrate/cto.scm 209 */
						BgL_localz00_bglt BgL_localz00_2366;

						BgL_localz00_2366 = (BgL_localz00_bglt) (BgL_localz00_1558);
						{	/* Integrate/cto.scm 209 */
							obj_t BgL_method3539z00_2367;

							{	/* Integrate/cto.scm 209 */
								BgL_objectz00_bglt BgL_objz00_2368;

								BgL_objz00_2368 = (BgL_objectz00_bglt) (BgL_arg3719z00_2363);
								{	/* Integrate/cto.scm 209 */
									long BgL_objzd2classzd2numz00_2369;

									BgL_objzd2classzd2numz00_2369 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2368);
									{	/* Integrate/cto.scm 209 */
										obj_t BgL_arg2643z00_2370;

										BgL_arg2643z00_2370 =
											PROCEDURE_REF(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
											(int) (((long) 1)));
										{	/* Integrate/cto.scm 209 */
											obj_t BgL_arrayz00_2372;

											int BgL_offsetz00_2373;

											BgL_arrayz00_2372 = BgL_arg2643z00_2370;
											BgL_offsetz00_2373 =
												(int) (BgL_objzd2classzd2numz00_2369);
											{	/* Integrate/cto.scm 209 */
												long BgL_offsetz00_2374;

												BgL_offsetz00_2374 =
													((long) (BgL_offsetz00_2373) - OBJECT_TYPE);
												{	/* Integrate/cto.scm 209 */
													long BgL_modz00_2375;

													{	/* Integrate/cto.scm 209 */
														int BgL_arg2645z00_2376;

														BgL_arg2645z00_2376 = (int) (((long) 16));
														{	/* Integrate/cto.scm 209 */
															long BgL_auxz00_2755;

															BgL_auxz00_2755 = (long) (BgL_arg2645z00_2376);
															BgL_modz00_2375 =
																(BgL_offsetz00_2374 / BgL_auxz00_2755);
													}}
													{	/* Integrate/cto.scm 209 */
														long BgL_restz00_2377;

														{	/* Integrate/cto.scm 209 */
															int BgL_arg2644z00_2378;

															BgL_arg2644z00_2378 = (int) (((long) 16));
															{	/* Integrate/cto.scm 209 */
																long BgL_auxz00_2759;

																BgL_auxz00_2759 = (long) (BgL_arg2644z00_2378);
																BgL_restz00_2377 =
																	(BgL_offsetz00_2374 % BgL_auxz00_2759);
														}}
														{	/* Integrate/cto.scm 209 */

															BgL_method3539z00_2367 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2372,
																	(int) (BgL_modz00_2375)),
																(int) (BgL_restz00_2377));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3539z00_2367) (BgL_method3539z00_2367,
								(obj_t) (BgL_arg3719z00_2363),
								(obj_t) (BgL_localz00_2366), BEOA);
						}
					}
				}
			}
		}
	}



/* set-cto!-jump-ex-it3577 */
	obj_t BGl_setzd2ctoz12zd2jumpzd2exzd2it3577z12zzintegrate_ctoz00(obj_t
		BgL_envz00_2517, obj_t BgL_nodez00_2518, obj_t BgL_localz00_2519)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 200 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1548;

				obj_t BgL_localz00_1549;

				BgL_nodez00_1548 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2518);
				BgL_localz00_1549 = BgL_localz00_2519;
				{	/* Integrate/cto.scm 201 */
					BgL_nodez00_bglt BgL_arg3716z00_2304;

					BgL_arg3716z00_2304 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1548))->
						BgL_exitz00);
					{	/* Integrate/cto.scm 201 */
						BgL_localz00_bglt BgL_localz00_2308;

						BgL_localz00_2308 = (BgL_localz00_bglt) (BgL_localz00_1549);
						{	/* Integrate/cto.scm 201 */
							obj_t BgL_method3539z00_2309;

							{	/* Integrate/cto.scm 201 */
								BgL_objectz00_bglt BgL_objz00_2310;

								BgL_objz00_2310 = (BgL_objectz00_bglt) (BgL_arg3716z00_2304);
								{	/* Integrate/cto.scm 201 */
									long BgL_objzd2classzd2numz00_2311;

									BgL_objzd2classzd2numz00_2311 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2310);
									{	/* Integrate/cto.scm 201 */
										obj_t BgL_arg2643z00_2312;

										BgL_arg2643z00_2312 =
											PROCEDURE_REF(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
											(int) (((long) 1)));
										{	/* Integrate/cto.scm 201 */
											obj_t BgL_arrayz00_2314;

											int BgL_offsetz00_2315;

											BgL_arrayz00_2314 = BgL_arg2643z00_2312;
											BgL_offsetz00_2315 =
												(int) (BgL_objzd2classzd2numz00_2311);
											{	/* Integrate/cto.scm 201 */
												long BgL_offsetz00_2316;

												BgL_offsetz00_2316 =
													((long) (BgL_offsetz00_2315) - OBJECT_TYPE);
												{	/* Integrate/cto.scm 201 */
													long BgL_modz00_2317;

													{	/* Integrate/cto.scm 201 */
														int BgL_arg2645z00_2318;

														BgL_arg2645z00_2318 = (int) (((long) 16));
														{	/* Integrate/cto.scm 201 */
															long BgL_auxz00_2781;

															BgL_auxz00_2781 = (long) (BgL_arg2645z00_2318);
															BgL_modz00_2317 =
																(BgL_offsetz00_2316 / BgL_auxz00_2781);
													}}
													{	/* Integrate/cto.scm 201 */
														long BgL_restz00_2319;

														{	/* Integrate/cto.scm 201 */
															int BgL_arg2644z00_2320;

															BgL_arg2644z00_2320 = (int) (((long) 16));
															{	/* Integrate/cto.scm 201 */
																long BgL_auxz00_2785;

																BgL_auxz00_2785 = (long) (BgL_arg2644z00_2320);
																BgL_restz00_2319 =
																	(BgL_offsetz00_2316 % BgL_auxz00_2785);
														}}
														{	/* Integrate/cto.scm 201 */

															BgL_method3539z00_2309 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2314,
																	(int) (BgL_modz00_2317)),
																(int) (BgL_restz00_2319));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3539z00_2309) (BgL_method3539z00_2309,
								(obj_t) (BgL_arg3716z00_2304),
								(obj_t) (BgL_localz00_2308), BEOA);
				}}}
				{	/* Integrate/cto.scm 201 */
					BgL_nodez00_bglt BgL_arg3717z00_2305;

					BgL_arg3717z00_2305 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1548))->
						BgL_valuez00);
					{	/* Integrate/cto.scm 201 */
						BgL_localz00_bglt BgL_localz00_2336;

						BgL_localz00_2336 = (BgL_localz00_bglt) (BgL_localz00_1549);
						{	/* Integrate/cto.scm 201 */
							obj_t BgL_method3539z00_2337;

							{	/* Integrate/cto.scm 201 */
								BgL_objectz00_bglt BgL_objz00_2338;

								BgL_objz00_2338 = (BgL_objectz00_bglt) (BgL_arg3717z00_2305);
								{	/* Integrate/cto.scm 201 */
									long BgL_objzd2classzd2numz00_2339;

									BgL_objzd2classzd2numz00_2339 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2338);
									{	/* Integrate/cto.scm 201 */
										obj_t BgL_arg2643z00_2340;

										BgL_arg2643z00_2340 =
											PROCEDURE_REF(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
											(int) (((long) 1)));
										{	/* Integrate/cto.scm 201 */
											obj_t BgL_arrayz00_2342;

											int BgL_offsetz00_2343;

											BgL_arrayz00_2342 = BgL_arg2643z00_2340;
											BgL_offsetz00_2343 =
												(int) (BgL_objzd2classzd2numz00_2339);
											{	/* Integrate/cto.scm 201 */
												long BgL_offsetz00_2344;

												BgL_offsetz00_2344 =
													((long) (BgL_offsetz00_2343) - OBJECT_TYPE);
												{	/* Integrate/cto.scm 201 */
													long BgL_modz00_2345;

													{	/* Integrate/cto.scm 201 */
														int BgL_arg2645z00_2346;

														BgL_arg2645z00_2346 = (int) (((long) 16));
														{	/* Integrate/cto.scm 201 */
															long BgL_auxz00_2806;

															BgL_auxz00_2806 = (long) (BgL_arg2645z00_2346);
															BgL_modz00_2345 =
																(BgL_offsetz00_2344 / BgL_auxz00_2806);
													}}
													{	/* Integrate/cto.scm 201 */
														long BgL_restz00_2347;

														{	/* Integrate/cto.scm 201 */
															int BgL_arg2644z00_2348;

															BgL_arg2644z00_2348 = (int) (((long) 16));
															{	/* Integrate/cto.scm 201 */
																long BgL_auxz00_2810;

																BgL_auxz00_2810 = (long) (BgL_arg2644z00_2348);
																BgL_restz00_2347 =
																	(BgL_offsetz00_2344 % BgL_auxz00_2810);
														}}
														{	/* Integrate/cto.scm 201 */

															BgL_method3539z00_2337 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2342,
																	(int) (BgL_modz00_2345)),
																(int) (BgL_restz00_2347));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3539z00_2337) (BgL_method3539z00_2337,
								(obj_t) (BgL_arg3717z00_2305),
								(obj_t) (BgL_localz00_2336), BEOA);
						}
					}
				}
			}
		}
	}



/* set-cto!-set-ex-it3575 */
	obj_t BGl_setzd2ctoz12zd2setzd2exzd2it3575z12zzintegrate_ctoz00(obj_t
		BgL_envz00_2520, obj_t BgL_nodez00_2521, obj_t BgL_localz00_2522)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 193 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1540;

				obj_t BgL_localz00_1541;

				BgL_nodez00_1540 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2521);
				BgL_localz00_1541 = BgL_localz00_2522;
				{	/* Integrate/cto.scm 194 */
					BgL_nodez00_bglt BgL_arg3714z00_2274;

					BgL_arg3714z00_2274 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1540))->BgL_bodyz00);
					{	/* Integrate/cto.scm 194 */
						BgL_localz00_bglt BgL_localz00_2277;

						BgL_localz00_2277 = (BgL_localz00_bglt) (BgL_localz00_1541);
						{	/* Integrate/cto.scm 194 */
							obj_t BgL_method3539z00_2278;

							{	/* Integrate/cto.scm 194 */
								BgL_objectz00_bglt BgL_objz00_2279;

								BgL_objz00_2279 = (BgL_objectz00_bglt) (BgL_arg3714z00_2274);
								{	/* Integrate/cto.scm 194 */
									long BgL_objzd2classzd2numz00_2280;

									BgL_objzd2classzd2numz00_2280 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2279);
									{	/* Integrate/cto.scm 194 */
										obj_t BgL_arg2643z00_2281;

										BgL_arg2643z00_2281 =
											PROCEDURE_REF(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
											(int) (((long) 1)));
										{	/* Integrate/cto.scm 194 */
											obj_t BgL_arrayz00_2283;

											int BgL_offsetz00_2284;

											BgL_arrayz00_2283 = BgL_arg2643z00_2281;
											BgL_offsetz00_2284 =
												(int) (BgL_objzd2classzd2numz00_2280);
											{	/* Integrate/cto.scm 194 */
												long BgL_offsetz00_2285;

												BgL_offsetz00_2285 =
													((long) (BgL_offsetz00_2284) - OBJECT_TYPE);
												{	/* Integrate/cto.scm 194 */
													long BgL_modz00_2286;

													{	/* Integrate/cto.scm 194 */
														int BgL_arg2645z00_2287;

														BgL_arg2645z00_2287 = (int) (((long) 16));
														{	/* Integrate/cto.scm 194 */
															long BgL_auxz00_2832;

															BgL_auxz00_2832 = (long) (BgL_arg2645z00_2287);
															BgL_modz00_2286 =
																(BgL_offsetz00_2285 / BgL_auxz00_2832);
													}}
													{	/* Integrate/cto.scm 194 */
														long BgL_restz00_2288;

														{	/* Integrate/cto.scm 194 */
															int BgL_arg2644z00_2289;

															BgL_arg2644z00_2289 = (int) (((long) 16));
															{	/* Integrate/cto.scm 194 */
																long BgL_auxz00_2836;

																BgL_auxz00_2836 = (long) (BgL_arg2644z00_2289);
																BgL_restz00_2288 =
																	(BgL_offsetz00_2285 % BgL_auxz00_2836);
														}}
														{	/* Integrate/cto.scm 194 */

															BgL_method3539z00_2278 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2283,
																	(int) (BgL_modz00_2286)),
																(int) (BgL_restz00_2288));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3539z00_2278) (BgL_method3539z00_2278,
								(obj_t) (BgL_arg3714z00_2274),
								(obj_t) (BgL_localz00_2277), BEOA);
						}
					}
				}
			}
		}
	}



/* set-cto!-let-var3573 */
	obj_t BGl_setzd2ctoz12zd2letzd2var3573zc0zzintegrate_ctoz00(obj_t
		BgL_envz00_2523, obj_t BgL_nodez00_2524, obj_t BgL_localz00_2525)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 181 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1523;

				obj_t BgL_localz00_1524;

				BgL_nodez00_1523 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2524);
				BgL_localz00_1524 = BgL_localz00_2525;
				{	/* Integrate/cto.scm 183 */
					obj_t BgL_g3521z00_1528;

					BgL_g3521z00_1528 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1523))->BgL_bindingsz00);
					{
						obj_t BgL_bindingsz00_1530;

						BgL_bindingsz00_1530 = BgL_g3521z00_1528;
					BgL_zc3anonymousza33707ze3z83_1531:
						if (NULLP(BgL_bindingsz00_1530))
							{	/* Integrate/cto.scm 185 */
								BgL_nodez00_bglt BgL_arg3709z00_1533;

								BgL_arg3709z00_1533 =
									(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1523))->
									BgL_bodyz00);
								{	/* Integrate/cto.scm 185 */
									BgL_localz00_bglt BgL_localz00_2217;

									BgL_localz00_2217 = (BgL_localz00_bglt) (BgL_localz00_1524);
									{	/* Integrate/cto.scm 185 */
										obj_t BgL_method3539z00_2218;

										{	/* Integrate/cto.scm 185 */
											BgL_objectz00_bglt BgL_objz00_2219;

											BgL_objz00_2219 =
												(BgL_objectz00_bglt) (BgL_arg3709z00_1533);
											{	/* Integrate/cto.scm 185 */
												long BgL_objzd2classzd2numz00_2220;

												BgL_objzd2classzd2numz00_2220 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2219);
												{	/* Integrate/cto.scm 185 */
													obj_t BgL_arg2643z00_2221;

													BgL_arg2643z00_2221 =
														PROCEDURE_REF
														(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
														(int) (((long) 1)));
													{	/* Integrate/cto.scm 185 */
														obj_t BgL_arrayz00_2223;

														int BgL_offsetz00_2224;

														BgL_arrayz00_2223 = BgL_arg2643z00_2221;
														BgL_offsetz00_2224 =
															(int) (BgL_objzd2classzd2numz00_2220);
														{	/* Integrate/cto.scm 185 */
															long BgL_offsetz00_2225;

															BgL_offsetz00_2225 =
																((long) (BgL_offsetz00_2224) - OBJECT_TYPE);
															{	/* Integrate/cto.scm 185 */
																long BgL_modz00_2226;

																{	/* Integrate/cto.scm 185 */
																	int BgL_arg2645z00_2227;

																	BgL_arg2645z00_2227 = (int) (((long) 16));
																	{	/* Integrate/cto.scm 185 */
																		long BgL_auxz00_2861;

																		BgL_auxz00_2861 =
																			(long) (BgL_arg2645z00_2227);
																		BgL_modz00_2226 =
																			(BgL_offsetz00_2225 / BgL_auxz00_2861);
																}}
																{	/* Integrate/cto.scm 185 */
																	long BgL_restz00_2228;

																	{	/* Integrate/cto.scm 185 */
																		int BgL_arg2644z00_2229;

																		BgL_arg2644z00_2229 = (int) (((long) 16));
																		{	/* Integrate/cto.scm 185 */
																			long BgL_auxz00_2865;

																			BgL_auxz00_2865 =
																				(long) (BgL_arg2644z00_2229);
																			BgL_restz00_2228 =
																				(BgL_offsetz00_2225 % BgL_auxz00_2865);
																	}}
																	{	/* Integrate/cto.scm 185 */

																		BgL_method3539z00_2218 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2223,
																				(int) (BgL_modz00_2226)),
																			(int) (BgL_restz00_2228));
										}}}}}}}}
										return
											PROCEDURE_ENTRY(BgL_method3539z00_2218)
											(BgL_method3539z00_2218, (obj_t) (BgL_arg3709z00_1533),
											(obj_t) (BgL_localz00_2217), BEOA);
									}
								}
							}
						else
							{	/* Integrate/cto.scm 184 */
								{	/* Integrate/cto.scm 187 */
									obj_t BgL_arg3710z00_1534;

									BgL_arg3710z00_1534 = CDR(CAR(BgL_bindingsz00_1530));
									{	/* Integrate/cto.scm 187 */
										BgL_nodez00_bglt BgL_nodez00_2245;

										BgL_localz00_bglt BgL_localz00_2246;

										BgL_nodez00_2245 = (BgL_nodez00_bglt) (BgL_arg3710z00_1534);
										BgL_localz00_2246 = (BgL_localz00_bglt) (BgL_localz00_1524);
										{	/* Integrate/cto.scm 187 */
											obj_t BgL_method3539z00_2247;

											{	/* Integrate/cto.scm 187 */
												BgL_objectz00_bglt BgL_objz00_2248;

												BgL_objz00_2248 =
													(BgL_objectz00_bglt) (BgL_nodez00_2245);
												{	/* Integrate/cto.scm 187 */
													long BgL_objzd2classzd2numz00_2249;

													BgL_objzd2classzd2numz00_2249 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2248);
													{	/* Integrate/cto.scm 187 */
														obj_t BgL_arg2643z00_2250;

														BgL_arg2643z00_2250 =
															PROCEDURE_REF
															(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
															(int) (((long) 1)));
														{	/* Integrate/cto.scm 187 */
															obj_t BgL_arrayz00_2252;

															int BgL_offsetz00_2253;

															BgL_arrayz00_2252 = BgL_arg2643z00_2250;
															BgL_offsetz00_2253 =
																(int) (BgL_objzd2classzd2numz00_2249);
															{	/* Integrate/cto.scm 187 */
																long BgL_offsetz00_2254;

																BgL_offsetz00_2254 =
																	((long) (BgL_offsetz00_2253) - OBJECT_TYPE);
																{	/* Integrate/cto.scm 187 */
																	long BgL_modz00_2255;

																	{	/* Integrate/cto.scm 187 */
																		int BgL_arg2645z00_2256;

																		BgL_arg2645z00_2256 = (int) (((long) 16));
																		{	/* Integrate/cto.scm 187 */
																			long BgL_auxz00_2888;

																			BgL_auxz00_2888 =
																				(long) (BgL_arg2645z00_2256);
																			BgL_modz00_2255 =
																				(BgL_offsetz00_2254 / BgL_auxz00_2888);
																	}}
																	{	/* Integrate/cto.scm 187 */
																		long BgL_restz00_2257;

																		{	/* Integrate/cto.scm 187 */
																			int BgL_arg2644z00_2258;

																			BgL_arg2644z00_2258 = (int) (((long) 16));
																			{	/* Integrate/cto.scm 187 */
																				long BgL_auxz00_2892;

																				BgL_auxz00_2892 =
																					(long) (BgL_arg2644z00_2258);
																				BgL_restz00_2257 =
																					(BgL_offsetz00_2254 %
																					BgL_auxz00_2892);
																		}}
																		{	/* Integrate/cto.scm 187 */

																			BgL_method3539z00_2247 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2252,
																					(int) (BgL_modz00_2255)),
																				(int) (BgL_restz00_2257));
											}}}}}}}}
											PROCEDURE_ENTRY(BgL_method3539z00_2247)
												(BgL_method3539z00_2247, (obj_t) (BgL_nodez00_2245),
												(obj_t) (BgL_localz00_2246), BEOA);
								}}}
								{
									obj_t BgL_bindingsz00_2903;

									BgL_bindingsz00_2903 = CDR(BgL_bindingsz00_1530);
									BgL_bindingsz00_1530 = BgL_bindingsz00_2903;
									goto BgL_zc3anonymousza33707ze3z83_1531;
								}
							}
					}
				}
			}
		}
	}



/* set-cto!-let-fun3571 */
	obj_t BGl_setzd2ctoz12zd2letzd2fun3571zc0zzintegrate_ctoz00(obj_t
		BgL_envz00_2526, obj_t BgL_nodez00_2527, obj_t BgL_localz00_2528)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 166 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1504;

				obj_t BgL_localz00_1505;

				BgL_nodez00_1504 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2527);
				BgL_localz00_1505 = BgL_localz00_2528;
				{	/* Integrate/cto.scm 168 */
					obj_t BgL_g3518z00_1509;

					BgL_g3518z00_1509 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1504))->BgL_localsz00);
					{
						obj_t BgL_localsz00_1511;

						BgL_localsz00_1511 = BgL_g3518z00_1509;
					BgL_zc3anonymousza33701ze3z83_1512:
						if (NULLP(BgL_localsz00_1511))
							{	/* Integrate/cto.scm 170 */
								BgL_nodez00_bglt BgL_arg3703z00_1514;

								BgL_arg3703z00_1514 =
									(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1504))->
									BgL_bodyz00);
								{	/* Integrate/cto.scm 170 */
									BgL_localz00_bglt BgL_localz00_2155;

									BgL_localz00_2155 = (BgL_localz00_bglt) (BgL_localz00_1505);
									{	/* Integrate/cto.scm 170 */
										obj_t BgL_method3539z00_2156;

										{	/* Integrate/cto.scm 170 */
											BgL_objectz00_bglt BgL_objz00_2157;

											BgL_objz00_2157 =
												(BgL_objectz00_bglt) (BgL_arg3703z00_1514);
											{	/* Integrate/cto.scm 170 */
												long BgL_objzd2classzd2numz00_2158;

												BgL_objzd2classzd2numz00_2158 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2157);
												{	/* Integrate/cto.scm 170 */
													obj_t BgL_arg2643z00_2159;

													BgL_arg2643z00_2159 =
														PROCEDURE_REF
														(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
														(int) (((long) 1)));
													{	/* Integrate/cto.scm 170 */
														obj_t BgL_arrayz00_2161;

														int BgL_offsetz00_2162;

														BgL_arrayz00_2161 = BgL_arg2643z00_2159;
														BgL_offsetz00_2162 =
															(int) (BgL_objzd2classzd2numz00_2158);
														{	/* Integrate/cto.scm 170 */
															long BgL_offsetz00_2163;

															BgL_offsetz00_2163 =
																((long) (BgL_offsetz00_2162) - OBJECT_TYPE);
															{	/* Integrate/cto.scm 170 */
																long BgL_modz00_2164;

																{	/* Integrate/cto.scm 170 */
																	int BgL_arg2645z00_2165;

																	BgL_arg2645z00_2165 = (int) (((long) 16));
																	{	/* Integrate/cto.scm 170 */
																		long BgL_auxz00_2919;

																		BgL_auxz00_2919 =
																			(long) (BgL_arg2645z00_2165);
																		BgL_modz00_2164 =
																			(BgL_offsetz00_2163 / BgL_auxz00_2919);
																}}
																{	/* Integrate/cto.scm 170 */
																	long BgL_restz00_2166;

																	{	/* Integrate/cto.scm 170 */
																		int BgL_arg2644z00_2167;

																		BgL_arg2644z00_2167 = (int) (((long) 16));
																		{	/* Integrate/cto.scm 170 */
																			long BgL_auxz00_2923;

																			BgL_auxz00_2923 =
																				(long) (BgL_arg2644z00_2167);
																			BgL_restz00_2166 =
																				(BgL_offsetz00_2163 % BgL_auxz00_2923);
																	}}
																	{	/* Integrate/cto.scm 170 */

																		BgL_method3539z00_2156 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2161,
																				(int) (BgL_modz00_2164)),
																			(int) (BgL_restz00_2166));
										}}}}}}}}
										return
											PROCEDURE_ENTRY(BgL_method3539z00_2156)
											(BgL_method3539z00_2156, (obj_t) (BgL_arg3703z00_1514),
											(obj_t) (BgL_localz00_2155), BEOA);
									}
								}
							}
						else
							{	/* Integrate/cto.scm 171 */
								obj_t BgL_llocalz00_1515;

								BgL_llocalz00_1515 = CAR(BgL_localsz00_1511);
								{	/* Integrate/cto.scm 171 */
									BgL_valuez00_bglt BgL_funz00_1516;

									{
										BgL_variablez00_bglt BgL_auxz00_2935;

										BgL_auxz00_2935 =
											(BgL_variablez00_bglt) (BgL_llocalz00_1515);
										BgL_funz00_1516 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_2935))->
											BgL_valuez00);
									}
									{	/* Integrate/cto.scm 173 */

										{	/* Integrate/cto.scm 175 */
											obj_t BgL_arg3704z00_1518;

											{
												BgL_sfunz00_bglt BgL_auxz00_2938;

												BgL_auxz00_2938 = (BgL_sfunz00_bglt) (BgL_funz00_1516);
												BgL_arg3704z00_1518 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2938))->
													BgL_bodyz00);
											}
											{	/* Integrate/cto.scm 175 */
												BgL_nodez00_bglt BgL_nodez00_2185;

												BgL_localz00_bglt BgL_localz00_2186;

												BgL_nodez00_2185 =
													(BgL_nodez00_bglt) (BgL_arg3704z00_1518);
												BgL_localz00_2186 =
													(BgL_localz00_bglt) (BgL_localz00_1505);
												{	/* Integrate/cto.scm 175 */
													obj_t BgL_method3539z00_2187;

													{	/* Integrate/cto.scm 175 */
														BgL_objectz00_bglt BgL_objz00_2188;

														BgL_objz00_2188 =
															(BgL_objectz00_bglt) (BgL_nodez00_2185);
														{	/* Integrate/cto.scm 175 */
															long BgL_objzd2classzd2numz00_2189;

															BgL_objzd2classzd2numz00_2189 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2188);
															{	/* Integrate/cto.scm 175 */
																obj_t BgL_arg2643z00_2190;

																BgL_arg2643z00_2190 =
																	PROCEDURE_REF
																	(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
																	(int) (((long) 1)));
																{	/* Integrate/cto.scm 175 */
																	obj_t BgL_arrayz00_2192;

																	int BgL_offsetz00_2193;

																	BgL_arrayz00_2192 = BgL_arg2643z00_2190;
																	BgL_offsetz00_2193 =
																		(int) (BgL_objzd2classzd2numz00_2189);
																	{	/* Integrate/cto.scm 175 */
																		long BgL_offsetz00_2194;

																		BgL_offsetz00_2194 =
																			(
																			(long) (BgL_offsetz00_2193) -
																			OBJECT_TYPE);
																		{	/* Integrate/cto.scm 175 */
																			long BgL_modz00_2195;

																			{	/* Integrate/cto.scm 175 */
																				int BgL_arg2645z00_2196;

																				BgL_arg2645z00_2196 =
																					(int) (((long) 16));
																				{	/* Integrate/cto.scm 175 */
																					long BgL_auxz00_2951;

																					BgL_auxz00_2951 =
																						(long) (BgL_arg2645z00_2196);
																					BgL_modz00_2195 =
																						(BgL_offsetz00_2194 /
																						BgL_auxz00_2951);
																			}}
																			{	/* Integrate/cto.scm 175 */
																				long BgL_restz00_2197;

																				{	/* Integrate/cto.scm 175 */
																					int BgL_arg2644z00_2198;

																					BgL_arg2644z00_2198 =
																						(int) (((long) 16));
																					{	/* Integrate/cto.scm 175 */
																						long BgL_auxz00_2955;

																						BgL_auxz00_2955 =
																							(long) (BgL_arg2644z00_2198);
																						BgL_restz00_2197 =
																							(BgL_offsetz00_2194 %
																							BgL_auxz00_2955);
																				}}
																				{	/* Integrate/cto.scm 175 */

																					BgL_method3539z00_2187 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2192,
																							(int) (BgL_modz00_2195)),
																						(int) (BgL_restz00_2197));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method3539z00_2187)
														(BgL_method3539z00_2187, (obj_t) (BgL_nodez00_2185),
														(obj_t) (BgL_localz00_2186), BEOA);
										}}}
										{
											obj_t BgL_localsz00_2966;

											BgL_localsz00_2966 = CDR(BgL_localsz00_1511);
											BgL_localsz00_1511 = BgL_localsz00_2966;
											goto BgL_zc3anonymousza33701ze3z83_1512;
										}
									}
								}
							}
					}
				}
			}
		}
	}



/* set-cto!-select3569 */
	obj_t BGl_setzd2ctoz12zd2select3569z12zzintegrate_ctoz00(obj_t
		BgL_envz00_2529, obj_t BgL_nodez00_2530, obj_t BgL_localz00_2531)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 154 */
			{
				BgL_selectz00_bglt BgL_nodez00_1487;

				obj_t BgL_localz00_1488;

				BgL_nodez00_1487 = (BgL_selectz00_bglt) (BgL_nodez00_2530);
				BgL_localz00_1488 = BgL_localz00_2531;
				{	/* Integrate/cto.scm 156 */
					obj_t BgL_g3515z00_1492;

					BgL_g3515z00_1492 =
						(((BgL_selectz00_bglt) CREF(BgL_nodez00_1487))->BgL_clausesz00);
					{
						obj_t BgL_clausesz00_1494;

						BgL_clausesz00_1494 = BgL_g3515z00_1492;
					BgL_zc3anonymousza33694ze3z83_1495:
						if (NULLP(BgL_clausesz00_1494))
							{	/* Integrate/cto.scm 158 */
								BgL_nodez00_bglt BgL_arg3696z00_1497;

								BgL_arg3696z00_1497 =
									(((BgL_selectz00_bglt) CREF(BgL_nodez00_1487))->BgL_testz00);
								{	/* Integrate/cto.scm 158 */
									BgL_localz00_bglt BgL_localz00_2095;

									BgL_localz00_2095 = (BgL_localz00_bglt) (BgL_localz00_1488);
									{	/* Integrate/cto.scm 158 */
										obj_t BgL_method3539z00_2096;

										{	/* Integrate/cto.scm 158 */
											BgL_objectz00_bglt BgL_objz00_2097;

											BgL_objz00_2097 =
												(BgL_objectz00_bglt) (BgL_arg3696z00_1497);
											{	/* Integrate/cto.scm 158 */
												long BgL_objzd2classzd2numz00_2098;

												BgL_objzd2classzd2numz00_2098 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2097);
												{	/* Integrate/cto.scm 158 */
													obj_t BgL_arg2643z00_2099;

													BgL_arg2643z00_2099 =
														PROCEDURE_REF
														(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
														(int) (((long) 1)));
													{	/* Integrate/cto.scm 158 */
														obj_t BgL_arrayz00_2101;

														int BgL_offsetz00_2102;

														BgL_arrayz00_2101 = BgL_arg2643z00_2099;
														BgL_offsetz00_2102 =
															(int) (BgL_objzd2classzd2numz00_2098);
														{	/* Integrate/cto.scm 158 */
															long BgL_offsetz00_2103;

															BgL_offsetz00_2103 =
																((long) (BgL_offsetz00_2102) - OBJECT_TYPE);
															{	/* Integrate/cto.scm 158 */
																long BgL_modz00_2104;

																{	/* Integrate/cto.scm 158 */
																	int BgL_arg2645z00_2105;

																	BgL_arg2645z00_2105 = (int) (((long) 16));
																	{	/* Integrate/cto.scm 158 */
																		long BgL_auxz00_2982;

																		BgL_auxz00_2982 =
																			(long) (BgL_arg2645z00_2105);
																		BgL_modz00_2104 =
																			(BgL_offsetz00_2103 / BgL_auxz00_2982);
																}}
																{	/* Integrate/cto.scm 158 */
																	long BgL_restz00_2106;

																	{	/* Integrate/cto.scm 158 */
																		int BgL_arg2644z00_2107;

																		BgL_arg2644z00_2107 = (int) (((long) 16));
																		{	/* Integrate/cto.scm 158 */
																			long BgL_auxz00_2986;

																			BgL_auxz00_2986 =
																				(long) (BgL_arg2644z00_2107);
																			BgL_restz00_2106 =
																				(BgL_offsetz00_2103 % BgL_auxz00_2986);
																	}}
																	{	/* Integrate/cto.scm 158 */

																		BgL_method3539z00_2096 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2101,
																				(int) (BgL_modz00_2104)),
																			(int) (BgL_restz00_2106));
										}}}}}}}}
										return
											PROCEDURE_ENTRY(BgL_method3539z00_2096)
											(BgL_method3539z00_2096, (obj_t) (BgL_arg3696z00_1497),
											(obj_t) (BgL_localz00_2095), BEOA);
									}
								}
							}
						else
							{	/* Integrate/cto.scm 157 */
								{	/* Integrate/cto.scm 160 */
									obj_t BgL_arg3697z00_1498;

									BgL_arg3697z00_1498 = CDR(CAR(BgL_clausesz00_1494));
									{	/* Integrate/cto.scm 160 */
										BgL_nodez00_bglt BgL_nodez00_2123;

										BgL_localz00_bglt BgL_localz00_2124;

										BgL_nodez00_2123 = (BgL_nodez00_bglt) (BgL_arg3697z00_1498);
										BgL_localz00_2124 = (BgL_localz00_bglt) (BgL_localz00_1488);
										{	/* Integrate/cto.scm 160 */
											obj_t BgL_method3539z00_2125;

											{	/* Integrate/cto.scm 160 */
												BgL_objectz00_bglt BgL_objz00_2126;

												BgL_objz00_2126 =
													(BgL_objectz00_bglt) (BgL_nodez00_2123);
												{	/* Integrate/cto.scm 160 */
													long BgL_objzd2classzd2numz00_2127;

													BgL_objzd2classzd2numz00_2127 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2126);
													{	/* Integrate/cto.scm 160 */
														obj_t BgL_arg2643z00_2128;

														BgL_arg2643z00_2128 =
															PROCEDURE_REF
															(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
															(int) (((long) 1)));
														{	/* Integrate/cto.scm 160 */
															obj_t BgL_arrayz00_2130;

															int BgL_offsetz00_2131;

															BgL_arrayz00_2130 = BgL_arg2643z00_2128;
															BgL_offsetz00_2131 =
																(int) (BgL_objzd2classzd2numz00_2127);
															{	/* Integrate/cto.scm 160 */
																long BgL_offsetz00_2132;

																BgL_offsetz00_2132 =
																	((long) (BgL_offsetz00_2131) - OBJECT_TYPE);
																{	/* Integrate/cto.scm 160 */
																	long BgL_modz00_2133;

																	{	/* Integrate/cto.scm 160 */
																		int BgL_arg2645z00_2134;

																		BgL_arg2645z00_2134 = (int) (((long) 16));
																		{	/* Integrate/cto.scm 160 */
																			long BgL_auxz00_3009;

																			BgL_auxz00_3009 =
																				(long) (BgL_arg2645z00_2134);
																			BgL_modz00_2133 =
																				(BgL_offsetz00_2132 / BgL_auxz00_3009);
																	}}
																	{	/* Integrate/cto.scm 160 */
																		long BgL_restz00_2135;

																		{	/* Integrate/cto.scm 160 */
																			int BgL_arg2644z00_2136;

																			BgL_arg2644z00_2136 = (int) (((long) 16));
																			{	/* Integrate/cto.scm 160 */
																				long BgL_auxz00_3013;

																				BgL_auxz00_3013 =
																					(long) (BgL_arg2644z00_2136);
																				BgL_restz00_2135 =
																					(BgL_offsetz00_2132 %
																					BgL_auxz00_3013);
																		}}
																		{	/* Integrate/cto.scm 160 */

																			BgL_method3539z00_2125 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2130,
																					(int) (BgL_modz00_2133)),
																				(int) (BgL_restz00_2135));
											}}}}}}}}
											PROCEDURE_ENTRY(BgL_method3539z00_2125)
												(BgL_method3539z00_2125, (obj_t) (BgL_nodez00_2123),
												(obj_t) (BgL_localz00_2124), BEOA);
								}}}
								{
									obj_t BgL_clausesz00_3024;

									BgL_clausesz00_3024 = CDR(BgL_clausesz00_1494);
									BgL_clausesz00_1494 = BgL_clausesz00_3024;
									goto BgL_zc3anonymousza33694ze3z83_1495;
								}
							}
					}
				}
			}
		}
	}



/* set-cto!-fail3567 */
	obj_t BGl_setzd2ctoz12zd2fail3567z12zzintegrate_ctoz00(obj_t BgL_envz00_2532,
		obj_t BgL_nodez00_2533, obj_t BgL_localz00_2534)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 145 */
			{
				BgL_failz00_bglt BgL_nodez00_1477;

				obj_t BgL_localz00_1478;

				BgL_nodez00_1477 = (BgL_failz00_bglt) (BgL_nodez00_2533);
				BgL_localz00_1478 = BgL_localz00_2534;
				{	/* Integrate/cto.scm 147 */
					BgL_nodez00_bglt BgL_arg3690z00_1482;

					BgL_arg3690z00_1482 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1477))->BgL_procz00);
					{	/* Integrate/cto.scm 147 */
						BgL_localz00_bglt BgL_localz00_2009;

						BgL_localz00_2009 = (BgL_localz00_bglt) (BgL_localz00_1478);
						{	/* Integrate/cto.scm 147 */
							obj_t BgL_method3539z00_2010;

							{	/* Integrate/cto.scm 147 */
								BgL_objectz00_bglt BgL_objz00_2011;

								BgL_objz00_2011 = (BgL_objectz00_bglt) (BgL_arg3690z00_1482);
								{	/* Integrate/cto.scm 147 */
									long BgL_objzd2classzd2numz00_2012;

									BgL_objzd2classzd2numz00_2012 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2011);
									{	/* Integrate/cto.scm 147 */
										obj_t BgL_arg2643z00_2013;

										BgL_arg2643z00_2013 =
											PROCEDURE_REF(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
											(int) (((long) 1)));
										{	/* Integrate/cto.scm 147 */
											obj_t BgL_arrayz00_2015;

											int BgL_offsetz00_2016;

											BgL_arrayz00_2015 = BgL_arg2643z00_2013;
											BgL_offsetz00_2016 =
												(int) (BgL_objzd2classzd2numz00_2012);
											{	/* Integrate/cto.scm 147 */
												long BgL_offsetz00_2017;

												BgL_offsetz00_2017 =
													((long) (BgL_offsetz00_2016) - OBJECT_TYPE);
												{	/* Integrate/cto.scm 147 */
													long BgL_modz00_2018;

													{	/* Integrate/cto.scm 147 */
														int BgL_arg2645z00_2019;

														BgL_arg2645z00_2019 = (int) (((long) 16));
														{	/* Integrate/cto.scm 147 */
															long BgL_auxz00_3037;

															BgL_auxz00_3037 = (long) (BgL_arg2645z00_2019);
															BgL_modz00_2018 =
																(BgL_offsetz00_2017 / BgL_auxz00_3037);
													}}
													{	/* Integrate/cto.scm 147 */
														long BgL_restz00_2020;

														{	/* Integrate/cto.scm 147 */
															int BgL_arg2644z00_2021;

															BgL_arg2644z00_2021 = (int) (((long) 16));
															{	/* Integrate/cto.scm 147 */
																long BgL_auxz00_3041;

																BgL_auxz00_3041 = (long) (BgL_arg2644z00_2021);
																BgL_restz00_2020 =
																	(BgL_offsetz00_2017 % BgL_auxz00_3041);
														}}
														{	/* Integrate/cto.scm 147 */

															BgL_method3539z00_2010 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2015,
																	(int) (BgL_modz00_2018)),
																(int) (BgL_restz00_2020));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3539z00_2010) (BgL_method3539z00_2010,
								(obj_t) (BgL_arg3690z00_1482),
								(obj_t) (BgL_localz00_2009), BEOA);
				}}}
				{	/* Integrate/cto.scm 148 */
					BgL_nodez00_bglt BgL_arg3691z00_1483;

					BgL_arg3691z00_1483 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1477))->BgL_msgz00);
					{	/* Integrate/cto.scm 148 */
						BgL_localz00_bglt BgL_localz00_2037;

						BgL_localz00_2037 = (BgL_localz00_bglt) (BgL_localz00_1478);
						{	/* Integrate/cto.scm 148 */
							obj_t BgL_method3539z00_2038;

							{	/* Integrate/cto.scm 148 */
								BgL_objectz00_bglt BgL_objz00_2039;

								BgL_objz00_2039 = (BgL_objectz00_bglt) (BgL_arg3691z00_1483);
								{	/* Integrate/cto.scm 148 */
									long BgL_objzd2classzd2numz00_2040;

									BgL_objzd2classzd2numz00_2040 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2039);
									{	/* Integrate/cto.scm 148 */
										obj_t BgL_arg2643z00_2041;

										BgL_arg2643z00_2041 =
											PROCEDURE_REF(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
											(int) (((long) 1)));
										{	/* Integrate/cto.scm 148 */
											obj_t BgL_arrayz00_2043;

											int BgL_offsetz00_2044;

											BgL_arrayz00_2043 = BgL_arg2643z00_2041;
											BgL_offsetz00_2044 =
												(int) (BgL_objzd2classzd2numz00_2040);
											{	/* Integrate/cto.scm 148 */
												long BgL_offsetz00_2045;

												BgL_offsetz00_2045 =
													((long) (BgL_offsetz00_2044) - OBJECT_TYPE);
												{	/* Integrate/cto.scm 148 */
													long BgL_modz00_2046;

													{	/* Integrate/cto.scm 148 */
														int BgL_arg2645z00_2047;

														BgL_arg2645z00_2047 = (int) (((long) 16));
														{	/* Integrate/cto.scm 148 */
															long BgL_auxz00_3062;

															BgL_auxz00_3062 = (long) (BgL_arg2645z00_2047);
															BgL_modz00_2046 =
																(BgL_offsetz00_2045 / BgL_auxz00_3062);
													}}
													{	/* Integrate/cto.scm 148 */
														long BgL_restz00_2048;

														{	/* Integrate/cto.scm 148 */
															int BgL_arg2644z00_2049;

															BgL_arg2644z00_2049 = (int) (((long) 16));
															{	/* Integrate/cto.scm 148 */
																long BgL_auxz00_3066;

																BgL_auxz00_3066 = (long) (BgL_arg2644z00_2049);
																BgL_restz00_2048 =
																	(BgL_offsetz00_2045 % BgL_auxz00_3066);
														}}
														{	/* Integrate/cto.scm 148 */

															BgL_method3539z00_2038 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2043,
																	(int) (BgL_modz00_2046)),
																(int) (BgL_restz00_2048));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3539z00_2038) (BgL_method3539z00_2038,
								(obj_t) (BgL_arg3691z00_1483),
								(obj_t) (BgL_localz00_2037), BEOA);
				}}}
				{	/* Integrate/cto.scm 149 */
					BgL_nodez00_bglt BgL_arg3692z00_1484;

					BgL_arg3692z00_1484 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1477))->BgL_objz00);
					{	/* Integrate/cto.scm 149 */
						BgL_localz00_bglt BgL_localz00_2065;

						BgL_localz00_2065 = (BgL_localz00_bglt) (BgL_localz00_1478);
						{	/* Integrate/cto.scm 149 */
							obj_t BgL_method3539z00_2066;

							{	/* Integrate/cto.scm 149 */
								BgL_objectz00_bglt BgL_objz00_2067;

								BgL_objz00_2067 = (BgL_objectz00_bglt) (BgL_arg3692z00_1484);
								{	/* Integrate/cto.scm 149 */
									long BgL_objzd2classzd2numz00_2068;

									BgL_objzd2classzd2numz00_2068 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2067);
									{	/* Integrate/cto.scm 149 */
										obj_t BgL_arg2643z00_2069;

										BgL_arg2643z00_2069 =
											PROCEDURE_REF(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
											(int) (((long) 1)));
										{	/* Integrate/cto.scm 149 */
											obj_t BgL_arrayz00_2071;

											int BgL_offsetz00_2072;

											BgL_arrayz00_2071 = BgL_arg2643z00_2069;
											BgL_offsetz00_2072 =
												(int) (BgL_objzd2classzd2numz00_2068);
											{	/* Integrate/cto.scm 149 */
												long BgL_offsetz00_2073;

												BgL_offsetz00_2073 =
													((long) (BgL_offsetz00_2072) - OBJECT_TYPE);
												{	/* Integrate/cto.scm 149 */
													long BgL_modz00_2074;

													{	/* Integrate/cto.scm 149 */
														int BgL_arg2645z00_2075;

														BgL_arg2645z00_2075 = (int) (((long) 16));
														{	/* Integrate/cto.scm 149 */
															long BgL_auxz00_3087;

															BgL_auxz00_3087 = (long) (BgL_arg2645z00_2075);
															BgL_modz00_2074 =
																(BgL_offsetz00_2073 / BgL_auxz00_3087);
													}}
													{	/* Integrate/cto.scm 149 */
														long BgL_restz00_2076;

														{	/* Integrate/cto.scm 149 */
															int BgL_arg2644z00_2077;

															BgL_arg2644z00_2077 = (int) (((long) 16));
															{	/* Integrate/cto.scm 149 */
																long BgL_auxz00_3091;

																BgL_auxz00_3091 = (long) (BgL_arg2644z00_2077);
																BgL_restz00_2076 =
																	(BgL_offsetz00_2073 % BgL_auxz00_3091);
														}}
														{	/* Integrate/cto.scm 149 */

															BgL_method3539z00_2066 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2071,
																	(int) (BgL_modz00_2074)),
																(int) (BgL_restz00_2076));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3539z00_2066) (BgL_method3539z00_2066,
								(obj_t) (BgL_arg3692z00_1484),
								(obj_t) (BgL_localz00_2065), BEOA);
						}
					}
				}
			}
		}
	}



/* set-cto!-conditional3565 */
	obj_t BGl_setzd2ctoz12zd2conditional3565z12zzintegrate_ctoz00(obj_t
		BgL_envz00_2535, obj_t BgL_nodez00_2536, obj_t BgL_localz00_2537)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 136 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1467;

				obj_t BgL_localz00_1468;

				BgL_nodez00_1467 = (BgL_conditionalz00_bglt) (BgL_nodez00_2536);
				BgL_localz00_1468 = BgL_localz00_2537;
				{	/* Integrate/cto.scm 138 */
					BgL_nodez00_bglt BgL_arg3686z00_1472;

					BgL_arg3686z00_1472 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1467))->BgL_testz00);
					{	/* Integrate/cto.scm 138 */
						BgL_localz00_bglt BgL_localz00_1925;

						BgL_localz00_1925 = (BgL_localz00_bglt) (BgL_localz00_1468);
						{	/* Integrate/cto.scm 138 */
							obj_t BgL_method3539z00_1926;

							{	/* Integrate/cto.scm 138 */
								BgL_objectz00_bglt BgL_objz00_1927;

								BgL_objz00_1927 = (BgL_objectz00_bglt) (BgL_arg3686z00_1472);
								{	/* Integrate/cto.scm 138 */
									long BgL_objzd2classzd2numz00_1928;

									BgL_objzd2classzd2numz00_1928 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1927);
									{	/* Integrate/cto.scm 138 */
										obj_t BgL_arg2643z00_1929;

										BgL_arg2643z00_1929 =
											PROCEDURE_REF(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
											(int) (((long) 1)));
										{	/* Integrate/cto.scm 138 */
											obj_t BgL_arrayz00_1931;

											int BgL_offsetz00_1932;

											BgL_arrayz00_1931 = BgL_arg2643z00_1929;
											BgL_offsetz00_1932 =
												(int) (BgL_objzd2classzd2numz00_1928);
											{	/* Integrate/cto.scm 138 */
												long BgL_offsetz00_1933;

												BgL_offsetz00_1933 =
													((long) (BgL_offsetz00_1932) - OBJECT_TYPE);
												{	/* Integrate/cto.scm 138 */
													long BgL_modz00_1934;

													{	/* Integrate/cto.scm 138 */
														int BgL_arg2645z00_1935;

														BgL_arg2645z00_1935 = (int) (((long) 16));
														{	/* Integrate/cto.scm 138 */
															long BgL_auxz00_3113;

															BgL_auxz00_3113 = (long) (BgL_arg2645z00_1935);
															BgL_modz00_1934 =
																(BgL_offsetz00_1933 / BgL_auxz00_3113);
													}}
													{	/* Integrate/cto.scm 138 */
														long BgL_restz00_1936;

														{	/* Integrate/cto.scm 138 */
															int BgL_arg2644z00_1937;

															BgL_arg2644z00_1937 = (int) (((long) 16));
															{	/* Integrate/cto.scm 138 */
																long BgL_auxz00_3117;

																BgL_auxz00_3117 = (long) (BgL_arg2644z00_1937);
																BgL_restz00_1936 =
																	(BgL_offsetz00_1933 % BgL_auxz00_3117);
														}}
														{	/* Integrate/cto.scm 138 */

															BgL_method3539z00_1926 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1931,
																	(int) (BgL_modz00_1934)),
																(int) (BgL_restz00_1936));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3539z00_1926) (BgL_method3539z00_1926,
								(obj_t) (BgL_arg3686z00_1472),
								(obj_t) (BgL_localz00_1925), BEOA);
				}}}
				{	/* Integrate/cto.scm 139 */
					BgL_nodez00_bglt BgL_arg3687z00_1473;

					BgL_arg3687z00_1473 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1467))->BgL_truez00);
					{	/* Integrate/cto.scm 139 */
						BgL_localz00_bglt BgL_localz00_1953;

						BgL_localz00_1953 = (BgL_localz00_bglt) (BgL_localz00_1468);
						{	/* Integrate/cto.scm 139 */
							obj_t BgL_method3539z00_1954;

							{	/* Integrate/cto.scm 139 */
								BgL_objectz00_bglt BgL_objz00_1955;

								BgL_objz00_1955 = (BgL_objectz00_bglt) (BgL_arg3687z00_1473);
								{	/* Integrate/cto.scm 139 */
									long BgL_objzd2classzd2numz00_1956;

									BgL_objzd2classzd2numz00_1956 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1955);
									{	/* Integrate/cto.scm 139 */
										obj_t BgL_arg2643z00_1957;

										BgL_arg2643z00_1957 =
											PROCEDURE_REF(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
											(int) (((long) 1)));
										{	/* Integrate/cto.scm 139 */
											obj_t BgL_arrayz00_1959;

											int BgL_offsetz00_1960;

											BgL_arrayz00_1959 = BgL_arg2643z00_1957;
											BgL_offsetz00_1960 =
												(int) (BgL_objzd2classzd2numz00_1956);
											{	/* Integrate/cto.scm 139 */
												long BgL_offsetz00_1961;

												BgL_offsetz00_1961 =
													((long) (BgL_offsetz00_1960) - OBJECT_TYPE);
												{	/* Integrate/cto.scm 139 */
													long BgL_modz00_1962;

													{	/* Integrate/cto.scm 139 */
														int BgL_arg2645z00_1963;

														BgL_arg2645z00_1963 = (int) (((long) 16));
														{	/* Integrate/cto.scm 139 */
															long BgL_auxz00_3138;

															BgL_auxz00_3138 = (long) (BgL_arg2645z00_1963);
															BgL_modz00_1962 =
																(BgL_offsetz00_1961 / BgL_auxz00_3138);
													}}
													{	/* Integrate/cto.scm 139 */
														long BgL_restz00_1964;

														{	/* Integrate/cto.scm 139 */
															int BgL_arg2644z00_1965;

															BgL_arg2644z00_1965 = (int) (((long) 16));
															{	/* Integrate/cto.scm 139 */
																long BgL_auxz00_3142;

																BgL_auxz00_3142 = (long) (BgL_arg2644z00_1965);
																BgL_restz00_1964 =
																	(BgL_offsetz00_1961 % BgL_auxz00_3142);
														}}
														{	/* Integrate/cto.scm 139 */

															BgL_method3539z00_1954 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1959,
																	(int) (BgL_modz00_1962)),
																(int) (BgL_restz00_1964));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3539z00_1954) (BgL_method3539z00_1954,
								(obj_t) (BgL_arg3687z00_1473),
								(obj_t) (BgL_localz00_1953), BEOA);
				}}}
				{	/* Integrate/cto.scm 140 */
					BgL_nodez00_bglt BgL_arg3688z00_1474;

					BgL_arg3688z00_1474 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1467))->BgL_falsez00);
					{	/* Integrate/cto.scm 140 */
						BgL_localz00_bglt BgL_localz00_1981;

						BgL_localz00_1981 = (BgL_localz00_bglt) (BgL_localz00_1468);
						{	/* Integrate/cto.scm 140 */
							obj_t BgL_method3539z00_1982;

							{	/* Integrate/cto.scm 140 */
								BgL_objectz00_bglt BgL_objz00_1983;

								BgL_objz00_1983 = (BgL_objectz00_bglt) (BgL_arg3688z00_1474);
								{	/* Integrate/cto.scm 140 */
									long BgL_objzd2classzd2numz00_1984;

									BgL_objzd2classzd2numz00_1984 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1983);
									{	/* Integrate/cto.scm 140 */
										obj_t BgL_arg2643z00_1985;

										BgL_arg2643z00_1985 =
											PROCEDURE_REF(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
											(int) (((long) 1)));
										{	/* Integrate/cto.scm 140 */
											obj_t BgL_arrayz00_1987;

											int BgL_offsetz00_1988;

											BgL_arrayz00_1987 = BgL_arg2643z00_1985;
											BgL_offsetz00_1988 =
												(int) (BgL_objzd2classzd2numz00_1984);
											{	/* Integrate/cto.scm 140 */
												long BgL_offsetz00_1989;

												BgL_offsetz00_1989 =
													((long) (BgL_offsetz00_1988) - OBJECT_TYPE);
												{	/* Integrate/cto.scm 140 */
													long BgL_modz00_1990;

													{	/* Integrate/cto.scm 140 */
														int BgL_arg2645z00_1991;

														BgL_arg2645z00_1991 = (int) (((long) 16));
														{	/* Integrate/cto.scm 140 */
															long BgL_auxz00_3163;

															BgL_auxz00_3163 = (long) (BgL_arg2645z00_1991);
															BgL_modz00_1990 =
																(BgL_offsetz00_1989 / BgL_auxz00_3163);
													}}
													{	/* Integrate/cto.scm 140 */
														long BgL_restz00_1992;

														{	/* Integrate/cto.scm 140 */
															int BgL_arg2644z00_1993;

															BgL_arg2644z00_1993 = (int) (((long) 16));
															{	/* Integrate/cto.scm 140 */
																long BgL_auxz00_3167;

																BgL_auxz00_3167 = (long) (BgL_arg2644z00_1993);
																BgL_restz00_1992 =
																	(BgL_offsetz00_1989 % BgL_auxz00_3167);
														}}
														{	/* Integrate/cto.scm 140 */

															BgL_method3539z00_1982 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1987,
																	(int) (BgL_modz00_1990)),
																(int) (BgL_restz00_1992));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3539z00_1982) (BgL_method3539z00_1982,
								(obj_t) (BgL_arg3688z00_1474),
								(obj_t) (BgL_localz00_1981), BEOA);
						}
					}
				}
			}
		}
	}



/* set-cto!-setq3563 */
	obj_t BGl_setzd2ctoz12zd2setq3563z12zzintegrate_ctoz00(obj_t BgL_envz00_2538,
		obj_t BgL_nodez00_2539, obj_t BgL_localz00_2540)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 128 */
			{
				BgL_setqz00_bglt BgL_nodez00_1458;

				obj_t BgL_localz00_1459;

				BgL_nodez00_1458 = (BgL_setqz00_bglt) (BgL_nodez00_2539);
				BgL_localz00_1459 = BgL_localz00_2540;
				{	/* Integrate/cto.scm 129 */
					BgL_varz00_bglt BgL_arg3683z00_1865;

					BgL_arg3683z00_1865 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1458))->BgL_varz00);
					{	/* Integrate/cto.scm 129 */
						BgL_nodez00_bglt BgL_nodez00_1868;

						BgL_localz00_bglt BgL_localz00_1869;

						BgL_nodez00_1868 = (BgL_nodez00_bglt) (BgL_arg3683z00_1865);
						BgL_localz00_1869 = (BgL_localz00_bglt) (BgL_localz00_1459);
						{	/* Integrate/cto.scm 129 */
							obj_t BgL_method3539z00_1870;

							{	/* Integrate/cto.scm 129 */
								BgL_objectz00_bglt BgL_objz00_1871;

								BgL_objz00_1871 = (BgL_objectz00_bglt) (BgL_nodez00_1868);
								{	/* Integrate/cto.scm 129 */
									long BgL_objzd2classzd2numz00_1872;

									BgL_objzd2classzd2numz00_1872 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1871);
									{	/* Integrate/cto.scm 129 */
										obj_t BgL_arg2643z00_1873;

										BgL_arg2643z00_1873 =
											PROCEDURE_REF(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
											(int) (((long) 1)));
										{	/* Integrate/cto.scm 129 */
											obj_t BgL_arrayz00_1875;

											int BgL_offsetz00_1876;

											BgL_arrayz00_1875 = BgL_arg2643z00_1873;
											BgL_offsetz00_1876 =
												(int) (BgL_objzd2classzd2numz00_1872);
											{	/* Integrate/cto.scm 129 */
												long BgL_offsetz00_1877;

												BgL_offsetz00_1877 =
													((long) (BgL_offsetz00_1876) - OBJECT_TYPE);
												{	/* Integrate/cto.scm 129 */
													long BgL_modz00_1878;

													{	/* Integrate/cto.scm 129 */
														int BgL_arg2645z00_1879;

														BgL_arg2645z00_1879 = (int) (((long) 16));
														{	/* Integrate/cto.scm 129 */
															long BgL_auxz00_3190;

															BgL_auxz00_3190 = (long) (BgL_arg2645z00_1879);
															BgL_modz00_1878 =
																(BgL_offsetz00_1877 / BgL_auxz00_3190);
													}}
													{	/* Integrate/cto.scm 129 */
														long BgL_restz00_1880;

														{	/* Integrate/cto.scm 129 */
															int BgL_arg2644z00_1881;

															BgL_arg2644z00_1881 = (int) (((long) 16));
															{	/* Integrate/cto.scm 129 */
																long BgL_auxz00_3194;

																BgL_auxz00_3194 = (long) (BgL_arg2644z00_1881);
																BgL_restz00_1880 =
																	(BgL_offsetz00_1877 % BgL_auxz00_3194);
														}}
														{	/* Integrate/cto.scm 129 */

															BgL_method3539z00_1870 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1875,
																	(int) (BgL_modz00_1878)),
																(int) (BgL_restz00_1880));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3539z00_1870) (BgL_method3539z00_1870,
								(obj_t) (BgL_nodez00_1868), (obj_t) (BgL_localz00_1869), BEOA);
				}}}
				{	/* Integrate/cto.scm 129 */
					BgL_nodez00_bglt BgL_arg3684z00_1866;

					BgL_arg3684z00_1866 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1458))->BgL_valuez00);
					{	/* Integrate/cto.scm 129 */
						BgL_localz00_bglt BgL_localz00_1897;

						BgL_localz00_1897 = (BgL_localz00_bglt) (BgL_localz00_1459);
						{	/* Integrate/cto.scm 129 */
							obj_t BgL_method3539z00_1898;

							{	/* Integrate/cto.scm 129 */
								BgL_objectz00_bglt BgL_objz00_1899;

								BgL_objz00_1899 = (BgL_objectz00_bglt) (BgL_arg3684z00_1866);
								{	/* Integrate/cto.scm 129 */
									long BgL_objzd2classzd2numz00_1900;

									BgL_objzd2classzd2numz00_1900 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1899);
									{	/* Integrate/cto.scm 129 */
										obj_t BgL_arg2643z00_1901;

										BgL_arg2643z00_1901 =
											PROCEDURE_REF(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
											(int) (((long) 1)));
										{	/* Integrate/cto.scm 129 */
											obj_t BgL_arrayz00_1903;

											int BgL_offsetz00_1904;

											BgL_arrayz00_1903 = BgL_arg2643z00_1901;
											BgL_offsetz00_1904 =
												(int) (BgL_objzd2classzd2numz00_1900);
											{	/* Integrate/cto.scm 129 */
												long BgL_offsetz00_1905;

												BgL_offsetz00_1905 =
													((long) (BgL_offsetz00_1904) - OBJECT_TYPE);
												{	/* Integrate/cto.scm 129 */
													long BgL_modz00_1906;

													{	/* Integrate/cto.scm 129 */
														int BgL_arg2645z00_1907;

														BgL_arg2645z00_1907 = (int) (((long) 16));
														{	/* Integrate/cto.scm 129 */
															long BgL_auxz00_3215;

															BgL_auxz00_3215 = (long) (BgL_arg2645z00_1907);
															BgL_modz00_1906 =
																(BgL_offsetz00_1905 / BgL_auxz00_3215);
													}}
													{	/* Integrate/cto.scm 129 */
														long BgL_restz00_1908;

														{	/* Integrate/cto.scm 129 */
															int BgL_arg2644z00_1909;

															BgL_arg2644z00_1909 = (int) (((long) 16));
															{	/* Integrate/cto.scm 129 */
																long BgL_auxz00_3219;

																BgL_auxz00_3219 = (long) (BgL_arg2644z00_1909);
																BgL_restz00_1908 =
																	(BgL_offsetz00_1905 % BgL_auxz00_3219);
														}}
														{	/* Integrate/cto.scm 129 */

															BgL_method3539z00_1898 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1903,
																	(int) (BgL_modz00_1906)),
																(int) (BgL_restz00_1908));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3539z00_1898) (BgL_method3539z00_1898,
								(obj_t) (BgL_arg3684z00_1866),
								(obj_t) (BgL_localz00_1897), BEOA);
						}
					}
				}
			}
		}
	}



/* set-cto!-cast3561 */
	obj_t BGl_setzd2ctoz12zd2cast3561z12zzintegrate_ctoz00(obj_t BgL_envz00_2541,
		obj_t BgL_nodez00_2542, obj_t BgL_localz00_2543)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 121 */
			{
				BgL_castz00_bglt BgL_nodez00_1450;

				obj_t BgL_localz00_1451;

				BgL_nodez00_1450 = (BgL_castz00_bglt) (BgL_nodez00_2542);
				BgL_localz00_1451 = BgL_localz00_2543;
				{	/* Integrate/cto.scm 122 */
					BgL_nodez00_bglt BgL_arg3681z00_1835;

					BgL_arg3681z00_1835 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_1450))->BgL_argz00);
					{	/* Integrate/cto.scm 122 */
						BgL_localz00_bglt BgL_localz00_1838;

						BgL_localz00_1838 = (BgL_localz00_bglt) (BgL_localz00_1451);
						{	/* Integrate/cto.scm 122 */
							obj_t BgL_method3539z00_1839;

							{	/* Integrate/cto.scm 122 */
								BgL_objectz00_bglt BgL_objz00_1840;

								BgL_objz00_1840 = (BgL_objectz00_bglt) (BgL_arg3681z00_1835);
								{	/* Integrate/cto.scm 122 */
									long BgL_objzd2classzd2numz00_1841;

									BgL_objzd2classzd2numz00_1841 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1840);
									{	/* Integrate/cto.scm 122 */
										obj_t BgL_arg2643z00_1842;

										BgL_arg2643z00_1842 =
											PROCEDURE_REF(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
											(int) (((long) 1)));
										{	/* Integrate/cto.scm 122 */
											obj_t BgL_arrayz00_1844;

											int BgL_offsetz00_1845;

											BgL_arrayz00_1844 = BgL_arg2643z00_1842;
											BgL_offsetz00_1845 =
												(int) (BgL_objzd2classzd2numz00_1841);
											{	/* Integrate/cto.scm 122 */
												long BgL_offsetz00_1846;

												BgL_offsetz00_1846 =
													((long) (BgL_offsetz00_1845) - OBJECT_TYPE);
												{	/* Integrate/cto.scm 122 */
													long BgL_modz00_1847;

													{	/* Integrate/cto.scm 122 */
														int BgL_arg2645z00_1848;

														BgL_arg2645z00_1848 = (int) (((long) 16));
														{	/* Integrate/cto.scm 122 */
															long BgL_auxz00_3241;

															BgL_auxz00_3241 = (long) (BgL_arg2645z00_1848);
															BgL_modz00_1847 =
																(BgL_offsetz00_1846 / BgL_auxz00_3241);
													}}
													{	/* Integrate/cto.scm 122 */
														long BgL_restz00_1849;

														{	/* Integrate/cto.scm 122 */
															int BgL_arg2644z00_1850;

															BgL_arg2644z00_1850 = (int) (((long) 16));
															{	/* Integrate/cto.scm 122 */
																long BgL_auxz00_3245;

																BgL_auxz00_3245 = (long) (BgL_arg2644z00_1850);
																BgL_restz00_1849 =
																	(BgL_offsetz00_1846 % BgL_auxz00_3245);
														}}
														{	/* Integrate/cto.scm 122 */

															BgL_method3539z00_1839 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1844,
																	(int) (BgL_modz00_1847)),
																(int) (BgL_restz00_1849));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3539z00_1839) (BgL_method3539z00_1839,
								(obj_t) (BgL_arg3681z00_1835),
								(obj_t) (BgL_localz00_1838), BEOA);
						}
					}
				}
			}
		}
	}



/* set-cto!-extern3558 */
	obj_t BGl_setzd2ctoz12zd2extern3558z12zzintegrate_ctoz00(obj_t
		BgL_envz00_2544, obj_t BgL_nodez00_2545, obj_t BgL_localz00_2546)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 114 */
			{
				BgL_externz00_bglt BgL_nodez00_1435;

				obj_t BgL_localz00_1436;

				{	/* Integrate/cto.scm 115 */
					bool_t BgL_auxz00_3257;

					BgL_nodez00_1435 = (BgL_externz00_bglt) (BgL_nodez00_2545);
					BgL_localz00_1436 = BgL_localz00_2546;
					{	/* Integrate/cto.scm 116 */
						obj_t BgL_g3537z00_1440;

						BgL_g3537z00_1440 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1435))->BgL_exprza2za2);
						{
							obj_t BgL_l3535z00_1442;

							BgL_l3535z00_1442 = BgL_g3537z00_1440;
						BgL_zc3anonymousza33677ze3z83_1443:
							if (PAIRP(BgL_l3535z00_1442))
								{	/* Integrate/cto.scm 116 */
									{	/* Integrate/cto.scm 116 */
										obj_t BgL_nodez00_1445;

										BgL_nodez00_1445 = CAR(BgL_l3535z00_1442);
										{	/* Integrate/cto.scm 116 */
											BgL_nodez00_bglt BgL_nodez00_1806;

											BgL_localz00_bglt BgL_localz00_1807;

											BgL_nodez00_1806 = (BgL_nodez00_bglt) (BgL_nodez00_1445);
											BgL_localz00_1807 =
												(BgL_localz00_bglt) (BgL_localz00_1436);
											{	/* Integrate/cto.scm 116 */
												obj_t BgL_method3539z00_1808;

												{	/* Integrate/cto.scm 116 */
													BgL_objectz00_bglt BgL_objz00_1809;

													BgL_objz00_1809 =
														(BgL_objectz00_bglt) (BgL_nodez00_1806);
													{	/* Integrate/cto.scm 116 */
														long BgL_objzd2classzd2numz00_1810;

														BgL_objzd2classzd2numz00_1810 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1809);
														{	/* Integrate/cto.scm 116 */
															obj_t BgL_arg2643z00_1811;

															BgL_arg2643z00_1811 =
																PROCEDURE_REF
																(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
																(int) (((long) 1)));
															{	/* Integrate/cto.scm 116 */
																obj_t BgL_arrayz00_1813;

																int BgL_offsetz00_1814;

																BgL_arrayz00_1813 = BgL_arg2643z00_1811;
																BgL_offsetz00_1814 =
																	(int) (BgL_objzd2classzd2numz00_1810);
																{	/* Integrate/cto.scm 116 */
																	long BgL_offsetz00_1815;

																	BgL_offsetz00_1815 =
																		((long) (BgL_offsetz00_1814) - OBJECT_TYPE);
																	{	/* Integrate/cto.scm 116 */
																		long BgL_modz00_1816;

																		{	/* Integrate/cto.scm 116 */
																			int BgL_arg2645z00_1817;

																			BgL_arg2645z00_1817 = (int) (((long) 16));
																			{	/* Integrate/cto.scm 116 */
																				long BgL_auxz00_3272;

																				BgL_auxz00_3272 =
																					(long) (BgL_arg2645z00_1817);
																				BgL_modz00_1816 =
																					(BgL_offsetz00_1815 /
																					BgL_auxz00_3272);
																		}}
																		{	/* Integrate/cto.scm 116 */
																			long BgL_restz00_1818;

																			{	/* Integrate/cto.scm 116 */
																				int BgL_arg2644z00_1819;

																				BgL_arg2644z00_1819 =
																					(int) (((long) 16));
																				{	/* Integrate/cto.scm 116 */
																					long BgL_auxz00_3276;

																					BgL_auxz00_3276 =
																						(long) (BgL_arg2644z00_1819);
																					BgL_restz00_1818 =
																						(BgL_offsetz00_1815 %
																						BgL_auxz00_3276);
																			}}
																			{	/* Integrate/cto.scm 116 */

																				BgL_method3539z00_1808 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1813,
																						(int) (BgL_modz00_1816)),
																					(int) (BgL_restz00_1818));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method3539z00_1808)
													(BgL_method3539z00_1808, (obj_t) (BgL_nodez00_1806),
													(obj_t) (BgL_localz00_1807), BEOA);
									}}}
									{
										obj_t BgL_l3535z00_3287;

										BgL_l3535z00_3287 = CDR(BgL_l3535z00_1442);
										BgL_l3535z00_1442 = BgL_l3535z00_3287;
										goto BgL_zc3anonymousza33677ze3z83_1443;
									}
								}
							else
								{	/* Integrate/cto.scm 116 */
									BgL_auxz00_3257 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_3257);
				}
			}
		}
	}



/* set-cto!-funcall3555 */
	obj_t BGl_setzd2ctoz12zd2funcall3555z12zzintegrate_ctoz00(obj_t
		BgL_envz00_2547, obj_t BgL_nodez00_2548, obj_t BgL_localz00_2549)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 102 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1419;

				obj_t BgL_localz00_1420;

				BgL_nodez00_1419 = (BgL_funcallz00_bglt) (BgL_nodez00_2548);
				BgL_localz00_1420 = BgL_localz00_2549;
				{
					obj_t BgL_astsz00_1426;

					{	/* Integrate/cto.scm 104 */
						obj_t BgL_arg3670z00_1425;

						BgL_arg3670z00_1425 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1419))->BgL_argsz00);
						BgL_astsz00_1426 = BgL_arg3670z00_1425;
					BgL_zc3anonymousza33671ze3z83_1427:
						if (NULLP(BgL_astsz00_1426))
							{	/* Integrate/cto.scm 106 */
								BgL_nodez00_bglt BgL_arg3673z00_1429;

								BgL_arg3673z00_1429 =
									(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1419))->BgL_funz00);
								{	/* Integrate/cto.scm 106 */
									BgL_localz00_bglt BgL_localz00_1748;

									BgL_localz00_1748 = (BgL_localz00_bglt) (BgL_localz00_1420);
									{	/* Integrate/cto.scm 106 */
										obj_t BgL_method3539z00_1749;

										{	/* Integrate/cto.scm 106 */
											BgL_objectz00_bglt BgL_objz00_1750;

											BgL_objz00_1750 =
												(BgL_objectz00_bglt) (BgL_arg3673z00_1429);
											{	/* Integrate/cto.scm 106 */
												long BgL_objzd2classzd2numz00_1751;

												BgL_objzd2classzd2numz00_1751 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1750);
												{	/* Integrate/cto.scm 106 */
													obj_t BgL_arg2643z00_1752;

													BgL_arg2643z00_1752 =
														PROCEDURE_REF
														(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
														(int) (((long) 1)));
													{	/* Integrate/cto.scm 106 */
														obj_t BgL_arrayz00_1754;

														int BgL_offsetz00_1755;

														BgL_arrayz00_1754 = BgL_arg2643z00_1752;
														BgL_offsetz00_1755 =
															(int) (BgL_objzd2classzd2numz00_1751);
														{	/* Integrate/cto.scm 106 */
															long BgL_offsetz00_1756;

															BgL_offsetz00_1756 =
																((long) (BgL_offsetz00_1755) - OBJECT_TYPE);
															{	/* Integrate/cto.scm 106 */
																long BgL_modz00_1757;

																{	/* Integrate/cto.scm 106 */
																	int BgL_arg2645z00_1758;

																	BgL_arg2645z00_1758 = (int) (((long) 16));
																	{	/* Integrate/cto.scm 106 */
																		long BgL_auxz00_3304;

																		BgL_auxz00_3304 =
																			(long) (BgL_arg2645z00_1758);
																		BgL_modz00_1757 =
																			(BgL_offsetz00_1756 / BgL_auxz00_3304);
																}}
																{	/* Integrate/cto.scm 106 */
																	long BgL_restz00_1759;

																	{	/* Integrate/cto.scm 106 */
																		int BgL_arg2644z00_1760;

																		BgL_arg2644z00_1760 = (int) (((long) 16));
																		{	/* Integrate/cto.scm 106 */
																			long BgL_auxz00_3308;

																			BgL_auxz00_3308 =
																				(long) (BgL_arg2644z00_1760);
																			BgL_restz00_1759 =
																				(BgL_offsetz00_1756 % BgL_auxz00_3308);
																	}}
																	{	/* Integrate/cto.scm 106 */

																		BgL_method3539z00_1749 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1754,
																				(int) (BgL_modz00_1757)),
																			(int) (BgL_restz00_1759));
										}}}}}}}}
										return
											PROCEDURE_ENTRY(BgL_method3539z00_1749)
											(BgL_method3539z00_1749, (obj_t) (BgL_arg3673z00_1429),
											(obj_t) (BgL_localz00_1748), BEOA);
									}
								}
							}
						else
							{	/* Integrate/cto.scm 105 */
								{	/* Integrate/cto.scm 108 */
									obj_t BgL_arg3674z00_1430;

									BgL_arg3674z00_1430 = CAR(BgL_astsz00_1426);
									{	/* Integrate/cto.scm 108 */
										BgL_nodez00_bglt BgL_nodez00_1775;

										BgL_localz00_bglt BgL_localz00_1776;

										BgL_nodez00_1775 = (BgL_nodez00_bglt) (BgL_arg3674z00_1430);
										BgL_localz00_1776 = (BgL_localz00_bglt) (BgL_localz00_1420);
										{	/* Integrate/cto.scm 108 */
											obj_t BgL_method3539z00_1777;

											{	/* Integrate/cto.scm 108 */
												BgL_objectz00_bglt BgL_objz00_1778;

												BgL_objz00_1778 =
													(BgL_objectz00_bglt) (BgL_nodez00_1775);
												{	/* Integrate/cto.scm 108 */
													long BgL_objzd2classzd2numz00_1779;

													BgL_objzd2classzd2numz00_1779 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1778);
													{	/* Integrate/cto.scm 108 */
														obj_t BgL_arg2643z00_1780;

														BgL_arg2643z00_1780 =
															PROCEDURE_REF
															(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
															(int) (((long) 1)));
														{	/* Integrate/cto.scm 108 */
															obj_t BgL_arrayz00_1782;

															int BgL_offsetz00_1783;

															BgL_arrayz00_1782 = BgL_arg2643z00_1780;
															BgL_offsetz00_1783 =
																(int) (BgL_objzd2classzd2numz00_1779);
															{	/* Integrate/cto.scm 108 */
																long BgL_offsetz00_1784;

																BgL_offsetz00_1784 =
																	((long) (BgL_offsetz00_1783) - OBJECT_TYPE);
																{	/* Integrate/cto.scm 108 */
																	long BgL_modz00_1785;

																	{	/* Integrate/cto.scm 108 */
																		int BgL_arg2645z00_1786;

																		BgL_arg2645z00_1786 = (int) (((long) 16));
																		{	/* Integrate/cto.scm 108 */
																			long BgL_auxz00_3330;

																			BgL_auxz00_3330 =
																				(long) (BgL_arg2645z00_1786);
																			BgL_modz00_1785 =
																				(BgL_offsetz00_1784 / BgL_auxz00_3330);
																	}}
																	{	/* Integrate/cto.scm 108 */
																		long BgL_restz00_1787;

																		{	/* Integrate/cto.scm 108 */
																			int BgL_arg2644z00_1788;

																			BgL_arg2644z00_1788 = (int) (((long) 16));
																			{	/* Integrate/cto.scm 108 */
																				long BgL_auxz00_3334;

																				BgL_auxz00_3334 =
																					(long) (BgL_arg2644z00_1788);
																				BgL_restz00_1787 =
																					(BgL_offsetz00_1784 %
																					BgL_auxz00_3334);
																		}}
																		{	/* Integrate/cto.scm 108 */

																			BgL_method3539z00_1777 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1782,
																					(int) (BgL_modz00_1785)),
																				(int) (BgL_restz00_1787));
											}}}}}}}}
											PROCEDURE_ENTRY(BgL_method3539z00_1777)
												(BgL_method3539z00_1777, (obj_t) (BgL_nodez00_1775),
												(obj_t) (BgL_localz00_1776), BEOA);
								}}}
								{
									obj_t BgL_astsz00_3345;

									BgL_astsz00_3345 = CDR(BgL_astsz00_1426);
									BgL_astsz00_1426 = BgL_astsz00_3345;
									goto BgL_zc3anonymousza33671ze3z83_1427;
								}
							}
					}
				}
			}
		}
	}



/* set-cto!-app-ly3553 */
	obj_t BGl_setzd2ctoz12zd2appzd2ly3553zc0zzintegrate_ctoz00(obj_t
		BgL_envz00_2550, obj_t BgL_nodez00_2551, obj_t BgL_localz00_2552)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 94 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1410;

				obj_t BgL_localz00_1411;

				BgL_nodez00_1410 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2551);
				BgL_localz00_1411 = BgL_localz00_2552;
				{	/* Integrate/cto.scm 95 */
					BgL_nodez00_bglt BgL_arg3667z00_1686;

					BgL_arg3667z00_1686 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1410))->BgL_funz00);
					{	/* Integrate/cto.scm 95 */
						BgL_localz00_bglt BgL_localz00_1690;

						BgL_localz00_1690 = (BgL_localz00_bglt) (BgL_localz00_1411);
						{	/* Integrate/cto.scm 95 */
							obj_t BgL_method3539z00_1691;

							{	/* Integrate/cto.scm 95 */
								BgL_objectz00_bglt BgL_objz00_1692;

								BgL_objz00_1692 = (BgL_objectz00_bglt) (BgL_arg3667z00_1686);
								{	/* Integrate/cto.scm 95 */
									long BgL_objzd2classzd2numz00_1693;

									BgL_objzd2classzd2numz00_1693 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1692);
									{	/* Integrate/cto.scm 95 */
										obj_t BgL_arg2643z00_1694;

										BgL_arg2643z00_1694 =
											PROCEDURE_REF(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
											(int) (((long) 1)));
										{	/* Integrate/cto.scm 95 */
											obj_t BgL_arrayz00_1696;

											int BgL_offsetz00_1697;

											BgL_arrayz00_1696 = BgL_arg2643z00_1694;
											BgL_offsetz00_1697 =
												(int) (BgL_objzd2classzd2numz00_1693);
											{	/* Integrate/cto.scm 95 */
												long BgL_offsetz00_1698;

												BgL_offsetz00_1698 =
													((long) (BgL_offsetz00_1697) - OBJECT_TYPE);
												{	/* Integrate/cto.scm 95 */
													long BgL_modz00_1699;

													{	/* Integrate/cto.scm 95 */
														int BgL_arg2645z00_1700;

														BgL_arg2645z00_1700 = (int) (((long) 16));
														{	/* Integrate/cto.scm 95 */
															long BgL_auxz00_3358;

															BgL_auxz00_3358 = (long) (BgL_arg2645z00_1700);
															BgL_modz00_1699 =
																(BgL_offsetz00_1698 / BgL_auxz00_3358);
													}}
													{	/* Integrate/cto.scm 95 */
														long BgL_restz00_1701;

														{	/* Integrate/cto.scm 95 */
															int BgL_arg2644z00_1702;

															BgL_arg2644z00_1702 = (int) (((long) 16));
															{	/* Integrate/cto.scm 95 */
																long BgL_auxz00_3362;

																BgL_auxz00_3362 = (long) (BgL_arg2644z00_1702);
																BgL_restz00_1701 =
																	(BgL_offsetz00_1698 % BgL_auxz00_3362);
														}}
														{	/* Integrate/cto.scm 95 */

															BgL_method3539z00_1691 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1696,
																	(int) (BgL_modz00_1699)),
																(int) (BgL_restz00_1701));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3539z00_1691) (BgL_method3539z00_1691,
								(obj_t) (BgL_arg3667z00_1686),
								(obj_t) (BgL_localz00_1690), BEOA);
				}}}
				{	/* Integrate/cto.scm 95 */
					BgL_nodez00_bglt BgL_arg3668z00_1687;

					BgL_arg3668z00_1687 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1410))->BgL_argz00);
					{	/* Integrate/cto.scm 95 */
						BgL_localz00_bglt BgL_localz00_1718;

						BgL_localz00_1718 = (BgL_localz00_bglt) (BgL_localz00_1411);
						{	/* Integrate/cto.scm 95 */
							obj_t BgL_method3539z00_1719;

							{	/* Integrate/cto.scm 95 */
								BgL_objectz00_bglt BgL_objz00_1720;

								BgL_objz00_1720 = (BgL_objectz00_bglt) (BgL_arg3668z00_1687);
								{	/* Integrate/cto.scm 95 */
									long BgL_objzd2classzd2numz00_1721;

									BgL_objzd2classzd2numz00_1721 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1720);
									{	/* Integrate/cto.scm 95 */
										obj_t BgL_arg2643z00_1722;

										BgL_arg2643z00_1722 =
											PROCEDURE_REF(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
											(int) (((long) 1)));
										{	/* Integrate/cto.scm 95 */
											obj_t BgL_arrayz00_1724;

											int BgL_offsetz00_1725;

											BgL_arrayz00_1724 = BgL_arg2643z00_1722;
											BgL_offsetz00_1725 =
												(int) (BgL_objzd2classzd2numz00_1721);
											{	/* Integrate/cto.scm 95 */
												long BgL_offsetz00_1726;

												BgL_offsetz00_1726 =
													((long) (BgL_offsetz00_1725) - OBJECT_TYPE);
												{	/* Integrate/cto.scm 95 */
													long BgL_modz00_1727;

													{	/* Integrate/cto.scm 95 */
														int BgL_arg2645z00_1728;

														BgL_arg2645z00_1728 = (int) (((long) 16));
														{	/* Integrate/cto.scm 95 */
															long BgL_auxz00_3383;

															BgL_auxz00_3383 = (long) (BgL_arg2645z00_1728);
															BgL_modz00_1727 =
																(BgL_offsetz00_1726 / BgL_auxz00_3383);
													}}
													{	/* Integrate/cto.scm 95 */
														long BgL_restz00_1729;

														{	/* Integrate/cto.scm 95 */
															int BgL_arg2644z00_1730;

															BgL_arg2644z00_1730 = (int) (((long) 16));
															{	/* Integrate/cto.scm 95 */
																long BgL_auxz00_3387;

																BgL_auxz00_3387 = (long) (BgL_arg2644z00_1730);
																BgL_restz00_1729 =
																	(BgL_offsetz00_1726 % BgL_auxz00_3387);
														}}
														{	/* Integrate/cto.scm 95 */

															BgL_method3539z00_1719 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1724,
																	(int) (BgL_modz00_1727)),
																(int) (BgL_restz00_1729));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3539z00_1719) (BgL_method3539z00_1719,
								(obj_t) (BgL_arg3668z00_1687),
								(obj_t) (BgL_localz00_1718), BEOA);
						}
					}
				}
			}
		}
	}



/* set-cto!-app3551 */
	obj_t BGl_setzd2ctoz12zd2app3551z12zzintegrate_ctoz00(obj_t BgL_envz00_2553,
		obj_t BgL_nodez00_2554, obj_t BgL_localz00_2555)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 64 */
			{
				BgL_appz00_bglt BgL_nodez00_1378;

				obj_t BgL_localz00_1379;

				BgL_nodez00_1378 = (BgL_appz00_bglt) (BgL_nodez00_2554);
				BgL_localz00_1379 = BgL_localz00_2555;
				{	/* Integrate/cto.scm 68 */
					BgL_variablez00_bglt BgL_funz00_1383;

					{	/* Integrate/cto.scm 68 */
						BgL_varz00_bglt BgL_obj2155z00_1642;

						BgL_obj2155z00_1642 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1378))->BgL_funz00);
						BgL_funz00_1383 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1642))->BgL_variablez00);
					}
					{	/* Integrate/cto.scm 69 */
						bool_t BgL_testz00_3401;

						{	/* Integrate/cto.scm 69 */
							bool_t BgL_testz00_3402;

							{	/* Integrate/cto.scm 69 */
								obj_t BgL_obj1812z00_1643;

								BgL_obj1812z00_1643 = (obj_t) (BgL_funz00_1383);
								BgL_testz00_3402 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1812z00_1643,
									BGl_localz00zzast_varz00);
							}
							if (BgL_testz00_3402)
								{	/* Integrate/cto.scm 69 */
									if (
										(BgL_localz00_1379 ==
											(obj_t) ((BgL_localz00_bglt) (BgL_funz00_1383))))
										{	/* Integrate/cto.scm 69 */
											BgL_testz00_3401 = ((bool_t) 0);
										}
									else
										{	/* Integrate/cto.scm 69 */
											BgL_testz00_3401 = ((bool_t) 1);
										}
								}
							else
								{	/* Integrate/cto.scm 69 */
									BgL_testz00_3401 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_3401)
							{	/* Integrate/cto.scm 69 */
								BNIL;
							}
						else
							{	/* Integrate/cto.scm 69 */
								BFALSE;
							}
					}
					{	/* Integrate/cto.scm 76 */
						bool_t BgL_testz00_3409;

						{	/* Integrate/cto.scm 76 */
							bool_t BgL_testz00_3410;

							{	/* Integrate/cto.scm 76 */
								obj_t BgL_obj1812z00_1644;

								BgL_obj1812z00_1644 = (obj_t) (BgL_funz00_1383);
								BgL_testz00_3410 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1812z00_1644,
									BGl_localz00zzast_varz00);
							}
							if (BgL_testz00_3410)
								{	/* Integrate/cto.scm 77 */
									bool_t BgL_testz00_3413;

									{	/* Integrate/cto.scm 77 */
										BgL_sfunzf2iinfozf2_bglt BgL_obj3425z00_1646;

										BgL_obj3425z00_1646 =
											(BgL_sfunzf2iinfozf2_bglt) (
											(((BgL_variablez00_bglt) CREF(BgL_funz00_1383))->
												BgL_valuez00));
										{
											obj_t BgL_auxz00_3416;

											{	/* Integrate/cto.scm 77 */
												BgL_objectz00_bglt BgL_auxz00_3417;

												BgL_auxz00_3417 =
													(BgL_objectz00_bglt) (BgL_obj3425z00_1646);
												BgL_auxz00_3416 = BGL_OBJECT_WIDENING(BgL_auxz00_3417);
											}
											BgL_testz00_3413 =
												(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3416))->
												BgL_gzf3zf3);
										}
									}
									if (BgL_testz00_3413)
										{	/* Integrate/cto.scm 77 */
											if (
												(BgL_localz00_1379 ==
													(obj_t) ((BgL_localz00_bglt) (BgL_funz00_1383))))
												{	/* Integrate/cto.scm 78 */
													BgL_testz00_3409 = ((bool_t) 0);
												}
											else
												{	/* Integrate/cto.scm 79 */
													bool_t BgL_testz00_3425;

													{	/* Integrate/cto.scm 79 */
														obj_t BgL_auxz00_3426;

														{	/* Integrate/cto.scm 79 */
															obj_t BgL_auxz00_3427;

															{	/* Integrate/cto.scm 79 */
																BgL_sfunzf2iinfozf2_bglt BgL_obj3404z00_1648;

																{	/* Integrate/cto.scm 79 */
																	BgL_variablez00_bglt BgL_obj1611z00_1647;

																	BgL_obj1611z00_1647 =
																		(BgL_variablez00_bglt) (BgL_localz00_1379);
																	BgL_obj3404z00_1648 =
																		(BgL_sfunzf2iinfozf2_bglt) (
																		(((BgL_variablez00_bglt)
																				CREF(BgL_obj1611z00_1647))->
																			BgL_valuez00));
																}
																{
																	obj_t BgL_auxz00_3433;

																	{	/* Integrate/cto.scm 79 */
																		BgL_objectz00_bglt BgL_auxz00_3434;

																		BgL_auxz00_3434 =
																			(BgL_objectz00_bglt)
																			(BgL_obj3404z00_1648);
																		BgL_auxz00_3433 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_3434);
																	}
																	BgL_auxz00_3427 =
																		(((BgL_sfunzf2iinfozf2_bglt)
																			CREF(BgL_auxz00_3433))->BgL_ctoz00);
																}
															}
															BgL_auxz00_3426 =
																BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
																(obj_t) (
																	(BgL_localz00_bglt) (BgL_funz00_1383)),
																BgL_auxz00_3427);
														}
														BgL_testz00_3425 = CBOOL(BgL_auxz00_3426);
													}
													if (BgL_testz00_3425)
														{	/* Integrate/cto.scm 79 */
															BgL_testz00_3409 = ((bool_t) 0);
														}
													else
														{	/* Integrate/cto.scm 79 */
															BgL_testz00_3409 = ((bool_t) 1);
														}
												}
										}
									else
										{	/* Integrate/cto.scm 77 */
											BgL_testz00_3409 = ((bool_t) 0);
										}
								}
							else
								{	/* Integrate/cto.scm 76 */
									BgL_testz00_3409 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_3409)
							{	/* Integrate/cto.scm 80 */
								BgL_valuez00_bglt BgL_arg3649z00_1388;

								obj_t BgL_arg3650z00_1389;

								{
									BgL_variablez00_bglt BgL_auxz00_3440;

									BgL_auxz00_3440 = (BgL_variablez00_bglt) (BgL_localz00_1379);
									BgL_arg3649z00_1388 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_3440))->
										BgL_valuez00);
								}
								{	/* Integrate/cto.scm 83 */
									obj_t BgL_arg3651z00_1390;

									{	/* Integrate/cto.scm 82 */
										BgL_sfunzf2iinfozf2_bglt BgL_obj3404z00_1651;

										{	/* Integrate/cto.scm 83 */
											BgL_variablez00_bglt BgL_obj1611z00_1650;

											BgL_obj1611z00_1650 =
												(BgL_variablez00_bglt) (BgL_localz00_1379);
											BgL_obj3404z00_1651 =
												(BgL_sfunzf2iinfozf2_bglt) (
												(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1650))->
													BgL_valuez00));
										}
										{
											obj_t BgL_auxz00_3446;

											{	/* Integrate/cto.scm 82 */
												BgL_objectz00_bglt BgL_auxz00_3447;

												BgL_auxz00_3447 =
													(BgL_objectz00_bglt) (BgL_obj3404z00_1651);
												BgL_auxz00_3446 = BGL_OBJECT_WIDENING(BgL_auxz00_3447);
											}
											BgL_arg3651z00_1390 =
												(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3446))->
												BgL_ctoz00);
										}
									}
									BgL_arg3650z00_1389 =
										MAKE_PAIR(
										(obj_t) (
											(BgL_localz00_bglt) (BgL_funz00_1383)),
										BgL_arg3651z00_1390);
								}
								{	/* Integrate/cto.scm 80 */
									BgL_sfunzf2iinfozf2_bglt BgL_obj3406z00_1652;

									obj_t BgL_val3405z00_1653;

									BgL_obj3406z00_1652 =
										(BgL_sfunzf2iinfozf2_bglt) (BgL_arg3649z00_1388);
									BgL_val3405z00_1653 = BgL_arg3650z00_1389;
									{
										obj_t BgL_auxz00_3455;

										{	/* Integrate/cto.scm 80 */
											BgL_objectz00_bglt BgL_auxz00_3456;

											BgL_auxz00_3456 =
												(BgL_objectz00_bglt) (BgL_obj3406z00_1652);
											BgL_auxz00_3455 = BGL_OBJECT_WIDENING(BgL_auxz00_3456);
										}
										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_3455))->
												BgL_ctoz00) = ((obj_t) BgL_val3405z00_1653), BUNSPEC);
									}
								}
							}
						else
							{	/* Integrate/cto.scm 76 */
								BFALSE;
							}
					}
				}
				{
					obj_t BgL_astsz00_1402;

					{	/* Integrate/cto.scm 84 */
						obj_t BgL_arg3661z00_1401;

						BgL_arg3661z00_1401 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1378))->BgL_argsz00);
						BgL_astsz00_1402 = BgL_arg3661z00_1401;
					BgL_zc3anonymousza33662ze3z83_1403:
						if (NULLP(BgL_astsz00_1402))
							{	/* Integrate/cto.scm 85 */
								return BUNSPEC;
							}
						else
							{	/* Integrate/cto.scm 85 */
								{	/* Integrate/cto.scm 88 */
									obj_t BgL_arg3664z00_1405;

									BgL_arg3664z00_1405 = CAR(BgL_astsz00_1402);
									{	/* Integrate/cto.scm 88 */
										BgL_nodez00_bglt BgL_nodez00_1657;

										BgL_localz00_bglt BgL_localz00_1658;

										BgL_nodez00_1657 = (BgL_nodez00_bglt) (BgL_arg3664z00_1405);
										BgL_localz00_1658 = (BgL_localz00_bglt) (BgL_localz00_1379);
										{	/* Integrate/cto.scm 88 */
											obj_t BgL_method3539z00_1659;

											{	/* Integrate/cto.scm 88 */
												BgL_objectz00_bglt BgL_objz00_1660;

												BgL_objz00_1660 =
													(BgL_objectz00_bglt) (BgL_nodez00_1657);
												{	/* Integrate/cto.scm 88 */
													long BgL_objzd2classzd2numz00_1661;

													BgL_objzd2classzd2numz00_1661 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1660);
													{	/* Integrate/cto.scm 88 */
														obj_t BgL_arg2643z00_1662;

														BgL_arg2643z00_1662 =
															PROCEDURE_REF
															(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
															(int) (((long) 1)));
														{	/* Integrate/cto.scm 88 */
															obj_t BgL_arrayz00_1664;

															int BgL_offsetz00_1665;

															BgL_arrayz00_1664 = BgL_arg2643z00_1662;
															BgL_offsetz00_1665 =
																(int) (BgL_objzd2classzd2numz00_1661);
															{	/* Integrate/cto.scm 88 */
																long BgL_offsetz00_1666;

																BgL_offsetz00_1666 =
																	((long) (BgL_offsetz00_1665) - OBJECT_TYPE);
																{	/* Integrate/cto.scm 88 */
																	long BgL_modz00_1667;

																	{	/* Integrate/cto.scm 88 */
																		int BgL_arg2645z00_1668;

																		BgL_arg2645z00_1668 = (int) (((long) 16));
																		{	/* Integrate/cto.scm 88 */
																			long BgL_auxz00_3474;

																			BgL_auxz00_3474 =
																				(long) (BgL_arg2645z00_1668);
																			BgL_modz00_1667 =
																				(BgL_offsetz00_1666 / BgL_auxz00_3474);
																	}}
																	{	/* Integrate/cto.scm 88 */
																		long BgL_restz00_1669;

																		{	/* Integrate/cto.scm 88 */
																			int BgL_arg2644z00_1670;

																			BgL_arg2644z00_1670 = (int) (((long) 16));
																			{	/* Integrate/cto.scm 88 */
																				long BgL_auxz00_3478;

																				BgL_auxz00_3478 =
																					(long) (BgL_arg2644z00_1670);
																				BgL_restz00_1669 =
																					(BgL_offsetz00_1666 %
																					BgL_auxz00_3478);
																		}}
																		{	/* Integrate/cto.scm 88 */

																			BgL_method3539z00_1659 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1664,
																					(int) (BgL_modz00_1667)),
																				(int) (BgL_restz00_1669));
											}}}}}}}}
											PROCEDURE_ENTRY(BgL_method3539z00_1659)
												(BgL_method3539z00_1659, (obj_t) (BgL_nodez00_1657),
												(obj_t) (BgL_localz00_1658), BEOA);
								}}}
								{
									obj_t BgL_astsz00_3489;

									BgL_astsz00_3489 = CDR(BgL_astsz00_1402);
									BgL_astsz00_1402 = BgL_astsz00_3489;
									goto BgL_zc3anonymousza33662ze3z83_1403;
								}
							}
					}
				}
			}
		}
	}



/* set-cto!-sequence3549 */
	obj_t BGl_setzd2ctoz12zd2sequence3549z12zzintegrate_ctoz00(obj_t
		BgL_envz00_2556, obj_t BgL_nodez00_2557, obj_t BgL_localz00_2558)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 57 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1363;

				obj_t BgL_localz00_1364;

				{	/* Integrate/cto.scm 58 */
					bool_t BgL_auxz00_3492;

					BgL_nodez00_1363 = (BgL_sequencez00_bglt) (BgL_nodez00_2557);
					BgL_localz00_1364 = BgL_localz00_2558;
					{	/* Integrate/cto.scm 59 */
						obj_t BgL_g3534z00_1368;

						BgL_g3534z00_1368 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1363))->BgL_nodesz00);
						{
							obj_t BgL_l3532z00_1370;

							BgL_l3532z00_1370 = BgL_g3534z00_1368;
						BgL_zc3anonymousza33641ze3z83_1371:
							if (PAIRP(BgL_l3532z00_1370))
								{	/* Integrate/cto.scm 59 */
									{	/* Integrate/cto.scm 59 */
										obj_t BgL_nodez00_1373;

										BgL_nodez00_1373 = CAR(BgL_l3532z00_1370);
										{	/* Integrate/cto.scm 59 */
											BgL_nodez00_bglt BgL_nodez00_1613;

											BgL_localz00_bglt BgL_localz00_1614;

											BgL_nodez00_1613 = (BgL_nodez00_bglt) (BgL_nodez00_1373);
											BgL_localz00_1614 =
												(BgL_localz00_bglt) (BgL_localz00_1364);
											{	/* Integrate/cto.scm 59 */
												obj_t BgL_method3539z00_1615;

												{	/* Integrate/cto.scm 59 */
													BgL_objectz00_bglt BgL_objz00_1616;

													BgL_objz00_1616 =
														(BgL_objectz00_bglt) (BgL_nodez00_1613);
													{	/* Integrate/cto.scm 59 */
														long BgL_objzd2classzd2numz00_1617;

														BgL_objzd2classzd2numz00_1617 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1616);
														{	/* Integrate/cto.scm 59 */
															obj_t BgL_arg2643z00_1618;

															BgL_arg2643z00_1618 =
																PROCEDURE_REF
																(BGl_setzd2ctoz12zd2envz12zzintegrate_ctoz00,
																(int) (((long) 1)));
															{	/* Integrate/cto.scm 59 */
																obj_t BgL_arrayz00_1620;

																int BgL_offsetz00_1621;

																BgL_arrayz00_1620 = BgL_arg2643z00_1618;
																BgL_offsetz00_1621 =
																	(int) (BgL_objzd2classzd2numz00_1617);
																{	/* Integrate/cto.scm 59 */
																	long BgL_offsetz00_1622;

																	BgL_offsetz00_1622 =
																		((long) (BgL_offsetz00_1621) - OBJECT_TYPE);
																	{	/* Integrate/cto.scm 59 */
																		long BgL_modz00_1623;

																		{	/* Integrate/cto.scm 59 */
																			int BgL_arg2645z00_1624;

																			BgL_arg2645z00_1624 = (int) (((long) 16));
																			{	/* Integrate/cto.scm 59 */
																				long BgL_auxz00_3507;

																				BgL_auxz00_3507 =
																					(long) (BgL_arg2645z00_1624);
																				BgL_modz00_1623 =
																					(BgL_offsetz00_1622 /
																					BgL_auxz00_3507);
																		}}
																		{	/* Integrate/cto.scm 59 */
																			long BgL_restz00_1625;

																			{	/* Integrate/cto.scm 59 */
																				int BgL_arg2644z00_1626;

																				BgL_arg2644z00_1626 =
																					(int) (((long) 16));
																				{	/* Integrate/cto.scm 59 */
																					long BgL_auxz00_3511;

																					BgL_auxz00_3511 =
																						(long) (BgL_arg2644z00_1626);
																					BgL_restz00_1625 =
																						(BgL_offsetz00_1622 %
																						BgL_auxz00_3511);
																			}}
																			{	/* Integrate/cto.scm 59 */

																				BgL_method3539z00_1615 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1620,
																						(int) (BgL_modz00_1623)),
																					(int) (BgL_restz00_1625));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method3539z00_1615)
													(BgL_method3539z00_1615, (obj_t) (BgL_nodez00_1613),
													(obj_t) (BgL_localz00_1614), BEOA);
									}}}
									{
										obj_t BgL_l3532z00_3522;

										BgL_l3532z00_3522 = CDR(BgL_l3532z00_1370);
										BgL_l3532z00_1370 = BgL_l3532z00_3522;
										goto BgL_zc3anonymousza33641ze3z83_1371;
									}
								}
							else
								{	/* Integrate/cto.scm 59 */
									BgL_auxz00_3492 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_3492);
				}
			}
		}
	}



/* set-cto!-closure3547 */
	obj_t BGl_setzd2ctoz12zd2closure3547z12zzintegrate_ctoz00(obj_t
		BgL_envz00_2559, obj_t BgL_nodez00_2560, obj_t BgL_localz00_2561)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 51 */
			{
				BgL_closurez00_bglt BgL_nodez00_1354;

				obj_t BgL_localz00_1355;

				BgL_nodez00_1354 = (BgL_closurez00_bglt) (BgL_nodez00_2560);
				BgL_localz00_1355 = BgL_localz00_2561;
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string3786z00zzintegrate_ctoz00,
					BGl_string3809z00zzintegrate_ctoz00,
					BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_1354)));
			}
		}
	}



/* set-cto!-var3545 */
	obj_t BGl_setzd2ctoz12zd2var3545z12zzintegrate_ctoz00(obj_t BgL_envz00_2562,
		obj_t BgL_nodez00_2563, obj_t BgL_localz00_2564)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 45 */
			return BUNSPEC;
		}
	}



/* set-cto!-kwote3543 */
	obj_t BGl_setzd2ctoz12zd2kwote3543z12zzintegrate_ctoz00(obj_t BgL_envz00_2565,
		obj_t BgL_nodez00_2566, obj_t BgL_localz00_2567)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 39 */
			return BUNSPEC;
		}
	}



/* set-cto!-atom3541 */
	obj_t BGl_setzd2ctoz12zd2atom3541z12zzintegrate_ctoz00(obj_t BgL_envz00_2568,
		obj_t BgL_nodez00_2569, obj_t BgL_localz00_2570)
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 33 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_ctoz00()
	{
		AN_OBJECT;
		{	/* Integrate/cto.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3810z00zzintegrate_ctoz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3810z00zzintegrate_ctoz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3810z00zzintegrate_ctoz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3810z00zzintegrate_ctoz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3810z00zzintegrate_ctoz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3810z00zzintegrate_ctoz00));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string3810z00zzintegrate_ctoz00));
		}
	}

#ifdef __cplusplus
}
#endif
