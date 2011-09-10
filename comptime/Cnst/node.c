/*===========================================================================*/
/*   (Cnst/node.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cnst/node.scm)*/
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

	typedef struct BgL_localzf2bvaluezf2_bgl
	{
		struct BgL_nodez00_bgl *BgL_bindingzd2valuezd2;
	}                        *BgL_localzf2bvaluezf2_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl__localzf2bvaluezf3z01zzcnst_nodez00(obj_t, obj_t);
	static obj_t BGl_cnstz12zd2conditional3380zc0zzcnst_nodez00(obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__getzd2nodezd2atomzd2valuezd2zzcnst_nodez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	extern obj_t BGl_za2boolzd2ze3bboolza2z31zzcnst_cachez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2vectorz00zzcnst_allocz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_cnstz12zd2fail3382zc0zzcnst_nodez00(obj_t, obj_t);
	static obj_t BGl_cnstz12zd2var3367zc0zzcnst_nodez00(obj_t, obj_t);
	extern BgL_nodez00_bglt
		BGl_cnstzd2alloczd2llongz00zzcnst_allocz00(BGL_LONGLONG_T, obj_t);
	extern BgL_nodez00_bglt BGl_nodezd2nilzd2zzast_nodez00();
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcnst_nodez00();
	extern BgL_valuez00_bglt BGl_valuezd2nilzd2zzast_varz00();
	static obj_t BGl_cnstz12zd2sequence3372zc0zzcnst_nodez00(obj_t, obj_t);
	static obj_t BGl__getzd2nodezd2atomzd2valuezd23405z00zzcnst_nodez00(obj_t,
		obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_cnstz12zd2boxzd2setz123398z00zzcnst_nodez00(obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcnst_nodez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_za2makezd2fxzd2procedureza2z00zzcnst_cachez00;
	static obj_t BGl_cnstz12zd2letzd2fun3386z12zzcnst_nodez00(obj_t, obj_t);
	static BgL_localzf2bvaluezf2_bglt BGl_localzf2bvaluezd2nilz20zzcnst_nodez00();
	static obj_t BGl_toplevelzd2initzd2zzcnst_nodez00();
	static obj_t BGl_cnstz12zd2closure3370zc0zzcnst_nodez00(obj_t, obj_t);
	static obj_t BGl_cnstz12zd2letzd2var3388z12zzcnst_nodez00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl__z52allocatezd2localzf2bvaluez72zzcnst_nodez00(obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstz12z12zzcnst_nodez00(BgL_nodez00_bglt);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_cnstzd2alloczd2bignumz00zzcnst_allocz00(obj_t, obj_t);
	static obj_t BGl_cnstz12zd2setzd2exzd2it3390zc0zzcnst_nodez00(obj_t, obj_t);
	static obj_t BGl__cnstz12z12zzcnst_nodez00(obj_t, obj_t);
	static obj_t BGl_cnstz12zd2makezd2box3394z12zzcnst_nodez00(obj_t, obj_t);
	static obj_t BGl_cnstz12zd2atom3363zc0zzcnst_nodez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcnst_nodez00();
	static obj_t BGl__localzf2bvaluezd2nilz20zzcnst_nodez00(obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2symbolz00zzcnst_allocz00(obj_t,
		obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2stringz00zzcnst_allocz00(obj_t,
		obj_t);
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2tvectorz00zzcnst_allocz00(obj_t,
		obj_t);
	static obj_t BGl_cnstza2z12zb0zzcnst_nodez00(obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcnst_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2nodezd2atomzd2valuezd2zzcnst_nodez00(BgL_nodez00_bglt);
	static obj_t BGl_cnstz12zd2jumpzd2exzd2it3392zc0zzcnst_nodez00(obj_t, obj_t);
	extern obj_t BGl_za2longzd2ze3intza2z31zzcnst_cachez00;
	extern BgL_atomz00_bglt BGl_makezd2atomzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t);
	extern obj_t BGl_za2btrueza2z00zzcnst_cachez00;
	static obj_t BGl_genericzd2initzd2zzcnst_nodez00();
	extern obj_t BGl_za2llongzd2ze3bllongza2z31zzcnst_cachez00;
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2realz00zzcnst_allocz00(obj_t,
		obj_t);
	static obj_t BGl_z52thezd2localzf2bvaluezd2nilza0zzcnst_nodez00 = BUNSPEC;
	extern obj_t BGl_za2bboolza2z00zztype_cachez00;
	static obj_t BGl_cnstz12zd2extern3374zc0zzcnst_nodez00(obj_t, obj_t);
	extern obj_t BGl_za2bfalseza2z00zzcnst_cachez00;
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_cnstz12zd2appzd2ly3400z12zzcnst_nodez00(obj_t, obj_t);
	static obj_t BGl_localzf2bvaluezf2zzcnst_nodez00 = BUNSPEC;
	static BgL_nodez00_bglt
		BGl_cnstz12zd2default3360zc0zzcnst_nodez00(BgL_nodez00_bglt);
	static obj_t BGl_cnstz12zd2kwote3365zc0zzcnst_nodez00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcnst_nodez00();
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2listz00zzcnst_allocz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2elongz00zzcnst_allocz00(long,
		obj_t);
	extern obj_t BGl_za2makezd2vazd2procedureza2z00zzcnst_cachez00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_cnstz12zd2cast3376zc0zzcnst_nodez00(obj_t, obj_t);
	extern BgL_nodez00_bglt
		BGl_cnstzd2alloczd2procedurez00zzcnst_allocz00(BgL_nodez00_bglt, obj_t);
	static obj_t BGl__cnstz12zd2default3360zc0zzcnst_nodez00(obj_t, obj_t);
	static obj_t BGl_cnstz12zd2funcall3402zc0zzcnst_nodez00(obj_t, obj_t);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern BgL_nodez00_bglt
		BGl_cnstzd2alloczd2ucs2zd2stringzd2zzcnst_allocz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2doublezd2ze3realza2z31zzcnst_cachez00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2elongzd2ze3belongza2z31zzcnst_cachez00;
	static obj_t BGl_getzd2nodezd2atomzd2valuezd23408z00zzcnst_nodez00(obj_t,
		obj_t);
	static obj_t BGl_getzd2nodezd2atomzd2valuezd23410z00zzcnst_nodez00(obj_t,
		obj_t);
	static obj_t BGl_getzd2nodezd2atomzd2valuezd23412z00zzcnst_nodez00(obj_t,
		obj_t);
	static obj_t BGl_cnstz12zd2app3404zc0zzcnst_nodez00(obj_t, obj_t);
	static obj_t BGl_cnstz12zd2setq3378zc0zzcnst_nodez00(obj_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	extern BgL_nodez00_bglt
		BGl_cnstzd2alloczd2homogenouszd2vectorzd2zzcnst_allocz00(obj_t, obj_t);
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_cnstz12zd2select3384zc0zzcnst_nodez00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2local3415ze3zzcnst_nodez00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzcnst_nodez00();
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2keywordz00zzcnst_allocz00(obj_t,
		obj_t);
	extern obj_t BGl_za2stringzd2ze3bstringza2z31zzcnst_cachez00;
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2structz00zzcnst_allocz00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcnst_nodez00();
	static obj_t BGl_structzb2objectzd2ze3objec3417z83zzcnst_nodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstz12zd2boxzd2ref3396z12zzcnst_nodez00(obj_t, obj_t);
	static obj_t __cnst[7];


	   
		 
		DEFINE_EXPORT_BGL_GENERIC(BGl_cnstz12zd2envzc0zzcnst_nodez00,
		BgL_bgl__cnstza712za712za7za7cns3856z00, BGl__cnstz12z12zzcnst_nodez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3816z00zzcnst_nodez00,
		BgL_bgl_string3816za700za7za7c3857za7, "cnst!", 5);
	      DEFINE_STRING(BGl_string3817z00zzcnst_nodez00,
		BgL_bgl_string3817za700za7za7c3858za7, "get-node-atom-value", 19);
	      DEFINE_STRING(BGl_string3818z00zzcnst_nodez00,
		BgL_bgl_string3818za700za7za7c3859za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3844z00zzcnst_nodez00,
		BgL_bgl_string3844za700za7za7c3860za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string3846z00zzcnst_nodez00,
		BgL_bgl_string3846za700za7za7c3861za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string3847z00zzcnst_nodez00,
		BgL_bgl_string3847za700za7za7c3862za7, "Unexepected `closure' node", 26);
	      DEFINE_STRING(BGl_string3848z00zzcnst_nodez00,
		BgL_bgl_string3848za700za7za7c3863za7, "cnst-quote", 10);
	      DEFINE_STRING(BGl_string3850z00zzcnst_nodez00,
		BgL_bgl_string3850za700za7za7c3864za7, "cnst_node", 9);
	      DEFINE_STRING(BGl_string3849z00zzcnst_nodez00,
		BgL_bgl_string3849za700za7za7c3865za7, "Illegal expression", 18);
	      DEFINE_STRING(BGl_string3851z00zzcnst_nodez00,
		BgL_bgl_string3851za700za7za7c3866za7,
		"a-tvector read (no-atom-value) cnst!-default3360 _ local/bvalue done ",
		69);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_cnstz12zd2default3360zd2envz12zzcnst_nodez00,
		BgL_bgl__cnstza712za7d2defau3867z00,
		BGl__cnstz12zd2default3360zc0zzcnst_nodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_localzf2bvaluezd2nilzd2envzf2zzcnst_nodez00,
		BgL_bgl__localza7f2bvalueza73868z00,
		BGl__localzf2bvaluezd2nilz20zzcnst_nodez00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcnst_nodez00,
		BgL_bgl__getza7d2nodeza7d2at3869z00,
		BGl__getzd2nodezd2atomzd2valuezd2zzcnst_nodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2localzf2bvaluezd2envza0zzcnst_nodez00,
		BgL_bgl__za752allocateza7d2l3870z00,
		BGl__z52allocatezd2localzf2bvaluez72zzcnst_nodez00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_localzf2bvaluezf3zd2envzd3zzcnst_nodez00,
		BgL_bgl__localza7f2bvalueza73871z00,
		BGl__localzf2bvaluezf3z01zzcnst_nodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_getzd2nodezd2atomzd2valuezd23405zd2envzd2zzcnst_nodez00,
		BgL_bgl__getza7d2nodeza7d2at3872z00,
		BGl__getzd2nodezd2atomzd2valuezd23405z00zzcnst_nodez00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3820z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2kwote33873z00,
		BGl_cnstz12zd2kwote3365zc0zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3819z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2atom333874z00,
		BGl_cnstz12zd2atom3363zc0zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3821z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2var3363875z00, BGl_cnstz12zd2var3367zc0zzcnst_nodez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3822z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2closur3876z00,
		BGl_cnstz12zd2closure3370zc0zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3823z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2sequen3877z00,
		BGl_cnstz12zd2sequence3372zc0zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3824z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2extern3878z00,
		BGl_cnstz12zd2extern3374zc0zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3825z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2cast333879z00,
		BGl_cnstz12zd2cast3376zc0zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3826z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2setq333880z00,
		BGl_cnstz12zd2setq3378zc0zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3827z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2condit3881z00,
		BGl_cnstz12zd2conditional3380zc0zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3828z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2fail333882z00,
		BGl_cnstz12zd2fail3382zc0zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3830z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2letza7d23883za7,
		BGl_cnstz12zd2letzd2fun3386z12zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3829z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2select3884z00,
		BGl_cnstz12zd2select3384zc0zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3831z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2letza7d23885za7,
		BGl_cnstz12zd2letzd2var3388z12zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3832z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2setza7d23886za7,
		BGl_cnstz12zd2setzd2exzd2it3390zc0zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3833z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2jumpza7d3887za7,
		BGl_cnstz12zd2jumpzd2exzd2it3392zc0zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3834z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2makeza7d3888za7,
		BGl_cnstz12zd2makezd2box3394z12zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3835z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2boxza7d23889za7,
		BGl_cnstz12zd2boxzd2ref3396z12zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3836z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2boxza7d23890za7,
		BGl_cnstz12zd2boxzd2setz123398z00zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3837z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2appza7d23891za7,
		BGl_cnstz12zd2appzd2ly3400z12zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3838z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2funcal3892z00,
		BGl_cnstz12zd2funcall3402zc0zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3840z00zzcnst_nodez00,
		BgL_bgl_getza7d2nodeza7d2ato3893z00,
		BGl_getzd2nodezd2atomzd2valuezd23408z00zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3839z00zzcnst_nodez00,
		BgL_bgl_cnstza712za7d2app3403894z00, BGl_cnstz12zd2app3404zc0zzcnst_nodez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3841z00zzcnst_nodez00,
		BgL_bgl_getza7d2nodeza7d2ato3895z00,
		BGl_getzd2nodezd2atomzd2valuezd23410z00zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3842z00zzcnst_nodez00,
		BgL_bgl_getza7d2nodeza7d2ato3896z00,
		BGl_getzd2nodezd2atomzd2valuezd23412z00zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3843z00zzcnst_nodez00,
		BgL_bgl_objectza7d2za7e3stru3897z00,
		BGl_objectzd2ze3structzd2local3415ze3zzcnst_nodez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3845z00zzcnst_nodez00,
		BgL_bgl_structza7b2objectza73898z00,
		BGl_structzb2objectzd2ze3objec3417z83zzcnst_nodez00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcnst_nodez00(long
		BgL_checksumz00_2887, char *BgL_fromz00_2888)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcnst_nodez00))
				{
					BGl_requirezd2initializa7ationz75zzcnst_nodez00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcnst_nodez00();
					BGl_cnstzd2initzd2zzcnst_nodez00();
					BGl_importedzd2moduleszd2initz00zzcnst_nodez00();
					BGl_objectzd2initzd2zzcnst_nodez00();
					BGl_genericzd2initzd2zzcnst_nodez00();
					BGl_methodzd2initzd2zzcnst_nodez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcnst_nodez00()
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 16 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cnst_node");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cnst_node");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cnst_node");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcnst_nodez00()
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 16 */
			{	/* Cnst/node.scm 16 */
				obj_t BgL_cportz00_2869;

				BgL_cportz00_2869 =
					bgl_open_input_string(BGl_string3851z00zzcnst_nodez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2870;

					BgL_iz00_2870 = ((long) 6);
				BgL_loopz00_2871:
					if ((BgL_iz00_2870 == ((long) -1)))
						{	/* Cnst/node.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Cnst/node.scm 16 */
							{	/* Cnst/node.scm 16 */
								obj_t BgL_arg3853z00_2873;

								{	/* Cnst/node.scm 16 */

									{	/* Cnst/node.scm 16 */
										obj_t BgL_locationz00_2875;

										BgL_locationz00_2875 = BBOOL(((bool_t) 0));
										{	/* Cnst/node.scm 16 */

											BgL_arg3853z00_2873 =
												BGl_readz00zz__readerz00(BgL_cportz00_2869,
												BgL_locationz00_2875);
										}
									}
								}
								{	/* Cnst/node.scm 16 */
									int BgL_auxz00_2907;

									BgL_auxz00_2907 = (int) (BgL_iz00_2870);
									CNST_TABLE_SET(BgL_auxz00_2907, BgL_arg3853z00_2873);
							}}
							{	/* Cnst/node.scm 16 */
								int BgL_auxz00_2876;

								BgL_auxz00_2876 = (int) ((BgL_iz00_2870 - ((long) 1)));
								{
									long BgL_iz00_2912;

									BgL_iz00_2912 = (long) (BgL_auxz00_2876);
									BgL_iz00_2870 = BgL_iz00_2912;
									goto BgL_loopz00_2871;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcnst_nodez00()
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 16 */
			return BUNSPEC;
		}
	}



/* cnst*! */
	obj_t BGl_cnstza2z12zb0zzcnst_nodez00(obj_t BgL_nodesz00_33)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 256 */
			{
				obj_t BgL_hookz00_842;

				BgL_hookz00_842 = BgL_nodesz00_33;
			BgL_zc3anonymousza33428ze3z83_843:
				if (NULLP(BgL_hookz00_842))
					{	/* Cnst/node.scm 258 */
						return CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Cnst/node.scm 258 */
						{	/* Cnst/node.scm 261 */
							BgL_nodez00_bglt BgL_arg3430z00_845;

							{	/* Cnst/node.scm 261 */
								obj_t BgL_arg3431z00_846;

								BgL_arg3431z00_846 = CAR(BgL_hookz00_842);
								{	/* Cnst/node.scm 261 */
									BgL_nodez00_bglt BgL_res3715z00_1650;

									{	/* Cnst/node.scm 261 */
										BgL_nodez00_bglt BgL_nodez00_1624;

										BgL_nodez00_1624 = (BgL_nodez00_bglt) (BgL_arg3431z00_846);
										{	/* Cnst/node.scm 261 */
											obj_t BgL_method3361z00_1625;

											{	/* Cnst/node.scm 261 */
												BgL_objectz00_bglt BgL_objz00_1626;

												BgL_objz00_1626 =
													(BgL_objectz00_bglt) (BgL_nodez00_1624);
												{	/* Cnst/node.scm 261 */
													long BgL_objzd2classzd2numz00_1627;

													BgL_objzd2classzd2numz00_1627 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1626);
													{	/* Cnst/node.scm 261 */
														obj_t BgL_arg2643z00_1628;

														BgL_arg2643z00_1628 =
															PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
															(int) (((long) 1)));
														{	/* Cnst/node.scm 261 */
															obj_t BgL_arrayz00_1630;

															int BgL_offsetz00_1631;

															BgL_arrayz00_1630 = BgL_arg2643z00_1628;
															BgL_offsetz00_1631 =
																(int) (BgL_objzd2classzd2numz00_1627);
															{	/* Cnst/node.scm 261 */
																long BgL_offsetz00_1632;

																BgL_offsetz00_1632 =
																	((long) (BgL_offsetz00_1631) - OBJECT_TYPE);
																{	/* Cnst/node.scm 261 */
																	long BgL_modz00_1633;

																	{	/* Cnst/node.scm 261 */
																		int BgL_arg2645z00_1634;

																		BgL_arg2645z00_1634 = (int) (((long) 16));
																		{	/* Cnst/node.scm 261 */
																			long BgL_auxz00_2927;

																			BgL_auxz00_2927 =
																				(long) (BgL_arg2645z00_1634);
																			BgL_modz00_1633 =
																				(BgL_offsetz00_1632 / BgL_auxz00_2927);
																	}}
																	{	/* Cnst/node.scm 261 */
																		long BgL_restz00_1635;

																		{	/* Cnst/node.scm 261 */
																			int BgL_arg2644z00_1636;

																			BgL_arg2644z00_1636 = (int) (((long) 16));
																			{	/* Cnst/node.scm 261 */
																				long BgL_auxz00_2931;

																				BgL_auxz00_2931 =
																					(long) (BgL_arg2644z00_1636);
																				BgL_restz00_1635 =
																					(BgL_offsetz00_1632 %
																					BgL_auxz00_2931);
																		}}
																		{	/* Cnst/node.scm 261 */

																			BgL_method3361z00_1625 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1630,
																					(int) (BgL_modz00_1633)),
																				(int) (BgL_restz00_1635));
											}}}}}}}}
											BgL_res3715z00_1650 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3361z00_1625) (BgL_method3361z00_1625,
													(obj_t) (BgL_nodez00_1624), BEOA));
									}}
									BgL_arg3430z00_845 = BgL_res3715z00_1650;
							}}
							{	/* Cnst/node.scm 261 */
								obj_t BgL_auxz00_2942;

								BgL_auxz00_2942 = (obj_t) (BgL_arg3430z00_845);
								SET_CAR(BgL_hookz00_842, BgL_auxz00_2942);
						}}
						{
							obj_t BgL_hookz00_2945;

							BgL_hookz00_2945 = CDR(BgL_hookz00_842);
							BgL_hookz00_842 = BgL_hookz00_2945;
							goto BgL_zc3anonymousza33428ze3z83_843;
						}
					}
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcnst_nodez00()
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 16 */
			{	/* Cnst/node.scm 31 */
				obj_t BgL_arg3433z00_849;

				obj_t BgL_arg3434z00_850;

				obj_t BgL_arg3437z00_853;

				BgL_arg3433z00_849 = CNST_TABLE_REF(((long) 1));
				BgL_arg3434z00_850 = BGl_localz00zzast_varz00;
				{	/* Cnst/node.scm 31 */
					obj_t BgL_v3359z00_854;

					BgL_v3359z00_854 = create_vector((int) (((long) 0)));
					BgL_arg3437z00_853 = BgL_v3359z00_854;
				}
				BGl_localzf2bvaluezf2zzcnst_nodez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3433z00_849,
					BgL_arg3434z00_850, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2localzf2bvaluezd2envza0zzcnst_nodez00,
					BGl_localzf2bvaluezd2nilzd2envzf2zzcnst_nodez00,
					BGl_localzf2bvaluezf3zd2envzd3zzcnst_nodez00, ((long) 426843394),
					BFALSE, BFALSE, BgL_arg3437z00_853);
			}
			return (BGl_z52thezd2localzf2bvaluezd2nilza0zzcnst_nodez00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* _local/bvalue? */
	obj_t BGl__localzf2bvaluezf3z01zzcnst_nodez00(obj_t BgL_envz00_2776,
		obj_t BgL_obj3269z00_2777)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 31 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3269z00_2777,
					BGl_localzf2bvaluezf2zzcnst_nodez00));
		}
	}



/* _%allocate-local/bvalue */
	obj_t BGl__z52allocatezd2localzf2bvaluez72zzcnst_nodez00(obj_t
		BgL_envz00_2774)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 31 */
			{	/* Cnst/node.scm 31 */
				BgL_localz00_bglt BgL_auxz00_2953;

				{	/* Cnst/node.scm 31 */
					BgL_localz00_bglt BgL_res3854z00_2882;

					{	/* Cnst/node.scm 31 */
						BgL_localz00_bglt BgL_new3262z00_2880;

						BgL_new3262z00_2880 =
							((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_localz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3262z00_2880),
							BGl_classzd2numzd2zz__objectz00
							(BGl_localzf2bvaluezf2zzcnst_nodez00));
						{	/* Cnst/node.scm 31 */
							BgL_objectz00_bglt BgL_auxz00_2958;

							BgL_auxz00_2958 = (BgL_objectz00_bglt) (BgL_new3262z00_2880);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2958, BFALSE);
						}
						BgL_res3854z00_2882 = BgL_new3262z00_2880;
					}
					BgL_auxz00_2953 = BgL_res3854z00_2882;
				}
				return (obj_t) (BgL_auxz00_2953);
			}
		}
	}



/* local/bvalue-nil */
	BgL_localzf2bvaluezf2_bglt BGl_localzf2bvaluezd2nilz20zzcnst_nodez00()
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 31 */
			if ((BGl_z52thezd2localzf2bvaluezd2nilza0zzcnst_nodez00 == BUNSPEC))
				{	/* Cnst/node.scm 31 */
					{	/* Cnst/node.scm 31 */
						BgL_localz00_bglt BgL_res3717z00_1668;

						{	/* Cnst/node.scm 31 */
							BgL_localz00_bglt BgL_new1810z00_1664;

							BgL_new1810z00_1664 =
								((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_localz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1810z00_1664),
								BGl_classzd2numzd2zz__objectz00(BGl_localz00zzast_varz00));
							{	/* Cnst/node.scm 31 */
								BgL_objectz00_bglt BgL_auxz00_2968;

								BgL_auxz00_2968 = (BgL_objectz00_bglt) (BgL_new1810z00_1664);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2968, BFALSE);
							}
							BgL_res3717z00_1668 = BgL_new1810z00_1664;
						}
						BGl_z52thezd2localzf2bvaluezd2nilza0zzcnst_nodez00 =
							(obj_t) (BgL_res3717z00_1668);
					}
					{	/* Cnst/node.scm 31 */
						obj_t BgL_arg3443z00_864;

						BgL_typez00_bglt BgL_arg3444z00_865;

						BgL_valuez00_bglt BgL_arg3445z00_866;

						BgL_arg3443z00_864 = CNST_TABLE_REF(((long) 2));
						BgL_arg3444z00_865 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg3445z00_866 = BGl_valuezd2nilzd2zzast_varz00();
						{	/* Cnst/node.scm 31 */
							BgL_localz00_bglt BgL_res3718z00_1690;

							{	/* Cnst/node.scm 31 */
								BgL_localz00_bglt BgL_new1798z00_1669;

								BgL_new1798z00_1669 =
									(BgL_localz00_bglt)
									(BGl_z52thezd2localzf2bvaluezd2nilza0zzcnst_nodez00);
								{	/* Cnst/node.scm 31 */
									obj_t BgL_id1788z00_1680;

									obj_t BgL_name1789z00_1681;

									BgL_typez00_bglt BgL_type1790z00_1682;

									BgL_valuez00_bglt BgL_value1791z00_1683;

									obj_t BgL_access1792z00_1684;

									obj_t BgL_fastzd2alpha1793zd2_1685;

									obj_t BgL_removable1794z00_1686;

									long BgL_occurrence1795z00_1687;

									bool_t BgL_userzf31796zf3_1688;

									long BgL_key1797z00_1689;

									BgL_id1788z00_1680 = BgL_arg3443z00_864;
									BgL_name1789z00_1681 = BUNSPEC;
									BgL_type1790z00_1682 = BgL_arg3444z00_865;
									BgL_value1791z00_1683 = BgL_arg3445z00_866;
									BgL_access1792z00_1684 = BUNSPEC;
									BgL_fastzd2alpha1793zd2_1685 = BUNSPEC;
									BgL_removable1794z00_1686 = BUNSPEC;
									BgL_occurrence1795z00_1687 = ((long) 0);
									BgL_userzf31796zf3_1688 = ((bool_t) 0);
									BgL_key1797z00_1689 = ((long) 0);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1669))->
											BgL_idz00) = ((obj_t) BgL_id1788z00_1680), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1669))->
											BgL_namez00) = ((obj_t) BgL_name1789z00_1681), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1669))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type1790z00_1682), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1669))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) BgL_value1791z00_1683), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1669))->
											BgL_accessz00) =
										((obj_t) BgL_access1792z00_1684), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1669))->
											BgL_fastzd2alphazd2) =
										((obj_t) BgL_fastzd2alpha1793zd2_1685), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1669))->
											BgL_removablez00) =
										((obj_t) BgL_removable1794z00_1686), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1669))->
											BgL_occurrencez00) =
										((long) BgL_occurrence1795z00_1687), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1669))->
											BgL_userzf3zf3) =
										((bool_t) BgL_userzf31796zf3_1688), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1669))->
											BgL_keyz00) = ((long) BgL_key1797z00_1689), BUNSPEC);
									BgL_res3718z00_1690 = BgL_new1798z00_1669;
							}} BgL_res3718z00_1690;
					}}
					{	/* Cnst/node.scm 31 */
						long BgL_arg3448z00_869;

						BgL_arg3448z00_869 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_localzf2bvaluezf2zzcnst_nodez00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2localzf2bvaluezd2nilza0zzcnst_nodez00),
							BgL_arg3448z00_869);
					}
					{	/* Cnst/node.scm 31 */
						BgL_localzf2bvaluezf2_bglt BgL_arg3449z00_870;

						{	/* Cnst/node.scm 31 */
							BgL_nodez00_bglt BgL_arg3450z00_871;

							BgL_arg3450z00_871 = BGl_nodezd2nilzd2zzast_nodez00();
							{	/* Cnst/node.scm 31 */
								BgL_localzf2bvaluezf2_bglt BgL_res3720z00_1699;

								{	/* Cnst/node.scm 31 */
									BgL_localzf2bvaluezf2_bglt BgL_new3243z00_1694;

									BgL_new3243z00_1694 =
										((BgL_localzf2bvaluezf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_localzf2bvaluezf2_bgl))));
									{	/* Cnst/node.scm 31 */
										BgL_localzf2bvaluezf2_bglt BgL_res3719z00_1698;

										{	/* Cnst/node.scm 31 */
											BgL_localzf2bvaluezf2_bglt BgL_new3259z00_1695;

											BgL_new3259z00_1695 = BgL_new3243z00_1694;
											{	/* Cnst/node.scm 31 */
												BgL_nodez00_bglt BgL_bindingzd2value3258zd2_1697;

												BgL_bindingzd2value3258zd2_1697 = BgL_arg3450z00_871;
												((((BgL_localzf2bvaluezf2_bglt)
															CREF(BgL_new3259z00_1695))->
														BgL_bindingzd2valuezd2) =
													((BgL_nodez00_bglt) BgL_bindingzd2value3258zd2_1697),
													BUNSPEC);
												BgL_res3719z00_1698 = BgL_new3259z00_1695;
										}} BgL_res3719z00_1698;
									}
									BgL_res3720z00_1699 = BgL_new3243z00_1694;
								}
								BgL_arg3449z00_870 = BgL_res3720z00_1699;
						}}
						{	/* Cnst/node.scm 31 */
							obj_t BgL_auxz00_2994;

							BgL_objectz00_bglt BgL_auxz00_2992;

							BgL_auxz00_2994 = (obj_t) (BgL_arg3449z00_870);
							BgL_auxz00_2992 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2localzf2bvaluezd2nilza0zzcnst_nodez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2992, BgL_auxz00_2994);
				}}}
			else
				{	/* Cnst/node.scm 31 */
					BFALSE;
				}
			return
				(BgL_localzf2bvaluezf2_bglt)
				(BGl_z52thezd2localzf2bvaluezd2nilza0zzcnst_nodez00);
		}
	}



/* _local/bvalue-nil */
	obj_t BGl__localzf2bvaluezd2nilz20zzcnst_nodez00(obj_t BgL_envz00_2775)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 31 */
			return (obj_t) (BGl_localzf2bvaluezd2nilz20zzcnst_nodez00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcnst_nodez00()
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 16 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00,
				BGl_cnstz12zd2default3360zd2envz12zzcnst_nodez00,
				BGl_nodez00zzast_nodez00, BGl_string3816z00zzcnst_nodez00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcnst_nodez00,
				BGl_getzd2nodezd2atomzd2valuezd23405zd2envzd2zzcnst_nodez00,
				BGl_nodez00zzast_nodez00, BGl_string3817z00zzcnst_nodez00);
		}
	}



/* cnst! */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstz12z12zzcnst_nodez00(BgL_nodez00_bglt BgL_nodez00_11)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 37 */
			{	/* Cnst/node.scm 37 */
				obj_t BgL_method3361z00_1714;

				{	/* Cnst/node.scm 37 */
					BgL_objectz00_bglt BgL_objz00_1715;

					BgL_objz00_1715 = (BgL_objectz00_bglt) (BgL_nodez00_11);
					{	/* Cnst/node.scm 37 */
						long BgL_objzd2classzd2numz00_1716;

						BgL_objzd2classzd2numz00_1716 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1715);
						{	/* Cnst/node.scm 37 */
							obj_t BgL_arg2643z00_1717;

							BgL_arg2643z00_1717 =
								PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
								(int) (((long) 1)));
							{	/* Cnst/node.scm 37 */
								obj_t BgL_arrayz00_1719;

								int BgL_offsetz00_1720;

								BgL_arrayz00_1719 = BgL_arg2643z00_1717;
								BgL_offsetz00_1720 = (int) (BgL_objzd2classzd2numz00_1716);
								{	/* Cnst/node.scm 37 */
									long BgL_offsetz00_1721;

									BgL_offsetz00_1721 =
										((long) (BgL_offsetz00_1720) - OBJECT_TYPE);
									{	/* Cnst/node.scm 37 */
										long BgL_modz00_1722;

										{	/* Cnst/node.scm 37 */
											int BgL_arg2645z00_1723;

											BgL_arg2645z00_1723 = (int) (((long) 16));
											{	/* Cnst/node.scm 37 */
												long BgL_auxz00_3010;

												BgL_auxz00_3010 = (long) (BgL_arg2645z00_1723);
												BgL_modz00_1722 =
													(BgL_offsetz00_1721 / BgL_auxz00_3010);
										}}
										{	/* Cnst/node.scm 37 */
											long BgL_restz00_1724;

											{	/* Cnst/node.scm 37 */
												int BgL_arg2644z00_1725;

												BgL_arg2644z00_1725 = (int) (((long) 16));
												{	/* Cnst/node.scm 37 */
													long BgL_auxz00_3014;

													BgL_auxz00_3014 = (long) (BgL_arg2644z00_1725);
													BgL_restz00_1724 =
														(BgL_offsetz00_1721 % BgL_auxz00_3014);
											}}
											{	/* Cnst/node.scm 37 */

												BgL_method3361z00_1714 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1719,
														(int) (BgL_modz00_1722)), (int) (BgL_restz00_1724));
				}}}}}}}}
				return
					(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_1714)
					(BgL_method3361z00_1714, (obj_t) (BgL_nodez00_11), BEOA));
			}
		}
	}



/* _cnst! */
	obj_t BGl__cnstz12z12zzcnst_nodez00(obj_t BgL_envz00_2772,
		obj_t BgL_nodez00_2773)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 37 */
			return
				(obj_t) (BGl_cnstz12z12zzcnst_nodez00(
					(BgL_nodez00_bglt) (BgL_nodez00_2773)));
		}
	}



/* cnst!-default3360 */
	BgL_nodez00_bglt BGl_cnstz12zd2default3360zc0zzcnst_nodez00(BgL_nodez00_bglt
		BgL_nodez00_12)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 16 */
			return
				(BgL_nodez00_bglt) (BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 3)),
					BGl_string3818z00zzcnst_nodez00, (obj_t) (BgL_nodez00_12)));
		}
	}



/* _cnst!-default3360 */
	obj_t BGl__cnstz12zd2default3360zc0zzcnst_nodez00(obj_t BgL_envz00_2778,
		obj_t BgL_nodez00_2779)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 16 */
			return
				(obj_t) (BGl_cnstz12zd2default3360zc0zzcnst_nodez00(
					(BgL_nodez00_bglt) (BgL_nodez00_2779)));
		}
	}



/* get-node-atom-value */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2nodezd2atomzd2valuezd2zzcnst_nodez00(BgL_nodez00_bglt
		BgL_nodez00_35)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 321 */
			{	/* Cnst/node.scm 321 */
				obj_t BgL_method3406z00_1739;

				{	/* Cnst/node.scm 321 */
					BgL_objectz00_bglt BgL_objz00_1740;

					BgL_objz00_1740 = (BgL_objectz00_bglt) (BgL_nodez00_35);
					{	/* Cnst/node.scm 321 */
						long BgL_objzd2classzd2numz00_1741;

						BgL_objzd2classzd2numz00_1741 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1740);
						{	/* Cnst/node.scm 321 */
							obj_t BgL_arg2643z00_1742;

							BgL_arg2643z00_1742 =
								PROCEDURE_REF
								(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcnst_nodez00,
								(int) (((long) 1)));
							{	/* Cnst/node.scm 321 */
								obj_t BgL_arrayz00_1744;

								int BgL_offsetz00_1745;

								BgL_arrayz00_1744 = BgL_arg2643z00_1742;
								BgL_offsetz00_1745 = (int) (BgL_objzd2classzd2numz00_1741);
								{	/* Cnst/node.scm 321 */
									long BgL_offsetz00_1746;

									BgL_offsetz00_1746 =
										((long) (BgL_offsetz00_1745) - OBJECT_TYPE);
									{	/* Cnst/node.scm 321 */
										long BgL_modz00_1747;

										{	/* Cnst/node.scm 321 */
											int BgL_arg2645z00_1748;

											BgL_arg2645z00_1748 = (int) (((long) 16));
											{	/* Cnst/node.scm 321 */
												long BgL_auxz00_3043;

												BgL_auxz00_3043 = (long) (BgL_arg2645z00_1748);
												BgL_modz00_1747 =
													(BgL_offsetz00_1746 / BgL_auxz00_3043);
										}}
										{	/* Cnst/node.scm 321 */
											long BgL_restz00_1749;

											{	/* Cnst/node.scm 321 */
												int BgL_arg2644z00_1750;

												BgL_arg2644z00_1750 = (int) (((long) 16));
												{	/* Cnst/node.scm 321 */
													long BgL_auxz00_3047;

													BgL_auxz00_3047 = (long) (BgL_arg2644z00_1750);
													BgL_restz00_1749 =
														(BgL_offsetz00_1746 % BgL_auxz00_3047);
											}}
											{	/* Cnst/node.scm 321 */

												BgL_method3406z00_1739 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1744,
														(int) (BgL_modz00_1747)), (int) (BgL_restz00_1749));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3406z00_1739) (BgL_method3406z00_1739,
					(obj_t) (BgL_nodez00_35), BEOA);
			}
		}
	}



/* _get-node-atom-value */
	obj_t BGl__getzd2nodezd2atomzd2valuezd2zzcnst_nodez00(obj_t BgL_envz00_2780,
		obj_t BgL_nodez00_2781)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 321 */
			return
				BGl_getzd2nodezd2atomzd2valuezd2zzcnst_nodez00(
				(BgL_nodez00_bglt) (BgL_nodez00_2781));
		}
	}



/* _get-node-atom-value-3405 */
	obj_t BGl__getzd2nodezd2atomzd2valuezd23405z00zzcnst_nodez00(obj_t
		BgL_envz00_2782, obj_t BgL_nodez00_2783)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 16 */
			{	/* Cnst/node.scm 322 */
				obj_t BgL_res3855z00_2884;

				BgL_res3855z00_2884 = CNST_TABLE_REF(((long) 4));
				return BgL_res3855z00_2884;
			}
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcnst_nodez00()
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_atomz00zzast_nodez00,
				BGl_proc3819z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_kwotez00zzast_nodez00,
				BGl_proc3820z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_varz00zzast_nodez00,
				BGl_proc3821z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_closurez00zzast_nodez00,
				BGl_proc3822z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_sequencez00zzast_nodez00,
				BGl_proc3823z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_externz00zzast_nodez00,
				BGl_proc3824z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_castz00zzast_nodez00,
				BGl_proc3825z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_setqz00zzast_nodez00,
				BGl_proc3826z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_conditionalz00zzast_nodez00,
				BGl_proc3827z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_failz00zzast_nodez00,
				BGl_proc3828z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_selectz00zzast_nodez00,
				BGl_proc3829z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc3830z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc3831z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc3832z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc3833z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc3834z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc3835z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc3836z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3837z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_funcallz00zzast_nodez00,
				BGl_proc3838z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cnstz12zd2envzc0zzcnst_nodez00, BGl_appz00zzast_nodez00,
				BGl_proc3839z00zzcnst_nodez00, BGl_string3816z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcnst_nodez00,
				BGl_atomz00zzast_nodez00, BGl_proc3840z00zzcnst_nodez00,
				BGl_string3817z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcnst_nodez00,
				BGl_varz00zzast_nodez00, BGl_proc3841z00zzcnst_nodez00,
				BGl_string3817z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcnst_nodez00,
				BGl_appz00zzast_nodez00, BGl_proc3842z00zzcnst_nodez00,
				BGl_string3817z00zzcnst_nodez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_localzf2bvaluezf2zzcnst_nodez00, BGl_proc3843z00zzcnst_nodez00,
				BGl_string3844z00zzcnst_nodez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_localzf2bvaluezf2zzcnst_nodez00, BGl_proc3845z00zzcnst_nodez00,
				BGl_string3846z00zzcnst_nodez00);
		}
	}



/* struct+object->objec3417 */
	obj_t BGl_structzb2objectzd2ze3objec3417z83zzcnst_nodez00(obj_t
		BgL_envz00_2815, obj_t BgL_oz00_2816, obj_t BgL_sz00_2817)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 31 */
			{
				BgL_localzf2bvaluezf2_bglt BgL_oz00_1603;

				obj_t BgL_sz00_1604;

				{	/* Cnst/node.scm 31 */
					BgL_localzf2bvaluezf2_bglt BgL_auxz00_3086;

					BgL_oz00_1603 = (BgL_localzf2bvaluezf2_bglt) (BgL_oz00_2816);
					BgL_sz00_1604 = BgL_sz00_2817;
					{

						{	/* Cnst/node.scm 31 */
							obj_t BgL_old3266z00_1607;

							obj_t BgL_aux3267z00_1608;

							{	/* Cnst/node.scm 31 */
								obj_t BgL_nextzd2method3416zd2_1613;

								BgL_nextzd2method3416zd2_1613 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1603),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_localzf2bvaluezf2zzcnst_nodez00);
								if (PROCEDUREP(BgL_nextzd2method3416zd2_1613))
									{	/* Cnst/node.scm 31 */
										BgL_old3266z00_1607 =
											PROCEDURE_ENTRY(BgL_nextzd2method3416zd2_1613)
											(BgL_nextzd2method3416zd2_1613, (obj_t) (BgL_oz00_1603),
											BgL_sz00_1604, BEOA);
									}
								else
									{	/* Cnst/node.scm 31 */
										BgL_old3266z00_1607 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1603), BgL_sz00_1604));
									}
							}
							BgL_aux3267z00_1608 =
								STRUCT_REF(BgL_sz00_1604, (int) (((long) 0)));
							{	/* Cnst/node.scm 31 */
								BgL_localzf2bvaluezf2_bglt BgL_new3268z00_1609;

								BgL_new3268z00_1609 =
									((BgL_localzf2bvaluezf2_bglt) (BgL_old3266z00_1607));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3268z00_1609),
									BGl_classzd2numzd2zz__objectz00
									(BGl_localzf2bvaluezf2zzcnst_nodez00));
								{	/* Cnst/node.scm 31 */
									BgL_localzf2bvaluezf2_bglt BgL_arg3708z00_1611;

									{	/* Cnst/node.scm 31 */
										obj_t BgL_arg3709z00_1612;

										BgL_arg3709z00_1612 =
											STRUCT_REF(BgL_aux3267z00_1608, (int) (((long) 0)));
										{	/* Cnst/node.scm 31 */
											BgL_localzf2bvaluezf2_bglt BgL_res3812z00_2770;

											{	/* Cnst/node.scm 31 */
												BgL_nodez00_bglt BgL_bindingzd2value3242zd2_2764;

												BgL_bindingzd2value3242zd2_2764 =
													(BgL_nodez00_bglt) (BgL_arg3709z00_1612);
												{	/* Cnst/node.scm 31 */
													BgL_localzf2bvaluezf2_bglt BgL_new3243z00_2765;

													BgL_new3243z00_2765 =
														((BgL_localzf2bvaluezf2_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_localzf2bvaluezf2_bgl))));
													{	/* Cnst/node.scm 31 */
														BgL_localzf2bvaluezf2_bglt BgL_res3811z00_2769;

														{	/* Cnst/node.scm 31 */
															BgL_localzf2bvaluezf2_bglt BgL_new3259z00_2766;

															BgL_new3259z00_2766 = BgL_new3243z00_2765;
															{	/* Cnst/node.scm 31 */
																BgL_nodez00_bglt
																	BgL_bindingzd2value3258zd2_2768;
																BgL_bindingzd2value3258zd2_2768 =
																	BgL_bindingzd2value3242zd2_2764;
																((((BgL_localzf2bvaluezf2_bglt)
																			CREF(BgL_new3259z00_2766))->
																		BgL_bindingzd2valuezd2) =
																	((BgL_nodez00_bglt)
																		BgL_bindingzd2value3258zd2_2768), BUNSPEC);
																BgL_res3811z00_2769 = BgL_new3259z00_2766;
														}} BgL_res3811z00_2769;
													}
													BgL_res3812z00_2770 = BgL_new3243z00_2765;
											}}
											BgL_arg3708z00_1611 = BgL_res3812z00_2770;
									}}
									{	/* Cnst/node.scm 31 */
										obj_t BgL_auxz00_3110;

										BgL_objectz00_bglt BgL_auxz00_3108;

										BgL_auxz00_3110 = (obj_t) (BgL_arg3708z00_1611);
										BgL_auxz00_3108 =
											(BgL_objectz00_bglt) (BgL_new3268z00_1609);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3108, BgL_auxz00_3110);
								}}
								BgL_auxz00_3086 = BgL_new3268z00_1609;
					}}}
					return (obj_t) (BgL_auxz00_3086);
				}
			}
		}
	}



/* object->struct-local3415 */
	obj_t BGl_objectzd2ze3structzd2local3415ze3zzcnst_nodez00(obj_t
		BgL_envz00_2818, obj_t BgL_obj3263z00_2819)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 31 */
			{
				BgL_localzf2bvaluezf2_bglt BgL_obj3263z00_1593;

				BgL_obj3263z00_1593 =
					(BgL_localzf2bvaluezf2_bglt) (BgL_obj3263z00_2819);
				{

					{	/* Cnst/node.scm 31 */
						obj_t BgL_res3264z00_1596;

						{	/* Cnst/node.scm 31 */
							obj_t BgL_nextzd2method3414zd2_1601;

							BgL_nextzd2method3414zd2_1601 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3263z00_1593),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_localzf2bvaluezf2zzcnst_nodez00);
							if (PROCEDUREP(BgL_nextzd2method3414zd2_1601))
								{	/* Cnst/node.scm 31 */
									BgL_res3264z00_1596 =
										PROCEDURE_ENTRY(BgL_nextzd2method3414zd2_1601)
										(BgL_nextzd2method3414zd2_1601,
										(obj_t) (BgL_obj3263z00_1593), BEOA);
								}
							else
								{	/* Cnst/node.scm 31 */
									BgL_res3264z00_1596 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3263z00_1593));
								}
						}
						{	/* Cnst/node.scm 31 */
							obj_t BgL_aux3265z00_1597;

							{	/* Cnst/node.scm 31 */
								obj_t BgL_keyz00_2741;

								BgL_keyz00_2741 = CNST_TABLE_REF(((long) 1));
								BgL_aux3265z00_1597 =
									make_struct(BgL_keyz00_2741, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Cnst/node.scm 31 */
								BgL_nodez00_bglt BgL_arg3704z00_1599;

								{
									obj_t BgL_auxz00_3127;

									{	/* Cnst/node.scm 31 */
										BgL_objectz00_bglt BgL_auxz00_3128;

										BgL_auxz00_3128 =
											(BgL_objectz00_bglt) (BgL_obj3263z00_1593);
										BgL_auxz00_3127 = BGL_OBJECT_WIDENING(BgL_auxz00_3128);
									}
									BgL_arg3704z00_1599 =
										(((BgL_localzf2bvaluezf2_bglt) CREF(BgL_auxz00_3127))->
										BgL_bindingzd2valuezd2);
								}
								{	/* Cnst/node.scm 31 */
									obj_t BgL_auxz00_3134;

									int BgL_auxz00_3132;

									BgL_auxz00_3134 = (obj_t) (BgL_arg3704z00_1599);
									BgL_auxz00_3132 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3265z00_1597, BgL_auxz00_3132,
										BgL_auxz00_3134);
							}}
							{	/* Cnst/node.scm 31 */
								int BgL_auxz00_3137;

								BgL_auxz00_3137 = (int) (((long) 0));
								STRUCT_SET(BgL_res3264z00_1596, BgL_auxz00_3137,
									BgL_aux3265z00_1597);
							}
							{	/* Cnst/node.scm 31 */
								obj_t BgL_auxz00_3140;

								BgL_auxz00_3140 = STRUCT_KEY(BgL_res3264z00_1596);
								STRUCT_KEY_SET(BgL_aux3265z00_1597, BgL_auxz00_3140);
							}
							{	/* Cnst/node.scm 31 */
								obj_t BgL_kz00_2756;

								BgL_kz00_2756 = CNST_TABLE_REF(((long) 1));
								STRUCT_KEY_SET(BgL_res3264z00_1596, BgL_kz00_2756);
							}
							return BgL_res3264z00_1596;
						}
					}
				}
			}
		}
	}



/* get-node-atom-value-3412 */
	obj_t BGl_getzd2nodezd2atomzd2valuezd23412z00zzcnst_nodez00(obj_t
		BgL_envz00_2820, obj_t BgL_nodez00_2821)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 342 */
			{
				BgL_appz00_bglt BgL_nodez00_1577;

				BgL_nodez00_1577 = (BgL_appz00_bglt) (BgL_nodez00_2821);
				{	/* Cnst/node.scm 344 */
					BgL_variablez00_bglt BgL_funz00_1581;

					{	/* Cnst/node.scm 344 */
						BgL_varz00_bglt BgL_obj2155z00_2707;

						BgL_obj2155z00_2707 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1577))->BgL_funz00);
						BgL_funz00_1581 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2707))->BgL_variablez00);
					}
					if (
						((obj_t) (BgL_funz00_1581) ==
							BGl_za2longzd2ze3intza2z31zzcnst_cachez00))
						{	/* Cnst/node.scm 347 */
							bool_t BgL_testz00_3151;

							{	/* Cnst/node.scm 347 */
								bool_t BgL_testz00_3152;

								{	/* Cnst/node.scm 347 */
									obj_t BgL_auxz00_3153;

									BgL_auxz00_3153 =
										(((BgL_appz00_bglt) CREF(BgL_nodez00_1577))->BgL_argsz00);
									BgL_testz00_3152 = PAIRP(BgL_auxz00_3153);
								}
								if (BgL_testz00_3152)
									{	/* Cnst/node.scm 347 */
										obj_t BgL_auxz00_3156;

										{	/* Cnst/node.scm 347 */
											obj_t BgL_pairz00_2711;

											BgL_pairz00_2711 =
												(((BgL_appz00_bglt) CREF(BgL_nodez00_1577))->
												BgL_argsz00);
											BgL_auxz00_3156 = CDR(BgL_pairz00_2711);
										}
										BgL_testz00_3151 = NULLP(BgL_auxz00_3156);
									}
								else
									{	/* Cnst/node.scm 347 */
										BgL_testz00_3151 = ((bool_t) 0);
									}
							}
							if (BgL_testz00_3151)
								{	/* Cnst/node.scm 348 */
									obj_t BgL_arg3695z00_1584;

									{	/* Cnst/node.scm 348 */
										obj_t BgL_pairz00_2714;

										BgL_pairz00_2714 =
											(((BgL_appz00_bglt) CREF(BgL_nodez00_1577))->BgL_argsz00);
										BgL_arg3695z00_1584 = CAR(BgL_pairz00_2714);
									}
									{	/* Cnst/node.scm 348 */
										BgL_nodez00_bglt BgL_nodez00_2715;

										BgL_nodez00_2715 = (BgL_nodez00_bglt) (BgL_arg3695z00_1584);
										{	/* Cnst/node.scm 348 */
											obj_t BgL_method3406z00_2716;

											{	/* Cnst/node.scm 348 */
												BgL_objectz00_bglt BgL_objz00_2717;

												BgL_objz00_2717 =
													(BgL_objectz00_bglt) (BgL_nodez00_2715);
												{	/* Cnst/node.scm 348 */
													long BgL_objzd2classzd2numz00_2718;

													BgL_objzd2classzd2numz00_2718 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2717);
													{	/* Cnst/node.scm 348 */
														obj_t BgL_arg2643z00_2719;

														BgL_arg2643z00_2719 =
															PROCEDURE_REF
															(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcnst_nodez00,
															(int) (((long) 1)));
														{	/* Cnst/node.scm 348 */
															obj_t BgL_arrayz00_2721;

															int BgL_offsetz00_2722;

															BgL_arrayz00_2721 = BgL_arg2643z00_2719;
															BgL_offsetz00_2722 =
																(int) (BgL_objzd2classzd2numz00_2718);
															{	/* Cnst/node.scm 348 */
																long BgL_offsetz00_2723;

																BgL_offsetz00_2723 =
																	((long) (BgL_offsetz00_2722) - OBJECT_TYPE);
																{	/* Cnst/node.scm 348 */
																	long BgL_modz00_2724;

																	{	/* Cnst/node.scm 348 */
																		int BgL_arg2645z00_2725;

																		BgL_arg2645z00_2725 = (int) (((long) 16));
																		{	/* Cnst/node.scm 348 */
																			long BgL_auxz00_3171;

																			BgL_auxz00_3171 =
																				(long) (BgL_arg2645z00_2725);
																			BgL_modz00_2724 =
																				(BgL_offsetz00_2723 / BgL_auxz00_3171);
																	}}
																	{	/* Cnst/node.scm 348 */
																		long BgL_restz00_2726;

																		{	/* Cnst/node.scm 348 */
																			int BgL_arg2644z00_2727;

																			BgL_arg2644z00_2727 = (int) (((long) 16));
																			{	/* Cnst/node.scm 348 */
																				long BgL_auxz00_3175;

																				BgL_auxz00_3175 =
																					(long) (BgL_arg2644z00_2727);
																				BgL_restz00_2726 =
																					(BgL_offsetz00_2723 %
																					BgL_auxz00_3175);
																		}}
																		{	/* Cnst/node.scm 348 */

																			BgL_method3406z00_2716 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2721,
																					(int) (BgL_modz00_2724)),
																				(int) (BgL_restz00_2726));
											}}}}}}}}
											return
												PROCEDURE_ENTRY(BgL_method3406z00_2716)
												(BgL_method3406z00_2716, (obj_t) (BgL_nodez00_2715),
												BEOA);
										}
									}
								}
							else
								{	/* Cnst/node.scm 347 */
									return CNST_TABLE_REF(((long) 4));
						}}
					else
						{	/* Cnst/node.scm 346 */
							return CNST_TABLE_REF(((long) 4));
		}}}}
	}



/* get-node-atom-value-3410 */
	obj_t BGl_getzd2nodezd2atomzd2valuezd23410z00zzcnst_nodez00(obj_t
		BgL_envz00_2822, obj_t BgL_nodez00_2823)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 333 */
			{
				BgL_varz00_bglt BgL_nodez00_1569;

				BgL_nodez00_1569 = (BgL_varz00_bglt) (BgL_nodez00_2823);
				{	/* Cnst/node.scm 334 */
					BgL_variablez00_bglt BgL_vz00_1572;

					BgL_vz00_1572 =
						(((BgL_varz00_bglt) CREF(BgL_nodez00_1569))->BgL_variablez00);
					{	/* Cnst/node.scm 335 */
						bool_t BgL_testz00_3189;

						{	/* Cnst/node.scm 335 */
							obj_t BgL_obj3269z00_2678;

							BgL_obj3269z00_2678 = (obj_t) (BgL_vz00_1572);
							BgL_testz00_3189 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj3269z00_2678,
								BGl_localzf2bvaluezf2zzcnst_nodez00);
						}
						if (BgL_testz00_3189)
							{	/* Cnst/node.scm 336 */
								BgL_nodez00_bglt BgL_arg3691z00_1574;

								{	/* Cnst/node.scm 336 */
									BgL_localzf2bvaluezf2_bglt BgL_obj3270z00_2679;

									BgL_obj3270z00_2679 =
										(BgL_localzf2bvaluezf2_bglt) (BgL_vz00_1572);
									{
										obj_t BgL_auxz00_3193;

										{	/* Cnst/node.scm 336 */
											BgL_objectz00_bglt BgL_auxz00_3194;

											BgL_auxz00_3194 =
												(BgL_objectz00_bglt) (BgL_obj3270z00_2679);
											BgL_auxz00_3193 = BGL_OBJECT_WIDENING(BgL_auxz00_3194);
										}
										BgL_arg3691z00_1574 =
											(((BgL_localzf2bvaluezf2_bglt) CREF(BgL_auxz00_3193))->
											BgL_bindingzd2valuezd2);
									}
								}
								{	/* Cnst/node.scm 336 */
									obj_t BgL_method3406z00_2681;

									{	/* Cnst/node.scm 336 */
										BgL_objectz00_bglt BgL_objz00_2682;

										BgL_objz00_2682 =
											(BgL_objectz00_bglt) (BgL_arg3691z00_1574);
										{	/* Cnst/node.scm 336 */
											long BgL_objzd2classzd2numz00_2683;

											BgL_objzd2classzd2numz00_2683 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2682);
											{	/* Cnst/node.scm 336 */
												obj_t BgL_arg2643z00_2684;

												BgL_arg2643z00_2684 =
													PROCEDURE_REF
													(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcnst_nodez00,
													(int) (((long) 1)));
												{	/* Cnst/node.scm 336 */
													obj_t BgL_arrayz00_2686;

													int BgL_offsetz00_2687;

													BgL_arrayz00_2686 = BgL_arg2643z00_2684;
													BgL_offsetz00_2687 =
														(int) (BgL_objzd2classzd2numz00_2683);
													{	/* Cnst/node.scm 336 */
														long BgL_offsetz00_2688;

														BgL_offsetz00_2688 =
															((long) (BgL_offsetz00_2687) - OBJECT_TYPE);
														{	/* Cnst/node.scm 336 */
															long BgL_modz00_2689;

															{	/* Cnst/node.scm 336 */
																int BgL_arg2645z00_2690;

																BgL_arg2645z00_2690 = (int) (((long) 16));
																{	/* Cnst/node.scm 336 */
																	long BgL_auxz00_3206;

																	BgL_auxz00_3206 =
																		(long) (BgL_arg2645z00_2690);
																	BgL_modz00_2689 =
																		(BgL_offsetz00_2688 / BgL_auxz00_3206);
															}}
															{	/* Cnst/node.scm 336 */
																long BgL_restz00_2691;

																{	/* Cnst/node.scm 336 */
																	int BgL_arg2644z00_2692;

																	BgL_arg2644z00_2692 = (int) (((long) 16));
																	{	/* Cnst/node.scm 336 */
																		long BgL_auxz00_3210;

																		BgL_auxz00_3210 =
																			(long) (BgL_arg2644z00_2692);
																		BgL_restz00_2691 =
																			(BgL_offsetz00_2688 % BgL_auxz00_3210);
																}}
																{	/* Cnst/node.scm 336 */

																	BgL_method3406z00_2681 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2686,
																			(int) (BgL_modz00_2689)),
																		(int) (BgL_restz00_2691));
									}}}}}}}}
									return
										PROCEDURE_ENTRY(BgL_method3406z00_2681)
										(BgL_method3406z00_2681, (obj_t) (BgL_arg3691z00_1574),
										BEOA);
								}
							}
						else
							{	/* Cnst/node.scm 335 */
								return CNST_TABLE_REF(((long) 4));
		}}}}}
	}



/* get-node-atom-value-3408 */
	obj_t BGl_getzd2nodezd2atomzd2valuezd23408z00zzcnst_nodez00(obj_t
		BgL_envz00_2824, obj_t BgL_nodez00_2825)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 327 */
			{
				BgL_atomz00_bglt BgL_auxz00_3222;

				BgL_auxz00_3222 = (BgL_atomz00_bglt) (BgL_nodez00_2825);
				return (((BgL_atomz00_bglt) CREF(BgL_auxz00_3222))->BgL_valuez00);
			}
		}
	}



/* cnst!-app3404 */
	obj_t BGl_cnstz12zd2app3404zc0zzcnst_nodez00(obj_t BgL_envz00_2826,
		obj_t BgL_nodez00_2827)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 267 */
			{
				BgL_appz00_bglt BgL_nodez00_1525;

				BgL_nodez00_1525 = (BgL_appz00_bglt) (BgL_nodez00_2827);
				{	/* Cnst/node.scm 269 */
					obj_t BgL_arg3660z00_1529;

					BgL_arg3660z00_1529 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_1525))->BgL_argsz00);
					BGl_cnstza2z12zb0zzcnst_nodez00(BgL_arg3660z00_1529);
				}
				if (NULLP((((BgL_appz00_bglt) CREF(BgL_nodez00_1525))->BgL_argsz00)))
					{	/* Cnst/node.scm 271 */
						return (obj_t) (BgL_nodez00_1525);
					}
				else
					{	/* Cnst/node.scm 273 */
						BgL_variablez00_bglt BgL_funz00_1531;

						{	/* Cnst/node.scm 273 */
							BgL_varz00_bglt BgL_obj2155z00_2597;

							BgL_obj2155z00_2597 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1525))->BgL_funz00);
							BgL_funz00_1531 =
								(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2597))->
								BgL_variablez00);
						}
						{	/* Cnst/node.scm 273 */
							obj_t BgL_actualz00_1532;

							{	/* Cnst/node.scm 274 */
								obj_t BgL_pairz00_2599;

								BgL_pairz00_2599 =
									(((BgL_appz00_bglt) CREF(BgL_nodez00_1525))->BgL_argsz00);
								BgL_actualz00_1532 = CAR(BgL_pairz00_2599);
							}
							{	/* Cnst/node.scm 274 */
								obj_t BgL_actualzd2valuezd2_1533;

								{	/* Cnst/node.scm 275 */
									BgL_nodez00_bglt BgL_nodez00_2600;

									BgL_nodez00_2600 = (BgL_nodez00_bglt) (BgL_actualz00_1532);
									{	/* Cnst/node.scm 275 */
										obj_t BgL_method3406z00_2601;

										{	/* Cnst/node.scm 275 */
											BgL_objectz00_bglt BgL_objz00_2602;

											BgL_objz00_2602 = (BgL_objectz00_bglt) (BgL_nodez00_2600);
											{	/* Cnst/node.scm 275 */
												long BgL_objzd2classzd2numz00_2603;

												BgL_objzd2classzd2numz00_2603 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2602);
												{	/* Cnst/node.scm 275 */
													obj_t BgL_arg2643z00_2604;

													BgL_arg2643z00_2604 =
														PROCEDURE_REF
														(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcnst_nodez00,
														(int) (((long) 1)));
													{	/* Cnst/node.scm 275 */
														obj_t BgL_arrayz00_2606;

														int BgL_offsetz00_2607;

														BgL_arrayz00_2606 = BgL_arg2643z00_2604;
														BgL_offsetz00_2607 =
															(int) (BgL_objzd2classzd2numz00_2603);
														{	/* Cnst/node.scm 275 */
															long BgL_offsetz00_2608;

															BgL_offsetz00_2608 =
																((long) (BgL_offsetz00_2607) - OBJECT_TYPE);
															{	/* Cnst/node.scm 275 */
																long BgL_modz00_2609;

																{	/* Cnst/node.scm 275 */
																	int BgL_arg2645z00_2610;

																	BgL_arg2645z00_2610 = (int) (((long) 16));
																	{	/* Cnst/node.scm 275 */
																		long BgL_auxz00_3244;

																		BgL_auxz00_3244 =
																			(long) (BgL_arg2645z00_2610);
																		BgL_modz00_2609 =
																			(BgL_offsetz00_2608 / BgL_auxz00_3244);
																}}
																{	/* Cnst/node.scm 275 */
																	long BgL_restz00_2611;

																	{	/* Cnst/node.scm 275 */
																		int BgL_arg2644z00_2612;

																		BgL_arg2644z00_2612 = (int) (((long) 16));
																		{	/* Cnst/node.scm 275 */
																			long BgL_auxz00_3248;

																			BgL_auxz00_3248 =
																				(long) (BgL_arg2644z00_2612);
																			BgL_restz00_2611 =
																				(BgL_offsetz00_2608 % BgL_auxz00_3248);
																	}}
																	{	/* Cnst/node.scm 275 */

																		BgL_method3406z00_2601 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2606,
																				(int) (BgL_modz00_2609)),
																			(int) (BgL_restz00_2611));
										}}}}}}}}
										BgL_actualzd2valuezd2_1533 =
											PROCEDURE_ENTRY(BgL_method3406z00_2601)
											(BgL_method3406z00_2601, (obj_t) (BgL_nodez00_2600),
											BEOA);
								}}
								{	/* Cnst/node.scm 275 */

									if (
										((obj_t) (BgL_funz00_1531) ==
											BGl_za2stringzd2ze3bstringza2z31zzcnst_cachez00))
										{	/* Cnst/node.scm 277 */
											if (STRINGP(BgL_actualzd2valuezd2_1533))
												{	/* Cnst/node.scm 279 */
													BgL_nodez00_bglt BgL_rz00_1536;

													{	/* Cnst/node.scm 279 */
														obj_t BgL_arg3664z00_1537;

														{
															BgL_nodez00_bglt BgL_auxz00_3263;

															BgL_auxz00_3263 =
																(BgL_nodez00_bglt) (BgL_nodez00_1525);
															BgL_arg3664z00_1537 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_3263))->
																BgL_locz00);
														}
														BgL_rz00_1536 =
															BGl_cnstzd2alloczd2stringz00zzcnst_allocz00
															(BgL_actualzd2valuezd2_1533, BgL_arg3664z00_1537);
													}
													return (obj_t) (BgL_rz00_1536);
												}
											else
												{	/* Cnst/node.scm 278 */
													return (obj_t) (BgL_nodez00_1525);
												}
										}
									else
										{	/* Cnst/node.scm 277 */
											if (
												((obj_t) (BgL_funz00_1531) ==
													BGl_za2boolzd2ze3bboolza2z31zzcnst_cachez00))
												{	/* Cnst/node.scm 283 */
													if (BOOLEANP(BgL_actualzd2valuezd2_1533))
														{	/* Cnst/node.scm 284 */
															if (CBOOL(BgL_actualzd2valuezd2_1533))
																{	/* Cnst/node.scm 287 */
																	obj_t BgL_arg3667z00_1540;

																	{
																		BgL_nodez00_bglt BgL_auxz00_3276;

																		BgL_auxz00_3276 =
																			(BgL_nodez00_bglt) (BgL_nodez00_1525);
																		BgL_arg3667z00_1540 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_auxz00_3276))->BgL_locz00);
																	}
																	return
																		(obj_t) (BGl_makezd2varzd2zzast_nodez00
																		(BgL_arg3667z00_1540,
																			(BgL_typez00_bglt)
																			(BGl_za2bboolza2z00zztype_cachez00),
																			(BgL_variablez00_bglt)
																			(BGl_za2btrueza2z00zzcnst_cachez00)));
																}
															else
																{	/* Cnst/node.scm 291 */
																	obj_t BgL_arg3668z00_1541;

																	{
																		BgL_nodez00_bglt BgL_auxz00_3283;

																		BgL_auxz00_3283 =
																			(BgL_nodez00_bglt) (BgL_nodez00_1525);
																		BgL_arg3668z00_1541 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_auxz00_3283))->BgL_locz00);
																	}
																	return
																		(obj_t) (BGl_makezd2varzd2zzast_nodez00
																		(BgL_arg3668z00_1541,
																			(BgL_typez00_bglt)
																			(BGl_za2bboolza2z00zztype_cachez00),
																			(BgL_variablez00_bglt)
																			(BGl_za2bfalseza2z00zzcnst_cachez00)));
																}
														}
													else
														{	/* Cnst/node.scm 284 */
															return (obj_t) (BgL_nodez00_1525);
														}
												}
											else
												{	/* Cnst/node.scm 295 */
													bool_t BgL_testz00_3291;

													if (
														((obj_t) (BgL_funz00_1531) ==
															BGl_za2makezd2fxzd2procedureza2z00zzcnst_cachez00))
														{	/* Cnst/node.scm 295 */
															BgL_testz00_3291 = ((bool_t) 1);
														}
													else
														{	/* Cnst/node.scm 295 */
															BgL_testz00_3291 =
																(
																(obj_t) (BgL_funz00_1531) ==
																BGl_za2makezd2vazd2procedureza2z00zzcnst_cachez00);
														}
													if (BgL_testz00_3291)
														{	/* Cnst/node.scm 297 */
															obj_t BgL_siza7ezd2valuez75_1543;

															{	/* Cnst/node.scm 297 */
																obj_t BgL_arg3673z00_1547;

																{	/* Cnst/node.scm 297 */
																	obj_t BgL_pairz00_2632;

																	BgL_pairz00_2632 =
																		(((BgL_appz00_bglt)
																			CREF(BgL_nodez00_1525))->BgL_argsz00);
																	BgL_arg3673z00_1547 =
																		CAR(CDR(CDR(BgL_pairz00_2632)));
																}
																{	/* Cnst/node.scm 297 */
																	BgL_nodez00_bglt BgL_nodez00_2638;

																	BgL_nodez00_2638 =
																		(BgL_nodez00_bglt) (BgL_arg3673z00_1547);
																	{	/* Cnst/node.scm 297 */
																		obj_t BgL_method3406z00_2639;

																		{	/* Cnst/node.scm 297 */
																			BgL_objectz00_bglt BgL_objz00_2640;

																			BgL_objz00_2640 =
																				(BgL_objectz00_bglt) (BgL_nodez00_2638);
																			{	/* Cnst/node.scm 297 */
																				long BgL_objzd2classzd2numz00_2641;

																				BgL_objzd2classzd2numz00_2641 =
																					BGL_OBJECT_CLASS_NUM(BgL_objz00_2640);
																				{	/* Cnst/node.scm 297 */
																					obj_t BgL_arg2643z00_2642;

																					BgL_arg2643z00_2642 =
																						PROCEDURE_REF
																						(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcnst_nodez00,
																						(int) (((long) 1)));
																					{	/* Cnst/node.scm 297 */
																						obj_t BgL_arrayz00_2644;

																						int BgL_offsetz00_2645;

																						BgL_arrayz00_2644 =
																							BgL_arg2643z00_2642;
																						BgL_offsetz00_2645 =
																							(int)
																							(BgL_objzd2classzd2numz00_2641);
																						{	/* Cnst/node.scm 297 */
																							long BgL_offsetz00_2646;

																							BgL_offsetz00_2646 =
																								(
																								(long) (BgL_offsetz00_2645) -
																								OBJECT_TYPE);
																							{	/* Cnst/node.scm 297 */
																								long BgL_modz00_2647;

																								{	/* Cnst/node.scm 297 */
																									int BgL_arg2645z00_2648;

																									BgL_arg2645z00_2648 =
																										(int) (((long) 16));
																									{	/* Cnst/node.scm 297 */
																										long BgL_auxz00_3310;

																										BgL_auxz00_3310 =
																											(long)
																											(BgL_arg2645z00_2648);
																										BgL_modz00_2647 =
																											(BgL_offsetz00_2646 /
																											BgL_auxz00_3310);
																								}}
																								{	/* Cnst/node.scm 297 */
																									long BgL_restz00_2649;

																									{	/* Cnst/node.scm 297 */
																										int BgL_arg2644z00_2650;

																										BgL_arg2644z00_2650 =
																											(int) (((long) 16));
																										{	/* Cnst/node.scm 297 */
																											long BgL_auxz00_3314;

																											BgL_auxz00_3314 =
																												(long)
																												(BgL_arg2644z00_2650);
																											BgL_restz00_2649 =
																												(BgL_offsetz00_2646 %
																												BgL_auxz00_3314);
																									}}
																									{	/* Cnst/node.scm 297 */

																										BgL_method3406z00_2639 =
																											VECTOR_REF(VECTOR_REF
																											(BgL_arrayz00_2644,
																												(int)
																												(BgL_modz00_2647)),
																											(int) (BgL_restz00_2649));
																		}}}}}}}}
																		BgL_siza7ezd2valuez75_1543 =
																			PROCEDURE_ENTRY(BgL_method3406z00_2639)
																			(BgL_method3406z00_2639,
																			(obj_t) (BgL_nodez00_2638), BEOA);
															}}}
															{	/* Cnst/node.scm 298 */
																bool_t BgL_testz00_3324;

																if (INTEGERP(BgL_siza7ezd2valuez75_1543))
																	{	/* Cnst/node.scm 298 */
																		BgL_testz00_3324 =
																			(
																			(long) CINT(BgL_siza7ezd2valuez75_1543) ==
																			((long) 0));
																	}
																else
																	{	/* Cnst/node.scm 298 */
																		BgL_testz00_3324 = ((bool_t) 0);
																	}
																if (BgL_testz00_3324)
																	{	/* Cnst/node.scm 299 */
																		obj_t BgL_arg3671z00_1545;

																		{
																			BgL_nodez00_bglt BgL_auxz00_3329;

																			BgL_auxz00_3329 =
																				(BgL_nodez00_bglt) (BgL_nodez00_1525);
																			BgL_arg3671z00_1545 =
																				(((BgL_nodez00_bglt)
																					CREF(BgL_auxz00_3329))->BgL_locz00);
																		}
																		return
																			(obj_t)
																			(BGl_cnstzd2alloczd2procedurez00zzcnst_allocz00
																			((BgL_nodez00_bglt) (BgL_nodez00_1525),
																				BgL_arg3671z00_1545));
																	}
																else
																	{	/* Cnst/node.scm 298 */
																		return (obj_t) (BgL_nodez00_1525);
																	}
															}
														}
													else
														{	/* Cnst/node.scm 295 */
															if (
																((obj_t) (BgL_funz00_1531) ==
																	BGl_za2doublezd2ze3realza2z31zzcnst_cachez00))
																{	/* Cnst/node.scm 302 */
																	bool_t BgL_testz00_3339;

																	if (INTEGERP(BgL_actualzd2valuezd2_1533))
																		{	/* Cnst/node.scm 302 */
																			BgL_testz00_3339 = ((bool_t) 1);
																		}
																	else
																		{	/* Cnst/node.scm 302 */
																			BgL_testz00_3339 =
																				REALP(BgL_actualzd2valuezd2_1533);
																		}
																	if (BgL_testz00_3339)
																		{	/* Cnst/node.scm 303 */
																			obj_t BgL_arg3677z00_1551;

																			{
																				BgL_nodez00_bglt BgL_auxz00_3343;

																				BgL_auxz00_3343 =
																					(BgL_nodez00_bglt) (BgL_nodez00_1525);
																				BgL_arg3677z00_1551 =
																					(((BgL_nodez00_bglt)
																						CREF(BgL_auxz00_3343))->BgL_locz00);
																			}
																			return
																				(obj_t)
																				(BGl_cnstzd2alloczd2realz00zzcnst_allocz00
																				(BgL_actualzd2valuezd2_1533,
																					BgL_arg3677z00_1551));
																		}
																	else
																		{	/* Cnst/node.scm 302 */
																			return (obj_t) (BgL_nodez00_1525);
																		}
																}
															else
																{	/* Cnst/node.scm 301 */
																	if (
																		((obj_t) (BgL_funz00_1531) ==
																			BGl_za2elongzd2ze3belongza2z31zzcnst_cachez00))
																		{	/* Cnst/node.scm 305 */
																			if (ELONGP(BgL_actualzd2valuezd2_1533))
																				{	/* Cnst/node.scm 307 */
																					obj_t BgL_arg3680z00_1554;

																					{
																						BgL_nodez00_bglt BgL_auxz00_3354;

																						BgL_auxz00_3354 =
																							(BgL_nodez00_bglt)
																							(BgL_nodez00_1525);
																						BgL_arg3680z00_1554 =
																							(((BgL_nodez00_bglt)
																								CREF(BgL_auxz00_3354))->
																							BgL_locz00);
																					}
																					return
																						(obj_t)
																						(BGl_cnstzd2alloczd2elongz00zzcnst_allocz00
																						(BELONG_TO_LONG
																							(BgL_actualzd2valuezd2_1533),
																							BgL_arg3680z00_1554));
																				}
																			else
																				{	/* Cnst/node.scm 306 */
																					return (obj_t) (BgL_nodez00_1525);
																				}
																		}
																	else
																		{	/* Cnst/node.scm 305 */
																			if (
																				((obj_t) (BgL_funz00_1531) ==
																					BGl_za2llongzd2ze3bllongza2z31zzcnst_cachez00))
																				{	/* Cnst/node.scm 309 */
																					if (LLONGP
																						(BgL_actualzd2valuezd2_1533))
																						{	/* Cnst/node.scm 311 */
																							obj_t BgL_arg3683z00_1557;

																							{
																								BgL_nodez00_bglt
																									BgL_auxz00_3366;
																								BgL_auxz00_3366 =
																									(BgL_nodez00_bglt)
																									(BgL_nodez00_1525);
																								BgL_arg3683z00_1557 =
																									(((BgL_nodez00_bglt)
																										CREF(BgL_auxz00_3366))->
																									BgL_locz00);
																							}
																							return
																								(obj_t)
																								(BGl_cnstzd2alloczd2llongz00zzcnst_allocz00
																								(BLLONG_TO_LLONG
																									(BgL_actualzd2valuezd2_1533),
																									BgL_arg3683z00_1557));
																						}
																					else
																						{	/* Cnst/node.scm 310 */
																							return (obj_t) (BgL_nodez00_1525);
																						}
																				}
																			else
																				{	/* Cnst/node.scm 309 */
																					return (obj_t) (BgL_nodez00_1525);
																				}
																		}
																}
														}
												}
										}
								}
							}
						}
					}
			}
		}
	}



/* cnst!-funcall3402 */
	obj_t BGl_cnstz12zd2funcall3402zc0zzcnst_nodez00(obj_t BgL_envz00_2828,
		obj_t BgL_nodez00_2829)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 247 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1516;

				{	/* Cnst/node.scm 248 */
					BgL_funcallz00_bglt BgL_auxz00_3375;

					BgL_nodez00_1516 = (BgL_funcallz00_bglt) (BgL_nodez00_2829);
					{	/* Cnst/node.scm 249 */
						BgL_nodez00_bglt BgL_arg3656z00_1520;

						{	/* Cnst/node.scm 249 */
							BgL_nodez00_bglt BgL_arg3657z00_1521;

							BgL_arg3657z00_1521 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1516))->BgL_funz00);
							{	/* Cnst/node.scm 249 */
								BgL_nodez00_bglt BgL_res3800z00_2589;

								{	/* Cnst/node.scm 249 */
									obj_t BgL_method3361z00_2564;

									{	/* Cnst/node.scm 249 */
										BgL_objectz00_bglt BgL_objz00_2565;

										BgL_objz00_2565 =
											(BgL_objectz00_bglt) (BgL_arg3657z00_1521);
										{	/* Cnst/node.scm 249 */
											long BgL_objzd2classzd2numz00_2566;

											BgL_objzd2classzd2numz00_2566 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2565);
											{	/* Cnst/node.scm 249 */
												obj_t BgL_arg2643z00_2567;

												BgL_arg2643z00_2567 =
													PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
													(int) (((long) 1)));
												{	/* Cnst/node.scm 249 */
													obj_t BgL_arrayz00_2569;

													int BgL_offsetz00_2570;

													BgL_arrayz00_2569 = BgL_arg2643z00_2567;
													BgL_offsetz00_2570 =
														(int) (BgL_objzd2classzd2numz00_2566);
													{	/* Cnst/node.scm 249 */
														long BgL_offsetz00_2571;

														BgL_offsetz00_2571 =
															((long) (BgL_offsetz00_2570) - OBJECT_TYPE);
														{	/* Cnst/node.scm 249 */
															long BgL_modz00_2572;

															{	/* Cnst/node.scm 249 */
																int BgL_arg2645z00_2573;

																BgL_arg2645z00_2573 = (int) (((long) 16));
																{	/* Cnst/node.scm 249 */
																	long BgL_auxz00_3385;

																	BgL_auxz00_3385 =
																		(long) (BgL_arg2645z00_2573);
																	BgL_modz00_2572 =
																		(BgL_offsetz00_2571 / BgL_auxz00_3385);
															}}
															{	/* Cnst/node.scm 249 */
																long BgL_restz00_2574;

																{	/* Cnst/node.scm 249 */
																	int BgL_arg2644z00_2575;

																	BgL_arg2644z00_2575 = (int) (((long) 16));
																	{	/* Cnst/node.scm 249 */
																		long BgL_auxz00_3389;

																		BgL_auxz00_3389 =
																			(long) (BgL_arg2644z00_2575);
																		BgL_restz00_2574 =
																			(BgL_offsetz00_2571 % BgL_auxz00_3389);
																}}
																{	/* Cnst/node.scm 249 */

																	BgL_method3361z00_2564 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2569,
																			(int) (BgL_modz00_2572)),
																		(int) (BgL_restz00_2574));
									}}}}}}}}
									BgL_res3800z00_2589 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_2564)
										(BgL_method3361z00_2564, (obj_t) (BgL_arg3657z00_1521),
											BEOA));
								}
								BgL_arg3656z00_1520 = BgL_res3800z00_2589;
						}}
						((((BgL_funcallz00_bglt) CREF(BgL_nodez00_1516))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3656z00_1520), BUNSPEC);
					}
					{	/* Cnst/node.scm 250 */
						obj_t BgL_arg3658z00_1522;

						BgL_arg3658z00_1522 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1516))->BgL_argsz00);
						BGl_cnstza2z12zb0zzcnst_nodez00(BgL_arg3658z00_1522);
					}
					BgL_auxz00_3375 = BgL_nodez00_1516;
					return (obj_t) (BgL_auxz00_3375);
				}
			}
		}
	}



/* cnst!-app-ly3400 */
	obj_t BGl_cnstz12zd2appzd2ly3400z12zzcnst_nodez00(obj_t BgL_envz00_2830,
		obj_t BgL_nodez00_2831)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 238 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1506;

				{	/* Cnst/node.scm 239 */
					BgL_appzd2lyzd2_bglt BgL_auxz00_3405;

					BgL_nodez00_1506 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2831);
					{	/* Cnst/node.scm 240 */
						BgL_nodez00_bglt BgL_arg3651z00_1510;

						{	/* Cnst/node.scm 240 */
							BgL_nodez00_bglt BgL_arg3652z00_1511;

							BgL_arg3652z00_1511 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1506))->BgL_funz00);
							{	/* Cnst/node.scm 240 */
								BgL_nodez00_bglt BgL_res3794z00_2529;

								{	/* Cnst/node.scm 240 */
									obj_t BgL_method3361z00_2504;

									{	/* Cnst/node.scm 240 */
										BgL_objectz00_bglt BgL_objz00_2505;

										BgL_objz00_2505 =
											(BgL_objectz00_bglt) (BgL_arg3652z00_1511);
										{	/* Cnst/node.scm 240 */
											long BgL_objzd2classzd2numz00_2506;

											BgL_objzd2classzd2numz00_2506 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2505);
											{	/* Cnst/node.scm 240 */
												obj_t BgL_arg2643z00_2507;

												BgL_arg2643z00_2507 =
													PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
													(int) (((long) 1)));
												{	/* Cnst/node.scm 240 */
													obj_t BgL_arrayz00_2509;

													int BgL_offsetz00_2510;

													BgL_arrayz00_2509 = BgL_arg2643z00_2507;
													BgL_offsetz00_2510 =
														(int) (BgL_objzd2classzd2numz00_2506);
													{	/* Cnst/node.scm 240 */
														long BgL_offsetz00_2511;

														BgL_offsetz00_2511 =
															((long) (BgL_offsetz00_2510) - OBJECT_TYPE);
														{	/* Cnst/node.scm 240 */
															long BgL_modz00_2512;

															{	/* Cnst/node.scm 240 */
																int BgL_arg2645z00_2513;

																BgL_arg2645z00_2513 = (int) (((long) 16));
																{	/* Cnst/node.scm 240 */
																	long BgL_auxz00_3415;

																	BgL_auxz00_3415 =
																		(long) (BgL_arg2645z00_2513);
																	BgL_modz00_2512 =
																		(BgL_offsetz00_2511 / BgL_auxz00_3415);
															}}
															{	/* Cnst/node.scm 240 */
																long BgL_restz00_2514;

																{	/* Cnst/node.scm 240 */
																	int BgL_arg2644z00_2515;

																	BgL_arg2644z00_2515 = (int) (((long) 16));
																	{	/* Cnst/node.scm 240 */
																		long BgL_auxz00_3419;

																		BgL_auxz00_3419 =
																			(long) (BgL_arg2644z00_2515);
																		BgL_restz00_2514 =
																			(BgL_offsetz00_2511 % BgL_auxz00_3419);
																}}
																{	/* Cnst/node.scm 240 */

																	BgL_method3361z00_2504 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2509,
																			(int) (BgL_modz00_2512)),
																		(int) (BgL_restz00_2514));
									}}}}}}}}
									BgL_res3794z00_2529 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_2504)
										(BgL_method3361z00_2504, (obj_t) (BgL_arg3652z00_1511),
											BEOA));
								}
								BgL_arg3651z00_1510 = BgL_res3794z00_2529;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1506))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3651z00_1510), BUNSPEC);
					}
					{	/* Cnst/node.scm 241 */
						BgL_nodez00_bglt BgL_arg3653z00_1512;

						{	/* Cnst/node.scm 241 */
							BgL_nodez00_bglt BgL_arg3654z00_1513;

							BgL_arg3654z00_1513 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1506))->BgL_argz00);
							{	/* Cnst/node.scm 241 */
								BgL_nodez00_bglt BgL_res3797z00_2559;

								{	/* Cnst/node.scm 241 */
									obj_t BgL_method3361z00_2534;

									{	/* Cnst/node.scm 241 */
										BgL_objectz00_bglt BgL_objz00_2535;

										BgL_objz00_2535 =
											(BgL_objectz00_bglt) (BgL_arg3654z00_1513);
										{	/* Cnst/node.scm 241 */
											long BgL_objzd2classzd2numz00_2536;

											BgL_objzd2classzd2numz00_2536 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2535);
											{	/* Cnst/node.scm 241 */
												obj_t BgL_arg2643z00_2537;

												BgL_arg2643z00_2537 =
													PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
													(int) (((long) 1)));
												{	/* Cnst/node.scm 241 */
													obj_t BgL_arrayz00_2539;

													int BgL_offsetz00_2540;

													BgL_arrayz00_2539 = BgL_arg2643z00_2537;
													BgL_offsetz00_2540 =
														(int) (BgL_objzd2classzd2numz00_2536);
													{	/* Cnst/node.scm 241 */
														long BgL_offsetz00_2541;

														BgL_offsetz00_2541 =
															((long) (BgL_offsetz00_2540) - OBJECT_TYPE);
														{	/* Cnst/node.scm 241 */
															long BgL_modz00_2542;

															{	/* Cnst/node.scm 241 */
																int BgL_arg2645z00_2543;

																BgL_arg2645z00_2543 = (int) (((long) 16));
																{	/* Cnst/node.scm 241 */
																	long BgL_auxz00_3440;

																	BgL_auxz00_3440 =
																		(long) (BgL_arg2645z00_2543);
																	BgL_modz00_2542 =
																		(BgL_offsetz00_2541 / BgL_auxz00_3440);
															}}
															{	/* Cnst/node.scm 241 */
																long BgL_restz00_2544;

																{	/* Cnst/node.scm 241 */
																	int BgL_arg2644z00_2545;

																	BgL_arg2644z00_2545 = (int) (((long) 16));
																	{	/* Cnst/node.scm 241 */
																		long BgL_auxz00_3444;

																		BgL_auxz00_3444 =
																			(long) (BgL_arg2644z00_2545);
																		BgL_restz00_2544 =
																			(BgL_offsetz00_2541 % BgL_auxz00_3444);
																}}
																{	/* Cnst/node.scm 241 */

																	BgL_method3361z00_2534 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2539,
																			(int) (BgL_modz00_2542)),
																		(int) (BgL_restz00_2544));
									}}}}}}}}
									BgL_res3797z00_2559 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_2534)
										(BgL_method3361z00_2534, (obj_t) (BgL_arg3654z00_1513),
											BEOA));
								}
								BgL_arg3653z00_1512 = BgL_res3797z00_2559;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1506))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg3653z00_1512), BUNSPEC);
					}
					BgL_auxz00_3405 = BgL_nodez00_1506;
					return (obj_t) (BgL_auxz00_3405);
				}
			}
		}
	}



/* cnst!-box-set!3398 */
	obj_t BGl_cnstz12zd2boxzd2setz123398z00zzcnst_nodez00(obj_t BgL_envz00_2832,
		obj_t BgL_nodez00_2833)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 229 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1496;

				{	/* Cnst/node.scm 230 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_3458;

					BgL_nodez00_1496 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2833);
					{	/* Cnst/node.scm 231 */
						BgL_nodez00_bglt BgL_arg3646z00_1500;

						{	/* Cnst/node.scm 231 */
							BgL_varz00_bglt BgL_arg3647z00_1501;

							BgL_arg3647z00_1501 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1496))->
								BgL_varz00);
							{	/* Cnst/node.scm 231 */
								BgL_nodez00_bglt BgL_res3788z00_2469;

								{	/* Cnst/node.scm 231 */
									BgL_nodez00_bglt BgL_nodez00_2443;

									BgL_nodez00_2443 = (BgL_nodez00_bglt) (BgL_arg3647z00_1501);
									{	/* Cnst/node.scm 231 */
										obj_t BgL_method3361z00_2444;

										{	/* Cnst/node.scm 231 */
											BgL_objectz00_bglt BgL_objz00_2445;

											BgL_objz00_2445 = (BgL_objectz00_bglt) (BgL_nodez00_2443);
											{	/* Cnst/node.scm 231 */
												long BgL_objzd2classzd2numz00_2446;

												BgL_objzd2classzd2numz00_2446 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2445);
												{	/* Cnst/node.scm 231 */
													obj_t BgL_arg2643z00_2447;

													BgL_arg2643z00_2447 =
														PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
														(int) (((long) 1)));
													{	/* Cnst/node.scm 231 */
														obj_t BgL_arrayz00_2449;

														int BgL_offsetz00_2450;

														BgL_arrayz00_2449 = BgL_arg2643z00_2447;
														BgL_offsetz00_2450 =
															(int) (BgL_objzd2classzd2numz00_2446);
														{	/* Cnst/node.scm 231 */
															long BgL_offsetz00_2451;

															BgL_offsetz00_2451 =
																((long) (BgL_offsetz00_2450) - OBJECT_TYPE);
															{	/* Cnst/node.scm 231 */
																long BgL_modz00_2452;

																{	/* Cnst/node.scm 231 */
																	int BgL_arg2645z00_2453;

																	BgL_arg2645z00_2453 = (int) (((long) 16));
																	{	/* Cnst/node.scm 231 */
																		long BgL_auxz00_3469;

																		BgL_auxz00_3469 =
																			(long) (BgL_arg2645z00_2453);
																		BgL_modz00_2452 =
																			(BgL_offsetz00_2451 / BgL_auxz00_3469);
																}}
																{	/* Cnst/node.scm 231 */
																	long BgL_restz00_2454;

																	{	/* Cnst/node.scm 231 */
																		int BgL_arg2644z00_2455;

																		BgL_arg2644z00_2455 = (int) (((long) 16));
																		{	/* Cnst/node.scm 231 */
																			long BgL_auxz00_3473;

																			BgL_auxz00_3473 =
																				(long) (BgL_arg2644z00_2455);
																			BgL_restz00_2454 =
																				(BgL_offsetz00_2451 % BgL_auxz00_3473);
																	}}
																	{	/* Cnst/node.scm 231 */

																		BgL_method3361z00_2444 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2449,
																				(int) (BgL_modz00_2452)),
																			(int) (BgL_restz00_2454));
										}}}}}}}}
										BgL_res3788z00_2469 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_2444) (BgL_method3361z00_2444,
												(obj_t) (BgL_nodez00_2443), BEOA));
								}}
								BgL_arg3646z00_1500 = BgL_res3788z00_2469;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3484;

							BgL_auxz00_3484 = (BgL_varz00_bglt) (BgL_arg3646z00_1500);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1496))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_3484), BUNSPEC);
					}}
					{	/* Cnst/node.scm 232 */
						BgL_nodez00_bglt BgL_arg3648z00_1502;

						{	/* Cnst/node.scm 232 */
							BgL_nodez00_bglt BgL_arg3649z00_1503;

							BgL_arg3649z00_1503 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1496))->
								BgL_valuez00);
							{	/* Cnst/node.scm 232 */
								BgL_nodez00_bglt BgL_res3791z00_2499;

								{	/* Cnst/node.scm 232 */
									obj_t BgL_method3361z00_2474;

									{	/* Cnst/node.scm 232 */
										BgL_objectz00_bglt BgL_objz00_2475;

										BgL_objz00_2475 =
											(BgL_objectz00_bglt) (BgL_arg3649z00_1503);
										{	/* Cnst/node.scm 232 */
											long BgL_objzd2classzd2numz00_2476;

											BgL_objzd2classzd2numz00_2476 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2475);
											{	/* Cnst/node.scm 232 */
												obj_t BgL_arg2643z00_2477;

												BgL_arg2643z00_2477 =
													PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
													(int) (((long) 1)));
												{	/* Cnst/node.scm 232 */
													obj_t BgL_arrayz00_2479;

													int BgL_offsetz00_2480;

													BgL_arrayz00_2479 = BgL_arg2643z00_2477;
													BgL_offsetz00_2480 =
														(int) (BgL_objzd2classzd2numz00_2476);
													{	/* Cnst/node.scm 232 */
														long BgL_offsetz00_2481;

														BgL_offsetz00_2481 =
															((long) (BgL_offsetz00_2480) - OBJECT_TYPE);
														{	/* Cnst/node.scm 232 */
															long BgL_modz00_2482;

															{	/* Cnst/node.scm 232 */
																int BgL_arg2645z00_2483;

																BgL_arg2645z00_2483 = (int) (((long) 16));
																{	/* Cnst/node.scm 232 */
																	long BgL_auxz00_3496;

																	BgL_auxz00_3496 =
																		(long) (BgL_arg2645z00_2483);
																	BgL_modz00_2482 =
																		(BgL_offsetz00_2481 / BgL_auxz00_3496);
															}}
															{	/* Cnst/node.scm 232 */
																long BgL_restz00_2484;

																{	/* Cnst/node.scm 232 */
																	int BgL_arg2644z00_2485;

																	BgL_arg2644z00_2485 = (int) (((long) 16));
																	{	/* Cnst/node.scm 232 */
																		long BgL_auxz00_3500;

																		BgL_auxz00_3500 =
																			(long) (BgL_arg2644z00_2485);
																		BgL_restz00_2484 =
																			(BgL_offsetz00_2481 % BgL_auxz00_3500);
																}}
																{	/* Cnst/node.scm 232 */

																	BgL_method3361z00_2474 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2479,
																			(int) (BgL_modz00_2482)),
																		(int) (BgL_restz00_2484));
									}}}}}}}}
									BgL_res3791z00_2499 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_2474)
										(BgL_method3361z00_2474, (obj_t) (BgL_arg3649z00_1503),
											BEOA));
								}
								BgL_arg3648z00_1502 = BgL_res3791z00_2499;
						}}
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1496))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3648z00_1502), BUNSPEC);
					}
					BgL_auxz00_3458 = BgL_nodez00_1496;
					return (obj_t) (BgL_auxz00_3458);
				}
			}
		}
	}



/* cnst!-box-ref3396 */
	obj_t BGl_cnstz12zd2boxzd2ref3396z12zzcnst_nodez00(obj_t BgL_envz00_2834,
		obj_t BgL_nodez00_2835)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 221 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1488;

				{	/* Cnst/node.scm 222 */
					BgL_boxzd2refzd2_bglt BgL_auxz00_3514;

					BgL_nodez00_1488 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2835);
					{	/* Cnst/node.scm 223 */
						BgL_nodez00_bglt BgL_arg3643z00_1492;

						{	/* Cnst/node.scm 223 */
							BgL_varz00_bglt BgL_arg3644z00_1493;

							BgL_arg3644z00_1493 =
								(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1488))->BgL_varz00);
							{	/* Cnst/node.scm 223 */
								BgL_nodez00_bglt BgL_res3785z00_2439;

								{	/* Cnst/node.scm 223 */
									BgL_nodez00_bglt BgL_nodez00_2413;

									BgL_nodez00_2413 = (BgL_nodez00_bglt) (BgL_arg3644z00_1493);
									{	/* Cnst/node.scm 223 */
										obj_t BgL_method3361z00_2414;

										{	/* Cnst/node.scm 223 */
											BgL_objectz00_bglt BgL_objz00_2415;

											BgL_objz00_2415 = (BgL_objectz00_bglt) (BgL_nodez00_2413);
											{	/* Cnst/node.scm 223 */
												long BgL_objzd2classzd2numz00_2416;

												BgL_objzd2classzd2numz00_2416 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2415);
												{	/* Cnst/node.scm 223 */
													obj_t BgL_arg2643z00_2417;

													BgL_arg2643z00_2417 =
														PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
														(int) (((long) 1)));
													{	/* Cnst/node.scm 223 */
														obj_t BgL_arrayz00_2419;

														int BgL_offsetz00_2420;

														BgL_arrayz00_2419 = BgL_arg2643z00_2417;
														BgL_offsetz00_2420 =
															(int) (BgL_objzd2classzd2numz00_2416);
														{	/* Cnst/node.scm 223 */
															long BgL_offsetz00_2421;

															BgL_offsetz00_2421 =
																((long) (BgL_offsetz00_2420) - OBJECT_TYPE);
															{	/* Cnst/node.scm 223 */
																long BgL_modz00_2422;

																{	/* Cnst/node.scm 223 */
																	int BgL_arg2645z00_2423;

																	BgL_arg2645z00_2423 = (int) (((long) 16));
																	{	/* Cnst/node.scm 223 */
																		long BgL_auxz00_3525;

																		BgL_auxz00_3525 =
																			(long) (BgL_arg2645z00_2423);
																		BgL_modz00_2422 =
																			(BgL_offsetz00_2421 / BgL_auxz00_3525);
																}}
																{	/* Cnst/node.scm 223 */
																	long BgL_restz00_2424;

																	{	/* Cnst/node.scm 223 */
																		int BgL_arg2644z00_2425;

																		BgL_arg2644z00_2425 = (int) (((long) 16));
																		{	/* Cnst/node.scm 223 */
																			long BgL_auxz00_3529;

																			BgL_auxz00_3529 =
																				(long) (BgL_arg2644z00_2425);
																			BgL_restz00_2424 =
																				(BgL_offsetz00_2421 % BgL_auxz00_3529);
																	}}
																	{	/* Cnst/node.scm 223 */

																		BgL_method3361z00_2414 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2419,
																				(int) (BgL_modz00_2422)),
																			(int) (BgL_restz00_2424));
										}}}}}}}}
										BgL_res3785z00_2439 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_2414) (BgL_method3361z00_2414,
												(obj_t) (BgL_nodez00_2413), BEOA));
								}}
								BgL_arg3643z00_1492 = BgL_res3785z00_2439;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3540;

							BgL_auxz00_3540 = (BgL_varz00_bglt) (BgL_arg3643z00_1492);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1488))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_3540), BUNSPEC);
					}}
					BgL_auxz00_3514 = BgL_nodez00_1488;
					return (obj_t) (BgL_auxz00_3514);
				}
			}
		}
	}



/* cnst!-make-box3394 */
	obj_t BGl_cnstz12zd2makezd2box3394z12zzcnst_nodez00(obj_t BgL_envz00_2836,
		obj_t BgL_nodez00_2837)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 213 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1480;

				{	/* Cnst/node.scm 214 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_3545;

					BgL_nodez00_1480 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2837);
					{	/* Cnst/node.scm 215 */
						BgL_nodez00_bglt BgL_arg3640z00_1484;

						{	/* Cnst/node.scm 215 */
							BgL_nodez00_bglt BgL_arg3641z00_1485;

							BgL_arg3641z00_1485 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1480))->
								BgL_valuez00);
							{	/* Cnst/node.scm 215 */
								BgL_nodez00_bglt BgL_res3782z00_2409;

								{	/* Cnst/node.scm 215 */
									obj_t BgL_method3361z00_2384;

									{	/* Cnst/node.scm 215 */
										BgL_objectz00_bglt BgL_objz00_2385;

										BgL_objz00_2385 =
											(BgL_objectz00_bglt) (BgL_arg3641z00_1485);
										{	/* Cnst/node.scm 215 */
											long BgL_objzd2classzd2numz00_2386;

											BgL_objzd2classzd2numz00_2386 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2385);
											{	/* Cnst/node.scm 215 */
												obj_t BgL_arg2643z00_2387;

												BgL_arg2643z00_2387 =
													PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
													(int) (((long) 1)));
												{	/* Cnst/node.scm 215 */
													obj_t BgL_arrayz00_2389;

													int BgL_offsetz00_2390;

													BgL_arrayz00_2389 = BgL_arg2643z00_2387;
													BgL_offsetz00_2390 =
														(int) (BgL_objzd2classzd2numz00_2386);
													{	/* Cnst/node.scm 215 */
														long BgL_offsetz00_2391;

														BgL_offsetz00_2391 =
															((long) (BgL_offsetz00_2390) - OBJECT_TYPE);
														{	/* Cnst/node.scm 215 */
															long BgL_modz00_2392;

															{	/* Cnst/node.scm 215 */
																int BgL_arg2645z00_2393;

																BgL_arg2645z00_2393 = (int) (((long) 16));
																{	/* Cnst/node.scm 215 */
																	long BgL_auxz00_3555;

																	BgL_auxz00_3555 =
																		(long) (BgL_arg2645z00_2393);
																	BgL_modz00_2392 =
																		(BgL_offsetz00_2391 / BgL_auxz00_3555);
															}}
															{	/* Cnst/node.scm 215 */
																long BgL_restz00_2394;

																{	/* Cnst/node.scm 215 */
																	int BgL_arg2644z00_2395;

																	BgL_arg2644z00_2395 = (int) (((long) 16));
																	{	/* Cnst/node.scm 215 */
																		long BgL_auxz00_3559;

																		BgL_auxz00_3559 =
																			(long) (BgL_arg2644z00_2395);
																		BgL_restz00_2394 =
																			(BgL_offsetz00_2391 % BgL_auxz00_3559);
																}}
																{	/* Cnst/node.scm 215 */

																	BgL_method3361z00_2384 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2389,
																			(int) (BgL_modz00_2392)),
																		(int) (BgL_restz00_2394));
									}}}}}}}}
									BgL_res3782z00_2409 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_2384)
										(BgL_method3361z00_2384, (obj_t) (BgL_arg3641z00_1485),
											BEOA));
								}
								BgL_arg3640z00_1484 = BgL_res3782z00_2409;
						}}
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1480))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3640z00_1484), BUNSPEC);
					}
					BgL_auxz00_3545 = BgL_nodez00_1480;
					return (obj_t) (BgL_auxz00_3545);
				}
			}
		}
	}



/* cnst!-jump-ex-it3392 */
	obj_t BGl_cnstz12zd2jumpzd2exzd2it3392zc0zzcnst_nodez00(obj_t BgL_envz00_2838,
		obj_t BgL_nodez00_2839)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 204 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1470;

				{	/* Cnst/node.scm 205 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_3573;

					BgL_nodez00_1470 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2839);
					{	/* Cnst/node.scm 206 */
						BgL_nodez00_bglt BgL_arg3635z00_1474;

						{	/* Cnst/node.scm 206 */
							BgL_nodez00_bglt BgL_arg3636z00_1475;

							BgL_arg3636z00_1475 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1470))->
								BgL_exitz00);
							{	/* Cnst/node.scm 206 */
								BgL_nodez00_bglt BgL_res3776z00_2349;

								{	/* Cnst/node.scm 206 */
									obj_t BgL_method3361z00_2324;

									{	/* Cnst/node.scm 206 */
										BgL_objectz00_bglt BgL_objz00_2325;

										BgL_objz00_2325 =
											(BgL_objectz00_bglt) (BgL_arg3636z00_1475);
										{	/* Cnst/node.scm 206 */
											long BgL_objzd2classzd2numz00_2326;

											BgL_objzd2classzd2numz00_2326 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2325);
											{	/* Cnst/node.scm 206 */
												obj_t BgL_arg2643z00_2327;

												BgL_arg2643z00_2327 =
													PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
													(int) (((long) 1)));
												{	/* Cnst/node.scm 206 */
													obj_t BgL_arrayz00_2329;

													int BgL_offsetz00_2330;

													BgL_arrayz00_2329 = BgL_arg2643z00_2327;
													BgL_offsetz00_2330 =
														(int) (BgL_objzd2classzd2numz00_2326);
													{	/* Cnst/node.scm 206 */
														long BgL_offsetz00_2331;

														BgL_offsetz00_2331 =
															((long) (BgL_offsetz00_2330) - OBJECT_TYPE);
														{	/* Cnst/node.scm 206 */
															long BgL_modz00_2332;

															{	/* Cnst/node.scm 206 */
																int BgL_arg2645z00_2333;

																BgL_arg2645z00_2333 = (int) (((long) 16));
																{	/* Cnst/node.scm 206 */
																	long BgL_auxz00_3583;

																	BgL_auxz00_3583 =
																		(long) (BgL_arg2645z00_2333);
																	BgL_modz00_2332 =
																		(BgL_offsetz00_2331 / BgL_auxz00_3583);
															}}
															{	/* Cnst/node.scm 206 */
																long BgL_restz00_2334;

																{	/* Cnst/node.scm 206 */
																	int BgL_arg2644z00_2335;

																	BgL_arg2644z00_2335 = (int) (((long) 16));
																	{	/* Cnst/node.scm 206 */
																		long BgL_auxz00_3587;

																		BgL_auxz00_3587 =
																			(long) (BgL_arg2644z00_2335);
																		BgL_restz00_2334 =
																			(BgL_offsetz00_2331 % BgL_auxz00_3587);
																}}
																{	/* Cnst/node.scm 206 */

																	BgL_method3361z00_2324 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2329,
																			(int) (BgL_modz00_2332)),
																		(int) (BgL_restz00_2334));
									}}}}}}}}
									BgL_res3776z00_2349 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_2324)
										(BgL_method3361z00_2324, (obj_t) (BgL_arg3636z00_1475),
											BEOA));
								}
								BgL_arg3635z00_1474 = BgL_res3776z00_2349;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1470))->
								BgL_exitz00) =
							((BgL_nodez00_bglt) BgL_arg3635z00_1474), BUNSPEC);
					}
					{	/* Cnst/node.scm 207 */
						BgL_nodez00_bglt BgL_arg3637z00_1476;

						{	/* Cnst/node.scm 207 */
							BgL_nodez00_bglt BgL_arg3638z00_1477;

							BgL_arg3638z00_1477 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1470))->
								BgL_valuez00);
							{	/* Cnst/node.scm 207 */
								BgL_nodez00_bglt BgL_res3779z00_2379;

								{	/* Cnst/node.scm 207 */
									obj_t BgL_method3361z00_2354;

									{	/* Cnst/node.scm 207 */
										BgL_objectz00_bglt BgL_objz00_2355;

										BgL_objz00_2355 =
											(BgL_objectz00_bglt) (BgL_arg3638z00_1477);
										{	/* Cnst/node.scm 207 */
											long BgL_objzd2classzd2numz00_2356;

											BgL_objzd2classzd2numz00_2356 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2355);
											{	/* Cnst/node.scm 207 */
												obj_t BgL_arg2643z00_2357;

												BgL_arg2643z00_2357 =
													PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
													(int) (((long) 1)));
												{	/* Cnst/node.scm 207 */
													obj_t BgL_arrayz00_2359;

													int BgL_offsetz00_2360;

													BgL_arrayz00_2359 = BgL_arg2643z00_2357;
													BgL_offsetz00_2360 =
														(int) (BgL_objzd2classzd2numz00_2356);
													{	/* Cnst/node.scm 207 */
														long BgL_offsetz00_2361;

														BgL_offsetz00_2361 =
															((long) (BgL_offsetz00_2360) - OBJECT_TYPE);
														{	/* Cnst/node.scm 207 */
															long BgL_modz00_2362;

															{	/* Cnst/node.scm 207 */
																int BgL_arg2645z00_2363;

																BgL_arg2645z00_2363 = (int) (((long) 16));
																{	/* Cnst/node.scm 207 */
																	long BgL_auxz00_3608;

																	BgL_auxz00_3608 =
																		(long) (BgL_arg2645z00_2363);
																	BgL_modz00_2362 =
																		(BgL_offsetz00_2361 / BgL_auxz00_3608);
															}}
															{	/* Cnst/node.scm 207 */
																long BgL_restz00_2364;

																{	/* Cnst/node.scm 207 */
																	int BgL_arg2644z00_2365;

																	BgL_arg2644z00_2365 = (int) (((long) 16));
																	{	/* Cnst/node.scm 207 */
																		long BgL_auxz00_3612;

																		BgL_auxz00_3612 =
																			(long) (BgL_arg2644z00_2365);
																		BgL_restz00_2364 =
																			(BgL_offsetz00_2361 % BgL_auxz00_3612);
																}}
																{	/* Cnst/node.scm 207 */

																	BgL_method3361z00_2354 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2359,
																			(int) (BgL_modz00_2362)),
																		(int) (BgL_restz00_2364));
									}}}}}}}}
									BgL_res3779z00_2379 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_2354)
										(BgL_method3361z00_2354, (obj_t) (BgL_arg3638z00_1477),
											BEOA));
								}
								BgL_arg3637z00_1476 = BgL_res3779z00_2379;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1470))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3637z00_1476), BUNSPEC);
					}
					BgL_auxz00_3573 = BgL_nodez00_1470;
					return (obj_t) (BgL_auxz00_3573);
				}
			}
		}
	}



/* cnst!-set-ex-it3390 */
	obj_t BGl_cnstz12zd2setzd2exzd2it3390zc0zzcnst_nodez00(obj_t BgL_envz00_2840,
		obj_t BgL_nodez00_2841)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 196 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1462;

				{	/* Cnst/node.scm 197 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_3626;

					BgL_nodez00_1462 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2841);
					{	/* Cnst/node.scm 198 */
						BgL_nodez00_bglt BgL_arg3632z00_1466;

						{	/* Cnst/node.scm 198 */
							BgL_nodez00_bglt BgL_arg3633z00_1467;

							BgL_arg3633z00_1467 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1462))->
								BgL_bodyz00);
							{	/* Cnst/node.scm 198 */
								BgL_nodez00_bglt BgL_res3773z00_2319;

								{	/* Cnst/node.scm 198 */
									obj_t BgL_method3361z00_2294;

									{	/* Cnst/node.scm 198 */
										BgL_objectz00_bglt BgL_objz00_2295;

										BgL_objz00_2295 =
											(BgL_objectz00_bglt) (BgL_arg3633z00_1467);
										{	/* Cnst/node.scm 198 */
											long BgL_objzd2classzd2numz00_2296;

											BgL_objzd2classzd2numz00_2296 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2295);
											{	/* Cnst/node.scm 198 */
												obj_t BgL_arg2643z00_2297;

												BgL_arg2643z00_2297 =
													PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
													(int) (((long) 1)));
												{	/* Cnst/node.scm 198 */
													obj_t BgL_arrayz00_2299;

													int BgL_offsetz00_2300;

													BgL_arrayz00_2299 = BgL_arg2643z00_2297;
													BgL_offsetz00_2300 =
														(int) (BgL_objzd2classzd2numz00_2296);
													{	/* Cnst/node.scm 198 */
														long BgL_offsetz00_2301;

														BgL_offsetz00_2301 =
															((long) (BgL_offsetz00_2300) - OBJECT_TYPE);
														{	/* Cnst/node.scm 198 */
															long BgL_modz00_2302;

															{	/* Cnst/node.scm 198 */
																int BgL_arg2645z00_2303;

																BgL_arg2645z00_2303 = (int) (((long) 16));
																{	/* Cnst/node.scm 198 */
																	long BgL_auxz00_3636;

																	BgL_auxz00_3636 =
																		(long) (BgL_arg2645z00_2303);
																	BgL_modz00_2302 =
																		(BgL_offsetz00_2301 / BgL_auxz00_3636);
															}}
															{	/* Cnst/node.scm 198 */
																long BgL_restz00_2304;

																{	/* Cnst/node.scm 198 */
																	int BgL_arg2644z00_2305;

																	BgL_arg2644z00_2305 = (int) (((long) 16));
																	{	/* Cnst/node.scm 198 */
																		long BgL_auxz00_3640;

																		BgL_auxz00_3640 =
																			(long) (BgL_arg2644z00_2305);
																		BgL_restz00_2304 =
																			(BgL_offsetz00_2301 % BgL_auxz00_3640);
																}}
																{	/* Cnst/node.scm 198 */

																	BgL_method3361z00_2294 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2299,
																			(int) (BgL_modz00_2302)),
																		(int) (BgL_restz00_2304));
									}}}}}}}}
									BgL_res3773z00_2319 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_2294)
										(BgL_method3361z00_2294, (obj_t) (BgL_arg3633z00_1467),
											BEOA));
								}
								BgL_arg3632z00_1466 = BgL_res3773z00_2319;
						}}
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1462))->
								BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3632z00_1466), BUNSPEC);
					}
					BgL_auxz00_3626 = BgL_nodez00_1462;
					return (obj_t) (BgL_auxz00_3626);
				}
			}
		}
	}



/* cnst!-let-var3388 */
	obj_t BGl_cnstz12zd2letzd2var3388z12zzcnst_nodez00(obj_t BgL_envz00_2842,
		obj_t BgL_nodez00_2843)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 181 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1436;

				{	/* Cnst/node.scm 182 */
					BgL_letzd2varzd2_bglt BgL_auxz00_3654;

					BgL_nodez00_1436 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2843);
					{	/* Cnst/node.scm 183 */
						obj_t BgL_g3358z00_1440;

						BgL_g3358z00_1440 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1436))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3356z00_1442;

							BgL_l3356z00_1442 = BgL_g3358z00_1440;
						BgL_zc3anonymousza33618ze3z83_1443:
							if (PAIRP(BgL_l3356z00_1442))
								{	/* Cnst/node.scm 183 */
									{	/* Cnst/node.scm 184 */
										obj_t BgL_bindingz00_1445;

										BgL_bindingz00_1445 = CAR(BgL_l3356z00_1442);
										{	/* Cnst/node.scm 184 */
											obj_t BgL_varz00_1446;

											BgL_varz00_1446 = CAR(BgL_bindingz00_1445);
											{	/* Cnst/node.scm 185 */
												BgL_nodez00_bglt BgL_arg3620z00_1447;

												{	/* Cnst/node.scm 185 */
													obj_t BgL_arg3621z00_1448;

													BgL_arg3621z00_1448 = CDR(BgL_bindingz00_1445);
													{	/* Cnst/node.scm 185 */
														BgL_nodez00_bglt BgL_res3765z00_2247;

														{	/* Cnst/node.scm 185 */
															BgL_nodez00_bglt BgL_nodez00_2221;

															BgL_nodez00_2221 =
																(BgL_nodez00_bglt) (BgL_arg3621z00_1448);
															{	/* Cnst/node.scm 185 */
																obj_t BgL_method3361z00_2222;

																{	/* Cnst/node.scm 185 */
																	BgL_objectz00_bglt BgL_objz00_2223;

																	BgL_objz00_2223 =
																		(BgL_objectz00_bglt) (BgL_nodez00_2221);
																	{	/* Cnst/node.scm 185 */
																		long BgL_objzd2classzd2numz00_2224;

																		BgL_objzd2classzd2numz00_2224 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_2223);
																		{	/* Cnst/node.scm 185 */
																			obj_t BgL_arg2643z00_2225;

																			BgL_arg2643z00_2225 =
																				PROCEDURE_REF
																				(BGl_cnstz12zd2envzc0zzcnst_nodez00,
																				(int) (((long) 1)));
																			{	/* Cnst/node.scm 185 */
																				obj_t BgL_arrayz00_2227;

																				int BgL_offsetz00_2228;

																				BgL_arrayz00_2227 = BgL_arg2643z00_2225;
																				BgL_offsetz00_2228 =
																					(int) (BgL_objzd2classzd2numz00_2224);
																				{	/* Cnst/node.scm 185 */
																					long BgL_offsetz00_2229;

																					BgL_offsetz00_2229 =
																						(
																						(long) (BgL_offsetz00_2228) -
																						OBJECT_TYPE);
																					{	/* Cnst/node.scm 185 */
																						long BgL_modz00_2230;

																						{	/* Cnst/node.scm 185 */
																							int BgL_arg2645z00_2231;

																							BgL_arg2645z00_2231 =
																								(int) (((long) 16));
																							{	/* Cnst/node.scm 185 */
																								long BgL_auxz00_3670;

																								BgL_auxz00_3670 =
																									(long) (BgL_arg2645z00_2231);
																								BgL_modz00_2230 =
																									(BgL_offsetz00_2229 /
																									BgL_auxz00_3670);
																						}}
																						{	/* Cnst/node.scm 185 */
																							long BgL_restz00_2232;

																							{	/* Cnst/node.scm 185 */
																								int BgL_arg2644z00_2233;

																								BgL_arg2644z00_2233 =
																									(int) (((long) 16));
																								{	/* Cnst/node.scm 185 */
																									long BgL_auxz00_3674;

																									BgL_auxz00_3674 =
																										(long)
																										(BgL_arg2644z00_2233);
																									BgL_restz00_2232 =
																										(BgL_offsetz00_2229 %
																										BgL_auxz00_3674);
																							}}
																							{	/* Cnst/node.scm 185 */

																								BgL_method3361z00_2222 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_2227,
																										(int) (BgL_modz00_2230)),
																									(int) (BgL_restz00_2232));
																}}}}}}}}
																BgL_res3765z00_2247 =
																	(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																	(BgL_method3361z00_2222)
																	(BgL_method3361z00_2222,
																		(obj_t) (BgL_nodez00_2221), BEOA));
														}}
														BgL_arg3620z00_1447 = BgL_res3765z00_2247;
												}}
												{	/* Cnst/node.scm 185 */
													obj_t BgL_auxz00_3685;

													BgL_auxz00_3685 = (obj_t) (BgL_arg3620z00_1447);
													SET_CDR(BgL_bindingz00_1445, BgL_auxz00_3685);
											}}
											{	/* Cnst/node.scm 186 */
												bool_t BgL_testz00_3688;

												{	/* Cnst/node.scm 186 */
													obj_t BgL_auxz00_3689;

													{
														BgL_variablez00_bglt BgL_auxz00_3690;

														BgL_auxz00_3690 =
															(BgL_variablez00_bglt) (BgL_varz00_1446);
														BgL_auxz00_3689 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_3690))->
															BgL_accessz00);
													}
													BgL_testz00_3688 =
														(BgL_auxz00_3689 == CNST_TABLE_REF(((long) 5)));
												}
												if (BgL_testz00_3688)
													{	/* Cnst/node.scm 187 */
														BgL_localz00_bglt BgL_obj3329z00_1450;

														BgL_obj3329z00_1450 =
															((BgL_localz00_bglt)
															(BgL_localz00_bglt) (BgL_varz00_1446));
														{	/* Cnst/node.scm 188 */
															BgL_localzf2bvaluezf2_bglt BgL_arg3623z00_1451;

															{	/* Cnst/node.scm 188 */
																obj_t BgL_arg3624z00_1452;

																BgL_arg3624z00_1452 = CDR(BgL_bindingz00_1445);
																{	/* Cnst/node.scm 187 */
																	BgL_localzf2bvaluezf2_bglt
																		BgL_res3767z00_2258;
																	{	/* Cnst/node.scm 187 */
																		BgL_nodez00_bglt
																			BgL_bindingzd2value3242zd2_2252;
																		BgL_bindingzd2value3242zd2_2252 =
																			(BgL_nodez00_bglt) (BgL_arg3624z00_1452);
																		{	/* Cnst/node.scm 187 */
																			BgL_localzf2bvaluezf2_bglt
																				BgL_new3243z00_2253;
																			BgL_new3243z00_2253 =
																				((BgL_localzf2bvaluezf2_bglt)
																				BREF(GC_MALLOC(sizeof(struct
																							BgL_localzf2bvaluezf2_bgl))));
																			{	/* Cnst/node.scm 187 */
																				BgL_localzf2bvaluezf2_bglt
																					BgL_res3766z00_2257;
																				{	/* Cnst/node.scm 187 */
																					BgL_localzf2bvaluezf2_bglt
																						BgL_new3259z00_2254;
																					BgL_new3259z00_2254 =
																						BgL_new3243z00_2253;
																					{	/* Cnst/node.scm 187 */
																						BgL_nodez00_bglt
																							BgL_bindingzd2value3258zd2_2256;
																						BgL_bindingzd2value3258zd2_2256 =
																							BgL_bindingzd2value3242zd2_2252;
																						((((BgL_localzf2bvaluezf2_bglt)
																									CREF(BgL_new3259z00_2254))->
																								BgL_bindingzd2valuezd2) =
																							((BgL_nodez00_bglt)
																								BgL_bindingzd2value3258zd2_2256),
																							BUNSPEC);
																						BgL_res3766z00_2257 =
																							BgL_new3259z00_2254;
																				}} BgL_res3766z00_2257;
																			}
																			BgL_res3767z00_2258 = BgL_new3243z00_2253;
																	}}
																	BgL_arg3623z00_1451 = BgL_res3767z00_2258;
															}}
															{	/* Cnst/node.scm 187 */
																obj_t BgL_auxz00_3703;

																BgL_objectz00_bglt BgL_auxz00_3701;

																BgL_auxz00_3703 = (obj_t) (BgL_arg3623z00_1451);
																BgL_auxz00_3701 =
																	(BgL_objectz00_bglt) (BgL_obj3329z00_1450);
																BGL_OBJECT_WIDENING_SET(BgL_auxz00_3701,
																	BgL_auxz00_3703);
														}}
														BGL_OBJECT_CLASS_NUM_SET(
															(BgL_objectz00_bglt) (BgL_obj3329z00_1450),
															BGl_classzd2numzd2zz__objectz00
															(BGl_localzf2bvaluezf2zzcnst_nodez00));
														(obj_t) (BgL_obj3329z00_1450);
													}
												else
													{	/* Cnst/node.scm 186 */
														BFALSE;
													}
											}
										}
									}
									{
										obj_t BgL_l3356z00_3710;

										BgL_l3356z00_3710 = CDR(BgL_l3356z00_1442);
										BgL_l3356z00_1442 = BgL_l3356z00_3710;
										goto BgL_zc3anonymousza33618ze3z83_1443;
									}
								}
							else
								{	/* Cnst/node.scm 183 */
									((bool_t) 1);
								}
						}
					}
					{	/* Cnst/node.scm 190 */
						BgL_nodez00_bglt BgL_arg3629z00_1458;

						{	/* Cnst/node.scm 190 */
							BgL_nodez00_bglt BgL_arg3630z00_1459;

							BgL_arg3630z00_1459 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1436))->BgL_bodyz00);
							{	/* Cnst/node.scm 190 */
								BgL_nodez00_bglt BgL_res3770z00_2289;

								{	/* Cnst/node.scm 190 */
									obj_t BgL_method3361z00_2264;

									{	/* Cnst/node.scm 190 */
										BgL_objectz00_bglt BgL_objz00_2265;

										BgL_objz00_2265 =
											(BgL_objectz00_bglt) (BgL_arg3630z00_1459);
										{	/* Cnst/node.scm 190 */
											long BgL_objzd2classzd2numz00_2266;

											BgL_objzd2classzd2numz00_2266 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2265);
											{	/* Cnst/node.scm 190 */
												obj_t BgL_arg2643z00_2267;

												BgL_arg2643z00_2267 =
													PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
													(int) (((long) 1)));
												{	/* Cnst/node.scm 190 */
													obj_t BgL_arrayz00_2269;

													int BgL_offsetz00_2270;

													BgL_arrayz00_2269 = BgL_arg2643z00_2267;
													BgL_offsetz00_2270 =
														(int) (BgL_objzd2classzd2numz00_2266);
													{	/* Cnst/node.scm 190 */
														long BgL_offsetz00_2271;

														BgL_offsetz00_2271 =
															((long) (BgL_offsetz00_2270) - OBJECT_TYPE);
														{	/* Cnst/node.scm 190 */
															long BgL_modz00_2272;

															{	/* Cnst/node.scm 190 */
																int BgL_arg2645z00_2273;

																BgL_arg2645z00_2273 = (int) (((long) 16));
																{	/* Cnst/node.scm 190 */
																	long BgL_auxz00_3721;

																	BgL_auxz00_3721 =
																		(long) (BgL_arg2645z00_2273);
																	BgL_modz00_2272 =
																		(BgL_offsetz00_2271 / BgL_auxz00_3721);
															}}
															{	/* Cnst/node.scm 190 */
																long BgL_restz00_2274;

																{	/* Cnst/node.scm 190 */
																	int BgL_arg2644z00_2275;

																	BgL_arg2644z00_2275 = (int) (((long) 16));
																	{	/* Cnst/node.scm 190 */
																		long BgL_auxz00_3725;

																		BgL_auxz00_3725 =
																			(long) (BgL_arg2644z00_2275);
																		BgL_restz00_2274 =
																			(BgL_offsetz00_2271 % BgL_auxz00_3725);
																}}
																{	/* Cnst/node.scm 190 */

																	BgL_method3361z00_2264 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2269,
																			(int) (BgL_modz00_2272)),
																		(int) (BgL_restz00_2274));
									}}}}}}}}
									BgL_res3770z00_2289 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_2264)
										(BgL_method3361z00_2264, (obj_t) (BgL_arg3630z00_1459),
											BEOA));
								}
								BgL_arg3629z00_1458 = BgL_res3770z00_2289;
						}}
						((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1436))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3629z00_1458), BUNSPEC);
					}
					BgL_auxz00_3654 = BgL_nodez00_1436;
					return (obj_t) (BgL_auxz00_3654);
				}
			}
		}
	}



/* cnst!-let-fun3386 */
	obj_t BGl_cnstz12zd2letzd2fun3386z12zzcnst_nodez00(obj_t BgL_envz00_2844,
		obj_t BgL_nodez00_2845)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 169 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1417;

				{	/* Cnst/node.scm 170 */
					BgL_letzd2funzd2_bglt BgL_auxz00_3739;

					BgL_nodez00_1417 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2845);
					{	/* Cnst/node.scm 171 */
						obj_t BgL_g3355z00_1421;

						BgL_g3355z00_1421 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1417))->BgL_localsz00);
						{
							obj_t BgL_l3353z00_1423;

							BgL_l3353z00_1423 = BgL_g3355z00_1421;
						BgL_zc3anonymousza33609ze3z83_1424:
							if (PAIRP(BgL_l3353z00_1423))
								{	/* Cnst/node.scm 171 */
									{	/* Cnst/node.scm 172 */
										obj_t BgL_localz00_1426;

										BgL_localz00_1426 = CAR(BgL_l3353z00_1423);
										{	/* Cnst/node.scm 172 */
											BgL_valuez00_bglt BgL_funz00_1427;

											{
												BgL_variablez00_bglt BgL_auxz00_3744;

												BgL_auxz00_3744 =
													(BgL_variablez00_bglt) (BgL_localz00_1426);
												BgL_funz00_1427 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3744))->
													BgL_valuez00);
											}
											{	/* Cnst/node.scm 173 */
												BgL_nodez00_bglt BgL_arg3612z00_1428;

												{	/* Cnst/node.scm 173 */
													obj_t BgL_arg3613z00_1429;

													{
														BgL_sfunz00_bglt BgL_auxz00_3747;

														BgL_auxz00_3747 =
															(BgL_sfunz00_bglt) (BgL_funz00_1427);
														BgL_arg3613z00_1429 =
															(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3747))->
															BgL_bodyz00);
													}
													{	/* Cnst/node.scm 173 */
														BgL_nodez00_bglt BgL_res3759z00_2182;

														{	/* Cnst/node.scm 173 */
															BgL_nodez00_bglt BgL_nodez00_2156;

															BgL_nodez00_2156 =
																(BgL_nodez00_bglt) (BgL_arg3613z00_1429);
															{	/* Cnst/node.scm 173 */
																obj_t BgL_method3361z00_2157;

																{	/* Cnst/node.scm 173 */
																	BgL_objectz00_bglt BgL_objz00_2158;

																	BgL_objz00_2158 =
																		(BgL_objectz00_bglt) (BgL_nodez00_2156);
																	{	/* Cnst/node.scm 173 */
																		long BgL_objzd2classzd2numz00_2159;

																		BgL_objzd2classzd2numz00_2159 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_2158);
																		{	/* Cnst/node.scm 173 */
																			obj_t BgL_arg2643z00_2160;

																			BgL_arg2643z00_2160 =
																				PROCEDURE_REF
																				(BGl_cnstz12zd2envzc0zzcnst_nodez00,
																				(int) (((long) 1)));
																			{	/* Cnst/node.scm 173 */
																				obj_t BgL_arrayz00_2162;

																				int BgL_offsetz00_2163;

																				BgL_arrayz00_2162 = BgL_arg2643z00_2160;
																				BgL_offsetz00_2163 =
																					(int) (BgL_objzd2classzd2numz00_2159);
																				{	/* Cnst/node.scm 173 */
																					long BgL_offsetz00_2164;

																					BgL_offsetz00_2164 =
																						(
																						(long) (BgL_offsetz00_2163) -
																						OBJECT_TYPE);
																					{	/* Cnst/node.scm 173 */
																						long BgL_modz00_2165;

																						{	/* Cnst/node.scm 173 */
																							int BgL_arg2645z00_2166;

																							BgL_arg2645z00_2166 =
																								(int) (((long) 16));
																							{	/* Cnst/node.scm 173 */
																								long BgL_auxz00_3759;

																								BgL_auxz00_3759 =
																									(long) (BgL_arg2645z00_2166);
																								BgL_modz00_2165 =
																									(BgL_offsetz00_2164 /
																									BgL_auxz00_3759);
																						}}
																						{	/* Cnst/node.scm 173 */
																							long BgL_restz00_2167;

																							{	/* Cnst/node.scm 173 */
																								int BgL_arg2644z00_2168;

																								BgL_arg2644z00_2168 =
																									(int) (((long) 16));
																								{	/* Cnst/node.scm 173 */
																									long BgL_auxz00_3763;

																									BgL_auxz00_3763 =
																										(long)
																										(BgL_arg2644z00_2168);
																									BgL_restz00_2167 =
																										(BgL_offsetz00_2164 %
																										BgL_auxz00_3763);
																							}}
																							{	/* Cnst/node.scm 173 */

																								BgL_method3361z00_2157 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_2162,
																										(int) (BgL_modz00_2165)),
																									(int) (BgL_restz00_2167));
																}}}}}}}}
																BgL_res3759z00_2182 =
																	(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																	(BgL_method3361z00_2157)
																	(BgL_method3361z00_2157,
																		(obj_t) (BgL_nodez00_2156), BEOA));
														}}
														BgL_arg3612z00_1428 = BgL_res3759z00_2182;
												}}
												{
													obj_t BgL_auxz00_3776;

													BgL_sfunz00_bglt BgL_auxz00_3774;

													BgL_auxz00_3776 = (obj_t) (BgL_arg3612z00_1428);
													BgL_auxz00_3774 =
														(BgL_sfunz00_bglt) (BgL_funz00_1427);
													((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3774))->
															BgL_bodyz00) =
														((obj_t) BgL_auxz00_3776), BUNSPEC);
									}}}}
									{
										obj_t BgL_l3353z00_3779;

										BgL_l3353z00_3779 = CDR(BgL_l3353z00_1423);
										BgL_l3353z00_1423 = BgL_l3353z00_3779;
										goto BgL_zc3anonymousza33609ze3z83_1424;
									}
								}
							else
								{	/* Cnst/node.scm 171 */
									((bool_t) 1);
								}
						}
					}
					{	/* Cnst/node.scm 175 */
						BgL_nodez00_bglt BgL_arg3615z00_1432;

						{	/* Cnst/node.scm 175 */
							BgL_nodez00_bglt BgL_arg3616z00_1433;

							BgL_arg3616z00_1433 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1417))->BgL_bodyz00);
							{	/* Cnst/node.scm 175 */
								BgL_nodez00_bglt BgL_res3762z00_2213;

								{	/* Cnst/node.scm 175 */
									obj_t BgL_method3361z00_2188;

									{	/* Cnst/node.scm 175 */
										BgL_objectz00_bglt BgL_objz00_2189;

										BgL_objz00_2189 =
											(BgL_objectz00_bglt) (BgL_arg3616z00_1433);
										{	/* Cnst/node.scm 175 */
											long BgL_objzd2classzd2numz00_2190;

											BgL_objzd2classzd2numz00_2190 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2189);
											{	/* Cnst/node.scm 175 */
												obj_t BgL_arg2643z00_2191;

												BgL_arg2643z00_2191 =
													PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
													(int) (((long) 1)));
												{	/* Cnst/node.scm 175 */
													obj_t BgL_arrayz00_2193;

													int BgL_offsetz00_2194;

													BgL_arrayz00_2193 = BgL_arg2643z00_2191;
													BgL_offsetz00_2194 =
														(int) (BgL_objzd2classzd2numz00_2190);
													{	/* Cnst/node.scm 175 */
														long BgL_offsetz00_2195;

														BgL_offsetz00_2195 =
															((long) (BgL_offsetz00_2194) - OBJECT_TYPE);
														{	/* Cnst/node.scm 175 */
															long BgL_modz00_2196;

															{	/* Cnst/node.scm 175 */
																int BgL_arg2645z00_2197;

																BgL_arg2645z00_2197 = (int) (((long) 16));
																{	/* Cnst/node.scm 175 */
																	long BgL_auxz00_3790;

																	BgL_auxz00_3790 =
																		(long) (BgL_arg2645z00_2197);
																	BgL_modz00_2196 =
																		(BgL_offsetz00_2195 / BgL_auxz00_3790);
															}}
															{	/* Cnst/node.scm 175 */
																long BgL_restz00_2198;

																{	/* Cnst/node.scm 175 */
																	int BgL_arg2644z00_2199;

																	BgL_arg2644z00_2199 = (int) (((long) 16));
																	{	/* Cnst/node.scm 175 */
																		long BgL_auxz00_3794;

																		BgL_auxz00_3794 =
																			(long) (BgL_arg2644z00_2199);
																		BgL_restz00_2198 =
																			(BgL_offsetz00_2195 % BgL_auxz00_3794);
																}}
																{	/* Cnst/node.scm 175 */

																	BgL_method3361z00_2188 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2193,
																			(int) (BgL_modz00_2196)),
																		(int) (BgL_restz00_2198));
									}}}}}}}}
									BgL_res3762z00_2213 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_2188)
										(BgL_method3361z00_2188, (obj_t) (BgL_arg3616z00_1433),
											BEOA));
								}
								BgL_arg3615z00_1432 = BgL_res3762z00_2213;
						}}
						((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1417))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3615z00_1432), BUNSPEC);
					}
					BgL_auxz00_3739 = BgL_nodez00_1417;
					return (obj_t) (BgL_auxz00_3739);
				}
			}
		}
	}



/* cnst!-select3384 */
	obj_t BGl_cnstz12zd2select3384zc0zzcnst_nodez00(obj_t BgL_envz00_2846,
		obj_t BgL_nodez00_2847)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 158 */
			{
				BgL_selectz00_bglt BgL_nodez00_1399;

				{	/* Cnst/node.scm 159 */
					BgL_selectz00_bglt BgL_auxz00_3808;

					BgL_nodez00_1399 = (BgL_selectz00_bglt) (BgL_nodez00_2847);
					{	/* Cnst/node.scm 160 */
						BgL_nodez00_bglt BgL_arg3601z00_1403;

						{	/* Cnst/node.scm 160 */
							BgL_nodez00_bglt BgL_arg3602z00_1404;

							BgL_arg3602z00_1404 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1399))->BgL_testz00);
							{	/* Cnst/node.scm 160 */
								BgL_nodez00_bglt BgL_res3753z00_2114;

								{	/* Cnst/node.scm 160 */
									obj_t BgL_method3361z00_2089;

									{	/* Cnst/node.scm 160 */
										BgL_objectz00_bglt BgL_objz00_2090;

										BgL_objz00_2090 =
											(BgL_objectz00_bglt) (BgL_arg3602z00_1404);
										{	/* Cnst/node.scm 160 */
											long BgL_objzd2classzd2numz00_2091;

											BgL_objzd2classzd2numz00_2091 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2090);
											{	/* Cnst/node.scm 160 */
												obj_t BgL_arg2643z00_2092;

												BgL_arg2643z00_2092 =
													PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
													(int) (((long) 1)));
												{	/* Cnst/node.scm 160 */
													obj_t BgL_arrayz00_2094;

													int BgL_offsetz00_2095;

													BgL_arrayz00_2094 = BgL_arg2643z00_2092;
													BgL_offsetz00_2095 =
														(int) (BgL_objzd2classzd2numz00_2091);
													{	/* Cnst/node.scm 160 */
														long BgL_offsetz00_2096;

														BgL_offsetz00_2096 =
															((long) (BgL_offsetz00_2095) - OBJECT_TYPE);
														{	/* Cnst/node.scm 160 */
															long BgL_modz00_2097;

															{	/* Cnst/node.scm 160 */
																int BgL_arg2645z00_2098;

																BgL_arg2645z00_2098 = (int) (((long) 16));
																{	/* Cnst/node.scm 160 */
																	long BgL_auxz00_3818;

																	BgL_auxz00_3818 =
																		(long) (BgL_arg2645z00_2098);
																	BgL_modz00_2097 =
																		(BgL_offsetz00_2096 / BgL_auxz00_3818);
															}}
															{	/* Cnst/node.scm 160 */
																long BgL_restz00_2099;

																{	/* Cnst/node.scm 160 */
																	int BgL_arg2644z00_2100;

																	BgL_arg2644z00_2100 = (int) (((long) 16));
																	{	/* Cnst/node.scm 160 */
																		long BgL_auxz00_3822;

																		BgL_auxz00_3822 =
																			(long) (BgL_arg2644z00_2100);
																		BgL_restz00_2099 =
																			(BgL_offsetz00_2096 % BgL_auxz00_3822);
																}}
																{	/* Cnst/node.scm 160 */

																	BgL_method3361z00_2089 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2094,
																			(int) (BgL_modz00_2097)),
																		(int) (BgL_restz00_2099));
									}}}}}}}}
									BgL_res3753z00_2114 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_2089)
										(BgL_method3361z00_2089, (obj_t) (BgL_arg3602z00_1404),
											BEOA));
								}
								BgL_arg3601z00_1403 = BgL_res3753z00_2114;
						}}
						((((BgL_selectz00_bglt) CREF(BgL_nodez00_1399))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3601z00_1403), BUNSPEC);
					}
					{	/* Cnst/node.scm 161 */
						obj_t BgL_g3352z00_1405;

						BgL_g3352z00_1405 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1399))->BgL_clausesz00);
						{
							obj_t BgL_l3350z00_1407;

							BgL_l3350z00_1407 = BgL_g3352z00_1405;
						BgL_zc3anonymousza33603ze3z83_1408:
							if (PAIRP(BgL_l3350z00_1407))
								{	/* Cnst/node.scm 161 */
									{	/* Cnst/node.scm 162 */
										obj_t BgL_clausez00_1410;

										BgL_clausez00_1410 = CAR(BgL_l3350z00_1407);
										{	/* Cnst/node.scm 162 */
											BgL_nodez00_bglt BgL_arg3605z00_1411;

											{	/* Cnst/node.scm 162 */
												obj_t BgL_arg3606z00_1412;

												BgL_arg3606z00_1412 = CDR(BgL_clausez00_1410);
												{	/* Cnst/node.scm 162 */
													BgL_nodez00_bglt BgL_res3756z00_2147;

													{	/* Cnst/node.scm 162 */
														BgL_nodez00_bglt BgL_nodez00_2121;

														BgL_nodez00_2121 =
															(BgL_nodez00_bglt) (BgL_arg3606z00_1412);
														{	/* Cnst/node.scm 162 */
															obj_t BgL_method3361z00_2122;

															{	/* Cnst/node.scm 162 */
																BgL_objectz00_bglt BgL_objz00_2123;

																BgL_objz00_2123 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2121);
																{	/* Cnst/node.scm 162 */
																	long BgL_objzd2classzd2numz00_2124;

																	BgL_objzd2classzd2numz00_2124 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2123);
																	{	/* Cnst/node.scm 162 */
																		obj_t BgL_arg2643z00_2125;

																		BgL_arg2643z00_2125 =
																			PROCEDURE_REF
																			(BGl_cnstz12zd2envzc0zzcnst_nodez00,
																			(int) (((long) 1)));
																		{	/* Cnst/node.scm 162 */
																			obj_t BgL_arrayz00_2127;

																			int BgL_offsetz00_2128;

																			BgL_arrayz00_2127 = BgL_arg2643z00_2125;
																			BgL_offsetz00_2128 =
																				(int) (BgL_objzd2classzd2numz00_2124);
																			{	/* Cnst/node.scm 162 */
																				long BgL_offsetz00_2129;

																				BgL_offsetz00_2129 =
																					(
																					(long) (BgL_offsetz00_2128) -
																					OBJECT_TYPE);
																				{	/* Cnst/node.scm 162 */
																					long BgL_modz00_2130;

																					{	/* Cnst/node.scm 162 */
																						int BgL_arg2645z00_2131;

																						BgL_arg2645z00_2131 =
																							(int) (((long) 16));
																						{	/* Cnst/node.scm 162 */
																							long BgL_auxz00_3848;

																							BgL_auxz00_3848 =
																								(long) (BgL_arg2645z00_2131);
																							BgL_modz00_2130 =
																								(BgL_offsetz00_2129 /
																								BgL_auxz00_3848);
																					}}
																					{	/* Cnst/node.scm 162 */
																						long BgL_restz00_2132;

																						{	/* Cnst/node.scm 162 */
																							int BgL_arg2644z00_2133;

																							BgL_arg2644z00_2133 =
																								(int) (((long) 16));
																							{	/* Cnst/node.scm 162 */
																								long BgL_auxz00_3852;

																								BgL_auxz00_3852 =
																									(long) (BgL_arg2644z00_2133);
																								BgL_restz00_2132 =
																									(BgL_offsetz00_2129 %
																									BgL_auxz00_3852);
																						}}
																						{	/* Cnst/node.scm 162 */

																							BgL_method3361z00_2122 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2127,
																									(int) (BgL_modz00_2130)),
																								(int) (BgL_restz00_2132));
															}}}}}}}}
															BgL_res3756z00_2147 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3361z00_2122)
																(BgL_method3361z00_2122,
																	(obj_t) (BgL_nodez00_2121), BEOA));
													}}
													BgL_arg3605z00_1411 = BgL_res3756z00_2147;
											}}
											{	/* Cnst/node.scm 162 */
												obj_t BgL_auxz00_3863;

												BgL_auxz00_3863 = (obj_t) (BgL_arg3605z00_1411);
												SET_CDR(BgL_clausez00_1410, BgL_auxz00_3863);
									}}}
									{
										obj_t BgL_l3350z00_3866;

										BgL_l3350z00_3866 = CDR(BgL_l3350z00_1407);
										BgL_l3350z00_1407 = BgL_l3350z00_3866;
										goto BgL_zc3anonymousza33603ze3z83_1408;
									}
								}
							else
								{	/* Cnst/node.scm 161 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_3808 = BgL_nodez00_1399;
					return (obj_t) (BgL_auxz00_3808);
				}
			}
		}
	}



/* cnst!-fail3382 */
	obj_t BGl_cnstz12zd2fail3382zc0zzcnst_nodez00(obj_t BgL_envz00_2848,
		obj_t BgL_nodez00_2849)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 148 */
			{
				BgL_failz00_bglt BgL_nodez00_1387;

				{	/* Cnst/node.scm 149 */
					BgL_failz00_bglt BgL_auxz00_3870;

					BgL_nodez00_1387 = (BgL_failz00_bglt) (BgL_nodez00_2849);
					{	/* Cnst/node.scm 150 */
						BgL_nodez00_bglt BgL_arg3594z00_1391;

						{	/* Cnst/node.scm 150 */
							BgL_nodez00_bglt BgL_arg3595z00_1392;

							BgL_arg3595z00_1392 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1387))->BgL_procz00);
							{	/* Cnst/node.scm 150 */
								BgL_nodez00_bglt BgL_res3744z00_2024;

								{	/* Cnst/node.scm 150 */
									obj_t BgL_method3361z00_1999;

									{	/* Cnst/node.scm 150 */
										BgL_objectz00_bglt BgL_objz00_2000;

										BgL_objz00_2000 =
											(BgL_objectz00_bglt) (BgL_arg3595z00_1392);
										{	/* Cnst/node.scm 150 */
											long BgL_objzd2classzd2numz00_2001;

											BgL_objzd2classzd2numz00_2001 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2000);
											{	/* Cnst/node.scm 150 */
												obj_t BgL_arg2643z00_2002;

												BgL_arg2643z00_2002 =
													PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
													(int) (((long) 1)));
												{	/* Cnst/node.scm 150 */
													obj_t BgL_arrayz00_2004;

													int BgL_offsetz00_2005;

													BgL_arrayz00_2004 = BgL_arg2643z00_2002;
													BgL_offsetz00_2005 =
														(int) (BgL_objzd2classzd2numz00_2001);
													{	/* Cnst/node.scm 150 */
														long BgL_offsetz00_2006;

														BgL_offsetz00_2006 =
															((long) (BgL_offsetz00_2005) - OBJECT_TYPE);
														{	/* Cnst/node.scm 150 */
															long BgL_modz00_2007;

															{	/* Cnst/node.scm 150 */
																int BgL_arg2645z00_2008;

																BgL_arg2645z00_2008 = (int) (((long) 16));
																{	/* Cnst/node.scm 150 */
																	long BgL_auxz00_3880;

																	BgL_auxz00_3880 =
																		(long) (BgL_arg2645z00_2008);
																	BgL_modz00_2007 =
																		(BgL_offsetz00_2006 / BgL_auxz00_3880);
															}}
															{	/* Cnst/node.scm 150 */
																long BgL_restz00_2009;

																{	/* Cnst/node.scm 150 */
																	int BgL_arg2644z00_2010;

																	BgL_arg2644z00_2010 = (int) (((long) 16));
																	{	/* Cnst/node.scm 150 */
																		long BgL_auxz00_3884;

																		BgL_auxz00_3884 =
																			(long) (BgL_arg2644z00_2010);
																		BgL_restz00_2009 =
																			(BgL_offsetz00_2006 % BgL_auxz00_3884);
																}}
																{	/* Cnst/node.scm 150 */

																	BgL_method3361z00_1999 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2004,
																			(int) (BgL_modz00_2007)),
																		(int) (BgL_restz00_2009));
									}}}}}}}}
									BgL_res3744z00_2024 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_1999)
										(BgL_method3361z00_1999, (obj_t) (BgL_arg3595z00_1392),
											BEOA));
								}
								BgL_arg3594z00_1391 = BgL_res3744z00_2024;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1387))->BgL_procz00) =
							((BgL_nodez00_bglt) BgL_arg3594z00_1391), BUNSPEC);
					}
					{	/* Cnst/node.scm 151 */
						BgL_nodez00_bglt BgL_arg3596z00_1393;

						{	/* Cnst/node.scm 151 */
							BgL_nodez00_bglt BgL_arg3597z00_1394;

							BgL_arg3597z00_1394 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1387))->BgL_msgz00);
							{	/* Cnst/node.scm 151 */
								BgL_nodez00_bglt BgL_res3747z00_2054;

								{	/* Cnst/node.scm 151 */
									obj_t BgL_method3361z00_2029;

									{	/* Cnst/node.scm 151 */
										BgL_objectz00_bglt BgL_objz00_2030;

										BgL_objz00_2030 =
											(BgL_objectz00_bglt) (BgL_arg3597z00_1394);
										{	/* Cnst/node.scm 151 */
											long BgL_objzd2classzd2numz00_2031;

											BgL_objzd2classzd2numz00_2031 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2030);
											{	/* Cnst/node.scm 151 */
												obj_t BgL_arg2643z00_2032;

												BgL_arg2643z00_2032 =
													PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
													(int) (((long) 1)));
												{	/* Cnst/node.scm 151 */
													obj_t BgL_arrayz00_2034;

													int BgL_offsetz00_2035;

													BgL_arrayz00_2034 = BgL_arg2643z00_2032;
													BgL_offsetz00_2035 =
														(int) (BgL_objzd2classzd2numz00_2031);
													{	/* Cnst/node.scm 151 */
														long BgL_offsetz00_2036;

														BgL_offsetz00_2036 =
															((long) (BgL_offsetz00_2035) - OBJECT_TYPE);
														{	/* Cnst/node.scm 151 */
															long BgL_modz00_2037;

															{	/* Cnst/node.scm 151 */
																int BgL_arg2645z00_2038;

																BgL_arg2645z00_2038 = (int) (((long) 16));
																{	/* Cnst/node.scm 151 */
																	long BgL_auxz00_3905;

																	BgL_auxz00_3905 =
																		(long) (BgL_arg2645z00_2038);
																	BgL_modz00_2037 =
																		(BgL_offsetz00_2036 / BgL_auxz00_3905);
															}}
															{	/* Cnst/node.scm 151 */
																long BgL_restz00_2039;

																{	/* Cnst/node.scm 151 */
																	int BgL_arg2644z00_2040;

																	BgL_arg2644z00_2040 = (int) (((long) 16));
																	{	/* Cnst/node.scm 151 */
																		long BgL_auxz00_3909;

																		BgL_auxz00_3909 =
																			(long) (BgL_arg2644z00_2040);
																		BgL_restz00_2039 =
																			(BgL_offsetz00_2036 % BgL_auxz00_3909);
																}}
																{	/* Cnst/node.scm 151 */

																	BgL_method3361z00_2029 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2034,
																			(int) (BgL_modz00_2037)),
																		(int) (BgL_restz00_2039));
									}}}}}}}}
									BgL_res3747z00_2054 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_2029)
										(BgL_method3361z00_2029, (obj_t) (BgL_arg3597z00_1394),
											BEOA));
								}
								BgL_arg3596z00_1393 = BgL_res3747z00_2054;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1387))->BgL_msgz00) =
							((BgL_nodez00_bglt) BgL_arg3596z00_1393), BUNSPEC);
					}
					{	/* Cnst/node.scm 152 */
						BgL_nodez00_bglt BgL_arg3598z00_1395;

						{	/* Cnst/node.scm 152 */
							BgL_nodez00_bglt BgL_arg3599z00_1396;

							BgL_arg3599z00_1396 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1387))->BgL_objz00);
							{	/* Cnst/node.scm 152 */
								BgL_nodez00_bglt BgL_res3750z00_2084;

								{	/* Cnst/node.scm 152 */
									obj_t BgL_method3361z00_2059;

									{	/* Cnst/node.scm 152 */
										BgL_objectz00_bglt BgL_objz00_2060;

										BgL_objz00_2060 =
											(BgL_objectz00_bglt) (BgL_arg3599z00_1396);
										{	/* Cnst/node.scm 152 */
											long BgL_objzd2classzd2numz00_2061;

											BgL_objzd2classzd2numz00_2061 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2060);
											{	/* Cnst/node.scm 152 */
												obj_t BgL_arg2643z00_2062;

												BgL_arg2643z00_2062 =
													PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
													(int) (((long) 1)));
												{	/* Cnst/node.scm 152 */
													obj_t BgL_arrayz00_2064;

													int BgL_offsetz00_2065;

													BgL_arrayz00_2064 = BgL_arg2643z00_2062;
													BgL_offsetz00_2065 =
														(int) (BgL_objzd2classzd2numz00_2061);
													{	/* Cnst/node.scm 152 */
														long BgL_offsetz00_2066;

														BgL_offsetz00_2066 =
															((long) (BgL_offsetz00_2065) - OBJECT_TYPE);
														{	/* Cnst/node.scm 152 */
															long BgL_modz00_2067;

															{	/* Cnst/node.scm 152 */
																int BgL_arg2645z00_2068;

																BgL_arg2645z00_2068 = (int) (((long) 16));
																{	/* Cnst/node.scm 152 */
																	long BgL_auxz00_3930;

																	BgL_auxz00_3930 =
																		(long) (BgL_arg2645z00_2068);
																	BgL_modz00_2067 =
																		(BgL_offsetz00_2066 / BgL_auxz00_3930);
															}}
															{	/* Cnst/node.scm 152 */
																long BgL_restz00_2069;

																{	/* Cnst/node.scm 152 */
																	int BgL_arg2644z00_2070;

																	BgL_arg2644z00_2070 = (int) (((long) 16));
																	{	/* Cnst/node.scm 152 */
																		long BgL_auxz00_3934;

																		BgL_auxz00_3934 =
																			(long) (BgL_arg2644z00_2070);
																		BgL_restz00_2069 =
																			(BgL_offsetz00_2066 % BgL_auxz00_3934);
																}}
																{	/* Cnst/node.scm 152 */

																	BgL_method3361z00_2059 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2064,
																			(int) (BgL_modz00_2067)),
																		(int) (BgL_restz00_2069));
									}}}}}}}}
									BgL_res3750z00_2084 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_2059)
										(BgL_method3361z00_2059, (obj_t) (BgL_arg3599z00_1396),
											BEOA));
								}
								BgL_arg3598z00_1395 = BgL_res3750z00_2084;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1387))->BgL_objz00) =
							((BgL_nodez00_bglt) BgL_arg3598z00_1395), BUNSPEC);
					}
					BgL_auxz00_3870 = BgL_nodez00_1387;
					return (obj_t) (BgL_auxz00_3870);
				}
			}
		}
	}



/* cnst!-conditional3380 */
	obj_t BGl_cnstz12zd2conditional3380zc0zzcnst_nodez00(obj_t BgL_envz00_2850,
		obj_t BgL_nodez00_2851)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 138 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1375;

				{	/* Cnst/node.scm 139 */
					BgL_conditionalz00_bglt BgL_auxz00_3948;

					BgL_nodez00_1375 = (BgL_conditionalz00_bglt) (BgL_nodez00_2851);
					{	/* Cnst/node.scm 140 */
						BgL_nodez00_bglt BgL_arg3587z00_1379;

						{	/* Cnst/node.scm 140 */
							BgL_nodez00_bglt BgL_arg3588z00_1380;

							BgL_arg3588z00_1380 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1375))->
								BgL_testz00);
							{	/* Cnst/node.scm 140 */
								BgL_nodez00_bglt BgL_res3735z00_1934;

								{	/* Cnst/node.scm 140 */
									obj_t BgL_method3361z00_1909;

									{	/* Cnst/node.scm 140 */
										BgL_objectz00_bglt BgL_objz00_1910;

										BgL_objz00_1910 =
											(BgL_objectz00_bglt) (BgL_arg3588z00_1380);
										{	/* Cnst/node.scm 140 */
											long BgL_objzd2classzd2numz00_1911;

											BgL_objzd2classzd2numz00_1911 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1910);
											{	/* Cnst/node.scm 140 */
												obj_t BgL_arg2643z00_1912;

												BgL_arg2643z00_1912 =
													PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
													(int) (((long) 1)));
												{	/* Cnst/node.scm 140 */
													obj_t BgL_arrayz00_1914;

													int BgL_offsetz00_1915;

													BgL_arrayz00_1914 = BgL_arg2643z00_1912;
													BgL_offsetz00_1915 =
														(int) (BgL_objzd2classzd2numz00_1911);
													{	/* Cnst/node.scm 140 */
														long BgL_offsetz00_1916;

														BgL_offsetz00_1916 =
															((long) (BgL_offsetz00_1915) - OBJECT_TYPE);
														{	/* Cnst/node.scm 140 */
															long BgL_modz00_1917;

															{	/* Cnst/node.scm 140 */
																int BgL_arg2645z00_1918;

																BgL_arg2645z00_1918 = (int) (((long) 16));
																{	/* Cnst/node.scm 140 */
																	long BgL_auxz00_3958;

																	BgL_auxz00_3958 =
																		(long) (BgL_arg2645z00_1918);
																	BgL_modz00_1917 =
																		(BgL_offsetz00_1916 / BgL_auxz00_3958);
															}}
															{	/* Cnst/node.scm 140 */
																long BgL_restz00_1919;

																{	/* Cnst/node.scm 140 */
																	int BgL_arg2644z00_1920;

																	BgL_arg2644z00_1920 = (int) (((long) 16));
																	{	/* Cnst/node.scm 140 */
																		long BgL_auxz00_3962;

																		BgL_auxz00_3962 =
																			(long) (BgL_arg2644z00_1920);
																		BgL_restz00_1919 =
																			(BgL_offsetz00_1916 % BgL_auxz00_3962);
																}}
																{	/* Cnst/node.scm 140 */

																	BgL_method3361z00_1909 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1914,
																			(int) (BgL_modz00_1917)),
																		(int) (BgL_restz00_1919));
									}}}}}}}}
									BgL_res3735z00_1934 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_1909)
										(BgL_method3361z00_1909, (obj_t) (BgL_arg3588z00_1380),
											BEOA));
								}
								BgL_arg3587z00_1379 = BgL_res3735z00_1934;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1375))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3587z00_1379), BUNSPEC);
					}
					{	/* Cnst/node.scm 141 */
						BgL_nodez00_bglt BgL_arg3589z00_1381;

						{	/* Cnst/node.scm 141 */
							BgL_nodez00_bglt BgL_arg3590z00_1382;

							BgL_arg3590z00_1382 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1375))->
								BgL_truez00);
							{	/* Cnst/node.scm 141 */
								BgL_nodez00_bglt BgL_res3738z00_1964;

								{	/* Cnst/node.scm 141 */
									obj_t BgL_method3361z00_1939;

									{	/* Cnst/node.scm 141 */
										BgL_objectz00_bglt BgL_objz00_1940;

										BgL_objz00_1940 =
											(BgL_objectz00_bglt) (BgL_arg3590z00_1382);
										{	/* Cnst/node.scm 141 */
											long BgL_objzd2classzd2numz00_1941;

											BgL_objzd2classzd2numz00_1941 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1940);
											{	/* Cnst/node.scm 141 */
												obj_t BgL_arg2643z00_1942;

												BgL_arg2643z00_1942 =
													PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
													(int) (((long) 1)));
												{	/* Cnst/node.scm 141 */
													obj_t BgL_arrayz00_1944;

													int BgL_offsetz00_1945;

													BgL_arrayz00_1944 = BgL_arg2643z00_1942;
													BgL_offsetz00_1945 =
														(int) (BgL_objzd2classzd2numz00_1941);
													{	/* Cnst/node.scm 141 */
														long BgL_offsetz00_1946;

														BgL_offsetz00_1946 =
															((long) (BgL_offsetz00_1945) - OBJECT_TYPE);
														{	/* Cnst/node.scm 141 */
															long BgL_modz00_1947;

															{	/* Cnst/node.scm 141 */
																int BgL_arg2645z00_1948;

																BgL_arg2645z00_1948 = (int) (((long) 16));
																{	/* Cnst/node.scm 141 */
																	long BgL_auxz00_3983;

																	BgL_auxz00_3983 =
																		(long) (BgL_arg2645z00_1948);
																	BgL_modz00_1947 =
																		(BgL_offsetz00_1946 / BgL_auxz00_3983);
															}}
															{	/* Cnst/node.scm 141 */
																long BgL_restz00_1949;

																{	/* Cnst/node.scm 141 */
																	int BgL_arg2644z00_1950;

																	BgL_arg2644z00_1950 = (int) (((long) 16));
																	{	/* Cnst/node.scm 141 */
																		long BgL_auxz00_3987;

																		BgL_auxz00_3987 =
																			(long) (BgL_arg2644z00_1950);
																		BgL_restz00_1949 =
																			(BgL_offsetz00_1946 % BgL_auxz00_3987);
																}}
																{	/* Cnst/node.scm 141 */

																	BgL_method3361z00_1939 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1944,
																			(int) (BgL_modz00_1947)),
																		(int) (BgL_restz00_1949));
									}}}}}}}}
									BgL_res3738z00_1964 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_1939)
										(BgL_method3361z00_1939, (obj_t) (BgL_arg3590z00_1382),
											BEOA));
								}
								BgL_arg3589z00_1381 = BgL_res3738z00_1964;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1375))->BgL_truez00) =
							((BgL_nodez00_bglt) BgL_arg3589z00_1381), BUNSPEC);
					}
					{	/* Cnst/node.scm 142 */
						BgL_nodez00_bglt BgL_arg3591z00_1383;

						{	/* Cnst/node.scm 142 */
							BgL_nodez00_bglt BgL_arg3592z00_1384;

							BgL_arg3592z00_1384 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1375))->
								BgL_falsez00);
							{	/* Cnst/node.scm 142 */
								BgL_nodez00_bglt BgL_res3741z00_1994;

								{	/* Cnst/node.scm 142 */
									obj_t BgL_method3361z00_1969;

									{	/* Cnst/node.scm 142 */
										BgL_objectz00_bglt BgL_objz00_1970;

										BgL_objz00_1970 =
											(BgL_objectz00_bglt) (BgL_arg3592z00_1384);
										{	/* Cnst/node.scm 142 */
											long BgL_objzd2classzd2numz00_1971;

											BgL_objzd2classzd2numz00_1971 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1970);
											{	/* Cnst/node.scm 142 */
												obj_t BgL_arg2643z00_1972;

												BgL_arg2643z00_1972 =
													PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
													(int) (((long) 1)));
												{	/* Cnst/node.scm 142 */
													obj_t BgL_arrayz00_1974;

													int BgL_offsetz00_1975;

													BgL_arrayz00_1974 = BgL_arg2643z00_1972;
													BgL_offsetz00_1975 =
														(int) (BgL_objzd2classzd2numz00_1971);
													{	/* Cnst/node.scm 142 */
														long BgL_offsetz00_1976;

														BgL_offsetz00_1976 =
															((long) (BgL_offsetz00_1975) - OBJECT_TYPE);
														{	/* Cnst/node.scm 142 */
															long BgL_modz00_1977;

															{	/* Cnst/node.scm 142 */
																int BgL_arg2645z00_1978;

																BgL_arg2645z00_1978 = (int) (((long) 16));
																{	/* Cnst/node.scm 142 */
																	long BgL_auxz00_4008;

																	BgL_auxz00_4008 =
																		(long) (BgL_arg2645z00_1978);
																	BgL_modz00_1977 =
																		(BgL_offsetz00_1976 / BgL_auxz00_4008);
															}}
															{	/* Cnst/node.scm 142 */
																long BgL_restz00_1979;

																{	/* Cnst/node.scm 142 */
																	int BgL_arg2644z00_1980;

																	BgL_arg2644z00_1980 = (int) (((long) 16));
																	{	/* Cnst/node.scm 142 */
																		long BgL_auxz00_4012;

																		BgL_auxz00_4012 =
																			(long) (BgL_arg2644z00_1980);
																		BgL_restz00_1979 =
																			(BgL_offsetz00_1976 % BgL_auxz00_4012);
																}}
																{	/* Cnst/node.scm 142 */

																	BgL_method3361z00_1969 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1974,
																			(int) (BgL_modz00_1977)),
																		(int) (BgL_restz00_1979));
									}}}}}}}}
									BgL_res3741z00_1994 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_1969)
										(BgL_method3361z00_1969, (obj_t) (BgL_arg3592z00_1384),
											BEOA));
								}
								BgL_arg3591z00_1383 = BgL_res3741z00_1994;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1375))->
								BgL_falsez00) =
							((BgL_nodez00_bglt) BgL_arg3591z00_1383), BUNSPEC);
					}
					BgL_auxz00_3948 = BgL_nodez00_1375;
					return (obj_t) (BgL_auxz00_3948);
				}
			}
		}
	}



/* cnst!-setq3378 */
	obj_t BGl_cnstz12zd2setq3378zc0zzcnst_nodez00(obj_t BgL_envz00_2852,
		obj_t BgL_nodez00_2853)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 130 */
			{
				BgL_setqz00_bglt BgL_nodez00_1367;

				{	/* Cnst/node.scm 131 */
					BgL_setqz00_bglt BgL_auxz00_4026;

					BgL_nodez00_1367 = (BgL_setqz00_bglt) (BgL_nodez00_2853);
					{	/* Cnst/node.scm 132 */
						BgL_nodez00_bglt BgL_arg3584z00_1371;

						{	/* Cnst/node.scm 132 */
							BgL_nodez00_bglt BgL_arg3585z00_1372;

							BgL_arg3585z00_1372 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1367))->BgL_valuez00);
							{	/* Cnst/node.scm 132 */
								BgL_nodez00_bglt BgL_res3732z00_1904;

								{	/* Cnst/node.scm 132 */
									obj_t BgL_method3361z00_1879;

									{	/* Cnst/node.scm 132 */
										BgL_objectz00_bglt BgL_objz00_1880;

										BgL_objz00_1880 =
											(BgL_objectz00_bglt) (BgL_arg3585z00_1372);
										{	/* Cnst/node.scm 132 */
											long BgL_objzd2classzd2numz00_1881;

											BgL_objzd2classzd2numz00_1881 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1880);
											{	/* Cnst/node.scm 132 */
												obj_t BgL_arg2643z00_1882;

												BgL_arg2643z00_1882 =
													PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
													(int) (((long) 1)));
												{	/* Cnst/node.scm 132 */
													obj_t BgL_arrayz00_1884;

													int BgL_offsetz00_1885;

													BgL_arrayz00_1884 = BgL_arg2643z00_1882;
													BgL_offsetz00_1885 =
														(int) (BgL_objzd2classzd2numz00_1881);
													{	/* Cnst/node.scm 132 */
														long BgL_offsetz00_1886;

														BgL_offsetz00_1886 =
															((long) (BgL_offsetz00_1885) - OBJECT_TYPE);
														{	/* Cnst/node.scm 132 */
															long BgL_modz00_1887;

															{	/* Cnst/node.scm 132 */
																int BgL_arg2645z00_1888;

																BgL_arg2645z00_1888 = (int) (((long) 16));
																{	/* Cnst/node.scm 132 */
																	long BgL_auxz00_4036;

																	BgL_auxz00_4036 =
																		(long) (BgL_arg2645z00_1888);
																	BgL_modz00_1887 =
																		(BgL_offsetz00_1886 / BgL_auxz00_4036);
															}}
															{	/* Cnst/node.scm 132 */
																long BgL_restz00_1889;

																{	/* Cnst/node.scm 132 */
																	int BgL_arg2644z00_1890;

																	BgL_arg2644z00_1890 = (int) (((long) 16));
																	{	/* Cnst/node.scm 132 */
																		long BgL_auxz00_4040;

																		BgL_auxz00_4040 =
																			(long) (BgL_arg2644z00_1890);
																		BgL_restz00_1889 =
																			(BgL_offsetz00_1886 % BgL_auxz00_4040);
																}}
																{	/* Cnst/node.scm 132 */

																	BgL_method3361z00_1879 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1884,
																			(int) (BgL_modz00_1887)),
																		(int) (BgL_restz00_1889));
									}}}}}}}}
									BgL_res3732z00_1904 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_1879)
										(BgL_method3361z00_1879, (obj_t) (BgL_arg3585z00_1372),
											BEOA));
								}
								BgL_arg3584z00_1371 = BgL_res3732z00_1904;
						}}
						((((BgL_setqz00_bglt) CREF(BgL_nodez00_1367))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3584z00_1371), BUNSPEC);
					}
					BgL_auxz00_4026 = BgL_nodez00_1367;
					return (obj_t) (BgL_auxz00_4026);
				}
			}
		}
	}



/* cnst!-cast3376 */
	obj_t BGl_cnstz12zd2cast3376zc0zzcnst_nodez00(obj_t BgL_envz00_2854,
		obj_t BgL_nodez00_2855)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 122 */
			{
				BgL_castz00_bglt BgL_nodez00_1360;

				{	/* Cnst/node.scm 123 */
					BgL_castz00_bglt BgL_auxz00_4054;

					BgL_nodez00_1360 = (BgL_castz00_bglt) (BgL_nodez00_2855);
					{	/* Cnst/node.scm 123 */
						BgL_nodez00_bglt BgL_arg3582z00_1848;

						BgL_arg3582z00_1848 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1360))->BgL_argz00);
						{	/* Cnst/node.scm 123 */
							BgL_nodez00_bglt BgL_res3729z00_1876;

							{	/* Cnst/node.scm 123 */
								obj_t BgL_method3361z00_1851;

								{	/* Cnst/node.scm 123 */
									BgL_objectz00_bglt BgL_objz00_1852;

									BgL_objz00_1852 = (BgL_objectz00_bglt) (BgL_arg3582z00_1848);
									{	/* Cnst/node.scm 123 */
										long BgL_objzd2classzd2numz00_1853;

										BgL_objzd2classzd2numz00_1853 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1852);
										{	/* Cnst/node.scm 123 */
											obj_t BgL_arg2643z00_1854;

											BgL_arg2643z00_1854 =
												PROCEDURE_REF(BGl_cnstz12zd2envzc0zzcnst_nodez00,
												(int) (((long) 1)));
											{	/* Cnst/node.scm 123 */
												obj_t BgL_arrayz00_1856;

												int BgL_offsetz00_1857;

												BgL_arrayz00_1856 = BgL_arg2643z00_1854;
												BgL_offsetz00_1857 =
													(int) (BgL_objzd2classzd2numz00_1853);
												{	/* Cnst/node.scm 123 */
													long BgL_offsetz00_1858;

													BgL_offsetz00_1858 =
														((long) (BgL_offsetz00_1857) - OBJECT_TYPE);
													{	/* Cnst/node.scm 123 */
														long BgL_modz00_1859;

														{	/* Cnst/node.scm 123 */
															int BgL_arg2645z00_1860;

															BgL_arg2645z00_1860 = (int) (((long) 16));
															{	/* Cnst/node.scm 123 */
																long BgL_auxz00_4064;

																BgL_auxz00_4064 = (long) (BgL_arg2645z00_1860);
																BgL_modz00_1859 =
																	(BgL_offsetz00_1858 / BgL_auxz00_4064);
														}}
														{	/* Cnst/node.scm 123 */
															long BgL_restz00_1861;

															{	/* Cnst/node.scm 123 */
																int BgL_arg2644z00_1862;

																BgL_arg2644z00_1862 = (int) (((long) 16));
																{	/* Cnst/node.scm 123 */
																	long BgL_auxz00_4068;

																	BgL_auxz00_4068 =
																		(long) (BgL_arg2644z00_1862);
																	BgL_restz00_1861 =
																		(BgL_offsetz00_1858 % BgL_auxz00_4068);
															}}
															{	/* Cnst/node.scm 123 */

																BgL_method3361z00_1851 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1856,
																		(int) (BgL_modz00_1859)),
																	(int) (BgL_restz00_1861));
								}}}}}}}}
								BgL_res3729z00_1876 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_1851)
									(BgL_method3361z00_1851, (obj_t) (BgL_arg3582z00_1848),
										BEOA));
							} BgL_res3729z00_1876;
					}}
					BgL_auxz00_4054 = BgL_nodez00_1360;
					return (obj_t) (BgL_auxz00_4054);
				}
			}
		}
	}



/* cnst!-extern3374 */
	obj_t BGl_cnstz12zd2extern3374zc0zzcnst_nodez00(obj_t BgL_envz00_2856,
		obj_t BgL_nodez00_2857)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 114 */
			{
				BgL_externz00_bglt BgL_nodez00_1353;

				{	/* Cnst/node.scm 115 */
					BgL_externz00_bglt BgL_auxz00_4081;

					BgL_nodez00_1353 = (BgL_externz00_bglt) (BgL_nodez00_2857);
					{	/* Cnst/node.scm 115 */
						obj_t BgL_arg3580z00_1845;

						BgL_arg3580z00_1845 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1353))->BgL_exprza2za2);
						BGl_cnstza2z12zb0zzcnst_nodez00(BgL_arg3580z00_1845);
					}
					BgL_auxz00_4081 = BgL_nodez00_1353;
					return (obj_t) (BgL_auxz00_4081);
				}
			}
		}
	}



/* cnst!-sequence3372 */
	obj_t BGl_cnstz12zd2sequence3372zc0zzcnst_nodez00(obj_t BgL_envz00_2858,
		obj_t BgL_nodez00_2859)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 106 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1346;

				{	/* Cnst/node.scm 107 */
					BgL_sequencez00_bglt BgL_auxz00_4086;

					BgL_nodez00_1346 = (BgL_sequencez00_bglt) (BgL_nodez00_2859);
					{	/* Cnst/node.scm 107 */
						obj_t BgL_arg3578z00_1842;

						BgL_arg3578z00_1842 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1346))->BgL_nodesz00);
						BGl_cnstza2z12zb0zzcnst_nodez00(BgL_arg3578z00_1842);
					}
					BgL_auxz00_4086 = BgL_nodez00_1346;
					return (obj_t) (BgL_auxz00_4086);
				}
			}
		}
	}



/* cnst!-closure3370 */
	obj_t BGl_cnstz12zd2closure3370zc0zzcnst_nodez00(obj_t BgL_envz00_2860,
		obj_t BgL_nodez00_2861)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 100 */
			{
				BgL_closurez00_bglt BgL_nodez00_1338;

				BgL_nodez00_1338 = (BgL_closurez00_bglt) (BgL_nodez00_2861);
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string3816z00zzcnst_nodez00, BGl_string3847z00zzcnst_nodez00,
					BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_1338)));
			}
		}
	}



/* cnst!-var3367 */
	obj_t BGl_cnstz12zd2var3367zc0zzcnst_nodez00(obj_t BgL_envz00_2862,
		obj_t BgL_nodez00_2863)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 94 */
			return (obj_t) ((BgL_varz00_bglt) (BgL_nodez00_2863));
		}
	}



/* cnst!-kwote3365 */
	obj_t BGl_cnstz12zd2kwote3365zc0zzcnst_nodez00(obj_t BgL_envz00_2864,
		obj_t BgL_nodez00_2865)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 59 */
			{
				BgL_kwotez00_bglt BgL_nodez00_1271;

				BgL_nodez00_1271 = (BgL_kwotez00_bglt) (BgL_nodez00_2865);
				{	/* Cnst/node.scm 62 */
					bool_t BgL_testz00_4097;

					{	/* Cnst/node.scm 62 */
						obj_t BgL_auxz00_4098;

						BgL_auxz00_4098 =
							(((BgL_kwotez00_bglt) CREF(BgL_nodez00_1271))->BgL_valuez00);
						BgL_testz00_4097 = SYMBOLP(BgL_auxz00_4098);
					}
					if (BgL_testz00_4097)
						{	/* Cnst/node.scm 63 */
							obj_t BgL_arg3517z00_1276;

							obj_t BgL_arg3518z00_1277;

							BgL_arg3517z00_1276 =
								(((BgL_kwotez00_bglt) CREF(BgL_nodez00_1271))->BgL_valuez00);
							{
								BgL_nodez00_bglt BgL_auxz00_4102;

								BgL_auxz00_4102 = (BgL_nodez00_bglt) (BgL_nodez00_1271);
								BgL_arg3518z00_1277 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4102))->BgL_locz00);
							}
							return
								(obj_t) (BGl_cnstzd2alloczd2symbolz00zzcnst_allocz00
								(BgL_arg3517z00_1276, BgL_arg3518z00_1277));
						}
					else
						{	/* Cnst/node.scm 64 */
							bool_t BgL_testz00_4107;

							{	/* Cnst/node.scm 64 */
								obj_t BgL_auxz00_4108;

								BgL_auxz00_4108 =
									(((BgL_kwotez00_bglt) CREF(BgL_nodez00_1271))->BgL_valuez00);
								BgL_testz00_4107 = KEYWORDP(BgL_auxz00_4108);
							}
							if (BgL_testz00_4107)
								{	/* Cnst/node.scm 65 */
									obj_t BgL_arg3520z00_1279;

									obj_t BgL_arg3521z00_1280;

									BgL_arg3520z00_1279 =
										(((BgL_kwotez00_bglt) CREF(BgL_nodez00_1271))->
										BgL_valuez00);
									{
										BgL_nodez00_bglt BgL_auxz00_4112;

										BgL_auxz00_4112 = (BgL_nodez00_bglt) (BgL_nodez00_1271);
										BgL_arg3521z00_1280 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_4112))->BgL_locz00);
									}
									return
										(obj_t) (BGl_cnstzd2alloczd2keywordz00zzcnst_allocz00
										(BgL_arg3520z00_1279, BgL_arg3521z00_1280));
								}
							else
								{	/* Cnst/node.scm 66 */
									bool_t BgL_testz00_4117;

									{	/* Cnst/node.scm 66 */
										obj_t BgL_auxz00_4118;

										BgL_auxz00_4118 =
											(((BgL_kwotez00_bglt) CREF(BgL_nodez00_1271))->
											BgL_valuez00);
										BgL_testz00_4117 = PAIRP(BgL_auxz00_4118);
									}
									if (BgL_testz00_4117)
										{	/* Cnst/node.scm 67 */
											obj_t BgL_arg3523z00_1282;

											obj_t BgL_arg3524z00_1283;

											BgL_arg3523z00_1282 =
												(((BgL_kwotez00_bglt) CREF(BgL_nodez00_1271))->
												BgL_valuez00);
											{
												BgL_nodez00_bglt BgL_auxz00_4122;

												BgL_auxz00_4122 = (BgL_nodez00_bglt) (BgL_nodez00_1271);
												BgL_arg3524z00_1283 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_4122))->
													BgL_locz00);
											}
											return
												(obj_t) (BGl_cnstzd2alloczd2listz00zzcnst_allocz00
												(BgL_arg3523z00_1282, BgL_arg3524z00_1283));
										}
									else
										{	/* Cnst/node.scm 68 */
											bool_t BgL_testz00_4127;

											{	/* Cnst/node.scm 68 */
												obj_t BgL_auxz00_4128;

												BgL_auxz00_4128 =
													(((BgL_kwotez00_bglt) CREF(BgL_nodez00_1271))->
													BgL_valuez00);
												BgL_testz00_4127 = VECTORP(BgL_auxz00_4128);
											}
											if (BgL_testz00_4127)
												{	/* Cnst/node.scm 69 */
													obj_t BgL_arg3526z00_1285;

													obj_t BgL_arg3527z00_1286;

													BgL_arg3526z00_1285 =
														(((BgL_kwotez00_bglt) CREF(BgL_nodez00_1271))->
														BgL_valuez00);
													{
														BgL_nodez00_bglt BgL_auxz00_4132;

														BgL_auxz00_4132 =
															(BgL_nodez00_bglt) (BgL_nodez00_1271);
														BgL_arg3527z00_1286 =
															(((BgL_nodez00_bglt) CREF(BgL_auxz00_4132))->
															BgL_locz00);
													}
													return
														(obj_t) (BGl_cnstzd2alloczd2vectorz00zzcnst_allocz00
														(BgL_arg3526z00_1285, BgL_arg3527z00_1286));
												}
											else
												{	/* Cnst/node.scm 70 */
													bool_t BgL_testz00_4137;

													{	/* Cnst/node.scm 70 */
														obj_t BgL_arg3567z00_1326;

														BgL_arg3567z00_1326 =
															(((BgL_kwotez00_bglt) CREF(BgL_nodez00_1271))->
															BgL_valuez00);
														BgL_testz00_4137 =
															BGL_HVECTORP(BgL_arg3567z00_1326);
													}
													if (BgL_testz00_4137)
														{	/* Cnst/node.scm 71 */
															obj_t BgL_arg3529z00_1288;

															obj_t BgL_arg3530z00_1289;

															BgL_arg3529z00_1288 =
																(((BgL_kwotez00_bglt) CREF(BgL_nodez00_1271))->
																BgL_valuez00);
															{
																BgL_nodez00_bglt BgL_auxz00_4141;

																BgL_auxz00_4141 =
																	(BgL_nodez00_bglt) (BgL_nodez00_1271);
																BgL_arg3530z00_1289 =
																	(((BgL_nodez00_bglt) CREF(BgL_auxz00_4141))->
																	BgL_locz00);
															}
															return
																(obj_t)
																(BGl_cnstzd2alloczd2homogenouszd2vectorzd2zzcnst_allocz00
																(BgL_arg3529z00_1288, BgL_arg3530z00_1289));
														}
													else
														{	/* Cnst/node.scm 72 */
															bool_t BgL_testz00_4146;

															{	/* Cnst/node.scm 72 */
																obj_t BgL_auxz00_4147;

																BgL_auxz00_4147 =
																	(((BgL_kwotez00_bglt)
																		CREF(BgL_nodez00_1271))->BgL_valuez00);
																BgL_testz00_4146 = STRINGP(BgL_auxz00_4147);
															}
															if (BgL_testz00_4146)
																{	/* Cnst/node.scm 73 */
																	obj_t BgL_arg3532z00_1291;

																	obj_t BgL_arg3533z00_1292;

																	BgL_arg3532z00_1291 =
																		(((BgL_kwotez00_bglt)
																			CREF(BgL_nodez00_1271))->BgL_valuez00);
																	{
																		BgL_nodez00_bglt BgL_auxz00_4151;

																		BgL_auxz00_4151 =
																			(BgL_nodez00_bglt) (BgL_nodez00_1271);
																		BgL_arg3533z00_1292 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_auxz00_4151))->BgL_locz00);
																	}
																	return
																		(obj_t)
																		(BGl_cnstzd2alloczd2stringz00zzcnst_allocz00
																		(BgL_arg3532z00_1291, BgL_arg3533z00_1292));
																}
															else
																{	/* Cnst/node.scm 74 */
																	bool_t BgL_testz00_4156;

																	{	/* Cnst/node.scm 74 */
																		obj_t BgL_auxz00_4157;

																		BgL_auxz00_4157 =
																			(((BgL_kwotez00_bglt)
																				CREF(BgL_nodez00_1271))->BgL_valuez00);
																		BgL_testz00_4156 =
																			UCS2_STRINGP(BgL_auxz00_4157);
																	}
																	if (BgL_testz00_4156)
																		{	/* Cnst/node.scm 75 */
																			obj_t BgL_arg3535z00_1294;

																			obj_t BgL_arg3536z00_1295;

																			BgL_arg3535z00_1294 =
																				(((BgL_kwotez00_bglt)
																					CREF(BgL_nodez00_1271))->
																				BgL_valuez00);
																			{
																				BgL_nodez00_bglt BgL_auxz00_4161;

																				BgL_auxz00_4161 =
																					(BgL_nodez00_bglt) (BgL_nodez00_1271);
																				BgL_arg3536z00_1295 =
																					(((BgL_nodez00_bglt)
																						CREF(BgL_auxz00_4161))->BgL_locz00);
																			}
																			return
																				(obj_t)
																				(BGl_cnstzd2alloczd2ucs2zd2stringzd2zzcnst_allocz00
																				(BgL_arg3535z00_1294,
																					BgL_arg3536z00_1295));
																		}
																	else
																		{	/* Cnst/node.scm 76 */
																			bool_t BgL_testz00_4166;

																			{	/* Cnst/node.scm 76 */
																				obj_t BgL_oz00_1809;

																				BgL_oz00_1809 =
																					(((BgL_kwotez00_bglt)
																						CREF(BgL_nodez00_1271))->
																					BgL_valuez00);
																				if (STRUCTP(BgL_oz00_1809))
																					{	/* Cnst/node.scm 76 */
																						BgL_testz00_4166 =
																							(STRUCT_KEY(BgL_oz00_1809) ==
																							CNST_TABLE_REF(((long) 6)));
																					}
																				else
																					{	/* Cnst/node.scm 76 */
																						BgL_testz00_4166 = ((bool_t) 0);
																					}
																			}
																			if (BgL_testz00_4166)
																				{	/* Cnst/node.scm 77 */
																					obj_t BgL_arg3538z00_1297;

																					obj_t BgL_arg3539z00_1298;

																					BgL_arg3538z00_1297 =
																						(((BgL_kwotez00_bglt)
																							CREF(BgL_nodez00_1271))->
																						BgL_valuez00);
																					{
																						BgL_nodez00_bglt BgL_auxz00_4174;

																						BgL_auxz00_4174 =
																							(BgL_nodez00_bglt)
																							(BgL_nodez00_1271);
																						BgL_arg3539z00_1298 =
																							(((BgL_nodez00_bglt)
																								CREF(BgL_auxz00_4174))->
																							BgL_locz00);
																					}
																					return
																						(obj_t)
																						(BGl_cnstzd2alloczd2tvectorz00zzcnst_allocz00
																						(BgL_arg3538z00_1297,
																							BgL_arg3539z00_1298));
																				}
																			else
																				{	/* Cnst/node.scm 78 */
																					bool_t BgL_testz00_4179;

																					{	/* Cnst/node.scm 78 */
																						bool_t BgL_testz00_4180;

																						{	/* Cnst/node.scm 78 */
																							obj_t BgL_auxz00_4181;

																							BgL_auxz00_4181 =
																								(((BgL_kwotez00_bglt)
																									CREF(BgL_nodez00_1271))->
																								BgL_valuez00);
																							BgL_testz00_4180 =
																								CHARP(BgL_auxz00_4181);
																						}
																						if (BgL_testz00_4180)
																							{	/* Cnst/node.scm 78 */
																								BgL_testz00_4179 = ((bool_t) 1);
																							}
																						else
																							{	/* Cnst/node.scm 78 */
																								if (INTEGERP(
																										(((BgL_kwotez00_bglt)
																												CREF
																												(BgL_nodez00_1271))->
																											BgL_valuez00)))
																									{	/* Cnst/node.scm 79 */
																										BgL_testz00_4179 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Cnst/node.scm 80 */
																										bool_t BgL_testz00_4187;

																										{	/* Cnst/node.scm 80 */
																											obj_t BgL_auxz00_4188;

																											BgL_auxz00_4188 =
																												(((BgL_kwotez00_bglt)
																													CREF
																													(BgL_nodez00_1271))->
																												BgL_valuez00);
																											BgL_testz00_4187 =
																												BOOLEANP
																												(BgL_auxz00_4188);
																										}
																										if (BgL_testz00_4187)
																											{	/* Cnst/node.scm 80 */
																												BgL_testz00_4179 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Cnst/node.scm 81 */
																												bool_t BgL_testz00_4191;

																												{	/* Cnst/node.scm 81 */
																													obj_t BgL_objz00_1825;

																													BgL_objz00_1825 =
																														(((BgL_kwotez00_bglt) CREF(BgL_nodez00_1271))->BgL_valuez00);
																													if (INTEGERP
																														(BgL_objz00_1825))
																														{	/* Cnst/node.scm 81 */
																															BgL_testz00_4191 =
																																((bool_t) 1);
																														}
																													else
																														{	/* Cnst/node.scm 81 */
																															BgL_testz00_4191 =
																																REALP
																																(BgL_objz00_1825);
																														}
																												}
																												if (BgL_testz00_4191)
																													{	/* Cnst/node.scm 81 */
																														BgL_testz00_4179 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Cnst/node.scm 82 */
																														bool_t
																															BgL_testz00_4196;
																														{	/* Cnst/node.scm 82 */
																															obj_t
																																BgL_auxz00_4197;
																															BgL_auxz00_4197 =
																																(((BgL_kwotez00_bglt) CREF(BgL_nodez00_1271))->BgL_valuez00);
																															BgL_testz00_4196 =
																																CNSTP
																																(BgL_auxz00_4197);
																														}
																														if (BgL_testz00_4196)
																															{	/* Cnst/node.scm 82 */
																																BgL_testz00_4179
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Cnst/node.scm 83 */
																																bool_t
																																	BgL_testz00_4200;
																																{	/* Cnst/node.scm 83 */
																																	obj_t
																																		BgL_auxz00_4201;
																																	BgL_auxz00_4201
																																		=
																																		(((BgL_kwotez00_bglt) CREF(BgL_nodez00_1271))->BgL_valuez00);
																																	BgL_testz00_4200
																																		=
																																		ELONGP
																																		(BgL_auxz00_4201);
																																}
																																if (BgL_testz00_4200)
																																	{	/* Cnst/node.scm 83 */
																																		BgL_testz00_4179
																																			=
																																			((bool_t)
																																			1);
																																	}
																																else
																																	{	/* Cnst/node.scm 84 */
																																		obj_t
																																			BgL_auxz00_4204;
																																		BgL_auxz00_4204
																																			=
																																			(((BgL_kwotez00_bglt) CREF(BgL_nodez00_1271))->BgL_valuez00);
																																		BgL_testz00_4179
																																			=
																																			LLONGP
																																			(BgL_auxz00_4204);
																																	}
																															}
																													}
																											}
																									}
																							}
																					}
																					if (BgL_testz00_4179)
																						{	/* Cnst/node.scm 85 */
																							obj_t BgL_arg3541z00_1300;

																							BgL_typez00_bglt
																								BgL_arg3542z00_1301;
																							obj_t BgL_arg3543z00_1302;

																							{
																								BgL_nodez00_bglt
																									BgL_auxz00_4207;
																								BgL_auxz00_4207 =
																									(BgL_nodez00_bglt)
																									(BgL_nodez00_1271);
																								BgL_arg3541z00_1300 =
																									(((BgL_nodez00_bglt)
																										CREF(BgL_auxz00_4207))->
																									BgL_locz00);
																							}
																							{
																								BgL_nodez00_bglt
																									BgL_auxz00_4210;
																								BgL_auxz00_4210 =
																									(BgL_nodez00_bglt)
																									(BgL_nodez00_1271);
																								BgL_arg3542z00_1301 =
																									(((BgL_nodez00_bglt)
																										CREF(BgL_auxz00_4210))->
																									BgL_typez00);
																							}
																							BgL_arg3543z00_1302 =
																								(((BgL_kwotez00_bglt)
																									CREF(BgL_nodez00_1271))->
																								BgL_valuez00);
																							return (obj_t)
																								(BGl_makezd2atomzd2zzast_nodez00
																								(BgL_arg3541z00_1300,
																									BgL_arg3542z00_1301,
																									BgL_arg3543z00_1302));
																						}
																					else
																						{	/* Cnst/node.scm 86 */
																							bool_t BgL_testz00_4216;

																							{	/* Cnst/node.scm 86 */
																								obj_t BgL_auxz00_4217;

																								BgL_auxz00_4217 =
																									(((BgL_kwotez00_bglt)
																										CREF(BgL_nodez00_1271))->
																									BgL_valuez00);
																								BgL_testz00_4216 =
																									STRUCTP(BgL_auxz00_4217);
																							}
																							if (BgL_testz00_4216)
																								{	/* Cnst/node.scm 87 */
																									obj_t BgL_arg3545z00_1304;

																									obj_t BgL_arg3546z00_1305;

																									BgL_arg3545z00_1304 =
																										(((BgL_kwotez00_bglt)
																											CREF(BgL_nodez00_1271))->
																										BgL_valuez00);
																									{
																										BgL_nodez00_bglt
																											BgL_auxz00_4221;
																										BgL_auxz00_4221 =
																											(BgL_nodez00_bglt)
																											(BgL_nodez00_1271);
																										BgL_arg3546z00_1305 =
																											(((BgL_nodez00_bglt)
																												CREF(BgL_auxz00_4221))->
																											BgL_locz00);
																									}
																									return
																										(obj_t)
																										(BGl_cnstzd2alloczd2structz00zzcnst_allocz00
																										(BgL_arg3545z00_1304,
																											BgL_arg3546z00_1305));
																								}
																							else
																								{	/* Cnst/node.scm 86 */
																									return
																										BGl_internalzd2errorzd2zztools_errorz00
																										(BGl_string3848z00zzcnst_nodez00,
																										BGl_string3849z00zzcnst_nodez00,
																										BGl_shapez00zztools_shapez00
																										((obj_t)
																											(BgL_nodez00_1271)));
																								}
																						}
																				}
																		}
																}
														}
												}
										}
								}
						}
				}
			}
		}
	}



/* cnst!-atom3363 */
	obj_t BGl_cnstz12zd2atom3363zc0zzcnst_nodez00(obj_t BgL_envz00_2866,
		obj_t BgL_nodez00_2867)
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 42 */
			{
				BgL_atomz00_bglt BgL_nodez00_1248;

				BgL_nodez00_1248 = (BgL_atomz00_bglt) (BgL_nodez00_2867);
				{	/* Cnst/node.scm 45 */
					bool_t BgL_testz00_4230;

					{	/* Cnst/node.scm 45 */
						obj_t BgL_auxz00_4231;

						BgL_auxz00_4231 =
							(((BgL_atomz00_bglt) CREF(BgL_nodez00_1248))->BgL_valuez00);
						BgL_testz00_4230 = KEYWORDP(BgL_auxz00_4231);
					}
					if (BgL_testz00_4230)
						{	/* Cnst/node.scm 46 */
							obj_t BgL_arg3499z00_1253;

							obj_t BgL_arg3500z00_1254;

							BgL_arg3499z00_1253 =
								(((BgL_atomz00_bglt) CREF(BgL_nodez00_1248))->BgL_valuez00);
							{
								BgL_nodez00_bglt BgL_auxz00_4235;

								BgL_auxz00_4235 = (BgL_nodez00_bglt) (BgL_nodez00_1248);
								BgL_arg3500z00_1254 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4235))->BgL_locz00);
							}
							return
								(obj_t) (BGl_cnstzd2alloczd2keywordz00zzcnst_allocz00
								(BgL_arg3499z00_1253, BgL_arg3500z00_1254));
						}
					else
						{	/* Cnst/node.scm 47 */
							bool_t BgL_testz00_4240;

							{	/* Cnst/node.scm 47 */
								obj_t BgL_auxz00_4241;

								BgL_auxz00_4241 =
									(((BgL_atomz00_bglt) CREF(BgL_nodez00_1248))->BgL_valuez00);
								BgL_testz00_4240 = UCS2_STRINGP(BgL_auxz00_4241);
							}
							if (BgL_testz00_4240)
								{	/* Cnst/node.scm 48 */
									obj_t BgL_arg3502z00_1256;

									obj_t BgL_arg3503z00_1257;

									BgL_arg3502z00_1256 =
										(((BgL_atomz00_bglt) CREF(BgL_nodez00_1248))->BgL_valuez00);
									{
										BgL_nodez00_bglt BgL_auxz00_4245;

										BgL_auxz00_4245 = (BgL_nodez00_bglt) (BgL_nodez00_1248);
										BgL_arg3503z00_1257 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_4245))->BgL_locz00);
									}
									return
										(obj_t) (BGl_cnstzd2alloczd2ucs2zd2stringzd2zzcnst_allocz00
										(BgL_arg3502z00_1256, BgL_arg3503z00_1257));
								}
							else
								{	/* Cnst/node.scm 49 */
									bool_t BgL_testz00_4250;

									{	/* Cnst/node.scm 49 */
										obj_t BgL_auxz00_4251;

										BgL_auxz00_4251 =
											(((BgL_atomz00_bglt) CREF(BgL_nodez00_1248))->
											BgL_valuez00);
										BgL_testz00_4250 = STRINGP(BgL_auxz00_4251);
									}
									if (BgL_testz00_4250)
										{	/* Cnst/node.scm 50 */
											obj_t BgL_arg3505z00_1259;

											obj_t BgL_arg3506z00_1260;

											BgL_arg3505z00_1259 =
												(((BgL_atomz00_bglt) CREF(BgL_nodez00_1248))->
												BgL_valuez00);
											{
												BgL_nodez00_bglt BgL_auxz00_4255;

												BgL_auxz00_4255 = (BgL_nodez00_bglt) (BgL_nodez00_1248);
												BgL_arg3506z00_1260 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_4255))->
													BgL_locz00);
											}
											return
												(obj_t) (BGl_cnstzd2alloczd2stringz00zzcnst_allocz00
												(BgL_arg3505z00_1259, BgL_arg3506z00_1260));
										}
									else
										{	/* Cnst/node.scm 51 */
											bool_t BgL_testz00_4260;

											{	/* Cnst/node.scm 51 */
												obj_t BgL_auxz00_4261;

												BgL_auxz00_4261 =
													(((BgL_atomz00_bglt) CREF(BgL_nodez00_1248))->
													BgL_valuez00);
												BgL_testz00_4260 = BIGNUMP(BgL_auxz00_4261);
											}
											if (BgL_testz00_4260)
												{	/* Cnst/node.scm 52 */
													obj_t BgL__ortest_3307z00_1262;

													{	/* Cnst/node.scm 52 */
														obj_t BgL_arg3508z00_1263;

														obj_t BgL_arg3509z00_1264;

														BgL_arg3508z00_1263 =
															(((BgL_atomz00_bglt) CREF(BgL_nodez00_1248))->
															BgL_valuez00);
														{
															BgL_nodez00_bglt BgL_auxz00_4265;

															BgL_auxz00_4265 =
																(BgL_nodez00_bglt) (BgL_nodez00_1248);
															BgL_arg3509z00_1264 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_4265))->
																BgL_locz00);
														}
														BgL__ortest_3307z00_1262 =
															BGl_cnstzd2alloczd2bignumz00zzcnst_allocz00
															(BgL_arg3508z00_1263, BgL_arg3509z00_1264);
													}
													if (CBOOL(BgL__ortest_3307z00_1262))
														{	/* Cnst/node.scm 52 */
															return BgL__ortest_3307z00_1262;
														}
													else
														{	/* Cnst/node.scm 52 */
															return (obj_t) (BgL_nodez00_1248);
														}
												}
											else
												{	/* Cnst/node.scm 51 */
													return (obj_t) (BgL_nodez00_1248);
												}
										}
								}
						}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcnst_nodez00()
	{
		AN_OBJECT;
		{	/* Cnst/node.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3850z00zzcnst_nodez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3850z00zzcnst_nodez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3850z00zzcnst_nodez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3850z00zzcnst_nodez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3850z00zzcnst_nodez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3850z00zzcnst_nodez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3850z00zzcnst_nodez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3850z00zzcnst_nodez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3850z00zzcnst_nodez00));
			BGl_modulezd2initializa7ationz75zzcnst_cachez00(((long) 182307917),
				BSTRING_TO_STRING(BGl_string3850z00zzcnst_nodez00));
			return
				BGl_modulezd2initializa7ationz75zzcnst_allocz00(((long) 355177025),
				BSTRING_TO_STRING(BGl_string3850z00zzcnst_nodez00));
		}
	}

#ifdef __cplusplus
}
#endif
