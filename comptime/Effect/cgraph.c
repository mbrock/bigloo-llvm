/*===========================================================================*/
/*   (Effect/cgraph.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Effect/cgraph.scm)*/
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

	typedef struct BgL_localzf2fromzf2_bgl
	{
		obj_t BgL_fromz00;
	}                      *BgL_localzf2fromzf2_bglt;

	typedef struct BgL_globalzf2fromzf2_bgl
	{
		obj_t BgL_fromz00;
	}                       *BgL_globalzf2fromzf2_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec3487z83zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec3491z83zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	extern BgL_localz00_bglt BGl_makezd2localzd2zzast_varz00(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, bool_t,
		long);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_callzd2graphz12zd2app3442z12zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2varzf2allz20zzeffect_cgraphz00();
	static obj_t BGl__resetzd2effectzd2tablesz12z12zzeffect_cgraphz00(obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	static obj_t
		BGl_callzd2graphz12zd2setzd2exzd2i3464z12zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_callzd2graphz12zd2sequence3440z12zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	BGL_EXPORTED_DEF obj_t BGl_globalzf2fromzf2zzeffect_cgraphz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_funzd2callzd2graphz12z12zzeffect_cgraphz00(BgL_variablez00_bglt);
	static obj_t BGl__fillzd2globalzf2fromz12z32zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2varzf2sidezd2effectza2z20zzeffect_cgraphz00 = BUNSPEC;
	static obj_t BGl__makezd2localzf2fromz20zzeffect_cgraphz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_callzd2graphz12zd2boxzd2setz123472zd2zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzeffect_cgraphz00();
	extern BgL_valuez00_bglt BGl_valuezd2nilzd2zzast_varz00();
	static obj_t BGl_callzd2graphz12zd2conditio3454z12zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_callzd2graphz12zd2extern3448z12zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl__getzd2varzf2sidezd2effectzf2zzeffect_cgraphz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_callzd2graphz12zd2appzd2ly3444zc0zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__getzd2varzf2allz20zzeffect_cgraphz00(obj_t);
	static obj_t BGl__globalzf2fromzf3z01zzeffect_cgraphz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_localzf2fromzf2_bglt
		BGl_fillzd2localzf2fromz12z32zzeffect_cgraphz00(BgL_localzf2fromzf2_bglt,
		obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	static obj_t BGl_savezd2callz12zd2local3481z12zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t BGl_savezd2callz12zd2global3477z12zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__callzd2graphz12zc0zzeffect_cgraphz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzeffect_cgraphz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzeffect_cgraphz00();
	static obj_t BGl__z52allocatezd2globalzf2fromz72zzeffect_cgraphz00(obj_t);
	static obj_t
		BGl_callzd2graphz12zd2jumpzd2exzd23466z12zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__callzd2graphz12zd2default3437z12zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__wideningzd2localzf2fromz20zzeffect_cgraphz00(obj_t, obj_t);
	static obj_t BGl_callzd2graphz12zd2cast3450z12zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_savezd2callz12zc0zzeffect_cgraphz00(BgL_variablez00_bglt,
		BgL_variablez00_bglt);
	BGL_EXPORTED_DECL BgL_localzf2fromzf2_bglt
		BGl_localzf2fromzd2nilz20zzeffect_cgraphz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl__wideningzd2globalzf2fromz20zzeffect_cgraphz00(obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_callzd2graphz12zd2makezd2box3468zc0zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_localzf2fromzf3z01zzeffect_cgraphz00(obj_t);
	static obj_t BGl_callzd2graphz12zd2setq3452z12zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__fillzd2localzf2fromz12z32zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_callzd2graphz12zd2select3458z12zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_callzd2graphz12zd2funcall3446z12zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__globalzf2fromzd2nilz20zzeffect_cgraphz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzeffect_cgraphz00();
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_z52allocatezd2globalzf2fromz72zzeffect_cgraphz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl__z52allocatezd2localzf2fromz72zzeffect_cgraphz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_resetzd2effectzd2tablesz12z12zzeffect_cgraphz00();
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_EXPORTED_DECL BgL_localzf2fromzf2_bglt
		BGl_makezd2localzf2fromz20zzeffect_cgraphz00(obj_t, obj_t, BgL_typez00_bglt,
		BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, bool_t, long, obj_t);
	static obj_t BGl_savezd2callz12zd2globalzf2fr3479ze0zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzeffect_cgraphz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_globalzf2fromzf2_bglt
		BGl_makezd2globalzf2fromz20zzeffect_cgraphz00(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, obj_t,
		obj_t, bool_t, obj_t, bool_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzeffect_cgraphz00();
	static obj_t BGl__localzf2fromzf3z01zzeffect_cgraphz00(obj_t, obj_t);
	static obj_t BGl_savezd2callz12zd2localzf2fro3483ze0zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_localzf2fromzf2zzeffect_cgraphz00 = BUNSPEC;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_z52thezd2globalzf2fromzd2nilza0zzeffect_cgraphz00 = BUNSPEC;
	static obj_t BGl_objectzd2ze3structzd2globa3485ze3zzeffect_cgraphz00(obj_t,
		obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_callzd2graphz12zd2fail3456z12zzeffect_cgraphz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__savezd2callz12zc0zzeffect_cgraphz00(obj_t, obj_t, obj_t);
	static obj_t BGl__funzd2callzd2graphz12z12zzeffect_cgraphz00(obj_t, obj_t);
	static obj_t BGl_callzd2graphz12zd2boxzd2ref3470zc0zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzeffect_cgraphz00();
	BGL_EXPORTED_DECL obj_t BGl_getzd2varzf2sidezd2effectzf2zzeffect_cgraphz00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl__localzf2fromzd2nilz20zzeffect_cgraphz00(obj_t);
	static obj_t BGl_z52thezd2localzf2fromzd2nilza0zzeffect_cgraphz00 = BUNSPEC;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl__savezd2callz12zd2default3473z12zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_savezd2callz12zd2default3473z12zzeffect_cgraphz00(BgL_variablez00_bglt,
		BgL_variablez00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_globalzf2fromzf3z01zzeffect_cgraphz00(obj_t);
	BGL_EXPORTED_DECL BgL_localzf2fromzf2_bglt
		BGl_wideningzd2localzf2fromz20zzeffect_cgraphz00(obj_t);
	static obj_t BGl__makezd2globalzf2fromz20zzeffect_cgraphz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	extern BgL_globalz00_bglt BGl_makezd2globalzd2zzast_varz00(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, obj_t,
		obj_t, bool_t, obj_t, bool_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t
		BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(BgL_variablez00_bglt);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	static bool_t BGl_callzd2graphza2z12z62zzeffect_cgraphz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalzf2fromzf2_bglt
		BGl_wideningzd2globalzf2fromz20zzeffect_cgraphz00(obj_t);
	static obj_t BGl_za2varzf2allza2zf2zzeffect_cgraphz00 = BUNSPEC;
	extern obj_t BGl_localz00zzast_varz00;
	BGL_EXPORTED_DECL BgL_globalzf2fromzf2_bglt
		BGl_globalzf2fromzd2nilz20zzeffect_cgraphz00();
	static obj_t BGl_objectzd2initzd2zzeffect_cgraphz00();
	static obj_t BGl_callzd2graphz12zd2letzd2fun3460zc0zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2local3489ze3zzeffect_cgraphz00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzeffect_cgraphz00();
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_z52allocatezd2localzf2fromz72zzeffect_cgraphz00();
	static obj_t BGl_callzd2graphz12zd2letzd2var3462zc0zzeffect_cgraphz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalzf2fromzf2_bglt
		BGl_fillzd2globalzf2fromz12z32zzeffect_cgraphz00(BgL_globalzf2fromzf2_bglt,
		obj_t);
	static obj_t __cnst[7];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2localzf2fromz12zd2envze0zzeffect_cgraphz00,
		BgL_bgl__fillza7d2localza7f23814z00,
		BGl__fillzd2localzf2fromz12z32zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3774z00zzeffect_cgraphz00,
		BgL_bgl_string3774za700za7za7e3815za7, "", 0);
	      DEFINE_STRING(BGl_string3775z00zzeffect_cgraphz00,
		BgL_bgl_string3775za700za7za7e3816za7, "call-graph!", 11);
	      DEFINE_STRING(BGl_string3776z00zzeffect_cgraphz00,
		BgL_bgl_string3776za700za7za7e3817za7, "save-call!", 10);
	      DEFINE_STRING(BGl_string3777z00zzeffect_cgraphz00,
		BgL_bgl_string3777za700za7za7e3818za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3800z00zzeffect_cgraphz00,
		BgL_bgl_string3800za700za7za7e3819za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string3802z00zzeffect_cgraphz00,
		BgL_bgl_string3802za700za7za7e3820za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string3805z00zzeffect_cgraphz00,
		BgL_bgl_string3805za700za7za7e3821za7, "effect_cgraph", 13);
	      DEFINE_STRING(BGl_string3806z00zzeffect_cgraphz00,
		BgL_bgl_string3806za700za7za7e3822za7,
		"import save-call!-default3473 done _ global/from local/from nothing ", 68);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_resetzd2effectzd2tablesz12zd2envzc0zzeffect_cgraphz00,
		BgL_bgl__resetza7d2effectza73823z00,
		BGl__resetzd2effectzd2tablesz12z12zzeffect_cgraphz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2varzf2sidezd2effectzd2envz20zzeffect_cgraphz00,
		BgL_bgl__getza7d2varza7f2sid3824z00,
		BGl__getzd2varzf2sidezd2effectzf2zzeffect_cgraphz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2globalzf2fromz12zd2envze0zzeffect_cgraphz00,
		BgL_bgl__fillza7d2globalza7f3825z00,
		BGl__fillzd2globalzf2fromz12z32zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2globalzf2fromzd2envzf2zzeffect_cgraphz00,
		BgL_bgl__makeza7d2globalza7f3826z00,
		BGl__makezd2globalzf2fromz20zzeffect_cgraphz00, 0L, BUNSPEC, 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2localzf2fromzd2envzf2zzeffect_cgraphz00,
		BgL_bgl__makeza7d2localza7f23827z00,
		BGl__makezd2localzf2fromz20zzeffect_cgraphz00, 0L, BUNSPEC, 11);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
		BgL_bgl__callza7d2graphza7123828z00,
		BGl__callzd2graphz12zc0zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_callzd2graphz12zd2default3437zd2envzc0zzeffect_cgraphz00,
		BgL_bgl__callza7d2graphza7123829z00,
		BGl__callzd2graphz12zd2default3437z12zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2globalzf2fromzd2envzf2zzeffect_cgraphz00,
		BgL_bgl__wideningza7d2glob3830za7,
		BGl__wideningzd2globalzf2fromz20zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_savezd2callz12zd2envz12zzeffect_cgraphz00,
		BgL_bgl__saveza7d2callza712za73831za7,
		BGl__savezd2callz12zc0zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzf2fromzf3zd2envzd3zzeffect_cgraphz00,
		BgL_bgl__localza7f2fromza7f33832z00,
		BGl__localzf2fromzf3z01zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_savezd2callz12zd2default3473zd2envzc0zzeffect_cgraphz00,
		BgL_bgl__saveza7d2callza712za73833za7,
		BGl__savezd2callz12zd2default3473z12zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzf2fromzf3zd2envzd3zzeffect_cgraphz00,
		BgL_bgl__globalza7f2fromza7f3834z00,
		BGl__globalzf2fromzf3z01zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzf2fromzd2nilzd2envzf2zzeffect_cgraphz00,
		BgL_bgl__globalza7f2fromza7d3835z00,
		BGl__globalzf2fromzd2nilz20zzeffect_cgraphz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_funzd2callzd2graphz12zd2envzc0zzeffect_cgraphz00,
		BgL_bgl__funza7d2callza7d2gr3836z00,
		BGl__funzd2callzd2graphz12z12zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2globalzf2fromzd2envza0zzeffect_cgraphz00,
		BgL_bgl__za752allocateza7d2g3837z00,
		BGl__z52allocatezd2globalzf2fromz72zzeffect_cgraphz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2localzf2fromzd2envza0zzeffect_cgraphz00,
		BgL_bgl__za752allocateza7d2l3838z00,
		BGl__z52allocatezd2localzf2fromz72zzeffect_cgraphz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2localzf2fromzd2envzf2zzeffect_cgraphz00,
		BgL_bgl__wideningza7d2loca3839za7,
		BGl__wideningzd2localzf2fromz20zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3778z00zzeffect_cgraphz00,
		BgL_bgl_callza7d2graphza712za73840za7,
		BGl_callzd2graphz12zd2sequence3440z12zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3780z00zzeffect_cgraphz00,
		BgL_bgl_callza7d2graphza712za73841za7,
		BGl_callzd2graphz12zd2appzd2ly3444zc0zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3779z00zzeffect_cgraphz00,
		BgL_bgl_callza7d2graphza712za73842za7,
		BGl_callzd2graphz12zd2app3442z12zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3781z00zzeffect_cgraphz00,
		BgL_bgl_callza7d2graphza712za73843za7,
		BGl_callzd2graphz12zd2funcall3446z12zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3782z00zzeffect_cgraphz00,
		BgL_bgl_callza7d2graphza712za73844za7,
		BGl_callzd2graphz12zd2extern3448z12zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3783z00zzeffect_cgraphz00,
		BgL_bgl_callza7d2graphza712za73845za7,
		BGl_callzd2graphz12zd2cast3450z12zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3784z00zzeffect_cgraphz00,
		BgL_bgl_callza7d2graphza712za73846za7,
		BGl_callzd2graphz12zd2setq3452z12zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3785z00zzeffect_cgraphz00,
		BgL_bgl_callza7d2graphza712za73847za7,
		BGl_callzd2graphz12zd2conditio3454z12zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3786z00zzeffect_cgraphz00,
		BgL_bgl_callza7d2graphza712za73848za7,
		BGl_callzd2graphz12zd2fail3456z12zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2varzf2allzd2envzf2zzeffect_cgraphz00,
		BgL_bgl__getza7d2varza7f2all3849z00,
		BGl__getzd2varzf2allz20zzeffect_cgraphz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3787z00zzeffect_cgraphz00,
		BgL_bgl_callza7d2graphza712za73850za7,
		BGl_callzd2graphz12zd2select3458z12zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3788z00zzeffect_cgraphz00,
		BgL_bgl_callza7d2graphza712za73851za7,
		BGl_callzd2graphz12zd2letzd2fun3460zc0zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3790z00zzeffect_cgraphz00,
		BgL_bgl_callza7d2graphza712za73852za7,
		BGl_callzd2graphz12zd2setzd2exzd2i3464z12zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3789z00zzeffect_cgraphz00,
		BgL_bgl_callza7d2graphza712za73853za7,
		BGl_callzd2graphz12zd2letzd2var3462zc0zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3801z00zzeffect_cgraphz00,
		BgL_bgl_structza7b2objectza73854z00,
		BGl_structzb2objectzd2ze3objec3487z83zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3791z00zzeffect_cgraphz00,
		BgL_bgl_callza7d2graphza712za73855za7,
		BGl_callzd2graphz12zd2jumpzd2exzd23466z12zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3792z00zzeffect_cgraphz00,
		BgL_bgl_callza7d2graphza712za73856za7,
		BGl_callzd2graphz12zd2makezd2box3468zc0zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3803z00zzeffect_cgraphz00,
		BgL_bgl_objectza7d2za7e3stru3857z00,
		BGl_objectzd2ze3structzd2local3489ze3zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3793z00zzeffect_cgraphz00,
		BgL_bgl_callza7d2graphza712za73858za7,
		BGl_callzd2graphz12zd2boxzd2ref3470zc0zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3804z00zzeffect_cgraphz00,
		BgL_bgl_structza7b2objectza73859z00,
		BGl_structzb2objectzd2ze3objec3491z83zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3794z00zzeffect_cgraphz00,
		BgL_bgl_callza7d2graphza712za73860za7,
		BGl_callzd2graphz12zd2boxzd2setz123472zd2zzeffect_cgraphz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3795z00zzeffect_cgraphz00,
		BgL_bgl_saveza7d2callza712za7d3861za7,
		BGl_savezd2callz12zd2global3477z12zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3796z00zzeffect_cgraphz00,
		BgL_bgl_saveza7d2callza712za7d3862za7,
		BGl_savezd2callz12zd2globalzf2fr3479ze0zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3797z00zzeffect_cgraphz00,
		BgL_bgl_saveza7d2callza712za7d3863za7,
		BGl_savezd2callz12zd2local3481z12zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3798z00zzeffect_cgraphz00,
		BgL_bgl_saveza7d2callza712za7d3864za7,
		BGl_savezd2callz12zd2localzf2fro3483ze0zzeffect_cgraphz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3799z00zzeffect_cgraphz00,
		BgL_bgl_objectza7d2za7e3stru3865z00,
		BGl_objectzd2ze3structzd2globa3485ze3zzeffect_cgraphz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2fromzd2nilzd2envzf2zzeffect_cgraphz00,
		BgL_bgl__localza7f2fromza7d23866z00,
		BGl__localzf2fromzd2nilz20zzeffect_cgraphz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzeffect_cgraphz00(long
		BgL_checksumz00_2937, char *BgL_fromz00_2938)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzeffect_cgraphz00))
				{
					BGl_requirezd2initializa7ationz75zzeffect_cgraphz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzeffect_cgraphz00();
					BGl_cnstzd2initzd2zzeffect_cgraphz00();
					BGl_importedzd2moduleszd2initz00zzeffect_cgraphz00();
					BGl_objectzd2initzd2zzeffect_cgraphz00();
					BGl_genericzd2initzd2zzeffect_cgraphz00();
					BGl_methodzd2initzd2zzeffect_cgraphz00();
					BGl_toplevelzd2initzd2zzeffect_cgraphz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzeffect_cgraphz00()
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"effect_cgraph");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"effect_cgraph");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "effect_cgraph");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"effect_cgraph");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzeffect_cgraphz00()
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 15 */
			{	/* Effect/cgraph.scm 15 */
				obj_t BgL_cportz00_2904;

				BgL_cportz00_2904 =
					bgl_open_input_string(BGl_string3806z00zzeffect_cgraphz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2905;

					BgL_iz00_2905 = ((long) 6);
				BgL_loopz00_2906:
					if ((BgL_iz00_2905 == ((long) -1)))
						{	/* Effect/cgraph.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Effect/cgraph.scm 15 */
							{	/* Effect/cgraph.scm 15 */
								obj_t BgL_arg3808z00_2908;

								{	/* Effect/cgraph.scm 15 */

									{	/* Effect/cgraph.scm 15 */
										obj_t BgL_locationz00_2910;

										BgL_locationz00_2910 = BBOOL(((bool_t) 0));
										{	/* Effect/cgraph.scm 15 */

											BgL_arg3808z00_2908 =
												BGl_readz00zz__readerz00(BgL_cportz00_2904,
												BgL_locationz00_2910);
										}
									}
								}
								{	/* Effect/cgraph.scm 15 */
									int BgL_auxz00_2959;

									BgL_auxz00_2959 = (int) (BgL_iz00_2905);
									CNST_TABLE_SET(BgL_auxz00_2959, BgL_arg3808z00_2908);
							}}
							{	/* Effect/cgraph.scm 15 */
								int BgL_auxz00_2911;

								BgL_auxz00_2911 = (int) ((BgL_iz00_2905 - ((long) 1)));
								{
									long BgL_iz00_2964;

									BgL_iz00_2964 = (long) (BgL_auxz00_2911);
									BgL_iz00_2905 = BgL_iz00_2964;
									goto BgL_loopz00_2906;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzeffect_cgraphz00()
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 15 */
			BGl_za2varzf2sidezd2effectza2z20zzeffect_cgraphz00 = BNIL;
			return (BGl_za2varzf2allza2zf2zzeffect_cgraphz00 = BNIL, BUNSPEC);
		}
	}



/* fun-call-graph! */
	BGL_EXPORTED_DEF obj_t
		BGl_funzd2callzd2graphz12z12zzeffect_cgraphz00(BgL_variablez00_bglt
		BgL_variablez00_1)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 30 */
			BGl_za2varzf2allza2zf2zzeffect_cgraphz00 =
				MAKE_PAIR(
				(obj_t) (BgL_variablez00_1), BGl_za2varzf2allza2zf2zzeffect_cgraphz00);
			{	/* Effect/cgraph.scm 32 */
				obj_t BgL_arg3492z00_875;

				{	/* Effect/cgraph.scm 32 */
					BgL_sfunz00_bglt BgL_obj1884z00_1581;

					BgL_obj1884z00_1581 =
						(BgL_sfunz00_bglt) (
						(((BgL_variablez00_bglt) CREF(BgL_variablez00_1))->BgL_valuez00));
					BgL_arg3492z00_875 =
						(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_1581))->BgL_bodyz00);
				}
				{	/* Effect/cgraph.scm 32 */
					BgL_nodez00_bglt BgL_nodez00_1582;

					BgL_nodez00_1582 = (BgL_nodez00_bglt) (BgL_arg3492z00_875);
					{	/* Effect/cgraph.scm 32 */
						obj_t BgL_method3438z00_1584;

						{	/* Effect/cgraph.scm 32 */
							BgL_objectz00_bglt BgL_objz00_1585;

							BgL_objz00_1585 = (BgL_objectz00_bglt) (BgL_nodez00_1582);
							{	/* Effect/cgraph.scm 32 */
								long BgL_objzd2classzd2numz00_1586;

								BgL_objzd2classzd2numz00_1586 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1585);
								{	/* Effect/cgraph.scm 32 */
									obj_t BgL_arg2643z00_1587;

									BgL_arg2643z00_1587 =
										PROCEDURE_REF
										(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
										(int) (((long) 1)));
									{	/* Effect/cgraph.scm 32 */
										obj_t BgL_arrayz00_1589;

										int BgL_offsetz00_1590;

										BgL_arrayz00_1589 = BgL_arg2643z00_1587;
										BgL_offsetz00_1590 = (int) (BgL_objzd2classzd2numz00_1586);
										{	/* Effect/cgraph.scm 32 */
											long BgL_offsetz00_1591;

											BgL_offsetz00_1591 =
												((long) (BgL_offsetz00_1590) - OBJECT_TYPE);
											{	/* Effect/cgraph.scm 32 */
												long BgL_modz00_1592;

												{	/* Effect/cgraph.scm 32 */
													int BgL_arg2645z00_1593;

													BgL_arg2645z00_1593 = (int) (((long) 16));
													{	/* Effect/cgraph.scm 32 */
														long BgL_auxz00_2980;

														BgL_auxz00_2980 = (long) (BgL_arg2645z00_1593);
														BgL_modz00_1592 =
															(BgL_offsetz00_1591 / BgL_auxz00_2980);
												}}
												{	/* Effect/cgraph.scm 32 */
													long BgL_restz00_1594;

													{	/* Effect/cgraph.scm 32 */
														int BgL_arg2644z00_1595;

														BgL_arg2644z00_1595 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 32 */
															long BgL_auxz00_2984;

															BgL_auxz00_2984 = (long) (BgL_arg2644z00_1595);
															BgL_restz00_1594 =
																(BgL_offsetz00_1591 % BgL_auxz00_2984);
													}}
													{	/* Effect/cgraph.scm 32 */

														BgL_method3438z00_1584 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1589,
																(int) (BgL_modz00_1592)),
															(int) (BgL_restz00_1594));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3438z00_1584) (BgL_method3438z00_1584,
							(obj_t) (BgL_nodez00_1582), (obj_t) (BgL_variablez00_1), BEOA);
					}
				}
			}
		}
	}



/* _fun-call-graph! */
	obj_t BGl__funzd2callzd2graphz12z12zzeffect_cgraphz00(obj_t BgL_envz00_2736,
		obj_t BgL_variablez00_2737)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 30 */
			return
				BGl_funzd2callzd2graphz12z12zzeffect_cgraphz00(
				(BgL_variablez00_bglt) (BgL_variablez00_2737));
		}
	}



/* call-graph*! */
	bool_t BGl_callzd2graphza2z12z62zzeffect_cgraphz00(obj_t BgL_nodeza2za2_40,
		obj_t BgL_ownerz00_41)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 197 */
			{
				obj_t BgL_l3433z00_878;

				BgL_l3433z00_878 = BgL_nodeza2za2_40;
			BgL_zc3anonymousza33494ze3z83_879:
				if (PAIRP(BgL_l3433z00_878))
					{	/* Effect/cgraph.scm 198 */
						{	/* Effect/cgraph.scm 198 */
							obj_t BgL_nodez00_881;

							BgL_nodez00_881 = CAR(BgL_l3433z00_878);
							{	/* Effect/cgraph.scm 198 */
								BgL_nodez00_bglt BgL_nodez00_1611;

								BgL_variablez00_bglt BgL_ownerz00_1612;

								BgL_nodez00_1611 = (BgL_nodez00_bglt) (BgL_nodez00_881);
								BgL_ownerz00_1612 = (BgL_variablez00_bglt) (BgL_ownerz00_41);
								{	/* Effect/cgraph.scm 198 */
									obj_t BgL_method3438z00_1613;

									{	/* Effect/cgraph.scm 198 */
										BgL_objectz00_bglt BgL_objz00_1614;

										BgL_objz00_1614 = (BgL_objectz00_bglt) (BgL_nodez00_1611);
										{	/* Effect/cgraph.scm 198 */
											long BgL_objzd2classzd2numz00_1615;

											BgL_objzd2classzd2numz00_1615 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1614);
											{	/* Effect/cgraph.scm 198 */
												obj_t BgL_arg2643z00_1616;

												BgL_arg2643z00_1616 =
													PROCEDURE_REF
													(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
													(int) (((long) 1)));
												{	/* Effect/cgraph.scm 198 */
													obj_t BgL_arrayz00_1618;

													int BgL_offsetz00_1619;

													BgL_arrayz00_1618 = BgL_arg2643z00_1616;
													BgL_offsetz00_1619 =
														(int) (BgL_objzd2classzd2numz00_1615);
													{	/* Effect/cgraph.scm 198 */
														long BgL_offsetz00_1620;

														BgL_offsetz00_1620 =
															((long) (BgL_offsetz00_1619) - OBJECT_TYPE);
														{	/* Effect/cgraph.scm 198 */
															long BgL_modz00_1621;

															{	/* Effect/cgraph.scm 198 */
																int BgL_arg2645z00_1622;

																BgL_arg2645z00_1622 = (int) (((long) 16));
																{	/* Effect/cgraph.scm 198 */
																	long BgL_auxz00_3010;

																	BgL_auxz00_3010 =
																		(long) (BgL_arg2645z00_1622);
																	BgL_modz00_1621 =
																		(BgL_offsetz00_1620 / BgL_auxz00_3010);
															}}
															{	/* Effect/cgraph.scm 198 */
																long BgL_restz00_1623;

																{	/* Effect/cgraph.scm 198 */
																	int BgL_arg2644z00_1624;

																	BgL_arg2644z00_1624 = (int) (((long) 16));
																	{	/* Effect/cgraph.scm 198 */
																		long BgL_auxz00_3014;

																		BgL_auxz00_3014 =
																			(long) (BgL_arg2644z00_1624);
																		BgL_restz00_1623 =
																			(BgL_offsetz00_1620 % BgL_auxz00_3014);
																}}
																{	/* Effect/cgraph.scm 198 */

																	BgL_method3438z00_1613 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1618,
																			(int) (BgL_modz00_1621)),
																		(int) (BgL_restz00_1623));
									}}}}}}}}
									PROCEDURE_ENTRY(BgL_method3438z00_1613)
										(BgL_method3438z00_1613, (obj_t) (BgL_nodez00_1611),
										(obj_t) (BgL_ownerz00_1612), BEOA);
						}}}
						{
							obj_t BgL_l3433z00_3025;

							BgL_l3433z00_3025 = CDR(BgL_l3433z00_878);
							BgL_l3433z00_878 = BgL_l3433z00_3025;
							goto BgL_zc3anonymousza33494ze3z83_879;
						}
					}
				else
					{	/* Effect/cgraph.scm 198 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* get-var/side-effect */
	BGL_EXPORTED_DEF obj_t BGl_getzd2varzf2sidezd2effectzf2zzeffect_cgraphz00()
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 242 */
			return BGl_za2varzf2sidezd2effectza2z20zzeffect_cgraphz00;
		}
	}



/* _get-var/side-effect */
	obj_t BGl__getzd2varzf2sidezd2effectzf2zzeffect_cgraphz00(obj_t
		BgL_envz00_2741)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 242 */
			return BGl_za2varzf2sidezd2effectza2z20zzeffect_cgraphz00;
		}
	}



/* get-var/all */
	BGL_EXPORTED_DEF obj_t BGl_getzd2varzf2allz20zzeffect_cgraphz00()
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 253 */
			return BGl_za2varzf2allza2zf2zzeffect_cgraphz00;
		}
	}



/* _get-var/all */
	obj_t BGl__getzd2varzf2allz20zzeffect_cgraphz00(obj_t BgL_envz00_2742)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 253 */
			return BGl_za2varzf2allza2zf2zzeffect_cgraphz00;
		}
	}



/* reset-effect-tables! */
	BGL_EXPORTED_DEF obj_t BGl_resetzd2effectzd2tablesz12z12zzeffect_cgraphz00()
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 264 */
			BGl_za2varzf2sidezd2effectza2z20zzeffect_cgraphz00 = BNIL;
			return (BGl_za2varzf2allza2zf2zzeffect_cgraphz00 = BNIL, BUNSPEC);
		}
	}



/* _reset-effect-tables! */
	obj_t BGl__resetzd2effectzd2tablesz12z12zzeffect_cgraphz00(obj_t
		BgL_envz00_2743)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 264 */
			return BGl_resetzd2effectzd2tablesz12z12zzeffect_cgraphz00();
		}
	}



/* mark-side-effect! */
	obj_t BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(BgL_variablez00_bglt
		BgL_vz00_54)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 271 */
			{	/* Effect/cgraph.scm 273 */
				BgL_valuez00_bglt BgL_funz00_884;

				BgL_funz00_884 =
					(((BgL_variablez00_bglt) CREF(BgL_vz00_54))->BgL_valuez00);
				{	/* Effect/cgraph.scm 275 */
					bool_t BgL_testz00_3029;

					{	/* Effect/cgraph.scm 275 */
						BgL_funz00_bglt BgL_obj1814z00_1640;

						BgL_obj1814z00_1640 = (BgL_funz00_bglt) (BgL_funz00_884);
						BgL_testz00_3029 =
							CBOOL(
							(((BgL_funz00_bglt) CREF(BgL_obj1814z00_1640))->
								BgL_sidezd2effectzf3z21));
					}
					if (BgL_testz00_3029)
						{	/* Effect/cgraph.scm 275 */
							if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
										(obj_t) (BgL_vz00_54),
										BGl_za2varzf2sidezd2effectza2z20zzeffect_cgraphz00)))
								{	/* Effect/cgraph.scm 278 */
									return CNST_TABLE_REF(((long) 0));
								}
							else
								{	/* Effect/cgraph.scm 278 */
									return (BGl_za2varzf2sidezd2effectza2z20zzeffect_cgraphz00 =
										MAKE_PAIR(
											(obj_t) (BgL_vz00_54),
											BGl_za2varzf2sidezd2effectza2z20zzeffect_cgraphz00),
										BUNSPEC);
								}
						}
					else
						{	/* Effect/cgraph.scm 275 */
							BGl_za2varzf2sidezd2effectza2z20zzeffect_cgraphz00 =
								MAKE_PAIR(
								(obj_t) (BgL_vz00_54),
								BGl_za2varzf2sidezd2effectza2z20zzeffect_cgraphz00);
							{
								BgL_funz00_bglt BgL_auxz00_3042;

								BgL_auxz00_3042 = (BgL_funz00_bglt) (BgL_funz00_884);
								return
									((((BgL_funz00_bglt) CREF(BgL_auxz00_3042))->
										BgL_sidezd2effectzf3z21) = ((obj_t) BTRUE), BUNSPEC);
							}
						}
				}
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzeffect_cgraphz00()
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 15 */
			{	/* Effect/cgraph.scm 20 */
				obj_t BgL_arg3499z00_887;

				obj_t BgL_arg3500z00_888;

				obj_t BgL_arg3503z00_891;

				BgL_arg3499z00_887 = CNST_TABLE_REF(((long) 1));
				BgL_arg3500z00_888 = BGl_localz00zzast_varz00;
				{	/* Effect/cgraph.scm 20 */
					obj_t BgL_v3435z00_892;

					BgL_v3435z00_892 = create_vector((int) (((long) 0)));
					BgL_arg3503z00_891 = BgL_v3435z00_892;
				}
				BGl_localzf2fromzf2zzeffect_cgraphz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3499z00_887,
					BgL_arg3500z00_888, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2localzf2fromzd2envza0zzeffect_cgraphz00,
					BGl_localzf2fromzd2nilzd2envzf2zzeffect_cgraphz00,
					BGl_localzf2fromzf3zd2envzd3zzeffect_cgraphz00, ((long) 443584018),
					BFALSE, BFALSE, BgL_arg3503z00_891);
			}
			{	/* Effect/cgraph.scm 21 */
				obj_t BgL_arg3504z00_893;

				obj_t BgL_arg3505z00_894;

				obj_t BgL_arg3508z00_897;

				BgL_arg3504z00_893 = CNST_TABLE_REF(((long) 2));
				BgL_arg3505z00_894 = BGl_globalz00zzast_varz00;
				{	/* Effect/cgraph.scm 21 */
					obj_t BgL_v3436z00_898;

					BgL_v3436z00_898 = create_vector((int) (((long) 0)));
					BgL_arg3508z00_897 = BgL_v3436z00_898;
				}
				BGl_globalzf2fromzf2zzeffect_cgraphz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3504z00_893,
					BgL_arg3505z00_894, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2globalzf2fromzd2envza0zzeffect_cgraphz00,
					BGl_globalzf2fromzd2nilzd2envzf2zzeffect_cgraphz00,
					BGl_globalzf2fromzf3zd2envzd3zzeffect_cgraphz00, ((long) 410954352),
					BFALSE, BFALSE, BgL_arg3508z00_897);
			}
			BGl_z52thezd2globalzf2fromzd2nilza0zzeffect_cgraphz00 = BUNSPEC;
			return (BGl_z52thezd2localzf2fromzd2nilza0zzeffect_cgraphz00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* global/from? */
	BGL_EXPORTED_DEF bool_t BGl_globalzf2fromzf3z01zzeffect_cgraphz00(obj_t
		BgL_obj3335z00_55)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 21 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3335z00_55,
				BGl_globalzf2fromzf2zzeffect_cgraphz00);
		}
	}



/* _global/from? */
	obj_t BGl__globalzf2fromzf3z01zzeffect_cgraphz00(obj_t BgL_envz00_2750,
		obj_t BgL_obj3335z00_2751)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 21 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3335z00_2751,
					BGl_globalzf2fromzf2zzeffect_cgraphz00));
		}
	}



/* widening-global/from */
	BGL_EXPORTED_DEF BgL_globalzf2fromzf2_bglt
		BGl_wideningzd2globalzf2fromz20zzeffect_cgraphz00(obj_t BgL_from3301z00_59)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 21 */
			{	/* Effect/cgraph.scm 21 */
				BgL_globalzf2fromzf2_bglt BgL_new3302z00_1643;

				BgL_new3302z00_1643 =
					((BgL_globalzf2fromzf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_globalzf2fromzf2_bgl))));
				{	/* Effect/cgraph.scm 21 */
					BgL_globalzf2fromzf2_bglt BgL_res3689z00_1647;

					{	/* Effect/cgraph.scm 21 */
						BgL_globalzf2fromzf2_bglt BgL_new3324z00_1644;

						BgL_new3324z00_1644 = BgL_new3302z00_1643;
						{	/* Effect/cgraph.scm 21 */
							obj_t BgL_from3323z00_1646;

							BgL_from3323z00_1646 = BgL_from3301z00_59;
							((((BgL_globalzf2fromzf2_bglt) CREF(BgL_new3324z00_1644))->
									BgL_fromz00) = ((obj_t) BgL_from3323z00_1646), BUNSPEC);
							BgL_res3689z00_1647 = BgL_new3324z00_1644;
					}} BgL_res3689z00_1647;
				}
				return BgL_new3302z00_1643;
			}
		}
	}



/* _widening-global/from */
	obj_t BGl__wideningzd2globalzf2fromz20zzeffect_cgraphz00(obj_t
		BgL_envz00_2752, obj_t BgL_from3301z00_2753)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 21 */
			return
				(obj_t) (BGl_wideningzd2globalzf2fromz20zzeffect_cgraphz00
				(BgL_from3301z00_2753));
		}
	}



/* make-global/from */
	BGL_EXPORTED_DEF BgL_globalzf2fromzf2_bglt
		BGl_makezd2globalzf2fromz20zzeffect_cgraphz00(obj_t BgL_id3305z00_60,
		obj_t BgL_name3306z00_61, BgL_typez00_bglt BgL_type3307z00_62,
		BgL_valuez00_bglt BgL_value3308z00_63, obj_t BgL_access3309z00_64,
		obj_t BgL_fastzd2alpha3310zd2_65, obj_t BgL_removable3311z00_66,
		long BgL_occurrence3312z00_67, obj_t BgL_module3313z00_68,
		obj_t BgL_import3314z00_69, bool_t BgL_evaluablezf33315zf3_70,
		obj_t BgL_library3316z00_71, bool_t BgL_userzf33317zf3_72,
		obj_t BgL_pragma3318z00_73, obj_t BgL_src3319z00_74,
		obj_t BgL_jvmzd2typezd2name3320z00_75, obj_t BgL_from3304z00_76)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 21 */
			{	/* Effect/cgraph.scm 21 */
				BgL_globalz00_bglt BgL_aux3321z00_1648;

				BgL_aux3321z00_1648 =
					BGl_makezd2globalzd2zzast_varz00(BgL_id3305z00_60, BgL_name3306z00_61,
					BgL_type3307z00_62, BgL_value3308z00_63, BgL_access3309z00_64,
					BgL_fastzd2alpha3310zd2_65, BgL_removable3311z00_66,
					BgL_occurrence3312z00_67, BgL_module3313z00_68, BgL_import3314z00_69,
					BgL_evaluablezf33315zf3_70, BgL_library3316z00_71,
					BgL_userzf33317zf3_72, BgL_pragma3318z00_73, BgL_src3319z00_74,
					BgL_jvmzd2typezd2name3320z00_75);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3321z00_1648),
					BGl_classzd2numzd2zz__objectz00
					(BGl_globalzf2fromzf2zzeffect_cgraphz00));
				{	/* Effect/cgraph.scm 21 */
					BgL_globalzf2fromzf2_bglt BgL_arg3510z00_1650;

					{	/* Effect/cgraph.scm 21 */
						BgL_globalzf2fromzf2_bglt BgL_res3691z00_1660;

						{	/* Effect/cgraph.scm 21 */
							BgL_globalzf2fromzf2_bglt BgL_new3302z00_1655;

							BgL_new3302z00_1655 =
								((BgL_globalzf2fromzf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_globalzf2fromzf2_bgl))));
							{	/* Effect/cgraph.scm 21 */
								BgL_globalzf2fromzf2_bglt BgL_res3690z00_1659;

								{	/* Effect/cgraph.scm 21 */
									BgL_globalzf2fromzf2_bglt BgL_new3324z00_1656;

									BgL_new3324z00_1656 = BgL_new3302z00_1655;
									{	/* Effect/cgraph.scm 21 */
										obj_t BgL_from3323z00_1658;

										BgL_from3323z00_1658 = BgL_from3304z00_76;
										((((BgL_globalzf2fromzf2_bglt) CREF(BgL_new3324z00_1656))->
												BgL_fromz00) = ((obj_t) BgL_from3323z00_1658), BUNSPEC);
										BgL_res3690z00_1659 = BgL_new3324z00_1656;
								}} BgL_res3690z00_1659;
							}
							BgL_res3691z00_1660 = BgL_new3302z00_1655;
						}
						BgL_arg3510z00_1650 = BgL_res3691z00_1660;
					}
					{	/* Effect/cgraph.scm 21 */
						obj_t BgL_auxz00_3068;

						BgL_objectz00_bglt BgL_auxz00_3066;

						BgL_auxz00_3068 = (obj_t) (BgL_arg3510z00_1650);
						BgL_auxz00_3066 = (BgL_objectz00_bglt) (BgL_aux3321z00_1648);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_3066, BgL_auxz00_3068);
				}}
				return
					((BgL_globalzf2fromzf2_bglt)
					(BgL_globalzf2fromzf2_bglt) (BgL_aux3321z00_1648));
			}
		}
	}



/* _make-global/from */
	obj_t BGl__makezd2globalzf2fromz20zzeffect_cgraphz00(obj_t BgL_envz00_2754,
		obj_t BgL_id3305z00_2755, obj_t BgL_name3306z00_2756,
		obj_t BgL_type3307z00_2757, obj_t BgL_value3308z00_2758,
		obj_t BgL_access3309z00_2759, obj_t BgL_fastzd2alpha3310zd2_2760,
		obj_t BgL_removable3311z00_2761, obj_t BgL_occurrence3312z00_2762,
		obj_t BgL_module3313z00_2763, obj_t BgL_import3314z00_2764,
		obj_t BgL_evaluablezf33315zf3_2765, obj_t BgL_library3316z00_2766,
		obj_t BgL_userzf33317zf3_2767, obj_t BgL_pragma3318z00_2768,
		obj_t BgL_src3319z00_2769, obj_t BgL_jvmzd2typezd2name3320z00_2770,
		obj_t BgL_from3304z00_2771)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 21 */
			return
				(obj_t) (BGl_makezd2globalzf2fromz20zzeffect_cgraphz00
				(BgL_id3305z00_2755, BgL_name3306z00_2756,
					(BgL_typez00_bglt) (BgL_type3307z00_2757),
					(BgL_valuez00_bglt) (BgL_value3308z00_2758), BgL_access3309z00_2759,
					BgL_fastzd2alpha3310zd2_2760, BgL_removable3311z00_2761,
					(long) CINT(BgL_occurrence3312z00_2762), BgL_module3313z00_2763,
					BgL_import3314z00_2764, CBOOL(BgL_evaluablezf33315zf3_2765),
					BgL_library3316z00_2766, CBOOL(BgL_userzf33317zf3_2767),
					BgL_pragma3318z00_2768, BgL_src3319z00_2769,
					BgL_jvmzd2typezd2name3320z00_2770, BgL_from3304z00_2771));
		}
	}



/* fill-global/from! */
	BGL_EXPORTED_DEF BgL_globalzf2fromzf2_bglt
		BGl_fillzd2globalzf2fromz12z32zzeffect_cgraphz00(BgL_globalzf2fromzf2_bglt
		BgL_new3324z00_77, obj_t BgL_from3323z00_78)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 21 */
			{	/* Effect/cgraph.scm 21 */
				obj_t BgL_from3323z00_2913;

				BgL_from3323z00_2913 = BgL_from3323z00_78;
				((((BgL_globalzf2fromzf2_bglt) CREF(BgL_new3324z00_77))->BgL_fromz00) =
					((obj_t) BgL_from3323z00_2913), BUNSPEC);
				return BgL_new3324z00_77;
			}
		}
	}



/* _fill-global/from! */
	obj_t BGl__fillzd2globalzf2fromz12z32zzeffect_cgraphz00(obj_t BgL_envz00_2772,
		obj_t BgL_new3324z00_2773, obj_t BgL_from3323z00_2774)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 21 */
			{	/* Effect/cgraph.scm 21 */
				BgL_globalzf2fromzf2_bglt BgL_auxz00_3081;

				{	/* Effect/cgraph.scm 21 */
					BgL_globalzf2fromzf2_bglt BgL_res3809z00_2917;

					{	/* Effect/cgraph.scm 21 */
						BgL_globalzf2fromzf2_bglt BgL_new3324z00_2914;

						BgL_new3324z00_2914 =
							(BgL_globalzf2fromzf2_bglt) (BgL_new3324z00_2773);
						{	/* Effect/cgraph.scm 21 */
							obj_t BgL_from3323z00_2916;

							BgL_from3323z00_2916 = BgL_from3323z00_2774;
							((((BgL_globalzf2fromzf2_bglt) CREF(BgL_new3324z00_2914))->
									BgL_fromz00) = ((obj_t) BgL_from3323z00_2916), BUNSPEC);
							BgL_res3809z00_2917 = BgL_new3324z00_2914;
						}
					}
					BgL_auxz00_3081 = BgL_res3809z00_2917;
				}
				return (obj_t) (BgL_auxz00_3081);
			}
		}
	}



/* %allocate-global/from */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_z52allocatezd2globalzf2fromz72zzeffect_cgraphz00()
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 21 */
			{	/* Effect/cgraph.scm 21 */
				BgL_globalz00_bglt BgL_new3327z00_2918;

				BgL_new3327z00_2918 =
					((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_globalz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3327z00_2918),
					BGl_classzd2numzd2zz__objectz00
					(BGl_globalzf2fromzf2zzeffect_cgraphz00));
				{	/* Effect/cgraph.scm 21 */
					BgL_objectz00_bglt BgL_auxz00_3089;

					BgL_auxz00_3089 = (BgL_objectz00_bglt) (BgL_new3327z00_2918);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3089, BFALSE);
				}
				return BgL_new3327z00_2918;
			}
		}
	}



/* _%allocate-global/from */
	obj_t BGl__z52allocatezd2globalzf2fromz72zzeffect_cgraphz00(obj_t
		BgL_envz00_2748)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 21 */
			{	/* Effect/cgraph.scm 21 */
				BgL_globalz00_bglt BgL_auxz00_3092;

				{	/* Effect/cgraph.scm 21 */
					BgL_globalz00_bglt BgL_res3810z00_2922;

					{	/* Effect/cgraph.scm 21 */
						BgL_globalz00_bglt BgL_new3327z00_2920;

						BgL_new3327z00_2920 =
							((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_globalz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3327z00_2920),
							BGl_classzd2numzd2zz__objectz00
							(BGl_globalzf2fromzf2zzeffect_cgraphz00));
						{	/* Effect/cgraph.scm 21 */
							BgL_objectz00_bglt BgL_auxz00_3097;

							BgL_auxz00_3097 = (BgL_objectz00_bglt) (BgL_new3327z00_2920);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3097, BFALSE);
						}
						BgL_res3810z00_2922 = BgL_new3327z00_2920;
					}
					BgL_auxz00_3092 = BgL_res3810z00_2922;
				}
				return (obj_t) (BgL_auxz00_3092);
			}
		}
	}



/* global/from-nil */
	BGL_EXPORTED_DEF BgL_globalzf2fromzf2_bglt
		BGl_globalzf2fromzd2nilz20zzeffect_cgraphz00()
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 21 */
			if ((BGl_z52thezd2globalzf2fromzd2nilza0zzeffect_cgraphz00 == BUNSPEC))
				{	/* Effect/cgraph.scm 21 */
					{	/* Effect/cgraph.scm 21 */
						BgL_globalz00_bglt BgL_res3692z00_1670;

						{	/* Effect/cgraph.scm 21 */
							BgL_globalz00_bglt BgL_new1750z00_1666;

							BgL_new1750z00_1666 =
								((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_globalz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1750z00_1666),
								BGl_classzd2numzd2zz__objectz00(BGl_globalz00zzast_varz00));
							{	/* Effect/cgraph.scm 21 */
								BgL_objectz00_bglt BgL_auxz00_3107;

								BgL_auxz00_3107 = (BgL_objectz00_bglt) (BgL_new1750z00_1666);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3107, BFALSE);
							}
							BgL_res3692z00_1670 = BgL_new1750z00_1666;
						}
						BGl_z52thezd2globalzf2fromzd2nilza0zzeffect_cgraphz00 =
							(obj_t) (BgL_res3692z00_1670);
					}
					{	/* Effect/cgraph.scm 21 */
						obj_t BgL_arg3513z00_908;

						BgL_typez00_bglt BgL_arg3514z00_909;

						BgL_valuez00_bglt BgL_arg3515z00_910;

						obj_t BgL_arg3518z00_912;

						BgL_arg3513z00_908 = CNST_TABLE_REF(((long) 3));
						BgL_arg3514z00_909 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg3515z00_910 = BGl_valuezd2nilzd2zzast_varz00();
						BgL_arg3518z00_912 = CNST_TABLE_REF(((long) 3));
						{	/* Effect/cgraph.scm 21 */
							BgL_globalz00_bglt BgL_res3693z00_1704;

							{	/* Effect/cgraph.scm 21 */
								BgL_globalz00_bglt BgL_new1732z00_1671;

								BgL_new1732z00_1671 =
									(BgL_globalz00_bglt)
									(BGl_z52thezd2globalzf2fromzd2nilza0zzeffect_cgraphz00);
								{	/* Effect/cgraph.scm 21 */
									obj_t BgL_id1716z00_1688;

									obj_t BgL_name1717z00_1689;

									BgL_typez00_bglt BgL_type1718z00_1690;

									BgL_valuez00_bglt BgL_value1719z00_1691;

									obj_t BgL_access1720z00_1692;

									obj_t BgL_fastzd2alpha1721zd2_1693;

									obj_t BgL_removable1722z00_1694;

									long BgL_occurrence1723z00_1695;

									obj_t BgL_module1724z00_1696;

									obj_t BgL_import1725z00_1697;

									bool_t BgL_evaluablezf31726zf3_1698;

									obj_t BgL_library1727z00_1699;

									bool_t BgL_userzf31728zf3_1700;

									obj_t BgL_pragma1729z00_1701;

									obj_t BgL_src1730z00_1702;

									obj_t BgL_jvmzd2typezd2name1731z00_1703;

									BgL_id1716z00_1688 = BgL_arg3513z00_908;
									BgL_name1717z00_1689 = BUNSPEC;
									BgL_type1718z00_1690 = BgL_arg3514z00_909;
									BgL_value1719z00_1691 = BgL_arg3515z00_910;
									BgL_access1720z00_1692 = BUNSPEC;
									BgL_fastzd2alpha1721zd2_1693 = BUNSPEC;
									BgL_removable1722z00_1694 = BUNSPEC;
									BgL_occurrence1723z00_1695 = ((long) 0);
									BgL_module1724z00_1696 = BgL_arg3518z00_912;
									BgL_import1725z00_1697 = BUNSPEC;
									BgL_evaluablezf31726zf3_1698 = ((bool_t) 0);
									BgL_library1727z00_1699 = BUNSPEC;
									BgL_userzf31728zf3_1700 = ((bool_t) 0);
									BgL_pragma1729z00_1701 = BUNSPEC;
									BgL_src1730z00_1702 = BUNSPEC;
									BgL_jvmzd2typezd2name1731z00_1703 =
										BGl_string3774z00zzeffect_cgraphz00;
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1671))->
											BgL_idz00) = ((obj_t) BgL_id1716z00_1688), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1671))->
											BgL_namez00) = ((obj_t) BgL_name1717z00_1689), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1671))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type1718z00_1690), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1671))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) BgL_value1719z00_1691), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1671))->
											BgL_accessz00) =
										((obj_t) BgL_access1720z00_1692), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1671))->
											BgL_fastzd2alphazd2) =
										((obj_t) BgL_fastzd2alpha1721zd2_1693), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1671))->
											BgL_removablez00) =
										((obj_t) BgL_removable1722z00_1694), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1671))->
											BgL_occurrencez00) =
										((long) BgL_occurrence1723z00_1695), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1671))->
											BgL_modulez00) =
										((obj_t) BgL_module1724z00_1696), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1671))->
											BgL_importz00) =
										((obj_t) BgL_import1725z00_1697), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1671))->
											BgL_evaluablezf3zf3) =
										((bool_t) BgL_evaluablezf31726zf3_1698), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1671))->
											BgL_libraryz00) =
										((obj_t) BgL_library1727z00_1699), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1671))->
											BgL_userzf3zf3) =
										((bool_t) BgL_userzf31728zf3_1700), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1671))->
											BgL_pragmaz00) =
										((obj_t) BgL_pragma1729z00_1701), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1671))->
											BgL_srcz00) = ((obj_t) BgL_src1730z00_1702), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1671))->
											BgL_jvmzd2typezd2namez00) =
										((obj_t) BgL_jvmzd2typezd2name1731z00_1703), BUNSPEC);
									BgL_res3693z00_1704 = BgL_new1732z00_1671;
							}} BgL_res3693z00_1704;
					}}
					{	/* Effect/cgraph.scm 21 */
						long BgL_arg3520z00_914;

						BgL_arg3520z00_914 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_globalzf2fromzf2zzeffect_cgraphz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2globalzf2fromzd2nilza0zzeffect_cgraphz00),
							BgL_arg3520z00_914);
					}
					{	/* Effect/cgraph.scm 21 */
						BgL_globalzf2fromzf2_bglt BgL_arg3521z00_915;

						{	/* Effect/cgraph.scm 21 */
							BgL_globalzf2fromzf2_bglt BgL_res3695z00_1713;

							{	/* Effect/cgraph.scm 21 */
								BgL_globalzf2fromzf2_bglt BgL_new3302z00_1708;

								BgL_new3302z00_1708 =
									((BgL_globalzf2fromzf2_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_globalzf2fromzf2_bgl))));
								{	/* Effect/cgraph.scm 21 */
									BgL_globalzf2fromzf2_bglt BgL_res3694z00_1712;

									{	/* Effect/cgraph.scm 21 */
										BgL_globalzf2fromzf2_bglt BgL_new3324z00_1709;

										BgL_new3324z00_1709 = BgL_new3302z00_1708;
										{	/* Effect/cgraph.scm 21 */
											obj_t BgL_from3323z00_1711;

											BgL_from3323z00_1711 = BUNSPEC;
											((((BgL_globalzf2fromzf2_bglt)
														CREF(BgL_new3324z00_1709))->BgL_fromz00) =
												((obj_t) BgL_from3323z00_1711), BUNSPEC);
											BgL_res3694z00_1712 = BgL_new3324z00_1709;
									}} BgL_res3694z00_1712;
								}
								BgL_res3695z00_1713 = BgL_new3302z00_1708;
							}
							BgL_arg3521z00_915 = BgL_res3695z00_1713;
						}
						{	/* Effect/cgraph.scm 21 */
							obj_t BgL_auxz00_3139;

							BgL_objectz00_bglt BgL_auxz00_3137;

							BgL_auxz00_3139 = (obj_t) (BgL_arg3521z00_915);
							BgL_auxz00_3137 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2globalzf2fromzd2nilza0zzeffect_cgraphz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3137, BgL_auxz00_3139);
				}}}
			else
				{	/* Effect/cgraph.scm 21 */
					BFALSE;
				}
			return
				(BgL_globalzf2fromzf2_bglt)
				(BGl_z52thezd2globalzf2fromzd2nilza0zzeffect_cgraphz00);
		}
	}



/* _global/from-nil */
	obj_t BGl__globalzf2fromzd2nilz20zzeffect_cgraphz00(obj_t BgL_envz00_2749)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 21 */
			return (obj_t) (BGl_globalzf2fromzd2nilz20zzeffect_cgraphz00());
		}
	}



/* local/from? */
	BGL_EXPORTED_DEF bool_t BGl_localzf2fromzf3z01zzeffect_cgraphz00(obj_t
		BgL_obj3269z00_82)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 20 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3269z00_82,
				BGl_localzf2fromzf2zzeffect_cgraphz00);
		}
	}



/* _local/from? */
	obj_t BGl__localzf2fromzf3z01zzeffect_cgraphz00(obj_t BgL_envz00_2746,
		obj_t BgL_obj3269z00_2747)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 20 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3269z00_2747,
					BGl_localzf2fromzf2zzeffect_cgraphz00));
		}
	}



/* widening-local/from */
	BGL_EXPORTED_DEF BgL_localzf2fromzf2_bglt
		BGl_wideningzd2localzf2fromz20zzeffect_cgraphz00(obj_t BgL_from3242z00_86)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 20 */
			{	/* Effect/cgraph.scm 20 */
				BgL_localzf2fromzf2_bglt BgL_new3243z00_1714;

				BgL_new3243z00_1714 =
					((BgL_localzf2fromzf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_localzf2fromzf2_bgl))));
				{	/* Effect/cgraph.scm 20 */
					BgL_localzf2fromzf2_bglt BgL_res3696z00_1718;

					{	/* Effect/cgraph.scm 20 */
						BgL_localzf2fromzf2_bglt BgL_new3259z00_1715;

						BgL_new3259z00_1715 = BgL_new3243z00_1714;
						{	/* Effect/cgraph.scm 20 */
							obj_t BgL_from3258z00_1717;

							BgL_from3258z00_1717 = BgL_from3242z00_86;
							((((BgL_localzf2fromzf2_bglt) CREF(BgL_new3259z00_1715))->
									BgL_fromz00) = ((obj_t) BgL_from3258z00_1717), BUNSPEC);
							BgL_res3696z00_1718 = BgL_new3259z00_1715;
					}} BgL_res3696z00_1718;
				}
				return BgL_new3243z00_1714;
			}
		}
	}



/* _widening-local/from */
	obj_t BGl__wideningzd2localzf2fromz20zzeffect_cgraphz00(obj_t BgL_envz00_2775,
		obj_t BgL_from3242z00_2776)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 20 */
			return
				(obj_t) (BGl_wideningzd2localzf2fromz20zzeffect_cgraphz00
				(BgL_from3242z00_2776));
		}
	}



/* make-local/from */
	BGL_EXPORTED_DEF BgL_localzf2fromzf2_bglt
		BGl_makezd2localzf2fromz20zzeffect_cgraphz00(obj_t BgL_id3246z00_87,
		obj_t BgL_name3247z00_88, BgL_typez00_bglt BgL_type3248z00_89,
		BgL_valuez00_bglt BgL_value3249z00_90, obj_t BgL_access3250z00_91,
		obj_t BgL_fastzd2alpha3251zd2_92, obj_t BgL_removable3252z00_93,
		long BgL_occurrence3253z00_94, bool_t BgL_userzf33254zf3_95,
		long BgL_key3255z00_96, obj_t BgL_from3245z00_97)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 20 */
			{	/* Effect/cgraph.scm 20 */
				BgL_localz00_bglt BgL_aux3256z00_1719;

				BgL_aux3256z00_1719 =
					BGl_makezd2localzd2zzast_varz00(BgL_id3246z00_87, BgL_name3247z00_88,
					BgL_type3248z00_89, BgL_value3249z00_90, BgL_access3250z00_91,
					BgL_fastzd2alpha3251zd2_92, BgL_removable3252z00_93,
					BgL_occurrence3253z00_94, BgL_userzf33254zf3_95, BgL_key3255z00_96);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3256z00_1719),
					BGl_classzd2numzd2zz__objectz00
					(BGl_localzf2fromzf2zzeffect_cgraphz00));
				{	/* Effect/cgraph.scm 20 */
					BgL_localzf2fromzf2_bglt BgL_arg3523z00_1721;

					{	/* Effect/cgraph.scm 20 */
						BgL_localzf2fromzf2_bglt BgL_res3698z00_1731;

						{	/* Effect/cgraph.scm 20 */
							BgL_localzf2fromzf2_bglt BgL_new3243z00_1726;

							BgL_new3243z00_1726 =
								((BgL_localzf2fromzf2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_localzf2fromzf2_bgl))));
							{	/* Effect/cgraph.scm 20 */
								BgL_localzf2fromzf2_bglt BgL_res3697z00_1730;

								{	/* Effect/cgraph.scm 20 */
									BgL_localzf2fromzf2_bglt BgL_new3259z00_1727;

									BgL_new3259z00_1727 = BgL_new3243z00_1726;
									{	/* Effect/cgraph.scm 20 */
										obj_t BgL_from3258z00_1729;

										BgL_from3258z00_1729 = BgL_from3245z00_97;
										((((BgL_localzf2fromzf2_bglt) CREF(BgL_new3259z00_1727))->
												BgL_fromz00) = ((obj_t) BgL_from3258z00_1729), BUNSPEC);
										BgL_res3697z00_1730 = BgL_new3259z00_1727;
								}} BgL_res3697z00_1730;
							}
							BgL_res3698z00_1731 = BgL_new3243z00_1726;
						}
						BgL_arg3523z00_1721 = BgL_res3698z00_1731;
					}
					{	/* Effect/cgraph.scm 20 */
						obj_t BgL_auxz00_3160;

						BgL_objectz00_bglt BgL_auxz00_3158;

						BgL_auxz00_3160 = (obj_t) (BgL_arg3523z00_1721);
						BgL_auxz00_3158 = (BgL_objectz00_bglt) (BgL_aux3256z00_1719);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_3158, BgL_auxz00_3160);
				}}
				return
					((BgL_localzf2fromzf2_bglt)
					(BgL_localzf2fromzf2_bglt) (BgL_aux3256z00_1719));
			}
		}
	}



/* _make-local/from */
	obj_t BGl__makezd2localzf2fromz20zzeffect_cgraphz00(obj_t BgL_envz00_2777,
		obj_t BgL_id3246z00_2778, obj_t BgL_name3247z00_2779,
		obj_t BgL_type3248z00_2780, obj_t BgL_value3249z00_2781,
		obj_t BgL_access3250z00_2782, obj_t BgL_fastzd2alpha3251zd2_2783,
		obj_t BgL_removable3252z00_2784, obj_t BgL_occurrence3253z00_2785,
		obj_t BgL_userzf33254zf3_2786, obj_t BgL_key3255z00_2787,
		obj_t BgL_from3245z00_2788)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 20 */
			return
				(obj_t) (BGl_makezd2localzf2fromz20zzeffect_cgraphz00
				(BgL_id3246z00_2778, BgL_name3247z00_2779,
					(BgL_typez00_bglt) (BgL_type3248z00_2780),
					(BgL_valuez00_bglt) (BgL_value3249z00_2781), BgL_access3250z00_2782,
					BgL_fastzd2alpha3251zd2_2783, BgL_removable3252z00_2784,
					(long) CINT(BgL_occurrence3253z00_2785),
					CBOOL(BgL_userzf33254zf3_2786), (long) CINT(BgL_key3255z00_2787),
					BgL_from3245z00_2788));
		}
	}



/* fill-local/from! */
	BGL_EXPORTED_DEF BgL_localzf2fromzf2_bglt
		BGl_fillzd2localzf2fromz12z32zzeffect_cgraphz00(BgL_localzf2fromzf2_bglt
		BgL_new3259z00_98, obj_t BgL_from3258z00_99)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 20 */
			{	/* Effect/cgraph.scm 20 */
				obj_t BgL_from3258z00_2924;

				BgL_from3258z00_2924 = BgL_from3258z00_99;
				((((BgL_localzf2fromzf2_bglt) CREF(BgL_new3259z00_98))->BgL_fromz00) =
					((obj_t) BgL_from3258z00_2924), BUNSPEC);
				return BgL_new3259z00_98;
			}
		}
	}



/* _fill-local/from! */
	obj_t BGl__fillzd2localzf2fromz12z32zzeffect_cgraphz00(obj_t BgL_envz00_2789,
		obj_t BgL_new3259z00_2790, obj_t BgL_from3258z00_2791)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 20 */
			{	/* Effect/cgraph.scm 20 */
				BgL_localzf2fromzf2_bglt BgL_auxz00_3173;

				{	/* Effect/cgraph.scm 20 */
					BgL_localzf2fromzf2_bglt BgL_res3811z00_2928;

					{	/* Effect/cgraph.scm 20 */
						BgL_localzf2fromzf2_bglt BgL_new3259z00_2925;

						BgL_new3259z00_2925 =
							(BgL_localzf2fromzf2_bglt) (BgL_new3259z00_2790);
						{	/* Effect/cgraph.scm 20 */
							obj_t BgL_from3258z00_2927;

							BgL_from3258z00_2927 = BgL_from3258z00_2791;
							((((BgL_localzf2fromzf2_bglt) CREF(BgL_new3259z00_2925))->
									BgL_fromz00) = ((obj_t) BgL_from3258z00_2927), BUNSPEC);
							BgL_res3811z00_2928 = BgL_new3259z00_2925;
						}
					}
					BgL_auxz00_3173 = BgL_res3811z00_2928;
				}
				return (obj_t) (BgL_auxz00_3173);
			}
		}
	}



/* %allocate-local/from */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_z52allocatezd2localzf2fromz72zzeffect_cgraphz00()
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 20 */
			{	/* Effect/cgraph.scm 20 */
				BgL_localz00_bglt BgL_new3262z00_2929;

				BgL_new3262z00_2929 =
					((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_localz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3262z00_2929),
					BGl_classzd2numzd2zz__objectz00
					(BGl_localzf2fromzf2zzeffect_cgraphz00));
				{	/* Effect/cgraph.scm 20 */
					BgL_objectz00_bglt BgL_auxz00_3181;

					BgL_auxz00_3181 = (BgL_objectz00_bglt) (BgL_new3262z00_2929);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_3181, BFALSE);
				}
				return BgL_new3262z00_2929;
			}
		}
	}



/* _%allocate-local/from */
	obj_t BGl__z52allocatezd2localzf2fromz72zzeffect_cgraphz00(obj_t
		BgL_envz00_2744)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 20 */
			{	/* Effect/cgraph.scm 20 */
				BgL_localz00_bglt BgL_auxz00_3184;

				{	/* Effect/cgraph.scm 20 */
					BgL_localz00_bglt BgL_res3812z00_2933;

					{	/* Effect/cgraph.scm 20 */
						BgL_localz00_bglt BgL_new3262z00_2931;

						BgL_new3262z00_2931 =
							((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_localz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3262z00_2931),
							BGl_classzd2numzd2zz__objectz00
							(BGl_localzf2fromzf2zzeffect_cgraphz00));
						{	/* Effect/cgraph.scm 20 */
							BgL_objectz00_bglt BgL_auxz00_3189;

							BgL_auxz00_3189 = (BgL_objectz00_bglt) (BgL_new3262z00_2931);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3189, BFALSE);
						}
						BgL_res3812z00_2933 = BgL_new3262z00_2931;
					}
					BgL_auxz00_3184 = BgL_res3812z00_2933;
				}
				return (obj_t) (BgL_auxz00_3184);
			}
		}
	}



/* local/from-nil */
	BGL_EXPORTED_DEF BgL_localzf2fromzf2_bglt
		BGl_localzf2fromzd2nilz20zzeffect_cgraphz00()
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 20 */
			if ((BGl_z52thezd2localzf2fromzd2nilza0zzeffect_cgraphz00 == BUNSPEC))
				{	/* Effect/cgraph.scm 20 */
					{	/* Effect/cgraph.scm 20 */
						BgL_localz00_bglt BgL_res3699z00_1741;

						{	/* Effect/cgraph.scm 20 */
							BgL_localz00_bglt BgL_new1810z00_1737;

							BgL_new1810z00_1737 =
								((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_localz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1810z00_1737),
								BGl_classzd2numzd2zz__objectz00(BGl_localz00zzast_varz00));
							{	/* Effect/cgraph.scm 20 */
								BgL_objectz00_bglt BgL_auxz00_3199;

								BgL_auxz00_3199 = (BgL_objectz00_bglt) (BgL_new1810z00_1737);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3199, BFALSE);
							}
							BgL_res3699z00_1741 = BgL_new1810z00_1737;
						}
						BGl_z52thezd2localzf2fromzd2nilza0zzeffect_cgraphz00 =
							(obj_t) (BgL_res3699z00_1741);
					}
					{	/* Effect/cgraph.scm 20 */
						obj_t BgL_arg3526z00_925;

						BgL_typez00_bglt BgL_arg3527z00_926;

						BgL_valuez00_bglt BgL_arg3528z00_927;

						BgL_arg3526z00_925 = CNST_TABLE_REF(((long) 3));
						BgL_arg3527z00_926 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg3528z00_927 = BGl_valuezd2nilzd2zzast_varz00();
						{	/* Effect/cgraph.scm 20 */
							BgL_localz00_bglt BgL_res3700z00_1763;

							{	/* Effect/cgraph.scm 20 */
								BgL_localz00_bglt BgL_new1798z00_1742;

								BgL_new1798z00_1742 =
									(BgL_localz00_bglt)
									(BGl_z52thezd2localzf2fromzd2nilza0zzeffect_cgraphz00);
								{	/* Effect/cgraph.scm 20 */
									obj_t BgL_id1788z00_1753;

									obj_t BgL_name1789z00_1754;

									BgL_typez00_bglt BgL_type1790z00_1755;

									BgL_valuez00_bglt BgL_value1791z00_1756;

									obj_t BgL_access1792z00_1757;

									obj_t BgL_fastzd2alpha1793zd2_1758;

									obj_t BgL_removable1794z00_1759;

									long BgL_occurrence1795z00_1760;

									bool_t BgL_userzf31796zf3_1761;

									long BgL_key1797z00_1762;

									BgL_id1788z00_1753 = BgL_arg3526z00_925;
									BgL_name1789z00_1754 = BUNSPEC;
									BgL_type1790z00_1755 = BgL_arg3527z00_926;
									BgL_value1791z00_1756 = BgL_arg3528z00_927;
									BgL_access1792z00_1757 = BUNSPEC;
									BgL_fastzd2alpha1793zd2_1758 = BUNSPEC;
									BgL_removable1794z00_1759 = BUNSPEC;
									BgL_occurrence1795z00_1760 = ((long) 0);
									BgL_userzf31796zf3_1761 = ((bool_t) 0);
									BgL_key1797z00_1762 = ((long) 0);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1742))->
											BgL_idz00) = ((obj_t) BgL_id1788z00_1753), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1742))->
											BgL_namez00) = ((obj_t) BgL_name1789z00_1754), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1742))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type1790z00_1755), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1742))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) BgL_value1791z00_1756), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1742))->
											BgL_accessz00) =
										((obj_t) BgL_access1792z00_1757), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1742))->
											BgL_fastzd2alphazd2) =
										((obj_t) BgL_fastzd2alpha1793zd2_1758), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1742))->
											BgL_removablez00) =
										((obj_t) BgL_removable1794z00_1759), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1742))->
											BgL_occurrencez00) =
										((long) BgL_occurrence1795z00_1760), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1742))->
											BgL_userzf3zf3) =
										((bool_t) BgL_userzf31796zf3_1761), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1742))->
											BgL_keyz00) = ((long) BgL_key1797z00_1762), BUNSPEC);
									BgL_res3700z00_1763 = BgL_new1798z00_1742;
							}} BgL_res3700z00_1763;
					}}
					{	/* Effect/cgraph.scm 20 */
						long BgL_arg3531z00_930;

						BgL_arg3531z00_930 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_localzf2fromzf2zzeffect_cgraphz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2localzf2fromzd2nilza0zzeffect_cgraphz00),
							BgL_arg3531z00_930);
					}
					{	/* Effect/cgraph.scm 20 */
						BgL_localzf2fromzf2_bglt BgL_arg3532z00_931;

						{	/* Effect/cgraph.scm 20 */
							BgL_localzf2fromzf2_bglt BgL_res3702z00_1772;

							{	/* Effect/cgraph.scm 20 */
								BgL_localzf2fromzf2_bglt BgL_new3243z00_1767;

								BgL_new3243z00_1767 =
									((BgL_localzf2fromzf2_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_localzf2fromzf2_bgl))));
								{	/* Effect/cgraph.scm 20 */
									BgL_localzf2fromzf2_bglt BgL_res3701z00_1771;

									{	/* Effect/cgraph.scm 20 */
										BgL_localzf2fromzf2_bglt BgL_new3259z00_1768;

										BgL_new3259z00_1768 = BgL_new3243z00_1767;
										{	/* Effect/cgraph.scm 20 */
											obj_t BgL_from3258z00_1770;

											BgL_from3258z00_1770 = BUNSPEC;
											((((BgL_localzf2fromzf2_bglt) CREF(BgL_new3259z00_1768))->
													BgL_fromz00) =
												((obj_t) BgL_from3258z00_1770), BUNSPEC);
											BgL_res3701z00_1771 = BgL_new3259z00_1768;
									}} BgL_res3701z00_1771;
								}
								BgL_res3702z00_1772 = BgL_new3243z00_1767;
							}
							BgL_arg3532z00_931 = BgL_res3702z00_1772;
						}
						{	/* Effect/cgraph.scm 20 */
							obj_t BgL_auxz00_3224;

							BgL_objectz00_bglt BgL_auxz00_3222;

							BgL_auxz00_3224 = (obj_t) (BgL_arg3532z00_931);
							BgL_auxz00_3222 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2localzf2fromzd2nilza0zzeffect_cgraphz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3222, BgL_auxz00_3224);
				}}}
			else
				{	/* Effect/cgraph.scm 20 */
					BFALSE;
				}
			return
				(BgL_localzf2fromzf2_bglt)
				(BGl_z52thezd2localzf2fromzd2nilza0zzeffect_cgraphz00);
		}
	}



/* _local/from-nil */
	obj_t BGl__localzf2fromzd2nilz20zzeffect_cgraphz00(obj_t BgL_envz00_2745)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 20 */
			return (obj_t) (BGl_localzf2fromzd2nilz20zzeffect_cgraphz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzeffect_cgraphz00()
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_callzd2graphz12zd2default3437zd2envzc0zzeffect_cgraphz00,
				BGl_nodez00zzast_nodez00, BGl_string3775z00zzeffect_cgraphz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_savezd2callz12zd2envz12zzeffect_cgraphz00,
				BGl_savezd2callz12zd2default3473zd2envzc0zzeffect_cgraphz00,
				BGl_variablez00zzast_varz00, BGl_string3776z00zzeffect_cgraphz00);
		}
	}



/* call-graph! */
	obj_t BGl_callzd2graphz12zc0zzeffect_cgraphz00(BgL_nodez00_bglt BgL_nodez00_2,
		BgL_variablez00_bglt BgL_ownerz00_3)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 37 */
			{	/* Effect/cgraph.scm 37 */
				obj_t BgL_method3438z00_1807;

				{	/* Effect/cgraph.scm 37 */
					BgL_objectz00_bglt BgL_objz00_1808;

					BgL_objz00_1808 = (BgL_objectz00_bglt) (BgL_nodez00_2);
					{	/* Effect/cgraph.scm 37 */
						long BgL_objzd2classzd2numz00_1809;

						BgL_objzd2classzd2numz00_1809 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1808);
						{	/* Effect/cgraph.scm 37 */
							obj_t BgL_arg2643z00_1810;

							BgL_arg2643z00_1810 =
								PROCEDURE_REF(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
								(int) (((long) 1)));
							{	/* Effect/cgraph.scm 37 */
								obj_t BgL_arrayz00_1812;

								int BgL_offsetz00_1813;

								BgL_arrayz00_1812 = BgL_arg2643z00_1810;
								BgL_offsetz00_1813 = (int) (BgL_objzd2classzd2numz00_1809);
								{	/* Effect/cgraph.scm 37 */
									long BgL_offsetz00_1814;

									BgL_offsetz00_1814 =
										((long) (BgL_offsetz00_1813) - OBJECT_TYPE);
									{	/* Effect/cgraph.scm 37 */
										long BgL_modz00_1815;

										{	/* Effect/cgraph.scm 37 */
											int BgL_arg2645z00_1816;

											BgL_arg2645z00_1816 = (int) (((long) 16));
											{	/* Effect/cgraph.scm 37 */
												long BgL_auxz00_3240;

												BgL_auxz00_3240 = (long) (BgL_arg2645z00_1816);
												BgL_modz00_1815 =
													(BgL_offsetz00_1814 / BgL_auxz00_3240);
										}}
										{	/* Effect/cgraph.scm 37 */
											long BgL_restz00_1817;

											{	/* Effect/cgraph.scm 37 */
												int BgL_arg2644z00_1818;

												BgL_arg2644z00_1818 = (int) (((long) 16));
												{	/* Effect/cgraph.scm 37 */
													long BgL_auxz00_3244;

													BgL_auxz00_3244 = (long) (BgL_arg2644z00_1818);
													BgL_restz00_1817 =
														(BgL_offsetz00_1814 % BgL_auxz00_3244);
											}}
											{	/* Effect/cgraph.scm 37 */

												BgL_method3438z00_1807 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1812,
														(int) (BgL_modz00_1815)), (int) (BgL_restz00_1817));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3438z00_1807) (BgL_method3438z00_1807,
					(obj_t) (BgL_nodez00_2), (obj_t) (BgL_ownerz00_3), BEOA);
			}
		}
	}



/* _call-graph! */
	obj_t BGl__callzd2graphz12zc0zzeffect_cgraphz00(obj_t BgL_envz00_2738,
		obj_t BgL_nodez00_2739, obj_t BgL_ownerz00_2740)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 37 */
			return
				BGl_callzd2graphz12zc0zzeffect_cgraphz00(
				(BgL_nodez00_bglt) (BgL_nodez00_2739),
				(BgL_variablez00_bglt) (BgL_ownerz00_2740));
		}
	}



/* _call-graph!-default3437 */
	obj_t BGl__callzd2graphz12zd2default3437z12zzeffect_cgraphz00(obj_t
		BgL_envz00_2792, obj_t BgL_nodez00_2793, obj_t BgL_ownerz00_2794)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 15 */
			{	/* Effect/cgraph.scm 38 */
				obj_t BgL_res3813z00_2936;

				BgL_res3813z00_2936 = CNST_TABLE_REF(((long) 4));
				return BgL_res3813z00_2936;
			}
		}
	}



/* save-call! */
	obj_t BGl_savezd2callz12zc0zzeffect_cgraphz00(BgL_variablez00_bglt
		BgL_calleez00_42, BgL_variablez00_bglt BgL_ownerz00_43)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 203 */
			{	/* Effect/cgraph.scm 203 */
				obj_t BgL_method3474z00_1832;

				{	/* Effect/cgraph.scm 203 */
					BgL_objectz00_bglt BgL_objz00_1833;

					BgL_objz00_1833 = (BgL_objectz00_bglt) (BgL_calleez00_42);
					{	/* Effect/cgraph.scm 203 */
						long BgL_objzd2classzd2numz00_1834;

						BgL_objzd2classzd2numz00_1834 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1833);
						{	/* Effect/cgraph.scm 203 */
							obj_t BgL_arg2643z00_1835;

							BgL_arg2643z00_1835 =
								PROCEDURE_REF(BGl_savezd2callz12zd2envz12zzeffect_cgraphz00,
								(int) (((long) 1)));
							{	/* Effect/cgraph.scm 203 */
								obj_t BgL_arrayz00_1837;

								int BgL_offsetz00_1838;

								BgL_arrayz00_1837 = BgL_arg2643z00_1835;
								BgL_offsetz00_1838 = (int) (BgL_objzd2classzd2numz00_1834);
								{	/* Effect/cgraph.scm 203 */
									long BgL_offsetz00_1839;

									BgL_offsetz00_1839 =
										((long) (BgL_offsetz00_1838) - OBJECT_TYPE);
									{	/* Effect/cgraph.scm 203 */
										long BgL_modz00_1840;

										{	/* Effect/cgraph.scm 203 */
											int BgL_arg2645z00_1841;

											BgL_arg2645z00_1841 = (int) (((long) 16));
											{	/* Effect/cgraph.scm 203 */
												long BgL_auxz00_3267;

												BgL_auxz00_3267 = (long) (BgL_arg2645z00_1841);
												BgL_modz00_1840 =
													(BgL_offsetz00_1839 / BgL_auxz00_3267);
										}}
										{	/* Effect/cgraph.scm 203 */
											long BgL_restz00_1842;

											{	/* Effect/cgraph.scm 203 */
												int BgL_arg2644z00_1843;

												BgL_arg2644z00_1843 = (int) (((long) 16));
												{	/* Effect/cgraph.scm 203 */
													long BgL_auxz00_3271;

													BgL_auxz00_3271 = (long) (BgL_arg2644z00_1843);
													BgL_restz00_1842 =
														(BgL_offsetz00_1839 % BgL_auxz00_3271);
											}}
											{	/* Effect/cgraph.scm 203 */

												BgL_method3474z00_1832 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1837,
														(int) (BgL_modz00_1840)), (int) (BgL_restz00_1842));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3474z00_1832) (BgL_method3474z00_1832,
					(obj_t) (BgL_calleez00_42), (obj_t) (BgL_ownerz00_43), BEOA);
			}
		}
	}



/* _save-call! */
	obj_t BGl__savezd2callz12zc0zzeffect_cgraphz00(obj_t BgL_envz00_2795,
		obj_t BgL_calleez00_2796, obj_t BgL_ownerz00_2797)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 203 */
			return
				BGl_savezd2callz12zc0zzeffect_cgraphz00(
				(BgL_variablez00_bglt) (BgL_calleez00_2796),
				(BgL_variablez00_bglt) (BgL_ownerz00_2797));
		}
	}



/* save-call!-default3473 */
	obj_t
		BGl_savezd2callz12zd2default3473z12zzeffect_cgraphz00(BgL_variablez00_bglt
		BgL_calleez00_44, BgL_variablez00_bglt BgL_ownerz00_45)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 5)),
				BGl_string3777z00zzeffect_cgraphz00, (obj_t) (BgL_calleez00_44));
		}
	}



/* _save-call!-default3473 */
	obj_t BGl__savezd2callz12zd2default3473z12zzeffect_cgraphz00(obj_t
		BgL_envz00_2798, obj_t BgL_calleez00_2799, obj_t BgL_ownerz00_2800)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 15 */
			return
				BGl_savezd2callz12zd2default3473z12zzeffect_cgraphz00(
				(BgL_variablez00_bglt) (BgL_calleez00_2799),
				(BgL_variablez00_bglt) (BgL_ownerz00_2800));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzeffect_cgraphz00()
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_sequencez00zzast_nodez00, BGl_proc3778z00zzeffect_cgraphz00,
				BGl_string3775z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_appz00zzast_nodez00, BGl_proc3779z00zzeffect_cgraphz00,
				BGl_string3775z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3780z00zzeffect_cgraphz00,
				BGl_string3775z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_funcallz00zzast_nodez00, BGl_proc3781z00zzeffect_cgraphz00,
				BGl_string3775z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_externz00zzast_nodez00, BGl_proc3782z00zzeffect_cgraphz00,
				BGl_string3775z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_castz00zzast_nodez00, BGl_proc3783z00zzeffect_cgraphz00,
				BGl_string3775z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_setqz00zzast_nodez00, BGl_proc3784z00zzeffect_cgraphz00,
				BGl_string3775z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3785z00zzeffect_cgraphz00,
				BGl_string3775z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_failz00zzast_nodez00, BGl_proc3786z00zzeffect_cgraphz00,
				BGl_string3775z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_selectz00zzast_nodez00, BGl_proc3787z00zzeffect_cgraphz00,
				BGl_string3775z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3788z00zzeffect_cgraphz00,
				BGl_string3775z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3789z00zzeffect_cgraphz00,
				BGl_string3775z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3790z00zzeffect_cgraphz00,
				BGl_string3775z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3791z00zzeffect_cgraphz00,
				BGl_string3775z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3792z00zzeffect_cgraphz00,
				BGl_string3775z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3793z00zzeffect_cgraphz00,
				BGl_string3775z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3794z00zzeffect_cgraphz00,
				BGl_string3775z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_savezd2callz12zd2envz12zzeffect_cgraphz00,
				BGl_globalz00zzast_varz00, BGl_proc3795z00zzeffect_cgraphz00,
				BGl_string3776z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_savezd2callz12zd2envz12zzeffect_cgraphz00,
				BGl_globalzf2fromzf2zzeffect_cgraphz00,
				BGl_proc3796z00zzeffect_cgraphz00, BGl_string3776z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_savezd2callz12zd2envz12zzeffect_cgraphz00,
				BGl_localz00zzast_varz00, BGl_proc3797z00zzeffect_cgraphz00,
				BGl_string3776z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_savezd2callz12zd2envz12zzeffect_cgraphz00,
				BGl_localzf2fromzf2zzeffect_cgraphz00,
				BGl_proc3798z00zzeffect_cgraphz00, BGl_string3776z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_globalzf2fromzf2zzeffect_cgraphz00,
				BGl_proc3799z00zzeffect_cgraphz00, BGl_string3800z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_globalzf2fromzf2zzeffect_cgraphz00,
				BGl_proc3801z00zzeffect_cgraphz00, BGl_string3802z00zzeffect_cgraphz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_localzf2fromzf2zzeffect_cgraphz00,
				BGl_proc3803z00zzeffect_cgraphz00, BGl_string3800z00zzeffect_cgraphz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_localzf2fromzf2zzeffect_cgraphz00,
				BGl_proc3804z00zzeffect_cgraphz00, BGl_string3802z00zzeffect_cgraphz00);
		}
	}



/* struct+object->objec3491 */
	obj_t BGl_structzb2objectzd2ze3objec3491z83zzeffect_cgraphz00(obj_t
		BgL_envz00_2831, obj_t BgL_oz00_2832, obj_t BgL_sz00_2833)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 20 */
			{
				BgL_localzf2fromzf2_bglt BgL_oz00_1568;

				obj_t BgL_sz00_1569;

				{	/* Effect/cgraph.scm 20 */
					BgL_localzf2fromzf2_bglt BgL_auxz00_3316;

					BgL_oz00_1568 = (BgL_localzf2fromzf2_bglt) (BgL_oz00_2832);
					BgL_sz00_1569 = BgL_sz00_2833;
					{

						{	/* Effect/cgraph.scm 20 */
							obj_t BgL_old3266z00_1572;

							obj_t BgL_aux3267z00_1573;

							{	/* Effect/cgraph.scm 20 */
								obj_t BgL_nextzd2method3490zd2_1578;

								BgL_nextzd2method3490zd2_1578 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1568),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_localzf2fromzf2zzeffect_cgraphz00);
								if (PROCEDUREP(BgL_nextzd2method3490zd2_1578))
									{	/* Effect/cgraph.scm 20 */
										BgL_old3266z00_1572 =
											PROCEDURE_ENTRY(BgL_nextzd2method3490zd2_1578)
											(BgL_nextzd2method3490zd2_1578, (obj_t) (BgL_oz00_1568),
											BgL_sz00_1569, BEOA);
									}
								else
									{	/* Effect/cgraph.scm 20 */
										BgL_old3266z00_1572 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1568), BgL_sz00_1569));
									}
							}
							BgL_aux3267z00_1573 =
								STRUCT_REF(BgL_sz00_1569, (int) (((long) 0)));
							{	/* Effect/cgraph.scm 20 */
								BgL_localzf2fromzf2_bglt BgL_new3268z00_1574;

								BgL_new3268z00_1574 =
									((BgL_localzf2fromzf2_bglt) (BgL_old3266z00_1572));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3268z00_1574),
									BGl_classzd2numzd2zz__objectz00
									(BGl_localzf2fromzf2zzeffect_cgraphz00));
								{	/* Effect/cgraph.scm 20 */
									BgL_localzf2fromzf2_bglt BgL_arg3682z00_1576;

									{	/* Effect/cgraph.scm 20 */
										obj_t BgL_arg3683z00_1577;

										BgL_arg3683z00_1577 =
											STRUCT_REF(BgL_aux3267z00_1573, (int) (((long) 0)));
										{	/* Effect/cgraph.scm 20 */
											BgL_localzf2fromzf2_bglt BgL_res3770z00_2734;

											{	/* Effect/cgraph.scm 20 */
												BgL_localzf2fromzf2_bglt BgL_new3243z00_2729;

												BgL_new3243z00_2729 =
													((BgL_localzf2fromzf2_bglt)
													BREF(GC_MALLOC(sizeof(struct
																BgL_localzf2fromzf2_bgl))));
												{	/* Effect/cgraph.scm 20 */
													BgL_localzf2fromzf2_bglt BgL_res3769z00_2733;

													{	/* Effect/cgraph.scm 20 */
														BgL_localzf2fromzf2_bglt BgL_new3259z00_2730;

														BgL_new3259z00_2730 = BgL_new3243z00_2729;
														{	/* Effect/cgraph.scm 20 */
															obj_t BgL_from3258z00_2732;

															BgL_from3258z00_2732 = BgL_arg3683z00_1577;
															((((BgL_localzf2fromzf2_bglt)
																		CREF(BgL_new3259z00_2730))->BgL_fromz00) =
																((obj_t) BgL_from3258z00_2732), BUNSPEC);
															BgL_res3769z00_2733 = BgL_new3259z00_2730;
													}} BgL_res3769z00_2733;
												}
												BgL_res3770z00_2734 = BgL_new3243z00_2729;
											}
											BgL_arg3682z00_1576 = BgL_res3770z00_2734;
									}}
									{	/* Effect/cgraph.scm 20 */
										obj_t BgL_auxz00_3339;

										BgL_objectz00_bglt BgL_auxz00_3337;

										BgL_auxz00_3339 = (obj_t) (BgL_arg3682z00_1576);
										BgL_auxz00_3337 =
											(BgL_objectz00_bglt) (BgL_new3268z00_1574);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3337, BgL_auxz00_3339);
								}}
								BgL_auxz00_3316 = BgL_new3268z00_1574;
					}}}
					return (obj_t) (BgL_auxz00_3316);
				}
			}
		}
	}



/* object->struct-local3489 */
	obj_t BGl_objectzd2ze3structzd2local3489ze3zzeffect_cgraphz00(obj_t
		BgL_envz00_2834, obj_t BgL_obj3263z00_2835)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 20 */
			{
				BgL_localzf2fromzf2_bglt BgL_obj3263z00_1558;

				BgL_obj3263z00_1558 = (BgL_localzf2fromzf2_bglt) (BgL_obj3263z00_2835);
				{

					{	/* Effect/cgraph.scm 20 */
						obj_t BgL_res3264z00_1561;

						{	/* Effect/cgraph.scm 20 */
							obj_t BgL_nextzd2method3488zd2_1566;

							BgL_nextzd2method3488zd2_1566 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3263z00_1558),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_localzf2fromzf2zzeffect_cgraphz00);
							if (PROCEDUREP(BgL_nextzd2method3488zd2_1566))
								{	/* Effect/cgraph.scm 20 */
									BgL_res3264z00_1561 =
										PROCEDURE_ENTRY(BgL_nextzd2method3488zd2_1566)
										(BgL_nextzd2method3488zd2_1566,
										(obj_t) (BgL_obj3263z00_1558), BEOA);
								}
							else
								{	/* Effect/cgraph.scm 20 */
									BgL_res3264z00_1561 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3263z00_1558));
								}
						}
						{	/* Effect/cgraph.scm 20 */
							obj_t BgL_aux3265z00_1562;

							{	/* Effect/cgraph.scm 20 */
								obj_t BgL_keyz00_2705;

								BgL_keyz00_2705 = CNST_TABLE_REF(((long) 1));
								BgL_aux3265z00_1562 =
									make_struct(BgL_keyz00_2705, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Effect/cgraph.scm 20 */
								obj_t BgL_arg3678z00_1564;

								{
									obj_t BgL_auxz00_3356;

									{	/* Effect/cgraph.scm 20 */
										BgL_objectz00_bglt BgL_auxz00_3357;

										BgL_auxz00_3357 =
											(BgL_objectz00_bglt) (BgL_obj3263z00_1558);
										BgL_auxz00_3356 = BGL_OBJECT_WIDENING(BgL_auxz00_3357);
									}
									BgL_arg3678z00_1564 =
										(((BgL_localzf2fromzf2_bglt) CREF(BgL_auxz00_3356))->
										BgL_fromz00);
								}
								{	/* Effect/cgraph.scm 20 */
									int BgL_auxz00_3361;

									BgL_auxz00_3361 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3265z00_1562, BgL_auxz00_3361,
										BgL_arg3678z00_1564);
							}}
							{	/* Effect/cgraph.scm 20 */
								int BgL_auxz00_3364;

								BgL_auxz00_3364 = (int) (((long) 0));
								STRUCT_SET(BgL_res3264z00_1561, BgL_auxz00_3364,
									BgL_aux3265z00_1562);
							}
							{	/* Effect/cgraph.scm 20 */
								obj_t BgL_auxz00_3367;

								BgL_auxz00_3367 = STRUCT_KEY(BgL_res3264z00_1561);
								STRUCT_KEY_SET(BgL_aux3265z00_1562, BgL_auxz00_3367);
							}
							{	/* Effect/cgraph.scm 20 */
								obj_t BgL_kz00_2720;

								BgL_kz00_2720 = CNST_TABLE_REF(((long) 1));
								STRUCT_KEY_SET(BgL_res3264z00_1561, BgL_kz00_2720);
							}
							return BgL_res3264z00_1561;
						}
					}
				}
			}
		}
	}



/* struct+object->objec3487 */
	obj_t BGl_structzb2objectzd2ze3objec3487z83zzeffect_cgraphz00(obj_t
		BgL_envz00_2836, obj_t BgL_oz00_2837, obj_t BgL_sz00_2838)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 21 */
			{
				BgL_globalzf2fromzf2_bglt BgL_oz00_1546;

				obj_t BgL_sz00_1547;

				{	/* Effect/cgraph.scm 21 */
					BgL_globalzf2fromzf2_bglt BgL_auxz00_3373;

					BgL_oz00_1546 = (BgL_globalzf2fromzf2_bglt) (BgL_oz00_2837);
					BgL_sz00_1547 = BgL_sz00_2838;
					{

						{	/* Effect/cgraph.scm 21 */
							obj_t BgL_old3332z00_1550;

							obj_t BgL_aux3333z00_1551;

							{	/* Effect/cgraph.scm 21 */
								obj_t BgL_nextzd2method3486zd2_1556;

								BgL_nextzd2method3486zd2_1556 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1546),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_globalzf2fromzf2zzeffect_cgraphz00);
								if (PROCEDUREP(BgL_nextzd2method3486zd2_1556))
									{	/* Effect/cgraph.scm 21 */
										BgL_old3332z00_1550 =
											PROCEDURE_ENTRY(BgL_nextzd2method3486zd2_1556)
											(BgL_nextzd2method3486zd2_1556, (obj_t) (BgL_oz00_1546),
											BgL_sz00_1547, BEOA);
									}
								else
									{	/* Effect/cgraph.scm 21 */
										BgL_old3332z00_1550 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1546), BgL_sz00_1547));
									}
							}
							BgL_aux3333z00_1551 =
								STRUCT_REF(BgL_sz00_1547, (int) (((long) 0)));
							{	/* Effect/cgraph.scm 21 */
								BgL_globalzf2fromzf2_bglt BgL_new3334z00_1552;

								BgL_new3334z00_1552 =
									((BgL_globalzf2fromzf2_bglt) (BgL_old3332z00_1550));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3334z00_1552),
									BGl_classzd2numzd2zz__objectz00
									(BGl_globalzf2fromzf2zzeffect_cgraphz00));
								{	/* Effect/cgraph.scm 21 */
									BgL_globalzf2fromzf2_bglt BgL_arg3674z00_1554;

									{	/* Effect/cgraph.scm 21 */
										obj_t BgL_arg3675z00_1555;

										BgL_arg3675z00_1555 =
											STRUCT_REF(BgL_aux3333z00_1551, (int) (((long) 0)));
										{	/* Effect/cgraph.scm 21 */
											BgL_globalzf2fromzf2_bglt BgL_res3767z00_2703;

											{	/* Effect/cgraph.scm 21 */
												BgL_globalzf2fromzf2_bglt BgL_new3302z00_2698;

												BgL_new3302z00_2698 =
													((BgL_globalzf2fromzf2_bglt)
													BREF(GC_MALLOC(sizeof(struct
																BgL_globalzf2fromzf2_bgl))));
												{	/* Effect/cgraph.scm 21 */
													BgL_globalzf2fromzf2_bglt BgL_res3766z00_2702;

													{	/* Effect/cgraph.scm 21 */
														BgL_globalzf2fromzf2_bglt BgL_new3324z00_2699;

														BgL_new3324z00_2699 = BgL_new3302z00_2698;
														{	/* Effect/cgraph.scm 21 */
															obj_t BgL_from3323z00_2701;

															BgL_from3323z00_2701 = BgL_arg3675z00_1555;
															((((BgL_globalzf2fromzf2_bglt)
																		CREF(BgL_new3324z00_2699))->BgL_fromz00) =
																((obj_t) BgL_from3323z00_2701), BUNSPEC);
															BgL_res3766z00_2702 = BgL_new3324z00_2699;
													}} BgL_res3766z00_2702;
												}
												BgL_res3767z00_2703 = BgL_new3302z00_2698;
											}
											BgL_arg3674z00_1554 = BgL_res3767z00_2703;
									}}
									{	/* Effect/cgraph.scm 21 */
										obj_t BgL_auxz00_3396;

										BgL_objectz00_bglt BgL_auxz00_3394;

										BgL_auxz00_3396 = (obj_t) (BgL_arg3674z00_1554);
										BgL_auxz00_3394 =
											(BgL_objectz00_bglt) (BgL_new3334z00_1552);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3394, BgL_auxz00_3396);
								}}
								BgL_auxz00_3373 = BgL_new3334z00_1552;
					}}}
					return (obj_t) (BgL_auxz00_3373);
				}
			}
		}
	}



/* object->struct-globa3485 */
	obj_t BGl_objectzd2ze3structzd2globa3485ze3zzeffect_cgraphz00(obj_t
		BgL_envz00_2839, obj_t BgL_obj3329z00_2840)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 21 */
			{
				BgL_globalzf2fromzf2_bglt BgL_obj3329z00_1536;

				BgL_obj3329z00_1536 = (BgL_globalzf2fromzf2_bglt) (BgL_obj3329z00_2840);
				{

					{	/* Effect/cgraph.scm 21 */
						obj_t BgL_res3330z00_1539;

						{	/* Effect/cgraph.scm 21 */
							obj_t BgL_nextzd2method3484zd2_1544;

							BgL_nextzd2method3484zd2_1544 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3329z00_1536),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_globalzf2fromzf2zzeffect_cgraphz00);
							if (PROCEDUREP(BgL_nextzd2method3484zd2_1544))
								{	/* Effect/cgraph.scm 21 */
									BgL_res3330z00_1539 =
										PROCEDURE_ENTRY(BgL_nextzd2method3484zd2_1544)
										(BgL_nextzd2method3484zd2_1544,
										(obj_t) (BgL_obj3329z00_1536), BEOA);
								}
							else
								{	/* Effect/cgraph.scm 21 */
									BgL_res3330z00_1539 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3329z00_1536));
								}
						}
						{	/* Effect/cgraph.scm 21 */
							obj_t BgL_aux3331z00_1540;

							{	/* Effect/cgraph.scm 21 */
								obj_t BgL_keyz00_2674;

								BgL_keyz00_2674 = CNST_TABLE_REF(((long) 2));
								BgL_aux3331z00_1540 =
									make_struct(BgL_keyz00_2674, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Effect/cgraph.scm 21 */
								obj_t BgL_arg3670z00_1542;

								{
									obj_t BgL_auxz00_3413;

									{	/* Effect/cgraph.scm 21 */
										BgL_objectz00_bglt BgL_auxz00_3414;

										BgL_auxz00_3414 =
											(BgL_objectz00_bglt) (BgL_obj3329z00_1536);
										BgL_auxz00_3413 = BGL_OBJECT_WIDENING(BgL_auxz00_3414);
									}
									BgL_arg3670z00_1542 =
										(((BgL_globalzf2fromzf2_bglt) CREF(BgL_auxz00_3413))->
										BgL_fromz00);
								}
								{	/* Effect/cgraph.scm 21 */
									int BgL_auxz00_3418;

									BgL_auxz00_3418 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3331z00_1540, BgL_auxz00_3418,
										BgL_arg3670z00_1542);
							}}
							{	/* Effect/cgraph.scm 21 */
								int BgL_auxz00_3421;

								BgL_auxz00_3421 = (int) (((long) 0));
								STRUCT_SET(BgL_res3330z00_1539, BgL_auxz00_3421,
									BgL_aux3331z00_1540);
							}
							{	/* Effect/cgraph.scm 21 */
								obj_t BgL_auxz00_3424;

								BgL_auxz00_3424 = STRUCT_KEY(BgL_res3330z00_1539);
								STRUCT_KEY_SET(BgL_aux3331z00_1540, BgL_auxz00_3424);
							}
							{	/* Effect/cgraph.scm 21 */
								obj_t BgL_kz00_2689;

								BgL_kz00_2689 = CNST_TABLE_REF(((long) 2));
								STRUCT_KEY_SET(BgL_res3330z00_1539, BgL_kz00_2689);
							}
							return BgL_res3330z00_1539;
						}
					}
				}
			}
		}
	}



/* save-call!-local/fro3483 */
	obj_t BGl_savezd2callz12zd2localzf2fro3483ze0zzeffect_cgraphz00(obj_t
		BgL_envz00_2841, obj_t BgL_calleez00_2842, obj_t BgL_ownerz00_2843)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 234 */
			{
				BgL_localzf2fromzf2_bglt BgL_calleez00_1525;

				obj_t BgL_ownerz00_1526;

				BgL_calleez00_1525 = (BgL_localzf2fromzf2_bglt) (BgL_calleez00_2842);
				BgL_ownerz00_1526 = BgL_ownerz00_2843;
				{	/* Effect/cgraph.scm 236 */
					bool_t BgL_testz00_3430;

					{	/* Effect/cgraph.scm 236 */
						obj_t BgL_auxz00_3431;

						{	/* Effect/cgraph.scm 236 */
							obj_t BgL_auxz00_3432;

							{
								obj_t BgL_auxz00_3433;

								{	/* Effect/cgraph.scm 236 */
									BgL_objectz00_bglt BgL_auxz00_3434;

									BgL_auxz00_3434 = (BgL_objectz00_bglt) (BgL_calleez00_1525);
									BgL_auxz00_3433 = BGL_OBJECT_WIDENING(BgL_auxz00_3434);
								}
								BgL_auxz00_3432 =
									(((BgL_localzf2fromzf2_bglt) CREF(BgL_auxz00_3433))->
									BgL_fromz00);
							}
							BgL_auxz00_3431 =
								BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_ownerz00_1526,
								BgL_auxz00_3432);
						}
						BgL_testz00_3430 = CBOOL(BgL_auxz00_3431);
					}
					if (BgL_testz00_3430)
						{	/* Effect/cgraph.scm 236 */
							return BFALSE;
						}
					else
						{	/* Effect/cgraph.scm 237 */
							obj_t BgL_arg3664z00_1531;

							{	/* Effect/cgraph.scm 237 */
								obj_t BgL_arg3665z00_1532;

								{
									obj_t BgL_auxz00_3440;

									{	/* Effect/cgraph.scm 237 */
										BgL_objectz00_bglt BgL_auxz00_3441;

										BgL_auxz00_3441 = (BgL_objectz00_bglt) (BgL_calleez00_1525);
										BgL_auxz00_3440 = BGL_OBJECT_WIDENING(BgL_auxz00_3441);
									}
									BgL_arg3665z00_1532 =
										(((BgL_localzf2fromzf2_bglt) CREF(BgL_auxz00_3440))->
										BgL_fromz00);
								}
								BgL_arg3664z00_1531 =
									MAKE_PAIR(BgL_ownerz00_1526, BgL_arg3665z00_1532);
							}
							{
								obj_t BgL_auxz00_3446;

								{	/* Effect/cgraph.scm 237 */
									BgL_objectz00_bglt BgL_auxz00_3447;

									BgL_auxz00_3447 = (BgL_objectz00_bglt) (BgL_calleez00_1525);
									BgL_auxz00_3446 = BGL_OBJECT_WIDENING(BgL_auxz00_3447);
								}
								return
									((((BgL_localzf2fromzf2_bglt) CREF(BgL_auxz00_3446))->
										BgL_fromz00) = ((obj_t) BgL_arg3664z00_1531), BUNSPEC);
							}
						}
				}
			}
		}
	}



/* save-call!-local3481 */
	obj_t BGl_savezd2callz12zd2local3481z12zzeffect_cgraphz00(obj_t
		BgL_envz00_2844, obj_t BgL_calleez00_2845, obj_t BgL_ownerz00_2846)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 228 */
			{
				BgL_localz00_bglt BgL_calleez00_1515;

				obj_t BgL_ownerz00_1516;

				BgL_calleez00_1515 = (BgL_localz00_bglt) (BgL_calleez00_2845);
				BgL_ownerz00_1516 = BgL_ownerz00_2846;
				{	/* Effect/cgraph.scm 229 */
					BgL_localz00_bglt BgL_arg3659z00_1519;

					{	/* Effect/cgraph.scm 229 */
						BgL_localz00_bglt BgL_obj3421z00_1520;

						BgL_obj3421z00_1520 = ((BgL_localz00_bglt) BgL_calleez00_1515);
						{	/* Effect/cgraph.scm 229 */
							BgL_localzf2fromzf2_bglt BgL_arg3660z00_1521;

							{	/* Effect/cgraph.scm 229 */
								BgL_localzf2fromzf2_bglt BgL_res3762z00_2640;

								{	/* Effect/cgraph.scm 229 */
									BgL_localzf2fromzf2_bglt BgL_new3243z00_2635;

									BgL_new3243z00_2635 =
										((BgL_localzf2fromzf2_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_localzf2fromzf2_bgl))));
									{	/* Effect/cgraph.scm 229 */
										BgL_localzf2fromzf2_bglt BgL_res3761z00_2639;

										{	/* Effect/cgraph.scm 229 */
											BgL_localzf2fromzf2_bglt BgL_new3259z00_2636;

											BgL_new3259z00_2636 = BgL_new3243z00_2635;
											{	/* Effect/cgraph.scm 229 */
												obj_t BgL_from3258z00_2638;

												BgL_from3258z00_2638 = BNIL;
												((((BgL_localzf2fromzf2_bglt)
															CREF(BgL_new3259z00_2636))->BgL_fromz00) =
													((obj_t) BgL_from3258z00_2638), BUNSPEC);
												BgL_res3761z00_2639 = BgL_new3259z00_2636;
										}} BgL_res3761z00_2639;
									}
									BgL_res3762z00_2640 = BgL_new3243z00_2635;
								}
								BgL_arg3660z00_1521 = BgL_res3762z00_2640;
							}
							{	/* Effect/cgraph.scm 229 */
								obj_t BgL_auxz00_3457;

								BgL_objectz00_bglt BgL_auxz00_3455;

								BgL_auxz00_3457 = (obj_t) (BgL_arg3660z00_1521);
								BgL_auxz00_3455 = (BgL_objectz00_bglt) (BgL_obj3421z00_1520);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3455, BgL_auxz00_3457);
						}}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_obj3421z00_1520),
							BGl_classzd2numzd2zz__objectz00
							(BGl_localzf2fromzf2zzeffect_cgraphz00));
						BgL_arg3659z00_1519 = BgL_obj3421z00_1520;
					}
					{	/* Effect/cgraph.scm 229 */
						BgL_variablez00_bglt BgL_calleez00_2643;

						BgL_variablez00_bglt BgL_ownerz00_2644;

						BgL_calleez00_2643 = (BgL_variablez00_bglt) (BgL_arg3659z00_1519);
						BgL_ownerz00_2644 = (BgL_variablez00_bglt) (BgL_ownerz00_1516);
						{	/* Effect/cgraph.scm 229 */
							obj_t BgL_method3474z00_2645;

							{	/* Effect/cgraph.scm 229 */
								BgL_objectz00_bglt BgL_objz00_2646;

								BgL_objz00_2646 = (BgL_objectz00_bglt) (BgL_calleez00_2643);
								{	/* Effect/cgraph.scm 229 */
									long BgL_objzd2classzd2numz00_2647;

									BgL_objzd2classzd2numz00_2647 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2646);
									{	/* Effect/cgraph.scm 229 */
										obj_t BgL_arg2643z00_2648;

										BgL_arg2643z00_2648 =
											PROCEDURE_REF
											(BGl_savezd2callz12zd2envz12zzeffect_cgraphz00,
											(int) (((long) 1)));
										{	/* Effect/cgraph.scm 229 */
											obj_t BgL_arrayz00_2650;

											int BgL_offsetz00_2651;

											BgL_arrayz00_2650 = BgL_arg2643z00_2648;
											BgL_offsetz00_2651 =
												(int) (BgL_objzd2classzd2numz00_2647);
											{	/* Effect/cgraph.scm 229 */
												long BgL_offsetz00_2652;

												BgL_offsetz00_2652 =
													((long) (BgL_offsetz00_2651) - OBJECT_TYPE);
												{	/* Effect/cgraph.scm 229 */
													long BgL_modz00_2653;

													{	/* Effect/cgraph.scm 229 */
														int BgL_arg2645z00_2654;

														BgL_arg2645z00_2654 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 229 */
															long BgL_auxz00_3473;

															BgL_auxz00_3473 = (long) (BgL_arg2645z00_2654);
															BgL_modz00_2653 =
																(BgL_offsetz00_2652 / BgL_auxz00_3473);
													}}
													{	/* Effect/cgraph.scm 229 */
														long BgL_restz00_2655;

														{	/* Effect/cgraph.scm 229 */
															int BgL_arg2644z00_2656;

															BgL_arg2644z00_2656 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 229 */
																long BgL_auxz00_3477;

																BgL_auxz00_3477 = (long) (BgL_arg2644z00_2656);
																BgL_restz00_2655 =
																	(BgL_offsetz00_2652 % BgL_auxz00_3477);
														}}
														{	/* Effect/cgraph.scm 229 */

															BgL_method3474z00_2645 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2650,
																	(int) (BgL_modz00_2653)),
																(int) (BgL_restz00_2655));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3474z00_2645) (BgL_method3474z00_2645,
								(obj_t) (BgL_calleez00_2643),
								(obj_t) (BgL_ownerz00_2644), BEOA);
						}
					}
				}
			}
		}
	}



/* save-call!-global/fr3479 */
	obj_t BGl_savezd2callz12zd2globalzf2fr3479ze0zzeffect_cgraphz00(obj_t
		BgL_envz00_2847, obj_t BgL_calleez00_2848, obj_t BgL_ownerz00_2849)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 220 */
			{
				BgL_globalzf2fromzf2_bglt BgL_calleez00_1504;

				obj_t BgL_ownerz00_1505;

				BgL_calleez00_1504 = (BgL_globalzf2fromzf2_bglt) (BgL_calleez00_2848);
				BgL_ownerz00_1505 = BgL_ownerz00_2849;
				{	/* Effect/cgraph.scm 222 */
					bool_t BgL_testz00_3489;

					{	/* Effect/cgraph.scm 222 */
						obj_t BgL_auxz00_3490;

						{	/* Effect/cgraph.scm 222 */
							obj_t BgL_auxz00_3491;

							{
								obj_t BgL_auxz00_3492;

								{	/* Effect/cgraph.scm 222 */
									BgL_objectz00_bglt BgL_auxz00_3493;

									BgL_auxz00_3493 = (BgL_objectz00_bglt) (BgL_calleez00_1504);
									BgL_auxz00_3492 = BGL_OBJECT_WIDENING(BgL_auxz00_3493);
								}
								BgL_auxz00_3491 =
									(((BgL_globalzf2fromzf2_bglt) CREF(BgL_auxz00_3492))->
									BgL_fromz00);
							}
							BgL_auxz00_3490 =
								BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_ownerz00_1505,
								BgL_auxz00_3491);
						}
						BgL_testz00_3489 = CBOOL(BgL_auxz00_3490);
					}
					if (BgL_testz00_3489)
						{	/* Effect/cgraph.scm 222 */
							return BFALSE;
						}
					else
						{	/* Effect/cgraph.scm 223 */
							obj_t BgL_arg3655z00_1510;

							{	/* Effect/cgraph.scm 223 */
								obj_t BgL_arg3656z00_1511;

								{
									obj_t BgL_auxz00_3499;

									{	/* Effect/cgraph.scm 223 */
										BgL_objectz00_bglt BgL_auxz00_3500;

										BgL_auxz00_3500 = (BgL_objectz00_bglt) (BgL_calleez00_1504);
										BgL_auxz00_3499 = BGL_OBJECT_WIDENING(BgL_auxz00_3500);
									}
									BgL_arg3656z00_1511 =
										(((BgL_globalzf2fromzf2_bglt) CREF(BgL_auxz00_3499))->
										BgL_fromz00);
								}
								BgL_arg3655z00_1510 =
									MAKE_PAIR(BgL_ownerz00_1505, BgL_arg3656z00_1511);
							}
							{
								obj_t BgL_auxz00_3505;

								{	/* Effect/cgraph.scm 223 */
									BgL_objectz00_bglt BgL_auxz00_3506;

									BgL_auxz00_3506 = (BgL_objectz00_bglt) (BgL_calleez00_1504);
									BgL_auxz00_3505 = BGL_OBJECT_WIDENING(BgL_auxz00_3506);
								}
								return
									((((BgL_globalzf2fromzf2_bglt) CREF(BgL_auxz00_3505))->
										BgL_fromz00) = ((obj_t) BgL_arg3655z00_1510), BUNSPEC);
							}
						}
				}
			}
		}
	}



/* save-call!-global3477 */
	obj_t BGl_savezd2callz12zd2global3477z12zzeffect_cgraphz00(obj_t
		BgL_envz00_2850, obj_t BgL_calleez00_2851, obj_t BgL_ownerz00_2852)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 208 */
			{
				BgL_globalz00_bglt BgL_calleez00_1487;

				obj_t BgL_ownerz00_1488;

				BgL_calleez00_1487 = (BgL_globalz00_bglt) (BgL_calleez00_2851);
				BgL_ownerz00_1488 = BgL_ownerz00_2852;
				{	/* Effect/cgraph.scm 209 */
					BgL_valuez00_bglt BgL_funz00_1491;

					{
						BgL_variablez00_bglt BgL_auxz00_3511;

						BgL_auxz00_3511 = (BgL_variablez00_bglt) (BgL_calleez00_1487);
						BgL_funz00_1491 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_3511))->BgL_valuez00);
					}
					{	/* Effect/cgraph.scm 210 */
						bool_t BgL_testz00_3514;

						{	/* Effect/cgraph.scm 210 */
							bool_t BgL_testz00_3515;

							{	/* Effect/cgraph.scm 210 */
								obj_t BgL_obj2019z00_2590;

								BgL_obj2019z00_2590 = (obj_t) (BgL_funz00_1491);
								BgL_testz00_3515 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj2019z00_2590,
									BGl_cfunz00zzast_varz00);
							}
							if (BgL_testz00_3515)
								{	/* Effect/cgraph.scm 210 */
									BgL_testz00_3514 = ((bool_t) 1);
								}
							else
								{	/* Effect/cgraph.scm 211 */
									bool_t BgL_testz00_3518;

									{	/* Effect/cgraph.scm 211 */
										obj_t BgL_obj1955z00_2591;

										BgL_obj1955z00_2591 = (obj_t) (BgL_funz00_1491);
										BgL_testz00_3518 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_2591,
											BGl_sfunz00zzast_varz00);
									}
									if (BgL_testz00_3518)
										{	/* Effect/cgraph.scm 211 */
											BgL_testz00_3514 =
												(
												(((BgL_globalz00_bglt) CREF(BgL_calleez00_1487))->
													BgL_importz00) == CNST_TABLE_REF(((long) 6)));
										}
									else
										{	/* Effect/cgraph.scm 211 */
											BgL_testz00_3514 = ((bool_t) 0);
										}
								}
						}
						if (BgL_testz00_3514)
							{	/* Effect/cgraph.scm 213 */
								bool_t BgL_testz00_3524;

								{	/* Effect/cgraph.scm 213 */
									BgL_funz00_bglt BgL_obj1814z00_2593;

									BgL_obj1814z00_2593 = (BgL_funz00_bglt) (BgL_funz00_1491);
									BgL_testz00_3524 =
										CBOOL(
										(((BgL_funz00_bglt) CREF(BgL_obj1814z00_2593))->
											BgL_sidezd2effectzf3z21));
								}
								if (BgL_testz00_3524)
									{	/* Effect/cgraph.scm 213 */
										return
											BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(
											(BgL_variablez00_bglt) (BgL_ownerz00_1488));
									}
								else
									{	/* Effect/cgraph.scm 213 */
										return BFALSE;
									}
							}
						else
							{	/* Effect/cgraph.scm 215 */
								BgL_globalz00_bglt BgL_arg3647z00_1494;

								{	/* Effect/cgraph.scm 215 */
									BgL_globalz00_bglt BgL_obj3418z00_1495;

									BgL_obj3418z00_1495 =
										((BgL_globalz00_bglt) BgL_calleez00_1487);
									{	/* Effect/cgraph.scm 215 */
										BgL_globalzf2fromzf2_bglt BgL_arg3648z00_1496;

										{	/* Effect/cgraph.scm 215 */
											BgL_globalzf2fromzf2_bglt BgL_res3758z00_2600;

											{	/* Effect/cgraph.scm 215 */
												BgL_globalzf2fromzf2_bglt BgL_new3302z00_2595;

												BgL_new3302z00_2595 =
													((BgL_globalzf2fromzf2_bglt)
													BREF(GC_MALLOC(sizeof(struct
																BgL_globalzf2fromzf2_bgl))));
												{	/* Effect/cgraph.scm 215 */
													BgL_globalzf2fromzf2_bglt BgL_res3757z00_2599;

													{	/* Effect/cgraph.scm 215 */
														BgL_globalzf2fromzf2_bglt BgL_new3324z00_2596;

														BgL_new3324z00_2596 = BgL_new3302z00_2595;
														{	/* Effect/cgraph.scm 215 */
															obj_t BgL_from3323z00_2598;

															BgL_from3323z00_2598 = BNIL;
															((((BgL_globalzf2fromzf2_bglt)
																		CREF(BgL_new3324z00_2596))->BgL_fromz00) =
																((obj_t) BgL_from3323z00_2598), BUNSPEC);
															BgL_res3757z00_2599 = BgL_new3324z00_2596;
													}} BgL_res3757z00_2599;
												}
												BgL_res3758z00_2600 = BgL_new3302z00_2595;
											}
											BgL_arg3648z00_1496 = BgL_res3758z00_2600;
										}
										{	/* Effect/cgraph.scm 215 */
											obj_t BgL_auxz00_3535;

											BgL_objectz00_bglt BgL_auxz00_3533;

											BgL_auxz00_3535 = (obj_t) (BgL_arg3648z00_1496);
											BgL_auxz00_3533 =
												(BgL_objectz00_bglt) (BgL_obj3418z00_1495);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_3533, BgL_auxz00_3535);
									}}
									BGL_OBJECT_CLASS_NUM_SET(
										(BgL_objectz00_bglt) (BgL_obj3418z00_1495),
										BGl_classzd2numzd2zz__objectz00
										(BGl_globalzf2fromzf2zzeffect_cgraphz00));
									BgL_arg3647z00_1494 = BgL_obj3418z00_1495;
								}
								{	/* Effect/cgraph.scm 215 */
									BgL_variablez00_bglt BgL_calleez00_2603;

									BgL_variablez00_bglt BgL_ownerz00_2604;

									BgL_calleez00_2603 =
										(BgL_variablez00_bglt) (BgL_arg3647z00_1494);
									BgL_ownerz00_2604 =
										(BgL_variablez00_bglt) (BgL_ownerz00_1488);
									{	/* Effect/cgraph.scm 215 */
										obj_t BgL_method3474z00_2605;

										{	/* Effect/cgraph.scm 215 */
											BgL_objectz00_bglt BgL_objz00_2606;

											BgL_objz00_2606 =
												(BgL_objectz00_bglt) (BgL_calleez00_2603);
											{	/* Effect/cgraph.scm 215 */
												long BgL_objzd2classzd2numz00_2607;

												BgL_objzd2classzd2numz00_2607 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2606);
												{	/* Effect/cgraph.scm 215 */
													obj_t BgL_arg2643z00_2608;

													BgL_arg2643z00_2608 =
														PROCEDURE_REF
														(BGl_savezd2callz12zd2envz12zzeffect_cgraphz00,
														(int) (((long) 1)));
													{	/* Effect/cgraph.scm 215 */
														obj_t BgL_arrayz00_2610;

														int BgL_offsetz00_2611;

														BgL_arrayz00_2610 = BgL_arg2643z00_2608;
														BgL_offsetz00_2611 =
															(int) (BgL_objzd2classzd2numz00_2607);
														{	/* Effect/cgraph.scm 215 */
															long BgL_offsetz00_2612;

															BgL_offsetz00_2612 =
																((long) (BgL_offsetz00_2611) - OBJECT_TYPE);
															{	/* Effect/cgraph.scm 215 */
																long BgL_modz00_2613;

																{	/* Effect/cgraph.scm 215 */
																	int BgL_arg2645z00_2614;

																	BgL_arg2645z00_2614 = (int) (((long) 16));
																	{	/* Effect/cgraph.scm 215 */
																		long BgL_auxz00_3551;

																		BgL_auxz00_3551 =
																			(long) (BgL_arg2645z00_2614);
																		BgL_modz00_2613 =
																			(BgL_offsetz00_2612 / BgL_auxz00_3551);
																}}
																{	/* Effect/cgraph.scm 215 */
																	long BgL_restz00_2615;

																	{	/* Effect/cgraph.scm 215 */
																		int BgL_arg2644z00_2616;

																		BgL_arg2644z00_2616 = (int) (((long) 16));
																		{	/* Effect/cgraph.scm 215 */
																			long BgL_auxz00_3555;

																			BgL_auxz00_3555 =
																				(long) (BgL_arg2644z00_2616);
																			BgL_restz00_2615 =
																				(BgL_offsetz00_2612 % BgL_auxz00_3555);
																	}}
																	{	/* Effect/cgraph.scm 215 */

																		BgL_method3474z00_2605 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2610,
																				(int) (BgL_modz00_2613)),
																			(int) (BgL_restz00_2615));
										}}}}}}}}
										return
											PROCEDURE_ENTRY(BgL_method3474z00_2605)
											(BgL_method3474z00_2605, (obj_t) (BgL_calleez00_2603),
											(obj_t) (BgL_ownerz00_2604), BEOA);
									}
								}
							}
					}
				}
			}
		}
	}



/* call-graph!-box-set!3472 */
	obj_t BGl_callzd2graphz12zd2boxzd2setz123472zd2zzeffect_cgraphz00(obj_t
		BgL_envz00_2853, obj_t BgL_nodez00_2854, obj_t BgL_ownerz00_2855)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 187 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1474;

				obj_t BgL_ownerz00_1475;

				BgL_nodez00_1474 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2854);
				BgL_ownerz00_1475 = BgL_ownerz00_2855;
				{	/* Effect/cgraph.scm 189 */
					bool_t BgL_testz00_3567;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_ownerz00_1475,
							BGl_localz00zzast_varz00))
						{	/* Effect/cgraph.scm 189 */
							BgL_testz00_3567 = ((bool_t) 1);
						}
					else
						{	/* Effect/cgraph.scm 189 */
							BgL_variablez00_bglt BgL_arg3640z00_1481;

							{	/* Effect/cgraph.scm 189 */
								BgL_varz00_bglt BgL_obj2155z00_2531;

								BgL_obj2155z00_2531 =
									(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1474))->
									BgL_varz00);
								BgL_arg3640z00_1481 =
									(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2531))->
									BgL_variablez00);
							}
							{	/* Effect/cgraph.scm 189 */
								obj_t BgL_obj1751z00_2532;

								BgL_obj1751z00_2532 = (obj_t) (BgL_arg3640z00_1481);
								BgL_testz00_3567 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_2532,
									BGl_globalz00zzast_varz00);
							}
						}
					if (BgL_testz00_3567)
						{	/* Effect/cgraph.scm 189 */
							BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(
								(BgL_variablez00_bglt) (BgL_ownerz00_1475));
						}
					else
						{	/* Effect/cgraph.scm 189 */
							BFALSE;
						}
				}
				{	/* Effect/cgraph.scm 191 */
					BgL_varz00_bglt BgL_arg3642z00_1483;

					BgL_arg3642z00_1483 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1474))->BgL_varz00);
					{	/* Effect/cgraph.scm 191 */
						BgL_nodez00_bglt BgL_nodez00_2534;

						BgL_variablez00_bglt BgL_ownerz00_2535;

						BgL_nodez00_2534 = (BgL_nodez00_bglt) (BgL_arg3642z00_1483);
						BgL_ownerz00_2535 = (BgL_variablez00_bglt) (BgL_ownerz00_1475);
						{	/* Effect/cgraph.scm 191 */
							obj_t BgL_method3438z00_2536;

							{	/* Effect/cgraph.scm 191 */
								BgL_objectz00_bglt BgL_objz00_2537;

								BgL_objz00_2537 = (BgL_objectz00_bglt) (BgL_nodez00_2534);
								{	/* Effect/cgraph.scm 191 */
									long BgL_objzd2classzd2numz00_2538;

									BgL_objzd2classzd2numz00_2538 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2537);
									{	/* Effect/cgraph.scm 191 */
										obj_t BgL_arg2643z00_2539;

										BgL_arg2643z00_2539 =
											PROCEDURE_REF
											(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
											(int) (((long) 1)));
										{	/* Effect/cgraph.scm 191 */
											obj_t BgL_arrayz00_2541;

											int BgL_offsetz00_2542;

											BgL_arrayz00_2541 = BgL_arg2643z00_2539;
											BgL_offsetz00_2542 =
												(int) (BgL_objzd2classzd2numz00_2538);
											{	/* Effect/cgraph.scm 191 */
												long BgL_offsetz00_2543;

												BgL_offsetz00_2543 =
													((long) (BgL_offsetz00_2542) - OBJECT_TYPE);
												{	/* Effect/cgraph.scm 191 */
													long BgL_modz00_2544;

													{	/* Effect/cgraph.scm 191 */
														int BgL_arg2645z00_2545;

														BgL_arg2645z00_2545 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 191 */
															long BgL_auxz00_3587;

															BgL_auxz00_3587 = (long) (BgL_arg2645z00_2545);
															BgL_modz00_2544 =
																(BgL_offsetz00_2543 / BgL_auxz00_3587);
													}}
													{	/* Effect/cgraph.scm 191 */
														long BgL_restz00_2546;

														{	/* Effect/cgraph.scm 191 */
															int BgL_arg2644z00_2547;

															BgL_arg2644z00_2547 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 191 */
																long BgL_auxz00_3591;

																BgL_auxz00_3591 = (long) (BgL_arg2644z00_2547);
																BgL_restz00_2546 =
																	(BgL_offsetz00_2543 % BgL_auxz00_3591);
														}}
														{	/* Effect/cgraph.scm 191 */

															BgL_method3438z00_2536 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2541,
																	(int) (BgL_modz00_2544)),
																(int) (BgL_restz00_2546));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3438z00_2536) (BgL_method3438z00_2536,
								(obj_t) (BgL_nodez00_2534), (obj_t) (BgL_ownerz00_2535), BEOA);
				}}}
				{	/* Effect/cgraph.scm 192 */
					BgL_nodez00_bglt BgL_arg3643z00_1484;

					BgL_arg3643z00_1484 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1474))->BgL_valuez00);
					{	/* Effect/cgraph.scm 192 */
						BgL_variablez00_bglt BgL_ownerz00_2563;

						BgL_ownerz00_2563 = (BgL_variablez00_bglt) (BgL_ownerz00_1475);
						{	/* Effect/cgraph.scm 192 */
							obj_t BgL_method3438z00_2564;

							{	/* Effect/cgraph.scm 192 */
								BgL_objectz00_bglt BgL_objz00_2565;

								BgL_objz00_2565 = (BgL_objectz00_bglt) (BgL_arg3643z00_1484);
								{	/* Effect/cgraph.scm 192 */
									long BgL_objzd2classzd2numz00_2566;

									BgL_objzd2classzd2numz00_2566 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2565);
									{	/* Effect/cgraph.scm 192 */
										obj_t BgL_arg2643z00_2567;

										BgL_arg2643z00_2567 =
											PROCEDURE_REF
											(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
											(int) (((long) 1)));
										{	/* Effect/cgraph.scm 192 */
											obj_t BgL_arrayz00_2569;

											int BgL_offsetz00_2570;

											BgL_arrayz00_2569 = BgL_arg2643z00_2567;
											BgL_offsetz00_2570 =
												(int) (BgL_objzd2classzd2numz00_2566);
											{	/* Effect/cgraph.scm 192 */
												long BgL_offsetz00_2571;

												BgL_offsetz00_2571 =
													((long) (BgL_offsetz00_2570) - OBJECT_TYPE);
												{	/* Effect/cgraph.scm 192 */
													long BgL_modz00_2572;

													{	/* Effect/cgraph.scm 192 */
														int BgL_arg2645z00_2573;

														BgL_arg2645z00_2573 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 192 */
															long BgL_auxz00_3612;

															BgL_auxz00_3612 = (long) (BgL_arg2645z00_2573);
															BgL_modz00_2572 =
																(BgL_offsetz00_2571 / BgL_auxz00_3612);
													}}
													{	/* Effect/cgraph.scm 192 */
														long BgL_restz00_2574;

														{	/* Effect/cgraph.scm 192 */
															int BgL_arg2644z00_2575;

															BgL_arg2644z00_2575 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 192 */
																long BgL_auxz00_3616;

																BgL_auxz00_3616 = (long) (BgL_arg2644z00_2575);
																BgL_restz00_2574 =
																	(BgL_offsetz00_2571 % BgL_auxz00_3616);
														}}
														{	/* Effect/cgraph.scm 192 */

															BgL_method3438z00_2564 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2569,
																	(int) (BgL_modz00_2572)),
																(int) (BgL_restz00_2574));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3438z00_2564) (BgL_method3438z00_2564,
								(obj_t) (BgL_arg3643z00_1484),
								(obj_t) (BgL_ownerz00_2563), BEOA);
						}
					}
				}
			}
		}
	}



/* call-graph!-box-ref3470 */
	obj_t BGl_callzd2graphz12zd2boxzd2ref3470zc0zzeffect_cgraphz00(obj_t
		BgL_envz00_2856, obj_t BgL_nodez00_2857, obj_t BgL_ownerz00_2858)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 179 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1467;

				obj_t BgL_ownerz00_1468;

				BgL_nodez00_1467 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2857);
				BgL_ownerz00_1468 = BgL_ownerz00_2858;
				{	/* Effect/cgraph.scm 180 */
					BgL_varz00_bglt BgL_arg3636z00_2500;

					BgL_arg3636z00_2500 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1467))->BgL_varz00);
					{	/* Effect/cgraph.scm 180 */
						BgL_nodez00_bglt BgL_nodez00_2502;

						BgL_variablez00_bglt BgL_ownerz00_2503;

						BgL_nodez00_2502 = (BgL_nodez00_bglt) (BgL_arg3636z00_2500);
						BgL_ownerz00_2503 = (BgL_variablez00_bglt) (BgL_ownerz00_1468);
						{	/* Effect/cgraph.scm 180 */
							obj_t BgL_method3438z00_2504;

							{	/* Effect/cgraph.scm 180 */
								BgL_objectz00_bglt BgL_objz00_2505;

								BgL_objz00_2505 = (BgL_objectz00_bglt) (BgL_nodez00_2502);
								{	/* Effect/cgraph.scm 180 */
									long BgL_objzd2classzd2numz00_2506;

									BgL_objzd2classzd2numz00_2506 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2505);
									{	/* Effect/cgraph.scm 180 */
										obj_t BgL_arg2643z00_2507;

										BgL_arg2643z00_2507 =
											PROCEDURE_REF
											(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
											(int) (((long) 1)));
										{	/* Effect/cgraph.scm 180 */
											obj_t BgL_arrayz00_2509;

											int BgL_offsetz00_2510;

											BgL_arrayz00_2509 = BgL_arg2643z00_2507;
											BgL_offsetz00_2510 =
												(int) (BgL_objzd2classzd2numz00_2506);
											{	/* Effect/cgraph.scm 180 */
												long BgL_offsetz00_2511;

												BgL_offsetz00_2511 =
													((long) (BgL_offsetz00_2510) - OBJECT_TYPE);
												{	/* Effect/cgraph.scm 180 */
													long BgL_modz00_2512;

													{	/* Effect/cgraph.scm 180 */
														int BgL_arg2645z00_2513;

														BgL_arg2645z00_2513 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 180 */
															long BgL_auxz00_3639;

															BgL_auxz00_3639 = (long) (BgL_arg2645z00_2513);
															BgL_modz00_2512 =
																(BgL_offsetz00_2511 / BgL_auxz00_3639);
													}}
													{	/* Effect/cgraph.scm 180 */
														long BgL_restz00_2514;

														{	/* Effect/cgraph.scm 180 */
															int BgL_arg2644z00_2515;

															BgL_arg2644z00_2515 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 180 */
																long BgL_auxz00_3643;

																BgL_auxz00_3643 = (long) (BgL_arg2644z00_2515);
																BgL_restz00_2514 =
																	(BgL_offsetz00_2511 % BgL_auxz00_3643);
														}}
														{	/* Effect/cgraph.scm 180 */

															BgL_method3438z00_2504 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2509,
																	(int) (BgL_modz00_2512)),
																(int) (BgL_restz00_2514));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3438z00_2504) (BgL_method3438z00_2504,
								(obj_t) (BgL_nodez00_2502), (obj_t) (BgL_ownerz00_2503), BEOA);
						}
					}
				}
			}
		}
	}



/* call-graph!-make-box3468 */
	obj_t BGl_callzd2graphz12zd2makezd2box3468zc0zzeffect_cgraphz00(obj_t
		BgL_envz00_2859, obj_t BgL_nodez00_2860, obj_t BgL_ownerz00_2861)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 173 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1460;

				obj_t BgL_ownerz00_1461;

				BgL_nodez00_1460 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2860);
				BgL_ownerz00_1461 = BgL_ownerz00_2861;
				{	/* Effect/cgraph.scm 174 */
					BgL_nodez00_bglt BgL_arg3634z00_2471;

					BgL_arg3634z00_2471 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1460))->BgL_valuez00);
					{	/* Effect/cgraph.scm 174 */
						BgL_variablez00_bglt BgL_ownerz00_2474;

						BgL_ownerz00_2474 = (BgL_variablez00_bglt) (BgL_ownerz00_1461);
						{	/* Effect/cgraph.scm 174 */
							obj_t BgL_method3438z00_2475;

							{	/* Effect/cgraph.scm 174 */
								BgL_objectz00_bglt BgL_objz00_2476;

								BgL_objz00_2476 = (BgL_objectz00_bglt) (BgL_arg3634z00_2471);
								{	/* Effect/cgraph.scm 174 */
									long BgL_objzd2classzd2numz00_2477;

									BgL_objzd2classzd2numz00_2477 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2476);
									{	/* Effect/cgraph.scm 174 */
										obj_t BgL_arg2643z00_2478;

										BgL_arg2643z00_2478 =
											PROCEDURE_REF
											(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
											(int) (((long) 1)));
										{	/* Effect/cgraph.scm 174 */
											obj_t BgL_arrayz00_2480;

											int BgL_offsetz00_2481;

											BgL_arrayz00_2480 = BgL_arg2643z00_2478;
											BgL_offsetz00_2481 =
												(int) (BgL_objzd2classzd2numz00_2477);
											{	/* Effect/cgraph.scm 174 */
												long BgL_offsetz00_2482;

												BgL_offsetz00_2482 =
													((long) (BgL_offsetz00_2481) - OBJECT_TYPE);
												{	/* Effect/cgraph.scm 174 */
													long BgL_modz00_2483;

													{	/* Effect/cgraph.scm 174 */
														int BgL_arg2645z00_2484;

														BgL_arg2645z00_2484 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 174 */
															long BgL_auxz00_3665;

															BgL_auxz00_3665 = (long) (BgL_arg2645z00_2484);
															BgL_modz00_2483 =
																(BgL_offsetz00_2482 / BgL_auxz00_3665);
													}}
													{	/* Effect/cgraph.scm 174 */
														long BgL_restz00_2485;

														{	/* Effect/cgraph.scm 174 */
															int BgL_arg2644z00_2486;

															BgL_arg2644z00_2486 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 174 */
																long BgL_auxz00_3669;

																BgL_auxz00_3669 = (long) (BgL_arg2644z00_2486);
																BgL_restz00_2485 =
																	(BgL_offsetz00_2482 % BgL_auxz00_3669);
														}}
														{	/* Effect/cgraph.scm 174 */

															BgL_method3438z00_2475 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2480,
																	(int) (BgL_modz00_2483)),
																(int) (BgL_restz00_2485));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3438z00_2475) (BgL_method3438z00_2475,
								(obj_t) (BgL_arg3634z00_2471),
								(obj_t) (BgL_ownerz00_2474), BEOA);
						}
					}
				}
			}
		}
	}



/* call-graph!-jump-ex-3466 */
	obj_t BGl_callzd2graphz12zd2jumpzd2exzd23466z12zzeffect_cgraphz00(obj_t
		BgL_envz00_2862, obj_t BgL_nodez00_2863, obj_t BgL_ownerz00_2864)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 164 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1451;

				obj_t BgL_ownerz00_1452;

				BgL_nodez00_1451 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2863);
				BgL_ownerz00_1452 = BgL_ownerz00_2864;
				BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(
					(BgL_variablez00_bglt) (BgL_ownerz00_1452));
				{	/* Effect/cgraph.scm 167 */
					BgL_nodez00_bglt BgL_arg3631z00_1456;

					BgL_arg3631z00_1456 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1451))->
						BgL_exitz00);
					{	/* Effect/cgraph.scm 167 */
						BgL_variablez00_bglt BgL_ownerz00_2417;

						BgL_ownerz00_2417 = (BgL_variablez00_bglt) (BgL_ownerz00_1452);
						{	/* Effect/cgraph.scm 167 */
							obj_t BgL_method3438z00_2418;

							{	/* Effect/cgraph.scm 167 */
								BgL_objectz00_bglt BgL_objz00_2419;

								BgL_objz00_2419 = (BgL_objectz00_bglt) (BgL_arg3631z00_1456);
								{	/* Effect/cgraph.scm 167 */
									long BgL_objzd2classzd2numz00_2420;

									BgL_objzd2classzd2numz00_2420 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2419);
									{	/* Effect/cgraph.scm 167 */
										obj_t BgL_arg2643z00_2421;

										BgL_arg2643z00_2421 =
											PROCEDURE_REF
											(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
											(int) (((long) 1)));
										{	/* Effect/cgraph.scm 167 */
											obj_t BgL_arrayz00_2423;

											int BgL_offsetz00_2424;

											BgL_arrayz00_2423 = BgL_arg2643z00_2421;
											BgL_offsetz00_2424 =
												(int) (BgL_objzd2classzd2numz00_2420);
											{	/* Effect/cgraph.scm 167 */
												long BgL_offsetz00_2425;

												BgL_offsetz00_2425 =
													((long) (BgL_offsetz00_2424) - OBJECT_TYPE);
												{	/* Effect/cgraph.scm 167 */
													long BgL_modz00_2426;

													{	/* Effect/cgraph.scm 167 */
														int BgL_arg2645z00_2427;

														BgL_arg2645z00_2427 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 167 */
															long BgL_auxz00_3693;

															BgL_auxz00_3693 = (long) (BgL_arg2645z00_2427);
															BgL_modz00_2426 =
																(BgL_offsetz00_2425 / BgL_auxz00_3693);
													}}
													{	/* Effect/cgraph.scm 167 */
														long BgL_restz00_2428;

														{	/* Effect/cgraph.scm 167 */
															int BgL_arg2644z00_2429;

															BgL_arg2644z00_2429 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 167 */
																long BgL_auxz00_3697;

																BgL_auxz00_3697 = (long) (BgL_arg2644z00_2429);
																BgL_restz00_2428 =
																	(BgL_offsetz00_2425 % BgL_auxz00_3697);
														}}
														{	/* Effect/cgraph.scm 167 */

															BgL_method3438z00_2418 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2423,
																	(int) (BgL_modz00_2426)),
																(int) (BgL_restz00_2428));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3438z00_2418) (BgL_method3438z00_2418,
								(obj_t) (BgL_arg3631z00_1456),
								(obj_t) (BgL_ownerz00_2417), BEOA);
				}}}
				{	/* Effect/cgraph.scm 168 */
					BgL_nodez00_bglt BgL_arg3632z00_1457;

					BgL_arg3632z00_1457 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1451))->
						BgL_valuez00);
					{	/* Effect/cgraph.scm 168 */
						BgL_variablez00_bglt BgL_ownerz00_2445;

						BgL_ownerz00_2445 = (BgL_variablez00_bglt) (BgL_ownerz00_1452);
						{	/* Effect/cgraph.scm 168 */
							obj_t BgL_method3438z00_2446;

							{	/* Effect/cgraph.scm 168 */
								BgL_objectz00_bglt BgL_objz00_2447;

								BgL_objz00_2447 = (BgL_objectz00_bglt) (BgL_arg3632z00_1457);
								{	/* Effect/cgraph.scm 168 */
									long BgL_objzd2classzd2numz00_2448;

									BgL_objzd2classzd2numz00_2448 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2447);
									{	/* Effect/cgraph.scm 168 */
										obj_t BgL_arg2643z00_2449;

										BgL_arg2643z00_2449 =
											PROCEDURE_REF
											(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
											(int) (((long) 1)));
										{	/* Effect/cgraph.scm 168 */
											obj_t BgL_arrayz00_2451;

											int BgL_offsetz00_2452;

											BgL_arrayz00_2451 = BgL_arg2643z00_2449;
											BgL_offsetz00_2452 =
												(int) (BgL_objzd2classzd2numz00_2448);
											{	/* Effect/cgraph.scm 168 */
												long BgL_offsetz00_2453;

												BgL_offsetz00_2453 =
													((long) (BgL_offsetz00_2452) - OBJECT_TYPE);
												{	/* Effect/cgraph.scm 168 */
													long BgL_modz00_2454;

													{	/* Effect/cgraph.scm 168 */
														int BgL_arg2645z00_2455;

														BgL_arg2645z00_2455 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 168 */
															long BgL_auxz00_3718;

															BgL_auxz00_3718 = (long) (BgL_arg2645z00_2455);
															BgL_modz00_2454 =
																(BgL_offsetz00_2453 / BgL_auxz00_3718);
													}}
													{	/* Effect/cgraph.scm 168 */
														long BgL_restz00_2456;

														{	/* Effect/cgraph.scm 168 */
															int BgL_arg2644z00_2457;

															BgL_arg2644z00_2457 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 168 */
																long BgL_auxz00_3722;

																BgL_auxz00_3722 = (long) (BgL_arg2644z00_2457);
																BgL_restz00_2456 =
																	(BgL_offsetz00_2453 % BgL_auxz00_3722);
														}}
														{	/* Effect/cgraph.scm 168 */

															BgL_method3438z00_2446 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2451,
																	(int) (BgL_modz00_2454)),
																(int) (BgL_restz00_2456));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3438z00_2446) (BgL_method3438z00_2446,
								(obj_t) (BgL_arg3632z00_1457),
								(obj_t) (BgL_ownerz00_2445), BEOA);
						}
					}
				}
			}
		}
	}



/* call-graph!-set-ex-i3464 */
	obj_t BGl_callzd2graphz12zd2setzd2exzd2i3464z12zzeffect_cgraphz00(obj_t
		BgL_envz00_2865, obj_t BgL_nodez00_2866, obj_t BgL_ownerz00_2867)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 156 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1443;

				obj_t BgL_ownerz00_1444;

				BgL_nodez00_1443 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2866);
				BgL_ownerz00_1444 = BgL_ownerz00_2867;
				BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(
					(BgL_variablez00_bglt) (BgL_ownerz00_1444));
				{	/* Effect/cgraph.scm 159 */
					BgL_nodez00_bglt BgL_arg3629z00_2386;

					BgL_arg3629z00_2386 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1443))->BgL_bodyz00);
					{	/* Effect/cgraph.scm 159 */
						BgL_variablez00_bglt BgL_ownerz00_2389;

						BgL_ownerz00_2389 = (BgL_variablez00_bglt) (BgL_ownerz00_1444);
						{	/* Effect/cgraph.scm 159 */
							obj_t BgL_method3438z00_2390;

							{	/* Effect/cgraph.scm 159 */
								BgL_objectz00_bglt BgL_objz00_2391;

								BgL_objz00_2391 = (BgL_objectz00_bglt) (BgL_arg3629z00_2386);
								{	/* Effect/cgraph.scm 159 */
									long BgL_objzd2classzd2numz00_2392;

									BgL_objzd2classzd2numz00_2392 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2391);
									{	/* Effect/cgraph.scm 159 */
										obj_t BgL_arg2643z00_2393;

										BgL_arg2643z00_2393 =
											PROCEDURE_REF
											(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
											(int) (((long) 1)));
										{	/* Effect/cgraph.scm 159 */
											obj_t BgL_arrayz00_2395;

											int BgL_offsetz00_2396;

											BgL_arrayz00_2395 = BgL_arg2643z00_2393;
											BgL_offsetz00_2396 =
												(int) (BgL_objzd2classzd2numz00_2392);
											{	/* Effect/cgraph.scm 159 */
												long BgL_offsetz00_2397;

												BgL_offsetz00_2397 =
													((long) (BgL_offsetz00_2396) - OBJECT_TYPE);
												{	/* Effect/cgraph.scm 159 */
													long BgL_modz00_2398;

													{	/* Effect/cgraph.scm 159 */
														int BgL_arg2645z00_2399;

														BgL_arg2645z00_2399 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 159 */
															long BgL_auxz00_3746;

															BgL_auxz00_3746 = (long) (BgL_arg2645z00_2399);
															BgL_modz00_2398 =
																(BgL_offsetz00_2397 / BgL_auxz00_3746);
													}}
													{	/* Effect/cgraph.scm 159 */
														long BgL_restz00_2400;

														{	/* Effect/cgraph.scm 159 */
															int BgL_arg2644z00_2401;

															BgL_arg2644z00_2401 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 159 */
																long BgL_auxz00_3750;

																BgL_auxz00_3750 = (long) (BgL_arg2644z00_2401);
																BgL_restz00_2400 =
																	(BgL_offsetz00_2397 % BgL_auxz00_3750);
														}}
														{	/* Effect/cgraph.scm 159 */

															BgL_method3438z00_2390 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2395,
																	(int) (BgL_modz00_2398)),
																(int) (BgL_restz00_2400));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3438z00_2390) (BgL_method3438z00_2390,
								(obj_t) (BgL_arg3629z00_2386),
								(obj_t) (BgL_ownerz00_2389), BEOA);
						}
					}
				}
			}
		}
	}



/* call-graph!-let-var3462 */
	obj_t BGl_callzd2graphz12zd2letzd2var3462zc0zzeffect_cgraphz00(obj_t
		BgL_envz00_2868, obj_t BgL_nodez00_2869, obj_t BgL_ownerz00_2870)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 146 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1426;

				obj_t BgL_ownerz00_1427;

				{	/* Effect/cgraph.scm 147 */
					bool_t BgL_auxz00_3762;

					BgL_nodez00_1426 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2869);
					BgL_ownerz00_1427 = BgL_ownerz00_2870;
					{	/* Effect/cgraph.scm 148 */
						BgL_nodez00_bglt BgL_arg3623z00_1431;

						BgL_arg3623z00_1431 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1426))->BgL_bodyz00);
						{	/* Effect/cgraph.scm 148 */
							BgL_variablez00_bglt BgL_ownerz00_2328;

							BgL_ownerz00_2328 = (BgL_variablez00_bglt) (BgL_ownerz00_1427);
							{	/* Effect/cgraph.scm 148 */
								obj_t BgL_method3438z00_2329;

								{	/* Effect/cgraph.scm 148 */
									BgL_objectz00_bglt BgL_objz00_2330;

									BgL_objz00_2330 = (BgL_objectz00_bglt) (BgL_arg3623z00_1431);
									{	/* Effect/cgraph.scm 148 */
										long BgL_objzd2classzd2numz00_2331;

										BgL_objzd2classzd2numz00_2331 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2330);
										{	/* Effect/cgraph.scm 148 */
											obj_t BgL_arg2643z00_2332;

											BgL_arg2643z00_2332 =
												PROCEDURE_REF
												(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
												(int) (((long) 1)));
											{	/* Effect/cgraph.scm 148 */
												obj_t BgL_arrayz00_2334;

												int BgL_offsetz00_2335;

												BgL_arrayz00_2334 = BgL_arg2643z00_2332;
												BgL_offsetz00_2335 =
													(int) (BgL_objzd2classzd2numz00_2331);
												{	/* Effect/cgraph.scm 148 */
													long BgL_offsetz00_2336;

													BgL_offsetz00_2336 =
														((long) (BgL_offsetz00_2335) - OBJECT_TYPE);
													{	/* Effect/cgraph.scm 148 */
														long BgL_modz00_2337;

														{	/* Effect/cgraph.scm 148 */
															int BgL_arg2645z00_2338;

															BgL_arg2645z00_2338 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 148 */
																long BgL_auxz00_3773;

																BgL_auxz00_3773 = (long) (BgL_arg2645z00_2338);
																BgL_modz00_2337 =
																	(BgL_offsetz00_2336 / BgL_auxz00_3773);
														}}
														{	/* Effect/cgraph.scm 148 */
															long BgL_restz00_2339;

															{	/* Effect/cgraph.scm 148 */
																int BgL_arg2644z00_2340;

																BgL_arg2644z00_2340 = (int) (((long) 16));
																{	/* Effect/cgraph.scm 148 */
																	long BgL_auxz00_3777;

																	BgL_auxz00_3777 =
																		(long) (BgL_arg2644z00_2340);
																	BgL_restz00_2339 =
																		(BgL_offsetz00_2336 % BgL_auxz00_3777);
															}}
															{	/* Effect/cgraph.scm 148 */

																BgL_method3438z00_2329 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2334,
																		(int) (BgL_modz00_2337)),
																	(int) (BgL_restz00_2339));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method3438z00_2329) (BgL_method3438z00_2329,
									(obj_t) (BgL_arg3623z00_1431),
									(obj_t) (BgL_ownerz00_2328), BEOA);
					}}}
					{	/* Effect/cgraph.scm 149 */
						obj_t BgL_g3432z00_1432;

						BgL_g3432z00_1432 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1426))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3430z00_1434;

							BgL_l3430z00_1434 = BgL_g3432z00_1432;
						BgL_zc3anonymousza33624ze3z83_1435:
							if (PAIRP(BgL_l3430z00_1434))
								{	/* Effect/cgraph.scm 149 */
									{	/* Effect/cgraph.scm 150 */
										obj_t BgL_bindingz00_1437;

										BgL_bindingz00_1437 = CAR(BgL_l3430z00_1434);
										{	/* Effect/cgraph.scm 150 */
											obj_t BgL_arg3626z00_1438;

											BgL_arg3626z00_1438 = CDR(BgL_bindingz00_1437);
											{	/* Effect/cgraph.scm 150 */
												BgL_nodez00_bglt BgL_nodez00_2358;

												BgL_variablez00_bglt BgL_ownerz00_2359;

												BgL_nodez00_2358 =
													(BgL_nodez00_bglt) (BgL_arg3626z00_1438);
												BgL_ownerz00_2359 =
													(BgL_variablez00_bglt) (BgL_ownerz00_1427);
												{	/* Effect/cgraph.scm 150 */
													obj_t BgL_method3438z00_2360;

													{	/* Effect/cgraph.scm 150 */
														BgL_objectz00_bglt BgL_objz00_2361;

														BgL_objz00_2361 =
															(BgL_objectz00_bglt) (BgL_nodez00_2358);
														{	/* Effect/cgraph.scm 150 */
															long BgL_objzd2classzd2numz00_2362;

															BgL_objzd2classzd2numz00_2362 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2361);
															{	/* Effect/cgraph.scm 150 */
																obj_t BgL_arg2643z00_2363;

																BgL_arg2643z00_2363 =
																	PROCEDURE_REF
																	(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
																	(int) (((long) 1)));
																{	/* Effect/cgraph.scm 150 */
																	obj_t BgL_arrayz00_2365;

																	int BgL_offsetz00_2366;

																	BgL_arrayz00_2365 = BgL_arg2643z00_2363;
																	BgL_offsetz00_2366 =
																		(int) (BgL_objzd2classzd2numz00_2362);
																	{	/* Effect/cgraph.scm 150 */
																		long BgL_offsetz00_2367;

																		BgL_offsetz00_2367 =
																			(
																			(long) (BgL_offsetz00_2366) -
																			OBJECT_TYPE);
																		{	/* Effect/cgraph.scm 150 */
																			long BgL_modz00_2368;

																			{	/* Effect/cgraph.scm 150 */
																				int BgL_arg2645z00_2369;

																				BgL_arg2645z00_2369 =
																					(int) (((long) 16));
																				{	/* Effect/cgraph.scm 150 */
																					long BgL_auxz00_3803;

																					BgL_auxz00_3803 =
																						(long) (BgL_arg2645z00_2369);
																					BgL_modz00_2368 =
																						(BgL_offsetz00_2367 /
																						BgL_auxz00_3803);
																			}}
																			{	/* Effect/cgraph.scm 150 */
																				long BgL_restz00_2370;

																				{	/* Effect/cgraph.scm 150 */
																					int BgL_arg2644z00_2371;

																					BgL_arg2644z00_2371 =
																						(int) (((long) 16));
																					{	/* Effect/cgraph.scm 150 */
																						long BgL_auxz00_3807;

																						BgL_auxz00_3807 =
																							(long) (BgL_arg2644z00_2371);
																						BgL_restz00_2370 =
																							(BgL_offsetz00_2367 %
																							BgL_auxz00_3807);
																				}}
																				{	/* Effect/cgraph.scm 150 */

																					BgL_method3438z00_2360 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2365,
																							(int) (BgL_modz00_2368)),
																						(int) (BgL_restz00_2370));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method3438z00_2360)
														(BgL_method3438z00_2360, (obj_t) (BgL_nodez00_2358),
														(obj_t) (BgL_ownerz00_2359), BEOA);
									}}}}
									{
										obj_t BgL_l3430z00_3818;

										BgL_l3430z00_3818 = CDR(BgL_l3430z00_1434);
										BgL_l3430z00_1434 = BgL_l3430z00_3818;
										goto BgL_zc3anonymousza33624ze3z83_1435;
									}
								}
							else
								{	/* Effect/cgraph.scm 149 */
									BgL_auxz00_3762 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_3762);
				}
			}
		}
	}



/* call-graph!-let-fun3460 */
	obj_t BGl_callzd2graphz12zd2letzd2fun3460zc0zzeffect_cgraphz00(obj_t
		BgL_envz00_2871, obj_t BgL_nodez00_2872, obj_t BgL_ownerz00_2873)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 136 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1410;

				obj_t BgL_ownerz00_1411;

				BgL_nodez00_1410 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2872);
				BgL_ownerz00_1411 = BgL_ownerz00_2873;
				{	/* Effect/cgraph.scm 138 */
					obj_t BgL_g3429z00_1415;

					BgL_g3429z00_1415 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1410))->BgL_localsz00);
					{
						obj_t BgL_l3427z00_1417;

						BgL_l3427z00_1417 = BgL_g3429z00_1415;
					BgL_zc3anonymousza33618ze3z83_1418:
						if (PAIRP(BgL_l3427z00_1417))
							{	/* Effect/cgraph.scm 138 */
								{	/* Effect/cgraph.scm 139 */
									obj_t BgL_localz00_1420;

									BgL_localz00_1420 = CAR(BgL_l3427z00_1417);
									BGl_funzd2callzd2graphz12z12zzeffect_cgraphz00(
										(BgL_variablez00_bglt) (BgL_localz00_1420));
								}
								{
									obj_t BgL_l3427z00_3828;

									BgL_l3427z00_3828 = CDR(BgL_l3427z00_1417);
									BgL_l3427z00_1417 = BgL_l3427z00_3828;
									goto BgL_zc3anonymousza33618ze3z83_1418;
								}
							}
						else
							{	/* Effect/cgraph.scm 138 */
								((bool_t) 1);
							}
					}
				}
				{	/* Effect/cgraph.scm 141 */
					BgL_nodez00_bglt BgL_arg3621z00_1423;

					BgL_arg3621z00_1423 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1410))->BgL_bodyz00);
					{	/* Effect/cgraph.scm 141 */
						BgL_variablez00_bglt BgL_ownerz00_2300;

						BgL_ownerz00_2300 = (BgL_variablez00_bglt) (BgL_ownerz00_1411);
						{	/* Effect/cgraph.scm 141 */
							obj_t BgL_method3438z00_2301;

							{	/* Effect/cgraph.scm 141 */
								BgL_objectz00_bglt BgL_objz00_2302;

								BgL_objz00_2302 = (BgL_objectz00_bglt) (BgL_arg3621z00_1423);
								{	/* Effect/cgraph.scm 141 */
									long BgL_objzd2classzd2numz00_2303;

									BgL_objzd2classzd2numz00_2303 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2302);
									{	/* Effect/cgraph.scm 141 */
										obj_t BgL_arg2643z00_2304;

										BgL_arg2643z00_2304 =
											PROCEDURE_REF
											(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
											(int) (((long) 1)));
										{	/* Effect/cgraph.scm 141 */
											obj_t BgL_arrayz00_2306;

											int BgL_offsetz00_2307;

											BgL_arrayz00_2306 = BgL_arg2643z00_2304;
											BgL_offsetz00_2307 =
												(int) (BgL_objzd2classzd2numz00_2303);
											{	/* Effect/cgraph.scm 141 */
												long BgL_offsetz00_2308;

												BgL_offsetz00_2308 =
													((long) (BgL_offsetz00_2307) - OBJECT_TYPE);
												{	/* Effect/cgraph.scm 141 */
													long BgL_modz00_2309;

													{	/* Effect/cgraph.scm 141 */
														int BgL_arg2645z00_2310;

														BgL_arg2645z00_2310 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 141 */
															long BgL_auxz00_3840;

															BgL_auxz00_3840 = (long) (BgL_arg2645z00_2310);
															BgL_modz00_2309 =
																(BgL_offsetz00_2308 / BgL_auxz00_3840);
													}}
													{	/* Effect/cgraph.scm 141 */
														long BgL_restz00_2311;

														{	/* Effect/cgraph.scm 141 */
															int BgL_arg2644z00_2312;

															BgL_arg2644z00_2312 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 141 */
																long BgL_auxz00_3844;

																BgL_auxz00_3844 = (long) (BgL_arg2644z00_2312);
																BgL_restz00_2311 =
																	(BgL_offsetz00_2308 % BgL_auxz00_3844);
														}}
														{	/* Effect/cgraph.scm 141 */

															BgL_method3438z00_2301 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2306,
																	(int) (BgL_modz00_2309)),
																(int) (BgL_restz00_2311));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3438z00_2301) (BgL_method3438z00_2301,
								(obj_t) (BgL_arg3621z00_1423),
								(obj_t) (BgL_ownerz00_2300), BEOA);
						}
					}
				}
			}
		}
	}



/* call-graph!-select3458 */
	obj_t BGl_callzd2graphz12zd2select3458z12zzeffect_cgraphz00(obj_t
		BgL_envz00_2874, obj_t BgL_nodez00_2875, obj_t BgL_ownerz00_2876)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 126 */
			{
				BgL_selectz00_bglt BgL_nodez00_1393;

				obj_t BgL_ownerz00_1394;

				{	/* Effect/cgraph.scm 127 */
					bool_t BgL_auxz00_3856;

					BgL_nodez00_1393 = (BgL_selectz00_bglt) (BgL_nodez00_2875);
					BgL_ownerz00_1394 = BgL_ownerz00_2876;
					{	/* Effect/cgraph.scm 128 */
						BgL_nodez00_bglt BgL_arg3612z00_1398;

						BgL_arg3612z00_1398 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1393))->BgL_testz00);
						{	/* Effect/cgraph.scm 128 */
							BgL_variablez00_bglt BgL_ownerz00_2236;

							BgL_ownerz00_2236 = (BgL_variablez00_bglt) (BgL_ownerz00_1394);
							{	/* Effect/cgraph.scm 128 */
								obj_t BgL_method3438z00_2237;

								{	/* Effect/cgraph.scm 128 */
									BgL_objectz00_bglt BgL_objz00_2238;

									BgL_objz00_2238 = (BgL_objectz00_bglt) (BgL_arg3612z00_1398);
									{	/* Effect/cgraph.scm 128 */
										long BgL_objzd2classzd2numz00_2239;

										BgL_objzd2classzd2numz00_2239 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2238);
										{	/* Effect/cgraph.scm 128 */
											obj_t BgL_arg2643z00_2240;

											BgL_arg2643z00_2240 =
												PROCEDURE_REF
												(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
												(int) (((long) 1)));
											{	/* Effect/cgraph.scm 128 */
												obj_t BgL_arrayz00_2242;

												int BgL_offsetz00_2243;

												BgL_arrayz00_2242 = BgL_arg2643z00_2240;
												BgL_offsetz00_2243 =
													(int) (BgL_objzd2classzd2numz00_2239);
												{	/* Effect/cgraph.scm 128 */
													long BgL_offsetz00_2244;

													BgL_offsetz00_2244 =
														((long) (BgL_offsetz00_2243) - OBJECT_TYPE);
													{	/* Effect/cgraph.scm 128 */
														long BgL_modz00_2245;

														{	/* Effect/cgraph.scm 128 */
															int BgL_arg2645z00_2246;

															BgL_arg2645z00_2246 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 128 */
																long BgL_auxz00_3867;

																BgL_auxz00_3867 = (long) (BgL_arg2645z00_2246);
																BgL_modz00_2245 =
																	(BgL_offsetz00_2244 / BgL_auxz00_3867);
														}}
														{	/* Effect/cgraph.scm 128 */
															long BgL_restz00_2247;

															{	/* Effect/cgraph.scm 128 */
																int BgL_arg2644z00_2248;

																BgL_arg2644z00_2248 = (int) (((long) 16));
																{	/* Effect/cgraph.scm 128 */
																	long BgL_auxz00_3871;

																	BgL_auxz00_3871 =
																		(long) (BgL_arg2644z00_2248);
																	BgL_restz00_2247 =
																		(BgL_offsetz00_2244 % BgL_auxz00_3871);
															}}
															{	/* Effect/cgraph.scm 128 */

																BgL_method3438z00_2237 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2242,
																		(int) (BgL_modz00_2245)),
																	(int) (BgL_restz00_2247));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method3438z00_2237) (BgL_method3438z00_2237,
									(obj_t) (BgL_arg3612z00_1398),
									(obj_t) (BgL_ownerz00_2236), BEOA);
					}}}
					{	/* Effect/cgraph.scm 129 */
						obj_t BgL_g3426z00_1399;

						BgL_g3426z00_1399 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1393))->BgL_clausesz00);
						{
							obj_t BgL_l3424z00_1401;

							BgL_l3424z00_1401 = BgL_g3426z00_1399;
						BgL_zc3anonymousza33613ze3z83_1402:
							if (PAIRP(BgL_l3424z00_1401))
								{	/* Effect/cgraph.scm 129 */
									{	/* Effect/cgraph.scm 130 */
										obj_t BgL_clausez00_1404;

										BgL_clausez00_1404 = CAR(BgL_l3424z00_1401);
										{	/* Effect/cgraph.scm 130 */
											obj_t BgL_arg3615z00_1405;

											BgL_arg3615z00_1405 = CDR(BgL_clausez00_1404);
											{	/* Effect/cgraph.scm 130 */
												BgL_nodez00_bglt BgL_nodez00_2266;

												BgL_variablez00_bglt BgL_ownerz00_2267;

												BgL_nodez00_2266 =
													(BgL_nodez00_bglt) (BgL_arg3615z00_1405);
												BgL_ownerz00_2267 =
													(BgL_variablez00_bglt) (BgL_ownerz00_1394);
												{	/* Effect/cgraph.scm 130 */
													obj_t BgL_method3438z00_2268;

													{	/* Effect/cgraph.scm 130 */
														BgL_objectz00_bglt BgL_objz00_2269;

														BgL_objz00_2269 =
															(BgL_objectz00_bglt) (BgL_nodez00_2266);
														{	/* Effect/cgraph.scm 130 */
															long BgL_objzd2classzd2numz00_2270;

															BgL_objzd2classzd2numz00_2270 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2269);
															{	/* Effect/cgraph.scm 130 */
																obj_t BgL_arg2643z00_2271;

																BgL_arg2643z00_2271 =
																	PROCEDURE_REF
																	(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
																	(int) (((long) 1)));
																{	/* Effect/cgraph.scm 130 */
																	obj_t BgL_arrayz00_2273;

																	int BgL_offsetz00_2274;

																	BgL_arrayz00_2273 = BgL_arg2643z00_2271;
																	BgL_offsetz00_2274 =
																		(int) (BgL_objzd2classzd2numz00_2270);
																	{	/* Effect/cgraph.scm 130 */
																		long BgL_offsetz00_2275;

																		BgL_offsetz00_2275 =
																			(
																			(long) (BgL_offsetz00_2274) -
																			OBJECT_TYPE);
																		{	/* Effect/cgraph.scm 130 */
																			long BgL_modz00_2276;

																			{	/* Effect/cgraph.scm 130 */
																				int BgL_arg2645z00_2277;

																				BgL_arg2645z00_2277 =
																					(int) (((long) 16));
																				{	/* Effect/cgraph.scm 130 */
																					long BgL_auxz00_3897;

																					BgL_auxz00_3897 =
																						(long) (BgL_arg2645z00_2277);
																					BgL_modz00_2276 =
																						(BgL_offsetz00_2275 /
																						BgL_auxz00_3897);
																			}}
																			{	/* Effect/cgraph.scm 130 */
																				long BgL_restz00_2278;

																				{	/* Effect/cgraph.scm 130 */
																					int BgL_arg2644z00_2279;

																					BgL_arg2644z00_2279 =
																						(int) (((long) 16));
																					{	/* Effect/cgraph.scm 130 */
																						long BgL_auxz00_3901;

																						BgL_auxz00_3901 =
																							(long) (BgL_arg2644z00_2279);
																						BgL_restz00_2278 =
																							(BgL_offsetz00_2275 %
																							BgL_auxz00_3901);
																				}}
																				{	/* Effect/cgraph.scm 130 */

																					BgL_method3438z00_2268 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2273,
																							(int) (BgL_modz00_2276)),
																						(int) (BgL_restz00_2278));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method3438z00_2268)
														(BgL_method3438z00_2268, (obj_t) (BgL_nodez00_2266),
														(obj_t) (BgL_ownerz00_2267), BEOA);
									}}}}
									{
										obj_t BgL_l3424z00_3912;

										BgL_l3424z00_3912 = CDR(BgL_l3424z00_1401);
										BgL_l3424z00_1401 = BgL_l3424z00_3912;
										goto BgL_zc3anonymousza33613ze3z83_1402;
									}
								}
							else
								{	/* Effect/cgraph.scm 129 */
									BgL_auxz00_3856 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_3856);
				}
			}
		}
	}



/* call-graph!-fail3456 */
	obj_t BGl_callzd2graphz12zd2fail3456z12zzeffect_cgraphz00(obj_t
		BgL_envz00_2877, obj_t BgL_nodez00_2878, obj_t BgL_ownerz00_2879)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 116 */
			{
				BgL_failz00_bglt BgL_nodez00_1383;

				obj_t BgL_ownerz00_1384;

				BgL_nodez00_1383 = (BgL_failz00_bglt) (BgL_nodez00_2878);
				BgL_ownerz00_1384 = BgL_ownerz00_2879;
				BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(
					(BgL_variablez00_bglt) (BgL_ownerz00_1384));
				{	/* Effect/cgraph.scm 119 */
					BgL_nodez00_bglt BgL_arg3608z00_1388;

					BgL_arg3608z00_1388 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1383))->BgL_procz00);
					{	/* Effect/cgraph.scm 119 */
						BgL_variablez00_bglt BgL_ownerz00_2152;

						BgL_ownerz00_2152 = (BgL_variablez00_bglt) (BgL_ownerz00_1384);
						{	/* Effect/cgraph.scm 119 */
							obj_t BgL_method3438z00_2153;

							{	/* Effect/cgraph.scm 119 */
								BgL_objectz00_bglt BgL_objz00_2154;

								BgL_objz00_2154 = (BgL_objectz00_bglt) (BgL_arg3608z00_1388);
								{	/* Effect/cgraph.scm 119 */
									long BgL_objzd2classzd2numz00_2155;

									BgL_objzd2classzd2numz00_2155 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2154);
									{	/* Effect/cgraph.scm 119 */
										obj_t BgL_arg2643z00_2156;

										BgL_arg2643z00_2156 =
											PROCEDURE_REF
											(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
											(int) (((long) 1)));
										{	/* Effect/cgraph.scm 119 */
											obj_t BgL_arrayz00_2158;

											int BgL_offsetz00_2159;

											BgL_arrayz00_2158 = BgL_arg2643z00_2156;
											BgL_offsetz00_2159 =
												(int) (BgL_objzd2classzd2numz00_2155);
											{	/* Effect/cgraph.scm 119 */
												long BgL_offsetz00_2160;

												BgL_offsetz00_2160 =
													((long) (BgL_offsetz00_2159) - OBJECT_TYPE);
												{	/* Effect/cgraph.scm 119 */
													long BgL_modz00_2161;

													{	/* Effect/cgraph.scm 119 */
														int BgL_arg2645z00_2162;

														BgL_arg2645z00_2162 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 119 */
															long BgL_auxz00_3928;

															BgL_auxz00_3928 = (long) (BgL_arg2645z00_2162);
															BgL_modz00_2161 =
																(BgL_offsetz00_2160 / BgL_auxz00_3928);
													}}
													{	/* Effect/cgraph.scm 119 */
														long BgL_restz00_2163;

														{	/* Effect/cgraph.scm 119 */
															int BgL_arg2644z00_2164;

															BgL_arg2644z00_2164 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 119 */
																long BgL_auxz00_3932;

																BgL_auxz00_3932 = (long) (BgL_arg2644z00_2164);
																BgL_restz00_2163 =
																	(BgL_offsetz00_2160 % BgL_auxz00_3932);
														}}
														{	/* Effect/cgraph.scm 119 */

															BgL_method3438z00_2153 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2158,
																	(int) (BgL_modz00_2161)),
																(int) (BgL_restz00_2163));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3438z00_2153) (BgL_method3438z00_2153,
								(obj_t) (BgL_arg3608z00_1388),
								(obj_t) (BgL_ownerz00_2152), BEOA);
				}}}
				{	/* Effect/cgraph.scm 120 */
					BgL_nodez00_bglt BgL_arg3609z00_1389;

					BgL_arg3609z00_1389 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1383))->BgL_msgz00);
					{	/* Effect/cgraph.scm 120 */
						BgL_variablez00_bglt BgL_ownerz00_2180;

						BgL_ownerz00_2180 = (BgL_variablez00_bglt) (BgL_ownerz00_1384);
						{	/* Effect/cgraph.scm 120 */
							obj_t BgL_method3438z00_2181;

							{	/* Effect/cgraph.scm 120 */
								BgL_objectz00_bglt BgL_objz00_2182;

								BgL_objz00_2182 = (BgL_objectz00_bglt) (BgL_arg3609z00_1389);
								{	/* Effect/cgraph.scm 120 */
									long BgL_objzd2classzd2numz00_2183;

									BgL_objzd2classzd2numz00_2183 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2182);
									{	/* Effect/cgraph.scm 120 */
										obj_t BgL_arg2643z00_2184;

										BgL_arg2643z00_2184 =
											PROCEDURE_REF
											(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
											(int) (((long) 1)));
										{	/* Effect/cgraph.scm 120 */
											obj_t BgL_arrayz00_2186;

											int BgL_offsetz00_2187;

											BgL_arrayz00_2186 = BgL_arg2643z00_2184;
											BgL_offsetz00_2187 =
												(int) (BgL_objzd2classzd2numz00_2183);
											{	/* Effect/cgraph.scm 120 */
												long BgL_offsetz00_2188;

												BgL_offsetz00_2188 =
													((long) (BgL_offsetz00_2187) - OBJECT_TYPE);
												{	/* Effect/cgraph.scm 120 */
													long BgL_modz00_2189;

													{	/* Effect/cgraph.scm 120 */
														int BgL_arg2645z00_2190;

														BgL_arg2645z00_2190 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 120 */
															long BgL_auxz00_3953;

															BgL_auxz00_3953 = (long) (BgL_arg2645z00_2190);
															BgL_modz00_2189 =
																(BgL_offsetz00_2188 / BgL_auxz00_3953);
													}}
													{	/* Effect/cgraph.scm 120 */
														long BgL_restz00_2191;

														{	/* Effect/cgraph.scm 120 */
															int BgL_arg2644z00_2192;

															BgL_arg2644z00_2192 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 120 */
																long BgL_auxz00_3957;

																BgL_auxz00_3957 = (long) (BgL_arg2644z00_2192);
																BgL_restz00_2191 =
																	(BgL_offsetz00_2188 % BgL_auxz00_3957);
														}}
														{	/* Effect/cgraph.scm 120 */

															BgL_method3438z00_2181 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2186,
																	(int) (BgL_modz00_2189)),
																(int) (BgL_restz00_2191));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3438z00_2181) (BgL_method3438z00_2181,
								(obj_t) (BgL_arg3609z00_1389),
								(obj_t) (BgL_ownerz00_2180), BEOA);
				}}}
				{	/* Effect/cgraph.scm 121 */
					BgL_nodez00_bglt BgL_arg3610z00_1390;

					BgL_arg3610z00_1390 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1383))->BgL_objz00);
					{	/* Effect/cgraph.scm 121 */
						BgL_variablez00_bglt BgL_ownerz00_2208;

						BgL_ownerz00_2208 = (BgL_variablez00_bglt) (BgL_ownerz00_1384);
						{	/* Effect/cgraph.scm 121 */
							obj_t BgL_method3438z00_2209;

							{	/* Effect/cgraph.scm 121 */
								BgL_objectz00_bglt BgL_objz00_2210;

								BgL_objz00_2210 = (BgL_objectz00_bglt) (BgL_arg3610z00_1390);
								{	/* Effect/cgraph.scm 121 */
									long BgL_objzd2classzd2numz00_2211;

									BgL_objzd2classzd2numz00_2211 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2210);
									{	/* Effect/cgraph.scm 121 */
										obj_t BgL_arg2643z00_2212;

										BgL_arg2643z00_2212 =
											PROCEDURE_REF
											(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
											(int) (((long) 1)));
										{	/* Effect/cgraph.scm 121 */
											obj_t BgL_arrayz00_2214;

											int BgL_offsetz00_2215;

											BgL_arrayz00_2214 = BgL_arg2643z00_2212;
											BgL_offsetz00_2215 =
												(int) (BgL_objzd2classzd2numz00_2211);
											{	/* Effect/cgraph.scm 121 */
												long BgL_offsetz00_2216;

												BgL_offsetz00_2216 =
													((long) (BgL_offsetz00_2215) - OBJECT_TYPE);
												{	/* Effect/cgraph.scm 121 */
													long BgL_modz00_2217;

													{	/* Effect/cgraph.scm 121 */
														int BgL_arg2645z00_2218;

														BgL_arg2645z00_2218 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 121 */
															long BgL_auxz00_3978;

															BgL_auxz00_3978 = (long) (BgL_arg2645z00_2218);
															BgL_modz00_2217 =
																(BgL_offsetz00_2216 / BgL_auxz00_3978);
													}}
													{	/* Effect/cgraph.scm 121 */
														long BgL_restz00_2219;

														{	/* Effect/cgraph.scm 121 */
															int BgL_arg2644z00_2220;

															BgL_arg2644z00_2220 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 121 */
																long BgL_auxz00_3982;

																BgL_auxz00_3982 = (long) (BgL_arg2644z00_2220);
																BgL_restz00_2219 =
																	(BgL_offsetz00_2216 % BgL_auxz00_3982);
														}}
														{	/* Effect/cgraph.scm 121 */

															BgL_method3438z00_2209 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2214,
																	(int) (BgL_modz00_2217)),
																(int) (BgL_restz00_2219));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3438z00_2209) (BgL_method3438z00_2209,
								(obj_t) (BgL_arg3610z00_1390),
								(obj_t) (BgL_ownerz00_2208), BEOA);
						}
					}
				}
			}
		}
	}



/* call-graph!-conditio3454 */
	obj_t BGl_callzd2graphz12zd2conditio3454z12zzeffect_cgraphz00(obj_t
		BgL_envz00_2880, obj_t BgL_nodez00_2881, obj_t BgL_ownerz00_2882)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 107 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1373;

				obj_t BgL_ownerz00_1374;

				BgL_nodez00_1373 = (BgL_conditionalz00_bglt) (BgL_nodez00_2881);
				BgL_ownerz00_1374 = BgL_ownerz00_2882;
				{	/* Effect/cgraph.scm 109 */
					BgL_nodez00_bglt BgL_arg3604z00_1378;

					BgL_arg3604z00_1378 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1373))->BgL_testz00);
					{	/* Effect/cgraph.scm 109 */
						BgL_variablez00_bglt BgL_ownerz00_2068;

						BgL_ownerz00_2068 = (BgL_variablez00_bglt) (BgL_ownerz00_1374);
						{	/* Effect/cgraph.scm 109 */
							obj_t BgL_method3438z00_2069;

							{	/* Effect/cgraph.scm 109 */
								BgL_objectz00_bglt BgL_objz00_2070;

								BgL_objz00_2070 = (BgL_objectz00_bglt) (BgL_arg3604z00_1378);
								{	/* Effect/cgraph.scm 109 */
									long BgL_objzd2classzd2numz00_2071;

									BgL_objzd2classzd2numz00_2071 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2070);
									{	/* Effect/cgraph.scm 109 */
										obj_t BgL_arg2643z00_2072;

										BgL_arg2643z00_2072 =
											PROCEDURE_REF
											(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
											(int) (((long) 1)));
										{	/* Effect/cgraph.scm 109 */
											obj_t BgL_arrayz00_2074;

											int BgL_offsetz00_2075;

											BgL_arrayz00_2074 = BgL_arg2643z00_2072;
											BgL_offsetz00_2075 =
												(int) (BgL_objzd2classzd2numz00_2071);
											{	/* Effect/cgraph.scm 109 */
												long BgL_offsetz00_2076;

												BgL_offsetz00_2076 =
													((long) (BgL_offsetz00_2075) - OBJECT_TYPE);
												{	/* Effect/cgraph.scm 109 */
													long BgL_modz00_2077;

													{	/* Effect/cgraph.scm 109 */
														int BgL_arg2645z00_2078;

														BgL_arg2645z00_2078 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 109 */
															long BgL_auxz00_4004;

															BgL_auxz00_4004 = (long) (BgL_arg2645z00_2078);
															BgL_modz00_2077 =
																(BgL_offsetz00_2076 / BgL_auxz00_4004);
													}}
													{	/* Effect/cgraph.scm 109 */
														long BgL_restz00_2079;

														{	/* Effect/cgraph.scm 109 */
															int BgL_arg2644z00_2080;

															BgL_arg2644z00_2080 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 109 */
																long BgL_auxz00_4008;

																BgL_auxz00_4008 = (long) (BgL_arg2644z00_2080);
																BgL_restz00_2079 =
																	(BgL_offsetz00_2076 % BgL_auxz00_4008);
														}}
														{	/* Effect/cgraph.scm 109 */

															BgL_method3438z00_2069 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2074,
																	(int) (BgL_modz00_2077)),
																(int) (BgL_restz00_2079));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3438z00_2069) (BgL_method3438z00_2069,
								(obj_t) (BgL_arg3604z00_1378),
								(obj_t) (BgL_ownerz00_2068), BEOA);
				}}}
				{	/* Effect/cgraph.scm 110 */
					BgL_nodez00_bglt BgL_arg3605z00_1379;

					BgL_arg3605z00_1379 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1373))->BgL_truez00);
					{	/* Effect/cgraph.scm 110 */
						BgL_variablez00_bglt BgL_ownerz00_2096;

						BgL_ownerz00_2096 = (BgL_variablez00_bglt) (BgL_ownerz00_1374);
						{	/* Effect/cgraph.scm 110 */
							obj_t BgL_method3438z00_2097;

							{	/* Effect/cgraph.scm 110 */
								BgL_objectz00_bglt BgL_objz00_2098;

								BgL_objz00_2098 = (BgL_objectz00_bglt) (BgL_arg3605z00_1379);
								{	/* Effect/cgraph.scm 110 */
									long BgL_objzd2classzd2numz00_2099;

									BgL_objzd2classzd2numz00_2099 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2098);
									{	/* Effect/cgraph.scm 110 */
										obj_t BgL_arg2643z00_2100;

										BgL_arg2643z00_2100 =
											PROCEDURE_REF
											(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
											(int) (((long) 1)));
										{	/* Effect/cgraph.scm 110 */
											obj_t BgL_arrayz00_2102;

											int BgL_offsetz00_2103;

											BgL_arrayz00_2102 = BgL_arg2643z00_2100;
											BgL_offsetz00_2103 =
												(int) (BgL_objzd2classzd2numz00_2099);
											{	/* Effect/cgraph.scm 110 */
												long BgL_offsetz00_2104;

												BgL_offsetz00_2104 =
													((long) (BgL_offsetz00_2103) - OBJECT_TYPE);
												{	/* Effect/cgraph.scm 110 */
													long BgL_modz00_2105;

													{	/* Effect/cgraph.scm 110 */
														int BgL_arg2645z00_2106;

														BgL_arg2645z00_2106 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 110 */
															long BgL_auxz00_4029;

															BgL_auxz00_4029 = (long) (BgL_arg2645z00_2106);
															BgL_modz00_2105 =
																(BgL_offsetz00_2104 / BgL_auxz00_4029);
													}}
													{	/* Effect/cgraph.scm 110 */
														long BgL_restz00_2107;

														{	/* Effect/cgraph.scm 110 */
															int BgL_arg2644z00_2108;

															BgL_arg2644z00_2108 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 110 */
																long BgL_auxz00_4033;

																BgL_auxz00_4033 = (long) (BgL_arg2644z00_2108);
																BgL_restz00_2107 =
																	(BgL_offsetz00_2104 % BgL_auxz00_4033);
														}}
														{	/* Effect/cgraph.scm 110 */

															BgL_method3438z00_2097 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2102,
																	(int) (BgL_modz00_2105)),
																(int) (BgL_restz00_2107));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3438z00_2097) (BgL_method3438z00_2097,
								(obj_t) (BgL_arg3605z00_1379),
								(obj_t) (BgL_ownerz00_2096), BEOA);
				}}}
				{	/* Effect/cgraph.scm 111 */
					BgL_nodez00_bglt BgL_arg3606z00_1380;

					BgL_arg3606z00_1380 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1373))->BgL_falsez00);
					{	/* Effect/cgraph.scm 111 */
						BgL_variablez00_bglt BgL_ownerz00_2124;

						BgL_ownerz00_2124 = (BgL_variablez00_bglt) (BgL_ownerz00_1374);
						{	/* Effect/cgraph.scm 111 */
							obj_t BgL_method3438z00_2125;

							{	/* Effect/cgraph.scm 111 */
								BgL_objectz00_bglt BgL_objz00_2126;

								BgL_objz00_2126 = (BgL_objectz00_bglt) (BgL_arg3606z00_1380);
								{	/* Effect/cgraph.scm 111 */
									long BgL_objzd2classzd2numz00_2127;

									BgL_objzd2classzd2numz00_2127 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2126);
									{	/* Effect/cgraph.scm 111 */
										obj_t BgL_arg2643z00_2128;

										BgL_arg2643z00_2128 =
											PROCEDURE_REF
											(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
											(int) (((long) 1)));
										{	/* Effect/cgraph.scm 111 */
											obj_t BgL_arrayz00_2130;

											int BgL_offsetz00_2131;

											BgL_arrayz00_2130 = BgL_arg2643z00_2128;
											BgL_offsetz00_2131 =
												(int) (BgL_objzd2classzd2numz00_2127);
											{	/* Effect/cgraph.scm 111 */
												long BgL_offsetz00_2132;

												BgL_offsetz00_2132 =
													((long) (BgL_offsetz00_2131) - OBJECT_TYPE);
												{	/* Effect/cgraph.scm 111 */
													long BgL_modz00_2133;

													{	/* Effect/cgraph.scm 111 */
														int BgL_arg2645z00_2134;

														BgL_arg2645z00_2134 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 111 */
															long BgL_auxz00_4054;

															BgL_auxz00_4054 = (long) (BgL_arg2645z00_2134);
															BgL_modz00_2133 =
																(BgL_offsetz00_2132 / BgL_auxz00_4054);
													}}
													{	/* Effect/cgraph.scm 111 */
														long BgL_restz00_2135;

														{	/* Effect/cgraph.scm 111 */
															int BgL_arg2644z00_2136;

															BgL_arg2644z00_2136 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 111 */
																long BgL_auxz00_4058;

																BgL_auxz00_4058 = (long) (BgL_arg2644z00_2136);
																BgL_restz00_2135 =
																	(BgL_offsetz00_2132 % BgL_auxz00_4058);
														}}
														{	/* Effect/cgraph.scm 111 */

															BgL_method3438z00_2125 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2130,
																	(int) (BgL_modz00_2133)),
																(int) (BgL_restz00_2135));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3438z00_2125) (BgL_method3438z00_2125,
								(obj_t) (BgL_arg3606z00_1380),
								(obj_t) (BgL_ownerz00_2124), BEOA);
						}
					}
				}
			}
		}
	}



/* call-graph!-setq3452 */
	obj_t BGl_callzd2graphz12zd2setq3452z12zzeffect_cgraphz00(obj_t
		BgL_envz00_2883, obj_t BgL_nodez00_2884, obj_t BgL_ownerz00_2885)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 97 */
			{
				BgL_setqz00_bglt BgL_nodez00_1360;

				obj_t BgL_ownerz00_1361;

				BgL_nodez00_1360 = (BgL_setqz00_bglt) (BgL_nodez00_2884);
				BgL_ownerz00_1361 = BgL_ownerz00_2885;
				{	/* Effect/cgraph.scm 99 */
					bool_t BgL_testz00_4070;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_ownerz00_1361,
							BGl_localz00zzast_varz00))
						{	/* Effect/cgraph.scm 99 */
							BgL_testz00_4070 = ((bool_t) 1);
						}
					else
						{	/* Effect/cgraph.scm 99 */
							BgL_variablez00_bglt BgL_arg3599z00_1367;

							{	/* Effect/cgraph.scm 99 */
								BgL_varz00_bglt BgL_obj2155z00_2008;

								BgL_obj2155z00_2008 =
									(((BgL_setqz00_bglt) CREF(BgL_nodez00_1360))->BgL_varz00);
								BgL_arg3599z00_1367 =
									(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2008))->
									BgL_variablez00);
							}
							{	/* Effect/cgraph.scm 99 */
								obj_t BgL_obj1751z00_2009;

								BgL_obj1751z00_2009 = (obj_t) (BgL_arg3599z00_1367);
								BgL_testz00_4070 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_2009,
									BGl_globalz00zzast_varz00);
							}
						}
					if (BgL_testz00_4070)
						{	/* Effect/cgraph.scm 99 */
							BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(
								(BgL_variablez00_bglt) (BgL_ownerz00_1361));
						}
					else
						{	/* Effect/cgraph.scm 99 */
							BFALSE;
						}
				}
				{	/* Effect/cgraph.scm 101 */
					BgL_varz00_bglt BgL_arg3601z00_1369;

					BgL_arg3601z00_1369 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1360))->BgL_varz00);
					{	/* Effect/cgraph.scm 101 */
						BgL_nodez00_bglt BgL_nodez00_2011;

						BgL_variablez00_bglt BgL_ownerz00_2012;

						BgL_nodez00_2011 = (BgL_nodez00_bglt) (BgL_arg3601z00_1369);
						BgL_ownerz00_2012 = (BgL_variablez00_bglt) (BgL_ownerz00_1361);
						{	/* Effect/cgraph.scm 101 */
							obj_t BgL_method3438z00_2013;

							{	/* Effect/cgraph.scm 101 */
								BgL_objectz00_bglt BgL_objz00_2014;

								BgL_objz00_2014 = (BgL_objectz00_bglt) (BgL_nodez00_2011);
								{	/* Effect/cgraph.scm 101 */
									long BgL_objzd2classzd2numz00_2015;

									BgL_objzd2classzd2numz00_2015 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2014);
									{	/* Effect/cgraph.scm 101 */
										obj_t BgL_arg2643z00_2016;

										BgL_arg2643z00_2016 =
											PROCEDURE_REF
											(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
											(int) (((long) 1)));
										{	/* Effect/cgraph.scm 101 */
											obj_t BgL_arrayz00_2018;

											int BgL_offsetz00_2019;

											BgL_arrayz00_2018 = BgL_arg2643z00_2016;
											BgL_offsetz00_2019 =
												(int) (BgL_objzd2classzd2numz00_2015);
											{	/* Effect/cgraph.scm 101 */
												long BgL_offsetz00_2020;

												BgL_offsetz00_2020 =
													((long) (BgL_offsetz00_2019) - OBJECT_TYPE);
												{	/* Effect/cgraph.scm 101 */
													long BgL_modz00_2021;

													{	/* Effect/cgraph.scm 101 */
														int BgL_arg2645z00_2022;

														BgL_arg2645z00_2022 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 101 */
															long BgL_auxz00_4090;

															BgL_auxz00_4090 = (long) (BgL_arg2645z00_2022);
															BgL_modz00_2021 =
																(BgL_offsetz00_2020 / BgL_auxz00_4090);
													}}
													{	/* Effect/cgraph.scm 101 */
														long BgL_restz00_2023;

														{	/* Effect/cgraph.scm 101 */
															int BgL_arg2644z00_2024;

															BgL_arg2644z00_2024 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 101 */
																long BgL_auxz00_4094;

																BgL_auxz00_4094 = (long) (BgL_arg2644z00_2024);
																BgL_restz00_2023 =
																	(BgL_offsetz00_2020 % BgL_auxz00_4094);
														}}
														{	/* Effect/cgraph.scm 101 */

															BgL_method3438z00_2013 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2018,
																	(int) (BgL_modz00_2021)),
																(int) (BgL_restz00_2023));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3438z00_2013) (BgL_method3438z00_2013,
								(obj_t) (BgL_nodez00_2011), (obj_t) (BgL_ownerz00_2012), BEOA);
				}}}
				{	/* Effect/cgraph.scm 102 */
					BgL_nodez00_bglt BgL_arg3602z00_1370;

					BgL_arg3602z00_1370 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1360))->BgL_valuez00);
					{	/* Effect/cgraph.scm 102 */
						BgL_variablez00_bglt BgL_ownerz00_2040;

						BgL_ownerz00_2040 = (BgL_variablez00_bglt) (BgL_ownerz00_1361);
						{	/* Effect/cgraph.scm 102 */
							obj_t BgL_method3438z00_2041;

							{	/* Effect/cgraph.scm 102 */
								BgL_objectz00_bglt BgL_objz00_2042;

								BgL_objz00_2042 = (BgL_objectz00_bglt) (BgL_arg3602z00_1370);
								{	/* Effect/cgraph.scm 102 */
									long BgL_objzd2classzd2numz00_2043;

									BgL_objzd2classzd2numz00_2043 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2042);
									{	/* Effect/cgraph.scm 102 */
										obj_t BgL_arg2643z00_2044;

										BgL_arg2643z00_2044 =
											PROCEDURE_REF
											(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
											(int) (((long) 1)));
										{	/* Effect/cgraph.scm 102 */
											obj_t BgL_arrayz00_2046;

											int BgL_offsetz00_2047;

											BgL_arrayz00_2046 = BgL_arg2643z00_2044;
											BgL_offsetz00_2047 =
												(int) (BgL_objzd2classzd2numz00_2043);
											{	/* Effect/cgraph.scm 102 */
												long BgL_offsetz00_2048;

												BgL_offsetz00_2048 =
													((long) (BgL_offsetz00_2047) - OBJECT_TYPE);
												{	/* Effect/cgraph.scm 102 */
													long BgL_modz00_2049;

													{	/* Effect/cgraph.scm 102 */
														int BgL_arg2645z00_2050;

														BgL_arg2645z00_2050 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 102 */
															long BgL_auxz00_4115;

															BgL_auxz00_4115 = (long) (BgL_arg2645z00_2050);
															BgL_modz00_2049 =
																(BgL_offsetz00_2048 / BgL_auxz00_4115);
													}}
													{	/* Effect/cgraph.scm 102 */
														long BgL_restz00_2051;

														{	/* Effect/cgraph.scm 102 */
															int BgL_arg2644z00_2052;

															BgL_arg2644z00_2052 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 102 */
																long BgL_auxz00_4119;

																BgL_auxz00_4119 = (long) (BgL_arg2644z00_2052);
																BgL_restz00_2051 =
																	(BgL_offsetz00_2048 % BgL_auxz00_4119);
														}}
														{	/* Effect/cgraph.scm 102 */

															BgL_method3438z00_2041 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2046,
																	(int) (BgL_modz00_2049)),
																(int) (BgL_restz00_2051));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3438z00_2041) (BgL_method3438z00_2041,
								(obj_t) (BgL_arg3602z00_1370),
								(obj_t) (BgL_ownerz00_2040), BEOA);
						}
					}
				}
			}
		}
	}



/* call-graph!-cast3450 */
	obj_t BGl_callzd2graphz12zd2cast3450z12zzeffect_cgraphz00(obj_t
		BgL_envz00_2886, obj_t BgL_nodez00_2887, obj_t BgL_ownerz00_2888)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 86 */
			{
				BgL_castz00_bglt BgL_nodez00_1352;

				obj_t BgL_ownerz00_1353;

				BgL_nodez00_1352 = (BgL_castz00_bglt) (BgL_nodez00_2887);
				BgL_ownerz00_1353 = BgL_ownerz00_2888;
				{	/* Effect/cgraph.scm 87 */
					BgL_nodez00_bglt BgL_arg3595z00_1977;

					BgL_arg3595z00_1977 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_1352))->BgL_argz00);
					{	/* Effect/cgraph.scm 87 */
						BgL_variablez00_bglt BgL_ownerz00_1980;

						BgL_ownerz00_1980 = (BgL_variablez00_bglt) (BgL_ownerz00_1353);
						{	/* Effect/cgraph.scm 87 */
							obj_t BgL_method3438z00_1981;

							{	/* Effect/cgraph.scm 87 */
								BgL_objectz00_bglt BgL_objz00_1982;

								BgL_objz00_1982 = (BgL_objectz00_bglt) (BgL_arg3595z00_1977);
								{	/* Effect/cgraph.scm 87 */
									long BgL_objzd2classzd2numz00_1983;

									BgL_objzd2classzd2numz00_1983 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1982);
									{	/* Effect/cgraph.scm 87 */
										obj_t BgL_arg2643z00_1984;

										BgL_arg2643z00_1984 =
											PROCEDURE_REF
											(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
											(int) (((long) 1)));
										{	/* Effect/cgraph.scm 87 */
											obj_t BgL_arrayz00_1986;

											int BgL_offsetz00_1987;

											BgL_arrayz00_1986 = BgL_arg2643z00_1984;
											BgL_offsetz00_1987 =
												(int) (BgL_objzd2classzd2numz00_1983);
											{	/* Effect/cgraph.scm 87 */
												long BgL_offsetz00_1988;

												BgL_offsetz00_1988 =
													((long) (BgL_offsetz00_1987) - OBJECT_TYPE);
												{	/* Effect/cgraph.scm 87 */
													long BgL_modz00_1989;

													{	/* Effect/cgraph.scm 87 */
														int BgL_arg2645z00_1990;

														BgL_arg2645z00_1990 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 87 */
															long BgL_auxz00_4141;

															BgL_auxz00_4141 = (long) (BgL_arg2645z00_1990);
															BgL_modz00_1989 =
																(BgL_offsetz00_1988 / BgL_auxz00_4141);
													}}
													{	/* Effect/cgraph.scm 87 */
														long BgL_restz00_1991;

														{	/* Effect/cgraph.scm 87 */
															int BgL_arg2644z00_1992;

															BgL_arg2644z00_1992 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 87 */
																long BgL_auxz00_4145;

																BgL_auxz00_4145 = (long) (BgL_arg2644z00_1992);
																BgL_restz00_1991 =
																	(BgL_offsetz00_1988 % BgL_auxz00_4145);
														}}
														{	/* Effect/cgraph.scm 87 */

															BgL_method3438z00_1981 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1986,
																	(int) (BgL_modz00_1989)),
																(int) (BgL_restz00_1991));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3438z00_1981) (BgL_method3438z00_1981,
								(obj_t) (BgL_arg3595z00_1977),
								(obj_t) (BgL_ownerz00_1980), BEOA);
						}
					}
				}
			}
		}
	}



/* call-graph!-extern3448 */
	obj_t BGl_callzd2graphz12zd2extern3448z12zzeffect_cgraphz00(obj_t
		BgL_envz00_2889, obj_t BgL_nodez00_2890, obj_t BgL_ownerz00_2891)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 77 */
			{
				BgL_externz00_bglt BgL_nodez00_1343;

				obj_t BgL_ownerz00_1344;

				{	/* Effect/cgraph.scm 78 */
					bool_t BgL_auxz00_4157;

					BgL_nodez00_1343 = (BgL_externz00_bglt) (BgL_nodez00_2890);
					BgL_ownerz00_1344 = BgL_ownerz00_2891;
					{	/* Effect/cgraph.scm 79 */
						bool_t BgL_testz00_4158;

						{	/* Effect/cgraph.scm 79 */
							BgL_nodezf2effectzf2_bglt BgL_obj2109z00_1974;

							BgL_obj2109z00_1974 =
								(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1343);
							BgL_testz00_4158 =
								CBOOL(
								(((BgL_nodezf2effectzf2_bglt) CREF(BgL_obj2109z00_1974))->
									BgL_sidezd2effectzf3z21));
						}
						if (BgL_testz00_4158)
							{	/* Effect/cgraph.scm 79 */
								BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(
									(BgL_variablez00_bglt) (BgL_ownerz00_1344));
							}
						else
							{	/* Effect/cgraph.scm 79 */
								BFALSE;
							}
					}
					{	/* Effect/cgraph.scm 81 */
						obj_t BgL_arg3593z00_1349;

						BgL_arg3593z00_1349 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1343))->BgL_exprza2za2);
						BgL_auxz00_4157 =
							BGl_callzd2graphza2z12z62zzeffect_cgraphz00(BgL_arg3593z00_1349,
							BgL_ownerz00_1344);
					}
					return BBOOL(BgL_auxz00_4157);
				}
			}
		}
	}



/* call-graph!-funcall3446 */
	obj_t BGl_callzd2graphz12zd2funcall3446z12zzeffect_cgraphz00(obj_t
		BgL_envz00_2892, obj_t BgL_nodez00_2893, obj_t BgL_ownerz00_2894)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 68 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1334;

				obj_t BgL_ownerz00_1335;

				{	/* Effect/cgraph.scm 69 */
					bool_t BgL_auxz00_4168;

					BgL_nodez00_1334 = (BgL_funcallz00_bglt) (BgL_nodez00_2893);
					BgL_ownerz00_1335 = BgL_ownerz00_2894;
					BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(
						(BgL_variablez00_bglt) (BgL_ownerz00_1335));
					{	/* Effect/cgraph.scm 71 */
						BgL_nodez00_bglt BgL_arg3589z00_1339;

						BgL_arg3589z00_1339 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1334))->BgL_funz00);
						{	/* Effect/cgraph.scm 71 */
							BgL_variablez00_bglt BgL_ownerz00_1947;

							BgL_ownerz00_1947 = (BgL_variablez00_bglt) (BgL_ownerz00_1335);
							{	/* Effect/cgraph.scm 71 */
								obj_t BgL_method3438z00_1948;

								{	/* Effect/cgraph.scm 71 */
									BgL_objectz00_bglt BgL_objz00_1949;

									BgL_objz00_1949 = (BgL_objectz00_bglt) (BgL_arg3589z00_1339);
									{	/* Effect/cgraph.scm 71 */
										long BgL_objzd2classzd2numz00_1950;

										BgL_objzd2classzd2numz00_1950 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1949);
										{	/* Effect/cgraph.scm 71 */
											obj_t BgL_arg2643z00_1951;

											BgL_arg2643z00_1951 =
												PROCEDURE_REF
												(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
												(int) (((long) 1)));
											{	/* Effect/cgraph.scm 71 */
												obj_t BgL_arrayz00_1953;

												int BgL_offsetz00_1954;

												BgL_arrayz00_1953 = BgL_arg2643z00_1951;
												BgL_offsetz00_1954 =
													(int) (BgL_objzd2classzd2numz00_1950);
												{	/* Effect/cgraph.scm 71 */
													long BgL_offsetz00_1955;

													BgL_offsetz00_1955 =
														((long) (BgL_offsetz00_1954) - OBJECT_TYPE);
													{	/* Effect/cgraph.scm 71 */
														long BgL_modz00_1956;

														{	/* Effect/cgraph.scm 71 */
															int BgL_arg2645z00_1957;

															BgL_arg2645z00_1957 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 71 */
																long BgL_auxz00_4181;

																BgL_auxz00_4181 = (long) (BgL_arg2645z00_1957);
																BgL_modz00_1956 =
																	(BgL_offsetz00_1955 / BgL_auxz00_4181);
														}}
														{	/* Effect/cgraph.scm 71 */
															long BgL_restz00_1958;

															{	/* Effect/cgraph.scm 71 */
																int BgL_arg2644z00_1959;

																BgL_arg2644z00_1959 = (int) (((long) 16));
																{	/* Effect/cgraph.scm 71 */
																	long BgL_auxz00_4185;

																	BgL_auxz00_4185 =
																		(long) (BgL_arg2644z00_1959);
																	BgL_restz00_1958 =
																		(BgL_offsetz00_1955 % BgL_auxz00_4185);
															}}
															{	/* Effect/cgraph.scm 71 */

																BgL_method3438z00_1948 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1953,
																		(int) (BgL_modz00_1956)),
																	(int) (BgL_restz00_1958));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method3438z00_1948) (BgL_method3438z00_1948,
									(obj_t) (BgL_arg3589z00_1339),
									(obj_t) (BgL_ownerz00_1947), BEOA);
					}}}
					{	/* Effect/cgraph.scm 72 */
						obj_t BgL_arg3590z00_1340;

						BgL_arg3590z00_1340 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1334))->BgL_argsz00);
						BgL_auxz00_4168 =
							BGl_callzd2graphza2z12z62zzeffect_cgraphz00(BgL_arg3590z00_1340,
							BgL_ownerz00_1335);
					}
					return BBOOL(BgL_auxz00_4168);
				}
			}
		}
	}



/* call-graph!-app-ly3444 */
	obj_t BGl_callzd2graphz12zd2appzd2ly3444zc0zzeffect_cgraphz00(obj_t
		BgL_envz00_2895, obj_t BgL_nodez00_2896, obj_t BgL_ownerz00_2897)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 59 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1325;

				obj_t BgL_ownerz00_1326;

				BgL_nodez00_1325 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2896);
				BgL_ownerz00_1326 = BgL_ownerz00_2897;
				BGl_markzd2sidezd2effectz12z12zzeffect_cgraphz00(
					(BgL_variablez00_bglt) (BgL_ownerz00_1326));
				{	/* Effect/cgraph.scm 62 */
					BgL_nodez00_bglt BgL_arg3586z00_1330;

					BgL_arg3586z00_1330 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1325))->BgL_funz00);
					{	/* Effect/cgraph.scm 62 */
						BgL_variablez00_bglt BgL_ownerz00_1891;

						BgL_ownerz00_1891 = (BgL_variablez00_bglt) (BgL_ownerz00_1326);
						{	/* Effect/cgraph.scm 62 */
							obj_t BgL_method3438z00_1892;

							{	/* Effect/cgraph.scm 62 */
								BgL_objectz00_bglt BgL_objz00_1893;

								BgL_objz00_1893 = (BgL_objectz00_bglt) (BgL_arg3586z00_1330);
								{	/* Effect/cgraph.scm 62 */
									long BgL_objzd2classzd2numz00_1894;

									BgL_objzd2classzd2numz00_1894 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1893);
									{	/* Effect/cgraph.scm 62 */
										obj_t BgL_arg2643z00_1895;

										BgL_arg2643z00_1895 =
											PROCEDURE_REF
											(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
											(int) (((long) 1)));
										{	/* Effect/cgraph.scm 62 */
											obj_t BgL_arrayz00_1897;

											int BgL_offsetz00_1898;

											BgL_arrayz00_1897 = BgL_arg2643z00_1895;
											BgL_offsetz00_1898 =
												(int) (BgL_objzd2classzd2numz00_1894);
											{	/* Effect/cgraph.scm 62 */
												long BgL_offsetz00_1899;

												BgL_offsetz00_1899 =
													((long) (BgL_offsetz00_1898) - OBJECT_TYPE);
												{	/* Effect/cgraph.scm 62 */
													long BgL_modz00_1900;

													{	/* Effect/cgraph.scm 62 */
														int BgL_arg2645z00_1901;

														BgL_arg2645z00_1901 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 62 */
															long BgL_auxz00_4212;

															BgL_auxz00_4212 = (long) (BgL_arg2645z00_1901);
															BgL_modz00_1900 =
																(BgL_offsetz00_1899 / BgL_auxz00_4212);
													}}
													{	/* Effect/cgraph.scm 62 */
														long BgL_restz00_1902;

														{	/* Effect/cgraph.scm 62 */
															int BgL_arg2644z00_1903;

															BgL_arg2644z00_1903 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 62 */
																long BgL_auxz00_4216;

																BgL_auxz00_4216 = (long) (BgL_arg2644z00_1903);
																BgL_restz00_1902 =
																	(BgL_offsetz00_1899 % BgL_auxz00_4216);
														}}
														{	/* Effect/cgraph.scm 62 */

															BgL_method3438z00_1892 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1897,
																	(int) (BgL_modz00_1900)),
																(int) (BgL_restz00_1902));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3438z00_1892) (BgL_method3438z00_1892,
								(obj_t) (BgL_arg3586z00_1330),
								(obj_t) (BgL_ownerz00_1891), BEOA);
				}}}
				{	/* Effect/cgraph.scm 63 */
					BgL_nodez00_bglt BgL_arg3587z00_1331;

					BgL_arg3587z00_1331 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1325))->BgL_argz00);
					{	/* Effect/cgraph.scm 63 */
						BgL_variablez00_bglt BgL_ownerz00_1919;

						BgL_ownerz00_1919 = (BgL_variablez00_bglt) (BgL_ownerz00_1326);
						{	/* Effect/cgraph.scm 63 */
							obj_t BgL_method3438z00_1920;

							{	/* Effect/cgraph.scm 63 */
								BgL_objectz00_bglt BgL_objz00_1921;

								BgL_objz00_1921 = (BgL_objectz00_bglt) (BgL_arg3587z00_1331);
								{	/* Effect/cgraph.scm 63 */
									long BgL_objzd2classzd2numz00_1922;

									BgL_objzd2classzd2numz00_1922 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1921);
									{	/* Effect/cgraph.scm 63 */
										obj_t BgL_arg2643z00_1923;

										BgL_arg2643z00_1923 =
											PROCEDURE_REF
											(BGl_callzd2graphz12zd2envz12zzeffect_cgraphz00,
											(int) (((long) 1)));
										{	/* Effect/cgraph.scm 63 */
											obj_t BgL_arrayz00_1925;

											int BgL_offsetz00_1926;

											BgL_arrayz00_1925 = BgL_arg2643z00_1923;
											BgL_offsetz00_1926 =
												(int) (BgL_objzd2classzd2numz00_1922);
											{	/* Effect/cgraph.scm 63 */
												long BgL_offsetz00_1927;

												BgL_offsetz00_1927 =
													((long) (BgL_offsetz00_1926) - OBJECT_TYPE);
												{	/* Effect/cgraph.scm 63 */
													long BgL_modz00_1928;

													{	/* Effect/cgraph.scm 63 */
														int BgL_arg2645z00_1929;

														BgL_arg2645z00_1929 = (int) (((long) 16));
														{	/* Effect/cgraph.scm 63 */
															long BgL_auxz00_4237;

															BgL_auxz00_4237 = (long) (BgL_arg2645z00_1929);
															BgL_modz00_1928 =
																(BgL_offsetz00_1927 / BgL_auxz00_4237);
													}}
													{	/* Effect/cgraph.scm 63 */
														long BgL_restz00_1930;

														{	/* Effect/cgraph.scm 63 */
															int BgL_arg2644z00_1931;

															BgL_arg2644z00_1931 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 63 */
																long BgL_auxz00_4241;

																BgL_auxz00_4241 = (long) (BgL_arg2644z00_1931);
																BgL_restz00_1930 =
																	(BgL_offsetz00_1927 % BgL_auxz00_4241);
														}}
														{	/* Effect/cgraph.scm 63 */

															BgL_method3438z00_1920 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1925,
																	(int) (BgL_modz00_1928)),
																(int) (BgL_restz00_1930));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3438z00_1920) (BgL_method3438z00_1920,
								(obj_t) (BgL_arg3587z00_1331),
								(obj_t) (BgL_ownerz00_1919), BEOA);
						}
					}
				}
			}
		}
	}



/* call-graph!-app3442 */
	obj_t BGl_callzd2graphz12zd2app3442z12zzeffect_cgraphz00(obj_t
		BgL_envz00_2898, obj_t BgL_nodez00_2899, obj_t BgL_ownerz00_2900)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 49 */
			{
				BgL_appz00_bglt BgL_nodez00_1315;

				obj_t BgL_ownerz00_1316;

				{	/* Effect/cgraph.scm 50 */
					bool_t BgL_auxz00_4253;

					BgL_nodez00_1315 = (BgL_appz00_bglt) (BgL_nodez00_2899);
					BgL_ownerz00_1316 = BgL_ownerz00_2900;
					{	/* Effect/cgraph.scm 53 */
						BgL_variablez00_bglt BgL_arg3582z00_1320;

						{	/* Effect/cgraph.scm 53 */
							BgL_varz00_bglt BgL_obj2155z00_1860;

							BgL_obj2155z00_1860 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1315))->BgL_funz00);
							BgL_arg3582z00_1320 =
								(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1860))->
								BgL_variablez00);
						}
						{	/* Effect/cgraph.scm 53 */
							BgL_variablez00_bglt BgL_ownerz00_1862;

							BgL_ownerz00_1862 = (BgL_variablez00_bglt) (BgL_ownerz00_1316);
							{	/* Effect/cgraph.scm 53 */
								obj_t BgL_method3474z00_1863;

								{	/* Effect/cgraph.scm 53 */
									BgL_objectz00_bglt BgL_objz00_1864;

									BgL_objz00_1864 = (BgL_objectz00_bglt) (BgL_arg3582z00_1320);
									{	/* Effect/cgraph.scm 53 */
										long BgL_objzd2classzd2numz00_1865;

										BgL_objzd2classzd2numz00_1865 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1864);
										{	/* Effect/cgraph.scm 53 */
											obj_t BgL_arg2643z00_1866;

											BgL_arg2643z00_1866 =
												PROCEDURE_REF
												(BGl_savezd2callz12zd2envz12zzeffect_cgraphz00,
												(int) (((long) 1)));
											{	/* Effect/cgraph.scm 53 */
												obj_t BgL_arrayz00_1868;

												int BgL_offsetz00_1869;

												BgL_arrayz00_1868 = BgL_arg2643z00_1866;
												BgL_offsetz00_1869 =
													(int) (BgL_objzd2classzd2numz00_1865);
												{	/* Effect/cgraph.scm 53 */
													long BgL_offsetz00_1870;

													BgL_offsetz00_1870 =
														((long) (BgL_offsetz00_1869) - OBJECT_TYPE);
													{	/* Effect/cgraph.scm 53 */
														long BgL_modz00_1871;

														{	/* Effect/cgraph.scm 53 */
															int BgL_arg2645z00_1872;

															BgL_arg2645z00_1872 = (int) (((long) 16));
															{	/* Effect/cgraph.scm 53 */
																long BgL_auxz00_4265;

																BgL_auxz00_4265 = (long) (BgL_arg2645z00_1872);
																BgL_modz00_1871 =
																	(BgL_offsetz00_1870 / BgL_auxz00_4265);
														}}
														{	/* Effect/cgraph.scm 53 */
															long BgL_restz00_1873;

															{	/* Effect/cgraph.scm 53 */
																int BgL_arg2644z00_1874;

																BgL_arg2644z00_1874 = (int) (((long) 16));
																{	/* Effect/cgraph.scm 53 */
																	long BgL_auxz00_4269;

																	BgL_auxz00_4269 =
																		(long) (BgL_arg2644z00_1874);
																	BgL_restz00_1873 =
																		(BgL_offsetz00_1870 % BgL_auxz00_4269);
															}}
															{	/* Effect/cgraph.scm 53 */

																BgL_method3474z00_1863 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1868,
																		(int) (BgL_modz00_1871)),
																	(int) (BgL_restz00_1873));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method3474z00_1863) (BgL_method3474z00_1863,
									(obj_t) (BgL_arg3582z00_1320),
									(obj_t) (BgL_ownerz00_1862), BEOA);
					}}}
					{	/* Effect/cgraph.scm 54 */
						obj_t BgL_arg3584z00_1322;

						BgL_arg3584z00_1322 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1315))->BgL_argsz00);
						BgL_auxz00_4253 =
							BGl_callzd2graphza2z12z62zzeffect_cgraphz00(BgL_arg3584z00_1322,
							BgL_ownerz00_1316);
					}
					return BBOOL(BgL_auxz00_4253);
				}
			}
		}
	}



/* call-graph!-sequence3440 */
	obj_t BGl_callzd2graphz12zd2sequence3440z12zzeffect_cgraphz00(obj_t
		BgL_envz00_2901, obj_t BgL_nodez00_2902, obj_t BgL_ownerz00_2903)
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 43 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1308;

				obj_t BgL_ownerz00_1309;

				{	/* Effect/cgraph.scm 44 */
					bool_t BgL_auxz00_4284;

					BgL_nodez00_1308 = (BgL_sequencez00_bglt) (BgL_nodez00_2902);
					BgL_ownerz00_1309 = BgL_ownerz00_2903;
					{	/* Effect/cgraph.scm 44 */
						obj_t BgL_arg3580z00_1857;

						BgL_arg3580z00_1857 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1308))->BgL_nodesz00);
						BgL_auxz00_4284 =
							BGl_callzd2graphza2z12z62zzeffect_cgraphz00(BgL_arg3580z00_1857,
							BgL_ownerz00_1309);
					}
					return BBOOL(BgL_auxz00_4284);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzeffect_cgraphz00()
	{
		AN_OBJECT;
		{	/* Effect/cgraph.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3805z00zzeffect_cgraphz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3805z00zzeffect_cgraphz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3805z00zzeffect_cgraphz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3805z00zzeffect_cgraphz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3805z00zzeffect_cgraphz00));
			return
				BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3805z00zzeffect_cgraphz00));
		}
	}

#ifdef __cplusplus
}
#endif
