/*===========================================================================*/
/*   (Callcc/walk.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Callcc/walk.scm)*/
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

	typedef struct BgL_localzf2cellzf2_bgl
	{
		char dummy;
	}                      *BgL_localzf2cellzf2_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_localzf2cellzf2zzcallcc_walkz00 = BUNSPEC;
	static obj_t BGl_callccza2z12zb0zzcallcc_walkz00(obj_t);
	extern BgL_boxzd2refzd2_bglt BGl_makezd2boxzd2refz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt);
	static obj_t BGl_callccz12zd2boxzd2ref3402z12zzcallcc_walkz00(obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	extern BgL_makezd2boxzd2_bglt BGl_makezd2makezd2boxz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_nodez00_bglt);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_za2compilerzd2debugza2zd2zzengine_paramz00;
	static obj_t BGl_callccz12zd2kwote3367zc0zzcallcc_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_cellzd2formalszd2zzcallcc_walkz00(obj_t,
		BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_callccz12zd2conditional3386zc0zzcallcc_walkz00(obj_t, obj_t);
	static obj_t BGl_callccz12zd2var3370zc0zzcallcc_walkz00(obj_t, obj_t);
	static BgL_makezd2boxzd2_bglt
		BGl_azd2makezd2cellz00zzcallcc_walkz00(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcallcc_walkz00();
	static obj_t BGl_callccz12zd2fail3388zc0zzcallcc_walkz00(obj_t, obj_t);
	extern BgL_valuez00_bglt BGl_valuezd2nilzd2zzast_varz00();
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_callccz12zd2extern3380zc0zzcallcc_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static BgL_localzf2cellzf2_bglt
		BGl_wideningzd2localzf2cellz20zzcallcc_walkz00();
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_callccz12zd2appzd2ly3376z12zzcallcc_walkz00(obj_t, obj_t);
	static obj_t BGl__callccz12zd2default3362zc0zzcallcc_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	static obj_t BGl__localzf2cellzf3z01zzcallcc_walkz00(obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcallcc_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcallcc_walkz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_callccz12zd2letzd2fun3392z12zzcallcc_walkz00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl__localzf2cellzd2nilz20zzcallcc_walkz00(obj_t);
	static bool_t BGl_callcczd2funz12zc0zzcallcc_walkz00(obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static BgL_nodez00_bglt BGl_callccz12z12zzcallcc_walkz00(BgL_nodez00_bglt);
	static obj_t BGl_z52thezd2localzf2cellzd2nilza0zzcallcc_walkz00 = BUNSPEC;
	static obj_t BGl_callccz12zd2letzd2var3394z12zzcallcc_walkz00(obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_celledzd2bindingszd2zzcallcc_walkz00(obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_callccz12zd2setzd2exzd2it3396zc0zzcallcc_walkz00(obj_t,
		obj_t);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	BGL_EXPORTED_DECL obj_t BGl_callcczd2walkz12zc0zzcallcc_walkz00(obj_t);
	static obj_t BGl_callccz12zd2select3390zc0zzcallcc_walkz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcallcc_walkz00();
	static obj_t BGl_callccz12zd2sequence3372zc0zzcallcc_walkz00(obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	static obj_t BGl_callccz12zd2atom3365zc0zzcallcc_walkz00(obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_callccz12zd2boxzd2setz123404z00zzcallcc_walkz00(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcallcc_walkz00 = BUNSPEC;
	static obj_t BGl__callccz12z12zzcallcc_walkz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcallcc_walkz00();
	extern obj_t BGl_globalz00zzast_varz00;
	extern BgL_boxzd2setz12zc0_bglt BGl_makezd2boxzd2setz12z12zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_varz00_bglt, BgL_nodez00_bglt);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcallcc_walkz00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static BgL_nodez00_bglt
		BGl_callccz12zd2default3362zc0zzcallcc_walkz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static bool_t BGl_celledzf3zf3zzcallcc_walkz00(BgL_variablez00_bglt);
	static obj_t BGl_callccz12zd2cast3382zc0zzcallcc_walkz00(obj_t, obj_t);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	static obj_t BGl_callccz12zd2makezd2box3400z12zzcallcc_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_callccz12zd2funcall3378zc0zzcallcc_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_callccz12zd2app3374zc0zzcallcc_walkz00(obj_t, obj_t);
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl__callcczd2walkz12zc0zzcallcc_walkz00(obj_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_callccz12zd2jumpzd2exzd2it3398zc0zzcallcc_walkz00(obj_t,
		obj_t);
	static obj_t BGl__z52allocatezd2localzf2cellz72zzcallcc_walkz00(obj_t);
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	static BgL_localzf2cellzf2_bglt BGl_localzf2cellzd2nilz20zzcallcc_walkz00();
	static obj_t BGl_objectzd2ze3structzd2local3406ze3zzcallcc_walkz00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzcallcc_walkz00();
	static obj_t BGl_callccz12zd2setq3384zc0zzcallcc_walkz00(obj_t, obj_t);
	extern BgL_letzd2varzd2_bglt BGl_makezd2letzd2varz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt, bool_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcallcc_walkz00();
	static obj_t BGl_structzb2objectzd2ze3objec3408z83zzcallcc_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t __cnst[8];


	   
		 
		DEFINE_STRING(BGl_string3751z00zzcallcc_walkz00,
		BgL_bgl_string3751za700za7za7c3790za7, "Callcc", 6);
	      DEFINE_STRING(BGl_string3752z00zzcallcc_walkz00,
		BgL_bgl_string3752za700za7za7c3791za7, "   . ", 5);
	      DEFINE_STRING(BGl_string3753z00zzcallcc_walkz00,
		BgL_bgl_string3753za700za7za7c3792za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string3754z00zzcallcc_walkz00,
		BgL_bgl_string3754za700za7za7c3793za7, " error", 6);
	      DEFINE_STRING(BGl_string3755z00zzcallcc_walkz00,
		BgL_bgl_string3755za700za7za7c3794za7, "s", 1);
	      DEFINE_STRING(BGl_string3756z00zzcallcc_walkz00,
		BgL_bgl_string3756za700za7za7c3795za7, "", 0);
	      DEFINE_STRING(BGl_string3757z00zzcallcc_walkz00,
		BgL_bgl_string3757za700za7za7c3796za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string3758z00zzcallcc_walkz00,
		BgL_bgl_string3758za700za7za7c3797za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string3760z00zzcallcc_walkz00,
		BgL_bgl_string3760za700za7za7c3798za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3759z00zzcallcc_walkz00,
		BgL_bgl_string3759za700za7za7c3799za7, "callcc!", 7);
	      DEFINE_STRING(BGl_string3782z00zzcallcc_walkz00,
		BgL_bgl_string3782za700za7za7c3800za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string3784z00zzcallcc_walkz00,
		BgL_bgl_string3784za700za7za7c3801za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string3785z00zzcallcc_walkz00,
		BgL_bgl_string3785za700za7za7c3802za7, "callcc_walk", 11);
	      DEFINE_STRING(BGl_string3786z00zzcallcc_walkz00,
		BgL_bgl_string3786za700za7za7c3803za7,
		"aux callcc!-default3362 _ local/cell done write cell-callcc pass-started ",
		73);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2localzf2cellzd2envza0zzcallcc_walkz00,
		BgL_bgl__za752allocateza7d2l3804z00,
		BGl__z52allocatezd2localzf2cellz72zzcallcc_walkz00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_callccz12zd2default3362zd2envz12zzcallcc_walkz00,
		BgL_bgl__callccza712za7d2def3805z00,
		BGl__callccz12zd2default3362zc0zzcallcc_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_localzf2cellzf3zd2envzd3zzcallcc_walkz00,
		BgL_bgl__localza7f2cellza7f33806z00,
		BGl__localzf2cellzf3z01zzcallcc_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_localzf2cellzd2nilzd2envzf2zzcallcc_walkz00,
		BgL_bgl__localza7f2cellza7d23807z00,
		BGl__localzf2cellzd2nilz20zzcallcc_walkz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_callcczd2walkz12zd2envz12zzcallcc_walkz00,
		BgL_bgl__callccza7d2walkza713808z00,
		BGl__callcczd2walkz12zc0zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3761z00zzcallcc_walkz00,
		BgL_bgl_callccza712za7d2atom3809z00,
		BGl_callccz12zd2atom3365zc0zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3762z00zzcallcc_walkz00,
		BgL_bgl_callccza712za7d2kwot3810z00,
		BGl_callccz12zd2kwote3367zc0zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3763z00zzcallcc_walkz00,
		BgL_bgl_callccza712za7d2var33811z00,
		BGl_callccz12zd2var3370zc0zzcallcc_walkz00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3764z00zzcallcc_walkz00,
		BgL_bgl_callccza712za7d2sequ3812z00,
		BGl_callccz12zd2sequence3372zc0zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3765z00zzcallcc_walkz00,
		BgL_bgl_callccza712za7d2app33813z00,
		BGl_callccz12zd2app3374zc0zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3766z00zzcallcc_walkz00,
		BgL_bgl_callccza712za7d2appza73814za7,
		BGl_callccz12zd2appzd2ly3376z12zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3767z00zzcallcc_walkz00,
		BgL_bgl_callccza712za7d2func3815z00,
		BGl_callccz12zd2funcall3378zc0zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3768z00zzcallcc_walkz00,
		BgL_bgl_callccza712za7d2exte3816z00,
		BGl_callccz12zd2extern3380zc0zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3770z00zzcallcc_walkz00,
		BgL_bgl_callccza712za7d2setq3817z00,
		BGl_callccz12zd2setq3384zc0zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3769z00zzcallcc_walkz00,
		BgL_bgl_callccza712za7d2cast3818z00,
		BGl_callccz12zd2cast3382zc0zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3771z00zzcallcc_walkz00,
		BgL_bgl_callccza712za7d2cond3819z00,
		BGl_callccz12zd2conditional3386zc0zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3772z00zzcallcc_walkz00,
		BgL_bgl_callccza712za7d2fail3820z00,
		BGl_callccz12zd2fail3388zc0zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3773z00zzcallcc_walkz00,
		BgL_bgl_callccza712za7d2sele3821z00,
		BGl_callccz12zd2select3390zc0zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3774z00zzcallcc_walkz00,
		BgL_bgl_callccza712za7d2letza73822za7,
		BGl_callccz12zd2letzd2fun3392z12zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3775z00zzcallcc_walkz00,
		BgL_bgl_callccza712za7d2letza73823za7,
		BGl_callccz12zd2letzd2var3394z12zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3776z00zzcallcc_walkz00,
		BgL_bgl_callccza712za7d2setza73824za7,
		BGl_callccz12zd2setzd2exzd2it3396zc0zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3777z00zzcallcc_walkz00,
		BgL_bgl_callccza712za7d2jump3825z00,
		BGl_callccz12zd2jumpzd2exzd2it3398zc0zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3778z00zzcallcc_walkz00,
		BgL_bgl_callccza712za7d2make3826z00,
		BGl_callccz12zd2makezd2box3400z12zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3780z00zzcallcc_walkz00,
		BgL_bgl_callccza712za7d2boxza73827za7,
		BGl_callccz12zd2boxzd2setz123404z00zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3779z00zzcallcc_walkz00,
		BgL_bgl_callccza712za7d2boxza73828za7,
		BGl_callccz12zd2boxzd2ref3402z12zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3781z00zzcallcc_walkz00,
		BgL_bgl_objectza7d2za7e3stru3829z00,
		BGl_objectzd2ze3structzd2local3406ze3zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3783z00zzcallcc_walkz00,
		BgL_bgl_structza7b2objectza73830z00,
		BGl_structzb2objectzd2ze3objec3408z83zzcallcc_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_GENERIC(BGl_callccz12zd2envzc0zzcallcc_walkz00,
		BgL_bgl__callccza712za712za7za7c3831z00, BGl__callccz12z12zzcallcc_walkz00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcallcc_walkz00(long
		BgL_checksumz00_2626, char *BgL_fromz00_2627)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcallcc_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzcallcc_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcallcc_walkz00();
					BGl_cnstzd2initzd2zzcallcc_walkz00();
					BGl_importedzd2moduleszd2initz00zzcallcc_walkz00();
					BGl_objectzd2initzd2zzcallcc_walkz00();
					BGl_genericzd2initzd2zzcallcc_walkz00();
					BGl_methodzd2initzd2zzcallcc_walkz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcallcc_walkz00()
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 16 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "callcc_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "callcc_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"callcc_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "callcc_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"callcc_walk");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"callcc_walk");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcallcc_walkz00()
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 16 */
			{	/* Callcc/walk.scm 16 */
				obj_t BgL_cportz00_2609;

				BgL_cportz00_2609 =
					bgl_open_input_string(BGl_string3786z00zzcallcc_walkz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2610;

					BgL_iz00_2610 = ((long) 7);
				BgL_loopz00_2611:
					if ((BgL_iz00_2610 == ((long) -1)))
						{	/* Callcc/walk.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Callcc/walk.scm 16 */
							{	/* Callcc/walk.scm 16 */
								obj_t BgL_arg3788z00_2613;

								{	/* Callcc/walk.scm 16 */

									{	/* Callcc/walk.scm 16 */
										obj_t BgL_locationz00_2615;

										BgL_locationz00_2615 = BBOOL(((bool_t) 0));
										{	/* Callcc/walk.scm 16 */

											BgL_arg3788z00_2613 =
												BGl_readz00zz__readerz00(BgL_cportz00_2609,
												BgL_locationz00_2615);
										}
									}
								}
								{	/* Callcc/walk.scm 16 */
									int BgL_auxz00_2649;

									BgL_auxz00_2649 = (int) (BgL_iz00_2610);
									CNST_TABLE_SET(BgL_auxz00_2649, BgL_arg3788z00_2613);
							}}
							{	/* Callcc/walk.scm 16 */
								int BgL_auxz00_2616;

								BgL_auxz00_2616 = (int) ((BgL_iz00_2610 - ((long) 1)));
								{
									long BgL_iz00_2654;

									BgL_iz00_2654 = (long) (BgL_auxz00_2616);
									BgL_iz00_2610 = BgL_iz00_2654;
									goto BgL_loopz00_2611;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcallcc_walkz00()
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 16 */
			return BUNSPEC;
		}
	}



/* callcc-walk! */
	BGL_EXPORTED_DEF obj_t BGl_callcczd2walkz12zc0zzcallcc_walkz00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 30 */
			{	/* Callcc/walk.scm 31 */
				obj_t BgL_list3409z00_819;

				{	/* Callcc/walk.scm 31 */
					obj_t BgL_arg3411z00_821;

					{	/* Callcc/walk.scm 31 */
						obj_t BgL_arg3413z00_823;

						BgL_arg3413z00_823 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg3411z00_821 =
							MAKE_PAIR(BGl_string3751z00zzcallcc_walkz00, BgL_arg3413z00_823);
					}
					BgL_list3409z00_819 =
						MAKE_PAIR(BGl_string3752z00zzcallcc_walkz00, BgL_arg3411z00_821);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list3409z00_819);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string3751z00zzcallcc_walkz00;
			{
				obj_t BgL_hooksz00_827;

				obj_t BgL_hnamesz00_828;

				BgL_hooksz00_827 = BNIL;
				BgL_hnamesz00_828 = BNIL;
			BgL_zc3anonymousza33414ze3z83_829:
				if (NULLP(BgL_hooksz00_827))
					{	/* Callcc/walk.scm 31 */
						CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Callcc/walk.scm 31 */
						bool_t BgL_testz00_2666;

						{	/* Callcc/walk.scm 31 */
							obj_t BgL_fun3422z00_837;

							BgL_fun3422z00_837 = CAR(BgL_hooksz00_827);
							BgL_testz00_2666 =
								CBOOL(PROCEDURE_ENTRY(BgL_fun3422z00_837) (BgL_fun3422z00_837,
									BEOA));
						}
						if (BgL_testz00_2666)
							{
								obj_t BgL_hnamesz00_2673;

								obj_t BgL_hooksz00_2671;

								BgL_hooksz00_2671 = CDR(BgL_hooksz00_827);
								BgL_hnamesz00_2673 = CDR(BgL_hnamesz00_828);
								BgL_hnamesz00_828 = BgL_hnamesz00_2673;
								BgL_hooksz00_827 = BgL_hooksz00_2671;
								goto BgL_zc3anonymousza33414ze3z83_829;
							}
						else
							{	/* Callcc/walk.scm 31 */
								BGl_internalzd2errorzd2zztools_errorz00
									(BGl_string3751z00zzcallcc_walkz00,
									BGl_string3753z00zzcallcc_walkz00, CAR(BgL_hnamesz00_828));
							}
					}
			}
			if (
				((long) CINT(BGl_za2compilerzd2debugza2zd2zzengine_paramz00) >=
					((long) 2)))
				{	/* Callcc/walk.scm 33 */
					BGl_za2compilerzd2debugza2zd2zzengine_paramz00 = BINT(((long) 1));
				}
			else
				{	/* Callcc/walk.scm 33 */
					BFALSE;
				}
			{
				obj_t BgL_l3340z00_842;

				BgL_l3340z00_842 = BgL_globalsz00_1;
			BgL_zc3anonymousza33425ze3z83_843:
				if (PAIRP(BgL_l3340z00_842))
					{	/* Callcc/walk.scm 35 */
						BGl_callcczd2funz12zc0zzcallcc_walkz00(CAR(BgL_l3340z00_842));
						{
							obj_t BgL_l3340z00_2685;

							BgL_l3340z00_2685 = CDR(BgL_l3340z00_842);
							BgL_l3340z00_842 = BgL_l3340z00_2685;
							goto BgL_zc3anonymousza33425ze3z83_843;
						}
					}
				else
					{	/* Callcc/walk.scm 35 */
						((bool_t) 1);
					}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Callcc/walk.scm 36 */
					{	/* Callcc/walk.scm 36 */
						obj_t BgL_port3342z00_850;

						{	/* Callcc/walk.scm 36 */
							obj_t BgL_res3668z00_1603;

							{	/* Callcc/walk.scm 36 */
								obj_t BgL_auxz00_2690;

								BgL_auxz00_2690 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res3668z00_1603 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_2690);
							}
							BgL_port3342z00_850 = BgL_res3668z00_1603;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port3342z00_850);
						bgl_display_string(BGl_string3754z00zzcallcc_walkz00,
							BgL_port3342z00_850);
						{	/* Callcc/walk.scm 36 */
							obj_t BgL_arg3432z00_851;

							{	/* Callcc/walk.scm 36 */
								bool_t BgL_testz00_2695;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Callcc/walk.scm 36 */
										BgL_testz00_2695 =
											BGl_2ze3ze3zz__r4_numbers_6_5z00
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
											BINT(((long) 1)));
									}
								else
									{	/* Callcc/walk.scm 36 */
										BgL_testz00_2695 = ((bool_t) 0);
									}
								if (BgL_testz00_2695)
									{	/* Callcc/walk.scm 36 */
										BgL_arg3432z00_851 = BGl_string3755z00zzcallcc_walkz00;
									}
								else
									{	/* Callcc/walk.scm 36 */
										BgL_arg3432z00_851 = BGl_string3756z00zzcallcc_walkz00;
									}
							}
							bgl_display_obj(BgL_arg3432z00_851, BgL_port3342z00_850);
						}
						bgl_display_string(BGl_string3757z00zzcallcc_walkz00,
							BgL_port3342z00_850);
						bgl_display_char(((unsigned char) '\n'), BgL_port3342z00_850);
					}
					{	/* Callcc/walk.scm 36 */
						obj_t BgL_list3435z00_854;

						BgL_list3435z00_854 = MAKE_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list3435z00_854);
					}
				}
			else
				{
					obj_t BgL_hooksz00_858;

					obj_t BgL_hnamesz00_859;

					BgL_hooksz00_858 = BNIL;
					BgL_hnamesz00_859 = BNIL;
				BgL_zc3anonymousza33436ze3z83_860:
					if (NULLP(BgL_hooksz00_858))
						{	/* Callcc/walk.scm 36 */
							return BgL_globalsz00_1;
						}
					else
						{	/* Callcc/walk.scm 36 */
							bool_t BgL_testz00_2708;

							{	/* Callcc/walk.scm 36 */
								obj_t BgL_fun3444z00_867;

								BgL_fun3444z00_867 = CAR(BgL_hooksz00_858);
								BgL_testz00_2708 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun3444z00_867) (BgL_fun3444z00_867,
										BEOA));
							}
							if (BgL_testz00_2708)
								{
									obj_t BgL_hnamesz00_2715;

									obj_t BgL_hooksz00_2713;

									BgL_hooksz00_2713 = CDR(BgL_hooksz00_858);
									BgL_hnamesz00_2715 = CDR(BgL_hnamesz00_859);
									BgL_hnamesz00_859 = BgL_hnamesz00_2715;
									BgL_hooksz00_858 = BgL_hooksz00_2713;
									goto BgL_zc3anonymousza33436ze3z83_860;
								}
							else
								{	/* Callcc/walk.scm 36 */
									obj_t BgL_arg3443z00_866;

									BgL_arg3443z00_866 = CAR(BgL_hnamesz00_859);
									return
										BGl_internalzd2errorzd2zztools_errorz00
										(BGl_za2currentzd2passza2zd2zzengine_passz00,
										BGl_string3758z00zzcallcc_walkz00, BgL_arg3443z00_866);
								}
						}
				}
		}
	}



/* _callcc-walk! */
	obj_t BGl__callcczd2walkz12zc0zzcallcc_walkz00(obj_t BgL_envz00_2527,
		obj_t BgL_globalsz00_2528)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 30 */
			return BGl_callcczd2walkz12zc0zzcallcc_walkz00(BgL_globalsz00_2528);
		}
	}



/* callcc-fun! */
	bool_t BGl_callcczd2funz12zc0zzcallcc_walkz00(obj_t BgL_varz00_2)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 41 */
			{	/* Callcc/walk.scm 42 */
				BgL_valuez00_bglt BgL_funz00_870;

				{
					BgL_variablez00_bglt BgL_auxz00_2720;

					BgL_auxz00_2720 = (BgL_variablez00_bglt) (BgL_varz00_2);
					BgL_funz00_870 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2720))->BgL_valuez00);
				}
				{	/* Callcc/walk.scm 42 */
					obj_t BgL_bodyz00_871;

					{
						BgL_sfunz00_bglt BgL_auxz00_2723;

						BgL_auxz00_2723 = (BgL_sfunz00_bglt) (BgL_funz00_870);
						BgL_bodyz00_871 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2723))->BgL_bodyz00);
					}
					{	/* Callcc/walk.scm 43 */
						obj_t BgL_celledz00_872;

						{	/* Callcc/walk.scm 44 */
							obj_t BgL_arg3457z00_892;

							{
								BgL_sfunz00_bglt BgL_auxz00_2726;

								BgL_auxz00_2726 = (BgL_sfunz00_bglt) (BgL_funz00_870);
								BgL_arg3457z00_892 =
									(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2726))->BgL_argsz00);
							}
							BgL_celledz00_872 =
								BGl_celledzd2bindingszd2zzcallcc_walkz00(BgL_arg3457z00_892);
						}
						{	/* Callcc/walk.scm 44 */

							{
								obj_t BgL_l3343z00_874;

								BgL_l3343z00_874 = BgL_celledz00_872;
							BgL_zc3anonymousza33446ze3z83_875:
								if (PAIRP(BgL_l3343z00_874))
									{	/* Callcc/walk.scm 46 */
										{	/* Callcc/walk.scm 47 */
											obj_t BgL_wze2bze2_877;

											BgL_wze2bze2_877 = CAR(BgL_l3343z00_874);
											{	/* Callcc/walk.scm 47 */
												obj_t BgL_arg3448z00_878;

												obj_t BgL_arg3449z00_879;

												BgL_arg3448z00_878 = CAR(BgL_wze2bze2_877);
												BgL_arg3449z00_879 = CDR(BgL_wze2bze2_877);
												{
													BgL_variablez00_bglt BgL_auxz00_2735;

													BgL_auxz00_2735 =
														(BgL_variablez00_bglt) (BgL_arg3448z00_878);
													((((BgL_variablez00_bglt) CREF(BgL_auxz00_2735))->
															BgL_fastzd2alphazd2) =
														((obj_t) BgL_arg3449z00_879), BUNSPEC);
												}
											}
										}
										{
											obj_t BgL_l3343z00_2738;

											BgL_l3343z00_2738 = CDR(BgL_l3343z00_874);
											BgL_l3343z00_874 = BgL_l3343z00_2738;
											goto BgL_zc3anonymousza33446ze3z83_875;
										}
									}
								else
									{	/* Callcc/walk.scm 46 */
										((bool_t) 1);
									}
							}
							{	/* Callcc/walk.scm 49 */
								BgL_nodez00_bglt BgL_arg3451z00_882;

								{	/* Callcc/walk.scm 49 */
									BgL_nodez00_bglt BgL_arg3452z00_883;

									{	/* Callcc/walk.scm 49 */
										BgL_nodez00_bglt BgL_res3672z00_1652;

										{	/* Callcc/walk.scm 49 */
											BgL_nodez00_bglt BgL_nodez00_1626;

											BgL_nodez00_1626 = (BgL_nodez00_bglt) (BgL_bodyz00_871);
											{	/* Callcc/walk.scm 49 */
												obj_t BgL_method3363z00_1627;

												{	/* Callcc/walk.scm 49 */
													BgL_objectz00_bglt BgL_objz00_1628;

													BgL_objz00_1628 =
														(BgL_objectz00_bglt) (BgL_nodez00_1626);
													{	/* Callcc/walk.scm 49 */
														long BgL_objzd2classzd2numz00_1629;

														BgL_objzd2classzd2numz00_1629 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1628);
														{	/* Callcc/walk.scm 49 */
															obj_t BgL_arg2643z00_1630;

															BgL_arg2643z00_1630 =
																PROCEDURE_REF
																(BGl_callccz12zd2envzc0zzcallcc_walkz00,
																(int) (((long) 1)));
															{	/* Callcc/walk.scm 49 */
																obj_t BgL_arrayz00_1632;

																int BgL_offsetz00_1633;

																BgL_arrayz00_1632 = BgL_arg2643z00_1630;
																BgL_offsetz00_1633 =
																	(int) (BgL_objzd2classzd2numz00_1629);
																{	/* Callcc/walk.scm 49 */
																	long BgL_offsetz00_1634;

																	BgL_offsetz00_1634 =
																		((long) (BgL_offsetz00_1633) - OBJECT_TYPE);
																	{	/* Callcc/walk.scm 49 */
																		long BgL_modz00_1635;

																		{	/* Callcc/walk.scm 49 */
																			int BgL_arg2645z00_1636;

																			BgL_arg2645z00_1636 = (int) (((long) 16));
																			{	/* Callcc/walk.scm 49 */
																				long BgL_auxz00_2749;

																				BgL_auxz00_2749 =
																					(long) (BgL_arg2645z00_1636);
																				BgL_modz00_1635 =
																					(BgL_offsetz00_1634 /
																					BgL_auxz00_2749);
																		}}
																		{	/* Callcc/walk.scm 49 */
																			long BgL_restz00_1637;

																			{	/* Callcc/walk.scm 49 */
																				int BgL_arg2644z00_1638;

																				BgL_arg2644z00_1638 =
																					(int) (((long) 16));
																				{	/* Callcc/walk.scm 49 */
																					long BgL_auxz00_2753;

																					BgL_auxz00_2753 =
																						(long) (BgL_arg2644z00_1638);
																					BgL_restz00_1637 =
																						(BgL_offsetz00_1634 %
																						BgL_auxz00_2753);
																			}}
																			{	/* Callcc/walk.scm 49 */

																				BgL_method3363z00_1627 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1632,
																						(int) (BgL_modz00_1635)),
																					(int) (BgL_restz00_1637));
												}}}}}}}}
												BgL_res3672z00_1652 =
													(BgL_nodez00_bglt) (PROCEDURE_ENTRY
													(BgL_method3363z00_1627) (BgL_method3363z00_1627,
														(obj_t) (BgL_nodez00_1626), BEOA));
										}}
										BgL_arg3452z00_883 = BgL_res3672z00_1652;
									}
									BgL_arg3451z00_882 =
										BGl_cellzd2formalszd2zzcallcc_walkz00(BgL_celledz00_872,
										BgL_arg3452z00_883);
								}
								{
									obj_t BgL_auxz00_2767;

									BgL_sfunz00_bglt BgL_auxz00_2765;

									BgL_auxz00_2767 = (obj_t) (BgL_arg3451z00_882);
									BgL_auxz00_2765 = (BgL_sfunz00_bglt) (BgL_funz00_870);
									((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2765))->BgL_bodyz00) =
										((obj_t) BgL_auxz00_2767), BUNSPEC);
							}}
							{
								obj_t BgL_l3345z00_885;

								BgL_l3345z00_885 = BgL_celledz00_872;
							BgL_zc3anonymousza33453ze3z83_886:
								if (PAIRP(BgL_l3345z00_885))
									{	/* Callcc/walk.scm 51 */
										{	/* Callcc/walk.scm 52 */
											obj_t BgL_wze2bze2_888;

											BgL_wze2bze2_888 = CAR(BgL_l3345z00_885);
											{	/* Callcc/walk.scm 52 */
												obj_t BgL_arg3455z00_889;

												BgL_arg3455z00_889 = CAR(BgL_wze2bze2_888);
												{
													BgL_variablez00_bglt BgL_auxz00_2774;

													BgL_auxz00_2774 =
														(BgL_variablez00_bglt) (BgL_arg3455z00_889);
													((((BgL_variablez00_bglt) CREF(BgL_auxz00_2774))->
															BgL_fastzd2alphazd2) =
														((obj_t) BUNSPEC), BUNSPEC);
												}
											}
										}
										{
											obj_t BgL_l3345z00_2777;

											BgL_l3345z00_2777 = CDR(BgL_l3345z00_885);
											BgL_l3345z00_885 = BgL_l3345z00_2777;
											goto BgL_zc3anonymousza33453ze3z83_886;
										}
									}
								else
									{	/* Callcc/walk.scm 51 */
										return ((bool_t) 1);
									}
							}
						}
					}
				}
			}
		}
	}



/* celled-bindings */
	obj_t BGl_celledzd2bindingszd2zzcallcc_walkz00(obj_t BgL_formalsz00_3)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 58 */
			{
				obj_t BgL_celledz00_895;

				obj_t BgL_formalsz00_896;

				BgL_celledz00_895 = BNIL;
				BgL_formalsz00_896 = BgL_formalsz00_3;
			BgL_zc3anonymousza33458ze3z83_897:
				if (NULLP(BgL_formalsz00_896))
					{	/* Callcc/walk.scm 62 */
						return BgL_celledz00_895;
					}
				else
					{	/* Callcc/walk.scm 64 */
						bool_t BgL_testz00_2781;

						{	/* Callcc/walk.scm 64 */
							obj_t BgL_arg3469z00_911;

							BgL_arg3469z00_911 = CAR(BgL_formalsz00_896);
							BgL_testz00_2781 =
								BGl_celledzf3zf3zzcallcc_walkz00(
								(BgL_variablez00_bglt) (BgL_arg3469z00_911));
						}
						if (BgL_testz00_2781)
							{	/* Callcc/walk.scm 67 */
								BgL_localz00_bglt BgL_varz00_900;

								{	/* Callcc/walk.scm 67 */
									obj_t BgL_arg3466z00_908;

									{	/* Callcc/walk.scm 67 */
										BgL_variablez00_bglt BgL_obj1604z00_1664;

										{	/* Callcc/walk.scm 67 */
											obj_t BgL_pairz00_1663;

											BgL_pairz00_1663 = BgL_formalsz00_896;
											BgL_obj1604z00_1664 =
												(BgL_variablez00_bglt) (CAR(BgL_pairz00_1663));
										}
										BgL_arg3466z00_908 =
											(((BgL_variablez00_bglt) CREF(BgL_obj1604z00_1664))->
											BgL_idz00);
									}
									BgL_varz00_900 =
										BGl_makezd2localzd2svarz00zzast_localz00(BgL_arg3466z00_908,
										(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
								}
								{	/* Callcc/walk.scm 67 */
									obj_t BgL_oze2nze2_901;

									BgL_oze2nze2_901 =
										MAKE_PAIR(CAR(BgL_formalsz00_896),
										(obj_t) (BgL_varz00_900));
									{	/* Callcc/walk.scm 68 */

										{	/* Callcc/walk.scm 69 */
											BgL_localz00_bglt BgL_obj3304z00_902;

											BgL_obj3304z00_902 = ((BgL_localz00_bglt) BgL_varz00_900);
											{	/* Callcc/walk.scm 69 */
												BgL_localzf2cellzf2_bglt BgL_arg3461z00_903;

												BgL_arg3461z00_903 =
													BGl_wideningzd2localzf2cellz20zzcallcc_walkz00();
												{	/* Callcc/walk.scm 69 */
													obj_t BgL_auxz00_2797;

													BgL_objectz00_bglt BgL_auxz00_2795;

													BgL_auxz00_2797 = (obj_t) (BgL_arg3461z00_903);
													BgL_auxz00_2795 =
														(BgL_objectz00_bglt) (BgL_obj3304z00_902);
													BGL_OBJECT_WIDENING_SET(BgL_auxz00_2795,
														BgL_auxz00_2797);
												}
											}
											BGL_OBJECT_CLASS_NUM_SET(
												(BgL_objectz00_bglt) (BgL_obj3304z00_902),
												BGl_classzd2numzd2zz__objectz00
												(BGl_localzf2cellzf2zzcallcc_walkz00));
											BgL_obj3304z00_902;
										}
										{	/* Callcc/walk.scm 70 */
											obj_t BgL_arg3463z00_905;

											obj_t BgL_arg3464z00_906;

											BgL_arg3463z00_905 =
												MAKE_PAIR(BgL_oze2nze2_901, BgL_celledz00_895);
											BgL_arg3464z00_906 = CDR(BgL_formalsz00_896);
											{
												obj_t BgL_formalsz00_2806;

												obj_t BgL_celledz00_2805;

												BgL_celledz00_2805 = BgL_arg3463z00_905;
												BgL_formalsz00_2806 = BgL_arg3464z00_906;
												BgL_formalsz00_896 = BgL_formalsz00_2806;
												BgL_celledz00_895 = BgL_celledz00_2805;
												goto BgL_zc3anonymousza33458ze3z83_897;
											}
										}
									}
								}
							}
						else
							{
								obj_t BgL_formalsz00_2807;

								BgL_formalsz00_2807 = CDR(BgL_formalsz00_896);
								BgL_formalsz00_896 = BgL_formalsz00_2807;
								goto BgL_zc3anonymousza33458ze3z83_897;
							}
					}
			}
		}
	}



/* cell-formals */
	BgL_nodez00_bglt BGl_cellzd2formalszd2zzcallcc_walkz00(obj_t BgL_celledz00_4,
		BgL_nodez00_bglt BgL_bodyz00_5)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 75 */
			if (NULLP(BgL_celledz00_4))
				{	/* Callcc/walk.scm 76 */
					return BgL_bodyz00_5;
				}
			else
				{	/* Callcc/walk.scm 78 */
					obj_t BgL_locz00_914;

					BgL_locz00_914 =
						(((BgL_nodez00_bglt) CREF(BgL_bodyz00_5))->BgL_locz00);
					{	/* Callcc/walk.scm 79 */
						obj_t BgL_arg3472z00_916;

						{	/* Callcc/walk.scm 83 */
							obj_t BgL_head3349z00_919;

							BgL_head3349z00_919 = MAKE_PAIR(BNIL, BNIL);
							{
								obj_t BgL_l3347z00_921;

								obj_t BgL_tail3350z00_922;

								BgL_l3347z00_921 = BgL_celledz00_4;
								BgL_tail3350z00_922 = BgL_head3349z00_919;
							BgL_zc3anonymousza33474ze3z83_923:
								if (NULLP(BgL_l3347z00_921))
									{	/* Callcc/walk.scm 83 */
										BgL_arg3472z00_916 = CDR(BgL_head3349z00_919);
									}
								else
									{	/* Callcc/walk.scm 83 */
										obj_t BgL_newtail3351z00_925;

										{	/* Callcc/walk.scm 83 */
											obj_t BgL_arg3477z00_927;

											{	/* Callcc/walk.scm 83 */
												obj_t BgL_oze2nze2_929;

												BgL_oze2nze2_929 = CAR(BgL_l3347z00_921);
												{	/* Callcc/walk.scm 84 */
													obj_t BgL_arg3479z00_930;

													BgL_makezd2boxzd2_bglt BgL_arg3480z00_931;

													BgL_arg3479z00_930 = CDR(BgL_oze2nze2_929);
													{	/* Callcc/walk.scm 88 */
														BgL_varz00_bglt BgL_arg3482z00_932;

														obj_t BgL_arg3483z00_933;

														{	/* Callcc/walk.scm 88 */
															obj_t BgL_arg3484z00_934;

															BgL_arg3484z00_934 = CAR(BgL_oze2nze2_929);
															BgL_arg3482z00_932 =
																BGl_makezd2varzd2zzast_nodez00(BgL_locz00_914,
																(BgL_typez00_bglt)
																(BGl_za2_za2z00zztype_cachez00),
																(BgL_variablez00_bglt) (BgL_arg3484z00_934));
														}
														BgL_arg3483z00_933 = CAR(BgL_oze2nze2_929);
														BgL_arg3480z00_931 =
															BGl_azd2makezd2cellz00zzcallcc_walkz00(
															(BgL_nodez00_bglt) (BgL_arg3482z00_932),
															(BgL_variablez00_bglt) (BgL_arg3483z00_933));
													}
													BgL_arg3477z00_927 =
														MAKE_PAIR(BgL_arg3479z00_930,
														(obj_t) (BgL_arg3480z00_931));
												}
											}
											BgL_newtail3351z00_925 =
												MAKE_PAIR(BgL_arg3477z00_927, BNIL);
										}
										SET_CDR(BgL_tail3350z00_922, BgL_newtail3351z00_925);
										{
											obj_t BgL_tail3350z00_2832;

											obj_t BgL_l3347z00_2830;

											BgL_l3347z00_2830 = CDR(BgL_l3347z00_921);
											BgL_tail3350z00_2832 = BgL_newtail3351z00_925;
											BgL_tail3350z00_922 = BgL_tail3350z00_2832;
											BgL_l3347z00_921 = BgL_l3347z00_2830;
											goto BgL_zc3anonymousza33474ze3z83_923;
										}
									}
							}
						}
						return
							(BgL_nodez00_bglt) (BGl_makezd2letzd2varz00zzast_nodez00
							(BgL_locz00_914,
								(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00), BUNSPEC,
								BINT(((long) -1)), BgL_arg3472z00_916, BgL_bodyz00_5,
								((bool_t) 1)));
		}}}
	}



/* a-make-cell */
	BgL_makezd2boxzd2_bglt BGl_azd2makezd2cellz00zzcallcc_walkz00(BgL_nodez00_bglt
		BgL_nodez00_6, BgL_variablez00_bglt BgL_variablez00_7)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 95 */
			{	/* Callcc/walk.scm 97 */
				BgL_variablez00_bglt BgL_obj1616z00_1686;

				obj_t BgL_val1615z00_1687;

				BgL_obj1616z00_1686 = BgL_variablez00_7;
				BgL_val1615z00_1687 = CNST_TABLE_REF(((long) 1));
				((((BgL_variablez00_bglt) CREF(BgL_obj1616z00_1686))->BgL_accessz00) =
					((obj_t) BgL_val1615z00_1687), BUNSPEC);
			}
			{	/* Callcc/walk.scm 98 */
				BgL_localz00_bglt BgL_obj3309z00_937;

				BgL_obj3309z00_937 =
					((BgL_localz00_bglt) (BgL_localz00_bglt) (BgL_variablez00_7));
				{	/* Callcc/walk.scm 98 */
					BgL_localzf2cellzf2_bglt BgL_arg3485z00_938;

					BgL_arg3485z00_938 = BGl_wideningzd2localzf2cellz20zzcallcc_walkz00();
					{	/* Callcc/walk.scm 98 */
						obj_t BgL_auxz00_2844;

						BgL_objectz00_bglt BgL_auxz00_2842;

						BgL_auxz00_2844 = (obj_t) (BgL_arg3485z00_938);
						BgL_auxz00_2842 = (BgL_objectz00_bglt) (BgL_obj3309z00_937);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_2842, BgL_auxz00_2844);
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_obj3309z00_937),
					BGl_classzd2numzd2zz__objectz00(BGl_localzf2cellzf2zzcallcc_walkz00));
				BgL_obj3309z00_937;
			}
			{	/* Callcc/walk.scm 99 */
				obj_t BgL_arg3487z00_940;

				BgL_arg3487z00_940 =
					(((BgL_nodez00_bglt) CREF(BgL_nodez00_6))->BgL_locz00);
				return
					BGl_makezd2makezd2boxz00zzast_nodez00(BgL_arg3487z00_940,
					(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00), BUNSPEC,
					BINT(((long) -1)), BgL_nodez00_6);
		}}
	}



/* celled? */
	bool_t BGl_celledzf3zf3zzcallcc_walkz00(BgL_variablez00_bglt BgL_varz00_8)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 104 */
			{	/* Callcc/walk.scm 105 */
				bool_t BgL__ortest_3311z00_942;

				{	/* Callcc/walk.scm 105 */
					obj_t BgL_obj3265z00_1691;

					BgL_obj3265z00_1691 = (obj_t) (BgL_varz00_8);
					BgL__ortest_3311z00_942 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj3265z00_1691,
						BGl_localzf2cellzf2zzcallcc_walkz00);
				}
				if (BgL__ortest_3311z00_942)
					{	/* Callcc/walk.scm 105 */
						return BgL__ortest_3311z00_942;
					}
				else
					{	/* Callcc/walk.scm 105 */
						if (
							((((BgL_variablez00_bglt) CREF(BgL_varz00_8))->BgL_accessz00) ==
								CNST_TABLE_REF(((long) 2))))
							{	/* Callcc/walk.scm 107 */
								bool_t BgL__ortest_3313z00_944;

								{	/* Callcc/walk.scm 107 */
									BgL_typez00_bglt BgL_arg3490z00_946;

									BgL_arg3490z00_946 =
										(((BgL_variablez00_bglt) CREF(BgL_varz00_8))->BgL_typez00);
									BgL__ortest_3313z00_944 =
										(
										(obj_t) (BgL_arg3490z00_946) ==
										BGl_za2_za2z00zztype_cachez00);
								}
								if (BgL__ortest_3313z00_944)
									{	/* Callcc/walk.scm 107 */
										return BgL__ortest_3313z00_944;
									}
								else
									{	/* Callcc/walk.scm 108 */
										BgL_typez00_bglt BgL_arg3489z00_945;

										BgL_arg3489z00_945 =
											(((BgL_variablez00_bglt) CREF(BgL_varz00_8))->
											BgL_typez00);
										return
											BGl_bigloozd2typezf3z21zztype_typez00(BgL_arg3489z00_945);
									}
							}
						else
							{	/* Callcc/walk.scm 106 */
								return ((bool_t) 0);
							}
					}
			}
		}
	}



/* callcc*! */
	obj_t BGl_callccza2z12zb0zzcallcc_walkz00(obj_t BgL_nodeza2za2_31)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 331 */
		BGl_callccza2z12zb0zzcallcc_walkz00:
			if (NULLP(BgL_nodeza2za2_31))
				{	/* Callcc/walk.scm 332 */
					return CNST_TABLE_REF(((long) 3));
				}
			else
				{	/* Callcc/walk.scm 332 */
					{	/* Callcc/walk.scm 335 */
						BgL_nodez00_bglt BgL_arg3494z00_950;

						{	/* Callcc/walk.scm 335 */
							obj_t BgL_arg3495z00_951;

							BgL_arg3495z00_951 = CAR(BgL_nodeza2za2_31);
							{	/* Callcc/walk.scm 335 */
								BgL_nodez00_bglt BgL_res3675z00_1723;

								{	/* Callcc/walk.scm 335 */
									BgL_nodez00_bglt BgL_nodez00_1697;

									BgL_nodez00_1697 = (BgL_nodez00_bglt) (BgL_arg3495z00_951);
									{	/* Callcc/walk.scm 335 */
										obj_t BgL_method3363z00_1698;

										{	/* Callcc/walk.scm 335 */
											BgL_objectz00_bglt BgL_objz00_1699;

											BgL_objz00_1699 = (BgL_objectz00_bglt) (BgL_nodez00_1697);
											{	/* Callcc/walk.scm 335 */
												long BgL_objzd2classzd2numz00_1700;

												BgL_objzd2classzd2numz00_1700 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1699);
												{	/* Callcc/walk.scm 335 */
													obj_t BgL_arg2643z00_1701;

													BgL_arg2643z00_1701 =
														PROCEDURE_REF
														(BGl_callccz12zd2envzc0zzcallcc_walkz00,
														(int) (((long) 1)));
													{	/* Callcc/walk.scm 335 */
														obj_t BgL_arrayz00_1703;

														int BgL_offsetz00_1704;

														BgL_arrayz00_1703 = BgL_arg2643z00_1701;
														BgL_offsetz00_1704 =
															(int) (BgL_objzd2classzd2numz00_1700);
														{	/* Callcc/walk.scm 335 */
															long BgL_offsetz00_1705;

															BgL_offsetz00_1705 =
																((long) (BgL_offsetz00_1704) - OBJECT_TYPE);
															{	/* Callcc/walk.scm 335 */
																long BgL_modz00_1706;

																{	/* Callcc/walk.scm 335 */
																	int BgL_arg2645z00_1707;

																	BgL_arg2645z00_1707 = (int) (((long) 16));
																	{	/* Callcc/walk.scm 335 */
																		long BgL_auxz00_2880;

																		BgL_auxz00_2880 =
																			(long) (BgL_arg2645z00_1707);
																		BgL_modz00_1706 =
																			(BgL_offsetz00_1705 / BgL_auxz00_2880);
																}}
																{	/* Callcc/walk.scm 335 */
																	long BgL_restz00_1708;

																	{	/* Callcc/walk.scm 335 */
																		int BgL_arg2644z00_1709;

																		BgL_arg2644z00_1709 = (int) (((long) 16));
																		{	/* Callcc/walk.scm 335 */
																			long BgL_auxz00_2884;

																			BgL_auxz00_2884 =
																				(long) (BgL_arg2644z00_1709);
																			BgL_restz00_1708 =
																				(BgL_offsetz00_1705 % BgL_auxz00_2884);
																	}}
																	{	/* Callcc/walk.scm 335 */

																		BgL_method3363z00_1698 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1703,
																				(int) (BgL_modz00_1706)),
																			(int) (BgL_restz00_1708));
										}}}}}}}}
										BgL_res3675z00_1723 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3363z00_1698) (BgL_method3363z00_1698,
												(obj_t) (BgL_nodez00_1697), BEOA));
								}}
								BgL_arg3494z00_950 = BgL_res3675z00_1723;
						}}
						{	/* Callcc/walk.scm 335 */
							obj_t BgL_auxz00_2895;

							BgL_auxz00_2895 = (obj_t) (BgL_arg3494z00_950);
							SET_CAR(BgL_nodeza2za2_31, BgL_auxz00_2895);
					}}
					{
						obj_t BgL_nodeza2za2_2898;

						BgL_nodeza2za2_2898 = CDR(BgL_nodeza2za2_31);
						BgL_nodeza2za2_31 = BgL_nodeza2za2_2898;
						goto BGl_callccza2z12zb0zzcallcc_walkz00;
					}
				}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcallcc_walkz00()
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 16 */
			{	/* Callcc/walk.scm 24 */
				obj_t BgL_arg3497z00_953;

				obj_t BgL_arg3498z00_954;

				obj_t BgL_arg3501z00_957;

				BgL_arg3497z00_953 = CNST_TABLE_REF(((long) 4));
				BgL_arg3498z00_954 = BGl_localz00zzast_varz00;
				{	/* Callcc/walk.scm 24 */
					obj_t BgL_v3361z00_958;

					BgL_v3361z00_958 = create_vector((int) (((long) 0)));
					BgL_arg3501z00_957 = BgL_v3361z00_958;
				}
				BGl_localzf2cellzf2zzcallcc_walkz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3497z00_953,
					BgL_arg3498z00_954, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2localzf2cellzd2envza0zzcallcc_walkz00,
					BGl_localzf2cellzd2nilzd2envzf2zzcallcc_walkz00,
					BGl_localzf2cellzf3zd2envzd3zzcallcc_walkz00, ((long) 443660299),
					BFALSE, BFALSE, BgL_arg3501z00_957);
			}
			return (BGl_z52thezd2localzf2cellzd2nilza0zzcallcc_walkz00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* _local/cell? */
	obj_t BGl__localzf2cellzf3z01zzcallcc_walkz00(obj_t BgL_envz00_2533,
		obj_t BgL_obj3265z00_2534)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 24 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3265z00_2534,
					BGl_localzf2cellzf2zzcallcc_walkz00));
		}
	}



/* widening-local/cell */
	BgL_localzf2cellzf2_bglt BGl_wideningzd2localzf2cellz20zzcallcc_walkz00()
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 24 */
			{	/* Callcc/walk.scm 24 */
				BgL_localzf2cellzf2_bglt BgL_new3242z00_959;

				BgL_new3242z00_959 =
					((BgL_localzf2cellzf2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_localzf2cellzf2_bgl))));
				return BgL_new3242z00_959;
			}
		}
	}



/* _%allocate-local/cell */
	obj_t BGl__z52allocatezd2localzf2cellz72zzcallcc_walkz00(obj_t
		BgL_envz00_2531)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 24 */
			{	/* Callcc/walk.scm 24 */
				BgL_localz00_bglt BgL_auxz00_2907;

				{	/* Callcc/walk.scm 24 */
					BgL_localz00_bglt BgL_res3789z00_2622;

					{	/* Callcc/walk.scm 24 */
						BgL_localz00_bglt BgL_new3258z00_2620;

						BgL_new3258z00_2620 =
							((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_localz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3258z00_2620),
							BGl_classzd2numzd2zz__objectz00
							(BGl_localzf2cellzf2zzcallcc_walkz00));
						{	/* Callcc/walk.scm 24 */
							BgL_objectz00_bglt BgL_auxz00_2912;

							BgL_auxz00_2912 = (BgL_objectz00_bglt) (BgL_new3258z00_2620);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2912, BFALSE);
						}
						BgL_res3789z00_2622 = BgL_new3258z00_2620;
					}
					BgL_auxz00_2907 = BgL_res3789z00_2622;
				}
				return (obj_t) (BgL_auxz00_2907);
			}
		}
	}



/* local/cell-nil */
	BgL_localzf2cellzf2_bglt BGl_localzf2cellzd2nilz20zzcallcc_walkz00()
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 24 */
			if ((BGl_z52thezd2localzf2cellzd2nilza0zzcallcc_walkz00 == BUNSPEC))
				{	/* Callcc/walk.scm 24 */
					{	/* Callcc/walk.scm 24 */
						BgL_localz00_bglt BgL_res3676z00_1736;

						{	/* Callcc/walk.scm 24 */
							BgL_localz00_bglt BgL_new1810z00_1732;

							BgL_new1810z00_1732 =
								((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_localz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1810z00_1732),
								BGl_classzd2numzd2zz__objectz00(BGl_localz00zzast_varz00));
							{	/* Callcc/walk.scm 24 */
								BgL_objectz00_bglt BgL_auxz00_2922;

								BgL_auxz00_2922 = (BgL_objectz00_bglt) (BgL_new1810z00_1732);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2922, BFALSE);
							}
							BgL_res3676z00_1736 = BgL_new1810z00_1732;
						}
						BGl_z52thezd2localzf2cellzd2nilza0zzcallcc_walkz00 =
							(obj_t) (BgL_res3676z00_1736);
					}
					{	/* Callcc/walk.scm 24 */
						obj_t BgL_arg3506z00_967;

						BgL_typez00_bglt BgL_arg3507z00_968;

						BgL_valuez00_bglt BgL_arg3508z00_969;

						BgL_arg3506z00_967 = CNST_TABLE_REF(((long) 5));
						BgL_arg3507z00_968 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg3508z00_969 = BGl_valuezd2nilzd2zzast_varz00();
						{	/* Callcc/walk.scm 24 */
							BgL_localz00_bglt BgL_res3677z00_1758;

							{	/* Callcc/walk.scm 24 */
								BgL_localz00_bglt BgL_new1798z00_1737;

								BgL_new1798z00_1737 =
									(BgL_localz00_bglt)
									(BGl_z52thezd2localzf2cellzd2nilza0zzcallcc_walkz00);
								{	/* Callcc/walk.scm 24 */
									obj_t BgL_id1788z00_1748;

									obj_t BgL_name1789z00_1749;

									BgL_typez00_bglt BgL_type1790z00_1750;

									BgL_valuez00_bglt BgL_value1791z00_1751;

									obj_t BgL_access1792z00_1752;

									obj_t BgL_fastzd2alpha1793zd2_1753;

									obj_t BgL_removable1794z00_1754;

									long BgL_occurrence1795z00_1755;

									bool_t BgL_userzf31796zf3_1756;

									long BgL_key1797z00_1757;

									BgL_id1788z00_1748 = BgL_arg3506z00_967;
									BgL_name1789z00_1749 = BUNSPEC;
									BgL_type1790z00_1750 = BgL_arg3507z00_968;
									BgL_value1791z00_1751 = BgL_arg3508z00_969;
									BgL_access1792z00_1752 = BUNSPEC;
									BgL_fastzd2alpha1793zd2_1753 = BUNSPEC;
									BgL_removable1794z00_1754 = BUNSPEC;
									BgL_occurrence1795z00_1755 = ((long) 0);
									BgL_userzf31796zf3_1756 = ((bool_t) 0);
									BgL_key1797z00_1757 = ((long) 0);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1737))->
											BgL_idz00) = ((obj_t) BgL_id1788z00_1748), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1737))->
											BgL_namez00) = ((obj_t) BgL_name1789z00_1749), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1737))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type1790z00_1750), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1737))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) BgL_value1791z00_1751), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1737))->
											BgL_accessz00) =
										((obj_t) BgL_access1792z00_1752), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1737))->
											BgL_fastzd2alphazd2) =
										((obj_t) BgL_fastzd2alpha1793zd2_1753), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1737))->
											BgL_removablez00) =
										((obj_t) BgL_removable1794z00_1754), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1737))->
											BgL_occurrencez00) =
										((long) BgL_occurrence1795z00_1755), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1737))->
											BgL_userzf3zf3) =
										((bool_t) BgL_userzf31796zf3_1756), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1737))->
											BgL_keyz00) = ((long) BgL_key1797z00_1757), BUNSPEC);
									BgL_res3677z00_1758 = BgL_new1798z00_1737;
							}} BgL_res3677z00_1758;
					}}
					{	/* Callcc/walk.scm 24 */
						long BgL_arg3511z00_972;

						BgL_arg3511z00_972 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_localzf2cellzf2zzcallcc_walkz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2localzf2cellzd2nilza0zzcallcc_walkz00),
							BgL_arg3511z00_972);
					}
					{	/* Callcc/walk.scm 24 */
						BgL_localzf2cellzf2_bglt BgL_arg3512z00_973;

						BgL_arg3512z00_973 =
							BGl_wideningzd2localzf2cellz20zzcallcc_walkz00();
						{	/* Callcc/walk.scm 24 */
							obj_t BgL_auxz00_2946;

							BgL_objectz00_bglt BgL_auxz00_2944;

							BgL_auxz00_2946 = (obj_t) (BgL_arg3512z00_973);
							BgL_auxz00_2944 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2localzf2cellzd2nilza0zzcallcc_walkz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2944, BgL_auxz00_2946);
				}}}
			else
				{	/* Callcc/walk.scm 24 */
					BFALSE;
				}
			return
				(BgL_localzf2cellzf2_bglt)
				(BGl_z52thezd2localzf2cellzd2nilza0zzcallcc_walkz00);
		}
	}



/* _local/cell-nil */
	obj_t BGl__localzf2cellzd2nilz20zzcallcc_walkz00(obj_t BgL_envz00_2532)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 24 */
			return (obj_t) (BGl_localzf2cellzd2nilz20zzcallcc_walkz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcallcc_walkz00()
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 16 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00,
				BGl_callccz12zd2default3362zd2envz12zzcallcc_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string3759z00zzcallcc_walkz00);
		}
	}



/* callcc! */
	BgL_nodez00_bglt BGl_callccz12z12zzcallcc_walkz00(BgL_nodez00_bglt
		BgL_nodez00_9)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 113 */
			{	/* Callcc/walk.scm 113 */
				obj_t BgL_method3363z00_1775;

				{	/* Callcc/walk.scm 113 */
					BgL_objectz00_bglt BgL_objz00_1776;

					BgL_objz00_1776 = (BgL_objectz00_bglt) (BgL_nodez00_9);
					{	/* Callcc/walk.scm 113 */
						long BgL_objzd2classzd2numz00_1777;

						BgL_objzd2classzd2numz00_1777 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1776);
						{	/* Callcc/walk.scm 113 */
							obj_t BgL_arg2643z00_1778;

							BgL_arg2643z00_1778 =
								PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
								(int) (((long) 1)));
							{	/* Callcc/walk.scm 113 */
								obj_t BgL_arrayz00_1780;

								int BgL_offsetz00_1781;

								BgL_arrayz00_1780 = BgL_arg2643z00_1778;
								BgL_offsetz00_1781 = (int) (BgL_objzd2classzd2numz00_1777);
								{	/* Callcc/walk.scm 113 */
									long BgL_offsetz00_1782;

									BgL_offsetz00_1782 =
										((long) (BgL_offsetz00_1781) - OBJECT_TYPE);
									{	/* Callcc/walk.scm 113 */
										long BgL_modz00_1783;

										{	/* Callcc/walk.scm 113 */
											int BgL_arg2645z00_1784;

											BgL_arg2645z00_1784 = (int) (((long) 16));
											{	/* Callcc/walk.scm 113 */
												long BgL_auxz00_2961;

												BgL_auxz00_2961 = (long) (BgL_arg2645z00_1784);
												BgL_modz00_1783 =
													(BgL_offsetz00_1782 / BgL_auxz00_2961);
										}}
										{	/* Callcc/walk.scm 113 */
											long BgL_restz00_1785;

											{	/* Callcc/walk.scm 113 */
												int BgL_arg2644z00_1786;

												BgL_arg2644z00_1786 = (int) (((long) 16));
												{	/* Callcc/walk.scm 113 */
													long BgL_auxz00_2965;

													BgL_auxz00_2965 = (long) (BgL_arg2644z00_1786);
													BgL_restz00_1785 =
														(BgL_offsetz00_1782 % BgL_auxz00_2965);
											}}
											{	/* Callcc/walk.scm 113 */

												BgL_method3363z00_1775 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1780,
														(int) (BgL_modz00_1783)), (int) (BgL_restz00_1785));
				}}}}}}}}
				return
					(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3363z00_1775)
					(BgL_method3363z00_1775, (obj_t) (BgL_nodez00_9), BEOA));
			}
		}
	}



/* _callcc! */
	obj_t BGl__callccz12z12zzcallcc_walkz00(obj_t BgL_envz00_2529,
		obj_t BgL_nodez00_2530)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 113 */
			return
				(obj_t) (BGl_callccz12z12zzcallcc_walkz00(
					(BgL_nodez00_bglt) (BgL_nodez00_2530)));
		}
	}



/* callcc!-default3362 */
	BgL_nodez00_bglt
		BGl_callccz12zd2default3362zc0zzcallcc_walkz00(BgL_nodez00_bglt
		BgL_nodez00_10)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 16 */
			return
				(BgL_nodez00_bglt) (BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 6)),
					BGl_string3760z00zzcallcc_walkz00, (obj_t) (BgL_nodez00_10)));
		}
	}



/* _callcc!-default3362 */
	obj_t BGl__callccz12zd2default3362zc0zzcallcc_walkz00(obj_t BgL_envz00_2535,
		obj_t BgL_nodez00_2536)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 16 */
			return
				(obj_t) (BGl_callccz12zd2default3362zc0zzcallcc_walkz00(
					(BgL_nodez00_bglt) (BgL_nodez00_2536)));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcallcc_walkz00()
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_atomz00zzast_nodez00,
				BGl_proc3761z00zzcallcc_walkz00, BGl_string3759z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_kwotez00zzast_nodez00,
				BGl_proc3762z00zzcallcc_walkz00, BGl_string3759z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_varz00zzast_nodez00,
				BGl_proc3763z00zzcallcc_walkz00, BGl_string3759z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_sequencez00zzast_nodez00,
				BGl_proc3764z00zzcallcc_walkz00, BGl_string3759z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc3765z00zzcallcc_walkz00, BGl_string3759z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3766z00zzcallcc_walkz00, BGl_string3759z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc3767z00zzcallcc_walkz00, BGl_string3759z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc3768z00zzcallcc_walkz00, BGl_string3759z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc3769z00zzcallcc_walkz00, BGl_string3759z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc3770z00zzcallcc_walkz00, BGl_string3759z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3771z00zzcallcc_walkz00,
				BGl_string3759z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc3772z00zzcallcc_walkz00, BGl_string3759z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_selectz00zzast_nodez00,
				BGl_proc3773z00zzcallcc_walkz00, BGl_string3759z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc3774z00zzcallcc_walkz00, BGl_string3759z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc3775z00zzcallcc_walkz00, BGl_string3759z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3776z00zzcallcc_walkz00,
				BGl_string3759z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3777z00zzcallcc_walkz00,
				BGl_string3759z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc3778z00zzcallcc_walkz00, BGl_string3759z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc3779z00zzcallcc_walkz00, BGl_string3759z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3780z00zzcallcc_walkz00,
				BGl_string3759z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_localzf2cellzf2zzcallcc_walkz00, BGl_proc3781z00zzcallcc_walkz00,
				BGl_string3782z00zzcallcc_walkz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_localzf2cellzf2zzcallcc_walkz00, BGl_proc3783z00zzcallcc_walkz00,
				BGl_string3784z00zzcallcc_walkz00);
		}
	}



/* struct+object->objec3408 */
	obj_t BGl_structzb2objectzd2ze3objec3408z83zzcallcc_walkz00(obj_t
		BgL_envz00_2564, obj_t BgL_oz00_2565, obj_t BgL_sz00_2566)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 24 */
			{
				BgL_localzf2cellzf2_bglt BgL_oz00_1577;

				obj_t BgL_sz00_1578;

				{	/* Callcc/walk.scm 24 */
					BgL_localzf2cellzf2_bglt BgL_auxz00_3008;

					BgL_oz00_1577 = (BgL_localzf2cellzf2_bglt) (BgL_oz00_2565);
					BgL_sz00_1578 = BgL_sz00_2566;
					{

						{	/* Callcc/walk.scm 24 */
							obj_t BgL_old3262z00_1581;

							{	/* Callcc/walk.scm 24 */
								obj_t BgL_nextzd2method3407zd2_1586;

								BgL_nextzd2method3407zd2_1586 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1577),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_localzf2cellzf2zzcallcc_walkz00);
								if (PROCEDUREP(BgL_nextzd2method3407zd2_1586))
									{	/* Callcc/walk.scm 24 */
										BgL_old3262z00_1581 =
											PROCEDURE_ENTRY(BgL_nextzd2method3407zd2_1586)
											(BgL_nextzd2method3407zd2_1586, (obj_t) (BgL_oz00_1577),
											BgL_sz00_1578, BEOA);
									}
								else
									{	/* Callcc/walk.scm 24 */
										BgL_old3262z00_1581 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1577), BgL_sz00_1578));
									}
							}
							{	/* Callcc/walk.scm 24 */
								BgL_localzf2cellzf2_bglt BgL_new3264z00_1583;

								BgL_new3264z00_1583 =
									((BgL_localzf2cellzf2_bglt) (BgL_old3262z00_1581));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3264z00_1583),
									BGl_classzd2numzd2zz__objectz00
									(BGl_localzf2cellzf2zzcallcc_walkz00));
								{	/* Callcc/walk.scm 24 */
									BgL_localzf2cellzf2_bglt BgL_arg3665z00_1585;

									BgL_arg3665z00_1585 =
										BGl_wideningzd2localzf2cellz20zzcallcc_walkz00();
									{	/* Callcc/walk.scm 24 */
										obj_t BgL_auxz00_3026;

										BgL_objectz00_bglt BgL_auxz00_3024;

										BgL_auxz00_3026 = (obj_t) (BgL_arg3665z00_1585);
										BgL_auxz00_3024 =
											(BgL_objectz00_bglt) (BgL_new3264z00_1583);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3024, BgL_auxz00_3026);
									}
								}
								BgL_auxz00_3008 = BgL_new3264z00_1583;
							}
						}
					}
					return (obj_t) (BgL_auxz00_3008);
				}
			}
		}
	}



/* object->struct-local3406 */
	obj_t BGl_objectzd2ze3structzd2local3406ze3zzcallcc_walkz00(obj_t
		BgL_envz00_2567, obj_t BgL_obj3259z00_2568)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 24 */
			{
				BgL_localzf2cellzf2_bglt BgL_obj3259z00_1569;

				BgL_obj3259z00_1569 = (BgL_localzf2cellzf2_bglt) (BgL_obj3259z00_2568);
				{

					{	/* Callcc/walk.scm 24 */
						obj_t BgL_res3260z00_1572;

						{	/* Callcc/walk.scm 24 */
							obj_t BgL_nextzd2method3405zd2_1575;

							BgL_nextzd2method3405zd2_1575 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3259z00_1569),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_localzf2cellzf2zzcallcc_walkz00);
							if (PROCEDUREP(BgL_nextzd2method3405zd2_1575))
								{	/* Callcc/walk.scm 24 */
									BgL_res3260z00_1572 =
										PROCEDURE_ENTRY(BgL_nextzd2method3405zd2_1575)
										(BgL_nextzd2method3405zd2_1575,
										(obj_t) (BgL_obj3259z00_1569), BEOA);
								}
							else
								{	/* Callcc/walk.scm 24 */
									BgL_res3260z00_1572 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3259z00_1569));
								}
						}
						{	/* Callcc/walk.scm 24 */
							obj_t BgL_aux3261z00_1573;

							{	/* Callcc/walk.scm 24 */
								obj_t BgL_keyz00_2509;

								BgL_keyz00_2509 = CNST_TABLE_REF(((long) 4));
								BgL_aux3261z00_1573 =
									make_struct(BgL_keyz00_2509, (int) (((long) 0)), BUNSPEC);
							}
							{	/* Callcc/walk.scm 24 */
								int BgL_auxz00_3043;

								BgL_auxz00_3043 = (int) (((long) 0));
								STRUCT_SET(BgL_res3260z00_1572, BgL_auxz00_3043,
									BgL_aux3261z00_1573);
							}
							{	/* Callcc/walk.scm 24 */
								obj_t BgL_auxz00_3046;

								BgL_auxz00_3046 = STRUCT_KEY(BgL_res3260z00_1572);
								STRUCT_KEY_SET(BgL_aux3261z00_1573, BgL_auxz00_3046);
							}
							{	/* Callcc/walk.scm 24 */
								obj_t BgL_kz00_2520;

								BgL_kz00_2520 = CNST_TABLE_REF(((long) 4));
								STRUCT_KEY_SET(BgL_res3260z00_1572, BgL_kz00_2520);
							}
							return BgL_res3260z00_1572;
						}
					}
				}
			}
		}
	}



/* callcc!-box-set!3404 */
	obj_t BGl_callccz12zd2boxzd2setz123404z00zzcallcc_walkz00(obj_t
		BgL_envz00_2569, obj_t BgL_nodez00_2570)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 323 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1561;

				{	/* Callcc/walk.scm 324 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_3052;

					BgL_nodez00_1561 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2570);
					{	/* Callcc/walk.scm 325 */
						BgL_nodez00_bglt BgL_arg3659z00_1565;

						{	/* Callcc/walk.scm 325 */
							BgL_nodez00_bglt BgL_arg3660z00_1566;

							BgL_arg3660z00_1566 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1561))->
								BgL_valuez00);
							{	/* Callcc/walk.scm 325 */
								BgL_nodez00_bglt BgL_res3746z00_2506;

								{	/* Callcc/walk.scm 325 */
									obj_t BgL_method3363z00_2481;

									{	/* Callcc/walk.scm 325 */
										BgL_objectz00_bglt BgL_objz00_2482;

										BgL_objz00_2482 =
											(BgL_objectz00_bglt) (BgL_arg3660z00_1566);
										{	/* Callcc/walk.scm 325 */
											long BgL_objzd2classzd2numz00_2483;

											BgL_objzd2classzd2numz00_2483 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2482);
											{	/* Callcc/walk.scm 325 */
												obj_t BgL_arg2643z00_2484;

												BgL_arg2643z00_2484 =
													PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
													(int) (((long) 1)));
												{	/* Callcc/walk.scm 325 */
													obj_t BgL_arrayz00_2486;

													int BgL_offsetz00_2487;

													BgL_arrayz00_2486 = BgL_arg2643z00_2484;
													BgL_offsetz00_2487 =
														(int) (BgL_objzd2classzd2numz00_2483);
													{	/* Callcc/walk.scm 325 */
														long BgL_offsetz00_2488;

														BgL_offsetz00_2488 =
															((long) (BgL_offsetz00_2487) - OBJECT_TYPE);
														{	/* Callcc/walk.scm 325 */
															long BgL_modz00_2489;

															{	/* Callcc/walk.scm 325 */
																int BgL_arg2645z00_2490;

																BgL_arg2645z00_2490 = (int) (((long) 16));
																{	/* Callcc/walk.scm 325 */
																	long BgL_auxz00_3062;

																	BgL_auxz00_3062 =
																		(long) (BgL_arg2645z00_2490);
																	BgL_modz00_2489 =
																		(BgL_offsetz00_2488 / BgL_auxz00_3062);
															}}
															{	/* Callcc/walk.scm 325 */
																long BgL_restz00_2491;

																{	/* Callcc/walk.scm 325 */
																	int BgL_arg2644z00_2492;

																	BgL_arg2644z00_2492 = (int) (((long) 16));
																	{	/* Callcc/walk.scm 325 */
																		long BgL_auxz00_3066;

																		BgL_auxz00_3066 =
																			(long) (BgL_arg2644z00_2492);
																		BgL_restz00_2491 =
																			(BgL_offsetz00_2488 % BgL_auxz00_3066);
																}}
																{	/* Callcc/walk.scm 325 */

																	BgL_method3363z00_2481 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2486,
																			(int) (BgL_modz00_2489)),
																		(int) (BgL_restz00_2491));
									}}}}}}}}
									BgL_res3746z00_2506 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3363z00_2481)
										(BgL_method3363z00_2481, (obj_t) (BgL_arg3660z00_1566),
											BEOA));
								}
								BgL_arg3659z00_1565 = BgL_res3746z00_2506;
						}}
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1561))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3659z00_1565), BUNSPEC);
					}
					BgL_auxz00_3052 = BgL_nodez00_1561;
					return (obj_t) (BgL_auxz00_3052);
				}
			}
		}
	}



/* callcc!-box-ref3402 */
	obj_t BGl_callccz12zd2boxzd2ref3402z12zzcallcc_walkz00(obj_t BgL_envz00_2571,
		obj_t BgL_nodez00_2572)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 317 */
			return (obj_t) ((BgL_boxzd2refzd2_bglt) (BgL_nodez00_2572));
		}
	}



/* callcc!-make-box3400 */
	obj_t BGl_callccz12zd2makezd2box3400z12zzcallcc_walkz00(obj_t BgL_envz00_2573,
		obj_t BgL_nodez00_2574)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 310 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1549;

				{	/* Callcc/walk.scm 311 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_3082;

					BgL_nodez00_1549 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2574);
					{	/* Callcc/walk.scm 311 */
						BgL_nodez00_bglt BgL_arg3655z00_1552;

						{	/* Callcc/walk.scm 311 */
							BgL_nodez00_bglt BgL_arg3656z00_1553;

							BgL_arg3656z00_1553 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1549))->
								BgL_valuez00);
							{	/* Callcc/walk.scm 311 */
								BgL_nodez00_bglt BgL_res3743z00_2476;

								{	/* Callcc/walk.scm 311 */
									obj_t BgL_method3363z00_2451;

									{	/* Callcc/walk.scm 311 */
										BgL_objectz00_bglt BgL_objz00_2452;

										BgL_objz00_2452 =
											(BgL_objectz00_bglt) (BgL_arg3656z00_1553);
										{	/* Callcc/walk.scm 311 */
											long BgL_objzd2classzd2numz00_2453;

											BgL_objzd2classzd2numz00_2453 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2452);
											{	/* Callcc/walk.scm 311 */
												obj_t BgL_arg2643z00_2454;

												BgL_arg2643z00_2454 =
													PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
													(int) (((long) 1)));
												{	/* Callcc/walk.scm 311 */
													obj_t BgL_arrayz00_2456;

													int BgL_offsetz00_2457;

													BgL_arrayz00_2456 = BgL_arg2643z00_2454;
													BgL_offsetz00_2457 =
														(int) (BgL_objzd2classzd2numz00_2453);
													{	/* Callcc/walk.scm 311 */
														long BgL_offsetz00_2458;

														BgL_offsetz00_2458 =
															((long) (BgL_offsetz00_2457) - OBJECT_TYPE);
														{	/* Callcc/walk.scm 311 */
															long BgL_modz00_2459;

															{	/* Callcc/walk.scm 311 */
																int BgL_arg2645z00_2460;

																BgL_arg2645z00_2460 = (int) (((long) 16));
																{	/* Callcc/walk.scm 311 */
																	long BgL_auxz00_3092;

																	BgL_auxz00_3092 =
																		(long) (BgL_arg2645z00_2460);
																	BgL_modz00_2459 =
																		(BgL_offsetz00_2458 / BgL_auxz00_3092);
															}}
															{	/* Callcc/walk.scm 311 */
																long BgL_restz00_2461;

																{	/* Callcc/walk.scm 311 */
																	int BgL_arg2644z00_2462;

																	BgL_arg2644z00_2462 = (int) (((long) 16));
																	{	/* Callcc/walk.scm 311 */
																		long BgL_auxz00_3096;

																		BgL_auxz00_3096 =
																			(long) (BgL_arg2644z00_2462);
																		BgL_restz00_2461 =
																			(BgL_offsetz00_2458 % BgL_auxz00_3096);
																}}
																{	/* Callcc/walk.scm 311 */

																	BgL_method3363z00_2451 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2456,
																			(int) (BgL_modz00_2459)),
																		(int) (BgL_restz00_2461));
									}}}}}}}}
									BgL_res3743z00_2476 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3363z00_2451)
										(BgL_method3363z00_2451, (obj_t) (BgL_arg3656z00_1553),
											BEOA));
								}
								BgL_arg3655z00_1552 = BgL_res3743z00_2476;
						}}
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1549))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3655z00_1552), BUNSPEC);
					}
					BgL_auxz00_3082 = BgL_nodez00_1549;
					return (obj_t) (BgL_auxz00_3082);
				}
			}
		}
	}



/* callcc!-jump-ex-it3398 */
	obj_t BGl_callccz12zd2jumpzd2exzd2it3398zc0zzcallcc_walkz00(obj_t
		BgL_envz00_2575, obj_t BgL_nodez00_2576)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 301 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1539;

				{	/* Callcc/walk.scm 302 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_3110;

					BgL_nodez00_1539 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2576);
					{	/* Callcc/walk.scm 303 */
						BgL_nodez00_bglt BgL_arg3650z00_1543;

						{	/* Callcc/walk.scm 303 */
							BgL_nodez00_bglt BgL_arg3651z00_1544;

							BgL_arg3651z00_1544 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1539))->
								BgL_exitz00);
							{	/* Callcc/walk.scm 303 */
								BgL_nodez00_bglt BgL_res3737z00_2416;

								{	/* Callcc/walk.scm 303 */
									obj_t BgL_method3363z00_2391;

									{	/* Callcc/walk.scm 303 */
										BgL_objectz00_bglt BgL_objz00_2392;

										BgL_objz00_2392 =
											(BgL_objectz00_bglt) (BgL_arg3651z00_1544);
										{	/* Callcc/walk.scm 303 */
											long BgL_objzd2classzd2numz00_2393;

											BgL_objzd2classzd2numz00_2393 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2392);
											{	/* Callcc/walk.scm 303 */
												obj_t BgL_arg2643z00_2394;

												BgL_arg2643z00_2394 =
													PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
													(int) (((long) 1)));
												{	/* Callcc/walk.scm 303 */
													obj_t BgL_arrayz00_2396;

													int BgL_offsetz00_2397;

													BgL_arrayz00_2396 = BgL_arg2643z00_2394;
													BgL_offsetz00_2397 =
														(int) (BgL_objzd2classzd2numz00_2393);
													{	/* Callcc/walk.scm 303 */
														long BgL_offsetz00_2398;

														BgL_offsetz00_2398 =
															((long) (BgL_offsetz00_2397) - OBJECT_TYPE);
														{	/* Callcc/walk.scm 303 */
															long BgL_modz00_2399;

															{	/* Callcc/walk.scm 303 */
																int BgL_arg2645z00_2400;

																BgL_arg2645z00_2400 = (int) (((long) 16));
																{	/* Callcc/walk.scm 303 */
																	long BgL_auxz00_3120;

																	BgL_auxz00_3120 =
																		(long) (BgL_arg2645z00_2400);
																	BgL_modz00_2399 =
																		(BgL_offsetz00_2398 / BgL_auxz00_3120);
															}}
															{	/* Callcc/walk.scm 303 */
																long BgL_restz00_2401;

																{	/* Callcc/walk.scm 303 */
																	int BgL_arg2644z00_2402;

																	BgL_arg2644z00_2402 = (int) (((long) 16));
																	{	/* Callcc/walk.scm 303 */
																		long BgL_auxz00_3124;

																		BgL_auxz00_3124 =
																			(long) (BgL_arg2644z00_2402);
																		BgL_restz00_2401 =
																			(BgL_offsetz00_2398 % BgL_auxz00_3124);
																}}
																{	/* Callcc/walk.scm 303 */

																	BgL_method3363z00_2391 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2396,
																			(int) (BgL_modz00_2399)),
																		(int) (BgL_restz00_2401));
									}}}}}}}}
									BgL_res3737z00_2416 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3363z00_2391)
										(BgL_method3363z00_2391, (obj_t) (BgL_arg3651z00_1544),
											BEOA));
								}
								BgL_arg3650z00_1543 = BgL_res3737z00_2416;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1539))->
								BgL_exitz00) =
							((BgL_nodez00_bglt) BgL_arg3650z00_1543), BUNSPEC);
					}
					{	/* Callcc/walk.scm 304 */
						BgL_nodez00_bglt BgL_arg3652z00_1545;

						{	/* Callcc/walk.scm 304 */
							BgL_nodez00_bglt BgL_arg3653z00_1546;

							BgL_arg3653z00_1546 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1539))->
								BgL_valuez00);
							{	/* Callcc/walk.scm 304 */
								BgL_nodez00_bglt BgL_res3740z00_2446;

								{	/* Callcc/walk.scm 304 */
									obj_t BgL_method3363z00_2421;

									{	/* Callcc/walk.scm 304 */
										BgL_objectz00_bglt BgL_objz00_2422;

										BgL_objz00_2422 =
											(BgL_objectz00_bglt) (BgL_arg3653z00_1546);
										{	/* Callcc/walk.scm 304 */
											long BgL_objzd2classzd2numz00_2423;

											BgL_objzd2classzd2numz00_2423 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2422);
											{	/* Callcc/walk.scm 304 */
												obj_t BgL_arg2643z00_2424;

												BgL_arg2643z00_2424 =
													PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
													(int) (((long) 1)));
												{	/* Callcc/walk.scm 304 */
													obj_t BgL_arrayz00_2426;

													int BgL_offsetz00_2427;

													BgL_arrayz00_2426 = BgL_arg2643z00_2424;
													BgL_offsetz00_2427 =
														(int) (BgL_objzd2classzd2numz00_2423);
													{	/* Callcc/walk.scm 304 */
														long BgL_offsetz00_2428;

														BgL_offsetz00_2428 =
															((long) (BgL_offsetz00_2427) - OBJECT_TYPE);
														{	/* Callcc/walk.scm 304 */
															long BgL_modz00_2429;

															{	/* Callcc/walk.scm 304 */
																int BgL_arg2645z00_2430;

																BgL_arg2645z00_2430 = (int) (((long) 16));
																{	/* Callcc/walk.scm 304 */
																	long BgL_auxz00_3145;

																	BgL_auxz00_3145 =
																		(long) (BgL_arg2645z00_2430);
																	BgL_modz00_2429 =
																		(BgL_offsetz00_2428 / BgL_auxz00_3145);
															}}
															{	/* Callcc/walk.scm 304 */
																long BgL_restz00_2431;

																{	/* Callcc/walk.scm 304 */
																	int BgL_arg2644z00_2432;

																	BgL_arg2644z00_2432 = (int) (((long) 16));
																	{	/* Callcc/walk.scm 304 */
																		long BgL_auxz00_3149;

																		BgL_auxz00_3149 =
																			(long) (BgL_arg2644z00_2432);
																		BgL_restz00_2431 =
																			(BgL_offsetz00_2428 % BgL_auxz00_3149);
																}}
																{	/* Callcc/walk.scm 304 */

																	BgL_method3363z00_2421 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2426,
																			(int) (BgL_modz00_2429)),
																		(int) (BgL_restz00_2431));
									}}}}}}}}
									BgL_res3740z00_2446 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3363z00_2421)
										(BgL_method3363z00_2421, (obj_t) (BgL_arg3653z00_1546),
											BEOA));
								}
								BgL_arg3652z00_1545 = BgL_res3740z00_2446;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1539))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3652z00_1545), BUNSPEC);
					}
					BgL_auxz00_3110 = BgL_nodez00_1539;
					return (obj_t) (BgL_auxz00_3110);
				}
			}
		}
	}



/* callcc!-set-ex-it3396 */
	obj_t BGl_callccz12zd2setzd2exzd2it3396zc0zzcallcc_walkz00(obj_t
		BgL_envz00_2577, obj_t BgL_nodez00_2578)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 294 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1532;

				{	/* Callcc/walk.scm 295 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_3163;

					BgL_nodez00_1532 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2578);
					{	/* Callcc/walk.scm 295 */
						BgL_nodez00_bglt BgL_arg3647z00_1535;

						{	/* Callcc/walk.scm 295 */
							BgL_nodez00_bglt BgL_arg3648z00_1536;

							BgL_arg3648z00_1536 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1532))->
								BgL_bodyz00);
							{	/* Callcc/walk.scm 295 */
								BgL_nodez00_bglt BgL_res3734z00_2386;

								{	/* Callcc/walk.scm 295 */
									obj_t BgL_method3363z00_2361;

									{	/* Callcc/walk.scm 295 */
										BgL_objectz00_bglt BgL_objz00_2362;

										BgL_objz00_2362 =
											(BgL_objectz00_bglt) (BgL_arg3648z00_1536);
										{	/* Callcc/walk.scm 295 */
											long BgL_objzd2classzd2numz00_2363;

											BgL_objzd2classzd2numz00_2363 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2362);
											{	/* Callcc/walk.scm 295 */
												obj_t BgL_arg2643z00_2364;

												BgL_arg2643z00_2364 =
													PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
													(int) (((long) 1)));
												{	/* Callcc/walk.scm 295 */
													obj_t BgL_arrayz00_2366;

													int BgL_offsetz00_2367;

													BgL_arrayz00_2366 = BgL_arg2643z00_2364;
													BgL_offsetz00_2367 =
														(int) (BgL_objzd2classzd2numz00_2363);
													{	/* Callcc/walk.scm 295 */
														long BgL_offsetz00_2368;

														BgL_offsetz00_2368 =
															((long) (BgL_offsetz00_2367) - OBJECT_TYPE);
														{	/* Callcc/walk.scm 295 */
															long BgL_modz00_2369;

															{	/* Callcc/walk.scm 295 */
																int BgL_arg2645z00_2370;

																BgL_arg2645z00_2370 = (int) (((long) 16));
																{	/* Callcc/walk.scm 295 */
																	long BgL_auxz00_3173;

																	BgL_auxz00_3173 =
																		(long) (BgL_arg2645z00_2370);
																	BgL_modz00_2369 =
																		(BgL_offsetz00_2368 / BgL_auxz00_3173);
															}}
															{	/* Callcc/walk.scm 295 */
																long BgL_restz00_2371;

																{	/* Callcc/walk.scm 295 */
																	int BgL_arg2644z00_2372;

																	BgL_arg2644z00_2372 = (int) (((long) 16));
																	{	/* Callcc/walk.scm 295 */
																		long BgL_auxz00_3177;

																		BgL_auxz00_3177 =
																			(long) (BgL_arg2644z00_2372);
																		BgL_restz00_2371 =
																			(BgL_offsetz00_2368 % BgL_auxz00_3177);
																}}
																{	/* Callcc/walk.scm 295 */

																	BgL_method3363z00_2361 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2366,
																			(int) (BgL_modz00_2369)),
																		(int) (BgL_restz00_2371));
									}}}}}}}}
									BgL_res3734z00_2386 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3363z00_2361)
										(BgL_method3363z00_2361, (obj_t) (BgL_arg3648z00_1536),
											BEOA));
								}
								BgL_arg3647z00_1535 = BgL_res3734z00_2386;
						}}
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1532))->
								BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3647z00_1535), BUNSPEC);
					}
					BgL_auxz00_3163 = BgL_nodez00_1532;
					return (obj_t) (BgL_auxz00_3163);
				}
			}
		}
	}



/* callcc!-let-var3394 */
	obj_t BGl_callccz12zd2letzd2var3394z12zzcallcc_walkz00(obj_t BgL_envz00_2579,
		obj_t BgL_nodez00_2580)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 276 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1510;

				{	/* Callcc/walk.scm 277 */
					BgL_letzd2varzd2_bglt BgL_auxz00_3191;

					BgL_nodez00_1510 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2580);
					{	/* Callcc/walk.scm 278 */
						BgL_nodez00_bglt BgL_arg3637z00_1514;

						{	/* Callcc/walk.scm 278 */
							BgL_nodez00_bglt BgL_arg3638z00_1515;

							BgL_arg3638z00_1515 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1510))->BgL_bodyz00);
							{	/* Callcc/walk.scm 278 */
								BgL_nodez00_bglt BgL_res3728z00_2316;

								{	/* Callcc/walk.scm 278 */
									obj_t BgL_method3363z00_2291;

									{	/* Callcc/walk.scm 278 */
										BgL_objectz00_bglt BgL_objz00_2292;

										BgL_objz00_2292 =
											(BgL_objectz00_bglt) (BgL_arg3638z00_1515);
										{	/* Callcc/walk.scm 278 */
											long BgL_objzd2classzd2numz00_2293;

											BgL_objzd2classzd2numz00_2293 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2292);
											{	/* Callcc/walk.scm 278 */
												obj_t BgL_arg2643z00_2294;

												BgL_arg2643z00_2294 =
													PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
													(int) (((long) 1)));
												{	/* Callcc/walk.scm 278 */
													obj_t BgL_arrayz00_2296;

													int BgL_offsetz00_2297;

													BgL_arrayz00_2296 = BgL_arg2643z00_2294;
													BgL_offsetz00_2297 =
														(int) (BgL_objzd2classzd2numz00_2293);
													{	/* Callcc/walk.scm 278 */
														long BgL_offsetz00_2298;

														BgL_offsetz00_2298 =
															((long) (BgL_offsetz00_2297) - OBJECT_TYPE);
														{	/* Callcc/walk.scm 278 */
															long BgL_modz00_2299;

															{	/* Callcc/walk.scm 278 */
																int BgL_arg2645z00_2300;

																BgL_arg2645z00_2300 = (int) (((long) 16));
																{	/* Callcc/walk.scm 278 */
																	long BgL_auxz00_3201;

																	BgL_auxz00_3201 =
																		(long) (BgL_arg2645z00_2300);
																	BgL_modz00_2299 =
																		(BgL_offsetz00_2298 / BgL_auxz00_3201);
															}}
															{	/* Callcc/walk.scm 278 */
																long BgL_restz00_2301;

																{	/* Callcc/walk.scm 278 */
																	int BgL_arg2644z00_2302;

																	BgL_arg2644z00_2302 = (int) (((long) 16));
																	{	/* Callcc/walk.scm 278 */
																		long BgL_auxz00_3205;

																		BgL_auxz00_3205 =
																			(long) (BgL_arg2644z00_2302);
																		BgL_restz00_2301 =
																			(BgL_offsetz00_2298 % BgL_auxz00_3205);
																}}
																{	/* Callcc/walk.scm 278 */

																	BgL_method3363z00_2291 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2296,
																			(int) (BgL_modz00_2299)),
																		(int) (BgL_restz00_2301));
									}}}}}}}}
									BgL_res3728z00_2316 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3363z00_2291)
										(BgL_method3363z00_2291, (obj_t) (BgL_arg3638z00_1515),
											BEOA));
								}
								BgL_arg3637z00_1514 = BgL_res3728z00_2316;
						}}
						((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1510))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3637z00_1514), BUNSPEC);
					}
					{	/* Callcc/walk.scm 279 */
						obj_t BgL_g3360z00_1516;

						BgL_g3360z00_1516 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1510))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3358z00_1518;

							BgL_l3358z00_1518 = BgL_g3360z00_1516;
						BgL_zc3anonymousza33639ze3z83_1519:
							if (PAIRP(BgL_l3358z00_1518))
								{	/* Callcc/walk.scm 279 */
									{	/* Callcc/walk.scm 280 */
										obj_t BgL_bindingz00_1521;

										BgL_bindingz00_1521 = CAR(BgL_l3358z00_1518);
										{	/* Callcc/walk.scm 280 */
											obj_t BgL_varz00_1522;

											obj_t BgL_valz00_1523;

											BgL_varz00_1522 = CAR(BgL_bindingz00_1521);
											BgL_valz00_1523 = CDR(BgL_bindingz00_1521);
											{	/* Callcc/walk.scm 282 */
												BgL_nodez00_bglt BgL_arg3641z00_1524;

												{	/* Callcc/walk.scm 282 */
													BgL_nodez00_bglt BgL_res3731z00_2350;

													{	/* Callcc/walk.scm 282 */
														BgL_nodez00_bglt BgL_nodez00_2324;

														BgL_nodez00_2324 =
															(BgL_nodez00_bglt) (BgL_valz00_1523);
														{	/* Callcc/walk.scm 282 */
															obj_t BgL_method3363z00_2325;

															{	/* Callcc/walk.scm 282 */
																BgL_objectz00_bglt BgL_objz00_2326;

																BgL_objz00_2326 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2324);
																{	/* Callcc/walk.scm 282 */
																	long BgL_objzd2classzd2numz00_2327;

																	BgL_objzd2classzd2numz00_2327 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2326);
																	{	/* Callcc/walk.scm 282 */
																		obj_t BgL_arg2643z00_2328;

																		BgL_arg2643z00_2328 =
																			PROCEDURE_REF
																			(BGl_callccz12zd2envzc0zzcallcc_walkz00,
																			(int) (((long) 1)));
																		{	/* Callcc/walk.scm 282 */
																			obj_t BgL_arrayz00_2330;

																			int BgL_offsetz00_2331;

																			BgL_arrayz00_2330 = BgL_arg2643z00_2328;
																			BgL_offsetz00_2331 =
																				(int) (BgL_objzd2classzd2numz00_2327);
																			{	/* Callcc/walk.scm 282 */
																				long BgL_offsetz00_2332;

																				BgL_offsetz00_2332 =
																					(
																					(long) (BgL_offsetz00_2331) -
																					OBJECT_TYPE);
																				{	/* Callcc/walk.scm 282 */
																					long BgL_modz00_2333;

																					{	/* Callcc/walk.scm 282 */
																						int BgL_arg2645z00_2334;

																						BgL_arg2645z00_2334 =
																							(int) (((long) 16));
																						{	/* Callcc/walk.scm 282 */
																							long BgL_auxz00_3232;

																							BgL_auxz00_3232 =
																								(long) (BgL_arg2645z00_2334);
																							BgL_modz00_2333 =
																								(BgL_offsetz00_2332 /
																								BgL_auxz00_3232);
																					}}
																					{	/* Callcc/walk.scm 282 */
																						long BgL_restz00_2335;

																						{	/* Callcc/walk.scm 282 */
																							int BgL_arg2644z00_2336;

																							BgL_arg2644z00_2336 =
																								(int) (((long) 16));
																							{	/* Callcc/walk.scm 282 */
																								long BgL_auxz00_3236;

																								BgL_auxz00_3236 =
																									(long) (BgL_arg2644z00_2336);
																								BgL_restz00_2335 =
																									(BgL_offsetz00_2332 %
																									BgL_auxz00_3236);
																						}}
																						{	/* Callcc/walk.scm 282 */

																							BgL_method3363z00_2325 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2330,
																									(int) (BgL_modz00_2333)),
																								(int) (BgL_restz00_2335));
															}}}}}}}}
															BgL_res3731z00_2350 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3363z00_2325)
																(BgL_method3363z00_2325,
																	(obj_t) (BgL_nodez00_2324), BEOA));
													}}
													BgL_arg3641z00_1524 = BgL_res3731z00_2350;
												}
												{	/* Callcc/walk.scm 282 */
													obj_t BgL_auxz00_3247;

													BgL_auxz00_3247 = (obj_t) (BgL_arg3641z00_1524);
													SET_CDR(BgL_bindingz00_1521, BgL_auxz00_3247);
											}}
											if (BGl_celledzf3zf3zzcallcc_walkz00(
													(BgL_variablez00_bglt) (BgL_varz00_1522)))
												{	/* Callcc/walk.scm 283 */
													{
														BgL_typez00_bglt BgL_auxz00_3255;

														BgL_variablez00_bglt BgL_auxz00_3253;

														BgL_auxz00_3255 =
															(BgL_typez00_bglt)
															(BGl_za2objza2z00zztype_cachez00);
														BgL_auxz00_3253 =
															(BgL_variablez00_bglt) (BgL_varz00_1522);
														((((BgL_variablez00_bglt) CREF(BgL_auxz00_3253))->
																BgL_typez00) =
															((BgL_typez00_bglt) BgL_auxz00_3255), BUNSPEC);
													}
													{	/* Callcc/walk.scm 287 */
														BgL_makezd2boxzd2_bglt BgL_arg3643z00_1526;

														{	/* Callcc/walk.scm 287 */
															obj_t BgL_arg3644z00_1527;

															BgL_arg3644z00_1527 = CDR(BgL_bindingz00_1521);
															BgL_arg3643z00_1526 =
																BGl_azd2makezd2cellz00zzcallcc_walkz00(
																(BgL_nodez00_bglt) (BgL_arg3644z00_1527),
																(BgL_variablez00_bglt) (BgL_varz00_1522));
														}
														{	/* Callcc/walk.scm 286 */
															obj_t BgL_auxz00_3262;

															BgL_auxz00_3262 = (obj_t) (BgL_arg3643z00_1526);
															SET_CDR(BgL_bindingz00_1521, BgL_auxz00_3262);
														}
													}
												}
											else
												{	/* Callcc/walk.scm 283 */
													BFALSE;
												}
										}
									}
									{
										obj_t BgL_l3358z00_3265;

										BgL_l3358z00_3265 = CDR(BgL_l3358z00_1518);
										BgL_l3358z00_1518 = BgL_l3358z00_3265;
										goto BgL_zc3anonymousza33639ze3z83_1519;
									}
								}
							else
								{	/* Callcc/walk.scm 279 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_3191 = BgL_nodez00_1510;
					return (obj_t) (BgL_auxz00_3191);
				}
			}
		}
	}



/* callcc!-let-fun3392 */
	obj_t BGl_callccz12zd2letzd2fun3392z12zzcallcc_walkz00(obj_t BgL_envz00_2581,
		obj_t BgL_nodez00_2582)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 267 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1494;

				{	/* Callcc/walk.scm 268 */
					BgL_letzd2funzd2_bglt BgL_auxz00_3269;

					BgL_nodez00_1494 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2582);
					{	/* Callcc/walk.scm 269 */
						obj_t BgL_g3357z00_1498;

						BgL_g3357z00_1498 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1494))->BgL_localsz00);
						{
							obj_t BgL_l3355z00_1500;

							BgL_l3355z00_1500 = BgL_g3357z00_1498;
						BgL_zc3anonymousza33630ze3z83_1501:
							if (PAIRP(BgL_l3355z00_1500))
								{	/* Callcc/walk.scm 269 */
									BGl_callcczd2funz12zc0zzcallcc_walkz00(CAR
										(BgL_l3355z00_1500));
									{
										obj_t BgL_l3355z00_3275;

										BgL_l3355z00_3275 = CDR(BgL_l3355z00_1500);
										BgL_l3355z00_1500 = BgL_l3355z00_3275;
										goto BgL_zc3anonymousza33630ze3z83_1501;
									}
								}
							else
								{	/* Callcc/walk.scm 269 */
									((bool_t) 1);
								}
						}
					}
					{	/* Callcc/walk.scm 270 */
						BgL_nodez00_bglt BgL_arg3634z00_1506;

						{	/* Callcc/walk.scm 270 */
							BgL_nodez00_bglt BgL_arg3635z00_1507;

							BgL_arg3635z00_1507 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1494))->BgL_bodyz00);
							{	/* Callcc/walk.scm 270 */
								BgL_nodez00_bglt BgL_res3725z00_2286;

								{	/* Callcc/walk.scm 270 */
									obj_t BgL_method3363z00_2261;

									{	/* Callcc/walk.scm 270 */
										BgL_objectz00_bglt BgL_objz00_2262;

										BgL_objz00_2262 =
											(BgL_objectz00_bglt) (BgL_arg3635z00_1507);
										{	/* Callcc/walk.scm 270 */
											long BgL_objzd2classzd2numz00_2263;

											BgL_objzd2classzd2numz00_2263 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2262);
											{	/* Callcc/walk.scm 270 */
												obj_t BgL_arg2643z00_2264;

												BgL_arg2643z00_2264 =
													PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
													(int) (((long) 1)));
												{	/* Callcc/walk.scm 270 */
													obj_t BgL_arrayz00_2266;

													int BgL_offsetz00_2267;

													BgL_arrayz00_2266 = BgL_arg2643z00_2264;
													BgL_offsetz00_2267 =
														(int) (BgL_objzd2classzd2numz00_2263);
													{	/* Callcc/walk.scm 270 */
														long BgL_offsetz00_2268;

														BgL_offsetz00_2268 =
															((long) (BgL_offsetz00_2267) - OBJECT_TYPE);
														{	/* Callcc/walk.scm 270 */
															long BgL_modz00_2269;

															{	/* Callcc/walk.scm 270 */
																int BgL_arg2645z00_2270;

																BgL_arg2645z00_2270 = (int) (((long) 16));
																{	/* Callcc/walk.scm 270 */
																	long BgL_auxz00_3286;

																	BgL_auxz00_3286 =
																		(long) (BgL_arg2645z00_2270);
																	BgL_modz00_2269 =
																		(BgL_offsetz00_2268 / BgL_auxz00_3286);
															}}
															{	/* Callcc/walk.scm 270 */
																long BgL_restz00_2271;

																{	/* Callcc/walk.scm 270 */
																	int BgL_arg2644z00_2272;

																	BgL_arg2644z00_2272 = (int) (((long) 16));
																	{	/* Callcc/walk.scm 270 */
																		long BgL_auxz00_3290;

																		BgL_auxz00_3290 =
																			(long) (BgL_arg2644z00_2272);
																		BgL_restz00_2271 =
																			(BgL_offsetz00_2268 % BgL_auxz00_3290);
																}}
																{	/* Callcc/walk.scm 270 */

																	BgL_method3363z00_2261 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2266,
																			(int) (BgL_modz00_2269)),
																		(int) (BgL_restz00_2271));
									}}}}}}}}
									BgL_res3725z00_2286 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3363z00_2261)
										(BgL_method3363z00_2261, (obj_t) (BgL_arg3635z00_1507),
											BEOA));
								}
								BgL_arg3634z00_1506 = BgL_res3725z00_2286;
						}}
						((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1494))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3634z00_1506), BUNSPEC);
					}
					BgL_auxz00_3269 = BgL_nodez00_1494;
					return (obj_t) (BgL_auxz00_3269);
				}
			}
		}
	}



/* callcc!-select3390 */
	obj_t BGl_callccz12zd2select3390zc0zzcallcc_walkz00(obj_t BgL_envz00_2583,
		obj_t BgL_nodez00_2584)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 256 */
			{
				BgL_selectz00_bglt BgL_nodez00_1476;

				{	/* Callcc/walk.scm 257 */
					BgL_selectz00_bglt BgL_auxz00_3304;

					BgL_nodez00_1476 = (BgL_selectz00_bglt) (BgL_nodez00_2584);
					{	/* Callcc/walk.scm 258 */
						BgL_nodez00_bglt BgL_arg3622z00_1480;

						{	/* Callcc/walk.scm 258 */
							BgL_nodez00_bglt BgL_arg3623z00_1481;

							BgL_arg3623z00_1481 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1476))->BgL_testz00);
							{	/* Callcc/walk.scm 258 */
								BgL_nodez00_bglt BgL_res3719z00_2218;

								{	/* Callcc/walk.scm 258 */
									obj_t BgL_method3363z00_2193;

									{	/* Callcc/walk.scm 258 */
										BgL_objectz00_bglt BgL_objz00_2194;

										BgL_objz00_2194 =
											(BgL_objectz00_bglt) (BgL_arg3623z00_1481);
										{	/* Callcc/walk.scm 258 */
											long BgL_objzd2classzd2numz00_2195;

											BgL_objzd2classzd2numz00_2195 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2194);
											{	/* Callcc/walk.scm 258 */
												obj_t BgL_arg2643z00_2196;

												BgL_arg2643z00_2196 =
													PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
													(int) (((long) 1)));
												{	/* Callcc/walk.scm 258 */
													obj_t BgL_arrayz00_2198;

													int BgL_offsetz00_2199;

													BgL_arrayz00_2198 = BgL_arg2643z00_2196;
													BgL_offsetz00_2199 =
														(int) (BgL_objzd2classzd2numz00_2195);
													{	/* Callcc/walk.scm 258 */
														long BgL_offsetz00_2200;

														BgL_offsetz00_2200 =
															((long) (BgL_offsetz00_2199) - OBJECT_TYPE);
														{	/* Callcc/walk.scm 258 */
															long BgL_modz00_2201;

															{	/* Callcc/walk.scm 258 */
																int BgL_arg2645z00_2202;

																BgL_arg2645z00_2202 = (int) (((long) 16));
																{	/* Callcc/walk.scm 258 */
																	long BgL_auxz00_3314;

																	BgL_auxz00_3314 =
																		(long) (BgL_arg2645z00_2202);
																	BgL_modz00_2201 =
																		(BgL_offsetz00_2200 / BgL_auxz00_3314);
															}}
															{	/* Callcc/walk.scm 258 */
																long BgL_restz00_2203;

																{	/* Callcc/walk.scm 258 */
																	int BgL_arg2644z00_2204;

																	BgL_arg2644z00_2204 = (int) (((long) 16));
																	{	/* Callcc/walk.scm 258 */
																		long BgL_auxz00_3318;

																		BgL_auxz00_3318 =
																			(long) (BgL_arg2644z00_2204);
																		BgL_restz00_2203 =
																			(BgL_offsetz00_2200 % BgL_auxz00_3318);
																}}
																{	/* Callcc/walk.scm 258 */

																	BgL_method3363z00_2193 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2198,
																			(int) (BgL_modz00_2201)),
																		(int) (BgL_restz00_2203));
									}}}}}}}}
									BgL_res3719z00_2218 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3363z00_2193)
										(BgL_method3363z00_2193, (obj_t) (BgL_arg3623z00_1481),
											BEOA));
								}
								BgL_arg3622z00_1480 = BgL_res3719z00_2218;
						}}
						((((BgL_selectz00_bglt) CREF(BgL_nodez00_1476))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3622z00_1480), BUNSPEC);
					}
					{	/* Callcc/walk.scm 259 */
						obj_t BgL_g3354z00_1482;

						BgL_g3354z00_1482 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1476))->BgL_clausesz00);
						{
							obj_t BgL_l3352z00_1484;

							BgL_l3352z00_1484 = BgL_g3354z00_1482;
						BgL_zc3anonymousza33624ze3z83_1485:
							if (PAIRP(BgL_l3352z00_1484))
								{	/* Callcc/walk.scm 259 */
									{	/* Callcc/walk.scm 260 */
										obj_t BgL_clausez00_1487;

										BgL_clausez00_1487 = CAR(BgL_l3352z00_1484);
										{	/* Callcc/walk.scm 260 */
											BgL_nodez00_bglt BgL_arg3626z00_1488;

											{	/* Callcc/walk.scm 260 */
												obj_t BgL_arg3627z00_1489;

												BgL_arg3627z00_1489 = CDR(BgL_clausez00_1487);
												{	/* Callcc/walk.scm 260 */
													BgL_nodez00_bglt BgL_res3722z00_2251;

													{	/* Callcc/walk.scm 260 */
														BgL_nodez00_bglt BgL_nodez00_2225;

														BgL_nodez00_2225 =
															(BgL_nodez00_bglt) (BgL_arg3627z00_1489);
														{	/* Callcc/walk.scm 260 */
															obj_t BgL_method3363z00_2226;

															{	/* Callcc/walk.scm 260 */
																BgL_objectz00_bglt BgL_objz00_2227;

																BgL_objz00_2227 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2225);
																{	/* Callcc/walk.scm 260 */
																	long BgL_objzd2classzd2numz00_2228;

																	BgL_objzd2classzd2numz00_2228 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2227);
																	{	/* Callcc/walk.scm 260 */
																		obj_t BgL_arg2643z00_2229;

																		BgL_arg2643z00_2229 =
																			PROCEDURE_REF
																			(BGl_callccz12zd2envzc0zzcallcc_walkz00,
																			(int) (((long) 1)));
																		{	/* Callcc/walk.scm 260 */
																			obj_t BgL_arrayz00_2231;

																			int BgL_offsetz00_2232;

																			BgL_arrayz00_2231 = BgL_arg2643z00_2229;
																			BgL_offsetz00_2232 =
																				(int) (BgL_objzd2classzd2numz00_2228);
																			{	/* Callcc/walk.scm 260 */
																				long BgL_offsetz00_2233;

																				BgL_offsetz00_2233 =
																					(
																					(long) (BgL_offsetz00_2232) -
																					OBJECT_TYPE);
																				{	/* Callcc/walk.scm 260 */
																					long BgL_modz00_2234;

																					{	/* Callcc/walk.scm 260 */
																						int BgL_arg2645z00_2235;

																						BgL_arg2645z00_2235 =
																							(int) (((long) 16));
																						{	/* Callcc/walk.scm 260 */
																							long BgL_auxz00_3344;

																							BgL_auxz00_3344 =
																								(long) (BgL_arg2645z00_2235);
																							BgL_modz00_2234 =
																								(BgL_offsetz00_2233 /
																								BgL_auxz00_3344);
																					}}
																					{	/* Callcc/walk.scm 260 */
																						long BgL_restz00_2236;

																						{	/* Callcc/walk.scm 260 */
																							int BgL_arg2644z00_2237;

																							BgL_arg2644z00_2237 =
																								(int) (((long) 16));
																							{	/* Callcc/walk.scm 260 */
																								long BgL_auxz00_3348;

																								BgL_auxz00_3348 =
																									(long) (BgL_arg2644z00_2237);
																								BgL_restz00_2236 =
																									(BgL_offsetz00_2233 %
																									BgL_auxz00_3348);
																						}}
																						{	/* Callcc/walk.scm 260 */

																							BgL_method3363z00_2226 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2231,
																									(int) (BgL_modz00_2234)),
																								(int) (BgL_restz00_2236));
															}}}}}}}}
															BgL_res3722z00_2251 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3363z00_2226)
																(BgL_method3363z00_2226,
																	(obj_t) (BgL_nodez00_2225), BEOA));
													}}
													BgL_arg3626z00_1488 = BgL_res3722z00_2251;
											}}
											{	/* Callcc/walk.scm 260 */
												obj_t BgL_auxz00_3359;

												BgL_auxz00_3359 = (obj_t) (BgL_arg3626z00_1488);
												SET_CDR(BgL_clausez00_1487, BgL_auxz00_3359);
									}}}
									{
										obj_t BgL_l3352z00_3362;

										BgL_l3352z00_3362 = CDR(BgL_l3352z00_1484);
										BgL_l3352z00_1484 = BgL_l3352z00_3362;
										goto BgL_zc3anonymousza33624ze3z83_1485;
									}
								}
							else
								{	/* Callcc/walk.scm 259 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_3304 = BgL_nodez00_1476;
					return (obj_t) (BgL_auxz00_3304);
				}
			}
		}
	}



/* callcc!-fail3388 */
	obj_t BGl_callccz12zd2fail3388zc0zzcallcc_walkz00(obj_t BgL_envz00_2585,
		obj_t BgL_nodez00_2586)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 246 */
			{
				BgL_failz00_bglt BgL_nodez00_1464;

				{	/* Callcc/walk.scm 247 */
					BgL_failz00_bglt BgL_auxz00_3366;

					BgL_nodez00_1464 = (BgL_failz00_bglt) (BgL_nodez00_2586);
					{	/* Callcc/walk.scm 248 */
						BgL_nodez00_bglt BgL_arg3615z00_1468;

						{	/* Callcc/walk.scm 248 */
							BgL_nodez00_bglt BgL_arg3616z00_1469;

							BgL_arg3616z00_1469 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1464))->BgL_procz00);
							{	/* Callcc/walk.scm 248 */
								BgL_nodez00_bglt BgL_res3710z00_2128;

								{	/* Callcc/walk.scm 248 */
									obj_t BgL_method3363z00_2103;

									{	/* Callcc/walk.scm 248 */
										BgL_objectz00_bglt BgL_objz00_2104;

										BgL_objz00_2104 =
											(BgL_objectz00_bglt) (BgL_arg3616z00_1469);
										{	/* Callcc/walk.scm 248 */
											long BgL_objzd2classzd2numz00_2105;

											BgL_objzd2classzd2numz00_2105 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2104);
											{	/* Callcc/walk.scm 248 */
												obj_t BgL_arg2643z00_2106;

												BgL_arg2643z00_2106 =
													PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
													(int) (((long) 1)));
												{	/* Callcc/walk.scm 248 */
													obj_t BgL_arrayz00_2108;

													int BgL_offsetz00_2109;

													BgL_arrayz00_2108 = BgL_arg2643z00_2106;
													BgL_offsetz00_2109 =
														(int) (BgL_objzd2classzd2numz00_2105);
													{	/* Callcc/walk.scm 248 */
														long BgL_offsetz00_2110;

														BgL_offsetz00_2110 =
															((long) (BgL_offsetz00_2109) - OBJECT_TYPE);
														{	/* Callcc/walk.scm 248 */
															long BgL_modz00_2111;

															{	/* Callcc/walk.scm 248 */
																int BgL_arg2645z00_2112;

																BgL_arg2645z00_2112 = (int) (((long) 16));
																{	/* Callcc/walk.scm 248 */
																	long BgL_auxz00_3376;

																	BgL_auxz00_3376 =
																		(long) (BgL_arg2645z00_2112);
																	BgL_modz00_2111 =
																		(BgL_offsetz00_2110 / BgL_auxz00_3376);
															}}
															{	/* Callcc/walk.scm 248 */
																long BgL_restz00_2113;

																{	/* Callcc/walk.scm 248 */
																	int BgL_arg2644z00_2114;

																	BgL_arg2644z00_2114 = (int) (((long) 16));
																	{	/* Callcc/walk.scm 248 */
																		long BgL_auxz00_3380;

																		BgL_auxz00_3380 =
																			(long) (BgL_arg2644z00_2114);
																		BgL_restz00_2113 =
																			(BgL_offsetz00_2110 % BgL_auxz00_3380);
																}}
																{	/* Callcc/walk.scm 248 */

																	BgL_method3363z00_2103 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2108,
																			(int) (BgL_modz00_2111)),
																		(int) (BgL_restz00_2113));
									}}}}}}}}
									BgL_res3710z00_2128 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3363z00_2103)
										(BgL_method3363z00_2103, (obj_t) (BgL_arg3616z00_1469),
											BEOA));
								}
								BgL_arg3615z00_1468 = BgL_res3710z00_2128;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1464))->BgL_procz00) =
							((BgL_nodez00_bglt) BgL_arg3615z00_1468), BUNSPEC);
					}
					{	/* Callcc/walk.scm 249 */
						BgL_nodez00_bglt BgL_arg3617z00_1470;

						{	/* Callcc/walk.scm 249 */
							BgL_nodez00_bglt BgL_arg3618z00_1471;

							BgL_arg3618z00_1471 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1464))->BgL_msgz00);
							{	/* Callcc/walk.scm 249 */
								BgL_nodez00_bglt BgL_res3713z00_2158;

								{	/* Callcc/walk.scm 249 */
									obj_t BgL_method3363z00_2133;

									{	/* Callcc/walk.scm 249 */
										BgL_objectz00_bglt BgL_objz00_2134;

										BgL_objz00_2134 =
											(BgL_objectz00_bglt) (BgL_arg3618z00_1471);
										{	/* Callcc/walk.scm 249 */
											long BgL_objzd2classzd2numz00_2135;

											BgL_objzd2classzd2numz00_2135 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2134);
											{	/* Callcc/walk.scm 249 */
												obj_t BgL_arg2643z00_2136;

												BgL_arg2643z00_2136 =
													PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
													(int) (((long) 1)));
												{	/* Callcc/walk.scm 249 */
													obj_t BgL_arrayz00_2138;

													int BgL_offsetz00_2139;

													BgL_arrayz00_2138 = BgL_arg2643z00_2136;
													BgL_offsetz00_2139 =
														(int) (BgL_objzd2classzd2numz00_2135);
													{	/* Callcc/walk.scm 249 */
														long BgL_offsetz00_2140;

														BgL_offsetz00_2140 =
															((long) (BgL_offsetz00_2139) - OBJECT_TYPE);
														{	/* Callcc/walk.scm 249 */
															long BgL_modz00_2141;

															{	/* Callcc/walk.scm 249 */
																int BgL_arg2645z00_2142;

																BgL_arg2645z00_2142 = (int) (((long) 16));
																{	/* Callcc/walk.scm 249 */
																	long BgL_auxz00_3401;

																	BgL_auxz00_3401 =
																		(long) (BgL_arg2645z00_2142);
																	BgL_modz00_2141 =
																		(BgL_offsetz00_2140 / BgL_auxz00_3401);
															}}
															{	/* Callcc/walk.scm 249 */
																long BgL_restz00_2143;

																{	/* Callcc/walk.scm 249 */
																	int BgL_arg2644z00_2144;

																	BgL_arg2644z00_2144 = (int) (((long) 16));
																	{	/* Callcc/walk.scm 249 */
																		long BgL_auxz00_3405;

																		BgL_auxz00_3405 =
																			(long) (BgL_arg2644z00_2144);
																		BgL_restz00_2143 =
																			(BgL_offsetz00_2140 % BgL_auxz00_3405);
																}}
																{	/* Callcc/walk.scm 249 */

																	BgL_method3363z00_2133 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2138,
																			(int) (BgL_modz00_2141)),
																		(int) (BgL_restz00_2143));
									}}}}}}}}
									BgL_res3713z00_2158 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3363z00_2133)
										(BgL_method3363z00_2133, (obj_t) (BgL_arg3618z00_1471),
											BEOA));
								}
								BgL_arg3617z00_1470 = BgL_res3713z00_2158;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1464))->BgL_msgz00) =
							((BgL_nodez00_bglt) BgL_arg3617z00_1470), BUNSPEC);
					}
					{	/* Callcc/walk.scm 250 */
						BgL_nodez00_bglt BgL_arg3619z00_1472;

						{	/* Callcc/walk.scm 250 */
							BgL_nodez00_bglt BgL_arg3620z00_1473;

							BgL_arg3620z00_1473 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1464))->BgL_objz00);
							{	/* Callcc/walk.scm 250 */
								BgL_nodez00_bglt BgL_res3716z00_2188;

								{	/* Callcc/walk.scm 250 */
									obj_t BgL_method3363z00_2163;

									{	/* Callcc/walk.scm 250 */
										BgL_objectz00_bglt BgL_objz00_2164;

										BgL_objz00_2164 =
											(BgL_objectz00_bglt) (BgL_arg3620z00_1473);
										{	/* Callcc/walk.scm 250 */
											long BgL_objzd2classzd2numz00_2165;

											BgL_objzd2classzd2numz00_2165 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2164);
											{	/* Callcc/walk.scm 250 */
												obj_t BgL_arg2643z00_2166;

												BgL_arg2643z00_2166 =
													PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
													(int) (((long) 1)));
												{	/* Callcc/walk.scm 250 */
													obj_t BgL_arrayz00_2168;

													int BgL_offsetz00_2169;

													BgL_arrayz00_2168 = BgL_arg2643z00_2166;
													BgL_offsetz00_2169 =
														(int) (BgL_objzd2classzd2numz00_2165);
													{	/* Callcc/walk.scm 250 */
														long BgL_offsetz00_2170;

														BgL_offsetz00_2170 =
															((long) (BgL_offsetz00_2169) - OBJECT_TYPE);
														{	/* Callcc/walk.scm 250 */
															long BgL_modz00_2171;

															{	/* Callcc/walk.scm 250 */
																int BgL_arg2645z00_2172;

																BgL_arg2645z00_2172 = (int) (((long) 16));
																{	/* Callcc/walk.scm 250 */
																	long BgL_auxz00_3426;

																	BgL_auxz00_3426 =
																		(long) (BgL_arg2645z00_2172);
																	BgL_modz00_2171 =
																		(BgL_offsetz00_2170 / BgL_auxz00_3426);
															}}
															{	/* Callcc/walk.scm 250 */
																long BgL_restz00_2173;

																{	/* Callcc/walk.scm 250 */
																	int BgL_arg2644z00_2174;

																	BgL_arg2644z00_2174 = (int) (((long) 16));
																	{	/* Callcc/walk.scm 250 */
																		long BgL_auxz00_3430;

																		BgL_auxz00_3430 =
																			(long) (BgL_arg2644z00_2174);
																		BgL_restz00_2173 =
																			(BgL_offsetz00_2170 % BgL_auxz00_3430);
																}}
																{	/* Callcc/walk.scm 250 */

																	BgL_method3363z00_2163 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2168,
																			(int) (BgL_modz00_2171)),
																		(int) (BgL_restz00_2173));
									}}}}}}}}
									BgL_res3716z00_2188 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3363z00_2163)
										(BgL_method3363z00_2163, (obj_t) (BgL_arg3620z00_1473),
											BEOA));
								}
								BgL_arg3619z00_1472 = BgL_res3716z00_2188;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1464))->BgL_objz00) =
							((BgL_nodez00_bglt) BgL_arg3619z00_1472), BUNSPEC);
					}
					BgL_auxz00_3366 = BgL_nodez00_1464;
					return (obj_t) (BgL_auxz00_3366);
				}
			}
		}
	}



/* callcc!-conditional3386 */
	obj_t BGl_callccz12zd2conditional3386zc0zzcallcc_walkz00(obj_t
		BgL_envz00_2587, obj_t BgL_nodez00_2588)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 236 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1452;

				{	/* Callcc/walk.scm 237 */
					BgL_conditionalz00_bglt BgL_auxz00_3444;

					BgL_nodez00_1452 = (BgL_conditionalz00_bglt) (BgL_nodez00_2588);
					{	/* Callcc/walk.scm 238 */
						BgL_nodez00_bglt BgL_arg3607z00_1456;

						{	/* Callcc/walk.scm 238 */
							BgL_nodez00_bglt BgL_arg3608z00_1457;

							BgL_arg3608z00_1457 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1452))->
								BgL_testz00);
							{	/* Callcc/walk.scm 238 */
								BgL_nodez00_bglt BgL_res3701z00_2038;

								{	/* Callcc/walk.scm 238 */
									obj_t BgL_method3363z00_2013;

									{	/* Callcc/walk.scm 238 */
										BgL_objectz00_bglt BgL_objz00_2014;

										BgL_objz00_2014 =
											(BgL_objectz00_bglt) (BgL_arg3608z00_1457);
										{	/* Callcc/walk.scm 238 */
											long BgL_objzd2classzd2numz00_2015;

											BgL_objzd2classzd2numz00_2015 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2014);
											{	/* Callcc/walk.scm 238 */
												obj_t BgL_arg2643z00_2016;

												BgL_arg2643z00_2016 =
													PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
													(int) (((long) 1)));
												{	/* Callcc/walk.scm 238 */
													obj_t BgL_arrayz00_2018;

													int BgL_offsetz00_2019;

													BgL_arrayz00_2018 = BgL_arg2643z00_2016;
													BgL_offsetz00_2019 =
														(int) (BgL_objzd2classzd2numz00_2015);
													{	/* Callcc/walk.scm 238 */
														long BgL_offsetz00_2020;

														BgL_offsetz00_2020 =
															((long) (BgL_offsetz00_2019) - OBJECT_TYPE);
														{	/* Callcc/walk.scm 238 */
															long BgL_modz00_2021;

															{	/* Callcc/walk.scm 238 */
																int BgL_arg2645z00_2022;

																BgL_arg2645z00_2022 = (int) (((long) 16));
																{	/* Callcc/walk.scm 238 */
																	long BgL_auxz00_3454;

																	BgL_auxz00_3454 =
																		(long) (BgL_arg2645z00_2022);
																	BgL_modz00_2021 =
																		(BgL_offsetz00_2020 / BgL_auxz00_3454);
															}}
															{	/* Callcc/walk.scm 238 */
																long BgL_restz00_2023;

																{	/* Callcc/walk.scm 238 */
																	int BgL_arg2644z00_2024;

																	BgL_arg2644z00_2024 = (int) (((long) 16));
																	{	/* Callcc/walk.scm 238 */
																		long BgL_auxz00_3458;

																		BgL_auxz00_3458 =
																			(long) (BgL_arg2644z00_2024);
																		BgL_restz00_2023 =
																			(BgL_offsetz00_2020 % BgL_auxz00_3458);
																}}
																{	/* Callcc/walk.scm 238 */

																	BgL_method3363z00_2013 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2018,
																			(int) (BgL_modz00_2021)),
																		(int) (BgL_restz00_2023));
									}}}}}}}}
									BgL_res3701z00_2038 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3363z00_2013)
										(BgL_method3363z00_2013, (obj_t) (BgL_arg3608z00_1457),
											BEOA));
								}
								BgL_arg3607z00_1456 = BgL_res3701z00_2038;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1452))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3607z00_1456), BUNSPEC);
					}
					{	/* Callcc/walk.scm 239 */
						BgL_nodez00_bglt BgL_arg3609z00_1458;

						{	/* Callcc/walk.scm 239 */
							BgL_nodez00_bglt BgL_arg3610z00_1459;

							BgL_arg3610z00_1459 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1452))->
								BgL_truez00);
							{	/* Callcc/walk.scm 239 */
								BgL_nodez00_bglt BgL_res3704z00_2068;

								{	/* Callcc/walk.scm 239 */
									obj_t BgL_method3363z00_2043;

									{	/* Callcc/walk.scm 239 */
										BgL_objectz00_bglt BgL_objz00_2044;

										BgL_objz00_2044 =
											(BgL_objectz00_bglt) (BgL_arg3610z00_1459);
										{	/* Callcc/walk.scm 239 */
											long BgL_objzd2classzd2numz00_2045;

											BgL_objzd2classzd2numz00_2045 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2044);
											{	/* Callcc/walk.scm 239 */
												obj_t BgL_arg2643z00_2046;

												BgL_arg2643z00_2046 =
													PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
													(int) (((long) 1)));
												{	/* Callcc/walk.scm 239 */
													obj_t BgL_arrayz00_2048;

													int BgL_offsetz00_2049;

													BgL_arrayz00_2048 = BgL_arg2643z00_2046;
													BgL_offsetz00_2049 =
														(int) (BgL_objzd2classzd2numz00_2045);
													{	/* Callcc/walk.scm 239 */
														long BgL_offsetz00_2050;

														BgL_offsetz00_2050 =
															((long) (BgL_offsetz00_2049) - OBJECT_TYPE);
														{	/* Callcc/walk.scm 239 */
															long BgL_modz00_2051;

															{	/* Callcc/walk.scm 239 */
																int BgL_arg2645z00_2052;

																BgL_arg2645z00_2052 = (int) (((long) 16));
																{	/* Callcc/walk.scm 239 */
																	long BgL_auxz00_3479;

																	BgL_auxz00_3479 =
																		(long) (BgL_arg2645z00_2052);
																	BgL_modz00_2051 =
																		(BgL_offsetz00_2050 / BgL_auxz00_3479);
															}}
															{	/* Callcc/walk.scm 239 */
																long BgL_restz00_2053;

																{	/* Callcc/walk.scm 239 */
																	int BgL_arg2644z00_2054;

																	BgL_arg2644z00_2054 = (int) (((long) 16));
																	{	/* Callcc/walk.scm 239 */
																		long BgL_auxz00_3483;

																		BgL_auxz00_3483 =
																			(long) (BgL_arg2644z00_2054);
																		BgL_restz00_2053 =
																			(BgL_offsetz00_2050 % BgL_auxz00_3483);
																}}
																{	/* Callcc/walk.scm 239 */

																	BgL_method3363z00_2043 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2048,
																			(int) (BgL_modz00_2051)),
																		(int) (BgL_restz00_2053));
									}}}}}}}}
									BgL_res3704z00_2068 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3363z00_2043)
										(BgL_method3363z00_2043, (obj_t) (BgL_arg3610z00_1459),
											BEOA));
								}
								BgL_arg3609z00_1458 = BgL_res3704z00_2068;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1452))->BgL_truez00) =
							((BgL_nodez00_bglt) BgL_arg3609z00_1458), BUNSPEC);
					}
					{	/* Callcc/walk.scm 240 */
						BgL_nodez00_bglt BgL_arg3612z00_1460;

						{	/* Callcc/walk.scm 240 */
							BgL_nodez00_bglt BgL_arg3613z00_1461;

							BgL_arg3613z00_1461 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1452))->
								BgL_falsez00);
							{	/* Callcc/walk.scm 240 */
								BgL_nodez00_bglt BgL_res3707z00_2098;

								{	/* Callcc/walk.scm 240 */
									obj_t BgL_method3363z00_2073;

									{	/* Callcc/walk.scm 240 */
										BgL_objectz00_bglt BgL_objz00_2074;

										BgL_objz00_2074 =
											(BgL_objectz00_bglt) (BgL_arg3613z00_1461);
										{	/* Callcc/walk.scm 240 */
											long BgL_objzd2classzd2numz00_2075;

											BgL_objzd2classzd2numz00_2075 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2074);
											{	/* Callcc/walk.scm 240 */
												obj_t BgL_arg2643z00_2076;

												BgL_arg2643z00_2076 =
													PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
													(int) (((long) 1)));
												{	/* Callcc/walk.scm 240 */
													obj_t BgL_arrayz00_2078;

													int BgL_offsetz00_2079;

													BgL_arrayz00_2078 = BgL_arg2643z00_2076;
													BgL_offsetz00_2079 =
														(int) (BgL_objzd2classzd2numz00_2075);
													{	/* Callcc/walk.scm 240 */
														long BgL_offsetz00_2080;

														BgL_offsetz00_2080 =
															((long) (BgL_offsetz00_2079) - OBJECT_TYPE);
														{	/* Callcc/walk.scm 240 */
															long BgL_modz00_2081;

															{	/* Callcc/walk.scm 240 */
																int BgL_arg2645z00_2082;

																BgL_arg2645z00_2082 = (int) (((long) 16));
																{	/* Callcc/walk.scm 240 */
																	long BgL_auxz00_3504;

																	BgL_auxz00_3504 =
																		(long) (BgL_arg2645z00_2082);
																	BgL_modz00_2081 =
																		(BgL_offsetz00_2080 / BgL_auxz00_3504);
															}}
															{	/* Callcc/walk.scm 240 */
																long BgL_restz00_2083;

																{	/* Callcc/walk.scm 240 */
																	int BgL_arg2644z00_2084;

																	BgL_arg2644z00_2084 = (int) (((long) 16));
																	{	/* Callcc/walk.scm 240 */
																		long BgL_auxz00_3508;

																		BgL_auxz00_3508 =
																			(long) (BgL_arg2644z00_2084);
																		BgL_restz00_2083 =
																			(BgL_offsetz00_2080 % BgL_auxz00_3508);
																}}
																{	/* Callcc/walk.scm 240 */

																	BgL_method3363z00_2073 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2078,
																			(int) (BgL_modz00_2081)),
																		(int) (BgL_restz00_2083));
									}}}}}}}}
									BgL_res3707z00_2098 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3363z00_2073)
										(BgL_method3363z00_2073, (obj_t) (BgL_arg3613z00_1461),
											BEOA));
								}
								BgL_arg3612z00_1460 = BgL_res3707z00_2098;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1452))->
								BgL_falsez00) =
							((BgL_nodez00_bglt) BgL_arg3612z00_1460), BUNSPEC);
					}
					BgL_auxz00_3444 = BgL_nodez00_1452;
					return (obj_t) (BgL_auxz00_3444);
				}
			}
		}
	}



/* callcc!-setq3384 */
	obj_t BGl_callccz12zd2setq3384zc0zzcallcc_walkz00(obj_t BgL_envz00_2589,
		obj_t BgL_nodez00_2590)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 203 */
			{
				BgL_setqz00_bglt BgL_nodez00_1422;

				BgL_nodez00_1422 = (BgL_setqz00_bglt) (BgL_nodez00_2590);
				{	/* Callcc/walk.scm 204 */
					BgL_nodez00_bglt BgL_arg3589z00_1425;

					{	/* Callcc/walk.scm 204 */
						BgL_nodez00_bglt BgL_arg3590z00_1426;

						BgL_arg3590z00_1426 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_1422))->BgL_valuez00);
						{	/* Callcc/walk.scm 204 */
							BgL_nodez00_bglt BgL_res3697z00_1994;

							{	/* Callcc/walk.scm 204 */
								obj_t BgL_method3363z00_1969;

								{	/* Callcc/walk.scm 204 */
									BgL_objectz00_bglt BgL_objz00_1970;

									BgL_objz00_1970 = (BgL_objectz00_bglt) (BgL_arg3590z00_1426);
									{	/* Callcc/walk.scm 204 */
										long BgL_objzd2classzd2numz00_1971;

										BgL_objzd2classzd2numz00_1971 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1970);
										{	/* Callcc/walk.scm 204 */
											obj_t BgL_arg2643z00_1972;

											BgL_arg2643z00_1972 =
												PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
												(int) (((long) 1)));
											{	/* Callcc/walk.scm 204 */
												obj_t BgL_arrayz00_1974;

												int BgL_offsetz00_1975;

												BgL_arrayz00_1974 = BgL_arg2643z00_1972;
												BgL_offsetz00_1975 =
													(int) (BgL_objzd2classzd2numz00_1971);
												{	/* Callcc/walk.scm 204 */
													long BgL_offsetz00_1976;

													BgL_offsetz00_1976 =
														((long) (BgL_offsetz00_1975) - OBJECT_TYPE);
													{	/* Callcc/walk.scm 204 */
														long BgL_modz00_1977;

														{	/* Callcc/walk.scm 204 */
															int BgL_arg2645z00_1978;

															BgL_arg2645z00_1978 = (int) (((long) 16));
															{	/* Callcc/walk.scm 204 */
																long BgL_auxz00_3531;

																BgL_auxz00_3531 = (long) (BgL_arg2645z00_1978);
																BgL_modz00_1977 =
																	(BgL_offsetz00_1976 / BgL_auxz00_3531);
														}}
														{	/* Callcc/walk.scm 204 */
															long BgL_restz00_1979;

															{	/* Callcc/walk.scm 204 */
																int BgL_arg2644z00_1980;

																BgL_arg2644z00_1980 = (int) (((long) 16));
																{	/* Callcc/walk.scm 204 */
																	long BgL_auxz00_3535;

																	BgL_auxz00_3535 =
																		(long) (BgL_arg2644z00_1980);
																	BgL_restz00_1979 =
																		(BgL_offsetz00_1976 % BgL_auxz00_3535);
															}}
															{	/* Callcc/walk.scm 204 */

																BgL_method3363z00_1969 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1974,
																		(int) (BgL_modz00_1977)),
																	(int) (BgL_restz00_1979));
								}}}}}}}}
								BgL_res3697z00_1994 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3363z00_1969)
									(BgL_method3363z00_1969, (obj_t) (BgL_arg3590z00_1426),
										BEOA));
							}
							BgL_arg3589z00_1425 = BgL_res3697z00_1994;
					}}
					((((BgL_setqz00_bglt) CREF(BgL_nodez00_1422))->BgL_valuez00) =
						((BgL_nodez00_bglt) BgL_arg3589z00_1425), BUNSPEC);
				}
				{	/* Callcc/walk.scm 205 */
					BgL_variablez00_bglt BgL_varz00_1427;

					{	/* Callcc/walk.scm 205 */
						BgL_varz00_bglt BgL_obj2155z00_1998;

						BgL_obj2155z00_1998 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_1422))->BgL_varz00);
						BgL_varz00_1427 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1998))->BgL_variablez00);
					}
					{	/* Callcc/walk.scm 206 */
						obj_t BgL_g3322z00_1428;

						BgL_g3322z00_1428 =
							(((BgL_variablez00_bglt) CREF(BgL_varz00_1427))->
							BgL_fastzd2alphazd2);
						{
							obj_t BgL_varz00_1430;

							obj_t BgL_alphaz00_1431;

							BgL_varz00_1430 = (obj_t) (BgL_varz00_1427);
							BgL_alphaz00_1431 = BgL_g3322z00_1428;
						BgL_zc3anonymousza33591ze3z83_1432:
							if (BGl_iszd2azf3z21zz__objectz00(BgL_alphaz00_1431,
									BGl_localz00zzast_varz00))
								{	/* Callcc/walk.scm 208 */
									{	/* Callcc/walk.scm 210 */
										BgL_varz00_bglt BgL_arg3593z00_1434;

										BgL_arg3593z00_1434 =
											(((BgL_setqz00_bglt) CREF(BgL_nodez00_1422))->BgL_varz00);
										{
											BgL_variablez00_bglt BgL_auxz00_3553;

											BgL_auxz00_3553 =
												(BgL_variablez00_bglt) (
												(BgL_localz00_bglt) (BgL_alphaz00_1431));
											((((BgL_varz00_bglt) CREF(BgL_arg3593z00_1434))->
													BgL_variablez00) =
												((BgL_variablez00_bglt) BgL_auxz00_3553), BUNSPEC);
										}
									}
									{	/* Callcc/walk.scm 211 */
										obj_t BgL_arg3594z00_1435;

										{
											BgL_variablez00_bglt BgL_auxz00_3557;

											BgL_auxz00_3557 =
												(BgL_variablez00_bglt) (
												(BgL_localz00_bglt) (BgL_alphaz00_1431));
											BgL_arg3594z00_1435 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_3557))->
												BgL_fastzd2alphazd2);
										}
										{
											obj_t BgL_alphaz00_3562;

											obj_t BgL_varz00_3561;

											BgL_varz00_3561 = BgL_alphaz00_1431;
											BgL_alphaz00_3562 = BgL_arg3594z00_1435;
											BgL_alphaz00_1431 = BgL_alphaz00_3562;
											BgL_varz00_1430 = BgL_varz00_3561;
											goto BgL_zc3anonymousza33591ze3z83_1432;
										}
									}
								}
							else
								{	/* Callcc/walk.scm 208 */
									if (BGl_iszd2azf3z21zz__objectz00(BgL_varz00_1430,
											BGl_globalz00zzast_varz00))
										{	/* Callcc/walk.scm 213 */
											return (obj_t) (BgL_nodez00_1422);
										}
									else
										{	/* Callcc/walk.scm 213 */
											if (BGl_celledzf3zf3zzcallcc_walkz00(
													(BgL_variablez00_bglt) (BgL_varz00_1430)))
												{	/* Callcc/walk.scm 218 */
													BgL_localz00_bglt BgL_azd2varzd2_1438;

													obj_t BgL_locz00_1439;

													BgL_azd2varzd2_1438 =
														BGl_makezd2localzd2svarz00zzast_localz00
														(CNST_TABLE_REF(((long) 7)),
														(BgL_typez00_bglt)
														(BGl_za2objza2z00zztype_cachez00));
													{
														BgL_nodez00_bglt BgL_auxz00_3572;

														BgL_auxz00_3572 =
															(BgL_nodez00_bglt) (BgL_nodez00_1422);
														BgL_locz00_1439 =
															(((BgL_nodez00_bglt) CREF(BgL_auxz00_3572))->
															BgL_locz00);
													}
													{	/* Callcc/walk.scm 220 */
														obj_t BgL_arg3598z00_1441;

														BgL_boxzd2setz12zc0_bglt BgL_arg3599z00_1442;

														{	/* Callcc/walk.scm 223 */
															obj_t BgL_arg3600z00_1443;

															{	/* Callcc/walk.scm 223 */
																BgL_nodez00_bglt BgL_arg3602z00_1445;

																BgL_arg3602z00_1445 =
																	(((BgL_setqz00_bglt) CREF(BgL_nodez00_1422))->
																	BgL_valuez00);
																BgL_arg3600z00_1443 =
																	MAKE_PAIR((obj_t) (BgL_azd2varzd2_1438),
																	(obj_t) (BgL_arg3602z00_1445));
															}
															{	/* Callcc/walk.scm 223 */
																obj_t BgL_list3601z00_1444;

																BgL_list3601z00_1444 =
																	MAKE_PAIR(BgL_arg3600z00_1443, BNIL);
																BgL_arg3598z00_1441 = BgL_list3601z00_1444;
														}}
														{	/* Callcc/walk.scm 227 */
															BgL_varz00_bglt BgL_arg3603z00_1446;

															BgL_varz00_bglt BgL_arg3604z00_1447;

															BgL_arg3603z00_1446 =
																(((BgL_setqz00_bglt) CREF(BgL_nodez00_1422))->
																BgL_varz00);
															BgL_arg3604z00_1447 =
																BGl_makezd2varzd2zzast_nodez00(BgL_locz00_1439,
																(BgL_typez00_bglt)
																(BGl_za2_za2z00zztype_cachez00),
																(BgL_variablez00_bglt) (BgL_azd2varzd2_1438));
															BgL_arg3599z00_1442 =
																BGl_makezd2boxzd2setz12z12zzast_nodez00
																(BgL_locz00_1439,
																(BgL_typez00_bglt)
																(BGl_za2_za2z00zztype_cachez00),
																BgL_arg3603z00_1446,
																(BgL_nodez00_bglt) (BgL_arg3604z00_1447));
														}
														return
															(obj_t) (BGl_makezd2letzd2varz00zzast_nodez00
															(BgL_locz00_1439,
																(BgL_typez00_bglt)
																(BGl_za2_za2z00zztype_cachez00), BUNSPEC,
																BINT(((long) -1)), BgL_arg3598z00_1441,
																(BgL_nodez00_bglt) (BgL_arg3599z00_1442),
																((bool_t) 1)));
												}}
											else
												{	/* Callcc/walk.scm 215 */
													return (obj_t) (BgL_nodez00_1422);
												}
										}
								}
						}
					}
				}
			}
		}
	}



/* callcc!-cast3382 */
	obj_t BGl_callccz12zd2cast3382zc0zzcallcc_walkz00(obj_t BgL_envz00_2591,
		obj_t BgL_nodez00_2592)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 196 */
			{
				BgL_castz00_bglt BgL_nodez00_1416;

				{	/* Callcc/walk.scm 197 */
					BgL_castz00_bglt BgL_auxz00_3595;

					BgL_nodez00_1416 = (BgL_castz00_bglt) (BgL_nodez00_2592);
					{	/* Callcc/walk.scm 197 */
						BgL_nodez00_bglt BgL_arg3587z00_1938;

						BgL_arg3587z00_1938 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1416))->BgL_argz00);
						{	/* Callcc/walk.scm 197 */
							BgL_nodez00_bglt BgL_res3694z00_1966;

							{	/* Callcc/walk.scm 197 */
								obj_t BgL_method3363z00_1941;

								{	/* Callcc/walk.scm 197 */
									BgL_objectz00_bglt BgL_objz00_1942;

									BgL_objz00_1942 = (BgL_objectz00_bglt) (BgL_arg3587z00_1938);
									{	/* Callcc/walk.scm 197 */
										long BgL_objzd2classzd2numz00_1943;

										BgL_objzd2classzd2numz00_1943 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1942);
										{	/* Callcc/walk.scm 197 */
											obj_t BgL_arg2643z00_1944;

											BgL_arg2643z00_1944 =
												PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
												(int) (((long) 1)));
											{	/* Callcc/walk.scm 197 */
												obj_t BgL_arrayz00_1946;

												int BgL_offsetz00_1947;

												BgL_arrayz00_1946 = BgL_arg2643z00_1944;
												BgL_offsetz00_1947 =
													(int) (BgL_objzd2classzd2numz00_1943);
												{	/* Callcc/walk.scm 197 */
													long BgL_offsetz00_1948;

													BgL_offsetz00_1948 =
														((long) (BgL_offsetz00_1947) - OBJECT_TYPE);
													{	/* Callcc/walk.scm 197 */
														long BgL_modz00_1949;

														{	/* Callcc/walk.scm 197 */
															int BgL_arg2645z00_1950;

															BgL_arg2645z00_1950 = (int) (((long) 16));
															{	/* Callcc/walk.scm 197 */
																long BgL_auxz00_3605;

																BgL_auxz00_3605 = (long) (BgL_arg2645z00_1950);
																BgL_modz00_1949 =
																	(BgL_offsetz00_1948 / BgL_auxz00_3605);
														}}
														{	/* Callcc/walk.scm 197 */
															long BgL_restz00_1951;

															{	/* Callcc/walk.scm 197 */
																int BgL_arg2644z00_1952;

																BgL_arg2644z00_1952 = (int) (((long) 16));
																{	/* Callcc/walk.scm 197 */
																	long BgL_auxz00_3609;

																	BgL_auxz00_3609 =
																		(long) (BgL_arg2644z00_1952);
																	BgL_restz00_1951 =
																		(BgL_offsetz00_1948 % BgL_auxz00_3609);
															}}
															{	/* Callcc/walk.scm 197 */

																BgL_method3363z00_1941 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1946,
																		(int) (BgL_modz00_1949)),
																	(int) (BgL_restz00_1951));
								}}}}}}}}
								BgL_res3694z00_1966 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3363z00_1941)
									(BgL_method3363z00_1941, (obj_t) (BgL_arg3587z00_1938),
										BEOA));
							} BgL_res3694z00_1966;
					}}
					BgL_auxz00_3595 = BgL_nodez00_1416;
					return (obj_t) (BgL_auxz00_3595);
				}
			}
		}
	}



/* callcc!-extern3380 */
	obj_t BGl_callccz12zd2extern3380zc0zzcallcc_walkz00(obj_t BgL_envz00_2593,
		obj_t BgL_nodez00_2594)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 189 */
			{
				BgL_externz00_bglt BgL_nodez00_1410;

				{	/* Callcc/walk.scm 190 */
					BgL_externz00_bglt BgL_auxz00_3622;

					BgL_nodez00_1410 = (BgL_externz00_bglt) (BgL_nodez00_2594);
					{	/* Callcc/walk.scm 190 */
						obj_t BgL_arg3585z00_1936;

						BgL_arg3585z00_1936 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1410))->BgL_exprza2za2);
						BGl_callccza2z12zb0zzcallcc_walkz00(BgL_arg3585z00_1936);
					}
					BgL_auxz00_3622 = BgL_nodez00_1410;
					return (obj_t) (BgL_auxz00_3622);
				}
			}
		}
	}



/* callcc!-funcall3378 */
	obj_t BGl_callccz12zd2funcall3378zc0zzcallcc_walkz00(obj_t BgL_envz00_2595,
		obj_t BgL_nodez00_2596)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 180 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1401;

				{	/* Callcc/walk.scm 181 */
					BgL_funcallz00_bglt BgL_auxz00_3627;

					BgL_nodez00_1401 = (BgL_funcallz00_bglt) (BgL_nodez00_2596);
					{	/* Callcc/walk.scm 182 */
						BgL_nodez00_bglt BgL_arg3581z00_1405;

						{	/* Callcc/walk.scm 182 */
							BgL_nodez00_bglt BgL_arg3582z00_1406;

							BgL_arg3582z00_1406 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1401))->BgL_funz00);
							{	/* Callcc/walk.scm 182 */
								BgL_nodez00_bglt BgL_res3691z00_1932;

								{	/* Callcc/walk.scm 182 */
									obj_t BgL_method3363z00_1907;

									{	/* Callcc/walk.scm 182 */
										BgL_objectz00_bglt BgL_objz00_1908;

										BgL_objz00_1908 =
											(BgL_objectz00_bglt) (BgL_arg3582z00_1406);
										{	/* Callcc/walk.scm 182 */
											long BgL_objzd2classzd2numz00_1909;

											BgL_objzd2classzd2numz00_1909 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1908);
											{	/* Callcc/walk.scm 182 */
												obj_t BgL_arg2643z00_1910;

												BgL_arg2643z00_1910 =
													PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
													(int) (((long) 1)));
												{	/* Callcc/walk.scm 182 */
													obj_t BgL_arrayz00_1912;

													int BgL_offsetz00_1913;

													BgL_arrayz00_1912 = BgL_arg2643z00_1910;
													BgL_offsetz00_1913 =
														(int) (BgL_objzd2classzd2numz00_1909);
													{	/* Callcc/walk.scm 182 */
														long BgL_offsetz00_1914;

														BgL_offsetz00_1914 =
															((long) (BgL_offsetz00_1913) - OBJECT_TYPE);
														{	/* Callcc/walk.scm 182 */
															long BgL_modz00_1915;

															{	/* Callcc/walk.scm 182 */
																int BgL_arg2645z00_1916;

																BgL_arg2645z00_1916 = (int) (((long) 16));
																{	/* Callcc/walk.scm 182 */
																	long BgL_auxz00_3637;

																	BgL_auxz00_3637 =
																		(long) (BgL_arg2645z00_1916);
																	BgL_modz00_1915 =
																		(BgL_offsetz00_1914 / BgL_auxz00_3637);
															}}
															{	/* Callcc/walk.scm 182 */
																long BgL_restz00_1917;

																{	/* Callcc/walk.scm 182 */
																	int BgL_arg2644z00_1918;

																	BgL_arg2644z00_1918 = (int) (((long) 16));
																	{	/* Callcc/walk.scm 182 */
																		long BgL_auxz00_3641;

																		BgL_auxz00_3641 =
																			(long) (BgL_arg2644z00_1918);
																		BgL_restz00_1917 =
																			(BgL_offsetz00_1914 % BgL_auxz00_3641);
																}}
																{	/* Callcc/walk.scm 182 */

																	BgL_method3363z00_1907 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1912,
																			(int) (BgL_modz00_1915)),
																		(int) (BgL_restz00_1917));
									}}}}}}}}
									BgL_res3691z00_1932 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3363z00_1907)
										(BgL_method3363z00_1907, (obj_t) (BgL_arg3582z00_1406),
											BEOA));
								}
								BgL_arg3581z00_1405 = BgL_res3691z00_1932;
						}}
						((((BgL_funcallz00_bglt) CREF(BgL_nodez00_1401))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3581z00_1405), BUNSPEC);
					}
					{	/* Callcc/walk.scm 183 */
						obj_t BgL_arg3583z00_1407;

						BgL_arg3583z00_1407 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1401))->BgL_argsz00);
						BGl_callccza2z12zb0zzcallcc_walkz00(BgL_arg3583z00_1407);
					}
					BgL_auxz00_3627 = BgL_nodez00_1401;
					return (obj_t) (BgL_auxz00_3627);
				}
			}
		}
	}



/* callcc!-app-ly3376 */
	obj_t BGl_callccz12zd2appzd2ly3376z12zzcallcc_walkz00(obj_t BgL_envz00_2597,
		obj_t BgL_nodez00_2598)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 171 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1391;

				{	/* Callcc/walk.scm 172 */
					BgL_appzd2lyzd2_bglt BgL_auxz00_3657;

					BgL_nodez00_1391 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2598);
					{	/* Callcc/walk.scm 173 */
						BgL_nodez00_bglt BgL_arg3576z00_1395;

						{	/* Callcc/walk.scm 173 */
							BgL_nodez00_bglt BgL_arg3577z00_1396;

							BgL_arg3577z00_1396 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1391))->BgL_funz00);
							{	/* Callcc/walk.scm 173 */
								BgL_nodez00_bglt BgL_res3685z00_1872;

								{	/* Callcc/walk.scm 173 */
									obj_t BgL_method3363z00_1847;

									{	/* Callcc/walk.scm 173 */
										BgL_objectz00_bglt BgL_objz00_1848;

										BgL_objz00_1848 =
											(BgL_objectz00_bglt) (BgL_arg3577z00_1396);
										{	/* Callcc/walk.scm 173 */
											long BgL_objzd2classzd2numz00_1849;

											BgL_objzd2classzd2numz00_1849 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1848);
											{	/* Callcc/walk.scm 173 */
												obj_t BgL_arg2643z00_1850;

												BgL_arg2643z00_1850 =
													PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
													(int) (((long) 1)));
												{	/* Callcc/walk.scm 173 */
													obj_t BgL_arrayz00_1852;

													int BgL_offsetz00_1853;

													BgL_arrayz00_1852 = BgL_arg2643z00_1850;
													BgL_offsetz00_1853 =
														(int) (BgL_objzd2classzd2numz00_1849);
													{	/* Callcc/walk.scm 173 */
														long BgL_offsetz00_1854;

														BgL_offsetz00_1854 =
															((long) (BgL_offsetz00_1853) - OBJECT_TYPE);
														{	/* Callcc/walk.scm 173 */
															long BgL_modz00_1855;

															{	/* Callcc/walk.scm 173 */
																int BgL_arg2645z00_1856;

																BgL_arg2645z00_1856 = (int) (((long) 16));
																{	/* Callcc/walk.scm 173 */
																	long BgL_auxz00_3667;

																	BgL_auxz00_3667 =
																		(long) (BgL_arg2645z00_1856);
																	BgL_modz00_1855 =
																		(BgL_offsetz00_1854 / BgL_auxz00_3667);
															}}
															{	/* Callcc/walk.scm 173 */
																long BgL_restz00_1857;

																{	/* Callcc/walk.scm 173 */
																	int BgL_arg2644z00_1858;

																	BgL_arg2644z00_1858 = (int) (((long) 16));
																	{	/* Callcc/walk.scm 173 */
																		long BgL_auxz00_3671;

																		BgL_auxz00_3671 =
																			(long) (BgL_arg2644z00_1858);
																		BgL_restz00_1857 =
																			(BgL_offsetz00_1854 % BgL_auxz00_3671);
																}}
																{	/* Callcc/walk.scm 173 */

																	BgL_method3363z00_1847 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1852,
																			(int) (BgL_modz00_1855)),
																		(int) (BgL_restz00_1857));
									}}}}}}}}
									BgL_res3685z00_1872 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3363z00_1847)
										(BgL_method3363z00_1847, (obj_t) (BgL_arg3577z00_1396),
											BEOA));
								}
								BgL_arg3576z00_1395 = BgL_res3685z00_1872;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1391))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3576z00_1395), BUNSPEC);
					}
					{	/* Callcc/walk.scm 174 */
						BgL_nodez00_bglt BgL_arg3578z00_1397;

						{	/* Callcc/walk.scm 174 */
							BgL_nodez00_bglt BgL_arg3579z00_1398;

							BgL_arg3579z00_1398 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1391))->BgL_argz00);
							{	/* Callcc/walk.scm 174 */
								BgL_nodez00_bglt BgL_res3688z00_1902;

								{	/* Callcc/walk.scm 174 */
									obj_t BgL_method3363z00_1877;

									{	/* Callcc/walk.scm 174 */
										BgL_objectz00_bglt BgL_objz00_1878;

										BgL_objz00_1878 =
											(BgL_objectz00_bglt) (BgL_arg3579z00_1398);
										{	/* Callcc/walk.scm 174 */
											long BgL_objzd2classzd2numz00_1879;

											BgL_objzd2classzd2numz00_1879 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1878);
											{	/* Callcc/walk.scm 174 */
												obj_t BgL_arg2643z00_1880;

												BgL_arg2643z00_1880 =
													PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
													(int) (((long) 1)));
												{	/* Callcc/walk.scm 174 */
													obj_t BgL_arrayz00_1882;

													int BgL_offsetz00_1883;

													BgL_arrayz00_1882 = BgL_arg2643z00_1880;
													BgL_offsetz00_1883 =
														(int) (BgL_objzd2classzd2numz00_1879);
													{	/* Callcc/walk.scm 174 */
														long BgL_offsetz00_1884;

														BgL_offsetz00_1884 =
															((long) (BgL_offsetz00_1883) - OBJECT_TYPE);
														{	/* Callcc/walk.scm 174 */
															long BgL_modz00_1885;

															{	/* Callcc/walk.scm 174 */
																int BgL_arg2645z00_1886;

																BgL_arg2645z00_1886 = (int) (((long) 16));
																{	/* Callcc/walk.scm 174 */
																	long BgL_auxz00_3692;

																	BgL_auxz00_3692 =
																		(long) (BgL_arg2645z00_1886);
																	BgL_modz00_1885 =
																		(BgL_offsetz00_1884 / BgL_auxz00_3692);
															}}
															{	/* Callcc/walk.scm 174 */
																long BgL_restz00_1887;

																{	/* Callcc/walk.scm 174 */
																	int BgL_arg2644z00_1888;

																	BgL_arg2644z00_1888 = (int) (((long) 16));
																	{	/* Callcc/walk.scm 174 */
																		long BgL_auxz00_3696;

																		BgL_auxz00_3696 =
																			(long) (BgL_arg2644z00_1888);
																		BgL_restz00_1887 =
																			(BgL_offsetz00_1884 % BgL_auxz00_3696);
																}}
																{	/* Callcc/walk.scm 174 */

																	BgL_method3363z00_1877 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1882,
																			(int) (BgL_modz00_1885)),
																		(int) (BgL_restz00_1887));
									}}}}}}}}
									BgL_res3688z00_1902 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3363z00_1877)
										(BgL_method3363z00_1877, (obj_t) (BgL_arg3579z00_1398),
											BEOA));
								}
								BgL_arg3578z00_1397 = BgL_res3688z00_1902;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1391))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg3578z00_1397), BUNSPEC);
					}
					BgL_auxz00_3657 = BgL_nodez00_1391;
					return (obj_t) (BgL_auxz00_3657);
				}
			}
		}
	}



/* callcc!-app3374 */
	obj_t BGl_callccz12zd2app3374zc0zzcallcc_walkz00(obj_t BgL_envz00_2599,
		obj_t BgL_nodez00_2600)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 163 */
			{
				BgL_appz00_bglt BgL_nodez00_1384;

				{	/* Callcc/walk.scm 164 */
					BgL_appz00_bglt BgL_auxz00_3710;

					BgL_nodez00_1384 = (BgL_appz00_bglt) (BgL_nodez00_2600);
					{	/* Callcc/walk.scm 164 */
						obj_t BgL_arg3574z00_1843;

						BgL_arg3574z00_1843 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1384))->BgL_argsz00);
						BGl_callccza2z12zb0zzcallcc_walkz00(BgL_arg3574z00_1843);
					}
					BgL_auxz00_3710 = BgL_nodez00_1384;
					return (obj_t) (BgL_auxz00_3710);
				}
			}
		}
	}



/* callcc!-sequence3372 */
	obj_t BGl_callccz12zd2sequence3372zc0zzcallcc_walkz00(obj_t BgL_envz00_2601,
		obj_t BgL_nodez00_2602)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 156 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1378;

				{	/* Callcc/walk.scm 157 */
					BgL_sequencez00_bglt BgL_auxz00_3715;

					BgL_nodez00_1378 = (BgL_sequencez00_bglt) (BgL_nodez00_2602);
					{	/* Callcc/walk.scm 157 */
						obj_t BgL_arg3572z00_1840;

						BgL_arg3572z00_1840 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1378))->BgL_nodesz00);
						BGl_callccza2z12zb0zzcallcc_walkz00(BgL_arg3572z00_1840);
					}
					BgL_auxz00_3715 = BgL_nodez00_1378;
					return (obj_t) (BgL_auxz00_3715);
				}
			}
		}
	}



/* callcc!-var3370 */
	obj_t BGl_callccz12zd2var3370zc0zzcallcc_walkz00(obj_t BgL_envz00_2603,
		obj_t BgL_nodez00_2604)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 130 */
			{
				BgL_varz00_bglt BgL_nodez00_1359;

				BgL_nodez00_1359 = (BgL_varz00_bglt) (BgL_nodez00_2604);
				{	/* Callcc/walk.scm 131 */
					BgL_variablez00_bglt BgL_varz00_1362;

					BgL_varz00_1362 =
						(((BgL_varz00_bglt) CREF(BgL_nodez00_1359))->BgL_variablez00);
					{	/* Callcc/walk.scm 132 */
						obj_t BgL_g3314z00_1363;

						BgL_g3314z00_1363 =
							(((BgL_variablez00_bglt) CREF(BgL_varz00_1362))->
							BgL_fastzd2alphazd2);
						{
							obj_t BgL_varz00_1365;

							obj_t BgL_alphaz00_1366;

							BgL_varz00_1365 = (obj_t) (BgL_varz00_1362);
							BgL_alphaz00_1366 = BgL_g3314z00_1363;
						BgL_zc3anonymousza33563ze3z83_1367:
							if (BGl_iszd2azf3z21zz__objectz00(BgL_alphaz00_1366,
									BGl_localz00zzast_varz00))
								{	/* Callcc/walk.scm 134 */
									{
										BgL_variablez00_bglt BgL_auxz00_3724;

										BgL_auxz00_3724 =
											(BgL_variablez00_bglt) (
											(BgL_localz00_bglt) (BgL_alphaz00_1366));
										((((BgL_varz00_bglt) CREF(BgL_nodez00_1359))->
												BgL_variablez00) =
											((BgL_variablez00_bglt) BgL_auxz00_3724), BUNSPEC);
									}
									{	/* Callcc/walk.scm 137 */
										obj_t BgL_arg3565z00_1369;

										{
											BgL_variablez00_bglt BgL_auxz00_3728;

											BgL_auxz00_3728 =
												(BgL_variablez00_bglt) (
												(BgL_localz00_bglt) (BgL_alphaz00_1366));
											BgL_arg3565z00_1369 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_3728))->
												BgL_fastzd2alphazd2);
										}
										{
											obj_t BgL_alphaz00_3733;

											obj_t BgL_varz00_3732;

											BgL_varz00_3732 = BgL_alphaz00_1366;
											BgL_alphaz00_3733 = BgL_arg3565z00_1369;
											BgL_alphaz00_1366 = BgL_alphaz00_3733;
											BgL_varz00_1365 = BgL_varz00_3732;
											goto BgL_zc3anonymousza33563ze3z83_1367;
										}
									}
								}
							else
								{	/* Callcc/walk.scm 134 */
									if (BGl_iszd2azf3z21zz__objectz00(BgL_alphaz00_1366,
											BGl_localz00zzast_varz00))
										{	/* Callcc/walk.scm 139 */
											{
												BgL_variablez00_bglt BgL_auxz00_3736;

												BgL_auxz00_3736 =
													(BgL_variablez00_bglt) (
													(BgL_localz00_bglt) (BgL_alphaz00_1366));
												((((BgL_varz00_bglt) CREF(BgL_nodez00_1359))->
														BgL_variablez00) =
													((BgL_variablez00_bglt) BgL_auxz00_3736), BUNSPEC);
											}
											{	/* Callcc/walk.scm 141 */
												BgL_nodez00_bglt BgL_res3682z00_1835;

												{	/* Callcc/walk.scm 141 */
													BgL_nodez00_bglt BgL_nodez00_1809;

													BgL_nodez00_1809 =
														(BgL_nodez00_bglt) (BgL_nodez00_1359);
													{	/* Callcc/walk.scm 141 */
														obj_t BgL_method3363z00_1810;

														{	/* Callcc/walk.scm 141 */
															BgL_objectz00_bglt BgL_objz00_1811;

															BgL_objz00_1811 =
																(BgL_objectz00_bglt) (BgL_nodez00_1809);
															{	/* Callcc/walk.scm 141 */
																long BgL_objzd2classzd2numz00_1812;

																BgL_objzd2classzd2numz00_1812 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1811);
																{	/* Callcc/walk.scm 141 */
																	obj_t BgL_arg2643z00_1813;

																	BgL_arg2643z00_1813 =
																		PROCEDURE_REF
																		(BGl_callccz12zd2envzc0zzcallcc_walkz00,
																		(int) (((long) 1)));
																	{	/* Callcc/walk.scm 141 */
																		obj_t BgL_arrayz00_1815;

																		int BgL_offsetz00_1816;

																		BgL_arrayz00_1815 = BgL_arg2643z00_1813;
																		BgL_offsetz00_1816 =
																			(int) (BgL_objzd2classzd2numz00_1812);
																		{	/* Callcc/walk.scm 141 */
																			long BgL_offsetz00_1817;

																			BgL_offsetz00_1817 =
																				(
																				(long) (BgL_offsetz00_1816) -
																				OBJECT_TYPE);
																			{	/* Callcc/walk.scm 141 */
																				long BgL_modz00_1818;

																				{	/* Callcc/walk.scm 141 */
																					int BgL_arg2645z00_1819;

																					BgL_arg2645z00_1819 =
																						(int) (((long) 16));
																					{	/* Callcc/walk.scm 141 */
																						long BgL_auxz00_3749;

																						BgL_auxz00_3749 =
																							(long) (BgL_arg2645z00_1819);
																						BgL_modz00_1818 =
																							(BgL_offsetz00_1817 /
																							BgL_auxz00_3749);
																				}}
																				{	/* Callcc/walk.scm 141 */
																					long BgL_restz00_1820;

																					{	/* Callcc/walk.scm 141 */
																						int BgL_arg2644z00_1821;

																						BgL_arg2644z00_1821 =
																							(int) (((long) 16));
																						{	/* Callcc/walk.scm 141 */
																							long BgL_auxz00_3753;

																							BgL_auxz00_3753 =
																								(long) (BgL_arg2644z00_1821);
																							BgL_restz00_1820 =
																								(BgL_offsetz00_1817 %
																								BgL_auxz00_3753);
																					}}
																					{	/* Callcc/walk.scm 141 */

																						BgL_method3363z00_1810 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1815,
																								(int) (BgL_modz00_1818)),
																							(int) (BgL_restz00_1820));
														}}}}}}}}
														BgL_res3682z00_1835 =
															(BgL_nodez00_bglt) (PROCEDURE_ENTRY
															(BgL_method3363z00_1810) (BgL_method3363z00_1810,
																(obj_t) (BgL_nodez00_1809), BEOA));
												}}
												return (obj_t) (BgL_res3682z00_1835);
											}
										}
									else
										{	/* Callcc/walk.scm 139 */
											if (BGl_iszd2azf3z21zz__objectz00(BgL_varz00_1365,
													BGl_globalz00zzast_varz00))
												{	/* Callcc/walk.scm 142 */
													return (obj_t) (BgL_nodez00_1359);
												}
											else
												{	/* Callcc/walk.scm 142 */
													if (BGl_celledzf3zf3zzcallcc_walkz00(
															(BgL_variablez00_bglt) (BgL_varz00_1365)))
														{	/* Callcc/walk.scm 144 */
															{
																BgL_typez00_bglt BgL_auxz00_3773;

																BgL_nodez00_bglt BgL_auxz00_3771;

																BgL_auxz00_3773 =
																	(BgL_typez00_bglt)
																	(BGl_za2objza2z00zztype_cachez00);
																BgL_auxz00_3771 =
																	(BgL_nodez00_bglt) (BgL_nodez00_1359);
																((((BgL_nodez00_bglt) CREF(BgL_auxz00_3771))->
																		BgL_typez00) =
																	((BgL_typez00_bglt) BgL_auxz00_3773),
																	BUNSPEC);
															}
															{	/* Callcc/walk.scm 150 */
																obj_t BgL_arg3569z00_1373;

																{
																	BgL_nodez00_bglt BgL_auxz00_3776;

																	BgL_auxz00_3776 =
																		(BgL_nodez00_bglt) (BgL_nodez00_1359);
																	BgL_arg3569z00_1373 =
																		(((BgL_nodez00_bglt)
																			CREF(BgL_auxz00_3776))->BgL_locz00);
																}
																return
																	(obj_t) (BGl_makezd2boxzd2refz00zzast_nodez00
																	(BgL_arg3569z00_1373,
																		(BgL_typez00_bglt)
																		(BGl_za2objza2z00zztype_cachez00), BUNSPEC,
																		BINT(((long) -1)), BgL_nodez00_1359));
														}}
													else
														{	/* Callcc/walk.scm 144 */
															return (obj_t) (BgL_nodez00_1359);
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



/* callcc!-kwote3367 */
	obj_t BGl_callccz12zd2kwote3367zc0zzcallcc_walkz00(obj_t BgL_envz00_2605,
		obj_t BgL_nodez00_2606)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 124 */
			return (obj_t) ((BgL_kwotez00_bglt) (BgL_nodez00_2606));
		}
	}



/* callcc!-atom3365 */
	obj_t BGl_callccz12zd2atom3365zc0zzcallcc_walkz00(obj_t BgL_envz00_2607,
		obj_t BgL_nodez00_2608)
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 118 */
			return (obj_t) ((BgL_atomz00_bglt) (BgL_nodez00_2608));
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcallcc_walkz00()
	{
		AN_OBJECT;
		{	/* Callcc/walk.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3785z00zzcallcc_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3785z00zzcallcc_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string3785z00zzcallcc_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3785z00zzcallcc_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3785z00zzcallcc_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3785z00zzcallcc_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3785z00zzcallcc_walkz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3785z00zzcallcc_walkz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3785z00zzcallcc_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3785z00zzcallcc_walkz00));
		}
	}

#ifdef __cplusplus
}
#endif
