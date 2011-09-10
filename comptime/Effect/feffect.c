/*===========================================================================*/
/*   (Effect/feffect.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Effect/feffect.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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

	typedef struct BgL_funz00_bgl
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
	}             *BgL_funz00_bglt;

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

	typedef struct BgL_feffectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_readz00;
		obj_t BgL_writez00;
	}                 *BgL_feffectz00_bglt;

	typedef struct BgL_localzf2fromzf2_bgl
	{
		obj_t BgL_fromz00;
	}                      *BgL_localzf2fromzf2_bglt;

	typedef struct BgL_globalzf2fromzf2_bgl
	{
		obj_t BgL_fromz00;
	}                       *BgL_globalzf2fromzf2_bglt;


	static BgL_feffectz00_bglt
		BGl_dozd2funzd2effectz12z12zzeffect_feffectz00(BgL_variablez00_bglt);
	static obj_t BGl_bodyzd2effectz12zd2funcall3469z12zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_bodyzd2effectz12zd2atom3441z12zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_bodyzd2effectz12zd2select3451z12zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_globalzf2fromzf2zzeffect_cgraphz00;
	static obj_t BGl_bodyzd2effectz12zd2var3445z12zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_feffectz12z12zzeffect_feffectz00(obj_t);
	static obj_t BGl_bodyzd2effectz12zd2conditi3449z12zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	static bool_t BGl_mergezd2effectsz12zc0zzeffect_feffectz00(obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzeffect_feffectz00();
	static obj_t BGl_mergezd2callerz12zc0zzeffect_feffectz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_bodyzd2effectz12zd2boxzd2ref3461zc0zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__bodyzd2effectz12zd2default3438z12zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzeffect_feffectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_cgraphz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__feffectz12z12zzeffect_feffectz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzeffect_feffectz00();
	static BgL_feffectz00_bglt
		BGl_funzd2effectzd2globalz12z12zzeffect_feffectz00(BgL_globalz00_bglt);
	static obj_t BGl__bodyzd2effectz12zc0zzeffect_feffectz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_rempropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_bodyzd2effectz12zd2kwote3443z12zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__parsezd2effectzd2zzeffect_feffectz00(obj_t, obj_t);
	static obj_t BGl_bodyzd2effectz12zd2cast3465z12zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	static BgL_feffectz00_bglt
		BGl_za2effectzd2writezd2memza2z00zzeffect_feffectz00;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t
		BGl_bodyzd2effectz12zd2setzd2exzd23455z12zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	static BgL_feffectz00_bglt BGl_funzd2effectz12zc0zzeffect_feffectz00(obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_mergez12z12zzeffect_feffectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_bodyzd2effectz12zd2setq3447z12zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_bodyzd2effectz12zd2letzd2fun3479zc0zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzeffect_feffectz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static bool_t BGl_feffectzd2fixzd2pointz12z12zzeffect_feffectz00(obj_t);
	static obj_t BGl_bodyzd2effectz12zd2jumpzd2ex3457zc0zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_bodyzd2effectz12zd2letzd2var3481zc0zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_bodyzd2effectza2z12z62zzeffect_feffectz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzeffect_feffectz00 = BUNSPEC;
	static obj_t BGl_bodyzd2effectz12zd2boxzd2set3463zc0zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33620ze3z83zzeffect_feffectz00(obj_t);
	static obj_t BGl_bodyzd2effectz12zd2sequenc3467z12zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzeffect_feffectz00();
	extern obj_t BGl_localzf2fromzf2zzeffect_cgraphz00;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_bodyzd2effectz12zd2fail3453z12zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	static BgL_feffectz00_bglt
		BGl_funzd2effectzd2modulez12z12zzeffect_feffectz00(BgL_globalz00_bglt);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzeffect_feffectz00();
	static obj_t BGl_objectzd2displayzd2feffe3437z00zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_bodyzd2effectz12zd2makezd2bo3459zc0zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_printfz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static BgL_feffectz00_bglt
		BGl_za2effectzd2readzd2memza2z00zzeffect_feffectz00;
	extern BgL_feffectz00_bglt BGl_makezd2feffectzd2zzast_varz00(obj_t, obj_t);
	static obj_t BGl_bodyzd2effectz12zd2extern3477z12zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	static BgL_feffectz00_bglt
		BGl_funzd2effectzd2alienz12z12zzeffect_feffectz00(BgL_globalz00_bglt);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_bodyzd2effectz12zd2appzd2ly3471zc0zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_feffectz00_bglt
		BGl_bodyzd2effectz12zc0zzeffect_feffectz00(BgL_nodez00_bglt,
		BgL_feffectz00_bglt);
	static obj_t BGl_bodyzd2effectz12zd2app3474z12zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_feffectz00_bglt
		BGl_parsezd2effectzd2zzeffect_feffectz00(obj_t);
	extern obj_t BGl_feffectz00zzast_varz00;
	static BgL_feffectz00_bglt
		BGl_bodyzd2effectz12zd2default3438z12zzeffect_feffectz00(BgL_nodez00_bglt,
		BgL_feffectz00_bglt);
	static BgL_feffectz00_bglt BGl_za2effectzd2topza2zd2zzeffect_feffectz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzeffect_feffectz00();
	static obj_t __cnst[6];


	   
		 
		DEFINE_STRING(BGl_string3765z00zzeffect_feffectz00,
		BgL_bgl_string3765za700za7za7e3796za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string3766z00zzeffect_feffectz00,
		BgL_bgl_string3766za700za7za7e3797za7, "Illegal `effect' pragma", 23);
	      DEFINE_STRING(BGl_string3767z00zzeffect_feffectz00,
		BgL_bgl_string3767za700za7za7e3798za7, "body-effect!", 12);
	      DEFINE_STRING(BGl_string3768z00zzeffect_feffectz00,
		BgL_bgl_string3768za700za7za7e3799za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3770z00zzeffect_feffectz00,
		BgL_bgl_string3770za700za7za7e3800za7, "object-display", 14);
	      DEFINE_STRING(BGl_string3791z00zzeffect_feffectz00,
		BgL_bgl_string3791za700za7za7e3801za7, "#|feffect: ~a ~a|", 17);
	      DEFINE_STRING(BGl_string3792z00zzeffect_feffectz00,
		BgL_bgl_string3792za700za7za7e3802za7, "effect_feffect", 14);
	      DEFINE_STRING(BGl_string3793z00zzeffect_feffectz00,
		BgL_bgl_string3793za700za7za7e3803za7,
		"body-effect!-default3438 (static export) write read (memory) top ", 65);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_bodyzd2effectz12zd2default3438zd2envzc0zzeffect_feffectz00,
		BgL_bgl__bodyza7d2effectza713804z00,
		BGl__bodyzd2effectz12zd2default3438z12zzeffect_feffectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_parsezd2effectzd2envz00zzeffect_feffectz00,
		BgL_bgl__parseza7d2effectza73805z00,
		BGl__parsezd2effectzd2zzeffect_feffectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_feffectz12zd2envzc0zzeffect_feffectz00,
		BgL_bgl__feffectza712za712za7za73806z00,
		BGl__feffectz12z12zzeffect_feffectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
		BgL_bgl__bodyza7d2effectza713807z00,
		BGl__bodyzd2effectz12zc0zzeffect_feffectz00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_objectzd2displayzd2envz00zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3769z00zzeffect_feffectz00,
		BgL_bgl_objectza7d2display3808za7, va_generic_entry,
		BGl_objectzd2displayzd2feffe3437z00zzeffect_feffectz00, BUNSPEC, -2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3771z00zzeffect_feffectz00,
		BgL_bgl_bodyza7d2effectza7123809z00,
		BGl_bodyzd2effectz12zd2atom3441z12zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3772z00zzeffect_feffectz00,
		BgL_bgl_bodyza7d2effectza7123810z00,
		BGl_bodyzd2effectz12zd2kwote3443z12zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3773z00zzeffect_feffectz00,
		BgL_bgl_bodyza7d2effectza7123811z00,
		BGl_bodyzd2effectz12zd2var3445z12zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3774z00zzeffect_feffectz00,
		BgL_bgl_bodyza7d2effectza7123812z00,
		BGl_bodyzd2effectz12zd2setq3447z12zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3775z00zzeffect_feffectz00,
		BgL_bgl_bodyza7d2effectza7123813z00,
		BGl_bodyzd2effectz12zd2conditi3449z12zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3776z00zzeffect_feffectz00,
		BgL_bgl_bodyza7d2effectza7123814z00,
		BGl_bodyzd2effectz12zd2select3451z12zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3777z00zzeffect_feffectz00,
		BgL_bgl_bodyza7d2effectza7123815z00,
		BGl_bodyzd2effectz12zd2fail3453z12zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3778z00zzeffect_feffectz00,
		BgL_bgl_bodyza7d2effectza7123816z00,
		BGl_bodyzd2effectz12zd2setzd2exzd23455z12zzeffect_feffectz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3780z00zzeffect_feffectz00,
		BgL_bgl_bodyza7d2effectza7123817z00,
		BGl_bodyzd2effectz12zd2makezd2bo3459zc0zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3779z00zzeffect_feffectz00,
		BgL_bgl_bodyza7d2effectza7123818z00,
		BGl_bodyzd2effectz12zd2jumpzd2ex3457zc0zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3781z00zzeffect_feffectz00,
		BgL_bgl_bodyza7d2effectza7123819z00,
		BGl_bodyzd2effectz12zd2boxzd2ref3461zc0zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3782z00zzeffect_feffectz00,
		BgL_bgl_bodyza7d2effectza7123820z00,
		BGl_bodyzd2effectz12zd2boxzd2set3463zc0zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3783z00zzeffect_feffectz00,
		BgL_bgl_bodyza7d2effectza7123821z00,
		BGl_bodyzd2effectz12zd2cast3465z12zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3784z00zzeffect_feffectz00,
		BgL_bgl_bodyza7d2effectza7123822z00,
		BGl_bodyzd2effectz12zd2sequenc3467z12zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3785z00zzeffect_feffectz00,
		BgL_bgl_bodyza7d2effectza7123823z00,
		BGl_bodyzd2effectz12zd2funcall3469z12zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3786z00zzeffect_feffectz00,
		BgL_bgl_bodyza7d2effectza7123824z00,
		BGl_bodyzd2effectz12zd2appzd2ly3471zc0zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3787z00zzeffect_feffectz00,
		BgL_bgl_bodyza7d2effectza7123825z00,
		BGl_bodyzd2effectz12zd2app3474z12zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3788z00zzeffect_feffectz00,
		BgL_bgl_bodyza7d2effectza7123826z00,
		BGl_bodyzd2effectz12zd2extern3477z12zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3790z00zzeffect_feffectz00,
		BgL_bgl_bodyza7d2effectza7123827z00,
		BGl_bodyzd2effectz12zd2letzd2var3481zc0zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3789z00zzeffect_feffectz00,
		BgL_bgl_bodyza7d2effectza7123828z00,
		BGl_bodyzd2effectz12zd2letzd2fun3479zc0zzeffect_feffectz00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzeffect_feffectz00(long
		BgL_checksumz00_2518, char *BgL_fromz00_2519)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzeffect_feffectz00))
				{
					BGl_requirezd2initializa7ationz75zzeffect_feffectz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzeffect_feffectz00();
					BGl_cnstzd2initzd2zzeffect_feffectz00();
					BGl_importedzd2moduleszd2initz00zzeffect_feffectz00();
					BGl_genericzd2initzd2zzeffect_feffectz00();
					BGl_methodzd2initzd2zzeffect_feffectz00();
					BGl_toplevelzd2initzd2zzeffect_feffectz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzeffect_feffectz00()
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 16 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"effect_feffect");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"effect_feffect");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"effect_feffect");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"effect_feffect");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"effect_feffect");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"effect_feffect");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"effect_feffect");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzeffect_feffectz00()
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 16 */
			{	/* Effect/feffect.scm 16 */
				obj_t BgL_cportz00_2506;

				BgL_cportz00_2506 =
					bgl_open_input_string(BGl_string3793z00zzeffect_feffectz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2507;

					BgL_iz00_2507 = ((long) 5);
				BgL_loopz00_2508:
					if ((BgL_iz00_2507 == ((long) -1)))
						{	/* Effect/feffect.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Effect/feffect.scm 16 */
							{	/* Effect/feffect.scm 16 */
								obj_t BgL_arg3795z00_2510;

								{	/* Effect/feffect.scm 16 */

									{	/* Effect/feffect.scm 16 */
										obj_t BgL_locationz00_2512;

										BgL_locationz00_2512 = BBOOL(((bool_t) 0));
										{	/* Effect/feffect.scm 16 */

											BgL_arg3795z00_2510 =
												BGl_readz00zz__readerz00(BgL_cportz00_2506,
												BgL_locationz00_2512);
										}
									}
								}
								{	/* Effect/feffect.scm 16 */
									int BgL_auxz00_2542;

									BgL_auxz00_2542 = (int) (BgL_iz00_2507);
									CNST_TABLE_SET(BgL_auxz00_2542, BgL_arg3795z00_2510);
							}}
							{	/* Effect/feffect.scm 16 */
								int BgL_auxz00_2513;

								BgL_auxz00_2513 = (int) ((BgL_iz00_2507 - ((long) 1)));
								{
									long BgL_iz00_2547;

									BgL_iz00_2547 = (long) (BgL_auxz00_2513);
									BgL_iz00_2507 = BgL_iz00_2547;
									goto BgL_loopz00_2508;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzeffect_feffectz00()
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 16 */
			BGl_za2effectzd2topza2zd2zzeffect_feffectz00 =
				BGl_makezd2feffectzd2zzast_varz00(CNST_TABLE_REF(((long) 0)),
				CNST_TABLE_REF(((long) 0)));
			BGl_za2effectzd2readzd2memza2z00zzeffect_feffectz00 =
				BGl_makezd2feffectzd2zzast_varz00(CNST_TABLE_REF(((long) 1)), BNIL);
			BGl_za2effectzd2writezd2memza2z00zzeffect_feffectz00 =
				BGl_makezd2feffectzd2zzast_varz00(BNIL, CNST_TABLE_REF(((long) 1)));
			return BUNSPEC;
		}
	}



/* feffect! */
	BGL_EXPORTED_DEF obj_t BGl_feffectz12z12zzeffect_feffectz00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 32 */
			{
				obj_t BgL_l3409z00_845;

				BgL_l3409z00_845 = BgL_globalsz00_1;
			BgL_zc3anonymousza33482ze3z83_846:
				if (PAIRP(BgL_l3409z00_845))
					{	/* Effect/feffect.scm 33 */
						{	/* Effect/feffect.scm 33 */
							obj_t BgL_arg3484z00_848;

							BgL_arg3484z00_848 = CAR(BgL_l3409z00_845);
							BGl_funzd2effectzd2modulez12z12zzeffect_feffectz00(
								(BgL_globalz00_bglt) (BgL_arg3484z00_848));
						}
						{
							obj_t BgL_l3409z00_2561;

							BgL_l3409z00_2561 = CDR(BgL_l3409z00_845);
							BgL_l3409z00_845 = BgL_l3409z00_2561;
							goto BgL_zc3anonymousza33482ze3z83_846;
						}
					}
				else
					{	/* Effect/feffect.scm 33 */
						((bool_t) 1);
					}
			}
			return
				BBOOL(BGl_feffectzd2fixzd2pointz12z12zzeffect_feffectz00
				(BgL_globalsz00_1));
		}
	}



/* _feffect! */
	obj_t BGl__feffectz12z12zzeffect_feffectz00(obj_t BgL_envz00_2398,
		obj_t BgL_globalsz00_2399)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 32 */
			return BGl_feffectz12z12zzeffect_feffectz00(BgL_globalsz00_2399);
		}
	}



/* feffect-fix-point! */
	bool_t BGl_feffectzd2fixzd2pointz12z12zzeffect_feffectz00(obj_t
		BgL_globalsz00_2)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 39 */
			{	/* Effect/feffect.scm 40 */
				obj_t BgL_changedz00_851;

				BgL_changedz00_851 = MAKE_CELL(BTRUE);
				{
					obj_t BgL_varz00_863;

					{

					BgL_zc3anonymousza33486ze3z83_854:
						if (CBOOL(CELL_REF(BgL_changedz00_851)))
							{	/* Effect/feffect.scm 54 */
								CELL_SET(BgL_changedz00_851, BFALSE);
								{
									obj_t BgL_l3417z00_856;

									BgL_l3417z00_856 = BgL_globalsz00_2;
								BgL_zc3anonymousza33487ze3z83_857:
									if (PAIRP(BgL_l3417z00_856))
										{	/* Effect/feffect.scm 57 */
											BgL_varz00_863 = CAR(BgL_l3417z00_856);
											{	/* Effect/feffect.scm 47 */

												if (BGl_iszd2azf3z21zz__objectz00(BgL_varz00_863,
														BGl_localzf2fromzf2zzeffect_cgraphz00))
													{	/* Effect/feffect.scm 50 */
														obj_t BgL_g3413z00_868;

														{	/* Effect/feffect.scm 50 */
															BgL_localzf2fromzf2_bglt BgL_obj3262z00_1599;

															BgL_obj3262z00_1599 =
																(BgL_localzf2fromzf2_bglt) (BgL_varz00_863);
															{
																obj_t BgL_auxz00_2573;

																{	/* Effect/feffect.scm 50 */
																	BgL_objectz00_bglt BgL_auxz00_2574;

																	BgL_auxz00_2574 =
																		(BgL_objectz00_bglt) (BgL_obj3262z00_1599);
																	BgL_auxz00_2573 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_2574);
																}
																BgL_g3413z00_868 =
																	(((BgL_localzf2fromzf2_bglt)
																		CREF(BgL_auxz00_2573))->BgL_fromz00);
															}
														}
														{
															obj_t BgL_l3411z00_870;

															BgL_l3411z00_870 = BgL_g3413z00_868;
														BgL_zc3anonymousza33493ze3z83_871:
															if (PAIRP(BgL_l3411z00_870))
																{	/* Effect/feffect.scm 50 */
																	BGl_mergezd2callerz12zc0zzeffect_feffectz00
																		(BgL_changedz00_851, BgL_varz00_863,
																		CAR(BgL_l3411z00_870));
																	{
																		obj_t BgL_l3411z00_2582;

																		BgL_l3411z00_2582 = CDR(BgL_l3411z00_870);
																		BgL_l3411z00_870 = BgL_l3411z00_2582;
																		goto BgL_zc3anonymousza33493ze3z83_871;
																	}
																}
															else
																{	/* Effect/feffect.scm 50 */
																	((bool_t) 1);
																}
														}
													}
												else
													{	/* Effect/feffect.scm 49 */
														if (BGl_iszd2azf3z21zz__objectz00(BgL_varz00_863,
																BGl_globalzf2fromzf2zzeffect_cgraphz00))
															{	/* Effect/feffect.scm 52 */
																obj_t BgL_g3416z00_877;

																{	/* Effect/feffect.scm 52 */
																	BgL_globalzf2fromzf2_bglt BgL_obj3318z00_1604;

																	BgL_obj3318z00_1604 =
																		(BgL_globalzf2fromzf2_bglt)
																		(BgL_varz00_863);
																	{
																		obj_t BgL_auxz00_2587;

																		{	/* Effect/feffect.scm 52 */
																			BgL_objectz00_bglt BgL_auxz00_2588;

																			BgL_auxz00_2588 =
																				(BgL_objectz00_bglt)
																				(BgL_obj3318z00_1604);
																			BgL_auxz00_2587 =
																				BGL_OBJECT_WIDENING(BgL_auxz00_2588);
																		}
																		BgL_g3416z00_877 =
																			(((BgL_globalzf2fromzf2_bglt)
																				CREF(BgL_auxz00_2587))->BgL_fromz00);
																	}
																}
																{
																	obj_t BgL_l3414z00_879;

																	BgL_l3414z00_879 = BgL_g3416z00_877;
																BgL_zc3anonymousza33498ze3z83_880:
																	if (PAIRP(BgL_l3414z00_879))
																		{	/* Effect/feffect.scm 52 */
																			BGl_mergezd2callerz12zc0zzeffect_feffectz00
																				(BgL_changedz00_851, BgL_varz00_863,
																				CAR(BgL_l3414z00_879));
																			{
																				obj_t BgL_l3414z00_2596;

																				BgL_l3414z00_2596 =
																					CDR(BgL_l3414z00_879);
																				BgL_l3414z00_879 = BgL_l3414z00_2596;
																				goto BgL_zc3anonymousza33498ze3z83_880;
																			}
																		}
																	else
																		{	/* Effect/feffect.scm 52 */
																			((bool_t) 1);
																		}
																}
															}
														else
															{	/* Effect/feffect.scm 51 */
																((bool_t) 0);
															}
													}
											}
											{
												obj_t BgL_l3417z00_2599;

												BgL_l3417z00_2599 = CDR(BgL_l3417z00_856);
												BgL_l3417z00_856 = BgL_l3417z00_2599;
												goto BgL_zc3anonymousza33487ze3z83_857;
											}
										}
									else
										{	/* Effect/feffect.scm 57 */
											((bool_t) 1);
										}
								}
								goto BgL_zc3anonymousza33486ze3z83_854;
							}
						else
							{	/* Effect/feffect.scm 54 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}
	}



/* merge-caller! */
	obj_t BGl_mergezd2callerz12zc0zzeffect_feffectz00(obj_t BgL_changedz00_2503,
		obj_t BgL_varz00_2502, obj_t BgL_fz00_885)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 46 */
			{	/* Effect/feffect.scm 43 */
				obj_t BgL_efz00_887;

				obj_t BgL_etz00_888;

				{	/* Effect/feffect.scm 43 */
					BgL_funz00_bglt BgL_obj2985z00_1609;

					{	/* Effect/feffect.scm 43 */
						BgL_variablez00_bglt BgL_obj2768z00_1608;

						BgL_obj2768z00_1608 = (BgL_variablez00_bglt) (BgL_fz00_885);
						BgL_obj2985z00_1609 =
							(BgL_funz00_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj2768z00_1608))->
								BgL_valuez00));
					}
					BgL_efz00_887 =
						(((BgL_funz00_bglt) CREF(BgL_obj2985z00_1609))->BgL_effectz00);
				}
				{	/* Effect/feffect.scm 44 */
					BgL_funz00_bglt BgL_obj2985z00_1611;

					{	/* Effect/feffect.scm 44 */
						BgL_variablez00_bglt BgL_obj2768z00_1610;

						BgL_obj2768z00_1610 = (BgL_variablez00_bglt) (BgL_varz00_2502);
						BgL_obj2985z00_1611 =
							(BgL_funz00_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj2768z00_1610))->
								BgL_valuez00));
					}
					BgL_etz00_888 =
						(((BgL_funz00_bglt) CREF(BgL_obj2985z00_1611))->BgL_effectz00);
				}
				{	/* Effect/feffect.scm 45 */
					bool_t BgL_testz00_2609;

					{	/* Effect/feffect.scm 45 */
						obj_t BgL_obj3244z00_1612;

						BgL_obj3244z00_1612 = BgL_efz00_887;
						BgL_testz00_2609 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj3244z00_1612,
							BGl_feffectz00zzast_varz00);
					}
					if (BgL_testz00_2609)
						{	/* Effect/feffect.scm 45 */
							BFALSE;
						}
					else
						{	/* Effect/feffect.scm 45 */
							BgL_efz00_887 =
								(obj_t) (BGl_za2effectzd2topza2zd2zzeffect_feffectz00);
						}
				}
				{	/* Effect/feffect.scm 46 */
					obj_t BgL_auxz00_2504;

					{	/* Effect/feffect.scm 46 */
						bool_t BgL__ortest_3374z00_890;

						BgL__ortest_3374z00_890 =
							BGl_mergezd2effectsz12zc0zzeffect_feffectz00(BgL_etz00_888,
							BgL_efz00_887);
						if (BgL__ortest_3374z00_890)
							{	/* Effect/feffect.scm 46 */
								BgL_auxz00_2504 = BBOOL(BgL__ortest_3374z00_890);
							}
						else
							{	/* Effect/feffect.scm 46 */
								BgL_auxz00_2504 = CELL_REF(BgL_changedz00_2503);
							}
					}
					return CELL_SET(BgL_changedz00_2503, BgL_auxz00_2504);
				}
			}
		}
	}



/* parse-effect */
	BGL_EXPORTED_DEF BgL_feffectz00_bglt
		BGl_parsezd2effectzd2zzeffect_feffectz00(obj_t BgL_propz00_5)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 79 */
			{	/* Effect/feffect.scm 80 */
				BgL_feffectz00_bglt BgL_ez00_895;

				BgL_ez00_895 = BGl_makezd2feffectzd2zzast_varz00(BNIL, BNIL);
				{	/* Effect/feffect.scm 81 */
					obj_t BgL_g3381z00_896;

					BgL_g3381z00_896 = CDR(BgL_propz00_5);
					{
						obj_t BgL_vz00_898;

						{	/* Effect/feffect.scm 81 */
							obj_t BgL_auxz00_2617;

							BgL_vz00_898 = BgL_g3381z00_896;
						BgL_zc3anonymousza33506ze3z83_899:
							if (NULLP(BgL_vz00_898))
								{	/* Effect/feffect.scm 82 */
									BgL_auxz00_2617 = (obj_t) (BgL_ez00_895);
								}
							else
								{

									{	/* Effect/feffect.scm 84 */
										obj_t BgL_ezd21650zd2_906;

										BgL_ezd21650zd2_906 = CAR(BgL_vz00_898);
										if (PAIRP(BgL_ezd21650zd2_906))
											{	/* Effect/feffect.scm 84 */
												obj_t BgL_cdrzd21655zd2_908;

												BgL_cdrzd21655zd2_908 = CDR(BgL_ezd21650zd2_906);
												if (
													(CAR(BgL_ezd21650zd2_906) ==
														CNST_TABLE_REF(((long) 2))))
													{	/* Effect/feffect.scm 84 */
														if (PAIRP(BgL_cdrzd21655zd2_908))
															{	/* Effect/feffect.scm 84 */
																if (NULLP(CDR(BgL_cdrzd21655zd2_908)))
																	{	/* Effect/feffect.scm 84 */
																		obj_t BgL_arg3512z00_912;

																		BgL_arg3512z00_912 =
																			CAR(BgL_cdrzd21655zd2_908);
																		((((BgL_feffectz00_bglt)
																					CREF(BgL_ez00_895))->BgL_readz00) =
																			((obj_t) BgL_arg3512z00_912), BUNSPEC);
																		{
																			obj_t BgL_vz00_2636;

																			BgL_vz00_2636 = CDR(BgL_vz00_898);
																			BgL_vz00_898 = BgL_vz00_2636;
																			goto BgL_zc3anonymousza33506ze3z83_899;
																		}
																	}
																else
																	{	/* Effect/feffect.scm 84 */
																	BgL_tagzd21649zd2_905:
																		BgL_auxz00_2617 =
																			BGl_userzd2errorzd2zztools_errorz00
																			(BGl_string3765z00zzeffect_feffectz00,
																			BGl_string3766z00zzeffect_feffectz00,
																			BgL_vz00_898, BNIL);
																	}
															}
														else
															{	/* Effect/feffect.scm 84 */
																goto BgL_tagzd21649zd2_905;
															}
													}
												else
													{	/* Effect/feffect.scm 84 */
														if (
															(CAR(BgL_ezd21650zd2_906) ==
																CNST_TABLE_REF(((long) 3))))
															{	/* Effect/feffect.scm 84 */
																if (PAIRP(BgL_cdrzd21655zd2_908))
																	{	/* Effect/feffect.scm 84 */
																		if (NULLP(CDR(BgL_cdrzd21655zd2_908)))
																			{	/* Effect/feffect.scm 84 */
																				obj_t BgL_arg3517z00_918;

																				BgL_arg3517z00_918 =
																					CAR(BgL_cdrzd21655zd2_908);
																				((((BgL_feffectz00_bglt)
																							CREF(BgL_ez00_895))->
																						BgL_writez00) =
																					((obj_t) BgL_arg3517z00_918),
																					BUNSPEC);
																				{
																					obj_t BgL_vz00_2650;

																					BgL_vz00_2650 = CDR(BgL_vz00_898);
																					BgL_vz00_898 = BgL_vz00_2650;
																					goto
																						BgL_zc3anonymousza33506ze3z83_899;
																				}
																			}
																		else
																			{	/* Effect/feffect.scm 84 */
																				goto BgL_tagzd21649zd2_905;
																			}
																	}
																else
																	{	/* Effect/feffect.scm 84 */
																		goto BgL_tagzd21649zd2_905;
																	}
															}
														else
															{	/* Effect/feffect.scm 84 */
																goto BgL_tagzd21649zd2_905;
															}
													}
											}
										else
											{	/* Effect/feffect.scm 84 */
												goto BgL_tagzd21649zd2_905;
											}
									}
								}
							return (BgL_feffectz00_bglt) (BgL_auxz00_2617);
						}
					}
				}
			}
		}
	}



/* _parse-effect */
	obj_t BGl__parsezd2effectzd2zzeffect_feffectz00(obj_t BgL_envz00_2400,
		obj_t BgL_propz00_2401)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 79 */
			return
				(obj_t) (BGl_parsezd2effectzd2zzeffect_feffectz00(BgL_propz00_2401));
		}
	}



/* merge-effects! */
	bool_t BGl_mergezd2effectsz12zc0zzeffect_feffectz00(obj_t BgL_f1z00_6,
		obj_t BgL_f2z00_7)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 100 */
			{	/* Effect/feffect.scm 137 */
				obj_t BgL_changedz00_928;

				BgL_changedz00_928 = MAKE_CELL(BFALSE);
				{	/* Effect/feffect.scm 136 */
					obj_t BgL_arg3526z00_931;

					{	/* Effect/feffect.scm 136 */
						obj_t BgL_arg3527z00_932;

						obj_t BgL_arg3528z00_933;

						{
							BgL_feffectz00_bglt BgL_auxz00_2655;

							BgL_auxz00_2655 = (BgL_feffectz00_bglt) (BgL_f1z00_6);
							BgL_arg3527z00_932 =
								(((BgL_feffectz00_bglt) CREF(BgL_auxz00_2655))->BgL_readz00);
						}
						{
							BgL_feffectz00_bglt BgL_auxz00_2658;

							BgL_auxz00_2658 = (BgL_feffectz00_bglt) (BgL_f2z00_7);
							BgL_arg3528z00_933 =
								(((BgL_feffectz00_bglt) CREF(BgL_auxz00_2658))->BgL_readz00);
						}
						BgL_arg3526z00_931 =
							BGl_mergez12z12zzeffect_feffectz00(BgL_changedz00_928,
							BgL_arg3527z00_932, BgL_arg3528z00_933);
					}
					{
						BgL_feffectz00_bglt BgL_auxz00_2662;

						BgL_auxz00_2662 = (BgL_feffectz00_bglt) (BgL_f1z00_6);
						((((BgL_feffectz00_bglt) CREF(BgL_auxz00_2662))->BgL_readz00) =
							((obj_t) BgL_arg3526z00_931), BUNSPEC);
					}
				}
				{	/* Effect/feffect.scm 137 */
					obj_t BgL_arg3529z00_934;

					{	/* Effect/feffect.scm 137 */
						obj_t BgL_arg3530z00_935;

						obj_t BgL_arg3531z00_936;

						{
							BgL_feffectz00_bglt BgL_auxz00_2665;

							BgL_auxz00_2665 = (BgL_feffectz00_bglt) (BgL_f1z00_6);
							BgL_arg3530z00_935 =
								(((BgL_feffectz00_bglt) CREF(BgL_auxz00_2665))->BgL_writez00);
						}
						{
							BgL_feffectz00_bglt BgL_auxz00_2668;

							BgL_auxz00_2668 = (BgL_feffectz00_bglt) (BgL_f2z00_7);
							BgL_arg3531z00_936 =
								(((BgL_feffectz00_bglt) CREF(BgL_auxz00_2668))->BgL_writez00);
						}
						BgL_arg3529z00_934 =
							BGl_mergez12z12zzeffect_feffectz00(BgL_changedz00_928,
							BgL_arg3530z00_935, BgL_arg3531z00_936);
					}
					{
						BgL_feffectz00_bglt BgL_auxz00_2672;

						BgL_auxz00_2672 = (BgL_feffectz00_bglt) (BgL_f1z00_6);
						((((BgL_feffectz00_bglt) CREF(BgL_auxz00_2672))->BgL_writez00) =
							((obj_t) BgL_arg3529z00_934), BUNSPEC);
					}
				}
				return CBOOL(CELL_REF(BgL_changedz00_928));
			}
		}
	}



/* merge! */
	obj_t BGl_mergez12z12zzeffect_feffectz00(obj_t BgL_changedz00_2498,
		obj_t BgL_e1z00_967, obj_t BgL_e2z00_968)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 135 */
			{
				obj_t BgL_l1z00_937;

				obj_t BgL_l2z00_938;

				if ((BgL_e1z00_967 == CNST_TABLE_REF(((long) 0))))
					{	/* Effect/feffect.scm 127 */
						return BgL_e1z00_967;
					}
				else
					{	/* Effect/feffect.scm 127 */
						if (NULLP(BgL_e2z00_968))
							{	/* Effect/feffect.scm 129 */
								return BgL_e1z00_967;
							}
						else
							{	/* Effect/feffect.scm 129 */
								if ((BgL_e2z00_968 == CNST_TABLE_REF(((long) 0))))
									{	/* Effect/feffect.scm 131 */
										CELL_SET(BgL_changedz00_2498, BTRUE);
										return CNST_TABLE_REF(((long) 0));
									}
								else
									{	/* Effect/feffect.scm 131 */
										BgL_l1z00_937 = BgL_e1z00_967;
										BgL_l2z00_938 = BgL_e2z00_968;
										if (NULLP(BgL_l1z00_937))
											{	/* Effect/feffect.scm 104 */
												if (PAIRP(BgL_l2z00_938))
													{	/* Effect/feffect.scm 105 */
														CELL_SET(BgL_changedz00_2498, BTRUE);
													}
												else
													{	/* Effect/feffect.scm 105 */
														BFALSE;
													}
												return BgL_l2z00_938;
											}
										else
											{	/* Effect/feffect.scm 104 */
												if (NULLP(BgL_l2z00_938))
													{	/* Effect/feffect.scm 108 */
														return BgL_l1z00_937;
													}
												else
													{	/* Effect/feffect.scm 111 */
														obj_t BgL_kz00_943;

														{	/* Effect/feffect.scm 111 */

															{	/* Effect/feffect.scm 111 */

																BgL_kz00_943 =
																	BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
															}
														}
														{
															obj_t BgL_l3419z00_945;

															BgL_l3419z00_945 = BgL_l1z00_937;
														BgL_zc3anonymousza33536ze3z83_946:
															if (PAIRP(BgL_l3419z00_945))
																{	/* Effect/feffect.scm 112 */
																	BGl_putpropz12z12zz__r4_symbols_6_4z00(CAR
																		(BgL_l3419z00_945), BgL_kz00_943, BTRUE);
																	{
																		obj_t BgL_l3419z00_2696;

																		BgL_l3419z00_2696 = CDR(BgL_l3419z00_945);
																		BgL_l3419z00_945 = BgL_l3419z00_2696;
																		goto BgL_zc3anonymousza33536ze3z83_946;
																	}
																}
															else
																{	/* Effect/feffect.scm 112 */
																	((bool_t) 1);
																}
														}
														{
															obj_t BgL_l3421z00_952;

															BgL_l3421z00_952 = BgL_l2z00_938;
														BgL_zc3anonymousza33539ze3z83_953:
															if (PAIRP(BgL_l3421z00_952))
																{	/* Effect/feffect.scm 115 */
																	{	/* Effect/feffect.scm 116 */
																		obj_t BgL_sz00_955;

																		BgL_sz00_955 = CAR(BgL_l3421z00_952);
																		if (CBOOL
																			(BGl_getpropz00zz__r4_symbols_6_4z00
																				(BgL_sz00_955, BgL_kz00_943)))
																			{	/* Effect/feffect.scm 116 */
																				BFALSE;
																			}
																		else
																			{	/* Effect/feffect.scm 116 */
																				CELL_SET(BgL_changedz00_2498, BTRUE);
																				BgL_l1z00_937 =
																					MAKE_PAIR(BgL_sz00_955,
																					BgL_l1z00_937);
																			}
																	}
																	{
																		obj_t BgL_l3421z00_2705;

																		BgL_l3421z00_2705 = CDR(BgL_l3421z00_952);
																		BgL_l3421z00_952 = BgL_l3421z00_2705;
																		goto BgL_zc3anonymousza33539ze3z83_953;
																	}
																}
															else
																{	/* Effect/feffect.scm 115 */
																	((bool_t) 1);
																}
														}
														{
															obj_t BgL_l3423z00_960;

															BgL_l3423z00_960 = BgL_l1z00_937;
														BgL_zc3anonymousza33543ze3z83_961:
															if (PAIRP(BgL_l3423z00_960))
																{	/* Effect/feffect.scm 121 */
																	BGl_rempropz12z12zz__r4_symbols_6_4z00(CAR
																		(BgL_l3423z00_960), BgL_kz00_943);
																	{
																		obj_t BgL_l3423z00_2711;

																		BgL_l3423z00_2711 = CDR(BgL_l3423z00_960);
																		BgL_l3423z00_960 = BgL_l3423z00_2711;
																		goto BgL_zc3anonymousza33543ze3z83_961;
																	}
																}
															else
																{	/* Effect/feffect.scm 121 */
																	((bool_t) 1);
																}
														}
														return BgL_l1z00_937;
													}
											}
									}
							}
					}
			}
		}
	}



/* fun-effect! */
	BgL_feffectz00_bglt BGl_funzd2effectz12zc0zzeffect_feffectz00(obj_t
		BgL_vz00_8)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 143 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_vz00_8, BGl_globalz00zzast_varz00))
				{	/* Effect/feffect.scm 144 */
					return
						BGl_funzd2effectzd2globalz12z12zzeffect_feffectz00(
						(BgL_globalz00_bglt) (BgL_vz00_8));
				}
			else
				{	/* Effect/feffect.scm 146 */
					BgL_localz00_bglt BgL_vz00_1669;

					BgL_vz00_1669 = (BgL_localz00_bglt) (BgL_vz00_8);
					return
						BGl_dozd2funzd2effectz12z12zzeffect_feffectz00(
						(BgL_variablez00_bglt) (BgL_vz00_1669));
				}
		}
	}



/* fun-effect-global! */
	BgL_feffectz00_bglt
		BGl_funzd2effectzd2globalz12z12zzeffect_feffectz00(BgL_globalz00_bglt
		BgL_vz00_9)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 151 */
			{	/* Effect/feffect.scm 152 */
				bool_t BgL_testz00_2720;

				if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
							(((BgL_globalz00_bglt) CREF(BgL_vz00_9))->BgL_importz00),
							CNST_TABLE_REF(((long) 4)))))
					{	/* Effect/feffect.scm 153 */
						bool_t BgL_testz00_2726;

						{	/* Effect/feffect.scm 153 */
							BgL_valuez00_bglt BgL_arg3554z00_979;

							{
								BgL_variablez00_bglt BgL_auxz00_2727;

								BgL_auxz00_2727 = (BgL_variablez00_bglt) (BgL_vz00_9);
								BgL_arg3554z00_979 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_2727))->
									BgL_valuez00);
							}
							{	/* Effect/feffect.scm 153 */
								obj_t BgL_obj3110z00_1672;

								BgL_obj3110z00_1672 = (obj_t) (BgL_arg3554z00_979);
								BgL_testz00_2726 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj3110z00_1672,
									BGl_sfunz00zzast_varz00);
						}}
						if (BgL_testz00_2726)
							{	/* Effect/feffect.scm 153 */
								BgL_testz00_2720 = ((bool_t) 0);
							}
						else
							{	/* Effect/feffect.scm 153 */
								BgL_testz00_2720 = ((bool_t) 1);
							}
					}
				else
					{	/* Effect/feffect.scm 152 */
						BgL_testz00_2720 = ((bool_t) 1);
					}
				if (BgL_testz00_2720)
					{	/* Effect/feffect.scm 152 */
						return
							BGl_funzd2effectzd2alienz12z12zzeffect_feffectz00(BgL_vz00_9);
					}
				else
					{	/* Effect/feffect.scm 152 */
						return
							BGl_funzd2effectzd2modulez12z12zzeffect_feffectz00(BgL_vz00_9);
					}
			}
		}
	}



/* fun-effect-alien! */
	BgL_feffectz00_bglt
		BGl_funzd2effectzd2alienz12z12zzeffect_feffectz00(BgL_globalz00_bglt
		BgL_gz00_10)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 162 */
			{	/* Effect/feffect.scm 163 */
				BgL_valuez00_bglt BgL_instance3382z00_982;

				{
					BgL_variablez00_bglt BgL_auxz00_2734;

					BgL_auxz00_2734 = (BgL_variablez00_bglt) (BgL_gz00_10);
					BgL_instance3382z00_982 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2734))->BgL_valuez00);
				}
				{	/* Effect/feffect.scm 164 */
					bool_t BgL_testz00_2737;

					{	/* Effect/feffect.scm 164 */
						obj_t BgL_arg3558z00_984;

						{
							BgL_funz00_bglt BgL_auxz00_2738;

							BgL_auxz00_2738 = (BgL_funz00_bglt) (BgL_instance3382z00_982);
							BgL_arg3558z00_984 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_2738))->BgL_effectz00);
						}
						BgL_testz00_2737 =
							BGl_iszd2azf3z21zz__objectz00(BgL_arg3558z00_984,
							BGl_feffectz00zzast_varz00);
					}
					if (BgL_testz00_2737)
						{	/* Effect/feffect.scm 164 */
							BFALSE;
						}
					else
						{
							obj_t BgL_auxz00_2744;

							BgL_funz00_bglt BgL_auxz00_2742;

							BgL_auxz00_2744 =
								(obj_t) (BGl_za2effectzd2topza2zd2zzeffect_feffectz00);
							BgL_auxz00_2742 = (BgL_funz00_bglt) (BgL_instance3382z00_982);
							((((BgL_funz00_bglt) CREF(BgL_auxz00_2742))->BgL_effectz00) =
								((obj_t) BgL_auxz00_2744), BUNSPEC);
						}
				}
				{	/* Effect/feffect.scm 166 */
					BgL_funz00_bglt BgL_obj2985z00_1678;

					BgL_obj2985z00_1678 = (BgL_funz00_bglt) (BgL_instance3382z00_982);
					return
						(BgL_feffectz00_bglt) (
						(((BgL_funz00_bglt) CREF(BgL_obj2985z00_1678))->BgL_effectz00));
				}
			}
		}
	}



/* fun-effect-module! */
	BgL_feffectz00_bglt
		BGl_funzd2effectzd2modulez12z12zzeffect_feffectz00(BgL_globalz00_bglt
		BgL_vz00_11)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 171 */
			{	/* Effect/feffect.scm 172 */
				BgL_valuez00_bglt BgL_funz00_985;

				{
					BgL_variablez00_bglt BgL_auxz00_2750;

					BgL_auxz00_2750 = (BgL_variablez00_bglt) (BgL_vz00_11);
					BgL_funz00_985 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2750))->BgL_valuez00);
				}
				{	/* Effect/feffect.scm 172 */
					obj_t BgL_efz00_986;

					{
						BgL_funz00_bglt BgL_auxz00_2753;

						BgL_auxz00_2753 = (BgL_funz00_bglt) (BgL_funz00_985);
						BgL_efz00_986 =
							(((BgL_funz00_bglt) CREF(BgL_auxz00_2753))->BgL_effectz00);
					}
					{	/* Effect/feffect.scm 173 */

						{	/* Effect/feffect.scm 176 */
							bool_t BgL_testz00_2756;

							{	/* Effect/feffect.scm 176 */
								obj_t BgL_obj3244z00_1681;

								BgL_obj3244z00_1681 = (obj_t) (BgL_funz00_985);
								BgL_testz00_2756 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj3244z00_1681,
									BGl_feffectz00zzast_varz00);
							}
							if (BgL_testz00_2756)
								{	/* Effect/feffect.scm 176 */
									return (BgL_feffectz00_bglt) (BgL_efz00_986);
								}
							else
								{	/* Effect/feffect.scm 176 */
									return
										BGl_dozd2funzd2effectz12z12zzeffect_feffectz00(
										(BgL_variablez00_bglt) (BgL_vz00_11));
								}
						}
					}
				}
			}
		}
	}



/* do-fun-effect! */
	BgL_feffectz00_bglt
		BGl_dozd2funzd2effectz12z12zzeffect_feffectz00(BgL_variablez00_bglt
		BgL_vz00_13)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 195 */
			{	/* Effect/feffect.scm 196 */
				BgL_valuez00_bglt BgL_instance3384z00_988;

				BgL_instance3384z00_988 =
					(((BgL_variablez00_bglt) CREF(BgL_vz00_13))->BgL_valuez00);
				{	/* Effect/feffect.scm 197 */
					bool_t BgL_testz00_2763;

					{	/* Effect/feffect.scm 197 */
						obj_t BgL_arg3564z00_993;

						{
							BgL_funz00_bglt BgL_auxz00_2764;

							BgL_auxz00_2764 = (BgL_funz00_bglt) (BgL_instance3384z00_988);
							BgL_arg3564z00_993 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_2764))->BgL_effectz00);
						}
						BgL_testz00_2763 =
							BGl_iszd2azf3z21zz__objectz00(BgL_arg3564z00_993,
							BGl_feffectz00zzast_varz00);
					}
					if (BgL_testz00_2763)
						{	/* Effect/feffect.scm 198 */
							BgL_funz00_bglt BgL_obj2985z00_1685;

							BgL_obj2985z00_1685 = (BgL_funz00_bglt) (BgL_instance3384z00_988);
							return
								(BgL_feffectz00_bglt) (
								(((BgL_funz00_bglt) CREF(BgL_obj2985z00_1685))->BgL_effectz00));
						}
					else
						{	/* Effect/feffect.scm 197 */
							{	/* Effect/feffect.scm 200 */
								BgL_feffectz00_bglt BgL_arg3561z00_990;

								BgL_arg3561z00_990 =
									BGl_makezd2feffectzd2zzast_varz00(BNIL, BNIL);
								{
									obj_t BgL_auxz00_2774;

									BgL_funz00_bglt BgL_auxz00_2772;

									BgL_auxz00_2774 = (obj_t) (BgL_arg3561z00_990);
									BgL_auxz00_2772 = (BgL_funz00_bglt) (BgL_instance3384z00_988);
									((((BgL_funz00_bglt) CREF(BgL_auxz00_2772))->BgL_effectz00) =
										((obj_t) BgL_auxz00_2774), BUNSPEC);
								}
							}
							{	/* Effect/feffect.scm 201 */
								obj_t BgL_arg3562z00_991;

								obj_t BgL_arg3563z00_992;

								{
									BgL_sfunz00_bglt BgL_auxz00_2777;

									BgL_auxz00_2777 =
										(BgL_sfunz00_bglt) (BgL_instance3384z00_988);
									BgL_arg3562z00_991 =
										(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2777))->BgL_bodyz00);
								}
								{
									BgL_funz00_bglt BgL_auxz00_2780;

									BgL_auxz00_2780 = (BgL_funz00_bglt) (BgL_instance3384z00_988);
									BgL_arg3563z00_992 =
										(((BgL_funz00_bglt) CREF(BgL_auxz00_2780))->BgL_effectz00);
								}
								{	/* Effect/feffect.scm 201 */
									BgL_feffectz00_bglt BgL_res3696z00_1717;

									{	/* Effect/feffect.scm 201 */
										BgL_nodez00_bglt BgL_nodez00_1690;

										BgL_feffectz00_bglt BgL_effectz00_1691;

										BgL_nodez00_1690 = (BgL_nodez00_bglt) (BgL_arg3562z00_991);
										BgL_effectz00_1691 =
											(BgL_feffectz00_bglt) (BgL_arg3563z00_992);
										{	/* Effect/feffect.scm 201 */
											obj_t BgL_method3439z00_1692;

											{	/* Effect/feffect.scm 201 */
												BgL_objectz00_bglt BgL_objz00_1693;

												BgL_objz00_1693 =
													(BgL_objectz00_bglt) (BgL_nodez00_1690);
												{	/* Effect/feffect.scm 201 */
													long BgL_objzd2classzd2numz00_1694;

													BgL_objzd2classzd2numz00_1694 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1693);
													{	/* Effect/feffect.scm 201 */
														obj_t BgL_arg2643z00_1695;

														BgL_arg2643z00_1695 =
															PROCEDURE_REF
															(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
															(int) (((long) 1)));
														{	/* Effect/feffect.scm 201 */
															obj_t BgL_arrayz00_1697;

															int BgL_offsetz00_1698;

															BgL_arrayz00_1697 = BgL_arg2643z00_1695;
															BgL_offsetz00_1698 =
																(int) (BgL_objzd2classzd2numz00_1694);
															{	/* Effect/feffect.scm 201 */
																long BgL_offsetz00_1699;

																BgL_offsetz00_1699 =
																	((long) (BgL_offsetz00_1698) - OBJECT_TYPE);
																{	/* Effect/feffect.scm 201 */
																	long BgL_modz00_1700;

																	{	/* Effect/feffect.scm 201 */
																		int BgL_arg2645z00_1701;

																		BgL_arg2645z00_1701 = (int) (((long) 16));
																		{	/* Effect/feffect.scm 201 */
																			long BgL_auxz00_2793;

																			BgL_auxz00_2793 =
																				(long) (BgL_arg2645z00_1701);
																			BgL_modz00_1700 =
																				(BgL_offsetz00_1699 / BgL_auxz00_2793);
																	}}
																	{	/* Effect/feffect.scm 201 */
																		long BgL_restz00_1702;

																		{	/* Effect/feffect.scm 201 */
																			int BgL_arg2644z00_1703;

																			BgL_arg2644z00_1703 = (int) (((long) 16));
																			{	/* Effect/feffect.scm 201 */
																				long BgL_auxz00_2797;

																				BgL_auxz00_2797 =
																					(long) (BgL_arg2644z00_1703);
																				BgL_restz00_1702 =
																					(BgL_offsetz00_1699 %
																					BgL_auxz00_2797);
																		}}
																		{	/* Effect/feffect.scm 201 */

																			BgL_method3439z00_1692 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1697,
																					(int) (BgL_modz00_1700)),
																				(int) (BgL_restz00_1702));
											}}}}}}}}
											BgL_res3696z00_1717 =
												(BgL_feffectz00_bglt) (PROCEDURE_ENTRY
												(BgL_method3439z00_1692) (BgL_method3439z00_1692,
													(obj_t) (BgL_nodez00_1690),
													(obj_t) (BgL_effectz00_1691), BEOA));
									}}
									return BgL_res3696z00_1717;
								}
							}
						}
				}
			}
		}
	}



/* body-effect*! */
	obj_t BGl_bodyzd2effectza2z12z62zzeffect_feffectz00(obj_t BgL_nodeza2za2_58,
		obj_t BgL_effectz00_59)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 373 */
			{
				obj_t BgL_l3434z00_995;

				BgL_l3434z00_995 = BgL_nodeza2za2_58;
			BgL_zc3anonymousza33565ze3z83_996:
				if (PAIRP(BgL_l3434z00_995))
					{	/* Effect/feffect.scm 374 */
						{	/* Effect/feffect.scm 374 */
							obj_t BgL_nz00_998;

							BgL_nz00_998 = CAR(BgL_l3434z00_995);
							{	/* Effect/feffect.scm 374 */
								BgL_feffectz00_bglt BgL_res3699z00_1747;

								{	/* Effect/feffect.scm 374 */
									BgL_nodez00_bglt BgL_nodez00_1720;

									BgL_feffectz00_bglt BgL_effectz00_1721;

									BgL_nodez00_1720 = (BgL_nodez00_bglt) (BgL_nz00_998);
									BgL_effectz00_1721 = (BgL_feffectz00_bglt) (BgL_effectz00_59);
									{	/* Effect/feffect.scm 374 */
										obj_t BgL_method3439z00_1722;

										{	/* Effect/feffect.scm 374 */
											BgL_objectz00_bglt BgL_objz00_1723;

											BgL_objz00_1723 = (BgL_objectz00_bglt) (BgL_nodez00_1720);
											{	/* Effect/feffect.scm 374 */
												long BgL_objzd2classzd2numz00_1724;

												BgL_objzd2classzd2numz00_1724 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1723);
												{	/* Effect/feffect.scm 374 */
													obj_t BgL_arg2643z00_1725;

													BgL_arg2643z00_1725 =
														PROCEDURE_REF
														(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
														(int) (((long) 1)));
													{	/* Effect/feffect.scm 374 */
														obj_t BgL_arrayz00_1727;

														int BgL_offsetz00_1728;

														BgL_arrayz00_1727 = BgL_arg2643z00_1725;
														BgL_offsetz00_1728 =
															(int) (BgL_objzd2classzd2numz00_1724);
														{	/* Effect/feffect.scm 374 */
															long BgL_offsetz00_1729;

															BgL_offsetz00_1729 =
																((long) (BgL_offsetz00_1728) - OBJECT_TYPE);
															{	/* Effect/feffect.scm 374 */
																long BgL_modz00_1730;

																{	/* Effect/feffect.scm 374 */
																	int BgL_arg2645z00_1731;

																	BgL_arg2645z00_1731 = (int) (((long) 16));
																	{	/* Effect/feffect.scm 374 */
																		long BgL_auxz00_2822;

																		BgL_auxz00_2822 =
																			(long) (BgL_arg2645z00_1731);
																		BgL_modz00_1730 =
																			(BgL_offsetz00_1729 / BgL_auxz00_2822);
																}}
																{	/* Effect/feffect.scm 374 */
																	long BgL_restz00_1732;

																	{	/* Effect/feffect.scm 374 */
																		int BgL_arg2644z00_1733;

																		BgL_arg2644z00_1733 = (int) (((long) 16));
																		{	/* Effect/feffect.scm 374 */
																			long BgL_auxz00_2826;

																			BgL_auxz00_2826 =
																				(long) (BgL_arg2644z00_1733);
																			BgL_restz00_1732 =
																				(BgL_offsetz00_1729 % BgL_auxz00_2826);
																	}}
																	{	/* Effect/feffect.scm 374 */

																		BgL_method3439z00_1722 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1727,
																				(int) (BgL_modz00_1730)),
																			(int) (BgL_restz00_1732));
										}}}}}}}}
										BgL_res3699z00_1747 =
											(BgL_feffectz00_bglt) (PROCEDURE_ENTRY
											(BgL_method3439z00_1722) (BgL_method3439z00_1722,
												(obj_t) (BgL_nodez00_1720),
												(obj_t) (BgL_effectz00_1721), BEOA));
								}} BgL_res3699z00_1747;
						}}
						{
							obj_t BgL_l3434z00_2838;

							BgL_l3434z00_2838 = CDR(BgL_l3434z00_995);
							BgL_l3434z00_995 = BgL_l3434z00_2838;
							goto BgL_zc3anonymousza33565ze3z83_996;
						}
					}
				else
					{	/* Effect/feffect.scm 374 */
						((bool_t) 1);
					}
			}
			return BgL_effectz00_59;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzeffect_feffectz00()
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 16 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_bodyzd2effectz12zd2default3438zd2envzc0zzeffect_feffectz00,
				BGl_nodez00zzast_nodez00, BGl_string3767z00zzeffect_feffectz00);
		}
	}



/* body-effect! */
	BgL_feffectz00_bglt
		BGl_bodyzd2effectz12zc0zzeffect_feffectz00(BgL_nodez00_bglt BgL_nodez00_14,
		BgL_feffectz00_bglt BgL_effectz00_15)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 210 */
			{	/* Effect/feffect.scm 210 */
				obj_t BgL_method3439z00_1749;

				{	/* Effect/feffect.scm 210 */
					BgL_objectz00_bglt BgL_objz00_1750;

					BgL_objz00_1750 = (BgL_objectz00_bglt) (BgL_nodez00_14);
					{	/* Effect/feffect.scm 210 */
						long BgL_objzd2classzd2numz00_1751;

						BgL_objzd2classzd2numz00_1751 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1750);
						{	/* Effect/feffect.scm 210 */
							obj_t BgL_arg2643z00_1752;

							BgL_arg2643z00_1752 =
								PROCEDURE_REF(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
								(int) (((long) 1)));
							{	/* Effect/feffect.scm 210 */
								obj_t BgL_arrayz00_1754;

								int BgL_offsetz00_1755;

								BgL_arrayz00_1754 = BgL_arg2643z00_1752;
								BgL_offsetz00_1755 = (int) (BgL_objzd2classzd2numz00_1751);
								{	/* Effect/feffect.scm 210 */
									long BgL_offsetz00_1756;

									BgL_offsetz00_1756 =
										((long) (BgL_offsetz00_1755) - OBJECT_TYPE);
									{	/* Effect/feffect.scm 210 */
										long BgL_modz00_1757;

										{	/* Effect/feffect.scm 210 */
											int BgL_arg2645z00_1758;

											BgL_arg2645z00_1758 = (int) (((long) 16));
											{	/* Effect/feffect.scm 210 */
												long BgL_auxz00_2849;

												BgL_auxz00_2849 = (long) (BgL_arg2645z00_1758);
												BgL_modz00_1757 =
													(BgL_offsetz00_1756 / BgL_auxz00_2849);
										}}
										{	/* Effect/feffect.scm 210 */
											long BgL_restz00_1759;

											{	/* Effect/feffect.scm 210 */
												int BgL_arg2644z00_1760;

												BgL_arg2644z00_1760 = (int) (((long) 16));
												{	/* Effect/feffect.scm 210 */
													long BgL_auxz00_2853;

													BgL_auxz00_2853 = (long) (BgL_arg2644z00_1760);
													BgL_restz00_1759 =
														(BgL_offsetz00_1756 % BgL_auxz00_2853);
											}}
											{	/* Effect/feffect.scm 210 */

												BgL_method3439z00_1749 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1754,
														(int) (BgL_modz00_1757)), (int) (BgL_restz00_1759));
				}}}}}}}}
				return
					(BgL_feffectz00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_1749)
					(BgL_method3439z00_1749, (obj_t) (BgL_nodez00_14),
						(obj_t) (BgL_effectz00_15), BEOA));
			}
		}
	}



/* _body-effect! */
	obj_t BGl__bodyzd2effectz12zc0zzeffect_feffectz00(obj_t BgL_envz00_2402,
		obj_t BgL_nodez00_2403, obj_t BgL_effectz00_2404)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 210 */
			return
				(obj_t) (BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
					(BgL_nodez00_bglt) (BgL_nodez00_2403),
					(BgL_feffectz00_bglt) (BgL_effectz00_2404)));
		}
	}



/* body-effect!-default3438 */
	BgL_feffectz00_bglt
		BGl_bodyzd2effectz12zd2default3438z12zzeffect_feffectz00(BgL_nodez00_bglt
		BgL_nodez00_16, BgL_feffectz00_bglt BgL_effectz00_17)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 16 */
			return
				(BgL_feffectz00_bglt) (BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long)
							5)), BGl_string3768z00zzeffect_feffectz00,
					(obj_t) (BgL_nodez00_16)));
		}
	}



/* _body-effect!-default3438 */
	obj_t BGl__bodyzd2effectz12zd2default3438z12zzeffect_feffectz00(obj_t
		BgL_envz00_2405, obj_t BgL_nodez00_2406, obj_t BgL_effectz00_2407)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 16 */
			return
				(obj_t) (BGl_bodyzd2effectz12zd2default3438z12zzeffect_feffectz00(
					(BgL_nodez00_bglt) (BgL_nodez00_2406),
					(BgL_feffectz00_bglt) (BgL_effectz00_2407)));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzeffect_feffectz00()
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2displayzd2envz00zz__objectz00, BGl_feffectz00zzast_varz00,
				BGl_proc3769z00zzeffect_feffectz00,
				BGl_string3770z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_atomz00zzast_nodez00, BGl_proc3771z00zzeffect_feffectz00,
				BGl_string3767z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_kwotez00zzast_nodez00, BGl_proc3772z00zzeffect_feffectz00,
				BGl_string3767z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_varz00zzast_nodez00, BGl_proc3773z00zzeffect_feffectz00,
				BGl_string3767z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_setqz00zzast_nodez00, BGl_proc3774z00zzeffect_feffectz00,
				BGl_string3767z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3775z00zzeffect_feffectz00,
				BGl_string3767z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_selectz00zzast_nodez00, BGl_proc3776z00zzeffect_feffectz00,
				BGl_string3767z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_failz00zzast_nodez00, BGl_proc3777z00zzeffect_feffectz00,
				BGl_string3767z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3778z00zzeffect_feffectz00,
				BGl_string3767z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3779z00zzeffect_feffectz00,
				BGl_string3767z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3780z00zzeffect_feffectz00,
				BGl_string3767z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3781z00zzeffect_feffectz00,
				BGl_string3767z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3782z00zzeffect_feffectz00,
				BGl_string3767z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_castz00zzast_nodez00, BGl_proc3783z00zzeffect_feffectz00,
				BGl_string3767z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_sequencez00zzast_nodez00, BGl_proc3784z00zzeffect_feffectz00,
				BGl_string3767z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_funcallz00zzast_nodez00, BGl_proc3785z00zzeffect_feffectz00,
				BGl_string3767z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3786z00zzeffect_feffectz00,
				BGl_string3767z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_appz00zzast_nodez00, BGl_proc3787z00zzeffect_feffectz00,
				BGl_string3767z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_externz00zzast_nodez00, BGl_proc3788z00zzeffect_feffectz00,
				BGl_string3767z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3789z00zzeffect_feffectz00,
				BGl_string3767z00zzeffect_feffectz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3790z00zzeffect_feffectz00,
				BGl_string3767z00zzeffect_feffectz00);
		}
	}



/* body-effect!-let-var3481 */
	obj_t BGl_bodyzd2effectz12zd2letzd2var3481zc0zzeffect_feffectz00(obj_t
		BgL_envz00_2430, obj_t BgL_nodez00_2431, obj_t BgL_effectz00_2432)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 363 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1574;

				BgL_feffectz00_bglt BgL_effectz00_1575;

				{	/* Effect/feffect.scm 364 */
					BgL_feffectz00_bglt BgL_auxz00_2898;

					BgL_nodez00_1574 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2431);
					BgL_effectz00_1575 = (BgL_feffectz00_bglt) (BgL_effectz00_2432);
					{	/* Effect/feffect.scm 365 */
						obj_t BgL_g3433z00_1579;

						BgL_g3433z00_1579 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1574))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3431z00_1581;

							BgL_l3431z00_1581 = BgL_g3433z00_1579;
						BgL_zc3anonymousza33688ze3z83_1582:
							if (PAIRP(BgL_l3431z00_1581))
								{	/* Effect/feffect.scm 365 */
									{	/* Effect/feffect.scm 366 */
										obj_t BgL_bindingz00_1584;

										BgL_bindingz00_1584 = CAR(BgL_l3431z00_1581);
										{	/* Effect/feffect.scm 366 */
											obj_t BgL_arg3690z00_1585;

											BgL_arg3690z00_1585 = CDR(BgL_bindingz00_1584);
											{	/* Effect/feffect.scm 366 */
												BgL_feffectz00_bglt BgL_res3759z00_2367;

												{	/* Effect/feffect.scm 366 */
													BgL_nodez00_bglt BgL_nodez00_2340;

													BgL_nodez00_2340 =
														(BgL_nodez00_bglt) (BgL_arg3690z00_1585);
													{	/* Effect/feffect.scm 366 */
														obj_t BgL_method3439z00_2342;

														{	/* Effect/feffect.scm 366 */
															BgL_objectz00_bglt BgL_objz00_2343;

															BgL_objz00_2343 =
																(BgL_objectz00_bglt) (BgL_nodez00_2340);
															{	/* Effect/feffect.scm 366 */
																long BgL_objzd2classzd2numz00_2344;

																BgL_objzd2classzd2numz00_2344 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2343);
																{	/* Effect/feffect.scm 366 */
																	obj_t BgL_arg2643z00_2345;

																	BgL_arg2643z00_2345 =
																		PROCEDURE_REF
																		(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
																		(int) (((long) 1)));
																	{	/* Effect/feffect.scm 366 */
																		obj_t BgL_arrayz00_2347;

																		int BgL_offsetz00_2348;

																		BgL_arrayz00_2347 = BgL_arg2643z00_2345;
																		BgL_offsetz00_2348 =
																			(int) (BgL_objzd2classzd2numz00_2344);
																		{	/* Effect/feffect.scm 366 */
																			long BgL_offsetz00_2349;

																			BgL_offsetz00_2349 =
																				(
																				(long) (BgL_offsetz00_2348) -
																				OBJECT_TYPE);
																			{	/* Effect/feffect.scm 366 */
																				long BgL_modz00_2350;

																				{	/* Effect/feffect.scm 366 */
																					int BgL_arg2645z00_2351;

																					BgL_arg2645z00_2351 =
																						(int) (((long) 16));
																					{	/* Effect/feffect.scm 366 */
																						long BgL_auxz00_2913;

																						BgL_auxz00_2913 =
																							(long) (BgL_arg2645z00_2351);
																						BgL_modz00_2350 =
																							(BgL_offsetz00_2349 /
																							BgL_auxz00_2913);
																				}}
																				{	/* Effect/feffect.scm 366 */
																					long BgL_restz00_2352;

																					{	/* Effect/feffect.scm 366 */
																						int BgL_arg2644z00_2353;

																						BgL_arg2644z00_2353 =
																							(int) (((long) 16));
																						{	/* Effect/feffect.scm 366 */
																							long BgL_auxz00_2917;

																							BgL_auxz00_2917 =
																								(long) (BgL_arg2644z00_2353);
																							BgL_restz00_2352 =
																								(BgL_offsetz00_2349 %
																								BgL_auxz00_2917);
																					}}
																					{	/* Effect/feffect.scm 366 */

																						BgL_method3439z00_2342 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2347,
																								(int) (BgL_modz00_2350)),
																							(int) (BgL_restz00_2352));
														}}}}}}}}
														BgL_res3759z00_2367 =
															(BgL_feffectz00_bglt) (PROCEDURE_ENTRY
															(BgL_method3439z00_2342) (BgL_method3439z00_2342,
																(obj_t) (BgL_nodez00_2340),
																(obj_t) (BgL_effectz00_1575), BEOA));
												}} BgL_res3759z00_2367;
									}}}
									{
										obj_t BgL_l3431z00_2929;

										BgL_l3431z00_2929 = CDR(BgL_l3431z00_1581);
										BgL_l3431z00_1581 = BgL_l3431z00_2929;
										goto BgL_zc3anonymousza33688ze3z83_1582;
									}
								}
							else
								{	/* Effect/feffect.scm 365 */
									((bool_t) 1);
								}
						}
					}
					{	/* Effect/feffect.scm 368 */
						BgL_nodez00_bglt BgL_arg3692z00_1588;

						BgL_arg3692z00_1588 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1574))->BgL_bodyz00);
						{	/* Effect/feffect.scm 368 */
							BgL_feffectz00_bglt BgL_res3762z00_2397;

							{	/* Effect/feffect.scm 368 */
								obj_t BgL_method3439z00_2372;

								{	/* Effect/feffect.scm 368 */
									BgL_objectz00_bglt BgL_objz00_2373;

									BgL_objz00_2373 = (BgL_objectz00_bglt) (BgL_arg3692z00_1588);
									{	/* Effect/feffect.scm 368 */
										long BgL_objzd2classzd2numz00_2374;

										BgL_objzd2classzd2numz00_2374 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2373);
										{	/* Effect/feffect.scm 368 */
											obj_t BgL_arg2643z00_2375;

											BgL_arg2643z00_2375 =
												PROCEDURE_REF
												(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
												(int) (((long) 1)));
											{	/* Effect/feffect.scm 368 */
												obj_t BgL_arrayz00_2377;

												int BgL_offsetz00_2378;

												BgL_arrayz00_2377 = BgL_arg2643z00_2375;
												BgL_offsetz00_2378 =
													(int) (BgL_objzd2classzd2numz00_2374);
												{	/* Effect/feffect.scm 368 */
													long BgL_offsetz00_2379;

													BgL_offsetz00_2379 =
														((long) (BgL_offsetz00_2378) - OBJECT_TYPE);
													{	/* Effect/feffect.scm 368 */
														long BgL_modz00_2380;

														{	/* Effect/feffect.scm 368 */
															int BgL_arg2645z00_2381;

															BgL_arg2645z00_2381 = (int) (((long) 16));
															{	/* Effect/feffect.scm 368 */
																long BgL_auxz00_2940;

																BgL_auxz00_2940 = (long) (BgL_arg2645z00_2381);
																BgL_modz00_2380 =
																	(BgL_offsetz00_2379 / BgL_auxz00_2940);
														}}
														{	/* Effect/feffect.scm 368 */
															long BgL_restz00_2382;

															{	/* Effect/feffect.scm 368 */
																int BgL_arg2644z00_2383;

																BgL_arg2644z00_2383 = (int) (((long) 16));
																{	/* Effect/feffect.scm 368 */
																	long BgL_auxz00_2944;

																	BgL_auxz00_2944 =
																		(long) (BgL_arg2644z00_2383);
																	BgL_restz00_2382 =
																		(BgL_offsetz00_2379 % BgL_auxz00_2944);
															}}
															{	/* Effect/feffect.scm 368 */

																BgL_method3439z00_2372 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2377,
																		(int) (BgL_modz00_2380)),
																	(int) (BgL_restz00_2382));
								}}}}}}}}
								BgL_res3762z00_2397 =
									(BgL_feffectz00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2372)
									(BgL_method3439z00_2372, (obj_t) (BgL_arg3692z00_1588),
										(obj_t) (BgL_effectz00_1575), BEOA));
							}
							BgL_auxz00_2898 = BgL_res3762z00_2397;
					}}
					return (obj_t) (BgL_auxz00_2898);
				}
			}
		}
	}



/* body-effect!-let-fun3479 */
	obj_t BGl_bodyzd2effectz12zd2letzd2fun3479zc0zzeffect_feffectz00(obj_t
		BgL_envz00_2433, obj_t BgL_nodez00_2434, obj_t BgL_effectz00_2435)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 355 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1558;

				BgL_feffectz00_bglt BgL_effectz00_1559;

				{	/* Effect/feffect.scm 356 */
					BgL_feffectz00_bglt BgL_auxz00_2959;

					BgL_nodez00_1558 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2434);
					BgL_effectz00_1559 = (BgL_feffectz00_bglt) (BgL_effectz00_2435);
					{	/* Effect/feffect.scm 357 */
						obj_t BgL_g3430z00_1563;

						BgL_g3430z00_1563 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1558))->BgL_localsz00);
						{
							obj_t BgL_l3428z00_1565;

							BgL_l3428z00_1565 = BgL_g3430z00_1563;
						BgL_zc3anonymousza33682ze3z83_1566:
							if (PAIRP(BgL_l3428z00_1565))
								{	/* Effect/feffect.scm 357 */
									BGl_funzd2effectz12zc0zzeffect_feffectz00(CAR
										(BgL_l3428z00_1565));
									{
										obj_t BgL_l3428z00_2965;

										BgL_l3428z00_2965 = CDR(BgL_l3428z00_1565);
										BgL_l3428z00_1565 = BgL_l3428z00_2965;
										goto BgL_zc3anonymousza33682ze3z83_1566;
									}
								}
							else
								{	/* Effect/feffect.scm 357 */
									((bool_t) 1);
								}
						}
					}
					{	/* Effect/feffect.scm 358 */
						BgL_nodez00_bglt BgL_arg3686z00_1571;

						BgL_arg3686z00_1571 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1558))->BgL_bodyz00);
						{	/* Effect/feffect.scm 358 */
							BgL_feffectz00_bglt BgL_res3756z00_2335;

							{	/* Effect/feffect.scm 358 */
								obj_t BgL_method3439z00_2310;

								{	/* Effect/feffect.scm 358 */
									BgL_objectz00_bglt BgL_objz00_2311;

									BgL_objz00_2311 = (BgL_objectz00_bglt) (BgL_arg3686z00_1571);
									{	/* Effect/feffect.scm 358 */
										long BgL_objzd2classzd2numz00_2312;

										BgL_objzd2classzd2numz00_2312 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2311);
										{	/* Effect/feffect.scm 358 */
											obj_t BgL_arg2643z00_2313;

											BgL_arg2643z00_2313 =
												PROCEDURE_REF
												(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
												(int) (((long) 1)));
											{	/* Effect/feffect.scm 358 */
												obj_t BgL_arrayz00_2315;

												int BgL_offsetz00_2316;

												BgL_arrayz00_2315 = BgL_arg2643z00_2313;
												BgL_offsetz00_2316 =
													(int) (BgL_objzd2classzd2numz00_2312);
												{	/* Effect/feffect.scm 358 */
													long BgL_offsetz00_2317;

													BgL_offsetz00_2317 =
														((long) (BgL_offsetz00_2316) - OBJECT_TYPE);
													{	/* Effect/feffect.scm 358 */
														long BgL_modz00_2318;

														{	/* Effect/feffect.scm 358 */
															int BgL_arg2645z00_2319;

															BgL_arg2645z00_2319 = (int) (((long) 16));
															{	/* Effect/feffect.scm 358 */
																long BgL_auxz00_2976;

																BgL_auxz00_2976 = (long) (BgL_arg2645z00_2319);
																BgL_modz00_2318 =
																	(BgL_offsetz00_2317 / BgL_auxz00_2976);
														}}
														{	/* Effect/feffect.scm 358 */
															long BgL_restz00_2320;

															{	/* Effect/feffect.scm 358 */
																int BgL_arg2644z00_2321;

																BgL_arg2644z00_2321 = (int) (((long) 16));
																{	/* Effect/feffect.scm 358 */
																	long BgL_auxz00_2980;

																	BgL_auxz00_2980 =
																		(long) (BgL_arg2644z00_2321);
																	BgL_restz00_2320 =
																		(BgL_offsetz00_2317 % BgL_auxz00_2980);
															}}
															{	/* Effect/feffect.scm 358 */

																BgL_method3439z00_2310 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2315,
																		(int) (BgL_modz00_2318)),
																	(int) (BgL_restz00_2320));
								}}}}}}}}
								BgL_res3756z00_2335 =
									(BgL_feffectz00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2310)
									(BgL_method3439z00_2310, (obj_t) (BgL_arg3686z00_1571),
										(obj_t) (BgL_effectz00_1559), BEOA));
							}
							BgL_auxz00_2959 = BgL_res3756z00_2335;
					}}
					return (obj_t) (BgL_auxz00_2959);
				}
			}
		}
	}



/* body-effect!-extern3477 */
	obj_t BGl_bodyzd2effectz12zd2extern3477z12zzeffect_feffectz00(obj_t
		BgL_envz00_2436, obj_t BgL_nodez00_2437, obj_t BgL_effectz00_2438)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 345 */
			{
				BgL_externz00_bglt BgL_nodez00_1549;

				obj_t BgL_effectz00_1550;

				BgL_nodez00_1549 = (BgL_externz00_bglt) (BgL_nodez00_2437);
				BgL_effectz00_1550 = BgL_effectz00_2438;
				{	/* Effect/feffect.scm 346 */
					obj_t BgL_efz00_1553;

					{	/* Effect/feffect.scm 346 */
						bool_t BgL_testz00_2995;

						{	/* Effect/feffect.scm 346 */
							obj_t BgL_arg3680z00_1555;

							BgL_arg3680z00_1555 =
								(((BgL_externz00_bglt) CREF(BgL_nodez00_1549))->BgL_effectz00);
							BgL_testz00_2995 =
								BGl_iszd2azf3z21zz__objectz00(BgL_arg3680z00_1555,
								BGl_feffectz00zzast_varz00);
						}
						if (BgL_testz00_2995)
							{	/* Effect/feffect.scm 346 */
								BgL_efz00_1553 =
									(((BgL_externz00_bglt) CREF(BgL_nodez00_1549))->
									BgL_effectz00);
							}
						else
							{	/* Effect/feffect.scm 346 */
								BgL_efz00_1553 =
									(obj_t) (BGl_za2effectzd2topza2zd2zzeffect_feffectz00);
							}
					}
					BGl_mergezd2effectsz12zc0zzeffect_feffectz00(BgL_effectz00_1550,
						BgL_efz00_1553);
					return BgL_effectz00_1550;
				}
			}
		}
	}



/* body-effect!-app3474 */
	obj_t BGl_bodyzd2effectz12zd2app3474z12zzeffect_feffectz00(obj_t
		BgL_envz00_2439, obj_t BgL_nodez00_2440, obj_t BgL_effectz00_2441)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 335 */
			{
				BgL_appz00_bglt BgL_nodez00_1538;

				obj_t BgL_effectz00_1539;

				BgL_nodez00_1538 = (BgL_appz00_bglt) (BgL_nodez00_2440);
				BgL_effectz00_1539 = BgL_effectz00_2441;
				{	/* Effect/feffect.scm 337 */
					obj_t BgL_arg3674z00_1543;

					BgL_arg3674z00_1543 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_1538))->BgL_argsz00);
					BGl_bodyzd2effectza2z12z62zzeffect_feffectz00(BgL_arg3674z00_1543,
						BgL_effectz00_1539);
				}
				{	/* Effect/feffect.scm 338 */
					BgL_feffectz00_bglt BgL_efz00_1544;

					{	/* Effect/feffect.scm 338 */
						BgL_variablez00_bglt BgL_arg3675z00_1545;

						{	/* Effect/feffect.scm 338 */
							BgL_varz00_bglt BgL_obj1664z00_2299;

							BgL_obj1664z00_2299 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1538))->BgL_funz00);
							BgL_arg3675z00_1545 =
								(((BgL_varz00_bglt) CREF(BgL_obj1664z00_2299))->
								BgL_variablez00);
						}
						BgL_efz00_1544 =
							BGl_funzd2effectz12zc0zzeffect_feffectz00(
							(obj_t) (BgL_arg3675z00_1545));
					}
					BGl_mergezd2effectsz12zc0zzeffect_feffectz00(BgL_effectz00_1539,
						(obj_t) (BgL_efz00_1544));
				}
				return BgL_effectz00_1539;
			}
		}
	}



/* body-effect!-app-ly3471 */
	obj_t BGl_bodyzd2effectz12zd2appzd2ly3471zc0zzeffect_feffectz00(obj_t
		BgL_envz00_2442, obj_t BgL_nodez00_2443, obj_t BgL_effectz00_2444)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 328 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1532;

				BgL_feffectz00_bglt BgL_effectz00_1533;

				{	/* Effect/feffect.scm 329 */
					BgL_feffectz00_bglt BgL_auxz00_3011;

					BgL_nodez00_1532 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2443);
					BgL_effectz00_1533 = (BgL_feffectz00_bglt) (BgL_effectz00_2444);
					BGl_mergezd2effectsz12zc0zzeffect_feffectz00(
						(obj_t) (BgL_effectz00_1533),
						(obj_t) (BGl_za2effectzd2topza2zd2zzeffect_feffectz00));
					BgL_auxz00_3011 = BgL_effectz00_1533;
					return (obj_t) (BgL_auxz00_3011);
				}
			}
		}
	}



/* body-effect!-funcall3469 */
	obj_t BGl_bodyzd2effectz12zd2funcall3469z12zzeffect_feffectz00(obj_t
		BgL_envz00_2445, obj_t BgL_nodez00_2446, obj_t BgL_effectz00_2447)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 321 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1526;

				BgL_feffectz00_bglt BgL_effectz00_1527;

				{	/* Effect/feffect.scm 322 */
					BgL_feffectz00_bglt BgL_auxz00_3018;

					BgL_nodez00_1526 = (BgL_funcallz00_bglt) (BgL_nodez00_2446);
					BgL_effectz00_1527 = (BgL_feffectz00_bglt) (BgL_effectz00_2447);
					BGl_mergezd2effectsz12zc0zzeffect_feffectz00(
						(obj_t) (BgL_effectz00_1527),
						(obj_t) (BGl_za2effectzd2topza2zd2zzeffect_feffectz00));
					BgL_auxz00_3018 = BgL_effectz00_1527;
					return (obj_t) (BgL_auxz00_3018);
				}
			}
		}
	}



/* body-effect!-sequenc3467 */
	obj_t BGl_bodyzd2effectz12zd2sequenc3467z12zzeffect_feffectz00(obj_t
		BgL_envz00_2448, obj_t BgL_nodez00_2449, obj_t BgL_effectz00_2450)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 315 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1519;

				BgL_feffectz00_bglt BgL_effectz00_1520;

				BgL_nodez00_1519 = (BgL_sequencez00_bglt) (BgL_nodez00_2449);
				BgL_effectz00_1520 = (BgL_feffectz00_bglt) (BgL_effectz00_2450);
				{	/* Effect/feffect.scm 316 */
					obj_t BgL_arg3670z00_2295;

					BgL_arg3670z00_2295 =
						(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1519))->BgL_nodesz00);
					return
						BGl_bodyzd2effectza2z12z62zzeffect_feffectz00(BgL_arg3670z00_2295,
						(obj_t) (BgL_effectz00_1520));
				}
			}
		}
	}



/* body-effect!-cast3465 */
	obj_t BGl_bodyzd2effectz12zd2cast3465z12zzeffect_feffectz00(obj_t
		BgL_envz00_2451, obj_t BgL_nodez00_2452, obj_t BgL_effectz00_2453)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 308 */
			{
				BgL_castz00_bglt BgL_nodez00_1511;

				BgL_feffectz00_bglt BgL_effectz00_1512;

				{	/* Effect/feffect.scm 309 */
					BgL_feffectz00_bglt BgL_auxz00_3030;

					BgL_nodez00_1511 = (BgL_castz00_bglt) (BgL_nodez00_2452);
					BgL_effectz00_1512 = (BgL_feffectz00_bglt) (BgL_effectz00_2453);
					{	/* Effect/feffect.scm 309 */
						BgL_nodez00_bglt BgL_arg3667z00_2265;

						BgL_arg3667z00_2265 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1511))->BgL_argz00);
						{	/* Effect/feffect.scm 309 */
							BgL_feffectz00_bglt BgL_res3753z00_2294;

							{	/* Effect/feffect.scm 309 */
								obj_t BgL_method3439z00_2269;

								{	/* Effect/feffect.scm 309 */
									BgL_objectz00_bglt BgL_objz00_2270;

									BgL_objz00_2270 = (BgL_objectz00_bglt) (BgL_arg3667z00_2265);
									{	/* Effect/feffect.scm 309 */
										long BgL_objzd2classzd2numz00_2271;

										BgL_objzd2classzd2numz00_2271 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2270);
										{	/* Effect/feffect.scm 309 */
											obj_t BgL_arg2643z00_2272;

											BgL_arg2643z00_2272 =
												PROCEDURE_REF
												(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
												(int) (((long) 1)));
											{	/* Effect/feffect.scm 309 */
												obj_t BgL_arrayz00_2274;

												int BgL_offsetz00_2275;

												BgL_arrayz00_2274 = BgL_arg2643z00_2272;
												BgL_offsetz00_2275 =
													(int) (BgL_objzd2classzd2numz00_2271);
												{	/* Effect/feffect.scm 309 */
													long BgL_offsetz00_2276;

													BgL_offsetz00_2276 =
														((long) (BgL_offsetz00_2275) - OBJECT_TYPE);
													{	/* Effect/feffect.scm 309 */
														long BgL_modz00_2277;

														{	/* Effect/feffect.scm 309 */
															int BgL_arg2645z00_2278;

															BgL_arg2645z00_2278 = (int) (((long) 16));
															{	/* Effect/feffect.scm 309 */
																long BgL_auxz00_3040;

																BgL_auxz00_3040 = (long) (BgL_arg2645z00_2278);
																BgL_modz00_2277 =
																	(BgL_offsetz00_2276 / BgL_auxz00_3040);
														}}
														{	/* Effect/feffect.scm 309 */
															long BgL_restz00_2279;

															{	/* Effect/feffect.scm 309 */
																int BgL_arg2644z00_2280;

																BgL_arg2644z00_2280 = (int) (((long) 16));
																{	/* Effect/feffect.scm 309 */
																	long BgL_auxz00_3044;

																	BgL_auxz00_3044 =
																		(long) (BgL_arg2644z00_2280);
																	BgL_restz00_2279 =
																		(BgL_offsetz00_2276 % BgL_auxz00_3044);
															}}
															{	/* Effect/feffect.scm 309 */

																BgL_method3439z00_2269 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2274,
																		(int) (BgL_modz00_2277)),
																	(int) (BgL_restz00_2279));
								}}}}}}}}
								BgL_res3753z00_2294 =
									(BgL_feffectz00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2269)
									(BgL_method3439z00_2269, (obj_t) (BgL_arg3667z00_2265),
										(obj_t) (BgL_effectz00_1512), BEOA));
							}
							BgL_auxz00_3030 = BgL_res3753z00_2294;
					}}
					return (obj_t) (BgL_auxz00_3030);
				}
			}
		}
	}



/* body-effect!-box-set3463 */
	obj_t BGl_bodyzd2effectz12zd2boxzd2set3463zc0zzeffect_feffectz00(obj_t
		BgL_envz00_2454, obj_t BgL_nodez00_2455, obj_t BgL_effectz00_2456)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 300 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1502;

				BgL_feffectz00_bglt BgL_effectz00_1503;

				{	/* Effect/feffect.scm 301 */
					BgL_feffectz00_bglt BgL_auxz00_3059;

					BgL_nodez00_1502 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2455);
					BgL_effectz00_1503 = (BgL_feffectz00_bglt) (BgL_effectz00_2456);
					{	/* Effect/feffect.scm 301 */
						BgL_varz00_bglt BgL_arg3664z00_2204;

						BgL_arg3664z00_2204 =
							(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1502))->BgL_varz00);
						{	/* Effect/feffect.scm 301 */
							BgL_feffectz00_bglt BgL_res3747z00_2234;

							{	/* Effect/feffect.scm 301 */
								BgL_nodez00_bglt BgL_nodez00_2207;

								BgL_nodez00_2207 = (BgL_nodez00_bglt) (BgL_arg3664z00_2204);
								{	/* Effect/feffect.scm 301 */
									obj_t BgL_method3439z00_2209;

									{	/* Effect/feffect.scm 301 */
										BgL_objectz00_bglt BgL_objz00_2210;

										BgL_objz00_2210 = (BgL_objectz00_bglt) (BgL_nodez00_2207);
										{	/* Effect/feffect.scm 301 */
											long BgL_objzd2classzd2numz00_2211;

											BgL_objzd2classzd2numz00_2211 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2210);
											{	/* Effect/feffect.scm 301 */
												obj_t BgL_arg2643z00_2212;

												BgL_arg2643z00_2212 =
													PROCEDURE_REF
													(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
													(int) (((long) 1)));
												{	/* Effect/feffect.scm 301 */
													obj_t BgL_arrayz00_2214;

													int BgL_offsetz00_2215;

													BgL_arrayz00_2214 = BgL_arg2643z00_2212;
													BgL_offsetz00_2215 =
														(int) (BgL_objzd2classzd2numz00_2211);
													{	/* Effect/feffect.scm 301 */
														long BgL_offsetz00_2216;

														BgL_offsetz00_2216 =
															((long) (BgL_offsetz00_2215) - OBJECT_TYPE);
														{	/* Effect/feffect.scm 301 */
															long BgL_modz00_2217;

															{	/* Effect/feffect.scm 301 */
																int BgL_arg2645z00_2218;

																BgL_arg2645z00_2218 = (int) (((long) 16));
																{	/* Effect/feffect.scm 301 */
																	long BgL_auxz00_3070;

																	BgL_auxz00_3070 =
																		(long) (BgL_arg2645z00_2218);
																	BgL_modz00_2217 =
																		(BgL_offsetz00_2216 / BgL_auxz00_3070);
															}}
															{	/* Effect/feffect.scm 301 */
																long BgL_restz00_2219;

																{	/* Effect/feffect.scm 301 */
																	int BgL_arg2644z00_2220;

																	BgL_arg2644z00_2220 = (int) (((long) 16));
																	{	/* Effect/feffect.scm 301 */
																		long BgL_auxz00_3074;

																		BgL_auxz00_3074 =
																			(long) (BgL_arg2644z00_2220);
																		BgL_restz00_2219 =
																			(BgL_offsetz00_2216 % BgL_auxz00_3074);
																}}
																{	/* Effect/feffect.scm 301 */

																	BgL_method3439z00_2209 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2214,
																			(int) (BgL_modz00_2217)),
																		(int) (BgL_restz00_2219));
									}}}}}}}}
									BgL_res3747z00_2234 =
										(BgL_feffectz00_bglt) (PROCEDURE_ENTRY
										(BgL_method3439z00_2209) (BgL_method3439z00_2209,
											(obj_t) (BgL_nodez00_2207), (obj_t) (BgL_effectz00_1503),
											BEOA));
							}} BgL_res3747z00_2234;
					}}
					{	/* Effect/feffect.scm 301 */
						BgL_nodez00_bglt BgL_arg3665z00_2205;

						BgL_arg3665z00_2205 =
							(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1502))->
							BgL_valuez00);
						{	/* Effect/feffect.scm 301 */
							BgL_feffectz00_bglt BgL_res3750z00_2263;

							{	/* Effect/feffect.scm 301 */
								obj_t BgL_method3439z00_2238;

								{	/* Effect/feffect.scm 301 */
									BgL_objectz00_bglt BgL_objz00_2239;

									BgL_objz00_2239 = (BgL_objectz00_bglt) (BgL_arg3665z00_2205);
									{	/* Effect/feffect.scm 301 */
										long BgL_objzd2classzd2numz00_2240;

										BgL_objzd2classzd2numz00_2240 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2239);
										{	/* Effect/feffect.scm 301 */
											obj_t BgL_arg2643z00_2241;

											BgL_arg2643z00_2241 =
												PROCEDURE_REF
												(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
												(int) (((long) 1)));
											{	/* Effect/feffect.scm 301 */
												obj_t BgL_arrayz00_2243;

												int BgL_offsetz00_2244;

												BgL_arrayz00_2243 = BgL_arg2643z00_2241;
												BgL_offsetz00_2244 =
													(int) (BgL_objzd2classzd2numz00_2240);
												{	/* Effect/feffect.scm 301 */
													long BgL_offsetz00_2245;

													BgL_offsetz00_2245 =
														((long) (BgL_offsetz00_2244) - OBJECT_TYPE);
													{	/* Effect/feffect.scm 301 */
														long BgL_modz00_2246;

														{	/* Effect/feffect.scm 301 */
															int BgL_arg2645z00_2247;

															BgL_arg2645z00_2247 = (int) (((long) 16));
															{	/* Effect/feffect.scm 301 */
																long BgL_auxz00_3095;

																BgL_auxz00_3095 = (long) (BgL_arg2645z00_2247);
																BgL_modz00_2246 =
																	(BgL_offsetz00_2245 / BgL_auxz00_3095);
														}}
														{	/* Effect/feffect.scm 301 */
															long BgL_restz00_2248;

															{	/* Effect/feffect.scm 301 */
																int BgL_arg2644z00_2249;

																BgL_arg2644z00_2249 = (int) (((long) 16));
																{	/* Effect/feffect.scm 301 */
																	long BgL_auxz00_3099;

																	BgL_auxz00_3099 =
																		(long) (BgL_arg2644z00_2249);
																	BgL_restz00_2248 =
																		(BgL_offsetz00_2245 % BgL_auxz00_3099);
															}}
															{	/* Effect/feffect.scm 301 */

																BgL_method3439z00_2238 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2243,
																		(int) (BgL_modz00_2246)),
																	(int) (BgL_restz00_2248));
								}}}}}}}}
								BgL_res3750z00_2263 =
									(BgL_feffectz00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2238)
									(BgL_method3439z00_2238, (obj_t) (BgL_arg3665z00_2205),
										(obj_t) (BgL_effectz00_1503), BEOA));
							}
							BgL_auxz00_3059 = BgL_res3750z00_2263;
					}}
					return (obj_t) (BgL_auxz00_3059);
				}
			}
		}
	}



/* body-effect!-box-ref3461 */
	obj_t BGl_bodyzd2effectz12zd2boxzd2ref3461zc0zzeffect_feffectz00(obj_t
		BgL_envz00_2457, obj_t BgL_nodez00_2458, obj_t BgL_effectz00_2459)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 294 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1495;

				BgL_feffectz00_bglt BgL_effectz00_1496;

				{	/* Effect/feffect.scm 295 */
					BgL_feffectz00_bglt BgL_auxz00_3114;

					BgL_nodez00_1495 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2458);
					BgL_effectz00_1496 = (BgL_feffectz00_bglt) (BgL_effectz00_2459);
					{	/* Effect/feffect.scm 295 */
						BgL_varz00_bglt BgL_arg3662z00_2173;

						BgL_arg3662z00_2173 =
							(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1495))->BgL_varz00);
						{	/* Effect/feffect.scm 295 */
							BgL_feffectz00_bglt BgL_res3744z00_2202;

							{	/* Effect/feffect.scm 295 */
								BgL_nodez00_bglt BgL_nodez00_2175;

								BgL_nodez00_2175 = (BgL_nodez00_bglt) (BgL_arg3662z00_2173);
								{	/* Effect/feffect.scm 295 */
									obj_t BgL_method3439z00_2177;

									{	/* Effect/feffect.scm 295 */
										BgL_objectz00_bglt BgL_objz00_2178;

										BgL_objz00_2178 = (BgL_objectz00_bglt) (BgL_nodez00_2175);
										{	/* Effect/feffect.scm 295 */
											long BgL_objzd2classzd2numz00_2179;

											BgL_objzd2classzd2numz00_2179 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2178);
											{	/* Effect/feffect.scm 295 */
												obj_t BgL_arg2643z00_2180;

												BgL_arg2643z00_2180 =
													PROCEDURE_REF
													(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
													(int) (((long) 1)));
												{	/* Effect/feffect.scm 295 */
													obj_t BgL_arrayz00_2182;

													int BgL_offsetz00_2183;

													BgL_arrayz00_2182 = BgL_arg2643z00_2180;
													BgL_offsetz00_2183 =
														(int) (BgL_objzd2classzd2numz00_2179);
													{	/* Effect/feffect.scm 295 */
														long BgL_offsetz00_2184;

														BgL_offsetz00_2184 =
															((long) (BgL_offsetz00_2183) - OBJECT_TYPE);
														{	/* Effect/feffect.scm 295 */
															long BgL_modz00_2185;

															{	/* Effect/feffect.scm 295 */
																int BgL_arg2645z00_2186;

																BgL_arg2645z00_2186 = (int) (((long) 16));
																{	/* Effect/feffect.scm 295 */
																	long BgL_auxz00_3125;

																	BgL_auxz00_3125 =
																		(long) (BgL_arg2645z00_2186);
																	BgL_modz00_2185 =
																		(BgL_offsetz00_2184 / BgL_auxz00_3125);
															}}
															{	/* Effect/feffect.scm 295 */
																long BgL_restz00_2187;

																{	/* Effect/feffect.scm 295 */
																	int BgL_arg2644z00_2188;

																	BgL_arg2644z00_2188 = (int) (((long) 16));
																	{	/* Effect/feffect.scm 295 */
																		long BgL_auxz00_3129;

																		BgL_auxz00_3129 =
																			(long) (BgL_arg2644z00_2188);
																		BgL_restz00_2187 =
																			(BgL_offsetz00_2184 % BgL_auxz00_3129);
																}}
																{	/* Effect/feffect.scm 295 */

																	BgL_method3439z00_2177 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2182,
																			(int) (BgL_modz00_2185)),
																		(int) (BgL_restz00_2187));
									}}}}}}}}
									BgL_res3744z00_2202 =
										(BgL_feffectz00_bglt) (PROCEDURE_ENTRY
										(BgL_method3439z00_2177) (BgL_method3439z00_2177,
											(obj_t) (BgL_nodez00_2175), (obj_t) (BgL_effectz00_1496),
											BEOA));
							}}
							BgL_auxz00_3114 = BgL_res3744z00_2202;
					}}
					return (obj_t) (BgL_auxz00_3114);
				}
			}
		}
	}



/* body-effect!-make-bo3459 */
	obj_t BGl_bodyzd2effectz12zd2makezd2bo3459zc0zzeffect_feffectz00(obj_t
		BgL_envz00_2460, obj_t BgL_nodez00_2461, obj_t BgL_effectz00_2462)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 288 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1488;

				BgL_feffectz00_bglt BgL_effectz00_1489;

				{	/* Effect/feffect.scm 289 */
					BgL_feffectz00_bglt BgL_auxz00_3144;

					BgL_nodez00_1488 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2461);
					BgL_effectz00_1489 = (BgL_feffectz00_bglt) (BgL_effectz00_2462);
					{	/* Effect/feffect.scm 289 */
						BgL_nodez00_bglt BgL_arg3660z00_2143;

						BgL_arg3660z00_2143 =
							(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1488))->BgL_valuez00);
						{	/* Effect/feffect.scm 289 */
							BgL_feffectz00_bglt BgL_res3741z00_2172;

							{	/* Effect/feffect.scm 289 */
								obj_t BgL_method3439z00_2147;

								{	/* Effect/feffect.scm 289 */
									BgL_objectz00_bglt BgL_objz00_2148;

									BgL_objz00_2148 = (BgL_objectz00_bglt) (BgL_arg3660z00_2143);
									{	/* Effect/feffect.scm 289 */
										long BgL_objzd2classzd2numz00_2149;

										BgL_objzd2classzd2numz00_2149 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2148);
										{	/* Effect/feffect.scm 289 */
											obj_t BgL_arg2643z00_2150;

											BgL_arg2643z00_2150 =
												PROCEDURE_REF
												(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
												(int) (((long) 1)));
											{	/* Effect/feffect.scm 289 */
												obj_t BgL_arrayz00_2152;

												int BgL_offsetz00_2153;

												BgL_arrayz00_2152 = BgL_arg2643z00_2150;
												BgL_offsetz00_2153 =
													(int) (BgL_objzd2classzd2numz00_2149);
												{	/* Effect/feffect.scm 289 */
													long BgL_offsetz00_2154;

													BgL_offsetz00_2154 =
														((long) (BgL_offsetz00_2153) - OBJECT_TYPE);
													{	/* Effect/feffect.scm 289 */
														long BgL_modz00_2155;

														{	/* Effect/feffect.scm 289 */
															int BgL_arg2645z00_2156;

															BgL_arg2645z00_2156 = (int) (((long) 16));
															{	/* Effect/feffect.scm 289 */
																long BgL_auxz00_3154;

																BgL_auxz00_3154 = (long) (BgL_arg2645z00_2156);
																BgL_modz00_2155 =
																	(BgL_offsetz00_2154 / BgL_auxz00_3154);
														}}
														{	/* Effect/feffect.scm 289 */
															long BgL_restz00_2157;

															{	/* Effect/feffect.scm 289 */
																int BgL_arg2644z00_2158;

																BgL_arg2644z00_2158 = (int) (((long) 16));
																{	/* Effect/feffect.scm 289 */
																	long BgL_auxz00_3158;

																	BgL_auxz00_3158 =
																		(long) (BgL_arg2644z00_2158);
																	BgL_restz00_2157 =
																		(BgL_offsetz00_2154 % BgL_auxz00_3158);
															}}
															{	/* Effect/feffect.scm 289 */

																BgL_method3439z00_2147 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2152,
																		(int) (BgL_modz00_2155)),
																	(int) (BgL_restz00_2157));
								}}}}}}}}
								BgL_res3741z00_2172 =
									(BgL_feffectz00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2147)
									(BgL_method3439z00_2147, (obj_t) (BgL_arg3660z00_2143),
										(obj_t) (BgL_effectz00_1489), BEOA));
							}
							BgL_auxz00_3144 = BgL_res3741z00_2172;
					}}
					return (obj_t) (BgL_auxz00_3144);
				}
			}
		}
	}



/* body-effect!-jump-ex3457 */
	obj_t BGl_bodyzd2effectz12zd2jumpzd2ex3457zc0zzeffect_feffectz00(obj_t
		BgL_envz00_2463, obj_t BgL_nodez00_2464, obj_t BgL_effectz00_2465)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 280 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1479;

				BgL_feffectz00_bglt BgL_effectz00_1480;

				{	/* Effect/feffect.scm 281 */
					BgL_feffectz00_bglt BgL_auxz00_3173;

					BgL_nodez00_1479 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2464);
					BgL_effectz00_1480 = (BgL_feffectz00_bglt) (BgL_effectz00_2465);
					{	/* Effect/feffect.scm 281 */
						BgL_nodez00_bglt BgL_arg3657z00_2083;

						BgL_arg3657z00_2083 =
							(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1479))->
							BgL_exitz00);
						{	/* Effect/feffect.scm 281 */
							BgL_feffectz00_bglt BgL_res3735z00_2113;

							{	/* Effect/feffect.scm 281 */
								obj_t BgL_method3439z00_2088;

								{	/* Effect/feffect.scm 281 */
									BgL_objectz00_bglt BgL_objz00_2089;

									BgL_objz00_2089 = (BgL_objectz00_bglt) (BgL_arg3657z00_2083);
									{	/* Effect/feffect.scm 281 */
										long BgL_objzd2classzd2numz00_2090;

										BgL_objzd2classzd2numz00_2090 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2089);
										{	/* Effect/feffect.scm 281 */
											obj_t BgL_arg2643z00_2091;

											BgL_arg2643z00_2091 =
												PROCEDURE_REF
												(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
												(int) (((long) 1)));
											{	/* Effect/feffect.scm 281 */
												obj_t BgL_arrayz00_2093;

												int BgL_offsetz00_2094;

												BgL_arrayz00_2093 = BgL_arg2643z00_2091;
												BgL_offsetz00_2094 =
													(int) (BgL_objzd2classzd2numz00_2090);
												{	/* Effect/feffect.scm 281 */
													long BgL_offsetz00_2095;

													BgL_offsetz00_2095 =
														((long) (BgL_offsetz00_2094) - OBJECT_TYPE);
													{	/* Effect/feffect.scm 281 */
														long BgL_modz00_2096;

														{	/* Effect/feffect.scm 281 */
															int BgL_arg2645z00_2097;

															BgL_arg2645z00_2097 = (int) (((long) 16));
															{	/* Effect/feffect.scm 281 */
																long BgL_auxz00_3183;

																BgL_auxz00_3183 = (long) (BgL_arg2645z00_2097);
																BgL_modz00_2096 =
																	(BgL_offsetz00_2095 / BgL_auxz00_3183);
														}}
														{	/* Effect/feffect.scm 281 */
															long BgL_restz00_2098;

															{	/* Effect/feffect.scm 281 */
																int BgL_arg2644z00_2099;

																BgL_arg2644z00_2099 = (int) (((long) 16));
																{	/* Effect/feffect.scm 281 */
																	long BgL_auxz00_3187;

																	BgL_auxz00_3187 =
																		(long) (BgL_arg2644z00_2099);
																	BgL_restz00_2098 =
																		(BgL_offsetz00_2095 % BgL_auxz00_3187);
															}}
															{	/* Effect/feffect.scm 281 */

																BgL_method3439z00_2088 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2093,
																		(int) (BgL_modz00_2096)),
																	(int) (BgL_restz00_2098));
								}}}}}}}}
								BgL_res3735z00_2113 =
									(BgL_feffectz00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2088)
									(BgL_method3439z00_2088, (obj_t) (BgL_arg3657z00_2083),
										(obj_t) (BgL_effectz00_1480), BEOA));
							} BgL_res3735z00_2113;
					}}
					{	/* Effect/feffect.scm 281 */
						BgL_nodez00_bglt BgL_arg3658z00_2084;

						BgL_arg3658z00_2084 =
							(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1479))->
							BgL_valuez00);
						{	/* Effect/feffect.scm 281 */
							BgL_feffectz00_bglt BgL_res3738z00_2142;

							{	/* Effect/feffect.scm 281 */
								obj_t BgL_method3439z00_2117;

								{	/* Effect/feffect.scm 281 */
									BgL_objectz00_bglt BgL_objz00_2118;

									BgL_objz00_2118 = (BgL_objectz00_bglt) (BgL_arg3658z00_2084);
									{	/* Effect/feffect.scm 281 */
										long BgL_objzd2classzd2numz00_2119;

										BgL_objzd2classzd2numz00_2119 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2118);
										{	/* Effect/feffect.scm 281 */
											obj_t BgL_arg2643z00_2120;

											BgL_arg2643z00_2120 =
												PROCEDURE_REF
												(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
												(int) (((long) 1)));
											{	/* Effect/feffect.scm 281 */
												obj_t BgL_arrayz00_2122;

												int BgL_offsetz00_2123;

												BgL_arrayz00_2122 = BgL_arg2643z00_2120;
												BgL_offsetz00_2123 =
													(int) (BgL_objzd2classzd2numz00_2119);
												{	/* Effect/feffect.scm 281 */
													long BgL_offsetz00_2124;

													BgL_offsetz00_2124 =
														((long) (BgL_offsetz00_2123) - OBJECT_TYPE);
													{	/* Effect/feffect.scm 281 */
														long BgL_modz00_2125;

														{	/* Effect/feffect.scm 281 */
															int BgL_arg2645z00_2126;

															BgL_arg2645z00_2126 = (int) (((long) 16));
															{	/* Effect/feffect.scm 281 */
																long BgL_auxz00_3208;

																BgL_auxz00_3208 = (long) (BgL_arg2645z00_2126);
																BgL_modz00_2125 =
																	(BgL_offsetz00_2124 / BgL_auxz00_3208);
														}}
														{	/* Effect/feffect.scm 281 */
															long BgL_restz00_2127;

															{	/* Effect/feffect.scm 281 */
																int BgL_arg2644z00_2128;

																BgL_arg2644z00_2128 = (int) (((long) 16));
																{	/* Effect/feffect.scm 281 */
																	long BgL_auxz00_3212;

																	BgL_auxz00_3212 =
																		(long) (BgL_arg2644z00_2128);
																	BgL_restz00_2127 =
																		(BgL_offsetz00_2124 % BgL_auxz00_3212);
															}}
															{	/* Effect/feffect.scm 281 */

																BgL_method3439z00_2117 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2122,
																		(int) (BgL_modz00_2125)),
																	(int) (BgL_restz00_2127));
								}}}}}}}}
								BgL_res3738z00_2142 =
									(BgL_feffectz00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2117)
									(BgL_method3439z00_2117, (obj_t) (BgL_arg3658z00_2084),
										(obj_t) (BgL_effectz00_1480), BEOA));
							}
							BgL_auxz00_3173 = BgL_res3738z00_2142;
					}}
					return (obj_t) (BgL_auxz00_3173);
				}
			}
		}
	}



/* body-effect!-set-ex-3455 */
	obj_t BGl_bodyzd2effectz12zd2setzd2exzd23455z12zzeffect_feffectz00(obj_t
		BgL_envz00_2466, obj_t BgL_nodez00_2467, obj_t BgL_effectz00_2468)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 273 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1471;

				BgL_feffectz00_bglt BgL_effectz00_1472;

				{	/* Effect/feffect.scm 275 */
					BgL_feffectz00_bglt BgL_auxz00_3227;

					BgL_nodez00_1471 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2467);
					BgL_effectz00_1472 = (BgL_feffectz00_bglt) (BgL_effectz00_2468);
					{	/* Effect/feffect.scm 275 */
						BgL_nodez00_bglt BgL_arg3655z00_2052;

						BgL_arg3655z00_2052 =
							(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1471))->
							BgL_bodyz00);
						{	/* Effect/feffect.scm 275 */
							BgL_feffectz00_bglt BgL_res3732z00_2081;

							{	/* Effect/feffect.scm 275 */
								obj_t BgL_method3439z00_2056;

								{	/* Effect/feffect.scm 275 */
									BgL_objectz00_bglt BgL_objz00_2057;

									BgL_objz00_2057 = (BgL_objectz00_bglt) (BgL_arg3655z00_2052);
									{	/* Effect/feffect.scm 275 */
										long BgL_objzd2classzd2numz00_2058;

										BgL_objzd2classzd2numz00_2058 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2057);
										{	/* Effect/feffect.scm 275 */
											obj_t BgL_arg2643z00_2059;

											BgL_arg2643z00_2059 =
												PROCEDURE_REF
												(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
												(int) (((long) 1)));
											{	/* Effect/feffect.scm 275 */
												obj_t BgL_arrayz00_2061;

												int BgL_offsetz00_2062;

												BgL_arrayz00_2061 = BgL_arg2643z00_2059;
												BgL_offsetz00_2062 =
													(int) (BgL_objzd2classzd2numz00_2058);
												{	/* Effect/feffect.scm 275 */
													long BgL_offsetz00_2063;

													BgL_offsetz00_2063 =
														((long) (BgL_offsetz00_2062) - OBJECT_TYPE);
													{	/* Effect/feffect.scm 275 */
														long BgL_modz00_2064;

														{	/* Effect/feffect.scm 275 */
															int BgL_arg2645z00_2065;

															BgL_arg2645z00_2065 = (int) (((long) 16));
															{	/* Effect/feffect.scm 275 */
																long BgL_auxz00_3237;

																BgL_auxz00_3237 = (long) (BgL_arg2645z00_2065);
																BgL_modz00_2064 =
																	(BgL_offsetz00_2063 / BgL_auxz00_3237);
														}}
														{	/* Effect/feffect.scm 275 */
															long BgL_restz00_2066;

															{	/* Effect/feffect.scm 275 */
																int BgL_arg2644z00_2067;

																BgL_arg2644z00_2067 = (int) (((long) 16));
																{	/* Effect/feffect.scm 275 */
																	long BgL_auxz00_3241;

																	BgL_auxz00_3241 =
																		(long) (BgL_arg2644z00_2067);
																	BgL_restz00_2066 =
																		(BgL_offsetz00_2063 % BgL_auxz00_3241);
															}}
															{	/* Effect/feffect.scm 275 */

																BgL_method3439z00_2056 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2061,
																		(int) (BgL_modz00_2064)),
																	(int) (BgL_restz00_2066));
								}}}}}}}}
								BgL_res3732z00_2081 =
									(BgL_feffectz00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2056)
									(BgL_method3439z00_2056, (obj_t) (BgL_arg3655z00_2052),
										(obj_t) (BgL_effectz00_1472), BEOA));
							}
							BgL_auxz00_3227 = BgL_res3732z00_2081;
					}}
					return (obj_t) (BgL_auxz00_3227);
				}
			}
		}
	}



/* body-effect!-fail3453 */
	obj_t BGl_bodyzd2effectz12zd2fail3453z12zzeffect_feffectz00(obj_t
		BgL_envz00_2469, obj_t BgL_nodez00_2470, obj_t BgL_effectz00_2471)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 264 */
			{
				BgL_failz00_bglt BgL_nodez00_1461;

				BgL_feffectz00_bglt BgL_effectz00_1462;

				{	/* Effect/feffect.scm 265 */
					BgL_feffectz00_bglt BgL_auxz00_3256;

					BgL_nodez00_1461 = (BgL_failz00_bglt) (BgL_nodez00_2470);
					BgL_effectz00_1462 = (BgL_feffectz00_bglt) (BgL_effectz00_2471);
					{	/* Effect/feffect.scm 266 */
						BgL_nodez00_bglt BgL_arg3651z00_1466;

						BgL_arg3651z00_1466 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_1461))->BgL_procz00);
						{	/* Effect/feffect.scm 266 */
							BgL_feffectz00_bglt BgL_res3723z00_1993;

							{	/* Effect/feffect.scm 266 */
								obj_t BgL_method3439z00_1968;

								{	/* Effect/feffect.scm 266 */
									BgL_objectz00_bglt BgL_objz00_1969;

									BgL_objz00_1969 = (BgL_objectz00_bglt) (BgL_arg3651z00_1466);
									{	/* Effect/feffect.scm 266 */
										long BgL_objzd2classzd2numz00_1970;

										BgL_objzd2classzd2numz00_1970 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1969);
										{	/* Effect/feffect.scm 266 */
											obj_t BgL_arg2643z00_1971;

											BgL_arg2643z00_1971 =
												PROCEDURE_REF
												(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
												(int) (((long) 1)));
											{	/* Effect/feffect.scm 266 */
												obj_t BgL_arrayz00_1973;

												int BgL_offsetz00_1974;

												BgL_arrayz00_1973 = BgL_arg2643z00_1971;
												BgL_offsetz00_1974 =
													(int) (BgL_objzd2classzd2numz00_1970);
												{	/* Effect/feffect.scm 266 */
													long BgL_offsetz00_1975;

													BgL_offsetz00_1975 =
														((long) (BgL_offsetz00_1974) - OBJECT_TYPE);
													{	/* Effect/feffect.scm 266 */
														long BgL_modz00_1976;

														{	/* Effect/feffect.scm 266 */
															int BgL_arg2645z00_1977;

															BgL_arg2645z00_1977 = (int) (((long) 16));
															{	/* Effect/feffect.scm 266 */
																long BgL_auxz00_3266;

																BgL_auxz00_3266 = (long) (BgL_arg2645z00_1977);
																BgL_modz00_1976 =
																	(BgL_offsetz00_1975 / BgL_auxz00_3266);
														}}
														{	/* Effect/feffect.scm 266 */
															long BgL_restz00_1978;

															{	/* Effect/feffect.scm 266 */
																int BgL_arg2644z00_1979;

																BgL_arg2644z00_1979 = (int) (((long) 16));
																{	/* Effect/feffect.scm 266 */
																	long BgL_auxz00_3270;

																	BgL_auxz00_3270 =
																		(long) (BgL_arg2644z00_1979);
																	BgL_restz00_1978 =
																		(BgL_offsetz00_1975 % BgL_auxz00_3270);
															}}
															{	/* Effect/feffect.scm 266 */

																BgL_method3439z00_1968 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1973,
																		(int) (BgL_modz00_1976)),
																	(int) (BgL_restz00_1978));
								}}}}}}}}
								BgL_res3723z00_1993 =
									(BgL_feffectz00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_1968)
									(BgL_method3439z00_1968, (obj_t) (BgL_arg3651z00_1466),
										(obj_t) (BgL_effectz00_1462), BEOA));
							} BgL_res3723z00_1993;
					}}
					{	/* Effect/feffect.scm 267 */
						BgL_nodez00_bglt BgL_arg3652z00_1467;

						BgL_arg3652z00_1467 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_1461))->BgL_msgz00);
						{	/* Effect/feffect.scm 267 */
							BgL_feffectz00_bglt BgL_res3726z00_2022;

							{	/* Effect/feffect.scm 267 */
								obj_t BgL_method3439z00_1997;

								{	/* Effect/feffect.scm 267 */
									BgL_objectz00_bglt BgL_objz00_1998;

									BgL_objz00_1998 = (BgL_objectz00_bglt) (BgL_arg3652z00_1467);
									{	/* Effect/feffect.scm 267 */
										long BgL_objzd2classzd2numz00_1999;

										BgL_objzd2classzd2numz00_1999 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1998);
										{	/* Effect/feffect.scm 267 */
											obj_t BgL_arg2643z00_2000;

											BgL_arg2643z00_2000 =
												PROCEDURE_REF
												(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
												(int) (((long) 1)));
											{	/* Effect/feffect.scm 267 */
												obj_t BgL_arrayz00_2002;

												int BgL_offsetz00_2003;

												BgL_arrayz00_2002 = BgL_arg2643z00_2000;
												BgL_offsetz00_2003 =
													(int) (BgL_objzd2classzd2numz00_1999);
												{	/* Effect/feffect.scm 267 */
													long BgL_offsetz00_2004;

													BgL_offsetz00_2004 =
														((long) (BgL_offsetz00_2003) - OBJECT_TYPE);
													{	/* Effect/feffect.scm 267 */
														long BgL_modz00_2005;

														{	/* Effect/feffect.scm 267 */
															int BgL_arg2645z00_2006;

															BgL_arg2645z00_2006 = (int) (((long) 16));
															{	/* Effect/feffect.scm 267 */
																long BgL_auxz00_3291;

																BgL_auxz00_3291 = (long) (BgL_arg2645z00_2006);
																BgL_modz00_2005 =
																	(BgL_offsetz00_2004 / BgL_auxz00_3291);
														}}
														{	/* Effect/feffect.scm 267 */
															long BgL_restz00_2007;

															{	/* Effect/feffect.scm 267 */
																int BgL_arg2644z00_2008;

																BgL_arg2644z00_2008 = (int) (((long) 16));
																{	/* Effect/feffect.scm 267 */
																	long BgL_auxz00_3295;

																	BgL_auxz00_3295 =
																		(long) (BgL_arg2644z00_2008);
																	BgL_restz00_2007 =
																		(BgL_offsetz00_2004 % BgL_auxz00_3295);
															}}
															{	/* Effect/feffect.scm 267 */

																BgL_method3439z00_1997 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2002,
																		(int) (BgL_modz00_2005)),
																	(int) (BgL_restz00_2007));
								}}}}}}}}
								BgL_res3726z00_2022 =
									(BgL_feffectz00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_1997)
									(BgL_method3439z00_1997, (obj_t) (BgL_arg3652z00_1467),
										(obj_t) (BgL_effectz00_1462), BEOA));
							} BgL_res3726z00_2022;
					}}
					{	/* Effect/feffect.scm 268 */
						BgL_nodez00_bglt BgL_arg3653z00_1468;

						BgL_arg3653z00_1468 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_1461))->BgL_objz00);
						{	/* Effect/feffect.scm 268 */
							BgL_feffectz00_bglt BgL_res3729z00_2051;

							{	/* Effect/feffect.scm 268 */
								obj_t BgL_method3439z00_2026;

								{	/* Effect/feffect.scm 268 */
									BgL_objectz00_bglt BgL_objz00_2027;

									BgL_objz00_2027 = (BgL_objectz00_bglt) (BgL_arg3653z00_1468);
									{	/* Effect/feffect.scm 268 */
										long BgL_objzd2classzd2numz00_2028;

										BgL_objzd2classzd2numz00_2028 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2027);
										{	/* Effect/feffect.scm 268 */
											obj_t BgL_arg2643z00_2029;

											BgL_arg2643z00_2029 =
												PROCEDURE_REF
												(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
												(int) (((long) 1)));
											{	/* Effect/feffect.scm 268 */
												obj_t BgL_arrayz00_2031;

												int BgL_offsetz00_2032;

												BgL_arrayz00_2031 = BgL_arg2643z00_2029;
												BgL_offsetz00_2032 =
													(int) (BgL_objzd2classzd2numz00_2028);
												{	/* Effect/feffect.scm 268 */
													long BgL_offsetz00_2033;

													BgL_offsetz00_2033 =
														((long) (BgL_offsetz00_2032) - OBJECT_TYPE);
													{	/* Effect/feffect.scm 268 */
														long BgL_modz00_2034;

														{	/* Effect/feffect.scm 268 */
															int BgL_arg2645z00_2035;

															BgL_arg2645z00_2035 = (int) (((long) 16));
															{	/* Effect/feffect.scm 268 */
																long BgL_auxz00_3316;

																BgL_auxz00_3316 = (long) (BgL_arg2645z00_2035);
																BgL_modz00_2034 =
																	(BgL_offsetz00_2033 / BgL_auxz00_3316);
														}}
														{	/* Effect/feffect.scm 268 */
															long BgL_restz00_2036;

															{	/* Effect/feffect.scm 268 */
																int BgL_arg2644z00_2037;

																BgL_arg2644z00_2037 = (int) (((long) 16));
																{	/* Effect/feffect.scm 268 */
																	long BgL_auxz00_3320;

																	BgL_auxz00_3320 =
																		(long) (BgL_arg2644z00_2037);
																	BgL_restz00_2036 =
																		(BgL_offsetz00_2033 % BgL_auxz00_3320);
															}}
															{	/* Effect/feffect.scm 268 */

																BgL_method3439z00_2026 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2031,
																		(int) (BgL_modz00_2034)),
																	(int) (BgL_restz00_2036));
								}}}}}}}}
								BgL_res3729z00_2051 =
									(BgL_feffectz00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2026)
									(BgL_method3439z00_2026, (obj_t) (BgL_arg3653z00_1468),
										(obj_t) (BgL_effectz00_1462), BEOA));
							}
							BgL_auxz00_3256 = BgL_res3729z00_2051;
					}}
					return (obj_t) (BgL_auxz00_3256);
				}
			}
		}
	}



/* body-effect!-select3451 */
	obj_t BGl_bodyzd2effectz12zd2select3451z12zzeffect_feffectz00(obj_t
		BgL_envz00_2472, obj_t BgL_nodez00_2473, obj_t BgL_effectz00_2474)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 253 */
			{
				BgL_selectz00_bglt BgL_nodez00_1444;

				BgL_feffectz00_bglt BgL_effectz00_1445;

				{	/* Effect/feffect.scm 254 */
					BgL_feffectz00_bglt BgL_auxz00_3335;

					BgL_nodez00_1444 = (BgL_selectz00_bglt) (BgL_nodez00_2473);
					BgL_effectz00_1445 = (BgL_feffectz00_bglt) (BgL_effectz00_2474);
					{	/* Effect/feffect.scm 255 */
						BgL_nodez00_bglt BgL_arg3645z00_1449;

						BgL_arg3645z00_1449 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1444))->BgL_testz00);
						{	/* Effect/feffect.scm 255 */
							BgL_feffectz00_bglt BgL_res3717z00_1931;

							{	/* Effect/feffect.scm 255 */
								obj_t BgL_method3439z00_1906;

								{	/* Effect/feffect.scm 255 */
									BgL_objectz00_bglt BgL_objz00_1907;

									BgL_objz00_1907 = (BgL_objectz00_bglt) (BgL_arg3645z00_1449);
									{	/* Effect/feffect.scm 255 */
										long BgL_objzd2classzd2numz00_1908;

										BgL_objzd2classzd2numz00_1908 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1907);
										{	/* Effect/feffect.scm 255 */
											obj_t BgL_arg2643z00_1909;

											BgL_arg2643z00_1909 =
												PROCEDURE_REF
												(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
												(int) (((long) 1)));
											{	/* Effect/feffect.scm 255 */
												obj_t BgL_arrayz00_1911;

												int BgL_offsetz00_1912;

												BgL_arrayz00_1911 = BgL_arg2643z00_1909;
												BgL_offsetz00_1912 =
													(int) (BgL_objzd2classzd2numz00_1908);
												{	/* Effect/feffect.scm 255 */
													long BgL_offsetz00_1913;

													BgL_offsetz00_1913 =
														((long) (BgL_offsetz00_1912) - OBJECT_TYPE);
													{	/* Effect/feffect.scm 255 */
														long BgL_modz00_1914;

														{	/* Effect/feffect.scm 255 */
															int BgL_arg2645z00_1915;

															BgL_arg2645z00_1915 = (int) (((long) 16));
															{	/* Effect/feffect.scm 255 */
																long BgL_auxz00_3345;

																BgL_auxz00_3345 = (long) (BgL_arg2645z00_1915);
																BgL_modz00_1914 =
																	(BgL_offsetz00_1913 / BgL_auxz00_3345);
														}}
														{	/* Effect/feffect.scm 255 */
															long BgL_restz00_1916;

															{	/* Effect/feffect.scm 255 */
																int BgL_arg2644z00_1917;

																BgL_arg2644z00_1917 = (int) (((long) 16));
																{	/* Effect/feffect.scm 255 */
																	long BgL_auxz00_3349;

																	BgL_auxz00_3349 =
																		(long) (BgL_arg2644z00_1917);
																	BgL_restz00_1916 =
																		(BgL_offsetz00_1913 % BgL_auxz00_3349);
															}}
															{	/* Effect/feffect.scm 255 */

																BgL_method3439z00_1906 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1911,
																		(int) (BgL_modz00_1914)),
																	(int) (BgL_restz00_1916));
								}}}}}}}}
								BgL_res3717z00_1931 =
									(BgL_feffectz00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_1906)
									(BgL_method3439z00_1906, (obj_t) (BgL_arg3645z00_1449),
										(obj_t) (BgL_effectz00_1445), BEOA));
							} BgL_res3717z00_1931;
					}}
					{	/* Effect/feffect.scm 256 */
						obj_t BgL_g3427z00_1450;

						BgL_g3427z00_1450 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1444))->BgL_clausesz00);
						{
							obj_t BgL_l3425z00_1452;

							BgL_l3425z00_1452 = BgL_g3427z00_1450;
						BgL_zc3anonymousza33646ze3z83_1453:
							if (PAIRP(BgL_l3425z00_1452))
								{	/* Effect/feffect.scm 256 */
									{	/* Effect/feffect.scm 257 */
										obj_t BgL_clausez00_1455;

										BgL_clausez00_1455 = CAR(BgL_l3425z00_1452);
										{	/* Effect/feffect.scm 257 */
											obj_t BgL_arg3648z00_1456;

											BgL_arg3648z00_1456 = CDR(BgL_clausez00_1455);
											{	/* Effect/feffect.scm 257 */
												BgL_feffectz00_bglt BgL_res3720z00_1963;

												{	/* Effect/feffect.scm 257 */
													BgL_nodez00_bglt BgL_nodez00_1936;

													BgL_nodez00_1936 =
														(BgL_nodez00_bglt) (BgL_arg3648z00_1456);
													{	/* Effect/feffect.scm 257 */
														obj_t BgL_method3439z00_1938;

														{	/* Effect/feffect.scm 257 */
															BgL_objectz00_bglt BgL_objz00_1939;

															BgL_objz00_1939 =
																(BgL_objectz00_bglt) (BgL_nodez00_1936);
															{	/* Effect/feffect.scm 257 */
																long BgL_objzd2classzd2numz00_1940;

																BgL_objzd2classzd2numz00_1940 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1939);
																{	/* Effect/feffect.scm 257 */
																	obj_t BgL_arg2643z00_1941;

																	BgL_arg2643z00_1941 =
																		PROCEDURE_REF
																		(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
																		(int) (((long) 1)));
																	{	/* Effect/feffect.scm 257 */
																		obj_t BgL_arrayz00_1943;

																		int BgL_offsetz00_1944;

																		BgL_arrayz00_1943 = BgL_arg2643z00_1941;
																		BgL_offsetz00_1944 =
																			(int) (BgL_objzd2classzd2numz00_1940);
																		{	/* Effect/feffect.scm 257 */
																			long BgL_offsetz00_1945;

																			BgL_offsetz00_1945 =
																				(
																				(long) (BgL_offsetz00_1944) -
																				OBJECT_TYPE);
																			{	/* Effect/feffect.scm 257 */
																				long BgL_modz00_1946;

																				{	/* Effect/feffect.scm 257 */
																					int BgL_arg2645z00_1947;

																					BgL_arg2645z00_1947 =
																						(int) (((long) 16));
																					{	/* Effect/feffect.scm 257 */
																						long BgL_auxz00_3375;

																						BgL_auxz00_3375 =
																							(long) (BgL_arg2645z00_1947);
																						BgL_modz00_1946 =
																							(BgL_offsetz00_1945 /
																							BgL_auxz00_3375);
																				}}
																				{	/* Effect/feffect.scm 257 */
																					long BgL_restz00_1948;

																					{	/* Effect/feffect.scm 257 */
																						int BgL_arg2644z00_1949;

																						BgL_arg2644z00_1949 =
																							(int) (((long) 16));
																						{	/* Effect/feffect.scm 257 */
																							long BgL_auxz00_3379;

																							BgL_auxz00_3379 =
																								(long) (BgL_arg2644z00_1949);
																							BgL_restz00_1948 =
																								(BgL_offsetz00_1945 %
																								BgL_auxz00_3379);
																					}}
																					{	/* Effect/feffect.scm 257 */

																						BgL_method3439z00_1938 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1943,
																								(int) (BgL_modz00_1946)),
																							(int) (BgL_restz00_1948));
														}}}}}}}}
														BgL_res3720z00_1963 =
															(BgL_feffectz00_bglt) (PROCEDURE_ENTRY
															(BgL_method3439z00_1938) (BgL_method3439z00_1938,
																(obj_t) (BgL_nodez00_1936),
																(obj_t) (BgL_effectz00_1445), BEOA));
												}} BgL_res3720z00_1963;
									}}}
									{
										obj_t BgL_l3425z00_3391;

										BgL_l3425z00_3391 = CDR(BgL_l3425z00_1452);
										BgL_l3425z00_1452 = BgL_l3425z00_3391;
										goto BgL_zc3anonymousza33646ze3z83_1453;
									}
								}
							else
								{	/* Effect/feffect.scm 256 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_3335 = BgL_effectz00_1445;
					return (obj_t) (BgL_auxz00_3335);
				}
			}
		}
	}



/* body-effect!-conditi3449 */
	obj_t BGl_bodyzd2effectz12zd2conditi3449z12zzeffect_feffectz00(obj_t
		BgL_envz00_2475, obj_t BgL_nodez00_2476, obj_t BgL_effectz00_2477)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 244 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1434;

				BgL_feffectz00_bglt BgL_effectz00_1435;

				{	/* Effect/feffect.scm 245 */
					BgL_feffectz00_bglt BgL_auxz00_3396;

					BgL_nodez00_1434 = (BgL_conditionalz00_bglt) (BgL_nodez00_2476);
					BgL_effectz00_1435 = (BgL_feffectz00_bglt) (BgL_effectz00_2477);
					{	/* Effect/feffect.scm 246 */
						BgL_nodez00_bglt BgL_arg3641z00_1439;

						BgL_arg3641z00_1439 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1434))->BgL_testz00);
						{	/* Effect/feffect.scm 246 */
							BgL_feffectz00_bglt BgL_res3708z00_1844;

							{	/* Effect/feffect.scm 246 */
								obj_t BgL_method3439z00_1819;

								{	/* Effect/feffect.scm 246 */
									BgL_objectz00_bglt BgL_objz00_1820;

									BgL_objz00_1820 = (BgL_objectz00_bglt) (BgL_arg3641z00_1439);
									{	/* Effect/feffect.scm 246 */
										long BgL_objzd2classzd2numz00_1821;

										BgL_objzd2classzd2numz00_1821 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1820);
										{	/* Effect/feffect.scm 246 */
											obj_t BgL_arg2643z00_1822;

											BgL_arg2643z00_1822 =
												PROCEDURE_REF
												(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
												(int) (((long) 1)));
											{	/* Effect/feffect.scm 246 */
												obj_t BgL_arrayz00_1824;

												int BgL_offsetz00_1825;

												BgL_arrayz00_1824 = BgL_arg2643z00_1822;
												BgL_offsetz00_1825 =
													(int) (BgL_objzd2classzd2numz00_1821);
												{	/* Effect/feffect.scm 246 */
													long BgL_offsetz00_1826;

													BgL_offsetz00_1826 =
														((long) (BgL_offsetz00_1825) - OBJECT_TYPE);
													{	/* Effect/feffect.scm 246 */
														long BgL_modz00_1827;

														{	/* Effect/feffect.scm 246 */
															int BgL_arg2645z00_1828;

															BgL_arg2645z00_1828 = (int) (((long) 16));
															{	/* Effect/feffect.scm 246 */
																long BgL_auxz00_3406;

																BgL_auxz00_3406 = (long) (BgL_arg2645z00_1828);
																BgL_modz00_1827 =
																	(BgL_offsetz00_1826 / BgL_auxz00_3406);
														}}
														{	/* Effect/feffect.scm 246 */
															long BgL_restz00_1829;

															{	/* Effect/feffect.scm 246 */
																int BgL_arg2644z00_1830;

																BgL_arg2644z00_1830 = (int) (((long) 16));
																{	/* Effect/feffect.scm 246 */
																	long BgL_auxz00_3410;

																	BgL_auxz00_3410 =
																		(long) (BgL_arg2644z00_1830);
																	BgL_restz00_1829 =
																		(BgL_offsetz00_1826 % BgL_auxz00_3410);
															}}
															{	/* Effect/feffect.scm 246 */

																BgL_method3439z00_1819 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1824,
																		(int) (BgL_modz00_1827)),
																	(int) (BgL_restz00_1829));
								}}}}}}}}
								BgL_res3708z00_1844 =
									(BgL_feffectz00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_1819)
									(BgL_method3439z00_1819, (obj_t) (BgL_arg3641z00_1439),
										(obj_t) (BgL_effectz00_1435), BEOA));
							} BgL_res3708z00_1844;
					}}
					{	/* Effect/feffect.scm 247 */
						BgL_nodez00_bglt BgL_arg3642z00_1440;

						BgL_arg3642z00_1440 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1434))->BgL_truez00);
						{	/* Effect/feffect.scm 247 */
							BgL_feffectz00_bglt BgL_res3711z00_1873;

							{	/* Effect/feffect.scm 247 */
								obj_t BgL_method3439z00_1848;

								{	/* Effect/feffect.scm 247 */
									BgL_objectz00_bglt BgL_objz00_1849;

									BgL_objz00_1849 = (BgL_objectz00_bglt) (BgL_arg3642z00_1440);
									{	/* Effect/feffect.scm 247 */
										long BgL_objzd2classzd2numz00_1850;

										BgL_objzd2classzd2numz00_1850 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1849);
										{	/* Effect/feffect.scm 247 */
											obj_t BgL_arg2643z00_1851;

											BgL_arg2643z00_1851 =
												PROCEDURE_REF
												(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
												(int) (((long) 1)));
											{	/* Effect/feffect.scm 247 */
												obj_t BgL_arrayz00_1853;

												int BgL_offsetz00_1854;

												BgL_arrayz00_1853 = BgL_arg2643z00_1851;
												BgL_offsetz00_1854 =
													(int) (BgL_objzd2classzd2numz00_1850);
												{	/* Effect/feffect.scm 247 */
													long BgL_offsetz00_1855;

													BgL_offsetz00_1855 =
														((long) (BgL_offsetz00_1854) - OBJECT_TYPE);
													{	/* Effect/feffect.scm 247 */
														long BgL_modz00_1856;

														{	/* Effect/feffect.scm 247 */
															int BgL_arg2645z00_1857;

															BgL_arg2645z00_1857 = (int) (((long) 16));
															{	/* Effect/feffect.scm 247 */
																long BgL_auxz00_3431;

																BgL_auxz00_3431 = (long) (BgL_arg2645z00_1857);
																BgL_modz00_1856 =
																	(BgL_offsetz00_1855 / BgL_auxz00_3431);
														}}
														{	/* Effect/feffect.scm 247 */
															long BgL_restz00_1858;

															{	/* Effect/feffect.scm 247 */
																int BgL_arg2644z00_1859;

																BgL_arg2644z00_1859 = (int) (((long) 16));
																{	/* Effect/feffect.scm 247 */
																	long BgL_auxz00_3435;

																	BgL_auxz00_3435 =
																		(long) (BgL_arg2644z00_1859);
																	BgL_restz00_1858 =
																		(BgL_offsetz00_1855 % BgL_auxz00_3435);
															}}
															{	/* Effect/feffect.scm 247 */

																BgL_method3439z00_1848 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1853,
																		(int) (BgL_modz00_1856)),
																	(int) (BgL_restz00_1858));
								}}}}}}}}
								BgL_res3711z00_1873 =
									(BgL_feffectz00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_1848)
									(BgL_method3439z00_1848, (obj_t) (BgL_arg3642z00_1440),
										(obj_t) (BgL_effectz00_1435), BEOA));
							} BgL_res3711z00_1873;
					}}
					{	/* Effect/feffect.scm 248 */
						BgL_nodez00_bglt BgL_arg3643z00_1441;

						BgL_arg3643z00_1441 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1434))->
							BgL_falsez00);
						{	/* Effect/feffect.scm 248 */
							BgL_feffectz00_bglt BgL_res3714z00_1902;

							{	/* Effect/feffect.scm 248 */
								obj_t BgL_method3439z00_1877;

								{	/* Effect/feffect.scm 248 */
									BgL_objectz00_bglt BgL_objz00_1878;

									BgL_objz00_1878 = (BgL_objectz00_bglt) (BgL_arg3643z00_1441);
									{	/* Effect/feffect.scm 248 */
										long BgL_objzd2classzd2numz00_1879;

										BgL_objzd2classzd2numz00_1879 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1878);
										{	/* Effect/feffect.scm 248 */
											obj_t BgL_arg2643z00_1880;

											BgL_arg2643z00_1880 =
												PROCEDURE_REF
												(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
												(int) (((long) 1)));
											{	/* Effect/feffect.scm 248 */
												obj_t BgL_arrayz00_1882;

												int BgL_offsetz00_1883;

												BgL_arrayz00_1882 = BgL_arg2643z00_1880;
												BgL_offsetz00_1883 =
													(int) (BgL_objzd2classzd2numz00_1879);
												{	/* Effect/feffect.scm 248 */
													long BgL_offsetz00_1884;

													BgL_offsetz00_1884 =
														((long) (BgL_offsetz00_1883) - OBJECT_TYPE);
													{	/* Effect/feffect.scm 248 */
														long BgL_modz00_1885;

														{	/* Effect/feffect.scm 248 */
															int BgL_arg2645z00_1886;

															BgL_arg2645z00_1886 = (int) (((long) 16));
															{	/* Effect/feffect.scm 248 */
																long BgL_auxz00_3456;

																BgL_auxz00_3456 = (long) (BgL_arg2645z00_1886);
																BgL_modz00_1885 =
																	(BgL_offsetz00_1884 / BgL_auxz00_3456);
														}}
														{	/* Effect/feffect.scm 248 */
															long BgL_restz00_1887;

															{	/* Effect/feffect.scm 248 */
																int BgL_arg2644z00_1888;

																BgL_arg2644z00_1888 = (int) (((long) 16));
																{	/* Effect/feffect.scm 248 */
																	long BgL_auxz00_3460;

																	BgL_auxz00_3460 =
																		(long) (BgL_arg2644z00_1888);
																	BgL_restz00_1887 =
																		(BgL_offsetz00_1884 % BgL_auxz00_3460);
															}}
															{	/* Effect/feffect.scm 248 */

																BgL_method3439z00_1877 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1882,
																		(int) (BgL_modz00_1885)),
																	(int) (BgL_restz00_1887));
								}}}}}}}}
								BgL_res3714z00_1902 =
									(BgL_feffectz00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_1877)
									(BgL_method3439z00_1877, (obj_t) (BgL_arg3643z00_1441),
										(obj_t) (BgL_effectz00_1435), BEOA));
							}
							BgL_auxz00_3396 = BgL_res3714z00_1902;
					}}
					return (obj_t) (BgL_auxz00_3396);
				}
			}
		}
	}



/* body-effect!-setq3447 */
	obj_t BGl_bodyzd2effectz12zd2setq3447z12zzeffect_feffectz00(obj_t
		BgL_envz00_2478, obj_t BgL_nodez00_2479, obj_t BgL_effectz00_2480)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 235 */
			{
				BgL_setqz00_bglt BgL_nodez00_1423;

				BgL_feffectz00_bglt BgL_effectz00_1424;

				{	/* Effect/feffect.scm 236 */
					BgL_feffectz00_bglt BgL_auxz00_3475;

					BgL_nodez00_1423 = (BgL_setqz00_bglt) (BgL_nodez00_2479);
					BgL_effectz00_1424 = (BgL_feffectz00_bglt) (BgL_effectz00_2480);
					{	/* Effect/feffect.scm 237 */
						bool_t BgL_testz00_3476;

						{	/* Effect/feffect.scm 237 */
							BgL_variablez00_bglt BgL_arg3637z00_1429;

							{	/* Effect/feffect.scm 237 */
								BgL_varz00_bglt BgL_obj1664z00_1785;

								BgL_obj1664z00_1785 =
									(((BgL_setqz00_bglt) CREF(BgL_nodez00_1423))->BgL_varz00);
								BgL_arg3637z00_1429 =
									(((BgL_varz00_bglt) CREF(BgL_obj1664z00_1785))->
									BgL_variablez00);
							}
							{	/* Effect/feffect.scm 237 */
								obj_t BgL_obj2908z00_1786;

								BgL_obj2908z00_1786 = (obj_t) (BgL_arg3637z00_1429);
								BgL_testz00_3476 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj2908z00_1786,
									BGl_globalz00zzast_varz00);
							}
						}
						if (BgL_testz00_3476)
							{	/* Effect/feffect.scm 237 */
								BGl_mergezd2effectsz12zc0zzeffect_feffectz00(
									(obj_t) (BgL_effectz00_1424),
									(obj_t)
									(BGl_za2effectzd2writezd2memza2z00zzeffect_feffectz00));
							}
						else
							{	/* Effect/feffect.scm 237 */
								((bool_t) 0);
							}
					}
					{	/* Effect/feffect.scm 239 */
						BgL_nodez00_bglt BgL_arg3639z00_1431;

						BgL_arg3639z00_1431 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_1423))->BgL_valuez00);
						{	/* Effect/feffect.scm 239 */
							BgL_feffectz00_bglt BgL_res3705z00_1815;

							{	/* Effect/feffect.scm 239 */
								obj_t BgL_method3439z00_1790;

								{	/* Effect/feffect.scm 239 */
									BgL_objectz00_bglt BgL_objz00_1791;

									BgL_objz00_1791 = (BgL_objectz00_bglt) (BgL_arg3639z00_1431);
									{	/* Effect/feffect.scm 239 */
										long BgL_objzd2classzd2numz00_1792;

										BgL_objzd2classzd2numz00_1792 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1791);
										{	/* Effect/feffect.scm 239 */
											obj_t BgL_arg2643z00_1793;

											BgL_arg2643z00_1793 =
												PROCEDURE_REF
												(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
												(int) (((long) 1)));
											{	/* Effect/feffect.scm 239 */
												obj_t BgL_arrayz00_1795;

												int BgL_offsetz00_1796;

												BgL_arrayz00_1795 = BgL_arg2643z00_1793;
												BgL_offsetz00_1796 =
													(int) (BgL_objzd2classzd2numz00_1792);
												{	/* Effect/feffect.scm 239 */
													long BgL_offsetz00_1797;

													BgL_offsetz00_1797 =
														((long) (BgL_offsetz00_1796) - OBJECT_TYPE);
													{	/* Effect/feffect.scm 239 */
														long BgL_modz00_1798;

														{	/* Effect/feffect.scm 239 */
															int BgL_arg2645z00_1799;

															BgL_arg2645z00_1799 = (int) (((long) 16));
															{	/* Effect/feffect.scm 239 */
																long BgL_auxz00_3493;

																BgL_auxz00_3493 = (long) (BgL_arg2645z00_1799);
																BgL_modz00_1798 =
																	(BgL_offsetz00_1797 / BgL_auxz00_3493);
														}}
														{	/* Effect/feffect.scm 239 */
															long BgL_restz00_1800;

															{	/* Effect/feffect.scm 239 */
																int BgL_arg2644z00_1801;

																BgL_arg2644z00_1801 = (int) (((long) 16));
																{	/* Effect/feffect.scm 239 */
																	long BgL_auxz00_3497;

																	BgL_auxz00_3497 =
																		(long) (BgL_arg2644z00_1801);
																	BgL_restz00_1800 =
																		(BgL_offsetz00_1797 % BgL_auxz00_3497);
															}}
															{	/* Effect/feffect.scm 239 */

																BgL_method3439z00_1790 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1795,
																		(int) (BgL_modz00_1798)),
																	(int) (BgL_restz00_1800));
								}}}}}}}}
								BgL_res3705z00_1815 =
									(BgL_feffectz00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_1790)
									(BgL_method3439z00_1790, (obj_t) (BgL_arg3639z00_1431),
										(obj_t) (BgL_effectz00_1424), BEOA));
							}
							BgL_auxz00_3475 = BgL_res3705z00_1815;
					}}
					return (obj_t) (BgL_auxz00_3475);
				}
			}
		}
	}



/* body-effect!-var3445 */
	obj_t BGl_bodyzd2effectz12zd2var3445z12zzeffect_feffectz00(obj_t
		BgL_envz00_2481, obj_t BgL_nodez00_2482, obj_t BgL_effectz00_2483)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 227 */
			{
				BgL_varz00_bglt BgL_nodez00_1415;

				BgL_feffectz00_bglt BgL_effectz00_1416;

				{	/* Effect/feffect.scm 228 */
					BgL_feffectz00_bglt BgL_auxz00_3512;

					BgL_nodez00_1415 = (BgL_varz00_bglt) (BgL_nodez00_2482);
					BgL_effectz00_1416 = (BgL_feffectz00_bglt) (BgL_effectz00_2483);
					{	/* Effect/feffect.scm 228 */
						bool_t BgL_testz00_3513;

						{	/* Effect/feffect.scm 228 */
							BgL_variablez00_bglt BgL_arg3634z00_1781;

							BgL_arg3634z00_1781 =
								(((BgL_varz00_bglt) CREF(BgL_nodez00_1415))->BgL_variablez00);
							{	/* Effect/feffect.scm 228 */
								obj_t BgL_obj2908z00_1783;

								BgL_obj2908z00_1783 = (obj_t) (BgL_arg3634z00_1781);
								BgL_testz00_3513 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj2908z00_1783,
									BGl_globalz00zzast_varz00);
							}
						}
						if (BgL_testz00_3513)
							{	/* Effect/feffect.scm 228 */
								BGl_mergezd2effectsz12zc0zzeffect_feffectz00(
									(obj_t) (BgL_effectz00_1416),
									(obj_t)
									(BGl_za2effectzd2readzd2memza2z00zzeffect_feffectz00));
							}
						else
							{	/* Effect/feffect.scm 228 */
								((bool_t) 0);
							}
					}
					BgL_auxz00_3512 = BgL_effectz00_1416;
					return (obj_t) (BgL_auxz00_3512);
				}
			}
		}
	}



/* body-effect!-kwote3443 */
	obj_t BGl_bodyzd2effectz12zd2kwote3443z12zzeffect_feffectz00(obj_t
		BgL_envz00_2484, obj_t BgL_nodez00_2485, obj_t BgL_effectz00_2486)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 221 */
			return BgL_effectz00_2486;
		}
	}



/* body-effect!-atom3441 */
	obj_t BGl_bodyzd2effectz12zd2atom3441z12zzeffect_feffectz00(obj_t
		BgL_envz00_2487, obj_t BgL_nodez00_2488, obj_t BgL_effectz00_2489)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 215 */
			return BgL_effectz00_2489;
		}
	}



/* object-display-feffe3437 */
	obj_t BGl_objectzd2displayzd2feffe3437z00zzeffect_feffectz00(obj_t
		BgL_envz00_2490, obj_t BgL_fz00_2491, obj_t BgL_pz00_2492)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 63 */
			{
				BgL_feffectz00_bglt BgL_fz00_1382;

				obj_t BgL_pz00_1383;

				BgL_fz00_1382 = (BgL_feffectz00_bglt) (BgL_fz00_2491);
				BgL_pz00_1383 = BgL_pz00_2492;
				{	/* Effect/feffect.scm 64 */
					obj_t BgL_arg3617z00_1386;

					if (PAIRP(BgL_pz00_1383))
						{	/* Effect/feffect.scm 64 */
							BgL_arg3617z00_1386 = CAR(BgL_pz00_1383);
						}
					else
						{	/* Effect/feffect.scm 64 */
							obj_t BgL_res3702z00_1777;

							{	/* Effect/feffect.scm 64 */
								obj_t BgL_auxz00_3526;

								BgL_auxz00_3526 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res3702z00_1777 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3526);
							}
							BgL_arg3617z00_1386 = BgL_res3702z00_1777;
						}
					{	/* Effect/feffect.scm 66 */
						obj_t BgL_zc3anonymousza33620ze3z83_2428;

						BgL_zc3anonymousza33620ze3z83_2428 =
							make_fx_procedure
							(BGl_zc3anonymousza33620ze3z83zzeffect_feffectz00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3anonymousza33620ze3z83_2428,
							(int) (((long) 0)), (obj_t) (BgL_fz00_1382));
						return
							BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00
							(BgL_arg3617z00_1386, BgL_zc3anonymousza33620ze3z83_2428);
					}
				}
			}
		}
	}



/* <anonymous:3620> */
	obj_t BGl_zc3anonymousza33620ze3z83zzeffect_feffectz00(obj_t BgL_envz00_2493)
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 65 */
			{	/* Effect/feffect.scm 66 */
				obj_t BgL_fz00_2494;

				BgL_fz00_2494 = PROCEDURE_REF(BgL_envz00_2493, (int) (((long) 0)));
				{

					{	/* Effect/feffect.scm 67 */
						obj_t BgL_arg3622z00_1392;

						obj_t BgL_arg3623z00_1393;

						{
							BgL_feffectz00_bglt BgL_auxz00_3539;

							BgL_auxz00_3539 = (BgL_feffectz00_bglt) (BgL_fz00_2494);
							BgL_arg3622z00_1392 =
								(((BgL_feffectz00_bglt) CREF(BgL_auxz00_3539))->BgL_readz00);
						}
						{
							BgL_feffectz00_bglt BgL_auxz00_3542;

							BgL_auxz00_3542 = (BgL_feffectz00_bglt) (BgL_fz00_2494);
							BgL_arg3623z00_1393 =
								(((BgL_feffectz00_bglt) CREF(BgL_auxz00_3542))->BgL_writez00);
						}
						{	/* Effect/feffect.scm 67 */
							obj_t BgL_list3624z00_1394;

							{	/* Effect/feffect.scm 67 */
								obj_t BgL_arg3625z00_1395;

								BgL_arg3625z00_1395 = MAKE_PAIR(BgL_arg3623z00_1393, BNIL);
								BgL_list3624z00_1394 =
									MAKE_PAIR(BgL_arg3622z00_1392, BgL_arg3625z00_1395);
							}
							return
								BGl_printfz00zz__r4_output_6_10_3z00
								(BGl_string3791z00zzeffect_feffectz00, BgL_list3624z00_1394);
						}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzeffect_feffectz00()
	{
		AN_OBJECT;
		{	/* Effect/feffect.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3792z00zzeffect_feffectz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3792z00zzeffect_feffectz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3792z00zzeffect_feffectz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3792z00zzeffect_feffectz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3792z00zzeffect_feffectz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3792z00zzeffect_feffectz00));
			return
				BGl_modulezd2initializa7ationz75zzeffect_cgraphz00(((long) 169100475),
				BSTRING_TO_STRING(BGl_string3792z00zzeffect_feffectz00));
		}
	}

#ifdef __cplusplus
}
#endif
