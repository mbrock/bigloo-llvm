/*===========================================================================*/
/*   (Integrate/let_fun.scm)                                                 */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/let_fun.scm)*/
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


	static obj_t BGl__displacezd2letzd2funz12z12zzintegrate_letzd2funzd2(obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t
		BGl__displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t
		BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2
		(BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzintegrate_letzd2funzd2();
	static obj_t
		BGl__displacezd2letzd2funzd2nod3538zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_letzd2funzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzintegrate_letzd2funzd2();
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_closurez00zzast_nodez00;
	static long BGl_za2stampza2z00zzintegrate_letzd2funzd2;
	extern BgL_letzd2funzd2_bglt BGl_makezd2letzd2funz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt);
	static bool_t BGl_freezd2funzf3z21zzintegrate_letzd2funzd2(obj_t);
	static obj_t BGl_bindzd2funz12zc0zzintegrate_letzd2funzd2(obj_t);
	static obj_t BGl_methodzd2initzd2zzintegrate_letzd2funzd2();
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_letzd2funzd2 =
		BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzintegrate_letzd2funzd2();
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_letzd2funzd2();
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3538zd2zzintegrate_letzd2funzd2
		(BgL_nodez00_bglt, obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3541zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3543zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3545zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3547zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3549zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3551zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3553zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3555zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3558zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3561zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3563zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3565zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3567zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3569zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3571zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3573zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3575zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3577zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3579zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3581zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_displacezd2letzd2funzd2nod3583zd2zzintegrate_letzd2funzd2(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	BGL_EXPORTED_DECL obj_t
		BGl_displacezd2letzd2funz12z12zzintegrate_letzd2funzd2(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_letzd2funzd2();
	static obj_t __cnst[1];


	   
		 
		DEFINE_STRING(BGl_string3802z00zzintegrate_letzd2funzd2,
		BgL_bgl_string3802za700za7za7i3831za7, "displace-let-fun-node!", 22);
	      DEFINE_STRING(BGl_string3803z00zzintegrate_letzd2funzd2,
		BgL_bgl_string3803za700za7za7i3832za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3825z00zzintegrate_letzd2funzd2,
		BgL_bgl_string3825za700za7za7i3833za7, "displace-let-fun-node", 21);
	      DEFINE_STRING(BGl_string3826z00zzintegrate_letzd2funzd2,
		BgL_bgl_string3826za700za7za7i3834za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string3827z00zzintegrate_letzd2funzd2,
		BgL_bgl_string3827za700za7za7i3835za7, "integrate_let-fun", 17);
	      DEFINE_STRING(BGl_string3828z00zzintegrate_letzd2funzd2,
		BgL_bgl_string3828za700za7za7i3836za7, "displace-let-fun-nod3538 ", 25);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_displacezd2letzd2funz12zd2envzc0zzintegrate_letzd2funzd2,
		BgL_bgl__displaceza7d2letza73837z00,
		BGl__displacezd2letzd2funz12z12zzintegrate_letzd2funzd2, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_displacezd2letzd2funzd2nod3538zd2envz00zzintegrate_letzd2funzd2,
		BgL_bgl__displaceza7d2letza73838z00,
		BGl__displacezd2letzd2funzd2nod3538zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
		BgL_bgl__displaceza7d2letza73839z00,
		BGl__displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3804z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3840z00,
		BGl_displacezd2letzd2funzd2nod3541zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3805z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3841z00,
		BGl_displacezd2letzd2funzd2nod3543zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3806z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3842z00,
		BGl_displacezd2letzd2funzd2nod3545zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3807z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3843z00,
		BGl_displacezd2letzd2funzd2nod3547zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3808z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3844z00,
		BGl_displacezd2letzd2funzd2nod3549zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3810z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3845z00,
		BGl_displacezd2letzd2funzd2nod3553zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3809z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3846z00,
		BGl_displacezd2letzd2funzd2nod3551zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3811z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3847z00,
		BGl_displacezd2letzd2funzd2nod3555zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3812z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3848z00,
		BGl_displacezd2letzd2funzd2nod3558zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3813z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3849z00,
		BGl_displacezd2letzd2funzd2nod3561zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3814z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3850z00,
		BGl_displacezd2letzd2funzd2nod3563zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3815z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3851z00,
		BGl_displacezd2letzd2funzd2nod3565zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3816z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3852z00,
		BGl_displacezd2letzd2funzd2nod3567zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3817z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3853z00,
		BGl_displacezd2letzd2funzd2nod3569zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3818z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3854z00,
		BGl_displacezd2letzd2funzd2nod3571zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3820z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3855z00,
		BGl_displacezd2letzd2funzd2nod3575zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3819z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3856z00,
		BGl_displacezd2letzd2funzd2nod3573zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3821z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3857z00,
		BGl_displacezd2letzd2funzd2nod3577zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3822z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3858z00,
		BGl_displacezd2letzd2funzd2nod3579zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3823z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3859z00,
		BGl_displacezd2letzd2funzd2nod3581zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3824z00zzintegrate_letzd2funzd2,
		BgL_bgl_displaceza7d2letza7d3860z00,
		BGl_displacezd2letzd2funzd2nod3583zd2zzintegrate_letzd2funzd2, 0L, BUNSPEC,
		2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_letzd2funzd2(long
		BgL_checksumz00_2586, char *BgL_fromz00_2587)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_letzd2funzd2))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_letzd2funzd2 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzintegrate_letzd2funzd2();
					BGl_cnstzd2initzd2zzintegrate_letzd2funzd2();
					BGl_importedzd2moduleszd2initz00zzintegrate_letzd2funzd2();
					BGl_genericzd2initzd2zzintegrate_letzd2funzd2();
					BGl_methodzd2initzd2zzintegrate_letzd2funzd2();
					BGl_toplevelzd2initzd2zzintegrate_letzd2funzd2();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_letzd2funzd2()
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 16 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"integrate_let-fun");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"integrate_let-fun");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"integrate_let-fun");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_let-fun");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzintegrate_letzd2funzd2()
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 16 */
			{	/* Integrate/let_fun.scm 16 */
				obj_t BgL_cportz00_2568;

				BgL_cportz00_2568 =
					bgl_open_input_string(BGl_string3828z00zzintegrate_letzd2funzd2,
					(int) (((long) 0)));
				{
					long BgL_iz00_2569;

					BgL_iz00_2569 = ((long) 0);
				BgL_loopz00_2570:
					if ((BgL_iz00_2569 == ((long) -1)))
						{	/* Integrate/let_fun.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Integrate/let_fun.scm 16 */
							{	/* Integrate/let_fun.scm 16 */
								obj_t BgL_arg3830z00_2572;

								{	/* Integrate/let_fun.scm 16 */

									{	/* Integrate/let_fun.scm 16 */
										obj_t BgL_locationz00_2574;

										BgL_locationz00_2574 = BBOOL(((bool_t) 0));
										{	/* Integrate/let_fun.scm 16 */

											BgL_arg3830z00_2572 =
												BGl_readz00zz__readerz00(BgL_cportz00_2568,
												BgL_locationz00_2574);
										}
									}
								}
								{	/* Integrate/let_fun.scm 16 */
									int BgL_auxz00_2607;

									BgL_auxz00_2607 = (int) (BgL_iz00_2569);
									CNST_TABLE_SET(BgL_auxz00_2607, BgL_arg3830z00_2572);
							}}
							{	/* Integrate/let_fun.scm 16 */
								int BgL_auxz00_2575;

								BgL_auxz00_2575 = (int) ((BgL_iz00_2569 - ((long) 1)));
								{
									long BgL_iz00_2612;

									BgL_iz00_2612 = (long) (BgL_auxz00_2575);
									BgL_iz00_2569 = BgL_iz00_2612;
									goto BgL_loopz00_2570;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzintegrate_letzd2funzd2()
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 16 */
			BGl_za2stampza2z00zzintegrate_letzd2funzd2 = ((long) 0);
			return BUNSPEC;
		}
	}



/* bind-fun! */
	obj_t BGl_bindzd2funz12zc0zzintegrate_letzd2funzd2(obj_t BgL_varz00_1)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 35 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_varz00_1, BGl_localz00zzast_varz00))
				{	/* Integrate/let_fun.scm 38 */
					BgL_valuez00_bglt BgL_arg3585z00_933;

					{
						BgL_variablez00_bglt BgL_auxz00_2616;

						BgL_auxz00_2616 =
							(BgL_variablez00_bglt) ((BgL_localz00_bglt) (BgL_varz00_1));
						BgL_arg3585z00_933 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_2616))->BgL_valuez00);
					}
					{	/* Integrate/let_fun.scm 38 */
						BgL_sfunzf2iinfozf2_bglt BgL_obj3436z00_1616;

						obj_t BgL_val3435z00_1617;

						BgL_obj3436z00_1616 =
							(BgL_sfunzf2iinfozf2_bglt) (BgL_arg3585z00_933);
						BgL_val3435z00_1617 =
							BINT(BGl_za2stampza2z00zzintegrate_letzd2funzd2);
						{
							obj_t BgL_auxz00_2622;

							{	/* Integrate/let_fun.scm 38 */
								BgL_objectz00_bglt BgL_auxz00_2623;

								BgL_auxz00_2623 = (BgL_objectz00_bglt) (BgL_obj3436z00_1616);
								BgL_auxz00_2622 = BGL_OBJECT_WIDENING(BgL_auxz00_2623);
							}
							return
								((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_2622))->
									BgL_istampz00) = ((obj_t) BgL_val3435z00_1617), BUNSPEC);
						}
					}
				}
			else
				{	/* Integrate/let_fun.scm 37 */
					return BFALSE;
				}
		}
	}



/* free-fun? */
	bool_t BGl_freezd2funzf3z21zzintegrate_letzd2funzd2(obj_t BgL_localz00_2)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 43 */
			{	/* Integrate/let_fun.scm 47 */
				bool_t BgL_testz00_2627;

				{	/* Integrate/let_fun.scm 47 */
					obj_t BgL_arg3587z00_935;

					{	/* Integrate/let_fun.scm 47 */
						BgL_sfunzf2iinfozf2_bglt BgL_obj3434z00_1619;

						{	/* Integrate/let_fun.scm 47 */
							BgL_variablez00_bglt BgL_obj1611z00_1618;

							BgL_obj1611z00_1618 = (BgL_variablez00_bglt) (BgL_localz00_2);
							BgL_obj3434z00_1619 =
								(BgL_sfunzf2iinfozf2_bglt) (
								(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1618))->
									BgL_valuez00));
						}
						{
							obj_t BgL_auxz00_2631;

							{	/* Integrate/let_fun.scm 47 */
								BgL_objectz00_bglt BgL_auxz00_2632;

								BgL_auxz00_2632 = (BgL_objectz00_bglt) (BgL_obj3434z00_1619);
								BgL_auxz00_2631 = BGL_OBJECT_WIDENING(BgL_auxz00_2632);
							}
							BgL_arg3587z00_935 =
								(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_2631))->
								BgL_istampz00);
						}
					}
					BgL_testz00_2627 =
						(BgL_arg3587z00_935 ==
						BINT(BGl_za2stampza2z00zzintegrate_letzd2funzd2));
				}
				if (BgL_testz00_2627)
					{	/* Integrate/let_fun.scm 47 */
						return ((bool_t) 0);
					}
				else
					{	/* Integrate/let_fun.scm 47 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* displace-let-fun! */
	BGL_EXPORTED_DEF obj_t
		BGl_displacezd2letzd2funz12z12zzintegrate_letzd2funzd2(obj_t BgL_varz00_3)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 52 */
			BGl_za2stampza2z00zzintegrate_letzd2funzd2 =
				(((long) 1) + BGl_za2stampza2z00zzintegrate_letzd2funzd2);
			{	/* Integrate/let_fun.scm 59 */
				obj_t BgL_arg3589z00_937;

				obj_t BgL_arg3590z00_938;

				{	/* Integrate/let_fun.scm 59 */
					BgL_sfunz00_bglt BgL_obj1884z00_1623;

					{	/* Integrate/let_fun.scm 59 */
						BgL_variablez00_bglt BgL_obj1611z00_1622;

						BgL_obj1611z00_1622 = (BgL_variablez00_bglt) (BgL_varz00_3);
						BgL_obj1884z00_1623 =
							(BgL_sfunz00_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1622))->
								BgL_valuez00));
					}
					BgL_arg3589z00_937 =
						(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_1623))->BgL_bodyz00);
				}
				{	/* Integrate/let_fun.scm 59 */
					obj_t BgL_list3592z00_940;

					BgL_list3592z00_940 = MAKE_PAIR(BgL_varz00_3, BNIL);
					BgL_arg3590z00_938 = BgL_list3592z00_940;
				}
				{	/* Integrate/let_fun.scm 59 */
					BgL_nodez00_bglt BgL_nodez00_1626;

					obj_t BgL_hostsz00_1627;

					BgL_nodez00_1626 = (BgL_nodez00_bglt) (BgL_arg3589z00_937);
					BgL_hostsz00_1627 = BgL_arg3590z00_938;
					{	/* Integrate/let_fun.scm 59 */
						obj_t BgL_method3539z00_1628;

						{	/* Integrate/let_fun.scm 59 */
							BgL_objectz00_bglt BgL_objz00_1629;

							BgL_objz00_1629 = (BgL_objectz00_bglt) (BgL_nodez00_1626);
							{	/* Integrate/let_fun.scm 59 */
								long BgL_objzd2classzd2numz00_1630;

								BgL_objzd2classzd2numz00_1630 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1629);
								{	/* Integrate/let_fun.scm 59 */
									obj_t BgL_arg2643z00_1631;

									BgL_arg2643z00_1631 =
										PROCEDURE_REF
										(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
										(int) (((long) 1)));
									{	/* Integrate/let_fun.scm 59 */
										obj_t BgL_arrayz00_1633;

										int BgL_offsetz00_1634;

										BgL_arrayz00_1633 = BgL_arg2643z00_1631;
										BgL_offsetz00_1634 = (int) (BgL_objzd2classzd2numz00_1630);
										{	/* Integrate/let_fun.scm 59 */
											long BgL_offsetz00_1635;

											BgL_offsetz00_1635 =
												((long) (BgL_offsetz00_1634) - OBJECT_TYPE);
											{	/* Integrate/let_fun.scm 59 */
												long BgL_modz00_1636;

												{	/* Integrate/let_fun.scm 59 */
													int BgL_arg2645z00_1637;

													BgL_arg2645z00_1637 = (int) (((long) 16));
													{	/* Integrate/let_fun.scm 59 */
														long BgL_auxz00_2653;

														BgL_auxz00_2653 = (long) (BgL_arg2645z00_1637);
														BgL_modz00_1636 =
															(BgL_offsetz00_1635 / BgL_auxz00_2653);
												}}
												{	/* Integrate/let_fun.scm 59 */
													long BgL_restz00_1638;

													{	/* Integrate/let_fun.scm 59 */
														int BgL_arg2644z00_1639;

														BgL_arg2644z00_1639 = (int) (((long) 16));
														{	/* Integrate/let_fun.scm 59 */
															long BgL_auxz00_2657;

															BgL_auxz00_2657 = (long) (BgL_arg2644z00_1639);
															BgL_restz00_1638 =
																(BgL_offsetz00_1635 % BgL_auxz00_2657);
													}}
													{	/* Integrate/let_fun.scm 59 */

														BgL_method3539z00_1628 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1633,
																(int) (BgL_modz00_1636)),
															(int) (BgL_restz00_1638));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3539z00_1628) (BgL_method3539z00_1628,
							(obj_t) (BgL_nodez00_1626), BgL_hostsz00_1627, BEOA);
			}}}
			{	/* Integrate/let_fun.scm 68 */
				obj_t BgL_ledz00_941;

				{	/* Integrate/let_fun.scm 68 */
					BgL_sfunzf2iinfozf2_bglt BgL_obj3431z00_1654;

					{	/* Integrate/let_fun.scm 68 */
						BgL_variablez00_bglt BgL_obj1611z00_1653;

						BgL_obj1611z00_1653 = (BgL_variablez00_bglt) (BgL_varz00_3);
						BgL_obj3431z00_1654 =
							(BgL_sfunzf2iinfozf2_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1653))->
								BgL_valuez00));
					}
					{
						obj_t BgL_auxz00_2670;

						{	/* Integrate/let_fun.scm 68 */
							BgL_objectz00_bglt BgL_auxz00_2671;

							BgL_auxz00_2671 = (BgL_objectz00_bglt) (BgL_obj3431z00_1654);
							BgL_auxz00_2670 = BGL_OBJECT_WIDENING(BgL_auxz00_2671);
						}
						BgL_ledz00_941 =
							(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_2670))->BgL_ledz00);
				}}
				{
					obj_t BgL_l3530z00_943;

					BgL_l3530z00_943 = BgL_ledz00_941;
				BgL_zc3anonymousza33593ze3z83_944:
					if (PAIRP(BgL_l3530z00_943))
						{	/* Integrate/let_fun.scm 69 */
							{	/* Integrate/let_fun.scm 80 */
								obj_t BgL_lz00_946;

								BgL_lz00_946 = CAR(BgL_l3530z00_943);
								if (BGl_freezd2funzf3z21zzintegrate_letzd2funzd2(BgL_lz00_946))
									{	/* Integrate/let_fun.scm 79 */
										obj_t BgL_arg3596z00_948;

										obj_t BgL_arg3597z00_949;

										{	/* Integrate/let_fun.scm 79 */
											BgL_sfunz00_bglt BgL_obj1884z00_1658;

											{	/* Integrate/let_fun.scm 79 */
												BgL_variablez00_bglt BgL_obj1611z00_1657;

												BgL_obj1611z00_1657 =
													(BgL_variablez00_bglt) (BgL_lz00_946);
												BgL_obj1884z00_1658 =
													(BgL_sfunz00_bglt) (
													(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1657))->
														BgL_valuez00));
											}
											BgL_arg3596z00_948 =
												(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_1658))->
												BgL_bodyz00);
										}
										{	/* Integrate/let_fun.scm 80 */
											obj_t BgL_list3599z00_951;

											BgL_list3599z00_951 = MAKE_PAIR(BgL_varz00_3, BNIL);
											BgL_arg3597z00_949 = BgL_list3599z00_951;
										}
										{	/* Integrate/let_fun.scm 79 */
											BgL_nodez00_bglt BgL_nodez00_1661;

											obj_t BgL_hostsz00_1662;

											BgL_nodez00_1661 =
												(BgL_nodez00_bglt) (BgL_arg3596z00_948);
											BgL_hostsz00_1662 = BgL_arg3597z00_949;
											{	/* Integrate/let_fun.scm 79 */
												obj_t BgL_method3539z00_1663;

												{	/* Integrate/let_fun.scm 79 */
													BgL_objectz00_bglt BgL_objz00_1664;

													BgL_objz00_1664 =
														(BgL_objectz00_bglt) (BgL_nodez00_1661);
													{	/* Integrate/let_fun.scm 79 */
														long BgL_objzd2classzd2numz00_1665;

														BgL_objzd2classzd2numz00_1665 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1664);
														{	/* Integrate/let_fun.scm 79 */
															obj_t BgL_arg2643z00_1666;

															BgL_arg2643z00_1666 =
																PROCEDURE_REF
																(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
																(int) (((long) 1)));
															{	/* Integrate/let_fun.scm 79 */
																obj_t BgL_arrayz00_1668;

																int BgL_offsetz00_1669;

																BgL_arrayz00_1668 = BgL_arg2643z00_1666;
																BgL_offsetz00_1669 =
																	(int) (BgL_objzd2classzd2numz00_1665);
																{	/* Integrate/let_fun.scm 79 */
																	long BgL_offsetz00_1670;

																	BgL_offsetz00_1670 =
																		((long) (BgL_offsetz00_1669) - OBJECT_TYPE);
																	{	/* Integrate/let_fun.scm 79 */
																		long BgL_modz00_1671;

																		{	/* Integrate/let_fun.scm 79 */
																			int BgL_arg2645z00_1672;

																			BgL_arg2645z00_1672 = (int) (((long) 16));
																			{	/* Integrate/let_fun.scm 79 */
																				long BgL_auxz00_2694;

																				BgL_auxz00_2694 =
																					(long) (BgL_arg2645z00_1672);
																				BgL_modz00_1671 =
																					(BgL_offsetz00_1670 /
																					BgL_auxz00_2694);
																		}}
																		{	/* Integrate/let_fun.scm 79 */
																			long BgL_restz00_1673;

																			{	/* Integrate/let_fun.scm 79 */
																				int BgL_arg2644z00_1674;

																				BgL_arg2644z00_1674 =
																					(int) (((long) 16));
																				{	/* Integrate/let_fun.scm 79 */
																					long BgL_auxz00_2698;

																					BgL_auxz00_2698 =
																						(long) (BgL_arg2644z00_1674);
																					BgL_restz00_1673 =
																						(BgL_offsetz00_1670 %
																						BgL_auxz00_2698);
																			}}
																			{	/* Integrate/let_fun.scm 79 */

																				BgL_method3539z00_1663 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1668,
																						(int) (BgL_modz00_1671)),
																					(int) (BgL_restz00_1673));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method3539z00_1663)
													(BgL_method3539z00_1663, (obj_t) (BgL_nodez00_1661),
													BgL_hostsz00_1662, BEOA);
									}}}
								else
									{	/* Integrate/let_fun.scm 73 */
										BFALSE;
									}
							}
							{
								obj_t BgL_l3530z00_2708;

								BgL_l3530z00_2708 = CDR(BgL_l3530z00_943);
								BgL_l3530z00_943 = BgL_l3530z00_2708;
								goto BgL_zc3anonymousza33593ze3z83_944;
							}
						}
					else
						{	/* Integrate/let_fun.scm 69 */
							((bool_t) 1);
						}
				}
				{
					obj_t BgL_ledz00_956;

					obj_t BgL_addedz00_957;

					BgL_ledz00_956 = BgL_ledz00_941;
					BgL_addedz00_957 = BNIL;
				BgL_zc3anonymousza33601ze3z83_958:
					if (NULLP(BgL_ledz00_956))
						{	/* Integrate/let_fun.scm 87 */
							obj_t BgL_oldzd2bodyzd2_960;

							{	/* Integrate/let_fun.scm 87 */
								BgL_sfunz00_bglt BgL_obj1884z00_1691;

								{	/* Integrate/let_fun.scm 87 */
									BgL_variablez00_bglt BgL_obj1611z00_1690;

									BgL_obj1611z00_1690 = (BgL_variablez00_bglt) (BgL_varz00_3);
									BgL_obj1884z00_1691 =
										(BgL_sfunz00_bglt) (
										(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1690))->
											BgL_valuez00));
								}
								BgL_oldzd2bodyzd2_960 =
									(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_1691))->BgL_bodyz00);
							}
							if (PAIRP(BgL_addedz00_957))
								{	/* Integrate/let_fun.scm 89 */
									BgL_letzd2funzd2_bglt BgL_newzd2bodyzd2_962;

									{	/* Integrate/let_fun.scm 90 */
										obj_t BgL_arg3605z00_964;

										{
											BgL_nodez00_bglt BgL_auxz00_2718;

											BgL_auxz00_2718 =
												(BgL_nodez00_bglt) (BgL_oldzd2bodyzd2_960);
											BgL_arg3605z00_964 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_2718))->
												BgL_locz00);
										}
										BgL_newzd2bodyzd2_962 =
											BGl_makezd2letzd2funz00zzast_nodez00(BgL_arg3605z00_964,
											(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00),
											BUNSPEC, BINT(((long) -1)), BgL_addedz00_957,
											(BgL_nodez00_bglt) (BgL_oldzd2bodyzd2_960));
									}
									{	/* Integrate/let_fun.scm 100 */
										BgL_valuez00_bglt BgL_arg3604z00_963;

										{
											BgL_variablez00_bglt BgL_auxz00_2725;

											BgL_auxz00_2725 = (BgL_variablez00_bglt) (BgL_varz00_3);
											BgL_arg3604z00_963 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_2725))->
												BgL_valuez00);
										}
										{
											obj_t BgL_auxz00_2730;

											BgL_sfunz00_bglt BgL_auxz00_2728;

											BgL_auxz00_2730 = (obj_t) (BgL_newzd2bodyzd2_962);
											BgL_auxz00_2728 = (BgL_sfunz00_bglt) (BgL_arg3604z00_963);
											((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2728))->
													BgL_bodyz00) = ((obj_t) BgL_auxz00_2730), BUNSPEC);
									}}
									return (obj_t) (BgL_newzd2bodyzd2_962);
								}
							else
								{	/* Integrate/let_fun.scm 88 */
									return BgL_oldzd2bodyzd2_960;
								}
						}
					else
						{	/* Integrate/let_fun.scm 85 */
							if (BGl_freezd2funzf3z21zzintegrate_letzd2funzd2(CAR
									(BgL_ledz00_956)))
								{	/* Integrate/let_fun.scm 109 */
									obj_t BgL_arg3609z00_968;

									obj_t BgL_arg3610z00_969;

									BgL_arg3609z00_968 = CDR(BgL_ledz00_956);
									BgL_arg3610z00_969 =
										MAKE_PAIR(CAR(BgL_ledz00_956), BgL_addedz00_957);
									{
										obj_t BgL_addedz00_2741;

										obj_t BgL_ledz00_2740;

										BgL_ledz00_2740 = BgL_arg3609z00_968;
										BgL_addedz00_2741 = BgL_arg3610z00_969;
										BgL_addedz00_957 = BgL_addedz00_2741;
										BgL_ledz00_956 = BgL_ledz00_2740;
										goto BgL_zc3anonymousza33601ze3z83_958;
									}
								}
							else
								{
									obj_t BgL_ledz00_2742;

									BgL_ledz00_2742 = CDR(BgL_ledz00_956);
									BgL_ledz00_956 = BgL_ledz00_2742;
									goto BgL_zc3anonymousza33601ze3z83_958;
								}
						}
				}
			}
		}
	}



/* _displace-let-fun! */
	obj_t BGl__displacezd2letzd2funz12z12zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2476, obj_t BgL_varz00_2477)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 52 */
			return
				BGl_displacezd2letzd2funz12z12zzintegrate_letzd2funzd2(BgL_varz00_2477);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_letzd2funzd2()
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 16 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_displacezd2letzd2funzd2nod3538zd2envz00zzintegrate_letzd2funzd2,
				BGl_nodez00zzast_nodez00, BGl_string3802z00zzintegrate_letzd2funzd2);
		}
	}



/* displace-let-fun-node! */
	obj_t
		BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2
		(BgL_nodez00_bglt BgL_nodez00_4, obj_t BgL_hostsz00_5)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 122 */
			{	/* Integrate/let_fun.scm 122 */
				obj_t BgL_method3539z00_1701;

				{	/* Integrate/let_fun.scm 122 */
					BgL_objectz00_bglt BgL_objz00_1702;

					BgL_objz00_1702 = (BgL_objectz00_bglt) (BgL_nodez00_4);
					{	/* Integrate/let_fun.scm 122 */
						long BgL_objzd2classzd2numz00_1703;

						BgL_objzd2classzd2numz00_1703 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1702);
						{	/* Integrate/let_fun.scm 122 */
							obj_t BgL_arg2643z00_1704;

							BgL_arg2643z00_1704 =
								PROCEDURE_REF
								(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
								(int) (((long) 1)));
							{	/* Integrate/let_fun.scm 122 */
								obj_t BgL_arrayz00_1706;

								int BgL_offsetz00_1707;

								BgL_arrayz00_1706 = BgL_arg2643z00_1704;
								BgL_offsetz00_1707 = (int) (BgL_objzd2classzd2numz00_1703);
								{	/* Integrate/let_fun.scm 122 */
									long BgL_offsetz00_1708;

									BgL_offsetz00_1708 =
										((long) (BgL_offsetz00_1707) - OBJECT_TYPE);
									{	/* Integrate/let_fun.scm 122 */
										long BgL_modz00_1709;

										{	/* Integrate/let_fun.scm 122 */
											int BgL_arg2645z00_1710;

											BgL_arg2645z00_1710 = (int) (((long) 16));
											{	/* Integrate/let_fun.scm 122 */
												long BgL_auxz00_2754;

												BgL_auxz00_2754 = (long) (BgL_arg2645z00_1710);
												BgL_modz00_1709 =
													(BgL_offsetz00_1708 / BgL_auxz00_2754);
										}}
										{	/* Integrate/let_fun.scm 122 */
											long BgL_restz00_1711;

											{	/* Integrate/let_fun.scm 122 */
												int BgL_arg2644z00_1712;

												BgL_arg2644z00_1712 = (int) (((long) 16));
												{	/* Integrate/let_fun.scm 122 */
													long BgL_auxz00_2758;

													BgL_auxz00_2758 = (long) (BgL_arg2644z00_1712);
													BgL_restz00_1711 =
														(BgL_offsetz00_1708 % BgL_auxz00_2758);
											}}
											{	/* Integrate/let_fun.scm 122 */

												BgL_method3539z00_1701 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1706,
														(int) (BgL_modz00_1709)), (int) (BgL_restz00_1711));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3539z00_1701) (BgL_method3539z00_1701,
					(obj_t) (BgL_nodez00_4), BgL_hostsz00_5, BEOA);
			}
		}
	}



/* _displace-let-fun-node! */
	obj_t BGl__displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2478, obj_t BgL_nodez00_2479, obj_t BgL_hostsz00_2480)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 122 */
			return
				BGl_displacezd2letzd2funzd2nodez12zc0zzintegrate_letzd2funzd2(
				(BgL_nodez00_bglt) (BgL_nodez00_2479), BgL_hostsz00_2480);
		}
	}



/* displace-let-fun-nod3538 */
	obj_t
		BGl_displacezd2letzd2funzd2nod3538zd2zzintegrate_letzd2funzd2
		(BgL_nodez00_bglt BgL_nodez00_6, obj_t BgL_hostsz00_7)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 16 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string3803z00zzintegrate_letzd2funzd2, (obj_t) (BgL_nodez00_6));
		}
	}



/* _displace-let-fun-nod3538 */
	obj_t BGl__displacezd2letzd2funzd2nod3538zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2481, obj_t BgL_nodez00_2482, obj_t BgL_hostsz00_2483)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 16 */
			return
				BGl_displacezd2letzd2funzd2nod3538zd2zzintegrate_letzd2funzd2(
				(BgL_nodez00_bglt) (BgL_nodez00_2482), BgL_hostsz00_2483);
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_letzd2funzd2()
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_atomz00zzast_nodez00, BGl_proc3804z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_kwotez00zzast_nodez00, BGl_proc3805z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_varz00zzast_nodez00, BGl_proc3806z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_closurez00zzast_nodez00, BGl_proc3807z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_sequencez00zzast_nodez00, BGl_proc3808z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_appz00zzast_nodez00, BGl_proc3809z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3810z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_funcallz00zzast_nodez00, BGl_proc3811z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_externz00zzast_nodez00, BGl_proc3812z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_castz00zzast_nodez00, BGl_proc3813z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_setqz00zzast_nodez00, BGl_proc3814z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_conditionalz00zzast_nodez00,
				BGl_proc3815z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_failz00zzast_nodez00, BGl_proc3816z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_selectz00zzast_nodez00, BGl_proc3817z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3818z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3819z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc3820z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc3821z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3822z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc3823z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3824z00zzintegrate_letzd2funzd2,
				BGl_string3802z00zzintegrate_letzd2funzd2);
		}
	}



/* displace-let-fun-nod3583 */
	obj_t BGl_displacezd2letzd2funzd2nod3583zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2505, obj_t BgL_nodez00_2506, obj_t BgL_hostsz00_2507)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 312 */
			return BUNSPEC;
		}
	}



/* displace-let-fun-nod3581 */
	obj_t BGl_displacezd2letzd2funzd2nod3581zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2508, obj_t BgL_nodez00_2509, obj_t BgL_hostsz00_2510)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 306 */
			return BUNSPEC;
		}
	}



/* displace-let-fun-nod3579 */
	obj_t BGl_displacezd2letzd2funzd2nod3579zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2511, obj_t BgL_nodez00_2512, obj_t BgL_hostsz00_2513)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 299 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1594;

				obj_t BgL_hostsz00_1595;

				BgL_nodez00_1594 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2512);
				BgL_hostsz00_1595 = BgL_hostsz00_2513;
				{	/* Integrate/let_fun.scm 300 */
					BgL_nodez00_bglt BgL_arg3740z00_2447;

					BgL_arg3740z00_2447 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1594))->BgL_valuez00);
					{	/* Integrate/let_fun.scm 300 */
						obj_t BgL_hostsz00_2450;

						BgL_hostsz00_2450 = BgL_hostsz00_1595;
						{	/* Integrate/let_fun.scm 300 */
							obj_t BgL_method3539z00_2451;

							{	/* Integrate/let_fun.scm 300 */
								BgL_objectz00_bglt BgL_objz00_2452;

								BgL_objz00_2452 = (BgL_objectz00_bglt) (BgL_arg3740z00_2447);
								{	/* Integrate/let_fun.scm 300 */
									long BgL_objzd2classzd2numz00_2453;

									BgL_objzd2classzd2numz00_2453 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2452);
									{	/* Integrate/let_fun.scm 300 */
										obj_t BgL_arg2643z00_2454;

										BgL_arg2643z00_2454 =
											PROCEDURE_REF
											(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
											(int) (((long) 1)));
										{	/* Integrate/let_fun.scm 300 */
											obj_t BgL_arrayz00_2456;

											int BgL_offsetz00_2457;

											BgL_arrayz00_2456 = BgL_arg2643z00_2454;
											BgL_offsetz00_2457 =
												(int) (BgL_objzd2classzd2numz00_2453);
											{	/* Integrate/let_fun.scm 300 */
												long BgL_offsetz00_2458;

												BgL_offsetz00_2458 =
													((long) (BgL_offsetz00_2457) - OBJECT_TYPE);
												{	/* Integrate/let_fun.scm 300 */
													long BgL_modz00_2459;

													{	/* Integrate/let_fun.scm 300 */
														int BgL_arg2645z00_2460;

														BgL_arg2645z00_2460 = (int) (((long) 16));
														{	/* Integrate/let_fun.scm 300 */
															long BgL_auxz00_2805;

															BgL_auxz00_2805 = (long) (BgL_arg2645z00_2460);
															BgL_modz00_2459 =
																(BgL_offsetz00_2458 / BgL_auxz00_2805);
													}}
													{	/* Integrate/let_fun.scm 300 */
														long BgL_restz00_2461;

														{	/* Integrate/let_fun.scm 300 */
															int BgL_arg2644z00_2462;

															BgL_arg2644z00_2462 = (int) (((long) 16));
															{	/* Integrate/let_fun.scm 300 */
																long BgL_auxz00_2809;

																BgL_auxz00_2809 = (long) (BgL_arg2644z00_2462);
																BgL_restz00_2461 =
																	(BgL_offsetz00_2458 % BgL_auxz00_2809);
														}}
														{	/* Integrate/let_fun.scm 300 */

															BgL_method3539z00_2451 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2456,
																	(int) (BgL_modz00_2459)),
																(int) (BgL_restz00_2461));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3539z00_2451) (BgL_method3539z00_2451,
								(obj_t) (BgL_arg3740z00_2447), BgL_hostsz00_2450, BEOA);
						}
					}
				}
			}
		}
	}



/* displace-let-fun-nod3577 */
	obj_t BGl_displacezd2letzd2funzd2nod3577zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2514, obj_t BgL_nodez00_2515, obj_t BgL_hostsz00_2516)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 291 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1585;

				obj_t BgL_hostsz00_1586;

				BgL_nodez00_1585 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2515);
				BgL_hostsz00_1586 = BgL_hostsz00_2516;
				{	/* Integrate/let_fun.scm 292 */
					BgL_nodez00_bglt BgL_arg3737z00_2388;

					BgL_arg3737z00_2388 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1585))->
						BgL_exitz00);
					{	/* Integrate/let_fun.scm 292 */
						obj_t BgL_hostsz00_2392;

						BgL_hostsz00_2392 = BgL_hostsz00_1586;
						{	/* Integrate/let_fun.scm 292 */
							obj_t BgL_method3539z00_2393;

							{	/* Integrate/let_fun.scm 292 */
								BgL_objectz00_bglt BgL_objz00_2394;

								BgL_objz00_2394 = (BgL_objectz00_bglt) (BgL_arg3737z00_2388);
								{	/* Integrate/let_fun.scm 292 */
									long BgL_objzd2classzd2numz00_2395;

									BgL_objzd2classzd2numz00_2395 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2394);
									{	/* Integrate/let_fun.scm 292 */
										obj_t BgL_arg2643z00_2396;

										BgL_arg2643z00_2396 =
											PROCEDURE_REF
											(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
											(int) (((long) 1)));
										{	/* Integrate/let_fun.scm 292 */
											obj_t BgL_arrayz00_2398;

											int BgL_offsetz00_2399;

											BgL_arrayz00_2398 = BgL_arg2643z00_2396;
											BgL_offsetz00_2399 =
												(int) (BgL_objzd2classzd2numz00_2395);
											{	/* Integrate/let_fun.scm 292 */
												long BgL_offsetz00_2400;

												BgL_offsetz00_2400 =
													((long) (BgL_offsetz00_2399) - OBJECT_TYPE);
												{	/* Integrate/let_fun.scm 292 */
													long BgL_modz00_2401;

													{	/* Integrate/let_fun.scm 292 */
														int BgL_arg2645z00_2402;

														BgL_arg2645z00_2402 = (int) (((long) 16));
														{	/* Integrate/let_fun.scm 292 */
															long BgL_auxz00_2829;

															BgL_auxz00_2829 = (long) (BgL_arg2645z00_2402);
															BgL_modz00_2401 =
																(BgL_offsetz00_2400 / BgL_auxz00_2829);
													}}
													{	/* Integrate/let_fun.scm 292 */
														long BgL_restz00_2403;

														{	/* Integrate/let_fun.scm 292 */
															int BgL_arg2644z00_2404;

															BgL_arg2644z00_2404 = (int) (((long) 16));
															{	/* Integrate/let_fun.scm 292 */
																long BgL_auxz00_2833;

																BgL_auxz00_2833 = (long) (BgL_arg2644z00_2404);
																BgL_restz00_2403 =
																	(BgL_offsetz00_2400 % BgL_auxz00_2833);
														}}
														{	/* Integrate/let_fun.scm 292 */

															BgL_method3539z00_2393 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2398,
																	(int) (BgL_modz00_2401)),
																(int) (BgL_restz00_2403));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3539z00_2393) (BgL_method3539z00_2393,
								(obj_t) (BgL_arg3737z00_2388), BgL_hostsz00_2392, BEOA);
				}}}
				{	/* Integrate/let_fun.scm 292 */
					BgL_nodez00_bglt BgL_arg3738z00_2389;

					BgL_arg3738z00_2389 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1585))->
						BgL_valuez00);
					{	/* Integrate/let_fun.scm 292 */
						obj_t BgL_hostsz00_2420;

						BgL_hostsz00_2420 = BgL_hostsz00_1586;
						{	/* Integrate/let_fun.scm 292 */
							obj_t BgL_method3539z00_2421;

							{	/* Integrate/let_fun.scm 292 */
								BgL_objectz00_bglt BgL_objz00_2422;

								BgL_objz00_2422 = (BgL_objectz00_bglt) (BgL_arg3738z00_2389);
								{	/* Integrate/let_fun.scm 292 */
									long BgL_objzd2classzd2numz00_2423;

									BgL_objzd2classzd2numz00_2423 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2422);
									{	/* Integrate/let_fun.scm 292 */
										obj_t BgL_arg2643z00_2424;

										BgL_arg2643z00_2424 =
											PROCEDURE_REF
											(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
											(int) (((long) 1)));
										{	/* Integrate/let_fun.scm 292 */
											obj_t BgL_arrayz00_2426;

											int BgL_offsetz00_2427;

											BgL_arrayz00_2426 = BgL_arg2643z00_2424;
											BgL_offsetz00_2427 =
												(int) (BgL_objzd2classzd2numz00_2423);
											{	/* Integrate/let_fun.scm 292 */
												long BgL_offsetz00_2428;

												BgL_offsetz00_2428 =
													((long) (BgL_offsetz00_2427) - OBJECT_TYPE);
												{	/* Integrate/let_fun.scm 292 */
													long BgL_modz00_2429;

													{	/* Integrate/let_fun.scm 292 */
														int BgL_arg2645z00_2430;

														BgL_arg2645z00_2430 = (int) (((long) 16));
														{	/* Integrate/let_fun.scm 292 */
															long BgL_auxz00_2852;

															BgL_auxz00_2852 = (long) (BgL_arg2645z00_2430);
															BgL_modz00_2429 =
																(BgL_offsetz00_2428 / BgL_auxz00_2852);
													}}
													{	/* Integrate/let_fun.scm 292 */
														long BgL_restz00_2431;

														{	/* Integrate/let_fun.scm 292 */
															int BgL_arg2644z00_2432;

															BgL_arg2644z00_2432 = (int) (((long) 16));
															{	/* Integrate/let_fun.scm 292 */
																long BgL_auxz00_2856;

																BgL_auxz00_2856 = (long) (BgL_arg2644z00_2432);
																BgL_restz00_2431 =
																	(BgL_offsetz00_2428 % BgL_auxz00_2856);
														}}
														{	/* Integrate/let_fun.scm 292 */

															BgL_method3539z00_2421 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2426,
																	(int) (BgL_modz00_2429)),
																(int) (BgL_restz00_2431));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3539z00_2421) (BgL_method3539z00_2421,
								(obj_t) (BgL_arg3738z00_2389), BgL_hostsz00_2420, BEOA);
						}
					}
				}
			}
		}
	}



/* displace-let-fun-nod3575 */
	obj_t BGl_displacezd2letzd2funzd2nod3575zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2517, obj_t BgL_nodez00_2518, obj_t BgL_hostsz00_2519)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 284 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1577;

				obj_t BgL_hostsz00_1578;

				BgL_nodez00_1577 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2518);
				BgL_hostsz00_1578 = BgL_hostsz00_2519;
				{	/* Integrate/let_fun.scm 285 */
					BgL_nodez00_bglt BgL_arg3735z00_2358;

					BgL_arg3735z00_2358 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1577))->BgL_bodyz00);
					{	/* Integrate/let_fun.scm 285 */
						obj_t BgL_hostsz00_2361;

						BgL_hostsz00_2361 = BgL_hostsz00_1578;
						{	/* Integrate/let_fun.scm 285 */
							obj_t BgL_method3539z00_2362;

							{	/* Integrate/let_fun.scm 285 */
								BgL_objectz00_bglt BgL_objz00_2363;

								BgL_objz00_2363 = (BgL_objectz00_bglt) (BgL_arg3735z00_2358);
								{	/* Integrate/let_fun.scm 285 */
									long BgL_objzd2classzd2numz00_2364;

									BgL_objzd2classzd2numz00_2364 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2363);
									{	/* Integrate/let_fun.scm 285 */
										obj_t BgL_arg2643z00_2365;

										BgL_arg2643z00_2365 =
											PROCEDURE_REF
											(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
											(int) (((long) 1)));
										{	/* Integrate/let_fun.scm 285 */
											obj_t BgL_arrayz00_2367;

											int BgL_offsetz00_2368;

											BgL_arrayz00_2367 = BgL_arg2643z00_2365;
											BgL_offsetz00_2368 =
												(int) (BgL_objzd2classzd2numz00_2364);
											{	/* Integrate/let_fun.scm 285 */
												long BgL_offsetz00_2369;

												BgL_offsetz00_2369 =
													((long) (BgL_offsetz00_2368) - OBJECT_TYPE);
												{	/* Integrate/let_fun.scm 285 */
													long BgL_modz00_2370;

													{	/* Integrate/let_fun.scm 285 */
														int BgL_arg2645z00_2371;

														BgL_arg2645z00_2371 = (int) (((long) 16));
														{	/* Integrate/let_fun.scm 285 */
															long BgL_auxz00_2876;

															BgL_auxz00_2876 = (long) (BgL_arg2645z00_2371);
															BgL_modz00_2370 =
																(BgL_offsetz00_2369 / BgL_auxz00_2876);
													}}
													{	/* Integrate/let_fun.scm 285 */
														long BgL_restz00_2372;

														{	/* Integrate/let_fun.scm 285 */
															int BgL_arg2644z00_2373;

															BgL_arg2644z00_2373 = (int) (((long) 16));
															{	/* Integrate/let_fun.scm 285 */
																long BgL_auxz00_2880;

																BgL_auxz00_2880 = (long) (BgL_arg2644z00_2373);
																BgL_restz00_2372 =
																	(BgL_offsetz00_2369 % BgL_auxz00_2880);
														}}
														{	/* Integrate/let_fun.scm 285 */

															BgL_method3539z00_2362 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2367,
																	(int) (BgL_modz00_2370)),
																(int) (BgL_restz00_2372));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3539z00_2362) (BgL_method3539z00_2362,
								(obj_t) (BgL_arg3735z00_2358), BgL_hostsz00_2361, BEOA);
						}
					}
				}
			}
		}
	}



/* displace-let-fun-nod3573 */
	obj_t BGl_displacezd2letzd2funzd2nod3573zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2520, obj_t BgL_nodez00_2521, obj_t BgL_hostsz00_2522)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 270 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1559;

				obj_t BgL_hostsz00_1560;

				BgL_nodez00_1559 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2521);
				BgL_hostsz00_1560 = BgL_hostsz00_2522;
				{	/* Integrate/let_fun.scm 272 */
					obj_t BgL_g3523z00_1564;

					BgL_g3523z00_1564 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1559))->BgL_bindingsz00);
					{
						obj_t BgL_bindingsz00_1566;

						BgL_bindingsz00_1566 = BgL_g3523z00_1564;
					BgL_zc3anonymousza33730ze3z83_1567:
						if (NULLP(BgL_bindingsz00_1566))
							{	/* Integrate/let_fun.scm 274 */
								BgL_nodez00_bglt BgL_arg3732z00_1569;

								BgL_arg3732z00_1569 =
									(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1559))->
									BgL_bodyz00);
								{	/* Integrate/let_fun.scm 274 */
									obj_t BgL_hostsz00_2300;

									BgL_hostsz00_2300 = BgL_hostsz00_1560;
									{	/* Integrate/let_fun.scm 274 */
										obj_t BgL_method3539z00_2301;

										{	/* Integrate/let_fun.scm 274 */
											BgL_objectz00_bglt BgL_objz00_2302;

											BgL_objz00_2302 =
												(BgL_objectz00_bglt) (BgL_arg3732z00_1569);
											{	/* Integrate/let_fun.scm 274 */
												long BgL_objzd2classzd2numz00_2303;

												BgL_objzd2classzd2numz00_2303 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2302);
												{	/* Integrate/let_fun.scm 274 */
													obj_t BgL_arg2643z00_2304;

													BgL_arg2643z00_2304 =
														PROCEDURE_REF
														(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
														(int) (((long) 1)));
													{	/* Integrate/let_fun.scm 274 */
														obj_t BgL_arrayz00_2306;

														int BgL_offsetz00_2307;

														BgL_arrayz00_2306 = BgL_arg2643z00_2304;
														BgL_offsetz00_2307 =
															(int) (BgL_objzd2classzd2numz00_2303);
														{	/* Integrate/let_fun.scm 274 */
															long BgL_offsetz00_2308;

															BgL_offsetz00_2308 =
																((long) (BgL_offsetz00_2307) - OBJECT_TYPE);
															{	/* Integrate/let_fun.scm 274 */
																long BgL_modz00_2309;

																{	/* Integrate/let_fun.scm 274 */
																	int BgL_arg2645z00_2310;

																	BgL_arg2645z00_2310 = (int) (((long) 16));
																	{	/* Integrate/let_fun.scm 274 */
																		long BgL_auxz00_2903;

																		BgL_auxz00_2903 =
																			(long) (BgL_arg2645z00_2310);
																		BgL_modz00_2309 =
																			(BgL_offsetz00_2308 / BgL_auxz00_2903);
																}}
																{	/* Integrate/let_fun.scm 274 */
																	long BgL_restz00_2311;

																	{	/* Integrate/let_fun.scm 274 */
																		int BgL_arg2644z00_2312;

																		BgL_arg2644z00_2312 = (int) (((long) 16));
																		{	/* Integrate/let_fun.scm 274 */
																			long BgL_auxz00_2907;

																			BgL_auxz00_2907 =
																				(long) (BgL_arg2644z00_2312);
																			BgL_restz00_2311 =
																				(BgL_offsetz00_2308 % BgL_auxz00_2907);
																	}}
																	{	/* Integrate/let_fun.scm 274 */

																		BgL_method3539z00_2301 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2306,
																				(int) (BgL_modz00_2309)),
																			(int) (BgL_restz00_2311));
										}}}}}}}}
										return
											PROCEDURE_ENTRY(BgL_method3539z00_2301)
											(BgL_method3539z00_2301, (obj_t) (BgL_arg3732z00_1569),
											BgL_hostsz00_2300, BEOA);
									}
								}
							}
						else
							{	/* Integrate/let_fun.scm 275 */
								obj_t BgL_bindingz00_1570;

								BgL_bindingz00_1570 = CAR(BgL_bindingsz00_1566);
								{	/* Integrate/let_fun.scm 276 */
									obj_t BgL_valz00_1572;

									BgL_valz00_1572 = CDR(BgL_bindingz00_1570);
									{	/* Integrate/let_fun.scm 277 */

										{	/* Integrate/let_fun.scm 278 */
											BgL_nodez00_bglt BgL_nodez00_2329;

											obj_t BgL_hostsz00_2330;

											BgL_nodez00_2329 = (BgL_nodez00_bglt) (BgL_valz00_1572);
											BgL_hostsz00_2330 = BgL_hostsz00_1560;
											{	/* Integrate/let_fun.scm 278 */
												obj_t BgL_method3539z00_2331;

												{	/* Integrate/let_fun.scm 278 */
													BgL_objectz00_bglt BgL_objz00_2332;

													BgL_objz00_2332 =
														(BgL_objectz00_bglt) (BgL_nodez00_2329);
													{	/* Integrate/let_fun.scm 278 */
														long BgL_objzd2classzd2numz00_2333;

														BgL_objzd2classzd2numz00_2333 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2332);
														{	/* Integrate/let_fun.scm 278 */
															obj_t BgL_arg2643z00_2334;

															BgL_arg2643z00_2334 =
																PROCEDURE_REF
																(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
																(int) (((long) 1)));
															{	/* Integrate/let_fun.scm 278 */
																obj_t BgL_arrayz00_2336;

																int BgL_offsetz00_2337;

																BgL_arrayz00_2336 = BgL_arg2643z00_2334;
																BgL_offsetz00_2337 =
																	(int) (BgL_objzd2classzd2numz00_2333);
																{	/* Integrate/let_fun.scm 278 */
																	long BgL_offsetz00_2338;

																	BgL_offsetz00_2338 =
																		((long) (BgL_offsetz00_2337) - OBJECT_TYPE);
																	{	/* Integrate/let_fun.scm 278 */
																		long BgL_modz00_2339;

																		{	/* Integrate/let_fun.scm 278 */
																			int BgL_arg2645z00_2340;

																			BgL_arg2645z00_2340 = (int) (((long) 16));
																			{	/* Integrate/let_fun.scm 278 */
																				long BgL_auxz00_2928;

																				BgL_auxz00_2928 =
																					(long) (BgL_arg2645z00_2340);
																				BgL_modz00_2339 =
																					(BgL_offsetz00_2338 /
																					BgL_auxz00_2928);
																		}}
																		{	/* Integrate/let_fun.scm 278 */
																			long BgL_restz00_2341;

																			{	/* Integrate/let_fun.scm 278 */
																				int BgL_arg2644z00_2342;

																				BgL_arg2644z00_2342 =
																					(int) (((long) 16));
																				{	/* Integrate/let_fun.scm 278 */
																					long BgL_auxz00_2932;

																					BgL_auxz00_2932 =
																						(long) (BgL_arg2644z00_2342);
																					BgL_restz00_2341 =
																						(BgL_offsetz00_2338 %
																						BgL_auxz00_2932);
																			}}
																			{	/* Integrate/let_fun.scm 278 */

																				BgL_method3539z00_2331 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2336,
																						(int) (BgL_modz00_2339)),
																					(int) (BgL_restz00_2341));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method3539z00_2331)
													(BgL_method3539z00_2331, (obj_t) (BgL_nodez00_2329),
													BgL_hostsz00_2330, BEOA);
										}}
										{
											obj_t BgL_bindingsz00_2942;

											BgL_bindingsz00_2942 = CDR(BgL_bindingsz00_1566);
											BgL_bindingsz00_1566 = BgL_bindingsz00_2942;
											goto BgL_zc3anonymousza33730ze3z83_1567;
										}
									}
								}
							}
					}
				}
			}
		}
	}



/* displace-let-fun-nod3571 */
	obj_t BGl_displacezd2letzd2funzd2nod3571zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2523, obj_t BgL_nodez00_2524, obj_t BgL_hostsz00_2525)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 240 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1531;

				obj_t BgL_hostsz00_1532;

				BgL_nodez00_1531 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2524);
				BgL_hostsz00_1532 = BgL_hostsz00_2525;
				{	/* Integrate/let_fun.scm 244 */
					obj_t BgL_g3519z00_1536;

					BgL_g3519z00_1536 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1531))->BgL_localsz00);
					{
						obj_t BgL_oldz00_1539;

						obj_t BgL_newz00_1540;

						BgL_oldz00_1539 = BgL_g3519z00_1536;
						BgL_newz00_1540 = BNIL;
					BgL_zc3anonymousza33715ze3z83_1541:
						if (NULLP(BgL_oldz00_1539))
							{	/* Integrate/let_fun.scm 255 */
								((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1531))->
										BgL_localsz00) = ((obj_t) BgL_newz00_1540), BUNSPEC);
								{	/* Integrate/let_fun.scm 257 */
									BgL_nodez00_bglt BgL_arg3718z00_1544;

									BgL_arg3718z00_1544 =
										(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1531))->
										BgL_bodyz00);
									{	/* Integrate/let_fun.scm 257 */
										obj_t BgL_hostsz00_2235;

										BgL_hostsz00_2235 = BgL_hostsz00_1532;
										{	/* Integrate/let_fun.scm 257 */
											obj_t BgL_method3539z00_2236;

											{	/* Integrate/let_fun.scm 257 */
												BgL_objectz00_bglt BgL_objz00_2237;

												BgL_objz00_2237 =
													(BgL_objectz00_bglt) (BgL_arg3718z00_1544);
												{	/* Integrate/let_fun.scm 257 */
													long BgL_objzd2classzd2numz00_2238;

													BgL_objzd2classzd2numz00_2238 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2237);
													{	/* Integrate/let_fun.scm 257 */
														obj_t BgL_arg2643z00_2239;

														BgL_arg2643z00_2239 =
															PROCEDURE_REF
															(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
															(int) (((long) 1)));
														{	/* Integrate/let_fun.scm 257 */
															obj_t BgL_arrayz00_2241;

															int BgL_offsetz00_2242;

															BgL_arrayz00_2241 = BgL_arg2643z00_2239;
															BgL_offsetz00_2242 =
																(int) (BgL_objzd2classzd2numz00_2238);
															{	/* Integrate/let_fun.scm 257 */
																long BgL_offsetz00_2243;

																BgL_offsetz00_2243 =
																	((long) (BgL_offsetz00_2242) - OBJECT_TYPE);
																{	/* Integrate/let_fun.scm 257 */
																	long BgL_modz00_2244;

																	{	/* Integrate/let_fun.scm 257 */
																		int BgL_arg2645z00_2245;

																		BgL_arg2645z00_2245 = (int) (((long) 16));
																		{	/* Integrate/let_fun.scm 257 */
																			long BgL_auxz00_2958;

																			BgL_auxz00_2958 =
																				(long) (BgL_arg2645z00_2245);
																			BgL_modz00_2244 =
																				(BgL_offsetz00_2243 / BgL_auxz00_2958);
																	}}
																	{	/* Integrate/let_fun.scm 257 */
																		long BgL_restz00_2246;

																		{	/* Integrate/let_fun.scm 257 */
																			int BgL_arg2644z00_2247;

																			BgL_arg2644z00_2247 = (int) (((long) 16));
																			{	/* Integrate/let_fun.scm 257 */
																				long BgL_auxz00_2962;

																				BgL_auxz00_2962 =
																					(long) (BgL_arg2644z00_2247);
																				BgL_restz00_2246 =
																					(BgL_offsetz00_2243 %
																					BgL_auxz00_2962);
																		}}
																		{	/* Integrate/let_fun.scm 257 */

																			BgL_method3539z00_2236 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2241,
																					(int) (BgL_modz00_2244)),
																				(int) (BgL_restz00_2246));
											}}}}}}}}
											return
												PROCEDURE_ENTRY(BgL_method3539z00_2236)
												(BgL_method3539z00_2236, (obj_t) (BgL_arg3718z00_1544),
												BgL_hostsz00_2235, BEOA);
										}
									}
								}
							}
						else
							{	/* Integrate/let_fun.scm 258 */
								bool_t BgL_testz00_2972;

								{	/* Integrate/let_fun.scm 258 */
									obj_t BgL_auxz00_2973;

									{	/* Integrate/let_fun.scm 258 */
										obj_t BgL_auxz00_2974;

										{	/* Integrate/let_fun.scm 258 */
											BgL_sfunzf2iinfozf2_bglt BgL_obj3428z00_2263;

											{	/* Integrate/let_fun.scm 258 */
												BgL_valuez00_bglt BgL_auxz00_2975;

												{	/* Integrate/let_fun.scm 258 */
													BgL_variablez00_bglt BgL_obj1611z00_2262;

													{	/* Integrate/let_fun.scm 258 */
														obj_t BgL_pairz00_2261;

														BgL_pairz00_2261 = BgL_oldz00_1539;
														BgL_obj1611z00_2262 =
															(BgL_variablez00_bglt) (CAR(BgL_pairz00_2261));
													}
													BgL_auxz00_2975 =
														(((BgL_variablez00_bglt)
															CREF(BgL_obj1611z00_2262))->BgL_valuez00);
												}
												BgL_obj3428z00_2263 =
													(BgL_sfunzf2iinfozf2_bglt) (BgL_auxz00_2975);
											}
											{
												obj_t BgL_auxz00_2980;

												{	/* Integrate/let_fun.scm 258 */
													BgL_objectz00_bglt BgL_auxz00_2981;

													BgL_auxz00_2981 =
														(BgL_objectz00_bglt) (BgL_obj3428z00_2263);
													BgL_auxz00_2980 =
														BGL_OBJECT_WIDENING(BgL_auxz00_2981);
												}
												BgL_auxz00_2974 =
													(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_2980))->
													BgL_lz00);
											}
										}
										BgL_auxz00_2973 =
											BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_2974,
											BgL_hostsz00_1532);
									}
									BgL_testz00_2972 = CBOOL(BgL_auxz00_2973);
								}
								if (BgL_testz00_2972)
									{	/* Integrate/let_fun.scm 259 */
										obj_t BgL_lz00_1546;

										BgL_lz00_1546 = CAR(BgL_oldz00_1539);
										BGl_bindzd2funz12zc0zzintegrate_letzd2funzd2(BgL_lz00_1546);
										{	/* Integrate/let_fun.scm 261 */
											obj_t BgL_arg3720z00_1547;

											obj_t BgL_arg3721z00_1548;

											{	/* Integrate/let_fun.scm 261 */
												BgL_sfunz00_bglt BgL_obj1884z00_2266;

												{	/* Integrate/let_fun.scm 261 */
													BgL_variablez00_bglt BgL_obj1611z00_2265;

													BgL_obj1611z00_2265 =
														(BgL_variablez00_bglt) (BgL_lz00_1546);
													BgL_obj1884z00_2266 =
														(BgL_sfunz00_bglt) (
														(((BgL_variablez00_bglt)
																CREF(BgL_obj1611z00_2265))->BgL_valuez00));
												}
												BgL_arg3720z00_1547 =
													(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_2266))->
													BgL_bodyz00);
											}
											BgL_arg3721z00_1548 =
												MAKE_PAIR(BgL_lz00_1546, BgL_hostsz00_1532);
											{	/* Integrate/let_fun.scm 261 */
												BgL_nodez00_bglt BgL_nodez00_2267;

												BgL_nodez00_2267 =
													(BgL_nodez00_bglt) (BgL_arg3720z00_1547);
												{	/* Integrate/let_fun.scm 261 */
													obj_t BgL_method3539z00_2269;

													{	/* Integrate/let_fun.scm 261 */
														BgL_objectz00_bglt BgL_objz00_2270;

														BgL_objz00_2270 =
															(BgL_objectz00_bglt) (BgL_nodez00_2267);
														{	/* Integrate/let_fun.scm 261 */
															long BgL_objzd2classzd2numz00_2271;

															BgL_objzd2classzd2numz00_2271 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2270);
															{	/* Integrate/let_fun.scm 261 */
																obj_t BgL_arg2643z00_2272;

																BgL_arg2643z00_2272 =
																	PROCEDURE_REF
																	(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
																	(int) (((long) 1)));
																{	/* Integrate/let_fun.scm 261 */
																	obj_t BgL_arrayz00_2274;

																	int BgL_offsetz00_2275;

																	BgL_arrayz00_2274 = BgL_arg2643z00_2272;
																	BgL_offsetz00_2275 =
																		(int) (BgL_objzd2classzd2numz00_2271);
																	{	/* Integrate/let_fun.scm 261 */
																		long BgL_offsetz00_2276;

																		BgL_offsetz00_2276 =
																			(
																			(long) (BgL_offsetz00_2275) -
																			OBJECT_TYPE);
																		{	/* Integrate/let_fun.scm 261 */
																			long BgL_modz00_2277;

																			{	/* Integrate/let_fun.scm 261 */
																				int BgL_arg2645z00_2278;

																				BgL_arg2645z00_2278 =
																					(int) (((long) 16));
																				{	/* Integrate/let_fun.scm 261 */
																					long BgL_auxz00_3003;

																					BgL_auxz00_3003 =
																						(long) (BgL_arg2645z00_2278);
																					BgL_modz00_2277 =
																						(BgL_offsetz00_2276 /
																						BgL_auxz00_3003);
																			}}
																			{	/* Integrate/let_fun.scm 261 */
																				long BgL_restz00_2279;

																				{	/* Integrate/let_fun.scm 261 */
																					int BgL_arg2644z00_2280;

																					BgL_arg2644z00_2280 =
																						(int) (((long) 16));
																					{	/* Integrate/let_fun.scm 261 */
																						long BgL_auxz00_3007;

																						BgL_auxz00_3007 =
																							(long) (BgL_arg2644z00_2280);
																						BgL_restz00_2279 =
																							(BgL_offsetz00_2276 %
																							BgL_auxz00_3007);
																				}}
																				{	/* Integrate/let_fun.scm 261 */

																					BgL_method3539z00_2269 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2274,
																							(int) (BgL_modz00_2277)),
																						(int) (BgL_restz00_2279));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method3539z00_2269)
														(BgL_method3539z00_2269, (obj_t) (BgL_nodez00_2267),
														BgL_arg3721z00_1548, BEOA);
										}}}
										{	/* Integrate/let_fun.scm 263 */
											obj_t BgL_arg3723z00_1550;

											obj_t BgL_arg3724z00_1551;

											BgL_arg3723z00_1550 = CDR(BgL_oldz00_1539);
											BgL_arg3724z00_1551 =
												MAKE_PAIR(BgL_lz00_1546, BgL_newz00_1540);
											{
												obj_t BgL_newz00_3020;

												obj_t BgL_oldz00_3019;

												BgL_oldz00_3019 = BgL_arg3723z00_1550;
												BgL_newz00_3020 = BgL_arg3724z00_1551;
												BgL_newz00_1540 = BgL_newz00_3020;
												BgL_oldz00_1539 = BgL_oldz00_3019;
												goto BgL_zc3anonymousza33715ze3z83_1541;
											}
										}
									}
								else
									{
										obj_t BgL_oldz00_3021;

										BgL_oldz00_3021 = CDR(BgL_oldz00_1539);
										BgL_oldz00_1539 = BgL_oldz00_3021;
										goto BgL_zc3anonymousza33715ze3z83_1541;
									}
							}
					}
				}
			}
		}
	}



/* displace-let-fun-nod3569 */
	obj_t BGl_displacezd2letzd2funzd2nod3569zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2526, obj_t BgL_nodez00_2527, obj_t BgL_hostsz00_2528)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 228 */
			{
				BgL_selectz00_bglt BgL_nodez00_1514;

				obj_t BgL_hostsz00_1515;

				BgL_nodez00_1514 = (BgL_selectz00_bglt) (BgL_nodez00_2527);
				BgL_hostsz00_1515 = BgL_hostsz00_2528;
				{	/* Integrate/let_fun.scm 230 */
					obj_t BgL_g3516z00_1519;

					BgL_g3516z00_1519 =
						(((BgL_selectz00_bglt) CREF(BgL_nodez00_1514))->BgL_clausesz00);
					{
						obj_t BgL_clausesz00_1521;

						BgL_clausesz00_1521 = BgL_g3516z00_1519;
					BgL_zc3anonymousza33708ze3z83_1522:
						if (NULLP(BgL_clausesz00_1521))
							{	/* Integrate/let_fun.scm 232 */
								BgL_nodez00_bglt BgL_arg3710z00_1524;

								BgL_arg3710z00_1524 =
									(((BgL_selectz00_bglt) CREF(BgL_nodez00_1514))->BgL_testz00);
								{	/* Integrate/let_fun.scm 232 */
									obj_t BgL_hostsz00_2172;

									BgL_hostsz00_2172 = BgL_hostsz00_1515;
									{	/* Integrate/let_fun.scm 232 */
										obj_t BgL_method3539z00_2173;

										{	/* Integrate/let_fun.scm 232 */
											BgL_objectz00_bglt BgL_objz00_2174;

											BgL_objz00_2174 =
												(BgL_objectz00_bglt) (BgL_arg3710z00_1524);
											{	/* Integrate/let_fun.scm 232 */
												long BgL_objzd2classzd2numz00_2175;

												BgL_objzd2classzd2numz00_2175 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2174);
												{	/* Integrate/let_fun.scm 232 */
													obj_t BgL_arg2643z00_2176;

													BgL_arg2643z00_2176 =
														PROCEDURE_REF
														(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
														(int) (((long) 1)));
													{	/* Integrate/let_fun.scm 232 */
														obj_t BgL_arrayz00_2178;

														int BgL_offsetz00_2179;

														BgL_arrayz00_2178 = BgL_arg2643z00_2176;
														BgL_offsetz00_2179 =
															(int) (BgL_objzd2classzd2numz00_2175);
														{	/* Integrate/let_fun.scm 232 */
															long BgL_offsetz00_2180;

															BgL_offsetz00_2180 =
																((long) (BgL_offsetz00_2179) - OBJECT_TYPE);
															{	/* Integrate/let_fun.scm 232 */
																long BgL_modz00_2181;

																{	/* Integrate/let_fun.scm 232 */
																	int BgL_arg2645z00_2182;

																	BgL_arg2645z00_2182 = (int) (((long) 16));
																	{	/* Integrate/let_fun.scm 232 */
																		long BgL_auxz00_3036;

																		BgL_auxz00_3036 =
																			(long) (BgL_arg2645z00_2182);
																		BgL_modz00_2181 =
																			(BgL_offsetz00_2180 / BgL_auxz00_3036);
																}}
																{	/* Integrate/let_fun.scm 232 */
																	long BgL_restz00_2183;

																	{	/* Integrate/let_fun.scm 232 */
																		int BgL_arg2644z00_2184;

																		BgL_arg2644z00_2184 = (int) (((long) 16));
																		{	/* Integrate/let_fun.scm 232 */
																			long BgL_auxz00_3040;

																			BgL_auxz00_3040 =
																				(long) (BgL_arg2644z00_2184);
																			BgL_restz00_2183 =
																				(BgL_offsetz00_2180 % BgL_auxz00_3040);
																	}}
																	{	/* Integrate/let_fun.scm 232 */

																		BgL_method3539z00_2173 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2178,
																				(int) (BgL_modz00_2181)),
																			(int) (BgL_restz00_2183));
										}}}}}}}}
										return
											PROCEDURE_ENTRY(BgL_method3539z00_2173)
											(BgL_method3539z00_2173, (obj_t) (BgL_arg3710z00_1524),
											BgL_hostsz00_2172, BEOA);
									}
								}
							}
						else
							{	/* Integrate/let_fun.scm 231 */
								{	/* Integrate/let_fun.scm 234 */
									obj_t BgL_arg3711z00_1525;

									BgL_arg3711z00_1525 = CDR(CAR(BgL_clausesz00_1521));
									{	/* Integrate/let_fun.scm 234 */
										BgL_nodez00_bglt BgL_nodez00_2200;

										obj_t BgL_hostsz00_2201;

										BgL_nodez00_2200 = (BgL_nodez00_bglt) (BgL_arg3711z00_1525);
										BgL_hostsz00_2201 = BgL_hostsz00_1515;
										{	/* Integrate/let_fun.scm 234 */
											obj_t BgL_method3539z00_2202;

											{	/* Integrate/let_fun.scm 234 */
												BgL_objectz00_bglt BgL_objz00_2203;

												BgL_objz00_2203 =
													(BgL_objectz00_bglt) (BgL_nodez00_2200);
												{	/* Integrate/let_fun.scm 234 */
													long BgL_objzd2classzd2numz00_2204;

													BgL_objzd2classzd2numz00_2204 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2203);
													{	/* Integrate/let_fun.scm 234 */
														obj_t BgL_arg2643z00_2205;

														BgL_arg2643z00_2205 =
															PROCEDURE_REF
															(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
															(int) (((long) 1)));
														{	/* Integrate/let_fun.scm 234 */
															obj_t BgL_arrayz00_2207;

															int BgL_offsetz00_2208;

															BgL_arrayz00_2207 = BgL_arg2643z00_2205;
															BgL_offsetz00_2208 =
																(int) (BgL_objzd2classzd2numz00_2204);
															{	/* Integrate/let_fun.scm 234 */
																long BgL_offsetz00_2209;

																BgL_offsetz00_2209 =
																	((long) (BgL_offsetz00_2208) - OBJECT_TYPE);
																{	/* Integrate/let_fun.scm 234 */
																	long BgL_modz00_2210;

																	{	/* Integrate/let_fun.scm 234 */
																		int BgL_arg2645z00_2211;

																		BgL_arg2645z00_2211 = (int) (((long) 16));
																		{	/* Integrate/let_fun.scm 234 */
																			long BgL_auxz00_3061;

																			BgL_auxz00_3061 =
																				(long) (BgL_arg2645z00_2211);
																			BgL_modz00_2210 =
																				(BgL_offsetz00_2209 / BgL_auxz00_3061);
																	}}
																	{	/* Integrate/let_fun.scm 234 */
																		long BgL_restz00_2212;

																		{	/* Integrate/let_fun.scm 234 */
																			int BgL_arg2644z00_2213;

																			BgL_arg2644z00_2213 = (int) (((long) 16));
																			{	/* Integrate/let_fun.scm 234 */
																				long BgL_auxz00_3065;

																				BgL_auxz00_3065 =
																					(long) (BgL_arg2644z00_2213);
																				BgL_restz00_2212 =
																					(BgL_offsetz00_2209 %
																					BgL_auxz00_3065);
																		}}
																		{	/* Integrate/let_fun.scm 234 */

																			BgL_method3539z00_2202 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2207,
																					(int) (BgL_modz00_2210)),
																				(int) (BgL_restz00_2212));
											}}}}}}}}
											PROCEDURE_ENTRY(BgL_method3539z00_2202)
												(BgL_method3539z00_2202, (obj_t) (BgL_nodez00_2200),
												BgL_hostsz00_2201, BEOA);
								}}}
								{
									obj_t BgL_clausesz00_3075;

									BgL_clausesz00_3075 = CDR(BgL_clausesz00_1521);
									BgL_clausesz00_1521 = BgL_clausesz00_3075;
									goto BgL_zc3anonymousza33708ze3z83_1522;
								}
							}
					}
				}
			}
		}
	}



/* displace-let-fun-nod3567 */
	obj_t BGl_displacezd2letzd2funzd2nod3567zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2529, obj_t BgL_nodez00_2530, obj_t BgL_hostsz00_2531)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 219 */
			{
				BgL_failz00_bglt BgL_nodez00_1504;

				obj_t BgL_hostsz00_1505;

				BgL_nodez00_1504 = (BgL_failz00_bglt) (BgL_nodez00_2530);
				BgL_hostsz00_1505 = BgL_hostsz00_2531;
				{	/* Integrate/let_fun.scm 221 */
					BgL_nodez00_bglt BgL_arg3704z00_1509;

					BgL_arg3704z00_1509 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1504))->BgL_procz00);
					{	/* Integrate/let_fun.scm 221 */
						obj_t BgL_hostsz00_2086;

						BgL_hostsz00_2086 = BgL_hostsz00_1505;
						{	/* Integrate/let_fun.scm 221 */
							obj_t BgL_method3539z00_2087;

							{	/* Integrate/let_fun.scm 221 */
								BgL_objectz00_bglt BgL_objz00_2088;

								BgL_objz00_2088 = (BgL_objectz00_bglt) (BgL_arg3704z00_1509);
								{	/* Integrate/let_fun.scm 221 */
									long BgL_objzd2classzd2numz00_2089;

									BgL_objzd2classzd2numz00_2089 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2088);
									{	/* Integrate/let_fun.scm 221 */
										obj_t BgL_arg2643z00_2090;

										BgL_arg2643z00_2090 =
											PROCEDURE_REF
											(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
											(int) (((long) 1)));
										{	/* Integrate/let_fun.scm 221 */
											obj_t BgL_arrayz00_2092;

											int BgL_offsetz00_2093;

											BgL_arrayz00_2092 = BgL_arg2643z00_2090;
											BgL_offsetz00_2093 =
												(int) (BgL_objzd2classzd2numz00_2089);
											{	/* Integrate/let_fun.scm 221 */
												long BgL_offsetz00_2094;

												BgL_offsetz00_2094 =
													((long) (BgL_offsetz00_2093) - OBJECT_TYPE);
												{	/* Integrate/let_fun.scm 221 */
													long BgL_modz00_2095;

													{	/* Integrate/let_fun.scm 221 */
														int BgL_arg2645z00_2096;

														BgL_arg2645z00_2096 = (int) (((long) 16));
														{	/* Integrate/let_fun.scm 221 */
															long BgL_auxz00_3087;

															BgL_auxz00_3087 = (long) (BgL_arg2645z00_2096);
															BgL_modz00_2095 =
																(BgL_offsetz00_2094 / BgL_auxz00_3087);
													}}
													{	/* Integrate/let_fun.scm 221 */
														long BgL_restz00_2097;

														{	/* Integrate/let_fun.scm 221 */
															int BgL_arg2644z00_2098;

															BgL_arg2644z00_2098 = (int) (((long) 16));
															{	/* Integrate/let_fun.scm 221 */
																long BgL_auxz00_3091;

																BgL_auxz00_3091 = (long) (BgL_arg2644z00_2098);
																BgL_restz00_2097 =
																	(BgL_offsetz00_2094 % BgL_auxz00_3091);
														}}
														{	/* Integrate/let_fun.scm 221 */

															BgL_method3539z00_2087 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2092,
																	(int) (BgL_modz00_2095)),
																(int) (BgL_restz00_2097));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3539z00_2087) (BgL_method3539z00_2087,
								(obj_t) (BgL_arg3704z00_1509), BgL_hostsz00_2086, BEOA);
				}}}
				{	/* Integrate/let_fun.scm 222 */
					BgL_nodez00_bglt BgL_arg3705z00_1510;

					BgL_arg3705z00_1510 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1504))->BgL_msgz00);
					{	/* Integrate/let_fun.scm 222 */
						obj_t BgL_hostsz00_2114;

						BgL_hostsz00_2114 = BgL_hostsz00_1505;
						{	/* Integrate/let_fun.scm 222 */
							obj_t BgL_method3539z00_2115;

							{	/* Integrate/let_fun.scm 222 */
								BgL_objectz00_bglt BgL_objz00_2116;

								BgL_objz00_2116 = (BgL_objectz00_bglt) (BgL_arg3705z00_1510);
								{	/* Integrate/let_fun.scm 222 */
									long BgL_objzd2classzd2numz00_2117;

									BgL_objzd2classzd2numz00_2117 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2116);
									{	/* Integrate/let_fun.scm 222 */
										obj_t BgL_arg2643z00_2118;

										BgL_arg2643z00_2118 =
											PROCEDURE_REF
											(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
											(int) (((long) 1)));
										{	/* Integrate/let_fun.scm 222 */
											obj_t BgL_arrayz00_2120;

											int BgL_offsetz00_2121;

											BgL_arrayz00_2120 = BgL_arg2643z00_2118;
											BgL_offsetz00_2121 =
												(int) (BgL_objzd2classzd2numz00_2117);
											{	/* Integrate/let_fun.scm 222 */
												long BgL_offsetz00_2122;

												BgL_offsetz00_2122 =
													((long) (BgL_offsetz00_2121) - OBJECT_TYPE);
												{	/* Integrate/let_fun.scm 222 */
													long BgL_modz00_2123;

													{	/* Integrate/let_fun.scm 222 */
														int BgL_arg2645z00_2124;

														BgL_arg2645z00_2124 = (int) (((long) 16));
														{	/* Integrate/let_fun.scm 222 */
															long BgL_auxz00_3110;

															BgL_auxz00_3110 = (long) (BgL_arg2645z00_2124);
															BgL_modz00_2123 =
																(BgL_offsetz00_2122 / BgL_auxz00_3110);
													}}
													{	/* Integrate/let_fun.scm 222 */
														long BgL_restz00_2125;

														{	/* Integrate/let_fun.scm 222 */
															int BgL_arg2644z00_2126;

															BgL_arg2644z00_2126 = (int) (((long) 16));
															{	/* Integrate/let_fun.scm 222 */
																long BgL_auxz00_3114;

																BgL_auxz00_3114 = (long) (BgL_arg2644z00_2126);
																BgL_restz00_2125 =
																	(BgL_offsetz00_2122 % BgL_auxz00_3114);
														}}
														{	/* Integrate/let_fun.scm 222 */

															BgL_method3539z00_2115 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2120,
																	(int) (BgL_modz00_2123)),
																(int) (BgL_restz00_2125));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3539z00_2115) (BgL_method3539z00_2115,
								(obj_t) (BgL_arg3705z00_1510), BgL_hostsz00_2114, BEOA);
				}}}
				{	/* Integrate/let_fun.scm 223 */
					BgL_nodez00_bglt BgL_arg3706z00_1511;

					BgL_arg3706z00_1511 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1504))->BgL_objz00);
					{	/* Integrate/let_fun.scm 223 */
						obj_t BgL_hostsz00_2142;

						BgL_hostsz00_2142 = BgL_hostsz00_1505;
						{	/* Integrate/let_fun.scm 223 */
							obj_t BgL_method3539z00_2143;

							{	/* Integrate/let_fun.scm 223 */
								BgL_objectz00_bglt BgL_objz00_2144;

								BgL_objz00_2144 = (BgL_objectz00_bglt) (BgL_arg3706z00_1511);
								{	/* Integrate/let_fun.scm 223 */
									long BgL_objzd2classzd2numz00_2145;

									BgL_objzd2classzd2numz00_2145 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2144);
									{	/* Integrate/let_fun.scm 223 */
										obj_t BgL_arg2643z00_2146;

										BgL_arg2643z00_2146 =
											PROCEDURE_REF
											(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
											(int) (((long) 1)));
										{	/* Integrate/let_fun.scm 223 */
											obj_t BgL_arrayz00_2148;

											int BgL_offsetz00_2149;

											BgL_arrayz00_2148 = BgL_arg2643z00_2146;
											BgL_offsetz00_2149 =
												(int) (BgL_objzd2classzd2numz00_2145);
											{	/* Integrate/let_fun.scm 223 */
												long BgL_offsetz00_2150;

												BgL_offsetz00_2150 =
													((long) (BgL_offsetz00_2149) - OBJECT_TYPE);
												{	/* Integrate/let_fun.scm 223 */
													long BgL_modz00_2151;

													{	/* Integrate/let_fun.scm 223 */
														int BgL_arg2645z00_2152;

														BgL_arg2645z00_2152 = (int) (((long) 16));
														{	/* Integrate/let_fun.scm 223 */
															long BgL_auxz00_3133;

															BgL_auxz00_3133 = (long) (BgL_arg2645z00_2152);
															BgL_modz00_2151 =
																(BgL_offsetz00_2150 / BgL_auxz00_3133);
													}}
													{	/* Integrate/let_fun.scm 223 */
														long BgL_restz00_2153;

														{	/* Integrate/let_fun.scm 223 */
															int BgL_arg2644z00_2154;

															BgL_arg2644z00_2154 = (int) (((long) 16));
															{	/* Integrate/let_fun.scm 223 */
																long BgL_auxz00_3137;

																BgL_auxz00_3137 = (long) (BgL_arg2644z00_2154);
																BgL_restz00_2153 =
																	(BgL_offsetz00_2150 % BgL_auxz00_3137);
														}}
														{	/* Integrate/let_fun.scm 223 */

															BgL_method3539z00_2143 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2148,
																	(int) (BgL_modz00_2151)),
																(int) (BgL_restz00_2153));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3539z00_2143) (BgL_method3539z00_2143,
								(obj_t) (BgL_arg3706z00_1511), BgL_hostsz00_2142, BEOA);
						}
					}
				}
			}
		}
	}



/* displace-let-fun-nod3565 */
	obj_t BGl_displacezd2letzd2funzd2nod3565zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2532, obj_t BgL_nodez00_2533, obj_t BgL_hostsz00_2534)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 210 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1494;

				obj_t BgL_hostsz00_1495;

				BgL_nodez00_1494 = (BgL_conditionalz00_bglt) (BgL_nodez00_2533);
				BgL_hostsz00_1495 = BgL_hostsz00_2534;
				{	/* Integrate/let_fun.scm 212 */
					BgL_nodez00_bglt BgL_arg3700z00_1499;

					BgL_arg3700z00_1499 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1494))->BgL_testz00);
					{	/* Integrate/let_fun.scm 212 */
						obj_t BgL_hostsz00_2002;

						BgL_hostsz00_2002 = BgL_hostsz00_1495;
						{	/* Integrate/let_fun.scm 212 */
							obj_t BgL_method3539z00_2003;

							{	/* Integrate/let_fun.scm 212 */
								BgL_objectz00_bglt BgL_objz00_2004;

								BgL_objz00_2004 = (BgL_objectz00_bglt) (BgL_arg3700z00_1499);
								{	/* Integrate/let_fun.scm 212 */
									long BgL_objzd2classzd2numz00_2005;

									BgL_objzd2classzd2numz00_2005 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2004);
									{	/* Integrate/let_fun.scm 212 */
										obj_t BgL_arg2643z00_2006;

										BgL_arg2643z00_2006 =
											PROCEDURE_REF
											(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
											(int) (((long) 1)));
										{	/* Integrate/let_fun.scm 212 */
											obj_t BgL_arrayz00_2008;

											int BgL_offsetz00_2009;

											BgL_arrayz00_2008 = BgL_arg2643z00_2006;
											BgL_offsetz00_2009 =
												(int) (BgL_objzd2classzd2numz00_2005);
											{	/* Integrate/let_fun.scm 212 */
												long BgL_offsetz00_2010;

												BgL_offsetz00_2010 =
													((long) (BgL_offsetz00_2009) - OBJECT_TYPE);
												{	/* Integrate/let_fun.scm 212 */
													long BgL_modz00_2011;

													{	/* Integrate/let_fun.scm 212 */
														int BgL_arg2645z00_2012;

														BgL_arg2645z00_2012 = (int) (((long) 16));
														{	/* Integrate/let_fun.scm 212 */
															long BgL_auxz00_3157;

															BgL_auxz00_3157 = (long) (BgL_arg2645z00_2012);
															BgL_modz00_2011 =
																(BgL_offsetz00_2010 / BgL_auxz00_3157);
													}}
													{	/* Integrate/let_fun.scm 212 */
														long BgL_restz00_2013;

														{	/* Integrate/let_fun.scm 212 */
															int BgL_arg2644z00_2014;

															BgL_arg2644z00_2014 = (int) (((long) 16));
															{	/* Integrate/let_fun.scm 212 */
																long BgL_auxz00_3161;

																BgL_auxz00_3161 = (long) (BgL_arg2644z00_2014);
																BgL_restz00_2013 =
																	(BgL_offsetz00_2010 % BgL_auxz00_3161);
														}}
														{	/* Integrate/let_fun.scm 212 */

															BgL_method3539z00_2003 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2008,
																	(int) (BgL_modz00_2011)),
																(int) (BgL_restz00_2013));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3539z00_2003) (BgL_method3539z00_2003,
								(obj_t) (BgL_arg3700z00_1499), BgL_hostsz00_2002, BEOA);
				}}}
				{	/* Integrate/let_fun.scm 213 */
					BgL_nodez00_bglt BgL_arg3701z00_1500;

					BgL_arg3701z00_1500 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1494))->BgL_truez00);
					{	/* Integrate/let_fun.scm 213 */
						obj_t BgL_hostsz00_2030;

						BgL_hostsz00_2030 = BgL_hostsz00_1495;
						{	/* Integrate/let_fun.scm 213 */
							obj_t BgL_method3539z00_2031;

							{	/* Integrate/let_fun.scm 213 */
								BgL_objectz00_bglt BgL_objz00_2032;

								BgL_objz00_2032 = (BgL_objectz00_bglt) (BgL_arg3701z00_1500);
								{	/* Integrate/let_fun.scm 213 */
									long BgL_objzd2classzd2numz00_2033;

									BgL_objzd2classzd2numz00_2033 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2032);
									{	/* Integrate/let_fun.scm 213 */
										obj_t BgL_arg2643z00_2034;

										BgL_arg2643z00_2034 =
											PROCEDURE_REF
											(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
											(int) (((long) 1)));
										{	/* Integrate/let_fun.scm 213 */
											obj_t BgL_arrayz00_2036;

											int BgL_offsetz00_2037;

											BgL_arrayz00_2036 = BgL_arg2643z00_2034;
											BgL_offsetz00_2037 =
												(int) (BgL_objzd2classzd2numz00_2033);
											{	/* Integrate/let_fun.scm 213 */
												long BgL_offsetz00_2038;

												BgL_offsetz00_2038 =
													((long) (BgL_offsetz00_2037) - OBJECT_TYPE);
												{	/* Integrate/let_fun.scm 213 */
													long BgL_modz00_2039;

													{	/* Integrate/let_fun.scm 213 */
														int BgL_arg2645z00_2040;

														BgL_arg2645z00_2040 = (int) (((long) 16));
														{	/* Integrate/let_fun.scm 213 */
															long BgL_auxz00_3180;

															BgL_auxz00_3180 = (long) (BgL_arg2645z00_2040);
															BgL_modz00_2039 =
																(BgL_offsetz00_2038 / BgL_auxz00_3180);
													}}
													{	/* Integrate/let_fun.scm 213 */
														long BgL_restz00_2041;

														{	/* Integrate/let_fun.scm 213 */
															int BgL_arg2644z00_2042;

															BgL_arg2644z00_2042 = (int) (((long) 16));
															{	/* Integrate/let_fun.scm 213 */
																long BgL_auxz00_3184;

																BgL_auxz00_3184 = (long) (BgL_arg2644z00_2042);
																BgL_restz00_2041 =
																	(BgL_offsetz00_2038 % BgL_auxz00_3184);
														}}
														{	/* Integrate/let_fun.scm 213 */

															BgL_method3539z00_2031 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2036,
																	(int) (BgL_modz00_2039)),
																(int) (BgL_restz00_2041));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3539z00_2031) (BgL_method3539z00_2031,
								(obj_t) (BgL_arg3701z00_1500), BgL_hostsz00_2030, BEOA);
				}}}
				{	/* Integrate/let_fun.scm 214 */
					BgL_nodez00_bglt BgL_arg3702z00_1501;

					BgL_arg3702z00_1501 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1494))->BgL_falsez00);
					{	/* Integrate/let_fun.scm 214 */
						obj_t BgL_hostsz00_2058;

						BgL_hostsz00_2058 = BgL_hostsz00_1495;
						{	/* Integrate/let_fun.scm 214 */
							obj_t BgL_method3539z00_2059;

							{	/* Integrate/let_fun.scm 214 */
								BgL_objectz00_bglt BgL_objz00_2060;

								BgL_objz00_2060 = (BgL_objectz00_bglt) (BgL_arg3702z00_1501);
								{	/* Integrate/let_fun.scm 214 */
									long BgL_objzd2classzd2numz00_2061;

									BgL_objzd2classzd2numz00_2061 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2060);
									{	/* Integrate/let_fun.scm 214 */
										obj_t BgL_arg2643z00_2062;

										BgL_arg2643z00_2062 =
											PROCEDURE_REF
											(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
											(int) (((long) 1)));
										{	/* Integrate/let_fun.scm 214 */
											obj_t BgL_arrayz00_2064;

											int BgL_offsetz00_2065;

											BgL_arrayz00_2064 = BgL_arg2643z00_2062;
											BgL_offsetz00_2065 =
												(int) (BgL_objzd2classzd2numz00_2061);
											{	/* Integrate/let_fun.scm 214 */
												long BgL_offsetz00_2066;

												BgL_offsetz00_2066 =
													((long) (BgL_offsetz00_2065) - OBJECT_TYPE);
												{	/* Integrate/let_fun.scm 214 */
													long BgL_modz00_2067;

													{	/* Integrate/let_fun.scm 214 */
														int BgL_arg2645z00_2068;

														BgL_arg2645z00_2068 = (int) (((long) 16));
														{	/* Integrate/let_fun.scm 214 */
															long BgL_auxz00_3203;

															BgL_auxz00_3203 = (long) (BgL_arg2645z00_2068);
															BgL_modz00_2067 =
																(BgL_offsetz00_2066 / BgL_auxz00_3203);
													}}
													{	/* Integrate/let_fun.scm 214 */
														long BgL_restz00_2069;

														{	/* Integrate/let_fun.scm 214 */
															int BgL_arg2644z00_2070;

															BgL_arg2644z00_2070 = (int) (((long) 16));
															{	/* Integrate/let_fun.scm 214 */
																long BgL_auxz00_3207;

																BgL_auxz00_3207 = (long) (BgL_arg2644z00_2070);
																BgL_restz00_2069 =
																	(BgL_offsetz00_2066 % BgL_auxz00_3207);
														}}
														{	/* Integrate/let_fun.scm 214 */

															BgL_method3539z00_2059 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2064,
																	(int) (BgL_modz00_2067)),
																(int) (BgL_restz00_2069));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3539z00_2059) (BgL_method3539z00_2059,
								(obj_t) (BgL_arg3702z00_1501), BgL_hostsz00_2058, BEOA);
						}
					}
				}
			}
		}
	}



/* displace-let-fun-nod3563 */
	obj_t BGl_displacezd2letzd2funzd2nod3563zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2535, obj_t BgL_nodez00_2536, obj_t BgL_hostsz00_2537)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 203 */
			{
				BgL_setqz00_bglt BgL_nodez00_1486;

				obj_t BgL_hostsz00_1487;

				BgL_nodez00_1486 = (BgL_setqz00_bglt) (BgL_nodez00_2536);
				BgL_hostsz00_1487 = BgL_hostsz00_2537;
				{	/* Integrate/let_fun.scm 204 */
					BgL_nodez00_bglt BgL_arg3698z00_1971;

					BgL_arg3698z00_1971 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1486))->BgL_valuez00);
					{	/* Integrate/let_fun.scm 204 */
						obj_t BgL_hostsz00_1974;

						BgL_hostsz00_1974 = BgL_hostsz00_1487;
						{	/* Integrate/let_fun.scm 204 */
							obj_t BgL_method3539z00_1975;

							{	/* Integrate/let_fun.scm 204 */
								BgL_objectz00_bglt BgL_objz00_1976;

								BgL_objz00_1976 = (BgL_objectz00_bglt) (BgL_arg3698z00_1971);
								{	/* Integrate/let_fun.scm 204 */
									long BgL_objzd2classzd2numz00_1977;

									BgL_objzd2classzd2numz00_1977 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1976);
									{	/* Integrate/let_fun.scm 204 */
										obj_t BgL_arg2643z00_1978;

										BgL_arg2643z00_1978 =
											PROCEDURE_REF
											(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
											(int) (((long) 1)));
										{	/* Integrate/let_fun.scm 204 */
											obj_t BgL_arrayz00_1980;

											int BgL_offsetz00_1981;

											BgL_arrayz00_1980 = BgL_arg2643z00_1978;
											BgL_offsetz00_1981 =
												(int) (BgL_objzd2classzd2numz00_1977);
											{	/* Integrate/let_fun.scm 204 */
												long BgL_offsetz00_1982;

												BgL_offsetz00_1982 =
													((long) (BgL_offsetz00_1981) - OBJECT_TYPE);
												{	/* Integrate/let_fun.scm 204 */
													long BgL_modz00_1983;

													{	/* Integrate/let_fun.scm 204 */
														int BgL_arg2645z00_1984;

														BgL_arg2645z00_1984 = (int) (((long) 16));
														{	/* Integrate/let_fun.scm 204 */
															long BgL_auxz00_3227;

															BgL_auxz00_3227 = (long) (BgL_arg2645z00_1984);
															BgL_modz00_1983 =
																(BgL_offsetz00_1982 / BgL_auxz00_3227);
													}}
													{	/* Integrate/let_fun.scm 204 */
														long BgL_restz00_1985;

														{	/* Integrate/let_fun.scm 204 */
															int BgL_arg2644z00_1986;

															BgL_arg2644z00_1986 = (int) (((long) 16));
															{	/* Integrate/let_fun.scm 204 */
																long BgL_auxz00_3231;

																BgL_auxz00_3231 = (long) (BgL_arg2644z00_1986);
																BgL_restz00_1985 =
																	(BgL_offsetz00_1982 % BgL_auxz00_3231);
														}}
														{	/* Integrate/let_fun.scm 204 */

															BgL_method3539z00_1975 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1980,
																	(int) (BgL_modz00_1983)),
																(int) (BgL_restz00_1985));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3539z00_1975) (BgL_method3539z00_1975,
								(obj_t) (BgL_arg3698z00_1971), BgL_hostsz00_1974, BEOA);
						}
					}
				}
			}
		}
	}



/* displace-let-fun-nod3561 */
	obj_t BGl_displacezd2letzd2funzd2nod3561zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2538, obj_t BgL_nodez00_2539, obj_t BgL_hostsz00_2540)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 196 */
			{
				BgL_castz00_bglt BgL_nodez00_1478;

				obj_t BgL_hostsz00_1479;

				BgL_nodez00_1478 = (BgL_castz00_bglt) (BgL_nodez00_2539);
				BgL_hostsz00_1479 = BgL_hostsz00_2540;
				{	/* Integrate/let_fun.scm 197 */
					BgL_nodez00_bglt BgL_arg3696z00_1941;

					BgL_arg3696z00_1941 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_1478))->BgL_argz00);
					{	/* Integrate/let_fun.scm 197 */
						obj_t BgL_hostsz00_1944;

						BgL_hostsz00_1944 = BgL_hostsz00_1479;
						{	/* Integrate/let_fun.scm 197 */
							obj_t BgL_method3539z00_1945;

							{	/* Integrate/let_fun.scm 197 */
								BgL_objectz00_bglt BgL_objz00_1946;

								BgL_objz00_1946 = (BgL_objectz00_bglt) (BgL_arg3696z00_1941);
								{	/* Integrate/let_fun.scm 197 */
									long BgL_objzd2classzd2numz00_1947;

									BgL_objzd2classzd2numz00_1947 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1946);
									{	/* Integrate/let_fun.scm 197 */
										obj_t BgL_arg2643z00_1948;

										BgL_arg2643z00_1948 =
											PROCEDURE_REF
											(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
											(int) (((long) 1)));
										{	/* Integrate/let_fun.scm 197 */
											obj_t BgL_arrayz00_1950;

											int BgL_offsetz00_1951;

											BgL_arrayz00_1950 = BgL_arg2643z00_1948;
											BgL_offsetz00_1951 =
												(int) (BgL_objzd2classzd2numz00_1947);
											{	/* Integrate/let_fun.scm 197 */
												long BgL_offsetz00_1952;

												BgL_offsetz00_1952 =
													((long) (BgL_offsetz00_1951) - OBJECT_TYPE);
												{	/* Integrate/let_fun.scm 197 */
													long BgL_modz00_1953;

													{	/* Integrate/let_fun.scm 197 */
														int BgL_arg2645z00_1954;

														BgL_arg2645z00_1954 = (int) (((long) 16));
														{	/* Integrate/let_fun.scm 197 */
															long BgL_auxz00_3251;

															BgL_auxz00_3251 = (long) (BgL_arg2645z00_1954);
															BgL_modz00_1953 =
																(BgL_offsetz00_1952 / BgL_auxz00_3251);
													}}
													{	/* Integrate/let_fun.scm 197 */
														long BgL_restz00_1955;

														{	/* Integrate/let_fun.scm 197 */
															int BgL_arg2644z00_1956;

															BgL_arg2644z00_1956 = (int) (((long) 16));
															{	/* Integrate/let_fun.scm 197 */
																long BgL_auxz00_3255;

																BgL_auxz00_3255 = (long) (BgL_arg2644z00_1956);
																BgL_restz00_1955 =
																	(BgL_offsetz00_1952 % BgL_auxz00_3255);
														}}
														{	/* Integrate/let_fun.scm 197 */

															BgL_method3539z00_1945 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1950,
																	(int) (BgL_modz00_1953)),
																(int) (BgL_restz00_1955));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3539z00_1945) (BgL_method3539z00_1945,
								(obj_t) (BgL_arg3696z00_1941), BgL_hostsz00_1944, BEOA);
						}
					}
				}
			}
		}
	}



/* displace-let-fun-nod3558 */
	obj_t BGl_displacezd2letzd2funzd2nod3558zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2541, obj_t BgL_nodez00_2542, obj_t BgL_hostsz00_2543)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 189 */
			{
				BgL_externz00_bglt BgL_nodez00_1463;

				obj_t BgL_hostsz00_1464;

				{	/* Integrate/let_fun.scm 190 */
					bool_t BgL_auxz00_3266;

					BgL_nodez00_1463 = (BgL_externz00_bglt) (BgL_nodez00_2542);
					BgL_hostsz00_1464 = BgL_hostsz00_2543;
					{	/* Integrate/let_fun.scm 191 */
						obj_t BgL_g3537z00_1468;

						BgL_g3537z00_1468 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1463))->BgL_exprza2za2);
						{
							obj_t BgL_l3535z00_1470;

							BgL_l3535z00_1470 = BgL_g3537z00_1468;
						BgL_zc3anonymousza33692ze3z83_1471:
							if (PAIRP(BgL_l3535z00_1470))
								{	/* Integrate/let_fun.scm 191 */
									{	/* Integrate/let_fun.scm 191 */
										obj_t BgL_nodez00_1473;

										BgL_nodez00_1473 = CAR(BgL_l3535z00_1470);
										{	/* Integrate/let_fun.scm 191 */
											BgL_nodez00_bglt BgL_nodez00_1912;

											obj_t BgL_hostsz00_1913;

											BgL_nodez00_1912 = (BgL_nodez00_bglt) (BgL_nodez00_1473);
											BgL_hostsz00_1913 = BgL_hostsz00_1464;
											{	/* Integrate/let_fun.scm 191 */
												obj_t BgL_method3539z00_1914;

												{	/* Integrate/let_fun.scm 191 */
													BgL_objectz00_bglt BgL_objz00_1915;

													BgL_objz00_1915 =
														(BgL_objectz00_bglt) (BgL_nodez00_1912);
													{	/* Integrate/let_fun.scm 191 */
														long BgL_objzd2classzd2numz00_1916;

														BgL_objzd2classzd2numz00_1916 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1915);
														{	/* Integrate/let_fun.scm 191 */
															obj_t BgL_arg2643z00_1917;

															BgL_arg2643z00_1917 =
																PROCEDURE_REF
																(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
																(int) (((long) 1)));
															{	/* Integrate/let_fun.scm 191 */
																obj_t BgL_arrayz00_1919;

																int BgL_offsetz00_1920;

																BgL_arrayz00_1919 = BgL_arg2643z00_1917;
																BgL_offsetz00_1920 =
																	(int) (BgL_objzd2classzd2numz00_1916);
																{	/* Integrate/let_fun.scm 191 */
																	long BgL_offsetz00_1921;

																	BgL_offsetz00_1921 =
																		((long) (BgL_offsetz00_1920) - OBJECT_TYPE);
																	{	/* Integrate/let_fun.scm 191 */
																		long BgL_modz00_1922;

																		{	/* Integrate/let_fun.scm 191 */
																			int BgL_arg2645z00_1923;

																			BgL_arg2645z00_1923 = (int) (((long) 16));
																			{	/* Integrate/let_fun.scm 191 */
																				long BgL_auxz00_3280;

																				BgL_auxz00_3280 =
																					(long) (BgL_arg2645z00_1923);
																				BgL_modz00_1922 =
																					(BgL_offsetz00_1921 /
																					BgL_auxz00_3280);
																		}}
																		{	/* Integrate/let_fun.scm 191 */
																			long BgL_restz00_1924;

																			{	/* Integrate/let_fun.scm 191 */
																				int BgL_arg2644z00_1925;

																				BgL_arg2644z00_1925 =
																					(int) (((long) 16));
																				{	/* Integrate/let_fun.scm 191 */
																					long BgL_auxz00_3284;

																					BgL_auxz00_3284 =
																						(long) (BgL_arg2644z00_1925);
																					BgL_restz00_1924 =
																						(BgL_offsetz00_1921 %
																						BgL_auxz00_3284);
																			}}
																			{	/* Integrate/let_fun.scm 191 */

																				BgL_method3539z00_1914 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1919,
																						(int) (BgL_modz00_1922)),
																					(int) (BgL_restz00_1924));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method3539z00_1914)
													(BgL_method3539z00_1914, (obj_t) (BgL_nodez00_1912),
													BgL_hostsz00_1913, BEOA);
									}}}
									{
										obj_t BgL_l3535z00_3294;

										BgL_l3535z00_3294 = CDR(BgL_l3535z00_1470);
										BgL_l3535z00_1470 = BgL_l3535z00_3294;
										goto BgL_zc3anonymousza33692ze3z83_1471;
									}
								}
							else
								{	/* Integrate/let_fun.scm 191 */
									BgL_auxz00_3266 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_3266);
				}
			}
		}
	}



/* displace-let-fun-nod3555 */
	obj_t BGl_displacezd2letzd2funzd2nod3555zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2544, obj_t BgL_nodez00_2545, obj_t BgL_hostsz00_2546)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 177 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1447;

				obj_t BgL_hostsz00_1448;

				BgL_nodez00_1447 = (BgL_funcallz00_bglt) (BgL_nodez00_2545);
				BgL_hostsz00_1448 = BgL_hostsz00_2546;
				{
					obj_t BgL_astsz00_1454;

					{	/* Integrate/let_fun.scm 179 */
						obj_t BgL_arg3685z00_1453;

						BgL_arg3685z00_1453 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1447))->BgL_argsz00);
						BgL_astsz00_1454 = BgL_arg3685z00_1453;
					BgL_zc3anonymousza33686ze3z83_1455:
						if (NULLP(BgL_astsz00_1454))
							{	/* Integrate/let_fun.scm 181 */
								BgL_nodez00_bglt BgL_arg3688z00_1457;

								BgL_arg3688z00_1457 =
									(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1447))->BgL_funz00);
								{	/* Integrate/let_fun.scm 181 */
									obj_t BgL_hostsz00_1854;

									BgL_hostsz00_1854 = BgL_hostsz00_1448;
									{	/* Integrate/let_fun.scm 181 */
										obj_t BgL_method3539z00_1855;

										{	/* Integrate/let_fun.scm 181 */
											BgL_objectz00_bglt BgL_objz00_1856;

											BgL_objz00_1856 =
												(BgL_objectz00_bglt) (BgL_arg3688z00_1457);
											{	/* Integrate/let_fun.scm 181 */
												long BgL_objzd2classzd2numz00_1857;

												BgL_objzd2classzd2numz00_1857 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1856);
												{	/* Integrate/let_fun.scm 181 */
													obj_t BgL_arg2643z00_1858;

													BgL_arg2643z00_1858 =
														PROCEDURE_REF
														(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
														(int) (((long) 1)));
													{	/* Integrate/let_fun.scm 181 */
														obj_t BgL_arrayz00_1860;

														int BgL_offsetz00_1861;

														BgL_arrayz00_1860 = BgL_arg2643z00_1858;
														BgL_offsetz00_1861 =
															(int) (BgL_objzd2classzd2numz00_1857);
														{	/* Integrate/let_fun.scm 181 */
															long BgL_offsetz00_1862;

															BgL_offsetz00_1862 =
																((long) (BgL_offsetz00_1861) - OBJECT_TYPE);
															{	/* Integrate/let_fun.scm 181 */
																long BgL_modz00_1863;

																{	/* Integrate/let_fun.scm 181 */
																	int BgL_arg2645z00_1864;

																	BgL_arg2645z00_1864 = (int) (((long) 16));
																	{	/* Integrate/let_fun.scm 181 */
																		long BgL_auxz00_3310;

																		BgL_auxz00_3310 =
																			(long) (BgL_arg2645z00_1864);
																		BgL_modz00_1863 =
																			(BgL_offsetz00_1862 / BgL_auxz00_3310);
																}}
																{	/* Integrate/let_fun.scm 181 */
																	long BgL_restz00_1865;

																	{	/* Integrate/let_fun.scm 181 */
																		int BgL_arg2644z00_1866;

																		BgL_arg2644z00_1866 = (int) (((long) 16));
																		{	/* Integrate/let_fun.scm 181 */
																			long BgL_auxz00_3314;

																			BgL_auxz00_3314 =
																				(long) (BgL_arg2644z00_1866);
																			BgL_restz00_1865 =
																				(BgL_offsetz00_1862 % BgL_auxz00_3314);
																	}}
																	{	/* Integrate/let_fun.scm 181 */

																		BgL_method3539z00_1855 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1860,
																				(int) (BgL_modz00_1863)),
																			(int) (BgL_restz00_1865));
										}}}}}}}}
										return
											PROCEDURE_ENTRY(BgL_method3539z00_1855)
											(BgL_method3539z00_1855, (obj_t) (BgL_arg3688z00_1457),
											BgL_hostsz00_1854, BEOA);
									}
								}
							}
						else
							{	/* Integrate/let_fun.scm 180 */
								{	/* Integrate/let_fun.scm 183 */
									obj_t BgL_arg3689z00_1458;

									BgL_arg3689z00_1458 = CAR(BgL_astsz00_1454);
									{	/* Integrate/let_fun.scm 183 */
										BgL_nodez00_bglt BgL_nodez00_1881;

										obj_t BgL_hostsz00_1882;

										BgL_nodez00_1881 = (BgL_nodez00_bglt) (BgL_arg3689z00_1458);
										BgL_hostsz00_1882 = BgL_hostsz00_1448;
										{	/* Integrate/let_fun.scm 183 */
											obj_t BgL_method3539z00_1883;

											{	/* Integrate/let_fun.scm 183 */
												BgL_objectz00_bglt BgL_objz00_1884;

												BgL_objz00_1884 =
													(BgL_objectz00_bglt) (BgL_nodez00_1881);
												{	/* Integrate/let_fun.scm 183 */
													long BgL_objzd2classzd2numz00_1885;

													BgL_objzd2classzd2numz00_1885 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1884);
													{	/* Integrate/let_fun.scm 183 */
														obj_t BgL_arg2643z00_1886;

														BgL_arg2643z00_1886 =
															PROCEDURE_REF
															(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
															(int) (((long) 1)));
														{	/* Integrate/let_fun.scm 183 */
															obj_t BgL_arrayz00_1888;

															int BgL_offsetz00_1889;

															BgL_arrayz00_1888 = BgL_arg2643z00_1886;
															BgL_offsetz00_1889 =
																(int) (BgL_objzd2classzd2numz00_1885);
															{	/* Integrate/let_fun.scm 183 */
																long BgL_offsetz00_1890;

																BgL_offsetz00_1890 =
																	((long) (BgL_offsetz00_1889) - OBJECT_TYPE);
																{	/* Integrate/let_fun.scm 183 */
																	long BgL_modz00_1891;

																	{	/* Integrate/let_fun.scm 183 */
																		int BgL_arg2645z00_1892;

																		BgL_arg2645z00_1892 = (int) (((long) 16));
																		{	/* Integrate/let_fun.scm 183 */
																			long BgL_auxz00_3334;

																			BgL_auxz00_3334 =
																				(long) (BgL_arg2645z00_1892);
																			BgL_modz00_1891 =
																				(BgL_offsetz00_1890 / BgL_auxz00_3334);
																	}}
																	{	/* Integrate/let_fun.scm 183 */
																		long BgL_restz00_1893;

																		{	/* Integrate/let_fun.scm 183 */
																			int BgL_arg2644z00_1894;

																			BgL_arg2644z00_1894 = (int) (((long) 16));
																			{	/* Integrate/let_fun.scm 183 */
																				long BgL_auxz00_3338;

																				BgL_auxz00_3338 =
																					(long) (BgL_arg2644z00_1894);
																				BgL_restz00_1893 =
																					(BgL_offsetz00_1890 %
																					BgL_auxz00_3338);
																		}}
																		{	/* Integrate/let_fun.scm 183 */

																			BgL_method3539z00_1883 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1888,
																					(int) (BgL_modz00_1891)),
																				(int) (BgL_restz00_1893));
											}}}}}}}}
											PROCEDURE_ENTRY(BgL_method3539z00_1883)
												(BgL_method3539z00_1883, (obj_t) (BgL_nodez00_1881),
												BgL_hostsz00_1882, BEOA);
								}}}
								{
									obj_t BgL_astsz00_3348;

									BgL_astsz00_3348 = CDR(BgL_astsz00_1454);
									BgL_astsz00_1454 = BgL_astsz00_3348;
									goto BgL_zc3anonymousza33686ze3z83_1455;
								}
							}
					}
				}
			}
		}
	}



/* displace-let-fun-nod3553 */
	obj_t BGl_displacezd2letzd2funzd2nod3553zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2547, obj_t BgL_nodez00_2548, obj_t BgL_hostsz00_2549)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 169 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1438;

				obj_t BgL_hostsz00_1439;

				BgL_nodez00_1438 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2548);
				BgL_hostsz00_1439 = BgL_hostsz00_2549;
				{	/* Integrate/let_fun.scm 170 */
					BgL_nodez00_bglt BgL_arg3682z00_1792;

					BgL_arg3682z00_1792 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1438))->BgL_funz00);
					{	/* Integrate/let_fun.scm 170 */
						obj_t BgL_hostsz00_1796;

						BgL_hostsz00_1796 = BgL_hostsz00_1439;
						{	/* Integrate/let_fun.scm 170 */
							obj_t BgL_method3539z00_1797;

							{	/* Integrate/let_fun.scm 170 */
								BgL_objectz00_bglt BgL_objz00_1798;

								BgL_objz00_1798 = (BgL_objectz00_bglt) (BgL_arg3682z00_1792);
								{	/* Integrate/let_fun.scm 170 */
									long BgL_objzd2classzd2numz00_1799;

									BgL_objzd2classzd2numz00_1799 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1798);
									{	/* Integrate/let_fun.scm 170 */
										obj_t BgL_arg2643z00_1800;

										BgL_arg2643z00_1800 =
											PROCEDURE_REF
											(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
											(int) (((long) 1)));
										{	/* Integrate/let_fun.scm 170 */
											obj_t BgL_arrayz00_1802;

											int BgL_offsetz00_1803;

											BgL_arrayz00_1802 = BgL_arg2643z00_1800;
											BgL_offsetz00_1803 =
												(int) (BgL_objzd2classzd2numz00_1799);
											{	/* Integrate/let_fun.scm 170 */
												long BgL_offsetz00_1804;

												BgL_offsetz00_1804 =
													((long) (BgL_offsetz00_1803) - OBJECT_TYPE);
												{	/* Integrate/let_fun.scm 170 */
													long BgL_modz00_1805;

													{	/* Integrate/let_fun.scm 170 */
														int BgL_arg2645z00_1806;

														BgL_arg2645z00_1806 = (int) (((long) 16));
														{	/* Integrate/let_fun.scm 170 */
															long BgL_auxz00_3360;

															BgL_auxz00_3360 = (long) (BgL_arg2645z00_1806);
															BgL_modz00_1805 =
																(BgL_offsetz00_1804 / BgL_auxz00_3360);
													}}
													{	/* Integrate/let_fun.scm 170 */
														long BgL_restz00_1807;

														{	/* Integrate/let_fun.scm 170 */
															int BgL_arg2644z00_1808;

															BgL_arg2644z00_1808 = (int) (((long) 16));
															{	/* Integrate/let_fun.scm 170 */
																long BgL_auxz00_3364;

																BgL_auxz00_3364 = (long) (BgL_arg2644z00_1808);
																BgL_restz00_1807 =
																	(BgL_offsetz00_1804 % BgL_auxz00_3364);
														}}
														{	/* Integrate/let_fun.scm 170 */

															BgL_method3539z00_1797 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1802,
																	(int) (BgL_modz00_1805)),
																(int) (BgL_restz00_1807));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3539z00_1797) (BgL_method3539z00_1797,
								(obj_t) (BgL_arg3682z00_1792), BgL_hostsz00_1796, BEOA);
				}}}
				{	/* Integrate/let_fun.scm 170 */
					BgL_nodez00_bglt BgL_arg3683z00_1793;

					BgL_arg3683z00_1793 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1438))->BgL_argz00);
					{	/* Integrate/let_fun.scm 170 */
						obj_t BgL_hostsz00_1824;

						BgL_hostsz00_1824 = BgL_hostsz00_1439;
						{	/* Integrate/let_fun.scm 170 */
							obj_t BgL_method3539z00_1825;

							{	/* Integrate/let_fun.scm 170 */
								BgL_objectz00_bglt BgL_objz00_1826;

								BgL_objz00_1826 = (BgL_objectz00_bglt) (BgL_arg3683z00_1793);
								{	/* Integrate/let_fun.scm 170 */
									long BgL_objzd2classzd2numz00_1827;

									BgL_objzd2classzd2numz00_1827 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1826);
									{	/* Integrate/let_fun.scm 170 */
										obj_t BgL_arg2643z00_1828;

										BgL_arg2643z00_1828 =
											PROCEDURE_REF
											(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
											(int) (((long) 1)));
										{	/* Integrate/let_fun.scm 170 */
											obj_t BgL_arrayz00_1830;

											int BgL_offsetz00_1831;

											BgL_arrayz00_1830 = BgL_arg2643z00_1828;
											BgL_offsetz00_1831 =
												(int) (BgL_objzd2classzd2numz00_1827);
											{	/* Integrate/let_fun.scm 170 */
												long BgL_offsetz00_1832;

												BgL_offsetz00_1832 =
													((long) (BgL_offsetz00_1831) - OBJECT_TYPE);
												{	/* Integrate/let_fun.scm 170 */
													long BgL_modz00_1833;

													{	/* Integrate/let_fun.scm 170 */
														int BgL_arg2645z00_1834;

														BgL_arg2645z00_1834 = (int) (((long) 16));
														{	/* Integrate/let_fun.scm 170 */
															long BgL_auxz00_3383;

															BgL_auxz00_3383 = (long) (BgL_arg2645z00_1834);
															BgL_modz00_1833 =
																(BgL_offsetz00_1832 / BgL_auxz00_3383);
													}}
													{	/* Integrate/let_fun.scm 170 */
														long BgL_restz00_1835;

														{	/* Integrate/let_fun.scm 170 */
															int BgL_arg2644z00_1836;

															BgL_arg2644z00_1836 = (int) (((long) 16));
															{	/* Integrate/let_fun.scm 170 */
																long BgL_auxz00_3387;

																BgL_auxz00_3387 = (long) (BgL_arg2644z00_1836);
																BgL_restz00_1835 =
																	(BgL_offsetz00_1832 % BgL_auxz00_3387);
														}}
														{	/* Integrate/let_fun.scm 170 */

															BgL_method3539z00_1825 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1830,
																	(int) (BgL_modz00_1833)),
																(int) (BgL_restz00_1835));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3539z00_1825) (BgL_method3539z00_1825,
								(obj_t) (BgL_arg3683z00_1793), BgL_hostsz00_1824, BEOA);
						}
					}
				}
			}
		}
	}



/* displace-let-fun-nod3551 */
	obj_t BGl_displacezd2letzd2funzd2nod3551zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2550, obj_t BgL_nodez00_2551, obj_t BgL_hostsz00_2552)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 158 */
			{
				BgL_appz00_bglt BgL_nodez00_1424;

				obj_t BgL_hostsz00_1425;

				BgL_nodez00_1424 = (BgL_appz00_bglt) (BgL_nodez00_2551);
				BgL_hostsz00_1425 = BgL_hostsz00_2552;
				{	/* Integrate/let_fun.scm 159 */
					obj_t BgL_g3499z00_1428;

					BgL_g3499z00_1428 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_1424))->BgL_argsz00);
					{
						obj_t BgL_argsz00_1430;

						BgL_argsz00_1430 = BgL_g3499z00_1428;
					BgL_zc3anonymousza33677ze3z83_1431:
						if (NULLP(BgL_argsz00_1430))
							{	/* Integrate/let_fun.scm 160 */
								return BUNSPEC;
							}
						else
							{	/* Integrate/let_fun.scm 160 */
								{	/* Integrate/let_fun.scm 163 */
									obj_t BgL_arg3679z00_1433;

									BgL_arg3679z00_1433 = CAR(BgL_argsz00_1430);
									{	/* Integrate/let_fun.scm 163 */
										BgL_nodez00_bglt BgL_nodez00_1763;

										obj_t BgL_hostsz00_1764;

										BgL_nodez00_1763 = (BgL_nodez00_bglt) (BgL_arg3679z00_1433);
										BgL_hostsz00_1764 = BgL_hostsz00_1425;
										{	/* Integrate/let_fun.scm 163 */
											obj_t BgL_method3539z00_1765;

											{	/* Integrate/let_fun.scm 163 */
												BgL_objectz00_bglt BgL_objz00_1766;

												BgL_objz00_1766 =
													(BgL_objectz00_bglt) (BgL_nodez00_1763);
												{	/* Integrate/let_fun.scm 163 */
													long BgL_objzd2classzd2numz00_1767;

													BgL_objzd2classzd2numz00_1767 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1766);
													{	/* Integrate/let_fun.scm 163 */
														obj_t BgL_arg2643z00_1768;

														BgL_arg2643z00_1768 =
															PROCEDURE_REF
															(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
															(int) (((long) 1)));
														{	/* Integrate/let_fun.scm 163 */
															obj_t BgL_arrayz00_1770;

															int BgL_offsetz00_1771;

															BgL_arrayz00_1770 = BgL_arg2643z00_1768;
															BgL_offsetz00_1771 =
																(int) (BgL_objzd2classzd2numz00_1767);
															{	/* Integrate/let_fun.scm 163 */
																long BgL_offsetz00_1772;

																BgL_offsetz00_1772 =
																	((long) (BgL_offsetz00_1771) - OBJECT_TYPE);
																{	/* Integrate/let_fun.scm 163 */
																	long BgL_modz00_1773;

																	{	/* Integrate/let_fun.scm 163 */
																		int BgL_arg2645z00_1774;

																		BgL_arg2645z00_1774 = (int) (((long) 16));
																		{	/* Integrate/let_fun.scm 163 */
																			long BgL_auxz00_3411;

																			BgL_auxz00_3411 =
																				(long) (BgL_arg2645z00_1774);
																			BgL_modz00_1773 =
																				(BgL_offsetz00_1772 / BgL_auxz00_3411);
																	}}
																	{	/* Integrate/let_fun.scm 163 */
																		long BgL_restz00_1775;

																		{	/* Integrate/let_fun.scm 163 */
																			int BgL_arg2644z00_1776;

																			BgL_arg2644z00_1776 = (int) (((long) 16));
																			{	/* Integrate/let_fun.scm 163 */
																				long BgL_auxz00_3415;

																				BgL_auxz00_3415 =
																					(long) (BgL_arg2644z00_1776);
																				BgL_restz00_1775 =
																					(BgL_offsetz00_1772 %
																					BgL_auxz00_3415);
																		}}
																		{	/* Integrate/let_fun.scm 163 */

																			BgL_method3539z00_1765 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1770,
																					(int) (BgL_modz00_1773)),
																				(int) (BgL_restz00_1775));
											}}}}}}}}
											PROCEDURE_ENTRY(BgL_method3539z00_1765)
												(BgL_method3539z00_1765, (obj_t) (BgL_nodez00_1763),
												BgL_hostsz00_1764, BEOA);
								}}}
								{
									obj_t BgL_argsz00_3425;

									BgL_argsz00_3425 = CDR(BgL_argsz00_1430);
									BgL_argsz00_1430 = BgL_argsz00_3425;
									goto BgL_zc3anonymousza33677ze3z83_1431;
								}
							}
					}
				}
			}
		}
	}



/* displace-let-fun-nod3549 */
	obj_t BGl_displacezd2letzd2funzd2nod3549zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2553, obj_t BgL_nodez00_2554, obj_t BgL_hostsz00_2555)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 151 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1409;

				obj_t BgL_hostsz00_1410;

				{	/* Integrate/let_fun.scm 152 */
					bool_t BgL_auxz00_3428;

					BgL_nodez00_1409 = (BgL_sequencez00_bglt) (BgL_nodez00_2554);
					BgL_hostsz00_1410 = BgL_hostsz00_2555;
					{	/* Integrate/let_fun.scm 153 */
						obj_t BgL_g3534z00_1414;

						BgL_g3534z00_1414 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1409))->BgL_nodesz00);
						{
							obj_t BgL_l3532z00_1416;

							BgL_l3532z00_1416 = BgL_g3534z00_1414;
						BgL_zc3anonymousza33673ze3z83_1417:
							if (PAIRP(BgL_l3532z00_1416))
								{	/* Integrate/let_fun.scm 153 */
									{	/* Integrate/let_fun.scm 153 */
										obj_t BgL_nodez00_1419;

										BgL_nodez00_1419 = CAR(BgL_l3532z00_1416);
										{	/* Integrate/let_fun.scm 153 */
											BgL_nodez00_bglt BgL_nodez00_1732;

											obj_t BgL_hostsz00_1733;

											BgL_nodez00_1732 = (BgL_nodez00_bglt) (BgL_nodez00_1419);
											BgL_hostsz00_1733 = BgL_hostsz00_1410;
											{	/* Integrate/let_fun.scm 153 */
												obj_t BgL_method3539z00_1734;

												{	/* Integrate/let_fun.scm 153 */
													BgL_objectz00_bglt BgL_objz00_1735;

													BgL_objz00_1735 =
														(BgL_objectz00_bglt) (BgL_nodez00_1732);
													{	/* Integrate/let_fun.scm 153 */
														long BgL_objzd2classzd2numz00_1736;

														BgL_objzd2classzd2numz00_1736 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1735);
														{	/* Integrate/let_fun.scm 153 */
															obj_t BgL_arg2643z00_1737;

															BgL_arg2643z00_1737 =
																PROCEDURE_REF
																(BGl_displacezd2letzd2funzd2nodez12zd2envz12zzintegrate_letzd2funzd2,
																(int) (((long) 1)));
															{	/* Integrate/let_fun.scm 153 */
																obj_t BgL_arrayz00_1739;

																int BgL_offsetz00_1740;

																BgL_arrayz00_1739 = BgL_arg2643z00_1737;
																BgL_offsetz00_1740 =
																	(int) (BgL_objzd2classzd2numz00_1736);
																{	/* Integrate/let_fun.scm 153 */
																	long BgL_offsetz00_1741;

																	BgL_offsetz00_1741 =
																		((long) (BgL_offsetz00_1740) - OBJECT_TYPE);
																	{	/* Integrate/let_fun.scm 153 */
																		long BgL_modz00_1742;

																		{	/* Integrate/let_fun.scm 153 */
																			int BgL_arg2645z00_1743;

																			BgL_arg2645z00_1743 = (int) (((long) 16));
																			{	/* Integrate/let_fun.scm 153 */
																				long BgL_auxz00_3442;

																				BgL_auxz00_3442 =
																					(long) (BgL_arg2645z00_1743);
																				BgL_modz00_1742 =
																					(BgL_offsetz00_1741 /
																					BgL_auxz00_3442);
																		}}
																		{	/* Integrate/let_fun.scm 153 */
																			long BgL_restz00_1744;

																			{	/* Integrate/let_fun.scm 153 */
																				int BgL_arg2644z00_1745;

																				BgL_arg2644z00_1745 =
																					(int) (((long) 16));
																				{	/* Integrate/let_fun.scm 153 */
																					long BgL_auxz00_3446;

																					BgL_auxz00_3446 =
																						(long) (BgL_arg2644z00_1745);
																					BgL_restz00_1744 =
																						(BgL_offsetz00_1741 %
																						BgL_auxz00_3446);
																			}}
																			{	/* Integrate/let_fun.scm 153 */

																				BgL_method3539z00_1734 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1739,
																						(int) (BgL_modz00_1742)),
																					(int) (BgL_restz00_1744));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method3539z00_1734)
													(BgL_method3539z00_1734, (obj_t) (BgL_nodez00_1732),
													BgL_hostsz00_1733, BEOA);
									}}}
									{
										obj_t BgL_l3532z00_3456;

										BgL_l3532z00_3456 = CDR(BgL_l3532z00_1416);
										BgL_l3532z00_1416 = BgL_l3532z00_3456;
										goto BgL_zc3anonymousza33673ze3z83_1417;
									}
								}
							else
								{	/* Integrate/let_fun.scm 153 */
									BgL_auxz00_3428 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_3428);
				}
			}
		}
	}



/* displace-let-fun-nod3547 */
	obj_t BGl_displacezd2letzd2funzd2nod3547zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2556, obj_t BgL_nodez00_2557, obj_t BgL_hostsz00_2558)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 145 */
			{
				BgL_closurez00_bglt BgL_nodez00_1400;

				obj_t BgL_hostsz00_1401;

				BgL_nodez00_1400 = (BgL_closurez00_bglt) (BgL_nodez00_2557);
				BgL_hostsz00_1401 = BgL_hostsz00_2558;
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string3825z00zzintegrate_letzd2funzd2,
					BGl_string3826z00zzintegrate_letzd2funzd2,
					BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_1400)));
			}
		}
	}



/* displace-let-fun-nod3545 */
	obj_t BGl_displacezd2letzd2funzd2nod3545zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2559, obj_t BgL_nodez00_2560, obj_t BgL_hostsz00_2561)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 139 */
			return BUNSPEC;
		}
	}



/* displace-let-fun-nod3543 */
	obj_t BGl_displacezd2letzd2funzd2nod3543zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2562, obj_t BgL_nodez00_2563, obj_t BgL_hostsz00_2564)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 133 */
			return BUNSPEC;
		}
	}



/* displace-let-fun-nod3541 */
	obj_t BGl_displacezd2letzd2funzd2nod3541zd2zzintegrate_letzd2funzd2(obj_t
		BgL_envz00_2565, obj_t BgL_nodez00_2566, obj_t BgL_hostsz00_2567)
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 127 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_letzd2funzd2()
	{
		AN_OBJECT;
		{	/* Integrate/let_fun.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3827z00zzintegrate_letzd2funzd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3827z00zzintegrate_letzd2funzd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3827z00zzintegrate_letzd2funzd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3827z00zzintegrate_letzd2funzd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3827z00zzintegrate_letzd2funzd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3827z00zzintegrate_letzd2funzd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3827z00zzintegrate_letzd2funzd2));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string3827z00zzintegrate_letzd2funzd2));
		}
	}

#ifdef __cplusplus
}
#endif
