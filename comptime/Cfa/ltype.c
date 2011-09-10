/*===========================================================================*/
/*   (Cfa/ltype.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/ltype.scm)*/
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


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_vrefz00zzast_nodez00;
	extern obj_t BGl_sexitzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl__typezd2nodez12zd2default5297z12zzcfa_ltypez00(obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t
		BGl_typezd2nodez12zd2default5297z12zzcfa_ltypez00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__typezd2variablez12zc0zzcfa_ltypez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2procedurezd2el1za2zd2zztype_cachez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t BGl_typezd2nodez12zd2atom5300z12zzcfa_ltypez00(obj_t, obj_t);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_typezd2nodez12zd2funcall5314z12zzcfa_ltypez00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcfa_ltypez00();
	extern obj_t BGl_cvarzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_typezd2nodez12zd2app5310z12zzcfa_ltypez00(obj_t, obj_t);
	static obj_t BGl_typezd2nodez12zd2vsetz125320z00zzcfa_ltypez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2procedurezd2elza2zd2zztype_cachez00;
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t BGl_typezd2nodez12zd2makezd2box5340zc0zzcfa_ltypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_ltypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_closurez00(long, char *);
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
	static obj_t BGl_toplevelzd2initzd2zzcfa_ltypez00();
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00;
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_typezd2nodez12zd2boxzd2ref5344zc0zzcfa_ltypez00(obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_typezd2nodez12zd2jumpzd2exzd2i5338z12zzcfa_ltypez00(obj_t,
		obj_t);
	static obj_t BGl_typezd2nodez12zd2cast5322z12zzcfa_ltypez00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_valuez00zzast_varz00;
	static obj_t BGl_getzd2approxzd2typez00zzcfa_ltypez00(BgL_approxz00_bglt);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_typezd2variablez12zd2cvarzf25292ze0zzcfa_ltypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_typezd2variablez12zd2sexit5294z12zzcfa_ltypez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_typezd2nodez12zd2var5304z12zzcfa_ltypez00(obj_t, obj_t);
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t BGl_typezd2nodez12zd2vref5318z12zzcfa_ltypez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_ltypez00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_typezd2nodez12zd2extern5316z12zzcfa_ltypez00(obj_t, obj_t);
	static obj_t BGl_typezd2nodez12zd2setq5324z12zzcfa_ltypez00(obj_t, obj_t);
	static obj_t BGl_typezd2nodez12zc0zzcfa_ltypez00(BgL_nodez00_bglt);
	static obj_t
		BGl_typezd2variablez12zd2defau5285z12zzcfa_ltypez00(BgL_valuez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_typezd2nodez12zd2appzd2ly5312zc0zzcfa_ltypez00(obj_t, obj_t);
	static obj_t BGl_typezd2nodez12zd2condition5326z12zzcfa_ltypez00(obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern bool_t
		BGl_approxzd2procedurezd2elzf3zf3zzcfa_closurez00(BgL_approxz00_bglt);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_ltypez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzcfa_ltypez00();
	static obj_t BGl_typezd2variablez12zd2inter5296z12zzcfa_ltypez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_typezd2nodez12zd2letzd2fun5332zc0zzcfa_ltypez00(obj_t,
		obj_t);
	static obj_t BGl_typezd2nodez12zd2closure5306z12zzcfa_ltypez00(obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_typezd2variablez12zc0zzcfa_ltypez00(BgL_valuez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_typezd2nodez12zd2letzd2var5334zc0zzcfa_ltypez00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_ltypez00();
	static bool_t BGl_typezd2nodeza2z12z62zzcfa_ltypez00(obj_t);
	static obj_t BGl_typezd2nodez12zd2kwote5302z12zzcfa_ltypez00(obj_t, obj_t);
	static obj_t BGl_typezd2nodez12zd2fail5328z12zzcfa_ltypez00(obj_t, obj_t);
	extern obj_t BGl_svarzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_lightzd2typez12zc0zzcfa_ltypez00(obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_typezd2nodez12zd2setzd2exzd2it5336z12zzcfa_ltypez00(obj_t,
		obj_t);
	static obj_t BGl_typezd2nodez12zd2select5330z12zzcfa_ltypez00(obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t
		BGl_approxzd2procedurezd2el1zf3zf3zzcfa_closurez00(BgL_approxz00_bglt);
	static obj_t BGl__typezd2variablez12zd2defau5285z12zzcfa_ltypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__typezd2nodez12zc0zzcfa_ltypez00(obj_t, obj_t);
	static obj_t BGl__lightzd2typez12zc0zzcfa_ltypez00(obj_t, obj_t);
	static obj_t BGl_typezd2nodez12zd2sequence5308z12zzcfa_ltypez00(obj_t, obj_t);
	static obj_t BGl_typezd2variablez12zd2svarzf25288ze0zzcfa_ltypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_ltypez00();
	static obj_t BGl_typezd2nodez12zd2boxzd2setz125342zd2zzcfa_ltypez00(obj_t,
		obj_t);
	static obj_t BGl_typezd2variablez12zd2scnst5290z12zzcfa_ltypez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_scnstzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_lightzd2typezd2funz12z12zzcfa_ltypez00(BgL_variablez00_bglt);
	static obj_t __cnst[3];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_typezd2variablez12zd2defau5285zd2envzc0zzcfa_ltypez00,
		BgL_bgl__typeza7d2variable5671za7,
		BGl__typezd2variablez12zd2defau5285z12zzcfa_ltypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_GENERIC(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
		BgL_bgl__typeza7d2nodeza712za75672za7, BGl__typezd2nodez12zc0zzcfa_ltypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_typezd2variablez12zd2envz12zzcfa_ltypez00,
		BgL_bgl__typeza7d2variable5673za7, BGl__typezd2variablez12zc0zzcfa_ltypez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5635z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2variableza75674z00,
		BGl_typezd2variablez12zd2svarzf25288ze0zzcfa_ltypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5636z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2variableza75675z00,
		BGl_typezd2variablez12zd2scnst5290z12zzcfa_ltypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5637z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2variableza75676z00,
		BGl_typezd2variablez12zd2cvarzf25292ze0zzcfa_ltypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5638z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2variableza75677z00,
		BGl_typezd2variablez12zd2sexit5294z12zzcfa_ltypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5640z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5678za7,
		BGl_typezd2nodez12zd2atom5300z12zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5639z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2variableza75679z00,
		BGl_typezd2variablez12zd2inter5296z12zzcfa_ltypez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5641z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5680za7,
		BGl_typezd2nodez12zd2kwote5302z12zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5642z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5681za7,
		BGl_typezd2nodez12zd2var5304z12zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5643z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5682za7,
		BGl_typezd2nodez12zd2closure5306z12zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5644z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5683za7,
		BGl_typezd2nodez12zd2sequence5308z12zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5645z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5684za7,
		BGl_typezd2nodez12zd2app5310z12zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5646z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5685za7,
		BGl_typezd2nodez12zd2appzd2ly5312zc0zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5647z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5686za7,
		BGl_typezd2nodez12zd2funcall5314z12zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5648z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5687za7,
		BGl_typezd2nodez12zd2extern5316z12zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5650z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5688za7,
		BGl_typezd2nodez12zd2vsetz125320z00zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5649z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5689za7,
		BGl_typezd2nodez12zd2vref5318z12zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5651z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5690za7,
		BGl_typezd2nodez12zd2cast5322z12zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5652z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5691za7,
		BGl_typezd2nodez12zd2setq5324z12zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5653z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5692za7,
		BGl_typezd2nodez12zd2condition5326z12zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5654z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5693za7,
		BGl_typezd2nodez12zd2fail5328z12zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5655z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5694za7,
		BGl_typezd2nodez12zd2select5330z12zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5656z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5695za7,
		BGl_typezd2nodez12zd2letzd2fun5332zc0zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5657z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5696za7,
		BGl_typezd2nodez12zd2letzd2var5334zc0zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5658z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5697za7,
		BGl_typezd2nodez12zd2setzd2exzd2it5336z12zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5660z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5698za7,
		BGl_typezd2nodez12zd2makezd2box5340zc0zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5659z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5699za7,
		BGl_typezd2nodez12zd2jumpzd2exzd2i5338z12zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5661z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5700za7,
		BGl_typezd2nodez12zd2boxzd2setz125342zd2zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5662z00zzcfa_ltypez00,
		BgL_bgl_typeza7d2nodeza712za7d5701za7,
		BGl_typezd2nodez12zd2boxzd2ref5344zc0zzcfa_ltypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_typezd2nodez12zd2default5297zd2envzc0zzcfa_ltypez00,
		BgL_bgl__typeza7d2nodeza712za75702za7,
		BGl__typezd2nodez12zd2default5297z12zzcfa_ltypez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string5632z00zzcfa_ltypez00,
		BgL_bgl_string5632za700za7za7c5703za7, "type-variable!", 14);
	      DEFINE_STRING(BGl_string5633z00zzcfa_ltypez00,
		BgL_bgl_string5633za700za7za7c5704za7, "type-node!", 10);
	      DEFINE_STRING(BGl_string5634z00zzcfa_ltypez00,
		BgL_bgl_string5634za700za7za7c5705za7, "No method for this object", 25);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_lightzd2typez12zd2envz12zzcfa_ltypez00,
		BgL_bgl__lightza7d2typeza7125706z00, BGl__lightzd2typez12zc0zzcfa_ltypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string5663z00zzcfa_ltypez00,
		BgL_bgl_string5663za700za7za7c5707za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string5664z00zzcfa_ltypez00,
		BgL_bgl_string5664za700za7za7c5708za7, "cfa_ltype", 9);
	      DEFINE_STRING(BGl_string5665z00zzcfa_ltypez00,
		BgL_bgl_string5665za700za7za7c5709za7,
		"static type-node!-default5297 nothing ", 38);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_ltypez00(long
		BgL_checksumz00_3180, char *BgL_fromz00_3181)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_ltypez00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_ltypez00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_ltypez00();
					BGl_cnstzd2initzd2zzcfa_ltypez00();
					BGl_importedzd2moduleszd2initz00zzcfa_ltypez00();
					BGl_genericzd2initzd2zzcfa_ltypez00();
					BGl_methodzd2initzd2zzcfa_ltypez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_ltypez00()
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_ltype");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_ltype");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cfa_ltype");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_ltypez00()
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 15 */
			{	/* Cfa/ltype.scm 15 */
				obj_t BgL_cportz00_3161;

				BgL_cportz00_3161 =
					bgl_open_input_string(BGl_string5665z00zzcfa_ltypez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_3162;

					BgL_iz00_3162 = ((long) 2);
				BgL_loopz00_3163:
					if ((BgL_iz00_3162 == ((long) -1)))
						{	/* Cfa/ltype.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/ltype.scm 15 */
							{	/* Cfa/ltype.scm 15 */
								obj_t BgL_arg5667z00_3165;

								{	/* Cfa/ltype.scm 15 */

									{	/* Cfa/ltype.scm 15 */
										obj_t BgL_locationz00_3167;

										BgL_locationz00_3167 = BBOOL(((bool_t) 0));
										{	/* Cfa/ltype.scm 15 */

											BgL_arg5667z00_3165 =
												BGl_readz00zz__readerz00(BgL_cportz00_3161,
												BgL_locationz00_3167);
										}
									}
								}
								{	/* Cfa/ltype.scm 15 */
									int BgL_auxz00_3199;

									BgL_auxz00_3199 = (int) (BgL_iz00_3162);
									CNST_TABLE_SET(BgL_auxz00_3199, BgL_arg5667z00_3165);
							}}
							{	/* Cfa/ltype.scm 15 */
								int BgL_auxz00_3168;

								BgL_auxz00_3168 = (int) ((BgL_iz00_3162 - ((long) 1)));
								{
									long BgL_iz00_3204;

									BgL_iz00_3204 = (long) (BgL_auxz00_3168);
									BgL_iz00_3162 = BgL_iz00_3204;
									goto BgL_loopz00_3163;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_ltypez00()
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 15 */
			return BUNSPEC;
		}
	}



/* light-type! */
	BGL_EXPORTED_DEF obj_t BGl_lightzd2typez12zc0zzcfa_ltypez00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 37 */
			{
				obj_t BgL_l5269z00_1169;

				{	/* Cfa/ltype.scm 38 */
					bool_t BgL_auxz00_3206;

					BgL_l5269z00_1169 = BgL_globalsz00_1;
				BgL_zc3anonymousza35345ze3z83_1170:
					if (PAIRP(BgL_l5269z00_1169))
						{	/* Cfa/ltype.scm 38 */
							{	/* Cfa/ltype.scm 38 */
								obj_t BgL_arg5347z00_1172;

								BgL_arg5347z00_1172 = CAR(BgL_l5269z00_1169);
								BGl_lightzd2typezd2funz12z12zzcfa_ltypez00(
									(BgL_variablez00_bglt) (BgL_arg5347z00_1172));
							}
							{
								obj_t BgL_l5269z00_3212;

								BgL_l5269z00_3212 = CDR(BgL_l5269z00_1169);
								BgL_l5269z00_1169 = BgL_l5269z00_3212;
								goto BgL_zc3anonymousza35345ze3z83_1170;
							}
						}
					else
						{	/* Cfa/ltype.scm 38 */
							BgL_auxz00_3206 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_3206);
				}
			}
		}
	}



/* _light-type! */
	obj_t BGl__lightzd2typez12zc0zzcfa_ltypez00(obj_t BgL_envz00_3060,
		obj_t BgL_globalsz00_3061)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 37 */
			return BGl_lightzd2typez12zc0zzcfa_ltypez00(BgL_globalsz00_3061);
		}
	}



/* light-type-fun! */
	obj_t BGl_lightzd2typezd2funz12z12zzcfa_ltypez00(BgL_variablez00_bglt
		BgL_varz00_2)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 43 */
			{	/* Cfa/ltype.scm 44 */
				BgL_valuez00_bglt BgL_funz00_1175;

				BgL_funz00_1175 =
					(((BgL_variablez00_bglt) CREF(BgL_varz00_2))->BgL_valuez00);
				{	/* Cfa/ltype.scm 45 */
					bool_t BgL_testz00_3217;

					{	/* Cfa/ltype.scm 45 */
						obj_t BgL_obj3414z00_2030;

						BgL_obj3414z00_2030 = (obj_t) (BgL_funz00_1175);
						BgL_testz00_3217 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj3414z00_2030,
							BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00);
					}
					if (BgL_testz00_3217)
						{	/* Cfa/ltype.scm 48 */
							BgL_internzd2sfunzf2cinfoz20_bglt BgL_instance5223z00_1177;

							BgL_instance5223z00_1177 =
								(BgL_internzd2sfunzf2cinfoz20_bglt) (BgL_funz00_1175);
							{	/* Cfa/ltype.scm 50 */
								obj_t BgL_g5273z00_1178;

								{
									BgL_sfunz00_bglt BgL_auxz00_3221;

									BgL_auxz00_3221 =
										(BgL_sfunz00_bglt) (BgL_instance5223z00_1177);
									BgL_g5273z00_1178 =
										(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3221))->BgL_argsz00);
								}
								{
									obj_t BgL_l5271z00_1180;

									BgL_l5271z00_1180 = BgL_g5273z00_1178;
								BgL_zc3anonymousza35350ze3z83_1181:
									if (PAIRP(BgL_l5271z00_1180))
										{	/* Cfa/ltype.scm 50 */
											{	/* Cfa/ltype.scm 51 */
												obj_t BgL_varz00_1183;

												BgL_varz00_1183 = CAR(BgL_l5271z00_1180);
												{	/* Cfa/ltype.scm 51 */
													BgL_valuez00_bglt BgL_arg5352z00_1184;

													{
														BgL_variablez00_bglt BgL_auxz00_3227;

														BgL_auxz00_3227 =
															(BgL_variablez00_bglt) (BgL_varz00_1183);
														BgL_arg5352z00_1184 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_3227))->
															BgL_valuez00);
													}
													{	/* Cfa/ltype.scm 51 */
														BgL_variablez00_bglt BgL_variablez00_2036;

														BgL_variablez00_2036 =
															(BgL_variablez00_bglt) (BgL_varz00_1183);
														{	/* Cfa/ltype.scm 51 */
															obj_t BgL_method5286z00_2037;

															{	/* Cfa/ltype.scm 51 */
																BgL_objectz00_bglt BgL_objz00_2038;

																BgL_objz00_2038 =
																	(BgL_objectz00_bglt) (BgL_arg5352z00_1184);
																{	/* Cfa/ltype.scm 51 */
																	long BgL_objzd2classzd2numz00_2039;

																	BgL_objzd2classzd2numz00_2039 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2038);
																	{	/* Cfa/ltype.scm 51 */
																		obj_t BgL_arg2643z00_2040;

																		BgL_arg2643z00_2040 =
																			PROCEDURE_REF
																			(BGl_typezd2variablez12zd2envz12zzcfa_ltypez00,
																			(int) (((long) 1)));
																		{	/* Cfa/ltype.scm 51 */
																			obj_t BgL_arrayz00_2042;

																			int BgL_offsetz00_2043;

																			BgL_arrayz00_2042 = BgL_arg2643z00_2040;
																			BgL_offsetz00_2043 =
																				(int) (BgL_objzd2classzd2numz00_2039);
																			{	/* Cfa/ltype.scm 51 */
																				long BgL_offsetz00_2044;

																				BgL_offsetz00_2044 =
																					(
																					(long) (BgL_offsetz00_2043) -
																					OBJECT_TYPE);
																				{	/* Cfa/ltype.scm 51 */
																					long BgL_modz00_2045;

																					{	/* Cfa/ltype.scm 51 */
																						int BgL_arg2645z00_2046;

																						BgL_arg2645z00_2046 =
																							(int) (((long) 16));
																						{	/* Cfa/ltype.scm 51 */
																							long BgL_auxz00_3239;

																							BgL_auxz00_3239 =
																								(long) (BgL_arg2645z00_2046);
																							BgL_modz00_2045 =
																								(BgL_offsetz00_2044 /
																								BgL_auxz00_3239);
																					}}
																					{	/* Cfa/ltype.scm 51 */
																						long BgL_restz00_2047;

																						{	/* Cfa/ltype.scm 51 */
																							int BgL_arg2644z00_2048;

																							BgL_arg2644z00_2048 =
																								(int) (((long) 16));
																							{	/* Cfa/ltype.scm 51 */
																								long BgL_auxz00_3243;

																								BgL_auxz00_3243 =
																									(long) (BgL_arg2644z00_2048);
																								BgL_restz00_2047 =
																									(BgL_offsetz00_2044 %
																									BgL_auxz00_3243);
																						}}
																						{	/* Cfa/ltype.scm 51 */

																							BgL_method5286z00_2037 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2042,
																									(int) (BgL_modz00_2045)),
																								(int) (BgL_restz00_2047));
															}}}}}}}}
															PROCEDURE_ENTRY(BgL_method5286z00_2037)
																(BgL_method5286z00_2037,
																(obj_t) (BgL_arg5352z00_1184),
																(obj_t) (BgL_variablez00_2036), BEOA);
											}}}}
											{
												obj_t BgL_l5271z00_3254;

												BgL_l5271z00_3254 = CDR(BgL_l5271z00_1180);
												BgL_l5271z00_1180 = BgL_l5271z00_3254;
												goto BgL_zc3anonymousza35350ze3z83_1181;
											}
										}
									else
										{	/* Cfa/ltype.scm 50 */
											((bool_t) 1);
										}
								}
							}
							{	/* Cfa/ltype.scm 54 */
								obj_t BgL_arg5354z00_1187;

								{
									BgL_sfunz00_bglt BgL_auxz00_3256;

									BgL_auxz00_3256 =
										(BgL_sfunz00_bglt) (BgL_instance5223z00_1177);
									BgL_arg5354z00_1187 =
										(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3256))->BgL_bodyz00);
								}
								{	/* Cfa/ltype.scm 54 */
									BgL_nodez00_bglt BgL_nodez00_2064;

									BgL_nodez00_2064 = (BgL_nodez00_bglt) (BgL_arg5354z00_1187);
									{	/* Cfa/ltype.scm 54 */
										obj_t BgL_method5298z00_2065;

										{	/* Cfa/ltype.scm 54 */
											BgL_objectz00_bglt BgL_objz00_2066;

											BgL_objz00_2066 = (BgL_objectz00_bglt) (BgL_nodez00_2064);
											{	/* Cfa/ltype.scm 54 */
												long BgL_objzd2classzd2numz00_2067;

												BgL_objzd2classzd2numz00_2067 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2066);
												{	/* Cfa/ltype.scm 54 */
													obj_t BgL_arg2643z00_2068;

													BgL_arg2643z00_2068 =
														PROCEDURE_REF
														(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
														(int) (((long) 1)));
													{	/* Cfa/ltype.scm 54 */
														obj_t BgL_arrayz00_2070;

														int BgL_offsetz00_2071;

														BgL_arrayz00_2070 = BgL_arg2643z00_2068;
														BgL_offsetz00_2071 =
															(int) (BgL_objzd2classzd2numz00_2067);
														{	/* Cfa/ltype.scm 54 */
															long BgL_offsetz00_2072;

															BgL_offsetz00_2072 =
																((long) (BgL_offsetz00_2071) - OBJECT_TYPE);
															{	/* Cfa/ltype.scm 54 */
																long BgL_modz00_2073;

																{	/* Cfa/ltype.scm 54 */
																	int BgL_arg2645z00_2074;

																	BgL_arg2645z00_2074 = (int) (((long) 16));
																	{	/* Cfa/ltype.scm 54 */
																		long BgL_auxz00_3268;

																		BgL_auxz00_3268 =
																			(long) (BgL_arg2645z00_2074);
																		BgL_modz00_2073 =
																			(BgL_offsetz00_2072 / BgL_auxz00_3268);
																}}
																{	/* Cfa/ltype.scm 54 */
																	long BgL_restz00_2075;

																	{	/* Cfa/ltype.scm 54 */
																		int BgL_arg2644z00_2076;

																		BgL_arg2644z00_2076 = (int) (((long) 16));
																		{	/* Cfa/ltype.scm 54 */
																			long BgL_auxz00_3272;

																			BgL_auxz00_3272 =
																				(long) (BgL_arg2644z00_2076);
																			BgL_restz00_2075 =
																				(BgL_offsetz00_2072 % BgL_auxz00_3272);
																	}}
																	{	/* Cfa/ltype.scm 54 */

																		BgL_method5298z00_2065 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2070,
																				(int) (BgL_modz00_2073)),
																			(int) (BgL_restz00_2075));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method5298z00_2065)
											(BgL_method5298z00_2065, (obj_t) (BgL_nodez00_2064),
											BEOA);
							}}}
							{	/* Cfa/ltype.scm 56 */
								obj_t BgL_arg5355z00_1188;

								{	/* Cfa/ltype.scm 56 */
									BgL_approxz00_bglt BgL_arg5356z00_1189;

									{
										obj_t BgL_auxz00_3282;

										{	/* Cfa/ltype.scm 56 */
											BgL_objectz00_bglt BgL_auxz00_3283;

											BgL_auxz00_3283 =
												(BgL_objectz00_bglt) (BgL_instance5223z00_1177);
											BgL_auxz00_3282 = BGL_OBJECT_WIDENING(BgL_auxz00_3283);
										}
										BgL_arg5356z00_1189 =
											(((BgL_internzd2sfunzf2cinfoz20_bglt)
												CREF(BgL_auxz00_3282))->BgL_approxz00);
									}
									BgL_arg5355z00_1188 =
										BGl_getzd2approxzd2typez00zzcfa_ltypez00
										(BgL_arg5356z00_1189);
								}
								{	/* Cfa/ltype.scm 56 */
									BgL_typez00_bglt BgL_typez00_2092;

									BgL_typez00_2092 = (BgL_typez00_bglt) (BgL_arg5355z00_1188);
									if (
										((obj_t) (BgL_typez00_2092) ==
											BGl_za2_za2z00zztype_cachez00))
										{	/* Cfa/ltype.scm 56 */
											return BFALSE;
										}
									else
										{	/* Cfa/ltype.scm 56 */
											return
												((((BgL_variablez00_bglt) CREF(BgL_varz00_2))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_typez00_2092), BUNSPEC);
										}
								}
							}
						}
					else
						{	/* Cfa/ltype.scm 45 */
							return BFALSE;
						}
				}
			}
		}
	}



/* get-approx-type */
	obj_t BGl_getzd2approxzd2typez00zzcfa_ltypez00(BgL_approxz00_bglt
		BgL_approxz00_3)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 61 */
			if (BGl_approxzd2procedurezd2elzf3zf3zzcfa_closurez00(BgL_approxz00_3))
				{	/* Cfa/ltype.scm 62 */
					if (BGl_approxzd2procedurezd2el1zf3zf3zzcfa_closurez00
						(BgL_approxz00_3))
						{	/* Cfa/ltype.scm 63 */
							return BGl_za2procedurezd2el1za2zd2zztype_cachez00;
						}
					else
						{	/* Cfa/ltype.scm 63 */
							return BGl_za2procedurezd2elza2zd2zztype_cachez00;
						}
				}
			else
				{	/* Cfa/ltype.scm 62 */
					return BGl_za2_za2z00zztype_cachez00;
				}
		}
	}



/* type-node*! */
	bool_t BGl_typezd2nodeza2z12z62zzcfa_ltypez00(obj_t BgL_nodeza2za2_45)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 314 */
			{
				obj_t BgL_l5283z00_1194;

				BgL_l5283z00_1194 = BgL_nodeza2za2_45;
			BgL_zc3anonymousza35360ze3z83_1195:
				if (PAIRP(BgL_l5283z00_1194))
					{	/* Cfa/ltype.scm 315 */
						{	/* Cfa/ltype.scm 315 */
							obj_t BgL_arg5362z00_1197;

							BgL_arg5362z00_1197 = CAR(BgL_l5283z00_1194);
							{	/* Cfa/ltype.scm 315 */
								BgL_nodez00_bglt BgL_nodez00_2101;

								BgL_nodez00_2101 = (BgL_nodez00_bglt) (BgL_arg5362z00_1197);
								{	/* Cfa/ltype.scm 315 */
									obj_t BgL_method5298z00_2102;

									{	/* Cfa/ltype.scm 315 */
										BgL_objectz00_bglt BgL_objz00_2103;

										BgL_objz00_2103 = (BgL_objectz00_bglt) (BgL_nodez00_2101);
										{	/* Cfa/ltype.scm 315 */
											long BgL_objzd2classzd2numz00_2104;

											BgL_objzd2classzd2numz00_2104 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2103);
											{	/* Cfa/ltype.scm 315 */
												obj_t BgL_arg2643z00_2105;

												BgL_arg2643z00_2105 =
													PROCEDURE_REF
													(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
													(int) (((long) 1)));
												{	/* Cfa/ltype.scm 315 */
													obj_t BgL_arrayz00_2107;

													int BgL_offsetz00_2108;

													BgL_arrayz00_2107 = BgL_arg2643z00_2105;
													BgL_offsetz00_2108 =
														(int) (BgL_objzd2classzd2numz00_2104);
													{	/* Cfa/ltype.scm 315 */
														long BgL_offsetz00_2109;

														BgL_offsetz00_2109 =
															((long) (BgL_offsetz00_2108) - OBJECT_TYPE);
														{	/* Cfa/ltype.scm 315 */
															long BgL_modz00_2110;

															{	/* Cfa/ltype.scm 315 */
																int BgL_arg2645z00_2111;

																BgL_arg2645z00_2111 = (int) (((long) 16));
																{	/* Cfa/ltype.scm 315 */
																	long BgL_auxz00_3309;

																	BgL_auxz00_3309 =
																		(long) (BgL_arg2645z00_2111);
																	BgL_modz00_2110 =
																		(BgL_offsetz00_2109 / BgL_auxz00_3309);
															}}
															{	/* Cfa/ltype.scm 315 */
																long BgL_restz00_2112;

																{	/* Cfa/ltype.scm 315 */
																	int BgL_arg2644z00_2113;

																	BgL_arg2644z00_2113 = (int) (((long) 16));
																	{	/* Cfa/ltype.scm 315 */
																		long BgL_auxz00_3313;

																		BgL_auxz00_3313 =
																			(long) (BgL_arg2644z00_2113);
																		BgL_restz00_2112 =
																			(BgL_offsetz00_2109 % BgL_auxz00_3313);
																}}
																{	/* Cfa/ltype.scm 315 */

																	BgL_method5298z00_2102 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2107,
																			(int) (BgL_modz00_2110)),
																		(int) (BgL_restz00_2112));
									}}}}}}}}
									PROCEDURE_ENTRY(BgL_method5298z00_2102)
										(BgL_method5298z00_2102, (obj_t) (BgL_nodez00_2101), BEOA);
						}}}
						{
							obj_t BgL_l5283z00_3323;

							BgL_l5283z00_3323 = CDR(BgL_l5283z00_1194);
							BgL_l5283z00_1194 = BgL_l5283z00_3323;
							goto BgL_zc3anonymousza35360ze3z83_1195;
						}
					}
				else
					{	/* Cfa/ltype.scm 315 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_ltypez00()
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_ltypez00,
				BGl_typezd2variablez12zd2defau5285zd2envzc0zzcfa_ltypez00,
				BGl_valuez00zzast_varz00, BGl_string5632z00zzcfa_ltypez00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_typezd2nodez12zd2default5297zd2envzc0zzcfa_ltypez00,
				BGl_nodez00zzast_nodez00, BGl_string5633z00zzcfa_ltypez00);
		}
	}



/* type-variable! */
	obj_t BGl_typezd2variablez12zc0zzcfa_ltypez00(BgL_valuez00_bglt
		BgL_valuez00_4, BgL_variablez00_bglt BgL_variablez00_5)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 71 */
			{	/* Cfa/ltype.scm 71 */
				obj_t BgL_method5286z00_2128;

				{	/* Cfa/ltype.scm 71 */
					BgL_objectz00_bglt BgL_objz00_2129;

					BgL_objz00_2129 = (BgL_objectz00_bglt) (BgL_valuez00_4);
					{	/* Cfa/ltype.scm 71 */
						long BgL_objzd2classzd2numz00_2130;

						BgL_objzd2classzd2numz00_2130 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2129);
						{	/* Cfa/ltype.scm 71 */
							obj_t BgL_arg2643z00_2131;

							BgL_arg2643z00_2131 =
								PROCEDURE_REF(BGl_typezd2variablez12zd2envz12zzcfa_ltypez00,
								(int) (((long) 1)));
							{	/* Cfa/ltype.scm 71 */
								obj_t BgL_arrayz00_2133;

								int BgL_offsetz00_2134;

								BgL_arrayz00_2133 = BgL_arg2643z00_2131;
								BgL_offsetz00_2134 = (int) (BgL_objzd2classzd2numz00_2130);
								{	/* Cfa/ltype.scm 71 */
									long BgL_offsetz00_2135;

									BgL_offsetz00_2135 =
										((long) (BgL_offsetz00_2134) - OBJECT_TYPE);
									{	/* Cfa/ltype.scm 71 */
										long BgL_modz00_2136;

										{	/* Cfa/ltype.scm 71 */
											int BgL_arg2645z00_2137;

											BgL_arg2645z00_2137 = (int) (((long) 16));
											{	/* Cfa/ltype.scm 71 */
												long BgL_auxz00_3335;

												BgL_auxz00_3335 = (long) (BgL_arg2645z00_2137);
												BgL_modz00_2136 =
													(BgL_offsetz00_2135 / BgL_auxz00_3335);
										}}
										{	/* Cfa/ltype.scm 71 */
											long BgL_restz00_2138;

											{	/* Cfa/ltype.scm 71 */
												int BgL_arg2644z00_2139;

												BgL_arg2644z00_2139 = (int) (((long) 16));
												{	/* Cfa/ltype.scm 71 */
													long BgL_auxz00_3339;

													BgL_auxz00_3339 = (long) (BgL_arg2644z00_2139);
													BgL_restz00_2138 =
														(BgL_offsetz00_2135 % BgL_auxz00_3339);
											}}
											{	/* Cfa/ltype.scm 71 */

												BgL_method5286z00_2128 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2133,
														(int) (BgL_modz00_2136)), (int) (BgL_restz00_2138));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5286z00_2128) (BgL_method5286z00_2128,
					(obj_t) (BgL_valuez00_4), (obj_t) (BgL_variablez00_5), BEOA);
			}
		}
	}



/* _type-variable! */
	obj_t BGl__typezd2variablez12zc0zzcfa_ltypez00(obj_t BgL_envz00_3062,
		obj_t BgL_valuez00_3063, obj_t BgL_variablez00_3064)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 71 */
			return
				BGl_typezd2variablez12zc0zzcfa_ltypez00(
				(BgL_valuez00_bglt) (BgL_valuez00_3063),
				(BgL_variablez00_bglt) (BgL_variablez00_3064));
		}
	}



/* type-variable!-defau5285 */
	obj_t BGl_typezd2variablez12zd2defau5285z12zzcfa_ltypez00(BgL_valuez00_bglt
		BgL_valuez00_6, BgL_variablez00_bglt BgL_variablez00_7)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 15 */
			{	/* Cfa/ltype.scm 72 */
				BgL_typez00_bglt BgL_typez00_2153;

				BgL_typez00_2153 =
					(((BgL_variablez00_bglt) CREF(BgL_variablez00_7))->BgL_typez00);
				if (
					((obj_t) (BgL_typez00_2153) == BGl_za2procedureza2z00zztype_cachez00))
					{	/* Cfa/ltype.scm 72 */
						if (((obj_t) (BgL_typez00_2153) == BGl_za2_za2z00zztype_cachez00))
							{	/* Cfa/ltype.scm 72 */
								return BFALSE;
							}
						else
							{	/* Cfa/ltype.scm 72 */
								return
									((((BgL_variablez00_bglt) CREF(BgL_variablez00_7))->
										BgL_typez00) =
									((BgL_typez00_bglt) BgL_typez00_2153), BUNSPEC);
							}
					}
				else
					{	/* Cfa/ltype.scm 72 */
						return CNST_TABLE_REF(((long) 0));
		}}}
	}



/* _type-variable!-defau5285 */
	obj_t BGl__typezd2variablez12zd2defau5285z12zzcfa_ltypez00(obj_t
		BgL_envz00_3067, obj_t BgL_valuez00_3068, obj_t BgL_variablez00_3069)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 15 */
			return
				BGl_typezd2variablez12zd2defau5285z12zzcfa_ltypez00(
				(BgL_valuez00_bglt) (BgL_valuez00_3068),
				(BgL_variablez00_bglt) (BgL_variablez00_3069));
		}
	}



/* type-node! */
	obj_t BGl_typezd2nodez12zc0zzcfa_ltypez00(BgL_nodez00_bglt BgL_nodez00_20)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 124 */
			{	/* Cfa/ltype.scm 124 */
				obj_t BgL_method5298z00_2161;

				{	/* Cfa/ltype.scm 124 */
					BgL_objectz00_bglt BgL_objz00_2162;

					BgL_objz00_2162 = (BgL_objectz00_bglt) (BgL_nodez00_20);
					{	/* Cfa/ltype.scm 124 */
						long BgL_objzd2classzd2numz00_2163;

						BgL_objzd2classzd2numz00_2163 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2162);
						{	/* Cfa/ltype.scm 124 */
							obj_t BgL_arg2643z00_2164;

							BgL_arg2643z00_2164 =
								PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
								(int) (((long) 1)));
							{	/* Cfa/ltype.scm 124 */
								obj_t BgL_arrayz00_2166;

								int BgL_offsetz00_2167;

								BgL_arrayz00_2166 = BgL_arg2643z00_2164;
								BgL_offsetz00_2167 = (int) (BgL_objzd2classzd2numz00_2163);
								{	/* Cfa/ltype.scm 124 */
									long BgL_offsetz00_2168;

									BgL_offsetz00_2168 =
										((long) (BgL_offsetz00_2167) - OBJECT_TYPE);
									{	/* Cfa/ltype.scm 124 */
										long BgL_modz00_2169;

										{	/* Cfa/ltype.scm 124 */
											int BgL_arg2645z00_2170;

											BgL_arg2645z00_2170 = (int) (((long) 16));
											{	/* Cfa/ltype.scm 124 */
												long BgL_auxz00_3373;

												BgL_auxz00_3373 = (long) (BgL_arg2645z00_2170);
												BgL_modz00_2169 =
													(BgL_offsetz00_2168 / BgL_auxz00_3373);
										}}
										{	/* Cfa/ltype.scm 124 */
											long BgL_restz00_2171;

											{	/* Cfa/ltype.scm 124 */
												int BgL_arg2644z00_2172;

												BgL_arg2644z00_2172 = (int) (((long) 16));
												{	/* Cfa/ltype.scm 124 */
													long BgL_auxz00_3377;

													BgL_auxz00_3377 = (long) (BgL_arg2644z00_2172);
													BgL_restz00_2171 =
														(BgL_offsetz00_2168 % BgL_auxz00_3377);
											}}
											{	/* Cfa/ltype.scm 124 */

												BgL_method5298z00_2161 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2166,
														(int) (BgL_modz00_2169)), (int) (BgL_restz00_2171));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method5298z00_2161) (BgL_method5298z00_2161,
					(obj_t) (BgL_nodez00_20), BEOA);
			}
		}
	}



/* _type-node! */
	obj_t BGl__typezd2nodez12zc0zzcfa_ltypez00(obj_t BgL_envz00_3065,
		obj_t BgL_nodez00_3066)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 124 */
			return
				BGl_typezd2nodez12zc0zzcfa_ltypez00(
				(BgL_nodez00_bglt) (BgL_nodez00_3066));
		}
	}



/* type-node!-default5297 */
	obj_t BGl_typezd2nodez12zd2default5297z12zzcfa_ltypez00(BgL_nodez00_bglt
		BgL_nodez00_21)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
				BGl_string5634z00zzcfa_ltypez00, (obj_t) (BgL_nodez00_21));
		}
	}



/* _type-node!-default5297 */
	obj_t BGl__typezd2nodez12zd2default5297z12zzcfa_ltypez00(obj_t
		BgL_envz00_3070, obj_t BgL_nodez00_3071)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 15 */
			return
				BGl_typezd2nodez12zd2default5297z12zzcfa_ltypez00(
				(BgL_nodez00_bglt) (BgL_nodez00_3071));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_ltypez00()
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_ltypez00,
				BGl_svarzf2Cinfozf2zzcfa_infoz00, BGl_proc5635z00zzcfa_ltypez00,
				BGl_string5632z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_ltypez00,
				BGl_scnstzf2Cinfozf2zzcfa_infoz00, BGl_proc5636z00zzcfa_ltypez00,
				BGl_string5632z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_ltypez00,
				BGl_cvarzf2Cinfozf2zzcfa_infoz00, BGl_proc5637z00zzcfa_ltypez00,
				BGl_string5632z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_ltypez00,
				BGl_sexitzf2Cinfozf2zzcfa_infoz00, BGl_proc5638z00zzcfa_ltypez00,
				BGl_string5632z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_ltypez00,
				BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00,
				BGl_proc5639z00zzcfa_ltypez00, BGl_string5632z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_atomz00zzast_nodez00,
				BGl_proc5640z00zzcfa_ltypez00, BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_kwotez00zzast_nodez00,
				BGl_proc5641z00zzcfa_ltypez00, BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_varz00zzast_nodez00,
				BGl_proc5642z00zzcfa_ltypez00, BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_closurez00zzast_nodez00,
				BGl_proc5643z00zzcfa_ltypez00, BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_sequencez00zzast_nodez00, BGl_proc5644z00zzcfa_ltypez00,
				BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_appz00zzast_nodez00,
				BGl_proc5645z00zzcfa_ltypez00, BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc5646z00zzcfa_ltypez00,
				BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_funcallz00zzast_nodez00,
				BGl_proc5647z00zzcfa_ltypez00, BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_externz00zzast_nodez00,
				BGl_proc5648z00zzcfa_ltypez00, BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_vrefz00zzast_nodez00,
				BGl_proc5649z00zzcfa_ltypez00, BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_vsetz12z12zzast_nodez00,
				BGl_proc5650z00zzcfa_ltypez00, BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_castz00zzast_nodez00,
				BGl_proc5651z00zzcfa_ltypez00, BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_setqz00zzast_nodez00,
				BGl_proc5652z00zzcfa_ltypez00, BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc5653z00zzcfa_ltypez00,
				BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_failz00zzast_nodez00,
				BGl_proc5654z00zzcfa_ltypez00, BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00, BGl_selectz00zzast_nodez00,
				BGl_proc5655z00zzcfa_ltypez00, BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc5656z00zzcfa_ltypez00,
				BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc5657z00zzcfa_ltypez00,
				BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc5658z00zzcfa_ltypez00,
				BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc5659z00zzcfa_ltypez00,
				BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc5660z00zzcfa_ltypez00,
				BGl_string5633z00zzcfa_ltypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc5661z00zzcfa_ltypez00,
				BGl_string5633z00zzcfa_ltypez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc5662z00zzcfa_ltypez00,
				BGl_string5633z00zzcfa_ltypez00);
		}
	}



/* type-node!-box-ref5344 */
	obj_t BGl_typezd2nodez12zd2boxzd2ref5344zc0zzcfa_ltypez00(obj_t
		BgL_envz00_3100, obj_t BgL_nodez00_3101)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 307 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_2019;

				BgL_nodez00_2019 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_3101);
				{	/* Cfa/ltype.scm 308 */
					BgL_varz00_bglt BgL_arg5560z00_3032;

					BgL_arg5560z00_3032 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_2019))->BgL_varz00);
					{	/* Cfa/ltype.scm 308 */
						BgL_nodez00_bglt BgL_nodez00_3034;

						BgL_nodez00_3034 = (BgL_nodez00_bglt) (BgL_arg5560z00_3032);
						{	/* Cfa/ltype.scm 308 */
							obj_t BgL_method5298z00_3035;

							{	/* Cfa/ltype.scm 308 */
								BgL_objectz00_bglt BgL_objz00_3036;

								BgL_objz00_3036 = (BgL_objectz00_bglt) (BgL_nodez00_3034);
								{	/* Cfa/ltype.scm 308 */
									long BgL_objzd2classzd2numz00_3037;

									BgL_objzd2classzd2numz00_3037 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_3036);
									{	/* Cfa/ltype.scm 308 */
										obj_t BgL_arg2643z00_3038;

										BgL_arg2643z00_3038 =
											PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
											(int) (((long) 1)));
										{	/* Cfa/ltype.scm 308 */
											obj_t BgL_arrayz00_3040;

											int BgL_offsetz00_3041;

											BgL_arrayz00_3040 = BgL_arg2643z00_3038;
											BgL_offsetz00_3041 =
												(int) (BgL_objzd2classzd2numz00_3037);
											{	/* Cfa/ltype.scm 308 */
												long BgL_offsetz00_3042;

												BgL_offsetz00_3042 =
													((long) (BgL_offsetz00_3041) - OBJECT_TYPE);
												{	/* Cfa/ltype.scm 308 */
													long BgL_modz00_3043;

													{	/* Cfa/ltype.scm 308 */
														int BgL_arg2645z00_3044;

														BgL_arg2645z00_3044 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 308 */
															long BgL_auxz00_3432;

															BgL_auxz00_3432 = (long) (BgL_arg2645z00_3044);
															BgL_modz00_3043 =
																(BgL_offsetz00_3042 / BgL_auxz00_3432);
													}}
													{	/* Cfa/ltype.scm 308 */
														long BgL_restz00_3045;

														{	/* Cfa/ltype.scm 308 */
															int BgL_arg2644z00_3046;

															BgL_arg2644z00_3046 = (int) (((long) 16));
															{	/* Cfa/ltype.scm 308 */
																long BgL_auxz00_3436;

																BgL_auxz00_3436 = (long) (BgL_arg2644z00_3046);
																BgL_restz00_3045 =
																	(BgL_offsetz00_3042 % BgL_auxz00_3436);
														}}
														{	/* Cfa/ltype.scm 308 */

															BgL_method5298z00_3035 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_3040,
																	(int) (BgL_modz00_3043)),
																(int) (BgL_restz00_3045));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method5298z00_3035) (BgL_method5298z00_3035,
								(obj_t) (BgL_nodez00_3034), BEOA);
						}
					}
				}
			}
		}
	}



/* type-node!-box-set!5342 */
	obj_t BGl_typezd2nodez12zd2boxzd2setz125342zd2zzcfa_ltypez00(obj_t
		BgL_envz00_3102, obj_t BgL_nodez00_3103)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 299 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_2011;

				BgL_nodez00_2011 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_3103);
				{	/* Cfa/ltype.scm 301 */
					BgL_varz00_bglt BgL_arg5557z00_2015;

					BgL_arg5557z00_2015 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_2011))->BgL_varz00);
					{	/* Cfa/ltype.scm 301 */
						BgL_nodez00_bglt BgL_nodez00_2978;

						BgL_nodez00_2978 = (BgL_nodez00_bglt) (BgL_arg5557z00_2015);
						{	/* Cfa/ltype.scm 301 */
							obj_t BgL_method5298z00_2979;

							{	/* Cfa/ltype.scm 301 */
								BgL_objectz00_bglt BgL_objz00_2980;

								BgL_objz00_2980 = (BgL_objectz00_bglt) (BgL_nodez00_2978);
								{	/* Cfa/ltype.scm 301 */
									long BgL_objzd2classzd2numz00_2981;

									BgL_objzd2classzd2numz00_2981 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2980);
									{	/* Cfa/ltype.scm 301 */
										obj_t BgL_arg2643z00_2982;

										BgL_arg2643z00_2982 =
											PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
											(int) (((long) 1)));
										{	/* Cfa/ltype.scm 301 */
											obj_t BgL_arrayz00_2984;

											int BgL_offsetz00_2985;

											BgL_arrayz00_2984 = BgL_arg2643z00_2982;
											BgL_offsetz00_2985 =
												(int) (BgL_objzd2classzd2numz00_2981);
											{	/* Cfa/ltype.scm 301 */
												long BgL_offsetz00_2986;

												BgL_offsetz00_2986 =
													((long) (BgL_offsetz00_2985) - OBJECT_TYPE);
												{	/* Cfa/ltype.scm 301 */
													long BgL_modz00_2987;

													{	/* Cfa/ltype.scm 301 */
														int BgL_arg2645z00_2988;

														BgL_arg2645z00_2988 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 301 */
															long BgL_auxz00_3457;

															BgL_auxz00_3457 = (long) (BgL_arg2645z00_2988);
															BgL_modz00_2987 =
																(BgL_offsetz00_2986 / BgL_auxz00_3457);
													}}
													{	/* Cfa/ltype.scm 301 */
														long BgL_restz00_2989;

														{	/* Cfa/ltype.scm 301 */
															int BgL_arg2644z00_2990;

															BgL_arg2644z00_2990 = (int) (((long) 16));
															{	/* Cfa/ltype.scm 301 */
																long BgL_auxz00_3461;

																BgL_auxz00_3461 = (long) (BgL_arg2644z00_2990);
																BgL_restz00_2989 =
																	(BgL_offsetz00_2986 % BgL_auxz00_3461);
														}}
														{	/* Cfa/ltype.scm 301 */

															BgL_method5298z00_2979 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2984,
																	(int) (BgL_modz00_2987)),
																(int) (BgL_restz00_2989));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5298z00_2979) (BgL_method5298z00_2979,
								(obj_t) (BgL_nodez00_2978), BEOA);
				}}}
				{	/* Cfa/ltype.scm 302 */
					BgL_nodez00_bglt BgL_arg5558z00_2016;

					BgL_arg5558z00_2016 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_2011))->BgL_valuez00);
					{	/* Cfa/ltype.scm 302 */
						obj_t BgL_method5298z00_3006;

						{	/* Cfa/ltype.scm 302 */
							BgL_objectz00_bglt BgL_objz00_3007;

							BgL_objz00_3007 = (BgL_objectz00_bglt) (BgL_arg5558z00_2016);
							{	/* Cfa/ltype.scm 302 */
								long BgL_objzd2classzd2numz00_3008;

								BgL_objzd2classzd2numz00_3008 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_3007);
								{	/* Cfa/ltype.scm 302 */
									obj_t BgL_arg2643z00_3009;

									BgL_arg2643z00_3009 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
										(int) (((long) 1)));
									{	/* Cfa/ltype.scm 302 */
										obj_t BgL_arrayz00_3011;

										int BgL_offsetz00_3012;

										BgL_arrayz00_3011 = BgL_arg2643z00_3009;
										BgL_offsetz00_3012 = (int) (BgL_objzd2classzd2numz00_3008);
										{	/* Cfa/ltype.scm 302 */
											long BgL_offsetz00_3013;

											BgL_offsetz00_3013 =
												((long) (BgL_offsetz00_3012) - OBJECT_TYPE);
											{	/* Cfa/ltype.scm 302 */
												long BgL_modz00_3014;

												{	/* Cfa/ltype.scm 302 */
													int BgL_arg2645z00_3015;

													BgL_arg2645z00_3015 = (int) (((long) 16));
													{	/* Cfa/ltype.scm 302 */
														long BgL_auxz00_3480;

														BgL_auxz00_3480 = (long) (BgL_arg2645z00_3015);
														BgL_modz00_3014 =
															(BgL_offsetz00_3013 / BgL_auxz00_3480);
												}}
												{	/* Cfa/ltype.scm 302 */
													long BgL_restz00_3016;

													{	/* Cfa/ltype.scm 302 */
														int BgL_arg2644z00_3017;

														BgL_arg2644z00_3017 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 302 */
															long BgL_auxz00_3484;

															BgL_auxz00_3484 = (long) (BgL_arg2644z00_3017);
															BgL_restz00_3016 =
																(BgL_offsetz00_3013 % BgL_auxz00_3484);
													}}
													{	/* Cfa/ltype.scm 302 */

														BgL_method5298z00_3006 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_3011,
																(int) (BgL_modz00_3014)),
															(int) (BgL_restz00_3016));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_3006) (BgL_method5298z00_3006,
							(obj_t) (BgL_arg5558z00_2016), BEOA);
					}
				}
			}
		}
	}



/* type-node!-make-box5340 */
	obj_t BGl_typezd2nodez12zd2makezd2box5340zc0zzcfa_ltypez00(obj_t
		BgL_envz00_3104, obj_t BgL_nodez00_3105)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 292 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_2004;

				BgL_nodez00_2004 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_3105);
				{	/* Cfa/ltype.scm 293 */
					BgL_nodez00_bglt BgL_arg5555z00_2949;

					BgL_arg5555z00_2949 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_2004))->BgL_valuez00);
					{	/* Cfa/ltype.scm 293 */
						obj_t BgL_method5298z00_2952;

						{	/* Cfa/ltype.scm 293 */
							BgL_objectz00_bglt BgL_objz00_2953;

							BgL_objz00_2953 = (BgL_objectz00_bglt) (BgL_arg5555z00_2949);
							{	/* Cfa/ltype.scm 293 */
								long BgL_objzd2classzd2numz00_2954;

								BgL_objzd2classzd2numz00_2954 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2953);
								{	/* Cfa/ltype.scm 293 */
									obj_t BgL_arg2643z00_2955;

									BgL_arg2643z00_2955 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
										(int) (((long) 1)));
									{	/* Cfa/ltype.scm 293 */
										obj_t BgL_arrayz00_2957;

										int BgL_offsetz00_2958;

										BgL_arrayz00_2957 = BgL_arg2643z00_2955;
										BgL_offsetz00_2958 = (int) (BgL_objzd2classzd2numz00_2954);
										{	/* Cfa/ltype.scm 293 */
											long BgL_offsetz00_2959;

											BgL_offsetz00_2959 =
												((long) (BgL_offsetz00_2958) - OBJECT_TYPE);
											{	/* Cfa/ltype.scm 293 */
												long BgL_modz00_2960;

												{	/* Cfa/ltype.scm 293 */
													int BgL_arg2645z00_2961;

													BgL_arg2645z00_2961 = (int) (((long) 16));
													{	/* Cfa/ltype.scm 293 */
														long BgL_auxz00_3504;

														BgL_auxz00_3504 = (long) (BgL_arg2645z00_2961);
														BgL_modz00_2960 =
															(BgL_offsetz00_2959 / BgL_auxz00_3504);
												}}
												{	/* Cfa/ltype.scm 293 */
													long BgL_restz00_2962;

													{	/* Cfa/ltype.scm 293 */
														int BgL_arg2644z00_2963;

														BgL_arg2644z00_2963 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 293 */
															long BgL_auxz00_3508;

															BgL_auxz00_3508 = (long) (BgL_arg2644z00_2963);
															BgL_restz00_2962 =
																(BgL_offsetz00_2959 % BgL_auxz00_3508);
													}}
													{	/* Cfa/ltype.scm 293 */

														BgL_method5298z00_2952 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2957,
																(int) (BgL_modz00_2960)),
															(int) (BgL_restz00_2962));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_2952) (BgL_method5298z00_2952,
							(obj_t) (BgL_arg5555z00_2949), BEOA);
					}
				}
			}
		}
	}



/* type-node!-jump-ex-i5338 */
	obj_t BGl_typezd2nodez12zd2jumpzd2exzd2i5338z12zzcfa_ltypez00(obj_t
		BgL_envz00_3106, obj_t BgL_nodez00_3107)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 284 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1996;

				BgL_nodez00_1996 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_3107);
				{	/* Cfa/ltype.scm 286 */
					BgL_nodez00_bglt BgL_arg5552z00_2000;

					BgL_arg5552z00_2000 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1996))->
						BgL_exitz00);
					{	/* Cfa/ltype.scm 286 */
						obj_t BgL_method5298z00_2896;

						{	/* Cfa/ltype.scm 286 */
							BgL_objectz00_bglt BgL_objz00_2897;

							BgL_objz00_2897 = (BgL_objectz00_bglt) (BgL_arg5552z00_2000);
							{	/* Cfa/ltype.scm 286 */
								long BgL_objzd2classzd2numz00_2898;

								BgL_objzd2classzd2numz00_2898 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2897);
								{	/* Cfa/ltype.scm 286 */
									obj_t BgL_arg2643z00_2899;

									BgL_arg2643z00_2899 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
										(int) (((long) 1)));
									{	/* Cfa/ltype.scm 286 */
										obj_t BgL_arrayz00_2901;

										int BgL_offsetz00_2902;

										BgL_arrayz00_2901 = BgL_arg2643z00_2899;
										BgL_offsetz00_2902 = (int) (BgL_objzd2classzd2numz00_2898);
										{	/* Cfa/ltype.scm 286 */
											long BgL_offsetz00_2903;

											BgL_offsetz00_2903 =
												((long) (BgL_offsetz00_2902) - OBJECT_TYPE);
											{	/* Cfa/ltype.scm 286 */
												long BgL_modz00_2904;

												{	/* Cfa/ltype.scm 286 */
													int BgL_arg2645z00_2905;

													BgL_arg2645z00_2905 = (int) (((long) 16));
													{	/* Cfa/ltype.scm 286 */
														long BgL_auxz00_3528;

														BgL_auxz00_3528 = (long) (BgL_arg2645z00_2905);
														BgL_modz00_2904 =
															(BgL_offsetz00_2903 / BgL_auxz00_3528);
												}}
												{	/* Cfa/ltype.scm 286 */
													long BgL_restz00_2906;

													{	/* Cfa/ltype.scm 286 */
														int BgL_arg2644z00_2907;

														BgL_arg2644z00_2907 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 286 */
															long BgL_auxz00_3532;

															BgL_auxz00_3532 = (long) (BgL_arg2644z00_2907);
															BgL_restz00_2906 =
																(BgL_offsetz00_2903 % BgL_auxz00_3532);
													}}
													{	/* Cfa/ltype.scm 286 */

														BgL_method5298z00_2896 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2901,
																(int) (BgL_modz00_2904)),
															(int) (BgL_restz00_2906));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_2896) (BgL_method5298z00_2896,
							(obj_t) (BgL_arg5552z00_2000), BEOA);
				}}
				{	/* Cfa/ltype.scm 287 */
					BgL_nodez00_bglt BgL_arg5553z00_2001;

					BgL_arg5553z00_2001 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1996))->
						BgL_valuez00);
					{	/* Cfa/ltype.scm 287 */
						obj_t BgL_method5298z00_2923;

						{	/* Cfa/ltype.scm 287 */
							BgL_objectz00_bglt BgL_objz00_2924;

							BgL_objz00_2924 = (BgL_objectz00_bglt) (BgL_arg5553z00_2001);
							{	/* Cfa/ltype.scm 287 */
								long BgL_objzd2classzd2numz00_2925;

								BgL_objzd2classzd2numz00_2925 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2924);
								{	/* Cfa/ltype.scm 287 */
									obj_t BgL_arg2643z00_2926;

									BgL_arg2643z00_2926 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
										(int) (((long) 1)));
									{	/* Cfa/ltype.scm 287 */
										obj_t BgL_arrayz00_2928;

										int BgL_offsetz00_2929;

										BgL_arrayz00_2928 = BgL_arg2643z00_2926;
										BgL_offsetz00_2929 = (int) (BgL_objzd2classzd2numz00_2925);
										{	/* Cfa/ltype.scm 287 */
											long BgL_offsetz00_2930;

											BgL_offsetz00_2930 =
												((long) (BgL_offsetz00_2929) - OBJECT_TYPE);
											{	/* Cfa/ltype.scm 287 */
												long BgL_modz00_2931;

												{	/* Cfa/ltype.scm 287 */
													int BgL_arg2645z00_2932;

													BgL_arg2645z00_2932 = (int) (((long) 16));
													{	/* Cfa/ltype.scm 287 */
														long BgL_auxz00_3551;

														BgL_auxz00_3551 = (long) (BgL_arg2645z00_2932);
														BgL_modz00_2931 =
															(BgL_offsetz00_2930 / BgL_auxz00_3551);
												}}
												{	/* Cfa/ltype.scm 287 */
													long BgL_restz00_2933;

													{	/* Cfa/ltype.scm 287 */
														int BgL_arg2644z00_2934;

														BgL_arg2644z00_2934 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 287 */
															long BgL_auxz00_3555;

															BgL_auxz00_3555 = (long) (BgL_arg2644z00_2934);
															BgL_restz00_2933 =
																(BgL_offsetz00_2930 % BgL_auxz00_3555);
													}}
													{	/* Cfa/ltype.scm 287 */

														BgL_method5298z00_2923 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2928,
																(int) (BgL_modz00_2931)),
															(int) (BgL_restz00_2933));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_2923) (BgL_method5298z00_2923,
							(obj_t) (BgL_arg5553z00_2001), BEOA);
					}
				}
			}
		}
	}



/* type-node!-set-ex-it5336 */
	obj_t BGl_typezd2nodez12zd2setzd2exzd2it5336z12zzcfa_ltypez00(obj_t
		BgL_envz00_3108, obj_t BgL_nodez00_3109)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 274 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1985;

				BgL_nodez00_1985 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_3109);
				{	/* Cfa/ltype.scm 276 */
					BgL_variablez00_bglt BgL_vz00_1989;

					{	/* Cfa/ltype.scm 276 */
						BgL_varz00_bglt BgL_obj2155z00_2811;

						BgL_obj2155z00_2811 =
							(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1985))->
							BgL_varz00);
						BgL_vz00_1989 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2811))->BgL_variablez00);
					}
					{	/* Cfa/ltype.scm 277 */
						BgL_valuez00_bglt BgL_arg5547z00_1990;

						BgL_arg5547z00_1990 =
							(((BgL_variablez00_bglt) CREF(BgL_vz00_1989))->BgL_valuez00);
						{	/* Cfa/ltype.scm 277 */
							obj_t BgL_method5286z00_2815;

							{	/* Cfa/ltype.scm 277 */
								BgL_objectz00_bglt BgL_objz00_2816;

								BgL_objz00_2816 = (BgL_objectz00_bglt) (BgL_arg5547z00_1990);
								{	/* Cfa/ltype.scm 277 */
									long BgL_objzd2classzd2numz00_2817;

									BgL_objzd2classzd2numz00_2817 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2816);
									{	/* Cfa/ltype.scm 277 */
										obj_t BgL_arg2643z00_2818;

										BgL_arg2643z00_2818 =
											PROCEDURE_REF
											(BGl_typezd2variablez12zd2envz12zzcfa_ltypez00,
											(int) (((long) 1)));
										{	/* Cfa/ltype.scm 277 */
											obj_t BgL_arrayz00_2820;

											int BgL_offsetz00_2821;

											BgL_arrayz00_2820 = BgL_arg2643z00_2818;
											BgL_offsetz00_2821 =
												(int) (BgL_objzd2classzd2numz00_2817);
											{	/* Cfa/ltype.scm 277 */
												long BgL_offsetz00_2822;

												BgL_offsetz00_2822 =
													((long) (BgL_offsetz00_2821) - OBJECT_TYPE);
												{	/* Cfa/ltype.scm 277 */
													long BgL_modz00_2823;

													{	/* Cfa/ltype.scm 277 */
														int BgL_arg2645z00_2824;

														BgL_arg2645z00_2824 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 277 */
															long BgL_auxz00_3577;

															BgL_auxz00_3577 = (long) (BgL_arg2645z00_2824);
															BgL_modz00_2823 =
																(BgL_offsetz00_2822 / BgL_auxz00_3577);
													}}
													{	/* Cfa/ltype.scm 277 */
														long BgL_restz00_2825;

														{	/* Cfa/ltype.scm 277 */
															int BgL_arg2644z00_2826;

															BgL_arg2644z00_2826 = (int) (((long) 16));
															{	/* Cfa/ltype.scm 277 */
																long BgL_auxz00_3581;

																BgL_auxz00_3581 = (long) (BgL_arg2644z00_2826);
																BgL_restz00_2825 =
																	(BgL_offsetz00_2822 % BgL_auxz00_3581);
														}}
														{	/* Cfa/ltype.scm 277 */

															BgL_method5286z00_2815 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2820,
																	(int) (BgL_modz00_2823)),
																(int) (BgL_restz00_2825));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5286z00_2815) (BgL_method5286z00_2815,
								(obj_t) (BgL_arg5547z00_1990), (obj_t) (BgL_vz00_1989), BEOA);
				}}}
				{	/* Cfa/ltype.scm 278 */
					BgL_nodez00_bglt BgL_arg5549z00_1992;

					BgL_arg5549z00_1992 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1985))->BgL_bodyz00);
					{	/* Cfa/ltype.scm 278 */
						obj_t BgL_method5298z00_2842;

						{	/* Cfa/ltype.scm 278 */
							BgL_objectz00_bglt BgL_objz00_2843;

							BgL_objz00_2843 = (BgL_objectz00_bglt) (BgL_arg5549z00_1992);
							{	/* Cfa/ltype.scm 278 */
								long BgL_objzd2classzd2numz00_2844;

								BgL_objzd2classzd2numz00_2844 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2843);
								{	/* Cfa/ltype.scm 278 */
									obj_t BgL_arg2643z00_2845;

									BgL_arg2643z00_2845 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
										(int) (((long) 1)));
									{	/* Cfa/ltype.scm 278 */
										obj_t BgL_arrayz00_2847;

										int BgL_offsetz00_2848;

										BgL_arrayz00_2847 = BgL_arg2643z00_2845;
										BgL_offsetz00_2848 = (int) (BgL_objzd2classzd2numz00_2844);
										{	/* Cfa/ltype.scm 278 */
											long BgL_offsetz00_2849;

											BgL_offsetz00_2849 =
												((long) (BgL_offsetz00_2848) - OBJECT_TYPE);
											{	/* Cfa/ltype.scm 278 */
												long BgL_modz00_2850;

												{	/* Cfa/ltype.scm 278 */
													int BgL_arg2645z00_2851;

													BgL_arg2645z00_2851 = (int) (((long) 16));
													{	/* Cfa/ltype.scm 278 */
														long BgL_auxz00_3601;

														BgL_auxz00_3601 = (long) (BgL_arg2645z00_2851);
														BgL_modz00_2850 =
															(BgL_offsetz00_2849 / BgL_auxz00_3601);
												}}
												{	/* Cfa/ltype.scm 278 */
													long BgL_restz00_2852;

													{	/* Cfa/ltype.scm 278 */
														int BgL_arg2644z00_2853;

														BgL_arg2644z00_2853 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 278 */
															long BgL_auxz00_3605;

															BgL_auxz00_3605 = (long) (BgL_arg2644z00_2853);
															BgL_restz00_2852 =
																(BgL_offsetz00_2849 % BgL_auxz00_3605);
													}}
													{	/* Cfa/ltype.scm 278 */

														BgL_method5298z00_2842 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2847,
																(int) (BgL_modz00_2850)),
															(int) (BgL_restz00_2852));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_2842) (BgL_method5298z00_2842,
							(obj_t) (BgL_arg5549z00_1992), BEOA);
				}}
				{	/* Cfa/ltype.scm 279 */
					BgL_varz00_bglt BgL_arg5550z00_1993;

					BgL_arg5550z00_1993 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1985))->BgL_varz00);
					{	/* Cfa/ltype.scm 279 */
						BgL_nodez00_bglt BgL_nodez00_2868;

						BgL_nodez00_2868 = (BgL_nodez00_bglt) (BgL_arg5550z00_1993);
						{	/* Cfa/ltype.scm 279 */
							obj_t BgL_method5298z00_2869;

							{	/* Cfa/ltype.scm 279 */
								BgL_objectz00_bglt BgL_objz00_2870;

								BgL_objz00_2870 = (BgL_objectz00_bglt) (BgL_nodez00_2868);
								{	/* Cfa/ltype.scm 279 */
									long BgL_objzd2classzd2numz00_2871;

									BgL_objzd2classzd2numz00_2871 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2870);
									{	/* Cfa/ltype.scm 279 */
										obj_t BgL_arg2643z00_2872;

										BgL_arg2643z00_2872 =
											PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
											(int) (((long) 1)));
										{	/* Cfa/ltype.scm 279 */
											obj_t BgL_arrayz00_2874;

											int BgL_offsetz00_2875;

											BgL_arrayz00_2874 = BgL_arg2643z00_2872;
											BgL_offsetz00_2875 =
												(int) (BgL_objzd2classzd2numz00_2871);
											{	/* Cfa/ltype.scm 279 */
												long BgL_offsetz00_2876;

												BgL_offsetz00_2876 =
													((long) (BgL_offsetz00_2875) - OBJECT_TYPE);
												{	/* Cfa/ltype.scm 279 */
													long BgL_modz00_2877;

													{	/* Cfa/ltype.scm 279 */
														int BgL_arg2645z00_2878;

														BgL_arg2645z00_2878 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 279 */
															long BgL_auxz00_3625;

															BgL_auxz00_3625 = (long) (BgL_arg2645z00_2878);
															BgL_modz00_2877 =
																(BgL_offsetz00_2876 / BgL_auxz00_3625);
													}}
													{	/* Cfa/ltype.scm 279 */
														long BgL_restz00_2879;

														{	/* Cfa/ltype.scm 279 */
															int BgL_arg2644z00_2880;

															BgL_arg2644z00_2880 = (int) (((long) 16));
															{	/* Cfa/ltype.scm 279 */
																long BgL_auxz00_3629;

																BgL_auxz00_3629 = (long) (BgL_arg2644z00_2880);
																BgL_restz00_2879 =
																	(BgL_offsetz00_2876 % BgL_auxz00_3629);
														}}
														{	/* Cfa/ltype.scm 279 */

															BgL_method5298z00_2869 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2874,
																	(int) (BgL_modz00_2877)),
																(int) (BgL_restz00_2879));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method5298z00_2869) (BgL_method5298z00_2869,
								(obj_t) (BgL_nodez00_2868), BEOA);
						}
					}
				}
			}
		}
	}



/* type-node!-let-var5334 */
	obj_t BGl_typezd2nodez12zd2letzd2var5334zc0zzcfa_ltypez00(obj_t
		BgL_envz00_3110, obj_t BgL_nodez00_3111)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 261 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1967;

				BgL_nodez00_1967 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_3111);
				{	/* Cfa/ltype.scm 263 */
					obj_t BgL_g5282z00_1971;

					BgL_g5282z00_1971 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1967))->BgL_bindingsz00);
					{
						obj_t BgL_l5280z00_1973;

						BgL_l5280z00_1973 = BgL_g5282z00_1971;
					BgL_zc3anonymousza35541ze3z83_1974:
						if (PAIRP(BgL_l5280z00_1973))
							{	/* Cfa/ltype.scm 263 */
								{	/* Cfa/ltype.scm 264 */
									obj_t BgL_bindingz00_1976;

									BgL_bindingz00_1976 = CAR(BgL_l5280z00_1973);
									{	/* Cfa/ltype.scm 264 */
										obj_t BgL_varz00_1977;

										obj_t BgL_valz00_1978;

										BgL_varz00_1977 = CAR(BgL_bindingz00_1976);
										BgL_valz00_1978 = CDR(BgL_bindingz00_1976);
										{	/* Cfa/ltype.scm 266 */
											BgL_nodez00_bglt BgL_nodez00_2728;

											BgL_nodez00_2728 = (BgL_nodez00_bglt) (BgL_valz00_1978);
											{	/* Cfa/ltype.scm 266 */
												obj_t BgL_method5298z00_2729;

												{	/* Cfa/ltype.scm 266 */
													BgL_objectz00_bglt BgL_objz00_2730;

													BgL_objz00_2730 =
														(BgL_objectz00_bglt) (BgL_nodez00_2728);
													{	/* Cfa/ltype.scm 266 */
														long BgL_objzd2classzd2numz00_2731;

														BgL_objzd2classzd2numz00_2731 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2730);
														{	/* Cfa/ltype.scm 266 */
															obj_t BgL_arg2643z00_2732;

															BgL_arg2643z00_2732 =
																PROCEDURE_REF
																(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
																(int) (((long) 1)));
															{	/* Cfa/ltype.scm 266 */
																obj_t BgL_arrayz00_2734;

																int BgL_offsetz00_2735;

																BgL_arrayz00_2734 = BgL_arg2643z00_2732;
																BgL_offsetz00_2735 =
																	(int) (BgL_objzd2classzd2numz00_2731);
																{	/* Cfa/ltype.scm 266 */
																	long BgL_offsetz00_2736;

																	BgL_offsetz00_2736 =
																		((long) (BgL_offsetz00_2735) - OBJECT_TYPE);
																	{	/* Cfa/ltype.scm 266 */
																		long BgL_modz00_2737;

																		{	/* Cfa/ltype.scm 266 */
																			int BgL_arg2645z00_2738;

																			BgL_arg2645z00_2738 = (int) (((long) 16));
																			{	/* Cfa/ltype.scm 266 */
																				long BgL_auxz00_3655;

																				BgL_auxz00_3655 =
																					(long) (BgL_arg2645z00_2738);
																				BgL_modz00_2737 =
																					(BgL_offsetz00_2736 /
																					BgL_auxz00_3655);
																		}}
																		{	/* Cfa/ltype.scm 266 */
																			long BgL_restz00_2739;

																			{	/* Cfa/ltype.scm 266 */
																				int BgL_arg2644z00_2740;

																				BgL_arg2644z00_2740 =
																					(int) (((long) 16));
																				{	/* Cfa/ltype.scm 266 */
																					long BgL_auxz00_3659;

																					BgL_auxz00_3659 =
																						(long) (BgL_arg2644z00_2740);
																					BgL_restz00_2739 =
																						(BgL_offsetz00_2736 %
																						BgL_auxz00_3659);
																			}}
																			{	/* Cfa/ltype.scm 266 */

																				BgL_method5298z00_2729 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2734,
																						(int) (BgL_modz00_2737)),
																					(int) (BgL_restz00_2739));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method5298z00_2729)
													(BgL_method5298z00_2729, (obj_t) (BgL_nodez00_2728),
													BEOA);
										}}
										{	/* Cfa/ltype.scm 267 */
											BgL_valuez00_bglt BgL_arg5543z00_1979;

											{
												BgL_variablez00_bglt BgL_auxz00_3669;

												BgL_auxz00_3669 =
													(BgL_variablez00_bglt) (BgL_varz00_1977);
												BgL_arg5543z00_1979 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3669))->
													BgL_valuez00);
											}
											{	/* Cfa/ltype.scm 267 */
												BgL_variablez00_bglt BgL_variablez00_2756;

												BgL_variablez00_2756 =
													(BgL_variablez00_bglt) (BgL_varz00_1977);
												{	/* Cfa/ltype.scm 267 */
													obj_t BgL_method5286z00_2757;

													{	/* Cfa/ltype.scm 267 */
														BgL_objectz00_bglt BgL_objz00_2758;

														BgL_objz00_2758 =
															(BgL_objectz00_bglt) (BgL_arg5543z00_1979);
														{	/* Cfa/ltype.scm 267 */
															long BgL_objzd2classzd2numz00_2759;

															BgL_objzd2classzd2numz00_2759 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2758);
															{	/* Cfa/ltype.scm 267 */
																obj_t BgL_arg2643z00_2760;

																BgL_arg2643z00_2760 =
																	PROCEDURE_REF
																	(BGl_typezd2variablez12zd2envz12zzcfa_ltypez00,
																	(int) (((long) 1)));
																{	/* Cfa/ltype.scm 267 */
																	obj_t BgL_arrayz00_2762;

																	int BgL_offsetz00_2763;

																	BgL_arrayz00_2762 = BgL_arg2643z00_2760;
																	BgL_offsetz00_2763 =
																		(int) (BgL_objzd2classzd2numz00_2759);
																	{	/* Cfa/ltype.scm 267 */
																		long BgL_offsetz00_2764;

																		BgL_offsetz00_2764 =
																			(
																			(long) (BgL_offsetz00_2763) -
																			OBJECT_TYPE);
																		{	/* Cfa/ltype.scm 267 */
																			long BgL_modz00_2765;

																			{	/* Cfa/ltype.scm 267 */
																				int BgL_arg2645z00_2766;

																				BgL_arg2645z00_2766 =
																					(int) (((long) 16));
																				{	/* Cfa/ltype.scm 267 */
																					long BgL_auxz00_3681;

																					BgL_auxz00_3681 =
																						(long) (BgL_arg2645z00_2766);
																					BgL_modz00_2765 =
																						(BgL_offsetz00_2764 /
																						BgL_auxz00_3681);
																			}}
																			{	/* Cfa/ltype.scm 267 */
																				long BgL_restz00_2767;

																				{	/* Cfa/ltype.scm 267 */
																					int BgL_arg2644z00_2768;

																					BgL_arg2644z00_2768 =
																						(int) (((long) 16));
																					{	/* Cfa/ltype.scm 267 */
																						long BgL_auxz00_3685;

																						BgL_auxz00_3685 =
																							(long) (BgL_arg2644z00_2768);
																						BgL_restz00_2767 =
																							(BgL_offsetz00_2764 %
																							BgL_auxz00_3685);
																				}}
																				{	/* Cfa/ltype.scm 267 */

																					BgL_method5286z00_2757 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2762,
																							(int) (BgL_modz00_2765)),
																						(int) (BgL_restz00_2767));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method5286z00_2757)
														(BgL_method5286z00_2757,
														(obj_t) (BgL_arg5543z00_1979),
														(obj_t) (BgL_variablez00_2756), BEOA);
								}}}}}
								{
									obj_t BgL_l5280z00_3696;

									BgL_l5280z00_3696 = CDR(BgL_l5280z00_1973);
									BgL_l5280z00_1973 = BgL_l5280z00_3696;
									goto BgL_zc3anonymousza35541ze3z83_1974;
								}
							}
						else
							{	/* Cfa/ltype.scm 263 */
								((bool_t) 1);
							}
					}
				}
				{	/* Cfa/ltype.scm 269 */
					BgL_nodez00_bglt BgL_arg5545z00_1982;

					BgL_arg5545z00_1982 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1967))->BgL_bodyz00);
					{	/* Cfa/ltype.scm 269 */
						obj_t BgL_method5298z00_2785;

						{	/* Cfa/ltype.scm 269 */
							BgL_objectz00_bglt BgL_objz00_2786;

							BgL_objz00_2786 = (BgL_objectz00_bglt) (BgL_arg5545z00_1982);
							{	/* Cfa/ltype.scm 269 */
								long BgL_objzd2classzd2numz00_2787;

								BgL_objzd2classzd2numz00_2787 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2786);
								{	/* Cfa/ltype.scm 269 */
									obj_t BgL_arg2643z00_2788;

									BgL_arg2643z00_2788 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
										(int) (((long) 1)));
									{	/* Cfa/ltype.scm 269 */
										obj_t BgL_arrayz00_2790;

										int BgL_offsetz00_2791;

										BgL_arrayz00_2790 = BgL_arg2643z00_2788;
										BgL_offsetz00_2791 = (int) (BgL_objzd2classzd2numz00_2787);
										{	/* Cfa/ltype.scm 269 */
											long BgL_offsetz00_2792;

											BgL_offsetz00_2792 =
												((long) (BgL_offsetz00_2791) - OBJECT_TYPE);
											{	/* Cfa/ltype.scm 269 */
												long BgL_modz00_2793;

												{	/* Cfa/ltype.scm 269 */
													int BgL_arg2645z00_2794;

													BgL_arg2645z00_2794 = (int) (((long) 16));
													{	/* Cfa/ltype.scm 269 */
														long BgL_auxz00_3707;

														BgL_auxz00_3707 = (long) (BgL_arg2645z00_2794);
														BgL_modz00_2793 =
															(BgL_offsetz00_2792 / BgL_auxz00_3707);
												}}
												{	/* Cfa/ltype.scm 269 */
													long BgL_restz00_2795;

													{	/* Cfa/ltype.scm 269 */
														int BgL_arg2644z00_2796;

														BgL_arg2644z00_2796 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 269 */
															long BgL_auxz00_3711;

															BgL_auxz00_3711 = (long) (BgL_arg2644z00_2796);
															BgL_restz00_2795 =
																(BgL_offsetz00_2792 % BgL_auxz00_3711);
													}}
													{	/* Cfa/ltype.scm 269 */

														BgL_method5298z00_2785 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2790,
																(int) (BgL_modz00_2793)),
															(int) (BgL_restz00_2795));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_2785) (BgL_method5298z00_2785,
							(obj_t) (BgL_arg5545z00_1982), BEOA);
					}
				}
			}
		}
	}



/* type-node!-let-fun5332 */
	obj_t BGl_typezd2nodez12zd2letzd2fun5332zc0zzcfa_ltypez00(obj_t
		BgL_envz00_3112, obj_t BgL_nodez00_3113)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 253 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1952;

				BgL_nodez00_1952 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_3113);
				{	/* Cfa/ltype.scm 255 */
					obj_t BgL_g5279z00_1956;

					BgL_g5279z00_1956 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1952))->BgL_localsz00);
					{
						obj_t BgL_l5277z00_1958;

						BgL_l5277z00_1958 = BgL_g5279z00_1956;
					BgL_zc3anonymousza35535ze3z83_1959:
						if (PAIRP(BgL_l5277z00_1958))
							{	/* Cfa/ltype.scm 255 */
								{	/* Cfa/ltype.scm 255 */
									obj_t BgL_arg5537z00_1961;

									BgL_arg5537z00_1961 = CAR(BgL_l5277z00_1958);
									BGl_lightzd2typezd2funz12z12zzcfa_ltypez00(
										(BgL_variablez00_bglt) (BgL_arg5537z00_1961));
								}
								{
									obj_t BgL_l5277z00_3728;

									BgL_l5277z00_3728 = CDR(BgL_l5277z00_1958);
									BgL_l5277z00_1958 = BgL_l5277z00_3728;
									goto BgL_zc3anonymousza35535ze3z83_1959;
								}
							}
						else
							{	/* Cfa/ltype.scm 255 */
								((bool_t) 1);
							}
					}
				}
				{	/* Cfa/ltype.scm 256 */
					BgL_nodez00_bglt BgL_arg5539z00_1964;

					BgL_arg5539z00_1964 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1952))->BgL_bodyz00);
					{	/* Cfa/ltype.scm 256 */
						obj_t BgL_method5298z00_2698;

						{	/* Cfa/ltype.scm 256 */
							BgL_objectz00_bglt BgL_objz00_2699;

							BgL_objz00_2699 = (BgL_objectz00_bglt) (BgL_arg5539z00_1964);
							{	/* Cfa/ltype.scm 256 */
								long BgL_objzd2classzd2numz00_2700;

								BgL_objzd2classzd2numz00_2700 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2699);
								{	/* Cfa/ltype.scm 256 */
									obj_t BgL_arg2643z00_2701;

									BgL_arg2643z00_2701 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
										(int) (((long) 1)));
									{	/* Cfa/ltype.scm 256 */
										obj_t BgL_arrayz00_2703;

										int BgL_offsetz00_2704;

										BgL_arrayz00_2703 = BgL_arg2643z00_2701;
										BgL_offsetz00_2704 = (int) (BgL_objzd2classzd2numz00_2700);
										{	/* Cfa/ltype.scm 256 */
											long BgL_offsetz00_2705;

											BgL_offsetz00_2705 =
												((long) (BgL_offsetz00_2704) - OBJECT_TYPE);
											{	/* Cfa/ltype.scm 256 */
												long BgL_modz00_2706;

												{	/* Cfa/ltype.scm 256 */
													int BgL_arg2645z00_2707;

													BgL_arg2645z00_2707 = (int) (((long) 16));
													{	/* Cfa/ltype.scm 256 */
														long BgL_auxz00_3739;

														BgL_auxz00_3739 = (long) (BgL_arg2645z00_2707);
														BgL_modz00_2706 =
															(BgL_offsetz00_2705 / BgL_auxz00_3739);
												}}
												{	/* Cfa/ltype.scm 256 */
													long BgL_restz00_2708;

													{	/* Cfa/ltype.scm 256 */
														int BgL_arg2644z00_2709;

														BgL_arg2644z00_2709 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 256 */
															long BgL_auxz00_3743;

															BgL_auxz00_3743 = (long) (BgL_arg2644z00_2709);
															BgL_restz00_2708 =
																(BgL_offsetz00_2705 % BgL_auxz00_3743);
													}}
													{	/* Cfa/ltype.scm 256 */

														BgL_method5298z00_2698 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2703,
																(int) (BgL_modz00_2706)),
															(int) (BgL_restz00_2708));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_2698) (BgL_method5298z00_2698,
							(obj_t) (BgL_arg5539z00_1964), BEOA);
					}
				}
			}
		}
	}



/* type-node!-select5330 */
	obj_t BGl_typezd2nodez12zd2select5330z12zzcfa_ltypez00(obj_t BgL_envz00_3114,
		obj_t BgL_nodez00_3115)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 243 */
			{
				BgL_selectz00_bglt BgL_nodez00_1936;

				{	/* Cfa/ltype.scm 244 */
					bool_t BgL_auxz00_3754;

					BgL_nodez00_1936 = (BgL_selectz00_bglt) (BgL_nodez00_3115);
					{	/* Cfa/ltype.scm 245 */
						BgL_nodez00_bglt BgL_arg5529z00_1940;

						BgL_arg5529z00_1940 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1936))->BgL_testz00);
						{	/* Cfa/ltype.scm 245 */
							obj_t BgL_method5298z00_2636;

							{	/* Cfa/ltype.scm 245 */
								BgL_objectz00_bglt BgL_objz00_2637;

								BgL_objz00_2637 = (BgL_objectz00_bglt) (BgL_arg5529z00_1940);
								{	/* Cfa/ltype.scm 245 */
									long BgL_objzd2classzd2numz00_2638;

									BgL_objzd2classzd2numz00_2638 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2637);
									{	/* Cfa/ltype.scm 245 */
										obj_t BgL_arg2643z00_2639;

										BgL_arg2643z00_2639 =
											PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
											(int) (((long) 1)));
										{	/* Cfa/ltype.scm 245 */
											obj_t BgL_arrayz00_2641;

											int BgL_offsetz00_2642;

											BgL_arrayz00_2641 = BgL_arg2643z00_2639;
											BgL_offsetz00_2642 =
												(int) (BgL_objzd2classzd2numz00_2638);
											{	/* Cfa/ltype.scm 245 */
												long BgL_offsetz00_2643;

												BgL_offsetz00_2643 =
													((long) (BgL_offsetz00_2642) - OBJECT_TYPE);
												{	/* Cfa/ltype.scm 245 */
													long BgL_modz00_2644;

													{	/* Cfa/ltype.scm 245 */
														int BgL_arg2645z00_2645;

														BgL_arg2645z00_2645 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 245 */
															long BgL_auxz00_3764;

															BgL_auxz00_3764 = (long) (BgL_arg2645z00_2645);
															BgL_modz00_2644 =
																(BgL_offsetz00_2643 / BgL_auxz00_3764);
													}}
													{	/* Cfa/ltype.scm 245 */
														long BgL_restz00_2646;

														{	/* Cfa/ltype.scm 245 */
															int BgL_arg2644z00_2647;

															BgL_arg2644z00_2647 = (int) (((long) 16));
															{	/* Cfa/ltype.scm 245 */
																long BgL_auxz00_3768;

																BgL_auxz00_3768 = (long) (BgL_arg2644z00_2647);
																BgL_restz00_2646 =
																	(BgL_offsetz00_2643 % BgL_auxz00_3768);
														}}
														{	/* Cfa/ltype.scm 245 */

															BgL_method5298z00_2636 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2641,
																	(int) (BgL_modz00_2644)),
																(int) (BgL_restz00_2646));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5298z00_2636) (BgL_method5298z00_2636,
								(obj_t) (BgL_arg5529z00_1940), BEOA);
					}}
					{	/* Cfa/ltype.scm 246 */
						obj_t BgL_g5276z00_1941;

						BgL_g5276z00_1941 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1936))->BgL_clausesz00);
						{
							obj_t BgL_l5274z00_1943;

							BgL_l5274z00_1943 = BgL_g5276z00_1941;
						BgL_zc3anonymousza35530ze3z83_1944:
							if (PAIRP(BgL_l5274z00_1943))
								{	/* Cfa/ltype.scm 246 */
									{	/* Cfa/ltype.scm 247 */
										obj_t BgL_clausez00_1946;

										BgL_clausez00_1946 = CAR(BgL_l5274z00_1943);
										{	/* Cfa/ltype.scm 247 */
											obj_t BgL_arg5532z00_1947;

											BgL_arg5532z00_1947 = CDR(BgL_clausez00_1946);
											{	/* Cfa/ltype.scm 247 */
												BgL_nodez00_bglt BgL_nodez00_2665;

												BgL_nodez00_2665 =
													(BgL_nodez00_bglt) (BgL_arg5532z00_1947);
												{	/* Cfa/ltype.scm 247 */
													obj_t BgL_method5298z00_2666;

													{	/* Cfa/ltype.scm 247 */
														BgL_objectz00_bglt BgL_objz00_2667;

														BgL_objz00_2667 =
															(BgL_objectz00_bglt) (BgL_nodez00_2665);
														{	/* Cfa/ltype.scm 247 */
															long BgL_objzd2classzd2numz00_2668;

															BgL_objzd2classzd2numz00_2668 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2667);
															{	/* Cfa/ltype.scm 247 */
																obj_t BgL_arg2643z00_2669;

																BgL_arg2643z00_2669 =
																	PROCEDURE_REF
																	(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
																	(int) (((long) 1)));
																{	/* Cfa/ltype.scm 247 */
																	obj_t BgL_arrayz00_2671;

																	int BgL_offsetz00_2672;

																	BgL_arrayz00_2671 = BgL_arg2643z00_2669;
																	BgL_offsetz00_2672 =
																		(int) (BgL_objzd2classzd2numz00_2668);
																	{	/* Cfa/ltype.scm 247 */
																		long BgL_offsetz00_2673;

																		BgL_offsetz00_2673 =
																			(
																			(long) (BgL_offsetz00_2672) -
																			OBJECT_TYPE);
																		{	/* Cfa/ltype.scm 247 */
																			long BgL_modz00_2674;

																			{	/* Cfa/ltype.scm 247 */
																				int BgL_arg2645z00_2675;

																				BgL_arg2645z00_2675 =
																					(int) (((long) 16));
																				{	/* Cfa/ltype.scm 247 */
																					long BgL_auxz00_3792;

																					BgL_auxz00_3792 =
																						(long) (BgL_arg2645z00_2675);
																					BgL_modz00_2674 =
																						(BgL_offsetz00_2673 /
																						BgL_auxz00_3792);
																			}}
																			{	/* Cfa/ltype.scm 247 */
																				long BgL_restz00_2676;

																				{	/* Cfa/ltype.scm 247 */
																					int BgL_arg2644z00_2677;

																					BgL_arg2644z00_2677 =
																						(int) (((long) 16));
																					{	/* Cfa/ltype.scm 247 */
																						long BgL_auxz00_3796;

																						BgL_auxz00_3796 =
																							(long) (BgL_arg2644z00_2677);
																						BgL_restz00_2676 =
																							(BgL_offsetz00_2673 %
																							BgL_auxz00_3796);
																				}}
																				{	/* Cfa/ltype.scm 247 */

																					BgL_method5298z00_2666 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2671,
																							(int) (BgL_modz00_2674)),
																						(int) (BgL_restz00_2676));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method5298z00_2666)
														(BgL_method5298z00_2666, (obj_t) (BgL_nodez00_2665),
														BEOA);
									}}}}
									{
										obj_t BgL_l5274z00_3806;

										BgL_l5274z00_3806 = CDR(BgL_l5274z00_1943);
										BgL_l5274z00_1943 = BgL_l5274z00_3806;
										goto BgL_zc3anonymousza35530ze3z83_1944;
									}
								}
							else
								{	/* Cfa/ltype.scm 246 */
									BgL_auxz00_3754 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_3754);
				}
			}
		}
	}



/* type-node!-fail5328 */
	obj_t BGl_typezd2nodez12zd2fail5328z12zzcfa_ltypez00(obj_t BgL_envz00_3116,
		obj_t BgL_nodez00_3117)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 234 */
			{
				BgL_failz00_bglt BgL_nodez00_1927;

				BgL_nodez00_1927 = (BgL_failz00_bglt) (BgL_nodez00_3117);
				{	/* Cfa/ltype.scm 236 */
					BgL_nodez00_bglt BgL_arg5525z00_1931;

					BgL_arg5525z00_1931 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1927))->BgL_procz00);
					{	/* Cfa/ltype.scm 236 */
						obj_t BgL_method5298z00_2555;

						{	/* Cfa/ltype.scm 236 */
							BgL_objectz00_bglt BgL_objz00_2556;

							BgL_objz00_2556 = (BgL_objectz00_bglt) (BgL_arg5525z00_1931);
							{	/* Cfa/ltype.scm 236 */
								long BgL_objzd2classzd2numz00_2557;

								BgL_objzd2classzd2numz00_2557 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2556);
								{	/* Cfa/ltype.scm 236 */
									obj_t BgL_arg2643z00_2558;

									BgL_arg2643z00_2558 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
										(int) (((long) 1)));
									{	/* Cfa/ltype.scm 236 */
										obj_t BgL_arrayz00_2560;

										int BgL_offsetz00_2561;

										BgL_arrayz00_2560 = BgL_arg2643z00_2558;
										BgL_offsetz00_2561 = (int) (BgL_objzd2classzd2numz00_2557);
										{	/* Cfa/ltype.scm 236 */
											long BgL_offsetz00_2562;

											BgL_offsetz00_2562 =
												((long) (BgL_offsetz00_2561) - OBJECT_TYPE);
											{	/* Cfa/ltype.scm 236 */
												long BgL_modz00_2563;

												{	/* Cfa/ltype.scm 236 */
													int BgL_arg2645z00_2564;

													BgL_arg2645z00_2564 = (int) (((long) 16));
													{	/* Cfa/ltype.scm 236 */
														long BgL_auxz00_3819;

														BgL_auxz00_3819 = (long) (BgL_arg2645z00_2564);
														BgL_modz00_2563 =
															(BgL_offsetz00_2562 / BgL_auxz00_3819);
												}}
												{	/* Cfa/ltype.scm 236 */
													long BgL_restz00_2565;

													{	/* Cfa/ltype.scm 236 */
														int BgL_arg2644z00_2566;

														BgL_arg2644z00_2566 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 236 */
															long BgL_auxz00_3823;

															BgL_auxz00_3823 = (long) (BgL_arg2644z00_2566);
															BgL_restz00_2565 =
																(BgL_offsetz00_2562 % BgL_auxz00_3823);
													}}
													{	/* Cfa/ltype.scm 236 */

														BgL_method5298z00_2555 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2560,
																(int) (BgL_modz00_2563)),
															(int) (BgL_restz00_2565));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_2555) (BgL_method5298z00_2555,
							(obj_t) (BgL_arg5525z00_1931), BEOA);
				}}
				{	/* Cfa/ltype.scm 237 */
					BgL_nodez00_bglt BgL_arg5526z00_1932;

					BgL_arg5526z00_1932 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1927))->BgL_msgz00);
					{	/* Cfa/ltype.scm 237 */
						obj_t BgL_method5298z00_2582;

						{	/* Cfa/ltype.scm 237 */
							BgL_objectz00_bglt BgL_objz00_2583;

							BgL_objz00_2583 = (BgL_objectz00_bglt) (BgL_arg5526z00_1932);
							{	/* Cfa/ltype.scm 237 */
								long BgL_objzd2classzd2numz00_2584;

								BgL_objzd2classzd2numz00_2584 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2583);
								{	/* Cfa/ltype.scm 237 */
									obj_t BgL_arg2643z00_2585;

									BgL_arg2643z00_2585 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
										(int) (((long) 1)));
									{	/* Cfa/ltype.scm 237 */
										obj_t BgL_arrayz00_2587;

										int BgL_offsetz00_2588;

										BgL_arrayz00_2587 = BgL_arg2643z00_2585;
										BgL_offsetz00_2588 = (int) (BgL_objzd2classzd2numz00_2584);
										{	/* Cfa/ltype.scm 237 */
											long BgL_offsetz00_2589;

											BgL_offsetz00_2589 =
												((long) (BgL_offsetz00_2588) - OBJECT_TYPE);
											{	/* Cfa/ltype.scm 237 */
												long BgL_modz00_2590;

												{	/* Cfa/ltype.scm 237 */
													int BgL_arg2645z00_2591;

													BgL_arg2645z00_2591 = (int) (((long) 16));
													{	/* Cfa/ltype.scm 237 */
														long BgL_auxz00_3842;

														BgL_auxz00_3842 = (long) (BgL_arg2645z00_2591);
														BgL_modz00_2590 =
															(BgL_offsetz00_2589 / BgL_auxz00_3842);
												}}
												{	/* Cfa/ltype.scm 237 */
													long BgL_restz00_2592;

													{	/* Cfa/ltype.scm 237 */
														int BgL_arg2644z00_2593;

														BgL_arg2644z00_2593 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 237 */
															long BgL_auxz00_3846;

															BgL_auxz00_3846 = (long) (BgL_arg2644z00_2593);
															BgL_restz00_2592 =
																(BgL_offsetz00_2589 % BgL_auxz00_3846);
													}}
													{	/* Cfa/ltype.scm 237 */

														BgL_method5298z00_2582 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2587,
																(int) (BgL_modz00_2590)),
															(int) (BgL_restz00_2592));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_2582) (BgL_method5298z00_2582,
							(obj_t) (BgL_arg5526z00_1932), BEOA);
				}}
				{	/* Cfa/ltype.scm 238 */
					BgL_nodez00_bglt BgL_arg5527z00_1933;

					BgL_arg5527z00_1933 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1927))->BgL_objz00);
					{	/* Cfa/ltype.scm 238 */
						obj_t BgL_method5298z00_2609;

						{	/* Cfa/ltype.scm 238 */
							BgL_objectz00_bglt BgL_objz00_2610;

							BgL_objz00_2610 = (BgL_objectz00_bglt) (BgL_arg5527z00_1933);
							{	/* Cfa/ltype.scm 238 */
								long BgL_objzd2classzd2numz00_2611;

								BgL_objzd2classzd2numz00_2611 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2610);
								{	/* Cfa/ltype.scm 238 */
									obj_t BgL_arg2643z00_2612;

									BgL_arg2643z00_2612 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
										(int) (((long) 1)));
									{	/* Cfa/ltype.scm 238 */
										obj_t BgL_arrayz00_2614;

										int BgL_offsetz00_2615;

										BgL_arrayz00_2614 = BgL_arg2643z00_2612;
										BgL_offsetz00_2615 = (int) (BgL_objzd2classzd2numz00_2611);
										{	/* Cfa/ltype.scm 238 */
											long BgL_offsetz00_2616;

											BgL_offsetz00_2616 =
												((long) (BgL_offsetz00_2615) - OBJECT_TYPE);
											{	/* Cfa/ltype.scm 238 */
												long BgL_modz00_2617;

												{	/* Cfa/ltype.scm 238 */
													int BgL_arg2645z00_2618;

													BgL_arg2645z00_2618 = (int) (((long) 16));
													{	/* Cfa/ltype.scm 238 */
														long BgL_auxz00_3865;

														BgL_auxz00_3865 = (long) (BgL_arg2645z00_2618);
														BgL_modz00_2617 =
															(BgL_offsetz00_2616 / BgL_auxz00_3865);
												}}
												{	/* Cfa/ltype.scm 238 */
													long BgL_restz00_2619;

													{	/* Cfa/ltype.scm 238 */
														int BgL_arg2644z00_2620;

														BgL_arg2644z00_2620 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 238 */
															long BgL_auxz00_3869;

															BgL_auxz00_3869 = (long) (BgL_arg2644z00_2620);
															BgL_restz00_2619 =
																(BgL_offsetz00_2616 % BgL_auxz00_3869);
													}}
													{	/* Cfa/ltype.scm 238 */

														BgL_method5298z00_2609 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2614,
																(int) (BgL_modz00_2617)),
															(int) (BgL_restz00_2619));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_2609) (BgL_method5298z00_2609,
							(obj_t) (BgL_arg5527z00_1933), BEOA);
					}
				}
			}
		}
	}



/* type-node!-condition5326 */
	obj_t BGl_typezd2nodez12zd2condition5326z12zzcfa_ltypez00(obj_t
		BgL_envz00_3118, obj_t BgL_nodez00_3119)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 225 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1918;

				BgL_nodez00_1918 = (BgL_conditionalz00_bglt) (BgL_nodez00_3119);
				{	/* Cfa/ltype.scm 227 */
					BgL_nodez00_bglt BgL_arg5521z00_1922;

					BgL_arg5521z00_1922 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1918))->BgL_testz00);
					{	/* Cfa/ltype.scm 227 */
						obj_t BgL_method5298z00_2474;

						{	/* Cfa/ltype.scm 227 */
							BgL_objectz00_bglt BgL_objz00_2475;

							BgL_objz00_2475 = (BgL_objectz00_bglt) (BgL_arg5521z00_1922);
							{	/* Cfa/ltype.scm 227 */
								long BgL_objzd2classzd2numz00_2476;

								BgL_objzd2classzd2numz00_2476 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2475);
								{	/* Cfa/ltype.scm 227 */
									obj_t BgL_arg2643z00_2477;

									BgL_arg2643z00_2477 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
										(int) (((long) 1)));
									{	/* Cfa/ltype.scm 227 */
										obj_t BgL_arrayz00_2479;

										int BgL_offsetz00_2480;

										BgL_arrayz00_2479 = BgL_arg2643z00_2477;
										BgL_offsetz00_2480 = (int) (BgL_objzd2classzd2numz00_2476);
										{	/* Cfa/ltype.scm 227 */
											long BgL_offsetz00_2481;

											BgL_offsetz00_2481 =
												((long) (BgL_offsetz00_2480) - OBJECT_TYPE);
											{	/* Cfa/ltype.scm 227 */
												long BgL_modz00_2482;

												{	/* Cfa/ltype.scm 227 */
													int BgL_arg2645z00_2483;

													BgL_arg2645z00_2483 = (int) (((long) 16));
													{	/* Cfa/ltype.scm 227 */
														long BgL_auxz00_3889;

														BgL_auxz00_3889 = (long) (BgL_arg2645z00_2483);
														BgL_modz00_2482 =
															(BgL_offsetz00_2481 / BgL_auxz00_3889);
												}}
												{	/* Cfa/ltype.scm 227 */
													long BgL_restz00_2484;

													{	/* Cfa/ltype.scm 227 */
														int BgL_arg2644z00_2485;

														BgL_arg2644z00_2485 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 227 */
															long BgL_auxz00_3893;

															BgL_auxz00_3893 = (long) (BgL_arg2644z00_2485);
															BgL_restz00_2484 =
																(BgL_offsetz00_2481 % BgL_auxz00_3893);
													}}
													{	/* Cfa/ltype.scm 227 */

														BgL_method5298z00_2474 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2479,
																(int) (BgL_modz00_2482)),
															(int) (BgL_restz00_2484));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_2474) (BgL_method5298z00_2474,
							(obj_t) (BgL_arg5521z00_1922), BEOA);
				}}
				{	/* Cfa/ltype.scm 228 */
					BgL_nodez00_bglt BgL_arg5522z00_1923;

					BgL_arg5522z00_1923 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1918))->BgL_truez00);
					{	/* Cfa/ltype.scm 228 */
						obj_t BgL_method5298z00_2501;

						{	/* Cfa/ltype.scm 228 */
							BgL_objectz00_bglt BgL_objz00_2502;

							BgL_objz00_2502 = (BgL_objectz00_bglt) (BgL_arg5522z00_1923);
							{	/* Cfa/ltype.scm 228 */
								long BgL_objzd2classzd2numz00_2503;

								BgL_objzd2classzd2numz00_2503 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2502);
								{	/* Cfa/ltype.scm 228 */
									obj_t BgL_arg2643z00_2504;

									BgL_arg2643z00_2504 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
										(int) (((long) 1)));
									{	/* Cfa/ltype.scm 228 */
										obj_t BgL_arrayz00_2506;

										int BgL_offsetz00_2507;

										BgL_arrayz00_2506 = BgL_arg2643z00_2504;
										BgL_offsetz00_2507 = (int) (BgL_objzd2classzd2numz00_2503);
										{	/* Cfa/ltype.scm 228 */
											long BgL_offsetz00_2508;

											BgL_offsetz00_2508 =
												((long) (BgL_offsetz00_2507) - OBJECT_TYPE);
											{	/* Cfa/ltype.scm 228 */
												long BgL_modz00_2509;

												{	/* Cfa/ltype.scm 228 */
													int BgL_arg2645z00_2510;

													BgL_arg2645z00_2510 = (int) (((long) 16));
													{	/* Cfa/ltype.scm 228 */
														long BgL_auxz00_3912;

														BgL_auxz00_3912 = (long) (BgL_arg2645z00_2510);
														BgL_modz00_2509 =
															(BgL_offsetz00_2508 / BgL_auxz00_3912);
												}}
												{	/* Cfa/ltype.scm 228 */
													long BgL_restz00_2511;

													{	/* Cfa/ltype.scm 228 */
														int BgL_arg2644z00_2512;

														BgL_arg2644z00_2512 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 228 */
															long BgL_auxz00_3916;

															BgL_auxz00_3916 = (long) (BgL_arg2644z00_2512);
															BgL_restz00_2511 =
																(BgL_offsetz00_2508 % BgL_auxz00_3916);
													}}
													{	/* Cfa/ltype.scm 228 */

														BgL_method5298z00_2501 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2506,
																(int) (BgL_modz00_2509)),
															(int) (BgL_restz00_2511));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_2501) (BgL_method5298z00_2501,
							(obj_t) (BgL_arg5522z00_1923), BEOA);
				}}
				{	/* Cfa/ltype.scm 229 */
					BgL_nodez00_bglt BgL_arg5523z00_1924;

					BgL_arg5523z00_1924 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1918))->BgL_falsez00);
					{	/* Cfa/ltype.scm 229 */
						obj_t BgL_method5298z00_2528;

						{	/* Cfa/ltype.scm 229 */
							BgL_objectz00_bglt BgL_objz00_2529;

							BgL_objz00_2529 = (BgL_objectz00_bglt) (BgL_arg5523z00_1924);
							{	/* Cfa/ltype.scm 229 */
								long BgL_objzd2classzd2numz00_2530;

								BgL_objzd2classzd2numz00_2530 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2529);
								{	/* Cfa/ltype.scm 229 */
									obj_t BgL_arg2643z00_2531;

									BgL_arg2643z00_2531 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
										(int) (((long) 1)));
									{	/* Cfa/ltype.scm 229 */
										obj_t BgL_arrayz00_2533;

										int BgL_offsetz00_2534;

										BgL_arrayz00_2533 = BgL_arg2643z00_2531;
										BgL_offsetz00_2534 = (int) (BgL_objzd2classzd2numz00_2530);
										{	/* Cfa/ltype.scm 229 */
											long BgL_offsetz00_2535;

											BgL_offsetz00_2535 =
												((long) (BgL_offsetz00_2534) - OBJECT_TYPE);
											{	/* Cfa/ltype.scm 229 */
												long BgL_modz00_2536;

												{	/* Cfa/ltype.scm 229 */
													int BgL_arg2645z00_2537;

													BgL_arg2645z00_2537 = (int) (((long) 16));
													{	/* Cfa/ltype.scm 229 */
														long BgL_auxz00_3935;

														BgL_auxz00_3935 = (long) (BgL_arg2645z00_2537);
														BgL_modz00_2536 =
															(BgL_offsetz00_2535 / BgL_auxz00_3935);
												}}
												{	/* Cfa/ltype.scm 229 */
													long BgL_restz00_2538;

													{	/* Cfa/ltype.scm 229 */
														int BgL_arg2644z00_2539;

														BgL_arg2644z00_2539 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 229 */
															long BgL_auxz00_3939;

															BgL_auxz00_3939 = (long) (BgL_arg2644z00_2539);
															BgL_restz00_2538 =
																(BgL_offsetz00_2535 % BgL_auxz00_3939);
													}}
													{	/* Cfa/ltype.scm 229 */

														BgL_method5298z00_2528 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2533,
																(int) (BgL_modz00_2536)),
															(int) (BgL_restz00_2538));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_2528) (BgL_method5298z00_2528,
							(obj_t) (BgL_arg5523z00_1924), BEOA);
					}
				}
			}
		}
	}



/* type-node!-setq5324 */
	obj_t BGl_typezd2nodez12zd2setq5324z12zzcfa_ltypez00(obj_t BgL_envz00_3120,
		obj_t BgL_nodez00_3121)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 217 */
			{
				BgL_setqz00_bglt BgL_nodez00_1910;

				BgL_nodez00_1910 = (BgL_setqz00_bglt) (BgL_nodez00_3121);
				{	/* Cfa/ltype.scm 219 */
					BgL_nodez00_bglt BgL_arg5518z00_1914;

					BgL_arg5518z00_1914 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1910))->BgL_valuez00);
					{	/* Cfa/ltype.scm 219 */
						obj_t BgL_method5298z00_2420;

						{	/* Cfa/ltype.scm 219 */
							BgL_objectz00_bglt BgL_objz00_2421;

							BgL_objz00_2421 = (BgL_objectz00_bglt) (BgL_arg5518z00_1914);
							{	/* Cfa/ltype.scm 219 */
								long BgL_objzd2classzd2numz00_2422;

								BgL_objzd2classzd2numz00_2422 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2421);
								{	/* Cfa/ltype.scm 219 */
									obj_t BgL_arg2643z00_2423;

									BgL_arg2643z00_2423 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
										(int) (((long) 1)));
									{	/* Cfa/ltype.scm 219 */
										obj_t BgL_arrayz00_2425;

										int BgL_offsetz00_2426;

										BgL_arrayz00_2425 = BgL_arg2643z00_2423;
										BgL_offsetz00_2426 = (int) (BgL_objzd2classzd2numz00_2422);
										{	/* Cfa/ltype.scm 219 */
											long BgL_offsetz00_2427;

											BgL_offsetz00_2427 =
												((long) (BgL_offsetz00_2426) - OBJECT_TYPE);
											{	/* Cfa/ltype.scm 219 */
												long BgL_modz00_2428;

												{	/* Cfa/ltype.scm 219 */
													int BgL_arg2645z00_2429;

													BgL_arg2645z00_2429 = (int) (((long) 16));
													{	/* Cfa/ltype.scm 219 */
														long BgL_auxz00_3959;

														BgL_auxz00_3959 = (long) (BgL_arg2645z00_2429);
														BgL_modz00_2428 =
															(BgL_offsetz00_2427 / BgL_auxz00_3959);
												}}
												{	/* Cfa/ltype.scm 219 */
													long BgL_restz00_2430;

													{	/* Cfa/ltype.scm 219 */
														int BgL_arg2644z00_2431;

														BgL_arg2644z00_2431 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 219 */
															long BgL_auxz00_3963;

															BgL_auxz00_3963 = (long) (BgL_arg2644z00_2431);
															BgL_restz00_2430 =
																(BgL_offsetz00_2427 % BgL_auxz00_3963);
													}}
													{	/* Cfa/ltype.scm 219 */

														BgL_method5298z00_2420 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2425,
																(int) (BgL_modz00_2428)),
															(int) (BgL_restz00_2430));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_2420) (BgL_method5298z00_2420,
							(obj_t) (BgL_arg5518z00_1914), BEOA);
				}}
				{	/* Cfa/ltype.scm 220 */
					BgL_varz00_bglt BgL_arg5519z00_1915;

					BgL_arg5519z00_1915 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1910))->BgL_varz00);
					{	/* Cfa/ltype.scm 220 */
						BgL_nodez00_bglt BgL_nodez00_2446;

						BgL_nodez00_2446 = (BgL_nodez00_bglt) (BgL_arg5519z00_1915);
						{	/* Cfa/ltype.scm 220 */
							obj_t BgL_method5298z00_2447;

							{	/* Cfa/ltype.scm 220 */
								BgL_objectz00_bglt BgL_objz00_2448;

								BgL_objz00_2448 = (BgL_objectz00_bglt) (BgL_nodez00_2446);
								{	/* Cfa/ltype.scm 220 */
									long BgL_objzd2classzd2numz00_2449;

									BgL_objzd2classzd2numz00_2449 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2448);
									{	/* Cfa/ltype.scm 220 */
										obj_t BgL_arg2643z00_2450;

										BgL_arg2643z00_2450 =
											PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
											(int) (((long) 1)));
										{	/* Cfa/ltype.scm 220 */
											obj_t BgL_arrayz00_2452;

											int BgL_offsetz00_2453;

											BgL_arrayz00_2452 = BgL_arg2643z00_2450;
											BgL_offsetz00_2453 =
												(int) (BgL_objzd2classzd2numz00_2449);
											{	/* Cfa/ltype.scm 220 */
												long BgL_offsetz00_2454;

												BgL_offsetz00_2454 =
													((long) (BgL_offsetz00_2453) - OBJECT_TYPE);
												{	/* Cfa/ltype.scm 220 */
													long BgL_modz00_2455;

													{	/* Cfa/ltype.scm 220 */
														int BgL_arg2645z00_2456;

														BgL_arg2645z00_2456 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 220 */
															long BgL_auxz00_3983;

															BgL_auxz00_3983 = (long) (BgL_arg2645z00_2456);
															BgL_modz00_2455 =
																(BgL_offsetz00_2454 / BgL_auxz00_3983);
													}}
													{	/* Cfa/ltype.scm 220 */
														long BgL_restz00_2457;

														{	/* Cfa/ltype.scm 220 */
															int BgL_arg2644z00_2458;

															BgL_arg2644z00_2458 = (int) (((long) 16));
															{	/* Cfa/ltype.scm 220 */
																long BgL_auxz00_3987;

																BgL_auxz00_3987 = (long) (BgL_arg2644z00_2458);
																BgL_restz00_2457 =
																	(BgL_offsetz00_2454 % BgL_auxz00_3987);
														}}
														{	/* Cfa/ltype.scm 220 */

															BgL_method5298z00_2447 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2452,
																	(int) (BgL_modz00_2455)),
																(int) (BgL_restz00_2457));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method5298z00_2447) (BgL_method5298z00_2447,
								(obj_t) (BgL_nodez00_2446), BEOA);
						}
					}
				}
			}
		}
	}



/* type-node!-cast5322 */
	obj_t BGl_typezd2nodez12zd2cast5322z12zzcfa_ltypez00(obj_t BgL_envz00_3122,
		obj_t BgL_nodez00_3123)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 210 */
			{
				BgL_castz00_bglt BgL_nodez00_1903;

				BgL_nodez00_1903 = (BgL_castz00_bglt) (BgL_nodez00_3123);
				{	/* Cfa/ltype.scm 211 */
					BgL_nodez00_bglt BgL_arg5516z00_2390;

					BgL_arg5516z00_2390 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_1903))->BgL_argz00);
					{	/* Cfa/ltype.scm 211 */
						obj_t BgL_method5298z00_2393;

						{	/* Cfa/ltype.scm 211 */
							BgL_objectz00_bglt BgL_objz00_2394;

							BgL_objz00_2394 = (BgL_objectz00_bglt) (BgL_arg5516z00_2390);
							{	/* Cfa/ltype.scm 211 */
								long BgL_objzd2classzd2numz00_2395;

								BgL_objzd2classzd2numz00_2395 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2394);
								{	/* Cfa/ltype.scm 211 */
									obj_t BgL_arg2643z00_2396;

									BgL_arg2643z00_2396 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
										(int) (((long) 1)));
									{	/* Cfa/ltype.scm 211 */
										obj_t BgL_arrayz00_2398;

										int BgL_offsetz00_2399;

										BgL_arrayz00_2398 = BgL_arg2643z00_2396;
										BgL_offsetz00_2399 = (int) (BgL_objzd2classzd2numz00_2395);
										{	/* Cfa/ltype.scm 211 */
											long BgL_offsetz00_2400;

											BgL_offsetz00_2400 =
												((long) (BgL_offsetz00_2399) - OBJECT_TYPE);
											{	/* Cfa/ltype.scm 211 */
												long BgL_modz00_2401;

												{	/* Cfa/ltype.scm 211 */
													int BgL_arg2645z00_2402;

													BgL_arg2645z00_2402 = (int) (((long) 16));
													{	/* Cfa/ltype.scm 211 */
														long BgL_auxz00_4007;

														BgL_auxz00_4007 = (long) (BgL_arg2645z00_2402);
														BgL_modz00_2401 =
															(BgL_offsetz00_2400 / BgL_auxz00_4007);
												}}
												{	/* Cfa/ltype.scm 211 */
													long BgL_restz00_2403;

													{	/* Cfa/ltype.scm 211 */
														int BgL_arg2644z00_2404;

														BgL_arg2644z00_2404 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 211 */
															long BgL_auxz00_4011;

															BgL_auxz00_4011 = (long) (BgL_arg2644z00_2404);
															BgL_restz00_2403 =
																(BgL_offsetz00_2400 % BgL_auxz00_4011);
													}}
													{	/* Cfa/ltype.scm 211 */

														BgL_method5298z00_2393 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2398,
																(int) (BgL_modz00_2401)),
															(int) (BgL_restz00_2403));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_2393) (BgL_method5298z00_2393,
							(obj_t) (BgL_arg5516z00_2390), BEOA);
					}
				}
			}
		}
	}



/* type-node!-vset!5320 */
	obj_t BGl_typezd2nodez12zd2vsetz125320z00zzcfa_ltypez00(obj_t BgL_envz00_3124,
		obj_t BgL_nodez00_3125)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 201 */
			{
				BgL_vsetz12z12_bglt BgL_nodez00_1895;

				BgL_nodez00_1895 = (BgL_vsetz12z12_bglt) (BgL_nodez00_3125);
				{

					{	/* Cfa/ltype.scm 201 */
						obj_t BgL_nextzd2method5319zd2_1901;

						BgL_nextzd2method5319zd2_1901 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_nodez00_1895),
							BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
							BGl_vsetz12z12zzast_nodez00);
						if (PROCEDUREP(BgL_nextzd2method5319zd2_1901))
							{	/* Cfa/ltype.scm 201 */
								PROCEDURE_ENTRY(BgL_nextzd2method5319zd2_1901)
									(BgL_nextzd2method5319zd2_1901, (obj_t) (BgL_nodez00_1895),
									BEOA);
							}
						else
							{	/* Cfa/ltype.scm 201 */
								{	/* Cfa/ltype.scm 201 */
									BgL_nodez00_bglt BgL_nodez00_2363;

									BgL_nodez00_2363 = (BgL_nodez00_bglt) (BgL_nodez00_1895);
									{	/* Cfa/ltype.scm 201 */
										obj_t BgL_method5298z00_2364;

										{	/* Cfa/ltype.scm 201 */
											BgL_objectz00_bglt BgL_objz00_2365;

											BgL_objz00_2365 = (BgL_objectz00_bglt) (BgL_nodez00_2363);
											{	/* Cfa/ltype.scm 201 */
												long BgL_objzd2classzd2numz00_2366;

												BgL_objzd2classzd2numz00_2366 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2365);
												{	/* Cfa/ltype.scm 201 */
													obj_t BgL_arg2643z00_2367;

													BgL_arg2643z00_2367 =
														PROCEDURE_REF
														(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
														(int) (((long) 1)));
													{	/* Cfa/ltype.scm 201 */
														obj_t BgL_arrayz00_2369;

														int BgL_offsetz00_2370;

														BgL_arrayz00_2369 = BgL_arg2643z00_2367;
														BgL_offsetz00_2370 =
															(int) (BgL_objzd2classzd2numz00_2366);
														{	/* Cfa/ltype.scm 201 */
															long BgL_offsetz00_2371;

															BgL_offsetz00_2371 =
																((long) (BgL_offsetz00_2370) - OBJECT_TYPE);
															{	/* Cfa/ltype.scm 201 */
																long BgL_modz00_2372;

																{	/* Cfa/ltype.scm 201 */
																	int BgL_arg2645z00_2373;

																	BgL_arg2645z00_2373 = (int) (((long) 16));
																	{	/* Cfa/ltype.scm 201 */
																		long BgL_auxz00_4038;

																		BgL_auxz00_4038 =
																			(long) (BgL_arg2645z00_2373);
																		BgL_modz00_2372 =
																			(BgL_offsetz00_2371 / BgL_auxz00_4038);
																}}
																{	/* Cfa/ltype.scm 201 */
																	long BgL_restz00_2374;

																	{	/* Cfa/ltype.scm 201 */
																		int BgL_arg2644z00_2375;

																		BgL_arg2644z00_2375 = (int) (((long) 16));
																		{	/* Cfa/ltype.scm 201 */
																			long BgL_auxz00_4042;

																			BgL_auxz00_4042 =
																				(long) (BgL_arg2644z00_2375);
																			BgL_restz00_2374 =
																				(BgL_offsetz00_2371 % BgL_auxz00_4042);
																	}}
																	{	/* Cfa/ltype.scm 201 */

																		BgL_method5298z00_2364 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2369,
																				(int) (BgL_modz00_2372)),
																			(int) (BgL_restz00_2374));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method5298z00_2364)
											(BgL_method5298z00_2364, (obj_t) (BgL_nodez00_2363),
											BEOA);
					}}}}
					{	/* Cfa/ltype.scm 204 */
						bool_t BgL_testz00_4052;

						{	/* Cfa/ltype.scm 204 */
							BgL_typez00_bglt BgL_arg5514z00_1900;

							BgL_arg5514z00_1900 =
								(((BgL_vsetz12z12_bglt) CREF(BgL_nodez00_1895))->BgL_ftypez00);
							BgL_testz00_4052 =
								(
								(obj_t) (BgL_arg5514z00_1900) == BGl_za2_za2z00zztype_cachez00);
						}
						if (BgL_testz00_4052)
							{
								BgL_typez00_bglt BgL_auxz00_4056;

								BgL_auxz00_4056 =
									(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
								return
									((((BgL_vsetz12z12_bglt) CREF(BgL_nodez00_1895))->
										BgL_ftypez00) =
									((BgL_typez00_bglt) BgL_auxz00_4056), BUNSPEC);
							}
						else
							{	/* Cfa/ltype.scm 204 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* type-node!-vref5318 */
	obj_t BGl_typezd2nodez12zd2vref5318z12zzcfa_ltypez00(obj_t BgL_envz00_3126,
		obj_t BgL_nodez00_3127)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 192 */
			{
				BgL_vrefz00_bglt BgL_nodez00_1887;

				BgL_nodez00_1887 = (BgL_vrefz00_bglt) (BgL_nodez00_3127);
				{

					{	/* Cfa/ltype.scm 192 */
						obj_t BgL_nextzd2method5317zd2_1893;

						BgL_nextzd2method5317zd2_1893 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_nodez00_1887),
							BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
							BGl_vrefz00zzast_nodez00);
						if (PROCEDUREP(BgL_nextzd2method5317zd2_1893))
							{	/* Cfa/ltype.scm 192 */
								PROCEDURE_ENTRY(BgL_nextzd2method5317zd2_1893)
									(BgL_nextzd2method5317zd2_1893, (obj_t) (BgL_nodez00_1887),
									BEOA);
							}
						else
							{	/* Cfa/ltype.scm 192 */
								{	/* Cfa/ltype.scm 192 */
									BgL_nodez00_bglt BgL_nodez00_2333;

									BgL_nodez00_2333 = (BgL_nodez00_bglt) (BgL_nodez00_1887);
									{	/* Cfa/ltype.scm 192 */
										obj_t BgL_method5298z00_2334;

										{	/* Cfa/ltype.scm 192 */
											BgL_objectz00_bglt BgL_objz00_2335;

											BgL_objz00_2335 = (BgL_objectz00_bglt) (BgL_nodez00_2333);
											{	/* Cfa/ltype.scm 192 */
												long BgL_objzd2classzd2numz00_2336;

												BgL_objzd2classzd2numz00_2336 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2335);
												{	/* Cfa/ltype.scm 192 */
													obj_t BgL_arg2643z00_2337;

													BgL_arg2643z00_2337 =
														PROCEDURE_REF
														(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
														(int) (((long) 1)));
													{	/* Cfa/ltype.scm 192 */
														obj_t BgL_arrayz00_2339;

														int BgL_offsetz00_2340;

														BgL_arrayz00_2339 = BgL_arg2643z00_2337;
														BgL_offsetz00_2340 =
															(int) (BgL_objzd2classzd2numz00_2336);
														{	/* Cfa/ltype.scm 192 */
															long BgL_offsetz00_2341;

															BgL_offsetz00_2341 =
																((long) (BgL_offsetz00_2340) - OBJECT_TYPE);
															{	/* Cfa/ltype.scm 192 */
																long BgL_modz00_2342;

																{	/* Cfa/ltype.scm 192 */
																	int BgL_arg2645z00_2343;

																	BgL_arg2645z00_2343 = (int) (((long) 16));
																	{	/* Cfa/ltype.scm 192 */
																		long BgL_auxz00_4076;

																		BgL_auxz00_4076 =
																			(long) (BgL_arg2645z00_2343);
																		BgL_modz00_2342 =
																			(BgL_offsetz00_2341 / BgL_auxz00_4076);
																}}
																{	/* Cfa/ltype.scm 192 */
																	long BgL_restz00_2344;

																	{	/* Cfa/ltype.scm 192 */
																		int BgL_arg2644z00_2345;

																		BgL_arg2644z00_2345 = (int) (((long) 16));
																		{	/* Cfa/ltype.scm 192 */
																			long BgL_auxz00_4080;

																			BgL_auxz00_4080 =
																				(long) (BgL_arg2644z00_2345);
																			BgL_restz00_2344 =
																				(BgL_offsetz00_2341 % BgL_auxz00_4080);
																	}}
																	{	/* Cfa/ltype.scm 192 */

																		BgL_method5298z00_2334 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2339,
																				(int) (BgL_modz00_2342)),
																			(int) (BgL_restz00_2344));
										}}}}}}}}
										PROCEDURE_ENTRY(BgL_method5298z00_2334)
											(BgL_method5298z00_2334, (obj_t) (BgL_nodez00_2333),
											BEOA);
					}}}}
					{	/* Cfa/ltype.scm 195 */
						bool_t BgL_testz00_4090;

						{	/* Cfa/ltype.scm 195 */
							BgL_typez00_bglt BgL_arg5511z00_1892;

							BgL_arg5511z00_1892 =
								(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1887))->BgL_ftypez00);
							BgL_testz00_4090 =
								(
								(obj_t) (BgL_arg5511z00_1892) == BGl_za2_za2z00zztype_cachez00);
						}
						if (BgL_testz00_4090)
							{
								BgL_typez00_bglt BgL_auxz00_4094;

								BgL_auxz00_4094 =
									(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
								return
									((((BgL_vrefz00_bglt) CREF(BgL_nodez00_1887))->BgL_ftypez00) =
									((BgL_typez00_bglt) BgL_auxz00_4094), BUNSPEC);
							}
						else
							{	/* Cfa/ltype.scm 195 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* type-node!-extern5316 */
	obj_t BGl_typezd2nodez12zd2extern5316z12zzcfa_ltypez00(obj_t BgL_envz00_3128,
		obj_t BgL_nodez00_3129)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 185 */
			{
				BgL_externz00_bglt BgL_nodez00_1880;

				{	/* Cfa/ltype.scm 186 */
					bool_t BgL_auxz00_4098;

					BgL_nodez00_1880 = (BgL_externz00_bglt) (BgL_nodez00_3129);
					{	/* Cfa/ltype.scm 186 */
						obj_t BgL_arg5508z00_2327;

						BgL_arg5508z00_2327 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1880))->BgL_exprza2za2);
						BgL_auxz00_4098 =
							BGl_typezd2nodeza2z12z62zzcfa_ltypez00(BgL_arg5508z00_2327);
					}
					return BBOOL(BgL_auxz00_4098);
				}
			}
		}
	}



/* type-node!-funcall5314 */
	obj_t BGl_typezd2nodez12zd2funcall5314z12zzcfa_ltypez00(obj_t BgL_envz00_3130,
		obj_t BgL_nodez00_3131)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 177 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1872;

				{	/* Cfa/ltype.scm 178 */
					bool_t BgL_auxz00_4103;

					BgL_nodez00_1872 = (BgL_funcallz00_bglt) (BgL_nodez00_3131);
					{	/* Cfa/ltype.scm 179 */
						BgL_nodez00_bglt BgL_arg5505z00_1876;

						BgL_arg5505z00_1876 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1872))->BgL_funz00);
						{	/* Cfa/ltype.scm 179 */
							obj_t BgL_method5298z00_2300;

							{	/* Cfa/ltype.scm 179 */
								BgL_objectz00_bglt BgL_objz00_2301;

								BgL_objz00_2301 = (BgL_objectz00_bglt) (BgL_arg5505z00_1876);
								{	/* Cfa/ltype.scm 179 */
									long BgL_objzd2classzd2numz00_2302;

									BgL_objzd2classzd2numz00_2302 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2301);
									{	/* Cfa/ltype.scm 179 */
										obj_t BgL_arg2643z00_2303;

										BgL_arg2643z00_2303 =
											PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
											(int) (((long) 1)));
										{	/* Cfa/ltype.scm 179 */
											obj_t BgL_arrayz00_2305;

											int BgL_offsetz00_2306;

											BgL_arrayz00_2305 = BgL_arg2643z00_2303;
											BgL_offsetz00_2306 =
												(int) (BgL_objzd2classzd2numz00_2302);
											{	/* Cfa/ltype.scm 179 */
												long BgL_offsetz00_2307;

												BgL_offsetz00_2307 =
													((long) (BgL_offsetz00_2306) - OBJECT_TYPE);
												{	/* Cfa/ltype.scm 179 */
													long BgL_modz00_2308;

													{	/* Cfa/ltype.scm 179 */
														int BgL_arg2645z00_2309;

														BgL_arg2645z00_2309 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 179 */
															long BgL_auxz00_4113;

															BgL_auxz00_4113 = (long) (BgL_arg2645z00_2309);
															BgL_modz00_2308 =
																(BgL_offsetz00_2307 / BgL_auxz00_4113);
													}}
													{	/* Cfa/ltype.scm 179 */
														long BgL_restz00_2310;

														{	/* Cfa/ltype.scm 179 */
															int BgL_arg2644z00_2311;

															BgL_arg2644z00_2311 = (int) (((long) 16));
															{	/* Cfa/ltype.scm 179 */
																long BgL_auxz00_4117;

																BgL_auxz00_4117 = (long) (BgL_arg2644z00_2311);
																BgL_restz00_2310 =
																	(BgL_offsetz00_2307 % BgL_auxz00_4117);
														}}
														{	/* Cfa/ltype.scm 179 */

															BgL_method5298z00_2300 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2305,
																	(int) (BgL_modz00_2308)),
																(int) (BgL_restz00_2310));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method5298z00_2300) (BgL_method5298z00_2300,
								(obj_t) (BgL_arg5505z00_1876), BEOA);
					}}
					{	/* Cfa/ltype.scm 180 */
						obj_t BgL_arg5506z00_1877;

						BgL_arg5506z00_1877 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1872))->BgL_argsz00);
						BgL_auxz00_4103 =
							BGl_typezd2nodeza2z12z62zzcfa_ltypez00(BgL_arg5506z00_1877);
					}
					return BBOOL(BgL_auxz00_4103);
				}
			}
		}
	}



/* type-node!-app-ly5312 */
	obj_t BGl_typezd2nodez12zd2appzd2ly5312zc0zzcfa_ltypez00(obj_t
		BgL_envz00_3132, obj_t BgL_nodez00_3133)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 169 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1864;

				BgL_nodez00_1864 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_3133);
				{	/* Cfa/ltype.scm 171 */
					BgL_nodez00_bglt BgL_arg5502z00_1868;

					BgL_arg5502z00_1868 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1864))->BgL_funz00);
					{	/* Cfa/ltype.scm 171 */
						obj_t BgL_method5298z00_2246;

						{	/* Cfa/ltype.scm 171 */
							BgL_objectz00_bglt BgL_objz00_2247;

							BgL_objz00_2247 = (BgL_objectz00_bglt) (BgL_arg5502z00_1868);
							{	/* Cfa/ltype.scm 171 */
								long BgL_objzd2classzd2numz00_2248;

								BgL_objzd2classzd2numz00_2248 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2247);
								{	/* Cfa/ltype.scm 171 */
									obj_t BgL_arg2643z00_2249;

									BgL_arg2643z00_2249 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
										(int) (((long) 1)));
									{	/* Cfa/ltype.scm 171 */
										obj_t BgL_arrayz00_2251;

										int BgL_offsetz00_2252;

										BgL_arrayz00_2251 = BgL_arg2643z00_2249;
										BgL_offsetz00_2252 = (int) (BgL_objzd2classzd2numz00_2248);
										{	/* Cfa/ltype.scm 171 */
											long BgL_offsetz00_2253;

											BgL_offsetz00_2253 =
												((long) (BgL_offsetz00_2252) - OBJECT_TYPE);
											{	/* Cfa/ltype.scm 171 */
												long BgL_modz00_2254;

												{	/* Cfa/ltype.scm 171 */
													int BgL_arg2645z00_2255;

													BgL_arg2645z00_2255 = (int) (((long) 16));
													{	/* Cfa/ltype.scm 171 */
														long BgL_auxz00_4140;

														BgL_auxz00_4140 = (long) (BgL_arg2645z00_2255);
														BgL_modz00_2254 =
															(BgL_offsetz00_2253 / BgL_auxz00_4140);
												}}
												{	/* Cfa/ltype.scm 171 */
													long BgL_restz00_2256;

													{	/* Cfa/ltype.scm 171 */
														int BgL_arg2644z00_2257;

														BgL_arg2644z00_2257 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 171 */
															long BgL_auxz00_4144;

															BgL_auxz00_4144 = (long) (BgL_arg2644z00_2257);
															BgL_restz00_2256 =
																(BgL_offsetz00_2253 % BgL_auxz00_4144);
													}}
													{	/* Cfa/ltype.scm 171 */

														BgL_method5298z00_2246 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2251,
																(int) (BgL_modz00_2254)),
															(int) (BgL_restz00_2256));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method5298z00_2246) (BgL_method5298z00_2246,
							(obj_t) (BgL_arg5502z00_1868), BEOA);
				}}
				{	/* Cfa/ltype.scm 172 */
					BgL_nodez00_bglt BgL_arg5503z00_1869;

					BgL_arg5503z00_1869 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1864))->BgL_argz00);
					{	/* Cfa/ltype.scm 172 */
						obj_t BgL_method5298z00_2273;

						{	/* Cfa/ltype.scm 172 */
							BgL_objectz00_bglt BgL_objz00_2274;

							BgL_objz00_2274 = (BgL_objectz00_bglt) (BgL_arg5503z00_1869);
							{	/* Cfa/ltype.scm 172 */
								long BgL_objzd2classzd2numz00_2275;

								BgL_objzd2classzd2numz00_2275 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2274);
								{	/* Cfa/ltype.scm 172 */
									obj_t BgL_arg2643z00_2276;

									BgL_arg2643z00_2276 =
										PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_ltypez00,
										(int) (((long) 1)));
									{	/* Cfa/ltype.scm 172 */
										obj_t BgL_arrayz00_2278;

										int BgL_offsetz00_2279;

										BgL_arrayz00_2278 = BgL_arg2643z00_2276;
										BgL_offsetz00_2279 = (int) (BgL_objzd2classzd2numz00_2275);
										{	/* Cfa/ltype.scm 172 */
											long BgL_offsetz00_2280;

											BgL_offsetz00_2280 =
												((long) (BgL_offsetz00_2279) - OBJECT_TYPE);
											{	/* Cfa/ltype.scm 172 */
												long BgL_modz00_2281;

												{	/* Cfa/ltype.scm 172 */
													int BgL_arg2645z00_2282;

													BgL_arg2645z00_2282 = (int) (((long) 16));
													{	/* Cfa/ltype.scm 172 */
														long BgL_auxz00_4163;

														BgL_auxz00_4163 = (long) (BgL_arg2645z00_2282);
														BgL_modz00_2281 =
															(BgL_offsetz00_2280 / BgL_auxz00_4163);
												}}
												{	/* Cfa/ltype.scm 172 */
													long BgL_restz00_2283;

													{	/* Cfa/ltype.scm 172 */
														int BgL_arg2644z00_2284;

														BgL_arg2644z00_2284 = (int) (((long) 16));
														{	/* Cfa/ltype.scm 172 */
															long BgL_auxz00_4167;

															BgL_auxz00_4167 = (long) (BgL_arg2644z00_2284);
															BgL_restz00_2283 =
																(BgL_offsetz00_2280 % BgL_auxz00_4167);
													}}
													{	/* Cfa/ltype.scm 172 */

														BgL_method5298z00_2273 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2278,
																(int) (BgL_modz00_2281)),
															(int) (BgL_restz00_2283));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method5298z00_2273) (BgL_method5298z00_2273,
							(obj_t) (BgL_arg5503z00_1869), BEOA);
					}
				}
			}
		}
	}



/* type-node!-app5310 */
	obj_t BGl_typezd2nodez12zd2app5310z12zzcfa_ltypez00(obj_t BgL_envz00_3134,
		obj_t BgL_nodez00_3135)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 162 */
			{
				BgL_appz00_bglt BgL_nodez00_1857;

				{	/* Cfa/ltype.scm 163 */
					bool_t BgL_auxz00_4178;

					BgL_nodez00_1857 = (BgL_appz00_bglt) (BgL_nodez00_3135);
					{	/* Cfa/ltype.scm 163 */
						obj_t BgL_arg5500z00_2242;

						BgL_arg5500z00_2242 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1857))->BgL_argsz00);
						BgL_auxz00_4178 =
							BGl_typezd2nodeza2z12z62zzcfa_ltypez00(BgL_arg5500z00_2242);
					}
					return BBOOL(BgL_auxz00_4178);
				}
			}
		}
	}



/* type-node!-sequence5308 */
	obj_t BGl_typezd2nodez12zd2sequence5308z12zzcfa_ltypez00(obj_t
		BgL_envz00_3136, obj_t BgL_nodez00_3137)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 155 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1850;

				{	/* Cfa/ltype.scm 156 */
					bool_t BgL_auxz00_4183;

					BgL_nodez00_1850 = (BgL_sequencez00_bglt) (BgL_nodez00_3137);
					{	/* Cfa/ltype.scm 156 */
						obj_t BgL_arg5498z00_2239;

						BgL_arg5498z00_2239 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1850))->BgL_nodesz00);
						BgL_auxz00_4183 =
							BGl_typezd2nodeza2z12z62zzcfa_ltypez00(BgL_arg5498z00_2239);
					}
					return BBOOL(BgL_auxz00_4183);
				}
			}
		}
	}



/* type-node!-closure5306 */
	obj_t BGl_typezd2nodez12zd2closure5306z12zzcfa_ltypez00(obj_t BgL_envz00_3138,
		obj_t BgL_nodez00_3139)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 149 */
			{
				BgL_closurez00_bglt BgL_nodez00_1842;

				BgL_nodez00_1842 = (BgL_closurez00_bglt) (BgL_nodez00_3139);
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string5633z00zzcfa_ltypez00, BGl_string5663z00zzcfa_ltypez00,
					BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_1842)));
			}
		}
	}



/* type-node!-var5304 */
	obj_t BGl_typezd2nodez12zd2var5304z12zzcfa_ltypez00(obj_t BgL_envz00_3140,
		obj_t BgL_nodez00_3141)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 141 */
			{
				BgL_varz00_bglt BgL_nodez00_1827;

				BgL_nodez00_1827 = (BgL_varz00_bglt) (BgL_nodez00_3141);
				{	/* Cfa/ltype.scm 143 */
					bool_t BgL_testz00_4192;

					{	/* Cfa/ltype.scm 143 */
						bool_t BgL_testz00_4193;

						{	/* Cfa/ltype.scm 143 */
							BgL_variablez00_bglt BgL_arg5492z00_1839;

							BgL_arg5492z00_1839 =
								(((BgL_varz00_bglt) CREF(BgL_nodez00_1827))->BgL_variablez00);
							{	/* Cfa/ltype.scm 143 */
								obj_t BgL_obj1751z00_2205;

								BgL_obj1751z00_2205 = (obj_t) (BgL_arg5492z00_1839);
								BgL_testz00_4193 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_2205,
									BGl_globalz00zzast_varz00);
							}
						}
						if (BgL_testz00_4193)
							{	/* Cfa/ltype.scm 143 */
								obj_t BgL_auxz00_4197;

								{	/* Cfa/ltype.scm 143 */
									BgL_globalz00_bglt BgL_obj1679z00_2207;

									BgL_obj1679z00_2207 =
										(BgL_globalz00_bglt) (
										(((BgL_varz00_bglt) CREF(BgL_nodez00_1827))->
											BgL_variablez00));
									BgL_auxz00_4197 =
										(((BgL_globalz00_bglt) CREF(BgL_obj1679z00_2207))->
										BgL_importz00);
								}
								BgL_testz00_4192 =
									(BgL_auxz00_4197 == CNST_TABLE_REF(((long) 2)));
							}
						else
							{	/* Cfa/ltype.scm 143 */
								BgL_testz00_4192 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_4192)
						{	/* Cfa/ltype.scm 144 */
							BgL_valuez00_bglt BgL_arg5485z00_1832;

							BgL_variablez00_bglt BgL_arg5486z00_1833;

							{	/* Cfa/ltype.scm 144 */
								BgL_variablez00_bglt BgL_obj1611z00_2209;

								BgL_obj1611z00_2209 =
									(((BgL_varz00_bglt) CREF(BgL_nodez00_1827))->BgL_variablez00);
								BgL_arg5485z00_1832 =
									(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_2209))->
									BgL_valuez00);
							}
							BgL_arg5486z00_1833 =
								(((BgL_varz00_bglt) CREF(BgL_nodez00_1827))->BgL_variablez00);
							{	/* Cfa/ltype.scm 144 */
								obj_t BgL_method5286z00_2213;

								{	/* Cfa/ltype.scm 144 */
									BgL_objectz00_bglt BgL_objz00_2214;

									BgL_objz00_2214 = (BgL_objectz00_bglt) (BgL_arg5485z00_1832);
									{	/* Cfa/ltype.scm 144 */
										long BgL_objzd2classzd2numz00_2215;

										BgL_objzd2classzd2numz00_2215 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2214);
										{	/* Cfa/ltype.scm 144 */
											obj_t BgL_arg2643z00_2216;

											BgL_arg2643z00_2216 =
												PROCEDURE_REF
												(BGl_typezd2variablez12zd2envz12zzcfa_ltypez00,
												(int) (((long) 1)));
											{	/* Cfa/ltype.scm 144 */
												obj_t BgL_arrayz00_2218;

												int BgL_offsetz00_2219;

												BgL_arrayz00_2218 = BgL_arg2643z00_2216;
												BgL_offsetz00_2219 =
													(int) (BgL_objzd2classzd2numz00_2215);
												{	/* Cfa/ltype.scm 144 */
													long BgL_offsetz00_2220;

													BgL_offsetz00_2220 =
														((long) (BgL_offsetz00_2219) - OBJECT_TYPE);
													{	/* Cfa/ltype.scm 144 */
														long BgL_modz00_2221;

														{	/* Cfa/ltype.scm 144 */
															int BgL_arg2645z00_2222;

															BgL_arg2645z00_2222 = (int) (((long) 16));
															{	/* Cfa/ltype.scm 144 */
																long BgL_auxz00_4214;

																BgL_auxz00_4214 = (long) (BgL_arg2645z00_2222);
																BgL_modz00_2221 =
																	(BgL_offsetz00_2220 / BgL_auxz00_4214);
														}}
														{	/* Cfa/ltype.scm 144 */
															long BgL_restz00_2223;

															{	/* Cfa/ltype.scm 144 */
																int BgL_arg2644z00_2224;

																BgL_arg2644z00_2224 = (int) (((long) 16));
																{	/* Cfa/ltype.scm 144 */
																	long BgL_auxz00_4218;

																	BgL_auxz00_4218 =
																		(long) (BgL_arg2644z00_2224);
																	BgL_restz00_2223 =
																		(BgL_offsetz00_2220 % BgL_auxz00_4218);
															}}
															{	/* Cfa/ltype.scm 144 */

																BgL_method5286z00_2213 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2218,
																		(int) (BgL_modz00_2221)),
																	(int) (BgL_restz00_2223));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method5286z00_2213)
									(BgL_method5286z00_2213, (obj_t) (BgL_arg5485z00_1832),
									(obj_t) (BgL_arg5486z00_1833), BEOA);
							}
						}
					else
						{	/* Cfa/ltype.scm 143 */
							return BFALSE;
						}
				}
			}
		}
	}



/* type-node!-kwote5302 */
	obj_t BGl_typezd2nodez12zd2kwote5302z12zzcfa_ltypez00(obj_t BgL_envz00_3142,
		obj_t BgL_nodez00_3143)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 135 */
			return BUNSPEC;
		}
	}



/* type-node!-atom5300 */
	obj_t BGl_typezd2nodez12zd2atom5300z12zzcfa_ltypez00(obj_t BgL_envz00_3144,
		obj_t BgL_nodez00_3145)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 129 */
			return BUNSPEC;
		}
	}



/* type-variable!-inter5296 */
	obj_t BGl_typezd2variablez12zd2inter5296z12zzcfa_ltypez00(obj_t
		BgL_envz00_3146, obj_t BgL_valuez00_3147, obj_t BgL_variablez00_3148)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 110 */
			{	/* Cfa/ltype.scm 111 */
				obj_t BgL_res5668z00_3173;

				BgL_res5668z00_3173 = CNST_TABLE_REF(((long) 0));
				return BgL_res5668z00_3173;
			}
		}
	}



/* type-variable!-sexit5294 */
	obj_t BGl_typezd2variablez12zd2sexit5294z12zzcfa_ltypez00(obj_t
		BgL_envz00_3149, obj_t BgL_valuez00_3150, obj_t BgL_variablez00_3151)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 100 */
			{	/* Cfa/ltype.scm 101 */
				obj_t BgL_res5669z00_3176;

				BgL_res5669z00_3176 = CNST_TABLE_REF(((long) 0));
				return BgL_res5669z00_3176;
			}
		}
	}



/* type-variable!-cvar/5292 */
	obj_t BGl_typezd2variablez12zd2cvarzf25292ze0zzcfa_ltypez00(obj_t
		BgL_envz00_3152, obj_t BgL_valuez00_3153, obj_t BgL_variablez00_3154)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 93 */
			{
				BgL_cvarzf2cinfozf2_bglt BgL_valuez00_1796;

				obj_t BgL_variablez00_1797;

				BgL_valuez00_1796 = (BgL_cvarzf2cinfozf2_bglt) (BgL_valuez00_3153);
				BgL_variablez00_1797 = BgL_variablez00_3154;
				{	/* Cfa/ltype.scm 94 */
					obj_t BgL_arg5477z00_2196;

					{	/* Cfa/ltype.scm 94 */
						BgL_approxz00_bglt BgL_arg5478z00_2197;

						{
							obj_t BgL_auxz00_4232;

							{	/* Cfa/ltype.scm 94 */
								BgL_objectz00_bglt BgL_auxz00_4233;

								BgL_auxz00_4233 = (BgL_objectz00_bglt) (BgL_valuez00_1796);
								BgL_auxz00_4232 = BGL_OBJECT_WIDENING(BgL_auxz00_4233);
							}
							BgL_arg5478z00_2197 =
								(((BgL_cvarzf2cinfozf2_bglt) CREF(BgL_auxz00_4232))->
								BgL_approxz00);
						}
						BgL_arg5477z00_2196 =
							BGl_getzd2approxzd2typez00zzcfa_ltypez00(BgL_arg5478z00_2197);
					}
					{	/* Cfa/ltype.scm 94 */
						BgL_variablez00_bglt BgL_variablez00_2199;

						BgL_typez00_bglt BgL_typez00_2200;

						BgL_variablez00_2199 =
							(BgL_variablez00_bglt) (BgL_variablez00_1797);
						BgL_typez00_2200 = (BgL_typez00_bglt) (BgL_arg5477z00_2196);
						if (((obj_t) (BgL_typez00_2200) == BGl_za2_za2z00zztype_cachez00))
							{	/* Cfa/ltype.scm 94 */
								return BFALSE;
							}
						else
							{	/* Cfa/ltype.scm 94 */
								return
									((((BgL_variablez00_bglt) CREF(BgL_variablez00_2199))->
										BgL_typez00) =
									((BgL_typez00_bglt) BgL_typez00_2200), BUNSPEC);
							}
					}
				}
			}
		}
	}



/* type-variable!-scnst5290 */
	obj_t BGl_typezd2variablez12zd2scnst5290z12zzcfa_ltypez00(obj_t
		BgL_envz00_3155, obj_t BgL_valuez00_3156, obj_t BgL_variablez00_3157)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 87 */
			{	/* Cfa/ltype.scm 88 */
				obj_t BgL_res5670z00_3179;

				BgL_res5670z00_3179 = CNST_TABLE_REF(((long) 0));
				return BgL_res5670z00_3179;
			}
		}
	}



/* type-variable!-svar/5288 */
	obj_t BGl_typezd2variablez12zd2svarzf25288ze0zzcfa_ltypez00(obj_t
		BgL_envz00_3158, obj_t BgL_valuez00_3159, obj_t BgL_variablez00_3160)
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 80 */
			{
				BgL_svarzf2cinfozf2_bglt BgL_valuez00_1781;

				obj_t BgL_variablez00_1782;

				BgL_valuez00_1781 = (BgL_svarzf2cinfozf2_bglt) (BgL_valuez00_3159);
				BgL_variablez00_1782 = BgL_variablez00_3160;
				{	/* Cfa/ltype.scm 81 */
					obj_t BgL_arg5473z00_2187;

					{	/* Cfa/ltype.scm 81 */
						BgL_approxz00_bglt BgL_arg5474z00_2188;

						{
							obj_t BgL_auxz00_4246;

							{	/* Cfa/ltype.scm 81 */
								BgL_objectz00_bglt BgL_auxz00_4247;

								BgL_auxz00_4247 = (BgL_objectz00_bglt) (BgL_valuez00_1781);
								BgL_auxz00_4246 = BGL_OBJECT_WIDENING(BgL_auxz00_4247);
							}
							BgL_arg5474z00_2188 =
								(((BgL_svarzf2cinfozf2_bglt) CREF(BgL_auxz00_4246))->
								BgL_approxz00);
						}
						BgL_arg5473z00_2187 =
							BGl_getzd2approxzd2typez00zzcfa_ltypez00(BgL_arg5474z00_2188);
					}
					{	/* Cfa/ltype.scm 81 */
						BgL_variablez00_bglt BgL_variablez00_2190;

						BgL_typez00_bglt BgL_typez00_2191;

						BgL_variablez00_2190 =
							(BgL_variablez00_bglt) (BgL_variablez00_1782);
						BgL_typez00_2191 = (BgL_typez00_bglt) (BgL_arg5473z00_2187);
						if (((obj_t) (BgL_typez00_2191) == BGl_za2_za2z00zztype_cachez00))
							{	/* Cfa/ltype.scm 81 */
								return BFALSE;
							}
						else
							{	/* Cfa/ltype.scm 81 */
								return
									((((BgL_variablez00_bglt) CREF(BgL_variablez00_2190))->
										BgL_typez00) =
									((BgL_typez00_bglt) BgL_typez00_2191), BUNSPEC);
							}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_ltypez00()
	{
		AN_OBJECT;
		{	/* Cfa/ltype.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5664z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string5664z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string5664z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string5664z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string5664z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5664z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5664z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string5664z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string5664z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zzcfa_info3z00(((long) 0),
				BSTRING_TO_STRING(BGl_string5664z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zzcfa_setz00(((long) 474371048),
				BSTRING_TO_STRING(BGl_string5664z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(((long) 249450490),
				BSTRING_TO_STRING(BGl_string5664z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zzcfa_closurez00(((long) 416995938),
				BSTRING_TO_STRING(BGl_string5664z00zzcfa_ltypez00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 2222742),
				BSTRING_TO_STRING(BGl_string5664z00zzcfa_ltypez00));
			return
				BGl_modulezd2initializa7ationz75zzcnst_nodez00(((long) 110472871),
				BSTRING_TO_STRING(BGl_string5664z00zzcfa_ltypez00));
		}
	}

#ifdef __cplusplus
}
#endif
