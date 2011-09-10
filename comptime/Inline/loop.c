/*===========================================================================*/
/*   (Inline/loop.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Inline/loop.scm)*/
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

	typedef struct BgL_isfunz00_bgl
	{
		struct BgL_nodez00_bgl *BgL_originalzd2bodyzd2;
		obj_t BgL_recursivezd2callszd2;
	}               *BgL_isfunz00_bglt;


	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_nestzd2loopz12zd2jumpzd2exzd2i3508z12zzinline_loopz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_findzd2letzd2funzf3zd2app3439z21zzinline_loopz00(obj_t,
		obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_findzd2letzd2funzf3zd2makezd2b3465zf3zzinline_loopz00(obj_t,
		obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_findzd2letzd2funzf3zd2setzd2ex3461zf3zzinline_loopz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_innerzd2loopzf3z21zzinline_loopz00(BgL_variablez00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_iszd2loopzf3z21zzinline_loopz00(BgL_variablez00_bglt);
	static obj_t BGl__nestzd2loopz12zd2default3470z12zzinline_loopz00(obj_t,
		obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_nestzd2loopz12zd2default3470z12zzinline_loopz00(BgL_nodez00_bglt,
		BgL_localz00_bglt, obj_t);
	static obj_t BGl_findzd2letzd2funzf3zd2boxzd2re3467zf3zzinline_loopz00(obj_t,
		obj_t);
	static obj_t BGl_nestzd2loopz12zd2cast3491z12zzinline_loopz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl__findzd2letzd2funzf3zf3zzinline_loopz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzinline_loopz00();
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_nodez00_bglt, BgL_localz00_bglt,
		obj_t);
	static obj_t BGl_nestzd2loopz12zd2makezd2box3510zc0zzinline_loopz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_findzd2letzd2funzf3zd2letzd2fu3457zf3zzinline_loopz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nestzd2loopz12zd2condition3495z12zzinline_loopz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_findzd2letzd2funzf3zf3zzinline_loopz00(BgL_nodez00_bglt);
	static obj_t BGl_findzd2letzd2funzf3zd2sequen3437z21zzinline_loopz00(obj_t,
		obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t BGl_nestzd2loopz12zd2funcall3487z12zzinline_loopz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzinline_loopz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_recursionz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_variantz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__iszd2loopzf3z21zzinline_loopz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzinline_loopz00();
	static obj_t BGl__innerzd2loopzf3z21zzinline_loopz00(obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_nestzd2loopz12zd2setq3493z12zzinline_loopz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern bool_t
		BGl_iszd2recursivezf3z21zzinline_recursionz00(BgL_variablez00_bglt);
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_findzd2letzd2funzf3zd2cast3447z21zzinline_loopz00(obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl__findzd2letzd2funzf3zd2defaul3434z21zzinline_loopz00(obj_t,
		obj_t);
	static obj_t BGl_findzd2letzd2funzf3zd2letzd2va3459zf3zzinline_loopz00(obj_t,
		obj_t);
	static obj_t BGl_findzd2letzd2funzf3zd2extern3445z21zzinline_loopz00(obj_t,
		obj_t);
	static obj_t BGl_nestzd2loopz12zd2boxzd2ref3512zc0zzinline_loopz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_nestzd2loopz12zd2setzd2exzd2it3506z12zzinline_loopz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_findzd2letzd2funzf3zd2appzd2ly3441zf3zzinline_loopz00(obj_t,
		obj_t);
	static obj_t BGl_nestzd2loopz12zd2fail3497z12zzinline_loopz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzinline_loopz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_findzd2letzd2funzf3zd2setq3449z21zzinline_loopz00(obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl__nestzd2loopz12zc0zzinline_loopz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzinline_loopz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzinline_loopz00();
	static obj_t BGl_nestzd2loopz12zd2app3483z12zzinline_loopz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_findzd2letzd2funzf3zd2condit3451z21zzinline_loopz00(obj_t,
		obj_t);
	static obj_t BGl_nestzd2loopz12zd2extern3489z12zzinline_loopz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nestzd2loopz12zd2appzd2ly3485zc0zzinline_loopz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_findzd2letzd2funzf3zd2jumpzd2e3463zf3zzinline_loopz00(obj_t,
		obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_nestzd2loopz12za2z62zzinline_loopz00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzinline_loopz00();
	static obj_t BGl_nestzd2loopz12zd2letzd2fun3501zc0zzinline_loopz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_findzd2letzd2funzf3zd2fail3453z21zzinline_loopz00(obj_t,
		obj_t);
	static obj_t BGl_nestzd2loopz12zd2kwote3477z12zzinline_loopz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_findzd2letzd2funzf3zd2select3455z21zzinline_loopz00(obj_t,
		obj_t);
	static obj_t BGl_findzd2letzd2funzf3zd2funcal3443z21zzinline_loopz00(obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_nestzd2loopz12zd2letzd2var3503zc0zzinline_loopz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nestzd2loopz12zd2var3479z12zzinline_loopz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nestzd2loopz12zd2atom3474z12zzinline_loopz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nestzd2loopz12zd2sequence3481z12zzinline_loopz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_nestzd2loopz12zd2select3499z12zzinline_loopz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nestzd2loopz12zd2boxzd2setz123514zd2zzinline_loopz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_findzd2letzd2funzf3zd2boxzd2se3469zf3zzinline_loopz00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzinline_loopz00();
	static bool_t BGl_findzd2letzd2funzf3za2z51zzinline_loopz00(obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string3847z00zzinline_loopz00,
		BgL_bgl_string3847za700za7za7i3891za7, "find-let-fun?", 13);
	      DEFINE_STRING(BGl_string3848z00zzinline_loopz00,
		BgL_bgl_string3848za700za7za7i3892za7, "nest-loop!", 10);
	      DEFINE_STRING(BGl_string3849z00zzinline_loopz00,
		BgL_bgl_string3849za700za7za7i3893za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3887z00zzinline_loopz00,
		BgL_bgl_string3887za700za7za7i3894za7, "inline_loop", 11);
	      DEFINE_STRING(BGl_string3888z00zzinline_loopz00,
		BgL_bgl_string3888za700za7za7i3895za7, "nest-loop!-default3470 done ", 28);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nestzd2loopz12zd2default3470zd2envzc0zzinline_loopz00,
		BgL_bgl__nestza7d2loopza712za73896za7,
		BGl__nestzd2loopz12zd2default3470z12zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_iszd2loopzf3zd2envzf3zzinline_loopz00,
		BgL_bgl__isza7d2loopza7f3za7213897za7, BGl__iszd2loopzf3z21zzinline_loopz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_findzd2letzd2funzf3zd2defaul3434zd2envzf3zzinline_loopz00,
		BgL_bgl__findza7d2letza7d2fu3898z00,
		BGl__findzd2letzd2funzf3zd2defaul3434z21zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
		BgL_bgl__nestza7d2loopza712za73899za7,
		BGl__nestzd2loopz12zc0zzinline_loopz00, 0L, BUNSPEC, 3);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
		BgL_bgl__findza7d2letza7d2fu3900z00,
		BGl__findzd2letzd2funzf3zf3zzinline_loopz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_innerzd2loopzf3zd2envzf3zzinline_loopz00,
		BgL_bgl__innerza7d2loopza7f33901z00,
		BGl__innerzd2loopzf3z21zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3850z00zzinline_loopz00,
		BgL_bgl_findza7d2letza7d2fun3902z00,
		BGl_findzd2letzd2funzf3zd2sequen3437z21zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3851z00zzinline_loopz00,
		BgL_bgl_findza7d2letza7d2fun3903z00,
		BGl_findzd2letzd2funzf3zd2app3439z21zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3852z00zzinline_loopz00,
		BgL_bgl_findza7d2letza7d2fun3904z00,
		BGl_findzd2letzd2funzf3zd2appzd2ly3441zf3zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3853z00zzinline_loopz00,
		BgL_bgl_findza7d2letza7d2fun3905z00,
		BGl_findzd2letzd2funzf3zd2funcal3443z21zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3854z00zzinline_loopz00,
		BgL_bgl_findza7d2letza7d2fun3906z00,
		BGl_findzd2letzd2funzf3zd2extern3445z21zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3855z00zzinline_loopz00,
		BgL_bgl_findza7d2letza7d2fun3907z00,
		BGl_findzd2letzd2funzf3zd2cast3447z21zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3856z00zzinline_loopz00,
		BgL_bgl_findza7d2letza7d2fun3908z00,
		BGl_findzd2letzd2funzf3zd2setq3449z21zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3857z00zzinline_loopz00,
		BgL_bgl_findza7d2letza7d2fun3909z00,
		BGl_findzd2letzd2funzf3zd2condit3451z21zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3858z00zzinline_loopz00,
		BgL_bgl_findza7d2letza7d2fun3910z00,
		BGl_findzd2letzd2funzf3zd2fail3453z21zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3860z00zzinline_loopz00,
		BgL_bgl_findza7d2letza7d2fun3911z00,
		BGl_findzd2letzd2funzf3zd2letzd2fu3457zf3zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3859z00zzinline_loopz00,
		BgL_bgl_findza7d2letza7d2fun3912z00,
		BGl_findzd2letzd2funzf3zd2select3455z21zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3861z00zzinline_loopz00,
		BgL_bgl_findza7d2letza7d2fun3913z00,
		BGl_findzd2letzd2funzf3zd2letzd2va3459zf3zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3862z00zzinline_loopz00,
		BgL_bgl_findza7d2letza7d2fun3914z00,
		BGl_findzd2letzd2funzf3zd2setzd2ex3461zf3zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3863z00zzinline_loopz00,
		BgL_bgl_findza7d2letza7d2fun3915z00,
		BGl_findzd2letzd2funzf3zd2jumpzd2e3463zf3zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3864z00zzinline_loopz00,
		BgL_bgl_findza7d2letza7d2fun3916z00,
		BGl_findzd2letzd2funzf3zd2makezd2b3465zf3zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3865z00zzinline_loopz00,
		BgL_bgl_findza7d2letza7d2fun3917z00,
		BGl_findzd2letzd2funzf3zd2boxzd2re3467zf3zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3866z00zzinline_loopz00,
		BgL_bgl_findza7d2letza7d2fun3918z00,
		BGl_findzd2letzd2funzf3zd2boxzd2se3469zf3zzinline_loopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3867z00zzinline_loopz00,
		BgL_bgl_nestza7d2loopza712za7d3919za7,
		BGl_nestzd2loopz12zd2atom3474z12zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3868z00zzinline_loopz00,
		BgL_bgl_nestza7d2loopza712za7d3920za7,
		BGl_nestzd2loopz12zd2kwote3477z12zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3870z00zzinline_loopz00,
		BgL_bgl_nestza7d2loopza712za7d3921za7,
		BGl_nestzd2loopz12zd2sequence3481z12zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3869z00zzinline_loopz00,
		BgL_bgl_nestza7d2loopza712za7d3922za7,
		BGl_nestzd2loopz12zd2var3479z12zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3871z00zzinline_loopz00,
		BgL_bgl_nestza7d2loopza712za7d3923za7,
		BGl_nestzd2loopz12zd2app3483z12zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3872z00zzinline_loopz00,
		BgL_bgl_nestza7d2loopza712za7d3924za7,
		BGl_nestzd2loopz12zd2appzd2ly3485zc0zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3873z00zzinline_loopz00,
		BgL_bgl_nestza7d2loopza712za7d3925za7,
		BGl_nestzd2loopz12zd2funcall3487z12zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3874z00zzinline_loopz00,
		BgL_bgl_nestza7d2loopza712za7d3926za7,
		BGl_nestzd2loopz12zd2extern3489z12zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3875z00zzinline_loopz00,
		BgL_bgl_nestza7d2loopza712za7d3927za7,
		BGl_nestzd2loopz12zd2cast3491z12zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3876z00zzinline_loopz00,
		BgL_bgl_nestza7d2loopza712za7d3928za7,
		BGl_nestzd2loopz12zd2setq3493z12zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3877z00zzinline_loopz00,
		BgL_bgl_nestza7d2loopza712za7d3929za7,
		BGl_nestzd2loopz12zd2condition3495z12zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3878z00zzinline_loopz00,
		BgL_bgl_nestza7d2loopza712za7d3930za7,
		BGl_nestzd2loopz12zd2fail3497z12zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3880z00zzinline_loopz00,
		BgL_bgl_nestza7d2loopza712za7d3931za7,
		BGl_nestzd2loopz12zd2letzd2fun3501zc0zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3879z00zzinline_loopz00,
		BgL_bgl_nestza7d2loopza712za7d3932za7,
		BGl_nestzd2loopz12zd2select3499z12zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3881z00zzinline_loopz00,
		BgL_bgl_nestza7d2loopza712za7d3933za7,
		BGl_nestzd2loopz12zd2letzd2var3503zc0zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3882z00zzinline_loopz00,
		BgL_bgl_nestza7d2loopza712za7d3934za7,
		BGl_nestzd2loopz12zd2setzd2exzd2it3506z12zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3883z00zzinline_loopz00,
		BgL_bgl_nestza7d2loopza712za7d3935za7,
		BGl_nestzd2loopz12zd2jumpzd2exzd2i3508z12zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3884z00zzinline_loopz00,
		BgL_bgl_nestza7d2loopza712za7d3936za7,
		BGl_nestzd2loopz12zd2makezd2box3510zc0zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3885z00zzinline_loopz00,
		BgL_bgl_nestza7d2loopza712za7d3937za7,
		BGl_nestzd2loopz12zd2boxzd2ref3512zc0zzinline_loopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3886z00zzinline_loopz00,
		BgL_bgl_nestza7d2loopza712za7d3938za7,
		BGl_nestzd2loopz12zd2boxzd2setz123514zd2zzinline_loopz00, 0L, BUNSPEC, 3);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzinline_loopz00(long
		BgL_checksumz00_3409, char *BgL_fromz00_3410)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinline_loopz00))
				{
					BGl_requirezd2initializa7ationz75zzinline_loopz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzinline_loopz00();
					BGl_cnstzd2initzd2zzinline_loopz00();
					BGl_importedzd2moduleszd2initz00zzinline_loopz00();
					BGl_genericzd2initzd2zzinline_loopz00();
					BGl_methodzd2initzd2zzinline_loopz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinline_loopz00()
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "inline_loop");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "inline_loop");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "inline_loop");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"inline_loop");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinline_loopz00()
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 15 */
			{	/* Inline/loop.scm 15 */
				obj_t BgL_cportz00_3390;

				BgL_cportz00_3390 =
					bgl_open_input_string(BGl_string3888z00zzinline_loopz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_3391;

					BgL_iz00_3391 = ((long) 1);
				BgL_loopz00_3392:
					if ((BgL_iz00_3391 == ((long) -1)))
						{	/* Inline/loop.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Inline/loop.scm 15 */
							{	/* Inline/loop.scm 15 */
								obj_t BgL_arg3890z00_3394;

								{	/* Inline/loop.scm 15 */

									{	/* Inline/loop.scm 15 */
										obj_t BgL_locationz00_3396;

										BgL_locationz00_3396 = BBOOL(((bool_t) 0));
										{	/* Inline/loop.scm 15 */

											BgL_arg3890z00_3394 =
												BGl_readz00zz__readerz00(BgL_cportz00_3390,
												BgL_locationz00_3396);
										}
									}
								}
								{	/* Inline/loop.scm 15 */
									int BgL_auxz00_3429;

									BgL_auxz00_3429 = (int) (BgL_iz00_3391);
									CNST_TABLE_SET(BgL_auxz00_3429, BgL_arg3890z00_3394);
							}}
							{	/* Inline/loop.scm 15 */
								int BgL_auxz00_3397;

								BgL_auxz00_3397 = (int) ((BgL_iz00_3391 - ((long) 1)));
								{
									long BgL_iz00_3434;

									BgL_iz00_3434 = (long) (BgL_auxz00_3397);
									BgL_iz00_3391 = BgL_iz00_3434;
									goto BgL_loopz00_3392;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzinline_loopz00()
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 15 */
			return BUNSPEC;
		}
	}



/* is-loop? */
	BGL_EXPORTED_DEF bool_t
		BGl_iszd2loopzf3z21zzinline_loopz00(BgL_variablez00_bglt BgL_variablez00_1)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 39 */
			if (BGl_iszd2recursivezf3z21zzinline_recursionz00(BgL_variablez00_1))
				{	/* Inline/loop.scm 42 */
					long BgL_auxz00_3438;

					{	/* Inline/loop.scm 42 */
						obj_t BgL_auxz00_3439;

						{	/* Inline/loop.scm 42 */
							BgL_isfunz00_bglt BgL_obj3272z00_1663;

							BgL_obj3272z00_1663 =
								(BgL_isfunz00_bglt) (
								(((BgL_variablez00_bglt) CREF(BgL_variablez00_1))->
									BgL_valuez00));
							{
								obj_t BgL_auxz00_3442;

								{	/* Inline/loop.scm 42 */
									BgL_objectz00_bglt BgL_auxz00_3443;

									BgL_auxz00_3443 = (BgL_objectz00_bglt) (BgL_obj3272z00_1663);
									BgL_auxz00_3442 = BGL_OBJECT_WIDENING(BgL_auxz00_3443);
								}
								BgL_auxz00_3439 =
									(((BgL_isfunz00_bglt) CREF(BgL_auxz00_3442))->
									BgL_recursivezd2callszd2);
						}}
						BgL_auxz00_3438 = bgl_list_length(BgL_auxz00_3439);
					}
					return (BgL_auxz00_3438 == ((long) 1));
				}
			else
				{	/* Inline/loop.scm 41 */
					return ((bool_t) 0);
				}
		}
	}



/* _is-loop? */
	obj_t BGl__iszd2loopzf3z21zzinline_loopz00(obj_t BgL_envz00_3223,
		obj_t BgL_variablez00_3224)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 39 */
			return
				BBOOL(BGl_iszd2loopzf3z21zzinline_loopz00(
					(BgL_variablez00_bglt) (BgL_variablez00_3224)));
		}
	}



/* inner-loop? */
	BGL_EXPORTED_DEF bool_t
		BGl_innerzd2loopzf3z21zzinline_loopz00(BgL_variablez00_bglt
		BgL_variablez00_2)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 49 */
			{	/* Inline/loop.scm 50 */
				obj_t BgL_arg3520z00_1666;

				{	/* Inline/loop.scm 50 */
					BgL_sfunz00_bglt BgL_obj1884z00_1669;

					BgL_obj1884z00_1669 =
						(BgL_sfunz00_bglt) (
						(((BgL_variablez00_bglt) CREF(BgL_variablez00_2))->BgL_valuez00));
					BgL_arg3520z00_1666 =
						(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_1669))->BgL_bodyz00);
				}
				{	/* Inline/loop.scm 50 */
					BgL_nodez00_bglt BgL_nodez00_1670;

					BgL_nodez00_1670 = (BgL_nodez00_bglt) (BgL_arg3520z00_1666);
					{	/* Inline/loop.scm 50 */
						obj_t BgL_method3435z00_1671;

						{	/* Inline/loop.scm 50 */
							BgL_objectz00_bglt BgL_objz00_1672;

							BgL_objz00_1672 = (BgL_objectz00_bglt) (BgL_nodez00_1670);
							{	/* Inline/loop.scm 50 */
								long BgL_objzd2classzd2numz00_1673;

								BgL_objzd2classzd2numz00_1673 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1672);
								{	/* Inline/loop.scm 50 */
									obj_t BgL_arg2643z00_1674;

									BgL_arg2643z00_1674 =
										PROCEDURE_REF
										(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
										(int) (((long) 1)));
									{	/* Inline/loop.scm 50 */
										obj_t BgL_arrayz00_1676;

										int BgL_offsetz00_1677;

										BgL_arrayz00_1676 = BgL_arg2643z00_1674;
										BgL_offsetz00_1677 = (int) (BgL_objzd2classzd2numz00_1673);
										{	/* Inline/loop.scm 50 */
											long BgL_offsetz00_1678;

											BgL_offsetz00_1678 =
												((long) (BgL_offsetz00_1677) - OBJECT_TYPE);
											{	/* Inline/loop.scm 50 */
												long BgL_modz00_1679;

												{	/* Inline/loop.scm 50 */
													int BgL_arg2645z00_1680;

													BgL_arg2645z00_1680 = (int) (((long) 16));
													{	/* Inline/loop.scm 50 */
														long BgL_auxz00_3464;

														BgL_auxz00_3464 = (long) (BgL_arg2645z00_1680);
														BgL_modz00_1679 =
															(BgL_offsetz00_1678 / BgL_auxz00_3464);
												}}
												{	/* Inline/loop.scm 50 */
													long BgL_restz00_1681;

													{	/* Inline/loop.scm 50 */
														int BgL_arg2644z00_1682;

														BgL_arg2644z00_1682 = (int) (((long) 16));
														{	/* Inline/loop.scm 50 */
															long BgL_auxz00_3468;

															BgL_auxz00_3468 = (long) (BgL_arg2644z00_1682);
															BgL_restz00_1681 =
																(BgL_offsetz00_1678 % BgL_auxz00_3468);
													}}
													{	/* Inline/loop.scm 50 */

														BgL_method3435z00_1671 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1676,
																(int) (BgL_modz00_1679)),
															(int) (BgL_restz00_1681));
						}}}}}}}}
						return
							CBOOL(PROCEDURE_ENTRY(BgL_method3435z00_1671)
							(BgL_method3435z00_1671, (obj_t) (BgL_nodez00_1670), BEOA));
					}
				}
			}
		}
	}



/* _inner-loop? */
	obj_t BGl__innerzd2loopzf3z21zzinline_loopz00(obj_t BgL_envz00_3225,
		obj_t BgL_variablez00_3226)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 49 */
			return
				BBOOL(BGl_innerzd2loopzf3z21zzinline_loopz00(
					(BgL_variablez00_bglt) (BgL_variablez00_3226)));
		}
	}



/* find-let-fun?* */
	bool_t BGl_findzd2letzd2funzf3za2z51zzinline_loopz00(obj_t BgL_nodeza2za2_22)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 189 */
			{
				obj_t BgL_nodeza2za2_886;

				BgL_nodeza2za2_886 = BgL_nodeza2za2_22;
			BgL_zc3anonymousza33522ze3z83_887:
				if (NULLP(BgL_nodeza2za2_886))
					{	/* Inline/loop.scm 192 */
						return ((bool_t) 0);
					}
				else
					{	/* Inline/loop.scm 194 */
						bool_t BgL_testz00_3484;

						{	/* Inline/loop.scm 194 */
							obj_t BgL_arg3526z00_891;

							BgL_arg3526z00_891 = CAR(BgL_nodeza2za2_886);
							{	/* Inline/loop.scm 194 */
								BgL_nodez00_bglt BgL_nodez00_1698;

								BgL_nodez00_1698 = (BgL_nodez00_bglt) (BgL_arg3526z00_891);
								{	/* Inline/loop.scm 194 */
									obj_t BgL_method3435z00_1699;

									{	/* Inline/loop.scm 194 */
										BgL_objectz00_bglt BgL_objz00_1700;

										BgL_objz00_1700 = (BgL_objectz00_bglt) (BgL_nodez00_1698);
										{	/* Inline/loop.scm 194 */
											long BgL_objzd2classzd2numz00_1701;

											BgL_objzd2classzd2numz00_1701 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1700);
											{	/* Inline/loop.scm 194 */
												obj_t BgL_arg2643z00_1702;

												BgL_arg2643z00_1702 =
													PROCEDURE_REF
													(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
													(int) (((long) 1)));
												{	/* Inline/loop.scm 194 */
													obj_t BgL_arrayz00_1704;

													int BgL_offsetz00_1705;

													BgL_arrayz00_1704 = BgL_arg2643z00_1702;
													BgL_offsetz00_1705 =
														(int) (BgL_objzd2classzd2numz00_1701);
													{	/* Inline/loop.scm 194 */
														long BgL_offsetz00_1706;

														BgL_offsetz00_1706 =
															((long) (BgL_offsetz00_1705) - OBJECT_TYPE);
														{	/* Inline/loop.scm 194 */
															long BgL_modz00_1707;

															{	/* Inline/loop.scm 194 */
																int BgL_arg2645z00_1708;

																BgL_arg2645z00_1708 = (int) (((long) 16));
																{	/* Inline/loop.scm 194 */
																	long BgL_auxz00_3495;

																	BgL_auxz00_3495 =
																		(long) (BgL_arg2645z00_1708);
																	BgL_modz00_1707 =
																		(BgL_offsetz00_1706 / BgL_auxz00_3495);
															}}
															{	/* Inline/loop.scm 194 */
																long BgL_restz00_1709;

																{	/* Inline/loop.scm 194 */
																	int BgL_arg2644z00_1710;

																	BgL_arg2644z00_1710 = (int) (((long) 16));
																	{	/* Inline/loop.scm 194 */
																		long BgL_auxz00_3499;

																		BgL_auxz00_3499 =
																			(long) (BgL_arg2644z00_1710);
																		BgL_restz00_1709 =
																			(BgL_offsetz00_1706 % BgL_auxz00_3499);
																}}
																{	/* Inline/loop.scm 194 */

																	BgL_method3435z00_1699 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1704,
																			(int) (BgL_modz00_1707)),
																		(int) (BgL_restz00_1709));
									}}}}}}}}
									BgL_testz00_3484 =
										CBOOL(PROCEDURE_ENTRY(BgL_method3435z00_1699)
										(BgL_method3435z00_1699, (obj_t) (BgL_nodez00_1698), BEOA));
						}}}
						if (BgL_testz00_3484)
							{	/* Inline/loop.scm 194 */
								return ((bool_t) 1);
							}
						else
							{
								obj_t BgL_nodeza2za2_3510;

								BgL_nodeza2za2_3510 = CDR(BgL_nodeza2za2_886);
								BgL_nodeza2za2_886 = BgL_nodeza2za2_3510;
								goto BgL_zc3anonymousza33522ze3z83_887;
							}
					}
			}
		}
	}



/* nest-loop!* */
	obj_t BGl_nestzd2loopz12za2z62zzinline_loopz00(obj_t BgL_nodeza2za2_89,
		obj_t BgL_varz00_90, obj_t BgL_nesterz00_91)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 381 */
			{
				obj_t BgL_nodeza2za2_894;

				BgL_nodeza2za2_894 = BgL_nodeza2za2_89;
			BgL_zc3anonymousza33527ze3z83_895:
				if (NULLP(BgL_nodeza2za2_894))
					{	/* Inline/loop.scm 383 */
						return CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Inline/loop.scm 383 */
						{	/* Inline/loop.scm 386 */
							BgL_nodez00_bglt BgL_arg3529z00_897;

							{	/* Inline/loop.scm 386 */
								obj_t BgL_arg3530z00_898;

								BgL_arg3530z00_898 = CAR(BgL_nodeza2za2_894);
								{	/* Inline/loop.scm 386 */
									BgL_nodez00_bglt BgL_res3726z00_1755;

									{	/* Inline/loop.scm 386 */
										BgL_nodez00_bglt BgL_nodez00_1727;

										BgL_localz00_bglt BgL_localz00_1728;

										obj_t BgL_nesterz00_1729;

										BgL_nodez00_1727 = (BgL_nodez00_bglt) (BgL_arg3530z00_898);
										BgL_localz00_1728 = (BgL_localz00_bglt) (BgL_varz00_90);
										BgL_nesterz00_1729 = BgL_nesterz00_91;
										{	/* Inline/loop.scm 386 */
											obj_t BgL_method3471z00_1730;

											{	/* Inline/loop.scm 386 */
												BgL_objectz00_bglt BgL_objz00_1731;

												BgL_objz00_1731 =
													(BgL_objectz00_bglt) (BgL_nodez00_1727);
												{	/* Inline/loop.scm 386 */
													long BgL_objzd2classzd2numz00_1732;

													BgL_objzd2classzd2numz00_1732 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1731);
													{	/* Inline/loop.scm 386 */
														obj_t BgL_arg2643z00_1733;

														BgL_arg2643z00_1733 =
															PROCEDURE_REF
															(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
															(int) (((long) 1)));
														{	/* Inline/loop.scm 386 */
															obj_t BgL_arrayz00_1735;

															int BgL_offsetz00_1736;

															BgL_arrayz00_1735 = BgL_arg2643z00_1733;
															BgL_offsetz00_1736 =
																(int) (BgL_objzd2classzd2numz00_1732);
															{	/* Inline/loop.scm 386 */
																long BgL_offsetz00_1737;

																BgL_offsetz00_1737 =
																	((long) (BgL_offsetz00_1736) - OBJECT_TYPE);
																{	/* Inline/loop.scm 386 */
																	long BgL_modz00_1738;

																	{	/* Inline/loop.scm 386 */
																		int BgL_arg2645z00_1739;

																		BgL_arg2645z00_1739 = (int) (((long) 16));
																		{	/* Inline/loop.scm 386 */
																			long BgL_auxz00_3526;

																			BgL_auxz00_3526 =
																				(long) (BgL_arg2645z00_1739);
																			BgL_modz00_1738 =
																				(BgL_offsetz00_1737 / BgL_auxz00_3526);
																	}}
																	{	/* Inline/loop.scm 386 */
																		long BgL_restz00_1740;

																		{	/* Inline/loop.scm 386 */
																			int BgL_arg2644z00_1741;

																			BgL_arg2644z00_1741 = (int) (((long) 16));
																			{	/* Inline/loop.scm 386 */
																				long BgL_auxz00_3530;

																				BgL_auxz00_3530 =
																					(long) (BgL_arg2644z00_1741);
																				BgL_restz00_1740 =
																					(BgL_offsetz00_1737 %
																					BgL_auxz00_3530);
																		}}
																		{	/* Inline/loop.scm 386 */

																			BgL_method3471z00_1730 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1735,
																					(int) (BgL_modz00_1738)),
																				(int) (BgL_restz00_1740));
											}}}}}}}}
											BgL_res3726z00_1755 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3471z00_1730) (BgL_method3471z00_1730,
													(obj_t) (BgL_nodez00_1727),
													(obj_t) (BgL_localz00_1728), BgL_nesterz00_1729,
													BEOA));
									}}
									BgL_arg3529z00_897 = BgL_res3726z00_1755;
							}}
							{	/* Inline/loop.scm 386 */
								obj_t BgL_auxz00_3542;

								BgL_auxz00_3542 = (obj_t) (BgL_arg3529z00_897);
								SET_CAR(BgL_nodeza2za2_894, BgL_auxz00_3542);
						}}
						{
							obj_t BgL_nodeza2za2_3545;

							BgL_nodeza2za2_3545 = CDR(BgL_nodeza2za2_894);
							BgL_nodeza2za2_894 = BgL_nodeza2za2_3545;
							goto BgL_zc3anonymousza33527ze3z83_895;
						}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinline_loopz00()
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_findzd2letzd2funzf3zd2defaul3434zd2envzf3zzinline_loopz00,
				BGl_nodez00zzast_nodez00, BGl_string3847z00zzinline_loopz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_nestzd2loopz12zd2default3470zd2envzc0zzinline_loopz00,
				BGl_nodez00zzast_nodez00, BGl_string3848z00zzinline_loopz00);
		}
	}



/* find-let-fun? */
	obj_t BGl_findzd2letzd2funzf3zf3zzinline_loopz00(BgL_nodez00_bglt
		BgL_nodez00_3)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 55 */
			{	/* Inline/loop.scm 55 */
				obj_t BgL_method3435z00_1759;

				{	/* Inline/loop.scm 55 */
					BgL_objectz00_bglt BgL_objz00_1760;

					BgL_objz00_1760 = (BgL_objectz00_bglt) (BgL_nodez00_3);
					{	/* Inline/loop.scm 55 */
						long BgL_objzd2classzd2numz00_1761;

						BgL_objzd2classzd2numz00_1761 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1760);
						{	/* Inline/loop.scm 55 */
							obj_t BgL_arg2643z00_1762;

							BgL_arg2643z00_1762 =
								PROCEDURE_REF(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
								(int) (((long) 1)));
							{	/* Inline/loop.scm 55 */
								obj_t BgL_arrayz00_1764;

								int BgL_offsetz00_1765;

								BgL_arrayz00_1764 = BgL_arg2643z00_1762;
								BgL_offsetz00_1765 = (int) (BgL_objzd2classzd2numz00_1761);
								{	/* Inline/loop.scm 55 */
									long BgL_offsetz00_1766;

									BgL_offsetz00_1766 =
										((long) (BgL_offsetz00_1765) - OBJECT_TYPE);
									{	/* Inline/loop.scm 55 */
										long BgL_modz00_1767;

										{	/* Inline/loop.scm 55 */
											int BgL_arg2645z00_1768;

											BgL_arg2645z00_1768 = (int) (((long) 16));
											{	/* Inline/loop.scm 55 */
												long BgL_auxz00_3557;

												BgL_auxz00_3557 = (long) (BgL_arg2645z00_1768);
												BgL_modz00_1767 =
													(BgL_offsetz00_1766 / BgL_auxz00_3557);
										}}
										{	/* Inline/loop.scm 55 */
											long BgL_restz00_1769;

											{	/* Inline/loop.scm 55 */
												int BgL_arg2644z00_1770;

												BgL_arg2644z00_1770 = (int) (((long) 16));
												{	/* Inline/loop.scm 55 */
													long BgL_auxz00_3561;

													BgL_auxz00_3561 = (long) (BgL_arg2644z00_1770);
													BgL_restz00_1769 =
														(BgL_offsetz00_1766 % BgL_auxz00_3561);
											}}
											{	/* Inline/loop.scm 55 */

												BgL_method3435z00_1759 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1764,
														(int) (BgL_modz00_1767)), (int) (BgL_restz00_1769));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3435z00_1759) (BgL_method3435z00_1759,
					(obj_t) (BgL_nodez00_3), BEOA);
			}
		}
	}



/* _find-let-fun? */
	obj_t BGl__findzd2letzd2funzf3zf3zzinline_loopz00(obj_t BgL_envz00_3227,
		obj_t BgL_nodez00_3228)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 55 */
			return
				BGl_findzd2letzd2funzf3zf3zzinline_loopz00(
				(BgL_nodez00_bglt) (BgL_nodez00_3228));
		}
	}



/* _find-let-fun?-defaul3434 */
	obj_t BGl__findzd2letzd2funzf3zd2defaul3434z21zzinline_loopz00(obj_t
		BgL_envz00_3233, obj_t BgL_nodez00_3234)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 15 */
			return BBOOL(((bool_t) 0));
		}
	}



/* nest-loop! */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_nodez00_bglt BgL_nodez00_23,
		BgL_localz00_bglt BgL_localz00_24, obj_t BgL_nesterz00_25)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 202 */
			{	/* Inline/loop.scm 202 */
				obj_t BgL_method3471z00_1784;

				{	/* Inline/loop.scm 202 */
					BgL_objectz00_bglt BgL_objz00_1785;

					BgL_objz00_1785 = (BgL_objectz00_bglt) (BgL_nodez00_23);
					{	/* Inline/loop.scm 202 */
						long BgL_objzd2classzd2numz00_1786;

						BgL_objzd2classzd2numz00_1786 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1785);
						{	/* Inline/loop.scm 202 */
							obj_t BgL_arg2643z00_1787;

							BgL_arg2643z00_1787 =
								PROCEDURE_REF(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
								(int) (((long) 1)));
							{	/* Inline/loop.scm 202 */
								obj_t BgL_arrayz00_1789;

								int BgL_offsetz00_1790;

								BgL_arrayz00_1789 = BgL_arg2643z00_1787;
								BgL_offsetz00_1790 = (int) (BgL_objzd2classzd2numz00_1786);
								{	/* Inline/loop.scm 202 */
									long BgL_offsetz00_1791;

									BgL_offsetz00_1791 =
										((long) (BgL_offsetz00_1790) - OBJECT_TYPE);
									{	/* Inline/loop.scm 202 */
										long BgL_modz00_1792;

										{	/* Inline/loop.scm 202 */
											int BgL_arg2645z00_1793;

											BgL_arg2645z00_1793 = (int) (((long) 16));
											{	/* Inline/loop.scm 202 */
												long BgL_auxz00_3582;

												BgL_auxz00_3582 = (long) (BgL_arg2645z00_1793);
												BgL_modz00_1792 =
													(BgL_offsetz00_1791 / BgL_auxz00_3582);
										}}
										{	/* Inline/loop.scm 202 */
											long BgL_restz00_1794;

											{	/* Inline/loop.scm 202 */
												int BgL_arg2644z00_1795;

												BgL_arg2644z00_1795 = (int) (((long) 16));
												{	/* Inline/loop.scm 202 */
													long BgL_auxz00_3586;

													BgL_auxz00_3586 = (long) (BgL_arg2644z00_1795);
													BgL_restz00_1794 =
														(BgL_offsetz00_1791 % BgL_auxz00_3586);
											}}
											{	/* Inline/loop.scm 202 */

												BgL_method3471z00_1784 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1789,
														(int) (BgL_modz00_1792)), (int) (BgL_restz00_1794));
				}}}}}}}}
				return
					(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3471z00_1784)
					(BgL_method3471z00_1784, (obj_t) (BgL_nodez00_23),
						(obj_t) (BgL_localz00_24), BgL_nesterz00_25, BEOA));
			}
		}
	}



/* _nest-loop! */
	obj_t BGl__nestzd2loopz12zc0zzinline_loopz00(obj_t BgL_envz00_3229,
		obj_t BgL_nodez00_3230, obj_t BgL_localz00_3231, obj_t BgL_nesterz00_3232)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 202 */
			return
				(obj_t) (BGl_nestzd2loopz12zc0zzinline_loopz00(
					(BgL_nodez00_bglt) (BgL_nodez00_3230),
					(BgL_localz00_bglt) (BgL_localz00_3231), BgL_nesterz00_3232));
		}
	}



/* nest-loop!-default3470 */
	BgL_nodez00_bglt
		BGl_nestzd2loopz12zd2default3470z12zzinline_loopz00(BgL_nodez00_bglt
		BgL_nodez00_26, BgL_localz00_bglt BgL_localz00_27, obj_t BgL_nesterz00_28)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 15 */
			return
				(BgL_nodez00_bglt) (BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
					BGl_string3849z00zzinline_loopz00, (obj_t) (BgL_nodez00_26)));
		}
	}



/* _nest-loop!-default3470 */
	obj_t BGl__nestzd2loopz12zd2default3470z12zzinline_loopz00(obj_t
		BgL_envz00_3235, obj_t BgL_nodez00_3236, obj_t BgL_localz00_3237,
		obj_t BgL_nesterz00_3238)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 15 */
			return
				(obj_t) (BGl_nestzd2loopz12zd2default3470z12zzinline_loopz00(
					(BgL_nodez00_bglt) (BgL_nodez00_3236),
					(BgL_localz00_bglt) (BgL_localz00_3237), BgL_nesterz00_3238));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinline_loopz00()
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_sequencez00zzast_nodez00, BGl_proc3850z00zzinline_loopz00,
				BGl_string3847z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_appz00zzast_nodez00, BGl_proc3851z00zzinline_loopz00,
				BGl_string3847z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3852z00zzinline_loopz00,
				BGl_string3847z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_funcallz00zzast_nodez00, BGl_proc3853z00zzinline_loopz00,
				BGl_string3847z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_externz00zzast_nodez00, BGl_proc3854z00zzinline_loopz00,
				BGl_string3847z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_castz00zzast_nodez00, BGl_proc3855z00zzinline_loopz00,
				BGl_string3847z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_setqz00zzast_nodez00, BGl_proc3856z00zzinline_loopz00,
				BGl_string3847z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3857z00zzinline_loopz00,
				BGl_string3847z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_failz00zzast_nodez00, BGl_proc3858z00zzinline_loopz00,
				BGl_string3847z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_selectz00zzast_nodez00, BGl_proc3859z00zzinline_loopz00,
				BGl_string3847z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3860z00zzinline_loopz00,
				BGl_string3847z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3861z00zzinline_loopz00,
				BGl_string3847z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3862z00zzinline_loopz00,
				BGl_string3847z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3863z00zzinline_loopz00,
				BGl_string3847z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3864z00zzinline_loopz00,
				BGl_string3847z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3865z00zzinline_loopz00,
				BGl_string3847z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3866z00zzinline_loopz00,
				BGl_string3847z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00, BGl_atomz00zzast_nodez00,
				BGl_proc3867z00zzinline_loopz00, BGl_string3848z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00, BGl_kwotez00zzast_nodez00,
				BGl_proc3868z00zzinline_loopz00, BGl_string3848z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00, BGl_varz00zzast_nodez00,
				BGl_proc3869z00zzinline_loopz00, BGl_string3848z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_sequencez00zzast_nodez00, BGl_proc3870z00zzinline_loopz00,
				BGl_string3848z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00, BGl_appz00zzast_nodez00,
				BGl_proc3871z00zzinline_loopz00, BGl_string3848z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3872z00zzinline_loopz00,
				BGl_string3848z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_funcallz00zzast_nodez00, BGl_proc3873z00zzinline_loopz00,
				BGl_string3848z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_externz00zzast_nodez00, BGl_proc3874z00zzinline_loopz00,
				BGl_string3848z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00, BGl_castz00zzast_nodez00,
				BGl_proc3875z00zzinline_loopz00, BGl_string3848z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00, BGl_setqz00zzast_nodez00,
				BGl_proc3876z00zzinline_loopz00, BGl_string3848z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3877z00zzinline_loopz00,
				BGl_string3848z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00, BGl_failz00zzast_nodez00,
				BGl_proc3878z00zzinline_loopz00, BGl_string3848z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_selectz00zzast_nodez00, BGl_proc3879z00zzinline_loopz00,
				BGl_string3848z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3880z00zzinline_loopz00,
				BGl_string3848z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3881z00zzinline_loopz00,
				BGl_string3848z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3882z00zzinline_loopz00,
				BGl_string3848z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3883z00zzinline_loopz00,
				BGl_string3848z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3884z00zzinline_loopz00,
				BGl_string3848z00zzinline_loopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3885z00zzinline_loopz00,
				BGl_string3848z00zzinline_loopz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3886z00zzinline_loopz00,
				BGl_string3848z00zzinline_loopz00);
		}
	}



/* nest-loop!-box-set!3514 */
	obj_t BGl_nestzd2loopz12zd2boxzd2setz123514zd2zzinline_loopz00(obj_t
		BgL_envz00_3276, obj_t BgL_nodez00_3277, obj_t BgL_vz00_3278,
		obj_t BgL_nesterz00_3279)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 372 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1650;

				obj_t BgL_vz00_1651;

				obj_t BgL_nesterz00_1652;

				{	/* Inline/loop.scm 373 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_3647;

					BgL_nodez00_1650 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_3277);
					BgL_vz00_1651 = BgL_vz00_3278;
					BgL_nesterz00_1652 = BgL_nesterz00_3279;
					{	/* Inline/loop.scm 374 */
						BgL_nodez00_bglt BgL_arg3715z00_1656;

						{	/* Inline/loop.scm 374 */
							BgL_varz00_bglt BgL_arg3716z00_1657;

							BgL_arg3716z00_1657 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1650))->
								BgL_varz00);
							{	/* Inline/loop.scm 374 */
								BgL_nodez00_bglt BgL_res3843z00_3188;

								{	/* Inline/loop.scm 374 */
									BgL_nodez00_bglt BgL_nodez00_3160;

									BgL_localz00_bglt BgL_localz00_3161;

									obj_t BgL_nesterz00_3162;

									BgL_nodez00_3160 = (BgL_nodez00_bglt) (BgL_arg3716z00_1657);
									BgL_localz00_3161 = (BgL_localz00_bglt) (BgL_vz00_1651);
									BgL_nesterz00_3162 = BgL_nesterz00_1652;
									{	/* Inline/loop.scm 374 */
										obj_t BgL_method3471z00_3163;

										{	/* Inline/loop.scm 374 */
											BgL_objectz00_bglt BgL_objz00_3164;

											BgL_objz00_3164 = (BgL_objectz00_bglt) (BgL_nodez00_3160);
											{	/* Inline/loop.scm 374 */
												long BgL_objzd2classzd2numz00_3165;

												BgL_objzd2classzd2numz00_3165 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3164);
												{	/* Inline/loop.scm 374 */
													obj_t BgL_arg2643z00_3166;

													BgL_arg2643z00_3166 =
														PROCEDURE_REF
														(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 374 */
														obj_t BgL_arrayz00_3168;

														int BgL_offsetz00_3169;

														BgL_arrayz00_3168 = BgL_arg2643z00_3166;
														BgL_offsetz00_3169 =
															(int) (BgL_objzd2classzd2numz00_3165);
														{	/* Inline/loop.scm 374 */
															long BgL_offsetz00_3170;

															BgL_offsetz00_3170 =
																((long) (BgL_offsetz00_3169) - OBJECT_TYPE);
															{	/* Inline/loop.scm 374 */
																long BgL_modz00_3171;

																{	/* Inline/loop.scm 374 */
																	int BgL_arg2645z00_3172;

																	BgL_arg2645z00_3172 = (int) (((long) 16));
																	{	/* Inline/loop.scm 374 */
																		long BgL_auxz00_3659;

																		BgL_auxz00_3659 =
																			(long) (BgL_arg2645z00_3172);
																		BgL_modz00_3171 =
																			(BgL_offsetz00_3170 / BgL_auxz00_3659);
																}}
																{	/* Inline/loop.scm 374 */
																	long BgL_restz00_3173;

																	{	/* Inline/loop.scm 374 */
																		int BgL_arg2644z00_3174;

																		BgL_arg2644z00_3174 = (int) (((long) 16));
																		{	/* Inline/loop.scm 374 */
																			long BgL_auxz00_3663;

																			BgL_auxz00_3663 =
																				(long) (BgL_arg2644z00_3174);
																			BgL_restz00_3173 =
																				(BgL_offsetz00_3170 % BgL_auxz00_3663);
																	}}
																	{	/* Inline/loop.scm 374 */

																		BgL_method3471z00_3163 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3168,
																				(int) (BgL_modz00_3171)),
																			(int) (BgL_restz00_3173));
										}}}}}}}}
										BgL_res3843z00_3188 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3471z00_3163) (BgL_method3471z00_3163,
												(obj_t) (BgL_nodez00_3160), (obj_t) (BgL_localz00_3161),
												BgL_nesterz00_3162, BEOA));
								}}
								BgL_arg3715z00_1656 = BgL_res3843z00_3188;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3675;

							BgL_auxz00_3675 = (BgL_varz00_bglt) (BgL_arg3715z00_1656);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1650))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_3675), BUNSPEC);
					}}
					{	/* Inline/loop.scm 375 */
						BgL_nodez00_bglt BgL_arg3717z00_1658;

						{	/* Inline/loop.scm 375 */
							BgL_nodez00_bglt BgL_arg3718z00_1659;

							BgL_arg3718z00_1659 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1650))->
								BgL_valuez00);
							{	/* Inline/loop.scm 375 */
								BgL_nodez00_bglt BgL_res3846z00_3220;

								{	/* Inline/loop.scm 375 */
									BgL_localz00_bglt BgL_localz00_3193;

									obj_t BgL_nesterz00_3194;

									BgL_localz00_3193 = (BgL_localz00_bglt) (BgL_vz00_1651);
									BgL_nesterz00_3194 = BgL_nesterz00_1652;
									{	/* Inline/loop.scm 375 */
										obj_t BgL_method3471z00_3195;

										{	/* Inline/loop.scm 375 */
											BgL_objectz00_bglt BgL_objz00_3196;

											BgL_objz00_3196 =
												(BgL_objectz00_bglt) (BgL_arg3718z00_1659);
											{	/* Inline/loop.scm 375 */
												long BgL_objzd2classzd2numz00_3197;

												BgL_objzd2classzd2numz00_3197 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3196);
												{	/* Inline/loop.scm 375 */
													obj_t BgL_arg2643z00_3198;

													BgL_arg2643z00_3198 =
														PROCEDURE_REF
														(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 375 */
														obj_t BgL_arrayz00_3200;

														int BgL_offsetz00_3201;

														BgL_arrayz00_3200 = BgL_arg2643z00_3198;
														BgL_offsetz00_3201 =
															(int) (BgL_objzd2classzd2numz00_3197);
														{	/* Inline/loop.scm 375 */
															long BgL_offsetz00_3202;

															BgL_offsetz00_3202 =
																((long) (BgL_offsetz00_3201) - OBJECT_TYPE);
															{	/* Inline/loop.scm 375 */
																long BgL_modz00_3203;

																{	/* Inline/loop.scm 375 */
																	int BgL_arg2645z00_3204;

																	BgL_arg2645z00_3204 = (int) (((long) 16));
																	{	/* Inline/loop.scm 375 */
																		long BgL_auxz00_3688;

																		BgL_auxz00_3688 =
																			(long) (BgL_arg2645z00_3204);
																		BgL_modz00_3203 =
																			(BgL_offsetz00_3202 / BgL_auxz00_3688);
																}}
																{	/* Inline/loop.scm 375 */
																	long BgL_restz00_3205;

																	{	/* Inline/loop.scm 375 */
																		int BgL_arg2644z00_3206;

																		BgL_arg2644z00_3206 = (int) (((long) 16));
																		{	/* Inline/loop.scm 375 */
																			long BgL_auxz00_3692;

																			BgL_auxz00_3692 =
																				(long) (BgL_arg2644z00_3206);
																			BgL_restz00_3205 =
																				(BgL_offsetz00_3202 % BgL_auxz00_3692);
																	}}
																	{	/* Inline/loop.scm 375 */

																		BgL_method3471z00_3195 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3200,
																				(int) (BgL_modz00_3203)),
																			(int) (BgL_restz00_3205));
										}}}}}}}}
										BgL_res3846z00_3220 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3471z00_3195) (BgL_method3471z00_3195,
												(obj_t) (BgL_arg3718z00_1659),
												(obj_t) (BgL_localz00_3193), BgL_nesterz00_3194, BEOA));
								}}
								BgL_arg3717z00_1658 = BgL_res3846z00_3220;
						}}
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1650))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3717z00_1658), BUNSPEC);
					}
					BgL_auxz00_3647 = BgL_nodez00_1650;
					return (obj_t) (BgL_auxz00_3647);
				}
			}
		}
	}



/* nest-loop!-box-ref3512 */
	obj_t BGl_nestzd2loopz12zd2boxzd2ref3512zc0zzinline_loopz00(obj_t
		BgL_envz00_3280, obj_t BgL_nodez00_3281, obj_t BgL_vz00_3282,
		obj_t BgL_nesterz00_3283)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 364 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1640;

				obj_t BgL_vz00_1641;

				obj_t BgL_nesterz00_1642;

				{	/* Inline/loop.scm 365 */
					BgL_boxzd2refzd2_bglt BgL_auxz00_3707;

					BgL_nodez00_1640 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_3281);
					BgL_vz00_1641 = BgL_vz00_3282;
					BgL_nesterz00_1642 = BgL_nesterz00_3283;
					{	/* Inline/loop.scm 365 */
						BgL_nodez00_bglt BgL_arg3712z00_3125;

						{	/* Inline/loop.scm 365 */
							BgL_varz00_bglt BgL_arg3713z00_3126;

							BgL_arg3713z00_3126 =
								(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1640))->BgL_varz00);
							{	/* Inline/loop.scm 365 */
								BgL_nodez00_bglt BgL_res3840z00_3156;

								{	/* Inline/loop.scm 365 */
									BgL_nodez00_bglt BgL_nodez00_3128;

									BgL_localz00_bglt BgL_localz00_3129;

									obj_t BgL_nesterz00_3130;

									BgL_nodez00_3128 = (BgL_nodez00_bglt) (BgL_arg3713z00_3126);
									BgL_localz00_3129 = (BgL_localz00_bglt) (BgL_vz00_1641);
									BgL_nesterz00_3130 = BgL_nesterz00_1642;
									{	/* Inline/loop.scm 365 */
										obj_t BgL_method3471z00_3131;

										{	/* Inline/loop.scm 365 */
											BgL_objectz00_bglt BgL_objz00_3132;

											BgL_objz00_3132 = (BgL_objectz00_bglt) (BgL_nodez00_3128);
											{	/* Inline/loop.scm 365 */
												long BgL_objzd2classzd2numz00_3133;

												BgL_objzd2classzd2numz00_3133 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3132);
												{	/* Inline/loop.scm 365 */
													obj_t BgL_arg2643z00_3134;

													BgL_arg2643z00_3134 =
														PROCEDURE_REF
														(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 365 */
														obj_t BgL_arrayz00_3136;

														int BgL_offsetz00_3137;

														BgL_arrayz00_3136 = BgL_arg2643z00_3134;
														BgL_offsetz00_3137 =
															(int) (BgL_objzd2classzd2numz00_3133);
														{	/* Inline/loop.scm 365 */
															long BgL_offsetz00_3138;

															BgL_offsetz00_3138 =
																((long) (BgL_offsetz00_3137) - OBJECT_TYPE);
															{	/* Inline/loop.scm 365 */
																long BgL_modz00_3139;

																{	/* Inline/loop.scm 365 */
																	int BgL_arg2645z00_3140;

																	BgL_arg2645z00_3140 = (int) (((long) 16));
																	{	/* Inline/loop.scm 365 */
																		long BgL_auxz00_3719;

																		BgL_auxz00_3719 =
																			(long) (BgL_arg2645z00_3140);
																		BgL_modz00_3139 =
																			(BgL_offsetz00_3138 / BgL_auxz00_3719);
																}}
																{	/* Inline/loop.scm 365 */
																	long BgL_restz00_3141;

																	{	/* Inline/loop.scm 365 */
																		int BgL_arg2644z00_3142;

																		BgL_arg2644z00_3142 = (int) (((long) 16));
																		{	/* Inline/loop.scm 365 */
																			long BgL_auxz00_3723;

																			BgL_auxz00_3723 =
																				(long) (BgL_arg2644z00_3142);
																			BgL_restz00_3141 =
																				(BgL_offsetz00_3138 % BgL_auxz00_3723);
																	}}
																	{	/* Inline/loop.scm 365 */

																		BgL_method3471z00_3131 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3136,
																				(int) (BgL_modz00_3139)),
																			(int) (BgL_restz00_3141));
										}}}}}}}}
										BgL_res3840z00_3156 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3471z00_3131) (BgL_method3471z00_3131,
												(obj_t) (BgL_nodez00_3128), (obj_t) (BgL_localz00_3129),
												BgL_nesterz00_3130, BEOA));
								}}
								BgL_arg3712z00_3125 = BgL_res3840z00_3156;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3735;

							BgL_auxz00_3735 = (BgL_varz00_bglt) (BgL_arg3712z00_3125);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1640))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_3735), BUNSPEC);
					}}
					BgL_auxz00_3707 = BgL_nodez00_1640;
					return (obj_t) (BgL_auxz00_3707);
				}
			}
		}
	}



/* nest-loop!-make-box3510 */
	obj_t BGl_nestzd2loopz12zd2makezd2box3510zc0zzinline_loopz00(obj_t
		BgL_envz00_3284, obj_t BgL_nodez00_3285, obj_t BgL_varz00_3286,
		obj_t BgL_nesterz00_3287)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 356 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1630;

				obj_t BgL_varz00_1631;

				obj_t BgL_nesterz00_1632;

				{	/* Inline/loop.scm 357 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_3740;

					BgL_nodez00_1630 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_3285);
					BgL_varz00_1631 = BgL_varz00_3286;
					BgL_nesterz00_1632 = BgL_nesterz00_3287;
					{	/* Inline/loop.scm 357 */
						BgL_nodez00_bglt BgL_arg3709z00_3090;

						{	/* Inline/loop.scm 357 */
							BgL_nodez00_bglt BgL_arg3710z00_3091;

							BgL_arg3710z00_3091 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1630))->
								BgL_valuez00);
							{	/* Inline/loop.scm 357 */
								BgL_nodez00_bglt BgL_res3837z00_3121;

								{	/* Inline/loop.scm 357 */
									BgL_localz00_bglt BgL_localz00_3094;

									obj_t BgL_nesterz00_3095;

									BgL_localz00_3094 = (BgL_localz00_bglt) (BgL_varz00_1631);
									BgL_nesterz00_3095 = BgL_nesterz00_1632;
									{	/* Inline/loop.scm 357 */
										obj_t BgL_method3471z00_3096;

										{	/* Inline/loop.scm 357 */
											BgL_objectz00_bglt BgL_objz00_3097;

											BgL_objz00_3097 =
												(BgL_objectz00_bglt) (BgL_arg3710z00_3091);
											{	/* Inline/loop.scm 357 */
												long BgL_objzd2classzd2numz00_3098;

												BgL_objzd2classzd2numz00_3098 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3097);
												{	/* Inline/loop.scm 357 */
													obj_t BgL_arg2643z00_3099;

													BgL_arg2643z00_3099 =
														PROCEDURE_REF
														(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 357 */
														obj_t BgL_arrayz00_3101;

														int BgL_offsetz00_3102;

														BgL_arrayz00_3101 = BgL_arg2643z00_3099;
														BgL_offsetz00_3102 =
															(int) (BgL_objzd2classzd2numz00_3098);
														{	/* Inline/loop.scm 357 */
															long BgL_offsetz00_3103;

															BgL_offsetz00_3103 =
																((long) (BgL_offsetz00_3102) - OBJECT_TYPE);
															{	/* Inline/loop.scm 357 */
																long BgL_modz00_3104;

																{	/* Inline/loop.scm 357 */
																	int BgL_arg2645z00_3105;

																	BgL_arg2645z00_3105 = (int) (((long) 16));
																	{	/* Inline/loop.scm 357 */
																		long BgL_auxz00_3751;

																		BgL_auxz00_3751 =
																			(long) (BgL_arg2645z00_3105);
																		BgL_modz00_3104 =
																			(BgL_offsetz00_3103 / BgL_auxz00_3751);
																}}
																{	/* Inline/loop.scm 357 */
																	long BgL_restz00_3106;

																	{	/* Inline/loop.scm 357 */
																		int BgL_arg2644z00_3107;

																		BgL_arg2644z00_3107 = (int) (((long) 16));
																		{	/* Inline/loop.scm 357 */
																			long BgL_auxz00_3755;

																			BgL_auxz00_3755 =
																				(long) (BgL_arg2644z00_3107);
																			BgL_restz00_3106 =
																				(BgL_offsetz00_3103 % BgL_auxz00_3755);
																	}}
																	{	/* Inline/loop.scm 357 */

																		BgL_method3471z00_3096 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3101,
																				(int) (BgL_modz00_3104)),
																			(int) (BgL_restz00_3106));
										}}}}}}}}
										BgL_res3837z00_3121 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3471z00_3096) (BgL_method3471z00_3096,
												(obj_t) (BgL_arg3710z00_3091),
												(obj_t) (BgL_localz00_3094), BgL_nesterz00_3095, BEOA));
								}}
								BgL_arg3709z00_3090 = BgL_res3837z00_3121;
						}}
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1630))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3709z00_3090), BUNSPEC);
					}
					BgL_auxz00_3740 = BgL_nodez00_1630;
					return (obj_t) (BgL_auxz00_3740);
				}
			}
		}
	}



/* nest-loop!-jump-ex-i3508 */
	obj_t BGl_nestzd2loopz12zd2jumpzd2exzd2i3508z12zzinline_loopz00(obj_t
		BgL_envz00_3288, obj_t BgL_nodez00_3289, obj_t BgL_vz00_3290,
		obj_t BgL_nesterz00_3291)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 347 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1618;

				obj_t BgL_vz00_1619;

				obj_t BgL_nesterz00_1620;

				{	/* Inline/loop.scm 348 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_3770;

					BgL_nodez00_1618 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_3289);
					BgL_vz00_1619 = BgL_vz00_3290;
					BgL_nesterz00_1620 = BgL_nesterz00_3291;
					{	/* Inline/loop.scm 349 */
						BgL_nodez00_bglt BgL_arg3704z00_1624;

						{	/* Inline/loop.scm 349 */
							BgL_nodez00_bglt BgL_arg3705z00_1625;

							BgL_arg3705z00_1625 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1618))->
								BgL_exitz00);
							{	/* Inline/loop.scm 349 */
								BgL_nodez00_bglt BgL_res3831z00_3054;

								{	/* Inline/loop.scm 349 */
									BgL_localz00_bglt BgL_localz00_3027;

									obj_t BgL_nesterz00_3028;

									BgL_localz00_3027 = (BgL_localz00_bglt) (BgL_vz00_1619);
									BgL_nesterz00_3028 = BgL_nesterz00_1620;
									{	/* Inline/loop.scm 349 */
										obj_t BgL_method3471z00_3029;

										{	/* Inline/loop.scm 349 */
											BgL_objectz00_bglt BgL_objz00_3030;

											BgL_objz00_3030 =
												(BgL_objectz00_bglt) (BgL_arg3705z00_1625);
											{	/* Inline/loop.scm 349 */
												long BgL_objzd2classzd2numz00_3031;

												BgL_objzd2classzd2numz00_3031 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3030);
												{	/* Inline/loop.scm 349 */
													obj_t BgL_arg2643z00_3032;

													BgL_arg2643z00_3032 =
														PROCEDURE_REF
														(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 349 */
														obj_t BgL_arrayz00_3034;

														int BgL_offsetz00_3035;

														BgL_arrayz00_3034 = BgL_arg2643z00_3032;
														BgL_offsetz00_3035 =
															(int) (BgL_objzd2classzd2numz00_3031);
														{	/* Inline/loop.scm 349 */
															long BgL_offsetz00_3036;

															BgL_offsetz00_3036 =
																((long) (BgL_offsetz00_3035) - OBJECT_TYPE);
															{	/* Inline/loop.scm 349 */
																long BgL_modz00_3037;

																{	/* Inline/loop.scm 349 */
																	int BgL_arg2645z00_3038;

																	BgL_arg2645z00_3038 = (int) (((long) 16));
																	{	/* Inline/loop.scm 349 */
																		long BgL_auxz00_3781;

																		BgL_auxz00_3781 =
																			(long) (BgL_arg2645z00_3038);
																		BgL_modz00_3037 =
																			(BgL_offsetz00_3036 / BgL_auxz00_3781);
																}}
																{	/* Inline/loop.scm 349 */
																	long BgL_restz00_3039;

																	{	/* Inline/loop.scm 349 */
																		int BgL_arg2644z00_3040;

																		BgL_arg2644z00_3040 = (int) (((long) 16));
																		{	/* Inline/loop.scm 349 */
																			long BgL_auxz00_3785;

																			BgL_auxz00_3785 =
																				(long) (BgL_arg2644z00_3040);
																			BgL_restz00_3039 =
																				(BgL_offsetz00_3036 % BgL_auxz00_3785);
																	}}
																	{	/* Inline/loop.scm 349 */

																		BgL_method3471z00_3029 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3034,
																				(int) (BgL_modz00_3037)),
																			(int) (BgL_restz00_3039));
										}}}}}}}}
										BgL_res3831z00_3054 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3471z00_3029) (BgL_method3471z00_3029,
												(obj_t) (BgL_arg3705z00_1625),
												(obj_t) (BgL_localz00_3027), BgL_nesterz00_3028, BEOA));
								}}
								BgL_arg3704z00_1624 = BgL_res3831z00_3054;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1618))->
								BgL_exitz00) =
							((BgL_nodez00_bglt) BgL_arg3704z00_1624), BUNSPEC);
					}
					{	/* Inline/loop.scm 350 */
						BgL_nodez00_bglt BgL_arg3706z00_1626;

						{	/* Inline/loop.scm 350 */
							BgL_nodez00_bglt BgL_arg3707z00_1627;

							BgL_arg3707z00_1627 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1618))->
								BgL_valuez00);
							{	/* Inline/loop.scm 350 */
								BgL_nodez00_bglt BgL_res3834z00_3086;

								{	/* Inline/loop.scm 350 */
									BgL_localz00_bglt BgL_localz00_3059;

									obj_t BgL_nesterz00_3060;

									BgL_localz00_3059 = (BgL_localz00_bglt) (BgL_vz00_1619);
									BgL_nesterz00_3060 = BgL_nesterz00_1620;
									{	/* Inline/loop.scm 350 */
										obj_t BgL_method3471z00_3061;

										{	/* Inline/loop.scm 350 */
											BgL_objectz00_bglt BgL_objz00_3062;

											BgL_objz00_3062 =
												(BgL_objectz00_bglt) (BgL_arg3707z00_1627);
											{	/* Inline/loop.scm 350 */
												long BgL_objzd2classzd2numz00_3063;

												BgL_objzd2classzd2numz00_3063 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3062);
												{	/* Inline/loop.scm 350 */
													obj_t BgL_arg2643z00_3064;

													BgL_arg2643z00_3064 =
														PROCEDURE_REF
														(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 350 */
														obj_t BgL_arrayz00_3066;

														int BgL_offsetz00_3067;

														BgL_arrayz00_3066 = BgL_arg2643z00_3064;
														BgL_offsetz00_3067 =
															(int) (BgL_objzd2classzd2numz00_3063);
														{	/* Inline/loop.scm 350 */
															long BgL_offsetz00_3068;

															BgL_offsetz00_3068 =
																((long) (BgL_offsetz00_3067) - OBJECT_TYPE);
															{	/* Inline/loop.scm 350 */
																long BgL_modz00_3069;

																{	/* Inline/loop.scm 350 */
																	int BgL_arg2645z00_3070;

																	BgL_arg2645z00_3070 = (int) (((long) 16));
																	{	/* Inline/loop.scm 350 */
																		long BgL_auxz00_3808;

																		BgL_auxz00_3808 =
																			(long) (BgL_arg2645z00_3070);
																		BgL_modz00_3069 =
																			(BgL_offsetz00_3068 / BgL_auxz00_3808);
																}}
																{	/* Inline/loop.scm 350 */
																	long BgL_restz00_3071;

																	{	/* Inline/loop.scm 350 */
																		int BgL_arg2644z00_3072;

																		BgL_arg2644z00_3072 = (int) (((long) 16));
																		{	/* Inline/loop.scm 350 */
																			long BgL_auxz00_3812;

																			BgL_auxz00_3812 =
																				(long) (BgL_arg2644z00_3072);
																			BgL_restz00_3071 =
																				(BgL_offsetz00_3068 % BgL_auxz00_3812);
																	}}
																	{	/* Inline/loop.scm 350 */

																		BgL_method3471z00_3061 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3066,
																				(int) (BgL_modz00_3069)),
																			(int) (BgL_restz00_3071));
										}}}}}}}}
										BgL_res3834z00_3086 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3471z00_3061) (BgL_method3471z00_3061,
												(obj_t) (BgL_arg3707z00_1627),
												(obj_t) (BgL_localz00_3059), BgL_nesterz00_3060, BEOA));
								}}
								BgL_arg3706z00_1626 = BgL_res3834z00_3086;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1618))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3706z00_1626), BUNSPEC);
					}
					BgL_auxz00_3770 = BgL_nodez00_1618;
					return (obj_t) (BgL_auxz00_3770);
				}
			}
		}
	}



/* nest-loop!-set-ex-it3506 */
	obj_t BGl_nestzd2loopz12zd2setzd2exzd2it3506z12zzinline_loopz00(obj_t
		BgL_envz00_3292, obj_t BgL_nodez00_3293, obj_t BgL_varz00_3294,
		obj_t BgL_nesterz00_3295)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 339 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1608;

				obj_t BgL_varz00_1609;

				obj_t BgL_nesterz00_1610;

				{	/* Inline/loop.scm 340 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_3827;

					BgL_nodez00_1608 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_3293);
					BgL_varz00_1609 = BgL_varz00_3294;
					BgL_nesterz00_1610 = BgL_nesterz00_3295;
					{	/* Inline/loop.scm 340 */
						BgL_nodez00_bglt BgL_arg3701z00_2991;

						{	/* Inline/loop.scm 340 */
							BgL_nodez00_bglt BgL_arg3702z00_2992;

							BgL_arg3702z00_2992 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1608))->
								BgL_bodyz00);
							{	/* Inline/loop.scm 340 */
								BgL_nodez00_bglt BgL_res3828z00_3022;

								{	/* Inline/loop.scm 340 */
									BgL_localz00_bglt BgL_localz00_2995;

									obj_t BgL_nesterz00_2996;

									BgL_localz00_2995 = (BgL_localz00_bglt) (BgL_varz00_1609);
									BgL_nesterz00_2996 = BgL_nesterz00_1610;
									{	/* Inline/loop.scm 340 */
										obj_t BgL_method3471z00_2997;

										{	/* Inline/loop.scm 340 */
											BgL_objectz00_bglt BgL_objz00_2998;

											BgL_objz00_2998 =
												(BgL_objectz00_bglt) (BgL_arg3702z00_2992);
											{	/* Inline/loop.scm 340 */
												long BgL_objzd2classzd2numz00_2999;

												BgL_objzd2classzd2numz00_2999 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2998);
												{	/* Inline/loop.scm 340 */
													obj_t BgL_arg2643z00_3000;

													BgL_arg2643z00_3000 =
														PROCEDURE_REF
														(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 340 */
														obj_t BgL_arrayz00_3002;

														int BgL_offsetz00_3003;

														BgL_arrayz00_3002 = BgL_arg2643z00_3000;
														BgL_offsetz00_3003 =
															(int) (BgL_objzd2classzd2numz00_2999);
														{	/* Inline/loop.scm 340 */
															long BgL_offsetz00_3004;

															BgL_offsetz00_3004 =
																((long) (BgL_offsetz00_3003) - OBJECT_TYPE);
															{	/* Inline/loop.scm 340 */
																long BgL_modz00_3005;

																{	/* Inline/loop.scm 340 */
																	int BgL_arg2645z00_3006;

																	BgL_arg2645z00_3006 = (int) (((long) 16));
																	{	/* Inline/loop.scm 340 */
																		long BgL_auxz00_3838;

																		BgL_auxz00_3838 =
																			(long) (BgL_arg2645z00_3006);
																		BgL_modz00_3005 =
																			(BgL_offsetz00_3004 / BgL_auxz00_3838);
																}}
																{	/* Inline/loop.scm 340 */
																	long BgL_restz00_3007;

																	{	/* Inline/loop.scm 340 */
																		int BgL_arg2644z00_3008;

																		BgL_arg2644z00_3008 = (int) (((long) 16));
																		{	/* Inline/loop.scm 340 */
																			long BgL_auxz00_3842;

																			BgL_auxz00_3842 =
																				(long) (BgL_arg2644z00_3008);
																			BgL_restz00_3007 =
																				(BgL_offsetz00_3004 % BgL_auxz00_3842);
																	}}
																	{	/* Inline/loop.scm 340 */

																		BgL_method3471z00_2997 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3002,
																				(int) (BgL_modz00_3005)),
																			(int) (BgL_restz00_3007));
										}}}}}}}}
										BgL_res3828z00_3022 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3471z00_2997) (BgL_method3471z00_2997,
												(obj_t) (BgL_arg3702z00_2992),
												(obj_t) (BgL_localz00_2995), BgL_nesterz00_2996, BEOA));
								}}
								BgL_arg3701z00_2991 = BgL_res3828z00_3022;
						}}
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1608))->
								BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3701z00_2991), BUNSPEC);
					}
					BgL_auxz00_3827 = BgL_nodez00_1608;
					return (obj_t) (BgL_auxz00_3827);
				}
			}
		}
	}



/* nest-loop!-let-var3503 */
	obj_t BGl_nestzd2loopz12zd2letzd2var3503zc0zzinline_loopz00(obj_t
		BgL_envz00_3296, obj_t BgL_nodez00_3297, obj_t BgL_varz00_3298,
		obj_t BgL_nesterz00_3299)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 328 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1588;

				obj_t BgL_varz00_1589;

				obj_t BgL_nesterz00_1590;

				{	/* Inline/loop.scm 329 */
					BgL_letzd2varzd2_bglt BgL_auxz00_3857;

					BgL_nodez00_1588 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_3297);
					BgL_varz00_1589 = BgL_varz00_3298;
					BgL_nesterz00_1590 = BgL_nesterz00_3299;
					{	/* Inline/loop.scm 330 */
						BgL_nodez00_bglt BgL_arg3693z00_1594;

						{	/* Inline/loop.scm 330 */
							BgL_nodez00_bglt BgL_arg3694z00_1595;

							BgL_arg3694z00_1595 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1588))->BgL_bodyz00);
							{	/* Inline/loop.scm 330 */
								BgL_nodez00_bglt BgL_res3822z00_2951;

								{	/* Inline/loop.scm 330 */
									BgL_localz00_bglt BgL_localz00_2924;

									obj_t BgL_nesterz00_2925;

									BgL_localz00_2924 = (BgL_localz00_bglt) (BgL_varz00_1589);
									BgL_nesterz00_2925 = BgL_nesterz00_1590;
									{	/* Inline/loop.scm 330 */
										obj_t BgL_method3471z00_2926;

										{	/* Inline/loop.scm 330 */
											BgL_objectz00_bglt BgL_objz00_2927;

											BgL_objz00_2927 =
												(BgL_objectz00_bglt) (BgL_arg3694z00_1595);
											{	/* Inline/loop.scm 330 */
												long BgL_objzd2classzd2numz00_2928;

												BgL_objzd2classzd2numz00_2928 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2927);
												{	/* Inline/loop.scm 330 */
													obj_t BgL_arg2643z00_2929;

													BgL_arg2643z00_2929 =
														PROCEDURE_REF
														(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 330 */
														obj_t BgL_arrayz00_2931;

														int BgL_offsetz00_2932;

														BgL_arrayz00_2931 = BgL_arg2643z00_2929;
														BgL_offsetz00_2932 =
															(int) (BgL_objzd2classzd2numz00_2928);
														{	/* Inline/loop.scm 330 */
															long BgL_offsetz00_2933;

															BgL_offsetz00_2933 =
																((long) (BgL_offsetz00_2932) - OBJECT_TYPE);
															{	/* Inline/loop.scm 330 */
																long BgL_modz00_2934;

																{	/* Inline/loop.scm 330 */
																	int BgL_arg2645z00_2935;

																	BgL_arg2645z00_2935 = (int) (((long) 16));
																	{	/* Inline/loop.scm 330 */
																		long BgL_auxz00_3868;

																		BgL_auxz00_3868 =
																			(long) (BgL_arg2645z00_2935);
																		BgL_modz00_2934 =
																			(BgL_offsetz00_2933 / BgL_auxz00_3868);
																}}
																{	/* Inline/loop.scm 330 */
																	long BgL_restz00_2936;

																	{	/* Inline/loop.scm 330 */
																		int BgL_arg2644z00_2937;

																		BgL_arg2644z00_2937 = (int) (((long) 16));
																		{	/* Inline/loop.scm 330 */
																			long BgL_auxz00_3872;

																			BgL_auxz00_3872 =
																				(long) (BgL_arg2644z00_2937);
																			BgL_restz00_2936 =
																				(BgL_offsetz00_2933 % BgL_auxz00_3872);
																	}}
																	{	/* Inline/loop.scm 330 */

																		BgL_method3471z00_2926 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2931,
																				(int) (BgL_modz00_2934)),
																			(int) (BgL_restz00_2936));
										}}}}}}}}
										BgL_res3822z00_2951 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3471z00_2926) (BgL_method3471z00_2926,
												(obj_t) (BgL_arg3694z00_1595),
												(obj_t) (BgL_localz00_2924), BgL_nesterz00_2925, BEOA));
								}}
								BgL_arg3693z00_1594 = BgL_res3822z00_2951;
						}}
						((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1588))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3693z00_1594), BUNSPEC);
					}
					{	/* Inline/loop.scm 331 */
						obj_t BgL_g3433z00_1596;

						BgL_g3433z00_1596 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1588))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3431z00_1598;

							BgL_l3431z00_1598 = BgL_g3433z00_1596;
						BgL_zc3anonymousza33695ze3z83_1599:
							if (PAIRP(BgL_l3431z00_1598))
								{	/* Inline/loop.scm 331 */
									{	/* Inline/loop.scm 332 */
										obj_t BgL_bindingz00_1601;

										BgL_bindingz00_1601 = CAR(BgL_l3431z00_1598);
										{	/* Inline/loop.scm 332 */
											BgL_nodez00_bglt BgL_arg3697z00_1602;

											{	/* Inline/loop.scm 332 */
												obj_t BgL_arg3698z00_1603;

												BgL_arg3698z00_1603 = CDR(BgL_bindingz00_1601);
												{	/* Inline/loop.scm 332 */
													BgL_nodez00_bglt BgL_res3825z00_2986;

													{	/* Inline/loop.scm 332 */
														BgL_nodez00_bglt BgL_nodez00_2958;

														BgL_localz00_bglt BgL_localz00_2959;

														obj_t BgL_nesterz00_2960;

														BgL_nodez00_2958 =
															(BgL_nodez00_bglt) (BgL_arg3698z00_1603);
														BgL_localz00_2959 =
															(BgL_localz00_bglt) (BgL_varz00_1589);
														BgL_nesterz00_2960 = BgL_nesterz00_1590;
														{	/* Inline/loop.scm 332 */
															obj_t BgL_method3471z00_2961;

															{	/* Inline/loop.scm 332 */
																BgL_objectz00_bglt BgL_objz00_2962;

																BgL_objz00_2962 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2958);
																{	/* Inline/loop.scm 332 */
																	long BgL_objzd2classzd2numz00_2963;

																	BgL_objzd2classzd2numz00_2963 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2962);
																	{	/* Inline/loop.scm 332 */
																		obj_t BgL_arg2643z00_2964;

																		BgL_arg2643z00_2964 =
																			PROCEDURE_REF
																			(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
																			(int) (((long) 1)));
																		{	/* Inline/loop.scm 332 */
																			obj_t BgL_arrayz00_2966;

																			int BgL_offsetz00_2967;

																			BgL_arrayz00_2966 = BgL_arg2643z00_2964;
																			BgL_offsetz00_2967 =
																				(int) (BgL_objzd2classzd2numz00_2963);
																			{	/* Inline/loop.scm 332 */
																				long BgL_offsetz00_2968;

																				BgL_offsetz00_2968 =
																					(
																					(long) (BgL_offsetz00_2967) -
																					OBJECT_TYPE);
																				{	/* Inline/loop.scm 332 */
																					long BgL_modz00_2969;

																					{	/* Inline/loop.scm 332 */
																						int BgL_arg2645z00_2970;

																						BgL_arg2645z00_2970 =
																							(int) (((long) 16));
																						{	/* Inline/loop.scm 332 */
																							long BgL_auxz00_3900;

																							BgL_auxz00_3900 =
																								(long) (BgL_arg2645z00_2970);
																							BgL_modz00_2969 =
																								(BgL_offsetz00_2968 /
																								BgL_auxz00_3900);
																					}}
																					{	/* Inline/loop.scm 332 */
																						long BgL_restz00_2971;

																						{	/* Inline/loop.scm 332 */
																							int BgL_arg2644z00_2972;

																							BgL_arg2644z00_2972 =
																								(int) (((long) 16));
																							{	/* Inline/loop.scm 332 */
																								long BgL_auxz00_3904;

																								BgL_auxz00_3904 =
																									(long) (BgL_arg2644z00_2972);
																								BgL_restz00_2971 =
																									(BgL_offsetz00_2968 %
																									BgL_auxz00_3904);
																						}}
																						{	/* Inline/loop.scm 332 */

																							BgL_method3471z00_2961 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2966,
																									(int) (BgL_modz00_2969)),
																								(int) (BgL_restz00_2971));
															}}}}}}}}
															BgL_res3825z00_2986 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3471z00_2961)
																(BgL_method3471z00_2961,
																	(obj_t) (BgL_nodez00_2958),
																	(obj_t) (BgL_localz00_2959),
																	BgL_nesterz00_2960, BEOA));
													}}
													BgL_arg3697z00_1602 = BgL_res3825z00_2986;
											}}
											{	/* Inline/loop.scm 332 */
												obj_t BgL_auxz00_3916;

												BgL_auxz00_3916 = (obj_t) (BgL_arg3697z00_1602);
												SET_CDR(BgL_bindingz00_1601, BgL_auxz00_3916);
									}}}
									{
										obj_t BgL_l3431z00_3919;

										BgL_l3431z00_3919 = CDR(BgL_l3431z00_1598);
										BgL_l3431z00_1598 = BgL_l3431z00_3919;
										goto BgL_zc3anonymousza33695ze3z83_1599;
									}
								}
							else
								{	/* Inline/loop.scm 331 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_3857 = BgL_nodez00_1588;
					return (obj_t) (BgL_auxz00_3857);
				}
			}
		}
	}



/* nest-loop!-let-fun3501 */
	obj_t BGl_nestzd2loopz12zd2letzd2fun3501zc0zzinline_loopz00(obj_t
		BgL_envz00_3300, obj_t BgL_nodez00_3301, obj_t BgL_varz00_3302,
		obj_t BgL_nesterz00_3303)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 313 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1567;

				obj_t BgL_varz00_1568;

				obj_t BgL_nesterz00_1569;

				{	/* Inline/loop.scm 314 */
					BgL_letzd2funzd2_bglt BgL_auxz00_3923;

					BgL_nodez00_1567 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_3301);
					BgL_varz00_1568 = BgL_varz00_3302;
					BgL_nesterz00_1569 = BgL_nesterz00_3303;
					{	/* Inline/loop.scm 315 */
						BgL_nodez00_bglt BgL_arg3685z00_1573;

						{	/* Inline/loop.scm 315 */
							BgL_nodez00_bglt BgL_arg3686z00_1574;

							BgL_arg3686z00_1574 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1567))->BgL_bodyz00);
							{	/* Inline/loop.scm 315 */
								BgL_nodez00_bglt BgL_res3816z00_2882;

								{	/* Inline/loop.scm 315 */
									BgL_localz00_bglt BgL_localz00_2855;

									obj_t BgL_nesterz00_2856;

									BgL_localz00_2855 = (BgL_localz00_bglt) (BgL_varz00_1568);
									BgL_nesterz00_2856 = BgL_nesterz00_1569;
									{	/* Inline/loop.scm 315 */
										obj_t BgL_method3471z00_2857;

										{	/* Inline/loop.scm 315 */
											BgL_objectz00_bglt BgL_objz00_2858;

											BgL_objz00_2858 =
												(BgL_objectz00_bglt) (BgL_arg3686z00_1574);
											{	/* Inline/loop.scm 315 */
												long BgL_objzd2classzd2numz00_2859;

												BgL_objzd2classzd2numz00_2859 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2858);
												{	/* Inline/loop.scm 315 */
													obj_t BgL_arg2643z00_2860;

													BgL_arg2643z00_2860 =
														PROCEDURE_REF
														(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 315 */
														obj_t BgL_arrayz00_2862;

														int BgL_offsetz00_2863;

														BgL_arrayz00_2862 = BgL_arg2643z00_2860;
														BgL_offsetz00_2863 =
															(int) (BgL_objzd2classzd2numz00_2859);
														{	/* Inline/loop.scm 315 */
															long BgL_offsetz00_2864;

															BgL_offsetz00_2864 =
																((long) (BgL_offsetz00_2863) - OBJECT_TYPE);
															{	/* Inline/loop.scm 315 */
																long BgL_modz00_2865;

																{	/* Inline/loop.scm 315 */
																	int BgL_arg2645z00_2866;

																	BgL_arg2645z00_2866 = (int) (((long) 16));
																	{	/* Inline/loop.scm 315 */
																		long BgL_auxz00_3934;

																		BgL_auxz00_3934 =
																			(long) (BgL_arg2645z00_2866);
																		BgL_modz00_2865 =
																			(BgL_offsetz00_2864 / BgL_auxz00_3934);
																}}
																{	/* Inline/loop.scm 315 */
																	long BgL_restz00_2867;

																	{	/* Inline/loop.scm 315 */
																		int BgL_arg2644z00_2868;

																		BgL_arg2644z00_2868 = (int) (((long) 16));
																		{	/* Inline/loop.scm 315 */
																			long BgL_auxz00_3938;

																			BgL_auxz00_3938 =
																				(long) (BgL_arg2644z00_2868);
																			BgL_restz00_2867 =
																				(BgL_offsetz00_2864 % BgL_auxz00_3938);
																	}}
																	{	/* Inline/loop.scm 315 */

																		BgL_method3471z00_2857 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2862,
																				(int) (BgL_modz00_2865)),
																			(int) (BgL_restz00_2867));
										}}}}}}}}
										BgL_res3816z00_2882 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3471z00_2857) (BgL_method3471z00_2857,
												(obj_t) (BgL_arg3686z00_1574),
												(obj_t) (BgL_localz00_2855), BgL_nesterz00_2856, BEOA));
								}}
								BgL_arg3685z00_1573 = BgL_res3816z00_2882;
						}}
						((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1567))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3685z00_1573), BUNSPEC);
					}
					{	/* Inline/loop.scm 316 */
						obj_t BgL_g3430z00_1575;

						BgL_g3430z00_1575 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1567))->BgL_localsz00);
						{
							obj_t BgL_l3428z00_1577;

							BgL_l3428z00_1577 = BgL_g3430z00_1575;
						BgL_zc3anonymousza33687ze3z83_1578:
							if (PAIRP(BgL_l3428z00_1577))
								{	/* Inline/loop.scm 316 */
									{	/* Inline/loop.scm 317 */
										obj_t BgL_localz00_1580;

										BgL_localz00_1580 = CAR(BgL_l3428z00_1577);
										{	/* Inline/loop.scm 317 */
											BgL_valuez00_bglt BgL_sfunz00_1581;

											{
												BgL_variablez00_bglt BgL_auxz00_3955;

												BgL_auxz00_3955 =
													(BgL_variablez00_bglt) (BgL_localz00_1580);
												BgL_sfunz00_1581 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3955))->
													BgL_valuez00);
											}
											{	/* Inline/loop.scm 319 */
												BgL_nodez00_bglt BgL_arg3689z00_1582;

												{	/* Inline/loop.scm 319 */
													obj_t BgL_arg3690z00_1583;

													{
														BgL_sfunz00_bglt BgL_auxz00_3958;

														BgL_auxz00_3958 =
															(BgL_sfunz00_bglt) (BgL_sfunz00_1581);
														BgL_arg3690z00_1583 =
															(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3958))->
															BgL_bodyz00);
													}
													{	/* Inline/loop.scm 319 */
														BgL_nodez00_bglt BgL_res3819z00_2918;

														{	/* Inline/loop.scm 319 */
															BgL_nodez00_bglt BgL_nodez00_2890;

															BgL_localz00_bglt BgL_localz00_2891;

															obj_t BgL_nesterz00_2892;

															BgL_nodez00_2890 =
																(BgL_nodez00_bglt) (BgL_arg3690z00_1583);
															BgL_localz00_2891 =
																(BgL_localz00_bglt) (BgL_varz00_1568);
															BgL_nesterz00_2892 = BgL_nesterz00_1569;
															{	/* Inline/loop.scm 319 */
																obj_t BgL_method3471z00_2893;

																{	/* Inline/loop.scm 319 */
																	BgL_objectz00_bglt BgL_objz00_2894;

																	BgL_objz00_2894 =
																		(BgL_objectz00_bglt) (BgL_nodez00_2890);
																	{	/* Inline/loop.scm 319 */
																		long BgL_objzd2classzd2numz00_2895;

																		BgL_objzd2classzd2numz00_2895 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_2894);
																		{	/* Inline/loop.scm 319 */
																			obj_t BgL_arg2643z00_2896;

																			BgL_arg2643z00_2896 =
																				PROCEDURE_REF
																				(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
																				(int) (((long) 1)));
																			{	/* Inline/loop.scm 319 */
																				obj_t BgL_arrayz00_2898;

																				int BgL_offsetz00_2899;

																				BgL_arrayz00_2898 = BgL_arg2643z00_2896;
																				BgL_offsetz00_2899 =
																					(int) (BgL_objzd2classzd2numz00_2895);
																				{	/* Inline/loop.scm 319 */
																					long BgL_offsetz00_2900;

																					BgL_offsetz00_2900 =
																						(
																						(long) (BgL_offsetz00_2899) -
																						OBJECT_TYPE);
																					{	/* Inline/loop.scm 319 */
																						long BgL_modz00_2901;

																						{	/* Inline/loop.scm 319 */
																							int BgL_arg2645z00_2902;

																							BgL_arg2645z00_2902 =
																								(int) (((long) 16));
																							{	/* Inline/loop.scm 319 */
																								long BgL_auxz00_3971;

																								BgL_auxz00_3971 =
																									(long) (BgL_arg2645z00_2902);
																								BgL_modz00_2901 =
																									(BgL_offsetz00_2900 /
																									BgL_auxz00_3971);
																						}}
																						{	/* Inline/loop.scm 319 */
																							long BgL_restz00_2903;

																							{	/* Inline/loop.scm 319 */
																								int BgL_arg2644z00_2904;

																								BgL_arg2644z00_2904 =
																									(int) (((long) 16));
																								{	/* Inline/loop.scm 319 */
																									long BgL_auxz00_3975;

																									BgL_auxz00_3975 =
																										(long)
																										(BgL_arg2644z00_2904);
																									BgL_restz00_2903 =
																										(BgL_offsetz00_2900 %
																										BgL_auxz00_3975);
																							}}
																							{	/* Inline/loop.scm 319 */

																								BgL_method3471z00_2893 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_2898,
																										(int) (BgL_modz00_2901)),
																									(int) (BgL_restz00_2903));
																}}}}}}}}
																BgL_res3819z00_2918 =
																	(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																	(BgL_method3471z00_2893)
																	(BgL_method3471z00_2893,
																		(obj_t) (BgL_nodez00_2890),
																		(obj_t) (BgL_localz00_2891),
																		BgL_nesterz00_2892, BEOA));
														}}
														BgL_arg3689z00_1582 = BgL_res3819z00_2918;
												}}
												{
													obj_t BgL_auxz00_3989;

													BgL_sfunz00_bglt BgL_auxz00_3987;

													BgL_auxz00_3989 = (obj_t) (BgL_arg3689z00_1582);
													BgL_auxz00_3987 =
														(BgL_sfunz00_bglt) (BgL_sfunz00_1581);
													((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3987))->
															BgL_bodyz00) =
														((obj_t) BgL_auxz00_3989), BUNSPEC);
									}}}}
									{
										obj_t BgL_l3428z00_3992;

										BgL_l3428z00_3992 = CDR(BgL_l3428z00_1577);
										BgL_l3428z00_1577 = BgL_l3428z00_3992;
										goto BgL_zc3anonymousza33687ze3z83_1578;
									}
								}
							else
								{	/* Inline/loop.scm 316 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_3923 = BgL_nodez00_1567;
					return (obj_t) (BgL_auxz00_3923);
				}
			}
		}
	}



/* nest-loop!-select3499 */
	obj_t BGl_nestzd2loopz12zd2select3499z12zzinline_loopz00(obj_t
		BgL_envz00_3304, obj_t BgL_nodez00_3305, obj_t BgL_varz00_3306,
		obj_t BgL_nesterz00_3307)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 302 */
			{
				BgL_selectz00_bglt BgL_nodez00_1547;

				obj_t BgL_varz00_1548;

				obj_t BgL_nesterz00_1549;

				{	/* Inline/loop.scm 303 */
					BgL_selectz00_bglt BgL_auxz00_3996;

					BgL_nodez00_1547 = (BgL_selectz00_bglt) (BgL_nodez00_3305);
					BgL_varz00_1548 = BgL_varz00_3306;
					BgL_nesterz00_1549 = BgL_nesterz00_3307;
					{	/* Inline/loop.scm 304 */
						BgL_nodez00_bglt BgL_arg3677z00_1553;

						{	/* Inline/loop.scm 304 */
							BgL_nodez00_bglt BgL_arg3678z00_1554;

							BgL_arg3678z00_1554 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1547))->BgL_testz00);
							{	/* Inline/loop.scm 304 */
								BgL_nodez00_bglt BgL_res3810z00_2814;

								{	/* Inline/loop.scm 304 */
									BgL_localz00_bglt BgL_localz00_2787;

									obj_t BgL_nesterz00_2788;

									BgL_localz00_2787 = (BgL_localz00_bglt) (BgL_varz00_1548);
									BgL_nesterz00_2788 = BgL_nesterz00_1549;
									{	/* Inline/loop.scm 304 */
										obj_t BgL_method3471z00_2789;

										{	/* Inline/loop.scm 304 */
											BgL_objectz00_bglt BgL_objz00_2790;

											BgL_objz00_2790 =
												(BgL_objectz00_bglt) (BgL_arg3678z00_1554);
											{	/* Inline/loop.scm 304 */
												long BgL_objzd2classzd2numz00_2791;

												BgL_objzd2classzd2numz00_2791 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2790);
												{	/* Inline/loop.scm 304 */
													obj_t BgL_arg2643z00_2792;

													BgL_arg2643z00_2792 =
														PROCEDURE_REF
														(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 304 */
														obj_t BgL_arrayz00_2794;

														int BgL_offsetz00_2795;

														BgL_arrayz00_2794 = BgL_arg2643z00_2792;
														BgL_offsetz00_2795 =
															(int) (BgL_objzd2classzd2numz00_2791);
														{	/* Inline/loop.scm 304 */
															long BgL_offsetz00_2796;

															BgL_offsetz00_2796 =
																((long) (BgL_offsetz00_2795) - OBJECT_TYPE);
															{	/* Inline/loop.scm 304 */
																long BgL_modz00_2797;

																{	/* Inline/loop.scm 304 */
																	int BgL_arg2645z00_2798;

																	BgL_arg2645z00_2798 = (int) (((long) 16));
																	{	/* Inline/loop.scm 304 */
																		long BgL_auxz00_4007;

																		BgL_auxz00_4007 =
																			(long) (BgL_arg2645z00_2798);
																		BgL_modz00_2797 =
																			(BgL_offsetz00_2796 / BgL_auxz00_4007);
																}}
																{	/* Inline/loop.scm 304 */
																	long BgL_restz00_2799;

																	{	/* Inline/loop.scm 304 */
																		int BgL_arg2644z00_2800;

																		BgL_arg2644z00_2800 = (int) (((long) 16));
																		{	/* Inline/loop.scm 304 */
																			long BgL_auxz00_4011;

																			BgL_auxz00_4011 =
																				(long) (BgL_arg2644z00_2800);
																			BgL_restz00_2799 =
																				(BgL_offsetz00_2796 % BgL_auxz00_4011);
																	}}
																	{	/* Inline/loop.scm 304 */

																		BgL_method3471z00_2789 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2794,
																				(int) (BgL_modz00_2797)),
																			(int) (BgL_restz00_2799));
										}}}}}}}}
										BgL_res3810z00_2814 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3471z00_2789) (BgL_method3471z00_2789,
												(obj_t) (BgL_arg3678z00_1554),
												(obj_t) (BgL_localz00_2787), BgL_nesterz00_2788, BEOA));
								}}
								BgL_arg3677z00_1553 = BgL_res3810z00_2814;
						}}
						((((BgL_selectz00_bglt) CREF(BgL_nodez00_1547))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3677z00_1553), BUNSPEC);
					}
					{	/* Inline/loop.scm 305 */
						obj_t BgL_g3427z00_1555;

						BgL_g3427z00_1555 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1547))->BgL_clausesz00);
						{
							obj_t BgL_l3425z00_1557;

							BgL_l3425z00_1557 = BgL_g3427z00_1555;
						BgL_zc3anonymousza33679ze3z83_1558:
							if (PAIRP(BgL_l3425z00_1557))
								{	/* Inline/loop.scm 305 */
									{	/* Inline/loop.scm 306 */
										obj_t BgL_clausez00_1560;

										BgL_clausez00_1560 = CAR(BgL_l3425z00_1557);
										{	/* Inline/loop.scm 306 */
											BgL_nodez00_bglt BgL_arg3681z00_1561;

											{	/* Inline/loop.scm 306 */
												obj_t BgL_arg3682z00_1562;

												BgL_arg3682z00_1562 = CDR(BgL_clausez00_1560);
												{	/* Inline/loop.scm 306 */
													BgL_nodez00_bglt BgL_res3813z00_2849;

													{	/* Inline/loop.scm 306 */
														BgL_nodez00_bglt BgL_nodez00_2821;

														BgL_localz00_bglt BgL_localz00_2822;

														obj_t BgL_nesterz00_2823;

														BgL_nodez00_2821 =
															(BgL_nodez00_bglt) (BgL_arg3682z00_1562);
														BgL_localz00_2822 =
															(BgL_localz00_bglt) (BgL_varz00_1548);
														BgL_nesterz00_2823 = BgL_nesterz00_1549;
														{	/* Inline/loop.scm 306 */
															obj_t BgL_method3471z00_2824;

															{	/* Inline/loop.scm 306 */
																BgL_objectz00_bglt BgL_objz00_2825;

																BgL_objz00_2825 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2821);
																{	/* Inline/loop.scm 306 */
																	long BgL_objzd2classzd2numz00_2826;

																	BgL_objzd2classzd2numz00_2826 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2825);
																	{	/* Inline/loop.scm 306 */
																		obj_t BgL_arg2643z00_2827;

																		BgL_arg2643z00_2827 =
																			PROCEDURE_REF
																			(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
																			(int) (((long) 1)));
																		{	/* Inline/loop.scm 306 */
																			obj_t BgL_arrayz00_2829;

																			int BgL_offsetz00_2830;

																			BgL_arrayz00_2829 = BgL_arg2643z00_2827;
																			BgL_offsetz00_2830 =
																				(int) (BgL_objzd2classzd2numz00_2826);
																			{	/* Inline/loop.scm 306 */
																				long BgL_offsetz00_2831;

																				BgL_offsetz00_2831 =
																					(
																					(long) (BgL_offsetz00_2830) -
																					OBJECT_TYPE);
																				{	/* Inline/loop.scm 306 */
																					long BgL_modz00_2832;

																					{	/* Inline/loop.scm 306 */
																						int BgL_arg2645z00_2833;

																						BgL_arg2645z00_2833 =
																							(int) (((long) 16));
																						{	/* Inline/loop.scm 306 */
																							long BgL_auxz00_4039;

																							BgL_auxz00_4039 =
																								(long) (BgL_arg2645z00_2833);
																							BgL_modz00_2832 =
																								(BgL_offsetz00_2831 /
																								BgL_auxz00_4039);
																					}}
																					{	/* Inline/loop.scm 306 */
																						long BgL_restz00_2834;

																						{	/* Inline/loop.scm 306 */
																							int BgL_arg2644z00_2835;

																							BgL_arg2644z00_2835 =
																								(int) (((long) 16));
																							{	/* Inline/loop.scm 306 */
																								long BgL_auxz00_4043;

																								BgL_auxz00_4043 =
																									(long) (BgL_arg2644z00_2835);
																								BgL_restz00_2834 =
																									(BgL_offsetz00_2831 %
																									BgL_auxz00_4043);
																						}}
																						{	/* Inline/loop.scm 306 */

																							BgL_method3471z00_2824 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2829,
																									(int) (BgL_modz00_2832)),
																								(int) (BgL_restz00_2834));
															}}}}}}}}
															BgL_res3813z00_2849 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3471z00_2824)
																(BgL_method3471z00_2824,
																	(obj_t) (BgL_nodez00_2821),
																	(obj_t) (BgL_localz00_2822),
																	BgL_nesterz00_2823, BEOA));
													}}
													BgL_arg3681z00_1561 = BgL_res3813z00_2849;
											}}
											{	/* Inline/loop.scm 306 */
												obj_t BgL_auxz00_4055;

												BgL_auxz00_4055 = (obj_t) (BgL_arg3681z00_1561);
												SET_CDR(BgL_clausez00_1560, BgL_auxz00_4055);
									}}}
									{
										obj_t BgL_l3425z00_4058;

										BgL_l3425z00_4058 = CDR(BgL_l3425z00_1557);
										BgL_l3425z00_1557 = BgL_l3425z00_4058;
										goto BgL_zc3anonymousza33679ze3z83_1558;
									}
								}
							else
								{	/* Inline/loop.scm 305 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_3996 = BgL_nodez00_1547;
					return (obj_t) (BgL_auxz00_3996);
				}
			}
		}
	}



/* nest-loop!-fail3497 */
	obj_t BGl_nestzd2loopz12zd2fail3497z12zzinline_loopz00(obj_t BgL_envz00_3308,
		obj_t BgL_nodez00_3309, obj_t BgL_varz00_3310, obj_t BgL_nesterz00_3311)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 292 */
			{
				BgL_failz00_bglt BgL_nodez00_1533;

				obj_t BgL_varz00_1534;

				obj_t BgL_nesterz00_1535;

				{	/* Inline/loop.scm 293 */
					BgL_failz00_bglt BgL_auxz00_4062;

					BgL_nodez00_1533 = (BgL_failz00_bglt) (BgL_nodez00_3309);
					BgL_varz00_1534 = BgL_varz00_3310;
					BgL_nesterz00_1535 = BgL_nesterz00_3311;
					{	/* Inline/loop.scm 294 */
						BgL_nodez00_bglt BgL_arg3670z00_1539;

						{	/* Inline/loop.scm 294 */
							BgL_nodez00_bglt BgL_arg3671z00_1540;

							BgL_arg3671z00_1540 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1533))->BgL_procz00);
							{	/* Inline/loop.scm 294 */
								BgL_nodez00_bglt BgL_res3801z00_2718;

								{	/* Inline/loop.scm 294 */
									BgL_localz00_bglt BgL_localz00_2691;

									obj_t BgL_nesterz00_2692;

									BgL_localz00_2691 = (BgL_localz00_bglt) (BgL_varz00_1534);
									BgL_nesterz00_2692 = BgL_nesterz00_1535;
									{	/* Inline/loop.scm 294 */
										obj_t BgL_method3471z00_2693;

										{	/* Inline/loop.scm 294 */
											BgL_objectz00_bglt BgL_objz00_2694;

											BgL_objz00_2694 =
												(BgL_objectz00_bglt) (BgL_arg3671z00_1540);
											{	/* Inline/loop.scm 294 */
												long BgL_objzd2classzd2numz00_2695;

												BgL_objzd2classzd2numz00_2695 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2694);
												{	/* Inline/loop.scm 294 */
													obj_t BgL_arg2643z00_2696;

													BgL_arg2643z00_2696 =
														PROCEDURE_REF
														(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 294 */
														obj_t BgL_arrayz00_2698;

														int BgL_offsetz00_2699;

														BgL_arrayz00_2698 = BgL_arg2643z00_2696;
														BgL_offsetz00_2699 =
															(int) (BgL_objzd2classzd2numz00_2695);
														{	/* Inline/loop.scm 294 */
															long BgL_offsetz00_2700;

															BgL_offsetz00_2700 =
																((long) (BgL_offsetz00_2699) - OBJECT_TYPE);
															{	/* Inline/loop.scm 294 */
																long BgL_modz00_2701;

																{	/* Inline/loop.scm 294 */
																	int BgL_arg2645z00_2702;

																	BgL_arg2645z00_2702 = (int) (((long) 16));
																	{	/* Inline/loop.scm 294 */
																		long BgL_auxz00_4073;

																		BgL_auxz00_4073 =
																			(long) (BgL_arg2645z00_2702);
																		BgL_modz00_2701 =
																			(BgL_offsetz00_2700 / BgL_auxz00_4073);
																}}
																{	/* Inline/loop.scm 294 */
																	long BgL_restz00_2703;

																	{	/* Inline/loop.scm 294 */
																		int BgL_arg2644z00_2704;

																		BgL_arg2644z00_2704 = (int) (((long) 16));
																		{	/* Inline/loop.scm 294 */
																			long BgL_auxz00_4077;

																			BgL_auxz00_4077 =
																				(long) (BgL_arg2644z00_2704);
																			BgL_restz00_2703 =
																				(BgL_offsetz00_2700 % BgL_auxz00_4077);
																	}}
																	{	/* Inline/loop.scm 294 */

																		BgL_method3471z00_2693 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2698,
																				(int) (BgL_modz00_2701)),
																			(int) (BgL_restz00_2703));
										}}}}}}}}
										BgL_res3801z00_2718 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3471z00_2693) (BgL_method3471z00_2693,
												(obj_t) (BgL_arg3671z00_1540),
												(obj_t) (BgL_localz00_2691), BgL_nesterz00_2692, BEOA));
								}}
								BgL_arg3670z00_1539 = BgL_res3801z00_2718;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1533))->BgL_procz00) =
							((BgL_nodez00_bglt) BgL_arg3670z00_1539), BUNSPEC);
					}
					{	/* Inline/loop.scm 295 */
						BgL_nodez00_bglt BgL_arg3672z00_1541;

						{	/* Inline/loop.scm 295 */
							BgL_nodez00_bglt BgL_arg3673z00_1542;

							BgL_arg3673z00_1542 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1533))->BgL_msgz00);
							{	/* Inline/loop.scm 295 */
								BgL_nodez00_bglt BgL_res3804z00_2750;

								{	/* Inline/loop.scm 295 */
									BgL_localz00_bglt BgL_localz00_2723;

									obj_t BgL_nesterz00_2724;

									BgL_localz00_2723 = (BgL_localz00_bglt) (BgL_varz00_1534);
									BgL_nesterz00_2724 = BgL_nesterz00_1535;
									{	/* Inline/loop.scm 295 */
										obj_t BgL_method3471z00_2725;

										{	/* Inline/loop.scm 295 */
											BgL_objectz00_bglt BgL_objz00_2726;

											BgL_objz00_2726 =
												(BgL_objectz00_bglt) (BgL_arg3673z00_1542);
											{	/* Inline/loop.scm 295 */
												long BgL_objzd2classzd2numz00_2727;

												BgL_objzd2classzd2numz00_2727 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2726);
												{	/* Inline/loop.scm 295 */
													obj_t BgL_arg2643z00_2728;

													BgL_arg2643z00_2728 =
														PROCEDURE_REF
														(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 295 */
														obj_t BgL_arrayz00_2730;

														int BgL_offsetz00_2731;

														BgL_arrayz00_2730 = BgL_arg2643z00_2728;
														BgL_offsetz00_2731 =
															(int) (BgL_objzd2classzd2numz00_2727);
														{	/* Inline/loop.scm 295 */
															long BgL_offsetz00_2732;

															BgL_offsetz00_2732 =
																((long) (BgL_offsetz00_2731) - OBJECT_TYPE);
															{	/* Inline/loop.scm 295 */
																long BgL_modz00_2733;

																{	/* Inline/loop.scm 295 */
																	int BgL_arg2645z00_2734;

																	BgL_arg2645z00_2734 = (int) (((long) 16));
																	{	/* Inline/loop.scm 295 */
																		long BgL_auxz00_4100;

																		BgL_auxz00_4100 =
																			(long) (BgL_arg2645z00_2734);
																		BgL_modz00_2733 =
																			(BgL_offsetz00_2732 / BgL_auxz00_4100);
																}}
																{	/* Inline/loop.scm 295 */
																	long BgL_restz00_2735;

																	{	/* Inline/loop.scm 295 */
																		int BgL_arg2644z00_2736;

																		BgL_arg2644z00_2736 = (int) (((long) 16));
																		{	/* Inline/loop.scm 295 */
																			long BgL_auxz00_4104;

																			BgL_auxz00_4104 =
																				(long) (BgL_arg2644z00_2736);
																			BgL_restz00_2735 =
																				(BgL_offsetz00_2732 % BgL_auxz00_4104);
																	}}
																	{	/* Inline/loop.scm 295 */

																		BgL_method3471z00_2725 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2730,
																				(int) (BgL_modz00_2733)),
																			(int) (BgL_restz00_2735));
										}}}}}}}}
										BgL_res3804z00_2750 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3471z00_2725) (BgL_method3471z00_2725,
												(obj_t) (BgL_arg3673z00_1542),
												(obj_t) (BgL_localz00_2723), BgL_nesterz00_2724, BEOA));
								}}
								BgL_arg3672z00_1541 = BgL_res3804z00_2750;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1533))->BgL_msgz00) =
							((BgL_nodez00_bglt) BgL_arg3672z00_1541), BUNSPEC);
					}
					{	/* Inline/loop.scm 296 */
						BgL_nodez00_bglt BgL_arg3674z00_1543;

						{	/* Inline/loop.scm 296 */
							BgL_nodez00_bglt BgL_arg3675z00_1544;

							BgL_arg3675z00_1544 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1533))->BgL_objz00);
							{	/* Inline/loop.scm 296 */
								BgL_nodez00_bglt BgL_res3807z00_2782;

								{	/* Inline/loop.scm 296 */
									BgL_localz00_bglt BgL_localz00_2755;

									obj_t BgL_nesterz00_2756;

									BgL_localz00_2755 = (BgL_localz00_bglt) (BgL_varz00_1534);
									BgL_nesterz00_2756 = BgL_nesterz00_1535;
									{	/* Inline/loop.scm 296 */
										obj_t BgL_method3471z00_2757;

										{	/* Inline/loop.scm 296 */
											BgL_objectz00_bglt BgL_objz00_2758;

											BgL_objz00_2758 =
												(BgL_objectz00_bglt) (BgL_arg3675z00_1544);
											{	/* Inline/loop.scm 296 */
												long BgL_objzd2classzd2numz00_2759;

												BgL_objzd2classzd2numz00_2759 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2758);
												{	/* Inline/loop.scm 296 */
													obj_t BgL_arg2643z00_2760;

													BgL_arg2643z00_2760 =
														PROCEDURE_REF
														(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 296 */
														obj_t BgL_arrayz00_2762;

														int BgL_offsetz00_2763;

														BgL_arrayz00_2762 = BgL_arg2643z00_2760;
														BgL_offsetz00_2763 =
															(int) (BgL_objzd2classzd2numz00_2759);
														{	/* Inline/loop.scm 296 */
															long BgL_offsetz00_2764;

															BgL_offsetz00_2764 =
																((long) (BgL_offsetz00_2763) - OBJECT_TYPE);
															{	/* Inline/loop.scm 296 */
																long BgL_modz00_2765;

																{	/* Inline/loop.scm 296 */
																	int BgL_arg2645z00_2766;

																	BgL_arg2645z00_2766 = (int) (((long) 16));
																	{	/* Inline/loop.scm 296 */
																		long BgL_auxz00_4127;

																		BgL_auxz00_4127 =
																			(long) (BgL_arg2645z00_2766);
																		BgL_modz00_2765 =
																			(BgL_offsetz00_2764 / BgL_auxz00_4127);
																}}
																{	/* Inline/loop.scm 296 */
																	long BgL_restz00_2767;

																	{	/* Inline/loop.scm 296 */
																		int BgL_arg2644z00_2768;

																		BgL_arg2644z00_2768 = (int) (((long) 16));
																		{	/* Inline/loop.scm 296 */
																			long BgL_auxz00_4131;

																			BgL_auxz00_4131 =
																				(long) (BgL_arg2644z00_2768);
																			BgL_restz00_2767 =
																				(BgL_offsetz00_2764 % BgL_auxz00_4131);
																	}}
																	{	/* Inline/loop.scm 296 */

																		BgL_method3471z00_2757 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2762,
																				(int) (BgL_modz00_2765)),
																			(int) (BgL_restz00_2767));
										}}}}}}}}
										BgL_res3807z00_2782 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3471z00_2757) (BgL_method3471z00_2757,
												(obj_t) (BgL_arg3675z00_1544),
												(obj_t) (BgL_localz00_2755), BgL_nesterz00_2756, BEOA));
								}}
								BgL_arg3674z00_1543 = BgL_res3807z00_2782;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1533))->BgL_objz00) =
							((BgL_nodez00_bglt) BgL_arg3674z00_1543), BUNSPEC);
					}
					BgL_auxz00_4062 = BgL_nodez00_1533;
					return (obj_t) (BgL_auxz00_4062);
				}
			}
		}
	}



/* nest-loop!-condition3495 */
	obj_t BGl_nestzd2loopz12zd2condition3495z12zzinline_loopz00(obj_t
		BgL_envz00_3312, obj_t BgL_nodez00_3313, obj_t BgL_varz00_3314,
		obj_t BgL_nesterz00_3315)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 282 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1519;

				obj_t BgL_varz00_1520;

				obj_t BgL_nesterz00_1521;

				{	/* Inline/loop.scm 283 */
					BgL_conditionalz00_bglt BgL_auxz00_4146;

					BgL_nodez00_1519 = (BgL_conditionalz00_bglt) (BgL_nodez00_3313);
					BgL_varz00_1520 = BgL_varz00_3314;
					BgL_nesterz00_1521 = BgL_nesterz00_3315;
					{	/* Inline/loop.scm 284 */
						BgL_nodez00_bglt BgL_arg3662z00_1525;

						{	/* Inline/loop.scm 284 */
							BgL_nodez00_bglt BgL_arg3663z00_1526;

							BgL_arg3663z00_1526 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1519))->
								BgL_testz00);
							{	/* Inline/loop.scm 284 */
								BgL_nodez00_bglt BgL_res3792z00_2622;

								{	/* Inline/loop.scm 284 */
									BgL_localz00_bglt BgL_localz00_2595;

									obj_t BgL_nesterz00_2596;

									BgL_localz00_2595 = (BgL_localz00_bglt) (BgL_varz00_1520);
									BgL_nesterz00_2596 = BgL_nesterz00_1521;
									{	/* Inline/loop.scm 284 */
										obj_t BgL_method3471z00_2597;

										{	/* Inline/loop.scm 284 */
											BgL_objectz00_bglt BgL_objz00_2598;

											BgL_objz00_2598 =
												(BgL_objectz00_bglt) (BgL_arg3663z00_1526);
											{	/* Inline/loop.scm 284 */
												long BgL_objzd2classzd2numz00_2599;

												BgL_objzd2classzd2numz00_2599 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2598);
												{	/* Inline/loop.scm 284 */
													obj_t BgL_arg2643z00_2600;

													BgL_arg2643z00_2600 =
														PROCEDURE_REF
														(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 284 */
														obj_t BgL_arrayz00_2602;

														int BgL_offsetz00_2603;

														BgL_arrayz00_2602 = BgL_arg2643z00_2600;
														BgL_offsetz00_2603 =
															(int) (BgL_objzd2classzd2numz00_2599);
														{	/* Inline/loop.scm 284 */
															long BgL_offsetz00_2604;

															BgL_offsetz00_2604 =
																((long) (BgL_offsetz00_2603) - OBJECT_TYPE);
															{	/* Inline/loop.scm 284 */
																long BgL_modz00_2605;

																{	/* Inline/loop.scm 284 */
																	int BgL_arg2645z00_2606;

																	BgL_arg2645z00_2606 = (int) (((long) 16));
																	{	/* Inline/loop.scm 284 */
																		long BgL_auxz00_4157;

																		BgL_auxz00_4157 =
																			(long) (BgL_arg2645z00_2606);
																		BgL_modz00_2605 =
																			(BgL_offsetz00_2604 / BgL_auxz00_4157);
																}}
																{	/* Inline/loop.scm 284 */
																	long BgL_restz00_2607;

																	{	/* Inline/loop.scm 284 */
																		int BgL_arg2644z00_2608;

																		BgL_arg2644z00_2608 = (int) (((long) 16));
																		{	/* Inline/loop.scm 284 */
																			long BgL_auxz00_4161;

																			BgL_auxz00_4161 =
																				(long) (BgL_arg2644z00_2608);
																			BgL_restz00_2607 =
																				(BgL_offsetz00_2604 % BgL_auxz00_4161);
																	}}
																	{	/* Inline/loop.scm 284 */

																		BgL_method3471z00_2597 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2602,
																				(int) (BgL_modz00_2605)),
																			(int) (BgL_restz00_2607));
										}}}}}}}}
										BgL_res3792z00_2622 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3471z00_2597) (BgL_method3471z00_2597,
												(obj_t) (BgL_arg3663z00_1526),
												(obj_t) (BgL_localz00_2595), BgL_nesterz00_2596, BEOA));
								}}
								BgL_arg3662z00_1525 = BgL_res3792z00_2622;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1519))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3662z00_1525), BUNSPEC);
					}
					{	/* Inline/loop.scm 285 */
						BgL_nodez00_bglt BgL_arg3664z00_1527;

						{	/* Inline/loop.scm 285 */
							BgL_nodez00_bglt BgL_arg3665z00_1528;

							BgL_arg3665z00_1528 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1519))->
								BgL_truez00);
							{	/* Inline/loop.scm 285 */
								BgL_nodez00_bglt BgL_res3795z00_2654;

								{	/* Inline/loop.scm 285 */
									BgL_localz00_bglt BgL_localz00_2627;

									obj_t BgL_nesterz00_2628;

									BgL_localz00_2627 = (BgL_localz00_bglt) (BgL_varz00_1520);
									BgL_nesterz00_2628 = BgL_nesterz00_1521;
									{	/* Inline/loop.scm 285 */
										obj_t BgL_method3471z00_2629;

										{	/* Inline/loop.scm 285 */
											BgL_objectz00_bglt BgL_objz00_2630;

											BgL_objz00_2630 =
												(BgL_objectz00_bglt) (BgL_arg3665z00_1528);
											{	/* Inline/loop.scm 285 */
												long BgL_objzd2classzd2numz00_2631;

												BgL_objzd2classzd2numz00_2631 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2630);
												{	/* Inline/loop.scm 285 */
													obj_t BgL_arg2643z00_2632;

													BgL_arg2643z00_2632 =
														PROCEDURE_REF
														(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 285 */
														obj_t BgL_arrayz00_2634;

														int BgL_offsetz00_2635;

														BgL_arrayz00_2634 = BgL_arg2643z00_2632;
														BgL_offsetz00_2635 =
															(int) (BgL_objzd2classzd2numz00_2631);
														{	/* Inline/loop.scm 285 */
															long BgL_offsetz00_2636;

															BgL_offsetz00_2636 =
																((long) (BgL_offsetz00_2635) - OBJECT_TYPE);
															{	/* Inline/loop.scm 285 */
																long BgL_modz00_2637;

																{	/* Inline/loop.scm 285 */
																	int BgL_arg2645z00_2638;

																	BgL_arg2645z00_2638 = (int) (((long) 16));
																	{	/* Inline/loop.scm 285 */
																		long BgL_auxz00_4184;

																		BgL_auxz00_4184 =
																			(long) (BgL_arg2645z00_2638);
																		BgL_modz00_2637 =
																			(BgL_offsetz00_2636 / BgL_auxz00_4184);
																}}
																{	/* Inline/loop.scm 285 */
																	long BgL_restz00_2639;

																	{	/* Inline/loop.scm 285 */
																		int BgL_arg2644z00_2640;

																		BgL_arg2644z00_2640 = (int) (((long) 16));
																		{	/* Inline/loop.scm 285 */
																			long BgL_auxz00_4188;

																			BgL_auxz00_4188 =
																				(long) (BgL_arg2644z00_2640);
																			BgL_restz00_2639 =
																				(BgL_offsetz00_2636 % BgL_auxz00_4188);
																	}}
																	{	/* Inline/loop.scm 285 */

																		BgL_method3471z00_2629 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2634,
																				(int) (BgL_modz00_2637)),
																			(int) (BgL_restz00_2639));
										}}}}}}}}
										BgL_res3795z00_2654 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3471z00_2629) (BgL_method3471z00_2629,
												(obj_t) (BgL_arg3665z00_1528),
												(obj_t) (BgL_localz00_2627), BgL_nesterz00_2628, BEOA));
								}}
								BgL_arg3664z00_1527 = BgL_res3795z00_2654;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1519))->BgL_truez00) =
							((BgL_nodez00_bglt) BgL_arg3664z00_1527), BUNSPEC);
					}
					{	/* Inline/loop.scm 286 */
						BgL_nodez00_bglt BgL_arg3666z00_1529;

						{	/* Inline/loop.scm 286 */
							BgL_nodez00_bglt BgL_arg3667z00_1530;

							BgL_arg3667z00_1530 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1519))->
								BgL_falsez00);
							{	/* Inline/loop.scm 286 */
								BgL_nodez00_bglt BgL_res3798z00_2686;

								{	/* Inline/loop.scm 286 */
									BgL_localz00_bglt BgL_localz00_2659;

									obj_t BgL_nesterz00_2660;

									BgL_localz00_2659 = (BgL_localz00_bglt) (BgL_varz00_1520);
									BgL_nesterz00_2660 = BgL_nesterz00_1521;
									{	/* Inline/loop.scm 286 */
										obj_t BgL_method3471z00_2661;

										{	/* Inline/loop.scm 286 */
											BgL_objectz00_bglt BgL_objz00_2662;

											BgL_objz00_2662 =
												(BgL_objectz00_bglt) (BgL_arg3667z00_1530);
											{	/* Inline/loop.scm 286 */
												long BgL_objzd2classzd2numz00_2663;

												BgL_objzd2classzd2numz00_2663 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2662);
												{	/* Inline/loop.scm 286 */
													obj_t BgL_arg2643z00_2664;

													BgL_arg2643z00_2664 =
														PROCEDURE_REF
														(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 286 */
														obj_t BgL_arrayz00_2666;

														int BgL_offsetz00_2667;

														BgL_arrayz00_2666 = BgL_arg2643z00_2664;
														BgL_offsetz00_2667 =
															(int) (BgL_objzd2classzd2numz00_2663);
														{	/* Inline/loop.scm 286 */
															long BgL_offsetz00_2668;

															BgL_offsetz00_2668 =
																((long) (BgL_offsetz00_2667) - OBJECT_TYPE);
															{	/* Inline/loop.scm 286 */
																long BgL_modz00_2669;

																{	/* Inline/loop.scm 286 */
																	int BgL_arg2645z00_2670;

																	BgL_arg2645z00_2670 = (int) (((long) 16));
																	{	/* Inline/loop.scm 286 */
																		long BgL_auxz00_4211;

																		BgL_auxz00_4211 =
																			(long) (BgL_arg2645z00_2670);
																		BgL_modz00_2669 =
																			(BgL_offsetz00_2668 / BgL_auxz00_4211);
																}}
																{	/* Inline/loop.scm 286 */
																	long BgL_restz00_2671;

																	{	/* Inline/loop.scm 286 */
																		int BgL_arg2644z00_2672;

																		BgL_arg2644z00_2672 = (int) (((long) 16));
																		{	/* Inline/loop.scm 286 */
																			long BgL_auxz00_4215;

																			BgL_auxz00_4215 =
																				(long) (BgL_arg2644z00_2672);
																			BgL_restz00_2671 =
																				(BgL_offsetz00_2668 % BgL_auxz00_4215);
																	}}
																	{	/* Inline/loop.scm 286 */

																		BgL_method3471z00_2661 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2666,
																				(int) (BgL_modz00_2669)),
																			(int) (BgL_restz00_2671));
										}}}}}}}}
										BgL_res3798z00_2686 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3471z00_2661) (BgL_method3471z00_2661,
												(obj_t) (BgL_arg3667z00_1530),
												(obj_t) (BgL_localz00_2659), BgL_nesterz00_2660, BEOA));
								}}
								BgL_arg3666z00_1529 = BgL_res3798z00_2686;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1519))->
								BgL_falsez00) =
							((BgL_nodez00_bglt) BgL_arg3666z00_1529), BUNSPEC);
					}
					BgL_auxz00_4146 = BgL_nodez00_1519;
					return (obj_t) (BgL_auxz00_4146);
				}
			}
		}
	}



/* nest-loop!-setq3493 */
	obj_t BGl_nestzd2loopz12zd2setq3493z12zzinline_loopz00(obj_t BgL_envz00_3316,
		obj_t BgL_nodez00_3317, obj_t BgL_varz00_3318, obj_t BgL_nesterz00_3319)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 275 */
			{
				BgL_setqz00_bglt BgL_nodez00_1511;

				obj_t BgL_varz00_1512;

				obj_t BgL_nesterz00_1513;

				{	/* Inline/loop.scm 276 */
					BgL_setqz00_bglt BgL_auxz00_4230;

					BgL_nodez00_1511 = (BgL_setqz00_bglt) (BgL_nodez00_3317);
					BgL_varz00_1512 = BgL_varz00_3318;
					BgL_nesterz00_1513 = BgL_nesterz00_3319;
					{	/* Inline/loop.scm 276 */
						BgL_nodez00_bglt BgL_arg3660z00_2562;

						BgL_arg3660z00_2562 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_1511))->BgL_valuez00);
						{	/* Inline/loop.scm 276 */
							BgL_nodez00_bglt BgL_res3789z00_2592;

							{	/* Inline/loop.scm 276 */
								BgL_localz00_bglt BgL_localz00_2565;

								obj_t BgL_nesterz00_2566;

								BgL_localz00_2565 = (BgL_localz00_bglt) (BgL_varz00_1512);
								BgL_nesterz00_2566 = BgL_nesterz00_1513;
								{	/* Inline/loop.scm 276 */
									obj_t BgL_method3471z00_2567;

									{	/* Inline/loop.scm 276 */
										BgL_objectz00_bglt BgL_objz00_2568;

										BgL_objz00_2568 =
											(BgL_objectz00_bglt) (BgL_arg3660z00_2562);
										{	/* Inline/loop.scm 276 */
											long BgL_objzd2classzd2numz00_2569;

											BgL_objzd2classzd2numz00_2569 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2568);
											{	/* Inline/loop.scm 276 */
												obj_t BgL_arg2643z00_2570;

												BgL_arg2643z00_2570 =
													PROCEDURE_REF
													(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
													(int) (((long) 1)));
												{	/* Inline/loop.scm 276 */
													obj_t BgL_arrayz00_2572;

													int BgL_offsetz00_2573;

													BgL_arrayz00_2572 = BgL_arg2643z00_2570;
													BgL_offsetz00_2573 =
														(int) (BgL_objzd2classzd2numz00_2569);
													{	/* Inline/loop.scm 276 */
														long BgL_offsetz00_2574;

														BgL_offsetz00_2574 =
															((long) (BgL_offsetz00_2573) - OBJECT_TYPE);
														{	/* Inline/loop.scm 276 */
															long BgL_modz00_2575;

															{	/* Inline/loop.scm 276 */
																int BgL_arg2645z00_2576;

																BgL_arg2645z00_2576 = (int) (((long) 16));
																{	/* Inline/loop.scm 276 */
																	long BgL_auxz00_4241;

																	BgL_auxz00_4241 =
																		(long) (BgL_arg2645z00_2576);
																	BgL_modz00_2575 =
																		(BgL_offsetz00_2574 / BgL_auxz00_4241);
															}}
															{	/* Inline/loop.scm 276 */
																long BgL_restz00_2577;

																{	/* Inline/loop.scm 276 */
																	int BgL_arg2644z00_2578;

																	BgL_arg2644z00_2578 = (int) (((long) 16));
																	{	/* Inline/loop.scm 276 */
																		long BgL_auxz00_4245;

																		BgL_auxz00_4245 =
																			(long) (BgL_arg2644z00_2578);
																		BgL_restz00_2577 =
																			(BgL_offsetz00_2574 % BgL_auxz00_4245);
																}}
																{	/* Inline/loop.scm 276 */

																	BgL_method3471z00_2567 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2572,
																			(int) (BgL_modz00_2575)),
																		(int) (BgL_restz00_2577));
									}}}}}}}}
									BgL_res3789z00_2592 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3471z00_2567)
										(BgL_method3471z00_2567, (obj_t) (BgL_arg3660z00_2562),
											(obj_t) (BgL_localz00_2565), BgL_nesterz00_2566, BEOA));
							}} BgL_res3789z00_2592;
					}}
					BgL_auxz00_4230 = BgL_nodez00_1511;
					return (obj_t) (BgL_auxz00_4230);
				}
			}
		}
	}



/* nest-loop!-cast3491 */
	obj_t BGl_nestzd2loopz12zd2cast3491z12zzinline_loopz00(obj_t BgL_envz00_3320,
		obj_t BgL_nodez00_3321, obj_t BgL_varz00_3322, obj_t BgL_nesterz00_3323)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 268 */
			{
				BgL_castz00_bglt BgL_nodez00_1503;

				obj_t BgL_varz00_1504;

				obj_t BgL_nesterz00_1505;

				{	/* Inline/loop.scm 269 */
					BgL_castz00_bglt BgL_auxz00_4259;

					BgL_nodez00_1503 = (BgL_castz00_bglt) (BgL_nodez00_3321);
					BgL_varz00_1504 = BgL_varz00_3322;
					BgL_nesterz00_1505 = BgL_nesterz00_3323;
					{	/* Inline/loop.scm 269 */
						BgL_nodez00_bglt BgL_arg3658z00_2531;

						BgL_arg3658z00_2531 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1503))->BgL_argz00);
						{	/* Inline/loop.scm 269 */
							BgL_nodez00_bglt BgL_res3786z00_2561;

							{	/* Inline/loop.scm 269 */
								BgL_localz00_bglt BgL_localz00_2534;

								obj_t BgL_nesterz00_2535;

								BgL_localz00_2534 = (BgL_localz00_bglt) (BgL_varz00_1504);
								BgL_nesterz00_2535 = BgL_nesterz00_1505;
								{	/* Inline/loop.scm 269 */
									obj_t BgL_method3471z00_2536;

									{	/* Inline/loop.scm 269 */
										BgL_objectz00_bglt BgL_objz00_2537;

										BgL_objz00_2537 =
											(BgL_objectz00_bglt) (BgL_arg3658z00_2531);
										{	/* Inline/loop.scm 269 */
											long BgL_objzd2classzd2numz00_2538;

											BgL_objzd2classzd2numz00_2538 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2537);
											{	/* Inline/loop.scm 269 */
												obj_t BgL_arg2643z00_2539;

												BgL_arg2643z00_2539 =
													PROCEDURE_REF
													(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
													(int) (((long) 1)));
												{	/* Inline/loop.scm 269 */
													obj_t BgL_arrayz00_2541;

													int BgL_offsetz00_2542;

													BgL_arrayz00_2541 = BgL_arg2643z00_2539;
													BgL_offsetz00_2542 =
														(int) (BgL_objzd2classzd2numz00_2538);
													{	/* Inline/loop.scm 269 */
														long BgL_offsetz00_2543;

														BgL_offsetz00_2543 =
															((long) (BgL_offsetz00_2542) - OBJECT_TYPE);
														{	/* Inline/loop.scm 269 */
															long BgL_modz00_2544;

															{	/* Inline/loop.scm 269 */
																int BgL_arg2645z00_2545;

																BgL_arg2645z00_2545 = (int) (((long) 16));
																{	/* Inline/loop.scm 269 */
																	long BgL_auxz00_4270;

																	BgL_auxz00_4270 =
																		(long) (BgL_arg2645z00_2545);
																	BgL_modz00_2544 =
																		(BgL_offsetz00_2543 / BgL_auxz00_4270);
															}}
															{	/* Inline/loop.scm 269 */
																long BgL_restz00_2546;

																{	/* Inline/loop.scm 269 */
																	int BgL_arg2644z00_2547;

																	BgL_arg2644z00_2547 = (int) (((long) 16));
																	{	/* Inline/loop.scm 269 */
																		long BgL_auxz00_4274;

																		BgL_auxz00_4274 =
																			(long) (BgL_arg2644z00_2547);
																		BgL_restz00_2546 =
																			(BgL_offsetz00_2543 % BgL_auxz00_4274);
																}}
																{	/* Inline/loop.scm 269 */

																	BgL_method3471z00_2536 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2541,
																			(int) (BgL_modz00_2544)),
																		(int) (BgL_restz00_2546));
									}}}}}}}}
									BgL_res3786z00_2561 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3471z00_2536)
										(BgL_method3471z00_2536, (obj_t) (BgL_arg3658z00_2531),
											(obj_t) (BgL_localz00_2534), BgL_nesterz00_2535, BEOA));
							}} BgL_res3786z00_2561;
					}}
					BgL_auxz00_4259 = BgL_nodez00_1503;
					return (obj_t) (BgL_auxz00_4259);
				}
			}
		}
	}



/* nest-loop!-extern3489 */
	obj_t BGl_nestzd2loopz12zd2extern3489z12zzinline_loopz00(obj_t
		BgL_envz00_3324, obj_t BgL_nodez00_3325, obj_t BgL_varz00_3326,
		obj_t BgL_nesterz00_3327)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 261 */
			{
				BgL_externz00_bglt BgL_nodez00_1495;

				obj_t BgL_varz00_1496;

				obj_t BgL_nesterz00_1497;

				{	/* Inline/loop.scm 262 */
					BgL_externz00_bglt BgL_auxz00_4288;

					BgL_nodez00_1495 = (BgL_externz00_bglt) (BgL_nodez00_3325);
					BgL_varz00_1496 = BgL_varz00_3326;
					BgL_nesterz00_1497 = BgL_nesterz00_3327;
					{	/* Inline/loop.scm 262 */
						obj_t BgL_arg3656z00_2529;

						BgL_arg3656z00_2529 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1495))->BgL_exprza2za2);
						BGl_nestzd2loopz12za2z62zzinline_loopz00(BgL_arg3656z00_2529,
							BgL_varz00_1496, BgL_nesterz00_1497);
					}
					BgL_auxz00_4288 = BgL_nodez00_1495;
					return (obj_t) (BgL_auxz00_4288);
				}
			}
		}
	}



/* nest-loop!-funcall3487 */
	obj_t BGl_nestzd2loopz12zd2funcall3487z12zzinline_loopz00(obj_t
		BgL_envz00_3328, obj_t BgL_nodez00_3329, obj_t BgL_varz00_3330,
		obj_t BgL_nesterz00_3331)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 252 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1484;

				obj_t BgL_varz00_1485;

				obj_t BgL_nesterz00_1486;

				{	/* Inline/loop.scm 253 */
					BgL_funcallz00_bglt BgL_auxz00_4293;

					BgL_nodez00_1484 = (BgL_funcallz00_bglt) (BgL_nodez00_3329);
					BgL_varz00_1485 = BgL_varz00_3330;
					BgL_nesterz00_1486 = BgL_nesterz00_3331;
					{	/* Inline/loop.scm 254 */
						BgL_nodez00_bglt BgL_arg3652z00_1490;

						{	/* Inline/loop.scm 254 */
							BgL_nodez00_bglt BgL_arg3653z00_1491;

							BgL_arg3653z00_1491 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1484))->BgL_funz00);
							{	/* Inline/loop.scm 254 */
								BgL_nodez00_bglt BgL_res3783z00_2525;

								{	/* Inline/loop.scm 254 */
									BgL_localz00_bglt BgL_localz00_2498;

									obj_t BgL_nesterz00_2499;

									BgL_localz00_2498 = (BgL_localz00_bglt) (BgL_varz00_1485);
									BgL_nesterz00_2499 = BgL_nesterz00_1486;
									{	/* Inline/loop.scm 254 */
										obj_t BgL_method3471z00_2500;

										{	/* Inline/loop.scm 254 */
											BgL_objectz00_bglt BgL_objz00_2501;

											BgL_objz00_2501 =
												(BgL_objectz00_bglt) (BgL_arg3653z00_1491);
											{	/* Inline/loop.scm 254 */
												long BgL_objzd2classzd2numz00_2502;

												BgL_objzd2classzd2numz00_2502 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2501);
												{	/* Inline/loop.scm 254 */
													obj_t BgL_arg2643z00_2503;

													BgL_arg2643z00_2503 =
														PROCEDURE_REF
														(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 254 */
														obj_t BgL_arrayz00_2505;

														int BgL_offsetz00_2506;

														BgL_arrayz00_2505 = BgL_arg2643z00_2503;
														BgL_offsetz00_2506 =
															(int) (BgL_objzd2classzd2numz00_2502);
														{	/* Inline/loop.scm 254 */
															long BgL_offsetz00_2507;

															BgL_offsetz00_2507 =
																((long) (BgL_offsetz00_2506) - OBJECT_TYPE);
															{	/* Inline/loop.scm 254 */
																long BgL_modz00_2508;

																{	/* Inline/loop.scm 254 */
																	int BgL_arg2645z00_2509;

																	BgL_arg2645z00_2509 = (int) (((long) 16));
																	{	/* Inline/loop.scm 254 */
																		long BgL_auxz00_4304;

																		BgL_auxz00_4304 =
																			(long) (BgL_arg2645z00_2509);
																		BgL_modz00_2508 =
																			(BgL_offsetz00_2507 / BgL_auxz00_4304);
																}}
																{	/* Inline/loop.scm 254 */
																	long BgL_restz00_2510;

																	{	/* Inline/loop.scm 254 */
																		int BgL_arg2644z00_2511;

																		BgL_arg2644z00_2511 = (int) (((long) 16));
																		{	/* Inline/loop.scm 254 */
																			long BgL_auxz00_4308;

																			BgL_auxz00_4308 =
																				(long) (BgL_arg2644z00_2511);
																			BgL_restz00_2510 =
																				(BgL_offsetz00_2507 % BgL_auxz00_4308);
																	}}
																	{	/* Inline/loop.scm 254 */

																		BgL_method3471z00_2500 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2505,
																				(int) (BgL_modz00_2508)),
																			(int) (BgL_restz00_2510));
										}}}}}}}}
										BgL_res3783z00_2525 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3471z00_2500) (BgL_method3471z00_2500,
												(obj_t) (BgL_arg3653z00_1491),
												(obj_t) (BgL_localz00_2498), BgL_nesterz00_2499, BEOA));
								}}
								BgL_arg3652z00_1490 = BgL_res3783z00_2525;
						}}
						((((BgL_funcallz00_bglt) CREF(BgL_nodez00_1484))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3652z00_1490), BUNSPEC);
					}
					{	/* Inline/loop.scm 255 */
						obj_t BgL_arg3654z00_1492;

						BgL_arg3654z00_1492 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1484))->BgL_argsz00);
						BGl_nestzd2loopz12za2z62zzinline_loopz00(BgL_arg3654z00_1492,
							BgL_varz00_1485, BgL_nesterz00_1486);
					}
					BgL_auxz00_4293 = BgL_nodez00_1484;
					return (obj_t) (BgL_auxz00_4293);
				}
			}
		}
	}



/* nest-loop!-app-ly3485 */
	obj_t BGl_nestzd2loopz12zd2appzd2ly3485zc0zzinline_loopz00(obj_t
		BgL_envz00_3332, obj_t BgL_nodez00_3333, obj_t BgL_varz00_3334,
		obj_t BgL_nesterz00_3335)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 243 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1472;

				obj_t BgL_varz00_1473;

				obj_t BgL_nesterz00_1474;

				{	/* Inline/loop.scm 244 */
					BgL_appzd2lyzd2_bglt BgL_auxz00_4325;

					BgL_nodez00_1472 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_3333);
					BgL_varz00_1473 = BgL_varz00_3334;
					BgL_nesterz00_1474 = BgL_nesterz00_3335;
					{	/* Inline/loop.scm 245 */
						BgL_nodez00_bglt BgL_arg3647z00_1478;

						{	/* Inline/loop.scm 245 */
							BgL_nodez00_bglt BgL_arg3648z00_1479;

							BgL_arg3648z00_1479 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1472))->BgL_funz00);
							{	/* Inline/loop.scm 245 */
								BgL_nodez00_bglt BgL_res3777z00_2461;

								{	/* Inline/loop.scm 245 */
									BgL_localz00_bglt BgL_localz00_2434;

									obj_t BgL_nesterz00_2435;

									BgL_localz00_2434 = (BgL_localz00_bglt) (BgL_varz00_1473);
									BgL_nesterz00_2435 = BgL_nesterz00_1474;
									{	/* Inline/loop.scm 245 */
										obj_t BgL_method3471z00_2436;

										{	/* Inline/loop.scm 245 */
											BgL_objectz00_bglt BgL_objz00_2437;

											BgL_objz00_2437 =
												(BgL_objectz00_bglt) (BgL_arg3648z00_1479);
											{	/* Inline/loop.scm 245 */
												long BgL_objzd2classzd2numz00_2438;

												BgL_objzd2classzd2numz00_2438 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2437);
												{	/* Inline/loop.scm 245 */
													obj_t BgL_arg2643z00_2439;

													BgL_arg2643z00_2439 =
														PROCEDURE_REF
														(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 245 */
														obj_t BgL_arrayz00_2441;

														int BgL_offsetz00_2442;

														BgL_arrayz00_2441 = BgL_arg2643z00_2439;
														BgL_offsetz00_2442 =
															(int) (BgL_objzd2classzd2numz00_2438);
														{	/* Inline/loop.scm 245 */
															long BgL_offsetz00_2443;

															BgL_offsetz00_2443 =
																((long) (BgL_offsetz00_2442) - OBJECT_TYPE);
															{	/* Inline/loop.scm 245 */
																long BgL_modz00_2444;

																{	/* Inline/loop.scm 245 */
																	int BgL_arg2645z00_2445;

																	BgL_arg2645z00_2445 = (int) (((long) 16));
																	{	/* Inline/loop.scm 245 */
																		long BgL_auxz00_4336;

																		BgL_auxz00_4336 =
																			(long) (BgL_arg2645z00_2445);
																		BgL_modz00_2444 =
																			(BgL_offsetz00_2443 / BgL_auxz00_4336);
																}}
																{	/* Inline/loop.scm 245 */
																	long BgL_restz00_2446;

																	{	/* Inline/loop.scm 245 */
																		int BgL_arg2644z00_2447;

																		BgL_arg2644z00_2447 = (int) (((long) 16));
																		{	/* Inline/loop.scm 245 */
																			long BgL_auxz00_4340;

																			BgL_auxz00_4340 =
																				(long) (BgL_arg2644z00_2447);
																			BgL_restz00_2446 =
																				(BgL_offsetz00_2443 % BgL_auxz00_4340);
																	}}
																	{	/* Inline/loop.scm 245 */

																		BgL_method3471z00_2436 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2441,
																				(int) (BgL_modz00_2444)),
																			(int) (BgL_restz00_2446));
										}}}}}}}}
										BgL_res3777z00_2461 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3471z00_2436) (BgL_method3471z00_2436,
												(obj_t) (BgL_arg3648z00_1479),
												(obj_t) (BgL_localz00_2434), BgL_nesterz00_2435, BEOA));
								}}
								BgL_arg3647z00_1478 = BgL_res3777z00_2461;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1472))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3647z00_1478), BUNSPEC);
					}
					{	/* Inline/loop.scm 246 */
						BgL_nodez00_bglt BgL_arg3649z00_1480;

						{	/* Inline/loop.scm 246 */
							BgL_nodez00_bglt BgL_arg3650z00_1481;

							BgL_arg3650z00_1481 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1472))->BgL_argz00);
							{	/* Inline/loop.scm 246 */
								BgL_nodez00_bglt BgL_res3780z00_2493;

								{	/* Inline/loop.scm 246 */
									BgL_localz00_bglt BgL_localz00_2466;

									obj_t BgL_nesterz00_2467;

									BgL_localz00_2466 = (BgL_localz00_bglt) (BgL_varz00_1473);
									BgL_nesterz00_2467 = BgL_nesterz00_1474;
									{	/* Inline/loop.scm 246 */
										obj_t BgL_method3471z00_2468;

										{	/* Inline/loop.scm 246 */
											BgL_objectz00_bglt BgL_objz00_2469;

											BgL_objz00_2469 =
												(BgL_objectz00_bglt) (BgL_arg3650z00_1481);
											{	/* Inline/loop.scm 246 */
												long BgL_objzd2classzd2numz00_2470;

												BgL_objzd2classzd2numz00_2470 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2469);
												{	/* Inline/loop.scm 246 */
													obj_t BgL_arg2643z00_2471;

													BgL_arg2643z00_2471 =
														PROCEDURE_REF
														(BGl_nestzd2loopz12zd2envz12zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 246 */
														obj_t BgL_arrayz00_2473;

														int BgL_offsetz00_2474;

														BgL_arrayz00_2473 = BgL_arg2643z00_2471;
														BgL_offsetz00_2474 =
															(int) (BgL_objzd2classzd2numz00_2470);
														{	/* Inline/loop.scm 246 */
															long BgL_offsetz00_2475;

															BgL_offsetz00_2475 =
																((long) (BgL_offsetz00_2474) - OBJECT_TYPE);
															{	/* Inline/loop.scm 246 */
																long BgL_modz00_2476;

																{	/* Inline/loop.scm 246 */
																	int BgL_arg2645z00_2477;

																	BgL_arg2645z00_2477 = (int) (((long) 16));
																	{	/* Inline/loop.scm 246 */
																		long BgL_auxz00_4363;

																		BgL_auxz00_4363 =
																			(long) (BgL_arg2645z00_2477);
																		BgL_modz00_2476 =
																			(BgL_offsetz00_2475 / BgL_auxz00_4363);
																}}
																{	/* Inline/loop.scm 246 */
																	long BgL_restz00_2478;

																	{	/* Inline/loop.scm 246 */
																		int BgL_arg2644z00_2479;

																		BgL_arg2644z00_2479 = (int) (((long) 16));
																		{	/* Inline/loop.scm 246 */
																			long BgL_auxz00_4367;

																			BgL_auxz00_4367 =
																				(long) (BgL_arg2644z00_2479);
																			BgL_restz00_2478 =
																				(BgL_offsetz00_2475 % BgL_auxz00_4367);
																	}}
																	{	/* Inline/loop.scm 246 */

																		BgL_method3471z00_2468 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2473,
																				(int) (BgL_modz00_2476)),
																			(int) (BgL_restz00_2478));
										}}}}}}}}
										BgL_res3780z00_2493 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3471z00_2468) (BgL_method3471z00_2468,
												(obj_t) (BgL_arg3650z00_1481),
												(obj_t) (BgL_localz00_2466), BgL_nesterz00_2467, BEOA));
								}}
								BgL_arg3649z00_1480 = BgL_res3780z00_2493;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1472))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg3649z00_1480), BUNSPEC);
					}
					BgL_auxz00_4325 = BgL_nodez00_1472;
					return (obj_t) (BgL_auxz00_4325);
				}
			}
		}
	}



/* nest-loop!-app3483 */
	obj_t BGl_nestzd2loopz12zd2app3483z12zzinline_loopz00(obj_t BgL_envz00_3336,
		obj_t BgL_nodez00_3337, obj_t BgL_varz00_3338, obj_t BgL_nesterz00_3339)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 233 */
			{
				BgL_appz00_bglt BgL_nodez00_1458;

				obj_t BgL_varz00_1459;

				obj_t BgL_nesterz00_1460;

				BgL_nodez00_1458 = (BgL_appz00_bglt) (BgL_nodez00_3337);
				BgL_varz00_1459 = BgL_varz00_3338;
				BgL_nesterz00_1460 = BgL_nesterz00_3339;
				{	/* Inline/loop.scm 235 */
					obj_t BgL_arg3640z00_1464;

					BgL_arg3640z00_1464 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_1458))->BgL_argsz00);
					BGl_nestzd2loopz12za2z62zzinline_loopz00(BgL_arg3640z00_1464,
						BgL_varz00_1459, BgL_nesterz00_1460);
				}
				{	/* Inline/loop.scm 236 */
					bool_t BgL_testz00_4384;

					{	/* Inline/loop.scm 236 */
						bool_t BgL_testz00_4385;

						{	/* Inline/loop.scm 236 */
							BgL_varz00_bglt BgL_arg3645z00_1469;

							BgL_arg3645z00_1469 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1458))->BgL_funz00);
							{	/* Inline/loop.scm 236 */
								obj_t BgL_obj2170z00_2429;

								BgL_obj2170z00_2429 = (obj_t) (BgL_arg3645z00_1469);
								BgL_testz00_4385 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj2170z00_2429,
									BGl_varz00zzast_nodez00);
							}
						}
						if (BgL_testz00_4385)
							{	/* Inline/loop.scm 236 */
								obj_t BgL_auxz00_4389;

								{	/* Inline/loop.scm 236 */
									BgL_variablez00_bglt BgL_auxz00_4390;

									{	/* Inline/loop.scm 236 */
										BgL_varz00_bglt BgL_obj2155z00_2431;

										BgL_obj2155z00_2431 =
											(((BgL_appz00_bglt) CREF(BgL_nodez00_1458))->BgL_funz00);
										BgL_auxz00_4390 =
											(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2431))->
											BgL_variablez00);
									}
									BgL_auxz00_4389 = (obj_t) (BgL_auxz00_4390);
								}
								BgL_testz00_4384 = (BgL_auxz00_4389 == BgL_varz00_1459);
							}
						else
							{	/* Inline/loop.scm 236 */
								BgL_testz00_4384 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_4384)
						{	/* Inline/loop.scm 236 */
							return
								PROCEDURE_ENTRY(BgL_nesterz00_1460) (BgL_nesterz00_1460,
								(obj_t) (BgL_nodez00_1458), BEOA);
						}
					else
						{	/* Inline/loop.scm 236 */
							return (obj_t) (BgL_nodez00_1458);
						}
				}
			}
		}
	}



/* nest-loop!-sequence3481 */
	obj_t BGl_nestzd2loopz12zd2sequence3481z12zzinline_loopz00(obj_t
		BgL_envz00_3340, obj_t BgL_nodez00_3341, obj_t BgL_varz00_3342,
		obj_t BgL_nesterz00_3343)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 225 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1449;

				obj_t BgL_varz00_1450;

				obj_t BgL_nesterz00_1451;

				{	/* Inline/loop.scm 226 */
					BgL_sequencez00_bglt BgL_auxz00_4400;

					BgL_nodez00_1449 = (BgL_sequencez00_bglt) (BgL_nodez00_3341);
					BgL_varz00_1450 = BgL_varz00_3342;
					BgL_nesterz00_1451 = BgL_nesterz00_3343;
					{	/* Inline/loop.scm 226 */
						obj_t BgL_arg3638z00_2425;

						BgL_arg3638z00_2425 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1449))->BgL_nodesz00);
						BGl_nestzd2loopz12za2z62zzinline_loopz00(BgL_arg3638z00_2425,
							BgL_varz00_1450, BgL_nesterz00_1451);
					}
					BgL_auxz00_4400 = BgL_nodez00_1449;
					return (obj_t) (BgL_auxz00_4400);
				}
			}
		}
	}



/* nest-loop!-var3479 */
	obj_t BGl_nestzd2loopz12zd2var3479z12zzinline_loopz00(obj_t BgL_envz00_3344,
		obj_t BgL_nodez00_3345, obj_t BgL_varz00_3346, obj_t BgL_nesterz00_3347)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 219 */
			return (obj_t) ((BgL_varz00_bglt) (BgL_nodez00_3345));
		}
	}



/* nest-loop!-kwote3477 */
	obj_t BGl_nestzd2loopz12zd2kwote3477z12zzinline_loopz00(obj_t BgL_envz00_3348,
		obj_t BgL_nodez00_3349, obj_t BgL_varz00_3350, obj_t BgL_nesterz00_3351)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 213 */
			return (obj_t) ((BgL_kwotez00_bglt) (BgL_nodez00_3349));
		}
	}



/* nest-loop!-atom3474 */
	obj_t BGl_nestzd2loopz12zd2atom3474z12zzinline_loopz00(obj_t BgL_envz00_3352,
		obj_t BgL_nodez00_3353, obj_t BgL_varz00_3354, obj_t BgL_nesterz00_3355)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 207 */
			return (obj_t) ((BgL_atomz00_bglt) (BgL_nodez00_3353));
		}
	}



/* find-let-fun?-box-se3469 */
	obj_t BGl_findzd2letzd2funzf3zd2boxzd2se3469zf3zzinline_loopz00(obj_t
		BgL_envz00_3356, obj_t BgL_nodez00_3357)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 182 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1419;

				BgL_nodez00_1419 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_3357);
				{	/* Inline/loop.scm 184 */
					obj_t BgL__ortest_3396z00_1423;

					{	/* Inline/loop.scm 184 */
						BgL_varz00_bglt BgL_arg3633z00_1425;

						BgL_arg3633z00_1425 =
							(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1419))->BgL_varz00);
						{	/* Inline/loop.scm 184 */
							BgL_nodez00_bglt BgL_nodez00_2371;

							BgL_nodez00_2371 = (BgL_nodez00_bglt) (BgL_arg3633z00_1425);
							{	/* Inline/loop.scm 184 */
								obj_t BgL_method3435z00_2372;

								{	/* Inline/loop.scm 184 */
									BgL_objectz00_bglt BgL_objz00_2373;

									BgL_objz00_2373 = (BgL_objectz00_bglt) (BgL_nodez00_2371);
									{	/* Inline/loop.scm 184 */
										long BgL_objzd2classzd2numz00_2374;

										BgL_objzd2classzd2numz00_2374 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2373);
										{	/* Inline/loop.scm 184 */
											obj_t BgL_arg2643z00_2375;

											BgL_arg2643z00_2375 =
												PROCEDURE_REF
												(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
												(int) (((long) 1)));
											{	/* Inline/loop.scm 184 */
												obj_t BgL_arrayz00_2377;

												int BgL_offsetz00_2378;

												BgL_arrayz00_2377 = BgL_arg2643z00_2375;
												BgL_offsetz00_2378 =
													(int) (BgL_objzd2classzd2numz00_2374);
												{	/* Inline/loop.scm 184 */
													long BgL_offsetz00_2379;

													BgL_offsetz00_2379 =
														((long) (BgL_offsetz00_2378) - OBJECT_TYPE);
													{	/* Inline/loop.scm 184 */
														long BgL_modz00_2380;

														{	/* Inline/loop.scm 184 */
															int BgL_arg2645z00_2381;

															BgL_arg2645z00_2381 = (int) (((long) 16));
															{	/* Inline/loop.scm 184 */
																long BgL_auxz00_4421;

																BgL_auxz00_4421 = (long) (BgL_arg2645z00_2381);
																BgL_modz00_2380 =
																	(BgL_offsetz00_2379 / BgL_auxz00_4421);
														}}
														{	/* Inline/loop.scm 184 */
															long BgL_restz00_2382;

															{	/* Inline/loop.scm 184 */
																int BgL_arg2644z00_2383;

																BgL_arg2644z00_2383 = (int) (((long) 16));
																{	/* Inline/loop.scm 184 */
																	long BgL_auxz00_4425;

																	BgL_auxz00_4425 =
																		(long) (BgL_arg2644z00_2383);
																	BgL_restz00_2382 =
																		(BgL_offsetz00_2379 % BgL_auxz00_4425);
															}}
															{	/* Inline/loop.scm 184 */

																BgL_method3435z00_2372 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2377,
																		(int) (BgL_modz00_2380)),
																	(int) (BgL_restz00_2382));
								}}}}}}}}
								BgL__ortest_3396z00_1423 =
									PROCEDURE_ENTRY(BgL_method3435z00_2372)
									(BgL_method3435z00_2372, (obj_t) (BgL_nodez00_2371), BEOA);
					}}}
					if (CBOOL(BgL__ortest_3396z00_1423))
						{	/* Inline/loop.scm 184 */
							return BgL__ortest_3396z00_1423;
						}
					else
						{	/* Inline/loop.scm 184 */
							BgL_nodez00_bglt BgL_arg3632z00_1424;

							BgL_arg3632z00_1424 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1419))->
								BgL_valuez00);
							{	/* Inline/loop.scm 184 */
								obj_t BgL_method3435z00_2399;

								{	/* Inline/loop.scm 184 */
									BgL_objectz00_bglt BgL_objz00_2400;

									BgL_objz00_2400 = (BgL_objectz00_bglt) (BgL_arg3632z00_1424);
									{	/* Inline/loop.scm 184 */
										long BgL_objzd2classzd2numz00_2401;

										BgL_objzd2classzd2numz00_2401 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2400);
										{	/* Inline/loop.scm 184 */
											obj_t BgL_arg2643z00_2402;

											BgL_arg2643z00_2402 =
												PROCEDURE_REF
												(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
												(int) (((long) 1)));
											{	/* Inline/loop.scm 184 */
												obj_t BgL_arrayz00_2404;

												int BgL_offsetz00_2405;

												BgL_arrayz00_2404 = BgL_arg2643z00_2402;
												BgL_offsetz00_2405 =
													(int) (BgL_objzd2classzd2numz00_2401);
												{	/* Inline/loop.scm 184 */
													long BgL_offsetz00_2406;

													BgL_offsetz00_2406 =
														((long) (BgL_offsetz00_2405) - OBJECT_TYPE);
													{	/* Inline/loop.scm 184 */
														long BgL_modz00_2407;

														{	/* Inline/loop.scm 184 */
															int BgL_arg2645z00_2408;

															BgL_arg2645z00_2408 = (int) (((long) 16));
															{	/* Inline/loop.scm 184 */
																long BgL_auxz00_4446;

																BgL_auxz00_4446 = (long) (BgL_arg2645z00_2408);
																BgL_modz00_2407 =
																	(BgL_offsetz00_2406 / BgL_auxz00_4446);
														}}
														{	/* Inline/loop.scm 184 */
															long BgL_restz00_2409;

															{	/* Inline/loop.scm 184 */
																int BgL_arg2644z00_2410;

																BgL_arg2644z00_2410 = (int) (((long) 16));
																{	/* Inline/loop.scm 184 */
																	long BgL_auxz00_4450;

																	BgL_auxz00_4450 =
																		(long) (BgL_arg2644z00_2410);
																	BgL_restz00_2409 =
																		(BgL_offsetz00_2406 % BgL_auxz00_4450);
															}}
															{	/* Inline/loop.scm 184 */

																BgL_method3435z00_2399 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2404,
																		(int) (BgL_modz00_2407)),
																	(int) (BgL_restz00_2409));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method3435z00_2399)
									(BgL_method3435z00_2399, (obj_t) (BgL_arg3632z00_1424), BEOA);
							}
						}
				}
			}
		}
	}



/* find-let-fun?-box-re3467 */
	obj_t BGl_findzd2letzd2funzf3zd2boxzd2re3467zf3zzinline_loopz00(obj_t
		BgL_envz00_3358, obj_t BgL_nodez00_3359)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 176 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1413;

				BgL_nodez00_1413 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_3359);
				{	/* Inline/loop.scm 177 */
					BgL_varz00_bglt BgL_arg3630z00_2342;

					BgL_arg3630z00_2342 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1413))->BgL_varz00);
					{	/* Inline/loop.scm 177 */
						BgL_nodez00_bglt BgL_nodez00_2344;

						BgL_nodez00_2344 = (BgL_nodez00_bglt) (BgL_arg3630z00_2342);
						{	/* Inline/loop.scm 177 */
							obj_t BgL_method3435z00_2345;

							{	/* Inline/loop.scm 177 */
								BgL_objectz00_bglt BgL_objz00_2346;

								BgL_objz00_2346 = (BgL_objectz00_bglt) (BgL_nodez00_2344);
								{	/* Inline/loop.scm 177 */
									long BgL_objzd2classzd2numz00_2347;

									BgL_objzd2classzd2numz00_2347 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2346);
									{	/* Inline/loop.scm 177 */
										obj_t BgL_arg2643z00_2348;

										BgL_arg2643z00_2348 =
											PROCEDURE_REF
											(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
											(int) (((long) 1)));
										{	/* Inline/loop.scm 177 */
											obj_t BgL_arrayz00_2350;

											int BgL_offsetz00_2351;

											BgL_arrayz00_2350 = BgL_arg2643z00_2348;
											BgL_offsetz00_2351 =
												(int) (BgL_objzd2classzd2numz00_2347);
											{	/* Inline/loop.scm 177 */
												long BgL_offsetz00_2352;

												BgL_offsetz00_2352 =
													((long) (BgL_offsetz00_2351) - OBJECT_TYPE);
												{	/* Inline/loop.scm 177 */
													long BgL_modz00_2353;

													{	/* Inline/loop.scm 177 */
														int BgL_arg2645z00_2354;

														BgL_arg2645z00_2354 = (int) (((long) 16));
														{	/* Inline/loop.scm 177 */
															long BgL_auxz00_4471;

															BgL_auxz00_4471 = (long) (BgL_arg2645z00_2354);
															BgL_modz00_2353 =
																(BgL_offsetz00_2352 / BgL_auxz00_4471);
													}}
													{	/* Inline/loop.scm 177 */
														long BgL_restz00_2355;

														{	/* Inline/loop.scm 177 */
															int BgL_arg2644z00_2356;

															BgL_arg2644z00_2356 = (int) (((long) 16));
															{	/* Inline/loop.scm 177 */
																long BgL_auxz00_4475;

																BgL_auxz00_4475 = (long) (BgL_arg2644z00_2356);
																BgL_restz00_2355 =
																	(BgL_offsetz00_2352 % BgL_auxz00_4475);
														}}
														{	/* Inline/loop.scm 177 */

															BgL_method3435z00_2345 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2350,
																	(int) (BgL_modz00_2353)),
																(int) (BgL_restz00_2355));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3435z00_2345) (BgL_method3435z00_2345,
								(obj_t) (BgL_nodez00_2344), BEOA);
						}
					}
				}
			}
		}
	}



/* find-let-fun?-make-b3465 */
	obj_t BGl_findzd2letzd2funzf3zd2makezd2b3465zf3zzinline_loopz00(obj_t
		BgL_envz00_3360, obj_t BgL_nodez00_3361)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 170 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1407;

				BgL_nodez00_1407 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_3361);
				{	/* Inline/loop.scm 171 */
					BgL_nodez00_bglt BgL_arg3628z00_2314;

					BgL_arg3628z00_2314 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1407))->BgL_valuez00);
					{	/* Inline/loop.scm 171 */
						obj_t BgL_method3435z00_2317;

						{	/* Inline/loop.scm 171 */
							BgL_objectz00_bglt BgL_objz00_2318;

							BgL_objz00_2318 = (BgL_objectz00_bglt) (BgL_arg3628z00_2314);
							{	/* Inline/loop.scm 171 */
								long BgL_objzd2classzd2numz00_2319;

								BgL_objzd2classzd2numz00_2319 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2318);
								{	/* Inline/loop.scm 171 */
									obj_t BgL_arg2643z00_2320;

									BgL_arg2643z00_2320 =
										PROCEDURE_REF
										(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
										(int) (((long) 1)));
									{	/* Inline/loop.scm 171 */
										obj_t BgL_arrayz00_2322;

										int BgL_offsetz00_2323;

										BgL_arrayz00_2322 = BgL_arg2643z00_2320;
										BgL_offsetz00_2323 = (int) (BgL_objzd2classzd2numz00_2319);
										{	/* Inline/loop.scm 171 */
											long BgL_offsetz00_2324;

											BgL_offsetz00_2324 =
												((long) (BgL_offsetz00_2323) - OBJECT_TYPE);
											{	/* Inline/loop.scm 171 */
												long BgL_modz00_2325;

												{	/* Inline/loop.scm 171 */
													int BgL_arg2645z00_2326;

													BgL_arg2645z00_2326 = (int) (((long) 16));
													{	/* Inline/loop.scm 171 */
														long BgL_auxz00_4495;

														BgL_auxz00_4495 = (long) (BgL_arg2645z00_2326);
														BgL_modz00_2325 =
															(BgL_offsetz00_2324 / BgL_auxz00_4495);
												}}
												{	/* Inline/loop.scm 171 */
													long BgL_restz00_2327;

													{	/* Inline/loop.scm 171 */
														int BgL_arg2644z00_2328;

														BgL_arg2644z00_2328 = (int) (((long) 16));
														{	/* Inline/loop.scm 171 */
															long BgL_auxz00_4499;

															BgL_auxz00_4499 = (long) (BgL_arg2644z00_2328);
															BgL_restz00_2327 =
																(BgL_offsetz00_2324 % BgL_auxz00_4499);
													}}
													{	/* Inline/loop.scm 171 */

														BgL_method3435z00_2317 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2322,
																(int) (BgL_modz00_2325)),
															(int) (BgL_restz00_2327));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3435z00_2317) (BgL_method3435z00_2317,
							(obj_t) (BgL_arg3628z00_2314), BEOA);
					}
				}
			}
		}
	}



/* find-let-fun?-jump-e3463 */
	obj_t BGl_findzd2letzd2funzf3zd2jumpzd2e3463zf3zzinline_loopz00(obj_t
		BgL_envz00_3362, obj_t BgL_nodez00_3363)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 163 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1398;

				BgL_nodez00_1398 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_3363);
				{	/* Inline/loop.scm 165 */
					obj_t BgL__ortest_3393z00_1402;

					{	/* Inline/loop.scm 165 */
						BgL_nodez00_bglt BgL_arg3626z00_1404;

						BgL_arg3626z00_1404 =
							(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1398))->
							BgL_exitz00);
						{	/* Inline/loop.scm 165 */
							obj_t BgL_method3435z00_2262;

							{	/* Inline/loop.scm 165 */
								BgL_objectz00_bglt BgL_objz00_2263;

								BgL_objz00_2263 = (BgL_objectz00_bglt) (BgL_arg3626z00_1404);
								{	/* Inline/loop.scm 165 */
									long BgL_objzd2classzd2numz00_2264;

									BgL_objzd2classzd2numz00_2264 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2263);
									{	/* Inline/loop.scm 165 */
										obj_t BgL_arg2643z00_2265;

										BgL_arg2643z00_2265 =
											PROCEDURE_REF
											(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
											(int) (((long) 1)));
										{	/* Inline/loop.scm 165 */
											obj_t BgL_arrayz00_2267;

											int BgL_offsetz00_2268;

											BgL_arrayz00_2267 = BgL_arg2643z00_2265;
											BgL_offsetz00_2268 =
												(int) (BgL_objzd2classzd2numz00_2264);
											{	/* Inline/loop.scm 165 */
												long BgL_offsetz00_2269;

												BgL_offsetz00_2269 =
													((long) (BgL_offsetz00_2268) - OBJECT_TYPE);
												{	/* Inline/loop.scm 165 */
													long BgL_modz00_2270;

													{	/* Inline/loop.scm 165 */
														int BgL_arg2645z00_2271;

														BgL_arg2645z00_2271 = (int) (((long) 16));
														{	/* Inline/loop.scm 165 */
															long BgL_auxz00_4519;

															BgL_auxz00_4519 = (long) (BgL_arg2645z00_2271);
															BgL_modz00_2270 =
																(BgL_offsetz00_2269 / BgL_auxz00_4519);
													}}
													{	/* Inline/loop.scm 165 */
														long BgL_restz00_2272;

														{	/* Inline/loop.scm 165 */
															int BgL_arg2644z00_2273;

															BgL_arg2644z00_2273 = (int) (((long) 16));
															{	/* Inline/loop.scm 165 */
																long BgL_auxz00_4523;

																BgL_auxz00_4523 = (long) (BgL_arg2644z00_2273);
																BgL_restz00_2272 =
																	(BgL_offsetz00_2269 % BgL_auxz00_4523);
														}}
														{	/* Inline/loop.scm 165 */

															BgL_method3435z00_2262 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2267,
																	(int) (BgL_modz00_2270)),
																(int) (BgL_restz00_2272));
							}}}}}}}}
							BgL__ortest_3393z00_1402 =
								PROCEDURE_ENTRY(BgL_method3435z00_2262) (BgL_method3435z00_2262,
								(obj_t) (BgL_arg3626z00_1404), BEOA);
					}}
					if (CBOOL(BgL__ortest_3393z00_1402))
						{	/* Inline/loop.scm 165 */
							return BgL__ortest_3393z00_1402;
						}
					else
						{	/* Inline/loop.scm 165 */
							BgL_nodez00_bglt BgL_arg3625z00_1403;

							BgL_arg3625z00_1403 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1398))->
								BgL_valuez00);
							{	/* Inline/loop.scm 165 */
								obj_t BgL_method3435z00_2289;

								{	/* Inline/loop.scm 165 */
									BgL_objectz00_bglt BgL_objz00_2290;

									BgL_objz00_2290 = (BgL_objectz00_bglt) (BgL_arg3625z00_1403);
									{	/* Inline/loop.scm 165 */
										long BgL_objzd2classzd2numz00_2291;

										BgL_objzd2classzd2numz00_2291 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2290);
										{	/* Inline/loop.scm 165 */
											obj_t BgL_arg2643z00_2292;

											BgL_arg2643z00_2292 =
												PROCEDURE_REF
												(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
												(int) (((long) 1)));
											{	/* Inline/loop.scm 165 */
												obj_t BgL_arrayz00_2294;

												int BgL_offsetz00_2295;

												BgL_arrayz00_2294 = BgL_arg2643z00_2292;
												BgL_offsetz00_2295 =
													(int) (BgL_objzd2classzd2numz00_2291);
												{	/* Inline/loop.scm 165 */
													long BgL_offsetz00_2296;

													BgL_offsetz00_2296 =
														((long) (BgL_offsetz00_2295) - OBJECT_TYPE);
													{	/* Inline/loop.scm 165 */
														long BgL_modz00_2297;

														{	/* Inline/loop.scm 165 */
															int BgL_arg2645z00_2298;

															BgL_arg2645z00_2298 = (int) (((long) 16));
															{	/* Inline/loop.scm 165 */
																long BgL_auxz00_4544;

																BgL_auxz00_4544 = (long) (BgL_arg2645z00_2298);
																BgL_modz00_2297 =
																	(BgL_offsetz00_2296 / BgL_auxz00_4544);
														}}
														{	/* Inline/loop.scm 165 */
															long BgL_restz00_2299;

															{	/* Inline/loop.scm 165 */
																int BgL_arg2644z00_2300;

																BgL_arg2644z00_2300 = (int) (((long) 16));
																{	/* Inline/loop.scm 165 */
																	long BgL_auxz00_4548;

																	BgL_auxz00_4548 =
																		(long) (BgL_arg2644z00_2300);
																	BgL_restz00_2299 =
																		(BgL_offsetz00_2296 % BgL_auxz00_4548);
															}}
															{	/* Inline/loop.scm 165 */

																BgL_method3435z00_2289 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2294,
																		(int) (BgL_modz00_2297)),
																	(int) (BgL_restz00_2299));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method3435z00_2289)
									(BgL_method3435z00_2289, (obj_t) (BgL_arg3625z00_1403), BEOA);
							}
						}
				}
			}
		}
	}



/* find-let-fun?-set-ex3461 */
	obj_t BGl_findzd2letzd2funzf3zd2setzd2ex3461zf3zzinline_loopz00(obj_t
		BgL_envz00_3364, obj_t BgL_nodez00_3365)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 157 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1392;

				BgL_nodez00_1392 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_3365);
				{	/* Inline/loop.scm 158 */
					BgL_nodez00_bglt BgL_arg3623z00_2232;

					BgL_arg3623z00_2232 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1392))->BgL_bodyz00);
					{	/* Inline/loop.scm 158 */
						obj_t BgL_method3435z00_2235;

						{	/* Inline/loop.scm 158 */
							BgL_objectz00_bglt BgL_objz00_2236;

							BgL_objz00_2236 = (BgL_objectz00_bglt) (BgL_arg3623z00_2232);
							{	/* Inline/loop.scm 158 */
								long BgL_objzd2classzd2numz00_2237;

								BgL_objzd2classzd2numz00_2237 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2236);
								{	/* Inline/loop.scm 158 */
									obj_t BgL_arg2643z00_2238;

									BgL_arg2643z00_2238 =
										PROCEDURE_REF
										(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
										(int) (((long) 1)));
									{	/* Inline/loop.scm 158 */
										obj_t BgL_arrayz00_2240;

										int BgL_offsetz00_2241;

										BgL_arrayz00_2240 = BgL_arg2643z00_2238;
										BgL_offsetz00_2241 = (int) (BgL_objzd2classzd2numz00_2237);
										{	/* Inline/loop.scm 158 */
											long BgL_offsetz00_2242;

											BgL_offsetz00_2242 =
												((long) (BgL_offsetz00_2241) - OBJECT_TYPE);
											{	/* Inline/loop.scm 158 */
												long BgL_modz00_2243;

												{	/* Inline/loop.scm 158 */
													int BgL_arg2645z00_2244;

													BgL_arg2645z00_2244 = (int) (((long) 16));
													{	/* Inline/loop.scm 158 */
														long BgL_auxz00_4568;

														BgL_auxz00_4568 = (long) (BgL_arg2645z00_2244);
														BgL_modz00_2243 =
															(BgL_offsetz00_2242 / BgL_auxz00_4568);
												}}
												{	/* Inline/loop.scm 158 */
													long BgL_restz00_2245;

													{	/* Inline/loop.scm 158 */
														int BgL_arg2644z00_2246;

														BgL_arg2644z00_2246 = (int) (((long) 16));
														{	/* Inline/loop.scm 158 */
															long BgL_auxz00_4572;

															BgL_auxz00_4572 = (long) (BgL_arg2644z00_2246);
															BgL_restz00_2245 =
																(BgL_offsetz00_2242 % BgL_auxz00_4572);
													}}
													{	/* Inline/loop.scm 158 */

														BgL_method3435z00_2235 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2240,
																(int) (BgL_modz00_2243)),
															(int) (BgL_restz00_2245));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3435z00_2235) (BgL_method3435z00_2235,
							(obj_t) (BgL_arg3623z00_2232), BEOA);
					}
				}
			}
		}
	}



/* find-let-fun?-let-va3459 */
	obj_t BGl_findzd2letzd2funzf3zd2letzd2va3459zf3zzinline_loopz00(obj_t
		BgL_envz00_3366, obj_t BgL_nodez00_3367)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 144 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1376;

				BgL_nodez00_1376 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_3367);
				{	/* Inline/loop.scm 145 */
					obj_t BgL_g3390z00_1379;

					BgL_g3390z00_1379 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1376))->BgL_bindingsz00);
					{
						obj_t BgL_bindingsz00_1381;

						BgL_bindingsz00_1381 = BgL_g3390z00_1379;
					BgL_zc3anonymousza33615ze3z83_1382:
						if (NULLP(BgL_bindingsz00_1381))
							{	/* Inline/loop.scm 148 */
								BgL_nodez00_bglt BgL_arg3617z00_1384;

								BgL_arg3617z00_1384 =
									(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1376))->
									BgL_bodyz00);
								{	/* Inline/loop.scm 148 */
									obj_t BgL_method3435z00_2178;

									{	/* Inline/loop.scm 148 */
										BgL_objectz00_bglt BgL_objz00_2179;

										BgL_objz00_2179 =
											(BgL_objectz00_bglt) (BgL_arg3617z00_1384);
										{	/* Inline/loop.scm 148 */
											long BgL_objzd2classzd2numz00_2180;

											BgL_objzd2classzd2numz00_2180 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2179);
											{	/* Inline/loop.scm 148 */
												obj_t BgL_arg2643z00_2181;

												BgL_arg2643z00_2181 =
													PROCEDURE_REF
													(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
													(int) (((long) 1)));
												{	/* Inline/loop.scm 148 */
													obj_t BgL_arrayz00_2183;

													int BgL_offsetz00_2184;

													BgL_arrayz00_2183 = BgL_arg2643z00_2181;
													BgL_offsetz00_2184 =
														(int) (BgL_objzd2classzd2numz00_2180);
													{	/* Inline/loop.scm 148 */
														long BgL_offsetz00_2185;

														BgL_offsetz00_2185 =
															((long) (BgL_offsetz00_2184) - OBJECT_TYPE);
														{	/* Inline/loop.scm 148 */
															long BgL_modz00_2186;

															{	/* Inline/loop.scm 148 */
																int BgL_arg2645z00_2187;

																BgL_arg2645z00_2187 = (int) (((long) 16));
																{	/* Inline/loop.scm 148 */
																	long BgL_auxz00_4595;

																	BgL_auxz00_4595 =
																		(long) (BgL_arg2645z00_2187);
																	BgL_modz00_2186 =
																		(BgL_offsetz00_2185 / BgL_auxz00_4595);
															}}
															{	/* Inline/loop.scm 148 */
																long BgL_restz00_2188;

																{	/* Inline/loop.scm 148 */
																	int BgL_arg2644z00_2189;

																	BgL_arg2644z00_2189 = (int) (((long) 16));
																	{	/* Inline/loop.scm 148 */
																		long BgL_auxz00_4599;

																		BgL_auxz00_4599 =
																			(long) (BgL_arg2644z00_2189);
																		BgL_restz00_2188 =
																			(BgL_offsetz00_2185 % BgL_auxz00_4599);
																}}
																{	/* Inline/loop.scm 148 */

																	BgL_method3435z00_2178 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2183,
																			(int) (BgL_modz00_2186)),
																		(int) (BgL_restz00_2188));
									}}}}}}}}
									return
										PROCEDURE_ENTRY(BgL_method3435z00_2178)
										(BgL_method3435z00_2178, (obj_t) (BgL_arg3617z00_1384),
										BEOA);
								}
							}
						else
							{	/* Inline/loop.scm 149 */
								bool_t BgL_testz00_4609;

								{	/* Inline/loop.scm 149 */
									obj_t BgL_arg3620z00_1387;

									BgL_arg3620z00_1387 = CDR(CAR(BgL_bindingsz00_1381));
									{	/* Inline/loop.scm 149 */
										BgL_nodez00_bglt BgL_nodez00_2205;

										BgL_nodez00_2205 = (BgL_nodez00_bglt) (BgL_arg3620z00_1387);
										{	/* Inline/loop.scm 149 */
											obj_t BgL_method3435z00_2206;

											{	/* Inline/loop.scm 149 */
												BgL_objectz00_bglt BgL_objz00_2207;

												BgL_objz00_2207 =
													(BgL_objectz00_bglt) (BgL_nodez00_2205);
												{	/* Inline/loop.scm 149 */
													long BgL_objzd2classzd2numz00_2208;

													BgL_objzd2classzd2numz00_2208 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2207);
													{	/* Inline/loop.scm 149 */
														obj_t BgL_arg2643z00_2209;

														BgL_arg2643z00_2209 =
															PROCEDURE_REF
															(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
															(int) (((long) 1)));
														{	/* Inline/loop.scm 149 */
															obj_t BgL_arrayz00_2211;

															int BgL_offsetz00_2212;

															BgL_arrayz00_2211 = BgL_arg2643z00_2209;
															BgL_offsetz00_2212 =
																(int) (BgL_objzd2classzd2numz00_2208);
															{	/* Inline/loop.scm 149 */
																long BgL_offsetz00_2213;

																BgL_offsetz00_2213 =
																	((long) (BgL_offsetz00_2212) - OBJECT_TYPE);
																{	/* Inline/loop.scm 149 */
																	long BgL_modz00_2214;

																	{	/* Inline/loop.scm 149 */
																		int BgL_arg2645z00_2215;

																		BgL_arg2645z00_2215 = (int) (((long) 16));
																		{	/* Inline/loop.scm 149 */
																			long BgL_auxz00_4621;

																			BgL_auxz00_4621 =
																				(long) (BgL_arg2645z00_2215);
																			BgL_modz00_2214 =
																				(BgL_offsetz00_2213 / BgL_auxz00_4621);
																	}}
																	{	/* Inline/loop.scm 149 */
																		long BgL_restz00_2216;

																		{	/* Inline/loop.scm 149 */
																			int BgL_arg2644z00_2217;

																			BgL_arg2644z00_2217 = (int) (((long) 16));
																			{	/* Inline/loop.scm 149 */
																				long BgL_auxz00_4625;

																				BgL_auxz00_4625 =
																					(long) (BgL_arg2644z00_2217);
																				BgL_restz00_2216 =
																					(BgL_offsetz00_2213 %
																					BgL_auxz00_4625);
																		}}
																		{	/* Inline/loop.scm 149 */

																			BgL_method3435z00_2206 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2211,
																					(int) (BgL_modz00_2214)),
																				(int) (BgL_restz00_2216));
											}}}}}}}}
											BgL_testz00_4609 =
												CBOOL(PROCEDURE_ENTRY(BgL_method3435z00_2206)
												(BgL_method3435z00_2206, (obj_t) (BgL_nodez00_2205),
													BEOA));
								}}}
								if (BgL_testz00_4609)
									{	/* Inline/loop.scm 149 */
										return BTRUE;
									}
								else
									{
										obj_t BgL_bindingsz00_4636;

										BgL_bindingsz00_4636 = CDR(BgL_bindingsz00_1381);
										BgL_bindingsz00_1381 = BgL_bindingsz00_4636;
										goto BgL_zc3anonymousza33615ze3z83_1382;
									}
							}
					}
				}
			}
		}
	}



/* find-let-fun?-let-fu3457 */
	obj_t BGl_findzd2letzd2funzf3zd2letzd2fu3457zf3zzinline_loopz00(obj_t
		BgL_envz00_3368, obj_t BgL_nodez00_3369)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 138 */
			return BBOOL(((bool_t) 1));
		}
	}



/* find-let-fun?-select3455 */
	obj_t BGl_findzd2letzd2funzf3zd2select3455z21zzinline_loopz00(obj_t
		BgL_envz00_3370, obj_t BgL_nodez00_3371)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 125 */
			{
				BgL_selectz00_bglt BgL_nodez00_1355;

				BgL_nodez00_1355 = (BgL_selectz00_bglt) (BgL_nodez00_3371);
				{	/* Inline/loop.scm 126 */
					obj_t BgL_g3389z00_1358;

					BgL_g3389z00_1358 =
						(((BgL_selectz00_bglt) CREF(BgL_nodez00_1355))->BgL_clausesz00);
					{
						obj_t BgL_clausesz00_1360;

						BgL_clausesz00_1360 = BgL_g3389z00_1358;
					BgL_zc3anonymousza33605ze3z83_1361:
						if (NULLP(BgL_clausesz00_1360))
							{	/* Inline/loop.scm 129 */
								BgL_nodez00_bglt BgL_arg3607z00_1363;

								BgL_arg3607z00_1363 =
									(((BgL_selectz00_bglt) CREF(BgL_nodez00_1355))->BgL_testz00);
								{	/* Inline/loop.scm 129 */
									obj_t BgL_method3435z00_2120;

									{	/* Inline/loop.scm 129 */
										BgL_objectz00_bglt BgL_objz00_2121;

										BgL_objz00_2121 =
											(BgL_objectz00_bglt) (BgL_arg3607z00_1363);
										{	/* Inline/loop.scm 129 */
											long BgL_objzd2classzd2numz00_2122;

											BgL_objzd2classzd2numz00_2122 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2121);
											{	/* Inline/loop.scm 129 */
												obj_t BgL_arg2643z00_2123;

												BgL_arg2643z00_2123 =
													PROCEDURE_REF
													(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
													(int) (((long) 1)));
												{	/* Inline/loop.scm 129 */
													obj_t BgL_arrayz00_2125;

													int BgL_offsetz00_2126;

													BgL_arrayz00_2125 = BgL_arg2643z00_2123;
													BgL_offsetz00_2126 =
														(int) (BgL_objzd2classzd2numz00_2122);
													{	/* Inline/loop.scm 129 */
														long BgL_offsetz00_2127;

														BgL_offsetz00_2127 =
															((long) (BgL_offsetz00_2126) - OBJECT_TYPE);
														{	/* Inline/loop.scm 129 */
															long BgL_modz00_2128;

															{	/* Inline/loop.scm 129 */
																int BgL_arg2645z00_2129;

																BgL_arg2645z00_2129 = (int) (((long) 16));
																{	/* Inline/loop.scm 129 */
																	long BgL_auxz00_4652;

																	BgL_auxz00_4652 =
																		(long) (BgL_arg2645z00_2129);
																	BgL_modz00_2128 =
																		(BgL_offsetz00_2127 / BgL_auxz00_4652);
															}}
															{	/* Inline/loop.scm 129 */
																long BgL_restz00_2130;

																{	/* Inline/loop.scm 129 */
																	int BgL_arg2644z00_2131;

																	BgL_arg2644z00_2131 = (int) (((long) 16));
																	{	/* Inline/loop.scm 129 */
																		long BgL_auxz00_4656;

																		BgL_auxz00_4656 =
																			(long) (BgL_arg2644z00_2131);
																		BgL_restz00_2130 =
																			(BgL_offsetz00_2127 % BgL_auxz00_4656);
																}}
																{	/* Inline/loop.scm 129 */

																	BgL_method3435z00_2120 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2125,
																			(int) (BgL_modz00_2128)),
																		(int) (BgL_restz00_2130));
									}}}}}}}}
									return
										PROCEDURE_ENTRY(BgL_method3435z00_2120)
										(BgL_method3435z00_2120, (obj_t) (BgL_arg3607z00_1363),
										BEOA);
								}
							}
						else
							{	/* Inline/loop.scm 130 */
								bool_t BgL_testz00_4666;

								{	/* Inline/loop.scm 130 */
									obj_t BgL_arg3610z00_1366;

									BgL_arg3610z00_1366 = CDR(CAR(BgL_clausesz00_1360));
									{	/* Inline/loop.scm 130 */
										BgL_nodez00_bglt BgL_nodez00_2147;

										BgL_nodez00_2147 = (BgL_nodez00_bglt) (BgL_arg3610z00_1366);
										{	/* Inline/loop.scm 130 */
											obj_t BgL_method3435z00_2148;

											{	/* Inline/loop.scm 130 */
												BgL_objectz00_bglt BgL_objz00_2149;

												BgL_objz00_2149 =
													(BgL_objectz00_bglt) (BgL_nodez00_2147);
												{	/* Inline/loop.scm 130 */
													long BgL_objzd2classzd2numz00_2150;

													BgL_objzd2classzd2numz00_2150 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2149);
													{	/* Inline/loop.scm 130 */
														obj_t BgL_arg2643z00_2151;

														BgL_arg2643z00_2151 =
															PROCEDURE_REF
															(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
															(int) (((long) 1)));
														{	/* Inline/loop.scm 130 */
															obj_t BgL_arrayz00_2153;

															int BgL_offsetz00_2154;

															BgL_arrayz00_2153 = BgL_arg2643z00_2151;
															BgL_offsetz00_2154 =
																(int) (BgL_objzd2classzd2numz00_2150);
															{	/* Inline/loop.scm 130 */
																long BgL_offsetz00_2155;

																BgL_offsetz00_2155 =
																	((long) (BgL_offsetz00_2154) - OBJECT_TYPE);
																{	/* Inline/loop.scm 130 */
																	long BgL_modz00_2156;

																	{	/* Inline/loop.scm 130 */
																		int BgL_arg2645z00_2157;

																		BgL_arg2645z00_2157 = (int) (((long) 16));
																		{	/* Inline/loop.scm 130 */
																			long BgL_auxz00_4678;

																			BgL_auxz00_4678 =
																				(long) (BgL_arg2645z00_2157);
																			BgL_modz00_2156 =
																				(BgL_offsetz00_2155 / BgL_auxz00_4678);
																	}}
																	{	/* Inline/loop.scm 130 */
																		long BgL_restz00_2158;

																		{	/* Inline/loop.scm 130 */
																			int BgL_arg2644z00_2159;

																			BgL_arg2644z00_2159 = (int) (((long) 16));
																			{	/* Inline/loop.scm 130 */
																				long BgL_auxz00_4682;

																				BgL_auxz00_4682 =
																					(long) (BgL_arg2644z00_2159);
																				BgL_restz00_2158 =
																					(BgL_offsetz00_2155 %
																					BgL_auxz00_4682);
																		}}
																		{	/* Inline/loop.scm 130 */

																			BgL_method3435z00_2148 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2153,
																					(int) (BgL_modz00_2156)),
																				(int) (BgL_restz00_2158));
											}}}}}}}}
											BgL_testz00_4666 =
												CBOOL(PROCEDURE_ENTRY(BgL_method3435z00_2148)
												(BgL_method3435z00_2148, (obj_t) (BgL_nodez00_2147),
													BEOA));
								}}}
								if (BgL_testz00_4666)
									{	/* Inline/loop.scm 130 */
										return BTRUE;
									}
								else
									{
										obj_t BgL_clausesz00_4693;

										BgL_clausesz00_4693 = CDR(BgL_clausesz00_1360);
										BgL_clausesz00_1360 = BgL_clausesz00_4693;
										goto BgL_zc3anonymousza33605ze3z83_1361;
									}
							}
					}
				}
			}
		}
	}



/* find-let-fun?-fail3453 */
	obj_t BGl_findzd2letzd2funzf3zd2fail3453z21zzinline_loopz00(obj_t
		BgL_envz00_3372, obj_t BgL_nodez00_3373)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 116 */
			{
				BgL_failz00_bglt BgL_nodez00_1344;

				BgL_nodez00_1344 = (BgL_failz00_bglt) (BgL_nodez00_3373);
				{	/* Inline/loop.scm 118 */
					obj_t BgL__ortest_3387z00_1348;

					{	/* Inline/loop.scm 118 */
						BgL_nodez00_bglt BgL_arg3603z00_1352;

						BgL_arg3603z00_1352 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_1344))->BgL_procz00);
						{	/* Inline/loop.scm 118 */
							obj_t BgL_method3435z00_2037;

							{	/* Inline/loop.scm 118 */
								BgL_objectz00_bglt BgL_objz00_2038;

								BgL_objz00_2038 = (BgL_objectz00_bglt) (BgL_arg3603z00_1352);
								{	/* Inline/loop.scm 118 */
									long BgL_objzd2classzd2numz00_2039;

									BgL_objzd2classzd2numz00_2039 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2038);
									{	/* Inline/loop.scm 118 */
										obj_t BgL_arg2643z00_2040;

										BgL_arg2643z00_2040 =
											PROCEDURE_REF
											(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
											(int) (((long) 1)));
										{	/* Inline/loop.scm 118 */
											obj_t BgL_arrayz00_2042;

											int BgL_offsetz00_2043;

											BgL_arrayz00_2042 = BgL_arg2643z00_2040;
											BgL_offsetz00_2043 =
												(int) (BgL_objzd2classzd2numz00_2039);
											{	/* Inline/loop.scm 118 */
												long BgL_offsetz00_2044;

												BgL_offsetz00_2044 =
													((long) (BgL_offsetz00_2043) - OBJECT_TYPE);
												{	/* Inline/loop.scm 118 */
													long BgL_modz00_2045;

													{	/* Inline/loop.scm 118 */
														int BgL_arg2645z00_2046;

														BgL_arg2645z00_2046 = (int) (((long) 16));
														{	/* Inline/loop.scm 118 */
															long BgL_auxz00_4705;

															BgL_auxz00_4705 = (long) (BgL_arg2645z00_2046);
															BgL_modz00_2045 =
																(BgL_offsetz00_2044 / BgL_auxz00_4705);
													}}
													{	/* Inline/loop.scm 118 */
														long BgL_restz00_2047;

														{	/* Inline/loop.scm 118 */
															int BgL_arg2644z00_2048;

															BgL_arg2644z00_2048 = (int) (((long) 16));
															{	/* Inline/loop.scm 118 */
																long BgL_auxz00_4709;

																BgL_auxz00_4709 = (long) (BgL_arg2644z00_2048);
																BgL_restz00_2047 =
																	(BgL_offsetz00_2044 % BgL_auxz00_4709);
														}}
														{	/* Inline/loop.scm 118 */

															BgL_method3435z00_2037 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2042,
																	(int) (BgL_modz00_2045)),
																(int) (BgL_restz00_2047));
							}}}}}}}}
							BgL__ortest_3387z00_1348 =
								PROCEDURE_ENTRY(BgL_method3435z00_2037) (BgL_method3435z00_2037,
								(obj_t) (BgL_arg3603z00_1352), BEOA);
					}}
					if (CBOOL(BgL__ortest_3387z00_1348))
						{	/* Inline/loop.scm 118 */
							return BgL__ortest_3387z00_1348;
						}
					else
						{	/* Inline/loop.scm 119 */
							obj_t BgL__ortest_3388z00_1349;

							{	/* Inline/loop.scm 119 */
								BgL_nodez00_bglt BgL_arg3602z00_1351;

								BgL_arg3602z00_1351 =
									(((BgL_failz00_bglt) CREF(BgL_nodez00_1344))->BgL_msgz00);
								{	/* Inline/loop.scm 119 */
									obj_t BgL_method3435z00_2064;

									{	/* Inline/loop.scm 119 */
										BgL_objectz00_bglt BgL_objz00_2065;

										BgL_objz00_2065 =
											(BgL_objectz00_bglt) (BgL_arg3602z00_1351);
										{	/* Inline/loop.scm 119 */
											long BgL_objzd2classzd2numz00_2066;

											BgL_objzd2classzd2numz00_2066 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2065);
											{	/* Inline/loop.scm 119 */
												obj_t BgL_arg2643z00_2067;

												BgL_arg2643z00_2067 =
													PROCEDURE_REF
													(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
													(int) (((long) 1)));
												{	/* Inline/loop.scm 119 */
													obj_t BgL_arrayz00_2069;

													int BgL_offsetz00_2070;

													BgL_arrayz00_2069 = BgL_arg2643z00_2067;
													BgL_offsetz00_2070 =
														(int) (BgL_objzd2classzd2numz00_2066);
													{	/* Inline/loop.scm 119 */
														long BgL_offsetz00_2071;

														BgL_offsetz00_2071 =
															((long) (BgL_offsetz00_2070) - OBJECT_TYPE);
														{	/* Inline/loop.scm 119 */
															long BgL_modz00_2072;

															{	/* Inline/loop.scm 119 */
																int BgL_arg2645z00_2073;

																BgL_arg2645z00_2073 = (int) (((long) 16));
																{	/* Inline/loop.scm 119 */
																	long BgL_auxz00_4730;

																	BgL_auxz00_4730 =
																		(long) (BgL_arg2645z00_2073);
																	BgL_modz00_2072 =
																		(BgL_offsetz00_2071 / BgL_auxz00_4730);
															}}
															{	/* Inline/loop.scm 119 */
																long BgL_restz00_2074;

																{	/* Inline/loop.scm 119 */
																	int BgL_arg2644z00_2075;

																	BgL_arg2644z00_2075 = (int) (((long) 16));
																	{	/* Inline/loop.scm 119 */
																		long BgL_auxz00_4734;

																		BgL_auxz00_4734 =
																			(long) (BgL_arg2644z00_2075);
																		BgL_restz00_2074 =
																			(BgL_offsetz00_2071 % BgL_auxz00_4734);
																}}
																{	/* Inline/loop.scm 119 */

																	BgL_method3435z00_2064 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2069,
																			(int) (BgL_modz00_2072)),
																		(int) (BgL_restz00_2074));
									}}}}}}}}
									BgL__ortest_3388z00_1349 =
										PROCEDURE_ENTRY(BgL_method3435z00_2064)
										(BgL_method3435z00_2064, (obj_t) (BgL_arg3602z00_1351),
										BEOA);
							}}
							if (CBOOL(BgL__ortest_3388z00_1349))
								{	/* Inline/loop.scm 119 */
									return BgL__ortest_3388z00_1349;
								}
							else
								{	/* Inline/loop.scm 120 */
									BgL_nodez00_bglt BgL_arg3601z00_1350;

									BgL_arg3601z00_1350 =
										(((BgL_failz00_bglt) CREF(BgL_nodez00_1344))->BgL_objz00);
									{	/* Inline/loop.scm 120 */
										obj_t BgL_method3435z00_2091;

										{	/* Inline/loop.scm 120 */
											BgL_objectz00_bglt BgL_objz00_2092;

											BgL_objz00_2092 =
												(BgL_objectz00_bglt) (BgL_arg3601z00_1350);
											{	/* Inline/loop.scm 120 */
												long BgL_objzd2classzd2numz00_2093;

												BgL_objzd2classzd2numz00_2093 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2092);
												{	/* Inline/loop.scm 120 */
													obj_t BgL_arg2643z00_2094;

													BgL_arg2643z00_2094 =
														PROCEDURE_REF
														(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 120 */
														obj_t BgL_arrayz00_2096;

														int BgL_offsetz00_2097;

														BgL_arrayz00_2096 = BgL_arg2643z00_2094;
														BgL_offsetz00_2097 =
															(int) (BgL_objzd2classzd2numz00_2093);
														{	/* Inline/loop.scm 120 */
															long BgL_offsetz00_2098;

															BgL_offsetz00_2098 =
																((long) (BgL_offsetz00_2097) - OBJECT_TYPE);
															{	/* Inline/loop.scm 120 */
																long BgL_modz00_2099;

																{	/* Inline/loop.scm 120 */
																	int BgL_arg2645z00_2100;

																	BgL_arg2645z00_2100 = (int) (((long) 16));
																	{	/* Inline/loop.scm 120 */
																		long BgL_auxz00_4755;

																		BgL_auxz00_4755 =
																			(long) (BgL_arg2645z00_2100);
																		BgL_modz00_2099 =
																			(BgL_offsetz00_2098 / BgL_auxz00_4755);
																}}
																{	/* Inline/loop.scm 120 */
																	long BgL_restz00_2101;

																	{	/* Inline/loop.scm 120 */
																		int BgL_arg2644z00_2102;

																		BgL_arg2644z00_2102 = (int) (((long) 16));
																		{	/* Inline/loop.scm 120 */
																			long BgL_auxz00_4759;

																			BgL_auxz00_4759 =
																				(long) (BgL_arg2644z00_2102);
																			BgL_restz00_2101 =
																				(BgL_offsetz00_2098 % BgL_auxz00_4759);
																	}}
																	{	/* Inline/loop.scm 120 */

																		BgL_method3435z00_2091 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2096,
																				(int) (BgL_modz00_2099)),
																			(int) (BgL_restz00_2101));
										}}}}}}}}
										return
											PROCEDURE_ENTRY(BgL_method3435z00_2091)
											(BgL_method3435z00_2091, (obj_t) (BgL_arg3601z00_1350),
											BEOA);
									}
								}
						}
				}
			}
		}
	}



/* find-let-fun?-condit3451 */
	obj_t BGl_findzd2letzd2funzf3zd2condit3451z21zzinline_loopz00(obj_t
		BgL_envz00_3374, obj_t BgL_nodez00_3375)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 107 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1333;

				BgL_nodez00_1333 = (BgL_conditionalz00_bglt) (BgL_nodez00_3375);
				{	/* Inline/loop.scm 109 */
					obj_t BgL__ortest_3383z00_1337;

					{	/* Inline/loop.scm 109 */
						BgL_nodez00_bglt BgL_arg3599z00_1341;

						BgL_arg3599z00_1341 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1333))->BgL_testz00);
						{	/* Inline/loop.scm 109 */
							obj_t BgL_method3435z00_1956;

							{	/* Inline/loop.scm 109 */
								BgL_objectz00_bglt BgL_objz00_1957;

								BgL_objz00_1957 = (BgL_objectz00_bglt) (BgL_arg3599z00_1341);
								{	/* Inline/loop.scm 109 */
									long BgL_objzd2classzd2numz00_1958;

									BgL_objzd2classzd2numz00_1958 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1957);
									{	/* Inline/loop.scm 109 */
										obj_t BgL_arg2643z00_1959;

										BgL_arg2643z00_1959 =
											PROCEDURE_REF
											(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
											(int) (((long) 1)));
										{	/* Inline/loop.scm 109 */
											obj_t BgL_arrayz00_1961;

											int BgL_offsetz00_1962;

											BgL_arrayz00_1961 = BgL_arg2643z00_1959;
											BgL_offsetz00_1962 =
												(int) (BgL_objzd2classzd2numz00_1958);
											{	/* Inline/loop.scm 109 */
												long BgL_offsetz00_1963;

												BgL_offsetz00_1963 =
													((long) (BgL_offsetz00_1962) - OBJECT_TYPE);
												{	/* Inline/loop.scm 109 */
													long BgL_modz00_1964;

													{	/* Inline/loop.scm 109 */
														int BgL_arg2645z00_1965;

														BgL_arg2645z00_1965 = (int) (((long) 16));
														{	/* Inline/loop.scm 109 */
															long BgL_auxz00_4779;

															BgL_auxz00_4779 = (long) (BgL_arg2645z00_1965);
															BgL_modz00_1964 =
																(BgL_offsetz00_1963 / BgL_auxz00_4779);
													}}
													{	/* Inline/loop.scm 109 */
														long BgL_restz00_1966;

														{	/* Inline/loop.scm 109 */
															int BgL_arg2644z00_1967;

															BgL_arg2644z00_1967 = (int) (((long) 16));
															{	/* Inline/loop.scm 109 */
																long BgL_auxz00_4783;

																BgL_auxz00_4783 = (long) (BgL_arg2644z00_1967);
																BgL_restz00_1966 =
																	(BgL_offsetz00_1963 % BgL_auxz00_4783);
														}}
														{	/* Inline/loop.scm 109 */

															BgL_method3435z00_1956 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1961,
																	(int) (BgL_modz00_1964)),
																(int) (BgL_restz00_1966));
							}}}}}}}}
							BgL__ortest_3383z00_1337 =
								PROCEDURE_ENTRY(BgL_method3435z00_1956) (BgL_method3435z00_1956,
								(obj_t) (BgL_arg3599z00_1341), BEOA);
					}}
					if (CBOOL(BgL__ortest_3383z00_1337))
						{	/* Inline/loop.scm 109 */
							return BgL__ortest_3383z00_1337;
						}
					else
						{	/* Inline/loop.scm 110 */
							obj_t BgL__ortest_3384z00_1338;

							{	/* Inline/loop.scm 110 */
								BgL_nodez00_bglt BgL_arg3598z00_1340;

								BgL_arg3598z00_1340 =
									(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1333))->
									BgL_truez00);
								{	/* Inline/loop.scm 110 */
									obj_t BgL_method3435z00_1983;

									{	/* Inline/loop.scm 110 */
										BgL_objectz00_bglt BgL_objz00_1984;

										BgL_objz00_1984 =
											(BgL_objectz00_bglt) (BgL_arg3598z00_1340);
										{	/* Inline/loop.scm 110 */
											long BgL_objzd2classzd2numz00_1985;

											BgL_objzd2classzd2numz00_1985 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1984);
											{	/* Inline/loop.scm 110 */
												obj_t BgL_arg2643z00_1986;

												BgL_arg2643z00_1986 =
													PROCEDURE_REF
													(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
													(int) (((long) 1)));
												{	/* Inline/loop.scm 110 */
													obj_t BgL_arrayz00_1988;

													int BgL_offsetz00_1989;

													BgL_arrayz00_1988 = BgL_arg2643z00_1986;
													BgL_offsetz00_1989 =
														(int) (BgL_objzd2classzd2numz00_1985);
													{	/* Inline/loop.scm 110 */
														long BgL_offsetz00_1990;

														BgL_offsetz00_1990 =
															((long) (BgL_offsetz00_1989) - OBJECT_TYPE);
														{	/* Inline/loop.scm 110 */
															long BgL_modz00_1991;

															{	/* Inline/loop.scm 110 */
																int BgL_arg2645z00_1992;

																BgL_arg2645z00_1992 = (int) (((long) 16));
																{	/* Inline/loop.scm 110 */
																	long BgL_auxz00_4804;

																	BgL_auxz00_4804 =
																		(long) (BgL_arg2645z00_1992);
																	BgL_modz00_1991 =
																		(BgL_offsetz00_1990 / BgL_auxz00_4804);
															}}
															{	/* Inline/loop.scm 110 */
																long BgL_restz00_1993;

																{	/* Inline/loop.scm 110 */
																	int BgL_arg2644z00_1994;

																	BgL_arg2644z00_1994 = (int) (((long) 16));
																	{	/* Inline/loop.scm 110 */
																		long BgL_auxz00_4808;

																		BgL_auxz00_4808 =
																			(long) (BgL_arg2644z00_1994);
																		BgL_restz00_1993 =
																			(BgL_offsetz00_1990 % BgL_auxz00_4808);
																}}
																{	/* Inline/loop.scm 110 */

																	BgL_method3435z00_1983 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1988,
																			(int) (BgL_modz00_1991)),
																		(int) (BgL_restz00_1993));
									}}}}}}}}
									BgL__ortest_3384z00_1338 =
										PROCEDURE_ENTRY(BgL_method3435z00_1983)
										(BgL_method3435z00_1983, (obj_t) (BgL_arg3598z00_1340),
										BEOA);
							}}
							if (CBOOL(BgL__ortest_3384z00_1338))
								{	/* Inline/loop.scm 110 */
									return BgL__ortest_3384z00_1338;
								}
							else
								{	/* Inline/loop.scm 111 */
									BgL_nodez00_bglt BgL_arg3597z00_1339;

									BgL_arg3597z00_1339 =
										(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1333))->
										BgL_falsez00);
									{	/* Inline/loop.scm 111 */
										obj_t BgL_method3435z00_2010;

										{	/* Inline/loop.scm 111 */
											BgL_objectz00_bglt BgL_objz00_2011;

											BgL_objz00_2011 =
												(BgL_objectz00_bglt) (BgL_arg3597z00_1339);
											{	/* Inline/loop.scm 111 */
												long BgL_objzd2classzd2numz00_2012;

												BgL_objzd2classzd2numz00_2012 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2011);
												{	/* Inline/loop.scm 111 */
													obj_t BgL_arg2643z00_2013;

													BgL_arg2643z00_2013 =
														PROCEDURE_REF
														(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
														(int) (((long) 1)));
													{	/* Inline/loop.scm 111 */
														obj_t BgL_arrayz00_2015;

														int BgL_offsetz00_2016;

														BgL_arrayz00_2015 = BgL_arg2643z00_2013;
														BgL_offsetz00_2016 =
															(int) (BgL_objzd2classzd2numz00_2012);
														{	/* Inline/loop.scm 111 */
															long BgL_offsetz00_2017;

															BgL_offsetz00_2017 =
																((long) (BgL_offsetz00_2016) - OBJECT_TYPE);
															{	/* Inline/loop.scm 111 */
																long BgL_modz00_2018;

																{	/* Inline/loop.scm 111 */
																	int BgL_arg2645z00_2019;

																	BgL_arg2645z00_2019 = (int) (((long) 16));
																	{	/* Inline/loop.scm 111 */
																		long BgL_auxz00_4829;

																		BgL_auxz00_4829 =
																			(long) (BgL_arg2645z00_2019);
																		BgL_modz00_2018 =
																			(BgL_offsetz00_2017 / BgL_auxz00_4829);
																}}
																{	/* Inline/loop.scm 111 */
																	long BgL_restz00_2020;

																	{	/* Inline/loop.scm 111 */
																		int BgL_arg2644z00_2021;

																		BgL_arg2644z00_2021 = (int) (((long) 16));
																		{	/* Inline/loop.scm 111 */
																			long BgL_auxz00_4833;

																			BgL_auxz00_4833 =
																				(long) (BgL_arg2644z00_2021);
																			BgL_restz00_2020 =
																				(BgL_offsetz00_2017 % BgL_auxz00_4833);
																	}}
																	{	/* Inline/loop.scm 111 */

																		BgL_method3435z00_2010 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2015,
																				(int) (BgL_modz00_2018)),
																			(int) (BgL_restz00_2020));
										}}}}}}}}
										return
											PROCEDURE_ENTRY(BgL_method3435z00_2010)
											(BgL_method3435z00_2010, (obj_t) (BgL_arg3597z00_1339),
											BEOA);
									}
								}
						}
				}
			}
		}
	}



/* find-let-fun?-setq3449 */
	obj_t BGl_findzd2letzd2funzf3zd2setq3449z21zzinline_loopz00(obj_t
		BgL_envz00_3376, obj_t BgL_nodez00_3377)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 101 */
			{
				BgL_setqz00_bglt BgL_nodez00_1327;

				BgL_nodez00_1327 = (BgL_setqz00_bglt) (BgL_nodez00_3377);
				{	/* Inline/loop.scm 102 */
					BgL_nodez00_bglt BgL_arg3595z00_1926;

					BgL_arg3595z00_1926 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1327))->BgL_valuez00);
					{	/* Inline/loop.scm 102 */
						obj_t BgL_method3435z00_1929;

						{	/* Inline/loop.scm 102 */
							BgL_objectz00_bglt BgL_objz00_1930;

							BgL_objz00_1930 = (BgL_objectz00_bglt) (BgL_arg3595z00_1926);
							{	/* Inline/loop.scm 102 */
								long BgL_objzd2classzd2numz00_1931;

								BgL_objzd2classzd2numz00_1931 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1930);
								{	/* Inline/loop.scm 102 */
									obj_t BgL_arg2643z00_1932;

									BgL_arg2643z00_1932 =
										PROCEDURE_REF
										(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
										(int) (((long) 1)));
									{	/* Inline/loop.scm 102 */
										obj_t BgL_arrayz00_1934;

										int BgL_offsetz00_1935;

										BgL_arrayz00_1934 = BgL_arg2643z00_1932;
										BgL_offsetz00_1935 = (int) (BgL_objzd2classzd2numz00_1931);
										{	/* Inline/loop.scm 102 */
											long BgL_offsetz00_1936;

											BgL_offsetz00_1936 =
												((long) (BgL_offsetz00_1935) - OBJECT_TYPE);
											{	/* Inline/loop.scm 102 */
												long BgL_modz00_1937;

												{	/* Inline/loop.scm 102 */
													int BgL_arg2645z00_1938;

													BgL_arg2645z00_1938 = (int) (((long) 16));
													{	/* Inline/loop.scm 102 */
														long BgL_auxz00_4853;

														BgL_auxz00_4853 = (long) (BgL_arg2645z00_1938);
														BgL_modz00_1937 =
															(BgL_offsetz00_1936 / BgL_auxz00_4853);
												}}
												{	/* Inline/loop.scm 102 */
													long BgL_restz00_1939;

													{	/* Inline/loop.scm 102 */
														int BgL_arg2644z00_1940;

														BgL_arg2644z00_1940 = (int) (((long) 16));
														{	/* Inline/loop.scm 102 */
															long BgL_auxz00_4857;

															BgL_auxz00_4857 = (long) (BgL_arg2644z00_1940);
															BgL_restz00_1939 =
																(BgL_offsetz00_1936 % BgL_auxz00_4857);
													}}
													{	/* Inline/loop.scm 102 */

														BgL_method3435z00_1929 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1934,
																(int) (BgL_modz00_1937)),
															(int) (BgL_restz00_1939));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3435z00_1929) (BgL_method3435z00_1929,
							(obj_t) (BgL_arg3595z00_1926), BEOA);
					}
				}
			}
		}
	}



/* find-let-fun?-cast3447 */
	obj_t BGl_findzd2letzd2funzf3zd2cast3447z21zzinline_loopz00(obj_t
		BgL_envz00_3378, obj_t BgL_nodez00_3379)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 95 */
			{
				BgL_castz00_bglt BgL_nodez00_1321;

				BgL_nodez00_1321 = (BgL_castz00_bglt) (BgL_nodez00_3379);
				{	/* Inline/loop.scm 96 */
					BgL_nodez00_bglt BgL_arg3593z00_1898;

					BgL_arg3593z00_1898 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_1321))->BgL_argz00);
					{	/* Inline/loop.scm 96 */
						obj_t BgL_method3435z00_1901;

						{	/* Inline/loop.scm 96 */
							BgL_objectz00_bglt BgL_objz00_1902;

							BgL_objz00_1902 = (BgL_objectz00_bglt) (BgL_arg3593z00_1898);
							{	/* Inline/loop.scm 96 */
								long BgL_objzd2classzd2numz00_1903;

								BgL_objzd2classzd2numz00_1903 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1902);
								{	/* Inline/loop.scm 96 */
									obj_t BgL_arg2643z00_1904;

									BgL_arg2643z00_1904 =
										PROCEDURE_REF
										(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
										(int) (((long) 1)));
									{	/* Inline/loop.scm 96 */
										obj_t BgL_arrayz00_1906;

										int BgL_offsetz00_1907;

										BgL_arrayz00_1906 = BgL_arg2643z00_1904;
										BgL_offsetz00_1907 = (int) (BgL_objzd2classzd2numz00_1903);
										{	/* Inline/loop.scm 96 */
											long BgL_offsetz00_1908;

											BgL_offsetz00_1908 =
												((long) (BgL_offsetz00_1907) - OBJECT_TYPE);
											{	/* Inline/loop.scm 96 */
												long BgL_modz00_1909;

												{	/* Inline/loop.scm 96 */
													int BgL_arg2645z00_1910;

													BgL_arg2645z00_1910 = (int) (((long) 16));
													{	/* Inline/loop.scm 96 */
														long BgL_auxz00_4877;

														BgL_auxz00_4877 = (long) (BgL_arg2645z00_1910);
														BgL_modz00_1909 =
															(BgL_offsetz00_1908 / BgL_auxz00_4877);
												}}
												{	/* Inline/loop.scm 96 */
													long BgL_restz00_1911;

													{	/* Inline/loop.scm 96 */
														int BgL_arg2644z00_1912;

														BgL_arg2644z00_1912 = (int) (((long) 16));
														{	/* Inline/loop.scm 96 */
															long BgL_auxz00_4881;

															BgL_auxz00_4881 = (long) (BgL_arg2644z00_1912);
															BgL_restz00_1911 =
																(BgL_offsetz00_1908 % BgL_auxz00_4881);
													}}
													{	/* Inline/loop.scm 96 */

														BgL_method3435z00_1901 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1906,
																(int) (BgL_modz00_1909)),
															(int) (BgL_restz00_1911));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3435z00_1901) (BgL_method3435z00_1901,
							(obj_t) (BgL_arg3593z00_1898), BEOA);
					}
				}
			}
		}
	}



/* find-let-fun?-extern3445 */
	obj_t BGl_findzd2letzd2funzf3zd2extern3445z21zzinline_loopz00(obj_t
		BgL_envz00_3380, obj_t BgL_nodez00_3381)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 89 */
			{
				BgL_externz00_bglt BgL_nodez00_1315;

				{	/* Inline/loop.scm 90 */
					bool_t BgL_auxz00_4892;

					BgL_nodez00_1315 = (BgL_externz00_bglt) (BgL_nodez00_3381);
					{	/* Inline/loop.scm 90 */
						obj_t BgL_arg3591z00_1896;

						BgL_arg3591z00_1896 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1315))->BgL_exprza2za2);
						BgL_auxz00_4892 =
							BGl_findzd2letzd2funzf3za2z51zzinline_loopz00
							(BgL_arg3591z00_1896);
					}
					return BBOOL(BgL_auxz00_4892);
				}
			}
		}
	}



/* find-let-fun?-funcal3443 */
	obj_t BGl_findzd2letzd2funzf3zd2funcal3443z21zzinline_loopz00(obj_t
		BgL_envz00_3382, obj_t BgL_nodez00_3383)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 81 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1306;

				BgL_nodez00_1306 = (BgL_funcallz00_bglt) (BgL_nodez00_3383);
				{	/* Inline/loop.scm 83 */
					obj_t BgL__ortest_3380z00_1310;

					{	/* Inline/loop.scm 83 */
						BgL_nodez00_bglt BgL_arg3589z00_1312;

						BgL_arg3589z00_1312 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1306))->BgL_funz00);
						{	/* Inline/loop.scm 83 */
							obj_t BgL_method3435z00_1870;

							{	/* Inline/loop.scm 83 */
								BgL_objectz00_bglt BgL_objz00_1871;

								BgL_objz00_1871 = (BgL_objectz00_bglt) (BgL_arg3589z00_1312);
								{	/* Inline/loop.scm 83 */
									long BgL_objzd2classzd2numz00_1872;

									BgL_objzd2classzd2numz00_1872 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1871);
									{	/* Inline/loop.scm 83 */
										obj_t BgL_arg2643z00_1873;

										BgL_arg2643z00_1873 =
											PROCEDURE_REF
											(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
											(int) (((long) 1)));
										{	/* Inline/loop.scm 83 */
											obj_t BgL_arrayz00_1875;

											int BgL_offsetz00_1876;

											BgL_arrayz00_1875 = BgL_arg2643z00_1873;
											BgL_offsetz00_1876 =
												(int) (BgL_objzd2classzd2numz00_1872);
											{	/* Inline/loop.scm 83 */
												long BgL_offsetz00_1877;

												BgL_offsetz00_1877 =
													((long) (BgL_offsetz00_1876) - OBJECT_TYPE);
												{	/* Inline/loop.scm 83 */
													long BgL_modz00_1878;

													{	/* Inline/loop.scm 83 */
														int BgL_arg2645z00_1879;

														BgL_arg2645z00_1879 = (int) (((long) 16));
														{	/* Inline/loop.scm 83 */
															long BgL_auxz00_4906;

															BgL_auxz00_4906 = (long) (BgL_arg2645z00_1879);
															BgL_modz00_1878 =
																(BgL_offsetz00_1877 / BgL_auxz00_4906);
													}}
													{	/* Inline/loop.scm 83 */
														long BgL_restz00_1880;

														{	/* Inline/loop.scm 83 */
															int BgL_arg2644z00_1881;

															BgL_arg2644z00_1881 = (int) (((long) 16));
															{	/* Inline/loop.scm 83 */
																long BgL_auxz00_4910;

																BgL_auxz00_4910 = (long) (BgL_arg2644z00_1881);
																BgL_restz00_1880 =
																	(BgL_offsetz00_1877 % BgL_auxz00_4910);
														}}
														{	/* Inline/loop.scm 83 */

															BgL_method3435z00_1870 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1875,
																	(int) (BgL_modz00_1878)),
																(int) (BgL_restz00_1880));
							}}}}}}}}
							BgL__ortest_3380z00_1310 =
								PROCEDURE_ENTRY(BgL_method3435z00_1870) (BgL_method3435z00_1870,
								(obj_t) (BgL_arg3589z00_1312), BEOA);
					}}
					if (CBOOL(BgL__ortest_3380z00_1310))
						{	/* Inline/loop.scm 83 */
							return BgL__ortest_3380z00_1310;
						}
					else
						{	/* Inline/loop.scm 84 */
							obj_t BgL_arg3588z00_1311;

							BgL_arg3588z00_1311 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1306))->BgL_argsz00);
							return
								BBOOL(BGl_findzd2letzd2funzf3za2z51zzinline_loopz00
								(BgL_arg3588z00_1311));
						}
				}
			}
		}
	}



/* find-let-fun?-app-ly3441 */
	obj_t BGl_findzd2letzd2funzf3zd2appzd2ly3441zf3zzinline_loopz00(obj_t
		BgL_envz00_3384, obj_t BgL_nodez00_3385)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 74 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1297;

				BgL_nodez00_1297 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_3385);
				{	/* Inline/loop.scm 76 */
					obj_t BgL__ortest_3377z00_1301;

					{	/* Inline/loop.scm 76 */
						BgL_nodez00_bglt BgL_arg3586z00_1303;

						BgL_arg3586z00_1303 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1297))->BgL_funz00);
						{	/* Inline/loop.scm 76 */
							obj_t BgL_method3435z00_1816;

							{	/* Inline/loop.scm 76 */
								BgL_objectz00_bglt BgL_objz00_1817;

								BgL_objz00_1817 = (BgL_objectz00_bglt) (BgL_arg3586z00_1303);
								{	/* Inline/loop.scm 76 */
									long BgL_objzd2classzd2numz00_1818;

									BgL_objzd2classzd2numz00_1818 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1817);
									{	/* Inline/loop.scm 76 */
										obj_t BgL_arg2643z00_1819;

										BgL_arg2643z00_1819 =
											PROCEDURE_REF
											(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
											(int) (((long) 1)));
										{	/* Inline/loop.scm 76 */
											obj_t BgL_arrayz00_1821;

											int BgL_offsetz00_1822;

											BgL_arrayz00_1821 = BgL_arg2643z00_1819;
											BgL_offsetz00_1822 =
												(int) (BgL_objzd2classzd2numz00_1818);
											{	/* Inline/loop.scm 76 */
												long BgL_offsetz00_1823;

												BgL_offsetz00_1823 =
													((long) (BgL_offsetz00_1822) - OBJECT_TYPE);
												{	/* Inline/loop.scm 76 */
													long BgL_modz00_1824;

													{	/* Inline/loop.scm 76 */
														int BgL_arg2645z00_1825;

														BgL_arg2645z00_1825 = (int) (((long) 16));
														{	/* Inline/loop.scm 76 */
															long BgL_auxz00_4935;

															BgL_auxz00_4935 = (long) (BgL_arg2645z00_1825);
															BgL_modz00_1824 =
																(BgL_offsetz00_1823 / BgL_auxz00_4935);
													}}
													{	/* Inline/loop.scm 76 */
														long BgL_restz00_1826;

														{	/* Inline/loop.scm 76 */
															int BgL_arg2644z00_1827;

															BgL_arg2644z00_1827 = (int) (((long) 16));
															{	/* Inline/loop.scm 76 */
																long BgL_auxz00_4939;

																BgL_auxz00_4939 = (long) (BgL_arg2644z00_1827);
																BgL_restz00_1826 =
																	(BgL_offsetz00_1823 % BgL_auxz00_4939);
														}}
														{	/* Inline/loop.scm 76 */

															BgL_method3435z00_1816 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1821,
																	(int) (BgL_modz00_1824)),
																(int) (BgL_restz00_1826));
							}}}}}}}}
							BgL__ortest_3377z00_1301 =
								PROCEDURE_ENTRY(BgL_method3435z00_1816) (BgL_method3435z00_1816,
								(obj_t) (BgL_arg3586z00_1303), BEOA);
					}}
					if (CBOOL(BgL__ortest_3377z00_1301))
						{	/* Inline/loop.scm 76 */
							return BgL__ortest_3377z00_1301;
						}
					else
						{	/* Inline/loop.scm 76 */
							BgL_nodez00_bglt BgL_arg3585z00_1302;

							BgL_arg3585z00_1302 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1297))->BgL_argz00);
							{	/* Inline/loop.scm 76 */
								obj_t BgL_method3435z00_1843;

								{	/* Inline/loop.scm 76 */
									BgL_objectz00_bglt BgL_objz00_1844;

									BgL_objz00_1844 = (BgL_objectz00_bglt) (BgL_arg3585z00_1302);
									{	/* Inline/loop.scm 76 */
										long BgL_objzd2classzd2numz00_1845;

										BgL_objzd2classzd2numz00_1845 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1844);
										{	/* Inline/loop.scm 76 */
											obj_t BgL_arg2643z00_1846;

											BgL_arg2643z00_1846 =
												PROCEDURE_REF
												(BGl_findzd2letzd2funzf3zd2envz21zzinline_loopz00,
												(int) (((long) 1)));
											{	/* Inline/loop.scm 76 */
												obj_t BgL_arrayz00_1848;

												int BgL_offsetz00_1849;

												BgL_arrayz00_1848 = BgL_arg2643z00_1846;
												BgL_offsetz00_1849 =
													(int) (BgL_objzd2classzd2numz00_1845);
												{	/* Inline/loop.scm 76 */
													long BgL_offsetz00_1850;

													BgL_offsetz00_1850 =
														((long) (BgL_offsetz00_1849) - OBJECT_TYPE);
													{	/* Inline/loop.scm 76 */
														long BgL_modz00_1851;

														{	/* Inline/loop.scm 76 */
															int BgL_arg2645z00_1852;

															BgL_arg2645z00_1852 = (int) (((long) 16));
															{	/* Inline/loop.scm 76 */
																long BgL_auxz00_4960;

																BgL_auxz00_4960 = (long) (BgL_arg2645z00_1852);
																BgL_modz00_1851 =
																	(BgL_offsetz00_1850 / BgL_auxz00_4960);
														}}
														{	/* Inline/loop.scm 76 */
															long BgL_restz00_1853;

															{	/* Inline/loop.scm 76 */
																int BgL_arg2644z00_1854;

																BgL_arg2644z00_1854 = (int) (((long) 16));
																{	/* Inline/loop.scm 76 */
																	long BgL_auxz00_4964;

																	BgL_auxz00_4964 =
																		(long) (BgL_arg2644z00_1854);
																	BgL_restz00_1853 =
																		(BgL_offsetz00_1850 % BgL_auxz00_4964);
															}}
															{	/* Inline/loop.scm 76 */

																BgL_method3435z00_1843 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1848,
																		(int) (BgL_modz00_1851)),
																	(int) (BgL_restz00_1853));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method3435z00_1843)
									(BgL_method3435z00_1843, (obj_t) (BgL_arg3585z00_1302), BEOA);
							}
						}
				}
			}
		}
	}



/* find-let-fun?-app3439 */
	obj_t BGl_findzd2letzd2funzf3zd2app3439z21zzinline_loopz00(obj_t
		BgL_envz00_3386, obj_t BgL_nodez00_3387)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 67 */
			{
				BgL_appz00_bglt BgL_nodez00_1290;

				{	/* Inline/loop.scm 68 */
					bool_t BgL_auxz00_4975;

					BgL_nodez00_1290 = (BgL_appz00_bglt) (BgL_nodez00_3387);
					{	/* Inline/loop.scm 68 */
						obj_t BgL_arg3583z00_1812;

						BgL_arg3583z00_1812 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1290))->BgL_argsz00);
						BgL_auxz00_4975 =
							BGl_findzd2letzd2funzf3za2z51zzinline_loopz00
							(BgL_arg3583z00_1812);
					}
					return BBOOL(BgL_auxz00_4975);
				}
			}
		}
	}



/* find-let-fun?-sequen3437 */
	obj_t BGl_findzd2letzd2funzf3zd2sequen3437z21zzinline_loopz00(obj_t
		BgL_envz00_3388, obj_t BgL_nodez00_3389)
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 61 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1284;

				{	/* Inline/loop.scm 62 */
					bool_t BgL_auxz00_4980;

					BgL_nodez00_1284 = (BgL_sequencez00_bglt) (BgL_nodez00_3389);
					{	/* Inline/loop.scm 62 */
						obj_t BgL_arg3581z00_1809;

						BgL_arg3581z00_1809 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1284))->BgL_nodesz00);
						BgL_auxz00_4980 =
							BGl_findzd2letzd2funzf3za2z51zzinline_loopz00
							(BgL_arg3581z00_1809);
					}
					return BBOOL(BgL_auxz00_4980);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinline_loopz00()
	{
		AN_OBJECT;
		{	/* Inline/loop.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3887z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3887z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3887z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3887z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3887z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3887z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3887z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3887z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3887z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3887z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zzinline_inlinez00(((long) 326457085),
				BSTRING_TO_STRING(BGl_string3887z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zzinline_variantz00(((long) 432906461),
				BSTRING_TO_STRING(BGl_string3887z00zzinline_loopz00));
			BGl_modulezd2initializa7ationz75zzinline_recursionz00(((long) 405725008),
				BSTRING_TO_STRING(BGl_string3887z00zzinline_loopz00));
			return
				BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 470955713),
				BSTRING_TO_STRING(BGl_string3887z00zzinline_loopz00));
		}
	}

#ifdef __cplusplus
}
#endif
