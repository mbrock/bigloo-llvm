/*===========================================================================*/
/*   (Inline/size.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Inline/size.scm)*/
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

	typedef struct BgL_boxzd2setz12zc0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                      *BgL_boxzd2setz12zc0_bglt;

	typedef struct BgL_siza7edzd2sequencez75_bgl
	{
		long BgL_siza7eza7;
	}                            *BgL_siza7edzd2sequencez75_bglt;

	typedef struct BgL_siza7edzd2selectz75_bgl
	{
		long BgL_siza7eza7;
	}                          *BgL_siza7edzd2selectz75_bglt;

	typedef struct BgL_siza7edzd2letzd2funza7_bgl
	{
		long BgL_siza7eza7;
	}                             *BgL_siza7edzd2letzd2funza7_bglt;

	typedef struct BgL_siza7edzd2letzd2varza7_bgl
	{
		long BgL_siza7eza7;
	}                             *BgL_siza7edzd2letzd2varza7_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec3487z83zzinline_siza7eza7(obj_t,
		obj_t, obj_t);
	static BgL_siza7edzd2sequencez75_bglt
		BGl_siza7edzd2sequencezd2nilza7zzinline_siza7eza7();
	static obj_t BGl_structzb2objectzd2ze3objec3491z83zzinline_siza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec3495z83zzinline_siza7eza7(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec3499z83zzinline_siza7eza7(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t
		BGl__z52allocatezd2siza7edzd2letzd2funz27zzinline_siza7eza7(obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl_nodezd2siza7ezd2atom3435za7zzinline_siza7eza7(obj_t, obj_t);
	static BgL_siza7edzd2letzd2funza7_bglt
		BGl_siza7edzd2letzd2funzd2nilz75zzinline_siza7eza7();
	static obj_t BGl_nodezd2siza7ezd2select3461za7zzinline_siza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	BGL_EXPORTED_DECL long
		BGl_nodezd2siza7ez75zzinline_siza7eza7(BgL_nodez00_bglt);
	static obj_t
		BGl__z52allocatezd2siza7edzd2sequencezf5zzinline_siza7eza7(obj_t);
	static BgL_siza7edzd2letzd2varza7_bglt
		BGl_siza7edzd2letzd2varzd2nilz75zzinline_siza7eza7();
	extern BgL_nodez00_bglt BGl_nodezd2nilzd2zzast_nodez00();
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z52thezd2siza7edzd2letzd2funzd2nilzf5zzinline_siza7eza7 =
		BUNSPEC;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzinline_siza7eza7();
	static obj_t BGl_nodezd2siza7ezd2boxzd2ref3481z75zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl__siza7edzd2letzd2funzd2nilz75zzinline_siza7eza7(obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_z52thezd2siza7edzd2letzd2varzd2nilzf5zzinline_siza7eza7 =
		BUNSPEC;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_siza7edzd2selectz75zzinline_siza7eza7 = BUNSPEC;
	static obj_t BGl__siza7edzd2letzd2varzd2nilz75zzinline_siza7eza7(obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzinline_siza7eza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzinline_siza7eza7();
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_siza7edzd2letzd2funza7zzinline_siza7eza7 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_nodezd2siza7ezd2cast3451za7zzinline_siza7eza7(obj_t, obj_t);
	static obj_t BGl_nodezd2siza7ezd2conditiona3457za7zzinline_siza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl__nodezd2siza7ez75zzinline_siza7eza7(obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_nodezd2siza7ezd2app3445za7zzinline_siza7eza7(obj_t, obj_t);
	static BgL_siza7edzd2selectz75_bglt
		BGl_siza7edzd2selectzd2nilza7zzinline_siza7eza7();
	static obj_t BGl_nodezd2siza7ezd2setzd2exzd2it3474za7zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl_nodezd2siza7ezd2letzd2fun3465z75zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl_nodezd2siza7ezd2setq3455za7zzinline_siza7eza7(obj_t, obj_t);
	static obj_t BGl_nodezd2siza7ezd2letzd2var3469z75zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t
		BGl_nodezd2siza7ezd2siza7edzd2sele3463zd2zzinline_siza7eza7(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzinline_siza7eza7();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_nodezd2siza7ezd2sequence3441za7zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl__siza7edzd2sequencezf3z86zzinline_siza7eza7(obj_t, obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzinline_siza7eza7 = BUNSPEC;
	static obj_t BGl_nodezd2siza7ezd2boxzd2setz123483z67zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzinline_siza7eza7();
	static obj_t
		BGl__z52allocatezd2siza7edzd2letzd2varz27zzinline_siza7eza7(obj_t);
	static obj_t BGl__nodezd2siza7ezd2default3432za7zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl__siza7edzd2selectzd2nilza7zzinline_siza7eza7(obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_nodezd2siza7ezd2var3437za7zzinline_siza7eza7(obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_z52thezd2siza7edzd2sequencezd2nilz27zzinline_siza7eza7 =
		BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zzinline_siza7eza7();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl_nodezd2siza7ezd2fail3459za7zzinline_siza7eza7(obj_t, obj_t);
	static obj_t
		BGl_nodezd2siza7ezd2siza7edzd2letzd23467z00zzinline_siza7eza7(obj_t, obj_t);
	static obj_t
		BGl_nodezd2siza7ezd2siza7edzd2letzd23471z00zzinline_siza7eza7(obj_t, obj_t);
	static obj_t BGl_nodezd2siza7ezd2kwote3439za7zzinline_siza7eza7(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2siza7ed3485z44zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t
		BGl_nodezd2siza7ezd2jumpzd2exzd2it3477za7zzinline_siza7eza7(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2siza7ed3489z44zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2siza7ed3493z44zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2siza7ed3497z44zzinline_siza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z52thezd2siza7edzd2selectzd2nilz27zzinline_siza7eza7 =
		BUNSPEC;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl__siza7edzd2letzd2varzf3z54zzinline_siza7eza7(obj_t, obj_t);
	static obj_t BGl_nodezd2siza7ezd2extern3453za7zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl_nodezd2siza7ezd2appzd2ly3447z75zzinline_siza7eza7(obj_t,
		obj_t);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	static obj_t BGl__siza7edzd2selectzf3z86zzinline_siza7eza7(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_siza7edzd2letzd2varza7zzinline_siza7eza7 = BUNSPEC;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2siza7ezd2makezd2box3479z75zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2siza7edzd2selectzf5zzinline_siza7eza7(obj_t);
	static long
		BGl_nodezd2siza7ezd2default3432za7zzinline_siza7eza7(BgL_nodez00_bglt);
	static obj_t BGl__siza7edzd2letzd2funzf3z54zzinline_siza7eza7(obj_t, obj_t);
	static obj_t
		BGl_nodezd2siza7ezd2siza7edzd2sequ3443zd2zzinline_siza7eza7(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzinline_siza7eza7();
	static obj_t BGl_nodezd2siza7ezd2funcall3449za7zzinline_siza7eza7(obj_t,
		obj_t);
	static obj_t BGl__siza7edzd2sequencezd2nilza7zzinline_siza7eza7(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzinline_siza7eza7();
	static obj_t BGl_siza7edzd2sequencez75zzinline_siza7eza7 = BUNSPEC;
	static obj_t __cnst[5];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3916z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23939za7,
		BGl_nodezd2siza7ezd2setzd2exzd2it3474za7zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3917z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23940za7,
		BGl_nodezd2siza7ezd2jumpzd2exzd2it3477za7zzinline_siza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3918z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23941za7,
		BGl_nodezd2siza7ezd2makezd2box3479z75zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3920z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23942za7,
		BGl_nodezd2siza7ezd2boxzd2setz123483z67zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3919z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23943za7,
		BGl_nodezd2siza7ezd2boxzd2ref3481z75zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3921z00zzinline_siza7eza7,
		BgL_bgl_objectza7d2za7e3stru3944z00,
		BGl_objectzd2ze3structzd2siza7ed3485z44zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3923z00zzinline_siza7eza7,
		BgL_bgl_structza7b2objectza73945z00,
		BGl_structzb2objectzd2ze3objec3487z83zzinline_siza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3925z00zzinline_siza7eza7,
		BgL_bgl_objectza7d2za7e3stru3946z00,
		BGl_objectzd2ze3structzd2siza7ed3489z44zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3926z00zzinline_siza7eza7,
		BgL_bgl_structza7b2objectza73947z00,
		BGl_structzb2objectzd2ze3objec3491z83zzinline_siza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3927z00zzinline_siza7eza7,
		BgL_bgl_objectza7d2za7e3stru3948z00,
		BGl_objectzd2ze3structzd2siza7ed3493z44zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3928z00zzinline_siza7eza7,
		BgL_bgl_structza7b2objectza73949z00,
		BGl_structzb2objectzd2ze3objec3495z83zzinline_siza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3930z00zzinline_siza7eza7,
		BgL_bgl_structza7b2objectza73950z00,
		BGl_structzb2objectzd2ze3objec3499z83zzinline_siza7eza7, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3929z00zzinline_siza7eza7,
		BgL_bgl_objectza7d2za7e3stru3951z00,
		BGl_objectzd2ze3structzd2siza7ed3497z44zzinline_siza7eza7, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_siza7edzd2selectzf3zd2envz54zzinline_siza7eza7,
		BgL_bgl__siza7a7edza7d2selec3952z00,
		BGl__siza7edzd2selectzf3z86zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3895z00zzinline_siza7eza7,
		BgL_bgl_string3895za700za7za7i3953za7, "node-size", 9);
	      DEFINE_STRING(BGl_string3896z00zzinline_siza7eza7,
		BgL_bgl_string3896za700za7za7i3954za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3922z00zzinline_siza7eza7,
		BgL_bgl_string3922za700za7za7i3955za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string3924z00zzinline_siza7eza7,
		BgL_bgl_string3924za700za7za7i3956za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string3931z00zzinline_siza7eza7,
		BgL_bgl_string3931za700za7za7i3957za7, "inline_size", 11);
	      DEFINE_STRING(BGl_string3932z00zzinline_siza7eza7,
		BgL_bgl_string3932za700za7za7i3958za7,
		"node-size-default3432 sized-let-var sized-let-fun sized-select sized-sequence ",
		78);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_siza7edzd2letzd2funzf3zd2envz86zzinline_siza7eza7,
		BgL_bgl__siza7a7edza7d2letza7d3959za7,
		BGl__siza7edzd2letzd2funzf3z54zzinline_siza7eza7, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2siza7edzd2letzd2funzd2envzf5zzinline_siza7eza7,
		BgL_bgl__za752allocateza7d2s3960z00,
		BGl__z52allocatezd2siza7edzd2letzd2funz27zzinline_siza7eza7, 0L, BUNSPEC,
		0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2siza7edzd2letzd2varzd2envzf5zzinline_siza7eza7,
		BgL_bgl__za752allocateza7d2s3961z00,
		BGl__z52allocatezd2siza7edzd2letzd2varz27zzinline_siza7eza7, 0L, BUNSPEC,
		0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_siza7edzd2letzd2funzd2nilzd2envza7zzinline_siza7eza7,
		BgL_bgl__siza7a7edza7d2letza7d3962za7,
		BGl__siza7edzd2letzd2funzd2nilz75zzinline_siza7eza7, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
		BgL_bgl__nodeza7d2siza7a7eza773963za7,
		BGl__nodezd2siza7ez75zzinline_siza7eza7, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2siza7edzd2sequencezd2envz27zzinline_siza7eza7,
		BgL_bgl__za752allocateza7d2s3964z00,
		BGl__z52allocatezd2siza7edzd2sequencezf5zzinline_siza7eza7, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_siza7edzd2sequencezd2nilzd2envz75zzinline_siza7eza7,
		BgL_bgl__siza7a7edza7d2seque3965z00,
		BGl__siza7edzd2sequencezd2nilza7zzinline_siza7eza7, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_siza7edzd2selectzd2nilzd2envz75zzinline_siza7eza7,
		BgL_bgl__siza7a7edza7d2selec3966z00,
		BGl__siza7edzd2selectzd2nilza7zzinline_siza7eza7, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_siza7edzd2letzd2varzf3zd2envz86zzinline_siza7eza7,
		BgL_bgl__siza7a7edza7d2letza7d3967za7,
		BGl__siza7edzd2letzd2varzf3z54zzinline_siza7eza7, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_siza7edzd2sequencezf3zd2envz54zzinline_siza7eza7,
		BgL_bgl__siza7a7edza7d2seque3968z00,
		BGl__siza7edzd2sequencezf3z86zzinline_siza7eza7, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nodezd2siza7ezd2default3432zd2envz75zzinline_siza7eza7,
		BgL_bgl__nodeza7d2siza7a7eza7d3969za7,
		BGl__nodezd2siza7ezd2default3432za7zzinline_siza7eza7, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_siza7edzd2letzd2varzd2nilzd2envza7zzinline_siza7eza7,
		BgL_bgl__siza7a7edza7d2letza7d3970za7,
		BGl__siza7edzd2letzd2varzd2nilz75zzinline_siza7eza7, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2siza7edzd2selectzd2envz27zzinline_siza7eza7,
		BgL_bgl__za752allocateza7d2s3971z00,
		BGl__z52allocatezd2siza7edzd2selectzf5zzinline_siza7eza7, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3900z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23972za7,
		BGl_nodezd2siza7ezd2sequence3441za7zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3901z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23973za7,
		BGl_nodezd2siza7ezd2siza7edzd2sequ3443zd2zzinline_siza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3902z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23974za7,
		BGl_nodezd2siza7ezd2app3445za7zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3903z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23975za7,
		BGl_nodezd2siza7ezd2appzd2ly3447z75zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3904z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23976za7,
		BGl_nodezd2siza7ezd2funcall3449za7zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3905z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23977za7,
		BGl_nodezd2siza7ezd2cast3451za7zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3906z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23978za7,
		BGl_nodezd2siza7ezd2extern3453za7zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3907z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23979za7,
		BGl_nodezd2siza7ezd2setq3455za7zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3897z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23980za7,
		BGl_nodezd2siza7ezd2atom3435za7zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3908z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23981za7,
		BGl_nodezd2siza7ezd2conditiona3457za7zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3898z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23982za7,
		BGl_nodezd2siza7ezd2var3437za7zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3910z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23983za7,
		BGl_nodezd2siza7ezd2select3461za7zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3909z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23984za7,
		BGl_nodezd2siza7ezd2fail3459za7zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3899z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23985za7,
		BGl_nodezd2siza7ezd2kwote3439za7zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3911z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23986za7,
		BGl_nodezd2siza7ezd2siza7edzd2sele3463zd2zzinline_siza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3912z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23987za7,
		BGl_nodezd2siza7ezd2letzd2fun3465z75zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3913z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23988za7,
		BGl_nodezd2siza7ezd2siza7edzd2letzd23467z00zzinline_siza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3914z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23989za7,
		BGl_nodezd2siza7ezd2letzd2var3469z75zzinline_siza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3915z00zzinline_siza7eza7,
		BgL_bgl_nodeza7d2siza7a7eza7d23990za7,
		BGl_nodezd2siza7ezd2siza7edzd2letzd23471z00zzinline_siza7eza7, 0L, BUNSPEC,
		1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzinline_siza7eza7(long
		BgL_checksumz00_3066, char *BgL_fromz00_3067)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinline_siza7eza7))
				{
					BGl_requirezd2initializa7ationz75zzinline_siza7eza7 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzinline_siza7eza7();
					BGl_cnstzd2initzd2zzinline_siza7eza7();
					BGl_importedzd2moduleszd2initz00zzinline_siza7eza7();
					BGl_objectzd2initzd2zzinline_siza7eza7();
					BGl_genericzd2initzd2zzinline_siza7eza7();
					BGl_methodzd2initzd2zzinline_siza7eza7();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinline_siza7eza7()
	{
		AN_OBJECT;
		{	/* Inline/size.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "inline_size");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "inline_size");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "inline_size");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"inline_size");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinline_siza7eza7()
	{
		AN_OBJECT;
		{	/* Inline/size.scm 15 */
			{	/* Inline/size.scm 15 */
				obj_t BgL_cportz00_3030;

				BgL_cportz00_3030 =
					bgl_open_input_string(BGl_string3932z00zzinline_siza7eza7,
					(int) (((long) 0)));
				{
					long BgL_iz00_3031;

					BgL_iz00_3031 = ((long) 4);
				BgL_loopz00_3032:
					if ((BgL_iz00_3031 == ((long) -1)))
						{	/* Inline/size.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Inline/size.scm 15 */
							{	/* Inline/size.scm 15 */
								obj_t BgL_arg3934z00_3034;

								{	/* Inline/size.scm 15 */

									{	/* Inline/size.scm 15 */
										obj_t BgL_locationz00_3036;

										BgL_locationz00_3036 = BBOOL(((bool_t) 0));
										{	/* Inline/size.scm 15 */

											BgL_arg3934z00_3034 =
												BGl_readz00zz__readerz00(BgL_cportz00_3030,
												BgL_locationz00_3036);
										}
									}
								}
								{	/* Inline/size.scm 15 */
									int BgL_auxz00_3087;

									BgL_auxz00_3087 = (int) (BgL_iz00_3031);
									CNST_TABLE_SET(BgL_auxz00_3087, BgL_arg3934z00_3034);
							}}
							{	/* Inline/size.scm 15 */
								int BgL_auxz00_3037;

								BgL_auxz00_3037 = (int) ((BgL_iz00_3031 - ((long) 1)));
								{
									long BgL_iz00_3092;

									BgL_iz00_3092 = (long) (BgL_auxz00_3037);
									BgL_iz00_3031 = BgL_iz00_3092;
									goto BgL_loopz00_3032;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzinline_siza7eza7()
	{
		AN_OBJECT;
		{	/* Inline/size.scm 15 */
			return BUNSPEC;
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzinline_siza7eza7()
	{
		AN_OBJECT;
		{	/* Inline/size.scm 15 */
			{	/* Inline/size.scm 19 */
				obj_t BgL_arg3500z00_860;

				obj_t BgL_arg3501z00_861;

				obj_t BgL_arg3504z00_864;

				BgL_arg3500z00_860 = CNST_TABLE_REF(((long) 0));
				BgL_arg3501z00_861 = BGl_sequencez00zzast_nodez00;
				{	/* Inline/size.scm 19 */
					obj_t BgL_v3428z00_865;

					BgL_v3428z00_865 = create_vector((int) (((long) 0)));
					BgL_arg3504z00_864 = BgL_v3428z00_865;
				}
				BGl_siza7edzd2sequencez75zzinline_siza7eza7 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3500z00_860,
					BgL_arg3501z00_861, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2siza7edzd2sequencezd2envz27zzinline_siza7eza7,
					BGl_siza7edzd2sequencezd2nilzd2envz75zzinline_siza7eza7,
					BGl_siza7edzd2sequencezf3zd2envz54zzinline_siza7eza7,
					((long) 341381382), BFALSE, BFALSE, BgL_arg3504z00_864);
			}
			{	/* Inline/size.scm 20 */
				obj_t BgL_arg3505z00_866;

				obj_t BgL_arg3506z00_867;

				obj_t BgL_arg3509z00_870;

				BgL_arg3505z00_866 = CNST_TABLE_REF(((long) 1));
				BgL_arg3506z00_867 = BGl_selectz00zzast_nodez00;
				{	/* Inline/size.scm 20 */
					obj_t BgL_v3429z00_871;

					BgL_v3429z00_871 = create_vector((int) (((long) 0)));
					BgL_arg3509z00_870 = BgL_v3429z00_871;
				}
				BGl_siza7edzd2selectz75zzinline_siza7eza7 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3505z00_866,
					BgL_arg3506z00_867, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2siza7edzd2selectzd2envz27zzinline_siza7eza7,
					BGl_siza7edzd2selectzd2nilzd2envz75zzinline_siza7eza7,
					BGl_siza7edzd2selectzf3zd2envz54zzinline_siza7eza7,
					((long) 209319757), BFALSE, BFALSE, BgL_arg3509z00_870);
			}
			{	/* Inline/size.scm 21 */
				obj_t BgL_arg3510z00_872;

				obj_t BgL_arg3511z00_873;

				obj_t BgL_arg3514z00_876;

				BgL_arg3510z00_872 = CNST_TABLE_REF(((long) 2));
				BgL_arg3511z00_873 = BGl_letzd2funzd2zzast_nodez00;
				{	/* Inline/size.scm 21 */
					obj_t BgL_v3430z00_877;

					BgL_v3430z00_877 = create_vector((int) (((long) 0)));
					BgL_arg3514z00_876 = BgL_v3430z00_877;
				}
				BGl_siza7edzd2letzd2funza7zzinline_siza7eza7 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3510z00_872,
					BgL_arg3511z00_873, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2siza7edzd2letzd2funzd2envzf5zzinline_siza7eza7,
					BGl_siza7edzd2letzd2funzd2nilzd2envza7zzinline_siza7eza7,
					BGl_siza7edzd2letzd2funzf3zd2envz86zzinline_siza7eza7,
					((long) 172575936), BFALSE, BFALSE, BgL_arg3514z00_876);
			}
			{	/* Inline/size.scm 22 */
				obj_t BgL_arg3515z00_878;

				obj_t BgL_arg3517z00_879;

				obj_t BgL_arg3520z00_882;

				BgL_arg3515z00_878 = CNST_TABLE_REF(((long) 3));
				BgL_arg3517z00_879 = BGl_letzd2varzd2zzast_nodez00;
				{	/* Inline/size.scm 22 */
					obj_t BgL_v3431z00_883;

					BgL_v3431z00_883 = create_vector((int) (((long) 0)));
					BgL_arg3520z00_882 = BgL_v3431z00_883;
				}
				BGl_siza7edzd2letzd2varza7zzinline_siza7eza7 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3515z00_878,
					BgL_arg3517z00_879, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2siza7edzd2letzd2varzd2envzf5zzinline_siza7eza7,
					BGl_siza7edzd2letzd2varzd2nilzd2envza7zzinline_siza7eza7,
					BGl_siza7edzd2letzd2varzf3zd2envz86zzinline_siza7eza7,
					((long) 172574816), BFALSE, BFALSE, BgL_arg3520z00_882);
			}
			BGl_z52thezd2siza7edzd2letzd2varzd2nilzf5zzinline_siza7eza7 = BUNSPEC;
			BGl_z52thezd2siza7edzd2letzd2funzd2nilzf5zzinline_siza7eza7 = BUNSPEC;
			BGl_z52thezd2siza7edzd2selectzd2nilz27zzinline_siza7eza7 = BUNSPEC;
			return (BGl_z52thezd2siza7edzd2sequencezd2nilz27zzinline_siza7eza7 =
				BUNSPEC, BUNSPEC);
		}
	}



/* _sized-let-var? */
	obj_t BGl__siza7edzd2letzd2varzf3z54zzinline_siza7eza7(obj_t BgL_envz00_2919,
		obj_t BgL_obj3388z00_2920)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 22 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3388z00_2920,
					BGl_siza7edzd2letzd2varza7zzinline_siza7eza7));
		}
	}



/* _%allocate-sized-let-var */
	obj_t BGl__z52allocatezd2siza7edzd2letzd2varz27zzinline_siza7eza7(obj_t
		BgL_envz00_2917)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 22 */
			{	/* Inline/size.scm 22 */
				BgL_letzd2varzd2_bglt BgL_auxz00_3112;

				{	/* Inline/size.scm 22 */
					BgL_letzd2varzd2_bglt BgL_res3935z00_3043;

					{	/* Inline/size.scm 22 */
						BgL_letzd2varzd2_bglt BgL_new3381z00_3041;

						BgL_new3381z00_3041 =
							((BgL_letzd2varzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_letzd2varzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3381z00_3041),
							BGl_classzd2numzd2zz__objectz00
							(BGl_siza7edzd2letzd2varza7zzinline_siza7eza7));
						{	/* Inline/size.scm 22 */
							BgL_objectz00_bglt BgL_auxz00_3117;

							BgL_auxz00_3117 = (BgL_objectz00_bglt) (BgL_new3381z00_3041);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3117, BFALSE);
						}
						BgL_res3935z00_3043 = BgL_new3381z00_3041;
					}
					BgL_auxz00_3112 = BgL_res3935z00_3043;
				}
				return (obj_t) (BgL_auxz00_3112);
			}
		}
	}



/* sized-let-var-nil */
	BgL_siza7edzd2letzd2varza7_bglt
		BGl_siza7edzd2letzd2varzd2nilz75zzinline_siza7eza7()
	{
		AN_OBJECT;
		{	/* Inline/size.scm 22 */
			if (
				(BGl_z52thezd2siza7edzd2letzd2varzd2nilzf5zzinline_siza7eza7 ==
					BUNSPEC))
				{	/* Inline/size.scm 22 */
					{	/* Inline/size.scm 22 */
						BgL_letzd2varzd2_bglt BgL_res3770z00_1694;

						{	/* Inline/size.scm 22 */
							BgL_letzd2varzd2_bglt BgL_new3098z00_1690;

							BgL_new3098z00_1690 =
								((BgL_letzd2varzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_letzd2varzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3098z00_1690),
								BGl_classzd2numzd2zz__objectz00(BGl_letzd2varzd2zzast_nodez00));
							{	/* Inline/size.scm 22 */
								BgL_objectz00_bglt BgL_auxz00_3127;

								BgL_auxz00_3127 = (BgL_objectz00_bglt) (BgL_new3098z00_1690);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3127, BFALSE);
							}
							BgL_res3770z00_1694 = BgL_new3098z00_1690;
						}
						BGl_z52thezd2siza7edzd2letzd2varzd2nilzf5zzinline_siza7eza7 =
							(obj_t) (BgL_res3770z00_1694);
					}
					{	/* Inline/size.scm 22 */
						BgL_typez00_bglt BgL_arg3525z00_893;

						BgL_nodez00_bglt BgL_arg3526z00_894;

						BgL_arg3525z00_893 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg3526z00_894 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Inline/size.scm 22 */
							BgL_letzd2varzd2_bglt BgL_res3771z00_1710;

							{	/* Inline/size.scm 22 */
								BgL_letzd2varzd2_bglt BgL_new3089z00_1695;

								BgL_new3089z00_1695 =
									(BgL_letzd2varzd2_bglt)
									(BGl_z52thezd2siza7edzd2letzd2varzd2nilzf5zzinline_siza7eza7);
								{	/* Inline/size.scm 22 */
									obj_t BgL_loc3082z00_1703;

									BgL_typez00_bglt BgL_type3083z00_1704;

									obj_t BgL_sidezd2effectzf33084z21_1705;

									obj_t BgL_key3085z00_1706;

									obj_t BgL_bindings3086z00_1707;

									BgL_nodez00_bglt BgL_body3087z00_1708;

									bool_t BgL_removablezf33088zf3_1709;

									BgL_loc3082z00_1703 = BUNSPEC;
									BgL_type3083z00_1704 = BgL_arg3525z00_893;
									BgL_sidezd2effectzf33084z21_1705 = BUNSPEC;
									BgL_key3085z00_1706 = BUNSPEC;
									BgL_bindings3086z00_1707 = BUNSPEC;
									BgL_body3087z00_1708 = BgL_arg3526z00_894;
									BgL_removablezf33088zf3_1709 = ((bool_t) 0);
									((((BgL_letzd2varzd2_bglt) CREF(BgL_new3089z00_1695))->
											BgL_locz00) = ((obj_t) BgL_loc3082z00_1703), BUNSPEC);
									((((BgL_letzd2varzd2_bglt) CREF(BgL_new3089z00_1695))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3083z00_1704), BUNSPEC);
									((((BgL_letzd2varzd2_bglt) CREF(BgL_new3089z00_1695))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf33084z21_1705), BUNSPEC);
									((((BgL_letzd2varzd2_bglt) CREF(BgL_new3089z00_1695))->
											BgL_keyz00) = ((obj_t) BgL_key3085z00_1706), BUNSPEC);
									((((BgL_letzd2varzd2_bglt) CREF(BgL_new3089z00_1695))->
											BgL_bindingsz00) =
										((obj_t) BgL_bindings3086z00_1707), BUNSPEC);
									((((BgL_letzd2varzd2_bglt) CREF(BgL_new3089z00_1695))->
											BgL_bodyz00) =
										((BgL_nodez00_bglt) BgL_body3087z00_1708), BUNSPEC);
									((((BgL_letzd2varzd2_bglt) CREF(BgL_new3089z00_1695))->
											BgL_removablezf3zf3) =
										((bool_t) BgL_removablezf33088zf3_1709), BUNSPEC);
									BgL_res3771z00_1710 = BgL_new3089z00_1695;
							}} BgL_res3771z00_1710;
					}}
					{	/* Inline/size.scm 22 */
						long BgL_arg3527z00_895;

						BgL_arg3527z00_895 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_siza7edzd2letzd2varza7zzinline_siza7eza7);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2siza7edzd2letzd2varzd2nilzf5zzinline_siza7eza7),
							BgL_arg3527z00_895);
					}
					{	/* Inline/size.scm 22 */
						BgL_siza7edzd2letzd2varza7_bglt BgL_arg3528z00_896;

						{	/* Inline/size.scm 22 */
							BgL_siza7edzd2letzd2varza7_bglt BgL_res3773z00_1719;

							{	/* Inline/size.scm 22 */
								BgL_siza7edzd2letzd2varza7_bglt BgL_new3365z00_1714;

								BgL_new3365z00_1714 =
									((BgL_siza7edzd2letzd2varza7_bglt)
									BREF(GC_MALLOC(sizeof(struct
												BgL_siza7edzd2letzd2varza7_bgl))));
								{	/* Inline/size.scm 22 */
									BgL_siza7edzd2letzd2varza7_bglt BgL_res3772z00_1718;

									{	/* Inline/size.scm 22 */
										BgL_siza7edzd2letzd2varza7_bglt BgL_new3378z00_1715;

										BgL_new3378z00_1715 = BgL_new3365z00_1714;
										{	/* Inline/size.scm 22 */
											long BgL_siza7e3377za7_1717;

											BgL_siza7e3377za7_1717 = ((long) 0);
											((((BgL_siza7edzd2letzd2varza7_bglt)
														CREF(BgL_new3378z00_1715))->BgL_siza7eza7) =
												((long) BgL_siza7e3377za7_1717), BUNSPEC);
											BgL_res3772z00_1718 = BgL_new3378z00_1715;
									}} BgL_res3772z00_1718;
								}
								BgL_res3773z00_1719 = BgL_new3365z00_1714;
							}
							BgL_arg3528z00_896 = BgL_res3773z00_1719;
						}
						{	/* Inline/size.scm 22 */
							obj_t BgL_auxz00_3148;

							BgL_objectz00_bglt BgL_auxz00_3146;

							BgL_auxz00_3148 = (obj_t) (BgL_arg3528z00_896);
							BgL_auxz00_3146 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2siza7edzd2letzd2varzd2nilzf5zzinline_siza7eza7);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3146, BgL_auxz00_3148);
				}}}
			else
				{	/* Inline/size.scm 22 */
					BFALSE;
				}
			return
				(BgL_siza7edzd2letzd2varza7_bglt)
				(BGl_z52thezd2siza7edzd2letzd2varzd2nilzf5zzinline_siza7eza7);
		}
	}



/* _sized-let-var-nil */
	obj_t BGl__siza7edzd2letzd2varzd2nilz75zzinline_siza7eza7(obj_t
		BgL_envz00_2918)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 22 */
			return (obj_t) (BGl_siza7edzd2letzd2varzd2nilz75zzinline_siza7eza7());
		}
	}



/* _sized-let-fun? */
	obj_t BGl__siza7edzd2letzd2funzf3z54zzinline_siza7eza7(obj_t BgL_envz00_2915,
		obj_t BgL_obj3344z00_2916)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 21 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3344z00_2916,
					BGl_siza7edzd2letzd2funza7zzinline_siza7eza7));
		}
	}



/* _%allocate-sized-let-fun */
	obj_t BGl__z52allocatezd2siza7edzd2letzd2funz27zzinline_siza7eza7(obj_t
		BgL_envz00_2913)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 21 */
			{	/* Inline/size.scm 21 */
				BgL_letzd2funzd2_bglt BgL_auxz00_3156;

				{	/* Inline/size.scm 21 */
					BgL_letzd2funzd2_bglt BgL_res3936z00_3049;

					{	/* Inline/size.scm 21 */
						BgL_letzd2funzd2_bglt BgL_new3337z00_3047;

						BgL_new3337z00_3047 =
							((BgL_letzd2funzd2_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_letzd2funzd2_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3337z00_3047),
							BGl_classzd2numzd2zz__objectz00
							(BGl_siza7edzd2letzd2funza7zzinline_siza7eza7));
						{	/* Inline/size.scm 21 */
							BgL_objectz00_bglt BgL_auxz00_3161;

							BgL_auxz00_3161 = (BgL_objectz00_bglt) (BgL_new3337z00_3047);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3161, BFALSE);
						}
						BgL_res3936z00_3049 = BgL_new3337z00_3047;
					}
					BgL_auxz00_3156 = BgL_res3936z00_3049;
				}
				return (obj_t) (BgL_auxz00_3156);
			}
		}
	}



/* sized-let-fun-nil */
	BgL_siza7edzd2letzd2funza7_bglt
		BGl_siza7edzd2letzd2funzd2nilz75zzinline_siza7eza7()
	{
		AN_OBJECT;
		{	/* Inline/size.scm 21 */
			if (
				(BGl_z52thezd2siza7edzd2letzd2funzd2nilzf5zzinline_siza7eza7 ==
					BUNSPEC))
				{	/* Inline/size.scm 21 */
					{	/* Inline/size.scm 21 */
						BgL_letzd2funzd2_bglt BgL_res3775z00_1734;

						{	/* Inline/size.scm 21 */
							BgL_letzd2funzd2_bglt BgL_new3054z00_1730;

							BgL_new3054z00_1730 =
								((BgL_letzd2funzd2_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_letzd2funzd2_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3054z00_1730),
								BGl_classzd2numzd2zz__objectz00(BGl_letzd2funzd2zzast_nodez00));
							{	/* Inline/size.scm 21 */
								BgL_objectz00_bglt BgL_auxz00_3171;

								BgL_auxz00_3171 = (BgL_objectz00_bglt) (BgL_new3054z00_1730);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3171, BFALSE);
							}
							BgL_res3775z00_1734 = BgL_new3054z00_1730;
						}
						BGl_z52thezd2siza7edzd2letzd2funzd2nilzf5zzinline_siza7eza7 =
							(obj_t) (BgL_res3775z00_1734);
					}
					{	/* Inline/size.scm 21 */
						BgL_typez00_bglt BgL_arg3533z00_906;

						BgL_nodez00_bglt BgL_arg3535z00_907;

						BgL_arg3533z00_906 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg3535z00_907 = BGl_nodezd2nilzd2zzast_nodez00();
						{	/* Inline/size.scm 21 */
							BgL_letzd2funzd2_bglt BgL_res3776z00_1748;

							{	/* Inline/size.scm 21 */
								BgL_letzd2funzd2_bglt BgL_new3046z00_1735;

								BgL_new3046z00_1735 =
									(BgL_letzd2funzd2_bglt)
									(BGl_z52thezd2siza7edzd2letzd2funzd2nilzf5zzinline_siza7eza7);
								{	/* Inline/size.scm 21 */
									obj_t BgL_loc3040z00_1742;

									BgL_typez00_bglt BgL_type3041z00_1743;

									obj_t BgL_sidezd2effectzf33042z21_1744;

									obj_t BgL_key3043z00_1745;

									obj_t BgL_locals3044z00_1746;

									BgL_nodez00_bglt BgL_body3045z00_1747;

									BgL_loc3040z00_1742 = BUNSPEC;
									BgL_type3041z00_1743 = BgL_arg3533z00_906;
									BgL_sidezd2effectzf33042z21_1744 = BUNSPEC;
									BgL_key3043z00_1745 = BUNSPEC;
									BgL_locals3044z00_1746 = BUNSPEC;
									BgL_body3045z00_1747 = BgL_arg3535z00_907;
									((((BgL_letzd2funzd2_bglt) CREF(BgL_new3046z00_1735))->
											BgL_locz00) = ((obj_t) BgL_loc3040z00_1742), BUNSPEC);
									((((BgL_letzd2funzd2_bglt) CREF(BgL_new3046z00_1735))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3041z00_1743), BUNSPEC);
									((((BgL_letzd2funzd2_bglt) CREF(BgL_new3046z00_1735))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf33042z21_1744), BUNSPEC);
									((((BgL_letzd2funzd2_bglt) CREF(BgL_new3046z00_1735))->
											BgL_keyz00) = ((obj_t) BgL_key3043z00_1745), BUNSPEC);
									((((BgL_letzd2funzd2_bglt) CREF(BgL_new3046z00_1735))->
											BgL_localsz00) =
										((obj_t) BgL_locals3044z00_1746), BUNSPEC);
									((((BgL_letzd2funzd2_bglt) CREF(BgL_new3046z00_1735))->
											BgL_bodyz00) =
										((BgL_nodez00_bglt) BgL_body3045z00_1747), BUNSPEC);
									BgL_res3776z00_1748 = BgL_new3046z00_1735;
							}} BgL_res3776z00_1748;
					}}
					{	/* Inline/size.scm 21 */
						long BgL_arg3536z00_908;

						BgL_arg3536z00_908 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_siza7edzd2letzd2funza7zzinline_siza7eza7);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2siza7edzd2letzd2funzd2nilzf5zzinline_siza7eza7),
							BgL_arg3536z00_908);
					}
					{	/* Inline/size.scm 21 */
						BgL_siza7edzd2letzd2funza7_bglt BgL_arg3537z00_909;

						{	/* Inline/size.scm 21 */
							BgL_siza7edzd2letzd2funza7_bglt BgL_res3778z00_1757;

							{	/* Inline/size.scm 21 */
								BgL_siza7edzd2letzd2funza7_bglt BgL_new3322z00_1752;

								BgL_new3322z00_1752 =
									((BgL_siza7edzd2letzd2funza7_bglt)
									BREF(GC_MALLOC(sizeof(struct
												BgL_siza7edzd2letzd2funza7_bgl))));
								{	/* Inline/size.scm 21 */
									BgL_siza7edzd2letzd2funza7_bglt BgL_res3777z00_1756;

									{	/* Inline/size.scm 21 */
										BgL_siza7edzd2letzd2funza7_bglt BgL_new3334z00_1753;

										BgL_new3334z00_1753 = BgL_new3322z00_1752;
										{	/* Inline/size.scm 21 */
											long BgL_siza7e3333za7_1755;

											BgL_siza7e3333za7_1755 = ((long) 0);
											((((BgL_siza7edzd2letzd2funza7_bglt)
														CREF(BgL_new3334z00_1753))->BgL_siza7eza7) =
												((long) BgL_siza7e3333za7_1755), BUNSPEC);
											BgL_res3777z00_1756 = BgL_new3334z00_1753;
									}} BgL_res3777z00_1756;
								}
								BgL_res3778z00_1757 = BgL_new3322z00_1752;
							}
							BgL_arg3537z00_909 = BgL_res3778z00_1757;
						}
						{	/* Inline/size.scm 21 */
							obj_t BgL_auxz00_3191;

							BgL_objectz00_bglt BgL_auxz00_3189;

							BgL_auxz00_3191 = (obj_t) (BgL_arg3537z00_909);
							BgL_auxz00_3189 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2siza7edzd2letzd2funzd2nilzf5zzinline_siza7eza7);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3189, BgL_auxz00_3191);
				}}}
			else
				{	/* Inline/size.scm 21 */
					BFALSE;
				}
			return
				(BgL_siza7edzd2letzd2funza7_bglt)
				(BGl_z52thezd2siza7edzd2letzd2funzd2nilzf5zzinline_siza7eza7);
		}
	}



/* _sized-let-fun-nil */
	obj_t BGl__siza7edzd2letzd2funzd2nilz75zzinline_siza7eza7(obj_t
		BgL_envz00_2914)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 21 */
			return (obj_t) (BGl_siza7edzd2letzd2funzd2nilz75zzinline_siza7eza7());
		}
	}



/* _sized-select? */
	obj_t BGl__siza7edzd2selectzf3z86zzinline_siza7eza7(obj_t BgL_envz00_2911,
		obj_t BgL_obj3303z00_2912)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 20 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3303z00_2912,
					BGl_siza7edzd2selectz75zzinline_siza7eza7));
		}
	}



/* _%allocate-sized-select */
	obj_t BGl__z52allocatezd2siza7edzd2selectzf5zzinline_siza7eza7(obj_t
		BgL_envz00_2909)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 20 */
			{	/* Inline/size.scm 20 */
				BgL_selectz00_bglt BgL_auxz00_3199;

				{	/* Inline/size.scm 20 */
					BgL_selectz00_bglt BgL_res3937z00_3055;

					{	/* Inline/size.scm 20 */
						BgL_selectz00_bglt BgL_new3296z00_3053;

						BgL_new3296z00_3053 =
							((BgL_selectz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_selectz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3296z00_3053),
							BGl_classzd2numzd2zz__objectz00
							(BGl_siza7edzd2selectz75zzinline_siza7eza7));
						{	/* Inline/size.scm 20 */
							BgL_objectz00_bglt BgL_auxz00_3204;

							BgL_auxz00_3204 = (BgL_objectz00_bglt) (BgL_new3296z00_3053);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3204, BFALSE);
						}
						BgL_res3937z00_3055 = BgL_new3296z00_3053;
					}
					BgL_auxz00_3199 = BgL_res3937z00_3055;
				}
				return (obj_t) (BgL_auxz00_3199);
			}
		}
	}



/* sized-select-nil */
	BgL_siza7edzd2selectz75_bglt BGl_siza7edzd2selectzd2nilza7zzinline_siza7eza7()
	{
		AN_OBJECT;
		{	/* Inline/size.scm 20 */
			if ((BGl_z52thezd2siza7edzd2selectzd2nilz27zzinline_siza7eza7 == BUNSPEC))
				{	/* Inline/size.scm 20 */
					{	/* Inline/size.scm 20 */
						BgL_selectz00_bglt BgL_res3780z00_1772;

						{	/* Inline/size.scm 20 */
							BgL_selectz00_bglt BgL_new3016z00_1768;

							BgL_new3016z00_1768 =
								((BgL_selectz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_selectz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3016z00_1768),
								BGl_classzd2numzd2zz__objectz00(BGl_selectz00zzast_nodez00));
							{	/* Inline/size.scm 20 */
								BgL_objectz00_bglt BgL_auxz00_3214;

								BgL_auxz00_3214 = (BgL_objectz00_bglt) (BgL_new3016z00_1768);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3214, BFALSE);
							}
							BgL_res3780z00_1772 = BgL_new3016z00_1768;
						}
						BGl_z52thezd2siza7edzd2selectzd2nilz27zzinline_siza7eza7 =
							(obj_t) (BgL_res3780z00_1772);
					}
					{	/* Inline/size.scm 20 */
						BgL_typez00_bglt BgL_arg3542z00_919;

						BgL_nodez00_bglt BgL_arg3543z00_920;

						BgL_typez00_bglt BgL_arg3544z00_921;

						BgL_arg3542z00_919 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg3543z00_920 = BGl_nodezd2nilzd2zzast_nodez00();
						BgL_arg3544z00_921 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Inline/size.scm 20 */
							BgL_selectz00_bglt BgL_res3781z00_1788;

							{	/* Inline/size.scm 20 */
								BgL_selectz00_bglt BgL_new3007z00_1773;

								BgL_new3007z00_1773 =
									(BgL_selectz00_bglt)
									(BGl_z52thezd2siza7edzd2selectzd2nilz27zzinline_siza7eza7);
								{	/* Inline/size.scm 20 */
									obj_t BgL_loc3000z00_1781;

									BgL_typez00_bglt BgL_type3001z00_1782;

									obj_t BgL_sidezd2effectzf33002z21_1783;

									obj_t BgL_key3003z00_1784;

									BgL_nodez00_bglt BgL_test3004z00_1785;

									obj_t BgL_clauses3005z00_1786;

									BgL_typez00_bglt BgL_itemzd2type3006zd2_1787;

									BgL_loc3000z00_1781 = BUNSPEC;
									BgL_type3001z00_1782 = BgL_arg3542z00_919;
									BgL_sidezd2effectzf33002z21_1783 = BUNSPEC;
									BgL_key3003z00_1784 = BUNSPEC;
									BgL_test3004z00_1785 = BgL_arg3543z00_920;
									BgL_clauses3005z00_1786 = BUNSPEC;
									BgL_itemzd2type3006zd2_1787 = BgL_arg3544z00_921;
									((((BgL_selectz00_bglt) CREF(BgL_new3007z00_1773))->
											BgL_locz00) = ((obj_t) BgL_loc3000z00_1781), BUNSPEC);
									((((BgL_selectz00_bglt) CREF(BgL_new3007z00_1773))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type3001z00_1782), BUNSPEC);
									((((BgL_selectz00_bglt) CREF(BgL_new3007z00_1773))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf33002z21_1783), BUNSPEC);
									((((BgL_selectz00_bglt) CREF(BgL_new3007z00_1773))->
											BgL_keyz00) = ((obj_t) BgL_key3003z00_1784), BUNSPEC);
									((((BgL_selectz00_bglt) CREF(BgL_new3007z00_1773))->
											BgL_testz00) =
										((BgL_nodez00_bglt) BgL_test3004z00_1785), BUNSPEC);
									((((BgL_selectz00_bglt) CREF(BgL_new3007z00_1773))->
											BgL_clausesz00) =
										((obj_t) BgL_clauses3005z00_1786), BUNSPEC);
									((((BgL_selectz00_bglt) CREF(BgL_new3007z00_1773))->
											BgL_itemzd2typezd2) =
										((BgL_typez00_bglt) BgL_itemzd2type3006zd2_1787), BUNSPEC);
									BgL_res3781z00_1788 = BgL_new3007z00_1773;
							}} BgL_res3781z00_1788;
					}}
					{	/* Inline/size.scm 20 */
						long BgL_arg3545z00_922;

						BgL_arg3545z00_922 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_siza7edzd2selectz75zzinline_siza7eza7);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2siza7edzd2selectzd2nilz27zzinline_siza7eza7),
							BgL_arg3545z00_922);
					}
					{	/* Inline/size.scm 20 */
						BgL_siza7edzd2selectz75_bglt BgL_arg3546z00_923;

						{	/* Inline/size.scm 20 */
							BgL_siza7edzd2selectz75_bglt BgL_res3783z00_1797;

							{	/* Inline/size.scm 20 */
								BgL_siza7edzd2selectz75_bglt BgL_new3280z00_1792;

								BgL_new3280z00_1792 =
									((BgL_siza7edzd2selectz75_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_siza7edzd2selectz75_bgl))));
								{	/* Inline/size.scm 20 */
									BgL_siza7edzd2selectz75_bglt BgL_res3782z00_1796;

									{	/* Inline/size.scm 20 */
										BgL_siza7edzd2selectz75_bglt BgL_new3293z00_1793;

										BgL_new3293z00_1793 = BgL_new3280z00_1792;
										{	/* Inline/size.scm 20 */
											long BgL_siza7e3292za7_1795;

											BgL_siza7e3292za7_1795 = ((long) 0);
											((((BgL_siza7edzd2selectz75_bglt)
														CREF(BgL_new3293z00_1793))->BgL_siza7eza7) =
												((long) BgL_siza7e3292za7_1795), BUNSPEC);
											BgL_res3782z00_1796 = BgL_new3293z00_1793;
									}} BgL_res3782z00_1796;
								}
								BgL_res3783z00_1797 = BgL_new3280z00_1792;
							}
							BgL_arg3546z00_923 = BgL_res3783z00_1797;
						}
						{	/* Inline/size.scm 20 */
							obj_t BgL_auxz00_3236;

							BgL_objectz00_bglt BgL_auxz00_3234;

							BgL_auxz00_3236 = (obj_t) (BgL_arg3546z00_923);
							BgL_auxz00_3234 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2siza7edzd2selectzd2nilz27zzinline_siza7eza7);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3234, BgL_auxz00_3236);
				}}}
			else
				{	/* Inline/size.scm 20 */
					BFALSE;
				}
			return
				(BgL_siza7edzd2selectz75_bglt)
				(BGl_z52thezd2siza7edzd2selectzd2nilz27zzinline_siza7eza7);
		}
	}



/* _sized-select-nil */
	obj_t BGl__siza7edzd2selectzd2nilza7zzinline_siza7eza7(obj_t BgL_envz00_2910)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 20 */
			return (obj_t) (BGl_siza7edzd2selectzd2nilza7zzinline_siza7eza7());
		}
	}



/* _sized-sequence? */
	obj_t BGl__siza7edzd2sequencezf3z86zzinline_siza7eza7(obj_t BgL_envz00_2907,
		obj_t BgL_obj3264z00_2908)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 19 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3264z00_2908,
					BGl_siza7edzd2sequencez75zzinline_siza7eza7));
		}
	}



/* _%allocate-sized-sequence */
	obj_t BGl__z52allocatezd2siza7edzd2sequencezf5zzinline_siza7eza7(obj_t
		BgL_envz00_2905)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 19 */
			{	/* Inline/size.scm 19 */
				BgL_sequencez00_bglt BgL_auxz00_3244;

				{	/* Inline/size.scm 19 */
					BgL_sequencez00_bglt BgL_res3938z00_3061;

					{	/* Inline/size.scm 19 */
						BgL_sequencez00_bglt BgL_new3257z00_3059;

						BgL_new3257z00_3059 =
							((BgL_sequencez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_sequencez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3257z00_3059),
							BGl_classzd2numzd2zz__objectz00
							(BGl_siza7edzd2sequencez75zzinline_siza7eza7));
						{	/* Inline/size.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_3249;

							BgL_auxz00_3249 = (BgL_objectz00_bglt) (BgL_new3257z00_3059);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3249, BFALSE);
						}
						BgL_res3938z00_3061 = BgL_new3257z00_3059;
					}
					BgL_auxz00_3244 = BgL_res3938z00_3061;
				}
				return (obj_t) (BgL_auxz00_3244);
			}
		}
	}



/* sized-sequence-nil */
	BgL_siza7edzd2sequencez75_bglt
		BGl_siza7edzd2sequencezd2nilza7zzinline_siza7eza7()
	{
		AN_OBJECT;
		{	/* Inline/size.scm 19 */
			if (
				(BGl_z52thezd2siza7edzd2sequencezd2nilz27zzinline_siza7eza7 == BUNSPEC))
				{	/* Inline/size.scm 19 */
					{	/* Inline/size.scm 19 */
						BgL_sequencez00_bglt BgL_res3785z00_1812;

						{	/* Inline/size.scm 19 */
							BgL_sequencez00_bglt BgL_new2237z00_1808;

							BgL_new2237z00_1808 =
								((BgL_sequencez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_sequencez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2237z00_1808),
								BGl_classzd2numzd2zz__objectz00(BGl_sequencez00zzast_nodez00));
							{	/* Inline/size.scm 19 */
								BgL_objectz00_bglt BgL_auxz00_3259;

								BgL_auxz00_3259 = (BgL_objectz00_bglt) (BgL_new2237z00_1808);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3259, BFALSE);
							}
							BgL_res3785z00_1812 = BgL_new2237z00_1808;
						}
						BGl_z52thezd2siza7edzd2sequencezd2nilz27zzinline_siza7eza7 =
							(obj_t) (BgL_res3785z00_1812);
					}
					{	/* Inline/size.scm 19 */
						BgL_typez00_bglt BgL_arg3551z00_933;

						BgL_arg3551z00_933 = BGl_typezd2nilzd2zztype_typez00();
						{	/* Inline/size.scm 19 */
							BgL_sequencez00_bglt BgL_res3786z00_1824;

							{	/* Inline/size.scm 19 */
								BgL_sequencez00_bglt BgL_new2230z00_1813;

								BgL_new2230z00_1813 =
									(BgL_sequencez00_bglt)
									(BGl_z52thezd2siza7edzd2sequencezd2nilz27zzinline_siza7eza7);
								{	/* Inline/size.scm 19 */
									obj_t BgL_loc2225z00_1819;

									BgL_typez00_bglt BgL_type2226z00_1820;

									obj_t BgL_sidezd2effectzf32227z21_1821;

									obj_t BgL_key2228z00_1822;

									obj_t BgL_nodes2229z00_1823;

									BgL_loc2225z00_1819 = BUNSPEC;
									BgL_type2226z00_1820 = BgL_arg3551z00_933;
									BgL_sidezd2effectzf32227z21_1821 = BUNSPEC;
									BgL_key2228z00_1822 = BUNSPEC;
									BgL_nodes2229z00_1823 = BUNSPEC;
									((((BgL_sequencez00_bglt) CREF(BgL_new2230z00_1813))->
											BgL_locz00) = ((obj_t) BgL_loc2225z00_1819), BUNSPEC);
									((((BgL_sequencez00_bglt) CREF(BgL_new2230z00_1813))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type2226z00_1820), BUNSPEC);
									((((BgL_sequencez00_bglt) CREF(BgL_new2230z00_1813))->
											BgL_sidezd2effectzf3z21) =
										((obj_t) BgL_sidezd2effectzf32227z21_1821), BUNSPEC);
									((((BgL_sequencez00_bglt) CREF(BgL_new2230z00_1813))->
											BgL_keyz00) = ((obj_t) BgL_key2228z00_1822), BUNSPEC);
									((((BgL_sequencez00_bglt) CREF(BgL_new2230z00_1813))->
											BgL_nodesz00) = ((obj_t) BgL_nodes2229z00_1823), BUNSPEC);
									BgL_res3786z00_1824 = BgL_new2230z00_1813;
							}} BgL_res3786z00_1824;
					}}
					{	/* Inline/size.scm 19 */
						long BgL_arg3552z00_934;

						BgL_arg3552z00_934 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_siza7edzd2sequencez75zzinline_siza7eza7);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2siza7edzd2sequencezd2nilz27zzinline_siza7eza7),
							BgL_arg3552z00_934);
					}
					{	/* Inline/size.scm 19 */
						BgL_siza7edzd2sequencez75_bglt BgL_arg3553z00_935;

						{	/* Inline/size.scm 19 */
							BgL_siza7edzd2sequencez75_bglt BgL_res3788z00_1833;

							{	/* Inline/size.scm 19 */
								BgL_siza7edzd2sequencez75_bglt BgL_new3243z00_1828;

								BgL_new3243z00_1828 =
									((BgL_siza7edzd2sequencez75_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_siza7edzd2sequencez75_bgl))));
								{	/* Inline/size.scm 19 */
									BgL_siza7edzd2sequencez75_bglt BgL_res3787z00_1832;

									{	/* Inline/size.scm 19 */
										BgL_siza7edzd2sequencez75_bglt BgL_new3254z00_1829;

										BgL_new3254z00_1829 = BgL_new3243z00_1828;
										{	/* Inline/size.scm 19 */
											long BgL_siza7e3253za7_1831;

											BgL_siza7e3253za7_1831 = ((long) 0);
											((((BgL_siza7edzd2sequencez75_bglt)
														CREF(BgL_new3254z00_1829))->BgL_siza7eza7) =
												((long) BgL_siza7e3253za7_1831), BUNSPEC);
											BgL_res3787z00_1832 = BgL_new3254z00_1829;
									}} BgL_res3787z00_1832;
								}
								BgL_res3788z00_1833 = BgL_new3243z00_1828;
							}
							BgL_arg3553z00_935 = BgL_res3788z00_1833;
						}
						{	/* Inline/size.scm 19 */
							obj_t BgL_auxz00_3277;

							BgL_objectz00_bglt BgL_auxz00_3275;

							BgL_auxz00_3277 = (obj_t) (BgL_arg3553z00_935);
							BgL_auxz00_3275 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2siza7edzd2sequencezd2nilz27zzinline_siza7eza7);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3275, BgL_auxz00_3277);
				}}}
			else
				{	/* Inline/size.scm 19 */
					BFALSE;
				}
			return
				(BgL_siza7edzd2sequencez75_bglt)
				(BGl_z52thezd2siza7edzd2sequencezd2nilz27zzinline_siza7eza7);
		}
	}



/* _sized-sequence-nil */
	obj_t BGl__siza7edzd2sequencezd2nilza7zzinline_siza7eza7(obj_t
		BgL_envz00_2906)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 19 */
			return (obj_t) (BGl_siza7edzd2sequencezd2nilza7zzinline_siza7eza7());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinline_siza7eza7()
	{
		AN_OBJECT;
		{	/* Inline/size.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_nodezd2siza7ezd2default3432zd2envz75zzinline_siza7eza7,
				BGl_nodez00zzast_nodez00, BGl_string3895z00zzinline_siza7eza7);
		}
	}



/* node-size */
	BGL_EXPORTED_DEF long BGl_nodezd2siza7ez75zzinline_siza7eza7(BgL_nodez00_bglt
		BgL_nodez00_1)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 29 */
			{	/* Inline/size.scm 29 */
				obj_t BgL_method3433z00_1875;

				{	/* Inline/size.scm 29 */
					BgL_objectz00_bglt BgL_objz00_1876;

					BgL_objz00_1876 = (BgL_objectz00_bglt) (BgL_nodez00_1);
					{	/* Inline/size.scm 29 */
						long BgL_objzd2classzd2numz00_1877;

						BgL_objzd2classzd2numz00_1877 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1876);
						{	/* Inline/size.scm 29 */
							obj_t BgL_arg2643z00_1878;

							BgL_arg2643z00_1878 =
								PROCEDURE_REF(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
								(int) (((long) 1)));
							{	/* Inline/size.scm 29 */
								obj_t BgL_arrayz00_1880;

								int BgL_offsetz00_1881;

								BgL_arrayz00_1880 = BgL_arg2643z00_1878;
								BgL_offsetz00_1881 = (int) (BgL_objzd2classzd2numz00_1877);
								{	/* Inline/size.scm 29 */
									long BgL_offsetz00_1882;

									BgL_offsetz00_1882 =
										((long) (BgL_offsetz00_1881) - OBJECT_TYPE);
									{	/* Inline/size.scm 29 */
										long BgL_modz00_1883;

										{	/* Inline/size.scm 29 */
											int BgL_arg2645z00_1884;

											BgL_arg2645z00_1884 = (int) (((long) 16));
											{	/* Inline/size.scm 29 */
												long BgL_auxz00_3292;

												BgL_auxz00_3292 = (long) (BgL_arg2645z00_1884);
												BgL_modz00_1883 =
													(BgL_offsetz00_1882 / BgL_auxz00_3292);
										}}
										{	/* Inline/size.scm 29 */
											long BgL_restz00_1885;

											{	/* Inline/size.scm 29 */
												int BgL_arg2644z00_1886;

												BgL_arg2644z00_1886 = (int) (((long) 16));
												{	/* Inline/size.scm 29 */
													long BgL_auxz00_3296;

													BgL_auxz00_3296 = (long) (BgL_arg2644z00_1886);
													BgL_restz00_1885 =
														(BgL_offsetz00_1882 % BgL_auxz00_3296);
											}}
											{	/* Inline/size.scm 29 */

												BgL_method3433z00_1875 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1880,
														(int) (BgL_modz00_1883)), (int) (BgL_restz00_1885));
				}}}}}}}}
				return
					(long)
					CINT(PROCEDURE_ENTRY(BgL_method3433z00_1875) (BgL_method3433z00_1875,
						(obj_t) (BgL_nodez00_1), BEOA));
		}}
	}



/* _node-size */
	obj_t BGl__nodezd2siza7ez75zzinline_siza7eza7(obj_t BgL_envz00_2921,
		obj_t BgL_nodez00_2922)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 29 */
			return
				BINT(BGl_nodezd2siza7ez75zzinline_siza7eza7(
					(BgL_nodez00_bglt) (BgL_nodez00_2922)));
		}
	}



/* node-size-default3432 */
	long BGl_nodezd2siza7ezd2default3432za7zzinline_siza7eza7(BgL_nodez00_bglt
		BgL_nodez00_2)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 15 */
			return
				(long) CINT(BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 4)),
					BGl_string3896z00zzinline_siza7eza7, (obj_t) (BgL_nodez00_2)));
		}
	}



/* _node-size-default3432 */
	obj_t BGl__nodezd2siza7ezd2default3432za7zzinline_siza7eza7(obj_t
		BgL_envz00_2923, obj_t BgL_nodez00_2924)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 15 */
			return
				BINT(BGl_nodezd2siza7ezd2default3432za7zzinline_siza7eza7(
					(BgL_nodez00_bglt) (BgL_nodez00_2924)));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinline_siza7eza7()
	{
		AN_OBJECT;
		{	/* Inline/size.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7, BGl_atomz00zzast_nodez00,
				BGl_proc3897z00zzinline_siza7eza7, BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7, BGl_varz00zzast_nodez00,
				BGl_proc3898z00zzinline_siza7eza7, BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_kwotez00zzast_nodez00, BGl_proc3899z00zzinline_siza7eza7,
				BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_sequencez00zzast_nodez00, BGl_proc3900z00zzinline_siza7eza7,
				BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_siza7edzd2sequencez75zzinline_siza7eza7,
				BGl_proc3901z00zzinline_siza7eza7, BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7, BGl_appz00zzast_nodez00,
				BGl_proc3902z00zzinline_siza7eza7, BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3903z00zzinline_siza7eza7,
				BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_funcallz00zzast_nodez00, BGl_proc3904z00zzinline_siza7eza7,
				BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7, BGl_castz00zzast_nodez00,
				BGl_proc3905z00zzinline_siza7eza7, BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_externz00zzast_nodez00, BGl_proc3906z00zzinline_siza7eza7,
				BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7, BGl_setqz00zzast_nodez00,
				BGl_proc3907z00zzinline_siza7eza7, BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_conditionalz00zzast_nodez00, BGl_proc3908z00zzinline_siza7eza7,
				BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7, BGl_failz00zzast_nodez00,
				BGl_proc3909z00zzinline_siza7eza7, BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_selectz00zzast_nodez00, BGl_proc3910z00zzinline_siza7eza7,
				BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_siza7edzd2selectz75zzinline_siza7eza7,
				BGl_proc3911z00zzinline_siza7eza7, BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3912z00zzinline_siza7eza7,
				BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_siza7edzd2letzd2funza7zzinline_siza7eza7,
				BGl_proc3913z00zzinline_siza7eza7, BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3914z00zzinline_siza7eza7,
				BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_siza7edzd2letzd2varza7zzinline_siza7eza7,
				BGl_proc3915z00zzinline_siza7eza7, BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3916z00zzinline_siza7eza7,
				BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3917z00zzinline_siza7eza7,
				BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3918z00zzinline_siza7eza7,
				BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3919z00zzinline_siza7eza7,
				BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3920z00zzinline_siza7eza7,
				BGl_string3895z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_siza7edzd2letzd2varza7zzinline_siza7eza7,
				BGl_proc3921z00zzinline_siza7eza7, BGl_string3922z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_siza7edzd2letzd2varza7zzinline_siza7eza7,
				BGl_proc3923z00zzinline_siza7eza7, BGl_string3924z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_siza7edzd2letzd2funza7zzinline_siza7eza7,
				BGl_proc3925z00zzinline_siza7eza7, BGl_string3922z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_siza7edzd2letzd2funza7zzinline_siza7eza7,
				BGl_proc3926z00zzinline_siza7eza7, BGl_string3924z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_siza7edzd2selectz75zzinline_siza7eza7,
				BGl_proc3927z00zzinline_siza7eza7, BGl_string3922z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_siza7edzd2selectz75zzinline_siza7eza7,
				BGl_proc3928z00zzinline_siza7eza7, BGl_string3924z00zzinline_siza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_siza7edzd2sequencez75zzinline_siza7eza7,
				BGl_proc3929z00zzinline_siza7eza7, BGl_string3922z00zzinline_siza7eza7);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_siza7edzd2sequencez75zzinline_siza7eza7,
				BGl_proc3930z00zzinline_siza7eza7, BGl_string3924z00zzinline_siza7eza7);
		}
	}



/* struct+object->objec3499 */
	obj_t BGl_structzb2objectzd2ze3objec3499z83zzinline_siza7eza7(obj_t
		BgL_envz00_2962, obj_t BgL_oz00_2963, obj_t BgL_sz00_2964)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 19 */
			{
				BgL_siza7edzd2sequencez75_bglt BgL_oz00_1668;

				obj_t BgL_sz00_1669;

				{	/* Inline/size.scm 19 */
					BgL_siza7edzd2sequencez75_bglt BgL_auxz00_3349;

					BgL_oz00_1668 = (BgL_siza7edzd2sequencez75_bglt) (BgL_oz00_2963);
					BgL_sz00_1669 = BgL_sz00_2964;
					{

						{	/* Inline/size.scm 19 */
							obj_t BgL_old3261z00_1672;

							obj_t BgL_aux3262z00_1673;

							{	/* Inline/size.scm 19 */
								obj_t BgL_nextzd2method3498zd2_1678;

								BgL_nextzd2method3498zd2_1678 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1668),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_siza7edzd2sequencez75zzinline_siza7eza7);
								if (PROCEDUREP(BgL_nextzd2method3498zd2_1678))
									{	/* Inline/size.scm 19 */
										BgL_old3261z00_1672 =
											PROCEDURE_ENTRY(BgL_nextzd2method3498zd2_1678)
											(BgL_nextzd2method3498zd2_1678, (obj_t) (BgL_oz00_1668),
											BgL_sz00_1669, BEOA);
									}
								else
									{	/* Inline/size.scm 19 */
										BgL_old3261z00_1672 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1668), BgL_sz00_1669));
									}
							}
							BgL_aux3262z00_1673 =
								STRUCT_REF(BgL_sz00_1669, (int) (((long) 0)));
							{	/* Inline/size.scm 19 */
								BgL_siza7edzd2sequencez75_bglt BgL_new3263z00_1674;

								BgL_new3263z00_1674 =
									((BgL_siza7edzd2sequencez75_bglt) (BgL_old3261z00_1672));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3263z00_1674),
									BGl_classzd2numzd2zz__objectz00
									(BGl_siza7edzd2sequencez75zzinline_siza7eza7));
								{	/* Inline/size.scm 19 */
									BgL_siza7edzd2sequencez75_bglt BgL_arg3766z00_1676;

									{	/* Inline/size.scm 19 */
										obj_t BgL_arg3767z00_1677;

										BgL_arg3767z00_1677 =
											STRUCT_REF(BgL_aux3262z00_1673, (int) (((long) 0)));
										{	/* Inline/size.scm 19 */
											BgL_siza7edzd2sequencez75_bglt BgL_res3891z00_2903;

											{	/* Inline/size.scm 19 */
												long BgL_siza7e3242za7_2897;

												BgL_siza7e3242za7_2897 =
													(long) CINT(BgL_arg3767z00_1677);
												{	/* Inline/size.scm 19 */
													BgL_siza7edzd2sequencez75_bglt BgL_new3243z00_2898;

													BgL_new3243z00_2898 =
														((BgL_siza7edzd2sequencez75_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_siza7edzd2sequencez75_bgl))));
													{	/* Inline/size.scm 19 */
														BgL_siza7edzd2sequencez75_bglt BgL_res3890z00_2902;

														{	/* Inline/size.scm 19 */
															BgL_siza7edzd2sequencez75_bglt
																BgL_new3254z00_2899;
															BgL_new3254z00_2899 = BgL_new3243z00_2898;
															{	/* Inline/size.scm 19 */
																long BgL_siza7e3253za7_2901;

																BgL_siza7e3253za7_2901 = BgL_siza7e3242za7_2897;
																((((BgL_siza7edzd2sequencez75_bglt)
																			CREF(BgL_new3254z00_2899))->
																		BgL_siza7eza7) =
																	((long) BgL_siza7e3253za7_2901), BUNSPEC);
																BgL_res3890z00_2902 = BgL_new3254z00_2899;
														}} BgL_res3890z00_2902;
													}
													BgL_res3891z00_2903 = BgL_new3243z00_2898;
											}}
											BgL_arg3766z00_1676 = BgL_res3891z00_2903;
									}}
									{	/* Inline/size.scm 19 */
										obj_t BgL_auxz00_3373;

										BgL_objectz00_bglt BgL_auxz00_3371;

										BgL_auxz00_3373 = (obj_t) (BgL_arg3766z00_1676);
										BgL_auxz00_3371 =
											(BgL_objectz00_bglt) (BgL_new3263z00_1674);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3371, BgL_auxz00_3373);
								}}
								BgL_auxz00_3349 = BgL_new3263z00_1674;
					}}}
					return (obj_t) (BgL_auxz00_3349);
				}
			}
		}
	}



/* object->struct-sized3497 */
	obj_t BGl_objectzd2ze3structzd2siza7ed3497z44zzinline_siza7eza7(obj_t
		BgL_envz00_2965, obj_t BgL_obj3258z00_2966)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 19 */
			{
				BgL_siza7edzd2sequencez75_bglt BgL_obj3258z00_1658;

				BgL_obj3258z00_1658 =
					(BgL_siza7edzd2sequencez75_bglt) (BgL_obj3258z00_2966);
				{

					{	/* Inline/size.scm 19 */
						obj_t BgL_res3259z00_1661;

						{	/* Inline/size.scm 19 */
							obj_t BgL_nextzd2method3496zd2_1666;

							BgL_nextzd2method3496zd2_1666 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3258z00_1658),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_siza7edzd2sequencez75zzinline_siza7eza7);
							if (PROCEDUREP(BgL_nextzd2method3496zd2_1666))
								{	/* Inline/size.scm 19 */
									BgL_res3259z00_1661 =
										PROCEDURE_ENTRY(BgL_nextzd2method3496zd2_1666)
										(BgL_nextzd2method3496zd2_1666,
										(obj_t) (BgL_obj3258z00_1658), BEOA);
								}
							else
								{	/* Inline/size.scm 19 */
									BgL_res3259z00_1661 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3258z00_1658));
								}
						}
						{	/* Inline/size.scm 19 */
							obj_t BgL_aux3260z00_1662;

							{	/* Inline/size.scm 19 */
								obj_t BgL_keyz00_2874;

								BgL_keyz00_2874 = CNST_TABLE_REF(((long) 0));
								BgL_aux3260z00_1662 =
									make_struct(BgL_keyz00_2874, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Inline/size.scm 19 */
								long BgL_arg3762z00_1664;

								{
									obj_t BgL_auxz00_3390;

									{	/* Inline/size.scm 19 */
										BgL_objectz00_bglt BgL_auxz00_3391;

										BgL_auxz00_3391 =
											(BgL_objectz00_bglt) (BgL_obj3258z00_1658);
										BgL_auxz00_3390 = BGL_OBJECT_WIDENING(BgL_auxz00_3391);
									}
									BgL_arg3762z00_1664 =
										(((BgL_siza7edzd2sequencez75_bglt) CREF(BgL_auxz00_3390))->
										BgL_siza7eza7);
								}
								{	/* Inline/size.scm 19 */
									obj_t BgL_auxz00_3397;

									int BgL_auxz00_3395;

									BgL_auxz00_3397 = BINT(BgL_arg3762z00_1664);
									BgL_auxz00_3395 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3260z00_1662, BgL_auxz00_3395,
										BgL_auxz00_3397);
							}}
							{	/* Inline/size.scm 19 */
								int BgL_auxz00_3400;

								BgL_auxz00_3400 = (int) (((long) 0));
								STRUCT_SET(BgL_res3259z00_1661, BgL_auxz00_3400,
									BgL_aux3260z00_1662);
							}
							{	/* Inline/size.scm 19 */
								obj_t BgL_auxz00_3403;

								BgL_auxz00_3403 = STRUCT_KEY(BgL_res3259z00_1661);
								STRUCT_KEY_SET(BgL_aux3260z00_1662, BgL_auxz00_3403);
							}
							{	/* Inline/size.scm 19 */
								obj_t BgL_kz00_2889;

								BgL_kz00_2889 = CNST_TABLE_REF(((long) 0));
								STRUCT_KEY_SET(BgL_res3259z00_1661, BgL_kz00_2889);
							}
							return BgL_res3259z00_1661;
						}
					}
				}
			}
		}
	}



/* struct+object->objec3495 */
	obj_t BGl_structzb2objectzd2ze3objec3495z83zzinline_siza7eza7(obj_t
		BgL_envz00_2967, obj_t BgL_oz00_2968, obj_t BgL_sz00_2969)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 20 */
			{
				BgL_siza7edzd2selectz75_bglt BgL_oz00_1646;

				obj_t BgL_sz00_1647;

				{	/* Inline/size.scm 20 */
					BgL_siza7edzd2selectz75_bglt BgL_auxz00_3409;

					BgL_oz00_1646 = (BgL_siza7edzd2selectz75_bglt) (BgL_oz00_2968);
					BgL_sz00_1647 = BgL_sz00_2969;
					{

						{	/* Inline/size.scm 20 */
							obj_t BgL_old3300z00_1650;

							obj_t BgL_aux3301z00_1651;

							{	/* Inline/size.scm 20 */
								obj_t BgL_nextzd2method3494zd2_1656;

								BgL_nextzd2method3494zd2_1656 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1646),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_siza7edzd2selectz75zzinline_siza7eza7);
								if (PROCEDUREP(BgL_nextzd2method3494zd2_1656))
									{	/* Inline/size.scm 20 */
										BgL_old3300z00_1650 =
											PROCEDURE_ENTRY(BgL_nextzd2method3494zd2_1656)
											(BgL_nextzd2method3494zd2_1656, (obj_t) (BgL_oz00_1646),
											BgL_sz00_1647, BEOA);
									}
								else
									{	/* Inline/size.scm 20 */
										BgL_old3300z00_1650 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1646), BgL_sz00_1647));
									}
							}
							BgL_aux3301z00_1651 =
								STRUCT_REF(BgL_sz00_1647, (int) (((long) 0)));
							{	/* Inline/size.scm 20 */
								BgL_siza7edzd2selectz75_bglt BgL_new3302z00_1652;

								BgL_new3302z00_1652 =
									((BgL_siza7edzd2selectz75_bglt) (BgL_old3300z00_1650));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3302z00_1652),
									BGl_classzd2numzd2zz__objectz00
									(BGl_siza7edzd2selectz75zzinline_siza7eza7));
								{	/* Inline/size.scm 20 */
									BgL_siza7edzd2selectz75_bglt BgL_arg3758z00_1654;

									{	/* Inline/size.scm 20 */
										obj_t BgL_arg3759z00_1655;

										BgL_arg3759z00_1655 =
											STRUCT_REF(BgL_aux3301z00_1651, (int) (((long) 0)));
										{	/* Inline/size.scm 20 */
											BgL_siza7edzd2selectz75_bglt BgL_res3888z00_2872;

											{	/* Inline/size.scm 20 */
												long BgL_siza7e3279za7_2866;

												BgL_siza7e3279za7_2866 =
													(long) CINT(BgL_arg3759z00_1655);
												{	/* Inline/size.scm 20 */
													BgL_siza7edzd2selectz75_bglt BgL_new3280z00_2867;

													BgL_new3280z00_2867 =
														((BgL_siza7edzd2selectz75_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_siza7edzd2selectz75_bgl))));
													{	/* Inline/size.scm 20 */
														BgL_siza7edzd2selectz75_bglt BgL_res3887z00_2871;

														{	/* Inline/size.scm 20 */
															BgL_siza7edzd2selectz75_bglt BgL_new3293z00_2868;

															BgL_new3293z00_2868 = BgL_new3280z00_2867;
															{	/* Inline/size.scm 20 */
																long BgL_siza7e3292za7_2870;

																BgL_siza7e3292za7_2870 = BgL_siza7e3279za7_2866;
																((((BgL_siza7edzd2selectz75_bglt)
																			CREF(BgL_new3293z00_2868))->
																		BgL_siza7eza7) =
																	((long) BgL_siza7e3292za7_2870), BUNSPEC);
																BgL_res3887z00_2871 = BgL_new3293z00_2868;
														}} BgL_res3887z00_2871;
													}
													BgL_res3888z00_2872 = BgL_new3280z00_2867;
											}}
											BgL_arg3758z00_1654 = BgL_res3888z00_2872;
									}}
									{	/* Inline/size.scm 20 */
										obj_t BgL_auxz00_3433;

										BgL_objectz00_bglt BgL_auxz00_3431;

										BgL_auxz00_3433 = (obj_t) (BgL_arg3758z00_1654);
										BgL_auxz00_3431 =
											(BgL_objectz00_bglt) (BgL_new3302z00_1652);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3431, BgL_auxz00_3433);
								}}
								BgL_auxz00_3409 = BgL_new3302z00_1652;
					}}}
					return (obj_t) (BgL_auxz00_3409);
				}
			}
		}
	}



/* object->struct-sized3493 */
	obj_t BGl_objectzd2ze3structzd2siza7ed3493z44zzinline_siza7eza7(obj_t
		BgL_envz00_2970, obj_t BgL_obj3297z00_2971)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 20 */
			{
				BgL_siza7edzd2selectz75_bglt BgL_obj3297z00_1636;

				BgL_obj3297z00_1636 =
					(BgL_siza7edzd2selectz75_bglt) (BgL_obj3297z00_2971);
				{

					{	/* Inline/size.scm 20 */
						obj_t BgL_res3298z00_1639;

						{	/* Inline/size.scm 20 */
							obj_t BgL_nextzd2method3492zd2_1644;

							BgL_nextzd2method3492zd2_1644 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3297z00_1636),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_siza7edzd2selectz75zzinline_siza7eza7);
							if (PROCEDUREP(BgL_nextzd2method3492zd2_1644))
								{	/* Inline/size.scm 20 */
									BgL_res3298z00_1639 =
										PROCEDURE_ENTRY(BgL_nextzd2method3492zd2_1644)
										(BgL_nextzd2method3492zd2_1644,
										(obj_t) (BgL_obj3297z00_1636), BEOA);
								}
							else
								{	/* Inline/size.scm 20 */
									BgL_res3298z00_1639 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3297z00_1636));
								}
						}
						{	/* Inline/size.scm 20 */
							obj_t BgL_aux3299z00_1640;

							{	/* Inline/size.scm 20 */
								obj_t BgL_keyz00_2843;

								BgL_keyz00_2843 = CNST_TABLE_REF(((long) 1));
								BgL_aux3299z00_1640 =
									make_struct(BgL_keyz00_2843, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Inline/size.scm 20 */
								long BgL_arg3754z00_1642;

								{
									obj_t BgL_auxz00_3450;

									{	/* Inline/size.scm 20 */
										BgL_objectz00_bglt BgL_auxz00_3451;

										BgL_auxz00_3451 =
											(BgL_objectz00_bglt) (BgL_obj3297z00_1636);
										BgL_auxz00_3450 = BGL_OBJECT_WIDENING(BgL_auxz00_3451);
									}
									BgL_arg3754z00_1642 =
										(((BgL_siza7edzd2selectz75_bglt) CREF(BgL_auxz00_3450))->
										BgL_siza7eza7);
								}
								{	/* Inline/size.scm 20 */
									obj_t BgL_auxz00_3457;

									int BgL_auxz00_3455;

									BgL_auxz00_3457 = BINT(BgL_arg3754z00_1642);
									BgL_auxz00_3455 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3299z00_1640, BgL_auxz00_3455,
										BgL_auxz00_3457);
							}}
							{	/* Inline/size.scm 20 */
								int BgL_auxz00_3460;

								BgL_auxz00_3460 = (int) (((long) 0));
								STRUCT_SET(BgL_res3298z00_1639, BgL_auxz00_3460,
									BgL_aux3299z00_1640);
							}
							{	/* Inline/size.scm 20 */
								obj_t BgL_auxz00_3463;

								BgL_auxz00_3463 = STRUCT_KEY(BgL_res3298z00_1639);
								STRUCT_KEY_SET(BgL_aux3299z00_1640, BgL_auxz00_3463);
							}
							{	/* Inline/size.scm 20 */
								obj_t BgL_kz00_2858;

								BgL_kz00_2858 = CNST_TABLE_REF(((long) 1));
								STRUCT_KEY_SET(BgL_res3298z00_1639, BgL_kz00_2858);
							}
							return BgL_res3298z00_1639;
						}
					}
				}
			}
		}
	}



/* struct+object->objec3491 */
	obj_t BGl_structzb2objectzd2ze3objec3491z83zzinline_siza7eza7(obj_t
		BgL_envz00_2972, obj_t BgL_oz00_2973, obj_t BgL_sz00_2974)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 21 */
			{
				BgL_siza7edzd2letzd2funza7_bglt BgL_oz00_1624;

				obj_t BgL_sz00_1625;

				{	/* Inline/size.scm 21 */
					BgL_siza7edzd2letzd2funza7_bglt BgL_auxz00_3469;

					BgL_oz00_1624 = (BgL_siza7edzd2letzd2funza7_bglt) (BgL_oz00_2973);
					BgL_sz00_1625 = BgL_sz00_2974;
					{

						{	/* Inline/size.scm 21 */
							obj_t BgL_old3341z00_1628;

							obj_t BgL_aux3342z00_1629;

							{	/* Inline/size.scm 21 */
								obj_t BgL_nextzd2method3490zd2_1634;

								BgL_nextzd2method3490zd2_1634 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1624),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_siza7edzd2letzd2funza7zzinline_siza7eza7);
								if (PROCEDUREP(BgL_nextzd2method3490zd2_1634))
									{	/* Inline/size.scm 21 */
										BgL_old3341z00_1628 =
											PROCEDURE_ENTRY(BgL_nextzd2method3490zd2_1634)
											(BgL_nextzd2method3490zd2_1634, (obj_t) (BgL_oz00_1624),
											BgL_sz00_1625, BEOA);
									}
								else
									{	/* Inline/size.scm 21 */
										BgL_old3341z00_1628 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1624), BgL_sz00_1625));
									}
							}
							BgL_aux3342z00_1629 =
								STRUCT_REF(BgL_sz00_1625, (int) (((long) 0)));
							{	/* Inline/size.scm 21 */
								BgL_siza7edzd2letzd2funza7_bglt BgL_new3343z00_1630;

								BgL_new3343z00_1630 =
									((BgL_siza7edzd2letzd2funza7_bglt) (BgL_old3341z00_1628));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3343z00_1630),
									BGl_classzd2numzd2zz__objectz00
									(BGl_siza7edzd2letzd2funza7zzinline_siza7eza7));
								{	/* Inline/size.scm 21 */
									BgL_siza7edzd2letzd2funza7_bglt BgL_arg3750z00_1632;

									{	/* Inline/size.scm 21 */
										obj_t BgL_arg3751z00_1633;

										BgL_arg3751z00_1633 =
											STRUCT_REF(BgL_aux3342z00_1629, (int) (((long) 0)));
										{	/* Inline/size.scm 21 */
											BgL_siza7edzd2letzd2funza7_bglt BgL_res3885z00_2841;

											{	/* Inline/size.scm 21 */
												long BgL_siza7e3321za7_2835;

												BgL_siza7e3321za7_2835 =
													(long) CINT(BgL_arg3751z00_1633);
												{	/* Inline/size.scm 21 */
													BgL_siza7edzd2letzd2funza7_bglt BgL_new3322z00_2836;

													BgL_new3322z00_2836 =
														((BgL_siza7edzd2letzd2funza7_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_siza7edzd2letzd2funza7_bgl))));
													{	/* Inline/size.scm 21 */
														BgL_siza7edzd2letzd2funza7_bglt BgL_res3884z00_2840;

														{	/* Inline/size.scm 21 */
															BgL_siza7edzd2letzd2funza7_bglt
																BgL_new3334z00_2837;
															BgL_new3334z00_2837 = BgL_new3322z00_2836;
															{	/* Inline/size.scm 21 */
																long BgL_siza7e3333za7_2839;

																BgL_siza7e3333za7_2839 = BgL_siza7e3321za7_2835;
																((((BgL_siza7edzd2letzd2funza7_bglt)
																			CREF(BgL_new3334z00_2837))->
																		BgL_siza7eza7) =
																	((long) BgL_siza7e3333za7_2839), BUNSPEC);
																BgL_res3884z00_2840 = BgL_new3334z00_2837;
														}} BgL_res3884z00_2840;
													}
													BgL_res3885z00_2841 = BgL_new3322z00_2836;
											}}
											BgL_arg3750z00_1632 = BgL_res3885z00_2841;
									}}
									{	/* Inline/size.scm 21 */
										obj_t BgL_auxz00_3493;

										BgL_objectz00_bglt BgL_auxz00_3491;

										BgL_auxz00_3493 = (obj_t) (BgL_arg3750z00_1632);
										BgL_auxz00_3491 =
											(BgL_objectz00_bglt) (BgL_new3343z00_1630);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3491, BgL_auxz00_3493);
								}}
								BgL_auxz00_3469 = BgL_new3343z00_1630;
					}}}
					return (obj_t) (BgL_auxz00_3469);
				}
			}
		}
	}



/* object->struct-sized3489 */
	obj_t BGl_objectzd2ze3structzd2siza7ed3489z44zzinline_siza7eza7(obj_t
		BgL_envz00_2975, obj_t BgL_obj3338z00_2976)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 21 */
			{
				BgL_siza7edzd2letzd2funza7_bglt BgL_obj3338z00_1614;

				BgL_obj3338z00_1614 =
					(BgL_siza7edzd2letzd2funza7_bglt) (BgL_obj3338z00_2976);
				{

					{	/* Inline/size.scm 21 */
						obj_t BgL_res3339z00_1617;

						{	/* Inline/size.scm 21 */
							obj_t BgL_nextzd2method3488zd2_1622;

							BgL_nextzd2method3488zd2_1622 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3338z00_1614),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_siza7edzd2letzd2funza7zzinline_siza7eza7);
							if (PROCEDUREP(BgL_nextzd2method3488zd2_1622))
								{	/* Inline/size.scm 21 */
									BgL_res3339z00_1617 =
										PROCEDURE_ENTRY(BgL_nextzd2method3488zd2_1622)
										(BgL_nextzd2method3488zd2_1622,
										(obj_t) (BgL_obj3338z00_1614), BEOA);
								}
							else
								{	/* Inline/size.scm 21 */
									BgL_res3339z00_1617 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3338z00_1614));
								}
						}
						{	/* Inline/size.scm 21 */
							obj_t BgL_aux3340z00_1618;

							{	/* Inline/size.scm 21 */
								obj_t BgL_keyz00_2812;

								BgL_keyz00_2812 = CNST_TABLE_REF(((long) 2));
								BgL_aux3340z00_1618 =
									make_struct(BgL_keyz00_2812, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Inline/size.scm 21 */
								long BgL_arg3746z00_1620;

								{
									obj_t BgL_auxz00_3510;

									{	/* Inline/size.scm 21 */
										BgL_objectz00_bglt BgL_auxz00_3511;

										BgL_auxz00_3511 =
											(BgL_objectz00_bglt) (BgL_obj3338z00_1614);
										BgL_auxz00_3510 = BGL_OBJECT_WIDENING(BgL_auxz00_3511);
									}
									BgL_arg3746z00_1620 =
										(((BgL_siza7edzd2letzd2funza7_bglt) CREF(BgL_auxz00_3510))->
										BgL_siza7eza7);
								}
								{	/* Inline/size.scm 21 */
									obj_t BgL_auxz00_3517;

									int BgL_auxz00_3515;

									BgL_auxz00_3517 = BINT(BgL_arg3746z00_1620);
									BgL_auxz00_3515 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3340z00_1618, BgL_auxz00_3515,
										BgL_auxz00_3517);
							}}
							{	/* Inline/size.scm 21 */
								int BgL_auxz00_3520;

								BgL_auxz00_3520 = (int) (((long) 0));
								STRUCT_SET(BgL_res3339z00_1617, BgL_auxz00_3520,
									BgL_aux3340z00_1618);
							}
							{	/* Inline/size.scm 21 */
								obj_t BgL_auxz00_3523;

								BgL_auxz00_3523 = STRUCT_KEY(BgL_res3339z00_1617);
								STRUCT_KEY_SET(BgL_aux3340z00_1618, BgL_auxz00_3523);
							}
							{	/* Inline/size.scm 21 */
								obj_t BgL_kz00_2827;

								BgL_kz00_2827 = CNST_TABLE_REF(((long) 2));
								STRUCT_KEY_SET(BgL_res3339z00_1617, BgL_kz00_2827);
							}
							return BgL_res3339z00_1617;
						}
					}
				}
			}
		}
	}



/* struct+object->objec3487 */
	obj_t BGl_structzb2objectzd2ze3objec3487z83zzinline_siza7eza7(obj_t
		BgL_envz00_2977, obj_t BgL_oz00_2978, obj_t BgL_sz00_2979)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 22 */
			{
				BgL_siza7edzd2letzd2varza7_bglt BgL_oz00_1602;

				obj_t BgL_sz00_1603;

				{	/* Inline/size.scm 22 */
					BgL_siza7edzd2letzd2varza7_bglt BgL_auxz00_3529;

					BgL_oz00_1602 = (BgL_siza7edzd2letzd2varza7_bglt) (BgL_oz00_2978);
					BgL_sz00_1603 = BgL_sz00_2979;
					{

						{	/* Inline/size.scm 22 */
							obj_t BgL_old3385z00_1606;

							obj_t BgL_aux3386z00_1607;

							{	/* Inline/size.scm 22 */
								obj_t BgL_nextzd2method3486zd2_1612;

								BgL_nextzd2method3486zd2_1612 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1602),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_siza7edzd2letzd2varza7zzinline_siza7eza7);
								if (PROCEDUREP(BgL_nextzd2method3486zd2_1612))
									{	/* Inline/size.scm 22 */
										BgL_old3385z00_1606 =
											PROCEDURE_ENTRY(BgL_nextzd2method3486zd2_1612)
											(BgL_nextzd2method3486zd2_1612, (obj_t) (BgL_oz00_1602),
											BgL_sz00_1603, BEOA);
									}
								else
									{	/* Inline/size.scm 22 */
										BgL_old3385z00_1606 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1602), BgL_sz00_1603));
									}
							}
							BgL_aux3386z00_1607 =
								STRUCT_REF(BgL_sz00_1603, (int) (((long) 0)));
							{	/* Inline/size.scm 22 */
								BgL_siza7edzd2letzd2varza7_bglt BgL_new3387z00_1608;

								BgL_new3387z00_1608 =
									((BgL_siza7edzd2letzd2varza7_bglt) (BgL_old3385z00_1606));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3387z00_1608),
									BGl_classzd2numzd2zz__objectz00
									(BGl_siza7edzd2letzd2varza7zzinline_siza7eza7));
								{	/* Inline/size.scm 22 */
									BgL_siza7edzd2letzd2varza7_bglt BgL_arg3741z00_1610;

									{	/* Inline/size.scm 22 */
										obj_t BgL_arg3742z00_1611;

										BgL_arg3742z00_1611 =
											STRUCT_REF(BgL_aux3386z00_1607, (int) (((long) 0)));
										{	/* Inline/size.scm 22 */
											BgL_siza7edzd2letzd2varza7_bglt BgL_res3882z00_2810;

											{	/* Inline/size.scm 22 */
												long BgL_siza7e3364za7_2804;

												BgL_siza7e3364za7_2804 =
													(long) CINT(BgL_arg3742z00_1611);
												{	/* Inline/size.scm 22 */
													BgL_siza7edzd2letzd2varza7_bglt BgL_new3365z00_2805;

													BgL_new3365z00_2805 =
														((BgL_siza7edzd2letzd2varza7_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_siza7edzd2letzd2varza7_bgl))));
													{	/* Inline/size.scm 22 */
														BgL_siza7edzd2letzd2varza7_bglt BgL_res3881z00_2809;

														{	/* Inline/size.scm 22 */
															BgL_siza7edzd2letzd2varza7_bglt
																BgL_new3378z00_2806;
															BgL_new3378z00_2806 = BgL_new3365z00_2805;
															{	/* Inline/size.scm 22 */
																long BgL_siza7e3377za7_2808;

																BgL_siza7e3377za7_2808 = BgL_siza7e3364za7_2804;
																((((BgL_siza7edzd2letzd2varza7_bglt)
																			CREF(BgL_new3378z00_2806))->
																		BgL_siza7eza7) =
																	((long) BgL_siza7e3377za7_2808), BUNSPEC);
																BgL_res3881z00_2809 = BgL_new3378z00_2806;
														}} BgL_res3881z00_2809;
													}
													BgL_res3882z00_2810 = BgL_new3365z00_2805;
											}}
											BgL_arg3741z00_1610 = BgL_res3882z00_2810;
									}}
									{	/* Inline/size.scm 22 */
										obj_t BgL_auxz00_3553;

										BgL_objectz00_bglt BgL_auxz00_3551;

										BgL_auxz00_3553 = (obj_t) (BgL_arg3741z00_1610);
										BgL_auxz00_3551 =
											(BgL_objectz00_bglt) (BgL_new3387z00_1608);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3551, BgL_auxz00_3553);
								}}
								BgL_auxz00_3529 = BgL_new3387z00_1608;
					}}}
					return (obj_t) (BgL_auxz00_3529);
				}
			}
		}
	}



/* object->struct-sized3485 */
	obj_t BGl_objectzd2ze3structzd2siza7ed3485z44zzinline_siza7eza7(obj_t
		BgL_envz00_2980, obj_t BgL_obj3382z00_2981)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 22 */
			{
				BgL_siza7edzd2letzd2varza7_bglt BgL_obj3382z00_1592;

				BgL_obj3382z00_1592 =
					(BgL_siza7edzd2letzd2varza7_bglt) (BgL_obj3382z00_2981);
				{

					{	/* Inline/size.scm 22 */
						obj_t BgL_res3383z00_1595;

						{	/* Inline/size.scm 22 */
							obj_t BgL_nextzd2method3484zd2_1600;

							BgL_nextzd2method3484zd2_1600 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3382z00_1592),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_siza7edzd2letzd2varza7zzinline_siza7eza7);
							if (PROCEDUREP(BgL_nextzd2method3484zd2_1600))
								{	/* Inline/size.scm 22 */
									BgL_res3383z00_1595 =
										PROCEDURE_ENTRY(BgL_nextzd2method3484zd2_1600)
										(BgL_nextzd2method3484zd2_1600,
										(obj_t) (BgL_obj3382z00_1592), BEOA);
								}
							else
								{	/* Inline/size.scm 22 */
									BgL_res3383z00_1595 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3382z00_1592));
								}
						}
						{	/* Inline/size.scm 22 */
							obj_t BgL_aux3384z00_1596;

							{	/* Inline/size.scm 22 */
								obj_t BgL_keyz00_2781;

								BgL_keyz00_2781 = CNST_TABLE_REF(((long) 3));
								BgL_aux3384z00_1596 =
									make_struct(BgL_keyz00_2781, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Inline/size.scm 22 */
								long BgL_arg3737z00_1598;

								{
									obj_t BgL_auxz00_3570;

									{	/* Inline/size.scm 22 */
										BgL_objectz00_bglt BgL_auxz00_3571;

										BgL_auxz00_3571 =
											(BgL_objectz00_bglt) (BgL_obj3382z00_1592);
										BgL_auxz00_3570 = BGL_OBJECT_WIDENING(BgL_auxz00_3571);
									}
									BgL_arg3737z00_1598 =
										(((BgL_siza7edzd2letzd2varza7_bglt) CREF(BgL_auxz00_3570))->
										BgL_siza7eza7);
								}
								{	/* Inline/size.scm 22 */
									obj_t BgL_auxz00_3577;

									int BgL_auxz00_3575;

									BgL_auxz00_3577 = BINT(BgL_arg3737z00_1598);
									BgL_auxz00_3575 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3384z00_1596, BgL_auxz00_3575,
										BgL_auxz00_3577);
							}}
							{	/* Inline/size.scm 22 */
								int BgL_auxz00_3580;

								BgL_auxz00_3580 = (int) (((long) 0));
								STRUCT_SET(BgL_res3383z00_1595, BgL_auxz00_3580,
									BgL_aux3384z00_1596);
							}
							{	/* Inline/size.scm 22 */
								obj_t BgL_auxz00_3583;

								BgL_auxz00_3583 = STRUCT_KEY(BgL_res3383z00_1595);
								STRUCT_KEY_SET(BgL_aux3384z00_1596, BgL_auxz00_3583);
							}
							{	/* Inline/size.scm 22 */
								obj_t BgL_kz00_2796;

								BgL_kz00_2796 = CNST_TABLE_REF(((long) 3));
								STRUCT_KEY_SET(BgL_res3383z00_1595, BgL_kz00_2796);
							}
							return BgL_res3383z00_1595;
						}
					}
				}
			}
		}
	}



/* node-size-box-set!3483 */
	obj_t BGl_nodezd2siza7ezd2boxzd2setz123483z67zzinline_siza7eza7(obj_t
		BgL_envz00_2982, obj_t BgL_nodez00_2983)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 225 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1584;

				{	/* Inline/size.scm 226 */
					long BgL_auxz00_3589;

					BgL_nodez00_1584 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2983);
					{	/* Inline/size.scm 226 */
						long BgL_arg3733z00_1588;

						{	/* Inline/size.scm 226 */
							BgL_nodez00_bglt BgL_arg3734z00_1589;

							BgL_arg3734z00_1589 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1584))->
								BgL_valuez00);
							{	/* Inline/size.scm 226 */
								long BgL_res3879z00_2778;

								{	/* Inline/size.scm 226 */
									obj_t BgL_method3433z00_2753;

									{	/* Inline/size.scm 226 */
										BgL_objectz00_bglt BgL_objz00_2754;

										BgL_objz00_2754 =
											(BgL_objectz00_bglt) (BgL_arg3734z00_1589);
										{	/* Inline/size.scm 226 */
											long BgL_objzd2classzd2numz00_2755;

											BgL_objzd2classzd2numz00_2755 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2754);
											{	/* Inline/size.scm 226 */
												obj_t BgL_arg2643z00_2756;

												BgL_arg2643z00_2756 =
													PROCEDURE_REF
													(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
													(int) (((long) 1)));
												{	/* Inline/size.scm 226 */
													obj_t BgL_arrayz00_2758;

													int BgL_offsetz00_2759;

													BgL_arrayz00_2758 = BgL_arg2643z00_2756;
													BgL_offsetz00_2759 =
														(int) (BgL_objzd2classzd2numz00_2755);
													{	/* Inline/size.scm 226 */
														long BgL_offsetz00_2760;

														BgL_offsetz00_2760 =
															((long) (BgL_offsetz00_2759) - OBJECT_TYPE);
														{	/* Inline/size.scm 226 */
															long BgL_modz00_2761;

															{	/* Inline/size.scm 226 */
																int BgL_arg2645z00_2762;

																BgL_arg2645z00_2762 = (int) (((long) 16));
																{	/* Inline/size.scm 226 */
																	long BgL_auxz00_3599;

																	BgL_auxz00_3599 =
																		(long) (BgL_arg2645z00_2762);
																	BgL_modz00_2761 =
																		(BgL_offsetz00_2760 / BgL_auxz00_3599);
															}}
															{	/* Inline/size.scm 226 */
																long BgL_restz00_2763;

																{	/* Inline/size.scm 226 */
																	int BgL_arg2644z00_2764;

																	BgL_arg2644z00_2764 = (int) (((long) 16));
																	{	/* Inline/size.scm 226 */
																		long BgL_auxz00_3603;

																		BgL_auxz00_3603 =
																			(long) (BgL_arg2644z00_2764);
																		BgL_restz00_2763 =
																			(BgL_offsetz00_2760 % BgL_auxz00_3603);
																}}
																{	/* Inline/size.scm 226 */

																	BgL_method3433z00_2753 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2758,
																			(int) (BgL_modz00_2761)),
																		(int) (BgL_restz00_2763));
									}}}}}}}}
									BgL_res3879z00_2778 =
										(long)
										CINT(PROCEDURE_ENTRY(BgL_method3433z00_2753)
										(BgL_method3433z00_2753, (obj_t) (BgL_arg3734z00_1589),
											BEOA));
								}
								BgL_arg3733z00_1588 = BgL_res3879z00_2778;
						}}
						BgL_auxz00_3589 = (((long) 2) + BgL_arg3733z00_1588);
					}
					return BINT(BgL_auxz00_3589);
				}
			}
		}
	}



/* node-size-box-ref3481 */
	obj_t BGl_nodezd2siza7ezd2boxzd2ref3481z75zzinline_siza7eza7(obj_t
		BgL_envz00_2984, obj_t BgL_nodez00_2985)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 219 */
			return BINT(((long) 2));
		}
	}



/* node-size-make-box3479 */
	obj_t BGl_nodezd2siza7ezd2makezd2box3479z75zzinline_siza7eza7(obj_t
		BgL_envz00_2986, obj_t BgL_nodez00_2987)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 213 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1571;

				{	/* Inline/size.scm 214 */
					long BgL_auxz00_3618;

					BgL_nodez00_1571 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2987);
					{	/* Inline/size.scm 214 */
						long BgL_arg3728z00_1575;

						{	/* Inline/size.scm 214 */
							BgL_nodez00_bglt BgL_arg3729z00_1576;

							BgL_arg3729z00_1576 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1571))->
								BgL_valuez00);
							{	/* Inline/size.scm 214 */
								long BgL_res3876z00_2748;

								{	/* Inline/size.scm 214 */
									obj_t BgL_method3433z00_2723;

									{	/* Inline/size.scm 214 */
										BgL_objectz00_bglt BgL_objz00_2724;

										BgL_objz00_2724 =
											(BgL_objectz00_bglt) (BgL_arg3729z00_1576);
										{	/* Inline/size.scm 214 */
											long BgL_objzd2classzd2numz00_2725;

											BgL_objzd2classzd2numz00_2725 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2724);
											{	/* Inline/size.scm 214 */
												obj_t BgL_arg2643z00_2726;

												BgL_arg2643z00_2726 =
													PROCEDURE_REF
													(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
													(int) (((long) 1)));
												{	/* Inline/size.scm 214 */
													obj_t BgL_arrayz00_2728;

													int BgL_offsetz00_2729;

													BgL_arrayz00_2728 = BgL_arg2643z00_2726;
													BgL_offsetz00_2729 =
														(int) (BgL_objzd2classzd2numz00_2725);
													{	/* Inline/size.scm 214 */
														long BgL_offsetz00_2730;

														BgL_offsetz00_2730 =
															((long) (BgL_offsetz00_2729) - OBJECT_TYPE);
														{	/* Inline/size.scm 214 */
															long BgL_modz00_2731;

															{	/* Inline/size.scm 214 */
																int BgL_arg2645z00_2732;

																BgL_arg2645z00_2732 = (int) (((long) 16));
																{	/* Inline/size.scm 214 */
																	long BgL_auxz00_3628;

																	BgL_auxz00_3628 =
																		(long) (BgL_arg2645z00_2732);
																	BgL_modz00_2731 =
																		(BgL_offsetz00_2730 / BgL_auxz00_3628);
															}}
															{	/* Inline/size.scm 214 */
																long BgL_restz00_2733;

																{	/* Inline/size.scm 214 */
																	int BgL_arg2644z00_2734;

																	BgL_arg2644z00_2734 = (int) (((long) 16));
																	{	/* Inline/size.scm 214 */
																		long BgL_auxz00_3632;

																		BgL_auxz00_3632 =
																			(long) (BgL_arg2644z00_2734);
																		BgL_restz00_2733 =
																			(BgL_offsetz00_2730 % BgL_auxz00_3632);
																}}
																{	/* Inline/size.scm 214 */

																	BgL_method3433z00_2723 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2728,
																			(int) (BgL_modz00_2731)),
																		(int) (BgL_restz00_2733));
									}}}}}}}}
									BgL_res3876z00_2748 =
										(long)
										CINT(PROCEDURE_ENTRY(BgL_method3433z00_2723)
										(BgL_method3433z00_2723, (obj_t) (BgL_arg3729z00_1576),
											BEOA));
								}
								BgL_arg3728z00_1575 = BgL_res3876z00_2748;
						}}
						BgL_auxz00_3618 = (((long) 1) + BgL_arg3728z00_1575);
					}
					return BINT(BgL_auxz00_3618);
				}
			}
		}
	}



/* node-size-jump-ex-it3477 */
	obj_t BGl_nodezd2siza7ezd2jumpzd2exzd2it3477za7zzinline_siza7eza7(obj_t
		BgL_envz00_2988, obj_t BgL_nodez00_2989)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 205 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1560;

				{	/* Inline/size.scm 206 */
					long BgL_auxz00_3646;

					BgL_nodez00_1560 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2989);
					{	/* Inline/size.scm 206 */
						long BgL_arg3721z00_1564;

						{	/* Inline/size.scm 207 */
							long BgL_arg3722z00_1565;

							long BgL_arg3723z00_1566;

							{	/* Inline/size.scm 207 */
								BgL_nodez00_bglt BgL_arg3724z00_1567;

								BgL_arg3724z00_1567 =
									(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1560))->
									BgL_exitz00);
								{	/* Inline/size.scm 207 */
									long BgL_res3870z00_2688;

									{	/* Inline/size.scm 207 */
										obj_t BgL_method3433z00_2663;

										{	/* Inline/size.scm 207 */
											BgL_objectz00_bglt BgL_objz00_2664;

											BgL_objz00_2664 =
												(BgL_objectz00_bglt) (BgL_arg3724z00_1567);
											{	/* Inline/size.scm 207 */
												long BgL_objzd2classzd2numz00_2665;

												BgL_objzd2classzd2numz00_2665 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2664);
												{	/* Inline/size.scm 207 */
													obj_t BgL_arg2643z00_2666;

													BgL_arg2643z00_2666 =
														PROCEDURE_REF
														(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
														(int) (((long) 1)));
													{	/* Inline/size.scm 207 */
														obj_t BgL_arrayz00_2668;

														int BgL_offsetz00_2669;

														BgL_arrayz00_2668 = BgL_arg2643z00_2666;
														BgL_offsetz00_2669 =
															(int) (BgL_objzd2classzd2numz00_2665);
														{	/* Inline/size.scm 207 */
															long BgL_offsetz00_2670;

															BgL_offsetz00_2670 =
																((long) (BgL_offsetz00_2669) - OBJECT_TYPE);
															{	/* Inline/size.scm 207 */
																long BgL_modz00_2671;

																{	/* Inline/size.scm 207 */
																	int BgL_arg2645z00_2672;

																	BgL_arg2645z00_2672 = (int) (((long) 16));
																	{	/* Inline/size.scm 207 */
																		long BgL_auxz00_3656;

																		BgL_auxz00_3656 =
																			(long) (BgL_arg2645z00_2672);
																		BgL_modz00_2671 =
																			(BgL_offsetz00_2670 / BgL_auxz00_3656);
																}}
																{	/* Inline/size.scm 207 */
																	long BgL_restz00_2673;

																	{	/* Inline/size.scm 207 */
																		int BgL_arg2644z00_2674;

																		BgL_arg2644z00_2674 = (int) (((long) 16));
																		{	/* Inline/size.scm 207 */
																			long BgL_auxz00_3660;

																			BgL_auxz00_3660 =
																				(long) (BgL_arg2644z00_2674);
																			BgL_restz00_2673 =
																				(BgL_offsetz00_2670 % BgL_auxz00_3660);
																	}}
																	{	/* Inline/size.scm 207 */

																		BgL_method3433z00_2663 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2668,
																				(int) (BgL_modz00_2671)),
																			(int) (BgL_restz00_2673));
										}}}}}}}}
										BgL_res3870z00_2688 =
											(long)
											CINT(PROCEDURE_ENTRY(BgL_method3433z00_2663)
											(BgL_method3433z00_2663, (obj_t) (BgL_arg3724z00_1567),
												BEOA));
									}
									BgL_arg3722z00_1565 = BgL_res3870z00_2688;
							}}
							{	/* Inline/size.scm 208 */
								BgL_nodez00_bglt BgL_arg3725z00_1568;

								BgL_arg3725z00_1568 =
									(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1560))->
									BgL_valuez00);
								{	/* Inline/size.scm 208 */
									long BgL_res3873z00_2716;

									{	/* Inline/size.scm 208 */
										obj_t BgL_method3433z00_2691;

										{	/* Inline/size.scm 208 */
											BgL_objectz00_bglt BgL_objz00_2692;

											BgL_objz00_2692 =
												(BgL_objectz00_bglt) (BgL_arg3725z00_1568);
											{	/* Inline/size.scm 208 */
												long BgL_objzd2classzd2numz00_2693;

												BgL_objzd2classzd2numz00_2693 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2692);
												{	/* Inline/size.scm 208 */
													obj_t BgL_arg2643z00_2694;

													BgL_arg2643z00_2694 =
														PROCEDURE_REF
														(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
														(int) (((long) 1)));
													{	/* Inline/size.scm 208 */
														obj_t BgL_arrayz00_2696;

														int BgL_offsetz00_2697;

														BgL_arrayz00_2696 = BgL_arg2643z00_2694;
														BgL_offsetz00_2697 =
															(int) (BgL_objzd2classzd2numz00_2693);
														{	/* Inline/size.scm 208 */
															long BgL_offsetz00_2698;

															BgL_offsetz00_2698 =
																((long) (BgL_offsetz00_2697) - OBJECT_TYPE);
															{	/* Inline/size.scm 208 */
																long BgL_modz00_2699;

																{	/* Inline/size.scm 208 */
																	int BgL_arg2645z00_2700;

																	BgL_arg2645z00_2700 = (int) (((long) 16));
																	{	/* Inline/size.scm 208 */
																		long BgL_auxz00_3680;

																		BgL_auxz00_3680 =
																			(long) (BgL_arg2645z00_2700);
																		BgL_modz00_2699 =
																			(BgL_offsetz00_2698 / BgL_auxz00_3680);
																}}
																{	/* Inline/size.scm 208 */
																	long BgL_restz00_2701;

																	{	/* Inline/size.scm 208 */
																		int BgL_arg2644z00_2702;

																		BgL_arg2644z00_2702 = (int) (((long) 16));
																		{	/* Inline/size.scm 208 */
																			long BgL_auxz00_3684;

																			BgL_auxz00_3684 =
																				(long) (BgL_arg2644z00_2702);
																			BgL_restz00_2701 =
																				(BgL_offsetz00_2698 % BgL_auxz00_3684);
																	}}
																	{	/* Inline/size.scm 208 */

																		BgL_method3433z00_2691 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2696,
																				(int) (BgL_modz00_2699)),
																			(int) (BgL_restz00_2701));
										}}}}}}}}
										BgL_res3873z00_2716 =
											(long)
											CINT(PROCEDURE_ENTRY(BgL_method3433z00_2691)
											(BgL_method3433z00_2691, (obj_t) (BgL_arg3725z00_1568),
												BEOA));
									}
									BgL_arg3723z00_1566 = BgL_res3873z00_2716;
							}}
							BgL_arg3721z00_1564 = (BgL_arg3722z00_1565 + BgL_arg3723z00_1566);
						}
						BgL_auxz00_3646 = (((long) 1) + BgL_arg3721z00_1564);
					}
					return BINT(BgL_auxz00_3646);
				}
			}
		}
	}



/* node-size-set-ex-it3474 */
	obj_t BGl_nodezd2siza7ezd2setzd2exzd2it3474za7zzinline_siza7eza7(obj_t
		BgL_envz00_2990, obj_t BgL_nodez00_2991)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 199 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1552;

				{	/* Inline/size.scm 200 */
					long BgL_auxz00_3699;

					BgL_nodez00_1552 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2991);
					{	/* Inline/size.scm 200 */
						long BgL_arg3717z00_1556;

						{	/* Inline/size.scm 200 */
							BgL_nodez00_bglt BgL_arg3718z00_1557;

							BgL_arg3718z00_1557 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1552))->
								BgL_bodyz00);
							{	/* Inline/size.scm 200 */
								long BgL_res3867z00_2658;

								{	/* Inline/size.scm 200 */
									obj_t BgL_method3433z00_2633;

									{	/* Inline/size.scm 200 */
										BgL_objectz00_bglt BgL_objz00_2634;

										BgL_objz00_2634 =
											(BgL_objectz00_bglt) (BgL_arg3718z00_1557);
										{	/* Inline/size.scm 200 */
											long BgL_objzd2classzd2numz00_2635;

											BgL_objzd2classzd2numz00_2635 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2634);
											{	/* Inline/size.scm 200 */
												obj_t BgL_arg2643z00_2636;

												BgL_arg2643z00_2636 =
													PROCEDURE_REF
													(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
													(int) (((long) 1)));
												{	/* Inline/size.scm 200 */
													obj_t BgL_arrayz00_2638;

													int BgL_offsetz00_2639;

													BgL_arrayz00_2638 = BgL_arg2643z00_2636;
													BgL_offsetz00_2639 =
														(int) (BgL_objzd2classzd2numz00_2635);
													{	/* Inline/size.scm 200 */
														long BgL_offsetz00_2640;

														BgL_offsetz00_2640 =
															((long) (BgL_offsetz00_2639) - OBJECT_TYPE);
														{	/* Inline/size.scm 200 */
															long BgL_modz00_2641;

															{	/* Inline/size.scm 200 */
																int BgL_arg2645z00_2642;

																BgL_arg2645z00_2642 = (int) (((long) 16));
																{	/* Inline/size.scm 200 */
																	long BgL_auxz00_3709;

																	BgL_auxz00_3709 =
																		(long) (BgL_arg2645z00_2642);
																	BgL_modz00_2641 =
																		(BgL_offsetz00_2640 / BgL_auxz00_3709);
															}}
															{	/* Inline/size.scm 200 */
																long BgL_restz00_2643;

																{	/* Inline/size.scm 200 */
																	int BgL_arg2644z00_2644;

																	BgL_arg2644z00_2644 = (int) (((long) 16));
																	{	/* Inline/size.scm 200 */
																		long BgL_auxz00_3713;

																		BgL_auxz00_3713 =
																			(long) (BgL_arg2644z00_2644);
																		BgL_restz00_2643 =
																			(BgL_offsetz00_2640 % BgL_auxz00_3713);
																}}
																{	/* Inline/size.scm 200 */

																	BgL_method3433z00_2633 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2638,
																			(int) (BgL_modz00_2641)),
																		(int) (BgL_restz00_2643));
									}}}}}}}}
									BgL_res3867z00_2658 =
										(long)
										CINT(PROCEDURE_ENTRY(BgL_method3433z00_2633)
										(BgL_method3433z00_2633, (obj_t) (BgL_arg3718z00_1557),
											BEOA));
								}
								BgL_arg3717z00_1556 = BgL_res3867z00_2658;
						}}
						BgL_auxz00_3699 = (((long) 2) + BgL_arg3717z00_1556);
					}
					return BINT(BgL_auxz00_3699);
				}
			}
		}
	}



/* node-size-sized-let-3471 */
	obj_t BGl_nodezd2siza7ezd2siza7edzd2letzd23471z00zzinline_siza7eza7(obj_t
		BgL_envz00_2992, obj_t BgL_nodez00_2993)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 193 */
			{
				BgL_siza7edzd2letzd2varza7_bglt BgL_nodez00_1547;

				{	/* Inline/size.scm 194 */
					long BgL_auxz00_3727;

					BgL_nodez00_1547 =
						(BgL_siza7edzd2letzd2varza7_bglt) (BgL_nodez00_2993);
					{
						obj_t BgL_auxz00_3728;

						{	/* Inline/size.scm 194 */
							BgL_objectz00_bglt BgL_auxz00_3729;

							BgL_auxz00_3729 = (BgL_objectz00_bglt) (BgL_nodez00_1547);
							BgL_auxz00_3728 = BGL_OBJECT_WIDENING(BgL_auxz00_3729);
						}
						BgL_auxz00_3727 =
							(((BgL_siza7edzd2letzd2varza7_bglt) CREF(BgL_auxz00_3728))->
							BgL_siza7eza7);
					}
					return BINT(BgL_auxz00_3727);
				}
			}
		}
	}



/* node-size-let-var3469 */
	obj_t BGl_nodezd2siza7ezd2letzd2var3469z75zzinline_siza7eza7(obj_t
		BgL_envz00_2994, obj_t BgL_nodez00_2995)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 180 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1525;

				{	/* Inline/size.scm 181 */
					long BgL_auxz00_3735;

					BgL_nodez00_1525 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2995);
					{	/* Inline/size.scm 181 */
						obj_t BgL_g3425z00_1528;

						long BgL_g3426z00_1529;

						BgL_g3425z00_1528 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1525))->
							BgL_bindingsz00);
						{	/* Inline/size.scm 182 */
							BgL_nodez00_bglt BgL_arg3713z00_1544;

							BgL_arg3713z00_1544 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1525))->BgL_bodyz00);
							{	/* Inline/size.scm 182 */
								long BgL_res3859z00_2587;

								{	/* Inline/size.scm 182 */
									obj_t BgL_method3433z00_2562;

									{	/* Inline/size.scm 182 */
										BgL_objectz00_bglt BgL_objz00_2563;

										BgL_objz00_2563 =
											(BgL_objectz00_bglt) (BgL_arg3713z00_1544);
										{	/* Inline/size.scm 182 */
											long BgL_objzd2classzd2numz00_2564;

											BgL_objzd2classzd2numz00_2564 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2563);
											{	/* Inline/size.scm 182 */
												obj_t BgL_arg2643z00_2565;

												BgL_arg2643z00_2565 =
													PROCEDURE_REF
													(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
													(int) (((long) 1)));
												{	/* Inline/size.scm 182 */
													obj_t BgL_arrayz00_2567;

													int BgL_offsetz00_2568;

													BgL_arrayz00_2567 = BgL_arg2643z00_2565;
													BgL_offsetz00_2568 =
														(int) (BgL_objzd2classzd2numz00_2564);
													{	/* Inline/size.scm 182 */
														long BgL_offsetz00_2569;

														BgL_offsetz00_2569 =
															((long) (BgL_offsetz00_2568) - OBJECT_TYPE);
														{	/* Inline/size.scm 182 */
															long BgL_modz00_2570;

															{	/* Inline/size.scm 182 */
																int BgL_arg2645z00_2571;

																BgL_arg2645z00_2571 = (int) (((long) 16));
																{	/* Inline/size.scm 182 */
																	long BgL_auxz00_3746;

																	BgL_auxz00_3746 =
																		(long) (BgL_arg2645z00_2571);
																	BgL_modz00_2570 =
																		(BgL_offsetz00_2569 / BgL_auxz00_3746);
															}}
															{	/* Inline/size.scm 182 */
																long BgL_restz00_2572;

																{	/* Inline/size.scm 182 */
																	int BgL_arg2644z00_2573;

																	BgL_arg2644z00_2573 = (int) (((long) 16));
																	{	/* Inline/size.scm 182 */
																		long BgL_auxz00_3750;

																		BgL_auxz00_3750 =
																			(long) (BgL_arg2644z00_2573);
																		BgL_restz00_2572 =
																			(BgL_offsetz00_2569 % BgL_auxz00_3750);
																}}
																{	/* Inline/size.scm 182 */

																	BgL_method3433z00_2562 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2567,
																			(int) (BgL_modz00_2570)),
																		(int) (BgL_restz00_2572));
									}}}}}}}}
									BgL_res3859z00_2587 =
										(long)
										CINT(PROCEDURE_ENTRY(BgL_method3433z00_2562)
										(BgL_method3433z00_2562, (obj_t) (BgL_arg3713z00_1544),
											BEOA));
								}
								BgL_g3426z00_1529 = BgL_res3859z00_2587;
						}}
						{
							obj_t BgL_bindingsz00_1531;

							long BgL_siza7eza7_1532;

							BgL_bindingsz00_1531 = BgL_g3425z00_1528;
							BgL_siza7eza7_1532 = BgL_g3426z00_1529;
						BgL_zc3anonymousza33704ze3z83_1533:
							if (NULLP(BgL_bindingsz00_1531))
								{	/* Inline/size.scm 183 */
									{	/* Inline/size.scm 185 */
										BgL_letzd2varzd2_bglt BgL_obj3427z00_1535;

										BgL_obj3427z00_1535 =
											((BgL_letzd2varzd2_bglt) BgL_nodez00_1525);
										{	/* Inline/size.scm 185 */
											BgL_siza7edzd2letzd2varza7_bglt BgL_arg3706z00_1536;

											{	/* Inline/size.scm 185 */
												BgL_siza7edzd2letzd2varza7_bglt BgL_res3861z00_2595;

												{	/* Inline/size.scm 185 */
													BgL_siza7edzd2letzd2varza7_bglt BgL_new3365z00_2590;

													BgL_new3365z00_2590 =
														((BgL_siza7edzd2letzd2varza7_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_siza7edzd2letzd2varza7_bgl))));
													{	/* Inline/size.scm 185 */
														BgL_siza7edzd2letzd2varza7_bglt BgL_res3860z00_2594;

														{	/* Inline/size.scm 185 */
															BgL_siza7edzd2letzd2varza7_bglt
																BgL_new3378z00_2591;
															BgL_new3378z00_2591 = BgL_new3365z00_2590;
															{	/* Inline/size.scm 185 */
																long BgL_siza7e3377za7_2593;

																BgL_siza7e3377za7_2593 = BgL_siza7eza7_1532;
																((((BgL_siza7edzd2letzd2varza7_bglt)
																			CREF(BgL_new3378z00_2591))->
																		BgL_siza7eza7) =
																	((long) BgL_siza7e3377za7_2593), BUNSPEC);
																BgL_res3860z00_2594 = BgL_new3378z00_2591;
														}} BgL_res3860z00_2594;
													}
													BgL_res3861z00_2595 = BgL_new3365z00_2590;
												}
												BgL_arg3706z00_1536 = BgL_res3861z00_2595;
											}
											{	/* Inline/size.scm 185 */
												obj_t BgL_auxz00_3768;

												BgL_objectz00_bglt BgL_auxz00_3766;

												BgL_auxz00_3768 = (obj_t) (BgL_arg3706z00_1536);
												BgL_auxz00_3766 =
													(BgL_objectz00_bglt) (BgL_obj3427z00_1535);
												BGL_OBJECT_WIDENING_SET(BgL_auxz00_3766,
													BgL_auxz00_3768);
										}}
										BGL_OBJECT_CLASS_NUM_SET(
											(BgL_objectz00_bglt) (BgL_obj3427z00_1535),
											BGl_classzd2numzd2zz__objectz00
											(BGl_siza7edzd2letzd2varza7zzinline_siza7eza7));
										BgL_obj3427z00_1535;
									}
									BgL_auxz00_3735 = BgL_siza7eza7_1532;
								}
							else
								{	/* Inline/size.scm 187 */
									obj_t BgL_arg3708z00_1538;

									long BgL_arg3709z00_1539;

									BgL_arg3708z00_1538 = CDR(BgL_bindingsz00_1531);
									{	/* Inline/size.scm 188 */
										long BgL_arg3710z00_1540;

										{	/* Inline/size.scm 188 */
											obj_t BgL_arg3711z00_1541;

											BgL_arg3711z00_1541 = CDR(CAR(BgL_bindingsz00_1531));
											{	/* Inline/size.scm 188 */
												long BgL_res3864z00_2627;

												{	/* Inline/size.scm 188 */
													BgL_nodez00_bglt BgL_nodez00_2601;

													BgL_nodez00_2601 =
														(BgL_nodez00_bglt) (BgL_arg3711z00_1541);
													{	/* Inline/size.scm 188 */
														obj_t BgL_method3433z00_2602;

														{	/* Inline/size.scm 188 */
															BgL_objectz00_bglt BgL_objz00_2603;

															BgL_objz00_2603 =
																(BgL_objectz00_bglt) (BgL_nodez00_2601);
															{	/* Inline/size.scm 188 */
																long BgL_objzd2classzd2numz00_2604;

																BgL_objzd2classzd2numz00_2604 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2603);
																{	/* Inline/size.scm 188 */
																	obj_t BgL_arg2643z00_2605;

																	BgL_arg2643z00_2605 =
																		PROCEDURE_REF
																		(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
																		(int) (((long) 1)));
																	{	/* Inline/size.scm 188 */
																		obj_t BgL_arrayz00_2607;

																		int BgL_offsetz00_2608;

																		BgL_arrayz00_2607 = BgL_arg2643z00_2605;
																		BgL_offsetz00_2608 =
																			(int) (BgL_objzd2classzd2numz00_2604);
																		{	/* Inline/size.scm 188 */
																			long BgL_offsetz00_2609;

																			BgL_offsetz00_2609 =
																				(
																				(long) (BgL_offsetz00_2608) -
																				OBJECT_TYPE);
																			{	/* Inline/size.scm 188 */
																				long BgL_modz00_2610;

																				{	/* Inline/size.scm 188 */
																					int BgL_arg2645z00_2611;

																					BgL_arg2645z00_2611 =
																						(int) (((long) 16));
																					{	/* Inline/size.scm 188 */
																						long BgL_auxz00_3786;

																						BgL_auxz00_3786 =
																							(long) (BgL_arg2645z00_2611);
																						BgL_modz00_2610 =
																							(BgL_offsetz00_2609 /
																							BgL_auxz00_3786);
																				}}
																				{	/* Inline/size.scm 188 */
																					long BgL_restz00_2612;

																					{	/* Inline/size.scm 188 */
																						int BgL_arg2644z00_2613;

																						BgL_arg2644z00_2613 =
																							(int) (((long) 16));
																						{	/* Inline/size.scm 188 */
																							long BgL_auxz00_3790;

																							BgL_auxz00_3790 =
																								(long) (BgL_arg2644z00_2613);
																							BgL_restz00_2612 =
																								(BgL_offsetz00_2609 %
																								BgL_auxz00_3790);
																					}}
																					{	/* Inline/size.scm 188 */

																						BgL_method3433z00_2602 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2607,
																								(int) (BgL_modz00_2610)),
																							(int) (BgL_restz00_2612));
														}}}}}}}}
														BgL_res3864z00_2627 =
															(long)
															CINT(PROCEDURE_ENTRY(BgL_method3433z00_2602)
															(BgL_method3433z00_2602,
																(obj_t) (BgL_nodez00_2601), BEOA));
												}}
												BgL_arg3710z00_1540 = BgL_res3864z00_2627;
										}}
										BgL_arg3709z00_1539 =
											(BgL_siza7eza7_1532 + BgL_arg3710z00_1540);
									}
									{
										long BgL_siza7eza7_3803;

										obj_t BgL_bindingsz00_3802;

										BgL_bindingsz00_3802 = BgL_arg3708z00_1538;
										BgL_siza7eza7_3803 = BgL_arg3709z00_1539;
										BgL_siza7eza7_1532 = BgL_siza7eza7_3803;
										BgL_bindingsz00_1531 = BgL_bindingsz00_3802;
										goto BgL_zc3anonymousza33704ze3z83_1533;
									}
								}
						}
					}
					return BINT(BgL_auxz00_3735);
				}
			}
		}
	}



/* node-size-sized-let-3467 */
	obj_t BGl_nodezd2siza7ezd2siza7edzd2letzd23467z00zzinline_siza7eza7(obj_t
		BgL_envz00_2996, obj_t BgL_nodez00_2997)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 174 */
			{
				BgL_siza7edzd2letzd2funza7_bglt BgL_nodez00_1520;

				{	/* Inline/size.scm 175 */
					long BgL_auxz00_3806;

					BgL_nodez00_1520 =
						(BgL_siza7edzd2letzd2funza7_bglt) (BgL_nodez00_2997);
					{
						obj_t BgL_auxz00_3807;

						{	/* Inline/size.scm 175 */
							BgL_objectz00_bglt BgL_auxz00_3808;

							BgL_auxz00_3808 = (BgL_objectz00_bglt) (BgL_nodez00_1520);
							BgL_auxz00_3807 = BGL_OBJECT_WIDENING(BgL_auxz00_3808);
						}
						BgL_auxz00_3806 =
							(((BgL_siza7edzd2letzd2funza7_bglt) CREF(BgL_auxz00_3807))->
							BgL_siza7eza7);
					}
					return BINT(BgL_auxz00_3806);
				}
			}
		}
	}



/* node-size-let-fun3465 */
	obj_t BGl_nodezd2siza7ezd2letzd2fun3465z75zzinline_siza7eza7(obj_t
		BgL_envz00_2998, obj_t BgL_nodez00_2999)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 159 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1492;

				{	/* Inline/size.scm 160 */
					long BgL_auxz00_3814;

					BgL_nodez00_1492 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2999);
					{	/* Inline/size.scm 160 */
						obj_t BgL_g3422z00_1495;

						long BgL_g3423z00_1496;

						BgL_g3422z00_1495 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1492))->BgL_localsz00);
						{	/* Inline/size.scm 161 */
							long BgL_arg3698z00_1514;

							long BgL_arg3699z00_1515;

							BgL_arg3698z00_1514 =
								bgl_list_length(
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1492))->
									BgL_localsz00));
							{	/* Inline/size.scm 162 */
								BgL_nodez00_bglt BgL_arg3701z00_1517;

								BgL_arg3701z00_1517 =
									(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1492))->
									BgL_bodyz00);
								{	/* Inline/size.scm 162 */
									long BgL_res3851z00_2508;

									{	/* Inline/size.scm 162 */
										obj_t BgL_method3433z00_2483;

										{	/* Inline/size.scm 162 */
											BgL_objectz00_bglt BgL_objz00_2484;

											BgL_objz00_2484 =
												(BgL_objectz00_bglt) (BgL_arg3701z00_1517);
											{	/* Inline/size.scm 162 */
												long BgL_objzd2classzd2numz00_2485;

												BgL_objzd2classzd2numz00_2485 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2484);
												{	/* Inline/size.scm 162 */
													obj_t BgL_arg2643z00_2486;

													BgL_arg2643z00_2486 =
														PROCEDURE_REF
														(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
														(int) (((long) 1)));
													{	/* Inline/size.scm 162 */
														obj_t BgL_arrayz00_2488;

														int BgL_offsetz00_2489;

														BgL_arrayz00_2488 = BgL_arg2643z00_2486;
														BgL_offsetz00_2489 =
															(int) (BgL_objzd2classzd2numz00_2485);
														{	/* Inline/size.scm 162 */
															long BgL_offsetz00_2490;

															BgL_offsetz00_2490 =
																((long) (BgL_offsetz00_2489) - OBJECT_TYPE);
															{	/* Inline/size.scm 162 */
																long BgL_modz00_2491;

																{	/* Inline/size.scm 162 */
																	int BgL_arg2645z00_2492;

																	BgL_arg2645z00_2492 = (int) (((long) 16));
																	{	/* Inline/size.scm 162 */
																		long BgL_auxz00_3827;

																		BgL_auxz00_3827 =
																			(long) (BgL_arg2645z00_2492);
																		BgL_modz00_2491 =
																			(BgL_offsetz00_2490 / BgL_auxz00_3827);
																}}
																{	/* Inline/size.scm 162 */
																	long BgL_restz00_2493;

																	{	/* Inline/size.scm 162 */
																		int BgL_arg2644z00_2494;

																		BgL_arg2644z00_2494 = (int) (((long) 16));
																		{	/* Inline/size.scm 162 */
																			long BgL_auxz00_3831;

																			BgL_auxz00_3831 =
																				(long) (BgL_arg2644z00_2494);
																			BgL_restz00_2493 =
																				(BgL_offsetz00_2490 % BgL_auxz00_3831);
																	}}
																	{	/* Inline/size.scm 162 */

																		BgL_method3433z00_2483 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2488,
																				(int) (BgL_modz00_2491)),
																			(int) (BgL_restz00_2493));
										}}}}}}}}
										BgL_res3851z00_2508 =
											(long)
											CINT(PROCEDURE_ENTRY(BgL_method3433z00_2483)
											(BgL_method3433z00_2483, (obj_t) (BgL_arg3701z00_1517),
												BEOA));
									}
									BgL_arg3699z00_1515 = BgL_res3851z00_2508;
							}}
							BgL_g3423z00_1496 = (BgL_arg3698z00_1514 + BgL_arg3699z00_1515);
						}
						{
							obj_t BgL_localsz00_1498;

							long BgL_siza7eza7_1499;

							BgL_localsz00_1498 = BgL_g3422z00_1495;
							BgL_siza7eza7_1499 = BgL_g3423z00_1496;
						BgL_zc3anonymousza33686ze3z83_1500:
							if (NULLP(BgL_localsz00_1498))
								{	/* Inline/size.scm 163 */
									{	/* Inline/size.scm 165 */
										BgL_letzd2funzd2_bglt BgL_obj3424z00_1502;

										BgL_obj3424z00_1502 =
											((BgL_letzd2funzd2_bglt) BgL_nodez00_1492);
										{	/* Inline/size.scm 165 */
											BgL_siza7edzd2letzd2funza7_bglt BgL_arg3688z00_1503;

											{	/* Inline/size.scm 165 */
												BgL_siza7edzd2letzd2funza7_bglt BgL_res3853z00_2518;

												{	/* Inline/size.scm 165 */
													BgL_siza7edzd2letzd2funza7_bglt BgL_new3322z00_2513;

													BgL_new3322z00_2513 =
														((BgL_siza7edzd2letzd2funza7_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_siza7edzd2letzd2funza7_bgl))));
													{	/* Inline/size.scm 165 */
														BgL_siza7edzd2letzd2funza7_bglt BgL_res3852z00_2517;

														{	/* Inline/size.scm 165 */
															BgL_siza7edzd2letzd2funza7_bglt
																BgL_new3334z00_2514;
															BgL_new3334z00_2514 = BgL_new3322z00_2513;
															{	/* Inline/size.scm 165 */
																long BgL_siza7e3333za7_2516;

																BgL_siza7e3333za7_2516 = BgL_siza7eza7_1499;
																((((BgL_siza7edzd2letzd2funza7_bglt)
																			CREF(BgL_new3334z00_2514))->
																		BgL_siza7eza7) =
																	((long) BgL_siza7e3333za7_2516), BUNSPEC);
																BgL_res3852z00_2517 = BgL_new3334z00_2514;
														}} BgL_res3852z00_2517;
													}
													BgL_res3853z00_2518 = BgL_new3322z00_2513;
												}
												BgL_arg3688z00_1503 = BgL_res3853z00_2518;
											}
											{	/* Inline/size.scm 165 */
												obj_t BgL_auxz00_3850;

												BgL_objectz00_bglt BgL_auxz00_3848;

												BgL_auxz00_3850 = (obj_t) (BgL_arg3688z00_1503);
												BgL_auxz00_3848 =
													(BgL_objectz00_bglt) (BgL_obj3424z00_1502);
												BGL_OBJECT_WIDENING_SET(BgL_auxz00_3848,
													BgL_auxz00_3850);
										}}
										BGL_OBJECT_CLASS_NUM_SET(
											(BgL_objectz00_bglt) (BgL_obj3424z00_1502),
											BGl_classzd2numzd2zz__objectz00
											(BGl_siza7edzd2letzd2funza7zzinline_siza7eza7));
										BgL_obj3424z00_1502;
									}
									BgL_auxz00_3814 = (((long) 1) + BgL_siza7eza7_1499);
								}
							else
								{	/* Inline/size.scm 167 */
									obj_t BgL_arg3690z00_1505;

									long BgL_arg3691z00_1506;

									BgL_arg3690z00_1505 = CDR(BgL_localsz00_1498);
									{	/* Inline/size.scm 169 */
										long BgL_arg3692z00_1507;

										{	/* Inline/size.scm 169 */
											long BgL_arg3694z00_1509;

											{	/* Inline/size.scm 169 */
												obj_t BgL_arg3695z00_1510;

												{	/* Inline/size.scm 169 */
													BgL_sfunz00_bglt BgL_obj1884z00_2526;

													{	/* Inline/size.scm 169 */
														BgL_valuez00_bglt BgL_auxz00_3858;

														{	/* Inline/size.scm 169 */
															BgL_variablez00_bglt BgL_obj1611z00_2525;

															{	/* Inline/size.scm 169 */
																obj_t BgL_pairz00_2524;

																BgL_pairz00_2524 = BgL_localsz00_1498;
																BgL_obj1611z00_2525 =
																	(BgL_variablez00_bglt) (CAR
																	(BgL_pairz00_2524));
															}
															BgL_auxz00_3858 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_obj1611z00_2525))->BgL_valuez00);
														}
														BgL_obj1884z00_2526 =
															(BgL_sfunz00_bglt) (BgL_auxz00_3858);
													}
													BgL_arg3695z00_1510 =
														(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_2526))->
														BgL_bodyz00);
												}
												{	/* Inline/size.scm 169 */
													long BgL_res3856z00_2553;

													{	/* Inline/size.scm 169 */
														BgL_nodez00_bglt BgL_nodez00_2527;

														BgL_nodez00_2527 =
															(BgL_nodez00_bglt) (BgL_arg3695z00_1510);
														{	/* Inline/size.scm 169 */
															obj_t BgL_method3433z00_2528;

															{	/* Inline/size.scm 169 */
																BgL_objectz00_bglt BgL_objz00_2529;

																BgL_objz00_2529 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2527);
																{	/* Inline/size.scm 169 */
																	long BgL_objzd2classzd2numz00_2530;

																	BgL_objzd2classzd2numz00_2530 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2529);
																	{	/* Inline/size.scm 169 */
																		obj_t BgL_arg2643z00_2531;

																		BgL_arg2643z00_2531 =
																			PROCEDURE_REF
																			(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
																			(int) (((long) 1)));
																		{	/* Inline/size.scm 169 */
																			obj_t BgL_arrayz00_2533;

																			int BgL_offsetz00_2534;

																			BgL_arrayz00_2533 = BgL_arg2643z00_2531;
																			BgL_offsetz00_2534 =
																				(int) (BgL_objzd2classzd2numz00_2530);
																			{	/* Inline/size.scm 169 */
																				long BgL_offsetz00_2535;

																				BgL_offsetz00_2535 =
																					(
																					(long) (BgL_offsetz00_2534) -
																					OBJECT_TYPE);
																				{	/* Inline/size.scm 169 */
																					long BgL_modz00_2536;

																					{	/* Inline/size.scm 169 */
																						int BgL_arg2645z00_2537;

																						BgL_arg2645z00_2537 =
																							(int) (((long) 16));
																						{	/* Inline/size.scm 169 */
																							long BgL_auxz00_3873;

																							BgL_auxz00_3873 =
																								(long) (BgL_arg2645z00_2537);
																							BgL_modz00_2536 =
																								(BgL_offsetz00_2535 /
																								BgL_auxz00_3873);
																					}}
																					{	/* Inline/size.scm 169 */
																						long BgL_restz00_2538;

																						{	/* Inline/size.scm 169 */
																							int BgL_arg2644z00_2539;

																							BgL_arg2644z00_2539 =
																								(int) (((long) 16));
																							{	/* Inline/size.scm 169 */
																								long BgL_auxz00_3877;

																								BgL_auxz00_3877 =
																									(long) (BgL_arg2644z00_2539);
																								BgL_restz00_2538 =
																									(BgL_offsetz00_2535 %
																									BgL_auxz00_3877);
																						}}
																						{	/* Inline/size.scm 169 */

																							BgL_method3433z00_2528 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2533,
																									(int) (BgL_modz00_2536)),
																								(int) (BgL_restz00_2538));
															}}}}}}}}
															BgL_res3856z00_2553 =
																(long)
																CINT(PROCEDURE_ENTRY(BgL_method3433z00_2528)
																(BgL_method3433z00_2528,
																	(obj_t) (BgL_nodez00_2527), BEOA));
													}}
													BgL_arg3694z00_1509 = BgL_res3856z00_2553;
											}}
											BgL_arg3692z00_1507 = (((long) 1) + BgL_arg3694z00_1509);
										}
										BgL_arg3691z00_1506 =
											(BgL_siza7eza7_1499 + BgL_arg3692z00_1507);
									}
									{
										long BgL_siza7eza7_3891;

										obj_t BgL_localsz00_3890;

										BgL_localsz00_3890 = BgL_arg3690z00_1505;
										BgL_siza7eza7_3891 = BgL_arg3691z00_1506;
										BgL_siza7eza7_1499 = BgL_siza7eza7_3891;
										BgL_localsz00_1498 = BgL_localsz00_3890;
										goto BgL_zc3anonymousza33686ze3z83_1500;
									}
								}
						}
					}
					return BINT(BgL_auxz00_3814);
				}
			}
		}
	}



/* node-size-sized-sele3463 */
	obj_t BGl_nodezd2siza7ezd2siza7edzd2sele3463zd2zzinline_siza7eza7(obj_t
		BgL_envz00_3000, obj_t BgL_nodez00_3001)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 153 */
			{
				BgL_siza7edzd2selectz75_bglt BgL_nodez00_1487;

				{	/* Inline/size.scm 154 */
					long BgL_auxz00_3894;

					BgL_nodez00_1487 = (BgL_siza7edzd2selectz75_bglt) (BgL_nodez00_3001);
					{
						obj_t BgL_auxz00_3895;

						{	/* Inline/size.scm 154 */
							BgL_objectz00_bglt BgL_auxz00_3896;

							BgL_auxz00_3896 = (BgL_objectz00_bglt) (BgL_nodez00_1487);
							BgL_auxz00_3895 = BGL_OBJECT_WIDENING(BgL_auxz00_3896);
						}
						BgL_auxz00_3894 =
							(((BgL_siza7edzd2selectz75_bglt) CREF(BgL_auxz00_3895))->
							BgL_siza7eza7);
					}
					return BINT(BgL_auxz00_3894);
				}
			}
		}
	}



/* node-size-select3461 */
	obj_t BGl_nodezd2siza7ezd2select3461za7zzinline_siza7eza7(obj_t
		BgL_envz00_3002, obj_t BgL_nodez00_3003)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 137 */
			{
				BgL_selectz00_bglt BgL_nodez00_1456;

				{	/* Inline/size.scm 138 */
					long BgL_auxz00_3902;

					BgL_nodez00_1456 = (BgL_selectz00_bglt) (BgL_nodez00_3003);
					{	/* Inline/size.scm 138 */
						obj_t BgL_g3419z00_1459;

						long BgL_g3420z00_1460;

						BgL_g3419z00_1459 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1456))->BgL_clausesz00);
						{	/* Inline/size.scm 139 */
							long BgL_arg3682z00_1483;

							{	/* Inline/size.scm 139 */
								BgL_nodez00_bglt BgL_arg3683z00_1484;

								BgL_arg3683z00_1484 =
									(((BgL_selectz00_bglt) CREF(BgL_nodez00_1456))->BgL_testz00);
								{	/* Inline/size.scm 139 */
									long BgL_res3843z00_2426;

									{	/* Inline/size.scm 139 */
										obj_t BgL_method3433z00_2401;

										{	/* Inline/size.scm 139 */
											BgL_objectz00_bglt BgL_objz00_2402;

											BgL_objz00_2402 =
												(BgL_objectz00_bglt) (BgL_arg3683z00_1484);
											{	/* Inline/size.scm 139 */
												long BgL_objzd2classzd2numz00_2403;

												BgL_objzd2classzd2numz00_2403 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2402);
												{	/* Inline/size.scm 139 */
													obj_t BgL_arg2643z00_2404;

													BgL_arg2643z00_2404 =
														PROCEDURE_REF
														(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
														(int) (((long) 1)));
													{	/* Inline/size.scm 139 */
														obj_t BgL_arrayz00_2406;

														int BgL_offsetz00_2407;

														BgL_arrayz00_2406 = BgL_arg2643z00_2404;
														BgL_offsetz00_2407 =
															(int) (BgL_objzd2classzd2numz00_2403);
														{	/* Inline/size.scm 139 */
															long BgL_offsetz00_2408;

															BgL_offsetz00_2408 =
																((long) (BgL_offsetz00_2407) - OBJECT_TYPE);
															{	/* Inline/size.scm 139 */
																long BgL_modz00_2409;

																{	/* Inline/size.scm 139 */
																	int BgL_arg2645z00_2410;

																	BgL_arg2645z00_2410 = (int) (((long) 16));
																	{	/* Inline/size.scm 139 */
																		long BgL_auxz00_3913;

																		BgL_auxz00_3913 =
																			(long) (BgL_arg2645z00_2410);
																		BgL_modz00_2409 =
																			(BgL_offsetz00_2408 / BgL_auxz00_3913);
																}}
																{	/* Inline/size.scm 139 */
																	long BgL_restz00_2411;

																	{	/* Inline/size.scm 139 */
																		int BgL_arg2644z00_2412;

																		BgL_arg2644z00_2412 = (int) (((long) 16));
																		{	/* Inline/size.scm 139 */
																			long BgL_auxz00_3917;

																			BgL_auxz00_3917 =
																				(long) (BgL_arg2644z00_2412);
																			BgL_restz00_2411 =
																				(BgL_offsetz00_2408 % BgL_auxz00_3917);
																	}}
																	{	/* Inline/size.scm 139 */

																		BgL_method3433z00_2401 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2406,
																				(int) (BgL_modz00_2409)),
																			(int) (BgL_restz00_2411));
										}}}}}}}}
										BgL_res3843z00_2426 =
											(long)
											CINT(PROCEDURE_ENTRY(BgL_method3433z00_2401)
											(BgL_method3433z00_2401, (obj_t) (BgL_arg3683z00_1484),
												BEOA));
									}
									BgL_arg3682z00_1483 = BgL_res3843z00_2426;
							}}
							BgL_g3420z00_1460 = (((long) 1) + BgL_arg3682z00_1483);
						}
						{
							obj_t BgL_clausesz00_1462;

							long BgL_siza7eza7_1463;

							BgL_clausesz00_1462 = BgL_g3419z00_1459;
							BgL_siza7eza7_1463 = BgL_g3420z00_1460;
						BgL_zc3anonymousza33663ze3z83_1464:
							if (NULLP(BgL_clausesz00_1462))
								{	/* Inline/size.scm 140 */
									{	/* Inline/size.scm 142 */
										BgL_selectz00_bglt BgL_obj3421z00_1466;

										BgL_obj3421z00_1466 =
											((BgL_selectz00_bglt) BgL_nodez00_1456);
										{	/* Inline/size.scm 142 */
											BgL_siza7edzd2selectz75_bglt BgL_arg3665z00_1467;

											{	/* Inline/size.scm 142 */
												BgL_siza7edzd2selectz75_bglt BgL_res3845z00_2436;

												{	/* Inline/size.scm 142 */
													BgL_siza7edzd2selectz75_bglt BgL_new3280z00_2431;

													BgL_new3280z00_2431 =
														((BgL_siza7edzd2selectz75_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_siza7edzd2selectz75_bgl))));
													{	/* Inline/size.scm 142 */
														BgL_siza7edzd2selectz75_bglt BgL_res3844z00_2435;

														{	/* Inline/size.scm 142 */
															BgL_siza7edzd2selectz75_bglt BgL_new3293z00_2432;

															BgL_new3293z00_2432 = BgL_new3280z00_2431;
															{	/* Inline/size.scm 142 */
																long BgL_siza7e3292za7_2434;

																BgL_siza7e3292za7_2434 = BgL_siza7eza7_1463;
																((((BgL_siza7edzd2selectz75_bglt)
																			CREF(BgL_new3293z00_2432))->
																		BgL_siza7eza7) =
																	((long) BgL_siza7e3292za7_2434), BUNSPEC);
																BgL_res3844z00_2435 = BgL_new3293z00_2432;
														}} BgL_res3844z00_2435;
													}
													BgL_res3845z00_2436 = BgL_new3280z00_2431;
												}
												BgL_arg3665z00_1467 = BgL_res3845z00_2436;
											}
											{	/* Inline/size.scm 142 */
												obj_t BgL_auxz00_3936;

												BgL_objectz00_bglt BgL_auxz00_3934;

												BgL_auxz00_3936 = (obj_t) (BgL_arg3665z00_1467);
												BgL_auxz00_3934 =
													(BgL_objectz00_bglt) (BgL_obj3421z00_1466);
												BGL_OBJECT_WIDENING_SET(BgL_auxz00_3934,
													BgL_auxz00_3936);
										}}
										BGL_OBJECT_CLASS_NUM_SET(
											(BgL_objectz00_bglt) (BgL_obj3421z00_1466),
											BGl_classzd2numzd2zz__objectz00
											(BGl_siza7edzd2selectz75zzinline_siza7eza7));
										BgL_obj3421z00_1466;
									}
									BgL_auxz00_3902 = BgL_siza7eza7_1463;
								}
							else
								{	/* Inline/size.scm 144 */
									obj_t BgL_arg3667z00_1469;

									long BgL_arg3668z00_1470;

									BgL_arg3667z00_1469 = CDR(BgL_clausesz00_1462);
									{	/* Inline/size.scm 145 */
										long BgL_arg3670z00_1471;

										{	/* Inline/size.scm 145 */
											long BgL_arg3671z00_1472;

											long BgL_arg3672z00_1473;

											{	/* Inline/size.scm 145 */
												bool_t BgL_testz00_3943;

												{	/* Inline/size.scm 145 */
													obj_t BgL_auxz00_3944;

													BgL_auxz00_3944 = CAR(CAR(BgL_clausesz00_1462));
													BgL_testz00_3943 = PAIRP(BgL_auxz00_3944);
												}
												if (BgL_testz00_3943)
													{	/* Inline/size.scm 145 */
														BgL_arg3671z00_1472 =
															bgl_list_length(CAR(CAR(BgL_clausesz00_1462)));
													}
												else
													{	/* Inline/size.scm 145 */
														BgL_arg3671z00_1472 = ((long) 1);
											}}
											{	/* Inline/size.scm 148 */
												obj_t BgL_arg3679z00_1479;

												BgL_arg3679z00_1479 = CDR(CAR(BgL_clausesz00_1462));
												{	/* Inline/size.scm 148 */
													long BgL_res3848z00_2473;

													{	/* Inline/size.scm 148 */
														BgL_nodez00_bglt BgL_nodez00_2447;

														BgL_nodez00_2447 =
															(BgL_nodez00_bglt) (BgL_arg3679z00_1479);
														{	/* Inline/size.scm 148 */
															obj_t BgL_method3433z00_2448;

															{	/* Inline/size.scm 148 */
																BgL_objectz00_bglt BgL_objz00_2449;

																BgL_objz00_2449 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2447);
																{	/* Inline/size.scm 148 */
																	long BgL_objzd2classzd2numz00_2450;

																	BgL_objzd2classzd2numz00_2450 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2449);
																	{	/* Inline/size.scm 148 */
																		obj_t BgL_arg2643z00_2451;

																		BgL_arg2643z00_2451 =
																			PROCEDURE_REF
																			(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
																			(int) (((long) 1)));
																		{	/* Inline/size.scm 148 */
																			obj_t BgL_arrayz00_2453;

																			int BgL_offsetz00_2454;

																			BgL_arrayz00_2453 = BgL_arg2643z00_2451;
																			BgL_offsetz00_2454 =
																				(int) (BgL_objzd2classzd2numz00_2450);
																			{	/* Inline/size.scm 148 */
																				long BgL_offsetz00_2455;

																				BgL_offsetz00_2455 =
																					(
																					(long) (BgL_offsetz00_2454) -
																					OBJECT_TYPE);
																				{	/* Inline/size.scm 148 */
																					long BgL_modz00_2456;

																					{	/* Inline/size.scm 148 */
																						int BgL_arg2645z00_2457;

																						BgL_arg2645z00_2457 =
																							(int) (((long) 16));
																						{	/* Inline/size.scm 148 */
																							long BgL_auxz00_3962;

																							BgL_auxz00_3962 =
																								(long) (BgL_arg2645z00_2457);
																							BgL_modz00_2456 =
																								(BgL_offsetz00_2455 /
																								BgL_auxz00_3962);
																					}}
																					{	/* Inline/size.scm 148 */
																						long BgL_restz00_2458;

																						{	/* Inline/size.scm 148 */
																							int BgL_arg2644z00_2459;

																							BgL_arg2644z00_2459 =
																								(int) (((long) 16));
																							{	/* Inline/size.scm 148 */
																								long BgL_auxz00_3966;

																								BgL_auxz00_3966 =
																									(long) (BgL_arg2644z00_2459);
																								BgL_restz00_2458 =
																									(BgL_offsetz00_2455 %
																									BgL_auxz00_3966);
																						}}
																						{	/* Inline/size.scm 148 */

																							BgL_method3433z00_2448 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2453,
																									(int) (BgL_modz00_2456)),
																								(int) (BgL_restz00_2458));
															}}}}}}}}
															BgL_res3848z00_2473 =
																(long)
																CINT(PROCEDURE_ENTRY(BgL_method3433z00_2448)
																(BgL_method3433z00_2448,
																	(obj_t) (BgL_nodez00_2447), BEOA));
													}}
													BgL_arg3672z00_1473 = BgL_res3848z00_2473;
											}}
											BgL_arg3670z00_1471 =
												(BgL_arg3671z00_1472 + BgL_arg3672z00_1473);
										}
										BgL_arg3668z00_1470 =
											(BgL_siza7eza7_1463 + BgL_arg3670z00_1471);
									}
									{
										long BgL_siza7eza7_3980;

										obj_t BgL_clausesz00_3979;

										BgL_clausesz00_3979 = BgL_arg3667z00_1469;
										BgL_siza7eza7_3980 = BgL_arg3668z00_1470;
										BgL_siza7eza7_1463 = BgL_siza7eza7_3980;
										BgL_clausesz00_1462 = BgL_clausesz00_3979;
										goto BgL_zc3anonymousza33663ze3z83_1464;
									}
								}
						}
					}
					return BINT(BgL_auxz00_3902);
				}
			}
		}
	}



/* node-size-fail3459 */
	obj_t BGl_nodezd2siza7ezd2fail3459za7zzinline_siza7eza7(obj_t BgL_envz00_3004,
		obj_t BgL_nodez00_3005)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 128 */
			{
				BgL_failz00_bglt BgL_nodez00_1442;

				{	/* Inline/size.scm 129 */
					long BgL_auxz00_3983;

					BgL_nodez00_1442 = (BgL_failz00_bglt) (BgL_nodez00_3005);
					{	/* Inline/size.scm 129 */
						long BgL_proczd2siza7ez75_1445;

						{	/* Inline/size.scm 129 */
							BgL_nodez00_bglt BgL_arg3661z00_1453;

							BgL_arg3661z00_1453 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1442))->BgL_procz00);
							{	/* Inline/size.scm 129 */
								long BgL_res3834z00_2335;

								{	/* Inline/size.scm 129 */
									obj_t BgL_method3433z00_2310;

									{	/* Inline/size.scm 129 */
										BgL_objectz00_bglt BgL_objz00_2311;

										BgL_objz00_2311 =
											(BgL_objectz00_bglt) (BgL_arg3661z00_1453);
										{	/* Inline/size.scm 129 */
											long BgL_objzd2classzd2numz00_2312;

											BgL_objzd2classzd2numz00_2312 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2311);
											{	/* Inline/size.scm 129 */
												obj_t BgL_arg2643z00_2313;

												BgL_arg2643z00_2313 =
													PROCEDURE_REF
													(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
													(int) (((long) 1)));
												{	/* Inline/size.scm 129 */
													obj_t BgL_arrayz00_2315;

													int BgL_offsetz00_2316;

													BgL_arrayz00_2315 = BgL_arg2643z00_2313;
													BgL_offsetz00_2316 =
														(int) (BgL_objzd2classzd2numz00_2312);
													{	/* Inline/size.scm 129 */
														long BgL_offsetz00_2317;

														BgL_offsetz00_2317 =
															((long) (BgL_offsetz00_2316) - OBJECT_TYPE);
														{	/* Inline/size.scm 129 */
															long BgL_modz00_2318;

															{	/* Inline/size.scm 129 */
																int BgL_arg2645z00_2319;

																BgL_arg2645z00_2319 = (int) (((long) 16));
																{	/* Inline/size.scm 129 */
																	long BgL_auxz00_3993;

																	BgL_auxz00_3993 =
																		(long) (BgL_arg2645z00_2319);
																	BgL_modz00_2318 =
																		(BgL_offsetz00_2317 / BgL_auxz00_3993);
															}}
															{	/* Inline/size.scm 129 */
																long BgL_restz00_2320;

																{	/* Inline/size.scm 129 */
																	int BgL_arg2644z00_2321;

																	BgL_arg2644z00_2321 = (int) (((long) 16));
																	{	/* Inline/size.scm 129 */
																		long BgL_auxz00_3997;

																		BgL_auxz00_3997 =
																			(long) (BgL_arg2644z00_2321);
																		BgL_restz00_2320 =
																			(BgL_offsetz00_2317 % BgL_auxz00_3997);
																}}
																{	/* Inline/size.scm 129 */

																	BgL_method3433z00_2310 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2315,
																			(int) (BgL_modz00_2318)),
																		(int) (BgL_restz00_2320));
									}}}}}}}}
									BgL_res3834z00_2335 =
										(long)
										CINT(PROCEDURE_ENTRY(BgL_method3433z00_2310)
										(BgL_method3433z00_2310, (obj_t) (BgL_arg3661z00_1453),
											BEOA));
								}
								BgL_proczd2siza7ez75_1445 = BgL_res3834z00_2335;
						}}
						{	/* Inline/size.scm 129 */
							long BgL_msgzd2siza7ez75_1446;

							{	/* Inline/size.scm 130 */
								BgL_nodez00_bglt BgL_arg3660z00_1452;

								BgL_arg3660z00_1452 =
									(((BgL_failz00_bglt) CREF(BgL_nodez00_1442))->BgL_msgz00);
								{	/* Inline/size.scm 130 */
									long BgL_res3837z00_2363;

									{	/* Inline/size.scm 130 */
										obj_t BgL_method3433z00_2338;

										{	/* Inline/size.scm 130 */
											BgL_objectz00_bglt BgL_objz00_2339;

											BgL_objz00_2339 =
												(BgL_objectz00_bglt) (BgL_arg3660z00_1452);
											{	/* Inline/size.scm 130 */
												long BgL_objzd2classzd2numz00_2340;

												BgL_objzd2classzd2numz00_2340 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2339);
												{	/* Inline/size.scm 130 */
													obj_t BgL_arg2643z00_2341;

													BgL_arg2643z00_2341 =
														PROCEDURE_REF
														(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
														(int) (((long) 1)));
													{	/* Inline/size.scm 130 */
														obj_t BgL_arrayz00_2343;

														int BgL_offsetz00_2344;

														BgL_arrayz00_2343 = BgL_arg2643z00_2341;
														BgL_offsetz00_2344 =
															(int) (BgL_objzd2classzd2numz00_2340);
														{	/* Inline/size.scm 130 */
															long BgL_offsetz00_2345;

															BgL_offsetz00_2345 =
																((long) (BgL_offsetz00_2344) - OBJECT_TYPE);
															{	/* Inline/size.scm 130 */
																long BgL_modz00_2346;

																{	/* Inline/size.scm 130 */
																	int BgL_arg2645z00_2347;

																	BgL_arg2645z00_2347 = (int) (((long) 16));
																	{	/* Inline/size.scm 130 */
																		long BgL_auxz00_4017;

																		BgL_auxz00_4017 =
																			(long) (BgL_arg2645z00_2347);
																		BgL_modz00_2346 =
																			(BgL_offsetz00_2345 / BgL_auxz00_4017);
																}}
																{	/* Inline/size.scm 130 */
																	long BgL_restz00_2348;

																	{	/* Inline/size.scm 130 */
																		int BgL_arg2644z00_2349;

																		BgL_arg2644z00_2349 = (int) (((long) 16));
																		{	/* Inline/size.scm 130 */
																			long BgL_auxz00_4021;

																			BgL_auxz00_4021 =
																				(long) (BgL_arg2644z00_2349);
																			BgL_restz00_2348 =
																				(BgL_offsetz00_2345 % BgL_auxz00_4021);
																	}}
																	{	/* Inline/size.scm 130 */

																		BgL_method3433z00_2338 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2343,
																				(int) (BgL_modz00_2346)),
																			(int) (BgL_restz00_2348));
										}}}}}}}}
										BgL_res3837z00_2363 =
											(long)
											CINT(PROCEDURE_ENTRY(BgL_method3433z00_2338)
											(BgL_method3433z00_2338, (obj_t) (BgL_arg3660z00_1452),
												BEOA));
									}
									BgL_msgzd2siza7ez75_1446 = BgL_res3837z00_2363;
							}}
							{	/* Inline/size.scm 130 */
								long BgL_objzd2siza7ez75_1447;

								{	/* Inline/size.scm 131 */
									BgL_nodez00_bglt BgL_arg3659z00_1451;

									BgL_arg3659z00_1451 =
										(((BgL_failz00_bglt) CREF(BgL_nodez00_1442))->BgL_objz00);
									{	/* Inline/size.scm 131 */
										long BgL_res3840z00_2391;

										{	/* Inline/size.scm 131 */
											obj_t BgL_method3433z00_2366;

											{	/* Inline/size.scm 131 */
												BgL_objectz00_bglt BgL_objz00_2367;

												BgL_objz00_2367 =
													(BgL_objectz00_bglt) (BgL_arg3659z00_1451);
												{	/* Inline/size.scm 131 */
													long BgL_objzd2classzd2numz00_2368;

													BgL_objzd2classzd2numz00_2368 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2367);
													{	/* Inline/size.scm 131 */
														obj_t BgL_arg2643z00_2369;

														BgL_arg2643z00_2369 =
															PROCEDURE_REF
															(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
															(int) (((long) 1)));
														{	/* Inline/size.scm 131 */
															obj_t BgL_arrayz00_2371;

															int BgL_offsetz00_2372;

															BgL_arrayz00_2371 = BgL_arg2643z00_2369;
															BgL_offsetz00_2372 =
																(int) (BgL_objzd2classzd2numz00_2368);
															{	/* Inline/size.scm 131 */
																long BgL_offsetz00_2373;

																BgL_offsetz00_2373 =
																	((long) (BgL_offsetz00_2372) - OBJECT_TYPE);
																{	/* Inline/size.scm 131 */
																	long BgL_modz00_2374;

																	{	/* Inline/size.scm 131 */
																		int BgL_arg2645z00_2375;

																		BgL_arg2645z00_2375 = (int) (((long) 16));
																		{	/* Inline/size.scm 131 */
																			long BgL_auxz00_4041;

																			BgL_auxz00_4041 =
																				(long) (BgL_arg2645z00_2375);
																			BgL_modz00_2374 =
																				(BgL_offsetz00_2373 / BgL_auxz00_4041);
																	}}
																	{	/* Inline/size.scm 131 */
																		long BgL_restz00_2376;

																		{	/* Inline/size.scm 131 */
																			int BgL_arg2644z00_2377;

																			BgL_arg2644z00_2377 = (int) (((long) 16));
																			{	/* Inline/size.scm 131 */
																				long BgL_auxz00_4045;

																				BgL_auxz00_4045 =
																					(long) (BgL_arg2644z00_2377);
																				BgL_restz00_2376 =
																					(BgL_offsetz00_2373 %
																					BgL_auxz00_4045);
																		}}
																		{	/* Inline/size.scm 131 */

																			BgL_method3433z00_2366 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2371,
																					(int) (BgL_modz00_2374)),
																				(int) (BgL_restz00_2376));
											}}}}}}}}
											BgL_res3840z00_2391 =
												(long)
												CINT(PROCEDURE_ENTRY(BgL_method3433z00_2366)
												(BgL_method3433z00_2366, (obj_t) (BgL_arg3659z00_1451),
													BEOA));
										}
										BgL_objzd2siza7ez75_1447 = BgL_res3840z00_2391;
								}}
								{	/* Inline/size.scm 131 */

									BgL_auxz00_3983 =
										(((long) 2) +
										(BgL_proczd2siza7ez75_1445 +
											(BgL_msgzd2siza7ez75_1446 + BgL_objzd2siza7ez75_1447)));
					}}}}
					return BINT(BgL_auxz00_3983);
				}
			}
		}
	}



/* node-size-conditiona3457 */
	obj_t BGl_nodezd2siza7ezd2conditiona3457za7zzinline_siza7eza7(obj_t
		BgL_envz00_3006, obj_t BgL_nodez00_3007)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 119 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1428;

				{	/* Inline/size.scm 120 */
					long BgL_auxz00_4061;

					BgL_nodez00_1428 = (BgL_conditionalz00_bglt) (BgL_nodez00_3007);
					{	/* Inline/size.scm 120 */
						long BgL_testzd2siza7ez75_1431;

						{	/* Inline/size.scm 120 */
							BgL_nodez00_bglt BgL_arg3654z00_1439;

							BgL_arg3654z00_1439 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1428))->
								BgL_testz00);
							{	/* Inline/size.scm 120 */
								long BgL_res3825z00_2245;

								{	/* Inline/size.scm 120 */
									obj_t BgL_method3433z00_2220;

									{	/* Inline/size.scm 120 */
										BgL_objectz00_bglt BgL_objz00_2221;

										BgL_objz00_2221 =
											(BgL_objectz00_bglt) (BgL_arg3654z00_1439);
										{	/* Inline/size.scm 120 */
											long BgL_objzd2classzd2numz00_2222;

											BgL_objzd2classzd2numz00_2222 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2221);
											{	/* Inline/size.scm 120 */
												obj_t BgL_arg2643z00_2223;

												BgL_arg2643z00_2223 =
													PROCEDURE_REF
													(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
													(int) (((long) 1)));
												{	/* Inline/size.scm 120 */
													obj_t BgL_arrayz00_2225;

													int BgL_offsetz00_2226;

													BgL_arrayz00_2225 = BgL_arg2643z00_2223;
													BgL_offsetz00_2226 =
														(int) (BgL_objzd2classzd2numz00_2222);
													{	/* Inline/size.scm 120 */
														long BgL_offsetz00_2227;

														BgL_offsetz00_2227 =
															((long) (BgL_offsetz00_2226) - OBJECT_TYPE);
														{	/* Inline/size.scm 120 */
															long BgL_modz00_2228;

															{	/* Inline/size.scm 120 */
																int BgL_arg2645z00_2229;

																BgL_arg2645z00_2229 = (int) (((long) 16));
																{	/* Inline/size.scm 120 */
																	long BgL_auxz00_4071;

																	BgL_auxz00_4071 =
																		(long) (BgL_arg2645z00_2229);
																	BgL_modz00_2228 =
																		(BgL_offsetz00_2227 / BgL_auxz00_4071);
															}}
															{	/* Inline/size.scm 120 */
																long BgL_restz00_2230;

																{	/* Inline/size.scm 120 */
																	int BgL_arg2644z00_2231;

																	BgL_arg2644z00_2231 = (int) (((long) 16));
																	{	/* Inline/size.scm 120 */
																		long BgL_auxz00_4075;

																		BgL_auxz00_4075 =
																			(long) (BgL_arg2644z00_2231);
																		BgL_restz00_2230 =
																			(BgL_offsetz00_2227 % BgL_auxz00_4075);
																}}
																{	/* Inline/size.scm 120 */

																	BgL_method3433z00_2220 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2225,
																			(int) (BgL_modz00_2228)),
																		(int) (BgL_restz00_2230));
									}}}}}}}}
									BgL_res3825z00_2245 =
										(long)
										CINT(PROCEDURE_ENTRY(BgL_method3433z00_2220)
										(BgL_method3433z00_2220, (obj_t) (BgL_arg3654z00_1439),
											BEOA));
								}
								BgL_testzd2siza7ez75_1431 = BgL_res3825z00_2245;
						}}
						{	/* Inline/size.scm 120 */
							long BgL_truezd2siza7ez75_1432;

							{	/* Inline/size.scm 121 */
								BgL_nodez00_bglt BgL_arg3653z00_1438;

								BgL_arg3653z00_1438 =
									(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1428))->
									BgL_truez00);
								{	/* Inline/size.scm 121 */
									long BgL_res3828z00_2273;

									{	/* Inline/size.scm 121 */
										obj_t BgL_method3433z00_2248;

										{	/* Inline/size.scm 121 */
											BgL_objectz00_bglt BgL_objz00_2249;

											BgL_objz00_2249 =
												(BgL_objectz00_bglt) (BgL_arg3653z00_1438);
											{	/* Inline/size.scm 121 */
												long BgL_objzd2classzd2numz00_2250;

												BgL_objzd2classzd2numz00_2250 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2249);
												{	/* Inline/size.scm 121 */
													obj_t BgL_arg2643z00_2251;

													BgL_arg2643z00_2251 =
														PROCEDURE_REF
														(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
														(int) (((long) 1)));
													{	/* Inline/size.scm 121 */
														obj_t BgL_arrayz00_2253;

														int BgL_offsetz00_2254;

														BgL_arrayz00_2253 = BgL_arg2643z00_2251;
														BgL_offsetz00_2254 =
															(int) (BgL_objzd2classzd2numz00_2250);
														{	/* Inline/size.scm 121 */
															long BgL_offsetz00_2255;

															BgL_offsetz00_2255 =
																((long) (BgL_offsetz00_2254) - OBJECT_TYPE);
															{	/* Inline/size.scm 121 */
																long BgL_modz00_2256;

																{	/* Inline/size.scm 121 */
																	int BgL_arg2645z00_2257;

																	BgL_arg2645z00_2257 = (int) (((long) 16));
																	{	/* Inline/size.scm 121 */
																		long BgL_auxz00_4095;

																		BgL_auxz00_4095 =
																			(long) (BgL_arg2645z00_2257);
																		BgL_modz00_2256 =
																			(BgL_offsetz00_2255 / BgL_auxz00_4095);
																}}
																{	/* Inline/size.scm 121 */
																	long BgL_restz00_2258;

																	{	/* Inline/size.scm 121 */
																		int BgL_arg2644z00_2259;

																		BgL_arg2644z00_2259 = (int) (((long) 16));
																		{	/* Inline/size.scm 121 */
																			long BgL_auxz00_4099;

																			BgL_auxz00_4099 =
																				(long) (BgL_arg2644z00_2259);
																			BgL_restz00_2258 =
																				(BgL_offsetz00_2255 % BgL_auxz00_4099);
																	}}
																	{	/* Inline/size.scm 121 */

																		BgL_method3433z00_2248 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2253,
																				(int) (BgL_modz00_2256)),
																			(int) (BgL_restz00_2258));
										}}}}}}}}
										BgL_res3828z00_2273 =
											(long)
											CINT(PROCEDURE_ENTRY(BgL_method3433z00_2248)
											(BgL_method3433z00_2248, (obj_t) (BgL_arg3653z00_1438),
												BEOA));
									}
									BgL_truezd2siza7ez75_1432 = BgL_res3828z00_2273;
							}}
							{	/* Inline/size.scm 121 */
								long BgL_falsezd2siza7ez75_1433;

								{	/* Inline/size.scm 122 */
									BgL_nodez00_bglt BgL_arg3652z00_1437;

									BgL_arg3652z00_1437 =
										(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1428))->
										BgL_falsez00);
									{	/* Inline/size.scm 122 */
										long BgL_res3831z00_2301;

										{	/* Inline/size.scm 122 */
											obj_t BgL_method3433z00_2276;

											{	/* Inline/size.scm 122 */
												BgL_objectz00_bglt BgL_objz00_2277;

												BgL_objz00_2277 =
													(BgL_objectz00_bglt) (BgL_arg3652z00_1437);
												{	/* Inline/size.scm 122 */
													long BgL_objzd2classzd2numz00_2278;

													BgL_objzd2classzd2numz00_2278 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2277);
													{	/* Inline/size.scm 122 */
														obj_t BgL_arg2643z00_2279;

														BgL_arg2643z00_2279 =
															PROCEDURE_REF
															(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
															(int) (((long) 1)));
														{	/* Inline/size.scm 122 */
															obj_t BgL_arrayz00_2281;

															int BgL_offsetz00_2282;

															BgL_arrayz00_2281 = BgL_arg2643z00_2279;
															BgL_offsetz00_2282 =
																(int) (BgL_objzd2classzd2numz00_2278);
															{	/* Inline/size.scm 122 */
																long BgL_offsetz00_2283;

																BgL_offsetz00_2283 =
																	((long) (BgL_offsetz00_2282) - OBJECT_TYPE);
																{	/* Inline/size.scm 122 */
																	long BgL_modz00_2284;

																	{	/* Inline/size.scm 122 */
																		int BgL_arg2645z00_2285;

																		BgL_arg2645z00_2285 = (int) (((long) 16));
																		{	/* Inline/size.scm 122 */
																			long BgL_auxz00_4119;

																			BgL_auxz00_4119 =
																				(long) (BgL_arg2645z00_2285);
																			BgL_modz00_2284 =
																				(BgL_offsetz00_2283 / BgL_auxz00_4119);
																	}}
																	{	/* Inline/size.scm 122 */
																		long BgL_restz00_2286;

																		{	/* Inline/size.scm 122 */
																			int BgL_arg2644z00_2287;

																			BgL_arg2644z00_2287 = (int) (((long) 16));
																			{	/* Inline/size.scm 122 */
																				long BgL_auxz00_4123;

																				BgL_auxz00_4123 =
																					(long) (BgL_arg2644z00_2287);
																				BgL_restz00_2286 =
																					(BgL_offsetz00_2283 %
																					BgL_auxz00_4123);
																		}}
																		{	/* Inline/size.scm 122 */

																			BgL_method3433z00_2276 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2281,
																					(int) (BgL_modz00_2284)),
																				(int) (BgL_restz00_2286));
											}}}}}}}}
											BgL_res3831z00_2301 =
												(long)
												CINT(PROCEDURE_ENTRY(BgL_method3433z00_2276)
												(BgL_method3433z00_2276, (obj_t) (BgL_arg3652z00_1437),
													BEOA));
										}
										BgL_falsezd2siza7ez75_1433 = BgL_res3831z00_2301;
								}}
								{	/* Inline/size.scm 122 */

									BgL_auxz00_4061 =
										(((long) 1) +
										(BgL_testzd2siza7ez75_1431 +
											(BgL_truezd2siza7ez75_1432 +
												BgL_falsezd2siza7ez75_1433)));
					}}}}
					return BINT(BgL_auxz00_4061);
				}
			}
		}
	}



/* node-size-setq3455 */
	obj_t BGl_nodezd2siza7ezd2setq3455za7zzinline_siza7eza7(obj_t BgL_envz00_3008,
		obj_t BgL_nodez00_3009)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 113 */
			{
				BgL_setqz00_bglt BgL_nodez00_1420;

				{	/* Inline/size.scm 114 */
					long BgL_auxz00_4139;

					BgL_nodez00_1420 = (BgL_setqz00_bglt) (BgL_nodez00_3009);
					{	/* Inline/size.scm 114 */
						long BgL_arg3646z00_1424;

						{	/* Inline/size.scm 114 */
							BgL_nodez00_bglt BgL_arg3647z00_1425;

							BgL_arg3647z00_1425 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1420))->BgL_valuez00);
							{	/* Inline/size.scm 114 */
								long BgL_res3822z00_2215;

								{	/* Inline/size.scm 114 */
									obj_t BgL_method3433z00_2190;

									{	/* Inline/size.scm 114 */
										BgL_objectz00_bglt BgL_objz00_2191;

										BgL_objz00_2191 =
											(BgL_objectz00_bglt) (BgL_arg3647z00_1425);
										{	/* Inline/size.scm 114 */
											long BgL_objzd2classzd2numz00_2192;

											BgL_objzd2classzd2numz00_2192 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2191);
											{	/* Inline/size.scm 114 */
												obj_t BgL_arg2643z00_2193;

												BgL_arg2643z00_2193 =
													PROCEDURE_REF
													(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
													(int) (((long) 1)));
												{	/* Inline/size.scm 114 */
													obj_t BgL_arrayz00_2195;

													int BgL_offsetz00_2196;

													BgL_arrayz00_2195 = BgL_arg2643z00_2193;
													BgL_offsetz00_2196 =
														(int) (BgL_objzd2classzd2numz00_2192);
													{	/* Inline/size.scm 114 */
														long BgL_offsetz00_2197;

														BgL_offsetz00_2197 =
															((long) (BgL_offsetz00_2196) - OBJECT_TYPE);
														{	/* Inline/size.scm 114 */
															long BgL_modz00_2198;

															{	/* Inline/size.scm 114 */
																int BgL_arg2645z00_2199;

																BgL_arg2645z00_2199 = (int) (((long) 16));
																{	/* Inline/size.scm 114 */
																	long BgL_auxz00_4149;

																	BgL_auxz00_4149 =
																		(long) (BgL_arg2645z00_2199);
																	BgL_modz00_2198 =
																		(BgL_offsetz00_2197 / BgL_auxz00_4149);
															}}
															{	/* Inline/size.scm 114 */
																long BgL_restz00_2200;

																{	/* Inline/size.scm 114 */
																	int BgL_arg2644z00_2201;

																	BgL_arg2644z00_2201 = (int) (((long) 16));
																	{	/* Inline/size.scm 114 */
																		long BgL_auxz00_4153;

																		BgL_auxz00_4153 =
																			(long) (BgL_arg2644z00_2201);
																		BgL_restz00_2200 =
																			(BgL_offsetz00_2197 % BgL_auxz00_4153);
																}}
																{	/* Inline/size.scm 114 */

																	BgL_method3433z00_2190 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2195,
																			(int) (BgL_modz00_2198)),
																		(int) (BgL_restz00_2200));
									}}}}}}}}
									BgL_res3822z00_2215 =
										(long)
										CINT(PROCEDURE_ENTRY(BgL_method3433z00_2190)
										(BgL_method3433z00_2190, (obj_t) (BgL_arg3647z00_1425),
											BEOA));
								}
								BgL_arg3646z00_1424 = BgL_res3822z00_2215;
						}}
						BgL_auxz00_4139 = (((long) 2) + BgL_arg3646z00_1424);
					}
					return BINT(BgL_auxz00_4139);
				}
			}
		}
	}



/* node-size-extern3453 */
	obj_t BGl_nodezd2siza7ezd2extern3453za7zzinline_siza7eza7(obj_t
		BgL_envz00_3010, obj_t BgL_nodez00_3011)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 103 */
			{
				BgL_externz00_bglt BgL_nodez00_1404;

				{	/* Inline/size.scm 104 */
					long BgL_auxz00_4167;

					BgL_nodez00_1404 = (BgL_externz00_bglt) (BgL_nodez00_3011);
					{	/* Inline/size.scm 104 */
						obj_t BgL_g3418z00_1407;

						BgL_g3418z00_1407 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1404))->BgL_exprza2za2);
						{
							obj_t BgL_argsz00_1409;

							long BgL_siza7eza7_1410;

							BgL_argsz00_1409 = BgL_g3418z00_1407;
							BgL_siza7eza7_1410 = ((long) 1);
						BgL_zc3anonymousza33638ze3z83_1411:
							if (NULLP(BgL_argsz00_1409))
								{	/* Inline/size.scm 106 */
									BgL_auxz00_4167 = BgL_siza7eza7_1410;
								}
							else
								{	/* Inline/size.scm 108 */
									obj_t BgL_arg3640z00_1413;

									long BgL_arg3641z00_1414;

									BgL_arg3640z00_1413 = CDR(BgL_argsz00_1409);
									{	/* Inline/size.scm 108 */
										long BgL_arg3642z00_1415;

										{	/* Inline/size.scm 108 */
											obj_t BgL_arg3643z00_1416;

											BgL_arg3643z00_1416 = CAR(BgL_argsz00_1409);
											{	/* Inline/size.scm 108 */
												long BgL_res3819z00_2185;

												{	/* Inline/size.scm 108 */
													BgL_nodez00_bglt BgL_nodez00_2159;

													BgL_nodez00_2159 =
														(BgL_nodez00_bglt) (BgL_arg3643z00_1416);
													{	/* Inline/size.scm 108 */
														obj_t BgL_method3433z00_2160;

														{	/* Inline/size.scm 108 */
															BgL_objectz00_bglt BgL_objz00_2161;

															BgL_objz00_2161 =
																(BgL_objectz00_bglt) (BgL_nodez00_2159);
															{	/* Inline/size.scm 108 */
																long BgL_objzd2classzd2numz00_2162;

																BgL_objzd2classzd2numz00_2162 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2161);
																{	/* Inline/size.scm 108 */
																	obj_t BgL_arg2643z00_2163;

																	BgL_arg2643z00_2163 =
																		PROCEDURE_REF
																		(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
																		(int) (((long) 1)));
																	{	/* Inline/size.scm 108 */
																		obj_t BgL_arrayz00_2165;

																		int BgL_offsetz00_2166;

																		BgL_arrayz00_2165 = BgL_arg2643z00_2163;
																		BgL_offsetz00_2166 =
																			(int) (BgL_objzd2classzd2numz00_2162);
																		{	/* Inline/size.scm 108 */
																			long BgL_offsetz00_2167;

																			BgL_offsetz00_2167 =
																				(
																				(long) (BgL_offsetz00_2166) -
																				OBJECT_TYPE);
																			{	/* Inline/size.scm 108 */
																				long BgL_modz00_2168;

																				{	/* Inline/size.scm 108 */
																					int BgL_arg2645z00_2169;

																					BgL_arg2645z00_2169 =
																						(int) (((long) 16));
																					{	/* Inline/size.scm 108 */
																						long BgL_auxz00_4182;

																						BgL_auxz00_4182 =
																							(long) (BgL_arg2645z00_2169);
																						BgL_modz00_2168 =
																							(BgL_offsetz00_2167 /
																							BgL_auxz00_4182);
																				}}
																				{	/* Inline/size.scm 108 */
																					long BgL_restz00_2170;

																					{	/* Inline/size.scm 108 */
																						int BgL_arg2644z00_2171;

																						BgL_arg2644z00_2171 =
																							(int) (((long) 16));
																						{	/* Inline/size.scm 108 */
																							long BgL_auxz00_4186;

																							BgL_auxz00_4186 =
																								(long) (BgL_arg2644z00_2171);
																							BgL_restz00_2170 =
																								(BgL_offsetz00_2167 %
																								BgL_auxz00_4186);
																					}}
																					{	/* Inline/size.scm 108 */

																						BgL_method3433z00_2160 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2165,
																								(int) (BgL_modz00_2168)),
																							(int) (BgL_restz00_2170));
														}}}}}}}}
														BgL_res3819z00_2185 =
															(long)
															CINT(PROCEDURE_ENTRY(BgL_method3433z00_2160)
															(BgL_method3433z00_2160,
																(obj_t) (BgL_nodez00_2159), BEOA));
												}}
												BgL_arg3642z00_1415 = BgL_res3819z00_2185;
										}}
										BgL_arg3641z00_1414 =
											(BgL_siza7eza7_1410 + BgL_arg3642z00_1415);
									}
									{
										long BgL_siza7eza7_4199;

										obj_t BgL_argsz00_4198;

										BgL_argsz00_4198 = BgL_arg3640z00_1413;
										BgL_siza7eza7_4199 = BgL_arg3641z00_1414;
										BgL_siza7eza7_1410 = BgL_siza7eza7_4199;
										BgL_argsz00_1409 = BgL_argsz00_4198;
										goto BgL_zc3anonymousza33638ze3z83_1411;
									}
								}
						}
					}
					return BINT(BgL_auxz00_4167);
				}
			}
		}
	}



/* node-size-cast3451 */
	obj_t BGl_nodezd2siza7ezd2cast3451za7zzinline_siza7eza7(obj_t BgL_envz00_3012,
		obj_t BgL_nodez00_3013)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 96 */
			{
				BgL_castz00_bglt BgL_nodez00_1397;

				{	/* Inline/size.scm 97 */
					long BgL_auxz00_4202;

					BgL_nodez00_1397 = (BgL_castz00_bglt) (BgL_nodez00_3013);
					{	/* Inline/size.scm 97 */
						BgL_nodez00_bglt BgL_arg3636z00_2126;

						BgL_arg3636z00_2126 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1397))->BgL_argz00);
						{	/* Inline/size.scm 97 */
							long BgL_res3816z00_2154;

							{	/* Inline/size.scm 97 */
								obj_t BgL_method3433z00_2129;

								{	/* Inline/size.scm 97 */
									BgL_objectz00_bglt BgL_objz00_2130;

									BgL_objz00_2130 = (BgL_objectz00_bglt) (BgL_arg3636z00_2126);
									{	/* Inline/size.scm 97 */
										long BgL_objzd2classzd2numz00_2131;

										BgL_objzd2classzd2numz00_2131 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2130);
										{	/* Inline/size.scm 97 */
											obj_t BgL_arg2643z00_2132;

											BgL_arg2643z00_2132 =
												PROCEDURE_REF
												(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
												(int) (((long) 1)));
											{	/* Inline/size.scm 97 */
												obj_t BgL_arrayz00_2134;

												int BgL_offsetz00_2135;

												BgL_arrayz00_2134 = BgL_arg2643z00_2132;
												BgL_offsetz00_2135 =
													(int) (BgL_objzd2classzd2numz00_2131);
												{	/* Inline/size.scm 97 */
													long BgL_offsetz00_2136;

													BgL_offsetz00_2136 =
														((long) (BgL_offsetz00_2135) - OBJECT_TYPE);
													{	/* Inline/size.scm 97 */
														long BgL_modz00_2137;

														{	/* Inline/size.scm 97 */
															int BgL_arg2645z00_2138;

															BgL_arg2645z00_2138 = (int) (((long) 16));
															{	/* Inline/size.scm 97 */
																long BgL_auxz00_4212;

																BgL_auxz00_4212 = (long) (BgL_arg2645z00_2138);
																BgL_modz00_2137 =
																	(BgL_offsetz00_2136 / BgL_auxz00_4212);
														}}
														{	/* Inline/size.scm 97 */
															long BgL_restz00_2139;

															{	/* Inline/size.scm 97 */
																int BgL_arg2644z00_2140;

																BgL_arg2644z00_2140 = (int) (((long) 16));
																{	/* Inline/size.scm 97 */
																	long BgL_auxz00_4216;

																	BgL_auxz00_4216 =
																		(long) (BgL_arg2644z00_2140);
																	BgL_restz00_2139 =
																		(BgL_offsetz00_2136 % BgL_auxz00_4216);
															}}
															{	/* Inline/size.scm 97 */

																BgL_method3433z00_2129 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2134,
																		(int) (BgL_modz00_2137)),
																	(int) (BgL_restz00_2139));
								}}}}}}}}
								BgL_res3816z00_2154 =
									(long)
									CINT(PROCEDURE_ENTRY(BgL_method3433z00_2129)
									(BgL_method3433z00_2129, (obj_t) (BgL_arg3636z00_2126),
										BEOA));
							}
							BgL_auxz00_4202 = BgL_res3816z00_2154;
					}}
					return BINT(BgL_auxz00_4202);
				}
			}
		}
	}



/* node-size-funcall3449 */
	obj_t BGl_nodezd2siza7ezd2funcall3449za7zzinline_siza7eza7(obj_t
		BgL_envz00_3014, obj_t BgL_nodez00_3015)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 86 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1379;

				{	/* Inline/size.scm 87 */
					long BgL_auxz00_4229;

					BgL_nodez00_1379 = (BgL_funcallz00_bglt) (BgL_nodez00_3015);
					{	/* Inline/size.scm 87 */
						obj_t BgL_g3414z00_1382;

						long BgL_g3415z00_1383;

						BgL_g3414z00_1382 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1379))->BgL_argsz00);
						{	/* Inline/size.scm 88 */
							BgL_nodez00_bglt BgL_arg3634z00_1394;

							BgL_arg3634z00_1394 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1379))->BgL_funz00);
							{	/* Inline/size.scm 88 */
								long BgL_res3810z00_2092;

								{	/* Inline/size.scm 88 */
									obj_t BgL_method3433z00_2067;

									{	/* Inline/size.scm 88 */
										BgL_objectz00_bglt BgL_objz00_2068;

										BgL_objz00_2068 =
											(BgL_objectz00_bglt) (BgL_arg3634z00_1394);
										{	/* Inline/size.scm 88 */
											long BgL_objzd2classzd2numz00_2069;

											BgL_objzd2classzd2numz00_2069 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2068);
											{	/* Inline/size.scm 88 */
												obj_t BgL_arg2643z00_2070;

												BgL_arg2643z00_2070 =
													PROCEDURE_REF
													(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
													(int) (((long) 1)));
												{	/* Inline/size.scm 88 */
													obj_t BgL_arrayz00_2072;

													int BgL_offsetz00_2073;

													BgL_arrayz00_2072 = BgL_arg2643z00_2070;
													BgL_offsetz00_2073 =
														(int) (BgL_objzd2classzd2numz00_2069);
													{	/* Inline/size.scm 88 */
														long BgL_offsetz00_2074;

														BgL_offsetz00_2074 =
															((long) (BgL_offsetz00_2073) - OBJECT_TYPE);
														{	/* Inline/size.scm 88 */
															long BgL_modz00_2075;

															{	/* Inline/size.scm 88 */
																int BgL_arg2645z00_2076;

																BgL_arg2645z00_2076 = (int) (((long) 16));
																{	/* Inline/size.scm 88 */
																	long BgL_auxz00_4240;

																	BgL_auxz00_4240 =
																		(long) (BgL_arg2645z00_2076);
																	BgL_modz00_2075 =
																		(BgL_offsetz00_2074 / BgL_auxz00_4240);
															}}
															{	/* Inline/size.scm 88 */
																long BgL_restz00_2077;

																{	/* Inline/size.scm 88 */
																	int BgL_arg2644z00_2078;

																	BgL_arg2644z00_2078 = (int) (((long) 16));
																	{	/* Inline/size.scm 88 */
																		long BgL_auxz00_4244;

																		BgL_auxz00_4244 =
																			(long) (BgL_arg2644z00_2078);
																		BgL_restz00_2077 =
																			(BgL_offsetz00_2074 % BgL_auxz00_4244);
																}}
																{	/* Inline/size.scm 88 */

																	BgL_method3433z00_2067 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2072,
																			(int) (BgL_modz00_2075)),
																		(int) (BgL_restz00_2077));
									}}}}}}}}
									BgL_res3810z00_2092 =
										(long)
										CINT(PROCEDURE_ENTRY(BgL_method3433z00_2067)
										(BgL_method3433z00_2067, (obj_t) (BgL_arg3634z00_1394),
											BEOA));
								}
								BgL_g3415z00_1383 = BgL_res3810z00_2092;
						}}
						{
							obj_t BgL_argsz00_1385;

							long BgL_siza7eza7_1386;

							BgL_argsz00_1385 = BgL_g3414z00_1382;
							BgL_siza7eza7_1386 = BgL_g3415z00_1383;
						BgL_zc3anonymousza33628ze3z83_1387:
							if (NULLP(BgL_argsz00_1385))
								{	/* Inline/size.scm 89 */
									BgL_auxz00_4229 = BgL_siza7eza7_1386;
								}
							else
								{	/* Inline/size.scm 91 */
									obj_t BgL_arg3630z00_1389;

									long BgL_arg3631z00_1390;

									BgL_arg3630z00_1389 = CDR(BgL_argsz00_1385);
									{	/* Inline/size.scm 91 */
										long BgL_arg3632z00_1391;

										{	/* Inline/size.scm 91 */
											obj_t BgL_arg3633z00_1392;

											BgL_arg3633z00_1392 = CAR(BgL_argsz00_1385);
											{	/* Inline/size.scm 91 */
												long BgL_res3813z00_2122;

												{	/* Inline/size.scm 91 */
													BgL_nodez00_bglt BgL_nodez00_2096;

													BgL_nodez00_2096 =
														(BgL_nodez00_bglt) (BgL_arg3633z00_1392);
													{	/* Inline/size.scm 91 */
														obj_t BgL_method3433z00_2097;

														{	/* Inline/size.scm 91 */
															BgL_objectz00_bglt BgL_objz00_2098;

															BgL_objz00_2098 =
																(BgL_objectz00_bglt) (BgL_nodez00_2096);
															{	/* Inline/size.scm 91 */
																long BgL_objzd2classzd2numz00_2099;

																BgL_objzd2classzd2numz00_2099 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2098);
																{	/* Inline/size.scm 91 */
																	obj_t BgL_arg2643z00_2100;

																	BgL_arg2643z00_2100 =
																		PROCEDURE_REF
																		(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
																		(int) (((long) 1)));
																	{	/* Inline/size.scm 91 */
																		obj_t BgL_arrayz00_2102;

																		int BgL_offsetz00_2103;

																		BgL_arrayz00_2102 = BgL_arg2643z00_2100;
																		BgL_offsetz00_2103 =
																			(int) (BgL_objzd2classzd2numz00_2099);
																		{	/* Inline/size.scm 91 */
																			long BgL_offsetz00_2104;

																			BgL_offsetz00_2104 =
																				(
																				(long) (BgL_offsetz00_2103) -
																				OBJECT_TYPE);
																			{	/* Inline/size.scm 91 */
																				long BgL_modz00_2105;

																				{	/* Inline/size.scm 91 */
																					int BgL_arg2645z00_2106;

																					BgL_arg2645z00_2106 =
																						(int) (((long) 16));
																					{	/* Inline/size.scm 91 */
																						long BgL_auxz00_4268;

																						BgL_auxz00_4268 =
																							(long) (BgL_arg2645z00_2106);
																						BgL_modz00_2105 =
																							(BgL_offsetz00_2104 /
																							BgL_auxz00_4268);
																				}}
																				{	/* Inline/size.scm 91 */
																					long BgL_restz00_2107;

																					{	/* Inline/size.scm 91 */
																						int BgL_arg2644z00_2108;

																						BgL_arg2644z00_2108 =
																							(int) (((long) 16));
																						{	/* Inline/size.scm 91 */
																							long BgL_auxz00_4272;

																							BgL_auxz00_4272 =
																								(long) (BgL_arg2644z00_2108);
																							BgL_restz00_2107 =
																								(BgL_offsetz00_2104 %
																								BgL_auxz00_4272);
																					}}
																					{	/* Inline/size.scm 91 */

																						BgL_method3433z00_2097 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2102,
																								(int) (BgL_modz00_2105)),
																							(int) (BgL_restz00_2107));
														}}}}}}}}
														BgL_res3813z00_2122 =
															(long)
															CINT(PROCEDURE_ENTRY(BgL_method3433z00_2097)
															(BgL_method3433z00_2097,
																(obj_t) (BgL_nodez00_2096), BEOA));
												}}
												BgL_arg3632z00_1391 = BgL_res3813z00_2122;
										}}
										BgL_arg3631z00_1390 =
											(BgL_siza7eza7_1386 + BgL_arg3632z00_1391);
									}
									{
										long BgL_siza7eza7_4285;

										obj_t BgL_argsz00_4284;

										BgL_argsz00_4284 = BgL_arg3630z00_1389;
										BgL_siza7eza7_4285 = BgL_arg3631z00_1390;
										BgL_siza7eza7_1386 = BgL_siza7eza7_4285;
										BgL_argsz00_1385 = BgL_argsz00_4284;
										goto BgL_zc3anonymousza33628ze3z83_1387;
									}
								}
						}
					}
					return BINT(BgL_auxz00_4229);
				}
			}
		}
	}



/* node-size-app-ly3447 */
	obj_t BGl_nodezd2siza7ezd2appzd2ly3447z75zzinline_siza7eza7(obj_t
		BgL_envz00_3016, obj_t BgL_nodez00_3017)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 80 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1368;

				{	/* Inline/size.scm 81 */
					long BgL_auxz00_4288;

					BgL_nodez00_1368 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_3017);
					{	/* Inline/size.scm 81 */
						long BgL_arg3622z00_1372;

						{	/* Inline/size.scm 81 */
							long BgL_arg3623z00_1373;

							long BgL_arg3624z00_1374;

							{	/* Inline/size.scm 81 */
								BgL_nodez00_bglt BgL_arg3625z00_1375;

								BgL_arg3625z00_1375 =
									(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1368))->BgL_funz00);
								{	/* Inline/size.scm 81 */
									long BgL_res3804z00_2031;

									{	/* Inline/size.scm 81 */
										obj_t BgL_method3433z00_2006;

										{	/* Inline/size.scm 81 */
											BgL_objectz00_bglt BgL_objz00_2007;

											BgL_objz00_2007 =
												(BgL_objectz00_bglt) (BgL_arg3625z00_1375);
											{	/* Inline/size.scm 81 */
												long BgL_objzd2classzd2numz00_2008;

												BgL_objzd2classzd2numz00_2008 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2007);
												{	/* Inline/size.scm 81 */
													obj_t BgL_arg2643z00_2009;

													BgL_arg2643z00_2009 =
														PROCEDURE_REF
														(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
														(int) (((long) 1)));
													{	/* Inline/size.scm 81 */
														obj_t BgL_arrayz00_2011;

														int BgL_offsetz00_2012;

														BgL_arrayz00_2011 = BgL_arg2643z00_2009;
														BgL_offsetz00_2012 =
															(int) (BgL_objzd2classzd2numz00_2008);
														{	/* Inline/size.scm 81 */
															long BgL_offsetz00_2013;

															BgL_offsetz00_2013 =
																((long) (BgL_offsetz00_2012) - OBJECT_TYPE);
															{	/* Inline/size.scm 81 */
																long BgL_modz00_2014;

																{	/* Inline/size.scm 81 */
																	int BgL_arg2645z00_2015;

																	BgL_arg2645z00_2015 = (int) (((long) 16));
																	{	/* Inline/size.scm 81 */
																		long BgL_auxz00_4298;

																		BgL_auxz00_4298 =
																			(long) (BgL_arg2645z00_2015);
																		BgL_modz00_2014 =
																			(BgL_offsetz00_2013 / BgL_auxz00_4298);
																}}
																{	/* Inline/size.scm 81 */
																	long BgL_restz00_2016;

																	{	/* Inline/size.scm 81 */
																		int BgL_arg2644z00_2017;

																		BgL_arg2644z00_2017 = (int) (((long) 16));
																		{	/* Inline/size.scm 81 */
																			long BgL_auxz00_4302;

																			BgL_auxz00_4302 =
																				(long) (BgL_arg2644z00_2017);
																			BgL_restz00_2016 =
																				(BgL_offsetz00_2013 % BgL_auxz00_4302);
																	}}
																	{	/* Inline/size.scm 81 */

																		BgL_method3433z00_2006 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2011,
																				(int) (BgL_modz00_2014)),
																			(int) (BgL_restz00_2016));
										}}}}}}}}
										BgL_res3804z00_2031 =
											(long)
											CINT(PROCEDURE_ENTRY(BgL_method3433z00_2006)
											(BgL_method3433z00_2006, (obj_t) (BgL_arg3625z00_1375),
												BEOA));
									}
									BgL_arg3623z00_1373 = BgL_res3804z00_2031;
							}}
							{	/* Inline/size.scm 81 */
								BgL_nodez00_bglt BgL_arg3626z00_1376;

								BgL_arg3626z00_1376 =
									(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1368))->BgL_argz00);
								{	/* Inline/size.scm 81 */
									long BgL_res3807z00_2059;

									{	/* Inline/size.scm 81 */
										obj_t BgL_method3433z00_2034;

										{	/* Inline/size.scm 81 */
											BgL_objectz00_bglt BgL_objz00_2035;

											BgL_objz00_2035 =
												(BgL_objectz00_bglt) (BgL_arg3626z00_1376);
											{	/* Inline/size.scm 81 */
												long BgL_objzd2classzd2numz00_2036;

												BgL_objzd2classzd2numz00_2036 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2035);
												{	/* Inline/size.scm 81 */
													obj_t BgL_arg2643z00_2037;

													BgL_arg2643z00_2037 =
														PROCEDURE_REF
														(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
														(int) (((long) 1)));
													{	/* Inline/size.scm 81 */
														obj_t BgL_arrayz00_2039;

														int BgL_offsetz00_2040;

														BgL_arrayz00_2039 = BgL_arg2643z00_2037;
														BgL_offsetz00_2040 =
															(int) (BgL_objzd2classzd2numz00_2036);
														{	/* Inline/size.scm 81 */
															long BgL_offsetz00_2041;

															BgL_offsetz00_2041 =
																((long) (BgL_offsetz00_2040) - OBJECT_TYPE);
															{	/* Inline/size.scm 81 */
																long BgL_modz00_2042;

																{	/* Inline/size.scm 81 */
																	int BgL_arg2645z00_2043;

																	BgL_arg2645z00_2043 = (int) (((long) 16));
																	{	/* Inline/size.scm 81 */
																		long BgL_auxz00_4322;

																		BgL_auxz00_4322 =
																			(long) (BgL_arg2645z00_2043);
																		BgL_modz00_2042 =
																			(BgL_offsetz00_2041 / BgL_auxz00_4322);
																}}
																{	/* Inline/size.scm 81 */
																	long BgL_restz00_2044;

																	{	/* Inline/size.scm 81 */
																		int BgL_arg2644z00_2045;

																		BgL_arg2644z00_2045 = (int) (((long) 16));
																		{	/* Inline/size.scm 81 */
																			long BgL_auxz00_4326;

																			BgL_auxz00_4326 =
																				(long) (BgL_arg2644z00_2045);
																			BgL_restz00_2044 =
																				(BgL_offsetz00_2041 % BgL_auxz00_4326);
																	}}
																	{	/* Inline/size.scm 81 */

																		BgL_method3433z00_2034 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2039,
																				(int) (BgL_modz00_2042)),
																			(int) (BgL_restz00_2044));
										}}}}}}}}
										BgL_res3807z00_2059 =
											(long)
											CINT(PROCEDURE_ENTRY(BgL_method3433z00_2034)
											(BgL_method3433z00_2034, (obj_t) (BgL_arg3626z00_1376),
												BEOA));
									}
									BgL_arg3624z00_1374 = BgL_res3807z00_2059;
							}}
							BgL_arg3622z00_1372 = (BgL_arg3623z00_1373 + BgL_arg3624z00_1374);
						}
						BgL_auxz00_4288 = (((long) 1) + BgL_arg3622z00_1372);
					}
					return BINT(BgL_auxz00_4288);
				}
			}
		}
	}



/* node-size-app3445 */
	obj_t BGl_nodezd2siza7ezd2app3445za7zzinline_siza7eza7(obj_t BgL_envz00_3018,
		obj_t BgL_nodez00_3019)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 70 */
			{
				BgL_appz00_bglt BgL_nodez00_1350;

				{	/* Inline/size.scm 71 */
					long BgL_auxz00_4341;

					BgL_nodez00_1350 = (BgL_appz00_bglt) (BgL_nodez00_3019);
					{	/* Inline/size.scm 71 */
						obj_t BgL_g3412z00_1353;

						long BgL_g3413z00_1354;

						BgL_g3412z00_1353 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1350))->BgL_argsz00);
						{	/* Inline/size.scm 72 */
							BgL_varz00_bglt BgL_arg3619z00_1365;

							BgL_arg3619z00_1365 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1350))->BgL_funz00);
							{	/* Inline/size.scm 72 */
								long BgL_res3798z00_1971;

								{	/* Inline/size.scm 72 */
									BgL_nodez00_bglt BgL_nodez00_1945;

									BgL_nodez00_1945 = (BgL_nodez00_bglt) (BgL_arg3619z00_1365);
									{	/* Inline/size.scm 72 */
										obj_t BgL_method3433z00_1946;

										{	/* Inline/size.scm 72 */
											BgL_objectz00_bglt BgL_objz00_1947;

											BgL_objz00_1947 = (BgL_objectz00_bglt) (BgL_nodez00_1945);
											{	/* Inline/size.scm 72 */
												long BgL_objzd2classzd2numz00_1948;

												BgL_objzd2classzd2numz00_1948 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1947);
												{	/* Inline/size.scm 72 */
													obj_t BgL_arg2643z00_1949;

													BgL_arg2643z00_1949 =
														PROCEDURE_REF
														(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
														(int) (((long) 1)));
													{	/* Inline/size.scm 72 */
														obj_t BgL_arrayz00_1951;

														int BgL_offsetz00_1952;

														BgL_arrayz00_1951 = BgL_arg2643z00_1949;
														BgL_offsetz00_1952 =
															(int) (BgL_objzd2classzd2numz00_1948);
														{	/* Inline/size.scm 72 */
															long BgL_offsetz00_1953;

															BgL_offsetz00_1953 =
																((long) (BgL_offsetz00_1952) - OBJECT_TYPE);
															{	/* Inline/size.scm 72 */
																long BgL_modz00_1954;

																{	/* Inline/size.scm 72 */
																	int BgL_arg2645z00_1955;

																	BgL_arg2645z00_1955 = (int) (((long) 16));
																	{	/* Inline/size.scm 72 */
																		long BgL_auxz00_4353;

																		BgL_auxz00_4353 =
																			(long) (BgL_arg2645z00_1955);
																		BgL_modz00_1954 =
																			(BgL_offsetz00_1953 / BgL_auxz00_4353);
																}}
																{	/* Inline/size.scm 72 */
																	long BgL_restz00_1956;

																	{	/* Inline/size.scm 72 */
																		int BgL_arg2644z00_1957;

																		BgL_arg2644z00_1957 = (int) (((long) 16));
																		{	/* Inline/size.scm 72 */
																			long BgL_auxz00_4357;

																			BgL_auxz00_4357 =
																				(long) (BgL_arg2644z00_1957);
																			BgL_restz00_1956 =
																				(BgL_offsetz00_1953 % BgL_auxz00_4357);
																	}}
																	{	/* Inline/size.scm 72 */

																		BgL_method3433z00_1946 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1951,
																				(int) (BgL_modz00_1954)),
																			(int) (BgL_restz00_1956));
										}}}}}}}}
										BgL_res3798z00_1971 =
											(long)
											CINT(PROCEDURE_ENTRY(BgL_method3433z00_1946)
											(BgL_method3433z00_1946, (obj_t) (BgL_nodez00_1945),
												BEOA));
								}}
								BgL_g3413z00_1354 = BgL_res3798z00_1971;
						}}
						{
							obj_t BgL_argsz00_1356;

							long BgL_siza7eza7_1357;

							BgL_argsz00_1356 = BgL_g3412z00_1353;
							BgL_siza7eza7_1357 = BgL_g3413z00_1354;
						BgL_zc3anonymousza33613ze3z83_1358:
							if (NULLP(BgL_argsz00_1356))
								{	/* Inline/size.scm 73 */
									BgL_auxz00_4341 = BgL_siza7eza7_1357;
								}
							else
								{	/* Inline/size.scm 75 */
									obj_t BgL_arg3615z00_1360;

									long BgL_arg3616z00_1361;

									BgL_arg3615z00_1360 = CDR(BgL_argsz00_1356);
									{	/* Inline/size.scm 75 */
										long BgL_arg3617z00_1362;

										{	/* Inline/size.scm 75 */
											obj_t BgL_arg3618z00_1363;

											BgL_arg3618z00_1363 = CAR(BgL_argsz00_1356);
											{	/* Inline/size.scm 75 */
												long BgL_res3801z00_2001;

												{	/* Inline/size.scm 75 */
													BgL_nodez00_bglt BgL_nodez00_1975;

													BgL_nodez00_1975 =
														(BgL_nodez00_bglt) (BgL_arg3618z00_1363);
													{	/* Inline/size.scm 75 */
														obj_t BgL_method3433z00_1976;

														{	/* Inline/size.scm 75 */
															BgL_objectz00_bglt BgL_objz00_1977;

															BgL_objz00_1977 =
																(BgL_objectz00_bglt) (BgL_nodez00_1975);
															{	/* Inline/size.scm 75 */
																long BgL_objzd2classzd2numz00_1978;

																BgL_objzd2classzd2numz00_1978 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1977);
																{	/* Inline/size.scm 75 */
																	obj_t BgL_arg2643z00_1979;

																	BgL_arg2643z00_1979 =
																		PROCEDURE_REF
																		(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
																		(int) (((long) 1)));
																	{	/* Inline/size.scm 75 */
																		obj_t BgL_arrayz00_1981;

																		int BgL_offsetz00_1982;

																		BgL_arrayz00_1981 = BgL_arg2643z00_1979;
																		BgL_offsetz00_1982 =
																			(int) (BgL_objzd2classzd2numz00_1978);
																		{	/* Inline/size.scm 75 */
																			long BgL_offsetz00_1983;

																			BgL_offsetz00_1983 =
																				(
																				(long) (BgL_offsetz00_1982) -
																				OBJECT_TYPE);
																			{	/* Inline/size.scm 75 */
																				long BgL_modz00_1984;

																				{	/* Inline/size.scm 75 */
																					int BgL_arg2645z00_1985;

																					BgL_arg2645z00_1985 =
																						(int) (((long) 16));
																					{	/* Inline/size.scm 75 */
																						long BgL_auxz00_4381;

																						BgL_auxz00_4381 =
																							(long) (BgL_arg2645z00_1985);
																						BgL_modz00_1984 =
																							(BgL_offsetz00_1983 /
																							BgL_auxz00_4381);
																				}}
																				{	/* Inline/size.scm 75 */
																					long BgL_restz00_1986;

																					{	/* Inline/size.scm 75 */
																						int BgL_arg2644z00_1987;

																						BgL_arg2644z00_1987 =
																							(int) (((long) 16));
																						{	/* Inline/size.scm 75 */
																							long BgL_auxz00_4385;

																							BgL_auxz00_4385 =
																								(long) (BgL_arg2644z00_1987);
																							BgL_restz00_1986 =
																								(BgL_offsetz00_1983 %
																								BgL_auxz00_4385);
																					}}
																					{	/* Inline/size.scm 75 */

																						BgL_method3433z00_1976 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1981,
																								(int) (BgL_modz00_1984)),
																							(int) (BgL_restz00_1986));
														}}}}}}}}
														BgL_res3801z00_2001 =
															(long)
															CINT(PROCEDURE_ENTRY(BgL_method3433z00_1976)
															(BgL_method3433z00_1976,
																(obj_t) (BgL_nodez00_1975), BEOA));
												}}
												BgL_arg3617z00_1362 = BgL_res3801z00_2001;
										}}
										BgL_arg3616z00_1361 =
											(BgL_siza7eza7_1357 + BgL_arg3617z00_1362);
									}
									{
										long BgL_siza7eza7_4398;

										obj_t BgL_argsz00_4397;

										BgL_argsz00_4397 = BgL_arg3615z00_1360;
										BgL_siza7eza7_4398 = BgL_arg3616z00_1361;
										BgL_siza7eza7_1357 = BgL_siza7eza7_4398;
										BgL_argsz00_1356 = BgL_argsz00_4397;
										goto BgL_zc3anonymousza33613ze3z83_1358;
									}
								}
						}
					}
					return BINT(BgL_auxz00_4341);
				}
			}
		}
	}



/* node-size-sized-sequ3443 */
	obj_t BGl_nodezd2siza7ezd2siza7edzd2sequ3443zd2zzinline_siza7eza7(obj_t
		BgL_envz00_3020, obj_t BgL_nodez00_3021)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 64 */
			{
				BgL_siza7edzd2sequencez75_bglt BgL_nodez00_1345;

				{	/* Inline/size.scm 65 */
					long BgL_auxz00_4401;

					BgL_nodez00_1345 =
						(BgL_siza7edzd2sequencez75_bglt) (BgL_nodez00_3021);
					{
						obj_t BgL_auxz00_4402;

						{	/* Inline/size.scm 65 */
							BgL_objectz00_bglt BgL_auxz00_4403;

							BgL_auxz00_4403 = (BgL_objectz00_bglt) (BgL_nodez00_1345);
							BgL_auxz00_4402 = BGL_OBJECT_WIDENING(BgL_auxz00_4403);
						}
						BgL_auxz00_4401 =
							(((BgL_siza7edzd2sequencez75_bglt) CREF(BgL_auxz00_4402))->
							BgL_siza7eza7);
					}
					return BINT(BgL_auxz00_4401);
				}
			}
		}
	}



/* node-size-sequence3441 */
	obj_t BGl_nodezd2siza7ezd2sequence3441za7zzinline_siza7eza7(obj_t
		BgL_envz00_3022, obj_t BgL_nodez00_3023)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 52 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1326;

				{	/* Inline/size.scm 53 */
					long BgL_auxz00_4409;

					BgL_nodez00_1326 = (BgL_sequencez00_bglt) (BgL_nodez00_3023);
					{	/* Inline/size.scm 53 */
						obj_t BgL_g3410z00_1329;

						BgL_g3410z00_1329 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1326))->BgL_nodesz00);
						{
							obj_t BgL_nodesz00_1331;

							long BgL_siza7eza7_1332;

							BgL_nodesz00_1331 = BgL_g3410z00_1329;
							BgL_siza7eza7_1332 = ((long) 0);
						BgL_zc3anonymousza33603ze3z83_1333:
							if (NULLP(BgL_nodesz00_1331))
								{	/* Inline/size.scm 55 */
									{	/* Inline/size.scm 57 */
										BgL_sequencez00_bglt BgL_obj3411z00_1335;

										BgL_obj3411z00_1335 =
											((BgL_sequencez00_bglt) BgL_nodez00_1326);
										{	/* Inline/size.scm 57 */
											BgL_siza7edzd2sequencez75_bglt BgL_arg3605z00_1336;

											{	/* Inline/size.scm 57 */
												BgL_siza7edzd2sequencez75_bglt BgL_res3792z00_1908;

												{	/* Inline/size.scm 57 */
													BgL_siza7edzd2sequencez75_bglt BgL_new3243z00_1903;

													BgL_new3243z00_1903 =
														((BgL_siza7edzd2sequencez75_bglt)
														BREF(GC_MALLOC(sizeof(struct
																	BgL_siza7edzd2sequencez75_bgl))));
													{	/* Inline/size.scm 57 */
														BgL_siza7edzd2sequencez75_bglt BgL_res3791z00_1907;

														{	/* Inline/size.scm 57 */
															BgL_siza7edzd2sequencez75_bglt
																BgL_new3254z00_1904;
															BgL_new3254z00_1904 = BgL_new3243z00_1903;
															{	/* Inline/size.scm 57 */
																long BgL_siza7e3253za7_1906;

																BgL_siza7e3253za7_1906 = BgL_siza7eza7_1332;
																((((BgL_siza7edzd2sequencez75_bglt)
																			CREF(BgL_new3254z00_1904))->
																		BgL_siza7eza7) =
																	((long) BgL_siza7e3253za7_1906), BUNSPEC);
																BgL_res3791z00_1907 = BgL_new3254z00_1904;
														}} BgL_res3791z00_1907;
													}
													BgL_res3792z00_1908 = BgL_new3243z00_1903;
												}
												BgL_arg3605z00_1336 = BgL_res3792z00_1908;
											}
											{	/* Inline/size.scm 57 */
												obj_t BgL_auxz00_4418;

												BgL_objectz00_bglt BgL_auxz00_4416;

												BgL_auxz00_4418 = (obj_t) (BgL_arg3605z00_1336);
												BgL_auxz00_4416 =
													(BgL_objectz00_bglt) (BgL_obj3411z00_1335);
												BGL_OBJECT_WIDENING_SET(BgL_auxz00_4416,
													BgL_auxz00_4418);
										}}
										BGL_OBJECT_CLASS_NUM_SET(
											(BgL_objectz00_bglt) (BgL_obj3411z00_1335),
											BGl_classzd2numzd2zz__objectz00
											(BGl_siza7edzd2sequencez75zzinline_siza7eza7));
										BgL_obj3411z00_1335;
									}
									BgL_auxz00_4409 = BgL_siza7eza7_1332;
								}
							else
								{	/* Inline/size.scm 59 */
									obj_t BgL_arg3607z00_1338;

									long BgL_arg3608z00_1339;

									BgL_arg3607z00_1338 = CDR(BgL_nodesz00_1331);
									{	/* Inline/size.scm 59 */
										long BgL_arg3609z00_1340;

										{	/* Inline/size.scm 59 */
											obj_t BgL_arg3610z00_1341;

											BgL_arg3610z00_1341 = CAR(BgL_nodesz00_1331);
											{	/* Inline/size.scm 59 */
												long BgL_res3795z00_1939;

												{	/* Inline/size.scm 59 */
													BgL_nodez00_bglt BgL_nodez00_1913;

													BgL_nodez00_1913 =
														(BgL_nodez00_bglt) (BgL_arg3610z00_1341);
													{	/* Inline/size.scm 59 */
														obj_t BgL_method3433z00_1914;

														{	/* Inline/size.scm 59 */
															BgL_objectz00_bglt BgL_objz00_1915;

															BgL_objz00_1915 =
																(BgL_objectz00_bglt) (BgL_nodez00_1913);
															{	/* Inline/size.scm 59 */
																long BgL_objzd2classzd2numz00_1916;

																BgL_objzd2classzd2numz00_1916 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1915);
																{	/* Inline/size.scm 59 */
																	obj_t BgL_arg2643z00_1917;

																	BgL_arg2643z00_1917 =
																		PROCEDURE_REF
																		(BGl_nodezd2siza7ezd2envza7zzinline_siza7eza7,
																		(int) (((long) 1)));
																	{	/* Inline/size.scm 59 */
																		obj_t BgL_arrayz00_1919;

																		int BgL_offsetz00_1920;

																		BgL_arrayz00_1919 = BgL_arg2643z00_1917;
																		BgL_offsetz00_1920 =
																			(int) (BgL_objzd2classzd2numz00_1916);
																		{	/* Inline/size.scm 59 */
																			long BgL_offsetz00_1921;

																			BgL_offsetz00_1921 =
																				(
																				(long) (BgL_offsetz00_1920) -
																				OBJECT_TYPE);
																			{	/* Inline/size.scm 59 */
																				long BgL_modz00_1922;

																				{	/* Inline/size.scm 59 */
																					int BgL_arg2645z00_1923;

																					BgL_arg2645z00_1923 =
																						(int) (((long) 16));
																					{	/* Inline/size.scm 59 */
																						long BgL_auxz00_4435;

																						BgL_auxz00_4435 =
																							(long) (BgL_arg2645z00_1923);
																						BgL_modz00_1922 =
																							(BgL_offsetz00_1921 /
																							BgL_auxz00_4435);
																				}}
																				{	/* Inline/size.scm 59 */
																					long BgL_restz00_1924;

																					{	/* Inline/size.scm 59 */
																						int BgL_arg2644z00_1925;

																						BgL_arg2644z00_1925 =
																							(int) (((long) 16));
																						{	/* Inline/size.scm 59 */
																							long BgL_auxz00_4439;

																							BgL_auxz00_4439 =
																								(long) (BgL_arg2644z00_1925);
																							BgL_restz00_1924 =
																								(BgL_offsetz00_1921 %
																								BgL_auxz00_4439);
																					}}
																					{	/* Inline/size.scm 59 */

																						BgL_method3433z00_1914 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1919,
																								(int) (BgL_modz00_1922)),
																							(int) (BgL_restz00_1924));
														}}}}}}}}
														BgL_res3795z00_1939 =
															(long)
															CINT(PROCEDURE_ENTRY(BgL_method3433z00_1914)
															(BgL_method3433z00_1914,
																(obj_t) (BgL_nodez00_1913), BEOA));
												}}
												BgL_arg3609z00_1340 = BgL_res3795z00_1939;
										}}
										BgL_arg3608z00_1339 =
											(BgL_siza7eza7_1332 + BgL_arg3609z00_1340);
									}
									{
										long BgL_siza7eza7_4452;

										obj_t BgL_nodesz00_4451;

										BgL_nodesz00_4451 = BgL_arg3607z00_1338;
										BgL_siza7eza7_4452 = BgL_arg3608z00_1339;
										BgL_siza7eza7_1332 = BgL_siza7eza7_4452;
										BgL_nodesz00_1331 = BgL_nodesz00_4451;
										goto BgL_zc3anonymousza33603ze3z83_1333;
									}
								}
						}
					}
					return BINT(BgL_auxz00_4409);
				}
			}
		}
	}



/* node-size-kwote3439 */
	obj_t BGl_nodezd2siza7ezd2kwote3439za7zzinline_siza7eza7(obj_t
		BgL_envz00_3024, obj_t BgL_nodez00_3025)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 46 */
			return BINT(((long) 1));
		}
	}



/* node-size-var3437 */
	obj_t BGl_nodezd2siza7ezd2var3437za7zzinline_siza7eza7(obj_t BgL_envz00_3026,
		obj_t BgL_nodez00_3027)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 40 */
			return BINT(((long) 1));
		}
	}



/* node-size-atom3435 */
	obj_t BGl_nodezd2siza7ezd2atom3435za7zzinline_siza7eza7(obj_t BgL_envz00_3028,
		obj_t BgL_nodez00_3029)
	{
		AN_OBJECT;
		{	/* Inline/size.scm 34 */
			return BINT(((long) 1));
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinline_siza7eza7()
	{
		AN_OBJECT;
		{	/* Inline/size.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3931z00zzinline_siza7eza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3931z00zzinline_siza7eza7));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3931z00zzinline_siza7eza7));
		}
	}

#ifdef __cplusplus
}
#endif
