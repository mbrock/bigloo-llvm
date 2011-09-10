/*===========================================================================*/
/*   (Ast/alphatize.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/alphatize.scm)*/
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

	typedef struct BgL_sexitz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_handlerz00;
		bool_t BgL_detachedzf3zf3;
	}               *BgL_sexitz00_bglt;

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

	typedef struct BgL_pragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_formatz00;
	}                *BgL_pragmaz00_bglt;

	typedef struct BgL_getfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_fnamez00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                  *BgL_getfieldz00_bglt;

	typedef struct BgL_setfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_fnamez00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                  *BgL_setfieldz00_bglt;

	typedef struct BgL_newz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_argszd2typezd2;
	}             *BgL_newz00_bglt;

	typedef struct BgL_vallocz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2heapzd2formatz00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                *BgL_vallocz00_bglt;

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

	typedef struct BgL_vlengthz00_bgl
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
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                 *BgL_vlengthz00_bglt;

	typedef struct BgL_isaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		struct BgL_typez00_bgl *BgL_classz00;
	}             *BgL_isaz00_bglt;

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


	extern obj_t BGl_vrefz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_dozd2alphatiza7ezd2select3481za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	extern BgL_boxzd2refzd2_bglt BGl_makezd2boxzd2refz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern BgL_makezd2boxzd2_bglt BGl_makezd2makezd2boxz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_nodez00_bglt);
	static obj_t BGl_dozd2alphatiza7ezd2getfiel3455za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t
		BGl_dozd2alphatiza7ezd2makezd2bo3483z75zzast_alphatiza7eza7(obj_t, obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_dozd2alphatiza7ezd2isa3469za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	extern BgL_appz00_bglt BGl_makezd2appzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_alphatiza7eza7();
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	static obj_t BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(obj_t);
	extern BgL_kwotez00_bglt BGl_makezd2kwotezd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_dozd2alphatiza7ezd2default3433za7zzast_alphatiza7eza7(BgL_nodez00_bglt);
	extern obj_t BGl_vallocz00zzast_nodez00;
	static obj_t BGl_dozd2alphatiza7ezd2cast3471za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzast_alphatiza7eza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_applyz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern BgL_sequencez00_bglt BGl_makezd2sequencezd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_alphatiza7eza7();
	static obj_t BGl_za2locationza2z00zzast_alphatiza7eza7 = BUNSPEC;
	extern BgL_closurez00_bglt BGl_makezd2closurezd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_variablez00_bglt);
	extern BgL_vlengthz00_bglt BGl_makezd2vlengthzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt);
	extern BgL_setzd2exzd2itz00_bglt
		BGl_makezd2setzd2exzd2itzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_varz00_bglt, BgL_nodez00_bglt);
	static obj_t BGl_dozd2alphatiza7ezd2vsetz123465zb5zzast_alphatiza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(BgL_nodez00_bglt);
	extern BgL_localz00_bglt BGl_makezd2localzd2sfunz00zzast_localz00(obj_t,
		BgL_typez00_bglt, BgL_sfunz00_bglt);
	static obj_t BGl_dozd2alphatiza7ezd2funcall3451za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_dozd2alphatiza7ezd2vref3463za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_alphatiza7eza7zzast_alphatiza7eza7(obj_t, obj_t, obj_t,
		BgL_nodez00_bglt);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_dozd2alphatiza7ezd2new3459za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	static obj_t BGl_dozd2alphatiza7ezd2setq3474za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	extern bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	extern BgL_setqz00_bglt BGl_makezd2setqzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_varz00_bglt, BgL_nodez00_bglt);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_vlengthz00zzast_nodez00;
	extern BgL_letzd2funzd2_bglt BGl_makezd2letzd2funz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_dozd2alphatiza7ezd2setfiel3457za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	extern BgL_sfunz00_bglt BGl_makezd2sfunzd2zzast_varz00(long, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern BgL_selectz00_bglt BGl_makezd2selectzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_nodez00_bglt, obj_t, BgL_typez00_bglt);
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_vallocz00_bglt BGl_makezd2valloczd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_dozd2alphatiza7ezd2vlength3461za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	extern BgL_isaz00_bglt BGl_makezd2isazd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt);
	static obj_t BGl_dozd2alphatiza7ezd2conditi3477za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t BGl_methodzd2initzd2zzast_alphatiza7eza7();
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern BgL_funcallz00_bglt BGl_makezd2funcallzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_nodez00_bglt, obj_t, obj_t);
	extern BgL_castz00_bglt BGl_makezd2castzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_nodez00_bglt);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_alphatiza7eza7 = BUNSPEC;
	extern obj_t BGl_usezd2variablez12zc0zzast_sexpz00(BgL_variablez00_bglt,
		obj_t, obj_t);
	extern BgL_atomz00_bglt BGl_makezd2atomzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t);
	extern BgL_failz00_bglt BGl_makezd2failzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_nodez00_bglt, BgL_nodez00_bglt, BgL_nodez00_bglt);
	static obj_t BGl__dozd2alphatiza7ezd2default3433za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	static obj_t
		BGl_dozd2alphatiza7ezd2boxzd2ref3485z75zzast_alphatiza7eza7(obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_knownzd2appzd2lyzd2ze3nodez31zzast_applyz00(obj_t,
		obj_t, BgL_nodez00_bglt, BgL_nodez00_bglt, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_alphatiza7eza7();
	extern obj_t BGl_pragmaz00zzast_nodez00;
	extern BgL_getfieldz00_bglt BGl_makezd2getfieldzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern BgL_jumpzd2exzd2itz00_bglt
		BGl_makezd2jumpzd2exzd2itzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_nodez00_bglt, BgL_nodez00_bglt);
	extern obj_t BGl_funz00zzast_varz00;
	static obj_t BGl_dozd2alphatiza7ezd2fail3479za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	extern BgL_vsetz12z12_bglt BGl_makezd2vsetz12zc0zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	extern BgL_newz00_bglt BGl_makezd2newzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern BgL_conditionalz00_bglt BGl_makezd2conditionalzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_nodez00_bglt, BgL_nodez00_bglt,
		BgL_nodez00_bglt);
	extern BgL_boxzd2setz12zc0_bglt BGl_makezd2boxzd2setz12z12zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_varz00_bglt, BgL_nodez00_bglt);
	static obj_t BGl__alphatiza7eza7zzast_alphatiza7eza7(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern BgL_localz00_bglt BGl_makezd2localzd2sexitz00zzast_localz00(obj_t,
		BgL_typez00_bglt, BgL_sexitz00_bglt);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzast_alphatiza7eza7();
	extern obj_t BGl_getfieldz00zzast_nodez00;
	extern obj_t BGl_isaz00zzast_nodez00;
	static obj_t BGl_dozd2alphatiza7ezd2app3447za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	static obj_t
		BGl_dozd2alphatiza7ezd2setzd2exzd23493za7zzast_alphatiza7eza7(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_dozd2alphatiza7ezd2appzd2ly3449z75zzast_alphatiza7eza7(obj_t,
		obj_t);
	static obj_t BGl__dozd2alphatiza7ez75zzast_alphatiza7eza7(obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern BgL_sexitz00_bglt BGl_makezd2sexitzd2zzast_varz00(obj_t, bool_t);
	extern BgL_pragmaz00_bglt BGl_makezd2pragmazd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern BgL_setfieldz00_bglt BGl_makezd2setfieldzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t
		BGl_dozd2alphatiza7ezd2letzd2fun3489z75zzast_alphatiza7eza7(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_dozd2alphatiza7ezd2kwote3443za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	static obj_t BGl_dozd2alphatiza7ezd2closure3441za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	static obj_t BGl_dozd2alphatiza7ezd2valloc3467za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_newz00zzast_nodez00;
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t
		BGl_dozd2alphatiza7ezd2letzd2var3491z75zzast_alphatiza7eza7(obj_t, obj_t);
	static obj_t
		BGl_dozd2alphatiza7ezd2jumpzd2ex3495z75zzast_alphatiza7eza7(obj_t, obj_t);
	static obj_t BGl_dozd2alphatiza7ezd2sequenc3445za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	extern BgL_vrefz00_bglt BGl_makezd2vrefzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	static obj_t
		BGl_dozd2alphatiza7ezd2boxzd2set3487z75zzast_alphatiza7eza7(obj_t, obj_t);
	extern obj_t BGl_setfieldz00zzast_nodez00;
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	extern BgL_appzd2lyzd2_bglt BGl_makezd2appzd2lyz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_nodez00_bglt, BgL_nodez00_bglt);
	extern BgL_letzd2varzd2_bglt BGl_makezd2letzd2varz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt, bool_t);
	extern bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	static obj_t BGl_dozd2alphatiza7ezd2var3439za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	static obj_t BGl_dozd2alphatiza7ezd2atom3437za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_alphatiza7eza7();
	static obj_t BGl_dozd2alphatiza7ezd2pragma3453za7zzast_alphatiza7eza7(obj_t,
		obj_t);
	static obj_t __cnst[5];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4230z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4266z00,
		BGl_dozd2alphatiza7ezd2var3439za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4229z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4267z00,
		BGl_dozd2alphatiza7ezd2atom3437za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4231z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4268z00,
		BGl_dozd2alphatiza7ezd2closure3441za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4232z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4269z00,
		BGl_dozd2alphatiza7ezd2kwote3443za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4233z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4270z00,
		BGl_dozd2alphatiza7ezd2sequenc3445za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4234z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4271z00,
		BGl_dozd2alphatiza7ezd2app3447za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4235z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4272z00,
		BGl_dozd2alphatiza7ezd2appzd2ly3449z75zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4236z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4273z00,
		BGl_dozd2alphatiza7ezd2funcall3451za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4237z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4274z00,
		BGl_dozd2alphatiza7ezd2pragma3453za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4238z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4275z00,
		BGl_dozd2alphatiza7ezd2getfiel3455za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4240z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4276z00,
		BGl_dozd2alphatiza7ezd2new3459za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4239z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4277z00,
		BGl_dozd2alphatiza7ezd2setfiel3457za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4241z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4278z00,
		BGl_dozd2alphatiza7ezd2vlength3461za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4242z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4279z00,
		BGl_dozd2alphatiza7ezd2vref3463za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4243z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4280z00,
		BGl_dozd2alphatiza7ezd2vsetz123465zb5zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4244z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4281z00,
		BGl_dozd2alphatiza7ezd2valloc3467za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4245z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4282z00,
		BGl_dozd2alphatiza7ezd2isa3469za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4246z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4283z00,
		BGl_dozd2alphatiza7ezd2cast3471za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4247z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4284z00,
		BGl_dozd2alphatiza7ezd2setq3474za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4248z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4285z00,
		BGl_dozd2alphatiza7ezd2conditi3477za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4250z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4286z00,
		BGl_dozd2alphatiza7ezd2select3481za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4249z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4287z00,
		BGl_dozd2alphatiza7ezd2fail3479za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4251z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4288z00,
		BGl_dozd2alphatiza7ezd2makezd2bo3483z75zzast_alphatiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4252z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4289z00,
		BGl_dozd2alphatiza7ezd2boxzd2ref3485z75zzast_alphatiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4253z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4290z00,
		BGl_dozd2alphatiza7ezd2boxzd2set3487z75zzast_alphatiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4254z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4291z00,
		BGl_dozd2alphatiza7ezd2letzd2fun3489z75zzast_alphatiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4255z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4292z00,
		BGl_dozd2alphatiza7ezd2letzd2var3491z75zzast_alphatiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4256z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4293z00,
		BGl_dozd2alphatiza7ezd2setzd2exzd23493za7zzast_alphatiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4257z00zzast_alphatiza7eza7,
		BgL_bgl_doza7d2alphatiza7a7e4294z00,
		BGl_dozd2alphatiza7ezd2jumpzd2ex3495z75zzast_alphatiza7eza7, 0L, BUNSPEC,
		1);
	      DEFINE_STRING(BGl_string4227z00zzast_alphatiza7eza7,
		BgL_bgl_string4227za700za7za7a4295za7, "do-alphatize", 12);
	      DEFINE_STRING(BGl_string4228z00zzast_alphatiza7eza7,
		BgL_bgl_string4228za700za7za7a4296za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string4258z00zzast_alphatiza7eza7,
		BgL_bgl_string4258za700za7za7a4297za7, "alphatize", 9);
	      DEFINE_STRING(BGl_string4260z00zzast_alphatiza7eza7,
		BgL_bgl_string4260za700za7za7a4298za7, "Illegal alphatization (closure)",
		31);
	      DEFINE_STRING(BGl_string4259z00zzast_alphatiza7eza7,
		BgL_bgl_string4259za700za7za7a4299za7, "Illegal alphatization (setq)", 28);
	      DEFINE_STRING(BGl_string4261z00zzast_alphatiza7eza7,
		BgL_bgl_string4261za700za7za7a4300za7, "Illegal alphatization (var)", 27);
	      DEFINE_STRING(BGl_string4262z00zzast_alphatiza7eza7,
		BgL_bgl_string4262za700za7za7a4301za7, "ast_alphatize", 13);
	      DEFINE_STRING(BGl_string4263z00zzast_alphatiza7eza7,
		BgL_bgl_string4263za700za7za7a4302za7,
		"value app set! do-alphatize-default3433 location ", 49);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_alphatiza7ezd2envz75zzast_alphatiza7eza7,
		BgL_bgl__alphatiza7a7eza7a7za74303za7,
		BGl__alphatiza7eza7zzast_alphatiza7eza7, 0L, BUNSPEC, 4);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_dozd2alphatiza7ezd2default3433zd2envz75zzast_alphatiza7eza7,
		BgL_bgl__doza7d2alphatiza7a74304z00,
		BGl__dozd2alphatiza7ezd2default3433za7zzast_alphatiza7eza7, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
		BgL_bgl__doza7d2alphatiza7a74305z00,
		BGl__dozd2alphatiza7ez75zzast_alphatiza7eza7, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzast_alphatiza7eza7(long
		BgL_checksumz00_3975, char *BgL_fromz00_3976)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_alphatiza7eza7))
				{
					BGl_requirezd2initializa7ationz75zzast_alphatiza7eza7 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_alphatiza7eza7();
					BGl_cnstzd2initzd2zzast_alphatiza7eza7();
					BGl_importedzd2moduleszd2initz00zzast_alphatiza7eza7();
					BGl_genericzd2initzd2zzast_alphatiza7eza7();
					BGl_methodzd2initzd2zzast_alphatiza7eza7();
					BGl_toplevelzd2initzd2zzast_alphatiza7eza7();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_alphatiza7eza7()
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 14 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_alphatize");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"ast_alphatize");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_alphatize");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"ast_alphatize");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_alphatiza7eza7()
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 14 */
			{	/* Ast/alphatize.scm 14 */
				obj_t BgL_cportz00_3967;

				BgL_cportz00_3967 =
					bgl_open_input_string(BGl_string4263z00zzast_alphatiza7eza7,
					(int) (((long) 0)));
				{
					long BgL_iz00_3968;

					BgL_iz00_3968 = ((long) 4);
				BgL_loopz00_3969:
					if ((BgL_iz00_3968 == ((long) -1)))
						{	/* Ast/alphatize.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/alphatize.scm 14 */
							{	/* Ast/alphatize.scm 14 */
								obj_t BgL_arg4265z00_3971;

								{	/* Ast/alphatize.scm 14 */

									{	/* Ast/alphatize.scm 14 */
										obj_t BgL_locationz00_3973;

										BgL_locationz00_3973 = BBOOL(((bool_t) 0));
										{	/* Ast/alphatize.scm 14 */

											BgL_arg4265z00_3971 =
												BGl_readz00zz__readerz00(BgL_cportz00_3967,
												BgL_locationz00_3973);
										}
									}
								}
								{	/* Ast/alphatize.scm 14 */
									int BgL_auxz00_3996;

									BgL_auxz00_3996 = (int) (BgL_iz00_3968);
									CNST_TABLE_SET(BgL_auxz00_3996, BgL_arg4265z00_3971);
							}}
							{	/* Ast/alphatize.scm 14 */
								int BgL_auxz00_3974;

								BgL_auxz00_3974 = (int) ((BgL_iz00_3968 - ((long) 1)));
								{
									long BgL_iz00_4001;

									BgL_iz00_4001 = (long) (BgL_auxz00_3974);
									BgL_iz00_3968 = BgL_iz00_4001;
									goto BgL_loopz00_3969;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_alphatiza7eza7()
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 14 */
			BGl_za2locationza2z00zzast_alphatiza7eza7 = BFALSE;
			return BUNSPEC;
		}
	}



/* alphatize */
	BGL_EXPORTED_DEF BgL_nodez00_bglt BGl_alphatiza7eza7zzast_alphatiza7eza7(obj_t
		BgL_whatza2za2_15, obj_t BgL_byza2za2_16, obj_t BgL_locz00_17,
		BgL_nodez00_bglt BgL_nodez00_18)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 37 */
			{
				obj_t BgL_ll3327z00_834;

				obj_t BgL_ll3328z00_835;

				BgL_ll3327z00_834 = BgL_whatza2za2_15;
				BgL_ll3328z00_835 = BgL_byza2za2_16;
			BgL_zc3anonymousza33505ze3z83_836:
				if (NULLP(BgL_ll3327z00_834))
					{	/* Ast/alphatize.scm 39 */
						((bool_t) 1);
					}
				else
					{	/* Ast/alphatize.scm 39 */
						{	/* Ast/alphatize.scm 40 */
							obj_t BgL_whatz00_838;

							obj_t BgL_byz00_839;

							BgL_whatz00_838 = CAR(BgL_ll3327z00_834);
							BgL_byz00_839 = CAR(BgL_ll3328z00_835);
							{
								BgL_variablez00_bglt BgL_auxz00_4007;

								BgL_auxz00_4007 = (BgL_variablez00_bglt) (BgL_whatz00_838);
								((((BgL_variablez00_bglt) CREF(BgL_auxz00_4007))->
										BgL_fastzd2alphazd2) = ((obj_t) BgL_byz00_839), BUNSPEC);
							}
						}
						{
							obj_t BgL_ll3328z00_4012;

							obj_t BgL_ll3327z00_4010;

							BgL_ll3327z00_4010 = CDR(BgL_ll3327z00_834);
							BgL_ll3328z00_4012 = CDR(BgL_ll3328z00_835);
							BgL_ll3328z00_835 = BgL_ll3328z00_4012;
							BgL_ll3327z00_834 = BgL_ll3327z00_4010;
							goto BgL_zc3anonymousza33505ze3z83_836;
						}
					}
			}
			BGl_za2locationza2z00zzast_alphatiza7eza7 = BgL_locz00_17;
			{	/* Ast/alphatize.scm 44 */
				BgL_nodez00_bglt BgL_resz00_843;

				{	/* Ast/alphatize.scm 44 */
					BgL_nodez00_bglt BgL_res4084z00_2150;

					{	/* Ast/alphatize.scm 44 */
						obj_t BgL_method3435z00_2125;

						{	/* Ast/alphatize.scm 44 */
							BgL_objectz00_bglt BgL_objz00_2126;

							BgL_objz00_2126 = (BgL_objectz00_bglt) (BgL_nodez00_18);
							{	/* Ast/alphatize.scm 44 */
								long BgL_objzd2classzd2numz00_2127;

								BgL_objzd2classzd2numz00_2127 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2126);
								{	/* Ast/alphatize.scm 44 */
									obj_t BgL_arg2643z00_2128;

									BgL_arg2643z00_2128 =
										PROCEDURE_REF
										(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
										(int) (((long) 1)));
									{	/* Ast/alphatize.scm 44 */
										obj_t BgL_arrayz00_2130;

										int BgL_offsetz00_2131;

										BgL_arrayz00_2130 = BgL_arg2643z00_2128;
										BgL_offsetz00_2131 = (int) (BgL_objzd2classzd2numz00_2127);
										{	/* Ast/alphatize.scm 44 */
											long BgL_offsetz00_2132;

											BgL_offsetz00_2132 =
												((long) (BgL_offsetz00_2131) - OBJECT_TYPE);
											{	/* Ast/alphatize.scm 44 */
												long BgL_modz00_2133;

												{	/* Ast/alphatize.scm 44 */
													int BgL_arg2645z00_2134;

													BgL_arg2645z00_2134 = (int) (((long) 16));
													{	/* Ast/alphatize.scm 44 */
														long BgL_auxz00_4022;

														BgL_auxz00_4022 = (long) (BgL_arg2645z00_2134);
														BgL_modz00_2133 =
															(BgL_offsetz00_2132 / BgL_auxz00_4022);
												}}
												{	/* Ast/alphatize.scm 44 */
													long BgL_restz00_2135;

													{	/* Ast/alphatize.scm 44 */
														int BgL_arg2644z00_2136;

														BgL_arg2644z00_2136 = (int) (((long) 16));
														{	/* Ast/alphatize.scm 44 */
															long BgL_auxz00_4026;

															BgL_auxz00_4026 = (long) (BgL_arg2644z00_2136);
															BgL_restz00_2135 =
																(BgL_offsetz00_2132 % BgL_auxz00_4026);
													}}
													{	/* Ast/alphatize.scm 44 */

														BgL_method3435z00_2125 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2130,
																(int) (BgL_modz00_2133)),
															(int) (BgL_restz00_2135));
						}}}}}}}}
						BgL_res4084z00_2150 =
							(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3435z00_2125)
							(BgL_method3435z00_2125, (obj_t) (BgL_nodez00_18), BEOA));
					}
					BgL_resz00_843 = BgL_res4084z00_2150;
				}
				{
					obj_t BgL_l3330z00_845;

					BgL_l3330z00_845 = BgL_whatza2za2_15;
				BgL_zc3anonymousza33509ze3z83_846:
					if (PAIRP(BgL_l3330z00_845))
						{	/* Ast/alphatize.scm 46 */
							{	/* Ast/alphatize.scm 47 */
								obj_t BgL_whatz00_848;

								BgL_whatz00_848 = CAR(BgL_l3330z00_845);
								{
									BgL_variablez00_bglt BgL_auxz00_4040;

									BgL_auxz00_4040 = (BgL_variablez00_bglt) (BgL_whatz00_848);
									((((BgL_variablez00_bglt) CREF(BgL_auxz00_4040))->
											BgL_fastzd2alphazd2) = ((obj_t) BUNSPEC), BUNSPEC);
								}
							}
							{
								obj_t BgL_l3330z00_4043;

								BgL_l3330z00_4043 = CDR(BgL_l3330z00_845);
								BgL_l3330z00_845 = BgL_l3330z00_4043;
								goto BgL_zc3anonymousza33509ze3z83_846;
							}
						}
					else
						{	/* Ast/alphatize.scm 46 */
							((bool_t) 1);
						}
				}
				return BgL_resz00_843;
			}
		}
	}



/* _alphatize */
	obj_t BGl__alphatiza7eza7zzast_alphatiza7eza7(obj_t BgL_envz00_3870,
		obj_t BgL_whatza2za2_3871, obj_t BgL_byza2za2_3872, obj_t BgL_locz00_3873,
		obj_t BgL_nodez00_3874)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 37 */
			return
				(obj_t) (BGl_alphatiza7eza7zzast_alphatiza7eza7(BgL_whatza2za2_3871,
					BgL_byza2za2_3872, BgL_locz00_3873,
					(BgL_nodez00_bglt) (BgL_nodez00_3874)));
		}
	}



/* get-inline-location */
	obj_t BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(obj_t BgL_nodez00_19)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 63 */
			{	/* Ast/alphatize.scm 65 */
				bool_t BgL_testz00_4048;

				{	/* Ast/alphatize.scm 65 */
					obj_t BgL_oz00_2156;

					BgL_oz00_2156 = BGl_za2locationza2z00zzast_alphatiza7eza7;
					if (STRUCTP(BgL_oz00_2156))
						{	/* Ast/alphatize.scm 65 */
							BgL_testz00_4048 =
								(STRUCT_KEY(BgL_oz00_2156) == CNST_TABLE_REF(((long) 0)));
						}
					else
						{	/* Ast/alphatize.scm 65 */
							BgL_testz00_4048 = ((bool_t) 0);
						}
				}
				if (BgL_testz00_4048)
					{	/* Ast/alphatize.scm 65 */
						return BGl_za2locationza2z00zzast_alphatiza7eza7;
					}
				else
					{	/* Ast/alphatize.scm 67 */
						bool_t BgL_testz00_4054;

						{	/* Ast/alphatize.scm 67 */
							obj_t BgL_oz00_2164;

							{
								BgL_nodez00_bglt BgL_auxz00_4055;

								BgL_auxz00_4055 = (BgL_nodez00_bglt) (BgL_nodez00_19);
								BgL_oz00_2164 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4055))->BgL_locz00);
							}
							if (STRUCTP(BgL_oz00_2164))
								{	/* Ast/alphatize.scm 67 */
									BgL_testz00_4054 =
										(STRUCT_KEY(BgL_oz00_2164) == CNST_TABLE_REF(((long) 0)));
								}
							else
								{	/* Ast/alphatize.scm 67 */
									BgL_testz00_4054 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_4054)
							{
								BgL_nodez00_bglt BgL_auxz00_4063;

								BgL_auxz00_4063 = (BgL_nodez00_bglt) (BgL_nodez00_19);
								return (((BgL_nodez00_bglt) CREF(BgL_auxz00_4063))->BgL_locz00);
							}
						else
							{	/* Ast/alphatize.scm 67 */
								return BFALSE;
							}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_alphatiza7eza7()
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 14 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_dozd2alphatiza7ezd2default3433zd2envz75zzast_alphatiza7eza7,
				BGl_nodez00zzast_nodez00, BGl_string4227z00zzast_alphatiza7eza7);
		}
	}



/* do-alphatize */
	BgL_nodez00_bglt BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(BgL_nodez00_bglt
		BgL_nodez00_20)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 75 */
			{	/* Ast/alphatize.scm 75 */
				obj_t BgL_method3435z00_2172;

				{	/* Ast/alphatize.scm 75 */
					BgL_objectz00_bglt BgL_objz00_2173;

					BgL_objz00_2173 = (BgL_objectz00_bglt) (BgL_nodez00_20);
					{	/* Ast/alphatize.scm 75 */
						long BgL_objzd2classzd2numz00_2174;

						BgL_objzd2classzd2numz00_2174 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2173);
						{	/* Ast/alphatize.scm 75 */
							obj_t BgL_arg2643z00_2175;

							BgL_arg2643z00_2175 =
								PROCEDURE_REF(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
								(int) (((long) 1)));
							{	/* Ast/alphatize.scm 75 */
								obj_t BgL_arrayz00_2177;

								int BgL_offsetz00_2178;

								BgL_arrayz00_2177 = BgL_arg2643z00_2175;
								BgL_offsetz00_2178 = (int) (BgL_objzd2classzd2numz00_2174);
								{	/* Ast/alphatize.scm 75 */
									long BgL_offsetz00_2179;

									BgL_offsetz00_2179 =
										((long) (BgL_offsetz00_2178) - OBJECT_TYPE);
									{	/* Ast/alphatize.scm 75 */
										long BgL_modz00_2180;

										{	/* Ast/alphatize.scm 75 */
											int BgL_arg2645z00_2181;

											BgL_arg2645z00_2181 = (int) (((long) 16));
											{	/* Ast/alphatize.scm 75 */
												long BgL_auxz00_4075;

												BgL_auxz00_4075 = (long) (BgL_arg2645z00_2181);
												BgL_modz00_2180 =
													(BgL_offsetz00_2179 / BgL_auxz00_4075);
										}}
										{	/* Ast/alphatize.scm 75 */
											long BgL_restz00_2182;

											{	/* Ast/alphatize.scm 75 */
												int BgL_arg2644z00_2183;

												BgL_arg2644z00_2183 = (int) (((long) 16));
												{	/* Ast/alphatize.scm 75 */
													long BgL_auxz00_4079;

													BgL_auxz00_4079 = (long) (BgL_arg2644z00_2183);
													BgL_restz00_2182 =
														(BgL_offsetz00_2179 % BgL_auxz00_4079);
											}}
											{	/* Ast/alphatize.scm 75 */

												BgL_method3435z00_2172 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2177,
														(int) (BgL_modz00_2180)), (int) (BgL_restz00_2182));
				}}}}}}}}
				return
					(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3435z00_2172)
					(BgL_method3435z00_2172, (obj_t) (BgL_nodez00_20), BEOA));
			}
		}
	}



/* _do-alphatize */
	obj_t BGl__dozd2alphatiza7ez75zzast_alphatiza7eza7(obj_t BgL_envz00_3875,
		obj_t BgL_nodez00_3876)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 75 */
			return
				(obj_t) (BGl_dozd2alphatiza7ez75zzast_alphatiza7eza7(
					(BgL_nodez00_bglt) (BgL_nodez00_3876)));
		}
	}



/* do-alphatize-default3433 */
	BgL_nodez00_bglt
		BGl_dozd2alphatiza7ezd2default3433za7zzast_alphatiza7eza7(BgL_nodez00_bglt
		BgL_nodez00_21)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 14 */
			return
				(BgL_nodez00_bglt) (BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
					BGl_string4228z00zzast_alphatiza7eza7, (obj_t) (BgL_nodez00_21)));
		}
	}



/* _do-alphatize-default3433 */
	obj_t BGl__dozd2alphatiza7ezd2default3433za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3877, obj_t BgL_nodez00_3878)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 14 */
			return
				(obj_t) (BGl_dozd2alphatiza7ezd2default3433za7zzast_alphatiza7eza7(
					(BgL_nodez00_bglt) (BgL_nodez00_3878)));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_alphatiza7eza7()
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 14 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_atomz00zzast_nodez00, BGl_proc4229z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_varz00zzast_nodez00, BGl_proc4230z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_closurez00zzast_nodez00, BGl_proc4231z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_kwotez00zzast_nodez00, BGl_proc4232z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_sequencez00zzast_nodez00, BGl_proc4233z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_appz00zzast_nodez00, BGl_proc4234z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc4235z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_funcallz00zzast_nodez00, BGl_proc4236z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_pragmaz00zzast_nodez00, BGl_proc4237z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_getfieldz00zzast_nodez00, BGl_proc4238z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_setfieldz00zzast_nodez00, BGl_proc4239z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_newz00zzast_nodez00, BGl_proc4240z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_vlengthz00zzast_nodez00, BGl_proc4241z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_vrefz00zzast_nodez00, BGl_proc4242z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_vsetz12z12zzast_nodez00, BGl_proc4243z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_vallocz00zzast_nodez00, BGl_proc4244z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_isaz00zzast_nodez00, BGl_proc4245z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_castz00zzast_nodez00, BGl_proc4246z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_setqz00zzast_nodez00, BGl_proc4247z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_conditionalz00zzast_nodez00, BGl_proc4248z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_failz00zzast_nodez00, BGl_proc4249z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_selectz00zzast_nodez00, BGl_proc4250z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc4251z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc4252z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc4253z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc4254z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc4255z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc4256z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc4257z00zzast_alphatiza7eza7,
				BGl_string4227z00zzast_alphatiza7eza7);
		}
	}



/* do-alphatize-jump-ex3495 */
	obj_t BGl_dozd2alphatiza7ezd2jumpzd2ex3495z75zzast_alphatiza7eza7(obj_t
		BgL_envz00_3908, obj_t BgL_nodez00_3909)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 454 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_2097;

				{	/* Ast/alphatize.scm 455 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_4129;

					BgL_nodez00_2097 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_3909);
					{	/* Ast/alphatize.scm 456 */
						BgL_jumpzd2exzd2itz00_bglt BgL_new3326z00_2101;

						{	/* Ast/alphatize.scm 456 */
							obj_t BgL_arg4073z00_2102;

							BgL_typez00_bglt BgL_arg4074z00_2103;

							BgL_nodez00_bglt BgL_arg4075z00_2104;

							BgL_nodez00_bglt BgL_arg4076z00_2105;

							BgL_arg4073z00_2102 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_2097));
							{
								BgL_nodez00_bglt BgL_auxz00_4132;

								BgL_auxz00_4132 = (BgL_nodez00_bglt) (BgL_nodez00_2097);
								BgL_arg4074z00_2103 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4132))->BgL_typez00);
							}
							{	/* Ast/alphatize.scm 457 */
								BgL_nodez00_bglt BgL_arg4077z00_2106;

								BgL_arg4077z00_2106 =
									(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_2097))->
									BgL_exitz00);
								{	/* Ast/alphatize.scm 457 */
									BgL_nodez00_bglt BgL_res4223z00_3841;

									{	/* Ast/alphatize.scm 457 */
										obj_t BgL_method3435z00_3816;

										{	/* Ast/alphatize.scm 457 */
											BgL_objectz00_bglt BgL_objz00_3817;

											BgL_objz00_3817 =
												(BgL_objectz00_bglt) (BgL_arg4077z00_2106);
											{	/* Ast/alphatize.scm 457 */
												long BgL_objzd2classzd2numz00_3818;

												BgL_objzd2classzd2numz00_3818 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3817);
												{	/* Ast/alphatize.scm 457 */
													obj_t BgL_arg2643z00_3819;

													BgL_arg2643z00_3819 =
														PROCEDURE_REF
														(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
														(int) (((long) 1)));
													{	/* Ast/alphatize.scm 457 */
														obj_t BgL_arrayz00_3821;

														int BgL_offsetz00_3822;

														BgL_arrayz00_3821 = BgL_arg2643z00_3819;
														BgL_offsetz00_3822 =
															(int) (BgL_objzd2classzd2numz00_3818);
														{	/* Ast/alphatize.scm 457 */
															long BgL_offsetz00_3823;

															BgL_offsetz00_3823 =
																((long) (BgL_offsetz00_3822) - OBJECT_TYPE);
															{	/* Ast/alphatize.scm 457 */
																long BgL_modz00_3824;

																{	/* Ast/alphatize.scm 457 */
																	int BgL_arg2645z00_3825;

																	BgL_arg2645z00_3825 = (int) (((long) 16));
																	{	/* Ast/alphatize.scm 457 */
																		long BgL_auxz00_4144;

																		BgL_auxz00_4144 =
																			(long) (BgL_arg2645z00_3825);
																		BgL_modz00_3824 =
																			(BgL_offsetz00_3823 / BgL_auxz00_4144);
																}}
																{	/* Ast/alphatize.scm 457 */
																	long BgL_restz00_3826;

																	{	/* Ast/alphatize.scm 457 */
																		int BgL_arg2644z00_3827;

																		BgL_arg2644z00_3827 = (int) (((long) 16));
																		{	/* Ast/alphatize.scm 457 */
																			long BgL_auxz00_4148;

																			BgL_auxz00_4148 =
																				(long) (BgL_arg2644z00_3827);
																			BgL_restz00_3826 =
																				(BgL_offsetz00_3823 % BgL_auxz00_4148);
																	}}
																	{	/* Ast/alphatize.scm 457 */

																		BgL_method3435z00_3816 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3821,
																				(int) (BgL_modz00_3824)),
																			(int) (BgL_restz00_3826));
										}}}}}}}}
										BgL_res4223z00_3841 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3435z00_3816) (BgL_method3435z00_3816,
												(obj_t) (BgL_arg4077z00_2106), BEOA));
									}
									BgL_arg4075z00_2104 = BgL_res4223z00_3841;
							}}
							{	/* Ast/alphatize.scm 458 */
								BgL_nodez00_bglt BgL_arg4078z00_2107;

								BgL_arg4078z00_2107 =
									(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_2097))->
									BgL_valuez00);
								{	/* Ast/alphatize.scm 458 */
									BgL_nodez00_bglt BgL_res4226z00_3869;

									{	/* Ast/alphatize.scm 458 */
										obj_t BgL_method3435z00_3844;

										{	/* Ast/alphatize.scm 458 */
											BgL_objectz00_bglt BgL_objz00_3845;

											BgL_objz00_3845 =
												(BgL_objectz00_bglt) (BgL_arg4078z00_2107);
											{	/* Ast/alphatize.scm 458 */
												long BgL_objzd2classzd2numz00_3846;

												BgL_objzd2classzd2numz00_3846 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3845);
												{	/* Ast/alphatize.scm 458 */
													obj_t BgL_arg2643z00_3847;

													BgL_arg2643z00_3847 =
														PROCEDURE_REF
														(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
														(int) (((long) 1)));
													{	/* Ast/alphatize.scm 458 */
														obj_t BgL_arrayz00_3849;

														int BgL_offsetz00_3850;

														BgL_arrayz00_3849 = BgL_arg2643z00_3847;
														BgL_offsetz00_3850 =
															(int) (BgL_objzd2classzd2numz00_3846);
														{	/* Ast/alphatize.scm 458 */
															long BgL_offsetz00_3851;

															BgL_offsetz00_3851 =
																((long) (BgL_offsetz00_3850) - OBJECT_TYPE);
															{	/* Ast/alphatize.scm 458 */
																long BgL_modz00_3852;

																{	/* Ast/alphatize.scm 458 */
																	int BgL_arg2645z00_3853;

																	BgL_arg2645z00_3853 = (int) (((long) 16));
																	{	/* Ast/alphatize.scm 458 */
																		long BgL_auxz00_4168;

																		BgL_auxz00_4168 =
																			(long) (BgL_arg2645z00_3853);
																		BgL_modz00_3852 =
																			(BgL_offsetz00_3851 / BgL_auxz00_4168);
																}}
																{	/* Ast/alphatize.scm 458 */
																	long BgL_restz00_3854;

																	{	/* Ast/alphatize.scm 458 */
																		int BgL_arg2644z00_3855;

																		BgL_arg2644z00_3855 = (int) (((long) 16));
																		{	/* Ast/alphatize.scm 458 */
																			long BgL_auxz00_4172;

																			BgL_auxz00_4172 =
																				(long) (BgL_arg2644z00_3855);
																			BgL_restz00_3854 =
																				(BgL_offsetz00_3851 % BgL_auxz00_4172);
																	}}
																	{	/* Ast/alphatize.scm 458 */

																		BgL_method3435z00_3844 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3849,
																				(int) (BgL_modz00_3852)),
																			(int) (BgL_restz00_3854));
										}}}}}}}}
										BgL_res4226z00_3869 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3435z00_3844) (BgL_method3435z00_3844,
												(obj_t) (BgL_arg4078z00_2107), BEOA));
									}
									BgL_arg4076z00_2105 = BgL_res4226z00_3869;
							}}
							BgL_new3326z00_2101 =
								BGl_makezd2jumpzd2exzd2itzd2zzast_nodez00(BgL_arg4073z00_2102,
								BgL_arg4074z00_2103, BgL_arg4075z00_2104, BgL_arg4076z00_2105);
						}
						{	/* Ast/alphatize.scm 455 */

							BgL_auxz00_4129 = BgL_new3326z00_2101;
					}}
					return (obj_t) (BgL_auxz00_4129);
				}
			}
		}
	}



/* do-alphatize-set-ex-3493 */
	obj_t BGl_dozd2alphatiza7ezd2setzd2exzd23493za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3910, obj_t BgL_nodez00_3911)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 429 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_2063;

				{	/* Ast/alphatize.scm 430 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_4186;

					BgL_nodez00_2063 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_3911);
					{	/* Ast/alphatize.scm 430 */
						BgL_variablez00_bglt BgL_oldzd2varzd2_2066;

						{	/* Ast/alphatize.scm 430 */
							BgL_varz00_bglt BgL_obj2155z00_3795;

							BgL_obj2155z00_3795 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_2063))->
								BgL_varz00);
							BgL_oldzd2varzd2_2066 =
								(((BgL_varz00_bglt) CREF(BgL_obj2155z00_3795))->
								BgL_variablez00);
						}
						{	/* Ast/alphatize.scm 430 */
							BgL_valuez00_bglt BgL_oldzd2exitzd2_2067;

							BgL_oldzd2exitzd2_2067 =
								(((BgL_variablez00_bglt) CREF(BgL_oldzd2varzd2_2066))->
								BgL_valuez00);
							{	/* Ast/alphatize.scm 431 */
								obj_t BgL_oldzd2hdlgzd2_2068;

								{
									BgL_sexitz00_bglt BgL_auxz00_4190;

									BgL_auxz00_4190 =
										(BgL_sexitz00_bglt) (BgL_oldzd2exitzd2_2067);
									BgL_oldzd2hdlgzd2_2068 =
										(((BgL_sexitz00_bglt) CREF(BgL_auxz00_4190))->
										BgL_handlerz00);
								}
								{	/* Ast/alphatize.scm 432 */
									obj_t BgL_alphazd2hdlgzd2_2069;

									{
										BgL_variablez00_bglt BgL_auxz00_4193;

										BgL_auxz00_4193 =
											(BgL_variablez00_bglt) (BgL_oldzd2hdlgzd2_2068);
										BgL_alphazd2hdlgzd2_2069 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_4193))->
											BgL_fastzd2alphazd2);
									}
									{	/* Ast/alphatize.scm 433 */
										BgL_localz00_bglt BgL_newzd2varzd2_2070;

										{	/* Ast/alphatize.scm 434 */
											obj_t BgL_arg4067z00_2088;

											BgL_typez00_bglt BgL_arg4068z00_2089;

											BgL_sexitz00_bglt BgL_arg4069z00_2090;

											BgL_arg4067z00_2088 =
												(((BgL_variablez00_bglt) CREF(BgL_oldzd2varzd2_2066))->
												BgL_idz00);
											BgL_arg4068z00_2089 =
												(((BgL_variablez00_bglt) CREF(BgL_oldzd2varzd2_2066))->
												BgL_typez00);
											{	/* Ast/alphatize.scm 436 */
												BgL_sexitz00_bglt BgL_duplicated3319z00_2091;

												BgL_duplicated3319z00_2091 =
													(BgL_sexitz00_bglt) (BgL_oldzd2exitzd2_2067);
												{	/* Ast/alphatize.scm 436 */
													BgL_sexitz00_bglt BgL_new3320z00_2092;

													{	/* Ast/alphatize.scm 436 */
														bool_t BgL_arg4070z00_2093;

														BgL_arg4070z00_2093 =
															(((BgL_sexitz00_bglt)
																CREF(BgL_duplicated3319z00_2091))->
															BgL_detachedzf3zf3);
														BgL_new3320z00_2092 =
															BGl_makezd2sexitzd2zzast_varz00
															(BgL_alphazd2hdlgzd2_2069, BgL_arg4070z00_2093);
													}
													{	/* Ast/alphatize.scm 436 */

														BgL_arg4069z00_2090 = BgL_new3320z00_2092;
													}
												}
											}
											BgL_newzd2varzd2_2070 =
												BGl_makezd2localzd2sexitz00zzast_localz00
												(BgL_arg4067z00_2088, BgL_arg4068z00_2089,
												BgL_arg4069z00_2090);
										}
										{	/* Ast/alphatize.scm 434 */
											BgL_nodez00_bglt BgL_oldzd2bodyzd2_2071;

											BgL_oldzd2bodyzd2_2071 =
												(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_2063))->
												BgL_bodyz00);
											{	/* Ast/alphatize.scm 439 */

												{	/* Ast/alphatize.scm 440 */
													bool_t BgL_arg4055z00_2072;

													{
														BgL_localz00_bglt BgL_auxz00_4203;

														BgL_auxz00_4203 =
															(BgL_localz00_bglt) (BgL_oldzd2varzd2_2066);
														BgL_arg4055z00_2072 =
															(((BgL_localz00_bglt) CREF(BgL_auxz00_4203))->
															BgL_userzf3zf3);
													}
													((((BgL_localz00_bglt) CREF(BgL_newzd2varzd2_2070))->
															BgL_userzf3zf3) =
														((bool_t) BgL_arg4055z00_2072), BUNSPEC);
												}
												{	/* Ast/alphatize.scm 442 */
													BgL_setzd2exzd2itz00_bglt BgL_new3322z00_2074;

													{	/* Ast/alphatize.scm 442 */
														obj_t BgL_arg4056z00_2075;

														BgL_typez00_bglt BgL_arg4057z00_2076;

														BgL_varz00_bglt BgL_arg4058z00_2077;

														BgL_nodez00_bglt BgL_arg4059z00_2078;

														BgL_arg4056z00_2075 =
															BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7
															((obj_t) (BgL_nodez00_2063));
														{
															BgL_nodez00_bglt BgL_auxz00_4209;

															BgL_auxz00_4209 =
																(BgL_nodez00_bglt) (BgL_nodez00_2063);
															BgL_arg4057z00_2076 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_4209))->
																BgL_typez00);
														}
														{	/* Ast/alphatize.scm 443 */
															BgL_varz00_bglt BgL_duplicated3323z00_2079;

															BgL_duplicated3323z00_2079 =
																(((BgL_setzd2exzd2itz00_bglt)
																	CREF(BgL_nodez00_2063))->BgL_varz00);
															{	/* Ast/alphatize.scm 444 */
																BgL_varz00_bglt BgL_new3324z00_2080;

																{	/* Ast/alphatize.scm 444 */
																	obj_t BgL_arg4060z00_2081;

																	BgL_typez00_bglt BgL_arg4061z00_2082;

																	BgL_arg4060z00_2081 =
																		BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7
																		((obj_t) (BgL_nodez00_2063));
																	{
																		BgL_nodez00_bglt BgL_auxz00_4215;

																		BgL_auxz00_4215 =
																			(BgL_nodez00_bglt)
																			(BgL_duplicated3323z00_2079);
																		BgL_arg4061z00_2082 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_auxz00_4215))->BgL_typez00);
																	}
																	BgL_new3324z00_2080 =
																		BGl_makezd2varzd2zzast_nodez00
																		(BgL_arg4060z00_2081, BgL_arg4061z00_2082,
																		(BgL_variablez00_bglt)
																		(BgL_newzd2varzd2_2070));
																}
																{	/* Ast/alphatize.scm 443 */

																	BgL_arg4058z00_2077 = BgL_new3324z00_2080;
																}
															}
														}
														{	/* Ast/alphatize.scm 446 */
															obj_t BgL_arg4062z00_2083;

															obj_t BgL_arg4063z00_2084;

															obj_t BgL_arg4064z00_2085;

															{	/* Ast/alphatize.scm 446 */
																obj_t BgL_list4065z00_2086;

																BgL_list4065z00_2086 =
																	MAKE_PAIR(
																	(obj_t) (BgL_oldzd2varzd2_2066), BNIL);
																BgL_arg4062z00_2083 = BgL_list4065z00_2086;
															}
															{	/* Ast/alphatize.scm 447 */
																obj_t BgL_list4066z00_2087;

																BgL_list4066z00_2087 =
																	MAKE_PAIR(
																	(obj_t) (BgL_newzd2varzd2_2070), BNIL);
																BgL_arg4063z00_2084 = BgL_list4066z00_2087;
															}
															BgL_arg4064z00_2085 =
																BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7
																((obj_t) (BgL_nodez00_2063));
															BgL_arg4059z00_2078 =
																BGl_alphatiza7eza7zzast_alphatiza7eza7
																(BgL_arg4062z00_2083, BgL_arg4063z00_2084,
																BgL_arg4064z00_2085, BgL_oldzd2bodyzd2_2071);
														}
														BgL_new3322z00_2074 =
															BGl_makezd2setzd2exzd2itzd2zzast_nodez00
															(BgL_arg4056z00_2075, BgL_arg4057z00_2076,
															BgL_arg4058z00_2077, BgL_arg4059z00_2078);
													}
													{	/* Ast/alphatize.scm 441 */

														BgL_auxz00_4186 = BgL_new3322z00_2074;
													}
												}
											}
										}
									}
								}
							}
						}
					}
					return (obj_t) (BgL_auxz00_4186);
				}
			}
		}
	}



/* do-alphatize-let-var3491 */
	obj_t BGl_dozd2alphatiza7ezd2letzd2var3491z75zzast_alphatiza7eza7(obj_t
		BgL_envz00_3912, obj_t BgL_nodez00_3913)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 401 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1988;

				{	/* Ast/alphatize.scm 402 */
					BgL_letzd2varzd2_bglt BgL_auxz00_4230;

					BgL_nodez00_1988 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_3913);
					{	/* Ast/alphatize.scm 402 */
						obj_t BgL_oldzd2localszd2_1991;

						{	/* Ast/alphatize.scm 402 */
							obj_t BgL_l3416z00_2043;

							BgL_l3416z00_2043 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1988))->
								BgL_bindingsz00);
							if (NULLP(BgL_l3416z00_2043))
								{	/* Ast/alphatize.scm 402 */
									BgL_oldzd2localszd2_1991 = BNIL;
								}
							else
								{	/* Ast/alphatize.scm 402 */
									obj_t BgL_head3418z00_2045;

									BgL_head3418z00_2045 =
										MAKE_PAIR(CAR(CAR(BgL_l3416z00_2043)), BNIL);
									{	/* Ast/alphatize.scm 402 */
										obj_t BgL_g3421z00_2046;

										BgL_g3421z00_2046 = CDR(BgL_l3416z00_2043);
										{
											obj_t BgL_l3416z00_2048;

											obj_t BgL_tail3419z00_2049;

											BgL_l3416z00_2048 = BgL_g3421z00_2046;
											BgL_tail3419z00_2049 = BgL_head3418z00_2045;
										BgL_zc3anonymousza34045ze3z83_2050:
											if (NULLP(BgL_l3416z00_2048))
												{	/* Ast/alphatize.scm 402 */
													BgL_oldzd2localszd2_1991 = BgL_head3418z00_2045;
												}
											else
												{	/* Ast/alphatize.scm 402 */
													obj_t BgL_newtail3420z00_2052;

													BgL_newtail3420z00_2052 =
														MAKE_PAIR(CAR(CAR(BgL_l3416z00_2048)), BNIL);
													SET_CDR(BgL_tail3419z00_2049,
														BgL_newtail3420z00_2052);
													{
														obj_t BgL_tail3419z00_4246;

														obj_t BgL_l3416z00_4244;

														BgL_l3416z00_4244 = CDR(BgL_l3416z00_2048);
														BgL_tail3419z00_4246 = BgL_newtail3420z00_2052;
														BgL_tail3419z00_2049 = BgL_tail3419z00_4246;
														BgL_l3416z00_2048 = BgL_l3416z00_4244;
														goto BgL_zc3anonymousza34045ze3z83_2050;
													}
												}
										}
									}
								}
						}
						{	/* Ast/alphatize.scm 402 */
							obj_t BgL_newzd2localszd2_1992;

							if (NULLP(BgL_oldzd2localszd2_1991))
								{	/* Ast/alphatize.scm 403 */
									BgL_newzd2localszd2_1992 = BNIL;
								}
							else
								{	/* Ast/alphatize.scm 403 */
									obj_t BgL_head3424z00_2026;

									BgL_head3424z00_2026 = MAKE_PAIR(BNIL, BNIL);
									{
										obj_t BgL_l3422z00_2028;

										obj_t BgL_tail3425z00_2029;

										BgL_l3422z00_2028 = BgL_oldzd2localszd2_1991;
										BgL_tail3425z00_2029 = BgL_head3424z00_2026;
									BgL_zc3anonymousza34035ze3z83_2030:
										if (NULLP(BgL_l3422z00_2028))
											{	/* Ast/alphatize.scm 403 */
												BgL_newzd2localszd2_1992 = CDR(BgL_head3424z00_2026);
											}
										else
											{	/* Ast/alphatize.scm 403 */
												obj_t BgL_newtail3426z00_2032;

												{	/* Ast/alphatize.scm 403 */
													BgL_localz00_bglt BgL_arg4038z00_2034;

													{	/* Ast/alphatize.scm 403 */
														obj_t BgL_lz00_2036;

														BgL_lz00_2036 = CAR(BgL_l3422z00_2028);
														{	/* Ast/alphatize.scm 408 */
															BgL_localz00_bglt BgL_varz00_2037;

															{	/* Ast/alphatize.scm 408 */
																obj_t BgL_arg4042z00_2040;

																BgL_typez00_bglt BgL_arg4043z00_2041;

																{
																	BgL_variablez00_bglt BgL_auxz00_4254;

																	BgL_auxz00_4254 =
																		(BgL_variablez00_bglt) (BgL_lz00_2036);
																	BgL_arg4042z00_2040 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_4254))->BgL_idz00);
																}
																{
																	BgL_variablez00_bglt BgL_auxz00_4257;

																	BgL_auxz00_4257 =
																		(BgL_variablez00_bglt) (BgL_lz00_2036);
																	BgL_arg4043z00_2041 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_4257))->BgL_typez00);
																}
																BgL_varz00_2037 =
																	BGl_makezd2localzd2svarz00zzast_localz00
																	(BgL_arg4042z00_2040, BgL_arg4043z00_2041);
															}
															{	/* Ast/alphatize.scm 410 */
																bool_t BgL_arg4040z00_2038;

																{
																	BgL_localz00_bglt BgL_auxz00_4261;

																	BgL_auxz00_4261 =
																		(BgL_localz00_bglt) (BgL_lz00_2036);
																	BgL_arg4040z00_2038 =
																		(((BgL_localz00_bglt)
																			CREF(BgL_auxz00_4261))->BgL_userzf3zf3);
																}
																((((BgL_localz00_bglt) CREF(BgL_varz00_2037))->
																		BgL_userzf3zf3) =
																	((bool_t) BgL_arg4040z00_2038), BUNSPEC);
															}
															{	/* Ast/alphatize.scm 411 */
																obj_t BgL_arg4041z00_2039;

																{
																	BgL_variablez00_bglt BgL_auxz00_4265;

																	BgL_auxz00_4265 =
																		(BgL_variablez00_bglt) (BgL_lz00_2036);
																	BgL_arg4041z00_2039 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_auxz00_4265))->BgL_accessz00);
																}
																{
																	BgL_variablez00_bglt BgL_auxz00_4268;

																	BgL_auxz00_4268 =
																		(BgL_variablez00_bglt) (BgL_varz00_2037);
																	((((BgL_variablez00_bglt)
																				CREF(BgL_auxz00_4268))->BgL_accessz00) =
																		((obj_t) BgL_arg4041z00_2039), BUNSPEC);
																}
															}
															BgL_arg4038z00_2034 = BgL_varz00_2037;
														}
													}
													BgL_newtail3426z00_2032 =
														MAKE_PAIR((obj_t) (BgL_arg4038z00_2034), BNIL);
												}
												SET_CDR(BgL_tail3425z00_2029, BgL_newtail3426z00_2032);
												{
													obj_t BgL_tail3425z00_4276;

													obj_t BgL_l3422z00_4274;

													BgL_l3422z00_4274 = CDR(BgL_l3422z00_2028);
													BgL_tail3425z00_4276 = BgL_newtail3426z00_2032;
													BgL_tail3425z00_2029 = BgL_tail3425z00_4276;
													BgL_l3422z00_2028 = BgL_l3422z00_4274;
													goto BgL_zc3anonymousza34035ze3z83_2030;
												}
											}
									}
								}
							{	/* Ast/alphatize.scm 403 */
								obj_t BgL_newzd2bindingszd2_1993;

								{	/* Ast/alphatize.scm 414 */
									obj_t BgL_ll3427z00_2004;

									BgL_ll3427z00_2004 =
										(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1988))->
										BgL_bindingsz00);
									if (NULLP(BgL_ll3427z00_2004))
										{	/* Ast/alphatize.scm 414 */
											BgL_newzd2bindingszd2_1993 = BNIL;
										}
									else
										{	/* Ast/alphatize.scm 414 */
											obj_t BgL_head3429z00_2007;

											BgL_head3429z00_2007 = MAKE_PAIR(BNIL, BNIL);
											{
												obj_t BgL_ll3427z00_2009;

												obj_t BgL_ll3428z00_2010;

												obj_t BgL_tail3430z00_2011;

												BgL_ll3427z00_2009 = BgL_ll3427z00_2004;
												BgL_ll3428z00_2010 = BgL_newzd2localszd2_1992;
												BgL_tail3430z00_2011 = BgL_head3429z00_2007;
											BgL_zc3anonymousza34026ze3z83_2012:
												if (NULLP(BgL_ll3427z00_2009))
													{	/* Ast/alphatize.scm 414 */
														BgL_newzd2bindingszd2_1993 =
															CDR(BgL_head3429z00_2007);
													}
												else
													{	/* Ast/alphatize.scm 414 */
														obj_t BgL_newtail3431z00_2014;

														{	/* Ast/alphatize.scm 414 */
															obj_t BgL_arg4030z00_2017;

															{	/* Ast/alphatize.scm 414 */
																obj_t BgL_bindingz00_2019;

																obj_t BgL_newzd2localzd2_2020;

																BgL_bindingz00_2019 = CAR(BgL_ll3427z00_2009);
																BgL_newzd2localzd2_2020 =
																	CAR(BgL_ll3428z00_2010);
																{	/* Ast/alphatize.scm 415 */
																	BgL_nodez00_bglt BgL_arg4032z00_2021;

																	{	/* Ast/alphatize.scm 415 */
																		obj_t BgL_arg4033z00_2022;

																		BgL_arg4033z00_2022 =
																			CDR(BgL_bindingz00_2019);
																		{	/* Ast/alphatize.scm 415 */
																			BgL_nodez00_bglt BgL_res4218z00_3782;

																			{	/* Ast/alphatize.scm 415 */
																				BgL_nodez00_bglt BgL_nodez00_3756;

																				BgL_nodez00_3756 =
																					(BgL_nodez00_bglt)
																					(BgL_arg4033z00_2022);
																				{	/* Ast/alphatize.scm 415 */
																					obj_t BgL_method3435z00_3757;

																					{	/* Ast/alphatize.scm 415 */
																						BgL_objectz00_bglt BgL_objz00_3758;

																						BgL_objz00_3758 =
																							(BgL_objectz00_bglt)
																							(BgL_nodez00_3756);
																						{	/* Ast/alphatize.scm 415 */
																							long
																								BgL_objzd2classzd2numz00_3759;
																							BgL_objzd2classzd2numz00_3759 =
																								BGL_OBJECT_CLASS_NUM
																								(BgL_objz00_3758);
																							{	/* Ast/alphatize.scm 415 */
																								obj_t BgL_arg2643z00_3760;

																								BgL_arg2643z00_3760 =
																									PROCEDURE_REF
																									(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																									(int) (((long) 1)));
																								{	/* Ast/alphatize.scm 415 */
																									obj_t BgL_arrayz00_3762;

																									int BgL_offsetz00_3763;

																									BgL_arrayz00_3762 =
																										BgL_arg2643z00_3760;
																									BgL_offsetz00_3763 =
																										(int)
																										(BgL_objzd2classzd2numz00_3759);
																									{	/* Ast/alphatize.scm 415 */
																										long BgL_offsetz00_3764;

																										BgL_offsetz00_3764 =
																											(
																											(long)
																											(BgL_offsetz00_3763) -
																											OBJECT_TYPE);
																										{	/* Ast/alphatize.scm 415 */
																											long BgL_modz00_3765;

																											{	/* Ast/alphatize.scm 415 */
																												int BgL_arg2645z00_3766;

																												BgL_arg2645z00_3766 =
																													(int) (((long) 16));
																												{	/* Ast/alphatize.scm 415 */
																													long BgL_auxz00_4296;

																													BgL_auxz00_4296 =
																														(long)
																														(BgL_arg2645z00_3766);
																													BgL_modz00_3765 =
																														(BgL_offsetz00_3764
																														/ BgL_auxz00_4296);
																											}}
																											{	/* Ast/alphatize.scm 415 */
																												long BgL_restz00_3767;

																												{	/* Ast/alphatize.scm 415 */
																													int
																														BgL_arg2644z00_3768;
																													BgL_arg2644z00_3768 =
																														(int) (((long) 16));
																													{	/* Ast/alphatize.scm 415 */
																														long
																															BgL_auxz00_4300;
																														BgL_auxz00_4300 =
																															(long)
																															(BgL_arg2644z00_3768);
																														BgL_restz00_3767 =
																															(BgL_offsetz00_3764
																															%
																															BgL_auxz00_4300);
																												}}
																												{	/* Ast/alphatize.scm 415 */

																													BgL_method3435z00_3757
																														=
																														VECTOR_REF
																														(VECTOR_REF
																														(BgL_arrayz00_3762,
																															(int)
																															(BgL_modz00_3765)),
																														(int)
																														(BgL_restz00_3767));
																					}}}}}}}}
																					BgL_res4218z00_3782 =
																						(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																						(BgL_method3435z00_3757)
																						(BgL_method3435z00_3757,
																							(obj_t) (BgL_nodez00_3756),
																							BEOA));
																			}}
																			BgL_arg4032z00_2021 = BgL_res4218z00_3782;
																	}}
																	BgL_arg4030z00_2017 =
																		MAKE_PAIR(BgL_newzd2localzd2_2020,
																		(obj_t) (BgL_arg4032z00_2021));
															}}
															BgL_newtail3431z00_2014 =
																MAKE_PAIR(BgL_arg4030z00_2017, BNIL);
														}
														SET_CDR(BgL_tail3430z00_2011,
															BgL_newtail3431z00_2014);
														{
															obj_t BgL_tail3430z00_4319;

															obj_t BgL_ll3428z00_4317;

															obj_t BgL_ll3427z00_4315;

															BgL_ll3427z00_4315 = CDR(BgL_ll3427z00_2009);
															BgL_ll3428z00_4317 = CDR(BgL_ll3428z00_2010);
															BgL_tail3430z00_4319 = BgL_newtail3431z00_2014;
															BgL_tail3430z00_2011 = BgL_tail3430z00_4319;
															BgL_ll3428z00_2010 = BgL_ll3428z00_4317;
															BgL_ll3427z00_2009 = BgL_ll3427z00_4315;
															goto BgL_zc3anonymousza34026ze3z83_2012;
														}
													}
											}
										}
								}
								{	/* Ast/alphatize.scm 414 */

									{	/* Ast/alphatize.scm 419 */
										BgL_letzd2varzd2_bglt BgL_new3318z00_1995;

										{	/* Ast/alphatize.scm 419 */
											obj_t BgL_arg4017z00_1996;

											BgL_typez00_bglt BgL_arg4018z00_1997;

											obj_t BgL_arg4019z00_1998;

											obj_t BgL_arg4020z00_1999;

											BgL_nodez00_bglt BgL_arg4021z00_2000;

											bool_t BgL_arg4022z00_2001;

											BgL_arg4017z00_1996 =
												BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
												(obj_t) (BgL_nodez00_1988));
											{
												BgL_nodez00_bglt BgL_auxz00_4322;

												BgL_auxz00_4322 = (BgL_nodez00_bglt) (BgL_nodez00_1988);
												BgL_arg4018z00_1997 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_4322))->
													BgL_typez00);
											}
											{
												BgL_nodezf2effectzf2_bglt BgL_auxz00_4325;

												BgL_auxz00_4325 =
													(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1988);
												BgL_arg4019z00_1998 =
													(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_4325))->
													BgL_sidezd2effectzf3z21);
											}
											{
												BgL_nodezf2effectzf2_bglt BgL_auxz00_4328;

												BgL_auxz00_4328 =
													(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1988);
												BgL_arg4020z00_1999 =
													(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_4328))->
													BgL_keyz00);
											}
											{	/* Ast/alphatize.scm 423 */
												obj_t BgL_arg4023z00_2002;

												BgL_nodez00_bglt BgL_arg4024z00_2003;

												BgL_arg4023z00_2002 =
													BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
													(obj_t) (BgL_nodez00_1988));
												BgL_arg4024z00_2003 =
													(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1988))->
													BgL_bodyz00);
												BgL_arg4021z00_2000 =
													BGl_alphatiza7eza7zzast_alphatiza7eza7
													(BgL_oldzd2localszd2_1991, BgL_newzd2localszd2_1992,
													BgL_arg4023z00_2002, BgL_arg4024z00_2003);
											}
											BgL_arg4022z00_2001 =
												(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1988))->
												BgL_removablezf3zf3);
											BgL_new3318z00_1995 =
												BGl_makezd2letzd2varz00zzast_nodez00
												(BgL_arg4017z00_1996, BgL_arg4018z00_1997,
												BgL_arg4019z00_1998, BgL_arg4020z00_1999,
												BgL_newzd2bindingszd2_1993, BgL_arg4021z00_2000,
												BgL_arg4022z00_2001);
										}
										{	/* Ast/alphatize.scm 418 */

											BgL_auxz00_4230 = BgL_new3318z00_1995;
										}
									}
								}
							}
						}
					}
					return (obj_t) (BgL_auxz00_4230);
				}
			}
		}
	}



/* do-alphatize-let-fun3489 */
	obj_t BGl_dozd2alphatiza7ezd2letzd2fun3489z75zzast_alphatiza7eza7(obj_t
		BgL_envz00_3914, obj_t BgL_nodez00_3915)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 364 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1902;

				{	/* Ast/alphatize.scm 365 */
					BgL_letzd2funzd2_bglt BgL_auxz00_4339;

					BgL_nodez00_1902 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_3915);
					{	/* Ast/alphatize.scm 365 */
						obj_t BgL_oldzd2localszd2_1905;

						BgL_oldzd2localszd2_1905 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1902))->BgL_localsz00);
						{	/* Ast/alphatize.scm 365 */
							obj_t BgL_newzd2localszd2_1906;

							if (NULLP(BgL_oldzd2localszd2_1905))
								{	/* Ast/alphatize.scm 366 */
									BgL_newzd2localszd2_1906 = BNIL;
								}
							else
								{	/* Ast/alphatize.scm 366 */
									obj_t BgL_head3405z00_1971;

									BgL_head3405z00_1971 = MAKE_PAIR(BNIL, BNIL);
									{
										obj_t BgL_l3403z00_1973;

										obj_t BgL_tail3406z00_1974;

										BgL_l3403z00_1973 = BgL_oldzd2localszd2_1905;
										BgL_tail3406z00_1974 = BgL_head3405z00_1971;
									BgL_zc3anonymousza34008ze3z83_1975:
										if (NULLP(BgL_l3403z00_1973))
											{	/* Ast/alphatize.scm 366 */
												BgL_newzd2localszd2_1906 = CDR(BgL_head3405z00_1971);
											}
										else
											{	/* Ast/alphatize.scm 366 */
												obj_t BgL_newtail3407z00_1977;

												{	/* Ast/alphatize.scm 366 */
													BgL_localz00_bglt BgL_arg4011z00_1979;

													{	/* Ast/alphatize.scm 366 */
														obj_t BgL_lz00_1981;

														BgL_lz00_1981 = CAR(BgL_l3403z00_1973);
														{	/* Ast/alphatize.scm 367 */
															obj_t BgL_arg4013z00_1982;

															BgL_typez00_bglt BgL_arg4014z00_1983;

															BgL_valuez00_bglt BgL_arg4015z00_1984;

															{
																BgL_variablez00_bglt BgL_auxz00_4348;

																BgL_auxz00_4348 =
																	(BgL_variablez00_bglt) (BgL_lz00_1981);
																BgL_arg4013z00_1982 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_4348))->BgL_idz00);
															}
															{
																BgL_variablez00_bglt BgL_auxz00_4351;

																BgL_auxz00_4351 =
																	(BgL_variablez00_bglt) (BgL_lz00_1981);
																BgL_arg4014z00_1983 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_4351))->BgL_typez00);
															}
															{
																BgL_variablez00_bglt BgL_auxz00_4354;

																BgL_auxz00_4354 =
																	(BgL_variablez00_bglt) (BgL_lz00_1981);
																BgL_arg4015z00_1984 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_4354))->BgL_valuez00);
															}
															BgL_arg4011z00_1979 =
																BGl_makezd2localzd2sfunz00zzast_localz00
																(BgL_arg4013z00_1982, BgL_arg4014z00_1983,
																(BgL_sfunz00_bglt) (BgL_arg4015z00_1984));
														}
													}
													BgL_newtail3407z00_1977 =
														MAKE_PAIR((obj_t) (BgL_arg4011z00_1979), BNIL);
												}
												SET_CDR(BgL_tail3406z00_1974, BgL_newtail3407z00_1977);
												{
													obj_t BgL_tail3406z00_4364;

													obj_t BgL_l3403z00_4362;

													BgL_l3403z00_4362 = CDR(BgL_l3403z00_1973);
													BgL_tail3406z00_4364 = BgL_newtail3407z00_1977;
													BgL_tail3406z00_1974 = BgL_tail3406z00_4364;
													BgL_l3403z00_1973 = BgL_l3403z00_4362;
													goto BgL_zc3anonymousza34008ze3z83_1975;
												}
											}
									}
								}
							{	/* Ast/alphatize.scm 366 */

								{
									obj_t BgL_ll3413z00_1908;

									obj_t BgL_ll3414z00_1909;

									BgL_ll3413z00_1908 = BgL_oldzd2localszd2_1905;
									BgL_ll3414z00_1909 = BgL_newzd2localszd2_1906;
								BgL_zc3anonymousza33968ze3z83_1910:
									if (NULLP(BgL_ll3413z00_1908))
										{	/* Ast/alphatize.scm 371 */
											((bool_t) 1);
										}
									else
										{	/* Ast/alphatize.scm 371 */
											{	/* Ast/alphatize.scm 372 */
												obj_t BgL_oldz00_1912;

												obj_t BgL_newz00_1913;

												BgL_oldz00_1912 = CAR(BgL_ll3413z00_1908);
												BgL_newz00_1913 = CAR(BgL_ll3414z00_1909);
												{	/* Ast/alphatize.scm 372 */
													BgL_valuez00_bglt BgL_oldzd2sfunzd2_1914;

													{
														BgL_variablez00_bglt BgL_auxz00_4369;

														BgL_auxz00_4369 =
															(BgL_variablez00_bglt) (BgL_oldz00_1912);
														BgL_oldzd2sfunzd2_1914 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_4369))->
															BgL_valuez00);
													}
													{	/* Ast/alphatize.scm 372 */
														obj_t BgL_oldzd2argszd2_1915;

														{
															BgL_sfunz00_bglt BgL_auxz00_4372;

															BgL_auxz00_4372 =
																(BgL_sfunz00_bglt) (BgL_oldzd2sfunzd2_1914);
															BgL_oldzd2argszd2_1915 =
																(((BgL_sfunz00_bglt) CREF(BgL_auxz00_4372))->
																BgL_argsz00);
														}
														{	/* Ast/alphatize.scm 373 */
															obj_t BgL_newzd2argszd2_1916;

															if (NULLP(BgL_oldzd2argszd2_1915))
																{	/* Ast/alphatize.scm 374 */
																	BgL_newzd2argszd2_1916 = BNIL;
																}
															else
																{	/* Ast/alphatize.scm 374 */
																	obj_t BgL_head3410z00_1943;

																	BgL_head3410z00_1943 = MAKE_PAIR(BNIL, BNIL);
																	{
																		obj_t BgL_l3408z00_1945;

																		obj_t BgL_tail3411z00_1946;

																		BgL_l3408z00_1945 = BgL_oldzd2argszd2_1915;
																		BgL_tail3411z00_1946 = BgL_head3410z00_1943;
																	BgL_zc3anonymousza33991ze3z83_1947:
																		if (NULLP(BgL_l3408z00_1945))
																			{	/* Ast/alphatize.scm 374 */
																				BgL_newzd2argszd2_1916 =
																					CDR(BgL_head3410z00_1943);
																			}
																		else
																			{	/* Ast/alphatize.scm 374 */
																				obj_t BgL_newtail3412z00_1949;

																				{	/* Ast/alphatize.scm 374 */
																					BgL_localz00_bglt BgL_arg3994z00_1951;

																					{	/* Ast/alphatize.scm 374 */
																						obj_t BgL_lz00_1953;

																						BgL_lz00_1953 =
																							CAR(BgL_l3408z00_1945);
																						{	/* Ast/alphatize.scm 375 */
																							obj_t BgL_arg3996z00_1954;

																							BgL_typez00_bglt
																								BgL_arg3997z00_1955;
																							{
																								BgL_variablez00_bglt
																									BgL_auxz00_4382;
																								BgL_auxz00_4382 =
																									(BgL_variablez00_bglt)
																									(BgL_lz00_1953);
																								BgL_arg3996z00_1954 =
																									(((BgL_variablez00_bglt)
																										CREF(BgL_auxz00_4382))->
																									BgL_idz00);
																							}
																							{
																								BgL_variablez00_bglt
																									BgL_auxz00_4385;
																								BgL_auxz00_4385 =
																									(BgL_variablez00_bglt)
																									(BgL_lz00_1953);
																								BgL_arg3997z00_1955 =
																									(((BgL_variablez00_bglt)
																										CREF(BgL_auxz00_4385))->
																									BgL_typez00);
																							}
																							BgL_arg3994z00_1951 =
																								BGl_makezd2localzd2svarz00zzast_localz00
																								(BgL_arg3996z00_1954,
																								BgL_arg3997z00_1955);
																						}
																					}
																					BgL_newtail3412z00_1949 =
																						MAKE_PAIR(
																						(obj_t) (BgL_arg3994z00_1951),
																						BNIL);
																				}
																				SET_CDR(BgL_tail3411z00_1946,
																					BgL_newtail3412z00_1949);
																				{
																					obj_t BgL_tail3411z00_4394;

																					obj_t BgL_l3408z00_4392;

																					BgL_l3408z00_4392 =
																						CDR(BgL_l3408z00_1945);
																					BgL_tail3411z00_4394 =
																						BgL_newtail3412z00_1949;
																					BgL_tail3411z00_1946 =
																						BgL_tail3411z00_4394;
																					BgL_l3408z00_1945 = BgL_l3408z00_4392;
																					goto
																						BgL_zc3anonymousza33991ze3z83_1947;
																				}
																			}
																	}
																}
															{	/* Ast/alphatize.scm 374 */
																obj_t BgL_oldzd2bodyzd2_1917;

																{
																	BgL_sfunz00_bglt BgL_auxz00_4395;

																	BgL_auxz00_4395 =
																		(BgL_sfunz00_bglt) (BgL_oldzd2sfunzd2_1914);
																	BgL_oldzd2bodyzd2_1917 =
																		(((BgL_sfunz00_bglt)
																			CREF(BgL_auxz00_4395))->BgL_bodyz00);
																}
																{	/* Ast/alphatize.scm 378 */
																	BgL_nodez00_bglt BgL_newzd2bodyzd2_1918;

																	BgL_newzd2bodyzd2_1918 =
																		BGl_alphatiza7eza7zzast_alphatiza7eza7
																		(bgl_append2(BgL_oldzd2localszd2_1905,
																			BgL_oldzd2argszd2_1915),
																		bgl_append2(BgL_newzd2localszd2_1906,
																			BgL_newzd2argszd2_1916),
																		BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7
																		((obj_t) (BgL_nodez00_1902)),
																		(BgL_nodez00_bglt)
																		(BgL_oldzd2bodyzd2_1917));
																	{	/* Ast/alphatize.scm 379 */
																		BgL_sfunz00_bglt BgL_newzd2sfunzd2_1919;

																		{	/* Ast/alphatize.scm 383 */
																			BgL_sfunz00_bglt
																				BgL_duplicated3313z00_1921;
																			BgL_duplicated3313z00_1921 =
																				(BgL_sfunz00_bglt)
																				(BgL_oldzd2sfunzd2_1914);
																			{	/* Ast/alphatize.scm 383 */
																				BgL_sfunz00_bglt BgL_new3314z00_1922;

																				{	/* Ast/alphatize.scm 383 */
																					long BgL_arg3972z00_1923;

																					obj_t BgL_arg3973z00_1924;

																					obj_t BgL_arg3974z00_1925;

																					obj_t BgL_arg3975z00_1926;

																					bool_t BgL_arg3976z00_1927;

																					obj_t BgL_arg3977z00_1928;

																					obj_t BgL_arg3978z00_1929;

																					obj_t BgL_arg3979z00_1930;

																					obj_t BgL_arg3980z00_1931;

																					obj_t BgL_arg3981z00_1932;

																					obj_t BgL_arg3982z00_1933;

																					obj_t BgL_arg3983z00_1934;

																					obj_t BgL_arg3984z00_1935;

																					obj_t BgL_arg3985z00_1936;

																					obj_t BgL_arg3986z00_1937;

																					{
																						BgL_funz00_bglt BgL_auxz00_4405;

																						BgL_auxz00_4405 =
																							(BgL_funz00_bglt)
																							(BgL_duplicated3313z00_1921);
																						BgL_arg3972z00_1923 =
																							(((BgL_funz00_bglt)
																								CREF(BgL_auxz00_4405))->
																							BgL_arityz00);
																					}
																					{
																						BgL_funz00_bglt BgL_auxz00_4408;

																						BgL_auxz00_4408 =
																							(BgL_funz00_bglt)
																							(BgL_duplicated3313z00_1921);
																						BgL_arg3973z00_1924 =
																							(((BgL_funz00_bglt)
																								CREF(BgL_auxz00_4408))->
																							BgL_sidezd2effectzf3z21);
																					}
																					{
																						BgL_funz00_bglt BgL_auxz00_4411;

																						BgL_auxz00_4411 =
																							(BgL_funz00_bglt)
																							(BgL_duplicated3313z00_1921);
																						BgL_arg3974z00_1925 =
																							(((BgL_funz00_bglt)
																								CREF(BgL_auxz00_4411))->
																							BgL_predicatezd2ofzd2);
																					}
																					{
																						BgL_funz00_bglt BgL_auxz00_4414;

																						BgL_auxz00_4414 =
																							(BgL_funz00_bglt)
																							(BgL_duplicated3313z00_1921);
																						BgL_arg3975z00_1926 =
																							(((BgL_funz00_bglt)
																								CREF(BgL_auxz00_4414))->
																							BgL_stackzd2allocatorzd2);
																					}
																					{
																						BgL_funz00_bglt BgL_auxz00_4417;

																						BgL_auxz00_4417 =
																							(BgL_funz00_bglt)
																							(BgL_duplicated3313z00_1921);
																						BgL_arg3976z00_1927 =
																							(((BgL_funz00_bglt)
																								CREF(BgL_auxz00_4417))->
																							BgL_topzf3zf3);
																					}
																					{
																						BgL_funz00_bglt BgL_auxz00_4420;

																						BgL_auxz00_4420 =
																							(BgL_funz00_bglt)
																							(BgL_duplicated3313z00_1921);
																						BgL_arg3977z00_1928 =
																							(((BgL_funz00_bglt)
																								CREF(BgL_auxz00_4420))->
																							BgL_thezd2closurezd2);
																					}
																					{
																						BgL_funz00_bglt BgL_auxz00_4423;

																						BgL_auxz00_4423 =
																							(BgL_funz00_bglt)
																							(BgL_duplicated3313z00_1921);
																						BgL_arg3978z00_1929 =
																							(((BgL_funz00_bglt)
																								CREF(BgL_auxz00_4423))->
																							BgL_effectz00);
																					}
																					BgL_arg3979z00_1930 =
																						(((BgL_sfunz00_bglt)
																							CREF
																							(BgL_duplicated3313z00_1921))->
																						BgL_propertyz00);
																					BgL_arg3980z00_1931 =
																						(((BgL_sfunz00_bglt)
																							CREF
																							(BgL_duplicated3313z00_1921))->
																						BgL_argszd2namezd2);
																					BgL_arg3981z00_1932 =
																						(((BgL_sfunz00_bglt)
																							CREF
																							(BgL_duplicated3313z00_1921))->
																						BgL_classz00);
																					BgL_arg3982z00_1933 =
																						(((BgL_sfunz00_bglt)
																							CREF
																							(BgL_duplicated3313z00_1921))->
																						BgL_dssslzd2keywordszd2);
																					BgL_arg3983z00_1934 =
																						(((BgL_sfunz00_bglt)
																							CREF
																							(BgL_duplicated3313z00_1921))->
																						BgL_locz00);
																					BgL_arg3984z00_1935 =
																						(((BgL_sfunz00_bglt)
																							CREF
																							(BgL_duplicated3313z00_1921))->
																						BgL_optionalsz00);
																					BgL_arg3985z00_1936 =
																						(((BgL_sfunz00_bglt)
																							CREF
																							(BgL_duplicated3313z00_1921))->
																						BgL_keysz00);
																					BgL_arg3986z00_1937 =
																						(((BgL_sfunz00_bglt)
																							CREF
																							(BgL_duplicated3313z00_1921))->
																						BgL_thezd2closurezd2globalz00);
																					BgL_new3314z00_1922 =
																						BGl_makezd2sfunzd2zzast_varz00
																						(BgL_arg3972z00_1923,
																						BgL_arg3973z00_1924,
																						BgL_arg3974z00_1925,
																						BgL_arg3975z00_1926,
																						BgL_arg3976z00_1927,
																						BgL_arg3977z00_1928,
																						BgL_arg3978z00_1929,
																						BgL_arg3979z00_1930,
																						BgL_newzd2argszd2_1916,
																						BgL_arg3980z00_1931,
																						(obj_t) (BgL_newzd2bodyzd2_1918),
																						BgL_arg3981z00_1932,
																						BgL_arg3982z00_1933,
																						BgL_arg3983z00_1934,
																						BgL_arg3984z00_1935,
																						BgL_arg3985z00_1936,
																						BgL_arg3986z00_1937);
																				}
																				{	/* Ast/alphatize.scm 383 */

																					BgL_newzd2sfunzd2_1919 =
																						BgL_new3314z00_1922;
																		}}}
																		{	/* Ast/alphatize.scm 383 */

																			{	/* Ast/alphatize.scm 386 */
																				bool_t BgL_arg3970z00_1920;

																				{
																					BgL_localz00_bglt BgL_auxz00_4436;

																					BgL_auxz00_4436 =
																						(BgL_localz00_bglt)
																						(BgL_oldz00_1912);
																					BgL_arg3970z00_1920 =
																						(((BgL_localz00_bglt)
																							CREF(BgL_auxz00_4436))->
																						BgL_userzf3zf3);
																				}
																				{
																					BgL_localz00_bglt BgL_auxz00_4439;

																					BgL_auxz00_4439 =
																						(BgL_localz00_bglt)
																						(BgL_newz00_1913);
																					((((BgL_localz00_bglt)
																								CREF(BgL_auxz00_4439))->
																							BgL_userzf3zf3) =
																						((bool_t) BgL_arg3970z00_1920),
																						BUNSPEC);
																			}}
																			{
																				BgL_valuez00_bglt BgL_auxz00_4444;

																				BgL_variablez00_bglt BgL_auxz00_4442;

																				BgL_auxz00_4444 =
																					(BgL_valuez00_bglt)
																					(BgL_newzd2sfunzd2_1919);
																				BgL_auxz00_4442 =
																					(BgL_variablez00_bglt)
																					(BgL_newz00_1913);
																				((((BgL_variablez00_bglt)
																							CREF(BgL_auxz00_4442))->
																						BgL_valuez00) =
																					((BgL_valuez00_bglt) BgL_auxz00_4444),
																					BUNSPEC);
											}}}}}}}}}
											{
												obj_t BgL_ll3414z00_4449;

												obj_t BgL_ll3413z00_4447;

												BgL_ll3413z00_4447 = CDR(BgL_ll3413z00_1908);
												BgL_ll3414z00_4449 = CDR(BgL_ll3414z00_1909);
												BgL_ll3414z00_1909 = BgL_ll3414z00_4449;
												BgL_ll3413z00_1908 = BgL_ll3413z00_4447;
												goto BgL_zc3anonymousza33968ze3z83_1910;
											}
										}
								}
								{	/* Ast/alphatize.scm 391 */
									BgL_letzd2funzd2_bglt BgL_new3316z00_1961;

									{	/* Ast/alphatize.scm 391 */
										obj_t BgL_arg4000z00_1962;

										BgL_typez00_bglt BgL_arg4001z00_1963;

										obj_t BgL_arg4002z00_1964;

										obj_t BgL_arg4003z00_1965;

										BgL_nodez00_bglt BgL_arg4004z00_1966;

										BgL_arg4000z00_1962 =
											BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
											(obj_t) (BgL_nodez00_1902));
										{
											BgL_nodez00_bglt BgL_auxz00_4453;

											BgL_auxz00_4453 = (BgL_nodez00_bglt) (BgL_nodez00_1902);
											BgL_arg4001z00_1963 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_4453))->
												BgL_typez00);
										}
										{
											BgL_nodezf2effectzf2_bglt BgL_auxz00_4456;

											BgL_auxz00_4456 =
												(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1902);
											BgL_arg4002z00_1964 =
												(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_4456))->
												BgL_sidezd2effectzf3z21);
										}
										{
											BgL_nodezf2effectzf2_bglt BgL_auxz00_4459;

											BgL_auxz00_4459 =
												(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1902);
											BgL_arg4003z00_1965 =
												(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_4459))->
												BgL_keyz00);
										}
										{	/* Ast/alphatize.scm 395 */
											obj_t BgL_arg4005z00_1967;

											BgL_nodez00_bglt BgL_arg4006z00_1968;

											BgL_arg4005z00_1967 =
												BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
												(obj_t) (BgL_nodez00_1902));
											BgL_arg4006z00_1968 =
												(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1902))->
												BgL_bodyz00);
											BgL_arg4004z00_1966 =
												BGl_alphatiza7eza7zzast_alphatiza7eza7
												(BgL_oldzd2localszd2_1905, BgL_newzd2localszd2_1906,
												BgL_arg4005z00_1967, BgL_arg4006z00_1968);
										}
										BgL_new3316z00_1961 =
											BGl_makezd2letzd2funz00zzast_nodez00(BgL_arg4000z00_1962,
											BgL_arg4001z00_1963, BgL_arg4002z00_1964,
											BgL_arg4003z00_1965, BgL_newzd2localszd2_1906,
											BgL_arg4004z00_1966);
									}
									{	/* Ast/alphatize.scm 390 */

										BgL_auxz00_4339 = BgL_new3316z00_1961;
									}
								}
							}
						}
					}
					return (obj_t) (BgL_auxz00_4339);
				}
			}
		}
	}



/* do-alphatize-box-set3487 */
	obj_t BGl_dozd2alphatiza7ezd2boxzd2set3487z75zzast_alphatiza7eza7(obj_t
		BgL_envz00_3916, obj_t BgL_nodez00_3917)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 355 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1889;

				{	/* Ast/alphatize.scm 356 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_4469;

					BgL_nodez00_1889 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_3917);
					{	/* Ast/alphatize.scm 357 */
						BgL_boxzd2setz12zc0_bglt BgL_new3312z00_1893;

						{	/* Ast/alphatize.scm 357 */
							obj_t BgL_arg3961z00_1894;

							BgL_typez00_bglt BgL_arg3962z00_1895;

							BgL_nodez00_bglt BgL_arg3963z00_1896;

							BgL_nodez00_bglt BgL_arg3964z00_1897;

							BgL_arg3961z00_1894 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_1889));
							{
								BgL_nodez00_bglt BgL_auxz00_4472;

								BgL_auxz00_4472 = (BgL_nodez00_bglt) (BgL_nodez00_1889);
								BgL_arg3962z00_1895 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4472))->BgL_typez00);
							}
							{	/* Ast/alphatize.scm 358 */
								BgL_varz00_bglt BgL_arg3965z00_1898;

								BgL_arg3965z00_1898 =
									(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1889))->
									BgL_varz00);
								{	/* Ast/alphatize.scm 358 */
									BgL_nodez00_bglt BgL_res4212z00_3624;

									{	/* Ast/alphatize.scm 358 */
										BgL_nodez00_bglt BgL_nodez00_3598;

										BgL_nodez00_3598 = (BgL_nodez00_bglt) (BgL_arg3965z00_1898);
										{	/* Ast/alphatize.scm 358 */
											obj_t BgL_method3435z00_3599;

											{	/* Ast/alphatize.scm 358 */
												BgL_objectz00_bglt BgL_objz00_3600;

												BgL_objz00_3600 =
													(BgL_objectz00_bglt) (BgL_nodez00_3598);
												{	/* Ast/alphatize.scm 358 */
													long BgL_objzd2classzd2numz00_3601;

													BgL_objzd2classzd2numz00_3601 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_3600);
													{	/* Ast/alphatize.scm 358 */
														obj_t BgL_arg2643z00_3602;

														BgL_arg2643z00_3602 =
															PROCEDURE_REF
															(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
															(int) (((long) 1)));
														{	/* Ast/alphatize.scm 358 */
															obj_t BgL_arrayz00_3604;

															int BgL_offsetz00_3605;

															BgL_arrayz00_3604 = BgL_arg2643z00_3602;
															BgL_offsetz00_3605 =
																(int) (BgL_objzd2classzd2numz00_3601);
															{	/* Ast/alphatize.scm 358 */
																long BgL_offsetz00_3606;

																BgL_offsetz00_3606 =
																	((long) (BgL_offsetz00_3605) - OBJECT_TYPE);
																{	/* Ast/alphatize.scm 358 */
																	long BgL_modz00_3607;

																	{	/* Ast/alphatize.scm 358 */
																		int BgL_arg2645z00_3608;

																		BgL_arg2645z00_3608 = (int) (((long) 16));
																		{	/* Ast/alphatize.scm 358 */
																			long BgL_auxz00_4485;

																			BgL_auxz00_4485 =
																				(long) (BgL_arg2645z00_3608);
																			BgL_modz00_3607 =
																				(BgL_offsetz00_3606 / BgL_auxz00_4485);
																	}}
																	{	/* Ast/alphatize.scm 358 */
																		long BgL_restz00_3609;

																		{	/* Ast/alphatize.scm 358 */
																			int BgL_arg2644z00_3610;

																			BgL_arg2644z00_3610 = (int) (((long) 16));
																			{	/* Ast/alphatize.scm 358 */
																				long BgL_auxz00_4489;

																				BgL_auxz00_4489 =
																					(long) (BgL_arg2644z00_3610);
																				BgL_restz00_3609 =
																					(BgL_offsetz00_3606 %
																					BgL_auxz00_4489);
																		}}
																		{	/* Ast/alphatize.scm 358 */

																			BgL_method3435z00_3599 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_3604,
																					(int) (BgL_modz00_3607)),
																				(int) (BgL_restz00_3609));
											}}}}}}}}
											BgL_res4212z00_3624 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3435z00_3599) (BgL_method3435z00_3599,
													(obj_t) (BgL_nodez00_3598), BEOA));
									}}
									BgL_arg3963z00_1896 = BgL_res4212z00_3624;
							}}
							{	/* Ast/alphatize.scm 359 */
								BgL_nodez00_bglt BgL_arg3966z00_1899;

								BgL_arg3966z00_1899 =
									(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1889))->
									BgL_valuez00);
								{	/* Ast/alphatize.scm 359 */
									BgL_nodez00_bglt BgL_res4215z00_3652;

									{	/* Ast/alphatize.scm 359 */
										obj_t BgL_method3435z00_3627;

										{	/* Ast/alphatize.scm 359 */
											BgL_objectz00_bglt BgL_objz00_3628;

											BgL_objz00_3628 =
												(BgL_objectz00_bglt) (BgL_arg3966z00_1899);
											{	/* Ast/alphatize.scm 359 */
												long BgL_objzd2classzd2numz00_3629;

												BgL_objzd2classzd2numz00_3629 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3628);
												{	/* Ast/alphatize.scm 359 */
													obj_t BgL_arg2643z00_3630;

													BgL_arg2643z00_3630 =
														PROCEDURE_REF
														(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
														(int) (((long) 1)));
													{	/* Ast/alphatize.scm 359 */
														obj_t BgL_arrayz00_3632;

														int BgL_offsetz00_3633;

														BgL_arrayz00_3632 = BgL_arg2643z00_3630;
														BgL_offsetz00_3633 =
															(int) (BgL_objzd2classzd2numz00_3629);
														{	/* Ast/alphatize.scm 359 */
															long BgL_offsetz00_3634;

															BgL_offsetz00_3634 =
																((long) (BgL_offsetz00_3633) - OBJECT_TYPE);
															{	/* Ast/alphatize.scm 359 */
																long BgL_modz00_3635;

																{	/* Ast/alphatize.scm 359 */
																	int BgL_arg2645z00_3636;

																	BgL_arg2645z00_3636 = (int) (((long) 16));
																	{	/* Ast/alphatize.scm 359 */
																		long BgL_auxz00_4509;

																		BgL_auxz00_4509 =
																			(long) (BgL_arg2645z00_3636);
																		BgL_modz00_3635 =
																			(BgL_offsetz00_3634 / BgL_auxz00_4509);
																}}
																{	/* Ast/alphatize.scm 359 */
																	long BgL_restz00_3637;

																	{	/* Ast/alphatize.scm 359 */
																		int BgL_arg2644z00_3638;

																		BgL_arg2644z00_3638 = (int) (((long) 16));
																		{	/* Ast/alphatize.scm 359 */
																			long BgL_auxz00_4513;

																			BgL_auxz00_4513 =
																				(long) (BgL_arg2644z00_3638);
																			BgL_restz00_3637 =
																				(BgL_offsetz00_3634 % BgL_auxz00_4513);
																	}}
																	{	/* Ast/alphatize.scm 359 */

																		BgL_method3435z00_3627 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3632,
																				(int) (BgL_modz00_3635)),
																			(int) (BgL_restz00_3637));
										}}}}}}}}
										BgL_res4215z00_3652 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3435z00_3627) (BgL_method3435z00_3627,
												(obj_t) (BgL_arg3966z00_1899), BEOA));
									}
									BgL_arg3964z00_1897 = BgL_res4215z00_3652;
							}}
							BgL_new3312z00_1893 =
								BGl_makezd2boxzd2setz12z12zzast_nodez00(BgL_arg3961z00_1894,
								BgL_arg3962z00_1895, (BgL_varz00_bglt) (BgL_arg3963z00_1896),
								BgL_arg3964z00_1897);
						}
						{	/* Ast/alphatize.scm 356 */

							BgL_auxz00_4469 = BgL_new3312z00_1893;
					}}
					return (obj_t) (BgL_auxz00_4469);
				}
			}
		}
	}



/* do-alphatize-box-ref3485 */
	obj_t BGl_dozd2alphatiza7ezd2boxzd2ref3485z75zzast_alphatiza7eza7(obj_t
		BgL_envz00_3918, obj_t BgL_nodez00_3919)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 347 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1876;

				{	/* Ast/alphatize.scm 348 */
					BgL_boxzd2refzd2_bglt BgL_auxz00_4528;

					BgL_nodez00_1876 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_3919);
					{	/* Ast/alphatize.scm 349 */
						BgL_boxzd2refzd2_bglt BgL_new3310z00_1880;

						{	/* Ast/alphatize.scm 349 */
							obj_t BgL_arg3953z00_1881;

							BgL_typez00_bglt BgL_arg3954z00_1882;

							obj_t BgL_arg3955z00_1883;

							obj_t BgL_arg3956z00_1884;

							BgL_nodez00_bglt BgL_arg3958z00_1885;

							BgL_arg3953z00_1881 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_1876));
							{
								BgL_nodez00_bglt BgL_auxz00_4531;

								BgL_auxz00_4531 = (BgL_nodez00_bglt) (BgL_nodez00_1876);
								BgL_arg3954z00_1882 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4531))->BgL_typez00);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_4534;

								BgL_auxz00_4534 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1876);
								BgL_arg3955z00_1883 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_4534))->
									BgL_sidezd2effectzf3z21);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_4537;

								BgL_auxz00_4537 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1876);
								BgL_arg3956z00_1884 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_4537))->
									BgL_keyz00);
							}
							{	/* Ast/alphatize.scm 350 */
								BgL_varz00_bglt BgL_arg3959z00_1886;

								BgL_arg3959z00_1886 =
									(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1876))->
									BgL_varz00);
								{	/* Ast/alphatize.scm 350 */
									BgL_nodez00_bglt BgL_res4209z00_3595;

									{	/* Ast/alphatize.scm 350 */
										BgL_nodez00_bglt BgL_nodez00_3569;

										BgL_nodez00_3569 = (BgL_nodez00_bglt) (BgL_arg3959z00_1886);
										{	/* Ast/alphatize.scm 350 */
											obj_t BgL_method3435z00_3570;

											{	/* Ast/alphatize.scm 350 */
												BgL_objectz00_bglt BgL_objz00_3571;

												BgL_objz00_3571 =
													(BgL_objectz00_bglt) (BgL_nodez00_3569);
												{	/* Ast/alphatize.scm 350 */
													long BgL_objzd2classzd2numz00_3572;

													BgL_objzd2classzd2numz00_3572 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_3571);
													{	/* Ast/alphatize.scm 350 */
														obj_t BgL_arg2643z00_3573;

														BgL_arg2643z00_3573 =
															PROCEDURE_REF
															(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
															(int) (((long) 1)));
														{	/* Ast/alphatize.scm 350 */
															obj_t BgL_arrayz00_3575;

															int BgL_offsetz00_3576;

															BgL_arrayz00_3575 = BgL_arg2643z00_3573;
															BgL_offsetz00_3576 =
																(int) (BgL_objzd2classzd2numz00_3572);
															{	/* Ast/alphatize.scm 350 */
																long BgL_offsetz00_3577;

																BgL_offsetz00_3577 =
																	((long) (BgL_offsetz00_3576) - OBJECT_TYPE);
																{	/* Ast/alphatize.scm 350 */
																	long BgL_modz00_3578;

																	{	/* Ast/alphatize.scm 350 */
																		int BgL_arg2645z00_3579;

																		BgL_arg2645z00_3579 = (int) (((long) 16));
																		{	/* Ast/alphatize.scm 350 */
																			long BgL_auxz00_4550;

																			BgL_auxz00_4550 =
																				(long) (BgL_arg2645z00_3579);
																			BgL_modz00_3578 =
																				(BgL_offsetz00_3577 / BgL_auxz00_4550);
																	}}
																	{	/* Ast/alphatize.scm 350 */
																		long BgL_restz00_3580;

																		{	/* Ast/alphatize.scm 350 */
																			int BgL_arg2644z00_3581;

																			BgL_arg2644z00_3581 = (int) (((long) 16));
																			{	/* Ast/alphatize.scm 350 */
																				long BgL_auxz00_4554;

																				BgL_auxz00_4554 =
																					(long) (BgL_arg2644z00_3581);
																				BgL_restz00_3580 =
																					(BgL_offsetz00_3577 %
																					BgL_auxz00_4554);
																		}}
																		{	/* Ast/alphatize.scm 350 */

																			BgL_method3435z00_3570 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_3575,
																					(int) (BgL_modz00_3578)),
																				(int) (BgL_restz00_3580));
											}}}}}}}}
											BgL_res4209z00_3595 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3435z00_3570) (BgL_method3435z00_3570,
													(obj_t) (BgL_nodez00_3569), BEOA));
									}}
									BgL_arg3958z00_1885 = BgL_res4209z00_3595;
							}}
							BgL_new3310z00_1880 =
								BGl_makezd2boxzd2refz00zzast_nodez00(BgL_arg3953z00_1881,
								BgL_arg3954z00_1882, BgL_arg3955z00_1883, BgL_arg3956z00_1884,
								(BgL_varz00_bglt) (BgL_arg3958z00_1885));
						}
						{	/* Ast/alphatize.scm 348 */

							BgL_auxz00_4528 = BgL_new3310z00_1880;
					}}
					return (obj_t) (BgL_auxz00_4528);
				}
			}
		}
	}



/* do-alphatize-make-bo3483 */
	obj_t BGl_dozd2alphatiza7ezd2makezd2bo3483z75zzast_alphatiza7eza7(obj_t
		BgL_envz00_3920, obj_t BgL_nodez00_3921)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 339 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1863;

				{	/* Ast/alphatize.scm 340 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_4569;

					BgL_nodez00_1863 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_3921);
					{	/* Ast/alphatize.scm 341 */
						BgL_makezd2boxzd2_bglt BgL_new3308z00_1867;

						{	/* Ast/alphatize.scm 341 */
							obj_t BgL_arg3945z00_1868;

							BgL_typez00_bglt BgL_arg3946z00_1869;

							obj_t BgL_arg3947z00_1870;

							obj_t BgL_arg3948z00_1871;

							BgL_nodez00_bglt BgL_arg3949z00_1872;

							BgL_arg3945z00_1868 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_1863));
							{
								BgL_nodez00_bglt BgL_auxz00_4572;

								BgL_auxz00_4572 = (BgL_nodez00_bglt) (BgL_nodez00_1863);
								BgL_arg3946z00_1869 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4572))->BgL_typez00);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_4575;

								BgL_auxz00_4575 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1863);
								BgL_arg3947z00_1870 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_4575))->
									BgL_sidezd2effectzf3z21);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_4578;

								BgL_auxz00_4578 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1863);
								BgL_arg3948z00_1871 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_4578))->
									BgL_keyz00);
							}
							{	/* Ast/alphatize.scm 342 */
								BgL_nodez00_bglt BgL_arg3950z00_1873;

								BgL_arg3950z00_1873 =
									(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1863))->
									BgL_valuez00);
								{	/* Ast/alphatize.scm 342 */
									BgL_nodez00_bglt BgL_res4206z00_3564;

									{	/* Ast/alphatize.scm 342 */
										obj_t BgL_method3435z00_3539;

										{	/* Ast/alphatize.scm 342 */
											BgL_objectz00_bglt BgL_objz00_3540;

											BgL_objz00_3540 =
												(BgL_objectz00_bglt) (BgL_arg3950z00_1873);
											{	/* Ast/alphatize.scm 342 */
												long BgL_objzd2classzd2numz00_3541;

												BgL_objzd2classzd2numz00_3541 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3540);
												{	/* Ast/alphatize.scm 342 */
													obj_t BgL_arg2643z00_3542;

													BgL_arg2643z00_3542 =
														PROCEDURE_REF
														(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
														(int) (((long) 1)));
													{	/* Ast/alphatize.scm 342 */
														obj_t BgL_arrayz00_3544;

														int BgL_offsetz00_3545;

														BgL_arrayz00_3544 = BgL_arg2643z00_3542;
														BgL_offsetz00_3545 =
															(int) (BgL_objzd2classzd2numz00_3541);
														{	/* Ast/alphatize.scm 342 */
															long BgL_offsetz00_3546;

															BgL_offsetz00_3546 =
																((long) (BgL_offsetz00_3545) - OBJECT_TYPE);
															{	/* Ast/alphatize.scm 342 */
																long BgL_modz00_3547;

																{	/* Ast/alphatize.scm 342 */
																	int BgL_arg2645z00_3548;

																	BgL_arg2645z00_3548 = (int) (((long) 16));
																	{	/* Ast/alphatize.scm 342 */
																		long BgL_auxz00_4590;

																		BgL_auxz00_4590 =
																			(long) (BgL_arg2645z00_3548);
																		BgL_modz00_3547 =
																			(BgL_offsetz00_3546 / BgL_auxz00_4590);
																}}
																{	/* Ast/alphatize.scm 342 */
																	long BgL_restz00_3549;

																	{	/* Ast/alphatize.scm 342 */
																		int BgL_arg2644z00_3550;

																		BgL_arg2644z00_3550 = (int) (((long) 16));
																		{	/* Ast/alphatize.scm 342 */
																			long BgL_auxz00_4594;

																			BgL_auxz00_4594 =
																				(long) (BgL_arg2644z00_3550);
																			BgL_restz00_3549 =
																				(BgL_offsetz00_3546 % BgL_auxz00_4594);
																	}}
																	{	/* Ast/alphatize.scm 342 */

																		BgL_method3435z00_3539 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3544,
																				(int) (BgL_modz00_3547)),
																			(int) (BgL_restz00_3549));
										}}}}}}}}
										BgL_res4206z00_3564 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3435z00_3539) (BgL_method3435z00_3539,
												(obj_t) (BgL_arg3950z00_1873), BEOA));
									}
									BgL_arg3949z00_1872 = BgL_res4206z00_3564;
							}}
							BgL_new3308z00_1867 =
								BGl_makezd2makezd2boxz00zzast_nodez00(BgL_arg3945z00_1868,
								BgL_arg3946z00_1869, BgL_arg3947z00_1870, BgL_arg3948z00_1871,
								BgL_arg3949z00_1872);
						}
						{	/* Ast/alphatize.scm 340 */

							BgL_auxz00_4569 = BgL_new3308z00_1867;
					}}
					return (obj_t) (BgL_auxz00_4569);
				}
			}
		}
	}



/* do-alphatize-select3481 */
	obj_t BGl_dozd2alphatiza7ezd2select3481za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3922, obj_t BgL_nodez00_3923)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 327 */
			{
				BgL_selectz00_bglt BgL_nodez00_1831;

				{	/* Ast/alphatize.scm 328 */
					BgL_selectz00_bglt BgL_auxz00_4608;

					BgL_nodez00_1831 = (BgL_selectz00_bglt) (BgL_nodez00_3923);
					{	/* Ast/alphatize.scm 329 */
						BgL_selectz00_bglt BgL_new3306z00_1835;

						{	/* Ast/alphatize.scm 329 */
							obj_t BgL_arg3927z00_1836;

							BgL_typez00_bglt BgL_arg3928z00_1837;

							obj_t BgL_arg3929z00_1838;

							obj_t BgL_arg3930z00_1839;

							BgL_nodez00_bglt BgL_arg3931z00_1840;

							obj_t BgL_arg3932z00_1841;

							BgL_typez00_bglt BgL_arg3933z00_1842;

							BgL_arg3927z00_1836 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_1831));
							{
								BgL_nodez00_bglt BgL_auxz00_4611;

								BgL_auxz00_4611 = (BgL_nodez00_bglt) (BgL_nodez00_1831);
								BgL_arg3928z00_1837 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4611))->BgL_typez00);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_4614;

								BgL_auxz00_4614 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1831);
								BgL_arg3929z00_1838 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_4614))->
									BgL_sidezd2effectzf3z21);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_4617;

								BgL_auxz00_4617 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1831);
								BgL_arg3930z00_1839 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_4617))->
									BgL_keyz00);
							}
							{	/* Ast/alphatize.scm 330 */
								BgL_nodez00_bglt BgL_arg3934z00_1843;

								BgL_arg3934z00_1843 =
									(((BgL_selectz00_bglt) CREF(BgL_nodez00_1831))->BgL_testz00);
								{	/* Ast/alphatize.scm 330 */
									BgL_nodez00_bglt BgL_res4200z00_3491;

									{	/* Ast/alphatize.scm 330 */
										obj_t BgL_method3435z00_3466;

										{	/* Ast/alphatize.scm 330 */
											BgL_objectz00_bglt BgL_objz00_3467;

											BgL_objz00_3467 =
												(BgL_objectz00_bglt) (BgL_arg3934z00_1843);
											{	/* Ast/alphatize.scm 330 */
												long BgL_objzd2classzd2numz00_3468;

												BgL_objzd2classzd2numz00_3468 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3467);
												{	/* Ast/alphatize.scm 330 */
													obj_t BgL_arg2643z00_3469;

													BgL_arg2643z00_3469 =
														PROCEDURE_REF
														(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
														(int) (((long) 1)));
													{	/* Ast/alphatize.scm 330 */
														obj_t BgL_arrayz00_3471;

														int BgL_offsetz00_3472;

														BgL_arrayz00_3471 = BgL_arg2643z00_3469;
														BgL_offsetz00_3472 =
															(int) (BgL_objzd2classzd2numz00_3468);
														{	/* Ast/alphatize.scm 330 */
															long BgL_offsetz00_3473;

															BgL_offsetz00_3473 =
																((long) (BgL_offsetz00_3472) - OBJECT_TYPE);
															{	/* Ast/alphatize.scm 330 */
																long BgL_modz00_3474;

																{	/* Ast/alphatize.scm 330 */
																	int BgL_arg2645z00_3475;

																	BgL_arg2645z00_3475 = (int) (((long) 16));
																	{	/* Ast/alphatize.scm 330 */
																		long BgL_auxz00_4629;

																		BgL_auxz00_4629 =
																			(long) (BgL_arg2645z00_3475);
																		BgL_modz00_3474 =
																			(BgL_offsetz00_3473 / BgL_auxz00_4629);
																}}
																{	/* Ast/alphatize.scm 330 */
																	long BgL_restz00_3476;

																	{	/* Ast/alphatize.scm 330 */
																		int BgL_arg2644z00_3477;

																		BgL_arg2644z00_3477 = (int) (((long) 16));
																		{	/* Ast/alphatize.scm 330 */
																			long BgL_auxz00_4633;

																			BgL_auxz00_4633 =
																				(long) (BgL_arg2644z00_3477);
																			BgL_restz00_3476 =
																				(BgL_offsetz00_3473 % BgL_auxz00_4633);
																	}}
																	{	/* Ast/alphatize.scm 330 */

																		BgL_method3435z00_3466 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3471,
																				(int) (BgL_modz00_3474)),
																			(int) (BgL_restz00_3476));
										}}}}}}}}
										BgL_res4200z00_3491 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3435z00_3466) (BgL_method3435z00_3466,
												(obj_t) (BgL_arg3934z00_1843), BEOA));
									}
									BgL_arg3931z00_1840 = BgL_res4200z00_3491;
							}}
							{	/* Ast/alphatize.scm 331 */
								obj_t BgL_l3398z00_1844;

								BgL_l3398z00_1844 =
									(((BgL_selectz00_bglt) CREF(BgL_nodez00_1831))->
									BgL_clausesz00);
								if (NULLP(BgL_l3398z00_1844))
									{	/* Ast/alphatize.scm 331 */
										BgL_arg3932z00_1841 = BNIL;
									}
								else
									{	/* Ast/alphatize.scm 331 */
										obj_t BgL_head3400z00_1846;

										BgL_head3400z00_1846 = MAKE_PAIR(BNIL, BNIL);
										{
											obj_t BgL_l3398z00_1848;

											obj_t BgL_tail3401z00_1849;

											BgL_l3398z00_1848 = BgL_l3398z00_1844;
											BgL_tail3401z00_1849 = BgL_head3400z00_1846;
										BgL_zc3anonymousza33936ze3z83_1850:
											if (NULLP(BgL_l3398z00_1848))
												{	/* Ast/alphatize.scm 331 */
													BgL_arg3932z00_1841 = CDR(BgL_head3400z00_1846);
												}
											else
												{	/* Ast/alphatize.scm 331 */
													obj_t BgL_newtail3402z00_1852;

													{	/* Ast/alphatize.scm 331 */
														obj_t BgL_arg3939z00_1854;

														{	/* Ast/alphatize.scm 331 */
															obj_t BgL_clausez00_1856;

															BgL_clausez00_1856 = CAR(BgL_l3398z00_1848);
															{	/* Ast/alphatize.scm 332 */
																obj_t BgL_arg3941z00_1857;

																BgL_nodez00_bglt BgL_arg3942z00_1858;

																BgL_arg3941z00_1857 = CAR(BgL_clausez00_1856);
																{	/* Ast/alphatize.scm 333 */
																	obj_t BgL_arg3943z00_1859;

																	BgL_arg3943z00_1859 = CDR(BgL_clausez00_1856);
																	{	/* Ast/alphatize.scm 333 */
																		BgL_nodez00_bglt BgL_res4203z00_3527;

																		{	/* Ast/alphatize.scm 333 */
																			BgL_nodez00_bglt BgL_nodez00_3501;

																			BgL_nodez00_3501 =
																				(BgL_nodez00_bglt)
																				(BgL_arg3943z00_1859);
																			{	/* Ast/alphatize.scm 333 */
																				obj_t BgL_method3435z00_3502;

																				{	/* Ast/alphatize.scm 333 */
																					BgL_objectz00_bglt BgL_objz00_3503;

																					BgL_objz00_3503 =
																						(BgL_objectz00_bglt)
																						(BgL_nodez00_3501);
																					{	/* Ast/alphatize.scm 333 */
																						long BgL_objzd2classzd2numz00_3504;

																						BgL_objzd2classzd2numz00_3504 =
																							BGL_OBJECT_CLASS_NUM
																							(BgL_objz00_3503);
																						{	/* Ast/alphatize.scm 333 */
																							obj_t BgL_arg2643z00_3505;

																							BgL_arg2643z00_3505 =
																								PROCEDURE_REF
																								(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																								(int) (((long) 1)));
																							{	/* Ast/alphatize.scm 333 */
																								obj_t BgL_arrayz00_3507;

																								int BgL_offsetz00_3508;

																								BgL_arrayz00_3507 =
																									BgL_arg2643z00_3505;
																								BgL_offsetz00_3508 =
																									(int)
																									(BgL_objzd2classzd2numz00_3504);
																								{	/* Ast/alphatize.scm 333 */
																									long BgL_offsetz00_3509;

																									BgL_offsetz00_3509 =
																										(
																										(long) (BgL_offsetz00_3508)
																										- OBJECT_TYPE);
																									{	/* Ast/alphatize.scm 333 */
																										long BgL_modz00_3510;

																										{	/* Ast/alphatize.scm 333 */
																											int BgL_arg2645z00_3511;

																											BgL_arg2645z00_3511 =
																												(int) (((long) 16));
																											{	/* Ast/alphatize.scm 333 */
																												long BgL_auxz00_4663;

																												BgL_auxz00_4663 =
																													(long)
																													(BgL_arg2645z00_3511);
																												BgL_modz00_3510 =
																													(BgL_offsetz00_3509 /
																													BgL_auxz00_4663);
																										}}
																										{	/* Ast/alphatize.scm 333 */
																											long BgL_restz00_3512;

																											{	/* Ast/alphatize.scm 333 */
																												int BgL_arg2644z00_3513;

																												BgL_arg2644z00_3513 =
																													(int) (((long) 16));
																												{	/* Ast/alphatize.scm 333 */
																													long BgL_auxz00_4667;

																													BgL_auxz00_4667 =
																														(long)
																														(BgL_arg2644z00_3513);
																													BgL_restz00_3512 =
																														(BgL_offsetz00_3509
																														% BgL_auxz00_4667);
																											}}
																											{	/* Ast/alphatize.scm 333 */

																												BgL_method3435z00_3502 =
																													VECTOR_REF(VECTOR_REF
																													(BgL_arrayz00_3507,
																														(int)
																														(BgL_modz00_3510)),
																													(int)
																													(BgL_restz00_3512));
																				}}}}}}}}
																				BgL_res4203z00_3527 =
																					(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																					(BgL_method3435z00_3502)
																					(BgL_method3435z00_3502,
																						(obj_t) (BgL_nodez00_3501), BEOA));
																		}}
																		BgL_arg3942z00_1858 = BgL_res4203z00_3527;
																}}
																BgL_arg3939z00_1854 =
																	MAKE_PAIR(BgL_arg3941z00_1857,
																	(obj_t) (BgL_arg3942z00_1858));
														}}
														BgL_newtail3402z00_1852 =
															MAKE_PAIR(BgL_arg3939z00_1854, BNIL);
													}
													SET_CDR(BgL_tail3401z00_1849,
														BgL_newtail3402z00_1852);
													{
														obj_t BgL_tail3401z00_4684;

														obj_t BgL_l3398z00_4682;

														BgL_l3398z00_4682 = CDR(BgL_l3398z00_1848);
														BgL_tail3401z00_4684 = BgL_newtail3402z00_1852;
														BgL_tail3401z00_1849 = BgL_tail3401z00_4684;
														BgL_l3398z00_1848 = BgL_l3398z00_4682;
														goto BgL_zc3anonymousza33936ze3z83_1850;
													}
												}
										}
									}
							}
							BgL_arg3933z00_1842 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1831))->
								BgL_itemzd2typezd2);
							BgL_new3306z00_1835 =
								BGl_makezd2selectzd2zzast_nodez00(BgL_arg3927z00_1836,
								BgL_arg3928z00_1837, BgL_arg3929z00_1838, BgL_arg3930z00_1839,
								BgL_arg3931z00_1840, BgL_arg3932z00_1841, BgL_arg3933z00_1842);
						}
						{	/* Ast/alphatize.scm 328 */

							BgL_auxz00_4608 = BgL_new3306z00_1835;
						}
					}
					return (obj_t) (BgL_auxz00_4608);
				}
			}
		}
	}



/* do-alphatize-fail3479 */
	obj_t BGl_dozd2alphatiza7ezd2fail3479za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3924, obj_t BgL_nodez00_3925)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 317 */
			{
				BgL_failz00_bglt BgL_nodez00_1816;

				{	/* Ast/alphatize.scm 318 */
					BgL_failz00_bglt BgL_auxz00_4689;

					BgL_nodez00_1816 = (BgL_failz00_bglt) (BgL_nodez00_3925);
					{	/* Ast/alphatize.scm 319 */
						BgL_failz00_bglt BgL_new3304z00_1820;

						{	/* Ast/alphatize.scm 319 */
							obj_t BgL_arg3917z00_1821;

							BgL_typez00_bglt BgL_arg3918z00_1822;

							BgL_nodez00_bglt BgL_arg3919z00_1823;

							BgL_nodez00_bglt BgL_arg3920z00_1824;

							BgL_nodez00_bglt BgL_arg3922z00_1825;

							BgL_arg3917z00_1821 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_1816));
							{
								BgL_nodez00_bglt BgL_auxz00_4692;

								BgL_auxz00_4692 = (BgL_nodez00_bglt) (BgL_nodez00_1816);
								BgL_arg3918z00_1822 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4692))->BgL_typez00);
							}
							{	/* Ast/alphatize.scm 320 */
								BgL_nodez00_bglt BgL_arg3923z00_1826;

								BgL_arg3923z00_1826 =
									(((BgL_failz00_bglt) CREF(BgL_nodez00_1816))->BgL_procz00);
								{	/* Ast/alphatize.scm 320 */
									BgL_nodez00_bglt BgL_res4191z00_3404;

									{	/* Ast/alphatize.scm 320 */
										obj_t BgL_method3435z00_3379;

										{	/* Ast/alphatize.scm 320 */
											BgL_objectz00_bglt BgL_objz00_3380;

											BgL_objz00_3380 =
												(BgL_objectz00_bglt) (BgL_arg3923z00_1826);
											{	/* Ast/alphatize.scm 320 */
												long BgL_objzd2classzd2numz00_3381;

												BgL_objzd2classzd2numz00_3381 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3380);
												{	/* Ast/alphatize.scm 320 */
													obj_t BgL_arg2643z00_3382;

													BgL_arg2643z00_3382 =
														PROCEDURE_REF
														(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
														(int) (((long) 1)));
													{	/* Ast/alphatize.scm 320 */
														obj_t BgL_arrayz00_3384;

														int BgL_offsetz00_3385;

														BgL_arrayz00_3384 = BgL_arg2643z00_3382;
														BgL_offsetz00_3385 =
															(int) (BgL_objzd2classzd2numz00_3381);
														{	/* Ast/alphatize.scm 320 */
															long BgL_offsetz00_3386;

															BgL_offsetz00_3386 =
																((long) (BgL_offsetz00_3385) - OBJECT_TYPE);
															{	/* Ast/alphatize.scm 320 */
																long BgL_modz00_3387;

																{	/* Ast/alphatize.scm 320 */
																	int BgL_arg2645z00_3388;

																	BgL_arg2645z00_3388 = (int) (((long) 16));
																	{	/* Ast/alphatize.scm 320 */
																		long BgL_auxz00_4704;

																		BgL_auxz00_4704 =
																			(long) (BgL_arg2645z00_3388);
																		BgL_modz00_3387 =
																			(BgL_offsetz00_3386 / BgL_auxz00_4704);
																}}
																{	/* Ast/alphatize.scm 320 */
																	long BgL_restz00_3389;

																	{	/* Ast/alphatize.scm 320 */
																		int BgL_arg2644z00_3390;

																		BgL_arg2644z00_3390 = (int) (((long) 16));
																		{	/* Ast/alphatize.scm 320 */
																			long BgL_auxz00_4708;

																			BgL_auxz00_4708 =
																				(long) (BgL_arg2644z00_3390);
																			BgL_restz00_3389 =
																				(BgL_offsetz00_3386 % BgL_auxz00_4708);
																	}}
																	{	/* Ast/alphatize.scm 320 */

																		BgL_method3435z00_3379 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3384,
																				(int) (BgL_modz00_3387)),
																			(int) (BgL_restz00_3389));
										}}}}}}}}
										BgL_res4191z00_3404 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3435z00_3379) (BgL_method3435z00_3379,
												(obj_t) (BgL_arg3923z00_1826), BEOA));
									}
									BgL_arg3919z00_1823 = BgL_res4191z00_3404;
							}}
							{	/* Ast/alphatize.scm 321 */
								BgL_nodez00_bglt BgL_arg3924z00_1827;

								BgL_arg3924z00_1827 =
									(((BgL_failz00_bglt) CREF(BgL_nodez00_1816))->BgL_msgz00);
								{	/* Ast/alphatize.scm 321 */
									BgL_nodez00_bglt BgL_res4194z00_3432;

									{	/* Ast/alphatize.scm 321 */
										obj_t BgL_method3435z00_3407;

										{	/* Ast/alphatize.scm 321 */
											BgL_objectz00_bglt BgL_objz00_3408;

											BgL_objz00_3408 =
												(BgL_objectz00_bglt) (BgL_arg3924z00_1827);
											{	/* Ast/alphatize.scm 321 */
												long BgL_objzd2classzd2numz00_3409;

												BgL_objzd2classzd2numz00_3409 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3408);
												{	/* Ast/alphatize.scm 321 */
													obj_t BgL_arg2643z00_3410;

													BgL_arg2643z00_3410 =
														PROCEDURE_REF
														(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
														(int) (((long) 1)));
													{	/* Ast/alphatize.scm 321 */
														obj_t BgL_arrayz00_3412;

														int BgL_offsetz00_3413;

														BgL_arrayz00_3412 = BgL_arg2643z00_3410;
														BgL_offsetz00_3413 =
															(int) (BgL_objzd2classzd2numz00_3409);
														{	/* Ast/alphatize.scm 321 */
															long BgL_offsetz00_3414;

															BgL_offsetz00_3414 =
																((long) (BgL_offsetz00_3413) - OBJECT_TYPE);
															{	/* Ast/alphatize.scm 321 */
																long BgL_modz00_3415;

																{	/* Ast/alphatize.scm 321 */
																	int BgL_arg2645z00_3416;

																	BgL_arg2645z00_3416 = (int) (((long) 16));
																	{	/* Ast/alphatize.scm 321 */
																		long BgL_auxz00_4728;

																		BgL_auxz00_4728 =
																			(long) (BgL_arg2645z00_3416);
																		BgL_modz00_3415 =
																			(BgL_offsetz00_3414 / BgL_auxz00_4728);
																}}
																{	/* Ast/alphatize.scm 321 */
																	long BgL_restz00_3417;

																	{	/* Ast/alphatize.scm 321 */
																		int BgL_arg2644z00_3418;

																		BgL_arg2644z00_3418 = (int) (((long) 16));
																		{	/* Ast/alphatize.scm 321 */
																			long BgL_auxz00_4732;

																			BgL_auxz00_4732 =
																				(long) (BgL_arg2644z00_3418);
																			BgL_restz00_3417 =
																				(BgL_offsetz00_3414 % BgL_auxz00_4732);
																	}}
																	{	/* Ast/alphatize.scm 321 */

																		BgL_method3435z00_3407 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3412,
																				(int) (BgL_modz00_3415)),
																			(int) (BgL_restz00_3417));
										}}}}}}}}
										BgL_res4194z00_3432 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3435z00_3407) (BgL_method3435z00_3407,
												(obj_t) (BgL_arg3924z00_1827), BEOA));
									}
									BgL_arg3920z00_1824 = BgL_res4194z00_3432;
							}}
							{	/* Ast/alphatize.scm 322 */
								BgL_nodez00_bglt BgL_arg3925z00_1828;

								BgL_arg3925z00_1828 =
									(((BgL_failz00_bglt) CREF(BgL_nodez00_1816))->BgL_objz00);
								{	/* Ast/alphatize.scm 322 */
									BgL_nodez00_bglt BgL_res4197z00_3460;

									{	/* Ast/alphatize.scm 322 */
										obj_t BgL_method3435z00_3435;

										{	/* Ast/alphatize.scm 322 */
											BgL_objectz00_bglt BgL_objz00_3436;

											BgL_objz00_3436 =
												(BgL_objectz00_bglt) (BgL_arg3925z00_1828);
											{	/* Ast/alphatize.scm 322 */
												long BgL_objzd2classzd2numz00_3437;

												BgL_objzd2classzd2numz00_3437 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3436);
												{	/* Ast/alphatize.scm 322 */
													obj_t BgL_arg2643z00_3438;

													BgL_arg2643z00_3438 =
														PROCEDURE_REF
														(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
														(int) (((long) 1)));
													{	/* Ast/alphatize.scm 322 */
														obj_t BgL_arrayz00_3440;

														int BgL_offsetz00_3441;

														BgL_arrayz00_3440 = BgL_arg2643z00_3438;
														BgL_offsetz00_3441 =
															(int) (BgL_objzd2classzd2numz00_3437);
														{	/* Ast/alphatize.scm 322 */
															long BgL_offsetz00_3442;

															BgL_offsetz00_3442 =
																((long) (BgL_offsetz00_3441) - OBJECT_TYPE);
															{	/* Ast/alphatize.scm 322 */
																long BgL_modz00_3443;

																{	/* Ast/alphatize.scm 322 */
																	int BgL_arg2645z00_3444;

																	BgL_arg2645z00_3444 = (int) (((long) 16));
																	{	/* Ast/alphatize.scm 322 */
																		long BgL_auxz00_4752;

																		BgL_auxz00_4752 =
																			(long) (BgL_arg2645z00_3444);
																		BgL_modz00_3443 =
																			(BgL_offsetz00_3442 / BgL_auxz00_4752);
																}}
																{	/* Ast/alphatize.scm 322 */
																	long BgL_restz00_3445;

																	{	/* Ast/alphatize.scm 322 */
																		int BgL_arg2644z00_3446;

																		BgL_arg2644z00_3446 = (int) (((long) 16));
																		{	/* Ast/alphatize.scm 322 */
																			long BgL_auxz00_4756;

																			BgL_auxz00_4756 =
																				(long) (BgL_arg2644z00_3446);
																			BgL_restz00_3445 =
																				(BgL_offsetz00_3442 % BgL_auxz00_4756);
																	}}
																	{	/* Ast/alphatize.scm 322 */

																		BgL_method3435z00_3435 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3440,
																				(int) (BgL_modz00_3443)),
																			(int) (BgL_restz00_3445));
										}}}}}}}}
										BgL_res4197z00_3460 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3435z00_3435) (BgL_method3435z00_3435,
												(obj_t) (BgL_arg3925z00_1828), BEOA));
									}
									BgL_arg3922z00_1825 = BgL_res4197z00_3460;
							}}
							BgL_new3304z00_1820 =
								BGl_makezd2failzd2zzast_nodez00(BgL_arg3917z00_1821,
								BgL_arg3918z00_1822, BgL_arg3919z00_1823, BgL_arg3920z00_1824,
								BgL_arg3922z00_1825);
						}
						{	/* Ast/alphatize.scm 318 */

							BgL_auxz00_4689 = BgL_new3304z00_1820;
					}}
					return (obj_t) (BgL_auxz00_4689);
				}
			}
		}
	}



/* do-alphatize-conditi3477 */
	obj_t BGl_dozd2alphatiza7ezd2conditi3477za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3926, obj_t BgL_nodez00_3927)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 307 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1799;

				{	/* Ast/alphatize.scm 308 */
					BgL_conditionalz00_bglt BgL_auxz00_4770;

					BgL_nodez00_1799 = (BgL_conditionalz00_bglt) (BgL_nodez00_3927);
					{	/* Ast/alphatize.scm 309 */
						BgL_conditionalz00_bglt BgL_new3302z00_1803;

						{	/* Ast/alphatize.scm 309 */
							obj_t BgL_arg3905z00_1804;

							BgL_typez00_bglt BgL_arg3906z00_1805;

							obj_t BgL_arg3908z00_1806;

							obj_t BgL_arg3909z00_1807;

							BgL_nodez00_bglt BgL_arg3910z00_1808;

							BgL_nodez00_bglt BgL_arg3911z00_1809;

							BgL_nodez00_bglt BgL_arg3912z00_1810;

							BgL_arg3905z00_1804 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_1799));
							{
								BgL_nodez00_bglt BgL_auxz00_4773;

								BgL_auxz00_4773 = (BgL_nodez00_bglt) (BgL_nodez00_1799);
								BgL_arg3906z00_1805 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4773))->BgL_typez00);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_4776;

								BgL_auxz00_4776 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1799);
								BgL_arg3908z00_1806 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_4776))->
									BgL_sidezd2effectzf3z21);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_4779;

								BgL_auxz00_4779 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1799);
								BgL_arg3909z00_1807 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_4779))->
									BgL_keyz00);
							}
							{	/* Ast/alphatize.scm 310 */
								BgL_nodez00_bglt BgL_arg3913z00_1811;

								BgL_arg3913z00_1811 =
									(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1799))->
									BgL_testz00);
								{	/* Ast/alphatize.scm 310 */
									BgL_nodez00_bglt BgL_res4182z00_3319;

									{	/* Ast/alphatize.scm 310 */
										obj_t BgL_method3435z00_3294;

										{	/* Ast/alphatize.scm 310 */
											BgL_objectz00_bglt BgL_objz00_3295;

											BgL_objz00_3295 =
												(BgL_objectz00_bglt) (BgL_arg3913z00_1811);
											{	/* Ast/alphatize.scm 310 */
												long BgL_objzd2classzd2numz00_3296;

												BgL_objzd2classzd2numz00_3296 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3295);
												{	/* Ast/alphatize.scm 310 */
													obj_t BgL_arg2643z00_3297;

													BgL_arg2643z00_3297 =
														PROCEDURE_REF
														(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
														(int) (((long) 1)));
													{	/* Ast/alphatize.scm 310 */
														obj_t BgL_arrayz00_3299;

														int BgL_offsetz00_3300;

														BgL_arrayz00_3299 = BgL_arg2643z00_3297;
														BgL_offsetz00_3300 =
															(int) (BgL_objzd2classzd2numz00_3296);
														{	/* Ast/alphatize.scm 310 */
															long BgL_offsetz00_3301;

															BgL_offsetz00_3301 =
																((long) (BgL_offsetz00_3300) - OBJECT_TYPE);
															{	/* Ast/alphatize.scm 310 */
																long BgL_modz00_3302;

																{	/* Ast/alphatize.scm 310 */
																	int BgL_arg2645z00_3303;

																	BgL_arg2645z00_3303 = (int) (((long) 16));
																	{	/* Ast/alphatize.scm 310 */
																		long BgL_auxz00_4791;

																		BgL_auxz00_4791 =
																			(long) (BgL_arg2645z00_3303);
																		BgL_modz00_3302 =
																			(BgL_offsetz00_3301 / BgL_auxz00_4791);
																}}
																{	/* Ast/alphatize.scm 310 */
																	long BgL_restz00_3304;

																	{	/* Ast/alphatize.scm 310 */
																		int BgL_arg2644z00_3305;

																		BgL_arg2644z00_3305 = (int) (((long) 16));
																		{	/* Ast/alphatize.scm 310 */
																			long BgL_auxz00_4795;

																			BgL_auxz00_4795 =
																				(long) (BgL_arg2644z00_3305);
																			BgL_restz00_3304 =
																				(BgL_offsetz00_3301 % BgL_auxz00_4795);
																	}}
																	{	/* Ast/alphatize.scm 310 */

																		BgL_method3435z00_3294 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3299,
																				(int) (BgL_modz00_3302)),
																			(int) (BgL_restz00_3304));
										}}}}}}}}
										BgL_res4182z00_3319 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3435z00_3294) (BgL_method3435z00_3294,
												(obj_t) (BgL_arg3913z00_1811), BEOA));
									}
									BgL_arg3910z00_1808 = BgL_res4182z00_3319;
							}}
							{	/* Ast/alphatize.scm 311 */
								BgL_nodez00_bglt BgL_arg3914z00_1812;

								BgL_arg3914z00_1812 =
									(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1799))->
									BgL_truez00);
								{	/* Ast/alphatize.scm 311 */
									BgL_nodez00_bglt BgL_res4185z00_3347;

									{	/* Ast/alphatize.scm 311 */
										obj_t BgL_method3435z00_3322;

										{	/* Ast/alphatize.scm 311 */
											BgL_objectz00_bglt BgL_objz00_3323;

											BgL_objz00_3323 =
												(BgL_objectz00_bglt) (BgL_arg3914z00_1812);
											{	/* Ast/alphatize.scm 311 */
												long BgL_objzd2classzd2numz00_3324;

												BgL_objzd2classzd2numz00_3324 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3323);
												{	/* Ast/alphatize.scm 311 */
													obj_t BgL_arg2643z00_3325;

													BgL_arg2643z00_3325 =
														PROCEDURE_REF
														(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
														(int) (((long) 1)));
													{	/* Ast/alphatize.scm 311 */
														obj_t BgL_arrayz00_3327;

														int BgL_offsetz00_3328;

														BgL_arrayz00_3327 = BgL_arg2643z00_3325;
														BgL_offsetz00_3328 =
															(int) (BgL_objzd2classzd2numz00_3324);
														{	/* Ast/alphatize.scm 311 */
															long BgL_offsetz00_3329;

															BgL_offsetz00_3329 =
																((long) (BgL_offsetz00_3328) - OBJECT_TYPE);
															{	/* Ast/alphatize.scm 311 */
																long BgL_modz00_3330;

																{	/* Ast/alphatize.scm 311 */
																	int BgL_arg2645z00_3331;

																	BgL_arg2645z00_3331 = (int) (((long) 16));
																	{	/* Ast/alphatize.scm 311 */
																		long BgL_auxz00_4815;

																		BgL_auxz00_4815 =
																			(long) (BgL_arg2645z00_3331);
																		BgL_modz00_3330 =
																			(BgL_offsetz00_3329 / BgL_auxz00_4815);
																}}
																{	/* Ast/alphatize.scm 311 */
																	long BgL_restz00_3332;

																	{	/* Ast/alphatize.scm 311 */
																		int BgL_arg2644z00_3333;

																		BgL_arg2644z00_3333 = (int) (((long) 16));
																		{	/* Ast/alphatize.scm 311 */
																			long BgL_auxz00_4819;

																			BgL_auxz00_4819 =
																				(long) (BgL_arg2644z00_3333);
																			BgL_restz00_3332 =
																				(BgL_offsetz00_3329 % BgL_auxz00_4819);
																	}}
																	{	/* Ast/alphatize.scm 311 */

																		BgL_method3435z00_3322 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3327,
																				(int) (BgL_modz00_3330)),
																			(int) (BgL_restz00_3332));
										}}}}}}}}
										BgL_res4185z00_3347 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3435z00_3322) (BgL_method3435z00_3322,
												(obj_t) (BgL_arg3914z00_1812), BEOA));
									}
									BgL_arg3911z00_1809 = BgL_res4185z00_3347;
							}}
							{	/* Ast/alphatize.scm 312 */
								BgL_nodez00_bglt BgL_arg3915z00_1813;

								BgL_arg3915z00_1813 =
									(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1799))->
									BgL_falsez00);
								{	/* Ast/alphatize.scm 312 */
									BgL_nodez00_bglt BgL_res4188z00_3375;

									{	/* Ast/alphatize.scm 312 */
										obj_t BgL_method3435z00_3350;

										{	/* Ast/alphatize.scm 312 */
											BgL_objectz00_bglt BgL_objz00_3351;

											BgL_objz00_3351 =
												(BgL_objectz00_bglt) (BgL_arg3915z00_1813);
											{	/* Ast/alphatize.scm 312 */
												long BgL_objzd2classzd2numz00_3352;

												BgL_objzd2classzd2numz00_3352 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3351);
												{	/* Ast/alphatize.scm 312 */
													obj_t BgL_arg2643z00_3353;

													BgL_arg2643z00_3353 =
														PROCEDURE_REF
														(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
														(int) (((long) 1)));
													{	/* Ast/alphatize.scm 312 */
														obj_t BgL_arrayz00_3355;

														int BgL_offsetz00_3356;

														BgL_arrayz00_3355 = BgL_arg2643z00_3353;
														BgL_offsetz00_3356 =
															(int) (BgL_objzd2classzd2numz00_3352);
														{	/* Ast/alphatize.scm 312 */
															long BgL_offsetz00_3357;

															BgL_offsetz00_3357 =
																((long) (BgL_offsetz00_3356) - OBJECT_TYPE);
															{	/* Ast/alphatize.scm 312 */
																long BgL_modz00_3358;

																{	/* Ast/alphatize.scm 312 */
																	int BgL_arg2645z00_3359;

																	BgL_arg2645z00_3359 = (int) (((long) 16));
																	{	/* Ast/alphatize.scm 312 */
																		long BgL_auxz00_4839;

																		BgL_auxz00_4839 =
																			(long) (BgL_arg2645z00_3359);
																		BgL_modz00_3358 =
																			(BgL_offsetz00_3357 / BgL_auxz00_4839);
																}}
																{	/* Ast/alphatize.scm 312 */
																	long BgL_restz00_3360;

																	{	/* Ast/alphatize.scm 312 */
																		int BgL_arg2644z00_3361;

																		BgL_arg2644z00_3361 = (int) (((long) 16));
																		{	/* Ast/alphatize.scm 312 */
																			long BgL_auxz00_4843;

																			BgL_auxz00_4843 =
																				(long) (BgL_arg2644z00_3361);
																			BgL_restz00_3360 =
																				(BgL_offsetz00_3357 % BgL_auxz00_4843);
																	}}
																	{	/* Ast/alphatize.scm 312 */

																		BgL_method3435z00_3350 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3355,
																				(int) (BgL_modz00_3358)),
																			(int) (BgL_restz00_3360));
										}}}}}}}}
										BgL_res4188z00_3375 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3435z00_3350) (BgL_method3435z00_3350,
												(obj_t) (BgL_arg3915z00_1813), BEOA));
									}
									BgL_arg3912z00_1810 = BgL_res4188z00_3375;
							}}
							BgL_new3302z00_1803 =
								BGl_makezd2conditionalzd2zzast_nodez00(BgL_arg3905z00_1804,
								BgL_arg3906z00_1805, BgL_arg3908z00_1806, BgL_arg3909z00_1807,
								BgL_arg3910z00_1808, BgL_arg3911z00_1809, BgL_arg3912z00_1810);
						}
						{	/* Ast/alphatize.scm 308 */

							BgL_auxz00_4770 = BgL_new3302z00_1803;
					}}
					return (obj_t) (BgL_auxz00_4770);
				}
			}
		}
	}



/* do-alphatize-setq3474 */
	obj_t BGl_dozd2alphatiza7ezd2setq3474za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3928, obj_t BgL_nodez00_3929)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 280 */
			{
				BgL_setqz00_bglt BgL_nodez00_1759;

				BgL_nodez00_1759 = (BgL_setqz00_bglt) (BgL_nodez00_3929);
				{	/* Ast/alphatize.scm 281 */
					BgL_varz00_bglt BgL_vz00_1762;

					BgL_vz00_1762 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1759))->BgL_varz00);
					{	/* Ast/alphatize.scm 281 */
						BgL_variablez00_bglt BgL_varz00_1763;

						BgL_varz00_1763 =
							(((BgL_varz00_bglt) CREF(BgL_vz00_1762))->BgL_variablez00);
						{	/* Ast/alphatize.scm 282 */
							obj_t BgL_alphaz00_1764;

							BgL_alphaz00_1764 =
								(((BgL_variablez00_bglt) CREF(BgL_varz00_1763))->
								BgL_fastzd2alphazd2);
							{	/* Ast/alphatize.scm 283 */

								if ((BgL_alphaz00_1764 == BUNSPEC))
									{	/* Ast/alphatize.scm 285 */
										{	/* Ast/alphatize.scm 286 */
											obj_t BgL_arg3881z00_1766;

											obj_t BgL_arg3882z00_1767;

											{
												BgL_nodez00_bglt BgL_auxz00_4862;

												BgL_auxz00_4862 = (BgL_nodez00_bglt) (BgL_nodez00_1759);
												BgL_arg3881z00_1766 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_4862))->
													BgL_locz00);
											}
											BgL_arg3882z00_1767 = CNST_TABLE_REF(((long) 2));
											BGl_usezd2variablez12zc0zzast_sexpz00(BgL_varz00_1763,
												BgL_arg3881z00_1766, BgL_arg3882z00_1767);
										}
										{	/* Ast/alphatize.scm 288 */
											BgL_setqz00_bglt BgL_new3294z00_1769;

											{	/* Ast/alphatize.scm 288 */
												obj_t BgL_arg3883z00_1770;

												BgL_typez00_bglt BgL_arg3884z00_1771;

												BgL_varz00_bglt BgL_arg3885z00_1772;

												BgL_nodez00_bglt BgL_arg3886z00_1773;

												BgL_arg3883z00_1770 =
													BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
													(obj_t) (BgL_nodez00_1759));
												{
													BgL_nodez00_bglt BgL_auxz00_4869;

													BgL_auxz00_4869 =
														(BgL_nodez00_bglt) (BgL_nodez00_1759);
													BgL_arg3884z00_1771 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_4869))->
														BgL_typez00);
												}
												{	/* Ast/alphatize.scm 289 */
													BgL_varz00_bglt BgL_new3296z00_1775;

													{	/* Ast/alphatize.scm 289 */
														obj_t BgL_arg3887z00_1776;

														BgL_typez00_bglt BgL_arg3888z00_1777;

														BgL_variablez00_bglt BgL_arg3889z00_1778;

														BgL_arg3887z00_1776 =
															BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7
															((obj_t) (BgL_nodez00_1759));
														{
															BgL_nodez00_bglt BgL_auxz00_4874;

															BgL_auxz00_4874 =
																(BgL_nodez00_bglt) (BgL_vz00_1762);
															BgL_arg3888z00_1777 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_4874))->
																BgL_typez00);
														}
														BgL_arg3889z00_1778 =
															(((BgL_varz00_bglt) CREF(BgL_vz00_1762))->
															BgL_variablez00);
														BgL_new3296z00_1775 =
															BGl_makezd2varzd2zzast_nodez00
															(BgL_arg3887z00_1776, BgL_arg3888z00_1777,
															BgL_arg3889z00_1778);
													}
													{	/* Ast/alphatize.scm 289 */

														BgL_arg3885z00_1772 = BgL_new3296z00_1775;
												}}
												{	/* Ast/alphatize.scm 290 */
													BgL_nodez00_bglt BgL_arg3890z00_1779;

													BgL_arg3890z00_1779 =
														(((BgL_setqz00_bglt) CREF(BgL_nodez00_1759))->
														BgL_valuez00);
													{	/* Ast/alphatize.scm 290 */
														BgL_nodez00_bglt BgL_res4176z00_3256;

														{	/* Ast/alphatize.scm 290 */
															obj_t BgL_method3435z00_3231;

															{	/* Ast/alphatize.scm 290 */
																BgL_objectz00_bglt BgL_objz00_3232;

																BgL_objz00_3232 =
																	(BgL_objectz00_bglt) (BgL_arg3890z00_1779);
																{	/* Ast/alphatize.scm 290 */
																	long BgL_objzd2classzd2numz00_3233;

																	BgL_objzd2classzd2numz00_3233 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_3232);
																	{	/* Ast/alphatize.scm 290 */
																		obj_t BgL_arg2643z00_3234;

																		BgL_arg2643z00_3234 =
																			PROCEDURE_REF
																			(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																			(int) (((long) 1)));
																		{	/* Ast/alphatize.scm 290 */
																			obj_t BgL_arrayz00_3236;

																			int BgL_offsetz00_3237;

																			BgL_arrayz00_3236 = BgL_arg2643z00_3234;
																			BgL_offsetz00_3237 =
																				(int) (BgL_objzd2classzd2numz00_3233);
																			{	/* Ast/alphatize.scm 290 */
																				long BgL_offsetz00_3238;

																				BgL_offsetz00_3238 =
																					(
																					(long) (BgL_offsetz00_3237) -
																					OBJECT_TYPE);
																				{	/* Ast/alphatize.scm 290 */
																					long BgL_modz00_3239;

																					{	/* Ast/alphatize.scm 290 */
																						int BgL_arg2645z00_3240;

																						BgL_arg2645z00_3240 =
																							(int) (((long) 16));
																						{	/* Ast/alphatize.scm 290 */
																							long BgL_auxz00_4888;

																							BgL_auxz00_4888 =
																								(long) (BgL_arg2645z00_3240);
																							BgL_modz00_3239 =
																								(BgL_offsetz00_3238 /
																								BgL_auxz00_4888);
																					}}
																					{	/* Ast/alphatize.scm 290 */
																						long BgL_restz00_3241;

																						{	/* Ast/alphatize.scm 290 */
																							int BgL_arg2644z00_3242;

																							BgL_arg2644z00_3242 =
																								(int) (((long) 16));
																							{	/* Ast/alphatize.scm 290 */
																								long BgL_auxz00_4892;

																								BgL_auxz00_4892 =
																									(long) (BgL_arg2644z00_3242);
																								BgL_restz00_3241 =
																									(BgL_offsetz00_3238 %
																									BgL_auxz00_4892);
																						}}
																						{	/* Ast/alphatize.scm 290 */

																							BgL_method3435z00_3231 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_3236,
																									(int) (BgL_modz00_3239)),
																								(int) (BgL_restz00_3241));
															}}}}}}}}
															BgL_res4176z00_3256 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3435z00_3231)
																(BgL_method3435z00_3231,
																	(obj_t) (BgL_arg3890z00_1779), BEOA));
														}
														BgL_arg3886z00_1773 = BgL_res4176z00_3256;
												}}
												BgL_new3294z00_1769 =
													BGl_makezd2setqzd2zzast_nodez00(BgL_arg3883z00_1770,
													BgL_arg3884z00_1771, BgL_arg3885z00_1772,
													BgL_arg3886z00_1773);
											}
											{	/* Ast/alphatize.scm 287 */

												return (obj_t) (BgL_new3294z00_1769);
											}
										}
									}
								else
									{	/* Ast/alphatize.scm 285 */
										if (BGl_iszd2azf3z21zz__objectz00(BgL_alphaz00_1764,
												BGl_variablez00zzast_varz00))
											{	/* Ast/alphatize.scm 291 */
												{	/* Ast/alphatize.scm 292 */
													obj_t BgL_arg3892z00_1781;

													obj_t BgL_arg3893z00_1782;

													{
														BgL_nodez00_bglt BgL_auxz00_4907;

														BgL_auxz00_4907 =
															(BgL_nodez00_bglt) (BgL_nodez00_1759);
														BgL_arg3892z00_1781 =
															(((BgL_nodez00_bglt) CREF(BgL_auxz00_4907))->
															BgL_locz00);
													}
													BgL_arg3893z00_1782 = CNST_TABLE_REF(((long) 2));
													BGl_usezd2variablez12zc0zzast_sexpz00(
														(BgL_variablez00_bglt) (BgL_alphaz00_1764),
														BgL_arg3892z00_1781, BgL_arg3893z00_1782);
												}
												{	/* Ast/alphatize.scm 294 */
													BgL_setqz00_bglt BgL_new3298z00_1784;

													{	/* Ast/alphatize.scm 294 */
														obj_t BgL_arg3894z00_1785;

														BgL_typez00_bglt BgL_arg3895z00_1786;

														BgL_varz00_bglt BgL_arg3896z00_1787;

														BgL_nodez00_bglt BgL_arg3897z00_1788;

														BgL_arg3894z00_1785 =
															BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7
															((obj_t) (BgL_nodez00_1759));
														{
															BgL_nodez00_bglt BgL_auxz00_4915;

															BgL_auxz00_4915 =
																(BgL_nodez00_bglt) (BgL_nodez00_1759);
															BgL_arg3895z00_1786 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_4915))->
																BgL_typez00);
														}
														{	/* Ast/alphatize.scm 296 */
															BgL_varz00_bglt BgL_new3300z00_1790;

															{	/* Ast/alphatize.scm 296 */
																obj_t BgL_arg3898z00_1791;

																BgL_typez00_bglt BgL_arg3899z00_1792;

																BgL_arg3898z00_1791 =
																	BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7
																	((obj_t) (BgL_nodez00_1759));
																{
																	BgL_nodez00_bglt BgL_auxz00_4920;

																	BgL_auxz00_4920 =
																		(BgL_nodez00_bglt) (BgL_vz00_1762);
																	BgL_arg3899z00_1792 =
																		(((BgL_nodez00_bglt)
																			CREF(BgL_auxz00_4920))->BgL_typez00);
																}
																BgL_new3300z00_1790 =
																	BGl_makezd2varzd2zzast_nodez00
																	(BgL_arg3898z00_1791, BgL_arg3899z00_1792,
																	(BgL_variablez00_bglt) (BgL_alphaz00_1764));
															}
															{	/* Ast/alphatize.scm 295 */

																BgL_arg3896z00_1787 = BgL_new3300z00_1790;
														}}
														{	/* Ast/alphatize.scm 298 */
															BgL_nodez00_bglt BgL_arg3900z00_1793;

															BgL_arg3900z00_1793 =
																(((BgL_setqz00_bglt) CREF(BgL_nodez00_1759))->
																BgL_valuez00);
															{	/* Ast/alphatize.scm 298 */
																BgL_nodez00_bglt BgL_res4179z00_3288;

																{	/* Ast/alphatize.scm 298 */
																	obj_t BgL_method3435z00_3263;

																	{	/* Ast/alphatize.scm 298 */
																		BgL_objectz00_bglt BgL_objz00_3264;

																		BgL_objz00_3264 =
																			(BgL_objectz00_bglt)
																			(BgL_arg3900z00_1793);
																		{	/* Ast/alphatize.scm 298 */
																			long BgL_objzd2classzd2numz00_3265;

																			BgL_objzd2classzd2numz00_3265 =
																				BGL_OBJECT_CLASS_NUM(BgL_objz00_3264);
																			{	/* Ast/alphatize.scm 298 */
																				obj_t BgL_arg2643z00_3266;

																				BgL_arg2643z00_3266 =
																					PROCEDURE_REF
																					(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																					(int) (((long) 1)));
																				{	/* Ast/alphatize.scm 298 */
																					obj_t BgL_arrayz00_3268;

																					int BgL_offsetz00_3269;

																					BgL_arrayz00_3268 =
																						BgL_arg2643z00_3266;
																					BgL_offsetz00_3269 =
																						(int)
																						(BgL_objzd2classzd2numz00_3265);
																					{	/* Ast/alphatize.scm 298 */
																						long BgL_offsetz00_3270;

																						BgL_offsetz00_3270 =
																							(
																							(long) (BgL_offsetz00_3269) -
																							OBJECT_TYPE);
																						{	/* Ast/alphatize.scm 298 */
																							long BgL_modz00_3271;

																							{	/* Ast/alphatize.scm 298 */
																								int BgL_arg2645z00_3272;

																								BgL_arg2645z00_3272 =
																									(int) (((long) 16));
																								{	/* Ast/alphatize.scm 298 */
																									long BgL_auxz00_4934;

																									BgL_auxz00_4934 =
																										(long)
																										(BgL_arg2645z00_3272);
																									BgL_modz00_3271 =
																										(BgL_offsetz00_3270 /
																										BgL_auxz00_4934);
																							}}
																							{	/* Ast/alphatize.scm 298 */
																								long BgL_restz00_3273;

																								{	/* Ast/alphatize.scm 298 */
																									int BgL_arg2644z00_3274;

																									BgL_arg2644z00_3274 =
																										(int) (((long) 16));
																									{	/* Ast/alphatize.scm 298 */
																										long BgL_auxz00_4938;

																										BgL_auxz00_4938 =
																											(long)
																											(BgL_arg2644z00_3274);
																										BgL_restz00_3273 =
																											(BgL_offsetz00_3270 %
																											BgL_auxz00_4938);
																								}}
																								{	/* Ast/alphatize.scm 298 */

																									BgL_method3435z00_3263 =
																										VECTOR_REF(VECTOR_REF
																										(BgL_arrayz00_3268,
																											(int) (BgL_modz00_3271)),
																										(int) (BgL_restz00_3273));
																	}}}}}}}}
																	BgL_res4179z00_3288 =
																		(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																		(BgL_method3435z00_3263)
																		(BgL_method3435z00_3263,
																			(obj_t) (BgL_arg3900z00_1793), BEOA));
																}
																BgL_arg3897z00_1788 = BgL_res4179z00_3288;
														}}
														BgL_new3298z00_1784 =
															BGl_makezd2setqzd2zzast_nodez00
															(BgL_arg3894z00_1785, BgL_arg3895z00_1786,
															BgL_arg3896z00_1787, BgL_arg3897z00_1788);
													}
													{	/* Ast/alphatize.scm 293 */

														return (obj_t) (BgL_new3298z00_1784);
													}
												}
											}
										else
											{	/* Ast/alphatize.scm 291 */
												return
													BGl_internalzd2errorzd2zztools_errorz00
													(BGl_string4258z00zzast_alphatiza7eza7,
													BGl_string4259z00zzast_alphatiza7eza7,
													BGl_shapez00zztools_shapez00((obj_t)
														(BgL_nodez00_1759)));
											}
									}
							}
						}
					}
				}
			}
		}
	}



/* do-alphatize-cast3471 */
	obj_t BGl_dozd2alphatiza7ezd2cast3471za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3930, obj_t BgL_nodez00_3931)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 272 */
			{
				BgL_castz00_bglt BgL_nodez00_1748;

				{	/* Ast/alphatize.scm 273 */
					BgL_castz00_bglt BgL_auxz00_4955;

					BgL_nodez00_1748 = (BgL_castz00_bglt) (BgL_nodez00_3931);
					{	/* Ast/alphatize.scm 274 */
						BgL_castz00_bglt BgL_new3292z00_1752;

						{	/* Ast/alphatize.scm 274 */
							obj_t BgL_arg3875z00_1753;

							BgL_typez00_bglt BgL_arg3876z00_1754;

							BgL_nodez00_bglt BgL_arg3877z00_1755;

							BgL_arg3875z00_1753 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_1748));
							{
								BgL_nodez00_bglt BgL_auxz00_4958;

								BgL_auxz00_4958 = (BgL_nodez00_bglt) (BgL_nodez00_1748);
								BgL_arg3876z00_1754 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4958))->BgL_typez00);
							}
							{	/* Ast/alphatize.scm 275 */
								BgL_nodez00_bglt BgL_arg3878z00_1756;

								BgL_arg3878z00_1756 =
									(((BgL_castz00_bglt) CREF(BgL_nodez00_1748))->BgL_argz00);
								{	/* Ast/alphatize.scm 275 */
									BgL_nodez00_bglt BgL_res4173z00_3221;

									{	/* Ast/alphatize.scm 275 */
										obj_t BgL_method3435z00_3196;

										{	/* Ast/alphatize.scm 275 */
											BgL_objectz00_bglt BgL_objz00_3197;

											BgL_objz00_3197 =
												(BgL_objectz00_bglt) (BgL_arg3878z00_1756);
											{	/* Ast/alphatize.scm 275 */
												long BgL_objzd2classzd2numz00_3198;

												BgL_objzd2classzd2numz00_3198 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3197);
												{	/* Ast/alphatize.scm 275 */
													obj_t BgL_arg2643z00_3199;

													BgL_arg2643z00_3199 =
														PROCEDURE_REF
														(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
														(int) (((long) 1)));
													{	/* Ast/alphatize.scm 275 */
														obj_t BgL_arrayz00_3201;

														int BgL_offsetz00_3202;

														BgL_arrayz00_3201 = BgL_arg2643z00_3199;
														BgL_offsetz00_3202 =
															(int) (BgL_objzd2classzd2numz00_3198);
														{	/* Ast/alphatize.scm 275 */
															long BgL_offsetz00_3203;

															BgL_offsetz00_3203 =
																((long) (BgL_offsetz00_3202) - OBJECT_TYPE);
															{	/* Ast/alphatize.scm 275 */
																long BgL_modz00_3204;

																{	/* Ast/alphatize.scm 275 */
																	int BgL_arg2645z00_3205;

																	BgL_arg2645z00_3205 = (int) (((long) 16));
																	{	/* Ast/alphatize.scm 275 */
																		long BgL_auxz00_4970;

																		BgL_auxz00_4970 =
																			(long) (BgL_arg2645z00_3205);
																		BgL_modz00_3204 =
																			(BgL_offsetz00_3203 / BgL_auxz00_4970);
																}}
																{	/* Ast/alphatize.scm 275 */
																	long BgL_restz00_3206;

																	{	/* Ast/alphatize.scm 275 */
																		int BgL_arg2644z00_3207;

																		BgL_arg2644z00_3207 = (int) (((long) 16));
																		{	/* Ast/alphatize.scm 275 */
																			long BgL_auxz00_4974;

																			BgL_auxz00_4974 =
																				(long) (BgL_arg2644z00_3207);
																			BgL_restz00_3206 =
																				(BgL_offsetz00_3203 % BgL_auxz00_4974);
																	}}
																	{	/* Ast/alphatize.scm 275 */

																		BgL_method3435z00_3196 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3201,
																				(int) (BgL_modz00_3204)),
																			(int) (BgL_restz00_3206));
										}}}}}}}}
										BgL_res4173z00_3221 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3435z00_3196) (BgL_method3435z00_3196,
												(obj_t) (BgL_arg3878z00_1756), BEOA));
									}
									BgL_arg3877z00_1755 = BgL_res4173z00_3221;
							}}
							BgL_new3292z00_1752 =
								BGl_makezd2castzd2zzast_nodez00(BgL_arg3875z00_1753,
								BgL_arg3876z00_1754, BgL_arg3877z00_1755);
						}
						{	/* Ast/alphatize.scm 273 */

							BgL_auxz00_4955 = BgL_new3292z00_1752;
					}}
					return (obj_t) (BgL_auxz00_4955);
				}
			}
		}
	}



/* do-alphatize-isa3469 */
	obj_t BGl_dozd2alphatiza7ezd2isa3469za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3932, obj_t BgL_nodez00_3933)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 264 */
			{
				BgL_isaz00_bglt BgL_nodez00_1730;

				{	/* Ast/alphatize.scm 265 */
					BgL_isaz00_bglt BgL_auxz00_4988;

					BgL_nodez00_1730 = (BgL_isaz00_bglt) (BgL_nodez00_3933);
					{	/* Ast/alphatize.scm 267 */
						BgL_isaz00_bglt BgL_new3290z00_1734;

						{	/* Ast/alphatize.scm 267 */
							obj_t BgL_arg3863z00_1735;

							BgL_typez00_bglt BgL_arg3864z00_1736;

							obj_t BgL_arg3865z00_1737;

							obj_t BgL_arg3866z00_1738;

							obj_t BgL_arg3867z00_1739;

							obj_t BgL_arg3868z00_1740;

							BgL_typez00_bglt BgL_arg3869z00_1741;

							BgL_arg3863z00_1735 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_1730));
							{
								BgL_nodez00_bglt BgL_auxz00_4991;

								BgL_auxz00_4991 = (BgL_nodez00_bglt) (BgL_nodez00_1730);
								BgL_arg3864z00_1736 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_4991))->BgL_typez00);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_4994;

								BgL_auxz00_4994 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1730);
								BgL_arg3865z00_1737 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_4994))->
									BgL_sidezd2effectzf3z21);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_4997;

								BgL_auxz00_4997 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1730);
								BgL_arg3866z00_1738 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_4997))->
									BgL_keyz00);
							}
							{	/* Ast/alphatize.scm 266 */
								BgL_nodez00_bglt BgL_arg3870z00_1742;

								{	/* Ast/alphatize.scm 266 */
									obj_t BgL_arg3872z00_1744;

									{	/* Ast/alphatize.scm 266 */
										obj_t BgL_pairz00_3161;

										{
											BgL_externz00_bglt BgL_auxz00_5000;

											BgL_auxz00_5000 = (BgL_externz00_bglt) (BgL_nodez00_1730);
											BgL_pairz00_3161 =
												(((BgL_externz00_bglt) CREF(BgL_auxz00_5000))->
												BgL_exprza2za2);
										}
										BgL_arg3872z00_1744 = CAR(BgL_pairz00_3161);
									}
									{	/* Ast/alphatize.scm 266 */
										BgL_nodez00_bglt BgL_res4169z00_3188;

										{	/* Ast/alphatize.scm 266 */
											BgL_nodez00_bglt BgL_nodez00_3162;

											BgL_nodez00_3162 =
												(BgL_nodez00_bglt) (BgL_arg3872z00_1744);
											{	/* Ast/alphatize.scm 266 */
												obj_t BgL_method3435z00_3163;

												{	/* Ast/alphatize.scm 266 */
													BgL_objectz00_bglt BgL_objz00_3164;

													BgL_objz00_3164 =
														(BgL_objectz00_bglt) (BgL_nodez00_3162);
													{	/* Ast/alphatize.scm 266 */
														long BgL_objzd2classzd2numz00_3165;

														BgL_objzd2classzd2numz00_3165 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_3164);
														{	/* Ast/alphatize.scm 266 */
															obj_t BgL_arg2643z00_3166;

															BgL_arg2643z00_3166 =
																PROCEDURE_REF
																(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																(int) (((long) 1)));
															{	/* Ast/alphatize.scm 266 */
																obj_t BgL_arrayz00_3168;

																int BgL_offsetz00_3169;

																BgL_arrayz00_3168 = BgL_arg2643z00_3166;
																BgL_offsetz00_3169 =
																	(int) (BgL_objzd2classzd2numz00_3165);
																{	/* Ast/alphatize.scm 266 */
																	long BgL_offsetz00_3170;

																	BgL_offsetz00_3170 =
																		((long) (BgL_offsetz00_3169) - OBJECT_TYPE);
																	{	/* Ast/alphatize.scm 266 */
																		long BgL_modz00_3171;

																		{	/* Ast/alphatize.scm 266 */
																			int BgL_arg2645z00_3172;

																			BgL_arg2645z00_3172 = (int) (((long) 16));
																			{	/* Ast/alphatize.scm 266 */
																				long BgL_auxz00_5013;

																				BgL_auxz00_5013 =
																					(long) (BgL_arg2645z00_3172);
																				BgL_modz00_3171 =
																					(BgL_offsetz00_3170 /
																					BgL_auxz00_5013);
																		}}
																		{	/* Ast/alphatize.scm 266 */
																			long BgL_restz00_3173;

																			{	/* Ast/alphatize.scm 266 */
																				int BgL_arg2644z00_3174;

																				BgL_arg2644z00_3174 =
																					(int) (((long) 16));
																				{	/* Ast/alphatize.scm 266 */
																					long BgL_auxz00_5017;

																					BgL_auxz00_5017 =
																						(long) (BgL_arg2644z00_3174);
																					BgL_restz00_3173 =
																						(BgL_offsetz00_3170 %
																						BgL_auxz00_5017);
																			}}
																			{	/* Ast/alphatize.scm 266 */

																				BgL_method3435z00_3163 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_3168,
																						(int) (BgL_modz00_3171)),
																					(int) (BgL_restz00_3173));
												}}}}}}}}
												BgL_res4169z00_3188 =
													(BgL_nodez00_bglt) (PROCEDURE_ENTRY
													(BgL_method3435z00_3163) (BgL_method3435z00_3163,
														(obj_t) (BgL_nodez00_3162), BEOA));
										}}
										BgL_arg3870z00_1742 = BgL_res4169z00_3188;
								}}
								{	/* Ast/alphatize.scm 266 */
									obj_t BgL_list3871z00_1743;

									BgL_list3871z00_1743 =
										MAKE_PAIR((obj_t) (BgL_arg3870z00_1742), BNIL);
									BgL_arg3867z00_1739 = BgL_list3871z00_1743;
							}}
							{
								BgL_externz00_bglt BgL_auxz00_5030;

								BgL_auxz00_5030 = (BgL_externz00_bglt) (BgL_nodez00_1730);
								BgL_arg3868z00_1740 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_5030))->BgL_effectz00);
							}
							BgL_arg3869z00_1741 =
								(((BgL_isaz00_bglt) CREF(BgL_nodez00_1730))->BgL_classz00);
							BgL_new3290z00_1734 =
								BGl_makezd2isazd2zzast_nodez00(BgL_arg3863z00_1735,
								BgL_arg3864z00_1736, BgL_arg3865z00_1737, BgL_arg3866z00_1738,
								BgL_arg3867z00_1739, BgL_arg3868z00_1740, BgL_arg3869z00_1741);
						}
						{	/* Ast/alphatize.scm 265 */

							BgL_auxz00_4988 = BgL_new3290z00_1734;
					}}
					return (obj_t) (BgL_auxz00_4988);
				}
			}
		}
	}



/* do-alphatize-valloc3467 */
	obj_t BGl_dozd2alphatiza7ezd2valloc3467za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3934, obj_t BgL_nodez00_3935)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 256 */
			{
				BgL_vallocz00_bglt BgL_nodez00_1696;

				{	/* Ast/alphatize.scm 257 */
					BgL_vallocz00_bglt BgL_auxz00_5037;

					BgL_nodez00_1696 = (BgL_vallocz00_bglt) (BgL_nodez00_3935);
					{	/* Ast/alphatize.scm 258 */
						BgL_vallocz00_bglt BgL_new3288z00_1700;

						{	/* Ast/alphatize.scm 258 */
							obj_t BgL_arg3843z00_1701;

							BgL_typez00_bglt BgL_arg3844z00_1702;

							obj_t BgL_arg3845z00_1703;

							obj_t BgL_arg3846z00_1704;

							obj_t BgL_arg3847z00_1705;

							obj_t BgL_arg3848z00_1706;

							obj_t BgL_arg3849z00_1707;

							BgL_typez00_bglt BgL_arg3850z00_1708;

							BgL_typez00_bglt BgL_arg3851z00_1709;

							BgL_arg3843z00_1701 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_1696));
							{
								BgL_nodez00_bglt BgL_auxz00_5040;

								BgL_auxz00_5040 = (BgL_nodez00_bglt) (BgL_nodez00_1696);
								BgL_arg3844z00_1702 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_5040))->BgL_typez00);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_5043;

								BgL_auxz00_5043 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1696);
								BgL_arg3845z00_1703 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_5043))->
									BgL_sidezd2effectzf3z21);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_5046;

								BgL_auxz00_5046 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1696);
								BgL_arg3846z00_1704 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_5046))->
									BgL_keyz00);
							}
							{	/* Ast/alphatize.scm 259 */
								obj_t BgL_l3392z00_1710;

								{
									BgL_externz00_bglt BgL_auxz00_5049;

									BgL_auxz00_5049 = (BgL_externz00_bglt) (BgL_nodez00_1696);
									BgL_l3392z00_1710 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_5049))->
										BgL_exprza2za2);
								}
								if (NULLP(BgL_l3392z00_1710))
									{	/* Ast/alphatize.scm 259 */
										BgL_arg3847z00_1705 = BNIL;
									}
								else
									{	/* Ast/alphatize.scm 259 */
										obj_t BgL_head3394z00_1712;

										{	/* Ast/alphatize.scm 259 */
											BgL_nodez00_bglt BgL_arg3859z00_1725;

											{	/* Ast/alphatize.scm 259 */
												obj_t BgL_arg3861z00_1727;

												BgL_arg3861z00_1727 = CAR(BgL_l3392z00_1710);
												{	/* Ast/alphatize.scm 259 */
													BgL_nodez00_bglt BgL_res4163z00_3115;

													{	/* Ast/alphatize.scm 259 */
														BgL_nodez00_bglt BgL_nodez00_3089;

														BgL_nodez00_3089 =
															(BgL_nodez00_bglt) (BgL_arg3861z00_1727);
														{	/* Ast/alphatize.scm 259 */
															obj_t BgL_method3435z00_3090;

															{	/* Ast/alphatize.scm 259 */
																BgL_objectz00_bglt BgL_objz00_3091;

																BgL_objz00_3091 =
																	(BgL_objectz00_bglt) (BgL_nodez00_3089);
																{	/* Ast/alphatize.scm 259 */
																	long BgL_objzd2classzd2numz00_3092;

																	BgL_objzd2classzd2numz00_3092 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_3091);
																	{	/* Ast/alphatize.scm 259 */
																		obj_t BgL_arg2643z00_3093;

																		BgL_arg2643z00_3093 =
																			PROCEDURE_REF
																			(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																			(int) (((long) 1)));
																		{	/* Ast/alphatize.scm 259 */
																			obj_t BgL_arrayz00_3095;

																			int BgL_offsetz00_3096;

																			BgL_arrayz00_3095 = BgL_arg2643z00_3093;
																			BgL_offsetz00_3096 =
																				(int) (BgL_objzd2classzd2numz00_3092);
																			{	/* Ast/alphatize.scm 259 */
																				long BgL_offsetz00_3097;

																				BgL_offsetz00_3097 =
																					(
																					(long) (BgL_offsetz00_3096) -
																					OBJECT_TYPE);
																				{	/* Ast/alphatize.scm 259 */
																					long BgL_modz00_3098;

																					{	/* Ast/alphatize.scm 259 */
																						int BgL_arg2645z00_3099;

																						BgL_arg2645z00_3099 =
																							(int) (((long) 16));
																						{	/* Ast/alphatize.scm 259 */
																							long BgL_auxz00_5064;

																							BgL_auxz00_5064 =
																								(long) (BgL_arg2645z00_3099);
																							BgL_modz00_3098 =
																								(BgL_offsetz00_3097 /
																								BgL_auxz00_5064);
																					}}
																					{	/* Ast/alphatize.scm 259 */
																						long BgL_restz00_3100;

																						{	/* Ast/alphatize.scm 259 */
																							int BgL_arg2644z00_3101;

																							BgL_arg2644z00_3101 =
																								(int) (((long) 16));
																							{	/* Ast/alphatize.scm 259 */
																								long BgL_auxz00_5068;

																								BgL_auxz00_5068 =
																									(long) (BgL_arg2644z00_3101);
																								BgL_restz00_3100 =
																									(BgL_offsetz00_3097 %
																									BgL_auxz00_5068);
																						}}
																						{	/* Ast/alphatize.scm 259 */

																							BgL_method3435z00_3090 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_3095,
																									(int) (BgL_modz00_3098)),
																								(int) (BgL_restz00_3100));
															}}}}}}}}
															BgL_res4163z00_3115 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3435z00_3090)
																(BgL_method3435z00_3090,
																	(obj_t) (BgL_nodez00_3089), BEOA));
													}}
													BgL_arg3859z00_1725 = BgL_res4163z00_3115;
											}}
											BgL_head3394z00_1712 =
												MAKE_PAIR((obj_t) (BgL_arg3859z00_1725), BNIL);
										}
										{	/* Ast/alphatize.scm 259 */
											obj_t BgL_g3397z00_1713;

											BgL_g3397z00_1713 = CDR(BgL_l3392z00_1710);
											{
												obj_t BgL_l3392z00_1715;

												obj_t BgL_tail3395z00_1716;

												BgL_l3392z00_1715 = BgL_g3397z00_1713;
												BgL_tail3395z00_1716 = BgL_head3394z00_1712;
											BgL_zc3anonymousza33853ze3z83_1717:
												if (NULLP(BgL_l3392z00_1715))
													{	/* Ast/alphatize.scm 259 */
														BgL_arg3847z00_1705 = BgL_head3394z00_1712;
													}
												else
													{	/* Ast/alphatize.scm 259 */
														obj_t BgL_newtail3396z00_1719;

														{	/* Ast/alphatize.scm 259 */
															BgL_nodez00_bglt BgL_arg3856z00_1721;

															{	/* Ast/alphatize.scm 259 */
																obj_t BgL_arg3858z00_1723;

																BgL_arg3858z00_1723 = CAR(BgL_l3392z00_1715);
																{	/* Ast/alphatize.scm 259 */
																	BgL_nodez00_bglt BgL_res4166z00_3147;

																	{	/* Ast/alphatize.scm 259 */
																		BgL_nodez00_bglt BgL_nodez00_3121;

																		BgL_nodez00_3121 =
																			(BgL_nodez00_bglt) (BgL_arg3858z00_1723);
																		{	/* Ast/alphatize.scm 259 */
																			obj_t BgL_method3435z00_3122;

																			{	/* Ast/alphatize.scm 259 */
																				BgL_objectz00_bglt BgL_objz00_3123;

																				BgL_objz00_3123 =
																					(BgL_objectz00_bglt)
																					(BgL_nodez00_3121);
																				{	/* Ast/alphatize.scm 259 */
																					long BgL_objzd2classzd2numz00_3124;

																					BgL_objzd2classzd2numz00_3124 =
																						BGL_OBJECT_CLASS_NUM
																						(BgL_objz00_3123);
																					{	/* Ast/alphatize.scm 259 */
																						obj_t BgL_arg2643z00_3125;

																						BgL_arg2643z00_3125 =
																							PROCEDURE_REF
																							(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																							(int) (((long) 1)));
																						{	/* Ast/alphatize.scm 259 */
																							obj_t BgL_arrayz00_3127;

																							int BgL_offsetz00_3128;

																							BgL_arrayz00_3127 =
																								BgL_arg2643z00_3125;
																							BgL_offsetz00_3128 =
																								(int)
																								(BgL_objzd2classzd2numz00_3124);
																							{	/* Ast/alphatize.scm 259 */
																								long BgL_offsetz00_3129;

																								BgL_offsetz00_3129 =
																									(
																									(long) (BgL_offsetz00_3128) -
																									OBJECT_TYPE);
																								{	/* Ast/alphatize.scm 259 */
																									long BgL_modz00_3130;

																									{	/* Ast/alphatize.scm 259 */
																										int BgL_arg2645z00_3131;

																										BgL_arg2645z00_3131 =
																											(int) (((long) 16));
																										{	/* Ast/alphatize.scm 259 */
																											long BgL_auxz00_5094;

																											BgL_auxz00_5094 =
																												(long)
																												(BgL_arg2645z00_3131);
																											BgL_modz00_3130 =
																												(BgL_offsetz00_3129 /
																												BgL_auxz00_5094);
																									}}
																									{	/* Ast/alphatize.scm 259 */
																										long BgL_restz00_3132;

																										{	/* Ast/alphatize.scm 259 */
																											int BgL_arg2644z00_3133;

																											BgL_arg2644z00_3133 =
																												(int) (((long) 16));
																											{	/* Ast/alphatize.scm 259 */
																												long BgL_auxz00_5098;

																												BgL_auxz00_5098 =
																													(long)
																													(BgL_arg2644z00_3133);
																												BgL_restz00_3132 =
																													(BgL_offsetz00_3129 %
																													BgL_auxz00_5098);
																										}}
																										{	/* Ast/alphatize.scm 259 */

																											BgL_method3435z00_3122 =
																												VECTOR_REF(VECTOR_REF
																												(BgL_arrayz00_3127,
																													(int)
																													(BgL_modz00_3130)),
																												(int)
																												(BgL_restz00_3132));
																			}}}}}}}}
																			BgL_res4166z00_3147 =
																				(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																				(BgL_method3435z00_3122)
																				(BgL_method3435z00_3122,
																					(obj_t) (BgL_nodez00_3121), BEOA));
																	}}
																	BgL_arg3856z00_1721 = BgL_res4166z00_3147;
															}}
															BgL_newtail3396z00_1719 =
																MAKE_PAIR((obj_t) (BgL_arg3856z00_1721), BNIL);
														}
														SET_CDR(BgL_tail3395z00_1716,
															BgL_newtail3396z00_1719);
														{
															obj_t BgL_tail3395z00_5114;

															obj_t BgL_l3392z00_5112;

															BgL_l3392z00_5112 = CDR(BgL_l3392z00_1715);
															BgL_tail3395z00_5114 = BgL_newtail3396z00_1719;
															BgL_tail3395z00_1716 = BgL_tail3395z00_5114;
															BgL_l3392z00_1715 = BgL_l3392z00_5112;
															goto BgL_zc3anonymousza33853ze3z83_1717;
														}
													}
											}
										}
									}
							}
							{
								BgL_externz00_bglt BgL_auxz00_5115;

								BgL_auxz00_5115 = (BgL_externz00_bglt) (BgL_nodez00_1696);
								BgL_arg3848z00_1706 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_5115))->BgL_effectz00);
							}
							BgL_arg3849z00_1707 =
								(((BgL_vallocz00_bglt) CREF(BgL_nodez00_1696))->
								BgL_czd2heapzd2formatz00);
							BgL_arg3850z00_1708 =
								(((BgL_vallocz00_bglt) CREF(BgL_nodez00_1696))->BgL_ftypez00);
							BgL_arg3851z00_1709 =
								(((BgL_vallocz00_bglt) CREF(BgL_nodez00_1696))->BgL_otypez00);
							BgL_new3288z00_1700 =
								BGl_makezd2valloczd2zzast_nodez00(BgL_arg3843z00_1701,
								BgL_arg3844z00_1702, BgL_arg3845z00_1703, BgL_arg3846z00_1704,
								BgL_arg3847z00_1705, BgL_arg3848z00_1706, BgL_arg3849z00_1707,
								BgL_arg3850z00_1708, BgL_arg3851z00_1709);
						}
						{	/* Ast/alphatize.scm 257 */

							BgL_auxz00_5037 = BgL_new3288z00_1700;
						}
					}
					return (obj_t) (BgL_auxz00_5037);
				}
			}
		}
	}



/* do-alphatize-vset!3465 */
	obj_t BGl_dozd2alphatiza7ezd2vsetz123465zb5zzast_alphatiza7eza7(obj_t
		BgL_envz00_3936, obj_t BgL_nodez00_3937)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 248 */
			{
				BgL_vsetz12z12_bglt BgL_nodez00_1660;

				{	/* Ast/alphatize.scm 249 */
					BgL_vsetz12z12_bglt BgL_auxz00_5124;

					BgL_nodez00_1660 = (BgL_vsetz12z12_bglt) (BgL_nodez00_3937);
					{	/* Ast/alphatize.scm 250 */
						BgL_vsetz12z12_bglt BgL_new3286z00_1664;

						{	/* Ast/alphatize.scm 250 */
							obj_t BgL_arg3821z00_1665;

							BgL_typez00_bglt BgL_arg3822z00_1666;

							obj_t BgL_arg3823z00_1667;

							obj_t BgL_arg3824z00_1668;

							obj_t BgL_arg3825z00_1669;

							obj_t BgL_arg3826z00_1670;

							obj_t BgL_arg3827z00_1671;

							BgL_typez00_bglt BgL_arg3828z00_1672;

							BgL_typez00_bglt BgL_arg3829z00_1673;

							BgL_typez00_bglt BgL_arg3830z00_1674;

							bool_t BgL_arg3831z00_1675;

							BgL_arg3821z00_1665 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_1660));
							{
								BgL_nodez00_bglt BgL_auxz00_5127;

								BgL_auxz00_5127 = (BgL_nodez00_bglt) (BgL_nodez00_1660);
								BgL_arg3822z00_1666 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_5127))->BgL_typez00);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_5130;

								BgL_auxz00_5130 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1660);
								BgL_arg3823z00_1667 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_5130))->
									BgL_sidezd2effectzf3z21);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_5133;

								BgL_auxz00_5133 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1660);
								BgL_arg3824z00_1668 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_5133))->
									BgL_keyz00);
							}
							{	/* Ast/alphatize.scm 251 */
								obj_t BgL_l3386z00_1676;

								{
									BgL_externz00_bglt BgL_auxz00_5136;

									BgL_auxz00_5136 = (BgL_externz00_bglt) (BgL_nodez00_1660);
									BgL_l3386z00_1676 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_5136))->
										BgL_exprza2za2);
								}
								if (NULLP(BgL_l3386z00_1676))
									{	/* Ast/alphatize.scm 251 */
										BgL_arg3825z00_1669 = BNIL;
									}
								else
									{	/* Ast/alphatize.scm 251 */
										obj_t BgL_head3388z00_1678;

										{	/* Ast/alphatize.scm 251 */
											BgL_nodez00_bglt BgL_arg3839z00_1691;

											{	/* Ast/alphatize.scm 251 */
												obj_t BgL_arg3841z00_1693;

												BgL_arg3841z00_1693 = CAR(BgL_l3386z00_1676);
												{	/* Ast/alphatize.scm 251 */
													BgL_nodez00_bglt BgL_res4157z00_3039;

													{	/* Ast/alphatize.scm 251 */
														BgL_nodez00_bglt BgL_nodez00_3013;

														BgL_nodez00_3013 =
															(BgL_nodez00_bglt) (BgL_arg3841z00_1693);
														{	/* Ast/alphatize.scm 251 */
															obj_t BgL_method3435z00_3014;

															{	/* Ast/alphatize.scm 251 */
																BgL_objectz00_bglt BgL_objz00_3015;

																BgL_objz00_3015 =
																	(BgL_objectz00_bglt) (BgL_nodez00_3013);
																{	/* Ast/alphatize.scm 251 */
																	long BgL_objzd2classzd2numz00_3016;

																	BgL_objzd2classzd2numz00_3016 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_3015);
																	{	/* Ast/alphatize.scm 251 */
																		obj_t BgL_arg2643z00_3017;

																		BgL_arg2643z00_3017 =
																			PROCEDURE_REF
																			(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																			(int) (((long) 1)));
																		{	/* Ast/alphatize.scm 251 */
																			obj_t BgL_arrayz00_3019;

																			int BgL_offsetz00_3020;

																			BgL_arrayz00_3019 = BgL_arg2643z00_3017;
																			BgL_offsetz00_3020 =
																				(int) (BgL_objzd2classzd2numz00_3016);
																			{	/* Ast/alphatize.scm 251 */
																				long BgL_offsetz00_3021;

																				BgL_offsetz00_3021 =
																					(
																					(long) (BgL_offsetz00_3020) -
																					OBJECT_TYPE);
																				{	/* Ast/alphatize.scm 251 */
																					long BgL_modz00_3022;

																					{	/* Ast/alphatize.scm 251 */
																						int BgL_arg2645z00_3023;

																						BgL_arg2645z00_3023 =
																							(int) (((long) 16));
																						{	/* Ast/alphatize.scm 251 */
																							long BgL_auxz00_5151;

																							BgL_auxz00_5151 =
																								(long) (BgL_arg2645z00_3023);
																							BgL_modz00_3022 =
																								(BgL_offsetz00_3021 /
																								BgL_auxz00_5151);
																					}}
																					{	/* Ast/alphatize.scm 251 */
																						long BgL_restz00_3024;

																						{	/* Ast/alphatize.scm 251 */
																							int BgL_arg2644z00_3025;

																							BgL_arg2644z00_3025 =
																								(int) (((long) 16));
																							{	/* Ast/alphatize.scm 251 */
																								long BgL_auxz00_5155;

																								BgL_auxz00_5155 =
																									(long) (BgL_arg2644z00_3025);
																								BgL_restz00_3024 =
																									(BgL_offsetz00_3021 %
																									BgL_auxz00_5155);
																						}}
																						{	/* Ast/alphatize.scm 251 */

																							BgL_method3435z00_3014 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_3019,
																									(int) (BgL_modz00_3022)),
																								(int) (BgL_restz00_3024));
															}}}}}}}}
															BgL_res4157z00_3039 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3435z00_3014)
																(BgL_method3435z00_3014,
																	(obj_t) (BgL_nodez00_3013), BEOA));
													}}
													BgL_arg3839z00_1691 = BgL_res4157z00_3039;
											}}
											BgL_head3388z00_1678 =
												MAKE_PAIR((obj_t) (BgL_arg3839z00_1691), BNIL);
										}
										{	/* Ast/alphatize.scm 251 */
											obj_t BgL_g3391z00_1679;

											BgL_g3391z00_1679 = CDR(BgL_l3386z00_1676);
											{
												obj_t BgL_l3386z00_1681;

												obj_t BgL_tail3389z00_1682;

												BgL_l3386z00_1681 = BgL_g3391z00_1679;
												BgL_tail3389z00_1682 = BgL_head3388z00_1678;
											BgL_zc3anonymousza33833ze3z83_1683:
												if (NULLP(BgL_l3386z00_1681))
													{	/* Ast/alphatize.scm 251 */
														BgL_arg3825z00_1669 = BgL_head3388z00_1678;
													}
												else
													{	/* Ast/alphatize.scm 251 */
														obj_t BgL_newtail3390z00_1685;

														{	/* Ast/alphatize.scm 251 */
															BgL_nodez00_bglt BgL_arg3836z00_1687;

															{	/* Ast/alphatize.scm 251 */
																obj_t BgL_arg3838z00_1689;

																BgL_arg3838z00_1689 = CAR(BgL_l3386z00_1681);
																{	/* Ast/alphatize.scm 251 */
																	BgL_nodez00_bglt BgL_res4160z00_3071;

																	{	/* Ast/alphatize.scm 251 */
																		BgL_nodez00_bglt BgL_nodez00_3045;

																		BgL_nodez00_3045 =
																			(BgL_nodez00_bglt) (BgL_arg3838z00_1689);
																		{	/* Ast/alphatize.scm 251 */
																			obj_t BgL_method3435z00_3046;

																			{	/* Ast/alphatize.scm 251 */
																				BgL_objectz00_bglt BgL_objz00_3047;

																				BgL_objz00_3047 =
																					(BgL_objectz00_bglt)
																					(BgL_nodez00_3045);
																				{	/* Ast/alphatize.scm 251 */
																					long BgL_objzd2classzd2numz00_3048;

																					BgL_objzd2classzd2numz00_3048 =
																						BGL_OBJECT_CLASS_NUM
																						(BgL_objz00_3047);
																					{	/* Ast/alphatize.scm 251 */
																						obj_t BgL_arg2643z00_3049;

																						BgL_arg2643z00_3049 =
																							PROCEDURE_REF
																							(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																							(int) (((long) 1)));
																						{	/* Ast/alphatize.scm 251 */
																							obj_t BgL_arrayz00_3051;

																							int BgL_offsetz00_3052;

																							BgL_arrayz00_3051 =
																								BgL_arg2643z00_3049;
																							BgL_offsetz00_3052 =
																								(int)
																								(BgL_objzd2classzd2numz00_3048);
																							{	/* Ast/alphatize.scm 251 */
																								long BgL_offsetz00_3053;

																								BgL_offsetz00_3053 =
																									(
																									(long) (BgL_offsetz00_3052) -
																									OBJECT_TYPE);
																								{	/* Ast/alphatize.scm 251 */
																									long BgL_modz00_3054;

																									{	/* Ast/alphatize.scm 251 */
																										int BgL_arg2645z00_3055;

																										BgL_arg2645z00_3055 =
																											(int) (((long) 16));
																										{	/* Ast/alphatize.scm 251 */
																											long BgL_auxz00_5181;

																											BgL_auxz00_5181 =
																												(long)
																												(BgL_arg2645z00_3055);
																											BgL_modz00_3054 =
																												(BgL_offsetz00_3053 /
																												BgL_auxz00_5181);
																									}}
																									{	/* Ast/alphatize.scm 251 */
																										long BgL_restz00_3056;

																										{	/* Ast/alphatize.scm 251 */
																											int BgL_arg2644z00_3057;

																											BgL_arg2644z00_3057 =
																												(int) (((long) 16));
																											{	/* Ast/alphatize.scm 251 */
																												long BgL_auxz00_5185;

																												BgL_auxz00_5185 =
																													(long)
																													(BgL_arg2644z00_3057);
																												BgL_restz00_3056 =
																													(BgL_offsetz00_3053 %
																													BgL_auxz00_5185);
																										}}
																										{	/* Ast/alphatize.scm 251 */

																											BgL_method3435z00_3046 =
																												VECTOR_REF(VECTOR_REF
																												(BgL_arrayz00_3051,
																													(int)
																													(BgL_modz00_3054)),
																												(int)
																												(BgL_restz00_3056));
																			}}}}}}}}
																			BgL_res4160z00_3071 =
																				(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																				(BgL_method3435z00_3046)
																				(BgL_method3435z00_3046,
																					(obj_t) (BgL_nodez00_3045), BEOA));
																	}}
																	BgL_arg3836z00_1687 = BgL_res4160z00_3071;
															}}
															BgL_newtail3390z00_1685 =
																MAKE_PAIR((obj_t) (BgL_arg3836z00_1687), BNIL);
														}
														SET_CDR(BgL_tail3389z00_1682,
															BgL_newtail3390z00_1685);
														{
															obj_t BgL_tail3389z00_5201;

															obj_t BgL_l3386z00_5199;

															BgL_l3386z00_5199 = CDR(BgL_l3386z00_1681);
															BgL_tail3389z00_5201 = BgL_newtail3390z00_1685;
															BgL_tail3389z00_1682 = BgL_tail3389z00_5201;
															BgL_l3386z00_1681 = BgL_l3386z00_5199;
															goto BgL_zc3anonymousza33833ze3z83_1683;
														}
													}
											}
										}
									}
							}
							{
								BgL_externz00_bglt BgL_auxz00_5202;

								BgL_auxz00_5202 = (BgL_externz00_bglt) (BgL_nodez00_1660);
								BgL_arg3826z00_1670 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_5202))->BgL_effectz00);
							}
							BgL_arg3827z00_1671 =
								(((BgL_vsetz12z12_bglt) CREF(BgL_nodez00_1660))->
								BgL_czd2formatzd2);
							BgL_arg3828z00_1672 =
								(((BgL_vsetz12z12_bglt) CREF(BgL_nodez00_1660))->BgL_ftypez00);
							BgL_arg3829z00_1673 =
								(((BgL_vsetz12z12_bglt) CREF(BgL_nodez00_1660))->BgL_otypez00);
							BgL_arg3830z00_1674 =
								(((BgL_vsetz12z12_bglt) CREF(BgL_nodez00_1660))->BgL_vtypez00);
							BgL_arg3831z00_1675 =
								(((BgL_vsetz12z12_bglt) CREF(BgL_nodez00_1660))->BgL_unsafez00);
							BgL_new3286z00_1664 =
								BGl_makezd2vsetz12zc0zzast_nodez00(BgL_arg3821z00_1665,
								BgL_arg3822z00_1666, BgL_arg3823z00_1667, BgL_arg3824z00_1668,
								BgL_arg3825z00_1669, BgL_arg3826z00_1670, BgL_arg3827z00_1671,
								BgL_arg3828z00_1672, BgL_arg3829z00_1673, BgL_arg3830z00_1674,
								BgL_arg3831z00_1675);
						}
						{	/* Ast/alphatize.scm 249 */

							BgL_auxz00_5124 = BgL_new3286z00_1664;
						}
					}
					return (obj_t) (BgL_auxz00_5124);
				}
			}
		}
	}



/* do-alphatize-vref3463 */
	obj_t BGl_dozd2alphatiza7ezd2vref3463za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3938, obj_t BgL_nodez00_3939)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 240 */
			{
				BgL_vrefz00_bglt BgL_nodez00_1624;

				{	/* Ast/alphatize.scm 241 */
					BgL_vrefz00_bglt BgL_auxz00_5213;

					BgL_nodez00_1624 = (BgL_vrefz00_bglt) (BgL_nodez00_3939);
					{	/* Ast/alphatize.scm 242 */
						BgL_vrefz00_bglt BgL_new3284z00_1628;

						{	/* Ast/alphatize.scm 242 */
							obj_t BgL_arg3798z00_1629;

							BgL_typez00_bglt BgL_arg3799z00_1630;

							obj_t BgL_arg3800z00_1631;

							obj_t BgL_arg3801z00_1632;

							obj_t BgL_arg3803z00_1633;

							obj_t BgL_arg3804z00_1634;

							obj_t BgL_arg3805z00_1635;

							BgL_typez00_bglt BgL_arg3806z00_1636;

							BgL_typez00_bglt BgL_arg3807z00_1637;

							BgL_typez00_bglt BgL_arg3808z00_1638;

							bool_t BgL_arg3809z00_1639;

							BgL_arg3798z00_1629 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_1624));
							{
								BgL_nodez00_bglt BgL_auxz00_5216;

								BgL_auxz00_5216 = (BgL_nodez00_bglt) (BgL_nodez00_1624);
								BgL_arg3799z00_1630 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_5216))->BgL_typez00);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_5219;

								BgL_auxz00_5219 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1624);
								BgL_arg3800z00_1631 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_5219))->
									BgL_sidezd2effectzf3z21);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_5222;

								BgL_auxz00_5222 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1624);
								BgL_arg3801z00_1632 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_5222))->
									BgL_keyz00);
							}
							{	/* Ast/alphatize.scm 243 */
								obj_t BgL_l3380z00_1640;

								{
									BgL_externz00_bglt BgL_auxz00_5225;

									BgL_auxz00_5225 = (BgL_externz00_bglt) (BgL_nodez00_1624);
									BgL_l3380z00_1640 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_5225))->
										BgL_exprza2za2);
								}
								if (NULLP(BgL_l3380z00_1640))
									{	/* Ast/alphatize.scm 243 */
										BgL_arg3803z00_1633 = BNIL;
									}
								else
									{	/* Ast/alphatize.scm 243 */
										obj_t BgL_head3382z00_1642;

										{	/* Ast/alphatize.scm 243 */
											BgL_nodez00_bglt BgL_arg3817z00_1655;

											{	/* Ast/alphatize.scm 243 */
												obj_t BgL_arg3819z00_1657;

												BgL_arg3819z00_1657 = CAR(BgL_l3380z00_1640);
												{	/* Ast/alphatize.scm 243 */
													BgL_nodez00_bglt BgL_res4151z00_2963;

													{	/* Ast/alphatize.scm 243 */
														BgL_nodez00_bglt BgL_nodez00_2937;

														BgL_nodez00_2937 =
															(BgL_nodez00_bglt) (BgL_arg3819z00_1657);
														{	/* Ast/alphatize.scm 243 */
															obj_t BgL_method3435z00_2938;

															{	/* Ast/alphatize.scm 243 */
																BgL_objectz00_bglt BgL_objz00_2939;

																BgL_objz00_2939 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2937);
																{	/* Ast/alphatize.scm 243 */
																	long BgL_objzd2classzd2numz00_2940;

																	BgL_objzd2classzd2numz00_2940 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2939);
																	{	/* Ast/alphatize.scm 243 */
																		obj_t BgL_arg2643z00_2941;

																		BgL_arg2643z00_2941 =
																			PROCEDURE_REF
																			(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																			(int) (((long) 1)));
																		{	/* Ast/alphatize.scm 243 */
																			obj_t BgL_arrayz00_2943;

																			int BgL_offsetz00_2944;

																			BgL_arrayz00_2943 = BgL_arg2643z00_2941;
																			BgL_offsetz00_2944 =
																				(int) (BgL_objzd2classzd2numz00_2940);
																			{	/* Ast/alphatize.scm 243 */
																				long BgL_offsetz00_2945;

																				BgL_offsetz00_2945 =
																					(
																					(long) (BgL_offsetz00_2944) -
																					OBJECT_TYPE);
																				{	/* Ast/alphatize.scm 243 */
																					long BgL_modz00_2946;

																					{	/* Ast/alphatize.scm 243 */
																						int BgL_arg2645z00_2947;

																						BgL_arg2645z00_2947 =
																							(int) (((long) 16));
																						{	/* Ast/alphatize.scm 243 */
																							long BgL_auxz00_5240;

																							BgL_auxz00_5240 =
																								(long) (BgL_arg2645z00_2947);
																							BgL_modz00_2946 =
																								(BgL_offsetz00_2945 /
																								BgL_auxz00_5240);
																					}}
																					{	/* Ast/alphatize.scm 243 */
																						long BgL_restz00_2948;

																						{	/* Ast/alphatize.scm 243 */
																							int BgL_arg2644z00_2949;

																							BgL_arg2644z00_2949 =
																								(int) (((long) 16));
																							{	/* Ast/alphatize.scm 243 */
																								long BgL_auxz00_5244;

																								BgL_auxz00_5244 =
																									(long) (BgL_arg2644z00_2949);
																								BgL_restz00_2948 =
																									(BgL_offsetz00_2945 %
																									BgL_auxz00_5244);
																						}}
																						{	/* Ast/alphatize.scm 243 */

																							BgL_method3435z00_2938 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2943,
																									(int) (BgL_modz00_2946)),
																								(int) (BgL_restz00_2948));
															}}}}}}}}
															BgL_res4151z00_2963 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3435z00_2938)
																(BgL_method3435z00_2938,
																	(obj_t) (BgL_nodez00_2937), BEOA));
													}}
													BgL_arg3817z00_1655 = BgL_res4151z00_2963;
											}}
											BgL_head3382z00_1642 =
												MAKE_PAIR((obj_t) (BgL_arg3817z00_1655), BNIL);
										}
										{	/* Ast/alphatize.scm 243 */
											obj_t BgL_g3385z00_1643;

											BgL_g3385z00_1643 = CDR(BgL_l3380z00_1640);
											{
												obj_t BgL_l3380z00_1645;

												obj_t BgL_tail3383z00_1646;

												BgL_l3380z00_1645 = BgL_g3385z00_1643;
												BgL_tail3383z00_1646 = BgL_head3382z00_1642;
											BgL_zc3anonymousza33811ze3z83_1647:
												if (NULLP(BgL_l3380z00_1645))
													{	/* Ast/alphatize.scm 243 */
														BgL_arg3803z00_1633 = BgL_head3382z00_1642;
													}
												else
													{	/* Ast/alphatize.scm 243 */
														obj_t BgL_newtail3384z00_1649;

														{	/* Ast/alphatize.scm 243 */
															BgL_nodez00_bglt BgL_arg3814z00_1651;

															{	/* Ast/alphatize.scm 243 */
																obj_t BgL_arg3816z00_1653;

																BgL_arg3816z00_1653 = CAR(BgL_l3380z00_1645);
																{	/* Ast/alphatize.scm 243 */
																	BgL_nodez00_bglt BgL_res4154z00_2995;

																	{	/* Ast/alphatize.scm 243 */
																		BgL_nodez00_bglt BgL_nodez00_2969;

																		BgL_nodez00_2969 =
																			(BgL_nodez00_bglt) (BgL_arg3816z00_1653);
																		{	/* Ast/alphatize.scm 243 */
																			obj_t BgL_method3435z00_2970;

																			{	/* Ast/alphatize.scm 243 */
																				BgL_objectz00_bglt BgL_objz00_2971;

																				BgL_objz00_2971 =
																					(BgL_objectz00_bglt)
																					(BgL_nodez00_2969);
																				{	/* Ast/alphatize.scm 243 */
																					long BgL_objzd2classzd2numz00_2972;

																					BgL_objzd2classzd2numz00_2972 =
																						BGL_OBJECT_CLASS_NUM
																						(BgL_objz00_2971);
																					{	/* Ast/alphatize.scm 243 */
																						obj_t BgL_arg2643z00_2973;

																						BgL_arg2643z00_2973 =
																							PROCEDURE_REF
																							(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																							(int) (((long) 1)));
																						{	/* Ast/alphatize.scm 243 */
																							obj_t BgL_arrayz00_2975;

																							int BgL_offsetz00_2976;

																							BgL_arrayz00_2975 =
																								BgL_arg2643z00_2973;
																							BgL_offsetz00_2976 =
																								(int)
																								(BgL_objzd2classzd2numz00_2972);
																							{	/* Ast/alphatize.scm 243 */
																								long BgL_offsetz00_2977;

																								BgL_offsetz00_2977 =
																									(
																									(long) (BgL_offsetz00_2976) -
																									OBJECT_TYPE);
																								{	/* Ast/alphatize.scm 243 */
																									long BgL_modz00_2978;

																									{	/* Ast/alphatize.scm 243 */
																										int BgL_arg2645z00_2979;

																										BgL_arg2645z00_2979 =
																											(int) (((long) 16));
																										{	/* Ast/alphatize.scm 243 */
																											long BgL_auxz00_5270;

																											BgL_auxz00_5270 =
																												(long)
																												(BgL_arg2645z00_2979);
																											BgL_modz00_2978 =
																												(BgL_offsetz00_2977 /
																												BgL_auxz00_5270);
																									}}
																									{	/* Ast/alphatize.scm 243 */
																										long BgL_restz00_2980;

																										{	/* Ast/alphatize.scm 243 */
																											int BgL_arg2644z00_2981;

																											BgL_arg2644z00_2981 =
																												(int) (((long) 16));
																											{	/* Ast/alphatize.scm 243 */
																												long BgL_auxz00_5274;

																												BgL_auxz00_5274 =
																													(long)
																													(BgL_arg2644z00_2981);
																												BgL_restz00_2980 =
																													(BgL_offsetz00_2977 %
																													BgL_auxz00_5274);
																										}}
																										{	/* Ast/alphatize.scm 243 */

																											BgL_method3435z00_2970 =
																												VECTOR_REF(VECTOR_REF
																												(BgL_arrayz00_2975,
																													(int)
																													(BgL_modz00_2978)),
																												(int)
																												(BgL_restz00_2980));
																			}}}}}}}}
																			BgL_res4154z00_2995 =
																				(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																				(BgL_method3435z00_2970)
																				(BgL_method3435z00_2970,
																					(obj_t) (BgL_nodez00_2969), BEOA));
																	}}
																	BgL_arg3814z00_1651 = BgL_res4154z00_2995;
															}}
															BgL_newtail3384z00_1649 =
																MAKE_PAIR((obj_t) (BgL_arg3814z00_1651), BNIL);
														}
														SET_CDR(BgL_tail3383z00_1646,
															BgL_newtail3384z00_1649);
														{
															obj_t BgL_tail3383z00_5290;

															obj_t BgL_l3380z00_5288;

															BgL_l3380z00_5288 = CDR(BgL_l3380z00_1645);
															BgL_tail3383z00_5290 = BgL_newtail3384z00_1649;
															BgL_tail3383z00_1646 = BgL_tail3383z00_5290;
															BgL_l3380z00_1645 = BgL_l3380z00_5288;
															goto BgL_zc3anonymousza33811ze3z83_1647;
														}
													}
											}
										}
									}
							}
							{
								BgL_externz00_bglt BgL_auxz00_5291;

								BgL_auxz00_5291 = (BgL_externz00_bglt) (BgL_nodez00_1624);
								BgL_arg3804z00_1634 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_5291))->BgL_effectz00);
							}
							BgL_arg3805z00_1635 =
								(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1624))->
								BgL_czd2formatzd2);
							BgL_arg3806z00_1636 =
								(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1624))->BgL_ftypez00);
							BgL_arg3807z00_1637 =
								(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1624))->BgL_otypez00);
							BgL_arg3808z00_1638 =
								(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1624))->BgL_vtypez00);
							BgL_arg3809z00_1639 =
								(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1624))->BgL_unsafez00);
							BgL_new3284z00_1628 =
								BGl_makezd2vrefzd2zzast_nodez00(BgL_arg3798z00_1629,
								BgL_arg3799z00_1630, BgL_arg3800z00_1631, BgL_arg3801z00_1632,
								BgL_arg3803z00_1633, BgL_arg3804z00_1634, BgL_arg3805z00_1635,
								BgL_arg3806z00_1636, BgL_arg3807z00_1637, BgL_arg3808z00_1638,
								BgL_arg3809z00_1639);
						}
						{	/* Ast/alphatize.scm 241 */

							BgL_auxz00_5213 = BgL_new3284z00_1628;
						}
					}
					return (obj_t) (BgL_auxz00_5213);
				}
			}
		}
	}



/* do-alphatize-vlength3461 */
	obj_t BGl_dozd2alphatiza7ezd2vlength3461za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3940, obj_t BgL_nodez00_3941)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 232 */
			{
				BgL_vlengthz00_bglt BgL_nodez00_1591;

				{	/* Ast/alphatize.scm 233 */
					BgL_vlengthz00_bglt BgL_auxz00_5302;

					BgL_nodez00_1591 = (BgL_vlengthz00_bglt) (BgL_nodez00_3941);
					{	/* Ast/alphatize.scm 234 */
						BgL_vlengthz00_bglt BgL_new3282z00_1595;

						{	/* Ast/alphatize.scm 234 */
							obj_t BgL_arg3779z00_1596;

							BgL_typez00_bglt BgL_arg3780z00_1597;

							obj_t BgL_arg3781z00_1598;

							obj_t BgL_arg3782z00_1599;

							obj_t BgL_arg3783z00_1600;

							obj_t BgL_arg3784z00_1601;

							obj_t BgL_arg3785z00_1602;

							BgL_typez00_bglt BgL_arg3786z00_1603;

							BgL_arg3779z00_1596 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_1591));
							{
								BgL_nodez00_bglt BgL_auxz00_5305;

								BgL_auxz00_5305 = (BgL_nodez00_bglt) (BgL_nodez00_1591);
								BgL_arg3780z00_1597 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_5305))->BgL_typez00);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_5308;

								BgL_auxz00_5308 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1591);
								BgL_arg3781z00_1598 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_5308))->
									BgL_sidezd2effectzf3z21);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_5311;

								BgL_auxz00_5311 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1591);
								BgL_arg3782z00_1599 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_5311))->
									BgL_keyz00);
							}
							{	/* Ast/alphatize.scm 235 */
								obj_t BgL_l3374z00_1604;

								{
									BgL_externz00_bglt BgL_auxz00_5314;

									BgL_auxz00_5314 = (BgL_externz00_bglt) (BgL_nodez00_1591);
									BgL_l3374z00_1604 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_5314))->
										BgL_exprza2za2);
								}
								if (NULLP(BgL_l3374z00_1604))
									{	/* Ast/alphatize.scm 235 */
										BgL_arg3783z00_1600 = BNIL;
									}
								else
									{	/* Ast/alphatize.scm 235 */
										obj_t BgL_head3376z00_1606;

										{	/* Ast/alphatize.scm 235 */
											BgL_nodez00_bglt BgL_arg3794z00_1619;

											{	/* Ast/alphatize.scm 235 */
												obj_t BgL_arg3796z00_1621;

												BgL_arg3796z00_1621 = CAR(BgL_l3374z00_1604);
												{	/* Ast/alphatize.scm 235 */
													BgL_nodez00_bglt BgL_res4145z00_2890;

													{	/* Ast/alphatize.scm 235 */
														BgL_nodez00_bglt BgL_nodez00_2864;

														BgL_nodez00_2864 =
															(BgL_nodez00_bglt) (BgL_arg3796z00_1621);
														{	/* Ast/alphatize.scm 235 */
															obj_t BgL_method3435z00_2865;

															{	/* Ast/alphatize.scm 235 */
																BgL_objectz00_bglt BgL_objz00_2866;

																BgL_objz00_2866 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2864);
																{	/* Ast/alphatize.scm 235 */
																	long BgL_objzd2classzd2numz00_2867;

																	BgL_objzd2classzd2numz00_2867 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2866);
																	{	/* Ast/alphatize.scm 235 */
																		obj_t BgL_arg2643z00_2868;

																		BgL_arg2643z00_2868 =
																			PROCEDURE_REF
																			(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																			(int) (((long) 1)));
																		{	/* Ast/alphatize.scm 235 */
																			obj_t BgL_arrayz00_2870;

																			int BgL_offsetz00_2871;

																			BgL_arrayz00_2870 = BgL_arg2643z00_2868;
																			BgL_offsetz00_2871 =
																				(int) (BgL_objzd2classzd2numz00_2867);
																			{	/* Ast/alphatize.scm 235 */
																				long BgL_offsetz00_2872;

																				BgL_offsetz00_2872 =
																					(
																					(long) (BgL_offsetz00_2871) -
																					OBJECT_TYPE);
																				{	/* Ast/alphatize.scm 235 */
																					long BgL_modz00_2873;

																					{	/* Ast/alphatize.scm 235 */
																						int BgL_arg2645z00_2874;

																						BgL_arg2645z00_2874 =
																							(int) (((long) 16));
																						{	/* Ast/alphatize.scm 235 */
																							long BgL_auxz00_5329;

																							BgL_auxz00_5329 =
																								(long) (BgL_arg2645z00_2874);
																							BgL_modz00_2873 =
																								(BgL_offsetz00_2872 /
																								BgL_auxz00_5329);
																					}}
																					{	/* Ast/alphatize.scm 235 */
																						long BgL_restz00_2875;

																						{	/* Ast/alphatize.scm 235 */
																							int BgL_arg2644z00_2876;

																							BgL_arg2644z00_2876 =
																								(int) (((long) 16));
																							{	/* Ast/alphatize.scm 235 */
																								long BgL_auxz00_5333;

																								BgL_auxz00_5333 =
																									(long) (BgL_arg2644z00_2876);
																								BgL_restz00_2875 =
																									(BgL_offsetz00_2872 %
																									BgL_auxz00_5333);
																						}}
																						{	/* Ast/alphatize.scm 235 */

																							BgL_method3435z00_2865 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2870,
																									(int) (BgL_modz00_2873)),
																								(int) (BgL_restz00_2875));
															}}}}}}}}
															BgL_res4145z00_2890 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3435z00_2865)
																(BgL_method3435z00_2865,
																	(obj_t) (BgL_nodez00_2864), BEOA));
													}}
													BgL_arg3794z00_1619 = BgL_res4145z00_2890;
											}}
											BgL_head3376z00_1606 =
												MAKE_PAIR((obj_t) (BgL_arg3794z00_1619), BNIL);
										}
										{	/* Ast/alphatize.scm 235 */
											obj_t BgL_g3379z00_1607;

											BgL_g3379z00_1607 = CDR(BgL_l3374z00_1604);
											{
												obj_t BgL_l3374z00_1609;

												obj_t BgL_tail3377z00_1610;

												BgL_l3374z00_1609 = BgL_g3379z00_1607;
												BgL_tail3377z00_1610 = BgL_head3376z00_1606;
											BgL_zc3anonymousza33788ze3z83_1611:
												if (NULLP(BgL_l3374z00_1609))
													{	/* Ast/alphatize.scm 235 */
														BgL_arg3783z00_1600 = BgL_head3376z00_1606;
													}
												else
													{	/* Ast/alphatize.scm 235 */
														obj_t BgL_newtail3378z00_1613;

														{	/* Ast/alphatize.scm 235 */
															BgL_nodez00_bglt BgL_arg3791z00_1615;

															{	/* Ast/alphatize.scm 235 */
																obj_t BgL_arg3793z00_1617;

																BgL_arg3793z00_1617 = CAR(BgL_l3374z00_1609);
																{	/* Ast/alphatize.scm 235 */
																	BgL_nodez00_bglt BgL_res4148z00_2922;

																	{	/* Ast/alphatize.scm 235 */
																		BgL_nodez00_bglt BgL_nodez00_2896;

																		BgL_nodez00_2896 =
																			(BgL_nodez00_bglt) (BgL_arg3793z00_1617);
																		{	/* Ast/alphatize.scm 235 */
																			obj_t BgL_method3435z00_2897;

																			{	/* Ast/alphatize.scm 235 */
																				BgL_objectz00_bglt BgL_objz00_2898;

																				BgL_objz00_2898 =
																					(BgL_objectz00_bglt)
																					(BgL_nodez00_2896);
																				{	/* Ast/alphatize.scm 235 */
																					long BgL_objzd2classzd2numz00_2899;

																					BgL_objzd2classzd2numz00_2899 =
																						BGL_OBJECT_CLASS_NUM
																						(BgL_objz00_2898);
																					{	/* Ast/alphatize.scm 235 */
																						obj_t BgL_arg2643z00_2900;

																						BgL_arg2643z00_2900 =
																							PROCEDURE_REF
																							(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																							(int) (((long) 1)));
																						{	/* Ast/alphatize.scm 235 */
																							obj_t BgL_arrayz00_2902;

																							int BgL_offsetz00_2903;

																							BgL_arrayz00_2902 =
																								BgL_arg2643z00_2900;
																							BgL_offsetz00_2903 =
																								(int)
																								(BgL_objzd2classzd2numz00_2899);
																							{	/* Ast/alphatize.scm 235 */
																								long BgL_offsetz00_2904;

																								BgL_offsetz00_2904 =
																									(
																									(long) (BgL_offsetz00_2903) -
																									OBJECT_TYPE);
																								{	/* Ast/alphatize.scm 235 */
																									long BgL_modz00_2905;

																									{	/* Ast/alphatize.scm 235 */
																										int BgL_arg2645z00_2906;

																										BgL_arg2645z00_2906 =
																											(int) (((long) 16));
																										{	/* Ast/alphatize.scm 235 */
																											long BgL_auxz00_5359;

																											BgL_auxz00_5359 =
																												(long)
																												(BgL_arg2645z00_2906);
																											BgL_modz00_2905 =
																												(BgL_offsetz00_2904 /
																												BgL_auxz00_5359);
																									}}
																									{	/* Ast/alphatize.scm 235 */
																										long BgL_restz00_2907;

																										{	/* Ast/alphatize.scm 235 */
																											int BgL_arg2644z00_2908;

																											BgL_arg2644z00_2908 =
																												(int) (((long) 16));
																											{	/* Ast/alphatize.scm 235 */
																												long BgL_auxz00_5363;

																												BgL_auxz00_5363 =
																													(long)
																													(BgL_arg2644z00_2908);
																												BgL_restz00_2907 =
																													(BgL_offsetz00_2904 %
																													BgL_auxz00_5363);
																										}}
																										{	/* Ast/alphatize.scm 235 */

																											BgL_method3435z00_2897 =
																												VECTOR_REF(VECTOR_REF
																												(BgL_arrayz00_2902,
																													(int)
																													(BgL_modz00_2905)),
																												(int)
																												(BgL_restz00_2907));
																			}}}}}}}}
																			BgL_res4148z00_2922 =
																				(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																				(BgL_method3435z00_2897)
																				(BgL_method3435z00_2897,
																					(obj_t) (BgL_nodez00_2896), BEOA));
																	}}
																	BgL_arg3791z00_1615 = BgL_res4148z00_2922;
															}}
															BgL_newtail3378z00_1613 =
																MAKE_PAIR((obj_t) (BgL_arg3791z00_1615), BNIL);
														}
														SET_CDR(BgL_tail3377z00_1610,
															BgL_newtail3378z00_1613);
														{
															obj_t BgL_tail3377z00_5379;

															obj_t BgL_l3374z00_5377;

															BgL_l3374z00_5377 = CDR(BgL_l3374z00_1609);
															BgL_tail3377z00_5379 = BgL_newtail3378z00_1613;
															BgL_tail3377z00_1610 = BgL_tail3377z00_5379;
															BgL_l3374z00_1609 = BgL_l3374z00_5377;
															goto BgL_zc3anonymousza33788ze3z83_1611;
														}
													}
											}
										}
									}
							}
							{
								BgL_externz00_bglt BgL_auxz00_5380;

								BgL_auxz00_5380 = (BgL_externz00_bglt) (BgL_nodez00_1591);
								BgL_arg3784z00_1601 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_5380))->BgL_effectz00);
							}
							BgL_arg3785z00_1602 =
								(((BgL_vlengthz00_bglt) CREF(BgL_nodez00_1591))->
								BgL_czd2formatzd2);
							BgL_arg3786z00_1603 =
								(((BgL_vlengthz00_bglt) CREF(BgL_nodez00_1591))->BgL_vtypez00);
							BgL_new3282z00_1595 =
								BGl_makezd2vlengthzd2zzast_nodez00(BgL_arg3779z00_1596,
								BgL_arg3780z00_1597, BgL_arg3781z00_1598, BgL_arg3782z00_1599,
								BgL_arg3783z00_1600, BgL_arg3784z00_1601, BgL_arg3785z00_1602,
								BgL_arg3786z00_1603);
						}
						{	/* Ast/alphatize.scm 233 */

							BgL_auxz00_5302 = BgL_new3282z00_1595;
						}
					}
					return (obj_t) (BgL_auxz00_5302);
				}
			}
		}
	}



/* do-alphatize-new3459 */
	obj_t BGl_dozd2alphatiza7ezd2new3459za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3942, obj_t BgL_nodez00_3943)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 224 */
			{
				BgL_newz00_bglt BgL_nodez00_1559;

				{	/* Ast/alphatize.scm 225 */
					BgL_newz00_bglt BgL_auxz00_5388;

					BgL_nodez00_1559 = (BgL_newz00_bglt) (BgL_nodez00_3943);
					{	/* Ast/alphatize.scm 226 */
						BgL_newz00_bglt BgL_new3280z00_1563;

						{	/* Ast/alphatize.scm 226 */
							obj_t BgL_arg3761z00_1564;

							BgL_typez00_bglt BgL_arg3762z00_1565;

							obj_t BgL_arg3763z00_1566;

							obj_t BgL_arg3764z00_1567;

							obj_t BgL_arg3765z00_1568;

							obj_t BgL_arg3766z00_1569;

							obj_t BgL_arg3767z00_1570;

							BgL_arg3761z00_1564 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_1559));
							{
								BgL_nodez00_bglt BgL_auxz00_5391;

								BgL_auxz00_5391 = (BgL_nodez00_bglt) (BgL_nodez00_1559);
								BgL_arg3762z00_1565 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_5391))->BgL_typez00);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_5394;

								BgL_auxz00_5394 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1559);
								BgL_arg3763z00_1566 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_5394))->
									BgL_sidezd2effectzf3z21);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_5397;

								BgL_auxz00_5397 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1559);
								BgL_arg3764z00_1567 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_5397))->
									BgL_keyz00);
							}
							{	/* Ast/alphatize.scm 227 */
								obj_t BgL_l3368z00_1571;

								{
									BgL_externz00_bglt BgL_auxz00_5400;

									BgL_auxz00_5400 = (BgL_externz00_bglt) (BgL_nodez00_1559);
									BgL_l3368z00_1571 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_5400))->
										BgL_exprza2za2);
								}
								if (NULLP(BgL_l3368z00_1571))
									{	/* Ast/alphatize.scm 227 */
										BgL_arg3765z00_1568 = BNIL;
									}
								else
									{	/* Ast/alphatize.scm 227 */
										obj_t BgL_head3370z00_1573;

										{	/* Ast/alphatize.scm 227 */
											BgL_nodez00_bglt BgL_arg3775z00_1586;

											{	/* Ast/alphatize.scm 227 */
												obj_t BgL_arg3777z00_1588;

												BgL_arg3777z00_1588 = CAR(BgL_l3368z00_1571);
												{	/* Ast/alphatize.scm 227 */
													BgL_nodez00_bglt BgL_res4139z00_2818;

													{	/* Ast/alphatize.scm 227 */
														BgL_nodez00_bglt BgL_nodez00_2792;

														BgL_nodez00_2792 =
															(BgL_nodez00_bglt) (BgL_arg3777z00_1588);
														{	/* Ast/alphatize.scm 227 */
															obj_t BgL_method3435z00_2793;

															{	/* Ast/alphatize.scm 227 */
																BgL_objectz00_bglt BgL_objz00_2794;

																BgL_objz00_2794 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2792);
																{	/* Ast/alphatize.scm 227 */
																	long BgL_objzd2classzd2numz00_2795;

																	BgL_objzd2classzd2numz00_2795 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2794);
																	{	/* Ast/alphatize.scm 227 */
																		obj_t BgL_arg2643z00_2796;

																		BgL_arg2643z00_2796 =
																			PROCEDURE_REF
																			(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																			(int) (((long) 1)));
																		{	/* Ast/alphatize.scm 227 */
																			obj_t BgL_arrayz00_2798;

																			int BgL_offsetz00_2799;

																			BgL_arrayz00_2798 = BgL_arg2643z00_2796;
																			BgL_offsetz00_2799 =
																				(int) (BgL_objzd2classzd2numz00_2795);
																			{	/* Ast/alphatize.scm 227 */
																				long BgL_offsetz00_2800;

																				BgL_offsetz00_2800 =
																					(
																					(long) (BgL_offsetz00_2799) -
																					OBJECT_TYPE);
																				{	/* Ast/alphatize.scm 227 */
																					long BgL_modz00_2801;

																					{	/* Ast/alphatize.scm 227 */
																						int BgL_arg2645z00_2802;

																						BgL_arg2645z00_2802 =
																							(int) (((long) 16));
																						{	/* Ast/alphatize.scm 227 */
																							long BgL_auxz00_5415;

																							BgL_auxz00_5415 =
																								(long) (BgL_arg2645z00_2802);
																							BgL_modz00_2801 =
																								(BgL_offsetz00_2800 /
																								BgL_auxz00_5415);
																					}}
																					{	/* Ast/alphatize.scm 227 */
																						long BgL_restz00_2803;

																						{	/* Ast/alphatize.scm 227 */
																							int BgL_arg2644z00_2804;

																							BgL_arg2644z00_2804 =
																								(int) (((long) 16));
																							{	/* Ast/alphatize.scm 227 */
																								long BgL_auxz00_5419;

																								BgL_auxz00_5419 =
																									(long) (BgL_arg2644z00_2804);
																								BgL_restz00_2803 =
																									(BgL_offsetz00_2800 %
																									BgL_auxz00_5419);
																						}}
																						{	/* Ast/alphatize.scm 227 */

																							BgL_method3435z00_2793 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2798,
																									(int) (BgL_modz00_2801)),
																								(int) (BgL_restz00_2803));
															}}}}}}}}
															BgL_res4139z00_2818 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3435z00_2793)
																(BgL_method3435z00_2793,
																	(obj_t) (BgL_nodez00_2792), BEOA));
													}}
													BgL_arg3775z00_1586 = BgL_res4139z00_2818;
											}}
											BgL_head3370z00_1573 =
												MAKE_PAIR((obj_t) (BgL_arg3775z00_1586), BNIL);
										}
										{	/* Ast/alphatize.scm 227 */
											obj_t BgL_g3373z00_1574;

											BgL_g3373z00_1574 = CDR(BgL_l3368z00_1571);
											{
												obj_t BgL_l3368z00_1576;

												obj_t BgL_tail3371z00_1577;

												BgL_l3368z00_1576 = BgL_g3373z00_1574;
												BgL_tail3371z00_1577 = BgL_head3370z00_1573;
											BgL_zc3anonymousza33769ze3z83_1578:
												if (NULLP(BgL_l3368z00_1576))
													{	/* Ast/alphatize.scm 227 */
														BgL_arg3765z00_1568 = BgL_head3370z00_1573;
													}
												else
													{	/* Ast/alphatize.scm 227 */
														obj_t BgL_newtail3372z00_1580;

														{	/* Ast/alphatize.scm 227 */
															BgL_nodez00_bglt BgL_arg3772z00_1582;

															{	/* Ast/alphatize.scm 227 */
																obj_t BgL_arg3774z00_1584;

																BgL_arg3774z00_1584 = CAR(BgL_l3368z00_1576);
																{	/* Ast/alphatize.scm 227 */
																	BgL_nodez00_bglt BgL_res4142z00_2850;

																	{	/* Ast/alphatize.scm 227 */
																		BgL_nodez00_bglt BgL_nodez00_2824;

																		BgL_nodez00_2824 =
																			(BgL_nodez00_bglt) (BgL_arg3774z00_1584);
																		{	/* Ast/alphatize.scm 227 */
																			obj_t BgL_method3435z00_2825;

																			{	/* Ast/alphatize.scm 227 */
																				BgL_objectz00_bglt BgL_objz00_2826;

																				BgL_objz00_2826 =
																					(BgL_objectz00_bglt)
																					(BgL_nodez00_2824);
																				{	/* Ast/alphatize.scm 227 */
																					long BgL_objzd2classzd2numz00_2827;

																					BgL_objzd2classzd2numz00_2827 =
																						BGL_OBJECT_CLASS_NUM
																						(BgL_objz00_2826);
																					{	/* Ast/alphatize.scm 227 */
																						obj_t BgL_arg2643z00_2828;

																						BgL_arg2643z00_2828 =
																							PROCEDURE_REF
																							(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																							(int) (((long) 1)));
																						{	/* Ast/alphatize.scm 227 */
																							obj_t BgL_arrayz00_2830;

																							int BgL_offsetz00_2831;

																							BgL_arrayz00_2830 =
																								BgL_arg2643z00_2828;
																							BgL_offsetz00_2831 =
																								(int)
																								(BgL_objzd2classzd2numz00_2827);
																							{	/* Ast/alphatize.scm 227 */
																								long BgL_offsetz00_2832;

																								BgL_offsetz00_2832 =
																									(
																									(long) (BgL_offsetz00_2831) -
																									OBJECT_TYPE);
																								{	/* Ast/alphatize.scm 227 */
																									long BgL_modz00_2833;

																									{	/* Ast/alphatize.scm 227 */
																										int BgL_arg2645z00_2834;

																										BgL_arg2645z00_2834 =
																											(int) (((long) 16));
																										{	/* Ast/alphatize.scm 227 */
																											long BgL_auxz00_5445;

																											BgL_auxz00_5445 =
																												(long)
																												(BgL_arg2645z00_2834);
																											BgL_modz00_2833 =
																												(BgL_offsetz00_2832 /
																												BgL_auxz00_5445);
																									}}
																									{	/* Ast/alphatize.scm 227 */
																										long BgL_restz00_2835;

																										{	/* Ast/alphatize.scm 227 */
																											int BgL_arg2644z00_2836;

																											BgL_arg2644z00_2836 =
																												(int) (((long) 16));
																											{	/* Ast/alphatize.scm 227 */
																												long BgL_auxz00_5449;

																												BgL_auxz00_5449 =
																													(long)
																													(BgL_arg2644z00_2836);
																												BgL_restz00_2835 =
																													(BgL_offsetz00_2832 %
																													BgL_auxz00_5449);
																										}}
																										{	/* Ast/alphatize.scm 227 */

																											BgL_method3435z00_2825 =
																												VECTOR_REF(VECTOR_REF
																												(BgL_arrayz00_2830,
																													(int)
																													(BgL_modz00_2833)),
																												(int)
																												(BgL_restz00_2835));
																			}}}}}}}}
																			BgL_res4142z00_2850 =
																				(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																				(BgL_method3435z00_2825)
																				(BgL_method3435z00_2825,
																					(obj_t) (BgL_nodez00_2824), BEOA));
																	}}
																	BgL_arg3772z00_1582 = BgL_res4142z00_2850;
															}}
															BgL_newtail3372z00_1580 =
																MAKE_PAIR((obj_t) (BgL_arg3772z00_1582), BNIL);
														}
														SET_CDR(BgL_tail3371z00_1577,
															BgL_newtail3372z00_1580);
														{
															obj_t BgL_tail3371z00_5465;

															obj_t BgL_l3368z00_5463;

															BgL_l3368z00_5463 = CDR(BgL_l3368z00_1576);
															BgL_tail3371z00_5465 = BgL_newtail3372z00_1580;
															BgL_tail3371z00_1577 = BgL_tail3371z00_5465;
															BgL_l3368z00_1576 = BgL_l3368z00_5463;
															goto BgL_zc3anonymousza33769ze3z83_1578;
														}
													}
											}
										}
									}
							}
							{
								BgL_externz00_bglt BgL_auxz00_5466;

								BgL_auxz00_5466 = (BgL_externz00_bglt) (BgL_nodez00_1559);
								BgL_arg3766z00_1569 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_5466))->BgL_effectz00);
							}
							BgL_arg3767z00_1570 =
								(((BgL_newz00_bglt) CREF(BgL_nodez00_1559))->
								BgL_argszd2typezd2);
							BgL_new3280z00_1563 =
								BGl_makezd2newzd2zzast_nodez00(BgL_arg3761z00_1564,
								BgL_arg3762z00_1565, BgL_arg3763z00_1566, BgL_arg3764z00_1567,
								BgL_arg3765z00_1568, BgL_arg3766z00_1569, BgL_arg3767z00_1570);
						}
						{	/* Ast/alphatize.scm 225 */

							BgL_auxz00_5388 = BgL_new3280z00_1563;
						}
					}
					return (obj_t) (BgL_auxz00_5388);
				}
			}
		}
	}



/* do-alphatize-setfiel3457 */
	obj_t BGl_dozd2alphatiza7ezd2setfiel3457za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3944, obj_t BgL_nodez00_3945)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 216 */
			{
				BgL_setfieldz00_bglt BgL_nodez00_1525;

				{	/* Ast/alphatize.scm 217 */
					BgL_setfieldz00_bglt BgL_auxz00_5473;

					BgL_nodez00_1525 = (BgL_setfieldz00_bglt) (BgL_nodez00_3945);
					{	/* Ast/alphatize.scm 218 */
						BgL_setfieldz00_bglt BgL_new3278z00_1529;

						{	/* Ast/alphatize.scm 218 */
							obj_t BgL_arg3739z00_1530;

							BgL_typez00_bglt BgL_arg3740z00_1531;

							obj_t BgL_arg3741z00_1532;

							obj_t BgL_arg3742z00_1533;

							obj_t BgL_arg3745z00_1534;

							obj_t BgL_arg3746z00_1535;

							obj_t BgL_arg3747z00_1536;

							BgL_typez00_bglt BgL_arg3748z00_1537;

							BgL_typez00_bglt BgL_arg3749z00_1538;

							BgL_arg3739z00_1530 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_1525));
							{
								BgL_nodez00_bglt BgL_auxz00_5476;

								BgL_auxz00_5476 = (BgL_nodez00_bglt) (BgL_nodez00_1525);
								BgL_arg3740z00_1531 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_5476))->BgL_typez00);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_5479;

								BgL_auxz00_5479 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1525);
								BgL_arg3741z00_1532 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_5479))->
									BgL_sidezd2effectzf3z21);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_5482;

								BgL_auxz00_5482 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1525);
								BgL_arg3742z00_1533 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_5482))->
									BgL_keyz00);
							}
							{	/* Ast/alphatize.scm 219 */
								obj_t BgL_l3362z00_1539;

								{
									BgL_externz00_bglt BgL_auxz00_5485;

									BgL_auxz00_5485 = (BgL_externz00_bglt) (BgL_nodez00_1525);
									BgL_l3362z00_1539 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_5485))->
										BgL_exprza2za2);
								}
								if (NULLP(BgL_l3362z00_1539))
									{	/* Ast/alphatize.scm 219 */
										BgL_arg3745z00_1534 = BNIL;
									}
								else
									{	/* Ast/alphatize.scm 219 */
										obj_t BgL_head3364z00_1541;

										{	/* Ast/alphatize.scm 219 */
											BgL_nodez00_bglt BgL_arg3757z00_1554;

											{	/* Ast/alphatize.scm 219 */
												obj_t BgL_arg3759z00_1556;

												BgL_arg3759z00_1556 = CAR(BgL_l3362z00_1539);
												{	/* Ast/alphatize.scm 219 */
													BgL_nodez00_bglt BgL_res4133z00_2744;

													{	/* Ast/alphatize.scm 219 */
														BgL_nodez00_bglt BgL_nodez00_2718;

														BgL_nodez00_2718 =
															(BgL_nodez00_bglt) (BgL_arg3759z00_1556);
														{	/* Ast/alphatize.scm 219 */
															obj_t BgL_method3435z00_2719;

															{	/* Ast/alphatize.scm 219 */
																BgL_objectz00_bglt BgL_objz00_2720;

																BgL_objz00_2720 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2718);
																{	/* Ast/alphatize.scm 219 */
																	long BgL_objzd2classzd2numz00_2721;

																	BgL_objzd2classzd2numz00_2721 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2720);
																	{	/* Ast/alphatize.scm 219 */
																		obj_t BgL_arg2643z00_2722;

																		BgL_arg2643z00_2722 =
																			PROCEDURE_REF
																			(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																			(int) (((long) 1)));
																		{	/* Ast/alphatize.scm 219 */
																			obj_t BgL_arrayz00_2724;

																			int BgL_offsetz00_2725;

																			BgL_arrayz00_2724 = BgL_arg2643z00_2722;
																			BgL_offsetz00_2725 =
																				(int) (BgL_objzd2classzd2numz00_2721);
																			{	/* Ast/alphatize.scm 219 */
																				long BgL_offsetz00_2726;

																				BgL_offsetz00_2726 =
																					(
																					(long) (BgL_offsetz00_2725) -
																					OBJECT_TYPE);
																				{	/* Ast/alphatize.scm 219 */
																					long BgL_modz00_2727;

																					{	/* Ast/alphatize.scm 219 */
																						int BgL_arg2645z00_2728;

																						BgL_arg2645z00_2728 =
																							(int) (((long) 16));
																						{	/* Ast/alphatize.scm 219 */
																							long BgL_auxz00_5500;

																							BgL_auxz00_5500 =
																								(long) (BgL_arg2645z00_2728);
																							BgL_modz00_2727 =
																								(BgL_offsetz00_2726 /
																								BgL_auxz00_5500);
																					}}
																					{	/* Ast/alphatize.scm 219 */
																						long BgL_restz00_2729;

																						{	/* Ast/alphatize.scm 219 */
																							int BgL_arg2644z00_2730;

																							BgL_arg2644z00_2730 =
																								(int) (((long) 16));
																							{	/* Ast/alphatize.scm 219 */
																								long BgL_auxz00_5504;

																								BgL_auxz00_5504 =
																									(long) (BgL_arg2644z00_2730);
																								BgL_restz00_2729 =
																									(BgL_offsetz00_2726 %
																									BgL_auxz00_5504);
																						}}
																						{	/* Ast/alphatize.scm 219 */

																							BgL_method3435z00_2719 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2724,
																									(int) (BgL_modz00_2727)),
																								(int) (BgL_restz00_2729));
															}}}}}}}}
															BgL_res4133z00_2744 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3435z00_2719)
																(BgL_method3435z00_2719,
																	(obj_t) (BgL_nodez00_2718), BEOA));
													}}
													BgL_arg3757z00_1554 = BgL_res4133z00_2744;
											}}
											BgL_head3364z00_1541 =
												MAKE_PAIR((obj_t) (BgL_arg3757z00_1554), BNIL);
										}
										{	/* Ast/alphatize.scm 219 */
											obj_t BgL_g3367z00_1542;

											BgL_g3367z00_1542 = CDR(BgL_l3362z00_1539);
											{
												obj_t BgL_l3362z00_1544;

												obj_t BgL_tail3365z00_1545;

												BgL_l3362z00_1544 = BgL_g3367z00_1542;
												BgL_tail3365z00_1545 = BgL_head3364z00_1541;
											BgL_zc3anonymousza33751ze3z83_1546:
												if (NULLP(BgL_l3362z00_1544))
													{	/* Ast/alphatize.scm 219 */
														BgL_arg3745z00_1534 = BgL_head3364z00_1541;
													}
												else
													{	/* Ast/alphatize.scm 219 */
														obj_t BgL_newtail3366z00_1548;

														{	/* Ast/alphatize.scm 219 */
															BgL_nodez00_bglt BgL_arg3754z00_1550;

															{	/* Ast/alphatize.scm 219 */
																obj_t BgL_arg3756z00_1552;

																BgL_arg3756z00_1552 = CAR(BgL_l3362z00_1544);
																{	/* Ast/alphatize.scm 219 */
																	BgL_nodez00_bglt BgL_res4136z00_2776;

																	{	/* Ast/alphatize.scm 219 */
																		BgL_nodez00_bglt BgL_nodez00_2750;

																		BgL_nodez00_2750 =
																			(BgL_nodez00_bglt) (BgL_arg3756z00_1552);
																		{	/* Ast/alphatize.scm 219 */
																			obj_t BgL_method3435z00_2751;

																			{	/* Ast/alphatize.scm 219 */
																				BgL_objectz00_bglt BgL_objz00_2752;

																				BgL_objz00_2752 =
																					(BgL_objectz00_bglt)
																					(BgL_nodez00_2750);
																				{	/* Ast/alphatize.scm 219 */
																					long BgL_objzd2classzd2numz00_2753;

																					BgL_objzd2classzd2numz00_2753 =
																						BGL_OBJECT_CLASS_NUM
																						(BgL_objz00_2752);
																					{	/* Ast/alphatize.scm 219 */
																						obj_t BgL_arg2643z00_2754;

																						BgL_arg2643z00_2754 =
																							PROCEDURE_REF
																							(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																							(int) (((long) 1)));
																						{	/* Ast/alphatize.scm 219 */
																							obj_t BgL_arrayz00_2756;

																							int BgL_offsetz00_2757;

																							BgL_arrayz00_2756 =
																								BgL_arg2643z00_2754;
																							BgL_offsetz00_2757 =
																								(int)
																								(BgL_objzd2classzd2numz00_2753);
																							{	/* Ast/alphatize.scm 219 */
																								long BgL_offsetz00_2758;

																								BgL_offsetz00_2758 =
																									(
																									(long) (BgL_offsetz00_2757) -
																									OBJECT_TYPE);
																								{	/* Ast/alphatize.scm 219 */
																									long BgL_modz00_2759;

																									{	/* Ast/alphatize.scm 219 */
																										int BgL_arg2645z00_2760;

																										BgL_arg2645z00_2760 =
																											(int) (((long) 16));
																										{	/* Ast/alphatize.scm 219 */
																											long BgL_auxz00_5530;

																											BgL_auxz00_5530 =
																												(long)
																												(BgL_arg2645z00_2760);
																											BgL_modz00_2759 =
																												(BgL_offsetz00_2758 /
																												BgL_auxz00_5530);
																									}}
																									{	/* Ast/alphatize.scm 219 */
																										long BgL_restz00_2761;

																										{	/* Ast/alphatize.scm 219 */
																											int BgL_arg2644z00_2762;

																											BgL_arg2644z00_2762 =
																												(int) (((long) 16));
																											{	/* Ast/alphatize.scm 219 */
																												long BgL_auxz00_5534;

																												BgL_auxz00_5534 =
																													(long)
																													(BgL_arg2644z00_2762);
																												BgL_restz00_2761 =
																													(BgL_offsetz00_2758 %
																													BgL_auxz00_5534);
																										}}
																										{	/* Ast/alphatize.scm 219 */

																											BgL_method3435z00_2751 =
																												VECTOR_REF(VECTOR_REF
																												(BgL_arrayz00_2756,
																													(int)
																													(BgL_modz00_2759)),
																												(int)
																												(BgL_restz00_2761));
																			}}}}}}}}
																			BgL_res4136z00_2776 =
																				(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																				(BgL_method3435z00_2751)
																				(BgL_method3435z00_2751,
																					(obj_t) (BgL_nodez00_2750), BEOA));
																	}}
																	BgL_arg3754z00_1550 = BgL_res4136z00_2776;
															}}
															BgL_newtail3366z00_1548 =
																MAKE_PAIR((obj_t) (BgL_arg3754z00_1550), BNIL);
														}
														SET_CDR(BgL_tail3365z00_1545,
															BgL_newtail3366z00_1548);
														{
															obj_t BgL_tail3365z00_5550;

															obj_t BgL_l3362z00_5548;

															BgL_l3362z00_5548 = CDR(BgL_l3362z00_1544);
															BgL_tail3365z00_5550 = BgL_newtail3366z00_1548;
															BgL_tail3365z00_1545 = BgL_tail3365z00_5550;
															BgL_l3362z00_1544 = BgL_l3362z00_5548;
															goto BgL_zc3anonymousza33751ze3z83_1546;
														}
													}
											}
										}
									}
							}
							{
								BgL_externz00_bglt BgL_auxz00_5551;

								BgL_auxz00_5551 = (BgL_externz00_bglt) (BgL_nodez00_1525);
								BgL_arg3746z00_1535 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_5551))->BgL_effectz00);
							}
							BgL_arg3747z00_1536 =
								(((BgL_setfieldz00_bglt) CREF(BgL_nodez00_1525))->BgL_fnamez00);
							BgL_arg3748z00_1537 =
								(((BgL_setfieldz00_bglt) CREF(BgL_nodez00_1525))->BgL_ftypez00);
							BgL_arg3749z00_1538 =
								(((BgL_setfieldz00_bglt) CREF(BgL_nodez00_1525))->BgL_otypez00);
							BgL_new3278z00_1529 =
								BGl_makezd2setfieldzd2zzast_nodez00(BgL_arg3739z00_1530,
								BgL_arg3740z00_1531, BgL_arg3741z00_1532, BgL_arg3742z00_1533,
								BgL_arg3745z00_1534, BgL_arg3746z00_1535, BgL_arg3747z00_1536,
								BgL_arg3748z00_1537, BgL_arg3749z00_1538);
						}
						{	/* Ast/alphatize.scm 217 */

							BgL_auxz00_5473 = BgL_new3278z00_1529;
						}
					}
					return (obj_t) (BgL_auxz00_5473);
				}
			}
		}
	}



/* do-alphatize-getfiel3455 */
	obj_t BGl_dozd2alphatiza7ezd2getfiel3455za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3946, obj_t BgL_nodez00_3947)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 208 */
			{
				BgL_getfieldz00_bglt BgL_nodez00_1491;

				{	/* Ast/alphatize.scm 209 */
					BgL_getfieldz00_bglt BgL_auxz00_5560;

					BgL_nodez00_1491 = (BgL_getfieldz00_bglt) (BgL_nodez00_3947);
					{	/* Ast/alphatize.scm 210 */
						BgL_getfieldz00_bglt BgL_new3276z00_1495;

						{	/* Ast/alphatize.scm 210 */
							obj_t BgL_arg3719z00_1496;

							BgL_typez00_bglt BgL_arg3720z00_1497;

							obj_t BgL_arg3721z00_1498;

							obj_t BgL_arg3722z00_1499;

							obj_t BgL_arg3723z00_1500;

							obj_t BgL_arg3724z00_1501;

							obj_t BgL_arg3725z00_1502;

							BgL_typez00_bglt BgL_arg3726z00_1503;

							BgL_typez00_bglt BgL_arg3727z00_1504;

							BgL_arg3719z00_1496 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_1491));
							{
								BgL_nodez00_bglt BgL_auxz00_5563;

								BgL_auxz00_5563 = (BgL_nodez00_bglt) (BgL_nodez00_1491);
								BgL_arg3720z00_1497 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_5563))->BgL_typez00);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_5566;

								BgL_auxz00_5566 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1491);
								BgL_arg3721z00_1498 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_5566))->
									BgL_sidezd2effectzf3z21);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_5569;

								BgL_auxz00_5569 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1491);
								BgL_arg3722z00_1499 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_5569))->
									BgL_keyz00);
							}
							{	/* Ast/alphatize.scm 211 */
								obj_t BgL_l3356z00_1505;

								{
									BgL_externz00_bglt BgL_auxz00_5572;

									BgL_auxz00_5572 = (BgL_externz00_bglt) (BgL_nodez00_1491);
									BgL_l3356z00_1505 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_5572))->
										BgL_exprza2za2);
								}
								if (NULLP(BgL_l3356z00_1505))
									{	/* Ast/alphatize.scm 211 */
										BgL_arg3723z00_1500 = BNIL;
									}
								else
									{	/* Ast/alphatize.scm 211 */
										obj_t BgL_head3358z00_1507;

										{	/* Ast/alphatize.scm 211 */
											BgL_nodez00_bglt BgL_arg3735z00_1520;

											{	/* Ast/alphatize.scm 211 */
												obj_t BgL_arg3737z00_1522;

												BgL_arg3737z00_1522 = CAR(BgL_l3356z00_1505);
												{	/* Ast/alphatize.scm 211 */
													BgL_nodez00_bglt BgL_res4127z00_2670;

													{	/* Ast/alphatize.scm 211 */
														BgL_nodez00_bglt BgL_nodez00_2644;

														BgL_nodez00_2644 =
															(BgL_nodez00_bglt) (BgL_arg3737z00_1522);
														{	/* Ast/alphatize.scm 211 */
															obj_t BgL_method3435z00_2645;

															{	/* Ast/alphatize.scm 211 */
																BgL_objectz00_bglt BgL_objz00_2646;

																BgL_objz00_2646 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2644);
																{	/* Ast/alphatize.scm 211 */
																	long BgL_objzd2classzd2numz00_2647;

																	BgL_objzd2classzd2numz00_2647 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2646);
																	{	/* Ast/alphatize.scm 211 */
																		obj_t BgL_arg2643z00_2648;

																		BgL_arg2643z00_2648 =
																			PROCEDURE_REF
																			(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																			(int) (((long) 1)));
																		{	/* Ast/alphatize.scm 211 */
																			obj_t BgL_arrayz00_2650;

																			int BgL_offsetz00_2651;

																			BgL_arrayz00_2650 = BgL_arg2643z00_2648;
																			BgL_offsetz00_2651 =
																				(int) (BgL_objzd2classzd2numz00_2647);
																			{	/* Ast/alphatize.scm 211 */
																				long BgL_offsetz00_2652;

																				BgL_offsetz00_2652 =
																					(
																					(long) (BgL_offsetz00_2651) -
																					OBJECT_TYPE);
																				{	/* Ast/alphatize.scm 211 */
																					long BgL_modz00_2653;

																					{	/* Ast/alphatize.scm 211 */
																						int BgL_arg2645z00_2654;

																						BgL_arg2645z00_2654 =
																							(int) (((long) 16));
																						{	/* Ast/alphatize.scm 211 */
																							long BgL_auxz00_5587;

																							BgL_auxz00_5587 =
																								(long) (BgL_arg2645z00_2654);
																							BgL_modz00_2653 =
																								(BgL_offsetz00_2652 /
																								BgL_auxz00_5587);
																					}}
																					{	/* Ast/alphatize.scm 211 */
																						long BgL_restz00_2655;

																						{	/* Ast/alphatize.scm 211 */
																							int BgL_arg2644z00_2656;

																							BgL_arg2644z00_2656 =
																								(int) (((long) 16));
																							{	/* Ast/alphatize.scm 211 */
																								long BgL_auxz00_5591;

																								BgL_auxz00_5591 =
																									(long) (BgL_arg2644z00_2656);
																								BgL_restz00_2655 =
																									(BgL_offsetz00_2652 %
																									BgL_auxz00_5591);
																						}}
																						{	/* Ast/alphatize.scm 211 */

																							BgL_method3435z00_2645 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2650,
																									(int) (BgL_modz00_2653)),
																								(int) (BgL_restz00_2655));
															}}}}}}}}
															BgL_res4127z00_2670 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3435z00_2645)
																(BgL_method3435z00_2645,
																	(obj_t) (BgL_nodez00_2644), BEOA));
													}}
													BgL_arg3735z00_1520 = BgL_res4127z00_2670;
											}}
											BgL_head3358z00_1507 =
												MAKE_PAIR((obj_t) (BgL_arg3735z00_1520), BNIL);
										}
										{	/* Ast/alphatize.scm 211 */
											obj_t BgL_g3361z00_1508;

											BgL_g3361z00_1508 = CDR(BgL_l3356z00_1505);
											{
												obj_t BgL_l3356z00_1510;

												obj_t BgL_tail3359z00_1511;

												BgL_l3356z00_1510 = BgL_g3361z00_1508;
												BgL_tail3359z00_1511 = BgL_head3358z00_1507;
											BgL_zc3anonymousza33729ze3z83_1512:
												if (NULLP(BgL_l3356z00_1510))
													{	/* Ast/alphatize.scm 211 */
														BgL_arg3723z00_1500 = BgL_head3358z00_1507;
													}
												else
													{	/* Ast/alphatize.scm 211 */
														obj_t BgL_newtail3360z00_1514;

														{	/* Ast/alphatize.scm 211 */
															BgL_nodez00_bglt BgL_arg3732z00_1516;

															{	/* Ast/alphatize.scm 211 */
																obj_t BgL_arg3734z00_1518;

																BgL_arg3734z00_1518 = CAR(BgL_l3356z00_1510);
																{	/* Ast/alphatize.scm 211 */
																	BgL_nodez00_bglt BgL_res4130z00_2702;

																	{	/* Ast/alphatize.scm 211 */
																		BgL_nodez00_bglt BgL_nodez00_2676;

																		BgL_nodez00_2676 =
																			(BgL_nodez00_bglt) (BgL_arg3734z00_1518);
																		{	/* Ast/alphatize.scm 211 */
																			obj_t BgL_method3435z00_2677;

																			{	/* Ast/alphatize.scm 211 */
																				BgL_objectz00_bglt BgL_objz00_2678;

																				BgL_objz00_2678 =
																					(BgL_objectz00_bglt)
																					(BgL_nodez00_2676);
																				{	/* Ast/alphatize.scm 211 */
																					long BgL_objzd2classzd2numz00_2679;

																					BgL_objzd2classzd2numz00_2679 =
																						BGL_OBJECT_CLASS_NUM
																						(BgL_objz00_2678);
																					{	/* Ast/alphatize.scm 211 */
																						obj_t BgL_arg2643z00_2680;

																						BgL_arg2643z00_2680 =
																							PROCEDURE_REF
																							(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																							(int) (((long) 1)));
																						{	/* Ast/alphatize.scm 211 */
																							obj_t BgL_arrayz00_2682;

																							int BgL_offsetz00_2683;

																							BgL_arrayz00_2682 =
																								BgL_arg2643z00_2680;
																							BgL_offsetz00_2683 =
																								(int)
																								(BgL_objzd2classzd2numz00_2679);
																							{	/* Ast/alphatize.scm 211 */
																								long BgL_offsetz00_2684;

																								BgL_offsetz00_2684 =
																									(
																									(long) (BgL_offsetz00_2683) -
																									OBJECT_TYPE);
																								{	/* Ast/alphatize.scm 211 */
																									long BgL_modz00_2685;

																									{	/* Ast/alphatize.scm 211 */
																										int BgL_arg2645z00_2686;

																										BgL_arg2645z00_2686 =
																											(int) (((long) 16));
																										{	/* Ast/alphatize.scm 211 */
																											long BgL_auxz00_5617;

																											BgL_auxz00_5617 =
																												(long)
																												(BgL_arg2645z00_2686);
																											BgL_modz00_2685 =
																												(BgL_offsetz00_2684 /
																												BgL_auxz00_5617);
																									}}
																									{	/* Ast/alphatize.scm 211 */
																										long BgL_restz00_2687;

																										{	/* Ast/alphatize.scm 211 */
																											int BgL_arg2644z00_2688;

																											BgL_arg2644z00_2688 =
																												(int) (((long) 16));
																											{	/* Ast/alphatize.scm 211 */
																												long BgL_auxz00_5621;

																												BgL_auxz00_5621 =
																													(long)
																													(BgL_arg2644z00_2688);
																												BgL_restz00_2687 =
																													(BgL_offsetz00_2684 %
																													BgL_auxz00_5621);
																										}}
																										{	/* Ast/alphatize.scm 211 */

																											BgL_method3435z00_2677 =
																												VECTOR_REF(VECTOR_REF
																												(BgL_arrayz00_2682,
																													(int)
																													(BgL_modz00_2685)),
																												(int)
																												(BgL_restz00_2687));
																			}}}}}}}}
																			BgL_res4130z00_2702 =
																				(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																				(BgL_method3435z00_2677)
																				(BgL_method3435z00_2677,
																					(obj_t) (BgL_nodez00_2676), BEOA));
																	}}
																	BgL_arg3732z00_1516 = BgL_res4130z00_2702;
															}}
															BgL_newtail3360z00_1514 =
																MAKE_PAIR((obj_t) (BgL_arg3732z00_1516), BNIL);
														}
														SET_CDR(BgL_tail3359z00_1511,
															BgL_newtail3360z00_1514);
														{
															obj_t BgL_tail3359z00_5637;

															obj_t BgL_l3356z00_5635;

															BgL_l3356z00_5635 = CDR(BgL_l3356z00_1510);
															BgL_tail3359z00_5637 = BgL_newtail3360z00_1514;
															BgL_tail3359z00_1511 = BgL_tail3359z00_5637;
															BgL_l3356z00_1510 = BgL_l3356z00_5635;
															goto BgL_zc3anonymousza33729ze3z83_1512;
														}
													}
											}
										}
									}
							}
							{
								BgL_externz00_bglt BgL_auxz00_5638;

								BgL_auxz00_5638 = (BgL_externz00_bglt) (BgL_nodez00_1491);
								BgL_arg3724z00_1501 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_5638))->BgL_effectz00);
							}
							BgL_arg3725z00_1502 =
								(((BgL_getfieldz00_bglt) CREF(BgL_nodez00_1491))->BgL_fnamez00);
							BgL_arg3726z00_1503 =
								(((BgL_getfieldz00_bglt) CREF(BgL_nodez00_1491))->BgL_ftypez00);
							BgL_arg3727z00_1504 =
								(((BgL_getfieldz00_bglt) CREF(BgL_nodez00_1491))->BgL_otypez00);
							BgL_new3276z00_1495 =
								BGl_makezd2getfieldzd2zzast_nodez00(BgL_arg3719z00_1496,
								BgL_arg3720z00_1497, BgL_arg3721z00_1498, BgL_arg3722z00_1499,
								BgL_arg3723z00_1500, BgL_arg3724z00_1501, BgL_arg3725z00_1502,
								BgL_arg3726z00_1503, BgL_arg3727z00_1504);
						}
						{	/* Ast/alphatize.scm 209 */

							BgL_auxz00_5560 = BgL_new3276z00_1495;
						}
					}
					return (obj_t) (BgL_auxz00_5560);
				}
			}
		}
	}



/* do-alphatize-pragma3453 */
	obj_t BGl_dozd2alphatiza7ezd2pragma3453za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3948, obj_t BgL_nodez00_3949)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 200 */
			{
				BgL_pragmaz00_bglt BgL_nodez00_1459;

				{	/* Ast/alphatize.scm 201 */
					BgL_pragmaz00_bglt BgL_auxz00_5647;

					BgL_nodez00_1459 = (BgL_pragmaz00_bglt) (BgL_nodez00_3949);
					{	/* Ast/alphatize.scm 202 */
						BgL_pragmaz00_bglt BgL_new3274z00_1463;

						{	/* Ast/alphatize.scm 202 */
							obj_t BgL_arg3701z00_1464;

							BgL_typez00_bglt BgL_arg3702z00_1465;

							obj_t BgL_arg3703z00_1466;

							obj_t BgL_arg3704z00_1467;

							obj_t BgL_arg3705z00_1468;

							obj_t BgL_arg3706z00_1469;

							obj_t BgL_arg3707z00_1470;

							BgL_arg3701z00_1464 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_1459));
							{
								BgL_nodez00_bglt BgL_auxz00_5650;

								BgL_auxz00_5650 = (BgL_nodez00_bglt) (BgL_nodez00_1459);
								BgL_arg3702z00_1465 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_5650))->BgL_typez00);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_5653;

								BgL_auxz00_5653 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1459);
								BgL_arg3703z00_1466 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_5653))->
									BgL_sidezd2effectzf3z21);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_5656;

								BgL_auxz00_5656 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1459);
								BgL_arg3704z00_1467 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_5656))->
									BgL_keyz00);
							}
							{	/* Ast/alphatize.scm 203 */
								obj_t BgL_l3350z00_1471;

								{
									BgL_externz00_bglt BgL_auxz00_5659;

									BgL_auxz00_5659 = (BgL_externz00_bglt) (BgL_nodez00_1459);
									BgL_l3350z00_1471 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_5659))->
										BgL_exprza2za2);
								}
								if (NULLP(BgL_l3350z00_1471))
									{	/* Ast/alphatize.scm 203 */
										BgL_arg3705z00_1468 = BNIL;
									}
								else
									{	/* Ast/alphatize.scm 203 */
										obj_t BgL_head3352z00_1473;

										{	/* Ast/alphatize.scm 203 */
											BgL_nodez00_bglt BgL_arg3715z00_1486;

											{	/* Ast/alphatize.scm 203 */
												obj_t BgL_arg3717z00_1488;

												BgL_arg3717z00_1488 = CAR(BgL_l3350z00_1471);
												{	/* Ast/alphatize.scm 203 */
													BgL_nodez00_bglt BgL_res4121z00_2598;

													{	/* Ast/alphatize.scm 203 */
														BgL_nodez00_bglt BgL_nodez00_2572;

														BgL_nodez00_2572 =
															(BgL_nodez00_bglt) (BgL_arg3717z00_1488);
														{	/* Ast/alphatize.scm 203 */
															obj_t BgL_method3435z00_2573;

															{	/* Ast/alphatize.scm 203 */
																BgL_objectz00_bglt BgL_objz00_2574;

																BgL_objz00_2574 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2572);
																{	/* Ast/alphatize.scm 203 */
																	long BgL_objzd2classzd2numz00_2575;

																	BgL_objzd2classzd2numz00_2575 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2574);
																	{	/* Ast/alphatize.scm 203 */
																		obj_t BgL_arg2643z00_2576;

																		BgL_arg2643z00_2576 =
																			PROCEDURE_REF
																			(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																			(int) (((long) 1)));
																		{	/* Ast/alphatize.scm 203 */
																			obj_t BgL_arrayz00_2578;

																			int BgL_offsetz00_2579;

																			BgL_arrayz00_2578 = BgL_arg2643z00_2576;
																			BgL_offsetz00_2579 =
																				(int) (BgL_objzd2classzd2numz00_2575);
																			{	/* Ast/alphatize.scm 203 */
																				long BgL_offsetz00_2580;

																				BgL_offsetz00_2580 =
																					(
																					(long) (BgL_offsetz00_2579) -
																					OBJECT_TYPE);
																				{	/* Ast/alphatize.scm 203 */
																					long BgL_modz00_2581;

																					{	/* Ast/alphatize.scm 203 */
																						int BgL_arg2645z00_2582;

																						BgL_arg2645z00_2582 =
																							(int) (((long) 16));
																						{	/* Ast/alphatize.scm 203 */
																							long BgL_auxz00_5674;

																							BgL_auxz00_5674 =
																								(long) (BgL_arg2645z00_2582);
																							BgL_modz00_2581 =
																								(BgL_offsetz00_2580 /
																								BgL_auxz00_5674);
																					}}
																					{	/* Ast/alphatize.scm 203 */
																						long BgL_restz00_2583;

																						{	/* Ast/alphatize.scm 203 */
																							int BgL_arg2644z00_2584;

																							BgL_arg2644z00_2584 =
																								(int) (((long) 16));
																							{	/* Ast/alphatize.scm 203 */
																								long BgL_auxz00_5678;

																								BgL_auxz00_5678 =
																									(long) (BgL_arg2644z00_2584);
																								BgL_restz00_2583 =
																									(BgL_offsetz00_2580 %
																									BgL_auxz00_5678);
																						}}
																						{	/* Ast/alphatize.scm 203 */

																							BgL_method3435z00_2573 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2578,
																									(int) (BgL_modz00_2581)),
																								(int) (BgL_restz00_2583));
															}}}}}}}}
															BgL_res4121z00_2598 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3435z00_2573)
																(BgL_method3435z00_2573,
																	(obj_t) (BgL_nodez00_2572), BEOA));
													}}
													BgL_arg3715z00_1486 = BgL_res4121z00_2598;
											}}
											BgL_head3352z00_1473 =
												MAKE_PAIR((obj_t) (BgL_arg3715z00_1486), BNIL);
										}
										{	/* Ast/alphatize.scm 203 */
											obj_t BgL_g3355z00_1474;

											BgL_g3355z00_1474 = CDR(BgL_l3350z00_1471);
											{
												obj_t BgL_l3350z00_1476;

												obj_t BgL_tail3353z00_1477;

												BgL_l3350z00_1476 = BgL_g3355z00_1474;
												BgL_tail3353z00_1477 = BgL_head3352z00_1473;
											BgL_zc3anonymousza33709ze3z83_1478:
												if (NULLP(BgL_l3350z00_1476))
													{	/* Ast/alphatize.scm 203 */
														BgL_arg3705z00_1468 = BgL_head3352z00_1473;
													}
												else
													{	/* Ast/alphatize.scm 203 */
														obj_t BgL_newtail3354z00_1480;

														{	/* Ast/alphatize.scm 203 */
															BgL_nodez00_bglt BgL_arg3712z00_1482;

															{	/* Ast/alphatize.scm 203 */
																obj_t BgL_arg3714z00_1484;

																BgL_arg3714z00_1484 = CAR(BgL_l3350z00_1476);
																{	/* Ast/alphatize.scm 203 */
																	BgL_nodez00_bglt BgL_res4124z00_2630;

																	{	/* Ast/alphatize.scm 203 */
																		BgL_nodez00_bglt BgL_nodez00_2604;

																		BgL_nodez00_2604 =
																			(BgL_nodez00_bglt) (BgL_arg3714z00_1484);
																		{	/* Ast/alphatize.scm 203 */
																			obj_t BgL_method3435z00_2605;

																			{	/* Ast/alphatize.scm 203 */
																				BgL_objectz00_bglt BgL_objz00_2606;

																				BgL_objz00_2606 =
																					(BgL_objectz00_bglt)
																					(BgL_nodez00_2604);
																				{	/* Ast/alphatize.scm 203 */
																					long BgL_objzd2classzd2numz00_2607;

																					BgL_objzd2classzd2numz00_2607 =
																						BGL_OBJECT_CLASS_NUM
																						(BgL_objz00_2606);
																					{	/* Ast/alphatize.scm 203 */
																						obj_t BgL_arg2643z00_2608;

																						BgL_arg2643z00_2608 =
																							PROCEDURE_REF
																							(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																							(int) (((long) 1)));
																						{	/* Ast/alphatize.scm 203 */
																							obj_t BgL_arrayz00_2610;

																							int BgL_offsetz00_2611;

																							BgL_arrayz00_2610 =
																								BgL_arg2643z00_2608;
																							BgL_offsetz00_2611 =
																								(int)
																								(BgL_objzd2classzd2numz00_2607);
																							{	/* Ast/alphatize.scm 203 */
																								long BgL_offsetz00_2612;

																								BgL_offsetz00_2612 =
																									(
																									(long) (BgL_offsetz00_2611) -
																									OBJECT_TYPE);
																								{	/* Ast/alphatize.scm 203 */
																									long BgL_modz00_2613;

																									{	/* Ast/alphatize.scm 203 */
																										int BgL_arg2645z00_2614;

																										BgL_arg2645z00_2614 =
																											(int) (((long) 16));
																										{	/* Ast/alphatize.scm 203 */
																											long BgL_auxz00_5704;

																											BgL_auxz00_5704 =
																												(long)
																												(BgL_arg2645z00_2614);
																											BgL_modz00_2613 =
																												(BgL_offsetz00_2612 /
																												BgL_auxz00_5704);
																									}}
																									{	/* Ast/alphatize.scm 203 */
																										long BgL_restz00_2615;

																										{	/* Ast/alphatize.scm 203 */
																											int BgL_arg2644z00_2616;

																											BgL_arg2644z00_2616 =
																												(int) (((long) 16));
																											{	/* Ast/alphatize.scm 203 */
																												long BgL_auxz00_5708;

																												BgL_auxz00_5708 =
																													(long)
																													(BgL_arg2644z00_2616);
																												BgL_restz00_2615 =
																													(BgL_offsetz00_2612 %
																													BgL_auxz00_5708);
																										}}
																										{	/* Ast/alphatize.scm 203 */

																											BgL_method3435z00_2605 =
																												VECTOR_REF(VECTOR_REF
																												(BgL_arrayz00_2610,
																													(int)
																													(BgL_modz00_2613)),
																												(int)
																												(BgL_restz00_2615));
																			}}}}}}}}
																			BgL_res4124z00_2630 =
																				(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																				(BgL_method3435z00_2605)
																				(BgL_method3435z00_2605,
																					(obj_t) (BgL_nodez00_2604), BEOA));
																	}}
																	BgL_arg3712z00_1482 = BgL_res4124z00_2630;
															}}
															BgL_newtail3354z00_1480 =
																MAKE_PAIR((obj_t) (BgL_arg3712z00_1482), BNIL);
														}
														SET_CDR(BgL_tail3353z00_1477,
															BgL_newtail3354z00_1480);
														{
															obj_t BgL_tail3353z00_5724;

															obj_t BgL_l3350z00_5722;

															BgL_l3350z00_5722 = CDR(BgL_l3350z00_1476);
															BgL_tail3353z00_5724 = BgL_newtail3354z00_1480;
															BgL_tail3353z00_1477 = BgL_tail3353z00_5724;
															BgL_l3350z00_1476 = BgL_l3350z00_5722;
															goto BgL_zc3anonymousza33709ze3z83_1478;
														}
													}
											}
										}
									}
							}
							{
								BgL_externz00_bglt BgL_auxz00_5725;

								BgL_auxz00_5725 = (BgL_externz00_bglt) (BgL_nodez00_1459);
								BgL_arg3706z00_1469 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_5725))->BgL_effectz00);
							}
							BgL_arg3707z00_1470 =
								(((BgL_pragmaz00_bglt) CREF(BgL_nodez00_1459))->BgL_formatz00);
							BgL_new3274z00_1463 =
								BGl_makezd2pragmazd2zzast_nodez00(BgL_arg3701z00_1464,
								BgL_arg3702z00_1465, BgL_arg3703z00_1466, BgL_arg3704z00_1467,
								BgL_arg3705z00_1468, BgL_arg3706z00_1469, BgL_arg3707z00_1470);
						}
						{	/* Ast/alphatize.scm 201 */

							BgL_auxz00_5647 = BgL_new3274z00_1463;
						}
					}
					return (obj_t) (BgL_auxz00_5647);
				}
			}
		}
	}



/* do-alphatize-funcall3451 */
	obj_t BGl_dozd2alphatiza7ezd2funcall3451za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3950, obj_t BgL_nodez00_3951)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 186 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1414;

				BgL_nodez00_1414 = (BgL_funcallz00_bglt) (BgL_nodez00_3951);
				{	/* Ast/alphatize.scm 187 */
					BgL_nodez00_bglt BgL_funz00_1417;

					obj_t BgL_argsz00_1418;

					{	/* Ast/alphatize.scm 187 */
						BgL_nodez00_bglt BgL_arg3689z00_1438;

						BgL_arg3689z00_1438 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1414))->BgL_funz00);
						{	/* Ast/alphatize.scm 187 */
							BgL_nodez00_bglt BgL_res4112z00_2490;

							{	/* Ast/alphatize.scm 187 */
								obj_t BgL_method3435z00_2465;

								{	/* Ast/alphatize.scm 187 */
									BgL_objectz00_bglt BgL_objz00_2466;

									BgL_objz00_2466 = (BgL_objectz00_bglt) (BgL_arg3689z00_1438);
									{	/* Ast/alphatize.scm 187 */
										long BgL_objzd2classzd2numz00_2467;

										BgL_objzd2classzd2numz00_2467 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2466);
										{	/* Ast/alphatize.scm 187 */
											obj_t BgL_arg2643z00_2468;

											BgL_arg2643z00_2468 =
												PROCEDURE_REF
												(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
												(int) (((long) 1)));
											{	/* Ast/alphatize.scm 187 */
												obj_t BgL_arrayz00_2470;

												int BgL_offsetz00_2471;

												BgL_arrayz00_2470 = BgL_arg2643z00_2468;
												BgL_offsetz00_2471 =
													(int) (BgL_objzd2classzd2numz00_2467);
												{	/* Ast/alphatize.scm 187 */
													long BgL_offsetz00_2472;

													BgL_offsetz00_2472 =
														((long) (BgL_offsetz00_2471) - OBJECT_TYPE);
													{	/* Ast/alphatize.scm 187 */
														long BgL_modz00_2473;

														{	/* Ast/alphatize.scm 187 */
															int BgL_arg2645z00_2474;

															BgL_arg2645z00_2474 = (int) (((long) 16));
															{	/* Ast/alphatize.scm 187 */
																long BgL_auxz00_5741;

																BgL_auxz00_5741 = (long) (BgL_arg2645z00_2474);
																BgL_modz00_2473 =
																	(BgL_offsetz00_2472 / BgL_auxz00_5741);
														}}
														{	/* Ast/alphatize.scm 187 */
															long BgL_restz00_2475;

															{	/* Ast/alphatize.scm 187 */
																int BgL_arg2644z00_2476;

																BgL_arg2644z00_2476 = (int) (((long) 16));
																{	/* Ast/alphatize.scm 187 */
																	long BgL_auxz00_5745;

																	BgL_auxz00_5745 =
																		(long) (BgL_arg2644z00_2476);
																	BgL_restz00_2475 =
																		(BgL_offsetz00_2472 % BgL_auxz00_5745);
															}}
															{	/* Ast/alphatize.scm 187 */

																BgL_method3435z00_2465 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2470,
																		(int) (BgL_modz00_2473)),
																	(int) (BgL_restz00_2475));
								}}}}}}}}
								BgL_res4112z00_2490 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3435z00_2465)
									(BgL_method3435z00_2465, (obj_t) (BgL_arg3689z00_1438),
										BEOA));
							}
							BgL_funz00_1417 = BgL_res4112z00_2490;
					}}
					{	/* Ast/alphatize.scm 188 */
						obj_t BgL_l3344z00_1439;

						BgL_l3344z00_1439 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1414))->BgL_argsz00);
						if (NULLP(BgL_l3344z00_1439))
							{	/* Ast/alphatize.scm 188 */
								BgL_argsz00_1418 = BNIL;
							}
						else
							{	/* Ast/alphatize.scm 188 */
								obj_t BgL_head3346z00_1441;

								{	/* Ast/alphatize.scm 188 */
									BgL_nodez00_bglt BgL_arg3697z00_1454;

									{	/* Ast/alphatize.scm 188 */
										obj_t BgL_arg3699z00_1456;

										BgL_arg3699z00_1456 = CAR(BgL_l3344z00_1439);
										{	/* Ast/alphatize.scm 188 */
											BgL_nodez00_bglt BgL_res4115z00_2520;

											{	/* Ast/alphatize.scm 188 */
												BgL_nodez00_bglt BgL_nodez00_2494;

												BgL_nodez00_2494 =
													(BgL_nodez00_bglt) (BgL_arg3699z00_1456);
												{	/* Ast/alphatize.scm 188 */
													obj_t BgL_method3435z00_2495;

													{	/* Ast/alphatize.scm 188 */
														BgL_objectz00_bglt BgL_objz00_2496;

														BgL_objz00_2496 =
															(BgL_objectz00_bglt) (BgL_nodez00_2494);
														{	/* Ast/alphatize.scm 188 */
															long BgL_objzd2classzd2numz00_2497;

															BgL_objzd2classzd2numz00_2497 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2496);
															{	/* Ast/alphatize.scm 188 */
																obj_t BgL_arg2643z00_2498;

																BgL_arg2643z00_2498 =
																	PROCEDURE_REF
																	(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																	(int) (((long) 1)));
																{	/* Ast/alphatize.scm 188 */
																	obj_t BgL_arrayz00_2500;

																	int BgL_offsetz00_2501;

																	BgL_arrayz00_2500 = BgL_arg2643z00_2498;
																	BgL_offsetz00_2501 =
																		(int) (BgL_objzd2classzd2numz00_2497);
																	{	/* Ast/alphatize.scm 188 */
																		long BgL_offsetz00_2502;

																		BgL_offsetz00_2502 =
																			(
																			(long) (BgL_offsetz00_2501) -
																			OBJECT_TYPE);
																		{	/* Ast/alphatize.scm 188 */
																			long BgL_modz00_2503;

																			{	/* Ast/alphatize.scm 188 */
																				int BgL_arg2645z00_2504;

																				BgL_arg2645z00_2504 =
																					(int) (((long) 16));
																				{	/* Ast/alphatize.scm 188 */
																					long BgL_auxz00_5769;

																					BgL_auxz00_5769 =
																						(long) (BgL_arg2645z00_2504);
																					BgL_modz00_2503 =
																						(BgL_offsetz00_2502 /
																						BgL_auxz00_5769);
																			}}
																			{	/* Ast/alphatize.scm 188 */
																				long BgL_restz00_2505;

																				{	/* Ast/alphatize.scm 188 */
																					int BgL_arg2644z00_2506;

																					BgL_arg2644z00_2506 =
																						(int) (((long) 16));
																					{	/* Ast/alphatize.scm 188 */
																						long BgL_auxz00_5773;

																						BgL_auxz00_5773 =
																							(long) (BgL_arg2644z00_2506);
																						BgL_restz00_2505 =
																							(BgL_offsetz00_2502 %
																							BgL_auxz00_5773);
																				}}
																				{	/* Ast/alphatize.scm 188 */

																					BgL_method3435z00_2495 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2500,
																							(int) (BgL_modz00_2503)),
																						(int) (BgL_restz00_2505));
													}}}}}}}}
													BgL_res4115z00_2520 =
														(BgL_nodez00_bglt) (PROCEDURE_ENTRY
														(BgL_method3435z00_2495) (BgL_method3435z00_2495,
															(obj_t) (BgL_nodez00_2494), BEOA));
											}}
											BgL_arg3697z00_1454 = BgL_res4115z00_2520;
									}}
									BgL_head3346z00_1441 =
										MAKE_PAIR((obj_t) (BgL_arg3697z00_1454), BNIL);
								}
								{	/* Ast/alphatize.scm 188 */
									obj_t BgL_g3349z00_1442;

									BgL_g3349z00_1442 = CDR(BgL_l3344z00_1439);
									{
										obj_t BgL_l3344z00_1444;

										obj_t BgL_tail3347z00_1445;

										BgL_l3344z00_1444 = BgL_g3349z00_1442;
										BgL_tail3347z00_1445 = BgL_head3346z00_1441;
									BgL_zc3anonymousza33691ze3z83_1446:
										if (NULLP(BgL_l3344z00_1444))
											{	/* Ast/alphatize.scm 188 */
												BgL_argsz00_1418 = BgL_head3346z00_1441;
											}
										else
											{	/* Ast/alphatize.scm 188 */
												obj_t BgL_newtail3348z00_1448;

												{	/* Ast/alphatize.scm 188 */
													BgL_nodez00_bglt BgL_arg3694z00_1450;

													{	/* Ast/alphatize.scm 188 */
														obj_t BgL_arg3696z00_1452;

														BgL_arg3696z00_1452 = CAR(BgL_l3344z00_1444);
														{	/* Ast/alphatize.scm 188 */
															BgL_nodez00_bglt BgL_res4118z00_2552;

															{	/* Ast/alphatize.scm 188 */
																BgL_nodez00_bglt BgL_nodez00_2526;

																BgL_nodez00_2526 =
																	(BgL_nodez00_bglt) (BgL_arg3696z00_1452);
																{	/* Ast/alphatize.scm 188 */
																	obj_t BgL_method3435z00_2527;

																	{	/* Ast/alphatize.scm 188 */
																		BgL_objectz00_bglt BgL_objz00_2528;

																		BgL_objz00_2528 =
																			(BgL_objectz00_bglt) (BgL_nodez00_2526);
																		{	/* Ast/alphatize.scm 188 */
																			long BgL_objzd2classzd2numz00_2529;

																			BgL_objzd2classzd2numz00_2529 =
																				BGL_OBJECT_CLASS_NUM(BgL_objz00_2528);
																			{	/* Ast/alphatize.scm 188 */
																				obj_t BgL_arg2643z00_2530;

																				BgL_arg2643z00_2530 =
																					PROCEDURE_REF
																					(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																					(int) (((long) 1)));
																				{	/* Ast/alphatize.scm 188 */
																					obj_t BgL_arrayz00_2532;

																					int BgL_offsetz00_2533;

																					BgL_arrayz00_2532 =
																						BgL_arg2643z00_2530;
																					BgL_offsetz00_2533 =
																						(int)
																						(BgL_objzd2classzd2numz00_2529);
																					{	/* Ast/alphatize.scm 188 */
																						long BgL_offsetz00_2534;

																						BgL_offsetz00_2534 =
																							(
																							(long) (BgL_offsetz00_2533) -
																							OBJECT_TYPE);
																						{	/* Ast/alphatize.scm 188 */
																							long BgL_modz00_2535;

																							{	/* Ast/alphatize.scm 188 */
																								int BgL_arg2645z00_2536;

																								BgL_arg2645z00_2536 =
																									(int) (((long) 16));
																								{	/* Ast/alphatize.scm 188 */
																									long BgL_auxz00_5799;

																									BgL_auxz00_5799 =
																										(long)
																										(BgL_arg2645z00_2536);
																									BgL_modz00_2535 =
																										(BgL_offsetz00_2534 /
																										BgL_auxz00_5799);
																							}}
																							{	/* Ast/alphatize.scm 188 */
																								long BgL_restz00_2537;

																								{	/* Ast/alphatize.scm 188 */
																									int BgL_arg2644z00_2538;

																									BgL_arg2644z00_2538 =
																										(int) (((long) 16));
																									{	/* Ast/alphatize.scm 188 */
																										long BgL_auxz00_5803;

																										BgL_auxz00_5803 =
																											(long)
																											(BgL_arg2644z00_2538);
																										BgL_restz00_2537 =
																											(BgL_offsetz00_2534 %
																											BgL_auxz00_5803);
																								}}
																								{	/* Ast/alphatize.scm 188 */

																									BgL_method3435z00_2527 =
																										VECTOR_REF(VECTOR_REF
																										(BgL_arrayz00_2532,
																											(int) (BgL_modz00_2535)),
																										(int) (BgL_restz00_2537));
																	}}}}}}}}
																	BgL_res4118z00_2552 =
																		(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																		(BgL_method3435z00_2527)
																		(BgL_method3435z00_2527,
																			(obj_t) (BgL_nodez00_2526), BEOA));
															}}
															BgL_arg3694z00_1450 = BgL_res4118z00_2552;
													}}
													BgL_newtail3348z00_1448 =
														MAKE_PAIR((obj_t) (BgL_arg3694z00_1450), BNIL);
												}
												SET_CDR(BgL_tail3347z00_1445, BgL_newtail3348z00_1448);
												{
													obj_t BgL_tail3347z00_5819;

													obj_t BgL_l3344z00_5817;

													BgL_l3344z00_5817 = CDR(BgL_l3344z00_1444);
													BgL_tail3347z00_5819 = BgL_newtail3348z00_1448;
													BgL_tail3347z00_1445 = BgL_tail3347z00_5819;
													BgL_l3344z00_1444 = BgL_l3344z00_5817;
													goto BgL_zc3anonymousza33691ze3z83_1446;
												}
											}
									}
								}
							}
					}
					{	/* Ast/alphatize.scm 189 */
						bool_t BgL_testz00_5820;

						{	/* Ast/alphatize.scm 189 */
							obj_t BgL_obj2190z00_2558;

							BgL_obj2190z00_2558 = (obj_t) (BgL_funz00_1417);
							BgL_testz00_5820 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2190z00_2558,
								BGl_closurez00zzast_nodez00);
						}
						if (BgL_testz00_5820)
							{	/* Ast/alphatize.scm 190 */
								obj_t BgL_arg3674z00_1420;

								obj_t BgL_arg3677z00_1422;

								obj_t BgL_arg3678z00_1423;

								{	/* Ast/alphatize.scm 190 */
									BgL_varz00_bglt BgL_arg3679z00_1424;

									obj_t BgL_arg3680z00_1425;

									{	/* Ast/alphatize.scm 190 */
										BgL_varz00_bglt BgL_duplicated3269z00_1426;

										BgL_duplicated3269z00_1426 =
											(BgL_varz00_bglt) (
											(BgL_closurez00_bglt) (BgL_funz00_1417));
										{	/* Ast/alphatize.scm 190 */
											BgL_varz00_bglt BgL_new3270z00_1427;

											{	/* Ast/alphatize.scm 190 */
												obj_t BgL_arg3681z00_1428;

												BgL_typez00_bglt BgL_arg3682z00_1429;

												BgL_variablez00_bglt BgL_arg3683z00_1430;

												{
													BgL_nodez00_bglt BgL_auxz00_5825;

													BgL_auxz00_5825 =
														(BgL_nodez00_bglt) (BgL_duplicated3269z00_1426);
													BgL_arg3681z00_1428 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_5825))->
														BgL_locz00);
												}
												{
													BgL_nodez00_bglt BgL_auxz00_5828;

													BgL_auxz00_5828 =
														(BgL_nodez00_bglt) (BgL_duplicated3269z00_1426);
													BgL_arg3682z00_1429 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_5828))->
														BgL_typez00);
												}
												BgL_arg3683z00_1430 =
													(((BgL_varz00_bglt)
														CREF(BgL_duplicated3269z00_1426))->BgL_variablez00);
												BgL_new3270z00_1427 =
													BGl_makezd2varzd2zzast_nodez00(BgL_arg3681z00_1428,
													BgL_arg3682z00_1429, BgL_arg3683z00_1430);
											}
											{	/* Ast/alphatize.scm 190 */

												BgL_arg3679z00_1424 = BgL_new3270z00_1427;
											}
										}
									}
									BgL_arg3680z00_1425 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(CDR
										(BgL_argsz00_1418), BNIL);
									BgL_arg3674z00_1420 =
										MAKE_PAIR((obj_t) (BgL_arg3679z00_1424),
										BgL_arg3680z00_1425);
								}
								{
									BgL_nodez00_bglt BgL_auxz00_5837;

									BgL_auxz00_5837 = (BgL_nodez00_bglt) (BgL_nodez00_1414);
									BgL_arg3677z00_1422 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_5837))->BgL_locz00);
								}
								BgL_arg3678z00_1423 = CNST_TABLE_REF(((long) 3));
								return
									(obj_t) (BGl_sexpzd2ze3nodez31zzast_sexpz00
									(BgL_arg3674z00_1420, BNIL, BgL_arg3677z00_1422,
										BgL_arg3678z00_1423));
							}
						else
							{	/* Ast/alphatize.scm 193 */
								BgL_funcallz00_bglt BgL_new3272z00_1434;

								{	/* Ast/alphatize.scm 193 */
									obj_t BgL_arg3686z00_1435;

									BgL_typez00_bglt BgL_arg3687z00_1436;

									obj_t BgL_arg3688z00_1437;

									BgL_arg3686z00_1435 =
										BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
										(obj_t) (BgL_nodez00_1414));
									{
										BgL_nodez00_bglt BgL_auxz00_5845;

										BgL_auxz00_5845 = (BgL_nodez00_bglt) (BgL_nodez00_1414);
										BgL_arg3687z00_1436 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_5845))->BgL_typez00);
									}
									BgL_arg3688z00_1437 =
										(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1414))->
										BgL_strengthz00);
									BgL_new3272z00_1434 =
										BGl_makezd2funcallzd2zzast_nodez00(BgL_arg3686z00_1435,
										BgL_arg3687z00_1436, BgL_funz00_1417, BgL_argsz00_1418,
										BgL_arg3688z00_1437);
								}
								{	/* Ast/alphatize.scm 192 */

									return (obj_t) (BgL_new3272z00_1434);
								}
							}
					}
				}
			}
		}
	}



/* do-alphatize-app-ly3449 */
	obj_t BGl_dozd2alphatiza7ezd2appzd2ly3449z75zzast_alphatiza7eza7(obj_t
		BgL_envz00_3952, obj_t BgL_nodez00_3953)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 164 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1386;

				BgL_nodez00_1386 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_3953);
				{	/* Ast/alphatize.scm 165 */
					BgL_nodez00_bglt BgL_funz00_1389;

					BgL_nodez00_bglt BgL_argz00_1390;

					{	/* Ast/alphatize.scm 165 */
						BgL_nodez00_bglt BgL_arg3670z00_1410;

						BgL_arg3670z00_1410 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1386))->BgL_funz00);
						{	/* Ast/alphatize.scm 165 */
							BgL_nodez00_bglt BgL_res4106z00_2427;

							{	/* Ast/alphatize.scm 165 */
								obj_t BgL_method3435z00_2402;

								{	/* Ast/alphatize.scm 165 */
									BgL_objectz00_bglt BgL_objz00_2403;

									BgL_objz00_2403 = (BgL_objectz00_bglt) (BgL_arg3670z00_1410);
									{	/* Ast/alphatize.scm 165 */
										long BgL_objzd2classzd2numz00_2404;

										BgL_objzd2classzd2numz00_2404 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2403);
										{	/* Ast/alphatize.scm 165 */
											obj_t BgL_arg2643z00_2405;

											BgL_arg2643z00_2405 =
												PROCEDURE_REF
												(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
												(int) (((long) 1)));
											{	/* Ast/alphatize.scm 165 */
												obj_t BgL_arrayz00_2407;

												int BgL_offsetz00_2408;

												BgL_arrayz00_2407 = BgL_arg2643z00_2405;
												BgL_offsetz00_2408 =
													(int) (BgL_objzd2classzd2numz00_2404);
												{	/* Ast/alphatize.scm 165 */
													long BgL_offsetz00_2409;

													BgL_offsetz00_2409 =
														((long) (BgL_offsetz00_2408) - OBJECT_TYPE);
													{	/* Ast/alphatize.scm 165 */
														long BgL_modz00_2410;

														{	/* Ast/alphatize.scm 165 */
															int BgL_arg2645z00_2411;

															BgL_arg2645z00_2411 = (int) (((long) 16));
															{	/* Ast/alphatize.scm 165 */
																long BgL_auxz00_5861;

																BgL_auxz00_5861 = (long) (BgL_arg2645z00_2411);
																BgL_modz00_2410 =
																	(BgL_offsetz00_2409 / BgL_auxz00_5861);
														}}
														{	/* Ast/alphatize.scm 165 */
															long BgL_restz00_2412;

															{	/* Ast/alphatize.scm 165 */
																int BgL_arg2644z00_2413;

																BgL_arg2644z00_2413 = (int) (((long) 16));
																{	/* Ast/alphatize.scm 165 */
																	long BgL_auxz00_5865;

																	BgL_auxz00_5865 =
																		(long) (BgL_arg2644z00_2413);
																	BgL_restz00_2412 =
																		(BgL_offsetz00_2409 % BgL_auxz00_5865);
															}}
															{	/* Ast/alphatize.scm 165 */

																BgL_method3435z00_2402 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2407,
																		(int) (BgL_modz00_2410)),
																	(int) (BgL_restz00_2412));
								}}}}}}}}
								BgL_res4106z00_2427 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3435z00_2402)
									(BgL_method3435z00_2402, (obj_t) (BgL_arg3670z00_1410),
										BEOA));
							}
							BgL_funz00_1389 = BgL_res4106z00_2427;
					}}
					{	/* Ast/alphatize.scm 166 */
						BgL_nodez00_bglt BgL_arg3671z00_1411;

						BgL_arg3671z00_1411 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1386))->BgL_argz00);
						{	/* Ast/alphatize.scm 166 */
							BgL_nodez00_bglt BgL_res4109z00_2455;

							{	/* Ast/alphatize.scm 166 */
								obj_t BgL_method3435z00_2430;

								{	/* Ast/alphatize.scm 166 */
									BgL_objectz00_bglt BgL_objz00_2431;

									BgL_objz00_2431 = (BgL_objectz00_bglt) (BgL_arg3671z00_1411);
									{	/* Ast/alphatize.scm 166 */
										long BgL_objzd2classzd2numz00_2432;

										BgL_objzd2classzd2numz00_2432 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2431);
										{	/* Ast/alphatize.scm 166 */
											obj_t BgL_arg2643z00_2433;

											BgL_arg2643z00_2433 =
												PROCEDURE_REF
												(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
												(int) (((long) 1)));
											{	/* Ast/alphatize.scm 166 */
												obj_t BgL_arrayz00_2435;

												int BgL_offsetz00_2436;

												BgL_arrayz00_2435 = BgL_arg2643z00_2433;
												BgL_offsetz00_2436 =
													(int) (BgL_objzd2classzd2numz00_2432);
												{	/* Ast/alphatize.scm 166 */
													long BgL_offsetz00_2437;

													BgL_offsetz00_2437 =
														((long) (BgL_offsetz00_2436) - OBJECT_TYPE);
													{	/* Ast/alphatize.scm 166 */
														long BgL_modz00_2438;

														{	/* Ast/alphatize.scm 166 */
															int BgL_arg2645z00_2439;

															BgL_arg2645z00_2439 = (int) (((long) 16));
															{	/* Ast/alphatize.scm 166 */
																long BgL_auxz00_5885;

																BgL_auxz00_5885 = (long) (BgL_arg2645z00_2439);
																BgL_modz00_2438 =
																	(BgL_offsetz00_2437 / BgL_auxz00_5885);
														}}
														{	/* Ast/alphatize.scm 166 */
															long BgL_restz00_2440;

															{	/* Ast/alphatize.scm 166 */
																int BgL_arg2644z00_2441;

																BgL_arg2644z00_2441 = (int) (((long) 16));
																{	/* Ast/alphatize.scm 166 */
																	long BgL_auxz00_5889;

																	BgL_auxz00_5889 =
																		(long) (BgL_arg2644z00_2441);
																	BgL_restz00_2440 =
																		(BgL_offsetz00_2437 % BgL_auxz00_5889);
															}}
															{	/* Ast/alphatize.scm 166 */

																BgL_method3435z00_2430 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2435,
																		(int) (BgL_modz00_2438)),
																	(int) (BgL_restz00_2440));
								}}}}}}}}
								BgL_res4109z00_2455 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3435z00_2430)
									(BgL_method3435z00_2430, (obj_t) (BgL_arg3671z00_1411),
										BEOA));
							}
							BgL_argz00_1390 = BgL_res4109z00_2455;
					}}
					{	/* Ast/alphatize.scm 167 */
						bool_t BgL_testz00_5900;

						{	/* Ast/alphatize.scm 167 */
							bool_t BgL_testz00_5901;

							{	/* Ast/alphatize.scm 167 */
								obj_t BgL_obj2190z00_2456;

								BgL_obj2190z00_2456 = (obj_t) (BgL_funz00_1389);
								BgL_testz00_5901 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj2190z00_2456,
									BGl_closurez00zzast_nodez00);
							}
							if (BgL_testz00_5901)
								{	/* Ast/alphatize.scm 168 */
									bool_t BgL_testz00_5904;

									{	/* Ast/alphatize.scm 168 */
										BgL_variablez00_bglt BgL_arg3668z00_1409;

										{
											BgL_varz00_bglt BgL_auxz00_5905;

											BgL_auxz00_5905 =
												(BgL_varz00_bglt) (
												(BgL_closurez00_bglt) (BgL_funz00_1389));
											BgL_arg3668z00_1409 =
												(((BgL_varz00_bglt) CREF(BgL_auxz00_5905))->
												BgL_variablez00);
										}
										BgL_testz00_5904 =
											BGl_globalzd2optionalzf3z21zzast_varz00(
											(obj_t) (BgL_arg3668z00_1409));
									}
									if (BgL_testz00_5904)
										{	/* Ast/alphatize.scm 168 */
											BgL_testz00_5900 = ((bool_t) 0);
										}
									else
										{	/* Ast/alphatize.scm 169 */
											bool_t BgL_testz00_5911;

											{	/* Ast/alphatize.scm 169 */
												BgL_variablez00_bglt BgL_arg3667z00_1408;

												{
													BgL_varz00_bglt BgL_auxz00_5912;

													BgL_auxz00_5912 =
														(BgL_varz00_bglt) (
														(BgL_closurez00_bglt) (BgL_funz00_1389));
													BgL_arg3667z00_1408 =
														(((BgL_varz00_bglt) CREF(BgL_auxz00_5912))->
														BgL_variablez00);
												}
												BgL_testz00_5911 =
													BGl_globalzd2keyzf3z21zzast_varz00(
													(obj_t) (BgL_arg3667z00_1408));
											}
											if (BgL_testz00_5911)
												{	/* Ast/alphatize.scm 169 */
													BgL_testz00_5900 = ((bool_t) 0);
												}
											else
												{	/* Ast/alphatize.scm 169 */
													BgL_testz00_5900 = ((bool_t) 1);
												}
										}
								}
							else
								{	/* Ast/alphatize.scm 167 */
									BgL_testz00_5900 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_5900)
							{	/* Ast/alphatize.scm 170 */
								obj_t BgL_arg3656z00_1393;

								BgL_varz00_bglt BgL_arg3657z00_1394;

								obj_t BgL_arg3658z00_1395;

								BgL_arg3656z00_1393 =
									BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
									(obj_t) (BgL_nodez00_1386));
								{	/* Ast/alphatize.scm 172 */
									BgL_varz00_bglt BgL_duplicated3265z00_1396;

									BgL_duplicated3265z00_1396 =
										(BgL_varz00_bglt) ((BgL_closurez00_bglt) (BgL_funz00_1389));
									{	/* Ast/alphatize.scm 172 */
										BgL_varz00_bglt BgL_new3266z00_1397;

										{	/* Ast/alphatize.scm 172 */
											obj_t BgL_arg3659z00_1398;

											BgL_typez00_bglt BgL_arg3660z00_1399;

											BgL_variablez00_bglt BgL_arg3661z00_1400;

											{
												BgL_nodez00_bglt BgL_auxz00_5922;

												BgL_auxz00_5922 =
													(BgL_nodez00_bglt) (BgL_duplicated3265z00_1396);
												BgL_arg3659z00_1398 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_5922))->
													BgL_locz00);
											}
											{
												BgL_nodez00_bglt BgL_auxz00_5925;

												BgL_auxz00_5925 =
													(BgL_nodez00_bglt) (BgL_duplicated3265z00_1396);
												BgL_arg3660z00_1399 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_5925))->
													BgL_typez00);
											}
											BgL_arg3661z00_1400 =
												(((BgL_varz00_bglt) CREF(BgL_duplicated3265z00_1396))->
												BgL_variablez00);
											BgL_new3266z00_1397 =
												BGl_makezd2varzd2zzast_nodez00(BgL_arg3659z00_1398,
												BgL_arg3660z00_1399, BgL_arg3661z00_1400);
										}
										{	/* Ast/alphatize.scm 172 */

											BgL_arg3657z00_1394 = BgL_new3266z00_1397;
										}
									}
								}
								BgL_arg3658z00_1395 = CNST_TABLE_REF(((long) 4));
								return
									(obj_t) (BGl_knownzd2appzd2lyzd2ze3nodez31zzast_applyz00(BNIL,
										BgL_arg3656z00_1393,
										(BgL_nodez00_bglt) (BgL_arg3657z00_1394), BgL_argz00_1390,
										BgL_arg3658z00_1395));
							}
						else
							{	/* Ast/alphatize.scm 176 */
								BgL_appzd2lyzd2_bglt BgL_new3268z00_1402;

								{	/* Ast/alphatize.scm 176 */
									obj_t BgL_arg3662z00_1403;

									BgL_typez00_bglt BgL_arg3663z00_1404;

									BgL_arg3662z00_1403 =
										BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
										(obj_t) (BgL_nodez00_1386));
									{
										BgL_nodez00_bglt BgL_auxz00_5936;

										BgL_auxz00_5936 = (BgL_nodez00_bglt) (BgL_nodez00_1386);
										BgL_arg3663z00_1404 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_5936))->BgL_typez00);
									}
									BgL_new3268z00_1402 =
										BGl_makezd2appzd2lyz00zzast_nodez00(BgL_arg3662z00_1403,
										BgL_arg3663z00_1404, BgL_funz00_1389, BgL_argz00_1390);
								}
								{	/* Ast/alphatize.scm 175 */

									return (obj_t) (BgL_new3268z00_1402);
								}
							}
					}
				}
			}
		}
	}



/* do-alphatize-app3447 */
	obj_t BGl_dozd2alphatiza7ezd2app3447za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3954, obj_t BgL_nodez00_3955)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 150 */
			{
				BgL_appz00_bglt BgL_nodez00_1347;

				{	/* Ast/alphatize.scm 153 */
					BgL_appz00_bglt BgL_auxz00_5942;

					BgL_nodez00_1347 = (BgL_appz00_bglt) (BgL_nodez00_3955);
					{	/* Ast/alphatize.scm 154 */
						BgL_appz00_bglt BgL_new3262z00_1351;

						{	/* Ast/alphatize.scm 154 */
							obj_t BgL_arg3632z00_1352;

							BgL_typez00_bglt BgL_arg3633z00_1353;

							obj_t BgL_arg3634z00_1354;

							obj_t BgL_arg3635z00_1355;

							obj_t BgL_arg3636z00_1356;

							obj_t BgL_arg3637z00_1357;

							BgL_arg3632z00_1352 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_1347));
							{
								BgL_nodez00_bglt BgL_auxz00_5945;

								BgL_auxz00_5945 = (BgL_nodez00_bglt) (BgL_nodez00_1347);
								BgL_arg3633z00_1353 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_5945))->BgL_typez00);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_5948;

								BgL_auxz00_5948 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1347);
								BgL_arg3634z00_1354 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_5948))->
									BgL_sidezd2effectzf3z21);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_5951;

								BgL_auxz00_5951 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1347);
								BgL_arg3635z00_1355 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_5951))->
									BgL_keyz00);
							}
							{	/* Ast/alphatize.scm 155 */
								BgL_nodez00_bglt BgL_varz00_1358;

								{	/* Ast/alphatize.scm 155 */
									BgL_varz00_bglt BgL_arg3642z00_1365;

									BgL_arg3642z00_1365 =
										(((BgL_appz00_bglt) CREF(BgL_nodez00_1347))->BgL_funz00);
									{	/* Ast/alphatize.scm 155 */
										BgL_nodez00_bglt BgL_res4097z00_2328;

										{	/* Ast/alphatize.scm 155 */
											BgL_nodez00_bglt BgL_nodez00_2302;

											BgL_nodez00_2302 =
												(BgL_nodez00_bglt) (BgL_arg3642z00_1365);
											{	/* Ast/alphatize.scm 155 */
												obj_t BgL_method3435z00_2303;

												{	/* Ast/alphatize.scm 155 */
													BgL_objectz00_bglt BgL_objz00_2304;

													BgL_objz00_2304 =
														(BgL_objectz00_bglt) (BgL_nodez00_2302);
													{	/* Ast/alphatize.scm 155 */
														long BgL_objzd2classzd2numz00_2305;

														BgL_objzd2classzd2numz00_2305 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2304);
														{	/* Ast/alphatize.scm 155 */
															obj_t BgL_arg2643z00_2306;

															BgL_arg2643z00_2306 =
																PROCEDURE_REF
																(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																(int) (((long) 1)));
															{	/* Ast/alphatize.scm 155 */
																obj_t BgL_arrayz00_2308;

																int BgL_offsetz00_2309;

																BgL_arrayz00_2308 = BgL_arg2643z00_2306;
																BgL_offsetz00_2309 =
																	(int) (BgL_objzd2classzd2numz00_2305);
																{	/* Ast/alphatize.scm 155 */
																	long BgL_offsetz00_2310;

																	BgL_offsetz00_2310 =
																		((long) (BgL_offsetz00_2309) - OBJECT_TYPE);
																	{	/* Ast/alphatize.scm 155 */
																		long BgL_modz00_2311;

																		{	/* Ast/alphatize.scm 155 */
																			int BgL_arg2645z00_2312;

																			BgL_arg2645z00_2312 = (int) (((long) 16));
																			{	/* Ast/alphatize.scm 155 */
																				long BgL_auxz00_5964;

																				BgL_auxz00_5964 =
																					(long) (BgL_arg2645z00_2312);
																				BgL_modz00_2311 =
																					(BgL_offsetz00_2310 /
																					BgL_auxz00_5964);
																		}}
																		{	/* Ast/alphatize.scm 155 */
																			long BgL_restz00_2313;

																			{	/* Ast/alphatize.scm 155 */
																				int BgL_arg2644z00_2314;

																				BgL_arg2644z00_2314 =
																					(int) (((long) 16));
																				{	/* Ast/alphatize.scm 155 */
																					long BgL_auxz00_5968;

																					BgL_auxz00_5968 =
																						(long) (BgL_arg2644z00_2314);
																					BgL_restz00_2313 =
																						(BgL_offsetz00_2310 %
																						BgL_auxz00_5968);
																			}}
																			{	/* Ast/alphatize.scm 155 */

																				BgL_method3435z00_2303 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2308,
																						(int) (BgL_modz00_2311)),
																					(int) (BgL_restz00_2313));
												}}}}}}}}
												BgL_res4097z00_2328 =
													(BgL_nodez00_bglt) (PROCEDURE_ENTRY
													(BgL_method3435z00_2303) (BgL_method3435z00_2303,
														(obj_t) (BgL_nodez00_2302), BEOA));
										}}
										BgL_varz00_1358 = BgL_res4097z00_2328;
								}}
								{	/* Ast/alphatize.scm 156 */
									bool_t BgL_testz00_5979;

									{	/* Ast/alphatize.scm 156 */
										obj_t BgL_obj2190z00_2329;

										BgL_obj2190z00_2329 = (obj_t) (BgL_varz00_1358);
										BgL_testz00_5979 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj2190z00_2329,
											BGl_closurez00zzast_nodez00);
									}
									if (BgL_testz00_5979)
										{	/* Ast/alphatize.scm 157 */
											BgL_varz00_bglt BgL_duplicated3263z00_1360;

											BgL_duplicated3263z00_1360 =
												(BgL_varz00_bglt) (
												(BgL_closurez00_bglt) (BgL_varz00_1358));
											{	/* Ast/alphatize.scm 157 */
												BgL_varz00_bglt BgL_new3264z00_1361;

												{	/* Ast/alphatize.scm 157 */
													obj_t BgL_arg3639z00_1362;

													BgL_typez00_bglt BgL_arg3640z00_1363;

													BgL_variablez00_bglt BgL_arg3641z00_1364;

													{
														BgL_nodez00_bglt BgL_auxz00_5984;

														BgL_auxz00_5984 =
															(BgL_nodez00_bglt) (BgL_duplicated3263z00_1360);
														BgL_arg3639z00_1362 =
															(((BgL_nodez00_bglt) CREF(BgL_auxz00_5984))->
															BgL_locz00);
													}
													{
														BgL_nodez00_bglt BgL_auxz00_5987;

														BgL_auxz00_5987 =
															(BgL_nodez00_bglt) (BgL_duplicated3263z00_1360);
														BgL_arg3640z00_1363 =
															(((BgL_nodez00_bglt) CREF(BgL_auxz00_5987))->
															BgL_typez00);
													}
													BgL_arg3641z00_1364 =
														(((BgL_varz00_bglt)
															CREF(BgL_duplicated3263z00_1360))->
														BgL_variablez00);
													BgL_new3264z00_1361 =
														BGl_makezd2varzd2zzast_nodez00(BgL_arg3639z00_1362,
														BgL_arg3640z00_1363, BgL_arg3641z00_1364);
												}
												{	/* Ast/alphatize.scm 157 */

													BgL_arg3636z00_1356 = (obj_t) (BgL_new3264z00_1361);
												}
											}
										}
									else
										{	/* Ast/alphatize.scm 156 */
											BgL_arg3636z00_1356 = (obj_t) (BgL_varz00_1358);
										}
								}
							}
							{	/* Ast/alphatize.scm 159 */
								obj_t BgL_l3338z00_1366;

								BgL_l3338z00_1366 =
									(((BgL_appz00_bglt) CREF(BgL_nodez00_1347))->BgL_argsz00);
								if (NULLP(BgL_l3338z00_1366))
									{	/* Ast/alphatize.scm 159 */
										BgL_arg3637z00_1357 = BNIL;
									}
								else
									{	/* Ast/alphatize.scm 159 */
										obj_t BgL_head3340z00_1368;

										{	/* Ast/alphatize.scm 159 */
											BgL_nodez00_bglt BgL_arg3650z00_1381;

											{	/* Ast/alphatize.scm 159 */
												obj_t BgL_arg3652z00_1383;

												BgL_arg3652z00_1383 = CAR(BgL_l3338z00_1366);
												{	/* Ast/alphatize.scm 159 */
													BgL_nodez00_bglt BgL_res4100z00_2362;

													{	/* Ast/alphatize.scm 159 */
														BgL_nodez00_bglt BgL_nodez00_2336;

														BgL_nodez00_2336 =
															(BgL_nodez00_bglt) (BgL_arg3652z00_1383);
														{	/* Ast/alphatize.scm 159 */
															obj_t BgL_method3435z00_2337;

															{	/* Ast/alphatize.scm 159 */
																BgL_objectz00_bglt BgL_objz00_2338;

																BgL_objz00_2338 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2336);
																{	/* Ast/alphatize.scm 159 */
																	long BgL_objzd2classzd2numz00_2339;

																	BgL_objzd2classzd2numz00_2339 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2338);
																	{	/* Ast/alphatize.scm 159 */
																		obj_t BgL_arg2643z00_2340;

																		BgL_arg2643z00_2340 =
																			PROCEDURE_REF
																			(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																			(int) (((long) 1)));
																		{	/* Ast/alphatize.scm 159 */
																			obj_t BgL_arrayz00_2342;

																			int BgL_offsetz00_2343;

																			BgL_arrayz00_2342 = BgL_arg2643z00_2340;
																			BgL_offsetz00_2343 =
																				(int) (BgL_objzd2classzd2numz00_2339);
																			{	/* Ast/alphatize.scm 159 */
																				long BgL_offsetz00_2344;

																				BgL_offsetz00_2344 =
																					(
																					(long) (BgL_offsetz00_2343) -
																					OBJECT_TYPE);
																				{	/* Ast/alphatize.scm 159 */
																					long BgL_modz00_2345;

																					{	/* Ast/alphatize.scm 159 */
																						int BgL_arg2645z00_2346;

																						BgL_arg2645z00_2346 =
																							(int) (((long) 16));
																						{	/* Ast/alphatize.scm 159 */
																							long BgL_auxz00_6007;

																							BgL_auxz00_6007 =
																								(long) (BgL_arg2645z00_2346);
																							BgL_modz00_2345 =
																								(BgL_offsetz00_2344 /
																								BgL_auxz00_6007);
																					}}
																					{	/* Ast/alphatize.scm 159 */
																						long BgL_restz00_2347;

																						{	/* Ast/alphatize.scm 159 */
																							int BgL_arg2644z00_2348;

																							BgL_arg2644z00_2348 =
																								(int) (((long) 16));
																							{	/* Ast/alphatize.scm 159 */
																								long BgL_auxz00_6011;

																								BgL_auxz00_6011 =
																									(long) (BgL_arg2644z00_2348);
																								BgL_restz00_2347 =
																									(BgL_offsetz00_2344 %
																									BgL_auxz00_6011);
																						}}
																						{	/* Ast/alphatize.scm 159 */

																							BgL_method3435z00_2337 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2342,
																									(int) (BgL_modz00_2345)),
																								(int) (BgL_restz00_2347));
															}}}}}}}}
															BgL_res4100z00_2362 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3435z00_2337)
																(BgL_method3435z00_2337,
																	(obj_t) (BgL_nodez00_2336), BEOA));
													}}
													BgL_arg3650z00_1381 = BgL_res4100z00_2362;
											}}
											BgL_head3340z00_1368 =
												MAKE_PAIR((obj_t) (BgL_arg3650z00_1381), BNIL);
										}
										{	/* Ast/alphatize.scm 159 */
											obj_t BgL_g3343z00_1369;

											BgL_g3343z00_1369 = CDR(BgL_l3338z00_1366);
											{
												obj_t BgL_l3338z00_1371;

												obj_t BgL_tail3341z00_1372;

												BgL_l3338z00_1371 = BgL_g3343z00_1369;
												BgL_tail3341z00_1372 = BgL_head3340z00_1368;
											BgL_zc3anonymousza33644ze3z83_1373:
												if (NULLP(BgL_l3338z00_1371))
													{	/* Ast/alphatize.scm 159 */
														BgL_arg3637z00_1357 = BgL_head3340z00_1368;
													}
												else
													{	/* Ast/alphatize.scm 159 */
														obj_t BgL_newtail3342z00_1375;

														{	/* Ast/alphatize.scm 159 */
															BgL_nodez00_bglt BgL_arg3647z00_1377;

															{	/* Ast/alphatize.scm 159 */
																obj_t BgL_arg3649z00_1379;

																BgL_arg3649z00_1379 = CAR(BgL_l3338z00_1371);
																{	/* Ast/alphatize.scm 159 */
																	BgL_nodez00_bglt BgL_res4103z00_2394;

																	{	/* Ast/alphatize.scm 159 */
																		BgL_nodez00_bglt BgL_nodez00_2368;

																		BgL_nodez00_2368 =
																			(BgL_nodez00_bglt) (BgL_arg3649z00_1379);
																		{	/* Ast/alphatize.scm 159 */
																			obj_t BgL_method3435z00_2369;

																			{	/* Ast/alphatize.scm 159 */
																				BgL_objectz00_bglt BgL_objz00_2370;

																				BgL_objz00_2370 =
																					(BgL_objectz00_bglt)
																					(BgL_nodez00_2368);
																				{	/* Ast/alphatize.scm 159 */
																					long BgL_objzd2classzd2numz00_2371;

																					BgL_objzd2classzd2numz00_2371 =
																						BGL_OBJECT_CLASS_NUM
																						(BgL_objz00_2370);
																					{	/* Ast/alphatize.scm 159 */
																						obj_t BgL_arg2643z00_2372;

																						BgL_arg2643z00_2372 =
																							PROCEDURE_REF
																							(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																							(int) (((long) 1)));
																						{	/* Ast/alphatize.scm 159 */
																							obj_t BgL_arrayz00_2374;

																							int BgL_offsetz00_2375;

																							BgL_arrayz00_2374 =
																								BgL_arg2643z00_2372;
																							BgL_offsetz00_2375 =
																								(int)
																								(BgL_objzd2classzd2numz00_2371);
																							{	/* Ast/alphatize.scm 159 */
																								long BgL_offsetz00_2376;

																								BgL_offsetz00_2376 =
																									(
																									(long) (BgL_offsetz00_2375) -
																									OBJECT_TYPE);
																								{	/* Ast/alphatize.scm 159 */
																									long BgL_modz00_2377;

																									{	/* Ast/alphatize.scm 159 */
																										int BgL_arg2645z00_2378;

																										BgL_arg2645z00_2378 =
																											(int) (((long) 16));
																										{	/* Ast/alphatize.scm 159 */
																											long BgL_auxz00_6037;

																											BgL_auxz00_6037 =
																												(long)
																												(BgL_arg2645z00_2378);
																											BgL_modz00_2377 =
																												(BgL_offsetz00_2376 /
																												BgL_auxz00_6037);
																									}}
																									{	/* Ast/alphatize.scm 159 */
																										long BgL_restz00_2379;

																										{	/* Ast/alphatize.scm 159 */
																											int BgL_arg2644z00_2380;

																											BgL_arg2644z00_2380 =
																												(int) (((long) 16));
																											{	/* Ast/alphatize.scm 159 */
																												long BgL_auxz00_6041;

																												BgL_auxz00_6041 =
																													(long)
																													(BgL_arg2644z00_2380);
																												BgL_restz00_2379 =
																													(BgL_offsetz00_2376 %
																													BgL_auxz00_6041);
																										}}
																										{	/* Ast/alphatize.scm 159 */

																											BgL_method3435z00_2369 =
																												VECTOR_REF(VECTOR_REF
																												(BgL_arrayz00_2374,
																													(int)
																													(BgL_modz00_2377)),
																												(int)
																												(BgL_restz00_2379));
																			}}}}}}}}
																			BgL_res4103z00_2394 =
																				(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																				(BgL_method3435z00_2369)
																				(BgL_method3435z00_2369,
																					(obj_t) (BgL_nodez00_2368), BEOA));
																	}}
																	BgL_arg3647z00_1377 = BgL_res4103z00_2394;
															}}
															BgL_newtail3342z00_1375 =
																MAKE_PAIR((obj_t) (BgL_arg3647z00_1377), BNIL);
														}
														SET_CDR(BgL_tail3341z00_1372,
															BgL_newtail3342z00_1375);
														{
															obj_t BgL_tail3341z00_6057;

															obj_t BgL_l3338z00_6055;

															BgL_l3338z00_6055 = CDR(BgL_l3338z00_1371);
															BgL_tail3341z00_6057 = BgL_newtail3342z00_1375;
															BgL_tail3341z00_1372 = BgL_tail3341z00_6057;
															BgL_l3338z00_1371 = BgL_l3338z00_6055;
															goto BgL_zc3anonymousza33644ze3z83_1373;
														}
													}
											}
										}
									}
							}
							BgL_new3262z00_1351 =
								BGl_makezd2appzd2zzast_nodez00(BgL_arg3632z00_1352,
								BgL_arg3633z00_1353, BgL_arg3634z00_1354, BgL_arg3635z00_1355,
								(BgL_varz00_bglt) (BgL_arg3636z00_1356), BgL_arg3637z00_1357);
						}
						{	/* Ast/alphatize.scm 153 */

							BgL_auxz00_5942 = BgL_new3262z00_1351;
						}
					}
					return (obj_t) (BgL_auxz00_5942);
				}
			}
		}
	}



/* do-alphatize-sequenc3445 */
	obj_t BGl_dozd2alphatiza7ezd2sequenc3445za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3956, obj_t BgL_nodez00_3957)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 142 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1317;

				{	/* Ast/alphatize.scm 143 */
					BgL_sequencez00_bglt BgL_auxz00_6062;

					BgL_nodez00_1317 = (BgL_sequencez00_bglt) (BgL_nodez00_3957);
					{	/* Ast/alphatize.scm 144 */
						BgL_sequencez00_bglt BgL_new3260z00_1321;

						{	/* Ast/alphatize.scm 144 */
							obj_t BgL_arg3616z00_1322;

							BgL_typez00_bglt BgL_arg3617z00_1323;

							obj_t BgL_arg3618z00_1324;

							obj_t BgL_arg3619z00_1325;

							obj_t BgL_arg3620z00_1326;

							BgL_arg3616z00_1322 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_1317));
							{
								BgL_nodez00_bglt BgL_auxz00_6065;

								BgL_auxz00_6065 = (BgL_nodez00_bglt) (BgL_nodez00_1317);
								BgL_arg3617z00_1323 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_6065))->BgL_typez00);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_6068;

								BgL_auxz00_6068 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1317);
								BgL_arg3618z00_1324 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_6068))->
									BgL_sidezd2effectzf3z21);
							}
							{
								BgL_nodezf2effectzf2_bglt BgL_auxz00_6071;

								BgL_auxz00_6071 =
									(BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1317);
								BgL_arg3619z00_1325 =
									(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_6071))->
									BgL_keyz00);
							}
							{	/* Ast/alphatize.scm 145 */
								obj_t BgL_l3332z00_1327;

								BgL_l3332z00_1327 =
									(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1317))->
									BgL_nodesz00);
								if (NULLP(BgL_l3332z00_1327))
									{	/* Ast/alphatize.scm 145 */
										BgL_arg3620z00_1326 = BNIL;
									}
								else
									{	/* Ast/alphatize.scm 145 */
										obj_t BgL_head3334z00_1329;

										{	/* Ast/alphatize.scm 145 */
											BgL_nodez00_bglt BgL_arg3628z00_1342;

											{	/* Ast/alphatize.scm 145 */
												obj_t BgL_arg3630z00_1344;

												BgL_arg3630z00_1344 = CAR(BgL_l3332z00_1327);
												{	/* Ast/alphatize.scm 145 */
													BgL_nodez00_bglt BgL_res4091z00_2260;

													{	/* Ast/alphatize.scm 145 */
														BgL_nodez00_bglt BgL_nodez00_2234;

														BgL_nodez00_2234 =
															(BgL_nodez00_bglt) (BgL_arg3630z00_1344);
														{	/* Ast/alphatize.scm 145 */
															obj_t BgL_method3435z00_2235;

															{	/* Ast/alphatize.scm 145 */
																BgL_objectz00_bglt BgL_objz00_2236;

																BgL_objz00_2236 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2234);
																{	/* Ast/alphatize.scm 145 */
																	long BgL_objzd2classzd2numz00_2237;

																	BgL_objzd2classzd2numz00_2237 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2236);
																	{	/* Ast/alphatize.scm 145 */
																		obj_t BgL_arg2643z00_2238;

																		BgL_arg2643z00_2238 =
																			PROCEDURE_REF
																			(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																			(int) (((long) 1)));
																		{	/* Ast/alphatize.scm 145 */
																			obj_t BgL_arrayz00_2240;

																			int BgL_offsetz00_2241;

																			BgL_arrayz00_2240 = BgL_arg2643z00_2238;
																			BgL_offsetz00_2241 =
																				(int) (BgL_objzd2classzd2numz00_2237);
																			{	/* Ast/alphatize.scm 145 */
																				long BgL_offsetz00_2242;

																				BgL_offsetz00_2242 =
																					(
																					(long) (BgL_offsetz00_2241) -
																					OBJECT_TYPE);
																				{	/* Ast/alphatize.scm 145 */
																					long BgL_modz00_2243;

																					{	/* Ast/alphatize.scm 145 */
																						int BgL_arg2645z00_2244;

																						BgL_arg2645z00_2244 =
																							(int) (((long) 16));
																						{	/* Ast/alphatize.scm 145 */
																							long BgL_auxz00_6087;

																							BgL_auxz00_6087 =
																								(long) (BgL_arg2645z00_2244);
																							BgL_modz00_2243 =
																								(BgL_offsetz00_2242 /
																								BgL_auxz00_6087);
																					}}
																					{	/* Ast/alphatize.scm 145 */
																						long BgL_restz00_2245;

																						{	/* Ast/alphatize.scm 145 */
																							int BgL_arg2644z00_2246;

																							BgL_arg2644z00_2246 =
																								(int) (((long) 16));
																							{	/* Ast/alphatize.scm 145 */
																								long BgL_auxz00_6091;

																								BgL_auxz00_6091 =
																									(long) (BgL_arg2644z00_2246);
																								BgL_restz00_2245 =
																									(BgL_offsetz00_2242 %
																									BgL_auxz00_6091);
																						}}
																						{	/* Ast/alphatize.scm 145 */

																							BgL_method3435z00_2235 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2240,
																									(int) (BgL_modz00_2243)),
																								(int) (BgL_restz00_2245));
															}}}}}}}}
															BgL_res4091z00_2260 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3435z00_2235)
																(BgL_method3435z00_2235,
																	(obj_t) (BgL_nodez00_2234), BEOA));
													}}
													BgL_arg3628z00_1342 = BgL_res4091z00_2260;
											}}
											BgL_head3334z00_1329 =
												MAKE_PAIR((obj_t) (BgL_arg3628z00_1342), BNIL);
										}
										{	/* Ast/alphatize.scm 145 */
											obj_t BgL_g3337z00_1330;

											BgL_g3337z00_1330 = CDR(BgL_l3332z00_1327);
											{
												obj_t BgL_l3332z00_1332;

												obj_t BgL_tail3335z00_1333;

												BgL_l3332z00_1332 = BgL_g3337z00_1330;
												BgL_tail3335z00_1333 = BgL_head3334z00_1329;
											BgL_zc3anonymousza33622ze3z83_1334:
												if (NULLP(BgL_l3332z00_1332))
													{	/* Ast/alphatize.scm 145 */
														BgL_arg3620z00_1326 = BgL_head3334z00_1329;
													}
												else
													{	/* Ast/alphatize.scm 145 */
														obj_t BgL_newtail3336z00_1336;

														{	/* Ast/alphatize.scm 145 */
															BgL_nodez00_bglt BgL_arg3625z00_1338;

															{	/* Ast/alphatize.scm 145 */
																obj_t BgL_arg3627z00_1340;

																BgL_arg3627z00_1340 = CAR(BgL_l3332z00_1332);
																{	/* Ast/alphatize.scm 145 */
																	BgL_nodez00_bglt BgL_res4094z00_2292;

																	{	/* Ast/alphatize.scm 145 */
																		BgL_nodez00_bglt BgL_nodez00_2266;

																		BgL_nodez00_2266 =
																			(BgL_nodez00_bglt) (BgL_arg3627z00_1340);
																		{	/* Ast/alphatize.scm 145 */
																			obj_t BgL_method3435z00_2267;

																			{	/* Ast/alphatize.scm 145 */
																				BgL_objectz00_bglt BgL_objz00_2268;

																				BgL_objz00_2268 =
																					(BgL_objectz00_bglt)
																					(BgL_nodez00_2266);
																				{	/* Ast/alphatize.scm 145 */
																					long BgL_objzd2classzd2numz00_2269;

																					BgL_objzd2classzd2numz00_2269 =
																						BGL_OBJECT_CLASS_NUM
																						(BgL_objz00_2268);
																					{	/* Ast/alphatize.scm 145 */
																						obj_t BgL_arg2643z00_2270;

																						BgL_arg2643z00_2270 =
																							PROCEDURE_REF
																							(BGl_dozd2alphatiza7ezd2envza7zzast_alphatiza7eza7,
																							(int) (((long) 1)));
																						{	/* Ast/alphatize.scm 145 */
																							obj_t BgL_arrayz00_2272;

																							int BgL_offsetz00_2273;

																							BgL_arrayz00_2272 =
																								BgL_arg2643z00_2270;
																							BgL_offsetz00_2273 =
																								(int)
																								(BgL_objzd2classzd2numz00_2269);
																							{	/* Ast/alphatize.scm 145 */
																								long BgL_offsetz00_2274;

																								BgL_offsetz00_2274 =
																									(
																									(long) (BgL_offsetz00_2273) -
																									OBJECT_TYPE);
																								{	/* Ast/alphatize.scm 145 */
																									long BgL_modz00_2275;

																									{	/* Ast/alphatize.scm 145 */
																										int BgL_arg2645z00_2276;

																										BgL_arg2645z00_2276 =
																											(int) (((long) 16));
																										{	/* Ast/alphatize.scm 145 */
																											long BgL_auxz00_6117;

																											BgL_auxz00_6117 =
																												(long)
																												(BgL_arg2645z00_2276);
																											BgL_modz00_2275 =
																												(BgL_offsetz00_2274 /
																												BgL_auxz00_6117);
																									}}
																									{	/* Ast/alphatize.scm 145 */
																										long BgL_restz00_2277;

																										{	/* Ast/alphatize.scm 145 */
																											int BgL_arg2644z00_2278;

																											BgL_arg2644z00_2278 =
																												(int) (((long) 16));
																											{	/* Ast/alphatize.scm 145 */
																												long BgL_auxz00_6121;

																												BgL_auxz00_6121 =
																													(long)
																													(BgL_arg2644z00_2278);
																												BgL_restz00_2277 =
																													(BgL_offsetz00_2274 %
																													BgL_auxz00_6121);
																										}}
																										{	/* Ast/alphatize.scm 145 */

																											BgL_method3435z00_2267 =
																												VECTOR_REF(VECTOR_REF
																												(BgL_arrayz00_2272,
																													(int)
																													(BgL_modz00_2275)),
																												(int)
																												(BgL_restz00_2277));
																			}}}}}}}}
																			BgL_res4094z00_2292 =
																				(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																				(BgL_method3435z00_2267)
																				(BgL_method3435z00_2267,
																					(obj_t) (BgL_nodez00_2266), BEOA));
																	}}
																	BgL_arg3625z00_1338 = BgL_res4094z00_2292;
															}}
															BgL_newtail3336z00_1336 =
																MAKE_PAIR((obj_t) (BgL_arg3625z00_1338), BNIL);
														}
														SET_CDR(BgL_tail3335z00_1333,
															BgL_newtail3336z00_1336);
														{
															obj_t BgL_tail3335z00_6137;

															obj_t BgL_l3332z00_6135;

															BgL_l3332z00_6135 = CDR(BgL_l3332z00_1332);
															BgL_tail3335z00_6137 = BgL_newtail3336z00_1336;
															BgL_tail3335z00_1333 = BgL_tail3335z00_6137;
															BgL_l3332z00_1332 = BgL_l3332z00_6135;
															goto BgL_zc3anonymousza33622ze3z83_1334;
														}
													}
											}
										}
									}
							}
							BgL_new3260z00_1321 =
								BGl_makezd2sequencezd2zzast_nodez00(BgL_arg3616z00_1322,
								BgL_arg3617z00_1323, BgL_arg3618z00_1324, BgL_arg3619z00_1325,
								BgL_arg3620z00_1326);
						}
						{	/* Ast/alphatize.scm 143 */

							BgL_auxz00_6062 = BgL_new3260z00_1321;
						}
					}
					return (obj_t) (BgL_auxz00_6062);
				}
			}
		}
	}



/* do-alphatize-kwote3443 */
	obj_t BGl_dozd2alphatiza7ezd2kwote3443za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3958, obj_t BgL_nodez00_3959)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 136 */
			{
				BgL_kwotez00_bglt BgL_nodez00_1307;

				{	/* Ast/alphatize.scm 137 */
					BgL_kwotez00_bglt BgL_auxz00_6141;

					BgL_nodez00_1307 = (BgL_kwotez00_bglt) (BgL_nodez00_3959);
					{	/* Ast/alphatize.scm 137 */
						BgL_kwotez00_bglt BgL_new3258z00_1311;

						{	/* Ast/alphatize.scm 137 */
							obj_t BgL_arg3612z00_1312;

							BgL_typez00_bglt BgL_arg3613z00_1313;

							obj_t BgL_arg3614z00_1314;

							BgL_arg3612z00_1312 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_1307));
							{
								BgL_nodez00_bglt BgL_auxz00_6144;

								BgL_auxz00_6144 = (BgL_nodez00_bglt) (BgL_nodez00_1307);
								BgL_arg3613z00_1313 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_6144))->BgL_typez00);
							}
							BgL_arg3614z00_1314 =
								(((BgL_kwotez00_bglt) CREF(BgL_nodez00_1307))->BgL_valuez00);
							BgL_new3258z00_1311 =
								BGl_makezd2kwotezd2zzast_nodez00(BgL_arg3612z00_1312,
								BgL_arg3613z00_1313, BgL_arg3614z00_1314);
						}
						{	/* Ast/alphatize.scm 137 */

							BgL_auxz00_6141 = BgL_new3258z00_1311;
						}
					}
					return (obj_t) (BgL_auxz00_6141);
				}
			}
		}
	}



/* do-alphatize-closure3441 */
	obj_t BGl_dozd2alphatiza7ezd2closure3441za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3960, obj_t BgL_nodez00_3961)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 116 */
			{
				BgL_closurez00_bglt BgL_nodez00_1282;

				BgL_nodez00_1282 = (BgL_closurez00_bglt) (BgL_nodez00_3961);
				{	/* Ast/alphatize.scm 117 */
					BgL_variablez00_bglt BgL_varz00_1285;

					{
						BgL_varz00_bglt BgL_auxz00_6151;

						BgL_auxz00_6151 = (BgL_varz00_bglt) (BgL_nodez00_1282);
						BgL_varz00_1285 =
							(((BgL_varz00_bglt) CREF(BgL_auxz00_6151))->BgL_variablez00);
					}
					{	/* Ast/alphatize.scm 117 */
						obj_t BgL_alphaz00_1286;

						BgL_alphaz00_1286 =
							(((BgL_variablez00_bglt) CREF(BgL_varz00_1285))->
							BgL_fastzd2alphazd2);
						{	/* Ast/alphatize.scm 118 */

							if ((BgL_alphaz00_1286 == BUNSPEC))
								{	/* Ast/alphatize.scm 120 */
									{	/* Ast/alphatize.scm 121 */
										obj_t BgL_arg3597z00_1288;

										obj_t BgL_arg3598z00_1289;

										{
											BgL_nodez00_bglt BgL_auxz00_6157;

											BgL_auxz00_6157 = (BgL_nodez00_bglt) (BgL_nodez00_1282);
											BgL_arg3597z00_1288 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_6157))->
												BgL_locz00);
										}
										BgL_arg3598z00_1289 = CNST_TABLE_REF(((long) 4));
										BGl_usezd2variablez12zc0zzast_sexpz00(BgL_varz00_1285,
											BgL_arg3597z00_1288, BgL_arg3598z00_1289);
									}
									{	/* Ast/alphatize.scm 122 */
										BgL_closurez00_bglt BgL_new3254z00_1291;

										{	/* Ast/alphatize.scm 122 */
											obj_t BgL_arg3599z00_1292;

											BgL_typez00_bglt BgL_arg3600z00_1293;

											BgL_variablez00_bglt BgL_arg3601z00_1294;

											BgL_arg3599z00_1292 =
												BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
												(obj_t) (BgL_nodez00_1282));
											{
												BgL_nodez00_bglt BgL_auxz00_6164;

												BgL_auxz00_6164 = (BgL_nodez00_bglt) (BgL_nodez00_1282);
												BgL_arg3600z00_1293 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_6164))->
													BgL_typez00);
											}
											{
												BgL_varz00_bglt BgL_auxz00_6167;

												BgL_auxz00_6167 = (BgL_varz00_bglt) (BgL_nodez00_1282);
												BgL_arg3601z00_1294 =
													(((BgL_varz00_bglt) CREF(BgL_auxz00_6167))->
													BgL_variablez00);
											}
											BgL_new3254z00_1291 =
												BGl_makezd2closurezd2zzast_nodez00(BgL_arg3599z00_1292,
												BgL_arg3600z00_1293, BgL_arg3601z00_1294);
										}
										{	/* Ast/alphatize.scm 122 */

											return (obj_t) (BgL_new3254z00_1291);
										}
									}
								}
							else
								{	/* Ast/alphatize.scm 120 */
									if (BGl_iszd2azf3z21zz__objectz00(BgL_alphaz00_1286,
											BGl_variablez00zzast_varz00))
										{	/* Ast/alphatize.scm 123 */
											{	/* Ast/alphatize.scm 124 */
												obj_t BgL_arg3603z00_1296;

												obj_t BgL_arg3604z00_1297;

												{
													BgL_nodez00_bglt BgL_auxz00_6174;

													BgL_auxz00_6174 =
														(BgL_nodez00_bglt) (BgL_nodez00_1282);
													BgL_arg3603z00_1296 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_6174))->
														BgL_locz00);
												}
												BgL_arg3604z00_1297 = CNST_TABLE_REF(((long) 4));
												BGl_usezd2variablez12zc0zzast_sexpz00(
													(BgL_variablez00_bglt) (BgL_alphaz00_1286),
													BgL_arg3603z00_1296, BgL_arg3604z00_1297);
											}
											{	/* Ast/alphatize.scm 126 */
												BgL_closurez00_bglt BgL_new3256z00_1299;

												{	/* Ast/alphatize.scm 126 */
													obj_t BgL_arg3605z00_1300;

													BgL_typez00_bglt BgL_arg3606z00_1301;

													BgL_arg3605z00_1300 =
														BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
														(obj_t) (BgL_nodez00_1282));
													{
														BgL_nodez00_bglt BgL_auxz00_6182;

														BgL_auxz00_6182 =
															(BgL_nodez00_bglt) (BgL_nodez00_1282);
														BgL_arg3606z00_1301 =
															(((BgL_nodez00_bglt) CREF(BgL_auxz00_6182))->
															BgL_typez00);
													}
													BgL_new3256z00_1299 =
														BGl_makezd2closurezd2zzast_nodez00
														(BgL_arg3605z00_1300, BgL_arg3606z00_1301,
														(BgL_variablez00_bglt) (BgL_alphaz00_1286));
												}
												{	/* Ast/alphatize.scm 125 */

													return (obj_t) (BgL_new3256z00_1299);
												}
											}
										}
									else
										{	/* Ast/alphatize.scm 123 */
											return
												BGl_internalzd2errorzd2zztools_errorz00
												(BGl_string4258z00zzast_alphatiza7eza7,
												BGl_string4260z00zzast_alphatiza7eza7,
												BGl_shapez00zztools_shapez00((obj_t)
													(BgL_nodez00_1282)));
										}
								}
						}
					}
				}
			}
		}
	}



/* do-alphatize-var3439 */
	obj_t BGl_dozd2alphatiza7ezd2var3439za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3962, obj_t BgL_nodez00_3963)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 87 */
			{
				BgL_varz00_bglt BgL_nodez00_1239;

				BgL_nodez00_1239 = (BgL_varz00_bglt) (BgL_nodez00_3963);
				{	/* Ast/alphatize.scm 88 */
					BgL_variablez00_bglt BgL_varz00_1242;

					BgL_varz00_1242 =
						(((BgL_varz00_bglt) CREF(BgL_nodez00_1239))->BgL_variablez00);
					{	/* Ast/alphatize.scm 88 */
						obj_t BgL_alphaz00_1243;

						BgL_alphaz00_1243 =
							(((BgL_variablez00_bglt) CREF(BgL_varz00_1242))->
							BgL_fastzd2alphazd2);
						{	/* Ast/alphatize.scm 89 */

							if ((BgL_alphaz00_1243 == BUNSPEC))
								{	/* Ast/alphatize.scm 91 */
									{	/* Ast/alphatize.scm 92 */
										obj_t BgL_arg3568z00_1245;

										obj_t BgL_arg3569z00_1246;

										{
											BgL_nodez00_bglt BgL_auxz00_6196;

											BgL_auxz00_6196 = (BgL_nodez00_bglt) (BgL_nodez00_1239);
											BgL_arg3568z00_1245 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_6196))->
												BgL_locz00);
										}
										BgL_arg3569z00_1246 = CNST_TABLE_REF(((long) 4));
										BGl_usezd2variablez12zc0zzast_sexpz00(BgL_varz00_1242,
											BgL_arg3568z00_1245, BgL_arg3569z00_1246);
									}
									{	/* Ast/alphatize.scm 93 */
										BgL_varz00_bglt BgL_new3245z00_1248;

										{	/* Ast/alphatize.scm 93 */
											obj_t BgL_arg3570z00_1249;

											BgL_typez00_bglt BgL_arg3571z00_1250;

											BgL_variablez00_bglt BgL_arg3572z00_1251;

											BgL_arg3570z00_1249 =
												BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
												(obj_t) (BgL_nodez00_1239));
											{
												BgL_nodez00_bglt BgL_auxz00_6203;

												BgL_auxz00_6203 = (BgL_nodez00_bglt) (BgL_nodez00_1239);
												BgL_arg3571z00_1250 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_6203))->
													BgL_typez00);
											}
											BgL_arg3572z00_1251 =
												(((BgL_varz00_bglt) CREF(BgL_nodez00_1239))->
												BgL_variablez00);
											BgL_new3245z00_1248 =
												BGl_makezd2varzd2zzast_nodez00(BgL_arg3570z00_1249,
												BgL_arg3571z00_1250, BgL_arg3572z00_1251);
										}
										{	/* Ast/alphatize.scm 93 */

											return (obj_t) (BgL_new3245z00_1248);
										}
									}
								}
							else
								{	/* Ast/alphatize.scm 91 */
									if (BGl_iszd2azf3z21zz__objectz00(BgL_alphaz00_1243,
											BGl_variablez00zzast_varz00))
										{	/* Ast/alphatize.scm 94 */
											{	/* Ast/alphatize.scm 95 */
												obj_t BgL_arg3574z00_1253;

												obj_t BgL_arg3575z00_1254;

												{
													BgL_nodez00_bglt BgL_auxz00_6211;

													BgL_auxz00_6211 =
														(BgL_nodez00_bglt) (BgL_nodez00_1239);
													BgL_arg3574z00_1253 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_6211))->
														BgL_locz00);
												}
												BgL_arg3575z00_1254 = CNST_TABLE_REF(((long) 4));
												BGl_usezd2variablez12zc0zzast_sexpz00(
													(BgL_variablez00_bglt) (BgL_alphaz00_1243),
													BgL_arg3574z00_1253, BgL_arg3575z00_1254);
											}
											{	/* Ast/alphatize.scm 96 */
												bool_t BgL_testz00_6217;

												{	/* Ast/alphatize.scm 96 */
													BgL_valuez00_bglt BgL_arg3581z00_1262;

													{
														BgL_variablez00_bglt BgL_auxz00_6218;

														BgL_auxz00_6218 =
															(BgL_variablez00_bglt) (BgL_alphaz00_1243);
														BgL_arg3581z00_1262 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_6218))->
															BgL_valuez00);
													}
													{	/* Ast/alphatize.scm 96 */
														obj_t BgL_obj1856z00_2207;

														BgL_obj1856z00_2207 = (obj_t) (BgL_arg3581z00_1262);
														BgL_testz00_6217 =
															BGl_iszd2azf3z21zz__objectz00(BgL_obj1856z00_2207,
															BGl_funz00zzast_varz00);
												}}
												if (BgL_testz00_6217)
													{	/* Ast/alphatize.scm 98 */
														obj_t BgL_arg3577z00_1256;

														BgL_typez00_bglt BgL_arg3578z00_1257;

														BgL_arg3577z00_1256 =
															BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7
															((obj_t) (BgL_nodez00_1239));
														{
															BgL_variablez00_bglt BgL_auxz00_6225;

															BgL_auxz00_6225 =
																(BgL_variablez00_bglt) (BgL_alphaz00_1243);
															BgL_arg3578z00_1257 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_6225))->BgL_typez00);
														}
														return
															(obj_t) (BGl_makezd2closurezd2zzast_nodez00
															(BgL_arg3577z00_1256, BgL_arg3578z00_1257,
																(BgL_variablez00_bglt) (BgL_alphaz00_1243)));
													}
												else
													{	/* Ast/alphatize.scm 102 */
														BgL_varz00_bglt BgL_new3248z00_1259;

														{	/* Ast/alphatize.scm 102 */
															obj_t BgL_arg3579z00_1260;

															BgL_typez00_bglt BgL_arg3580z00_1261;

															BgL_arg3579z00_1260 =
																BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7
																((obj_t) (BgL_nodez00_1239));
															{
																BgL_nodez00_bglt BgL_auxz00_6233;

																BgL_auxz00_6233 =
																	(BgL_nodez00_bglt) (BgL_nodez00_1239);
																BgL_arg3580z00_1261 =
																	(((BgL_nodez00_bglt) CREF(BgL_auxz00_6233))->
																	BgL_typez00);
															}
															BgL_new3248z00_1259 =
																BGl_makezd2varzd2zzast_nodez00
																(BgL_arg3579z00_1260, BgL_arg3580z00_1261,
																(BgL_variablez00_bglt) (BgL_alphaz00_1243));
														}
														{	/* Ast/alphatize.scm 101 */

															return (obj_t) (BgL_new3248z00_1259);
														}
													}
											}
										}
									else
										{	/* Ast/alphatize.scm 94 */
											if (BGl_iszd2azf3z21zz__objectz00(BgL_alphaz00_1243,
													BGl_atomz00zzast_nodez00))
												{	/* Ast/alphatize.scm 105 */
													BgL_atomz00_bglt BgL_duplicated3249z00_1264;

													BgL_duplicated3249z00_1264 =
														(BgL_atomz00_bglt) (BgL_alphaz00_1243);
													{	/* Ast/alphatize.scm 105 */
														BgL_atomz00_bglt BgL_new3250z00_1265;

														{	/* Ast/alphatize.scm 105 */
															obj_t BgL_arg3583z00_1266;

															BgL_typez00_bglt BgL_arg3584z00_1267;

															obj_t BgL_arg3585z00_1268;

															{
																BgL_nodez00_bglt BgL_auxz00_6242;

																BgL_auxz00_6242 =
																	(BgL_nodez00_bglt)
																	(BgL_duplicated3249z00_1264);
																BgL_arg3583z00_1266 =
																	(((BgL_nodez00_bglt) CREF(BgL_auxz00_6242))->
																	BgL_locz00);
															}
															{
																BgL_nodez00_bglt BgL_auxz00_6245;

																BgL_auxz00_6245 =
																	(BgL_nodez00_bglt)
																	(BgL_duplicated3249z00_1264);
																BgL_arg3584z00_1267 =
																	(((BgL_nodez00_bglt) CREF(BgL_auxz00_6245))->
																	BgL_typez00);
															}
															BgL_arg3585z00_1268 =
																(((BgL_atomz00_bglt)
																	CREF(BgL_duplicated3249z00_1264))->
																BgL_valuez00);
															BgL_new3250z00_1265 =
																BGl_makezd2atomzd2zzast_nodez00
																(BgL_arg3583z00_1266, BgL_arg3584z00_1267,
																BgL_arg3585z00_1268);
														}
														{	/* Ast/alphatize.scm 105 */

															return (obj_t) (BgL_new3250z00_1265);
														}
													}
												}
											else
												{	/* Ast/alphatize.scm 104 */
													if (BGl_iszd2azf3z21zz__objectz00(BgL_alphaz00_1243,
															BGl_kwotez00zzast_nodez00))
														{	/* Ast/alphatize.scm 107 */
															BgL_kwotez00_bglt BgL_duplicated3251z00_1270;

															BgL_duplicated3251z00_1270 =
																(BgL_kwotez00_bglt) (BgL_alphaz00_1243);
															{	/* Ast/alphatize.scm 107 */
																BgL_kwotez00_bglt BgL_new3252z00_1271;

																{	/* Ast/alphatize.scm 107 */
																	obj_t BgL_arg3587z00_1272;

																	BgL_typez00_bglt BgL_arg3588z00_1273;

																	obj_t BgL_arg3589z00_1274;

																	{
																		BgL_nodez00_bglt BgL_auxz00_6254;

																		BgL_auxz00_6254 =
																			(BgL_nodez00_bglt)
																			(BgL_duplicated3251z00_1270);
																		BgL_arg3587z00_1272 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_auxz00_6254))->BgL_locz00);
																	}
																	{
																		BgL_nodez00_bglt BgL_auxz00_6257;

																		BgL_auxz00_6257 =
																			(BgL_nodez00_bglt)
																			(BgL_duplicated3251z00_1270);
																		BgL_arg3588z00_1273 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_auxz00_6257))->BgL_typez00);
																	}
																	BgL_arg3589z00_1274 =
																		(((BgL_kwotez00_bglt)
																			CREF(BgL_duplicated3251z00_1270))->
																		BgL_valuez00);
																	BgL_new3252z00_1271 =
																		BGl_makezd2kwotezd2zzast_nodez00
																		(BgL_arg3587z00_1272, BgL_arg3588z00_1273,
																		BgL_arg3589z00_1274);
																}
																{	/* Ast/alphatize.scm 107 */

																	return (obj_t) (BgL_new3252z00_1271);
																}
															}
														}
													else
														{	/* Ast/alphatize.scm 109 */
															obj_t BgL_arg3592z00_1277;

															BgL_arg3592z00_1277 =
																MAKE_PAIR(BGl_shapez00zztools_shapez00(
																	(obj_t) (BgL_nodez00_1239)),
																BGl_shapez00zztools_shapez00
																(BgL_alphaz00_1243));
															return
																BGl_internalzd2errorzd2zztools_errorz00
																(BGl_string4258z00zzast_alphatiza7eza7,
																BGl_string4261z00zzast_alphatiza7eza7,
																BgL_arg3592z00_1277);
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



/* do-alphatize-atom3437 */
	obj_t BGl_dozd2alphatiza7ezd2atom3437za7zzast_alphatiza7eza7(obj_t
		BgL_envz00_3964, obj_t BgL_nodez00_3965)
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 80 */
			{
				BgL_atomz00_bglt BgL_nodez00_1229;

				{	/* Ast/alphatize.scm 81 */
					BgL_atomz00_bglt BgL_auxz00_6269;

					BgL_nodez00_1229 = (BgL_atomz00_bglt) (BgL_nodez00_3965);
					{	/* Ast/alphatize.scm 82 */
						BgL_atomz00_bglt BgL_new3243z00_1233;

						{	/* Ast/alphatize.scm 82 */
							obj_t BgL_arg3563z00_1234;

							BgL_typez00_bglt BgL_arg3564z00_1235;

							obj_t BgL_arg3565z00_1236;

							BgL_arg3563z00_1234 =
								BGl_getzd2inlinezd2locationz00zzast_alphatiza7eza7(
								(obj_t) (BgL_nodez00_1229));
							{
								BgL_nodez00_bglt BgL_auxz00_6272;

								BgL_auxz00_6272 = (BgL_nodez00_bglt) (BgL_nodez00_1229);
								BgL_arg3564z00_1235 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_6272))->BgL_typez00);
							}
							BgL_arg3565z00_1236 =
								(((BgL_atomz00_bglt) CREF(BgL_nodez00_1229))->BgL_valuez00);
							BgL_new3243z00_1233 =
								BGl_makezd2atomzd2zzast_nodez00(BgL_arg3563z00_1234,
								BgL_arg3564z00_1235, BgL_arg3565z00_1236);
						}
						{	/* Ast/alphatize.scm 81 */

							BgL_auxz00_6269 = BgL_new3243z00_1233;
						}
					}
					return (obj_t) (BgL_auxz00_6269);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_alphatiza7eza7()
	{
		AN_OBJECT;
		{	/* Ast/alphatize.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4262z00zzast_alphatiza7eza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4262z00zzast_alphatiza7eza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4262z00zzast_alphatiza7eza7));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4262z00zzast_alphatiza7eza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4262z00zzast_alphatiza7eza7));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4262z00zzast_alphatiza7eza7));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string4262z00zzast_alphatiza7eza7));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string4262z00zzast_alphatiza7eza7));
			BGl_modulezd2initializa7ationz75zzast_applyz00(((long) 121557513),
				BSTRING_TO_STRING(BGl_string4262z00zzast_alphatiza7eza7));
			return
				BGl_modulezd2initializa7ationz75zzast_appz00(((long) 271227279),
				BSTRING_TO_STRING(BGl_string4262z00zzast_alphatiza7eza7));
		}
	}

#ifdef __cplusplus
}
#endif
