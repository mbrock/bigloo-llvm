/*===========================================================================*/
/*   (Inline/inline.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Inline/inline.scm)*/
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


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_isfunz00_bglt
		BGl_makezd2isfunzd2zzinline_inlinez00(long, obj_t, obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, BgL_nodez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	BGL_EXPORTED_DECL BgL_isfunz00_bglt BGl_isfunzd2nilzd2zzinline_inlinez00();
	static obj_t BGl_inlinezd2nodezd2atom3363z00zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_inlinezd2nodezd2letzd2fun3390zd2zzinline_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl__isfunzf3zf3zzinline_inlinez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_inlinezd2nodezd2letzd2var3392zd2zzinline_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_nodezd2nilzd2zzast_nodez00();
	static obj_t BGl__inlinezd2sfunz12zc0zzinline_inlinez00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzinline_inlinez00();
	BGL_EXPORTED_DECL BgL_sfunz00_bglt
		BGl_z52allocatezd2isfunz80zzinline_inlinez00();
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_isfunz00_bglt
		BGl_wideningzd2isfunzd2zzinline_inlinez00(BgL_nodez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzinline_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_alphatiza7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzinline_inlinez00();
	BGL_IMPORT long bgl_list_length(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_isfunzf3zf3zzinline_inlinez00(obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl__isfunzd2nilzd2zzinline_inlinez00(obj_t);
	static obj_t BGl_inlinezd2nodezd2cast3380z00zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern BgL_nodez00_bglt BGl_alphatiza7eza7zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t, BgL_nodez00_bglt);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl__makezd2isfunzd2zzinline_inlinez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__inlinezd2nodezd2default3359z00zzinline_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_inlinezd2nodezd2setzd2exzd2i3394z00zzinline_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	extern BgL_sfunz00_bglt BGl_makezd2sfunzd2zzast_varz00(long, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_inlinezd2nodezd2sequence3370z00zzinline_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_inlinezd2nodezd2zzinline_inlinez00(BgL_nodez00_bglt, long, obj_t);
	static obj_t BGl_inlinezd2nodezd2setq3382z00zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2isfun3404ze3zzinline_inlinez00(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_inlinezd2nodezd2default3359z00zzinline_inlinez00(BgL_nodez00_bglt, long,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzinline_inlinez00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_inlinezd2nodezd2boxzd2setz123402zc0zzinline_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_inlinezd2nodezd2extern3378z00zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_inlinezd2nodezd2appzd2ly3374zd2zzinline_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_inlinezd2nodezd2conditio3384z00zzinline_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_za2nonzd2inlinedzd2callsza2z00zzinline_walkz00;
	static obj_t BGl__inlinezd2nodeza2z12z62zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzinline_inlinez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzinline_inlinez00();
	static obj_t BGl_inlinezd2nodezd2app3372z00zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_isfunz00_bglt
		BGl_fillzd2isfunz12zc0zzinline_inlinez00(BgL_isfunz00_bglt,
		BgL_nodez00_bglt, obj_t);
	static obj_t BGl_inlinezd2nodezd2funcall3376z00zzinline_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__wideningzd2isfunzd2zzinline_inlinez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_EXPORTED_DECL obj_t BGl_inlinezd2nodeza2z12z62zzinline_inlinez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__inlinezd2nodezd2zzinline_inlinez00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_inlinezd2nodezd2jumpzd2exzd23396z00zzinline_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzinline_inlinez00();
	static obj_t BGl_inlinezd2nodezd2fail3386z00zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inlinezd2sfunz12zc0zzinline_inlinez00(BgL_variablez00_bglt, long,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl__fillzd2isfunz12zc0zzinline_inlinez00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern BgL_nodez00_bglt BGl_inlinezd2appzd2zzinline_appz00(BgL_appz00_bglt,
		long, obj_t);
	static obj_t BGl_inlinezd2nodezd2makezd2box3398zd2zzinline_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2isfunz80zzinline_inlinez00(obj_t);
	static obj_t BGl_inlinezd2nodezd2select3388z00zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_inlinezd2nodezd2boxzd2ref3400zd2zzinline_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_inlinezd2nodezd2var3365z00zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	static obj_t BGl_inlinezd2nodezd2kwote3367z00zzinline_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2kfactorza2z00zzinline_walkz00;
	extern bool_t BGl_inlinezd2appzf3z21zzinline_appz00(BgL_variablez00_bglt,
		long, long, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_isfunz00zzinline_inlinez00 = BUNSPEC;
	static obj_t BGl_z52thezd2isfunzd2nilz52zzinline_inlinez00 = BUNSPEC;
	static obj_t BGl_objectzd2initzd2zzinline_inlinez00();
	static obj_t BGl__sfunzf3zf3zzinline_inlinez00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzinline_inlinez00();
	static obj_t BGl_structzb2objectzd2ze3objec3406z83zzinline_inlinez00(obj_t,
		obj_t, obj_t);
	static obj_t __cnst[5];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_isfunzf3zd2envz21zzinline_inlinez00,
		BgL_bgl__isfunza7f3za7f3za7za7in3718z00, BGl__isfunzf3zf3zzinline_inlinez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_sfunzf3zd2envz21zzinline_inlinez00,
		BgL_bgl__sfunza7f3za7f3za7za7inl3719z00, BGl__sfunzf3zf3zzinline_inlinez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
		BgL_bgl__inlineza7d2nodeza7d3720z00,
		BGl__inlinezd2nodezd2zzinline_inlinez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inlinezd2nodeza2z12zd2envzb0zzinline_inlinez00,
		BgL_bgl__inlineza7d2nodeza7a3721z00,
		BGl__inlinezd2nodeza2z12z62zzinline_inlinez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_inlinezd2sfunz12zd2envz12zzinline_inlinez00,
		BgL_bgl__inlineza7d2sfunza713722z00,
		BGl__inlinezd2sfunz12zc0zzinline_inlinez00, 0L, BUNSPEC, 3);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_wideningzd2isfunzd2envz00zzinline_inlinez00,
		BgL_bgl__wideningza7d2isfu3723za7,
		BGl__wideningzd2isfunzd2zzinline_inlinez00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_inlinezd2nodezd2default3359zd2envzd2zzinline_inlinez00,
		BgL_bgl__inlineza7d2nodeza7d3724z00,
		BGl__inlinezd2nodezd2default3359z00zzinline_inlinez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2isfunzd2envz52zzinline_inlinez00,
		BgL_bgl__za752allocateza7d2i3725z00,
		BGl__z52allocatezd2isfunz80zzinline_inlinez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_isfunzd2nilzd2envz00zzinline_inlinez00,
		BgL_bgl__isfunza7d2nilza7d2za73726za7,
		BGl__isfunzd2nilzd2zzinline_inlinez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2isfunz12zd2envz12zzinline_inlinez00,
		BgL_bgl__fillza7d2isfunza7123727z00,
		BGl__fillzd2isfunz12zc0zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2isfunzd2envz00zzinline_inlinez00,
		BgL_bgl__makeza7d2isfunza7d23728z00, BGl__makezd2isfunzd2zzinline_inlinez00,
		0L, BUNSPEC, 19);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3688z00zzinline_inlinez00,
		BgL_bgl_inlineza7d2nodeza7d23729z00,
		BGl_inlinezd2nodezd2atom3363z00zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3700z00zzinline_inlinez00,
		BgL_bgl_inlineza7d2nodeza7d23730z00,
		BGl_inlinezd2nodezd2select3388z00zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3690z00zzinline_inlinez00,
		BgL_bgl_inlineza7d2nodeza7d23731z00,
		BGl_inlinezd2nodezd2kwote3367z00zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3689z00zzinline_inlinez00,
		BgL_bgl_inlineza7d2nodeza7d23732z00,
		BGl_inlinezd2nodezd2var3365z00zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3701z00zzinline_inlinez00,
		BgL_bgl_inlineza7d2nodeza7d23733z00,
		BGl_inlinezd2nodezd2letzd2fun3390zd2zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3691z00zzinline_inlinez00,
		BgL_bgl_inlineza7d2nodeza7d23734z00,
		BGl_inlinezd2nodezd2sequence3370z00zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3702z00zzinline_inlinez00,
		BgL_bgl_inlineza7d2nodeza7d23735z00,
		BGl_inlinezd2nodezd2letzd2var3392zd2zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3692z00zzinline_inlinez00,
		BgL_bgl_inlineza7d2nodeza7d23736z00,
		BGl_inlinezd2nodezd2app3372z00zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3703z00zzinline_inlinez00,
		BgL_bgl_inlineza7d2nodeza7d23737z00,
		BGl_inlinezd2nodezd2setzd2exzd2i3394z00zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3693z00zzinline_inlinez00,
		BgL_bgl_inlineza7d2nodeza7d23738z00,
		BGl_inlinezd2nodezd2appzd2ly3374zd2zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3704z00zzinline_inlinez00,
		BgL_bgl_inlineza7d2nodeza7d23739z00,
		BGl_inlinezd2nodezd2jumpzd2exzd23396z00zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3694z00zzinline_inlinez00,
		BgL_bgl_inlineza7d2nodeza7d23740z00,
		BGl_inlinezd2nodezd2funcall3376z00zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3705z00zzinline_inlinez00,
		BgL_bgl_inlineza7d2nodeza7d23741z00,
		BGl_inlinezd2nodezd2makezd2box3398zd2zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3695z00zzinline_inlinez00,
		BgL_bgl_inlineza7d2nodeza7d23742z00,
		BGl_inlinezd2nodezd2extern3378z00zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3706z00zzinline_inlinez00,
		BgL_bgl_inlineza7d2nodeza7d23743z00,
		BGl_inlinezd2nodezd2boxzd2ref3400zd2zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3696z00zzinline_inlinez00,
		BgL_bgl_inlineza7d2nodeza7d23744z00,
		BGl_inlinezd2nodezd2cast3380z00zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3707z00zzinline_inlinez00,
		BgL_bgl_inlineza7d2nodeza7d23745z00,
		BGl_inlinezd2nodezd2boxzd2setz123402zc0zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3697z00zzinline_inlinez00,
		BgL_bgl_inlineza7d2nodeza7d23746z00,
		BGl_inlinezd2nodezd2setq3382z00zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3708z00zzinline_inlinez00,
		BgL_bgl_objectza7d2za7e3stru3747z00,
		BGl_objectzd2ze3structzd2isfun3404ze3zzinline_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3698z00zzinline_inlinez00,
		BgL_bgl_inlineza7d2nodeza7d23748z00,
		BGl_inlinezd2nodezd2conditio3384z00zzinline_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3710z00zzinline_inlinez00,
		BgL_bgl_structza7b2objectza73749z00,
		BGl_structzb2objectzd2ze3objec3406z83zzinline_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3699z00zzinline_inlinez00,
		BgL_bgl_inlineza7d2nodeza7d23750z00,
		BGl_inlinezd2nodezd2fail3386z00zzinline_inlinez00, 0L, BUNSPEC, 3);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_STRING(BGl_string3686z00zzinline_inlinez00,
		BgL_bgl_string3686za700za7za7i3751za7, "inline-node", 11);
	      DEFINE_STRING(BGl_string3687z00zzinline_inlinez00,
		BgL_bgl_string3687za700za7za7i3752za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3709z00zzinline_inlinez00,
		BgL_bgl_string3709za700za7za7i3753za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string3711z00zzinline_inlinez00,
		BgL_bgl_string3711za700za7za7i3754za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string3712z00zzinline_inlinez00,
		BgL_bgl_string3712za700za7za7i3755za7, "inline_inline", 13);
	      DEFINE_STRING(BGl_string3713z00zzinline_inlinez00,
		BgL_bgl_string3713za700za7za7i3756za7,
		"read static inline-node-default3359 isfun done ", 47);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzinline_inlinez00(long
		BgL_checksumz00_2774, char *BgL_fromz00_2775)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinline_inlinez00))
				{
					BGl_requirezd2initializa7ationz75zzinline_inlinez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzinline_inlinez00();
					BGl_cnstzd2initzd2zzinline_inlinez00();
					BGl_importedzd2moduleszd2initz00zzinline_inlinez00();
					BGl_objectzd2initzd2zzinline_inlinez00();
					BGl_genericzd2initzd2zzinline_inlinez00();
					BGl_methodzd2initzd2zzinline_inlinez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinline_inlinez00()
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"inline_inline");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"inline_inline");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "inline_inline");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"inline_inline");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinline_inlinez00()
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 15 */
			{	/* Inline/inline.scm 15 */
				obj_t BgL_cportz00_2745;

				BgL_cportz00_2745 =
					bgl_open_input_string(BGl_string3713z00zzinline_inlinez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2746;

					BgL_iz00_2746 = ((long) 4);
				BgL_loopz00_2747:
					if ((BgL_iz00_2746 == ((long) -1)))
						{	/* Inline/inline.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Inline/inline.scm 15 */
							{	/* Inline/inline.scm 15 */
								obj_t BgL_arg3715z00_2749;

								{	/* Inline/inline.scm 15 */

									{	/* Inline/inline.scm 15 */
										obj_t BgL_locationz00_2751;

										BgL_locationz00_2751 = BBOOL(((bool_t) 0));
										{	/* Inline/inline.scm 15 */

											BgL_arg3715z00_2749 =
												BGl_readz00zz__readerz00(BgL_cportz00_2745,
												BgL_locationz00_2751);
										}
									}
								}
								{	/* Inline/inline.scm 15 */
									int BgL_auxz00_2795;

									BgL_auxz00_2795 = (int) (BgL_iz00_2746);
									CNST_TABLE_SET(BgL_auxz00_2795, BgL_arg3715z00_2749);
							}}
							{	/* Inline/inline.scm 15 */
								int BgL_auxz00_2752;

								BgL_auxz00_2752 = (int) ((BgL_iz00_2746 - ((long) 1)));
								{
									long BgL_iz00_2800;

									BgL_iz00_2800 = (long) (BgL_auxz00_2752);
									BgL_iz00_2746 = BgL_iz00_2800;
									goto BgL_loopz00_2747;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzinline_inlinez00()
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 15 */
			return BUNSPEC;
		}
	}



/* inline-sfun! */
	BGL_EXPORTED_DEF obj_t
		BGl_inlinezd2sfunz12zc0zzinline_inlinez00(BgL_variablez00_bglt
		BgL_variablez00_1, long BgL_kfactorz00_2, obj_t BgL_stackz00_3)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 34 */
			{	/* Inline/inline.scm 37 */
				BgL_valuez00_bglt BgL_sfunz00_877;

				BgL_sfunz00_877 =
					(((BgL_variablez00_bglt) CREF(BgL_variablez00_1))->BgL_valuez00);
				{	/* Inline/inline.scm 37 */
					obj_t BgL_isfunz00_878;

					if (BGl_iszd2azf3z21zz__objectz00
						(BGl_sfunzf3zd2envz21zzinline_inlinez00,
							BGl_isfunz00zzinline_inlinez00))
						{	/* Inline/inline.scm 38 */
							BgL_isfunz00_878 = (obj_t) (BgL_sfunz00_877);
						}
					else
						{	/* Inline/inline.scm 40 */
							BgL_sfunz00_bglt BgL_obj3336z00_890;

							BgL_obj3336z00_890 =
								((BgL_sfunz00_bglt) (BgL_sfunz00_bglt) (BgL_sfunz00_877));
							{	/* Inline/inline.scm 40 */
								BgL_isfunz00_bglt BgL_arg3416z00_891;

								{	/* Inline/inline.scm 40 */
									obj_t BgL_arg3417z00_892;

									{
										BgL_sfunz00_bglt BgL_auxz00_2808;

										BgL_auxz00_2808 = (BgL_sfunz00_bglt) (BgL_sfunz00_877);
										BgL_arg3417z00_892 =
											(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2808))->BgL_bodyz00);
									}
									{	/* Inline/inline.scm 40 */
										BgL_isfunz00_bglt BgL_res3595z00_1566;

										{	/* Inline/inline.scm 40 */
											BgL_nodez00_bglt BgL_originalzd2body3242zd2_1557;

											BgL_originalzd2body3242zd2_1557 =
												(BgL_nodez00_bglt) (BgL_arg3417z00_892);
											{	/* Inline/inline.scm 40 */
												BgL_isfunz00_bglt BgL_new3244z00_1559;

												BgL_new3244z00_1559 =
													((BgL_isfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
																BgL_isfunz00_bgl))));
												{	/* Inline/inline.scm 40 */
													BgL_isfunz00_bglt BgL_res3594z00_1565;

													{	/* Inline/inline.scm 40 */
														BgL_isfunz00_bglt BgL_new3269z00_1560;

														BgL_new3269z00_1560 = BgL_new3244z00_1559;
														{	/* Inline/inline.scm 40 */
															BgL_nodez00_bglt BgL_originalzd2body3267zd2_1563;

															obj_t BgL_recursivezd2calls3268zd2_1564;

															BgL_originalzd2body3267zd2_1563 =
																BgL_originalzd2body3242zd2_1557;
															BgL_recursivezd2calls3268zd2_1564 = BUNSPEC;
															((((BgL_isfunz00_bglt)
																		CREF(BgL_new3269z00_1560))->
																	BgL_originalzd2bodyzd2) =
																((BgL_nodez00_bglt)
																	BgL_originalzd2body3267zd2_1563), BUNSPEC);
															((((BgL_isfunz00_bglt)
																		CREF(BgL_new3269z00_1560))->
																	BgL_recursivezd2callszd2) =
																((obj_t) BgL_recursivezd2calls3268zd2_1564),
																BUNSPEC);
															BgL_res3594z00_1565 = BgL_new3269z00_1560;
													}} BgL_res3594z00_1565;
												}
												BgL_res3595z00_1566 = BgL_new3244z00_1559;
										}}
										BgL_arg3416z00_891 = BgL_res3595z00_1566;
								}}
								{	/* Inline/inline.scm 40 */
									obj_t BgL_auxz00_2817;

									BgL_objectz00_bglt BgL_auxz00_2815;

									BgL_auxz00_2817 = (obj_t) (BgL_arg3416z00_891);
									BgL_auxz00_2815 = (BgL_objectz00_bglt) (BgL_obj3336z00_890);
									BGL_OBJECT_WIDENING_SET(BgL_auxz00_2815, BgL_auxz00_2817);
							}}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_obj3336z00_890),
								BGl_classzd2numzd2zz__objectz00
								(BGl_isfunz00zzinline_inlinez00));
							BgL_isfunz00_878 = (obj_t) (BgL_obj3336z00_890);
						}
					{	/* Inline/inline.scm 38 */
						BgL_nodez00_bglt BgL_ozd2bodyzd2_879;

						{	/* Inline/inline.scm 41 */
							BgL_isfunz00_bglt BgL_obj3281z00_1569;

							BgL_obj3281z00_1569 = (BgL_isfunz00_bglt) (BgL_isfunz00_878);
							{
								obj_t BgL_auxz00_2825;

								{	/* Inline/inline.scm 41 */
									BgL_objectz00_bglt BgL_auxz00_2826;

									BgL_auxz00_2826 = (BgL_objectz00_bglt) (BgL_obj3281z00_1569);
									BgL_auxz00_2825 = BGL_OBJECT_WIDENING(BgL_auxz00_2826);
								}
								BgL_ozd2bodyzd2_879 =
									(((BgL_isfunz00_bglt) CREF(BgL_auxz00_2825))->
									BgL_originalzd2bodyzd2);
						}}
						{	/* Inline/inline.scm 41 */
							BgL_nodez00_bglt BgL_inlzd2bodyzd2_880;

							{	/* Inline/inline.scm 42 */
								bool_t BgL_testz00_2830;

								{	/* Inline/inline.scm 44 */
									long BgL_arg3410z00_884;

									{	/* Inline/inline.scm 44 */
										long BgL_auxz00_2831;

										{	/* Inline/inline.scm 44 */
											obj_t BgL_auxz00_2832;

											{
												BgL_sfunz00_bglt BgL_auxz00_2833;

												BgL_auxz00_2833 = (BgL_sfunz00_bglt) (BgL_sfunz00_877);
												BgL_auxz00_2832 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2833))->
													BgL_argsz00);
											}
											BgL_auxz00_2831 = bgl_list_length(BgL_auxz00_2832);
										}
										BgL_arg3410z00_884 = (((long) 1) + BgL_auxz00_2831);
									}
									BgL_testz00_2830 =
										BGl_inlinezd2appzf3z21zzinline_appz00(BgL_variablez00_1,
										(long) CINT(BGl_za2kfactorza2z00zzinline_walkz00),
										BgL_arg3410z00_884, BNIL);
								}
								if (BgL_testz00_2830)
									{	/* Inline/inline.scm 42 */
										BgL_inlzd2bodyzd2_880 =
											BGl_alphatiza7eza7zzast_alphatiza7eza7(BNIL, BNIL, BFALSE,
											BgL_ozd2bodyzd2_879);
									}
								else
									{	/* Inline/inline.scm 42 */
										BgL_inlzd2bodyzd2_880 = BgL_ozd2bodyzd2_879;
									}
							}
							{	/* Inline/inline.scm 42 */

								{	/* Inline/inline.scm 55 */
									BgL_nodez00_bglt BgL_arg3407z00_881;

									{	/* Inline/inline.scm 55 */
										obj_t BgL_arg3408z00_882;

										BgL_arg3408z00_882 =
											MAKE_PAIR((obj_t) (BgL_variablez00_1), BgL_stackz00_3);
										{	/* Inline/inline.scm 53 */
											BgL_nodez00_bglt BgL_res3598z00_1601;

											{	/* Inline/inline.scm 53 */
												obj_t BgL_method3361z00_1576;

												{	/* Inline/inline.scm 53 */
													BgL_objectz00_bglt BgL_objz00_1577;

													BgL_objz00_1577 =
														(BgL_objectz00_bglt) (BgL_inlzd2bodyzd2_880);
													{	/* Inline/inline.scm 53 */
														long BgL_objzd2classzd2numz00_1578;

														BgL_objzd2classzd2numz00_1578 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1577);
														{	/* Inline/inline.scm 53 */
															obj_t BgL_arg2643z00_1579;

															BgL_arg2643z00_1579 =
																PROCEDURE_REF
																(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
																(int) (((long) 1)));
															{	/* Inline/inline.scm 53 */
																obj_t BgL_arrayz00_1581;

																int BgL_offsetz00_1582;

																BgL_arrayz00_1581 = BgL_arg2643z00_1579;
																BgL_offsetz00_1582 =
																	(int) (BgL_objzd2classzd2numz00_1578);
																{	/* Inline/inline.scm 53 */
																	long BgL_offsetz00_1583;

																	BgL_offsetz00_1583 =
																		((long) (BgL_offsetz00_1582) - OBJECT_TYPE);
																	{	/* Inline/inline.scm 53 */
																		long BgL_modz00_1584;

																		{	/* Inline/inline.scm 53 */
																			int BgL_arg2645z00_1585;

																			BgL_arg2645z00_1585 = (int) (((long) 16));
																			{	/* Inline/inline.scm 53 */
																				long BgL_auxz00_2851;

																				BgL_auxz00_2851 =
																					(long) (BgL_arg2645z00_1585);
																				BgL_modz00_1584 =
																					(BgL_offsetz00_1583 /
																					BgL_auxz00_2851);
																		}}
																		{	/* Inline/inline.scm 53 */
																			long BgL_restz00_1586;

																			{	/* Inline/inline.scm 53 */
																				int BgL_arg2644z00_1587;

																				BgL_arg2644z00_1587 =
																					(int) (((long) 16));
																				{	/* Inline/inline.scm 53 */
																					long BgL_auxz00_2855;

																					BgL_auxz00_2855 =
																						(long) (BgL_arg2644z00_1587);
																					BgL_restz00_1586 =
																						(BgL_offsetz00_1583 %
																						BgL_auxz00_2855);
																			}}
																			{	/* Inline/inline.scm 53 */

																				BgL_method3361z00_1576 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1581,
																						(int) (BgL_modz00_1584)),
																					(int) (BgL_restz00_1586));
												}}}}}}}}
												BgL_res3598z00_1601 =
													(BgL_nodez00_bglt) (PROCEDURE_ENTRY
													(BgL_method3361z00_1576) (BgL_method3361z00_1576,
														(obj_t) (BgL_inlzd2bodyzd2_880),
														BINT(BgL_kfactorz00_2), BgL_arg3408z00_882, BEOA));
											}
											BgL_arg3407z00_881 = BgL_res3598z00_1601;
									}}
									{
										obj_t BgL_auxz00_2869;

										BgL_sfunz00_bglt BgL_auxz00_2867;

										BgL_auxz00_2869 = (obj_t) (BgL_arg3407z00_881);
										BgL_auxz00_2867 = (BgL_sfunz00_bglt) (BgL_sfunz00_877);
										((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2867))->BgL_bodyz00) =
											((obj_t) BgL_auxz00_2869), BUNSPEC);
								}}
								return BNIL;
							}
						}
					}
				}
			}
		}
	}



/* _inline-sfun! */
	obj_t BGl__inlinezd2sfunz12zc0zzinline_inlinez00(obj_t BgL_envz00_2584,
		obj_t BgL_variablez00_2585, obj_t BgL_kfactorz00_2586,
		obj_t BgL_stackz00_2587)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 34 */
			return
				BGl_inlinezd2sfunz12zc0zzinline_inlinez00(
				(BgL_variablez00_bglt) (BgL_variablez00_2585),
				(long) CINT(BgL_kfactorz00_2586), BgL_stackz00_2587);
		}
	}



/* inline-node*! */
	BGL_EXPORTED_DEF obj_t BGl_inlinezd2nodeza2z12z62zzinline_inlinez00(obj_t
		BgL_nodeza2za2_70, obj_t BgL_kfactorz00_71, obj_t BgL_stackz00_72)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 238 */
		BGl_inlinezd2nodeza2z12z62zzinline_inlinez00:
			if (NULLP(BgL_nodeza2za2_70))
				{	/* Inline/inline.scm 239 */
					return CNST_TABLE_REF(((long) 0));
				}
			else
				{	/* Inline/inline.scm 239 */
					{	/* Inline/inline.scm 242 */
						BgL_nodez00_bglt BgL_arg3420z00_895;

						{	/* Inline/inline.scm 242 */
							obj_t BgL_arg3421z00_896;

							BgL_arg3421z00_896 = CAR(BgL_nodeza2za2_70);
							{	/* Inline/inline.scm 242 */
								BgL_nodez00_bglt BgL_res3601z00_1634;

								{	/* Inline/inline.scm 242 */
									BgL_nodez00_bglt BgL_nodez00_1606;

									long BgL_kfactorz00_1607;

									BgL_nodez00_1606 = (BgL_nodez00_bglt) (BgL_arg3421z00_896);
									BgL_kfactorz00_1607 = (long) CINT(BgL_kfactorz00_71);
									{	/* Inline/inline.scm 242 */
										obj_t BgL_method3361z00_1609;

										{	/* Inline/inline.scm 242 */
											BgL_objectz00_bglt BgL_objz00_1610;

											BgL_objz00_1610 = (BgL_objectz00_bglt) (BgL_nodez00_1606);
											{	/* Inline/inline.scm 242 */
												long BgL_objzd2classzd2numz00_1611;

												BgL_objzd2classzd2numz00_1611 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1610);
												{	/* Inline/inline.scm 242 */
													obj_t BgL_arg2643z00_1612;

													BgL_arg2643z00_1612 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 242 */
														obj_t BgL_arrayz00_1614;

														int BgL_offsetz00_1615;

														BgL_arrayz00_1614 = BgL_arg2643z00_1612;
														BgL_offsetz00_1615 =
															(int) (BgL_objzd2classzd2numz00_1611);
														{	/* Inline/inline.scm 242 */
															long BgL_offsetz00_1616;

															BgL_offsetz00_1616 =
																((long) (BgL_offsetz00_1615) - OBJECT_TYPE);
															{	/* Inline/inline.scm 242 */
																long BgL_modz00_1617;

																{	/* Inline/inline.scm 242 */
																	int BgL_arg2645z00_1618;

																	BgL_arg2645z00_1618 = (int) (((long) 16));
																	{	/* Inline/inline.scm 242 */
																		long BgL_auxz00_2889;

																		BgL_auxz00_2889 =
																			(long) (BgL_arg2645z00_1618);
																		BgL_modz00_1617 =
																			(BgL_offsetz00_1616 / BgL_auxz00_2889);
																}}
																{	/* Inline/inline.scm 242 */
																	long BgL_restz00_1619;

																	{	/* Inline/inline.scm 242 */
																		int BgL_arg2644z00_1620;

																		BgL_arg2644z00_1620 = (int) (((long) 16));
																		{	/* Inline/inline.scm 242 */
																			long BgL_auxz00_2893;

																			BgL_auxz00_2893 =
																				(long) (BgL_arg2644z00_1620);
																			BgL_restz00_1619 =
																				(BgL_offsetz00_1616 % BgL_auxz00_2893);
																	}}
																	{	/* Inline/inline.scm 242 */

																		BgL_method3361z00_1609 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1614,
																				(int) (BgL_modz00_1617)),
																			(int) (BgL_restz00_1619));
										}}}}}}}}
										BgL_res3601z00_1634 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_1609) (BgL_method3361z00_1609,
												(obj_t) (BgL_nodez00_1606), BINT(BgL_kfactorz00_1607),
												BgL_stackz00_72, BEOA));
								}}
								BgL_arg3420z00_895 = BgL_res3601z00_1634;
						}}
						{	/* Inline/inline.scm 242 */
							obj_t BgL_auxz00_2905;

							BgL_auxz00_2905 = (obj_t) (BgL_arg3420z00_895);
							SET_CAR(BgL_nodeza2za2_70, BgL_auxz00_2905);
					}}
					{
						obj_t BgL_nodeza2za2_2908;

						BgL_nodeza2za2_2908 = CDR(BgL_nodeza2za2_70);
						BgL_nodeza2za2_70 = BgL_nodeza2za2_2908;
						goto BGl_inlinezd2nodeza2z12z62zzinline_inlinez00;
					}
				}
		}
	}



/* _inline-node*! */
	obj_t BGl__inlinezd2nodeza2z12z62zzinline_inlinez00(obj_t BgL_envz00_2594,
		obj_t BgL_nodeza2za2_2595, obj_t BgL_kfactorz00_2596,
		obj_t BgL_stackz00_2597)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 238 */
			return
				BGl_inlinezd2nodeza2z12z62zzinline_inlinez00(BgL_nodeza2za2_2595,
				BgL_kfactorz00_2596, BgL_stackz00_2597);
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzinline_inlinez00()
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 15 */
			{	/* Inline/inline.scm 25 */
				obj_t BgL_arg3424z00_898;

				obj_t BgL_arg3425z00_899;

				obj_t BgL_arg3430z00_902;

				BgL_arg3424z00_898 = CNST_TABLE_REF(((long) 1));
				BgL_arg3425z00_899 = BGl_sfunz00zzast_varz00;
				{	/* Inline/inline.scm 25 */
					obj_t BgL_v3358z00_903;

					BgL_v3358z00_903 = create_vector((int) (((long) 0)));
					BgL_arg3430z00_902 = BgL_v3358z00_903;
				}
				BGl_isfunz00zzinline_inlinez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3424z00_898,
					BgL_arg3425z00_899, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2isfunzd2envz52zzinline_inlinez00,
					BGl_isfunzd2nilzd2envz00zzinline_inlinez00,
					BGl_isfunzf3zd2envz21zzinline_inlinez00, ((long) 461696808), BFALSE,
					BFALSE, BgL_arg3430z00_902);
			}
			return (BGl_z52thezd2isfunzd2nilz52zzinline_inlinez00 = BUNSPEC, BUNSPEC);
		}
	}



/* isfun? */
	BGL_EXPORTED_DEF bool_t BGl_isfunzf3zf3zzinline_inlinez00(obj_t
		BgL_obj3280z00_73)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 25 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3280z00_73,
				BGl_isfunz00zzinline_inlinez00);
		}
	}



/* _isfun? */
	obj_t BGl__isfunzf3zf3zzinline_inlinez00(obj_t BgL_envz00_2600,
		obj_t BgL_obj3280z00_2601)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 25 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3280z00_2601,
					BGl_isfunz00zzinline_inlinez00));
		}
	}



/* widening-isfun */
	BGL_EXPORTED_DEF BgL_isfunz00_bglt
		BGl_wideningzd2isfunzd2zzinline_inlinez00(BgL_nodez00_bglt
		BgL_originalzd2body3242zd2_77, obj_t BgL_recursivezd2calls3243zd2_78)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 25 */
			{	/* Inline/inline.scm 25 */
				BgL_isfunz00_bglt BgL_new3244z00_1638;

				BgL_new3244z00_1638 =
					((BgL_isfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_isfunz00_bgl))));
				{	/* Inline/inline.scm 25 */
					BgL_isfunz00_bglt BgL_res3602z00_1644;

					{	/* Inline/inline.scm 25 */
						BgL_isfunz00_bglt BgL_new3269z00_1639;

						BgL_new3269z00_1639 = BgL_new3244z00_1638;
						{	/* Inline/inline.scm 25 */
							BgL_nodez00_bglt BgL_originalzd2body3267zd2_1642;

							obj_t BgL_recursivezd2calls3268zd2_1643;

							BgL_originalzd2body3267zd2_1642 = BgL_originalzd2body3242zd2_77;
							BgL_recursivezd2calls3268zd2_1643 =
								BgL_recursivezd2calls3243zd2_78;
							((((BgL_isfunz00_bglt) CREF(BgL_new3269z00_1639))->
									BgL_originalzd2bodyzd2) =
								((BgL_nodez00_bglt) BgL_originalzd2body3267zd2_1642), BUNSPEC);
							((((BgL_isfunz00_bglt) CREF(BgL_new3269z00_1639))->
									BgL_recursivezd2callszd2) =
								((obj_t) BgL_recursivezd2calls3268zd2_1643), BUNSPEC);
							BgL_res3602z00_1644 = BgL_new3269z00_1639;
					}} BgL_res3602z00_1644;
				}
				return BgL_new3244z00_1638;
			}
		}
	}



/* _widening-isfun */
	obj_t BGl__wideningzd2isfunzd2zzinline_inlinez00(obj_t BgL_envz00_2602,
		obj_t BgL_originalzd2body3242zd2_2603,
		obj_t BgL_recursivezd2calls3243zd2_2604)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 25 */
			return
				(obj_t) (BGl_wideningzd2isfunzd2zzinline_inlinez00(
					(BgL_nodez00_bglt) (BgL_originalzd2body3242zd2_2603),
					BgL_recursivezd2calls3243zd2_2604));
		}
	}



/* make-isfun */
	BGL_EXPORTED_DEF BgL_isfunz00_bglt BGl_makezd2isfunzd2zzinline_inlinez00(long
		BgL_arity3248z00_79, obj_t BgL_sidezd2effectzf33249z21_80,
		obj_t BgL_predicatezd2of3250zd2_81, obj_t BgL_stackzd2allocator3251zd2_82,
		bool_t BgL_topzf33252zf3_83, obj_t BgL_thezd2closure3253zd2_84,
		obj_t BgL_effect3254z00_85, obj_t BgL_property3255z00_86,
		obj_t BgL_args3256z00_87, obj_t BgL_argszd2name3257zd2_88,
		obj_t BgL_body3258z00_89, obj_t BgL_class3259z00_90,
		obj_t BgL_dssslzd2keywords3260zd2_91, obj_t BgL_loc3261z00_92,
		obj_t BgL_optionals3262z00_93, obj_t BgL_keys3263z00_94,
		obj_t BgL_thezd2closurezd2global3264z00_95,
		BgL_nodez00_bglt BgL_originalzd2body3246zd2_96,
		obj_t BgL_recursivezd2calls3247zd2_97)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 25 */
			{	/* Inline/inline.scm 25 */
				BgL_sfunz00_bglt BgL_aux3265z00_1645;

				BgL_aux3265z00_1645 =
					BGl_makezd2sfunzd2zzast_varz00(BgL_arity3248z00_79,
					BgL_sidezd2effectzf33249z21_80, BgL_predicatezd2of3250zd2_81,
					BgL_stackzd2allocator3251zd2_82, BgL_topzf33252zf3_83,
					BgL_thezd2closure3253zd2_84, BgL_effect3254z00_85,
					BgL_property3255z00_86, BgL_args3256z00_87, BgL_argszd2name3257zd2_88,
					BgL_body3258z00_89, BgL_class3259z00_90,
					BgL_dssslzd2keywords3260zd2_91, BgL_loc3261z00_92,
					BgL_optionals3262z00_93, BgL_keys3263z00_94,
					BgL_thezd2closurezd2global3264z00_95);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3265z00_1645),
					BGl_classzd2numzd2zz__objectz00(BGl_isfunz00zzinline_inlinez00));
				{	/* Inline/inline.scm 25 */
					BgL_isfunz00_bglt BgL_arg3432z00_1647;

					{	/* Inline/inline.scm 25 */
						BgL_isfunz00_bglt BgL_res3604z00_1660;

						{	/* Inline/inline.scm 25 */
							BgL_isfunz00_bglt BgL_new3244z00_1653;

							BgL_new3244z00_1653 =
								((BgL_isfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_isfunz00_bgl))));
							{	/* Inline/inline.scm 25 */
								BgL_isfunz00_bglt BgL_res3603z00_1659;

								{	/* Inline/inline.scm 25 */
									BgL_isfunz00_bglt BgL_new3269z00_1654;

									BgL_new3269z00_1654 = BgL_new3244z00_1653;
									{	/* Inline/inline.scm 25 */
										BgL_nodez00_bglt BgL_originalzd2body3267zd2_1657;

										obj_t BgL_recursivezd2calls3268zd2_1658;

										BgL_originalzd2body3267zd2_1657 =
											BgL_originalzd2body3246zd2_96;
										BgL_recursivezd2calls3268zd2_1658 =
											BgL_recursivezd2calls3247zd2_97;
										((((BgL_isfunz00_bglt) CREF(BgL_new3269z00_1654))->
												BgL_originalzd2bodyzd2) =
											((BgL_nodez00_bglt) BgL_originalzd2body3267zd2_1657),
											BUNSPEC);
										((((BgL_isfunz00_bglt) CREF(BgL_new3269z00_1654))->
												BgL_recursivezd2callszd2) =
											((obj_t) BgL_recursivezd2calls3268zd2_1658), BUNSPEC);
										BgL_res3603z00_1659 = BgL_new3269z00_1654;
								}} BgL_res3603z00_1659;
							}
							BgL_res3604z00_1660 = BgL_new3244z00_1653;
						}
						BgL_arg3432z00_1647 = BgL_res3604z00_1660;
					}
					{	/* Inline/inline.scm 25 */
						obj_t BgL_auxz00_2933;

						BgL_objectz00_bglt BgL_auxz00_2931;

						BgL_auxz00_2933 = (obj_t) (BgL_arg3432z00_1647);
						BgL_auxz00_2931 = (BgL_objectz00_bglt) (BgL_aux3265z00_1645);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_2931, BgL_auxz00_2933);
				}}
				return ((BgL_isfunz00_bglt) (BgL_isfunz00_bglt) (BgL_aux3265z00_1645));
			}
		}
	}



/* _make-isfun */
	obj_t BGl__makezd2isfunzd2zzinline_inlinez00(obj_t BgL_envz00_2605,
		obj_t BgL_arity3248z00_2606, obj_t BgL_sidezd2effectzf33249z21_2607,
		obj_t BgL_predicatezd2of3250zd2_2608,
		obj_t BgL_stackzd2allocator3251zd2_2609, obj_t BgL_topzf33252zf3_2610,
		obj_t BgL_thezd2closure3253zd2_2611, obj_t BgL_effect3254z00_2612,
		obj_t BgL_property3255z00_2613, obj_t BgL_args3256z00_2614,
		obj_t BgL_argszd2name3257zd2_2615, obj_t BgL_body3258z00_2616,
		obj_t BgL_class3259z00_2617, obj_t BgL_dssslzd2keywords3260zd2_2618,
		obj_t BgL_loc3261z00_2619, obj_t BgL_optionals3262z00_2620,
		obj_t BgL_keys3263z00_2621, obj_t BgL_thezd2closurezd2global3264z00_2622,
		obj_t BgL_originalzd2body3246zd2_2623,
		obj_t BgL_recursivezd2calls3247zd2_2624)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 25 */
			return
				(obj_t) (BGl_makezd2isfunzd2zzinline_inlinez00(
					(long) CINT(BgL_arity3248z00_2606), BgL_sidezd2effectzf33249z21_2607,
					BgL_predicatezd2of3250zd2_2608, BgL_stackzd2allocator3251zd2_2609,
					CBOOL(BgL_topzf33252zf3_2610), BgL_thezd2closure3253zd2_2611,
					BgL_effect3254z00_2612, BgL_property3255z00_2613,
					BgL_args3256z00_2614, BgL_argszd2name3257zd2_2615,
					BgL_body3258z00_2616, BgL_class3259z00_2617,
					BgL_dssslzd2keywords3260zd2_2618, BgL_loc3261z00_2619,
					BgL_optionals3262z00_2620, BgL_keys3263z00_2621,
					BgL_thezd2closurezd2global3264z00_2622,
					(BgL_nodez00_bglt) (BgL_originalzd2body3246zd2_2623),
					BgL_recursivezd2calls3247zd2_2624));
		}
	}



/* fill-isfun! */
	BGL_EXPORTED_DEF BgL_isfunz00_bglt
		BGl_fillzd2isfunz12zc0zzinline_inlinez00(BgL_isfunz00_bglt
		BgL_new3269z00_98, BgL_nodez00_bglt BgL_originalzd2body3267zd2_99,
		obj_t BgL_recursivezd2calls3268zd2_100)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 25 */
			{	/* Inline/inline.scm 25 */
				BgL_nodez00_bglt BgL_originalzd2body3267zd2_2754;

				obj_t BgL_recursivezd2calls3268zd2_2755;

				BgL_originalzd2body3267zd2_2754 = BgL_originalzd2body3267zd2_99;
				BgL_recursivezd2calls3268zd2_2755 = BgL_recursivezd2calls3268zd2_100;
				((((BgL_isfunz00_bglt) CREF(BgL_new3269z00_98))->
						BgL_originalzd2bodyzd2) =
					((BgL_nodez00_bglt) BgL_originalzd2body3267zd2_2754), BUNSPEC);
				((((BgL_isfunz00_bglt) CREF(BgL_new3269z00_98))->
						BgL_recursivezd2callszd2) =
					((obj_t) BgL_recursivezd2calls3268zd2_2755), BUNSPEC);
				return BgL_new3269z00_98;
			}
		}
	}



/* _fill-isfun! */
	obj_t BGl__fillzd2isfunz12zc0zzinline_inlinez00(obj_t BgL_envz00_2625,
		obj_t BgL_new3269z00_2626, obj_t BgL_originalzd2body3267zd2_2627,
		obj_t BgL_recursivezd2calls3268zd2_2628)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 25 */
			{	/* Inline/inline.scm 25 */
				BgL_isfunz00_bglt BgL_auxz00_2945;

				{	/* Inline/inline.scm 25 */
					BgL_isfunz00_bglt BgL_res3716z00_2761;

					{	/* Inline/inline.scm 25 */
						BgL_isfunz00_bglt BgL_new3269z00_2756;

						BgL_nodez00_bglt BgL_originalzd2body3267zd2_2757;

						BgL_new3269z00_2756 = (BgL_isfunz00_bglt) (BgL_new3269z00_2626);
						BgL_originalzd2body3267zd2_2757 =
							(BgL_nodez00_bglt) (BgL_originalzd2body3267zd2_2627);
						{	/* Inline/inline.scm 25 */
							BgL_nodez00_bglt BgL_originalzd2body3267zd2_2759;

							obj_t BgL_recursivezd2calls3268zd2_2760;

							BgL_originalzd2body3267zd2_2759 = BgL_originalzd2body3267zd2_2757;
							BgL_recursivezd2calls3268zd2_2760 =
								BgL_recursivezd2calls3268zd2_2628;
							((((BgL_isfunz00_bglt) CREF(BgL_new3269z00_2756))->
									BgL_originalzd2bodyzd2) =
								((BgL_nodez00_bglt) BgL_originalzd2body3267zd2_2759), BUNSPEC);
							((((BgL_isfunz00_bglt) CREF(BgL_new3269z00_2756))->
									BgL_recursivezd2callszd2) =
								((obj_t) BgL_recursivezd2calls3268zd2_2760), BUNSPEC);
							BgL_res3716z00_2761 = BgL_new3269z00_2756;
						}
					}
					BgL_auxz00_2945 = BgL_res3716z00_2761;
				}
				return (obj_t) (BgL_auxz00_2945);
			}
		}
	}



/* %allocate-isfun */
	BGL_EXPORTED_DEF BgL_sfunz00_bglt
		BGl_z52allocatezd2isfunz80zzinline_inlinez00()
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 25 */
			{	/* Inline/inline.scm 25 */
				BgL_sfunz00_bglt BgL_new3273z00_2762;

				BgL_new3273z00_2762 =
					((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_sfunz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new3273z00_2762),
					BGl_classzd2numzd2zz__objectz00(BGl_isfunz00zzinline_inlinez00));
				{	/* Inline/inline.scm 25 */
					BgL_objectz00_bglt BgL_auxz00_2955;

					BgL_auxz00_2955 = (BgL_objectz00_bglt) (BgL_new3273z00_2762);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_2955, BFALSE);
				}
				return BgL_new3273z00_2762;
			}
		}
	}



/* _%allocate-isfun */
	obj_t BGl__z52allocatezd2isfunz80zzinline_inlinez00(obj_t BgL_envz00_2598)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 25 */
			{	/* Inline/inline.scm 25 */
				BgL_sfunz00_bglt BgL_auxz00_2958;

				{	/* Inline/inline.scm 25 */
					BgL_sfunz00_bglt BgL_res3717z00_2766;

					{	/* Inline/inline.scm 25 */
						BgL_sfunz00_bglt BgL_new3273z00_2764;

						BgL_new3273z00_2764 =
							((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_sfunz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3273z00_2764),
							BGl_classzd2numzd2zz__objectz00(BGl_isfunz00zzinline_inlinez00));
						{	/* Inline/inline.scm 25 */
							BgL_objectz00_bglt BgL_auxz00_2963;

							BgL_auxz00_2963 = (BgL_objectz00_bglt) (BgL_new3273z00_2764);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2963, BFALSE);
						}
						BgL_res3717z00_2766 = BgL_new3273z00_2764;
					}
					BgL_auxz00_2958 = BgL_res3717z00_2766;
				}
				return (obj_t) (BgL_auxz00_2958);
			}
		}
	}



/* isfun-nil */
	BGL_EXPORTED_DEF BgL_isfunz00_bglt BGl_isfunzd2nilzd2zzinline_inlinez00()
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 25 */
			if ((BGl_z52thezd2isfunzd2nilz52zzinline_inlinez00 == BUNSPEC))
				{	/* Inline/inline.scm 25 */
					{	/* Inline/inline.scm 25 */
						BgL_sfunz00_bglt BgL_res3605z00_1671;

						{	/* Inline/inline.scm 25 */
							BgL_sfunz00_bglt BgL_new1954z00_1667;

							BgL_new1954z00_1667 =
								((BgL_sfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_sfunz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1954z00_1667),
								BGl_classzd2numzd2zz__objectz00(BGl_sfunz00zzast_varz00));
							{	/* Inline/inline.scm 25 */
								BgL_objectz00_bglt BgL_auxz00_2973;

								BgL_auxz00_2973 = (BgL_objectz00_bglt) (BgL_new1954z00_1667);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2973, BFALSE);
							}
							BgL_res3605z00_1671 = BgL_new1954z00_1667;
						}
						BGl_z52thezd2isfunzd2nilz52zzinline_inlinez00 =
							(obj_t) (BgL_res3605z00_1671);
					}
					{	/* Inline/inline.scm 25 */
						BgL_sfunz00_bglt BgL_res3606z00_1707;

						{	/* Inline/inline.scm 25 */
							BgL_sfunz00_bglt BgL_new1935z00_1672;

							BgL_new1935z00_1672 =
								(BgL_sfunz00_bglt)
								(BGl_z52thezd2isfunzd2nilz52zzinline_inlinez00);
							{	/* Inline/inline.scm 25 */
								long BgL_arity1918z00_1690;

								obj_t BgL_sidezd2effectzf31919z21_1691;

								obj_t BgL_predicatezd2of1920zd2_1692;

								obj_t BgL_stackzd2allocator1921zd2_1693;

								bool_t BgL_topzf31922zf3_1694;

								obj_t BgL_thezd2closure1923zd2_1695;

								obj_t BgL_effect1924z00_1696;

								obj_t BgL_property1925z00_1697;

								obj_t BgL_args1926z00_1698;

								obj_t BgL_argszd2name1927zd2_1699;

								obj_t BgL_body1928z00_1700;

								obj_t BgL_class1929z00_1701;

								obj_t BgL_dssslzd2keywords1930zd2_1702;

								obj_t BgL_loc1931z00_1703;

								obj_t BgL_optionals1932z00_1704;

								obj_t BgL_keys1933z00_1705;

								obj_t BgL_thezd2closurezd2global1934z00_1706;

								BgL_arity1918z00_1690 = ((long) 0);
								BgL_sidezd2effectzf31919z21_1691 = BUNSPEC;
								BgL_predicatezd2of1920zd2_1692 = BUNSPEC;
								BgL_stackzd2allocator1921zd2_1693 = BUNSPEC;
								BgL_topzf31922zf3_1694 = ((bool_t) 0);
								BgL_thezd2closure1923zd2_1695 = BUNSPEC;
								BgL_effect1924z00_1696 = BUNSPEC;
								BgL_property1925z00_1697 = BUNSPEC;
								BgL_args1926z00_1698 = BUNSPEC;
								BgL_argszd2name1927zd2_1699 = BUNSPEC;
								BgL_body1928z00_1700 = BUNSPEC;
								BgL_class1929z00_1701 = BUNSPEC;
								BgL_dssslzd2keywords1930zd2_1702 = BUNSPEC;
								BgL_loc1931z00_1703 = BUNSPEC;
								BgL_optionals1932z00_1704 = BUNSPEC;
								BgL_keys1933z00_1705 = BUNSPEC;
								BgL_thezd2closurezd2global1934z00_1706 = BUNSPEC;
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1672))->
										BgL_arityz00) = ((long) BgL_arity1918z00_1690), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1672))->
										BgL_sidezd2effectzf3z21) =
									((obj_t) BgL_sidezd2effectzf31919z21_1691), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1672))->
										BgL_predicatezd2ofzd2) =
									((obj_t) BgL_predicatezd2of1920zd2_1692), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1672))->
										BgL_stackzd2allocatorzd2) =
									((obj_t) BgL_stackzd2allocator1921zd2_1693), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1672))->
										BgL_topzf3zf3) =
									((bool_t) BgL_topzf31922zf3_1694), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1672))->
										BgL_thezd2closurezd2) =
									((obj_t) BgL_thezd2closure1923zd2_1695), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1672))->
										BgL_effectz00) = ((obj_t) BgL_effect1924z00_1696), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1672))->
										BgL_propertyz00) =
									((obj_t) BgL_property1925z00_1697), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1672))->BgL_argsz00) =
									((obj_t) BgL_args1926z00_1698), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1672))->
										BgL_argszd2namezd2) =
									((obj_t) BgL_argszd2name1927zd2_1699), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1672))->BgL_bodyz00) =
									((obj_t) BgL_body1928z00_1700), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1672))->
										BgL_classz00) = ((obj_t) BgL_class1929z00_1701), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1672))->
										BgL_dssslzd2keywordszd2) =
									((obj_t) BgL_dssslzd2keywords1930zd2_1702), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1672))->BgL_locz00) =
									((obj_t) BgL_loc1931z00_1703), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1672))->
										BgL_optionalsz00) =
									((obj_t) BgL_optionals1932z00_1704), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1672))->BgL_keysz00) =
									((obj_t) BgL_keys1933z00_1705), BUNSPEC);
								((((BgL_sfunz00_bglt) CREF(BgL_new1935z00_1672))->
										BgL_thezd2closurezd2globalz00) =
									((obj_t) BgL_thezd2closurezd2global1934z00_1706), BUNSPEC);
								BgL_res3606z00_1707 = BgL_new1935z00_1672;
						}} BgL_res3606z00_1707;
					}
					{	/* Inline/inline.scm 25 */
						long BgL_arg3435z00_914;

						BgL_arg3435z00_914 =
							BGl_classzd2numzd2zz__objectz00(BGl_isfunz00zzinline_inlinez00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2isfunzd2nilz52zzinline_inlinez00),
							BgL_arg3435z00_914);
					}
					{	/* Inline/inline.scm 25 */
						BgL_isfunz00_bglt BgL_arg3436z00_915;

						{	/* Inline/inline.scm 25 */
							BgL_nodez00_bglt BgL_arg3437z00_916;

							BgL_arg3437z00_916 = BGl_nodezd2nilzd2zzast_nodez00();
							{	/* Inline/inline.scm 25 */
								BgL_isfunz00_bglt BgL_res3608z00_1719;

								{	/* Inline/inline.scm 25 */
									BgL_isfunz00_bglt BgL_new3244z00_1712;

									BgL_new3244z00_1712 =
										((BgL_isfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_isfunz00_bgl))));
									{	/* Inline/inline.scm 25 */
										BgL_isfunz00_bglt BgL_res3607z00_1718;

										{	/* Inline/inline.scm 25 */
											BgL_isfunz00_bglt BgL_new3269z00_1713;

											BgL_new3269z00_1713 = BgL_new3244z00_1712;
											{	/* Inline/inline.scm 25 */
												BgL_nodez00_bglt BgL_originalzd2body3267zd2_1716;

												obj_t BgL_recursivezd2calls3268zd2_1717;

												BgL_originalzd2body3267zd2_1716 = BgL_arg3437z00_916;
												BgL_recursivezd2calls3268zd2_1717 = BUNSPEC;
												((((BgL_isfunz00_bglt) CREF(BgL_new3269z00_1713))->
														BgL_originalzd2bodyzd2) =
													((BgL_nodez00_bglt) BgL_originalzd2body3267zd2_1716),
													BUNSPEC);
												((((BgL_isfunz00_bglt) CREF(BgL_new3269z00_1713))->
														BgL_recursivezd2callszd2) =
													((obj_t) BgL_recursivezd2calls3268zd2_1717), BUNSPEC);
												BgL_res3607z00_1718 = BgL_new3269z00_1713;
										}} BgL_res3607z00_1718;
									}
									BgL_res3608z00_1719 = BgL_new3244z00_1712;
								}
								BgL_arg3436z00_915 = BgL_res3608z00_1719;
						}}
						{	/* Inline/inline.scm 25 */
							obj_t BgL_auxz00_3004;

							BgL_objectz00_bglt BgL_auxz00_3002;

							BgL_auxz00_3004 = (obj_t) (BgL_arg3436z00_915);
							BgL_auxz00_3002 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2isfunzd2nilz52zzinline_inlinez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3002, BgL_auxz00_3004);
				}}}
			else
				{	/* Inline/inline.scm 25 */
					BFALSE;
				}
			return
				(BgL_isfunz00_bglt) (BGl_z52thezd2isfunzd2nilz52zzinline_inlinez00);
		}
	}



/* _isfun-nil */
	obj_t BGl__isfunzd2nilzd2zzinline_inlinez00(obj_t BgL_envz00_2599)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 25 */
			return (obj_t) (BGl_isfunzd2nilzd2zzinline_inlinez00());
		}
	}



/* _sfun? */
	obj_t BGl__sfunzf3zf3zzinline_inlinez00(obj_t BgL_envz00_2588,
		obj_t BgL_obj1955z00_2589)
	{
		AN_OBJECT;
		{	/* Ast/var.scm 94 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_2589,
					BGl_sfunz00zzast_varz00));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinline_inlinez00()
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_inlinezd2nodezd2default3359zd2envzd2zzinline_inlinez00,
				BGl_nodez00zzast_nodez00, BGl_string3686z00zzinline_inlinez00);
		}
	}



/* inline-node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_inlinezd2nodezd2zzinline_inlinez00(BgL_nodez00_bglt BgL_nodez00_4,
		long BgL_kfactorz00_5, obj_t BgL_stackz00_6)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 62 */
			{	/* Inline/inline.scm 62 */
				obj_t BgL_method3361z00_1741;

				{	/* Inline/inline.scm 62 */
					BgL_objectz00_bglt BgL_objz00_1742;

					BgL_objz00_1742 = (BgL_objectz00_bglt) (BgL_nodez00_4);
					{	/* Inline/inline.scm 62 */
						long BgL_objzd2classzd2numz00_1743;

						BgL_objzd2classzd2numz00_1743 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1742);
						{	/* Inline/inline.scm 62 */
							obj_t BgL_arg2643z00_1744;

							BgL_arg2643z00_1744 =
								PROCEDURE_REF(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
								(int) (((long) 1)));
							{	/* Inline/inline.scm 62 */
								obj_t BgL_arrayz00_1746;

								int BgL_offsetz00_1747;

								BgL_arrayz00_1746 = BgL_arg2643z00_1744;
								BgL_offsetz00_1747 = (int) (BgL_objzd2classzd2numz00_1743);
								{	/* Inline/inline.scm 62 */
									long BgL_offsetz00_1748;

									BgL_offsetz00_1748 =
										((long) (BgL_offsetz00_1747) - OBJECT_TYPE);
									{	/* Inline/inline.scm 62 */
										long BgL_modz00_1749;

										{	/* Inline/inline.scm 62 */
											int BgL_arg2645z00_1750;

											BgL_arg2645z00_1750 = (int) (((long) 16));
											{	/* Inline/inline.scm 62 */
												long BgL_auxz00_3021;

												BgL_auxz00_3021 = (long) (BgL_arg2645z00_1750);
												BgL_modz00_1749 =
													(BgL_offsetz00_1748 / BgL_auxz00_3021);
										}}
										{	/* Inline/inline.scm 62 */
											long BgL_restz00_1751;

											{	/* Inline/inline.scm 62 */
												int BgL_arg2644z00_1752;

												BgL_arg2644z00_1752 = (int) (((long) 16));
												{	/* Inline/inline.scm 62 */
													long BgL_auxz00_3025;

													BgL_auxz00_3025 = (long) (BgL_arg2644z00_1752);
													BgL_restz00_1751 =
														(BgL_offsetz00_1748 % BgL_auxz00_3025);
											}}
											{	/* Inline/inline.scm 62 */

												BgL_method3361z00_1741 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1746,
														(int) (BgL_modz00_1749)), (int) (BgL_restz00_1751));
				}}}}}}}}
				return
					(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_1741)
					(BgL_method3361z00_1741, (obj_t) (BgL_nodez00_4),
						BINT(BgL_kfactorz00_5), BgL_stackz00_6, BEOA));
			}
		}
	}



/* _inline-node */
	obj_t BGl__inlinezd2nodezd2zzinline_inlinez00(obj_t BgL_envz00_2590,
		obj_t BgL_nodez00_2591, obj_t BgL_kfactorz00_2592, obj_t BgL_stackz00_2593)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 62 */
			return
				(obj_t) (BGl_inlinezd2nodezd2zzinline_inlinez00(
					(BgL_nodez00_bglt) (BgL_nodez00_2591),
					(long) CINT(BgL_kfactorz00_2592), BgL_stackz00_2593));
		}
	}



/* inline-node-default3359 */
	BgL_nodez00_bglt
		BGl_inlinezd2nodezd2default3359z00zzinline_inlinez00(BgL_nodez00_bglt
		BgL_nodez00_7, long BgL_kfactorz00_8, obj_t BgL_stackz00_9)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 15 */
			return
				(BgL_nodez00_bglt) (BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 2)),
					BGl_string3687z00zzinline_inlinez00, (obj_t) (BgL_nodez00_7)));
		}
	}



/* _inline-node-default3359 */
	obj_t BGl__inlinezd2nodezd2default3359z00zzinline_inlinez00(obj_t
		BgL_envz00_2629, obj_t BgL_nodez00_2630, obj_t BgL_kfactorz00_2631,
		obj_t BgL_stackz00_2632)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 15 */
			return
				(obj_t) (BGl_inlinezd2nodezd2default3359z00zzinline_inlinez00(
					(BgL_nodez00_bglt) (BgL_nodez00_2630),
					(long) CINT(BgL_kfactorz00_2631), BgL_stackz00_2632));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinline_inlinez00()
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00, BGl_atomz00zzast_nodez00,
				BGl_proc3688z00zzinline_inlinez00, BGl_string3686z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00, BGl_varz00zzast_nodez00,
				BGl_proc3689z00zzinline_inlinez00, BGl_string3686z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_kwotez00zzast_nodez00, BGl_proc3690z00zzinline_inlinez00,
				BGl_string3686z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_sequencez00zzast_nodez00, BGl_proc3691z00zzinline_inlinez00,
				BGl_string3686z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00, BGl_appz00zzast_nodez00,
				BGl_proc3692z00zzinline_inlinez00, BGl_string3686z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3693z00zzinline_inlinez00,
				BGl_string3686z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_funcallz00zzast_nodez00, BGl_proc3694z00zzinline_inlinez00,
				BGl_string3686z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_externz00zzast_nodez00, BGl_proc3695z00zzinline_inlinez00,
				BGl_string3686z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00, BGl_castz00zzast_nodez00,
				BGl_proc3696z00zzinline_inlinez00, BGl_string3686z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00, BGl_setqz00zzast_nodez00,
				BGl_proc3697z00zzinline_inlinez00, BGl_string3686z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3698z00zzinline_inlinez00,
				BGl_string3686z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00, BGl_failz00zzast_nodez00,
				BGl_proc3699z00zzinline_inlinez00, BGl_string3686z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_selectz00zzast_nodez00, BGl_proc3700z00zzinline_inlinez00,
				BGl_string3686z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3701z00zzinline_inlinez00,
				BGl_string3686z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3702z00zzinline_inlinez00,
				BGl_string3686z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3703z00zzinline_inlinez00,
				BGl_string3686z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3704z00zzinline_inlinez00,
				BGl_string3686z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3705z00zzinline_inlinez00,
				BGl_string3686z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3706z00zzinline_inlinez00,
				BGl_string3686z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3707z00zzinline_inlinez00,
				BGl_string3686z00zzinline_inlinez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_isfunz00zzinline_inlinez00, BGl_proc3708z00zzinline_inlinez00,
				BGl_string3709z00zzinline_inlinez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_isfunz00zzinline_inlinez00, BGl_proc3710z00zzinline_inlinez00,
				BGl_string3711z00zzinline_inlinez00);
		}
	}



/* struct+object->objec3406 */
	obj_t BGl_structzb2objectzd2ze3objec3406z83zzinline_inlinez00(obj_t
		BgL_envz00_2660, obj_t BgL_oz00_2661, obj_t BgL_sz00_2662)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 25 */
			{
				BgL_isfunz00_bglt BgL_oz00_1542;

				obj_t BgL_sz00_1543;

				{	/* Inline/inline.scm 25 */
					BgL_isfunz00_bglt BgL_auxz00_3071;

					BgL_oz00_1542 = (BgL_isfunz00_bglt) (BgL_oz00_2661);
					BgL_sz00_1543 = BgL_sz00_2662;
					{

						{	/* Inline/inline.scm 25 */
							obj_t BgL_old3277z00_1546;

							obj_t BgL_aux3278z00_1547;

							{	/* Inline/inline.scm 25 */
								obj_t BgL_nextzd2method3405zd2_1553;

								BgL_nextzd2method3405zd2_1553 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1542),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_isfunz00zzinline_inlinez00);
								if (PROCEDUREP(BgL_nextzd2method3405zd2_1553))
									{	/* Inline/inline.scm 25 */
										BgL_old3277z00_1546 =
											PROCEDURE_ENTRY(BgL_nextzd2method3405zd2_1553)
											(BgL_nextzd2method3405zd2_1553, (obj_t) (BgL_oz00_1542),
											BgL_sz00_1543, BEOA);
									}
								else
									{	/* Inline/inline.scm 25 */
										BgL_old3277z00_1546 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1542), BgL_sz00_1543));
									}
							}
							BgL_aux3278z00_1547 =
								STRUCT_REF(BgL_sz00_1543, (int) (((long) 0)));
							{	/* Inline/inline.scm 25 */
								BgL_isfunz00_bglt BgL_new3279z00_1548;

								BgL_new3279z00_1548 =
									((BgL_isfunz00_bglt) (BgL_old3277z00_1546));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3279z00_1548),
									BGl_classzd2numzd2zz__objectz00
									(BGl_isfunz00zzinline_inlinez00));
								{	/* Inline/inline.scm 25 */
									BgL_isfunz00_bglt BgL_arg3590z00_1550;

									{	/* Inline/inline.scm 25 */
										obj_t BgL_arg3591z00_1551;

										obj_t BgL_arg3592z00_1552;

										BgL_arg3591z00_1551 =
											STRUCT_REF(BgL_aux3278z00_1547, (int) (((long) 0)));
										BgL_arg3592z00_1552 =
											STRUCT_REF(BgL_aux3278z00_1547, (int) (((long) 1)));
										{	/* Inline/inline.scm 25 */
											BgL_isfunz00_bglt BgL_res3682z00_2582;

											{	/* Inline/inline.scm 25 */
												BgL_nodez00_bglt BgL_originalzd2body3242zd2_2573;

												BgL_originalzd2body3242zd2_2573 =
													(BgL_nodez00_bglt) (BgL_arg3591z00_1551);
												{	/* Inline/inline.scm 25 */
													BgL_isfunz00_bglt BgL_new3244z00_2575;

													BgL_new3244z00_2575 =
														((BgL_isfunz00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_isfunz00_bgl))));
													{	/* Inline/inline.scm 25 */
														BgL_isfunz00_bglt BgL_res3681z00_2581;

														{	/* Inline/inline.scm 25 */
															BgL_isfunz00_bglt BgL_new3269z00_2576;

															BgL_new3269z00_2576 = BgL_new3244z00_2575;
															{	/* Inline/inline.scm 25 */
																BgL_nodez00_bglt
																	BgL_originalzd2body3267zd2_2579;
																obj_t BgL_recursivezd2calls3268zd2_2580;

																BgL_originalzd2body3267zd2_2579 =
																	BgL_originalzd2body3242zd2_2573;
																BgL_recursivezd2calls3268zd2_2580 =
																	BgL_arg3592z00_1552;
																((((BgL_isfunz00_bglt)
																			CREF(BgL_new3269z00_2576))->
																		BgL_originalzd2bodyzd2) =
																	((BgL_nodez00_bglt)
																		BgL_originalzd2body3267zd2_2579), BUNSPEC);
																((((BgL_isfunz00_bglt)
																			CREF(BgL_new3269z00_2576))->
																		BgL_recursivezd2callszd2) =
																	((obj_t) BgL_recursivezd2calls3268zd2_2580),
																	BUNSPEC);
																BgL_res3681z00_2581 = BgL_new3269z00_2576;
														}} BgL_res3681z00_2581;
													}
													BgL_res3682z00_2582 = BgL_new3244z00_2575;
											}}
											BgL_arg3590z00_1550 = BgL_res3682z00_2582;
									}}
									{	/* Inline/inline.scm 25 */
										obj_t BgL_auxz00_3098;

										BgL_objectz00_bglt BgL_auxz00_3096;

										BgL_auxz00_3098 = (obj_t) (BgL_arg3590z00_1550);
										BgL_auxz00_3096 =
											(BgL_objectz00_bglt) (BgL_new3279z00_1548);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3096, BgL_auxz00_3098);
								}}
								BgL_auxz00_3071 = BgL_new3279z00_1548;
					}}}
					return (obj_t) (BgL_auxz00_3071);
				}
			}
		}
	}



/* object->struct-isfun3404 */
	obj_t BGl_objectzd2ze3structzd2isfun3404ze3zzinline_inlinez00(obj_t
		BgL_envz00_2663, obj_t BgL_obj3274z00_2664)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 25 */
			{
				BgL_isfunz00_bglt BgL_obj3274z00_1530;

				BgL_obj3274z00_1530 = (BgL_isfunz00_bglt) (BgL_obj3274z00_2664);
				{

					{	/* Inline/inline.scm 25 */
						obj_t BgL_res3275z00_1533;

						{	/* Inline/inline.scm 25 */
							obj_t BgL_nextzd2method3403zd2_1540;

							BgL_nextzd2method3403zd2_1540 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3274z00_1530),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_isfunz00zzinline_inlinez00);
							if (PROCEDUREP(BgL_nextzd2method3403zd2_1540))
								{	/* Inline/inline.scm 25 */
									BgL_res3275z00_1533 =
										PROCEDURE_ENTRY(BgL_nextzd2method3403zd2_1540)
										(BgL_nextzd2method3403zd2_1540,
										(obj_t) (BgL_obj3274z00_1530), BEOA);
								}
							else
								{	/* Inline/inline.scm 25 */
									BgL_res3275z00_1533 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3274z00_1530));
								}
						}
						{	/* Inline/inline.scm 25 */
							obj_t BgL_aux3276z00_1534;

							{	/* Inline/inline.scm 25 */
								obj_t BgL_keyz00_2544;

								BgL_keyz00_2544 = CNST_TABLE_REF(((long) 1));
								BgL_aux3276z00_1534 =
									make_struct(BgL_keyz00_2544, (int) (((long) 2)), BUNSPEC);
							}
							{	/* Inline/inline.scm 25 */
								BgL_nodez00_bglt BgL_arg3584z00_1536;

								{
									obj_t BgL_auxz00_3115;

									{	/* Inline/inline.scm 25 */
										BgL_objectz00_bglt BgL_auxz00_3116;

										BgL_auxz00_3116 =
											(BgL_objectz00_bglt) (BgL_obj3274z00_1530);
										BgL_auxz00_3115 = BGL_OBJECT_WIDENING(BgL_auxz00_3116);
									}
									BgL_arg3584z00_1536 =
										(((BgL_isfunz00_bglt) CREF(BgL_auxz00_3115))->
										BgL_originalzd2bodyzd2);
								}
								{	/* Inline/inline.scm 25 */
									obj_t BgL_auxz00_3122;

									int BgL_auxz00_3120;

									BgL_auxz00_3122 = (obj_t) (BgL_arg3584z00_1536);
									BgL_auxz00_3120 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3276z00_1534, BgL_auxz00_3120,
										BgL_auxz00_3122);
							}}
							{	/* Inline/inline.scm 25 */
								obj_t BgL_arg3586z00_1538;

								{
									obj_t BgL_auxz00_3125;

									{	/* Inline/inline.scm 25 */
										BgL_objectz00_bglt BgL_auxz00_3126;

										BgL_auxz00_3126 =
											(BgL_objectz00_bglt) (BgL_obj3274z00_1530);
										BgL_auxz00_3125 = BGL_OBJECT_WIDENING(BgL_auxz00_3126);
									}
									BgL_arg3586z00_1538 =
										(((BgL_isfunz00_bglt) CREF(BgL_auxz00_3125))->
										BgL_recursivezd2callszd2);
								}
								{	/* Inline/inline.scm 25 */
									int BgL_auxz00_3130;

									BgL_auxz00_3130 = (int) (((long) 1));
									STRUCT_SET(BgL_aux3276z00_1534, BgL_auxz00_3130,
										BgL_arg3586z00_1538);
							}}
							{	/* Inline/inline.scm 25 */
								int BgL_auxz00_3133;

								BgL_auxz00_3133 = (int) (((long) 0));
								STRUCT_SET(BgL_res3275z00_1533, BgL_auxz00_3133,
									BgL_aux3276z00_1534);
							}
							{	/* Inline/inline.scm 25 */
								obj_t BgL_auxz00_3136;

								BgL_auxz00_3136 = STRUCT_KEY(BgL_res3275z00_1533);
								STRUCT_KEY_SET(BgL_aux3276z00_1534, BgL_auxz00_3136);
							}
							{	/* Inline/inline.scm 25 */
								obj_t BgL_kz00_2563;

								BgL_kz00_2563 = CNST_TABLE_REF(((long) 1));
								STRUCT_KEY_SET(BgL_res3275z00_1533, BgL_kz00_2563);
							}
							return BgL_res3275z00_1533;
						}
					}
				}
			}
		}
	}



/* inline-node-box-set!3402 */
	obj_t BGl_inlinezd2nodezd2boxzd2setz123402zc0zzinline_inlinez00(obj_t
		BgL_envz00_2665, obj_t BgL_nodez00_2666, obj_t BgL_kfactorz00_2667,
		obj_t BgL_stackz00_2668)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 229 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1518;

				obj_t BgL_kfactorz00_1519;

				obj_t BgL_stackz00_1520;

				{	/* Inline/inline.scm 230 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_3142;

					BgL_nodez00_1518 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2666);
					BgL_kfactorz00_1519 = BgL_kfactorz00_2667;
					BgL_stackz00_1520 = BgL_stackz00_2668;
					{	/* Inline/inline.scm 231 */
						BgL_nodez00_bglt BgL_arg3578z00_1524;

						{	/* Inline/inline.scm 231 */
							BgL_varz00_bglt BgL_arg3579z00_1525;

							BgL_arg3579z00_1525 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1518))->
								BgL_varz00);
							{	/* Inline/inline.scm 231 */
								BgL_nodez00_bglt BgL_res3676z00_2509;

								{	/* Inline/inline.scm 231 */
									BgL_nodez00_bglt BgL_nodez00_2481;

									long BgL_kfactorz00_2482;

									BgL_nodez00_2481 = (BgL_nodez00_bglt) (BgL_arg3579z00_1525);
									BgL_kfactorz00_2482 = (long) CINT(BgL_kfactorz00_1519);
									{	/* Inline/inline.scm 231 */
										obj_t BgL_method3361z00_2484;

										{	/* Inline/inline.scm 231 */
											BgL_objectz00_bglt BgL_objz00_2485;

											BgL_objz00_2485 = (BgL_objectz00_bglt) (BgL_nodez00_2481);
											{	/* Inline/inline.scm 231 */
												long BgL_objzd2classzd2numz00_2486;

												BgL_objzd2classzd2numz00_2486 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2485);
												{	/* Inline/inline.scm 231 */
													obj_t BgL_arg2643z00_2487;

													BgL_arg2643z00_2487 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 231 */
														obj_t BgL_arrayz00_2489;

														int BgL_offsetz00_2490;

														BgL_arrayz00_2489 = BgL_arg2643z00_2487;
														BgL_offsetz00_2490 =
															(int) (BgL_objzd2classzd2numz00_2486);
														{	/* Inline/inline.scm 231 */
															long BgL_offsetz00_2491;

															BgL_offsetz00_2491 =
																((long) (BgL_offsetz00_2490) - OBJECT_TYPE);
															{	/* Inline/inline.scm 231 */
																long BgL_modz00_2492;

																{	/* Inline/inline.scm 231 */
																	int BgL_arg2645z00_2493;

																	BgL_arg2645z00_2493 = (int) (((long) 16));
																	{	/* Inline/inline.scm 231 */
																		long BgL_auxz00_3154;

																		BgL_auxz00_3154 =
																			(long) (BgL_arg2645z00_2493);
																		BgL_modz00_2492 =
																			(BgL_offsetz00_2491 / BgL_auxz00_3154);
																}}
																{	/* Inline/inline.scm 231 */
																	long BgL_restz00_2494;

																	{	/* Inline/inline.scm 231 */
																		int BgL_arg2644z00_2495;

																		BgL_arg2644z00_2495 = (int) (((long) 16));
																		{	/* Inline/inline.scm 231 */
																			long BgL_auxz00_3158;

																			BgL_auxz00_3158 =
																				(long) (BgL_arg2644z00_2495);
																			BgL_restz00_2494 =
																				(BgL_offsetz00_2491 % BgL_auxz00_3158);
																	}}
																	{	/* Inline/inline.scm 231 */

																		BgL_method3361z00_2484 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2489,
																				(int) (BgL_modz00_2492)),
																			(int) (BgL_restz00_2494));
										}}}}}}}}
										BgL_res3676z00_2509 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_2484) (BgL_method3361z00_2484,
												(obj_t) (BgL_nodez00_2481), BINT(BgL_kfactorz00_2482),
												BgL_stackz00_1520, BEOA));
								}}
								BgL_arg3578z00_1524 = BgL_res3676z00_2509;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3170;

							BgL_auxz00_3170 = (BgL_varz00_bglt) (BgL_arg3578z00_1524);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1518))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_3170), BUNSPEC);
					}}
					{	/* Inline/inline.scm 232 */
						BgL_nodez00_bglt BgL_arg3580z00_1526;

						{	/* Inline/inline.scm 232 */
							BgL_nodez00_bglt BgL_arg3581z00_1527;

							BgL_arg3581z00_1527 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1518))->
								BgL_valuez00);
							{	/* Inline/inline.scm 232 */
								BgL_nodez00_bglt BgL_res3679z00_2541;

								{	/* Inline/inline.scm 232 */
									long BgL_kfactorz00_2514;

									BgL_kfactorz00_2514 = (long) CINT(BgL_kfactorz00_1519);
									{	/* Inline/inline.scm 232 */
										obj_t BgL_method3361z00_2516;

										{	/* Inline/inline.scm 232 */
											BgL_objectz00_bglt BgL_objz00_2517;

											BgL_objz00_2517 =
												(BgL_objectz00_bglt) (BgL_arg3581z00_1527);
											{	/* Inline/inline.scm 232 */
												long BgL_objzd2classzd2numz00_2518;

												BgL_objzd2classzd2numz00_2518 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2517);
												{	/* Inline/inline.scm 232 */
													obj_t BgL_arg2643z00_2519;

													BgL_arg2643z00_2519 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 232 */
														obj_t BgL_arrayz00_2521;

														int BgL_offsetz00_2522;

														BgL_arrayz00_2521 = BgL_arg2643z00_2519;
														BgL_offsetz00_2522 =
															(int) (BgL_objzd2classzd2numz00_2518);
														{	/* Inline/inline.scm 232 */
															long BgL_offsetz00_2523;

															BgL_offsetz00_2523 =
																((long) (BgL_offsetz00_2522) - OBJECT_TYPE);
															{	/* Inline/inline.scm 232 */
																long BgL_modz00_2524;

																{	/* Inline/inline.scm 232 */
																	int BgL_arg2645z00_2525;

																	BgL_arg2645z00_2525 = (int) (((long) 16));
																	{	/* Inline/inline.scm 232 */
																		long BgL_auxz00_3183;

																		BgL_auxz00_3183 =
																			(long) (BgL_arg2645z00_2525);
																		BgL_modz00_2524 =
																			(BgL_offsetz00_2523 / BgL_auxz00_3183);
																}}
																{	/* Inline/inline.scm 232 */
																	long BgL_restz00_2526;

																	{	/* Inline/inline.scm 232 */
																		int BgL_arg2644z00_2527;

																		BgL_arg2644z00_2527 = (int) (((long) 16));
																		{	/* Inline/inline.scm 232 */
																			long BgL_auxz00_3187;

																			BgL_auxz00_3187 =
																				(long) (BgL_arg2644z00_2527);
																			BgL_restz00_2526 =
																				(BgL_offsetz00_2523 % BgL_auxz00_3187);
																	}}
																	{	/* Inline/inline.scm 232 */

																		BgL_method3361z00_2516 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2521,
																				(int) (BgL_modz00_2524)),
																			(int) (BgL_restz00_2526));
										}}}}}}}}
										BgL_res3679z00_2541 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_2516) (BgL_method3361z00_2516,
												(obj_t) (BgL_arg3581z00_1527),
												BINT(BgL_kfactorz00_2514), BgL_stackz00_1520, BEOA));
								}}
								BgL_arg3580z00_1526 = BgL_res3679z00_2541;
						}}
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1518))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3580z00_1526), BUNSPEC);
					}
					BgL_auxz00_3142 = BgL_nodez00_1518;
					return (obj_t) (BgL_auxz00_3142);
				}
			}
		}
	}



/* inline-node-box-ref3400 */
	obj_t BGl_inlinezd2nodezd2boxzd2ref3400zd2zzinline_inlinez00(obj_t
		BgL_envz00_2669, obj_t BgL_nodez00_2670, obj_t BgL_kfactorz00_2671,
		obj_t BgL_stackz00_2672)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 222 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1509;

				obj_t BgL_kfactorz00_1510;

				obj_t BgL_stackz00_1511;

				{	/* Inline/inline.scm 223 */
					BgL_boxzd2refzd2_bglt BgL_auxz00_3202;

					BgL_nodez00_1509 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2670);
					BgL_kfactorz00_1510 = BgL_kfactorz00_2671;
					BgL_stackz00_1511 = BgL_stackz00_2672;
					{	/* Inline/inline.scm 223 */
						BgL_nodez00_bglt BgL_arg3575z00_2446;

						{	/* Inline/inline.scm 223 */
							BgL_varz00_bglt BgL_arg3576z00_2447;

							BgL_arg3576z00_2447 =
								(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1509))->BgL_varz00);
							{	/* Inline/inline.scm 223 */
								BgL_nodez00_bglt BgL_res3673z00_2477;

								{	/* Inline/inline.scm 223 */
									BgL_nodez00_bglt BgL_nodez00_2449;

									long BgL_kfactorz00_2450;

									BgL_nodez00_2449 = (BgL_nodez00_bglt) (BgL_arg3576z00_2447);
									BgL_kfactorz00_2450 = (long) CINT(BgL_kfactorz00_1510);
									{	/* Inline/inline.scm 223 */
										obj_t BgL_method3361z00_2452;

										{	/* Inline/inline.scm 223 */
											BgL_objectz00_bglt BgL_objz00_2453;

											BgL_objz00_2453 = (BgL_objectz00_bglt) (BgL_nodez00_2449);
											{	/* Inline/inline.scm 223 */
												long BgL_objzd2classzd2numz00_2454;

												BgL_objzd2classzd2numz00_2454 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2453);
												{	/* Inline/inline.scm 223 */
													obj_t BgL_arg2643z00_2455;

													BgL_arg2643z00_2455 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 223 */
														obj_t BgL_arrayz00_2457;

														int BgL_offsetz00_2458;

														BgL_arrayz00_2457 = BgL_arg2643z00_2455;
														BgL_offsetz00_2458 =
															(int) (BgL_objzd2classzd2numz00_2454);
														{	/* Inline/inline.scm 223 */
															long BgL_offsetz00_2459;

															BgL_offsetz00_2459 =
																((long) (BgL_offsetz00_2458) - OBJECT_TYPE);
															{	/* Inline/inline.scm 223 */
																long BgL_modz00_2460;

																{	/* Inline/inline.scm 223 */
																	int BgL_arg2645z00_2461;

																	BgL_arg2645z00_2461 = (int) (((long) 16));
																	{	/* Inline/inline.scm 223 */
																		long BgL_auxz00_3214;

																		BgL_auxz00_3214 =
																			(long) (BgL_arg2645z00_2461);
																		BgL_modz00_2460 =
																			(BgL_offsetz00_2459 / BgL_auxz00_3214);
																}}
																{	/* Inline/inline.scm 223 */
																	long BgL_restz00_2462;

																	{	/* Inline/inline.scm 223 */
																		int BgL_arg2644z00_2463;

																		BgL_arg2644z00_2463 = (int) (((long) 16));
																		{	/* Inline/inline.scm 223 */
																			long BgL_auxz00_3218;

																			BgL_auxz00_3218 =
																				(long) (BgL_arg2644z00_2463);
																			BgL_restz00_2462 =
																				(BgL_offsetz00_2459 % BgL_auxz00_3218);
																	}}
																	{	/* Inline/inline.scm 223 */

																		BgL_method3361z00_2452 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2457,
																				(int) (BgL_modz00_2460)),
																			(int) (BgL_restz00_2462));
										}}}}}}}}
										BgL_res3673z00_2477 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_2452) (BgL_method3361z00_2452,
												(obj_t) (BgL_nodez00_2449), BINT(BgL_kfactorz00_2450),
												BgL_stackz00_1511, BEOA));
								}}
								BgL_arg3575z00_2446 = BgL_res3673z00_2477;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3230;

							BgL_auxz00_3230 = (BgL_varz00_bglt) (BgL_arg3575z00_2446);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1509))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_3230), BUNSPEC);
					}}
					BgL_auxz00_3202 = BgL_nodez00_1509;
					return (obj_t) (BgL_auxz00_3202);
				}
			}
		}
	}



/* inline-node-make-box3398 */
	obj_t BGl_inlinezd2nodezd2makezd2box3398zd2zzinline_inlinez00(obj_t
		BgL_envz00_2673, obj_t BgL_nodez00_2674, obj_t BgL_kfactorz00_2675,
		obj_t BgL_stackz00_2676)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 215 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1500;

				obj_t BgL_kfactorz00_1501;

				obj_t BgL_stackz00_1502;

				{	/* Inline/inline.scm 216 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_3235;

					BgL_nodez00_1500 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2674);
					BgL_kfactorz00_1501 = BgL_kfactorz00_2675;
					BgL_stackz00_1502 = BgL_stackz00_2676;
					{	/* Inline/inline.scm 216 */
						BgL_nodez00_bglt BgL_arg3572z00_2412;

						{	/* Inline/inline.scm 216 */
							BgL_nodez00_bglt BgL_arg3573z00_2413;

							BgL_arg3573z00_2413 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1500))->
								BgL_valuez00);
							{	/* Inline/inline.scm 216 */
								BgL_nodez00_bglt BgL_res3670z00_2443;

								{	/* Inline/inline.scm 216 */
									long BgL_kfactorz00_2416;

									BgL_kfactorz00_2416 = (long) CINT(BgL_kfactorz00_1501);
									{	/* Inline/inline.scm 216 */
										obj_t BgL_method3361z00_2418;

										{	/* Inline/inline.scm 216 */
											BgL_objectz00_bglt BgL_objz00_2419;

											BgL_objz00_2419 =
												(BgL_objectz00_bglt) (BgL_arg3573z00_2413);
											{	/* Inline/inline.scm 216 */
												long BgL_objzd2classzd2numz00_2420;

												BgL_objzd2classzd2numz00_2420 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2419);
												{	/* Inline/inline.scm 216 */
													obj_t BgL_arg2643z00_2421;

													BgL_arg2643z00_2421 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 216 */
														obj_t BgL_arrayz00_2423;

														int BgL_offsetz00_2424;

														BgL_arrayz00_2423 = BgL_arg2643z00_2421;
														BgL_offsetz00_2424 =
															(int) (BgL_objzd2classzd2numz00_2420);
														{	/* Inline/inline.scm 216 */
															long BgL_offsetz00_2425;

															BgL_offsetz00_2425 =
																((long) (BgL_offsetz00_2424) - OBJECT_TYPE);
															{	/* Inline/inline.scm 216 */
																long BgL_modz00_2426;

																{	/* Inline/inline.scm 216 */
																	int BgL_arg2645z00_2427;

																	BgL_arg2645z00_2427 = (int) (((long) 16));
																	{	/* Inline/inline.scm 216 */
																		long BgL_auxz00_3246;

																		BgL_auxz00_3246 =
																			(long) (BgL_arg2645z00_2427);
																		BgL_modz00_2426 =
																			(BgL_offsetz00_2425 / BgL_auxz00_3246);
																}}
																{	/* Inline/inline.scm 216 */
																	long BgL_restz00_2428;

																	{	/* Inline/inline.scm 216 */
																		int BgL_arg2644z00_2429;

																		BgL_arg2644z00_2429 = (int) (((long) 16));
																		{	/* Inline/inline.scm 216 */
																			long BgL_auxz00_3250;

																			BgL_auxz00_3250 =
																				(long) (BgL_arg2644z00_2429);
																			BgL_restz00_2428 =
																				(BgL_offsetz00_2425 % BgL_auxz00_3250);
																	}}
																	{	/* Inline/inline.scm 216 */

																		BgL_method3361z00_2418 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2423,
																				(int) (BgL_modz00_2426)),
																			(int) (BgL_restz00_2428));
										}}}}}}}}
										BgL_res3670z00_2443 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_2418) (BgL_method3361z00_2418,
												(obj_t) (BgL_arg3573z00_2413),
												BINT(BgL_kfactorz00_2416), BgL_stackz00_1502, BEOA));
								}}
								BgL_arg3572z00_2412 = BgL_res3670z00_2443;
						}}
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1500))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3572z00_2412), BUNSPEC);
					}
					BgL_auxz00_3235 = BgL_nodez00_1500;
					return (obj_t) (BgL_auxz00_3235);
				}
			}
		}
	}



/* inline-node-jump-ex-3396 */
	obj_t BGl_inlinezd2nodezd2jumpzd2exzd23396z00zzinline_inlinez00(obj_t
		BgL_envz00_2677, obj_t BgL_nodez00_2678, obj_t BgL_kfactorz00_2679,
		obj_t BgL_stackz00_2680)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 206 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1488;

				obj_t BgL_kfactorz00_1489;

				obj_t BgL_stackz00_1490;

				{	/* Inline/inline.scm 207 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_3265;

					BgL_nodez00_1488 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2678);
					BgL_kfactorz00_1489 = BgL_kfactorz00_2679;
					BgL_stackz00_1490 = BgL_stackz00_2680;
					{	/* Inline/inline.scm 208 */
						BgL_nodez00_bglt BgL_arg3567z00_1494;

						{	/* Inline/inline.scm 208 */
							BgL_nodez00_bglt BgL_arg3568z00_1495;

							BgL_arg3568z00_1495 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1488))->
								BgL_exitz00);
							{	/* Inline/inline.scm 208 */
								BgL_nodez00_bglt BgL_res3664z00_2377;

								{	/* Inline/inline.scm 208 */
									long BgL_kfactorz00_2350;

									BgL_kfactorz00_2350 = (long) CINT(BgL_kfactorz00_1489);
									{	/* Inline/inline.scm 208 */
										obj_t BgL_method3361z00_2352;

										{	/* Inline/inline.scm 208 */
											BgL_objectz00_bglt BgL_objz00_2353;

											BgL_objz00_2353 =
												(BgL_objectz00_bglt) (BgL_arg3568z00_1495);
											{	/* Inline/inline.scm 208 */
												long BgL_objzd2classzd2numz00_2354;

												BgL_objzd2classzd2numz00_2354 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2353);
												{	/* Inline/inline.scm 208 */
													obj_t BgL_arg2643z00_2355;

													BgL_arg2643z00_2355 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 208 */
														obj_t BgL_arrayz00_2357;

														int BgL_offsetz00_2358;

														BgL_arrayz00_2357 = BgL_arg2643z00_2355;
														BgL_offsetz00_2358 =
															(int) (BgL_objzd2classzd2numz00_2354);
														{	/* Inline/inline.scm 208 */
															long BgL_offsetz00_2359;

															BgL_offsetz00_2359 =
																((long) (BgL_offsetz00_2358) - OBJECT_TYPE);
															{	/* Inline/inline.scm 208 */
																long BgL_modz00_2360;

																{	/* Inline/inline.scm 208 */
																	int BgL_arg2645z00_2361;

																	BgL_arg2645z00_2361 = (int) (((long) 16));
																	{	/* Inline/inline.scm 208 */
																		long BgL_auxz00_3276;

																		BgL_auxz00_3276 =
																			(long) (BgL_arg2645z00_2361);
																		BgL_modz00_2360 =
																			(BgL_offsetz00_2359 / BgL_auxz00_3276);
																}}
																{	/* Inline/inline.scm 208 */
																	long BgL_restz00_2362;

																	{	/* Inline/inline.scm 208 */
																		int BgL_arg2644z00_2363;

																		BgL_arg2644z00_2363 = (int) (((long) 16));
																		{	/* Inline/inline.scm 208 */
																			long BgL_auxz00_3280;

																			BgL_auxz00_3280 =
																				(long) (BgL_arg2644z00_2363);
																			BgL_restz00_2362 =
																				(BgL_offsetz00_2359 % BgL_auxz00_3280);
																	}}
																	{	/* Inline/inline.scm 208 */

																		BgL_method3361z00_2352 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2357,
																				(int) (BgL_modz00_2360)),
																			(int) (BgL_restz00_2362));
										}}}}}}}}
										BgL_res3664z00_2377 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_2352) (BgL_method3361z00_2352,
												(obj_t) (BgL_arg3568z00_1495),
												BINT(BgL_kfactorz00_2350), BgL_stackz00_1490, BEOA));
								}}
								BgL_arg3567z00_1494 = BgL_res3664z00_2377;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1488))->
								BgL_exitz00) =
							((BgL_nodez00_bglt) BgL_arg3567z00_1494), BUNSPEC);
					}
					{	/* Inline/inline.scm 209 */
						BgL_nodez00_bglt BgL_arg3569z00_1496;

						{	/* Inline/inline.scm 209 */
							BgL_nodez00_bglt BgL_arg3570z00_1497;

							BgL_arg3570z00_1497 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1488))->
								BgL_valuez00);
							{	/* Inline/inline.scm 209 */
								BgL_nodez00_bglt BgL_res3667z00_2409;

								{	/* Inline/inline.scm 209 */
									long BgL_kfactorz00_2382;

									BgL_kfactorz00_2382 = (long) CINT(BgL_kfactorz00_1489);
									{	/* Inline/inline.scm 209 */
										obj_t BgL_method3361z00_2384;

										{	/* Inline/inline.scm 209 */
											BgL_objectz00_bglt BgL_objz00_2385;

											BgL_objz00_2385 =
												(BgL_objectz00_bglt) (BgL_arg3570z00_1497);
											{	/* Inline/inline.scm 209 */
												long BgL_objzd2classzd2numz00_2386;

												BgL_objzd2classzd2numz00_2386 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2385);
												{	/* Inline/inline.scm 209 */
													obj_t BgL_arg2643z00_2387;

													BgL_arg2643z00_2387 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 209 */
														obj_t BgL_arrayz00_2389;

														int BgL_offsetz00_2390;

														BgL_arrayz00_2389 = BgL_arg2643z00_2387;
														BgL_offsetz00_2390 =
															(int) (BgL_objzd2classzd2numz00_2386);
														{	/* Inline/inline.scm 209 */
															long BgL_offsetz00_2391;

															BgL_offsetz00_2391 =
																((long) (BgL_offsetz00_2390) - OBJECT_TYPE);
															{	/* Inline/inline.scm 209 */
																long BgL_modz00_2392;

																{	/* Inline/inline.scm 209 */
																	int BgL_arg2645z00_2393;

																	BgL_arg2645z00_2393 = (int) (((long) 16));
																	{	/* Inline/inline.scm 209 */
																		long BgL_auxz00_3303;

																		BgL_auxz00_3303 =
																			(long) (BgL_arg2645z00_2393);
																		BgL_modz00_2392 =
																			(BgL_offsetz00_2391 / BgL_auxz00_3303);
																}}
																{	/* Inline/inline.scm 209 */
																	long BgL_restz00_2394;

																	{	/* Inline/inline.scm 209 */
																		int BgL_arg2644z00_2395;

																		BgL_arg2644z00_2395 = (int) (((long) 16));
																		{	/* Inline/inline.scm 209 */
																			long BgL_auxz00_3307;

																			BgL_auxz00_3307 =
																				(long) (BgL_arg2644z00_2395);
																			BgL_restz00_2394 =
																				(BgL_offsetz00_2391 % BgL_auxz00_3307);
																	}}
																	{	/* Inline/inline.scm 209 */

																		BgL_method3361z00_2384 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2389,
																				(int) (BgL_modz00_2392)),
																			(int) (BgL_restz00_2394));
										}}}}}}}}
										BgL_res3667z00_2409 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_2384) (BgL_method3361z00_2384,
												(obj_t) (BgL_arg3570z00_1497),
												BINT(BgL_kfactorz00_2382), BgL_stackz00_1490, BEOA));
								}}
								BgL_arg3569z00_1496 = BgL_res3667z00_2409;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1488))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3569z00_1496), BUNSPEC);
					}
					BgL_auxz00_3265 = BgL_nodez00_1488;
					return (obj_t) (BgL_auxz00_3265);
				}
			}
		}
	}



/* inline-node-set-ex-i3394 */
	obj_t BGl_inlinezd2nodezd2setzd2exzd2i3394z00zzinline_inlinez00(obj_t
		BgL_envz00_2681, obj_t BgL_nodez00_2682, obj_t BgL_kfactorz00_2683,
		obj_t BgL_stackz00_2684)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 199 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1479;

				obj_t BgL_kfactorz00_1480;

				obj_t BgL_stackz00_1481;

				{	/* Inline/inline.scm 200 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_3322;

					BgL_nodez00_1479 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2682);
					BgL_kfactorz00_1480 = BgL_kfactorz00_2683;
					BgL_stackz00_1481 = BgL_stackz00_2684;
					{	/* Inline/inline.scm 200 */
						BgL_nodez00_bglt BgL_arg3564z00_2314;

						{	/* Inline/inline.scm 200 */
							BgL_nodez00_bglt BgL_arg3565z00_2315;

							BgL_arg3565z00_2315 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1479))->
								BgL_bodyz00);
							{	/* Inline/inline.scm 200 */
								BgL_nodez00_bglt BgL_res3661z00_2345;

								{	/* Inline/inline.scm 200 */
									long BgL_kfactorz00_2318;

									BgL_kfactorz00_2318 = (long) CINT(BgL_kfactorz00_1480);
									{	/* Inline/inline.scm 200 */
										obj_t BgL_method3361z00_2320;

										{	/* Inline/inline.scm 200 */
											BgL_objectz00_bglt BgL_objz00_2321;

											BgL_objz00_2321 =
												(BgL_objectz00_bglt) (BgL_arg3565z00_2315);
											{	/* Inline/inline.scm 200 */
												long BgL_objzd2classzd2numz00_2322;

												BgL_objzd2classzd2numz00_2322 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2321);
												{	/* Inline/inline.scm 200 */
													obj_t BgL_arg2643z00_2323;

													BgL_arg2643z00_2323 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 200 */
														obj_t BgL_arrayz00_2325;

														int BgL_offsetz00_2326;

														BgL_arrayz00_2325 = BgL_arg2643z00_2323;
														BgL_offsetz00_2326 =
															(int) (BgL_objzd2classzd2numz00_2322);
														{	/* Inline/inline.scm 200 */
															long BgL_offsetz00_2327;

															BgL_offsetz00_2327 =
																((long) (BgL_offsetz00_2326) - OBJECT_TYPE);
															{	/* Inline/inline.scm 200 */
																long BgL_modz00_2328;

																{	/* Inline/inline.scm 200 */
																	int BgL_arg2645z00_2329;

																	BgL_arg2645z00_2329 = (int) (((long) 16));
																	{	/* Inline/inline.scm 200 */
																		long BgL_auxz00_3333;

																		BgL_auxz00_3333 =
																			(long) (BgL_arg2645z00_2329);
																		BgL_modz00_2328 =
																			(BgL_offsetz00_2327 / BgL_auxz00_3333);
																}}
																{	/* Inline/inline.scm 200 */
																	long BgL_restz00_2330;

																	{	/* Inline/inline.scm 200 */
																		int BgL_arg2644z00_2331;

																		BgL_arg2644z00_2331 = (int) (((long) 16));
																		{	/* Inline/inline.scm 200 */
																			long BgL_auxz00_3337;

																			BgL_auxz00_3337 =
																				(long) (BgL_arg2644z00_2331);
																			BgL_restz00_2330 =
																				(BgL_offsetz00_2327 % BgL_auxz00_3337);
																	}}
																	{	/* Inline/inline.scm 200 */

																		BgL_method3361z00_2320 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2325,
																				(int) (BgL_modz00_2328)),
																			(int) (BgL_restz00_2330));
										}}}}}}}}
										BgL_res3661z00_2345 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_2320) (BgL_method3361z00_2320,
												(obj_t) (BgL_arg3565z00_2315),
												BINT(BgL_kfactorz00_2318), BgL_stackz00_1481, BEOA));
								}}
								BgL_arg3564z00_2314 = BgL_res3661z00_2345;
						}}
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1479))->
								BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3564z00_2314), BUNSPEC);
					}
					BgL_auxz00_3322 = BgL_nodez00_1479;
					return (obj_t) (BgL_auxz00_3322);
				}
			}
		}
	}



/* inline-node-let-var3392 */
	obj_t BGl_inlinezd2nodezd2letzd2var3392zd2zzinline_inlinez00(obj_t
		BgL_envz00_2685, obj_t BgL_nodez00_2686, obj_t BgL_kfactorz00_2687,
		obj_t BgL_stackz00_2688)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 189 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1460;

				obj_t BgL_kfactorz00_1461;

				obj_t BgL_stackz00_1462;

				{	/* Inline/inline.scm 190 */
					BgL_letzd2varzd2_bglt BgL_auxz00_3352;

					BgL_nodez00_1460 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2686);
					BgL_kfactorz00_1461 = BgL_kfactorz00_2687;
					BgL_stackz00_1462 = BgL_stackz00_2688;
					{	/* Inline/inline.scm 190 */
						obj_t BgL_g3357z00_1465;

						BgL_g3357z00_1465 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1460))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3355z00_1467;

							BgL_l3355z00_1467 = BgL_g3357z00_1465;
						BgL_zc3anonymousza33556ze3z83_1468:
							if (PAIRP(BgL_l3355z00_1467))
								{	/* Inline/inline.scm 192 */
									{	/* Inline/inline.scm 191 */
										obj_t BgL_bindingz00_1470;

										BgL_bindingz00_1470 = CAR(BgL_l3355z00_1467);
										{	/* Inline/inline.scm 191 */
											BgL_nodez00_bglt BgL_arg3558z00_1471;

											{	/* Inline/inline.scm 191 */
												obj_t BgL_arg3559z00_1472;

												BgL_arg3559z00_1472 = CDR(BgL_bindingz00_1470);
												{	/* Inline/inline.scm 191 */
													BgL_nodez00_bglt BgL_res3655z00_2278;

													{	/* Inline/inline.scm 191 */
														BgL_nodez00_bglt BgL_nodez00_2250;

														long BgL_kfactorz00_2251;

														BgL_nodez00_2250 =
															(BgL_nodez00_bglt) (BgL_arg3559z00_1472);
														BgL_kfactorz00_2251 =
															(long) CINT(BgL_kfactorz00_1461);
														{	/* Inline/inline.scm 191 */
															obj_t BgL_method3361z00_2253;

															{	/* Inline/inline.scm 191 */
																BgL_objectz00_bglt BgL_objz00_2254;

																BgL_objz00_2254 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2250);
																{	/* Inline/inline.scm 191 */
																	long BgL_objzd2classzd2numz00_2255;

																	BgL_objzd2classzd2numz00_2255 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2254);
																	{	/* Inline/inline.scm 191 */
																		obj_t BgL_arg2643z00_2256;

																		BgL_arg2643z00_2256 =
																			PROCEDURE_REF
																			(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
																			(int) (((long) 1)));
																		{	/* Inline/inline.scm 191 */
																			obj_t BgL_arrayz00_2258;

																			int BgL_offsetz00_2259;

																			BgL_arrayz00_2258 = BgL_arg2643z00_2256;
																			BgL_offsetz00_2259 =
																				(int) (BgL_objzd2classzd2numz00_2255);
																			{	/* Inline/inline.scm 191 */
																				long BgL_offsetz00_2260;

																				BgL_offsetz00_2260 =
																					(
																					(long) (BgL_offsetz00_2259) -
																					OBJECT_TYPE);
																				{	/* Inline/inline.scm 191 */
																					long BgL_modz00_2261;

																					{	/* Inline/inline.scm 191 */
																						int BgL_arg2645z00_2262;

																						BgL_arg2645z00_2262 =
																							(int) (((long) 16));
																						{	/* Inline/inline.scm 191 */
																							long BgL_auxz00_3368;

																							BgL_auxz00_3368 =
																								(long) (BgL_arg2645z00_2262);
																							BgL_modz00_2261 =
																								(BgL_offsetz00_2260 /
																								BgL_auxz00_3368);
																					}}
																					{	/* Inline/inline.scm 191 */
																						long BgL_restz00_2263;

																						{	/* Inline/inline.scm 191 */
																							int BgL_arg2644z00_2264;

																							BgL_arg2644z00_2264 =
																								(int) (((long) 16));
																							{	/* Inline/inline.scm 191 */
																								long BgL_auxz00_3372;

																								BgL_auxz00_3372 =
																									(long) (BgL_arg2644z00_2264);
																								BgL_restz00_2263 =
																									(BgL_offsetz00_2260 %
																									BgL_auxz00_3372);
																						}}
																						{	/* Inline/inline.scm 191 */

																							BgL_method3361z00_2253 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2258,
																									(int) (BgL_modz00_2261)),
																								(int) (BgL_restz00_2263));
															}}}}}}}}
															BgL_res3655z00_2278 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3361z00_2253)
																(BgL_method3361z00_2253,
																	(obj_t) (BgL_nodez00_2250),
																	BINT(BgL_kfactorz00_2251), BgL_stackz00_1462,
																	BEOA));
													}}
													BgL_arg3558z00_1471 = BgL_res3655z00_2278;
											}}
											{	/* Inline/inline.scm 191 */
												obj_t BgL_auxz00_3384;

												BgL_auxz00_3384 = (obj_t) (BgL_arg3558z00_1471);
												SET_CDR(BgL_bindingz00_1470, BgL_auxz00_3384);
									}}}
									{
										obj_t BgL_l3355z00_3387;

										BgL_l3355z00_3387 = CDR(BgL_l3355z00_1467);
										BgL_l3355z00_1467 = BgL_l3355z00_3387;
										goto BgL_zc3anonymousza33556ze3z83_1468;
									}
								}
							else
								{	/* Inline/inline.scm 192 */
									((bool_t) 1);
								}
						}
					}
					{	/* Inline/inline.scm 193 */
						BgL_nodez00_bglt BgL_arg3561z00_1475;

						{	/* Inline/inline.scm 193 */
							BgL_nodez00_bglt BgL_arg3562z00_1476;

							BgL_arg3562z00_1476 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1460))->BgL_bodyz00);
							{	/* Inline/inline.scm 193 */
								BgL_nodez00_bglt BgL_res3658z00_2311;

								{	/* Inline/inline.scm 193 */
									long BgL_kfactorz00_2284;

									BgL_kfactorz00_2284 = (long) CINT(BgL_kfactorz00_1461);
									{	/* Inline/inline.scm 193 */
										obj_t BgL_method3361z00_2286;

										{	/* Inline/inline.scm 193 */
											BgL_objectz00_bglt BgL_objz00_2287;

											BgL_objz00_2287 =
												(BgL_objectz00_bglt) (BgL_arg3562z00_1476);
											{	/* Inline/inline.scm 193 */
												long BgL_objzd2classzd2numz00_2288;

												BgL_objzd2classzd2numz00_2288 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2287);
												{	/* Inline/inline.scm 193 */
													obj_t BgL_arg2643z00_2289;

													BgL_arg2643z00_2289 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 193 */
														obj_t BgL_arrayz00_2291;

														int BgL_offsetz00_2292;

														BgL_arrayz00_2291 = BgL_arg2643z00_2289;
														BgL_offsetz00_2292 =
															(int) (BgL_objzd2classzd2numz00_2288);
														{	/* Inline/inline.scm 193 */
															long BgL_offsetz00_2293;

															BgL_offsetz00_2293 =
																((long) (BgL_offsetz00_2292) - OBJECT_TYPE);
															{	/* Inline/inline.scm 193 */
																long BgL_modz00_2294;

																{	/* Inline/inline.scm 193 */
																	int BgL_arg2645z00_2295;

																	BgL_arg2645z00_2295 = (int) (((long) 16));
																	{	/* Inline/inline.scm 193 */
																		long BgL_auxz00_3399;

																		BgL_auxz00_3399 =
																			(long) (BgL_arg2645z00_2295);
																		BgL_modz00_2294 =
																			(BgL_offsetz00_2293 / BgL_auxz00_3399);
																}}
																{	/* Inline/inline.scm 193 */
																	long BgL_restz00_2296;

																	{	/* Inline/inline.scm 193 */
																		int BgL_arg2644z00_2297;

																		BgL_arg2644z00_2297 = (int) (((long) 16));
																		{	/* Inline/inline.scm 193 */
																			long BgL_auxz00_3403;

																			BgL_auxz00_3403 =
																				(long) (BgL_arg2644z00_2297);
																			BgL_restz00_2296 =
																				(BgL_offsetz00_2293 % BgL_auxz00_3403);
																	}}
																	{	/* Inline/inline.scm 193 */

																		BgL_method3361z00_2286 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2291,
																				(int) (BgL_modz00_2294)),
																			(int) (BgL_restz00_2296));
										}}}}}}}}
										BgL_res3658z00_2311 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_2286) (BgL_method3361z00_2286,
												(obj_t) (BgL_arg3562z00_1476),
												BINT(BgL_kfactorz00_2284), BgL_stackz00_1462, BEOA));
								}}
								BgL_arg3561z00_1475 = BgL_res3658z00_2311;
						}}
						((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1460))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3561z00_1475), BUNSPEC);
					}
					BgL_auxz00_3352 = BgL_nodez00_1460;
					return (obj_t) (BgL_auxz00_3352);
				}
			}
		}
	}



/* inline-node-let-fun3390 */
	obj_t BGl_inlinezd2nodezd2letzd2fun3390zd2zzinline_inlinez00(obj_t
		BgL_envz00_2689, obj_t BgL_nodez00_2690, obj_t BgL_kfactorz00_2691,
		obj_t BgL_stackz00_2692)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 179 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1443;

				obj_t BgL_kfactorz00_1444;

				obj_t BgL_stackz00_1445;

				{	/* Inline/inline.scm 180 */
					BgL_letzd2funzd2_bglt BgL_auxz00_3418;

					BgL_nodez00_1443 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2690);
					BgL_kfactorz00_1444 = BgL_kfactorz00_2691;
					BgL_stackz00_1445 = BgL_stackz00_2692;
					{	/* Inline/inline.scm 180 */
						BgL_nodez00_bglt BgL_arg3550z00_1448;

						{	/* Inline/inline.scm 180 */
							BgL_nodez00_bglt BgL_arg3551z00_1449;

							BgL_arg3551z00_1449 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1443))->BgL_bodyz00);
							{	/* Inline/inline.scm 180 */
								BgL_nodez00_bglt BgL_res3652z00_2239;

								{	/* Inline/inline.scm 180 */
									long BgL_kfactorz00_2212;

									BgL_kfactorz00_2212 = (long) CINT(BgL_kfactorz00_1444);
									{	/* Inline/inline.scm 180 */
										obj_t BgL_method3361z00_2214;

										{	/* Inline/inline.scm 180 */
											BgL_objectz00_bglt BgL_objz00_2215;

											BgL_objz00_2215 =
												(BgL_objectz00_bglt) (BgL_arg3551z00_1449);
											{	/* Inline/inline.scm 180 */
												long BgL_objzd2classzd2numz00_2216;

												BgL_objzd2classzd2numz00_2216 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2215);
												{	/* Inline/inline.scm 180 */
													obj_t BgL_arg2643z00_2217;

													BgL_arg2643z00_2217 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 180 */
														obj_t BgL_arrayz00_2219;

														int BgL_offsetz00_2220;

														BgL_arrayz00_2219 = BgL_arg2643z00_2217;
														BgL_offsetz00_2220 =
															(int) (BgL_objzd2classzd2numz00_2216);
														{	/* Inline/inline.scm 180 */
															long BgL_offsetz00_2221;

															BgL_offsetz00_2221 =
																((long) (BgL_offsetz00_2220) - OBJECT_TYPE);
															{	/* Inline/inline.scm 180 */
																long BgL_modz00_2222;

																{	/* Inline/inline.scm 180 */
																	int BgL_arg2645z00_2223;

																	BgL_arg2645z00_2223 = (int) (((long) 16));
																	{	/* Inline/inline.scm 180 */
																		long BgL_auxz00_3429;

																		BgL_auxz00_3429 =
																			(long) (BgL_arg2645z00_2223);
																		BgL_modz00_2222 =
																			(BgL_offsetz00_2221 / BgL_auxz00_3429);
																}}
																{	/* Inline/inline.scm 180 */
																	long BgL_restz00_2224;

																	{	/* Inline/inline.scm 180 */
																		int BgL_arg2644z00_2225;

																		BgL_arg2644z00_2225 = (int) (((long) 16));
																		{	/* Inline/inline.scm 180 */
																			long BgL_auxz00_3433;

																			BgL_auxz00_3433 =
																				(long) (BgL_arg2644z00_2225);
																			BgL_restz00_2224 =
																				(BgL_offsetz00_2221 % BgL_auxz00_3433);
																	}}
																	{	/* Inline/inline.scm 180 */

																		BgL_method3361z00_2214 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2219,
																				(int) (BgL_modz00_2222)),
																			(int) (BgL_restz00_2224));
										}}}}}}}}
										BgL_res3652z00_2239 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_2214) (BgL_method3361z00_2214,
												(obj_t) (BgL_arg3551z00_1449),
												BINT(BgL_kfactorz00_2212), BgL_stackz00_1445, BEOA));
								}}
								BgL_arg3550z00_1448 = BgL_res3652z00_2239;
						}}
						((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1443))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3550z00_1448), BUNSPEC);
					}
					{	/* Inline/inline.scm 181 */
						obj_t BgL_g3354z00_1450;

						BgL_g3354z00_1450 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1443))->BgL_localsz00);
						{
							obj_t BgL_l3352z00_1452;

							BgL_l3352z00_1452 = BgL_g3354z00_1450;
						BgL_zc3anonymousza33552ze3z83_1453:
							if (PAIRP(BgL_l3352z00_1452))
								{	/* Inline/inline.scm 183 */
									{	/* Inline/inline.scm 182 */
										obj_t BgL_localz00_1455;

										BgL_localz00_1455 = CAR(BgL_l3352z00_1452);
										BGl_inlinezd2sfunz12zc0zzinline_inlinez00(
											(BgL_variablez00_bglt) (BgL_localz00_1455),
											(long) CINT(BgL_kfactorz00_1444), BgL_stackz00_1445);
									}
									{
										obj_t BgL_l3352z00_3453;

										BgL_l3352z00_3453 = CDR(BgL_l3352z00_1452);
										BgL_l3352z00_1452 = BgL_l3352z00_3453;
										goto BgL_zc3anonymousza33552ze3z83_1453;
									}
								}
							else
								{	/* Inline/inline.scm 183 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_3418 = BgL_nodez00_1443;
					return (obj_t) (BgL_auxz00_3418);
				}
			}
		}
	}



/* inline-node-select3388 */
	obj_t BGl_inlinezd2nodezd2select3388z00zzinline_inlinez00(obj_t
		BgL_envz00_2693, obj_t BgL_nodez00_2694, obj_t BgL_kfactorz00_2695,
		obj_t BgL_stackz00_2696)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 169 */
			{
				BgL_selectz00_bglt BgL_nodez00_1424;

				obj_t BgL_kfactorz00_1425;

				obj_t BgL_stackz00_1426;

				{	/* Inline/inline.scm 170 */
					BgL_selectz00_bglt BgL_auxz00_3457;

					BgL_nodez00_1424 = (BgL_selectz00_bglt) (BgL_nodez00_2694);
					BgL_kfactorz00_1425 = BgL_kfactorz00_2695;
					BgL_stackz00_1426 = BgL_stackz00_2696;
					{	/* Inline/inline.scm 170 */
						BgL_nodez00_bglt BgL_arg3542z00_1429;

						{	/* Inline/inline.scm 170 */
							BgL_nodez00_bglt BgL_arg3543z00_1430;

							BgL_arg3543z00_1430 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1424))->BgL_testz00);
							{	/* Inline/inline.scm 170 */
								BgL_nodez00_bglt BgL_res3646z00_2171;

								{	/* Inline/inline.scm 170 */
									long BgL_kfactorz00_2144;

									BgL_kfactorz00_2144 = (long) CINT(BgL_kfactorz00_1425);
									{	/* Inline/inline.scm 170 */
										obj_t BgL_method3361z00_2146;

										{	/* Inline/inline.scm 170 */
											BgL_objectz00_bglt BgL_objz00_2147;

											BgL_objz00_2147 =
												(BgL_objectz00_bglt) (BgL_arg3543z00_1430);
											{	/* Inline/inline.scm 170 */
												long BgL_objzd2classzd2numz00_2148;

												BgL_objzd2classzd2numz00_2148 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2147);
												{	/* Inline/inline.scm 170 */
													obj_t BgL_arg2643z00_2149;

													BgL_arg2643z00_2149 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 170 */
														obj_t BgL_arrayz00_2151;

														int BgL_offsetz00_2152;

														BgL_arrayz00_2151 = BgL_arg2643z00_2149;
														BgL_offsetz00_2152 =
															(int) (BgL_objzd2classzd2numz00_2148);
														{	/* Inline/inline.scm 170 */
															long BgL_offsetz00_2153;

															BgL_offsetz00_2153 =
																((long) (BgL_offsetz00_2152) - OBJECT_TYPE);
															{	/* Inline/inline.scm 170 */
																long BgL_modz00_2154;

																{	/* Inline/inline.scm 170 */
																	int BgL_arg2645z00_2155;

																	BgL_arg2645z00_2155 = (int) (((long) 16));
																	{	/* Inline/inline.scm 170 */
																		long BgL_auxz00_3468;

																		BgL_auxz00_3468 =
																			(long) (BgL_arg2645z00_2155);
																		BgL_modz00_2154 =
																			(BgL_offsetz00_2153 / BgL_auxz00_3468);
																}}
																{	/* Inline/inline.scm 170 */
																	long BgL_restz00_2156;

																	{	/* Inline/inline.scm 170 */
																		int BgL_arg2644z00_2157;

																		BgL_arg2644z00_2157 = (int) (((long) 16));
																		{	/* Inline/inline.scm 170 */
																			long BgL_auxz00_3472;

																			BgL_auxz00_3472 =
																				(long) (BgL_arg2644z00_2157);
																			BgL_restz00_2156 =
																				(BgL_offsetz00_2153 % BgL_auxz00_3472);
																	}}
																	{	/* Inline/inline.scm 170 */

																		BgL_method3361z00_2146 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2151,
																				(int) (BgL_modz00_2154)),
																			(int) (BgL_restz00_2156));
										}}}}}}}}
										BgL_res3646z00_2171 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_2146) (BgL_method3361z00_2146,
												(obj_t) (BgL_arg3543z00_1430),
												BINT(BgL_kfactorz00_2144), BgL_stackz00_1426, BEOA));
								}}
								BgL_arg3542z00_1429 = BgL_res3646z00_2171;
						}}
						((((BgL_selectz00_bglt) CREF(BgL_nodez00_1424))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3542z00_1429), BUNSPEC);
					}
					{	/* Inline/inline.scm 171 */
						obj_t BgL_g3351z00_1431;

						BgL_g3351z00_1431 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1424))->BgL_clausesz00);
						{
							obj_t BgL_l3349z00_1433;

							BgL_l3349z00_1433 = BgL_g3351z00_1431;
						BgL_zc3anonymousza33544ze3z83_1434:
							if (PAIRP(BgL_l3349z00_1433))
								{	/* Inline/inline.scm 173 */
									{	/* Inline/inline.scm 172 */
										obj_t BgL_clausez00_1436;

										BgL_clausez00_1436 = CAR(BgL_l3349z00_1433);
										{	/* Inline/inline.scm 172 */
											BgL_nodez00_bglt BgL_arg3546z00_1437;

											{	/* Inline/inline.scm 172 */
												obj_t BgL_arg3547z00_1438;

												BgL_arg3547z00_1438 = CDR(BgL_clausez00_1436);
												{	/* Inline/inline.scm 172 */
													BgL_nodez00_bglt BgL_res3649z00_2206;

													{	/* Inline/inline.scm 172 */
														BgL_nodez00_bglt BgL_nodez00_2178;

														long BgL_kfactorz00_2179;

														BgL_nodez00_2178 =
															(BgL_nodez00_bglt) (BgL_arg3547z00_1438);
														BgL_kfactorz00_2179 =
															(long) CINT(BgL_kfactorz00_1425);
														{	/* Inline/inline.scm 172 */
															obj_t BgL_method3361z00_2181;

															{	/* Inline/inline.scm 172 */
																BgL_objectz00_bglt BgL_objz00_2182;

																BgL_objz00_2182 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2178);
																{	/* Inline/inline.scm 172 */
																	long BgL_objzd2classzd2numz00_2183;

																	BgL_objzd2classzd2numz00_2183 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2182);
																	{	/* Inline/inline.scm 172 */
																		obj_t BgL_arg2643z00_2184;

																		BgL_arg2643z00_2184 =
																			PROCEDURE_REF
																			(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
																			(int) (((long) 1)));
																		{	/* Inline/inline.scm 172 */
																			obj_t BgL_arrayz00_2186;

																			int BgL_offsetz00_2187;

																			BgL_arrayz00_2186 = BgL_arg2643z00_2184;
																			BgL_offsetz00_2187 =
																				(int) (BgL_objzd2classzd2numz00_2183);
																			{	/* Inline/inline.scm 172 */
																				long BgL_offsetz00_2188;

																				BgL_offsetz00_2188 =
																					(
																					(long) (BgL_offsetz00_2187) -
																					OBJECT_TYPE);
																				{	/* Inline/inline.scm 172 */
																					long BgL_modz00_2189;

																					{	/* Inline/inline.scm 172 */
																						int BgL_arg2645z00_2190;

																						BgL_arg2645z00_2190 =
																							(int) (((long) 16));
																						{	/* Inline/inline.scm 172 */
																							long BgL_auxz00_3500;

																							BgL_auxz00_3500 =
																								(long) (BgL_arg2645z00_2190);
																							BgL_modz00_2189 =
																								(BgL_offsetz00_2188 /
																								BgL_auxz00_3500);
																					}}
																					{	/* Inline/inline.scm 172 */
																						long BgL_restz00_2191;

																						{	/* Inline/inline.scm 172 */
																							int BgL_arg2644z00_2192;

																							BgL_arg2644z00_2192 =
																								(int) (((long) 16));
																							{	/* Inline/inline.scm 172 */
																								long BgL_auxz00_3504;

																								BgL_auxz00_3504 =
																									(long) (BgL_arg2644z00_2192);
																								BgL_restz00_2191 =
																									(BgL_offsetz00_2188 %
																									BgL_auxz00_3504);
																						}}
																						{	/* Inline/inline.scm 172 */

																							BgL_method3361z00_2181 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2186,
																									(int) (BgL_modz00_2189)),
																								(int) (BgL_restz00_2191));
															}}}}}}}}
															BgL_res3649z00_2206 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3361z00_2181)
																(BgL_method3361z00_2181,
																	(obj_t) (BgL_nodez00_2178),
																	BINT(BgL_kfactorz00_2179), BgL_stackz00_1426,
																	BEOA));
													}}
													BgL_arg3546z00_1437 = BgL_res3649z00_2206;
											}}
											{	/* Inline/inline.scm 172 */
												obj_t BgL_auxz00_3516;

												BgL_auxz00_3516 = (obj_t) (BgL_arg3546z00_1437);
												SET_CDR(BgL_clausez00_1436, BgL_auxz00_3516);
									}}}
									{
										obj_t BgL_l3349z00_3519;

										BgL_l3349z00_3519 = CDR(BgL_l3349z00_1433);
										BgL_l3349z00_1433 = BgL_l3349z00_3519;
										goto BgL_zc3anonymousza33544ze3z83_1434;
									}
								}
							else
								{	/* Inline/inline.scm 173 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_3457 = BgL_nodez00_1424;
					return (obj_t) (BgL_auxz00_3457);
				}
			}
		}
	}



/* inline-node-fail3386 */
	obj_t BGl_inlinezd2nodezd2fail3386z00zzinline_inlinez00(obj_t BgL_envz00_2697,
		obj_t BgL_nodez00_2698, obj_t BgL_kfactorz00_2699, obj_t BgL_stackz00_2700)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 159 */
			{
				BgL_failz00_bglt BgL_nodez00_1410;

				obj_t BgL_kfactorz00_1411;

				obj_t BgL_stackz00_1412;

				{	/* Inline/inline.scm 160 */
					BgL_failz00_bglt BgL_auxz00_3523;

					BgL_nodez00_1410 = (BgL_failz00_bglt) (BgL_nodez00_2698);
					BgL_kfactorz00_1411 = BgL_kfactorz00_2699;
					BgL_stackz00_1412 = BgL_stackz00_2700;
					{	/* Inline/inline.scm 161 */
						BgL_nodez00_bglt BgL_arg3535z00_1416;

						{	/* Inline/inline.scm 161 */
							BgL_nodez00_bglt BgL_arg3536z00_1417;

							BgL_arg3536z00_1417 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1410))->BgL_procz00);
							{	/* Inline/inline.scm 161 */
								BgL_nodez00_bglt BgL_res3637z00_2075;

								{	/* Inline/inline.scm 161 */
									long BgL_kfactorz00_2048;

									BgL_kfactorz00_2048 = (long) CINT(BgL_kfactorz00_1411);
									{	/* Inline/inline.scm 161 */
										obj_t BgL_method3361z00_2050;

										{	/* Inline/inline.scm 161 */
											BgL_objectz00_bglt BgL_objz00_2051;

											BgL_objz00_2051 =
												(BgL_objectz00_bglt) (BgL_arg3536z00_1417);
											{	/* Inline/inline.scm 161 */
												long BgL_objzd2classzd2numz00_2052;

												BgL_objzd2classzd2numz00_2052 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2051);
												{	/* Inline/inline.scm 161 */
													obj_t BgL_arg2643z00_2053;

													BgL_arg2643z00_2053 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 161 */
														obj_t BgL_arrayz00_2055;

														int BgL_offsetz00_2056;

														BgL_arrayz00_2055 = BgL_arg2643z00_2053;
														BgL_offsetz00_2056 =
															(int) (BgL_objzd2classzd2numz00_2052);
														{	/* Inline/inline.scm 161 */
															long BgL_offsetz00_2057;

															BgL_offsetz00_2057 =
																((long) (BgL_offsetz00_2056) - OBJECT_TYPE);
															{	/* Inline/inline.scm 161 */
																long BgL_modz00_2058;

																{	/* Inline/inline.scm 161 */
																	int BgL_arg2645z00_2059;

																	BgL_arg2645z00_2059 = (int) (((long) 16));
																	{	/* Inline/inline.scm 161 */
																		long BgL_auxz00_3534;

																		BgL_auxz00_3534 =
																			(long) (BgL_arg2645z00_2059);
																		BgL_modz00_2058 =
																			(BgL_offsetz00_2057 / BgL_auxz00_3534);
																}}
																{	/* Inline/inline.scm 161 */
																	long BgL_restz00_2060;

																	{	/* Inline/inline.scm 161 */
																		int BgL_arg2644z00_2061;

																		BgL_arg2644z00_2061 = (int) (((long) 16));
																		{	/* Inline/inline.scm 161 */
																			long BgL_auxz00_3538;

																			BgL_auxz00_3538 =
																				(long) (BgL_arg2644z00_2061);
																			BgL_restz00_2060 =
																				(BgL_offsetz00_2057 % BgL_auxz00_3538);
																	}}
																	{	/* Inline/inline.scm 161 */

																		BgL_method3361z00_2050 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2055,
																				(int) (BgL_modz00_2058)),
																			(int) (BgL_restz00_2060));
										}}}}}}}}
										BgL_res3637z00_2075 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_2050) (BgL_method3361z00_2050,
												(obj_t) (BgL_arg3536z00_1417),
												BINT(BgL_kfactorz00_2048), BgL_stackz00_1412, BEOA));
								}}
								BgL_arg3535z00_1416 = BgL_res3637z00_2075;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1410))->BgL_procz00) =
							((BgL_nodez00_bglt) BgL_arg3535z00_1416), BUNSPEC);
					}
					{	/* Inline/inline.scm 162 */
						BgL_nodez00_bglt BgL_arg3537z00_1418;

						{	/* Inline/inline.scm 162 */
							BgL_nodez00_bglt BgL_arg3538z00_1419;

							BgL_arg3538z00_1419 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1410))->BgL_msgz00);
							{	/* Inline/inline.scm 162 */
								BgL_nodez00_bglt BgL_res3640z00_2107;

								{	/* Inline/inline.scm 162 */
									long BgL_kfactorz00_2080;

									BgL_kfactorz00_2080 = (long) CINT(BgL_kfactorz00_1411);
									{	/* Inline/inline.scm 162 */
										obj_t BgL_method3361z00_2082;

										{	/* Inline/inline.scm 162 */
											BgL_objectz00_bglt BgL_objz00_2083;

											BgL_objz00_2083 =
												(BgL_objectz00_bglt) (BgL_arg3538z00_1419);
											{	/* Inline/inline.scm 162 */
												long BgL_objzd2classzd2numz00_2084;

												BgL_objzd2classzd2numz00_2084 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2083);
												{	/* Inline/inline.scm 162 */
													obj_t BgL_arg2643z00_2085;

													BgL_arg2643z00_2085 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 162 */
														obj_t BgL_arrayz00_2087;

														int BgL_offsetz00_2088;

														BgL_arrayz00_2087 = BgL_arg2643z00_2085;
														BgL_offsetz00_2088 =
															(int) (BgL_objzd2classzd2numz00_2084);
														{	/* Inline/inline.scm 162 */
															long BgL_offsetz00_2089;

															BgL_offsetz00_2089 =
																((long) (BgL_offsetz00_2088) - OBJECT_TYPE);
															{	/* Inline/inline.scm 162 */
																long BgL_modz00_2090;

																{	/* Inline/inline.scm 162 */
																	int BgL_arg2645z00_2091;

																	BgL_arg2645z00_2091 = (int) (((long) 16));
																	{	/* Inline/inline.scm 162 */
																		long BgL_auxz00_3561;

																		BgL_auxz00_3561 =
																			(long) (BgL_arg2645z00_2091);
																		BgL_modz00_2090 =
																			(BgL_offsetz00_2089 / BgL_auxz00_3561);
																}}
																{	/* Inline/inline.scm 162 */
																	long BgL_restz00_2092;

																	{	/* Inline/inline.scm 162 */
																		int BgL_arg2644z00_2093;

																		BgL_arg2644z00_2093 = (int) (((long) 16));
																		{	/* Inline/inline.scm 162 */
																			long BgL_auxz00_3565;

																			BgL_auxz00_3565 =
																				(long) (BgL_arg2644z00_2093);
																			BgL_restz00_2092 =
																				(BgL_offsetz00_2089 % BgL_auxz00_3565);
																	}}
																	{	/* Inline/inline.scm 162 */

																		BgL_method3361z00_2082 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2087,
																				(int) (BgL_modz00_2090)),
																			(int) (BgL_restz00_2092));
										}}}}}}}}
										BgL_res3640z00_2107 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_2082) (BgL_method3361z00_2082,
												(obj_t) (BgL_arg3538z00_1419),
												BINT(BgL_kfactorz00_2080), BgL_stackz00_1412, BEOA));
								}}
								BgL_arg3537z00_1418 = BgL_res3640z00_2107;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1410))->BgL_msgz00) =
							((BgL_nodez00_bglt) BgL_arg3537z00_1418), BUNSPEC);
					}
					{	/* Inline/inline.scm 163 */
						BgL_nodez00_bglt BgL_arg3539z00_1420;

						{	/* Inline/inline.scm 163 */
							BgL_nodez00_bglt BgL_arg3540z00_1421;

							BgL_arg3540z00_1421 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1410))->BgL_objz00);
							{	/* Inline/inline.scm 163 */
								BgL_nodez00_bglt BgL_res3643z00_2139;

								{	/* Inline/inline.scm 163 */
									long BgL_kfactorz00_2112;

									BgL_kfactorz00_2112 = (long) CINT(BgL_kfactorz00_1411);
									{	/* Inline/inline.scm 163 */
										obj_t BgL_method3361z00_2114;

										{	/* Inline/inline.scm 163 */
											BgL_objectz00_bglt BgL_objz00_2115;

											BgL_objz00_2115 =
												(BgL_objectz00_bglt) (BgL_arg3540z00_1421);
											{	/* Inline/inline.scm 163 */
												long BgL_objzd2classzd2numz00_2116;

												BgL_objzd2classzd2numz00_2116 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2115);
												{	/* Inline/inline.scm 163 */
													obj_t BgL_arg2643z00_2117;

													BgL_arg2643z00_2117 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 163 */
														obj_t BgL_arrayz00_2119;

														int BgL_offsetz00_2120;

														BgL_arrayz00_2119 = BgL_arg2643z00_2117;
														BgL_offsetz00_2120 =
															(int) (BgL_objzd2classzd2numz00_2116);
														{	/* Inline/inline.scm 163 */
															long BgL_offsetz00_2121;

															BgL_offsetz00_2121 =
																((long) (BgL_offsetz00_2120) - OBJECT_TYPE);
															{	/* Inline/inline.scm 163 */
																long BgL_modz00_2122;

																{	/* Inline/inline.scm 163 */
																	int BgL_arg2645z00_2123;

																	BgL_arg2645z00_2123 = (int) (((long) 16));
																	{	/* Inline/inline.scm 163 */
																		long BgL_auxz00_3588;

																		BgL_auxz00_3588 =
																			(long) (BgL_arg2645z00_2123);
																		BgL_modz00_2122 =
																			(BgL_offsetz00_2121 / BgL_auxz00_3588);
																}}
																{	/* Inline/inline.scm 163 */
																	long BgL_restz00_2124;

																	{	/* Inline/inline.scm 163 */
																		int BgL_arg2644z00_2125;

																		BgL_arg2644z00_2125 = (int) (((long) 16));
																		{	/* Inline/inline.scm 163 */
																			long BgL_auxz00_3592;

																			BgL_auxz00_3592 =
																				(long) (BgL_arg2644z00_2125);
																			BgL_restz00_2124 =
																				(BgL_offsetz00_2121 % BgL_auxz00_3592);
																	}}
																	{	/* Inline/inline.scm 163 */

																		BgL_method3361z00_2114 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2119,
																				(int) (BgL_modz00_2122)),
																			(int) (BgL_restz00_2124));
										}}}}}}}}
										BgL_res3643z00_2139 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_2114) (BgL_method3361z00_2114,
												(obj_t) (BgL_arg3540z00_1421),
												BINT(BgL_kfactorz00_2112), BgL_stackz00_1412, BEOA));
								}}
								BgL_arg3539z00_1420 = BgL_res3643z00_2139;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1410))->BgL_objz00) =
							((BgL_nodez00_bglt) BgL_arg3539z00_1420), BUNSPEC);
					}
					BgL_auxz00_3523 = BgL_nodez00_1410;
					return (obj_t) (BgL_auxz00_3523);
				}
			}
		}
	}



/* inline-node-conditio3384 */
	obj_t BGl_inlinezd2nodezd2conditio3384z00zzinline_inlinez00(obj_t
		BgL_envz00_2701, obj_t BgL_nodez00_2702, obj_t BgL_kfactorz00_2703,
		obj_t BgL_stackz00_2704)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 149 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1396;

				obj_t BgL_kfactorz00_1397;

				obj_t BgL_stackz00_1398;

				{	/* Inline/inline.scm 150 */
					BgL_conditionalz00_bglt BgL_auxz00_3607;

					BgL_nodez00_1396 = (BgL_conditionalz00_bglt) (BgL_nodez00_2702);
					BgL_kfactorz00_1397 = BgL_kfactorz00_2703;
					BgL_stackz00_1398 = BgL_stackz00_2704;
					{	/* Inline/inline.scm 151 */
						BgL_nodez00_bglt BgL_arg3528z00_1402;

						{	/* Inline/inline.scm 151 */
							BgL_nodez00_bglt BgL_arg3529z00_1403;

							BgL_arg3529z00_1403 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1396))->
								BgL_testz00);
							{	/* Inline/inline.scm 151 */
								BgL_nodez00_bglt BgL_res3628z00_1979;

								{	/* Inline/inline.scm 151 */
									long BgL_kfactorz00_1952;

									BgL_kfactorz00_1952 = (long) CINT(BgL_kfactorz00_1397);
									{	/* Inline/inline.scm 151 */
										obj_t BgL_method3361z00_1954;

										{	/* Inline/inline.scm 151 */
											BgL_objectz00_bglt BgL_objz00_1955;

											BgL_objz00_1955 =
												(BgL_objectz00_bglt) (BgL_arg3529z00_1403);
											{	/* Inline/inline.scm 151 */
												long BgL_objzd2classzd2numz00_1956;

												BgL_objzd2classzd2numz00_1956 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1955);
												{	/* Inline/inline.scm 151 */
													obj_t BgL_arg2643z00_1957;

													BgL_arg2643z00_1957 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 151 */
														obj_t BgL_arrayz00_1959;

														int BgL_offsetz00_1960;

														BgL_arrayz00_1959 = BgL_arg2643z00_1957;
														BgL_offsetz00_1960 =
															(int) (BgL_objzd2classzd2numz00_1956);
														{	/* Inline/inline.scm 151 */
															long BgL_offsetz00_1961;

															BgL_offsetz00_1961 =
																((long) (BgL_offsetz00_1960) - OBJECT_TYPE);
															{	/* Inline/inline.scm 151 */
																long BgL_modz00_1962;

																{	/* Inline/inline.scm 151 */
																	int BgL_arg2645z00_1963;

																	BgL_arg2645z00_1963 = (int) (((long) 16));
																	{	/* Inline/inline.scm 151 */
																		long BgL_auxz00_3618;

																		BgL_auxz00_3618 =
																			(long) (BgL_arg2645z00_1963);
																		BgL_modz00_1962 =
																			(BgL_offsetz00_1961 / BgL_auxz00_3618);
																}}
																{	/* Inline/inline.scm 151 */
																	long BgL_restz00_1964;

																	{	/* Inline/inline.scm 151 */
																		int BgL_arg2644z00_1965;

																		BgL_arg2644z00_1965 = (int) (((long) 16));
																		{	/* Inline/inline.scm 151 */
																			long BgL_auxz00_3622;

																			BgL_auxz00_3622 =
																				(long) (BgL_arg2644z00_1965);
																			BgL_restz00_1964 =
																				(BgL_offsetz00_1961 % BgL_auxz00_3622);
																	}}
																	{	/* Inline/inline.scm 151 */

																		BgL_method3361z00_1954 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1959,
																				(int) (BgL_modz00_1962)),
																			(int) (BgL_restz00_1964));
										}}}}}}}}
										BgL_res3628z00_1979 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_1954) (BgL_method3361z00_1954,
												(obj_t) (BgL_arg3529z00_1403),
												BINT(BgL_kfactorz00_1952), BgL_stackz00_1398, BEOA));
								}}
								BgL_arg3528z00_1402 = BgL_res3628z00_1979;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1396))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3528z00_1402), BUNSPEC);
					}
					{	/* Inline/inline.scm 152 */
						BgL_nodez00_bglt BgL_arg3530z00_1404;

						{	/* Inline/inline.scm 152 */
							BgL_nodez00_bglt BgL_arg3531z00_1405;

							BgL_arg3531z00_1405 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1396))->
								BgL_truez00);
							{	/* Inline/inline.scm 152 */
								BgL_nodez00_bglt BgL_res3631z00_2011;

								{	/* Inline/inline.scm 152 */
									long BgL_kfactorz00_1984;

									BgL_kfactorz00_1984 = (long) CINT(BgL_kfactorz00_1397);
									{	/* Inline/inline.scm 152 */
										obj_t BgL_method3361z00_1986;

										{	/* Inline/inline.scm 152 */
											BgL_objectz00_bglt BgL_objz00_1987;

											BgL_objz00_1987 =
												(BgL_objectz00_bglt) (BgL_arg3531z00_1405);
											{	/* Inline/inline.scm 152 */
												long BgL_objzd2classzd2numz00_1988;

												BgL_objzd2classzd2numz00_1988 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1987);
												{	/* Inline/inline.scm 152 */
													obj_t BgL_arg2643z00_1989;

													BgL_arg2643z00_1989 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 152 */
														obj_t BgL_arrayz00_1991;

														int BgL_offsetz00_1992;

														BgL_arrayz00_1991 = BgL_arg2643z00_1989;
														BgL_offsetz00_1992 =
															(int) (BgL_objzd2classzd2numz00_1988);
														{	/* Inline/inline.scm 152 */
															long BgL_offsetz00_1993;

															BgL_offsetz00_1993 =
																((long) (BgL_offsetz00_1992) - OBJECT_TYPE);
															{	/* Inline/inline.scm 152 */
																long BgL_modz00_1994;

																{	/* Inline/inline.scm 152 */
																	int BgL_arg2645z00_1995;

																	BgL_arg2645z00_1995 = (int) (((long) 16));
																	{	/* Inline/inline.scm 152 */
																		long BgL_auxz00_3645;

																		BgL_auxz00_3645 =
																			(long) (BgL_arg2645z00_1995);
																		BgL_modz00_1994 =
																			(BgL_offsetz00_1993 / BgL_auxz00_3645);
																}}
																{	/* Inline/inline.scm 152 */
																	long BgL_restz00_1996;

																	{	/* Inline/inline.scm 152 */
																		int BgL_arg2644z00_1997;

																		BgL_arg2644z00_1997 = (int) (((long) 16));
																		{	/* Inline/inline.scm 152 */
																			long BgL_auxz00_3649;

																			BgL_auxz00_3649 =
																				(long) (BgL_arg2644z00_1997);
																			BgL_restz00_1996 =
																				(BgL_offsetz00_1993 % BgL_auxz00_3649);
																	}}
																	{	/* Inline/inline.scm 152 */

																		BgL_method3361z00_1986 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1991,
																				(int) (BgL_modz00_1994)),
																			(int) (BgL_restz00_1996));
										}}}}}}}}
										BgL_res3631z00_2011 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_1986) (BgL_method3361z00_1986,
												(obj_t) (BgL_arg3531z00_1405),
												BINT(BgL_kfactorz00_1984), BgL_stackz00_1398, BEOA));
								}}
								BgL_arg3530z00_1404 = BgL_res3631z00_2011;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1396))->BgL_truez00) =
							((BgL_nodez00_bglt) BgL_arg3530z00_1404), BUNSPEC);
					}
					{	/* Inline/inline.scm 153 */
						BgL_nodez00_bglt BgL_arg3532z00_1406;

						{	/* Inline/inline.scm 153 */
							BgL_nodez00_bglt BgL_arg3533z00_1407;

							BgL_arg3533z00_1407 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1396))->
								BgL_falsez00);
							{	/* Inline/inline.scm 153 */
								BgL_nodez00_bglt BgL_res3634z00_2043;

								{	/* Inline/inline.scm 153 */
									long BgL_kfactorz00_2016;

									BgL_kfactorz00_2016 = (long) CINT(BgL_kfactorz00_1397);
									{	/* Inline/inline.scm 153 */
										obj_t BgL_method3361z00_2018;

										{	/* Inline/inline.scm 153 */
											BgL_objectz00_bglt BgL_objz00_2019;

											BgL_objz00_2019 =
												(BgL_objectz00_bglt) (BgL_arg3533z00_1407);
											{	/* Inline/inline.scm 153 */
												long BgL_objzd2classzd2numz00_2020;

												BgL_objzd2classzd2numz00_2020 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2019);
												{	/* Inline/inline.scm 153 */
													obj_t BgL_arg2643z00_2021;

													BgL_arg2643z00_2021 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 153 */
														obj_t BgL_arrayz00_2023;

														int BgL_offsetz00_2024;

														BgL_arrayz00_2023 = BgL_arg2643z00_2021;
														BgL_offsetz00_2024 =
															(int) (BgL_objzd2classzd2numz00_2020);
														{	/* Inline/inline.scm 153 */
															long BgL_offsetz00_2025;

															BgL_offsetz00_2025 =
																((long) (BgL_offsetz00_2024) - OBJECT_TYPE);
															{	/* Inline/inline.scm 153 */
																long BgL_modz00_2026;

																{	/* Inline/inline.scm 153 */
																	int BgL_arg2645z00_2027;

																	BgL_arg2645z00_2027 = (int) (((long) 16));
																	{	/* Inline/inline.scm 153 */
																		long BgL_auxz00_3672;

																		BgL_auxz00_3672 =
																			(long) (BgL_arg2645z00_2027);
																		BgL_modz00_2026 =
																			(BgL_offsetz00_2025 / BgL_auxz00_3672);
																}}
																{	/* Inline/inline.scm 153 */
																	long BgL_restz00_2028;

																	{	/* Inline/inline.scm 153 */
																		int BgL_arg2644z00_2029;

																		BgL_arg2644z00_2029 = (int) (((long) 16));
																		{	/* Inline/inline.scm 153 */
																			long BgL_auxz00_3676;

																			BgL_auxz00_3676 =
																				(long) (BgL_arg2644z00_2029);
																			BgL_restz00_2028 =
																				(BgL_offsetz00_2025 % BgL_auxz00_3676);
																	}}
																	{	/* Inline/inline.scm 153 */

																		BgL_method3361z00_2018 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2023,
																				(int) (BgL_modz00_2026)),
																			(int) (BgL_restz00_2028));
										}}}}}}}}
										BgL_res3634z00_2043 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_2018) (BgL_method3361z00_2018,
												(obj_t) (BgL_arg3533z00_1407),
												BINT(BgL_kfactorz00_2016), BgL_stackz00_1398, BEOA));
								}}
								BgL_arg3532z00_1406 = BgL_res3634z00_2043;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1396))->
								BgL_falsez00) =
							((BgL_nodez00_bglt) BgL_arg3532z00_1406), BUNSPEC);
					}
					BgL_auxz00_3607 = BgL_nodez00_1396;
					return (obj_t) (BgL_auxz00_3607);
				}
			}
		}
	}



/* inline-node-setq3382 */
	obj_t BGl_inlinezd2nodezd2setq3382z00zzinline_inlinez00(obj_t BgL_envz00_2705,
		obj_t BgL_nodez00_2706, obj_t BgL_kfactorz00_2707, obj_t BgL_stackz00_2708)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 142 */
			{
				BgL_setqz00_bglt BgL_nodez00_1387;

				obj_t BgL_kfactorz00_1388;

				obj_t BgL_stackz00_1389;

				{	/* Inline/inline.scm 143 */
					BgL_setqz00_bglt BgL_auxz00_3691;

					BgL_nodez00_1387 = (BgL_setqz00_bglt) (BgL_nodez00_2706);
					BgL_kfactorz00_1388 = BgL_kfactorz00_2707;
					BgL_stackz00_1389 = BgL_stackz00_2708;
					{	/* Inline/inline.scm 143 */
						BgL_nodez00_bglt BgL_arg3525z00_1916;

						{	/* Inline/inline.scm 143 */
							BgL_nodez00_bglt BgL_arg3526z00_1917;

							BgL_arg3526z00_1917 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1387))->BgL_valuez00);
							{	/* Inline/inline.scm 143 */
								BgL_nodez00_bglt BgL_res3625z00_1947;

								{	/* Inline/inline.scm 143 */
									long BgL_kfactorz00_1920;

									BgL_kfactorz00_1920 = (long) CINT(BgL_kfactorz00_1388);
									{	/* Inline/inline.scm 143 */
										obj_t BgL_method3361z00_1922;

										{	/* Inline/inline.scm 143 */
											BgL_objectz00_bglt BgL_objz00_1923;

											BgL_objz00_1923 =
												(BgL_objectz00_bglt) (BgL_arg3526z00_1917);
											{	/* Inline/inline.scm 143 */
												long BgL_objzd2classzd2numz00_1924;

												BgL_objzd2classzd2numz00_1924 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1923);
												{	/* Inline/inline.scm 143 */
													obj_t BgL_arg2643z00_1925;

													BgL_arg2643z00_1925 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 143 */
														obj_t BgL_arrayz00_1927;

														int BgL_offsetz00_1928;

														BgL_arrayz00_1927 = BgL_arg2643z00_1925;
														BgL_offsetz00_1928 =
															(int) (BgL_objzd2classzd2numz00_1924);
														{	/* Inline/inline.scm 143 */
															long BgL_offsetz00_1929;

															BgL_offsetz00_1929 =
																((long) (BgL_offsetz00_1928) - OBJECT_TYPE);
															{	/* Inline/inline.scm 143 */
																long BgL_modz00_1930;

																{	/* Inline/inline.scm 143 */
																	int BgL_arg2645z00_1931;

																	BgL_arg2645z00_1931 = (int) (((long) 16));
																	{	/* Inline/inline.scm 143 */
																		long BgL_auxz00_3702;

																		BgL_auxz00_3702 =
																			(long) (BgL_arg2645z00_1931);
																		BgL_modz00_1930 =
																			(BgL_offsetz00_1929 / BgL_auxz00_3702);
																}}
																{	/* Inline/inline.scm 143 */
																	long BgL_restz00_1932;

																	{	/* Inline/inline.scm 143 */
																		int BgL_arg2644z00_1933;

																		BgL_arg2644z00_1933 = (int) (((long) 16));
																		{	/* Inline/inline.scm 143 */
																			long BgL_auxz00_3706;

																			BgL_auxz00_3706 =
																				(long) (BgL_arg2644z00_1933);
																			BgL_restz00_1932 =
																				(BgL_offsetz00_1929 % BgL_auxz00_3706);
																	}}
																	{	/* Inline/inline.scm 143 */

																		BgL_method3361z00_1922 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1927,
																				(int) (BgL_modz00_1930)),
																			(int) (BgL_restz00_1932));
										}}}}}}}}
										BgL_res3625z00_1947 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_1922) (BgL_method3361z00_1922,
												(obj_t) (BgL_arg3526z00_1917),
												BINT(BgL_kfactorz00_1920), BgL_stackz00_1389, BEOA));
								}}
								BgL_arg3525z00_1916 = BgL_res3625z00_1947;
						}}
						((((BgL_setqz00_bglt) CREF(BgL_nodez00_1387))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3525z00_1916), BUNSPEC);
					}
					BgL_auxz00_3691 = BgL_nodez00_1387;
					return (obj_t) (BgL_auxz00_3691);
				}
			}
		}
	}



/* inline-node-cast3380 */
	obj_t BGl_inlinezd2nodezd2cast3380z00zzinline_inlinez00(obj_t BgL_envz00_2709,
		obj_t BgL_nodez00_2710, obj_t BgL_kfactorz00_2711, obj_t BgL_stackz00_2712)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 135 */
			{
				BgL_castz00_bglt BgL_nodez00_1379;

				obj_t BgL_kfactorz00_1380;

				obj_t BgL_stackz00_1381;

				{	/* Inline/inline.scm 136 */
					BgL_castz00_bglt BgL_auxz00_3721;

					BgL_nodez00_1379 = (BgL_castz00_bglt) (BgL_nodez00_2710);
					BgL_kfactorz00_1380 = BgL_kfactorz00_2711;
					BgL_stackz00_1381 = BgL_stackz00_2712;
					{	/* Inline/inline.scm 136 */
						BgL_nodez00_bglt BgL_arg3523z00_1885;

						BgL_arg3523z00_1885 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1379))->BgL_argz00);
						{	/* Inline/inline.scm 136 */
							BgL_nodez00_bglt BgL_res3622z00_1915;

							{	/* Inline/inline.scm 136 */
								long BgL_kfactorz00_1888;

								BgL_kfactorz00_1888 = (long) CINT(BgL_kfactorz00_1380);
								{	/* Inline/inline.scm 136 */
									obj_t BgL_method3361z00_1890;

									{	/* Inline/inline.scm 136 */
										BgL_objectz00_bglt BgL_objz00_1891;

										BgL_objz00_1891 =
											(BgL_objectz00_bglt) (BgL_arg3523z00_1885);
										{	/* Inline/inline.scm 136 */
											long BgL_objzd2classzd2numz00_1892;

											BgL_objzd2classzd2numz00_1892 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1891);
											{	/* Inline/inline.scm 136 */
												obj_t BgL_arg2643z00_1893;

												BgL_arg2643z00_1893 =
													PROCEDURE_REF
													(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
													(int) (((long) 1)));
												{	/* Inline/inline.scm 136 */
													obj_t BgL_arrayz00_1895;

													int BgL_offsetz00_1896;

													BgL_arrayz00_1895 = BgL_arg2643z00_1893;
													BgL_offsetz00_1896 =
														(int) (BgL_objzd2classzd2numz00_1892);
													{	/* Inline/inline.scm 136 */
														long BgL_offsetz00_1897;

														BgL_offsetz00_1897 =
															((long) (BgL_offsetz00_1896) - OBJECT_TYPE);
														{	/* Inline/inline.scm 136 */
															long BgL_modz00_1898;

															{	/* Inline/inline.scm 136 */
																int BgL_arg2645z00_1899;

																BgL_arg2645z00_1899 = (int) (((long) 16));
																{	/* Inline/inline.scm 136 */
																	long BgL_auxz00_3732;

																	BgL_auxz00_3732 =
																		(long) (BgL_arg2645z00_1899);
																	BgL_modz00_1898 =
																		(BgL_offsetz00_1897 / BgL_auxz00_3732);
															}}
															{	/* Inline/inline.scm 136 */
																long BgL_restz00_1900;

																{	/* Inline/inline.scm 136 */
																	int BgL_arg2644z00_1901;

																	BgL_arg2644z00_1901 = (int) (((long) 16));
																	{	/* Inline/inline.scm 136 */
																		long BgL_auxz00_3736;

																		BgL_auxz00_3736 =
																			(long) (BgL_arg2644z00_1901);
																		BgL_restz00_1900 =
																			(BgL_offsetz00_1897 % BgL_auxz00_3736);
																}}
																{	/* Inline/inline.scm 136 */

																	BgL_method3361z00_1890 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1895,
																			(int) (BgL_modz00_1898)),
																		(int) (BgL_restz00_1900));
									}}}}}}}}
									BgL_res3622z00_1915 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3361z00_1890)
										(BgL_method3361z00_1890, (obj_t) (BgL_arg3523z00_1885),
											BINT(BgL_kfactorz00_1888), BgL_stackz00_1381, BEOA));
							}} BgL_res3622z00_1915;
					}}
					BgL_auxz00_3721 = BgL_nodez00_1379;
					return (obj_t) (BgL_auxz00_3721);
				}
			}
		}
	}



/* inline-node-extern3378 */
	obj_t BGl_inlinezd2nodezd2extern3378z00zzinline_inlinez00(obj_t
		BgL_envz00_2713, obj_t BgL_nodez00_2714, obj_t BgL_kfactorz00_2715,
		obj_t BgL_stackz00_2716)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 128 */
			{
				BgL_externz00_bglt BgL_nodez00_1371;

				obj_t BgL_kfactorz00_1372;

				obj_t BgL_stackz00_1373;

				{	/* Inline/inline.scm 129 */
					BgL_externz00_bglt BgL_auxz00_3750;

					BgL_nodez00_1371 = (BgL_externz00_bglt) (BgL_nodez00_2714);
					BgL_kfactorz00_1372 = BgL_kfactorz00_2715;
					BgL_stackz00_1373 = BgL_stackz00_2716;
					{	/* Inline/inline.scm 129 */
						obj_t BgL_arg3521z00_1883;

						BgL_arg3521z00_1883 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1371))->BgL_exprza2za2);
						BGl_inlinezd2nodeza2z12z62zzinline_inlinez00(BgL_arg3521z00_1883,
							BgL_kfactorz00_1372, BgL_stackz00_1373);
					}
					BgL_auxz00_3750 = BgL_nodez00_1371;
					return (obj_t) (BgL_auxz00_3750);
				}
			}
		}
	}



/* inline-node-funcall3376 */
	obj_t BGl_inlinezd2nodezd2funcall3376z00zzinline_inlinez00(obj_t
		BgL_envz00_2717, obj_t BgL_nodez00_2718, obj_t BgL_kfactorz00_2719,
		obj_t BgL_stackz00_2720)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 118 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1361;

				obj_t BgL_kfactorz00_1362;

				obj_t BgL_stackz00_1363;

				{	/* Inline/inline.scm 120 */
					BgL_funcallz00_bglt BgL_auxz00_3755;

					BgL_nodez00_1361 = (BgL_funcallz00_bglt) (BgL_nodez00_2718);
					BgL_kfactorz00_1362 = BgL_kfactorz00_2719;
					BgL_stackz00_1363 = BgL_stackz00_2720;
					{	/* Inline/inline.scm 120 */
						long BgL_za71za7_1848;

						BgL_za71za7_1848 =
							(long) CINT(BGl_za2nonzd2inlinedzd2callsza2z00zzinline_walkz00);
						BGl_za2nonzd2inlinedzd2callsza2z00zzinline_walkz00 =
							BINT((BgL_za71za7_1848 + ((long) 1)));
					}
					{	/* Inline/inline.scm 121 */
						BgL_nodez00_bglt BgL_arg3517z00_1366;

						{	/* Inline/inline.scm 121 */
							BgL_nodez00_bglt BgL_arg3518z00_1367;

							BgL_arg3518z00_1367 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1361))->BgL_funz00);
							{	/* Inline/inline.scm 121 */
								BgL_nodez00_bglt BgL_res3619z00_1879;

								{	/* Inline/inline.scm 121 */
									long BgL_kfactorz00_1852;

									BgL_kfactorz00_1852 = (long) CINT(BgL_kfactorz00_1362);
									{	/* Inline/inline.scm 121 */
										obj_t BgL_method3361z00_1854;

										{	/* Inline/inline.scm 121 */
											BgL_objectz00_bglt BgL_objz00_1855;

											BgL_objz00_1855 =
												(BgL_objectz00_bglt) (BgL_arg3518z00_1367);
											{	/* Inline/inline.scm 121 */
												long BgL_objzd2classzd2numz00_1856;

												BgL_objzd2classzd2numz00_1856 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1855);
												{	/* Inline/inline.scm 121 */
													obj_t BgL_arg2643z00_1857;

													BgL_arg2643z00_1857 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 121 */
														obj_t BgL_arrayz00_1859;

														int BgL_offsetz00_1860;

														BgL_arrayz00_1859 = BgL_arg2643z00_1857;
														BgL_offsetz00_1860 =
															(int) (BgL_objzd2classzd2numz00_1856);
														{	/* Inline/inline.scm 121 */
															long BgL_offsetz00_1861;

															BgL_offsetz00_1861 =
																((long) (BgL_offsetz00_1860) - OBJECT_TYPE);
															{	/* Inline/inline.scm 121 */
																long BgL_modz00_1862;

																{	/* Inline/inline.scm 121 */
																	int BgL_arg2645z00_1863;

																	BgL_arg2645z00_1863 = (int) (((long) 16));
																	{	/* Inline/inline.scm 121 */
																		long BgL_auxz00_3769;

																		BgL_auxz00_3769 =
																			(long) (BgL_arg2645z00_1863);
																		BgL_modz00_1862 =
																			(BgL_offsetz00_1861 / BgL_auxz00_3769);
																}}
																{	/* Inline/inline.scm 121 */
																	long BgL_restz00_1864;

																	{	/* Inline/inline.scm 121 */
																		int BgL_arg2644z00_1865;

																		BgL_arg2644z00_1865 = (int) (((long) 16));
																		{	/* Inline/inline.scm 121 */
																			long BgL_auxz00_3773;

																			BgL_auxz00_3773 =
																				(long) (BgL_arg2644z00_1865);
																			BgL_restz00_1864 =
																				(BgL_offsetz00_1861 % BgL_auxz00_3773);
																	}}
																	{	/* Inline/inline.scm 121 */

																		BgL_method3361z00_1854 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1859,
																				(int) (BgL_modz00_1862)),
																			(int) (BgL_restz00_1864));
										}}}}}}}}
										BgL_res3619z00_1879 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_1854) (BgL_method3361z00_1854,
												(obj_t) (BgL_arg3518z00_1367),
												BINT(BgL_kfactorz00_1852), BgL_stackz00_1363, BEOA));
								}}
								BgL_arg3517z00_1366 = BgL_res3619z00_1879;
						}}
						((((BgL_funcallz00_bglt) CREF(BgL_nodez00_1361))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3517z00_1366), BUNSPEC);
					}
					{	/* Inline/inline.scm 122 */
						obj_t BgL_arg3519z00_1368;

						BgL_arg3519z00_1368 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1361))->BgL_argsz00);
						BGl_inlinezd2nodeza2z12z62zzinline_inlinez00(BgL_arg3519z00_1368,
							BgL_kfactorz00_1362, BgL_stackz00_1363);
					}
					BgL_auxz00_3755 = BgL_nodez00_1361;
					return (obj_t) (BgL_auxz00_3755);
				}
			}
		}
	}



/* inline-node-app-ly3374 */
	obj_t BGl_inlinezd2nodezd2appzd2ly3374zd2zzinline_inlinez00(obj_t
		BgL_envz00_2721, obj_t BgL_nodez00_2722, obj_t BgL_kfactorz00_2723,
		obj_t BgL_stackz00_2724)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 109 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1349;

				obj_t BgL_kfactorz00_1350;

				obj_t BgL_stackz00_1351;

				{	/* Inline/inline.scm 110 */
					BgL_appzd2lyzd2_bglt BgL_auxz00_3790;

					BgL_nodez00_1349 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2722);
					BgL_kfactorz00_1350 = BgL_kfactorz00_2723;
					BgL_stackz00_1351 = BgL_stackz00_2724;
					{	/* Inline/inline.scm 111 */
						BgL_nodez00_bglt BgL_arg3512z00_1355;

						{	/* Inline/inline.scm 111 */
							BgL_nodez00_bglt BgL_arg3513z00_1356;

							BgL_arg3513z00_1356 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1349))->BgL_funz00);
							{	/* Inline/inline.scm 111 */
								BgL_nodez00_bglt BgL_res3613z00_1813;

								{	/* Inline/inline.scm 111 */
									long BgL_kfactorz00_1786;

									BgL_kfactorz00_1786 = (long) CINT(BgL_kfactorz00_1350);
									{	/* Inline/inline.scm 111 */
										obj_t BgL_method3361z00_1788;

										{	/* Inline/inline.scm 111 */
											BgL_objectz00_bglt BgL_objz00_1789;

											BgL_objz00_1789 =
												(BgL_objectz00_bglt) (BgL_arg3513z00_1356);
											{	/* Inline/inline.scm 111 */
												long BgL_objzd2classzd2numz00_1790;

												BgL_objzd2classzd2numz00_1790 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1789);
												{	/* Inline/inline.scm 111 */
													obj_t BgL_arg2643z00_1791;

													BgL_arg2643z00_1791 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 111 */
														obj_t BgL_arrayz00_1793;

														int BgL_offsetz00_1794;

														BgL_arrayz00_1793 = BgL_arg2643z00_1791;
														BgL_offsetz00_1794 =
															(int) (BgL_objzd2classzd2numz00_1790);
														{	/* Inline/inline.scm 111 */
															long BgL_offsetz00_1795;

															BgL_offsetz00_1795 =
																((long) (BgL_offsetz00_1794) - OBJECT_TYPE);
															{	/* Inline/inline.scm 111 */
																long BgL_modz00_1796;

																{	/* Inline/inline.scm 111 */
																	int BgL_arg2645z00_1797;

																	BgL_arg2645z00_1797 = (int) (((long) 16));
																	{	/* Inline/inline.scm 111 */
																		long BgL_auxz00_3801;

																		BgL_auxz00_3801 =
																			(long) (BgL_arg2645z00_1797);
																		BgL_modz00_1796 =
																			(BgL_offsetz00_1795 / BgL_auxz00_3801);
																}}
																{	/* Inline/inline.scm 111 */
																	long BgL_restz00_1798;

																	{	/* Inline/inline.scm 111 */
																		int BgL_arg2644z00_1799;

																		BgL_arg2644z00_1799 = (int) (((long) 16));
																		{	/* Inline/inline.scm 111 */
																			long BgL_auxz00_3805;

																			BgL_auxz00_3805 =
																				(long) (BgL_arg2644z00_1799);
																			BgL_restz00_1798 =
																				(BgL_offsetz00_1795 % BgL_auxz00_3805);
																	}}
																	{	/* Inline/inline.scm 111 */

																		BgL_method3361z00_1788 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1793,
																				(int) (BgL_modz00_1796)),
																			(int) (BgL_restz00_1798));
										}}}}}}}}
										BgL_res3613z00_1813 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_1788) (BgL_method3361z00_1788,
												(obj_t) (BgL_arg3513z00_1356),
												BINT(BgL_kfactorz00_1786), BgL_stackz00_1351, BEOA));
								}}
								BgL_arg3512z00_1355 = BgL_res3613z00_1813;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1349))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3512z00_1355), BUNSPEC);
					}
					{	/* Inline/inline.scm 112 */
						BgL_nodez00_bglt BgL_arg3514z00_1357;

						{	/* Inline/inline.scm 112 */
							BgL_nodez00_bglt BgL_arg3515z00_1358;

							BgL_arg3515z00_1358 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1349))->BgL_argz00);
							{	/* Inline/inline.scm 112 */
								BgL_nodez00_bglt BgL_res3616z00_1845;

								{	/* Inline/inline.scm 112 */
									long BgL_kfactorz00_1818;

									BgL_kfactorz00_1818 = (long) CINT(BgL_kfactorz00_1350);
									{	/* Inline/inline.scm 112 */
										obj_t BgL_method3361z00_1820;

										{	/* Inline/inline.scm 112 */
											BgL_objectz00_bglt BgL_objz00_1821;

											BgL_objz00_1821 =
												(BgL_objectz00_bglt) (BgL_arg3515z00_1358);
											{	/* Inline/inline.scm 112 */
												long BgL_objzd2classzd2numz00_1822;

												BgL_objzd2classzd2numz00_1822 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1821);
												{	/* Inline/inline.scm 112 */
													obj_t BgL_arg2643z00_1823;

													BgL_arg2643z00_1823 =
														PROCEDURE_REF
														(BGl_inlinezd2nodezd2envz00zzinline_inlinez00,
														(int) (((long) 1)));
													{	/* Inline/inline.scm 112 */
														obj_t BgL_arrayz00_1825;

														int BgL_offsetz00_1826;

														BgL_arrayz00_1825 = BgL_arg2643z00_1823;
														BgL_offsetz00_1826 =
															(int) (BgL_objzd2classzd2numz00_1822);
														{	/* Inline/inline.scm 112 */
															long BgL_offsetz00_1827;

															BgL_offsetz00_1827 =
																((long) (BgL_offsetz00_1826) - OBJECT_TYPE);
															{	/* Inline/inline.scm 112 */
																long BgL_modz00_1828;

																{	/* Inline/inline.scm 112 */
																	int BgL_arg2645z00_1829;

																	BgL_arg2645z00_1829 = (int) (((long) 16));
																	{	/* Inline/inline.scm 112 */
																		long BgL_auxz00_3828;

																		BgL_auxz00_3828 =
																			(long) (BgL_arg2645z00_1829);
																		BgL_modz00_1828 =
																			(BgL_offsetz00_1827 / BgL_auxz00_3828);
																}}
																{	/* Inline/inline.scm 112 */
																	long BgL_restz00_1830;

																	{	/* Inline/inline.scm 112 */
																		int BgL_arg2644z00_1831;

																		BgL_arg2644z00_1831 = (int) (((long) 16));
																		{	/* Inline/inline.scm 112 */
																			long BgL_auxz00_3832;

																			BgL_auxz00_3832 =
																				(long) (BgL_arg2644z00_1831);
																			BgL_restz00_1830 =
																				(BgL_offsetz00_1827 % BgL_auxz00_3832);
																	}}
																	{	/* Inline/inline.scm 112 */

																		BgL_method3361z00_1820 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1825,
																				(int) (BgL_modz00_1828)),
																			(int) (BgL_restz00_1830));
										}}}}}}}}
										BgL_res3616z00_1845 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3361z00_1820) (BgL_method3361z00_1820,
												(obj_t) (BgL_arg3515z00_1358),
												BINT(BgL_kfactorz00_1818), BgL_stackz00_1351, BEOA));
								}}
								BgL_arg3514z00_1357 = BgL_res3616z00_1845;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1349))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg3514z00_1357), BUNSPEC);
					}
					BgL_auxz00_3790 = BgL_nodez00_1349;
					return (obj_t) (BgL_auxz00_3790);
				}
			}
		}
	}



/* inline-node-app3372 */
	obj_t BGl_inlinezd2nodezd2app3372z00zzinline_inlinez00(obj_t BgL_envz00_2725,
		obj_t BgL_nodez00_2726, obj_t BgL_kfactorz00_2727, obj_t BgL_stackz00_2728)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 102 */
			{
				BgL_appz00_bglt BgL_nodez00_1341;

				obj_t BgL_kfactorz00_1342;

				obj_t BgL_stackz00_1343;

				{	/* Inline/inline.scm 103 */
					BgL_nodez00_bglt BgL_auxz00_3847;

					BgL_nodez00_1341 = (BgL_appz00_bglt) (BgL_nodez00_2726);
					BgL_kfactorz00_1342 = BgL_kfactorz00_2727;
					BgL_stackz00_1343 = BgL_stackz00_2728;
					{	/* Inline/inline.scm 103 */
						obj_t BgL_arg3510z00_1782;

						BgL_arg3510z00_1782 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1341))->BgL_argsz00);
						BGl_inlinezd2nodeza2z12z62zzinline_inlinez00(BgL_arg3510z00_1782,
							BgL_kfactorz00_1342, BgL_stackz00_1343);
					}
					BgL_auxz00_3847 =
						BGl_inlinezd2appzd2zzinline_appz00(BgL_nodez00_1341,
						(long) CINT(BgL_kfactorz00_1342), BgL_stackz00_1343);
					return (obj_t) (BgL_auxz00_3847);
				}
			}
		}
	}



/* inline-node-sequence3370 */
	obj_t BGl_inlinezd2nodezd2sequence3370z00zzinline_inlinez00(obj_t
		BgL_envz00_2729, obj_t BgL_nodez00_2730, obj_t BgL_kfactorz00_2731,
		obj_t BgL_stackz00_2732)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 95 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1333;

				obj_t BgL_kfactorz00_1334;

				obj_t BgL_stackz00_1335;

				{	/* Inline/inline.scm 96 */
					BgL_sequencez00_bglt BgL_auxz00_3854;

					BgL_nodez00_1333 = (BgL_sequencez00_bglt) (BgL_nodez00_2730);
					BgL_kfactorz00_1334 = BgL_kfactorz00_2731;
					BgL_stackz00_1335 = BgL_stackz00_2732;
					{	/* Inline/inline.scm 96 */
						obj_t BgL_arg3508z00_1780;

						BgL_arg3508z00_1780 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1333))->BgL_nodesz00);
						BGl_inlinezd2nodeza2z12z62zzinline_inlinez00(BgL_arg3508z00_1780,
							BgL_kfactorz00_1334, BgL_stackz00_1335);
					}
					BgL_auxz00_3854 = BgL_nodez00_1333;
					return (obj_t) (BgL_auxz00_3854);
				}
			}
		}
	}



/* inline-node-kwote3367 */
	obj_t BGl_inlinezd2nodezd2kwote3367z00zzinline_inlinez00(obj_t
		BgL_envz00_2733, obj_t BgL_nodez00_2734, obj_t BgL_kfactorz00_2735,
		obj_t BgL_stackz00_2736)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 89 */
			return (obj_t) ((BgL_kwotez00_bglt) (BgL_nodez00_2734));
		}
	}



/* inline-node-var3365 */
	obj_t BGl_inlinezd2nodezd2var3365z00zzinline_inlinez00(obj_t BgL_envz00_2737,
		obj_t BgL_nodez00_2738, obj_t BgL_kfactorz00_2739, obj_t BgL_stackz00_2740)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 73 */
			{
				BgL_varz00_bglt BgL_nodez00_1299;

				obj_t BgL_kfactorz00_1300;

				obj_t BgL_stackz00_1301;

				BgL_nodez00_1299 = (BgL_varz00_bglt) (BgL_nodez00_2738);
				BgL_kfactorz00_1300 = BgL_kfactorz00_2739;
				BgL_stackz00_1301 = BgL_stackz00_2740;
				{	/* Inline/inline.scm 75 */
					bool_t BgL_testz00_3861;

					if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) > ((long) 0)))
						{	/* Inline/inline.scm 76 */
							bool_t BgL_testz00_3865;

							{	/* Inline/inline.scm 76 */
								BgL_variablez00_bglt BgL_arg3505z00_1323;

								BgL_arg3505z00_1323 =
									(((BgL_varz00_bglt) CREF(BgL_nodez00_1299))->BgL_variablez00);
								{	/* Inline/inline.scm 76 */
									obj_t BgL_obj1751z00_1769;

									BgL_obj1751z00_1769 = (obj_t) (BgL_arg3505z00_1323);
									BgL_testz00_3865 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_1769,
										BGl_globalz00zzast_varz00);
							}}
							if (BgL_testz00_3865)
								{	/* Inline/inline.scm 77 */
									bool_t BgL_testz00_3869;

									{	/* Inline/inline.scm 77 */
										obj_t BgL_auxz00_3870;

										{	/* Inline/inline.scm 77 */
											BgL_globalz00_bglt BgL_obj1679z00_1771;

											BgL_obj1679z00_1771 =
												(BgL_globalz00_bglt) (
												(((BgL_varz00_bglt) CREF(BgL_nodez00_1299))->
													BgL_variablez00));
											BgL_auxz00_3870 =
												(((BgL_globalz00_bglt) CREF(BgL_obj1679z00_1771))->
												BgL_importz00);
										}
										BgL_testz00_3869 =
											(BgL_auxz00_3870 == CNST_TABLE_REF(((long) 3)));
									}
									if (BgL_testz00_3869)
										{	/* Inline/inline.scm 78 */
											bool_t BgL_testz00_3876;

											{	/* Inline/inline.scm 78 */
												obj_t BgL_auxz00_3877;

												{	/* Inline/inline.scm 78 */
													BgL_variablez00_bglt BgL_obj1614z00_1773;

													BgL_obj1614z00_1773 =
														(((BgL_varz00_bglt) CREF(BgL_nodez00_1299))->
														BgL_variablez00);
													BgL_auxz00_3877 =
														(((BgL_variablez00_bglt)
															CREF(BgL_obj1614z00_1773))->BgL_accessz00);
												}
												BgL_testz00_3876 =
													(BgL_auxz00_3877 == CNST_TABLE_REF(((long) 4)));
											}
											if (BgL_testz00_3876)
												{	/* Inline/inline.scm 79 */
													obj_t BgL_arg3497z00_1315;

													{	/* Inline/inline.scm 79 */
														BgL_globalz00_bglt BgL_obj1694z00_1775;

														BgL_obj1694z00_1775 =
															(BgL_globalz00_bglt) (
															(((BgL_varz00_bglt) CREF(BgL_nodez00_1299))->
																BgL_variablez00));
														BgL_arg3497z00_1315 =
															(((BgL_globalz00_bglt)
																CREF(BgL_obj1694z00_1775))->BgL_srcz00);
													}
													BgL_testz00_3861 =
														BGl_iszd2azf3z21zz__objectz00(BgL_arg3497z00_1315,
														BGl_atomz00zzast_nodez00);
												}
											else
												{	/* Inline/inline.scm 78 */
													BgL_testz00_3861 = ((bool_t) 0);
												}
										}
									else
										{	/* Inline/inline.scm 77 */
											BgL_testz00_3861 = ((bool_t) 0);
										}
								}
							else
								{	/* Inline/inline.scm 76 */
									BgL_testz00_3861 = ((bool_t) 0);
								}
						}
					else
						{	/* Inline/inline.scm 75 */
							BgL_testz00_3861 = ((bool_t) 0);
						}
					if (BgL_testz00_3861)
						{	/* Inline/inline.scm 75 */
							{	/* Inline/inline.scm 83 */
								obj_t BgL_arg3490z00_1308;

								obj_t BgL_arg3491z00_1309;

								{
									BgL_nodez00_bglt BgL_auxz00_3886;

									BgL_auxz00_3886 = (BgL_nodez00_bglt) (BgL_nodez00_1299);
									BgL_arg3490z00_1308 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_3886))->BgL_locz00);
								}
								{	/* Inline/inline.scm 83 */
									BgL_globalz00_bglt BgL_obj1694z00_1779;

									BgL_obj1694z00_1779 =
										(BgL_globalz00_bglt) (
										(((BgL_varz00_bglt) CREF(BgL_nodez00_1299))->
											BgL_variablez00));
									BgL_arg3491z00_1309 =
										(((BgL_globalz00_bglt) CREF(BgL_obj1694z00_1779))->
										BgL_srcz00);
								}
								return
									(obj_t) (BGl_alphatiza7eza7zzast_alphatiza7eza7(BNIL, BNIL,
										BgL_arg3490z00_1308,
										(BgL_nodez00_bglt) (BgL_arg3491z00_1309)));
							}
						}
					else
						{	/* Inline/inline.scm 75 */
							return (obj_t) (BgL_nodez00_1299);
						}
				}
			}
		}
	}



/* inline-node-atom3363 */
	obj_t BGl_inlinezd2nodezd2atom3363z00zzinline_inlinez00(obj_t BgL_envz00_2741,
		obj_t BgL_nodez00_2742, obj_t BgL_kfactorz00_2743, obj_t BgL_stackz00_2744)
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 67 */
			return (obj_t) ((BgL_atomz00_bglt) (BgL_nodez00_2742));
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinline_inlinez00()
	{
		AN_OBJECT;
		{	/* Inline/inline.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3712z00zzinline_inlinez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3712z00zzinline_inlinez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3712z00zzinline_inlinez00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3712z00zzinline_inlinez00));
			BGl_modulezd2initializa7ationz75zzinline_walkz00(((long) 175384950),
				BSTRING_TO_STRING(BGl_string3712z00zzinline_inlinez00));
			BGl_modulezd2initializa7ationz75zzinline_appz00(((long) 472786230),
				BSTRING_TO_STRING(BGl_string3712z00zzinline_inlinez00));
			BGl_modulezd2initializa7ationz75zzast_alphatiza7eza7(((long) 509694479),
				BSTRING_TO_STRING(BGl_string3712z00zzinline_inlinez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3712z00zzinline_inlinez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3712z00zzinline_inlinez00));
			return
				BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3712z00zzinline_inlinez00));
		}
	}

#ifdef __cplusplus
}
#endif
