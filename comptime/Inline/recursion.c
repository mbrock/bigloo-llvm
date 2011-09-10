/*===========================================================================*/
/*   (Inline/recursion.scm)                                                  */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Inline/recursion.scm)*/
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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

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

	typedef struct BgL_isfunz00_bgl
	{
		struct BgL_nodez00_bgl *BgL_originalzd2bodyzd2;
		obj_t BgL_recursivezd2callszd2;
	}               *BgL_isfunz00_bglt;


	extern BgL_localz00_bglt BGl_clonezd2localzd2zzast_localz00(BgL_localz00_bglt,
		BgL_valuez00_bglt);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static BgL_letzd2funzd2_bglt
		BGl_plainzd2callzd2zzinline_recursionz00(BgL_variablez00_bglt,
		BgL_nodez00_bglt, BgL_localz00_bglt, BgL_appz00_bglt, obj_t);
	extern bool_t BGl_innerzd2loopzf3z21zzinline_loopz00(BgL_variablez00_bglt);
	extern bool_t BGl_iszd2loopzf3z21zzinline_loopz00(BgL_variablez00_bglt);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_shrinkzd2argsz12zc0zzinline_variantz00(BgL_variablez00_bglt);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzinline_recursionz00();
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_inlinezd2appzd2recursivez00zzinline_recursionz00(BgL_nodez00_bglt, long,
		obj_t);
	extern BgL_nodez00_bglt
		BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_nodez00_bglt, BgL_localz00_bglt,
		obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern obj_t BGl_wideningzd2isfunzd2zzinline_inlinez00(BgL_nodez00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzinline_recursionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreduce_csez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_loopz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_variantz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_simplez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_alphatiza7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzinline_recursionz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_unrollzd2callzd2zzinline_recursionz00(BgL_variablez00_bglt,
		BgL_nodez00_bglt, BgL_localz00_bglt, obj_t, BgL_appz00_bglt, obj_t);
	BGL_IMPORT bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__iszd2recursivezf3z21zzinline_recursionz00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_findzd2recursivezd2calls3423z00zzinline_recursionz00(obj_t,
		obj_t, obj_t);
	extern BgL_localz00_bglt BGl_makezd2localzd2sfunz00zzast_localz00(obj_t,
		BgL_typez00_bglt, BgL_sfunz00_bglt);
	static obj_t BGl_findzd2recursivezd2calls3425z00zzinline_recursionz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_findzd2recursivezd2calls3427z00zzinline_recursionz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_findzd2recursivezd2calls3429z00zzinline_recursionz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_findzd2recursivezd2calls3431z00zzinline_recursionz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_findzd2recursivezd2calls3434z00zzinline_recursionz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_findzd2recursivezd2calls3436z00zzinline_recursionz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_findzd2recursivezd2calls3438z00zzinline_recursionz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_findzd2recursivezd2calls3440z00zzinline_recursionz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_findzd2recursivezd2calls3442z00zzinline_recursionz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_findzd2recursivezd2calls3444z00zzinline_recursionz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_findzd2recursivezd2calls3446z00zzinline_recursionz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_findzd2recursivezd2calls3448z00zzinline_recursionz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_findzd2recursivezd2calls3450z00zzinline_recursionz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_findzd2recursivezd2calls3452z00zzinline_recursionz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_findzd2recursivezd2calls3454z00zzinline_recursionz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_findzd2recursivezd2calls3456z00zzinline_recursionz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33549ze3z83zzinline_recursionz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_iszd2recursivezf3z21zzinline_recursionz00(BgL_variablez00_bglt);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern BgL_nodez00_bglt BGl_alphatiza7eza7zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t, BgL_nodez00_bglt);
	extern BgL_nodez00_bglt
		BGl_inlinezd2appzd2simplez00zzinline_simplez00(BgL_nodez00_bglt, long,
		obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	extern BgL_appz00_bglt
		BGl_removezd2invariantzd2argsz12z12zzinline_variantz00(BgL_appz00_bglt);
	extern BgL_letzd2funzd2_bglt BGl_makezd2letzd2funz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern BgL_sfunz00_bglt BGl_makezd2sfunzd2zzast_varz00(long, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2verboseza2z00zzengine_paramz00;
	extern obj_t BGl_substitutionsz00zzinline_variantz00(BgL_variablez00_bglt,
		obj_t, obj_t);
	static obj_t BGl__findzd2recursivezd2callsz00zzinline_recursionz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzinline_recursionz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzinline_recursionz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzinline_recursionz00();
	static obj_t
		BGl_inlinezd2appzd2labelsz00zzinline_recursionz00(BgL_nodez00_bglt, long,
		obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_findzd2recursivezd2callsza2za2zzinline_recursionz00(obj_t,
		obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl__findzd2recursivezd2calls3419z00zzinline_recursionz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzinline_recursionz00();
	extern obj_t BGl_nodezd2csez12zc0zzreduce_csez00(BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_invariantzd2argszd2zzinline_variantz00(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	static obj_t BGl__inlinezd2appzd2recursivez00zzinline_recursionz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_inlinezd2sfunz12zc0zzinline_inlinez00(BgL_variablez00_bglt,
		long, obj_t);
	extern obj_t BGl_currentzd2functionzd2zztools_errorz00();
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_variantzd2argszd2zzinline_variantz00(BgL_variablez00_bglt);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	extern bool_t BGl_inlinezd2appzf3z21zzinline_appz00(BgL_variablez00_bglt,
		long, long, obj_t);
	extern obj_t BGl_za2inliningzd2reducezd2kfactorza2z00zzengine_paramz00;
	extern obj_t BGl_isfunz00zzinline_inlinez00;
	BGL_IMPORT obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t
		BGl_findzd2recursivezd2callsz00zzinline_recursionz00(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzinline_recursionz00();
	extern BgL_svarz00_bglt BGl_makezd2svarzd2zzast_varz00(obj_t);
	extern obj_t BGl_za2optimzd2unrollzd2loopzf3za2zf3zzengine_paramz00;
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string3780z00zzinline_recursionz00,
		BgL_bgl_string3780za700za7za7i3806za7, " (recursive)", 12);
	      DEFINE_STRING(BGl_string3779z00zzinline_recursionz00,
		BgL_bgl_string3779za700za7za7i3807za7, "simple", 6);
	      DEFINE_STRING(BGl_string3781z00zzinline_recursionz00,
		BgL_bgl_string3781za700za7za7i3808za7, " --> ", 5);
	      DEFINE_STRING(BGl_string3782z00zzinline_recursionz00,
		BgL_bgl_string3782za700za7za7i3809za7, "         ", 9);
	      DEFINE_STRING(BGl_string3783z00zzinline_recursionz00,
		BgL_bgl_string3783za700za7za7i3810za7, "unrolling", 9);
	      DEFINE_STRING(BGl_string3784z00zzinline_recursionz00,
		BgL_bgl_string3784za700za7za7i3811za7, "find-recursive-calls", 20);
	      DEFINE_STRING(BGl_string3802z00zzinline_recursionz00,
		BgL_bgl_string3802za700za7za7i3812za7, "inline_recursion", 16);
	      DEFINE_STRING(BGl_string3803z00zzinline_recursionz00,
		BgL_bgl_string3803za700za7za7i3813za7, "(sifun sgfun) sfun ", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_iszd2recursivezf3zd2envzf3zzinline_recursionz00,
		BgL_bgl__isza7d2recursiveza73814z00,
		BGl__iszd2recursivezf3z21zzinline_recursionz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inlinezd2appzd2recursivezd2envzd2zzinline_recursionz00,
		BgL_bgl__inlineza7d2appza7d23815z00,
		BGl__inlinezd2appzd2recursivez00zzinline_recursionz00, 0L, BUNSPEC, 3);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
		BgL_bgl__findza7d2recursiv3816za7,
		BGl__findzd2recursivezd2callsz00zzinline_recursionz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_findzd2recursivezd2calls3419zd2envzd2zzinline_recursionz00,
		BgL_bgl__findza7d2recursiv3817za7,
		BGl__findzd2recursivezd2calls3419z00zzinline_recursionz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3785z00zzinline_recursionz00,
		BgL_bgl_findza7d2recursive3818za7,
		BGl_findzd2recursivezd2calls3423z00zzinline_recursionz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3786z00zzinline_recursionz00,
		BgL_bgl_findza7d2recursive3819za7,
		BGl_findzd2recursivezd2calls3425z00zzinline_recursionz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3787z00zzinline_recursionz00,
		BgL_bgl_findza7d2recursive3820za7,
		BGl_findzd2recursivezd2calls3427z00zzinline_recursionz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3788z00zzinline_recursionz00,
		BgL_bgl_findza7d2recursive3821za7,
		BGl_findzd2recursivezd2calls3429z00zzinline_recursionz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3800z00zzinline_recursionz00,
		BgL_bgl_findza7d2recursive3822za7,
		BGl_findzd2recursivezd2calls3454z00zzinline_recursionz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3790z00zzinline_recursionz00,
		BgL_bgl_findza7d2recursive3823za7,
		BGl_findzd2recursivezd2calls3434z00zzinline_recursionz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3789z00zzinline_recursionz00,
		BgL_bgl_findza7d2recursive3824za7,
		BGl_findzd2recursivezd2calls3431z00zzinline_recursionz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3801z00zzinline_recursionz00,
		BgL_bgl_findza7d2recursive3825za7,
		BGl_findzd2recursivezd2calls3456z00zzinline_recursionz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3791z00zzinline_recursionz00,
		BgL_bgl_findza7d2recursive3826za7,
		BGl_findzd2recursivezd2calls3436z00zzinline_recursionz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3792z00zzinline_recursionz00,
		BgL_bgl_findza7d2recursive3827za7,
		BGl_findzd2recursivezd2calls3438z00zzinline_recursionz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3793z00zzinline_recursionz00,
		BgL_bgl_findza7d2recursive3828za7,
		BGl_findzd2recursivezd2calls3440z00zzinline_recursionz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3794z00zzinline_recursionz00,
		BgL_bgl_findza7d2recursive3829za7,
		BGl_findzd2recursivezd2calls3442z00zzinline_recursionz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3795z00zzinline_recursionz00,
		BgL_bgl_findza7d2recursive3830za7,
		BGl_findzd2recursivezd2calls3444z00zzinline_recursionz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3796z00zzinline_recursionz00,
		BgL_bgl_findza7d2recursive3831za7,
		BGl_findzd2recursivezd2calls3446z00zzinline_recursionz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3797z00zzinline_recursionz00,
		BgL_bgl_findza7d2recursive3832za7,
		BGl_findzd2recursivezd2calls3448z00zzinline_recursionz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3798z00zzinline_recursionz00,
		BgL_bgl_findza7d2recursive3833za7,
		BGl_findzd2recursivezd2calls3450z00zzinline_recursionz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3799z00zzinline_recursionz00,
		BgL_bgl_findza7d2recursive3834za7,
		BGl_findzd2recursivezd2calls3452z00zzinline_recursionz00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzinline_recursionz00(long
		BgL_checksumz00_2641, char *BgL_fromz00_2642)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinline_recursionz00))
				{
					BGl_requirezd2initializa7ationz75zzinline_recursionz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzinline_recursionz00();
					BGl_cnstzd2initzd2zzinline_recursionz00();
					BGl_importedzd2moduleszd2initz00zzinline_recursionz00();
					BGl_genericzd2initzd2zzinline_recursionz00();
					BGl_methodzd2initzd2zzinline_recursionz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinline_recursionz00()
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"inline_recursion");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"inline_recursion");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"inline_recursion");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"inline_recursion");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinline_recursionz00()
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 15 */
			{	/* Inline/recursion.scm 15 */
				obj_t BgL_cportz00_2631;

				BgL_cportz00_2631 =
					bgl_open_input_string(BGl_string3803z00zzinline_recursionz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2632;

					BgL_iz00_2632 = ((long) 1);
				BgL_loopz00_2633:
					if ((BgL_iz00_2632 == ((long) -1)))
						{	/* Inline/recursion.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Inline/recursion.scm 15 */
							{	/* Inline/recursion.scm 15 */
								obj_t BgL_arg3805z00_2635;

								{	/* Inline/recursion.scm 15 */

									{	/* Inline/recursion.scm 15 */
										obj_t BgL_locationz00_2637;

										BgL_locationz00_2637 = BBOOL(((bool_t) 0));
										{	/* Inline/recursion.scm 15 */

											BgL_arg3805z00_2635 =
												BGl_readz00zz__readerz00(BgL_cportz00_2631,
												BgL_locationz00_2637);
										}
									}
								}
								{	/* Inline/recursion.scm 15 */
									int BgL_auxz00_2661;

									BgL_auxz00_2661 = (int) (BgL_iz00_2632);
									CNST_TABLE_SET(BgL_auxz00_2661, BgL_arg3805z00_2635);
							}}
							{	/* Inline/recursion.scm 15 */
								int BgL_auxz00_2638;

								BgL_auxz00_2638 = (int) ((BgL_iz00_2632 - ((long) 1)));
								{
									long BgL_iz00_2666;

									BgL_iz00_2666 = (long) (BgL_auxz00_2638);
									BgL_iz00_2632 = BgL_iz00_2666;
									goto BgL_loopz00_2633;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzinline_recursionz00()
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 15 */
			return BUNSPEC;
		}
	}



/* inline-app-recursive */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_inlinezd2appzd2recursivez00zzinline_recursionz00(BgL_nodez00_bglt
		BgL_nodez00_1, long BgL_kfactorz00_2, obj_t BgL_stackz00_3)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 40 */
			{	/* Inline/recursion.scm 41 */
				BgL_variablez00_bglt BgL_calleez00_846;

				{	/* Inline/recursion.scm 42 */
					BgL_varz00_bglt BgL_obj2155z00_1620;

					{
						BgL_appz00_bglt BgL_auxz00_2668;

						BgL_auxz00_2668 = (BgL_appz00_bglt) (BgL_nodez00_1);
						BgL_obj2155z00_1620 =
							(((BgL_appz00_bglt) CREF(BgL_auxz00_2668))->BgL_funz00);
					}
					BgL_calleez00_846 =
						(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1620))->BgL_variablez00);
				}
				if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
							(obj_t) (BgL_calleez00_846), BgL_stackz00_3)))
					{	/* Inline/recursion.scm 43 */
						return
							BGl_inlinezd2appzd2simplez00zzinline_simplez00(BgL_nodez00_1,
							BgL_kfactorz00_2, BgL_stackz00_3,
							BGl_string3779z00zzinline_recursionz00);
					}
				else
					{	/* Inline/recursion.scm 43 */
						return
							(BgL_nodez00_bglt)
							(BGl_inlinezd2appzd2labelsz00zzinline_recursionz00(BgL_nodez00_1,
								BgL_kfactorz00_2, BgL_stackz00_3));
					}
			}
		}
	}



/* _inline-app-recursive */
	obj_t BGl__inlinezd2appzd2recursivez00zzinline_recursionz00(obj_t
		BgL_envz00_2546, obj_t BgL_nodez00_2547, obj_t BgL_kfactorz00_2548,
		obj_t BgL_stackz00_2549)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 40 */
			return
				(obj_t) (BGl_inlinezd2appzd2recursivez00zzinline_recursionz00(
					(BgL_nodez00_bglt) (BgL_nodez00_2547),
					(long) CINT(BgL_kfactorz00_2548), BgL_stackz00_2549));
		}
	}



/* inline-app-labels */
	obj_t BGl_inlinezd2appzd2labelsz00zzinline_recursionz00(BgL_nodez00_bglt
		BgL_nodez00_4, long BgL_kfactorz00_5, obj_t BgL_stackz00_6)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 59 */
			{	/* Inline/recursion.scm 60 */
				BgL_variablez00_bglt BgL_variablez00_849;

				{	/* Inline/recursion.scm 60 */
					BgL_varz00_bglt BgL_obj2155z00_1622;

					{
						BgL_appz00_bglt BgL_auxz00_2683;

						BgL_auxz00_2683 = (BgL_appz00_bglt) (BgL_nodez00_4);
						BgL_obj2155z00_1622 =
							(((BgL_appz00_bglt) CREF(BgL_auxz00_2683))->BgL_funz00);
					}
					BgL_variablez00_849 =
						(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1622))->BgL_variablez00);
				}
				{	/* Inline/recursion.scm 60 */
					long BgL_callzd2siza7ez75_850;

					{	/* Inline/recursion.scm 61 */
						long BgL_auxz00_2687;

						{	/* Inline/recursion.scm 61 */
							obj_t BgL_auxz00_2688;

							{
								BgL_appz00_bglt BgL_auxz00_2689;

								BgL_auxz00_2689 = (BgL_appz00_bglt) (BgL_nodez00_4);
								BgL_auxz00_2688 =
									(((BgL_appz00_bglt) CREF(BgL_auxz00_2689))->BgL_argsz00);
							}
							BgL_auxz00_2687 = bgl_list_length(BgL_auxz00_2688);
						}
						BgL_callzd2siza7ez75_850 = (((long) 1) + BgL_auxz00_2687);
					}
					{	/* Inline/recursion.scm 61 */
						BgL_localz00_bglt BgL_localz00_851;

						{	/* Inline/recursion.scm 62 */
							obj_t BgL_arg3529z00_971;

							BgL_typez00_bglt BgL_arg3530z00_972;

							BgL_valuez00_bglt BgL_arg3531z00_973;

							BgL_arg3529z00_971 =
								(((BgL_variablez00_bglt) CREF(BgL_variablez00_849))->BgL_idz00);
							BgL_arg3530z00_972 =
								(((BgL_variablez00_bglt) CREF(BgL_variablez00_849))->
								BgL_typez00);
							BgL_arg3531z00_973 =
								(((BgL_variablez00_bglt) CREF(BgL_variablez00_849))->
								BgL_valuez00);
							BgL_localz00_851 =
								BGl_makezd2localzd2sfunz00zzast_localz00(BgL_arg3529z00_971,
								BgL_arg3530z00_972, (BgL_sfunz00_bglt) (BgL_arg3531z00_973));
						}
						{	/* Inline/recursion.scm 62 */
							BgL_valuez00_bglt BgL_oldzd2sfunzd2_852;

							BgL_oldzd2sfunzd2_852 =
								(((BgL_variablez00_bglt) CREF(BgL_variablez00_849))->
								BgL_valuez00);
							{	/* Inline/recursion.scm 65 */
								obj_t BgL_reczd2callszd2_853;

								{	/* Inline/recursion.scm 66 */
									BgL_isfunz00_bglt BgL_obj3272z00_1630;

									BgL_obj3272z00_1630 =
										(BgL_isfunz00_bglt) (BgL_oldzd2sfunzd2_852);
									{
										obj_t BgL_auxz00_2701;

										{	/* Inline/recursion.scm 66 */
											BgL_objectz00_bglt BgL_auxz00_2702;

											BgL_auxz00_2702 =
												(BgL_objectz00_bglt) (BgL_obj3272z00_1630);
											BgL_auxz00_2701 = BGL_OBJECT_WIDENING(BgL_auxz00_2702);
										}
										BgL_reczd2callszd2_853 =
											(((BgL_isfunz00_bglt) CREF(BgL_auxz00_2701))->
											BgL_recursivezd2callszd2);
								}}
								{	/* Inline/recursion.scm 66 */
									obj_t BgL_oldzd2argszd2_854;

									{
										BgL_sfunz00_bglt BgL_auxz00_2706;

										BgL_auxz00_2706 =
											(BgL_sfunz00_bglt) (BgL_oldzd2sfunzd2_852);
										BgL_oldzd2argszd2_854 =
											(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2706))->BgL_argsz00);
									}
									{	/* Inline/recursion.scm 67 */
										obj_t BgL_invzd2argszd2_855;

										BgL_invzd2argszd2_855 =
											BGl_invariantzd2argszd2zzinline_variantz00(BgL_nodez00_4,
											BgL_variablez00_849, BgL_reczd2callszd2_853);
										{	/* Inline/recursion.scm 68 */
											obj_t BgL_varzd2argszd2_856;

											BgL_varzd2argszd2_856 =
												BGl_variantzd2argszd2zzinline_variantz00
												(BgL_variablez00_849);
											{	/* Inline/recursion.scm 69 */
												obj_t BgL_newzd2argszd2_857;

												if (NULLP(BgL_varzd2argszd2_856))
													{	/* Inline/recursion.scm 70 */
														BgL_newzd2argszd2_857 = BNIL;
													}
												else
													{	/* Inline/recursion.scm 70 */
														obj_t BgL_head3403z00_955;

														BgL_head3403z00_955 = MAKE_PAIR(BNIL, BNIL);
														{
															obj_t BgL_l3401z00_957;

															obj_t BgL_tail3404z00_958;

															BgL_l3401z00_957 = BgL_varzd2argszd2_856;
															BgL_tail3404z00_958 = BgL_head3403z00_955;
														BgL_zc3anonymousza33522ze3z83_959:
															if (NULLP(BgL_l3401z00_957))
																{	/* Inline/recursion.scm 70 */
																	BgL_newzd2argszd2_857 =
																		CDR(BgL_head3403z00_955);
																}
															else
																{	/* Inline/recursion.scm 70 */
																	obj_t BgL_newtail3405z00_961;

																	{	/* Inline/recursion.scm 70 */
																		BgL_localz00_bglt BgL_arg3525z00_963;

																		{	/* Inline/recursion.scm 70 */
																			obj_t BgL_lz00_965;

																			BgL_lz00_965 = CAR(BgL_l3401z00_957);
																			{	/* Inline/recursion.scm 73 */
																				BgL_svarz00_bglt BgL_arg3527z00_966;

																				{	/* Inline/recursion.scm 73 */
																					BgL_svarz00_bglt
																						BgL_duplicated3372z00_967;
																					{	/* Inline/recursion.scm 73 */
																						BgL_variablez00_bglt
																							BgL_obj1611z00_1638;
																						BgL_obj1611z00_1638 =
																							(BgL_variablez00_bglt)
																							(BgL_lz00_965);
																						BgL_duplicated3372z00_967 =
																							(BgL_svarz00_bglt) (((
																									(BgL_variablez00_bglt)
																									CREF(BgL_obj1611z00_1638))->
																								BgL_valuez00));
																					}
																					{	/* Inline/recursion.scm 73 */
																						BgL_svarz00_bglt BgL_new3373z00_968;

																						{	/* Inline/recursion.scm 73 */
																							obj_t BgL_arg3528z00_969;

																							BgL_arg3528z00_969 =
																								(((BgL_svarz00_bglt)
																									CREF
																									(BgL_duplicated3372z00_967))->
																								BgL_locz00);
																							BgL_new3373z00_968 =
																								BGl_makezd2svarzd2zzast_varz00
																								(BgL_arg3528z00_969);
																						}
																						{	/* Inline/recursion.scm 73 */

																							BgL_arg3527z00_966 =
																								BgL_new3373z00_968;
																						}
																					}
																				}
																				BgL_arg3525z00_963 =
																					BGl_clonezd2localzd2zzast_localz00(
																					(BgL_localz00_bglt) (BgL_lz00_965),
																					(BgL_valuez00_bglt)
																					(BgL_arg3527z00_966));
																			}
																		}
																		BgL_newtail3405z00_961 =
																			MAKE_PAIR(
																			(obj_t) (BgL_arg3525z00_963), BNIL);
																	}
																	SET_CDR(BgL_tail3404z00_958,
																		BgL_newtail3405z00_961);
																	{
																		obj_t BgL_tail3404z00_2731;

																		obj_t BgL_l3401z00_2729;

																		BgL_l3401z00_2729 = CDR(BgL_l3401z00_957);
																		BgL_tail3404z00_2731 =
																			BgL_newtail3405z00_961;
																		BgL_tail3404z00_958 = BgL_tail3404z00_2731;
																		BgL_l3401z00_957 = BgL_l3401z00_2729;
																		goto BgL_zc3anonymousza33522ze3z83_959;
																	}
																}
														}
													}
												{	/* Inline/recursion.scm 70 */
													obj_t BgL_substitutez00_858;

													{	/* Inline/recursion.scm 75 */
														obj_t BgL_arg3520z00_952;

														{
															BgL_appz00_bglt BgL_auxz00_2732;

															BgL_auxz00_2732 =
																(BgL_appz00_bglt) (BgL_nodez00_4);
															BgL_arg3520z00_952 =
																(((BgL_appz00_bglt) CREF(BgL_auxz00_2732))->
																BgL_argsz00);
														}
														BgL_substitutez00_858 =
															BGl_substitutionsz00zzinline_variantz00
															(BgL_variablez00_849, BgL_arg3520z00_952,
															BgL_newzd2argszd2_857);
													}
													{	/* Inline/recursion.scm 75 */
														obj_t BgL_oldzd2bodyzd2_859;

														{	/* Inline/recursion.scm 76 */
															bool_t BgL_testz00_2736;

															{	/* Inline/recursion.scm 76 */
																obj_t BgL_obj3269z00_1646;

																BgL_obj3269z00_1646 =
																	(obj_t) (BgL_oldzd2sfunzd2_852);
																BgL_testz00_2736 =
																	BGl_iszd2azf3z21zz__objectz00
																	(BgL_obj3269z00_1646,
																	BGl_isfunz00zzinline_inlinez00);
															}
															if (BgL_testz00_2736)
																{	/* Inline/recursion.scm 77 */
																	BgL_isfunz00_bglt BgL_obj3270z00_1647;

																	BgL_obj3270z00_1647 =
																		(BgL_isfunz00_bglt) (BgL_oldzd2sfunzd2_852);
																	{	/* Inline/recursion.scm 77 */
																		BgL_nodez00_bglt BgL_auxz00_2740;

																		{
																			obj_t BgL_auxz00_2741;

																			{	/* Inline/recursion.scm 77 */
																				BgL_objectz00_bglt BgL_auxz00_2742;

																				BgL_auxz00_2742 =
																					(BgL_objectz00_bglt)
																					(BgL_obj3270z00_1647);
																				BgL_auxz00_2741 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_2742);
																			}
																			BgL_auxz00_2740 =
																				(((BgL_isfunz00_bglt)
																					CREF(BgL_auxz00_2741))->
																				BgL_originalzd2bodyzd2);
																		}
																		BgL_oldzd2bodyzd2_859 =
																			(obj_t) (BgL_auxz00_2740);
																	}
																}
															else
																{
																	BgL_sfunz00_bglt BgL_auxz00_2747;

																	BgL_auxz00_2747 =
																		(BgL_sfunz00_bglt) (BgL_oldzd2sfunzd2_852);
																	BgL_oldzd2bodyzd2_859 =
																		(((BgL_sfunz00_bglt)
																			CREF(BgL_auxz00_2747))->BgL_bodyz00);
																}
														}
														{	/* Inline/recursion.scm 76 */
															obj_t BgL_svgzd2callszd2argsz00_860;

															if (NULLP(BgL_reczd2callszd2_853))
																{	/* Inline/recursion.scm 79 */
																	BgL_svgzd2callszd2argsz00_860 = BNIL;
																}
															else
																{	/* Inline/recursion.scm 79 */
																	obj_t BgL_head3408z00_939;

																	BgL_head3408z00_939 = MAKE_PAIR(BNIL, BNIL);
																	{
																		obj_t BgL_l3406z00_941;

																		obj_t BgL_tail3409z00_942;

																		BgL_l3406z00_941 = BgL_reczd2callszd2_853;
																		BgL_tail3409z00_942 = BgL_head3408z00_939;
																	BgL_zc3anonymousza33513ze3z83_943:
																		if (NULLP(BgL_l3406z00_941))
																			{	/* Inline/recursion.scm 79 */
																				BgL_svgzd2callszd2argsz00_860 =
																					CDR(BgL_head3408z00_939);
																			}
																		else
																			{	/* Inline/recursion.scm 79 */
																				obj_t BgL_newtail3410z00_945;

																				{	/* Inline/recursion.scm 79 */
																					obj_t BgL_arg3517z00_947;

																					{	/* Inline/recursion.scm 79 */
																						BgL_appz00_bglt BgL_obj2252z00_1655;

																						{	/* Inline/recursion.scm 79 */
																							obj_t BgL_pairz00_1654;

																							BgL_pairz00_1654 =
																								BgL_l3406z00_941;
																							BgL_obj2252z00_1655 =
																								(BgL_appz00_bglt) (CAR
																								(BgL_pairz00_1654));
																						}
																						BgL_arg3517z00_947 =
																							(((BgL_appz00_bglt)
																								CREF(BgL_obj2252z00_1655))->
																							BgL_argsz00);
																					}
																					BgL_newtail3410z00_945 =
																						MAKE_PAIR(BgL_arg3517z00_947, BNIL);
																				}
																				SET_CDR(BgL_tail3409z00_942,
																					BgL_newtail3410z00_945);
																				{
																					obj_t BgL_tail3409z00_2763;

																					obj_t BgL_l3406z00_2761;

																					BgL_l3406z00_2761 =
																						CDR(BgL_l3406z00_941);
																					BgL_tail3409z00_2763 =
																						BgL_newtail3410z00_945;
																					BgL_tail3409z00_942 =
																						BgL_tail3409z00_2763;
																					BgL_l3406z00_941 = BgL_l3406z00_2761;
																					goto
																						BgL_zc3anonymousza33513ze3z83_943;
																				}
																			}
																	}
																}
															{	/* Inline/recursion.scm 79 */
																bool_t BgL_removez12z12_861;

																{
																	obj_t BgL_l3411z00_931;

																	BgL_l3411z00_931 = BgL_reczd2callszd2_853;
																BgL_zc3anonymousza33508ze3z83_932:
																	if (PAIRP(BgL_l3411z00_931))
																		{	/* Inline/recursion.scm 80 */
																			{	/* Inline/recursion.scm 80 */
																				obj_t BgL_arg3510z00_934;

																				BgL_arg3510z00_934 =
																					CAR(BgL_l3411z00_931);
																				BGl_removezd2invariantzd2argsz12z12zzinline_variantz00
																					((BgL_appz00_bglt)
																					(BgL_arg3510z00_934));
																			}
																			{
																				obj_t BgL_l3411z00_2769;

																				BgL_l3411z00_2769 =
																					CDR(BgL_l3411z00_931);
																				BgL_l3411z00_931 = BgL_l3411z00_2769;
																				goto BgL_zc3anonymousza33508ze3z83_932;
																			}
																		}
																	else
																		{	/* Inline/recursion.scm 80 */
																			BgL_removez12z12_861 = ((bool_t) 1);
																		}
																}
																{	/* Inline/recursion.scm 80 */
																	BgL_nodez00_bglt BgL_newzd2bodyzd2_862;

																	{	/* Inline/recursion.scm 81 */
																		obj_t BgL_arg3505z00_927;

																		obj_t BgL_arg3506z00_928;

																		obj_t BgL_arg3507z00_929;

																		BgL_arg3505z00_927 =
																			MAKE_PAIR(
																			(obj_t) (BgL_variablez00_849),
																			BgL_oldzd2argszd2_854);
																		BgL_arg3506z00_928 =
																			MAKE_PAIR((obj_t) (BgL_localz00_851),
																			BgL_substitutez00_858);
																		BgL_arg3507z00_929 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_nodez00_4))->BgL_locz00);
																		BgL_newzd2bodyzd2_862 =
																			BGl_alphatiza7eza7zzast_alphatiza7eza7
																			(BgL_arg3505z00_927, BgL_arg3506z00_928,
																			BgL_arg3507z00_929,
																			(BgL_nodez00_bglt)
																			(BgL_oldzd2bodyzd2_859));
																	}
																	{	/* Inline/recursion.scm 81 */
																		bool_t BgL_restorez12z12_863;

																		{
																			obj_t BgL_ll3413z00_918;

																			obj_t BgL_ll3414z00_919;

																			BgL_ll3413z00_918 =
																				BgL_reczd2callszd2_853;
																			BgL_ll3414z00_919 =
																				BgL_svgzd2callszd2argsz00_860;
																		BgL_zc3anonymousza33501ze3z83_920:
																			if (NULLP(BgL_ll3413z00_918))
																				{	/* Inline/recursion.scm 85 */
																					BgL_restorez12z12_863 = ((bool_t) 1);
																				}
																			else
																				{	/* Inline/recursion.scm 85 */
																					{	/* Inline/recursion.scm 86 */
																						obj_t BgL_appz00_922;

																						obj_t BgL_argsz00_923;

																						BgL_appz00_922 =
																							CAR(BgL_ll3413z00_918);
																						BgL_argsz00_923 =
																							CAR(BgL_ll3414z00_919);
																						{
																							BgL_appz00_bglt BgL_auxz00_2782;

																							BgL_auxz00_2782 =
																								(BgL_appz00_bglt)
																								(BgL_appz00_922);
																							((((BgL_appz00_bglt)
																										CREF(BgL_auxz00_2782))->
																									BgL_argsz00) =
																								((obj_t) BgL_argsz00_923),
																								BUNSPEC);
																						}
																					}
																					{
																						obj_t BgL_ll3414z00_2787;

																						obj_t BgL_ll3413z00_2785;

																						BgL_ll3413z00_2785 =
																							CDR(BgL_ll3413z00_918);
																						BgL_ll3414z00_2787 =
																							CDR(BgL_ll3414z00_919);
																						BgL_ll3414z00_919 =
																							BgL_ll3414z00_2787;
																						BgL_ll3413z00_918 =
																							BgL_ll3413z00_2785;
																						goto
																							BgL_zc3anonymousza33501ze3z83_920;
																					}
																				}
																		}
																		{	/* Inline/recursion.scm 85 */
																			BgL_sfunz00_bglt BgL_newzd2sfunzd2_864;

																			{	/* Inline/recursion.scm 89 */
																				BgL_sfunz00_bglt
																					BgL_duplicated3374z00_900;
																				BgL_duplicated3374z00_900 =
																					(BgL_sfunz00_bglt)
																					(BgL_oldzd2sfunzd2_852);
																				{	/* Inline/recursion.scm 89 */
																					BgL_sfunz00_bglt BgL_new3375z00_901;

																					{	/* Inline/recursion.scm 89 */
																						long BgL_arg3486z00_902;

																						obj_t BgL_arg3487z00_903;

																						obj_t BgL_arg3488z00_904;

																						obj_t BgL_arg3489z00_905;

																						bool_t BgL_arg3490z00_906;

																						obj_t BgL_arg3491z00_907;

																						obj_t BgL_arg3492z00_908;

																						obj_t BgL_arg3493z00_909;

																						obj_t BgL_arg3494z00_910;

																						obj_t BgL_arg3495z00_911;

																						obj_t BgL_arg3496z00_912;

																						obj_t BgL_arg3497z00_913;

																						obj_t BgL_arg3498z00_914;

																						obj_t BgL_arg3499z00_915;

																						obj_t BgL_arg3500z00_916;

																						{
																							BgL_funz00_bglt BgL_auxz00_2790;

																							BgL_auxz00_2790 =
																								(BgL_funz00_bglt)
																								(BgL_duplicated3374z00_900);
																							BgL_arg3486z00_902 =
																								(((BgL_funz00_bglt)
																									CREF(BgL_auxz00_2790))->
																								BgL_arityz00);
																						}
																						{
																							BgL_funz00_bglt BgL_auxz00_2793;

																							BgL_auxz00_2793 =
																								(BgL_funz00_bglt)
																								(BgL_duplicated3374z00_900);
																							BgL_arg3487z00_903 =
																								(((BgL_funz00_bglt)
																									CREF(BgL_auxz00_2793))->
																								BgL_sidezd2effectzf3z21);
																						}
																						{
																							BgL_funz00_bglt BgL_auxz00_2796;

																							BgL_auxz00_2796 =
																								(BgL_funz00_bglt)
																								(BgL_duplicated3374z00_900);
																							BgL_arg3488z00_904 =
																								(((BgL_funz00_bglt)
																									CREF(BgL_auxz00_2796))->
																								BgL_predicatezd2ofzd2);
																						}
																						{
																							BgL_funz00_bglt BgL_auxz00_2799;

																							BgL_auxz00_2799 =
																								(BgL_funz00_bglt)
																								(BgL_duplicated3374z00_900);
																							BgL_arg3489z00_905 =
																								(((BgL_funz00_bglt)
																									CREF(BgL_auxz00_2799))->
																								BgL_stackzd2allocatorzd2);
																						}
																						{
																							BgL_funz00_bglt BgL_auxz00_2802;

																							BgL_auxz00_2802 =
																								(BgL_funz00_bglt)
																								(BgL_duplicated3374z00_900);
																							BgL_arg3490z00_906 =
																								(((BgL_funz00_bglt)
																									CREF(BgL_auxz00_2802))->
																								BgL_topzf3zf3);
																						}
																						{
																							BgL_funz00_bglt BgL_auxz00_2805;

																							BgL_auxz00_2805 =
																								(BgL_funz00_bglt)
																								(BgL_duplicated3374z00_900);
																							BgL_arg3491z00_907 =
																								(((BgL_funz00_bglt)
																									CREF(BgL_auxz00_2805))->
																								BgL_thezd2closurezd2);
																						}
																						{
																							BgL_funz00_bglt BgL_auxz00_2808;

																							BgL_auxz00_2808 =
																								(BgL_funz00_bglt)
																								(BgL_duplicated3374z00_900);
																							BgL_arg3492z00_908 =
																								(((BgL_funz00_bglt)
																									CREF(BgL_auxz00_2808))->
																								BgL_effectz00);
																						}
																						BgL_arg3493z00_909 =
																							(((BgL_sfunz00_bglt)
																								CREF
																								(BgL_duplicated3374z00_900))->
																							BgL_propertyz00);
																						BgL_arg3494z00_910 =
																							(((BgL_sfunz00_bglt)
																								CREF
																								(BgL_duplicated3374z00_900))->
																							BgL_argszd2namezd2);
																						BgL_arg3495z00_911 =
																							CNST_TABLE_REF(((long) 0));
																						BgL_arg3496z00_912 =
																							(((BgL_sfunz00_bglt)
																								CREF
																								(BgL_duplicated3374z00_900))->
																							BgL_dssslzd2keywordszd2);
																						BgL_arg3497z00_913 =
																							(((BgL_sfunz00_bglt)
																								CREF
																								(BgL_duplicated3374z00_900))->
																							BgL_locz00);
																						BgL_arg3498z00_914 =
																							(((BgL_sfunz00_bglt)
																								CREF
																								(BgL_duplicated3374z00_900))->
																							BgL_optionalsz00);
																						BgL_arg3499z00_915 =
																							(((BgL_sfunz00_bglt)
																								CREF
																								(BgL_duplicated3374z00_900))->
																							BgL_keysz00);
																						BgL_arg3500z00_916 =
																							(((BgL_sfunz00_bglt)
																								CREF
																								(BgL_duplicated3374z00_900))->
																							BgL_thezd2closurezd2globalz00);
																						BgL_new3375z00_901 =
																							BGl_makezd2sfunzd2zzast_varz00
																							(BgL_arg3486z00_902,
																							BgL_arg3487z00_903,
																							BgL_arg3488z00_904,
																							BgL_arg3489z00_905,
																							BgL_arg3490z00_906,
																							BgL_arg3491z00_907,
																							BgL_arg3492z00_908,
																							BgL_arg3493z00_909,
																							BgL_newzd2argszd2_857,
																							BgL_arg3494z00_910,
																							(obj_t) (BgL_newzd2bodyzd2_862),
																							BgL_arg3495z00_911,
																							BgL_arg3496z00_912,
																							BgL_arg3497z00_913,
																							BgL_arg3498z00_914,
																							BgL_arg3499z00_915,
																							BgL_arg3500z00_916);
																					}
																					{	/* Inline/recursion.scm 89 */

																						BgL_newzd2sfunzd2_864 =
																							BgL_new3375z00_901;
																			}}}
																			{	/* Inline/recursion.scm 89 */
																				obj_t BgL_newzd2kfactorzd2_865;

																				BgL_newzd2kfactorzd2_865 =
																					PROCEDURE_ENTRY
																					(BGl_za2inliningzd2reducezd2kfactorza2z00zzengine_paramz00)
																					(BGl_za2inliningzd2reducezd2kfactorza2z00zzengine_paramz00,
																					BINT(BgL_kfactorz00_5), BEOA);
																				{	/* Inline/recursion.scm 93 */

																					{
																						obj_t BgL_ll3416z00_867;

																						obj_t BgL_ll3417z00_868;

																						BgL_ll3416z00_867 =
																							BgL_newzd2argszd2_857;
																						BgL_ll3417z00_868 =
																							BgL_varzd2argszd2_856;
																					BgL_zc3anonymousza33459ze3z83_869:
																						if (NULLP(BgL_ll3416z00_867))
																							{	/* Inline/recursion.scm 95 */
																								((bool_t) 1);
																							}
																						else
																							{	/* Inline/recursion.scm 95 */
																								{	/* Inline/recursion.scm 96 */
																									obj_t BgL_newz00_871;

																									obj_t BgL_oldz00_872;

																									BgL_newz00_871 =
																										CAR(BgL_ll3416z00_867);
																									BgL_oldz00_872 =
																										CAR(BgL_ll3417z00_868);
																									{	/* Inline/recursion.scm 96 */
																										bool_t BgL_arg3461z00_873;

																										{
																											BgL_localz00_bglt
																												BgL_auxz00_2828;
																											BgL_auxz00_2828 =
																												(BgL_localz00_bglt)
																												(BgL_oldz00_872);
																											BgL_arg3461z00_873 =
																												(((BgL_localz00_bglt)
																													CREF
																													(BgL_auxz00_2828))->
																												BgL_userzf3zf3);
																										}
																										{
																											BgL_localz00_bglt
																												BgL_auxz00_2831;
																											BgL_auxz00_2831 =
																												(BgL_localz00_bglt)
																												(BgL_newz00_871);
																											((((BgL_localz00_bglt)
																														CREF
																														(BgL_auxz00_2831))->
																													BgL_userzf3zf3) =
																												((bool_t)
																													BgL_arg3461z00_873),
																												BUNSPEC);
																										}
																									}
																								}
																								{
																									obj_t BgL_ll3417z00_2836;

																									obj_t BgL_ll3416z00_2834;

																									BgL_ll3416z00_2834 =
																										CDR(BgL_ll3416z00_867);
																									BgL_ll3417z00_2836 =
																										CDR(BgL_ll3417z00_868);
																									BgL_ll3417z00_868 =
																										BgL_ll3417z00_2836;
																									BgL_ll3416z00_867 =
																										BgL_ll3416z00_2834;
																									goto
																										BgL_zc3anonymousza33459ze3z83_869;
																								}
																							}
																					}
																					{	/* Inline/recursion.scm 101 */
																						bool_t BgL_arg3464z00_877;

																						{	/* Inline/recursion.scm 101 */
																							bool_t BgL_testz00_2838;

																							{	/* Inline/recursion.scm 101 */
																								obj_t BgL_obj1751z00_1694;

																								BgL_obj1751z00_1694 =
																									(obj_t) (BgL_variablez00_849);
																								BgL_testz00_2838 =
																									BGl_iszd2azf3z21zz__objectz00
																									(BgL_obj1751z00_1694,
																									BGl_globalz00zzast_varz00);
																							}
																							if (BgL_testz00_2838)
																								{
																									BgL_globalz00_bglt
																										BgL_auxz00_2841;
																									BgL_auxz00_2841 =
																										(BgL_globalz00_bglt)
																										(BgL_variablez00_849);
																									BgL_arg3464z00_877 =
																										(((BgL_globalz00_bglt)
																											CREF(BgL_auxz00_2841))->
																										BgL_userzf3zf3);
																								}
																							else
																								{	/* Inline/recursion.scm 103 */
																									bool_t BgL_testz00_2844;

																									{	/* Inline/recursion.scm 103 */
																										obj_t BgL_obj1812z00_1696;

																										BgL_obj1812z00_1696 =
																											(obj_t)
																											(BgL_variablez00_849);
																										BgL_testz00_2844 =
																											BGl_iszd2azf3z21zz__objectz00
																											(BgL_obj1812z00_1696,
																											BGl_localz00zzast_varz00);
																									}
																									if (BgL_testz00_2844)
																										{
																											BgL_localz00_bglt
																												BgL_auxz00_2847;
																											BgL_auxz00_2847 =
																												(BgL_localz00_bglt)
																												(BgL_variablez00_849);
																											BgL_arg3464z00_877 =
																												(((BgL_localz00_bglt)
																													CREF
																													(BgL_auxz00_2847))->
																												BgL_userzf3zf3);
																										}
																									else
																										{	/* Inline/recursion.scm 103 */
																											BgL_arg3464z00_877 =
																												((bool_t) 0);
																										}
																								}
																						}
																						((((BgL_localz00_bglt)
																									CREF(BgL_localz00_851))->
																								BgL_userzf3zf3) =
																							((bool_t) BgL_arg3464z00_877),
																							BUNSPEC);
																					}
																					{
																						BgL_valuez00_bglt BgL_auxz00_2853;

																						BgL_variablez00_bglt
																							BgL_auxz00_2851;
																						BgL_auxz00_2853 =
																							(BgL_valuez00_bglt)
																							(BgL_newzd2sfunzd2_864);
																						BgL_auxz00_2851 =
																							(BgL_variablez00_bglt)
																							(BgL_localz00_851);
																						((((BgL_variablez00_bglt)
																									CREF(BgL_auxz00_2851))->
																								BgL_valuez00) =
																							((BgL_valuez00_bglt)
																								BgL_auxz00_2853), BUNSPEC);
																					}
																					{	/* Inline/recursion.scm 116 */
																						bool_t BgL_testz00_2856;

																						{	/* Inline/recursion.scm 116 */
																							obj_t BgL_auxz00_2857;

																							{	/* Inline/recursion.scm 116 */
																								obj_t BgL_auxz00_2858;

																								{
																									BgL_sfunz00_bglt
																										BgL_auxz00_2859;
																									BgL_auxz00_2859 =
																										(BgL_sfunz00_bglt)
																										(BgL_oldzd2sfunzd2_852);
																									BgL_auxz00_2858 =
																										(((BgL_sfunz00_bglt)
																											CREF(BgL_auxz00_2859))->
																										BgL_classz00);
																								}
																								BgL_auxz00_2857 =
																									BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																									(BgL_auxz00_2858,
																									CNST_TABLE_REF(((long) 1)));
																							}
																							BgL_testz00_2856 =
																								CBOOL(BgL_auxz00_2857);
																						}
																						if (BgL_testz00_2856)
																							{	/* Inline/recursion.scm 116 */
																								BFALSE;
																							}
																						else
																							{	/* Inline/recursion.scm 116 */
																								if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT(((long) 3)), BGl_za2verboseza2z00zzengine_paramz00))
																									{	/* Inline/recursion.scm 117 */
																										obj_t BgL_arg3470z00_884;

																										obj_t BgL_arg3472z00_886;

																										BgL_arg3470z00_884 =
																											BGl_shapez00zztools_shapez00
																											((obj_t)
																											(BgL_variablez00_849));
																										BgL_arg3472z00_886 =
																											BGl_currentzd2functionzd2zztools_errorz00
																											();
																										{	/* Inline/recursion.scm 117 */
																											obj_t BgL_list3474z00_888;

																											{	/* Inline/recursion.scm 117 */
																												obj_t
																													BgL_arg3475z00_889;
																												{	/* Inline/recursion.scm 117 */
																													obj_t
																														BgL_arg3476z00_890;
																													{	/* Inline/recursion.scm 117 */
																														obj_t
																															BgL_arg3477z00_891;
																														{	/* Inline/recursion.scm 117 */
																															obj_t
																																BgL_arg3478z00_892;
																															{	/* Inline/recursion.scm 117 */
																																obj_t
																																	BgL_arg3479z00_893;
																																BgL_arg3479z00_893
																																	=
																																	MAKE_PAIR
																																	(BCHAR((
																																			(unsigned
																																				char)
																																			'\n')),
																																	BNIL);
																																BgL_arg3478z00_892
																																	=
																																	MAKE_PAIR
																																	(BGl_string3780z00zzinline_recursionz00,
																																	BgL_arg3479z00_893);
																															}
																															BgL_arg3477z00_891
																																=
																																MAKE_PAIR
																																(BgL_arg3472z00_886,
																																BgL_arg3478z00_892);
																														}
																														BgL_arg3476z00_890 =
																															MAKE_PAIR
																															(BGl_string3781z00zzinline_recursionz00,
																															BgL_arg3477z00_891);
																													}
																													BgL_arg3475z00_889 =
																														MAKE_PAIR
																														(BgL_arg3470z00_884,
																														BgL_arg3476z00_890);
																												}
																												BgL_list3474z00_888 =
																													MAKE_PAIR
																													(BGl_string3782z00zzinline_recursionz00,
																													BgL_arg3475z00_889);
																											}
																											BGl_verbosez00zztools_speekz00
																												(BINT(((long) 3)),
																												BgL_list3474z00_888);
																									}}
																								else
																									{	/* Inline/recursion.scm 117 */
																										BUNSPEC;
																									}
																							}
																					}
																					BGl_inlinezd2sfunz12zc0zzinline_inlinez00
																						((BgL_variablez00_bglt)
																						(BgL_localz00_851),
																						(long)
																						CINT(BgL_newzd2kfactorzd2_865),
																						BgL_stackz00_6);
																					{	/* Inline/recursion.scm 127 */
																						BgL_appz00_bglt
																							BgL_newzd2callzd2_896;
																						BgL_newzd2callzd2_896 =
																							BGl_removezd2invariantzd2argsz12z12zzinline_variantz00
																							((BgL_appz00_bglt)
																							(BgL_nodez00_4));
																						{	/* Inline/recursion.scm 128 */
																							bool_t BgL_testz00_2885;

																							if (CBOOL
																								(BGl_za2optimzd2unrollzd2loopzf3za2zf3zzengine_paramz00))
																								{	/* Inline/recursion.scm 128 */
																									if (BGl_iszd2loopzf3z21zzinline_loopz00(BgL_variablez00_849))
																										{	/* Inline/recursion.scm 129 */
																											if (BGl_innerzd2loopzf3z21zzinline_loopz00(BgL_variablez00_849))
																												{	/* Inline/recursion.scm 132 */
																													BgL_testz00_2885 =
																														((bool_t) 0);
																												}
																											else
																												{	/* Inline/recursion.scm 132 */
																													BgL_testz00_2885 =
																														BGl_inlinezd2appzf3z21zzinline_appz00
																														(
																														(BgL_variablez00_bglt)
																														(BgL_localz00_851),
																														(long)
																														CINT
																														(BgL_newzd2kfactorzd2_865),
																														BgL_callzd2siza7ez75_850,
																														BgL_stackz00_6);
																										}}
																									else
																										{	/* Inline/recursion.scm 129 */
																											BgL_testz00_2885 =
																												((bool_t) 0);
																										}
																								}
																							else
																								{	/* Inline/recursion.scm 128 */
																									BgL_testz00_2885 =
																										((bool_t) 0);
																								}
																							if (BgL_testz00_2885)
																								{	/* Inline/recursion.scm 128 */
																									return
																										BGl_unrollzd2callzd2zzinline_recursionz00
																										(BgL_variablez00_849,
																										BgL_nodez00_4,
																										BgL_localz00_851,
																										BgL_newzd2kfactorzd2_865,
																										BgL_newzd2callzd2_896,
																										BgL_stackz00_6);
																								}
																							else
																								{	/* Inline/recursion.scm 128 */
																									return
																										(obj_t)
																										(BGl_plainzd2callzd2zzinline_recursionz00
																										(BgL_variablez00_849,
																											BgL_nodez00_4,
																											BgL_localz00_851,
																											BgL_newzd2callzd2_896,
																											BgL_stackz00_6));
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
									}
								}
							}
						}
					}
				}
			}
		}
	}



/* plain-call */
	BgL_letzd2funzd2_bglt
		BGl_plainzd2callzd2zzinline_recursionz00(BgL_variablez00_bglt
		BgL_variablez00_7, BgL_nodez00_bglt BgL_nodez00_8,
		BgL_localz00_bglt BgL_localz00_9, BgL_appz00_bglt BgL_newzd2callzd2_10,
		obj_t BgL_stackz00_11)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 140 */
			BGl_shrinkzd2argsz12zc0zzinline_variantz00(BgL_variablez00_7);
			{	/* Inline/recursion.scm 150 */
				obj_t BgL_locz00_978;

				BgL_locz00_978 = (((BgL_nodez00_bglt) CREF(BgL_nodez00_8))->BgL_locz00);
				{	/* Inline/recursion.scm 153 */
					BgL_typez00_bglt BgL_arg3537z00_979;

					obj_t BgL_arg3539z00_981;

					BgL_nodez00_bglt BgL_arg3540z00_982;

					BgL_arg3537z00_979 =
						(((BgL_nodez00_bglt) CREF(BgL_nodez00_8))->BgL_typez00);
					{	/* Inline/recursion.scm 154 */
						obj_t BgL_list3541z00_983;

						BgL_list3541z00_983 = MAKE_PAIR((obj_t) (BgL_localz00_9), BNIL);
						BgL_arg3539z00_981 = BgL_list3541z00_983;
					}
					{	/* Inline/recursion.scm 155 */
						obj_t BgL_arg3542z00_984;

						obj_t BgL_arg3543z00_985;

						{	/* Inline/recursion.scm 155 */
							obj_t BgL_list3544z00_986;

							BgL_list3544z00_986 =
								MAKE_PAIR((obj_t) (BgL_variablez00_7), BNIL);
							BgL_arg3542z00_984 = BgL_list3544z00_986;
						}
						{	/* Inline/recursion.scm 155 */
							obj_t BgL_list3545z00_987;

							BgL_list3545z00_987 = MAKE_PAIR((obj_t) (BgL_localz00_9), BNIL);
							BgL_arg3543z00_985 = BgL_list3545z00_987;
						}
						BgL_arg3540z00_982 =
							BGl_alphatiza7eza7zzast_alphatiza7eza7(BgL_arg3542z00_984,
							BgL_arg3543z00_985, BgL_locz00_978,
							(BgL_nodez00_bglt) (BgL_newzd2callzd2_10));
					}
					return
						BGl_makezd2letzd2funz00zzast_nodez00(BgL_locz00_978,
						BgL_arg3537z00_979, BUNSPEC, BINT(((long) -1)), BgL_arg3539z00_981,
						BgL_arg3540z00_982);
		}}}
	}



/* unroll-call */
	obj_t BGl_unrollzd2callzd2zzinline_recursionz00(BgL_variablez00_bglt
		BgL_variablez00_12, BgL_nodez00_bglt BgL_nodez00_13,
		BgL_localz00_bglt BgL_localz00_14, obj_t BgL_kfactorz00_15,
		BgL_appz00_bglt BgL_callz00_16, obj_t BgL_stackz00_17)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 160 */
			{	/* Inline/recursion.scm 166 */
				obj_t BgL_locz00_988;

				{
					BgL_nodez00_bglt BgL_auxz00_2911;

					BgL_auxz00_2911 = (BgL_nodez00_bglt) (BgL_callz00_16);
					BgL_locz00_988 =
						(((BgL_nodez00_bglt) CREF(BgL_auxz00_2911))->BgL_locz00);
				}
				{	/* Inline/recursion.scm 166 */
					BgL_nodez00_bglt BgL_newzd2callzd2_989;

					{	/* Inline/recursion.scm 167 */
						obj_t BgL_arg3557z00_1007;

						obj_t BgL_arg3558z00_1008;

						{	/* Inline/recursion.scm 167 */
							obj_t BgL_list3559z00_1009;

							BgL_list3559z00_1009 =
								MAKE_PAIR((obj_t) (BgL_variablez00_12), BNIL);
							BgL_arg3557z00_1007 = BgL_list3559z00_1009;
						}
						{	/* Inline/recursion.scm 167 */
							obj_t BgL_list3560z00_1010;

							BgL_list3560z00_1010 = MAKE_PAIR((obj_t) (BgL_localz00_14), BNIL);
							BgL_arg3558z00_1008 = BgL_list3560z00_1010;
						}
						BgL_newzd2callzd2_989 =
							BGl_alphatiza7eza7zzast_alphatiza7eza7(BgL_arg3557z00_1007,
							BgL_arg3558z00_1008, BgL_locz00_988,
							(BgL_nodez00_bglt) (BgL_callz00_16));
					}
					{	/* Inline/recursion.scm 168 */
						BgL_nodez00_bglt BgL_newzd2bodyzd2_991;

						{	/* Inline/recursion.scm 171 */
							obj_t BgL_arg3554z00_1004;

							BgL_arg3554z00_1004 =
								MAKE_PAIR((obj_t) (BgL_localz00_14), BgL_stackz00_17);
							BgL_newzd2bodyzd2_991 =
								BGl_inlinezd2appzd2simplez00zzinline_simplez00
								(BgL_newzd2callzd2_989, (long) CINT(BgL_kfactorz00_15),
								BgL_arg3554z00_1004, BGl_string3783z00zzinline_recursionz00);
						}
						{	/* Inline/recursion.scm 169 */

							BGl_shrinkzd2argsz12zc0zzinline_variantz00(BgL_variablez00_12);
							{	/* Inline/recursion.scm 180 */
								obj_t BgL__z00_992;

								{	/* Inline/recursion.scm 186 */
									BgL_nodez00_bglt BgL_arg3546z00_994;

									{	/* Inline/recursion.scm 186 */
										obj_t BgL_zc3anonymousza33549ze3z83_2550;

										BgL_zc3anonymousza33549ze3z83_2550 =
											make_fx_procedure
											(BGl_zc3anonymousza33549ze3z83zzinline_recursionz00,
											(int) (((long) 1)), (int) (((long) 2)));
										PROCEDURE_SET(BgL_zc3anonymousza33549ze3z83_2550,
											(int) (((long) 0)), (obj_t) (BgL_localz00_14));
										PROCEDURE_SET(BgL_zc3anonymousza33549ze3z83_2550,
											(int) (((long) 1)), BgL_locz00_988);
										BgL_arg3546z00_994 =
											BGl_nestzd2loopz12zc0zzinline_loopz00
											(BgL_newzd2bodyzd2_991, BgL_localz00_14,
											BgL_zc3anonymousza33549ze3z83_2550);
									}
									BgL__z00_992 =
										BGl_nodezd2csez12zc0zzreduce_csez00(BgL_arg3546z00_994,
										BNIL);
								}
								{	/* Inline/recursion.scm 180 */
									obj_t BgL_nodez00_993;

									{	/* Inline/recursion.scm 180 */
										int BgL_auxz00_2935;

										BgL_auxz00_2935 = (int) (((long) 1));
										BgL_nodez00_993 = BGL_MVALUES_VAL(BgL_auxz00_2935);
									}
									return BgL_nodez00_993;
								}
							}
						}
					}
				}
			}
		}
	}



/* <anonymous:3549> */
	obj_t BGl_zc3anonymousza33549ze3z83zzinline_recursionz00(obj_t
		BgL_envz00_2551, obj_t BgL_nodez00_2554)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 183 */
			{	/* Inline/recursion.scm 186 */
				obj_t BgL_localz00_2552;

				obj_t BgL_locz00_2553;

				BgL_localz00_2552 = PROCEDURE_REF(BgL_envz00_2551, (int) (((long) 0)));
				BgL_locz00_2553 = PROCEDURE_REF(BgL_envz00_2551, (int) (((long) 1)));
				{
					obj_t BgL_nodez00_997;

					{	/* Inline/recursion.scm 186 */
						BgL_letzd2funzd2_bglt BgL_auxz00_2942;

						BgL_nodez00_997 = BgL_nodez00_2554;
						{	/* Inline/recursion.scm 186 */
							BgL_typez00_bglt BgL_arg3550z00_999;

							obj_t BgL_arg3552z00_1001;

							{
								BgL_nodez00_bglt BgL_auxz00_2943;

								BgL_auxz00_2943 = (BgL_nodez00_bglt) (BgL_nodez00_997);
								BgL_arg3550z00_999 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_2943))->BgL_typez00);
							}
							{	/* Inline/recursion.scm 188 */
								obj_t BgL_list3553z00_1002;

								BgL_list3553z00_1002 = MAKE_PAIR(BgL_localz00_2552, BNIL);
								BgL_arg3552z00_1001 = BgL_list3553z00_1002;
							}
							BgL_auxz00_2942 =
								BGl_makezd2letzd2funz00zzast_nodez00(BgL_locz00_2553,
								BgL_arg3550z00_999, BUNSPEC, BINT(((long) -1)),
								BgL_arg3552z00_1001, (BgL_nodez00_bglt) (BgL_nodez00_997));
						}
						return (obj_t) (BgL_auxz00_2942);
					}
				}
			}
		}
	}



/* is-recursive? */
	BGL_EXPORTED_DEF bool_t
		BGl_iszd2recursivezf3z21zzinline_recursionz00(BgL_variablez00_bglt
		BgL_varz00_18)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 195 */
			{	/* Inline/recursion.scm 197 */
				BgL_valuez00_bglt BgL_sfunz00_1011;

				BgL_sfunz00_1011 =
					(((BgL_variablez00_bglt) CREF(BgL_varz00_18))->BgL_valuez00);
				{	/* Inline/recursion.scm 198 */
					bool_t BgL_testz00_2952;

					{	/* Inline/recursion.scm 198 */
						obj_t BgL_obj3269z00_1723;

						BgL_obj3269z00_1723 = (obj_t) (BgL_sfunz00_1011);
						BgL_testz00_2952 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj3269z00_1723,
							BGl_isfunz00zzinline_inlinez00);
					}
					if (BgL_testz00_2952)
						{	/* Inline/recursion.scm 205 */
							bool_t BgL_testz00_2955;

							{	/* Inline/recursion.scm 205 */
								obj_t BgL_auxz00_2956;

								{	/* Inline/recursion.scm 205 */
									BgL_isfunz00_bglt BgL_obj3272z00_1724;

									BgL_obj3272z00_1724 = (BgL_isfunz00_bglt) (BgL_sfunz00_1011);
									{
										obj_t BgL_auxz00_2958;

										{	/* Inline/recursion.scm 205 */
											BgL_objectz00_bglt BgL_auxz00_2959;

											BgL_auxz00_2959 =
												(BgL_objectz00_bglt) (BgL_obj3272z00_1724);
											BgL_auxz00_2958 = BGL_OBJECT_WIDENING(BgL_auxz00_2959);
										}
										BgL_auxz00_2956 =
											(((BgL_isfunz00_bglt) CREF(BgL_auxz00_2958))->
											BgL_recursivezd2callszd2);
									}
								}
								BgL_testz00_2955 = PAIRP(BgL_auxz00_2956);
							}
							if (BgL_testz00_2955)
								{	/* Inline/recursion.scm 205 */
									return ((bool_t) 1);
								}
							else
								{	/* Inline/recursion.scm 207 */
									bool_t BgL_testz00_2964;

									{	/* Inline/recursion.scm 207 */
										obj_t BgL_auxz00_2965;

										{	/* Inline/recursion.scm 207 */
											BgL_isfunz00_bglt BgL_obj3272z00_1726;

											BgL_obj3272z00_1726 =
												(BgL_isfunz00_bglt) (BgL_sfunz00_1011);
											{
												obj_t BgL_auxz00_2967;

												{	/* Inline/recursion.scm 207 */
													BgL_objectz00_bglt BgL_auxz00_2968;

													BgL_auxz00_2968 =
														(BgL_objectz00_bglt) (BgL_obj3272z00_1726);
													BgL_auxz00_2967 =
														BGL_OBJECT_WIDENING(BgL_auxz00_2968);
												}
												BgL_auxz00_2965 =
													(((BgL_isfunz00_bglt) CREF(BgL_auxz00_2967))->
													BgL_recursivezd2callszd2);
											}
										}
										BgL_testz00_2964 = NULLP(BgL_auxz00_2965);
									}
									if (BgL_testz00_2964)
										{	/* Inline/recursion.scm 207 */
											return ((bool_t) 0);
										}
									else
										{	/* Inline/recursion.scm 210 */
											obj_t BgL_callsz00_1015;

											{	/* Inline/recursion.scm 210 */
												BgL_nodez00_bglt BgL_arg3564z00_1016;

												{	/* Inline/recursion.scm 210 */
													BgL_isfunz00_bglt BgL_obj3270z00_1728;

													BgL_obj3270z00_1728 =
														(BgL_isfunz00_bglt) (BgL_sfunz00_1011);
													{
														obj_t BgL_auxz00_2974;

														{	/* Inline/recursion.scm 210 */
															BgL_objectz00_bglt BgL_auxz00_2975;

															BgL_auxz00_2975 =
																(BgL_objectz00_bglt) (BgL_obj3270z00_1728);
															BgL_auxz00_2974 =
																BGL_OBJECT_WIDENING(BgL_auxz00_2975);
														}
														BgL_arg3564z00_1016 =
															(((BgL_isfunz00_bglt) CREF(BgL_auxz00_2974))->
															BgL_originalzd2bodyzd2);
													}
												}
												{	/* Inline/recursion.scm 210 */
													obj_t BgL_method3420z00_1731;

													{	/* Inline/recursion.scm 210 */
														BgL_objectz00_bglt BgL_objz00_1732;

														BgL_objz00_1732 =
															(BgL_objectz00_bglt) (BgL_arg3564z00_1016);
														{	/* Inline/recursion.scm 210 */
															long BgL_objzd2classzd2numz00_1733;

															BgL_objzd2classzd2numz00_1733 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_1732);
															{	/* Inline/recursion.scm 210 */
																obj_t BgL_arg2643z00_1734;

																BgL_arg2643z00_1734 =
																	PROCEDURE_REF
																	(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
																	(int) (((long) 1)));
																{	/* Inline/recursion.scm 210 */
																	obj_t BgL_arrayz00_1736;

																	int BgL_offsetz00_1737;

																	BgL_arrayz00_1736 = BgL_arg2643z00_1734;
																	BgL_offsetz00_1737 =
																		(int) (BgL_objzd2classzd2numz00_1733);
																	{	/* Inline/recursion.scm 210 */
																		long BgL_offsetz00_1738;

																		BgL_offsetz00_1738 =
																			(
																			(long) (BgL_offsetz00_1737) -
																			OBJECT_TYPE);
																		{	/* Inline/recursion.scm 210 */
																			long BgL_modz00_1739;

																			{	/* Inline/recursion.scm 210 */
																				int BgL_arg2645z00_1740;

																				BgL_arg2645z00_1740 =
																					(int) (((long) 16));
																				{	/* Inline/recursion.scm 210 */
																					long BgL_auxz00_2987;

																					BgL_auxz00_2987 =
																						(long) (BgL_arg2645z00_1740);
																					BgL_modz00_1739 =
																						(BgL_offsetz00_1738 /
																						BgL_auxz00_2987);
																			}}
																			{	/* Inline/recursion.scm 210 */
																				long BgL_restz00_1741;

																				{	/* Inline/recursion.scm 210 */
																					int BgL_arg2644z00_1742;

																					BgL_arg2644z00_1742 =
																						(int) (((long) 16));
																					{	/* Inline/recursion.scm 210 */
																						long BgL_auxz00_2991;

																						BgL_auxz00_2991 =
																							(long) (BgL_arg2644z00_1742);
																						BgL_restz00_1741 =
																							(BgL_offsetz00_1738 %
																							BgL_auxz00_2991);
																				}}
																				{	/* Inline/recursion.scm 210 */

																					BgL_method3420z00_1731 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_1736,
																							(int) (BgL_modz00_1739)),
																						(int) (BgL_restz00_1741));
													}}}}}}}}
													BgL_callsz00_1015 =
														PROCEDURE_ENTRY(BgL_method3420z00_1731)
														(BgL_method3420z00_1731,
														(obj_t) (BgL_arg3564z00_1016),
														(obj_t) (BgL_varz00_18), BEOA);
											}}
											{	/* Inline/recursion.scm 212 */
												BgL_isfunz00_bglt BgL_obj3274z00_1756;

												obj_t BgL_val3273z00_1757;

												BgL_obj3274z00_1756 =
													(BgL_isfunz00_bglt) (BgL_sfunz00_1011);
												BgL_val3273z00_1757 = BgL_callsz00_1015;
												{
													obj_t BgL_auxz00_3003;

													{	/* Inline/recursion.scm 212 */
														BgL_objectz00_bglt BgL_auxz00_3004;

														BgL_auxz00_3004 =
															(BgL_objectz00_bglt) (BgL_obj3274z00_1756);
														BgL_auxz00_3003 =
															BGL_OBJECT_WIDENING(BgL_auxz00_3004);
													}
													((((BgL_isfunz00_bglt) CREF(BgL_auxz00_3003))->
															BgL_recursivezd2callszd2) =
														((obj_t) BgL_val3273z00_1757), BUNSPEC);
											}}
											return PAIRP(BgL_callsz00_1015);
										}
								}
						}
					else
						{	/* Inline/recursion.scm 199 */
							obj_t BgL_callsz00_1019;

							{	/* Inline/recursion.scm 199 */
								obj_t BgL_arg3570z00_1024;

								{
									BgL_sfunz00_bglt BgL_auxz00_3009;

									BgL_auxz00_3009 = (BgL_sfunz00_bglt) (BgL_sfunz00_1011);
									BgL_arg3570z00_1024 =
										(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3009))->BgL_bodyz00);
								}
								{	/* Inline/recursion.scm 199 */
									BgL_nodez00_bglt BgL_nodez00_1760;

									BgL_nodez00_1760 = (BgL_nodez00_bglt) (BgL_arg3570z00_1024);
									{	/* Inline/recursion.scm 199 */
										obj_t BgL_method3420z00_1762;

										{	/* Inline/recursion.scm 199 */
											BgL_objectz00_bglt BgL_objz00_1763;

											BgL_objz00_1763 = (BgL_objectz00_bglt) (BgL_nodez00_1760);
											{	/* Inline/recursion.scm 199 */
												long BgL_objzd2classzd2numz00_1764;

												BgL_objzd2classzd2numz00_1764 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1763);
												{	/* Inline/recursion.scm 199 */
													obj_t BgL_arg2643z00_1765;

													BgL_arg2643z00_1765 =
														PROCEDURE_REF
														(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
														(int) (((long) 1)));
													{	/* Inline/recursion.scm 199 */
														obj_t BgL_arrayz00_1767;

														int BgL_offsetz00_1768;

														BgL_arrayz00_1767 = BgL_arg2643z00_1765;
														BgL_offsetz00_1768 =
															(int) (BgL_objzd2classzd2numz00_1764);
														{	/* Inline/recursion.scm 199 */
															long BgL_offsetz00_1769;

															BgL_offsetz00_1769 =
																((long) (BgL_offsetz00_1768) - OBJECT_TYPE);
															{	/* Inline/recursion.scm 199 */
																long BgL_modz00_1770;

																{	/* Inline/recursion.scm 199 */
																	int BgL_arg2645z00_1771;

																	BgL_arg2645z00_1771 = (int) (((long) 16));
																	{	/* Inline/recursion.scm 199 */
																		long BgL_auxz00_3021;

																		BgL_auxz00_3021 =
																			(long) (BgL_arg2645z00_1771);
																		BgL_modz00_1770 =
																			(BgL_offsetz00_1769 / BgL_auxz00_3021);
																}}
																{	/* Inline/recursion.scm 199 */
																	long BgL_restz00_1772;

																	{	/* Inline/recursion.scm 199 */
																		int BgL_arg2644z00_1773;

																		BgL_arg2644z00_1773 = (int) (((long) 16));
																		{	/* Inline/recursion.scm 199 */
																			long BgL_auxz00_3025;

																			BgL_auxz00_3025 =
																				(long) (BgL_arg2644z00_1773);
																			BgL_restz00_1772 =
																				(BgL_offsetz00_1769 % BgL_auxz00_3025);
																	}}
																	{	/* Inline/recursion.scm 199 */

																		BgL_method3420z00_1762 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1767,
																				(int) (BgL_modz00_1770)),
																			(int) (BgL_restz00_1772));
										}}}}}}}}
										BgL_callsz00_1019 =
											PROCEDURE_ENTRY(BgL_method3420z00_1762)
											(BgL_method3420z00_1762, (obj_t) (BgL_nodez00_1760),
											(obj_t) (BgL_varz00_18), BEOA);
							}}}
							{	/* Inline/recursion.scm 200 */
								BgL_sfunz00_bglt BgL_obj3379z00_1020;

								BgL_obj3379z00_1020 =
									((BgL_sfunz00_bglt) (BgL_sfunz00_bglt) (BgL_sfunz00_1011));
								{	/* Inline/recursion.scm 201 */
									obj_t BgL_arg3567z00_1021;

									{	/* Inline/recursion.scm 201 */
										obj_t BgL_arg3568z00_1022;

										{
											BgL_sfunz00_bglt BgL_auxz00_3038;

											BgL_auxz00_3038 = (BgL_sfunz00_bglt) (BgL_sfunz00_1011);
											BgL_arg3568z00_1022 =
												(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3038))->
												BgL_bodyz00);
										}
										BgL_arg3567z00_1021 =
											BGl_wideningzd2isfunzd2zzinline_inlinez00(
											(BgL_nodez00_bglt) (BgL_arg3568z00_1022),
											BgL_callsz00_1019);
									}
									{	/* Inline/recursion.scm 200 */
										BgL_objectz00_bglt BgL_auxz00_3043;

										BgL_auxz00_3043 =
											(BgL_objectz00_bglt) (BgL_obj3379z00_1020);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_3043,
											BgL_arg3567z00_1021);
								}}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_obj3379z00_1020),
									BGl_classzd2numzd2zz__objectz00
									(BGl_isfunz00zzinline_inlinez00));
								BgL_obj3379z00_1020;
							}
							return PAIRP(BgL_callsz00_1019);
						}
				}
			}
		}
	}



/* _is-recursive? */
	obj_t BGl__iszd2recursivezf3z21zzinline_recursionz00(obj_t BgL_envz00_2555,
		obj_t BgL_varz00_2556)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 195 */
			return
				BBOOL(BGl_iszd2recursivezf3z21zzinline_recursionz00(
					(BgL_variablez00_bglt) (BgL_varz00_2556)));
		}
	}



/* find-recursive-calls* */
	obj_t BGl_findzd2recursivezd2callsza2za2zzinline_recursionz00(obj_t
		BgL_nodeza2za2_57, obj_t BgL_varz00_58)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 364 */
			{
				obj_t BgL_nodeza2za2_1027;

				obj_t BgL_callsz00_1028;

				BgL_nodeza2za2_1027 = BgL_nodeza2za2_57;
				BgL_callsz00_1028 = BNIL;
			BgL_zc3anonymousza33571ze3z83_1029:
				if (NULLP(BgL_nodeza2za2_1027))
					{	/* Inline/recursion.scm 367 */
						return BgL_callsz00_1028;
					}
				else
					{	/* Inline/recursion.scm 369 */
						obj_t BgL_arg3573z00_1031;

						obj_t BgL_arg3574z00_1032;

						BgL_arg3573z00_1031 = CDR(BgL_nodeza2za2_1027);
						{	/* Inline/recursion.scm 370 */
							obj_t BgL_arg3575z00_1033;

							{	/* Inline/recursion.scm 370 */
								obj_t BgL_arg3576z00_1034;

								BgL_arg3576z00_1034 = CAR(BgL_nodeza2za2_1027);
								{	/* Inline/recursion.scm 370 */
									BgL_nodez00_bglt BgL_nodez00_1794;

									BgL_variablez00_bglt BgL_varz00_1795;

									BgL_nodez00_1794 = (BgL_nodez00_bglt) (BgL_arg3576z00_1034);
									BgL_varz00_1795 = (BgL_variablez00_bglt) (BgL_varz00_58);
									{	/* Inline/recursion.scm 370 */
										obj_t BgL_method3420z00_1796;

										{	/* Inline/recursion.scm 370 */
											BgL_objectz00_bglt BgL_objz00_1797;

											BgL_objz00_1797 = (BgL_objectz00_bglt) (BgL_nodez00_1794);
											{	/* Inline/recursion.scm 370 */
												long BgL_objzd2classzd2numz00_1798;

												BgL_objzd2classzd2numz00_1798 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1797);
												{	/* Inline/recursion.scm 370 */
													obj_t BgL_arg2643z00_1799;

													BgL_arg2643z00_1799 =
														PROCEDURE_REF
														(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
														(int) (((long) 1)));
													{	/* Inline/recursion.scm 370 */
														obj_t BgL_arrayz00_1801;

														int BgL_offsetz00_1802;

														BgL_arrayz00_1801 = BgL_arg2643z00_1799;
														BgL_offsetz00_1802 =
															(int) (BgL_objzd2classzd2numz00_1798);
														{	/* Inline/recursion.scm 370 */
															long BgL_offsetz00_1803;

															BgL_offsetz00_1803 =
																((long) (BgL_offsetz00_1802) - OBJECT_TYPE);
															{	/* Inline/recursion.scm 370 */
																long BgL_modz00_1804;

																{	/* Inline/recursion.scm 370 */
																	int BgL_arg2645z00_1805;

																	BgL_arg2645z00_1805 = (int) (((long) 16));
																	{	/* Inline/recursion.scm 370 */
																		long BgL_auxz00_3067;

																		BgL_auxz00_3067 =
																			(long) (BgL_arg2645z00_1805);
																		BgL_modz00_1804 =
																			(BgL_offsetz00_1803 / BgL_auxz00_3067);
																}}
																{	/* Inline/recursion.scm 370 */
																	long BgL_restz00_1806;

																	{	/* Inline/recursion.scm 370 */
																		int BgL_arg2644z00_1807;

																		BgL_arg2644z00_1807 = (int) (((long) 16));
																		{	/* Inline/recursion.scm 370 */
																			long BgL_auxz00_3071;

																			BgL_auxz00_3071 =
																				(long) (BgL_arg2644z00_1807);
																			BgL_restz00_1806 =
																				(BgL_offsetz00_1803 % BgL_auxz00_3071);
																	}}
																	{	/* Inline/recursion.scm 370 */

																		BgL_method3420z00_1796 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1801,
																				(int) (BgL_modz00_1804)),
																			(int) (BgL_restz00_1806));
										}}}}}}}}
										BgL_arg3575z00_1033 =
											PROCEDURE_ENTRY(BgL_method3420z00_1796)
											(BgL_method3420z00_1796, (obj_t) (BgL_nodez00_1794),
											(obj_t) (BgL_varz00_1795), BEOA);
							}}}
							BgL_arg3574z00_1032 =
								bgl_append2(BgL_arg3575z00_1033, BgL_callsz00_1028);
						}
						{
							obj_t BgL_callsz00_3084;

							obj_t BgL_nodeza2za2_3083;

							BgL_nodeza2za2_3083 = BgL_arg3573z00_1031;
							BgL_callsz00_3084 = BgL_arg3574z00_1032;
							BgL_callsz00_1028 = BgL_callsz00_3084;
							BgL_nodeza2za2_1027 = BgL_nodeza2za2_3083;
							goto BgL_zc3anonymousza33571ze3z83_1029;
						}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinline_recursionz00()
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_findzd2recursivezd2calls3419zd2envzd2zzinline_recursionz00,
				BGl_nodez00zzast_nodez00, BGl_string3784z00zzinline_recursionz00);
		}
	}



/* find-recursive-calls */
	obj_t BGl_findzd2recursivezd2callsz00zzinline_recursionz00(BgL_nodez00_bglt
		BgL_nodez00_19, BgL_variablez00_bglt BgL_varz00_20)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 218 */
			{	/* Inline/recursion.scm 218 */
				obj_t BgL_method3420z00_1821;

				{	/* Inline/recursion.scm 218 */
					BgL_objectz00_bglt BgL_objz00_1822;

					BgL_objz00_1822 = (BgL_objectz00_bglt) (BgL_nodez00_19);
					{	/* Inline/recursion.scm 218 */
						long BgL_objzd2classzd2numz00_1823;

						BgL_objzd2classzd2numz00_1823 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1822);
						{	/* Inline/recursion.scm 218 */
							obj_t BgL_arg2643z00_1824;

							BgL_arg2643z00_1824 =
								PROCEDURE_REF
								(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
								(int) (((long) 1)));
							{	/* Inline/recursion.scm 218 */
								obj_t BgL_arrayz00_1826;

								int BgL_offsetz00_1827;

								BgL_arrayz00_1826 = BgL_arg2643z00_1824;
								BgL_offsetz00_1827 = (int) (BgL_objzd2classzd2numz00_1823);
								{	/* Inline/recursion.scm 218 */
									long BgL_offsetz00_1828;

									BgL_offsetz00_1828 =
										((long) (BgL_offsetz00_1827) - OBJECT_TYPE);
									{	/* Inline/recursion.scm 218 */
										long BgL_modz00_1829;

										{	/* Inline/recursion.scm 218 */
											int BgL_arg2645z00_1830;

											BgL_arg2645z00_1830 = (int) (((long) 16));
											{	/* Inline/recursion.scm 218 */
												long BgL_auxz00_3094;

												BgL_auxz00_3094 = (long) (BgL_arg2645z00_1830);
												BgL_modz00_1829 =
													(BgL_offsetz00_1828 / BgL_auxz00_3094);
										}}
										{	/* Inline/recursion.scm 218 */
											long BgL_restz00_1831;

											{	/* Inline/recursion.scm 218 */
												int BgL_arg2644z00_1832;

												BgL_arg2644z00_1832 = (int) (((long) 16));
												{	/* Inline/recursion.scm 218 */
													long BgL_auxz00_3098;

													BgL_auxz00_3098 = (long) (BgL_arg2644z00_1832);
													BgL_restz00_1831 =
														(BgL_offsetz00_1828 % BgL_auxz00_3098);
											}}
											{	/* Inline/recursion.scm 218 */

												BgL_method3420z00_1821 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1826,
														(int) (BgL_modz00_1829)), (int) (BgL_restz00_1831));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3420z00_1821) (BgL_method3420z00_1821,
					(obj_t) (BgL_nodez00_19), (obj_t) (BgL_varz00_20), BEOA);
			}
		}
	}



/* _find-recursive-calls */
	obj_t BGl__findzd2recursivezd2callsz00zzinline_recursionz00(obj_t
		BgL_envz00_2557, obj_t BgL_nodez00_2558, obj_t BgL_varz00_2559)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 218 */
			return
				BGl_findzd2recursivezd2callsz00zzinline_recursionz00(
				(BgL_nodez00_bglt) (BgL_nodez00_2558),
				(BgL_variablez00_bglt) (BgL_varz00_2559));
		}
	}



/* _find-recursive-calls3419 */
	obj_t BGl__findzd2recursivezd2calls3419z00zzinline_recursionz00(obj_t
		BgL_envz00_2560, obj_t BgL_nodez00_2561, obj_t BgL_varz00_2562)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 15 */
			return BNIL;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinline_recursionz00()
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_sequencez00zzast_nodez00, BGl_proc3785z00zzinline_recursionz00,
				BGl_string3784z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_appz00zzast_nodez00, BGl_proc3786z00zzinline_recursionz00,
				BGl_string3784z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3787z00zzinline_recursionz00,
				BGl_string3784z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_funcallz00zzast_nodez00, BGl_proc3788z00zzinline_recursionz00,
				BGl_string3784z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_externz00zzast_nodez00, BGl_proc3789z00zzinline_recursionz00,
				BGl_string3784z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_castz00zzast_nodez00, BGl_proc3790z00zzinline_recursionz00,
				BGl_string3784z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_setqz00zzast_nodez00, BGl_proc3791z00zzinline_recursionz00,
				BGl_string3784z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3792z00zzinline_recursionz00,
				BGl_string3784z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_failz00zzast_nodez00, BGl_proc3793z00zzinline_recursionz00,
				BGl_string3784z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_selectz00zzast_nodez00, BGl_proc3794z00zzinline_recursionz00,
				BGl_string3784z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3795z00zzinline_recursionz00,
				BGl_string3784z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3796z00zzinline_recursionz00,
				BGl_string3784z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3797z00zzinline_recursionz00,
				BGl_string3784z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc3798z00zzinline_recursionz00,
				BGl_string3784z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3799z00zzinline_recursionz00,
				BGl_string3784z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3800z00zzinline_recursionz00,
				BGl_string3784z00zzinline_recursionz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3801z00zzinline_recursionz00,
				BGl_string3784z00zzinline_recursionz00);
		}
	}



/* find-recursive-calls3456 */
	obj_t BGl_findzd2recursivezd2calls3456z00zzinline_recursionz00(obj_t
		BgL_envz00_2580, obj_t BgL_nodez00_2581, obj_t BgL_vz00_2582)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 357 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1607;

				obj_t BgL_vz00_1608;

				BgL_nodez00_1607 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2581);
				BgL_vz00_1608 = BgL_vz00_2582;
				{	/* Inline/recursion.scm 359 */
					obj_t BgL_arg3712z00_1612;

					obj_t BgL_arg3713z00_1613;

					{	/* Inline/recursion.scm 359 */
						BgL_varz00_bglt BgL_arg3714z00_1614;

						BgL_arg3714z00_1614 =
							(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1607))->BgL_varz00);
						{	/* Inline/recursion.scm 359 */
							BgL_nodez00_bglt BgL_nodez00_2491;

							BgL_variablez00_bglt BgL_varz00_2492;

							BgL_nodez00_2491 = (BgL_nodez00_bglt) (BgL_arg3714z00_1614);
							BgL_varz00_2492 = (BgL_variablez00_bglt) (BgL_vz00_1608);
							{	/* Inline/recursion.scm 359 */
								obj_t BgL_method3420z00_2493;

								{	/* Inline/recursion.scm 359 */
									BgL_objectz00_bglt BgL_objz00_2494;

									BgL_objz00_2494 = (BgL_objectz00_bglt) (BgL_nodez00_2491);
									{	/* Inline/recursion.scm 359 */
										long BgL_objzd2classzd2numz00_2495;

										BgL_objzd2classzd2numz00_2495 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2494);
										{	/* Inline/recursion.scm 359 */
											obj_t BgL_arg2643z00_2496;

											BgL_arg2643z00_2496 =
												PROCEDURE_REF
												(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
												(int) (((long) 1)));
											{	/* Inline/recursion.scm 359 */
												obj_t BgL_arrayz00_2498;

												int BgL_offsetz00_2499;

												BgL_arrayz00_2498 = BgL_arg2643z00_2496;
												BgL_offsetz00_2499 =
													(int) (BgL_objzd2classzd2numz00_2495);
												{	/* Inline/recursion.scm 359 */
													long BgL_offsetz00_2500;

													BgL_offsetz00_2500 =
														((long) (BgL_offsetz00_2499) - OBJECT_TYPE);
													{	/* Inline/recursion.scm 359 */
														long BgL_modz00_2501;

														{	/* Inline/recursion.scm 359 */
															int BgL_arg2645z00_2502;

															BgL_arg2645z00_2502 = (int) (((long) 16));
															{	/* Inline/recursion.scm 359 */
																long BgL_auxz00_3140;

																BgL_auxz00_3140 = (long) (BgL_arg2645z00_2502);
																BgL_modz00_2501 =
																	(BgL_offsetz00_2500 / BgL_auxz00_3140);
														}}
														{	/* Inline/recursion.scm 359 */
															long BgL_restz00_2503;

															{	/* Inline/recursion.scm 359 */
																int BgL_arg2644z00_2504;

																BgL_arg2644z00_2504 = (int) (((long) 16));
																{	/* Inline/recursion.scm 359 */
																	long BgL_auxz00_3144;

																	BgL_auxz00_3144 =
																		(long) (BgL_arg2644z00_2504);
																	BgL_restz00_2503 =
																		(BgL_offsetz00_2500 % BgL_auxz00_3144);
															}}
															{	/* Inline/recursion.scm 359 */

																BgL_method3420z00_2493 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2498,
																		(int) (BgL_modz00_2501)),
																	(int) (BgL_restz00_2503));
								}}}}}}}}
								BgL_arg3712z00_1612 =
									PROCEDURE_ENTRY(BgL_method3420z00_2493)
									(BgL_method3420z00_2493, (obj_t) (BgL_nodez00_2491),
									(obj_t) (BgL_varz00_2492), BEOA);
					}}}
					{	/* Inline/recursion.scm 359 */
						BgL_nodez00_bglt BgL_arg3715z00_1615;

						BgL_arg3715z00_1615 =
							(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1607))->
							BgL_valuez00);
						{	/* Inline/recursion.scm 359 */
							BgL_variablez00_bglt BgL_varz00_2520;

							BgL_varz00_2520 = (BgL_variablez00_bglt) (BgL_vz00_1608);
							{	/* Inline/recursion.scm 359 */
								obj_t BgL_method3420z00_2521;

								{	/* Inline/recursion.scm 359 */
									BgL_objectz00_bglt BgL_objz00_2522;

									BgL_objz00_2522 = (BgL_objectz00_bglt) (BgL_arg3715z00_1615);
									{	/* Inline/recursion.scm 359 */
										long BgL_objzd2classzd2numz00_2523;

										BgL_objzd2classzd2numz00_2523 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2522);
										{	/* Inline/recursion.scm 359 */
											obj_t BgL_arg2643z00_2524;

											BgL_arg2643z00_2524 =
												PROCEDURE_REF
												(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
												(int) (((long) 1)));
											{	/* Inline/recursion.scm 359 */
												obj_t BgL_arrayz00_2526;

												int BgL_offsetz00_2527;

												BgL_arrayz00_2526 = BgL_arg2643z00_2524;
												BgL_offsetz00_2527 =
													(int) (BgL_objzd2classzd2numz00_2523);
												{	/* Inline/recursion.scm 359 */
													long BgL_offsetz00_2528;

													BgL_offsetz00_2528 =
														((long) (BgL_offsetz00_2527) - OBJECT_TYPE);
													{	/* Inline/recursion.scm 359 */
														long BgL_modz00_2529;

														{	/* Inline/recursion.scm 359 */
															int BgL_arg2645z00_2530;

															BgL_arg2645z00_2530 = (int) (((long) 16));
															{	/* Inline/recursion.scm 359 */
																long BgL_auxz00_3165;

																BgL_auxz00_3165 = (long) (BgL_arg2645z00_2530);
																BgL_modz00_2529 =
																	(BgL_offsetz00_2528 / BgL_auxz00_3165);
														}}
														{	/* Inline/recursion.scm 359 */
															long BgL_restz00_2531;

															{	/* Inline/recursion.scm 359 */
																int BgL_arg2644z00_2532;

																BgL_arg2644z00_2532 = (int) (((long) 16));
																{	/* Inline/recursion.scm 359 */
																	long BgL_auxz00_3169;

																	BgL_auxz00_3169 =
																		(long) (BgL_arg2644z00_2532);
																	BgL_restz00_2531 =
																		(BgL_offsetz00_2528 % BgL_auxz00_3169);
															}}
															{	/* Inline/recursion.scm 359 */

																BgL_method3420z00_2521 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2526,
																		(int) (BgL_modz00_2529)),
																	(int) (BgL_restz00_2531));
								}}}}}}}}
								BgL_arg3713z00_1613 =
									PROCEDURE_ENTRY(BgL_method3420z00_2521)
									(BgL_method3420z00_2521, (obj_t) (BgL_arg3715z00_1615),
									(obj_t) (BgL_varz00_2520), BEOA);
					}}}
					return bgl_append2(BgL_arg3712z00_1612, BgL_arg3713z00_1613);
				}
			}
		}
	}



/* find-recursive-calls3454 */
	obj_t BGl_findzd2recursivezd2calls3454z00zzinline_recursionz00(obj_t
		BgL_envz00_2583, obj_t BgL_nodez00_2584, obj_t BgL_varz00_2585)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 351 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1600;

				obj_t BgL_varz00_1601;

				BgL_nodez00_1600 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2584);
				BgL_varz00_1601 = BgL_varz00_2585;
				{	/* Inline/recursion.scm 352 */
					BgL_varz00_bglt BgL_arg3710z00_2461;

					BgL_arg3710z00_2461 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1600))->BgL_varz00);
					{	/* Inline/recursion.scm 352 */
						BgL_nodez00_bglt BgL_nodez00_2463;

						BgL_variablez00_bglt BgL_varz00_2464;

						BgL_nodez00_2463 = (BgL_nodez00_bglt) (BgL_arg3710z00_2461);
						BgL_varz00_2464 = (BgL_variablez00_bglt) (BgL_varz00_1601);
						{	/* Inline/recursion.scm 352 */
							obj_t BgL_method3420z00_2465;

							{	/* Inline/recursion.scm 352 */
								BgL_objectz00_bglt BgL_objz00_2466;

								BgL_objz00_2466 = (BgL_objectz00_bglt) (BgL_nodez00_2463);
								{	/* Inline/recursion.scm 352 */
									long BgL_objzd2classzd2numz00_2467;

									BgL_objzd2classzd2numz00_2467 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2466);
									{	/* Inline/recursion.scm 352 */
										obj_t BgL_arg2643z00_2468;

										BgL_arg2643z00_2468 =
											PROCEDURE_REF
											(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
											(int) (((long) 1)));
										{	/* Inline/recursion.scm 352 */
											obj_t BgL_arrayz00_2470;

											int BgL_offsetz00_2471;

											BgL_arrayz00_2470 = BgL_arg2643z00_2468;
											BgL_offsetz00_2471 =
												(int) (BgL_objzd2classzd2numz00_2467);
											{	/* Inline/recursion.scm 352 */
												long BgL_offsetz00_2472;

												BgL_offsetz00_2472 =
													((long) (BgL_offsetz00_2471) - OBJECT_TYPE);
												{	/* Inline/recursion.scm 352 */
													long BgL_modz00_2473;

													{	/* Inline/recursion.scm 352 */
														int BgL_arg2645z00_2474;

														BgL_arg2645z00_2474 = (int) (((long) 16));
														{	/* Inline/recursion.scm 352 */
															long BgL_auxz00_3193;

															BgL_auxz00_3193 = (long) (BgL_arg2645z00_2474);
															BgL_modz00_2473 =
																(BgL_offsetz00_2472 / BgL_auxz00_3193);
													}}
													{	/* Inline/recursion.scm 352 */
														long BgL_restz00_2475;

														{	/* Inline/recursion.scm 352 */
															int BgL_arg2644z00_2476;

															BgL_arg2644z00_2476 = (int) (((long) 16));
															{	/* Inline/recursion.scm 352 */
																long BgL_auxz00_3197;

																BgL_auxz00_3197 = (long) (BgL_arg2644z00_2476);
																BgL_restz00_2475 =
																	(BgL_offsetz00_2472 % BgL_auxz00_3197);
														}}
														{	/* Inline/recursion.scm 352 */

															BgL_method3420z00_2465 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2470,
																	(int) (BgL_modz00_2473)),
																(int) (BgL_restz00_2475));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3420z00_2465) (BgL_method3420z00_2465,
								(obj_t) (BgL_nodez00_2463), (obj_t) (BgL_varz00_2464), BEOA);
						}
					}
				}
			}
		}
	}



/* find-recursive-calls3452 */
	obj_t BGl_findzd2recursivezd2calls3452z00zzinline_recursionz00(obj_t
		BgL_envz00_2586, obj_t BgL_nodez00_2587, obj_t BgL_varz00_2588)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 345 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1593;

				obj_t BgL_varz00_1594;

				BgL_nodez00_1593 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2587);
				BgL_varz00_1594 = BgL_varz00_2588;
				{	/* Inline/recursion.scm 346 */
					BgL_nodez00_bglt BgL_arg3708z00_2432;

					BgL_arg3708z00_2432 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1593))->BgL_valuez00);
					{	/* Inline/recursion.scm 346 */
						BgL_variablez00_bglt BgL_varz00_2435;

						BgL_varz00_2435 = (BgL_variablez00_bglt) (BgL_varz00_1594);
						{	/* Inline/recursion.scm 346 */
							obj_t BgL_method3420z00_2436;

							{	/* Inline/recursion.scm 346 */
								BgL_objectz00_bglt BgL_objz00_2437;

								BgL_objz00_2437 = (BgL_objectz00_bglt) (BgL_arg3708z00_2432);
								{	/* Inline/recursion.scm 346 */
									long BgL_objzd2classzd2numz00_2438;

									BgL_objzd2classzd2numz00_2438 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2437);
									{	/* Inline/recursion.scm 346 */
										obj_t BgL_arg2643z00_2439;

										BgL_arg2643z00_2439 =
											PROCEDURE_REF
											(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
											(int) (((long) 1)));
										{	/* Inline/recursion.scm 346 */
											obj_t BgL_arrayz00_2441;

											int BgL_offsetz00_2442;

											BgL_arrayz00_2441 = BgL_arg2643z00_2439;
											BgL_offsetz00_2442 =
												(int) (BgL_objzd2classzd2numz00_2438);
											{	/* Inline/recursion.scm 346 */
												long BgL_offsetz00_2443;

												BgL_offsetz00_2443 =
													((long) (BgL_offsetz00_2442) - OBJECT_TYPE);
												{	/* Inline/recursion.scm 346 */
													long BgL_modz00_2444;

													{	/* Inline/recursion.scm 346 */
														int BgL_arg2645z00_2445;

														BgL_arg2645z00_2445 = (int) (((long) 16));
														{	/* Inline/recursion.scm 346 */
															long BgL_auxz00_3219;

															BgL_auxz00_3219 = (long) (BgL_arg2645z00_2445);
															BgL_modz00_2444 =
																(BgL_offsetz00_2443 / BgL_auxz00_3219);
													}}
													{	/* Inline/recursion.scm 346 */
														long BgL_restz00_2446;

														{	/* Inline/recursion.scm 346 */
															int BgL_arg2644z00_2447;

															BgL_arg2644z00_2447 = (int) (((long) 16));
															{	/* Inline/recursion.scm 346 */
																long BgL_auxz00_3223;

																BgL_auxz00_3223 = (long) (BgL_arg2644z00_2447);
																BgL_restz00_2446 =
																	(BgL_offsetz00_2443 % BgL_auxz00_3223);
														}}
														{	/* Inline/recursion.scm 346 */

															BgL_method3420z00_2436 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2441,
																	(int) (BgL_modz00_2444)),
																(int) (BgL_restz00_2446));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3420z00_2436) (BgL_method3420z00_2436,
								(obj_t) (BgL_arg3708z00_2432), (obj_t) (BgL_varz00_2435), BEOA);
						}
					}
				}
			}
		}
	}



/* find-recursive-calls3450 */
	obj_t BGl_findzd2recursivezd2calls3450z00zzinline_recursionz00(obj_t
		BgL_envz00_2589, obj_t BgL_nodez00_2590, obj_t BgL_vz00_2591)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 338 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1582;

				obj_t BgL_vz00_1583;

				BgL_nodez00_1582 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2590);
				BgL_vz00_1583 = BgL_vz00_2591;
				{	/* Inline/recursion.scm 340 */
					obj_t BgL_arg3703z00_1587;

					obj_t BgL_arg3704z00_1588;

					{	/* Inline/recursion.scm 340 */
						BgL_nodez00_bglt BgL_arg3705z00_1589;

						BgL_arg3705z00_1589 =
							(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1582))->
							BgL_exitz00);
						{	/* Inline/recursion.scm 340 */
							BgL_variablez00_bglt BgL_varz00_2378;

							BgL_varz00_2378 = (BgL_variablez00_bglt) (BgL_vz00_1583);
							{	/* Inline/recursion.scm 340 */
								obj_t BgL_method3420z00_2379;

								{	/* Inline/recursion.scm 340 */
									BgL_objectz00_bglt BgL_objz00_2380;

									BgL_objz00_2380 = (BgL_objectz00_bglt) (BgL_arg3705z00_1589);
									{	/* Inline/recursion.scm 340 */
										long BgL_objzd2classzd2numz00_2381;

										BgL_objzd2classzd2numz00_2381 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2380);
										{	/* Inline/recursion.scm 340 */
											obj_t BgL_arg2643z00_2382;

											BgL_arg2643z00_2382 =
												PROCEDURE_REF
												(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
												(int) (((long) 1)));
											{	/* Inline/recursion.scm 340 */
												obj_t BgL_arrayz00_2384;

												int BgL_offsetz00_2385;

												BgL_arrayz00_2384 = BgL_arg2643z00_2382;
												BgL_offsetz00_2385 =
													(int) (BgL_objzd2classzd2numz00_2381);
												{	/* Inline/recursion.scm 340 */
													long BgL_offsetz00_2386;

													BgL_offsetz00_2386 =
														((long) (BgL_offsetz00_2385) - OBJECT_TYPE);
													{	/* Inline/recursion.scm 340 */
														long BgL_modz00_2387;

														{	/* Inline/recursion.scm 340 */
															int BgL_arg2645z00_2388;

															BgL_arg2645z00_2388 = (int) (((long) 16));
															{	/* Inline/recursion.scm 340 */
																long BgL_auxz00_3245;

																BgL_auxz00_3245 = (long) (BgL_arg2645z00_2388);
																BgL_modz00_2387 =
																	(BgL_offsetz00_2386 / BgL_auxz00_3245);
														}}
														{	/* Inline/recursion.scm 340 */
															long BgL_restz00_2389;

															{	/* Inline/recursion.scm 340 */
																int BgL_arg2644z00_2390;

																BgL_arg2644z00_2390 = (int) (((long) 16));
																{	/* Inline/recursion.scm 340 */
																	long BgL_auxz00_3249;

																	BgL_auxz00_3249 =
																		(long) (BgL_arg2644z00_2390);
																	BgL_restz00_2389 =
																		(BgL_offsetz00_2386 % BgL_auxz00_3249);
															}}
															{	/* Inline/recursion.scm 340 */

																BgL_method3420z00_2379 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2384,
																		(int) (BgL_modz00_2387)),
																	(int) (BgL_restz00_2389));
								}}}}}}}}
								BgL_arg3703z00_1587 =
									PROCEDURE_ENTRY(BgL_method3420z00_2379)
									(BgL_method3420z00_2379, (obj_t) (BgL_arg3705z00_1589),
									(obj_t) (BgL_varz00_2378), BEOA);
					}}}
					{	/* Inline/recursion.scm 340 */
						BgL_nodez00_bglt BgL_arg3706z00_1590;

						BgL_arg3706z00_1590 =
							(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1582))->
							BgL_valuez00);
						{	/* Inline/recursion.scm 340 */
							BgL_variablez00_bglt BgL_varz00_2406;

							BgL_varz00_2406 = (BgL_variablez00_bglt) (BgL_vz00_1583);
							{	/* Inline/recursion.scm 340 */
								obj_t BgL_method3420z00_2407;

								{	/* Inline/recursion.scm 340 */
									BgL_objectz00_bglt BgL_objz00_2408;

									BgL_objz00_2408 = (BgL_objectz00_bglt) (BgL_arg3706z00_1590);
									{	/* Inline/recursion.scm 340 */
										long BgL_objzd2classzd2numz00_2409;

										BgL_objzd2classzd2numz00_2409 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2408);
										{	/* Inline/recursion.scm 340 */
											obj_t BgL_arg2643z00_2410;

											BgL_arg2643z00_2410 =
												PROCEDURE_REF
												(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
												(int) (((long) 1)));
											{	/* Inline/recursion.scm 340 */
												obj_t BgL_arrayz00_2412;

												int BgL_offsetz00_2413;

												BgL_arrayz00_2412 = BgL_arg2643z00_2410;
												BgL_offsetz00_2413 =
													(int) (BgL_objzd2classzd2numz00_2409);
												{	/* Inline/recursion.scm 340 */
													long BgL_offsetz00_2414;

													BgL_offsetz00_2414 =
														((long) (BgL_offsetz00_2413) - OBJECT_TYPE);
													{	/* Inline/recursion.scm 340 */
														long BgL_modz00_2415;

														{	/* Inline/recursion.scm 340 */
															int BgL_arg2645z00_2416;

															BgL_arg2645z00_2416 = (int) (((long) 16));
															{	/* Inline/recursion.scm 340 */
																long BgL_auxz00_3270;

																BgL_auxz00_3270 = (long) (BgL_arg2645z00_2416);
																BgL_modz00_2415 =
																	(BgL_offsetz00_2414 / BgL_auxz00_3270);
														}}
														{	/* Inline/recursion.scm 340 */
															long BgL_restz00_2417;

															{	/* Inline/recursion.scm 340 */
																int BgL_arg2644z00_2418;

																BgL_arg2644z00_2418 = (int) (((long) 16));
																{	/* Inline/recursion.scm 340 */
																	long BgL_auxz00_3274;

																	BgL_auxz00_3274 =
																		(long) (BgL_arg2644z00_2418);
																	BgL_restz00_2417 =
																		(BgL_offsetz00_2414 % BgL_auxz00_3274);
															}}
															{	/* Inline/recursion.scm 340 */

																BgL_method3420z00_2407 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2412,
																		(int) (BgL_modz00_2415)),
																	(int) (BgL_restz00_2417));
								}}}}}}}}
								BgL_arg3704z00_1588 =
									PROCEDURE_ENTRY(BgL_method3420z00_2407)
									(BgL_method3420z00_2407, (obj_t) (BgL_arg3706z00_1590),
									(obj_t) (BgL_varz00_2406), BEOA);
					}}}
					return bgl_append2(BgL_arg3703z00_1587, BgL_arg3704z00_1588);
				}
			}
		}
	}



/* find-recursive-calls3448 */
	obj_t BGl_findzd2recursivezd2calls3448z00zzinline_recursionz00(obj_t
		BgL_envz00_2592, obj_t BgL_nodez00_2593, obj_t BgL_varz00_2594)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 332 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1575;

				obj_t BgL_varz00_1576;

				BgL_nodez00_1575 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2593);
				BgL_varz00_1576 = BgL_varz00_2594;
				{	/* Inline/recursion.scm 333 */
					BgL_nodez00_bglt BgL_arg3701z00_2347;

					BgL_arg3701z00_2347 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1575))->BgL_bodyz00);
					{	/* Inline/recursion.scm 333 */
						BgL_variablez00_bglt BgL_varz00_2350;

						BgL_varz00_2350 = (BgL_variablez00_bglt) (BgL_varz00_1576);
						{	/* Inline/recursion.scm 333 */
							obj_t BgL_method3420z00_2351;

							{	/* Inline/recursion.scm 333 */
								BgL_objectz00_bglt BgL_objz00_2352;

								BgL_objz00_2352 = (BgL_objectz00_bglt) (BgL_arg3701z00_2347);
								{	/* Inline/recursion.scm 333 */
									long BgL_objzd2classzd2numz00_2353;

									BgL_objzd2classzd2numz00_2353 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2352);
									{	/* Inline/recursion.scm 333 */
										obj_t BgL_arg2643z00_2354;

										BgL_arg2643z00_2354 =
											PROCEDURE_REF
											(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
											(int) (((long) 1)));
										{	/* Inline/recursion.scm 333 */
											obj_t BgL_arrayz00_2356;

											int BgL_offsetz00_2357;

											BgL_arrayz00_2356 = BgL_arg2643z00_2354;
											BgL_offsetz00_2357 =
												(int) (BgL_objzd2classzd2numz00_2353);
											{	/* Inline/recursion.scm 333 */
												long BgL_offsetz00_2358;

												BgL_offsetz00_2358 =
													((long) (BgL_offsetz00_2357) - OBJECT_TYPE);
												{	/* Inline/recursion.scm 333 */
													long BgL_modz00_2359;

													{	/* Inline/recursion.scm 333 */
														int BgL_arg2645z00_2360;

														BgL_arg2645z00_2360 = (int) (((long) 16));
														{	/* Inline/recursion.scm 333 */
															long BgL_auxz00_3297;

															BgL_auxz00_3297 = (long) (BgL_arg2645z00_2360);
															BgL_modz00_2359 =
																(BgL_offsetz00_2358 / BgL_auxz00_3297);
													}}
													{	/* Inline/recursion.scm 333 */
														long BgL_restz00_2361;

														{	/* Inline/recursion.scm 333 */
															int BgL_arg2644z00_2362;

															BgL_arg2644z00_2362 = (int) (((long) 16));
															{	/* Inline/recursion.scm 333 */
																long BgL_auxz00_3301;

																BgL_auxz00_3301 = (long) (BgL_arg2644z00_2362);
																BgL_restz00_2361 =
																	(BgL_offsetz00_2358 % BgL_auxz00_3301);
														}}
														{	/* Inline/recursion.scm 333 */

															BgL_method3420z00_2351 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2356,
																	(int) (BgL_modz00_2359)),
																(int) (BgL_restz00_2361));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3420z00_2351) (BgL_method3420z00_2351,
								(obj_t) (BgL_arg3701z00_2347), (obj_t) (BgL_varz00_2350), BEOA);
						}
					}
				}
			}
		}
	}



/* find-recursive-calls3446 */
	obj_t BGl_findzd2recursivezd2calls3446z00zzinline_recursionz00(obj_t
		BgL_envz00_2595, obj_t BgL_nodez00_2596, obj_t BgL_varz00_2597)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 320 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1555;

				obj_t BgL_varz00_1556;

				BgL_nodez00_1555 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2596);
				BgL_varz00_1556 = BgL_varz00_2597;
				{	/* Inline/recursion.scm 321 */
					obj_t BgL_g3394z00_1559;

					obj_t BgL_g3395z00_1560;

					BgL_g3394z00_1559 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1555))->BgL_bindingsz00);
					{	/* Inline/recursion.scm 322 */
						BgL_nodez00_bglt BgL_arg3699z00_1572;

						BgL_arg3699z00_1572 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1555))->BgL_bodyz00);
						{	/* Inline/recursion.scm 322 */
							BgL_variablez00_bglt BgL_varz00_2290;

							BgL_varz00_2290 = (BgL_variablez00_bglt) (BgL_varz00_1556);
							{	/* Inline/recursion.scm 322 */
								obj_t BgL_method3420z00_2291;

								{	/* Inline/recursion.scm 322 */
									BgL_objectz00_bglt BgL_objz00_2292;

									BgL_objz00_2292 = (BgL_objectz00_bglt) (BgL_arg3699z00_1572);
									{	/* Inline/recursion.scm 322 */
										long BgL_objzd2classzd2numz00_2293;

										BgL_objzd2classzd2numz00_2293 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2292);
										{	/* Inline/recursion.scm 322 */
											obj_t BgL_arg2643z00_2294;

											BgL_arg2643z00_2294 =
												PROCEDURE_REF
												(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
												(int) (((long) 1)));
											{	/* Inline/recursion.scm 322 */
												obj_t BgL_arrayz00_2296;

												int BgL_offsetz00_2297;

												BgL_arrayz00_2296 = BgL_arg2643z00_2294;
												BgL_offsetz00_2297 =
													(int) (BgL_objzd2classzd2numz00_2293);
												{	/* Inline/recursion.scm 322 */
													long BgL_offsetz00_2298;

													BgL_offsetz00_2298 =
														((long) (BgL_offsetz00_2297) - OBJECT_TYPE);
													{	/* Inline/recursion.scm 322 */
														long BgL_modz00_2299;

														{	/* Inline/recursion.scm 322 */
															int BgL_arg2645z00_2300;

															BgL_arg2645z00_2300 = (int) (((long) 16));
															{	/* Inline/recursion.scm 322 */
																long BgL_auxz00_3324;

																BgL_auxz00_3324 = (long) (BgL_arg2645z00_2300);
																BgL_modz00_2299 =
																	(BgL_offsetz00_2298 / BgL_auxz00_3324);
														}}
														{	/* Inline/recursion.scm 322 */
															long BgL_restz00_2301;

															{	/* Inline/recursion.scm 322 */
																int BgL_arg2644z00_2302;

																BgL_arg2644z00_2302 = (int) (((long) 16));
																{	/* Inline/recursion.scm 322 */
																	long BgL_auxz00_3328;

																	BgL_auxz00_3328 =
																		(long) (BgL_arg2644z00_2302);
																	BgL_restz00_2301 =
																		(BgL_offsetz00_2298 % BgL_auxz00_3328);
															}}
															{	/* Inline/recursion.scm 322 */

																BgL_method3420z00_2291 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2296,
																		(int) (BgL_modz00_2299)),
																	(int) (BgL_restz00_2301));
								}}}}}}}}
								BgL_g3395z00_1560 =
									PROCEDURE_ENTRY(BgL_method3420z00_2291)
									(BgL_method3420z00_2291, (obj_t) (BgL_arg3699z00_1572),
									(obj_t) (BgL_varz00_2290), BEOA);
					}}}
					{
						obj_t BgL_bindingsz00_1562;

						obj_t BgL_callsz00_1563;

						BgL_bindingsz00_1562 = BgL_g3394z00_1559;
						BgL_callsz00_1563 = BgL_g3395z00_1560;
					BgL_zc3anonymousza33692ze3z83_1564:
						if (NULLP(BgL_bindingsz00_1562))
							{	/* Inline/recursion.scm 323 */
								return BgL_callsz00_1563;
							}
						else
							{	/* Inline/recursion.scm 325 */
								obj_t BgL_arg3694z00_1566;

								obj_t BgL_arg3695z00_1567;

								BgL_arg3694z00_1566 = CDR(BgL_bindingsz00_1562);
								{	/* Inline/recursion.scm 327 */
									obj_t BgL_arg3696z00_1568;

									{	/* Inline/recursion.scm 327 */
										obj_t BgL_arg3697z00_1569;

										BgL_arg3697z00_1569 = CDR(CAR(BgL_bindingsz00_1562));
										{	/* Inline/recursion.scm 327 */
											BgL_nodez00_bglt BgL_nodez00_2320;

											BgL_variablez00_bglt BgL_varz00_2321;

											BgL_nodez00_2320 =
												(BgL_nodez00_bglt) (BgL_arg3697z00_1569);
											BgL_varz00_2321 =
												(BgL_variablez00_bglt) (BgL_varz00_1556);
											{	/* Inline/recursion.scm 327 */
												obj_t BgL_method3420z00_2322;

												{	/* Inline/recursion.scm 327 */
													BgL_objectz00_bglt BgL_objz00_2323;

													BgL_objz00_2323 =
														(BgL_objectz00_bglt) (BgL_nodez00_2320);
													{	/* Inline/recursion.scm 327 */
														long BgL_objzd2classzd2numz00_2324;

														BgL_objzd2classzd2numz00_2324 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2323);
														{	/* Inline/recursion.scm 327 */
															obj_t BgL_arg2643z00_2325;

															BgL_arg2643z00_2325 =
																PROCEDURE_REF
																(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
																(int) (((long) 1)));
															{	/* Inline/recursion.scm 327 */
																obj_t BgL_arrayz00_2327;

																int BgL_offsetz00_2328;

																BgL_arrayz00_2327 = BgL_arg2643z00_2325;
																BgL_offsetz00_2328 =
																	(int) (BgL_objzd2classzd2numz00_2324);
																{	/* Inline/recursion.scm 327 */
																	long BgL_offsetz00_2329;

																	BgL_offsetz00_2329 =
																		((long) (BgL_offsetz00_2328) - OBJECT_TYPE);
																	{	/* Inline/recursion.scm 327 */
																		long BgL_modz00_2330;

																		{	/* Inline/recursion.scm 327 */
																			int BgL_arg2645z00_2331;

																			BgL_arg2645z00_2331 = (int) (((long) 16));
																			{	/* Inline/recursion.scm 327 */
																				long BgL_auxz00_3354;

																				BgL_auxz00_3354 =
																					(long) (BgL_arg2645z00_2331);
																				BgL_modz00_2330 =
																					(BgL_offsetz00_2329 /
																					BgL_auxz00_3354);
																		}}
																		{	/* Inline/recursion.scm 327 */
																			long BgL_restz00_2332;

																			{	/* Inline/recursion.scm 327 */
																				int BgL_arg2644z00_2333;

																				BgL_arg2644z00_2333 =
																					(int) (((long) 16));
																				{	/* Inline/recursion.scm 327 */
																					long BgL_auxz00_3358;

																					BgL_auxz00_3358 =
																						(long) (BgL_arg2644z00_2333);
																					BgL_restz00_2332 =
																						(BgL_offsetz00_2329 %
																						BgL_auxz00_3358);
																			}}
																			{	/* Inline/recursion.scm 327 */

																				BgL_method3420z00_2322 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2327,
																						(int) (BgL_modz00_2330)),
																					(int) (BgL_restz00_2332));
												}}}}}}}}
												BgL_arg3696z00_1568 =
													PROCEDURE_ENTRY(BgL_method3420z00_2322)
													(BgL_method3420z00_2322, (obj_t) (BgL_nodez00_2320),
													(obj_t) (BgL_varz00_2321), BEOA);
									}}}
									BgL_arg3695z00_1567 =
										bgl_append2(BgL_callsz00_1563, BgL_arg3696z00_1568);
								}
								{
									obj_t BgL_callsz00_3371;

									obj_t BgL_bindingsz00_3370;

									BgL_bindingsz00_3370 = BgL_arg3694z00_1566;
									BgL_callsz00_3371 = BgL_arg3695z00_1567;
									BgL_callsz00_1563 = BgL_callsz00_3371;
									BgL_bindingsz00_1562 = BgL_bindingsz00_3370;
									goto BgL_zc3anonymousza33692ze3z83_1564;
								}
							}
					}
				}
			}
		}
	}



/* find-recursive-calls3444 */
	obj_t BGl_findzd2recursivezd2calls3444z00zzinline_recursionz00(obj_t
		BgL_envz00_2598, obj_t BgL_nodez00_2599, obj_t BgL_varz00_2600)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 306 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1534;

				obj_t BgL_varz00_1535;

				BgL_nodez00_1534 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2599);
				BgL_varz00_1535 = BgL_varz00_2600;
				{	/* Inline/recursion.scm 307 */
					obj_t BgL_g3392z00_1538;

					obj_t BgL_g3393z00_1539;

					BgL_g3392z00_1538 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1534))->BgL_localsz00);
					{	/* Inline/recursion.scm 308 */
						BgL_nodez00_bglt BgL_arg3690z00_1552;

						BgL_arg3690z00_1552 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1534))->BgL_bodyz00);
						{	/* Inline/recursion.scm 308 */
							BgL_variablez00_bglt BgL_varz00_2229;

							BgL_varz00_2229 = (BgL_variablez00_bglt) (BgL_varz00_1535);
							{	/* Inline/recursion.scm 308 */
								obj_t BgL_method3420z00_2230;

								{	/* Inline/recursion.scm 308 */
									BgL_objectz00_bglt BgL_objz00_2231;

									BgL_objz00_2231 = (BgL_objectz00_bglt) (BgL_arg3690z00_1552);
									{	/* Inline/recursion.scm 308 */
										long BgL_objzd2classzd2numz00_2232;

										BgL_objzd2classzd2numz00_2232 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2231);
										{	/* Inline/recursion.scm 308 */
											obj_t BgL_arg2643z00_2233;

											BgL_arg2643z00_2233 =
												PROCEDURE_REF
												(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
												(int) (((long) 1)));
											{	/* Inline/recursion.scm 308 */
												obj_t BgL_arrayz00_2235;

												int BgL_offsetz00_2236;

												BgL_arrayz00_2235 = BgL_arg2643z00_2233;
												BgL_offsetz00_2236 =
													(int) (BgL_objzd2classzd2numz00_2232);
												{	/* Inline/recursion.scm 308 */
													long BgL_offsetz00_2237;

													BgL_offsetz00_2237 =
														((long) (BgL_offsetz00_2236) - OBJECT_TYPE);
													{	/* Inline/recursion.scm 308 */
														long BgL_modz00_2238;

														{	/* Inline/recursion.scm 308 */
															int BgL_arg2645z00_2239;

															BgL_arg2645z00_2239 = (int) (((long) 16));
															{	/* Inline/recursion.scm 308 */
																long BgL_auxz00_3384;

																BgL_auxz00_3384 = (long) (BgL_arg2645z00_2239);
																BgL_modz00_2238 =
																	(BgL_offsetz00_2237 / BgL_auxz00_3384);
														}}
														{	/* Inline/recursion.scm 308 */
															long BgL_restz00_2240;

															{	/* Inline/recursion.scm 308 */
																int BgL_arg2644z00_2241;

																BgL_arg2644z00_2241 = (int) (((long) 16));
																{	/* Inline/recursion.scm 308 */
																	long BgL_auxz00_3388;

																	BgL_auxz00_3388 =
																		(long) (BgL_arg2644z00_2241);
																	BgL_restz00_2240 =
																		(BgL_offsetz00_2237 % BgL_auxz00_3388);
															}}
															{	/* Inline/recursion.scm 308 */

																BgL_method3420z00_2230 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2235,
																		(int) (BgL_modz00_2238)),
																	(int) (BgL_restz00_2240));
								}}}}}}}}
								BgL_g3393z00_1539 =
									PROCEDURE_ENTRY(BgL_method3420z00_2230)
									(BgL_method3420z00_2230, (obj_t) (BgL_arg3690z00_1552),
									(obj_t) (BgL_varz00_2229), BEOA);
					}}}
					{
						obj_t BgL_localsz00_1541;

						obj_t BgL_callsz00_1542;

						BgL_localsz00_1541 = BgL_g3392z00_1538;
						BgL_callsz00_1542 = BgL_g3393z00_1539;
					BgL_zc3anonymousza33682ze3z83_1543:
						if (NULLP(BgL_localsz00_1541))
							{	/* Inline/recursion.scm 309 */
								return BgL_callsz00_1542;
							}
						else
							{	/* Inline/recursion.scm 311 */
								obj_t BgL_arg3684z00_1545;

								obj_t BgL_arg3685z00_1546;

								BgL_arg3684z00_1545 = CDR(BgL_localsz00_1541);
								{	/* Inline/recursion.scm 314 */
									obj_t BgL_arg3686z00_1547;

									{	/* Inline/recursion.scm 314 */
										obj_t BgL_arg3687z00_1548;

										{	/* Inline/recursion.scm 314 */
											BgL_sfunz00_bglt BgL_obj1884z00_2259;

											{	/* Inline/recursion.scm 314 */
												BgL_valuez00_bglt BgL_auxz00_3402;

												{	/* Inline/recursion.scm 314 */
													BgL_variablez00_bglt BgL_obj1611z00_2258;

													{	/* Inline/recursion.scm 314 */
														obj_t BgL_pairz00_2257;

														BgL_pairz00_2257 = BgL_localsz00_1541;
														BgL_obj1611z00_2258 =
															(BgL_variablez00_bglt) (CAR(BgL_pairz00_2257));
													}
													BgL_auxz00_3402 =
														(((BgL_variablez00_bglt)
															CREF(BgL_obj1611z00_2258))->BgL_valuez00);
												}
												BgL_obj1884z00_2259 =
													(BgL_sfunz00_bglt) (BgL_auxz00_3402);
											}
											BgL_arg3687z00_1548 =
												(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_2259))->
												BgL_bodyz00);
										}
										{	/* Inline/recursion.scm 313 */
											BgL_nodez00_bglt BgL_nodez00_2260;

											BgL_variablez00_bglt BgL_varz00_2261;

											BgL_nodez00_2260 =
												(BgL_nodez00_bglt) (BgL_arg3687z00_1548);
											BgL_varz00_2261 =
												(BgL_variablez00_bglt) (BgL_varz00_1535);
											{	/* Inline/recursion.scm 313 */
												obj_t BgL_method3420z00_2262;

												{	/* Inline/recursion.scm 313 */
													BgL_objectz00_bglt BgL_objz00_2263;

													BgL_objz00_2263 =
														(BgL_objectz00_bglt) (BgL_nodez00_2260);
													{	/* Inline/recursion.scm 313 */
														long BgL_objzd2classzd2numz00_2264;

														BgL_objzd2classzd2numz00_2264 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2263);
														{	/* Inline/recursion.scm 313 */
															obj_t BgL_arg2643z00_2265;

															BgL_arg2643z00_2265 =
																PROCEDURE_REF
																(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
																(int) (((long) 1)));
															{	/* Inline/recursion.scm 313 */
																obj_t BgL_arrayz00_2267;

																int BgL_offsetz00_2268;

																BgL_arrayz00_2267 = BgL_arg2643z00_2265;
																BgL_offsetz00_2268 =
																	(int) (BgL_objzd2classzd2numz00_2264);
																{	/* Inline/recursion.scm 313 */
																	long BgL_offsetz00_2269;

																	BgL_offsetz00_2269 =
																		((long) (BgL_offsetz00_2268) - OBJECT_TYPE);
																	{	/* Inline/recursion.scm 313 */
																		long BgL_modz00_2270;

																		{	/* Inline/recursion.scm 313 */
																			int BgL_arg2645z00_2271;

																			BgL_arg2645z00_2271 = (int) (((long) 16));
																			{	/* Inline/recursion.scm 313 */
																				long BgL_auxz00_3418;

																				BgL_auxz00_3418 =
																					(long) (BgL_arg2645z00_2271);
																				BgL_modz00_2270 =
																					(BgL_offsetz00_2269 /
																					BgL_auxz00_3418);
																		}}
																		{	/* Inline/recursion.scm 313 */
																			long BgL_restz00_2272;

																			{	/* Inline/recursion.scm 313 */
																				int BgL_arg2644z00_2273;

																				BgL_arg2644z00_2273 =
																					(int) (((long) 16));
																				{	/* Inline/recursion.scm 313 */
																					long BgL_auxz00_3422;

																					BgL_auxz00_3422 =
																						(long) (BgL_arg2644z00_2273);
																					BgL_restz00_2272 =
																						(BgL_offsetz00_2269 %
																						BgL_auxz00_3422);
																			}}
																			{	/* Inline/recursion.scm 313 */

																				BgL_method3420z00_2262 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2267,
																						(int) (BgL_modz00_2270)),
																					(int) (BgL_restz00_2272));
												}}}}}}}}
												BgL_arg3686z00_1547 =
													PROCEDURE_ENTRY(BgL_method3420z00_2262)
													(BgL_method3420z00_2262, (obj_t) (BgL_nodez00_2260),
													(obj_t) (BgL_varz00_2261), BEOA);
									}}}
									BgL_arg3685z00_1546 =
										bgl_append2(BgL_callsz00_1542, BgL_arg3686z00_1547);
								}
								{
									obj_t BgL_callsz00_3435;

									obj_t BgL_localsz00_3434;

									BgL_localsz00_3434 = BgL_arg3684z00_1545;
									BgL_callsz00_3435 = BgL_arg3685z00_1546;
									BgL_callsz00_1542 = BgL_callsz00_3435;
									BgL_localsz00_1541 = BgL_localsz00_3434;
									goto BgL_zc3anonymousza33682ze3z83_1543;
								}
							}
					}
				}
			}
		}
	}



/* find-recursive-calls3442 */
	obj_t BGl_findzd2recursivezd2calls3442z00zzinline_recursionz00(obj_t
		BgL_envz00_2601, obj_t BgL_nodez00_2602, obj_t BgL_varz00_2603)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 294 */
			{
				BgL_selectz00_bglt BgL_nodez00_1514;

				obj_t BgL_varz00_1515;

				BgL_nodez00_1514 = (BgL_selectz00_bglt) (BgL_nodez00_2602);
				BgL_varz00_1515 = BgL_varz00_2603;
				{	/* Inline/recursion.scm 295 */
					obj_t BgL_g3390z00_1518;

					obj_t BgL_g3391z00_1519;

					BgL_g3390z00_1518 =
						(((BgL_selectz00_bglt) CREF(BgL_nodez00_1514))->BgL_clausesz00);
					{	/* Inline/recursion.scm 296 */
						BgL_nodez00_bglt BgL_arg3680z00_1531;

						BgL_arg3680z00_1531 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1514))->BgL_testz00);
						{	/* Inline/recursion.scm 296 */
							BgL_variablez00_bglt BgL_varz00_2169;

							BgL_varz00_2169 = (BgL_variablez00_bglt) (BgL_varz00_1515);
							{	/* Inline/recursion.scm 296 */
								obj_t BgL_method3420z00_2170;

								{	/* Inline/recursion.scm 296 */
									BgL_objectz00_bglt BgL_objz00_2171;

									BgL_objz00_2171 = (BgL_objectz00_bglt) (BgL_arg3680z00_1531);
									{	/* Inline/recursion.scm 296 */
										long BgL_objzd2classzd2numz00_2172;

										BgL_objzd2classzd2numz00_2172 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2171);
										{	/* Inline/recursion.scm 296 */
											obj_t BgL_arg2643z00_2173;

											BgL_arg2643z00_2173 =
												PROCEDURE_REF
												(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
												(int) (((long) 1)));
											{	/* Inline/recursion.scm 296 */
												obj_t BgL_arrayz00_2175;

												int BgL_offsetz00_2176;

												BgL_arrayz00_2175 = BgL_arg2643z00_2173;
												BgL_offsetz00_2176 =
													(int) (BgL_objzd2classzd2numz00_2172);
												{	/* Inline/recursion.scm 296 */
													long BgL_offsetz00_2177;

													BgL_offsetz00_2177 =
														((long) (BgL_offsetz00_2176) - OBJECT_TYPE);
													{	/* Inline/recursion.scm 296 */
														long BgL_modz00_2178;

														{	/* Inline/recursion.scm 296 */
															int BgL_arg2645z00_2179;

															BgL_arg2645z00_2179 = (int) (((long) 16));
															{	/* Inline/recursion.scm 296 */
																long BgL_auxz00_3448;

																BgL_auxz00_3448 = (long) (BgL_arg2645z00_2179);
																BgL_modz00_2178 =
																	(BgL_offsetz00_2177 / BgL_auxz00_3448);
														}}
														{	/* Inline/recursion.scm 296 */
															long BgL_restz00_2180;

															{	/* Inline/recursion.scm 296 */
																int BgL_arg2644z00_2181;

																BgL_arg2644z00_2181 = (int) (((long) 16));
																{	/* Inline/recursion.scm 296 */
																	long BgL_auxz00_3452;

																	BgL_auxz00_3452 =
																		(long) (BgL_arg2644z00_2181);
																	BgL_restz00_2180 =
																		(BgL_offsetz00_2177 % BgL_auxz00_3452);
															}}
															{	/* Inline/recursion.scm 296 */

																BgL_method3420z00_2170 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2175,
																		(int) (BgL_modz00_2178)),
																	(int) (BgL_restz00_2180));
								}}}}}}}}
								BgL_g3391z00_1519 =
									PROCEDURE_ENTRY(BgL_method3420z00_2170)
									(BgL_method3420z00_2170, (obj_t) (BgL_arg3680z00_1531),
									(obj_t) (BgL_varz00_2169), BEOA);
					}}}
					{
						obj_t BgL_clausesz00_1521;

						obj_t BgL_callsz00_1522;

						BgL_clausesz00_1521 = BgL_g3390z00_1518;
						BgL_callsz00_1522 = BgL_g3391z00_1519;
					BgL_zc3anonymousza33672ze3z83_1523:
						if (NULLP(BgL_clausesz00_1521))
							{	/* Inline/recursion.scm 297 */
								return BgL_callsz00_1522;
							}
						else
							{	/* Inline/recursion.scm 299 */
								obj_t BgL_arg3674z00_1525;

								obj_t BgL_arg3675z00_1526;

								BgL_arg3674z00_1525 = CDR(BgL_clausesz00_1521);
								{	/* Inline/recursion.scm 300 */
									obj_t BgL_arg3677z00_1527;

									{	/* Inline/recursion.scm 300 */
										obj_t BgL_arg3678z00_1528;

										BgL_arg3678z00_1528 = CDR(CAR(BgL_clausesz00_1521));
										{	/* Inline/recursion.scm 300 */
											BgL_nodez00_bglt BgL_nodez00_2199;

											BgL_variablez00_bglt BgL_varz00_2200;

											BgL_nodez00_2199 =
												(BgL_nodez00_bglt) (BgL_arg3678z00_1528);
											BgL_varz00_2200 =
												(BgL_variablez00_bglt) (BgL_varz00_1515);
											{	/* Inline/recursion.scm 300 */
												obj_t BgL_method3420z00_2201;

												{	/* Inline/recursion.scm 300 */
													BgL_objectz00_bglt BgL_objz00_2202;

													BgL_objz00_2202 =
														(BgL_objectz00_bglt) (BgL_nodez00_2199);
													{	/* Inline/recursion.scm 300 */
														long BgL_objzd2classzd2numz00_2203;

														BgL_objzd2classzd2numz00_2203 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2202);
														{	/* Inline/recursion.scm 300 */
															obj_t BgL_arg2643z00_2204;

															BgL_arg2643z00_2204 =
																PROCEDURE_REF
																(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
																(int) (((long) 1)));
															{	/* Inline/recursion.scm 300 */
																obj_t BgL_arrayz00_2206;

																int BgL_offsetz00_2207;

																BgL_arrayz00_2206 = BgL_arg2643z00_2204;
																BgL_offsetz00_2207 =
																	(int) (BgL_objzd2classzd2numz00_2203);
																{	/* Inline/recursion.scm 300 */
																	long BgL_offsetz00_2208;

																	BgL_offsetz00_2208 =
																		((long) (BgL_offsetz00_2207) - OBJECT_TYPE);
																	{	/* Inline/recursion.scm 300 */
																		long BgL_modz00_2209;

																		{	/* Inline/recursion.scm 300 */
																			int BgL_arg2645z00_2210;

																			BgL_arg2645z00_2210 = (int) (((long) 16));
																			{	/* Inline/recursion.scm 300 */
																				long BgL_auxz00_3478;

																				BgL_auxz00_3478 =
																					(long) (BgL_arg2645z00_2210);
																				BgL_modz00_2209 =
																					(BgL_offsetz00_2208 /
																					BgL_auxz00_3478);
																		}}
																		{	/* Inline/recursion.scm 300 */
																			long BgL_restz00_2211;

																			{	/* Inline/recursion.scm 300 */
																				int BgL_arg2644z00_2212;

																				BgL_arg2644z00_2212 =
																					(int) (((long) 16));
																				{	/* Inline/recursion.scm 300 */
																					long BgL_auxz00_3482;

																					BgL_auxz00_3482 =
																						(long) (BgL_arg2644z00_2212);
																					BgL_restz00_2211 =
																						(BgL_offsetz00_2208 %
																						BgL_auxz00_3482);
																			}}
																			{	/* Inline/recursion.scm 300 */

																				BgL_method3420z00_2201 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2206,
																						(int) (BgL_modz00_2209)),
																					(int) (BgL_restz00_2211));
												}}}}}}}}
												BgL_arg3677z00_1527 =
													PROCEDURE_ENTRY(BgL_method3420z00_2201)
													(BgL_method3420z00_2201, (obj_t) (BgL_nodez00_2199),
													(obj_t) (BgL_varz00_2200), BEOA);
									}}}
									BgL_arg3675z00_1526 =
										bgl_append2(BgL_arg3677z00_1527, BgL_callsz00_1522);
								}
								{
									obj_t BgL_callsz00_3495;

									obj_t BgL_clausesz00_3494;

									BgL_clausesz00_3494 = BgL_arg3674z00_1525;
									BgL_callsz00_3495 = BgL_arg3675z00_1526;
									BgL_callsz00_1522 = BgL_callsz00_3495;
									BgL_clausesz00_1521 = BgL_clausesz00_3494;
									goto BgL_zc3anonymousza33672ze3z83_1523;
								}
							}
					}
				}
			}
		}
	}



/* find-recursive-calls3440 */
	obj_t BGl_findzd2recursivezd2calls3440z00zzinline_recursionz00(obj_t
		BgL_envz00_2604, obj_t BgL_nodez00_2605, obj_t BgL_varz00_2606)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 285 */
			{
				BgL_failz00_bglt BgL_nodez00_1498;

				obj_t BgL_varz00_1499;

				BgL_nodez00_1498 = (BgL_failz00_bglt) (BgL_nodez00_2605);
				BgL_varz00_1499 = BgL_varz00_2606;
				{	/* Inline/recursion.scm 287 */
					obj_t BgL_arg3661z00_1503;

					obj_t BgL_arg3662z00_1504;

					obj_t BgL_arg3663z00_1505;

					{	/* Inline/recursion.scm 287 */
						BgL_nodez00_bglt BgL_arg3667z00_1509;

						BgL_arg3667z00_1509 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_1498))->BgL_procz00);
						{	/* Inline/recursion.scm 287 */
							BgL_variablez00_bglt BgL_varz00_2084;

							BgL_varz00_2084 = (BgL_variablez00_bglt) (BgL_varz00_1499);
							{	/* Inline/recursion.scm 287 */
								obj_t BgL_method3420z00_2085;

								{	/* Inline/recursion.scm 287 */
									BgL_objectz00_bglt BgL_objz00_2086;

									BgL_objz00_2086 = (BgL_objectz00_bglt) (BgL_arg3667z00_1509);
									{	/* Inline/recursion.scm 287 */
										long BgL_objzd2classzd2numz00_2087;

										BgL_objzd2classzd2numz00_2087 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2086);
										{	/* Inline/recursion.scm 287 */
											obj_t BgL_arg2643z00_2088;

											BgL_arg2643z00_2088 =
												PROCEDURE_REF
												(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
												(int) (((long) 1)));
											{	/* Inline/recursion.scm 287 */
												obj_t BgL_arrayz00_2090;

												int BgL_offsetz00_2091;

												BgL_arrayz00_2090 = BgL_arg2643z00_2088;
												BgL_offsetz00_2091 =
													(int) (BgL_objzd2classzd2numz00_2087);
												{	/* Inline/recursion.scm 287 */
													long BgL_offsetz00_2092;

													BgL_offsetz00_2092 =
														((long) (BgL_offsetz00_2091) - OBJECT_TYPE);
													{	/* Inline/recursion.scm 287 */
														long BgL_modz00_2093;

														{	/* Inline/recursion.scm 287 */
															int BgL_arg2645z00_2094;

															BgL_arg2645z00_2094 = (int) (((long) 16));
															{	/* Inline/recursion.scm 287 */
																long BgL_auxz00_3507;

																BgL_auxz00_3507 = (long) (BgL_arg2645z00_2094);
																BgL_modz00_2093 =
																	(BgL_offsetz00_2092 / BgL_auxz00_3507);
														}}
														{	/* Inline/recursion.scm 287 */
															long BgL_restz00_2095;

															{	/* Inline/recursion.scm 287 */
																int BgL_arg2644z00_2096;

																BgL_arg2644z00_2096 = (int) (((long) 16));
																{	/* Inline/recursion.scm 287 */
																	long BgL_auxz00_3511;

																	BgL_auxz00_3511 =
																		(long) (BgL_arg2644z00_2096);
																	BgL_restz00_2095 =
																		(BgL_offsetz00_2092 % BgL_auxz00_3511);
															}}
															{	/* Inline/recursion.scm 287 */

																BgL_method3420z00_2085 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2090,
																		(int) (BgL_modz00_2093)),
																	(int) (BgL_restz00_2095));
								}}}}}}}}
								BgL_arg3661z00_1503 =
									PROCEDURE_ENTRY(BgL_method3420z00_2085)
									(BgL_method3420z00_2085, (obj_t) (BgL_arg3667z00_1509),
									(obj_t) (BgL_varz00_2084), BEOA);
					}}}
					{	/* Inline/recursion.scm 288 */
						BgL_nodez00_bglt BgL_arg3668z00_1510;

						BgL_arg3668z00_1510 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_1498))->BgL_msgz00);
						{	/* Inline/recursion.scm 288 */
							BgL_variablez00_bglt BgL_varz00_2112;

							BgL_varz00_2112 = (BgL_variablez00_bglt) (BgL_varz00_1499);
							{	/* Inline/recursion.scm 288 */
								obj_t BgL_method3420z00_2113;

								{	/* Inline/recursion.scm 288 */
									BgL_objectz00_bglt BgL_objz00_2114;

									BgL_objz00_2114 = (BgL_objectz00_bglt) (BgL_arg3668z00_1510);
									{	/* Inline/recursion.scm 288 */
										long BgL_objzd2classzd2numz00_2115;

										BgL_objzd2classzd2numz00_2115 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2114);
										{	/* Inline/recursion.scm 288 */
											obj_t BgL_arg2643z00_2116;

											BgL_arg2643z00_2116 =
												PROCEDURE_REF
												(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
												(int) (((long) 1)));
											{	/* Inline/recursion.scm 288 */
												obj_t BgL_arrayz00_2118;

												int BgL_offsetz00_2119;

												BgL_arrayz00_2118 = BgL_arg2643z00_2116;
												BgL_offsetz00_2119 =
													(int) (BgL_objzd2classzd2numz00_2115);
												{	/* Inline/recursion.scm 288 */
													long BgL_offsetz00_2120;

													BgL_offsetz00_2120 =
														((long) (BgL_offsetz00_2119) - OBJECT_TYPE);
													{	/* Inline/recursion.scm 288 */
														long BgL_modz00_2121;

														{	/* Inline/recursion.scm 288 */
															int BgL_arg2645z00_2122;

															BgL_arg2645z00_2122 = (int) (((long) 16));
															{	/* Inline/recursion.scm 288 */
																long BgL_auxz00_3532;

																BgL_auxz00_3532 = (long) (BgL_arg2645z00_2122);
																BgL_modz00_2121 =
																	(BgL_offsetz00_2120 / BgL_auxz00_3532);
														}}
														{	/* Inline/recursion.scm 288 */
															long BgL_restz00_2123;

															{	/* Inline/recursion.scm 288 */
																int BgL_arg2644z00_2124;

																BgL_arg2644z00_2124 = (int) (((long) 16));
																{	/* Inline/recursion.scm 288 */
																	long BgL_auxz00_3536;

																	BgL_auxz00_3536 =
																		(long) (BgL_arg2644z00_2124);
																	BgL_restz00_2123 =
																		(BgL_offsetz00_2120 % BgL_auxz00_3536);
															}}
															{	/* Inline/recursion.scm 288 */

																BgL_method3420z00_2113 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2118,
																		(int) (BgL_modz00_2121)),
																	(int) (BgL_restz00_2123));
								}}}}}}}}
								BgL_arg3662z00_1504 =
									PROCEDURE_ENTRY(BgL_method3420z00_2113)
									(BgL_method3420z00_2113, (obj_t) (BgL_arg3668z00_1510),
									(obj_t) (BgL_varz00_2112), BEOA);
					}}}
					{	/* Inline/recursion.scm 289 */
						BgL_nodez00_bglt BgL_arg3670z00_1511;

						BgL_arg3670z00_1511 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_1498))->BgL_objz00);
						{	/* Inline/recursion.scm 289 */
							BgL_variablez00_bglt BgL_varz00_2140;

							BgL_varz00_2140 = (BgL_variablez00_bglt) (BgL_varz00_1499);
							{	/* Inline/recursion.scm 289 */
								obj_t BgL_method3420z00_2141;

								{	/* Inline/recursion.scm 289 */
									BgL_objectz00_bglt BgL_objz00_2142;

									BgL_objz00_2142 = (BgL_objectz00_bglt) (BgL_arg3670z00_1511);
									{	/* Inline/recursion.scm 289 */
										long BgL_objzd2classzd2numz00_2143;

										BgL_objzd2classzd2numz00_2143 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2142);
										{	/* Inline/recursion.scm 289 */
											obj_t BgL_arg2643z00_2144;

											BgL_arg2643z00_2144 =
												PROCEDURE_REF
												(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
												(int) (((long) 1)));
											{	/* Inline/recursion.scm 289 */
												obj_t BgL_arrayz00_2146;

												int BgL_offsetz00_2147;

												BgL_arrayz00_2146 = BgL_arg2643z00_2144;
												BgL_offsetz00_2147 =
													(int) (BgL_objzd2classzd2numz00_2143);
												{	/* Inline/recursion.scm 289 */
													long BgL_offsetz00_2148;

													BgL_offsetz00_2148 =
														((long) (BgL_offsetz00_2147) - OBJECT_TYPE);
													{	/* Inline/recursion.scm 289 */
														long BgL_modz00_2149;

														{	/* Inline/recursion.scm 289 */
															int BgL_arg2645z00_2150;

															BgL_arg2645z00_2150 = (int) (((long) 16));
															{	/* Inline/recursion.scm 289 */
																long BgL_auxz00_3557;

																BgL_auxz00_3557 = (long) (BgL_arg2645z00_2150);
																BgL_modz00_2149 =
																	(BgL_offsetz00_2148 / BgL_auxz00_3557);
														}}
														{	/* Inline/recursion.scm 289 */
															long BgL_restz00_2151;

															{	/* Inline/recursion.scm 289 */
																int BgL_arg2644z00_2152;

																BgL_arg2644z00_2152 = (int) (((long) 16));
																{	/* Inline/recursion.scm 289 */
																	long BgL_auxz00_3561;

																	BgL_auxz00_3561 =
																		(long) (BgL_arg2644z00_2152);
																	BgL_restz00_2151 =
																		(BgL_offsetz00_2148 % BgL_auxz00_3561);
															}}
															{	/* Inline/recursion.scm 289 */

																BgL_method3420z00_2141 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2146,
																		(int) (BgL_modz00_2149)),
																	(int) (BgL_restz00_2151));
								}}}}}}}}
								BgL_arg3663z00_1505 =
									PROCEDURE_ENTRY(BgL_method3420z00_2141)
									(BgL_method3420z00_2141, (obj_t) (BgL_arg3670z00_1511),
									(obj_t) (BgL_varz00_2140), BEOA);
					}}}
					{	/* Inline/recursion.scm 287 */
						obj_t BgL_list3664z00_1506;

						{	/* Inline/recursion.scm 287 */
							obj_t BgL_arg3665z00_1507;

							{	/* Inline/recursion.scm 287 */
								obj_t BgL_arg3666z00_1508;

								BgL_arg3666z00_1508 = MAKE_PAIR(BgL_arg3663z00_1505, BNIL);
								BgL_arg3665z00_1507 =
									MAKE_PAIR(BgL_arg3662z00_1504, BgL_arg3666z00_1508);
							}
							BgL_list3664z00_1506 =
								MAKE_PAIR(BgL_arg3661z00_1503, BgL_arg3665z00_1507);
						}
						return
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list3664z00_1506);
					}
				}
			}
		}
	}



/* find-recursive-calls3438 */
	obj_t BGl_findzd2recursivezd2calls3438z00zzinline_recursionz00(obj_t
		BgL_envz00_2607, obj_t BgL_nodez00_2608, obj_t BgL_varz00_2609)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 276 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1482;

				obj_t BgL_varz00_1483;

				BgL_nodez00_1482 = (BgL_conditionalz00_bglt) (BgL_nodez00_2608);
				BgL_varz00_1483 = BgL_varz00_2609;
				{	/* Inline/recursion.scm 278 */
					obj_t BgL_arg3651z00_1487;

					obj_t BgL_arg3652z00_1488;

					obj_t BgL_arg3653z00_1489;

					{	/* Inline/recursion.scm 278 */
						BgL_nodez00_bglt BgL_arg3657z00_1493;

						BgL_arg3657z00_1493 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1482))->BgL_testz00);
						{	/* Inline/recursion.scm 278 */
							BgL_variablez00_bglt BgL_varz00_2000;

							BgL_varz00_2000 = (BgL_variablez00_bglt) (BgL_varz00_1483);
							{	/* Inline/recursion.scm 278 */
								obj_t BgL_method3420z00_2001;

								{	/* Inline/recursion.scm 278 */
									BgL_objectz00_bglt BgL_objz00_2002;

									BgL_objz00_2002 = (BgL_objectz00_bglt) (BgL_arg3657z00_1493);
									{	/* Inline/recursion.scm 278 */
										long BgL_objzd2classzd2numz00_2003;

										BgL_objzd2classzd2numz00_2003 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2002);
										{	/* Inline/recursion.scm 278 */
											obj_t BgL_arg2643z00_2004;

											BgL_arg2643z00_2004 =
												PROCEDURE_REF
												(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
												(int) (((long) 1)));
											{	/* Inline/recursion.scm 278 */
												obj_t BgL_arrayz00_2006;

												int BgL_offsetz00_2007;

												BgL_arrayz00_2006 = BgL_arg2643z00_2004;
												BgL_offsetz00_2007 =
													(int) (BgL_objzd2classzd2numz00_2003);
												{	/* Inline/recursion.scm 278 */
													long BgL_offsetz00_2008;

													BgL_offsetz00_2008 =
														((long) (BgL_offsetz00_2007) - OBJECT_TYPE);
													{	/* Inline/recursion.scm 278 */
														long BgL_modz00_2009;

														{	/* Inline/recursion.scm 278 */
															int BgL_arg2645z00_2010;

															BgL_arg2645z00_2010 = (int) (((long) 16));
															{	/* Inline/recursion.scm 278 */
																long BgL_auxz00_3587;

																BgL_auxz00_3587 = (long) (BgL_arg2645z00_2010);
																BgL_modz00_2009 =
																	(BgL_offsetz00_2008 / BgL_auxz00_3587);
														}}
														{	/* Inline/recursion.scm 278 */
															long BgL_restz00_2011;

															{	/* Inline/recursion.scm 278 */
																int BgL_arg2644z00_2012;

																BgL_arg2644z00_2012 = (int) (((long) 16));
																{	/* Inline/recursion.scm 278 */
																	long BgL_auxz00_3591;

																	BgL_auxz00_3591 =
																		(long) (BgL_arg2644z00_2012);
																	BgL_restz00_2011 =
																		(BgL_offsetz00_2008 % BgL_auxz00_3591);
															}}
															{	/* Inline/recursion.scm 278 */

																BgL_method3420z00_2001 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2006,
																		(int) (BgL_modz00_2009)),
																	(int) (BgL_restz00_2011));
								}}}}}}}}
								BgL_arg3651z00_1487 =
									PROCEDURE_ENTRY(BgL_method3420z00_2001)
									(BgL_method3420z00_2001, (obj_t) (BgL_arg3657z00_1493),
									(obj_t) (BgL_varz00_2000), BEOA);
					}}}
					{	/* Inline/recursion.scm 279 */
						BgL_nodez00_bglt BgL_arg3658z00_1494;

						BgL_arg3658z00_1494 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1482))->BgL_truez00);
						{	/* Inline/recursion.scm 279 */
							BgL_variablez00_bglt BgL_varz00_2028;

							BgL_varz00_2028 = (BgL_variablez00_bglt) (BgL_varz00_1483);
							{	/* Inline/recursion.scm 279 */
								obj_t BgL_method3420z00_2029;

								{	/* Inline/recursion.scm 279 */
									BgL_objectz00_bglt BgL_objz00_2030;

									BgL_objz00_2030 = (BgL_objectz00_bglt) (BgL_arg3658z00_1494);
									{	/* Inline/recursion.scm 279 */
										long BgL_objzd2classzd2numz00_2031;

										BgL_objzd2classzd2numz00_2031 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2030);
										{	/* Inline/recursion.scm 279 */
											obj_t BgL_arg2643z00_2032;

											BgL_arg2643z00_2032 =
												PROCEDURE_REF
												(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
												(int) (((long) 1)));
											{	/* Inline/recursion.scm 279 */
												obj_t BgL_arrayz00_2034;

												int BgL_offsetz00_2035;

												BgL_arrayz00_2034 = BgL_arg2643z00_2032;
												BgL_offsetz00_2035 =
													(int) (BgL_objzd2classzd2numz00_2031);
												{	/* Inline/recursion.scm 279 */
													long BgL_offsetz00_2036;

													BgL_offsetz00_2036 =
														((long) (BgL_offsetz00_2035) - OBJECT_TYPE);
													{	/* Inline/recursion.scm 279 */
														long BgL_modz00_2037;

														{	/* Inline/recursion.scm 279 */
															int BgL_arg2645z00_2038;

															BgL_arg2645z00_2038 = (int) (((long) 16));
															{	/* Inline/recursion.scm 279 */
																long BgL_auxz00_3612;

																BgL_auxz00_3612 = (long) (BgL_arg2645z00_2038);
																BgL_modz00_2037 =
																	(BgL_offsetz00_2036 / BgL_auxz00_3612);
														}}
														{	/* Inline/recursion.scm 279 */
															long BgL_restz00_2039;

															{	/* Inline/recursion.scm 279 */
																int BgL_arg2644z00_2040;

																BgL_arg2644z00_2040 = (int) (((long) 16));
																{	/* Inline/recursion.scm 279 */
																	long BgL_auxz00_3616;

																	BgL_auxz00_3616 =
																		(long) (BgL_arg2644z00_2040);
																	BgL_restz00_2039 =
																		(BgL_offsetz00_2036 % BgL_auxz00_3616);
															}}
															{	/* Inline/recursion.scm 279 */

																BgL_method3420z00_2029 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2034,
																		(int) (BgL_modz00_2037)),
																	(int) (BgL_restz00_2039));
								}}}}}}}}
								BgL_arg3652z00_1488 =
									PROCEDURE_ENTRY(BgL_method3420z00_2029)
									(BgL_method3420z00_2029, (obj_t) (BgL_arg3658z00_1494),
									(obj_t) (BgL_varz00_2028), BEOA);
					}}}
					{	/* Inline/recursion.scm 280 */
						BgL_nodez00_bglt BgL_arg3659z00_1495;

						BgL_arg3659z00_1495 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1482))->
							BgL_falsez00);
						{	/* Inline/recursion.scm 280 */
							BgL_variablez00_bglt BgL_varz00_2056;

							BgL_varz00_2056 = (BgL_variablez00_bglt) (BgL_varz00_1483);
							{	/* Inline/recursion.scm 280 */
								obj_t BgL_method3420z00_2057;

								{	/* Inline/recursion.scm 280 */
									BgL_objectz00_bglt BgL_objz00_2058;

									BgL_objz00_2058 = (BgL_objectz00_bglt) (BgL_arg3659z00_1495);
									{	/* Inline/recursion.scm 280 */
										long BgL_objzd2classzd2numz00_2059;

										BgL_objzd2classzd2numz00_2059 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2058);
										{	/* Inline/recursion.scm 280 */
											obj_t BgL_arg2643z00_2060;

											BgL_arg2643z00_2060 =
												PROCEDURE_REF
												(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
												(int) (((long) 1)));
											{	/* Inline/recursion.scm 280 */
												obj_t BgL_arrayz00_2062;

												int BgL_offsetz00_2063;

												BgL_arrayz00_2062 = BgL_arg2643z00_2060;
												BgL_offsetz00_2063 =
													(int) (BgL_objzd2classzd2numz00_2059);
												{	/* Inline/recursion.scm 280 */
													long BgL_offsetz00_2064;

													BgL_offsetz00_2064 =
														((long) (BgL_offsetz00_2063) - OBJECT_TYPE);
													{	/* Inline/recursion.scm 280 */
														long BgL_modz00_2065;

														{	/* Inline/recursion.scm 280 */
															int BgL_arg2645z00_2066;

															BgL_arg2645z00_2066 = (int) (((long) 16));
															{	/* Inline/recursion.scm 280 */
																long BgL_auxz00_3637;

																BgL_auxz00_3637 = (long) (BgL_arg2645z00_2066);
																BgL_modz00_2065 =
																	(BgL_offsetz00_2064 / BgL_auxz00_3637);
														}}
														{	/* Inline/recursion.scm 280 */
															long BgL_restz00_2067;

															{	/* Inline/recursion.scm 280 */
																int BgL_arg2644z00_2068;

																BgL_arg2644z00_2068 = (int) (((long) 16));
																{	/* Inline/recursion.scm 280 */
																	long BgL_auxz00_3641;

																	BgL_auxz00_3641 =
																		(long) (BgL_arg2644z00_2068);
																	BgL_restz00_2067 =
																		(BgL_offsetz00_2064 % BgL_auxz00_3641);
															}}
															{	/* Inline/recursion.scm 280 */

																BgL_method3420z00_2057 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2062,
																		(int) (BgL_modz00_2065)),
																	(int) (BgL_restz00_2067));
								}}}}}}}}
								BgL_arg3653z00_1489 =
									PROCEDURE_ENTRY(BgL_method3420z00_2057)
									(BgL_method3420z00_2057, (obj_t) (BgL_arg3659z00_1495),
									(obj_t) (BgL_varz00_2056), BEOA);
					}}}
					{	/* Inline/recursion.scm 278 */
						obj_t BgL_list3654z00_1490;

						{	/* Inline/recursion.scm 278 */
							obj_t BgL_arg3655z00_1491;

							{	/* Inline/recursion.scm 278 */
								obj_t BgL_arg3656z00_1492;

								BgL_arg3656z00_1492 = MAKE_PAIR(BgL_arg3653z00_1489, BNIL);
								BgL_arg3655z00_1491 =
									MAKE_PAIR(BgL_arg3652z00_1488, BgL_arg3656z00_1492);
							}
							BgL_list3654z00_1490 =
								MAKE_PAIR(BgL_arg3651z00_1487, BgL_arg3655z00_1491);
						}
						return
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list3654z00_1490);
					}
				}
			}
		}
	}



/* find-recursive-calls3436 */
	obj_t BGl_findzd2recursivezd2calls3436z00zzinline_recursionz00(obj_t
		BgL_envz00_2610, obj_t BgL_nodez00_2611, obj_t BgL_varz00_2612)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 270 */
			{
				BgL_setqz00_bglt BgL_nodez00_1475;

				obj_t BgL_varz00_1476;

				BgL_nodez00_1475 = (BgL_setqz00_bglt) (BgL_nodez00_2611);
				BgL_varz00_1476 = BgL_varz00_2612;
				{	/* Inline/recursion.scm 271 */
					BgL_nodez00_bglt BgL_arg3649z00_1969;

					BgL_arg3649z00_1969 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1475))->BgL_valuez00);
					{	/* Inline/recursion.scm 271 */
						BgL_variablez00_bglt BgL_varz00_1972;

						BgL_varz00_1972 = (BgL_variablez00_bglt) (BgL_varz00_1476);
						{	/* Inline/recursion.scm 271 */
							obj_t BgL_method3420z00_1973;

							{	/* Inline/recursion.scm 271 */
								BgL_objectz00_bglt BgL_objz00_1974;

								BgL_objz00_1974 = (BgL_objectz00_bglt) (BgL_arg3649z00_1969);
								{	/* Inline/recursion.scm 271 */
									long BgL_objzd2classzd2numz00_1975;

									BgL_objzd2classzd2numz00_1975 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1974);
									{	/* Inline/recursion.scm 271 */
										obj_t BgL_arg2643z00_1976;

										BgL_arg2643z00_1976 =
											PROCEDURE_REF
											(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
											(int) (((long) 1)));
										{	/* Inline/recursion.scm 271 */
											obj_t BgL_arrayz00_1978;

											int BgL_offsetz00_1979;

											BgL_arrayz00_1978 = BgL_arg2643z00_1976;
											BgL_offsetz00_1979 =
												(int) (BgL_objzd2classzd2numz00_1975);
											{	/* Inline/recursion.scm 271 */
												long BgL_offsetz00_1980;

												BgL_offsetz00_1980 =
													((long) (BgL_offsetz00_1979) - OBJECT_TYPE);
												{	/* Inline/recursion.scm 271 */
													long BgL_modz00_1981;

													{	/* Inline/recursion.scm 271 */
														int BgL_arg2645z00_1982;

														BgL_arg2645z00_1982 = (int) (((long) 16));
														{	/* Inline/recursion.scm 271 */
															long BgL_auxz00_3667;

															BgL_auxz00_3667 = (long) (BgL_arg2645z00_1982);
															BgL_modz00_1981 =
																(BgL_offsetz00_1980 / BgL_auxz00_3667);
													}}
													{	/* Inline/recursion.scm 271 */
														long BgL_restz00_1983;

														{	/* Inline/recursion.scm 271 */
															int BgL_arg2644z00_1984;

															BgL_arg2644z00_1984 = (int) (((long) 16));
															{	/* Inline/recursion.scm 271 */
																long BgL_auxz00_3671;

																BgL_auxz00_3671 = (long) (BgL_arg2644z00_1984);
																BgL_restz00_1983 =
																	(BgL_offsetz00_1980 % BgL_auxz00_3671);
														}}
														{	/* Inline/recursion.scm 271 */

															BgL_method3420z00_1973 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1978,
																	(int) (BgL_modz00_1981)),
																(int) (BgL_restz00_1983));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3420z00_1973) (BgL_method3420z00_1973,
								(obj_t) (BgL_arg3649z00_1969), (obj_t) (BgL_varz00_1972), BEOA);
						}
					}
				}
			}
		}
	}



/* find-recursive-calls3434 */
	obj_t BGl_findzd2recursivezd2calls3434z00zzinline_recursionz00(obj_t
		BgL_envz00_2613, obj_t BgL_nodez00_2614, obj_t BgL_varz00_2615)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 264 */
			{
				BgL_castz00_bglt BgL_nodez00_1468;

				obj_t BgL_varz00_1469;

				BgL_nodez00_1468 = (BgL_castz00_bglt) (BgL_nodez00_2614);
				BgL_varz00_1469 = BgL_varz00_2615;
				{	/* Inline/recursion.scm 265 */
					BgL_nodez00_bglt BgL_arg3647z00_1940;

					BgL_arg3647z00_1940 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_1468))->BgL_argz00);
					{	/* Inline/recursion.scm 265 */
						BgL_variablez00_bglt BgL_varz00_1943;

						BgL_varz00_1943 = (BgL_variablez00_bglt) (BgL_varz00_1469);
						{	/* Inline/recursion.scm 265 */
							obj_t BgL_method3420z00_1944;

							{	/* Inline/recursion.scm 265 */
								BgL_objectz00_bglt BgL_objz00_1945;

								BgL_objz00_1945 = (BgL_objectz00_bglt) (BgL_arg3647z00_1940);
								{	/* Inline/recursion.scm 265 */
									long BgL_objzd2classzd2numz00_1946;

									BgL_objzd2classzd2numz00_1946 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1945);
									{	/* Inline/recursion.scm 265 */
										obj_t BgL_arg2643z00_1947;

										BgL_arg2643z00_1947 =
											PROCEDURE_REF
											(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
											(int) (((long) 1)));
										{	/* Inline/recursion.scm 265 */
											obj_t BgL_arrayz00_1949;

											int BgL_offsetz00_1950;

											BgL_arrayz00_1949 = BgL_arg2643z00_1947;
											BgL_offsetz00_1950 =
												(int) (BgL_objzd2classzd2numz00_1946);
											{	/* Inline/recursion.scm 265 */
												long BgL_offsetz00_1951;

												BgL_offsetz00_1951 =
													((long) (BgL_offsetz00_1950) - OBJECT_TYPE);
												{	/* Inline/recursion.scm 265 */
													long BgL_modz00_1952;

													{	/* Inline/recursion.scm 265 */
														int BgL_arg2645z00_1953;

														BgL_arg2645z00_1953 = (int) (((long) 16));
														{	/* Inline/recursion.scm 265 */
															long BgL_auxz00_3693;

															BgL_auxz00_3693 = (long) (BgL_arg2645z00_1953);
															BgL_modz00_1952 =
																(BgL_offsetz00_1951 / BgL_auxz00_3693);
													}}
													{	/* Inline/recursion.scm 265 */
														long BgL_restz00_1954;

														{	/* Inline/recursion.scm 265 */
															int BgL_arg2644z00_1955;

															BgL_arg2644z00_1955 = (int) (((long) 16));
															{	/* Inline/recursion.scm 265 */
																long BgL_auxz00_3697;

																BgL_auxz00_3697 = (long) (BgL_arg2644z00_1955);
																BgL_restz00_1954 =
																	(BgL_offsetz00_1951 % BgL_auxz00_3697);
														}}
														{	/* Inline/recursion.scm 265 */

															BgL_method3420z00_1944 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1949,
																	(int) (BgL_modz00_1952)),
																(int) (BgL_restz00_1954));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3420z00_1944) (BgL_method3420z00_1944,
								(obj_t) (BgL_arg3647z00_1940), (obj_t) (BgL_varz00_1943), BEOA);
						}
					}
				}
			}
		}
	}



/* find-recursive-calls3431 */
	obj_t BGl_findzd2recursivezd2calls3431z00zzinline_recursionz00(obj_t
		BgL_envz00_2616, obj_t BgL_nodez00_2617, obj_t BgL_varz00_2618)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 258 */
			{
				BgL_externz00_bglt BgL_nodez00_1461;

				obj_t BgL_varz00_1462;

				BgL_nodez00_1461 = (BgL_externz00_bglt) (BgL_nodez00_2617);
				BgL_varz00_1462 = BgL_varz00_2618;
				{	/* Inline/recursion.scm 259 */
					obj_t BgL_arg3645z00_1938;

					BgL_arg3645z00_1938 =
						(((BgL_externz00_bglt) CREF(BgL_nodez00_1461))->BgL_exprza2za2);
					return
						BGl_findzd2recursivezd2callsza2za2zzinline_recursionz00
						(BgL_arg3645z00_1938, BgL_varz00_1462);
				}
			}
		}
	}



/* find-recursive-calls3429 */
	obj_t BGl_findzd2recursivezd2calls3429z00zzinline_recursionz00(obj_t
		BgL_envz00_2619, obj_t BgL_nodez00_2620, obj_t BgL_varz00_2621)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 250 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1450;

				obj_t BgL_varz00_1451;

				BgL_nodez00_1450 = (BgL_funcallz00_bglt) (BgL_nodez00_2620);
				BgL_varz00_1451 = BgL_varz00_2621;
				{	/* Inline/recursion.scm 252 */
					obj_t BgL_arg3640z00_1455;

					obj_t BgL_arg3641z00_1456;

					{	/* Inline/recursion.scm 252 */
						BgL_nodez00_bglt BgL_arg3642z00_1457;

						BgL_arg3642z00_1457 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1450))->BgL_funz00);
						{	/* Inline/recursion.scm 252 */
							BgL_variablez00_bglt BgL_varz00_1911;

							BgL_varz00_1911 = (BgL_variablez00_bglt) (BgL_varz00_1451);
							{	/* Inline/recursion.scm 252 */
								obj_t BgL_method3420z00_1912;

								{	/* Inline/recursion.scm 252 */
									BgL_objectz00_bglt BgL_objz00_1913;

									BgL_objz00_1913 = (BgL_objectz00_bglt) (BgL_arg3642z00_1457);
									{	/* Inline/recursion.scm 252 */
										long BgL_objzd2classzd2numz00_1914;

										BgL_objzd2classzd2numz00_1914 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1913);
										{	/* Inline/recursion.scm 252 */
											obj_t BgL_arg2643z00_1915;

											BgL_arg2643z00_1915 =
												PROCEDURE_REF
												(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
												(int) (((long) 1)));
											{	/* Inline/recursion.scm 252 */
												obj_t BgL_arrayz00_1917;

												int BgL_offsetz00_1918;

												BgL_arrayz00_1917 = BgL_arg2643z00_1915;
												BgL_offsetz00_1918 =
													(int) (BgL_objzd2classzd2numz00_1914);
												{	/* Inline/recursion.scm 252 */
													long BgL_offsetz00_1919;

													BgL_offsetz00_1919 =
														((long) (BgL_offsetz00_1918) - OBJECT_TYPE);
													{	/* Inline/recursion.scm 252 */
														long BgL_modz00_1920;

														{	/* Inline/recursion.scm 252 */
															int BgL_arg2645z00_1921;

															BgL_arg2645z00_1921 = (int) (((long) 16));
															{	/* Inline/recursion.scm 252 */
																long BgL_auxz00_3722;

																BgL_auxz00_3722 = (long) (BgL_arg2645z00_1921);
																BgL_modz00_1920 =
																	(BgL_offsetz00_1919 / BgL_auxz00_3722);
														}}
														{	/* Inline/recursion.scm 252 */
															long BgL_restz00_1922;

															{	/* Inline/recursion.scm 252 */
																int BgL_arg2644z00_1923;

																BgL_arg2644z00_1923 = (int) (((long) 16));
																{	/* Inline/recursion.scm 252 */
																	long BgL_auxz00_3726;

																	BgL_auxz00_3726 =
																		(long) (BgL_arg2644z00_1923);
																	BgL_restz00_1922 =
																		(BgL_offsetz00_1919 % BgL_auxz00_3726);
															}}
															{	/* Inline/recursion.scm 252 */

																BgL_method3420z00_1912 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1917,
																		(int) (BgL_modz00_1920)),
																	(int) (BgL_restz00_1922));
								}}}}}}}}
								BgL_arg3640z00_1455 =
									PROCEDURE_ENTRY(BgL_method3420z00_1912)
									(BgL_method3420z00_1912, (obj_t) (BgL_arg3642z00_1457),
									(obj_t) (BgL_varz00_1911), BEOA);
					}}}
					{	/* Inline/recursion.scm 253 */
						obj_t BgL_arg3643z00_1458;

						BgL_arg3643z00_1458 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1450))->BgL_argsz00);
						BgL_arg3641z00_1456 =
							BGl_findzd2recursivezd2callsza2za2zzinline_recursionz00
							(BgL_arg3643z00_1458, BgL_varz00_1451);
					}
					return bgl_append2(BgL_arg3640z00_1455, BgL_arg3641z00_1456);
				}
			}
		}
	}



/* find-recursive-calls3427 */
	obj_t BGl_findzd2recursivezd2calls3427z00zzinline_recursionz00(obj_t
		BgL_envz00_2622, obj_t BgL_nodez00_2623, obj_t BgL_varz00_2624)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 243 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1439;

				obj_t BgL_varz00_1440;

				BgL_nodez00_1439 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2623);
				BgL_varz00_1440 = BgL_varz00_2624;
				{	/* Inline/recursion.scm 245 */
					obj_t BgL_arg3635z00_1444;

					obj_t BgL_arg3636z00_1445;

					{	/* Inline/recursion.scm 245 */
						BgL_nodez00_bglt BgL_arg3637z00_1446;

						BgL_arg3637z00_1446 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1439))->BgL_funz00);
						{	/* Inline/recursion.scm 245 */
							BgL_variablez00_bglt BgL_varz00_1855;

							BgL_varz00_1855 = (BgL_variablez00_bglt) (BgL_varz00_1440);
							{	/* Inline/recursion.scm 245 */
								obj_t BgL_method3420z00_1856;

								{	/* Inline/recursion.scm 245 */
									BgL_objectz00_bglt BgL_objz00_1857;

									BgL_objz00_1857 = (BgL_objectz00_bglt) (BgL_arg3637z00_1446);
									{	/* Inline/recursion.scm 245 */
										long BgL_objzd2classzd2numz00_1858;

										BgL_objzd2classzd2numz00_1858 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1857);
										{	/* Inline/recursion.scm 245 */
											obj_t BgL_arg2643z00_1859;

											BgL_arg2643z00_1859 =
												PROCEDURE_REF
												(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
												(int) (((long) 1)));
											{	/* Inline/recursion.scm 245 */
												obj_t BgL_arrayz00_1861;

												int BgL_offsetz00_1862;

												BgL_arrayz00_1861 = BgL_arg2643z00_1859;
												BgL_offsetz00_1862 =
													(int) (BgL_objzd2classzd2numz00_1858);
												{	/* Inline/recursion.scm 245 */
													long BgL_offsetz00_1863;

													BgL_offsetz00_1863 =
														((long) (BgL_offsetz00_1862) - OBJECT_TYPE);
													{	/* Inline/recursion.scm 245 */
														long BgL_modz00_1864;

														{	/* Inline/recursion.scm 245 */
															int BgL_arg2645z00_1865;

															BgL_arg2645z00_1865 = (int) (((long) 16));
															{	/* Inline/recursion.scm 245 */
																long BgL_auxz00_3751;

																BgL_auxz00_3751 = (long) (BgL_arg2645z00_1865);
																BgL_modz00_1864 =
																	(BgL_offsetz00_1863 / BgL_auxz00_3751);
														}}
														{	/* Inline/recursion.scm 245 */
															long BgL_restz00_1866;

															{	/* Inline/recursion.scm 245 */
																int BgL_arg2644z00_1867;

																BgL_arg2644z00_1867 = (int) (((long) 16));
																{	/* Inline/recursion.scm 245 */
																	long BgL_auxz00_3755;

																	BgL_auxz00_3755 =
																		(long) (BgL_arg2644z00_1867);
																	BgL_restz00_1866 =
																		(BgL_offsetz00_1863 % BgL_auxz00_3755);
															}}
															{	/* Inline/recursion.scm 245 */

																BgL_method3420z00_1856 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1861,
																		(int) (BgL_modz00_1864)),
																	(int) (BgL_restz00_1866));
								}}}}}}}}
								BgL_arg3635z00_1444 =
									PROCEDURE_ENTRY(BgL_method3420z00_1856)
									(BgL_method3420z00_1856, (obj_t) (BgL_arg3637z00_1446),
									(obj_t) (BgL_varz00_1855), BEOA);
					}}}
					{	/* Inline/recursion.scm 245 */
						BgL_nodez00_bglt BgL_arg3638z00_1447;

						BgL_arg3638z00_1447 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1439))->BgL_argz00);
						{	/* Inline/recursion.scm 245 */
							BgL_variablez00_bglt BgL_varz00_1883;

							BgL_varz00_1883 = (BgL_variablez00_bglt) (BgL_varz00_1440);
							{	/* Inline/recursion.scm 245 */
								obj_t BgL_method3420z00_1884;

								{	/* Inline/recursion.scm 245 */
									BgL_objectz00_bglt BgL_objz00_1885;

									BgL_objz00_1885 = (BgL_objectz00_bglt) (BgL_arg3638z00_1447);
									{	/* Inline/recursion.scm 245 */
										long BgL_objzd2classzd2numz00_1886;

										BgL_objzd2classzd2numz00_1886 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1885);
										{	/* Inline/recursion.scm 245 */
											obj_t BgL_arg2643z00_1887;

											BgL_arg2643z00_1887 =
												PROCEDURE_REF
												(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
												(int) (((long) 1)));
											{	/* Inline/recursion.scm 245 */
												obj_t BgL_arrayz00_1889;

												int BgL_offsetz00_1890;

												BgL_arrayz00_1889 = BgL_arg2643z00_1887;
												BgL_offsetz00_1890 =
													(int) (BgL_objzd2classzd2numz00_1886);
												{	/* Inline/recursion.scm 245 */
													long BgL_offsetz00_1891;

													BgL_offsetz00_1891 =
														((long) (BgL_offsetz00_1890) - OBJECT_TYPE);
													{	/* Inline/recursion.scm 245 */
														long BgL_modz00_1892;

														{	/* Inline/recursion.scm 245 */
															int BgL_arg2645z00_1893;

															BgL_arg2645z00_1893 = (int) (((long) 16));
															{	/* Inline/recursion.scm 245 */
																long BgL_auxz00_3776;

																BgL_auxz00_3776 = (long) (BgL_arg2645z00_1893);
																BgL_modz00_1892 =
																	(BgL_offsetz00_1891 / BgL_auxz00_3776);
														}}
														{	/* Inline/recursion.scm 245 */
															long BgL_restz00_1894;

															{	/* Inline/recursion.scm 245 */
																int BgL_arg2644z00_1895;

																BgL_arg2644z00_1895 = (int) (((long) 16));
																{	/* Inline/recursion.scm 245 */
																	long BgL_auxz00_3780;

																	BgL_auxz00_3780 =
																		(long) (BgL_arg2644z00_1895);
																	BgL_restz00_1894 =
																		(BgL_offsetz00_1891 % BgL_auxz00_3780);
															}}
															{	/* Inline/recursion.scm 245 */

																BgL_method3420z00_1884 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1889,
																		(int) (BgL_modz00_1892)),
																	(int) (BgL_restz00_1894));
								}}}}}}}}
								BgL_arg3636z00_1445 =
									PROCEDURE_ENTRY(BgL_method3420z00_1884)
									(BgL_method3420z00_1884, (obj_t) (BgL_arg3638z00_1447),
									(obj_t) (BgL_varz00_1883), BEOA);
					}}}
					return bgl_append2(BgL_arg3635z00_1444, BgL_arg3636z00_1445);
				}
			}
		}
	}



/* find-recursive-calls3425 */
	obj_t BGl_findzd2recursivezd2calls3425z00zzinline_recursionz00(obj_t
		BgL_envz00_2625, obj_t BgL_nodez00_2626, obj_t BgL_varz00_2627)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 233 */
			{
				BgL_appz00_bglt BgL_nodez00_1425;

				obj_t BgL_varz00_1426;

				BgL_nodez00_1425 = (BgL_appz00_bglt) (BgL_nodez00_2626);
				BgL_varz00_1426 = BgL_varz00_2627;
				{	/* Inline/recursion.scm 235 */
					obj_t BgL_argszd2callszd2_1430;

					{	/* Inline/recursion.scm 235 */
						obj_t BgL_arg3633z00_1436;

						BgL_arg3633z00_1436 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1425))->BgL_argsz00);
						BgL_argszd2callszd2_1430 =
							BGl_findzd2recursivezd2callsza2za2zzinline_recursionz00
							(BgL_arg3633z00_1436, BgL_varz00_1426);
					}
					{	/* Inline/recursion.scm 236 */
						bool_t BgL_testz00_3795;

						{	/* Inline/recursion.scm 236 */
							bool_t BgL_testz00_3796;

							{	/* Inline/recursion.scm 236 */
								BgL_varz00_bglt BgL_arg3632z00_1435;

								BgL_arg3632z00_1435 =
									(((BgL_appz00_bglt) CREF(BgL_nodez00_1425))->BgL_funz00);
								{	/* Inline/recursion.scm 236 */
									obj_t BgL_obj2170z00_1850;

									BgL_obj2170z00_1850 = (obj_t) (BgL_arg3632z00_1435);
									BgL_testz00_3796 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj2170z00_1850,
										BGl_varz00zzast_nodez00);
								}
							}
							if (BgL_testz00_3796)
								{	/* Inline/recursion.scm 236 */
									obj_t BgL_auxz00_3800;

									{	/* Inline/recursion.scm 236 */
										BgL_variablez00_bglt BgL_auxz00_3801;

										{	/* Inline/recursion.scm 236 */
											BgL_varz00_bglt BgL_obj2155z00_1852;

											BgL_obj2155z00_1852 =
												(((BgL_appz00_bglt) CREF(BgL_nodez00_1425))->
												BgL_funz00);
											BgL_auxz00_3801 =
												(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1852))->
												BgL_variablez00);
										}
										BgL_auxz00_3800 = (obj_t) (BgL_auxz00_3801);
									}
									BgL_testz00_3795 = (BgL_auxz00_3800 == BgL_varz00_1426);
								}
							else
								{	/* Inline/recursion.scm 236 */
									BgL_testz00_3795 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_3795)
							{	/* Inline/recursion.scm 236 */
								return
									MAKE_PAIR(
									(obj_t) (BgL_nodez00_1425), BgL_argszd2callszd2_1430);
							}
						else
							{	/* Inline/recursion.scm 236 */
								return BgL_argszd2callszd2_1430;
							}
					}
				}
			}
		}
	}



/* find-recursive-calls3423 */
	obj_t BGl_findzd2recursivezd2calls3423z00zzinline_recursionz00(obj_t
		BgL_envz00_2628, obj_t BgL_nodez00_2629, obj_t BgL_varz00_2630)
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 224 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1418;

				obj_t BgL_varz00_1419;

				BgL_nodez00_1418 = (BgL_sequencez00_bglt) (BgL_nodez00_2629);
				BgL_varz00_1419 = BgL_varz00_2630;
				{	/* Inline/recursion.scm 225 */
					obj_t BgL_arg3626z00_1846;

					BgL_arg3626z00_1846 =
						(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1418))->BgL_nodesz00);
					return
						BGl_findzd2recursivezd2callsza2za2zzinline_recursionz00
						(BgL_arg3626z00_1846, BgL_varz00_1419);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinline_recursionz00()
	{
		AN_OBJECT;
		{	/* Inline/recursion.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3802z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3802z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3802z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3802z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3802z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3802z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzast_alphatiza7eza7(((long) 509694479),
				BSTRING_TO_STRING(BGl_string3802z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3802z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3802z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3802z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3802z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzinline_inlinez00(((long) 326457085),
				BSTRING_TO_STRING(BGl_string3802z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzinline_simplez00(((long) 168165545),
				BSTRING_TO_STRING(BGl_string3802z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzinline_variantz00(((long) 432906461),
				BSTRING_TO_STRING(BGl_string3802z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzinline_loopz00(((long) 219405810),
				BSTRING_TO_STRING(BGl_string3802z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzinline_appz00(((long) 472786230),
				BSTRING_TO_STRING(BGl_string3802z00zzinline_recursionz00));
			return
				BGl_modulezd2initializa7ationz75zzreduce_csez00(((long) 318913315),
				BSTRING_TO_STRING(BGl_string3802z00zzinline_recursionz00));
		}
	}

#ifdef __cplusplus
}
#endif
