/*===========================================================================*/
/*   (Abound/walk.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Abound/walk.scm)*/
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

	typedef struct BgL_cfunz00_bgl
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
		obj_t BgL_argszd2typezd2;
		bool_t BgL_macrozf3zf3;
		bool_t BgL_infixzf3zf3;
		obj_t BgL_methodz00;
	}              *BgL_cfunz00_bglt;

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


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_vrefz00zzast_nodez00;
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_aboundzd2nodezd2zzabound_walkz00(BgL_nodez00_bglt);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_za2structzd2refza2zd2zzabound_walkz00 = BUNSPEC;
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern BgL_appz00_bglt BGl_makezd2appzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t);
	static obj_t BGl_cnstzd2initzd2zzabound_walkz00();
	static obj_t BGl_aboundzd2nodezd2funcall3393z00zzabound_walkz00(obj_t, obj_t);
	static obj_t BGl_clearzd2cachez12zc0zzabound_walkz00();
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_initzd2cachez12zc0zzabound_walkz00();
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	static obj_t BGl__aboundzd2nodezd2zzabound_walkz00(obj_t, obj_t);
	static obj_t BGl__aboundzd2walkz12zc0zzabound_walkz00(obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzabound_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzabound_walkz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static obj_t BGl_za2stringzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
	extern BgL_nodez00_bglt
		BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t);
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	static obj_t BGl__initzd2cachez12zc0zzabound_walkz00(obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_aboundzd2nodezd2boxzd2ref3423zd2zzabound_walkz00(obj_t,
		obj_t);
	static bool_t BGl_aboundzd2nodeza2z12z62zzabound_walkz00(obj_t);
	extern obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	static obj_t BGl_aboundzd2funz12zc0zzabound_walkz00(obj_t);
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t BGl_methodzd2initzd2zzabound_walkz00();
	static obj_t BGl_aboundzd2nodezd2vsetz123399z12zzabound_walkz00(obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_aboundzd2nodezd2app3389z00zzabound_walkz00(obj_t, obj_t);
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	static obj_t BGl_za2stringzd2refza2zd2zzabound_walkz00 = BUNSPEC;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzabound_walkz00 = BUNSPEC;
	static obj_t BGl_aboundzd2nodezd2extern3395z00zzabound_walkz00(obj_t, obj_t);
	static obj_t BGl_aboundzd2nodezd2cast3401z00zzabound_walkz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzabound_walkz00();
	static obj_t BGl_aboundzd2nodezd2setzd2exzd2i3417z00zzabound_walkz00(obj_t,
		obj_t);
	static obj_t BGl_aboundzd2nodezd2appzd2ly3391zd2zzabound_walkz00(obj_t,
		obj_t);
	static obj_t BGl_aboundzd2nodezd2sequence3387z00zzabound_walkz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl__clearzd2cachez12zc0zzabound_walkz00(obj_t);
	extern BgL_vsetz12z12_bglt BGl_makezd2vsetz12zc0zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_aboundzd2nodezd2letzd2fun3412zd2zzabound_walkz00(obj_t,
		obj_t);
	static obj_t BGl_aboundzd2nodezd2boxzd2setz123425zc0zzabound_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzabound_walkz00();
	static obj_t BGl_aboundzd2nodezd2conditio3405z00zzabound_walkz00(obj_t,
		obj_t);
	static obj_t BGl_aboundzd2nodezd2letzd2var3415zd2zzabound_walkz00(obj_t,
		obj_t);
	static obj_t BGl_aboundzd2nodezd2vref3397z00zzabound_walkz00(obj_t, obj_t);
	static obj_t BGl_aboundzd2nodezd2setq3403z00zzabound_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_aboundzd2walkz12zc0zzabound_walkz00(obj_t);
	static obj_t BGl_aboundzd2nodezd2jumpzd2exzd23419z00zzabound_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_za2vectorza2z00zztype_cachez00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2structzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
	static obj_t BGl_aboundzd2nodezd2select3409z00zzabound_walkz00(obj_t, obj_t);
	extern BgL_vrefz00_bglt BGl_makezd2vrefzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	static obj_t BGl_aboundzd2nodezd2makezd2box3421zd2zzabound_walkz00(obj_t,
		obj_t);
	static obj_t BGl_aboundzd2nodezd2fail3407z00zzabound_walkz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzabound_walkz00();
	static obj_t BGl__aboundzd2nodezd2default3384z00zzabound_walkz00(obj_t,
		obj_t);
	static obj_t __cnst[24];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4057z00zzabound_walkz00,
		BgL_bgl_aboundza7d2nodeza7d24083z00,
		BGl_aboundzd2nodezd2sequence3387z00zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4058z00zzabound_walkz00,
		BgL_bgl_aboundza7d2nodeza7d24084z00,
		BGl_aboundzd2nodezd2app3389z00zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4060z00zzabound_walkz00,
		BgL_bgl_aboundza7d2nodeza7d24085z00,
		BGl_aboundzd2nodezd2funcall3393z00zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4059z00zzabound_walkz00,
		BgL_bgl_aboundza7d2nodeza7d24086z00,
		BGl_aboundzd2nodezd2appzd2ly3391zd2zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4061z00zzabound_walkz00,
		BgL_bgl_aboundza7d2nodeza7d24087z00,
		BGl_aboundzd2nodezd2extern3395z00zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4062z00zzabound_walkz00,
		BgL_bgl_aboundza7d2nodeza7d24088z00,
		BGl_aboundzd2nodezd2vref3397z00zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4063z00zzabound_walkz00,
		BgL_bgl_aboundza7d2nodeza7d24089z00,
		BGl_aboundzd2nodezd2vsetz123399z12zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4064z00zzabound_walkz00,
		BgL_bgl_aboundza7d2nodeza7d24090z00,
		BGl_aboundzd2nodezd2cast3401z00zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4065z00zzabound_walkz00,
		BgL_bgl_aboundza7d2nodeza7d24091z00,
		BGl_aboundzd2nodezd2setq3403z00zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4066z00zzabound_walkz00,
		BgL_bgl_aboundza7d2nodeza7d24092z00,
		BGl_aboundzd2nodezd2conditio3405z00zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4067z00zzabound_walkz00,
		BgL_bgl_aboundza7d2nodeza7d24093z00,
		BGl_aboundzd2nodezd2fail3407z00zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4068z00zzabound_walkz00,
		BgL_bgl_aboundza7d2nodeza7d24094z00,
		BGl_aboundzd2nodezd2select3409z00zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4070z00zzabound_walkz00,
		BgL_bgl_aboundza7d2nodeza7d24095z00,
		BGl_aboundzd2nodezd2letzd2var3415zd2zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4069z00zzabound_walkz00,
		BgL_bgl_aboundza7d2nodeza7d24096z00,
		BGl_aboundzd2nodezd2letzd2fun3412zd2zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4071z00zzabound_walkz00,
		BgL_bgl_aboundza7d2nodeza7d24097z00,
		BGl_aboundzd2nodezd2setzd2exzd2i3417z00zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4072z00zzabound_walkz00,
		BgL_bgl_aboundza7d2nodeza7d24098z00,
		BGl_aboundzd2nodezd2jumpzd2exzd23419z00zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4073z00zzabound_walkz00,
		BgL_bgl_aboundza7d2nodeza7d24099z00,
		BGl_aboundzd2nodezd2makezd2box3421zd2zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4074z00zzabound_walkz00,
		BgL_bgl_aboundza7d2nodeza7d24100z00,
		BGl_aboundzd2nodezd2boxzd2ref3423zd2zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4075z00zzabound_walkz00,
		BgL_bgl_aboundza7d2nodeza7d24101z00,
		BGl_aboundzd2nodezd2boxzd2setz123425zc0zzabound_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4048z00zzabound_walkz00,
		BgL_bgl_string4048za700za7za7a4102za7, "Abound", 6);
	      DEFINE_STRING(BGl_string4050z00zzabound_walkz00,
		BgL_bgl_string4050za700za7za7a4103za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string4049z00zzabound_walkz00,
		BgL_bgl_string4049za700za7za7a4104za7, "   . ", 5);
	      DEFINE_STRING(BGl_string4051z00zzabound_walkz00,
		BgL_bgl_string4051za700za7za7a4105za7, " error", 6);
	      DEFINE_STRING(BGl_string4052z00zzabound_walkz00,
		BgL_bgl_string4052za700za7za7a4106za7, "s", 1);
	      DEFINE_STRING(BGl_string4053z00zzabound_walkz00,
		BgL_bgl_string4053za700za7za7a4107za7, "", 0);
	      DEFINE_STRING(BGl_string4054z00zzabound_walkz00,
		BgL_bgl_string4054za700za7za7a4108za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string4055z00zzabound_walkz00,
		BgL_bgl_string4055za700za7za7a4109za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string4056z00zzabound_walkz00,
		BgL_bgl_string4056za700za7za7a4110za7, "abound-node", 11);
	      DEFINE_STRING(BGl_string4076z00zzabound_walkz00,
		BgL_bgl_string4076za700za7za7a4111za7, "vector-ref", 10);
	      DEFINE_STRING(BGl_string4077z00zzabound_walkz00,
		BgL_bgl_string4077za700za7za7a4112za7, "string-ref", 10);
	      DEFINE_STRING(BGl_string4078z00zzabound_walkz00,
		BgL_bgl_string4078za700za7za7a4113za7, "string-set!", 11);
	      DEFINE_STRING(BGl_string4080z00zzabound_walkz00,
		BgL_bgl_string4080za700za7za7a4114za7,
		"$string-bound-check? $string-length s index-out-of-bounds-error __error @ failure $vector-bound-check? if $tvector-length $vector-length let location l i v $struct-set! $struct-ref $string-set! $string-ref foreign (clear-cache!) pass-started (init-cache!) ",
		256);
	      DEFINE_STRING(BGl_string4079z00zzabound_walkz00,
		BgL_bgl_string4079za700za7za7a4115za7, "abound_walk", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_aboundzd2walkz12zd2envz12zzabound_walkz00,
		BgL_bgl__aboundza7d2walkza714116z00,
		BGl__aboundzd2walkz12zc0zzabound_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_aboundzd2nodezd2default3384zd2envzd2zzabound_walkz00,
		BgL_bgl__aboundza7d2nodeza7d4117z00,
		BGl__aboundzd2nodezd2default3384z00zzabound_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_clearzd2cachez12zd2envz12zzabound_walkz00,
		BgL_bgl__clearza7d2cacheza714118z00,
		BGl__clearzd2cachez12zc0zzabound_walkz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_GENERIC(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
		BgL_bgl__aboundza7d2nodeza7d4119z00, BGl__aboundzd2nodezd2zzabound_walkz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_initzd2cachez12zd2envz12zzabound_walkz00,
		BgL_bgl__initza7d2cacheza7124120z00,
		BGl__initzd2cachez12zc0zzabound_walkz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzabound_walkz00(long
		BgL_checksumz00_3021, char *BgL_fromz00_3022)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzabound_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzabound_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzabound_walkz00();
					BGl_cnstzd2initzd2zzabound_walkz00();
					BGl_importedzd2moduleszd2initz00zzabound_walkz00();
					BGl_genericzd2initzd2zzabound_walkz00();
					BGl_methodzd2initzd2zzabound_walkz00();
					BGl_toplevelzd2initzd2zzabound_walkz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzabound_walkz00()
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "abound_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "abound_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"abound_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "abound_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"abound_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"abound_walk");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"abound_walk");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"abound_walk");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzabound_walkz00()
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 15 */
			{	/* Abound/walk.scm 15 */
				obj_t BgL_cportz00_3012;

				BgL_cportz00_3012 =
					bgl_open_input_string(BGl_string4080z00zzabound_walkz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_3013;

					BgL_iz00_3013 = ((long) 23);
				BgL_loopz00_3014:
					if ((BgL_iz00_3013 == ((long) -1)))
						{	/* Abound/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Abound/walk.scm 15 */
							{	/* Abound/walk.scm 15 */
								obj_t BgL_arg4082z00_3016;

								{	/* Abound/walk.scm 15 */

									{	/* Abound/walk.scm 15 */
										obj_t BgL_locationz00_3018;

										BgL_locationz00_3018 = BBOOL(((bool_t) 0));
										{	/* Abound/walk.scm 15 */

											BgL_arg4082z00_3016 =
												BGl_readz00zz__readerz00(BgL_cportz00_3012,
												BgL_locationz00_3018);
										}
									}
								}
								{	/* Abound/walk.scm 15 */
									int BgL_auxz00_3046;

									BgL_auxz00_3046 = (int) (BgL_iz00_3013);
									CNST_TABLE_SET(BgL_auxz00_3046, BgL_arg4082z00_3016);
							}}
							{	/* Abound/walk.scm 15 */
								int BgL_auxz00_3019;

								BgL_auxz00_3019 = (int) ((BgL_iz00_3013 - ((long) 1)));
								{
									long BgL_iz00_3051;

									BgL_iz00_3051 = (long) (BgL_auxz00_3019);
									BgL_iz00_3013 = BgL_iz00_3051;
									goto BgL_loopz00_3014;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzabound_walkz00()
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 15 */
			BGl_za2stringzd2refza2zd2zzabound_walkz00 = BUNSPEC;
			BGl_za2stringzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
			BGl_za2structzd2refza2zd2zzabound_walkz00 = BUNSPEC;
			BGl_za2structzd2setz12za2zc0zzabound_walkz00 = BUNSPEC;
			return BUNSPEC;
		}
	}



/* abound-walk! */
	BGL_EXPORTED_DEF obj_t BGl_aboundzd2walkz12zc0zzabound_walkz00(obj_t
		BgL_globalsz00_15)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 37 */
			{	/* Abound/walk.scm 38 */
				obj_t BgL_list3437z00_906;

				{	/* Abound/walk.scm 38 */
					obj_t BgL_arg3439z00_908;

					{	/* Abound/walk.scm 38 */
						obj_t BgL_arg3441z00_910;

						BgL_arg3441z00_910 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg3439z00_908 =
							MAKE_PAIR(BGl_string4048z00zzabound_walkz00, BgL_arg3441z00_910);
					}
					BgL_list3437z00_906 =
						MAKE_PAIR(BGl_string4049z00zzabound_walkz00, BgL_arg3439z00_908);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list3437z00_906);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string4048z00zzabound_walkz00;
			{	/* Abound/walk.scm 38 */
				obj_t BgL_g3338z00_911;

				obj_t BgL_g3339z00_912;

				{	/* Abound/walk.scm 38 */
					obj_t BgL_list3451z00_926;

					BgL_list3451z00_926 =
						MAKE_PAIR(BGl_initzd2cachez12zd2envz12zzabound_walkz00, BNIL);
					BgL_g3338z00_911 = BgL_list3451z00_926;
				}
				BgL_g3339z00_912 = CNST_TABLE_REF(((long) 0));
				{
					obj_t BgL_hooksz00_914;

					obj_t BgL_hnamesz00_915;

					BgL_hooksz00_914 = BgL_g3338z00_911;
					BgL_hnamesz00_915 = BgL_g3339z00_912;
				BgL_zc3anonymousza33442ze3z83_916:
					if (NULLP(BgL_hooksz00_914))
						{	/* Abound/walk.scm 38 */
							CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Abound/walk.scm 38 */
							bool_t BgL_testz00_3065;

							{	/* Abound/walk.scm 38 */
								obj_t BgL_fun3450z00_924;

								BgL_fun3450z00_924 = CAR(BgL_hooksz00_914);
								BgL_testz00_3065 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun3450z00_924) (BgL_fun3450z00_924,
										BEOA));
							}
							if (BgL_testz00_3065)
								{
									obj_t BgL_hnamesz00_3072;

									obj_t BgL_hooksz00_3070;

									BgL_hooksz00_3070 = CDR(BgL_hooksz00_914);
									BgL_hnamesz00_3072 = CDR(BgL_hnamesz00_915);
									BgL_hnamesz00_915 = BgL_hnamesz00_3072;
									BgL_hooksz00_914 = BgL_hooksz00_3070;
									goto BgL_zc3anonymousza33442ze3z83_916;
								}
							else
								{	/* Abound/walk.scm 38 */
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string4048z00zzabound_walkz00,
										BGl_string4050z00zzabound_walkz00, CAR(BgL_hnamesz00_915));
								}
						}
				}
			}
			{
				obj_t BgL_l3372z00_928;

				BgL_l3372z00_928 = BgL_globalsz00_15;
			BgL_zc3anonymousza33452ze3z83_929:
				if (PAIRP(BgL_l3372z00_928))
					{	/* Abound/walk.scm 39 */
						BGl_aboundzd2funz12zc0zzabound_walkz00(CAR(BgL_l3372z00_928));
						{
							obj_t BgL_l3372z00_3080;

							BgL_l3372z00_3080 = CDR(BgL_l3372z00_928);
							BgL_l3372z00_928 = BgL_l3372z00_3080;
							goto BgL_zc3anonymousza33452ze3z83_929;
						}
					}
				else
					{	/* Abound/walk.scm 39 */
						((bool_t) 1);
					}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Abound/walk.scm 40 */
					{	/* Abound/walk.scm 40 */
						obj_t BgL_port3374z00_936;

						{	/* Abound/walk.scm 40 */
							obj_t BgL_res3955z00_1907;

							{	/* Abound/walk.scm 40 */
								obj_t BgL_auxz00_3085;

								BgL_auxz00_3085 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res3955z00_1907 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_3085);
							}
							BgL_port3374z00_936 = BgL_res3955z00_1907;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port3374z00_936);
						bgl_display_string(BGl_string4051z00zzabound_walkz00,
							BgL_port3374z00_936);
						{	/* Abound/walk.scm 40 */
							obj_t BgL_arg3457z00_937;

							{	/* Abound/walk.scm 40 */
								bool_t BgL_testz00_3090;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Abound/walk.scm 40 */
										BgL_testz00_3090 =
											BGl_2ze3ze3zz__r4_numbers_6_5z00
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
											BINT(((long) 1)));
									}
								else
									{	/* Abound/walk.scm 40 */
										BgL_testz00_3090 = ((bool_t) 0);
									}
								if (BgL_testz00_3090)
									{	/* Abound/walk.scm 40 */
										BgL_arg3457z00_937 = BGl_string4052z00zzabound_walkz00;
									}
								else
									{	/* Abound/walk.scm 40 */
										BgL_arg3457z00_937 = BGl_string4053z00zzabound_walkz00;
									}
							}
							bgl_display_obj(BgL_arg3457z00_937, BgL_port3374z00_936);
						}
						bgl_display_string(BGl_string4054z00zzabound_walkz00,
							BgL_port3374z00_936);
						bgl_display_char(((unsigned char) '\n'), BgL_port3374z00_936);
					}
					{	/* Abound/walk.scm 40 */
						obj_t BgL_list3460z00_940;

						BgL_list3460z00_940 = MAKE_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list3460z00_940);
					}
				}
			else
				{	/* Abound/walk.scm 40 */
					obj_t BgL_g3340z00_941;

					obj_t BgL_g3341z00_942;

					{	/* Abound/walk.scm 40 */
						obj_t BgL_list3469z00_955;

						BgL_list3469z00_955 =
							MAKE_PAIR(BGl_clearzd2cachez12zd2envz12zzabound_walkz00, BNIL);
						BgL_g3340z00_941 = BgL_list3469z00_955;
					}
					BgL_g3341z00_942 = CNST_TABLE_REF(((long) 2));
					{
						obj_t BgL_hooksz00_944;

						obj_t BgL_hnamesz00_945;

						BgL_hooksz00_944 = BgL_g3340z00_941;
						BgL_hnamesz00_945 = BgL_g3341z00_942;
					BgL_zc3anonymousza33461ze3z83_946:
						if (NULLP(BgL_hooksz00_944))
							{	/* Abound/walk.scm 40 */
								return BgL_globalsz00_15;
							}
						else
							{	/* Abound/walk.scm 40 */
								bool_t BgL_testz00_3105;

								{	/* Abound/walk.scm 40 */
									obj_t BgL_fun3468z00_953;

									BgL_fun3468z00_953 = CAR(BgL_hooksz00_944);
									BgL_testz00_3105 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun3468z00_953)
										(BgL_fun3468z00_953, BEOA));
								}
								if (BgL_testz00_3105)
									{
										obj_t BgL_hnamesz00_3112;

										obj_t BgL_hooksz00_3110;

										BgL_hooksz00_3110 = CDR(BgL_hooksz00_944);
										BgL_hnamesz00_3112 = CDR(BgL_hnamesz00_945);
										BgL_hnamesz00_945 = BgL_hnamesz00_3112;
										BgL_hooksz00_944 = BgL_hooksz00_3110;
										goto BgL_zc3anonymousza33461ze3z83_946;
									}
								else
									{	/* Abound/walk.scm 40 */
										obj_t BgL_arg3467z00_952;

										BgL_arg3467z00_952 = CAR(BgL_hnamesz00_945);
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string4055z00zzabound_walkz00, BgL_arg3467z00_952);
									}
							}
					}
				}
		}
	}



/* _abound-walk! */
	obj_t BGl__aboundzd2walkz12zc0zzabound_walkz00(obj_t BgL_envz00_2946,
		obj_t BgL_globalsz00_2947)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 37 */
			return BGl_aboundzd2walkz12zc0zzabound_walkz00(BgL_globalsz00_2947);
		}
	}



/* init-cache! */
	obj_t BGl_initzd2cachez12zc0zzabound_walkz00()
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 53 */
			{	/* Abound/walk.scm 54 */
				obj_t BgL_list3470z00_956;

				BgL_list3470z00_956 = MAKE_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2stringzd2refza2zd2zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 4)),
					BgL_list3470z00_956);
			}
			{	/* Abound/walk.scm 55 */
				obj_t BgL_list3471z00_957;

				BgL_list3471z00_957 = MAKE_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2stringzd2setz12za2zc0zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 5)),
					BgL_list3471z00_957);
			}
			{	/* Abound/walk.scm 56 */
				obj_t BgL_list3472z00_958;

				BgL_list3472z00_958 = MAKE_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2structzd2refza2zd2zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 6)),
					BgL_list3472z00_958);
			}
			{	/* Abound/walk.scm 57 */
				obj_t BgL_list3473z00_959;

				BgL_list3473z00_959 = MAKE_PAIR(CNST_TABLE_REF(((long) 3)), BNIL);
				BGl_za2structzd2setz12za2zc0zzabound_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 7)),
					BgL_list3473z00_959);
			}
			return BUNSPEC;
		}
	}



/* _init-cache! */
	obj_t BGl__initzd2cachez12zc0zzabound_walkz00(obj_t BgL_envz00_2948)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 53 */
			return BGl_initzd2cachez12zc0zzabound_walkz00();
		}
	}



/* clear-cache! */
	obj_t BGl_clearzd2cachez12zc0zzabound_walkz00()
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 63 */
			return (BGl_za2stringzd2refza2zd2zzabound_walkz00 = BFALSE, BUNSPEC);
		}
	}



/* _clear-cache! */
	obj_t BGl__clearzd2cachez12zc0zzabound_walkz00(obj_t BgL_envz00_2949)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 63 */
			return BGl_clearzd2cachez12zc0zzabound_walkz00();
		}
	}



/* abound-fun! */
	obj_t BGl_aboundzd2funz12zc0zzabound_walkz00(obj_t BgL_globalz00_16)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 69 */
			{	/* Abound/walk.scm 70 */
				obj_t BgL_arg3474z00_960;

				{
					BgL_variablez00_bglt BgL_auxz00_3135;

					BgL_auxz00_3135 = (BgL_variablez00_bglt) (BgL_globalz00_16);
					BgL_arg3474z00_960 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_3135))->BgL_idz00);
				}
				BGl_enterzd2functionzd2zztools_errorz00(BgL_arg3474z00_960);
			}
			{	/* Abound/walk.scm 71 */
				BgL_valuez00_bglt BgL_funz00_961;

				{
					BgL_variablez00_bglt BgL_auxz00_3139;

					BgL_auxz00_3139 = (BgL_variablez00_bglt) (BgL_globalz00_16);
					BgL_funz00_961 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_3139))->BgL_valuez00);
				}
				{	/* Abound/walk.scm 72 */
					BgL_nodez00_bglt BgL_arg3475z00_962;

					{	/* Abound/walk.scm 72 */
						obj_t BgL_arg3476z00_963;

						{
							BgL_sfunz00_bglt BgL_auxz00_3142;

							BgL_auxz00_3142 = (BgL_sfunz00_bglt) (BgL_funz00_961);
							BgL_arg3476z00_963 =
								(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3142))->BgL_bodyz00);
						}
						{	/* Abound/walk.scm 72 */
							BgL_nodez00_bglt BgL_res3959z00_1949;

							{	/* Abound/walk.scm 72 */
								BgL_nodez00_bglt BgL_nodez00_1923;

								BgL_nodez00_1923 = (BgL_nodez00_bglt) (BgL_arg3476z00_963);
								{	/* Abound/walk.scm 72 */
									obj_t BgL_method3385z00_1924;

									{	/* Abound/walk.scm 72 */
										BgL_objectz00_bglt BgL_objz00_1925;

										BgL_objz00_1925 = (BgL_objectz00_bglt) (BgL_nodez00_1923);
										{	/* Abound/walk.scm 72 */
											long BgL_objzd2classzd2numz00_1926;

											BgL_objzd2classzd2numz00_1926 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1925);
											{	/* Abound/walk.scm 72 */
												obj_t BgL_arg2643z00_1927;

												BgL_arg2643z00_1927 =
													PROCEDURE_REF
													(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
													(int) (((long) 1)));
												{	/* Abound/walk.scm 72 */
													obj_t BgL_arrayz00_1929;

													int BgL_offsetz00_1930;

													BgL_arrayz00_1929 = BgL_arg2643z00_1927;
													BgL_offsetz00_1930 =
														(int) (BgL_objzd2classzd2numz00_1926);
													{	/* Abound/walk.scm 72 */
														long BgL_offsetz00_1931;

														BgL_offsetz00_1931 =
															((long) (BgL_offsetz00_1930) - OBJECT_TYPE);
														{	/* Abound/walk.scm 72 */
															long BgL_modz00_1932;

															{	/* Abound/walk.scm 72 */
																int BgL_arg2645z00_1933;

																BgL_arg2645z00_1933 = (int) (((long) 16));
																{	/* Abound/walk.scm 72 */
																	long BgL_auxz00_3154;

																	BgL_auxz00_3154 =
																		(long) (BgL_arg2645z00_1933);
																	BgL_modz00_1932 =
																		(BgL_offsetz00_1931 / BgL_auxz00_3154);
															}}
															{	/* Abound/walk.scm 72 */
																long BgL_restz00_1934;

																{	/* Abound/walk.scm 72 */
																	int BgL_arg2644z00_1935;

																	BgL_arg2644z00_1935 = (int) (((long) 16));
																	{	/* Abound/walk.scm 72 */
																		long BgL_auxz00_3158;

																		BgL_auxz00_3158 =
																			(long) (BgL_arg2644z00_1935);
																		BgL_restz00_1934 =
																			(BgL_offsetz00_1931 % BgL_auxz00_3158);
																}}
																{	/* Abound/walk.scm 72 */

																	BgL_method3385z00_1924 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1929,
																			(int) (BgL_modz00_1932)),
																		(int) (BgL_restz00_1934));
									}}}}}}}}
									BgL_res3959z00_1949 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_1924)
										(BgL_method3385z00_1924, (obj_t) (BgL_nodez00_1923), BEOA));
							}}
							BgL_arg3475z00_962 = BgL_res3959z00_1949;
					}}
					{
						obj_t BgL_auxz00_3171;

						BgL_sfunz00_bglt BgL_auxz00_3169;

						BgL_auxz00_3171 = (obj_t) (BgL_arg3475z00_962);
						BgL_auxz00_3169 = (BgL_sfunz00_bglt) (BgL_funz00_961);
						((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3169))->BgL_bodyz00) =
							((obj_t) BgL_auxz00_3171), BUNSPEC);
				}}
				BGl_leavezd2functionzd2zztools_errorz00();
				return BGl_varz00zzast_nodez00;
			}
		}
	}



/* abound-node*! */
	bool_t BGl_aboundzd2nodeza2z12z62zzabound_walkz00(obj_t BgL_nodeza2za2_38)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 314 */
		BGl_aboundzd2nodeza2z12z62zzabound_walkz00:
			if (PAIRP(BgL_nodeza2za2_38))
				{	/* Abound/walk.scm 315 */
					{	/* Abound/walk.scm 316 */
						BgL_nodez00_bglt BgL_arg3478z00_965;

						{	/* Abound/walk.scm 316 */
							obj_t BgL_arg3479z00_966;

							BgL_arg3479z00_966 = CAR(BgL_nodeza2za2_38);
							{	/* Abound/walk.scm 316 */
								BgL_nodez00_bglt BgL_res3962z00_1980;

								{	/* Abound/walk.scm 316 */
									BgL_nodez00_bglt BgL_nodez00_1954;

									BgL_nodez00_1954 = (BgL_nodez00_bglt) (BgL_arg3479z00_966);
									{	/* Abound/walk.scm 316 */
										obj_t BgL_method3385z00_1955;

										{	/* Abound/walk.scm 316 */
											BgL_objectz00_bglt BgL_objz00_1956;

											BgL_objz00_1956 = (BgL_objectz00_bglt) (BgL_nodez00_1954);
											{	/* Abound/walk.scm 316 */
												long BgL_objzd2classzd2numz00_1957;

												BgL_objzd2classzd2numz00_1957 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1956);
												{	/* Abound/walk.scm 316 */
													obj_t BgL_arg2643z00_1958;

													BgL_arg2643z00_1958 =
														PROCEDURE_REF
														(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
														(int) (((long) 1)));
													{	/* Abound/walk.scm 316 */
														obj_t BgL_arrayz00_1960;

														int BgL_offsetz00_1961;

														BgL_arrayz00_1960 = BgL_arg2643z00_1958;
														BgL_offsetz00_1961 =
															(int) (BgL_objzd2classzd2numz00_1957);
														{	/* Abound/walk.scm 316 */
															long BgL_offsetz00_1962;

															BgL_offsetz00_1962 =
																((long) (BgL_offsetz00_1961) - OBJECT_TYPE);
															{	/* Abound/walk.scm 316 */
																long BgL_modz00_1963;

																{	/* Abound/walk.scm 316 */
																	int BgL_arg2645z00_1964;

																	BgL_arg2645z00_1964 = (int) (((long) 16));
																	{	/* Abound/walk.scm 316 */
																		long BgL_auxz00_3187;

																		BgL_auxz00_3187 =
																			(long) (BgL_arg2645z00_1964);
																		BgL_modz00_1963 =
																			(BgL_offsetz00_1962 / BgL_auxz00_3187);
																}}
																{	/* Abound/walk.scm 316 */
																	long BgL_restz00_1965;

																	{	/* Abound/walk.scm 316 */
																		int BgL_arg2644z00_1966;

																		BgL_arg2644z00_1966 = (int) (((long) 16));
																		{	/* Abound/walk.scm 316 */
																			long BgL_auxz00_3191;

																			BgL_auxz00_3191 =
																				(long) (BgL_arg2644z00_1966);
																			BgL_restz00_1965 =
																				(BgL_offsetz00_1962 % BgL_auxz00_3191);
																	}}
																	{	/* Abound/walk.scm 316 */

																		BgL_method3385z00_1955 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1960,
																				(int) (BgL_modz00_1963)),
																			(int) (BgL_restz00_1965));
										}}}}}}}}
										BgL_res3962z00_1980 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3385z00_1955) (BgL_method3385z00_1955,
												(obj_t) (BgL_nodez00_1954), BEOA));
								}}
								BgL_arg3478z00_965 = BgL_res3962z00_1980;
						}}
						{	/* Abound/walk.scm 316 */
							obj_t BgL_auxz00_3202;

							BgL_auxz00_3202 = (obj_t) (BgL_arg3478z00_965);
							SET_CAR(BgL_nodeza2za2_38, BgL_auxz00_3202);
					}}
					{
						obj_t BgL_nodeza2za2_3205;

						BgL_nodeza2za2_3205 = CDR(BgL_nodeza2za2_38);
						BgL_nodeza2za2_38 = BgL_nodeza2za2_3205;
						goto BGl_aboundzd2nodeza2z12z62zzabound_walkz00;
					}
				}
			else
				{	/* Abound/walk.scm 315 */
					return ((bool_t) 0);
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzabound_walkz00()
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_aboundzd2nodezd2default3384zd2envzd2zzabound_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string4056z00zzabound_walkz00);
		}
	}



/* abound-node */
	BgL_nodez00_bglt BGl_aboundzd2nodezd2zzabound_walkz00(BgL_nodez00_bglt
		BgL_nodez00_17)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 79 */
			{	/* Abound/walk.scm 79 */
				obj_t BgL_method3385z00_1984;

				{	/* Abound/walk.scm 79 */
					BgL_objectz00_bglt BgL_objz00_1985;

					BgL_objz00_1985 = (BgL_objectz00_bglt) (BgL_nodez00_17);
					{	/* Abound/walk.scm 79 */
						long BgL_objzd2classzd2numz00_1986;

						BgL_objzd2classzd2numz00_1986 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1985);
						{	/* Abound/walk.scm 79 */
							obj_t BgL_arg2643z00_1987;

							BgL_arg2643z00_1987 =
								PROCEDURE_REF(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
								(int) (((long) 1)));
							{	/* Abound/walk.scm 79 */
								obj_t BgL_arrayz00_1989;

								int BgL_offsetz00_1990;

								BgL_arrayz00_1989 = BgL_arg2643z00_1987;
								BgL_offsetz00_1990 = (int) (BgL_objzd2classzd2numz00_1986);
								{	/* Abound/walk.scm 79 */
									long BgL_offsetz00_1991;

									BgL_offsetz00_1991 =
										((long) (BgL_offsetz00_1990) - OBJECT_TYPE);
									{	/* Abound/walk.scm 79 */
										long BgL_modz00_1992;

										{	/* Abound/walk.scm 79 */
											int BgL_arg2645z00_1993;

											BgL_arg2645z00_1993 = (int) (((long) 16));
											{	/* Abound/walk.scm 79 */
												long BgL_auxz00_3216;

												BgL_auxz00_3216 = (long) (BgL_arg2645z00_1993);
												BgL_modz00_1992 =
													(BgL_offsetz00_1991 / BgL_auxz00_3216);
										}}
										{	/* Abound/walk.scm 79 */
											long BgL_restz00_1994;

											{	/* Abound/walk.scm 79 */
												int BgL_arg2644z00_1995;

												BgL_arg2644z00_1995 = (int) (((long) 16));
												{	/* Abound/walk.scm 79 */
													long BgL_auxz00_3220;

													BgL_auxz00_3220 = (long) (BgL_arg2644z00_1995);
													BgL_restz00_1994 =
														(BgL_offsetz00_1991 % BgL_auxz00_3220);
											}}
											{	/* Abound/walk.scm 79 */

												BgL_method3385z00_1984 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1989,
														(int) (BgL_modz00_1992)), (int) (BgL_restz00_1994));
				}}}}}}}}
				return
					(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_1984)
					(BgL_method3385z00_1984, (obj_t) (BgL_nodez00_17), BEOA));
			}
		}
	}



/* _abound-node */
	obj_t BGl__aboundzd2nodezd2zzabound_walkz00(obj_t BgL_envz00_2950,
		obj_t BgL_nodez00_2951)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 79 */
			return
				(obj_t) (BGl_aboundzd2nodezd2zzabound_walkz00(
					(BgL_nodez00_bglt) (BgL_nodez00_2951)));
		}
	}



/* _abound-node-default3384 */
	obj_t BGl__aboundzd2nodezd2default3384z00zzabound_walkz00(obj_t
		BgL_envz00_2952, obj_t BgL_nodez00_2953)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 15 */
			return (obj_t) ((BgL_nodez00_bglt) (BgL_nodez00_2953));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzabound_walkz00()
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_sequencez00zzast_nodez00, BGl_proc4057z00zzabound_walkz00,
				BGl_string4056z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc4058z00zzabound_walkz00, BGl_string4056z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc4059z00zzabound_walkz00,
				BGl_string4056z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_funcallz00zzast_nodez00, BGl_proc4060z00zzabound_walkz00,
				BGl_string4056z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc4061z00zzabound_walkz00, BGl_string4056z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00, BGl_vrefz00zzast_nodez00,
				BGl_proc4062z00zzabound_walkz00, BGl_string4056z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_vsetz12z12zzast_nodez00, BGl_proc4063z00zzabound_walkz00,
				BGl_string4056z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc4064z00zzabound_walkz00, BGl_string4056z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc4065z00zzabound_walkz00, BGl_string4056z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc4066z00zzabound_walkz00,
				BGl_string4056z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc4067z00zzabound_walkz00, BGl_string4056z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00, BGl_selectz00zzast_nodez00,
				BGl_proc4068z00zzabound_walkz00, BGl_string4056z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc4069z00zzabound_walkz00,
				BGl_string4056z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc4070z00zzabound_walkz00,
				BGl_string4056z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc4071z00zzabound_walkz00,
				BGl_string4056z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc4072z00zzabound_walkz00,
				BGl_string4056z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc4073z00zzabound_walkz00,
				BGl_string4056z00zzabound_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc4074z00zzabound_walkz00,
				BGl_string4056z00zzabound_walkz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc4075z00zzabound_walkz00,
				BGl_string4056z00zzabound_walkz00);
		}
	}



/* abound-node-box-set!3425 */
	obj_t BGl_aboundzd2nodezd2boxzd2setz123425zc0zzabound_walkz00(obj_t
		BgL_envz00_2973, obj_t BgL_nodez00_2974)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 305 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1875;

				{	/* Abound/walk.scm 306 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_3255;

					BgL_nodez00_1875 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2974);
					{	/* Abound/walk.scm 307 */
						BgL_nodez00_bglt BgL_arg3947z00_1879;

						{	/* Abound/walk.scm 307 */
							BgL_varz00_bglt BgL_arg3948z00_1880;

							BgL_arg3948z00_1880 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1875))->
								BgL_varz00);
							{	/* Abound/walk.scm 307 */
								BgL_nodez00_bglt BgL_res4044z00_2913;

								{	/* Abound/walk.scm 307 */
									BgL_nodez00_bglt BgL_nodez00_2887;

									BgL_nodez00_2887 = (BgL_nodez00_bglt) (BgL_arg3948z00_1880);
									{	/* Abound/walk.scm 307 */
										obj_t BgL_method3385z00_2888;

										{	/* Abound/walk.scm 307 */
											BgL_objectz00_bglt BgL_objz00_2889;

											BgL_objz00_2889 = (BgL_objectz00_bglt) (BgL_nodez00_2887);
											{	/* Abound/walk.scm 307 */
												long BgL_objzd2classzd2numz00_2890;

												BgL_objzd2classzd2numz00_2890 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2889);
												{	/* Abound/walk.scm 307 */
													obj_t BgL_arg2643z00_2891;

													BgL_arg2643z00_2891 =
														PROCEDURE_REF
														(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
														(int) (((long) 1)));
													{	/* Abound/walk.scm 307 */
														obj_t BgL_arrayz00_2893;

														int BgL_offsetz00_2894;

														BgL_arrayz00_2893 = BgL_arg2643z00_2891;
														BgL_offsetz00_2894 =
															(int) (BgL_objzd2classzd2numz00_2890);
														{	/* Abound/walk.scm 307 */
															long BgL_offsetz00_2895;

															BgL_offsetz00_2895 =
																((long) (BgL_offsetz00_2894) - OBJECT_TYPE);
															{	/* Abound/walk.scm 307 */
																long BgL_modz00_2896;

																{	/* Abound/walk.scm 307 */
																	int BgL_arg2645z00_2897;

																	BgL_arg2645z00_2897 = (int) (((long) 16));
																	{	/* Abound/walk.scm 307 */
																		long BgL_auxz00_3266;

																		BgL_auxz00_3266 =
																			(long) (BgL_arg2645z00_2897);
																		BgL_modz00_2896 =
																			(BgL_offsetz00_2895 / BgL_auxz00_3266);
																}}
																{	/* Abound/walk.scm 307 */
																	long BgL_restz00_2898;

																	{	/* Abound/walk.scm 307 */
																		int BgL_arg2644z00_2899;

																		BgL_arg2644z00_2899 = (int) (((long) 16));
																		{	/* Abound/walk.scm 307 */
																			long BgL_auxz00_3270;

																			BgL_auxz00_3270 =
																				(long) (BgL_arg2644z00_2899);
																			BgL_restz00_2898 =
																				(BgL_offsetz00_2895 % BgL_auxz00_3270);
																	}}
																	{	/* Abound/walk.scm 307 */

																		BgL_method3385z00_2888 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2893,
																				(int) (BgL_modz00_2896)),
																			(int) (BgL_restz00_2898));
										}}}}}}}}
										BgL_res4044z00_2913 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3385z00_2888) (BgL_method3385z00_2888,
												(obj_t) (BgL_nodez00_2887), BEOA));
								}}
								BgL_arg3947z00_1879 = BgL_res4044z00_2913;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3281;

							BgL_auxz00_3281 = (BgL_varz00_bglt) (BgL_arg3947z00_1879);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1875))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_3281), BUNSPEC);
					}}
					{	/* Abound/walk.scm 308 */
						BgL_nodez00_bglt BgL_arg3949z00_1881;

						{	/* Abound/walk.scm 308 */
							BgL_nodez00_bglt BgL_arg3950z00_1882;

							BgL_arg3950z00_1882 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1875))->
								BgL_valuez00);
							{	/* Abound/walk.scm 308 */
								BgL_nodez00_bglt BgL_res4047z00_2943;

								{	/* Abound/walk.scm 308 */
									obj_t BgL_method3385z00_2918;

									{	/* Abound/walk.scm 308 */
										BgL_objectz00_bglt BgL_objz00_2919;

										BgL_objz00_2919 =
											(BgL_objectz00_bglt) (BgL_arg3950z00_1882);
										{	/* Abound/walk.scm 308 */
											long BgL_objzd2classzd2numz00_2920;

											BgL_objzd2classzd2numz00_2920 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2919);
											{	/* Abound/walk.scm 308 */
												obj_t BgL_arg2643z00_2921;

												BgL_arg2643z00_2921 =
													PROCEDURE_REF
													(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
													(int) (((long) 1)));
												{	/* Abound/walk.scm 308 */
													obj_t BgL_arrayz00_2923;

													int BgL_offsetz00_2924;

													BgL_arrayz00_2923 = BgL_arg2643z00_2921;
													BgL_offsetz00_2924 =
														(int) (BgL_objzd2classzd2numz00_2920);
													{	/* Abound/walk.scm 308 */
														long BgL_offsetz00_2925;

														BgL_offsetz00_2925 =
															((long) (BgL_offsetz00_2924) - OBJECT_TYPE);
														{	/* Abound/walk.scm 308 */
															long BgL_modz00_2926;

															{	/* Abound/walk.scm 308 */
																int BgL_arg2645z00_2927;

																BgL_arg2645z00_2927 = (int) (((long) 16));
																{	/* Abound/walk.scm 308 */
																	long BgL_auxz00_3293;

																	BgL_auxz00_3293 =
																		(long) (BgL_arg2645z00_2927);
																	BgL_modz00_2926 =
																		(BgL_offsetz00_2925 / BgL_auxz00_3293);
															}}
															{	/* Abound/walk.scm 308 */
																long BgL_restz00_2928;

																{	/* Abound/walk.scm 308 */
																	int BgL_arg2644z00_2929;

																	BgL_arg2644z00_2929 = (int) (((long) 16));
																	{	/* Abound/walk.scm 308 */
																		long BgL_auxz00_3297;

																		BgL_auxz00_3297 =
																			(long) (BgL_arg2644z00_2929);
																		BgL_restz00_2928 =
																			(BgL_offsetz00_2925 % BgL_auxz00_3297);
																}}
																{	/* Abound/walk.scm 308 */

																	BgL_method3385z00_2918 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2923,
																			(int) (BgL_modz00_2926)),
																		(int) (BgL_restz00_2928));
									}}}}}}}}
									BgL_res4047z00_2943 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_2918)
										(BgL_method3385z00_2918, (obj_t) (BgL_arg3950z00_1882),
											BEOA));
								}
								BgL_arg3949z00_1881 = BgL_res4047z00_2943;
						}}
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1875))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3949z00_1881), BUNSPEC);
					}
					BgL_auxz00_3255 = BgL_nodez00_1875;
					return (obj_t) (BgL_auxz00_3255);
				}
			}
		}
	}



/* abound-node-box-ref3423 */
	obj_t BGl_aboundzd2nodezd2boxzd2ref3423zd2zzabound_walkz00(obj_t
		BgL_envz00_2975, obj_t BgL_nodez00_2976)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 298 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1868;

				{	/* Abound/walk.scm 299 */
					BgL_boxzd2refzd2_bglt BgL_auxz00_3311;

					BgL_nodez00_1868 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2976);
					{	/* Abound/walk.scm 299 */
						BgL_nodez00_bglt BgL_arg3944z00_1871;

						{	/* Abound/walk.scm 299 */
							BgL_varz00_bglt BgL_arg3945z00_1872;

							BgL_arg3945z00_1872 =
								(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1868))->BgL_varz00);
							{	/* Abound/walk.scm 299 */
								BgL_nodez00_bglt BgL_res4041z00_2883;

								{	/* Abound/walk.scm 299 */
									BgL_nodez00_bglt BgL_nodez00_2857;

									BgL_nodez00_2857 = (BgL_nodez00_bglt) (BgL_arg3945z00_1872);
									{	/* Abound/walk.scm 299 */
										obj_t BgL_method3385z00_2858;

										{	/* Abound/walk.scm 299 */
											BgL_objectz00_bglt BgL_objz00_2859;

											BgL_objz00_2859 = (BgL_objectz00_bglt) (BgL_nodez00_2857);
											{	/* Abound/walk.scm 299 */
												long BgL_objzd2classzd2numz00_2860;

												BgL_objzd2classzd2numz00_2860 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2859);
												{	/* Abound/walk.scm 299 */
													obj_t BgL_arg2643z00_2861;

													BgL_arg2643z00_2861 =
														PROCEDURE_REF
														(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
														(int) (((long) 1)));
													{	/* Abound/walk.scm 299 */
														obj_t BgL_arrayz00_2863;

														int BgL_offsetz00_2864;

														BgL_arrayz00_2863 = BgL_arg2643z00_2861;
														BgL_offsetz00_2864 =
															(int) (BgL_objzd2classzd2numz00_2860);
														{	/* Abound/walk.scm 299 */
															long BgL_offsetz00_2865;

															BgL_offsetz00_2865 =
																((long) (BgL_offsetz00_2864) - OBJECT_TYPE);
															{	/* Abound/walk.scm 299 */
																long BgL_modz00_2866;

																{	/* Abound/walk.scm 299 */
																	int BgL_arg2645z00_2867;

																	BgL_arg2645z00_2867 = (int) (((long) 16));
																	{	/* Abound/walk.scm 299 */
																		long BgL_auxz00_3322;

																		BgL_auxz00_3322 =
																			(long) (BgL_arg2645z00_2867);
																		BgL_modz00_2866 =
																			(BgL_offsetz00_2865 / BgL_auxz00_3322);
																}}
																{	/* Abound/walk.scm 299 */
																	long BgL_restz00_2868;

																	{	/* Abound/walk.scm 299 */
																		int BgL_arg2644z00_2869;

																		BgL_arg2644z00_2869 = (int) (((long) 16));
																		{	/* Abound/walk.scm 299 */
																			long BgL_auxz00_3326;

																			BgL_auxz00_3326 =
																				(long) (BgL_arg2644z00_2869);
																			BgL_restz00_2868 =
																				(BgL_offsetz00_2865 % BgL_auxz00_3326);
																	}}
																	{	/* Abound/walk.scm 299 */

																		BgL_method3385z00_2858 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2863,
																				(int) (BgL_modz00_2866)),
																			(int) (BgL_restz00_2868));
										}}}}}}}}
										BgL_res4041z00_2883 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3385z00_2858) (BgL_method3385z00_2858,
												(obj_t) (BgL_nodez00_2857), BEOA));
								}}
								BgL_arg3944z00_1871 = BgL_res4041z00_2883;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3337;

							BgL_auxz00_3337 = (BgL_varz00_bglt) (BgL_arg3944z00_1871);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1868))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_3337), BUNSPEC);
					}}
					BgL_auxz00_3311 = BgL_nodez00_1868;
					return (obj_t) (BgL_auxz00_3311);
				}
			}
		}
	}



/* abound-node-make-box3421 */
	obj_t BGl_aboundzd2nodezd2makezd2box3421zd2zzabound_walkz00(obj_t
		BgL_envz00_2977, obj_t BgL_nodez00_2978)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 291 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1861;

				{	/* Abound/walk.scm 292 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_3342;

					BgL_nodez00_1861 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2978);
					{	/* Abound/walk.scm 292 */
						BgL_nodez00_bglt BgL_arg3941z00_1864;

						{	/* Abound/walk.scm 292 */
							BgL_nodez00_bglt BgL_arg3942z00_1865;

							BgL_arg3942z00_1865 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1861))->
								BgL_valuez00);
							{	/* Abound/walk.scm 292 */
								BgL_nodez00_bglt BgL_res4038z00_2853;

								{	/* Abound/walk.scm 292 */
									obj_t BgL_method3385z00_2828;

									{	/* Abound/walk.scm 292 */
										BgL_objectz00_bglt BgL_objz00_2829;

										BgL_objz00_2829 =
											(BgL_objectz00_bglt) (BgL_arg3942z00_1865);
										{	/* Abound/walk.scm 292 */
											long BgL_objzd2classzd2numz00_2830;

											BgL_objzd2classzd2numz00_2830 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2829);
											{	/* Abound/walk.scm 292 */
												obj_t BgL_arg2643z00_2831;

												BgL_arg2643z00_2831 =
													PROCEDURE_REF
													(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
													(int) (((long) 1)));
												{	/* Abound/walk.scm 292 */
													obj_t BgL_arrayz00_2833;

													int BgL_offsetz00_2834;

													BgL_arrayz00_2833 = BgL_arg2643z00_2831;
													BgL_offsetz00_2834 =
														(int) (BgL_objzd2classzd2numz00_2830);
													{	/* Abound/walk.scm 292 */
														long BgL_offsetz00_2835;

														BgL_offsetz00_2835 =
															((long) (BgL_offsetz00_2834) - OBJECT_TYPE);
														{	/* Abound/walk.scm 292 */
															long BgL_modz00_2836;

															{	/* Abound/walk.scm 292 */
																int BgL_arg2645z00_2837;

																BgL_arg2645z00_2837 = (int) (((long) 16));
																{	/* Abound/walk.scm 292 */
																	long BgL_auxz00_3352;

																	BgL_auxz00_3352 =
																		(long) (BgL_arg2645z00_2837);
																	BgL_modz00_2836 =
																		(BgL_offsetz00_2835 / BgL_auxz00_3352);
															}}
															{	/* Abound/walk.scm 292 */
																long BgL_restz00_2838;

																{	/* Abound/walk.scm 292 */
																	int BgL_arg2644z00_2839;

																	BgL_arg2644z00_2839 = (int) (((long) 16));
																	{	/* Abound/walk.scm 292 */
																		long BgL_auxz00_3356;

																		BgL_auxz00_3356 =
																			(long) (BgL_arg2644z00_2839);
																		BgL_restz00_2838 =
																			(BgL_offsetz00_2835 % BgL_auxz00_3356);
																}}
																{	/* Abound/walk.scm 292 */

																	BgL_method3385z00_2828 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2833,
																			(int) (BgL_modz00_2836)),
																		(int) (BgL_restz00_2838));
									}}}}}}}}
									BgL_res4038z00_2853 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_2828)
										(BgL_method3385z00_2828, (obj_t) (BgL_arg3942z00_1865),
											BEOA));
								}
								BgL_arg3941z00_1864 = BgL_res4038z00_2853;
						}}
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1861))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3941z00_1864), BUNSPEC);
					}
					BgL_auxz00_3342 = BgL_nodez00_1861;
					return (obj_t) (BgL_auxz00_3342);
				}
			}
		}
	}



/* abound-node-jump-ex-3419 */
	obj_t BGl_aboundzd2nodezd2jumpzd2exzd23419z00zzabound_walkz00(obj_t
		BgL_envz00_2979, obj_t BgL_nodez00_2980)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 282 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1851;

				{	/* Abound/walk.scm 283 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_3370;

					BgL_nodez00_1851 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2980);
					{	/* Abound/walk.scm 284 */
						BgL_nodez00_bglt BgL_arg3936z00_1855;

						{	/* Abound/walk.scm 284 */
							BgL_nodez00_bglt BgL_arg3937z00_1856;

							BgL_arg3937z00_1856 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1851))->
								BgL_exitz00);
							{	/* Abound/walk.scm 284 */
								BgL_nodez00_bglt BgL_res4032z00_2793;

								{	/* Abound/walk.scm 284 */
									obj_t BgL_method3385z00_2768;

									{	/* Abound/walk.scm 284 */
										BgL_objectz00_bglt BgL_objz00_2769;

										BgL_objz00_2769 =
											(BgL_objectz00_bglt) (BgL_arg3937z00_1856);
										{	/* Abound/walk.scm 284 */
											long BgL_objzd2classzd2numz00_2770;

											BgL_objzd2classzd2numz00_2770 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2769);
											{	/* Abound/walk.scm 284 */
												obj_t BgL_arg2643z00_2771;

												BgL_arg2643z00_2771 =
													PROCEDURE_REF
													(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
													(int) (((long) 1)));
												{	/* Abound/walk.scm 284 */
													obj_t BgL_arrayz00_2773;

													int BgL_offsetz00_2774;

													BgL_arrayz00_2773 = BgL_arg2643z00_2771;
													BgL_offsetz00_2774 =
														(int) (BgL_objzd2classzd2numz00_2770);
													{	/* Abound/walk.scm 284 */
														long BgL_offsetz00_2775;

														BgL_offsetz00_2775 =
															((long) (BgL_offsetz00_2774) - OBJECT_TYPE);
														{	/* Abound/walk.scm 284 */
															long BgL_modz00_2776;

															{	/* Abound/walk.scm 284 */
																int BgL_arg2645z00_2777;

																BgL_arg2645z00_2777 = (int) (((long) 16));
																{	/* Abound/walk.scm 284 */
																	long BgL_auxz00_3380;

																	BgL_auxz00_3380 =
																		(long) (BgL_arg2645z00_2777);
																	BgL_modz00_2776 =
																		(BgL_offsetz00_2775 / BgL_auxz00_3380);
															}}
															{	/* Abound/walk.scm 284 */
																long BgL_restz00_2778;

																{	/* Abound/walk.scm 284 */
																	int BgL_arg2644z00_2779;

																	BgL_arg2644z00_2779 = (int) (((long) 16));
																	{	/* Abound/walk.scm 284 */
																		long BgL_auxz00_3384;

																		BgL_auxz00_3384 =
																			(long) (BgL_arg2644z00_2779);
																		BgL_restz00_2778 =
																			(BgL_offsetz00_2775 % BgL_auxz00_3384);
																}}
																{	/* Abound/walk.scm 284 */

																	BgL_method3385z00_2768 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2773,
																			(int) (BgL_modz00_2776)),
																		(int) (BgL_restz00_2778));
									}}}}}}}}
									BgL_res4032z00_2793 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_2768)
										(BgL_method3385z00_2768, (obj_t) (BgL_arg3937z00_1856),
											BEOA));
								}
								BgL_arg3936z00_1855 = BgL_res4032z00_2793;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1851))->
								BgL_exitz00) =
							((BgL_nodez00_bglt) BgL_arg3936z00_1855), BUNSPEC);
					}
					{	/* Abound/walk.scm 285 */
						BgL_nodez00_bglt BgL_arg3938z00_1857;

						{	/* Abound/walk.scm 285 */
							BgL_nodez00_bglt BgL_arg3939z00_1858;

							BgL_arg3939z00_1858 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1851))->
								BgL_valuez00);
							{	/* Abound/walk.scm 285 */
								BgL_nodez00_bglt BgL_res4035z00_2823;

								{	/* Abound/walk.scm 285 */
									obj_t BgL_method3385z00_2798;

									{	/* Abound/walk.scm 285 */
										BgL_objectz00_bglt BgL_objz00_2799;

										BgL_objz00_2799 =
											(BgL_objectz00_bglt) (BgL_arg3939z00_1858);
										{	/* Abound/walk.scm 285 */
											long BgL_objzd2classzd2numz00_2800;

											BgL_objzd2classzd2numz00_2800 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2799);
											{	/* Abound/walk.scm 285 */
												obj_t BgL_arg2643z00_2801;

												BgL_arg2643z00_2801 =
													PROCEDURE_REF
													(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
													(int) (((long) 1)));
												{	/* Abound/walk.scm 285 */
													obj_t BgL_arrayz00_2803;

													int BgL_offsetz00_2804;

													BgL_arrayz00_2803 = BgL_arg2643z00_2801;
													BgL_offsetz00_2804 =
														(int) (BgL_objzd2classzd2numz00_2800);
													{	/* Abound/walk.scm 285 */
														long BgL_offsetz00_2805;

														BgL_offsetz00_2805 =
															((long) (BgL_offsetz00_2804) - OBJECT_TYPE);
														{	/* Abound/walk.scm 285 */
															long BgL_modz00_2806;

															{	/* Abound/walk.scm 285 */
																int BgL_arg2645z00_2807;

																BgL_arg2645z00_2807 = (int) (((long) 16));
																{	/* Abound/walk.scm 285 */
																	long BgL_auxz00_3405;

																	BgL_auxz00_3405 =
																		(long) (BgL_arg2645z00_2807);
																	BgL_modz00_2806 =
																		(BgL_offsetz00_2805 / BgL_auxz00_3405);
															}}
															{	/* Abound/walk.scm 285 */
																long BgL_restz00_2808;

																{	/* Abound/walk.scm 285 */
																	int BgL_arg2644z00_2809;

																	BgL_arg2644z00_2809 = (int) (((long) 16));
																	{	/* Abound/walk.scm 285 */
																		long BgL_auxz00_3409;

																		BgL_auxz00_3409 =
																			(long) (BgL_arg2644z00_2809);
																		BgL_restz00_2808 =
																			(BgL_offsetz00_2805 % BgL_auxz00_3409);
																}}
																{	/* Abound/walk.scm 285 */

																	BgL_method3385z00_2798 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2803,
																			(int) (BgL_modz00_2806)),
																		(int) (BgL_restz00_2808));
									}}}}}}}}
									BgL_res4035z00_2823 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_2798)
										(BgL_method3385z00_2798, (obj_t) (BgL_arg3939z00_1858),
											BEOA));
								}
								BgL_arg3938z00_1857 = BgL_res4035z00_2823;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1851))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3938z00_1857), BUNSPEC);
					}
					BgL_auxz00_3370 = BgL_nodez00_1851;
					return (obj_t) (BgL_auxz00_3370);
				}
			}
		}
	}



/* abound-node-set-ex-i3417 */
	obj_t BGl_aboundzd2nodezd2setzd2exzd2i3417z00zzabound_walkz00(obj_t
		BgL_envz00_2981, obj_t BgL_nodez00_2982)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 275 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1844;

				{	/* Abound/walk.scm 276 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_3423;

					BgL_nodez00_1844 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2982);
					{	/* Abound/walk.scm 276 */
						BgL_nodez00_bglt BgL_arg3933z00_1847;

						{	/* Abound/walk.scm 276 */
							BgL_nodez00_bglt BgL_arg3934z00_1848;

							BgL_arg3934z00_1848 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1844))->
								BgL_bodyz00);
							{	/* Abound/walk.scm 276 */
								BgL_nodez00_bglt BgL_res4029z00_2763;

								{	/* Abound/walk.scm 276 */
									obj_t BgL_method3385z00_2738;

									{	/* Abound/walk.scm 276 */
										BgL_objectz00_bglt BgL_objz00_2739;

										BgL_objz00_2739 =
											(BgL_objectz00_bglt) (BgL_arg3934z00_1848);
										{	/* Abound/walk.scm 276 */
											long BgL_objzd2classzd2numz00_2740;

											BgL_objzd2classzd2numz00_2740 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2739);
											{	/* Abound/walk.scm 276 */
												obj_t BgL_arg2643z00_2741;

												BgL_arg2643z00_2741 =
													PROCEDURE_REF
													(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
													(int) (((long) 1)));
												{	/* Abound/walk.scm 276 */
													obj_t BgL_arrayz00_2743;

													int BgL_offsetz00_2744;

													BgL_arrayz00_2743 = BgL_arg2643z00_2741;
													BgL_offsetz00_2744 =
														(int) (BgL_objzd2classzd2numz00_2740);
													{	/* Abound/walk.scm 276 */
														long BgL_offsetz00_2745;

														BgL_offsetz00_2745 =
															((long) (BgL_offsetz00_2744) - OBJECT_TYPE);
														{	/* Abound/walk.scm 276 */
															long BgL_modz00_2746;

															{	/* Abound/walk.scm 276 */
																int BgL_arg2645z00_2747;

																BgL_arg2645z00_2747 = (int) (((long) 16));
																{	/* Abound/walk.scm 276 */
																	long BgL_auxz00_3433;

																	BgL_auxz00_3433 =
																		(long) (BgL_arg2645z00_2747);
																	BgL_modz00_2746 =
																		(BgL_offsetz00_2745 / BgL_auxz00_3433);
															}}
															{	/* Abound/walk.scm 276 */
																long BgL_restz00_2748;

																{	/* Abound/walk.scm 276 */
																	int BgL_arg2644z00_2749;

																	BgL_arg2644z00_2749 = (int) (((long) 16));
																	{	/* Abound/walk.scm 276 */
																		long BgL_auxz00_3437;

																		BgL_auxz00_3437 =
																			(long) (BgL_arg2644z00_2749);
																		BgL_restz00_2748 =
																			(BgL_offsetz00_2745 % BgL_auxz00_3437);
																}}
																{	/* Abound/walk.scm 276 */

																	BgL_method3385z00_2738 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2743,
																			(int) (BgL_modz00_2746)),
																		(int) (BgL_restz00_2748));
									}}}}}}}}
									BgL_res4029z00_2763 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_2738)
										(BgL_method3385z00_2738, (obj_t) (BgL_arg3934z00_1848),
											BEOA));
								}
								BgL_arg3933z00_1847 = BgL_res4029z00_2763;
						}}
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1844))->
								BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3933z00_1847), BUNSPEC);
					}
					BgL_auxz00_3423 = BgL_nodez00_1844;
					return (obj_t) (BgL_auxz00_3423);
				}
			}
		}
	}



/* abound-node-let-var3415 */
	obj_t BGl_aboundzd2nodezd2letzd2var3415zd2zzabound_walkz00(obj_t
		BgL_envz00_2983, obj_t BgL_nodez00_2984)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 264 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1826;

				{	/* Abound/walk.scm 265 */
					BgL_letzd2varzd2_bglt BgL_auxz00_3451;

					BgL_nodez00_1826 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2984);
					{	/* Abound/walk.scm 266 */
						obj_t BgL_g3383z00_1830;

						BgL_g3383z00_1830 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1826))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3381z00_1832;

							BgL_l3381z00_1832 = BgL_g3383z00_1830;
						BgL_zc3anonymousza33925ze3z83_1833:
							if (PAIRP(BgL_l3381z00_1832))
								{	/* Abound/walk.scm 266 */
									{	/* Abound/walk.scm 267 */
										obj_t BgL_bindingz00_1835;

										BgL_bindingz00_1835 = CAR(BgL_l3381z00_1832);
										{	/* Abound/walk.scm 267 */
											BgL_nodez00_bglt BgL_arg3927z00_1836;

											{	/* Abound/walk.scm 267 */
												obj_t BgL_arg3928z00_1837;

												BgL_arg3928z00_1837 = CDR(BgL_bindingz00_1835);
												{	/* Abound/walk.scm 267 */
													BgL_nodez00_bglt BgL_res4023z00_2702;

													{	/* Abound/walk.scm 267 */
														BgL_nodez00_bglt BgL_nodez00_2676;

														BgL_nodez00_2676 =
															(BgL_nodez00_bglt) (BgL_arg3928z00_1837);
														{	/* Abound/walk.scm 267 */
															obj_t BgL_method3385z00_2677;

															{	/* Abound/walk.scm 267 */
																BgL_objectz00_bglt BgL_objz00_2678;

																BgL_objz00_2678 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2676);
																{	/* Abound/walk.scm 267 */
																	long BgL_objzd2classzd2numz00_2679;

																	BgL_objzd2classzd2numz00_2679 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2678);
																	{	/* Abound/walk.scm 267 */
																		obj_t BgL_arg2643z00_2680;

																		BgL_arg2643z00_2680 =
																			PROCEDURE_REF
																			(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
																			(int) (((long) 1)));
																		{	/* Abound/walk.scm 267 */
																			obj_t BgL_arrayz00_2682;

																			int BgL_offsetz00_2683;

																			BgL_arrayz00_2682 = BgL_arg2643z00_2680;
																			BgL_offsetz00_2683 =
																				(int) (BgL_objzd2classzd2numz00_2679);
																			{	/* Abound/walk.scm 267 */
																				long BgL_offsetz00_2684;

																				BgL_offsetz00_2684 =
																					(
																					(long) (BgL_offsetz00_2683) -
																					OBJECT_TYPE);
																				{	/* Abound/walk.scm 267 */
																					long BgL_modz00_2685;

																					{	/* Abound/walk.scm 267 */
																						int BgL_arg2645z00_2686;

																						BgL_arg2645z00_2686 =
																							(int) (((long) 16));
																						{	/* Abound/walk.scm 267 */
																							long BgL_auxz00_3466;

																							BgL_auxz00_3466 =
																								(long) (BgL_arg2645z00_2686);
																							BgL_modz00_2685 =
																								(BgL_offsetz00_2684 /
																								BgL_auxz00_3466);
																					}}
																					{	/* Abound/walk.scm 267 */
																						long BgL_restz00_2687;

																						{	/* Abound/walk.scm 267 */
																							int BgL_arg2644z00_2688;

																							BgL_arg2644z00_2688 =
																								(int) (((long) 16));
																							{	/* Abound/walk.scm 267 */
																								long BgL_auxz00_3470;

																								BgL_auxz00_3470 =
																									(long) (BgL_arg2644z00_2688);
																								BgL_restz00_2687 =
																									(BgL_offsetz00_2684 %
																									BgL_auxz00_3470);
																						}}
																						{	/* Abound/walk.scm 267 */

																							BgL_method3385z00_2677 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2682,
																									(int) (BgL_modz00_2685)),
																								(int) (BgL_restz00_2687));
															}}}}}}}}
															BgL_res4023z00_2702 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3385z00_2677)
																(BgL_method3385z00_2677,
																	(obj_t) (BgL_nodez00_2676), BEOA));
													}}
													BgL_arg3927z00_1836 = BgL_res4023z00_2702;
											}}
											{	/* Abound/walk.scm 267 */
												obj_t BgL_auxz00_3481;

												BgL_auxz00_3481 = (obj_t) (BgL_arg3927z00_1836);
												SET_CDR(BgL_bindingz00_1835, BgL_auxz00_3481);
									}}}
									{
										obj_t BgL_l3381z00_3484;

										BgL_l3381z00_3484 = CDR(BgL_l3381z00_1832);
										BgL_l3381z00_1832 = BgL_l3381z00_3484;
										goto BgL_zc3anonymousza33925ze3z83_1833;
									}
								}
							else
								{	/* Abound/walk.scm 266 */
									((bool_t) 1);
								}
						}
					}
					{	/* Abound/walk.scm 269 */
						BgL_nodez00_bglt BgL_arg3930z00_1840;

						{	/* Abound/walk.scm 269 */
							BgL_nodez00_bglt BgL_arg3931z00_1841;

							BgL_arg3931z00_1841 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1826))->BgL_bodyz00);
							{	/* Abound/walk.scm 269 */
								BgL_nodez00_bglt BgL_res4026z00_2733;

								{	/* Abound/walk.scm 269 */
									obj_t BgL_method3385z00_2708;

									{	/* Abound/walk.scm 269 */
										BgL_objectz00_bglt BgL_objz00_2709;

										BgL_objz00_2709 =
											(BgL_objectz00_bglt) (BgL_arg3931z00_1841);
										{	/* Abound/walk.scm 269 */
											long BgL_objzd2classzd2numz00_2710;

											BgL_objzd2classzd2numz00_2710 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2709);
											{	/* Abound/walk.scm 269 */
												obj_t BgL_arg2643z00_2711;

												BgL_arg2643z00_2711 =
													PROCEDURE_REF
													(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
													(int) (((long) 1)));
												{	/* Abound/walk.scm 269 */
													obj_t BgL_arrayz00_2713;

													int BgL_offsetz00_2714;

													BgL_arrayz00_2713 = BgL_arg2643z00_2711;
													BgL_offsetz00_2714 =
														(int) (BgL_objzd2classzd2numz00_2710);
													{	/* Abound/walk.scm 269 */
														long BgL_offsetz00_2715;

														BgL_offsetz00_2715 =
															((long) (BgL_offsetz00_2714) - OBJECT_TYPE);
														{	/* Abound/walk.scm 269 */
															long BgL_modz00_2716;

															{	/* Abound/walk.scm 269 */
																int BgL_arg2645z00_2717;

																BgL_arg2645z00_2717 = (int) (((long) 16));
																{	/* Abound/walk.scm 269 */
																	long BgL_auxz00_3495;

																	BgL_auxz00_3495 =
																		(long) (BgL_arg2645z00_2717);
																	BgL_modz00_2716 =
																		(BgL_offsetz00_2715 / BgL_auxz00_3495);
															}}
															{	/* Abound/walk.scm 269 */
																long BgL_restz00_2718;

																{	/* Abound/walk.scm 269 */
																	int BgL_arg2644z00_2719;

																	BgL_arg2644z00_2719 = (int) (((long) 16));
																	{	/* Abound/walk.scm 269 */
																		long BgL_auxz00_3499;

																		BgL_auxz00_3499 =
																			(long) (BgL_arg2644z00_2719);
																		BgL_restz00_2718 =
																			(BgL_offsetz00_2715 % BgL_auxz00_3499);
																}}
																{	/* Abound/walk.scm 269 */

																	BgL_method3385z00_2708 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2713,
																			(int) (BgL_modz00_2716)),
																		(int) (BgL_restz00_2718));
									}}}}}}}}
									BgL_res4026z00_2733 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_2708)
										(BgL_method3385z00_2708, (obj_t) (BgL_arg3931z00_1841),
											BEOA));
								}
								BgL_arg3930z00_1840 = BgL_res4026z00_2733;
						}}
						((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1826))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3930z00_1840), BUNSPEC);
					}
					BgL_auxz00_3451 = BgL_nodez00_1826;
					return (obj_t) (BgL_auxz00_3451);
				}
			}
		}
	}



/* abound-node-let-fun3412 */
	obj_t BGl_aboundzd2nodezd2letzd2fun3412zd2zzabound_walkz00(obj_t
		BgL_envz00_2985, obj_t BgL_nodez00_2986)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 255 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1810;

				{	/* Abound/walk.scm 256 */
					BgL_letzd2funzd2_bglt BgL_auxz00_3513;

					BgL_nodez00_1810 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2986);
					{	/* Abound/walk.scm 257 */
						obj_t BgL_g3380z00_1814;

						BgL_g3380z00_1814 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1810))->BgL_localsz00);
						{
							obj_t BgL_l3378z00_1816;

							BgL_l3378z00_1816 = BgL_g3380z00_1814;
						BgL_zc3anonymousza33918ze3z83_1817:
							if (PAIRP(BgL_l3378z00_1816))
								{	/* Abound/walk.scm 257 */
									BGl_aboundzd2funz12zc0zzabound_walkz00(CAR
										(BgL_l3378z00_1816));
									{
										obj_t BgL_l3378z00_3519;

										BgL_l3378z00_3519 = CDR(BgL_l3378z00_1816);
										BgL_l3378z00_1816 = BgL_l3378z00_3519;
										goto BgL_zc3anonymousza33918ze3z83_1817;
									}
								}
							else
								{	/* Abound/walk.scm 257 */
									((bool_t) 1);
								}
						}
					}
					{	/* Abound/walk.scm 258 */
						BgL_nodez00_bglt BgL_arg3922z00_1822;

						{	/* Abound/walk.scm 258 */
							BgL_nodez00_bglt BgL_arg3923z00_1823;

							BgL_arg3923z00_1823 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1810))->BgL_bodyz00);
							{	/* Abound/walk.scm 258 */
								BgL_nodez00_bglt BgL_res4020z00_2669;

								{	/* Abound/walk.scm 258 */
									obj_t BgL_method3385z00_2644;

									{	/* Abound/walk.scm 258 */
										BgL_objectz00_bglt BgL_objz00_2645;

										BgL_objz00_2645 =
											(BgL_objectz00_bglt) (BgL_arg3923z00_1823);
										{	/* Abound/walk.scm 258 */
											long BgL_objzd2classzd2numz00_2646;

											BgL_objzd2classzd2numz00_2646 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2645);
											{	/* Abound/walk.scm 258 */
												obj_t BgL_arg2643z00_2647;

												BgL_arg2643z00_2647 =
													PROCEDURE_REF
													(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
													(int) (((long) 1)));
												{	/* Abound/walk.scm 258 */
													obj_t BgL_arrayz00_2649;

													int BgL_offsetz00_2650;

													BgL_arrayz00_2649 = BgL_arg2643z00_2647;
													BgL_offsetz00_2650 =
														(int) (BgL_objzd2classzd2numz00_2646);
													{	/* Abound/walk.scm 258 */
														long BgL_offsetz00_2651;

														BgL_offsetz00_2651 =
															((long) (BgL_offsetz00_2650) - OBJECT_TYPE);
														{	/* Abound/walk.scm 258 */
															long BgL_modz00_2652;

															{	/* Abound/walk.scm 258 */
																int BgL_arg2645z00_2653;

																BgL_arg2645z00_2653 = (int) (((long) 16));
																{	/* Abound/walk.scm 258 */
																	long BgL_auxz00_3530;

																	BgL_auxz00_3530 =
																		(long) (BgL_arg2645z00_2653);
																	BgL_modz00_2652 =
																		(BgL_offsetz00_2651 / BgL_auxz00_3530);
															}}
															{	/* Abound/walk.scm 258 */
																long BgL_restz00_2654;

																{	/* Abound/walk.scm 258 */
																	int BgL_arg2644z00_2655;

																	BgL_arg2644z00_2655 = (int) (((long) 16));
																	{	/* Abound/walk.scm 258 */
																		long BgL_auxz00_3534;

																		BgL_auxz00_3534 =
																			(long) (BgL_arg2644z00_2655);
																		BgL_restz00_2654 =
																			(BgL_offsetz00_2651 % BgL_auxz00_3534);
																}}
																{	/* Abound/walk.scm 258 */

																	BgL_method3385z00_2644 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2649,
																			(int) (BgL_modz00_2652)),
																		(int) (BgL_restz00_2654));
									}}}}}}}}
									BgL_res4020z00_2669 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_2644)
										(BgL_method3385z00_2644, (obj_t) (BgL_arg3923z00_1823),
											BEOA));
								}
								BgL_arg3922z00_1822 = BgL_res4020z00_2669;
						}}
						((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1810))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3922z00_1822), BUNSPEC);
					}
					BgL_auxz00_3513 = BgL_nodez00_1810;
					return (obj_t) (BgL_auxz00_3513);
				}
			}
		}
	}



/* abound-node-select3409 */
	obj_t BGl_aboundzd2nodezd2select3409z00zzabound_walkz00(obj_t BgL_envz00_2987,
		obj_t BgL_nodez00_2988)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 244 */
			{
				BgL_selectz00_bglt BgL_nodez00_1792;

				{	/* Abound/walk.scm 245 */
					BgL_selectz00_bglt BgL_auxz00_3548;

					BgL_nodez00_1792 = (BgL_selectz00_bglt) (BgL_nodez00_2988);
					{	/* Abound/walk.scm 246 */
						BgL_nodez00_bglt BgL_arg3910z00_1796;

						{	/* Abound/walk.scm 246 */
							BgL_nodez00_bglt BgL_arg3911z00_1797;

							BgL_arg3911z00_1797 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1792))->BgL_testz00);
							{	/* Abound/walk.scm 246 */
								BgL_nodez00_bglt BgL_res4014z00_2601;

								{	/* Abound/walk.scm 246 */
									obj_t BgL_method3385z00_2576;

									{	/* Abound/walk.scm 246 */
										BgL_objectz00_bglt BgL_objz00_2577;

										BgL_objz00_2577 =
											(BgL_objectz00_bglt) (BgL_arg3911z00_1797);
										{	/* Abound/walk.scm 246 */
											long BgL_objzd2classzd2numz00_2578;

											BgL_objzd2classzd2numz00_2578 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2577);
											{	/* Abound/walk.scm 246 */
												obj_t BgL_arg2643z00_2579;

												BgL_arg2643z00_2579 =
													PROCEDURE_REF
													(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
													(int) (((long) 1)));
												{	/* Abound/walk.scm 246 */
													obj_t BgL_arrayz00_2581;

													int BgL_offsetz00_2582;

													BgL_arrayz00_2581 = BgL_arg2643z00_2579;
													BgL_offsetz00_2582 =
														(int) (BgL_objzd2classzd2numz00_2578);
													{	/* Abound/walk.scm 246 */
														long BgL_offsetz00_2583;

														BgL_offsetz00_2583 =
															((long) (BgL_offsetz00_2582) - OBJECT_TYPE);
														{	/* Abound/walk.scm 246 */
															long BgL_modz00_2584;

															{	/* Abound/walk.scm 246 */
																int BgL_arg2645z00_2585;

																BgL_arg2645z00_2585 = (int) (((long) 16));
																{	/* Abound/walk.scm 246 */
																	long BgL_auxz00_3558;

																	BgL_auxz00_3558 =
																		(long) (BgL_arg2645z00_2585);
																	BgL_modz00_2584 =
																		(BgL_offsetz00_2583 / BgL_auxz00_3558);
															}}
															{	/* Abound/walk.scm 246 */
																long BgL_restz00_2586;

																{	/* Abound/walk.scm 246 */
																	int BgL_arg2644z00_2587;

																	BgL_arg2644z00_2587 = (int) (((long) 16));
																	{	/* Abound/walk.scm 246 */
																		long BgL_auxz00_3562;

																		BgL_auxz00_3562 =
																			(long) (BgL_arg2644z00_2587);
																		BgL_restz00_2586 =
																			(BgL_offsetz00_2583 % BgL_auxz00_3562);
																}}
																{	/* Abound/walk.scm 246 */

																	BgL_method3385z00_2576 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2581,
																			(int) (BgL_modz00_2584)),
																		(int) (BgL_restz00_2586));
									}}}}}}}}
									BgL_res4014z00_2601 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_2576)
										(BgL_method3385z00_2576, (obj_t) (BgL_arg3911z00_1797),
											BEOA));
								}
								BgL_arg3910z00_1796 = BgL_res4014z00_2601;
						}}
						((((BgL_selectz00_bglt) CREF(BgL_nodez00_1792))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3910z00_1796), BUNSPEC);
					}
					{	/* Abound/walk.scm 247 */
						obj_t BgL_g3377z00_1798;

						BgL_g3377z00_1798 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1792))->BgL_clausesz00);
						{
							obj_t BgL_l3375z00_1800;

							BgL_l3375z00_1800 = BgL_g3377z00_1798;
						BgL_zc3anonymousza33912ze3z83_1801:
							if (PAIRP(BgL_l3375z00_1800))
								{	/* Abound/walk.scm 247 */
									{	/* Abound/walk.scm 248 */
										obj_t BgL_clausez00_1803;

										BgL_clausez00_1803 = CAR(BgL_l3375z00_1800);
										{	/* Abound/walk.scm 248 */
											BgL_nodez00_bglt BgL_arg3914z00_1804;

											{	/* Abound/walk.scm 248 */
												obj_t BgL_arg3915z00_1805;

												BgL_arg3915z00_1805 = CDR(BgL_clausez00_1803);
												{	/* Abound/walk.scm 248 */
													BgL_nodez00_bglt BgL_res4017z00_2634;

													{	/* Abound/walk.scm 248 */
														BgL_nodez00_bglt BgL_nodez00_2608;

														BgL_nodez00_2608 =
															(BgL_nodez00_bglt) (BgL_arg3915z00_1805);
														{	/* Abound/walk.scm 248 */
															obj_t BgL_method3385z00_2609;

															{	/* Abound/walk.scm 248 */
																BgL_objectz00_bglt BgL_objz00_2610;

																BgL_objz00_2610 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2608);
																{	/* Abound/walk.scm 248 */
																	long BgL_objzd2classzd2numz00_2611;

																	BgL_objzd2classzd2numz00_2611 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2610);
																	{	/* Abound/walk.scm 248 */
																		obj_t BgL_arg2643z00_2612;

																		BgL_arg2643z00_2612 =
																			PROCEDURE_REF
																			(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
																			(int) (((long) 1)));
																		{	/* Abound/walk.scm 248 */
																			obj_t BgL_arrayz00_2614;

																			int BgL_offsetz00_2615;

																			BgL_arrayz00_2614 = BgL_arg2643z00_2612;
																			BgL_offsetz00_2615 =
																				(int) (BgL_objzd2classzd2numz00_2611);
																			{	/* Abound/walk.scm 248 */
																				long BgL_offsetz00_2616;

																				BgL_offsetz00_2616 =
																					(
																					(long) (BgL_offsetz00_2615) -
																					OBJECT_TYPE);
																				{	/* Abound/walk.scm 248 */
																					long BgL_modz00_2617;

																					{	/* Abound/walk.scm 248 */
																						int BgL_arg2645z00_2618;

																						BgL_arg2645z00_2618 =
																							(int) (((long) 16));
																						{	/* Abound/walk.scm 248 */
																							long BgL_auxz00_3588;

																							BgL_auxz00_3588 =
																								(long) (BgL_arg2645z00_2618);
																							BgL_modz00_2617 =
																								(BgL_offsetz00_2616 /
																								BgL_auxz00_3588);
																					}}
																					{	/* Abound/walk.scm 248 */
																						long BgL_restz00_2619;

																						{	/* Abound/walk.scm 248 */
																							int BgL_arg2644z00_2620;

																							BgL_arg2644z00_2620 =
																								(int) (((long) 16));
																							{	/* Abound/walk.scm 248 */
																								long BgL_auxz00_3592;

																								BgL_auxz00_3592 =
																									(long) (BgL_arg2644z00_2620);
																								BgL_restz00_2619 =
																									(BgL_offsetz00_2616 %
																									BgL_auxz00_3592);
																						}}
																						{	/* Abound/walk.scm 248 */

																							BgL_method3385z00_2609 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2614,
																									(int) (BgL_modz00_2617)),
																								(int) (BgL_restz00_2619));
															}}}}}}}}
															BgL_res4017z00_2634 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3385z00_2609)
																(BgL_method3385z00_2609,
																	(obj_t) (BgL_nodez00_2608), BEOA));
													}}
													BgL_arg3914z00_1804 = BgL_res4017z00_2634;
											}}
											{	/* Abound/walk.scm 248 */
												obj_t BgL_auxz00_3603;

												BgL_auxz00_3603 = (obj_t) (BgL_arg3914z00_1804);
												SET_CDR(BgL_clausez00_1803, BgL_auxz00_3603);
									}}}
									{
										obj_t BgL_l3375z00_3606;

										BgL_l3375z00_3606 = CDR(BgL_l3375z00_1800);
										BgL_l3375z00_1800 = BgL_l3375z00_3606;
										goto BgL_zc3anonymousza33912ze3z83_1801;
									}
								}
							else
								{	/* Abound/walk.scm 247 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_3548 = BgL_nodez00_1792;
					return (obj_t) (BgL_auxz00_3548);
				}
			}
		}
	}



/* abound-node-fail3407 */
	obj_t BGl_aboundzd2nodezd2fail3407z00zzabound_walkz00(obj_t BgL_envz00_2989,
		obj_t BgL_nodez00_2990)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 234 */
			{
				BgL_failz00_bglt BgL_nodez00_1780;

				{	/* Abound/walk.scm 235 */
					BgL_failz00_bglt BgL_auxz00_3610;

					BgL_nodez00_1780 = (BgL_failz00_bglt) (BgL_nodez00_2990);
					{	/* Abound/walk.scm 236 */
						BgL_nodez00_bglt BgL_arg3902z00_1784;

						{	/* Abound/walk.scm 236 */
							BgL_nodez00_bglt BgL_arg3903z00_1785;

							BgL_arg3903z00_1785 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1780))->BgL_procz00);
							{	/* Abound/walk.scm 236 */
								BgL_nodez00_bglt BgL_res4005z00_2511;

								{	/* Abound/walk.scm 236 */
									obj_t BgL_method3385z00_2486;

									{	/* Abound/walk.scm 236 */
										BgL_objectz00_bglt BgL_objz00_2487;

										BgL_objz00_2487 =
											(BgL_objectz00_bglt) (BgL_arg3903z00_1785);
										{	/* Abound/walk.scm 236 */
											long BgL_objzd2classzd2numz00_2488;

											BgL_objzd2classzd2numz00_2488 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2487);
											{	/* Abound/walk.scm 236 */
												obj_t BgL_arg2643z00_2489;

												BgL_arg2643z00_2489 =
													PROCEDURE_REF
													(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
													(int) (((long) 1)));
												{	/* Abound/walk.scm 236 */
													obj_t BgL_arrayz00_2491;

													int BgL_offsetz00_2492;

													BgL_arrayz00_2491 = BgL_arg2643z00_2489;
													BgL_offsetz00_2492 =
														(int) (BgL_objzd2classzd2numz00_2488);
													{	/* Abound/walk.scm 236 */
														long BgL_offsetz00_2493;

														BgL_offsetz00_2493 =
															((long) (BgL_offsetz00_2492) - OBJECT_TYPE);
														{	/* Abound/walk.scm 236 */
															long BgL_modz00_2494;

															{	/* Abound/walk.scm 236 */
																int BgL_arg2645z00_2495;

																BgL_arg2645z00_2495 = (int) (((long) 16));
																{	/* Abound/walk.scm 236 */
																	long BgL_auxz00_3620;

																	BgL_auxz00_3620 =
																		(long) (BgL_arg2645z00_2495);
																	BgL_modz00_2494 =
																		(BgL_offsetz00_2493 / BgL_auxz00_3620);
															}}
															{	/* Abound/walk.scm 236 */
																long BgL_restz00_2496;

																{	/* Abound/walk.scm 236 */
																	int BgL_arg2644z00_2497;

																	BgL_arg2644z00_2497 = (int) (((long) 16));
																	{	/* Abound/walk.scm 236 */
																		long BgL_auxz00_3624;

																		BgL_auxz00_3624 =
																			(long) (BgL_arg2644z00_2497);
																		BgL_restz00_2496 =
																			(BgL_offsetz00_2493 % BgL_auxz00_3624);
																}}
																{	/* Abound/walk.scm 236 */

																	BgL_method3385z00_2486 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2491,
																			(int) (BgL_modz00_2494)),
																		(int) (BgL_restz00_2496));
									}}}}}}}}
									BgL_res4005z00_2511 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_2486)
										(BgL_method3385z00_2486, (obj_t) (BgL_arg3903z00_1785),
											BEOA));
								}
								BgL_arg3902z00_1784 = BgL_res4005z00_2511;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1780))->BgL_procz00) =
							((BgL_nodez00_bglt) BgL_arg3902z00_1784), BUNSPEC);
					}
					{	/* Abound/walk.scm 237 */
						BgL_nodez00_bglt BgL_arg3904z00_1786;

						{	/* Abound/walk.scm 237 */
							BgL_nodez00_bglt BgL_arg3905z00_1787;

							BgL_arg3905z00_1787 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1780))->BgL_msgz00);
							{	/* Abound/walk.scm 237 */
								BgL_nodez00_bglt BgL_res4008z00_2541;

								{	/* Abound/walk.scm 237 */
									obj_t BgL_method3385z00_2516;

									{	/* Abound/walk.scm 237 */
										BgL_objectz00_bglt BgL_objz00_2517;

										BgL_objz00_2517 =
											(BgL_objectz00_bglt) (BgL_arg3905z00_1787);
										{	/* Abound/walk.scm 237 */
											long BgL_objzd2classzd2numz00_2518;

											BgL_objzd2classzd2numz00_2518 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2517);
											{	/* Abound/walk.scm 237 */
												obj_t BgL_arg2643z00_2519;

												BgL_arg2643z00_2519 =
													PROCEDURE_REF
													(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
													(int) (((long) 1)));
												{	/* Abound/walk.scm 237 */
													obj_t BgL_arrayz00_2521;

													int BgL_offsetz00_2522;

													BgL_arrayz00_2521 = BgL_arg2643z00_2519;
													BgL_offsetz00_2522 =
														(int) (BgL_objzd2classzd2numz00_2518);
													{	/* Abound/walk.scm 237 */
														long BgL_offsetz00_2523;

														BgL_offsetz00_2523 =
															((long) (BgL_offsetz00_2522) - OBJECT_TYPE);
														{	/* Abound/walk.scm 237 */
															long BgL_modz00_2524;

															{	/* Abound/walk.scm 237 */
																int BgL_arg2645z00_2525;

																BgL_arg2645z00_2525 = (int) (((long) 16));
																{	/* Abound/walk.scm 237 */
																	long BgL_auxz00_3645;

																	BgL_auxz00_3645 =
																		(long) (BgL_arg2645z00_2525);
																	BgL_modz00_2524 =
																		(BgL_offsetz00_2523 / BgL_auxz00_3645);
															}}
															{	/* Abound/walk.scm 237 */
																long BgL_restz00_2526;

																{	/* Abound/walk.scm 237 */
																	int BgL_arg2644z00_2527;

																	BgL_arg2644z00_2527 = (int) (((long) 16));
																	{	/* Abound/walk.scm 237 */
																		long BgL_auxz00_3649;

																		BgL_auxz00_3649 =
																			(long) (BgL_arg2644z00_2527);
																		BgL_restz00_2526 =
																			(BgL_offsetz00_2523 % BgL_auxz00_3649);
																}}
																{	/* Abound/walk.scm 237 */

																	BgL_method3385z00_2516 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2521,
																			(int) (BgL_modz00_2524)),
																		(int) (BgL_restz00_2526));
									}}}}}}}}
									BgL_res4008z00_2541 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_2516)
										(BgL_method3385z00_2516, (obj_t) (BgL_arg3905z00_1787),
											BEOA));
								}
								BgL_arg3904z00_1786 = BgL_res4008z00_2541;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1780))->BgL_msgz00) =
							((BgL_nodez00_bglt) BgL_arg3904z00_1786), BUNSPEC);
					}
					{	/* Abound/walk.scm 238 */
						BgL_nodez00_bglt BgL_arg3906z00_1788;

						{	/* Abound/walk.scm 238 */
							BgL_nodez00_bglt BgL_arg3908z00_1789;

							BgL_arg3908z00_1789 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1780))->BgL_objz00);
							{	/* Abound/walk.scm 238 */
								BgL_nodez00_bglt BgL_res4011z00_2571;

								{	/* Abound/walk.scm 238 */
									obj_t BgL_method3385z00_2546;

									{	/* Abound/walk.scm 238 */
										BgL_objectz00_bglt BgL_objz00_2547;

										BgL_objz00_2547 =
											(BgL_objectz00_bglt) (BgL_arg3908z00_1789);
										{	/* Abound/walk.scm 238 */
											long BgL_objzd2classzd2numz00_2548;

											BgL_objzd2classzd2numz00_2548 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2547);
											{	/* Abound/walk.scm 238 */
												obj_t BgL_arg2643z00_2549;

												BgL_arg2643z00_2549 =
													PROCEDURE_REF
													(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
													(int) (((long) 1)));
												{	/* Abound/walk.scm 238 */
													obj_t BgL_arrayz00_2551;

													int BgL_offsetz00_2552;

													BgL_arrayz00_2551 = BgL_arg2643z00_2549;
													BgL_offsetz00_2552 =
														(int) (BgL_objzd2classzd2numz00_2548);
													{	/* Abound/walk.scm 238 */
														long BgL_offsetz00_2553;

														BgL_offsetz00_2553 =
															((long) (BgL_offsetz00_2552) - OBJECT_TYPE);
														{	/* Abound/walk.scm 238 */
															long BgL_modz00_2554;

															{	/* Abound/walk.scm 238 */
																int BgL_arg2645z00_2555;

																BgL_arg2645z00_2555 = (int) (((long) 16));
																{	/* Abound/walk.scm 238 */
																	long BgL_auxz00_3670;

																	BgL_auxz00_3670 =
																		(long) (BgL_arg2645z00_2555);
																	BgL_modz00_2554 =
																		(BgL_offsetz00_2553 / BgL_auxz00_3670);
															}}
															{	/* Abound/walk.scm 238 */
																long BgL_restz00_2556;

																{	/* Abound/walk.scm 238 */
																	int BgL_arg2644z00_2557;

																	BgL_arg2644z00_2557 = (int) (((long) 16));
																	{	/* Abound/walk.scm 238 */
																		long BgL_auxz00_3674;

																		BgL_auxz00_3674 =
																			(long) (BgL_arg2644z00_2557);
																		BgL_restz00_2556 =
																			(BgL_offsetz00_2553 % BgL_auxz00_3674);
																}}
																{	/* Abound/walk.scm 238 */

																	BgL_method3385z00_2546 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2551,
																			(int) (BgL_modz00_2554)),
																		(int) (BgL_restz00_2556));
									}}}}}}}}
									BgL_res4011z00_2571 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_2546)
										(BgL_method3385z00_2546, (obj_t) (BgL_arg3908z00_1789),
											BEOA));
								}
								BgL_arg3906z00_1788 = BgL_res4011z00_2571;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1780))->BgL_objz00) =
							((BgL_nodez00_bglt) BgL_arg3906z00_1788), BUNSPEC);
					}
					BgL_auxz00_3610 = BgL_nodez00_1780;
					return (obj_t) (BgL_auxz00_3610);
				}
			}
		}
	}



/* abound-node-conditio3405 */
	obj_t BGl_aboundzd2nodezd2conditio3405z00zzabound_walkz00(obj_t
		BgL_envz00_2991, obj_t BgL_nodez00_2992)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 224 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1768;

				{	/* Abound/walk.scm 225 */
					BgL_conditionalz00_bglt BgL_auxz00_3688;

					BgL_nodez00_1768 = (BgL_conditionalz00_bglt) (BgL_nodez00_2992);
					{	/* Abound/walk.scm 226 */
						BgL_nodez00_bglt BgL_arg3895z00_1772;

						{	/* Abound/walk.scm 226 */
							BgL_nodez00_bglt BgL_arg3896z00_1773;

							BgL_arg3896z00_1773 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1768))->
								BgL_testz00);
							{	/* Abound/walk.scm 226 */
								BgL_nodez00_bglt BgL_res3996z00_2421;

								{	/* Abound/walk.scm 226 */
									obj_t BgL_method3385z00_2396;

									{	/* Abound/walk.scm 226 */
										BgL_objectz00_bglt BgL_objz00_2397;

										BgL_objz00_2397 =
											(BgL_objectz00_bglt) (BgL_arg3896z00_1773);
										{	/* Abound/walk.scm 226 */
											long BgL_objzd2classzd2numz00_2398;

											BgL_objzd2classzd2numz00_2398 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2397);
											{	/* Abound/walk.scm 226 */
												obj_t BgL_arg2643z00_2399;

												BgL_arg2643z00_2399 =
													PROCEDURE_REF
													(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
													(int) (((long) 1)));
												{	/* Abound/walk.scm 226 */
													obj_t BgL_arrayz00_2401;

													int BgL_offsetz00_2402;

													BgL_arrayz00_2401 = BgL_arg2643z00_2399;
													BgL_offsetz00_2402 =
														(int) (BgL_objzd2classzd2numz00_2398);
													{	/* Abound/walk.scm 226 */
														long BgL_offsetz00_2403;

														BgL_offsetz00_2403 =
															((long) (BgL_offsetz00_2402) - OBJECT_TYPE);
														{	/* Abound/walk.scm 226 */
															long BgL_modz00_2404;

															{	/* Abound/walk.scm 226 */
																int BgL_arg2645z00_2405;

																BgL_arg2645z00_2405 = (int) (((long) 16));
																{	/* Abound/walk.scm 226 */
																	long BgL_auxz00_3698;

																	BgL_auxz00_3698 =
																		(long) (BgL_arg2645z00_2405);
																	BgL_modz00_2404 =
																		(BgL_offsetz00_2403 / BgL_auxz00_3698);
															}}
															{	/* Abound/walk.scm 226 */
																long BgL_restz00_2406;

																{	/* Abound/walk.scm 226 */
																	int BgL_arg2644z00_2407;

																	BgL_arg2644z00_2407 = (int) (((long) 16));
																	{	/* Abound/walk.scm 226 */
																		long BgL_auxz00_3702;

																		BgL_auxz00_3702 =
																			(long) (BgL_arg2644z00_2407);
																		BgL_restz00_2406 =
																			(BgL_offsetz00_2403 % BgL_auxz00_3702);
																}}
																{	/* Abound/walk.scm 226 */

																	BgL_method3385z00_2396 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2401,
																			(int) (BgL_modz00_2404)),
																		(int) (BgL_restz00_2406));
									}}}}}}}}
									BgL_res3996z00_2421 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_2396)
										(BgL_method3385z00_2396, (obj_t) (BgL_arg3896z00_1773),
											BEOA));
								}
								BgL_arg3895z00_1772 = BgL_res3996z00_2421;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1768))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3895z00_1772), BUNSPEC);
					}
					{	/* Abound/walk.scm 227 */
						BgL_nodez00_bglt BgL_arg3897z00_1774;

						{	/* Abound/walk.scm 227 */
							BgL_nodez00_bglt BgL_arg3898z00_1775;

							BgL_arg3898z00_1775 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1768))->
								BgL_truez00);
							{	/* Abound/walk.scm 227 */
								BgL_nodez00_bglt BgL_res3999z00_2451;

								{	/* Abound/walk.scm 227 */
									obj_t BgL_method3385z00_2426;

									{	/* Abound/walk.scm 227 */
										BgL_objectz00_bglt BgL_objz00_2427;

										BgL_objz00_2427 =
											(BgL_objectz00_bglt) (BgL_arg3898z00_1775);
										{	/* Abound/walk.scm 227 */
											long BgL_objzd2classzd2numz00_2428;

											BgL_objzd2classzd2numz00_2428 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2427);
											{	/* Abound/walk.scm 227 */
												obj_t BgL_arg2643z00_2429;

												BgL_arg2643z00_2429 =
													PROCEDURE_REF
													(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
													(int) (((long) 1)));
												{	/* Abound/walk.scm 227 */
													obj_t BgL_arrayz00_2431;

													int BgL_offsetz00_2432;

													BgL_arrayz00_2431 = BgL_arg2643z00_2429;
													BgL_offsetz00_2432 =
														(int) (BgL_objzd2classzd2numz00_2428);
													{	/* Abound/walk.scm 227 */
														long BgL_offsetz00_2433;

														BgL_offsetz00_2433 =
															((long) (BgL_offsetz00_2432) - OBJECT_TYPE);
														{	/* Abound/walk.scm 227 */
															long BgL_modz00_2434;

															{	/* Abound/walk.scm 227 */
																int BgL_arg2645z00_2435;

																BgL_arg2645z00_2435 = (int) (((long) 16));
																{	/* Abound/walk.scm 227 */
																	long BgL_auxz00_3723;

																	BgL_auxz00_3723 =
																		(long) (BgL_arg2645z00_2435);
																	BgL_modz00_2434 =
																		(BgL_offsetz00_2433 / BgL_auxz00_3723);
															}}
															{	/* Abound/walk.scm 227 */
																long BgL_restz00_2436;

																{	/* Abound/walk.scm 227 */
																	int BgL_arg2644z00_2437;

																	BgL_arg2644z00_2437 = (int) (((long) 16));
																	{	/* Abound/walk.scm 227 */
																		long BgL_auxz00_3727;

																		BgL_auxz00_3727 =
																			(long) (BgL_arg2644z00_2437);
																		BgL_restz00_2436 =
																			(BgL_offsetz00_2433 % BgL_auxz00_3727);
																}}
																{	/* Abound/walk.scm 227 */

																	BgL_method3385z00_2426 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2431,
																			(int) (BgL_modz00_2434)),
																		(int) (BgL_restz00_2436));
									}}}}}}}}
									BgL_res3999z00_2451 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_2426)
										(BgL_method3385z00_2426, (obj_t) (BgL_arg3898z00_1775),
											BEOA));
								}
								BgL_arg3897z00_1774 = BgL_res3999z00_2451;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1768))->BgL_truez00) =
							((BgL_nodez00_bglt) BgL_arg3897z00_1774), BUNSPEC);
					}
					{	/* Abound/walk.scm 228 */
						BgL_nodez00_bglt BgL_arg3899z00_1776;

						{	/* Abound/walk.scm 228 */
							BgL_nodez00_bglt BgL_arg3900z00_1777;

							BgL_arg3900z00_1777 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1768))->
								BgL_falsez00);
							{	/* Abound/walk.scm 228 */
								BgL_nodez00_bglt BgL_res4002z00_2481;

								{	/* Abound/walk.scm 228 */
									obj_t BgL_method3385z00_2456;

									{	/* Abound/walk.scm 228 */
										BgL_objectz00_bglt BgL_objz00_2457;

										BgL_objz00_2457 =
											(BgL_objectz00_bglt) (BgL_arg3900z00_1777);
										{	/* Abound/walk.scm 228 */
											long BgL_objzd2classzd2numz00_2458;

											BgL_objzd2classzd2numz00_2458 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2457);
											{	/* Abound/walk.scm 228 */
												obj_t BgL_arg2643z00_2459;

												BgL_arg2643z00_2459 =
													PROCEDURE_REF
													(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
													(int) (((long) 1)));
												{	/* Abound/walk.scm 228 */
													obj_t BgL_arrayz00_2461;

													int BgL_offsetz00_2462;

													BgL_arrayz00_2461 = BgL_arg2643z00_2459;
													BgL_offsetz00_2462 =
														(int) (BgL_objzd2classzd2numz00_2458);
													{	/* Abound/walk.scm 228 */
														long BgL_offsetz00_2463;

														BgL_offsetz00_2463 =
															((long) (BgL_offsetz00_2462) - OBJECT_TYPE);
														{	/* Abound/walk.scm 228 */
															long BgL_modz00_2464;

															{	/* Abound/walk.scm 228 */
																int BgL_arg2645z00_2465;

																BgL_arg2645z00_2465 = (int) (((long) 16));
																{	/* Abound/walk.scm 228 */
																	long BgL_auxz00_3748;

																	BgL_auxz00_3748 =
																		(long) (BgL_arg2645z00_2465);
																	BgL_modz00_2464 =
																		(BgL_offsetz00_2463 / BgL_auxz00_3748);
															}}
															{	/* Abound/walk.scm 228 */
																long BgL_restz00_2466;

																{	/* Abound/walk.scm 228 */
																	int BgL_arg2644z00_2467;

																	BgL_arg2644z00_2467 = (int) (((long) 16));
																	{	/* Abound/walk.scm 228 */
																		long BgL_auxz00_3752;

																		BgL_auxz00_3752 =
																			(long) (BgL_arg2644z00_2467);
																		BgL_restz00_2466 =
																			(BgL_offsetz00_2463 % BgL_auxz00_3752);
																}}
																{	/* Abound/walk.scm 228 */

																	BgL_method3385z00_2456 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2461,
																			(int) (BgL_modz00_2464)),
																		(int) (BgL_restz00_2466));
									}}}}}}}}
									BgL_res4002z00_2481 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_2456)
										(BgL_method3385z00_2456, (obj_t) (BgL_arg3900z00_1777),
											BEOA));
								}
								BgL_arg3899z00_1776 = BgL_res4002z00_2481;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1768))->
								BgL_falsez00) =
							((BgL_nodez00_bglt) BgL_arg3899z00_1776), BUNSPEC);
					}
					BgL_auxz00_3688 = BgL_nodez00_1768;
					return (obj_t) (BgL_auxz00_3688);
				}
			}
		}
	}



/* abound-node-setq3403 */
	obj_t BGl_aboundzd2nodezd2setq3403z00zzabound_walkz00(obj_t BgL_envz00_2993,
		obj_t BgL_nodez00_2994)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 217 */
			{
				BgL_setqz00_bglt BgL_nodez00_1761;

				{	/* Abound/walk.scm 218 */
					BgL_setqz00_bglt BgL_auxz00_3766;

					BgL_nodez00_1761 = (BgL_setqz00_bglt) (BgL_nodez00_2994);
					{	/* Abound/walk.scm 218 */
						BgL_nodez00_bglt BgL_arg3892z00_1764;

						{	/* Abound/walk.scm 218 */
							BgL_nodez00_bglt BgL_arg3893z00_1765;

							BgL_arg3893z00_1765 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1761))->BgL_valuez00);
							{	/* Abound/walk.scm 218 */
								BgL_nodez00_bglt BgL_res3993z00_2391;

								{	/* Abound/walk.scm 218 */
									obj_t BgL_method3385z00_2366;

									{	/* Abound/walk.scm 218 */
										BgL_objectz00_bglt BgL_objz00_2367;

										BgL_objz00_2367 =
											(BgL_objectz00_bglt) (BgL_arg3893z00_1765);
										{	/* Abound/walk.scm 218 */
											long BgL_objzd2classzd2numz00_2368;

											BgL_objzd2classzd2numz00_2368 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2367);
											{	/* Abound/walk.scm 218 */
												obj_t BgL_arg2643z00_2369;

												BgL_arg2643z00_2369 =
													PROCEDURE_REF
													(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
													(int) (((long) 1)));
												{	/* Abound/walk.scm 218 */
													obj_t BgL_arrayz00_2371;

													int BgL_offsetz00_2372;

													BgL_arrayz00_2371 = BgL_arg2643z00_2369;
													BgL_offsetz00_2372 =
														(int) (BgL_objzd2classzd2numz00_2368);
													{	/* Abound/walk.scm 218 */
														long BgL_offsetz00_2373;

														BgL_offsetz00_2373 =
															((long) (BgL_offsetz00_2372) - OBJECT_TYPE);
														{	/* Abound/walk.scm 218 */
															long BgL_modz00_2374;

															{	/* Abound/walk.scm 218 */
																int BgL_arg2645z00_2375;

																BgL_arg2645z00_2375 = (int) (((long) 16));
																{	/* Abound/walk.scm 218 */
																	long BgL_auxz00_3776;

																	BgL_auxz00_3776 =
																		(long) (BgL_arg2645z00_2375);
																	BgL_modz00_2374 =
																		(BgL_offsetz00_2373 / BgL_auxz00_3776);
															}}
															{	/* Abound/walk.scm 218 */
																long BgL_restz00_2376;

																{	/* Abound/walk.scm 218 */
																	int BgL_arg2644z00_2377;

																	BgL_arg2644z00_2377 = (int) (((long) 16));
																	{	/* Abound/walk.scm 218 */
																		long BgL_auxz00_3780;

																		BgL_auxz00_3780 =
																			(long) (BgL_arg2644z00_2377);
																		BgL_restz00_2376 =
																			(BgL_offsetz00_2373 % BgL_auxz00_3780);
																}}
																{	/* Abound/walk.scm 218 */

																	BgL_method3385z00_2366 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2371,
																			(int) (BgL_modz00_2374)),
																		(int) (BgL_restz00_2376));
									}}}}}}}}
									BgL_res3993z00_2391 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_2366)
										(BgL_method3385z00_2366, (obj_t) (BgL_arg3893z00_1765),
											BEOA));
								}
								BgL_arg3892z00_1764 = BgL_res3993z00_2391;
						}}
						((((BgL_setqz00_bglt) CREF(BgL_nodez00_1761))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3892z00_1764), BUNSPEC);
					}
					BgL_auxz00_3766 = BgL_nodez00_1761;
					return (obj_t) (BgL_auxz00_3766);
				}
			}
		}
	}



/* abound-node-cast3401 */
	obj_t BGl_aboundzd2nodezd2cast3401z00zzabound_walkz00(obj_t BgL_envz00_2995,
		obj_t BgL_nodez00_2996)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 210 */
			{
				BgL_castz00_bglt BgL_nodez00_1755;

				{	/* Abound/walk.scm 211 */
					BgL_castz00_bglt BgL_auxz00_3794;

					BgL_nodez00_1755 = (BgL_castz00_bglt) (BgL_nodez00_2996);
					{	/* Abound/walk.scm 211 */
						BgL_nodez00_bglt BgL_arg3890z00_2335;

						BgL_arg3890z00_2335 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1755))->BgL_argz00);
						{	/* Abound/walk.scm 211 */
							BgL_nodez00_bglt BgL_res3990z00_2363;

							{	/* Abound/walk.scm 211 */
								obj_t BgL_method3385z00_2338;

								{	/* Abound/walk.scm 211 */
									BgL_objectz00_bglt BgL_objz00_2339;

									BgL_objz00_2339 = (BgL_objectz00_bglt) (BgL_arg3890z00_2335);
									{	/* Abound/walk.scm 211 */
										long BgL_objzd2classzd2numz00_2340;

										BgL_objzd2classzd2numz00_2340 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2339);
										{	/* Abound/walk.scm 211 */
											obj_t BgL_arg2643z00_2341;

											BgL_arg2643z00_2341 =
												PROCEDURE_REF
												(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
												(int) (((long) 1)));
											{	/* Abound/walk.scm 211 */
												obj_t BgL_arrayz00_2343;

												int BgL_offsetz00_2344;

												BgL_arrayz00_2343 = BgL_arg2643z00_2341;
												BgL_offsetz00_2344 =
													(int) (BgL_objzd2classzd2numz00_2340);
												{	/* Abound/walk.scm 211 */
													long BgL_offsetz00_2345;

													BgL_offsetz00_2345 =
														((long) (BgL_offsetz00_2344) - OBJECT_TYPE);
													{	/* Abound/walk.scm 211 */
														long BgL_modz00_2346;

														{	/* Abound/walk.scm 211 */
															int BgL_arg2645z00_2347;

															BgL_arg2645z00_2347 = (int) (((long) 16));
															{	/* Abound/walk.scm 211 */
																long BgL_auxz00_3804;

																BgL_auxz00_3804 = (long) (BgL_arg2645z00_2347);
																BgL_modz00_2346 =
																	(BgL_offsetz00_2345 / BgL_auxz00_3804);
														}}
														{	/* Abound/walk.scm 211 */
															long BgL_restz00_2348;

															{	/* Abound/walk.scm 211 */
																int BgL_arg2644z00_2349;

																BgL_arg2644z00_2349 = (int) (((long) 16));
																{	/* Abound/walk.scm 211 */
																	long BgL_auxz00_3808;

																	BgL_auxz00_3808 =
																		(long) (BgL_arg2644z00_2349);
																	BgL_restz00_2348 =
																		(BgL_offsetz00_2345 % BgL_auxz00_3808);
															}}
															{	/* Abound/walk.scm 211 */

																BgL_method3385z00_2338 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2343,
																		(int) (BgL_modz00_2346)),
																	(int) (BgL_restz00_2348));
								}}}}}}}}
								BgL_res3990z00_2363 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_2338)
									(BgL_method3385z00_2338, (obj_t) (BgL_arg3890z00_2335),
										BEOA));
							} BgL_res3990z00_2363;
					}}
					BgL_auxz00_3794 = BgL_nodez00_1755;
					return (obj_t) (BgL_auxz00_3794);
				}
			}
		}
	}



/* abound-node-vset!3399 */
	obj_t BGl_aboundzd2nodezd2vsetz123399z12zzabound_walkz00(obj_t
		BgL_envz00_2997, obj_t BgL_nodez00_2998)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 181 */
			{
				BgL_vsetz12z12_bglt BgL_nodez00_1624;

				BgL_nodez00_1624 = (BgL_vsetz12z12_bglt) (BgL_nodez00_2998);
				{

					{	/* Abound/walk.scm 181 */
						obj_t BgL_nextzd2method3398zd2_1753;

						BgL_nextzd2method3398zd2_1753 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_nodez00_1624),
							BGl_aboundzd2nodezd2envz00zzabound_walkz00,
							BGl_vsetz12z12zzast_nodez00);
						if (PROCEDUREP(BgL_nextzd2method3398zd2_1753))
							{	/* Abound/walk.scm 181 */
								PROCEDURE_ENTRY(BgL_nextzd2method3398zd2_1753)
									(BgL_nextzd2method3398zd2_1753, (obj_t) (BgL_nodez00_1624),
									BEOA);
							}
						else
							{	/* Abound/walk.scm 181 */
								{	/* Abound/walk.scm 181 */
									BgL_nodez00_bglt BgL_res3987z00_2334;

									{	/* Abound/walk.scm 181 */
										BgL_nodez00_bglt BgL_nodez00_2308;

										BgL_nodez00_2308 = (BgL_nodez00_bglt) (BgL_nodez00_1624);
										{	/* Abound/walk.scm 181 */
											obj_t BgL_method3385z00_2309;

											{	/* Abound/walk.scm 181 */
												BgL_objectz00_bglt BgL_objz00_2310;

												BgL_objz00_2310 =
													(BgL_objectz00_bglt) (BgL_nodez00_2308);
												{	/* Abound/walk.scm 181 */
													long BgL_objzd2classzd2numz00_2311;

													BgL_objzd2classzd2numz00_2311 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2310);
													{	/* Abound/walk.scm 181 */
														obj_t BgL_arg2643z00_2312;

														BgL_arg2643z00_2312 =
															PROCEDURE_REF
															(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
															(int) (((long) 1)));
														{	/* Abound/walk.scm 181 */
															obj_t BgL_arrayz00_2314;

															int BgL_offsetz00_2315;

															BgL_arrayz00_2314 = BgL_arg2643z00_2312;
															BgL_offsetz00_2315 =
																(int) (BgL_objzd2classzd2numz00_2311);
															{	/* Abound/walk.scm 181 */
																long BgL_offsetz00_2316;

																BgL_offsetz00_2316 =
																	((long) (BgL_offsetz00_2315) - OBJECT_TYPE);
																{	/* Abound/walk.scm 181 */
																	long BgL_modz00_2317;

																	{	/* Abound/walk.scm 181 */
																		int BgL_arg2645z00_2318;

																		BgL_arg2645z00_2318 = (int) (((long) 16));
																		{	/* Abound/walk.scm 181 */
																			long BgL_auxz00_3837;

																			BgL_auxz00_3837 =
																				(long) (BgL_arg2645z00_2318);
																			BgL_modz00_2317 =
																				(BgL_offsetz00_2316 / BgL_auxz00_3837);
																	}}
																	{	/* Abound/walk.scm 181 */
																		long BgL_restz00_2319;

																		{	/* Abound/walk.scm 181 */
																			int BgL_arg2644z00_2320;

																			BgL_arg2644z00_2320 = (int) (((long) 16));
																			{	/* Abound/walk.scm 181 */
																				long BgL_auxz00_3841;

																				BgL_auxz00_3841 =
																					(long) (BgL_arg2644z00_2320);
																				BgL_restz00_2319 =
																					(BgL_offsetz00_2316 %
																					BgL_auxz00_3841);
																		}}
																		{	/* Abound/walk.scm 181 */

																			BgL_method3385z00_2309 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2314,
																					(int) (BgL_modz00_2317)),
																				(int) (BgL_restz00_2319));
											}}}}}}}}
											BgL_res3987z00_2334 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3385z00_2309) (BgL_method3385z00_2309,
													(obj_t) (BgL_nodez00_2308), BEOA));
									}}
									(obj_t) (BgL_res3987z00_2334);
					}}}
					if ((((BgL_vsetz12z12_bglt) CREF(BgL_nodez00_1624))->BgL_unsafez00))
						{	/* Abound/walk.scm 184 */
							return (obj_t) (BgL_nodez00_1624);
						}
					else
						{	/* Abound/walk.scm 186 */
							obj_t BgL_vz00_1629;

							obj_t BgL_iz00_1630;

							obj_t BgL_lz00_1631;

							obj_t BgL_lnamez00_1632;

							obj_t BgL_lposz00_1633;

							BgL_vz00_1629 =
								BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
								(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											8))));
							BgL_iz00_1630 =
								BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
								(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											9))));
							BgL_lz00_1631 =
								BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
								(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											10))));
							{	/* Abound/walk.scm 189 */
								bool_t BgL_testz00_3865;

								{	/* Abound/walk.scm 189 */
									obj_t BgL_oz00_2246;

									{
										BgL_nodez00_bglt BgL_auxz00_3866;

										BgL_auxz00_3866 = (BgL_nodez00_bglt) (BgL_nodez00_1624);
										BgL_oz00_2246 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_3866))->BgL_locz00);
									}
									if (STRUCTP(BgL_oz00_2246))
										{	/* Abound/walk.scm 189 */
											BgL_testz00_3865 =
												(STRUCT_KEY(BgL_oz00_2246) ==
												CNST_TABLE_REF(((long) 11)));
										}
									else
										{	/* Abound/walk.scm 189 */
											BgL_testz00_3865 = ((bool_t) 0);
										}
								}
								if (BgL_testz00_3865)
									{	/* Abound/walk.scm 189 */
										obj_t BgL_arg3884z00_1748;

										{
											BgL_nodez00_bglt BgL_auxz00_3874;

											BgL_auxz00_3874 = (BgL_nodez00_bglt) (BgL_nodez00_1624);
											BgL_arg3884z00_1748 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_3874))->
												BgL_locz00);
										}
										BgL_lnamez00_1632 =
											BGl_locationzd2fullzd2fnamez00zztools_locationz00
											(BgL_arg3884z00_1748);
									}
								else
									{	/* Abound/walk.scm 189 */
										BgL_lnamez00_1632 = BFALSE;
									}
							}
							{	/* Abound/walk.scm 190 */
								bool_t BgL_testz00_3878;

								{	/* Abound/walk.scm 190 */
									obj_t BgL_oz00_2255;

									{
										BgL_nodez00_bglt BgL_auxz00_3879;

										BgL_auxz00_3879 = (BgL_nodez00_bglt) (BgL_nodez00_1624);
										BgL_oz00_2255 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_3879))->BgL_locz00);
									}
									if (STRUCTP(BgL_oz00_2255))
										{	/* Abound/walk.scm 190 */
											BgL_testz00_3878 =
												(STRUCT_KEY(BgL_oz00_2255) ==
												CNST_TABLE_REF(((long) 11)));
										}
									else
										{	/* Abound/walk.scm 190 */
											BgL_testz00_3878 = ((bool_t) 0);
										}
								}
								if (BgL_testz00_3878)
									{	/* Abound/walk.scm 190 */
										obj_t BgL_sz00_2264;

										{
											BgL_nodez00_bglt BgL_auxz00_3887;

											BgL_auxz00_3887 = (BgL_nodez00_bglt) (BgL_nodez00_1624);
											BgL_sz00_2264 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_3887))->
												BgL_locz00);
										}
										BgL_lposz00_1633 =
											STRUCT_REF(BgL_sz00_2264, (int) (((long) 1)));
									}
								else
									{	/* Abound/walk.scm 190 */
										BgL_lposz00_1633 = BFALSE;
									}
							}
							{	/* Abound/walk.scm 192 */
								obj_t BgL_arg3771z00_1634;

								obj_t BgL_arg3772z00_1635;

								{	/* Abound/walk.scm 192 */
									obj_t BgL_arg3773z00_1636;

									obj_t BgL_arg3774z00_1637;

									BgL_arg3773z00_1636 = CNST_TABLE_REF(((long) 12));
									{	/* Abound/walk.scm 192 */
										obj_t BgL_arg3775z00_1638;

										obj_t BgL_arg3776z00_1639;

										{	/* Abound/walk.scm 192 */
											obj_t BgL_arg3780z00_1643;

											obj_t BgL_arg3781z00_1644;

											{	/* Abound/walk.scm 192 */
												obj_t BgL_arg3782z00_1645;

												obj_t BgL_arg3783z00_1646;

												{	/* Abound/walk.scm 192 */
													obj_t BgL_arg3784z00_1647;

													{	/* Abound/walk.scm 192 */
														BgL_typez00_bglt BgL_obj1508z00_2267;

														BgL_obj1508z00_2267 =
															(((BgL_vsetz12z12_bglt) CREF(BgL_nodez00_1624))->
															BgL_vtypez00);
														BgL_arg3784z00_1647 =
															(((BgL_typez00_bglt) CREF(BgL_obj1508z00_2267))->
															BgL_idz00);
													}
													BgL_arg3782z00_1645 =
														BGl_makezd2typedzd2identz00zzast_identz00
														(BgL_vz00_1629, BgL_arg3784z00_1647);
												}
												{	/* Abound/walk.scm 192 */
													obj_t BgL_arg3786z00_1649;

													{	/* Abound/walk.scm 192 */
														obj_t BgL_pairz00_2269;

														{
															BgL_externz00_bglt BgL_auxz00_3896;

															BgL_auxz00_3896 =
																(BgL_externz00_bglt) (BgL_nodez00_1624);
															BgL_pairz00_2269 =
																(((BgL_externz00_bglt) CREF(BgL_auxz00_3896))->
																BgL_exprza2za2);
														}
														BgL_arg3786z00_1649 = CAR(BgL_pairz00_2269);
													}
													{	/* Abound/walk.scm 192 */
														obj_t BgL_list3788z00_1651;

														BgL_list3788z00_1651 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3783z00_1646 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3786z00_1649, BgL_list3788z00_1651);
												}}
												BgL_arg3780z00_1643 =
													MAKE_PAIR(BgL_arg3782z00_1645, BgL_arg3783z00_1646);
											}
											{	/* Abound/walk.scm 193 */
												obj_t BgL_arg3790z00_1653;

												{	/* Abound/walk.scm 193 */
													obj_t BgL_arg3793z00_1656;

													obj_t BgL_arg3794z00_1657;

													{	/* Abound/walk.scm 193 */
														obj_t BgL_arg3795z00_1658;

														{	/* Abound/walk.scm 193 */
															BgL_typez00_bglt BgL_obj1508z00_2271;

															BgL_obj1508z00_2271 =
																(((BgL_vsetz12z12_bglt)
																	CREF(BgL_nodez00_1624))->BgL_otypez00);
															BgL_arg3795z00_1658 =
																(((BgL_typez00_bglt)
																	CREF(BgL_obj1508z00_2271))->BgL_idz00);
														}
														BgL_arg3793z00_1656 =
															BGl_makezd2typedzd2identz00zzast_identz00
															(BgL_iz00_1630, BgL_arg3795z00_1658);
													}
													{	/* Abound/walk.scm 193 */
														obj_t BgL_arg3797z00_1660;

														{	/* Abound/walk.scm 193 */
															obj_t BgL_pairz00_2273;

															{
																BgL_externz00_bglt BgL_auxz00_3906;

																BgL_auxz00_3906 =
																	(BgL_externz00_bglt) (BgL_nodez00_1624);
																BgL_pairz00_2273 =
																	(((BgL_externz00_bglt)
																		CREF(BgL_auxz00_3906))->BgL_exprza2za2);
															}
															BgL_arg3797z00_1660 = CAR(CDR(BgL_pairz00_2273));
														}
														{	/* Abound/walk.scm 193 */
															obj_t BgL_list3799z00_1662;

															BgL_list3799z00_1662 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3794z00_1657 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3797z00_1660, BgL_list3799z00_1662);
													}}
													BgL_arg3790z00_1653 =
														MAKE_PAIR(BgL_arg3793z00_1656, BgL_arg3794z00_1657);
												}
												{	/* Abound/walk.scm 192 */
													obj_t BgL_list3792z00_1655;

													BgL_list3792z00_1655 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3781z00_1644 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg3790z00_1653, BgL_list3792z00_1655);
											}}
											BgL_arg3775z00_1638 =
												MAKE_PAIR(BgL_arg3780z00_1643, BgL_arg3781z00_1644);
										}
										{	/* Abound/walk.scm 194 */
											obj_t BgL_arg3801z00_1664;

											obj_t BgL_arg3803z00_1665;

											BgL_arg3801z00_1664 = CNST_TABLE_REF(((long) 12));
											{	/* Abound/walk.scm 194 */
												obj_t BgL_arg3804z00_1666;

												obj_t BgL_arg3805z00_1667;

												{	/* Abound/walk.scm 194 */
													obj_t BgL_arg3809z00_1671;

													{	/* Abound/walk.scm 194 */
														obj_t BgL_arg3811z00_1673;

														obj_t BgL_arg3812z00_1674;

														{	/* Abound/walk.scm 194 */
															obj_t BgL_arg3813z00_1675;

															{	/* Abound/walk.scm 194 */
																BgL_typez00_bglt BgL_obj1508z00_2278;

																BgL_obj1508z00_2278 =
																	(((BgL_vsetz12z12_bglt)
																		CREF(BgL_nodez00_1624))->BgL_otypez00);
																BgL_arg3813z00_1675 =
																	(((BgL_typez00_bglt)
																		CREF(BgL_obj1508z00_2278))->BgL_idz00);
															}
															BgL_arg3811z00_1673 =
																BGl_makezd2typedzd2identz00zzast_identz00
																(BgL_lz00_1631, BgL_arg3813z00_1675);
														}
														{	/* Abound/walk.scm 195 */
															obj_t BgL_arg3815z00_1677;

															{	/* Abound/walk.scm 195 */
																bool_t BgL_testz00_3921;

																{	/* Abound/walk.scm 195 */
																	BgL_typez00_bglt BgL_arg3825z00_1687;

																	BgL_arg3825z00_1687 =
																		(((BgL_vsetz12z12_bglt)
																			CREF(BgL_nodez00_1624))->BgL_vtypez00);
																	BgL_testz00_3921 =
																		((obj_t) (BgL_arg3825z00_1687) ==
																		BGl_za2vectorza2z00zztype_cachez00);
																}
																if (BgL_testz00_3921)
																	{	/* Abound/walk.scm 196 */
																		obj_t BgL_arg3819z00_1681;

																		obj_t BgL_arg3820z00_1682;

																		BgL_arg3819z00_1681 =
																			CNST_TABLE_REF(((long) 13));
																		{	/* Abound/walk.scm 196 */
																			obj_t BgL_list3821z00_1683;

																			BgL_list3821z00_1683 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3820z00_1682 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_vz00_1629, BgL_list3821z00_1683);
																		}
																		BgL_arg3815z00_1677 =
																			MAKE_PAIR(BgL_arg3819z00_1681,
																			BgL_arg3820z00_1682);
																	}
																else
																	{	/* Abound/walk.scm 197 */
																		obj_t BgL_arg3822z00_1684;

																		obj_t BgL_arg3823z00_1685;

																		BgL_arg3822z00_1684 =
																			CNST_TABLE_REF(((long) 14));
																		{	/* Abound/walk.scm 197 */
																			obj_t BgL_list3824z00_1686;

																			BgL_list3824z00_1686 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3823z00_1685 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_vz00_1629, BgL_list3824z00_1686);
																		}
																		BgL_arg3815z00_1677 =
																			MAKE_PAIR(BgL_arg3822z00_1684,
																			BgL_arg3823z00_1685);
															}}
															{	/* Abound/walk.scm 194 */
																obj_t BgL_list3817z00_1679;

																BgL_list3817z00_1679 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg3812z00_1674 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3815z00_1677, BgL_list3817z00_1679);
														}}
														BgL_arg3809z00_1671 =
															MAKE_PAIR(BgL_arg3811z00_1673,
															BgL_arg3812z00_1674);
													}
													BgL_arg3804z00_1666 =
														MAKE_PAIR(BgL_arg3809z00_1671, BNIL);
												}
												{	/* Abound/walk.scm 198 */
													obj_t BgL_arg3826z00_1688;

													obj_t BgL_arg3827z00_1689;

													BgL_arg3826z00_1688 = CNST_TABLE_REF(((long) 15));
													{	/* Abound/walk.scm 198 */
														obj_t BgL_arg3828z00_1690;

														BgL_vsetz12z12_bglt BgL_arg3829z00_1691;

														obj_t BgL_arg3830z00_1692;

														{	/* Abound/walk.scm 198 */
															obj_t BgL_arg3835z00_1697;

															obj_t BgL_arg3836z00_1698;

															BgL_arg3835z00_1697 = CNST_TABLE_REF(((long) 16));
															{	/* Abound/walk.scm 198 */
																obj_t BgL_list3837z00_1699;

																{	/* Abound/walk.scm 198 */
																	obj_t BgL_arg3838z00_1700;

																	BgL_arg3838z00_1700 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3837z00_1699 =
																		MAKE_PAIR(BgL_lz00_1631,
																		BgL_arg3838z00_1700);
																}
																BgL_arg3836z00_1698 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_iz00_1630, BgL_list3837z00_1699);
															}
															BgL_arg3828z00_1690 =
																MAKE_PAIR(BgL_arg3835z00_1697,
																BgL_arg3836z00_1698);
														}
														{	/* Abound/walk.scm 199 */
															BgL_vsetz12z12_bglt BgL_new3357z00_1702;

															{	/* Abound/walk.scm 199 */
																obj_t BgL_arg3839z00_1703;

																BgL_typez00_bglt BgL_arg3840z00_1704;

																obj_t BgL_arg3841z00_1705;

																obj_t BgL_arg3842z00_1706;

																obj_t BgL_arg3843z00_1707;

																obj_t BgL_arg3844z00_1708;

																obj_t BgL_arg3845z00_1709;

																BgL_typez00_bglt BgL_arg3846z00_1710;

																BgL_typez00_bglt BgL_arg3847z00_1711;

																BgL_typez00_bglt BgL_arg3848z00_1712;

																bool_t BgL_arg3849z00_1713;

																{
																	BgL_nodez00_bglt BgL_auxz00_3943;

																	BgL_auxz00_3943 =
																		(BgL_nodez00_bglt) (BgL_nodez00_1624);
																	BgL_arg3839z00_1703 =
																		(((BgL_nodez00_bglt)
																			CREF(BgL_auxz00_3943))->BgL_locz00);
																}
																{
																	BgL_nodez00_bglt BgL_auxz00_3946;

																	BgL_auxz00_3946 =
																		(BgL_nodez00_bglt) (BgL_nodez00_1624);
																	BgL_arg3840z00_1704 =
																		(((BgL_nodez00_bglt)
																			CREF(BgL_auxz00_3946))->BgL_typez00);
																}
																{
																	BgL_nodezf2effectzf2_bglt BgL_auxz00_3949;

																	BgL_auxz00_3949 =
																		(BgL_nodezf2effectzf2_bglt)
																		(BgL_nodez00_1624);
																	BgL_arg3841z00_1705 =
																		(((BgL_nodezf2effectzf2_bglt)
																			CREF(BgL_auxz00_3949))->
																		BgL_sidezd2effectzf3z21);
																}
																{
																	BgL_nodezf2effectzf2_bglt BgL_auxz00_3952;

																	BgL_auxz00_3952 =
																		(BgL_nodezf2effectzf2_bglt)
																		(BgL_nodez00_1624);
																	BgL_arg3842z00_1706 =
																		(((BgL_nodezf2effectzf2_bglt)
																			CREF(BgL_auxz00_3952))->BgL_keyz00);
																}
																{	/* Abound/walk.scm 200 */
																	obj_t BgL_arg3850z00_1714;

																	{	/* Abound/walk.scm 200 */
																		obj_t BgL_pairz00_2285;

																		{
																			BgL_externz00_bglt BgL_auxz00_3955;

																			BgL_auxz00_3955 =
																				(BgL_externz00_bglt) (BgL_nodez00_1624);
																			BgL_pairz00_2285 =
																				(((BgL_externz00_bglt)
																					CREF(BgL_auxz00_3955))->
																				BgL_exprza2za2);
																		}
																		BgL_arg3850z00_1714 =
																			CAR(CDR(CDR(BgL_pairz00_2285)));
																	}
																	{	/* Abound/walk.scm 200 */
																		obj_t BgL_list3851z00_1715;

																		{	/* Abound/walk.scm 200 */
																			obj_t BgL_arg3852z00_1716;

																			{	/* Abound/walk.scm 200 */
																				obj_t BgL_arg3853z00_1717;

																				BgL_arg3853z00_1717 =
																					MAKE_PAIR(BgL_arg3850z00_1714, BNIL);
																				BgL_arg3852z00_1716 =
																					MAKE_PAIR(BgL_iz00_1630,
																					BgL_arg3853z00_1717);
																			}
																			BgL_list3851z00_1715 =
																				MAKE_PAIR(BgL_vz00_1629,
																				BgL_arg3852z00_1716);
																		}
																		BgL_arg3843z00_1707 = BgL_list3851z00_1715;
																}}
																{
																	BgL_externz00_bglt BgL_auxz00_3964;

																	BgL_auxz00_3964 =
																		(BgL_externz00_bglt) (BgL_nodez00_1624);
																	BgL_arg3844z00_1708 =
																		(((BgL_externz00_bglt)
																			CREF(BgL_auxz00_3964))->BgL_effectz00);
																}
																BgL_arg3845z00_1709 =
																	(((BgL_vsetz12z12_bglt)
																		CREF(BgL_nodez00_1624))->BgL_czd2formatzd2);
																BgL_arg3846z00_1710 =
																	(((BgL_vsetz12z12_bglt)
																		CREF(BgL_nodez00_1624))->BgL_ftypez00);
																BgL_arg3847z00_1711 =
																	(((BgL_vsetz12z12_bglt)
																		CREF(BgL_nodez00_1624))->BgL_otypez00);
																BgL_arg3848z00_1712 =
																	(((BgL_vsetz12z12_bglt)
																		CREF(BgL_nodez00_1624))->BgL_vtypez00);
																BgL_arg3849z00_1713 =
																	(((BgL_vsetz12z12_bglt)
																		CREF(BgL_nodez00_1624))->BgL_unsafez00);
																BgL_new3357z00_1702 =
																	BGl_makezd2vsetz12zc0zzast_nodez00
																	(BgL_arg3839z00_1703, BgL_arg3840z00_1704,
																	BgL_arg3841z00_1705, BgL_arg3842z00_1706,
																	BgL_arg3843z00_1707, BgL_arg3844z00_1708,
																	BgL_arg3845z00_1709, BgL_arg3846z00_1710,
																	BgL_arg3847z00_1711, BgL_arg3848z00_1712,
																	BgL_arg3849z00_1713);
															}
															{	/* Abound/walk.scm 199 */

																BgL_arg3829z00_1691 = BgL_new3357z00_1702;
														}}
														{	/* Abound/walk.scm 201 */
															obj_t BgL_arg3855z00_1719;

															obj_t BgL_arg3856z00_1720;

															BgL_arg3855z00_1719 = CNST_TABLE_REF(((long) 17));
															{	/* Abound/walk.scm 202 */
																obj_t BgL_arg3857z00_1721;

																{	/* Abound/walk.scm 202 */
																	obj_t BgL_arg3862z00_1726;

																	obj_t BgL_arg3863z00_1727;

																	{	/* Abound/walk.scm 202 */
																		obj_t BgL_arg3864z00_1728;

																		obj_t BgL_arg3865z00_1729;

																		BgL_arg3864z00_1728 =
																			CNST_TABLE_REF(((long) 18));
																		{	/* Abound/walk.scm 202 */
																			obj_t BgL_list3866z00_1730;

																			{	/* Abound/walk.scm 202 */
																				obj_t BgL_arg3867z00_1731;

																				obj_t BgL_arg3868z00_1732;

																				BgL_arg3867z00_1731 =
																					CNST_TABLE_REF(((long) 19));
																				BgL_arg3868z00_1732 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list3866z00_1730 =
																					MAKE_PAIR(BgL_arg3867z00_1731,
																					BgL_arg3868z00_1732);
																			}
																			BgL_arg3865z00_1729 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(CNST_TABLE_REF(((long) 20)),
																				BgL_list3866z00_1730);
																		}
																		BgL_arg3862z00_1726 =
																			MAKE_PAIR(BgL_arg3864z00_1728,
																			BgL_arg3865z00_1729);
																	}
																	{	/* Abound/walk.scm 202 */
																		obj_t BgL_arg3870z00_1734;

																		obj_t BgL_arg3871z00_1735;

																		{	/* Abound/walk.scm 203 */
																			obj_t BgL_pairz00_2300;

																			{
																				BgL_externz00_bglt BgL_auxz00_3981;

																				BgL_auxz00_3981 =
																					(BgL_externz00_bglt)
																					(BgL_nodez00_1624);
																				BgL_pairz00_2300 =
																					(((BgL_externz00_bglt)
																						CREF(BgL_auxz00_3981))->
																					BgL_exprza2za2);
																			}
																			BgL_arg3870z00_1734 =
																				CAR(CDR(BgL_pairz00_2300));
																		}
																		{	/* Abound/walk.scm 203 */
																			obj_t BgL_pairz00_2305;

																			{
																				BgL_externz00_bglt BgL_auxz00_3986;

																				BgL_auxz00_3986 =
																					(BgL_externz00_bglt)
																					(BgL_nodez00_1624);
																				BgL_pairz00_2305 =
																					(((BgL_externz00_bglt)
																						CREF(BgL_auxz00_3986))->
																					BgL_exprza2za2);
																			}
																			BgL_arg3871z00_1735 =
																				CAR(BgL_pairz00_2305);
																		}
																		{	/* Abound/walk.scm 202 */
																			obj_t BgL_list3873z00_1737;

																			{	/* Abound/walk.scm 202 */
																				obj_t BgL_arg3874z00_1738;

																				{	/* Abound/walk.scm 202 */
																					obj_t BgL_arg3875z00_1739;

																					{	/* Abound/walk.scm 202 */
																						obj_t BgL_arg3876z00_1740;

																						{	/* Abound/walk.scm 202 */
																							obj_t BgL_arg3877z00_1741;

																							BgL_arg3877z00_1741 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3876z00_1740 =
																								MAKE_PAIR(BgL_arg3871z00_1735,
																								BgL_arg3877z00_1741);
																						}
																						BgL_arg3875z00_1739 =
																							MAKE_PAIR(BgL_arg3870z00_1734,
																							BgL_arg3876z00_1740);
																					}
																					BgL_arg3874z00_1738 =
																						MAKE_PAIR
																						(BGl_string4076z00zzabound_walkz00,
																						BgL_arg3875z00_1739);
																				}
																				BgL_list3873z00_1737 =
																					MAKE_PAIR(BgL_lposz00_1633,
																					BgL_arg3874z00_1738);
																			}
																			BgL_arg3863z00_1727 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_lnamez00_1632,
																				BgL_list3873z00_1737);
																	}}
																	BgL_arg3857z00_1721 =
																		MAKE_PAIR(BgL_arg3862z00_1726,
																		BgL_arg3863z00_1727);
																}
																{	/* Abound/walk.scm 201 */
																	obj_t BgL_list3859z00_1723;

																	{	/* Abound/walk.scm 201 */
																		obj_t BgL_arg3860z00_1724;

																		{	/* Abound/walk.scm 201 */
																			obj_t BgL_arg3861z00_1725;

																			BgL_arg3861z00_1725 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3860z00_1724 =
																				MAKE_PAIR(BFALSE, BgL_arg3861z00_1725);
																		}
																		BgL_list3859z00_1723 =
																			MAKE_PAIR(BFALSE, BgL_arg3860z00_1724);
																	}
																	BgL_arg3856z00_1720 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3857z00_1721, BgL_list3859z00_1723);
															}}
															BgL_arg3830z00_1692 =
																MAKE_PAIR(BgL_arg3855z00_1719,
																BgL_arg3856z00_1720);
														}
														{	/* Abound/walk.scm 198 */
															obj_t BgL_list3832z00_1694;

															{	/* Abound/walk.scm 198 */
																obj_t BgL_arg3833z00_1695;

																{	/* Abound/walk.scm 198 */
																	obj_t BgL_arg3834z00_1696;

																	BgL_arg3834z00_1696 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg3833z00_1695 =
																		MAKE_PAIR(BgL_arg3830z00_1692,
																		BgL_arg3834z00_1696);
																}
																BgL_list3832z00_1694 =
																	MAKE_PAIR(
																	(obj_t) (BgL_arg3829z00_1691),
																	BgL_arg3833z00_1695);
															}
															BgL_arg3827z00_1689 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3828z00_1690, BgL_list3832z00_1694);
													}}
													BgL_arg3805z00_1667 =
														MAKE_PAIR(BgL_arg3826z00_1688, BgL_arg3827z00_1689);
												}
												{	/* Abound/walk.scm 194 */
													obj_t BgL_list3807z00_1669;

													{	/* Abound/walk.scm 194 */
														obj_t BgL_arg3808z00_1670;

														BgL_arg3808z00_1670 = MAKE_PAIR(BNIL, BNIL);
														BgL_list3807z00_1669 =
															MAKE_PAIR(BgL_arg3805z00_1667,
															BgL_arg3808z00_1670);
													}
													BgL_arg3803z00_1665 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg3804z00_1666, BgL_list3807z00_1669);
											}}
											BgL_arg3776z00_1639 =
												MAKE_PAIR(BgL_arg3801z00_1664, BgL_arg3803z00_1665);
										}
										{	/* Abound/walk.scm 192 */
											obj_t BgL_list3778z00_1641;

											{	/* Abound/walk.scm 192 */
												obj_t BgL_arg3779z00_1642;

												BgL_arg3779z00_1642 = MAKE_PAIR(BNIL, BNIL);
												BgL_list3778z00_1641 =
													MAKE_PAIR(BgL_arg3776z00_1639, BgL_arg3779z00_1642);
											}
											BgL_arg3774z00_1637 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3775z00_1638, BgL_list3778z00_1641);
									}}
									BgL_arg3771z00_1634 =
										MAKE_PAIR(BgL_arg3773z00_1636, BgL_arg3774z00_1637);
								}
								{
									BgL_nodez00_bglt BgL_auxz00_4016;

									BgL_auxz00_4016 = (BgL_nodez00_bglt) (BgL_nodez00_1624);
									BgL_arg3772z00_1635 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_4016))->BgL_locz00);
								}
								return
									(obj_t) (BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
									(BgL_arg3771z00_1634, BgL_arg3772z00_1635));
							}
						}
				}
			}
		}
	}



/* abound-node-vref3397 */
	obj_t BGl_aboundzd2nodezd2vref3397z00zzabound_walkz00(obj_t BgL_envz00_2999,
		obj_t BgL_nodez00_3000)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 150 */
			{
				BgL_vrefz00_bglt BgL_nodez00_1496;

				BgL_nodez00_1496 = (BgL_vrefz00_bglt) (BgL_nodez00_3000);
				{

					{	/* Abound/walk.scm 150 */
						obj_t BgL_nextzd2method3396zd2_1622;

						BgL_nextzd2method3396zd2_1622 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							(BgL_objectz00_bglt) (BgL_nodez00_1496),
							BGl_aboundzd2nodezd2envz00zzabound_walkz00,
							BGl_vrefz00zzast_nodez00);
						if (PROCEDUREP(BgL_nextzd2method3396zd2_1622))
							{	/* Abound/walk.scm 150 */
								PROCEDURE_ENTRY(BgL_nextzd2method3396zd2_1622)
									(BgL_nextzd2method3396zd2_1622, (obj_t) (BgL_nodez00_1496),
									BEOA);
							}
						else
							{	/* Abound/walk.scm 150 */
								{	/* Abound/walk.scm 150 */
									BgL_nodez00_bglt BgL_res3981z00_2243;

									{	/* Abound/walk.scm 150 */
										BgL_nodez00_bglt BgL_nodez00_2217;

										BgL_nodez00_2217 = (BgL_nodez00_bglt) (BgL_nodez00_1496);
										{	/* Abound/walk.scm 150 */
											obj_t BgL_method3385z00_2218;

											{	/* Abound/walk.scm 150 */
												BgL_objectz00_bglt BgL_objz00_2219;

												BgL_objz00_2219 =
													(BgL_objectz00_bglt) (BgL_nodez00_2217);
												{	/* Abound/walk.scm 150 */
													long BgL_objzd2classzd2numz00_2220;

													BgL_objzd2classzd2numz00_2220 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2219);
													{	/* Abound/walk.scm 150 */
														obj_t BgL_arg2643z00_2221;

														BgL_arg2643z00_2221 =
															PROCEDURE_REF
															(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
															(int) (((long) 1)));
														{	/* Abound/walk.scm 150 */
															obj_t BgL_arrayz00_2223;

															int BgL_offsetz00_2224;

															BgL_arrayz00_2223 = BgL_arg2643z00_2221;
															BgL_offsetz00_2224 =
																(int) (BgL_objzd2classzd2numz00_2220);
															{	/* Abound/walk.scm 150 */
																long BgL_offsetz00_2225;

																BgL_offsetz00_2225 =
																	((long) (BgL_offsetz00_2224) - OBJECT_TYPE);
																{	/* Abound/walk.scm 150 */
																	long BgL_modz00_2226;

																	{	/* Abound/walk.scm 150 */
																		int BgL_arg2645z00_2227;

																		BgL_arg2645z00_2227 = (int) (((long) 16));
																		{	/* Abound/walk.scm 150 */
																			long BgL_auxz00_4038;

																			BgL_auxz00_4038 =
																				(long) (BgL_arg2645z00_2227);
																			BgL_modz00_2226 =
																				(BgL_offsetz00_2225 / BgL_auxz00_4038);
																	}}
																	{	/* Abound/walk.scm 150 */
																		long BgL_restz00_2228;

																		{	/* Abound/walk.scm 150 */
																			int BgL_arg2644z00_2229;

																			BgL_arg2644z00_2229 = (int) (((long) 16));
																			{	/* Abound/walk.scm 150 */
																				long BgL_auxz00_4042;

																				BgL_auxz00_4042 =
																					(long) (BgL_arg2644z00_2229);
																				BgL_restz00_2228 =
																					(BgL_offsetz00_2225 %
																					BgL_auxz00_4042);
																		}}
																		{	/* Abound/walk.scm 150 */

																			BgL_method3385z00_2218 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2223,
																					(int) (BgL_modz00_2226)),
																				(int) (BgL_restz00_2228));
											}}}}}}}}
											BgL_res3981z00_2243 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3385z00_2218) (BgL_method3385z00_2218,
													(obj_t) (BgL_nodez00_2217), BEOA));
									}}
									(obj_t) (BgL_res3981z00_2243);
					}}}
					if ((((BgL_vrefz00_bglt) CREF(BgL_nodez00_1496))->BgL_unsafez00))
						{	/* Abound/walk.scm 153 */
							return (obj_t) (BgL_nodez00_1496);
						}
					else
						{	/* Abound/walk.scm 155 */
							obj_t BgL_vz00_1501;

							obj_t BgL_iz00_1502;

							obj_t BgL_lz00_1503;

							obj_t BgL_lnamez00_1504;

							obj_t BgL_lposz00_1505;

							BgL_vz00_1501 =
								BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
								(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											8))));
							BgL_iz00_1502 =
								BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
								(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											9))));
							BgL_lz00_1503 =
								BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
								(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											10))));
							{	/* Abound/walk.scm 158 */
								bool_t BgL_testz00_4066;

								{	/* Abound/walk.scm 158 */
									obj_t BgL_oz00_2162;

									{
										BgL_nodez00_bglt BgL_auxz00_4067;

										BgL_auxz00_4067 = (BgL_nodez00_bglt) (BgL_nodez00_1496);
										BgL_oz00_2162 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_4067))->BgL_locz00);
									}
									if (STRUCTP(BgL_oz00_2162))
										{	/* Abound/walk.scm 158 */
											BgL_testz00_4066 =
												(STRUCT_KEY(BgL_oz00_2162) ==
												CNST_TABLE_REF(((long) 11)));
										}
									else
										{	/* Abound/walk.scm 158 */
											BgL_testz00_4066 = ((bool_t) 0);
										}
								}
								if (BgL_testz00_4066)
									{	/* Abound/walk.scm 158 */
										obj_t BgL_arg3764z00_1617;

										{
											BgL_nodez00_bglt BgL_auxz00_4075;

											BgL_auxz00_4075 = (BgL_nodez00_bglt) (BgL_nodez00_1496);
											BgL_arg3764z00_1617 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_4075))->
												BgL_locz00);
										}
										BgL_lnamez00_1504 =
											BGl_locationzd2fullzd2fnamez00zztools_locationz00
											(BgL_arg3764z00_1617);
									}
								else
									{	/* Abound/walk.scm 158 */
										BgL_lnamez00_1504 = BFALSE;
									}
							}
							{	/* Abound/walk.scm 159 */
								bool_t BgL_testz00_4079;

								{	/* Abound/walk.scm 159 */
									obj_t BgL_oz00_2171;

									{
										BgL_nodez00_bglt BgL_auxz00_4080;

										BgL_auxz00_4080 = (BgL_nodez00_bglt) (BgL_nodez00_1496);
										BgL_oz00_2171 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_4080))->BgL_locz00);
									}
									if (STRUCTP(BgL_oz00_2171))
										{	/* Abound/walk.scm 159 */
											BgL_testz00_4079 =
												(STRUCT_KEY(BgL_oz00_2171) ==
												CNST_TABLE_REF(((long) 11)));
										}
									else
										{	/* Abound/walk.scm 159 */
											BgL_testz00_4079 = ((bool_t) 0);
										}
								}
								if (BgL_testz00_4079)
									{	/* Abound/walk.scm 159 */
										obj_t BgL_sz00_2180;

										{
											BgL_nodez00_bglt BgL_auxz00_4088;

											BgL_auxz00_4088 = (BgL_nodez00_bglt) (BgL_nodez00_1496);
											BgL_sz00_2180 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_4088))->
												BgL_locz00);
										}
										BgL_lposz00_1505 =
											STRUCT_REF(BgL_sz00_2180, (int) (((long) 1)));
									}
								else
									{	/* Abound/walk.scm 159 */
										BgL_lposz00_1505 = BFALSE;
									}
							}
							{	/* Abound/walk.scm 161 */
								obj_t BgL_arg3652z00_1506;

								obj_t BgL_arg3653z00_1507;

								{	/* Abound/walk.scm 161 */
									obj_t BgL_arg3654z00_1508;

									obj_t BgL_arg3655z00_1509;

									BgL_arg3654z00_1508 = CNST_TABLE_REF(((long) 12));
									{	/* Abound/walk.scm 161 */
										obj_t BgL_arg3656z00_1510;

										obj_t BgL_arg3657z00_1511;

										{	/* Abound/walk.scm 161 */
											obj_t BgL_arg3661z00_1515;

											obj_t BgL_arg3662z00_1516;

											{	/* Abound/walk.scm 161 */
												obj_t BgL_arg3663z00_1517;

												obj_t BgL_arg3664z00_1518;

												{	/* Abound/walk.scm 161 */
													obj_t BgL_arg3665z00_1519;

													{	/* Abound/walk.scm 161 */
														BgL_typez00_bglt BgL_obj1508z00_2183;

														BgL_obj1508z00_2183 =
															(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1496))->
															BgL_vtypez00);
														BgL_arg3665z00_1519 =
															(((BgL_typez00_bglt) CREF(BgL_obj1508z00_2183))->
															BgL_idz00);
													}
													BgL_arg3663z00_1517 =
														BGl_makezd2typedzd2identz00zzast_identz00
														(BgL_vz00_1501, BgL_arg3665z00_1519);
												}
												{	/* Abound/walk.scm 162 */
													obj_t BgL_arg3667z00_1521;

													{	/* Abound/walk.scm 162 */
														obj_t BgL_pairz00_2185;

														{
															BgL_externz00_bglt BgL_auxz00_4097;

															BgL_auxz00_4097 =
																(BgL_externz00_bglt) (BgL_nodez00_1496);
															BgL_pairz00_2185 =
																(((BgL_externz00_bglt) CREF(BgL_auxz00_4097))->
																BgL_exprza2za2);
														}
														BgL_arg3667z00_1521 = CAR(BgL_pairz00_2185);
													}
													{	/* Abound/walk.scm 161 */
														obj_t BgL_list3669z00_1523;

														BgL_list3669z00_1523 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3664z00_1518 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3667z00_1521, BgL_list3669z00_1523);
												}}
												BgL_arg3661z00_1515 =
													MAKE_PAIR(BgL_arg3663z00_1517, BgL_arg3664z00_1518);
											}
											{	/* Abound/walk.scm 163 */
												obj_t BgL_arg3671z00_1525;

												{	/* Abound/walk.scm 163 */
													obj_t BgL_arg3674z00_1528;

													obj_t BgL_arg3675z00_1529;

													{	/* Abound/walk.scm 163 */
														obj_t BgL_arg3677z00_1530;

														{	/* Abound/walk.scm 163 */
															BgL_typez00_bglt BgL_obj1508z00_2187;

															BgL_obj1508z00_2187 =
																(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1496))->
																BgL_otypez00);
															BgL_arg3677z00_1530 =
																(((BgL_typez00_bglt)
																	CREF(BgL_obj1508z00_2187))->BgL_idz00);
														}
														BgL_arg3674z00_1528 =
															BGl_makezd2typedzd2identz00zzast_identz00
															(BgL_iz00_1502, BgL_arg3677z00_1530);
													}
													{	/* Abound/walk.scm 164 */
														obj_t BgL_arg3679z00_1532;

														{	/* Abound/walk.scm 164 */
															obj_t BgL_pairz00_2189;

															{
																BgL_externz00_bglt BgL_auxz00_4107;

																BgL_auxz00_4107 =
																	(BgL_externz00_bglt) (BgL_nodez00_1496);
																BgL_pairz00_2189 =
																	(((BgL_externz00_bglt)
																		CREF(BgL_auxz00_4107))->BgL_exprza2za2);
															}
															BgL_arg3679z00_1532 = CAR(CDR(BgL_pairz00_2189));
														}
														{	/* Abound/walk.scm 163 */
															obj_t BgL_list3681z00_1534;

															BgL_list3681z00_1534 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3675z00_1529 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3679z00_1532, BgL_list3681z00_1534);
													}}
													BgL_arg3671z00_1525 =
														MAKE_PAIR(BgL_arg3674z00_1528, BgL_arg3675z00_1529);
												}
												{	/* Abound/walk.scm 161 */
													obj_t BgL_list3673z00_1527;

													BgL_list3673z00_1527 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3662z00_1516 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg3671z00_1525, BgL_list3673z00_1527);
											}}
											BgL_arg3656z00_1510 =
												MAKE_PAIR(BgL_arg3661z00_1515, BgL_arg3662z00_1516);
										}
										{	/* Abound/walk.scm 165 */
											obj_t BgL_arg3683z00_1536;

											obj_t BgL_arg3684z00_1537;

											BgL_arg3683z00_1536 = CNST_TABLE_REF(((long) 12));
											{	/* Abound/walk.scm 165 */
												obj_t BgL_arg3685z00_1538;

												obj_t BgL_arg3686z00_1539;

												{	/* Abound/walk.scm 165 */
													obj_t BgL_arg3690z00_1543;

													{	/* Abound/walk.scm 165 */
														obj_t BgL_arg3692z00_1545;

														obj_t BgL_arg3693z00_1546;

														{	/* Abound/walk.scm 165 */
															obj_t BgL_arg3694z00_1547;

															{	/* Abound/walk.scm 165 */
																BgL_typez00_bglt BgL_obj1508z00_2194;

																BgL_obj1508z00_2194 =
																	(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1496))->
																	BgL_otypez00);
																BgL_arg3694z00_1547 =
																	(((BgL_typez00_bglt)
																		CREF(BgL_obj1508z00_2194))->BgL_idz00);
															}
															BgL_arg3692z00_1545 =
																BGl_makezd2typedzd2identz00zzast_identz00
																(BgL_lz00_1503, BgL_arg3694z00_1547);
														}
														{	/* Abound/walk.scm 166 */
															obj_t BgL_arg3696z00_1549;

															{	/* Abound/walk.scm 166 */
																bool_t BgL_testz00_4122;

																{	/* Abound/walk.scm 166 */
																	BgL_typez00_bglt BgL_arg3706z00_1559;

																	BgL_arg3706z00_1559 =
																		(((BgL_vrefz00_bglt)
																			CREF(BgL_nodez00_1496))->BgL_vtypez00);
																	BgL_testz00_4122 =
																		((obj_t) (BgL_arg3706z00_1559) ==
																		BGl_za2vectorza2z00zztype_cachez00);
																}
																if (BgL_testz00_4122)
																	{	/* Abound/walk.scm 167 */
																		obj_t BgL_arg3700z00_1553;

																		obj_t BgL_arg3701z00_1554;

																		BgL_arg3700z00_1553 =
																			CNST_TABLE_REF(((long) 13));
																		{	/* Abound/walk.scm 167 */
																			obj_t BgL_list3702z00_1555;

																			BgL_list3702z00_1555 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3701z00_1554 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_vz00_1501, BgL_list3702z00_1555);
																		}
																		BgL_arg3696z00_1549 =
																			MAKE_PAIR(BgL_arg3700z00_1553,
																			BgL_arg3701z00_1554);
																	}
																else
																	{	/* Abound/walk.scm 168 */
																		obj_t BgL_arg3703z00_1556;

																		obj_t BgL_arg3704z00_1557;

																		BgL_arg3703z00_1556 =
																			CNST_TABLE_REF(((long) 14));
																		{	/* Abound/walk.scm 168 */
																			obj_t BgL_list3705z00_1558;

																			BgL_list3705z00_1558 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3704z00_1557 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_vz00_1501, BgL_list3705z00_1558);
																		}
																		BgL_arg3696z00_1549 =
																			MAKE_PAIR(BgL_arg3703z00_1556,
																			BgL_arg3704z00_1557);
															}}
															{	/* Abound/walk.scm 165 */
																obj_t BgL_list3698z00_1551;

																BgL_list3698z00_1551 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg3693z00_1546 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3696z00_1549, BgL_list3698z00_1551);
														}}
														BgL_arg3690z00_1543 =
															MAKE_PAIR(BgL_arg3692z00_1545,
															BgL_arg3693z00_1546);
													}
													BgL_arg3685z00_1538 =
														MAKE_PAIR(BgL_arg3690z00_1543, BNIL);
												}
												{	/* Abound/walk.scm 169 */
													obj_t BgL_arg3707z00_1560;

													obj_t BgL_arg3708z00_1561;

													BgL_arg3707z00_1560 = CNST_TABLE_REF(((long) 15));
													{	/* Abound/walk.scm 169 */
														obj_t BgL_arg3709z00_1562;

														BgL_vrefz00_bglt BgL_arg3710z00_1563;

														obj_t BgL_arg3711z00_1564;

														{	/* Abound/walk.scm 169 */
															obj_t BgL_arg3716z00_1569;

															obj_t BgL_arg3717z00_1570;

															BgL_arg3716z00_1569 = CNST_TABLE_REF(((long) 16));
															{	/* Abound/walk.scm 169 */
																obj_t BgL_list3718z00_1571;

																{	/* Abound/walk.scm 169 */
																	obj_t BgL_arg3719z00_1572;

																	BgL_arg3719z00_1572 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3718z00_1571 =
																		MAKE_PAIR(BgL_lz00_1503,
																		BgL_arg3719z00_1572);
																}
																BgL_arg3717z00_1570 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_iz00_1502, BgL_list3718z00_1571);
															}
															BgL_arg3709z00_1562 =
																MAKE_PAIR(BgL_arg3716z00_1569,
																BgL_arg3717z00_1570);
														}
														{	/* Abound/walk.scm 170 */
															BgL_vrefz00_bglt BgL_new3353z00_1574;

															{	/* Abound/walk.scm 170 */
																obj_t BgL_arg3720z00_1575;

																BgL_typez00_bglt BgL_arg3721z00_1576;

																obj_t BgL_arg3722z00_1577;

																obj_t BgL_arg3723z00_1578;

																obj_t BgL_arg3724z00_1579;

																obj_t BgL_arg3725z00_1580;

																obj_t BgL_arg3726z00_1581;

																BgL_typez00_bglt BgL_arg3727z00_1582;

																BgL_typez00_bglt BgL_arg3728z00_1583;

																BgL_typez00_bglt BgL_arg3729z00_1584;

																bool_t BgL_arg3730z00_1585;

																{
																	BgL_nodez00_bglt BgL_auxz00_4144;

																	BgL_auxz00_4144 =
																		(BgL_nodez00_bglt) (BgL_nodez00_1496);
																	BgL_arg3720z00_1575 =
																		(((BgL_nodez00_bglt)
																			CREF(BgL_auxz00_4144))->BgL_locz00);
																}
																{
																	BgL_nodez00_bglt BgL_auxz00_4147;

																	BgL_auxz00_4147 =
																		(BgL_nodez00_bglt) (BgL_nodez00_1496);
																	BgL_arg3721z00_1576 =
																		(((BgL_nodez00_bglt)
																			CREF(BgL_auxz00_4147))->BgL_typez00);
																}
																{
																	BgL_nodezf2effectzf2_bglt BgL_auxz00_4150;

																	BgL_auxz00_4150 =
																		(BgL_nodezf2effectzf2_bglt)
																		(BgL_nodez00_1496);
																	BgL_arg3722z00_1577 =
																		(((BgL_nodezf2effectzf2_bglt)
																			CREF(BgL_auxz00_4150))->
																		BgL_sidezd2effectzf3z21);
																}
																{
																	BgL_nodezf2effectzf2_bglt BgL_auxz00_4153;

																	BgL_auxz00_4153 =
																		(BgL_nodezf2effectzf2_bglt)
																		(BgL_nodez00_1496);
																	BgL_arg3723z00_1578 =
																		(((BgL_nodezf2effectzf2_bglt)
																			CREF(BgL_auxz00_4153))->BgL_keyz00);
																}
																{	/* Abound/walk.scm 171 */
																	obj_t BgL_list3731z00_1586;

																	{	/* Abound/walk.scm 171 */
																		obj_t BgL_arg3732z00_1587;

																		BgL_arg3732z00_1587 =
																			MAKE_PAIR(BgL_iz00_1502, BNIL);
																		BgL_list3731z00_1586 =
																			MAKE_PAIR(BgL_vz00_1501,
																			BgL_arg3732z00_1587);
																	}
																	BgL_arg3724z00_1579 = BgL_list3731z00_1586;
																}
																{
																	BgL_externz00_bglt BgL_auxz00_4158;

																	BgL_auxz00_4158 =
																		(BgL_externz00_bglt) (BgL_nodez00_1496);
																	BgL_arg3725z00_1580 =
																		(((BgL_externz00_bglt)
																			CREF(BgL_auxz00_4158))->BgL_effectz00);
																}
																BgL_arg3726z00_1581 =
																	(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1496))->
																	BgL_czd2formatzd2);
																BgL_arg3727z00_1582 =
																	(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1496))->
																	BgL_ftypez00);
																BgL_arg3728z00_1583 =
																	(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1496))->
																	BgL_otypez00);
																BgL_arg3729z00_1584 =
																	(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1496))->
																	BgL_vtypez00);
																BgL_arg3730z00_1585 =
																	(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1496))->
																	BgL_unsafez00);
																BgL_new3353z00_1574 =
																	BGl_makezd2vrefzd2zzast_nodez00
																	(BgL_arg3720z00_1575, BgL_arg3721z00_1576,
																	BgL_arg3722z00_1577, BgL_arg3723z00_1578,
																	BgL_arg3724z00_1579, BgL_arg3725z00_1580,
																	BgL_arg3726z00_1581, BgL_arg3727z00_1582,
																	BgL_arg3728z00_1583, BgL_arg3729z00_1584,
																	BgL_arg3730z00_1585);
															}
															{	/* Abound/walk.scm 170 */

																BgL_arg3710z00_1563 = BgL_new3353z00_1574;
														}}
														{	/* Abound/walk.scm 172 */
															obj_t BgL_arg3733z00_1588;

															obj_t BgL_arg3734z00_1589;

															BgL_arg3733z00_1588 = CNST_TABLE_REF(((long) 17));
															{	/* Abound/walk.scm 173 */
																obj_t BgL_arg3735z00_1590;

																{	/* Abound/walk.scm 173 */
																	obj_t BgL_arg3740z00_1595;

																	obj_t BgL_arg3741z00_1596;

																	{	/* Abound/walk.scm 173 */
																		obj_t BgL_arg3742z00_1597;

																		obj_t BgL_arg3745z00_1598;

																		BgL_arg3742z00_1597 =
																			CNST_TABLE_REF(((long) 18));
																		{	/* Abound/walk.scm 173 */
																			obj_t BgL_list3746z00_1599;

																			{	/* Abound/walk.scm 173 */
																				obj_t BgL_arg3747z00_1600;

																				obj_t BgL_arg3748z00_1601;

																				BgL_arg3747z00_1600 =
																					CNST_TABLE_REF(((long) 19));
																				BgL_arg3748z00_1601 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list3746z00_1599 =
																					MAKE_PAIR(BgL_arg3747z00_1600,
																					BgL_arg3748z00_1601);
																			}
																			BgL_arg3745z00_1598 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(CNST_TABLE_REF(((long) 20)),
																				BgL_list3746z00_1599);
																		}
																		BgL_arg3740z00_1595 =
																			MAKE_PAIR(BgL_arg3742z00_1597,
																			BgL_arg3745z00_1598);
																	}
																	{	/* Abound/walk.scm 173 */
																		obj_t BgL_arg3750z00_1603;

																		obj_t BgL_arg3751z00_1604;

																		{	/* Abound/walk.scm 174 */
																			obj_t BgL_pairz00_2209;

																			{
																				BgL_externz00_bglt BgL_auxz00_4175;

																				BgL_auxz00_4175 =
																					(BgL_externz00_bglt)
																					(BgL_nodez00_1496);
																				BgL_pairz00_2209 =
																					(((BgL_externz00_bglt)
																						CREF(BgL_auxz00_4175))->
																					BgL_exprza2za2);
																			}
																			BgL_arg3750z00_1603 =
																				CAR(CDR(BgL_pairz00_2209));
																		}
																		{	/* Abound/walk.scm 174 */
																			obj_t BgL_pairz00_2214;

																			{
																				BgL_externz00_bglt BgL_auxz00_4180;

																				BgL_auxz00_4180 =
																					(BgL_externz00_bglt)
																					(BgL_nodez00_1496);
																				BgL_pairz00_2214 =
																					(((BgL_externz00_bglt)
																						CREF(BgL_auxz00_4180))->
																					BgL_exprza2za2);
																			}
																			BgL_arg3751z00_1604 =
																				CAR(BgL_pairz00_2214);
																		}
																		{	/* Abound/walk.scm 173 */
																			obj_t BgL_list3753z00_1606;

																			{	/* Abound/walk.scm 173 */
																				obj_t BgL_arg3754z00_1607;

																				{	/* Abound/walk.scm 173 */
																					obj_t BgL_arg3755z00_1608;

																					{	/* Abound/walk.scm 173 */
																						obj_t BgL_arg3756z00_1609;

																						{	/* Abound/walk.scm 173 */
																							obj_t BgL_arg3757z00_1610;

																							BgL_arg3757z00_1610 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3756z00_1609 =
																								MAKE_PAIR(BgL_arg3751z00_1604,
																								BgL_arg3757z00_1610);
																						}
																						BgL_arg3755z00_1608 =
																							MAKE_PAIR(BgL_arg3750z00_1603,
																							BgL_arg3756z00_1609);
																					}
																					BgL_arg3754z00_1607 =
																						MAKE_PAIR
																						(BGl_string4076z00zzabound_walkz00,
																						BgL_arg3755z00_1608);
																				}
																				BgL_list3753z00_1606 =
																					MAKE_PAIR(BgL_lposz00_1505,
																					BgL_arg3754z00_1607);
																			}
																			BgL_arg3741z00_1596 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_lnamez00_1504,
																				BgL_list3753z00_1606);
																	}}
																	BgL_arg3735z00_1590 =
																		MAKE_PAIR(BgL_arg3740z00_1595,
																		BgL_arg3741z00_1596);
																}
																{	/* Abound/walk.scm 172 */
																	obj_t BgL_list3737z00_1592;

																	{	/* Abound/walk.scm 172 */
																		obj_t BgL_arg3738z00_1593;

																		{	/* Abound/walk.scm 172 */
																			obj_t BgL_arg3739z00_1594;

																			BgL_arg3739z00_1594 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3738z00_1593 =
																				MAKE_PAIR(BFALSE, BgL_arg3739z00_1594);
																		}
																		BgL_list3737z00_1592 =
																			MAKE_PAIR(BFALSE, BgL_arg3738z00_1593);
																	}
																	BgL_arg3734z00_1589 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3735z00_1590, BgL_list3737z00_1592);
															}}
															BgL_arg3711z00_1564 =
																MAKE_PAIR(BgL_arg3733z00_1588,
																BgL_arg3734z00_1589);
														}
														{	/* Abound/walk.scm 169 */
															obj_t BgL_list3713z00_1566;

															{	/* Abound/walk.scm 169 */
																obj_t BgL_arg3714z00_1567;

																{	/* Abound/walk.scm 169 */
																	obj_t BgL_arg3715z00_1568;

																	BgL_arg3715z00_1568 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg3714z00_1567 =
																		MAKE_PAIR(BgL_arg3711z00_1564,
																		BgL_arg3715z00_1568);
																}
																BgL_list3713z00_1566 =
																	MAKE_PAIR(
																	(obj_t) (BgL_arg3710z00_1563),
																	BgL_arg3714z00_1567);
															}
															BgL_arg3708z00_1561 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3709z00_1562, BgL_list3713z00_1566);
													}}
													BgL_arg3686z00_1539 =
														MAKE_PAIR(BgL_arg3707z00_1560, BgL_arg3708z00_1561);
												}
												{	/* Abound/walk.scm 165 */
													obj_t BgL_list3688z00_1541;

													{	/* Abound/walk.scm 165 */
														obj_t BgL_arg3689z00_1542;

														BgL_arg3689z00_1542 = MAKE_PAIR(BNIL, BNIL);
														BgL_list3688z00_1541 =
															MAKE_PAIR(BgL_arg3686z00_1539,
															BgL_arg3689z00_1542);
													}
													BgL_arg3684z00_1537 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg3685z00_1538, BgL_list3688z00_1541);
											}}
											BgL_arg3657z00_1511 =
												MAKE_PAIR(BgL_arg3683z00_1536, BgL_arg3684z00_1537);
										}
										{	/* Abound/walk.scm 161 */
											obj_t BgL_list3659z00_1513;

											{	/* Abound/walk.scm 161 */
												obj_t BgL_arg3660z00_1514;

												BgL_arg3660z00_1514 = MAKE_PAIR(BNIL, BNIL);
												BgL_list3659z00_1513 =
													MAKE_PAIR(BgL_arg3657z00_1511, BgL_arg3660z00_1514);
											}
											BgL_arg3655z00_1509 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3656z00_1510, BgL_list3659z00_1513);
									}}
									BgL_arg3652z00_1506 =
										MAKE_PAIR(BgL_arg3654z00_1508, BgL_arg3655z00_1509);
								}
								{
									BgL_nodez00_bglt BgL_auxz00_4210;

									BgL_auxz00_4210 = (BgL_nodez00_bglt) (BgL_nodez00_1496);
									BgL_arg3653z00_1507 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_4210))->BgL_locz00);
								}
								return
									(obj_t) (BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
									(BgL_arg3652z00_1506, BgL_arg3653z00_1507));
							}
						}
				}
			}
		}
	}



/* abound-node-extern3395 */
	obj_t BGl_aboundzd2nodezd2extern3395z00zzabound_walkz00(obj_t BgL_envz00_3001,
		obj_t BgL_nodez00_3002)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 143 */
			{
				BgL_externz00_bglt BgL_nodez00_1490;

				{	/* Abound/walk.scm 144 */
					BgL_externz00_bglt BgL_auxz00_4216;

					BgL_nodez00_1490 = (BgL_externz00_bglt) (BgL_nodez00_3002);
					{	/* Abound/walk.scm 144 */
						obj_t BgL_arg3649z00_2158;

						BgL_arg3649z00_2158 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1490))->BgL_exprza2za2);
						BGl_aboundzd2nodeza2z12z62zzabound_walkz00(BgL_arg3649z00_2158);
					}
					BgL_auxz00_4216 = BgL_nodez00_1490;
					return (obj_t) (BgL_auxz00_4216);
				}
			}
		}
	}



/* abound-node-funcall3393 */
	obj_t BGl_aboundzd2nodezd2funcall3393z00zzabound_walkz00(obj_t
		BgL_envz00_3003, obj_t BgL_nodez00_3004)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 134 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1481;

				{	/* Abound/walk.scm 135 */
					BgL_funcallz00_bglt BgL_auxz00_4221;

					BgL_nodez00_1481 = (BgL_funcallz00_bglt) (BgL_nodez00_3004);
					{	/* Abound/walk.scm 136 */
						BgL_nodez00_bglt BgL_arg3645z00_1485;

						{	/* Abound/walk.scm 136 */
							BgL_nodez00_bglt BgL_arg3646z00_1486;

							BgL_arg3646z00_1486 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1481))->BgL_funz00);
							{	/* Abound/walk.scm 136 */
								BgL_nodez00_bglt BgL_res3975z00_2154;

								{	/* Abound/walk.scm 136 */
									obj_t BgL_method3385z00_2129;

									{	/* Abound/walk.scm 136 */
										BgL_objectz00_bglt BgL_objz00_2130;

										BgL_objz00_2130 =
											(BgL_objectz00_bglt) (BgL_arg3646z00_1486);
										{	/* Abound/walk.scm 136 */
											long BgL_objzd2classzd2numz00_2131;

											BgL_objzd2classzd2numz00_2131 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2130);
											{	/* Abound/walk.scm 136 */
												obj_t BgL_arg2643z00_2132;

												BgL_arg2643z00_2132 =
													PROCEDURE_REF
													(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
													(int) (((long) 1)));
												{	/* Abound/walk.scm 136 */
													obj_t BgL_arrayz00_2134;

													int BgL_offsetz00_2135;

													BgL_arrayz00_2134 = BgL_arg2643z00_2132;
													BgL_offsetz00_2135 =
														(int) (BgL_objzd2classzd2numz00_2131);
													{	/* Abound/walk.scm 136 */
														long BgL_offsetz00_2136;

														BgL_offsetz00_2136 =
															((long) (BgL_offsetz00_2135) - OBJECT_TYPE);
														{	/* Abound/walk.scm 136 */
															long BgL_modz00_2137;

															{	/* Abound/walk.scm 136 */
																int BgL_arg2645z00_2138;

																BgL_arg2645z00_2138 = (int) (((long) 16));
																{	/* Abound/walk.scm 136 */
																	long BgL_auxz00_4231;

																	BgL_auxz00_4231 =
																		(long) (BgL_arg2645z00_2138);
																	BgL_modz00_2137 =
																		(BgL_offsetz00_2136 / BgL_auxz00_4231);
															}}
															{	/* Abound/walk.scm 136 */
																long BgL_restz00_2139;

																{	/* Abound/walk.scm 136 */
																	int BgL_arg2644z00_2140;

																	BgL_arg2644z00_2140 = (int) (((long) 16));
																	{	/* Abound/walk.scm 136 */
																		long BgL_auxz00_4235;

																		BgL_auxz00_4235 =
																			(long) (BgL_arg2644z00_2140);
																		BgL_restz00_2139 =
																			(BgL_offsetz00_2136 % BgL_auxz00_4235);
																}}
																{	/* Abound/walk.scm 136 */

																	BgL_method3385z00_2129 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2134,
																			(int) (BgL_modz00_2137)),
																		(int) (BgL_restz00_2139));
									}}}}}}}}
									BgL_res3975z00_2154 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_2129)
										(BgL_method3385z00_2129, (obj_t) (BgL_arg3646z00_1486),
											BEOA));
								}
								BgL_arg3645z00_1485 = BgL_res3975z00_2154;
						}}
						((((BgL_funcallz00_bglt) CREF(BgL_nodez00_1481))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3645z00_1485), BUNSPEC);
					}
					{	/* Abound/walk.scm 137 */
						obj_t BgL_arg3647z00_1487;

						BgL_arg3647z00_1487 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1481))->BgL_argsz00);
						BGl_aboundzd2nodeza2z12z62zzabound_walkz00(BgL_arg3647z00_1487);
					}
					BgL_auxz00_4221 = BgL_nodez00_1481;
					return (obj_t) (BgL_auxz00_4221);
				}
			}
		}
	}



/* abound-node-app-ly3391 */
	obj_t BGl_aboundzd2nodezd2appzd2ly3391zd2zzabound_walkz00(obj_t
		BgL_envz00_3005, obj_t BgL_nodez00_3006)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 125 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1471;

				{	/* Abound/walk.scm 126 */
					BgL_appzd2lyzd2_bglt BgL_auxz00_4251;

					BgL_nodez00_1471 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_3006);
					{	/* Abound/walk.scm 127 */
						BgL_nodez00_bglt BgL_arg3640z00_1475;

						{	/* Abound/walk.scm 127 */
							BgL_nodez00_bglt BgL_arg3641z00_1476;

							BgL_arg3641z00_1476 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1471))->BgL_funz00);
							{	/* Abound/walk.scm 127 */
								BgL_nodez00_bglt BgL_res3969z00_2094;

								{	/* Abound/walk.scm 127 */
									obj_t BgL_method3385z00_2069;

									{	/* Abound/walk.scm 127 */
										BgL_objectz00_bglt BgL_objz00_2070;

										BgL_objz00_2070 =
											(BgL_objectz00_bglt) (BgL_arg3641z00_1476);
										{	/* Abound/walk.scm 127 */
											long BgL_objzd2classzd2numz00_2071;

											BgL_objzd2classzd2numz00_2071 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2070);
											{	/* Abound/walk.scm 127 */
												obj_t BgL_arg2643z00_2072;

												BgL_arg2643z00_2072 =
													PROCEDURE_REF
													(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
													(int) (((long) 1)));
												{	/* Abound/walk.scm 127 */
													obj_t BgL_arrayz00_2074;

													int BgL_offsetz00_2075;

													BgL_arrayz00_2074 = BgL_arg2643z00_2072;
													BgL_offsetz00_2075 =
														(int) (BgL_objzd2classzd2numz00_2071);
													{	/* Abound/walk.scm 127 */
														long BgL_offsetz00_2076;

														BgL_offsetz00_2076 =
															((long) (BgL_offsetz00_2075) - OBJECT_TYPE);
														{	/* Abound/walk.scm 127 */
															long BgL_modz00_2077;

															{	/* Abound/walk.scm 127 */
																int BgL_arg2645z00_2078;

																BgL_arg2645z00_2078 = (int) (((long) 16));
																{	/* Abound/walk.scm 127 */
																	long BgL_auxz00_4261;

																	BgL_auxz00_4261 =
																		(long) (BgL_arg2645z00_2078);
																	BgL_modz00_2077 =
																		(BgL_offsetz00_2076 / BgL_auxz00_4261);
															}}
															{	/* Abound/walk.scm 127 */
																long BgL_restz00_2079;

																{	/* Abound/walk.scm 127 */
																	int BgL_arg2644z00_2080;

																	BgL_arg2644z00_2080 = (int) (((long) 16));
																	{	/* Abound/walk.scm 127 */
																		long BgL_auxz00_4265;

																		BgL_auxz00_4265 =
																			(long) (BgL_arg2644z00_2080);
																		BgL_restz00_2079 =
																			(BgL_offsetz00_2076 % BgL_auxz00_4265);
																}}
																{	/* Abound/walk.scm 127 */

																	BgL_method3385z00_2069 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2074,
																			(int) (BgL_modz00_2077)),
																		(int) (BgL_restz00_2079));
									}}}}}}}}
									BgL_res3969z00_2094 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_2069)
										(BgL_method3385z00_2069, (obj_t) (BgL_arg3641z00_1476),
											BEOA));
								}
								BgL_arg3640z00_1475 = BgL_res3969z00_2094;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1471))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3640z00_1475), BUNSPEC);
					}
					{	/* Abound/walk.scm 128 */
						BgL_nodez00_bglt BgL_arg3642z00_1477;

						{	/* Abound/walk.scm 128 */
							BgL_nodez00_bglt BgL_arg3643z00_1478;

							BgL_arg3643z00_1478 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1471))->BgL_argz00);
							{	/* Abound/walk.scm 128 */
								BgL_nodez00_bglt BgL_res3972z00_2124;

								{	/* Abound/walk.scm 128 */
									obj_t BgL_method3385z00_2099;

									{	/* Abound/walk.scm 128 */
										BgL_objectz00_bglt BgL_objz00_2100;

										BgL_objz00_2100 =
											(BgL_objectz00_bglt) (BgL_arg3643z00_1478);
										{	/* Abound/walk.scm 128 */
											long BgL_objzd2classzd2numz00_2101;

											BgL_objzd2classzd2numz00_2101 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2100);
											{	/* Abound/walk.scm 128 */
												obj_t BgL_arg2643z00_2102;

												BgL_arg2643z00_2102 =
													PROCEDURE_REF
													(BGl_aboundzd2nodezd2envz00zzabound_walkz00,
													(int) (((long) 1)));
												{	/* Abound/walk.scm 128 */
													obj_t BgL_arrayz00_2104;

													int BgL_offsetz00_2105;

													BgL_arrayz00_2104 = BgL_arg2643z00_2102;
													BgL_offsetz00_2105 =
														(int) (BgL_objzd2classzd2numz00_2101);
													{	/* Abound/walk.scm 128 */
														long BgL_offsetz00_2106;

														BgL_offsetz00_2106 =
															((long) (BgL_offsetz00_2105) - OBJECT_TYPE);
														{	/* Abound/walk.scm 128 */
															long BgL_modz00_2107;

															{	/* Abound/walk.scm 128 */
																int BgL_arg2645z00_2108;

																BgL_arg2645z00_2108 = (int) (((long) 16));
																{	/* Abound/walk.scm 128 */
																	long BgL_auxz00_4286;

																	BgL_auxz00_4286 =
																		(long) (BgL_arg2645z00_2108);
																	BgL_modz00_2107 =
																		(BgL_offsetz00_2106 / BgL_auxz00_4286);
															}}
															{	/* Abound/walk.scm 128 */
																long BgL_restz00_2109;

																{	/* Abound/walk.scm 128 */
																	int BgL_arg2644z00_2110;

																	BgL_arg2644z00_2110 = (int) (((long) 16));
																	{	/* Abound/walk.scm 128 */
																		long BgL_auxz00_4290;

																		BgL_auxz00_4290 =
																			(long) (BgL_arg2644z00_2110);
																		BgL_restz00_2109 =
																			(BgL_offsetz00_2106 % BgL_auxz00_4290);
																}}
																{	/* Abound/walk.scm 128 */

																	BgL_method3385z00_2099 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2104,
																			(int) (BgL_modz00_2107)),
																		(int) (BgL_restz00_2109));
									}}}}}}}}
									BgL_res3972z00_2124 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3385z00_2099)
										(BgL_method3385z00_2099, (obj_t) (BgL_arg3643z00_1478),
											BEOA));
								}
								BgL_arg3642z00_1477 = BgL_res3972z00_2124;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1471))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg3642z00_1477), BUNSPEC);
					}
					BgL_auxz00_4251 = BgL_nodez00_1471;
					return (obj_t) (BgL_auxz00_4251);
				}
			}
		}
	}



/* abound-node-app3389 */
	obj_t BGl_aboundzd2nodezd2app3389z00zzabound_walkz00(obj_t BgL_envz00_3007,
		obj_t BgL_nodez00_3008)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 92 */
			{
				BgL_appz00_bglt BgL_nodez00_1349;

				BgL_nodez00_1349 = (BgL_appz00_bglt) (BgL_nodez00_3008);
				{	/* Abound/walk.scm 93 */
					obj_t BgL_arg3531z00_1352;

					BgL_arg3531z00_1352 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_1349))->BgL_argsz00);
					BGl_aboundzd2nodeza2z12z62zzabound_walkz00(BgL_arg3531z00_1352);
				}
				{	/* Abound/walk.scm 96 */
					BgL_variablez00_bglt BgL_vz00_1354;

					{	/* Abound/walk.scm 96 */
						BgL_varz00_bglt BgL_obj2155z00_2013;

						BgL_obj2155z00_2013 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1349))->BgL_funz00);
						BgL_vz00_1354 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2013))->BgL_variablez00);
					}
					{	/* Abound/walk.scm 98 */
						bool_t BgL_testz00_4308;

						if (
							((obj_t) (BgL_vz00_1354) ==
								BGl_za2stringzd2refza2zd2zzabound_walkz00))
							{	/* Abound/walk.scm 98 */
								BgL_testz00_4308 = ((bool_t) 1);
							}
						else
							{	/* Abound/walk.scm 98 */
								BgL_testz00_4308 =
									(
									(obj_t) (BgL_vz00_1354) ==
									BGl_za2stringzd2setz12za2zc0zzabound_walkz00);
							}
						if (BgL_testz00_4308)
							{	/* Abound/walk.scm 99 */
								obj_t BgL_sz00_1356;

								BgL_sz00_1356 =
									BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
									(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
												21))));
								{	/* Abound/walk.scm 99 */
									obj_t BgL_iz00_1357;

									BgL_iz00_1357 =
										BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
										(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													9))));
									{	/* Abound/walk.scm 100 */
										obj_t BgL_lz00_1358;

										BgL_lz00_1358 =
											BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
											(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
														10))));
										{	/* Abound/walk.scm 101 */
											obj_t BgL_lnamez00_1359;

											{	/* Abound/walk.scm 102 */
												bool_t BgL_testz00_4323;

												{	/* Abound/walk.scm 102 */
													obj_t BgL_oz00_2015;

													{
														BgL_nodez00_bglt BgL_auxz00_4324;

														BgL_auxz00_4324 =
															(BgL_nodez00_bglt) (BgL_nodez00_1349);
														BgL_oz00_2015 =
															(((BgL_nodez00_bglt) CREF(BgL_auxz00_4324))->
															BgL_locz00);
													}
													if (STRUCTP(BgL_oz00_2015))
														{	/* Abound/walk.scm 102 */
															BgL_testz00_4323 =
																(STRUCT_KEY(BgL_oz00_2015) ==
																CNST_TABLE_REF(((long) 11)));
														}
													else
														{	/* Abound/walk.scm 102 */
															BgL_testz00_4323 = ((bool_t) 0);
														}
												}
												if (BgL_testz00_4323)
													{	/* Abound/walk.scm 102 */
														obj_t BgL_arg3632z00_1462;

														{
															BgL_nodez00_bglt BgL_auxz00_4332;

															BgL_auxz00_4332 =
																(BgL_nodez00_bglt) (BgL_nodez00_1349);
															BgL_arg3632z00_1462 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_4332))->
																BgL_locz00);
														}
														BgL_lnamez00_1359 =
															BGl_locationzd2fullzd2fnamez00zztools_locationz00
															(BgL_arg3632z00_1462);
													}
												else
													{	/* Abound/walk.scm 102 */
														BgL_lnamez00_1359 = BFALSE;
													}
											}
											{	/* Abound/walk.scm 102 */
												obj_t BgL_lposz00_1360;

												{	/* Abound/walk.scm 103 */
													bool_t BgL_testz00_4336;

													{	/* Abound/walk.scm 103 */
														obj_t BgL_oz00_2024;

														{
															BgL_nodez00_bglt BgL_auxz00_4337;

															BgL_auxz00_4337 =
																(BgL_nodez00_bglt) (BgL_nodez00_1349);
															BgL_oz00_2024 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_4337))->
																BgL_locz00);
														}
														if (STRUCTP(BgL_oz00_2024))
															{	/* Abound/walk.scm 103 */
																BgL_testz00_4336 =
																	(STRUCT_KEY(BgL_oz00_2024) ==
																	CNST_TABLE_REF(((long) 11)));
															}
														else
															{	/* Abound/walk.scm 103 */
																BgL_testz00_4336 = ((bool_t) 0);
															}
													}
													if (BgL_testz00_4336)
														{	/* Abound/walk.scm 103 */
															obj_t BgL_sz00_2033;

															{
																BgL_nodez00_bglt BgL_auxz00_4345;

																BgL_auxz00_4345 =
																	(BgL_nodez00_bglt) (BgL_nodez00_1349);
																BgL_sz00_2033 =
																	(((BgL_nodez00_bglt) CREF(BgL_auxz00_4345))->
																	BgL_locz00);
															}
															BgL_lposz00_1360 =
																STRUCT_REF(BgL_sz00_2033, (int) (((long) 1)));
														}
													else
														{	/* Abound/walk.scm 103 */
															BgL_lposz00_1360 = BFALSE;
														}
												}
												{	/* Abound/walk.scm 103 */
													obj_t BgL_namez00_1361;

													if (
														((obj_t) (BgL_vz00_1354) ==
															BGl_za2stringzd2refza2zd2zzabound_walkz00))
														{	/* Abound/walk.scm 104 */
															BgL_namez00_1361 =
																BGl_string4077z00zzabound_walkz00;
														}
													else
														{	/* Abound/walk.scm 104 */
															BgL_namez00_1361 =
																BGl_string4078z00zzabound_walkz00;
														}
													{	/* Abound/walk.scm 104 */
														obj_t BgL_typesz00_1362;

														{	/* Abound/walk.scm 105 */
															BgL_cfunz00_bglt BgL_obj1975z00_2036;

															BgL_obj1975z00_2036 =
																(BgL_cfunz00_bglt) (
																(((BgL_variablez00_bglt) CREF(BgL_vz00_1354))->
																	BgL_valuez00));
															BgL_typesz00_1362 =
																(((BgL_cfunz00_bglt)
																	CREF(BgL_obj1975z00_2036))->
																BgL_argszd2typezd2);
														}
														{	/* Abound/walk.scm 105 */

															{	/* Abound/walk.scm 107 */
																obj_t BgL_arg3533z00_1363;

																obj_t BgL_arg3535z00_1364;

																{	/* Abound/walk.scm 107 */
																	obj_t BgL_arg3536z00_1365;

																	obj_t BgL_arg3537z00_1366;

																	BgL_arg3536z00_1365 =
																		CNST_TABLE_REF(((long) 12));
																	{	/* Abound/walk.scm 107 */
																		obj_t BgL_arg3538z00_1367;

																		obj_t BgL_arg3539z00_1368;

																		{	/* Abound/walk.scm 107 */
																			obj_t BgL_arg3543z00_1372;

																			obj_t BgL_arg3544z00_1373;

																			{	/* Abound/walk.scm 107 */
																				obj_t BgL_arg3545z00_1374;

																				obj_t BgL_arg3546z00_1375;

																				{	/* Abound/walk.scm 107 */
																					obj_t BgL_arg3547z00_1376;

																					{	/* Abound/walk.scm 107 */
																						BgL_typez00_bglt
																							BgL_obj1508z00_2038;
																						{	/* Abound/walk.scm 107 */
																							obj_t BgL_pairz00_2037;

																							BgL_pairz00_2037 =
																								BgL_typesz00_1362;
																							BgL_obj1508z00_2038 =
																								(BgL_typez00_bglt) (CAR
																								(BgL_pairz00_2037));
																						}
																						BgL_arg3547z00_1376 =
																							(((BgL_typez00_bglt)
																								CREF(BgL_obj1508z00_2038))->
																							BgL_idz00);
																					}
																					BgL_arg3545z00_1374 =
																						BGl_makezd2typedzd2identz00zzast_identz00
																						(BgL_sz00_1356,
																						BgL_arg3547z00_1376);
																				}
																				{	/* Abound/walk.scm 107 */
																					obj_t BgL_arg3549z00_1378;

																					{	/* Abound/walk.scm 107 */
																						obj_t BgL_pairz00_2040;

																						BgL_pairz00_2040 =
																							(((BgL_appz00_bglt)
																								CREF(BgL_nodez00_1349))->
																							BgL_argsz00);
																						BgL_arg3549z00_1378 =
																							CAR(BgL_pairz00_2040);
																					}
																					{	/* Abound/walk.scm 107 */
																						obj_t BgL_list3551z00_1380;

																						BgL_list3551z00_1380 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3546z00_1375 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg3549z00_1378,
																							BgL_list3551z00_1380);
																				}}
																				BgL_arg3543z00_1372 =
																					MAKE_PAIR(BgL_arg3545z00_1374,
																					BgL_arg3546z00_1375);
																			}
																			{	/* Abound/walk.scm 108 */
																				obj_t BgL_arg3553z00_1382;

																				{	/* Abound/walk.scm 108 */
																					obj_t BgL_arg3556z00_1385;

																					obj_t BgL_arg3557z00_1386;

																					{	/* Abound/walk.scm 108 */
																						obj_t BgL_arg3558z00_1387;

																						{	/* Abound/walk.scm 108 */
																							BgL_typez00_bglt
																								BgL_obj1508z00_2045;
																							{	/* Abound/walk.scm 108 */
																								obj_t BgL_pairz00_2041;

																								BgL_pairz00_2041 =
																									BgL_typesz00_1362;
																								{	/* Abound/walk.scm 108 */
																									obj_t BgL_pairz00_2044;

																									BgL_pairz00_2044 =
																										CDR(BgL_pairz00_2041);
																									BgL_obj1508z00_2045 =
																										(BgL_typez00_bglt) (CAR
																										(BgL_pairz00_2044));
																							}}
																							BgL_arg3558z00_1387 =
																								(((BgL_typez00_bglt)
																									CREF(BgL_obj1508z00_2045))->
																								BgL_idz00);
																						}
																						BgL_arg3556z00_1385 =
																							BGl_makezd2typedzd2identz00zzast_identz00
																							(BgL_iz00_1357,
																							BgL_arg3558z00_1387);
																					}
																					{	/* Abound/walk.scm 108 */
																						obj_t BgL_arg3560z00_1389;

																						{	/* Abound/walk.scm 108 */
																							obj_t BgL_pairz00_2047;

																							BgL_pairz00_2047 =
																								(((BgL_appz00_bglt)
																									CREF(BgL_nodez00_1349))->
																								BgL_argsz00);
																							BgL_arg3560z00_1389 =
																								CAR(CDR(BgL_pairz00_2047));
																						}
																						{	/* Abound/walk.scm 108 */
																							obj_t BgL_list3562z00_1391;

																							BgL_list3562z00_1391 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3557z00_1386 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg3560z00_1389,
																								BgL_list3562z00_1391);
																					}}
																					BgL_arg3553z00_1382 =
																						MAKE_PAIR(BgL_arg3556z00_1385,
																						BgL_arg3557z00_1386);
																				}
																				{	/* Abound/walk.scm 107 */
																					obj_t BgL_list3555z00_1384;

																					BgL_list3555z00_1384 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3544z00_1373 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3553z00_1382,
																						BgL_list3555z00_1384);
																			}}
																			BgL_arg3538z00_1367 =
																				MAKE_PAIR(BgL_arg3543z00_1372,
																				BgL_arg3544z00_1373);
																		}
																		{	/* Abound/walk.scm 109 */
																			obj_t BgL_arg3564z00_1393;

																			obj_t BgL_arg3565z00_1394;

																			BgL_arg3564z00_1393 =
																				CNST_TABLE_REF(((long) 12));
																			{	/* Abound/walk.scm 109 */
																				obj_t BgL_arg3566z00_1395;

																				obj_t BgL_arg3567z00_1396;

																				{	/* Abound/walk.scm 109 */
																					obj_t BgL_arg3571z00_1400;

																					{	/* Abound/walk.scm 109 */
																						obj_t BgL_arg3573z00_1402;

																						obj_t BgL_arg3574z00_1403;

																						{	/* Abound/walk.scm 109 */
																							obj_t BgL_arg3575z00_1404;

																							{	/* Abound/walk.scm 109 */
																								BgL_typez00_bglt
																									BgL_obj1508z00_2055;
																								{	/* Abound/walk.scm 109 */
																									obj_t BgL_pairz00_2051;

																									BgL_pairz00_2051 =
																										BgL_typesz00_1362;
																									{	/* Abound/walk.scm 109 */
																										obj_t BgL_pairz00_2054;

																										BgL_pairz00_2054 =
																											CDR(BgL_pairz00_2051);
																										BgL_obj1508z00_2055 =
																											(BgL_typez00_bglt) (CAR
																											(BgL_pairz00_2054));
																								}}
																								BgL_arg3575z00_1404 =
																									(((BgL_typez00_bglt)
																										CREF(BgL_obj1508z00_2055))->
																									BgL_idz00);
																							}
																							BgL_arg3573z00_1402 =
																								BGl_makezd2typedzd2identz00zzast_identz00
																								(BgL_lz00_1358,
																								BgL_arg3575z00_1404);
																						}
																						{	/* Abound/walk.scm 110 */
																							obj_t BgL_arg3577z00_1406;

																							{	/* Abound/walk.scm 110 */
																								obj_t BgL_arg3580z00_1409;

																								obj_t BgL_arg3581z00_1410;

																								BgL_arg3580z00_1409 =
																									CNST_TABLE_REF(((long) 22));
																								{	/* Abound/walk.scm 110 */
																									obj_t BgL_list3582z00_1411;

																									BgL_list3582z00_1411 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg3581z00_1410 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_sz00_1356,
																										BgL_list3582z00_1411);
																								}
																								BgL_arg3577z00_1406 =
																									MAKE_PAIR(BgL_arg3580z00_1409,
																									BgL_arg3581z00_1410);
																							}
																							{	/* Abound/walk.scm 109 */
																								obj_t BgL_list3579z00_1408;

																								BgL_list3579z00_1408 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg3574z00_1403 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg3577z00_1406,
																									BgL_list3579z00_1408);
																						}}
																						BgL_arg3571z00_1400 =
																							MAKE_PAIR(BgL_arg3573z00_1402,
																							BgL_arg3574z00_1403);
																					}
																					BgL_arg3566z00_1395 =
																						MAKE_PAIR(BgL_arg3571z00_1400,
																						BNIL);
																				}
																				{	/* Abound/walk.scm 111 */
																					obj_t BgL_arg3583z00_1412;

																					obj_t BgL_arg3584z00_1413;

																					BgL_arg3583z00_1412 =
																						CNST_TABLE_REF(((long) 15));
																					{	/* Abound/walk.scm 111 */
																						obj_t BgL_arg3585z00_1414;

																						BgL_appz00_bglt BgL_arg3586z00_1415;

																						obj_t BgL_arg3587z00_1416;

																						{	/* Abound/walk.scm 111 */
																							obj_t BgL_arg3592z00_1421;

																							obj_t BgL_arg3593z00_1422;

																							BgL_arg3592z00_1421 =
																								CNST_TABLE_REF(((long) 23));
																							{	/* Abound/walk.scm 111 */
																								obj_t BgL_list3594z00_1423;

																								{	/* Abound/walk.scm 111 */
																									obj_t BgL_arg3595z00_1424;

																									BgL_arg3595z00_1424 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list3594z00_1423 =
																										MAKE_PAIR(BgL_lz00_1358,
																										BgL_arg3595z00_1424);
																								}
																								BgL_arg3593z00_1422 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_iz00_1357,
																									BgL_list3594z00_1423);
																							}
																							BgL_arg3585z00_1414 =
																								MAKE_PAIR(BgL_arg3592z00_1421,
																								BgL_arg3593z00_1422);
																						}
																						{	/* Abound/walk.scm 112 */
																							BgL_appz00_bglt
																								BgL_new3345z00_1426;
																							{	/* Abound/walk.scm 112 */
																								obj_t BgL_arg3596z00_1427;

																								BgL_typez00_bglt
																									BgL_arg3597z00_1428;
																								obj_t BgL_arg3598z00_1429;

																								obj_t BgL_arg3599z00_1430;

																								BgL_varz00_bglt
																									BgL_arg3600z00_1431;
																								obj_t BgL_arg3601z00_1432;

																								{
																									BgL_nodez00_bglt
																										BgL_auxz00_4400;
																									BgL_auxz00_4400 =
																										(BgL_nodez00_bglt)
																										(BgL_nodez00_1349);
																									BgL_arg3596z00_1427 =
																										(((BgL_nodez00_bglt)
																											CREF(BgL_auxz00_4400))->
																										BgL_locz00);
																								}
																								{
																									BgL_nodez00_bglt
																										BgL_auxz00_4403;
																									BgL_auxz00_4403 =
																										(BgL_nodez00_bglt)
																										(BgL_nodez00_1349);
																									BgL_arg3597z00_1428 =
																										(((BgL_nodez00_bglt)
																											CREF(BgL_auxz00_4403))->
																										BgL_typez00);
																								}
																								{
																									BgL_nodezf2effectzf2_bglt
																										BgL_auxz00_4406;
																									BgL_auxz00_4406 =
																										(BgL_nodezf2effectzf2_bglt)
																										(BgL_nodez00_1349);
																									BgL_arg3598z00_1429 =
																										(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_4406))->BgL_sidezd2effectzf3z21);
																								}
																								{
																									BgL_nodezf2effectzf2_bglt
																										BgL_auxz00_4409;
																									BgL_auxz00_4409 =
																										(BgL_nodezf2effectzf2_bglt)
																										(BgL_nodez00_1349);
																									BgL_arg3599z00_1430 =
																										(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_4409))->BgL_keyz00);
																								}
																								BgL_arg3600z00_1431 =
																									(((BgL_appz00_bglt)
																										CREF(BgL_nodez00_1349))->
																									BgL_funz00);
																								{	/* Abound/walk.scm 113 */
																									obj_t BgL_arg3602z00_1433;

																									{	/* Abound/walk.scm 113 */
																										obj_t BgL_arg3603z00_1434;

																										{	/* Abound/walk.scm 113 */
																											obj_t BgL_pairz00_2062;

																											BgL_pairz00_2062 =
																												(((BgL_appz00_bglt)
																													CREF
																													(BgL_nodez00_1349))->
																												BgL_argsz00);
																											BgL_arg3603z00_1434 =
																												CDR(CDR
																												(BgL_pairz00_2062));
																										}
																										{	/* Abound/walk.scm 113 */
																											obj_t
																												BgL_list3604z00_1435;
																											BgL_list3604z00_1435 =
																												MAKE_PAIR
																												(BgL_arg3603z00_1434,
																												BNIL);
																											BgL_arg3602z00_1433 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_iz00_1357,
																												BgL_list3604z00_1435);
																									}}
																									BgL_arg3601z00_1432 =
																										MAKE_PAIR(BgL_sz00_1356,
																										BgL_arg3602z00_1433);
																								}
																								BgL_new3345z00_1426 =
																									BGl_makezd2appzd2zzast_nodez00
																									(BgL_arg3596z00_1427,
																									BgL_arg3597z00_1428,
																									BgL_arg3598z00_1429,
																									BgL_arg3599z00_1430,
																									BgL_arg3600z00_1431,
																									BgL_arg3601z00_1432);
																							}
																							{	/* Abound/walk.scm 112 */

																								BgL_arg3586z00_1415 =
																									BgL_new3345z00_1426;
																						}}
																						{	/* Abound/walk.scm 114 */
																							obj_t BgL_arg3606z00_1437;

																							obj_t BgL_arg3607z00_1438;

																							BgL_arg3606z00_1437 =
																								CNST_TABLE_REF(((long) 17));
																							{	/* Abound/walk.scm 115 */
																								obj_t BgL_arg3608z00_1439;

																								{	/* Abound/walk.scm 115 */
																									obj_t BgL_arg3614z00_1444;

																									obj_t BgL_arg3615z00_1445;

																									{	/* Abound/walk.scm 115 */
																										obj_t BgL_arg3616z00_1446;

																										obj_t BgL_arg3617z00_1447;

																										BgL_arg3616z00_1446 =
																											CNST_TABLE_REF(((long)
																												18));
																										{	/* Abound/walk.scm 115 */
																											obj_t
																												BgL_list3618z00_1448;
																											{	/* Abound/walk.scm 115 */
																												obj_t
																													BgL_arg3619z00_1449;
																												obj_t
																													BgL_arg3620z00_1450;
																												BgL_arg3619z00_1449 =
																													CNST_TABLE_REF(((long)
																														19));
																												BgL_arg3620z00_1450 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list3618z00_1448 =
																													MAKE_PAIR
																													(BgL_arg3619z00_1449,
																													BgL_arg3620z00_1450);
																											}
																											BgL_arg3617z00_1447 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(CNST_TABLE_REF(((long)
																														20)),
																												BgL_list3618z00_1448);
																										}
																										BgL_arg3614z00_1444 =
																											MAKE_PAIR
																											(BgL_arg3616z00_1446,
																											BgL_arg3617z00_1447);
																									}
																									{	/* Abound/walk.scm 115 */
																										obj_t BgL_list3621z00_1451;

																										{	/* Abound/walk.scm 115 */
																											obj_t BgL_arg3622z00_1452;

																											{	/* Abound/walk.scm 115 */
																												obj_t
																													BgL_arg3623z00_1453;
																												{	/* Abound/walk.scm 115 */
																													obj_t
																														BgL_arg3624z00_1454;
																													{	/* Abound/walk.scm 115 */
																														obj_t
																															BgL_arg3625z00_1455;
																														BgL_arg3625z00_1455
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg3624z00_1454
																															=
																															MAKE_PAIR
																															(BgL_sz00_1356,
																															BgL_arg3625z00_1455);
																													}
																													BgL_arg3623z00_1453 =
																														MAKE_PAIR
																														(BgL_iz00_1357,
																														BgL_arg3624z00_1454);
																												}
																												BgL_arg3622z00_1452 =
																													MAKE_PAIR
																													(BgL_namez00_1361,
																													BgL_arg3623z00_1453);
																											}
																											BgL_list3621z00_1451 =
																												MAKE_PAIR
																												(BgL_lposz00_1360,
																												BgL_arg3622z00_1452);
																										}
																										BgL_arg3615z00_1445 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_lnamez00_1359,
																											BgL_list3621z00_1451);
																									}
																									BgL_arg3608z00_1439 =
																										MAKE_PAIR
																										(BgL_arg3614z00_1444,
																										BgL_arg3615z00_1445);
																								}
																								{	/* Abound/walk.scm 114 */
																									obj_t BgL_list3610z00_1441;

																									{	/* Abound/walk.scm 114 */
																										obj_t BgL_arg3612z00_1442;

																										{	/* Abound/walk.scm 114 */
																											obj_t BgL_arg3613z00_1443;

																											BgL_arg3613z00_1443 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg3612z00_1442 =
																												MAKE_PAIR(BFALSE,
																												BgL_arg3613z00_1443);
																										}
																										BgL_list3610z00_1441 =
																											MAKE_PAIR(BFALSE,
																											BgL_arg3612z00_1442);
																									}
																									BgL_arg3607z00_1438 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg3608z00_1439,
																										BgL_list3610z00_1441);
																							}}
																							BgL_arg3587z00_1416 =
																								MAKE_PAIR(BgL_arg3606z00_1437,
																								BgL_arg3607z00_1438);
																						}
																						{	/* Abound/walk.scm 111 */
																							obj_t BgL_list3589z00_1418;

																							{	/* Abound/walk.scm 111 */
																								obj_t BgL_arg3590z00_1419;

																								{	/* Abound/walk.scm 111 */
																									obj_t BgL_arg3591z00_1420;

																									BgL_arg3591z00_1420 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg3590z00_1419 =
																										MAKE_PAIR
																										(BgL_arg3587z00_1416,
																										BgL_arg3591z00_1420);
																								}
																								BgL_list3589z00_1418 =
																									MAKE_PAIR(
																									(obj_t) (BgL_arg3586z00_1415),
																									BgL_arg3590z00_1419);
																							}
																							BgL_arg3584z00_1413 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg3585z00_1414,
																								BgL_list3589z00_1418);
																					}}
																					BgL_arg3567z00_1396 =
																						MAKE_PAIR(BgL_arg3583z00_1412,
																						BgL_arg3584z00_1413);
																				}
																				{	/* Abound/walk.scm 109 */
																					obj_t BgL_list3569z00_1398;

																					{	/* Abound/walk.scm 109 */
																						obj_t BgL_arg3570z00_1399;

																						BgL_arg3570z00_1399 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list3569z00_1398 =
																							MAKE_PAIR(BgL_arg3567z00_1396,
																							BgL_arg3570z00_1399);
																					}
																					BgL_arg3565z00_1394 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3566z00_1395,
																						BgL_list3569z00_1398);
																			}}
																			BgL_arg3539z00_1368 =
																				MAKE_PAIR(BgL_arg3564z00_1393,
																				BgL_arg3565z00_1394);
																		}
																		{	/* Abound/walk.scm 107 */
																			obj_t BgL_list3541z00_1370;

																			{	/* Abound/walk.scm 107 */
																				obj_t BgL_arg3542z00_1371;

																				BgL_arg3542z00_1371 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list3541z00_1370 =
																					MAKE_PAIR(BgL_arg3539z00_1368,
																					BgL_arg3542z00_1371);
																			}
																			BgL_arg3537z00_1366 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3538z00_1367,
																				BgL_list3541z00_1370);
																	}}
																	BgL_arg3533z00_1363 =
																		MAKE_PAIR(BgL_arg3536z00_1365,
																		BgL_arg3537z00_1366);
																}
																{
																	BgL_nodez00_bglt BgL_auxz00_4454;

																	BgL_auxz00_4454 =
																		(BgL_nodez00_bglt) (BgL_nodez00_1349);
																	BgL_arg3535z00_1364 =
																		(((BgL_nodez00_bglt)
																			CREF(BgL_auxz00_4454))->BgL_locz00);
																}
																return
																	(obj_t)
																	(BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
																	(BgL_arg3533z00_1363, BgL_arg3535z00_1364));
															}
														}
													}
												}
											}
										}
									}
								}
							}
						else
							{	/* Abound/walk.scm 98 */
								return (obj_t) (BgL_nodez00_1349);
							}
					}
				}
			}
		}
	}



/* abound-node-sequence3387 */
	obj_t BGl_aboundzd2nodezd2sequence3387z00zzabound_walkz00(obj_t
		BgL_envz00_3009, obj_t BgL_nodez00_3010)
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 85 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1343;

				{	/* Abound/walk.scm 86 */
					BgL_sequencez00_bglt BgL_auxz00_4461;

					BgL_nodez00_1343 = (BgL_sequencez00_bglt) (BgL_nodez00_3010);
					{	/* Abound/walk.scm 86 */
						obj_t BgL_arg3529z00_2009;

						BgL_arg3529z00_2009 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1343))->BgL_nodesz00);
						BGl_aboundzd2nodeza2z12z62zzabound_walkz00(BgL_arg3529z00_2009);
					}
					BgL_auxz00_4461 = BgL_nodez00_1343;
					return (obj_t) (BgL_auxz00_4461);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzabound_walkz00()
	{
		AN_OBJECT;
		{	/* Abound/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string4079z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4079z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string4079z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4079z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4079z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4079z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4079z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string4079z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4079z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string4079z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string4079z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string4079z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string4079z00zzabound_walkz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 453255680),
				BSTRING_TO_STRING(BGl_string4079z00zzabound_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string4079z00zzabound_walkz00));
		}
	}

#ifdef __cplusplus
}
#endif
