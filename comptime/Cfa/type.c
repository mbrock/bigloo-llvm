/*===========================================================================*/
/*   (Cfa/type.scm)                                                          */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/type.scm)*/
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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_cvarz00_bgl
	{
		header_t header;
		obj_t widening;
		bool_t BgL_macrozf3zf3;
	}              *BgL_cvarz00_bglt;

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

	typedef struct BgL_vallocz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2heapzd2formatz00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                *BgL_vallocz00_bglt;

	typedef struct BgL_vrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		bool_t BgL_unsafez00;
	}              *BgL_vrefz00_bglt;

	typedef struct BgL_vsetz12z12_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		bool_t BgL_unsafez00;
	}                 *BgL_vsetz12z12_bglt;

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

	typedef struct BgL_approxz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		bool_t BgL_typezd2lockedzf3z21;
		obj_t BgL_allocsz00;
		bool_t BgL_topzf3zf3;
		long BgL_lostzd2stampzd2;
	}                *BgL_approxz00_bglt;

	typedef struct BgL_internzd2sfunzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		long BgL_stampz00;
	}                               *BgL_internzd2sfunzf2cinfoz20_bglt;

	typedef struct BgL_svarzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_clozd2envzf3z21;
	}                      *BgL_svarzf2cinfozf2_bglt;

	typedef struct BgL_cvarzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                      *BgL_cvarzf2cinfozf2_bglt;

	typedef struct BgL_makezd2vectorzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
		long BgL_lostzd2stampzd2;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		obj_t BgL_stackzd2stampzd2;
		bool_t BgL_seenzf3zf3;
	}                             *BgL_makezd2vectorzd2appz00_bglt;

	typedef struct BgL_valloczf2cinfozb2optimz40_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
		long BgL_lostzd2stampzd2;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		bool_t BgL_stackablezf3zf3;
		obj_t BgL_stackzd2stampzd2;
		bool_t BgL_seenzf3zf3;
	}                                *BgL_valloczf2cinfozb2optimz40_bglt;

	typedef struct BgL_tvecz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}              *BgL_tvecz00_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_vrefz00zzast_nodez00;
	extern obj_t BGl_sexitzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl__typezd2nodez12zd2default5297z12zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t
		BGl_typezd2nodez12zd2default5297z12zzcfa_typez00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__typezd2variablez12zc0zzcfa_typez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t BGl_typezd2nodez12zd2atom5300z12zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00;
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_typezd2nodez12zd2funcall5314z12zzcfa_typez00(obj_t, obj_t);
	static obj_t
		BGl_setzd2variablezd2typez12z12zzcfa_typez00(BgL_variablez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcfa_typez00();
	extern obj_t BGl_cvarzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_typezd2nodez12zd2app5310z12zzcfa_typez00(obj_t, obj_t);
	static obj_t BGl_typezd2nodez12zd2vsetz125320z00zzcfa_typez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t BGl_typezd2nodez12zd2makezd2box5340zc0zzcfa_typez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_typez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcfa_typez00();
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00;
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_typezd2nodez12zd2boxzd2ref5344zc0zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_typezd2nodez12zd2jumpzd2exzd2i5338z12zzcfa_typez00(obj_t,
		obj_t);
	static obj_t BGl_typezd2nodez12zd2cast5322z12zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_valuez00zzast_varz00;
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_approxz00_bglt);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_typezd2variablez12zd2cvarzf25292ze0zzcfa_typez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_tvecz00zztvector_tvectorz00;
	static obj_t BGl_typezd2variablez12zd2sexit5294z12zzcfa_typez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_typezd2nodez12zd2var5304z12zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t BGl_typezd2nodez12zd2vref5318z12zzcfa_typez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_typez00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_typezd2nodez12zd2extern5316z12zzcfa_typez00(obj_t, obj_t);
	static obj_t BGl_typezd2nodez12zd2setq5324z12zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_setzd2ze3listz31zzcfa_setz00(obj_t);
	static obj_t BGl_typezd2nodez12zc0zzcfa_typez00(BgL_nodez00_bglt);
	static obj_t
		BGl_typezd2variablez12zd2defau5285z12zzcfa_typez00(BgL_valuez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_typezd2nodez12zd2appzd2ly5312zc0zzcfa_typez00(obj_t, obj_t);
	static obj_t BGl_typezd2nodez12zd2condition5326z12zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_typez00 = BUNSPEC;
	static obj_t BGl_typezd2funz12zc0zzcfa_typez00(BgL_variablez00_bglt);
	static obj_t BGl_genericzd2initzd2zzcfa_typez00();
	BGL_EXPORTED_DECL obj_t BGl_typezd2settingsz12zc0zzcfa_typez00(obj_t);
	static obj_t BGl_typezd2variablez12zd2inter5296z12zzcfa_typez00(obj_t, obj_t,
		obj_t);
	extern BgL_typez00_bglt
		BGl_getzd2vectorzd2itemzd2typezd2zzcfa_tvectorz00(BgL_nodez00_bglt);
	extern obj_t BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
	extern obj_t BGl_funz00zzast_varz00;
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl_typezd2nodez12zd2letzd2fun5332zc0zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_makezd2vectorzd2appz00zzcfa_info2z00;
	static obj_t BGl_typezd2nodez12zd2closure5306z12zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_typezd2variablez12zc0zzcfa_typez00(BgL_valuez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_typezd2nodez12zd2letzd2var5334zc0zzcfa_typez00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_typez00();
	static bool_t BGl_typezd2nodeza2z12z62zzcfa_typez00(obj_t);
	static obj_t BGl_typezd2nodez12zd2kwote5302z12zzcfa_typez00(obj_t, obj_t);
	static obj_t BGl_typezd2nodez12zd2fail5328z12zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_svarzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_typezd2nodez12zd2setzd2exzd2it5336z12zzcfa_typez00(obj_t,
		obj_t);
	static obj_t BGl_typezd2nodez12zd2select5330z12zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00();
	extern obj_t BGl_za2vectorza2z00zztype_cachez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__typezd2variablez12zd2defau5285z12zzcfa_typez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__typezd2nodez12zc0zzcfa_typez00(obj_t, obj_t);
	static obj_t BGl_typezd2nodez12zd2sequence5308z12zzcfa_typez00(obj_t, obj_t);
	static obj_t BGl_typezd2variablez12zd2svarzf25288ze0zzcfa_typez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_typez00();
	static obj_t BGl_typezd2nodez12zd2boxzd2setz125342zd2zzcfa_typez00(obj_t,
		obj_t);
	static obj_t BGl__getzd2approxzd2typez00zzcfa_typez00(obj_t, obj_t);
	static obj_t BGl_typezd2variablez12zd2scnst5290z12zzcfa_typez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__typezd2settingsz12zc0zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_scnstzf2Cinfozf2zzcfa_infoz00;
	static obj_t __cnst[4];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_typezd2variablez12zd2defau5285zd2envzc0zzcfa_typez00,
		BgL_bgl__typeza7d2variable5695za7,
		BGl__typezd2variablez12zd2defau5285z12zzcfa_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_GENERIC(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
		BgL_bgl__typeza7d2nodeza712za75696za7, BGl__typezd2nodez12zc0zzcfa_typez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_typezd2variablez12zd2envz12zzcfa_typez00,
		BgL_bgl__typeza7d2variable5697za7, BGl__typezd2variablez12zc0zzcfa_typez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2settingsz12zd2envz12zzcfa_typez00,
		BgL_bgl__typeza7d2settings5698za7, BGl__typezd2settingsz12zc0zzcfa_typez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5660z00zzcfa_typez00,
		BgL_bgl_typeza7d2variableza75699z00,
		BGl_typezd2variablez12zd2scnst5290z12zzcfa_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5659z00zzcfa_typez00,
		BgL_bgl_typeza7d2variableza75700z00,
		BGl_typezd2variablez12zd2svarzf25288ze0zzcfa_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5661z00zzcfa_typez00,
		BgL_bgl_typeza7d2variableza75701z00,
		BGl_typezd2variablez12zd2cvarzf25292ze0zzcfa_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5662z00zzcfa_typez00,
		BgL_bgl_typeza7d2variableza75702z00,
		BGl_typezd2variablez12zd2sexit5294z12zzcfa_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5663z00zzcfa_typez00,
		BgL_bgl_typeza7d2variableza75703z00,
		BGl_typezd2variablez12zd2inter5296z12zzcfa_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5664z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5704za7,
		BGl_typezd2nodez12zd2atom5300z12zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5665z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5705za7,
		BGl_typezd2nodez12zd2kwote5302z12zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5666z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5706za7,
		BGl_typezd2nodez12zd2var5304z12zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5667z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5707za7,
		BGl_typezd2nodez12zd2closure5306z12zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5668z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5708za7,
		BGl_typezd2nodez12zd2sequence5308z12zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5670z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5709za7,
		BGl_typezd2nodez12zd2appzd2ly5312zc0zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5669z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5710za7,
		BGl_typezd2nodez12zd2app5310z12zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5671z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5711za7,
		BGl_typezd2nodez12zd2funcall5314z12zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5672z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5712za7,
		BGl_typezd2nodez12zd2extern5316z12zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5673z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5713za7,
		BGl_typezd2nodez12zd2vref5318z12zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5674z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5714za7,
		BGl_typezd2nodez12zd2vsetz125320z00zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5675z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5715za7,
		BGl_typezd2nodez12zd2cast5322z12zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5676z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5716za7,
		BGl_typezd2nodez12zd2setq5324z12zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5677z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5717za7,
		BGl_typezd2nodez12zd2condition5326z12zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5678z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5718za7,
		BGl_typezd2nodez12zd2fail5328z12zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5680z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5719za7,
		BGl_typezd2nodez12zd2letzd2fun5332zc0zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5679z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5720za7,
		BGl_typezd2nodez12zd2select5330z12zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5681z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5721za7,
		BGl_typezd2nodez12zd2letzd2var5334zc0zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5682z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5722za7,
		BGl_typezd2nodez12zd2setzd2exzd2it5336z12zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5683z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5723za7,
		BGl_typezd2nodez12zd2jumpzd2exzd2i5338z12zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5684z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5724za7,
		BGl_typezd2nodez12zd2makezd2box5340zc0zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5685z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5725za7,
		BGl_typezd2nodez12zd2boxzd2setz125342zd2zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5686z00zzcfa_typez00,
		BgL_bgl_typeza7d2nodeza712za7d5726za7,
		BGl_typezd2nodez12zd2boxzd2ref5344zc0zzcfa_typez00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_typezd2nodez12zd2default5297zd2envzc0zzcfa_typez00,
		BgL_bgl__typeza7d2nodeza712za75727za7,
		BGl__typezd2nodez12zd2default5297z12zzcfa_typez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2approxzd2typezd2envzd2zzcfa_typez00,
		BgL_bgl__getza7d2approxza7d25728z00,
		BGl__getzd2approxzd2typez00zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string5656z00zzcfa_typez00,
		BgL_bgl_string5656za700za7za7c5729za7, "type-variable!", 14);
	      DEFINE_STRING(BGl_string5657z00zzcfa_typez00,
		BgL_bgl_string5657za700za7za7c5730za7, "type-node!", 10);
	      DEFINE_STRING(BGl_string5658z00zzcfa_typez00,
		BgL_bgl_string5658za700za7za7c5731za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string5687z00zzcfa_typez00,
		BgL_bgl_string5687za700za7za7c5732za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string5688z00zzcfa_typez00,
		BgL_bgl_string5688za700za7za7c5733za7, "cfa_type", 8);
	      DEFINE_STRING(BGl_string5689z00zzcfa_typez00,
		BgL_bgl_string5689za700za7za7c5734za7,
		"static type-node!-default5297 nothing bigloo ", 45);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_typez00(long
		BgL_checksumz00_3234, char *BgL_fromz00_3235)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_typez00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_typez00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_typez00();
					BGl_cnstzd2initzd2zzcfa_typez00();
					BGl_importedzd2moduleszd2initz00zzcfa_typez00();
					BGl_genericzd2initzd2zzcfa_typez00();
					BGl_methodzd2initzd2zzcfa_typez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_typez00()
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_type");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_type");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cfa_type");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_typez00()
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 15 */
			{	/* Cfa/type.scm 15 */
				obj_t BgL_cportz00_3215;

				BgL_cportz00_3215 =
					bgl_open_input_string(BGl_string5689z00zzcfa_typez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_3216;

					BgL_iz00_3216 = ((long) 3);
				BgL_loopz00_3217:
					if ((BgL_iz00_3216 == ((long) -1)))
						{	/* Cfa/type.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/type.scm 15 */
							{	/* Cfa/type.scm 15 */
								obj_t BgL_arg5691z00_3219;

								{	/* Cfa/type.scm 15 */

									{	/* Cfa/type.scm 15 */
										obj_t BgL_locationz00_3221;

										BgL_locationz00_3221 = BBOOL(((bool_t) 0));
										{	/* Cfa/type.scm 15 */

											BgL_arg5691z00_3219 =
												BGl_readz00zz__readerz00(BgL_cportz00_3215,
												BgL_locationz00_3221);
										}
									}
								}
								{	/* Cfa/type.scm 15 */
									int BgL_auxz00_3253;

									BgL_auxz00_3253 = (int) (BgL_iz00_3216);
									CNST_TABLE_SET(BgL_auxz00_3253, BgL_arg5691z00_3219);
							}}
							{	/* Cfa/type.scm 15 */
								int BgL_auxz00_3222;

								BgL_auxz00_3222 = (int) ((BgL_iz00_3216 - ((long) 1)));
								{
									long BgL_iz00_3258;

									BgL_iz00_3258 = (long) (BgL_auxz00_3222);
									BgL_iz00_3216 = BgL_iz00_3258;
									goto BgL_loopz00_3217;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_typez00()
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 15 */
			return BUNSPEC;
		}
	}



/* type-settings! */
	BGL_EXPORTED_DEF obj_t BGl_typezd2settingsz12zc0zzcfa_typez00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 35 */
			{
				obj_t BgL_l5269z00_1169;

				{	/* Cfa/type.scm 36 */
					bool_t BgL_auxz00_3260;

					BgL_l5269z00_1169 = BgL_globalsz00_1;
				BgL_zc3anonymousza35345ze3z83_1170:
					if (PAIRP(BgL_l5269z00_1169))
						{	/* Cfa/type.scm 36 */
							{	/* Cfa/type.scm 36 */
								obj_t BgL_arg5347z00_1172;

								BgL_arg5347z00_1172 = CAR(BgL_l5269z00_1169);
								BGl_typezd2funz12zc0zzcfa_typez00(
									(BgL_variablez00_bglt) (BgL_arg5347z00_1172));
							}
							{
								obj_t BgL_l5269z00_3266;

								BgL_l5269z00_3266 = CDR(BgL_l5269z00_1169);
								BgL_l5269z00_1169 = BgL_l5269z00_3266;
								goto BgL_zc3anonymousza35345ze3z83_1170;
							}
						}
					else
						{	/* Cfa/type.scm 36 */
							BgL_auxz00_3260 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_3260);
				}
			}
		}
	}



/* _type-settings! */
	obj_t BGl__typezd2settingsz12zc0zzcfa_typez00(obj_t BgL_envz00_3112,
		obj_t BgL_globalsz00_3113)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 35 */
			return BGl_typezd2settingsz12zc0zzcfa_typez00(BgL_globalsz00_3113);
		}
	}



/* type-fun! */
	obj_t BGl_typezd2funz12zc0zzcfa_typez00(BgL_variablez00_bglt BgL_varz00_2)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 41 */
			{	/* Cfa/type.scm 42 */
				BgL_valuez00_bglt BgL_funz00_1175;

				BgL_funz00_1175 =
					(((BgL_variablez00_bglt) CREF(BgL_varz00_2))->BgL_valuez00);
				{	/* Cfa/type.scm 43 */
					bool_t BgL_testz00_3271;

					{	/* Cfa/type.scm 43 */
						obj_t BgL_obj3414z00_2068;

						BgL_obj3414z00_2068 = (obj_t) (BgL_funz00_1175);
						BgL_testz00_3271 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj3414z00_2068,
							BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00);
					}
					if (BgL_testz00_3271)
						{	/* Cfa/type.scm 46 */
							BgL_internzd2sfunzf2cinfoz20_bglt BgL_instance5223z00_1177;

							BgL_instance5223z00_1177 =
								(BgL_internzd2sfunzf2cinfoz20_bglt) (BgL_funz00_1175);
							{	/* Cfa/type.scm 48 */
								obj_t BgL_g5273z00_1178;

								{
									BgL_sfunz00_bglt BgL_auxz00_3275;

									BgL_auxz00_3275 =
										(BgL_sfunz00_bglt) (BgL_instance5223z00_1177);
									BgL_g5273z00_1178 =
										(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3275))->BgL_argsz00);
								}
								{
									obj_t BgL_l5271z00_1180;

									BgL_l5271z00_1180 = BgL_g5273z00_1178;
								BgL_zc3anonymousza35350ze3z83_1181:
									if (PAIRP(BgL_l5271z00_1180))
										{	/* Cfa/type.scm 48 */
											{	/* Cfa/type.scm 49 */
												obj_t BgL_varz00_1183;

												BgL_varz00_1183 = CAR(BgL_l5271z00_1180);
												{	/* Cfa/type.scm 49 */
													BgL_valuez00_bglt BgL_arg5352z00_1184;

													{
														BgL_variablez00_bglt BgL_auxz00_3281;

														BgL_auxz00_3281 =
															(BgL_variablez00_bglt) (BgL_varz00_1183);
														BgL_arg5352z00_1184 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_3281))->
															BgL_valuez00);
													}
													{	/* Cfa/type.scm 49 */
														BgL_variablez00_bglt BgL_variablez00_2074;

														BgL_variablez00_2074 =
															(BgL_variablez00_bglt) (BgL_varz00_1183);
														{	/* Cfa/type.scm 49 */
															obj_t BgL_method5286z00_2075;

															{	/* Cfa/type.scm 49 */
																BgL_objectz00_bglt BgL_objz00_2076;

																BgL_objz00_2076 =
																	(BgL_objectz00_bglt) (BgL_arg5352z00_1184);
																{	/* Cfa/type.scm 49 */
																	long BgL_objzd2classzd2numz00_2077;

																	BgL_objzd2classzd2numz00_2077 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2076);
																	{	/* Cfa/type.scm 49 */
																		obj_t BgL_arg2643z00_2078;

																		BgL_arg2643z00_2078 =
																			PROCEDURE_REF
																			(BGl_typezd2variablez12zd2envz12zzcfa_typez00,
																			(int) (((long) 1)));
																		{	/* Cfa/type.scm 49 */
																			obj_t BgL_arrayz00_2080;

																			int BgL_offsetz00_2081;

																			BgL_arrayz00_2080 = BgL_arg2643z00_2078;
																			BgL_offsetz00_2081 =
																				(int) (BgL_objzd2classzd2numz00_2077);
																			{	/* Cfa/type.scm 49 */
																				long BgL_offsetz00_2082;

																				BgL_offsetz00_2082 =
																					(
																					(long) (BgL_offsetz00_2081) -
																					OBJECT_TYPE);
																				{	/* Cfa/type.scm 49 */
																					long BgL_modz00_2083;

																					{	/* Cfa/type.scm 49 */
																						int BgL_arg2645z00_2084;

																						BgL_arg2645z00_2084 =
																							(int) (((long) 16));
																						{	/* Cfa/type.scm 49 */
																							long BgL_auxz00_3293;

																							BgL_auxz00_3293 =
																								(long) (BgL_arg2645z00_2084);
																							BgL_modz00_2083 =
																								(BgL_offsetz00_2082 /
																								BgL_auxz00_3293);
																					}}
																					{	/* Cfa/type.scm 49 */
																						long BgL_restz00_2085;

																						{	/* Cfa/type.scm 49 */
																							int BgL_arg2644z00_2086;

																							BgL_arg2644z00_2086 =
																								(int) (((long) 16));
																							{	/* Cfa/type.scm 49 */
																								long BgL_auxz00_3297;

																								BgL_auxz00_3297 =
																									(long) (BgL_arg2644z00_2086);
																								BgL_restz00_2085 =
																									(BgL_offsetz00_2082 %
																									BgL_auxz00_3297);
																						}}
																						{	/* Cfa/type.scm 49 */

																							BgL_method5286z00_2075 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2080,
																									(int) (BgL_modz00_2083)),
																								(int) (BgL_restz00_2085));
															}}}}}}}}
															PROCEDURE_ENTRY(BgL_method5286z00_2075)
																(BgL_method5286z00_2075,
																(obj_t) (BgL_arg5352z00_1184),
																(obj_t) (BgL_variablez00_2074), BEOA);
											}}}}
											{
												obj_t BgL_l5271z00_3308;

												BgL_l5271z00_3308 = CDR(BgL_l5271z00_1180);
												BgL_l5271z00_1180 = BgL_l5271z00_3308;
												goto BgL_zc3anonymousza35350ze3z83_1181;
											}
										}
									else
										{	/* Cfa/type.scm 48 */
											((bool_t) 1);
										}
								}
							}
							{	/* Cfa/type.scm 52 */
								obj_t BgL_arg5354z00_1187;

								{
									BgL_sfunz00_bglt BgL_auxz00_3310;

									BgL_auxz00_3310 =
										(BgL_sfunz00_bglt) (BgL_instance5223z00_1177);
									BgL_arg5354z00_1187 =
										(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3310))->BgL_bodyz00);
								}
								{	/* Cfa/type.scm 52 */
									BgL_nodez00_bglt BgL_nodez00_2102;

									BgL_nodez00_2102 = (BgL_nodez00_bglt) (BgL_arg5354z00_1187);
									{	/* Cfa/type.scm 52 */
										obj_t BgL_method5298z00_2103;

										{	/* Cfa/type.scm 52 */
											BgL_objectz00_bglt BgL_objz00_2104;

											BgL_objz00_2104 = (BgL_objectz00_bglt) (BgL_nodez00_2102);
											{	/* Cfa/type.scm 52 */
												long BgL_objzd2classzd2numz00_2105;

												BgL_objzd2classzd2numz00_2105 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2104);
												{	/* Cfa/type.scm 52 */
													obj_t BgL_arg2643z00_2106;

													BgL_arg2643z00_2106 =
														PROCEDURE_REF
														(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
														(int) (((long) 1)));
													{	/* Cfa/type.scm 52 */
														obj_t BgL_arrayz00_2108;

														int BgL_offsetz00_2109;

														BgL_arrayz00_2108 = BgL_arg2643z00_2106;
														BgL_offsetz00_2109 =
															(int) (BgL_objzd2classzd2numz00_2105);
														{	/* Cfa/type.scm 52 */
															long BgL_offsetz00_2110;

															BgL_offsetz00_2110 =
																((long) (BgL_offsetz00_2109) - OBJECT_TYPE);
															{	/* Cfa/type.scm 52 */
																long BgL_modz00_2111;

																{	/* Cfa/type.scm 52 */
																	int BgL_arg2645z00_2112;

																	BgL_arg2645z00_2112 = (int) (((long) 16));
																	{	/* Cfa/type.scm 52 */
																		long BgL_auxz00_3322;

																		BgL_auxz00_3322 =
																			(long) (BgL_arg2645z00_2112);
																		BgL_modz00_2111 =
																			(BgL_offsetz00_2110 / BgL_auxz00_3322);
																}}
																{	/* Cfa/type.scm 52 */
																	long BgL_restz00_2113;

																	{	/* Cfa/type.scm 52 */
																		int BgL_arg2644z00_2114;

																		BgL_arg2644z00_2114 = (int) (((long) 16));
																		{	/* Cfa/type.scm 52 */
																			long BgL_auxz00_3326;

																			BgL_auxz00_3326 =
																				(long) (BgL_arg2644z00_2114);
																			BgL_restz00_2113 =
																				(BgL_offsetz00_2110 % BgL_auxz00_3326);
																	}}
																	{	/* Cfa/type.scm 52 */

																		BgL_method5298z00_2103 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2108,
																				(int) (BgL_modz00_2111)),
																			(int) (BgL_restz00_2113));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method5298z00_2103)
											(BgL_method5298z00_2103, (obj_t) (BgL_nodez00_2102),
											BEOA);
							}}}
							{	/* Cfa/type.scm 54 */
								obj_t BgL_arg5355z00_1188;

								{	/* Cfa/type.scm 54 */
									BgL_approxz00_bglt BgL_arg5356z00_1189;

									{
										obj_t BgL_auxz00_3336;

										{	/* Cfa/type.scm 54 */
											BgL_objectz00_bglt BgL_auxz00_3337;

											BgL_auxz00_3337 =
												(BgL_objectz00_bglt) (BgL_instance5223z00_1177);
											BgL_auxz00_3336 = BGL_OBJECT_WIDENING(BgL_auxz00_3337);
										}
										BgL_arg5356z00_1189 =
											(((BgL_internzd2sfunzf2cinfoz20_bglt)
												CREF(BgL_auxz00_3336))->BgL_approxz00);
									}
									BgL_arg5355z00_1188 =
										BGl_getzd2approxzd2typez00zzcfa_typez00
										(BgL_arg5356z00_1189);
								}
								return
									BGl_setzd2variablezd2typez12z12zzcfa_typez00(BgL_varz00_2,
									(BgL_typez00_bglt) (BgL_arg5355z00_1188));
							}
						}
					else
						{	/* Cfa/type.scm 43 */
							return BFALSE;
						}
				}
			}
		}
	}



/* get-approx-type */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_approxz00_bglt BgL_approxz00_3)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 59 */
			{	/* Cfa/type.scm 60 */
				BgL_typez00_bglt BgL_typez00_1190;

				obj_t BgL_alloczd2listzd2_1191;

				BgL_typez00_1190 =
					(((BgL_approxz00_bglt) CREF(BgL_approxz00_3))->BgL_typez00);
				{	/* Cfa/type.scm 61 */
					obj_t BgL_arg5365z00_1210;

					BgL_arg5365z00_1210 =
						(((BgL_approxz00_bglt) CREF(BgL_approxz00_3))->BgL_allocsz00);
					BgL_alloczd2listzd2_1191 =
						BGl_setzd2ze3listz31zzcfa_setz00(BgL_arg5365z00_1210);
				}
				if (PAIRP(BgL_alloczd2listzd2_1191))
					{	/* Cfa/type.scm 63 */
						if (CBOOL(BGl_tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00()))
							{	/* Cfa/type.scm 67 */
								bool_t BgL_testz00_3352;

								{	/* Cfa/type.scm 67 */
									obj_t BgL_arg5364z00_1209;

									BgL_arg5364z00_1209 = CAR(BgL_alloczd2listzd2_1191);
									BgL_testz00_3352 =
										BGl_iszd2azf3z21zz__objectz00(BgL_arg5364z00_1209,
										BGl_makezd2vectorzd2appz00zzcfa_info2z00);
								}
								if (BgL_testz00_3352)
									{	/* Cfa/type.scm 68 */
										obj_t BgL_appz00_1195;

										BgL_appz00_1195 = CAR(BgL_alloczd2listzd2_1191);
										{	/* Cfa/type.scm 68 */
											BgL_typez00_bglt BgL_tvzd2typezd2_1196;

											BgL_tvzd2typezd2_1196 =
												BGl_getzd2vectorzd2itemzd2typezd2zzcfa_tvectorz00(
												(BgL_nodez00_bglt) (BgL_appz00_1195));
											{	/* Cfa/type.scm 69 */
												BgL_approxz00_bglt BgL_valuezd2approxzd2_1197;

												{	/* Cfa/type.scm 70 */
													BgL_makezd2vectorzd2appz00_bglt BgL_obj4451z00_2135;

													BgL_obj4451z00_2135 =
														(BgL_makezd2vectorzd2appz00_bglt) (BgL_appz00_1195);
													{
														obj_t BgL_auxz00_3359;

														{	/* Cfa/type.scm 70 */
															BgL_objectz00_bglt BgL_auxz00_3360;

															BgL_auxz00_3360 =
																(BgL_objectz00_bglt) (BgL_obj4451z00_2135);
															BgL_auxz00_3359 =
																BGL_OBJECT_WIDENING(BgL_auxz00_3360);
														}
														BgL_valuezd2approxzd2_1197 =
															(((BgL_makezd2vectorzd2appz00_bglt)
																CREF(BgL_auxz00_3359))->BgL_valuezd2approxzd2);
													}
												}
												{	/* Cfa/type.scm 70 */
													BgL_typez00_bglt BgL_itemzd2typezd2_1198;

													BgL_itemzd2typezd2_1198 =
														(((BgL_approxz00_bglt)
															CREF(BgL_valuezd2approxzd2_1197))->BgL_typez00);
													{	/* Cfa/type.scm 71 */
														obj_t BgL_tvz00_1199;

														BgL_tvz00_1199 =
															(((BgL_typez00_bglt)
																CREF(BgL_itemzd2typezd2_1198))->BgL_tvectorz00);
														{	/* Cfa/type.scm 72 */

															if (BGl_iszd2azf3z21zz__objectz00(BgL_tvz00_1199,
																	BGl_typez00zztype_typez00))
																{	/* Cfa/type.scm 73 */
																	return BgL_tvz00_1199;
																}
															else
																{	/* Cfa/type.scm 73 */
																	return (obj_t) (BgL_typez00_1190);
																}
														}
													}
												}
											}
										}
									}
								else
									{	/* Cfa/type.scm 76 */
										bool_t BgL_testz00_3369;

										{	/* Cfa/type.scm 76 */
											obj_t BgL_arg5363z00_1208;

											BgL_arg5363z00_1208 = CAR(BgL_alloczd2listzd2_1191);
											BgL_testz00_3369 =
												BGl_iszd2azf3z21zz__objectz00(BgL_arg5363z00_1208,
												BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00);
										}
										if (BgL_testz00_3369)
											{	/* Cfa/type.scm 77 */
												obj_t BgL_appz00_1202;

												BgL_appz00_1202 = CAR(BgL_alloczd2listzd2_1191);
												{	/* Cfa/type.scm 77 */
													BgL_typez00_bglt BgL_tvzd2typezd2_1203;

													BgL_tvzd2typezd2_1203 =
														BGl_getzd2vectorzd2itemzd2typezd2zzcfa_tvectorz00(
														(BgL_nodez00_bglt) (BgL_appz00_1202));
													{	/* Cfa/type.scm 78 */
														BgL_approxz00_bglt BgL_valuezd2approxzd2_1204;

														{	/* Cfa/type.scm 79 */
															BgL_valloczf2cinfozb2optimz40_bglt
																BgL_obj5124z00_2142;
															BgL_obj5124z00_2142 =
																(BgL_valloczf2cinfozb2optimz40_bglt)
																(BgL_appz00_1202);
															{
																obj_t BgL_auxz00_3376;

																{	/* Cfa/type.scm 79 */
																	BgL_objectz00_bglt BgL_auxz00_3377;

																	BgL_auxz00_3377 =
																		(BgL_objectz00_bglt) (BgL_obj5124z00_2142);
																	BgL_auxz00_3376 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_3377);
																}
																BgL_valuezd2approxzd2_1204 =
																	(((BgL_valloczf2cinfozb2optimz40_bglt)
																		CREF(BgL_auxz00_3376))->
																	BgL_valuezd2approxzd2);
															}
														}
														{	/* Cfa/type.scm 79 */
															BgL_typez00_bglt BgL_itemzd2typezd2_1205;

															BgL_itemzd2typezd2_1205 =
																(((BgL_approxz00_bglt)
																	CREF(BgL_valuezd2approxzd2_1204))->
																BgL_typez00);
															{	/* Cfa/type.scm 80 */
																obj_t BgL_tvz00_1206;

																BgL_tvz00_1206 =
																	(((BgL_typez00_bglt)
																		CREF(BgL_itemzd2typezd2_1205))->
																	BgL_tvectorz00);
																{	/* Cfa/type.scm 81 */

																	if (BGl_iszd2azf3z21zz__objectz00
																		(BgL_tvz00_1206, BGl_typez00zztype_typez00))
																		{	/* Cfa/type.scm 82 */
																			return BgL_tvz00_1206;
																		}
																	else
																		{	/* Cfa/type.scm 82 */
																			return (obj_t) (BgL_typez00_1190);
																		}
																}
															}
														}
													}
												}
											}
										else
											{	/* Cfa/type.scm 76 */
												return (obj_t) (BgL_typez00_1190);
											}
									}
							}
						else
							{	/* Cfa/type.scm 65 */
								return (obj_t) (BgL_typez00_1190);
							}
					}
				else
					{	/* Cfa/type.scm 63 */
						return (obj_t) (BgL_typez00_1190);
					}
			}
		}
	}



/* _get-approx-type */
	obj_t BGl__getzd2approxzd2typez00zzcfa_typez00(obj_t BgL_envz00_3119,
		obj_t BgL_approxz00_3120)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 59 */
			return
				BGl_getzd2approxzd2typez00zzcfa_typez00(
				(BgL_approxz00_bglt) (BgL_approxz00_3120));
		}
	}



/* set-variable-type! */
	obj_t BGl_setzd2variablezd2typez12z12zzcfa_typez00(BgL_variablez00_bglt
		BgL_variablez00_18, BgL_typez00_bglt BgL_typez00_19)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 141 */
			{	/* Cfa/type.scm 142 */
				obj_t BgL_ntypez00_1211;

				BgL_typez00_bglt BgL_otypez00_1212;

				if (((obj_t) (BgL_typez00_19) == BGl_za2_za2z00zztype_cachez00))
					{	/* Cfa/type.scm 142 */
						BgL_ntypez00_1211 = BGl_za2objza2z00zztype_cachez00;
					}
				else
					{	/* Cfa/type.scm 142 */
						BgL_ntypez00_1211 = (obj_t) (BgL_typez00_19);
					}
				BgL_otypez00_1212 =
					(((BgL_variablez00_bglt) CREF(BgL_variablez00_18))->BgL_typez00);
				if (((obj_t) (BgL_otypez00_1212) == BGl_za2_za2z00zztype_cachez00))
					{	/* Cfa/type.scm 146 */
						bool_t BgL_testz00_3399;

						{	/* Cfa/type.scm 146 */
							bool_t BgL_testz00_3400;

							{	/* Cfa/type.scm 146 */
								obj_t BgL_obj1751z00_2147;

								BgL_obj1751z00_2147 = (obj_t) (BgL_variablez00_18);
								BgL_testz00_3400 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_2147,
									BGl_globalz00zzast_varz00);
							}
							if (BgL_testz00_3400)
								{	/* Cfa/type.scm 147 */
									bool_t BgL_testz00_3403;

									{	/* Cfa/type.scm 147 */
										BgL_valuez00_bglt BgL_arg5373z00_1220;

										BgL_arg5373z00_1220 =
											(((BgL_variablez00_bglt) CREF(BgL_variablez00_18))->
											BgL_valuez00);
										{	/* Cfa/type.scm 147 */
											obj_t BgL_obj1856z00_2149;

											BgL_obj1856z00_2149 = (obj_t) (BgL_arg5373z00_1220);
											BgL_testz00_3403 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj1856z00_2149,
												BGl_funz00zzast_varz00);
										}
									}
									if (BgL_testz00_3403)
										{	/* Cfa/type.scm 147 */
											BgL_testz00_3399 = ((bool_t) 0);
										}
									else
										{	/* Cfa/type.scm 147 */
											if (CBOOL(BGl_za2unsafezd2typeza2zd2zzengine_paramz00))
												{	/* Cfa/type.scm 148 */
													BgL_testz00_3399 = ((bool_t) 0);
												}
											else
												{	/* Cfa/type.scm 149 */
													bool_t BgL_testz00_3409;

													{	/* Cfa/type.scm 149 */
														obj_t BgL_auxz00_3410;

														{
															BgL_typez00_bglt BgL_auxz00_3411;

															BgL_auxz00_3411 =
																(BgL_typez00_bglt) (BgL_ntypez00_1211);
															BgL_auxz00_3410 =
																(((BgL_typez00_bglt) CREF(BgL_auxz00_3411))->
																BgL_classz00);
														}
														BgL_testz00_3409 =
															(BgL_auxz00_3410 == CNST_TABLE_REF(((long) 0)));
													}
													if (BgL_testz00_3409)
														{	/* Cfa/type.scm 149 */
															BgL_testz00_3399 = ((bool_t) 0);
														}
													else
														{	/* Cfa/type.scm 149 */
															BgL_testz00_3399 = ((bool_t) 1);
														}
												}
										}
								}
							else
								{	/* Cfa/type.scm 146 */
									BgL_testz00_3399 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_3399)
							{
								BgL_typez00_bglt BgL_auxz00_3416;

								BgL_auxz00_3416 =
									(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
								return
									((((BgL_variablez00_bglt) CREF(BgL_variablez00_18))->
										BgL_typez00) =
									((BgL_typez00_bglt) BgL_auxz00_3416), BUNSPEC);
							}
						else
							{
								BgL_typez00_bglt BgL_auxz00_3419;

								BgL_auxz00_3419 = (BgL_typez00_bglt) (BgL_ntypez00_1211);
								return
									((((BgL_variablez00_bglt) CREF(BgL_variablez00_18))->
										BgL_typez00) =
									((BgL_typez00_bglt) BgL_auxz00_3419), BUNSPEC);
							}
					}
				else
					{	/* Cfa/type.scm 156 */
						bool_t BgL_testz00_3422;

						if (
							((obj_t) (BgL_otypez00_1212) ==
								BGl_za2vectorza2z00zztype_cachez00))
							{	/* Cfa/type.scm 156 */
								BgL_testz00_3422 =
									BGl_iszd2azf3z21zz__objectz00(BgL_ntypez00_1211,
									BGl_tvecz00zztvector_tvectorz00);
							}
						else
							{	/* Cfa/type.scm 156 */
								BgL_testz00_3422 = ((bool_t) 0);
							}
						if (BgL_testz00_3422)
							{
								BgL_typez00_bglt BgL_auxz00_3427;

								BgL_auxz00_3427 =
									(BgL_typez00_bglt) ((BgL_tvecz00_bglt) (BgL_ntypez00_1211));
								return
									((((BgL_variablez00_bglt) CREF(BgL_variablez00_18))->
										BgL_typez00) =
									((BgL_typez00_bglt) BgL_auxz00_3427), BUNSPEC);
							}
						else
							{	/* Cfa/type.scm 156 */
								return BFALSE;
							}
					}
			}
		}
	}



/* type-node*! */
	bool_t BGl_typezd2nodeza2z12z62zzcfa_typez00(obj_t BgL_nodeza2za2_45)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 354 */
			{
				obj_t BgL_l5283z00_1225;

				BgL_l5283z00_1225 = BgL_nodeza2za2_45;
			BgL_zc3anonymousza35377ze3z83_1226:
				if (PAIRP(BgL_l5283z00_1225))
					{	/* Cfa/type.scm 355 */
						{	/* Cfa/type.scm 355 */
							obj_t BgL_arg5379z00_1228;

							BgL_arg5379z00_1228 = CAR(BgL_l5283z00_1225);
							{	/* Cfa/type.scm 355 */
								BgL_nodez00_bglt BgL_nodez00_2160;

								BgL_nodez00_2160 = (BgL_nodez00_bglt) (BgL_arg5379z00_1228);
								{	/* Cfa/type.scm 355 */
									obj_t BgL_method5298z00_2161;

									{	/* Cfa/type.scm 355 */
										BgL_objectz00_bglt BgL_objz00_2162;

										BgL_objz00_2162 = (BgL_objectz00_bglt) (BgL_nodez00_2160);
										{	/* Cfa/type.scm 355 */
											long BgL_objzd2classzd2numz00_2163;

											BgL_objzd2classzd2numz00_2163 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2162);
											{	/* Cfa/type.scm 355 */
												obj_t BgL_arg2643z00_2164;

												BgL_arg2643z00_2164 =
													PROCEDURE_REF
													(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
													(int) (((long) 1)));
												{	/* Cfa/type.scm 355 */
													obj_t BgL_arrayz00_2166;

													int BgL_offsetz00_2167;

													BgL_arrayz00_2166 = BgL_arg2643z00_2164;
													BgL_offsetz00_2167 =
														(int) (BgL_objzd2classzd2numz00_2163);
													{	/* Cfa/type.scm 355 */
														long BgL_offsetz00_2168;

														BgL_offsetz00_2168 =
															((long) (BgL_offsetz00_2167) - OBJECT_TYPE);
														{	/* Cfa/type.scm 355 */
															long BgL_modz00_2169;

															{	/* Cfa/type.scm 355 */
																int BgL_arg2645z00_2170;

																BgL_arg2645z00_2170 = (int) (((long) 16));
																{	/* Cfa/type.scm 355 */
																	long BgL_auxz00_3443;

																	BgL_auxz00_3443 =
																		(long) (BgL_arg2645z00_2170);
																	BgL_modz00_2169 =
																		(BgL_offsetz00_2168 / BgL_auxz00_3443);
															}}
															{	/* Cfa/type.scm 355 */
																long BgL_restz00_2171;

																{	/* Cfa/type.scm 355 */
																	int BgL_arg2644z00_2172;

																	BgL_arg2644z00_2172 = (int) (((long) 16));
																	{	/* Cfa/type.scm 355 */
																		long BgL_auxz00_3447;

																		BgL_auxz00_3447 =
																			(long) (BgL_arg2644z00_2172);
																		BgL_restz00_2171 =
																			(BgL_offsetz00_2168 % BgL_auxz00_3447);
																}}
																{	/* Cfa/type.scm 355 */

																	BgL_method5298z00_2161 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2166,
																			(int) (BgL_modz00_2169)),
																		(int) (BgL_restz00_2171));
									}}}}}}}}
									PROCEDURE_ENTRY(BgL_method5298z00_2161)
										(BgL_method5298z00_2161, (obj_t) (BgL_nodez00_2160), BEOA);
						}}}
						{
							obj_t BgL_l5283z00_3457;

							BgL_l5283z00_3457 = CDR(BgL_l5283z00_1225);
							BgL_l5283z00_1225 = BgL_l5283z00_3457;
							goto BgL_zc3anonymousza35377ze3z83_1226;
						}
					}
				else
					{	/* Cfa/type.scm 355 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_typez00()
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_typez00,
				BGl_typezd2variablez12zd2defau5285zd2envzc0zzcfa_typez00,
				BGl_valuez00zzast_varz00, BGl_string5656z00zzcfa_typez00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_typezd2nodez12zd2default5297zd2envzc0zzcfa_typez00,
				BGl_nodez00zzast_nodez00, BGl_string5657z00zzcfa_typez00);
		}
	}



/* type-variable! */
	obj_t BGl_typezd2variablez12zc0zzcfa_typez00(BgL_valuez00_bglt BgL_valuez00_4,
		BgL_variablez00_bglt BgL_variablez00_5)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 91 */
			{	/* Cfa/type.scm 91 */
				obj_t BgL_method5286z00_2187;

				{	/* Cfa/type.scm 91 */
					BgL_objectz00_bglt BgL_objz00_2188;

					BgL_objz00_2188 = (BgL_objectz00_bglt) (BgL_valuez00_4);
					{	/* Cfa/type.scm 91 */
						long BgL_objzd2classzd2numz00_2189;

						BgL_objzd2classzd2numz00_2189 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2188);
						{	/* Cfa/type.scm 91 */
							obj_t BgL_arg2643z00_2190;

							BgL_arg2643z00_2190 =
								PROCEDURE_REF(BGl_typezd2variablez12zd2envz12zzcfa_typez00,
								(int) (((long) 1)));
							{	/* Cfa/type.scm 91 */
								obj_t BgL_arrayz00_2192;

								int BgL_offsetz00_2193;

								BgL_arrayz00_2192 = BgL_arg2643z00_2190;
								BgL_offsetz00_2193 = (int) (BgL_objzd2classzd2numz00_2189);
								{	/* Cfa/type.scm 91 */
									long BgL_offsetz00_2194;

									BgL_offsetz00_2194 =
										((long) (BgL_offsetz00_2193) - OBJECT_TYPE);
									{	/* Cfa/type.scm 91 */
										long BgL_modz00_2195;

										{	/* Cfa/type.scm 91 */
											int BgL_arg2645z00_2196;

											BgL_arg2645z00_2196 = (int) (((long) 16));
											{	/* Cfa/type.scm 91 */
												long BgL_auxz00_3469;

												BgL_auxz00_3469 = (long) (BgL_arg2645z00_2196);
												BgL_modz00_2195 =
													(BgL_offsetz00_2194 / BgL_auxz00_3469);
										}}
										{	/* Cfa/type.scm 91 */
											long BgL_restz00_2197;

											{	/* Cfa/type.scm 91 */
												int BgL_arg2644z00_2198;

												BgL_arg2644z00_2198 = (int) (((long) 16));
												{	/* Cfa/type.scm 91 */
													long BgL_auxz00_3473;

													BgL_auxz00_3473 = (long) (BgL_arg2644z00_2198);
													BgL_restz00_2197 =
														(BgL_offsetz00_2194 % BgL_auxz00_3473);
											}}
											{	/* Cfa/type.scm 91 */

												BgL_method5286z00_2187 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2192,
														(int) (BgL_modz00_2195)), (int) (BgL_restz00_2197));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5286z00_2187) (BgL_method5286z00_2187,
					(obj_t) (BgL_valuez00_4), (obj_t) (BgL_variablez00_5), BEOA);
			}
		}
	}



/* _type-variable! */
	obj_t BGl__typezd2variablez12zc0zzcfa_typez00(obj_t BgL_envz00_3114,
		obj_t BgL_valuez00_3115, obj_t BgL_variablez00_3116)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 91 */
			return
				BGl_typezd2variablez12zc0zzcfa_typez00(
				(BgL_valuez00_bglt) (BgL_valuez00_3115),
				(BgL_variablez00_bglt) (BgL_variablez00_3116));
		}
	}



/* type-variable!-defau5285 */
	obj_t BGl_typezd2variablez12zd2defau5285z12zzcfa_typez00(BgL_valuez00_bglt
		BgL_valuez00_6, BgL_variablez00_bglt BgL_variablez00_7)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 15 */
			{	/* Cfa/type.scm 92 */
				BgL_typez00_bglt BgL_typez00_2212;

				BgL_typez00_2212 =
					(((BgL_variablez00_bglt) CREF(BgL_variablez00_7))->BgL_typez00);
				{	/* Cfa/type.scm 92 */
					bool_t BgL_testz00_3488;

					{	/* Cfa/type.scm 92 */
						obj_t BgL_obj1599z00_2216;

						BgL_obj1599z00_2216 = (obj_t) (BgL_typez00_2212);
						BgL_testz00_3488 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj1599z00_2216,
							BGl_typez00zztype_typez00);
					}
					if (BgL_testz00_3488)
						{	/* Cfa/type.scm 92 */
							return CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Cfa/type.scm 92 */
							return
								BGl_setzd2variablezd2typez12z12zzcfa_typez00(BgL_variablez00_7,
								BGl_getzd2defaultzd2typez00zztype_cachez00());
						}
				}
			}
		}
	}



/* _type-variable!-defau5285 */
	obj_t BGl__typezd2variablez12zd2defau5285z12zzcfa_typez00(obj_t
		BgL_envz00_3121, obj_t BgL_valuez00_3122, obj_t BgL_variablez00_3123)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 15 */
			return
				BGl_typezd2variablez12zd2defau5285z12zzcfa_typez00(
				(BgL_valuez00_bglt) (BgL_valuez00_3122),
				(BgL_variablez00_bglt) (BgL_variablez00_3123));
		}
	}



/* type-node! */
	obj_t BGl_typezd2nodez12zc0zzcfa_typez00(BgL_nodez00_bglt BgL_nodez00_20)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 162 */
			{	/* Cfa/type.scm 162 */
				obj_t BgL_method5298z00_2217;

				{	/* Cfa/type.scm 162 */
					BgL_objectz00_bglt BgL_objz00_2218;

					BgL_objz00_2218 = (BgL_objectz00_bglt) (BgL_nodez00_20);
					{	/* Cfa/type.scm 162 */
						long BgL_objzd2classzd2numz00_2219;

						BgL_objzd2classzd2numz00_2219 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2218);
						{	/* Cfa/type.scm 162 */
							obj_t BgL_arg2643z00_2220;

							BgL_arg2643z00_2220 =
								PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
								(int) (((long) 1)));
							{	/* Cfa/type.scm 162 */
								obj_t BgL_arrayz00_2222;

								int BgL_offsetz00_2223;

								BgL_arrayz00_2222 = BgL_arg2643z00_2220;
								BgL_offsetz00_2223 = (int) (BgL_objzd2classzd2numz00_2219);
								{	/* Cfa/type.scm 162 */
									long BgL_offsetz00_2224;

									BgL_offsetz00_2224 =
										((long) (BgL_offsetz00_2223) - OBJECT_TYPE);
									{	/* Cfa/type.scm 162 */
										long BgL_modz00_2225;

										{	/* Cfa/type.scm 162 */
											int BgL_arg2645z00_2226;

											BgL_arg2645z00_2226 = (int) (((long) 16));
											{	/* Cfa/type.scm 162 */
												long BgL_auxz00_3505;

												BgL_auxz00_3505 = (long) (BgL_arg2645z00_2226);
												BgL_modz00_2225 =
													(BgL_offsetz00_2224 / BgL_auxz00_3505);
										}}
										{	/* Cfa/type.scm 162 */
											long BgL_restz00_2227;

											{	/* Cfa/type.scm 162 */
												int BgL_arg2644z00_2228;

												BgL_arg2644z00_2228 = (int) (((long) 16));
												{	/* Cfa/type.scm 162 */
													long BgL_auxz00_3509;

													BgL_auxz00_3509 = (long) (BgL_arg2644z00_2228);
													BgL_restz00_2227 =
														(BgL_offsetz00_2224 % BgL_auxz00_3509);
											}}
											{	/* Cfa/type.scm 162 */

												BgL_method5298z00_2217 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2222,
														(int) (BgL_modz00_2225)), (int) (BgL_restz00_2227));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5298z00_2217) (BgL_method5298z00_2217,
					(obj_t) (BgL_nodez00_20), BEOA);
			}
		}
	}



/* _type-node! */
	obj_t BGl__typezd2nodez12zc0zzcfa_typez00(obj_t BgL_envz00_3117,
		obj_t BgL_nodez00_3118)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 162 */
			return
				BGl_typezd2nodez12zc0zzcfa_typez00(
				(BgL_nodez00_bglt) (BgL_nodez00_3118));
		}
	}



/* type-node!-default5297 */
	obj_t BGl_typezd2nodez12zd2default5297z12zzcfa_typez00(BgL_nodez00_bglt
		BgL_nodez00_21)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 2)),
				BGl_string5658z00zzcfa_typez00, (obj_t) (BgL_nodez00_21));
		}
	}



/* _type-node!-default5297 */
	obj_t BGl__typezd2nodez12zd2default5297z12zzcfa_typez00(obj_t BgL_envz00_3124,
		obj_t BgL_nodez00_3125)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 15 */
			return
				BGl_typezd2nodez12zd2default5297z12zzcfa_typez00(
				(BgL_nodez00_bglt) (BgL_nodez00_3125));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_typez00()
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_typez00,
				BGl_svarzf2Cinfozf2zzcfa_infoz00, BGl_proc5659z00zzcfa_typez00,
				BGl_string5656z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_typez00,
				BGl_scnstzf2Cinfozf2zzcfa_infoz00, BGl_proc5660z00zzcfa_typez00,
				BGl_string5656z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_typez00,
				BGl_cvarzf2Cinfozf2zzcfa_infoz00, BGl_proc5661z00zzcfa_typez00,
				BGl_string5656z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_typez00,
				BGl_sexitzf2Cinfozf2zzcfa_infoz00, BGl_proc5662z00zzcfa_typez00,
				BGl_string5656z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_typez00,
				BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00, BGl_proc5663z00zzcfa_typez00,
				BGl_string5656z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_atomz00zzast_nodez00,
				BGl_proc5664z00zzcfa_typez00, BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_kwotez00zzast_nodez00,
				BGl_proc5665z00zzcfa_typez00, BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_varz00zzast_nodez00,
				BGl_proc5666z00zzcfa_typez00, BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_closurez00zzast_nodez00,
				BGl_proc5667z00zzcfa_typez00, BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_sequencez00zzast_nodez00,
				BGl_proc5668z00zzcfa_typez00, BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_appz00zzast_nodez00,
				BGl_proc5669z00zzcfa_typez00, BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc5670z00zzcfa_typez00, BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_funcallz00zzast_nodez00,
				BGl_proc5671z00zzcfa_typez00, BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_externz00zzast_nodez00,
				BGl_proc5672z00zzcfa_typez00, BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_vrefz00zzast_nodez00,
				BGl_proc5673z00zzcfa_typez00, BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_vsetz12z12zzast_nodez00,
				BGl_proc5674z00zzcfa_typez00, BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_castz00zzast_nodez00,
				BGl_proc5675z00zzcfa_typez00, BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_setqz00zzast_nodez00,
				BGl_proc5676z00zzcfa_typez00, BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc5677z00zzcfa_typez00,
				BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_failz00zzast_nodez00,
				BGl_proc5678z00zzcfa_typez00, BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_selectz00zzast_nodez00,
				BGl_proc5679z00zzcfa_typez00, BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc5680z00zzcfa_typez00,
				BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc5681z00zzcfa_typez00,
				BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc5682z00zzcfa_typez00,
				BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc5683z00zzcfa_typez00,
				BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc5684z00zzcfa_typez00,
				BGl_string5657z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc5685z00zzcfa_typez00,
				BGl_string5657z00zzcfa_typez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc5686z00zzcfa_typez00,
				BGl_string5657z00zzcfa_typez00);
		}
	}



/* type-node!-box-ref5344 */
	obj_t BGl_typezd2nodez12zd2boxzd2ref5344zc0zzcfa_typez00(obj_t
		BgL_envz00_3154, obj_t BgL_nodez00_3155)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 347 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_2057;

				BgL_nodez00_2057 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_3155);
				{	/* Cfa/type.scm 348 */
					BgL_varz00_bglt BgL_arg5584z00_3084;

					BgL_arg5584z00_3084 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_2057))->BgL_varz00);
					{	/* Cfa/type.scm 348 */
						BgL_nodez00_bglt BgL_nodez00_3086;

						BgL_nodez00_3086 = (BgL_nodez00_bglt) (BgL_arg5584z00_3084);
						{	/* Cfa/type.scm 348 */
							obj_t BgL_method5298z00_3087;

							{	/* Cfa/type.scm 348 */
								BgL_objectz00_bglt BgL_objz00_3088;

								BgL_objz00_3088 = (BgL_objectz00_bglt) (BgL_nodez00_3086);
								{	/* Cfa/type.scm 348 */
									long BgL_objzd2classzd2numz00_3089;

									BgL_objzd2classzd2numz00_3089 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3088);
									{	/* Cfa/type.scm 348 */
										obj_t BgL_arg2643z00_3090;

										BgL_arg2643z00_3090 =
											PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
											(int) (((long) 1)));
										{	/* Cfa/type.scm 348 */
											obj_t BgL_arrayz00_3092;

											int BgL_offsetz00_3093;

											BgL_arrayz00_3092 = BgL_arg2643z00_3090;
											BgL_offsetz00_3093 =
												(int) (BgL_objzd2classzd2numz00_3089);
											{	/* Cfa/type.scm 348 */
												long BgL_offsetz00_3094;

												BgL_offsetz00_3094 =
													((long) (BgL_offsetz00_3093) - OBJECT_TYPE);
												{	/* Cfa/type.scm 348 */
													long BgL_modz00_3095;

													{	/* Cfa/type.scm 348 */
														int BgL_arg2645z00_3096;

														BgL_arg2645z00_3096 = (int) (((long) 16));
														{	/* Cfa/type.scm 348 */
															long BgL_auxz00_3564;

															BgL_auxz00_3564 = (long) (BgL_arg2645z00_3096);
															BgL_modz00_3095 =
																(BgL_offsetz00_3094 / BgL_auxz00_3564);
													}}
													{	/* Cfa/type.scm 348 */
														long BgL_restz00_3097;

														{	/* Cfa/type.scm 348 */
															int BgL_arg2644z00_3098;

															BgL_arg2644z00_3098 = (int) (((long) 16));
															{	/* Cfa/type.scm 348 */
																long BgL_auxz00_3568;

																BgL_auxz00_3568 = (long) (BgL_arg2644z00_3098);
																BgL_restz00_3097 =
																	(BgL_offsetz00_3094 % BgL_auxz00_3568);
														}}
														{	/* Cfa/type.scm 348 */

															BgL_method5298z00_3087 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3092,
																	(int) (BgL_modz00_3095)),
																(int) (BgL_restz00_3097));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method5298z00_3087) (BgL_method5298z00_3087,
								(obj_t) (BgL_nodez00_3086), BEOA);
						}
					}
				}
			}
		}
	}



/* type-node!-box-set!5342 */
	obj_t BGl_typezd2nodez12zd2boxzd2setz125342zd2zzcfa_typez00(obj_t
		BgL_envz00_3156, obj_t BgL_nodez00_3157)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 339 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_2049;

				BgL_nodez00_2049 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_3157);
				{	/* Cfa/type.scm 341 */
					BgL_varz00_bglt BgL_arg5581z00_2053;

					BgL_arg5581z00_2053 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_2049))->BgL_varz00);
					{	/* Cfa/type.scm 341 */
						BgL_nodez00_bglt BgL_nodez00_3030;

						BgL_nodez00_3030 = (BgL_nodez00_bglt) (BgL_arg5581z00_2053);
						{	/* Cfa/type.scm 341 */
							obj_t BgL_method5298z00_3031;

							{	/* Cfa/type.scm 341 */
								BgL_objectz00_bglt BgL_objz00_3032;

								BgL_objz00_3032 = (BgL_objectz00_bglt) (BgL_nodez00_3030);
								{	/* Cfa/type.scm 341 */
									long BgL_objzd2classzd2numz00_3033;

									BgL_objzd2classzd2numz00_3033 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3032);
									{	/* Cfa/type.scm 341 */
										obj_t BgL_arg2643z00_3034;

										BgL_arg2643z00_3034 =
											PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
											(int) (((long) 1)));
										{	/* Cfa/type.scm 341 */
											obj_t BgL_arrayz00_3036;

											int BgL_offsetz00_3037;

											BgL_arrayz00_3036 = BgL_arg2643z00_3034;
											BgL_offsetz00_3037 =
												(int) (BgL_objzd2classzd2numz00_3033);
											{	/* Cfa/type.scm 341 */
												long BgL_offsetz00_3038;

												BgL_offsetz00_3038 =
													((long) (BgL_offsetz00_3037) - OBJECT_TYPE);
												{	/* Cfa/type.scm 341 */
													long BgL_modz00_3039;

													{	/* Cfa/type.scm 341 */
														int BgL_arg2645z00_3040;

														BgL_arg2645z00_3040 = (int) (((long) 16));
														{	/* Cfa/type.scm 341 */
															long BgL_auxz00_3589;

															BgL_auxz00_3589 = (long) (BgL_arg2645z00_3040);
															BgL_modz00_3039 =
																(BgL_offsetz00_3038 / BgL_auxz00_3589);
													}}
													{	/* Cfa/type.scm 341 */
														long BgL_restz00_3041;

														{	/* Cfa/type.scm 341 */
															int BgL_arg2644z00_3042;

															BgL_arg2644z00_3042 = (int) (((long) 16));
															{	/* Cfa/type.scm 341 */
																long BgL_auxz00_3593;

																BgL_auxz00_3593 = (long) (BgL_arg2644z00_3042);
																BgL_restz00_3041 =
																	(BgL_offsetz00_3038 % BgL_auxz00_3593);
														}}
														{	/* Cfa/type.scm 341 */

															BgL_method5298z00_3031 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3036,
																	(int) (BgL_modz00_3039)),
																(int) (BgL_restz00_3041));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5298z00_3031) (BgL_method5298z00_3031,
								(obj_t) (BgL_nodez00_3030), BEOA);
				}}}
				{	/* Cfa/type.scm 342 */
					BgL_nodez00_bglt BgL_arg5582z00_2054;

					BgL_arg5582z00_2054 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_2049))->BgL_valuez00);
					{	/* Cfa/type.scm 342 */
						obj_t BgL_method5298z00_3058;

						{	/* Cfa/type.scm 342 */
							BgL_objectz00_bglt BgL_objz00_3059;

							BgL_objz00_3059 = (BgL_objectz00_bglt) (BgL_arg5582z00_2054);
							{	/* Cfa/type.scm 342 */
								long BgL_objzd2classzd2numz00_3060;

								BgL_objzd2classzd2numz00_3060 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_3059);
								{	/* Cfa/type.scm 342 */
									obj_t BgL_arg2643z00_3061;

									BgL_arg2643z00_3061 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
										(int) (((long) 1)));
									{	/* Cfa/type.scm 342 */
										obj_t BgL_arrayz00_3063;

										int BgL_offsetz00_3064;

										BgL_arrayz00_3063 = BgL_arg2643z00_3061;
										BgL_offsetz00_3064 = (int) (BgL_objzd2classzd2numz00_3060);
										{	/* Cfa/type.scm 342 */
											long BgL_offsetz00_3065;

											BgL_offsetz00_3065 =
												((long) (BgL_offsetz00_3064) - OBJECT_TYPE);
											{	/* Cfa/type.scm 342 */
												long BgL_modz00_3066;

												{	/* Cfa/type.scm 342 */
													int BgL_arg2645z00_3067;

													BgL_arg2645z00_3067 = (int) (((long) 16));
													{	/* Cfa/type.scm 342 */
														long BgL_auxz00_3612;

														BgL_auxz00_3612 = (long) (BgL_arg2645z00_3067);
														BgL_modz00_3066 =
															(BgL_offsetz00_3065 / BgL_auxz00_3612);
												}}
												{	/* Cfa/type.scm 342 */
													long BgL_restz00_3068;

													{	/* Cfa/type.scm 342 */
														int BgL_arg2644z00_3069;

														BgL_arg2644z00_3069 = (int) (((long) 16));
														{	/* Cfa/type.scm 342 */
															long BgL_auxz00_3616;

															BgL_auxz00_3616 = (long) (BgL_arg2644z00_3069);
															BgL_restz00_3068 =
																(BgL_offsetz00_3065 % BgL_auxz00_3616);
													}}
													{	/* Cfa/type.scm 342 */

														BgL_method5298z00_3058 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_3063,
																(int) (BgL_modz00_3066)),
															(int) (BgL_restz00_3068));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_3058) (BgL_method5298z00_3058,
							(obj_t) (BgL_arg5582z00_2054), BEOA);
					}
				}
			}
		}
	}



/* type-node!-make-box5340 */
	obj_t BGl_typezd2nodez12zd2makezd2box5340zc0zzcfa_typez00(obj_t
		BgL_envz00_3158, obj_t BgL_nodez00_3159)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 332 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_2042;

				BgL_nodez00_2042 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_3159);
				{	/* Cfa/type.scm 333 */
					BgL_nodez00_bglt BgL_arg5579z00_3001;

					BgL_arg5579z00_3001 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_2042))->BgL_valuez00);
					{	/* Cfa/type.scm 333 */
						obj_t BgL_method5298z00_3004;

						{	/* Cfa/type.scm 333 */
							BgL_objectz00_bglt BgL_objz00_3005;

							BgL_objz00_3005 = (BgL_objectz00_bglt) (BgL_arg5579z00_3001);
							{	/* Cfa/type.scm 333 */
								long BgL_objzd2classzd2numz00_3006;

								BgL_objzd2classzd2numz00_3006 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_3005);
								{	/* Cfa/type.scm 333 */
									obj_t BgL_arg2643z00_3007;

									BgL_arg2643z00_3007 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
										(int) (((long) 1)));
									{	/* Cfa/type.scm 333 */
										obj_t BgL_arrayz00_3009;

										int BgL_offsetz00_3010;

										BgL_arrayz00_3009 = BgL_arg2643z00_3007;
										BgL_offsetz00_3010 = (int) (BgL_objzd2classzd2numz00_3006);
										{	/* Cfa/type.scm 333 */
											long BgL_offsetz00_3011;

											BgL_offsetz00_3011 =
												((long) (BgL_offsetz00_3010) - OBJECT_TYPE);
											{	/* Cfa/type.scm 333 */
												long BgL_modz00_3012;

												{	/* Cfa/type.scm 333 */
													int BgL_arg2645z00_3013;

													BgL_arg2645z00_3013 = (int) (((long) 16));
													{	/* Cfa/type.scm 333 */
														long BgL_auxz00_3636;

														BgL_auxz00_3636 = (long) (BgL_arg2645z00_3013);
														BgL_modz00_3012 =
															(BgL_offsetz00_3011 / BgL_auxz00_3636);
												}}
												{	/* Cfa/type.scm 333 */
													long BgL_restz00_3014;

													{	/* Cfa/type.scm 333 */
														int BgL_arg2644z00_3015;

														BgL_arg2644z00_3015 = (int) (((long) 16));
														{	/* Cfa/type.scm 333 */
															long BgL_auxz00_3640;

															BgL_auxz00_3640 = (long) (BgL_arg2644z00_3015);
															BgL_restz00_3014 =
																(BgL_offsetz00_3011 % BgL_auxz00_3640);
													}}
													{	/* Cfa/type.scm 333 */

														BgL_method5298z00_3004 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_3009,
																(int) (BgL_modz00_3012)),
															(int) (BgL_restz00_3014));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_3004) (BgL_method5298z00_3004,
							(obj_t) (BgL_arg5579z00_3001), BEOA);
					}
				}
			}
		}
	}



/* type-node!-jump-ex-i5338 */
	obj_t BGl_typezd2nodez12zd2jumpzd2exzd2i5338z12zzcfa_typez00(obj_t
		BgL_envz00_3160, obj_t BgL_nodez00_3161)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 324 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_2034;

				BgL_nodez00_2034 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_3161);
				{	/* Cfa/type.scm 326 */
					BgL_nodez00_bglt BgL_arg5576z00_2038;

					BgL_arg5576z00_2038 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_2034))->
						BgL_exitz00);
					{	/* Cfa/type.scm 326 */
						obj_t BgL_method5298z00_2948;

						{	/* Cfa/type.scm 326 */
							BgL_objectz00_bglt BgL_objz00_2949;

							BgL_objz00_2949 = (BgL_objectz00_bglt) (BgL_arg5576z00_2038);
							{	/* Cfa/type.scm 326 */
								long BgL_objzd2classzd2numz00_2950;

								BgL_objzd2classzd2numz00_2950 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2949);
								{	/* Cfa/type.scm 326 */
									obj_t BgL_arg2643z00_2951;

									BgL_arg2643z00_2951 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
										(int) (((long) 1)));
									{	/* Cfa/type.scm 326 */
										obj_t BgL_arrayz00_2953;

										int BgL_offsetz00_2954;

										BgL_arrayz00_2953 = BgL_arg2643z00_2951;
										BgL_offsetz00_2954 = (int) (BgL_objzd2classzd2numz00_2950);
										{	/* Cfa/type.scm 326 */
											long BgL_offsetz00_2955;

											BgL_offsetz00_2955 =
												((long) (BgL_offsetz00_2954) - OBJECT_TYPE);
											{	/* Cfa/type.scm 326 */
												long BgL_modz00_2956;

												{	/* Cfa/type.scm 326 */
													int BgL_arg2645z00_2957;

													BgL_arg2645z00_2957 = (int) (((long) 16));
													{	/* Cfa/type.scm 326 */
														long BgL_auxz00_3660;

														BgL_auxz00_3660 = (long) (BgL_arg2645z00_2957);
														BgL_modz00_2956 =
															(BgL_offsetz00_2955 / BgL_auxz00_3660);
												}}
												{	/* Cfa/type.scm 326 */
													long BgL_restz00_2958;

													{	/* Cfa/type.scm 326 */
														int BgL_arg2644z00_2959;

														BgL_arg2644z00_2959 = (int) (((long) 16));
														{	/* Cfa/type.scm 326 */
															long BgL_auxz00_3664;

															BgL_auxz00_3664 = (long) (BgL_arg2644z00_2959);
															BgL_restz00_2958 =
																(BgL_offsetz00_2955 % BgL_auxz00_3664);
													}}
													{	/* Cfa/type.scm 326 */

														BgL_method5298z00_2948 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2953,
																(int) (BgL_modz00_2956)),
															(int) (BgL_restz00_2958));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_2948) (BgL_method5298z00_2948,
							(obj_t) (BgL_arg5576z00_2038), BEOA);
				}}
				{	/* Cfa/type.scm 327 */
					BgL_nodez00_bglt BgL_arg5577z00_2039;

					BgL_arg5577z00_2039 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_2034))->
						BgL_valuez00);
					{	/* Cfa/type.scm 327 */
						obj_t BgL_method5298z00_2975;

						{	/* Cfa/type.scm 327 */
							BgL_objectz00_bglt BgL_objz00_2976;

							BgL_objz00_2976 = (BgL_objectz00_bglt) (BgL_arg5577z00_2039);
							{	/* Cfa/type.scm 327 */
								long BgL_objzd2classzd2numz00_2977;

								BgL_objzd2classzd2numz00_2977 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2976);
								{	/* Cfa/type.scm 327 */
									obj_t BgL_arg2643z00_2978;

									BgL_arg2643z00_2978 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
										(int) (((long) 1)));
									{	/* Cfa/type.scm 327 */
										obj_t BgL_arrayz00_2980;

										int BgL_offsetz00_2981;

										BgL_arrayz00_2980 = BgL_arg2643z00_2978;
										BgL_offsetz00_2981 = (int) (BgL_objzd2classzd2numz00_2977);
										{	/* Cfa/type.scm 327 */
											long BgL_offsetz00_2982;

											BgL_offsetz00_2982 =
												((long) (BgL_offsetz00_2981) - OBJECT_TYPE);
											{	/* Cfa/type.scm 327 */
												long BgL_modz00_2983;

												{	/* Cfa/type.scm 327 */
													int BgL_arg2645z00_2984;

													BgL_arg2645z00_2984 = (int) (((long) 16));
													{	/* Cfa/type.scm 327 */
														long BgL_auxz00_3683;

														BgL_auxz00_3683 = (long) (BgL_arg2645z00_2984);
														BgL_modz00_2983 =
															(BgL_offsetz00_2982 / BgL_auxz00_3683);
												}}
												{	/* Cfa/type.scm 327 */
													long BgL_restz00_2985;

													{	/* Cfa/type.scm 327 */
														int BgL_arg2644z00_2986;

														BgL_arg2644z00_2986 = (int) (((long) 16));
														{	/* Cfa/type.scm 327 */
															long BgL_auxz00_3687;

															BgL_auxz00_3687 = (long) (BgL_arg2644z00_2986);
															BgL_restz00_2985 =
																(BgL_offsetz00_2982 % BgL_auxz00_3687);
													}}
													{	/* Cfa/type.scm 327 */

														BgL_method5298z00_2975 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2980,
																(int) (BgL_modz00_2983)),
															(int) (BgL_restz00_2985));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_2975) (BgL_method5298z00_2975,
							(obj_t) (BgL_arg5577z00_2039), BEOA);
					}
				}
			}
		}
	}



/* type-node!-set-ex-it5336 */
	obj_t BGl_typezd2nodez12zd2setzd2exzd2it5336z12zzcfa_typez00(obj_t
		BgL_envz00_3162, obj_t BgL_nodez00_3163)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 314 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_2023;

				BgL_nodez00_2023 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_3163);
				{	/* Cfa/type.scm 316 */
					BgL_variablez00_bglt BgL_vz00_2027;

					{	/* Cfa/type.scm 316 */
						BgL_varz00_bglt BgL_obj2155z00_2863;

						BgL_obj2155z00_2863 =
							(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_2023))->
							BgL_varz00);
						BgL_vz00_2027 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2863))->BgL_variablez00);
					}
					{	/* Cfa/type.scm 317 */
						BgL_valuez00_bglt BgL_arg5571z00_2028;

						BgL_arg5571z00_2028 =
							(((BgL_variablez00_bglt) CREF(BgL_vz00_2027))->BgL_valuez00);
						{	/* Cfa/type.scm 317 */
							obj_t BgL_method5286z00_2867;

							{	/* Cfa/type.scm 317 */
								BgL_objectz00_bglt BgL_objz00_2868;

								BgL_objz00_2868 = (BgL_objectz00_bglt) (BgL_arg5571z00_2028);
								{	/* Cfa/type.scm 317 */
									long BgL_objzd2classzd2numz00_2869;

									BgL_objzd2classzd2numz00_2869 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2868);
									{	/* Cfa/type.scm 317 */
										obj_t BgL_arg2643z00_2870;

										BgL_arg2643z00_2870 =
											PROCEDURE_REF
											(BGl_typezd2variablez12zd2envz12zzcfa_typez00,
											(int) (((long) 1)));
										{	/* Cfa/type.scm 317 */
											obj_t BgL_arrayz00_2872;

											int BgL_offsetz00_2873;

											BgL_arrayz00_2872 = BgL_arg2643z00_2870;
											BgL_offsetz00_2873 =
												(int) (BgL_objzd2classzd2numz00_2869);
											{	/* Cfa/type.scm 317 */
												long BgL_offsetz00_2874;

												BgL_offsetz00_2874 =
													((long) (BgL_offsetz00_2873) - OBJECT_TYPE);
												{	/* Cfa/type.scm 317 */
													long BgL_modz00_2875;

													{	/* Cfa/type.scm 317 */
														int BgL_arg2645z00_2876;

														BgL_arg2645z00_2876 = (int) (((long) 16));
														{	/* Cfa/type.scm 317 */
															long BgL_auxz00_3709;

															BgL_auxz00_3709 = (long) (BgL_arg2645z00_2876);
															BgL_modz00_2875 =
																(BgL_offsetz00_2874 / BgL_auxz00_3709);
													}}
													{	/* Cfa/type.scm 317 */
														long BgL_restz00_2877;

														{	/* Cfa/type.scm 317 */
															int BgL_arg2644z00_2878;

															BgL_arg2644z00_2878 = (int) (((long) 16));
															{	/* Cfa/type.scm 317 */
																long BgL_auxz00_3713;

																BgL_auxz00_3713 = (long) (BgL_arg2644z00_2878);
																BgL_restz00_2877 =
																	(BgL_offsetz00_2874 % BgL_auxz00_3713);
														}}
														{	/* Cfa/type.scm 317 */

															BgL_method5286z00_2867 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2872,
																	(int) (BgL_modz00_2875)),
																(int) (BgL_restz00_2877));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5286z00_2867) (BgL_method5286z00_2867,
								(obj_t) (BgL_arg5571z00_2028), (obj_t) (BgL_vz00_2027), BEOA);
				}}}
				{	/* Cfa/type.scm 318 */
					BgL_nodez00_bglt BgL_arg5573z00_2030;

					BgL_arg5573z00_2030 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_2023))->BgL_bodyz00);
					{	/* Cfa/type.scm 318 */
						obj_t BgL_method5298z00_2894;

						{	/* Cfa/type.scm 318 */
							BgL_objectz00_bglt BgL_objz00_2895;

							BgL_objz00_2895 = (BgL_objectz00_bglt) (BgL_arg5573z00_2030);
							{	/* Cfa/type.scm 318 */
								long BgL_objzd2classzd2numz00_2896;

								BgL_objzd2classzd2numz00_2896 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2895);
								{	/* Cfa/type.scm 318 */
									obj_t BgL_arg2643z00_2897;

									BgL_arg2643z00_2897 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
										(int) (((long) 1)));
									{	/* Cfa/type.scm 318 */
										obj_t BgL_arrayz00_2899;

										int BgL_offsetz00_2900;

										BgL_arrayz00_2899 = BgL_arg2643z00_2897;
										BgL_offsetz00_2900 = (int) (BgL_objzd2classzd2numz00_2896);
										{	/* Cfa/type.scm 318 */
											long BgL_offsetz00_2901;

											BgL_offsetz00_2901 =
												((long) (BgL_offsetz00_2900) - OBJECT_TYPE);
											{	/* Cfa/type.scm 318 */
												long BgL_modz00_2902;

												{	/* Cfa/type.scm 318 */
													int BgL_arg2645z00_2903;

													BgL_arg2645z00_2903 = (int) (((long) 16));
													{	/* Cfa/type.scm 318 */
														long BgL_auxz00_3733;

														BgL_auxz00_3733 = (long) (BgL_arg2645z00_2903);
														BgL_modz00_2902 =
															(BgL_offsetz00_2901 / BgL_auxz00_3733);
												}}
												{	/* Cfa/type.scm 318 */
													long BgL_restz00_2904;

													{	/* Cfa/type.scm 318 */
														int BgL_arg2644z00_2905;

														BgL_arg2644z00_2905 = (int) (((long) 16));
														{	/* Cfa/type.scm 318 */
															long BgL_auxz00_3737;

															BgL_auxz00_3737 = (long) (BgL_arg2644z00_2905);
															BgL_restz00_2904 =
																(BgL_offsetz00_2901 % BgL_auxz00_3737);
													}}
													{	/* Cfa/type.scm 318 */

														BgL_method5298z00_2894 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2899,
																(int) (BgL_modz00_2902)),
															(int) (BgL_restz00_2904));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_2894) (BgL_method5298z00_2894,
							(obj_t) (BgL_arg5573z00_2030), BEOA);
				}}
				{	/* Cfa/type.scm 319 */
					BgL_varz00_bglt BgL_arg5574z00_2031;

					BgL_arg5574z00_2031 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_2023))->BgL_varz00);
					{	/* Cfa/type.scm 319 */
						BgL_nodez00_bglt BgL_nodez00_2920;

						BgL_nodez00_2920 = (BgL_nodez00_bglt) (BgL_arg5574z00_2031);
						{	/* Cfa/type.scm 319 */
							obj_t BgL_method5298z00_2921;

							{	/* Cfa/type.scm 319 */
								BgL_objectz00_bglt BgL_objz00_2922;

								BgL_objz00_2922 = (BgL_objectz00_bglt) (BgL_nodez00_2920);
								{	/* Cfa/type.scm 319 */
									long BgL_objzd2classzd2numz00_2923;

									BgL_objzd2classzd2numz00_2923 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2922);
									{	/* Cfa/type.scm 319 */
										obj_t BgL_arg2643z00_2924;

										BgL_arg2643z00_2924 =
											PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
											(int) (((long) 1)));
										{	/* Cfa/type.scm 319 */
											obj_t BgL_arrayz00_2926;

											int BgL_offsetz00_2927;

											BgL_arrayz00_2926 = BgL_arg2643z00_2924;
											BgL_offsetz00_2927 =
												(int) (BgL_objzd2classzd2numz00_2923);
											{	/* Cfa/type.scm 319 */
												long BgL_offsetz00_2928;

												BgL_offsetz00_2928 =
													((long) (BgL_offsetz00_2927) - OBJECT_TYPE);
												{	/* Cfa/type.scm 319 */
													long BgL_modz00_2929;

													{	/* Cfa/type.scm 319 */
														int BgL_arg2645z00_2930;

														BgL_arg2645z00_2930 = (int) (((long) 16));
														{	/* Cfa/type.scm 319 */
															long BgL_auxz00_3757;

															BgL_auxz00_3757 = (long) (BgL_arg2645z00_2930);
															BgL_modz00_2929 =
																(BgL_offsetz00_2928 / BgL_auxz00_3757);
													}}
													{	/* Cfa/type.scm 319 */
														long BgL_restz00_2931;

														{	/* Cfa/type.scm 319 */
															int BgL_arg2644z00_2932;

															BgL_arg2644z00_2932 = (int) (((long) 16));
															{	/* Cfa/type.scm 319 */
																long BgL_auxz00_3761;

																BgL_auxz00_3761 = (long) (BgL_arg2644z00_2932);
																BgL_restz00_2931 =
																	(BgL_offsetz00_2928 % BgL_auxz00_3761);
														}}
														{	/* Cfa/type.scm 319 */

															BgL_method5298z00_2921 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2926,
																	(int) (BgL_modz00_2929)),
																(int) (BgL_restz00_2931));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method5298z00_2921) (BgL_method5298z00_2921,
								(obj_t) (BgL_nodez00_2920), BEOA);
						}
					}
				}
			}
		}
	}



/* type-node!-let-var5334 */
	obj_t BGl_typezd2nodez12zd2letzd2var5334zc0zzcfa_typez00(obj_t
		BgL_envz00_3164, obj_t BgL_nodez00_3165)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 301 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_2005;

				BgL_nodez00_2005 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_3165);
				{	/* Cfa/type.scm 303 */
					obj_t BgL_g5282z00_2009;

					BgL_g5282z00_2009 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_2005))->BgL_bindingsz00);
					{
						obj_t BgL_l5280z00_2011;

						BgL_l5280z00_2011 = BgL_g5282z00_2009;
					BgL_zc3anonymousza35565ze3z83_2012:
						if (PAIRP(BgL_l5280z00_2011))
							{	/* Cfa/type.scm 303 */
								{	/* Cfa/type.scm 304 */
									obj_t BgL_bindingz00_2014;

									BgL_bindingz00_2014 = CAR(BgL_l5280z00_2011);
									{	/* Cfa/type.scm 304 */
										obj_t BgL_varz00_2015;

										obj_t BgL_valz00_2016;

										BgL_varz00_2015 = CAR(BgL_bindingz00_2014);
										BgL_valz00_2016 = CDR(BgL_bindingz00_2014);
										{	/* Cfa/type.scm 306 */
											BgL_nodez00_bglt BgL_nodez00_2780;

											BgL_nodez00_2780 = (BgL_nodez00_bglt) (BgL_valz00_2016);
											{	/* Cfa/type.scm 306 */
												obj_t BgL_method5298z00_2781;

												{	/* Cfa/type.scm 306 */
													BgL_objectz00_bglt BgL_objz00_2782;

													BgL_objz00_2782 =
														(BgL_objectz00_bglt) (BgL_nodez00_2780);
													{	/* Cfa/type.scm 306 */
														long BgL_objzd2classzd2numz00_2783;

														BgL_objzd2classzd2numz00_2783 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2782);
														{	/* Cfa/type.scm 306 */
															obj_t BgL_arg2643z00_2784;

															BgL_arg2643z00_2784 =
																PROCEDURE_REF
																(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
																(int) (((long) 1)));
															{	/* Cfa/type.scm 306 */
																obj_t BgL_arrayz00_2786;

																int BgL_offsetz00_2787;

																BgL_arrayz00_2786 = BgL_arg2643z00_2784;
																BgL_offsetz00_2787 =
																	(int) (BgL_objzd2classzd2numz00_2783);
																{	/* Cfa/type.scm 306 */
																	long BgL_offsetz00_2788;

																	BgL_offsetz00_2788 =
																		((long) (BgL_offsetz00_2787) - OBJECT_TYPE);
																	{	/* Cfa/type.scm 306 */
																		long BgL_modz00_2789;

																		{	/* Cfa/type.scm 306 */
																			int BgL_arg2645z00_2790;

																			BgL_arg2645z00_2790 = (int) (((long) 16));
																			{	/* Cfa/type.scm 306 */
																				long BgL_auxz00_3787;

																				BgL_auxz00_3787 =
																					(long) (BgL_arg2645z00_2790);
																				BgL_modz00_2789 =
																					(BgL_offsetz00_2788 /
																					BgL_auxz00_3787);
																		}}
																		{	/* Cfa/type.scm 306 */
																			long BgL_restz00_2791;

																			{	/* Cfa/type.scm 306 */
																				int BgL_arg2644z00_2792;

																				BgL_arg2644z00_2792 =
																					(int) (((long) 16));
																				{	/* Cfa/type.scm 306 */
																					long BgL_auxz00_3791;

																					BgL_auxz00_3791 =
																						(long) (BgL_arg2644z00_2792);
																					BgL_restz00_2791 =
																						(BgL_offsetz00_2788 %
																						BgL_auxz00_3791);
																			}}
																			{	/* Cfa/type.scm 306 */

																				BgL_method5298z00_2781 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2786,
																						(int) (BgL_modz00_2789)),
																					(int) (BgL_restz00_2791));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method5298z00_2781)
													(BgL_method5298z00_2781, (obj_t) (BgL_nodez00_2780),
													BEOA);
										}}
										{	/* Cfa/type.scm 307 */
											BgL_valuez00_bglt BgL_arg5567z00_2017;

											{
												BgL_variablez00_bglt BgL_auxz00_3801;

												BgL_auxz00_3801 =
													(BgL_variablez00_bglt) (BgL_varz00_2015);
												BgL_arg5567z00_2017 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3801))->
													BgL_valuez00);
											}
											{	/* Cfa/type.scm 307 */
												BgL_variablez00_bglt BgL_variablez00_2808;

												BgL_variablez00_2808 =
													(BgL_variablez00_bglt) (BgL_varz00_2015);
												{	/* Cfa/type.scm 307 */
													obj_t BgL_method5286z00_2809;

													{	/* Cfa/type.scm 307 */
														BgL_objectz00_bglt BgL_objz00_2810;

														BgL_objz00_2810 =
															(BgL_objectz00_bglt) (BgL_arg5567z00_2017);
														{	/* Cfa/type.scm 307 */
															long BgL_objzd2classzd2numz00_2811;

															BgL_objzd2classzd2numz00_2811 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2810);
															{	/* Cfa/type.scm 307 */
																obj_t BgL_arg2643z00_2812;

																BgL_arg2643z00_2812 =
																	PROCEDURE_REF
																	(BGl_typezd2variablez12zd2envz12zzcfa_typez00,
																	(int) (((long) 1)));
																{	/* Cfa/type.scm 307 */
																	obj_t BgL_arrayz00_2814;

																	int BgL_offsetz00_2815;

																	BgL_arrayz00_2814 = BgL_arg2643z00_2812;
																	BgL_offsetz00_2815 =
																		(int) (BgL_objzd2classzd2numz00_2811);
																	{	/* Cfa/type.scm 307 */
																		long BgL_offsetz00_2816;

																		BgL_offsetz00_2816 =
																			(
																			(long) (BgL_offsetz00_2815) -
																			OBJECT_TYPE);
																		{	/* Cfa/type.scm 307 */
																			long BgL_modz00_2817;

																			{	/* Cfa/type.scm 307 */
																				int BgL_arg2645z00_2818;

																				BgL_arg2645z00_2818 =
																					(int) (((long) 16));
																				{	/* Cfa/type.scm 307 */
																					long BgL_auxz00_3813;

																					BgL_auxz00_3813 =
																						(long) (BgL_arg2645z00_2818);
																					BgL_modz00_2817 =
																						(BgL_offsetz00_2816 /
																						BgL_auxz00_3813);
																			}}
																			{	/* Cfa/type.scm 307 */
																				long BgL_restz00_2819;

																				{	/* Cfa/type.scm 307 */
																					int BgL_arg2644z00_2820;

																					BgL_arg2644z00_2820 =
																						(int) (((long) 16));
																					{	/* Cfa/type.scm 307 */
																						long BgL_auxz00_3817;

																						BgL_auxz00_3817 =
																							(long) (BgL_arg2644z00_2820);
																						BgL_restz00_2819 =
																							(BgL_offsetz00_2816 %
																							BgL_auxz00_3817);
																				}}
																				{	/* Cfa/type.scm 307 */

																					BgL_method5286z00_2809 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2814,
																							(int) (BgL_modz00_2817)),
																						(int) (BgL_restz00_2819));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method5286z00_2809)
														(BgL_method5286z00_2809,
														(obj_t) (BgL_arg5567z00_2017),
														(obj_t) (BgL_variablez00_2808), BEOA);
								}}}}}
								{
									obj_t BgL_l5280z00_3828;

									BgL_l5280z00_3828 = CDR(BgL_l5280z00_2011);
									BgL_l5280z00_2011 = BgL_l5280z00_3828;
									goto BgL_zc3anonymousza35565ze3z83_2012;
								}
							}
						else
							{	/* Cfa/type.scm 303 */
								((bool_t) 1);
							}
					}
				}
				{	/* Cfa/type.scm 309 */
					BgL_nodez00_bglt BgL_arg5569z00_2020;

					BgL_arg5569z00_2020 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_2005))->BgL_bodyz00);
					{	/* Cfa/type.scm 309 */
						obj_t BgL_method5298z00_2837;

						{	/* Cfa/type.scm 309 */
							BgL_objectz00_bglt BgL_objz00_2838;

							BgL_objz00_2838 = (BgL_objectz00_bglt) (BgL_arg5569z00_2020);
							{	/* Cfa/type.scm 309 */
								long BgL_objzd2classzd2numz00_2839;

								BgL_objzd2classzd2numz00_2839 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2838);
								{	/* Cfa/type.scm 309 */
									obj_t BgL_arg2643z00_2840;

									BgL_arg2643z00_2840 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
										(int) (((long) 1)));
									{	/* Cfa/type.scm 309 */
										obj_t BgL_arrayz00_2842;

										int BgL_offsetz00_2843;

										BgL_arrayz00_2842 = BgL_arg2643z00_2840;
										BgL_offsetz00_2843 = (int) (BgL_objzd2classzd2numz00_2839);
										{	/* Cfa/type.scm 309 */
											long BgL_offsetz00_2844;

											BgL_offsetz00_2844 =
												((long) (BgL_offsetz00_2843) - OBJECT_TYPE);
											{	/* Cfa/type.scm 309 */
												long BgL_modz00_2845;

												{	/* Cfa/type.scm 309 */
													int BgL_arg2645z00_2846;

													BgL_arg2645z00_2846 = (int) (((long) 16));
													{	/* Cfa/type.scm 309 */
														long BgL_auxz00_3839;

														BgL_auxz00_3839 = (long) (BgL_arg2645z00_2846);
														BgL_modz00_2845 =
															(BgL_offsetz00_2844 / BgL_auxz00_3839);
												}}
												{	/* Cfa/type.scm 309 */
													long BgL_restz00_2847;

													{	/* Cfa/type.scm 309 */
														int BgL_arg2644z00_2848;

														BgL_arg2644z00_2848 = (int) (((long) 16));
														{	/* Cfa/type.scm 309 */
															long BgL_auxz00_3843;

															BgL_auxz00_3843 = (long) (BgL_arg2644z00_2848);
															BgL_restz00_2847 =
																(BgL_offsetz00_2844 % BgL_auxz00_3843);
													}}
													{	/* Cfa/type.scm 309 */

														BgL_method5298z00_2837 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2842,
																(int) (BgL_modz00_2845)),
															(int) (BgL_restz00_2847));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_2837) (BgL_method5298z00_2837,
							(obj_t) (BgL_arg5569z00_2020), BEOA);
					}
				}
			}
		}
	}



/* type-node!-let-fun5332 */
	obj_t BGl_typezd2nodez12zd2letzd2fun5332zc0zzcfa_typez00(obj_t
		BgL_envz00_3166, obj_t BgL_nodez00_3167)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 293 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1990;

				BgL_nodez00_1990 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_3167);
				{	/* Cfa/type.scm 295 */
					obj_t BgL_g5279z00_1994;

					BgL_g5279z00_1994 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1990))->BgL_localsz00);
					{
						obj_t BgL_l5277z00_1996;

						BgL_l5277z00_1996 = BgL_g5279z00_1994;
					BgL_zc3anonymousza35559ze3z83_1997:
						if (PAIRP(BgL_l5277z00_1996))
							{	/* Cfa/type.scm 295 */
								{	/* Cfa/type.scm 295 */
									obj_t BgL_arg5561z00_1999;

									BgL_arg5561z00_1999 = CAR(BgL_l5277z00_1996);
									BGl_typezd2funz12zc0zzcfa_typez00(
										(BgL_variablez00_bglt) (BgL_arg5561z00_1999));
								}
								{
									obj_t BgL_l5277z00_3860;

									BgL_l5277z00_3860 = CDR(BgL_l5277z00_1996);
									BgL_l5277z00_1996 = BgL_l5277z00_3860;
									goto BgL_zc3anonymousza35559ze3z83_1997;
								}
							}
						else
							{	/* Cfa/type.scm 295 */
								((bool_t) 1);
							}
					}
				}
				{	/* Cfa/type.scm 296 */
					BgL_nodez00_bglt BgL_arg5563z00_2002;

					BgL_arg5563z00_2002 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1990))->BgL_bodyz00);
					{	/* Cfa/type.scm 296 */
						obj_t BgL_method5298z00_2750;

						{	/* Cfa/type.scm 296 */
							BgL_objectz00_bglt BgL_objz00_2751;

							BgL_objz00_2751 = (BgL_objectz00_bglt) (BgL_arg5563z00_2002);
							{	/* Cfa/type.scm 296 */
								long BgL_objzd2classzd2numz00_2752;

								BgL_objzd2classzd2numz00_2752 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2751);
								{	/* Cfa/type.scm 296 */
									obj_t BgL_arg2643z00_2753;

									BgL_arg2643z00_2753 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
										(int) (((long) 1)));
									{	/* Cfa/type.scm 296 */
										obj_t BgL_arrayz00_2755;

										int BgL_offsetz00_2756;

										BgL_arrayz00_2755 = BgL_arg2643z00_2753;
										BgL_offsetz00_2756 = (int) (BgL_objzd2classzd2numz00_2752);
										{	/* Cfa/type.scm 296 */
											long BgL_offsetz00_2757;

											BgL_offsetz00_2757 =
												((long) (BgL_offsetz00_2756) - OBJECT_TYPE);
											{	/* Cfa/type.scm 296 */
												long BgL_modz00_2758;

												{	/* Cfa/type.scm 296 */
													int BgL_arg2645z00_2759;

													BgL_arg2645z00_2759 = (int) (((long) 16));
													{	/* Cfa/type.scm 296 */
														long BgL_auxz00_3871;

														BgL_auxz00_3871 = (long) (BgL_arg2645z00_2759);
														BgL_modz00_2758 =
															(BgL_offsetz00_2757 / BgL_auxz00_3871);
												}}
												{	/* Cfa/type.scm 296 */
													long BgL_restz00_2760;

													{	/* Cfa/type.scm 296 */
														int BgL_arg2644z00_2761;

														BgL_arg2644z00_2761 = (int) (((long) 16));
														{	/* Cfa/type.scm 296 */
															long BgL_auxz00_3875;

															BgL_auxz00_3875 = (long) (BgL_arg2644z00_2761);
															BgL_restz00_2760 =
																(BgL_offsetz00_2757 % BgL_auxz00_3875);
													}}
													{	/* Cfa/type.scm 296 */

														BgL_method5298z00_2750 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2755,
																(int) (BgL_modz00_2758)),
															(int) (BgL_restz00_2760));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_2750) (BgL_method5298z00_2750,
							(obj_t) (BgL_arg5563z00_2002), BEOA);
					}
				}
			}
		}
	}



/* type-node!-select5330 */
	obj_t BGl_typezd2nodez12zd2select5330z12zzcfa_typez00(obj_t BgL_envz00_3168,
		obj_t BgL_nodez00_3169)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 283 */
			{
				BgL_selectz00_bglt BgL_nodez00_1974;

				{	/* Cfa/type.scm 284 */
					bool_t BgL_auxz00_3886;

					BgL_nodez00_1974 = (BgL_selectz00_bglt) (BgL_nodez00_3169);
					{	/* Cfa/type.scm 285 */
						BgL_nodez00_bglt BgL_arg5553z00_1978;

						BgL_arg5553z00_1978 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1974))->BgL_testz00);
						{	/* Cfa/type.scm 285 */
							obj_t BgL_method5298z00_2688;

							{	/* Cfa/type.scm 285 */
								BgL_objectz00_bglt BgL_objz00_2689;

								BgL_objz00_2689 = (BgL_objectz00_bglt) (BgL_arg5553z00_1978);
								{	/* Cfa/type.scm 285 */
									long BgL_objzd2classzd2numz00_2690;

									BgL_objzd2classzd2numz00_2690 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2689);
									{	/* Cfa/type.scm 285 */
										obj_t BgL_arg2643z00_2691;

										BgL_arg2643z00_2691 =
											PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
											(int) (((long) 1)));
										{	/* Cfa/type.scm 285 */
											obj_t BgL_arrayz00_2693;

											int BgL_offsetz00_2694;

											BgL_arrayz00_2693 = BgL_arg2643z00_2691;
											BgL_offsetz00_2694 =
												(int) (BgL_objzd2classzd2numz00_2690);
											{	/* Cfa/type.scm 285 */
												long BgL_offsetz00_2695;

												BgL_offsetz00_2695 =
													((long) (BgL_offsetz00_2694) - OBJECT_TYPE);
												{	/* Cfa/type.scm 285 */
													long BgL_modz00_2696;

													{	/* Cfa/type.scm 285 */
														int BgL_arg2645z00_2697;

														BgL_arg2645z00_2697 = (int) (((long) 16));
														{	/* Cfa/type.scm 285 */
															long BgL_auxz00_3896;

															BgL_auxz00_3896 = (long) (BgL_arg2645z00_2697);
															BgL_modz00_2696 =
																(BgL_offsetz00_2695 / BgL_auxz00_3896);
													}}
													{	/* Cfa/type.scm 285 */
														long BgL_restz00_2698;

														{	/* Cfa/type.scm 285 */
															int BgL_arg2644z00_2699;

															BgL_arg2644z00_2699 = (int) (((long) 16));
															{	/* Cfa/type.scm 285 */
																long BgL_auxz00_3900;

																BgL_auxz00_3900 = (long) (BgL_arg2644z00_2699);
																BgL_restz00_2698 =
																	(BgL_offsetz00_2695 % BgL_auxz00_3900);
														}}
														{	/* Cfa/type.scm 285 */

															BgL_method5298z00_2688 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2693,
																	(int) (BgL_modz00_2696)),
																(int) (BgL_restz00_2698));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5298z00_2688) (BgL_method5298z00_2688,
								(obj_t) (BgL_arg5553z00_1978), BEOA);
					}}
					{	/* Cfa/type.scm 286 */
						obj_t BgL_g5276z00_1979;

						BgL_g5276z00_1979 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1974))->BgL_clausesz00);
						{
							obj_t BgL_l5274z00_1981;

							BgL_l5274z00_1981 = BgL_g5276z00_1979;
						BgL_zc3anonymousza35554ze3z83_1982:
							if (PAIRP(BgL_l5274z00_1981))
								{	/* Cfa/type.scm 286 */
									{	/* Cfa/type.scm 287 */
										obj_t BgL_clausez00_1984;

										BgL_clausez00_1984 = CAR(BgL_l5274z00_1981);
										{	/* Cfa/type.scm 287 */
											obj_t BgL_arg5556z00_1985;

											BgL_arg5556z00_1985 = CDR(BgL_clausez00_1984);
											{	/* Cfa/type.scm 287 */
												BgL_nodez00_bglt BgL_nodez00_2717;

												BgL_nodez00_2717 =
													(BgL_nodez00_bglt) (BgL_arg5556z00_1985);
												{	/* Cfa/type.scm 287 */
													obj_t BgL_method5298z00_2718;

													{	/* Cfa/type.scm 287 */
														BgL_objectz00_bglt BgL_objz00_2719;

														BgL_objz00_2719 =
															(BgL_objectz00_bglt) (BgL_nodez00_2717);
														{	/* Cfa/type.scm 287 */
															long BgL_objzd2classzd2numz00_2720;

															BgL_objzd2classzd2numz00_2720 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2719);
															{	/* Cfa/type.scm 287 */
																obj_t BgL_arg2643z00_2721;

																BgL_arg2643z00_2721 =
																	PROCEDURE_REF
																	(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
																	(int) (((long) 1)));
																{	/* Cfa/type.scm 287 */
																	obj_t BgL_arrayz00_2723;

																	int BgL_offsetz00_2724;

																	BgL_arrayz00_2723 = BgL_arg2643z00_2721;
																	BgL_offsetz00_2724 =
																		(int) (BgL_objzd2classzd2numz00_2720);
																	{	/* Cfa/type.scm 287 */
																		long BgL_offsetz00_2725;

																		BgL_offsetz00_2725 =
																			(
																			(long) (BgL_offsetz00_2724) -
																			OBJECT_TYPE);
																		{	/* Cfa/type.scm 287 */
																			long BgL_modz00_2726;

																			{	/* Cfa/type.scm 287 */
																				int BgL_arg2645z00_2727;

																				BgL_arg2645z00_2727 =
																					(int) (((long) 16));
																				{	/* Cfa/type.scm 287 */
																					long BgL_auxz00_3924;

																					BgL_auxz00_3924 =
																						(long) (BgL_arg2645z00_2727);
																					BgL_modz00_2726 =
																						(BgL_offsetz00_2725 /
																						BgL_auxz00_3924);
																			}}
																			{	/* Cfa/type.scm 287 */
																				long BgL_restz00_2728;

																				{	/* Cfa/type.scm 287 */
																					int BgL_arg2644z00_2729;

																					BgL_arg2644z00_2729 =
																						(int) (((long) 16));
																					{	/* Cfa/type.scm 287 */
																						long BgL_auxz00_3928;

																						BgL_auxz00_3928 =
																							(long) (BgL_arg2644z00_2729);
																						BgL_restz00_2728 =
																							(BgL_offsetz00_2725 %
																							BgL_auxz00_3928);
																				}}
																				{	/* Cfa/type.scm 287 */

																					BgL_method5298z00_2718 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2723,
																							(int) (BgL_modz00_2726)),
																						(int) (BgL_restz00_2728));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method5298z00_2718)
														(BgL_method5298z00_2718, (obj_t) (BgL_nodez00_2717),
														BEOA);
									}}}}
									{
										obj_t BgL_l5274z00_3938;

										BgL_l5274z00_3938 = CDR(BgL_l5274z00_1981);
										BgL_l5274z00_1981 = BgL_l5274z00_3938;
										goto BgL_zc3anonymousza35554ze3z83_1982;
									}
								}
							else
								{	/* Cfa/type.scm 286 */
									BgL_auxz00_3886 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_3886);
				}
			}
		}
	}



/* type-node!-fail5328 */
	obj_t BGl_typezd2nodez12zd2fail5328z12zzcfa_typez00(obj_t BgL_envz00_3170,
		obj_t BgL_nodez00_3171)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 274 */
			{
				BgL_failz00_bglt BgL_nodez00_1965;

				BgL_nodez00_1965 = (BgL_failz00_bglt) (BgL_nodez00_3171);
				{	/* Cfa/type.scm 276 */
					BgL_nodez00_bglt BgL_arg5549z00_1969;

					BgL_arg5549z00_1969 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1965))->BgL_procz00);
					{	/* Cfa/type.scm 276 */
						obj_t BgL_method5298z00_2607;

						{	/* Cfa/type.scm 276 */
							BgL_objectz00_bglt BgL_objz00_2608;

							BgL_objz00_2608 = (BgL_objectz00_bglt) (BgL_arg5549z00_1969);
							{	/* Cfa/type.scm 276 */
								long BgL_objzd2classzd2numz00_2609;

								BgL_objzd2classzd2numz00_2609 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2608);
								{	/* Cfa/type.scm 276 */
									obj_t BgL_arg2643z00_2610;

									BgL_arg2643z00_2610 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
										(int) (((long) 1)));
									{	/* Cfa/type.scm 276 */
										obj_t BgL_arrayz00_2612;

										int BgL_offsetz00_2613;

										BgL_arrayz00_2612 = BgL_arg2643z00_2610;
										BgL_offsetz00_2613 = (int) (BgL_objzd2classzd2numz00_2609);
										{	/* Cfa/type.scm 276 */
											long BgL_offsetz00_2614;

											BgL_offsetz00_2614 =
												((long) (BgL_offsetz00_2613) - OBJECT_TYPE);
											{	/* Cfa/type.scm 276 */
												long BgL_modz00_2615;

												{	/* Cfa/type.scm 276 */
													int BgL_arg2645z00_2616;

													BgL_arg2645z00_2616 = (int) (((long) 16));
													{	/* Cfa/type.scm 276 */
														long BgL_auxz00_3951;

														BgL_auxz00_3951 = (long) (BgL_arg2645z00_2616);
														BgL_modz00_2615 =
															(BgL_offsetz00_2614 / BgL_auxz00_3951);
												}}
												{	/* Cfa/type.scm 276 */
													long BgL_restz00_2617;

													{	/* Cfa/type.scm 276 */
														int BgL_arg2644z00_2618;

														BgL_arg2644z00_2618 = (int) (((long) 16));
														{	/* Cfa/type.scm 276 */
															long BgL_auxz00_3955;

															BgL_auxz00_3955 = (long) (BgL_arg2644z00_2618);
															BgL_restz00_2617 =
																(BgL_offsetz00_2614 % BgL_auxz00_3955);
													}}
													{	/* Cfa/type.scm 276 */

														BgL_method5298z00_2607 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2612,
																(int) (BgL_modz00_2615)),
															(int) (BgL_restz00_2617));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_2607) (BgL_method5298z00_2607,
							(obj_t) (BgL_arg5549z00_1969), BEOA);
				}}
				{	/* Cfa/type.scm 277 */
					BgL_nodez00_bglt BgL_arg5550z00_1970;

					BgL_arg5550z00_1970 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1965))->BgL_msgz00);
					{	/* Cfa/type.scm 277 */
						obj_t BgL_method5298z00_2634;

						{	/* Cfa/type.scm 277 */
							BgL_objectz00_bglt BgL_objz00_2635;

							BgL_objz00_2635 = (BgL_objectz00_bglt) (BgL_arg5550z00_1970);
							{	/* Cfa/type.scm 277 */
								long BgL_objzd2classzd2numz00_2636;

								BgL_objzd2classzd2numz00_2636 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2635);
								{	/* Cfa/type.scm 277 */
									obj_t BgL_arg2643z00_2637;

									BgL_arg2643z00_2637 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
										(int) (((long) 1)));
									{	/* Cfa/type.scm 277 */
										obj_t BgL_arrayz00_2639;

										int BgL_offsetz00_2640;

										BgL_arrayz00_2639 = BgL_arg2643z00_2637;
										BgL_offsetz00_2640 = (int) (BgL_objzd2classzd2numz00_2636);
										{	/* Cfa/type.scm 277 */
											long BgL_offsetz00_2641;

											BgL_offsetz00_2641 =
												((long) (BgL_offsetz00_2640) - OBJECT_TYPE);
											{	/* Cfa/type.scm 277 */
												long BgL_modz00_2642;

												{	/* Cfa/type.scm 277 */
													int BgL_arg2645z00_2643;

													BgL_arg2645z00_2643 = (int) (((long) 16));
													{	/* Cfa/type.scm 277 */
														long BgL_auxz00_3974;

														BgL_auxz00_3974 = (long) (BgL_arg2645z00_2643);
														BgL_modz00_2642 =
															(BgL_offsetz00_2641 / BgL_auxz00_3974);
												}}
												{	/* Cfa/type.scm 277 */
													long BgL_restz00_2644;

													{	/* Cfa/type.scm 277 */
														int BgL_arg2644z00_2645;

														BgL_arg2644z00_2645 = (int) (((long) 16));
														{	/* Cfa/type.scm 277 */
															long BgL_auxz00_3978;

															BgL_auxz00_3978 = (long) (BgL_arg2644z00_2645);
															BgL_restz00_2644 =
																(BgL_offsetz00_2641 % BgL_auxz00_3978);
													}}
													{	/* Cfa/type.scm 277 */

														BgL_method5298z00_2634 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2639,
																(int) (BgL_modz00_2642)),
															(int) (BgL_restz00_2644));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_2634) (BgL_method5298z00_2634,
							(obj_t) (BgL_arg5550z00_1970), BEOA);
				}}
				{	/* Cfa/type.scm 278 */
					BgL_nodez00_bglt BgL_arg5551z00_1971;

					BgL_arg5551z00_1971 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1965))->BgL_objz00);
					{	/* Cfa/type.scm 278 */
						obj_t BgL_method5298z00_2661;

						{	/* Cfa/type.scm 278 */
							BgL_objectz00_bglt BgL_objz00_2662;

							BgL_objz00_2662 = (BgL_objectz00_bglt) (BgL_arg5551z00_1971);
							{	/* Cfa/type.scm 278 */
								long BgL_objzd2classzd2numz00_2663;

								BgL_objzd2classzd2numz00_2663 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2662);
								{	/* Cfa/type.scm 278 */
									obj_t BgL_arg2643z00_2664;

									BgL_arg2643z00_2664 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
										(int) (((long) 1)));
									{	/* Cfa/type.scm 278 */
										obj_t BgL_arrayz00_2666;

										int BgL_offsetz00_2667;

										BgL_arrayz00_2666 = BgL_arg2643z00_2664;
										BgL_offsetz00_2667 = (int) (BgL_objzd2classzd2numz00_2663);
										{	/* Cfa/type.scm 278 */
											long BgL_offsetz00_2668;

											BgL_offsetz00_2668 =
												((long) (BgL_offsetz00_2667) - OBJECT_TYPE);
											{	/* Cfa/type.scm 278 */
												long BgL_modz00_2669;

												{	/* Cfa/type.scm 278 */
													int BgL_arg2645z00_2670;

													BgL_arg2645z00_2670 = (int) (((long) 16));
													{	/* Cfa/type.scm 278 */
														long BgL_auxz00_3997;

														BgL_auxz00_3997 = (long) (BgL_arg2645z00_2670);
														BgL_modz00_2669 =
															(BgL_offsetz00_2668 / BgL_auxz00_3997);
												}}
												{	/* Cfa/type.scm 278 */
													long BgL_restz00_2671;

													{	/* Cfa/type.scm 278 */
														int BgL_arg2644z00_2672;

														BgL_arg2644z00_2672 = (int) (((long) 16));
														{	/* Cfa/type.scm 278 */
															long BgL_auxz00_4001;

															BgL_auxz00_4001 = (long) (BgL_arg2644z00_2672);
															BgL_restz00_2671 =
																(BgL_offsetz00_2668 % BgL_auxz00_4001);
													}}
													{	/* Cfa/type.scm 278 */

														BgL_method5298z00_2661 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2666,
																(int) (BgL_modz00_2669)),
															(int) (BgL_restz00_2671));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_2661) (BgL_method5298z00_2661,
							(obj_t) (BgL_arg5551z00_1971), BEOA);
					}
				}
			}
		}
	}



/* type-node!-condition5326 */
	obj_t BGl_typezd2nodez12zd2condition5326z12zzcfa_typez00(obj_t
		BgL_envz00_3172, obj_t BgL_nodez00_3173)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 265 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1956;

				BgL_nodez00_1956 = (BgL_conditionalz00_bglt) (BgL_nodez00_3173);
				{	/* Cfa/type.scm 267 */
					BgL_nodez00_bglt BgL_arg5545z00_1960;

					BgL_arg5545z00_1960 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1956))->BgL_testz00);
					{	/* Cfa/type.scm 267 */
						obj_t BgL_method5298z00_2526;

						{	/* Cfa/type.scm 267 */
							BgL_objectz00_bglt BgL_objz00_2527;

							BgL_objz00_2527 = (BgL_objectz00_bglt) (BgL_arg5545z00_1960);
							{	/* Cfa/type.scm 267 */
								long BgL_objzd2classzd2numz00_2528;

								BgL_objzd2classzd2numz00_2528 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2527);
								{	/* Cfa/type.scm 267 */
									obj_t BgL_arg2643z00_2529;

									BgL_arg2643z00_2529 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
										(int) (((long) 1)));
									{	/* Cfa/type.scm 267 */
										obj_t BgL_arrayz00_2531;

										int BgL_offsetz00_2532;

										BgL_arrayz00_2531 = BgL_arg2643z00_2529;
										BgL_offsetz00_2532 = (int) (BgL_objzd2classzd2numz00_2528);
										{	/* Cfa/type.scm 267 */
											long BgL_offsetz00_2533;

											BgL_offsetz00_2533 =
												((long) (BgL_offsetz00_2532) - OBJECT_TYPE);
											{	/* Cfa/type.scm 267 */
												long BgL_modz00_2534;

												{	/* Cfa/type.scm 267 */
													int BgL_arg2645z00_2535;

													BgL_arg2645z00_2535 = (int) (((long) 16));
													{	/* Cfa/type.scm 267 */
														long BgL_auxz00_4021;

														BgL_auxz00_4021 = (long) (BgL_arg2645z00_2535);
														BgL_modz00_2534 =
															(BgL_offsetz00_2533 / BgL_auxz00_4021);
												}}
												{	/* Cfa/type.scm 267 */
													long BgL_restz00_2536;

													{	/* Cfa/type.scm 267 */
														int BgL_arg2644z00_2537;

														BgL_arg2644z00_2537 = (int) (((long) 16));
														{	/* Cfa/type.scm 267 */
															long BgL_auxz00_4025;

															BgL_auxz00_4025 = (long) (BgL_arg2644z00_2537);
															BgL_restz00_2536 =
																(BgL_offsetz00_2533 % BgL_auxz00_4025);
													}}
													{	/* Cfa/type.scm 267 */

														BgL_method5298z00_2526 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2531,
																(int) (BgL_modz00_2534)),
															(int) (BgL_restz00_2536));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_2526) (BgL_method5298z00_2526,
							(obj_t) (BgL_arg5545z00_1960), BEOA);
				}}
				{	/* Cfa/type.scm 268 */
					BgL_nodez00_bglt BgL_arg5546z00_1961;

					BgL_arg5546z00_1961 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1956))->BgL_truez00);
					{	/* Cfa/type.scm 268 */
						obj_t BgL_method5298z00_2553;

						{	/* Cfa/type.scm 268 */
							BgL_objectz00_bglt BgL_objz00_2554;

							BgL_objz00_2554 = (BgL_objectz00_bglt) (BgL_arg5546z00_1961);
							{	/* Cfa/type.scm 268 */
								long BgL_objzd2classzd2numz00_2555;

								BgL_objzd2classzd2numz00_2555 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2554);
								{	/* Cfa/type.scm 268 */
									obj_t BgL_arg2643z00_2556;

									BgL_arg2643z00_2556 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
										(int) (((long) 1)));
									{	/* Cfa/type.scm 268 */
										obj_t BgL_arrayz00_2558;

										int BgL_offsetz00_2559;

										BgL_arrayz00_2558 = BgL_arg2643z00_2556;
										BgL_offsetz00_2559 = (int) (BgL_objzd2classzd2numz00_2555);
										{	/* Cfa/type.scm 268 */
											long BgL_offsetz00_2560;

											BgL_offsetz00_2560 =
												((long) (BgL_offsetz00_2559) - OBJECT_TYPE);
											{	/* Cfa/type.scm 268 */
												long BgL_modz00_2561;

												{	/* Cfa/type.scm 268 */
													int BgL_arg2645z00_2562;

													BgL_arg2645z00_2562 = (int) (((long) 16));
													{	/* Cfa/type.scm 268 */
														long BgL_auxz00_4044;

														BgL_auxz00_4044 = (long) (BgL_arg2645z00_2562);
														BgL_modz00_2561 =
															(BgL_offsetz00_2560 / BgL_auxz00_4044);
												}}
												{	/* Cfa/type.scm 268 */
													long BgL_restz00_2563;

													{	/* Cfa/type.scm 268 */
														int BgL_arg2644z00_2564;

														BgL_arg2644z00_2564 = (int) (((long) 16));
														{	/* Cfa/type.scm 268 */
															long BgL_auxz00_4048;

															BgL_auxz00_4048 = (long) (BgL_arg2644z00_2564);
															BgL_restz00_2563 =
																(BgL_offsetz00_2560 % BgL_auxz00_4048);
													}}
													{	/* Cfa/type.scm 268 */

														BgL_method5298z00_2553 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2558,
																(int) (BgL_modz00_2561)),
															(int) (BgL_restz00_2563));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_2553) (BgL_method5298z00_2553,
							(obj_t) (BgL_arg5546z00_1961), BEOA);
				}}
				{	/* Cfa/type.scm 269 */
					BgL_nodez00_bglt BgL_arg5547z00_1962;

					BgL_arg5547z00_1962 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1956))->BgL_falsez00);
					{	/* Cfa/type.scm 269 */
						obj_t BgL_method5298z00_2580;

						{	/* Cfa/type.scm 269 */
							BgL_objectz00_bglt BgL_objz00_2581;

							BgL_objz00_2581 = (BgL_objectz00_bglt) (BgL_arg5547z00_1962);
							{	/* Cfa/type.scm 269 */
								long BgL_objzd2classzd2numz00_2582;

								BgL_objzd2classzd2numz00_2582 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2581);
								{	/* Cfa/type.scm 269 */
									obj_t BgL_arg2643z00_2583;

									BgL_arg2643z00_2583 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
										(int) (((long) 1)));
									{	/* Cfa/type.scm 269 */
										obj_t BgL_arrayz00_2585;

										int BgL_offsetz00_2586;

										BgL_arrayz00_2585 = BgL_arg2643z00_2583;
										BgL_offsetz00_2586 = (int) (BgL_objzd2classzd2numz00_2582);
										{	/* Cfa/type.scm 269 */
											long BgL_offsetz00_2587;

											BgL_offsetz00_2587 =
												((long) (BgL_offsetz00_2586) - OBJECT_TYPE);
											{	/* Cfa/type.scm 269 */
												long BgL_modz00_2588;

												{	/* Cfa/type.scm 269 */
													int BgL_arg2645z00_2589;

													BgL_arg2645z00_2589 = (int) (((long) 16));
													{	/* Cfa/type.scm 269 */
														long BgL_auxz00_4067;

														BgL_auxz00_4067 = (long) (BgL_arg2645z00_2589);
														BgL_modz00_2588 =
															(BgL_offsetz00_2587 / BgL_auxz00_4067);
												}}
												{	/* Cfa/type.scm 269 */
													long BgL_restz00_2590;

													{	/* Cfa/type.scm 269 */
														int BgL_arg2644z00_2591;

														BgL_arg2644z00_2591 = (int) (((long) 16));
														{	/* Cfa/type.scm 269 */
															long BgL_auxz00_4071;

															BgL_auxz00_4071 = (long) (BgL_arg2644z00_2591);
															BgL_restz00_2590 =
																(BgL_offsetz00_2587 % BgL_auxz00_4071);
													}}
													{	/* Cfa/type.scm 269 */

														BgL_method5298z00_2580 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2585,
																(int) (BgL_modz00_2588)),
															(int) (BgL_restz00_2590));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_2580) (BgL_method5298z00_2580,
							(obj_t) (BgL_arg5547z00_1962), BEOA);
					}
				}
			}
		}
	}



/* type-node!-setq5324 */
	obj_t BGl_typezd2nodez12zd2setq5324z12zzcfa_typez00(obj_t BgL_envz00_3174,
		obj_t BgL_nodez00_3175)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 257 */
			{
				BgL_setqz00_bglt BgL_nodez00_1948;

				BgL_nodez00_1948 = (BgL_setqz00_bglt) (BgL_nodez00_3175);
				{	/* Cfa/type.scm 259 */
					BgL_nodez00_bglt BgL_arg5542z00_1952;

					BgL_arg5542z00_1952 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1948))->BgL_valuez00);
					{	/* Cfa/type.scm 259 */
						obj_t BgL_method5298z00_2472;

						{	/* Cfa/type.scm 259 */
							BgL_objectz00_bglt BgL_objz00_2473;

							BgL_objz00_2473 = (BgL_objectz00_bglt) (BgL_arg5542z00_1952);
							{	/* Cfa/type.scm 259 */
								long BgL_objzd2classzd2numz00_2474;

								BgL_objzd2classzd2numz00_2474 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2473);
								{	/* Cfa/type.scm 259 */
									obj_t BgL_arg2643z00_2475;

									BgL_arg2643z00_2475 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
										(int) (((long) 1)));
									{	/* Cfa/type.scm 259 */
										obj_t BgL_arrayz00_2477;

										int BgL_offsetz00_2478;

										BgL_arrayz00_2477 = BgL_arg2643z00_2475;
										BgL_offsetz00_2478 = (int) (BgL_objzd2classzd2numz00_2474);
										{	/* Cfa/type.scm 259 */
											long BgL_offsetz00_2479;

											BgL_offsetz00_2479 =
												((long) (BgL_offsetz00_2478) - OBJECT_TYPE);
											{	/* Cfa/type.scm 259 */
												long BgL_modz00_2480;

												{	/* Cfa/type.scm 259 */
													int BgL_arg2645z00_2481;

													BgL_arg2645z00_2481 = (int) (((long) 16));
													{	/* Cfa/type.scm 259 */
														long BgL_auxz00_4091;

														BgL_auxz00_4091 = (long) (BgL_arg2645z00_2481);
														BgL_modz00_2480 =
															(BgL_offsetz00_2479 / BgL_auxz00_4091);
												}}
												{	/* Cfa/type.scm 259 */
													long BgL_restz00_2482;

													{	/* Cfa/type.scm 259 */
														int BgL_arg2644z00_2483;

														BgL_arg2644z00_2483 = (int) (((long) 16));
														{	/* Cfa/type.scm 259 */
															long BgL_auxz00_4095;

															BgL_auxz00_4095 = (long) (BgL_arg2644z00_2483);
															BgL_restz00_2482 =
																(BgL_offsetz00_2479 % BgL_auxz00_4095);
													}}
													{	/* Cfa/type.scm 259 */

														BgL_method5298z00_2472 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2477,
																(int) (BgL_modz00_2480)),
															(int) (BgL_restz00_2482));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_2472) (BgL_method5298z00_2472,
							(obj_t) (BgL_arg5542z00_1952), BEOA);
				}}
				{	/* Cfa/type.scm 260 */
					BgL_varz00_bglt BgL_arg5543z00_1953;

					BgL_arg5543z00_1953 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1948))->BgL_varz00);
					{	/* Cfa/type.scm 260 */
						BgL_nodez00_bglt BgL_nodez00_2498;

						BgL_nodez00_2498 = (BgL_nodez00_bglt) (BgL_arg5543z00_1953);
						{	/* Cfa/type.scm 260 */
							obj_t BgL_method5298z00_2499;

							{	/* Cfa/type.scm 260 */
								BgL_objectz00_bglt BgL_objz00_2500;

								BgL_objz00_2500 = (BgL_objectz00_bglt) (BgL_nodez00_2498);
								{	/* Cfa/type.scm 260 */
									long BgL_objzd2classzd2numz00_2501;

									BgL_objzd2classzd2numz00_2501 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2500);
									{	/* Cfa/type.scm 260 */
										obj_t BgL_arg2643z00_2502;

										BgL_arg2643z00_2502 =
											PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
											(int) (((long) 1)));
										{	/* Cfa/type.scm 260 */
											obj_t BgL_arrayz00_2504;

											int BgL_offsetz00_2505;

											BgL_arrayz00_2504 = BgL_arg2643z00_2502;
											BgL_offsetz00_2505 =
												(int) (BgL_objzd2classzd2numz00_2501);
											{	/* Cfa/type.scm 260 */
												long BgL_offsetz00_2506;

												BgL_offsetz00_2506 =
													((long) (BgL_offsetz00_2505) - OBJECT_TYPE);
												{	/* Cfa/type.scm 260 */
													long BgL_modz00_2507;

													{	/* Cfa/type.scm 260 */
														int BgL_arg2645z00_2508;

														BgL_arg2645z00_2508 = (int) (((long) 16));
														{	/* Cfa/type.scm 260 */
															long BgL_auxz00_4115;

															BgL_auxz00_4115 = (long) (BgL_arg2645z00_2508);
															BgL_modz00_2507 =
																(BgL_offsetz00_2506 / BgL_auxz00_4115);
													}}
													{	/* Cfa/type.scm 260 */
														long BgL_restz00_2509;

														{	/* Cfa/type.scm 260 */
															int BgL_arg2644z00_2510;

															BgL_arg2644z00_2510 = (int) (((long) 16));
															{	/* Cfa/type.scm 260 */
																long BgL_auxz00_4119;

																BgL_auxz00_4119 = (long) (BgL_arg2644z00_2510);
																BgL_restz00_2509 =
																	(BgL_offsetz00_2506 % BgL_auxz00_4119);
														}}
														{	/* Cfa/type.scm 260 */

															BgL_method5298z00_2499 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2504,
																	(int) (BgL_modz00_2507)),
																(int) (BgL_restz00_2509));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method5298z00_2499) (BgL_method5298z00_2499,
								(obj_t) (BgL_nodez00_2498), BEOA);
						}
					}
				}
			}
		}
	}



/* type-node!-cast5322 */
	obj_t BGl_typezd2nodez12zd2cast5322z12zzcfa_typez00(obj_t BgL_envz00_3176,
		obj_t BgL_nodez00_3177)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 250 */
			{
				BgL_castz00_bglt BgL_nodez00_1941;

				BgL_nodez00_1941 = (BgL_castz00_bglt) (BgL_nodez00_3177);
				{	/* Cfa/type.scm 251 */
					BgL_nodez00_bglt BgL_arg5540z00_2442;

					BgL_arg5540z00_2442 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_1941))->BgL_argz00);
					{	/* Cfa/type.scm 251 */
						obj_t BgL_method5298z00_2445;

						{	/* Cfa/type.scm 251 */
							BgL_objectz00_bglt BgL_objz00_2446;

							BgL_objz00_2446 = (BgL_objectz00_bglt) (BgL_arg5540z00_2442);
							{	/* Cfa/type.scm 251 */
								long BgL_objzd2classzd2numz00_2447;

								BgL_objzd2classzd2numz00_2447 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2446);
								{	/* Cfa/type.scm 251 */
									obj_t BgL_arg2643z00_2448;

									BgL_arg2643z00_2448 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
										(int) (((long) 1)));
									{	/* Cfa/type.scm 251 */
										obj_t BgL_arrayz00_2450;

										int BgL_offsetz00_2451;

										BgL_arrayz00_2450 = BgL_arg2643z00_2448;
										BgL_offsetz00_2451 = (int) (BgL_objzd2classzd2numz00_2447);
										{	/* Cfa/type.scm 251 */
											long BgL_offsetz00_2452;

											BgL_offsetz00_2452 =
												((long) (BgL_offsetz00_2451) - OBJECT_TYPE);
											{	/* Cfa/type.scm 251 */
												long BgL_modz00_2453;

												{	/* Cfa/type.scm 251 */
													int BgL_arg2645z00_2454;

													BgL_arg2645z00_2454 = (int) (((long) 16));
													{	/* Cfa/type.scm 251 */
														long BgL_auxz00_4139;

														BgL_auxz00_4139 = (long) (BgL_arg2645z00_2454);
														BgL_modz00_2453 =
															(BgL_offsetz00_2452 / BgL_auxz00_4139);
												}}
												{	/* Cfa/type.scm 251 */
													long BgL_restz00_2455;

													{	/* Cfa/type.scm 251 */
														int BgL_arg2644z00_2456;

														BgL_arg2644z00_2456 = (int) (((long) 16));
														{	/* Cfa/type.scm 251 */
															long BgL_auxz00_4143;

															BgL_auxz00_4143 = (long) (BgL_arg2644z00_2456);
															BgL_restz00_2455 =
																(BgL_offsetz00_2452 % BgL_auxz00_4143);
													}}
													{	/* Cfa/type.scm 251 */

														BgL_method5298z00_2445 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2450,
																(int) (BgL_modz00_2453)),
															(int) (BgL_restz00_2455));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_2445) (BgL_method5298z00_2445,
							(obj_t) (BgL_arg5540z00_2442), BEOA);
					}
				}
			}
		}
	}



/* type-node!-vset!5320 */
	obj_t BGl_typezd2nodez12zd2vsetz125320z00zzcfa_typez00(obj_t BgL_envz00_3178,
		obj_t BgL_nodez00_3179)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 241 */
			{
				BgL_vsetz12z12_bglt BgL_nodez00_1933;

				BgL_nodez00_1933 = (BgL_vsetz12z12_bglt) (BgL_nodez00_3179);
				{

					{	/* Cfa/type.scm 241 */
						obj_t BgL_nextzd2method5319zd2_1939;

						BgL_nextzd2method5319zd2_1939 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_nodez00_1933),
							BGl_typezd2nodez12zd2envz12zzcfa_typez00,
							BGl_vsetz12z12zzast_nodez00);
						if (PROCEDUREP(BgL_nextzd2method5319zd2_1939))
							{	/* Cfa/type.scm 241 */
								PROCEDURE_ENTRY(BgL_nextzd2method5319zd2_1939)
									(BgL_nextzd2method5319zd2_1939, (obj_t) (BgL_nodez00_1933),
									BEOA);
							}
						else
							{	/* Cfa/type.scm 241 */
								{	/* Cfa/type.scm 241 */
									BgL_nodez00_bglt BgL_nodez00_2415;

									BgL_nodez00_2415 = (BgL_nodez00_bglt) (BgL_nodez00_1933);
									{	/* Cfa/type.scm 241 */
										obj_t BgL_method5298z00_2416;

										{	/* Cfa/type.scm 241 */
											BgL_objectz00_bglt BgL_objz00_2417;

											BgL_objz00_2417 = (BgL_objectz00_bglt) (BgL_nodez00_2415);
											{	/* Cfa/type.scm 241 */
												long BgL_objzd2classzd2numz00_2418;

												BgL_objzd2classzd2numz00_2418 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2417);
												{	/* Cfa/type.scm 241 */
													obj_t BgL_arg2643z00_2419;

													BgL_arg2643z00_2419 =
														PROCEDURE_REF
														(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
														(int) (((long) 1)));
													{	/* Cfa/type.scm 241 */
														obj_t BgL_arrayz00_2421;

														int BgL_offsetz00_2422;

														BgL_arrayz00_2421 = BgL_arg2643z00_2419;
														BgL_offsetz00_2422 =
															(int) (BgL_objzd2classzd2numz00_2418);
														{	/* Cfa/type.scm 241 */
															long BgL_offsetz00_2423;

															BgL_offsetz00_2423 =
																((long) (BgL_offsetz00_2422) - OBJECT_TYPE);
															{	/* Cfa/type.scm 241 */
																long BgL_modz00_2424;

																{	/* Cfa/type.scm 241 */
																	int BgL_arg2645z00_2425;

																	BgL_arg2645z00_2425 = (int) (((long) 16));
																	{	/* Cfa/type.scm 241 */
																		long BgL_auxz00_4170;

																		BgL_auxz00_4170 =
																			(long) (BgL_arg2645z00_2425);
																		BgL_modz00_2424 =
																			(BgL_offsetz00_2423 / BgL_auxz00_4170);
																}}
																{	/* Cfa/type.scm 241 */
																	long BgL_restz00_2426;

																	{	/* Cfa/type.scm 241 */
																		int BgL_arg2644z00_2427;

																		BgL_arg2644z00_2427 = (int) (((long) 16));
																		{	/* Cfa/type.scm 241 */
																			long BgL_auxz00_4174;

																			BgL_auxz00_4174 =
																				(long) (BgL_arg2644z00_2427);
																			BgL_restz00_2426 =
																				(BgL_offsetz00_2423 % BgL_auxz00_4174);
																	}}
																	{	/* Cfa/type.scm 241 */

																		BgL_method5298z00_2416 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2421,
																				(int) (BgL_modz00_2424)),
																			(int) (BgL_restz00_2426));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method5298z00_2416)
											(BgL_method5298z00_2416, (obj_t) (BgL_nodez00_2415),
											BEOA);
					}}}}
					{	/* Cfa/type.scm 244 */
						bool_t BgL_testz00_4184;

						{	/* Cfa/type.scm 244 */
							BgL_typez00_bglt BgL_arg5538z00_1938;

							BgL_arg5538z00_1938 =
								(((BgL_vsetz12z12_bglt) CREF(BgL_nodez00_1933))->BgL_ftypez00);
							BgL_testz00_4184 =
								(
								(obj_t) (BgL_arg5538z00_1938) == BGl_za2_za2z00zztype_cachez00);
						}
						if (BgL_testz00_4184)
							{
								BgL_typez00_bglt BgL_auxz00_4188;

								BgL_auxz00_4188 =
									(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
								return
									((((BgL_vsetz12z12_bglt) CREF(BgL_nodez00_1933))->
										BgL_ftypez00) =
									((BgL_typez00_bglt) BgL_auxz00_4188), BUNSPEC);
							}
						else
							{	/* Cfa/type.scm 244 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* type-node!-vref5318 */
	obj_t BGl_typezd2nodez12zd2vref5318z12zzcfa_typez00(obj_t BgL_envz00_3180,
		obj_t BgL_nodez00_3181)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 232 */
			{
				BgL_vrefz00_bglt BgL_nodez00_1925;

				BgL_nodez00_1925 = (BgL_vrefz00_bglt) (BgL_nodez00_3181);
				{

					{	/* Cfa/type.scm 232 */
						obj_t BgL_nextzd2method5317zd2_1931;

						BgL_nextzd2method5317zd2_1931 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_nodez00_1925),
							BGl_typezd2nodez12zd2envz12zzcfa_typez00,
							BGl_vrefz00zzast_nodez00);
						if (PROCEDUREP(BgL_nextzd2method5317zd2_1931))
							{	/* Cfa/type.scm 232 */
								PROCEDURE_ENTRY(BgL_nextzd2method5317zd2_1931)
									(BgL_nextzd2method5317zd2_1931, (obj_t) (BgL_nodez00_1925),
									BEOA);
							}
						else
							{	/* Cfa/type.scm 232 */
								{	/* Cfa/type.scm 232 */
									BgL_nodez00_bglt BgL_nodez00_2385;

									BgL_nodez00_2385 = (BgL_nodez00_bglt) (BgL_nodez00_1925);
									{	/* Cfa/type.scm 232 */
										obj_t BgL_method5298z00_2386;

										{	/* Cfa/type.scm 232 */
											BgL_objectz00_bglt BgL_objz00_2387;

											BgL_objz00_2387 = (BgL_objectz00_bglt) (BgL_nodez00_2385);
											{	/* Cfa/type.scm 232 */
												long BgL_objzd2classzd2numz00_2388;

												BgL_objzd2classzd2numz00_2388 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2387);
												{	/* Cfa/type.scm 232 */
													obj_t BgL_arg2643z00_2389;

													BgL_arg2643z00_2389 =
														PROCEDURE_REF
														(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
														(int) (((long) 1)));
													{	/* Cfa/type.scm 232 */
														obj_t BgL_arrayz00_2391;

														int BgL_offsetz00_2392;

														BgL_arrayz00_2391 = BgL_arg2643z00_2389;
														BgL_offsetz00_2392 =
															(int) (BgL_objzd2classzd2numz00_2388);
														{	/* Cfa/type.scm 232 */
															long BgL_offsetz00_2393;

															BgL_offsetz00_2393 =
																((long) (BgL_offsetz00_2392) - OBJECT_TYPE);
															{	/* Cfa/type.scm 232 */
																long BgL_modz00_2394;

																{	/* Cfa/type.scm 232 */
																	int BgL_arg2645z00_2395;

																	BgL_arg2645z00_2395 = (int) (((long) 16));
																	{	/* Cfa/type.scm 232 */
																		long BgL_auxz00_4208;

																		BgL_auxz00_4208 =
																			(long) (BgL_arg2645z00_2395);
																		BgL_modz00_2394 =
																			(BgL_offsetz00_2393 / BgL_auxz00_4208);
																}}
																{	/* Cfa/type.scm 232 */
																	long BgL_restz00_2396;

																	{	/* Cfa/type.scm 232 */
																		int BgL_arg2644z00_2397;

																		BgL_arg2644z00_2397 = (int) (((long) 16));
																		{	/* Cfa/type.scm 232 */
																			long BgL_auxz00_4212;

																			BgL_auxz00_4212 =
																				(long) (BgL_arg2644z00_2397);
																			BgL_restz00_2396 =
																				(BgL_offsetz00_2393 % BgL_auxz00_4212);
																	}}
																	{	/* Cfa/type.scm 232 */

																		BgL_method5298z00_2386 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2391,
																				(int) (BgL_modz00_2394)),
																			(int) (BgL_restz00_2396));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method5298z00_2386)
											(BgL_method5298z00_2386, (obj_t) (BgL_nodez00_2385),
											BEOA);
					}}}}
					{	/* Cfa/type.scm 235 */
						bool_t BgL_testz00_4222;

						{	/* Cfa/type.scm 235 */
							BgL_typez00_bglt BgL_arg5535z00_1930;

							BgL_arg5535z00_1930 =
								(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1925))->BgL_ftypez00);
							BgL_testz00_4222 =
								(
								(obj_t) (BgL_arg5535z00_1930) == BGl_za2_za2z00zztype_cachez00);
						}
						if (BgL_testz00_4222)
							{
								BgL_typez00_bglt BgL_auxz00_4226;

								BgL_auxz00_4226 =
									(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
								return
									((((BgL_vrefz00_bglt) CREF(BgL_nodez00_1925))->BgL_ftypez00) =
									((BgL_typez00_bglt) BgL_auxz00_4226), BUNSPEC);
							}
						else
							{	/* Cfa/type.scm 235 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* type-node!-extern5316 */
	obj_t BGl_typezd2nodez12zd2extern5316z12zzcfa_typez00(obj_t BgL_envz00_3182,
		obj_t BgL_nodez00_3183)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 225 */
			{
				BgL_externz00_bglt BgL_nodez00_1918;

				{	/* Cfa/type.scm 226 */
					bool_t BgL_auxz00_4230;

					BgL_nodez00_1918 = (BgL_externz00_bglt) (BgL_nodez00_3183);
					{	/* Cfa/type.scm 226 */
						obj_t BgL_arg5532z00_2379;

						BgL_arg5532z00_2379 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1918))->BgL_exprza2za2);
						BgL_auxz00_4230 =
							BGl_typezd2nodeza2z12z62zzcfa_typez00(BgL_arg5532z00_2379);
					}
					return BBOOL(BgL_auxz00_4230);
				}
			}
		}
	}



/* type-node!-funcall5314 */
	obj_t BGl_typezd2nodez12zd2funcall5314z12zzcfa_typez00(obj_t BgL_envz00_3184,
		obj_t BgL_nodez00_3185)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 217 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1910;

				{	/* Cfa/type.scm 218 */
					bool_t BgL_auxz00_4235;

					BgL_nodez00_1910 = (BgL_funcallz00_bglt) (BgL_nodez00_3185);
					{	/* Cfa/type.scm 219 */
						BgL_nodez00_bglt BgL_arg5529z00_1914;

						BgL_arg5529z00_1914 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1910))->BgL_funz00);
						{	/* Cfa/type.scm 219 */
							obj_t BgL_method5298z00_2352;

							{	/* Cfa/type.scm 219 */
								BgL_objectz00_bglt BgL_objz00_2353;

								BgL_objz00_2353 = (BgL_objectz00_bglt) (BgL_arg5529z00_1914);
								{	/* Cfa/type.scm 219 */
									long BgL_objzd2classzd2numz00_2354;

									BgL_objzd2classzd2numz00_2354 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2353);
									{	/* Cfa/type.scm 219 */
										obj_t BgL_arg2643z00_2355;

										BgL_arg2643z00_2355 =
											PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
											(int) (((long) 1)));
										{	/* Cfa/type.scm 219 */
											obj_t BgL_arrayz00_2357;

											int BgL_offsetz00_2358;

											BgL_arrayz00_2357 = BgL_arg2643z00_2355;
											BgL_offsetz00_2358 =
												(int) (BgL_objzd2classzd2numz00_2354);
											{	/* Cfa/type.scm 219 */
												long BgL_offsetz00_2359;

												BgL_offsetz00_2359 =
													((long) (BgL_offsetz00_2358) - OBJECT_TYPE);
												{	/* Cfa/type.scm 219 */
													long BgL_modz00_2360;

													{	/* Cfa/type.scm 219 */
														int BgL_arg2645z00_2361;

														BgL_arg2645z00_2361 = (int) (((long) 16));
														{	/* Cfa/type.scm 219 */
															long BgL_auxz00_4245;

															BgL_auxz00_4245 = (long) (BgL_arg2645z00_2361);
															BgL_modz00_2360 =
																(BgL_offsetz00_2359 / BgL_auxz00_4245);
													}}
													{	/* Cfa/type.scm 219 */
														long BgL_restz00_2362;

														{	/* Cfa/type.scm 219 */
															int BgL_arg2644z00_2363;

															BgL_arg2644z00_2363 = (int) (((long) 16));
															{	/* Cfa/type.scm 219 */
																long BgL_auxz00_4249;

																BgL_auxz00_4249 = (long) (BgL_arg2644z00_2363);
																BgL_restz00_2362 =
																	(BgL_offsetz00_2359 % BgL_auxz00_4249);
														}}
														{	/* Cfa/type.scm 219 */

															BgL_method5298z00_2352 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2357,
																	(int) (BgL_modz00_2360)),
																(int) (BgL_restz00_2362));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5298z00_2352) (BgL_method5298z00_2352,
								(obj_t) (BgL_arg5529z00_1914), BEOA);
					}}
					{	/* Cfa/type.scm 220 */
						obj_t BgL_arg5530z00_1915;

						BgL_arg5530z00_1915 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1910))->BgL_argsz00);
						BgL_auxz00_4235 =
							BGl_typezd2nodeza2z12z62zzcfa_typez00(BgL_arg5530z00_1915);
					}
					return BBOOL(BgL_auxz00_4235);
				}
			}
		}
	}



/* type-node!-app-ly5312 */
	obj_t BGl_typezd2nodez12zd2appzd2ly5312zc0zzcfa_typez00(obj_t BgL_envz00_3186,
		obj_t BgL_nodez00_3187)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 209 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1902;

				BgL_nodez00_1902 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_3187);
				{	/* Cfa/type.scm 211 */
					BgL_nodez00_bglt BgL_arg5526z00_1906;

					BgL_arg5526z00_1906 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1902))->BgL_funz00);
					{	/* Cfa/type.scm 211 */
						obj_t BgL_method5298z00_2298;

						{	/* Cfa/type.scm 211 */
							BgL_objectz00_bglt BgL_objz00_2299;

							BgL_objz00_2299 = (BgL_objectz00_bglt) (BgL_arg5526z00_1906);
							{	/* Cfa/type.scm 211 */
								long BgL_objzd2classzd2numz00_2300;

								BgL_objzd2classzd2numz00_2300 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2299);
								{	/* Cfa/type.scm 211 */
									obj_t BgL_arg2643z00_2301;

									BgL_arg2643z00_2301 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
										(int) (((long) 1)));
									{	/* Cfa/type.scm 211 */
										obj_t BgL_arrayz00_2303;

										int BgL_offsetz00_2304;

										BgL_arrayz00_2303 = BgL_arg2643z00_2301;
										BgL_offsetz00_2304 = (int) (BgL_objzd2classzd2numz00_2300);
										{	/* Cfa/type.scm 211 */
											long BgL_offsetz00_2305;

											BgL_offsetz00_2305 =
												((long) (BgL_offsetz00_2304) - OBJECT_TYPE);
											{	/* Cfa/type.scm 211 */
												long BgL_modz00_2306;

												{	/* Cfa/type.scm 211 */
													int BgL_arg2645z00_2307;

													BgL_arg2645z00_2307 = (int) (((long) 16));
													{	/* Cfa/type.scm 211 */
														long BgL_auxz00_4272;

														BgL_auxz00_4272 = (long) (BgL_arg2645z00_2307);
														BgL_modz00_2306 =
															(BgL_offsetz00_2305 / BgL_auxz00_4272);
												}}
												{	/* Cfa/type.scm 211 */
													long BgL_restz00_2308;

													{	/* Cfa/type.scm 211 */
														int BgL_arg2644z00_2309;

														BgL_arg2644z00_2309 = (int) (((long) 16));
														{	/* Cfa/type.scm 211 */
															long BgL_auxz00_4276;

															BgL_auxz00_4276 = (long) (BgL_arg2644z00_2309);
															BgL_restz00_2308 =
																(BgL_offsetz00_2305 % BgL_auxz00_4276);
													}}
													{	/* Cfa/type.scm 211 */

														BgL_method5298z00_2298 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2303,
																(int) (BgL_modz00_2306)),
															(int) (BgL_restz00_2308));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_2298) (BgL_method5298z00_2298,
							(obj_t) (BgL_arg5526z00_1906), BEOA);
				}}
				{	/* Cfa/type.scm 212 */
					BgL_nodez00_bglt BgL_arg5527z00_1907;

					BgL_arg5527z00_1907 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1902))->BgL_argz00);
					{	/* Cfa/type.scm 212 */
						obj_t BgL_method5298z00_2325;

						{	/* Cfa/type.scm 212 */
							BgL_objectz00_bglt BgL_objz00_2326;

							BgL_objz00_2326 = (BgL_objectz00_bglt) (BgL_arg5527z00_1907);
							{	/* Cfa/type.scm 212 */
								long BgL_objzd2classzd2numz00_2327;

								BgL_objzd2classzd2numz00_2327 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2326);
								{	/* Cfa/type.scm 212 */
									obj_t BgL_arg2643z00_2328;

									BgL_arg2643z00_2328 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
										(int) (((long) 1)));
									{	/* Cfa/type.scm 212 */
										obj_t BgL_arrayz00_2330;

										int BgL_offsetz00_2331;

										BgL_arrayz00_2330 = BgL_arg2643z00_2328;
										BgL_offsetz00_2331 = (int) (BgL_objzd2classzd2numz00_2327);
										{	/* Cfa/type.scm 212 */
											long BgL_offsetz00_2332;

											BgL_offsetz00_2332 =
												((long) (BgL_offsetz00_2331) - OBJECT_TYPE);
											{	/* Cfa/type.scm 212 */
												long BgL_modz00_2333;

												{	/* Cfa/type.scm 212 */
													int BgL_arg2645z00_2334;

													BgL_arg2645z00_2334 = (int) (((long) 16));
													{	/* Cfa/type.scm 212 */
														long BgL_auxz00_4295;

														BgL_auxz00_4295 = (long) (BgL_arg2645z00_2334);
														BgL_modz00_2333 =
															(BgL_offsetz00_2332 / BgL_auxz00_4295);
												}}
												{	/* Cfa/type.scm 212 */
													long BgL_restz00_2335;

													{	/* Cfa/type.scm 212 */
														int BgL_arg2644z00_2336;

														BgL_arg2644z00_2336 = (int) (((long) 16));
														{	/* Cfa/type.scm 212 */
															long BgL_auxz00_4299;

															BgL_auxz00_4299 = (long) (BgL_arg2644z00_2336);
															BgL_restz00_2335 =
																(BgL_offsetz00_2332 % BgL_auxz00_4299);
													}}
													{	/* Cfa/type.scm 212 */

														BgL_method5298z00_2325 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2330,
																(int) (BgL_modz00_2333)),
															(int) (BgL_restz00_2335));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_2325) (BgL_method5298z00_2325,
							(obj_t) (BgL_arg5527z00_1907), BEOA);
					}
				}
			}
		}
	}



/* type-node!-app5310 */
	obj_t BGl_typezd2nodez12zd2app5310z12zzcfa_typez00(obj_t BgL_envz00_3188,
		obj_t BgL_nodez00_3189)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 202 */
			{
				BgL_appz00_bglt BgL_nodez00_1895;

				{	/* Cfa/type.scm 203 */
					bool_t BgL_auxz00_4310;

					BgL_nodez00_1895 = (BgL_appz00_bglt) (BgL_nodez00_3189);
					{	/* Cfa/type.scm 203 */
						obj_t BgL_arg5524z00_2294;

						BgL_arg5524z00_2294 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1895))->BgL_argsz00);
						BgL_auxz00_4310 =
							BGl_typezd2nodeza2z12z62zzcfa_typez00(BgL_arg5524z00_2294);
					}
					return BBOOL(BgL_auxz00_4310);
				}
			}
		}
	}



/* type-node!-sequence5308 */
	obj_t BGl_typezd2nodez12zd2sequence5308z12zzcfa_typez00(obj_t BgL_envz00_3190,
		obj_t BgL_nodez00_3191)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 195 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1888;

				{	/* Cfa/type.scm 196 */
					bool_t BgL_auxz00_4315;

					BgL_nodez00_1888 = (BgL_sequencez00_bglt) (BgL_nodez00_3191);
					{	/* Cfa/type.scm 196 */
						obj_t BgL_arg5522z00_2291;

						BgL_arg5522z00_2291 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1888))->BgL_nodesz00);
						BgL_auxz00_4315 =
							BGl_typezd2nodeza2z12z62zzcfa_typez00(BgL_arg5522z00_2291);
					}
					return BBOOL(BgL_auxz00_4315);
				}
			}
		}
	}



/* type-node!-closure5306 */
	obj_t BGl_typezd2nodez12zd2closure5306z12zzcfa_typez00(obj_t BgL_envz00_3192,
		obj_t BgL_nodez00_3193)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 189 */
			{
				BgL_closurez00_bglt BgL_nodez00_1880;

				BgL_nodez00_1880 = (BgL_closurez00_bglt) (BgL_nodez00_3193);
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string5657z00zzcfa_typez00, BGl_string5687z00zzcfa_typez00,
					BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_1880)));
			}
		}
	}



/* type-node!-var5304 */
	obj_t BGl_typezd2nodez12zd2var5304z12zzcfa_typez00(obj_t BgL_envz00_3194,
		obj_t BgL_nodez00_3195)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 179 */
			{
				BgL_varz00_bglt BgL_nodez00_1859;

				BgL_nodez00_1859 = (BgL_varz00_bglt) (BgL_nodez00_3195);
				{	/* Cfa/type.scm 181 */
					bool_t BgL_testz00_4324;

					{	/* Cfa/type.scm 181 */
						bool_t BgL_testz00_4325;

						{	/* Cfa/type.scm 181 */
							BgL_variablez00_bglt BgL_arg5510z00_1871;

							BgL_arg5510z00_1871 =
								(((BgL_varz00_bglt) CREF(BgL_nodez00_1859))->BgL_variablez00);
							{	/* Cfa/type.scm 181 */
								obj_t BgL_obj1751z00_2251;

								BgL_obj1751z00_2251 = (obj_t) (BgL_arg5510z00_1871);
								BgL_testz00_4325 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_2251,
									BGl_globalz00zzast_varz00);
							}
						}
						if (BgL_testz00_4325)
							{	/* Cfa/type.scm 181 */
								obj_t BgL_auxz00_4329;

								{	/* Cfa/type.scm 181 */
									BgL_globalz00_bglt BgL_obj1679z00_2253;

									BgL_obj1679z00_2253 =
										(BgL_globalz00_bglt) (
										(((BgL_varz00_bglt) CREF(BgL_nodez00_1859))->
											BgL_variablez00));
									BgL_auxz00_4329 =
										(((BgL_globalz00_bglt) CREF(BgL_obj1679z00_2253))->
										BgL_importz00);
								}
								BgL_testz00_4324 =
									(BgL_auxz00_4329 == CNST_TABLE_REF(((long) 3)));
							}
						else
							{	/* Cfa/type.scm 181 */
								BgL_testz00_4324 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_4324)
						{	/* Cfa/type.scm 182 */
							BgL_valuez00_bglt BgL_arg5503z00_1864;

							BgL_variablez00_bglt BgL_arg5504z00_1865;

							{	/* Cfa/type.scm 182 */
								BgL_variablez00_bglt BgL_obj1611z00_2255;

								BgL_obj1611z00_2255 =
									(((BgL_varz00_bglt) CREF(BgL_nodez00_1859))->BgL_variablez00);
								BgL_arg5503z00_1864 =
									(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_2255))->
									BgL_valuez00);
							}
							BgL_arg5504z00_1865 =
								(((BgL_varz00_bglt) CREF(BgL_nodez00_1859))->BgL_variablez00);
							{	/* Cfa/type.scm 182 */
								obj_t BgL_method5286z00_2259;

								{	/* Cfa/type.scm 182 */
									BgL_objectz00_bglt BgL_objz00_2260;

									BgL_objz00_2260 = (BgL_objectz00_bglt) (BgL_arg5503z00_1864);
									{	/* Cfa/type.scm 182 */
										long BgL_objzd2classzd2numz00_2261;

										BgL_objzd2classzd2numz00_2261 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2260);
										{	/* Cfa/type.scm 182 */
											obj_t BgL_arg2643z00_2262;

											BgL_arg2643z00_2262 =
												PROCEDURE_REF
												(BGl_typezd2variablez12zd2envz12zzcfa_typez00,
												(int) (((long) 1)));
											{	/* Cfa/type.scm 182 */
												obj_t BgL_arrayz00_2264;

												int BgL_offsetz00_2265;

												BgL_arrayz00_2264 = BgL_arg2643z00_2262;
												BgL_offsetz00_2265 =
													(int) (BgL_objzd2classzd2numz00_2261);
												{	/* Cfa/type.scm 182 */
													long BgL_offsetz00_2266;

													BgL_offsetz00_2266 =
														((long) (BgL_offsetz00_2265) - OBJECT_TYPE);
													{	/* Cfa/type.scm 182 */
														long BgL_modz00_2267;

														{	/* Cfa/type.scm 182 */
															int BgL_arg2645z00_2268;

															BgL_arg2645z00_2268 = (int) (((long) 16));
															{	/* Cfa/type.scm 182 */
																long BgL_auxz00_4346;

																BgL_auxz00_4346 = (long) (BgL_arg2645z00_2268);
																BgL_modz00_2267 =
																	(BgL_offsetz00_2266 / BgL_auxz00_4346);
														}}
														{	/* Cfa/type.scm 182 */
															long BgL_restz00_2269;

															{	/* Cfa/type.scm 182 */
																int BgL_arg2644z00_2270;

																BgL_arg2644z00_2270 = (int) (((long) 16));
																{	/* Cfa/type.scm 182 */
																	long BgL_auxz00_4350;

																	BgL_auxz00_4350 =
																		(long) (BgL_arg2644z00_2270);
																	BgL_restz00_2269 =
																		(BgL_offsetz00_2266 % BgL_auxz00_4350);
															}}
															{	/* Cfa/type.scm 182 */

																BgL_method5286z00_2259 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2264,
																		(int) (BgL_modz00_2267)),
																	(int) (BgL_restz00_2269));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method5286z00_2259) (BgL_method5286z00_2259,
									(obj_t) (BgL_arg5503z00_1864),
									(obj_t) (BgL_arg5504z00_1865), BEOA);
						}}
					else
						{	/* Cfa/type.scm 181 */
							BFALSE;
						}
				}
				{	/* Cfa/type.scm 183 */
					bool_t BgL_testz00_4361;

					{	/* Cfa/type.scm 183 */
						bool_t BgL_testz00_4362;

						{	/* Cfa/type.scm 183 */
							BgL_typez00_bglt BgL_arg5516z00_1877;

							{
								BgL_nodez00_bglt BgL_auxz00_4363;

								BgL_auxz00_4363 = (BgL_nodez00_bglt) (BgL_nodez00_1859);
								BgL_arg5516z00_1877 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4363))->BgL_typez00);
							}
							BgL_testz00_4362 =
								(
								(obj_t) (BgL_arg5516z00_1877) == BGl_za2_za2z00zztype_cachez00);
						}
						if (BgL_testz00_4362)
							{	/* Cfa/type.scm 183 */
								BgL_testz00_4361 = ((bool_t) 1);
							}
						else
							{	/* Cfa/type.scm 183 */
								BgL_typez00_bglt BgL_arg5515z00_1876;

								{
									BgL_nodez00_bglt BgL_auxz00_4368;

									BgL_auxz00_4368 = (BgL_nodez00_bglt) (BgL_nodez00_1859);
									BgL_arg5515z00_1876 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_4368))->BgL_typez00);
								}
								BgL_testz00_4361 =
									(
									(obj_t) (BgL_arg5515z00_1876) ==
									BGl_za2vectorza2z00zztype_cachez00);
							}
					}
					if (BgL_testz00_4361)
						{	/* Cfa/type.scm 184 */
							BgL_typez00_bglt BgL_arg5512z00_1873;

							{	/* Cfa/type.scm 184 */
								BgL_variablez00_bglt BgL_obj1608z00_2287;

								BgL_obj1608z00_2287 =
									(((BgL_varz00_bglt) CREF(BgL_nodez00_1859))->BgL_variablez00);
								BgL_arg5512z00_1873 =
									(((BgL_variablez00_bglt) CREF(BgL_obj1608z00_2287))->
									BgL_typez00);
							}
							{
								BgL_nodez00_bglt BgL_auxz00_4375;

								BgL_auxz00_4375 = (BgL_nodez00_bglt) (BgL_nodez00_1859);
								return
									((((BgL_nodez00_bglt) CREF(BgL_auxz00_4375))->BgL_typez00) =
									((BgL_typez00_bglt) BgL_arg5512z00_1873), BUNSPEC);
							}
						}
					else
						{	/* Cfa/type.scm 183 */
							return BFALSE;
						}
				}
			}
		}
	}



/* type-node!-kwote5302 */
	obj_t BGl_typezd2nodez12zd2kwote5302z12zzcfa_typez00(obj_t BgL_envz00_3196,
		obj_t BgL_nodez00_3197)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 173 */
			return BUNSPEC;
		}
	}



/* type-node!-atom5300 */
	obj_t BGl_typezd2nodez12zd2atom5300z12zzcfa_typez00(obj_t BgL_envz00_3198,
		obj_t BgL_nodez00_3199)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 167 */
			return BUNSPEC;
		}
	}



/* type-variable!-inter5296 */
	obj_t BGl_typezd2variablez12zd2inter5296z12zzcfa_typez00(obj_t
		BgL_envz00_3200, obj_t BgL_valuez00_3201, obj_t BgL_variablez00_3202)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 130 */
			{	/* Cfa/type.scm 131 */
				obj_t BgL_res5692z00_3227;

				BgL_res5692z00_3227 = CNST_TABLE_REF(((long) 1));
				return BgL_res5692z00_3227;
			}
		}
	}



/* type-variable!-sexit5294 */
	obj_t BGl_typezd2variablez12zd2sexit5294z12zzcfa_typez00(obj_t
		BgL_envz00_3203, obj_t BgL_valuez00_3204, obj_t BgL_variablez00_3205)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 120 */
			{	/* Cfa/type.scm 121 */
				obj_t BgL_res5693z00_3230;

				BgL_res5693z00_3230 = CNST_TABLE_REF(((long) 1));
				return BgL_res5693z00_3230;
			}
		}
	}



/* type-variable!-cvar/5292 */
	obj_t BGl_typezd2variablez12zd2cvarzf25292ze0zzcfa_typez00(obj_t
		BgL_envz00_3206, obj_t BgL_valuez00_3207, obj_t BgL_variablez00_3208)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 113 */
			{
				BgL_cvarzf2cinfozf2_bglt BgL_valuez00_1828;

				obj_t BgL_variablez00_1829;

				BgL_valuez00_1828 = (BgL_cvarzf2cinfozf2_bglt) (BgL_valuez00_3207);
				BgL_variablez00_1829 = BgL_variablez00_3208;
				{	/* Cfa/type.scm 114 */
					obj_t BgL_arg5495z00_2247;

					{	/* Cfa/type.scm 114 */
						BgL_approxz00_bglt BgL_arg5496z00_2248;

						{
							obj_t BgL_auxz00_4381;

							{	/* Cfa/type.scm 114 */
								BgL_objectz00_bglt BgL_auxz00_4382;

								BgL_auxz00_4382 = (BgL_objectz00_bglt) (BgL_valuez00_1828);
								BgL_auxz00_4381 = BGL_OBJECT_WIDENING(BgL_auxz00_4382);
							}
							BgL_arg5496z00_2248 =
								(((BgL_cvarzf2cinfozf2_bglt) CREF(BgL_auxz00_4381))->
								BgL_approxz00);
						}
						BgL_arg5495z00_2247 =
							BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_arg5496z00_2248);
					}
					return
						BGl_setzd2variablezd2typez12z12zzcfa_typez00(
						(BgL_variablez00_bglt) (BgL_variablez00_1829),
						(BgL_typez00_bglt) (BgL_arg5495z00_2247));
				}
			}
		}
	}



/* type-variable!-scnst5290 */
	obj_t BGl_typezd2variablez12zd2scnst5290z12zzcfa_typez00(obj_t
		BgL_envz00_3209, obj_t BgL_valuez00_3210, obj_t BgL_variablez00_3211)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 107 */
			{	/* Cfa/type.scm 108 */
				obj_t BgL_res5694z00_3233;

				BgL_res5694z00_3233 = CNST_TABLE_REF(((long) 1));
				return BgL_res5694z00_3233;
			}
		}
	}



/* type-variable!-svar/5288 */
	obj_t BGl_typezd2variablez12zd2svarzf25288ze0zzcfa_typez00(obj_t
		BgL_envz00_3212, obj_t BgL_valuez00_3213, obj_t BgL_variablez00_3214)
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 100 */
			{
				BgL_svarzf2cinfozf2_bglt BgL_valuez00_1813;

				obj_t BgL_variablez00_1814;

				BgL_valuez00_1813 = (BgL_svarzf2cinfozf2_bglt) (BgL_valuez00_3213);
				BgL_variablez00_1814 = BgL_variablez00_3214;
				{	/* Cfa/type.scm 101 */
					obj_t BgL_arg5491z00_2243;

					{	/* Cfa/type.scm 101 */
						BgL_approxz00_bglt BgL_arg5492z00_2244;

						{
							obj_t BgL_auxz00_4392;

							{	/* Cfa/type.scm 101 */
								BgL_objectz00_bglt BgL_auxz00_4393;

								BgL_auxz00_4393 = (BgL_objectz00_bglt) (BgL_valuez00_1813);
								BgL_auxz00_4392 = BGL_OBJECT_WIDENING(BgL_auxz00_4393);
							}
							BgL_arg5492z00_2244 =
								(((BgL_svarzf2cinfozf2_bglt) CREF(BgL_auxz00_4392))->
								BgL_approxz00);
						}
						BgL_arg5491z00_2243 =
							BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_arg5492z00_2244);
					}
					return
						BGl_setzd2variablezd2typez12z12zzcfa_typez00(
						(BgL_variablez00_bglt) (BgL_variablez00_1814),
						(BgL_typez00_bglt) (BgL_arg5491z00_2243));
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_typez00()
	{
		AN_OBJECT;
		{	/* Cfa/type.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5688z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string5688z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string5688z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string5688z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string5688z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5688z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5688z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string5688z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string5688z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zzcfa_info3z00(((long) 0),
				BSTRING_TO_STRING(BGl_string5688z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zzcfa_setz00(((long) 474371048),
				BSTRING_TO_STRING(BGl_string5688z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(((long) 249450490),
				BSTRING_TO_STRING(BGl_string5688z00zzcfa_typez00));
			return
				BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 2222742),
				BSTRING_TO_STRING(BGl_string5688z00zzcfa_typez00));
		}
	}

#ifdef __cplusplus
}
#endif
